/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */  


void MD_Attach_Cube_Strings(int MenuItem_Index){ //DONE
	char* Cube_String[9]; 
	Cube_String[0] = "< ERROR >"; 
	Cube_String[1] = "< Red >"; 
	Cube_String[2] = "< Orange >"; 
	Cube_String[3] = "< Yellow >"; 
	Cube_String[4] = "< Green >"; 
	Cube_String[5] = "< Blue >"; 
	Cube_String[6] = "< Purple >";
	Cube_String[7] = "< Cube Man >"; 
	Cube_String[8] = "< ~COL_NET_4~Remove ~w~>"; 
	menu_item[MenuItem_Index].charval = Cube_String[menu_item[MenuItem_Index].num_val];
}
void MD_Attach_Hand_Strings(int MenuItem_Index){//DONE
	char* Hand_string[19]; 
	Hand_string[0] = "< ERROR >";
	Hand_string[1] = "< Umbrella 1 >"; 
	Hand_string[2] = "< Umbrella 2 >"; 
	Hand_string[3] = "< Umbrella 3 >"; 
	Hand_string[4] = "< GunUmbrella 1 >"; 
	Hand_string[5] = "< GunUmbrella 2 >"; 
	Hand_string[6] = "< GunUmbrella 3 >"; 
	Hand_string[7] = "< Shopping bag >"; 
	Hand_string[8] = "< Picolo >"; 
	Hand_string[9] = "< Barrel Hand >"; 
	Hand_string[10] = "< Glowgun >"; 
	Hand_string[11] = "< Lightsaber >"; 
	Hand_string[12] = "< Lasergun >"; 
	Hand_string[13] = "< Rocketgun >"; 
	Hand_string[14] = "< Turbo M4 >"; 
	Hand_string[15] = "< TurboDeagle >"; 
	Hand_string[16] = "< Disco Launcher >"; 
	Hand_string[17] = "< Saxplayer >"; 
	Hand_string[18] = "< ~COL_NET_4~Remove ~w~>"; 
	menu_item[MenuItem_Index].charval = Hand_string[menu_item[MenuItem_Index].num_val];
}
void MD_Attach_Tool_Strings(int MenuItem_Index){//DONE
	char* Hand_string[21];
	Hand_string[0] = "< ERROR >";
	Hand_string[1] = "< Cane >";
	Hand_string[2] = "< Cane 2 >"; 
	Hand_string[3] = "< Slegehammer >"; 
	Hand_string[4] = "< Pickaxe >"; 
	Hand_string[5] = "< Broom >"; 
	Hand_string[6] = "< Rake >"; 
	Hand_string[7] = "< Spade >"; 
	Hand_string[8] = "< Wrench >"; 	
	Hand_string[9] = "< SAW >";
	Hand_string[10] = "< Axe >"; 
	Hand_string[11] = "< Jackhammer >"; 
	Hand_string[12] = "< Pickaxe >"; 
	Hand_string[13] = "< rake >"; 
	Hand_string[14] = "< Big Hammer >"; 
	Hand_string[15] = "< Nailgun >"; 
	Hand_string[16] = "< Hammer >"; 
	Hand_string[17] = "< Drill >"; 
	Hand_string[18] = "< Broom >"; 
	Hand_string[19] = "< Laptop >";
	Hand_string[20] = "< ~COL_NET_4~Remove ~w~>"; 
	menu_item[MenuItem_Index].charval = Hand_string[menu_item[MenuItem_Index].num_val];	
}
void MD_Attach_Light_Strings(int MenuItem_Index){//DONE
	char* Body_string[12]; 
	Body_string[0] = "< ERROR >";
	Body_string[1] = "< Red Body Glow >";
	Body_string[2] = "< Yellow Body Glow >"; 
	Body_string[3] = "< White Body Glow>";
	Body_string[4] = "< Face Glow >";
	Body_string[5] = "< Blue Neon Underneath) >";
	Body_string[6] = "< White Neon(Underneath) >"; 
	Body_string[7] = "< Purple Flash(Underneath) >";
	Body_string[8] = "< Green Flash(Underneath) >";	
	Body_string[9] = "< Red Hands >";
	Body_string[10] = "< Blue Hands >";	
	Body_string[11] = "< ~COL_NET_4~Remove ~w~>";		
	menu_item[MenuItem_Index].charval = Body_string[menu_item[MenuItem_Index].num_val];
}
void MD_Attach_Building_Strings(int MenuItem_Index){//DONE
	char* Body_string[3]; 
	Body_string[0] = "< ERROR >";
	Body_string[1] = "< Shark Building >"; 
	Body_string[2] = "< ~COL_NET_4~Remove ~w~>";		
	menu_item[MenuItem_Index].charval = Body_string[menu_item[MenuItem_Index].num_val];
}
void MD_Attach_Fire_Strings(int MenuItem_Index){//DONE
	char* Body_string[7]; 
	Body_string[0] = "< ERROR >";
	Body_string[1] = "< Flamer 1 >"; 
	Body_string[2] = "< Flamer 2 >"; 
	Body_string[3] = "< Flamer 3 >";
	Body_string[4] = "< Flames >";
	Body_string[5] = "< Fireball >";
	Body_string[6] = "< ~COL_NET_4~Remove ~w~>";		
	menu_item[MenuItem_Index].charval = Body_string[menu_item[MenuItem_Index].num_val];
}
void MD_Attach_Feet_Strings(int MenuItem_Index){//DONE
	char* Body_string[5];
	Body_string[0] = "< ERROR >";
	Body_string[1] = "< Sneakers >"; 
	Body_string[2] = "< Green Neon >"; 
	Body_string[3] = "< Pink Neon >"; 
	Body_string[4] = "< ~COL_NET_4~Remove ~w~>";		
	menu_item[MenuItem_Index].charval = Body_string[menu_item[MenuItem_Index].num_val];
}
void MD_Attach_Head_Strings(int MenuItem_Index){//DONE
	char* Head_String[18];  
	Head_String[0] = "< ERROR >";
	Head_String[1] = "< Ugly Face >";
	Head_String[2] = "< Welder Mask >";
	Head_String[3] = "< Purple Flasher >";
	Head_String[4] = "< Green Flasher >";
	Head_String[5] = "< Torch Head >";
	Head_String[6] = "< Discoball >";
	Head_String[7] = "< Conehead >";
	Head_String[8] = "< PornTV >";
	Head_String[9] = "< Devils Horns >";
	Head_String[10] = "< NightVision >";
	Head_String[11] = "< Hammerhead >";
	Head_String[12] = "< Pinokkio >";
	Head_String[13] = "< Red Hat >";
	Head_String[14] = "< Yellow Hat >";
	Head_String[15] = "< Purple Hat >";
	Head_String[16] = "< Black Hat >";
	Head_String[17] = "< ~COL_NET_4~Remove ~w~>"; 
	menu_item[MenuItem_Index].charval = Head_String[menu_item[MenuItem_Index].num_val];
}
void MD_Attach_Bust_Strings(int MenuItem_Index){//DONE
	char* Head_String[10];  
	Head_String[0] = "< ERROR >";
	Head_String[1] = "< Bust/Head 1 >";
	Head_String[2] = "< Bust/Head 2 >";
	Head_String[3] = "< Bust/Head 3 >";
	Head_String[4] = "< Bust/Head 4 >";
	Head_String[5] = "< Bust/Head 5 >";
	Head_String[6] = "< Gold Angel >";				//3 --> OK
	Head_String[7] = "< Egypt Statue 1 >";			//5 --> OK
	Head_String[8] = "< Egypt Statue 2 >";			//6 --> OK	
	Head_String[9] = "< ~COL_NET_4~Remove ~w~>"; 
	menu_item[MenuItem_Index].charval = Head_String[menu_item[MenuItem_Index].num_val];
}
void MD_Attach_Tribe_Strings(int MenuItem_Index){//DONE
	char* Head_String[8];  
	Head_String[0] = "< ERROR >";
	Head_String[1] = "< Tribe 1 >";
	Head_String[2] = "< Tribe 2 >";
	Head_String[3] = "< Tribe 3 >";
	Head_String[4] = "< Tribe 4 >";
	Head_String[5] = "< TribeMan 1 >";
	Head_String[6] = "< TribeMan 2 >";	
	Head_String[7] = "< ~COL_NET_4~Remove ~w~>"; 
	menu_item[MenuItem_Index].charval = Head_String[menu_item[MenuItem_Index].num_val];
}
void MD_Attach_Funny_Strings(int MenuItem_Index){//DONE
	char* Head_String[10];  
	Head_String[0] = "< ERROR >";
	Head_String[1] = "< Have a Dick >";
	Head_String[2] = "< Have a Huge Dick >";
	Head_String[3] = "< Leprechaun (on Crotch) >";
	Head_String[4] = "< Stop !!! >";
	Head_String[5] = "< HippoSuit >";	
	Head_String[6] = "< Shower Backpack>";
	Head_String[7] = "< Devils Wings >"; 
	Head_String[8] = "< Devils Wings xl >";
	Head_String[9] = "< ~COL_NET_4~Remove ~w~>"; 
	menu_item[MenuItem_Index].charval = Head_String[menu_item[MenuItem_Index].num_val];
}
void MD_Attach_Birds_Strings(int MenuItem_Index){//DONE
	char* Head_String[5];  
	Head_String[0] = "< ERROR >";
	Head_String[1] = "< Pigeon on Shoulder >";
	Head_String[2] = "< 2 Pigeons >";
	Head_String[3] = "< Birdman >";
	Head_String[4] = "< ~COL_NET_4~Remove ~w~>"; 
	menu_item[MenuItem_Index].charval = Head_String[menu_item[MenuItem_Index].num_val];
}

