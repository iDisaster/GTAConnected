/**
 * MD TRIDENT Menu - GTAConnected Port
 * Original by DEVILSDESIGN, IIV_NATHAN_VII, SHOCKixiXixiWAVE
 * Ported for GTA IV GTAConnected Server
 */

// ============================================================================
// MENU CONFIGURATION & CONSTANTS
// ============================================================================

const MENU_CONFIG = {
    // Menu Position
    posX: 0.695,
    posY: 0.155,

    // Menu Dimensions
    width: 0.25,
    itemHeight: 0.028,
    headerHeight: 0.067,

    // Max items visible
    maxVisibleItems: 12,
    startScrolling: 8,

    // Colors (RGBA)
    colors: {
        background: [70, 130, 180, 180],      // Steel Blue
        header: [164, 134, 35, 255],          // Gold
        subHeader: [58, 95, 205, 255],        // Royal Blue
        item: [180, 180, 180, 255],           // Gray
        itemHighlight: [255, 143, 0, 255],    // Orange
        scrollbar: [100, 100, 200, 150],      // Light Blue
        line: [255, 255, 255, 255],           // White
        bool: [255, 128, 0, 255],             // Orange
        submenu: [139, 134, 130, 255],        // Gray
        jumpover: [58, 95, 205, 255],         // Blue
        error: [177, 19, 26, 255],            // Red
        boolOn: [0, 204, 0, 255],             // Green
        boolOff: [204, 0, 0, 255],            // Red
    },

    // Text Sizes
    textSize: {
        header: 0.45,
        subHeader: 0.32,
        item: 0.35,
        version: 0.95
    },

    // Header text
    headerText: "TRIDENT",
    subHeaderText: "MD EXTEND+ v13",
    versionText: "MD"
};

// ============================================================================
// MENU ITEM TYPES
// ============================================================================

const ITEM_TYPE = {
    SUBMENU: 1,
    FUNCTION: 2,
    BOOL: 3,
    VALUE_NUM: 4,
    VALUE_STRING: 5,
    VEHICLE: 6,
    PLAYER: 7,
    JUMPOVER: 8,
    ERROR: 9,
    NOT_PRESENT: 10
};

// ============================================================================
// MENU STATE
// ============================================================================

let menuState = {
    isOpen: false,
    currentLevel: 0,
    selectedIndex: 0,
    scrollOffset: 0,
    items: [],
    menuStack: [],
    lastSelected: [],
    glowValue: 0,
    glowIncrement: true,
    flashValue: 255,
    flashIncrement: false,

    // Player selection for network options
    selectedPlayer: null,

    // Input state
    inputCooldown: 0,
    holdCounter: 0,
    pressCounter: 2,
    pressMultiplier: 1
};

// ============================================================================
// MENU ITEMS DATA
// ============================================================================

function createMenuItem(name, type, options = {}) {
    return {
        name: name,
        type: type,
        action: options.action || null,
        submenu: options.submenu || null,
        value: options.value !== undefined ? options.value : 0,
        maxValue: options.maxValue || 0,
        minValue: options.minValue || 0,
        boolState: options.boolState || false,
        stringValues: options.stringValues || [],
        vehicleModel: options.vehicleModel || 0,
        playerId: options.playerId || -1
    };
}

// ============================================================================
// MAIN MENU STRUCTURE
// ============================================================================

