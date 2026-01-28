/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Current Version : TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */  
 //General animation strings called by pPlayer, bodyguards and admin

void MD_Stride_Strings(int MenuItem_Index){
	char* stride_string[12]; 
	stride_string[0] = "< ERROR >";
	stride_string[1] = "< Player >"; 
	stride_string[2] = "< Male Fat >"; 
	stride_string[3] = "< Female Fat >"; 
	stride_string[4] = "< Sexy >"; 
	stride_string[5] = "< Female Cower >"; 
	stride_string[6] = "< Male cower >"; 
	stride_string[7] = "< Injured >"; 
	stride_string[8] = "< Swat >"; 
	stride_string[9] = "< Bum >"; 
	stride_string[10] = "< Cuffed >";
	stride_string[11] = "< ~COL_NET_4~Reset >";	
	menu_item[MenuItem_Index].charval = stride_string[menu_item[MenuItem_Index].num_val];
}
void MD_Anim_Dance_Strings(int MenuItem_Index){
	char* anim_string[10];
	anim_string[0] = "< ERROR >";
	anim_string[1] = "< Pole Dance >";
	anim_string[2] = "< Male dance 1 >"; 
	anim_string[3] = "< Male dance 2 >"; 
	anim_string[4] = "< Male dance 3 >"; 
	anim_string[5] = "< Male dance 4 >"; 
	anim_string[6] = "< Female Dance 1 >"; 
	anim_string[7] = "< Female Dance 2 >"; 
	anim_string[8] = "< Female Dance 3 >"; 
	anim_string[9] = "< ~COL_NET_4~Cancel Animation >";
	menu_item[MenuItem_Index].charval = anim_string[menu_item[MenuItem_Index].num_val];

}
void MD_Anim_Gesture_Strings(int MenuItem_Index){
	char* anim_string[23];
	anim_string[0] = "< ERROR >";
	anim_string[1] = "< Taichi 1 >";
	anim_string[2] = "< Taichi 2 >";
	anim_string[3] = "< Hooker 1 >"; 
	anim_string[4] = "< Hooker 2 >";
	anim_string[5] = "< Hooker 3 >";
	anim_string[6] = "< Piss >";
	anim_string[7] = "< Smoking >";
	anim_string[8] = "< Drunk 1 >"; 
	anim_string[9] = "< Drunk 2 >"; 
	anim_string[10] = "< Crawl >"; 
	anim_string[11] = "< Ragdoll >"; 
	anim_string[12] = "< Look Far >";
	anim_string[13] = "< Preacher >";		
	anim_string[14] = "< No No, dont! >";
	anim_string[15] = "< Seduce >";
	anim_string[16] = "< Get outa here >";
	anim_string[17] = "< Fake Freeze >";
	anim_string[18] = "< Fuck u >";
	anim_string[19] = "< hands up >";
	anim_string[20] = "< Busted >";
	anim_string[21] = "< hands / Knees >";
	anim_string[22] = "< ~COL_NET_4~Cancel Animation >";
	menu_item[MenuItem_Index].charval = anim_string[menu_item[MenuItem_Index].num_val];	
}
void MD_Anim_Tool_Strings(int MenuItem_Index){
	char* anim_string[6];
	anim_string[0] = "< ERROR >";
	anim_string[1] = "< Sweeping >";
	anim_string[2] = "< Raking >";
	anim_string[3] = "< Sledge hammer >";
	anim_string[4] = "< Drilling >";
	anim_string[5] = "< ~COL_NET_4~Cancel Animation >";
	menu_item[MenuItem_Index].charval = anim_string[menu_item[MenuItem_Index].num_val];
}
void MD_Anim_Heli_Strings(int MenuItem_Index){
	char* anim_string[11];
	anim_string[0] = "< ERROR >";
	anim_string[1] = "< Heli Animation 1 >"; 
	anim_string[2] = "< Heli Animation 2 >"; 
	anim_string[3] = "< Heli Animation 3 >";
	anim_string[4] = "< Heli Animation 4 >"; 
	anim_string[5] = "< Heli Animation 5 >"; 
	anim_string[6] = "< Heli Animation 6 >";			
	anim_string[7] = "< Heli Animation 7 >"; 
	anim_string[8] = "< Heli Animation 8 >"; 
	anim_string[9] = "< Heli Animation 9 >";
	anim_string[10] = "< ~COL_NET_4~Cancel Animation >";
	menu_item[MenuItem_Index].charval = anim_string[menu_item[MenuItem_Index].num_val];
}
void MD_Anim_Bike_Strings(int MenuItem_Index){
	char* anim_string[8];
	anim_string[0] = "< ERROR >";
	anim_string[1] = "< Bike Animation 1 >"; 
	anim_string[2] = "< Bike Animation 2 >"; 
	anim_string[3] = "< Bike Animation 3 >";
	anim_string[4] = "< Bike Animation 4 >"; 
	anim_string[5] = "< Bike Animation 5 >"; 
	anim_string[6] = "< Bike Animation 6 >";
	anim_string[7] = "< ~COL_NET_4~Cancel Animation >";
	menu_item[MenuItem_Index].charval = anim_string[menu_item[MenuItem_Index].num_val];	
}
void MD_Anim_Sliding_Strings(int MenuItem_Index){
	char* anim_string[6];
	anim_string[0] = "< ERROR >";
	anim_string[1] = "< Slide / Forward >";
	anim_string[2] = "< Slide / Wave >";
	anim_string[3] = "< Slide / Look Around >";
	anim_string[4] = "< Run Away >";
	anim_string[5] = "< ~COL_NET_4~Cancel Animation >";
	menu_item[MenuItem_Index].charval = anim_string[menu_item[MenuItem_Index].num_val];
}
void MD_Anim_Swim_Strings(int MenuItem_Index){
	char* anim_string[6];
	anim_string[0] = "< ERROR >";
	anim_string[1] = "< Swimming / Wait >";
	anim_string[2] = "< Swimming Crawl >";
	anim_string[3] = "< Swimming normal >";
	anim_string[4] = "< Swimming / Wait >";
	anim_string[5] = "< ~COL_NET_4~Cancel Animation >";
	menu_item[MenuItem_Index].charval = anim_string[menu_item[MenuItem_Index].num_val];
}
void MD_Anim_Sit_Strings(int MenuItem_Index){
	char* anim_string[7];
	anim_string[0] = "< ERROR >";
	anim_string[1] = "< Sit / yayaya >";	
	anim_string[2] = "< Sit / Go away >";
	anim_string[3] = "< Sit / Lmao >";
	anim_string[4] = "< Sit / Clap hands >";
	anim_string[5] = "< Sit / Clap hands 2 >";
	anim_string[6] = "< ~COL_NET_4~Cancel Animation >";
	menu_item[MenuItem_Index].charval = anim_string[menu_item[MenuItem_Index].num_val];
}
void MD_Anim_Pause_Strings(int MenuItem_Index){
	char* anim_string[7];
	anim_string[0] = "< ERROR >";
	anim_string[1] = "< pull up collar >";
	anim_string[2] = "< blow hands >";
	anim_string[3] = "< rub arms >";
	anim_string[4] = "< Arms Crossed >";
	anim_string[5] = "< Look around >";
	anim_string[6] = "< ~COL_NET_4~Cancel Animation >";
	menu_item[MenuItem_Index].charval = anim_string[menu_item[MenuItem_Index].num_val];
}
void MD_Anim_Sex_Strings(int MenuItem_Index){
	char* anim_string[15]; 
	anim_string[0] = "< ERROR >";
	anim_string[1] = "< Blowjob Driver Intro >"; 
	anim_string[2] = "< Blowjob Driver 2 >";
	anim_string[3] = "< Blowjob Driver 3 >"; 
	anim_string[4] = "< Blowjob Driver 4 >"; 
	anim_string[5] = "< Handjob driver 1 >"; 
	anim_string[6] = "< Handjob driver 2 >"; 
	anim_string[7] = "< Fuck Driver Intro >";			
	anim_string[8] = "< Fuck driver  >";			
	anim_string[9] = "< Fuck Driver hard>";	
	anim_string[10] = "< Kiss Passenger >";
	anim_string[11] = "< Kiss Driver >";
	anim_string[12] = "< Kiss Player >";	
	anim_string[13] = "< Kiss Player >";		
	anim_string[14] = "< ~COL_NET_4~Cancel Animation >";
	menu_item[MenuItem_Index].charval = anim_string[menu_item[MenuItem_Index].num_val];
}
void MD_Anim_Speed_Strings(int MenuItem_Index){
	char* anim_string[11]; 
	anim_string[0] = "< ERROR >";
	anim_string[1] = (animationspeed == 1.00f) ? "~PAD_LEFT~ ~COL_NET_1~Default  ~PAD_RIGHT~" : "~PAD_LEFT~ Default  ~PAD_RIGHT~";
	anim_string[2] = (animationspeed == 1.50f) ? "~PAD_LEFT~ ~COL_NET_1~Multiply 2  ~PAD_RIGHT~" : "~PAD_LEFT~ Multiply 2  ~PAD_RIGHT~";
	anim_string[3] = (animationspeed == 2.00f) ? "~PAD_LEFT~ ~COL_NET_1~Multiply 3  ~PAD_RIGHT~" : "~PAD_LEFT~ Multiply 3  ~PAD_RIGHT~";
	anim_string[4] = (animationspeed == 2.50f) ? "~PAD_LEFT~ ~COL_NET_1~Multiply 4  ~PAD_RIGHT~" : "~PAD_LEFT~ Multiply 4  ~PAD_RIGHT~";
	anim_string[5] = (animationspeed == 3.00f) ? "~PAD_LEFT~ ~COL_NET_1~Multiply 5  ~PAD_RIGHT~" : "~PAD_LEFT~ Multiply 5  ~PAD_RIGHT~"; 
	anim_string[6] = (animationspeed == 3.50f) ? "~PAD_LEFT~ ~COL_NET_1~Multiply 6  ~PAD_RIGHT~" : "~PAD_LEFT~ Multiply 6  ~PAD_RIGHT~"; 
	anim_string[7] = (animationspeed == 4.00f) ? "~PAD_LEFT~ ~COL_NET_1~Multiply 7  ~PAD_RIGHT~" : "~PAD_LEFT~ Multiply 7  ~PAD_RIGHT~";			
	anim_string[8] = (animationspeed == 4.50f) ? "~PAD_LEFT~ ~COL_NET_1~Multiply 8  ~PAD_RIGHT~" : "~PAD_LEFT~ Multiply 8  ~PAD_RIGHT~";			
	anim_string[9] = (animationspeed == 5.00f) ? "~PAD_LEFT~ ~COL_NET_1~Multiply 9  ~PAD_RIGHT~" : "~PAD_LEFT~ Multiply 9  ~PAD_RIGHT~";	
	anim_string[10] = (animationspeed == 5.50f) ? "~PAD_LEFT~ ~COL_NET_1~Multiply 10  ~PAD_RIGHT~" : "~PAD_LEFT~ Multiply 10  ~PAD_RIGHT~";	
	menu_item[MenuItem_Index].charval = anim_string[menu_item[MenuItem_Index].num_val];
}

