// ============================================================================
// MOD MENU - Client Side
// Interactive GUI menu for all players
// Press F5 to open/close menu, Arrow keys to navigate, Enter to select
// ============================================================================

// Menu state
let menuOpen = false;
let currentMenu = "main";
let selectedIndex = 0;
let menuStack = [];
let scrollOffset = 0;

// Font for text rendering (will be loaded on resource start)
let menuFont = null;

// Menu colors using toColour for integer format
const colors = {
    background: toColour(20, 20, 20, 200),
    header: toColour(200, 50, 50, 255),
    item: toColour(40, 40, 40, 200),
    selected: toColour(200, 50, 50, 220),
    text: toColour(255, 255, 255, 255),
    footer: toColour(30, 30, 30, 200),
    subText: toColour(180, 180, 180, 255)
};

// Menu dimensions in pixels - positioned on right side
const menu = {
    x: 1050,
    y: 120,
    width: 320,
    headerHeight: 45,
    itemHeight: 38,
    footerHeight: 32,
    maxVisibleItems: 12
};

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
            { label: "Random Skin", action: "skin_random" }
        ]
    },

    vehicles: {
        title: "VEHICLE SPAWNER",
        items: [
            { label: "Sports Cars", action: "submenu", target: "veh_sports" },
            { label: "Muscle Cars", action: "submenu", target: "veh_muscle" },
            { label: "SUVs & Trucks", action: "submenu", target: "veh_suv" },
            { label: "Motorcycles", action: "submenu", target: "veh_bikes" },
            { label: "Emergency", action: "submenu", target: "veh_emergency" },
            { label: "Aircraft", action: "submenu", target: "veh_aircraft" },
            { label: "Boats", action: "submenu", target: "veh_boats" },
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
            { label: "Buffalo", action: "spawn_vehicle", value: "buffalo" }
        ]
    },

    veh_muscle: {
        title: "MUSCLE CARS",
        items: [
            { label: "Sabre GT", action: "spawn_vehicle", value: "sabregt" },
            { label: "Stallion", action: "spawn_vehicle", value: "stalion" },
            { label: "Vigero", action: "spawn_vehicle", value: "vigero" },
            { label: "Dukes", action: "spawn_vehicle", value: "dukes" },
            { label: "Phoenix", action: "spawn_vehicle", value: "phoenix" }
        ]
    },

    veh_suv: {
        title: "SUVs & TRUCKS",
        items: [
            { label: "Patriot", action: "spawn_vehicle", value: "patriot" },
            { label: "Cavalcade", action: "spawn_vehicle", value: "cavalcade" },
            { label: "Huntley", action: "spawn_vehicle", value: "huntley" },
            { label: "Landstalker", action: "spawn_vehicle", value: "landstalker" }
        ]
    },

    veh_bikes: {
        title: "MOTORCYCLES",
        items: [
            { label: "NRG 900", action: "spawn_vehicle", value: "nrg900" },
            { label: "PCJ 600", action: "spawn_vehicle", value: "pcj600" },
            { label: "Sanchez", action: "spawn_vehicle", value: "sanchez" },
            { label: "Faggio", action: "spawn_vehicle", value: "faggio" }
        ]
    },

    veh_emergency: {
        title: "EMERGENCY",
        items: [
            { label: "Police Cruiser", action: "spawn_vehicle", value: "police" },
            { label: "FBI Car", action: "spawn_vehicle", value: "fbi" },
            { label: "Ambulance", action: "spawn_vehicle", value: "ambulance" },
            { label: "Fire Truck", action: "spawn_vehicle", value: "firetruk" }
        ]
    },

    veh_aircraft: {
        title: "AIRCRAFT",
        items: [
            { label: "Annihilator", action: "spawn_vehicle", value: "annihilator" },
            { label: "Maverick", action: "spawn_vehicle", value: "maverick" },
            { label: "Police Maverick", action: "spawn_vehicle", value: "polmav" }
        ]
    },

    veh_boats: {
        title: "BOATS",
        items: [
            { label: "Jetmax", action: "spawn_vehicle", value: "jetmax" },
            { label: "Predator", action: "spawn_vehicle", value: "predator" },
            { label: "Tropic", action: "spawn_vehicle", value: "tropic" }
        ]
    },

    vehicleOptions: {
        title: "VEHICLE OPTIONS",
        items: [
            { label: "Repair Vehicle", action: "veh_repair" },
            { label: "Flip Vehicle", action: "veh_flip" },
            { label: "Vehicle Colors", action: "submenu", target: "veh_colors" },
            { label: "God Mode", action: "toggle", target: "vehGodMode", state: false },
            { label: "Nitro Boost", action: "veh_nitro" }
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
            { label: "Random", action: "veh_color_random" }
        ]
    },

    network: {
        title: "NETWORK OPTIONS",
        items: [
            { label: "Refresh Player List", action: "refresh_players" },
            { label: "--- Players ---", action: "none" }
        ]
    },

    teleport: {
        title: "TELEPORT LOCATIONS",
        items: [
            { label: "Star Junction", action: "teleport", value: { x: -252.0, y: 947.0, z: 15.0 } },
            { label: "Middle Park", action: "teleport", value: { x: -365.0, y: 1163.0, z: 14.0 } },
            { label: "Airport", action: "teleport", value: { x: 2140.0, y: 465.0, z: 6.0 } },
            { label: "Broker Bridge", action: "teleport", value: { x: 932.0, y: -495.0, z: 15.0 } },
            { label: "Alderney City", action: "teleport", value: { x: -1149.0, y: 380.0, z: 21.0 } },
            { label: "Happiness Island", action: "teleport", value: { x: -722.0, y: -17.0, z: 3.0 } }
        ]
    },

    world: {
        title: "WORLD OPTIONS",
        items: [
            { label: "Morning (8:00)", action: "world_time", value: 8 },
            { label: "Noon (12:00)", action: "world_time", value: 12 },
            { label: "Evening (18:00)", action: "world_time", value: 18 },
            { label: "Night (0:00)", action: "world_time", value: 0 },
            { label: "Sunny", action: "world_weather", value: 1 },
            { label: "Cloudy", action: "world_weather", value: 3 },
            { label: "Rainy", action: "world_weather", value: 4 },
            { label: "Thunder", action: "world_weather", value: 7 }
        ]
    },

    weapons: {
        title: "WEAPONS",
        items: [
            { label: "Get All Weapons", action: "weapon_all" },
            { label: "Pistol", action: "weapon", value: 5 },
            { label: "Desert Eagle", action: "weapon", value: 6 },
            { label: "Shotgun", action: "weapon", value: 9 },
            { label: "SMG", action: "weapon", value: 12 },
            { label: "Assault Rifle", action: "weapon", value: 14 },
            { label: "Sniper Rifle", action: "weapon", value: 16 },
            { label: "RPG", action: "weapon", value: 18 }
        ]
    },

    fun: {
        title: "FUN OPTIONS",
        items: [
            { label: "Launch Me Up", action: "fun_launch" },
            { label: "Explode Me", action: "fun_explode" },
            { label: "Spawn Ped", action: "fun_ped" },
            { label: "Ragdoll", action: "fun_ragdoll" }
        ]
    }
};

