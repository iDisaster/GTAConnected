
// ============================================================================
// MD REVOLUTION MOD MENU - Client Side (Trident Style)
// Interactive GUI menu for all players
// Steel Blue / Gold / Orange color scheme with flash effects
// Press F5 to open/close menu, Arrow keys to navigate, Enter to select
// ============================================================================

// Menu state
let menuOpen = false;
let currentMenu = "main";
let selectedIndex = 0;
let menuStack = [];
let scrollOffset = 0;

// Enhanced animation state
let animTime = 0;
let smoothScrollY = 0;
let targetScrollY = 0;
let titlePulse = 0;
let menuOpenAnim = 0;
let selectedPulse = 0;
let glowIntensity = 0;
let colorShift = 0;
let particleTime = 0;
let screenShake = 0;
let flashAlpha = 0;
let currentDescription = "";

// Trident-style header flash effect
let headerFlashTimer = 0;
let headerFlashActive = false;
let headerFlashInterval = 3.0; // Flash every 3 seconds
let headerFlashDuration = 0.15; // Flash lasts 0.15 seconds

// ============================================================================
// THEME SYSTEM
// ============================================================================
let currentTheme = "trident"; // Default theme - Trident style

// Trident-style color scheme
const themes = {
    // Primary Trident theme - Steel Blue with Gold/Orange accents
    trident: {
        primary: { r: 70, g: 130, b: 180 },      // Steel Blue
        accent: { r: 255, g: 200, b: 50 },        // Gold
        highlight: { r: 255, g: 140, b: 0 },      // Orange
        name: "Trident"
    },
    black: { primary: { r: 80, g: 80, b: 80 }, accent: { r: 150, g: 150, b: 150 }, highlight: { r: 200, g: 200, b: 200 }, name: "Black" },
    red: { primary: { r: 200, g: 30, b: 30 }, accent: { r: 255, g: 80, b: 80 }, highlight: { r: 255, g: 120, b: 80 }, name: "Red" },
    blue: { primary: { r: 30, g: 80, b: 200 }, accent: { r: 80, g: 150, b: 255 }, highlight: { r: 100, g: 200, b: 255 }, name: "Blue" },
    green: { primary: { r: 30, g: 160, b: 60 }, accent: { r: 80, g: 220, b: 100 }, highlight: { r: 120, g: 255, b: 120 }, name: "Green" },
    purple: { primary: { r: 120, g: 40, b: 180 }, accent: { r: 180, g: 100, b: 255 }, highlight: { r: 220, g: 150, b: 255 }, name: "Purple" },
    pink: { primary: { r: 200, g: 60, b: 120 }, accent: { r: 255, g: 120, b: 180 }, highlight: { r: 255, g: 180, b: 200 }, name: "Pink" },
    gold: { primary: { r: 180, g: 140, b: 30 }, accent: { r: 255, g: 200, b: 80 }, highlight: { r: 255, g: 220, b: 100 }, name: "Gold" },
    gray: { primary: { r: 100, g: 100, b: 110 }, accent: { r: 160, g: 160, b: 170 }, highlight: { r: 200, g: 200, b: 210 }, name: "Gray" }
};

function getTheme() {
    return themes[currentTheme] || themes.red;
}

// Info bar configuration
let infoBar = {
    height: 50
};

// Item descriptions
const itemDescriptions = {
    // Player Options
    "player_god": "⚡ Makes you invincible - you won't take any damage from bullets, explosions, or falls!",
    "player_noragdoll": "🛡️ Prevents your character from falling down when hit - stay on your feet always!",
    "player_superrun": "🏃 Gives you super-speed running abilities - run faster than normal!",
    "player_neverwanted": "🚫 Removes wanted levels permanently - police won't chase you!",
    "player_addhealth": "💊 Restores your health to maximum - heals all injuries!",
    "player_addarmor": "🛡️ Adds full armor protection - bulletproof vest equipped!",
    "player_wanted": "⭐ Set your wanted level from 0-6 stars - more stars = more police!",
    "player_teleport": "📍 Instantly teleport to any location on the map!",
    
    // Vehicle Options
    "spawn_vehicle": "🚗 Spawn any vehicle instantly - appears right next to you!",
    "veh_repair": "🔧 Fully repairs your current vehicle to 100% condition!",
    "veh_flip": "🔄 Flips your vehicle upright if it's upside down!",
    "veh_delete": "💥 Removes all vehicles you spawned - clean up the streets!",
    "veh_color": "🎨 Changes your vehicle's primary and secondary colors!",
    "veh_god": "🛡️ Makes your current vehicle indestructible - no damage!",
    "veh_neverdirty": "🧼 Keeps your vehicle permanently clean and shiny!",
    "veh_nitro": "🚀 Gives your vehicle instant speed boost - hold accelerator!",
    "veh_drift": "🏁 Enables drift mode - slide around corners like a pro!",
    "veh_rainbow": "🌈 Makes your vehicle cycle through rainbow colors!",
    "veh_neon": "💡 Adds neon underglow effects to your vehicle!",
    "veh_rpg": "💥 Shoots RPG rockets from your vehicle - explosive ammo!",
    "veh_ghost": "👻 Vehicle becomes ghost - pass through everything!",
    "veh_flip": "🔄 Quick vehicle flip - gets you back on track instantly!",
    "veh_repair": "🔧 Instant full repair - no more engine damage!",
    "veh_siren": "🚔 Activates police sirens and emergency lights!",
    
    // Weapon Options
    "weapon_all": "🔫 Gives you every weapon in the game - full arsenal!",
    "weapon_remove": "🚫 Removes all weapons from your inventory - go peaceful!",
    "weapon_rpg": "💥 Gives RPG with unlimited explosive rockets!",
    "weapon_sniper": "🔭 Gives you a powerful sniper rifle for long-range kills!",
    "weapon_shotgun": "🔫 Gives you a shotgun - devastating close range damage!",
    "weapon_machine": "🔫 Gives you a machine gun - rapid fire automatic weapon!",
    "weapon_pistol": "🔫 Gives you a pistol - reliable sidearm weapon!",
    "weapon_explosive": "💣 Makes all your weapons explosive - bullets explode on impact!",
    
    // World Options
    "world_time": "🕐 Changes time of day - set any hour from midnight to midnight!",
    "world_weather": "🌤 Changes weather conditions - control rain, sun, storms!",
    "world_clear_area": "🧹 Clears all objects, vehicles, and peds around you!",
    "world_clear_vehicles": "🚗 Removes all vehicles in the area - clean streets!",
    "world_clear_peds": "🚶 Removes all pedestrians in the area - empty streets!",
    "world_clear_objects": "📦 Removes all objects in the area - clean environment!",
    "world_traffic": "🚦 Enables/disables traffic - control city vehicle flow!",
    "world_traffic_density": "📊 Controls how many vehicles spawn - from empty to heavy traffic!",
    "world_timecycle": "🎨 Applies visual time effects - day/night/cinematic filters!",
    "sky_color": "🌈 Changes sky color to different atmospheric effects!",
    
    // Fun Options
    "fun_launch": "🚀 Launches you high into the sky - super jump effect!",
    "fun_superjump": "🦘 Gives you massive jumping ability - reach rooftops easily!",
    "fun_ragdoll": "🤸 Makes your character go limp and fall - ragdoll physics!",
    "fun_explode": "💥 Creates explosion at your position - destructive fun!",
    "fun_random_explosion": "💣 Spawns random explosions nearby - chaos mode!",
    "fun_car_rain": "🚗 Makes vehicles rain from the sky - vehicle shower!",
    "fun_ped_invasion": "👥 Spawns many pedestrians around you - crowd control!",
    "fun_gang": "👨‍👩‍👧‍👦 Creates a gang of armed NPCs - backup crew!",
    "fun_army": "⚔️ Deploys military forces around you - army protection!",
    "fun_money_rain": "💰 Makes money pickups fall from the sky - get rich!",
    "fun_weapon_shower": "🔫 Drops weapons from above - weapon rain effect!",
    "fun_screen_shake": "📳 Shakes the screen violently - earthquake effect!",
    "fun_flash": "💡 Creates bright camera flash - temporary blindness!",
    "fun_drunk": "🍺 Makes screen wobble - drunk vision effect!",
    "fun_matrix": "💻 Matrix digital rain effect - sci-fi visual!",
    "fun_thermal": "🌡️ Thermal vision mode - see heat signatures!",
    "fun_night": "🌙 Night vision mode - see clearly in darkness!",
    
    // Toggle States
    "godMode": "🛡️ GOD MODE - Complete invincibility and unlimited health!",
    "invincible": "⚡ INVINCIBLE - Cannot be killed or damaged!",
    "superRun": "🏃 SUPER SPEED - Run 3x faster than normal!",
    "noRagdoll": "🚶 NO RAGDOLL - Never fall down, always stay standing!",
    "neverWanted": "🚫 NEVER WANTED - Police ignore you completely!",
    "vehGodMode": "🛡️ VEHICLE GOD MODE - Your car can't be destroyed!",
    "driveOnWater": "🌊 DRIVE ON WATER - Cars float and work on water!",
    "rainbowCar": "🌈 RAINBOW CAR - Vehicle cycles through all colors!",
    "driftMode": "🏁 DRIFT MODE - Easy drifting and skidding!",
    "neonLights": "💡 NEON LIGHTS - Glowing underglow effects!",
    "flyMode": "✈️ FLY MODE - Move freely through the air!",
    "vehShootRPG": "💥 VEHICLE ROCKETS - Your car shoots explosive ammo!",
    "rainbowSky": "🌈 RAINBOW SKY - Sky cycles through rainbow colors!",
    "explosiveAmmo": "💣 EXPLOSIVE AMMO - All bullets create explosions!",
    "moonGravity": "🌙 MOON GRAVITY - Low gravity physics, super jumps!",
    "drunkMode": "🍺 DRUNK MODE - Screen wobbles and controls reversed!",
    "matrixMode": "💻 MATRIX MODE - Digital rain effect overlay!",
    "thermalVision": "🌡️ THERMAL VISION - See heat signatures in dark!",
    "nightVision": "🌙 NIGHT VISION - Enhanced vision in darkness!",

    // Handling Editor descriptions
    "handling_reset": "🔄 RESET - Restore all handling values to vehicle defaults!",
    "handling_preset": "⚡ PRESET - Apply a pre-configured handling setup instantly!",
    "handling_set": "🎛️ ADJUST - Modify this handling parameter value!",
    "handling_traction_max": "🏎️ TRACTION MAX - Maximum grip your tyres can achieve!",
    "handling_traction_min": "🏎️ TRACTION MIN - Minimum grip when sliding or braking!",
    "handling_traction_bias": "⚖️ TRACTION BIAS - Front vs rear grip distribution!",
    "handling_traction_loss": "💨 TRACTION LOSS - How easily tyres lose grip!",
    "handling_susp_force": "🔧 SUSPENSION FORCE - Spring stiffness for bumps!",
    "handling_susp_height": "📏 SUSPENSION HEIGHT - Ride height of the vehicle!",
    "handling_susp_damp": "🎯 DAMPING - Suspension bounce control!",
    "handling_power": "⚡ ENGINE POWER - Acceleration and torque!",
    "handling_speed": "🚀 TOP SPEED - Maximum velocity limit!",
    "handling_brake": "🛑 BRAKE FORCE - Stopping power of brakes!",
    "handling_mass": "⚖️ MASS - Vehicle weight affects grip and momentum!",
    "handling_com": "🎯 CENTER OF MASS - Affects roll and flip tendency!",
    "handling_steering": "🎮 STEERING - How far wheels can turn!"
};
let matrixEffect = 0;

// Font for text rendering (will be loaded on resource start)
let menuFont = null;
let titleFont = null;

// Menu dimensions in pixels - positioned on right side
const menu = {
    x: 1050,
    y: 100,
    width: 340,
    headerHeight: 60,
    itemHeight: 42,
    footerHeight: 35,
    maxVisibleItems: 11
};

// Player list cache
let playerList = [];

// Vehicle handling values
let handlingMods = {
    grip: 1.0,
    acceleration: 1.0,
    topSpeed: 1.0,
    braking: 1.0
};

// ============================================================================
// HANDLING EDITOR SYSTEM
// ============================================================================
let handlingEditorActive = false;
let handlingEditorAnim = 0;
let handlingValues = {
    // Traction & Grip
    tractionCurveMax: 2.0,
    tractionCurveMin: 1.8,
    tractionBias: 0.5,
    // Suspension
    suspensionForce: 2.0,
    suspensionCompDamp: 1.0,
    suspensionReboundDamp: 1.2,
    suspensionUpperLimit: 0.12,
    suspensionLowerLimit: -0.10,
    suspensionRaise: 0.0,
    // Engine & Speed
    driveForce: 0.25,
    driveInertia: 1.0,
    initialDriveMaxVel: 200.0,
    brakeForce: 0.8,
    // Mass & Weight
    mass: 1500.0,
    centreOfMassZ: 0.0,
    // Handling feel
    steeringLock: 35.0,
    tractionLoss: 0.8
};

// Store original values for reset
let originalHandlingValues = null;

// Visual feedback colors based on values
let tyreGlowColors = { fr: {r:0,g:255,b:100}, fl: {r:0,g:255,b:100}, rr: {r:0,g:255,b:100}, rl: {r:0,g:255,b:100} };
let engineGlow = { r: 255, g: 100, b: 0, intensity: 0 };
let brakeGlow = { r: 255, g: 50, b: 0, intensity: 0 };
let suspensionOffset = 0;
let carRotationAngle = 0;

// Currently selected handling parameter for highlighting
let selectedHandlingParam = "";

// ============================================================================
// MENU DATA STRUCTURE
// ============================================================================

