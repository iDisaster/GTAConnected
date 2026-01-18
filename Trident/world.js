/**
 * MD TRIDENT - World Options Module (Weather & Time)
 * GTAConnected Port for GTA IV
 */

// ============================================================================
// WEATHER TYPES (GTA IV)
// ============================================================================

const WEATHER_TYPES = {
    EXTRA_SUNNY: 0,
    SUNNY: 1,
    SUNNY_WINDY: 2,
    CLOUDY: 3,
    RAINING: 4,
    DRIZZLE: 5,
    FOGGY: 6,
    THUNDERSTORM: 7,
    EXTRA_SUNNY_2: 8,
    SUNNY_WINDY_2: 9
};

const WEATHER_NAMES = [
    "Extra Sunny",
    "Sunny",
    "Sunny Windy",
    "Cloudy",
    "Raining",
    "Drizzle",
    "Foggy",
    "Thunderstorm",
    "Extra Sunny 2",
    "Sunny Windy 2"
];

// ============================================================================
// WORLD OPTIONS STATE
// ============================================================================

let worldOptions = {
    timeFrozen: false,
    weatherLocked: false,
    currentWeather: 1,
    currentHour: 12,
    currentMinute: 0
};

// ============================================================================
// WEATHER MENU ITEMS
// ============================================================================

function getWeatherMenuItems() {
    return [
        createMenuItem("~~ TIME CONTROL ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Set Hour", ITEM_TYPE.VALUE_NUM, {
            value: worldOptions.currentHour,
            minValue: 0,
            maxValue: 23,
            action: setHour
        }),
        createMenuItem("Set Minute", ITEM_TYPE.VALUE_NUM, {
            value: worldOptions.currentMinute,
            minValue: 0,
            maxValue: 59,
            action: setMinute
        }),
        createMenuItem("Freeze Time", ITEM_TYPE.BOOL, {
            boolState: worldOptions.timeFrozen,
            action: toggleFreezeTime
        }),

        createMenuItem("~~ QUICK TIME ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Morning (06:00)", ITEM_TYPE.FUNCTION, { action: () => setTimeQuick(6, 0) }),
        createMenuItem("Noon (12:00)", ITEM_TYPE.FUNCTION, { action: () => setTimeQuick(12, 0) }),
        createMenuItem("Evening (18:00)", ITEM_TYPE.FUNCTION, { action: () => setTimeQuick(18, 0) }),
        createMenuItem("Midnight (00:00)", ITEM_TYPE.FUNCTION, { action: () => setTimeQuick(0, 0) }),
        createMenuItem("Night (22:00)", ITEM_TYPE.FUNCTION, { action: () => setTimeQuick(22, 0) }),

        createMenuItem("~~ WEATHER CONTROL ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Select Weather", ITEM_TYPE.VALUE_STRING, {
            value: worldOptions.currentWeather,
            stringValues: WEATHER_NAMES,
            action: setWeather
        }),
        createMenuItem("Lock Weather", ITEM_TYPE.BOOL, {
            boolState: worldOptions.weatherLocked,
            action: toggleLockWeather
        }),

        createMenuItem("~~ QUICK WEATHER ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Extra Sunny", ITEM_TYPE.FUNCTION, { action: () => setWeatherQuick(WEATHER_TYPES.EXTRA_SUNNY) }),
        createMenuItem("Sunny", ITEM_TYPE.FUNCTION, { action: () => setWeatherQuick(WEATHER_TYPES.SUNNY) }),
        createMenuItem("Cloudy", ITEM_TYPE.FUNCTION, { action: () => setWeatherQuick(WEATHER_TYPES.CLOUDY) }),
        createMenuItem("Raining", ITEM_TYPE.FUNCTION, { action: () => setWeatherQuick(WEATHER_TYPES.RAINING) }),
        createMenuItem("Thunderstorm", ITEM_TYPE.FUNCTION, { action: () => setWeatherQuick(WEATHER_TYPES.THUNDERSTORM) }),
        createMenuItem("Foggy", ITEM_TYPE.FUNCTION, { action: () => setWeatherQuick(WEATHER_TYPES.FOGGY) }),
        createMenuItem("Drizzle", ITEM_TYPE.FUNCTION, { action: () => setWeatherQuick(WEATHER_TYPES.DRIZZLE) }),

        createMenuItem("~~ WORLD OPTIONS ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Random Weather", ITEM_TYPE.FUNCTION, { action: randomWeather }),
        createMenuItem("Release Weather Lock", ITEM_TYPE.FUNCTION, { action: releaseWeather }),
        createMenuItem("Clear Area of Peds", ITEM_TYPE.FUNCTION, { action: clearAreaPeds }),
        createMenuItem("Clear Area of Vehicles", ITEM_TYPE.FUNCTION, { action: clearAreaVehicles })
    ];
}

