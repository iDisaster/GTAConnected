// ============================================================================
// CUSTOM CHAT UI - Client Side
// Modern glossy UI matching MD Revolution menu style
// ============================================================================

// ============================================================================
// UI THEME - Dark Glassmorphism (matching mod menu)
// ============================================================================
const UI = {
    // Background colors
    bgDark: { r: 13, g: 17, b: 23 },           // Deep dark background
    bgPanel: { r: 22, g: 27, b: 34 },          // Panel background
    bgHover: { r: 33, g: 38, b: 45 },          // Hover state
    bgSelected: { r: 45, g: 50, b: 58 },       // Selected item
    bgMessage: { r: 18, g: 22, b: 28 },        // Message background

    // Accent colors - clean cyan
    accent: { r: 0, g: 212, b: 255 },          // Primary accent (cyan)
    accentDim: { r: 0, g: 150, b: 180 },       // Dimmed accent
    accentGlow: { r: 0, g: 180, b: 220 },      // Glow effect

    // Text colors
    textPrimary: { r: 230, g: 237, b: 243 },   // Primary text (almost white)
    textSecondary: { r: 139, g: 148, b: 158 }, // Secondary text (gray)
    textMuted: { r: 88, g: 96, b: 105 },       // Muted text

    // Status colors
    success: { r: 63, g: 185, b: 80 },         // Green for joins
    error: { r: 248, g: 81, b: 73 },           // Red for leaves
    warning: { r: 210, g: 153, b: 34 },        // Yellow/gold for warnings
    info: { r: 88, g: 166, b: 255 },           // Blue for info

    // Chat specific colors
    playerName: { r: 0, g: 212, b: 255 },      // Player name color (cyan)
    chatWhite: { r: 255, g: 255, b: 255 },     // Normal chat
    chatAction: { r: 200, g: 100, b: 255 },    // /me actions (purple)
    chatWhisper: { r: 255, g: 255, b: 100 },   // Private messages (yellow)
    chatShout: { r: 255, g: 100, b: 100 },     // Shout (red)
    chatOOC: { r: 150, g: 150, b: 150 },       // OOC (gray)
    chatSystem: { r: 100, g: 200, b: 255 },    // System messages (light blue)
    chatLocal: { r: 200, g: 255, b: 200 },     // Local chat (light green)

    // Border colors
    border: { r: 48, g: 54, b: 61 },           // Subtle border
    borderFocus: { r: 0, g: 212, b: 255 }      // Focused border (accent)
};

// ============================================================================
// CHAT STATE
// ============================================================================
let chatMessages = [];
const maxMessages = 50;
let chatVisible = true;
let chatInputActive = false;
let chatInputText = "";
let chatScrollOffset = 0;
let chatFont = null;

// Animation state
let animTime = 0;
let chatFadeAlpha = 1.0;
let lastMessageTime = 0;
let chatFadeDelay = 10000; // 10 seconds before fade
let chatFadeSpeed = 0.02;

// Welcome/Leave notification queue
let notifications = [];
let notificationDuration = 5000; // 5 seconds

// Chat dimensions
const chat = {
    x: 25,
    y: 200,
    width: 550,
    messageHeight: 22,
    maxVisibleMessages: 12,
    padding: 12,
    inputHeight: 36,
    borderRadius: 4
};

// ============================================================================
// RESOURCE START - Load font
// ============================================================================
addEventHandler("OnResourceStart", function(event, resource) {
    if (resource == thisResource) {
        try {
            chatFont = lucasFont;
            console.log("[Chat] Custom chat UI initialized");
        } catch(e) {
            console.log("[Chat] Font load error: " + e);
        }
    }
});

// ============================================================================
// NETWORK EVENTS - Receive messages from server
// ============================================================================
addNetworkHandler("chatMessage", function(messageData) {
    addChatMessage(messageData.text, messageData.type || "normal", messageData.playerName || null);
});

addNetworkHandler("playerJoined", function(data) {
    addNotification(data.name + " joined the server", "join");
    addChatMessage(data.name + " has joined the server", "system");
});

addNetworkHandler("playerLeft", function(data) {
    let reason = data.reason || "Disconnected";
    addNotification(data.name + " left the server", "leave");
    addChatMessage(data.name + " has left the server (" + reason + ")", "system");
});

// ============================================================================
// CHAT FUNCTIONS
// ============================================================================

