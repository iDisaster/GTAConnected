// ============================================================================
// MOD MENU - Server Side
// Handles all server-side actions triggered from the client menu
// ============================================================================

// Vehicle model hashes for spawning
const vehicleModels = {
    // Sports Cars
    "infernus": -1461482751,
    "turismo": -982130927,
    "comet": 1063483177,
    "banshee": -1823484407,
    "sultan": 970598228,
    "coquette": 108773431,
    "feltzer": -349601129,
    "f620": -591651781,
    "buffalo": -304802106,

    // Super Cars
    "entityxf": -1291952903,
    "adder": -1216765807,
    "vacca": 338562499,
    "bullet": -1696146015,
    "cheetah": -1311154784,

    // Muscle Cars
    "sabregt": 1357660823,
    "stalion": 1923400478,
    "vigero": -825837129,
    "dukes": 723973206,
    "ruiner": -227741703,
    "phoenix": -2095439403,
    "gauntlet": -1800170043,
    "dominator": 80636076,

    // SUVs
    "patriot": -808457413,
    "cavalcade": 2006918058,
    "granger": 1269098716,
    "huntley": 486987393,
    "landstalker": 1269098716,
    "habanero": 884422927,
    "serrano": 1337041428,
    "rebla": 83136452,

    // Sedans
    "oracle": 1348744438,
    "schafter": -888242983,
    "admiral": -1645064850,
    "vincent": -884237051,
    "presidente": -1150599089,
    "cognoscenti": -2030171296,
    "blista": -344943009,
    "premier": -1883869285,

    // Motorcycles
    "nrg900": -1706076364,
    "pcj600": -909201658,
    "sanchez": 788045382,
    "faggio": 55628203,
    "bati": -891462355,
    "akuma": 1672195559,
    "double": -1670998136,
    "hakuchou": 1265391242,
    "hexer": 301427732,
    "daemon": 2006142190,

    // Emergency
    "police": 2046537925,
    "police2": -1627000575,
    "fbi": 1127131465,
    "noose": -1683328900,
    "ambulance": 1171614426,
    "firetruk": 1938952078,
    "enforcer": 2046537925,

    // Aircraft
    "annihilator": 837858166,
    "maverick": -1660661558,
    "polmav": 353883353,
    "buzzard": 788747387,
    "shamal": -1214293858,

    // Boats
    "jetmax": 861409633,
    "marquis": -1043459709,
    "predator": -488123221,
    "tropic": 290013743,
    "dinghy": 1033245328,
    "squalo": 400514754,
    "reefer": 1016996501,

    // Special
    "taxi": -956048545,
    "stretch": -1961627517,
    "bus": -713569950,
    "trashmaster": 1917016601,
    "forklift": 1491375716,
    "caddy": 1147287684,
    "bulldozer": 1886712733,
    "phantom": -2137348917
};

// Player skin models
const skinModels = [
    -1667301416,  // Niko
    -163448165,   // Roman
    1936355839,   // Jacob
    -1938475496,  // Brucie
    970234525,    // Playboy X
    -1784875845,  // Johnny
    -1403507487,  // Luis
    -1320879687,  // Cop
    -1306011498,  // NOOSE
    2136829318,   // Paramedic
    1616659040,   // Firefighter
    -268651930,   // Business
    1943617350    // Hobo
];

// Store spawned vehicles per player
let playerVehicles = {};

// Player toggle states (for server-validated features)
let playerToggles = {};

// ============================================================================
// EVENTS
// ============================================================================

addEventHandler("OnResourceStart", function(event, resource) {
    console.log("[ModMenu] Server resource started!");
});

addEventHandler("OnPlayerJoined", function(event, client) {
    playerVehicles[client.index] = [];
    playerToggles[client.index] = {};

    // Inform player about the menu
    messageClient("[MOD MENU] Press F5 to open the mod menu!", client, [255, 200, 100, 255]);
});

addEventHandler("OnPlayerQuit", function(event, client, reason) {
    // Clean up player vehicles
    if (playerVehicles[client.index]) {
        for (let i = 0; i < playerVehicles[client.index].length; i++) {
            let veh = playerVehicles[client.index][i];
            if (veh) {
                destroyElement(veh);
            }
        }
        delete playerVehicles[client.index];
    }
    delete playerToggles[client.index];
});

