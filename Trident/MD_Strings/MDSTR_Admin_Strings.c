/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV NATHAN VII
 */  

#pragma once

void MD_QuickAdmin_Strings(int MenuItem_Index){
	char* Q_Admin_String[3];
	Q_Admin_String[0] = "< ERROR >";
	Q_Admin_String[1] = "< Scan for v13 users >";
	#ifdef Developer
	Q_Admin_String[2] = (GetBit(MD_Misc_OptionsBitSet, MD_MISC_ADMIN_SEND_IN_SILENT_MODE) ? "< ~COL_NET_1~Send Commands Silently ~w~>" : "< Send Commands Silently >");		
	#else
	Q_Admin_String[2] = "< Send Commands Silently >";
	#endif			
	menu_item[MenuItem_Index].charval = Q_Admin_String[menu_item[MenuItem_Index].num_val];
}

void Admin_Message_Strings (const int MenuItem_Index){	
	if(MenuItem_Index == 1) return MD_Spy_Strings(MenuItem_Index);
	else if(MenuItem_Index == 2) return MD_Delete_Strings(MenuItem_Index);
	else if(MenuItem_Index == 3) return MD_PlayerOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
	//Jumpover
	else if(MenuItem_Index == 6){ //Friendly messages
		char* Admin_String[9]; 
		Admin_String[0] = "< Hello >"; 
		Admin_String[1] = "< Follow me >"; 
		Admin_String[2] = "< Watch this >"; 
		Admin_String[3] = "< Come to me >"; 
		Admin_String[4] = "< Very nice of you >"; 
		Admin_String[5] = "< Thank's for creating fun >";	
		Admin_String[6] = "< I recommend Premium >";	
		Admin_String[7] = "< Visit consolecrunch for update >";
		Admin_String[8] = "< I'm Here To Test >"; 
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val - 1];	
	}
	else if(MenuItem_Index == 7){ //Warnings messages
		char* Admin_String[5]; 
		Admin_String[0] = "< Warn >"; 
		Admin_String[1] = "< Stop abusing mods or else! >"; 
		Admin_String[2] = "< Stop harassing people! >"; 
		Admin_String[3] = "< Leave this guy alone! >"; 
		Admin_String[4] = "< Final warning! >"; 
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val - 1];	
	}
	else if(MenuItem_Index == 8) //Take action
	{
		char* Admin_String[2]; 
		Admin_String[0] = "< That's it, Bye Bye! (Singleplayer) >"; 		
		Admin_String[1] = "< That's it, Bye Bye! (Find game) >"; 	
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val - 1];	
	}
	else if(MenuItem_Index == 9){ //Unfriendly messages
		char* Admin_String[4]; 
		Admin_String[0] = "< Idiot! >"; 
		Admin_String[1] = "< You are a dick! >"; 
		Admin_String[2] = "< Stop cheating! >"; 
		Admin_String[3] = "< Your mum is sexy! >"; 
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val - 1];	
	}
	else if(MenuItem_Index >= 10){ 
		char* Admin_String[11]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< Message 1 >"; 
		Admin_String[2] = "< String 2 >"; 
		Admin_String[3] = "< String 3 >"; 
		Admin_String[4] = "< String 4 >"; 
		Admin_String[5] = "< String 5 >"; 
		Admin_String[6] = "< String 6 >"; 
		Admin_String[7] = "< String 7 >"; 
		Admin_String[8] = "< String 8 >"; 
		Admin_String[9] = "< String 9 >"; 
		Admin_String[10] = "< String 10 >";			
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val];	
	}
}

void Admin_Player_Stringitems(const int MenuItem_Index){
	if(MenuItem_Index == 1) return MD_Spy_Strings(MenuItem_Index);
	else if(MenuItem_Index == 2) return MD_Delete_Strings(MenuItem_Index);
	else if(MenuItem_Index == 3) return MD_PlayerOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
	//Jumpover
	else if(MenuItem_Index >= 6 && MenuItem_Index <= 20){
		char* Admin_String[2]; 
		Admin_String[0] = "< Disabled >";  //Off
		Admin_String[1] = "< Enabled >";   //On //meh
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val - 1];	
	}	
}

