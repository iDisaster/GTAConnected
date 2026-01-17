/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */  

#pragma once

void MC_Sco_Modloader_Main_Setup(void){
		MENU_SUB_HEADER = "~BLIP_94~ Third Party Mods ~BLIP_94~";
		AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ Recommended Modmenus");								//1
		AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ Various Modmenus");									//2
		AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ Weapon Mods");										//3
		AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ Vehicle Weapon Mods");
		AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ Handling & Character Mods");							//4
		AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ Object & Car Spawners");								//5
		AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ Special & Fun Mods");									//9
		AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ MapMod Loader");										//7
		AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ Game Modes & MiniGames");								//8
		AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ Sort On Developers ~PAD_RIGHT~");						//9
		Add_JumpOver("~BLIP_94~  S E T T I N G S  ~BLIP_94~");									//10 
		AddBool("~BLIP_68~ Display All missing Sco's You Can Add",GetBit(MD_Misc_OptionsBitSet, MD_MISC_SHOW_MISSING_SCO));		//11

}

void MC_Sort_Devs_Setup(void){
	MENU_SUB_HEADER = "~BLIP_94~ Developers Mods ~BLIP_94~";
	AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ Buffeting  ");				//1
	AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ BouBouvirus  ");				//2
	AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ Chr0m3 x MoDz  ");			//3
	AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ xD4I2K SIVIOKEx  ");			//4
	AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ DaxxPhenom ");				//5
	AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ EmanuelU XMC ");				//6
	AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ Evil Blunt  ");				//7
	AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ Hun  ");						//8
	AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ JDMAlex ");					//9
	AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ Jumper ");					//10
	AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ K3R3DOR  ");					//11
	AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ Motions97  ");				//12
	AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ OhManMyBad ");				//13
	AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ PSX-Colt  ");				    //14
	AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ ReVoLuTiioNz ");				//15
	AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ Rodd1981 ");					//16
	AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ SHoCKxWAVE   ");	            //17
	AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ XF CH3WY  ");				    //18	
	AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ Various Devs ");				//19
	return;
}

void MC_Sco_Modloader_Main_Action(void){
	if(SelectedItem == 12){
		ToggleBit(MD_Misc_OptionsBitSet, MD_MISC_SHOW_MISSING_SCO);
		menu_item[SelectedItem].extra_val = GetBit(MD_Misc_OptionsBitSet, MD_MISC_SHOW_MISSING_SCO);
		//Alert_Two("~BLIP_76~ ~c~Display all missing sco's", Menu_Show_Missing_Sco ? PrintON : PrintOFF ,false); 			
	}
	else Modmanager();
}

void MC_Sco_Recommended(void){
	MENU_SUB_HEADER = "~BLIP_94~ Recommended Menus ~BLIP_94~";
	Load_Sco("~BLIP_68~ Buffetings Menu  ~PAD_RB~ +~PAD_DPAD_DOWN~", "buffy_menu");
	if(IS_NETWORK_SESSION()){ // We dont want this shit to load in single player
	Load_Sco("~BLIP_68~ ChrOm3xMoDz V4.0 Menu  ~PAD_DPAD_LEFT~+~PAD_X~", "chrome4");
	Load_Sco("~BLIP_68~ ChrOm3xMoDz V4.0 Network ~PAD_LB~+~PAD_X~", "player_menu");
	Load_Sco("~BLIP_68~ Chr0m3 V5 Network ~PAD_LB~+~PAD_X~", "player_menuGT"); 
	Load_Sco("~BLIP_68~ ChrOm3xMoDz V5.0 VIP ~PAD_DPAD_LEFT~+~PAD_X~", "chrome5GT");
	}
	Load_Sco("~BLIP_68~ xD4I2K SIVIOKEx's v4  ~PAD_DPAD_DOWN~+~PAD_A~", "dark_menu");
	Load_Sco("~BLIP_68~ EvilB Trainer V2 (All in One!) ~PAD_LB~ + ~PAD_DPAD_RIGHT~", "eb_trainer");
	Load_Sco("~BLIP_68~ EVILB Objects & Funny Cars  ~PAD_LB~ + ~PAD_DPAD_DOWN~", "objfunveh");
	Load_Sco("~BLIP_68~ K3R3DOR Project368 ~PAD_RB~ + ~PAD_DPAD_RIGHT~", "keredor");
	Load_Sco("~BLIP_68~ K3R3DOR Project368v2 ~PAD_RB~ + ~PAD_DPAD_RIGHT~", "project368v2");
	Load_Sco("~BLIP_68~ Motions97 V3.0 Menu ~PAD_DPAD_LEFT~ + ~PAD_B~", "m97_menu");
	if(IS_NETWORK_SESSION()){// We dont want this shit to load in single player
	Load_Sco("~BLIP_68~ Motions97 V3.0 Network ~PAD_DPAD_RIGHT~ + ~PAD_B~", "motions_player");
	}
	Load_Sco("~BLIP_68~ R3B3LY0N Maxi Menu ~PAD_RB~ + ~PAD_DPAD_UP~", "rebelyon");
	Load_Sco("~BLIP_68~ RockStarkings V7.0 ~PAD_A~ + ~PAD_X~", "main10");
	Load_Sco("~BLIP_68~ SHoCKxWAVE Menu ~r~v10  ~PAD_DPAD_LEFT~ + ~PAD_A~", "shockxwave10");
	Load_Sco("~BLIP_68~ SHoCKxWAVE Menu ~r~v13  ~PAD_DPAD_LEFT~ + ~PAD_A~", "shockxwave13");
	Load_Sco("~BLIP_68~ ThreeSocks Trainer ~PAD_LB~ + ~PAD_DPAD_UP~", "3s_trainer");
	return;
}
		
