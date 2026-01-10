// ============================================================================
// MOD MENU - Client Side
// Interactive GUI menu for all players
// Press F5 to open/close menu, Arrow keys to navigate, Enter to select
// ============================================================================

// Menu state
let menuOpen = false;
let currentMenu = "main";
let selectedIndex = 0;
let menuStack = []; // For back navigation

// Menu colors (RGBA)
const colors = {
    background: toColour(20, 20, 20, 200),
    header: toColour(200, 50, 50, 255),
    headerText: toColour(255, 255, 255, 255),
    itemBg: toColour(40, 40, 40, 200),
    itemBgSelected: toColour(200, 50, 50, 220),
    itemText: toColour(255, 255, 255, 255),
    itemTextSelected: toColour(255, 255, 255, 255),
    footer: toColour(30, 30, 30, 200),
    footerText: toColour(180, 180, 180, 255),
    subText: toColour(150, 150, 150, 255)
};

// Menu dimensions
const menu = {
    x: 50,
    y: 100,
    width: 300,
    headerHeight: 40,
    itemHeight: 35,
    footerHeight: 30,
    maxVisibleItems: 12
};

// Scroll offset for long menus
let scrollOffset = 0;

// Player list cache
let playerList = [];

// Vehicle handling values
let handlingMods = {
    grip: 1.0,
    acceleration: 1.0,
    topSpeed: 1.0,
    braking: 1.0,
    driftMode: false
};

// ============================================================================
// MENU DATA STRUCTURE
// ============================================================================

