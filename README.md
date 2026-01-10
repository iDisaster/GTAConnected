# GTAConnected - Liberty City Freeroam Server

A comprehensive GTA IV freeroam server for GTAConnected with multiple features including vehicle spawning, teleportation, admin tools, weather control, and enhanced chat.

## Features

- **Freeroam System** - Random spawning across Liberty City with starter weapons
- **Vehicle Spawning** - 100+ GTA IV vehicles available via commands
- **Teleportation** - 30+ preset locations across all Liberty City boroughs
- **Admin System** - Full moderation tools (kick, ban, mute, freeze, etc.)
- **World Control** - Weather and time manipulation
- **Enhanced Chat** - Private messages, local chat, actions, and OOC chat
- **Kill Tracking** - Statistics for kills, deaths, and K/D ratio
- **Interactive Mod Menu** - Press F5 to access a full GUI menu with all features

## Installation

1. Download and install GTAConnected server from [gtaconnected.com](https://gtaconnected.com)
2. Copy all files from this repository to your GTAConnected server directory
3. Start the server using `Server.exe` (Windows) or `./Server` (Linux)

## Server Structure

```
GTAConnected/
├── server.xml              # Main server configuration
├── README.md
└── resources/
    ├── freeroam/           # Player spawning and basic commands
    │   ├── meta.xml
    │   ├── server.js
    │   └── client.js
    ├── vehicles/           # Vehicle spawning system
    │   ├── meta.xml
    │   └── server.js
    ├── admin/              # Admin moderation tools
    │   ├── meta.xml
    │   └── server.js
    ├── world/              # Weather and time control
    │   ├── meta.xml
    │   └── server.js
    ├── chat/               # Enhanced chat system
    │   ├── meta.xml
    │   └── server.js
    ├── teleport/           # Teleportation system
    │   ├── meta.xml
    │   └── server.js
    └── modmenu/            # Interactive GUI mod menu
        ├── meta.xml
        ├── server.js
        └── client.js
```

## Commands

### Player Commands

| Command | Description |
|---------|-------------|
| `/help` | Show all available commands |
| `/spawn` | Respawn at a random location |
| `/kill` | Kill yourself |
| `/pos` | Show your current coordinates |
| `/stats` | Show your kill/death statistics |
| `/players` | List online players |
| `/heal` | Restore your health |
| `/armour` | Give yourself armour |
| `/weapons` | Get all weapons |
| `/skin <id>` | Change your player skin |

### Vehicle Commands

| Command | Description |
|---------|-------------|
| `/v <name>` | Spawn a vehicle |
| `/dv` | Delete your spawned vehicles |
| `/vlist` | Show vehicle categories |
| `/vsearch <name>` | Search for vehicles |
| `/vcolor <c1> <c2>` | Change vehicle colors |
| `/flip` | Flip your vehicle upright |
| `/fix` | Repair your vehicle |
| `/eject` | Exit current vehicle |

### Teleport Commands

| Command | Description |
|---------|-------------|
| `/tp <location>` | Teleport to a location |
| `/tplist` | Show all teleport locations |
| `/tpsearch <name>` | Search for locations |
| `/setpos <x> <y> <z>` | Teleport to coordinates |
| `/savewaypoint <name>` | Save current position |
| `/tpwp <name>` | Teleport to saved waypoint |
| `/waypoints` | List your saved waypoints |
| `/airport` | Quick teleport to airport |
| `/hospital` | Quick teleport to hospital |

### World Commands

| Command | Description |
|---------|-------------|
| `/weather <0-9>` | Set weather type |
| `/time <hour>` | Set time of day |
| `/morning` | Set time to 8:00 |
| `/noon` | Set time to 12:00 |
| `/evening` | Set time to 18:00 |
| `/night` | Set time to 0:00 |
| `/sunny` | Set sunny weather |
| `/rain` | Set rainy weather |
| `/thunder` | Set thunderstorm |
| `/foggy` | Set foggy weather |
| `/freezetime` | Toggle time freeze |
| `/gettime` | Show current time |
| `/getweather` | Show current weather |

### Chat Commands

| Command | Description |
|---------|-------------|
| `/pm <player> <msg>` | Send private message |
| `/r <message>` | Reply to last PM |
| `/me <action>` | Roleplay action |
| `/do <description>` | Roleplay description |
| `/shout <message>` | Shout message |
| `/ooc <message>` | Out-of-character chat |
| `/local <message>` | Local area chat |

### Admin Commands

| Command | Description |
|---------|-------------|
| `/ahelp` | Show admin commands |
| `/kick <player> [reason]` | Kick a player |
| `/ban <player> [reason]` | Ban a player |
| `/unban <player>` | Unban a player |
| `/mute <player>` | Mute a player |
| `/unmute <player>` | Unmute a player |
| `/freeze <player>` | Freeze a player |
| `/unfreeze <player>` | Unfreeze a player |
| `/slap <player>` | Slap a player |
| `/goto <player>` | Teleport to player |
| `/bring <player>` | Bring player to you |
| `/announce <msg>` | Server announcement |
| `/setadmin <player>` | Grant admin rights |
| `/getip <player>` | Get player's IP |
| `/sethealth <player> <hp>` | Set player health |
| `/setarmour <player> <armor>` | Set player armour |
| `/explode <player>` | Explode a player |
| `/admins` | Show online admins |
| `/report <message>` | Report to admins |

## Available Vehicles

### Sports & Super Cars
- infernus, turismo, comet, banshee, sultan, coquette, feltzer
- entityxf, adder, vacca, bullet, cheetah

### Muscle Cars
- sabregt, stalion, vigero, dukes, ruiner, phoenix, gauntlet, dominator

### SUVs & Sedans
- patriot, cavalcade, granger, huntley, landstalker
- oracle, schafter, admiral, vincent, presidente, cognoscenti

### Emergency Vehicles
- police, police2, fbi, fbi2, noose, ambulance, firetruk

### Motorcycles
- nrg900, pcj600, sanchez, faggio, bati, akuma, hakuchou

### Aircraft & Boats
- annihilator, maverick, polmav, buzzard, shamal
- jetmax, marquis, predator, tropic, dinghy

## Teleport Locations

### Algonquin (Manhattan)
- starjunction, middlepark, rotterdam, chinatown, exchange, happiness

### Broker/Dukes (Brooklyn/Queens)
- broker, firefly, outlook, beach, hove, meadows, willis, airport

### Bohan (Bronx)
- bohan, northholland, industrial

### Alderney (New Jersey)
- alderney, alderneyport, westdyke, acter, berchem, tudor, leftwood

### Points of Interest
- hospital, police, bowling, cabaret, burgershot, helipad

## Weather Types

| ID | Weather |
|----|---------|
| 0 | Extra Sunny |
| 1 | Sunny |
| 2 | Sunny Windy |
| 3 | Cloudy |
| 4 | Raining |
| 5 | Drizzle |
| 6 | Foggy |
| 7 | Thunder |
| 8 | Extra Sunny 2 |
| 9 | Sunny Windy 2 |

## Configuration

### Server Settings (server.xml)

```xml
<servername>Liberty City Freeroam</servername>
<maxplayers>32</maxplayers>
<port>22000</port>
<game>IV</game>
```

### Adding Admins

Edit `resources/admin/server.js` and add player names to the admins array:

```javascript
const admins = [
    "YourName",
    "AnotherAdmin"
];
```

## Mod Menu (F5)

The server includes an interactive GUI mod menu accessible to all players by pressing **F5**.

### Menu Controls

| Key | Action |
|-----|--------|
| F5 | Open/Close Menu |
| UP/DOWN | Navigate items |
| ENTER | Select item |
| BACKSPACE/ESC | Go back |
| LEFT/RIGHT | Adjust values |

### Menu Categories

**Self Options**
- Restore health/armor
- Get all weapons
- Clear wanted level
- God Mode toggle
- Infinite ammo
- Super jump / Fast run
- Change player skin

**Vehicle Spawner**
- Sports Cars (Infernus, Turismo, Comet, etc.)
- Super Cars (Entity XF, Adder, Vacca, etc.)
- Muscle Cars (Sabre GT, Dukes, Ruiner, etc.)
- SUVs & Trucks
- Motorcycles
- Emergency Vehicles
- Aircraft & Boats

**Vehicle Options**
- Repair / Flip / Clean vehicle
- Change vehicle colors
- Drift Mode toggle
- Handling adjustments (Grip, Acceleration, Top Speed)
- Indestructible vehicle
- Nitro boost

**Network Options**
- View online players
- Teleport to any player
- Spectate players

**Teleport Locations**
- Quick teleport to 15+ Liberty City locations
- All boroughs covered (Algonquin, Broker, Bohan, Alderney)

**World Options**
- Set time of day
- Change weather

**Weapons**
- Get individual weapons
- Get all weapons at once

**Fun Options**
- Launch yourself into the air
- Spawn random peds
- Ragdoll mode
- Chaos mode

## Requirements

- GTAConnected Server (v1.0.72 or newer)
- GTA IV (with Episodes from Liberty City for all vehicles)
- Port 22000 UDP forwarded for online play

## Credits

- Built for [GTAConnected](https://gtaconnected.com)
- Documentation: [GTAConnected Wiki](https://wiki.gtaconnected.com)

## License

This project is open source and free to use for your GTA IV multiplayer server.
