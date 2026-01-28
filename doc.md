# Complete GTA Connected Documentation for GTA IV Mod Menu Development

This comprehensive offline documentation package covers all aspects of GTA Connected scripting for GTA IV mod menu development. The documentation is organized into logical sections for easy reference.

---

# FILE 1: SERVER-SIDE SCRIPTING REFERENCE

## Server Events (GTA IV Compatible)

### Element Events
```
OnElementDestroy(event: Event, element: Element)
OnElementStreamIn(event: Event, element: Element, client: Client)
OnElementStreamOut(event: Event, element: Element, client: Client)
```

### Player Events (All GTA IV Compatible)
```
OnPlayerConnect(event: Event, IP: string)
  - First connection event, before username received
  
OnPlayerJoin(event: Event, client: Client)
  - After name received, cancellable to reject connection
  
OnPlayerJoined(event: Event, client: Client)
  - Fully connected, use for spawn/welcome
  
OnPlayerQuit(event: Event, client: Client)
  - Player disconnecting
  
OnPlayerChat(event: Event, client: Client, text: string)
  - Chat message sent, cancellable
  
OnPlayerCommand(event: Event, client: Client, command: string, params: string)
  - Command typed (/command), cancellable
```

### Other Events
```
OnPedSpawn(event: Event, ped: Ped) - GTA IV supported
OnPickupCollected(event: Event, pickup: Pickup, ped: Ped) - Cancellable
OnProcess(event: Event) - Every server tick
OnResourceStart(event: Event, resource: Resource) - Cancellable
OnResourceStop(event: Event, resource: Resource) - Cancellable
OnServerStart(event: Event)
```

**Note:** OnPedCrouch, OnPedEnterVehicle, OnPedExitVehicle, OnPedFall, OnPedJump, OnPedUncrouch, OnPedWasted are **NOT supported** on GTA IV server-side.

## Server Functions

### Event Handling
```javascript
addEventHandler(eventName: string, handler: function) → void
bindEventHandler(eventName: string, element: Element, handler: function) → void
removeEventHandler(eventName: string, handler: function) → void
unbindEventHandler(eventName: string, element: Element, handler: function) → void
addEvent(eventName: string) → void  // Register custom event
triggerEvent(eventName: string, ...args) → void  // Local trigger
triggerNetworkEvent(eventName: string, client: Client, ...args) → void  // Network trigger
```

### Command Handling
```javascript
addCommandHandler(command: string, handler: function, replace?: bool) → bool
  // Server callback: function(command, text, client)
removeCommandHandler(command: string) → bool
hasCommandHandler(command: string) → bool
consoleCommand(command: string) → void
```

### Chat Functions
```javascript
message(text: string, colour?: int) → void  // To all players
messageClient(text: string, client: Client, colour?: int) → void
messageAllExcept(text: string, client: Client, colour?: int) → void
```

### Client Functions
```javascript
getClient(index: int) → Client
getClients() → array<Client>
getClientFromPlayerElement(player: Player) → Client
localClient → Client  // Server's local client
```

### Client Properties
```javascript
client.administrator → bool (read-write)
client.console → Console
client.game → int  // GAME_GTA_IV
client.gameVersion → string
client.index → int
client.ip → string
client.name → string (read-write)
client.ping → int
client.player → Player
client.getData(key) / client.setData(key, value) / client.removeData(key)
client.despawnPlayer() / client.disconnect([reason])
```

### Element Functions
```javascript
destroyElement(element: Element) → void
getElementFromId(id: int) → Element
getElementFromName(name: string) → Element
getElementsByType(type: int) → array<Element>
```

### Creation Functions
```javascript
gta.createBlip(position: Vec3) → Blip
gta.createBlipAttachedTo(element: Element) → Blip
gta.createBuilding(modelIndex: int, position: Vec3) → Building
gta.createSphere(position: Vec3, size: float) → Marker
gta.createPed(modelIndex: int, position: Vec3) → Ped
gta.createVehicle(modelIndex: int, position: Vec3) → Vehicle
gta.createPickup(modelIndex: int, position: Vec3, type: int) → Pickup
```

### Timer Functions
```javascript
setTimeout(handler: function, delay: int) → Timer
setInterval(handler: function, interval: int) → Timer
```

### Network Functions
```javascript
addNetworkHandler(eventName: string, handler: function) → void
removeNetworkHandler(eventName: string, handler: function) → void
```

### Camera Functions
```javascript
gta.fadeCamera(client: Client, fadeIn: bool, duration: int) → void
```

### Key Binding
```javascript
bindKey(client: Client, key: int, handler: function) → void
unbindKey(client: Client, key: int, handler: function) → void
unbindAllKeys(client: Client) → void
```

### Utility Functions
```javascript
toColour(r: int, g: int, b: int, a?: int) → int
vec2(x, y) / vec3(x, y, z) → Vec2/Vec3
new Vec2(x, y) / new Vec3(x, y, z)
inPoly(point, polygon) → bool
platform → string
```

---

# FILE 2: CLIENT-SIDE SCRIPTING REFERENCE

## Client Events (GTA IV Compatible)

### Drawing Events (Essential for Menus)
```
OnBeforeDrawHUD(event: Event) - Before HUD drawn
OnDrawHUD(event: Event) - During HUD drawing
OnDrawnHUD(event: Event) - After HUD drawn (BEST FOR MOD MENUS)
OnRender2D(event: Event) - 2D rendering phase
OnPreRender(event: Event) - Before rendering
OnRender(event: Event) - During rendering
OnPostRender2D(event: Event) - After 2D rendering
```