const menuData = {
    main: {
        title: "MOD MENU",
        items: [
            { label: "Self Options", action: "submenu", target: "self" },
            { label: "Vehicle Spawner", action: "submenu", target: "vehicles" },
            { label: "Vehicle Options", action: "submenu", target: "vehicleOptions" },
            { label: "Network Options", action: "submenu", target: "network" },
            { label: "Teleport Locations", action: "submenu", target: "teleport" },
            { label: "World Options", action: "submenu", target: "world" },
            { label: "Weapons", action: "submenu", target: "weapons" },
            { label: "Fun Options", action: "submenu", target: "fun" }
        ]
    },

    self: {
        title: "SELF OPTIONS",
        items: [
            { label: "Restore Health", action: "self_health" },
            { label: "Restore Armor", action: "self_armor" },
            { label: "Max Health & Armor", action: "self_max" },
            { label: "Give All Weapons", action: "self_weapons" },
            { label: "Clear Wanted Level", action: "self_wanted" },
            { label: "God Mode", action: "toggle", target: "godMode", state: false },
            { label: "Never Wanted", action: "toggle", target: "neverWanted", state: false },
            { label: "Infinite Ammo", action: "toggle", target: "infiniteAmmo", state: false },
            { label: "Super Jump", action: "toggle", target: "superJump", state: false },
            { label: "Fast Run", action: "toggle", target: "fastRun", state: false },
            { label: "Respawn", action: "self_respawn" },
            { label: "Suicide", action: "self_suicide" },
            { label: "Change Skin", action: "submenu", target: "skins" }
        ]
    },

    skins: {
        title: "PLAYER SKINS",
        items: [
            { label: "Niko Bellic", action: "skin", value: -1667301416 },
            { label: "Roman Bellic", action: "skin", value: -163448165 },
            { label: "Little Jacob", action: "skin", value: 1936355839 },
            { label: "Brucie Kibbutz", action: "skin", value: -1938475496 },
            { label: "Playboy X", action: "skin", value: 970234525 },
            { label: "Johnny Klebitz", action: "skin", value: -1784875845 },
            { label: "Luis Lopez", action: "skin", value: -1403507487 },
            { label: "Police Officer", action: "skin", value: -1320879687 },
            { label: "NOOSE", action: "skin", value: -1306011498 },
            { label: "Paramedic", action: "skin", value: 2136829318 },
            { label: "Firefighter", action: "skin", value: 1616659040 },
            { label: "Business Man", action: "skin", value: -268651930 },
            { label: "Hobo", action: "skin", value: 1943617350 },
            { label: "Random Skin", action: "skin_random" }
        ]
    },

    vehicles: {
        title: "VEHICLE SPAWNER",
        items: [
            { label: "Sports Cars", action: "submenu", target: "veh_sports" },
            { label: "Super Cars", action: "submenu", target: "veh_super" },
            { label: "Muscle Cars", action: "submenu", target: "veh_muscle" },
            { label: "SUVs & Trucks", action: "submenu", target: "veh_suv" },
            { label: "Sedans & Compacts", action: "submenu", target: "veh_sedan" },
            { label: "Motorcycles", action: "submenu", target: "veh_bikes" },
            { label: "Emergency Vehicles", action: "submenu", target: "veh_emergency" },
            { label: "Aircraft", action: "submenu", target: "veh_aircraft" },
            { label: "Boats", action: "submenu", target: "veh_boats" },
            { label: "Special Vehicles", action: "submenu", target: "veh_special" },
            { label: "Delete My Vehicles", action: "vehicle_delete" }
        ]
    },

    veh_sports: {
        title: "SPORTS CARS",
        items: [
            { label: "Infernus", action: "spawn_vehicle", value: "infernus" },
            { label: "Turismo", action: "spawn_vehicle", value: "turismo" },
            { label: "Comet", action: "spawn_vehicle", value: "comet" },
            { label: "Banshee", action: "spawn_vehicle", value: "banshee" },
            { label: "Sultan", action: "spawn_vehicle", value: "sultan" },
            { label: "Coquette", action: "spawn_vehicle", value: "coquette" },
            { label: "Feltzer", action: "spawn_vehicle", value: "feltzer" },
            { label: "F620", action: "spawn_vehicle", value: "f620" },
            { label: "Buffalo", action: "spawn_vehicle", value: "buffalo" }
        ]
    },

    veh_super: {
        title: "SUPER CARS",
        items: [
            { label: "Entity XF", action: "spawn_vehicle", value: "entityxf" },
            { label: "Adder", action: "spawn_vehicle", value: "adder" },
            { label: "Vacca", action: "spawn_vehicle", value: "vacca" },
            { label: "Bullet", action: "spawn_vehicle", value: "bullet" },
            { label: "Cheetah", action: "spawn_vehicle", value: "cheetah" }
        ]
    },

    veh_muscle: {
        title: "MUSCLE CARS",
        items: [
            { label: "Sabre GT", action: "spawn_vehicle", value: "sabregt" },
            { label: "Stallion", action: "spawn_vehicle", value: "stalion" },
            { label: "Vigero", action: "spawn_vehicle", value: "vigero" },
            { label: "Dukes", action: "spawn_vehicle", value: "dukes" },
            { label: "Ruiner", action: "spawn_vehicle", value: "ruiner" },
            { label: "Phoenix", action: "spawn_vehicle", value: "phoenix" },
            { label: "Gauntlet", action: "spawn_vehicle", value: "gauntlet" },
            { label: "Dominator", action: "spawn_vehicle", value: "dominator" }
        ]
    },

    veh_suv: {
        title: "SUVs & TRUCKS",
        items: [
            { label: "Patriot", action: "spawn_vehicle", value: "patriot" },
            { label: "Cavalcade", action: "spawn_vehicle", value: "cavalcade" },
            { label: "Granger", action: "spawn_vehicle", value: "granger" },
            { label: "Huntley", action: "spawn_vehicle", value: "huntley" },
            { label: "Landstalker", action: "spawn_vehicle", value: "landstalker" },
            { label: "Habanero", action: "spawn_vehicle", value: "habanero" },
            { label: "Serrano", action: "spawn_vehicle", value: "serrano" },
            { label: "Rebla", action: "spawn_vehicle", value: "rebla" }
        ]
    },

    veh_sedan: {
        title: "SEDANS & COMPACTS",
        items: [
            { label: "Oracle", action: "spawn_vehicle", value: "oracle" },
            { label: "Schafter", action: "spawn_vehicle", value: "schafter" },
            { label: "Admiral", action: "spawn_vehicle", value: "admiral" },
            { label: "Vincent", action: "spawn_vehicle", value: "vincent" },
            { label: "Presidente", action: "spawn_vehicle", value: "presidente" },
            { label: "Cognoscenti", action: "spawn_vehicle", value: "cognoscenti" },
            { label: "Blista", action: "spawn_vehicle", value: "blista" },
            { label: "Premier", action: "spawn_vehicle", value: "premier" }
        ]
    },

    veh_bikes: {
        title: "MOTORCYCLES",
        items: [
            { label: "NRG 900", action: "spawn_vehicle", value: "nrg900" },
            { label: "PCJ 600", action: "spawn_vehicle", value: "pcj600" },
            { label: "Sanchez", action: "spawn_vehicle", value: "sanchez" },
            { label: "Faggio", action: "spawn_vehicle", value: "faggio" },
            { label: "Bati", action: "spawn_vehicle", value: "bati" },
            { label: "Akuma", action: "spawn_vehicle", value: "akuma" },
            { label: "Double T", action: "spawn_vehicle", value: "double" },
            { label: "Hakuchou", action: "spawn_vehicle", value: "hakuchou" },
            { label: "Hexer", action: "spawn_vehicle", value: "hexer" },
            { label: "Daemon", action: "spawn_vehicle", value: "daemon" }
        ]
    },

    veh_emergency: {
        title: "EMERGENCY VEHICLES",
        items: [
            { label: "Police Cruiser", action: "spawn_vehicle", value: "police" },
            { label: "Police Buffalo", action: "spawn_vehicle", value: "police2" },
            { label: "FBI Car", action: "spawn_vehicle", value: "fbi" },
            { label: "NOOSE Cruiser", action: "spawn_vehicle", value: "noose" },
            { label: "Ambulance", action: "spawn_vehicle", value: "ambulance" },
            { label: "Fire Truck", action: "spawn_vehicle", value: "firetruk" },
            { label: "Enforcer (SWAT)", action: "spawn_vehicle", value: "enforcer" }
        ]
    },

    veh_aircraft: {
        title: "AIRCRAFT",
        items: [
            { label: "Annihilator", action: "spawn_vehicle", value: "annihilator" },
            { label: "Maverick", action: "spawn_vehicle", value: "maverick" },
            { label: "Police Maverick", action: "spawn_vehicle", value: "polmav" },
            { label: "Buzzard", action: "spawn_vehicle", value: "buzzard" },
            { label: "Shamal (Jet)", action: "spawn_vehicle", value: "shamal" }
        ]
    },

    veh_boats: {
        title: "BOATS",
        items: [
            { label: "Jetmax", action: "spawn_vehicle", value: "jetmax" },
            { label: "Marquis", action: "spawn_vehicle", value: "marquis" },
            { label: "Predator", action: "spawn_vehicle", value: "predator" },
            { label: "Tropic", action: "spawn_vehicle", value: "tropic" },
            { label: "Dinghy", action: "spawn_vehicle", value: "dinghy" },
            { label: "Squalo", action: "spawn_vehicle", value: "squalo" },
            { label: "Reefer", action: "spawn_vehicle", value: "reefer" }
        ]
    },

    veh_special: {
        title: "SPECIAL VEHICLES",
        items: [
            { label: "Taxi", action: "spawn_vehicle", value: "taxi" },
            { label: "Stretch Limo", action: "spawn_vehicle", value: "stretch" },
            { label: "Bus", action: "spawn_vehicle", value: "bus" },
            { label: "Trashmaster", action: "spawn_vehicle", value: "trashmaster" },
            { label: "Forklift", action: "spawn_vehicle", value: "forklift" },
            { label: "Caddy", action: "spawn_vehicle", value: "caddy" },
            { label: "Bulldozer", action: "spawn_vehicle", value: "bulldozer" },
            { label: "Phantom", action: "spawn_vehicle", value: "phantom" }
        ]
    },

    vehicleOptions: {
        title: "VEHICLE OPTIONS",
        items: [
            { label: "Repair Vehicle", action: "veh_repair" },
            { label: "Flip Vehicle", action: "veh_flip" },
            { label: "Clean Vehicle", action: "veh_clean" },
            { label: "Max Upgrade", action: "veh_upgrade" },
            { label: "Vehicle Colors", action: "submenu", target: "veh_colors" },
            { label: "--- Handling ---", action: "none" },
            { label: "Drift Mode", action: "toggle", target: "driftMode", state: false },
            { label: "Grip +", action: "handling", target: "grip", delta: 0.2 },
            { label: "Grip -", action: "handling", target: "grip", delta: -0.2 },
            { label: "Acceleration +", action: "handling", target: "acceleration", delta: 0.5 },
            { label: "Acceleration -", action: "handling", target: "acceleration", delta: -0.5 },
            { label: "Top Speed +", action: "handling", target: "topSpeed", delta: 0.3 },
            { label: "Top Speed -", action: "handling", target: "topSpeed", delta: -0.3 },
            { label: "Reset Handling", action: "handling_reset" },
            { label: "--- Special ---", action: "none" },
            { label: "Indestructible", action: "toggle", target: "vehGodMode", state: false },
            { label: "Nitro Boost", action: "veh_nitro" },
            { label: "Super Brakes", action: "toggle", target: "superBrakes", state: false }
        ]
    },

    veh_colors: {
        title: "VEHICLE COLORS",
        items: [
            { label: "Black", action: "veh_color", value: [0, 0] },
            { label: "White", action: "veh_color", value: [1, 1] },
            { label: "Red", action: "veh_color", value: [27, 27] },
            { label: "Blue", action: "veh_color", value: [51, 51] },
            { label: "Yellow", action: "veh_color", value: [42, 42] },
            { label: "Green", action: "veh_color", value: [53, 53] },
            { label: "Orange", action: "veh_color", value: [38, 38] },
            { label: "Purple", action: "veh_color", value: [61, 61] },
            { label: "Pink", action: "veh_color", value: [68, 68] },
            { label: "Gold", action: "veh_color", value: [37, 37] },
            { label: "Chrome", action: "veh_color", value: [120, 120] },
            { label: "Random", action: "veh_color_random" }
        ]
    },

    network: {
        title: "NETWORK OPTIONS",
        items: [
            { label: ">> Refresh Player List <<", action: "refresh_players" },
            { label: "--- Players Online ---", action: "none" }
        ]
    },

    teleport: {
        title: "TELEPORT LOCATIONS",
        items: [
            { label: "-- Algonquin --", action: "none" },
            { label: "Star Junction", action: "teleport", value: { x: -252.0, y: 947.0, z: 15.0 } },
            { label: "Middle Park", action: "teleport", value: { x: -365.0, y: 1163.0, z: 14.0 } },
            { label: "Rotterdam Tower", action: "teleport", value: { x: 237.0, y: 1002.0, z: 18.0 } },
            { label: "Chinatown", action: "teleport", value: { x: -141.0, y: 289.0, z: 14.0 } },
            { label: "Happiness Island", action: "teleport", value: { x: -722.0, y: -17.0, z: 3.0 } },
            { label: "-- Broker --", action: "none" },
            { label: "Broker Bridge", action: "teleport", value: { x: 932.0, y: -495.0, z: 15.0 } },
            { label: "Hove Beach", action: "teleport", value: { x: 1017.0, y: -505.0, z: 19.0 } },
            { label: "Airport", action: "teleport", value: { x: 2140.0, y: 465.0, z: 6.0 } },
            { label: "-- Bohan --", action: "none" },
            { label: "South Bohan", action: "teleport", value: { x: 1243.0, y: -196.0, z: 26.0 } },
            { label: "-- Alderney --", action: "none" },
            { label: "Alderney City", action: "teleport", value: { x: -1149.0, y: 380.0, z: 21.0 } },
            { label: "Westdyke", action: "teleport", value: { x: -1745.0, y: 1157.0, z: 25.0 } },
            { label: "-- Special --", action: "none" },
            { label: "Helipad (High)", action: "teleport", value: { x: -290.0, y: -400.0, z: 81.0 } },
            { label: "Tower Top", action: "teleport", value: { x: 237.0, y: 1002.0, z: 200.0 } }
        ]
    },

    world: {
        title: "WORLD OPTIONS",
        items: [
            { label: "-- Time --", action: "none" },
            { label: "Morning (8:00)", action: "world_time", value: 8 },
            { label: "Noon (12:00)", action: "world_time", value: 12 },
            { label: "Evening (18:00)", action: "world_time", value: 18 },
            { label: "Night (0:00)", action: "world_time", value: 0 },
            { label: "-- Weather --", action: "none" },
            { label: "Extra Sunny", action: "world_weather", value: 0 },
            { label: "Sunny", action: "world_weather", value: 1 },
            { label: "Cloudy", action: "world_weather", value: 3 },
            { label: "Rainy", action: "world_weather", value: 4 },
            { label: "Thunder", action: "world_weather", value: 7 },
            { label: "Foggy", action: "world_weather", value: 6 }
        ]
    },

    weapons: {
        title: "WEAPONS",
        items: [
            { label: "Get All Weapons", action: "weapon_all" },
            { label: "-- Melee --", action: "none" },
            { label: "Baseball Bat", action: "weapon", value: 1 },
            { label: "Knife", action: "weapon", value: 2 },
            { label: "-- Pistols --", action: "none" },
            { label: "Pistol", action: "weapon", value: 5 },
            { label: "Desert Eagle", action: "weapon", value: 6 },
            { label: "-- Shotguns --", action: "none" },
            { label: "Shotgun", action: "weapon", value: 9 },
            { label: "Combat Shotgun", action: "weapon", value: 10 },
            { label: "-- SMGs --", action: "none" },
            { label: "Micro SMG", action: "weapon", value: 11 },
            { label: "SMG", action: "weapon", value: 12 },
            { label: "-- Rifles --", action: "none" },
            { label: "Assault Rifle", action: "weapon", value: 14 },
            { label: "Carbine Rifle", action: "weapon", value: 15 },
            { label: "Sniper Rifle", action: "weapon", value: 16 },
            { label: "-- Explosives --", action: "none" },
            { label: "RPG", action: "weapon", value: 18 },
            { label: "Grenades", action: "weapon", value: 19 },
            { label: "Molotov", action: "weapon", value: 20 }
        ]
    },

    fun: {
        title: "FUN OPTIONS",
        items: [
            { label: "Launch Me Up", action: "fun_launch" },
            { label: "Explode Me", action: "fun_explode" },
            { label: "Spawn Random Ped", action: "fun_ped" },
            { label: "Ragdoll", action: "fun_ragdoll" },
            { label: "Clear Area Peds", action: "fun_clearpeds" },
            { label: "Clear Area Vehicles", action: "fun_clearvehicles" },
            { label: "Chaos Mode", action: "toggle", target: "chaosMode", state: false },
            { label: "Drunk Mode", action: "toggle", target: "drunkMode", state: false }
        ]
    }
};

