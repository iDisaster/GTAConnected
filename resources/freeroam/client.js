// ============================================================================
// FREEROAM RESOURCE - Client Side
// Handles camera fade, HUD elements, and client-side features
// ============================================================================

// When the resource starts on client
addEventHandler("OnResourceStart", function(event, resource) {
    console.log("[Freeroam] Client resource started");
});

// When local player spawns
addEventHandler("OnLocalPlayerSpawn", function(event) {
    console.log("[Freeroam] Local player spawned");

    // Fade in the camera
    gta.fadeCamera(true, 1.0);

    // Show welcome message
    gta.showMessage("Welcome to Liberty City!", 5000);
});

// Process event for continuous updates
addEventHandler("OnProcess", function(event) {
    // Can be used for HUD updates, etc.
});

// When player enters a vehicle
addEventHandler("OnPedEnterVehicle", function(event, ped, vehicle, seat) {
    if (ped == localPlayer) {
        console.log("[Freeroam] Player entered vehicle");
    }
});

// When player exits a vehicle
addEventHandler("OnPedExitVehicle", function(event, ped, vehicle, seat) {
    if (ped == localPlayer) {
        console.log("[Freeroam] Player exited vehicle");
    }
});

console.log("[Freeroam] Client script loaded!");