### Input Events (Essential for Navigation)
```
OnKeyDown(event: KeyEvent, keyCode: int, scanCode: int, modifiers: int)
OnKeyUp(event: KeyEvent, keyCode: int, scanCode: int, modifiers: int)
OnCharacter(event: Event, character: string)
OnMouseDown(event: Event, mouse: int, button: int, position: Vec2)
OnMouseUp(event: Event, mouse: int, button: int, position: Vec2)
OnMouseMove(event: Event, mouse: int, absolute: bool, coordinates: Vec2)
OnMouseWheel(event: Event, mouse: int, delta: int)
OnCursorDown(event: Event, button: int, position: Vec2)
OnCursorUp(event: Event, button: int, position: Vec2)
OnCursorMove(event: Event, position: Vec2)
```

### Camera Events
```
OnBeforeProcessCamera(event: Event)
OnCameraProcess(event: Event)
```

### Element Events
```
OnElementDestroy(event: Event, element: Element)
OnElementStreamIn(event: Event, element: Element)
OnElementStreamOut(event: Event, element: Element)
OnEntityProcess(event: Event, entity: Entity)
```

### Ped Events (GTA IV)
```
OnPedDead(event: Event, ped: Ped)
OnPedSpawn(event: Event, ped: Ped)
OnPedWasted(event: Event, ped: Ped)
```

### Resource Events
```
OnResourceReady(event: Event, resource: Resource) - Files ready, load fonts here
OnResourceStart(event: Event, resource: Resource)
OnResourceStop(event: Event, resource: Resource)
```

### Other Events
```
OnProcess(event: Event) - Every frame
OnFocus(event: Event) - Window focused
OnLostFocus(event: Event) - Window unfocused
OnDisconnect(event: Event)
OnGUIClick(event: Event, element: GUIElement)
OnChatOutput(event: Event, message: string)
```

## Client Functions

### Drawing Functions (Critical for Mod Menus)
```javascript
graphics.drawRectangle(x: float, y: float, width: float, height: float, colour: int) → void
  // GTA IV compatible - use this for menus
  
graphics.loadPNG(filePath: string) → Texture
graphics.loadBMP(filePath: string) → Texture
```

### Font Functions
```javascript
lucasFont.createFont(stream: Stream, size: float) → Font

font.render(text, position: Vec2, width: float, align: float, justify: float, 
            size: float, colour: int, wordWrap?: bool, colourCodes?: bool, 
            ignoreColourCodes?: bool, shadow?: bool) → void
  // align: 0.0=left, 0.5=center, 1.0=right
  
font.measure(text: string, width: float, size: float, wordWrap: bool) → Vec2
font.size → float
```

### Screen Properties
```javascript
gta.width → int   // Screen width in pixels
gta.height → int  // Screen height in pixels
```

### GUI Functions
```javascript
gui.showCursor(visible: bool, grabInput: bool) → void
gui.cursorEnabled → bool
gui.cursorPosition → Vec2
gui.addElement(element: GUIElement) → void
gui.destroyElement(element: GUIElement) → void
gui.getElementFromName(name: string) → GUIElement
```

### Camera Functions
```javascript
gta.fadeCamera(fadeIn: bool, duration: int, r?: int, g?: int, b?: int) → void
gta.fading → bool
gta.restoreCamera() → void
gta.setCameraLookAt(position: Vec3, transitionTime: int) → void
```

### Local Client
```javascript
localClient → Client
localClient.player → Player  // Local player ped
localClient.name → string
localPlayer → Ped  // Direct access to local player ped
```

### GTA IV Specific
```javascript
gta.ivGamemode → int   // Current IV game mode
gta.ivEpisode → int    // 0=IV, 1=TLAD, 2=TBOGT
gta.game → int         // GAME_GTA_IV
```

### File Functions
```javascript
openFile(filePath: string) → Stream
createFile(filePath: string) → Stream
loadTextFile(filePath: string) → string
saveTextFile(filePath: string, text: string) → void
```

### Colour Functions
```javascript
toColour(r: int, g: int, b: int, a?: int) → int
// Predefined: COLOUR_WHITE, COLOUR_BLACK, COLOUR_RED, COLOUR_GREEN, 
// COLOUR_BLUE, COLOUR_YELLOW, COLOUR_LIME
```

---

# FILE 3: GTA IV NATIVE FUNCTIONS (A-G)

All natives called via `natives.functionName(params)`

## Math Natives
```
natives.absf(float) → float
natives.absi(float) → int
natives.acos(float) → float
natives.asin(float) → float
natives.atan(float) → float
natives.atan2(y: float, x: float) → float
natives.cos(float) → float
natives.ceil(float) → int
natives.exp(float) → float
natives.floor(float) → int
natives.generateRandomFloat() → float (0.0-1.0)
natives.generateRandomFloatInRange(min: float, max: float) → float
natives.generateRandomInt() → int
natives.generateRandomIntInRange(min: int, max: int) → int
natives.getDistanceBetweenCoords2d(Vec2, Vec2) → float
natives.getDistanceBetweenCoords3d(Vec3, Vec3) → float
natives.getAngleBetween2dVectors(Vec2, Vec2) → float
natives.getHeadingFromVector2d(Vec2) → float
```