void MC_Sco_Weapons(void){		
	MENU_SUB_HEADER = "~BLIP_94~ Weapon Mods ~BLIP_94~";
	Load_Sco("~BLIP_68~ SHoCKxWAVE AimBot Weapon", "aimbot");
	Load_Sco("~BLIP_68~ The Godly Sniper ~PAD_LT~+~PAD_RT~", "weap1");
	Load_Sco("~BLIP_68~ Gravity Gun ~PAD_RSTICK_ALL~/~PAD_LSTICK_ALL~", "m97_grav");
	Load_Sco("~BLIP_68~ Rocket Desert Eagle ~PAD_LT~+~PAD_RT~~COL_NET_4~", "rocketdeagle");
	Load_Sco("~BLIP_68~ Taser Glock Motions97 ~PAD_LT~+~PAD_RT~", "m97_taser");
	Load_Sco("~BLIP_68~ Explosive Mp5/AK-47 ~PAD_LT~+~PAD_RT~", "drs01");
	Load_Sco("~BLIP_68~ Forcefield AK-47 ~PAD_LT~+~PAD_RT~", "buffy_force");
	Load_Sco("~BLIP_68~ Advanced Forcefield by Storm~PAD_X~+ ~PAD_DPAD_RIGHT~", "ForceFieldv25");
	Load_Sco("~BLIP_68~ Rockets Mp5 Buffeting ~PAD_LT~+~PAD_RT~", "buffy_mp5");
	Load_Sco("~BLIP_68~ Car Launcher Gun1 ~PAD_LT~+~PAD_A~/~PAD_B~/~PAD_X~/~PAD_Y~", "rob_cl");
	Load_Sco("~BLIP_68~ Car Launcher Gun2 ~PAD_RT~/~PAD_LT~+~PAD_DPAD_LEFT~/~PAD_DPAD_RIGHT~", "buffy_launcher");
	Load_Sco("~BLIP_68~ Car ~PAD_LT~ Manipulate~PAD_DPAD_LEFTRIGHT~Shoot ~PAD_A~", "rob_carmod");
	return;
}

