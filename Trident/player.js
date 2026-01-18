/**
 * MD TRIDENT - Player Options Module
 * GTAConnected Port for GTA IV
 */

// ============================================================================
// PLAYER OPTIONS STATE
// ============================================================================

let playerOptions = {
    godmode: false,
    neverWanted: false,
    infiniteAmmo: false,
    superRun: false,
    superJump: false,
    superPunch: false,
    invisible: false,
    flyMode: false,
    inferno: false,
    forceField: false,
    juggernaut: false,
    rapidFire: false,
    autoAim: false,
    gravity: true,
    slowMotion: false
};

// Fly mode state
let flyModeState = {
    active: false,
    camera: null,
    pitch: 0,
    speed: 1.0
};

// ============================================================================
// PLAYER MENU ITEMS
// ============================================================================

function getPlayerMenuItems() {
    let playerId = natives.GET_PLAYER_ID();
    let playerPed = natives.GET_PLAYER_PED(playerId);

    return [
        createMenuItem("~~ PLAYER PROTECTION ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("God Mode", ITEM_TYPE.BOOL, {
            boolState: playerOptions.godmode,
            action: toggleGodMode
        }),
        createMenuItem("Juggernaut (Auto Health/Armor)", ITEM_TYPE.BOOL, {
            boolState: playerOptions.juggernaut,
            action: toggleJuggernaut
        }),
        createMenuItem("Never Wanted", ITEM_TYPE.BOOL, {
            boolState: playerOptions.neverWanted,
            action: toggleNeverWanted
        }),

        createMenuItem("~~ PLAYER ABILITIES ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Super Run", ITEM_TYPE.BOOL, {
            boolState: playerOptions.superRun,
            action: toggleSuperRun
        }),
        createMenuItem("Super Jump", ITEM_TYPE.BOOL, {
            boolState: playerOptions.superJump,
            action: toggleSuperJump
        }),
        createMenuItem("Super Punch", ITEM_TYPE.BOOL, {
            boolState: playerOptions.superPunch,
            action: toggleSuperPunch
        }),
        createMenuItem("Fly Mode", ITEM_TYPE.BOOL, {
            boolState: playerOptions.flyMode,
            action: toggleFlyMode
        }),

        createMenuItem("~~ PLAYER EFFECTS ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Invisible", ITEM_TYPE.BOOL, {
            boolState: playerOptions.invisible,
            action: toggleInvisible
        }),
        createMenuItem("Inferno Mode", ITEM_TYPE.BOOL, {
            boolState: playerOptions.inferno,
            action: toggleInferno
        }),
        createMenuItem("Force Field", ITEM_TYPE.BOOL, {
            boolState: playerOptions.forceField,
            action: toggleForceField
        }),

        createMenuItem("~~ PLAYER PHYSICS ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Normal Gravity", ITEM_TYPE.BOOL, {
            boolState: playerOptions.gravity,
            action: toggleGravity
        }),
        createMenuItem("Slow Motion", ITEM_TYPE.BOOL, {
            boolState: playerOptions.slowMotion,
            action: toggleSlowMotion
        }),

        createMenuItem("~~ PLAYER ACTIONS ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Give Health", ITEM_TYPE.FUNCTION, { action: giveHealth }),
        createMenuItem("Give Armor", ITEM_TYPE.FUNCTION, { action: giveArmor }),
        createMenuItem("Give All Weapons", ITEM_TYPE.FUNCTION, { action: giveAllWeapons }),
        createMenuItem("Remove All Weapons", ITEM_TYPE.FUNCTION, { action: removeAllWeapons }),
        createMenuItem("Spawn Money", ITEM_TYPE.FUNCTION, { action: spawnMoney }),
        createMenuItem("Fix Player", ITEM_TYPE.FUNCTION, { action: fixPlayer }),
        createMenuItem("Change to Niko", ITEM_TYPE.FUNCTION, { action: changeToNiko }),
        createMenuItem("Explode Self", ITEM_TYPE.FUNCTION, { action: explodeSelf }),
        createMenuItem("Resurrect", ITEM_TYPE.FUNCTION, { action: resurrectPlayer }),

        createMenuItem("~~ WANTED LEVEL ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Set Wanted Level", ITEM_TYPE.VALUE_NUM, {
            value: 0,
            minValue: 0,
            maxValue: 6,
            action: setWantedLevel
        }),
        createMenuItem("Clear Wanted Level", ITEM_TYPE.FUNCTION, { action: clearWantedLevel })
    ];
}

