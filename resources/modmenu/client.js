// ============================================================================
// REVOLUTION MOD MENU - Client Side
// Interactive GUI menu for all players
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
    "nightVision": "🌙 NIGHT VISION - Enhanced vision in darkness!"
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
    braking: 1.0,
    driftMode: false
};

// ============================================================================
// MENU DATA STRUCTURE
// ============================================================================

const menuData = {
    main: {
        title: "REVOLUTION",
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
            { label: "--- Toggles ---", action: "none" },
            { label: "God Mode", action: "toggle", target: "godMode", state: false },
            { label: "Invincible", action: "toggle", target: "invincible", state: false },
            { label: "Super Run", action: "toggle", target: "superRun", state: false },
            { label: "No Ragdoll", action: "toggle", target: "noRagdoll", state: false },
            { label: "Never Wanted", action: "toggle", target: "neverWanted", state: false },
            { label: "--- Actions ---", action: "none" },
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
            { label: "God Mode", action: "toggle", target: "vehGodMode", state: false },
            { label: "Nitro Boost", action: "veh_nitro" },
            { label: "Drive On Water", action: "toggle", target: "driveOnWater", state: false },
            { label: "Rainbow Color", action: "toggle", target: "rainbowCar", state: false },
            { label: "Drift Mode", action: "toggle", target: "driftMode", state: false },
            { label: "Neon Lights", action: "submenu", target: "veh_neons" },
            { label: "Fly Mode", action: "toggle", target: "flyMode", state: false },
            { label: "Shoot RPG", action: "toggle", target: "vehShootRPG", state: false }
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
            { label: "White", action: "veh_color", value: [1, 1] },
            { label: "Dark Gray", action: "veh_color", value: [2, 2] },
            { label: "Light Gray", action: "veh_color", value: [3, 3] },
            { label: "Red", action: "veh_color", value: [27, 27] },
            { label: "Dark Red", action: "veh_color", value: [28, 28] },
            { label: "Orange", action: "veh_color", value: [38, 38] },
            { label: "Yellow", action: "veh_color", value: [42, 42] },
            { label: "Dark Yellow", action: "veh_color", value: [43, 43] },
            { label: "Green", action: "veh_color", value: [53, 53] },
            { label: "Dark Green", action: "veh_color", value: [54, 54] },
            { label: "Blue", action: "veh_color", value: [51, 51] },
            { label: "Dark Blue", action: "veh_color", value: [52, 52] },
            { label: "Light Blue", action: "veh_color", value: [55, 55] },
            { label: "Purple", action: "veh_color", value: [39, 39] },
            { label: "Pink", action: "veh_color", value: [40, 40] },
            { label: "Brown", action: "veh_color", value: [41, 41] },
            { label: "Beige", action: "veh_color", value: [56, 56] },
            { label: "Bronze", action: "veh_color", value: [57, 57] },
            { label: "Silver", action: "veh_color", value: [58, 58] },
            { label: "Gold", action: "veh_color", value: [59, 59] },
            { label: "Chrome", action: "veh_color", value: [60, 60] },
            { label: "--- Two Tone ---", action: "none" },
            { label: "Black/Red", action: "veh_color", value: [0, 27] },
            { label: "Black/White", action: "veh_color", value: [0, 1] },
            { label: "Red/Black", action: "veh_color", value: [27, 0] },
            { label: "Blue/White", action: "veh_color", value: [51, 1] },
            { label: "Green/White", action: "veh_color", value: [53, 1] },
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
            { label: "--- Environment ---", action: "none" },
            { label: "Clear Area", action: "world_clear_area" },
            { label: "Clear Vehicles", action: "world_clear_vehicles" },
            { label: "Clear Peds", action: "world_clear_peds" },
            { label: "Clear Objects", action: "world_clear_objects" },
            { label: "Traffic ON", action: "world_traffic", value: true },
            { label: "Traffic OFF", action: "world_traffic", value: false },
            { label: "Set Traffic Density", action: "submenu", target: "world_traffic_density" },
            { label: "--- Visual Effects ---", action: "none" },
            { label: "Rainbow Sky", action: "toggle", target: "rainbowSky", state: false },
            { label: "Sky Colors", action: "submenu", target: "sky_colors" },
            { label: "Timecycle Modifier", action: "submenu", target: "world_timecycles" }
        ]
    },

    sky_colors: {
        title: "SKY COLORS",
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
        title: "TRAFFIC DENSITY",
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
            { label: "Explosive Ammo", action: "toggle", target: "explosiveAmmo", state: false },
            { label: "--- Give Weapon ---", action: "none" },
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
            { label: "Ragdoll", action: "fun_ragdoll" },
            { label: "--- Chaos Mode ---", action: "none" },
            { label: "Explode Me", action: "fun_explode" },
            { label: "Random Explosion", action: "fun_random_explosion" },
            { label: "Car Rain", action: "fun_car_rain" },
            { label: "Ped Invasion", action: "fun_ped_invasion" },
            { label: "Weapon Shower", action: "fun_weapon_shower" },
            { label: "--- Spawning ---", action: "none" },
            { label: "Spawn Random Ped", action: "fun_ped" },
            { label: "Spawn Gang", action: "fun_gang" },
            { label: "Spawn Army", action: "fun_army" },
            { label: "Spawn Money Rain", action: "fun_money_rain" },
            { label: "--- Visual Effects ---", action: "none" },
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
    vehGodMode: false,
    driveOnWater: false,
    rainbowCar: false,
    driftMode: false,
    neonLights: false,
    flyMode: false,
    vehShootRPG: false,
    rainbowSky: false,
    explosiveAmmo: false,
    moonGravity: false,
    drunkMode: false,
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

// Execute teleport
addNetworkHandler("ModMenu:ExecuteTeleport", function(x, y, z) {
    if (!localPlayer) return;

    try {
        let pos = new Vec3(x, y, z);
        localPlayer.position = pos;
        showNotification("Teleported!");
    } catch(e) {
        console.log("[ModMenu] Teleport error: " + e);
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

// Vehicle model hashes for GTA IV (matching clean names)
const vehicleHashes = {
    // Sports Cars
    "infernus": 0x18F25AC7,
    "turismo": 0x185484E1,
    "comet": 0x067BC037,
    "banshee": 0xC1E908D2,
    "sultan": 0x39DA2754,
    "coquette": 0x108773431,
    // Muscle Cars
    "buccaneer": 0x682211828,
    "dukes": 0x2B26F456,
    "faction": 0x2119578145,
    "ruiner": 0x227741703,
    "sabre": 0x449022887,
    "sabregt": 0x9B909C94,
    "vigero": 0xCEC6B9B7,
    // Sedans
    "admiral": 0x1264341792,
    "cavalcade": 0x2006918058,
    "cognoscenti": 0x2030171296,
    "emperor": 0x685276541,
    "esperanto": 0x276900515,
    "feroci": 0x974744810,
    "feltzer": 0x8911B9F5,
    "intruder": 0x886934177,
    "landstalker": 0x1269098716,
    "lokus": 0x37030056,
    "marbella": 0x1304597482,
    "merit": 0x1260881538,
    "oracle": 0x1348744438,
    "pinnacle": 0x131140572,
    "premiere": 0x1883869285,
    "presidente": 0x1962071130,
    "primo": 0x1150599089,
    "rebla": 0x83136452,
    "romero": 0x627094268,
    "schafter": 0x322343873,
    "sentinel": 0x1349725314,
    "solair": 0x1344573448,
    "stratum": 0x1723137093,
    "stretch": 0x1961627517,
    "vincent": 0x583281407,
    "virgo": 0x498054846,
    "willard": 0x1937616578,
    "washington": 0x1777363799,
    // SUVs & Trucks
    "bobcat": 0x1075851868,
    "boxville": 0x1987130134,
    "biff": 0x850991848,
    "burrito": 0x1346687836,
    "chavos": 0x67282078,
    "dilettante": 0x1130810103,
    "flatbed": 0x1353720154,
    "forklift": 0x1491375716,
    "habanero": 0x884422927,
    "huntley": 0x486987393,
    "moonbeam": 0x525509695,
    "mule": 0x904750859,
    "packer": 0x569305213,
    "patriot": 0x808457413,
    "perennial": 0x2077743597,
    "pony": 0x119658072,
    "rancher": 0x1390084576,
    "speedo": 0x810318068,
    "stockade": 0x1747439474,
    "trashmaster": 0x1917016601,
    "yankee": 0x1099960214,
    // Compacts
    "blista": 0x344943009,
    "futo": 0x2016857647,
    "ingot": 0x1289722222,
    "pmp600": 0x1376298265,
    "sultanrs": 0x295689028,
    // Motorcycles
    "faggio": 0x1842748181,
    "hellfury": 0x584879743,
    "nrg900": 0x6F039A67,
    "pcj600": 0x909201658,
    "sanchez": 0x788045382,
    "zombie": 0x570033273,
    // Emergency
    "ambulance": 0x1171614426,
    "firetruk": 0x1938952078,
    "police": 0x2046537925,
    "police2": 0x1627000575,
    "police3": 0x350085182,
    "police4": 0x1127131465,
    "nstockade": 0x1900572838,
    "pstockade": 0x1911513875,
    "fbi": 0x432EA949,
    "noose": 0x148777611,
    // Helicopters
    "annihilator": 0x837858166,
    "maverick": 0x1660661558,
    "polmav": 0x353883353,
    "tourmav": 0x2027357303,
    // Boats
    "dinghy": 0x1033245328,
    "jetmax": 0x861409633,
    "marquis": 0x1043459709,
    "predator": 0x488123221,
    "reefer": 0x1759673526,
    "squalo": 0x400514754,
    "tropic": 0x290013743,
    "tuga": 0x1064455782,
    // Commercial
    "airtug": 0x1560980623,
    "benson": 0x2053223216,
    "burrito2": 0x907477130,
    "cabby": 0x1884962369,
    // Special
    "mrtasty": 0x583100975,
    "cablecar": 0x960289747,
    "subway": 0x800869680,
    "eltrain": 0x1953988645,
    // Taxis
    "taxi": 0x956048545,
    "taxi2": 0x1208856469,
    "romantaxi": 0x1932515764
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
                let spawnPos = new Vec3(pos.x, pos.y, pos.z + 1);

                // Create the car
                let vehicle = natives.createCar(modelHash, spawnPos, true);

                if (vehicle) {
                    natives.setCarHeading(vehicle, heading);
                    // Warp player into the vehicle
                    natives.warpCharIntoCar(localPlayer, vehicle);
                    showNotification("Spawned: " + vehicleName);
                } else {
                    showNotification("Failed to create vehicle");
                }

                // Mark model as no longer needed
                natives.markModelAsNoLongerNeeded(modelHash);
            } else if (attempts > 50) {
                clearInterval(spawnInterval);
                showNotification("Model load timeout for: " + vehicleName);
            }
        }, 100);
    } catch(e) {
        console.log("[ModMenu] Vehicle error: " + e);
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

// Execute skin change
addNetworkHandler("ModMenu:ExecuteSkinChange", function(skinId) {
    if (!localPlayer) return;

    try {
        if (skinId === "random") {
            let skins = [-1667301416, -163448165, 1936355839, -1938475496, 970234525];
            skinId = skins[Math.floor(Math.random() * skins.length)];
        }

        // Request the model first
        natives.requestModel(skinId);

        // Wait for model to load then change skin
        let attempts = 0;
        let skinInterval = setInterval(function() {
            attempts++;
            if (natives.hasModelLoaded(skinId)) {
                clearInterval(skinInterval);
                // Change player model using player index 0
                natives.changePlayerModel(0, skinId);
                natives.markModelAsNoLongerNeeded(skinId);
                showNotification("Skin changed!");
            } else if (attempts > 50) {
                clearInterval(skinInterval);
                showNotification("Skin load failed");
            }
        }, 100);
    } catch(e) {
        console.log("[ModMenu] Skin change error: " + e);
    }
});

// ============================================================================
// RENDERING - REVOLUTION MOD MENU (Red & Black Eye-Melting Theme)
// ============================================================================

// Smooth animation update with original effects
addEventHandler("OnProcess", function(event) {
    // Update animation time - SMOOTHED
    animTime += 0.02;
    titlePulse += 0.04;
    selectedPulse += 0.06;
    colorShift += 0.01;
    particleTime += 0.05;
    
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

            // Drunk mode
            if (toggleStates.drunkMode) {
                natives.setGameSpeed(0.8 + Math.sin(animTime * 2) * 0.2);
                natives.forceCameraShake(0.1, 0.1, 1.0);
            } else {
                natives.setGameSpeed(1.0);
            }

            // Visual effects
            if (toggleStates.thermalVision) {
                natives.setDrawInfrared(true);
                natives.setDrawNightvision(false);
            } else if (toggleStates.nightVision) {
                natives.setDrawNightvision(true);
                natives.setDrawInfrared(false);
            } else {
                natives.setDrawInfrared(false);
                natives.setDrawNightvision(false);
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

    // ===== SMOOTH PULSING RED OUTER GLOW =====
    let glowPulse = Math.sin(animTime * 2) * 0.3 + 0.7;
    let glowSize = 10 + Math.sin(animTime * 1.5) * 4;

    // Red glow with smooth pulse
    let redIntensity = Math.floor(200 + Math.sin(animTime * 2) * 45);
    for (let g = 4; g >= 1; g--) {
        let gAlpha = Math.floor((40 / g) * glowPulse * menuOpenAnim);
        let gCol = toColour(redIntensity, 0, 0, gAlpha);
        drawRect(baseX - glowSize * g, baseY - glowSize * g,
                 menu.width + glowSize * g * 2, totalHeight + glowSize * g * 2 + 10, gCol);
    }

    // ===== MAIN BACKGROUND - Deep Black =====
    let bgColor = toColour(8, 8, 12, Math.floor(245 * menuOpenAnim));
    drawRect(baseX, baseY, menu.width, totalHeight + 10, bgColor);

    // ===== SMOOTH ANIMATED RED BORDER =====
    let borderPulse = Math.sin(animTime * 3) * 40 + 200;
    let borderColor = toColour(Math.floor(borderPulse), 20, 30, Math.floor(220 * menuOpenAnim));

    // Smooth border thickness
    let borderW = 3 + Math.sin(animTime * 3) * 0.8;
    drawRect(baseX, baseY, menu.width, borderW, borderColor); // Top
    drawRect(baseX, baseY + totalHeight + 10 - borderW, menu.width, borderW, borderColor); // Bottom
    drawRect(baseX, baseY, borderW, totalHeight + 10, borderColor); // Left
    drawRect(baseX + menu.width - borderW, baseY, borderW, totalHeight + 10, borderColor); // Right

    // Corner accents - smooth brighter red
    let cornerSize = 15 + Math.sin(animTime * 2) * 4;
    let cornerColor = toColour(255, 50, 50, Math.floor(200 * menuOpenAnim));
    drawRect(baseX, baseY, cornerSize, 3, cornerColor);
    drawRect(baseX, baseY, 3, cornerSize, cornerColor);
    drawRect(baseX + menu.width - cornerSize, baseY, cornerSize, 3, cornerColor);
    drawRect(baseX + menu.width - 3, baseY, 3, cornerSize, cornerColor);
    drawRect(baseX, baseY + totalHeight + 7, cornerSize, 3, cornerColor);
    drawRect(baseX, baseY + totalHeight + 10 - cornerSize, 3, cornerSize, cornerColor);
    drawRect(baseX + menu.width - cornerSize, baseY + totalHeight + 7, cornerSize, 3, cornerColor);
    drawRect(baseX + menu.width - 3, baseY + totalHeight + 10 - cornerSize, 3, cornerSize, cornerColor);

    // ===== HEADER - Smooth Black to Red Gradient =====
    let headerRed = Math.floor(180 + Math.sin(animTime * 2) * 30);
    let headerLeft = toColour(headerRed, 15, 25, animAlpha);
    let headerRight = toColour(60, 5, 10, animAlpha);
    drawGradientRect(baseX + 4, baseY + 4, menu.width - 8, menu.headerHeight - 4, headerLeft, headerRight);

    // Header smooth glow line
    let lineGlow = Math.sin(animTime * 4) * 0.3 + 0.7;
    let headerLineColor = toColour(255, 80, 80, Math.floor(150 * lineGlow * menuOpenAnim));
    drawRect(baseX + 4, baseY + menu.headerHeight - 2, menu.width - 8, 2, headerLineColor);

    // ===== ANIMATED TITLE =====
    let titleY = baseY + 10;

    // Title glow effect
    let titleGlowPulse = Math.sin(titlePulse) * 0.5 + 0.5;
    let titleGlowColor = toColour(255, 50, 50, Math.floor(100 * titleGlowPulse * menuOpenAnim));
    drawText("REVOLUTION", baseX + 14, titleY + 2, titleGlowColor, 24);
    drawText("REVOLUTION", baseX + 8, titleY + 2, titleGlowColor, 24);

    // Title shadow
    let shadowColor = toColour(0, 0, 0, Math.floor(200 * menuOpenAnim));
    drawText("REVOLUTION", baseX + 12, titleY + 3, shadowColor, 24);

    // Main title - pulsing red to white
    let titleRed = Math.floor(255);
    let titleOther = Math.floor(180 + Math.sin(titlePulse * 2) * 75);
    let titleColor = toColour(titleRed, titleOther, titleOther, animAlpha);
    drawText("REVOLUTION", baseX + 10, titleY, titleColor, 24);

    // Subtitle with flicker
    let betaFlicker = Math.sin(animTime * 8) > 0.3 ? 1 : 0.7;
    let betaColor = toColour(180, 180, 180, Math.floor(180 * betaFlicker * menuOpenAnim));
    drawText("ModMenu (Beta)", baseX + 12, titleY + 30, betaColor, 11);

    // Smooth animated line under title
    let lineWidth = 100 + Math.sin(animTime * 3) * 30;
    let linePulse = Math.sin(animTime * 4) * 40 + 200;
    let underlineColor = toColour(Math.floor(linePulse), 30, 40, Math.floor(220 * menuOpenAnim));
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
            // ===== SELECTED ITEM - Pulsing Red =====
            let selRed = Math.floor(150 + selectGlow * 80);
            let selColor = toColour(selRed, 20, 30, Math.floor(230 * menuOpenAnim));

            // Outer glow
            let selGlowColor = toColour(255, 40, 50, Math.floor(50 * menuOpenAnim));
            drawRect(baseX + 2, itemY - 3, menu.width - 4, menu.itemHeight + 6, selGlowColor);

            // Main selection background
            drawRect(baseX + 6 + selectOffset, itemY, menu.width - 12, menu.itemHeight - 2, selColor);

            // Left indicator bar - smooth bright red pulsing
            let barPulse = Math.sin(selectedPulse * 1.5) * 40 + 200;
            let barColor = toColour(255, Math.floor(barPulse - 150), Math.floor(barPulse - 150), animAlpha);
            drawRect(baseX + 6, itemY, 5, menu.itemHeight - 2, barColor);

            // Right edge highlight
            let rightColor = toColour(255, 80, 80, Math.floor(100 * menuOpenAnim));
            drawRect(baseX + menu.width - 8, itemY, 2, menu.itemHeight - 2, rightColor);

        } else if (item.action === "none") {
            // Separator
            let sepColor = toColour(40, 15, 20, Math.floor(180 * menuOpenAnim));
            drawRect(baseX + 6, itemY, menu.width - 12, menu.itemHeight - 2, sepColor);
            // Separator line
            let sepLineColor = toColour(100, 30, 40, Math.floor(150 * menuOpenAnim));
            drawRect(baseX + 20, itemY + menu.itemHeight/2 - 1, menu.width - 40, 1, sepLineColor);
        } else {
            // Normal item - dark with subtle red tint
            let normRed = 25 + (i % 2) * 5;
            let normColor = toColour(normRed, 12, 15, Math.floor(200 * menuOpenAnim));
            drawRect(baseX + 6, itemY, menu.width - 12, menu.itemHeight - 2, normColor);

            // Subtle left border on hover area
            let leftBorderColor = toColour(80, 20, 25, Math.floor(100 * menuOpenAnim));
            drawRect(baseX + 6, itemY, 2, menu.itemHeight - 2, leftBorderColor);
        }

        // Item text
        let textX = baseX + 22 + (isSelected ? selectOffset + 6 : 0);
        let textBright = isSelected ? 255 : 200;
        let textColor = toColour(textBright, textBright, textBright, animAlpha);

        if (item.action === "none") {
            let sepTextColor = toColour(150, 100, 110, Math.floor(200 * menuOpenAnim));
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

        // Submenu arrow - smoother
        if (item.action === "submenu") {
            let arrowX = baseX + menu.width - 32 + (isSelected ? Math.sin(animTime * 5) * 3 : 0);
            let arrowBright = isSelected ? 255 : 150;
            let arrowColor = toColour(arrowBright, arrowBright * 0.6, arrowBright * 0.6, animAlpha);
            drawText(">>", arrowX, itemY + 12, arrowColor, 14);
        }
    }

    // ===== FOOTER =====
    let footerY = yPos + visibleCount * menu.itemHeight;
    let footerColor = toColour(20, 8, 12, Math.floor(230 * menuOpenAnim));
    drawRect(baseX + 4, footerY, menu.width - 8, menu.footerHeight, footerColor);

    // Footer top line
    let footerLineColor = toColour(120, 40, 50, Math.floor(180 * menuOpenAnim));
    drawRect(baseX + 4, footerY, menu.width - 8, 2, footerLineColor);

    // Footer text
    let footerTextColor = toColour(180, 150, 150, Math.floor(200 * menuOpenAnim));
    drawText("UP/DOWN  |  ENTER  |  BACK", baseX + 25, footerY + 10, footerTextColor, 11);

    // ===== SCROLL BAR =====
    if (items.length > menu.maxVisibleItems) {
        let scrollTrackColor = toColour(40, 15, 20, Math.floor(150 * menuOpenAnim));
        let scrollTrackY = baseY + menu.headerHeight + 5;
        let scrollTrackH = visibleCount * menu.itemHeight - 10;
        drawRect(baseX + menu.width - 12, scrollTrackY, 6, scrollTrackH, scrollTrackColor);

        let scrollPct = scrollOffset / Math.max(1, items.length - visibleCount);
        let scrollBarH = Math.max(30, scrollTrackH * (visibleCount / items.length));
        let scrollBarY = scrollTrackY + scrollPct * (scrollTrackH - scrollBarH);

        let scrollPulse = Math.sin(animTime * 2) * 30 + 180;
        let scrollBarColor = toColour(Math.floor(scrollPulse), 50, 60, Math.floor(220 * menuOpenAnim));
        drawRect(baseX + menu.width - 12, scrollBarY, 6, scrollBarH, scrollBarColor);
    }

    // ===== INFO BAR =====
    if (currentDescription && currentDescription.length > 0) {
        let infoY = baseY + totalHeight + 15;
        let infoBarHeight = infoBar.height;
        
        // Background with glow effect
        let infoGlowPulse = Math.sin(animTime * 2) * 0.3 + 0.7;
        let infoBgColor = toColour(20, 10, 15, Math.floor(220 * menuOpenAnim));
        drawRect(baseX, infoY, menu.width, infoBarHeight, infoBgColor);
        
        // Animated red border (matching menu style)
        let infoBorderPulse = Math.sin(animTime * 3) * 40 + 200;
        let infoBorderColor = toColour(Math.floor(infoBorderPulse), 30, 40, Math.floor(200 * menuOpenAnim));
        drawRect(baseX, infoY, menu.width, 3, infoBorderColor); // Top
        drawRect(baseX, infoY + infoBarHeight - 3, menu.width, 3, infoBorderColor); // Bottom
        drawRect(baseX, infoY, 3, infoBarHeight, infoBorderColor); // Left
        drawRect(baseX + menu.width - 3, infoY, 3, infoBarHeight, infoBorderColor); // Right
        
        // Corner accents (matching menu style)
        let cornerSize = 12 + Math.sin(animTime * 2) * 3;
        let cornerColor = toColour(255, 60, 60, Math.floor(180 * menuOpenAnim));
        drawRect(baseX, infoY, cornerSize, 3, cornerColor);
        drawRect(baseX, infoY, 3, cornerSize, cornerColor);
        drawRect(baseX + menu.width - cornerSize, infoY, cornerSize, 3, cornerColor);
        drawRect(baseX + menu.width - cornerSize, infoY, 3, cornerSize, cornerColor);
        drawRect(baseX, infoY + infoBarHeight - cornerSize, infoY, 3, cornerSize, cornerColor);
        drawRect(baseX + menu.width - cornerSize, infoY + infoBarHeight - cornerSize, infoY, 3, cornerSize, cornerColor);
        
        // Description text with glow effect
        let textGlow = Math.sin(animTime * 4) * 0.4 + 0.6;
        let glowColor = toColour(255, 80, 80, Math.floor(30 * textGlow * menuOpenAnim));
        drawText(currentDescription, baseX + 14, infoY + 18, glowColor, 14);
        
        // Main description text
        let textColor = toColour(255, 255, 255, Math.floor(255 * menuOpenAnim));
        drawText(currentDescription, baseX + 12, infoY + 18, textColor, 12);
        
        // "INFO" label
        let labelColor = toColour(200, 100, 100, Math.floor(200 * menuOpenAnim));
        drawText("ℹ INFO", baseX + 12, infoY + 2, labelColor, 10);
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
// NOTIFICATIONS - Animated
// ============================================================================

let notifications = [];

function showNotification(text) {
    notifications.push({
        text: text,
        time: Date.now(),
        duration: 1500
    });
}

addEventHandler("OnDrawnHUD", function(event) {
    let now = Date.now();
    let yPos = 180;

    for (let i = 0; i < notifications.length; i++) {
        let notif = notifications[i];
        let elapsed = now - notif.time;

        if (elapsed < notif.duration) {
            // Animated notification
            let progress = elapsed / notif.duration;
            let slideIn = Math.min(1, elapsed / 200) * 300;
            let fadeOut = elapsed > notif.duration - 300 ? (notif.duration - elapsed) / 300 : 1;
            let alpha = Math.floor(220 * fadeOut);

            // Rainbow border
            let notifHue = (animTime * 80 + i * 60) % 360;
            let notifRGB = hsvToRgb(notifHue, 0.8, 0.8);

            // Glow
            let glowCol = toColour(notifRGB.r, notifRGB.g, notifRGB.b, Math.floor(40 * fadeOut));
            drawRect(10 - slideIn + 300, yPos - 3, 290, 36, glowCol);

            // Background
            let bgColor = toColour(20, 20, 30, alpha);
            drawRect(15 - slideIn + 300, yPos, 280, 30, bgColor);

            // Border
            let borderCol = toColour(notifRGB.r, notifRGB.g, notifRGB.b, alpha);
            drawRect(15 - slideIn + 300, yPos, 3, 30, borderCol);

            // Text
            let textColor = toColour(255, 255, 255, alpha);
            drawText(notif.text, 25 - slideIn + 300, yPos + 8, textColor, 13);

            yPos += 40;
        }
    }

    notifications = notifications.filter(function(n) {
        return now - n.time < n.duration;
    });
});

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
let processCounter = 0;

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

    // No Ragdoll - prevent ragdoll
    if (toggleStates.noRagdoll !== lastNoRagdoll) {
        try {
            natives.setPedCanRagdoll(localPlayer, !toggleStates.noRagdoll);
        } catch(e) {}
        lastNoRagdoll = toggleStates.noRagdoll;
    }
    // Keep preventing ragdoll every frame
    if (toggleStates.noRagdoll) {
        try {
            natives.setPedCanRagdoll(localPlayer, false);
            // Cancel any active ragdoll
            if (natives.isPedRagdoll(localPlayer)) {
                natives.switchPedToAnimated(localPlayer, true);
            }
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

// Neon lights rendering - draw colored lights under vehicle
addEventHandler("OnDrawnHUD", function(event) {
    if (!toggleStates.neonLights || !localPlayer || !localPlayer.vehicle) return;

    try {
        let veh = localPlayer.vehicle;
        let pos = veh.position;

        // Draw light coronas under the car (simulated neons)
        let offsets = [
            { x: 1.5, y: 2, z: -0.3 },   // Front right
            { x: -1.5, y: 2, z: -0.3 },  // Front left
            { x: 1.5, y: -2, z: -0.3 },  // Rear right
            { x: -1.5, y: -2, z: -0.3 }, // Rear left
            { x: 0, y: 2.5, z: -0.3 },   // Front center
            { x: 0, y: -2.5, z: -0.3 }   // Rear center
        ];

        let heading = veh.heading || 0;
        let cosH = Math.cos(heading);
        let sinH = Math.sin(heading);

        for (let i = 0; i < offsets.length; i++) {
            let off = offsets[i];
            // Rotate offset by vehicle heading
            let worldX = pos.x + (off.x * cosH - off.y * sinH);
            let worldY = pos.y + (off.x * sinH + off.y * cosH);
            let worldZ = pos.z + off.z;

            // Draw corona/light at position
            natives.drawCorona(
                worldX, worldY, worldZ,
                50.0, 0, 0,
                neonColor.r, neonColor.g, neonColor.b
            );
        }
    } catch(e) {}
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

addEventHandler("OnResourceStart", function(event, resource) {
    console.log("[ModMenu] Client loaded - Press F5 to open menu");
});

console.log("[ModMenu] Script initialized");