// ============================================================================
// TIME FUNCTIONS
// ============================================================================

function setHour(hour) {
    worldOptions.currentHour = hour;
    natives.SET_TIME_OF_DAY(hour, worldOptions.currentMinute);
    showNotification("~b~Time set to: ~s~" + hour.toString().padStart(2, '0') + ":" + worldOptions.currentMinute.toString().padStart(2, '0'));
}

function setMinute(minute) {
    worldOptions.currentMinute = minute;
    natives.SET_TIME_OF_DAY(worldOptions.currentHour, minute);
    showNotification("~b~Time set to: ~s~" + worldOptions.currentHour.toString().padStart(2, '0') + ":" + minute.toString().padStart(2, '0'));
}

function setTimeQuick(hour, minute) {
    worldOptions.currentHour = hour;
    worldOptions.currentMinute = minute;
    natives.SET_TIME_OF_DAY(hour, minute);
    showNotification("~b~Time set to: ~s~" + hour.toString().padStart(2, '0') + ":" + minute.toString().padStart(2, '0'));
}

function toggleFreezeTime(state) {
    worldOptions.timeFrozen = state;
    // In GTA IV, we control time by repeatedly setting it in the loop
    showNotification(state ? "~g~Time Frozen ~s~ON" : "~r~Time Frozen ~s~OFF");
}

// ============================================================================
// WEATHER FUNCTIONS
// ============================================================================

function setWeather(weatherIndex) {
    worldOptions.currentWeather = weatherIndex;
    natives.FORCE_WEATHER_NOW(weatherIndex);
    showNotification("~b~Weather set to: ~s~" + WEATHER_NAMES[weatherIndex]);
}

function setWeatherQuick(weatherType) {
    worldOptions.currentWeather = weatherType;
    natives.FORCE_WEATHER_NOW(weatherType);
    worldOptions.weatherLocked = true;
    showNotification("~b~Weather set to: ~s~" + WEATHER_NAMES[weatherType]);
}

function toggleLockWeather(state) {
    worldOptions.weatherLocked = state;
    if (state) {
        worldOptions.currentWeather = natives.GET_CURRENT_WEATHER() || 1;
    }
    showNotification(state ? "~g~Weather Locked ~s~ON" : "~r~Weather Locked ~s~OFF");
}

function releaseWeather() {
    worldOptions.weatherLocked = false;
    natives.RELEASE_WEATHER();
    showNotification("~g~Weather released!");
}

function randomWeather() {
    let randomType = Math.floor(Math.random() * 8);
    setWeatherQuick(randomType);
}

// ============================================================================
// WORLD CLEANUP FUNCTIONS
// ============================================================================

function clearAreaPeds() {
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    let pos = natives.GET_CHAR_COORDINATES(playerPed);

    natives.CLEAR_AREA_OF_CHARS(pos[0], pos[1], pos[2], 100.0);
    showNotification("~g~Area cleared of peds!");
}

function clearAreaVehicles() {
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    let pos = natives.GET_CHAR_COORDINATES(playerPed);

    natives.CLEAR_AREA_OF_CARS(pos[0], pos[1], pos[2], 100.0);
    showNotification("~g~Area cleared of vehicles!");
}

// ============================================================================
// WORLD OPTIONS LOOP
// ============================================================================

