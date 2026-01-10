// ============================================================================
// FREEROAM RESOURCE - Server Side
// Handles player spawning, basic commands, and player management
// ============================================================================

// Spawn points around Liberty City (GTA IV)
const spawnPoints = [
    { x: -252.0, y: 947.0, z: 15.0, name: "Star Junction" },
    { x: 932.0, y: -495.0, z: 15.0, name: "Broker Bridge" },
    { x: -365.0, y: 1163.0, z: 14.0, name: "Middle Park" },
    { x: 1243.0, y: -196.0, z: 26.0, name: "Bohan" },
    { x: -1149.0, y: 380.0, z: 21.0, name: "Alderney" },
    { x: 237.0, y: 1002.0, z: 18.0, name: "Rotterdam Tower" },
    { x: -429.0, y: 1494.0, z: 11.0, name: "North Holland" },
    { x: 858.0, y: 279.0, z: 30.0, name: "East Borough Bridge" }
];

// Player skins for GTA IV
const playerSkins = [
    -1667301416,  // Niko Bellic
    -163448165,   // Roman Bellic
    1936355839,   // Little Jacob
    -1938475496,  // Brucie
    970234525,    // Playboy X
    -1784875845,  // Johnny Klebitz
    -1403507487,  // Luis Lopez
];

// Store player data
let playerData = {};

// ============================================================================
// EVENTS
// ============================================================================

// When resource starts
addEventHandler("OnResourceStart", function(event, resource) {
    console.log("[Freeroam] Resource started successfully!");
    console.log("[Freeroam] " + spawnPoints.length + " spawn points loaded");
});

// When a player connects
addEventHandler("OnPlayerConnect", function(event, client, ip) {
    console.log("[Freeroam] Player connecting: " + ip);
});

// When a player joins
addEventHandler("OnPlayerJoined", function(event, client) {
    console.log("[Freeroam] Player joined: " + client.name);

    // Initialize player data
    playerData[client.index] = {
        spawned: false,
        kills: 0,
        deaths: 0,
        money: 5000,
        health: 100,
        armour: 0
    };

    // Welcome message
    messageClient("[SERVER] Welcome to Liberty City Freeroam, " + client.name + "!", client, [255, 200, 100, 255]);
    messageClient("[SERVER] Type /help for available commands", client, [200, 200, 200, 255]);

    // Spawn the player
    spawnPlayer(client);
});

// When a player quits
addEventHandler("OnPlayerQuit", function(event, client, reason) {
    console.log("[Freeroam] Player quit: " + client.name + " - Reason: " + reason);

    // Broadcast quit message
    message("[SERVER] " + client.name + " has left the server", [255, 150, 100, 255]);

    // Clean up player data
    delete playerData[client.index];
});

// When a player dies (gets wasted)
addEventHandler("OnPedWasted", function(event, ped, killer, weapon) {
    // Check if the ped belongs to a player
    let client = getClientFromPed(ped);
    if (client) {
        if (playerData[client.index]) {
            playerData[client.index].deaths++;
        }

        // Check if killed by another player
        if (killer) {
            let killerClient = getClientFromPed(killer);
            if (killerClient && playerData[killerClient.index]) {
                playerData[killerClient.index].kills++;
                message("[KILL] " + killerClient.name + " killed " + client.name, [255, 100, 100, 255]);
            }
        }

        // Respawn after delay
        setTimeout(function() {
            if (client && client.player) {
                spawnPlayer(client);
            }
        }, 3000);
    }
});

