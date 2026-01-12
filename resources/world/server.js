// ============================================================================
// WORLD RESOURCE - Server Side
// Handles weather, time, and world environment controls
// ============================================================================

// Color constants using toColour for integer format
const COLOUR_WORLD = toColour(100, 200, 255, 255);
const COLOUR_ORANGE = toColour(255, 200, 100, 255);
const COLOUR_ERROR = toColour(255, 100, 100, 255);
const COLOUR_GRAY = toColour(200, 200, 200, 255);

// GTA IV Weather Types
const weatherTypes = {
    0: "Extra Sunny",
    1: "Sunny",
    2: "Sunny Windy",
    3: "Cloudy",
    4: "Raining",
    5: "Drizzle",
    6: "Foggy",
    7: "Thunder",
    8: "Extra Sunny 2",
    9: "Sunny Windy 2"
};

// World state
let worldState = {
    weather: 1,
    hour: 12,
    minute: 0,
    timeFrozen: false,
    weatherLocked: false
};

// Time sync interval
let timeInterval = null;

// ============================================================================
// EVENTS
// ============================================================================

addEventHandler("OnResourceStart", function(event, resource) {
    console.log("[World] Resource started");

    // Start time synchronization (advances time every real second = 1 game minute)
    timeInterval = setInterval(function() {
        if (!worldState.timeFrozen) {
            advanceTime();
        }
    }, 1000); // 1 second = 1 game minute

    console.log("[World] Time synchronization started");
});

addEventHandler("OnResourceStop", function(event, resource) {
    if (timeInterval) {
        clearInterval(timeInterval);
    }
    console.log("[World] Resource stopped");
});

addEventHandler("OnPlayerJoined", function(event, client) {
    // Sync world state to new player
    syncWorldToClient(client);
});

addEventHandler("OnPlayerCommand", function(event, client, command, params) {
    let cmd = command.toLowerCase();

    switch(cmd) {
        case "weather":
        case "setweather":
            if (params && params.length > 0) {
                let weatherId = parseInt(params);
                if (!isNaN(weatherId) && weatherId >= 0 && weatherId <= 9) {
                    setWeather(weatherId);
                    message("[WORLD] Weather changed to: " + weatherTypes[weatherId], COLOUR_WORLD);
                } else {
                    messageClient("[WORLD] Invalid weather ID (0-9)", client, COLOUR_ERROR);
                }
            } else {
                messageClient("[USAGE] /weather <0-9>", client, COLOUR_ORANGE);
                showWeatherList(client);
            }
            break;

        case "time":
        case "settime":
            if (params && params.length > 0) {
                let parts = params.split(":");
                let hour = parseInt(parts[0]);
                let minute = parts.length > 1 ? parseInt(parts[1]) : 0;

                if (!isNaN(hour) && hour >= 0 && hour <= 23) {
                    setTime(hour, minute);
                    message("[WORLD] Time changed to: " + formatTime(hour, minute), COLOUR_WORLD);
                } else {
                    messageClient("[WORLD] Invalid time (0-23 hours)", client, COLOUR_ERROR);
                }
            } else {
                messageClient("[USAGE] /time <hour> or /time <hour:minute>", client, COLOUR_ORANGE);
            }
            break;

        case "morning":
            setTime(8, 0);
            message("[WORLD] Time set to morning (8:00)", COLOUR_WORLD);
            break;

        case "noon":
        case "midday":
            setTime(12, 0);
            message("[WORLD] Time set to noon (12:00)", COLOUR_WORLD);
            break;

        case "evening":
            setTime(18, 0);
            message("[WORLD] Time set to evening (18:00)", COLOUR_WORLD);
            break;

        case "night":
        case "midnight":
            setTime(0, 0);
            message("[WORLD] Time set to midnight (0:00)", COLOUR_WORLD);
            break;

        case "sunny":
            setWeather(1);
            message("[WORLD] Weather set to Sunny", COLOUR_WORLD);
            break;

        case "cloudy":
            setWeather(3);
            message("[WORLD] Weather set to Cloudy", COLOUR_WORLD);
            break;

        case "rain":
        case "rainy":
            setWeather(4);
            message("[WORLD] Weather set to Raining", COLOUR_WORLD);
            break;

        case "thunder":
        case "storm":
            setWeather(7);
            message("[WORLD] Weather set to Thunder", COLOUR_WORLD);
            break;

        case "foggy":
        case "fog":
            setWeather(6);
            message("[WORLD] Weather set to Foggy", COLOUR_WORLD);
            break;

        case "freezetime":
        case "stoptime":
            worldState.timeFrozen = !worldState.timeFrozen;
            let status = worldState.timeFrozen ? "frozen" : "unfrozen";
            message("[WORLD] Time has been " + status, COLOUR_WORLD);
            break;

        case "gettime":
            messageClient("[WORLD] Current time: " + formatTime(worldState.hour, worldState.minute), client, COLOUR_WORLD);
            break;

        case "getweather":
            messageClient("[WORLD] Current weather: " + weatherTypes[worldState.weather] + " (" + worldState.weather + ")", client, COLOUR_WORLD);
            break;

        case "weatherlist":
        case "weathers":
            showWeatherList(client);
            break;

        case "randomweather":
            let randomWeather = Math.floor(Math.random() * 10);
            setWeather(randomWeather);
            message("[WORLD] Random weather: " + weatherTypes[randomWeather], COLOUR_WORLD);
            break;
    }
});

// ============================================================================
// FUNCTIONS
// ============================================================================

function setWeather(weatherId) {
    worldState.weather = weatherId;
    gta.weather = weatherId;
    console.log("[World] Weather changed to: " + weatherTypes[weatherId]);
}

function setTime(hour, minute) {
    worldState.hour = hour;
    worldState.minute = minute || 0;
    gta.time = [hour, worldState.minute];
    console.log("[World] Time changed to: " + formatTime(hour, worldState.minute));
}

function advanceTime() {
    worldState.minute++;
    if (worldState.minute >= 60) {
        worldState.minute = 0;
        worldState.hour++;
        if (worldState.hour >= 24) {
            worldState.hour = 0;
        }
    }
    gta.time = [worldState.hour, worldState.minute];
}

function syncWorldToClient(client) {
    // Client will receive the global gta.time and gta.weather
    console.log("[World] Synced world state to " + client.name);
}

function formatTime(hour, minute) {
    let h = hour.toString().padStart(2, "0");
    let m = minute.toString().padStart(2, "0");
    return h + ":" + m;
}

function showWeatherList(client) {
    messageClient("=== WEATHER TYPES ===", client, COLOUR_ORANGE);
    for (let id in weatherTypes) {
        messageClient(id + " - " + weatherTypes[id], client, COLOUR_GRAY);
    }
}

// Polyfill for padStart if not available
if (!String.prototype.padStart) {
    String.prototype.padStart = function(targetLength, padString) {
        targetLength = targetLength >> 0;
        padString = String(padString || ' ');
        if (this.length >= targetLength) {
            return String(this);
        }
        targetLength = targetLength - this.length;
        if (targetLength > padString.length) {
            padString += padString.repeat(targetLength / padString.length);
        }
        return padString.slice(0, targetLength) + String(this);
    };
}

console.log("[World] Server script loaded!");