void MC_Sco_Veh_Weapons(void){
	MENU_SUB_HEADER = "~BLIP_94~ Vehicle Weapons ~BLIP_94~";
	Load_Sco("~BLIP_68~ Turret Airport Defence ~PAD_LSTICK_NONE~+~PAD_RT~", "Sam-turrets");
	Load_Sco("~BLIP_68~ Heli Bullets 4 Skilled Pilots ~PAD_DPAD_LEFT~", "rev_xml_heli");
	Load_Sco("~BLIP_68~ Flaming Heli Inferno ~PAD_DPAD_RIGHT~+~PAD_B~/~PAD_X~", "flameheli");//xbox-ps3 diff .sco files!
	Load_Sco("~BLIP_68~ Drop A Bomb On Them! ~PAD_RB~", "weap2");
	Load_Sco("~BLIP_68~ Explosive Rounds~COL_NET_4~ (TBoGT)", "weap3");
	Load_Sco("~BLIP_68~ Shoot Explosive Bomb ~PAD_A~", "weap10");
	Load_Sco("~BLIP_68~ Rockets RPG Car & Bike ~PAD_X~", "weap11");
	Load_Sco("~BLIP_68~ Rockets RPG Heli ~PAD_A~", "rob_rh");
	Load_Sco("~BLIP_68~ Shoot Explosive Vehicles ~PAD_X~", "weap12");
	Load_Sco("~BLIP_68~ Twisted Metal~COL_NET_4~ (TBOGT)", "weap13");
	Load_Sco("~BLIP_68~ Colt/Keredor Advanced HeliRounds", "AdvancedHeliRounds");
	return;
			
}
void MC_Sco_Handling(void){
	MENU_SUB_HEADER = "~BLIP_94~ Handling Mods ~BLIP_94~";
	Load_Sco("~BLIP_68~ Analog Fly Mod ~PAD_X~+~PAD_LSTICK_ALL~", "hand1");
	Load_Sco("~BLIP_68~ Superman ~PAD_RB~+~PAD_DPAD_DOWN~/~PAD_LB~+~PAD_LSTICK_ALL~/", "eb_superman");
	Load_Sco("~BLIP_68~ Swimming Everywhere ~PAD_RB~+~PAD_DPAD_DOWN~", "hand3");
	Load_Sco("~BLIP_68~ Levitation Mode ~PAD_DPAD_RIGHT~/~PAD_A~", "k3r3d0r_levitation");
	Load_Sco("~BLIP_68~ Teleport GTA V Style ~PAD_LB~+~PAD_DPAD_DOWN~", "teleport");
	Load_Sco("~BLIP_68~ XxK1tty Suspension Menu ~PAD_RSTICK_NONE~/~PAD_DPAD_LEFTRIGHT~", "suspension");
	Load_Sco("~BLIP_68~ Hydraulics By XF CH3WY ~PAD_RB~+~PAD_A~", "XFHydraulics");
	Load_Sco("~BLIP_68~ Drive On Water (Speed)~PAD_DPAD_DOWN~+~PAD_RB~+~PAD_B~", "mybad_water");
	Load_Sco("~BLIP_68~ Walk & Drive On Water ~PAD_DPAD_RIGHT~+~PAD_X~", "hand5");
	Load_Sco("~BLIP_68~ xD4I2K's Undercover Police ~PAD_DPAD_LEFT~+~PAD_RB~", "D_Undercover");
	Load_Sco("~BLIP_68~ Superhero ~PAD_DPAD_UP~  + ~COL_NET_4~F ~PAD_RT~ / M ~PAD_LT~", "model2");
	Load_Sco("~BLIP_68~ Teleport menu", "teleportmenu");
	return;
}
void MC_Sco_Object_Cars_Spawners(void){
	MENU_SUB_HEADER = "~BLIP_94~ Object & Car Spawners ~BLIP_94~";
	Load_Sco("Clear All Objects", "map_mod_clean");
	Load_Sco("~BLIP_68~ Spawn Cars @Airport Helipads", "carspawnerold");
	Load_Sco("~BLIP_68~ Spawn Cars @Airport Helipads 2", "airportcarspawns3");
	Load_Sco("~BLIP_68~ Spawn Cars @Airport on Runway", "carspawnersport");
	Load_Sco("~BLIP_68~ Spawn Cars @Airport by Kushhs", "kushspawns");
	Load_Sco("~BLIP_68~ Spawn Police Cars @Airport", "policecarspawns");
	Load_Sco("~BLIP_68~ Brad Object Attach Menu ~PAD_LB~+~PAD_DPAD_UP~", "dev4");
	Load_Sco("~BLIP_68~ EvilB Trainer V2 (All in one!) ~PAD_LB~ + ~PAD_DPAD_RIGHT~", "eb_trainer");
	Load_Sco("~BLIP_68~ EVILB Objects & Funny Cars ~PAD_LB~ + ~PAD_DPAD_DOWN~", "objfunveh");
	Load_Sco("~BLIP_68~ Phantomised Objects V3 ~PAD_LB~+~PAD_DPAD_DOWN~", "dating_fred"); 
	return;
}
void MC_Sco_Map_Main(void){
	MENU_SUB_HEADER = "~BLIP_94~ Map Loader ~BLIP_94~";
	AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ Airport LockDown  ");
	AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ Teleporter Maps  ");
	AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ Butcher Maps  ");
	AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ Race Tracks Maps  ");
	AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ Hideout Buildings  ");
	AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ Ramps @ Airport  ");
	AddSubMenu("~BLIP_73~ ~PAD_RIGHT~ Extra Map Mod Slots  ");
	Load_Sco("~BLIP_68~ EvilB Map Mod Loader ~PAD_RB~+~PAD_DPAD_RIGHT~", "evilbmap");
	Load_Sco("~BLIP_68~ CutScene Interiors V1.2", "fun1");
	Load_Sco("Clear All Objects", "map_mod_clean");
	return;
}
void MC_Sco_Personal(void){
	MENU_SUB_HEADER = "~BLIP_94~ Personal & Auto-loads ~BLIP_94~";
	Load_Sco("~BLIP_68~ AutoLoad 1", "aload1");
	Load_Sco("~BLIP_68~ AutoLoad 2", "aload2");
	Load_Sco("~BLIP_68~ AutoLoad 3", "aload3");
	Load_Sco("~BLIP_68~ AutoLoad 4", "aload4");
	Load_Sco("~BLIP_68~ AutoLoad 5", "aload5");
	Load_Sco("~BLIP_68~ Extra ModMenu 1", "addonmenu1");
	Load_Sco("~BLIP_68~ Extra ModMenu 2", "addonmenu2");
	Load_Sco("~BLIP_68~ Extra ModMenu 3", "addonmenu3");
	Load_Sco("~BLIP_68~ Extra ModMenu 4", "addonmenu4");
	Load_Sco("~BLIP_68~ Extra ModMenu 5", "addonmenu5");
	Load_Sco("~BLIP_68~ Extra ModMenu 6", "addonmenu6");
	Load_Sco("~BLIP_68~ Extra ModMenu 7", "addonmenu7");
	Load_Sco("~BLIP_68~ Extra ModMenu 8", "addonmenu8");
	Load_Sco("~BLIP_68~ Extra ModMenu 9", "addonmenu9");
	Load_Sco("~BLIP_68~ Extra ModMenu 10", "addonmenu10");
	return;
}
void MC_Sco_More_Menus(void){
	MENU_SUB_HEADER = "~BLIP_94~ More ModMenu's ~BLIP_94~";
	Load_Sco("~BLIP_68~ BouBouvirus V5 ~PAD_DPAD_DOWN~+~PAD_A~", "boubou5");
	Load_Sco("~BLIP_68~ DaxxPhenom V5 (~PAD_RB~+~PAD_DPAD_RIGHT~", "daxx5");
	Load_Sco("~BLIP_68~ Evades V3.0 Premium ~PAD_X~+~PAD_DPAD_DOWN~", "evade3GT");			
	Load_Sco("~BLIP_68~ InTheSevens Mod Menu ~PAD_LB~ + ~PAD_RB~", "Inthe7");
	Load_Sco("~BLIP_68~ BoubouVirus V4 ~PAD_DPAD_DOWN~+~PAD_A~", "boubou4");
	Load_Sco("~BLIP_68~ ColdMurda Mod Menu ~PAD_A~+~PAD_RB~", "coldmurda");
	Load_Sco("~BLIP_68~ DaxxPhenom V4 BETA ~PAD_DPAD_LEFT~+~PAD_A~", "daxx4");
	Load_Sco("~BLIP_68~ Evades V3.0 Public ~PAD_X~+~PAD_DPAD_DOWN~", "evade");
	Load_Sco("~BLIP_68~ CarniVale MENU ~PAD_LSTICK_NONE~+~PAD_RSTICK_NONE~", "TrollFunCarEnglish");
	Load_Sco("~BLIP_68~ Radio Menu Los Santos ~PAD_BACK~", "ModRadioLosSantos");
	Load_Sco("~BLIP_68~ HAWK Fun Cars Menu ~PAD_LB~+~PAD_A~", "extra6");
	Load_Sco("~BLIP_68~ DRS Team Tuning V1 ~PAD_LB~+~PAD_DPAD_RIGHT~", "drs1");
	return;
}
void MC_Sco_Vehicle_Weapons(void){
	MENU_SUB_HEADER = "~BLIP_94~ Vehicle Weapons ~BLIP_94~";
	Load_Sco("~BLIP_68~ Turret Airport Defence ~PAD_LSTICK_NONE~+~PAD_RT~", "Sam-turrets");
	Load_Sco("~BLIP_68~ Heli Bullets 4 Skilled Pilots ~PAD_DPAD_LEFT~", "rev_xml_heli");
	Load_Sco("~BLIP_68~ Flaming Heli Inferno ~PAD_DPAD_RIGHT~+~PAD_B~/~PAD_X~", "flameheli");
	Load_Sco("~BLIP_68~ Drop A Bomb On Them! ~PAD_RB~", "weap2");
	Load_Sco("~BLIP_68~ Explosive Rounds~COL_NET_4~ (TBoGT)", "weap3");
	Load_Sco("~BLIP_68~ Shoot Explosive Bomb ~PAD_A~", "weap10");
	Load_Sco("~BLIP_68~ Rockets RPG Car & Bike ~PAD_X~", "weap11");
	Load_Sco("~BLIP_68~ Rockets RPG Heli ~PAD_A~", "rob_rh");
	Load_Sco("~BLIP_68~ Shoot Explosive Vehicles ~PAD_X~", "weap12");
	Load_Sco("~BLIP_68~ Twisted Metal~COL_NET_4~ (TBOGT)", "weap13");
	Load_Sco("~BLIP_68~ Colt/Keredor Advanced HeliRounds", "AdvancedHeliRounds");
	return;
}