## Blip Natives
```
natives.addBlipForCar(Vehicle) → int
natives.addBlipForChar(Ped) → int
natives.addBlipForContact(Vec3) → int
natives.addBlipForCoord(Vec3) → int
natives.addBlipForGangTerritory(Vec2, Vec2, int) → int
natives.addBlipForRadius(Vec3, int) → int
natives.changeBlipAlpha(int, int) → void
natives.changeBlipColour(int, int) → void
natives.changeBlipDisplay(int, int) → void
natives.changeBlipNameFromAscii(int, string) → void
natives.changeBlipPriority(int, int) → void
natives.changeBlipRotation(int, int) → void
natives.changeBlipScale(int, float) → void
natives.changeBlipSprite(int, int) → void
natives.dimBlip(int, bool) → void
natives.doesBlipExist(int) → bool
natives.flashBlip(int, bool) → void
natives.getBlipCoords(int) → Vec3
```

## Camera Natives
```
natives.activateScriptedCams(bool, bool) → void
natives.attachCamToPed(int, Ped) → void
natives.attachCamToVehicle(int, Vehicle) → void
natives.beginCamCommands() → void
natives.camIsSphereVisible(int, float, float, float, float) → bool
natives.camRestore() → void
natives.camRestoreJumpcut() → void
natives.createCam(int) → int
natives.destroyAllCams() → void
natives.destroyCam(int) → void
natives.doesCamExist(int) → bool
natives.endCamCommands() → void
natives.getCamFov(int) → float
natives.getCamPos(int) → Vec3
natives.getCamRot(int) → Vec3
natives.getGameCam() → int
natives.getFreeCam() → int
```

## Ped/Character Natives
```
natives.addAmmoToChar(Ped, int weaponId, int amount) → void
natives.addArmourToChar(Ped, int amount) → void
natives.areAnyCharsNearChar(Ped, float radius) → bool
natives.areEnemyPedsInArea(Ped, Vec3, float radius) → bool
natives.blockCharAmbientAnims(Ped, bool) → void
natives.blockPedWeaponSwitching(Ped, bool) → void
natives.clearAllCharProps(Ped) → void
natives.clearCharTasks(Ped) → void
natives.clearCharTasksImmediately(Ped) → void
natives.createChar(int pedType, int model, Vec3 pos, bool network) → Ped
natives.createCharAsPassenger(Ped, int type, int model, int seat) → Ped
natives.createCharInsideCar(Vehicle, int type, int model) → Ped
natives.createRandomChar(Vec3) → Ped
natives.damageChar(Ped, int damage, bool armorFirst) → void
natives.deleteChar(Ped) → void
natives.doesCharExist(Ped) → bool
natives.explodeCharHead(Ped) → void
natives.forceCharToDropWeapon(Ped) → void
natives.freezeCharPosition(Ped, bool) → void
natives.getAmmoInCharWeapon(Ped, int weaponId) → int
natives.getCharArmour(Ped) → int
natives.getCharCoordinates(Ped) → Vec3
natives.getCharHeading(Ped) → float
natives.getCharHealth(Ped) → int
natives.getCharModel(Ped) → int
natives.getCharSpeed(Ped) → float
natives.getCharVelocity(Ped) → Vec3
natives.getCurrentCharWeapon(Ped) → int
natives.getOffsetFromCharInWorldCoords(Ped, Vec3 offset) → Vec3
natives.getPedBonePosition(Ped, int bone, Vec3 offset) → Vec3
natives.getPedType(Ped) → int
natives.giveWeaponToChar(Ped, int weapon, int ammo, bool hidden) → void
```

## Vehicle Natives
```
natives.addCarToMissionDeletionList(Vehicle) → void
natives.addStuckCarCheck(Vehicle, float speed, int duration) → void
natives.anchorBoat(Vehicle, bool) → void
natives.applyForceToCar(Vehicle, int type, Vec3 force, float offX, float offY, float offZ, int bone, int local, int unk1, int unk2) → void
natives.areTaxiLightsOn(Vehicle) → bool
natives.breakCarDoor(Vehicle, int door, bool delete) → void
natives.burstCarTyre(Vehicle, int tyre) → void
natives.changeCarColour(Vehicle, int primary, int secondary) → void
natives.clearAreaOfCars(Vec3, float radius) → void
natives.closeAllCarDoors(Vehicle) → void
natives.controlCarDoor(Vehicle, int door, int lock, float angle) → void
natives.createCar(int model, Vec3 pos, bool network) → Vehicle
natives.damageCar(Vehicle, Vec3 pos, float force, float radius, bool unk) → void
natives.deleteCar(Vehicle) → void
natives.doesCarHaveRoof(Vehicle) → bool
natives.doesVehicleExist(Vehicle) → bool
natives.explodeCar(Vehicle, bool damage, bool permanent) → void
natives.fixCar(Vehicle) → void
natives.fixCarTyre(Vehicle, int tyre) → void
natives.forceCarLights(Vehicle, int state) → void
natives.freezeCarPosition(Vehicle, bool) → void
natives.getCarColours(Vehicle) → {int, int}
natives.getCarCoordinates(Vehicle) → Vec3
natives.getCarHealth(Vehicle) → int
natives.getCarHeading(Vehicle) → float
natives.getCarModel(Vehicle) → int
natives.getCarSpeed(Vehicle) → float
natives.getDriverOfCar(Vehicle) → Ped
natives.getClosestCar(Vec3, float radius, bool network, int model) → Vehicle
```

