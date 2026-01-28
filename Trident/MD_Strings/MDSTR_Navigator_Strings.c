/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */  

 //!Navigator Specific Strings (Others can be found in >Generallu used strings)

void Unfriendly_Strings(int MenuItem_Index){
	char* String[7]; 
	String[0] = "< ERROR >";
	String[1] = Print_Kill_Feed ? "< ~COL_NET_1~Killfeed on screen ~w~>" : "< Killfeed on screen >"; 
	String[2] = "< Burn Vehicle >";
	String[3] = "< Break Vehicle >";	
	String[4] = "< Kill Player >";
	String[5] = "< Kick Player >";
	String[6] = "< Freak Out >";
	menu_item[MenuItem_Index].charval = String[menu_item[MenuItem_Index].num_val];
}

void Canonball_Strings(int MenuItem_Index){
	char* String[13]; 
	String[0] = "< ERROR >";
	String[1] = "< ANNIHILATOR >";
	String[2] = (Episode == 2) ? "< BUZZARD >" : "< MAVERICK >";
	String[3] = "< SULTANRS >";
	String[4] = "< NRG900 >";
	String[5] = "< AMBULANCE >";
	String[6] = "< FBI >";
	String[7] = "< FIRETRUCK >";
	String[8] = "< NOOSE >";
	String[9] = "< POLICE >";
	String[10] = "< POLICE2 >";
	String[11] = "< POLPATRIOT >";
	String[12] = "< PSTOCKADE >";
	menu_item[MenuItem_Index].charval = String[menu_item[MenuItem_Index].num_val];
}

void WeaponVehicle_Strings(int MenuItem_Index){
	char* String[4]; 
	String[0] = "< ERROR >";
	String[1] = MD_Weapon_Vehicle ?  "< ~COL_NET_1~Rocket Vehicle ~w~>" : "< Rocket Vehicle >";
	String[2] = Devils_Rapid_Fire_Heli ? "< ~COL_NET_1~Rapid Fire Heli ~w~>" : "< Rapid Fire Heli >";	
	//String[2] = GetBit(MD_Misc_OptionsBitSet, MD_MISC_NATHANS_RAPID_FIRE_HELI) ? "< ~COL_NET_1~Rapid Fire Heli ~w~>" : "< Rapid Fire Heli >";	
	menu_item[MenuItem_Index].charval = String[menu_item[MenuItem_Index].num_val];
}
				
void MD_Navigator_Strings(uint MenuItem_Index){
	if(MenuItem_Index == 1) return MD_Spy_Strings(MenuItem_Index);
	else if(MenuItem_Index == 2) return MD_Delete_Strings(MenuItem_Index);
	else if(MenuItem_Index == 3) return MD_PlayerOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
	else if(MenuItem_Index == 6) return Player_Help_Strings(MenuItem_Index);
	else if(MenuItem_Index == 7) return Helper_Loop_Strings(MenuItem_Index);
	else if(MenuItem_Index == 9) return Weapon_Strings(MenuItem_Index);
	else if(MenuItem_Index == 10) return Physics_Strings(MenuItem_Index);
	else if(MenuItem_Index == 11) return Unfriendly_Strings(MenuItem_Index);
	else if(MenuItem_Index == 12) return Canonball_Strings(MenuItem_Index);
	else if(MenuItem_Index == 13) return MD_VehOpt_Pplayer_Forces_Strings(MenuItem_Index);
	else if(MenuItem_Index == 14) return MD_VehOpt_Pplayer_Heading_Strings(MenuItem_Index);
	else if(MenuItem_Index == 15) return MD_VehOpt_Pplayer_Trans_Strings(MenuItem_Index);
	else if(MenuItem_Index == 16) return WeaponVehicle_Strings(MenuItem_Index);
	else if(MenuItem_Index == 17) return Help_Strings(MenuItem_Index);	
}