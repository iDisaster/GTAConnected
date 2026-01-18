/**
 * MD TRIDENT - Weapon Options Module
 * GTAConnected Port for GTA IV
 */

// ============================================================================
// WEAPON HASHES (GTA IV)
// ============================================================================

const WEAPONS = {
    // Melee
    UNARMED: 0,
    BASEBALLBAT: 1,
    POOLCUE: 2,
    KNIFE: 3,

    // Handguns
    GLOCK: 4,
    DESERTEAGLE: 5,
    PISTOL44: 6,

    // SMGs
    MICRO_UZI: 7,
    MP5: 8,
    SMG: 9,

    // Shotguns
    SAWNOFF: 10,
    BARETTA: 11,
    COMBATSHOTGUN: 12,

    // Rifles
    M4: 13,
    AK47: 14,

    // Snipers
    SNIPER: 15,
    M40A1: 16,
    PSG1: 17,

    // Heavy
    RPG: 18,

    // Thrown
    GRENADE: 16,
    MOLOTOV: 17
};

// ============================================================================
// WEAPON OPTIONS STATE
// ============================================================================

let weaponOptions = {
    infiniteAmmo: false,
    rapidFire: false,
    explosiveAmmo: false,
    oneHitKill: false
};

// ============================================================================
// WEAPON MENU ITEMS
// ============================================================================

function getWeaponMenuItems() {
    return [
        createMenuItem("~~ WEAPON OPTIONS ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Infinite Ammo", ITEM_TYPE.BOOL, {
            boolState: weaponOptions.infiniteAmmo,
            action: toggleInfiniteAmmo
        }),
        createMenuItem("Rapid Fire", ITEM_TYPE.BOOL, {
            boolState: weaponOptions.rapidFire,
            action: toggleRapidFire
        }),
        createMenuItem("Explosive Ammo", ITEM_TYPE.BOOL, {
            boolState: weaponOptions.explosiveAmmo,
            action: toggleExplosiveAmmo
        }),
        createMenuItem("One Hit Kill", ITEM_TYPE.BOOL, {
            boolState: weaponOptions.oneHitKill,
            action: toggleOneHitKill
        }),

        createMenuItem("~~ GIVE WEAPONS ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Give All Weapons", ITEM_TYPE.FUNCTION, { action: giveAllWeaponsAction }),
        createMenuItem("Give Handguns", ITEM_TYPE.FUNCTION, { action: giveHandguns }),
        createMenuItem("Give SMGs", ITEM_TYPE.FUNCTION, { action: giveSMGs }),
        createMenuItem("Give Shotguns", ITEM_TYPE.FUNCTION, { action: giveShotguns }),
        createMenuItem("Give Rifles", ITEM_TYPE.FUNCTION, { action: giveRifles }),
        createMenuItem("Give Snipers", ITEM_TYPE.FUNCTION, { action: giveSnipers }),
        createMenuItem("Give Heavy Weapons", ITEM_TYPE.FUNCTION, { action: giveHeavy }),
        createMenuItem("Give Thrown Weapons", ITEM_TYPE.FUNCTION, { action: giveThrown }),
        createMenuItem("Give Melee Weapons", ITEM_TYPE.FUNCTION, { action: giveMelee }),

        createMenuItem("~~ AMMO ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Max Ammo All Weapons", ITEM_TYPE.FUNCTION, { action: maxAmmoAllWeapons }),
        createMenuItem("Remove All Weapons", ITEM_TYPE.FUNCTION, { action: removeAllWeaponsAction }),

        createMenuItem("~~ INDIVIDUAL WEAPONS ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Spawn: Baseball Bat", ITEM_TYPE.FUNCTION, { action: () => giveWeapon(WEAPONS.BASEBALLBAT) }),
        createMenuItem("Spawn: Knife", ITEM_TYPE.FUNCTION, { action: () => giveWeapon(WEAPONS.KNIFE) }),
        createMenuItem("Spawn: Glock", ITEM_TYPE.FUNCTION, { action: () => giveWeapon(WEAPONS.GLOCK) }),
        createMenuItem("Spawn: Desert Eagle", ITEM_TYPE.FUNCTION, { action: () => giveWeapon(WEAPONS.DESERTEAGLE) }),
        createMenuItem("Spawn: Micro Uzi", ITEM_TYPE.FUNCTION, { action: () => giveWeapon(WEAPONS.MICRO_UZI) }),
        createMenuItem("Spawn: MP5", ITEM_TYPE.FUNCTION, { action: () => giveWeapon(WEAPONS.MP5) }),
        createMenuItem("Spawn: Sawn-off", ITEM_TYPE.FUNCTION, { action: () => giveWeapon(WEAPONS.SAWNOFF) }),
        createMenuItem("Spawn: Combat Shotgun", ITEM_TYPE.FUNCTION, { action: () => giveWeapon(WEAPONS.COMBATSHOTGUN) }),
        createMenuItem("Spawn: M4", ITEM_TYPE.FUNCTION, { action: () => giveWeapon(WEAPONS.M4) }),
        createMenuItem("Spawn: AK-47", ITEM_TYPE.FUNCTION, { action: () => giveWeapon(WEAPONS.AK47) }),
        createMenuItem("Spawn: Sniper Rifle", ITEM_TYPE.FUNCTION, { action: () => giveWeapon(WEAPONS.SNIPER) }),
        createMenuItem("Spawn: RPG", ITEM_TYPE.FUNCTION, { action: () => giveWeapon(WEAPONS.RPG) }),
        createMenuItem("Spawn: Grenades", ITEM_TYPE.FUNCTION, { action: () => giveWeapon(WEAPONS.GRENADE) }),
        createMenuItem("Spawn: Molotovs", ITEM_TYPE.FUNCTION, { action: () => giveWeapon(WEAPONS.MOLOTOV) })
    ];
}