// Toggle states
let toggleStates = {
    godMode: false,
    neverWanted: false,
    vehGodMode: false
};

// ============================================================================
// FONT LOADING
// ============================================================================

addEventHandler("OnResourceReady", function(event, resource) {
    // Use built-in default font (no external TTF file needed)
    // Signature: lucasFont.createDefaultFont(float size, string family, [string style = "Regular"])
    try {
        menuFont = lucasFont.createDefaultFont(16.0, "Arial", "Regular");
        if (menuFont != null) {
            console.log("[ModMenu] Default font created successfully");
        }
    } catch(e) {
        console.log("[ModMenu] Could not create default font: " + e);
        // Try alternative font
        try {
            menuFont = lucasFont.createDefaultFont(16.0, "Tahoma");
            console.log("[ModMenu] Fallback font created");
        } catch(e2) {
            console.log("[ModMenu] Fallback font also failed: " + e2);
        }
    }

    if (menuFont == null) {
        console.log("[ModMenu] Font creation failed - text won't render");
    }
});

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
            // Show cursor and DISABLE controls (second param = false disables controls)
            gui.showCursor(true, false);
            // Disable phone
            natives.setPlayerControlForTextChat(0, false);
        } else {
            // Hide cursor and ENABLE controls (second param = true enables controls)
            gui.showCursor(false, true);
            // Re-enable phone
            natives.setPlayerControlForTextChat(0, true);
        }
        return;
    }

    if (!menuOpen) return;

    // Block phone popup - consume UP key event when menu is open
    if (key === SDLK_UP) {
        navigateUp();
        event.preventDefault = true;
        return;
    } else if (key === SDLK_DOWN) {
        navigateDown();
        event.preventDefault = true;
        return;
    } else if (key === SDLK_RETURN || key === SDLK_KP_ENTER) {
        selectItem();
        event.preventDefault = true;
        return;
    } else if (key === SDLK_BACKSPACE || key === SDLK_ESCAPE) {
        goBack();
        event.preventDefault = true;
        return;
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
        // IMPORTANT: Enable controls when closing menu
        gui.showCursor(false, true);
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
        { label: "Refresh Player List", action: "refresh_players" },
        { label: "--- Players ---", action: "none" }
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
            showNotification("Teleporting...");
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
            showNotification("Wanted cleared!");
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
            showNotification("Random skin!");
            break;

        case "veh_repair":
            triggerNetworkEvent("ModMenu:VehicleOption", "repair");
            showNotification("Repaired!");
            break;

        case "veh_flip":
            triggerNetworkEvent("ModMenu:VehicleOption", "flip");
            showNotification("Flipped!");
            break;

        case "veh_nitro":
            triggerNetworkEvent("ModMenu:VehicleOption", "nitro");
            showNotification("NITRO!");
            break;

        case "veh_color":
            triggerNetworkEvent("ModMenu:VehicleColor", item.value[0], item.value[1]);
            showNotification("Color changed!");
            break;

        case "veh_color_random":
            let c1 = Math.floor(Math.random() * 132);
            let c2 = Math.floor(Math.random() * 132);
            triggerNetworkEvent("ModMenu:VehicleColor", c1, c2);
            showNotification("Random color!");
            break;

        case "vehicle_delete":
            triggerNetworkEvent("ModMenu:DeleteVehicles");
            showNotification("Deleted!");
            break;

        case "world_time":
            triggerNetworkEvent("ModMenu:WorldTime", item.value);
            showNotification("Time: " + item.value + ":00");
            break;

        case "world_weather":
            triggerNetworkEvent("ModMenu:WorldWeather", item.value);
            showNotification("Weather changed!");
            break;

        case "weapon":
            triggerNetworkEvent("ModMenu:GiveWeapon", item.value);
            showNotification("Weapon given!");
            break;

        case "weapon_all":
            triggerNetworkEvent("ModMenu:SelfOption", "weapons");
            showNotification("All weapons!");
            break;

        case "refresh_players":
            triggerNetworkEvent("ModMenu:GetPlayers");
            showNotification("Refreshing...");
            break;

        case "teleport_to_player":
            if (selectedPlayer) {
                triggerNetworkEvent("ModMenu:TeleportToPlayer", selectedPlayer.id);
                showNotification("Teleporting to " + selectedPlayer.name);
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
    }
}