// ============================================================================
// NETWORK HANDLERS - Self Options
// ============================================================================

addNetworkHandler("ModMenu:SelfOption", function(client, option) {
    if (!client.player) {
        triggerNetworkEvent("ModMenu:Notification", client, "You need to spawn first!");
        return;
    }

    switch(option) {
        case "health":
            client.player.health = 200;
            break;

        case "armor":
            client.player.armour = 100;
            break;

        case "max":
            client.player.health = 200;
            client.player.armour = 100;
            break;

        case "weapons":
            giveAllWeapons(client);
            break;

        case "wanted":
            client.player.wantedLevel = 0;
            break;

        case "respawn":
            // Respawn at random location
            let spawns = [
                { x: -252.0, y: 947.0, z: 15.0 },
                { x: 932.0, y: -495.0, z: 15.0 },
                { x: -365.0, y: 1163.0, z: 14.0 },
                { x: 1243.0, y: -196.0, z: 26.0 }
            ];
            let spawn = spawns[Math.floor(Math.random() * spawns.length)];
            client.spawn([spawn.x, spawn.y, spawn.z], 0, -1667301416);
            break;

        case "suicide":
            client.player.health = 0;
            break;
    }

    console.log("[ModMenu] " + client.name + " used self option: " + option);
});

// ============================================================================
// NETWORK HANDLERS - Toggle Features
// ============================================================================

addNetworkHandler("ModMenu:Toggle", function(client, feature, state) {
    if (!playerToggles[client.index]) {
        playerToggles[client.index] = {};
    }

    playerToggles[client.index][feature] = state;
    console.log("[ModMenu] " + client.name + " toggled " + feature + ": " + state);
});

// ============================================================================
// NETWORK HANDLERS - Skin Change
// ============================================================================

addNetworkHandler("ModMenu:ChangeSkin", function(client, skinId) {
    if (!client.player) {
        triggerNetworkEvent("ModMenu:Notification", client, "You need to spawn first!");
        return;
    }

    if (skinId === "random") {
        skinId = skinModels[Math.floor(Math.random() * skinModels.length)];
    }

    client.player.modelIndex = skinId;
    console.log("[ModMenu] " + client.name + " changed skin to: " + skinId);
});

// ============================================================================
// NETWORK HANDLERS - Vehicle Spawning
// ============================================================================

addNetworkHandler("ModMenu:SpawnVehicle", function(client, vehicleName) {
    if (!client.player) {
        triggerNetworkEvent("ModMenu:Notification", client, "You need to spawn first!");
        return;
    }

    let modelHash = vehicleModels[vehicleName];
    if (!modelHash) {
        triggerNetworkEvent("ModMenu:Notification", client, "Vehicle not found!");
        return;
    }

    // Delete previous vehicles (limit to 1 per player)
    deletePlayerVehicles(client);

    // Get spawn position
    let pos = client.player.position;
    let heading = client.player.heading;

    let spawnX = pos[0] + (Math.sin(heading) * 4);
    let spawnY = pos[1] + (Math.cos(heading) * 4);
    let spawnZ = pos[2] + 1;

    // Create vehicle
    let vehicle = gta.createVehicle(modelHash, [spawnX, spawnY, spawnZ], heading);

    if (vehicle) {
        if (!playerVehicles[client.index]) {
            playerVehicles[client.index] = [];
        }
        playerVehicles[client.index].push(vehicle);

        // Set vehicle properties
        vehicle.health = 1000;
        vehicle.locked = false;
        vehicle.engine = true;

        // Random color
        let c1 = Math.floor(Math.random() * 132);
        let c2 = Math.floor(Math.random() * 132);
        vehicle.colour1 = c1;
        vehicle.colour2 = c2;

        triggerNetworkEvent("ModMenu:Notification", client, "Vehicle spawned: " + vehicleName.toUpperCase());
        console.log("[ModMenu] " + client.name + " spawned " + vehicleName);
    } else {
        triggerNetworkEvent("ModMenu:Notification", client, "Failed to spawn vehicle!");
    }
});

addNetworkHandler("ModMenu:DeleteVehicles", function(client) {
    deletePlayerVehicles(client);
    triggerNetworkEvent("ModMenu:Notification", client, "Your vehicles have been deleted!");
});