## World/Explosion Natives
```
natives.addExplosion(Vec3, int type, float radius, bool sound, bool invisible, float shake) → void
natives.clearArea(Vec3, float radius, bool peds) → void
natives.clearAreaOfChars(Vec3, float radius) → void
natives.clearAreaOfCops(Vec3, float radius) → void
natives.clearAreaOfObjects(Vec3, float radius) → void
natives.extinguishFireAtPoint(Vec3, float radius) → void
natives.forceWeather(int type) → void
natives.forceWeatherNow(int type) → void
natives.forceTimeOfDay(int hours, int minutes) → void
natives.getCurrentWeather() → int
natives.getFrameTime() → float
natives.getGameTimer() → int
natives.getGroundZFor3dCoord(Vec3) → float
natives.getHoursOfDay() → int
natives.getMinutesOfDay() → int
```

## Drawing/UI Natives
```
natives.displayHud(bool) → void
natives.displayRadar(bool) → void
natives.displayAreaName(bool) → void
natives.displayCash(bool) → void
natives.displayAmmo(bool) → void
natives.displayPlayerNames(bool) → void
natives.displayText(Vec2, string gxtKey) → void
natives.displayTextWithLiteralString(Vec2, string gxt, string text) → void
natives.displayTextWithNumber(Vec2, string gxt, int number) → void
natives.drawCheckpoint(Vec3, float radius, int r, int g, int b) → void
natives.drawCheckpointWithAlpha(Vec3, float radius, int r, int g, int b, int a) → void
natives.drawColouredCylinder(Vec3, float radius, float height, int r, int g, int b, int a) → void
natives.drawRect(Vec2 pos, Vec2 size, int r, int g, int b, int a) → void
natives.drawSprite(int tex, float x, float y, float w, float h, float rot, int r, int g, int b, int a) → void
natives.doScreenFadeIn(int duration) → void
natives.doScreenFadeOut(int duration) → void
natives.clearHelp() → void
natives.clearPrints() → void
```

## Player Natives
```
natives.getPlayerId() → int
natives.getPlayerChar(int playerId) → Ped
natives.getPlayerName(int playerId) → string
natives.getPlayerGroup(int playerId) → int
natives.getPlayerMaxArmour(int playerId) → int
natives.getPlayerMaxHealth(int playerId) → int
natives.getPlayerTeam(int playerId) → int
natives.alterWantedLevel(int playerId, int level) → void
natives.alterWantedLevelNoDrop(int playerId, int level) → void
natives.clearWantedLevel(int playerId) → void
natives.changePlayerModel(int playerId, int model) → void
natives.disablePlayerLockon(int playerId, bool) → void
natives.disablePlayerSprint(int playerId, bool) → void
```

---

# FILE 4: GTA IV NATIVE FUNCTIONS (H-Z)

## Task Natives (Critical for AI)
```
natives.taskCarDriveToCoord(Ped, Vehicle, float x, float y, float z, float speed, int flag, int hash, int style, float stopDist, int unk)
  // Drive Styles: 0=ignore all, 1=obey laws, 2=ignore lights, 3=ignore everything
  // 4=stay behind, 5=ignore lights+drive around, 6=reverse at lights, 7=full obey
  
natives.taskCarDriveWander(Ped, Vehicle, float speed, int style)
  // Makes vehicle randomly drive around using game path data
```

## GET Natives
```
natives.getCarCharIsUsing(Vehicle) → Vehicle
natives.getCarColours(Vehicle) → colors
natives.getCarCoordinates(Vehicle) → Vec3
natives.getCarDoorLockStatus(Vehicle) → int
natives.getCarForwardVector(Vehicle) → Vec3
natives.getCarForwardX/Y(Vehicle) → float
natives.getCarHeading(Vehicle) → float
natives.getCarHealth(Vehicle) → float
natives.getCarLivery(Vehicle) → int
natives.getCarMass(Vehicle) → float
natives.getCarModel(Vehicle) → int
natives.getCarPitch(Vehicle) → float
natives.getCarRoll(Vehicle) → float
natives.getCarSpeed(Vehicle) → float
natives.getCarSpeedVector(Vehicle, bool) → Vec3
natives.getCarUprightValue(Vehicle) → float
natives.getVehicleDirtLevel(Vehicle) → float
natives.getVehicleEngineRevs(Vehicle) → float
natives.getVehicleGear(Vehicle) → int
natives.getWaterHeight(Vec3) → float
```

## IS* Check Natives
```
natives.isCarDead(Vehicle) → bool
natives.isCarDoorDamaged(Vehicle, int door) → bool
natives.isCarDoorFullyOpen(Vehicle, int door) → bool
natives.isCarHealthGreater(Vehicle, float) → bool
natives.isCarInAirProper(Vehicle) → bool
natives.isCarInArea2d(Vehicle, Vec2, Vec2, bool) → bool
natives.isCarInArea3d(Vehicle, Vec3, Vec3, int) → bool
natives.isCarInWater(Vehicle) → bool
natives.isCarModel(Vehicle, int model) → bool
natives.isCarOnFire(Vehicle) → bool
natives.isCarOnScreen(Vehicle) → bool
natives.isCarPassengerSeatFree(Vehicle, int seat) → bool
natives.isCarSirenOn(Vehicle) → bool
natives.isCarStopped(Vehicle) → bool
natives.isCarStoppedAtTrafficLights(Vehicle) → bool
natives.isCarStuck(Vehicle) → bool
natives.isCarTouchingCar(Vehicle, Vehicle) → bool
natives.isCarTyreBurst(Vehicle, int) → bool
natives.isCarUpright(Vehicle) → bool
natives.isCarUpsidedown(Vehicle) → bool
natives.isCharArmed(Ped, int) → bool
```