void Admin_Weapon_Strings(const int MenuItem_Index){  
	if(MenuItem_Index == 1) return MD_Spy_Strings(MenuItem_Index);
	else if(MenuItem_Index == 2) return MD_Delete_Strings(MenuItem_Index);
	else if(MenuItem_Index == 3) return MD_PlayerOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
	//Jumpover
	else if(MenuItem_Index == 6){
		char* Admin_String[11]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< Weapon 1 >"; 
		Admin_String[2] = "< String 2 >"; 
		Admin_String[3] = "< String 3 >"; 
		Admin_String[4] = "< String 4 >"; 
		Admin_String[5] = "< String 5 >"; 
		Admin_String[6] = "< String 6 >"; 
		Admin_String[7] = "< String 7 >"; 
		Admin_String[8] = "< String 8 >"; 
		Admin_String[9] = "< String 9 >"; 
		Admin_String[10] = "< String 10 >";			
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val];	
	}
	else if(MenuItem_Index == 7){
		char* Admin_String[11]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< String 1 >"; 
		Admin_String[2] = "< String 2 >"; 
		Admin_String[3] = "< String 3 >"; 
		Admin_String[4] = "< String 4 >"; 
		Admin_String[5] = "< String 5 >"; 
		Admin_String[6] = "< String 6 >"; 
		Admin_String[7] = "< String 7 >"; 
		Admin_String[8] = "< String 8 >"; 
		Admin_String[9] = "< String 9 >"; 
		Admin_String[10] = "< String 10 >";			
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val];	
	}	
	else if(MenuItem_Index == 8){
		char* Admin_String[11]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< String 1 >"; 
		Admin_String[2] = "< String 2 >"; 
		Admin_String[3] = "< String 3 >"; 
		Admin_String[4] = "< String 4 >"; 
		Admin_String[5] = "< String 5 >"; 
		Admin_String[6] = "< String 6 >"; 
		Admin_String[7] = "< String 7 >"; 
		Admin_String[8] = "< String 8 >"; 
		Admin_String[9] = "< String 9 >"; 
		Admin_String[10] = "< String 10 >";			
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val];	
	}
	else if(MenuItem_Index == 9){
		char* Admin_String[11]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< String 1 >"; 
		Admin_String[2] = "< String 2 >"; 
		Admin_String[3] = "< String 3 >"; 
		Admin_String[4] = "< String 4 >"; 
		Admin_String[5] = "< String 5 >"; 
		Admin_String[6] = "< String 6 >"; 
		Admin_String[7] = "< String 7 >"; 
		Admin_String[8] = "< String 8 >"; 
		Admin_String[9] = "< String 9 >"; 
		Admin_String[10] = "< String 10 >";			
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val];	
	}		
	else if(MenuItem_Index == 10){
		char* Admin_String[11]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< String 1 >"; 
		Admin_String[2] = "< String 2 >"; 
		Admin_String[3] = "< String 3 >"; 
		Admin_String[4] = "< String 4 >"; 
		Admin_String[5] = "< String 5 >"; 
		Admin_String[6] = "< String 6 >"; 
		Admin_String[7] = "< String 7 >"; 
		Admin_String[8] = "< String 8 >"; 
		Admin_String[9] = "< String 9 >"; 
		Admin_String[10] = "< String 10 >";			
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val];	
	}		
	else if(MenuItem_Index == 11){
		char* Admin_String[11]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< String 1 >"; 
		Admin_String[2] = "< String 2 >"; 
		Admin_String[3] = "< String 3 >"; 
		Admin_String[4] = "< String 4 >"; 
		Admin_String[5] = "< String 5 >"; 
		Admin_String[6] = "< String 6 >"; 
		Admin_String[7] = "< String 7 >"; 
		Admin_String[8] = "< String 8 >"; 
		Admin_String[9] = "< String 9 >"; 
		Admin_String[10] = "< String 10 >";			
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val];	
	}		
	else if(MenuItem_Index == 12){
		char* Admin_String[11]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< String 1 >"; 
		Admin_String[2] = "< String 2 >"; 
		Admin_String[3] = "< String 3 >"; 
		Admin_String[4] = "< String 4 >"; 
		Admin_String[5] = "< String 5 >"; 
		Admin_String[6] = "< String 6 >"; 
		Admin_String[7] = "< String 7 >"; 
		Admin_String[8] = "< String 8 >"; 
		Admin_String[9] = "< String 9 >"; 
		Admin_String[10] = "< String 10 >";			
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val];	
	}		
	else if(MenuItem_Index == 13){
		char* Admin_String[11]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< String 1 >"; 
		Admin_String[2] = "< String 2 >"; 
		Admin_String[3] = "< String 3 >"; 
		Admin_String[4] = "< String 4 >"; 
		Admin_String[5] = "< String 5 >"; 
		Admin_String[6] = "< String 6 >"; 
		Admin_String[7] = "< String 7 >"; 
		Admin_String[8] = "< String 8 >"; 
		Admin_String[9] = "< String 9 >"; 
		Admin_String[10] = "< String 10 >";			
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val];	
	}		
	else if(MenuItem_Index == 14){
		char* Admin_String[11]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< String 1 >"; 
		Admin_String[2] = "< String 2 >"; 
		Admin_String[3] = "< String 3 >"; 
		Admin_String[4] = "< String 4 >"; 
		Admin_String[5] = "< String 5 >"; 
		Admin_String[6] = "< String 6 >"; 
		Admin_String[7] = "< String 7 >"; 
		Admin_String[8] = "< String 8 >"; 
		Admin_String[9] = "< String 9 >"; 
		Admin_String[10] = "< String 10 >";			
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val];	
	}		
	else if(MenuItem_Index == 15){
		char* Admin_String[11]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< String 1 >"; 
		Admin_String[2] = "< String 2 >"; 
		Admin_String[3] = "< String 3 >"; 
		Admin_String[4] = "< String 4 >"; 
		Admin_String[5] = "< String 5 >"; 
		Admin_String[6] = "< String 6 >"; 
		Admin_String[7] = "< String 7 >"; 
		Admin_String[8] = "< String 8 >"; 
		Admin_String[9] = "< String 9 >"; 
		Admin_String[10] = "< String 10 >";			
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val];	
	}		
	else if(MenuItem_Index == 16){
		char* Admin_String[11]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< String 1 >"; 
		Admin_String[2] = "< String 2 >"; 
		Admin_String[3] = "< String 3 >"; 
		Admin_String[4] = "< String 4 >"; 
		Admin_String[5] = "< String 5 >"; 
		Admin_String[6] = "< String 6 >"; 
		Admin_String[7] = "< String 7 >"; 
		Admin_String[8] = "< String 8 >"; 
		Admin_String[9] = "< String 9 >"; 
		Admin_String[10] = "< String 10 >";			
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val];	
	}		
	else if(MenuItem_Index == 17){
		char* Admin_String[11]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< String 1 >"; 
		Admin_String[2] = "< String 2 >"; 
		Admin_String[3] = "< String 3 >"; 
		Admin_String[4] = "< String 4 >"; 
		Admin_String[5] = "< String 5 >"; 
		Admin_String[6] = "< String 6 >"; 
		Admin_String[7] = "< String 7 >"; 
		Admin_String[8] = "< String 8 >"; 
		Admin_String[9] = "< String 9 >"; 
		Admin_String[10] = "< String 10 >";			
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val];	
	}
	else if(MenuItem_Index == 18){
		char* Admin_String[11]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< String 1 >"; 
		Admin_String[2] = "< String 2 >"; 
		Admin_String[3] = "< String 3 >"; 
		Admin_String[4] = "< String 4 >"; 
		Admin_String[5] = "< String 5 >"; 
		Admin_String[6] = "< String 6 >"; 
		Admin_String[7] = "< String 7 >"; 
		Admin_String[8] = "< String 8 >"; 
		Admin_String[9] = "< String 9 >"; 
		Admin_String[10] = "< String 10 >";			
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val];	
	}		
	else if(MenuItem_Index == 19){
		char* Admin_String[11]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< String 1 >"; 
		Admin_String[2] = "< String 2 >"; 
		Admin_String[3] = "< String 3 >"; 
		Admin_String[4] = "< String 4 >"; 
		Admin_String[5] = "< String 5 >"; 
		Admin_String[6] = "< String 6 >"; 
		Admin_String[7] = "< String 7 >"; 
		Admin_String[8] = "< String 8 >"; 
		Admin_String[9] = "< String 9 >"; 
		Admin_String[10] = "< String 10 >";			
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val];	
	}		
	else if(MenuItem_Index == 20){
		char* Admin_String[11]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< String 1 >"; 
		Admin_String[2] = "< String 2 >"; 
		Admin_String[3] = "< String 3 >"; 
		Admin_String[4] = "< String 4 >"; 
		Admin_String[5] = "< String 5 >"; 
		Admin_String[6] = "< String 6 >"; 
		Admin_String[7] = "< String 7 >"; 
		Admin_String[8] = "< String 8 >"; 
		Admin_String[9] = "< String 9 >"; 
		Admin_String[10] = "< String 10 >";			
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val];	
	}	
}

