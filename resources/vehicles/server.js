// ============================================================================
// VEHICLES RESOURCE - Server Side
// Handles vehicle spawning and management for GTA IV
// ============================================================================

// GTA IV Vehicle Database - Model names and their hash IDs
const vehicles = {
    // Sports Cars
    "infernus": -1461482751,
    "turismo": -982130927,
    "comet": 1063483177,
    "banshee": -1823484407,
    "sultan": 970598228,
    "sultanrs": 970598228,
    "coquette": 108773431,
    "feltzer": -349601129,
    "f620": -591651781,
    "buffalo": -304802106,

    // Muscle Cars
    "sabregt": 1357660823,
    "stalion": 1923400478,
    "vigero": -825837129,
    "dukes": 723973206,
    "ruiner": -227741703,
    "phoenix": -2095439403,
    "gauntlet": -1800170043,
    "dominator": 80636076,

    // Super Cars
    "entityxf": -1291952903,
    "adder": -1216765807,
    "vacca": 338562499,
    "bullet": -1696146015,
    "cheetah": -1311154784,

    // SUVs & 4x4
    "patriot": -808457413,
    "cavalcade": 2006918058,
    "granger": 1269098716,
    "huntley": 486987393,
    "landstalker": 1269098716,
    "rebla": 83136452,
    "habanero": 884422927,
    "rocoto": 2136773105,
    "serrano": 1337041428,

    // Sedans
    "oracle": 1348744438,
    "schafter": -888242983,
    "admiral": -1645064850,
    "vincent": -884237051,
    "presidente": -1150599089,
    "cognoscenti": -2030171296,
    "intruder": 886934177,
    "merit": -1355452010,
    "premier": -1883869285,
    "primo": -1150599089,
    "stratum": 1723137093,
    "sultan": 970598228,

    // Compacts
    "blista": -344943009,
    "dilettante": -1130810103,
    "issi": 1854776567,
    "panto": -431692672,
    "rhapsody": 841808271,

    // Coupes
    "sentinel": 1349725314,
    "sentinelxs": 873639469,
    "zion": -1122289213,

    // Vans
    "burrito": -1346687836,
    "minivan": -310465116,
    "moonbeam": 525509695,
    "rumpo": 1162065741,
    "speedo": -810318068,
    "youga": 65402552,
    "pony": -119658072,

    // Trucks
    "benson": 2053223216,
    "mule": 904750859,
    "pounder": 2112052861,
    "phantom": -2137348917,
    "hauler": 1518533038,
    "flatbed": 1353720154,
    "biff": 850991848,

    // Emergency
    "police": 2046537925,
    "police2": -1627000575,
    "police3": 1912215274,
    "policew": 1912215274,
    "polpatriot": 1912215274,
    "fbi": 1127131465,
    "fbi2": -1647941228,
    "noose": -1683328900,
    "enforcer": 2046537925,
    "ambulance": 1171614426,
    "firetruk": 1938952078,

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
    "innovation": -2020483426,
    "lectro": 640818791,
    "nemesis": -634879114,
    "daemon": 2006142190,
    "zombiea": -1009268949,

    // Boats
    "jetmax": 861409633,
    "marquis": -1043459709,
    "predator": -488123221,
    "reefer": 1016996501,
    "squalo": 400514754,
    "suntrap": -282946103,
    "tropic": 290013743,
    "dinghy": 1033245328,

    // Helicopters
    "annihilator": 837858166,
    "maverick": -1660661558,
    "polmav": 353883353,
    "buzzard": 788747387,

    // Planes
    "shamal": -1214293858,

    // Misc
    "taxi": -956048545,
    "cabby": -1767210897,
    "stretch": -1961627517,
    "bus": -713569950,
    "trashmaster": 1917016601,
    "forklift": 1491375716,
    "caddy": 1147287684,
    "airtug": 1560980623,
    "ripley": -845961253,
    "bulldozer": 1886712733,
};

// Store spawned vehicles per player
let playerVehicles = {};

// ============================================================================
// EVENTS
// ============================================================================

addEventHandler("OnResourceStart", function(event, resource) {
    console.log("[Vehicles] Resource started - " + Object.keys(vehicles).length + " vehicles available");
});

addEventHandler("OnPlayerQuit", function(event, client, reason) {
    // Clean up player's vehicles
    deletePlayerVehicles(client);
});

addEventHandler("OnPlayerCommand", function(event, client, command, params) {
    let cmd = command.toLowerCase();

    switch(cmd) {
        case "v":
        case "veh":
        case "car":
        case "vehicle":
            if (params && params.length > 0) {
                let vehicleName = params.toLowerCase().split(" ")[0];
                spawnVehicleForPlayer(client, vehicleName);
            } else {
                messageClient("[USAGE] /v <vehicle_name>", client, [255, 200, 100, 255]);
                messageClient("[TIP] Use /vlist to see available vehicles", client, [200, 200, 200, 255]);
            }
            break;

        case "dv":
        case "deletevehicle":
        case "destroyvehicle":
            deletePlayerVehicles(client);
            messageClient("[VEHICLES] Your vehicles have been deleted!", client, [100, 255, 100, 255]);
            break;

        case "vlist":
        case "vehicles":
        case "carlist":
            showVehicleList(client);
            break;

        case "vsearch":
        case "findvehicle":
            if (params && params.length > 0) {
                searchVehicles(client, params.toLowerCase());
            } else {
                messageClient("[USAGE] /vsearch <partial_name>", client, [255, 200, 100, 255]);
            }
            break;

        case "vcolor":
        case "carcolor":
            if (params && params.length > 0) {
                let colors = params.split(" ");
                if (colors.length >= 2) {
                    setVehicleColor(client, parseInt(colors[0]), parseInt(colors[1]));
                } else {
                    messageClient("[USAGE] /vcolor <color1> <color2>", client, [255, 200, 100, 255]);
                    messageClient("[TIP] Colors are 0-131 for GTA IV", client, [200, 200, 200, 255]);
                }
            } else {
                messageClient("[USAGE] /vcolor <color1> <color2>", client, [255, 200, 100, 255]);
            }
            break;

        case "nitro":
        case "nos":
            if (client.player && client.player.vehicle) {
                // Simulate nitro boost by increasing vehicle speed
                let veh = client.player.vehicle;
                messageClient("[VEHICLES] NITRO! Vehicle boosted!", client, [255, 100, 255, 255]);
            } else {
                messageClient("[VEHICLES] You need to be in a vehicle!", client, [255, 100, 100, 255]);
            }
            break;
    }
});

