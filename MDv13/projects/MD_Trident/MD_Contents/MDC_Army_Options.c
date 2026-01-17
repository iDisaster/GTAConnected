/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV NATHAN VII
 */  

#pragma once

/** NEW SETUP TO BE IMPLEMENTED **/
void MD_Army_Setup(void){
	item_highlighted = 14;
	
	MENU_SUB_HEADER = "MD Personal Army";	
	NETWORK_FIRST_FOUR_ITEMS_MENU_SETUP();
	Add_JumpOver("~BLIP_94~  MD  G U A R D   S E T T I N G S  ~BLIP_94~");						//5
	AddFunction_Value("Guards~c~ Weapons",12);													//6
	AddFunction_Value("Guards~c~ Formation",5);													//7
	AddFunction_Value("Guards~c~ Spacing",4);													//8
	AddFunction_Value_CB("Guard config",6);														//9  // Arm your vehicle / Guards Godmode give / Guards Godmode Take / Guards helmet Give / Guard Helmet Take
	AddFunction_Value_CB("Attack Mode",5);														//10  //Attack Now // Attack Teleported / Clear Tasks
	AddSubMenu("Guards ~COL_NET_4~Animations / Strides ~PAD_RIGHT~");							//11
	AddSubMenu("Guards ~COL_NET_4~Attachments ~PAD_RIGHT~");									//12	
	Add_JumpOver("~BLIP_94~  MD  G U A R D S   S P A W N E R ~BLIP_94~");						//13
	AddFunction_Value_CB("Uniforms",14); 														//14
	AddFunction_Value_CB("Gang Members",4); 													//15
	AddFunction_Value_CB("Stripper",2); 														//16
	AddFunction_Value_CB("Medical",5); 															//17
	AddFunction_Value_CB("Business",9); 														//18
	AddFunction_Value_CB("Cluck",2); 															//19
	AddFunction_Value_CB("Homo",2); 															//20
	AddFunction_Value_CB("Singleplayer",9);														//21  //Yes! 21 is possible if needed :)
	/**Remember strings*/	
	//menu_item[1].num_val = (AutoSpectate ? 2 : 1);
	//menu_item[10].num_val = group_formation;
	//menu_item[11].num_val = group_spacing;	
	return;
}

void MD_Army_Action(void){
	//!Set urself as default!/
	//players[ChangeNetPlayer].id = iPlayer;
	//!//
	NETWORK_FIRST_FOUR_ITEMS_MENU_ACTION();		
	//Jumpover 5
	//Sub 6
	//Sub 7
	if(SelectedItem == 6){	
		if(menu_item[SelectedItem].num_val == 1	)Weapon_BGuards(WEAPON_DEAGLE);
		else if(menu_item[SelectedItem].num_val == 2) Weapon_BGuards(WEAPON_SHOTGUN);
		else if(menu_item[SelectedItem].num_val == 3) Weapon_BGuards(WEAPON_MP5);
		else if(menu_item[SelectedItem].num_val == 4) Weapon_BGuards(WEAPON_M4);
		else if(menu_item[SelectedItem].num_val == 5) Weapon_BGuards(WEAPON_RLAUNCHER);
		else if(menu_item[SelectedItem].num_val == 6) Weapon_BGuards(WEAPON_SNIPERRIFLE);
		else if(menu_item[SelectedItem].num_val == 7) Weapon_BGuards(WEAPON_GRENADE);
		else if(menu_item[SelectedItem].num_val == 8) Weapon_BGuards(WEAPON_MOLOTOV);
		else if(menu_item[SelectedItem].num_val == 9) Weapon_BGuards(WEAPON_BASEBALLBAT);
		else if(menu_item[SelectedItem].num_val == 10) Weapon_BGuards(WEAPON_KNIFE);
		else if(menu_item[SelectedItem].num_val == 11) Weapon_BGuards(WEAPON_POOLCUE);
		else if(menu_item[SelectedItem].num_val == 12)Remove_Weapon_BGuards();		
	}
	else if(SelectedItem == 7){		
		group_formation =  menu_item[SelectedItem].num_val;
		SET_GROUP_FORMATION(BG_Group, group_formation);		
	}
	else if(SelectedItem ==	8){
		group_spacing = menu_item[SelectedItem].num_val;
		SET_GROUP_FORMATION_SPACING(BG_Group, group_spacing);		
	}
	else if(SelectedItem == 9){		
		if(menu_item[SelectedItem].num_val == 1){			
			if(GetByteInSet(SpectateAndAttachByteSet, ATTACH_TYPE) == 3){
			Alert("~b~MD: ~s~Spy mode doesnt allow this!",false);
			return;
			}
			BGuards_Arm_Vehicle(players[ChangeNetPlayer].id);	 //Freeze when no player selected!!					
		}		
		else if(menu_item[SelectedItem].num_val == 2)Helmets_BGuards();
		else if(menu_item[SelectedItem].num_val == 3)Remove_Helmets_BGuards();
		else if(menu_item[SelectedItem].num_val == 4)Set_BGuards_Invincible(true);
		else if(menu_item[SelectedItem].num_val == 5)Set_BGuards_Invincible(false);
		else if(menu_item[SelectedItem].num_val == 6) Clear_Task_BGuards();				
	}
	else if(SelectedItem == 10){
		if(menu_item[SelectedItem].num_val == 1){
			BGuard_Send_After_PlayerPED(players[ChangeNetPlayer].id, PLAYER_CHAR(players[ChangeNetPlayer].id)); //should make this take one arg..
			char* buffer[16]; //64 characters
			Strcpy(buffer, "~b~MD: ~s~Guards will now attack ~COL_NET_"); //37
			itoa( (players[ChangeNetPlayer].id + 1), buffer); //39
			Strcat(buffer, "~"); //40
			Strcat(buffer, GET_PLAYER_NAME(players[ChangeNetPlayer].id)); //60
			Strcat(buffer, "~s~."); //59
			Alert(buffer, false);
		}
		else if(menu_item[SelectedItem].num_val == 2){
			float x,y,z;				
			GET_CHAR_COORDINATES(PLAYER_CHAR(players[ChangeNetPlayer].id),&x,&y,&z);
			Teleport_BGuards_Coord(x,y,z); //--> this needs to be looked at, doesnt work
			WAIT(100);
			BGuard_Send_After_PlayerPED(players[ChangeNetPlayer].id, PLAYER_CHAR(players[ChangeNetPlayer].id));
			char* buffer[16]; //64 characters
			Strcpy(buffer, "~b~MD: ~s~Guards will now attack ~COL_NET_"); //37
			itoa( (players[ChangeNetPlayer].id + 1), buffer); //39
			Strcat(buffer, "~"); //40
			Strcat(buffer, GET_PLAYER_NAME(players[ChangeNetPlayer].id)); //60
			Strcat(buffer, "~s~."); //59
			Alert(buffer, false);
		}		
		else if(menu_item[SelectedItem].num_val == 3)Clear_One_BGuards();
		else if(menu_item[SelectedItem].num_val == 4)Clear_All_BGuards();
		else if(menu_item[SelectedItem].num_val == 5) Clear_Task_BGuards();
		//else if(menu_item[SelectedItem].num_val == 6)Fire_BG_Weapon(players[ChangeNetPlayer].id);
	}
	//Jumpover
	else if(SelectedItem == 14){ //Uniforms
		int model[14];
		model[0] = MODEL_M_M_FATCOP_01;
		model[1] = MODEL_M_Y_SWAT;
		model[2] = MODEL_M_Y_NHELIPILOT;
		model[3] = MODEL_M_M_FBI;
		model[4] = MODEL_M_Y_COP;
		model[5] = MODEL_M_Y_COP_TRAFFIC;
		model[6] = MODEL_M_Y_FIREMAN;
		model[7] = MODEL_M_M_FIRECHIEF;			
		model[8] = MODEL_M_M_SECURITYMAN;
		model[9] = MODEL_M_M_ARMOURED;
		model[10] = MODEL_M_Y_CLUBFIT;
		model[11] = MODEL_M_Y_PRISON;
		model[12] = MODEL_M_Y_PRISONAOM;
		model[13] = MODEL_F_Y_FF_CLUCK_R;
		Spawn_BGuards(PLAYER_CHAR(players[ChangeNetPlayer].id),model[(menu_item[SelectedItem].num_val - 1)],BGWeapontype_Lastselected);
		if(BG_Attack_Selected_Player) BGuard_Send_After_PlayerPED(players[ChangeNetPlayer].id, PLAYER_CHAR(players[ChangeNetPlayer].id));
	}
	else if(SelectedItem == 15){ //Gang Members
	  int model[4];
		model[0] = MODEL_M_Y_GAFR_LO_01;
		model[1] = MODEL_M_Y_GAFR_LO_02;
		model[2] = MODEL_M_Y_GAFR_HI_01;
		model[3] = MODEL_M_Y_GAFR_HI_02;
		Spawn_BGuards(PLAYER_CHAR(players[ChangeNetPlayer].id),model[(menu_item[SelectedItem].num_val - 1)],BGWeapontype_Lastselected);
		if(BG_Attack_Selected_Player) BGuard_Send_After_PlayerPED(players[ChangeNetPlayer].id, PLAYER_CHAR(players[ChangeNetPlayer].id));
	}
	else if(SelectedItem == 16){ //Stripper
		int model[2];
		model[0] = MODEL_F_Y_STRIPPERC01;
		model[1] = MODEL_F_Y_STRIPPERC02;
		Spawn_BGuards(PLAYER_CHAR(players[ChangeNetPlayer].id),model[(menu_item[SelectedItem].num_val - 1)],BGWeapontype_Lastselected);
		if(BG_Attack_Selected_Player) BGuard_Send_After_PlayerPED(players[ChangeNetPlayer].id, PLAYER_CHAR(players[ChangeNetPlayer].id));
	}
	else if(SelectedItem == 17){ //Medical
		int model[5];
		model[0] = MODEL_M_M_DOCTOR_01;
		model[1] = MODEL_F_Y_DOCTOR_01;
		model[2] = MODEL_F_Y_NURSE;
		model[3] = MODEL_M_M_DOC_SCRUBS_01;
		model[4] = MODEL_M_M_DODGYDOC;
		Spawn_BGuards(PLAYER_CHAR(players[ChangeNetPlayer].id),model[(menu_item[SelectedItem].num_val - 1)],BGWeapontype_Lastselected);
		if(BG_Attack_Selected_Player) BGuard_Send_After_PlayerPED(players[ChangeNetPlayer].id, PLAYER_CHAR(players[ChangeNetPlayer].id));
	}
	else if(SelectedItem == 18){ //Business
		int model[9];
		model[0] = MODEL_F_M_BUSINESS_01;
		model[1] = MODEL_F_M_BUSINESS_02;
		model[2] = MODEL_F_M_PBUSINESS;
		model[3] = MODEL_F_Y_BUSINESS_01;
		model[4] = MODEL_M_M_BUSINESS_02;
		model[5] = MODEL_M_M_BUSINESS_03;
		model[6] = MODEL_M_M_PBUSINESS_01;
		model[7] = MODEL_M_Y_BUSINESS_01;
		model[8] = MODEL_M_Y_BUSINESS_02;
		Spawn_BGuards(PLAYER_CHAR(players[ChangeNetPlayer].id),model[(menu_item[SelectedItem].num_val - 1)],BGWeapontype_Lastselected);
		if(BG_Attack_Selected_Player) BGuard_Send_After_PlayerPED(players[ChangeNetPlayer].id, PLAYER_CHAR(players[ChangeNetPlayer].id));
	}
	else if(SelectedItem == 19){ //Broken
		int model[2];
		model[0] = MODEL_F_Y_FF_CLUCK_R;
		model[1] = MODEL_M_Y_FF_CLUCK_R;
		Spawn_BGuards(PLAYER_CHAR(players[ChangeNetPlayer].id),model[(menu_item[SelectedItem].num_val - 1)],BGWeapontype_Lastselected);
		if(BG_Attack_Selected_Player) BGuard_Send_After_PlayerPED(players[ChangeNetPlayer].id, PLAYER_CHAR(players[ChangeNetPlayer].id));
		SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_HELMET, true);
		GIVE_PED_HELMET(pPlayer);
		
	}
	else if(SelectedItem == 20){ //Homo
		int model[2];
		model[0] = MODEL_M_M_GAYMID; //= admin command change model homo
		model[1] = MODEL_M_Y_GAYYOUNG;
		Spawn_BGuards(PLAYER_CHAR(players[ChangeNetPlayer].id),model[(menu_item[SelectedItem].num_val - 1)],BGWeapontype_Lastselected);
		if(BG_Attack_Selected_Player) BGuard_Send_After_PlayerPED(players[ChangeNetPlayer].id, PLAYER_CHAR(players[ChangeNetPlayer].id));
	}
	else if(SelectedItem == 21){ //Singleplayer
		int model[9];		
		model[0] = MODEL_IG_LILJACOB; 
		model[1] = MODEL_IG_BRUCIE;
		model[2] = MODEL_IG_ROMAN;
		model[3] = MODEL_IG_DWAYNE;
		model[4] = MODEL_IG_BADMAN;
		model[5] = MODEL_IG_DMITRI;
		model[6] = MODEL_IG_MICHELLE;
		model[7] = MODEL_IG_PACKIE_MC;
		model[8] = MODEL_IG_PLAYBOY_X;
		Spawn_BGuards(PLAYER_CHAR(players[ChangeNetPlayer].id),model[(menu_item[SelectedItem].num_val - 1)],BGWeapontype_Lastselected);
		if(BG_Attack_Selected_Player) BGuard_Send_After_PlayerPED(players[ChangeNetPlayer].id, PLAYER_CHAR(players[ChangeNetPlayer].id));
	}
}