// ============================================================================
// TOGGLE FUNCTIONS
// ============================================================================

function toggleGodMode(state) {
    playerOptions.godmode = state;
    let playerId = natives.GET_PLAYER_ID();
    let playerPed = natives.GET_PLAYER_PED(playerId);

    natives.SET_CHAR_INVINCIBLE(playerPed, state);
    natives.SET_PLAYER_NEVER_GETS_TIRED(playerId, state);
    natives.SET_PLAYER_FAST_RELOAD(playerId, state);
    natives.SET_CHAR_NEVER_TARGETTED(playerPed, state);
    natives.ENABLE_MAX_AMMO_CAP(!state);

    showNotification(state ? "~g~God Mode ~s~ON" : "~r~God Mode ~s~OFF");
}

function toggleJuggernaut(state) {
    playerOptions.juggernaut = state;
    showNotification(state ? "~g~Juggernaut ~s~ON" : "~r~Juggernaut ~s~OFF");
}

function toggleNeverWanted(state) {
    playerOptions.neverWanted = state;
    if (state) {
        natives.CLEAR_WANTED_LEVEL(natives.GET_PLAYER_ID());
    }
    showNotification(state ? "~g~Never Wanted ~s~ON" : "~r~Never Wanted ~s~OFF");
}

function toggleSuperRun(state) {
    playerOptions.superRun = state;
    showNotification(state ? "~g~Super Run ~s~ON (Hold LB/RB + A)" : "~r~Super Run ~s~OFF");
}

function toggleSuperJump(state) {
    playerOptions.superJump = state;
    showNotification(state ? "~g~Super Jump ~s~ON (Hold LB/RB + X)" : "~r~Super Jump ~s~OFF");
}

function toggleSuperPunch(state) {
    playerOptions.superPunch = state;
    showNotification(state ? "~g~Super Punch ~s~ON (Hold LB + B)" : "~r~Super Punch ~s~OFF");
}

function toggleFlyMode(state) {
    playerOptions.flyMode = state;
    flyModeState.active = state;

    let playerId = natives.GET_PLAYER_ID();
    let playerPed = natives.GET_PLAYER_PED(playerId);

    if (state) {
        // Create fly mode camera
        flyModeState.camera = natives.CREATE_CAM(14);
        natives.SET_CAM_ACTIVE(flyModeState.camera, true);
        natives.SET_CAM_PROPAGATE(flyModeState.camera, true);
        natives.ACTIVATE_SCRIPTED_CAMS(true, true);
        natives.ATTACH_CAM_TO_PED(flyModeState.camera, playerPed);
        natives.POINT_CAM_AT_PED(flyModeState.camera, playerPed);
        flyModeState.pitch = 0;
        showNotification("~g~Fly Mode ~s~ON");
    } else {
        // Destroy fly mode camera
        if (flyModeState.camera) {
            natives.SET_CAM_ACTIVE(flyModeState.camera, false);
            natives.SET_CAM_PROPAGATE(flyModeState.camera, false);
            natives.ACTIVATE_SCRIPTED_CAMS(false, false);
            natives.DESTROY_CAM(flyModeState.camera);
            flyModeState.camera = null;
        }
        natives.FREEZE_CHAR_POSITION(playerPed, false);
        showNotification("~r~Fly Mode ~s~OFF");
    }
}

function toggleInvisible(state) {
    playerOptions.invisible = state;
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    natives.SET_CHAR_VISIBLE(playerPed, !state);
    showNotification(state ? "~g~Invisible ~s~ON" : "~r~Invisible ~s~OFF");
}

function toggleInferno(state) {
    playerOptions.inferno = state;
    showNotification(state ? "~g~Inferno Mode ~s~ON" : "~r~Inferno Mode ~s~OFF");
}