function addChatMessage(text, type, playerName) {
    let message = {
        text: text,
        type: type || "normal",
        playerName: playerName,
        timestamp: Date.now(),
        alpha: 1.0
    };

    chatMessages.push(message);

    // Limit messages
    if (chatMessages.length > maxMessages) {
        chatMessages.shift();
    }

    // Reset fade timer
    lastMessageTime = Date.now();
    chatFadeAlpha = 1.0;

    // Auto-scroll to bottom
    let totalMessages = chatMessages.length;
    if (totalMessages > chat.maxVisibleMessages) {
        chatScrollOffset = totalMessages - chat.maxVisibleMessages;
    }
}

function addNotification(text, type) {
    notifications.push({
        text: text,
        type: type, // "join" or "leave"
        timestamp: Date.now(),
        alpha: 1.0,
        y: 0 // Will be animated
    });
}

function getMessageColor(type) {
    switch(type) {
        case "action": return UI.chatAction;
        case "whisper": return UI.chatWhisper;
        case "shout": return UI.chatShout;
        case "ooc": return UI.chatOOC;
        case "system": return UI.chatSystem;
        case "local": return UI.chatLocal;
        case "join": return UI.success;
        case "leave": return UI.error;
        default: return UI.chatWhite;
    }
}

// ============================================================================
// DRAWING FUNCTIONS
// ============================================================================

function drawRect(x, y, w, h, colour) {
    try {
        let pos = new Vec2(x, y);
        let size = new Vec2(w, h);
        graphics.drawRectangle(null, pos, size, colour, colour, colour, colour);
    } catch(e) {}
}

function drawGradientRect(x, y, w, h, colourLeft, colourRight) {
    try {
        let pos = new Vec2(x, y);
        let size = new Vec2(w, h);
        graphics.drawRectangle(null, pos, size, colourLeft, colourRight, colourLeft, colourRight);
    } catch(e) {}
}

function drawGradientRectV(x, y, w, h, colourTop, colourBottom) {
    try {
        let pos = new Vec2(x, y);
        let size = new Vec2(w, h);
        graphics.drawRectangle(null, pos, size, colourTop, colourTop, colourBottom, colourBottom);
    } catch(e) {}
}

function drawText(text, x, y, colour, size) {
    if (chatFont != null) {
        try {
            let pos = new Vec2(x, y);
            chatFont.render(text, pos, chat.width - 20, 0.0, 0.0, size || 11, colour, false, false, false, true);
        } catch(e) {}
    }
}