function getMainMenuItems() {
    return [
        createMenuItem("Player Options", ITEM_TYPE.SUBMENU, { submenu: "player" }),
        createMenuItem("Network Options", ITEM_TYPE.SUBMENU, { submenu: "network" }),
        createMenuItem("Vehicle Garage", ITEM_TYPE.SUBMENU, { submenu: "vehicle" }),
        createMenuItem("Weapon Options", ITEM_TYPE.SUBMENU, { submenu: "weapon" }),
        createMenuItem("Teleport Options", ITEM_TYPE.SUBMENU, { submenu: "teleport" }),
        createMenuItem("Weather / Time", ITEM_TYPE.SUBMENU, { submenu: "weather" }),
        createMenuItem("Model Changer", ITEM_TYPE.SUBMENU, { submenu: "model" }),
        createMenuItem("Animations", ITEM_TYPE.SUBMENU, { submenu: "animation" }),
        createMenuItem("Object Spawner", ITEM_TYPE.SUBMENU, { submenu: "objects" }),
        createMenuItem("~~ M E N U  S E T T I N G S ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Menu Settings", ITEM_TYPE.SUBMENU, { submenu: "settings" }),
        createMenuItem("~~ C R E D I T S ~~", ITEM_TYPE.JUMPOVER),
        createMenuItem("Credits", ITEM_TYPE.SUBMENU, { submenu: "credits" })
    ];
}

// ============================================================================
// DRAWING FUNCTIONS
// ============================================================================

function drawRect(x, y, width, height, r, g, b, a) {
    natives.DRAW_RECT(x, y, width, height, r, g, b, a);
}

function drawText(text, x, y, size, r, g, b, a, centered = false, rightJustify = false) {
    natives.SET_TEXT_FONT(0);
    natives.SET_TEXT_SCALE(size, size);
    natives.SET_TEXT_COLOUR(r, g, b, a);

    if (centered) {
        natives.SET_TEXT_CENTRE(true);
    }
    if (rightJustify) {
        natives.SET_TEXT_RIGHT_JUSTIFY(true);
        natives.SET_TEXT_WRAP(0.0, x);
    }

    natives.SET_TEXT_DROPSHADOW(0, 0, 0, 0, 255);
    natives.DISPLAY_TEXT_WITH_LITERAL_STRING(x, y, "STRING", text);
}

function setupDraw(sizeX, sizeY, r, g, b, a) {
    natives.SET_TEXT_FONT(0);
    natives.SET_TEXT_SCALE(sizeX, sizeY);
    natives.SET_TEXT_COLOUR(r, g, b, a);
    natives.SET_TEXT_DROPSHADOW(0, 0, 0, 0, 255);
}

// ============================================================================
// MENU RENDERING
// ============================================================================

function renderMenu() {
    if (!menuState.isOpen) return;

    updateEffects();

    let posX = MENU_CONFIG.posX;
    let posY = MENU_CONFIG.posY;
    let width = MENU_CONFIG.width;

    // Calculate window height based on visible items
    let visibleCount = Math.min(menuState.items.length, MENU_CONFIG.maxVisibleItems);
    let windowHeight = MENU_CONFIG.headerHeight + (visibleCount * MENU_CONFIG.itemHeight) + 0.02;

    // Draw background window
    let bgColor = MENU_CONFIG.colors.background;
    drawRect(
        posX + width / 2,
        posY + windowHeight / 2,
        width,
        windowHeight,
        bgColor[0], bgColor[1], bgColor[2], bgColor[3]
    );

    // Draw header
    renderHeader(posX, posY);

    // Draw separator line
    let lineY = posY + MENU_CONFIG.headerHeight;
    drawRect(
        posX + width / 2,
        lineY,
        width,
        0.002,
        MENU_CONFIG.colors.line[0],
        MENU_CONFIG.colors.line[1],
        MENU_CONFIG.colors.line[2],
        MENU_CONFIG.colors.line[3]
    );

    // Draw items
    renderItems(posX, lineY + 0.01);

    // Draw scroll indicators if needed
    if (menuState.items.length > MENU_CONFIG.maxVisibleItems) {
        renderScrollIndicators(posX, posY, windowHeight);
    }

    // Draw helper text at bottom
    renderHelperText();
}