// ============================================================================
// TOGGLE FUNCTIONS
// ============================================================================

function toggleInfiniteAmmo(state) {
    weaponOptions.infiniteAmmo = state;
    showNotification(state ? "~g~Infinite Ammo ~s~ON" : "~r~Infinite Ammo ~s~OFF");
}

function toggleRapidFire(state) {
    weaponOptions.rapidFire = state;
    showNotification(state ? "~g~Rapid Fire ~s~ON" : "~r~Rapid Fire ~s~OFF");
}

function toggleExplosiveAmmo(state) {
    weaponOptions.explosiveAmmo = state;
    showNotification(state ? "~g~Explosive Ammo ~s~ON" : "~r~Explosive Ammo ~s~OFF");
}

function toggleOneHitKill(state) {
    weaponOptions.oneHitKill = state;
    showNotification(state ? "~g~One Hit Kill ~s~ON" : "~r~One Hit Kill ~s~OFF");
}

// ============================================================================
// WEAPON FUNCTIONS
// ============================================================================

function giveWeapon(weaponId, ammo = 9999) {
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    natives.GIVE_WEAPON_TO_CHAR(playerPed, weaponId, ammo, false);
    showNotification("~g~Weapon given!");
}

function giveAllWeaponsAction() {
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    let episode = natives.GET_CURRENT_EPISODE();
    natives.GIVE_EPISODIC_WEAPONS_TO_CHAR(playerPed, episode);
    showNotification("~g~All weapons given!");
}

function giveHandguns() {
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    natives.GIVE_WEAPON_TO_CHAR(playerPed, WEAPONS.GLOCK, 9999, false);
    natives.GIVE_WEAPON_TO_CHAR(playerPed, WEAPONS.DESERTEAGLE, 9999, false);
    natives.GIVE_WEAPON_TO_CHAR(playerPed, WEAPONS.PISTOL44, 9999, false);
    showNotification("~g~Handguns given!");
}

function giveSMGs() {
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    natives.GIVE_WEAPON_TO_CHAR(playerPed, WEAPONS.MICRO_UZI, 9999, false);
    natives.GIVE_WEAPON_TO_CHAR(playerPed, WEAPONS.MP5, 9999, false);
    natives.GIVE_WEAPON_TO_CHAR(playerPed, WEAPONS.SMG, 9999, false);
    showNotification("~g~SMGs given!");
}

function giveShotguns() {
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    natives.GIVE_WEAPON_TO_CHAR(playerPed, WEAPONS.SAWNOFF, 9999, false);
    natives.GIVE_WEAPON_TO_CHAR(playerPed, WEAPONS.BARETTA, 9999, false);
    natives.GIVE_WEAPON_TO_CHAR(playerPed, WEAPONS.COMBATSHOTGUN, 9999, false);
    showNotification("~g~Shotguns given!");
}

