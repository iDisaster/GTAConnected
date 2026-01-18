/**
 * MD TRIDENT - Vehicle Options Module
 * GTAConnected Port for GTA IV
 */

// ============================================================================
// VEHICLE MODEL HASHES (GTA IV)
// ============================================================================

const VEHICLE_MODELS = {
    // Sports Cars
    BANSHEE: 0xC1E908D2,
    COMET: 0x067BC037,
    COQUETTE: 0x067BC037,
    FELTZER: 0x8F5B9FB5,
    INFERNUS: 0x18F25AC7,
    SULTAN: 0x39DA2754,
    SULTANRS: 0xEE6024BC,
    SUPERGT: 0x42F2ED16,
    TURISMO: 0x185484E1,
    SENTINEL: 0x50732C82,

    // Muscle Cars
    BUCCANEER: 0xD756460C,
    DUKES: 0x2B26F456,
    FACTION: 0x81A9CDDF,
    MANANA: 0x81634188,
    PEYOTE: 0x6D19CCBC,
    RUINER: 0xF26CEFF9,
    SABRE: 0x9B909C94,
    SABREGT: 0x9B909C94,
    STALION: 0x72A4C31E,
    VIGERO: 0xCEC6B9B7,
    VIRGO: 0xE2504942,
    VOODOO: 0x1F3766E3,

    // SUVs and Off-Road
    BOBCAT: 0x31F0B376,
    CAVALCADE: 0x779F23AA,
    HABANERO: 0x34B7390F,
    HUNTLEY: 0x1D06D681,
    LANDSTALKER: 0x4BA4E8DC,
    PATRIOT: 0xCFCFEB3B,
    RANCHER: 0x6210CBB0,
    REBLA: 0x4C489021,

    // Sedans
    ADMIRAL: 0x32B29A4B,
    CHAVOS: 0xE8A8BDA8,
    COGNOSCENTI: 0x86FE0B60,
    EMPEROR: 0xD7278283,
    ESPERANTO: 0xFF8C6ED1,
    FEROCI: 0x1AD3D617,
    INGOT: 0xB3206692,
    INTRUDER: 0x34DD8AA1,
    LOKUS: 0xCB3C7191,
    ORACLE: 0x506434F6,
    PINNACLE: 0x874D2A8B,
    PMP600: 0x700E514C,
    PREMIER: 0x8FB66F9B,
    SCHAFTER: 0xB52B5113,
    VINCENT: 0x9D0450CA,
    WASHINGTON: 0x69F06B57,

    // Emergency Vehicles
    AMBULANCE: 0x45D56ADA,
    FBI: 0x432EA949,
    FIRETRUK: 0x73920F8E,
    NOOSE: 0xB4F32720,
    POLICE: 0x79FBB0C5,
    POLICE2: 0x9F05F101,
    POLPATRIOT: 0xCFCFEB3B,

    // Commercial
    BENSON: 0xB7B2BBE7,
    BOXVILLE: 0x898ECCEA,
    BURRITO: 0xAFBB2CA4,
    FLATBED: 0x50B0215A,
    MULE: 0x35ED670B,
    PACKER: 0x21EEE87D,
    PHANTOM: 0x809AA4CB,
    PONY: 0xF8DE29A8,
    SPEEDO: 0xCFB3870C,
    STOCKADE: 0x6827CF72,
    YANKEE: 0x3D236D91,

    // Public Service
    BUS: 0xD577C962,
    CABBY: 0x3FC5D440,
    ROMERO: 0x2560B2FC,
    TAXI: 0xC703DB5F,
    STRETCH: 0x8B13F083,
    TRASH: 0x72435A19,

    // Bikes
    FAGGIO: 0x9229E4EB,
    NRG900: 0x6F946279,
    PCJ: 0xC9CEAF06,
    SANCHEZ: 0x2EF89E46,
    ZOMBIEB: 0xDE05FB87,
    HELLFURY: 0x6598A42B,
    BOBBER: 0x67B52491,

    // Boats
    DINGHY: 0x3D961290,
    JETMAX: 0x33581161,
    MARQUIS: 0xC1CE1183,
    PREDATOR: 0xE2E7D4AB,
    REEFER: 0x1D97DCAF,
    SQUALO: 0x17DF5EC2,
    TROPIC: 0x1149422F,
    TUGA: 0x82CAC433,

    // Helicopters
    ANNIHILATOR: 0x31F0B376,
    MAVERICK: 0x9D0450CA,
    POLMAV: 0x1517D4D9,
    TOURMAV: 0x73232612
};

