/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */  
 
 
void MD_Net_VehOpt_QuickSpawn_Strings(int MenuItem_Index){
		char* Vehicle[14]; 
		Vehicle[1] = "~PAD_LEFT~ COMET ~PAD_RIGHT~";				
		Vehicle[2] = "~PAD_LEFT~ TURISMO ~PAD_RIGHT~";				
		Vehicle[3] = "~PAD_LEFT~ INFERNUS ~PAD_RIGHT~";				
		Vehicle[4] = "~PAD_LEFT~ SUPERGT ~PAD_RIGHT~";				
		Vehicle[5] = "~PAD_LEFT~ SULTANRS ~PAD_RIGHT~";				
		Vehicle[6] = "~PAD_LEFT~ ORACLE ~PAD_RIGHT~";				
		Vehicle[7] = "~PAD_LEFT~ PATRIOT ~PAD_RIGHT~";				
		Vehicle[8] = "~PAD_LEFT~ FBI ~PAD_RIGHT~";				
		Vehicle[9] = "~PAD_LEFT~ BUS ~PAD_RIGHT~";				
		Vehicle[10] = "~PAD_LEFT~ SQUALO ~PAD_RIGHT~";				
		Vehicle[11] = "~PAD_LEFT~ NRG900 ~PAD_RIGHT~";				
		Vehicle[12] = "~PAD_LEFT~ MAVERICK ~PAD_RIGHT~";				
		Vehicle[13] = "~PAD_LEFT~ ANNIHILATOR ~PAD_RIGHT~";	
		menu_item[MenuItem_Index].charval = Vehicle[menu_item[MenuItem_Index].num_val];
}
void MD_Net_VehOpt_General_Strings(int MenuItem_Index){
	char* general_strings[8];
	//general_strings[1] = IS_CHARS_VEHICLE_LOCKED(PLAYER_CHAR(players[ChangeNetPlayer].id)) ? "~PAD_LEFT~ ~COL_NET_1~Lock ~w~~PAD_RIGHT~" : "~PAD_LEFT~ Lock ~PAD_RIGHT~";
	general_strings[1] = "~PAD_LEFT~ Fix & Wash ~PAD_RIGHT~";
	general_strings[2] = "~PAD_LEFT~ Flip ~PAD_RIGHT~";
	general_strings[3] = "~PAD_LEFT~ Delete ~PAD_RIGHT~";	
	general_strings[4] = "~PAD_LEFT~ Try to damage proof ~PAD_RIGHT~";
	general_strings[5] = "~PAD_LEFT~ Make visible ~PAD_RIGHT~";
	general_strings[6] = "~PAD_LEFT~ Make invisible ~PAD_RIGHT~";
	general_strings[7] = "~PAD_LEFT~ Clone ~PAD_RIGHT~";
	menu_item[MenuItem_Index].charval = general_strings[menu_item[MenuItem_Index].num_val];
	
} 
 void MD_Net_VehOpt_Pplayer_ActiveOption_Strings(int MenuItem_Index)
 {
 	////10 Vehicle Helper / Visibility / Drive - Walk on water / Stick to ground / Autospawn Boat in water
 	char* physics_strings[4];
 	//physics_strings[1] = GetBit(VehicleOptionsBitSet,VEHICLE_OPTION_INVINCIBLE) ? "~PAD_LEFT~ ~COL_NET_1~Invincible ~w~~PAD_RIGHT~" : "~PAD_LEFT~ Invincible ~PAD_RIGHT~";
	//physics_strings[2] = GetBit(VehicleOptionsBitSet,VEHICLE_OPTION_INVISIBLE) ? "~PAD_LEFT~ ~COL_NET_1~Invisible ~w~~PAD_RIGHT~" : "~PAD_LEFT~ Invisible ~PAD_RIGHT~";
	physics_strings[1] = DOES_OBJECT_EXIST(drive_water[iPlayer]) ? "~PAD_LEFT~ ~COL_NET_1~Drive on water ~w~~PAD_RIGHT~" : "~PAD_LEFT~ Drive on water ~PAD_RIGHT~" ;
	physics_strings[2] = GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_DESOLIDIFY) ? "~PAD_LEFT~ ~COL_NET_1~Desolidify ~w~~PAD_RIGHT~" : "~PAD_LEFT~ Desolidify ~PAD_RIGHT~";;
	physics_strings[3] = GetBit(VehicleOptionsBitSet,VEHICLE_OPTION_AUTO_BOAT) ? "~PAD_LEFT~ ~COL_NET_1~Auto-spawn boat ~w~~PAD_RIGHT~" : "~PAD_LEFT~ Auto-spawn boat ~PAD_RIGHT~";	
	menu_item[MenuItem_Index].charval = physics_strings[menu_item[MenuItem_Index].num_val];
 }