function renderHeader(x, y) {
    let headerColor = MENU_CONFIG.colors.header;
    let subHeaderColor = MENU_CONFIG.colors.subHeader;

    // MD Text (version prefix)
    setupDraw(0.42, 0.95, subHeaderColor[0], subHeaderColor[1], subHeaderColor[2], 255);
    natives.DISPLAY_TEXT_WITH_LITERAL_STRING(x + 0.02, y + 0.005, "STRING", MENU_CONFIG.versionText);

    // Header Text (TRIDENT)
    setupDraw(0.303, 0.45, headerColor[0], headerColor[1], headerColor[2], menuState.flashValue);
    natives.DISPLAY_TEXT_WITH_LITERAL_STRING(x + 0.055, y + 0.01, "STRING", MENU_CONFIG.headerText);

    // Sub Header (version/description)
    setupDraw(0.2, 0.32, subHeaderColor[0], subHeaderColor[1], subHeaderColor[2], 255);
    natives.SET_TEXT_CENTRE(true);
    natives.DISPLAY_TEXT_WITH_LITERAL_STRING(x + MENU_CONFIG.width / 2, y + 0.04, "STRING", MENU_CONFIG.subHeaderText);
}

function renderItems(startX, startY) {
    let items = menuState.items;
    let scrollOffset = menuState.scrollOffset;
    let selectedIndex = menuState.selectedIndex;

    let visibleCount = Math.min(items.length, MENU_CONFIG.maxVisibleItems);
    let itemY = startY;

    for (let i = 0; i < visibleCount; i++) {
        let itemIndex = scrollOffset + i;
        if (itemIndex >= items.length) break;

        let item = items[itemIndex];
        let isSelected = (itemIndex === selectedIndex);

        // Draw selection highlight
        if (isSelected) {
            drawRect(
                startX + MENU_CONFIG.width / 2,
                itemY + MENU_CONFIG.itemHeight / 2,
                MENU_CONFIG.width,
                MENU_CONFIG.itemHeight,
                menuState.glowValue,
                menuState.glowValue,
                200,
                150
            );
        }

        // Render item based on type
        renderItem(item, startX, itemY, isSelected);

        itemY += MENU_CONFIG.itemHeight;
    }
}