function worldOptionsLoop() {
    // Freeze Time
    if (worldOptions.timeFrozen) {
        natives.SET_TIME_OF_DAY(worldOptions.currentHour, worldOptions.currentMinute);
    }

    // Lock Weather
    if (worldOptions.weatherLocked) {
        natives.FORCE_WEATHER_NOW(worldOptions.currentWeather);
    }
}

// ============================================================================
// ADDITIONAL MENU ITEMS
// ============================================================================

function getModelMenuItems() {
    return [
        createMenuItem("~~ PLAYER MODELS ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Change to Niko", ITEM_TYPE.FUNCTION, { action: changeToNiko }),
        createMenuItem("Change to Random Ped", ITEM_TYPE.FUNCTION, { action: changeToRandomPed }),
        createMenuItem("Reset Model", ITEM_TYPE.FUNCTION, { action: resetModel }),

        createMenuItem("~~ PRESET MODELS ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Police Officer", ITEM_TYPE.FUNCTION, { action: () => changeToModel("M_Y_COP") }),
        createMenuItem("NOOSE Officer", ITEM_TYPE.FUNCTION, { action: () => changeToModel("M_Y_SWAT") }),
        createMenuItem("Paramedic", ITEM_TYPE.FUNCTION, { action: () => changeToModel("M_M_PARAMEDIC") }),
        createMenuItem("Fireman", ITEM_TYPE.FUNCTION, { action: () => changeToModel("M_Y_FIREMAN") }),
        createMenuItem("Business Man", ITEM_TYPE.FUNCTION, { action: () => changeToModel("M_M_BUSINESSMAN") }),
        createMenuItem("Homeless", ITEM_TYPE.FUNCTION, { action: () => changeToModel("M_O_HOMELESS") }),
        createMenuItem("Biker", ITEM_TYPE.FUNCTION, { action: () => changeToModel("M_Y_GBIK01") }),
        createMenuItem("Mafia", ITEM_TYPE.FUNCTION, { action: () => changeToModel("M_M_PRICH_01") })
    ];
}

function getAnimationMenuItems() {
    return [
        createMenuItem("~~ ANIMATIONS ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Play: Wave", ITEM_TYPE.FUNCTION, { action: () => playAnimation("amb@wave") }),
        createMenuItem("Play: Cheer", ITEM_TYPE.FUNCTION, { action: () => playAnimation("amb@cheering") }),
        createMenuItem("Play: Dance", ITEM_TYPE.FUNCTION, { action: () => playAnimation("amb@dancing_fem") }),
        createMenuItem("Play: Sit Down", ITEM_TYPE.FUNCTION, { action: () => playAnimation("amb@sitting") }),
        createMenuItem("Play: Smoking", ITEM_TYPE.FUNCTION, { action: () => playAnimation("amb@smoking") }),
        createMenuItem("Play: Push Ups", ITEM_TYPE.FUNCTION, { action: () => playAnimation("amb@pushups") }),
        createMenuItem("Clear Animation", ITEM_TYPE.FUNCTION, { action: clearAnimation })
    ];
}

function getObjectMenuItems() {
    return [
        createMenuItem("~~ OBJECT SPAWNER ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Spawn: Barrel", ITEM_TYPE.FUNCTION, { action: () => spawnObject("prop_barrel_01") }),
        createMenuItem("Spawn: Cone", ITEM_TYPE.FUNCTION, { action: () => spawnObject("prop_cone") }),
        createMenuItem("Spawn: Ramp", ITEM_TYPE.FUNCTION, { action: () => spawnObject("prop_ramp") }),
        createMenuItem("Spawn: Fence", ITEM_TYPE.FUNCTION, { action: () => spawnObject("prop_fence") }),

        createMenuItem("~~ OBJECT MANAGEMENT ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Delete Nearest Object", ITEM_TYPE.FUNCTION, { action: deleteNearestObject }),
        createMenuItem("Delete All Spawned Objects", ITEM_TYPE.FUNCTION, { action: deleteAllSpawnedObjects })
    ];
}

