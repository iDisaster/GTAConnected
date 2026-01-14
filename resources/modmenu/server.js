// ============================================================================
// MOD MENU - Server Side
// Handles all server-side actions triggered from the client menu
// ============================================================================

// Color constants using toColour for integer format
const COLOUR_ORANGE = toColour(255, 200, 100, 255);
const COLOUR_WORLD = toColour(100, 200, 255, 255);

// Clean GTA IV vehicle model list
const vehicleModels = [
    // Sports Cars
    "infernus", "turismo", "comet", "banshee", "sultan", "coquette", "sultanrs",
    // Muscle Cars  
    "buccaneer", "dukes", "faction", "ruiner", "sabre", "sabregt", "vigero",
    // Sedans
    "admiral", "cavalcade", "cognoscenti", "emperor", "esperanto", "feroci",
    "feltzer", "intruder", "landstalker", "lokus", "marbella", "merit",
    "oracle", "pinnacle", "premiere", "presidente", "primo", "rebla",
    "romero", "schafter", "sentinel", "solair", "stratum", "stretch",
    "vincent", "virgo", "willard", "washington",
    // SUVs & Trucks
    "bobcat", "boxville", "biff", "burrito", "chavos", "dilettante",
    "flatbed", "forklift", "habanero", "huntley", "moonbeam", "mule",
    "packer", "patriot", "perennial", "pony", "rancher", "speedo", 
    "stockade", "trashmaster", "yankee",
    // Compacts
    "blista", "futo", "ingot", "pmp600", "sultanrs",
    // Motorcycles
    "faggio", "hellfury", "nrg900", "pcj600", "sanchez", "zombie",
    // Emergency
    "ambulance", "firetruk", "police", "police2", "police3", "police4",
    "nstockade", "pstockade", "fbi", "noose",
    // Helicopters
    "annihilator", "maverick", "polmav", "tourmav",
    // Boats
    "dinghy", "jetmax", "marquis", "predator", "reefer", "squalo", "tropic", "tuga",
    // Commercial
    "airtug", "benson", "biff", "boxville", "burrito", "burrito2", "cabby",
    "flatbed", "forklift", "mule", "packer", "pony", "speedo", "stockade",
    "trashmaster", "yankee",
    // Special
    "mrtasty", "cablecar", "subway", "eltrain",
    // Taxis
    "taxi", "taxi2", "romantaxi"
];

// Store spawned vehicles per player
let playerVehicles = {};

// Player toggle states
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
    messageClient("[MOD MENU] Press F5 to open the mod menu!", client, COLOUR_ORANGE);
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
// NETWORK HANDLERS - Self Options (No spawn check - handled client-side)
// ============================================================================

addNetworkHandler("ModMenu:SelfOption", function(client, option) {
    // These actions are handled client-side via natives
    // Server just logs and can do additional processing if needed
    console.log("[ModMenu] " + client.name + " used self option: " + option);

    // Tell client to execute the action
    triggerNetworkEvent("ModMenu:ExecuteSelfOption", client, option);
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
    console.log("[ModMenu] " + client.name + " requested skin change: " + skinId);
    triggerNetworkEvent("ModMenu:ExecuteSkinChange", client, skinId);
});

// ============================================================================
// NETWORK HANDLERS - Vehicle Spawning
// ============================================================================

addNetworkHandler("ModMenu:SpawnVehicle", function(client, vehicleName) {
    console.log("[ModMenu] " + client.name + " requested vehicle: " + vehicleName);

    // Tell client to spawn vehicle (client-side has position info)
    triggerNetworkEvent("ModMenu:ExecuteSpawnVehicle", client, vehicleName);
});

addNetworkHandler("ModMenu:DeleteVehicles", function(client) {
    // Delete server-tracked vehicles
    if (playerVehicles[client.index]) {
        for (let i = 0; i < playerVehicles[client.index].length; i++) {
            let veh = playerVehicles[client.index][i];
            if (veh) {
                destroyElement(veh);
            }
        }
        playerVehicles[client.index] = [];
    }
    triggerNetworkEvent("ModMenu:Notification", client, "Vehicles deleted!");
});

// ============================================================================
// NETWORK HANDLERS - Vehicle Options
// ============================================================================

