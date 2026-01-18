/**
 * MD TRIDENT - Teleport Options Module
 * GTAConnected Port for GTA IV
 */

// ============================================================================
// TELEPORT LOCATIONS (Liberty City)
// ============================================================================

const TELEPORT_LOCATIONS = {
    // Broker/Dukes
    BROKER_SAFEHOUSE: { x: 875.59, y: -482.13, z: 15.65, name: "Broker Safehouse" },
    ROTTERDAM_HILL: { x: 1030.25, y: -618.87, z: 25.12, name: "Rotterdam Hill" },
    EAST_HOOK: { x: 1224.36, y: -244.15, z: 20.34, name: "East Hook" },
    STEINWAY: { x: 1414.54, y: 498.27, z: 35.76, name: "Steinway" },
    DUKES_BAY_BRIDGE: { x: 1586.32, y: 1231.45, z: 22.89, name: "Dukes Bay Bridge" },

    // Bohan
    BOHAN_SAFEHOUSE: { x: 579.45, y: 1436.32, z: 16.87, name: "Bohan Safehouse" },
    NORTHERN_GARDENS: { x: 428.67, y: 1652.43, z: 17.54, name: "Northern Gardens" },
    SOUTH_BOHAN: { x: 715.23, y: 1245.67, z: 15.43, name: "South Bohan" },

    // Algonquin
    MIDDLE_PARK: { x: -21.45, y: 532.87, z: 15.23, name: "Middle Park" },
    STAR_JUNCTION: { x: -234.56, y: 234.78, z: 14.67, name: "Star Junction (Times Sq)" },
    ALGONQUIN_SAFEHOUSE: { x: -432.12, y: 1245.43, z: 20.34, name: "Algonquin Safehouse" },
    HAPPINESS_ISLAND: { x: -1032.45, y: -721.34, z: 4.21, name: "Happiness Island" },
    STATUE_OF_HAPPINESS: { x: -1032.45, y: -721.34, z: 96.45, name: "Statue of Happiness (Top)" },
    LIBERTY_FERRY_TERMINAL: { x: -784.56, y: -286.43, z: 5.67, name: "Liberty Ferry Terminal" },
    AIRPORT: { x: 2165.34, y: 487.65, z: 6.23, name: "Francis Intl Airport" },

    // Alderney
    ALDERNEY_SAFEHOUSE: { x: -1134.56, y: 743.21, z: 21.45, name: "Alderney Safehouse" },
    WESTDYKE: { x: -1423.67, y: 1234.56, z: 23.78, name: "Westdyke" },
    ACTER_INDUSTRIAL: { x: -1087.32, y: 256.78, z: 17.34, name: "Acter Industrial" },
    PORT_TUDOR: { x: -1256.43, y: -78.65, z: 6.54, name: "Port Tudor" },

    // Special
    HOSPITAL: { x: 1197.23, y: -476.54, z: 18.76, name: "Hospital" },
    POLICE_STATION: { x: 945.67, y: -367.89, z: 15.43, name: "Police Station" },
    BOWLING_ALLEY: { x: 754.32, y: -612.45, z: 12.34, name: "Bowling Alley" },
    BURGER_SHOT: { x: 1087.65, y: -234.56, z: 17.89, name: "Burger Shot" }
};

// ============================================================================
// TELEPORT MENU ITEMS
// ============================================================================