// Toggle states
let toggleStates = {
    godMode: false,
    neverWanted: false,
    infiniteAmmo: false,
    superJump: false,
    fastRun: false,
    driftMode: false,
    vehGodMode: false,
    superBrakes: false,
    chaosMode: false,
    drunkMode: false
};

// ============================================================================
// INPUT HANDLING
// ============================================================================

addEventHandler("OnKeyUp", function(event, key, scanCode, mods) {
    // F5 to toggle menu
    if (key === SDLK_F5) {
        menuOpen = !menuOpen;
        if (menuOpen) {
            currentMenu = "main";
            selectedIndex = 0;
            scrollOffset = 0;
            menuStack = [];
            // Show cursor - use gui if available
            if (typeof gui !== "undefined" && gui.showCursor) {
                gui.showCursor(true, true);
            }
        } else {
            if (typeof gui !== "undefined" && gui.showCursor) {
                gui.showCursor(false, false);
            }
        }
        return;
    }

    if (!menuOpen) return;

    // Navigation
    if (key === SDLK_UP) {
        navigateUp();
    } else if (key === SDLK_DOWN) {
        navigateDown();
    } else if (key === SDLK_RETURN || key === SDLK_KP_ENTER) {
        selectItem();
    } else if (key === SDLK_BACKSPACE || key === SDLK_ESCAPE) {
        goBack();
    } else if (key === SDLK_LEFT) {
        adjustValue(-1);
    } else if (key === SDLK_RIGHT) {
        adjustValue(1);
    }
});