// ============================================================================
// RENDER CHAT UI
// ============================================================================
addEventHandler("OnDrawnHUD", function(event) {
    animTime += 0.016; // ~60fps

    let screenWidth = 1920;
    let screenHeight = 1080;
    try {
        screenWidth = game.width || 1920;
        screenHeight = game.height || 1080;
    } catch(e) {}

    // Update fade
    if (Date.now() - lastMessageTime > chatFadeDelay && !chatInputActive) {
        chatFadeAlpha = Math.max(0.3, chatFadeAlpha - chatFadeSpeed);
    }

    // Draw notifications first (top right)
    drawNotifications(screenWidth, screenHeight);

    // Skip chat drawing if hidden
    if (!chatVisible && !chatInputActive) return;

    let alpha = Math.floor(255 * chatFadeAlpha);
    if (chatInputActive) alpha = 255;

    // Calculate chat area
    let chatAreaHeight = chat.maxVisibleMessages * chat.messageHeight + chat.padding * 2;
    let totalHeight = chatAreaHeight + (chatInputActive ? chat.inputHeight + 8 : 0);

    // ========================================
    // MAIN CHAT PANEL - Glossy background
    // ========================================

    // Outer glow effect (subtle)
    let glowAlpha = Math.floor(30 * chatFadeAlpha);
    let glowCol = toColour(UI.accent.r, UI.accent.g, UI.accent.b, glowAlpha);
    drawRect(chat.x - 2, chat.y - 2, chat.width + 4, chatAreaHeight + 4, glowCol);

    // Main panel background with transparency
    let bgAlpha = Math.floor(200 * chatFadeAlpha);
    let panelBg = toColour(UI.bgDark.r, UI.bgDark.g, UI.bgDark.b, bgAlpha);
    drawRect(chat.x, chat.y, chat.width, chatAreaHeight, panelBg);

    // Glassmorphism overlay (subtle gradient)
    let glossTop = toColour(255, 255, 255, Math.floor(8 * chatFadeAlpha));
    let glossBottom = toColour(255, 255, 255, 0);
    drawGradientRectV(chat.x, chat.y, chat.width, 30, glossTop, glossBottom);

    // Top accent line
    let accentAlpha = Math.floor(255 * chatFadeAlpha);
    let accentCol = toColour(UI.accent.r, UI.accent.g, UI.accent.b, accentAlpha);
    drawRect(chat.x, chat.y, chat.width, 2, accentCol);

    // Side accent line (left)
    let sideAccent = toColour(UI.accent.r, UI.accent.g, UI.accent.b, Math.floor(150 * chatFadeAlpha));
    drawRect(chat.x, chat.y, 2, chatAreaHeight, sideAccent);

    // ========================================
    // CHAT HEADER
    // ========================================
    let headerHeight = 28;
    let headerBg = toColour(UI.bgPanel.r, UI.bgPanel.g, UI.bgPanel.b, bgAlpha);
    drawRect(chat.x, chat.y + 2, chat.width, headerHeight, headerBg);

    // Header text
    let headerTextCol = toColour(UI.accent.r, UI.accent.g, UI.accent.b, alpha);
    drawText("CHAT", chat.x + chat.padding, chat.y + 8, headerTextCol, 11);

    // Online count (placeholder - can be updated via network)
    let onlineCol = toColour(UI.textSecondary.r, UI.textSecondary.g, UI.textSecondary.b, alpha);
    drawText("Press T to chat", chat.x + chat.width - 120, chat.y + 9, onlineCol, 9);

    // Header bottom border
    let headerBorder = toColour(UI.border.r, UI.border.g, UI.border.b, Math.floor(100 * chatFadeAlpha));
    drawRect(chat.x + chat.padding, chat.y + headerHeight + 2, chat.width - chat.padding * 2, 1, headerBorder);

    // ========================================
    // CHAT MESSAGES
    // ========================================
    let messageStartY = chat.y + headerHeight + chat.padding;
    let visibleCount = Math.min(chatMessages.length, chat.maxVisibleMessages);
    let startIndex = Math.max(0, chatMessages.length - chat.maxVisibleMessages - chatScrollOffset);

    for (let i = 0; i < visibleCount && startIndex + i < chatMessages.length; i++) {
        let msg = chatMessages[startIndex + i];
        let msgY = messageStartY + (i * chat.messageHeight);

        // Message background (alternating subtle)
        if (i % 2 === 0) {
            let msgBgAlpha = Math.floor(30 * chatFadeAlpha);
            let msgBg = toColour(UI.bgMessage.r, UI.bgMessage.g, UI.bgMessage.b, msgBgAlpha);
            drawRect(chat.x + 4, msgY - 2, chat.width - 8, chat.messageHeight, msgBg);
        }

        // Get message color based on type
        let msgColor = getMessageColor(msg.type);
        let textCol = toColour(msgColor.r, msgColor.g, msgColor.b, alpha);

        // Draw timestamp
        let time = new Date(msg.timestamp);
        let timeStr = "[" + padZero(time.getHours()) + ":" + padZero(time.getMinutes()) + "]";
        let timeCol = toColour(UI.textMuted.r, UI.textMuted.g, UI.textMuted.b, Math.floor(alpha * 0.7));
        drawText(timeStr, chat.x + chat.padding, msgY, timeCol, 9);

        // Draw message text
        let textX = chat.x + chat.padding + 55;

        if (msg.playerName && msg.type === "normal") {
            // Player name in accent color
            let nameCol = toColour(UI.playerName.r, UI.playerName.g, UI.playerName.b, alpha);
            drawText(msg.playerName + ":", textX, msgY, nameCol, 10);
            // Message text
            drawText(msg.text, textX + (msg.playerName.length * 7) + 12, msgY, textCol, 10);
        } else {
            drawText(msg.text, textX, msgY, textCol, 10);
        }
    }

    // ========================================
    // SCROLLBAR (if needed)
    // ========================================
    if (chatMessages.length > chat.maxVisibleMessages) {
        let scrollbarX = chat.x + chat.width - 6;
        let scrollbarY = messageStartY;
        let scrollbarHeight = chat.maxVisibleMessages * chat.messageHeight;

        // Scrollbar track
        let trackCol = toColour(UI.bgHover.r, UI.bgHover.g, UI.bgHover.b, Math.floor(100 * chatFadeAlpha));
        drawRect(scrollbarX, scrollbarY, 4, scrollbarHeight, trackCol);

        // Scrollbar thumb
        let thumbHeight = Math.max(20, (chat.maxVisibleMessages / chatMessages.length) * scrollbarHeight);
        let thumbY = scrollbarY + ((startIndex / (chatMessages.length - chat.maxVisibleMessages)) * (scrollbarHeight - thumbHeight));
        let thumbCol = toColour(UI.accent.r, UI.accent.g, UI.accent.b, Math.floor(200 * chatFadeAlpha));
        drawRect(scrollbarX, thumbY, 4, thumbHeight, thumbCol);
    }

    // ========================================
    // INPUT BOX (when active)
    // ========================================
    if (chatInputActive) {
        let inputY = chat.y + chatAreaHeight + 6;

        // Input background
        let inputBg = toColour(UI.bgPanel.r, UI.bgPanel.g, UI.bgPanel.b, 240);
        drawRect(chat.x, inputY, chat.width, chat.inputHeight, inputBg);

        // Input border glow
        let pulseAlpha = Math.floor(180 + Math.sin(animTime * 4) * 50);
        let inputBorder = toColour(UI.accent.r, UI.accent.g, UI.accent.b, pulseAlpha);
        drawRect(chat.x, inputY, chat.width, 2, inputBorder);
        drawRect(chat.x, inputY + chat.inputHeight - 2, chat.width, 2, inputBorder);
        drawRect(chat.x, inputY, 2, chat.inputHeight, inputBorder);
        drawRect(chat.x + chat.width - 2, inputY, 2, chat.inputHeight, inputBorder);

        // Input label
        let labelCol = toColour(UI.textMuted.r, UI.textMuted.g, UI.textMuted.b, 255);
        drawText("Say:", chat.x + chat.padding, inputY + 10, labelCol, 10);

        // Input text with cursor
        let cursorBlink = Math.floor(animTime * 2) % 2 === 0;
        let inputTextCol = toColour(UI.textPrimary.r, UI.textPrimary.g, UI.textPrimary.b, 255);
        let displayText = chatInputText + (cursorBlink ? "|" : "");
        drawText(displayText, chat.x + chat.padding + 40, inputY + 10, inputTextCol, 10);
    }

    // ========================================
    // BOTTOM PANEL FADE
    // ========================================
    let fadeHeight = 20;
    let fadeTop = toColour(UI.bgDark.r, UI.bgDark.g, UI.bgDark.b, 0);
    let fadeBottom = toColour(UI.bgDark.r, UI.bgDark.g, UI.bgDark.b, bgAlpha);
    drawGradientRectV(chat.x, chat.y + chatAreaHeight - fadeHeight, chat.width, fadeHeight, fadeTop, fadeBottom);

    // Bottom border
    drawRect(chat.x, chat.y + chatAreaHeight - 1, chat.width, 1, accentCol);
});