## SET Natives
```
natives.setCharAsMissionChar(Ped, bool)
  // Prevents ped from being deleted by game
  
natives.setCharStayInCarWhenJacked(Ped, bool)
  // Keeps ped in car when jacked
```

## Warp Natives (Teleportation)
```
natives.warpCharIntoCarAsPassenger(Ped, Vehicle, int seatIndex)
  // seatIndex 0 = front passenger
  
natives.warpCharIntoCar(Ped, Vehicle)
  // Warps into driver seat
```

## Request/Loading Natives
```
natives.requestModel(int modelHash)
  // Request model for loading
  
natives.loadAllObjectsNow()
  // Force load all requested models - REQUIRED after requestModel
```

## Network Natives
```
natives.activateNetworkSettingsMenu()
natives.deactivateNetworkSettingsMenu()
natives.addGroupToNetworkRestartNodeGroupList(int)
natives.clearNetworkRestartNodeGroupList()
natives.doesGameCodeWantToLeaveNetworkSession() → bool
natives.doesObjectExistWithNetworkId(int) → bool
natives.doesPedExistWithNetworkId(int) → bool
natives.doesPlayerHaveControlOfNetworkId(int, int) → bool
natives.doesVehicleExistWithNetworkId(int) → bool
natives.findNetworkKillerOfPlayer(int) → int
natives.getVehicleFromNetworkId(int) → Vehicle
natives.givePedFakeNetworkName(Ped, string, int r, int g, int b, int a)
natives.resurrectNetworkPlayer(int playerId, Vec3, float heading)
natives.sendClientBroadcastVariablesNow()
```

## Audio/Sound Natives
```
natives.playAudioEvent(string)
natives.playAudioEventFromPed(string, Ped)
natives.playAudioEventFromVehicle(string, Vehicle)
natives.playSound(int, string)
natives.playSoundFromPed(int, string, Ped)
natives.playSoundFromPosition(int, string, Vec3)
natives.playSoundFromVehicle(int, string, Vehicle)
natives.playSoundFrontend(int, string)
```

## Misc Natives
```
natives.round(float) → int
natives.reviveInjuredPed(Ped)
natives.giveDelayedWeaponToChar(Ped, int weapon, int ammo, bool)
natives.givePedHelmet(Ped)
natives.givePlayerRagdollControl(int playerId, bool)
natives.openCarDoor(Vehicle, int door)
natives.pauseGame()
```

---

# FILE 5: PROPERTIES REFERENCE

## Ped Properties (Server/Client Shared)
```
ped.health → float (read-write)
ped.armour → float (read-write)
ped.position → Vec3 (read-write)
ped.heading → float (radians, read-write)
ped.rotation → Vec3 (read-write)
ped.velocity → Vec3 (read-write)
ped.turnVelocity → Vec3 (read-write)
ped.vehicle → Vehicle (read-only)
ped.seat → int (read-only)
ped.weapon → int (read-write)
ped.weaponAmmunition → int (read-write)
ped.weaponClipAmmunition → int (read-write)
ped.weaponState → int (read-only)
ped.dimension → int (read-write)
ped.skin → int (read-write)
ped.id → int (read-only)
ped.name → string (read-write)
ped.type → string (read-only)
ped.matrix → Matrix4x4 (read-write)
ped.modelIndex → int (read-write)
ped.parent → Element (read-write)
ped.children → array (read-only)
ped.resource → Resource (read-only)
ped.syncer → Client (read-only)
ped.syncerId → int (read-only)
ped.streamInDistance → float (read-write)
ped.streamOutDistance → float (read-write)
ped.isInVehicle → bool (read-only)
ped.isEnteringVehicle → bool (read-only)
ped.isExitingVehicle → bool (read-only)
ped.isLocal → bool (read-only)
ped.isOwner → bool (read-only)
ped.isSyncer → bool (read-only)
```

## Ped Properties (Client-Only)
```
ped.invincible → bool (read-write, GTA IV supported)
ped.alpha → int 0-255 (read-write)
ped.maxHealth → float (read-write)
ped.inWater → bool (read-only)
ped.collisionsEnabled → bool (read-write)
ped.mass → float (read-write)
ped.boundingCentre/Min/Max → Vec3 (read-only)
ped.boundingRadius → float (read-only)
ped.centerOfMass → Vec3 (read-write)
```

## Ped Methods
```
ped.giveWeapon(weaponId: int, ammo: int)
ped.clearWeapons()
ped.enterVehicle(vehicle: Vehicle, asDriver: bool)
ped.exitVehicle()
ped.warpIntoVehicle(vehicle: Vehicle, seat: int)
ped.getData(key) / ped.setData(key, value) / ped.removeData(key)
ped.isType(type: int) → bool
ped.setRotation(x, y, z) / ped.getRotation()
ped.setExistsFor(client) / ped.clearExistsFor() / ped.existsFor(client)
ped.setSyncer(client)
```