void MD_Anim_Specials_Strings(int MenuItem_Index){
	char* anim_string[4]; 
	anim_string[0] = "< ERROR >";
	anim_string[1] = (GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT("hand3") > 0) ? "< ~COL_NET_1~Swim Everywhere >" : "< Swim Everywhere >";
	anim_string[2] = (GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT("eb_superman") > 0) ? "< ~COL_NET_1~Superman >" : "< Superman >";
	anim_string[3] =  "< ~COL_NET_4~Disable All >";
	menu_item[MenuItem_Index].charval = anim_string[menu_item[MenuItem_Index].num_val];
}

//Pull all together
void MD_Animation_Strings(int MenuItem_Index){
	if(MenuItem_Index == 1) return MD_Spy_Strings(MenuItem_Index);
	else if(MenuItem_Index == 2) return MD_Delete_Strings(MenuItem_Index);
	else if(MenuItem_Index == 3) return MD_PlayerOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
	//Jumpover//5
	//Bool renew //6
	else if(MenuItem_Index == 7)return MD_Anim_Speed_Strings(MenuItem_Index);
	//Jumpover//9
	else if(MenuItem_Index == 10) return MD_Stride_Strings(MenuItem_Index);
	else if(MenuItem_Index == 11) return MD_Anim_Dance_Strings(MenuItem_Index);
	else if(MenuItem_Index == 12) return MD_Anim_Gesture_Strings(MenuItem_Index);
	else if(MenuItem_Index == 13) return MD_Anim_Tool_Strings(MenuItem_Index);
	else if(MenuItem_Index == 14) return MD_Anim_Heli_Strings(MenuItem_Index);
	else if(MenuItem_Index == 15) return MD_Anim_Bike_Strings(MenuItem_Index);
	else if(MenuItem_Index == 16) return MD_Anim_Sliding_Strings(MenuItem_Index);
	else if(MenuItem_Index == 17) return MD_Anim_Swim_Strings(MenuItem_Index);
	else if(MenuItem_Index == 18) return MD_Anim_Sit_Strings(MenuItem_Index);
	else if(MenuItem_Index == 19) return MD_Anim_Pause_Strings(MenuItem_Index);
	else if(MenuItem_Index == 20) return MD_Anim_Sex_Strings(MenuItem_Index);
	else if(MenuItem_Index == 21) return MD_Anim_Specials_Strings(MenuItem_Index);
}