function renderItem(item, x, y, isSelected) {
    let textX = x + 0.02;
    let textY = y + 0.003;

    let color;
    let text = item.name;

    switch (item.type) {
        case ITEM_TYPE.SUBMENU:
            color = isSelected ? MENU_CONFIG.colors.itemHighlight : MENU_CONFIG.colors.submenu;
            setupDraw(0.19, 0.35, color[0], color[1], color[2], 255);
            natives.DISPLAY_TEXT_WITH_LITERAL_STRING(textX, textY, "STRING", "MD " + text + " >>");
            break;

        case ITEM_TYPE.FUNCTION:
            color = isSelected ? MENU_CONFIG.colors.itemHighlight : MENU_CONFIG.colors.item;
            setupDraw(0.19, 0.35, color[0], color[1], color[2], 255);
            natives.DISPLAY_TEXT_WITH_LITERAL_STRING(textX, textY, "STRING", text);
            break;

        case ITEM_TYPE.BOOL:
            color = item.boolState ? MENU_CONFIG.colors.boolOn : MENU_CONFIG.colors.boolOff;
            if (isSelected) color = MENU_CONFIG.colors.itemHighlight;
            setupDraw(0.19, 0.35, color[0], color[1], color[2], 255);
            natives.DISPLAY_TEXT_WITH_LITERAL_STRING(textX, textY, "STRING", text);

            // Draw ON/OFF indicator
            let stateText = item.boolState ? "ON" : "OFF";
            let stateColor = item.boolState ? MENU_CONFIG.colors.boolOn : MENU_CONFIG.colors.boolOff;
            setupDraw(0.19, 0.35, stateColor[0], stateColor[1], stateColor[2], 255);
            natives.SET_TEXT_RIGHT_JUSTIFY(true);
            natives.SET_TEXT_WRAP(0.0, x + MENU_CONFIG.width - 0.02);
            natives.DISPLAY_TEXT_WITH_LITERAL_STRING(0.0, textY, "STRING", stateText);
            break;

        case ITEM_TYPE.VALUE_NUM:
            color = isSelected ? MENU_CONFIG.colors.itemHighlight : MENU_CONFIG.colors.item;
            setupDraw(0.19, 0.35, color[0], color[1], color[2], 255);
            natives.DISPLAY_TEXT_WITH_LITERAL_STRING(textX, textY, "STRING", text);

            // Draw value
            setupDraw(0.19, 0.35, 255, 255, 255, 255);
            natives.SET_TEXT_RIGHT_JUSTIFY(true);
            natives.SET_TEXT_WRAP(0.0, x + MENU_CONFIG.width - 0.02);
            natives.DISPLAY_TEXT_WITH_LITERAL_STRING(0.0, textY, "STRING", "< " + item.value.toString() + " >");
            break;

        case ITEM_TYPE.VALUE_STRING:
            color = isSelected ? MENU_CONFIG.colors.itemHighlight : MENU_CONFIG.colors.item;
            setupDraw(0.19, 0.35, color[0], color[1], color[2], 255);
            natives.DISPLAY_TEXT_WITH_LITERAL_STRING(textX, textY, "STRING", text);

            // Draw string value
            let strValue = item.stringValues[item.value] || "None";
            setupDraw(0.19, 0.35, 255, 255, 255, 255);
            natives.SET_TEXT_RIGHT_JUSTIFY(true);
            natives.SET_TEXT_WRAP(0.0, x + MENU_CONFIG.width - 0.02);
            natives.DISPLAY_TEXT_WITH_LITERAL_STRING(0.0, textY, "STRING", "< " + strValue + " >");
            break;

        case ITEM_TYPE.VEHICLE:
            color = isSelected ? MENU_CONFIG.colors.itemHighlight : MENU_CONFIG.colors.item;
            setupDraw(0.19, 0.35, color[0], color[1], color[2], 255);
            // Get vehicle display name
            let vehName = natives.GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(item.vehicleModel);
            let displayName = natives.GET_STRING_FROM_TEXT_FILE(vehName) || text;
            natives.DISPLAY_TEXT_WITH_LITERAL_STRING(textX, textY, "STRING", displayName);
            break;

        case ITEM_TYPE.PLAYER:
            // Get player color
            let playerColor = getPlayerColor(item.playerId);
            if (isSelected) playerColor = MENU_CONFIG.colors.itemHighlight;
            setupDraw(0.19, 0.35, playerColor[0], playerColor[1], playerColor[2], 255);
            natives.DISPLAY_TEXT_WITH_LITERAL_STRING(textX, textY, "STRING", text);
            break;

        case ITEM_TYPE.JUMPOVER:
            color = MENU_CONFIG.colors.jumpover;
            setupDraw(0.21, 0.385, color[0], color[1], color[2], menuState.flashValue);
            natives.SET_TEXT_CENTRE(true);
            natives.DISPLAY_TEXT_WITH_LITERAL_STRING(x + MENU_CONFIG.width / 2, textY, "STRING", text);
            break;

        case ITEM_TYPE.ERROR:
            color = MENU_CONFIG.colors.error;
            setupDraw(0.19, 0.35, color[0], color[1], menuState.glowValue, 255);
            natives.DISPLAY_TEXT_WITH_LITERAL_STRING(textX, textY, "STRING", text);
            break;

        case ITEM_TYPE.NOT_PRESENT:
            color = MENU_CONFIG.colors.error;
            setupDraw(0.19, 0.35, color[0], menuState.glowValue, menuState.glowValue, 255);
            natives.DISPLAY_TEXT_WITH_LITERAL_STRING(textX, textY, "STRING", text + " (N/A)");
            break;

        default:
            color = MENU_CONFIG.colors.item;
            setupDraw(0.19, 0.35, color[0], color[1], color[2], 255);
            natives.DISPLAY_TEXT_WITH_LITERAL_STRING(textX, textY, "STRING", text);
    }
}