function openPlayerMenu(playerData) {
    menuData.player_options = {
        title: playerData.name,
        items: [
            { label: "Teleport to Player", action: "teleport_to_player" }
        ]
    };
    menuStack.push({ menu: currentMenu, index: selectedIndex, scroll: scrollOffset });
    currentMenu = "player_options";
    selectedIndex = 0;
    scrollOffset = 0;
}

// ============================================================================
// NETWORK HANDLERS
// ============================================================================

addNetworkHandler("ModMenu:PlayerList", function(players) {
    playerList = players;
    showNotification("Found " + players.length + " players");
});

addNetworkHandler("ModMenu:Notification", function(msg) {
    showNotification(msg);
});

// ============================================================================
// EXECUTE HANDLERS - Client-side natives execution
// ============================================================================

// Execute weather change using GTA IV native
addNetworkHandler("ModMenu:ExecuteWeather", function(weatherId) {
    try {
        natives.forceWeatherNow(weatherId);
        showNotification("Weather changed!");
    } catch(e) {
        console.log("[ModMenu] Weather error: " + e);
    }
});

// Execute time change using GTA IV native
addNetworkHandler("ModMenu:ExecuteTime", function(hour) {
    try {
        natives.forceTimeOfDay(hour, 0);
        showNotification("Time: " + hour + ":00");
    } catch(e) {
        console.log("[ModMenu] Time error: " + e);
    }
});