// When a player sends a command
addEventHandler("OnPlayerCommand", function(event, client, command, params) {
    let cmd = command.toLowerCase();

    switch(cmd) {
        case "help":
            showHelp(client);
            break;

        case "spawn":
        case "respawn":
            spawnPlayer(client);
            messageClient("[SERVER] You have been respawned!", client, [100, 255, 100, 255]);
            break;

        case "kill":
        case "suicide":
            if (client.player) {
                client.player.health = 0;
                messageClient("[SERVER] You killed yourself!", client, [255, 100, 100, 255]);
            }
            break;

        case "pos":
        case "position":
            if (client.player) {
                let pos = client.player.position;
                messageClient("[POS] X: " + pos[0].toFixed(2) + " Y: " + pos[1].toFixed(2) + " Z: " + pos[2].toFixed(2), client, [200, 200, 255, 255]);
            }
            break;

        case "stats":
            showStats(client);
            break;

        case "players":
        case "online":
            showOnlinePlayers(client);
            break;

        case "heal":
            if (client.player) {
                client.player.health = 100;
                messageClient("[SERVER] You have been healed!", client, [100, 255, 100, 255]);
            }
            break;

        case "armour":
        case "armor":
            if (client.player) {
                client.player.armour = 100;
                messageClient("[SERVER] You have been given armour!", client, [100, 200, 255, 255]);
            }
            break;

        case "skin":
            if (params && params.length > 0) {
                let skinId = parseInt(params);
                if (!isNaN(skinId)) {
                    if (client.player) {
                        client.player.modelIndex = skinId;
                        messageClient("[SERVER] Skin changed to: " + skinId, client, [200, 200, 255, 255]);
                    }
                }
            } else {
                messageClient("[USAGE] /skin <skin_id>", client, [255, 200, 100, 255]);
            }
            break;

        case "weapons":
        case "giveweapons":
            giveWeapons(client);
            messageClient("[SERVER] You have been given weapons!", client, [255, 200, 100, 255]);
            break;

        case "flip":
            if (client.player && client.player.vehicle) {
                let veh = client.player.vehicle;
                let rot = veh.rotation;
                veh.rotation = [0, 0, rot[2]];
                messageClient("[SERVER] Vehicle flipped!", client, [100, 255, 100, 255]);
            } else {
                messageClient("[SERVER] You need to be in a vehicle!", client, [255, 100, 100, 255]);
            }
            break;

        case "fix":
        case "repair":
            if (client.player && client.player.vehicle) {
                client.player.vehicle.health = 1000;
                messageClient("[SERVER] Vehicle repaired!", client, [100, 255, 100, 255]);
            } else {
                messageClient("[SERVER] You need to be in a vehicle!", client, [255, 100, 100, 255]);
            }
            break;

        case "eject":
            if (client.player && client.player.vehicle) {
                client.player.removeFromVehicle();
                messageClient("[SERVER] Ejected from vehicle!", client, [200, 200, 255, 255]);
            }
            break;

        default:
            // Unknown command handled by other resources
            break;
    }
});

// ============================================================================
// FUNCTIONS
// ============================================================================

function spawnPlayer(client) {
    // Select random spawn point
    let spawn = spawnPoints[Math.floor(Math.random() * spawnPoints.length)];

    // Select random skin
    let skin = playerSkins[Math.floor(Math.random() * playerSkins.length)];

    // Spawn the player
    client.spawn([spawn.x, spawn.y, spawn.z], 0, skin);

    // Give basic weapons after short delay
    setTimeout(function() {
        if (client && client.player) {
            giveStarterWeapons(client);
        }
    }, 1000);

    if (playerData[client.index]) {
        playerData[client.index].spawned = true;
    }

    console.log("[Freeroam] Spawned " + client.name + " at " + spawn.name);
}

function giveStarterWeapons(client) {
    if (!client || !client.player) return;

    // Give basic starter weapons (GTA IV weapon IDs)
    // Pistol
    client.giveWeapon(5, 100); // Pistol with 100 ammo
    // SMG
    client.giveWeapon(11, 200); // Micro SMG with 200 ammo
}