function renderScrollIndicators(x, y, height) {
    // Draw scroll position indicator
    let totalItems = menuState.items.length;
    let visibleItems = MENU_CONFIG.maxVisibleItems;
    let scrollOffset = menuState.scrollOffset;

    let scrollBarHeight = height - MENU_CONFIG.headerHeight - 0.04;
    let scrollThumbHeight = (visibleItems / totalItems) * scrollBarHeight;
    let scrollThumbY = y + MENU_CONFIG.headerHeight + 0.02 + (scrollOffset / (totalItems - visibleItems)) * (scrollBarHeight - scrollThumbHeight);

    // Draw scroll track
    drawRect(
        x + MENU_CONFIG.width - 0.008,
        y + MENU_CONFIG.headerHeight + scrollBarHeight / 2,
        0.004,
        scrollBarHeight,
        50, 50, 50, 150
    );

    // Draw scroll thumb
    drawRect(
        x + MENU_CONFIG.width - 0.008,
        scrollThumbY + scrollThumbHeight / 2,
        0.004,
        scrollThumbHeight,
        MENU_CONFIG.colors.header[0],
        MENU_CONFIG.colors.header[1],
        MENU_CONFIG.colors.header[2],
        255
    );
}

function renderHelperText() {
    let y = 0.92;

    setupDraw(0.15, 0.28, 255, 255, 255, 200);

    if (menuState.currentLevel === 0) {
        natives.DISPLAY_TEXT_WITH_LITERAL_STRING(0.3, y, "STRING", "UP/DOWN: Navigate | ENTER: Select | BACKSPACE: Close");
    } else {
        natives.DISPLAY_TEXT_WITH_LITERAL_STRING(0.3, y, "STRING", "UP/DOWN: Navigate | ENTER: Select | BACKSPACE: Back");
    }
}

// ============================================================================
// MENU EFFECTS
// ============================================================================

function updateEffects() {
    // Glow effect
    if (menuState.glowIncrement) {
        menuState.glowValue += 3;
        if (menuState.glowValue >= 190) {
            menuState.glowIncrement = false;
        }
    } else {
        menuState.glowValue -= 3;
        if (menuState.glowValue <= 0) {
            menuState.glowIncrement = true;
        }
    }

    // Flash effect
    if (menuState.flashIncrement) {
        menuState.flashValue += 3;
        if (menuState.flashValue >= 255) {
            menuState.flashIncrement = false;
        }
    } else {
        menuState.flashValue -= 2;
        if (menuState.flashValue <= 150) {
            menuState.flashIncrement = true;
        }
    }
}

// ============================================================================
// MENU INPUT HANDLING
// ============================================================================

function handleMenuInput() {
    if (menuState.inputCooldown > 0) {
        menuState.inputCooldown--;
    }

    // Open/Close menu with specific key combo (F5 or Insert)
    if (natives.IS_GAME_KEYBOARD_KEY_JUST_PRESSED(0x74) || // F5
        natives.IS_GAME_KEYBOARD_KEY_JUST_PRESSED(0x2D)) { // Insert
        toggleMenu();
        return;
    }

    if (!menuState.isOpen) return;

    // Navigation
    if (isInputPressed("up")) {
        navigateUp();
    }
    if (isInputPressed("down")) {
        navigateDown();
    }
    if (isInputPressed("left")) {
        adjustValue(-1);
    }
    if (isInputPressed("right")) {
        adjustValue(1);
    }

    // Selection
    if (isInputJustPressed("select")) {
        selectItem();
        menuState.inputCooldown = 8;
    }

    // Back
    if (isInputJustPressed("back")) {
        goBack();
        menuState.inputCooldown = 8;
    }
}

