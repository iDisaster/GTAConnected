// ============================================================================
// TELEPORT RESOURCE - Server Side
// Teleportation system with Liberty City (GTA IV) locations
// ============================================================================

// Liberty City Teleport Locations
const locations = {
    // Algonquin (Manhattan)
    "starjunction": { x: -252.0, y: 947.0, z: 15.0, name: "Star Junction (Times Square)" },
    "middlepark": { x: -365.0, y: 1163.0, z: 14.0, name: "Middle Park" },
    "rotterdam": { x: 237.0, y: 1002.0, z: 18.0, name: "Rotterdam Tower" },
    "triangletower": { x: -336.0, y: 747.0, z: 28.0, name: "Triangle Tower" },
    "getaLife": { x: -268.0, y: 456.0, z: 14.0, name: "GetaLife Building" },
    "castle": { x: -411.0, y: 1503.0, z: 10.0, name: "Castle Garden City" },
    "exchange": { x: 98.0, y: -122.0, z: 14.0, name: "The Exchange" },
    "chinatown": { x: -141.0, y: 289.0, z: 14.0, name: "Chinatown" },
    "happiness": { x: -722.0, y: -17.0, z: 3.0, name: "Happiness Island" },
    "algonquin": { x: -252.0, y: 947.0, z: 15.0, name: "Algonquin" },

    // Broker/Dukes (Brooklyn/Queens)
    "broker": { x: 932.0, y: -495.0, z: 15.0, name: "Broker Bridge" },
    "firefly": { x: 1366.0, y: -647.0, z: 35.0, name: "Firefly Projects" },
    "outlook": { x: 975.0, y: -251.0, z: 10.0, name: "Outlook Park" },
    "beach": { x: 1571.0, y: -377.0, z: 18.0, name: "Firefly Beach" },
    "hove": { x: 1017.0, y: -505.0, z: 19.0, name: "Hove Beach" },
    "meadows": { x: 1772.0, y: 507.0, z: 23.0, name: "Meadows Park" },
    "willis": { x: 1460.0, y: 349.0, z: 24.0, name: "Willis" },
    "airport": { x: 2140.0, y: 465.0, z: 6.0, name: "Francis International Airport" },

    // Bohan (Bronx)
    "bohan": { x: 1243.0, y: -196.0, z: 26.0, name: "South Bohan" },
    "northholland": { x: -429.0, y: 1494.0, z: 11.0, name: "North Holland" },
    "industrial": { x: 773.0, y: 1872.0, z: 10.0, name: "Industrial" },

    // Alderney (New Jersey)
    "alderney": { x: -1149.0, y: 380.0, z: 21.0, name: "Alderney City" },
    "alderneyport": { x: -1420.0, y: 741.0, z: 24.0, name: "Alderney Port" },
    "westdyke": { x: -1745.0, y: 1157.0, z: 25.0, name: "Westdyke" },
    "acter": { x: -1149.0, y: 380.0, z: 21.0, name: "Acter" },
    "berchem": { x: -1273.0, y: 1408.0, z: 22.0, name: "Berchem" },
    "tudor": { x: -1106.0, y: -69.0, z: 10.0, name: "Tudor" },
    "leftwood": { x: -1525.0, y: 979.0, z: 25.0, name: "Leftwood" },

    // Points of Interest
    "hospital": { x: 984.0, y: -237.0, z: 10.0, name: "Broker Hospital" },
    "hospitalalg": { x: -471.0, y: 338.0, z: 8.0, name: "Algonquin Hospital" },
    "police": { x: -1227.0, y: 200.0, z: 19.0, name: "Alderney Police Station" },
    "policealgonquin": { x: -336.0, y: 747.0, z: 28.0, name: "Algonquin Police Station" },
    "bowling": { x: 1007.0, y: -515.0, z: 14.0, name: "Bowling Alley" },
    "cabaret": { x: -381.0, y: 524.0, z: 14.0, name: "Cabaret Club" },
    "swingerclub": { x: 1068.0, y: -429.0, z: 15.0, name: "Strip Club" },
    "burgershot": { x: -225.0, y: -201.0, z: 10.0, name: "Burger Shot" },
    "cluckinbell": { x: 907.0, y: -509.0, z: 15.0, name: "Cluckin' Bell" },

    // Special locations
    "helipad": { x: -290.0, y: -400.0, z: 81.0, name: "Helicopter Pad" },
    "tower": { x: 237.0, y: 1002.0, z: 200.0, name: "Tower Top" },
    "bridge1": { x: 500.0, y: -80.0, z: 60.0, name: "Algonquin Bridge" },
    "bridge2": { x: 800.0, y: 600.0, z: 60.0, name: "East Borough Bridge" }
};

