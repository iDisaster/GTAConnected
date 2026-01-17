/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */  
 


void MD_Net_Unfr_Telport_Strings(int MenuItem_Index){
	char* Unfriendly[6]; 
	Unfriendly[0] = "< Not used >";//We dont have an itemline 0, please keep numbers same as itemlines
	Unfriendly[1] = "< Airport Building >";
	Unfriendly[2] = "< Barge Basement >"; 
	Unfriendly[3] = "< Subway >"; 
	Unfriendly[4] = "< Isolate Building >"; 
	Unfriendly[5] = "< Statue Cup >"; 
	menu_item[MenuItem_Index].charval = Unfriendly[menu_item[MenuItem_Index].num_val];	
} 
void MD_Net_Unfr_FC_Strings(int MenuItem_Index){
	char* Unfriendly[7]; 
	Unfriendly[0] = "< Not used >";//We dont have an itemline 0, please keep numbers same as itemlines
	Unfriendly[1] = "< Patriot >";
	Unfriendly[2] = "< Romero >"; 
	Unfriendly[3] = "< Limo TBOGT >"; 
	Unfriendly[4] = "< Shafter 1 TBOGT >"; 
	Unfriendly[5] = "< Shafter 2 TBOGT>"; 
	Unfriendly[6] = "< Mix All >";
	menu_item[MenuItem_Index].charval = Unfriendly[menu_item[MenuItem_Index].num_val];	
} 
void MD_Net_Unfr_Obj_Strings(int MenuItem_Index){
	char* Unfriendly[6]; 
	Unfriendly[0] = "< Not used >";//We dont have an itemline 0, please keep numbers same as itemlines
	Unfriendly[1] = "< V6 >";
	Unfriendly[2] = "< V7 >"; 
	Unfriendly[3] = "< V8 >"; 
	Unfriendly[4] = "< V11 >"; 
	Unfriendly[5] = "< Laglight >"; 
	menu_item[MenuItem_Index].charval = Unfriendly[menu_item[MenuItem_Index].num_val];	
} 
void MD_Net_Unfr_Lag_Strings(int MenuItem_Index){
	char* Unfriendly[4]; 
	Unfriendly[0] = "< Not used >";//We dont have an itemline 0, please keep numbers same as itemlines
	Unfriendly[1] = "< Annihilator >";
	Unfriendly[2] = "< Tugboats >"; 
	Unfriendly[3] = "< Firetrucks >";
	menu_item[MenuItem_Index].charval = Unfriendly[menu_item[MenuItem_Index].num_val];	
} 
