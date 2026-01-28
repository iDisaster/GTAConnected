/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MD TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */  

 //!Player options Specific Strings (Others can be found in >Generallu used strings)
 
void MD_PO_Protect_Strings(int MenuItem_Index){
	char* protect_strings[4];
	protect_strings[1] = GetBit(pPlayerOptionsBitSet,PLAYER_OPTION_GODMODE) ? "< ~COL_NET_1~Godmode ~w~>" : "< Godmode >";
	protect_strings[2] = GetBit(pPlayerOptionsBitSet,PLAYER_OPTION_JUGGERNAUT) ? "< ~COL_NET_1~Juggernaut ~w~>" : "< Juggernaut >";
	protect_strings[3] = GetBit(pPlayerOptionsBitSet,PLAYER_OPTION_NEVER_WANTED) ? "< ~COL_NET_1~Ignored by police ~w~>" : "< Ignored by police >";
	menu_item[MenuItem_Index].charval = protect_strings[menu_item[MenuItem_Index].num_val];
}

void MD_PO_Visibility_Strings(int MenuItem_Index){
	char* Visibility_Strings[6]; 
	Visibility_Strings[1] = !IS_CHAR_VISIBLE(pPlayer) ? "< ~COL_NET_1~Invisible ~BLIP_63~~w~>" : "< Invisible ~BLIP_63~ >";
	Visibility_Strings[2] = !GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVISIBLE) ? "< ~COL_NET_1~Invisible ~BLIP_79~ ~w~>" : "< Invisible ~BLIP_79~ >";
	Visibility_Strings[3] = !IS_CHAR_VISIBLE(pPlayer) && !GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVISIBLE) ? "< ~COL_NET_1~Invisible ~BLIP_63~ + ~BLIP_79~ ~w~>" : "< Invisible ~BLIP_63~ + ~BLIP_79~ >";
	Visibility_Strings[4] = GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_REMOVE_BLIP) ? "< ~COL_NET_1~Ninja Mode ~BLIP_63~~w~>" : "< Ninja Mode ~BLIP_63~ >";
	Visibility_Strings[5] = GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_REMOVE_BLIP) ? "< ~COL_NET_1~Ninja Mode ~BLIP_63~ + ~BLIP_79~ ~w~>" : "< Ninja Mode ~BLIP_63~ + ~BLIP_79~ >";
	menu_item[MenuItem_Index].charval = Visibility_Strings[menu_item[MenuItem_Index].num_val];
}
void MD_PO_Power_Strings(int MenuItem_Index){
	char* Playeroption_example1[5]; 
	Playeroption_example1[1] = GetBit(pPlayerOptionsBitSet,PLAYER_OPTION_SUPER_RUN) ? "< ~COL_NET_1~Super run ~w~>" : "< Super run >";
	Playeroption_example1[2] = GetBit(pPlayerOptionsBitSet,PLAYER_OPTION_SUPER_JUMP) ? "< ~COL_NET_1~Super jump ~w~>" : "< Super jump >";
	Playeroption_example1[3] = GetBit(pPlayerOptionsBitSet,PLAYER_OPTION_SUPER_PUNCH) ? "< ~COL_NET_1~Super punch ~w~>" : "< Super punch >";
	Playeroption_example1[4] = GetBit(pPlayerOptionsBitSet,PLAYER_OPTION_FORCE_FIELD) ? "< ~COL_NET_1~Force field ~w~>" : "< Force field >";
	menu_item[MenuItem_Index].charval = Playeroption_example1[menu_item[MenuItem_Index].num_val];
}

void MD_PO_NameColor_Strings(int MenuItem_Index){
	char* Playeroption_example1[19]; 
	Playeroption_example1[0] =  "< Black >";
	Playeroption_example1[1] =  "< Black ~w~>";
	Playeroption_example1[2] =  "< ~COL_NET_1~ Orange ~w~>";
	Playeroption_example1[3] =  "< ~COL_NET_2~ Purple ~w~>";
	Playeroption_example1[4] =  "< ~COL_NET_3~ Green ~w~>";
	Playeroption_example1[5] =  "< ~COL_NET_4~ Red ~w~>";
	Playeroption_example1[6] =  "< ~COL_NET_5~ Yellow ~w~>";
	Playeroption_example1[7] =  "< ~COL_NET_6~ L.Blue ~w~>";
	Playeroption_example1[8] =  "< ~COL_NET_7~ Pink ~w~>";
	Playeroption_example1[9] =  "< ~COL_NET_8~ Peach ~w~>";
	Playeroption_example1[10] =  "< ~COL_NET_9~ D.Green ~w~>";
	Playeroption_example1[11] =  "< ~COL_NET_10~ D.Blue ~w~>";
	Playeroption_example1[12] =  "< ~COL_NET_11~ L.Pink ~w~>";
	Playeroption_example1[13] =  "< ~COL_NET_12~ L.Blue ~w~>";
	Playeroption_example1[14] =  "< ~COL_NET_13~ Shit ~w~>";
	Playeroption_example1[15] =  "< ~COL_NET_14~ L.Green ~w~>";
	Playeroption_example1[16] =  "< ~COL_NET_15~ Grey ~w~>";
	Playeroption_example1[17] =  "< ~COL_NET_16~ Brown ~w~>";
	Playeroption_example1[18] =  "< RESET >";
	menu_item[MenuItem_Index].charval = Playeroption_example1[menu_item[MenuItem_Index].num_val];
}
//Show window / Set Player 1 - Set Player 2	

void MD_Player_Options_Strings(int MenuItem_Index){
	if(MenuItem_Index == 1) return MD_Spy_Strings(MenuItem_Index);
	else if(MenuItem_Index == 2) return MD_Delete_Strings(MenuItem_Index);
	else if(MenuItem_Index == 3) return MD_PlayerOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
	//Jumpover 5	
	else if(MenuItem_Index == 6) return MD_PO_Protect_Strings(MenuItem_Index);
	else if(MenuItem_Index == 7) return Player_Help_Strings(MenuItem_Index);
	else if(MenuItem_Index == 8) return MD_PO_Weapon_Option_Strings(MenuItem_Index);	
		
	else if(MenuItem_Index == 9) return MD_PO_Visibility_Strings(MenuItem_Index);
	else if(MenuItem_Index == 10) return MD_PO_Power_Strings(MenuItem_Index);
	else if(MenuItem_Index == 11) return MD_PO_Physics_Strings(MenuItem_Index);
	
	else if(MenuItem_Index == 17) return MD_PO_NameColor_Strings(MenuItem_Index);
	//else if(MenuItem_Index == 20) return MD_PO_PlayerInfo_Strings(MenuItem_Index);
}