// ========================================
// DRAW NOTIFICATIONS (Join/Leave)
// ========================================
function drawNotifications(screenWidth, screenHeight) {
    let notifX = screenWidth - 350;
    let notifY = 100;
    let notifHeight = 45;
    let notifSpacing = 8;

    // Update and draw each notification
    for (let i = notifications.length - 1; i >= 0; i--) {
        let notif = notifications[i];
        let age = Date.now() - notif.timestamp;

        // Remove old notifications
        if (age > notificationDuration) {
            notifications.splice(i, 1);
            continue;
        }

        // Calculate alpha (fade in/out)
        let fadeIn = Math.min(1, age / 200);
        let fadeOut = Math.min(1, (notificationDuration - age) / 500);
        notif.alpha = fadeIn * fadeOut;

        // Calculate slide animation
        let slideIn = Math.min(1, age / 300);
        let slideX = notifX + (1 - slideIn) * 100;

        let alpha = Math.floor(255 * notif.alpha);
        let displayIndex = notifications.length - 1 - i;
        let yPos = notifY + displayIndex * (notifHeight + notifSpacing);

        // Notification background
        let bgAlpha = Math.floor(220 * notif.alpha);
        let bgCol = toColour(UI.bgDark.r, UI.bgDark.g, UI.bgDark.b, bgAlpha);
        drawRect(slideX, yPos, 320, notifHeight, bgCol);

        // Glossy top effect
        let glossTop = toColour(255, 255, 255, Math.floor(15 * notif.alpha));
        let glossBottom = toColour(255, 255, 255, 0);
        drawGradientRectV(slideX, yPos, 320, 15, glossTop, glossBottom);

        // Left accent bar based on type
        let accentColor = notif.type === "join" ? UI.success : UI.error;
        let accentBarCol = toColour(accentColor.r, accentColor.g, accentColor.b, alpha);
        drawRect(slideX, yPos, 4, notifHeight, accentBarCol);

        // Icon (+ for join, - for leave)
        let iconText = notif.type === "join" ? "+" : "-";
        let iconCol = toColour(accentColor.r, accentColor.g, accentColor.b, alpha);
        drawText(iconText, slideX + 15, yPos + 12, iconCol, 18);

        // Notification text
        let textCol = toColour(UI.textPrimary.r, UI.textPrimary.g, UI.textPrimary.b, alpha);
        drawText(notif.text, slideX + 40, yPos + 14, textCol, 11);

        // Subtitle
        let subtitleText = notif.type === "join" ? "Welcome to the server!" : "Goodbye!";
        let subtitleCol = toColour(UI.textSecondary.r, UI.textSecondary.g, UI.textSecondary.b, Math.floor(alpha * 0.7));
        drawText(subtitleText, slideX + 40, yPos + 28, subtitleCol, 9);

        // Outer glow
        let glowAlpha = Math.floor(40 * notif.alpha);
        let glowCol = toColour(accentColor.r, accentColor.g, accentColor.b, glowAlpha);
        drawRect(slideX - 2, yPos - 2, 324, notifHeight + 4, glowCol);
    }
}

