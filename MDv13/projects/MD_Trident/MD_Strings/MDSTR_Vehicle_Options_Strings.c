/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */  
//ANCHOR_BOAT(Vehicle boat, boolean anchor); - Nathan thinks this be useful :D

void MD_VehOpt_QuickSpawn_Strings(int MenuItem_Index){
		char* Vehicle[14]; 
		Vehicle[1] = "~PAD_LEFT~COMET ~PAD_RIGHT~";				
		Vehicle[2] = "~PAD_LEFT~TURISMO ~PAD_RIGHT~";				
		Vehicle[3] = "~PAD_LEFT~INFERNUS ~PAD_RIGHT~";				
		Vehicle[4] = "~PAD_LEFT~SUPERGT ~PAD_RIGHT~";				
		Vehicle[5] = "~PAD_LEFT~SULTANRS ~PAD_RIGHT~";				
		Vehicle[6] = "~PAD_LEFT~ORACLE ~PAD_RIGHT~";				
		Vehicle[7] = "~PAD_LEFT~PATRIOT ~PAD_RIGHT~";				
		Vehicle[8] = "~PAD_LEFT~FBI ~PAD_RIGHT~";				
		Vehicle[9] = "~PAD_LEFT~BUS ~PAD_RIGHT~";				
		Vehicle[10] = "~PAD_LEFT~SQUALO ~PAD_RIGHT~";				
		Vehicle[11] = "~PAD_LEFT~NRG900 ~PAD_RIGHT~";				
		Vehicle[12] = "~PAD_LEFT~MAVERICK ~PAD_RIGHT~";				
		Vehicle[13] = "~PAD_LEFT~ANNIHILATOR ~PAD_RIGHT~";	
		menu_item[MenuItem_Index].charval = Vehicle[menu_item[MenuItem_Index].num_val];
}
void MD_VehOpt_Pplayer_General_Strings(int MenuItem_Index){
	char* general_strings[9];
	//general_strings[1] = IS_CHARS_VEHICLE_LOCKED(PLAYER_CHAR(players[ChangeNetPlayer].id)) ? "~PAD_LEFT~ ~COL_NET_1~Lock ~w~~PAD_RIGHT~" : "~PAD_LEFT~ Lock ~PAD_RIGHT~";
	general_strings[1] = "~PAD_LEFT~ Fix & Wash ~PAD_RIGHT~";
	general_strings[2] = "~PAD_LEFT~ Flip ~PAD_RIGHT~";
	general_strings[3] = "~PAD_LEFT~ Burst Tyres ~PAD_RIGHT~";
	general_strings[4] = "~PAD_LEFT~ Fix Tyres ~PAD_RIGHT~";
	general_strings[5] = (!IS_CHAR_VISIBLE(pPlayer) ? "~PAD_LEFT~ ~COL_NET_1~Invisible~w~  ~BLIP_63~ ~PAD_RIGHT~" : "~PAD_LEFT~ Invisible  ~BLIP_63~ ~PAD_RIGHT~"); // Set player invisible --~PAD_RIGHT~ This should be a bool
	general_strings[6] = (!IS_CHAR_VISIBLE(pPlayer) && GetBit(VehicleOptionsBitSet,VEHICLE_OPTION_INVISIBLE)) ? "~PAD_LEFT~ ~COL_NET_1~Invisible~w~  ~BLIP_63~ + ~BLIP_79~~PAD_RIGHT~" : "~PAD_LEFT~ Invisible  ~BLIP_63~ + ~BLIP_79~~PAD_RIGHT~"; // Set Player + Vehicle --~PAD_RIGHT~ This should be a bool
	general_strings[7] = (GetBit(VehicleOptionsBitSet,VEHICLE_OPTION_REMOVE_BLIP) && GetBit(pPlayerOptionsBitSet,PLAYER_OPTION_REMOVE_BLIP)) ? "~PAD_LEFT~ ~COL_NET_1~Hide Blip ~w~~PAD_RIGHT~" : "~PAD_LEFT~ Hide Blip ~PAD_RIGHT~";// Hide Blip and set vehicle + Player Invisible --~PAD_RIGHT~ YES! I need it here - This should be a bool
	general_strings[8] = "~PAD_LEFT~ Delete ~PAD_RIGHT~";	
	menu_item[MenuItem_Index].charval = general_strings[menu_item[MenuItem_Index].num_val];
	
} 
 void MD_VehOpt_Pplayer_ActiveOption_Strings(int MenuItem_Index)
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