void Admin_Vehicle_Strings(const int MenuItem_Index){
	if(MenuItem_Index == 1) return MD_Spy_Strings(MenuItem_Index);
	else if(MenuItem_Index == 2) return MD_Delete_Strings(MenuItem_Index);
	else if(MenuItem_Index == 3) return MD_PlayerOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
	//Jumpover
	else if(MenuItem_Index >= 6 && MenuItem_Index <= 15){
		char* Admin_String[2]; 
		Admin_String[0] = "< Disabled >"; 
		Admin_String[1] = "< Enabled >"; 		
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val - 1];	
	}			
	else if(MenuItem_Index >= 16){
		char* Admin_String[11]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< String 1 >"; 
		Admin_String[2] = "< String 2 >"; 
		Admin_String[3] = "< String 3 >"; 
		Admin_String[4] = "< String 4 >"; 
		Admin_String[5] = "< String 5 >"; 
		Admin_String[6] = "< String 6 >"; 
		Admin_String[7] = "< String 7 >"; 
		Admin_String[8] = "< String 8 >"; 
		Admin_String[9] = "< String 9 >"; 
		Admin_String[10] = "< String 10 >";			
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val];	
	}		
}

void Admin_Teleport_Strings(const int MenuItem_Index){
	if(MenuItem_Index == 1) return MD_Spy_Strings(MenuItem_Index);
	else if(MenuItem_Index == 2) return MD_Delete_Strings(MenuItem_Index);
	else if(MenuItem_Index == 3) return MD_PlayerOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
	//Jumpover
	else if(MenuItem_Index >= 6){
		char* Admin_String[11]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< Teleport 1 >"; 
		Admin_String[2] = "< String 2 >"; 
		Admin_String[3] = "< String 3 >"; 
		Admin_String[4] = "< String 4 >"; 
		Admin_String[5] = "< String 5 >"; 
		Admin_String[6] = "< String 6 >"; 
		Admin_String[7] = "< String 7 >"; 
		Admin_String[8] = "< String 8 >"; 
		Admin_String[9] = "< String 9 >"; 
		Admin_String[10] = "< String 10 >";			
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val];	
	}

}

