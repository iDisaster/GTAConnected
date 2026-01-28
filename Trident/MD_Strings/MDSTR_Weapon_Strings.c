/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */  

void MD_All_Weapon_Strings(int MenuItem_Index){
	char* Weapon_String[6];
	Weapon_String[0] = "< ERROR >";
	Weapon_String[1] = GetBit(pPlayerOptionsBitSet,PLAYER_OPTION_CARRY_ALL_WEAPONS) ? "< ~COL_NET_1~Carry All >" : "< Carry All >";
	Weapon_String[2] = "< Advanced >";
	Weapon_String[3] = "< Poor >";
	Weapon_String[4] = "< TBOGT >";	
	Weapon_String[5] = "< ~COL_NET_4~REMOVE >";
	menu_item[MenuItem_Index].charval = Weapon_String[menu_item[MenuItem_Index].num_val];
}
void MD_Melee_Weapon_Strings(int MenuItem_Index){
	char* Weapon_String[6];
	Weapon_String[0] = "< ERROR >";
	Weapon_String[1] = "< Fist >";
	Weapon_String[2] = "< Knife >";
	Weapon_String[3] = "< Baseball Bat >";
	Weapon_String[4] = "< Poolstick >";
	Weapon_String[5] = "< ~COL_NET_4~REMOVE >";
	menu_item[MenuItem_Index].charval = Weapon_String[menu_item[MenuItem_Index].num_val];
}
void MD_Thrown_Weapon_Strings(int MenuItem_Index){
	char* Weapon_String[4];
	Weapon_String[0] = "< ERROR  ~PAD_RIGHT~ >";
	Weapon_String[1] = "< Molotov Coctail >";
	Weapon_String[2] = "< Grenade >";
	Weapon_String[3] = "< ~COL_NET_4~REMOVE >";
	menu_item[MenuItem_Index].charval = Weapon_String[menu_item[MenuItem_Index].num_val];
}
void MD_Poor_Weapon_Strings(int MenuItem_Index){
	char* Weapon_String[8];	
	Weapon_String[0] = "< ERROR  ~PAD_RIGHT~ >";
	Weapon_String[1] = "< Pistol (Glock 22) >";
	Weapon_String[2] = "< RPG (RPG-7) >";
	Weapon_String[3] = "< Micro SMG (IMI Micro Uzi) >";
	Weapon_String[4] = "< Assault Rifle (AK-47) >";	
	Weapon_String[5] = "< Pump Shotgun(Ithaca M.37) >";
	Weapon_String[6] = "< Sniper(Remington 700) >";
	Weapon_String[7] = "< ~COL_NET_4~REMOVE >";
	menu_item[MenuItem_Index].charval = Weapon_String[menu_item[MenuItem_Index].num_val];
}
void MD_Advanced_Weapon_Strings(int MenuItem_Index){
	char* Weapon_String[8];	
	Weapon_String[0] = "< ERROR  ~PAD_RIGHT~ >";
	Weapon_String[1] = "< Desert Eagle XIX >";
	Weapon_String[2] = "< RPG (RPG-7) >";
	Weapon_String[3] = "< SMG (SW MP-10) >";
	Weapon_String[4] = "< Carbine Rifle(Colt M4A1) >";	
	Weapon_String[5] = "< Combat Shotgun(Remington) >";
	Weapon_String[6] = "< Combat Sniper(HK PSG-1) >";
	Weapon_String[7] = "< ~COL_NET_4~REMOVE >";
	menu_item[MenuItem_Index].charval = Weapon_String[menu_item[MenuItem_Index].num_val];
}
void MD_Vehicle_Weapon_Strings(int MenuItem_Index){
	char* Weapon_String[11];	
	Weapon_String[0] = "< ERROR  ~PAD_RIGHT~ >";
	Weapon_String[1] = 	(GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT("weap10") > 0) ? "< ~COL_NET_1~Shoot Bomb ~w~>" : "< Shoot Bomb >";
	Weapon_String[2] =	(GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT("weap12") > 0) ? "< ~COL_NET_1~Shoot Exploding cars ~w~>" : "< Shoot Exploding cars >";	
	Weapon_String[3] =	(GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT("Sam-turrets") > 0) ? "< ~COL_NET_1~Turret Airport Defence ~w~>" : "< Turret Airport Defence >";
	Weapon_String[4] =	(GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT("rev_xml_heli") > 0) ? "< ~COL_NET_1~Heli Bullets ~w~>" : "< Heli Bullets >";
	Weapon_String[5] =	(GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT("flameheli") > 0) ? "< ~COL_NET_1~Flaming Heli ~w~>" : "< Flaming Heli >";//xbox-ps3 diff .sco files!
	Weapon_String[6] =	(GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT("weap2") > 0) ? "< ~COL_NET_1~Drop A Bomb ~w~>" : "< Drop A Bomb >";
	Weapon_String[7] =	(GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT("weap3") > 0) ? "< ~COL_NET_1~Explosive Rounds ~w~>" : "< Explosive Rounds >";
	Weapon_String[8] =	(GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT("weap13") > 0) ? "< ~COL_NET_1~Twisted Metal ~w~>" : "< Twisted Metal >";
	Weapon_String[9] =	(GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT("AdvancedHeliRounds") > 0) ? "< ~COL_NET_1~Advanced HeliRounds ~w~>" : "< Advanced HeliRounds >";
	Weapon_String[10] = "< ~COL_NET_4~Disable All >";
	menu_item[MenuItem_Index].charval = Weapon_String[menu_item[MenuItem_Index].num_val];	
}
void MD_Special_Weapon_Strings(int MenuItem_Index){
	char* Weapon_String[15];
	Weapon_String[0] = "< ERROR  ~PAD_RIGHT~ >";
	Weapon_String[1] = (DOES_OBJECT_EXIST(Attach_object[25])) ? "< ~COL_NET_1~Nailgun ~w~>" : "< Nailgun >";
	Weapon_String[2] = GetBit(rocketWeaponsBitSet,players[ChangeNetPlayer].id) ? "< ~COL_NET_1~Rocket Weapon ~w~>" : "< Rocket Weapon >";
	Weapon_String[3] =	(IS_THIS_SCRIPT_RUNNING("aimbot") > 0) ? "< ~COL_NET_1~Aimbot~y ~(Only you) ~w~ >" : "< Aimbot ~y~(Only you) ~w~>";
	Weapon_String[4] =	(IS_THIS_SCRIPT_RUNNING("m97_grav") > 0) ? "< ~COL_NET_1~Gravity Gun ~y~(Only you) ~w~>" : "< Gravity Gun ~y~(Only you) ~w~>";
	Weapon_String[5] =	(IS_THIS_SCRIPT_RUNNING("m97_taser") > 0) ? "< ~COL_NET_1~Tazer Gun ~y~(Only you) ~w~>" : "< Tazer Gun ~y~(Only you) ~w~>";
	Weapon_String[6] =	(IS_THIS_SCRIPT_RUNNING("rocketdeagle") > 0) ? "< ~COL_NET_1~Rocket Desert Eagle ~y~(Only you) ~w~>" : "< Rocket Desert Eagle ~y~(Only you) ~w~>";
	Weapon_String[7] =	(IS_THIS_SCRIPT_RUNNING("drs01") > 0) ? "< ~COL_NET_1~Explosive Mp5/AK-47 ~y~(Only you) ~w~>" : "< Explosive Mp5/AK-47 ~y~(Only you) ~w~>";
	Weapon_String[8] =	(IS_THIS_SCRIPT_RUNNING("buffy_force") > 0) ? "< ~COL_NET_1~Forcefield AK-47 ~y~(Only you) ~w~>" : "< Forcefield AK-47 ~y~(Only you) ~w~>";
	Weapon_String[9] =	(IS_THIS_SCRIPT_RUNNING("ForceFieldv25") > 0) ? "< ~COL_NET_1~Advanced Forcefield ~y~(Only you) ~w~>" : "< Advanced Forcefield ~y~(Only you) ~w~>";
	Weapon_String[10] =	(IS_THIS_SCRIPT_RUNNING("buffy_mp5") > 0) ? "< ~COL_NET_1~Rockets Mp5 ~y~(Only you) ~w~>" : "< Rockets Mp5 ~y~(Only you) ~w~>";
	Weapon_String[11] =	(IS_THIS_SCRIPT_RUNNING("rob_cl") > 0) ? "< ~COL_NET_1~Vehicle Gun 1 ~y~(Only you) ~w~>" : "< Vehicle Gun 1 ~y~(Only you) ~w~>";
	Weapon_String[12] =	(IS_THIS_SCRIPT_RUNNING("buffy_launcher") > 0) ? "< ~COL_NET_1~Vehicle Gun 2 ~y~(Only you) ~w~>" : "< Vehicle Gun 2 ~y~(Only you) ~w~>";
	Weapon_String[13] =	(IS_THIS_SCRIPT_RUNNING("rob_carmod") > 0) ? "< ~COL_NET_1~Vehicle manipulator ~y~(Only you) ~w~>" : "< Vehicle manipulator ~y~(Only you) ~w~>";	
	Weapon_String[14] = "< ~COL_NET_4~REMOVE / DISABLE ALL >";
	menu_item[MenuItem_Index].charval = Weapon_String[menu_item[MenuItem_Index].num_val];	
}
void MD_TBOGT_Weapon_Strings(int MenuItem_Index){
	char* Weapon_String[11];
	Weapon_String[0] = "< ERROR  ~PAD_RIGHT~ >";
	Weapon_String[1] = "< Gold SMG (Uzi) >";
	Weapon_String[2] = "< Grenade Launcher (HK69A1) >";
	Weapon_String[3] = "< Sticky Bombs >";
	Weapon_String[4] = "< Pistol .44 (AMT AutoMag 180) >";
	Weapon_String[5] = "< Explosive Shotgun (AA-12) >";
	Weapon_String[6] = "< Advanced MG (M249 SAW) >";
	Weapon_String[7] = "< Advanced Sniper (DSR-1) >";
	Weapon_String[8] = "< Parachute >";
	Weapon_String[9] = "< Assault SMG (FN P90) >";
	Weapon_String[10] = "< ~COL_NET_4~REMOVE / DISABLE ALL >";		
	menu_item[MenuItem_Index].charval = Weapon_String[menu_item[MenuItem_Index].num_val];
}
void MD_Weapon_Strings(int MenuItem_Index){	//16
	if(MenuItem_Index == 1) return MD_Spy_Strings(MenuItem_Index);
	else if(MenuItem_Index == 2) return MD_Delete_Strings(MenuItem_Index);
	else if(MenuItem_Index == 3) return MD_PlayerOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
	else if(MenuItem_Index == 6) return MD_All_Weapon_Strings(MenuItem_Index);
	else if(MenuItem_Index == 7) return MD_Melee_Weapon_Strings(MenuItem_Index);
	else if(MenuItem_Index == 8) return MD_Thrown_Weapon_Strings(MenuItem_Index);
	else if(MenuItem_Index == 9) return MD_Poor_Weapon_Strings(MenuItem_Index);
	else if(MenuItem_Index == 10) return MD_Advanced_Weapon_Strings(MenuItem_Index);
	else if(MenuItem_Index == 11) return MD_TBOGT_Weapon_Strings(MenuItem_Index);
	else if(MenuItem_Index == 12) return MD_Special_Weapon_Strings(MenuItem_Index);
	else if(MenuItem_Index == 13) return MD_Vehicle_Weapon_Strings(MenuItem_Index);
}