void MD_VehOpt_Save_ColourSettings_Strings(int MenuItem_Index){
	char* Playeroption_example1[3]; 
	Playeroption_example1[1] = "~PAD_LEFT~ Your Vehicle ~PAD_RIGHT~";
	Playeroption_example1[2] = "~PAD_LEFT~ Net Vehicles ~PAD_RIGHT~";
	menu_item[MenuItem_Index].charval = Playeroption_example1[menu_item[MenuItem_Index].num_val];
}


void MD_VehOpt_Pplayer_SpawnSettings_Strings(int MenuItem_Index)
{
	////9  Upgrades / Damage proof / Sirens
	char* Playeroption_example1[9]; 
	Playeroption_example1[1] = GetBit(VehicleOptionsBitSet,	VEHICLE_OPTION_ALL_UPGRADES) ? "~PAD_LEFT~ ~COL_NET_1~All upgrades ~w~~PAD_RIGHT~" : "~PAD_LEFT~ All upgrades ~PAD_RIGHT~";
	Playeroption_example1[2] = GetBit(VehicleOptionsBitSet,VEHICLE_OPTION_INVINCIBLE) ? "~PAD_LEFT~ ~COL_NET_1~Invincible ~w~~PAD_RIGHT~" : "~PAD_LEFT~ Invincible ~PAD_RIGHT~";
	Playeroption_example1[3] = GetBit(VehicleOptionsBitSet,VEHICLE_OPTION_SIREN) ? "~PAD_LEFT~ ~COL_NET_1~Sirens ~w~~PAD_RIGHT~" : "~PAD_LEFT~ Sirens ~PAD_RIGHT~";
	Playeroption_example1[4] = GetBit(VehicleOptionsBitSet,VEHICLE_OPTION_RAINBOW) ? "~PAD_LEFT~ ~COL_NET_1~Rainbow Car ~w~~PAD_RIGHT~" : "~PAD_LEFT~ Rainbow Car ~PAD_RIGHT~";
	Playeroption_example1[5] = GetBit(VehicleOptionsBitSet,VEHICLE_OPTION_ENGINE) ? "~PAD_LEFT~ ~COL_NET_1~Engine ~w~~PAD_RIGHT~" : "~PAD_LEFT~ Engine ~PAD_RIGHT~";
	Playeroption_example1[6] = Coloursetting_Personal ? "~PAD_LEFT~ ~COL_NET_1~Personal Colour ~w~~PAD_RIGHT~" : "~PAD_LEFT~ Personal Colour ~PAD_RIGHT~";
	Playeroption_example1[7] = Coloursetting_Net ? "~PAD_LEFT~ ~COL_NET_1~NetVehicle Colour ~w~~PAD_RIGHT~" : "~PAD_LEFT~ NetVehicle Colour ~PAD_RIGHT~";
	Playeroption_example1[8] = (!Coloursetting_Net && !Coloursetting_Personal) ? "~PAD_LEFT~ ~COL_NET_1~Random Colour ~w~~PAD_RIGHT~" : "~PAD_LEFT~ Random Colour ~PAD_RIGHT~";
	menu_item[MenuItem_Index].charval = Playeroption_example1[menu_item[MenuItem_Index].num_val];
}