addNetworkHandler("ModMenu:VehicleOption", function(client, option) {
    console.log("[ModMenu] " + client.name + " used vehicle option: " + option);
    triggerNetworkEvent("ModMenu:ExecuteVehicleOption", client, option);
});

addNetworkHandler("ModMenu:VehicleColor", function(client, color1, color2) {
    console.log("[ModMenu] " + client.name + " changed vehicle color");
    triggerNetworkEvent("ModMenu:ExecuteVehicleColor", client, color1, color2);
});

// ============================================================================
// NETWORK HANDLERS - Teleportation
// ============================================================================

addNetworkHandler("ModMenu:Teleport", function(client, x, y, z) {
    console.log("[ModMenu] " + client.name + " teleporting to: " + x + ", " + y + ", " + z);
    triggerNetworkEvent("ModMenu:ExecuteTeleport", client, x, y, z);
});

addNetworkHandler("ModMenu:TeleportToPlayer", function(client, targetId) {
    let clients = getClients();
    for (let i = 0; i < clients.length; i++) {
        if (clients[i].index == targetId) {
            // Get target player's position from server
            if (clients[i].player) {
                let targetPos = clients[i].player.position;
                triggerNetworkEvent("ModMenu:Notification", client, "Teleporting to: " + clients[i].name);
                // Send position directly to client
                triggerNetworkEvent("ModMenu:ExecuteTeleport", client, targetPos.x + 2, targetPos.y, targetPos.z);
            } else {
                triggerNetworkEvent("ModMenu:Notification", client, "Player not spawned!");
            }
            return;
        }
    }
    triggerNetworkEvent("ModMenu:Notification", client, "Player not found!");
});

// ============================================================================
// NETWORK HANDLERS - Get Players
// ============================================================================

addNetworkHandler("ModMenu:GetPlayers", function(client) {
    let clients = getClients();
    let playerNames = "";
    let playerIds = "";

    console.log("[ModMenu] Getting players, found " + clients.length + " clients");

    for (let i = 0; i < clients.length; i++) {
        let c = clients[i];
        if (c && c.name) {
            if (playerNames.length > 0) {
                playerNames += "|";
                playerIds += "|";
            }
            playerNames += c.name;
            playerIds += c.index;
            console.log("[ModMenu] Added player: " + c.name + " (ID: " + c.index + ")");
        }
    }

    console.log("[ModMenu] Sending players to " + client.name + ": " + playerNames);
    // Send as separate strings instead of array
    triggerNetworkEvent("ModMenu:PlayerList", client, playerNames, playerIds);
});

// ============================================================================
// NETWORK HANDLERS - World Options (Weather & Time)
// ============================================================================

addNetworkHandler("ModMenu:WorldTime", function(client, hour) {
    console.log("[ModMenu] " + client.name + " changed time to: " + hour);

    // Broadcast to all clients to change time
    let clients = getClients();
    for (let i = 0; i < clients.length; i++) {
        triggerNetworkEvent("ModMenu:ExecuteTime", clients[i], hour);
    }

    message("[WORLD] " + client.name + " changed time to: " + hour + ":00", COLOUR_WORLD);
});

addNetworkHandler("ModMenu:WorldWeather", function(client, weatherId) {
    console.log("[ModMenu] " + client.name + " changed weather to: " + weatherId);

    // Broadcast to all clients to change weather
    let clients = getClients();
    for (let i = 0; i < clients.length; i++) {
        triggerNetworkEvent("ModMenu:ExecuteWeather", clients[i], weatherId);
    }

    message("[WORLD] " + client.name + " changed the weather", COLOUR_WORLD);
});

// ============================================================================
// NETWORK HANDLERS - Weapons
// ============================================================================

addNetworkHandler("ModMenu:GiveWeapon", function(client, weaponId) {
    console.log("[ModMenu] " + client.name + " requested weapon: " + weaponId);
    triggerNetworkEvent("ModMenu:ExecuteGiveWeapon", client, weaponId);
});

// ============================================================================
// NETWORK HANDLERS - Fun Options
// ============================================================================

addNetworkHandler("ModMenu:Fun", function(client, option) {
    console.log("[ModMenu] " + client.name + " used fun option: " + option);
    triggerNetworkEvent("ModMenu:ExecuteFun", client, option);
});

// ============================================================================
// INITIALIZATION
// ============================================================================

console.log("[ModMenu] Server script loaded!");