const menuData = {
    main: {
        title: "MD REVOLUTION",
        items: [
            { label: "Self Options", action: "submenu", target: "self" },
            { label: "Vehicle Spawner", action: "submenu", target: "vehicles" },
            { label: "Vehicle Options", action: "submenu", target: "vehicleOptions" },
            { label: "Network Options", action: "submenu", target: "network" },
            { label: "Teleport Locations", action: "submenu", target: "teleport" },
            { label: "World Options", action: "submenu", target: "world" },
            { label: "Weapons", action: "submenu", target: "weapons" },
            { label: "Fun Options", action: "submenu", target: "fun" },
            { label: "--- Settings ---", action: "none" },
            { label: "Mod Menu Theme", action: "submenu", target: "themes" }
        ]
    },

    themes: {
        title: "MOD MENU THEME",
        items: [
            { label: "Trident (Default)", action: "theme", value: "trident" },
            { label: "Black", action: "theme", value: "black" },
            { label: "Red", action: "theme", value: "red" },
            { label: "Blue", action: "theme", value: "blue" },
            { label: "Green", action: "theme", value: "green" },
            { label: "Purple", action: "theme", value: "purple" },
            { label: "Pink", action: "theme", value: "pink" },
            { label: "Gold", action: "theme", value: "gold" },
            { label: "Gray", action: "theme", value: "gray" }
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
            { label: "--- Toggles ---", action: "none" },
            { label: "God Mode", action: "toggle", target: "godMode", state: false },
            { label: "Invincible", action: "toggle", target: "invincible", state: false },
            { label: "Super Run", action: "toggle", target: "superRun", state: false },
            { label: "No Ragdoll", action: "toggle", target: "noRagdoll", state: false },
            { label: "Never Wanted", action: "toggle", target: "neverWanted", state: false },
            { label: "Invisible", action: "toggle", target: "invisible", state: false },
            { label: "Infinite Sprint", action: "toggle", target: "infiniteSprint", state: false },
            { label: "Freeze Position", action: "toggle", target: "freezePlayer", state: false },
            { label: "--- Actions ---", action: "none" },
            { label: "Set On Fire", action: "self_fire" },
            { label: "Clear Tasks", action: "self_cleartasks" },
            { label: "Respawn", action: "self_respawn" },
            { label: "Suicide", action: "self_suicide" },
            { label: "Change Skin", action: "submenu", target: "skins" }
        ]
    },

    skins: {
        title: "PLAYER SKINS",
        items: [
            { label: "--- Story Characters ---", action: "none" },
            { label: "Niko Bellic", action: "skin", value: -1667301416 },
            { label: "Roman Bellic", action: "skin", value: -163448165 },
            { label: "Little Jacob", action: "skin", value: 1936355839 },
            { label: "Brucie Kibbutz", action: "skin", value: -1938475496 },
            { label: "Playboy X", action: "skin", value: 970234525 },
            { label: "Johnny Klebitz", action: "skin", value: -1784875845 },
            { label: "Luis Lopez", action: "skin", value: -1403507487 },
            { label: "--- Male NPCs ---", action: "none" },
            { label: "Police Officer", action: "skin", value: -1320879687 },
            { label: "Doctor", action: "skin", value: 1669579652 },
            { label: "Fireman", action: "skin", value: -335476819 },
            { label: "Security Guard", action: "skin", value: 1581098148 },
            { label: "Businessman", action: "skin", value: -1191636209 },
            { label: "Street Guy", action: "skin", value: -1850653608 },
            { label: "Hobo", action: "skin", value: -1183939691 },
            { label: "Biker", action: "skin", value: 1830507291 },
            { label: "--- Female NPCs ---", action: "none" },
            { label: "Business Woman", action: "skin", value: -1847203044 },
            { label: "Street Woman", action: "skin", value: -2043953294 },
            { label: "Rich Woman", action: "skin", value: -1171014612 },
            { label: "Shop Girl", action: "skin", value: -1611704378 },
            { label: "Nurse", action: "skin", value: 1567728751 },
            { label: "Tourist Woman", action: "skin", value: -1507724086 },
            { label: "Jogger Woman", action: "skin", value: -1813105079 },
            { label: "--- Random Skins ---", action: "none" },
            { label: "Random Skin", action: "skin_random" },
            { label: "Random Male", action: "skin_random_mp_boy" },
            { label: "Random Female", action: "skin_random_mp_girl" }
        ]
    },

    vehicles: {
        title: "VEHICLE SPAWNER",
        items: [
            { label: "Sports Cars", action: "submenu", target: "veh_sports" },
            { label: "Muscle Cars", action: "submenu", target: "veh_muscle" },
            { label: "Sedans", action: "submenu", target: "veh_sedans" },
            { label: "SUVs & Trucks", action: "submenu", target: "veh_suv" },
            { label: "Compacts", action: "submenu", target: "veh_compacts" },
            { label: "Motorcycles", action: "submenu", target: "veh_bikes" },
            { label: "Emergency", action: "submenu", target: "veh_emergency" },
            { label: "Aircraft", action: "submenu", target: "veh_aircraft" },
            { label: "Boats", action: "submenu", target: "veh_boats" },
            { label: "Commercial", action: "submenu", target: "veh_commercial" },
            { label: "Special", action: "submenu", target: "veh_special" },
            { label: "Taxis", action: "submenu", target: "veh_taxis" },
            { label: "--- Vehicle Options ---", action: "none" },
            { label: "Delete My Vehicles", action: "vehicle_delete" },
            { label: "Repair Current", action: "veh_repair" },
            { label: "Flip Current", action: "veh_flip" }
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
            { label: "Super GT", action: "spawn_vehicle", value: "super gt" },
            { label: "Sultan RS", action: "spawn_vehicle", value: "sultan rs" }
        ]
    },

    veh_muscle: {
        title: "MUSCLE CARS",
        items: [
            { label: "Buccaneer", action: "spawn_vehicle", value: "buccaneer" },
            { label: "Dukes", action: "spawn_vehicle", value: "dukes" },
            { label: "Faction", action: "spawn_vehicle", value: "faction" },
            { label: "Ruiner", action: "spawn_vehicle", value: "ruiner" },
            { label: "Sabre", action: "spawn_vehicle", value: "sabre" },
            { label: "Sabre GT", action: "spawn_vehicle", value: "sabregt" },
            { label: "Vigero", action: "spawn_vehicle", value: "vigero" },
            { label: "Phoenix", action: "spawn_vehicle", value: "phoenix" }
        ]
    },

    veh_suv: {
        title: "SUVs & TRUCKS",
        items: [
            { label: "Patriot", action: "spawn_vehicle", value: "patriot" },
            { label: "Cavalcade", action: "spawn_vehicle", value: "cavalcade" },
            { label: "Huntley", action: "spawn_vehicle", value: "huntley" },
            { label: "Landstalker", action: "spawn_vehicle", value: "landstalker" },
            { label: "Rancher", action: "spawn_vehicle", value: "rancher" },
            { label: "Bobcat", action: "spawn_vehicle", value: "bobcat" }
        ]
    },

    veh_bikes: {
        title: "MOTORCYCLES",
        items: [
            { label: "NRG 900", action: "spawn_vehicle", value: "nrg900" },
            { label: "PCJ 600", action: "spawn_vehicle", value: "pcj" },
            { label: "Sanchez", action: "spawn_vehicle", value: "sanchez" },
            { label: "Faggio", action: "spawn_vehicle", value: "faggio" },
            { label: "Freeway", action: "spawn_vehicle", value: "freeway" }
        ]
    },

    veh_emergency: {
        title: "EMERGENCY",
        items: [
            { label: "Police Cruiser", action: "spawn_vehicle", value: "police" },
            { label: "Police Cruiser 2", action: "spawn_vehicle", value: "police2" },
            { label: "FBI Car", action: "spawn_vehicle", value: "fbi" },
            { label: "NOOSE Cruiser", action: "spawn_vehicle", value: "noose" },
            { label: "Ambulance", action: "spawn_vehicle", value: "ambulance" },
            { label: "Fire Truck", action: "spawn_vehicle", value: "firetruk" },
            { label: "Taxi", action: "spawn_vehicle", value: "taxi" },
            { label: "Stretch Limo", action: "spawn_vehicle", value: "stretch" }
        ]
    },

    veh_aircraft: {
        title: "AIRCRAFT",
        items: [
            { label: "Annihilator", action: "spawn_vehicle", value: "annihilator" },
            { label: "Maverick", action: "spawn_vehicle", value: "maverick" },
            { label: "Police Maverick", action: "spawn_vehicle", value: "polmav" },
            { label: "Tour Maverick", action: "spawn_vehicle", value: "tourmav" }
        ]
    },

    veh_boats: {
        title: "BOATS",
        items: [
            { label: "Dinghy", action: "spawn_vehicle", value: "dinghy" },
            { label: "Jetmax", action: "spawn_vehicle", value: "jetmax" },
            { label: "Marquis", action: "spawn_vehicle", value: "marquis" },
            { label: "Predator", action: "spawn_vehicle", value: "predator" },
            { label: "Reefer", action: "spawn_vehicle", value: "reefer" },
            { label: "Squalo", action: "spawn_vehicle", value: "squalo" },
            { label: "Tropic", action: "spawn_vehicle", value: "tropic" },
            { label: "Tuga", action: "spawn_vehicle", value: "tuga" }
        ]
    },

    veh_sedans: {
        title: "SEDANS",
        items: [
            { label: "Admiral", action: "spawn_vehicle", value: "admiral" },
            { label: "Cavalcade", action: "spawn_vehicle", value: "cavalcade" },
            { label: "Cognoscenti", action: "spawn_vehicle", value: "cognoscenti" },
            { label: "Emperor", action: "spawn_vehicle", value: "emperor" },
            { label: "Esperanto", action: "spawn_vehicle", value: "esperanto" },
            { label: "Feroci", action: "spawn_vehicle", value: "feroci" },
            { label: "Feltzer", action: "spawn_vehicle", value: "feltzer" },
            { label: "Intruder", action: "spawn_vehicle", value: "intruder" },
            { label: "Landstalker", action: "spawn_vehicle", value: "landstalker" },
            { label: "Lokus", action: "spawn_vehicle", value: "lokus" },
            { label: "Marbella", action: "spawn_vehicle", value: "marbella" },
            { label: "Merit", action: "spawn_vehicle", value: "merit" },
            { label: "Oracle", action: "spawn_vehicle", value: "oracle" },
            { label: "Pinnacle", action: "spawn_vehicle", value: "pinnacle" },
            { label: "Premiere", action: "spawn_vehicle", value: "premiere" },
            { label: "Presidente", action: "spawn_vehicle", value: "presidente" },
            { label: "Primo", action: "spawn_vehicle", value: "primo" },
            { label: "Rebla", action: "spawn_vehicle", value: "rebla" },
            { label: "Romero", action: "spawn_vehicle", value: "romero" },
            { label: "Schafter", action: "spawn_vehicle", value: "schafter" },
            { label: "Sentinel", action: "spawn_vehicle", value: "sentinel" },
            { label: "Solair", action: "spawn_vehicle", value: "solair" },
            { label: "Stratum", action: "spawn_vehicle", value: "stratum" },
            { label: "Stretch", action: "spawn_vehicle", value: "stretch" },
            { label: "Vincent", action: "spawn_vehicle", value: "vincent" },
            { label: "Virgo", action: "spawn_vehicle", value: "virgo" },
            { label: "Willard", action: "spawn_vehicle", value: "willard" },
            { label: "Washington", action: "spawn_vehicle", value: "washington" }
        ]
    },

    veh_compacts: {
        title: "COMPACTS",
        items: [
            { label: "Blista", action: "spawn_vehicle", value: "blista" },
            { label: "Futo", action: "spawn_vehicle", value: "futo" },
            { label: "Ingot", action: "spawn_vehicle", value: "ingot" },
            { label: "PMP 600", action: "spawn_vehicle", value: "pmp 600" },
            { label: "Sultan RS", action: "spawn_vehicle", value: "sultan rs" }
        ]
    },

    veh_commercial: {
        title: "COMMERCIAL",
        items: [
            { label: "Airtug", action: "spawn_vehicle", value: "airtug" },
            { label: "Benson", action: "spawn_vehicle", value: "benson" },
            { label: "Biff", action: "spawn_vehicle", value: "biff" },
            { label: "Boxville", action: "spawn_vehicle", value: "boxville" },
            { label: "Burrito", action: "spawn_vehicle", value: "burrito" },
            { label: "Burrito 2", action: "spawn_vehicle", value: "burrito2" },
            { label: "Cabby", action: "spawn_vehicle", value: "cabby" },
            { label: "Flatbed", action: "spawn_vehicle", value: "flatbed" },
            { label: "Forklift", action: "spawn_vehicle", value: "forklift" },
            { label: "Mule", action: "spawn_vehicle", value: "mule" },
            { label: "Packer", action: "spawn_vehicle", value: "packer" },
            { label: "Pony", action: "spawn_vehicle", value: "pony" },
            { label: "Speedo", action: "spawn_vehicle", value: "speedo" },
            { label: "Stockade", action: "spawn_vehicle", value: "stockade" },
            { label: "Trashmaster", action: "spawn_vehicle", value: "trashmaster" },
            { label: "Yankee", action: "spawn_vehicle", value: "yankee" }
        ]
    },

    veh_special: {
        title: "SPECIAL VEHICLES",
        items: [
            { label: "Mr Tasty", action: "spawn_vehicle", value: "mr tasty" },
            { label: "Cablecar", action: "spawn_vehicle", value: "cablecar" },
            { label: "Subway", action: "spawn_vehicle", value: "subway" },
            { label: "El Train", action: "spawn_vehicle", value: "el train" }
        ]
    },

    veh_taxis: {
        title: "TAXIS",
        items: [
            { label: "Taxi", action: "spawn_vehicle", value: "taxi" },
            { label: "Taxi 2", action: "spawn_vehicle", value: "taxi2" },
            { label: "Roman's Taxi", action: "spawn_vehicle", value: "roman's taxi" }
        ]
    },

    vehicleOptions: {
        title: "VEHICLE OPTIONS",
        items: [
            { label: "Repair Vehicle", action: "veh_repair" },
            { label: "Flip Vehicle", action: "veh_flip" },
            { label: "Vehicle Colors", action: "submenu", target: "veh_colors" },
            { label: "Handling Editor", action: "submenu", target: "handlingEditor" },
            { label: "God Mode", action: "toggle", target: "vehGodMode", state: false },
            { label: "Nitro Boost", action: "veh_nitro" },
            { label: "Drive On Water", action: "toggle", target: "driveOnWater", state: false },
            { label: "Rainbow Color", action: "toggle", target: "rainbowCar", state: false },
            { label: "Drift Mode", action: "toggle", target: "driftMode", state: false },
            { label: "Neon Lights", action: "submenu", target: "veh_neons" },
            { label: "Fly Mode", action: "toggle", target: "flyMode", state: false },
            { label: "Shoot RPG", action: "toggle", target: "vehShootRPG", state: false },
            { label: "--- Quick Actions ---", action: "none" },
            { label: "Lock Doors", action: "veh_lock" },
            { label: "Unlock Doors", action: "veh_unlock" },
            { label: "Toggle Engine", action: "veh_engine" },
            { label: "Pop Tires", action: "veh_poptires" },
            { label: "Fix Tires", action: "veh_fixtires" }
        ]
    },

    handlingEditor: {
        title: "HANDLING EDITOR",
        items: [
            { label: "--- Presets ---", action: "none" },
            { label: "Reset to Default", action: "handling_reset" },
            { label: "Race Setup", action: "handling_preset", value: "race" },
            { label: "Drift Setup", action: "handling_preset", value: "drift" },
            { label: "Off-Road Setup", action: "handling_preset", value: "offroad" },
            { label: "Low Rider", action: "handling_preset", value: "lowrider" },
            { label: "--- Traction & Grip ---", action: "none" },
            { label: "Traction Max", action: "submenu", target: "handling_traction_max" },
            { label: "Traction Min", action: "submenu", target: "handling_traction_min" },
            { label: "Traction Bias (F/R)", action: "submenu", target: "handling_traction_bias" },
            { label: "Traction Loss", action: "submenu", target: "handling_traction_loss" },
            { label: "--- Suspension ---", action: "none" },
            { label: "Suspension Force", action: "submenu", target: "handling_susp_force" },
            { label: "Suspension Height", action: "submenu", target: "handling_susp_height" },
            { label: "Suspension Damping", action: "submenu", target: "handling_susp_damp" },
            { label: "--- Engine & Speed ---", action: "none" },
            { label: "Engine Power", action: "submenu", target: "handling_power" },
            { label: "Top Speed", action: "submenu", target: "handling_speed" },
            { label: "Brake Force", action: "submenu", target: "handling_brake" },
            { label: "--- Weight & Balance ---", action: "none" },
            { label: "Vehicle Mass", action: "submenu", target: "handling_mass" },
            { label: "Center of Mass", action: "submenu", target: "handling_com" },
            { label: "--- Steering ---", action: "none" },
            { label: "Steering Lock", action: "submenu", target: "handling_steering" }
        ]
    },

    handling_traction_max: {
        title: "TRACTION MAX",
        items: [
            { label: "Ice (0.5)", action: "handling_set", param: "tractionCurveMax", value: 0.5 },
            { label: "Very Low (1.0)", action: "handling_set", param: "tractionCurveMax", value: 1.0 },
            { label: "Low (1.5)", action: "handling_set", param: "tractionCurveMax", value: 1.5 },
            { label: "Default (2.0)", action: "handling_set", param: "tractionCurveMax", value: 2.0 },
            { label: "Medium (2.5)", action: "handling_set", param: "tractionCurveMax", value: 2.5 },
            { label: "High (3.0)", action: "handling_set", param: "tractionCurveMax", value: 3.0 },
            { label: "Very High (3.5)", action: "handling_set", param: "tractionCurveMax", value: 3.5 },
            { label: "Racing Slicks (4.0)", action: "handling_set", param: "tractionCurveMax", value: 4.0 },
            { label: "Glue (5.0)", action: "handling_set", param: "tractionCurveMax", value: 5.0 }
        ]
    },

    handling_traction_min: {
        title: "TRACTION MIN",
        items: [
            { label: "Ice (0.3)", action: "handling_set", param: "tractionCurveMin", value: 0.3 },
            { label: "Very Low (0.8)", action: "handling_set", param: "tractionCurveMin", value: 0.8 },
            { label: "Low (1.2)", action: "handling_set", param: "tractionCurveMin", value: 1.2 },
            { label: "Default (1.8)", action: "handling_set", param: "tractionCurveMin", value: 1.8 },
            { label: "Medium (2.2)", action: "handling_set", param: "tractionCurveMin", value: 2.2 },
            { label: "High (2.8)", action: "handling_set", param: "tractionCurveMin", value: 2.8 },
            { label: "Very High (3.5)", action: "handling_set", param: "tractionCurveMin", value: 3.5 }
        ]
    },

    handling_traction_bias: {
        title: "TRACTION BIAS",
        items: [
            { label: "Full Front (0.0)", action: "handling_set", param: "tractionBias", value: 0.0 },
            { label: "Front Heavy (0.3)", action: "handling_set", param: "tractionBias", value: 0.3 },
            { label: "Balanced (0.5)", action: "handling_set", param: "tractionBias", value: 0.5 },
            { label: "Rear Heavy (0.7)", action: "handling_set", param: "tractionBias", value: 0.7 },
            { label: "Full Rear (1.0)", action: "handling_set", param: "tractionBias", value: 1.0 }
        ]
    },

    handling_traction_loss: {
        title: "TRACTION LOSS",
        items: [
            { label: "No Loss (0.0)", action: "handling_set", param: "tractionLoss", value: 0.0 },
            { label: "Minimal (0.4)", action: "handling_set", param: "tractionLoss", value: 0.4 },
            { label: "Default (0.8)", action: "handling_set", param: "tractionLoss", value: 0.8 },
            { label: "Loose (1.2)", action: "handling_set", param: "tractionLoss", value: 1.2 },
            { label: "Drifty (1.6)", action: "handling_set", param: "tractionLoss", value: 1.6 },
            { label: "Ice Mode (2.0)", action: "handling_set", param: "tractionLoss", value: 2.0 }
        ]
    },

    handling_susp_force: {
        title: "SUSPENSION FORCE",
        items: [
            { label: "Soft (0.5)", action: "handling_set", param: "suspensionForce", value: 0.5 },
            { label: "Comfort (1.0)", action: "handling_set", param: "suspensionForce", value: 1.0 },
            { label: "Default (2.0)", action: "handling_set", param: "suspensionForce", value: 2.0 },
            { label: "Firm (3.0)", action: "handling_set", param: "suspensionForce", value: 3.0 },
            { label: "Sport (4.0)", action: "handling_set", param: "suspensionForce", value: 4.0 },
            { label: "Race (5.0)", action: "handling_set", param: "suspensionForce", value: 5.0 },
            { label: "Rock Solid (8.0)", action: "handling_set", param: "suspensionForce", value: 8.0 }
        ]
    },

    handling_susp_height: {
        title: "SUSPENSION HEIGHT",
        items: [
            { label: "Slammed (-0.15)", action: "handling_set", param: "suspensionRaise", value: -0.15 },
            { label: "Low (-0.10)", action: "handling_set", param: "suspensionRaise", value: -0.10 },
            { label: "Lowered (-0.05)", action: "handling_set", param: "suspensionRaise", value: -0.05 },
            { label: "Default (0.0)", action: "handling_set", param: "suspensionRaise", value: 0.0 },
            { label: "Raised (0.05)", action: "handling_set", param: "suspensionRaise", value: 0.05 },
            { label: "High (0.10)", action: "handling_set", param: "suspensionRaise", value: 0.10 },
            { label: "Off-Road (0.15)", action: "handling_set", param: "suspensionRaise", value: 0.15 },
            { label: "Monster (0.25)", action: "handling_set", param: "suspensionRaise", value: 0.25 }
        ]
    },

    handling_susp_damp: {
        title: "SUSPENSION DAMPING",
        items: [
            { label: "Bouncy (0.3)", action: "handling_set", param: "suspensionCompDamp", value: 0.3 },
            { label: "Soft (0.6)", action: "handling_set", param: "suspensionCompDamp", value: 0.6 },
            { label: "Default (1.0)", action: "handling_set", param: "suspensionCompDamp", value: 1.0 },
            { label: "Sport (1.5)", action: "handling_set", param: "suspensionCompDamp", value: 1.5 },
            { label: "Race (2.0)", action: "handling_set", param: "suspensionCompDamp", value: 2.0 },
            { label: "Stiff (3.0)", action: "handling_set", param: "suspensionCompDamp", value: 3.0 }
        ]
    },

    handling_power: {
        title: "ENGINE POWER",
        items: [
            { label: "Weak (0.10)", action: "handling_set", param: "driveForce", value: 0.10 },
            { label: "Low (0.18)", action: "handling_set", param: "driveForce", value: 0.18 },
            { label: "Default (0.25)", action: "handling_set", param: "driveForce", value: 0.25 },
            { label: "Tuned (0.35)", action: "handling_set", param: "driveForce", value: 0.35 },
            { label: "Sport (0.45)", action: "handling_set", param: "driveForce", value: 0.45 },
            { label: "Super (0.60)", action: "handling_set", param: "driveForce", value: 0.60 },
            { label: "Hyper (0.80)", action: "handling_set", param: "driveForce", value: 0.80 },
            { label: "Rocket (1.20)", action: "handling_set", param: "driveForce", value: 1.20 }
        ]
    },

    handling_speed: {
        title: "TOP SPEED",
        items: [
            { label: "Slow (100)", action: "handling_set", param: "initialDriveMaxVel", value: 100.0 },
            { label: "City (140)", action: "handling_set", param: "initialDriveMaxVel", value: 140.0 },
            { label: "Default (200)", action: "handling_set", param: "initialDriveMaxVel", value: 200.0 },
            { label: "Fast (250)", action: "handling_set", param: "initialDriveMaxVel", value: 250.0 },
            { label: "Super (300)", action: "handling_set", param: "initialDriveMaxVel", value: 300.0 },
            { label: "Hyper (400)", action: "handling_set", param: "initialDriveMaxVel", value: 400.0 },
            { label: "Insane (500)", action: "handling_set", param: "initialDriveMaxVel", value: 500.0 }
        ]
    },

    handling_brake: {
        title: "BRAKE FORCE",
        items: [
            { label: "Weak (0.3)", action: "handling_set", param: "brakeForce", value: 0.3 },
            { label: "Low (0.5)", action: "handling_set", param: "brakeForce", value: 0.5 },
            { label: "Default (0.8)", action: "handling_set", param: "brakeForce", value: 0.8 },
            { label: "Strong (1.2)", action: "handling_set", param: "brakeForce", value: 1.2 },
            { label: "Race (1.6)", action: "handling_set", param: "brakeForce", value: 1.6 },
            { label: "Ceramic (2.0)", action: "handling_set", param: "brakeForce", value: 2.0 },
            { label: "Instant Stop (3.0)", action: "handling_set", param: "brakeForce", value: 3.0 }
        ]
    },

    handling_mass: {
        title: "VEHICLE MASS",
        items: [
            { label: "Feather (500)", action: "handling_set", param: "mass", value: 500.0 },
            { label: "Light (1000)", action: "handling_set", param: "mass", value: 1000.0 },
            { label: "Default (1500)", action: "handling_set", param: "mass", value: 1500.0 },
            { label: "Heavy (2000)", action: "handling_set", param: "mass", value: 2000.0 },
            { label: "Truck (3000)", action: "handling_set", param: "mass", value: 3000.0 },
            { label: "Tank (5000)", action: "handling_set", param: "mass", value: 5000.0 }
        ]
    },

    handling_com: {
        title: "CENTER OF MASS",
        items: [
            { label: "Very Low (-0.3)", action: "handling_set", param: "centreOfMassZ", value: -0.3 },
            { label: "Low (-0.15)", action: "handling_set", param: "centreOfMassZ", value: -0.15 },
            { label: "Default (0.0)", action: "handling_set", param: "centreOfMassZ", value: 0.0 },
            { label: "High (0.15)", action: "handling_set", param: "centreOfMassZ", value: 0.15 },
            { label: "Very High (0.3)", action: "handling_set", param: "centreOfMassZ", value: 0.3 }
        ]
    },

    handling_steering: {
        title: "STEERING LOCK",
        items: [
            { label: "Tight (25)", action: "handling_set", param: "steeringLock", value: 25.0 },
            { label: "Default (35)", action: "handling_set", param: "steeringLock", value: 35.0 },
            { label: "Loose (45)", action: "handling_set", param: "steeringLock", value: 45.0 },
            { label: "Wide (55)", action: "handling_set", param: "steeringLock", value: 55.0 },
            { label: "Extreme (70)", action: "handling_set", param: "steeringLock", value: 70.0 }
        ]
    },

    veh_neons: {
        title: "NEON LIGHTS",
        items: [
            { label: "Toggle Neons", action: "toggle", target: "neonLights", state: false },
            { label: "Red Neons", action: "neon_color", value: { r: 255, g: 0, b: 0 } },
            { label: "Blue Neons", action: "neon_color", value: { r: 0, g: 100, b: 255 } },
            { label: "Green Neons", action: "neon_color", value: { r: 0, g: 255, b: 0 } },
            { label: "Purple Neons", action: "neon_color", value: { r: 255, g: 0, b: 255 } },
            { label: "Pink Neons", action: "neon_color", value: { r: 255, g: 100, b: 200 } },
            { label: "Yellow Neons", action: "neon_color", value: { r: 255, g: 255, b: 0 } },
            { label: "White Neons", action: "neon_color", value: { r: 255, g: 255, b: 255 } },
            { label: "Cyan Neons", action: "neon_color", value: { r: 0, g: 255, b: 255 } },
            { label: "Orange Neons", action: "neon_color", value: { r: 255, g: 150, b: 0 } }
        ]
    },

    veh_colors: {
        title: "VEHICLE COLORS",
        items: [
            { label: "Black", action: "veh_color", value: [0, 0] },
            { label: "White", action: "veh_color", value: [18, 18] },
            { label: "Dark Gray", action: "veh_color", value: [4, 4] },
            { label: "Light Gray", action: "veh_color", value: [8, 8] },
            { label: "Silver", action: "veh_color", value: [12, 12] },
            { label: "Red", action: "veh_color", value: [27, 27] },
            { label: "Dark Red", action: "veh_color", value: [28, 28] },
            { label: "Candy Red", action: "veh_color", value: [30, 30] },
            { label: "Orange", action: "veh_color", value: [36, 36] },
            { label: "Yellow", action: "veh_color", value: [89, 89] },
            { label: "Bright Yellow", action: "veh_color", value: [91, 91] },
            { label: "Green", action: "veh_color", value: [50, 50] },
            { label: "Dark Green", action: "veh_color", value: [52, 52] },
            { label: "Lime Green", action: "veh_color", value: [55, 55] },
            { label: "Blue", action: "veh_color", value: [62, 62] },
            { label: "Dark Blue", action: "veh_color", value: [64, 64] },
            { label: "Light Blue", action: "veh_color", value: [73, 73] },
            { label: "Bright Blue", action: "veh_color", value: [82, 82] },
            { label: "Purple", action: "veh_color", value: [99, 99] },
            { label: "Pink", action: "veh_color", value: [100, 100] },
            { label: "Hot Pink", action: "veh_color", value: [101, 101] },
            { label: "Brown", action: "veh_color", value: [45, 45] },
            { label: "Beige", action: "veh_color", value: [44, 44] },
            { label: "Gold", action: "veh_color", value: [37, 37] },
            { label: "--- Two Tone ---", action: "none" },
            { label: "Black/Red", action: "veh_color", value: [0, 27] },
            { label: "Black/White", action: "veh_color", value: [0, 18] },
            { label: "Red/Black", action: "veh_color", value: [27, 0] },
            { label: "Blue/White", action: "veh_color", value: [62, 18] },
            { label: "Green/White", action: "veh_color", value: [50, 18] },
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
            { label: "--- Time Control ---", action: "none" },
            { label: "Dawn (5:00)", action: "world_time", value: 5 },
            { label: "Morning (8:00)", action: "world_time", value: 8 },
            { label: "Noon (12:00)", action: "world_time", value: 12 },
            { label: "Afternoon (15:00)", action: "world_time", value: 15 },
            { label: "Evening (18:00)", action: "world_time", value: 18 },
            { label: "Dusk (20:00)", action: "world_time", value: 20 },
            { label: "Night (0:00)", action: "world_time", value: 0 },
            { label: "Midnight (23:00)", action: "world_time", value: 23 },
            { label: "--- Weather Control ---", action: "none" },
            { label: "Sunny/Clear", action: "world_weather", value: 1 },
            { label: "Cloudy", action: "world_weather", value: 3 },
            { label: "Overcast", action: "world_weather", value: 2 },
            { label: "Light Rain", action: "world_weather", value: 4 },
            { label: "Heavy Rain", action: "world_weather", value: 5 },
            { label: "Thunderstorm", action: "world_weather", value: 7 },
            { label: "Foggy", action: "world_weather", value: 6 },
            { label: "Snowy", action: "world_weather", value: 8 },
            { label: "--- Environment ---(WIP)", action: "none" },
            { label: "Clear Area", action: "world_clear_area" },
            { label: "Clear Vehicles", action: "world_clear_vehicles" },
            { label: "Clear Peds", action: "world_clear_peds" },
            { label: "Clear Objects", action: "world_clear_objects" },
            { label: "Traffic ON", action: "world_traffic", value: true },
            { label: "Traffic OFF", action: "world_traffic", value: false },
            { label: "Set Traffic Density", action: "submenu", target: "world_traffic_density" },
            { label: "--- Visual Effects ---(WIP)", action: "none" },
            { label: "Rainbow Sky", action: "toggle", target: "rainbowSky", state: false },
            { label: "Sky Colors", action: "submenu", target: "sky_colors" },
            { label: "Timecycle Modifier", action: "submenu", target: "world_timecycles" }
        ]
    },

    sky_colors: {
        title: "SKY COLORS (WIP)",
        items: [
            { label: "Default Sky", action: "sky_color", value: 0 },
            { label: "Red Sky", action: "sky_color", value: 1 },
            { label: "Blue Sky", action: "sky_color", value: 2 },
            { label: "Green Sky", action: "sky_color", value: 3 },
            { label: "Purple Sky", action: "sky_color", value: 4 },
            { label: "Orange Sky", action: "sky_color", value: 5 },
            { label: "Pink Sky", action: "sky_color", value: 6 },
            { label: "Yellow Sky", action: "sky_color", value: 7 },
            { label: "Cyan Sky", action: "sky_color", value: 8 },
            { label: "Black Sky", action: "sky_color", value: 9 },
            { label: "White Sky", action: "sky_color", value: 10 }
        ]
    },

    world_traffic_density: {
        title: "TRAFFIC DENSITY(WIP)",
        items: [
            { label: "No Traffic", action: "world_traffic_density", value: 0.0 },
            { label: "Very Light", action: "world_traffic_density", value: 0.2 },
            { label: "Light", action: "world_traffic_density", value: 0.4 },
            { label: "Normal", action: "world_traffic_density", value: 0.6 },
            { label: "Heavy", action: "world_traffic_density", value: 0.8 },
            { label: "Very Heavy", action: "world_traffic_density", value: 1.0 },
            { label: "Maximum", action: "world_traffic_density", value: 1.5 }
        ]
    },

    world_timecycles: {
        title: "TIMECYCLE MODIFIERS",
        items: [
            { label: "Default", action: "world_timecycle", value: "default" },
            { label: "Bright", action: "world_timecycle", value: "bright" },
            { label: "Dark", action: "world_timecycle", value: "dark" },
            { label: "Foggy", action: "world_timecycle", value: "foggy" },
            { label: "Hazy", action: "world_timecycle", value: "hazy" },
            { label: "Night", action: "world_timecycle", value: "night" },
            { label: "Sunset", action: "world_timecycle", value: "sunset" },
            { label: "Sunrise", action: "world_timecycle", value: "sunrise" },
            { label: "Clear Modifier", action: "world_timecycle_clear" }
        ]
    },

    weapons: {
        title: "WEAPONS",
        items: [
            { label: "Get All Weapons", action: "weapon_all" },
            { label: "Remove All Weapons", action: "weapon_remove" },
            { label: "--- Weapon Toggles ---", action: "none" },
            { label: "Unlimited Ammo", action: "toggle", target: "unlimitedAmmo", state: false },
            { label: "No Reload", action: "toggle", target: "noReload", state: false },
            { label: "Explosive Ammo", action: "toggle", target: "explosiveAmmo", state: false },
            { label: "Fire Bullets", action: "toggle", target: "fireBullets", state: false },
            { label: "--- Give Weapon ---", action: "none" },
            { label: "Baseball Bat", action: "weapon", value: 2 },
            { label: "Knife", action: "weapon", value: 3 },
            { label: "Grenades", action: "weapon", value: 4 },
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
            { label: "--- Physics Fun ---", action: "none" },
            { label: "Launch Me Up", action: "fun_launch" },
            { label: "Super Jump", action: "fun_superjump" },
            { label: "Moon Gravity", action: "toggle", target: "moonGravity", state: false },
            { label: "Drunk Mode", action: "toggle", target: "drunkMode", state: false },
            { label: "Spinbot", action: "toggle", target: "spinbot", state: false },
            { label: "Ragdoll", action: "fun_ragdoll" },
            { label: "--- Chaos Mode ---(WIP)", action: "none" },
            { label: "Explode Me", action: "fun_explode" },
            { label: "Random Explosion", action: "fun_random_explosion" },
            { label: "Car Rain", action: "fun_car_rain" },
            { label: "Ped Invasion", action: "fun_ped_invasion" },
            { label: "Weapon Shower", action: "fun_weapon_shower" },
            { label: "--- Spawning ---(WIP)", action: "none" },
            { label: "Spawn Random Ped", action: "fun_ped" },
            { label: "Spawn Gang", action: "fun_gang" },
            { label: "Spawn Army", action: "fun_army" },
            { label: "Spawn Money Rain", action: "fun_money_rain" },
            { label: "--- Visual Effects ---(WIP)", action: "none" },
            { label: "Screen Shake", action: "fun_screen_shake" },
            { label: "Flash Screen", action: "fun_flash" },
            { label: "Matrix Mode", action: "toggle", target: "matrixMode", state: false },
            { label: "Thermal Vision", action: "toggle", target: "thermalVision", state: false },
            { label: "Night Vision", action: "toggle", target: "nightVision", state: false }
        ]
    }
};