void MD_VehOpt_pPlayer_Handling_Option_Strings(int MenuItem_Index)
{
	//12 Super Speed / Drift Mode / Lower vehicle / Vehicle Jump / Super Bike / Stick on ground
	char* Playeroption_example1[6]; 
	Playeroption_example1[1] = GetBit(VehicleOptionsBitSet,VEHICLE_OPTION_JUMP) ? "~PAD_LEFT~ ~COL_NET_1~Vehicle Jump ~w~~PAD_RIGHT~" : "~PAD_LEFT~ Vehicle Jump ~PAD_RIGHT~";
	Playeroption_example1[2] = GetBit(VehicleOptionsBitSet,VEHICLE_OPTION_DRIFT) ? "~PAD_LEFT~ ~COL_NET_1~Drift mode ~w~~PAD_RIGHT~" : "~PAD_LEFT~ Drift mode ~PAD_RIGHT~";
	Playeroption_example1[3] = GetBit(VehicleOptionsBitSet,VEHICLE_OPTION_LOWER) ? "~PAD_LEFT~ ~COL_NET_1~Lower ~w~~PAD_RIGHT~" : "~PAD_LEFT~ Lower ~PAD_RIGHT~";
	Playeroption_example1[4] = GetBit(VehicleOptionsBitSet,VEHICLE_OPTION_STICK_GROUND) ? "~PAD_LEFT~ ~COL_NET_1~Stick to ground ~w~~PAD_RIGHT~" : "~PAD_LEFT~ Stick to ground ~PAD_RIGHT~";
	Playeroption_example1[5] = GetBit(VehicleOptionsBitSet,VEHICLE_OPTION_SUPER_BIKE) ? "~PAD_LEFT~ ~COL_NET_1~Super bike ~w~~PAD_RIGHT~" : "~PAD_LEFT~ Super bike ~PAD_RIGHT~";
	menu_item[MenuItem_Index].charval = Playeroption_example1[menu_item[MenuItem_Index].num_val];
}

void MD_VehOpt_Pplayer_Autolock_Option_Strings(int MenuItem_Index)
{
	//utolock: ~PAD_LEFT~ On, Unlock for friends, Off ~PAD_RIGHT~"
	char* Playeroption_example1[4]; 
	Playeroption_example1[1] = "~PAD_LEFT~ On ~PAD_RIGHT~";
	Playeroption_example1[2] = "~PAD_LEFT~ On + Unlock for friends ~PAD_RIGHT~";
	Playeroption_example1[3] = "~PAD_LEFT~ Off ~PAD_RIGHT~";
	menu_item[MenuItem_Index].charval = Playeroption_example1[menu_item[MenuItem_Index].num_val];
}

void MD_VehOpt_pPlayer_Actions_Option_Strings(int MenuItem_Index)
{
	char* Playeroption_example1[7]; 
	Playeroption_example1[1] = "~PAD_LEFT~ Duplicate ~PAD_RIGHT~";
	Playeroption_example1[2] = "~PAD_LEFT~ Freeze position ~PAD_RIGHT~";
	Playeroption_example1[3] = "~PAD_LEFT~ Un-freeze position ~PAD_RIGHT~";
	Playeroption_example1[4] = "~PAD_LEFT~ Break ~PAD_RIGHT~";
	Playeroption_example1[5] = "~PAD_LEFT~ Shuffle Seats ~PAD_RIGHT~";
	Playeroption_example1[6] = "~PAD_LEFT~ Eject from vehicle ~PAD_RIGHT~";
	menu_item[MenuItem_Index].charval = Playeroption_example1[menu_item[MenuItem_Index].num_val];
	//Misc: Flymod, Player inferno, Weapons + armour, Remove armour, Explode self, Spawn money
}