function isInputPressed(action) {
    let pressed = false;
    let justPressed = false;

    switch (action) {
        case "up":
            pressed = natives.IS_GAME_KEYBOARD_KEY_PRESSED(0x26) || // UP Arrow
                     natives.IS_BUTTON_PRESSED(0, 1); // DPAD UP
            justPressed = natives.IS_GAME_KEYBOARD_KEY_JUST_PRESSED(0x26) ||
                         natives.IS_BUTTON_JUST_PRESSED(0, 1);
            break;
        case "down":
            pressed = natives.IS_GAME_KEYBOARD_KEY_PRESSED(0x28) || // DOWN Arrow
                     natives.IS_BUTTON_PRESSED(0, 2); // DPAD DOWN
            justPressed = natives.IS_GAME_KEYBOARD_KEY_JUST_PRESSED(0x28) ||
                         natives.IS_BUTTON_JUST_PRESSED(0, 2);
            break;
        case "left":
            pressed = natives.IS_GAME_KEYBOARD_KEY_PRESSED(0x25) || // LEFT Arrow
                     natives.IS_BUTTON_PRESSED(0, 3); // DPAD LEFT
            justPressed = natives.IS_GAME_KEYBOARD_KEY_JUST_PRESSED(0x25) ||
                         natives.IS_BUTTON_JUST_PRESSED(0, 3);
            break;
        case "right":
            pressed = natives.IS_GAME_KEYBOARD_KEY_PRESSED(0x27) || // RIGHT Arrow
                     natives.IS_BUTTON_PRESSED(0, 4); // DPAD RIGHT
            justPressed = natives.IS_GAME_KEYBOARD_KEY_JUST_PRESSED(0x27) ||
                         natives.IS_BUTTON_JUST_PRESSED(0, 4);
            break;
    }

    // Handle press with repeat
    if (justPressed) {
        menuState.holdCounter = 0;
        menuState.pressCounter = 2;
        menuState.pressMultiplier = 1;
        return true;
    }

    if (pressed && menuState.inputCooldown === 0) {
        menuState.holdCounter++;
        if (menuState.holdCounter > 15) {
            menuState.pressCounter++;
            menuState.pressCounter *= menuState.pressMultiplier;

            if (menuState.holdCounter > 40) {
                menuState.pressMultiplier = 2;
                menuState.holdCounter = 16;
            }

            if (menuState.pressCounter > 6) {
                menuState.inputCooldown = 3;
                return true;
            }
        }
    } else if (!pressed) {
        menuState.holdCounter = 0;
        menuState.pressMultiplier = 1;
    }

    return false;
}

function isInputJustPressed(action) {
    switch (action) {
        case "select":
            return natives.IS_GAME_KEYBOARD_KEY_JUST_PRESSED(0x0D) || // Enter
                   natives.IS_BUTTON_JUST_PRESSED(0, 16); // A button
        case "back":
            return natives.IS_GAME_KEYBOARD_KEY_JUST_PRESSED(0x08) || // Backspace
                   natives.IS_BUTTON_JUST_PRESSED(0, 32); // B button
    }
    return false;
}

// ============================================================================
// MENU NAVIGATION
// ============================================================================

function toggleMenu() {
    menuState.isOpen = !menuState.isOpen;

    if (menuState.isOpen) {
        openMenu();
    } else {
        closeMenu();
    }
}

function openMenu() {
    menuState.isOpen = true;
    menuState.currentLevel = 0;
    menuState.items = getMainMenuItems();
    menuState.selectedIndex = 0;
    menuState.scrollOffset = 0;
    menuState.menuStack = [];
    menuState.lastSelected = [];

    // Block weapon switching while menu is open
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    natives.BLOCK_PED_WEAPON_SWITCHING(playerPed, true);

    // Play open sound
    natives.PLAY_AUDIO_EVENT("FRONTEND_MENU_MP_READY");

    // Notification
    showNotification("~b~MD TRIDENT ~s~Menu Opened");
}

function closeMenu() {
    menuState.isOpen = false;

    // Unblock weapon switching
    let playerPed = natives.GET_PLAYER_PED(natives.GET_PLAYER_ID());
    natives.BLOCK_PED_WEAPON_SWITCHING(playerPed, false);

    // Play close sound
    natives.PLAY_AUDIO_EVENT("FRONTEND_MENU_MP_UNREADY");
}

function navigateUp() {
    // Skip jumpover items
    do {
        if (menuState.selectedIndex === 0) {
            menuState.selectedIndex = menuState.items.length - 1;
            // Adjust scroll for wrap-around
            if (menuState.items.length > MENU_CONFIG.maxVisibleItems) {
                menuState.scrollOffset = menuState.items.length - MENU_CONFIG.maxVisibleItems;
            }
        } else {
            menuState.selectedIndex--;
            // Adjust scroll
            if (menuState.selectedIndex < menuState.scrollOffset) {
                menuState.scrollOffset = menuState.selectedIndex;
            }
        }
    } while (menuState.items[menuState.selectedIndex].type === ITEM_TYPE.JUMPOVER);

    natives.PLAY_AUDIO_EVENT("RADIO_RETUNE_BEEP");
}