void Admin_Weather_Strings(const int MenuItem_Index){ 
	if(MenuItem_Index == 1) return MD_Spy_Strings(MenuItem_Index);
	else if(MenuItem_Index == 2) return MD_Delete_Strings(MenuItem_Index);
	else if(MenuItem_Index == 3) return MD_PlayerOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
	//Jumpover
	else if(MenuItem_Index == 6){
		char* Admin_String[8]; 
		Admin_String[0] = "< 09:00 >"; 
		Admin_String[1] = "< 12:00 >"; 
		Admin_String[2] = "< 15:00 >"; 
		Admin_String[3] = "< 18:00 >"; 
		Admin_String[4] = "< 21:00 >"; 
		Admin_String[5] = "< 00:00 >"; 
		Admin_String[6] = "< 03:00 >"; 
		Admin_String[7] = "< 06:00 >"; 		
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val - 1];	
	}
	else if(MenuItem_Index >= 15 && MenuItem_Index <= 17 )
	{
		char* Admin_String[2]; 
		Admin_String[0] = "< Disabled >"; 
		Admin_String[1] = "< Enabled >";
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val - 1];	
	}
	else if(MenuItem_Index >= 18){
		char* Admin_String[11]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< Weather 1 >"; 
		Admin_String[2] = "< String 2 >"; 
		Admin_String[3] = "< String 3 >"; 
		Admin_String[4] = "< String 4 >"; 
		Admin_String[5] = "< String 5 >"; 
		Admin_String[6] = "< String 6 >"; 
		Admin_String[7] = "< String 7 >"; 
		Admin_String[8] = "< String 8 >"; 
		Admin_String[9] = "< String 9 >"; 
		Admin_String[10] = "< String 10 >";			
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val];	
	}
}