void MD_VehOpt_Pplayer_Hide_Blip_Strings(int MenuItem_Index)
{
	char* Playeroption_example1[3]; 
	Playeroption_example1[1] = GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_REMOVE_BLIP) ? "~PAD_LEFT~ ~COL_NET_1~On foot ~w~~PAD_RIGHT~" : "~PAD_LEFT~ On foot ~PAD_RIGHT~";
	Playeroption_example1[2] = GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_REMOVE_BLIP) ? "~PAD_LEFT~ ~COL_NET_1~Vehicle ~w~~PAD_RIGHT~" : "~PAD_LEFT~ Vehicle ~PAD_RIGHT~";
	menu_item[MenuItem_Index].charval = Playeroption_example1[menu_item[MenuItem_Index].num_val];
}
void MD_VehOpt_Pplayer_Speed_Strings(int MenuItem_Index){
	if (!GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_SUPER_SPEED) && !GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_TURBO_SPEED))SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_NORMAL_SPEED, true);
	char* Playeroption_example1[4]; 
	Playeroption_example1[1] =	GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_NORMAL_SPEED) ? "~PAD_LEFT~ ~COL_NET_1~Normal ~w~~PAD_RIGHT~" : "~PAD_LEFT~ Normal ~PAD_RIGHT~";
	Playeroption_example1[2] =	GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_TURBO_SPEED) ? "~PAD_LEFT~ ~COL_NET_1~Turbo ~w~~PAD_RIGHT~" : "~PAD_LEFT~ Turbo ~PAD_RIGHT~";
	Playeroption_example1[3] =	GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_SUPER_SPEED) ? "~PAD_LEFT~ ~COL_NET_1~Superspeed ~w~~PAD_RIGHT~" : "~PAD_LEFT~ Superspeed ~PAD_RIGHT~";
	menu_item[MenuItem_Index].charval = Playeroption_example1[menu_item[MenuItem_Index].num_val];

}
void MD_VehOpt_Pplayer_Trans_Strings(int MenuItem_Index){
	char* Playeroption_example1[7]; 
	Playeroption_example1[1] = "~PAD_LEFT~ Ufo ~PAD_RIGHT~";
	Playeroption_example1[2] = "~PAD_LEFT~ Tube ~PAD_RIGHT~";
	Playeroption_example1[3] = "~PAD_LEFT~ Roller ~PAD_RIGHT~";
	Playeroption_example1[4] = "~PAD_LEFT~ Fly it ~PAD_RIGHT~";
	Playeroption_example1[5] = "~PAD_LEFT~ Delete Transformer ~PAD_RIGHT~";
	Playeroption_example1[6] = "~PAD_LEFT~ Delete Vehicle ~PAD_RIGHT~";
	menu_item[MenuItem_Index].charval = Playeroption_example1[menu_item[MenuItem_Index].num_val];

}
void MD_VehOpt_Pplayer_Forces_Strings(int MenuItem_Index){
	char* Playeroption_example1[10]; 
	Playeroption_example1[1] = "~PAD_LEFT~ Up ~PAD_RIGHT~";
	Playeroption_example1[2] = "~PAD_LEFT~ Down ~PAD_RIGHT~";
	Playeroption_example1[3] = "~PAD_LEFT~ Left ~PAD_RIGHT~";
	Playeroption_example1[4] = "~PAD_LEFT~ Right ~PAD_RIGHT~";
	Playeroption_example1[5] = "~PAD_LEFT~ Forwards ~PAD_RIGHT~";
	Playeroption_example1[6] = "~PAD_LEFT~ Backwards ~PAD_RIGHT~";
	Playeroption_example1[7] = "~PAD_LEFT~ Freeze Position ~PAD_RIGHT~";
	Playeroption_example1[8] = "~PAD_LEFT~ Break ~PAD_RIGHT~";
	Playeroption_example1[9] = "~PAD_LEFT~ Fix ~PAD_RIGHT~";
	menu_item[MenuItem_Index].charval = Playeroption_example1[menu_item[MenuItem_Index].num_val];

}
void MD_VehOpt_Pplayer_Heading_Strings(int MenuItem_Index){
	char* Playeroption_example1[7]; 
	Playeroption_example1[1] = "~PAD_LEFT~ Speedboost ~PAD_RIGHT~";
	Playeroption_example1[2] = "~PAD_LEFT~ Reversed Speedboost ~PAD_RIGHT~";
	Playeroption_example1[3] = "~PAD_LEFT~ Reverse ~PAD_RIGHT~";
	Playeroption_example1[4] = "~PAD_LEFT~ Head Left ~PAD_RIGHT~";
	Playeroption_example1[5] = "~PAD_LEFT~ Head Right ~PAD_RIGHT~";
	Playeroption_example1[6] = 	GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_ROTATE) ? "~PAD_LEFT~ ~COL_NET_1~Rotation Loop ~w~~PAD_RIGHT~" : "~PAD_LEFT~ Rotation Loop ~PAD_RIGHT~";
	menu_item[MenuItem_Index].charval = Playeroption_example1[menu_item[MenuItem_Index].num_val];

}
void MD_VehOpt_Pplayer_Weapons_Strings(int MenuItem_Index){
	char* Playeroption_example1[3]; 
	Playeroption_example1[1] = MD_Weapon_Vehicle ? "~PAD_LEFT~ ~COL_NET_1~Rocket Vehicle ~PAD_RIGHT~" : "~PAD_LEFT~ Rocket Vehicle ~PAD_RIGHT~";
	Playeroption_example1[2] = Devils_Rapid_Fire_Heli ? "~PAD_LEFT~ ~COL_NET_1~Rapid Fire Heli ~PAD_RIGHT~" : "~PAD_LEFT~ Rapid Fire Heli ~PAD_RIGHT~";
//Playeroption_example1[2] = GetBit(MD_Misc_OptionsBitSet, MD_MISC_NATHANS_RAPID_FIRE_HELI) ? "~PAD_LEFT~ ~COL_NET_1~Rapid Fire Heli ~PAD_RIGHT~" : "~PAD_LEFT~ Rapid Fire Heli ~PAD_RIGHT~";		
	menu_item[MenuItem_Index].charval = Playeroption_example1[menu_item[MenuItem_Index].num_val];

}
void MD_VehOpt_Weapons_Strings(int MenuItem_Index){
	char* Playeroption_example1[4]; 
	Playeroption_example1[1] = (Vehicle_Weapon == WEAPON_RLAUNCHER) ? "~PAD_LEFT~ ~COL_NET_1~Rockets ~PAD_RIGHT~" : "~PAD_LEFT~ Rockets ~PAD_RIGHT~" ;
	Playeroption_example1[2] = (Vehicle_Weapon == WEAPON_M4) ? "~PAD_LEFT~ ~COL_NET_1~Machineguns ~PAD_RIGHT~" : "~PAD_LEFT~ Machineguns ~PAD_RIGHT~";
	Playeroption_example1[3] = (Vehicle_Weapon == WEAPON_SNIPERRIFLE) ? "~PAD_LEFT~ ~COL_NET_1~Snipers ~PAD_RIGHT~" : "~PAD_LEFT~ Snipers ~PAD_RIGHT~";	
	menu_item[MenuItem_Index].charval = Playeroption_example1[menu_item[MenuItem_Index].num_val];

}
 //AddFunction_Value("Actions", 3); 													//14  Duplicate / Freeze position /Break