void MD_Attach_Effects_Strings(int MenuItem_Index){//DONE
	char* Head_String[7];  
	Head_String[0] = "< ERROR >";
	Head_String[1] = "< White Smoke >";
	Head_String[2] = "< Red Smoke >";
	Head_String[3] = "< Shower >";
	Head_String[4] = "< Sparks >";
	Head_String[5] = "< Darkness >";
	Head_String[6] = "< ~COL_NET_4~Remove ~w~>"; 
	menu_item[MenuItem_Index].charval = Head_String[menu_item[MenuItem_Index].num_val];
}
void MD_Attach_Vegetation_Strings(int MenuItem_Index){//DONE
	char* Head_String[8];  
	Head_String[0] = "< ERROR >";
	Head_String[1] = "< Big And Bushy >";
	Head_String[2] = "< Flower Pot >";
	Head_String[3] = "< Scotchpine >";
	Head_String[4] = "< AG Tree >";
	Head_String[5] = "< Beech Tree >";
	Head_String[6] = "< Live Oak >";
	Head_String[7] = "< ~COL_NET_4~Remove ~w~>"; 
	menu_item[MenuItem_Index].charval = Head_String[menu_item[MenuItem_Index].num_val];
}

void MD_Attach_Strings (int MenuItem_Index){
	if(MenuItem_Index == 1) return MD_Spy_Strings(MenuItem_Index);
	else if(MenuItem_Index == 2) return MD_Delete_Strings(MenuItem_Index);
	else if(MenuItem_Index == 3) return MD_PlayerOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
	//Jumpover
	//Bool
	else if(MenuItem_Index == 7) return MD_Attach_Cube_Strings(MenuItem_Index);
	else if(MenuItem_Index == 8) return MD_Attach_Hand_Strings(MenuItem_Index);
	else if(MenuItem_Index == 9) return MD_Attach_Tool_Strings(MenuItem_Index);
	else if(MenuItem_Index == 10) return MD_Attach_Light_Strings(MenuItem_Index);
	else if(MenuItem_Index == 11) return MD_Attach_Building_Strings(MenuItem_Index);
	else if(MenuItem_Index == 12) return MD_Attach_Fire_Strings(MenuItem_Index);
	else if(MenuItem_Index == 13) return MD_Attach_Feet_Strings(MenuItem_Index);
	else if(MenuItem_Index == 14) return MD_Attach_Head_Strings(MenuItem_Index);
	else if(MenuItem_Index == 15) return MD_Attach_Bust_Strings(MenuItem_Index);
	else if(MenuItem_Index == 16) return MD_Attach_Tribe_Strings(MenuItem_Index);
	else if(MenuItem_Index == 17) return MD_Attach_Funny_Strings(MenuItem_Index);
	else if(MenuItem_Index == 18) return MD_Attach_Birds_Strings(MenuItem_Index);
	else if(MenuItem_Index == 19) return MD_Attach_Effects_Strings(MenuItem_Index);
	else if(MenuItem_Index == 20) return MD_Attach_Vegetation_Strings(MenuItem_Index);
}