// ============================================================================
// VEHICLE OPTIONS STATE
// ============================================================================

let vehicleOptions = {
    godmode: false,
    speedBoost: false,
    autoFlip: false,
    autoFix: false,
    rainbow: false,
    invisible: false,
    engineAlwaysOn: false,
    nitro: false
};

// ============================================================================
// VEHICLE MENU ITEMS
// ============================================================================

function getVehicleMenuItems() {
    return [
        createMenuItem("~~ SPAWN VEHICLES ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Quick Spawner (Favorites)", ITEM_TYPE.SUBMENU, { submenu: "vehicle_favorites" }),
        createMenuItem("Sports Cars", ITEM_TYPE.SUBMENU, { submenu: "vehicle_sports" }),
        createMenuItem("Muscle / Vintage", ITEM_TYPE.SUBMENU, { submenu: "vehicle_muscle" }),
        createMenuItem("SUVs / Off-Road", ITEM_TYPE.SUBMENU, { submenu: "vehicle_suv" }),
        createMenuItem("Sedans", ITEM_TYPE.SUBMENU, { submenu: "vehicle_sedan" }),
        createMenuItem("Emergency Vehicles", ITEM_TYPE.SUBMENU, { submenu: "vehicle_emergency" }),
        createMenuItem("Bikes", ITEM_TYPE.SUBMENU, { submenu: "vehicle_bikes" }),
        createMenuItem("Boats", ITEM_TYPE.SUBMENU, { submenu: "vehicle_boats" }),
        createMenuItem("Helicopters", ITEM_TYPE.SUBMENU, { submenu: "vehicle_helicopters" }),
        createMenuItem("Commercial", ITEM_TYPE.SUBMENU, { submenu: "vehicle_commercial" }),

        createMenuItem("~~ VEHICLE OPTIONS ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Vehicle God Mode", ITEM_TYPE.BOOL, {
            boolState: vehicleOptions.godmode,
            action: toggleVehicleGodMode
        }),
        createMenuItem("Speed Boost", ITEM_TYPE.BOOL, {
            boolState: vehicleOptions.speedBoost,
            action: toggleSpeedBoost
        }),
        createMenuItem("Auto Flip", ITEM_TYPE.BOOL, {
            boolState: vehicleOptions.autoFlip,
            action: toggleAutoFlip
        }),
        createMenuItem("Auto Repair", ITEM_TYPE.BOOL, {
            boolState: vehicleOptions.autoFix,
            action: toggleAutoFix
        }),
        createMenuItem("Rainbow Car", ITEM_TYPE.BOOL, {
            boolState: vehicleOptions.rainbow,
            action: toggleRainbow
        }),
        createMenuItem("Invisible Vehicle", ITEM_TYPE.BOOL, {
            boolState: vehicleOptions.invisible,
            action: toggleVehicleInvisible
        }),

        createMenuItem("~~ VEHICLE ACTIONS ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Repair Vehicle", ITEM_TYPE.FUNCTION, { action: repairVehicle }),
        createMenuItem("Flip Vehicle", ITEM_TYPE.FUNCTION, { action: flipVehicle }),
        createMenuItem("Clean Vehicle", ITEM_TYPE.FUNCTION, { action: cleanVehicle }),
        createMenuItem("Maximize Performance", ITEM_TYPE.FUNCTION, { action: maxPerformance }),
        createMenuItem("Delete Vehicle", ITEM_TYPE.FUNCTION, { action: deleteVehicle }),
        createMenuItem("Teleport to Nearest Vehicle", ITEM_TYPE.FUNCTION, { action: teleportToNearestVehicle })
    ];
}