void Admin_Model_Strings(const int MenuItem_Index){ 
	if(MenuItem_Index == 1) return MD_Spy_Strings(MenuItem_Index);
	else if(MenuItem_Index == 2) return MD_Delete_Strings(MenuItem_Index);
	else if(MenuItem_Index == 3) return MD_PlayerOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
	//Jumpover
	//Function
	else if(MenuItem_Index == 7) return MD_Ped_Model_Uniform_Strings(MenuItem_Index);
	else if(MenuItem_Index == 8) return MD_Ped_Model_Gang_Strings(MenuItem_Index);
	else if(MenuItem_Index == 9) return MD_Ped_Model_Stripper_Strings(MenuItem_Index);
	else if(MenuItem_Index == 10) return MD_Ped_Model_Medical_Strings(MenuItem_Index);
	else if(MenuItem_Index == 11) return MD_Ped_Model_Business_Strings(MenuItem_Index);
	else if(MenuItem_Index == 12) return MD_Ped_Model_Cluck_Strings(MenuItem_Index);
	else if(MenuItem_Index == 13) return MD_Ped_Model_Funny_Strings(MenuItem_Index);
	else if(MenuItem_Index == 14) return MD_Ped_Model_SingleP_Strings(MenuItem_Index);
}

void Admin_Animations_Strings(int MenuItem_Index){ 
	if(MenuItem_Index == 1) return MD_Spy_Strings(MenuItem_Index);
	else if(MenuItem_Index == 2) return MD_Delete_Strings(MenuItem_Index);
	else if(MenuItem_Index == 3) return MD_PlayerOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
	//Jumpover
	else if(MenuItem_Index == 6) return MD_Stride_Strings(MenuItem_Index);
	else if(MenuItem_Index == 7) return MD_Anim_Dance_Strings(MenuItem_Index);
	else if(MenuItem_Index == 8) return MD_Anim_Gesture_Strings(MenuItem_Index);
	else if(MenuItem_Index == 9) return MD_Anim_Tool_Strings(MenuItem_Index);
	else if(MenuItem_Index == 10) return MD_Anim_Heli_Strings(MenuItem_Index);
	else if(MenuItem_Index == 11) return MD_Anim_Bike_Strings(MenuItem_Index);
	else if(MenuItem_Index == 12) return MD_Anim_Sliding_Strings(MenuItem_Index);
	else if(MenuItem_Index == 13) return MD_Anim_Swim_Strings(MenuItem_Index);
	else if(MenuItem_Index == 14) return MD_Anim_Sit_Strings(MenuItem_Index);
	else if(MenuItem_Index == 15) return MD_Anim_Pause_Strings(MenuItem_Index);
	else if(MenuItem_Index == 16) return MD_Anim_Sex_Strings(MenuItem_Index);
}

void Admin_Attachments_Strings(int MenuItem_Index){
	if(MenuItem_Index == 1) return MD_Spy_Strings(MenuItem_Index);
	else if(MenuItem_Index == 2) return MD_Delete_Strings(MenuItem_Index);
	else if(MenuItem_Index == 3) return MD_PlayerOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
	//Jumpover
	else if(MenuItem_Index >= 6){
		char* Admin_String[11]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< Attach 1 >"; 
		Admin_String[2] = "< String 2 >"; 
		Admin_String[3] = "< String 3 >"; 
		Admin_String[4] = "< String 4 >"; 
		Admin_String[5] = "< String 5 >"; 
		Admin_String[6] = "< String 6 >"; 
		Admin_String[7] = "< String 7 >"; 
		Admin_String[8] = "< String 8 >"; 
		Admin_String[9] = "< String 9 >"; 
		Admin_String[10] = "< String 10 >";			
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val];	
	}
}