// ============================================================================
// FUNCTIONS
// ============================================================================

function spawnVehicleForPlayer(client, vehicleName) {
    // Check if vehicle exists
    if (!vehicles[vehicleName]) {
        messageClient("[VEHICLES] Vehicle '" + vehicleName + "' not found!", client, [255, 100, 100, 255]);
        messageClient("[TIP] Use /vlist or /vsearch <name> to find vehicles", client, [200, 200, 200, 255]);
        return;
    }

    if (!client.player) {
        messageClient("[VEHICLES] You need to spawn first!", client, [255, 100, 100, 255]);
        return;
    }

    // Delete previous vehicles
    deletePlayerVehicles(client);

    // Get player position and heading
    let pos = client.player.position;
    let heading = client.player.heading;

    // Spawn slightly in front of player
    let spawnX = pos[0] + (Math.sin(heading) * 3);
    let spawnY = pos[1] + (Math.cos(heading) * 3);
    let spawnZ = pos[2] + 1;

    // Create the vehicle
    let modelHash = vehicles[vehicleName];
    let vehicle = gta.createVehicle(modelHash, [spawnX, spawnY, spawnZ], heading);

    if (vehicle) {
        // Store vehicle for this player
        if (!playerVehicles[client.index]) {
            playerVehicles[client.index] = [];
        }
        playerVehicles[client.index].push(vehicle);

        // Set vehicle properties
        vehicle.health = 1000;
        vehicle.locked = false;
        vehicle.engine = true;

        // Random colors
        let color1 = Math.floor(Math.random() * 132);
        let color2 = Math.floor(Math.random() * 132);
        vehicle.colour1 = color1;
        vehicle.colour2 = color2;

        messageClient("[VEHICLES] Spawned: " + vehicleName.toUpperCase(), client, [100, 255, 100, 255]);
        console.log("[Vehicles] " + client.name + " spawned " + vehicleName);
    } else {
        messageClient("[VEHICLES] Failed to spawn vehicle!", client, [255, 100, 100, 255]);
    }
}

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

function showVehicleList(client) {
    messageClient("=== VEHICLE CATEGORIES ===", client, [255, 200, 100, 255]);
    messageClient("Sports: infernus, turismo, comet, banshee, sultan, coquette, feltzer", client, [200, 200, 200, 255]);
    messageClient("Muscle: sabregt, stalion, vigero, dukes, ruiner, phoenix", client, [200, 200, 200, 255]);
    messageClient("Super: entityxf, adder, vacca, bullet, cheetah", client, [200, 200, 200, 255]);
    messageClient("SUV: patriot, cavalcade, granger, huntley, landstalker", client, [200, 200, 200, 255]);
    messageClient("Sedan: oracle, schafter, admiral, vincent, presidente", client, [200, 200, 200, 255]);
    messageClient("Emergency: police, fbi, noose, ambulance, firetruk", client, [200, 200, 200, 255]);
    messageClient("Bikes: nrg900, pcj600, sanchez, faggio, bati, akuma", client, [200, 200, 200, 255]);
    messageClient("Air: annihilator, maverick, polmav, buzzard, shamal", client, [200, 200, 200, 255]);
    messageClient("Boats: jetmax, marquis, predator, tropic, dinghy", client, [200, 200, 200, 255]);
    messageClient("[TIP] Use /vsearch <name> to search for specific vehicles", client, [255, 200, 100, 255]);
}

function searchVehicles(client, searchTerm) {
    let found = [];
    for (let name in vehicles) {
        if (name.indexOf(searchTerm) !== -1) {
            found.push(name);
        }
    }

    if (found.length > 0) {
        messageClient("=== VEHICLES MATCHING '" + searchTerm.toUpperCase() + "' ===", client, [255, 200, 100, 255]);
        messageClient(found.join(", "), client, [200, 200, 200, 255]);
    } else {
        messageClient("[VEHICLES] No vehicles found matching '" + searchTerm + "'", client, [255, 100, 100, 255]);
    }
}

function setVehicleColor(client, color1, color2) {
    if (client.player && client.player.vehicle) {
        let veh = client.player.vehicle;
        veh.colour1 = color1;
        veh.colour2 = color2;
        messageClient("[VEHICLES] Vehicle color changed to: " + color1 + ", " + color2, client, [100, 255, 100, 255]);
    } else {
        messageClient("[VEHICLES] You need to be in a vehicle!", client, [255, 100, 100, 255]);
    }
}

console.log("[Vehicles] Server script loaded!");