// ============================================================================
// VEHICLE CATEGORY ITEMS
// ============================================================================

function getFavoriteVehicleItems() {
    return [
        createMenuItem("Comet", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.COMET, action: spawnVehicleAction }),
        createMenuItem("Turismo", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.TURISMO, action: spawnVehicleAction }),
        createMenuItem("Infernus", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.INFERNUS, action: spawnVehicleAction }),
        createMenuItem("Super GT", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.SUPERGT, action: spawnVehicleAction }),
        createMenuItem("Sultan RS", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.SULTANRS, action: spawnVehicleAction }),
        createMenuItem("Oracle", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.ORACLE, action: spawnVehicleAction }),
        createMenuItem("Patriot", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.PATRIOT, action: spawnVehicleAction }),
        createMenuItem("FBI", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.FBI, action: spawnVehicleAction }),
        createMenuItem("Bus", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.BUS, action: spawnVehicleAction }),
        createMenuItem("NRG 900", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.NRG900, action: spawnVehicleAction }),
        createMenuItem("Maverick", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.MAVERICK, action: spawnVehicleAction }),
        createMenuItem("Annihilator", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.ANNIHILATOR, action: spawnVehicleAction })
    ];
}

function getSportsVehicleItems() {
    return [
        createMenuItem("Banshee", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.BANSHEE, action: spawnVehicleAction }),
        createMenuItem("Comet", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.COMET, action: spawnVehicleAction }),
        createMenuItem("Coquette", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.COQUETTE, action: spawnVehicleAction }),
        createMenuItem("Feltzer", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.FELTZER, action: spawnVehicleAction }),
        createMenuItem("Infernus", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.INFERNUS, action: spawnVehicleAction }),
        createMenuItem("Sultan", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.SULTAN, action: spawnVehicleAction }),
        createMenuItem("Sultan RS", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.SULTANRS, action: spawnVehicleAction }),
        createMenuItem("Super GT", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.SUPERGT, action: spawnVehicleAction }),
        createMenuItem("Turismo", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.TURISMO, action: spawnVehicleAction }),
        createMenuItem("Sentinel", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.SENTINEL, action: spawnVehicleAction })
    ];
}

function getMuscleVehicleItems() {
    return [
        createMenuItem("Buccaneer", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.BUCCANEER, action: spawnVehicleAction }),
        createMenuItem("Dukes", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.DUKES, action: spawnVehicleAction }),
        createMenuItem("Faction", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.FACTION, action: spawnVehicleAction }),
        createMenuItem("Manana", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.MANANA, action: spawnVehicleAction }),
        createMenuItem("Peyote", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.PEYOTE, action: spawnVehicleAction }),
        createMenuItem("Ruiner", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.RUINER, action: spawnVehicleAction }),
        createMenuItem("Sabre", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.SABRE, action: spawnVehicleAction }),
        createMenuItem("Stallion", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.STALION, action: spawnVehicleAction }),
        createMenuItem("Vigero", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.VIGERO, action: spawnVehicleAction }),
        createMenuItem("Virgo", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.VIRGO, action: spawnVehicleAction }),
        createMenuItem("Voodoo", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.VOODOO, action: spawnVehicleAction })
    ];
}