function navigateUp() {
    let items = getCurrentMenuItems();
    do {
        selectedIndex--;
        if (selectedIndex < 0) {
            selectedIndex = items.length - 1;
        }
    } while (items[selectedIndex] && items[selectedIndex].action === "none");

    updateScroll(items);
}

function navigateDown() {
    let items = getCurrentMenuItems();
    do {
        selectedIndex++;
        if (selectedIndex >= items.length) {
            selectedIndex = 0;
        }
    } while (items[selectedIndex] && items[selectedIndex].action === "none");

    updateScroll(items);
}

function updateScroll(items) {
    if (selectedIndex < scrollOffset) {
        scrollOffset = selectedIndex;
    } else if (selectedIndex >= scrollOffset + menu.maxVisibleItems) {
        scrollOffset = selectedIndex - menu.maxVisibleItems + 1;
    }
}

function goBack() {
    if (menuStack.length > 0) {
        let prev = menuStack.pop();
        currentMenu = prev.menu;
        selectedIndex = prev.index;
        scrollOffset = prev.scroll;
    } else {
        menuOpen = false;
        if (typeof gui !== "undefined" && gui.showCursor) {
            gui.showCursor(false, false);
        }
    }
}

function getCurrentMenuItems() {
    if (currentMenu === "network") {
        return getNetworkMenuItems();
    }
    return menuData[currentMenu] ? menuData[currentMenu].items : [];
}

