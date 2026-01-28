/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */  

void Rotation_Speed_Strings(int MenuItem_Index){
	char* Veh_Rot_String[6]; 
	Veh_Rot_String[0] = "< ERROR >";
	Veh_Rot_String[1] = "< Slow >"; 
	Veh_Rot_String[2] = "< Medium >";
	Veh_Rot_String[3] = "< Fast >";	
	Veh_Rot_String[4] = "< Superfast >";
	Veh_Rot_String[5] = "< ~COL_NET_4~Stop ~w~>";		
	menu_item[MenuItem_Index].charval = Veh_Rot_String[menu_item[MenuItem_Index].num_val];
}
void Rotation_Distance_Strings(int MenuItem_Index){
	char* Veh_Rot_String[5]; 
	Veh_Rot_String[0] = "< ERROR >";
	Veh_Rot_String[1] = "< Close >"; 
	Veh_Rot_String[2] = "< Medium >";
	Veh_Rot_String[3] = "< Far >";
	Veh_Rot_String[4] = "< Centered >";
	menu_item[MenuItem_Index].charval = Veh_Rot_String[menu_item[MenuItem_Index].num_val];
}	
void Rotation_Position_Strings(int MenuItem_Index){
	char* Veh_Rot_String[4]; 
	Veh_Rot_String[0] = "< ERROR >";
	Veh_Rot_String[1] = "< 90 DEGREES >"; 
	Veh_Rot_String[2] = "< 180 DEGREES >";
	Veh_Rot_String[3] = "< 360 DEGREES >";		
	menu_item[MenuItem_Index].charval = Veh_Rot_String[menu_item[MenuItem_Index].num_val];
}
void Rotation_Height_Strings(int MenuItem_Index){
	char* Uniform_string[8];
	Uniform_string[0] = "< ERROR >";
	Uniform_string[1] = "< -1.5 >"; 
	Uniform_string[2] = "< -1.0 >"; 
	Uniform_string[3] = "< -0.5 >"; 
	Uniform_string[4] = "< DEFAULT >";
	Uniform_string[5] = "< 0.5 >"; 
	Uniform_string[6] = "< 1.0 >";
	Uniform_string[7] = "< 2.0 >";		
	menu_item[MenuItem_Index].charval = Uniform_string[menu_item[MenuItem_Index].num_val];
}	
void Rotation_Vehicle_Strings(int MenuItem_Index){
	char* Veh_Rot_String[11]; 
	Veh_Rot_String[0] = "< ERROR >";
	Veh_Rot_String[1] = "< Sultan >"; 
	Veh_Rot_String[2] = "< Sultan RS >";		
	Veh_Rot_String[3] = "< Turismo >";
	Veh_Rot_String[4] = "< COMET >"; 
	Veh_Rot_String[5] = "< INFERNUS >";	
	Veh_Rot_String[6] = "< SENTINEL >";
	Veh_Rot_String[7] = "< TRASH >";	
	Veh_Rot_String[8] = "< STRETCH >";		
	Veh_Rot_String[9] = "< VOODOO >";
	Veh_Rot_String[10] = "< ~COL_NET_4~Remove ~w~>";
	menu_item[MenuItem_Index].charval = Veh_Rot_String[menu_item[MenuItem_Index].num_val];
}	
void Rotation_Emergency_Strings(int MenuItem_Index){
	char* Veh_Rot_String[10]; 
	Veh_Rot_String[0] = "< ERROR >";
	Veh_Rot_String[1] = "< Ambulance >"; 
	Veh_Rot_String[2] = "< F.B.I >";		
	Veh_Rot_String[3] = "< Noose Cruiser >";
	Veh_Rot_String[4] = "< Police Cruiser >"; 
	Veh_Rot_String[5] = "< Police Patrol >";	
	Veh_Rot_String[6] = "< Noose Patriot >";
	Veh_Rot_String[7] = "< Police Stockade >";	
	Veh_Rot_String[8] = "< Fire Trucks >";		
	Veh_Rot_String[9] = "< ~COL_NET_4~Remove ~w~>";
	menu_item[MenuItem_Index].charval = Veh_Rot_String[menu_item[MenuItem_Index].num_val];
}	
void Rotation_Truck_Strings(int MenuItem_Index){
	char* Veh_Rot_String[11]; 
	Veh_Rot_String[0] = "< ERROR >";
	Veh_Rot_String[1] = "< BIFF >"; 
	Veh_Rot_String[2] = "< BOXVILLE >";		
	Veh_Rot_String[3] = "< FLATBED >";
	Veh_Rot_String[4] = "< MRTASTY >"; 
	Veh_Rot_String[5] = "< PHANTOM >";	
	Veh_Rot_String[6] = "< RIPLEY >";
	Veh_Rot_String[7] = "< STEED >";	
	Veh_Rot_String[8] = "< FEROCI2 >";		
	Veh_Rot_String[9] = "< FORKLIFT >";
	Veh_Rot_String[10] = "< ~COL_NET_4~Remove ~w~>";
	menu_item[MenuItem_Index].charval = Veh_Rot_String[menu_item[MenuItem_Index].num_val];
}	
void Rotation_Bike_Strings(int MenuItem_Index){
	char* Veh_Rot_String[9]; 
	Veh_Rot_String[0] = "< ERROR >";
	Veh_Rot_String[1] = "< BOBBER >"; 
	Veh_Rot_String[2] = "< FAGGIO >";		
	Veh_Rot_String[3] = "< HELLFURY >";
	Veh_Rot_String[4] = "< NRG900 >"; 
	Veh_Rot_String[5] = "< PCJ >";	
	Veh_Rot_String[6] = "< SANCHEZ >";
	Veh_Rot_String[7] = "< ZOMBIEB >";	
	Veh_Rot_String[8] = "< ~COL_NET_4~Remove ~w~>";
	menu_item[MenuItem_Index].charval = Veh_Rot_String[menu_item[MenuItem_Index].num_val];
}	
void Rotation_Boat_Strings(int MenuItem_Index){
	char* Veh_Rot_String[10]; 
	Veh_Rot_String[0] = "< ERROR >";
	Veh_Rot_String[1] = "< DINGHY >"; 
	Veh_Rot_String[2] = "< JETMAX >";		
	Veh_Rot_String[3] = "< MARQUIS >";
	Veh_Rot_String[4] = "< PREDATOR >"; 
	Veh_Rot_String[5] = "< REEFER >";	
	Veh_Rot_String[6] = "< SQUALO >";
	Veh_Rot_String[7] = "< TROPIC >";	
	Veh_Rot_String[8] = "< TUGA >";		
	Veh_Rot_String[9] = "< ~COL_NET_4~Remove ~w~>";
	menu_item[MenuItem_Index].charval = Veh_Rot_String[menu_item[MenuItem_Index].num_val];
}	
void Rotation_Heli_Strings(int MenuItem_Index){
	char* Veh_Rot_String[6]; 
	Veh_Rot_String[0] = "< ERROR >";
	Veh_Rot_String[1] = "< ANNIHILATOR >"; 
	Veh_Rot_String[2] = "< MAVERICK >";		
	Veh_Rot_String[3] = "< POLMAV >";
	Veh_Rot_String[4] = "< TOURMAV >"; 
	Veh_Rot_String[5] = "< ~COL_NET_4~Remove ~w~>";
	menu_item[MenuItem_Index].charval = Veh_Rot_String[menu_item[MenuItem_Index].num_val];
}	
void Rotation_Ped_Strings(int MenuItem_Index){
	char* Ped_Rot_String[5]; 
	Ped_Rot_String[0] = "< ERROR >";
	Ped_Rot_String[1] = "< Strippers >"; 
	Ped_Rot_String[2] = "< N.O.O.S.E >";
	Ped_Rot_String[3] = "< Security >";
	Ped_Rot_String[4] = "< ~COL_NET_4~Remove ~w~>";
	menu_item[MenuItem_Index].charval = Ped_Rot_String[menu_item[MenuItem_Index].num_val];
}
void Rotation_Object_Strings(int MenuItem_Index){
	char* Rotate_string[18]; 
	Rotate_string[0] = "< ERROR >";
	Rotate_string[1] = "< Blue Neons >"; 
	Rotate_string[2] = "< Green Flash ~y~Above >";
	Rotate_string[3] = "< Green Flash ~y~Under >";
	Rotate_string[4] = "< Purple Flash ~y~Above >"; 
	Rotate_string[5] = "< Purple Flash ~y~Under >"; 
	Rotate_string[6] = "< Flaming Barrel >"; 
	Rotate_string[7] = "< Flames >"; 
	Rotate_string[8] = "< Stars >"; 
	Rotate_string[9] = "< Light around >"; 
	Rotate_string[10] = "< Disco >";
	Rotate_string[11] = "< Red Neons >"; 
	Rotate_string[12] = "< Sparks >"; 
	Rotate_string[13] = "< Shower >"; 
	Rotate_string[14] = "< Smoke >"; 
	Rotate_string[15] = "< Hamburger 1 >"; 
	Rotate_string[16] = "< Hamburger 2 >"; 
	Rotate_string[17] = "< ~COL_NET_4~Remove ~w~>"; 
	menu_item[MenuItem_Index].charval = Rotate_string[menu_item[MenuItem_Index].num_val];
}
void Rotation_Mode_Strings(int MenuItem_Index){
	char* Veh_Rot_String[3]; 
	Veh_Rot_String[0] = "< ERROR >";
	Veh_Rot_String[1] = "< Solid >"; 
	Veh_Rot_String[2] = "< Unsolid >";						
	menu_item[MenuItem_Index].charval = Veh_Rot_String[menu_item[MenuItem_Index].num_val];
}	