void MD_Net_VehOpt_SpawnSettings_Strings(int MenuItem_Index)
{
	////9  Upgrades / Damage proof / Sirens
	char* Playeroption_example1[6]; 
	Playeroption_example1[1] = GetBit(VehicleOptionsBitSet,	VEHICLE_OPTION_ALL_UPGRADES) ? "~PAD_LEFT~ ~COL_NET_1~All upgrades ~w~~PAD_RIGHT~" : "~PAD_LEFT~ All upgrades ~PAD_RIGHT~";
	Playeroption_example1[2] = GetBit(VehicleOptionsBitSet,VEHICLE_OPTION_INVINCIBLE) ? "~PAD_LEFT~ ~COL_NET_1~Invincible ~w~~PAD_RIGHT~" : "~PAD_LEFT~ Invincible ~PAD_RIGHT~";
	Playeroption_example1[3] = GetBit(VehicleOptionsBitSet,VEHICLE_OPTION_SIREN) ? "~PAD_LEFT~ ~COL_NET_1~Sirens ~w~~PAD_RIGHT~" : "~PAD_LEFT~ Sirens ~PAD_RIGHT~";
	Playeroption_example1[4] = GetBit(VehicleOptionsBitSet,VEHICLE_OPTION_RAINBOW) ? "~PAD_LEFT~ ~COL_NET_1~Rainbow Car ~w~~PAD_RIGHT~" : "~PAD_LEFT~ Rainbow Car ~PAD_RIGHT~";
	Playeroption_example1[5] = GetBit(VehicleOptionsBitSet,VEHICLE_OPTION_ENGINE) ? "~PAD_LEFT~ ~COL_NET_1~Engine ~w~~PAD_RIGHT~" : "~PAD_LEFT~ Engine ~PAD_RIGHT~";
	
	menu_item[MenuItem_Index].charval = Playeroption_example1[menu_item[MenuItem_Index].num_val];
}


void MD_Net_VehOpt_Action_Strings(int MenuItem_Index)
{
	char* Playeroption_example1[5]; 
	Playeroption_example1[1] = "~PAD_LEFT~ Duplicate ~PAD_RIGHT~";
	Playeroption_example1[2] = "~PAD_LEFT~ Freeze position ~PAD_RIGHT~";
	Playeroption_example1[3] = "~PAD_LEFT~ Un-freeze position ~PAD_RIGHT~";
	Playeroption_example1[4] = "~PAD_LEFT~ Break ~PAD_RIGHT~";
	menu_item[MenuItem_Index].charval = Playeroption_example1[menu_item[MenuItem_Index].num_val];
	//Misc: Flymod, Player inferno, Weapons + armour, Remove armour, Explode self, Spawn money
}

