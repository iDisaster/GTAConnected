// ============================================================================
// ADMIN RESOURCE - Server Side
// Handles server moderation, kick/ban, and admin commands
// ============================================================================

// Define colors using toColour
const COLOUR_WHITE = toColour(255, 255, 255, 255);
const COLOUR_RED = toColour(255, 100, 100, 255);
const COLOUR_DARKRED = toColour(255, 50, 50, 255);
const COLOUR_GREEN = toColour(100, 255, 100, 255);
const COLOUR_BLUE = toColour(100, 200, 255, 255);
const COLOUR_YELLOW = toColour(255, 255, 100, 255);
const COLOUR_ORANGE = toColour(255, 200, 100, 255);
const COLOUR_GREY = toColour(200, 200, 200, 255);
const COLOUR_PINK = toColour(255, 150, 100, 255);

// Admin list - add player names or account identifiers here
const admins = [
    "Admin",
    "Owner",
    "ServerOwner",
    "Disaster"
];

// Ban list (stored in memory - use a database for persistence)
let bannedPlayers = [];
let mutedPlayers = [];

// ============================================================================
// EVENTS
// ============================================================================

addEventHandler("OnResourceStart", function(event, resource) {
    console.log("[Admin] Resource started - " + admins.length + " admins configured");
});

addEventHandler("OnPlayerConnect", function(event, client, ip) {
    // Check if player is banned
    for (let i = 0; i < bannedPlayers.length; i++) {
        if (bannedPlayers[i].ip === ip || bannedPlayers[i].name === client.name) {
            console.log("[Admin] Banned player attempted to connect: " + client.name + " (" + ip + ")");
            client.disconnect("You are banned from this server: " + bannedPlayers[i].reason);
            return;
        }
    }
});

addEventHandler("OnPlayerJoined", function(event, client) {
    if (isAdmin(client)) {
        messageClient("[ADMIN] You have administrator privileges", client, COLOUR_RED);
    }
});

addEventHandler("OnPlayerCommand", function(event, client, command, params) {
    let cmd = command.toLowerCase();

    // Public commands
    switch(cmd) {
        case "admins":
            showAdmins(client);
            return;

        case "report":
            if (params && params.length > 0) {
                reportPlayer(client, params);
            } else {
                messageClient("[USAGE] /report <message>", client, COLOUR_ORANGE);
            }
            return;
    }

    // Admin-only commands
    if (!isAdmin(client)) {
        return;
    }

    switch(cmd) {
        case "kick":
            if (params && params.length > 0) {
                let parts = params.split(" ");
                let targetName = parts[0];
                let reason = parts.slice(1).join(" ") || "No reason specified";
                kickPlayer(client, targetName, reason);
            } else {
                messageClient("[USAGE] /kick <player> [reason]", client, COLOUR_ORANGE);
            }
            break;

        case "ban":
            if (params && params.length > 0) {
                let parts = params.split(" ");
                let targetName = parts[0];
                let reason = parts.slice(1).join(" ") || "No reason specified";
                banPlayer(client, targetName, reason);
            } else {
                messageClient("[USAGE] /ban <player> [reason]", client, COLOUR_ORANGE);
            }
            break;

        case "unban":
            if (params && params.length > 0) {
                unbanPlayer(client, params);
            } else {
                messageClient("[USAGE] /unban <player>", client, COLOUR_ORANGE);
            }
            break;

        case "mute":
            if (params && params.length > 0) {
                mutePlayer(client, params);
            } else {
                messageClient("[USAGE] /mute <player>", client, COLOUR_ORANGE);
            }
            break;

        case "unmute":
            if (params && params.length > 0) {
                unmutePlayer(client, params);
            } else {
                messageClient("[USAGE] /unmute <player>", client, COLOUR_ORANGE);
            }
            break;

        case "freeze":
            if (params && params.length > 0) {
                freezePlayer(client, params, true);
            } else {
                messageClient("[USAGE] /freeze <player>", client, COLOUR_ORANGE);
            }
            break;

        case "unfreeze":
            if (params && params.length > 0) {
                freezePlayer(client, params, false);
            } else {
                messageClient("[USAGE] /unfreeze <player>", client, COLOUR_ORANGE);
            }
            break;

        case "slap":
            if (params && params.length > 0) {
                slapPlayer(client, params);
            } else {
                messageClient("[USAGE] /slap <player>", client, COLOUR_ORANGE);
            }
            break;

        case "goto":
        case "tpto":
            if (params && params.length > 0) {
                teleportToPlayer(client, params);
            } else {
                messageClient("[USAGE] /goto <player>", client, COLOUR_ORANGE);
            }
            break;

        case "bring":
        case "tphere":
            if (params && params.length > 0) {
                bringPlayer(client, params);
            } else {
                messageClient("[USAGE] /bring <player>", client, COLOUR_ORANGE);
            }
            break;

        case "announce":
        case "ann":
            if (params && params.length > 0) {
                announce(params);
            } else {
                messageClient("[USAGE] /announce <message>", client, COLOUR_ORANGE);
            }
            break;

        case "setadmin":
            if (params && params.length > 0) {
                setAdmin(client, params);
            } else {
                messageClient("[USAGE] /setadmin <player>", client, COLOUR_ORANGE);
            }
            break;

        case "getip":
            if (params && params.length > 0) {
                getPlayerIP(client, params);
            } else {
                messageClient("[USAGE] /getip <player>", client, COLOUR_ORANGE);
            }
            break;

        case "ahelp":
        case "adminhelp":
            showAdminHelp(client);
            break;

        case "sethealth":
            if (params && params.length > 0) {
                let parts = params.split(" ");
                if (parts.length >= 2) {
                    setPlayerHealth(client, parts[0], parseInt(parts[1]));
                } else {
                    messageClient("[USAGE] /sethealth <player> <health>", client, COLOUR_ORANGE);
                }
            }
            break;

        case "setarmour":
            if (params && params.length > 0) {
                let parts = params.split(" ");
                if (parts.length >= 2) {
                    setPlayerArmour(client, parts[0], parseInt(parts[1]));
                } else {
                    messageClient("[USAGE] /setarmour <player> <armour>", client, COLOUR_ORANGE);
                }
            }
            break;

        case "explode":
            if (params && params.length > 0) {
                explodePlayer(client, params);
            } else {
                messageClient("[USAGE] /explode <player>", client, COLOUR_ORANGE);
            }
            break;
    }
});