void Admin_Troll_Strings(int MenuItem_Index){
	if(MenuItem_Index == 1) return MD_Spy_Strings(MenuItem_Index);
	else if(MenuItem_Index == 2) return MD_Delete_Strings(MenuItem_Index);
	else if(MenuItem_Index == 3) return MD_PlayerOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
	//Jumpover
	else if(MenuItem_Index >= 6){
		char* Admin_String[11]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< Troll 1 >"; 
		Admin_String[2] = "< String 2 >"; 
		Admin_String[3] = "< String 3 >"; 
		Admin_String[4] = "< String 4 >"; 
		Admin_String[5] = "< String 5 >"; 
		Admin_String[6] = "< String 6 >"; 
		Admin_String[7] = "< String 7 >"; 
		Admin_String[8] = "< String 8 >"; 
		Admin_String[9] = "< String 9 >"; 
		Admin_String[10] = "< String 10 >";			
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val];	
	} 
}

void Admin_Menu_Strings(int MenuItem_Index){ 
	if(MenuItem_Index == 1) return MD_Spy_Strings(MenuItem_Index);
	else if(MenuItem_Index == 2) return MD_Delete_Strings(MenuItem_Index);
	else if(MenuItem_Index == 3) return MD_PlayerOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
	//Jumpover
	else if(MenuItem_Index >= 6){
		char* Admin_String[11]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< String 1 >"; 
		Admin_String[2] = "< String 2 >"; 
		Admin_String[3] = "< String 3 >"; 
		Admin_String[4] = "< String 4 >"; 
		Admin_String[5] = "< String 5 >"; 
		Admin_String[6] = "< String 6 >"; 
		Admin_String[7] = "< String 7 >"; 
		Admin_String[8] = "< String 8 >"; 
		Admin_String[9] = "< String 9 >"; 
		Admin_String[10] = "< String 10 >";			
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val];	
	}
}

void Admin_Freeze_Strings(int MenuItem_Index){  
	if(MenuItem_Index == 1) return MD_Spy_Strings(MenuItem_Index);
	else if(MenuItem_Index == 2) return MD_Delete_Strings(MenuItem_Index);
	else if(MenuItem_Index == 3) return MD_PlayerOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
	//Jumpover
	else if(MenuItem_Index >= 6){
		char* Admin_String[11]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< Freeze 1 >"; 
		Admin_String[2] = "< String 2 >"; 
		Admin_String[3] = "< String 3 >"; 
		Admin_String[4] = "< String 4 >"; 
		Admin_String[5] = "< String 5 >"; 
		Admin_String[6] = "< String 6 >"; 
		Admin_String[7] = "< String 7 >"; 
		Admin_String[8] = "< String 8 >"; 
		Admin_String[9] = "< String 9 >"; 
		Admin_String[10] = "< String 10 >";			
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val];	
	}
}

void Admin_Temp_Strings(int MenuItem_Index){ 
	if(MenuItem_Index == 1) return MD_Spy_Strings(MenuItem_Index);
	else if(MenuItem_Index == 2) return MD_Delete_Strings(MenuItem_Index);
	else if(MenuItem_Index == 3) return MD_PlayerOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
	//Jumpover
	else if(MenuItem_Index >= 6){
		char* Admin_String[11]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< Temp 1 >"; 
		Admin_String[2] = "< String 2 >"; 
		Admin_String[3] = "< String 3 >"; 
		Admin_String[4] = "< String 4 >"; 
		Admin_String[5] = "< String 5 >"; 
		Admin_String[6] = "< String 6 >"; 
		Admin_String[7] = "< String 7 >"; 
		Admin_String[8] = "< String 8 >"; 
		Admin_String[9] = "< String 9 >"; 
		Admin_String[10] = "< String 10 >";			
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val];	
	}
}