function getSUVVehicleItems() {
    return [
        createMenuItem("Bobcat", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.BOBCAT, action: spawnVehicleAction }),
        createMenuItem("Cavalcade", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.CAVALCADE, action: spawnVehicleAction }),
        createMenuItem("Habanero", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.HABANERO, action: spawnVehicleAction }),
        createMenuItem("Huntley", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.HUNTLEY, action: spawnVehicleAction }),
        createMenuItem("Landstalker", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.LANDSTALKER, action: spawnVehicleAction }),
        createMenuItem("Patriot", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.PATRIOT, action: spawnVehicleAction }),
        createMenuItem("Rancher", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.RANCHER, action: spawnVehicleAction }),
        createMenuItem("Rebla", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.REBLA, action: spawnVehicleAction })
    ];
}

function getSedanVehicleItems() {
    return [
        createMenuItem("Admiral", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.ADMIRAL, action: spawnVehicleAction }),
        createMenuItem("Chavos", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.CHAVOS, action: spawnVehicleAction }),
        createMenuItem("Cognoscenti", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.COGNOSCENTI, action: spawnVehicleAction }),
        createMenuItem("Emperor", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.EMPEROR, action: spawnVehicleAction }),
        createMenuItem("Esperanto", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.ESPERANTO, action: spawnVehicleAction }),
        createMenuItem("Feroci", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.FEROCI, action: spawnVehicleAction }),
        createMenuItem("Ingot", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.INGOT, action: spawnVehicleAction }),
        createMenuItem("Intruder", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.INTRUDER, action: spawnVehicleAction }),
        createMenuItem("Lokus", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.LOKUS, action: spawnVehicleAction }),
        createMenuItem("Oracle", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.ORACLE, action: spawnVehicleAction }),
        createMenuItem("Pinnacle", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.PINNACLE, action: spawnVehicleAction }),
        createMenuItem("Premier", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.PREMIER, action: spawnVehicleAction }),
        createMenuItem("Schafter", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.SCHAFTER, action: spawnVehicleAction }),
        createMenuItem("Washington", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.WASHINGTON, action: spawnVehicleAction })
    ];
}

function getEmergencyVehicleItems() {
    return [
        createMenuItem("Ambulance", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.AMBULANCE, action: spawnVehicleAction }),
        createMenuItem("FBI", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.FBI, action: spawnVehicleAction }),
        createMenuItem("Fire Truck", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.FIRETRUK, action: spawnVehicleAction }),
        createMenuItem("NOOSE", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.NOOSE, action: spawnVehicleAction }),
        createMenuItem("Police", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.POLICE, action: spawnVehicleAction }),
        createMenuItem("Police 2", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.POLICE2, action: spawnVehicleAction }),
        createMenuItem("Police Patriot", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.POLPATRIOT, action: spawnVehicleAction })
    ];
}

function getBikeVehicleItems() {
    return [
        createMenuItem("Faggio", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.FAGGIO, action: spawnVehicleAction }),
        createMenuItem("NRG 900", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.NRG900, action: spawnVehicleAction }),
        createMenuItem("PCJ", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.PCJ, action: spawnVehicleAction }),
        createMenuItem("Sanchez", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.SANCHEZ, action: spawnVehicleAction }),
        createMenuItem("Zombie B", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.ZOMBIEB, action: spawnVehicleAction }),
        createMenuItem("Hellfury", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.HELLFURY, action: spawnVehicleAction }),
        createMenuItem("Bobber", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.BOBBER, action: spawnVehicleAction })
    ];
}

function getBoatVehicleItems() {
    return [
        createMenuItem("Dinghy", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.DINGHY, action: spawnVehicleAction }),
        createMenuItem("Jetmax", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.JETMAX, action: spawnVehicleAction }),
        createMenuItem("Marquis", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.MARQUIS, action: spawnVehicleAction }),
        createMenuItem("Predator", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.PREDATOR, action: spawnVehicleAction }),
        createMenuItem("Reefer", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.REEFER, action: spawnVehicleAction }),
        createMenuItem("Squalo", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.SQUALO, action: spawnVehicleAction }),
        createMenuItem("Tropic", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.TROPIC, action: spawnVehicleAction }),
        createMenuItem("Tuga", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.TUGA, action: spawnVehicleAction })
    ];
}