function navigateDown() {
    // Skip jumpover items
    do {
        if (menuState.selectedIndex === menuState.items.length - 1) {
            menuState.selectedIndex = 0;
            menuState.scrollOffset = 0;
        } else {
            menuState.selectedIndex++;
            // Adjust scroll
            if (menuState.selectedIndex >= menuState.scrollOffset + MENU_CONFIG.maxVisibleItems) {
                menuState.scrollOffset = menuState.selectedIndex - MENU_CONFIG.maxVisibleItems + 1;
            }
        }
    } while (menuState.items[menuState.selectedIndex].type === ITEM_TYPE.JUMPOVER);

    natives.PLAY_AUDIO_EVENT("RADIO_RETUNE_BEEP");
}

function adjustValue(delta) {
    let item = menuState.items[menuState.selectedIndex];

    if (item.type === ITEM_TYPE.VALUE_NUM) {
        item.value += delta;
        if (item.value > item.maxValue) item.value = item.minValue;
        if (item.value < item.minValue) item.value = item.maxValue;
        natives.PLAY_AUDIO_EVENT("RADIO_RETUNE_BEEP");
    } else if (item.type === ITEM_TYPE.VALUE_STRING) {
        item.value += delta;
        if (item.value >= item.stringValues.length) item.value = 0;
        if (item.value < 0) item.value = item.stringValues.length - 1;
        natives.PLAY_AUDIO_EVENT("RADIO_RETUNE_BEEP");
    }
}

function selectItem() {
    let item = menuState.items[menuState.selectedIndex];

    if (item.type === ITEM_TYPE.JUMPOVER || item.type === ITEM_TYPE.NOT_PRESENT) {
        return;
    }

    natives.PLAY_AUDIO_EVENT("FRONTEND_MENU_MP_SERVER_HIGHLIGHT");

    if (item.type === ITEM_TYPE.SUBMENU) {
        // Save current state
        menuState.menuStack.push({
            items: menuState.items,
            selectedIndex: menuState.selectedIndex,
            scrollOffset: menuState.scrollOffset
        });

        // Load submenu
        menuState.items = getSubmenuItems(item.submenu);
        menuState.selectedIndex = 0;
        menuState.scrollOffset = 0;
        menuState.currentLevel++;

    } else if (item.type === ITEM_TYPE.BOOL) {
        item.boolState = !item.boolState;
        if (item.action) {
            item.action(item.boolState);
        }

    } else if (item.type === ITEM_TYPE.FUNCTION) {
        if (item.action) {
            item.action();
        }

    } else if (item.type === ITEM_TYPE.VALUE_NUM || item.type === ITEM_TYPE.VALUE_STRING) {
        if (item.action) {
            item.action(item.value);
        }

    } else if (item.type === ITEM_TYPE.VEHICLE) {
        if (item.action) {
            item.action(item.vehicleModel);
        } else {
            spawnVehicle(item.vehicleModel);
        }

    } else if (item.type === ITEM_TYPE.PLAYER) {
        menuState.selectedPlayer = item.playerId;
        if (item.action) {
            item.action(item.playerId);
        }
    }
}

function goBack() {
    if (menuState.currentLevel === 0) {
        closeMenu();
        return;
    }

    // Restore previous state
    let prevState = menuState.menuStack.pop();
    if (prevState) {
        menuState.items = prevState.items;
        menuState.selectedIndex = prevState.selectedIndex;
        menuState.scrollOffset = prevState.scrollOffset;
        menuState.currentLevel--;
    }

    natives.PLAY_AUDIO_EVENT("RADIO_RETUNE_BEEP");
}