## Vehicle Properties (Server/Client Shared)
```
vehicle.health → float (read-write)
vehicle.position → Vec3 (read-write)
vehicle.heading → float (read-write)
vehicle.rotation → Vec3 (read-write)
vehicle.velocity → Vec3 (read-write)
vehicle.turnVelocity → Vec3 (read-write)
vehicle.colour1 → int (read-write)
vehicle.colour2 → int (read-write)
vehicle.colour3 → int (read-write, SA/IV)
vehicle.colour4 → int (read-write, SA/IV)
vehicle.locked → bool (read-write)
vehicle.lockedStatus → int (read-write)
vehicle.engine → bool (read-write)
vehicle.dimension → int (read-write)
vehicle.interior → int (read-write)
vehicle.id → int (read-only)
vehicle.name → string (read-write)
vehicle.type → string (read-only)
vehicle.subType → string (read-only)
vehicle.matrix → Matrix4x4 (read-write)
vehicle.modelIndex → int (read-write)
vehicle.strongGrip → bool (read-write)
```

## Vehicle Properties (Client-Only)
```
vehicle.engineHealth → float (read-write, IV)
vehicle.petrolTankHealth → float (read-write, IV)
vehicle.lights → bool (read-write)
vehicle.lightsStatus → int (read-write)
vehicle.siren → bool (read-write)
vehicle.horn → bool (read-write)
vehicle.gear → int (read-only)
vehicle.dirtLevel → float (read-write, IV)
vehicle.livery → int (read-write, IV)
vehicle.taxiLight → bool (read-write, IV)
vehicle.drowned → bool (read-only)
vehicle.flipped → bool (read-only)
vehicle.upsideDown → bool (read-only)
vehicle.isOnScreen → bool (read-only)
vehicle.inWater → bool (read-only)
vehicle.collisionsEnabled → bool (read-write)
vehicle.mass → float (read-write)
```

## Vehicle Methods
```
vehicle.fix()
vehicle.blow()
vehicle.getOccupant(seat: int) → Ped
vehicle.getOccupants() → array<Ped>
vehicle.setColours(c1, c2, c3, c4)
vehicle.getDoorStatus(door: int) → int
vehicle.getLightStatus(light: int) → int
```

## World/GTA Properties
```
gta.weather → int (read-write)
gta.time.hour → int (read-write)
gta.time.minute → int (read-write)
gta.time.second → int (read-write)
gta.time.day → int (read-write)
gta.time.minuteDuration → int (read-write)
gta.width → int (read-only, Client)
gta.height → int (read-only, Client)
gta.fading → bool (read-only, Client)
gta.ivGamemode → int (read-only, GTA IV)
gta.ivEpisode → int (read-only, GTA IV)
gta.game → int (read-only)
```

---

# FILE 6: DATA TYPES AND DEFINES

## Scalar Types
```
bool / boolean - true/false
int - Integer number
float - Decimal number
string - Text
null / nil - Null value
undefined - Undefined (JS only)
function - Callback function
object / Userdata - Element handle
void - No return/parameters
```

## Vector Types
```javascript
Vec2 - 2D vector with x, y
  new Vec2(x, y) or vec2(x, y) or [x, y]
  
Vec3 - 3D vector with x, y, z
  new Vec3(x, y, z) or vec3(x, y, z) or [x, y, z]
  
// Vec3 Methods:
vec3.distance(other) → float
vec3.length → float
vec3.normalise() → Vec3
vec3.dotProduct(other) → float
vec3.crossProduct(other) → Vec3
vec3.interpolate(other, factor) → Vec3
```

## Element Type Constants
```javascript
ELEMENT_PED        // Pedestrian/Character
ELEMENT_VEHICLE    // Vehicle
ELEMENT_OBJECT     // World Object
ELEMENT_BLIP       // Radar Blip
ELEMENT_PICKUP     // Pickup Item
ELEMENT_MARKER     // World Marker
ELEMENT_BUILDING   // Static Building
ELEMENT_PLAYER     // Player (extends PED)
ELEMENT_TRAIN      // Train (extends VEHICLE)
```

## Colour Constants
```javascript
COLOUR_WHITE, COLOUR_BLACK, COLOUR_RED, COLOUR_GREEN
COLOUR_BLUE, COLOUR_YELLOW, COLOUR_ORANGE, COLOUR_LIME
COLOUR_CYAN, COLOUR_MAGENTA, COLOUR_PURPLE, COLOUR_GREY
```

## Game Constants
```javascript
GAME_GTA_III  // GTA III
GAME_GTA_VC   // GTA Vice City
GAME_GTA_SA   // GTA San Andreas
GAME_GTA_IV   // GTA IV
```

## Key Codes (Common)
```
F1-F12: 112-123
Up Arrow: 38    Down Arrow: 40
Left Arrow: 37  Right Arrow: 39
Enter: 13       Escape: 27
Space: 32       Tab: 9
Backspace: 8    A-Z: 65-90
0-9: 48-57      Numpad 0-9: 96-105
```

---

# FILE 7: GTA IV RESOURCE REFERENCE

