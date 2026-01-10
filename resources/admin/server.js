// ============================================================================
// ADMIN RESOURCE - Server Side
// Handles server moderation, kick/ban, and admin commands
// ============================================================================

// Admin list - add player names or account identifiers here
const admins = [
    "Admin",
    "Owner",
    "ServerOwner"
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
            // Kick banned player
            client.disconnect("You are banned from this server: " + bannedPlayers[i].reason);
            return;
        }
    }
});

addEventHandler("OnPlayerJoined", function(event, client) {
    if (isAdmin(client)) {
        messageClient("[ADMIN] You have administrator privileges", client, [255, 100, 100, 255]);
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
                messageClient("[USAGE] /report <message>", client, [255, 200, 100, 255]);
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
                messageClient("[USAGE] /kick <player> [reason]", client, [255, 200, 100, 255]);
            }
            break;

        case "ban":
            if (params && params.length > 0) {
                let parts = params.split(" ");
                let targetName = parts[0];
                let reason = parts.slice(1).join(" ") || "No reason specified";
                banPlayer(client, targetName, reason);
            } else {
                messageClient("[USAGE] /ban <player> [reason]", client, [255, 200, 100, 255]);
            }
            break;

        case "unban":
            if (params && params.length > 0) {
                unbanPlayer(client, params);
            } else {
                messageClient("[USAGE] /unban <player>", client, [255, 200, 100, 255]);
            }
            break;

        case "mute":
            if (params && params.length > 0) {
                mutePlayer(client, params);
            } else {
                messageClient("[USAGE] /mute <player>", client, [255, 200, 100, 255]);
            }
            break;

        case "unmute":
            if (params && params.length > 0) {
                unmutePlayer(client, params);
            } else {
                messageClient("[USAGE] /unmute <player>", client, [255, 200, 100, 255]);
            }
            break;

        case "freeze":
            if (params && params.length > 0) {
                freezePlayer(client, params, true);
            } else {
                messageClient("[USAGE] /freeze <player>", client, [255, 200, 100, 255]);
            }
            break;

        case "unfreeze":
            if (params && params.length > 0) {
                freezePlayer(client, params, false);
            } else {
                messageClient("[USAGE] /unfreeze <player>", client, [255, 200, 100, 255]);
            }
            break;

        case "slap":
            if (params && params.length > 0) {
                slapPlayer(client, params);
            } else {
                messageClient("[USAGE] /slap <player>", client, [255, 200, 100, 255]);
            }
            break;

        case "goto":
        case "tpto":
            if (params && params.length > 0) {
                teleportToPlayer(client, params);
            } else {
                messageClient("[USAGE] /goto <player>", client, [255, 200, 100, 255]);
            }
            break;

        case "bring":
        case "tphere":
            if (params && params.length > 0) {
                bringPlayer(client, params);
            } else {
                messageClient("[USAGE] /bring <player>", client, [255, 200, 100, 255]);
            }
            break;

        case "announce":
        case "ann":
            if (params && params.length > 0) {
                announce(params);
            } else {
                messageClient("[USAGE] /announce <message>", client, [255, 200, 100, 255]);
            }
            break;

        case "setadmin":
            if (params && params.length > 0) {
                setAdmin(client, params);
            } else {
                messageClient("[USAGE] /setadmin <player>", client, [255, 200, 100, 255]);
            }
            break;

        case "getip":
            if (params && params.length > 0) {
                getPlayerIP(client, params);
            } else {
                messageClient("[USAGE] /getip <player>", client, [255, 200, 100, 255]);
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
                    messageClient("[USAGE] /sethealth <player> <health>", client, [255, 200, 100, 255]);
                }
            }
            break;

        case "setarmour":
            if (params && params.length > 0) {
                let parts = params.split(" ");
                if (parts.length >= 2) {
                    setPlayerArmour(client, parts[0], parseInt(parts[1]));
                } else {
                    messageClient("[USAGE] /setarmour <player> <armour>", client, [255, 200, 100, 255]);
                }
            }
            break;

        case "explode":
            if (params && params.length > 0) {
                explodePlayer(client, params);
            } else {
                messageClient("[USAGE] /explode <player>", client, [255, 200, 100, 255]);
            }
            break;
    }
});