// Enhanced toggle states
let toggleStates = {
    godMode: false,
    invincible: false,
    superRun: false,
    noRagdoll: false,
    neverWanted: false,
    invisible: false,
    infiniteSprint: false,
    freezePlayer: false,
    vehGodMode: false,
    driveOnWater: false,
    rainbowCar: false,
    driftMode: false,
    neonLights: false,
    flyMode: false,
    vehShootRPG: false,
    rainbowSky: false,
    explosiveAmmo: false,
    unlimitedAmmo: false,
    noReload: false,
    fireBullets: false,
    moonGravity: false,
    drunkMode: false,
    spinbot: false,
    matrixMode: false,
    thermalVision: false,
    nightVision: false
};

// Neon objects storage
let neonObjects = [];
let neonColor = { r: 255, g: 0, b: 255 }; // Default purple

// Rainbow color cycling
let rainbowHue = 0;
let skyColorIndex = 0;

// Sky colors for selection
const skyColors = [
    { name: "Default", r: -1, g: -1, b: -1 },
    { name: "Red", r: 255, g: 50, b: 50 },
    { name: "Blue", r: 50, g: 100, b: 255 },
    { name: "Green", r: 50, g: 255, b: 100 },
    { name: "Purple", r: 180, g: 50, b: 255 },
    { name: "Orange", r: 255, g: 150, b: 50 },
    { name: "Pink", r: 255, g: 100, b: 200 },
    { name: "Yellow", r: 255, g: 255, b: 100 },
    { name: "Cyan", r: 100, g: 255, b: 255 }
];

// Last shot time for RPG vehicle
let lastVehShot = 0;

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
    // F5 to toggle menu (NOT F6)
    if (key === SDLK_F5) {
        menuOpen = !menuOpen;
        if (menuOpen) {
            currentMenu = "main";
            selectedIndex = 0;
            scrollOffset = 0;
            menuStack = [];
            // Show cursor only - NO second param to avoid pause menu
            gui.showCursor(true);
            // Block phone when menu opens
            try {
                natives.destroyMobilePhone();
            } catch(e) {}
        } else {
            // Hide cursor only
            gui.showCursor(false);
        }
        return;
    }

    // Block phone on ANY key press while menu is open
    if (menuOpen) {
        try {
            natives.destroyMobilePhone();
        } catch(e) {}
    }

    if (!menuOpen) return;

    // Navigation - simple key handling
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
        gui.showCursor(false);
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
        { label: "--- Players (" + playerList.length + ") ---", action: "none" }
    ];
    for (let i = 0; i < playerList.length; i++) {
        items.push({
            label: playerList[i].name + " [ID: " + playerList[i].id + "]",
            action: "teleport_to_player_direct",
            playerData: playerList[i]
        });
    }
    if (playerList.length === 0) {
        items.push({ label: "(No players found)", action: "none" });
        items.push({ label: "(Click Refresh above)", action: "none" });
    }
    return items;
}

// Refresh player list function
function refreshPlayerList() {
    // Request player list from server
    triggerNetworkEvent("ModMenu:GetPlayers");
    showNotification("Refreshing players...");
}

// ============================================================================
// ACTION HANDLING
// ============================================================================

let selectedPlayer = null;

// Update current description
function updateDescription() {
    let items = getCurrentMenuItems();
    let item = items[selectedIndex];
    
    if (!item) {
        currentDescription = "";
        return;
    }

    // Get description based on action or target
    if (item.action === "toggle") {
        currentDescription = itemDescriptions[item.target] || "";
    } else if (itemDescriptions[item.action]) {
        currentDescription = itemDescriptions[item.action] || "";
    } else if (itemDescriptions[item.value]) {
        currentDescription = itemDescriptions[item.value] || "";
    } else {
        currentDescription = "";
    }
}