void MD_Rotation_Strings(int MenuItem_Index){
	if(MenuItem_Index == 1) return MD_Spy_Strings(MenuItem_Index);
	else if(MenuItem_Index == 2) return MD_Delete_Strings(MenuItem_Index);
	else if(MenuItem_Index == 3) return MD_PlayerOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
	//Jumpover//5
	//Bool renew //6
	else if(MenuItem_Index == 7) return Rotation_Speed_Strings(MenuItem_Index);
	else if(MenuItem_Index == 8) return Rotation_Distance_Strings(MenuItem_Index);
	else if(MenuItem_Index == 9) return Rotation_Position_Strings(MenuItem_Index);
	else if(MenuItem_Index == 10) return Rotation_Height_Strings(MenuItem_Index);
	//Function detach
	else if(MenuItem_Index == 12) return Rotation_Vehicle_Strings(MenuItem_Index);
	else if(MenuItem_Index == 13) return Rotation_Emergency_Strings(MenuItem_Index);
	else if(MenuItem_Index == 14) return Rotation_Truck_Strings(MenuItem_Index);
	else if(MenuItem_Index == 15) return Rotation_Bike_Strings(MenuItem_Index);	
	else if(MenuItem_Index == 16) return Rotation_Boat_Strings(MenuItem_Index);
	else if(MenuItem_Index == 17) return Rotation_Heli_Strings(MenuItem_Index);
	else if(MenuItem_Index == 18) return Rotation_Ped_Strings(MenuItem_Index);
	else if(MenuItem_Index == 19) return Rotation_Object_Strings(MenuItem_Index);
	else if(MenuItem_Index == 20) return Rotation_Mode_Strings(MenuItem_Index);
}

	