function toggleForceField(state) {
    playerOptions.forceField = state;
    if (state && !playerOptions.godmode) {
        toggleGodMode(true);
        showNotification("~y~God Mode auto-enabled for Force Field");
    }
    showNotification(state ? "~g~Force Field ~s~ON" : "~r~Force Field ~s~OFF");
}

function toggleGravity(state) {
    playerOptions.gravity = state;
    natives.SET_GRAVITY_OFF(!state);
    showNotification(state ? "~g~Gravity ~s~ON" : "~r~Gravity ~s~OFF");
}

function toggleSlowMotion(state) {
    playerOptions.slowMotion = state;
    natives.SET_TIME_SCALE(state ? 0.3 : 1.0);
    showNotification(state ? "~g~Slow Motion ~s~ON" : "~r~Slow Motion ~s~OFF");
}

// ============================================================================
// ACTION FUNCTIONS
// ============================================================================

function giveHealth() {
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    natives.SET_CHAR_HEALTH(playerPed, 200);
    showNotification("~g~Health restored!");
}

function giveArmor() {
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    natives.ADD_ARMOUR_TO_CHAR(playerPed, 100);
    showNotification("~g~Armor added!");
}

function giveAllWeapons() {
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    let episode = natives.GET_CURRENT_EPISODE();
    natives.GIVE_EPISODIC_WEAPONS_TO_CHAR(playerPed, episode);
    showNotification("~g~All weapons given!");
}

function removeAllWeapons() {
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    natives.REMOVE_ALL_CHAR_WEAPONS(playerPed);
    showNotification("~r~All weapons removed!");
}

function spawnMoney() {
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    for (let i = 0; i < 4; i++) {
        natives.GIVE_CASH_PICKUP_TO_CHAR(playerPed, 10000);
    }
    showNotification("~g~Money spawned around you!");
}

function fixPlayer() {
    let playerId = natives.GET_PLAYER_ID();
    let playerPed = natives.GET_PLAYER_PED(playerId);

    natives.SET_CHAR_HEALTH(playerPed, 200);
    natives.ADD_ARMOUR_TO_CHAR(playerPed, 100);
    natives.CLEAR_CHAR_TASKS(playerPed);
    natives.CLEAR_CHAR_TASKS_IMMEDIATELY(playerPed);

    showNotification("~g~Player fixed!");
}

function changeToNiko() {
    let playerId = natives.GET_PLAYER_ID();
    let playerPed = natives.GET_PLAYER_PED(playerId);

    // MODEL_PLAYER is Niko's model hash
    let nikoModel = natives.GET_HASH_KEY("PLAYER");
    natives.REQUEST_MODEL(nikoModel);

    let attempts = 0;
    while (!natives.HAS_MODEL_LOADED(nikoModel) && attempts < 100) {
        natives.WAIT(10);
        attempts++;
    }

    if (natives.HAS_MODEL_LOADED(nikoModel)) {
        natives.CHANGE_PLAYER_MODEL(playerId, nikoModel);
        natives.SET_CHAR_HEALTH(playerPed, 200);
        natives.ADD_ARMOUR_TO_CHAR(playerPed, 100);
        natives.MARK_MODEL_AS_NO_LONGER_NEEDED(nikoModel);
        showNotification("~g~Changed to Niko!");
    } else {
        showNotification("~r~Failed to load model!");
    }
}

function explodeSelf() {
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    let pos = natives.GET_CHAR_COORDINATES(playerPed);

    natives.ADD_EXPLOSION(pos[0], pos[1], pos[2], 2, 10.0, true, false, 0.7);
    showNotification("~r~BOOM!");
}

function resurrectPlayer() {
    let playerId = natives.GET_PLAYER_ID();
    let playerPed = natives.GET_PLAYER_PED(playerId);
    let pos = natives.GET_CHAR_COORDINATES(playerPed);

    natives.RESURRECT_NETWORK_PLAYER(playerId, pos[0], pos[1], pos[2], 0);
    natives.SET_CHAR_HEALTH(playerPed, 200);
    showNotification("~g~Resurrected!");
}

function setWantedLevel(level) {
    let playerId = natives.GET_PLAYER_ID();
    natives.ALTER_WANTED_LEVEL(playerId, level);
    natives.APPLY_WANTED_LEVEL_CHANGE_NOW(playerId);
    showNotification("~b~Wanted level set to: ~s~" + level);
}