function getNetworkMenuItems() {
    let items = [
        { label: ">> Refresh Player List <<", action: "refresh_players" },
        { label: "--- Players Online ---", action: "none" }
    ];

    for (let i = 0; i < playerList.length; i++) {
        items.push({
            label: playerList[i].name,
            action: "submenu",
            target: "player_options",
            playerData: playerList[i]
        });
    }

    return items;
}

// ============================================================================
// ACTION HANDLING
// ============================================================================

// Selected player for network options
let selectedPlayer = null;

function selectItem() {
    let items = getCurrentMenuItems();
    let item = items[selectedIndex];
    if (!item || item.action === "none") return;

    switch (item.action) {
        case "submenu":
            if (item.target === "player_options" && item.playerData) {
                selectedPlayer = item.playerData;
                openPlayerMenu(item.playerData);
            } else {
                menuStack.push({ menu: currentMenu, index: selectedIndex, scroll: scrollOffset });
                currentMenu = item.target;
                selectedIndex = 0;
                scrollOffset = 0;
            }
            break;

        case "toggle":
            toggleStates[item.target] = !toggleStates[item.target];
            item.state = toggleStates[item.target];
            triggerNetworkEvent("ModMenu:Toggle", item.target, toggleStates[item.target]);
            showNotification(item.label + ": " + (toggleStates[item.target] ? "ON" : "OFF"));
            break;

        case "spawn_vehicle":
            triggerNetworkEvent("ModMenu:SpawnVehicle", item.value);
            showNotification("Spawning: " + item.label);
            break;

        case "teleport":
            triggerNetworkEvent("ModMenu:Teleport", item.value.x, item.value.y, item.value.z);
            showNotification("Teleporting to: " + item.label);
            break;

        case "self_health":
            triggerNetworkEvent("ModMenu:SelfOption", "health");
            showNotification("Health restored!");
            break;

        case "self_armor":
            triggerNetworkEvent("ModMenu:SelfOption", "armor");
            showNotification("Armor restored!");
            break;

        case "self_max":
            triggerNetworkEvent("ModMenu:SelfOption", "max");
            showNotification("Max health & armor!");
            break;

        case "self_weapons":
            triggerNetworkEvent("ModMenu:SelfOption", "weapons");
            showNotification("All weapons given!");
            break;

        case "self_wanted":
            triggerNetworkEvent("ModMenu:SelfOption", "wanted");
            showNotification("Wanted level cleared!");
            break;

        case "self_respawn":
            triggerNetworkEvent("ModMenu:SelfOption", "respawn");
            showNotification("Respawning...");
            break;

        case "self_suicide":
            triggerNetworkEvent("ModMenu:SelfOption", "suicide");
            break;

        case "skin":
            triggerNetworkEvent("ModMenu:ChangeSkin", item.value);
            showNotification("Skin changed!");
            break;

        case "skin_random":
            triggerNetworkEvent("ModMenu:ChangeSkin", "random");
            showNotification("Random skin applied!");
            break;

        case "veh_repair":
            triggerNetworkEvent("ModMenu:VehicleOption", "repair");
            showNotification("Vehicle repaired!");
            break;

        case "veh_flip":
            triggerNetworkEvent("ModMenu:VehicleOption", "flip");
            showNotification("Vehicle flipped!");
            break;

        case "veh_clean":
            triggerNetworkEvent("ModMenu:VehicleOption", "clean");
            showNotification("Vehicle cleaned!");
            break;

        case "veh_upgrade":
            triggerNetworkEvent("ModMenu:VehicleOption", "upgrade");
            showNotification("Vehicle upgraded!");
            break;

        case "veh_nitro":
            triggerNetworkEvent("ModMenu:VehicleOption", "nitro");
            showNotification("NITRO BOOST!");
            break;

        case "veh_color":
            triggerNetworkEvent("ModMenu:VehicleColor", item.value[0], item.value[1]);
            showNotification("Color changed!");
            break;

        case "veh_color_random":
            let c1 = Math.floor(Math.random() * 132);
            let c2 = Math.floor(Math.random() * 132);
            triggerNetworkEvent("ModMenu:VehicleColor", c1, c2);
            showNotification("Random color applied!");
            break;

        case "vehicle_delete":
            triggerNetworkEvent("ModMenu:DeleteVehicles");
            showNotification("Vehicles deleted!");
            break;

        case "handling":
            handlingMods[item.target] = Math.max(0.1, Math.min(5.0, handlingMods[item.target] + item.delta));
            triggerNetworkEvent("ModMenu:Handling", item.target, handlingMods[item.target]);
            showNotification(item.target + ": " + handlingMods[item.target].toFixed(1));
            break;

        case "handling_reset":
            handlingMods = { grip: 1.0, acceleration: 1.0, topSpeed: 1.0, braking: 1.0, driftMode: false };
            triggerNetworkEvent("ModMenu:HandlingReset");
            showNotification("Handling reset!");
            break;

        case "world_time":
            triggerNetworkEvent("ModMenu:WorldTime", item.value);
            showNotification("Time set to: " + item.value + ":00");
            break;

        case "world_weather":
            triggerNetworkEvent("ModMenu:WorldWeather", item.value);
            showNotification("Weather changed!");
            break;

        case "weapon":
            triggerNetworkEvent("ModMenu:GiveWeapon", item.value);
            showNotification("Weapon given: " + item.label);
            break;

        case "weapon_all":
            triggerNetworkEvent("ModMenu:SelfOption", "weapons");
            showNotification("All weapons given!");
            break;

        case "refresh_players":
            triggerNetworkEvent("ModMenu:GetPlayers");
            showNotification("Refreshing player list...");
            break;

        case "teleport_to_player":
            if (selectedPlayer) {
                triggerNetworkEvent("ModMenu:TeleportToPlayer", selectedPlayer.id);
                showNotification("Teleporting to: " + selectedPlayer.name);
            }
            break;

        case "fun_launch":
            triggerNetworkEvent("ModMenu:Fun", "launch");
            showNotification("LAUNCH!");
            break;

        case "fun_explode":
            triggerNetworkEvent("ModMenu:Fun", "explode");
            break;

        case "fun_ped":
            triggerNetworkEvent("ModMenu:Fun", "ped");
            showNotification("Ped spawned!");
            break;

        case "fun_ragdoll":
            triggerNetworkEvent("ModMenu:Fun", "ragdoll");
            break;

        case "fun_clearpeds":
            triggerNetworkEvent("ModMenu:Fun", "clearpeds");
            showNotification("Area cleared!");
            break;

        case "fun_clearvehicles":
            triggerNetworkEvent("ModMenu:Fun", "clearvehicles");
            showNotification("Vehicles cleared!");
            break;
    }
}