function deletePlayerVehicles(client) {
    if (playerVehicles[client.index]) {
        for (let i = 0; i < playerVehicles[client.index].length; i++) {
            let veh = playerVehicles[client.index][i];
            if (veh) {
                destroyElement(veh);
            }
        }
        playerVehicles[client.index] = [];
    }
}

// ============================================================================
// NETWORK HANDLERS - Vehicle Options
// ============================================================================

addNetworkHandler("ModMenu:VehicleOption", function(client, option) {
    if (!client.player || !client.player.vehicle) {
        triggerNetworkEvent("ModMenu:Notification", client, "You need to be in a vehicle!");
        return;
    }

    let vehicle = client.player.vehicle;

    switch(option) {
        case "repair":
            vehicle.health = 1000;
            break;

        case "flip":
            let rot = vehicle.rotation;
            vehicle.rotation = [0, 0, rot[2]];
            break;

        case "clean":
            vehicle.dirtLevel = 0;
            break;

        case "upgrade":
            // Max out visual mods if supported
            vehicle.health = 1000;
            break;

        case "nitro":
            // Boost vehicle forward
            let pos = vehicle.position;
            let heading = vehicle.heading;
            let boost = 50;
            vehicle.position = [
                pos[0] + (Math.sin(heading) * boost),
                pos[1] + (Math.cos(heading) * boost),
                pos[2]
            ];
            break;
    }

    console.log("[ModMenu] " + client.name + " used vehicle option: " + option);
});

addNetworkHandler("ModMenu:VehicleColor", function(client, color1, color2) {
    if (!client.player || !client.player.vehicle) {
        triggerNetworkEvent("ModMenu:Notification", client, "You need to be in a vehicle!");
        return;
    }

    client.player.vehicle.colour1 = color1;
    client.player.vehicle.colour2 = color2;
    console.log("[ModMenu] " + client.name + " changed vehicle color to: " + color1 + ", " + color2);
});

addNetworkHandler("ModMenu:Handling", function(client, property, value) {
    // Store handling modifications for the player
    // Note: Actual handling modification depends on GTAC's native support
    if (!playerToggles[client.index]) {
        playerToggles[client.index] = {};
    }
    playerToggles[client.index]["handling_" + property] = value;
    console.log("[ModMenu] " + client.name + " set handling " + property + " to: " + value);
});

addNetworkHandler("ModMenu:HandlingReset", function(client) {
    if (playerToggles[client.index]) {
        delete playerToggles[client.index].handling_grip;
        delete playerToggles[client.index].handling_acceleration;
        delete playerToggles[client.index].handling_topSpeed;
        delete playerToggles[client.index].handling_braking;
    }
    console.log("[ModMenu] " + client.name + " reset vehicle handling");
});

// ============================================================================
// NETWORK HANDLERS - Teleportation
// ============================================================================

addNetworkHandler("ModMenu:Teleport", function(client, x, y, z) {
    if (!client.player) {
        triggerNetworkEvent("ModMenu:Notification", client, "You need to spawn first!");
        return;
    }

    if (client.player.vehicle) {
        client.player.vehicle.position = [x, y, z];
    } else {
        client.player.position = [x, y, z];
    }

    console.log("[ModMenu] " + client.name + " teleported to: " + x + ", " + y + ", " + z);
});

addNetworkHandler("ModMenu:TeleportWaypoint", function(client) {
    // Teleport to map waypoint - requires client-side waypoint data
    triggerNetworkEvent("ModMenu:Notification", client, "Set a waypoint on the map first!");
});

addNetworkHandler("ModMenu:TeleportToPlayer", function(client, targetId) {
    if (!client.player) {
        triggerNetworkEvent("ModMenu:Notification", client, "You need to spawn first!");
        return;
    }

    let clients = getClients();
    let target = null;

    for (let i = 0; i < clients.length; i++) {
        if (clients[i].index == targetId) {
            target = clients[i];
            break;
        }
    }

    if (target && target.player) {
        let pos = target.player.position;
        if (client.player.vehicle) {
            client.player.vehicle.position = [pos[0] + 3, pos[1], pos[2]];
        } else {
            client.player.position = [pos[0] + 3, pos[1], pos[2]];
        }
        triggerNetworkEvent("ModMenu:Notification", client, "Teleported to: " + target.name);
        console.log("[ModMenu] " + client.name + " teleported to " + target.name);
    } else {
        triggerNetworkEvent("ModMenu:Notification", client, "Player not found or not spawned!");
    }
});