## Vehicle Models (Selected)
| Name | Hash |
|------|------|
| Admiral | 1264341792 |
| Banshee | -1041692462 |
| Comet | 1063483177 |
| Coquette | 108773431 |
| Infernus | 418536135 |
| Sultan | 970598228 |
| Sultan RS | -295689028 |
| Taxi | -956048545 |
| Turismo | -1896659641 |
| Police Cruiser | 2046537925 |
| Annihilator | 837858166 |
| Maverick | -1660661558 |
| NRG-900 | 1203311498 |
| PCJ-600 | -909201658 |

## Weapons
| ID | Name |
|----|------|
| 0 | UNARMED |
| 1 | BASEBALLBAT |
| 2 | POOLCUE |
| 3 | KNIFE |
| 4 | GRENADE |
| 5 | MOLOTOV |
| 7 | PISTOL |
| 9 | DEAGLE |
| 10 | SHOTGUN |
| 12 | MICRO_UZI |
| 13 | MP5 |
| 14 | AK47 |
| 15 | M4 |
| 16 | SNIPERRIFLE |
| 18 | RLAUNCHER |

## Ped Models (Selected)
| Name | Hash |
|------|------|
| Nico Bellic | 1862763509 |
| Male Multiplayer | -2020305438 |
| Female Multiplayer | -641875910 |
| Roman | -1992728631 |
| Taxi Driver | 8772846 |
| Police Officer | -183203150 |
| SWAT | -1004762946 |
| FIB Agent | -999506922 |

## Blip Sprites (Selected)
| ID | Name |
|----|------|
| 0 | DESTINATION |
| 6 | PLAYER |
| 7 | NORTH |
| 8 | WAYPOINT |
| 19 | HEALTH |
| 20 | ARMOR |
| 29 | SAFEHOUSE |
| 59 | WEAPONS |
| 60 | POLICE_STATION |
| 62 | HOSPITAL |
| 75 | PAY_N_SPRAY |

---

# FILE 8: MOD MENU DEVELOPMENT GUIDE

## Basic Menu Structure (JavaScript)
```javascript
// Menu State
let menuVisible = false;
let menuOptions = ["God Mode", "Spawn Vehicle", "Teleport", "Exit"];
let selectedIndex = 0;
let menuFont = null;

// Colours
const MENU_BG = toColour(0, 0, 0, 180);
const MENU_TEXT = toColour(255, 255, 255, 255);
const MENU_SELECTED = toColour(255, 200, 0, 255);

// Load Font
bindEventHandler("OnResourceReady", thisResource, function(event, resource) {
    let fontStream = openFile("arial.ttf");
    if (fontStream != null) {
        menuFont = lucasFont.createFont(fontStream, 20.0);
        fontStream.close();
    }
});

// Handle Input
addEventHandler("OnKeyDown", function(event, keyCode) {
    if (keyCode == 116) { // F5 toggle
        menuVisible = !menuVisible;
        event.preventDefault();
    }
    
    if (menuVisible) {
        if (keyCode == 38) { // Up
            selectedIndex = (selectedIndex - 1 + menuOptions.length) % menuOptions.length;
            event.preventDefault();
        }
        else if (keyCode == 40) { // Down
            selectedIndex = (selectedIndex + 1) % menuOptions.length;
            event.preventDefault();
        }
        else if (keyCode == 13) { // Enter
            executeOption(selectedIndex);
            event.preventDefault();
        }
        else if (keyCode == 27) { // Escape
            menuVisible = false;
            event.preventDefault();
        }
    }
});

// Draw Menu
addEventHandler("OnDrawnHUD", function(event) {
    if (!menuVisible || menuFont == null) return;
    
    let menuX = 100, menuY = 100;
    let menuWidth = 300, optionHeight = 30, padding = 10;
    
    // Background
    graphics.drawRectangle(menuX, menuY, menuWidth, 
        (menuOptions.length * optionHeight) + (padding * 2), MENU_BG);
    
    // Title
    menuFont.render("MOD MENU", [menuX + padding, menuY + padding],
        menuWidth - (padding * 2), 0.5, 0.0, menuFont.size, MENU_TEXT,
        false, true, false, true);
    
    // Options
    for (let i = 0; i < menuOptions.length; i++) {
        let optionY = menuY + padding + 35 + (i * optionHeight);
        let colour = (i == selectedIndex) ? MENU_SELECTED : MENU_TEXT;
        
        menuFont.render(menuOptions[i], [menuX + padding, optionY],
            menuWidth - (padding * 2), 0.0, 0.0, menuFont.size, colour,
            false, true, false, false);
    }
});

function executeOption(index) {
    switch(index) {
        case 0: // God Mode
            localPlayer.invincible = !localPlayer.invincible;
            break;
        case 1: // Spawn Vehicle
            spawnVehicle();
            break;
        case 2: // Teleport
            teleportForward();
            break;
        case 3: // Exit
            menuVisible = false;
            break;
    }
}

function spawnVehicle() {
    natives.requestModel(418536135); // Infernus
    natives.loadAllObjectsNow();
    let veh = natives.createCar(418536135, localPlayer.position, true);
    veh.heading = localPlayer.heading;
    natives.warpCharIntoCar(localPlayer, veh);
}

function teleportForward() {
    let offset = natives.getOffsetFromCharInWorldCoords(localPlayer, new Vec3(0, 10, 0));
    localPlayer.position = offset;
}
```

## meta.xml Example
```xml
<meta>
    <info name="MyModMenu" author="Developer" version="1.0" />
    <script language="javascript" type="client" src="menu.js" />
    <file src="arial.ttf" />
</meta>
```