function getHelicopterVehicleItems() {
    return [
        createMenuItem("Annihilator", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.ANNIHILATOR, action: spawnVehicleAction }),
        createMenuItem("Maverick", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.MAVERICK, action: spawnVehicleAction }),
        createMenuItem("Police Maverick", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.POLMAV, action: spawnVehicleAction }),
        createMenuItem("Tour Maverick", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.TOURMAV, action: spawnVehicleAction })
    ];
}

function getCommercialVehicleItems() {
    return [
        createMenuItem("Benson", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.BENSON, action: spawnVehicleAction }),
        createMenuItem("Boxville", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.BOXVILLE, action: spawnVehicleAction }),
        createMenuItem("Burrito", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.BURRITO, action: spawnVehicleAction }),
        createMenuItem("Flatbed", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.FLATBED, action: spawnVehicleAction }),
        createMenuItem("Mule", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.MULE, action: spawnVehicleAction }),
        createMenuItem("Packer", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.PACKER, action: spawnVehicleAction }),
        createMenuItem("Phantom", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.PHANTOM, action: spawnVehicleAction }),
        createMenuItem("Pony", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.PONY, action: spawnVehicleAction }),
        createMenuItem("Speedo", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.SPEEDO, action: spawnVehicleAction }),
        createMenuItem("Stockade", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.STOCKADE, action: spawnVehicleAction }),
        createMenuItem("Yankee", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.YANKEE, action: spawnVehicleAction }),
        createMenuItem("Bus", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.BUS, action: spawnVehicleAction }),
        createMenuItem("Taxi", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.TAXI, action: spawnVehicleAction }),
        createMenuItem("Stretch", ITEM_TYPE.VEHICLE, { vehicleModel: VEHICLE_MODELS.STRETCH, action: spawnVehicleAction })
    ];
}

// ============================================================================
// TOGGLE FUNCTIONS
// ============================================================================

function toggleVehicleGodMode(state) {
    vehicleOptions.godmode = state;
    showNotification(state ? "~g~Vehicle God Mode ~s~ON" : "~r~Vehicle God Mode ~s~OFF");
}

function toggleSpeedBoost(state) {
    vehicleOptions.speedBoost = state;
    showNotification(state ? "~g~Speed Boost ~s~ON (Press Shift)" : "~r~Speed Boost ~s~OFF");
}

function toggleAutoFlip(state) {
    vehicleOptions.autoFlip = state;
    showNotification(state ? "~g~Auto Flip ~s~ON" : "~r~Auto Flip ~s~OFF");
}

function toggleAutoFix(state) {
    vehicleOptions.autoFix = state;
    showNotification(state ? "~g~Auto Repair ~s~ON" : "~r~Auto Repair ~s~OFF");
}

function toggleRainbow(state) {
    vehicleOptions.rainbow = state;
    showNotification(state ? "~g~Rainbow Car ~s~ON" : "~r~Rainbow Car ~s~OFF");
}

function toggleVehicleInvisible(state) {
    vehicleOptions.invisible = state;
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    if (natives.IS_CHAR_IN_ANY_CAR(playerPed)) {
        let vehicle = natives.GET_CAR_CHAR_IS_USING(playerPed);
        natives.SET_CAR_VISIBLE(vehicle, !state);
    }
    showNotification(state ? "~g~Invisible Vehicle ~s~ON" : "~r~Invisible Vehicle ~s~OFF");
}

// ============================================================================
// ACTION FUNCTIONS
// ============================================================================

function spawnVehicleAction(modelHash) {
    spawnVehicleForPlayer(modelHash);
}