// ============================================================================
// SUBMENU DEFINITIONS
// ============================================================================

function getSubmenuItems(submenuId) {
    switch (submenuId) {
        case "player":
            return getPlayerMenuItems();
        case "network":
            return getNetworkMenuItems();
        case "vehicle":
            return getVehicleMenuItems();
        case "weapon":
            return getWeaponMenuItems();
        case "teleport":
            return getTeleportMenuItems();
        case "weather":
            return getWeatherMenuItems();
        case "model":
            return getModelMenuItems();
        case "animation":
            return getAnimationMenuItems();
        case "objects":
            return getObjectMenuItems();
        case "settings":
            return getSettingsMenuItems();
        case "credits":
            return getCreditsMenuItems();
        // Vehicle sub-categories
        case "vehicle_sports":
            return getSportsVehicleItems();
        case "vehicle_muscle":
            return getMuscleVehicleItems();
        case "vehicle_suv":
            return getSUVVehicleItems();
        case "vehicle_sedan":
            return getSedanVehicleItems();
        case "vehicle_emergency":
            return getEmergencyVehicleItems();
        case "vehicle_bikes":
            return getBikeVehicleItems();
        case "vehicle_boats":
            return getBoatVehicleItems();
        case "vehicle_helicopters":
            return getHelicopterVehicleItems();
        default:
            return [createMenuItem("Not Implemented", ITEM_TYPE.ERROR)];
    }
}

// ============================================================================
// UTILITY FUNCTIONS
// ============================================================================

function showNotification(text) {
    natives.PRINT_STRING_WITH_LITERAL_STRING_NOW("STRING", text, 3000, true);
}

function getPlayerColor(playerId) {
    let r = 255, g = 255, b = 255;
    // Try to get player color
    try {
        let result = natives.GET_PLAYER_RGB_COLOUR(playerId);
        if (result) {
            r = result[0] || 255;
            g = result[1] || 255;
            b = result[2] || 255;
        }
    } catch (e) {
        // Default white if failed
    }
    return [r, g, b, 255];
}

function spawnVehicle(modelHash) {
    // Get player position and heading
    let playerId = natives.GET_PLAYER_ID();
    let playerPed = natives.GET_PLAYER_PED(playerId);

    let pos = natives.GET_CHAR_COORDINATES(playerPed);
    let heading = natives.GET_CHAR_HEADING(playerPed);

    // Request model
    natives.REQUEST_MODEL(modelHash);

    // Wait for model to load (simplified - actual implementation should use async)
    let attempts = 0;
    while (!natives.HAS_MODEL_LOADED(modelHash) && attempts < 100) {
        natives.WAIT(10);
        attempts++;
    }

    if (!natives.HAS_MODEL_LOADED(modelHash)) {
        showNotification("~r~Failed to load vehicle model!");
        return;
    }

    // Create vehicle in front of player
    let spawnX = pos[0] + Math.sin(heading * Math.PI / 180) * 5;
    let spawnY = pos[1] + Math.cos(heading * Math.PI / 180) * 5;
    let spawnZ = pos[2];

    let vehicle = natives.CREATE_CAR(modelHash, spawnX, spawnY, spawnZ, true, true);

    if (vehicle) {
        natives.SET_CAR_HEADING(vehicle, heading);
        natives.SET_CAR_ON_GROUND_PROPERLY(vehicle);
        showNotification("~g~Vehicle spawned!");
    }

    // Mark model as no longer needed
    natives.MARK_MODEL_AS_NO_LONGER_NEEDED(modelHash);
}

// ============================================================================
// EVENT HANDLERS
// ============================================================================

addEventHandler("OnProcess", function(event) {
    handleMenuInput();
});

addEventHandler("OnDrawnHUD", function(event) {
    renderMenu();
});

// ============================================================================
// EXPORTS
// ============================================================================

// Export menu state and functions for other scripts
this.menuState = menuState;
this.showNotification = showNotification;
this.createMenuItem = createMenuItem;
this.ITEM_TYPE = ITEM_TYPE;
this.toggleMenu = toggleMenu;
