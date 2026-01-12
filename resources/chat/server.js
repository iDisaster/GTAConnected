// ============================================================================
// CHAT RESOURCE - Server Side
// Enhanced chat system with private messages, colors, and special features
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

// Chat history (for logging purposes)
let chatHistory = [];
const maxHistory = 100;

// ============================================================================
// EVENTS
// ============================================================================

addEventHandler("OnResourceStart", function(event, resource) {
    console.log("[Chat] Resource started");
});

addEventHandler("OnPlayerChat", function(event, client, messageText) {
    // Format and broadcast the chat message
    let formattedMessage = client.name + ": " + messageText;
    message(formattedMessage, COLOUR_WHITE);

    // Log to history
    logChat(client.name, messageText, "chat");

    // Prevent default chat handling
    return false;
});

addEventHandler("OnPlayerCommand", function(event, client, command, params) {
    let cmd = command.toLowerCase();

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
                    messageClient("[USAGE] /pm <player> <message>", client, COLOUR_ORANGE);
                }
            } else {
                messageClient("[USAGE] /pm <player> <message>", client, COLOUR_ORANGE);
            }
            break;

        case "me":
        case "action":
            if (params && params.length > 0) {
                let actionMessage = "* " + client.name + " " + params;
                message(actionMessage, COLOUR_ACTION);
                logChat(client.name, params, "action");
            } else {
                messageClient("[USAGE] /me <action>", client, COLOUR_ORANGE);
            }
            break;

        case "do":
            if (params && params.length > 0) {
                let doMessage = "* " + params + " (" + client.name + ")";
                message(doMessage, COLOUR_ACTION);
                logChat(client.name, params, "do");
            } else {
                messageClient("[USAGE] /do <description>", client, COLOUR_ORANGE);
            }
            break;

        case "shout":
        case "s":
            if (params && params.length > 0) {
                let shoutMessage = client.name + " shouts: " + params.toUpperCase() + "!";
                message(shoutMessage, COLOUR_SHOUT);
                logChat(client.name, params, "shout");
            } else {
                messageClient("[USAGE] /shout <message>", client, COLOUR_ORANGE);
            }
            break;

        case "ooc":
        case "b":
            if (params && params.length > 0) {
                let oocMessage = "(( " + client.name + ": " + params + " ))";
                message(oocMessage, COLOUR_OOC);
                logChat(client.name, params, "ooc");
            } else {
                messageClient("[USAGE] /ooc <message>", client, COLOUR_ORANGE);
            }
            break;

        case "local":
        case "l":
            if (params && params.length > 0) {
                sendLocalMessage(client, params);
            } else {
                messageClient("[USAGE] /local <message>", client, COLOUR_ORANGE);
            }
            break;

        case "reply":
        case "r":
            if (params && params.length > 0) {
                replyToLastPM(client, params);
            } else {
                messageClient("[USAGE] /r <message>", client, COLOUR_ORANGE);
            }
            break;
    }
});

// ============================================================================
// FUNCTIONS
// ============================================================================

// Store last PM sender for reply function
let lastPMSender = {};

function sendPrivateMessage(sender, targetName, messageText) {
    let target = findPlayer(targetName);

    if (target) {
        if (target.index === sender.index) {
            messageClient("[PM] You cannot message yourself!", sender, COLOUR_ERROR);
            return;
        }

        // Send to target
        messageClient("[PM from " + sender.name + "]: " + messageText, target, COLOUR_WHISPER);

        // Confirm to sender
        messageClient("[PM to " + target.name + "]: " + messageText, sender, COLOUR_WHISPER);

        // Store for reply function
        lastPMSender[target.index] = sender.index;

        logChat(sender.name, "-> " + target.name + ": " + messageText, "pm");
    } else {
        messageClient("[PM] Player not found: " + targetName, sender, COLOUR_ERROR);
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
            messageClient("[PM] The player you're trying to reply to is no longer online", client, COLOUR_ERROR);
        }
    } else {
        messageClient("[PM] No one has messaged you yet", client, COLOUR_ERROR);
    }
}

function sendLocalMessage(sender, messageText) {
    if (!sender.player) {
        messageClient("[LOCAL] You need to spawn first!", sender, COLOUR_ERROR);
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
                let localMessage = "(Local) " + sender.name + ": " + messageText;
                messageClient(localMessage, client, COLOUR_LOCAL);
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

console.log("[Chat] Server script loaded!");