function spawnVehicleForPlayer(modelHash) {
    let playerId = natives.GET_PLAYER_ID();
    let playerPed = natives.GET_PLAYER_PED(playerId);

    let pos = natives.GET_CHAR_COORDINATES(playerPed);
    let heading = natives.GET_CHAR_HEADING(playerPed);

    // Request model
    natives.REQUEST_MODEL(modelHash);

    // Wait for model to load
    let attempts = 0;
    while (!natives.HAS_MODEL_LOADED(modelHash) && attempts < 100) {
        natives.WAIT(10);
        attempts++;
    }

    if (!natives.HAS_MODEL_LOADED(modelHash)) {
        showNotification("~r~Failed to load vehicle model!");
        return null;
    }

    // Calculate spawn position in front of player
    let radians = heading * Math.PI / 180;
    let spawnX = pos[0] - Math.sin(radians) * 5;
    let spawnY = pos[1] + Math.cos(radians) * 5;
    let spawnZ = pos[2];

    // Create vehicle
    let vehicle = natives.CREATE_CAR(modelHash, spawnX, spawnY, spawnZ, true, true);

    if (vehicle) {
        natives.SET_CAR_HEADING(vehicle, heading);
        natives.SET_CAR_ON_GROUND_PROPERLY(vehicle);

        // Get vehicle display name
        let vehName = natives.GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(modelHash);
        let displayName = natives.GET_STRING_FROM_TEXT_FILE(vehName) || "Vehicle";

        showNotification("~g~Spawned: ~s~" + displayName);
    }

    // Mark model as no longer needed
    natives.MARK_MODEL_AS_NO_LONGER_NEEDED(modelHash);

    return vehicle;
}

function repairVehicle() {
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    if (!natives.IS_CHAR_IN_ANY_CAR(playerPed)) {
        showNotification("~r~You are not in a vehicle!");
        return;
    }

    let vehicle = natives.GET_CAR_CHAR_IS_USING(playerPed);
    natives.FIX_CAR(vehicle);
    natives.SET_CAR_ENGINE_ON(vehicle, true, true);
    showNotification("~g~Vehicle repaired!");
}

function flipVehicle() {
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    if (!natives.IS_CHAR_IN_ANY_CAR(playerPed)) {
        showNotification("~r~You are not in a vehicle!");
        return;
    }

    let vehicle = natives.GET_CAR_CHAR_IS_USING(playerPed);
    let heading = natives.GET_CAR_HEADING(vehicle);
    natives.SET_VEHICLE_QUATERNION(vehicle, 0, 0, 0, 0);
    natives.SET_CAR_HEADING(vehicle, heading);
    natives.SET_CAR_ON_GROUND_PROPERLY(vehicle);
    showNotification("~g~Vehicle flipped!");
}

function cleanVehicle() {
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    if (!natives.IS_CHAR_IN_ANY_CAR(playerPed)) {
        showNotification("~r~You are not in a vehicle!");
        return;
    }

    let vehicle = natives.GET_CAR_CHAR_IS_USING(playerPed);
    natives.SET_VEHICLE_DIRT_LEVEL(vehicle, 0);
    showNotification("~g~Vehicle cleaned!");
}

function maxPerformance() {
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    if (!natives.IS_CHAR_IN_ANY_CAR(playerPed)) {
        showNotification("~r~You are not in a vehicle!");
        return;
    }

    let vehicle = natives.GET_CAR_CHAR_IS_USING(playerPed);
    // Set max performance (if supported)
    natives.FIX_CAR(vehicle);
    natives.SET_CAR_ENGINE_ON(vehicle, true, true);
    showNotification("~g~Vehicle maxed out!");
}

function deleteVehicle() {
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    if (!natives.IS_CHAR_IN_ANY_CAR(playerPed)) {
        showNotification("~r~You are not in a vehicle!");
        return;
    }

    let vehicle = natives.GET_CAR_CHAR_IS_USING(playerPed);

    // Eject player first
    natives.TASK_LEAVE_CAR_IMMEDIATELY(playerPed, vehicle);
    natives.WAIT(500);

    natives.DELETE_CAR(vehicle);
    showNotification("~g~Vehicle deleted!");
}