void MD_Attachments_Guard_Action(void){
	NETWORK_FIRST_FOUR_ITEMS_MENU_ACTION();		
	//Jumpover 5
	if(SelectedItem == 6){
		renew_attached = !renew_attached;
		menu_item[SelectedItem].extra_val = renew_attached;
		Alert_Two("~BLIP_76~ ~c~Clear Objects before attaching new ones", renew_attached ? PrintON : PrintOFF ,false); 	
	}	
	if(SelectedItem == 7){//8 Cubes
		float obj_x , obj_y, obj_z, obj_rx, obj_ry, obj_rz;
		int pedbone;
		Object object;
		if(renew_attached)Delete_Objects_BGuards();
		if(menu_item[SelectedItem].num_val == 1)object = 0x2718C626, pedbone = 0, obj_x = -0.0257, obj_y = 0.0198, obj_z = -1.4678, obj_rx = 0, obj_ry = 0, obj_rz = 5.4700;
		else if(menu_item[SelectedItem].num_val == 2)object = 0x5C5030D4, pedbone = 0, obj_x = -0.0257, obj_y = 0.0198, obj_z = -1.4678, obj_rx = 0, obj_ry = 0, obj_rz = 5.4700;
		else if(menu_item[SelectedItem].num_val == 3)object = 0xCCEA11CA, pedbone = 0, obj_x = -0.0257, obj_y = 0.0198, obj_z = -1.4678, obj_rx = 0, obj_ry = 0, obj_rz = 5.4700;
		else if(menu_item[SelectedItem].num_val == 4)object = 0xBB1F6E71, pedbone = 0, obj_x = -0.0257, obj_y = 0.0198, obj_z = -1.4678, obj_rx = 0, obj_ry = 0, obj_rz = 5.4700;
		else if(menu_item[SelectedItem].num_val == 5)object = 0xDD28B247, pedbone = 0, obj_x = -0.0257, obj_y = 0.0198, obj_z = -1.4678, obj_rx = 0, obj_ry = 0, obj_rz = 5.4700;
		else if(menu_item[SelectedItem].num_val == 6)object = 0xA6E545FD, pedbone = 0, obj_x = -0.0257, obj_y = 0.0198, obj_z = -1.4678, obj_rx = 0, obj_ry = 0, obj_rz = 5.4700;
		else if(menu_item[SelectedItem].num_val == 7){				
			Attach_Objects_BGuards( 0x2718C626,0,1,0.0,0.0,0.0,0.0,3.0,0);
			Attach_Objects_BGuards( 0xDD28B247,0,-1,0.0,0.0,0.0,0.0,3.0,1);
			Attach_Objects_BGuards( 0xCCEA11CA,0,0,1,0.0,0.0,0.0,3.0,2);
			Attach_Objects_BGuards( 0xBB1F6E71,0,0,-1,0.0,0.0,0.0,3.0,3);
			Attach_Objects_BGuards( 0xA6E545FD,0,0,0.0,1,0.0,0.0,3.0,4);
			Attach_Objects_BGuards( 0x5C5030D4,0,0,0.0,-1,0.0,0.0,3.0,5);		
			Alert("~BLIP_76~ ~c~Attached Cubeman",false);
		}
		if(menu_item[SelectedItem].num_val > 0 &&  menu_item[SelectedItem].num_val < 8){
			Attach_Objects_BGuards( object,pedbone,obj_x, obj_y, obj_z, obj_rx, obj_ry,obj_rz,0);
			Alert("~BLIP_76~ ~c~Selected Object Attached",false);
		}
		else if(menu_item[SelectedItem].num_val == 8){
		Delete_Objects_BGuards();
		}	
	}
	else if(SelectedItem == 8){//12 Hands
		if(renew_attached)Delete_Objects_BGuards();
		if(menu_item[SelectedItem].num_val == 1){//Umbrella
			Attach_Objects_BGuards(-797519906,BONE_RIGHT_HAND, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,0.0000,0);
		}
		else if(menu_item[SelectedItem].num_val == 2){
			Attach_Objects_BGuards( -853576856,BONE_RIGHT_HAND, 0.0000, 0.0000, 0.0000, 0.1400, 6.2300,0.0000,0);
			Alert("~BLIP_76~ ~c~Umbrella 2",false);
		}
		else if(menu_item[SelectedItem].num_val == 3){
			Attach_Objects_BGuards( -1159420742,BONE_RIGHT_HAND, 0.0000, 0.0000, 0.0000, 0.1400, 6.2300,0.0000,0);
			Alert("~BLIP_76~ ~c~Umbrella 3",false);
		}
		else if(menu_item[SelectedItem].num_val == 4){
			Attach_Objects_BGuards( -853576856,BONE_RIGHT_HAND, 0.1311, -0.0010, 0.1784, 0.0000, 1.5200,0.0000,0);
			Alert("~BLIP_76~ ~c~Gunbrella 1",false);
		}
		else if(menu_item[SelectedItem].num_val == 5){
			Attach_Objects_BGuards( -1159420742,BONE_RIGHT_HAND, 0.1311, -0.0010, 0.1784, 0.0000, 1.5200,0.0000,0);
			Alert("~BLIP_76~ ~c~Gunbrella 2",false);
		}
		else if(menu_item[SelectedItem].num_val == 6){
			Attach_Objects_BGuards( -797519906,BONE_RIGHT_HAND, 0.1311, -0.0010, 0.1784, 0.0000, 1.5200,0.0000,0);
			Alert("~BLIP_76~ ~c~Gunbrella 3",false);
		}
		else if(menu_item[SelectedItem].num_val == 7){//Shopping bag				
			Attach_Objects_BGuards(1643885955,BONE_RIGHT_HAND, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,0.0000,0);
		}
		else if(menu_item[SelectedItem].num_val == 8){//Luggage				
			Attach_Objects_BGuards(-647773926,BONE_RIGHT_HAND, 0.2806, 0.0000, 0, 6.3000, 4.7000,0.0000,0);
			Attach_Objects_BGuards(-647773926,BONE_LEFT_HAND,  0.2806, 0.0000,0, 6.3000, 4.7000,0.0000,1);
		}
		else if(menu_item[SelectedItem].num_val == 9){			
			Attach_Objects_BGuards( -311280716,BONE_RIGHT_HAND,  -0.1000, 0.0000, 0, 0.0000, 1.2500,0.0000,0);
			Attach_Objects_BGuards( -311280716,BONE_LEFT_HAND,  -0.1000, 0.0000, 0, 0.0000, 1.6000,0.0000,1);
		}		
		else if(menu_item[SelectedItem].num_val == 10){				
			Attach_Objects_BGuards( 1443084780,BONE_RIGHT_HAND, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,0.0000,0);
			Attach_Objects_BGuards( -886669251,BONE_RIGHT_HAND, 0.4628, -0.0037, 0.0618, 0.0000, 3.1899,0.0000,1);
			Attach_Objects_BGuards( -771659842,BONE_RIGHT_HAND, -0.0232, 0.0232, 0.0918, 0.0000, 4.7500,0.0000,2);
			Alert("~BLIP_76~ ~c~Glowgun",false);//hand
		}
		else if(menu_item[SelectedItem].num_val == 11){				
			Attach_Objects_BGuards( 1758564455,BONE_RIGHT_HAND, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,0.0000,0);
			Attach_Objects_BGuards( 758835816,BONE_RIGHT_HAND, 0.0650, -0.0227, 0.6113, 4.6200, 1.5100,0.5300,1);
			Attach_Objects_BGuards( 758835816,BONE_RIGHT_HAND, 0.1100, -0.0618, 0.6185, 1.5400, 1.5100,0.5300,2);
			Alert("~BLIP_76~ ~c~Lightsaber",false);//hand
		}
		else if(menu_item[SelectedItem].num_val == 12){//Luggage				
			Attach_Objects_BGuards( 1735854596,BONE_RIGHT_HAND, -0.0117, -0.0007, 0.0075, 6.2600, 4.0699,0.0600,0);
			Attach_Objects_BGuards( 1166402234,BONE_RIGHT_HAND, 0.4756, -0.0022, 0.0484, 4.8100, 4.7600,0.0000,1);
			Attach_Objects_BGuards( 1166402234,BONE_RIGHT_HAND, 0.4756, -0.0022, 0.0591, 1.6600, 4.7600,0.0000,2);
			Attach_Objects_BGuards( -886669251,BONE_RIGHT_HAND, 0.5622, 0.0751, 0.0427, 0.0000, 0.0000,3.2500,3);
			Alert("~BLIP_76~ ~c~LaserGun",false);
		}
		else if(menu_item[SelectedItem].num_val == 13){			
			Attach_Objects_BGuards( 1735854596,BONE_RIGHT_HAND, -0.0117, -0.0007, 0.0075, 6.2600, 4.0699,0.0600,0);
			Attach_Objects_BGuards( 1516578222,BONE_RIGHT_HAND, 0.4661, 0.0144, 0.0529, 0.0000, 0.0000,4.7800,1);
			Alert("~BLIP_76~ ~c~RocketGun",false);
		}		
		else if(menu_item[SelectedItem].num_val == 14){				
			Attach_Objects_BGuards( 897930585,BONE_RIGHT_HAND, 0.2461, 0.0285, -0.0447, 0.0000, 0.1000,0.0000,0);
			Attach_Objects_BGuards( 897930585,BONE_RIGHT_HAND, 0.2461, 0.0285, -0.0447, 1.0000, 0.1000,0.0000,1);
			Attach_Objects_BGuards( 897930585,BONE_RIGHT_HAND, 0.2461, 0.0285, -0.0447, 2.0000, 0.1000,0.0000,2);
			Attach_Objects_BGuards( 897930585,BONE_RIGHT_HAND, 0.2461, 0.0285, -0.0447, 3.0000, 0.1000,0.0000,3);
			Attach_Objects_BGuards( 897930585,BONE_RIGHT_HAND, 0.2461, 0.0285, -0.0447, 4.0000, 0.1000,0.0000,4);
			Attach_Objects_BGuards( 897930585,BONE_RIGHT_HAND, 0.2461, 0.0285, -0.0447, 5.0000, 0.1000,0.0000,5);
			Alert("~BLIP_76~ ~c~TurboM4",false);
		}
		else if(menu_item[SelectedItem].num_val == 15){				
			Attach_Objects_BGuards( 1554952292,BONE_RIGHT_HAND, 0.1344, 0.0079, 0.0156, 0.4500, 0.0000,0.0000,0);
			Attach_Objects_BGuards( 1554952292,BONE_RIGHT_HAND, 0.1344, 0.0079, 0.0156, 1.5000, 0.0000,0.0000,1);
			Attach_Objects_BGuards( 1554952292,BONE_RIGHT_HAND, 0.1344, 0.0079, 0.0156, 2.5500, 0.0000,0.0000,2);
			Attach_Objects_BGuards( 1554952292,BONE_RIGHT_HAND, 0.1344, 0.0079, 0.0156, 3.6000, 0.0000,0.0000,3);
			Attach_Objects_BGuards( 1554952292,BONE_RIGHT_HAND, 0.1344, 0.0079, 0.0156, 4.6500, 0.0000,0.0000,4);
			Attach_Objects_BGuards( 1554952292,BONE_RIGHT_HAND, 0.1344, 0.0079, 0.0156, 5.7000, 0.0000,0.0000,5);
			Alert("~BLIP_76~ ~c~TurboDeagle",false);
		}
		else if(menu_item[SelectedItem].num_val == 16){				
			Attach_Objects_BGuards( 1443084780,BONE_RIGHT_HAND, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,0.1100,0);
			Attach_Objects_BGuards( 945404608,BONE_RIGHT_HAND, -0.3094, 0.0000, 0.0000, 0.0300, 4.8100,0.0400,1);
			Attach_Objects_BGuards( 1005973733,BONE_RIGHT_HAND, 0.0000, 0.0000, 0.0000, 5.8700, 5.8400,1.6000,2);
			Attach_Objects_BGuards( 1781111577,BONE_RIGHT_HAND, 0.1972, 0.0000, 0.0000, 5.8600, 5.8400,1.6000,3);
			Attach_Objects_BGuards( 1781111577,BONE_RIGHT_HAND, 0.1972, 0.0000, 0.0000, 5.8600, 5.8400,1.6000,4);
			Attach_Objects_BGuards( -771659842,BONE_RIGHT_HAND, 0.3189, 0.0000, 0.0000, 0.0300, 1.4700,0.0000,5);
			Alert("~BLIP_76~ ~c~Disco Launcher",false);
		}
		else if(menu_item[SelectedItem].num_val == 17){				
			Attach_Objects_BGuards( 2084514704,BONE_HEAD, -0.4178, 0.3060, -0.1397, 1.4000, 5.6700,1.5500,0);
			Alert("~BLIP_76~ ~c~SaxPlayer",false);
		}					
		else if(menu_item[SelectedItem].num_val == 18){
		Delete_Objects_BGuards();
		}		
	}
	else if(SelectedItem == 9){	//12 Tools	 
		if(renew_attached)Delete_Objects_BGuards();
		if(menu_item[SelectedItem].num_val == 1){//Saw				
			Attach_Objects_BGuards( 843240193,BONE_RIGHT_HAND, 0.1672, -0.0931, 0.7556, 6.1500, 3.2400,0.0000,0);
			Alert("~BLIP_76~ ~c~Cane",false);
		}
		else if(menu_item[SelectedItem].num_val == 2){//Axe
			Attach_Objects_BGuards( 843240193,BONE_RIGHT_HAND, 0.1672, -0.0931, 0.7556, 6.1500, 3.2400,0.0000,0);
			Attach_Objects_BGuards( -886669251,BONE_RIGHT_HAND, 0.1694, -0.1615, 1.1096, 5.9500, 1.7300,5.1900,1);
			Alert("~BLIP_76~ ~c~Cane v2",false);
		}
		else if(menu_item[SelectedItem].num_val == 3){//Jackhammer				
			Attach_Objects_BGuards( 2113166995,BONE_RIGHT_HAND, 0.0661, -0.0422, 0.2706, 0.1200, 0.0200,0.0000,0);
			Alert("~BLIP_76~ ~c~Slegehammer",false);
		}
		else if(menu_item[SelectedItem].num_val == 4){//Pickaxe
			Attach_Objects_BGuards( -257284559,BONE_RIGHT_HAND, 0.0417, -0.0290, 0.1885, 0.1200, 6.2500,0.0000,0);
			Alert("~BLIP_76~ ~c~Pickaxe",false);
		}
		else if(menu_item[SelectedItem].num_val == 5){//Rake
			Attach_Objects_BGuards( -1813753615,BONE_RIGHT_HAND, 0.0311, 0.0000, 0.0000, 0.2800, 5.9000,0.1600,0);
			Alert("~BLIP_76~ ~c~Broom",false);
		}
		else if(menu_item[SelectedItem].num_val == 6){//Bighammer
			Attach_Objects_BGuards( 1892875956,BONE_RIGHT_HAND, 0.0417, 0.0000, 0.0000, 0.2000, 5.9500,6.1300,0);
			Alert("~BLIP_76~ ~c~Rake",false);
		}
		else if(menu_item[SelectedItem].num_val == 7){//Nailgun
			Attach_Objects_BGuards( 1530440164,BONE_RIGHT_HAND, 0.0228, 0.0544, -0.1390, 4.8500, 3.6899,2.6400,0);
			Alert("~BLIP_76~ ~c~Spade",false);
		}
		else if(menu_item[SelectedItem].num_val == 8){
			Attach_Objects_BGuards( 1409043984,BONE_RIGHT_HAND, 0.1472, -0.0093, -0.1719, 0.1500, 0.0800,0.0000,0);
			Alert("~BLIP_76~ ~c~Wrench",false);
		}			
		else if(menu_item[SelectedItem].num_val == 9){//Saw				
			Attach_Objects_BGuards(-1977261975,BONE_RIGHT_HAND,  0.3317, 0.0000,0, 0.1000, 0.4500,3.1700,0);
		}
		else if(menu_item[SelectedItem].num_val == 10){//Axe
			Attach_Objects_BGuards( 824817939,BONE_RIGHT_HAND, 0.1117, -0.0178, 0.2023, 6.1400, 6.2600,3.2499,0);
		}
		else if(menu_item[SelectedItem].num_val == 11){//Jackhammer				
			Attach_Objects_BGuards(1234161243,BONE_RIGHT_HAND, 0, 0.0061,-0.0086, 0.0000, 0.0000,5.9600,0);
		}
		else if(menu_item[SelectedItem].num_val == 12){//Pickaxe
			Attach_Objects_BGuards(-257284559,BONE_RIGHT_HAND, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,0.0000,0);
		}
		else if(menu_item[SelectedItem].num_val == 13){//Rake
			Attach_Objects_BGuards(1892875956,BONE_RIGHT_HAND, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,0.0000,0);
		}
		else if(menu_item[SelectedItem].num_val == 14){//Bighammer
			Attach_Objects_BGuards( 2113166995,BONE_RIGHT_HAND, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,0.0000,0);
		}
		else if(menu_item[SelectedItem].num_val == 15){//Nailgun
			Attach_Objects_BGuards( -1576276196,BONE_RIGHT_HAND, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,0.0000,0);
			Alert("~BLIP_76~ ~c~Nailgun",false); // hand
		}
		else if(menu_item[SelectedItem].num_val == 16){
			Attach_Objects_BGuards( 702063252,BONE_RIGHT_HAND, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,0.0000,0);
			Alert("~BLIP_76~ ~c~Hammer",false); //hand
		}
		else if(menu_item[SelectedItem].num_val == 17){
			Attach_Objects_BGuards( 2002027012,BONE_RIGHT_HAND, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,0.0000,0);
			Alert("~BLIP_76~ ~c~Drill",false);//hand
		}
		else if(menu_item[SelectedItem].num_val == 18){
			Attach_Objects_BGuards( -1813753615,BONE_RIGHT_HAND, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,0.0000,0);
			Alert("~BLIP_76~ ~c~Broom",false);//hand
		}
		else if(menu_item[SelectedItem].num_val == 19){
			Attach_Objects_BGuards( -805425417,BONE_LEFT_HAND, 0.1594, 0.0154, -0.0039, 4.4200, 5.4500,0.0000,0);
			Alert("~BLIP_76~ ~c~Laptop, use swat stride",false);//hand
		}
		else if(menu_item[SelectedItem].num_val == 20){
		Delete_Objects_BGuards();
		}			
	}
	else if(SelectedItem == 10){//11 Lights
		if(renew_attached)Delete_Objects_BGuards();
		if(menu_item[SelectedItem].num_val == 1){
			Attach_Objects_BGuards(-886669251,BONE_SPINE3, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,0.0000,0);
		}
		else if(menu_item[SelectedItem].num_val == 2){
			Attach_Objects_BGuards( 608452317,BONE_SPINE2, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,3.0000,0);
			Alert("~BLIP_76~ ~c~Yellow Glow",false);//body
		}
		else if(menu_item[SelectedItem].num_val == 3){
			Attach_Objects_BGuards( -55367575,BONE_SPINE2, 0.0000, 0.0000, 0.0000, 0.0000, 4.7500,3.0000,0);
			Alert("~BLIP_76~ ~c~White Glow",false);//body
		}
		else if(menu_item[SelectedItem].num_val == 4){
			Attach_Objects_BGuards( 608452317,BONE_HEAD, 0.0050, -0.0394, 0.0011, 0.0000, 0.0000,3.2000,0);
			Alert("~BLIP_76~ ~c~Lampface",false);//head
		}
		else if(menu_item[SelectedItem].num_val == 5){
			Attach_Objects_BGuards( -771659842,0, -0.0348, 0.0285, -1.8233, 0, 0,0,0);
			Attach_Objects_BGuards( -771659842,0, -0.0348, 0.0285, -1.8233, 0, 0,0,1);
			Attach_Objects_BGuards( -771659842,0, -0.0348, 0.0285, -1.8233, 0, 0,0,2);
			Alert("~BLIP_76~ ~c~Blue Neon",false);
		}
		else if(menu_item[SelectedItem].num_val == 6){
			Attach_Objects_BGuards( 760821872,0,-0.930, -0.2597, -2.9028, 3.9899, 6.2600,5.7800,0);
			Attach_Objects_BGuards( 760821872,0,-0.930, -0.2597, -2.9028, 3.9899, 6.2600,5.7800,1);
			Alert("~BLIP_76~ ~c~White Neon",false);
		}
		else if(menu_item[SelectedItem].num_val == 7){
			Attach_Objects_BGuards( 1781111577,0, 0.0953, 0.1401, -1.3233,4.2000, 0.0400,2.3625,0);
			Attach_Objects_BGuards( 1781111577,0, 0.0953, 0.1401, -1.3233,4.2000, 0.0400,2.3625,1);
			Attach_Objects_BGuards( 1781111577,0, 0.0953, 0.1401, -1.3233,4.2000, 0.0400,2.3625,2);
			Alert("~BLIP_76~ ~c~Purple Flash ",false);
		}
		else if(menu_item[SelectedItem].num_val == 8){
			Attach_Objects_BGuards( 1005973733,0,0.0577, -0.1013, -2.5672,4.200, 0,0,0);
			Attach_Objects_BGuards( 1005973733,0,0.0577, -0.1013, -2.5672,4.200, 0,0,1);
			Attach_Objects_BGuards( 1005973733,0,0.0577, -0.1013, -2.5672,4.200, 0,0,2);
			Alert("~BLIP_76~ ~c~Green Flash",false);
		}
		else if(menu_item[SelectedItem].num_val == 9){
			Attach_Objects_BGuards( -886669251,BONE_RIGHT_HAND, 0.0000, 0.0000, 0.0000, 1.1400, 2.8499,6.1600,0);
			Attach_Objects_BGuards( -886669251,BONE_LEFT_HAND, 0.0000, 0.0000, 0.0000, 1.1400, 3.2799,6.1600,1);
			Alert("~BLIP_76~ ~c~Red Hands",false);
		}
		else if(menu_item[SelectedItem].num_val == 10){
			Attach_Objects_BGuards( -771659842,BONE_RIGHT_HAND, -0.6161, 0.0079, -0.1696, 6.2900, 1.2900,0.0000,0);
			Attach_Objects_BGuards( -771659842,BONE_LEFT_HAND, -0.6161, 0.0079, -0.1696, 6.3500, 1.2900,0.0000,1);
			Alert("~BLIP_76~ ~c~Blue Hands",false);
		}			
		else if(menu_item[SelectedItem].num_val == 11){
			Delete_Objects_BGuards();
		}				
	}
	else if(SelectedItem == 11){//2 Various
		if(renew_attached)Delete_Objects_BGuards();
		if(menu_item[SelectedItem].num_val == 1){
			if(renew_attached)Delete_Objects_BGuards();
			Attach_Objects_BGuards(-1512691932,BONE_HEAD, 28.0000, 0.0000, 0, 0.0000, 1.5000,0.0000,0);
		}
		else if(menu_item[SelectedItem].num_val == 2){
			Delete_Objects_BGuards();
		}
	}
	else if(SelectedItem == 12){//5 Fire
		if(renew_attached)Delete_Objects_BGuards();
		if(menu_item[SelectedItem].num_val == 1){			
			Attach_Objects_BGuards( 945404608,BONE_RIGHT_FOOT, 0.0000, 0.0000, 0.0000, 0.0000, 4.7200,0.0000,0);
			Attach_Objects_BGuards( 945404608,BONE_LEFT_FOOT, 0.0000, 0.0000, 0.0000, 0.0700, 4.8400,0.0000,1);
		}
		else if(menu_item[SelectedItem].num_val == 2){
			if(renew_attached)Delete_Objects_BGuards();
			Attach_Objects_BGuards( 945404608,BONE_RIGHT_HAND, 0.0000, 0.0000, 0.0000, 0.2000, 1.2200,0.0000,0);
			Attach_Objects_BGuards( 945404608,BONE_LEFT_HAND, 0.0000, 0.0000, 0.0000, 0.2000, 1.7100,0.0000,1);
		}
		else if(menu_item[SelectedItem].num_val == 3){
			if(renew_attached)Delete_Objects_BGuards();
			Attach_Objects_BGuards( 945404608,BONE_PELVIS, 0.0000, 0.0000, 0.0000, 5.0200, 1.4500,0.0000,0);
		}
		else if(menu_item[SelectedItem].num_val == 4){			
			Attach_Objects_BGuards( -215358907,0,-1.3342, 1.0025, -3.6306, 0, 0,0,0);
			Alert("~BLIP_76~ ~c~Flame",false);
		}
		else if(menu_item[SelectedItem].num_val == 5){			
			Attach_Objects_BGuards( 451384443,BONE_PELVIS, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,0.0000,0);
			Attach_Objects_BGuards( 451384443,BONE_PELVIS, 0.0000, 0.0000, 0.0000, 0.0000, 5.5125,0.0000,1);
			Attach_Objects_BGuards( 451384443,BONE_PELVIS, 0.0000, 0.0000, 0.0000, 0.0000, 4.7250,0.0000,2);
			Attach_Objects_BGuards( 451384443,BONE_PELVIS, 0.0000, 0.0000, 0.0000, 0.0000, 3.9375,0.0000,3);
			Attach_Objects_BGuards( 451384443,BONE_PELVIS, 0.0000, 0.0000, 0.0000, 0.0000, 3.1500,0.0000,4);
			Attach_Objects_BGuards( 451384443,BONE_PELVIS, 0.0000, 0.0000, 0.0000, 0.0000, 2.3625,0.0000,5);
			Attach_Objects_BGuards( 451384443,BONE_PELVIS, 0.0000, 0.0000, 0.0000, 0.0000, 1.5750,0.0000,6);
			Attach_Objects_BGuards( 451384443,BONE_PELVIS, 0.0000, 0.0000, 0.0000, 0.0000, 0.7875,0.0000,7);
			Attach_Objects_BGuards( 451384443,BONE_PELVIS, 0.0000, 0.0000, 0.0000, 5.5125, 0.0000,0.0000,8);
			Attach_Objects_BGuards( 451384443,BONE_PELVIS, 0.0000, 0.0000, 0.0000, 4.7250, 0.0000,0.0000,9);
			Attach_Objects_BGuards( 451384443,BONE_PELVIS, 0.0000, 0.0000, 0.0000, 3.9375, 0.0000,0.0000,10);
			Attach_Objects_BGuards( 451384443,BONE_PELVIS, 0.0000, 0.0000, 0.0000, 2.3625, 0.0000,0.0000,11);
			Attach_Objects_BGuards( 451384443,BONE_PELVIS, 0.0000, 0.0000, 0.0000, 1.5750, 0.0000,0.0000,12);
			Attach_Objects_BGuards( 451384443,BONE_PELVIS, 0.0000, 0.0000, 0.0000, 0.7875, 0.0000,0.0000,13);
			Attach_Objects_BGuards( 451384443,BONE_PELVIS, 0.0000, 0.0000, 0.0000, 5.5125, 4.7250,0.0000,14);
			Attach_Objects_BGuards( 451384443,BONE_PELVIS, 0.0000, 0.0000, 0.0000, 2.3625, 4.7250,0.0000,15);
			Attach_Objects_BGuards( 451384443,BONE_PELVIS, 0.0000, 0.0000, 0.0000, 3.9375, 4.7250,0.0000,16);
			Attach_Objects_BGuards( 451384443,BONE_PELVIS, 0.0000, 0.0000, 0.0000, 0.7875, 4.7250,0.0000,17);
			Attach_Objects_BGuards( 451384443,BONE_PELVIS, 0.0000, 0.0000, 0.0000, 0.0800, 0.1000,0.8000,18);
			Attach_Objects_BGuards( 451384443,BONE_PELVIS, 0.0000, 0.0000, 0.0000, 5.4400, 5.8200,0.3525,19);
			Attach_Objects_BGuards( 451384443,BONE_PELVIS, 0.0000, 0.0000, 0.0000, 4.1100, 0.1300,0.5825,20);
			Attach_Objects_BGuards( 451384443,BONE_PELVIS, 0.0000, 0.0000, 0.0000, 2.2199, 5.9500,0.5825,21);
			Attach_Objects_BGuards( 451384443,BONE_PELVIS, 0.0000, 0.0000, 0.0000, 2.8899, 5.3300,1.1525,22);
			Attach_Objects_BGuards( 451384443,BONE_PELVIS, 0.0000, 0.0000, 0.0000, 3.3299, 0.9600,1.1525,23);
			Attach_Objects_BGuards( 451384443,BONE_PELVIS, 0.0000, 0.0000, 0.0000, 2.3799, 2.6400,1.1525,24);
			Attach_Objects_BGuards( 451384443,BONE_PELVIS, 0.0000, 0.0000, 0.0000, 3.4299, 2.2800,1.1525,25);
			Alert("~BLIP_76~ ~c~FireBall",false);
		}			
		else if(menu_item[SelectedItem].num_val == 6){
			Delete_Objects_BGuards();
		}			
	}
	else if(SelectedItem == 13){//4	Feet
		if(renew_attached)Delete_Objects_BGuards();
		if(menu_item[SelectedItem].num_val == 1){
			Attach_Objects_BGuards( 608452317,BONE_RIGHT_FOOT, 0.1644, 0.0413, -0.0058, 0.0000, 0.0000,4.7500,0);
			Attach_Objects_BGuards( 608452317,BONE_LEFT_FOOT, 0.1644, 0.0413, -0.0058, 0.0000, 0.0000,4.7500,1);
			Alert("~BLIP_76~ ~c~Sneakers",false);//feet
		}
		else if(menu_item[SelectedItem].num_val == 2){				
			Attach_Objects_BGuards(-1951625347,BONE_RIGHT_TOE, 0.0000, 0.0000, 0.0000, 0.0000, 5.0000,0.0000,0);
			Attach_Objects_BGuards(-1951625347,BONE_LEFT_TOE, 0.0000, 0.0000, 0.0000, 0.0000, 5.0000,0.0000,1);
			Attach_Objects_BGuards(-1951625347,BONE_RIGHT_FOOT, 0.0000, 0.0000, 0.0000, 0.0000, 3.5099,0.0000,2);
			Attach_Objects_BGuards(-1951625347,BONE_LEFT_FOOT, 0.0000, 0.0000, 0.0000, 0.0000, 5.9600,0.0000,3);
		}
		else if(menu_item[SelectedItem].num_val == 3){
			Attach_Objects_BGuards(983294893,BONE_RIGHT_TOE, 0.0000, 0.0000, 0.0000, 0.0000, 5.0000,0.0000,0);
			Attach_Objects_BGuards(983294893,BONE_LEFT_TOE, 0.0000, 0.0000, 0.0000, 0.0000, 5.0000,0.0000,1);
			Attach_Objects_BGuards(983294893,BONE_RIGHT_FOOT, 0.0000, 0.0000, 0.0000, 0.0000, 3.5099,0.0000,2);
			Attach_Objects_BGuards(983294893,BONE_LEFT_FOOT, 0.0000, 0.0000, 0.0000, 0.0000, 5.9600,0.0000,3);
		}		
		else if(menu_item[SelectedItem].num_val == 4){
			Delete_Objects_BGuards();
		}
	}
	else if(SelectedItem == 14){//13 Head
		if(renew_attached)Delete_Objects_BGuards();
		if(menu_item[SelectedItem].num_val == 1){
			Attach_Objects_BGuards(-316400372,BONE_HEAD,  0.0161, 0.0286, 0.0004, 3.1599, 4.7300,0.0000,0);//no
			Alert("~BLIP_76~ ~c~Ugly Face",false);
		}
		else if(menu_item[SelectedItem].num_val == 2){			
			Attach_Objects_BGuards(760821872,BONE_HEAD, -0.1133, -0.0451, 0.0136, 3.0299, 4.6500,0.0000,0);//no
			Alert("~BLIP_76~ ~c~Welder Mask",false);
		}
		else if(menu_item[SelectedItem].num_val == 3){			
			Attach_Objects_BGuards(1781111577,BONE_HEAD, 0.0000, 0.0000, 0.0000, 2.4699, 4.6100,0.0000,0);//ok
			Alert("~BLIP_76~ ~c~Purple Flasher",false);
		}
		else if(menu_item[SelectedItem].num_val == 4){			
			Attach_Objects_BGuards(1005973733,BONE_HEAD, 0, 0.1382, -0.0075, 2.5600, 4.6200,0.0000,0);//ok
			Alert("~BLIP_76~ ~c~Green Flasher",false);
		}
		else if(menu_item[SelectedItem].num_val == 5){			
			Attach_Objects_BGuards(-1218037800,BONE_HEAD, -0.1944, 0.0000,0, 4.7700, 6.1700,4.7250,0);//no
			Alert("~BLIP_76~ ~c~White Torch",false);
		}
		else if(menu_item[SelectedItem].num_val == 6){			
			Attach_Objects_BGuards(-21824081,BONE_HEAD, 0.5289, 0.0000, 0, 0.1300, 1.5000,0.0000,0);//no
			Alert("~BLIP_76~ ~c~Discoball",false);
		}
		else if(menu_item[SelectedItem].num_val == 7){			
			Attach_Objects_BGuards(529682743,BONE_HEAD,0.1267, 0.0000, 0, 0.3200, 1.5000,0.0000,0);
			Attach_Objects_BGuards(-771659842,BONE_HEAD, 0.1300, 0.0000, 0, 0.3200, 1.5000,0.0000,1);
			Alert("~BLIP_76~ ~c~Conehead",false);//no
		}
		else if(menu_item[SelectedItem].num_val == 8){			
			Attach_Objects_BGuards( 2088780331,BONE_HEAD, 0.1411, 0.0000, 0, 2.9999, 4.6000,0.0000,0);
			Alert("~BLIP_76~ ~c~Pornhead",false);
		}
		else if(menu_item[SelectedItem].num_val == 9){			
			Attach_Objects_BGuards(-1732712585,BONE_HEAD, 0.0000, 0.0000, 0.0000, 5.9700, 1.9200,0.0000,0);
			Attach_Objects_BGuards(-1732712585,BONE_HEAD, 0.0000, 0.0000, 0.0000, 0.3300, 5.1400,3.1099,1);
			Alert("~BLIP_76~ ~c~Devils Horns",false);//ok
		}
		else if(menu_item[SelectedItem].num_val == 10){			
			Attach_Objects_BGuards(-596812191,BONE_HEAD, -0.0050, 0.0896, 0.0172, 0.0900, 1.5300,3.1500,0);
			Alert("~BLIP_76~ ~c~NightVision",false);
		}
		else if(menu_item[SelectedItem].num_val == 11){			
			Attach_Objects_BGuards( 702063252,BONE_HEAD, 0.0344, 0.0000, -0.2517, 0.0000, 0.3000,0.0000,0);
			Alert("~BLIP_76~ ~c~Hammerhead",false);//head
		}	
		else if(menu_item[SelectedItem].num_val == 12){				
			Attach_Objects_BGuards( -1321337085,BONE_HEAD, 0.0394, 0.2304, 0.0003, 4.7400, 0.0700,6.1300,0);
			Alert("~BLIP_76~ ~c~Pinokkio",false);//head
		}
		else if(menu_item[SelectedItem].num_val == 13){			
			Attach_Objects_BGuards( 357185076,BONE_HEAD, 0.2728, -0.0402, -0.0073, 2.9999, 4.7500,6.2800,0);
			Alert("~BLIP_76~ ~c~Red Hat",false);
		}
		else if(menu_item[SelectedItem].num_val == 14){			
			Attach_Objects_BGuards( 608440971,BONE_HEAD, 0.2911, -0.0275, 0.0000, 6.2900, 4.7000,3.0000,0);
			Alert("~BLIP_76~ ~c~Yellow Hat",false);
		}
		else if(menu_item[SelectedItem].num_val == 15){			
			Attach_Objects_BGuards( 831073557,BONE_HEAD, 0.2639, -0.0307, 0.0000, 0.1100, 1.5800,0,0);
			Alert("~BLIP_76~ ~c~Purple Hat",false);
		}	
		else if(menu_item[SelectedItem].num_val == 16){				
			Attach_Objects_BGuards( -1060426998,BONE_HEAD, 0.4328, -0.0418, 0.0065, 6.1900, 4.6900,0,0);
			Alert("~BLIP_76~ ~c~Black Hat",false);
		}			
		else if(menu_item[SelectedItem].num_val == 17){
			Delete_Objects_BGuards();
		}
	}
	else if(SelectedItem == 15){//8 Statue
		if(renew_attached)Delete_Objects_BGuards();
		if(menu_item[SelectedItem].num_val == 1){			
		Attach_Objects_BGuards(-556881908,BONE_HEAD,-0.45,-0.26, 0, 0, 6.300*0.75,3.150,0);
		Alert("~BLIP_76~ ~c~Bust/head 1",false);
		}
		else if(menu_item[SelectedItem].num_val == 2){
		Attach_Objects_BGuards(-316947286,BONE_HEAD ,-0.45,-0.25, 0, 0, 6.300*0.75,3.150,0);
		Alert("~BLIP_76~ ~c~Bust/head 2",false);
		}
		else if(menu_item[SelectedItem].num_val == 3){
		Attach_Objects_BGuards(-1671584977,BONE_HEAD,-0.4,-0.25, 0, 0, 6.300*0.75,3.150,0);
		Alert("~BLIP_76~ ~c~Bust/head 3",false);
		}
		else if(menu_item[SelectedItem].num_val == 4){
		Attach_Objects_BGuards(-1855419067,BONE_HEAD,-0.4,-0.25, 0, 0, 6.300*0.75,3.150,0);
		Alert("~BLIP_76~ ~c~Bust/head 4",false);
		}
		else if(menu_item[SelectedItem].num_val == 5){
		Attach_Objects_BGuards(-1078040080,BONE_HEAD,-0.4,-0.25, 0, 0, 6.300*0.75,3.150,0);
		Alert("~BLIP_76~ ~c~Bust/head 5",false);
		}
		else if(menu_item[SelectedItem].num_val == 6){
		Attach_Objects_BGuards(2056950190,0,-0.0060, 0.0267, 1.3283, 0, 0,3.150,0);
		Alert("~BLIP_76~ ~c~Golden Angel",false);
		}
		else if(menu_item[SelectedItem].num_val == 7){
		Attach_Objects_BGuards(1574992650,0,0.0241, 0.0968, -2.1717, 0, 0.0100,3.150,0);
		Alert("~BLIP_76~ ~c~Egypt Statue 1",false);
		}
		else if(menu_item[SelectedItem].num_val == 8){
		Attach_Objects_BGuards(555286908,0,0, 0.1247, -1.1856, 0, 0,3.150,0);
		Alert("~BLIP_76~ ~c~Egypt Statue 2",false);
		}
		else if(menu_item[SelectedItem].num_val == 8)Delete_Objects_BGuards();
	}
	else if(SelectedItem == 16){//4 Tribe
		if(renew_attached)Delete_Objects_BGuards();
		if(menu_item[SelectedItem].num_val == 1){
		Attach_Objects_BGuards(1175141365,BONE_HEAD, 0.0000, 0.0000, 0.0000, 0.4000, 1.5000,0.0000,0);
		Alert("~BLIP_76~ ~c~Tribe 1",false);//ok
		}
		else if(menu_item[SelectedItem].num_val == 2){
		Attach_Objects_BGuards(924329804,BONE_HEAD, 0.1122, 0.0, 0.0, 0.0000,4.7100,3.15000,0);
		Alert("~BLIP_76~ ~c~Tribe 2",false);//no
		}
		else if(menu_item[SelectedItem].num_val == 3){
		Attach_Objects_BGuards(924329804,BONE_HEAD, 0.1122, 0.0800, 0, 0.0000, 4.7100,3.1500,0);
		Alert("~BLIP_76~ ~c~Tribe 3",false);
		}
		else if(menu_item[SelectedItem].num_val == 4){
			Attach_Objects_BGuards( 1687106956,BONE_HEAD, 0.0000, 0.0000, 0.0000, 0.2400, 1.5500,0.0000,0);
			Alert("~BLIP_76~ ~c~Tribe 4",false);
		}	
		else if(menu_item[SelectedItem].num_val == 5){
			Attach_Objects_BGuards( 1175141365,BONE_HEAD, 0.0000, 0.0000, 0.0000, 0.1500, 1.5500,0.0000,0);
			Attach_Objects_BGuards( 1175141365,BONE_HEAD, 0.0000, 0.0000, 0.0000, 0.1500, 2.5500,0.0000,2);
			Attach_Objects_BGuards( 1175141365,BONE_HEAD, 0.0000, 0.0000, 0.0000, 0.1500, 0.5500,0.0000,3);
			Attach_Objects_BGuards( 1175141365,BONE_HEAD, 0.0000, 0.0000, 0.0000, 1.1500, 1.5500,0.0000,4);
			Attach_Objects_BGuards( 1175141365,BONE_RIGHT_CALF, 0.0000, 0.0000, 0.0000, 1.0000, 0.0000,0.0000,5);
			Attach_Objects_BGuards( 1175141365,BONE_LEFT_CALF, 0.0000, 0.0000, 0.0000, 2.0000, 0.0000,0.0000,6);
			Attach_Objects_BGuards( 1175141365,BONE_RIGHT_THIGH, 0.0000, 0.0000, 0.0000, 1.0000, 0.0000,0.0000,7);
			Attach_Objects_BGuards( 1175141365,BONE_LEFT_THIGH, 0.0000, 0.0000, 0.0000, 2.0000, 0.0000,0.0000,8);
			Attach_Objects_BGuards( 1175141365,BONE_PELVIS, 0.0000, 0.0000, 0.0000, 1.5000, 0.0000,0.0000,9);
			Attach_Objects_BGuards( 1175141365,BONE_RIGHT_FOREARM, 0.0000, 0.0000, 0.0000, 5.0000, 0.0000,0.0000,10);
			Attach_Objects_BGuards( 1175141365,BONE_LEFT_FOREARM, 0.0000, 0.0000, 0.0000, 5.0000, 0.0000,0.0000,11);
			Attach_Objects_BGuards( 1175141365,BONE_RIGHT_UPPERARM, 0.0000, 0.0000, 0.0000, 5.0000, 0.0000,0.0000,12);
			Attach_Objects_BGuards( 1175141365,BONE_LEFT_UPPERARM, 0.0000, 0.0000, 0.0000, 5.0000, 0.0000,0.0000,13);
			Attach_Objects_BGuards( 1175141365,BONE_SPINE3, 0.0000, 0.0000, 0.0000, 1.5000, 0.0000,0.0000,14);
			Alert("~BLIP_76~ ~c~TribeMan 1",false);
		}	
		else if(menu_item[SelectedItem].num_val == 6){
			Attach_Objects_BGuards( 1687106956,BONE_HEAD, 0.0000, 0.0000, 0.0000, 0.1500, 1.5500,0.0000,1);
			Attach_Objects_BGuards( 1687106956,BONE_HEAD, 0.0000, 0.0000, 0.0000, 0.1500, 2.5500,0.0000,2);
			Attach_Objects_BGuards( 1687106956,BONE_HEAD, 0.0000, 0.0000, 0.0000, 0.1500, 0.5500,0.0000,3);
			Attach_Objects_BGuards( 1687106956,BONE_HEAD, 0.0000, 0.0000, 0.0000, 1.1500, 1.5500,0.0000,4);
			Attach_Objects_BGuards( 1687106956,BONE_RIGHT_CALF, 0.0000, 0.0000, 0.0000, 1.0000, 0.0000,0.0000,5);
			Attach_Objects_BGuards( 1687106956,BONE_LEFT_CALF, 0.0000, 0.0000, 0.0000, 2.0000, 0.0000,0.0000,6);
			Attach_Objects_BGuards( 1687106956,BONE_RIGHT_THIGH, 0.0000, 0.0000, 0.0000, 1.0000, 0.0000,0.0000,7);
			Attach_Objects_BGuards( 1687106956,BONE_LEFT_THIGH, 0.0000, 0.0000, 0.0000, 2.0000, 0.0000,0.0000,8);
			Attach_Objects_BGuards( 1687106956,BONE_PELVIS, 0.0000, 0.0000, 0.0000, 1.5000, 0.0000,0.0000,9);
			Attach_Objects_BGuards( 1687106956,BONE_RIGHT_FOREARM, 0.0000, 0.0000, 0.0000, 5.0000, 0.0000,0.0000,10);
			Attach_Objects_BGuards( 1687106956,BONE_LEFT_FOREARM, 0.0000, 0.0000, 0.0000, 5.0000, 0.0000,0.0000,11);
			Attach_Objects_BGuards( 1687106956,BONE_RIGHT_UPPERARM, 0.0000, 0.0000, 0.0000, 5.0000, 0.0000,0.0000,12);
			Attach_Objects_BGuards( 1687106956,BONE_LEFT_UPPERARM, 0.0000, 0.0000, 0.0000, 5.0000, 0.0000,0.0000,13);
			Attach_Objects_BGuards( 1687106956,BONE_SPINE3, 0.0000, 0.0000, 0.0000, 1.5000, 0.0000,0.0000,14);
			Alert("~BLIP_76~ ~c~TribeMan 2",false);
		}	
		else if(menu_item[SelectedItem].num_val == 7)Delete_Objects_BGuards();
	}
	else if(SelectedItem == 17){//8 Funny
		if(renew_attached)Delete_Objects_BGuards();
		if(menu_item[SelectedItem].num_val == 1){
			Attach_Objects_BGuards( 0x322780D0,BONE_PELVIS, 0.0120, 0.1808, 0.0122, 4.8500, 1.5100,5.9500,0);
			Alert("~BLIP_76~ ~c~Dick",false);
		}
		else if(menu_item[SelectedItem].num_val == 2){
			Attach_Objects_BGuards( 0x6F181807,BONE_PELVIS, 0.0223, 0.2905, 0, 4.7500, 0.4900,5.9600,0);
			Alert("~BLIP_76~ ~c~Big dick",false);
		}
		else if(menu_item[SelectedItem].num_val == 3){
			Attach_Objects_BGuards( -1406190916,BONE_PELVIS, -0.0859, 0.3088, -0.1056, 4.6600, 0,0.0900,0);
			Alert("~BLIP_76~ ~c~Leprechaun (on crotch)",false);
		}
		else if(menu_item[SelectedItem].num_val == 4){
			Attach_Objects_BGuards( 0xDD16F3A4,0,0,-0.3,-1.7694,0,0,0,0);//Stop Sign
			Attach_Objects_BGuards( 0xDD16F3A4,0,0,0.3,-1.7694,0,0,3.150,1);//Stop Sign
			Attach_Objects_BGuards( 0xDD16F3A4,0,-0.3,0,-1.7694,0,0,4.7250,2);//Stop Sign
			Attach_Objects_BGuards( 0xDD16F3A4,0,0.3,0,-1.7694,0,0,1.5750,3);//Stop Sign
			Alert("~BLIP_76~ ~c~Stop sign!!",false);
		}			
		else if(menu_item[SelectedItem].num_val == 5){
			Attach_Objects_BGuards( 0x1B42315D, BONE_PELVIS,0.0025,0.0622,0, 0.0900,4.7200,3.0700,0);
			Alert("~BLIP_76~ ~c~Hippofied",false);
		}
		else if(menu_item[SelectedItem].num_val == 6){
			Attach_Objects_BGuards( 2005381825,BONE_SPINE3, 0, -0.2531, 0.1038, 0.0000, 1.5500,0.0000,0);	
			Alert("~BLIP_76~ ~c~Backpack",false);
		}
		else if(menu_item[SelectedItem].num_val == 7){//Devils Wings
			Attach_Objects_BGuards( 317353028,BONE_SPINE3,  0.0494, -0.2047,-0.2530, 3.9999, 5.9800,3.0000,0);
			Attach_Objects_BGuards( 317353028,BONE_SPINE3,  0.0494, -0.2047, 0.2499, 3.9999, 3.4000,3.0000,1);
		}
		else if(menu_item[SelectedItem].num_val == 8){//Devils Wings V3
			Attach_Objects_BGuards( 317353028,BONE_SPINE3, 0.0017, -0.1618, 0.1794, 0.8000, 6.1000,0.0000,0);
			Attach_Objects_BGuards( 317353028,BONE_SPINE3, -0.0833, -0.2998, 0.2888, 0.8600, 6.1400,0.0900,1);
			Attach_Objects_BGuards( 317353028,BONE_SPINE3, -0.2406, -0.4037, 0.3400, 0.8700, 6.0800,0.0900,2);
			Attach_Objects_BGuards( 317353028,BONE_SPINE3, 0.0433, -0.0818, -0.2505, 2.8900, 0.0000,0.0000,3);
			Attach_Objects_BGuards( 317353028,BONE_SPINE3, -0.0239, -0.1320, -0.4693, 2.8900, 6.1400,0.0600,4);
			Attach_Objects_BGuards( 317353028,BONE_SPINE3, -0.1900, -0.1780, -0.6459, 2.8900, 6.2500,0.0600,5);
		}			
		else if(menu_item[SelectedItem].num_val == 9){
			Delete_Objects_BGuards();
		}
	}
	else if(SelectedItem == 18){//4	Birds
		if(renew_attached)Delete_Objects_BGuards();
		if(menu_item[SelectedItem].num_val == 1){
			Attach_Objects_BGuards( -221252636,BONE_HEAD,-0.1, -0.0007,0.1728, 0, 1.3700,0,0);
			Alert("~BLIP_76~ ~c~Pigeon on shoulder",false);
		}
		if(menu_item[SelectedItem].num_val == 2){
			Attach_Objects_BGuards( -221252636,BONE_HEAD,-0.1, -0.0007,0.1728, 0, 1.3700,0,0);
			Attach_Objects_BGuards( -221252636,BONE_HEAD, 0.1, -0.0007,0.1728, 0, 1.3700,0,0);
			Alert("~BLIP_76~ ~c~2 Pigeons on shoulder",false);
		}
		if(menu_item[SelectedItem].num_val == 3){
			if(renew_attached)clear_attachments();
			Attach_Objects_BGuards( -221252636,BONE_RIGHT_FOOT, 0.0594, 0.1545, 0.0113, 4.9900, 6.1900,1.5100,0);
			Attach_Objects_BGuards( -221252636,BONE_LEFT_FOOT, 0.0594, 0.1545, 0.0113, 4.9900, 2.9299,1.5100,1);
			Attach_Objects_BGuards( -221252636,BONE_RIGHT_HAND, 0.1167, 0.0210, 0.0053, 0.0000, 0.0000,1.5200,2);
			Attach_Objects_BGuards( -221252636,BONE_LEFT_HAND, 0.1167, 0.0210, 0.0053, 3.3000, 0.0000,4.6800,3);
			Attach_Objects_BGuards( -221252636,BONE_RIGHT_FOREARM, 0.1167, 0.0210, 0.0053, 3.3000, 0.0000,4.6800,4);
			Attach_Objects_BGuards( -221252636,BONE_LEFT_FOREARM, 0.1167, 0.0210, 0.0053, 3.3000, 3.3900,4.6800,5);
			Attach_Objects_BGuards( -221252636,BONE_SPINE3, 0.2139, -0.0035, -0.1546, 6.2500, 4.5000,2.9500,6);
			Attach_Objects_BGuards( -221252636,BONE_SPINE3, 0.2139, -0.0136, 0.1466, 6.0000, 4.8000,3.2400,7);
			Attach_Objects_BGuards( -221252636,BONE_PELVIS, 0.0000, -0.1275, -0.0114, 1.6200, 1.5900,0.0000,8);
			Attach_Objects_BGuards( -221252636,BONE_HEAD, 0.1689, 0.0000, 0.0000, 0.0000, 4.8400,2.9300,9);
			Alert("~BLIP_76~ ~c~Birdman",false);
		}			
		else if(menu_item[SelectedItem].num_val == 4){
			Delete_Objects_BGuards();
		}
	}
	else if(SelectedItem == 19){//6 Effects
		if(renew_attached)Delete_Objects_BGuards();
		if(menu_item[SelectedItem].num_val == 1){
		Attach_Objects_BGuards( 0x3427A4F4,0,0,0,-18.800,0,0,0,0);
		Alert("~BLIP_76~ ~c~White Smoke",false);
		}	
		else if(menu_item[SelectedItem].num_val == 2){
		Attach_Objects_BGuards( 0xFD810533,0,7.8201,15.7448,-28.8000,0.7900,0.4000,1.3100,0);
		Alert("~BLIP_76~ ~c~Red Smoke",false);
		}
		else if(menu_item[SelectedItem].num_val == 3){
		Attach_Objects_BGuards( 0x397C604F,0,0.4922,-0.0288,-1.0625,3.1599,0,6.1300,0);
		Alert("~BLIP_76~ ~w~Shower",false);
		}
		else if(menu_item[SelectedItem].num_val == 4){
		Attach_Objects_BGuards( 1439316710,0, 0.1092, 0.1697, 0.16, 0, 3.0700,5.5125,0);
		Attach_Objects_BGuards( 1439316710,0, 0.1092, 0.1697, 0, 0, 3.0700,5.5125,1);
		Attach_Objects_BGuards( 1439316710,0, 0.1092, 0.1697, -0.16, 0, 3.0700,5.5125,2);
		Attach_Objects_BGuards( 1439316710,0, 0.1092, 0.1697, -0.32, 0, 3.0700,5.5125,3);			
		Alert("~BLIP_76~ ~c~Sparks",false);
		}
		else if(menu_item[SelectedItem].num_val == 5){
		Attach_Objects_BGuards( -1644345434,0,0, 0, 0, 0, 0,0,0);
		Alert("~BLIP_76~ ~c~Darkness",false);
		}
		else if(menu_item[SelectedItem].num_val == 6){
			Delete_Objects_BGuards();
		}
	}
	else if(SelectedItem == 20){//7 Vegetation
		if(renew_attached)Delete_Objects_BGuards();
		if(menu_item[SelectedItem].num_val == 1){
		Attach_Objects_BGuards(-1447273211,BONE_ROOT,0,0,-1.2772,0,0,0,0);
		Alert("~BLIP_76~ ~c~Big And Bushy",false);
		}
		else if(menu_item[SelectedItem].num_val == 2){
		Attach_Objects_BGuards(1196022682,BONE_PELVIS,0,0, 0, 0, 1.6400,0,0);
		Alert("~BLIP_76~ ~c~Flower pot",false);
		}
		else if(menu_item[SelectedItem].num_val == 3){
		Attach_Objects_BGuards(180874309,BONE_ROOT,0,0,-1.0656,0,0,0,0);
		Alert("~BLIP_76~ ~c~Scotchpine Attached",false);
		}
		else if(menu_item[SelectedItem].num_val == 4){
		Attach_Objects_BGuards(-1161067121,BONE_ROOT,0,0,-0.9906,0,0,0,0);
		Alert("~BLIP_76~ ~c~AG-Tree Attached",false);
		}
		else if(menu_item[SelectedItem].num_val == 5){
		Attach_Objects_BGuards(1012779602,BONE_ROOT,0,0,-1.1672,0,0,0,0);
		Alert("~BLIP_76~ ~c~Beech Tree Attached",false);
		}
		else if(menu_item[SelectedItem].num_val == 6){
		Attach_Objects_BGuards(727520683,BONE_ROOT,0,0,-1.1372,0,0,0,0);
		Alert("~BLIP_76~ ~c~Live Oak Attached",false);
		}
		else if(menu_item[SelectedItem].num_val == 7){
			Delete_Objects_BGuards();
		}
	}

}