function selectItem() {
    let items = getCurrentMenuItems();
    let item = items[selectedIndex];
    if (!item || item.action === "none") return;

    // Update description before handling action
    updateDescription();

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

                // Auto-refresh player list when entering network menu
                if (item.target === "network") {
                    refreshPlayerList();
                }

                // Activate handling editor visualization when entering handling menus
                if (item.target === "handlingEditor" || item.target.startsWith("handling_")) {
                    handlingEditorActive = true;
                    // Highlight the relevant parameter in the visualization
                    if (item.target.includes("traction")) {
                        selectedHandlingParam = "traction";
                    } else if (item.target.includes("susp")) {
                        selectedHandlingParam = "suspension";
                    } else if (item.target.includes("power") || item.target.includes("speed")) {
                        selectedHandlingParam = "engine";
                    } else if (item.target.includes("brake")) {
                        selectedHandlingParam = "brakes";
                    } else if (item.target.includes("mass") || item.target.includes("com")) {
                        selectedHandlingParam = "weight";
                    } else if (item.target.includes("steering")) {
                        selectedHandlingParam = "steering";
                    } else {
                        selectedHandlingParam = "";
                    }
                }
            }
            break;

        case "toggle":
            toggleStates[item.target] = !toggleStates[item.target];
            item.state = toggleStates[item.target];
            triggerNetworkEvent("ModMenu:Toggle", item.target, toggleStates[item.target]);
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

        case "self_fire":
            try {
                natives.startCharFire(localPlayer);
                showNotification("You're on fire!");
            } catch(e) {}
            break;

        case "self_cleartasks":
            try {
                natives.clearCharTasks(localPlayer);
                showNotification("Tasks cleared!");
            } catch(e) {}
            break;

        case "skin":
            triggerNetworkEvent("ModMenu:ChangeSkin", item.value);
            showNotification("Skin changed!");
            break;

        case "skin_random":
            triggerNetworkEvent("ModMenu:ChangeSkin", "random");
            showNotification("Random skin!");
            break;

        case "skin_random_mp_boy":
            triggerNetworkEvent("ModMenu:ChangeSkin", "random_mp_boy");
            showNotification("Random MP Boy!");
            break;

        case "skin_random_mp_girl":
            triggerNetworkEvent("ModMenu:ChangeSkin", "random_mp_girl");
            showNotification("Random MP Girl!");
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

        case "veh_lock":
            if (localPlayer.vehicle) {
                try {
                    natives.lockCarDoors(localPlayer.vehicle, 2);
                    showNotification("Doors locked!");
                } catch(e) {}
            }
            break;

        case "veh_unlock":
            if (localPlayer.vehicle) {
                try {
                    natives.lockCarDoors(localPlayer.vehicle, 1);
                    showNotification("Doors unlocked!");
                } catch(e) {}
            }
            break;

        case "veh_engine":
            if (localPlayer.vehicle) {
                try {
                    let isOn = natives.isCarEngineOn(localPlayer.vehicle);
                    natives.switchCarEngine(localPlayer.vehicle, !isOn);
                    showNotification(isOn ? "Engine off!" : "Engine on!");
                } catch(e) {}
            }
            break;

        case "veh_poptires":
            if (localPlayer.vehicle) {
                try {
                    natives.burstCarTyre(localPlayer.vehicle, 0);
                    natives.burstCarTyre(localPlayer.vehicle, 1);
                    natives.burstCarTyre(localPlayer.vehicle, 2);
                    natives.burstCarTyre(localPlayer.vehicle, 3);
                    showNotification("Tires popped!");
                } catch(e) {}
            }
            break;

        case "veh_fixtires":
            if (localPlayer.vehicle) {
                try {
                    natives.fixCarTyre(localPlayer.vehicle, 0);
                    natives.fixCarTyre(localPlayer.vehicle, 1);
                    natives.fixCarTyre(localPlayer.vehicle, 2);
                    natives.fixCarTyre(localPlayer.vehicle, 3);
                    showNotification("Tires fixed!");
                } catch(e) {}
            }
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

        case "weapon_remove":
            try {
                natives.removeAllCharWeapons(localPlayer);
                showNotification("Weapons removed!");
            } catch(e) {}
            break;

        case "refresh_players":
            refreshPlayerList();
            break;

        case "teleport_to_player":
            if (selectedPlayer) {
                triggerNetworkEvent("ModMenu:TeleportToPlayer", selectedPlayer.id);
                showNotification("Teleporting to " + selectedPlayer.name);
            }
            break;

        case "teleport_to_player_direct":
            if (item.playerData) {
                triggerNetworkEvent("ModMenu:TeleportToPlayer", item.playerData.id);
                showNotification("Teleporting to " + item.playerData.name);
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

        case "neon_color":
            neonColor = item.value;
            showNotification("Neon color: " + item.label.replace(" Neons", ""));
            break;

        case "sky_color":
            skyColorIndex = item.value;
            if (skyColorIndex === 0) {
                // Reset to default
                try {
                    natives.releaseSkybox();
                } catch(e) {}
                showNotification("Default sky");
            } else {
                showNotification("Sky: " + item.value);
            }
            break;

        case "world_clear_area":
            if (localPlayer) {
                try {
                    let pos = localPlayer.position;
                    natives.clearArea(pos.x, pos.y, pos.z, 50.0, true);
                    showNotification("Area cleared!");
                } catch(e) {}
            }
            break;

        case "world_clear_vehicles":
            try {
                let pos = localPlayer ? localPlayer.position : new Vec3(0, 0, 0);
                natives.clearAreaOfCars(pos.x, pos.y, pos.z, 100.0);
                showNotification("Vehicles cleared!");
            } catch(e) {}
            break;

        case "world_clear_peds":
            try {
                let pos = localPlayer ? localPlayer.position : new Vec3(0, 0, 0);
                natives.clearAreaOfChars(pos.x, pos.y, pos.z, 100.0);
                showNotification("Peds cleared!");
            } catch(e) {}
            break;

        case "world_clear_objects":
            try {
                let pos = localPlayer ? localPlayer.position : new Vec3(0, 0, 0);
                natives.clearAreaOfObjects(pos.x, pos.y, pos.z, 100.0);
                showNotification("Objects cleared!");
            } catch(e) {}
            break;

        case "world_traffic":
            try {
                natives.setTrafficEnabled(item.value);
                showNotification("Traffic: " + (item.value ? "ENABLED" : "DISABLED"));
            } catch(e) {}
            break;

        case "world_traffic_density":
            try {
                natives.trafficDensity(item.value);
                showNotification("Traffic density: " + item.value);
            } catch(e) {}
            break;

        case "world_timecycle":
            try {
                if (item.value === "clear") {
                    natives.clearTimecycleModifier();
                    showNotification("Timecycle cleared!");
                } else {
                    natives.setTimecycleModifier(item.value);
                    showNotification("Timecycle: " + item.value);
                }
            } catch(e) {}
            break;

        case "world_timecycle_clear":
            try {
                natives.clearTimecycleModifier();
                showNotification("Timecycle cleared!");
            } catch(e) {}
            break;

        case "fun_superjump":
            if (localPlayer) {
                try {
                    let vel = localPlayer.velocity;
                    vel.z = 15.0;
                    localPlayer.velocity = vel;
                    showNotification("SUPER JUMP!");
                } catch(e) {}
            }
            break;

        case "fun_random_explosion":
            if (localPlayer) {
                try {
                    let pos = localPlayer.position;
                    let offsetX = (Math.random() - 0.5) * 20;
                    let offsetY = (Math.random() - 0.5) * 20;
                    natives.addExplosion(pos.x + offsetX, pos.y + offsetY, pos.z, Math.floor(Math.random() * 26), 5.0, true, false, 1.0);
                    showNotification("Random explosion!");
                } catch(e) {}
            }
            break;

        case "fun_car_rain":
            try {
                let pos = localPlayer ? localPlayer.position : new Vec3(0, 0, 0);
                let carModels = ["infernus", "banshee", "sultan"];
                for (let i = 0; i < 10; i++) {
                    let randomModel = carModels[Math.floor(Math.random() * carModels.length)];
                    let spawnX = pos.x + (Math.random() - 0.5) * 30;
                    let spawnY = pos.y + (Math.random() - 0.5) * 30;
                    let spawnZ = pos.z + 10 + Math.random() * 20;
                    
                    let modelHash = vehicleHashes[randomModel];
                    if (modelHash) {
                        natives.requestModel(modelHash);
                        setTimeout(() => {
                            if (natives.hasModelLoaded(modelHash)) {
                                let car = natives.createCar(modelHash, new Vec3(spawnX, spawnY, spawnZ), true);
                                if (car) {
                                    let vel = new Vec3((Math.random() - 0.5) * 5, (Math.random() - 0.5) * 5, -10);
                                    car.velocity = vel;
                                }
                                natives.markModelAsNoLongerNeeded(modelHash);
                            }
                        }, 500);
                    }
                }
                showNotification("CAR RAIN!");
                screenShake = 1.0;
            } catch(e) {}
            break;

        case "fun_ped_invasion":
            try {
                let pos = localPlayer ? localPlayer.position : new Vec3(0, 0, 0);
                for (let i = 0; i < 20; i++) {
                    let spawnX = pos.x + (Math.random() - 0.5) * 50;
                    let spawnY = pos.y + (Math.random() - 0.5) * 50;
                    let spawnZ = pos.z;
                    
                    let ped = natives.createChar(4, -1, new Vec3(spawnX, spawnY, spawnZ), true);
                    if (ped) {
                        natives.warpCharIntoCar(ped, localPlayer.vehicle);
                    }
                }
                showNotification("PED INVASION!");
                screenShake = 0.5;
            } catch(e) {}
            break;

        case "fun_gang":
            try {
                let pos = localPlayer ? localPlayer.position : new Vec3(0, 0, 0);
                for (let i = 0; i < 8; i++) {
                    let spawnX = pos.x + (Math.random() - 0.5) * 20;
                    let spawnY = pos.y + (Math.random() - 0.5) * 20;
                    let spawnZ = pos.z;
                    let ped = natives.createChar(4, -1, new Vec3(spawnX, spawnY, spawnZ), true);
                    if (ped) {
                        natives.giveWeaponToChar(ped, 14, 500, false); // AK47
                        natives.giveWeaponToChar(ped, 18, 10, false); // RPG
                    }
                }
                showNotification("GANG SPAWNED!");
                screenShake = 0.3;
            } catch(e) {}
            break;

        case "fun_army":
            try {
                let pos = localPlayer ? localPlayer.position : new Vec3(0, 0, 0);
                let armyModels = ["fbi", "police", "nstockade"];
                for (let i = 0; i < 15; i++) {
                    let spawnX = pos.x + (Math.random() - 0.5) * 40;
                    let spawnY = pos.y + (Math.random() - 0.5) * 40;
                    let spawnZ = pos.z;
                    
                    let ped = natives.createChar(4, -1, new Vec3(spawnX, spawnY, spawnZ), true);
                    if (ped) {
                        natives.giveWeaponToChar(ped, 14, 1000, false); // AK47
                        natives.giveWeaponToChar(ped, 16, 100, false); // Sniper
                        natives.giveWeaponToChar(ped, 18, 50, false); // RPG
                    }
                }
                showNotification("ARMY DEPLOYED!");
                screenShake = 0.8;
            } catch(e) {}
            break;

        case "fun_money_rain":
            try {
                let pos = localPlayer ? localPlayer.position : new Vec3(0, 0, 0);
                for (let i = 0; i < 50; i++) {
                    let spawnX = pos.x + (Math.random() - 0.5) * 30;
                    let spawnY = pos.y + (Math.random() - 0.5) * 30;
                    let spawnZ = pos.z + 10 + Math.random() * 30;
                    natives.createMoneyPickup(new Vec3(spawnX, spawnY, spawnZ), 100, true);
                }
                showNotification("MONEY RAIN! $$$");
                flashAlpha = 0.5;
            } catch(e) {}
            break;

        case "fun_weapon_shower":
            try {
                let pos = localPlayer ? localPlayer.position : new Vec3(0, 0, 0);
                let weapons = [5, 6, 9, 12, 14, 16, 18]; // Pistol, Deagle, Shotgun, SMG, AK, Sniper, RPG
                for (let i = 0; i < 30; i++) {
                    let spawnX = pos.x + (Math.random() - 0.5) * 25;
                    let spawnY = pos.y + (Math.random() - 0.5) * 25;
                    let spawnZ = pos.z + 10 + Math.random() * 25;
                    let weaponId = weapons[Math.floor(Math.random() * weapons.length)];
                    natives.createPickup(weaponId, 2, new Vec3(spawnX, spawnY, spawnZ), true);
                }
                showNotification("WEAPON SHOWER!");
                screenShake = 0.4;
            } catch(e) {}
            break;

        case "fun_screen_shake":
            screenShake = 1.5;
            showNotification("SCREEN SHAKE!");
            break;

        case "fun_flash":
            flashAlpha = 1.0;
            showNotification("FLASH!");
            break;

        case "theme":
            currentTheme = item.value;
            showNotification("Theme: " + themes[item.value].name);
            break;

        // ============================================================================
        // HANDLING EDITOR ACTIONS
        // ============================================================================
        case "handling_set":
            if (localPlayer && localPlayer.vehicle) {
                handlingValues[item.param] = item.value;
                selectedHandlingParam = item.param;
                applyHandlingValue(item.param, item.value);
                showNotification(item.param + ": " + item.value);
                // Trigger visual feedback
                updateHandlingVisuals(item.param, item.value);
            } else {
                showNotification("Get in a vehicle first!");
            }
            break;

        case "handling_reset":
            if (localPlayer && localPlayer.vehicle) {
                resetHandlingToDefault();
                showNotification("Handling reset to default!");
            } else {
                showNotification("Get in a vehicle first!");
            }
            break;

        case "handling_preset":
            if (localPlayer && localPlayer.vehicle) {
                applyHandlingPreset(item.value);
                showNotification("Applied: " + item.label);
            } else {
                showNotification("Get in a vehicle first!");
            }
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

addNetworkHandler("ModMenu:PlayerList", function(playerNames, playerIds) {
    playerList = [];

    // Parse pipe-separated strings
    if (playerNames && playerNames.length > 0) {
        let names = playerNames.split("|");
        let ids = playerIds.split("|");

        for (let i = 0; i < names.length; i++) {
            playerList.push({
                name: names[i],
                id: parseInt(ids[i])
            });
        }
    }

    showNotification("Found " + playerList.length + " players");
    console.log("[ModMenu] Player list updated: " + playerList.length + " players");
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

// Execute teleport - with multiple fallback methods
addNetworkHandler("ModMenu:ExecuteTeleport", function(x, y, z) {
    if (!localPlayer) {
        showNotification("Player not ready!");
        return;
    }

    console.log("[ModMenu] Executing teleport to: " + x + ", " + y + ", " + z);

    try {
        // Method 1: Direct position set
        let pos = new Vec3(x, y, z);

        // Check if player is in vehicle
        if (localPlayer.vehicle) {
            // Teleport the vehicle instead
            try {
                localPlayer.vehicle.position = pos;
                showNotification("Teleported (in vehicle)!");
                console.log("[ModMenu] Teleported vehicle successfully");
                return;
            } catch(e) {
                console.log("[ModMenu] Vehicle teleport failed, trying player: " + e);
            }
        }

        // Try direct position assignment
        localPlayer.position = pos;
        showNotification("Teleported!");
        console.log("[ModMenu] Teleported player successfully");
    } catch(e) {
        console.log("[ModMenu] Teleport error: " + e);

        // Method 2: Try using native
        try {
            natives.setCharCoordinates(localPlayer, x, y, z);
            showNotification("Teleported!");
            console.log("[ModMenu] Teleported using native successfully");
        } catch(e2) {
            console.log("[ModMenu] Native teleport also failed: " + e2);
            showNotification("Teleport failed!");
        }
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

// Vehicle model names (cleaned up for proper spawning)
const vehicleModels = [
    // Sports Cars
    "infernus", "turismo", "comet", "banshee", "sultan", "coquette",
    // Muscle Cars  
    "buccaneer", "dukes", "faction", "ruiner", "sabre", "sabregt", "vigero",
    // Sedans
    "admiral", "cavalcade", "cognoscenti", "emperor", "esperanto", "feroci",
    "feltzer", "intruder", "landstalker", "lokus", "marbella", "merit",
    "oracle", "pinnacle", "premiere", "presidente", "primo", "rebla",
    "romero", "schafter", "sentinel", "solair", "stratum", "stretch",
    "vincent", "virgo", "willard", "washington",
    // SUVs & Trucks
    "bobcat", "boxville", "biff", "burrito", "chavos", "dilettante",
    "flatbed", "forklift", "habanero", "huntley", "moonbeam", "mule",
    "packer", "patriot", "perennial", "pony", "rancher", "speedo", 
    "stockade", "trashmaster", "yankee",
    // Compacts
    "blista", "futo", "ingot", "pmp600", "sultanrs",
    // Motorcycles
    "faggio", "hellfury", "nrg900", "pcj600", "sanchez", "zombie",
    // Emergency
    "ambulance", "firetruk", "police", "police2", "police3", "police4",
    "nstockade", "pstockade", "fbi", "noose",
    // Helicopters
    "annihilator", "maverick", "polmav", "tourmav",
    // Boats
    "dinghy", "jetmax", "marquis", "predator", "reefer", "squalo", "tropic", "tuga",
    // Commercial
    "airtug", "benson", "biff", "boxville", "burrito", "burrito2", "cabby",
    "flatbed", "forklift", "mule", "packer", "pony", "speedo", "stockade",
    "trashmaster", "yankee",
    // Special
    "mrtasty", "cablecar", "subway", "eltrain",
    // Taxis
    "taxi", "taxi2", "romantaxi"
];

// Vehicle model hashes - SIGNED 32-bit integers from GTAConnected wiki
// DO NOT use 0x prefix with decimal numbers! Use actual values.
const vehicleHashes = {
    // Sports Cars
    "infernus": 418536135,
    "turismo": -1896659641,
    "comet": 1063483177,
    "banshee": -1041692462,
    "sultan": 970598228,
    "coquette": 108773431,
    "supergt": 1821991593,
    "futo": 2016857647,
    // Muscle Cars
    "buccaneer": -682211828,
    "dukes": 723973206,
    "faction": -2119578145,
    "fortune": 627033353,
    "ruiner": -227741703,
    "sabre": -449022887,
    "sabregt": -1685021548,
    "stallion": 1923400478,
    "vigero": -825837129,
    // Sedans
    "admiral": 1264341792,
    "cognoscenti": -2030171296,
    "emperor": -685276541,
    "esperanto": -276900515,
    "feroci": 974744810,
    "feltzer": -1097828879,
    "intruder": 886934177,
    "lokus": -37030056,
    "marbella": 1304597482,
    "merit": -1260881538,
    "oracle": 1348744438,
    "pinnacle": 131140572,
    "premier": -1883869285,
    "presidente": -1962071130,
    "primo": -1150599089,
    "rebla": 83136452,
    "romero": 627094268,
    "schafter": -322343873,
    "sentinel": 1349725314,
    "solair": 1344573448,
    "stratum": 1723137093,
    "stretch": -1961627517,
    "vincent": -583281407,
    "virgo": -498054846,
    "willard": 1937616578,
    "washington": 1777363799,
    // SUVs & Trucks
    "bobcat": 1075851868,
    "cavalcade": 2006918058,
    "habanero": 884422927,
    "huntley": 486987393,
    "landstalker": 1269098716,
    "patriot": -808457413,
    "rancher": 1390084576,
    // Vans & Commercial
    "benson": 2053223216,
    "biff": 850991848,
    "boxville": -1987130134,
    "burrito": -1346687836,
    "burrito2": -907477130,
    "cabby": 1884962369,
    "flatbed": 1353720154,
    "forklift": 1491375716,
    "moonbeam": 525509695,
    "mule": 904750859,
    "packer": 569305213,
    "perennial": -2077743597,
    "pony": -119658072,
    "speedo": -810318068,
    "stockade": 1747439474,
    "trashmaster": 1917016601,
    "yankee": -1099960214,
    // Compacts
    "blista": -344943009,
    "chavos": -67282078,
    "dilettante": -1130810103,
    "ingot": -1289722222,
    "pmp600": 1376298265,
    "sultanrs": -295689028,
    // Motorcycles
    "bobber": -1830458836,
    "faggio": -1842748181,
    "freeway": 1534326199,
    "hellfury": 584879743,
    "nrg900": 1203311498,
    "pcj600": -909201658,
    "sanchez": 788045382,
    "zombie": -570033273,
    // Emergency
    "ambulance": 1171614426,
    "firetruk": 1938952078,
    "police": 2046537925,
    "police2": -1627000575,
    "policepatriot": -350085182,
    "fbi": 1127131465,
    "noose": 148777611,
    "nstockade": -1900572838,
    "pstockade": 1911513875,
    // Helicopters
    "annihilator": 837858166,
    "maverick": -1660661558,
    "polmav": 353883353,
    "tourmav": 2027357303,
    // Boats
    "dinghy": 1033245328,
    "jetmax": 861409633,
    "marquis": -1043459709,
    "predator": -488123221,
    "reefer": 1759673526,
    "squalo": 400514754,
    "tropic": 290013743,
    "tuga": 1064455782,
    // Commercial & Special
    "airtug": 1560980623,
    "bus": -713569950,
    "mrtasty": 583100975,
    // Trains (may not spawn)
    "cablecar": -960289747,
    "subway": 800869680,
    "eltrain": -1953988645,
    // Taxis
    "taxi": -956048545,
    "taxi2": 1208856469,
    "romantaxi": -1932515764
};

// Execute vehicle spawn using natives
addNetworkHandler("ModMenu:ExecuteSpawnVehicle", function(vehicleName) {
    try {
        if (!localPlayer) {
            showNotification("Not ready");
            return;
        }

        // Clean up vehicle name and map to correct hash
        let cleanName = vehicleName.replace(/[^a-zA-Z0-9]/g, '').toLowerCase();
        let modelHash = vehicleHashes[cleanName];
        if (!modelHash) {
            showNotification("Unknown vehicle: " + cleanName);
            return;
        }

        console.log("[ModMenu] Spawning vehicle: " + vehicleName + " (hash: " + modelHash + ")");

        // Request the model first
        natives.requestModel(modelHash);

        // Wait for model to load then spawn
        let attempts = 0;
        let spawnInterval = setInterval(function() {
            attempts++;
            if (natives.hasModelLoaded(modelHash)) {
                clearInterval(spawnInterval);

                let pos = localPlayer.position;
                let heading = localPlayer.heading || 0;

                // Spawn position in front of player
                let spawnX = pos.x + Math.sin(-heading) * 5;
                let spawnY = pos.y + Math.cos(-heading) * 5;
                let spawnZ = pos.z + 0.5;

                // Create spawn position as Vec3 (GTAConnected requires Vec3)
                let spawnPos = new Vec3(spawnX, spawnY, spawnZ);

                // Create the car - GTAConnected: createCar(hash, Vec3, bool)
                let vehicle = natives.createCar(modelHash, spawnPos, true);

                if (vehicle) {
                    // Set vehicle heading to match player
                    natives.setCarHeading(vehicle, heading);
                    // Warp player into the vehicle
                    natives.warpCharIntoCar(localPlayer, vehicle);
                    showNotification("Spawned: " + vehicleName);
                    console.log("[ModMenu] Vehicle spawned successfully");
                } else {
                    showNotification("Failed to create vehicle");
                }

                // Mark model as no longer needed
                natives.markModelAsNoLongerNeeded(modelHash);
            } else if (attempts > 100) {
                clearInterval(spawnInterval);
                showNotification("Model load timeout for: " + vehicleName);
            }
        }, 50);  // Check every 50ms instead of 100ms
    } catch(e) {
        console.log("[ModMenu] Vehicle spawn error: " + e);
        showNotification("Error: " + e);
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

// GTA IV Character Model Hashes (verified working)
// Male models
const SKIN_NIKO = -1667301416;
const SKIN_ROMAN = -163448165;
const SKIN_JACOB = 1936355839;
const SKIN_BRUCIE = -1938475496;
const SKIN_PLAYBOY = 970234525;
const SKIN_JOHNNY = -1784875845;
const SKIN_LUIS = -1403507487;
const SKIN_COP = -1320879687;
const SKIN_DOCTOR = 1669579652;
const SKIN_FIREMAN = -335476819;
const SKIN_SECURITY = 1581098148;
const SKIN_BUSINESS = -1191636209;
const SKIN_STREET = -1850653608;
const SKIN_HOBO = -1183939691;
const SKIN_BIKER = 1830507291;

// Female models - verified GTA IV peds
const SKIN_F_BUSINESS = -1847203044;
const SKIN_F_STREET = -2043953294;
const SKIN_F_RICH = -1171014612;
const SKIN_F_SHOP = -1611704378;
const SKIN_F_NURSE = 1567728751;
const SKIN_F_HOOKER = -639476421;
const SKIN_F_TOURIST = -1507724086;
const SKIN_F_JOGGER = -1813105079;

// Arrays for random selection
const mpBoySkins = [
    SKIN_NIKO, SKIN_ROMAN, SKIN_JACOB, SKIN_BRUCIE, SKIN_PLAYBOY,
    SKIN_JOHNNY, SKIN_LUIS, SKIN_COP, SKIN_DOCTOR, SKIN_FIREMAN,
    SKIN_SECURITY, SKIN_BUSINESS, SKIN_STREET, SKIN_HOBO, SKIN_BIKER
];

const mpGirlSkins = [
    SKIN_F_BUSINESS, SKIN_F_STREET, SKIN_F_RICH, SKIN_F_SHOP,
    SKIN_F_NURSE, SKIN_F_HOOKER, SKIN_F_TOURIST, SKIN_F_JOGGER
];

// Execute skin change
addNetworkHandler("ModMenu:ExecuteSkinChange", function(skinId) {
    if (!localPlayer) return;

    try {
        if (skinId === "random") {
            // Random from all skins
            let allSkins = mpBoySkins.concat(mpGirlSkins);
            skinId = allSkins[Math.floor(Math.random() * allSkins.length)];
        } else if (skinId === "random_mp_boy") {
            // Random male skin
            skinId = mpBoySkins[Math.floor(Math.random() * mpBoySkins.length)];
        } else if (skinId === "random_mp_girl") {
            // Random female skin
            skinId = mpGirlSkins[Math.floor(Math.random() * mpGirlSkins.length)];
        }

        console.log("[ModMenu] Changing skin to: " + skinId);

        // Request and load the model
        natives.requestModel(skinId);

        // Use interval to check if model is loaded
        let attempts = 0;
        let loadInterval = setInterval(function() {
            attempts++;
            try {
                // Try to load all objects
                natives.loadAllObjectsNow();

                // Check if we can change model now
                if (attempts > 5) {
                    clearInterval(loadInterval);
                    // Change player model
                    natives.changePlayerModel(0, skinId);
                    console.log("[ModMenu] Skin changed successfully");
                }
            } catch(e) {
                console.log("[ModMenu] Skin load attempt " + attempts + ": " + e);
            }

            if (attempts > 20) {
                clearInterval(loadInterval);
                console.log("[ModMenu] Skin load timeout");
            }
        }, 50);

    } catch(e) {
        console.log("[ModMenu] Skin change error: " + e);
        showNotification("Skin change failed");
    }
});

// ============================================================================
// RENDERING - MD REVOLUTION MOD MENU (Trident Style)
// Steel Blue primary, Gold/Orange accents, Flash effects
// ============================================================================

// Smooth animation update with original effects
addEventHandler("OnProcess", function(event) {
    // Update animation time - SMOOTHED
    animTime += 0.02;
    titlePulse += 0.04;
    selectedPulse += 0.06;
    colorShift += 0.01;
    particleTime += 0.05;

    // Trident-style header flash timer
    headerFlashTimer += 0.02;
    if (headerFlashTimer >= headerFlashInterval) {
        headerFlashTimer = 0;
        headerFlashActive = true;
    }
    if (headerFlashActive && headerFlashTimer >= headerFlashDuration) {
        headerFlashActive = false;
    }

    // Enhanced visual effects
    glowIntensity = Math.sin(animTime * 3) * 0.5 + 0.5;
    
    // Screen shake decay
    if (screenShake > 0) {
        screenShake -= 0.1;
        if (screenShake < 0) screenShake = 0;
    }
    
    // Flash effect decay
    if (flashAlpha > 0) {
        flashAlpha -= 0.05;
        if (flashAlpha < 0) flashAlpha = 0;
    }
    
    // Matrix effect
    if (toggleStates.matrixMode) {
        matrixEffect += 0.1;
    } else {
        matrixEffect *= 0.9;
    }

    // Apply continuous effects when menu is closed
    if (!menuOpen && localPlayer) {
        try {
            // Moon gravity
            if (toggleStates.moonGravity) {
                localPlayer.gravity = 0.1;
            } else if (localPlayer.gravity !== 9.8) {
                localPlayer.gravity = 9.8;
            }

            // Drunk mode - wobble effect
            if (toggleStates.drunkMode) {
                try {
                    natives.setGameCamShake(true, 2);
                    natives.shakeCam(1, 100);
                } catch(e) {
                    try {
                        natives.setGameCamHeading(Math.sin(animTime * 3) * 5);
                    } catch(e2) {}
                }
            }

            // Night Vision - using timecycle modifier as alternative
            if (toggleStates.nightVision) {
                try {
                    // Try native first
                    natives.setNightvision(true);
                } catch(e) {
                    try {
                        // Alternative: use timecycle for green tint effect
                        natives.setTimecycleModifier("nightvision");
                    } catch(e2) {}
                }
            }

            // Thermal Vision - using timecycle modifier as alternative
            if (toggleStates.thermalVision) {
                try {
                    // Try native first
                    natives.setInfaredvision(true);
                } catch(e) {
                    try {
                        // Alternative: use timecycle for thermal effect
                        natives.setTimecycleModifier("thermal");
                    } catch(e2) {}
                }
            }

            // Clear vision effects when both disabled
            if (!toggleStates.nightVision && !toggleStates.thermalVision) {
                try {
                    natives.setNightvision(false);
                    natives.setInfaredvision(false);
                } catch(e) {}
            }

            // Screen shake effect - apply camera shake
            if (screenShake > 0.01) {
                try {
                    let shakeAmount = screenShake * 50;
                    natives.shakeCam(1, Math.floor(shakeAmount));
                } catch(e) {
                    try {
                        // Alternative: move camera slightly
                        natives.setGameCamShake(true, Math.floor(screenShake * 3));
                    } catch(e2) {}
                }
            }
        } catch(e) {}
    }

    // Smooth scroll interpolation - very smooth
    smoothScrollY += (targetScrollY - smoothScrollY) * 0.15;

    // Menu open animation - smooth transition
    if (menuOpen && menuOpenAnim < 1) {
        menuOpenAnim += 0.08;
        if (menuOpenAnim > 1) {
            menuOpenAnim = 1;
        }
    } else if (!menuOpen && menuOpenAnim > 0) {
        menuOpenAnim -= 0.12;
        if (menuOpenAnim < 0) menuOpenAnim = 0;
    }
});

// Enhanced eye-melting menu rendering (optimized)
addEventHandler("OnDrawnHUD", function(event) {
    if (menuOpenAnim <= 0) return;

    let currentData = menuData[currentMenu];
    let items = getCurrentMenuItems();
    let title = currentData ? currentData.title : currentMenu.toUpperCase();

    let visibleCount = Math.min(items.length, menu.maxVisibleItems);
    let totalHeight = menu.headerHeight + (visibleCount * menu.itemHeight) + menu.footerHeight;

    let animAlpha = Math.floor(255 * menuOpenAnim);

    // Calculate animated position (smooth slide in from right)
    let slideOffset = (1 - menuOpenAnim) * 120;
    let baseX = menu.x + slideOffset;
    let baseY = menu.y;

    // ===== TRIDENT-STYLE OUTER GLOW =====
    let theme = getTheme();
    let highlight = theme.highlight || theme.accent;
    let glowPulse = Math.sin(animTime * 2) * 0.25 + 0.75;
    let glowSize = 8 + Math.sin(animTime * 1.5) * 3;

    // Steel Blue outer glow with subtle Gold tint
    let glowIntensityMult = 0.7 + Math.sin(animTime * 2) * 0.15;
    for (let g = 4; g >= 1; g--) {
        let gAlpha = Math.floor((35 / g) * glowPulse * menuOpenAnim);
        // Mix Steel Blue with subtle Gold
        let gCol = toColour(
            Math.floor((theme.primary.r * 0.8 + highlight.r * 0.2) * glowIntensityMult),
            Math.floor((theme.primary.g * 0.8 + highlight.g * 0.15) * glowIntensityMult),
            Math.floor((theme.primary.b * 0.9 + highlight.b * 0.1) * glowIntensityMult),
            gAlpha
        );
        drawRect(baseX - glowSize * g, baseY - glowSize * g,
                 menu.width + glowSize * g * 2, totalHeight + glowSize * g * 2 + 10, gCol);
    }

    // ===== MAIN BACKGROUND - Dark with Steel Blue tint =====
    let bgColor = toColour(10, 12, 18, Math.floor(248 * menuOpenAnim));
    drawRect(baseX, baseY, menu.width, totalHeight + 10, bgColor);

    // ===== TRIDENT-STYLE BORDER - Steel Blue =====
    let borderPulse = Math.sin(animTime * 3) * 0.15 + 0.85;
    let borderColor = toColour(
        Math.floor(theme.primary.r * borderPulse * 0.8),
        Math.floor(theme.primary.g * borderPulse * 0.8),
        Math.floor(theme.primary.b * borderPulse),
        Math.floor(220 * menuOpenAnim)
    );

    // Smooth border thickness
    let borderW = 3 + Math.sin(animTime * 3) * 0.5;
    drawRect(baseX, baseY, menu.width, borderW, borderColor); // Top
    drawRect(baseX, baseY + totalHeight + 10 - borderW, menu.width, borderW, borderColor); // Bottom
    drawRect(baseX, baseY, borderW, totalHeight + 10, borderColor); // Left
    drawRect(baseX + menu.width - borderW, baseY, borderW, totalHeight + 10, borderColor); // Right

    // Corner accents - Gold/Orange (Trident signature)
    let cornerSize = 14 + Math.sin(animTime * 2) * 3;
    let cornerPulse = Math.sin(animTime * 2.5) * 0.2 + 0.8;
    let cornerColor = toColour(
        Math.floor(highlight.r * cornerPulse),
        Math.floor(highlight.g * cornerPulse),
        Math.floor(highlight.b * 0.5),
        Math.floor(220 * menuOpenAnim)
    );
    drawRect(baseX, baseY, cornerSize, 3, cornerColor);
    drawRect(baseX, baseY, 3, cornerSize, cornerColor);
    drawRect(baseX + menu.width - cornerSize, baseY, cornerSize, 3, cornerColor);
    drawRect(baseX + menu.width - 3, baseY, 3, cornerSize, cornerColor);
    drawRect(baseX, baseY + totalHeight + 7, cornerSize, 3, cornerColor);
    drawRect(baseX, baseY + totalHeight + 10 - cornerSize, 3, cornerSize, cornerColor);
    drawRect(baseX + menu.width - cornerSize, baseY + totalHeight + 7, cornerSize, 3, cornerColor);
    drawRect(baseX + menu.width - 3, baseY + totalHeight + 10 - cornerSize, 3, cornerSize, cornerColor);

    // ===== HEADER - Trident-style gradient =====
    let headerMult = 0.8 + Math.sin(animTime * 2) * 0.1;

    // Flash effect - bright white flash overlay
    let flashMult = headerFlashActive ? 2.5 : 1.0;

    let headerLeft = toColour(
        Math.min(255, Math.floor(theme.primary.r * headerMult * flashMult)),
        Math.min(255, Math.floor(theme.primary.g * headerMult * flashMult)),
        Math.min(255, Math.floor(theme.primary.b * headerMult * flashMult)),
        animAlpha
    );
    let headerRight = toColour(
        Math.floor(theme.primary.r * 0.2),
        Math.floor(theme.primary.g * 0.2),
        Math.floor(theme.primary.b * 0.3),
        animAlpha
    );
    drawGradientRect(baseX + 4, baseY + 4, menu.width - 8, menu.headerHeight - 4, headerLeft, headerRight);

    // Flash overlay when active
    if (headerFlashActive) {
        let flashOverlay = toColour(255, 255, 255, Math.floor(180 * menuOpenAnim));
        drawRect(baseX + 4, baseY + 4, menu.width - 8, menu.headerHeight - 4, flashOverlay);
    }

    // Header accent line (Gold/Orange)
    let lineGlow = Math.sin(animTime * 4) * 0.3 + 0.7;
    let highlight = theme.highlight || theme.accent;
    let headerLineColor = toColour(highlight.r, highlight.g, highlight.b, Math.floor(200 * lineGlow * menuOpenAnim));
    drawRect(baseX + 4, baseY + menu.headerHeight - 2, menu.width - 8, 2, headerLineColor);

    // ===== ANIMATED TITLE WITH MD PREFIX =====
    let titleY = baseY + 10;

    // MD Prefix - Gold/Orange color with glow
    let mdGlowPulse = Math.sin(titlePulse * 1.5) * 0.3 + 0.7;
    let mdGlowColor = toColour(highlight.r, highlight.g, highlight.b, Math.floor(60 * mdGlowPulse * menuOpenAnim));
    drawText("MD", baseX + 12, titleY + 2, mdGlowColor, 24);

    // MD shadow
    let shadowColor = toColour(0, 0, 0, Math.floor(200 * menuOpenAnim));
    drawText("MD", baseX + 11, titleY + 2, shadowColor, 24);

    // Main MD prefix - Orange/Gold
    let mdColor = toColour(
        Math.min(255, Math.floor(highlight.r * (headerFlashActive ? 1.5 : 1.0))),
        Math.min(255, Math.floor(highlight.g * (headerFlashActive ? 1.5 : 1.0))),
        Math.floor(highlight.b * 0.8),
        animAlpha
    );
    drawText("MD", baseX + 10, titleY, mdColor, 24);

    // Title glow effect (themed)
    let titleGlowPulse = Math.sin(titlePulse) * 0.5 + 0.5;
    let titleGlowColor = toColour(theme.accent.r, theme.accent.g, theme.accent.b, Math.floor(80 * titleGlowPulse * menuOpenAnim));
    drawText("REVOLUTION", baseX + 54, titleY + 2, titleGlowColor, 24);

    // Title shadow
    drawText("REVOLUTION", baseX + 52, titleY + 2, shadowColor, 24);

    // Main title - Steel Blue to white pulse
    let titlePulseVal = Math.sin(titlePulse * 2) * 0.25 + 0.75;
    let titleColor = toColour(
        Math.min(255, Math.floor(255 * titlePulseVal + theme.primary.r * (1 - titlePulseVal) * (headerFlashActive ? 1.5 : 1.0))),
        Math.min(255, Math.floor(255 * titlePulseVal + theme.primary.g * (1 - titlePulseVal) * (headerFlashActive ? 1.5 : 1.0))),
        Math.min(255, Math.floor(255 * titlePulseVal + theme.primary.b * (1 - titlePulseVal) * (headerFlashActive ? 1.5 : 1.0))),
        animAlpha
    );
    drawText("REVOLUTION", baseX + 50, titleY, titleColor, 24);

    // Subtitle - version info
    let betaFlicker = Math.sin(animTime * 6) > 0.2 ? 1 : 0.8;
    let betaColor = toColour(180, 190, 200, Math.floor(180 * betaFlicker * menuOpenAnim));
    drawText("Trident Style v1.0", baseX + 12, titleY + 30, betaColor, 11);

    // Smooth animated line under title (themed)
    let lineWidth = 100 + Math.sin(animTime * 3) * 30;
    let linePulseMult = Math.sin(animTime * 4) * 0.2 + 0.8;
    let underlineColor = toColour(
        Math.floor(theme.primary.r * linePulseMult),
        Math.floor(theme.primary.g * linePulseMult),
        Math.floor(theme.primary.b * linePulseMult),
        Math.floor(220 * menuOpenAnim)
    );
    drawRect(baseX + (menu.width - lineWidth) / 2, baseY + menu.headerHeight - 6, lineWidth, 2, underlineColor);

    // ===== MENU ITEMS =====
    let yPos = baseY + menu.headerHeight;
    targetScrollY = scrollOffset * menu.itemHeight;

    for (let i = scrollOffset; i < scrollOffset + visibleCount && i < items.length; i++) {
        let item = items[i];
        let isSelected = (i === selectedIndex);
        let itemY = yPos + (i - scrollOffset) * menu.itemHeight;

        // Selection animation - smoother
        let selectOffset = 0;
        let selectGlow = 0;
        if (isSelected) {
            selectOffset = Math.sin(selectedPulse) * 2;
            selectGlow = Math.sin(selectedPulse * 1.5) * 0.3 + 0.7;
        }

        if (isSelected) {
            // ===== SELECTED ITEM - Trident-style Steel Blue with Gold accent =====
            let selMult = 0.7 + selectGlow * 0.3;
            let selColor = toColour(
                Math.floor(theme.primary.r * selMult),
                Math.floor(theme.primary.g * selMult),
                Math.floor(theme.primary.b * selMult),
                Math.floor(235 * menuOpenAnim)
            );

            // Outer glow - Gold/Orange
            let selGlowColor = toColour(highlight.r, highlight.g, highlight.b, Math.floor(40 * menuOpenAnim));
            drawRect(baseX + 2, itemY - 2, menu.width - 4, menu.itemHeight + 4, selGlowColor);

            // Main selection background - gradient feel
            drawRect(baseX + 6 + selectOffset, itemY, menu.width - 12, menu.itemHeight - 2, selColor);

            // Left indicator bar - Gold/Orange pulsing (Trident-style)
            let barPulse = Math.sin(selectedPulse * 1.5) * 0.2 + 0.8;
            let barColor = toColour(
                Math.floor(highlight.r * barPulse),
                Math.floor(highlight.g * barPulse),
                Math.floor(highlight.b * 0.5),
                animAlpha
            );
            drawRect(baseX + 6, itemY, 4, menu.itemHeight - 2, barColor);

            // Right edge highlight - subtle Gold
            let rightColor = toColour(highlight.r, highlight.g, highlight.b, Math.floor(80 * menuOpenAnim));
            drawRect(baseX + menu.width - 8, itemY, 2, menu.itemHeight - 2, rightColor);

            // Bottom selection line - Orange glow
            let bottomLineColor = toColour(highlight.r, highlight.g, highlight.b, Math.floor(120 * selectGlow * menuOpenAnim));
            drawRect(baseX + 10, itemY + menu.itemHeight - 3, menu.width - 20, 1, bottomLineColor);

        } else if (item.action === "none") {
            // Separator (Trident-style)
            let sepColor = toColour(
                Math.floor(theme.primary.r * 0.15),
                Math.floor(theme.primary.g * 0.15),
                Math.floor(theme.primary.b * 0.2),
                Math.floor(180 * menuOpenAnim)
            );
            drawRect(baseX + 6, itemY, menu.width - 12, menu.itemHeight - 2, sepColor);
            // Separator line - Gold accent
            let sepLineColor = toColour(
                Math.floor(highlight.r * 0.4),
                Math.floor(highlight.g * 0.3),
                Math.floor(highlight.b * 0.2),
                Math.floor(150 * menuOpenAnim)
            );
            drawRect(baseX + 20, itemY + menu.itemHeight/2 - 1, menu.width - 40, 1, sepLineColor);
        } else {
            // Normal item - dark with subtle Steel Blue tint
            let normTint = 0.12 + (i % 2) * 0.03;
            let normColor = toColour(
                Math.floor(theme.primary.r * normTint + 12),
                Math.floor(theme.primary.g * normTint + 12),
                Math.floor(theme.primary.b * normTint + 18),
                Math.floor(200 * menuOpenAnim)
            );
            drawRect(baseX + 6, itemY, menu.width - 12, menu.itemHeight - 2, normColor);

            // Subtle left border - Steel Blue hint
            let leftBorderColor = toColour(
                Math.floor(theme.primary.r * 0.3),
                Math.floor(theme.primary.g * 0.3),
                Math.floor(theme.primary.b * 0.4),
                Math.floor(100 * menuOpenAnim)
            );
            drawRect(baseX + 6, itemY, 2, menu.itemHeight - 2, leftBorderColor);
        }

        // Item text
        let textX = baseX + 22 + (isSelected ? selectOffset + 6 : 0);
        let textBright = isSelected ? 255 : 200;
        let textColor = toColour(textBright, textBright, textBright, animAlpha);

        if (item.action === "none") {
            let sepTextColor = toColour(
                Math.floor(theme.accent.r * 0.6),
                Math.floor(theme.accent.g * 0.5),
                Math.floor(theme.accent.b * 0.5),
                Math.floor(200 * menuOpenAnim)
            );
            drawText(item.label, baseX + 20, itemY + 12, sepTextColor, 11);
        } else {
            drawText(item.label, textX, itemY + 12, textColor, 14);
        }

        // ===== TOGGLE INDICATORS =====
        if (item.action === "toggle") {
            let isOn = toggleStates[item.target];
            let stateText = isOn ? "ON" : "OFF";
            let stateX = baseX + menu.width - 60;

            if (isOn) {
                // GREEN ON - Smooth Pulsing
                let greenPulse = Math.sin(animTime * 3) * 40 + 215;
                let onBgColor = toColour(30, Math.floor(greenPulse * 0.4), 30, animAlpha);
                let onTextColor = toColour(80, Math.floor(greenPulse), 80, animAlpha);
                drawRect(stateX - 8, itemY + 8, 52, 24, onBgColor);
                // Green border
                let onBorderColor = toColour(50, Math.floor(greenPulse), 50, animAlpha);
                drawRect(stateX - 8, itemY + 8, 52, 2, onBorderColor);
                drawRect(stateX - 8, itemY + 30, 52, 2, onBorderColor);
                drawText(stateText, stateX + 5, itemY + 12, onTextColor, 13);
            } else {
                // RED OFF
                let offBgColor = toColour(80, 25, 30, animAlpha);
                let offTextColor = toColour(255, 90, 90, animAlpha);
                drawRect(stateX - 8, itemY + 8, 52, 24, offBgColor);
                // Red border
                let offBorderColor = toColour(150, 40, 50, animAlpha);
                drawRect(stateX - 8, itemY + 8, 52, 2, offBorderColor);
                drawRect(stateX - 8, itemY + 30, 52, 2, offBorderColor);
                drawText(stateText, stateX + 2, itemY + 12, offTextColor, 13);
            }
        }

        // Submenu arrow - smoother (themed)
        if (item.action === "submenu") {
            let arrowX = baseX + menu.width - 32 + (isSelected ? Math.sin(animTime * 5) * 3 : 0);
            let arrowBright = isSelected ? 1.0 : 0.6;
            let arrowColor = toColour(
                Math.floor(theme.accent.r * arrowBright),
                Math.floor(theme.accent.g * arrowBright),
                Math.floor(theme.accent.b * arrowBright),
                animAlpha
            );
            drawText(">>", arrowX, itemY + 12, arrowColor, 14);
        }
    }

    // ===== FOOTER / HELPER TEXT (Trident-style) =====
    let footerY = yPos + visibleCount * menu.itemHeight;
    let footerColor = toColour(
        Math.floor(theme.primary.r * 0.15),
        Math.floor(theme.primary.g * 0.15),
        Math.floor(theme.primary.b * 0.2 + 10),
        Math.floor(235 * menuOpenAnim)
    );
    drawRect(baseX + 4, footerY, menu.width - 8, menu.footerHeight, footerColor);

    // Footer top line (Gold/Orange accent)
    let footerLineColor = toColour(
        Math.floor(highlight.r * 0.7),
        Math.floor(highlight.g * 0.5),
        Math.floor(highlight.b * 0.3),
        Math.floor(200 * menuOpenAnim)
    );
    drawRect(baseX + 4, footerY, menu.width - 8, 2, footerLineColor);

    // Helper text - navigation instructions (Trident-style)
    let helperPulse = Math.sin(animTime * 2) * 0.15 + 0.85;
    let helperKeyColor = toColour(
        Math.floor(highlight.r * helperPulse),
        Math.floor(highlight.g * helperPulse),
        Math.floor(highlight.b * 0.6),
        Math.floor(220 * menuOpenAnim)
    );
    let helperTextColor = toColour(200, 200, 210, Math.floor(180 * menuOpenAnim));

    // Draw helper text with highlighted keys
    drawText("[", baseX + 15, footerY + 10, helperTextColor, 11);
    drawText("UP", baseX + 22, footerY + 10, helperKeyColor, 11);
    drawText("/", baseX + 42, footerY + 10, helperTextColor, 11);
    drawText("DOWN", baseX + 50, footerY + 10, helperKeyColor, 11);
    drawText("] Navigate  [", baseX + 82, footerY + 10, helperTextColor, 11);
    drawText("ENTER", baseX + 162, footerY + 10, helperKeyColor, 11);
    drawText("] Select  [", baseX + 200, footerY + 10, helperTextColor, 11);
    drawText("BACK", baseX + 268, footerY + 10, helperKeyColor, 11);
    drawText("]", baseX + 300, footerY + 10, helperTextColor, 11);

    // ===== SCROLL BAR (THEMED) =====
    if (items.length > menu.maxVisibleItems) {
        let scrollTrackColor = toColour(
            Math.floor(theme.primary.r * 0.2),
            Math.floor(theme.primary.g * 0.08),
            Math.floor(theme.primary.b * 0.1),
            Math.floor(150 * menuOpenAnim)
        );
        let scrollTrackY = baseY + menu.headerHeight + 5;
        let scrollTrackH = visibleCount * menu.itemHeight - 10;
        drawRect(baseX + menu.width - 12, scrollTrackY, 6, scrollTrackH, scrollTrackColor);

        let scrollPct = scrollOffset / Math.max(1, items.length - visibleCount);
        let scrollBarH = Math.max(30, scrollTrackH * (visibleCount / items.length));
        let scrollBarY = scrollTrackY + scrollPct * (scrollTrackH - scrollBarH);

        let scrollPulse = Math.sin(animTime * 2) * 0.15 + 0.85;
        let scrollBarColor = toColour(
            Math.floor(theme.primary.r * scrollPulse),
            Math.floor(theme.primary.g * scrollPulse * 0.3),
            Math.floor(theme.primary.b * scrollPulse * 0.35),
            Math.floor(220 * menuOpenAnim)
        );
        drawRect(baseX + menu.width - 12, scrollBarY, 6, scrollBarH, scrollBarColor);

        // ===== SCROLL INDICATORS (Trident-style arrows) =====
        let arrowPulse = Math.sin(animTime * 4) * 0.3 + 0.7;

        // Up arrow indicator - show when not at top
        if (scrollOffset > 0) {
            let upArrowY = baseY + menu.headerHeight + 2;
            let upArrowColor = toColour(
                Math.floor(highlight.r * arrowPulse),
                Math.floor(highlight.g * arrowPulse),
                Math.floor(highlight.b * 0.5),
                Math.floor(220 * menuOpenAnim)
            );
            // Arrow pointing up (triangle effect using text)
            drawText("^", baseX + menu.width / 2 - 5, upArrowY, upArrowColor, 16);
            // Additional visual - animated bounce
            let bounceOffset = Math.sin(animTime * 6) * 2;
            drawText("^", baseX + menu.width / 2 - 5, upArrowY - 4 + bounceOffset, toColour(highlight.r, highlight.g, highlight.b, Math.floor(100 * menuOpenAnim)), 12);
        }

        // Down arrow indicator - show when not at bottom
        let maxScroll = items.length - visibleCount;
        if (scrollOffset < maxScroll) {
            let downArrowY = footerY - 18;
            let downArrowColor = toColour(
                Math.floor(highlight.r * arrowPulse),
                Math.floor(highlight.g * arrowPulse),
                Math.floor(highlight.b * 0.5),
                Math.floor(220 * menuOpenAnim)
            );
            // Arrow pointing down (v shape)
            drawText("v", baseX + menu.width / 2 - 5, downArrowY, downArrowColor, 16);
            // Additional visual - animated bounce
            let bounceOffset = Math.sin(animTime * 6) * 2;
            drawText("v", baseX + menu.width / 2 - 5, downArrowY + 4 + bounceOffset, toColour(highlight.r, highlight.g, highlight.b, Math.floor(100 * menuOpenAnim)), 12);
        }
    }

    // ===== INFO BAR (THEMED) =====
    if (currentDescription && currentDescription.length > 0) {
        let infoY = baseY + totalHeight + 15;
        let infoBarHeight = infoBar.height;

        // Background with glow effect
        let infoGlowPulse = Math.sin(animTime * 2) * 0.3 + 0.7;
        let infoBgColor = toColour(
            Math.floor(theme.primary.r * 0.1),
            Math.floor(theme.primary.g * 0.05),
            Math.floor(theme.primary.b * 0.07 + 10),
            Math.floor(220 * menuOpenAnim)
        );
        drawRect(baseX, infoY, menu.width, infoBarHeight, infoBgColor);

        // Animated themed border (matching menu style)
        let infoBorderPulse = Math.sin(animTime * 3) * 0.2 + 0.8;
        let infoBorderColor = toColour(
            Math.floor(theme.primary.r * infoBorderPulse),
            Math.floor(theme.primary.g * infoBorderPulse * 0.2),
            Math.floor(theme.primary.b * infoBorderPulse * 0.25),
            Math.floor(200 * menuOpenAnim)
        );
        drawRect(baseX, infoY, menu.width, 3, infoBorderColor); // Top
        drawRect(baseX, infoY + infoBarHeight - 3, menu.width, 3, infoBorderColor); // Bottom
        drawRect(baseX, infoY, 3, infoBarHeight, infoBorderColor); // Left
        drawRect(baseX + menu.width - 3, infoY, 3, infoBarHeight, infoBorderColor); // Right

        // Corner accents (themed)
        let infoCornerSize = 12 + Math.sin(animTime * 2) * 3;
        let infoCornerColor = toColour(theme.accent.r, theme.accent.g, theme.accent.b, Math.floor(180 * menuOpenAnim));
        drawRect(baseX, infoY, infoCornerSize, 3, infoCornerColor);
        drawRect(baseX, infoY, 3, infoCornerSize, infoCornerColor);
        drawRect(baseX + menu.width - infoCornerSize, infoY, infoCornerSize, 3, infoCornerColor);
        drawRect(baseX + menu.width - 3, infoY, 3, infoCornerSize, infoCornerColor);
        drawRect(baseX, infoY + infoBarHeight - 3, infoCornerSize, 3, infoCornerColor);
        drawRect(baseX, infoY + infoBarHeight - infoCornerSize, 3, infoCornerSize, infoCornerColor);
        drawRect(baseX + menu.width - infoCornerSize, infoY + infoBarHeight - 3, infoCornerSize, 3, infoCornerColor);
        drawRect(baseX + menu.width - 3, infoY + infoBarHeight - infoCornerSize, 3, infoCornerSize, infoCornerColor);

        // Description text with glow effect
        let textGlow = Math.sin(animTime * 4) * 0.4 + 0.6;
        let glowColor = toColour(theme.accent.r, theme.accent.g, theme.accent.b, Math.floor(30 * textGlow * menuOpenAnim));
        drawText(currentDescription, baseX + 14, infoY + 18, glowColor, 14);

        // Main description text
        let textColor = toColour(255, 255, 255, Math.floor(255 * menuOpenAnim));
        drawText(currentDescription, baseX + 12, infoY + 18, textColor, 12);

        // "INFO" label (themed)
        let labelColor = toColour(
            Math.floor(theme.accent.r * 0.8),
            Math.floor(theme.accent.g * 0.5),
            Math.floor(theme.accent.b * 0.5),
            Math.floor(200 * menuOpenAnim)
        );
        drawText("INFO", baseX + 12, infoY + 2, labelColor, 10);
    }
});

// ============================================================================
// VISUAL EFFECTS OVERLAY - Flash, Matrix, Screen Effects
// ============================================================================
addEventHandler("OnDrawnHUD", function(event) {
    let screenWidth = 1920;
    let screenHeight = 1080;
    try {
        screenWidth = game.width || 1920;
        screenHeight = game.height || 1080;
    } catch(e) {}

    // Flash Screen Effect - white overlay that fades out
    if (flashAlpha > 0.01) {
        let flashColor = toColour(255, 255, 255, Math.floor(flashAlpha * 255));
        drawRect(0, 0, screenWidth, screenHeight, flashColor);
    }

    // Screen Shake Visual Effect - draw offset overlay
    if (screenShake > 0.01) {
        // Apply visual shake by drawing slightly offset
        let shakeX = (Math.random() - 0.5) * screenShake * 20;
        let shakeY = (Math.random() - 0.5) * screenShake * 20;
        // Draw subtle edge distortion
        let edgeColor = toColour(0, 0, 0, Math.floor(screenShake * 50));
        drawRect(shakeX, shakeY, 10, screenHeight, edgeColor);
        drawRect(screenWidth - 10 + shakeX, shakeY, 10, screenHeight, edgeColor);
    }

    // Matrix Mode - Digital rain effect
    if (toggleStates.matrixMode) {
        // Draw matrix-style falling characters
        let matrixColor = toColour(0, 255, 65, 150);
        let matrixBgColor = toColour(0, 30, 10, 100);

        // Draw dark green overlay
        drawRect(0, 0, screenWidth, screenHeight, matrixBgColor);

        // Draw vertical lines simulating matrix rain
        for (let col = 0; col < 40; col++) {
            let x = col * 48;
            let offset = (matrixEffect * 50 + col * 73) % screenHeight;

            // Draw fading trail
            for (let i = 0; i < 15; i++) {
                let y = (offset + i * 30) % screenHeight;
                let alpha = Math.max(0, 150 - i * 10);
                let charColor = toColour(0, 255, 65, alpha);
                // Draw small rectangles as "characters"
                drawRect(x, y, 8, 12, charColor);
            }
        }

        // Add scanline effect
        for (let y = 0; y < screenHeight; y += 4) {
            let scanlineColor = toColour(0, 0, 0, 30);
            drawRect(0, y, screenWidth, 2, scanlineColor);
        }
    }

    // Night Vision Overlay - green tint effect if native doesn't work
    if (toggleStates.nightVision) {
        let nvColor = toColour(0, 80, 0, 60);
        drawRect(0, 0, screenWidth, screenHeight, nvColor);
        // Add grain effect
        for (let i = 0; i < 50; i++) {
            let grainX = Math.random() * screenWidth;
            let grainY = Math.random() * screenHeight;
            let grainColor = toColour(100, 255, 100, Math.floor(Math.random() * 30));
            drawRect(grainX, grainY, 2, 2, grainColor);
        }
    }

    // Thermal Vision Overlay - color bands if native doesn't work
    if (toggleStates.thermalVision) {
        let thermalColor = toColour(100, 50, 150, 40);
        drawRect(0, 0, screenWidth, screenHeight, thermalColor);
        // Add heat shimmer effect
        for (let i = 0; i < 30; i++) {
            let heatX = Math.random() * screenWidth;
            let heatY = Math.random() * screenHeight;
            let heatW = 20 + Math.random() * 40;
            let heatH = 10 + Math.random() * 20;
            let r = 200 + Math.floor(Math.random() * 55);
            let g = 100 + Math.floor(Math.random() * 100);
            let b = Math.floor(Math.random() * 50);
            let heatColor = toColour(r, g, b, 20);
            drawRect(heatX, heatY, heatW, heatH, heatColor);
        }
    }
});

// Draw rectangle using graphics API
function drawRect(x, y, w, h, colour) {
    try {
        let pos = new Vec2(x, y);
        let size = new Vec2(w, h);
        graphics.drawRectangle(null, pos, size, colour, colour, colour, colour);
    } catch(e) {}
}

// Draw gradient rectangle (left color to right color)
function drawGradientRect(x, y, w, h, colourLeft, colourRight) {
    try {
        let pos = new Vec2(x, y);
        let size = new Vec2(w, h);
        graphics.drawRectangle(null, pos, size, colourLeft, colourRight, colourLeft, colourRight);
    } catch(e) {}
}

// Draw text using loaded font or fallback
function drawText(text, x, y, colour, size) {
    if (menuFont != null) {
        try {
            let pos = new Vec2(x, y);
            menuFont.render(text, pos, menu.width, 0.0, 0.0, size, colour, false, false, false, true);
        } catch(e) {}
    }
}

// ============================================================================
// NOTIFICATIONS (stub - notifications removed, function kept for compatibility)
// ============================================================================

function showNotification(text) {
    // Notifications removed - toggle states now shown in menu labels
}

// ============================================================================
// TOGGLE EFFECTS
// ============================================================================

// Track last toggle states to only call native when changed
let lastGodMode = false;
let lastInvincible = false;
let lastSuperRun = false;
let lastNoRagdoll = false;
let lastVehGodMode = false;
let lastDriftMode = false;
let lastInvisible = false;
let processCounter = 0;

// Spinbot speed control (lower = slower)
let spinbotSpeed = 2;

addEventHandler("OnProcess", function(event) {
    if (!localPlayer) return;
    processCounter++;

    // Player god mode - use invincibility native + health
    if (toggleStates.godMode !== lastGodMode) {
        try {
            natives.setCharInvincible(localPlayer, toggleStates.godMode);
        } catch(e) {}
        lastGodMode = toggleStates.godMode;
    }

    // Keep health topped up in god mode as backup
    if (toggleStates.godMode) {
        if (localPlayer.health < 200) localPlayer.health = 200;
        if (localPlayer.armour < 100) localPlayer.armour = 100;
    }

    // Invincible toggle - separate from god mode, just invincibility
    if (toggleStates.invincible !== lastInvincible) {
        try {
            natives.setCharInvincible(localPlayer, toggleStates.invincible);
            natives.setCharProofs(localPlayer, toggleStates.invincible, toggleStates.invincible, toggleStates.invincible, toggleStates.invincible, toggleStates.invincible);
        } catch(e) {}
        lastInvincible = toggleStates.invincible;
    }

    // Super Run - increase movement speed
    if (toggleStates.superRun !== lastSuperRun) {
        try {
            if (toggleStates.superRun) {
                natives.setCharMoveAnimSpeedMultiplier(localPlayer, 3.0);
            } else {
                natives.setCharMoveAnimSpeedMultiplier(localPlayer, 1.0);
            }
        } catch(e) {}
        lastSuperRun = toggleStates.superRun;
    }

    // No Ragdoll - prevent ragdoll using multiple methods
    if (toggleStates.noRagdoll !== lastNoRagdoll) {
        try {
            // Use GTA IV specific natives
            natives.setCharCanBeKnockedOffBike(localPlayer, !toggleStates.noRagdoll);
            natives.setCharWillFlyThroughWindscreen(localPlayer, !toggleStates.noRagdoll);
        } catch(e) {}
        lastNoRagdoll = toggleStates.noRagdoll;
    }
    // Keep preventing ragdoll every frame
    if (toggleStates.noRagdoll) {
        try {
            // Multiple approaches for GTA IV ragdoll prevention
            natives.setCharCanBeKnockedOffBike(localPlayer, false);
            natives.setCharWillFlyThroughWindscreen(localPlayer, false);
            // Unlock ragdoll to reset it, then prevent
            natives.unlockRagdoll(localPlayer, true);
            // Make character not fall from hits
            natives.setCharNeverTargetted(localPlayer, false);
            // If currently in ragdoll, recover
            try {
                if (natives.isPedRagdoll(localPlayer)) {
                    natives.switchPedToAnimated(localPlayer, true);
                }
            } catch(e2) {}
            // Alternative: task to stand up
            try {
                natives.taskSetCharDecisionMaker(localPlayer, 0);
            } catch(e3) {}
        } catch(e) {}
    }

    // Never wanted - clear wanted level
    if (toggleStates.neverWanted) {
        try {
            natives.clearWantedLevel(0);
        } catch(e) {
            localPlayer.wantedLevel = 0;
        }
    }

    // Invisible - make player invisible
    if (toggleStates.invisible) {
        try {
            natives.setCharVisible(localPlayer, false);
        } catch(e) {}
    } else {
        try {
            natives.setCharVisible(localPlayer, true);
        } catch(e) {}
    }

    // Infinite Sprint - never get tired
    if (toggleStates.infiniteSprint) {
        try {
            natives.setCharNeverTired(localPlayer, true);
        } catch(e) {}
    }

    // Freeze Position - lock player in place
    if (toggleStates.freezePlayer) {
        try {
            natives.freezeCharPosition(localPlayer, true);
        } catch(e) {}
    } else {
        try {
            natives.freezeCharPosition(localPlayer, false);
        } catch(e) {}
    }

    // Fire Bullets - set bullets on fire
    if (toggleStates.fireBullets) {
        try {
            natives.setCharShootRate(localPlayer, 100);
        } catch(e) {}
    }

    // Unlimited Ammo - add ammo for all weapon types
    if (toggleStates.unlimitedAmmo && processCounter % 30 === 0) {
        try {
            // Add ammo for common weapon IDs (pistol, shotgun, smg, rifle, sniper, rpg)
            let weaponIds = [5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18];
            for (let i = 0; i < weaponIds.length; i++) {
                natives.addAmmoToChar(localPlayer, weaponIds[i], 999);
            }
        } catch(e) {}
    }

    // No Reload - keep ammo in clip full
    if (toggleStates.noReload && processCounter % 5 === 0) {
        try {
            natives.setCharAmmoInClip(localPlayer, 999);
        } catch(e) {}
    }

    // Spinbot - rotate character heading
    if (toggleStates.spinbot) {
        try {
            let currentHeading = localPlayer.heading || 0;
            localPlayer.heading = (currentHeading + 10) % 360;
        } catch(e) {}
    }

    // Vehicle-specific toggles
    if (localPlayer.vehicle) {
        let veh = localPlayer.vehicle;

        // Vehicle god mode
        if (toggleStates.vehGodMode !== lastVehGodMode) {
            try {
                natives.setCarCanBeDamaged(veh, !toggleStates.vehGodMode);
            } catch(e) {}
            lastVehGodMode = toggleStates.vehGodMode;
        }
        if (toggleStates.vehGodMode) {
            try { natives.fixCar(veh); } catch(e) {}
        }

        // Drive on water - keep vehicle above water level
        if (toggleStates.driveOnWater) {
            try {
                let pos = veh.position;
                let waterZ = 0; // Sea level in GTA IV
                if (pos.z < waterZ + 1) {
                    // Keep car floating on water
                    let vel = veh.velocity;
                    veh.position = new Vec3(pos.x, pos.y, waterZ + 0.8);
                    // Maintain forward momentum but cancel downward
                    if (vel.z < 0) {
                        veh.velocity = new Vec3(vel.x, vel.y, 0);
                    }
                }
            } catch(e) {}
        }

        // Rainbow car color - cycle through colors
        if (toggleStates.rainbowCar && processCounter % 5 === 0) {
            try {
                rainbowHue = (rainbowHue + 3) % 360;
                let rgb = hsvToRgb(rainbowHue, 1, 1);
                // Use closest GTA color (cycle through color indices)
                let colorIndex = Math.floor(rainbowHue / 3) % 132;
                natives.changeCarColour(veh, colorIndex, colorIndex);
            } catch(e) {}
        }

        // Drift mode - reduce traction
        if (toggleStates.driftMode !== lastDriftMode) {
            try {
                if (toggleStates.driftMode) {
                    // Make car slide more
                    natives.setCarCanBeVisiblyDamaged(veh, false);
                }
            } catch(e) {}
            lastDriftMode = toggleStates.driftMode;
        }
        if (toggleStates.driftMode) {
            // Apply sideways slip when turning
            try {
                let vel = veh.velocity;
                let speed = Math.sqrt(vel.x * vel.x + vel.y * vel.y);
                if (speed > 10) {
                    // Add slight sideways force for drift effect
                    let heading = veh.heading || 0;
                    let slideX = Math.cos(heading) * 0.5;
                    let slideY = -Math.sin(heading) * 0.5;
                    veh.velocity = new Vec3(vel.x + slideX, vel.y + slideY, vel.z);
                }
            } catch(e) {}
        }

        // ===== HANDLING EDITOR EFFECTS =====
        // Apply acceleration boost when driveForce is modified
        if (handlingMods.acceleration > 1.0) {
            try {
                let vel = veh.velocity;
                let speed = Math.sqrt(vel.x * vel.x + vel.y * vel.y);
                // Only boost when accelerating (moving forward)
                if (speed > 1 && speed < 50) {
                    let heading = veh.heading || 0;
                    let boostFactor = (handlingMods.acceleration - 1.0) * 0.05;
                    let boostX = Math.sin(heading) * -boostFactor * speed;
                    let boostY = Math.cos(heading) * boostFactor * speed;
                    veh.velocity = new Vec3(vel.x + boostX, vel.y + boostY, vel.z);
                }
            } catch(e) {}
        }

        // Apply top speed limiting/boosting
        if (handlingMods.topSpeed !== 1.0) {
            try {
                let vel = veh.velocity;
                let speed = Math.sqrt(vel.x * vel.x + vel.y * vel.y);
                let maxSpeed = 35 * handlingMods.topSpeed; // Base max ~35 m/s (~126 km/h)

                // If going too fast for the setting, slow down
                if (speed > maxSpeed && handlingMods.topSpeed < 1.0) {
                    let factor = maxSpeed / speed;
                    veh.velocity = new Vec3(vel.x * factor, vel.y * factor, vel.z);
                }
                // If speed boost is enabled and accelerating, add forward push
                else if (handlingMods.topSpeed > 1.0 && speed > 20 && speed < maxSpeed) {
                    let heading = veh.heading || 0;
                    let pushFactor = (handlingMods.topSpeed - 1.0) * 0.02;
                    let pushX = Math.sin(heading) * -pushFactor * speed;
                    let pushY = Math.cos(heading) * pushFactor * speed;
                    veh.velocity = new Vec3(vel.x + pushX, vel.y + pushY, vel.z);
                }
            } catch(e) {}
        }

        // Apply enhanced braking
        if (handlingMods.braking > 1.0) {
            // Braking effect is passive - applied when vehicle is slowing down
            // This would need input detection to work properly
        }

        // Fly mode - WASD controls altitude
        if (toggleStates.flyMode) {
            try {
                let pos = veh.position;
                let vel = veh.velocity;
                let heading = veh.heading || 0;

                // Anti-gravity - keep vehicle airborne
                if (vel.z < 0) {
                    veh.velocity = new Vec3(vel.x, vel.y, vel.z * 0.5);
                }

                // Lift vehicle
                veh.position = new Vec3(pos.x, pos.y, pos.z + 0.1);

                // Apply forward force based on heading
                let forwardX = Math.sin(heading) * -2;
                let forwardY = Math.cos(heading) * 2;
                veh.velocity = new Vec3(vel.x + forwardX * 0.1, vel.y + forwardY * 0.1, 0.5);
            } catch(e) {}
        }

        // Vehicle shoots RPG
        if (toggleStates.vehShootRPG) {
            let now = Date.now();
            if (now - lastVehShot > 500) { // Fire every 500ms when key held
                try {
                    let pos = veh.position;
                    let heading = veh.heading || 0;
                    // Shoot from front of vehicle
                    let frontX = pos.x + Math.sin(heading) * -5;
                    let frontY = pos.y + Math.cos(heading) * 5;
                    let fromPos = new Vec3(frontX, frontY, pos.z + 1);
                    let toX = frontX + Math.sin(heading) * -100;
                    let toY = frontY + Math.cos(heading) * 100;
                    let toPos = new Vec3(toX, toY, pos.z + 1);

                    // Shoot projectile
                    natives.shootSingleBulletBetweenCoords(
                        fromPos.x, fromPos.y, fromPos.z,
                        toPos.x, toPos.y, toPos.z,
                        100, true, 18, localPlayer, true, true, 100
                    );
                    lastVehShot = now;
                } catch(e) {}
            }
        }
    }

    // Rainbow sky effect
    if (toggleStates.rainbowSky && processCounter % 3 === 0) {
        try {
            rainbowHue = (rainbowHue + 2) % 360;
            let rgb = hsvToRgb(rainbowHue, 0.7, 1);
            natives.setSkyboxTint(rgb.r, rgb.g, rgb.b);
        } catch(e) {}
    }

    // Static sky color
    if (!toggleStates.rainbowSky && skyColorIndex > 0) {
        try {
            let color = skyColors[skyColorIndex];
            natives.setSkyboxTint(color.r, color.g, color.b);
        } catch(e) {}
    }

    // COMPLETELY disable phone when menu is open
    if (menuOpen) {
        try {
            // Multiple methods to kill phone
            natives.destroyMobilePhone();
            natives.scriptIsUsingMobilePhone(true);

            // Block player input to phone
            natives.taskUseMobilePhone(localPlayer, false);

            // Force phone off
            if (natives.getPlayerIsUsingMobilePhone(0)) {
                natives.destroyMobilePhone();
            }
        } catch(e) {}
    }
});

// HSV to RGB conversion for rainbow effects
function hsvToRgb(h, s, v) {
    let r, g, b;
    let i = Math.floor(h / 60) % 6;
    let f = h / 60 - i;
    let p = v * (1 - s);
    let q = v * (1 - f * s);
    let t = v * (1 - (1 - f) * s);

    switch (i) {
        case 0: r = v; g = t; b = p; break;
        case 1: r = q; g = v; b = p; break;
        case 2: r = p; g = v; b = t; break;
        case 3: r = p; g = q; b = v; break;
        case 4: r = t; g = p; b = v; break;
        case 5: r = v; g = p; b = q; break;
    }

    return {
        r: Math.round(r * 255),
        g: Math.round(g * 255),
        b: Math.round(b * 255)
    };
}

// Neon lights rendering - draw colored lights under vehicle using drawLightWithRange
addEventHandler("OnProcess", function(event) {
    if (!toggleStates.neonLights || !localPlayer || !localPlayer.vehicle) return;

    try {
        let veh = localPlayer.vehicle;
        let pos = veh.position;
        let heading = veh.heading || 0;

        // Convert heading to radians for rotation
        let cosH = Math.cos(heading);
        let sinH = Math.sin(heading);

        // Neon light positions relative to vehicle center
        // Format: { x: side offset, y: front/back, z: height, range: light radius }
        let neonPoints = [
            // Left side strip (front to back)
            { x: -1.2, y: 1.5, z: -0.4, range: 3.0 },
            { x: -1.2, y: 0.5, z: -0.4, range: 3.0 },
            { x: -1.2, y: -0.5, z: -0.4, range: 3.0 },
            { x: -1.2, y: -1.5, z: -0.4, range: 3.0 },
            // Right side strip (front to back)
            { x: 1.2, y: 1.5, z: -0.4, range: 3.0 },
            { x: 1.2, y: 0.5, z: -0.4, range: 3.0 },
            { x: 1.2, y: -0.5, z: -0.4, range: 3.0 },
            { x: 1.2, y: -1.5, z: -0.4, range: 3.0 },
            // Front strip
            { x: -0.6, y: 2.0, z: -0.4, range: 2.5 },
            { x: 0.6, y: 2.0, z: -0.4, range: 2.5 },
            // Rear strip
            { x: -0.6, y: -2.0, z: -0.4, range: 2.5 },
            { x: 0.6, y: -2.0, z: -0.4, range: 2.5 }
        ];

        // Draw each neon light point
        for (let i = 0; i < neonPoints.length; i++) {
            let point = neonPoints[i];

            // Rotate point by vehicle heading
            let worldX = pos.x + (point.x * cosH - point.y * sinH);
            let worldY = pos.y + (point.x * sinH + point.y * cosH);
            let worldZ = pos.z + point.z;

            // Draw light with range (GTA IV native)
            // drawLightWithRange(x, y, z, r, g, b, range, intensity)
            try {
                natives.drawLightWithRange(
                    worldX, worldY, worldZ,
                    neonColor.r, neonColor.g, neonColor.b,
                    point.range, 1.0
                );
            } catch(e1) {
                // Fallback: try alternate parameter order
                try {
                    natives.drawLightWithRange(
                        worldX, worldY, worldZ,
                        neonColor.r / 255, neonColor.g / 255, neonColor.b / 255,
                        point.range, 100.0
                    );
                } catch(e2) {}
            }
        }
    } catch(e) {
        console.log("[ModMenu] Neon error: " + e);
    }
});

// Explosive ammo - detect player shooting
let lastPlayerPos = null;
addEventHandler("OnPedWeaponShoot", function(event, ped, weapon) {
    if (!toggleStates.explosiveAmmo) return;
    if (ped !== localPlayer) return;

    try {
        // Create explosion at impact point
        // Since we can't get exact impact, create small explosion in front
        let pos = localPlayer.position;
        let heading = localPlayer.heading || 0;
        let dist = 20; // Distance in front
        let expX = pos.x + Math.sin(heading) * -dist;
        let expY = pos.y + Math.cos(heading) * dist;

        // Small delay then explode
        setTimeout(function() {
            try {
                natives.addExplosion(expX, expY, pos.z, 0, 2.0, true, false, 0.5);
            } catch(e) {}
        }, 100);
    } catch(e) {}
});

// ============================================================================
// INITIALIZATION
// ============================================================================

// ============================================================================
// HANDLING EDITOR FUNCTIONS
// ============================================================================

// Apply a single handling value to the current vehicle
// Uses verified GTA IV natives and GTA Connected OOP properties
function applyHandlingValue(param, value) {
    if (!localPlayer || !localPlayer.vehicle) return;

    let veh = localPlayer.vehicle;

    try {
        switch(param) {
            case "tractionCurveMax":
                // SET_CAR_TRACTION - Verified GTA IV native
                // Multiplies the vehicle's traction
                try {
                    natives.setCarTraction(veh, value);
                } catch(e) {
                    console.log("[Handling] setCarTraction failed: " + e);
                }
                break;

            case "tractionCurveMin":
                // Apply combined with max for overall grip feel
                try {
                    let combinedTraction = (handlingValues.tractionCurveMax + value) / 2;
                    natives.setCarTraction(veh, combinedTraction);
                } catch(e) {}
                break;

            case "tractionBias":
                // Adjust traction based on front/rear distribution
                // Lower values = more rear grip, higher = more front
                try {
                    let adjustedTraction = handlingValues.tractionCurveMax * (0.5 + (value - 0.5) * 0.5);
                    natives.setCarTraction(veh, adjustedTraction);
                } catch(e) {}
                break;

            case "tractionLoss":
                // Higher values = easier to lose traction
                // Apply reduced traction based on loss value
                try {
                    let lossTraction = handlingValues.tractionCurveMax / (1 + (value - 0.8));
                    natives.setCarTraction(veh, Math.max(0.3, lossTraction));
                } catch(e) {}
                break;

            case "suspensionForce":
                // Visual feedback - suspension stiffness affects bounce animation
                suspensionOffset = (value - 2.0) * 0.02; // Stiffer = less bounce
                break;

            case "suspensionRaise":
                // Visual suspension height offset
                suspensionOffset = value;
                break;

            case "suspensionCompDamp":
                // Affects bounce feel - stored for visual animation
                break;

            case "driveForce":
                // Engine power - affects acceleration multiplier
                handlingMods.acceleration = value / 0.25;
                // For actual speed boost, we'll apply this in the process loop
                break;

            case "initialDriveMaxVel":
                // Top speed - store multiplier for speed limiting
                handlingMods.topSpeed = value / 200.0;
                break;

            case "brakeForce":
                // Brake strength multiplier
                handlingMods.braking = value / 0.8;
                break;

            case "mass":
                // SET_CAR_MASS or use OOP property
                try {
                    // Try native first
                    natives.setCarMass(veh, value);
                } catch(e1) {
                    // Fallback to OOP property if available
                    try {
                        veh.mass = value;
                    } catch(e2) {
                        console.log("[Handling] mass set failed: " + e2);
                    }
                }
                break;

            case "centreOfMassZ":
                // Try OOP property for center of mass
                try {
                    if (veh.centerOfMass) {
                        let com = veh.centerOfMass;
                        veh.centerOfMass = new Vec3(com.x, com.y, value);
                    }
                } catch(e) {}
                break;

            case "steeringLock":
                // Steering angle - visual/stored only
                // GTA IV doesn't have a runtime native for this
                break;
        }
    } catch(e) {
        console.log("[HandlingEditor] Error applying " + param + ": " + e);
    }
}

// Reset handling to default values
function resetHandlingToDefault() {
    handlingValues = {
        tractionCurveMax: 2.0,
        tractionCurveMin: 1.8,
        tractionBias: 0.5,
        suspensionForce: 2.0,
        suspensionCompDamp: 1.0,
        suspensionReboundDamp: 1.2,
        suspensionUpperLimit: 0.12,
        suspensionLowerLimit: -0.10,
        suspensionRaise: 0.0,
        driveForce: 0.25,
        driveInertia: 1.0,
        initialDriveMaxVel: 200.0,
        brakeForce: 0.8,
        mass: 1500.0,
        centreOfMassZ: 0.0,
        steeringLock: 35.0,
        tractionLoss: 0.8
    };

    // Reset visual feedback
    tyreGlowColors = { fr: {r:0,g:255,b:100}, fl: {r:0,g:255,b:100}, rr: {r:0,g:255,b:100}, rl: {r:0,g:255,b:100} };
    engineGlow.intensity = 0;
    brakeGlow.intensity = 0;
    suspensionOffset = 0;
    selectedHandlingParam = "";

    // Apply defaults to vehicle
    if (localPlayer && localPlayer.vehicle) {
        let veh = localPlayer.vehicle;
        // Reset traction
        try {
            natives.setCarTraction(veh, 2.0);
        } catch(e) {
            console.log("[Handling] Reset traction failed: " + e);
        }
        // Reset mass
        try {
            natives.setCarMass(veh, 1500.0);
        } catch(e1) {
            try {
                veh.mass = 1500.0;
            } catch(e2) {}
        }
        // Repair vehicle to reset any damage-based handling issues
        try {
            natives.fixCar(veh);
        } catch(e) {}
    }

    // Reset handling mods (independent from drift mode toggle)
    handlingMods = {
        grip: 1.0,
        acceleration: 1.0,
        topSpeed: 1.0,
        braking: 1.0
    };

    console.log("[Handling] Reset to defaults");
}

// Apply handling presets
function applyHandlingPreset(preset) {
    switch(preset) {
        case "race":
            handlingValues.tractionCurveMax = 3.5;
            handlingValues.tractionCurveMin = 3.0;
            handlingValues.suspensionForce = 4.0;
            handlingValues.suspensionCompDamp = 2.0;
            handlingValues.suspensionRaise = -0.05;
            handlingValues.driveForce = 0.50;
            handlingValues.initialDriveMaxVel = 300.0;
            handlingValues.brakeForce = 1.5;
            handlingValues.mass = 1200.0;
            break;
        case "drift":
            handlingValues.tractionCurveMax = 1.5;
            handlingValues.tractionCurveMin = 1.0;
            handlingValues.tractionLoss = 1.8;
            handlingValues.tractionBias = 0.7;
            handlingValues.suspensionForce = 3.0;
            handlingValues.driveForce = 0.40;
            handlingValues.brakeForce = 1.0;
            // Low traction values create drift feeling without needing drift mode toggle
            break;
        case "offroad":
            handlingValues.tractionCurveMax = 2.5;
            handlingValues.suspensionForce = 1.5;
            handlingValues.suspensionCompDamp = 0.6;
            handlingValues.suspensionRaise = 0.12;
            handlingValues.driveForce = 0.35;
            handlingValues.mass = 2000.0;
            break;
        case "lowrider":
            handlingValues.suspensionForce = 0.8;
            handlingValues.suspensionCompDamp = 0.4;
            handlingValues.suspensionRaise = -0.12;
            handlingValues.driveForce = 0.20;
            handlingValues.initialDriveMaxVel = 150.0;
            break;
    }

    // Apply all values
    for (let param in handlingValues) {
        applyHandlingValue(param, handlingValues[param]);
    }

    // Update visuals
    updateAllHandlingVisuals();
}

// Update visual feedback based on parameter
function updateHandlingVisuals(param, value) {
    switch(param) {
        case "tractionCurveMax":
        case "tractionCurveMin":
        case "tractionLoss":
            // Tyre color: Red = low grip, Green = high grip
            let gripFactor = Math.min(1, Math.max(0, (value - 0.5) / 4.0));
            let r = Math.floor(255 * (1 - gripFactor));
            let g = Math.floor(255 * gripFactor);
            tyreGlowColors.fr = tyreGlowColors.fl = tyreGlowColors.rr = tyreGlowColors.rl = {r: r, g: g, b: 50};
            break;
        case "tractionBias":
            // Front vs rear tyre colors
            let frontGrip = 1 - value;
            let rearGrip = value;
            tyreGlowColors.fr = tyreGlowColors.fl = {r: Math.floor(255 * (1 - frontGrip)), g: Math.floor(255 * frontGrip), b: 50};
            tyreGlowColors.rr = tyreGlowColors.rl = {r: Math.floor(255 * (1 - rearGrip)), g: Math.floor(255 * rearGrip), b: 50};
            break;
        case "driveForce":
            // Engine glow intensity based on power
            engineGlow.intensity = Math.min(1, value / 0.5);
            engineGlow.r = 255;
            engineGlow.g = Math.floor(100 + 100 * (1 - engineGlow.intensity));
            engineGlow.b = 0;
            break;
        case "brakeForce":
            // Brake glow
            brakeGlow.intensity = Math.min(1, value / 2.0);
            break;
        case "suspensionRaise":
            suspensionOffset = value;
            break;
        case "mass":
            // Heavier = darker shadow/glow underneath
            break;
    }
}

// Update all visuals based on current handling values
function updateAllHandlingVisuals() {
    updateHandlingVisuals("tractionCurveMax", handlingValues.tractionCurveMax);
    updateHandlingVisuals("driveForce", handlingValues.driveForce);
    updateHandlingVisuals("brakeForce", handlingValues.brakeForce);
    updateHandlingVisuals("suspensionRaise", handlingValues.suspensionRaise);
}

// Check if we're in a handling editor submenu
function isInHandlingEditor() {
    return currentMenu === "handlingEditor" ||
           currentMenu.startsWith("handling_");
}

// ============================================================================
// HANDLING EDITOR VISUALIZATION - Clean & Informative
// ============================================================================

// Render the handling editor visualization
addEventHandler("OnDrawnHUD", function(event) {
    // Only render when in handling editor menus and menu is open
    if (!menuOpen || !isInHandlingEditor()) {
        handlingEditorAnim = Math.max(0, handlingEditorAnim - 0.15);
        if (handlingEditorAnim <= 0) return;
    } else {
        handlingEditorAnim = Math.min(1, handlingEditorAnim + 0.12);
    }

    let theme = getTheme();
    let alpha = Math.floor(255 * handlingEditorAnim);

    // Panel position (left side of screen)
    let panelX = 40;
    let panelY = 120;
    let panelW = 380;
    let panelH = 520;

    // Slide in animation
    let slideOffset = (1 - handlingEditorAnim) * -150;
    panelX += slideOffset;

    // ===== PANEL BACKGROUND =====
    let bgColor = toColour(15, 15, 20, Math.floor(235 * handlingEditorAnim));
    drawRect(panelX, panelY, panelW, panelH, bgColor);

    // Border
    let borderColor = toColour(theme.primary.r, theme.primary.g, theme.primary.b, Math.floor(alpha * 0.8));
    drawRect(panelX, panelY, panelW, 2, borderColor);
    drawRect(panelX, panelY + panelH - 2, panelW, 2, borderColor);
    drawRect(panelX, panelY, 2, panelH, borderColor);
    drawRect(panelX + panelW - 2, panelY, 2, panelH, borderColor);

    // ===== HEADER =====
    let headerBg = toColour(25, 25, 35, alpha);
    drawRect(panelX + 2, panelY + 2, panelW - 4, 35, headerBg);

    let titleColor = toColour(255, 255, 255, alpha);
    drawText("HANDLING TUNER", panelX + 12, panelY + 10, titleColor, 16);

    // Vehicle status
    let statusText = "NO VEHICLE";
    let statusColor = toColour(255, 80, 80, alpha);
    if (localPlayer && localPlayer.vehicle) {
        statusText = "ACTIVE";
        statusColor = toColour(80, 255, 80, alpha);
    }
    drawText(statusText, panelX + panelW - 70, panelY + 12, statusColor, 11);

    // ===== TOP-DOWN CAR DIAGRAM =====
    let carCenterX = panelX + panelW / 2;
    let carCenterY = panelY + 130;
    let carW = 70;
    let carH = 120;
    let carX = carCenterX - carW / 2;
    let carY = carCenterY - carH / 2;

    // Suspension height visual offset (subtle)
    let suspOffset = suspensionOffset * 30;
    carY += suspOffset;

    // Car body outline
    let bodyOutline = toColour(60, 60, 70, alpha);
    drawRect(carX - 1, carY - 1, carW + 2, carH + 2, bodyOutline);

    // Car body
    let bodyColor = toColour(50, 50, 60, alpha);
    drawRect(carX, carY, carW, carH, bodyColor);

    // Windshield
    let glassColor = toColour(80, 100, 120, alpha);
    drawRect(carX + 10, carY + 25, carW - 20, 25, glassColor);
    drawRect(carX + 12, carY + carH - 35, carW - 24, 18, glassColor);

    // ===== WHEELS WITH GRIP INDICATOR =====
    let wheelW = 18;
    let wheelH = 30;
    let wheels = [
        { x: carX - wheelW + 3, y: carY + 12, color: tyreGlowColors.fl, label: "FL" },
        { x: carX + carW - 3, y: carY + 12, color: tyreGlowColors.fr, label: "FR" },
        { x: carX - wheelW + 3, y: carY + carH - 12 - wheelH, color: tyreGlowColors.rl, label: "RL" },
        { x: carX + carW - 3, y: carY + carH - 12 - wheelH, color: tyreGlowColors.rr, label: "RR" }
    ];

    for (let i = 0; i < wheels.length; i++) {
        let w = wheels[i];

        // Wheel background
        let wheelBg = toColour(25, 25, 30, alpha);
        drawRect(w.x, w.y, wheelW, wheelH, wheelBg);

        // Grip indicator bar on wheel (colored based on traction)
        let gripBarH = Math.floor(wheelH * 0.8);
        let gripColor = toColour(w.color.r, w.color.g, w.color.b, alpha);
        drawRect(w.x + 2, w.y + (wheelH - gripBarH) / 2, 4, gripBarH, gripColor);

        // Wheel outline
        let wheelOutline = toColour(80, 80, 90, alpha);
        drawRect(w.x, w.y, wheelW, 1, wheelOutline);
        drawRect(w.x, w.y + wheelH - 1, wheelW, 1, wheelOutline);
    }

    // ===== TRACTION BIAS ARROWS =====
    let biasY = carCenterY;
    let frontBias = 1 - handlingValues.tractionBias;
    let rearBias = handlingValues.tractionBias;

    // Front bias indicator (above car)
    let frontArrowColor = toColour(100, 200, 100, Math.floor(alpha * frontBias));
    drawRect(carCenterX - 15, carY - 15, 30, 3, frontArrowColor);
    drawText(Math.floor(frontBias * 100) + "%", carCenterX - 12, carY - 28, frontArrowColor, 9);

    // Rear bias indicator (below car)
    let rearArrowColor = toColour(100, 200, 100, Math.floor(alpha * rearBias));
    drawRect(carCenterX - 15, carY + carH + 12, 30, 3, rearArrowColor);
    drawText(Math.floor(rearBias * 100) + "%", carCenterX - 12, carY + carH + 18, rearArrowColor, 9);

    // Center of mass indicator
    let comY = carCenterY + (handlingValues.centreOfMassZ * 50);
    let comColor = toColour(255, 200, 0, alpha);
    drawRect(carCenterX - 4, comY - 4, 8, 8, comColor);

    // ===== DATA TABLE =====
    let tableX = panelX + 15;
    let tableY = panelY + 210;
    let labelCol = toColour(160, 160, 170, alpha);
    let valueCol = toColour(255, 255, 255, alpha);
    let rowH = 22;

    // Section: Traction
    let sectionColor = toColour(theme.accent.r, theme.accent.g, theme.accent.b, alpha);
    drawText("TRACTION", tableX, tableY, sectionColor, 11);
    tableY += 18;

    drawText("Grip Level:", tableX, tableY, labelCol, 10);
    drawText(handlingValues.tractionCurveMax.toFixed(2), tableX + 140, tableY, valueCol, 10);
    let gripDesc = handlingValues.tractionCurveMax < 1.5 ? "Slippery" : handlingValues.tractionCurveMax < 2.5 ? "Normal" : handlingValues.tractionCurveMax < 3.5 ? "High" : "Maximum";
    drawText(gripDesc, tableX + 200, tableY, toColour(tyreGlowColors.fr.r, tyreGlowColors.fr.g, tyreGlowColors.fr.b, alpha), 10);
    tableY += rowH;

    drawText("Traction Loss:", tableX, tableY, labelCol, 10);
    drawText(handlingValues.tractionLoss.toFixed(2), tableX + 140, tableY, valueCol, 10);
    let lossDesc = handlingValues.tractionLoss < 0.5 ? "Stable" : handlingValues.tractionLoss < 1.0 ? "Normal" : "Drifty";
    drawText(lossDesc, tableX + 200, tableY, labelCol, 10);
    tableY += rowH;

    drawText("Bias (F/R):", tableX, tableY, labelCol, 10);
    drawText(Math.floor(frontBias * 100) + "/" + Math.floor(rearBias * 100), tableX + 140, tableY, valueCol, 10);
    tableY += rowH + 8;

    // Section: Engine
    drawText("ENGINE", tableX, tableY, sectionColor, 11);
    tableY += 18;

    drawText("Power:", tableX, tableY, labelCol, 10);
    drawText(handlingValues.driveForce.toFixed(2), tableX + 140, tableY, valueCol, 10);
    let powerPct = Math.floor((handlingValues.driveForce / 1.2) * 100);
    let powerColor = powerPct > 100 ? toColour(255, 150, 0, alpha) : valueCol;
    drawText(powerPct + "%", tableX + 200, tableY, powerColor, 10);
    tableY += rowH;

    drawText("Top Speed:", tableX, tableY, labelCol, 10);
    drawText(handlingValues.initialDriveMaxVel.toFixed(0) + " km/h", tableX + 140, tableY, valueCol, 10);
    tableY += rowH;

    drawText("Brake Force:", tableX, tableY, labelCol, 10);
    drawText(handlingValues.brakeForce.toFixed(2), tableX + 140, tableY, valueCol, 10);
    let brakePct = Math.floor((handlingValues.brakeForce / 3.0) * 100);
    drawText(brakePct + "%", tableX + 200, tableY, valueCol, 10);
    tableY += rowH + 8;

    // Section: Suspension
    drawText("SUSPENSION", tableX, tableY, sectionColor, 11);
    tableY += 18;

    drawText("Height:", tableX, tableY, labelCol, 10);
    let heightDesc = handlingValues.suspensionRaise < -0.08 ? "Slammed" : handlingValues.suspensionRaise < -0.02 ? "Low" : handlingValues.suspensionRaise < 0.02 ? "Stock" : handlingValues.suspensionRaise < 0.08 ? "Raised" : "Lifted";
    drawText(heightDesc, tableX + 140, tableY, valueCol, 10);
    drawText((handlingValues.suspensionRaise >= 0 ? "+" : "") + handlingValues.suspensionRaise.toFixed(2), tableX + 200, tableY, labelCol, 10);
    tableY += rowH;

    drawText("Stiffness:", tableX, tableY, labelCol, 10);
    let stiffDesc = handlingValues.suspensionForce < 1.5 ? "Soft" : handlingValues.suspensionForce < 3.0 ? "Normal" : handlingValues.suspensionForce < 5.0 ? "Firm" : "Race";
    drawText(stiffDesc, tableX + 140, tableY, valueCol, 10);
    drawText(handlingValues.suspensionForce.toFixed(1), tableX + 200, tableY, labelCol, 10);
    tableY += rowH + 8;

    // Section: Weight
    drawText("WEIGHT", tableX, tableY, sectionColor, 11);
    tableY += 18;

    drawText("Mass:", tableX, tableY, labelCol, 10);
    drawText(handlingValues.mass.toFixed(0) + " kg", tableX + 140, tableY, valueCol, 10);
    let massDesc = handlingValues.mass < 1000 ? "Light" : handlingValues.mass < 2000 ? "Normal" : handlingValues.mass < 3500 ? "Heavy" : "Tank";
    drawText(massDesc, tableX + 200, tableY, labelCol, 10);
    tableY += rowH;

    drawText("CoM Height:", tableX, tableY, labelCol, 10);
    let comDesc = handlingValues.centreOfMassZ < -0.1 ? "Low" : handlingValues.centreOfMassZ < 0.1 ? "Center" : "High";
    drawText(comDesc, tableX + 140, tableY, valueCol, 10);
    tableY += rowH + 8;

    // ===== LIVE VEHICLE DATA =====
    if (localPlayer && localPlayer.vehicle) {
        let veh = localPlayer.vehicle;
        drawText("LIVE DATA", tableX, tableY, sectionColor, 11);
        tableY += 18;

        try {
            let vel = veh.velocity;
            let speed = Math.sqrt(vel.x * vel.x + vel.y * vel.y) * 3.6; // m/s to km/h
            drawText("Speed:", tableX, tableY, labelCol, 10);
            drawText(speed.toFixed(0) + " km/h", tableX + 140, tableY, toColour(0, 200, 255, alpha), 10);
            tableY += rowH;
        } catch(e) {}

        try {
            let health = veh.health;
            drawText("Health:", tableX, tableY, labelCol, 10);
            let healthColor = health > 700 ? toColour(0, 255, 0, alpha) : health > 300 ? toColour(255, 200, 0, alpha) : toColour(255, 50, 50, alpha);
            drawText(health.toFixed(0), tableX + 140, tableY, healthColor, 10);
        } catch(e) {}
    }

    // ===== FOOTER =====
    let footerY = panelY + panelH - 22;
    let footerColor = toColour(100, 100, 110, alpha);
    drawText("Changes apply in real-time", tableX, footerY, footerColor, 9);
});

addEventHandler("OnResourceStart", function(event, resource) {
    console.log("[ModMenu] Client loaded - Press F5 to open menu");
});

console.log("[ModMenu] Script initialized");