// Custom player waypoints
let playerWaypoints = {};

// ============================================================================
// EVENTS
// ============================================================================

addEventHandler("OnResourceStart", function(event, resource) {
    console.log("[Teleport] Resource started - " + Object.keys(locations).length + " locations available");
});

addEventHandler("OnPlayerCommand", function(event, client, command, params) {
    let cmd = command.toLowerCase();

    switch(cmd) {
        case "tp":
        case "teleport":
        case "goto":
            if (params && params.length > 0) {
                let locationName = params.toLowerCase().split(" ")[0];
                teleportToLocation(client, locationName);
            } else {
                messageClient("[USAGE] /tp <location>", client, [255, 200, 100, 255]);
                messageClient("[TIP] Use /tplist to see available locations", client, [200, 200, 200, 255]);
            }
            break;

        case "tplist":
        case "locations":
            showLocationList(client);
            break;

        case "tpsearch":
        case "findlocation":
            if (params && params.length > 0) {
                searchLocations(client, params.toLowerCase());
            } else {
                messageClient("[USAGE] /tpsearch <partial_name>", client, [255, 200, 100, 255]);
            }
            break;

        case "setpos":
        case "tpcoords":
            if (params && params.length > 0) {
                let coords = params.split(" ");
                if (coords.length >= 3) {
                    let x = parseFloat(coords[0]);
                    let y = parseFloat(coords[1]);
                    let z = parseFloat(coords[2]);

                    if (!isNaN(x) && !isNaN(y) && !isNaN(z)) {
                        teleportToCoords(client, x, y, z);
                    } else {
                        messageClient("[TELEPORT] Invalid coordinates!", client, [255, 100, 100, 255]);
                    }
                } else {
                    messageClient("[USAGE] /setpos <x> <y> <z>", client, [255, 200, 100, 255]);
                }
            } else {
                messageClient("[USAGE] /setpos <x> <y> <z>", client, [255, 200, 100, 255]);
            }
            break;

        case "savewaypoint":
        case "setwp":
            if (params && params.length > 0) {
                saveWaypoint(client, params.toLowerCase());
            } else {
                messageClient("[USAGE] /savewaypoint <name>", client, [255, 200, 100, 255]);
            }
            break;

        case "delwaypoint":
        case "deletewp":
            if (params && params.length > 0) {
                deleteWaypoint(client, params.toLowerCase());
            } else {
                messageClient("[USAGE] /delwaypoint <name>", client, [255, 200, 100, 255]);
            }
            break;

        case "waypoints":
        case "mywaypoints":
            showWaypoints(client);
            break;

        case "tpwp":
        case "gotowp":
            if (params && params.length > 0) {
                teleportToWaypoint(client, params.toLowerCase());
            } else {
                messageClient("[USAGE] /tpwp <waypoint_name>", client, [255, 200, 100, 255]);
            }
            break;

        // Quick teleport commands
        case "airport":
            teleportToLocation(client, "airport");
            break;

        case "hospital":
            teleportToLocation(client, "hospital");
            break;

        case "beach":
            teleportToLocation(client, "beach");
            break;

        case "park":
            teleportToLocation(client, "middlepark");
            break;
    }
});

// ============================================================================
// FUNCTIONS
// ============================================================================

function teleportToLocation(client, locationName) {
    // Check server locations
    if (locations[locationName]) {
        let loc = locations[locationName];
        teleportPlayer(client, loc.x, loc.y, loc.z);
        messageClient("[TELEPORT] Teleported to: " + loc.name, client, [100, 255, 100, 255]);
        console.log("[Teleport] " + client.name + " teleported to " + loc.name);
        return;
    }

    // Check player waypoints
    if (playerWaypoints[client.index] && playerWaypoints[client.index][locationName]) {
        let wp = playerWaypoints[client.index][locationName];
        teleportPlayer(client, wp.x, wp.y, wp.z);
        messageClient("[TELEPORT] Teleported to waypoint: " + locationName, client, [100, 255, 100, 255]);
        return;
    }

    messageClient("[TELEPORT] Location '" + locationName + "' not found!", client, [255, 100, 100, 255]);
    messageClient("[TIP] Use /tplist or /tpsearch <name>", client, [200, 200, 200, 255]);
}

function teleportToCoords(client, x, y, z) {
    teleportPlayer(client, x, y, z);
    messageClient("[TELEPORT] Teleported to: X:" + x.toFixed(1) + " Y:" + y.toFixed(1) + " Z:" + z.toFixed(1), client, [100, 255, 100, 255]);
}