void MD_Guard_Animations_Action(int PlayerPed){
	NETWORK_FIRST_FOUR_ITEMS_MENU_ACTION();				
	//Jumpover 5
	if(SelectedItem == 6){
		ToggleBit(MD_Misc_OptionsBitSet,MD_MISC_AUTO_ATTACH_TOOL_WITH_ANIMS);
		menu_item[SelectedItem].extra_val = GetBit(MD_Misc_OptionsBitSet,MD_MISC_AUTO_ATTACH_TOOL_WITH_ANIMS);
		//Alert_Two("~BLIP_76~ ~c~Use Attachments on Animations", Attachment_OnAnims ? PrintON : PrintOFF ,false); 	
	}	
	else if(SelectedItem == 7){
		if(menu_item[SelectedItem].num_val == 1){
		animationspeed = 1.00f;
		Alert("~b~MD: ~s~Animspeed set to default",false);
		}
		else if(menu_item[SelectedItem].num_val == 2){
		animationspeed = 1.50f;
		Alert("~b~MD: ~s~Animspeed set to 2~n~ Press animation 2 times to play with selected speed.",false);
		}
		else if(menu_item[SelectedItem].num_val == 3){
		animationspeed = 2.00f;
		Alert("~b~MD: ~s~Animspeed set to 3~n~ Press animation 2 times to play with selected speed.",false);
		}
		else if(menu_item[SelectedItem].num_val == 4){
		animationspeed = 2.50f;
		Alert("~b~MD: ~s~Animspeed set to 4~n~ Press animation 2 times to play with selected speed.",false);
		}
		else if(menu_item[SelectedItem].num_val == 5){
		animationspeed = 3.00f;
		Alert("~b~MD: ~s~Animspeed set to 5~n~ Press animation 2 times to play with selected speed.",false);
		}
		else if(menu_item[SelectedItem].num_val == 6){
		animationspeed = 3.50f;
		Alert("~b~MD: ~s~Animspeed set to 6~n~ Press animation 2 times to play with selected speed.",false);
		}
		else if(menu_item[SelectedItem].num_val == 7){
		animationspeed = 4.00f;
		Alert("~b~MD: ~s~Animspeed set to 7~n~ Press animation 2 times to play with selected speed.",false);
		}
		else if(menu_item[SelectedItem].num_val == 8){
		animationspeed = 4.50f;
		Alert("~b~MD: ~s~Animspeed set to 8~n~ Press animation 2 times to play with selected speed.",false);
		}
		else if(menu_item[SelectedItem].num_val == 9){
		animationspeed = 5.00f;
		Alert("~b~MD: ~s~Animspeed set to 9~n~ Press animation 2 times to play with selected speed.",false);
		}
		else if(menu_item[SelectedItem].num_val == 10){
		animationspeed = 5.50f;
		Alert("~b~MD: ~s~Animspeed set to 10~n~ Press animation 2 times to play with selected speed.",false);
		}		
	}	
	else if(SelectedItem == 8){
		Loop_Anims = !Loop_Anims;
		menu_item[SelectedItem].extra_val = Loop_Anims;
		Alert_Two("~BLIP_76~ ~c~Animations Looped", Loop_Anims ? PrintON : PrintOFF ,false); 
		if(Loop_Anims) Animationloop = 99999.00f;
		else Animationloop = 0.00f;
	}
	//Jumpover //9
	else if(SelectedItem == 10){
	MD_Stride_Strings_Action(PlayerPed);
	}
	else if(SelectedItem == 11){
	MD_Anim_Dance_Strings_Action(PlayerPed);	
	}
	else if(SelectedItem == 12){
	MD_Anim_Gesture_Strings_Action(PlayerPed);
	}
	else if(SelectedItem == 13){
	MD_Anim_Tool_Strings_Action(PlayerPed);
	}
	else if(SelectedItem == 14){
	MD_Anim_Heli_Strings_Action(PlayerPed);
	}
	else if(SelectedItem == 15){
	MD_Anim_Bike_Strings_Action(PlayerPed);
	}
	else if(SelectedItem == 16){
	MD_Anim_Sliding_Strings_Action(PlayerPed);
	}
	else if(SelectedItem == 17){
	 MD_Anim_Swim_Strings_Action(PlayerPed);
	}
	else if(SelectedItem == 18){
	MD_Anim_Sit_Strings_Action(PlayerPed);
	}
	else if(SelectedItem == 19){
	MD_Anim_Pause_Strings_Action(PlayerPed);
	}
	else if(SelectedItem == 20){
	MD_Anim_Sex_Strings_Action(PlayerPed);
	}	
}