function giveRifles() {
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    natives.GIVE_WEAPON_TO_CHAR(playerPed, WEAPONS.M4, 9999, false);
    natives.GIVE_WEAPON_TO_CHAR(playerPed, WEAPONS.AK47, 9999, false);
    showNotification("~g~Rifles given!");
}

function giveSnipers() {
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    natives.GIVE_WEAPON_TO_CHAR(playerPed, WEAPONS.SNIPER, 9999, false);
    natives.GIVE_WEAPON_TO_CHAR(playerPed, WEAPONS.M40A1, 9999, false);
    natives.GIVE_WEAPON_TO_CHAR(playerPed, WEAPONS.PSG1, 9999, false);
    showNotification("~g~Sniper rifles given!");
}

function giveHeavy() {
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    natives.GIVE_WEAPON_TO_CHAR(playerPed, WEAPONS.RPG, 9999, false);
    showNotification("~g~Heavy weapons given!");
}

function giveThrown() {
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    natives.GIVE_WEAPON_TO_CHAR(playerPed, WEAPONS.GRENADE, 25, false);
    natives.GIVE_WEAPON_TO_CHAR(playerPed, WEAPONS.MOLOTOV, 25, false);
    showNotification("~g~Thrown weapons given!");
}

function giveMelee() {
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    natives.GIVE_WEAPON_TO_CHAR(playerPed, WEAPONS.BASEBALLBAT, 1, false);
    natives.GIVE_WEAPON_TO_CHAR(playerPed, WEAPONS.POOLCUE, 1, false);
    natives.GIVE_WEAPON_TO_CHAR(playerPed, WEAPONS.KNIFE, 1, false);
    showNotification("~g~Melee weapons given!");
}

function maxAmmoAllWeapons() {
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());

    // Add ammo to all weapon types
    for (let weaponId = 1; weaponId <= 18; weaponId++) {
        if (natives.HAS_CHAR_GOT_WEAPON(playerPed, weaponId)) {
            natives.ADD_AMMO_TO_CHAR(playerPed, weaponId, 9999);
        }
    }

    showNotification("~g~Max ammo added to all weapons!");
}

function removeAllWeaponsAction() {
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    natives.REMOVE_ALL_CHAR_WEAPONS(playerPed);
    showNotification("~r~All weapons removed!");
}

// ============================================================================
// WEAPON OPTIONS LOOP
// ============================================================================

function weaponOptionsLoop() {
    let playerId = natives.GET_PLAYER_ID();
    let playerPed = natives.GET_PLAYER_PED(playerId);

    if (!natives.DOES_CHAR_EXIST(playerPed)) return;

    // Infinite Ammo
    if (weaponOptions.infiniteAmmo && natives.IS_CHAR_SHOOTING(playerPed)) {
        let weapon = natives.GET_CURRENT_CHAR_WEAPON(playerPed);
        if (weapon !== WEAPONS.GRENADE && weapon !== WEAPONS.MOLOTOV) {
            let maxAmmo = natives.GET_MAX_AMMO_IN_CLIP(playerPed, weapon);
            if (maxAmmo) {
                natives.SET_AMMO_IN_CLIP(playerPed, weapon, maxAmmo);
            }
        }
    }

    // Explosive Ammo
    if (weaponOptions.explosiveAmmo && natives.IS_CHAR_SHOOTING(playerPed)) {
        let weapon = natives.GET_CURRENT_CHAR_WEAPON(playerPed);
        if (weapon !== WEAPONS.GRENADE && weapon !== WEAPONS.MOLOTOV && weapon !== WEAPONS.RPG) {
            // Get aimed position and create explosion
            let aimPos = natives.GET_PED_BONE_COORDS(playerPed, 57, 0, 0, 50);
            if (aimPos) {
                natives.ADD_EXPLOSION(aimPos[0], aimPos[1], aimPos[2], 2, 1.0, true, false, 0.5);
            }
        }
    }
}

// ============================================================================
// EVENT HANDLERS
// ============================================================================

addEventHandler("OnProcess", function(event) {
    weaponOptionsLoop();
});

// ============================================================================
// EXPORTS
// ============================================================================

this.weaponOptions = weaponOptions;
this.getWeaponMenuItems = getWeaponMenuItems;
this.giveAllWeaponsAction = giveAllWeaponsAction;
this.removeAllWeaponsAction = removeAllWeaponsAction;