void MD_Net_VehOpt_Throw_Strings(const int MenuItem_Index)
{
	char* Throw_Vehicle_String[7]; 
	Throw_Vehicle_String[1] = "~PAD_LEFT~ Up ~PAD_RIGHT~";
	Throw_Vehicle_String[2] = "~PAD_LEFT~ Down ~PAD_RIGHT~";
	Throw_Vehicle_String[3] = "~PAD_LEFT~ Left ~PAD_RIGHT~";
	Throw_Vehicle_String[4] = "~PAD_LEFT~ Right ~PAD_RIGHT~";
	Throw_Vehicle_String[5] = "~PAD_LEFT~ Forwards ~PAD_RIGHT~";
	Throw_Vehicle_String[6] = "~PAD_LEFT~ Backwards ~PAD_RIGHT~";
	menu_item[MenuItem_Index].charval = Throw_Vehicle_String[menu_item[MenuItem_Index].num_val];

}

void MD_Net_VehOpt_Heading_Strings(const int MenuItem_Index)
{
	////Speedboost, Reverse + Speedboost, Turn Right, Turn Left,
	char* Heading_String[6];
	Heading_String[1] = "~PAD_LEFT~ Speedboost ~PAD_RIGHT~";
	Heading_String[2] = "~PAD_LEFT~ Reverse + Speedboost ~PAD_RIGHT~";
	Heading_String[3] = "~PAD_LEFT~ Reverse ~PAD_RIGHT~";
	Heading_String[4] = "~PAD_LEFT~ Turn Left ~PAD_RIGHT~";
	Heading_String[5] = "~PAD_LEFT~ Turn Right ~PAD_RIGHT~";
	menu_item[MenuItem_Index].charval = Heading_String[menu_item[MenuItem_Index].num_val];
}

void MD_Net_VehOpt_HelperLoop_Strings(const int MenuItem_Index) //"Vehicle helpers"
{
	char* VehHelper_Loop_strings[3];
	VehHelper_Loop_strings[1] = (GetBit(autoFixVehBitSet,players[ChangeNetPlayer].id)) ? "~PAD_LEFT~ ~COL_NET_1~Auto fix ~PAD_RIGHT~" : "~PAD_LEFT~ Auto fix ~PAD_RIGHT~";
	VehHelper_Loop_strings[2] = (GetBit(autoFlipVehBitSet,players[ChangeNetPlayer].id)) ? "~PAD_LEFT~ ~COL_NET_1~Auto flip ~PAD_RIGHT~" : "~PAD_LEFT~ Auto flip ~PAD_RIGHT~";
	menu_item[MenuItem_Index].charval = VehHelper_Loop_strings[menu_item[MenuItem_Index].num_val];
	/*autoFlipVehBitSet;  //covers all players! :D - Nathan
uint autoFixVehBitSet;  /*/
}


void MD_VehOpt_NetPlayer_Strings(int MenuItem_Index){
	if(MenuItem_Index == 1) return MD_Spy_Strings(MenuItem_Index);
	else if(MenuItem_Index == 2) return MD_Delete_Strings(MenuItem_Index);
	else if(MenuItem_Index == 3) return MD_PlayerOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
	//Jumpover 5
	//Sub Spawner 6
	//Sub Addons 7
	//Sub Upgrades 8
	else if(MenuItem_Index == 9) return MD_Net_VehOpt_QuickSpawn_Strings(MenuItem_Index);
	else if(MenuItem_Index == 10) return MD_Net_VehOpt_General_Strings(MenuItem_Index);
	else if(MenuItem_Index == 11) return MD_Net_VehOpt_Heading_Strings(MenuItem_Index);
	else if(MenuItem_Index == 12) return MD_Net_VehOpt_HelperLoop_Strings(MenuItem_Index); //Vehicle helpers...
	else if(MenuItem_Index == 13) return MD_Net_VehOpt_Throw_Strings(MenuItem_Index);
	else if(MenuItem_Index == 14) return MD_Net_VehOpt_SpawnSettings_Strings(MenuItem_Index);
	else if(MenuItem_Index == 15) return MD_Net_VehOpt_Action_Strings(MenuItem_Index);
}