function adjustValue(direction) {
    let items = getCurrentMenuItems();
    let item = items[selectedIndex];
    if (!item) return;

    if (item.action === "handling") {
        let delta = item.delta * direction;
        handlingMods[item.target] = Math.max(0.1, Math.min(5.0, handlingMods[item.target] + delta));
        triggerNetworkEvent("ModMenu:Handling", item.target, handlingMods[item.target]);
        showNotification(item.target + ": " + handlingMods[item.target].toFixed(1));
    }
}

function openPlayerMenu(playerData) {
    menuData.player_options = {
        title: playerData.name,
        items: [
            { label: "Teleport to Player", action: "teleport_to_player" },
            { label: "Spectate Player", action: "spectate_player" },
            { label: "Copy Position", action: "copy_pos" }
        ]
    };

    menuStack.push({ menu: currentMenu, index: selectedIndex, scroll: scrollOffset });
    currentMenu = "player_options";
    selectedIndex = 0;
    scrollOffset = 0;
}

// ============================================================================
// NETWORK EVENT HANDLERS
// ============================================================================

addNetworkHandler("ModMenu:PlayerList", function(players) {
    playerList = players;
    showNotification("Found " + players.length + " players");
});

addNetworkHandler("ModMenu:Notification", function(message) {
    showNotification(message);
});

