/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Current Version : TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */ 
#pragma once


void MD_Stride_Strings_Action(int Player_PED){ //Not allowing this on netlayers
	char* Stride[11];
	Stride[1] = "move_player";
	Stride[2] = "move_m@fat";
	Stride[3] = "move_f@fat";
	Stride[4] = "move_f@sexy";
	Stride[5] = "move_f@cower";
	Stride[6] = "move_m@cower";
	Stride[7] = "move_injured_generic";
	Stride[8] = "move_m@swat";
	Stride[9] = "move_m@bum";
	Stride[10] = "move_m@h_cuffed";
	if (menu_item[SelectedItem].num_val > 0 && menu_item[SelectedItem].num_val < 11){
		if(Player_PED == pPlayer)pPlayer_strides(Stride[(menu_item[SelectedItem].num_val)]);
		else Strides_BGuards(Stride[(menu_item[SelectedItem].num_val)]);
	}
	else if (menu_item[SelectedItem].num_val == 11 ){
		change_player(GET_PLAYERSETTINGS_MODEL_CHOICE());
		SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE(GET_PLAYER_ID());
		BLOCK_PED_WEAPON_SWITCHING(pPlayer, true);
	}
	
}

void MD_Anim_Dance_Strings_Action(int Player_PED){		
	bool OnWHo;
	if(Player_PED == pPlayer)OnWHo = true;
	else OnWHo = false;
	if(menu_item[SelectedItem].num_val == 1)AnimationPlayer(OnWHo,"missstripclublo","pole_dance_a",Animationloop,1);//--> Changing this value to 1 will keep the animation on place (u can act with ut sticks to move it, 0 is perfect for this, animation returns to initial start point
	else if(menu_item[SelectedItem].num_val == 2) AnimationPlayer(OnWHo,"amb@dance_maleidl_a","loop_a",Animationloop,1);
	else if(menu_item[SelectedItem].num_val == 3) AnimationPlayer(OnWHo,"amb@dance_maleidl_b","loop_b",Animationloop,1);
	else if(menu_item[SelectedItem].num_val == 4) AnimationPlayer(OnWHo,"amb@dance_maleidl_c","loop_c",Animationloop,1);
	else if(menu_item[SelectedItem].num_val == 5) AnimationPlayer(OnWHo,"amb@dance_maleidl_d","loop_d",Animationloop,1); 
	else if(menu_item[SelectedItem].num_val == 6) AnimationPlayer(OnWHo,"amb@dance_femidl_a","loop_a",Animationloop,1); 
	else if(menu_item[SelectedItem].num_val == 7) AnimationPlayer(OnWHo,"amb@dance_femidl_b","loop_b",Animationloop,1);
	else if(menu_item[SelectedItem].num_val == 8) AnimationPlayer(OnWHo,"amb@dance_femidl_c","loop_c",Animationloop,1); 
	else if(menu_item[SelectedItem].num_val == 9){
	if(OnWHo)CLEAR_CHAR_TASKS_IMMEDIATELY(Player_PED);		
	else Clear_Task_BGuards();	
	}
}

