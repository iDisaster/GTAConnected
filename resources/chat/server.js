// ============================================================================
// CHAT RESOURCE - Server Side
// Enhanced chat system with custom UI, welcome/leave messages, and features
// ============================================================================

// Chat colors using toColour for integer format
const COLOUR_WHITE = toColour(255, 255, 255, 255);
const COLOUR_ACTION = toColour(200, 100, 255, 255);
const COLOUR_WHISPER = toColour(255, 255, 100, 255);
const COLOUR_SHOUT = toColour(255, 100, 100, 255);
const COLOUR_OOC = toColour(150, 150, 150, 255);
const COLOUR_ADMIN = toColour(255, 100, 100, 255);
const COLOUR_SYSTEM = toColour(100, 200, 255, 255);
const COLOUR_ORANGE = toColour(255, 200, 100, 255);
const COLOUR_ERROR = toColour(255, 100, 100, 255);
const COLOUR_GRAY = toColour(200, 200, 200, 255);
const COLOUR_LOCAL = toColour(200, 255, 200, 255);
const COLOUR_JOIN = toColour(63, 185, 80, 255);
const COLOUR_LEAVE = toColour(248, 81, 73, 255);

// Chat history (for logging purposes)
let chatHistory = [];
const maxHistory = 100;

// Store last PM sender for reply function
let lastPMSender = {};

// ============================================================================
// EVENTS
// ============================================================================

addEventHandler("OnResourceStart", function(event, resource) {
    if (resource == thisResource) {
        console.log("[Chat] Resource started - Custom chat system active");
    }
});

// ============================================================================
// PLAYER JOIN/LEAVE EVENTS
// ============================================================================

addEventHandler("OnPlayerJoined", function(event, client) {
    // Broadcast join notification to all clients
    // Send player name directly for better compatibility
    let clients = getClients();
    for (let i = 0; i < clients.length; i++) {
        triggerNetworkEvent("playerJoined", clients[i], client.name);
    }

    // Log to console
    console.log("[Chat] " + client.name + " joined the server");

    // Also send via native message for fallback
    message(client.name + " has joined the server", COLOUR_JOIN);
});

addEventHandler("OnPlayerQuit", function(event, client, reason) {
    // Get disconnect reason text
    let reasonText = getDisconnectReason(reason);

    // Broadcast leave notification to all remaining clients
    // Send individual parameters for better compatibility
    let clients = getClients();
    for (let i = 0; i < clients.length; i++) {
        if (clients[i].index !== client.index) {
            triggerNetworkEvent("playerLeft", clients[i], client.name, reasonText);
        }
    }

    // Log to console
    console.log("[Chat] " + client.name + " left the server (" + reasonText + ")");

    // Also send via native message for fallback
    message(client.name + " has left the server (" + reasonText + ")", COLOUR_LEAVE);

    // Clear PM data
    delete lastPMSender[client.index];
});

function getDisconnectReason(reason) {
    switch(reason) {
        case 0: return "Disconnected";
        case 1: return "Timed Out";
        case 2: return "Kicked";
        case 3: return "Banned";
        case 4: return "Connection Lost";
        default: return "Unknown";
    }
}

// ============================================================================
// CHAT MESSAGE HANDLING
// ============================================================================

addEventHandler("OnPlayerChat", function(event, client, messageText) {
    // Broadcast to all clients via custom network event
    // Send individual parameters for better compatibility
    let clients = getClients();
    for (let i = 0; i < clients.length; i++) {
        triggerNetworkEvent("chatMessage", clients[i], messageText, "normal", client.name);
    }

    // Log to history
    logChat(client.name, messageText, "chat");

    // Prevent default chat handling (we use custom UI)
    return false;
});

// Network event handler for chat messages from custom UI
addNetworkHandler("chatSendMessage", function(client, messageText) {
    if (!messageText || messageText.length === 0) return;

    console.log("[Chat] Received message from " + client.name + ": " + messageText);

    // Check if it's a command
    if (messageText.charAt(0) === '/') {
        // Parse command
        let parts = messageText.substring(1).split(" ");
        let command = parts[0].toLowerCase();
        let params = parts.slice(1).join(" ");

        handleCommand(client, command, params);
        return;
    }

    // Regular chat message - broadcast to all clients
    // Send individual parameters for better compatibility
    let clients = getClients();
    for (let i = 0; i < clients.length; i++) {
        triggerNetworkEvent("chatMessage", clients[i], messageText, "normal", client.name);
    }

    // Log to history
    logChat(client.name, messageText, "chat");
});

// ============================================================================
// COMMAND HANDLING
// ============================================================================

addEventHandler("OnPlayerCommand", function(event, client, command, params) {
    handleCommand(client, command.toLowerCase(), params);
});