function clearWantedLevel() {
    let playerId = natives.GET_PLAYER_ID();
    natives.CLEAR_WANTED_LEVEL(playerId);
    showNotification("~g~Wanted level cleared!");
}

// ============================================================================
// PLAYER OPTIONS LOOP
// ============================================================================

function playerOptionsLoop() {
    let playerId = natives.GET_PLAYER_ID();
    let playerPed = natives.GET_PLAYER_PED(playerId);

    if (!natives.DOES_CHAR_EXIST(playerPed)) return;

    // God Mode maintenance
    if (playerOptions.godmode) {
        natives.SET_CHAR_INVINCIBLE(playerPed, true);
    }

    // Juggernaut (auto health/armor)
    if (playerOptions.juggernaut) {
        let health = natives.GET_CHAR_HEALTH(playerPed);
        let armor = natives.GET_CHAR_ARMOUR(playerPed);

        if (health < 200) natives.SET_CHAR_HEALTH(playerPed, 200);
        if (armor < 100) natives.ADD_ARMOUR_TO_CHAR(playerPed, 100 - armor);
    }

    // Never Wanted
    if (playerOptions.neverWanted) {
        natives.CLEAR_WANTED_LEVEL(playerId);
    }

    // Infinite Ammo
    if (playerOptions.infiniteAmmo && natives.IS_CHAR_SHOOTING(playerPed)) {
        let weapon = natives.GET_CURRENT_CHAR_WEAPON(playerPed);
        if (weapon !== 16 && weapon !== 17) { // Not grenade or molotov
            let maxAmmo = natives.GET_MAX_AMMO_IN_CLIP(playerPed, weapon);
            natives.SET_AMMO_IN_CLIP(playerPed, weapon, maxAmmo);
        }
    }

    // Super Powers (only when not in vehicle)
    let inVehicle = natives.IS_CHAR_IN_ANY_CAR(playerPed);
    if (!inVehicle) {
        let lbPressed = natives.IS_BUTTON_PRESSED(0, 256);  // LB
        let rbPressed = natives.IS_BUTTON_PRESSED(0, 512);  // RB

        // Super Run (LB/RB + A)
        if (playerOptions.superRun && (lbPressed || rbPressed) && natives.IS_BUTTON_PRESSED(0, 16)) {
            let force = lbPressed ? 100.0 : 10.0;
            natives.APPLY_FORCE_TO_PED(playerPed, true, 0.0, force, 0.0, 0.0, 0.0, 0.0, true, true, true, true);
        }

        // Super Jump (LB/RB + X)
        if (playerOptions.superJump && (lbPressed || rbPressed) && natives.IS_BUTTON_PRESSED(0, 64)) {
            let upForce = lbPressed ? 11.0 : 50.0;
            let fwdForce = lbPressed ? 1.2 : 0.0;
            natives.APPLY_FORCE_TO_PED(playerPed, true, 0.0, fwdForce, upForce, 0.0, 0.0, 0.0, true, true, true, true);
        }

        // Super Punch (LB + B with fist)
        if (playerOptions.superPunch && lbPressed && natives.IS_BUTTON_PRESSED(0, 32)) {
            let weapon = natives.GET_CURRENT_CHAR_WEAPON(playerPed);
            if (weapon === 0) { // Unarmed
                let offset = natives.GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(playerPed, 0, 2, 0);
                natives.ADD_EXPLOSION(offset[0], offset[1], offset[2], 2, 10, false, true, 0);
            }
        }
    }

    // Inferno Mode
    if (playerOptions.inferno) {
        let pos = natives.GET_CHAR_COORDINATES(playerPed);
        natives.ADD_EXPLOSION(pos[0], pos[1], pos[2], 5, 7.5, true, false, 0.0);
    }

    // Force Field
    if (playerOptions.forceField) {
        let pos = natives.GET_CHAR_COORDINATES(playerPed);
        natives.ADD_EXPLOSION(pos[0], pos[1], pos[2], 2, 10.0, false, true, 0.0);
    }

    // Fly Mode
    if (flyModeState.active) {
        processFlyMode();
    }
}