// ============================================================================
// RENDERING - Using correct GTAC drawing API
// ============================================================================

addEventHandler("OnDrawnHUD", function(event) {
    if (!menuOpen) return;

    let currentData = menuData[currentMenu];
    let items = getCurrentMenuItems();
    let title = currentData ? currentData.title : currentMenu.toUpperCase();

    // Calculate visible items
    let visibleCount = Math.min(items.length, menu.maxVisibleItems);
    let totalHeight = menu.headerHeight + (visibleCount * menu.itemHeight) + menu.footerHeight;

    // Draw background
    drawRect(menu.x - 5, menu.y - 5, menu.width + 10, totalHeight + 10, colors.background);

    // Draw header
    drawRect(menu.x, menu.y, menu.width, menu.headerHeight, colors.header);
    drawText(title, menu.x + menu.width / 2, menu.y + 10, colors.headerText, true, 1.0);

    // Draw items
    let yPos = menu.y + menu.headerHeight;
    for (let i = scrollOffset; i < scrollOffset + visibleCount && i < items.length; i++) {
        let item = items[i];
        let isSelected = (i === selectedIndex);
        let bgColor = isSelected ? colors.itemBgSelected : colors.itemBg;
        let textColor = isSelected ? colors.itemTextSelected : colors.itemText;

        // Draw item background
        drawRect(menu.x, yPos, menu.width, menu.itemHeight, bgColor);

        // Build label with state indicators
        let label = item.label;

        if (item.action === "toggle") {
            let state = toggleStates[item.target];
            label += state ? " [ON]" : " [OFF]";
        }

        if (item.action === "handling" && handlingMods[item.target] !== undefined) {
            label += " [" + handlingMods[item.target].toFixed(1) + "]";
        }

        if (item.action === "submenu") {
            label += " >>";
        }

        drawText(label, menu.x + 15, yPos + 8, textColor, false, 0.9);

        yPos += menu.itemHeight;
    }

    // Draw footer
    drawRect(menu.x, yPos, menu.width, menu.footerHeight, colors.footer);
    drawText("UP/DOWN: Navigate | ENTER: Select | BACKSPACE: Back", menu.x + menu.width / 2, yPos + 8, colors.footerText, true, 0.6);

    // Draw scroll indicator
    if (items.length > menu.maxVisibleItems) {
        let scrollText = (scrollOffset + 1) + "-" + Math.min(scrollOffset + visibleCount, items.length) + " / " + items.length;
        drawText(scrollText, menu.x + menu.width - 50, menu.y + 12, colors.subText, false, 0.7);
    }
});