// ============================================================================
// NETWORK HANDLERS - Get Players
// ============================================================================

addNetworkHandler("ModMenu:GetPlayers", function(client) {
    let clients = getClients();
    let playerList = [];

    for (let i = 0; i < clients.length; i++) {
        let c = clients[i];
        playerList.push({
            id: c.index,
            name: c.name
        });
    }

    triggerNetworkEvent("ModMenu:PlayerList", client, playerList);
});

// ============================================================================
// NETWORK HANDLERS - World Options
// ============================================================================

addNetworkHandler("ModMenu:WorldTime", function(client, hour) {
    gta.time = [hour, 0];
    message("[WORLD] " + client.name + " changed time to: " + hour + ":00", [100, 200, 255, 255]);
    console.log("[ModMenu] " + client.name + " changed time to: " + hour);
});

addNetworkHandler("ModMenu:WorldWeather", function(client, weatherId) {
    gta.weather = weatherId;
    message("[WORLD] " + client.name + " changed the weather", [100, 200, 255, 255]);
    console.log("[ModMenu] " + client.name + " changed weather to: " + weatherId);
});

// ============================================================================
// NETWORK HANDLERS - Weapons
// ============================================================================

addNetworkHandler("ModMenu:GiveWeapon", function(client, weaponId) {
    if (!client.player) {
        triggerNetworkEvent("ModMenu:Notification", client, "You need to spawn first!");
        return;
    }

    client.giveWeapon(weaponId, 500);
    console.log("[ModMenu] " + client.name + " got weapon: " + weaponId);
});

function giveAllWeapons(client) {
    if (!client.player) return;

    // GTA IV Weapons
    client.giveWeapon(1, 1);      // Bat
    client.giveWeapon(2, 1);      // Knife
    client.giveWeapon(5, 500);    // Pistol
    client.giveWeapon(6, 500);    // Deagle
    client.giveWeapon(9, 200);    // Shotgun
    client.giveWeapon(10, 200);   // Combat Shotgun
    client.giveWeapon(11, 500);   // Micro SMG
    client.giveWeapon(12, 500);   // SMG
    client.giveWeapon(14, 500);   // AK47
    client.giveWeapon(15, 500);   // M4
    client.giveWeapon(16, 100);   // Sniper
    client.giveWeapon(18, 20);    // RPG
    client.giveWeapon(19, 20);    // Grenades
    client.giveWeapon(20, 20);    // Molotov
}

// ============================================================================
// NETWORK HANDLERS - Fun Options
// ============================================================================

addNetworkHandler("ModMenu:Fun", function(client, option) {
    if (!client.player) {
        triggerNetworkEvent("ModMenu:Notification", client, "You need to spawn first!");
        return;
    }

    let pos = client.player.position;

    switch(option) {
        case "launch":
            client.player.position = [pos[0], pos[1], pos[2] + 50];
            break;

        case "explode":
            gta.createExplosion(pos, 0, 5.0);
            break;

        case "ped":
            // Spawn a random ped near player
            let pedSkin = skinModels[Math.floor(Math.random() * skinModels.length)];
            let ped = gta.createPed(pedSkin, [pos[0] + 3, pos[1] + 3, pos[2]], 0);
            if (ped) {
                console.log("[ModMenu] " + client.name + " spawned a ped");
            }
            break;

        case "ragdoll":
            // Trigger ragdoll via health damage
            let currentHealth = client.player.health;
            client.player.health = currentHealth - 10;
            setTimeout(function() {
                if (client.player) {
                    client.player.health = currentHealth;
                }
            }, 100);
            break;

        case "clearpeds":
            // Clear peds in area - limited implementation
            triggerNetworkEvent("ModMenu:Notification", client, "Area clearing requested");
            break;

        case "clearvehicles":
            // Clear vehicles in area - limited implementation
            triggerNetworkEvent("ModMenu:Notification", client, "Vehicle clearing requested");
            break;
    }

    console.log("[ModMenu] " + client.name + " used fun option: " + option);
});

// ============================================================================
// INITIALIZATION
// ============================================================================

console.log("[ModMenu] Server script loaded!");