// Check if player is muted before chat
addEventHandler("OnPlayerChat", function(event, client, messageText) {
    if (isMuted(client)) {
        messageClient("[ADMIN] You are muted and cannot chat!", client, [255, 100, 100, 255]);
        return false; // Cancel the chat
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
        message("[ADMIN] " + target.name + " was kicked by " + admin.name + ": " + reason, [255, 100, 100, 255]);
        target.disconnect("Kicked: " + reason);
        console.log("[Admin] " + admin.name + " kicked " + target.name + ": " + reason);
    } else {
        messageClient("[ADMIN] Player not found: " + targetName, admin, [255, 100, 100, 255]);
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

        message("[ADMIN] " + target.name + " was banned by " + admin.name + ": " + reason, [255, 50, 50, 255]);
        target.disconnect("Banned: " + reason);
        console.log("[Admin] " + admin.name + " banned " + target.name + ": " + reason);
    } else {
        messageClient("[ADMIN] Player not found: " + targetName, admin, [255, 100, 100, 255]);
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
        messageClient("[ADMIN] " + targetName + " has been unbanned", admin, [100, 255, 100, 255]);
        console.log("[Admin] " + admin.name + " unbanned " + targetName);
    } else {
        messageClient("[ADMIN] Player not found in ban list: " + targetName, admin, [255, 100, 100, 255]);
    }
}

function mutePlayer(admin, targetName) {
    let target = findPlayer(targetName);
    if (target) {
        if (mutedPlayers.indexOf(target.name) === -1) {
            mutedPlayers.push(target.name);
        }
        message("[ADMIN] " + target.name + " was muted by " + admin.name, [255, 150, 100, 255]);
        console.log("[Admin] " + admin.name + " muted " + target.name);
    } else {
        messageClient("[ADMIN] Player not found: " + targetName, admin, [255, 100, 100, 255]);
    }
}

function unmutePlayer(admin, targetName) {
    let target = findPlayer(targetName);
    let name = target ? target.name : targetName;

    let index = mutedPlayers.indexOf(name);
    if (index !== -1) {
        mutedPlayers.splice(index, 1);
        message("[ADMIN] " + name + " was unmuted by " + admin.name, [100, 255, 100, 255]);
        console.log("[Admin] " + admin.name + " unmuted " + name);
    } else {
        messageClient("[ADMIN] Player is not muted: " + targetName, admin, [255, 100, 100, 255]);
    }
}

function freezePlayer(admin, targetName, freeze) {
    let target = findPlayer(targetName);
    if (target && target.player) {
        target.player.frozen = freeze;
        let status = freeze ? "frozen" : "unfrozen";
        message("[ADMIN] " + target.name + " was " + status + " by " + admin.name, [255, 200, 100, 255]);
        console.log("[Admin] " + admin.name + " " + status + " " + target.name);
    } else {
        messageClient("[ADMIN] Player not found: " + targetName, admin, [255, 100, 100, 255]);
    }
}

function slapPlayer(admin, targetName) {
    let target = findPlayer(targetName);
    if (target && target.player) {
        let pos = target.player.position;
        target.player.position = [pos[0], pos[1], pos[2] + 5]; // Launch up
        target.player.health -= 10;
        message("[ADMIN] " + target.name + " was slapped by " + admin.name, [255, 200, 100, 255]);
        console.log("[Admin] " + admin.name + " slapped " + target.name);
    } else {
        messageClient("[ADMIN] Player not found: " + targetName, admin, [255, 100, 100, 255]);
    }
}

function teleportToPlayer(admin, targetName) {
    let target = findPlayer(targetName);
    if (target && target.player && admin.player) {
        let pos = target.player.position;
        admin.player.position = [pos[0] + 2, pos[1], pos[2]];
        messageClient("[ADMIN] Teleported to " + target.name, admin, [100, 255, 100, 255]);
        console.log("[Admin] " + admin.name + " teleported to " + target.name);
    } else {
        messageClient("[ADMIN] Player not found: " + targetName, admin, [255, 100, 100, 255]);
    }
}

function bringPlayer(admin, targetName) {
    let target = findPlayer(targetName);
    if (target && target.player && admin.player) {
        let pos = admin.player.position;
        target.player.position = [pos[0] + 2, pos[1], pos[2]];
        messageClient("[ADMIN] " + admin.name + " brought you to them", target, [255, 200, 100, 255]);
        messageClient("[ADMIN] Brought " + target.name + " to you", admin, [100, 255, 100, 255]);
        console.log("[Admin] " + admin.name + " brought " + target.name);
    } else {
        messageClient("[ADMIN] Player not found: " + targetName, admin, [255, 100, 100, 255]);
    }
}

function announce(text) {
    message("=================================", [255, 255, 100, 255]);
    message("[ANNOUNCEMENT] " + text, [255, 255, 100, 255]);
    message("=================================", [255, 255, 100, 255]);
    console.log("[Admin] Announcement: " + text);
}

function setAdmin(admin, targetName) {
    let target = findPlayer(targetName);
    if (target) {
        if (admins.indexOf(target.name) === -1) {
            admins.push(target.name);
            messageClient("[ADMIN] You have been granted admin privileges by " + admin.name, target, [100, 255, 100, 255]);
            messageClient("[ADMIN] " + target.name + " is now an admin", admin, [100, 255, 100, 255]);
            console.log("[Admin] " + admin.name + " made " + target.name + " an admin");
        } else {
            messageClient("[ADMIN] " + target.name + " is already an admin", admin, [255, 200, 100, 255]);
        }
    } else {
        messageClient("[ADMIN] Player not found: " + targetName, admin, [255, 100, 100, 255]);
    }
}

function getPlayerIP(admin, targetName) {
    let target = findPlayer(targetName);
    if (target) {
        messageClient("[ADMIN] " + target.name + "'s IP: " + target.ip, admin, [200, 200, 255, 255]);
    } else {
        messageClient("[ADMIN] Player not found: " + targetName, admin, [255, 100, 100, 255]);
    }
}

function setPlayerHealth(admin, targetName, health) {
    let target = findPlayer(targetName);
    if (target && target.player) {
        target.player.health = health;
        messageClient("[ADMIN] Set " + target.name + "'s health to " + health, admin, [100, 255, 100, 255]);
    } else {
        messageClient("[ADMIN] Player not found: " + targetName, admin, [255, 100, 100, 255]);
    }
}

function setPlayerArmour(admin, targetName, armour) {
    let target = findPlayer(targetName);
    if (target && target.player) {
        target.player.armour = armour;
        messageClient("[ADMIN] Set " + target.name + "'s armour to " + armour, admin, [100, 255, 100, 255]);
    } else {
        messageClient("[ADMIN] Player not found: " + targetName, admin, [255, 100, 100, 255]);
    }
}

function explodePlayer(admin, targetName) {
    let target = findPlayer(targetName);
    if (target && target.player) {
        let pos = target.player.position;
        gta.createExplosion(pos, 0, 10.0);
        message("[ADMIN] " + target.name + " was exploded by " + admin.name, [255, 100, 100, 255]);
        console.log("[Admin] " + admin.name + " exploded " + target.name);
    } else {
        messageClient("[ADMIN] Player not found: " + targetName, admin, [255, 100, 100, 255]);
    }
}

function showAdmins(client) {
    messageClient("=== ONLINE ADMINS ===", client, [255, 200, 100, 255]);
    let clients = getClients();
    let onlineAdmins = [];

    for (let i = 0; i < clients.length; i++) {
        if (isAdmin(clients[i])) {
            onlineAdmins.push(clients[i].name);
        }
    }

    if (onlineAdmins.length > 0) {
        messageClient(onlineAdmins.join(", "), client, [100, 255, 100, 255]);
    } else {
        messageClient("No admins online", client, [200, 200, 200, 255]);
    }
}

function reportPlayer(client, reportMessage) {
    let clients = getClients();
    console.log("[Report] " + client.name + ": " + reportMessage);

    // Notify all online admins
    for (let i = 0; i < clients.length; i++) {
        if (isAdmin(clients[i])) {
            messageClient("[REPORT] " + client.name + ": " + reportMessage, clients[i], [255, 200, 100, 255]);
        }
    }

    messageClient("[REPORT] Your report has been sent to admins", client, [100, 255, 100, 255]);
}

function showAdminHelp(client) {
    messageClient("=== ADMIN COMMANDS ===", client, [255, 200, 100, 255]);
    messageClient("/kick <player> [reason] - Kick a player", client, [200, 200, 200, 255]);
    messageClient("/ban <player> [reason] - Ban a player", client, [200, 200, 200, 255]);
    messageClient("/unban <player> - Unban a player", client, [200, 200, 200, 255]);
    messageClient("/mute <player> - Mute a player", client, [200, 200, 200, 255]);
    messageClient("/unmute <player> - Unmute a player", client, [200, 200, 200, 255]);
    messageClient("/freeze <player> - Freeze a player", client, [200, 200, 200, 255]);
    messageClient("/unfreeze <player> - Unfreeze a player", client, [200, 200, 200, 255]);
    messageClient("/slap <player> - Slap a player", client, [200, 200, 200, 255]);
    messageClient("/goto <player> - Teleport to a player", client, [200, 200, 200, 255]);
    messageClient("/bring <player> - Bring a player to you", client, [200, 200, 200, 255]);
    messageClient("/announce <msg> - Server announcement", client, [200, 200, 200, 255]);
    messageClient("/setadmin <player> - Grant admin rights", client, [200, 200, 200, 255]);
    messageClient("/getip <player> - Get player's IP", client, [200, 200, 200, 255]);
    messageClient("/sethealth <player> <hp> - Set health", client, [200, 200, 200, 255]);
    messageClient("/setarmour <player> <armor> - Set armour", client, [200, 200, 200, 255]);
    messageClient("/explode <player> - Explode a player", client, [200, 200, 200, 255]);
}

console.log("[Admin] Server script loaded!");