function teleportPlayer(client, x, y, z) {
    if (client.player) {
        // If in vehicle, teleport vehicle
        if (client.player.vehicle) {
            client.player.vehicle.position = [x, y, z];
        } else {
            client.player.position = [x, y, z];
        }
    } else {
        messageClient("[TELEPORT] You need to spawn first!", client, [255, 100, 100, 255]);
    }
}

function showLocationList(client) {
    messageClient("=== TELEPORT LOCATIONS ===", client, [255, 200, 100, 255]);
    messageClient("-- Algonquin --", client, [100, 200, 255, 255]);
    messageClient("starjunction, middlepark, rotterdam, chinatown, exchange, happiness", client, [200, 200, 200, 255]);

    messageClient("-- Broker/Dukes --", client, [100, 200, 255, 255]);
    messageClient("broker, firefly, outlook, beach, hove, meadows, willis, airport", client, [200, 200, 200, 255]);

    messageClient("-- Bohan --", client, [100, 200, 255, 255]);
    messageClient("bohan, northholland, industrial", client, [200, 200, 200, 255]);

    messageClient("-- Alderney --", client, [100, 200, 255, 255]);
    messageClient("alderney, alderneyport, westdyke, acter, berchem, tudor, leftwood", client, [200, 200, 200, 255]);

    messageClient("-- Points of Interest --", client, [100, 200, 255, 255]);
    messageClient("hospital, hospitalalg, police, bowling, cabaret, burgershot, helipad", client, [200, 200, 200, 255]);

    messageClient("[TIP] Use /tpsearch <name> to find specific locations", client, [255, 200, 100, 255]);
}

function searchLocations(client, searchTerm) {
    let found = [];
    for (let name in locations) {
        if (name.indexOf(searchTerm) !== -1 ||
            locations[name].name.toLowerCase().indexOf(searchTerm) !== -1) {
            found.push(name + " (" + locations[name].name + ")");
        }
    }

    if (found.length > 0) {
        messageClient("=== LOCATIONS MATCHING '" + searchTerm.toUpperCase() + "' ===", client, [255, 200, 100, 255]);
        for (let i = 0; i < found.length; i++) {
            messageClient(found[i], client, [200, 200, 200, 255]);
        }
    } else {
        messageClient("[TELEPORT] No locations found matching '" + searchTerm + "'", client, [255, 100, 100, 255]);
    }
}

function saveWaypoint(client, waypointName) {
    if (!client.player) {
        messageClient("[WAYPOINT] You need to spawn first!", client, [255, 100, 100, 255]);
        return;
    }

    let pos = client.player.position;

    if (!playerWaypoints[client.index]) {
        playerWaypoints[client.index] = {};
    }

    playerWaypoints[client.index][waypointName] = {
        x: pos[0],
        y: pos[1],
        z: pos[2]
    };

    messageClient("[WAYPOINT] Saved waypoint: " + waypointName, client, [100, 255, 100, 255]);
    messageClient("[WAYPOINT] Use /tpwp " + waypointName + " to teleport here", client, [200, 200, 200, 255]);
}

function deleteWaypoint(client, waypointName) {
    if (playerWaypoints[client.index] && playerWaypoints[client.index][waypointName]) {
        delete playerWaypoints[client.index][waypointName];
        messageClient("[WAYPOINT] Deleted waypoint: " + waypointName, client, [100, 255, 100, 255]);
    } else {
        messageClient("[WAYPOINT] Waypoint not found: " + waypointName, client, [255, 100, 100, 255]);
    }
}

function showWaypoints(client) {
    if (!playerWaypoints[client.index] || Object.keys(playerWaypoints[client.index]).length === 0) {
        messageClient("[WAYPOINT] You have no saved waypoints", client, [255, 200, 100, 255]);
        messageClient("[TIP] Use /savewaypoint <name> to save your current position", client, [200, 200, 200, 255]);
        return;
    }

    messageClient("=== YOUR WAYPOINTS ===", client, [255, 200, 100, 255]);
    for (let name in playerWaypoints[client.index]) {
        let wp = playerWaypoints[client.index][name];
        messageClient(name + " - X:" + wp.x.toFixed(1) + " Y:" + wp.y.toFixed(1) + " Z:" + wp.z.toFixed(1), client, [200, 200, 200, 255]);
    }
}

function teleportToWaypoint(client, waypointName) {
    if (playerWaypoints[client.index] && playerWaypoints[client.index][waypointName]) {
        let wp = playerWaypoints[client.index][waypointName];
        teleportPlayer(client, wp.x, wp.y, wp.z);
        messageClient("[WAYPOINT] Teleported to: " + waypointName, client, [100, 255, 100, 255]);
    } else {
        messageClient("[WAYPOINT] Waypoint not found: " + waypointName, client, [255, 100, 100, 255]);
    }
}

console.log("[Teleport] Server script loaded!");