function getTeleportMenuItems() {
    return [
        createMenuItem("~~ QUICK TELEPORTS ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Teleport to Waypoint", ITEM_TYPE.FUNCTION, { action: teleportToWaypoint }),
        createMenuItem("Teleport Forward", ITEM_TYPE.FUNCTION, { action: teleportForward }),

        createMenuItem("~~ BROKER / DUKES ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Broker Safehouse", ITEM_TYPE.FUNCTION, {
            action: () => teleportTo(TELEPORT_LOCATIONS.BROKER_SAFEHOUSE)
        }),
        createMenuItem("Rotterdam Hill", ITEM_TYPE.FUNCTION, {
            action: () => teleportTo(TELEPORT_LOCATIONS.ROTTERDAM_HILL)
        }),
        createMenuItem("East Hook", ITEM_TYPE.FUNCTION, {
            action: () => teleportTo(TELEPORT_LOCATIONS.EAST_HOOK)
        }),
        createMenuItem("Steinway", ITEM_TYPE.FUNCTION, {
            action: () => teleportTo(TELEPORT_LOCATIONS.STEINWAY)
        }),

        createMenuItem("~~ BOHAN ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Bohan Safehouse", ITEM_TYPE.FUNCTION, {
            action: () => teleportTo(TELEPORT_LOCATIONS.BOHAN_SAFEHOUSE)
        }),
        createMenuItem("Northern Gardens", ITEM_TYPE.FUNCTION, {
            action: () => teleportTo(TELEPORT_LOCATIONS.NORTHERN_GARDENS)
        }),
        createMenuItem("South Bohan", ITEM_TYPE.FUNCTION, {
            action: () => teleportTo(TELEPORT_LOCATIONS.SOUTH_BOHAN)
        }),

        createMenuItem("~~ ALGONQUIN ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Middle Park", ITEM_TYPE.FUNCTION, {
            action: () => teleportTo(TELEPORT_LOCATIONS.MIDDLE_PARK)
        }),
        createMenuItem("Star Junction (Times Sq)", ITEM_TYPE.FUNCTION, {
            action: () => teleportTo(TELEPORT_LOCATIONS.STAR_JUNCTION)
        }),
        createMenuItem("Algonquin Safehouse", ITEM_TYPE.FUNCTION, {
            action: () => teleportTo(TELEPORT_LOCATIONS.ALGONQUIN_SAFEHOUSE)
        }),
        createMenuItem("Happiness Island", ITEM_TYPE.FUNCTION, {
            action: () => teleportTo(TELEPORT_LOCATIONS.HAPPINESS_ISLAND)
        }),
        createMenuItem("Statue of Happiness (Top)", ITEM_TYPE.FUNCTION, {
            action: () => teleportTo(TELEPORT_LOCATIONS.STATUE_OF_HAPPINESS)
        }),
        createMenuItem("Francis Intl Airport", ITEM_TYPE.FUNCTION, {
            action: () => teleportTo(TELEPORT_LOCATIONS.AIRPORT)
        }),

        createMenuItem("~~ ALDERNEY ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Alderney Safehouse", ITEM_TYPE.FUNCTION, {
            action: () => teleportTo(TELEPORT_LOCATIONS.ALDERNEY_SAFEHOUSE)
        }),
        createMenuItem("Westdyke", ITEM_TYPE.FUNCTION, {
            action: () => teleportTo(TELEPORT_LOCATIONS.WESTDYKE)
        }),
        createMenuItem("Acter Industrial", ITEM_TYPE.FUNCTION, {
            action: () => teleportTo(TELEPORT_LOCATIONS.ACTER_INDUSTRIAL)
        }),
        createMenuItem("Port Tudor", ITEM_TYPE.FUNCTION, {
            action: () => teleportTo(TELEPORT_LOCATIONS.PORT_TUDOR)
        }),

        createMenuItem("~~ SERVICES ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Hospital", ITEM_TYPE.FUNCTION, {
            action: () => teleportTo(TELEPORT_LOCATIONS.HOSPITAL)
        }),
        createMenuItem("Police Station", ITEM_TYPE.FUNCTION, {
            action: () => teleportTo(TELEPORT_LOCATIONS.POLICE_STATION)
        }),
        createMenuItem("Bowling Alley", ITEM_TYPE.FUNCTION, {
            action: () => teleportTo(TELEPORT_LOCATIONS.BOWLING_ALLEY)
        }),
        createMenuItem("Burger Shot", ITEM_TYPE.FUNCTION, {
            action: () => teleportTo(TELEPORT_LOCATIONS.BURGER_SHOT)
        }),

        createMenuItem("~~ COORDINATES ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Save Current Position", ITEM_TYPE.FUNCTION, { action: saveCurrentPosition }),
        createMenuItem("Teleport to Saved Position", ITEM_TYPE.FUNCTION, { action: teleportToSavedPosition })
    ];
}

// ============================================================================
// SAVED POSITIONS
// ============================================================================

let savedPositions = [];
let lastSavedPosition = null;

// ============================================================================
// TELEPORT FUNCTIONS
// ============================================================================

function teleportTo(location) {
    let playerId = natives.GET_PLAYER_ID();
    let playerPed = natives.GET_PLAYER_PED(playerId);

    let inVehicle = natives.IS_CHAR_IN_ANY_CAR(playerPed);

    if (inVehicle) {
        let vehicle = natives.GET_CAR_CHAR_IS_USING(playerPed);
        natives.SET_CAR_COORDINATES_NO_OFFSET(vehicle, location.x, location.y, location.z);
        natives.SET_CAR_ON_GROUND_PROPERLY(vehicle);
    } else {
        natives.SET_CHAR_COORDINATES_NO_OFFSET(playerPed, location.x, location.y, location.z);
    }

    showNotification("~g~Teleported to: ~s~" + location.name);
}

