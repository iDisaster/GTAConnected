/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */  
 
/**Specific Army Strings **/

void MD_Army_Weapon_Strings(int MenuItem_Index){
	char* weapon_string[13]; 
	weapon_string[0] = "< Not used >";//We dont have an itemline 0, please keep numbers same as itemlines
	weapon_string[1] = "< Desert Eagle >";
	weapon_string[2] = "< pump shotgun >"; 
	weapon_string[3] = "< MP5 >"; 
	weapon_string[4] = "< M4 >"; 
	weapon_string[5] = "< RPG >"; 
	weapon_string[6] = "< Sniper >"; 
	weapon_string[7] = "< grenade >"; 
	weapon_string[8] = "< molotov >"; 
	weapon_string[9] = "< baseball bat >"; 
	weapon_string[10] = "< knife >"; 
	weapon_string[11] = "< poolcue >";
	weapon_string[12] = "< ~COL_NET_4~Remove >";
	menu_item[MenuItem_Index].charval = weapon_string[menu_item[MenuItem_Index].num_val];	
} 

void MD_Army_Formation_Strings(int MenuItem_Index){
	char* Formation_String[6]; 
	Formation_String[0] = "< Not used >";//We dont have an itemline 0, please keep numbers same as itemlines
	Formation_String[1] = "< Around / Facing u >";
	Formation_String[2] = "< Around / Facing same >"; 
	Formation_String[3] = "< Lined Up  >"; 
	Formation_String[4] = "< Behind u >";
	Formation_String[5] = "< Behind u 2 >";	
	menu_item[MenuItem_Index].charval = Formation_String[menu_item[MenuItem_Index].num_val];
}

void MD_Army_Spacing_Strings(int MenuItem_Index){
	char* Spacing_String[5]; 
	Spacing_String[0] = "< Not used >";//We dont have an itemline 0, please keep numbers same as itemlines
	Spacing_String[1] = "< Close >";
	Spacing_String[2] = "< Medium >";
	Spacing_String[3] = "< Medium +  >"; 
	Spacing_String[4] = "< Far >"; 
	menu_item[MenuItem_Index].charval = Spacing_String[menu_item[MenuItem_Index].num_val];
}

void MD_Army_Action_Strings(int MenuItem_Index){
	char* Action_String[7]; 
	Action_String[0] = "< Not used >";//We dont have an itemline 0, please keep numbers same as itemlines
	Action_String[1] = "< Arm Your Vehicle >";
	Action_String[2] = "< Give Guards Helmet >";
	Action_String[3] = "< Take Guards Helmet >";
	Action_String[4] = "< Give Guards Godmode >";
	Action_String[5] = "< Take Guards Godmode  >";
	Action_String[6] = "< Clear Tasks  >"; 
	menu_item[MenuItem_Index].charval = Action_String[menu_item[MenuItem_Index].num_val];
}

void MD_Army_Attack_Strings(int MenuItem_Index){
	char* Attack_String[6]; 
	Attack_String[0] = "< Not used >"; //We dont have an itemline 0, please keep numbers same as itemlines
	Attack_String[1] = "< Attack Now >";
	Attack_String[2] = "< Attack Teleported >";
	Attack_String[3] = "< Delete 1 Guard  >"; 
	Attack_String[4] = "< Delete All Guards  >"; 
	Attack_String[5] = "< Clear Tasks  >"; 
	//Attack_String[6] = "< Fire Guard Weapon  >";
	menu_item[MenuItem_Index].charval = Attack_String[menu_item[MenuItem_Index].num_val];
}
 
void MD_Army_Strings(int MenuItem_Index){
	if(MenuItem_Index == 1) return MD_Spy_Strings(MenuItem_Index);
	else if(MenuItem_Index == 2) return MD_Delete_Strings(MenuItem_Index);
	else if(MenuItem_Index == 3) return MD_PlayerOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
	//Jumpover 5
	else if(MenuItem_Index == 6)return MD_Army_Weapon_Strings(MenuItem_Index);
	else if(MenuItem_Index == 7)return MD_Army_Formation_Strings(MenuItem_Index);
	else if(MenuItem_Index == 8)return MD_Army_Spacing_Strings(MenuItem_Index);
	else if(MenuItem_Index == 9)return MD_Army_Action_Strings(MenuItem_Index);
	else if(MenuItem_Index == 10)return MD_Army_Attack_Strings(MenuItem_Index);
	//Sub Attachments 11
	//Sub Animations 12 
	//Jumpover 13
	else if(MenuItem_Index == 14)return MD_Ped_Model_Uniform_Strings(MenuItem_Index);
	else if(MenuItem_Index == 15)return MD_Ped_Model_Gang_Strings(MenuItem_Index);
	else if(MenuItem_Index == 16)return MD_Ped_Model_Stripper_Strings(MenuItem_Index);
	else if(MenuItem_Index == 17)return MD_Ped_Model_Medical_Strings(MenuItem_Index);	
	else if(MenuItem_Index == 18)return MD_Ped_Model_Business_Strings(MenuItem_Index);
	else if(MenuItem_Index == 19)return MD_Ped_Model_Cluck_Strings(MenuItem_Index);
	else if(MenuItem_Index == 20)return MD_Ped_Model_Funny_Strings(MenuItem_Index);
	else if(MenuItem_Index == 21)return MD_Ped_Model_SingleP_Strings(MenuItem_Index);	
	
}
 