void MC_SpecialFun_mods(void){
	MENU_SUB_HEADER = "~BLIP_94~ Special & Fun Mods ~BLIP_94~";
	Load_Sco("~BLIP_68~ Voice Changer Menu ~PAD_RB~+~PAD_DPAD_LEFT~", "buffy_voice");
	Load_Sco("~BLIP_68~ CutScene Models Menu ~PAD_LB~+~PAD_A~","hun_cutscene");
	Load_Sco("~BLIP_68~ Get A Life! Teleport fun", "fun2");
	Load_Sco("~BLIP_68~ Have Sex With Female ~PAD_LB~+~PAD_DPAD_RIGHT~", "fun4");
	Load_Sco("~BLIP_68~ Have Sex With Male ~PAD_LB~+~PAD_DPAD_RIGHT~", "fun3");
	Load_Sco("~BLIP_68~ Magic Weapons V4.0", "fun7");
	Load_Sco("~BLIP_68~ K3R3DOR Stealth Bomber ~PAD_LSTICK_NONE~+~PAD_RT~", "stealthbomber");
	Load_Sco("~BLIP_68~ Liquid Rage Mod(keyboard)", "liq_rage");
	Load_Sco("~BLIP_68~ Liquid Rage Mod Controls", "liq_ragecontrols");
	Load_Sco("~BLIP_68~ HealthPack Protection Airport", "nohealth1");//No health packs first island
	Load_Sco("~BLIP_68~ Colts Personal Driver ~PAD_LB~+~PAD_B~", "colt");
	Load_Sco("~BLIP_68~ xD4I2K's Chauffeur ~PAD_DPAD_RIGHT~ + ~PAD_B~","D_Chauffeur");
	Load_Sco("~BLIP_68~ xD4I2K's Chauffeur Pilot ~PAD_DPAD_RIGHT~ + ~PAD_B~","D_Chauffeur_pilot");
	Load_Sco("~BLIP_68~ Devilish Robotics ~COL_NET_4~(Use In Vehicle)", "robots");//Robot
	Load_Sco("~BLIP_68~ Transformers ~COL_NET_4~~PAD_DPAD_DOWN~Change ~PAD_DPAD_RIGHT~Flame", "funny8");
	Load_Sco("~BLIP_68~ XxK1tty Gas-Flame Spawner", "gasspawner");
	Load_Sco("~BLIP_68~ OhMyBad Ramp Bus", "funny2");
	Load_Sco("~BLIP_68~ Rocket-truck w. HeatSeekers", "RPGtruck");
	Load_Sco("~BLIP_68~ Mugging Service by OhManMyBad​", "mugging_service");
	Load_Sco("~BLIP_68~ Fighter Jet by XF CH3WY", "Fighter Jet");
	return;
}
		