## Network Communication Pattern
```javascript
// Client-side: Request something from server
triggerNetworkEvent("requestVehicle", "infernus");

// Server-side: Handle request
addNetworkHandler("requestVehicle", function(client, vehicleName) {
    let vehicle = gta.createVehicle(getModelHash(vehicleName), 
        client.player.position);
    client.player.warpIntoVehicle(vehicle, 0);
    triggerNetworkEvent("vehicleSpawned", client, vehicle.id);
});

// Client-side: Handle response
addNetworkHandler("vehicleSpawned", function(vehicleId) {
    message("Vehicle spawned with ID: " + vehicleId, COLOUR_GREEN);
});
```

---

# FILE 9: SCRIPTING EXAMPLES

## Kill Command
```lua
addCommandHandler('kill', function(cmd, args)
    localPlayer.health = 0
end)
```

## Give Weapon
```javascript
addCommandHandler('weapon', function(cmd, args) {
    let weaponId = parseInt(args) || 7; // Default pistol
    natives.giveWeaponToChar(localPlayer, weaponId, 500, false);
    message("Weapon given!", COLOUR_GREEN);
});
```

## Spawn Vehicle with Driver
```javascript
addCommandHandler("taxi", function(cmdName, params) {
    natives.requestModel(-956048545); // Taxi
    natives.requestModel(8772846);    // Taxi Driver
    natives.loadAllObjectsNow();
    
    let taxi = natives.createCar(-956048545, localPlayer.position, true);
    taxi.heading = localPlayer.heading;
    
    let driver = natives.createCharInsideCar(taxi, 1, 8772846);
    natives.setCharAsMissionChar(driver, true);
    natives.setCharStayInCarWhenJacked(driver, true);
    
    natives.warpCharIntoCarAsPassenger(localPlayer, taxi, 0);
    natives.taskCarDriveWander(driver, taxi, 20, 1);
});
```

## Heal and Fix
```javascript
addCommandHandler('fix', function(cmd, args) {
    localPlayer.health = 100;
    localPlayer.armour = 100;
    if (localPlayer.vehicle) {
        natives.fixCar(localPlayer.vehicle);
    }
    message("Healed and fixed!", COLOUR_GREEN);
});
```

## Get Client from Text
```lua
function getClientFromText(text)
    local clients = getClients()
    local textLower = text:lower()
    
    -- By ID
    local textNumber = tonumber(text, 10)
    if textNumber then
        for i, client in ipairs(clients) do
            if client.player.id == textNumber then
                return client
            end
        end
    end
    
    -- By exact name
    for i, client in ipairs(clients) do
        if client.player.name:lower() == textLower then
            return client
        end
    end
    
    -- By partial name
    for i, client in ipairs(clients) do
        if client.player.name:lower():find(textLower, 1, true) then
            return client
        end
    end
    
    return nil
end
```

## Get Nearest Vehicle
```lua
function getNearestVehicleInRange(position, distance)
    distance = distance or 5
    for index, vehicle in pairs(getVehicles()) do
        if position:distance(vehicle.position) <= distance then
            return vehicle
        end
    end
    return nil
end
```

## Enter Vehicle as Passenger
```lua
addEventHandler("OnKeyDown", function(event, keyCode, scanCode, mod)
    if keyCode == SDLK_g then
        if not localPlayer.vehicle then
            local v = getNearestVehicleInRange(localPlayer.position)
            if v ~= nil then
                localPlayer:enterVehicle(v, false)
            end
        end
    end
end)
```

---

# FILE 10: RESOURCES SYSTEM

## Creating a Resource
1. Create folder in `resources/` directory
2. Create `meta.xml` inside folder
3. Add script files

## meta.xml Format
```xml
<meta>
    <info author="name" type="script" version="1.0" description="Description" />
    <script src="server.lua" type="server" language="lua" />
    <script src="client.js" type="client" language="javascript" />
    <dependency src="other-resource" />
    <file url="" src="image.png" type="client" />
</meta>
```

## Script Types
- `type="server"` - Runs on server
- `type="client"` - Downloads and runs on client

## Language Options
- `language="lua"` - Lua
- `language="javascript"` - JavaScript
- `language="squirrel"` - Squirrel

## Server Configuration (server.xml)
```xml
<server>
    <game>gta:iv</game>
    <servername>My Server</servername>
    <maxplayers>32</maxplayers>
    <iv_gamemode>8</iv_gamemode>
    <iv_episode>0</iv_episode>
    <resources>
        <resource src="mymod" />
    </resources>
</server>
```

## Console Commands
- `start resourcename` - Start resource
- `stop resourcename` - Stop resource
- `restart resourcename` - Restart resource
- `refresh resourcename` - Reload after editing
- `dumpdoc` - Generate documentation XML

---

**Source:** All documentation compiled from https://wiki.gtaconnected.com with additional reference from https://gtamods.com for native function details.

**Important Notes:**
1. All angles use **radians**, not degrees
2. Event names are **case-insensitive**
3. Arrays can substitute Vec2/Vec3: `[x, y, z]` = `new Vec3(x, y, z)`
4. Use `graphics.drawRectangle()` for GTA IV (not `gta.drawRectangle()`)
5. Load fonts in `OnResourceReady`, not `OnResourceStart`
6. Always call `natives.loadAllObjectsNow()` after `natives.requestModel()`
7. Use `event.preventDefault()` when handling menu input keys