function getSettingsMenuItems() {
    return [
        createMenuItem("~~ MENU SETTINGS ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Menu Position X", ITEM_TYPE.VALUE_NUM, {
            value: Math.floor(MENU_CONFIG.posX * 100),
            minValue: 0,
            maxValue: 100,
            action: (val) => { MENU_CONFIG.posX = val / 100; }
        }),
        createMenuItem("Menu Position Y", ITEM_TYPE.VALUE_NUM, {
            value: Math.floor(MENU_CONFIG.posY * 100),
            minValue: 0,
            maxValue: 100,
            action: (val) => { MENU_CONFIG.posY = val / 100; }
        }),
        createMenuItem("Reset Menu Position", ITEM_TYPE.FUNCTION, { action: resetMenuPosition }),

        createMenuItem("~~ GAME SETTINGS ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Toggle HUD", ITEM_TYPE.FUNCTION, { action: toggleHUD }),
        createMenuItem("Toggle Radar", ITEM_TYPE.FUNCTION, { action: toggleRadar })
    ];
}

function getCreditsMenuItems() {
    return [
        createMenuItem("~~ MD TRIDENT ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Version: v13 GTAConnected Port", ITEM_TYPE.ERROR),
        createMenuItem("~~ ORIGINAL AUTHORS ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("DEVILSDESIGN", ITEM_TYPE.ERROR),
        createMenuItem("IIV_NATHAN_VII", ITEM_TYPE.ERROR),
        createMenuItem("SHOCKixiXixiWAVE", ITEM_TYPE.ERROR),
        createMenuItem("~~ PORTED FOR ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("GTAConnected GTA IV Server", ITEM_TYPE.ERROR),
        createMenuItem("~~ THANK YOU ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Thanks for using MD TRIDENT!", ITEM_TYPE.ERROR)
    ];
}

function getNetworkMenuItems() {
    // Get list of players for network options
    let items = [
        createMenuItem("~~ NETWORK OPTIONS ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Player List", ITEM_TYPE.SUBMENU, { submenu: "player_list" }),
        createMenuItem("Spectate Player", ITEM_TYPE.FUNCTION, { action: spectatePlayer }),
        createMenuItem("Stop Spectating", ITEM_TYPE.FUNCTION, { action: stopSpectating })
    ];

    return items;
}

// ============================================================================
// HELPER FUNCTIONS
// ============================================================================

function changeToModel(modelName) {
    let playerId = natives.GET_PLAYER_ID();
    let modelHash = natives.GET_HASH_KEY(modelName);

    natives.REQUEST_MODEL(modelHash);

    let attempts = 0;
    while (!natives.HAS_MODEL_LOADED(modelHash) && attempts < 100) {
        natives.WAIT(10);
        attempts++;
    }

    if (natives.HAS_MODEL_LOADED(modelHash)) {
        natives.CHANGE_PLAYER_MODEL(playerId, modelHash);
        natives.MARK_MODEL_AS_NO_LONGER_NEEDED(modelHash);
        showNotification("~g~Changed model to: ~s~" + modelName);
    } else {
        showNotification("~r~Failed to load model!");
    }
}

function changeToNiko() {
    changeToModel("PLAYER");
}

function changeToRandomPed() {
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    natives.SET_CHAR_RANDOM_COMPONENT_VARIATION(playerPed);
    showNotification("~g~Random variation applied!");
}

function resetModel() {
    let playerId = natives.GET_PLAYER_ID();
    let defaultModel = natives.GET_PLAYERSETTINGS_MODEL_CHOICE();
    natives.CHANGE_PLAYER_MODEL(playerId, defaultModel);
    showNotification("~g~Model reset!");
}

function playAnimation(animName) {
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    natives.REQUEST_ANIMS(animName);

    let attempts = 0;
    while (!natives.HAVE_ANIMS_LOADED(animName) && attempts < 100) {
        natives.WAIT(10);
        attempts++;
    }

    if (natives.HAVE_ANIMS_LOADED(animName)) {
        natives.TASK_PLAY_ANIM(playerPed, animName, animName, 4.0, false, false, false, false, -1);
        showNotification("~g~Playing animation!");
    } else {
        showNotification("~r~Failed to load animation!");
    }
}

function clearAnimation() {
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    natives.CLEAR_CHAR_TASKS(playerPed);
    showNotification("~g~Animation cleared!");
}

let spawnedObjects = [];

function spawnObject(objectName) {
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    let pos = natives.GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(playerPed, 0, 3, 0);

    let modelHash = natives.GET_HASH_KEY(objectName);
    natives.REQUEST_MODEL(modelHash);

    let attempts = 0;
    while (!natives.HAS_MODEL_LOADED(modelHash) && attempts < 100) {
        natives.WAIT(10);
        attempts++;
    }

    if (natives.HAS_MODEL_LOADED(modelHash)) {
        let obj = natives.CREATE_OBJECT(modelHash, pos[0], pos[1], pos[2], true, true);
        if (obj) {
            spawnedObjects.push(obj);
            natives.PLACE_OBJECT_ON_GROUND_PROPERLY(obj);
            showNotification("~g~Object spawned!");
        }
        natives.MARK_MODEL_AS_NO_LONGER_NEEDED(modelHash);
    } else {
        showNotification("~r~Failed to load object!");
    }
}

function deleteNearestObject() {
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    let pos = natives.GET_CHAR_COORDINATES(playerPed);

    let obj = natives.GET_CLOSEST_OBJECT_OF_TYPE(pos[0], pos[1], pos[2], 10.0, 0, false);
    if (obj && natives.DOES_OBJECT_EXIST(obj)) {
        natives.DELETE_OBJECT(obj);
        showNotification("~g~Object deleted!");
    } else {
        showNotification("~r~No object found nearby!");
    }
}

function deleteAllSpawnedObjects() {
    for (let obj of spawnedObjects) {
        if (natives.DOES_OBJECT_EXIST(obj)) {
            natives.DELETE_OBJECT(obj);
        }
    }
    spawnedObjects = [];
    showNotification("~g~All spawned objects deleted!");
}

function resetMenuPosition() {
    MENU_CONFIG.posX = 0.695;
    MENU_CONFIG.posY = 0.155;
    showNotification("~g~Menu position reset!");
}

let hudVisible = true;
function toggleHUD() {
    hudVisible = !hudVisible;
    natives.DISPLAY_HUD(hudVisible);
    showNotification(hudVisible ? "~g~HUD Visible" : "~r~HUD Hidden");
}

let radarVisible = true;
function toggleRadar() {
    radarVisible = !radarVisible;
    natives.DISPLAY_RADAR(radarVisible);
    showNotification(radarVisible ? "~g~Radar Visible" : "~r~Radar Hidden");
}

let spectating = false;
let spectateTarget = null;

function spectatePlayer() {
    // TODO: Implement player list selection for spectating
    showNotification("~y~Select a player to spectate from Player List");
}

function stopSpectating() {
    if (spectating) {
        let playerId = natives.GET_PLAYER_ID();
        let playerPed = natives.GET_PLAYER_PED(playerId);
        natives.SET_CAMERA_CONTROLS_DISABLED_WITH_PLAYER_CONTROLS(false);
        natives.SET_PLAYER_CONTROL(playerId, true);
        spectating = false;
        spectateTarget = null;
        showNotification("~g~Stopped spectating!");
    } else {
        showNotification("~r~Not currently spectating!");
    }
}

// ============================================================================
// EVENT HANDLERS
// ============================================================================

addEventHandler("OnProcess", function(event) {
    worldOptionsLoop();
});

// ============================================================================
// EXPORTS
// ============================================================================

this.worldOptions = worldOptions;
this.getWeatherMenuItems = getWeatherMenuItems;
this.getModelMenuItems = getModelMenuItems;
this.getAnimationMenuItems = getAnimationMenuItems;
this.getObjectMenuItems = getObjectMenuItems;
this.getSettingsMenuItems = getSettingsMenuItems;
this.getCreditsMenuItems = getCreditsMenuItems;
this.getNetworkMenuItems = getNetworkMenuItems;
this.setWeather = setWeather;
this.setTimeQuick = setTimeQuick;
