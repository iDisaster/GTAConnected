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
            { label: "Indestructible", action: "toggle", target: "vehGodMode", state: false },
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
    try {
        menuFont = lucasFont.createDefaultFont(16.0, "Tahoma", false, false);
        if (menuFont != null) {
            console.log("[ModMenu] Default font created successfully");
        }
    } catch(e) {
        console.log("[ModMenu] Could not create default font: " + e);
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
        } else {
            // Hide cursor and ENABLE controls (second param = true enables controls)
            gui.showCursor(false, true);
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
        duration: 3000
    });
}

addEventHandler("OnDrawnHUD", function(event) {
    let now = Date.now();
    let yPos = 200;

    for (let i = 0; i < notifications.length; i++) {
        let notif = notifications[i];
        let elapsed = now - notif.time;

        if (elapsed < notif.duration) {
            let alpha = elapsed < notif.duration - 500 ? 200 : Math.floor(200 * (notif.duration - elapsed) / 500);
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

addEventHandler("OnProcess", function(event) {
    if (!localPlayer) return;

    if (toggleStates.godMode) {
        localPlayer.health = 200;
        localPlayer.armour = 100;
    }

    if (toggleStates.neverWanted) {
        localPlayer.wantedLevel = 0;
    }

    if (localPlayer.vehicle && toggleStates.vehGodMode) {
        localPlayer.vehicle.health = 1000;
    }
});

// ============================================================================
// INITIALIZATION
// ============================================================================

addEventHandler("OnResourceStart", function(event, resource) {
    console.log("[ModMenu] Client loaded - Press F5 to open menu");
});

console.log("[ModMenu] Script initialized");
