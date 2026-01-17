/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */  
 
 //Coded only one time used allover the menu
 
void MD_Delete_Strings (int MenuItem_Index){	
	char* delete_string[13]; 
	delete_string[1] = "< peds >"; 
	delete_string[2] = "< objects >"; 
	delete_string[3] = "< vehicles.all >"; 
	delete_string[4] = "< vehicles.abandoned >"; 
	delete_string[5] = "< cars.all >"; 
	delete_string[6] = "< cars.abandoned >";
	delete_string[7] = "< bikes.all >"; 
	delete_string[8] = "< bikes.abandoned >"; 
	delete_string[9] = "< boats.all >"; 
	delete_string[10] = "< boats.abandoned >"; 
	delete_string[11] = "< helis.all >"; 
	delete_string[12] = "< helis.abandoned >";
	menu_item[MenuItem_Index].charval = delete_string[menu_item[MenuItem_Index].num_val];	
}
void MD_PlayerOption_Strings (int MenuItem_Index){
	char* quick_string[11]; 
	quick_string[0] = "< ERROR >";
	quick_string[1] = "< Weapons & Armour >"; 
	quick_string[2] = "< Mute/Un-mute All >"; 
	quick_string[3] = "< Kill Self (Delay) >"; 
	quick_string[4] = "< Emergency Teleport >"; 
	quick_string[5] = "< Fix Vehicle >";
	quick_string[6] = "< Flip Vehicle >"; 
	quick_string[7] = "< Delete Vehicle >"; 
	quick_string[8] = "< Spawn Sultan RS >"; 
	quick_string[9] = "< Spawn Heli >"; 
	quick_string[10] = "< Teleport to Helipads >"; 
	menu_item[MenuItem_Index].charval = quick_string[menu_item[MenuItem_Index].num_val];	
}
void MD_Spy_Strings (int MenuItem_Index){
	char* Spy_string[4]; 
	Spy_string[0] = "< ERROR >";
	Spy_string[1] = "~w~Spectate / AutoSpectate ~COL_NET_4~OFF";  
	Spy_string[2] = "~w~Spectate / AutoSpectate ~COL_NET_3~ON"; 
	Spy_string[3] = GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_FLYMOD) ? "~COL_NET_1~Flymod" : "Flymod"; 	
	menu_item[MenuItem_Index].charval = Spy_string[menu_item[MenuItem_Index].num_val];
}
void MD_QuickTeleport_Strings(int MenuItem_Index){
	char* Q_Teleport_String[7];
	Q_Teleport_String[0] = "< ERROR >";
	Q_Teleport_String[1] = "< You to Player ~BLIP_63~ >";
	Q_Teleport_String[2] = "< You to Player ~BLIP_79~ >";					
	Q_Teleport_String[3] = "< In Player Vehicle >";	
	Q_Teleport_String[4] = "< Player to You >";	
	Q_Teleport_String[5] = "< Player to Killzone >";
	Q_Teleport_String[6] = "< Detach >";
	menu_item[MenuItem_Index].charval = Q_Teleport_String[menu_item[MenuItem_Index].num_val];
}

void NETWORK_FIRST_FOUR_STRINGS(int MenuItem_Index){	
	if(SelectedItem == 1) return MD_Spy_Strings (MenuItem_Index);
	else if(SelectedItem == 2) return MD_Delete_Strings (MenuItem_Index);
	else if(SelectedItem == 3) return MD_PlayerOption_Strings (MenuItem_Index);	
	else if(SelectedItem == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
}

