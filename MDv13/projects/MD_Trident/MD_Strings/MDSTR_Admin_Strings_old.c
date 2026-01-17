/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV NATHAN VII
 */  

#pragma once

void Admin_Message_Strings (const int MenuItem_Index){	
	if(MenuItem_Index == 1) return MD_Spy_Strings(MenuItem_Index);
	else if(MenuItem_Index == 2) return MD_Delete_Strings(MenuItem_Index);
	else if(MenuItem_Index == 3) return MD_PlayerOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
	//Jumpover
	else if(MenuItem_Index == 6){ //Friendly messages
		char* Admin_String[8]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< Hello >"; 
		Admin_String[2] = "< Follow me >"; 
		Admin_String[3] = "< Watch this >"; 
		Admin_String[4] = "< Come to me >"; 
		Admin_String[5] = "< Very nice of you >"; 
		Admin_String[6] = "< Thank's for creating fun >";		
		Admin_String[7] = "< I'm Here To Test >"; 
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val];	
	}
	else if(MenuItem_Index == 7){ //Warnings messages
		char* Admin_String[6]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< Warn >"; 
		Admin_String[2] = "< Stop abusing mods or else! >"; 
		Admin_String[3] = "< Stop harassing people! >"; 
		Admin_String[4] = "< Leave this guy alone! >"; 
		Admin_String[5] = "< Final warning! >"; 
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val];	
	}
	else if(MenuItem_Index == 8) //Take action
	{
		char* Admin_String[3]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< That's it, Bye Bye! (Singleplayer) >"; 		
		Admin_String[2] = "< That's it, Bye Bye! (Find game) >"; 	
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val];	
	}
	else if(MenuItem_Index == 9){ //Unfriendly messages
		char* Admin_String[5]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< Idiot! >"; 
		Admin_String[2] = "< You are a dick! >"; 
		Admin_String[3] = "< Stop cheating! >"; 
		Admin_String[4] = "< Your mum is sexy! >"; 
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val];	
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

void Admin_Player_Stringitems(int MenuItem_Index){
	if(MenuItem_Index == 1) return MD_Spy_Strings(MenuItem_Index);
	else if(MenuItem_Index == 2) return MD_Delete_Strings(MenuItem_Index);
	else if(MenuItem_Index == 3) return MD_PlayerOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
	//Jumpover
	else if(MenuItem_Index >= 6 && MenuItem_Index <= 20){
		char* Admin_String[3]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< Disabled >";  //Off
		Admin_String[2] = "< Enabled >";   //On //meh
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val];	
	}	
}

void Admin_Weapon_Strings(int MenuItem_Index){  
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

void Admin_Vehicle_Strings(int MenuItem_Index){
	if(MenuItem_Index == 1) return MD_Spy_Strings(MenuItem_Index);
	else if(MenuItem_Index == 2) return MD_Delete_Strings(MenuItem_Index);
	else if(MenuItem_Index == 3) return MD_PlayerOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
	//Jumpover
	else if(MenuItem_Index >= 6 && MenuItem_Index <= 15){
		char* Admin_String[3]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< Disabled >"; 
		Admin_String[2] = "< Enabled >"; 		
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val];	
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

void Admin_Teleport_Strings(int MenuItem_Index){
	if(MenuItem_Index == 1) return MD_Spy_Strings(MenuItem_Index);
	else if(MenuItem_Index == 2) return MD_Delete_Strings(MenuItem_Index);
	else if(MenuItem_Index == 3) return MD_PlayerOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
	//Jumpover
	else if(MenuItem_Index == 6){
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

void Admin_Weather_Strings(int MenuItem_Index){ 
	if(MenuItem_Index == 1) return MD_Spy_Strings(MenuItem_Index);
	else if(MenuItem_Index == 2) return MD_Delete_Strings(MenuItem_Index);
	else if(MenuItem_Index == 3) return MD_PlayerOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
	//Jumpover
	else if(MenuItem_Index == 6){
		char* Admin_String[9]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< 09:00 >"; 
		Admin_String[2] = "< 12:00 >"; 
		Admin_String[3] = "< 15:00 >"; 
		Admin_String[4] = "< 18:00 >"; 
		Admin_String[5] = "< 21:00 >"; 
		Admin_String[6] = "< 00:00 >"; 
		Admin_String[7] = "< 03:00 >"; 
		Admin_String[8] = "< 06:00 >"; 		
		menu_item[MenuItem_Index].charval = Admin_String[menu_item[MenuItem_Index].num_val];	
	}
	else if(MenuItem_Index >= 7){
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

void Admin_Model_Strings(int MenuItem_Index){ 
	if(MenuItem_Index == 1) return MD_Spy_Strings(MenuItem_Index);
	else if(MenuItem_Index == 2) return MD_Delete_Strings(MenuItem_Index);
	else if(MenuItem_Index == 3) return MD_PlayerOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
	//Jumpover
	else if(MenuItem_Index >= 6){
		char* Admin_String[11]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< Model 1 >"; 
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

void Admin_Animations_Strings(int MenuItem_Index){ 
	if(MenuItem_Index == 1) return MD_Spy_Strings(MenuItem_Index);
	else if(MenuItem_Index == 2) return MD_Delete_Strings(MenuItem_Index);
	else if(MenuItem_Index == 3) return MD_PlayerOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
	//Jumpover
	else if(MenuItem_Index >= 6){
		char* Admin_String[11]; 
		Admin_String[0] = "< ERROR >";
		Admin_String[1] = "< Anim 1 >"; 
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