void MD_VehOpt_Pplayer_Strings(int MenuItem_Index){
	if(MenuItem_Index == 1) return MD_Spy_Strings(MenuItem_Index);
	else if(MenuItem_Index == 2) return MD_Delete_Strings(MenuItem_Index);
	else if(MenuItem_Index == 3) return MD_PlayerOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
	//Jumpover 5
	//Sub Spawner 6
	//Sub Addons 7
	//Sub Upgrades 8
	else if(MenuItem_Index == 9) return MD_VehOpt_QuickSpawn_Strings(MenuItem_Index);
	else if(MenuItem_Index == 10) return MD_VehOpt_Pplayer_General_Strings(MenuItem_Index);
	else if(MenuItem_Index == 11) return MD_VehOpt_Pplayer_SpawnSettings_Strings(MenuItem_Index);
	else if(MenuItem_Index == 12) return MD_VehOpt_Pplayer_ActiveOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 13) return MD_VehOpt_pPlayer_Handling_Option_Strings(MenuItem_Index);
	else if(MenuItem_Index == 14) return MD_VehOpt_Pplayer_Speed_Strings(MenuItem_Index);
	else if(MenuItem_Index == 15) return MD_VehOpt_Pplayer_Autolock_Option_Strings(MenuItem_Index); //Autolock: ~PAD_LEFT~ On, Unlock for friends, Off ~PAD_RIGHT~"
	else if(MenuItem_Index == 16) return MD_VehOpt_pPlayer_Actions_Option_Strings(MenuItem_Index);
	else if(MenuItem_Index == 17) return MD_VehOpt_Pplayer_Forces_Strings(MenuItem_Index);
	else if(MenuItem_Index == 18) return MD_VehOpt_Pplayer_Heading_Strings(MenuItem_Index);
	else if(MenuItem_Index == 19) return MD_VehOpt_Pplayer_Trans_Strings(MenuItem_Index);
	else if(MenuItem_Index == 20) return MD_VehOpt_Weapons_Strings(MenuItem_Index);
	else if(MenuItem_Index == 21) return MD_VehOpt_Pplayer_Weapons_Strings(MenuItem_Index);
}