// Execute self options using natives
addNetworkHandler("ModMenu:ExecuteSelfOption", function(option) {
    if (!localPlayer) {
        showNotification("Player not ready");
        return;
    }

    try {
        switch(option) {
            case "health":
                localPlayer.health = 200;
                showNotification("Health restored!");
                break;
            case "armor":
                localPlayer.armour = 100;
                showNotification("Armor restored!");
                break;
            case "max":
                localPlayer.health = 200;
                localPlayer.armour = 100;
                showNotification("Max health & armor!");
                break;
            case "weapons":
                // Give weapons using natives
                natives.giveWeaponToChar(localPlayer, 5, 500, false);  // Pistol
                natives.giveWeaponToChar(localPlayer, 6, 500, false);  // Deagle
                natives.giveWeaponToChar(localPlayer, 9, 100, false);  // Shotgun
                natives.giveWeaponToChar(localPlayer, 12, 500, false); // SMG
                natives.giveWeaponToChar(localPlayer, 14, 500, false); // AK
                natives.giveWeaponToChar(localPlayer, 16, 50, false);  // Sniper
                natives.giveWeaponToChar(localPlayer, 18, 10, false);  // RPG
                showNotification("All weapons given!");
                break;
            case "wanted":
                natives.alterWantedLevel(0, 0);
                natives.applyWantedLevelChangeNow(0);
                showNotification("Wanted cleared!");
                break;
            case "suicide":
                // Kill the player properly using explode head native
                natives.explodeCharHead(localPlayer);
                showNotification("Goodbye!");
                break;
        }
    } catch(e) {
        console.log("[ModMenu] Self option error: " + e);
        showNotification("Action failed");
    }
});

// Execute teleport
addNetworkHandler("ModMenu:ExecuteTeleport", function(x, y, z) {
    if (!localPlayer) return;

    try {
        let pos = new Vec3(x, y, z);
        localPlayer.position = pos;
        showNotification("Teleported!");
    } catch(e) {
        console.log("[ModMenu] Teleport error: " + e);
    }
});

// Execute teleport to player - get target player position and teleport
addNetworkHandler("ModMenu:ExecuteTeleportToPlayer", function(targetId) {
    if (!localPlayer) return;

    try {
        // Find the target player in the player list
        let clients = getClients();
        for (let i = 0; i < clients.length; i++) {
            if (clients[i].index == targetId && clients[i].player) {
                let targetPos = clients[i].player.position;
                let pos = new Vec3(targetPos.x + 2, targetPos.y, targetPos.z);
                localPlayer.position = pos;
                showNotification("Teleported to player!");
                return;
            }
        }
        showNotification("Player not found");
    } catch(e) {
        console.log("[ModMenu] Teleport to player error: " + e);
        showNotification("Teleport failed");
    }
});

// Vehicle model hashes for GTA IV
const vehicleHashes = {
    "infernus": 0x18F25AC7,
    "turismo": 0x185484E1,
    "comet": 0x067BC037,
    "banshee": 0xC1E908D2,
    "sultan": 0x39DA2754,
    "coquette": 0x067BC037,
    "feltzer": 0x8911B9F5,
    "buffalo": 0xEDD516C6,
    "sabregt": 0x9B909C94,
    "stalion": 0x72A4C31E,
    "vigero": 0xCEC6B9B7,
    "dukes": 0x2B26F456,
    "phoenix": 0x831A21D5,
    "patriot": 0xCFCFEB3B,
    "cavalcade": 0x779F23AA,
    "huntley": 0x1D06D681,
    "landstalker": 0x4BA4E8DC,
    "nrg900": 0x6F039A67,
    "pcj600": 0xC9CEAF06,
    "sanchez": 0x2EF89E46,
    "faggio": 0x9229E4EB,
    "police": 0x79FBB0C5,
    "police2": 0x9F05F101,
    "fbi": 0x432EA949,
    "ambulance": 0x45D56ADA,
    "firetruk": 0x73920F8E,
    "annihilator": 0x31F0B376,
    "maverick": 0x9D0450CA,
    "polmav": 0x1517D4D9,
    "jetmax": 0x33581161,
    "predator": 0xE2E7D4AB,
    "tropic": 0x1149422F,
    "taxi": 0xC703DB5F,
    "stretch": 0x8B13F083,
    "bus": 0xD577C962
};

// Execute vehicle spawn using natives
addNetworkHandler("ModMenu:ExecuteSpawnVehicle", function(vehicleName) {
    try {
        if (!localPlayer) {
            showNotification("Not ready");
            return;
        }

        let modelHash = vehicleHashes[vehicleName];
        if (!modelHash) {
            showNotification("Unknown vehicle");
            return;
        }

        let pos = localPlayer.position;
        let heading = localPlayer.heading || 0;

        // Spawn position at player location
        let spawnPos = new Vec3(pos.x, pos.y, pos.z);

        // Use native to create car with Vec3 position
        let vehicle = natives.createCar(modelHash, spawnPos, true);

        if (vehicle) {
            natives.setCarHeading(vehicle, heading);
            // Warp player into the vehicle
            natives.warpCharIntoCar(localPlayer, vehicle);
            showNotification("Spawned!");
        } else {
            showNotification("Failed");
        }
    } catch(e) {
        console.log("[ModMenu] Vehicle error: " + e);
        showNotification("Error");
    }
});