function teleportToWaypoint() {
    let playerId = natives.GET_PLAYER_ID();
    let playerPed = natives.GET_PLAYER_PED(playerId);

    // Check if waypoint is set
    let blipInfo = natives.GET_FIRST_BLIP_INFO_ID(8); // 8 = waypoint blip
    if (!blipInfo || blipInfo === 0) {
        showNotification("~r~No waypoint set!");
        return;
    }

    let blipCoords = natives.GET_BLIP_INFO_ID_COORD(blipInfo);
    if (!blipCoords) {
        showNotification("~r~Could not get waypoint coordinates!");
        return;
    }

    // Get ground Z at waypoint
    let groundZ = natives.GET_GROUND_Z_FOR_3D_COORD(blipCoords[0], blipCoords[1], 1000.0);
    let targetZ = groundZ ? groundZ + 1.0 : blipCoords[2] + 1.0;

    let inVehicle = natives.IS_CHAR_IN_ANY_CAR(playerPed);

    if (inVehicle) {
        let vehicle = natives.GET_CAR_CHAR_IS_USING(playerPed);
        natives.SET_CAR_COORDINATES_NO_OFFSET(vehicle, blipCoords[0], blipCoords[1], targetZ);
        natives.SET_CAR_ON_GROUND_PROPERLY(vehicle);
    } else {
        natives.SET_CHAR_COORDINATES_NO_OFFSET(playerPed, blipCoords[0], blipCoords[1], targetZ);
    }

    showNotification("~g~Teleported to waypoint!");
}

function teleportForward() {
    let playerId = natives.GET_PLAYER_ID();
    let playerPed = natives.GET_PLAYER_PED(playerId);

    let pos = natives.GET_CHAR_COORDINATES(playerPed);
    let heading = natives.GET_CHAR_HEADING(playerPed);

    // Calculate position 10 units forward
    let radians = heading * Math.PI / 180;
    let newX = pos[0] - Math.sin(radians) * 10;
    let newY = pos[1] + Math.cos(radians) * 10;
    let newZ = pos[2];

    // Get ground Z at new position
    let groundZ = natives.GET_GROUND_Z_FOR_3D_COORD(newX, newY, pos[2] + 100);
    if (groundZ) {
        newZ = groundZ + 1.0;
    }

    let inVehicle = natives.IS_CHAR_IN_ANY_CAR(playerPed);

    if (inVehicle) {
        let vehicle = natives.GET_CAR_CHAR_IS_USING(playerPed);
        natives.SET_CAR_COORDINATES_NO_OFFSET(vehicle, newX, newY, newZ);
    } else {
        natives.SET_CHAR_COORDINATES_NO_OFFSET(playerPed, newX, newY, newZ);
    }

    showNotification("~g~Teleported forward!");
}

function saveCurrentPosition() {
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    let pos = natives.GET_CHAR_COORDINATES(playerPed);
    let heading = natives.GET_CHAR_HEADING(playerPed);

    lastSavedPosition = {
        x: pos[0],
        y: pos[1],
        z: pos[2],
        heading: heading,
        name: "Saved Position " + (savedPositions.length + 1)
    };

    savedPositions.push(lastSavedPosition);

    showNotification("~g~Position saved! ~s~(" + pos[0].toFixed(2) + ", " + pos[1].toFixed(2) + ", " + pos[2].toFixed(2) + ")");
}

function teleportToSavedPosition() {
    if (!lastSavedPosition) {
        showNotification("~r~No position saved!");
        return;
    }

    let playerId = natives.GET_PLAYER_ID();
    let playerPed = natives.GET_PLAYER_PED(playerId);

    let inVehicle = natives.IS_CHAR_IN_ANY_CAR(playerPed);

    if (inVehicle) {
        let vehicle = natives.GET_CAR_CHAR_IS_USING(playerPed);
        natives.SET_CAR_COORDINATES_NO_OFFSET(vehicle, lastSavedPosition.x, lastSavedPosition.y, lastSavedPosition.z);
        natives.SET_CAR_HEADING(vehicle, lastSavedPosition.heading);
        natives.SET_CAR_ON_GROUND_PROPERLY(vehicle);
    } else {
        natives.SET_CHAR_COORDINATES_NO_OFFSET(playerPed, lastSavedPosition.x, lastSavedPosition.y, lastSavedPosition.z);
        natives.SET_CHAR_HEADING(playerPed, lastSavedPosition.heading);
    }

    showNotification("~g~Teleported to saved position!");
}

// ============================================================================
// EXPORTS
// ============================================================================

this.getTeleportMenuItems = getTeleportMenuItems;
this.teleportTo = teleportTo;
this.teleportToWaypoint = teleportToWaypoint;
this.TELEPORT_LOCATIONS = TELEPORT_LOCATIONS;