// ============================================================================
// FLY MODE PROCESSING
// ============================================================================

function processFlyMode() {
    let playerId = natives.GET_PLAYER_ID();
    let playerPed = natives.GET_PLAYER_PED(playerId);

    if (!flyModeState.camera) return;

    natives.FREEZE_CHAR_POSITION(playerPed, true);

    let pos = natives.GET_CHAR_COORDINATES(playerPed);
    let heading = natives.GET_CHAR_HEADING(playerPed);

    // Get analog stick input
    let sticks = natives.GET_POSITION_OF_ANALOGUE_STICKS(0);
    let leftX = sticks[0] || 0;
    let leftY = sticks[1] || 0;
    let rightX = sticks[2] || 0;
    let rightY = sticks[3] || 0;

    // Adjust heading with right stick
    heading = heading - (rightX * 0.035);
    if (heading > 360) heading -= 360;
    if (heading < 0) heading += 360;

    // Adjust pitch
    flyModeState.pitch = flyModeState.pitch - (rightY * 0.035);
    if (flyModeState.pitch < -70) flyModeState.pitch = -70;
    if (flyModeState.pitch > 70) flyModeState.pitch = 70;

    // Speed modifiers
    let moveSpeed = 1.0;
    if (natives.IS_BUTTON_PRESSED(0, 512)) moveSpeed = 4.0;  // RB - Fast
    if (natives.IS_BUTTON_PRESSED(0, 256)) moveSpeed = 0.25; // LB - Slow

    // Calculate movement
    let moveTrig = (leftY * 0.0133) * Math.cos(flyModeState.pitch * Math.PI / 180);
    let newX = pos[0] + (moveSpeed * ((moveTrig * Math.sin(heading * Math.PI / 180)) + (leftX * 0.0133) * Math.cos(heading * Math.PI / 180)));
    let newY = pos[1] - (moveSpeed * ((moveTrig * Math.cos(heading * Math.PI / 180)) - (leftX * 0.0133) * Math.sin(heading * Math.PI / 180)));
    let newZ = pos[2] - (moveSpeed * ((leftY * 0.0133) * Math.sin(flyModeState.pitch * Math.PI / 180)));

    // Height adjustment with triggers
    let lt = natives.GET_CONTROL_VALUE(0, 6); // LT
    let rt = natives.GET_CONTROL_VALUE(0, 5); // RT
    newZ = newZ + (moveSpeed * ((rt * 0.0025) - (lt * 0.0025)));

    // Update position
    natives.SET_CHAR_COORDINATES_NO_OFFSET(playerPed, newX, newY, newZ);
    natives.SET_CHAR_HEADING(playerPed, heading);

    // Update camera
    let camDistance = 4.0;
    let camOffsetTrig = camDistance * Math.cos((flyModeState.pitch - 18) * Math.PI / 180);
    let camOffsetX = camOffsetTrig * Math.sin(heading * Math.PI / 180);
    let camOffsetY = -camOffsetTrig * Math.cos(heading * Math.PI / 180);
    let camOffsetZ = -camDistance * Math.sin((flyModeState.pitch - 18) * Math.PI / 180);

    natives.SET_CAM_ATTACH_OFFSET(flyModeState.camera, camOffsetX, camOffsetY, camOffsetZ);

    // Exit fly mode with all shoulder buttons
    if (natives.IS_BUTTON_PRESSED(0, 256) && natives.IS_BUTTON_PRESSED(0, 512) &&
        natives.IS_BUTTON_PRESSED(0, 1024) && natives.IS_BUTTON_PRESSED(0, 2048)) {
        toggleFlyMode(false);
    }
}

// ============================================================================
// EVENT HANDLERS
// ============================================================================

addEventHandler("OnProcess", function(event) {
    playerOptionsLoop();
});

// ============================================================================
// EXPORTS
// ============================================================================

this.playerOptions = playerOptions;
this.getPlayerMenuItems = getPlayerMenuItems;
this.toggleGodMode = toggleGodMode;
this.toggleNeverWanted = toggleNeverWanted;
this.giveHealth = giveHealth;
this.giveArmor = giveArmor;
