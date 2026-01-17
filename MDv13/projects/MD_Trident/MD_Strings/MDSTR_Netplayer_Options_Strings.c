/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */  
 


void MD_Helper_Loop_Strings(int MenuItem_Index){
	char* Helper_Loop[3]; 
	Helper_Loop[0] = "< Not Used >";//We dont have an itemline 0, please keep numbers same as itemlines
	Helper_Loop[1] = "< Enable >";
	Helper_Loop[2] = "< Disable >"; 	
	menu_item[MenuItem_Index].charval = Helper_Loop[menu_item[MenuItem_Index].num_val];	
} 

void MD_NetPlayer_Options_Strings(int MenuItem_Index){
	if(MenuItem_Index == 1) return MD_Spy_Strings(MenuItem_Index);
	else if(MenuItem_Index == 2) return MD_Delete_Strings(MenuItem_Index);
	else if(MenuItem_Index == 3) return MD_PlayerOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
	//Jumpover 5
	else if(MenuItem_Index == 7)return MD_Helper_Loop_Strings(MenuItem_Index);		
}
 
/*
	char* Invincibility_Strings[3]; 
	Invincibility_Strings[0] = "< Not used >";//We dont have an itemline 0, please keep numbers same as itemlines
	
	if(godmode)Invincibility_Strings[1] = "< Godmode (Orange)>";
	else(godmode)Invincibility_Strings[1] = "< Godmode (White)  >";
	if(armour)Invincibility_Strings[2] = "< Auto Armour (Orange) >"; 	
	Invincibility_Strings[2] = "< Auto Armour (White) >"; 
	menu_item[MenuItem_Index].charval = Invincibility_Strings[menu_item[MenuItem_Index].num_val];	
	*/