// ========================================
// HELPER FUNCTIONS
// ========================================
function padZero(num) {
    return num < 10 ? "0" + num : num.toString();
}

// ============================================================================
// INPUT HANDLING
// ============================================================================
addEventHandler("OnKeyUp", function(event, key, scancode, mods) {
    // T key to open chat
    if (key === SDLK_t && !chatInputActive) {
        chatInputActive = true;
        chatInputText = "";
        gui.showCursor(true, true);
        event.preventDefault();
        return;
    }

    // Escape to close chat
    if (key === SDLK_ESCAPE && chatInputActive) {
        chatInputActive = false;
        chatInputText = "";
        gui.showCursor(false, false);
        event.preventDefault();
        return;
    }

    // Enter to send message
    if (key === SDLK_RETURN && chatInputActive) {
        if (chatInputText.length > 0) {
            // Send message to server
            triggerNetworkEvent("chatSendMessage", chatInputText);
        }
        chatInputActive = false;
        chatInputText = "";
        gui.showCursor(false, false);
        event.preventDefault();
        return;
    }

    // Page up/down for scrolling
    if (key === SDLK_PAGEUP && chatMessages.length > chat.maxVisibleMessages) {
        chatScrollOffset = Math.min(chatScrollOffset + 3, chatMessages.length - chat.maxVisibleMessages);
        chatFadeAlpha = 1.0;
        lastMessageTime = Date.now();
    }
    if (key === SDLK_PAGEDOWN) {
        chatScrollOffset = Math.max(0, chatScrollOffset - 3);
        chatFadeAlpha = 1.0;
        lastMessageTime = Date.now();
    }
});

// Handle text input
addEventHandler("OnCharacter", function(event, character) {
    if (chatInputActive) {
        chatInputText += character;
        event.preventDefault();
    }
});

addEventHandler("OnKeyDown", function(event, key, scancode, mods) {
    if (!chatInputActive) return;

    // Backspace
    if (key === SDLK_BACKSPACE && chatInputText.length > 0) {
        chatInputText = chatInputText.slice(0, -1);
        event.preventDefault();
    }
});

// ============================================================================
// MOUSE WHEEL SCROLLING
// ============================================================================
addEventHandler("OnMouseWheel", function(event, x, y) {
    if (chatMessages.length <= chat.maxVisibleMessages) return;

    // Check if mouse is over chat area
    let mouseX = gui.cursorPosition.x;
    let mouseY = gui.cursorPosition.y;

    if (mouseX >= chat.x && mouseX <= chat.x + chat.width &&
        mouseY >= chat.y && mouseY <= chat.y + chat.maxVisibleMessages * chat.messageHeight + 50) {

        if (y > 0) {
            chatScrollOffset = Math.min(chatScrollOffset + 2, chatMessages.length - chat.maxVisibleMessages);
        } else {
            chatScrollOffset = Math.max(0, chatScrollOffset - 2);
        }

        chatFadeAlpha = 1.0;
        lastMessageTime = Date.now();
    }
});

// ============================================================================
// PROCESS - Animation updates
// ============================================================================
addEventHandler("OnProcess", function(event) {
    // Block game input while typing
    if (chatInputActive) {
        // Disable native chat
        try {
            chatInputEnabled = false;
        } catch(e) {}
    }
});

// ============================================================================
// DISABLE DEFAULT CHAT
// ============================================================================
addEventHandler("OnResourceReady", function(event, resource) {
    if (resource == thisResource) {
        try {
            // Disable default chat window
            setChatWindowEnabled(false);
        } catch(e) {
            console.log("[Chat] Could not disable default chat: " + e);
        }
    }
});

console.log("[Chat] Client script loaded - Custom glossy UI enabled");