// Helper drawing functions using native drawing
function drawRect(x, y, width, height, colour) {
    // Use natives for drawing rectangles
    if (typeof natives !== "undefined" && natives.drawRect) {
        // GTA IV native drawing - normalized coordinates (0-1)
        let screenW = game.width || 1920;
        let screenH = game.height || 1080;

        let nx = (x + width/2) / screenW;
        let ny = (y + height/2) / screenH;
        let nw = width / screenW;
        let nh = height / screenH;

        // Extract RGBA from colour
        let r = (colour >> 24) & 0xFF;
        let g = (colour >> 16) & 0xFF;
        let b = (colour >> 8) & 0xFF;
        let a = colour & 0xFF;

        natives.drawRect(nx, ny, nw, nh, r, g, b, a);
    } else {
        // Fallback to graphics drawing
        try {
            graphics.drawRectangle(null, [x, y], [width, height], colour, colour, 0, 0, 0);
        } catch(e) {
            // Silent fail
        }
    }
}

function drawText(text, x, y, colour, centered, scale) {
    // Use natives for drawing text
    if (typeof natives !== "undefined" && natives.setTextScale) {
        let screenW = game.width || 1920;
        let screenH = game.height || 1080;

        let nx = x / screenW;
        let ny = y / screenH;

        let r = (colour >> 24) & 0xFF;
        let g = (colour >> 16) & 0xFF;
        let b = (colour >> 8) & 0xFF;
        let a = colour & 0xFF;

        natives.setTextFont(0);
        natives.setTextScale(scale || 0.35, scale || 0.35);
        natives.setTextColour(r, g, b, a);
        if (centered) {
            natives.setTextCentre(true);
        }
        natives.setTextDropshadow(2, 0, 0, 0, 255);
        natives.displayTextWithLiteralString(nx, ny, "STRING", text);
    } else {
        // Fallback
        try {
            graphics.drawText(text, [x, y], colour, scale || 1.0, "arial", centered || false);
        } catch(e) {
            // Silent fail
        }
    }
}

// ============================================================================
// NOTIFICATIONS
// ============================================================================

let notifications = [];

function showNotification(text) {
    notifications.push({
        text: text,
        time: Date.now(),
        duration: 3000
    });
}

// Draw notifications
addEventHandler("OnDrawnHUD", function(event) {
    let now = Date.now();
    let yPos = 200;

    for (let i = 0; i < notifications.length; i++) {
        let notif = notifications[i];
        let elapsed = now - notif.time;

        if (elapsed < notif.duration) {
            let alpha = elapsed < notif.duration - 500 ? 200 : Math.floor(200 * (notif.duration - elapsed) / 500);
            let bgColor = toColour(20, 20, 20, alpha);
            let textColor = toColour(255, 255, 100, alpha + 55);

            drawRect(10, yPos, 300, 30, bgColor);
            drawText(notif.text, 20, yPos + 6, textColor, false, 0.8);

            yPos += 35;
        }
    }

    // Clean expired notifications
    notifications = notifications.filter(function(n) {
        return now - n.time < n.duration;
    });
});

// ============================================================================
// TOGGLE EFFECTS (Client-side processing)
// ============================================================================

addEventHandler("OnProcess", function(event) {
    if (!localPlayer) return;

    // God Mode
    if (toggleStates.godMode) {
        localPlayer.health = 200;
        localPlayer.armour = 100;
    }

    // Never Wanted
    if (toggleStates.neverWanted) {
        localPlayer.wantedLevel = 0;
    }

    // Vehicle God Mode
    if (localPlayer.vehicle && toggleStates.vehGodMode) {
        localPlayer.vehicle.health = 1000;
    }
});

// ============================================================================
// INITIALIZATION
// ============================================================================

addEventHandler("OnResourceStart", function(event, resource) {
    console.log("[ModMenu] Client script loaded!");
    console.log("[ModMenu] Press F5 to open the menu");
});

console.log("[ModMenu] Client loaded - Press F5 to open menu!");