function teleportToNearestVehicle() {
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    let pos = natives.GET_CHAR_COORDINATES(playerPed);

    let vehicle = natives.GET_CLOSEST_CAR(pos[0], pos[1], pos[2], 100.0, false, 70);

    if (vehicle && natives.DOES_VEHICLE_EXIST(vehicle)) {
        natives.WARP_CHAR_INTO_CAR(playerPed, vehicle);
        showNotification("~g~Teleported to nearest vehicle!");
    } else {
        showNotification("~r~No vehicle found nearby!");
    }
}

// ============================================================================
// VEHICLE OPTIONS LOOP
// ============================================================================

let rainbowColor = 0;

function vehicleOptionsLoop() {
    let playerId = natives.GET_PLAYER_ID();
    let playerPed = natives.GET_PLAYER_PED(playerId);

    if (!natives.IS_CHAR_IN_ANY_CAR(playerPed)) return;

    let vehicle = natives.GET_CAR_CHAR_IS_USING(playerPed);

    // Vehicle God Mode
    if (vehicleOptions.godmode) {
        natives.SET_CAR_CAN_BE_DAMAGED(vehicle, false);
        natives.SET_CAR_CAN_BE_VISIBLY_DAMAGED(vehicle, false);
        let health = natives.GET_CAR_HEALTH(vehicle);
        if (health < 1000) {
            natives.SET_CAR_HEALTH(vehicle, 1000);
        }
    }

    // Speed Boost
    if (vehicleOptions.speedBoost) {
        if (natives.IS_GAME_KEYBOARD_KEY_PRESSED(0x10)) { // Shift
            natives.APPLY_FORCE_TO_CAR(vehicle, true, 0.0, 50.0, 0.0, 0.0, 0.0, 0.0, true, true, true, true);
        }
    }

    // Auto Flip
    if (vehicleOptions.autoFlip) {
        if (!natives.IS_CAR_UPRIGHT(vehicle)) {
            let heading = natives.GET_CAR_HEADING(vehicle);
            natives.SET_VEHICLE_QUATERNION(vehicle, 0, 0, 0, 0);
            natives.SET_CAR_HEADING(vehicle, heading);
            natives.SET_CAR_ON_GROUND_PROPERLY(vehicle);
        }
    }

    // Auto Fix
    if (vehicleOptions.autoFix) {
        let health = natives.GET_CAR_HEALTH(vehicle);
        if (health < 800) {
            natives.FIX_CAR(vehicle);
        }
    }

    // Rainbow Car
    if (vehicleOptions.rainbow) {
        rainbowColor = (rainbowColor + 1) % 134;
        natives.CHANGE_CAR_COLOUR(vehicle, rainbowColor, rainbowColor);
    }

    // Invisible Vehicle (maintain state)
    if (vehicleOptions.invisible) {
        natives.SET_CAR_VISIBLE(vehicle, false);
    }
}

// ============================================================================
// EVENT HANDLERS
// ============================================================================

addEventHandler("OnProcess", function(event) {
    vehicleOptionsLoop();
});

// ============================================================================
// EXPORTS
// ============================================================================

this.vehicleOptions = vehicleOptions;
this.getVehicleMenuItems = getVehicleMenuItems;
this.getFavoriteVehicleItems = getFavoriteVehicleItems;
this.getSportsVehicleItems = getSportsVehicleItems;
this.getMuscleVehicleItems = getMuscleVehicleItems;
this.getSUVVehicleItems = getSUVVehicleItems;
this.getSedanVehicleItems = getSedanVehicleItems;
this.getEmergencyVehicleItems = getEmergencyVehicleItems;
this.getBikeVehicleItems = getBikeVehicleItems;
this.getBoatVehicleItems = getBoatVehicleItems;
this.getHelicopterVehicleItems = getHelicopterVehicleItems;
this.getCommercialVehicleItems = getCommercialVehicleItems;
this.spawnVehicleForPlayer = spawnVehicleForPlayer;