void MD_Anim_Gesture_Strings_Action(int Player_PED){
	bool OnWHo;
	if(Player_PED == pPlayer)OnWHo = true;
	else OnWHo = false;
	if(menu_item[SelectedItem].num_val == 1)AnimationPlayer(OnWHo,"amb@park_taichi_a","taichi01",Animationloop,1);
	else if(menu_item[SelectedItem].num_val == 2) AnimationPlayer(OnWHo,"amb@park_taichi_b","taichi02",Animationloop,1);
	else if(menu_item[SelectedItem].num_val == 3) AnimationPlayer(OnWHo,"amb@hooker","idle_a",Animationloop,1);
	else if(menu_item[SelectedItem].num_val == 4) AnimationPlayer(OnWHo,"amb@hooker","idle_b",Animationloop,1);
	else if(menu_item[SelectedItem].num_val == 5) AnimationPlayer(OnWHo,"amb@hooker","idle_c",Animationloop,1);
	else if(menu_item[SelectedItem].num_val == 6) AnimationPlayer(OnWHo,"missbrucie1","piss_interupted",Animationloop,1);
	else if(menu_item[SelectedItem].num_val == 7) AnimationPlayer(OnWHo,"amb@smoking","stand_smoke",Animationloop,1);
	else if(menu_item[SelectedItem].num_val == 8) AnimationPlayer(OnWHo,"amb@drunk","wasted_seated",0,0x20);
	else if(menu_item[SelectedItem].num_val == 9) AnimationPlayer(OnWHo,"amb@drunk","wasteda",Animationloop,1);
	else if(menu_item[SelectedItem].num_val == 10) AnimationPlayer(OnWHo,"misskbtruck","crawl_fwd_loop",99999,1);
	else if(menu_item[SelectedItem].num_val == 11){
		if(OnWHo)SWITCH_PED_TO_RAGDOLL(pPlayer,20000,30000,false,false,false,false);
		else Ragdoll_BGuards();
	}
	else if(menu_item[SelectedItem].num_val == 12){
		if(GetBit(MD_Misc_OptionsBitSet,MD_MISC_AUTO_ATTACH_TOOL_WITH_ANIMS)){
			if(OnWHo)delete_objects_on_ped(Player_PED);
			else Delete_Objects_BGuards();
			if(OnWHo)attach_object_to_player(pPlayer, -596812191,BONE_HEAD, -0.0050, 0.0896, 0.0172, 0.0900, 1.5300,3.150,0);
			else Attach_Objects_BGuards(-596812191,BONE_HEAD, -0.0050, 0.0896, 0.0172, 0.0900, 1.5300,3.150,0);
		}
		AnimationPlayer(OnWHo,"amb@default","telescope_default",Animationloop,1);			
	}
	else if(menu_item[SelectedItem].num_val == 13) AnimationPlayer(OnWHo,"ragdoll_trans","preacher_trans",Animationloop,1);
	else if(menu_item[SelectedItem].num_val == 14) AnimationPlayer(OnWHo,"amb@nightclub_ext","street_argue_f_a",Animationloop,1);
	else if(menu_item[SelectedItem].num_val == 15) AnimationPlayer(OnWHo,"amb@pimps_pros","car_proposition",Animationloop,1); 
	else if(menu_item[SelectedItem].num_val == 16) AnimationPlayer(OnWHo,"amb@pimps_pros","rejection",Animationloop,1);
	else if(menu_item[SelectedItem].num_val == 17) AnimationPlayer(OnWHo,"audio_motionbuilder","walk",Animationloop,1);
	else if(menu_item[SelectedItem].num_val == 18) AnimationPlayer(OnWHo,"taxi_hail","fuck_u",Animationloop,1);
	else if(menu_item[SelectedItem].num_val == 19) AnimationPlayer(OnWHo,"ped","handsup",Animationloop,1); 
	else if(menu_item[SelectedItem].num_val == 20) AnimationPlayer(OnWHo,"busted","idle_2_hands_up",0,0x20); 
	else if(menu_item[SelectedItem].num_val == 21) AnimationPlayer(OnWHo,"missbernie1","default_idle",Animationloop,1);	
	else if(menu_item[SelectedItem].num_val == 22){
	if(OnWHo)CLEAR_CHAR_TASKS_IMMEDIATELY(Player_PED);		
	else Clear_Task_BGuards();	
	}	
}
void MD_Anim_Tool_Strings_Action(int Player_PED){ //a Player_PED huh, var naming needs some work buddy! just call it ped or something, simple!
	bool OnWHo;
	if(Player_PED == pPlayer)OnWHo = true;
	else OnWHo = false;
	if(menu_item[SelectedItem].num_val == 1){
		if(GetBit(MD_Misc_OptionsBitSet,MD_MISC_AUTO_ATTACH_TOOL_WITH_ANIMS)){
			if(OnWHo)delete_objects_on_ped(Player_PED);
			else Delete_Objects_BGuards();
			if(OnWHo)CLEAR_CHAR_TASKS_IMMEDIATELY(Player_PED);		
			else Clear_Task_BGuards();			
			if(OnWHo)attach_object_to_player(pPlayer,-1813753615,BONE_RIGHT_HAND, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,0.000,0);
			else Attach_Objects_BGuards(-1813753615,BONE_RIGHT_HAND, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,0.0000,0);
		}
		AnimationPlayer(OnWHo,"amb@default","ff_sweep_default",Animationloop,1);
	}
	else if(menu_item[SelectedItem].num_val == 2){
		if(GetBit(MD_Misc_OptionsBitSet,MD_MISC_AUTO_ATTACH_TOOL_WITH_ANIMS)){
		if(OnWHo)delete_objects_on_ped(Player_PED);
			else Delete_Objects_BGuards();
			if(OnWHo)CLEAR_CHAR_TASKS_IMMEDIATELY(Player_PED);		
			else Clear_Task_BGuards();
			
			if(OnWHo)attach_object_to_player(pPlayer,1892875956,BONE_RIGHT_HAND, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,0.0000,0);
			else Attach_Objects_BGuards(1892875956,BONE_RIGHT_HAND, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,0.0000,0);
		}
		AnimationPlayer(OnWHo,"amb@default","rake_default",Animationloop,1);		
	}
	else if(menu_item[SelectedItem].num_val == 3){ 
		if(GetBit(MD_Misc_OptionsBitSet,MD_MISC_AUTO_ATTACH_TOOL_WITH_ANIMS)){
			if(OnWHo)delete_objects_on_ped(Player_PED);
			else Delete_Objects_BGuards();
			if(OnWHo)CLEAR_CHAR_TASKS_IMMEDIATELY(Player_PED);		
			else Clear_Task_BGuards();
			
			if(OnWHo)attach_object_to_player(pPlayer, 2113166995,BONE_RIGHT_HAND, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,0.0000,0);
			else Attach_Objects_BGuards( 2113166995,BONE_RIGHT_HAND, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,0.0000,0);
		}
		AnimationPlayer(OnWHo,"amb@default","sledge_default",Animationloop,1);		
	}
	else if(menu_item[SelectedItem].num_val == 4){
		if(GetBit(MD_Misc_OptionsBitSet,MD_MISC_AUTO_ATTACH_TOOL_WITH_ANIMS)){
			if(OnWHo)delete_objects_on_ped(Player_PED);
			else Delete_Objects_BGuards();
			if(OnWHo)CLEAR_CHAR_TASKS_IMMEDIATELY(Player_PED);		
			else Clear_Task_BGuards();
			if(OnWHo)attach_object_to_player(pPlayer, 1234161243,BONE_RIGHT_HAND, 0, 0.0061,-0.0086, 0.0000, 0.0000,5.9600,0);
			else Attach_Objects_BGuards( 1234161243,BONE_RIGHT_HAND, 0, 0.0061,-0.0086, 0.0000, 0.0000,5.9600,0);
		}
		AnimationPlayer(OnWHo,"amb@drill_create","drill_create",Animationloop,1);		
	}
	else if(menu_item[SelectedItem].num_val == 5){
	if(OnWHo)CLEAR_CHAR_TASKS_IMMEDIATELY(Player_PED);		
	else Clear_Task_BGuards();
	if(OnWHo)delete_objects_on_ped(Player_PED);
	else Delete_Objects_BGuards();
	}
}
void MD_Anim_Heli_Strings_Action(int Player_PED){
	bool OnWHo;
	if(Player_PED == pPlayer)OnWHo = true;
	else OnWHo = false;
	if(menu_item[SelectedItem].num_val == 1)AnimationPlayer(OnWHo,"missbell4","land_on_heli",Animationloop,1);
	else if(menu_item[SelectedItem].num_val == 2) AnimationPlayer(OnWHo,"missfinale2d","kicked_from_heli",Animationloop,1);
	else if(menu_item[SelectedItem].num_val == 3) AnimationPlayer(OnWHo,"missfinale2p","bike2heli_idle2",Animationloop,1); 
	else if(menu_item[SelectedItem].num_val == 4) AnimationPlayer(OnWHo,"missfinale2d","land_on_heli",Animationloop,1); 
	else if(menu_item[SelectedItem].num_val == 5) AnimationPlayer(OnWHo,"missfinale2d","hang_on_heli",Animationloop,1);
	else if(menu_item[SelectedItem].num_val == 6) AnimationPlayer(OnWHo,"missfinale2d","heli_idle",Animationloop,1);
	else if(menu_item[SelectedItem].num_val == 7) AnimationPlayer(OnWHo,"missfinale2p","bike2heli_climb1",Animationloop,1); 
	else if(menu_item[SelectedItem].num_val == 8) AnimationPlayer(OnWHo,"missfinale2p","bike2heli",Animationloop,1); 
	else if(menu_item[SelectedItem].num_val == 9) AnimationPlayer(OnWHo,"missfinale2p_boat","boat2heli_p4",Animationloop,1);
	else if(menu_item[SelectedItem].num_val == 10){
	if(OnWHo)CLEAR_CHAR_TASKS_IMMEDIATELY(Player_PED);		
	else Clear_Task_BGuards();	
	}	
}
void MD_Anim_Bike_Strings_Action(int Player_PED){
	bool OnWHo;
	if(Player_PED == pPlayer)OnWHo = true;
	else OnWHo = false;
	if(menu_item[SelectedItem].num_val == 1)AnimationPlayer(OnWHo,"missfinale2d","jump_on_heli_alt",Animationloop,1);
	else if(menu_item[SelectedItem].num_val == 2)AnimationPlayer(OnWHo,"missfinale2d","kick_inside_heli",Animationloop,1); 
	else if(menu_item[SelectedItem].num_val == 3)AnimationPlayer(OnWHo,"missfinale2p","leg_swing",Animationloop,1); 
	else if(menu_item[SelectedItem].num_val == 4)AnimationPlayer(OnWHo,"missfinale2p_boat","boat2heli_p1",Animationloop,1);
	else if(menu_item[SelectedItem].num_val == 5)AnimationPlayer(OnWHo,"missfinale2p_boat","boat2heli_p2",Animationloop,1); 
	else if(menu_item[SelectedItem].num_val == 6)AnimationPlayer(OnWHo,"missfinale2p_boat","boat2heli_p3",Animationloop,1); 
	else if(menu_item[SelectedItem].num_val == 7){
	if(OnWHo)CLEAR_CHAR_TASKS_IMMEDIATELY(Player_PED);		
	else Clear_Task_BGuards();	
	}	
}
void MD_Anim_Sliding_Strings_Action(int Player_PED){
	bool OnWHo;
	if(Player_PED == pPlayer)OnWHo = true;
	else OnWHo = false;
	if(menu_item[SelectedItem].num_val == 1)AnimationPlayer(OnWHo,"amb@carry_create","walk_create",Animationloop,1);   //Sliding forward
	else if(menu_item[SelectedItem].num_val == 2)AnimationPlayer(OnWHo,"amb@carry_idles","walk_idle_a",Animationloop,1); //Sliding far forward hand up
	else if(menu_item[SelectedItem].num_val == 3)AnimationPlayer(OnWHo,"amb@carry_idles","walk_idle_c",Animationloop,1); //Sliding far forward
	else if(menu_item[SelectedItem].num_val == 4)AnimationPlayer(OnWHo,"amb@flee_a","run_flee_lookaround_b",Animationloop,1);  //Running away funny looking around
	else if(menu_item[SelectedItem].num_val == 5){
	if(OnWHo)CLEAR_CHAR_TASKS_IMMEDIATELY(Player_PED);		
	else Clear_Task_BGuards();	
	}	
}
void MD_Anim_Swim_Strings_Action(int Player_PED){
	bool OnWHo;
	if(Player_PED == pPlayer)OnWHo = true;
	else OnWHo = false;
	if(menu_item[SelectedItem].num_val == 1)AnimationPlayer(OnWHo,"swimming","idle",Animationloop,1);  					//swimming waiting in water
	else if(menu_item[SelectedItem].num_val == 2)AnimationPlayer(OnWHo,"swimming","run",Animationloop,1); 					//Crawling
	else if(menu_item[SelectedItem].num_val == 3)AnimationPlayer(OnWHo,"swimming","walk",Animationloop,1); 					//schoolslag 
	else if(menu_item[SelectedItem].num_val == 4)AnimationPlayer(OnWHo,"swimming","walk_strafe_b",Animationloop,1); 			//schoolslag  
	else if(menu_item[SelectedItem].num_val == 5){
	if(OnWHo)CLEAR_CHAR_TASKS_IMMEDIATELY(Player_PED);		
	else Clear_Task_BGuards();	
	}
}
void MD_Anim_Sit_Strings_Action(int Player_PED){
	bool OnWHo;
	if(Player_PED == pPlayer)OnWHo = true;
	else OnWHo = false;
	if(menu_item[SelectedItem].num_val == 1)AnimationPlayer(OnWHo,"amb@default","preacher_default",Animationloop,1); //Sit hands moves up
	else if(menu_item[SelectedItem].num_val == 2)AnimationPlayer(OnWHo,"amb@comedy","cheer_b",Animationloop,1);  //Sit hands moves up YAYAYAYA
	else if(menu_item[SelectedItem].num_val == 3)AnimationPlayer(OnWHo,"amb@comedy","clap_a",Animationloop,1);  //Sit hands clapping YAYAYAYA
	else if(menu_item[SelectedItem].num_val == 4)AnimationPlayer(OnWHo,"amb@comedy","jeer_a",Animationloop,1);  //Sitting go away YAYAYAYA
	else if(menu_item[SelectedItem].num_val == 5)AnimationPlayer(OnWHo,"amb@comedy","laugh_f",Animationloop,1);  //Sitting Laughing YAYAYAYA
	else if(menu_item[SelectedItem].num_val == 6){
	if(OnWHo)CLEAR_CHAR_TASKS_IMMEDIATELY(Player_PED);		
	else Clear_Task_BGuards();	
	}	
}
void MD_Anim_Pause_Strings_Action(int Player_PED){
	bool OnWHo;
	if(Player_PED == pPlayer)OnWHo = true;
	else OnWHo = false;
	if(menu_item[SelectedItem].num_val == 1)AnimationPlayer(OnWHo,"amb@cold","pull_up_collar",Animationloop,1);  //Standing having cold
	else if(menu_item[SelectedItem].num_val == 2)AnimationPlayer(OnWHo,"amb@cold","stand_blowhands",Animationloop,1);  //Standing having cold
	else if(menu_item[SelectedItem].num_val == 3)AnimationPlayer(OnWHo,"amb@cold","stand_rubarms",Animationloop,1);  //Standing having cold
	else if(menu_item[SelectedItem].num_val == 4)AnimationPlayer(OnWHo,"amb@default","bouncer_default",Animationloop,1);  //Standing arms crossed
	else if(menu_item[SelectedItem].num_val == 5)AnimationPlayer(OnWHo,"amb@hurry_head","walk_b",Animationloop,1);  //Looking around left right pretty fast (funny)
	else if(menu_item[SelectedItem].num_val == 6){
	if(OnWHo)CLEAR_CHAR_TASKS_IMMEDIATELY(Player_PED);		
	else Clear_Task_BGuards();	
	}	
	
}
void MD_Anim_Sex_Strings_Action(int Player_PED){
	bool OnWHo;
	if(Player_PED == pPlayer)OnWHo = true;
	else OnWHo = false;
	if(menu_item[SelectedItem].num_val == 1) AnimationPlayer(OnWHo,"misscar_sex","f_blowjob_outro",Animationloop,1);
	else if(menu_item[SelectedItem].num_val == 2)AnimationPlayer(OnWHo,"misscar_sex","f_blowjob_intro_low",Animationloop,1);	
	else if(menu_item[SelectedItem].num_val == 3)AnimationPlayer(OnWHo,"misscar_sex","f_blowjob_outro_low",Animationloop,1);
	else if(menu_item[SelectedItem].num_val == 4)AnimationPlayer(OnWHo,"misscar_sex","f_blowjob_loop",Animationloop,1);
	else if(menu_item[SelectedItem].num_val == 5)AnimationPlayer(OnWHo,"misscar_sex","f_handjob_loop",Animationloop,1);
	else if(menu_item[SelectedItem].num_val == 6)AnimationPlayer(OnWHo,"misscar_sex","f_handjob_loop_low",Animationloop,1); 
	else if(menu_item[SelectedItem].num_val == 7)AnimationPlayer(OnWHo,"misscar_sex","f_sex_intro",Animationloop,0); //--> Changing this value to 1 will keep the animation on place (u can act with ut sticks to move it, 0 is perfect for this, animation returns to initial start point
	else if(menu_item[SelectedItem].num_val == 8)AnimationPlayer(OnWHo,"misscar_sex","f_sex_loop",Animationloop,0);
	else if(menu_item[SelectedItem].num_val == 9)AnimationPlayer(OnWHo,"misscar_sex","f_sex_loop_low",Animationloop,0);		
	else if(menu_item[SelectedItem].num_val == 10)AnimationPlayer(OnWHo,"amb@dating","car_kiss_ds",Animationloop,1); //Car Kiss Driver seat
	else if(menu_item[SelectedItem].num_val == 11)AnimationPlayer(OnWHo,"amb@dating","car_kiss_ps",Animationloop,1); //Car Kiss Passenger seat
	else if(menu_item[SelectedItem].num_val == 12)AnimationPlayer(OnWHo,"amb@dating","player_kiss",Animationloop,1); //Player Kiss standing (attach to player)
	else if(menu_item[SelectedItem].num_val == 13)AnimationPlayer(OnWHo,"amb@pimps_pros","girl_hug",Animationloop,1);  //kiss
	else if(menu_item[SelectedItem].num_val == 14){
	if(OnWHo)CLEAR_CHAR_TASKS_IMMEDIATELY(Player_PED);		
	else Clear_Task_BGuards();	
	}	
}