// Execute vehicle options
addNetworkHandler("ModMenu:ExecuteVehicleOption", function(option) {
    if (!localPlayer || !localPlayer.vehicle) {
        showNotification("Get in a vehicle first!");
        return;
    }

    try {
        let veh = localPlayer.vehicle;
        switch(option) {
            case "repair":
                natives.fixCar(veh);
                showNotification("Vehicle repaired!");
                break;
            case "flip":
                let rot = veh.rotation;
                veh.rotation = new Vec3(0, 0, rot.z);
                showNotification("Vehicle flipped!");
                break;
            case "nitro":
                // Boost vehicle forward using velocity
                let heading = veh.heading || 0;
                let speed = 50.0;
                let vx = Math.sin(heading) * speed * -1;
                let vy = Math.cos(heading) * speed;
                let vel = new Vec3(vx, vy, 5);
                veh.velocity = vel;
                showNotification("NITRO!");
                break;
        }
    } catch(e) {
        console.log("[ModMenu] Vehicle option error: " + e);
    }
});

// Execute vehicle color change
addNetworkHandler("ModMenu:ExecuteVehicleColor", function(color1, color2) {
    if (!localPlayer || !localPlayer.vehicle) {
        showNotification("Get in a vehicle first!");
        return;
    }

    try {
        natives.changeCarColour(localPlayer.vehicle, color1, color2);
        showNotification("Color changed!");
    } catch(e) {
        console.log("[ModMenu] Color change error: " + e);
    }
});

// Execute weapon give
addNetworkHandler("ModMenu:ExecuteGiveWeapon", function(weaponId) {
    if (!localPlayer) return;

    try {
        natives.giveWeaponToChar(localPlayer, weaponId, 500, false);
        showNotification("Weapon given!");
    } catch(e) {
        console.log("[ModMenu] Weapon error: " + e);
    }
});

// Execute fun options
addNetworkHandler("ModMenu:ExecuteFun", function(option) {
    if (!localPlayer) return;

    try {
        let pos = localPlayer.position;
        switch(option) {
            case "launch":
                let launchPos = new Vec3(pos.x, pos.y, pos.z + 50);
                localPlayer.position = launchPos;
                showNotification("LAUNCH!");
                break;
            case "explode":
                natives.addExplosion(pos.x, pos.y, pos.z, 0, 5.0, true, false, 1.0);
                break;
            case "ragdoll":
                natives.switchPedToRagdoll(localPlayer, 1000, 1000, 0, true, true, false);
                break;
        }
    } catch(e) {
        console.log("[ModMenu] Fun option error: " + e);
    }
});

// Execute skin change
addNetworkHandler("ModMenu:ExecuteSkinChange", function(skinId) {
    if (!localPlayer) return;

    try {
        if (skinId === "random") {
            let skins = [-1667301416, -163448165, 1936355839, -1938475496, 970234525];
            skinId = skins[Math.floor(Math.random() * skins.length)];
        }
        // GTA IV uses changePlayerModel with player index 0
        natives.changePlayerModel(0, skinId);
        showNotification("Skin changed!");
    } catch(e) {
        console.log("[ModMenu] Skin change error: " + e);
    }
});

// ============================================================================
// RENDERING
// ============================================================================