function giveWeapons(client) {
    if (!client || !client.player) return;

    // GTA IV Weapon IDs
    client.giveWeapon(1, 1);      // Baseball Bat
    client.giveWeapon(2, 1);      // Knife
    client.giveWeapon(5, 500);    // Pistol
    client.giveWeapon(6, 500);    // Desert Eagle
    client.giveWeapon(9, 200);    // Shotgun
    client.giveWeapon(10, 200);   // Combat Shotgun
    client.giveWeapon(11, 500);   // Micro SMG
    client.giveWeapon(12, 500);   // SMG
    client.giveWeapon(14, 500);   // Assault Rifle
    client.giveWeapon(15, 500);   // Carbine Rifle
    client.giveWeapon(16, 100);   // Sniper Rifle
    client.giveWeapon(18, 20);    // RPG
    client.giveWeapon(19, 20);    // Grenades
    client.giveWeapon(20, 20);    // Molotov
}

function showHelp(client) {
    messageClient("=== AVAILABLE COMMANDS ===", client, [255, 200, 100, 255]);
    messageClient("/spawn - Respawn at a random location", client, [200, 200, 200, 255]);
    messageClient("/kill - Kill yourself", client, [200, 200, 200, 255]);
    messageClient("/pos - Show your current position", client, [200, 200, 200, 255]);
    messageClient("/stats - Show your statistics", client, [200, 200, 200, 255]);
    messageClient("/players - Show online players", client, [200, 200, 200, 255]);
    messageClient("/heal - Restore your health", client, [200, 200, 200, 255]);
    messageClient("/armour - Give yourself armour", client, [200, 200, 200, 255]);
    messageClient("/weapons - Get all weapons", client, [200, 200, 200, 255]);
    messageClient("/skin <id> - Change your skin", client, [200, 200, 200, 255]);
    messageClient("/flip - Flip your vehicle", client, [200, 200, 200, 255]);
    messageClient("/fix - Repair your vehicle", client, [200, 200, 200, 255]);
    messageClient("/eject - Exit vehicle", client, [200, 200, 200, 255]);
    messageClient("=== VEHICLE COMMANDS ===", client, [255, 200, 100, 255]);
    messageClient("/v <name> - Spawn a vehicle", client, [200, 200, 200, 255]);
    messageClient("/dv - Delete your vehicle", client, [200, 200, 200, 255]);
    messageClient("=== TELEPORT COMMANDS ===", client, [255, 200, 100, 255]);
    messageClient("/tp <location> - Teleport to location", client, [200, 200, 200, 255]);
    messageClient("/tplist - List teleport locations", client, [200, 200, 200, 255]);
    messageClient("=== WORLD COMMANDS ===", client, [255, 200, 100, 255]);
    messageClient("/weather <id> - Change weather", client, [200, 200, 200, 255]);
    messageClient("/time <hour> - Change time", client, [200, 200, 200, 255]);
}

function showStats(client) {
    let data = playerData[client.index];
    if (data) {
        messageClient("=== YOUR STATISTICS ===", client, [255, 200, 100, 255]);
        messageClient("Kills: " + data.kills, client, [100, 255, 100, 255]);
        messageClient("Deaths: " + data.deaths, client, [255, 100, 100, 255]);
        let kd = data.deaths > 0 ? (data.kills / data.deaths).toFixed(2) : data.kills.toFixed(2);
        messageClient("K/D Ratio: " + kd, client, [200, 200, 255, 255]);
    }
}

function showOnlinePlayers(client) {
    let clients = getClients();
    messageClient("=== ONLINE PLAYERS (" + clients.length + ") ===", client, [255, 200, 100, 255]);

    for (let i = 0; i < clients.length; i++) {
        let c = clients[i];
        let data = playerData[c.index] || { kills: 0, deaths: 0 };
        messageClient(c.name + " - K: " + data.kills + " D: " + data.deaths, client, [200, 200, 200, 255]);
    }
}

function getClientFromPed(ped) {
    let clients = getClients();
    for (let i = 0; i < clients.length; i++) {
        if (clients[i].player && clients[i].player == ped) {
            return clients[i];
        }
    }
    return null;
}

console.log("[Freeroam] Server script loaded!");