function handleCommand(client, cmd, params) {
    switch(cmd) {
        case "pm":
        case "msg":
        case "whisper":
        case "w":
            if (params && params.length > 0) {
                let parts = params.split(" ");
                let targetName = parts[0];
                let messageText = parts.slice(1).join(" ");

                if (messageText.length > 0) {
                    sendPrivateMessage(client, targetName, messageText);
                } else {
                    sendSystemMessage(client, "[USAGE] /pm <player> <message>");
                }
            } else {
                sendSystemMessage(client, "[USAGE] /pm <player> <message>");
            }
            break;

        case "me":
        case "action":
            if (params && params.length > 0) {
                broadcastChatMessage("* " + client.name + " " + params, "action");
                logChat(client.name, params, "action");
            } else {
                sendSystemMessage(client, "[USAGE] /me <action>");
            }
            break;

        case "do":
            if (params && params.length > 0) {
                broadcastChatMessage("* " + params + " (" + client.name + ")", "action");
                logChat(client.name, params, "do");
            } else {
                sendSystemMessage(client, "[USAGE] /do <description>");
            }
            break;

        case "shout":
        case "s":
            if (params && params.length > 0) {
                broadcastChatMessage(client.name + " shouts: " + params.toUpperCase() + "!", "shout");
                logChat(client.name, params, "shout");
            } else {
                sendSystemMessage(client, "[USAGE] /shout <message>");
            }
            break;

        case "ooc":
        case "b":
            if (params && params.length > 0) {
                broadcastChatMessage("(( " + client.name + ": " + params + " ))", "ooc");
                logChat(client.name, params, "ooc");
            } else {
                sendSystemMessage(client, "[USAGE] /ooc <message>");
            }
            break;

        case "local":
        case "l":
            if (params && params.length > 0) {
                sendLocalMessage(client, params);
            } else {
                sendSystemMessage(client, "[USAGE] /local <message>");
            }
            break;

        case "reply":
        case "r":
            if (params && params.length > 0) {
                replyToLastPM(client, params);
            } else {
                sendSystemMessage(client, "[USAGE] /r <message>");
            }
            break;

        case "clear":
        case "cls":
            // Clear chat for this player
            sendSystemMessage(client, "Chat cleared");
            break;
    }
}

// ============================================================================
// MESSAGE FUNCTIONS
// ============================================================================

function broadcastChatMessage(text, type, senderName) {
    // Send individual parameters for better compatibility
    let clients = getClients();
    for (let i = 0; i < clients.length; i++) {
        triggerNetworkEvent("chatMessage", clients[i], text, type || "normal", senderName || "");
    }
}

function sendChatMessage(client, text, type, playerName) {
    // Send individual parameters for better compatibility
    triggerNetworkEvent("chatMessage", client, text, type || "normal", playerName || "");
}

function sendSystemMessage(client, text) {
    sendChatMessage(client, text, "system");
    // Also send via native for fallback
    messageClient(text, client, COLOUR_SYSTEM);
}

function sendPrivateMessage(sender, targetName, messageText) {
    let target = findPlayer(targetName);

    if (target) {
        if (target.index === sender.index) {
            sendSystemMessage(sender, "[PM] You cannot message yourself!");
            return;
        }

        // Send to target via custom UI
        sendChatMessage(target, "[PM from " + sender.name + "]: " + messageText, "whisper");

        // Confirm to sender via custom UI
        sendChatMessage(sender, "[PM to " + target.name + "]: " + messageText, "whisper");

        // Store for reply function
        lastPMSender[target.index] = sender.index;

        logChat(sender.name, "-> " + target.name + ": " + messageText, "pm");
    } else {
        sendSystemMessage(sender, "[PM] Player not found: " + targetName);
    }
}

function replyToLastPM(client, messageText) {
    if (lastPMSender[client.index] !== undefined) {
        let targetIndex = lastPMSender[client.index];
        let clients = getClients();
        let target = null;

        for (let i = 0; i < clients.length; i++) {
            if (clients[i].index === targetIndex) {
                target = clients[i];
                break;
            }
        }

        if (target) {
            sendPrivateMessage(client, target.name, messageText);
        } else {
            sendSystemMessage(client, "[PM] The player you're trying to reply to is no longer online");
        }
    } else {
        sendSystemMessage(client, "[PM] No one has messaged you yet");
    }
}

function sendLocalMessage(sender, messageText) {
    if (!sender.player) {
        sendSystemMessage(sender, "[LOCAL] You need to spawn first!");
        return;
    }

    let senderPos = sender.player.position;
    let localRange = 30.0; // 30 units range for local chat
    let clients = getClients();

    // Send to nearby players
    for (let i = 0; i < clients.length; i++) {
        let client = clients[i];
        if (client.player) {
            let clientPos = client.player.position;
            let distance = getDistance(senderPos, clientPos);

            if (distance <= localRange) {
                sendChatMessage(client, "(Local) " + sender.name + ": " + messageText, "local");
            }
        }
    }

    logChat(sender.name, messageText, "local");
}

function findPlayer(name) {
    let clients = getClients();
    let nameLower = name.toLowerCase();

    for (let i = 0; i < clients.length; i++) {
        if (clients[i].name.toLowerCase() === nameLower ||
            clients[i].name.toLowerCase().indexOf(nameLower) !== -1) {
            return clients[i];
        }
    }
    return null;
}

function getDistance(pos1, pos2) {
    let dx = pos1.x - pos2.x;
    let dy = pos1.y - pos2.y;
    let dz = pos1.z - pos2.z;
    return Math.sqrt(dx * dx + dy * dy + dz * dz);
}

function logChat(playerName, messageText, type) {
    let entry = {
        time: new Date().toISOString(),
        player: playerName,
        message: messageText,
        type: type
    };

    chatHistory.push(entry);

    // Keep history limited
    if (chatHistory.length > maxHistory) {
        chatHistory.shift();
    }

    console.log("[Chat][" + type + "] " + playerName + ": " + messageText);
}

console.log("[Chat] Server script loaded - Welcome/Leave messages enabled!");