void MC_Sco_Minimaps(void){
	MENU_SUB_HEADER = "~BLIP_94~ Mini Games & Game Modes ~BLIP_94~";
	Load_Sco("Clear All Objects", "map_mod_clean");
	Load_Sco("~BLIP_68~ GangWars V2.2", "mini1");
	Load_Sco("~BLIP_68~ HitMan Jobs", "mini2");
	Load_Sco("~BLIP_68~ Police RolePlay", "mini3");
	Load_Sco("~BLIP_68~ Police PerCecution", "police2");
	Load_Sco("~BLIP_68~ Police Squad by Disconnected", "kb_driveby");
	Load_Sco("~BLIP_68~ HighGuy Police Script", "HighGuy");
	Load_Sco("~BLIP_68~ HighGuy Police Script Controls", "Highguycontrols");
	Load_Sco("~BLIP_68~ Hun's Treasure Hunt V1", "mini4");
	Load_Sco("~BLIP_68~ Hun's Treasure Hunt V2", "mini5");
	Load_Sco("~BLIP_68~ Zombie MiniGame", "jdma_zombie");
	Load_Sco("~BLIP_68~ Deal Breaker II", "rodd_dbii");
	Load_Sco("~BLIP_68~ Let The Zombies Come!", "gmode2");
	Load_Sco("~BLIP_68~ Make Peds Go Crazy!", "gmode3");
	return;
}
void MC_Sco_Maps_Airport_Lockdown(void){
	MENU_SUB_HEADER = "~BLIP_94~ Airport LockDown ~BLIP_94~";
	Load_Sco("Clear All Objects", "map_mod_clean");
	Load_Sco("~BLIP_68~ Airport LockDown Doors", "air");
	Load_Sco("~BLIP_68~ Airport LockDown Police Cars", "ml2");
	Load_Sco("~BLIP_68~ Airport LockDown Gates", "gates");
	Load_Sco("~BLIP_68~ Airport Complete LockDown", "airport");
	Load_Sco("~BLIP_68~ Broker Island LockDown Bridge", "crossings");
	return;
}
void MC_Sco_Maps_Teleporter(void){
	MENU_SUB_HEADER = "~BLIP_94~ Teleporter  Maps ~BLIP_94~";
	Load_Sco("Clear All Objects","map_mod_clean");
	Load_Sco("~BLIP_68~ Airport Tele Green Cloud", "ml3");
	Load_Sco("~BLIP_68~ Airport Tele Sky High", "ml4");
	Load_Sco("~BLIP_68~ Airport Tele Sky Kick ", "skykick");
	Load_Sco("~BLIP_68~ Airport Tele City View", "ml5");
	Load_Sco("~BLIP_68~ Airport Tele Underwater", "ml6");
	Load_Sco("~BLIP_68~ City Tele FatCops 'N 3Blocks", "ml7");
	return;
}
void MC_Sco_Maps_Butchers(void){
	MENU_SUB_HEADER = "~BLIP_94~ Butcher Maps ~BLIP_94~";
	Load_Sco("Clear All Objects", "map_mod_clean");
	Load_Sco("~BLIP_68~ Airport Water Butcher", "ml8");
	Load_Sco("~BLIP_68~ Airport Space Butcher", "ml9");
	Load_Sco("~BLIP_68~ Airport Butcher", "ml10");
	Load_Sco("~BLIP_68~ Airport Caddy Butcher", "caddybutcher");
	return;
}
void MC_Sco_Maps_Racetracks(void){
	MENU_SUB_HEADER = "~BLIP_94~ Race Track Maps ~BLIP_94~";
	Load_Sco("Clear All Objects", "map_mod_clean");
	Load_Sco("~BLIP_68~ Airport Ocean Overpass", "oceanover");
	Load_Sco("~BLIP_68~ Airport Race Track", "ml13");
	Load_Sco("~BLIP_68~ Airport Drag Track", "ml14");
	Load_Sco("~BLIP_68~ Airport Rally Track", "ml15");
	Load_Sco("~BLIP_68~ Airport Playground", "ml17");
	return;
}
void MC_Sco_Maps_Buildings(void){
	MENU_SUB_HEADER = "~BLIP_94~ Fun & Buildings ~BLIP_94~";
	Load_Sco("Clear All Objects", "map_mod_clean");
	Load_Sco("~BLIP_68~ The Chill Out Garage", "chilloutgarage");
	Load_Sco("~BLIP_68~ Ghetto Parking FightClub", "map21");
	Load_Sco("~BLIP_68~ Airport Base Hideout", "map13");
	Load_Sco("~BLIP_68~ Airport Sea GarageMap", "map12");
	Load_Sco("~BLIP_68~ Airport Heli Canon", "map14");
	Load_Sco("~BLIP_68~ Police Outpost", "Police Outpost");
	return;
}
void MC_Sco_Maps_Airport_Ramps(void){
	MENU_SUB_HEADER = "~BLIP_94~ Ramps @ Airport ~BLIP_94~";
	Load_Sco("Clear All Objects", "map_mod_clean");
	Load_Sco("~BLIP_68~ Big Tower Jump", "airtowerjump");
	Load_Sco("~BLIP_68~ High Jump", "airhighjump");
	Load_Sco("~BLIP_68~ Jump Track", "airjumptrack");	
	Load_Sco("~BLIP_68~ Airport Big Stunt Park", "Airportbigstuntpark");	
	Load_Sco("~BLIP_68~ Airport Broker Jumps", "Airportbrokerjumps");
	Load_Sco("~BLIP_68~ Elite's Stunt Jumps", "stunt_jump");
	return;
}
void MC_Sco_Maps_Extra(void){
	MENU_HEADER = "Name : extramap1.sco - 10";
	MENU_SUB_HEADER = "~BLIP_94~ Extra Map Mods ~BLIP_94~";
	Load_Sco("Clear All Objects", "map_mod_clean");
	Load_Sco("~BLIP_68~ Extra MapMod 1", "extramap1");
	Load_Sco("~BLIP_68~ Extra MapMod 2", "extramap2");
	Load_Sco("~BLIP_68~ Extra MapMod 3", "extramap3");
	Load_Sco("~BLIP_68~ Extra MapMod 4", "extramap4");
	Load_Sco("~BLIP_68~ Extra MapMod 5", "extramap5");
	Load_Sco("~BLIP_68~ Extra MapMod 6", "extramap6");
	Load_Sco("~BLIP_68~ Extra MapMod 7", "extramap7");
	Load_Sco("~BLIP_68~ Extra MapMod 8", "extramap8");
	Load_Sco("~BLIP_68~ Extra MapMod 9", "extramap9");
	Load_Sco("~BLIP_68~ Extra MapMod 10", "extramap10");
	return;
}
void MC_Buffeting(void){
	MENU_SUB_HEADER = "~BLIP_94~ Buffetings Mods~BLIP_94~";
	Load_Sco("~BLIP_68~ Buffetings Menu ~PAD_RB~ + ~PAD_DPAD_DOWN~","buffy_menu");
	Load_Sco("~BLIP_68~ Model Changer", "buffy_model");
	Load_Sco("~BLIP_68~ Voice Changer ~PAD_RB~ + ~PAD_DPAD_LEFT~", "buffy_voice");
	Load_Sco("~BLIP_68~ Gravity Gun", "buffy_gravity");
	Load_Sco("~BLIP_68~ Gravity M4", "buffy_grav_m4");
	Load_Sco("~BLIP_68~ Forcefield AK-47 ~PAD_LT~+~PAD_RT~", "buffy_force");
	Load_Sco("~BLIP_68~ Rockets Mp5 Buffeting ~PAD_LT~+~PAD_RT~", "buffy_mp5");
	Load_Sco("~BLIP_68~ Classic Super Punch", "buffy_punch");
	Load_Sco("~BLIP_68~ Car Launcher Gun 2 ~PAD_RT~/~PAD_LT~+~PAD_DPAD_LEFT~/~PAD_DPAD_RIGHT~", "buffy_launcher");
	Load_Sco("~BLIP_68~ Vehicle Missiles", "buffy_missile");
	Load_Sco("~BLIP_68~ FlatBed PickUp", "buffy_flatbed");
	return;
}
void MC_Boubou(void){
	MENU_SUB_HEADER = "~BLIP_94~ BouBouvirus Mods~BLIP_94~";
	Load_Sco("~BLIP_68~ BoubouVirus V3 ~PAD_DPAD_DOWN~+~PAD_A~", "boubou3");
	Load_Sco("~BLIP_68~ BoubouVirus V4 ~PAD_DPAD_DOWN~+~PAD_A~", "boubou4");
	Load_Sco("~BLIP_68~ BoubouVirus V5 ~PAD_DPAD_DOWN~+~PAD_A~", "boubou5");
	Load_Sco("~BLIP_68~ Boubou Funny Cars ~PAD_DPAD_DOWN~ + ~PAD_X~","bou_funny_car");
	return;
}
void MC_Chrome(void){
	MENU_SUB_HEADER = "~BLIP_94~ Chr0m3 x MoDz~BLIP_94~";
	Load_Sco("~BLIP_68~ ChrOm3xMoDz V4.0 Menu  ~PAD_LB~+~PAD_X~", "chrome4");
	Load_Sco("~BLIP_68~ ChrOm3xMoDz V4.0 Network ~PAD_DPAD_LEFT~+~PAD_X~", "player_menu");
	Load_Sco("~BLIP_68~ Chr0m3 V5 Network ~PAD_LB~+~PAD_X~", "player_menuGT"); 
	Load_Sco("~BLIP_68~ ChrOm3xMoDz V5.0 VIP ~PAD_DPAD_LEFT~+~PAD_X~", "chrome5GT");
	Load_Sco("~BLIP_68~ Chr0m3 Ultimate Protection V4", "prot3");
	Load_Sco("~BLIP_68~ Ultimate Desert Eagle","cxm_deagle");
	Load_Sco("~BLIP_68~ Explosive Pistol","cxm_pistol");
	Load_Sco("~BLIP_68~ Undercover Police Mod","cxm_undercover");
	Load_Sco("~BLIP_68~ Police RolePlay 1.0","cxm_police");
	Load_Sco("~BLIP_68~ Realism Mod MP/H","cxm_realism_mph");
	Load_Sco("~BLIP_68~ Realism Mod K/H","cxm_realism");
	Load_Sco("~BLIP_68~ Radio On Foot","cxm_radio");
	Load_Sco("~BLIP_68~ Freeze Gun Menu","cxm_freeze");
	Load_Sco("~BLIP_68~ Group Hack","cxm_group");
	Load_Sco("~BLIP_68~ Group hack protection","cxm_gh_protection");
	Load_Sco("~BLIP_68~ Parachute Car 1.0","cxm_parachute");
	Load_Sco("~BLIP_68~ Pogo Stick","cxm_pogo");
	return;
}
void MC_Dark_Smokes(void){
	MENU_SUB_HEADER = "~BLIP_94~ xD4I2K SIVIOKEx Mods~BLIP_94~";
	Load_Sco("~BLIP_68~ xD4I2K's GH Protection", "darkprot");
	Load_Sco("~BLIP_68~ Walk & Drive On Water ~PAD_DPAD_RIGHT~+~PAD_X~", "hand5");
	Load_Sco("~BLIP_68~ xD4I2K's Undercover Police ~PAD_DPAD_LEFT~+~PAD_RB~", "D_Undercover");
	Load_Sco("~BLIP_68~ xD4I2K's v4  ~PAD_DPAD_DOWN~+~PAD_A~", "dark_menu");
	Load_Sco("~BLIP_68~ Car Launcher ~PAD_DPAD_LEFT~ + ~PAD_A~","dark_car_launcher");
	Load_Sco("~BLIP_68~ Network Ghost","dark_ghost");
	Load_Sco("~BLIP_68~ Vehicle Explosives","dark_exp_rounds");
	Load_Sco("~BLIP_68~ xD4I2K's Chauffeur ~PAD_DPAD_RIGHT~ + ~PAD_B~","D_Chauffeur");
	Load_Sco("~BLIP_68~ xD4I2K's Chauffeur Pilot ~PAD_DPAD_RIGHT~ + ~PAD_B~","D_Chauffeur_pilot");
	Load_Sco("~BLIP_68~ xD4I2K's HeatSeeker ~COL_NET_4~ Lock~PAD_LT~ Fire~PAD_A~","D_Heat_seekers");
	return;
}
void MC_Dax(void){
	MENU_SUB_HEADER = "~BLIP_94~ DaxxPhenom Mods~BLIP_94~";
	Load_Sco("~BLIP_68~ DaxxPhenom V4 ~PAD_DPAD_LEFT~+~PAD_A~", "daxx4");
	Load_Sco("~BLIP_68~ DaxxPhenom V5 ~PAD_DPAD_LEFT~+~PAD_A~", "daxx5");
	Load_Sco("~BLIP_68~ Throw Players Vehicles","dax_throw");
	Load_Sco("~BLIP_68~ Model Changer Anywhere","dax_model");
	Load_Sco("~BLIP_68~ Hell Mod","dax_hell");
	return;
}
void MC_Emanuel(void){
	MENU_SUB_HEADER = "~BLIP_94~ EmanuelU Mods~BLIP_94~";
	Load_Sco("~BLIP_68~ XMC 3 Menu  ~PAD_LB~+~PAD_RB~", "xmc3"); 
	Load_Sco("~BLIP_68~ XMC 3.57 Menu  ~PAD_LB~+~PAD_RB~", "xmc357"); 
	Load_Sco("~BLIP_68~ XMC 4 Menu  ~PAD_LB~+~PAD_RB~", "xmc4"); 
	Load_Sco("~BLIP_68~ XMC 5 Menu  ~PAD_LB~+~PAD_RB~", "xmc5"); 
	Load_Sco("~BLIP_68~ XMC 5.5 Menu  ~PAD_LB~+~PAD_RB~", "xmc55");
	Load_Sco("~BLIP_68~ XMC 5.5 Admin Menu  ~PAD_LB~+~PAD_RB~", "xmc55admin"); 
	Load_Sco("~BLIP_68~ XMC V5.5 ADMIN ~PAD_LB~+~PAD_RB~", "xmc55adminGT");
	Load_Sco("~BLIP_68~ XMC V6.0 ADMIN ~PAD_LB~+~PAD_RB~", "xmc6GT");
	Load_Sco("~BLIP_68~ XMC V6 Private  ~PAD_LB~+~PAD_RB~", "xmc6private"); 
	Load_Sco("~BLIP_68~ XMC V6 Admin  ~PAD_LB~+~PAD_RB~", "xmc6admin"); 
	Load_Sco("~BLIP_68~ Rocket Desert Eagle ~PAD_LT~+~PAD_RT~~COL_NET_4~", "rocketdeagle");
	Load_Sco("~BLIP_68~ Rockets RPG Car & Bike ~PAD_X~", "weap11");
	Load_Sco("~BLIP_68~ XMC Admin Menu  ~PAD_LB~+~PAD_RB~", "xmcadmin"); 				
	return;
}
void MC_EvilB(void){
	MENU_SUB_HEADER = "~BLIP_94~ Evil Blunt Mods~BLIP_94~";
	Load_Sco("~BLIP_68~ EvilB Map Mod Loader ~PAD_RB~+~PAD_DPAD_RIGHT~", "evilbmap");
	Load_Sco("~BLIP_68~ EvilB Trainer V2 (All in one!) ~PAD_LB~ + ~PAD_DPAD_RIGHT~", "eb_trainer");
	Load_Sco("~BLIP_68~ EVILB Obj and Funny Cars ~PAD_LB~ + ~PAD_DPAD_DOWN~", "objfunveh");
	Load_Sco("~BLIP_68~ Superman ~PAD_RB~+~PAD_DPAD_DOWN~/~PAD_LB~+~PAD_LSTICK_ALL~/", "eb_superman");
	Load_Sco("~BLIP_68~ Swimming Everywhere ~PAD_RB~+~PAD_DPAD_DOWN~", "hand3");					
	return;
}
void MC_Hun(void){
	MENU_SUB_HEADER = "~BLIP_94~ Hun Mods~BLIP_94~";
	Load_Sco("~BLIP_68~ CutScene Models Menu ~PAD_LB~+~PAD_A~","hun_cutscene");
	Load_Sco("~BLIP_68~ CutScene Interiors V1.2", "fun1");
	Load_Sco("~BLIP_68~ GangWars V2.2", "mini1");
	Load_Sco("~BLIP_68~ Hitman Jobs", "mini2");
	Load_Sco("~BLIP_68~ Gang Wars 3.0","hun_gang");
	Load_Sco("~BLIP_68~ HitMan Jobs","hun_hitman");
	Load_Sco("~BLIP_68~ Let The Zombies Come!", "gmode2");
	Load_Sco("~BLIP_68~ Make Peds Go Crazy!", "gmode3");
	Load_Sco("~BLIP_68~ Ped-Riot Generator 2.0","hun_ped");
	Load_Sco("~BLIP_68~ Treasure Hunt","hun_treasure");
	Load_Sco("~BLIP_68~ Treasure Hunt 2","hun_treasure2");
	Load_Sco("~BLIP_68~ Zombie Island","hun_zombie");
	Load_Sco("~BLIP_68~ Hun's Treasure Hunt V1", "mini4");
	Load_Sco("~BLIP_68~ Hun's Treasure Hunt V2", "mini5");
	return;
}	
void MC_JDMAlex(void){
	MENU_SUB_HEADER = "~BLIP_94~ JDMAlex~BLIP_94~";
	Load_Sco("~BLIP_68~ Explosive Pistol","jdma_pistol");
	Load_Sco("~BLIP_68~ Free Premium Mods ~PAD_RSTICK_ALL~ + ~PAD_DPAD_LEFT~","jdma_prem");
	Load_Sco("~BLIP_68~ Zombie MiniGame","jdma_zombie");
	Load_Sco("~BLIP_68~ Native Trainer v2 ~PAD_RSTICK_ALL~ + ~PAD_DPAD_LEFT~","jdma_trainer");
	Load_Sco("~BLIP_68~ AGM-114 HellFire","jdma_hellfire");
	Load_Sco("~BLIP_68~ FlyMod","flymod");
	Load_Sco("~BLIP_68~ Dead Eye","jdma_dead_eye");
	Load_Sco("~BLIP_68~ Heli Vehicle Pick Up","jdma_heli");
	Load_Sco("~BLIP_68~ JDMAlex Trainer v2 ~PAD_LB~ + ~PAD_DPAD_DOWN~","jdma_trainer_v2");
	return;
}	
void MC_Jumper(void){
	MENU_SUB_HEADER = "~BLIP_94~ Jumper~BLIP_94~";
	Load_Sco("~BLIP_68~ Object Launcher (new)","jumper_object_new");
	Load_Sco("~BLIP_68~ Object Launcher (old)","jumper_object_old");
	Load_Sco("~BLIP_68~ Throwing Cars","jumper_throwing");
	Load_Sco("~BLIP_68~ Pigeon Jumper","jumper_pigeon");
	Load_Sco("~BLIP_68~ Funny Car Builder","jumper_car_builder");
	Load_Sco("~BLIP_68~ Analog FlyMod","jumper_flymod");
	Load_Sco("~BLIP_68~ Drunk Mode","jumper_drunk");
	Load_Sco("~BLIP_68~ Eject Ped Drivers","jumper_eject_ped");
	Load_Sco("~BLIP_68~ Eject Self","jumper_eject");
	Load_Sco("~BLIP_68~ Custom Trophy","jumper_trophy");
	return;
}	
void MC_Keredor(void){
	MENU_SUB_HEADER = "~BLIP_94~ K3R3DOR Mods~BLIP_94~";
	Load_Sco("~BLIP_68~ Turret Airport Defence ~PAD_LSTICK_NONE~+~PAD_RT~", "Sam-turrets");
	Load_Sco("~BLIP_68~ K3R3DOR Stealth Bomber ~PAD_LSTICK_NONE~+~PAD_RT~", "stealthbomber");
	Load_Sco("~BLIP_68~ K3R3DOR Project368  ~PAD_RB~+~PAD_DPAD_RIGHT~", "keredor");
	Load_Sco("~BLIP_68~ K3R3DOR Project368v2  ~PAD_RB~+~PAD_DPAD_RIGHT~", "project368v2");
	Load_Sco("~BLIP_68~ Mod Menu v2 ~PAD_RSTICK_ALL~ + ~PAD_RB~","k3r3d0r_menu");
	Load_Sco("~BLIP_68~ SkyLift & TowTruck","k3r3d0r_skytow");
	Load_Sco("~BLIP_68~ Transformer mod","k3r3d0r_transformer");
	Load_Sco("~BLIP_68~ Levitation Mode ~PAD_DPAD_RIGHT~/~PAD_A~","k3r3d0r_levitation");
	Load_Sco("~BLIP_68~ Stalker Mode", "k3r3d0r_stalk");
	return;
}
void MC_Motions(void){
	MENU_SUB_HEADER = "~BLIP_94~ Motions97 Mods~BLIP_94~";
	Load_Sco("~BLIP_68~ Motions97 V3.0 Network Menu ~PAD_DPAD_RIGHT~+~PAD_B~", "motions_player");
	Load_Sco("~BLIP_68~ Motions97 V3.0 Menu ~PAD_DPAD_RIGHT~+~PAD_B~", "m97_menu");
	Load_Sco("~BLIP_68~ Gravity Gun ~PAD_RSTICK_ALL~/~PAD_LSTICK_ALL~", "m97_grav");
	Load_Sco("~BLIP_68~ Player Model Protection", "m97_model_protection");
	Load_Sco("~BLIP_68~ Taser Glock Motions97 ~PAD_LT~+~PAD_RT~","m97_taser");
	return;
}
void MC_Ohman(void){
	MENU_SUB_HEADER = "~BLIP_94~ OhManMyBad~BLIP_94~";
	Load_Sco("~BLIP_68~ Limo Driver", "mybad_limo");
	Load_Sco("~BLIP_68~ Drive on Water", "mybad_water");
	Load_Sco("~BLIP_68~ ZOMBIES: MP Madness","mybad_zombie");
	Load_Sco("~BLIP_68~ Bus Ramp", "mybad_bus");
	Load_Sco("~BLIP_68~ Twisted Metal", "mybad_twisted");
	Load_Sco("~BLIP_68~ Mugging Service by OhManMyBad​", "mugging_service");			
	return;
	
}
void MC_PsxColt(void){
	MENU_SUB_HEADER = "~BLIP_94~ PSXColt Mods~BLIP_94~";
	Load_Sco("~BLIP_68~ Colts Personal Driver ~PAD_LB~+~PAD_B~", "colt");
	Load_Sco("~BLIP_68~ Rocket-truck w. HeatSeekers", "RPGtruck");
	Load_Sco("~BLIP_68~ Rocket-truck w. HeatSeekers", "heatseeker");
	Load_Sco("~BLIP_68~ Colt/Keredor Advanced HeliRounds", "AdvancedHeliRounds");
	return;
}
void MC_Rev(void){
	MENU_SUB_HEADER = "~BLIP_94~ ReVoLuTiioNz~BLIP_94~";
	Load_Sco("~BLIP_68~ v1.4 Menu ~PAD_DPAD_DOWN~ + ~PAD_B~","rev_menu");
	Load_Sco("~BLIP_68~ v1.2 Keyboard","rev_keyboard");
	Load_Sco("~BLIP_68~ Freeze Gun Menu ~PAD_LB~ + ~PAD_DPAD_UP~","rev_freeze");
	Load_Sco("~BLIP_68~ Funny Weapon Mods", "rev_weapon");
	Load_Sco("~BLIP_68~ Online Player Nuke Guns","rev_nuke");
	Load_Sco("~BLIP_68~ Heli XML Bullets", "rev_xml_heli");
	Load_Sco("~BLIP_68~ Weapons On After ReSpawn ~PAD_A~", "weap14");
	return;
}
void MC_Rodd(void){
	MENU_SUB_HEADER = "~BLIP_94~ rodd1981~BLIP_94~";
	Load_Sco("~BLIP_68~ Deal Breaker II", "rodd_dbii");
	Load_Sco("~BLIP_68~ Liberty City Jobs v1.1", "lc_jobs_load");
	Load_Sco("~BLIP_68~ Preacher Bodyguards", "rodd_preacher");
	return;
}
void MC_Shockwave(void){
	MENU_SUB_HEADER = "~BLIP_94~ SHoCKxWAVE Mods~BLIP_94~";
	Load_Sco("SHoCKxWAVE AimBot Weapon", "aimbot");
	Load_Sco("SHoCKxWAVE ModMenu ~COL_NET_4~v9   ~PAD_DPAD_RIGHT~ + ~PAD_A~", "shockxwave9");
	Load_Sco("SHoCKxWAVE ModMenu ~g~v10  ~PAD_DPAD_LEFT~ + ~PAD_A~", "shockxwave10");
	Load_Sco("SHoCKxWAVE ModMenu ~r~v11  ~PAD_DPAD_LEFT~ + ~PAD_A~", "shockxwave11");
	Load_Sco("SHoCKxWAVE ModMenu ~p~v12  ~PAD_DPAD_LEFT~ + ~PAD_A~", "shockxwave12");
	Load_Sco("SHoCKxWAVE ModMenu ~w~v13  ~PAD_DPAD_LEFT~ + ~PAD_A~", "shockxwave13");
	return;
}
void MC_XFChewy(void){
	MENU_SUB_HEADER = "~BLIP_94~ XF CH3WY Mods~BLIP_94~";
	Load_Sco("~BLIP_68~ Freeze Menu V3 By XF CH3WY ~PAD_RB~+~PAD_A~", "XFFreeze3");
	Load_Sco("~BLIP_68~ Freeze Menu V2 By XF CH3WY ~PAD_RB~+~PAD_A~", "XFFreeze");
	Load_Sco("~BLIP_68~ Hydraulics By XF CH3WY ~PAD_RB~+~PAD_A~", "XFHydraulics");
	Load_Sco("~BLIP_68~ Fighter Jet by XF CH3WY", "Fighter Jet");
	return;
}
void MC_Various(void){
	MENU_SUB_HEADER = "~BLIP_94~ Various Devs Mods~BLIP_94~";			
	Load_Sco("~BLIP_68~ Cosy Tow Truck Mod","cosy_tow");
	Load_Sco("~BLIP_68~ Dr Jigsaw Scripts","dr_jig");
	Load_Sco("~BLIP_68~ Dr X Clan 2.5 ~PAD_X~ + ~PAD_DPAD_DOWN~","drx_menu");
	Load_Sco("~BLIP_68~ DSE V3.5","dse_menu");
	Load_Sco("~BLIP_68~ Eaqz Funny Cars ~PAD_LB~ + ~PAD_A~","eaqz_cars");
	Load_Sco("~BLIP_68~ iHaz .5b Premium ~PAD_B~ + ~PAD_DPAD_DOWN~","ihaz");
	Load_Sco("~BLIP_68~ Particle Effects Manager","ptfx_manager");
	Load_Sco("~BLIP_68~ R3B3LY0N Funny Cars ~PAD_LB~ + ~PAD_A~","r3b3lyon_funny_car");
	Load_Sco("~BLIP_68~ T3CH Object Spawner","t3ch");
	Load_Sco("~BLIP_68~ Undercover Cavalcade","undercover_cavcade");
	Load_Sco("~BLIP_68~ Undercover Ruiner","undercover_ruiner");
	Load_Sco("~BLIP_68~ Evades V3.0 Public ~PAD_X~+~PAD_DPAD_DOWN~", "evade");
	Load_Sco("~BLIP_68~ Evades V3.0 Premium ~PAD_X~+~PAD_DPAD_DOWN~", "evadeGT");
	Load_Sco("~BLIP_68~ HighGuy Police Script", "HighGuy");
	Load_Sco("~BLIP_68~ HighGuy Police Script Controls", "Highguycontrols");
	Load_Sco("~BLIP_68~ Rockstarkings V7.0  ~PAD_A~+~PAD_X~", "main10");
	Load_Sco("~BLIP_68~ XxK1tty Gas-Flame Spawner", "gasspawner");
	Load_Sco("~BLIP_68~ XxK1tty Suspension Menu ~PAD_RSTICK_NONE~/~PAD_DPAD_LEFTRIGHT~", "suspension");
	return;
}