// Check if player is muted before chat
addEventHandler("OnPlayerChat", function(event, client, messageText) {
    if (isMuted(client)) {
        messageClient("[ADMIN] You are muted and cannot chat!", client, COLOUR_RED);
        return false;
    }
});

// ============================================================================
// FUNCTIONS
// ============================================================================

function isAdmin(client) {
    return admins.indexOf(client.name) !== -1;
}

function isMuted(client) {
    return mutedPlayers.indexOf(client.name) !== -1;
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

function kickPlayer(admin, targetName, reason) {
    let target = findPlayer(targetName);
    if (target) {
        message("[ADMIN] " + target.name + " was kicked by " + admin.name + ": " + reason, COLOUR_RED);
        target.disconnect("Kicked: " + reason);
        console.log("[Admin] " + admin.name + " kicked " + target.name + ": " + reason);
    } else {
        messageClient("[ADMIN] Player not found: " + targetName, admin, COLOUR_RED);
    }
}

function banPlayer(admin, targetName, reason) {
    let target = findPlayer(targetName);
    if (target) {
        bannedPlayers.push({
            name: target.name,
            ip: target.ip,
            reason: reason,
            admin: admin.name,
            date: new Date().toISOString()
        });

        message("[ADMIN] " + target.name + " was banned by " + admin.name + ": " + reason, COLOUR_DARKRED);
        target.disconnect("Banned: " + reason);
        console.log("[Admin] " + admin.name + " banned " + target.name + ": " + reason);
    } else {
        messageClient("[ADMIN] Player not found: " + targetName, admin, COLOUR_RED);
    }
}

function unbanPlayer(admin, targetName) {
    let found = false;
    for (let i = bannedPlayers.length - 1; i >= 0; i--) {
        if (bannedPlayers[i].name.toLowerCase() === targetName.toLowerCase()) {
            bannedPlayers.splice(i, 1);
            found = true;
        }
    }

    if (found) {
        messageClient("[ADMIN] " + targetName + " has been unbanned", admin, COLOUR_GREEN);
        console.log("[Admin] " + admin.name + " unbanned " + targetName);
    } else {
        messageClient("[ADMIN] Player not found in ban list: " + targetName, admin, COLOUR_RED);
    }
}

function mutePlayer(admin, targetName) {
    let target = findPlayer(targetName);
    if (target) {
        if (mutedPlayers.indexOf(target.name) === -1) {
            mutedPlayers.push(target.name);
        }
        message("[ADMIN] " + target.name + " was muted by " + admin.name, COLOUR_PINK);
        console.log("[Admin] " + admin.name + " muted " + target.name);
    } else {
        messageClient("[ADMIN] Player not found: " + targetName, admin, COLOUR_RED);
    }
}

function unmutePlayer(admin, targetName) {
    let target = findPlayer(targetName);
    let name = target ? target.name : targetName;

    let index = mutedPlayers.indexOf(name);
    if (index !== -1) {
        mutedPlayers.splice(index, 1);
        message("[ADMIN] " + name + " was unmuted by " + admin.name, COLOUR_GREEN);
        console.log("[Admin] " + admin.name + " unmuted " + name);
    } else {
        messageClient("[ADMIN] Player is not muted: " + targetName, admin, COLOUR_RED);
    }
}

function freezePlayer(admin, targetName, freeze) {
    let target = findPlayer(targetName);
    if (target && target.player) {
        target.player.frozen = freeze;
        let status = freeze ? "frozen" : "unfrozen";
        message("[ADMIN] " + target.name + " was " + status + " by " + admin.name, COLOUR_ORANGE);
        console.log("[Admin] " + admin.name + " " + status + " " + target.name);
    } else {
        messageClient("[ADMIN] Player not found: " + targetName, admin, COLOUR_RED);
    }
}

function slapPlayer(admin, targetName) {
    let target = findPlayer(targetName);
    if (target && target.player) {
        let pos = target.player.position;
        target.player.position = new Vec3(pos.x, pos.y, pos.z + 5);
        target.player.health -= 10;
        message("[ADMIN] " + target.name + " was slapped by " + admin.name, COLOUR_ORANGE);
        console.log("[Admin] " + admin.name + " slapped " + target.name);
    } else {
        messageClient("[ADMIN] Player not found: " + targetName, admin, COLOUR_RED);
    }
}

function teleportToPlayer(admin, targetName) {
    let target = findPlayer(targetName);
    if (target && target.player && admin.player) {
        let pos = target.player.position;
        admin.player.position = new Vec3(pos.x + 2, pos.y, pos.z);
        messageClient("[ADMIN] Teleported to " + target.name, admin, COLOUR_GREEN);
        console.log("[Admin] " + admin.name + " teleported to " + target.name);
    } else {
        messageClient("[ADMIN] Player not found: " + targetName, admin, COLOUR_RED);
    }
}

function bringPlayer(admin, targetName) {
    let target = findPlayer(targetName);
    if (target && target.player && admin.player) {
        let pos = admin.player.position;
        target.player.position = new Vec3(pos.x + 2, pos.y, pos.z);
        messageClient("[ADMIN] " + admin.name + " brought you to them", target, COLOUR_ORANGE);
        messageClient("[ADMIN] Brought " + target.name + " to you", admin, COLOUR_GREEN);
        console.log("[Admin] " + admin.name + " brought " + target.name);
    } else {
        messageClient("[ADMIN] Player not found: " + targetName, admin, COLOUR_RED);
    }
}

function announce(text) {
    message("=================================", COLOUR_YELLOW);
    message("[ANNOUNCEMENT] " + text, COLOUR_YELLOW);
    message("=================================", COLOUR_YELLOW);
    console.log("[Admin] Announcement: " + text);
}

function setAdmin(admin, targetName) {
    let target = findPlayer(targetName);
    if (target) {
        if (admins.indexOf(target.name) === -1) {
            admins.push(target.name);
            messageClient("[ADMIN] You have been granted admin privileges by " + admin.name, target, COLOUR_GREEN);
            messageClient("[ADMIN] " + target.name + " is now an admin", admin, COLOUR_GREEN);
            console.log("[Admin] " + admin.name + " made " + target.name + " an admin");
        } else {
            messageClient("[ADMIN] " + target.name + " is already an admin", admin, COLOUR_ORANGE);
        }
    } else {
        messageClient("[ADMIN] Player not found: " + targetName, admin, COLOUR_RED);
    }
}

function getPlayerIP(admin, targetName) {
    let target = findPlayer(targetName);
    if (target) {
        messageClient("[ADMIN] " + target.name + "'s IP: " + target.ip, admin, COLOUR_BLUE);
    } else {
        messageClient("[ADMIN] Player not found: " + targetName, admin, COLOUR_RED);
    }
}

function setPlayerHealth(admin, targetName, health) {
    let target = findPlayer(targetName);
    if (target && target.player) {
        target.player.health = health;
        messageClient("[ADMIN] Set " + target.name + "'s health to " + health, admin, COLOUR_GREEN);
    } else {
        messageClient("[ADMIN] Player not found: " + targetName, admin, COLOUR_RED);
    }
}

function setPlayerArmour(admin, targetName, armour) {
    let target = findPlayer(targetName);
    if (target && target.player) {
        target.player.armour = armour;
        messageClient("[ADMIN] Set " + target.name + "'s armour to " + armour, admin, COLOUR_GREEN);
    } else {
        messageClient("[ADMIN] Player not found: " + targetName, admin, COLOUR_RED);
    }
}

function explodePlayer(admin, targetName) {
    let target = findPlayer(targetName);
    if (target && target.player) {
        let pos = target.player.position;
        gta.createExplosion(pos, 0, 10.0);
        message("[ADMIN] " + target.name + " was exploded by " + admin.name, COLOUR_RED);
        console.log("[Admin] " + admin.name + " exploded " + target.name);
    } else {
        messageClient("[ADMIN] Player not found: " + targetName, admin, COLOUR_RED);
    }
}

function showAdmins(client) {
    messageClient("=== ONLINE ADMINS ===", client, COLOUR_ORANGE);
    let clients = getClients();
    let onlineAdmins = [];

    for (let i = 0; i < clients.length; i++) {
        if (isAdmin(clients[i])) {
            onlineAdmins.push(clients[i].name);
        }
    }

    if (onlineAdmins.length > 0) {
        messageClient(onlineAdmins.join(", "), client, COLOUR_GREEN);
    } else {
        messageClient("No admins online", client, COLOUR_GREY);
    }
}

function reportPlayer(client, reportMessage) {
    let clients = getClients();
    console.log("[Report] " + client.name + ": " + reportMessage);

    for (let i = 0; i < clients.length; i++) {
        if (isAdmin(clients[i])) {
            messageClient("[REPORT] " + client.name + ": " + reportMessage, clients[i], COLOUR_ORANGE);
        }
    }

    messageClient("[REPORT] Your report has been sent to admins", client, COLOUR_GREEN);
}

function showAdminHelp(client) {
    messageClient("=== ADMIN COMMANDS ===", client, COLOUR_ORANGE);
    messageClient("/kick <player> [reason] - Kick a player", client, COLOUR_GREY);
    messageClient("/ban <player> [reason] - Ban a player", client, COLOUR_GREY);
    messageClient("/unban <player> - Unban a player", client, COLOUR_GREY);
    messageClient("/mute <player> - Mute a player", client, COLOUR_GREY);
    messageClient("/unmute <player> - Unmute a player", client, COLOUR_GREY);
    messageClient("/freeze <player> - Freeze a player", client, COLOUR_GREY);
    messageClient("/unfreeze <player> - Unfreeze a player", client, COLOUR_GREY);
    messageClient("/slap <player> - Slap a player", client, COLOUR_GREY);
    messageClient("/goto <player> - Teleport to a player", client, COLOUR_GREY);
    messageClient("/bring <player> - Bring a player to you", client, COLOUR_GREY);
    messageClient("/announce <msg> - Server announcement", client, COLOUR_GREY);
    messageClient("/setadmin <player> - Grant admin rights", client, COLOUR_GREY);
    messageClient("/getip <player> - Get player's IP", client, COLOUR_GREY);
    messageClient("/sethealth <player> <hp> - Set health", client, COLOUR_GREY);
    messageClient("/setarmour <player> <armor> - Set armour", client, COLOUR_GREY);
    messageClient("/explode <player> - Explode a player", client, COLOUR_GREY);
}

console.log("[Admin] Server script loaded!");