addEventHandler("OnDrawnHUD", function(event) {
    if (!menuOpen) return;

    let currentData = menuData[currentMenu];
    let items = getCurrentMenuItems();
    let title = currentData ? currentData.title : currentMenu.toUpperCase();

    let visibleCount = Math.min(items.length, menu.maxVisibleItems);
    let totalHeight = menu.headerHeight + (visibleCount * menu.itemHeight) + menu.footerHeight;

    // Draw background
    drawRect(menu.x - 5, menu.y - 5, menu.width + 10, totalHeight + 10, colors.background);

    // Draw header
    drawRect(menu.x, menu.y, menu.width, menu.headerHeight, colors.header);
    drawText(title, menu.x + 10, menu.y + 12, colors.text, 18);

    // Draw items
    let yPos = menu.y + menu.headerHeight;
    for (let i = scrollOffset; i < scrollOffset + visibleCount && i < items.length; i++) {
        let item = items[i];
        let isSelected = (i === selectedIndex);
        let bgColor = isSelected ? colors.selected : colors.item;

        drawRect(menu.x, yPos, menu.width, menu.itemHeight, bgColor);

        let label = item.label;
        if (item.action === "toggle") {
            label += toggleStates[item.target] ? " [ON]" : " [OFF]";
        }
        if (item.action === "submenu") {
            label += " >>";
        }

        drawText(label, menu.x + 15, yPos + 10, colors.text, 14);
        yPos += menu.itemHeight;
    }

    // Draw footer
    drawRect(menu.x, yPos, menu.width, menu.footerHeight, colors.footer);
    drawText("UP/DOWN | ENTER | BACKSPACE", menu.x + 10, yPos + 8, colors.subText, 12);

    // Scroll indicator
    if (items.length > menu.maxVisibleItems) {
        let scrollText = (scrollOffset + 1) + "-" + Math.min(scrollOffset + visibleCount, items.length) + "/" + items.length;
        drawText(scrollText, menu.x + menu.width - 60, menu.y + 12, colors.subText, 12);
    }
});

// Draw rectangle using graphics API
function drawRect(x, y, w, h, colour) {
    let pos = new Vec2(x, y);
    let size = new Vec2(w, h);
    graphics.drawRectangle(null, pos, size, colour, colour, colour, colour);
}

// Draw text using loaded font or fallback
function drawText(text, x, y, colour, size) {
    if (menuFont != null) {
        let pos = new Vec2(x, y);
        menuFont.render(text, pos, menu.width, 0.0, 0.0, size, colour, false, false, false, true);
    }
    // If no font, text won't render but menu boxes will still show
}

// ============================================================================
// NOTIFICATIONS
// ============================================================================

let notifications = [];

function showNotification(text) {
    notifications.push({
        text: text,
        time: Date.now(),
        duration: 1000
    });
}

addEventHandler("OnDrawnHUD", function(event) {
    let now = Date.now();
    let yPos = 200;

    for (let i = 0; i < notifications.length; i++) {
        let notif = notifications[i];
        let elapsed = now - notif.time;

        if (elapsed < notif.duration) {
            // Quick fade: start fading at 700ms, fully gone by 1000ms
            let alpha = elapsed < 700 ? 200 : Math.floor(200 * (notif.duration - elapsed) / 300);
            let bgColor = toColour(20, 20, 20, alpha);
            let textColor = toColour(255, 255, 100, Math.min(255, alpha + 55));

            drawRect(10, yPos, 280, 30, bgColor);
            drawText(notif.text, 20, yPos + 8, textColor, 14);
            yPos += 35;
        }
    }

    notifications = notifications.filter(function(n) {
        return now - n.time < n.duration;
    });
});

// ============================================================================
// TOGGLE EFFECTS
// ============================================================================

// Track last god mode state to only call native when changed
let lastGodMode = false;
let lastVehGodMode = false;

addEventHandler("OnProcess", function(event) {
    if (!localPlayer) return;

    // Player god mode - use invincibility native
    if (toggleStates.godMode !== lastGodMode) {
        natives.setCharInvincible(localPlayer, toggleStates.godMode);
        lastGodMode = toggleStates.godMode;
    }

    // Keep health topped up in god mode as backup
    if (toggleStates.godMode) {
        if (localPlayer.health < 200) localPlayer.health = 200;
        if (localPlayer.armour < 100) localPlayer.armour = 100;
    }

    // Never wanted - clear wanted level
    if (toggleStates.neverWanted) {
        natives.clearWantedLevel(0);
    }

    // Vehicle god mode
    if (localPlayer.vehicle) {
        if (toggleStates.vehGodMode !== lastVehGodMode) {
            natives.setCarCanBeDamaged(localPlayer.vehicle, !toggleStates.vehGodMode);
            lastVehGodMode = toggleStates.vehGodMode;
        }
        if (toggleStates.vehGodMode) {
            natives.fixCar(localPlayer.vehicle);
        }
    }

    // Disable phone when menu is open
    if (menuOpen) {
        natives.setPlayerControlForTextChat(0, false);
    }
});

// ============================================================================
// INITIALIZATION
// ============================================================================

addEventHandler("OnResourceStart", function(event, resource) {
    console.log("[ModMenu] Client loaded - Press F5 to open menu");
});

console.log("[ModMenu] Script initialized");
