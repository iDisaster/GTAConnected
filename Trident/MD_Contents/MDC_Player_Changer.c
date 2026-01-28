/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Current Version : TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */ 

/* #########################     PLAYER CHANGER SETUP & ACTION          ############################*/
#pragma once

/**New Setup**/
void MD_Player_Changer_Setup(void){
	NETWORK_FIRST_FOUR_ITEMS_MENU_SETUP();
	Add_JumpOver("~BLIP_94~  MD  M O D E L  C H A N G E R ~BLIP_94~");					//5
	AddBool("Variations Loop",Variations_Loop);	//6
	AddFunction("Reset Model");														//7
	AddBool("Helmet",GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_HELMET));															//8
	AddFunction_Value("Specials",4); 												//9
	AddFunction_Value("Textures Body",7); 											//10
	AddFunction_Value("Uniforms",14); 												//11
	AddFunction_Value("Gang Members",4); 											//12
	AddFunction_Value("Stripper",2); 												//13
	AddFunction_Value("Medical",5); 													//14
	AddFunction_Value("Business",9); 												//15
	AddFunction_Value("Cluck",2); 													//16
	AddFunction_Value("Homo",2); 													//17
	AddFunction_Value("Singleplayer",9);												//18
	AddFunction_Value("Strides ",11); 													//19  //Yes we put it here also cus its related to models
	AddFunction("Change Multiplayer Model ~y~(Settings Menu)"); //20
	AddSubMenu("Full Model Changer  ~PAD_RIGHT~"); //21
	return;
}


/**New Action**/
void MD_Player_Changer_Action(void){
	NETWORK_FIRST_FOUR_ITEMS_MENU_ACTION();			
	//Jumpover 5
	if(SelectedItem == 6){
		Variations_Loop = !Variations_Loop;
		menu_item[SelectedItem].extra_val = Variations_Loop; 	
	}
	else if(SelectedItem == 7){
		change_player(GET_PLAYERSETTINGS_MODEL_CHOICE());
		//SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE(iPlayer); //in change player function if model == GET_PLAYERSETTINGS_MODEL_CHOICE
		BLOCK_PED_WEAPON_SWITCHING(pPlayer, true); //this really should be looped when menu open....... 
	}
	else if(SelectedItem == 8){
		ToggleBit(pPlayerOptionsBitSet, PLAYER_OPTION_HELMET);
		menu_item[SelectedItem].extra_val = GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_HELMET);
		if(GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_HELMET))GIVE_PED_HELMET(pPlayer);
		else REMOVE_PED_HELMET(pPlayer,true);
	}
	else if(SelectedItem == 9){
		if(menu_item[SelectedItem].num_val == 1){
			int model;
			GET_CHAR_MODEL(pPlayer,&model);
			if(model != -641875910){
			change_player(-641875910);
			}
			SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE(GET_PLAYER_ID()); //wtf????
			BLOCK_PED_WEAPON_SWITCHING(pPlayer, true); //this really should be looped when menu open....... 
			SET_CHAR_RANDOM_COMPONENT_VARIATION(pPlayer);
			SET_CHAR_COMPONENT_VARIATION(pPlayer,1, 4, 1);
		}
		else if(menu_item[SelectedItem].num_val == 2){
			int model;
			GET_CHAR_MODEL(pPlayer,&model);
			if(model != -2020305438){
			change_player(-2020305438);
			}
			SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE(GET_PLAYER_ID());  //wtf????
			BLOCK_PED_WEAPON_SWITCHING(pPlayer, true); //this really should be looped when menu open....... 
			SET_CHAR_RANDOM_COMPONENT_VARIATION(pPlayer);
			SET_CHAR_COMPONENT_VARIATION(pPlayer,1, 4, 2);
		}
		else if(menu_item[SelectedItem].num_val == 3){
			int model;
			GET_CHAR_MODEL(pPlayer,&model);
			if(model != -330497431){
			change_player(-330497431);
			}
			SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE(GET_PLAYER_ID());  //wtf????
			BLOCK_PED_WEAPON_SWITCHING(pPlayer, true); //this really should be looped when menu open....... 
			SET_CHAR_RANDOM_COMPONENT_VARIATION(pPlayer);
			SET_CHAR_COMPONENT_VARIATION(pPlayer,1, 4, 1);
		}
		else if(menu_item[SelectedItem].num_val == 4){
			int model;
			GET_CHAR_MODEL(pPlayer,&model);
			if(model != 1609755055){
			change_player(1609755055);
			}
			SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE(GET_PLAYER_ID()); //wtf????
			BLOCK_PED_WEAPON_SWITCHING(pPlayer, true); //this really should be looped when menu open....... 
			SET_CHAR_RANDOM_COMPONENT_VARIATION(pPlayer);
			SET_CHAR_COMPONENT_VARIATION(pPlayer,1, 4, 2);
		}		
	}
	else if(SelectedItem == 10){
		if(menu_item[SelectedItem].num_val == 1){
		int rand;
		SET_CHAR_RANDOM_COMPONENT_VARIATION(pPlayer);
		SET_CHAR_COMPONENT_VARIATION(pPlayer,0, 0, 0);
		}
		else if(menu_item[SelectedItem].num_val == 2){
		int rand;
		GENERATE_RANDOM_INT_IN_RANGE(0,20,&rand);	
		SET_CHAR_RANDOM_COMPONENT_VARIATION(pPlayer);
		SET_CHAR_COMPONENT_VARIATION(pPlayer,0, 1,1);
		}
		else if(menu_item[SelectedItem].num_val == 3){
		int rand;
		GENERATE_RANDOM_INT_IN_RANGE(0,20,&rand);	
		SET_CHAR_RANDOM_COMPONENT_VARIATION(pPlayer);
		SET_CHAR_COMPONENT_VARIATION(pPlayer,1, 1, 1);
		}
		else if(menu_item[SelectedItem].num_val == 4){
		int rand;
		GENERATE_RANDOM_INT_IN_RANGE(0,20,&rand);	
		SET_CHAR_RANDOM_COMPONENT_VARIATION(pPlayer);
		SET_CHAR_COMPONENT_VARIATION(pPlayer,1, 2, 3);
		}
		else if(menu_item[SelectedItem].num_val == 5){
		int rand;
		GENERATE_RANDOM_INT_IN_RANGE(0,20,&rand);	
		SET_CHAR_RANDOM_COMPONENT_VARIATION(pPlayer);
		SET_CHAR_COMPONENT_VARIATION(pPlayer,2, 3, 0);
		}
		else if(menu_item[SelectedItem].num_val == 6){
		int rand;
		GENERATE_RANDOM_INT_IN_RANGE(0,100,&rand);	
		SET_CHAR_RANDOM_COMPONENT_VARIATION(pPlayer);
		SET_CHAR_COMPONENT_VARIATION(pPlayer,rand, rand, rand);
		}
		else if(menu_item[SelectedItem].num_val == 7){
		//int rand;
		//GENERATE_RANDOM_INT_IN_RANGE(0,20,&rand);	
		SET_CHAR_RANDOM_COMPONENT_VARIATION(pPlayer);
		//SET_CHAR_COMPONENT_VARIATION(pPlayer,200, 200,200);
		}				
	}
	else if(SelectedItem == 11){ //Uniforms
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
		change_player(model[(menu_item[SelectedItem].num_val - 1)]);
	}
	else if(SelectedItem == 12){ //Gang Members
	  int model[4];
		model[0] = MODEL_M_Y_GAFR_LO_01;
		model[1] = MODEL_M_Y_GAFR_LO_02;
		model[2] = MODEL_M_Y_GAFR_HI_01;
		model[3] = MODEL_M_Y_GAFR_HI_02;
		change_player(model[(menu_item[SelectedItem].num_val - 1)]);
	}
	else if(SelectedItem == 13){ //Stripper
		int model[2];
		model[0] = MODEL_F_Y_STRIPPERC01;
		model[1] = MODEL_F_Y_STRIPPERC02;
		change_player(model[(menu_item[SelectedItem].num_val - 1)]);
	}
	else if(SelectedItem == 14){ //Medical
		int model[5];
		model[0] = MODEL_M_M_DOCTOR_01;
		model[1] = MODEL_F_Y_DOCTOR_01;
		model[2] = MODEL_F_Y_NURSE;
		model[3] = MODEL_M_M_DOC_SCRUBS_01;
		model[4] = MODEL_M_M_DODGYDOC;
		change_player(model[(menu_item[SelectedItem].num_val - 1)]);
	}
	else if(SelectedItem == 15){ //Business
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
		change_player(model[(menu_item[SelectedItem].num_val - 1)]);
	}
	else if(SelectedItem == 16){ //Broken
		int model[2];
		model[0] = MODEL_F_Y_FF_CLUCK_R;
		model[1] = MODEL_M_Y_FF_CLUCK_R;
		change_player(model[(menu_item[SelectedItem].num_val - 1)]);
		SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_HELMET, true);
		GIVE_PED_HELMET(pPlayer);
	}
	else if(SelectedItem == 17){ //Homo
		int model[2];
		model[0] = MODEL_M_M_GAYMID; //= admin command change model homo
		model[1] = MODEL_M_Y_GAYYOUNG;
		change_player(model[(menu_item[SelectedItem].num_val - 1)]);
	}
	else if(SelectedItem == 18){ //Singleplayer
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
		change_player(model[(menu_item[SelectedItem].num_val - 1)]);
	}	
	if(SelectedItem > 10 && SelectedItem < 19){
		SET_CHAR_HEALTH(pPlayer,500);
			ADD_ARMOUR_TO_CHAR(pPlayer,99);
			GIVE_EPISODIC_WEAPONS_TO_CHAR(pPlayer,Episode);			
	}
	else if(SelectedItem == 19) MD_Stride_Strings_Action(pPlayer);	
	else if(SelectedItem == 20)	ACTIVATE_NETWORK_SETTINGS_MENU();
	
}


void MD_Player_MoreChanger_Setup(void){
	NETWORK_FIRST_FOUR_ITEMS_MENU_SETUP();
	Add_JumpOver("~BLIP_94~ MD  A L L    M O D E L S ~BLIP_94~");
	AddBool("Variations Loop",Variations_Loop);	//6
	AddFunction("Reset Model");														//7
	AddBool("Helmet",GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_HELMET));			
	AddFunction_Value("Textures Body",7); 											//10
	AddFunction_Value("IV Story 1",46); 										    //17
	AddFunction_Value("IV Story 2",11);											//18
	AddFunction_Value("IV Gangs",44); 									    	//17
	AddFunction_Value("IV ForeGround 1/1",50); 								    //14
	AddFunction_Value("IV ForeGround 2/1",37);								        //15
	AddFunction_Value("IV ForeGround 3/1",16);								        //16
	AddFunction_Value("IV BackGround 1/1",87);								        //17
	AddFunction_Value("TBoGT Models",73);								            //18
	AddFunction_Value("TLAD Models",26);								                //19
	AddFunction("Change Multiplayer Model ~y~(Settings Menu)"); //20
	AddFunction_Value("Strides ",11); 												//20	
	return;
}


void MD_Player_MoreChanger_Action(void){
    NETWORK_FIRST_FOUR_ITEMS_MENU_ACTION();	
	if(SelectedItem == 6){
		Variations_Loop = !Variations_Loop;
		menu_item[SelectedItem].extra_val = Variations_Loop; 	
	}
	else if(SelectedItem == 7){
		change_player(GET_PLAYERSETTINGS_MODEL_CHOICE());
		//SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE(iPlayer); //in change player function if model == GET_PLAYERSETTINGS_MODEL_CHOICE
		BLOCK_PED_WEAPON_SWITCHING(pPlayer, true); //this really should be looped when menu open....... 
	}
	else if(SelectedItem == 8){
		ToggleBit(pPlayerOptionsBitSet, PLAYER_OPTION_HELMET);
		menu_item[SelectedItem].extra_val = GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_HELMET);
		if(GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_HELMET))GIVE_PED_HELMET(pPlayer);
		else REMOVE_PED_HELMET(pPlayer,true);
	}
	else if(SelectedItem == 9){
		if(menu_item[SelectedItem].num_val == 1){
		int rand;
		SET_CHAR_RANDOM_COMPONENT_VARIATION(pPlayer);
		SET_CHAR_COMPONENT_VARIATION(pPlayer,0, 0, 0);
		}
		else if(menu_item[SelectedItem].num_val == 2){
		int rand;
		GENERATE_RANDOM_INT_IN_RANGE(0,20,&rand);	
		SET_CHAR_RANDOM_COMPONENT_VARIATION(pPlayer);
		SET_CHAR_COMPONENT_VARIATION(pPlayer,0, 1,1);
		}
		else if(menu_item[SelectedItem].num_val == 3){
		int rand;
		GENERATE_RANDOM_INT_IN_RANGE(0,20,&rand);	
		SET_CHAR_RANDOM_COMPONENT_VARIATION(pPlayer);
		SET_CHAR_COMPONENT_VARIATION(pPlayer,1, 1, 1);
		}
		else if(menu_item[SelectedItem].num_val == 4){
		int rand;
		GENERATE_RANDOM_INT_IN_RANGE(0,20,&rand);	
		SET_CHAR_RANDOM_COMPONENT_VARIATION(pPlayer);
		SET_CHAR_COMPONENT_VARIATION(pPlayer,1, 2, 3);
		}
		else if(menu_item[SelectedItem].num_val == 5){
		int rand;
		GENERATE_RANDOM_INT_IN_RANGE(0,20,&rand);	
		SET_CHAR_RANDOM_COMPONENT_VARIATION(pPlayer);
		SET_CHAR_COMPONENT_VARIATION(pPlayer,2, 3, 0);
		}
		else if(menu_item[SelectedItem].num_val == 6){
		int rand;
		GENERATE_RANDOM_INT_IN_RANGE(0,100,&rand);	
		SET_CHAR_RANDOM_COMPONENT_VARIATION(pPlayer);
		SET_CHAR_COMPONENT_VARIATION(pPlayer,rand, rand, rand);
		}
		else if(menu_item[SelectedItem].num_val == 7){
		//int rand;
		//GENERATE_RANDOM_INT_IN_RANGE(0,20,&rand);	
		SET_CHAR_RANDOM_COMPONENT_VARIATION(pPlayer);
		//SET_CHAR_COMPONENT_VARIATION(pPlayer,200, 200,200);
		}				
	}
	else if(SelectedItem == 10){ //Singleplayer
		int model[46];		
		model[0] = MODEL_IG_ANNA; 
		model[1] = MODEL_IG_ANTHONY;
		model[2] = MODEL_IG_BADMAN;
		model[3] = MODEL_IG_BERNIE_CRANE;
		model[4] = MODEL_IG_BLEDAR;
		model[5] = MODEL_IG_BRIAN;
		model[6] = MODEL_IG_BULGARIN;
		model[7] = MODEL_IG_CHARISE;
		model[8] = MODEL_IG_CHARLIEUC;
		model[9] = MODEL_IG_CLARENCE;
		model[10] = MODEL_IG_DARDAN;
	    model[11] = MODEL_IG_DARKO;
		model[12] = MODEL_IG_DERRICK_MC;
		model[13] = MODEL_IG_DMITRI;
		model[14] = MODEL_IG_DWAYNE;
		model[15] = MODEL_IG_EDDIELOW;
		model[16] = MODEL_IG_FAUSTIN;
		model[17] = MODEL_IG_FRANCIS_MC;
		model[18] = MODEL_IG_FRENCH_TOM;
		model[19] = MODEL_IG_GORDON;
		model[20] = MODEL_IG_GRACIE;
		model[21] = MODEL_IG_HOSSAN;
		model[22] = MODEL_IG_ILYENA;
		model[23] = MODEL_IG_ISAAC;
		model[24] = MODEL_IG_IVAN;
		model[25] = MODEL_IG_JAY;
		model[26] = MODEL_IG_JASON;
		model[27] = MODEL_IG_JEFF;
		model[28] = MODEL_IG_JIMMY;
		model[29] = MODEL_IG_JOHNNYBIKER;
		model[30] = MODEL_IG_KATEMC;
		model[31] = MODEL_IG_KENNY;
		model[32] = MODEL_IG_LILJACOB;
		model[33] = MODEL_IG_LILJACOBW;
		model[34] = MODEL_IG_LUCA;
		model[35] = MODEL_IG_LUIS;
		model[36] = MODEL_IG_MALLORIE;
		model[37] = MODEL_IG_MAMC;
		model[38] = MODEL_IG_MANNY;
		model[39] = MODEL_IG_MARNIE;
		model[40] = MODEL_IG_MEL;
		model[41] = MODEL_IG_MICHAEL;
		model[42] = MODEL_IG_MICHELLE;
		model[43] = MODEL_IG_MICKEY;
		model[44] = MODEL_IG_PACKIE_MC;
		model[45] = MODEL_IG_PATHOS;
		change_player(model[(menu_item[SelectedItem].num_val - 1)]);
	}
	else if(SelectedItem == 11){ //Singleplayer
		int model[11];		
		model[0] = MODEL_IG_PETROVIC; 
		model[1] = MODEL_IG_PHIL_BELL;
		model[2] = MODEL_IG_PLAYBOY_X;
		model[3] = MODEL_IG_RAY_BOCCINO;
		model[4] = MODEL_IG_RICKY;
		model[5] = MODEL_IG_ROMAN;
		model[6] = MODEL_IG_ROMANW;
		model[7] = MODEL_IG_SARAH;
		model[8] = MODEL_IG_TUNA;
		model[9] = MODEL_IG_VINNY_SPAZ;
		model[10] = MODEL_IG_VLAD;
		change_player(model[(menu_item[SelectedItem].num_val - 1)]);
	}
	else if(SelectedItem == 12){ //Singleplayer
		int model[44];		
		model[0] = MODEL_M_Y_GAFR_LO_01; 
		model[1] = MODEL_M_Y_GAFR_LO_02;
		model[2] = MODEL_M_Y_GAFR_HI_01;
		model[3] = MODEL_M_Y_GAFR_HI_02;
		model[4] = MODEL_M_Y_GALB_LO_01;
		model[5] = MODEL_M_Y_GALB_LO_02;
		model[6] = MODEL_M_Y_GALB_LO_03;
		model[7] = MODEL_M_Y_GALB_LO_04;
		model[8] = MODEL_M_M_GBIK_LO_03;
		model[9] = MODEL_M_Y_GBIK_HI_01;
		model[10] = MODEL_M_Y_GBIK_HI_02;
		model[11] = MODEL_M_Y_GBIK02_LO_02;
		model[12] = MODEL_M_Y_GIRI_LO_01;
		model[13] = MODEL_M_Y_GIRI_LO_02;
		model[14] = MODEL_M_Y_GIRI_LO_03;
		model[15] = MODEL_M_M_GJAM_HI_01;
		model[16] = MODEL_M_M_GJAM_HI_02;
		model[17] = MODEL_M_M_GJAM_HI_03;
		model[18] = MODEL_M_Y_GJAM_LO_01;
		model[19] = MODEL_M_Y_GJAM_LO_02;
		model[20] = MODEL_M_Y_GKOR_LO_01;
		model[21] = MODEL_M_Y_GKOR_LO_02;
		model[22] = MODEL_M_Y_GLAT_LO_01;
		model[23] = MODEL_M_Y_GLAT_LO_02;
		model[24] = MODEL_M_Y_GLAT_HI_01;
		model[25] = MODEL_M_Y_GLAT_HI_02;
		model[26] = MODEL_M_Y_GMAF_HI_01;
		model[27] = MODEL_M_Y_GMAF_HI_02;
		model[28] = MODEL_M_Y_GMAF_LO_01;
		model[29] = MODEL_M_Y_GMAF_LO_02;
		model[30] = MODEL_M_O_GRUS_HI_01;
		model[31] = MODEL_M_Y_GRUS_LO_01;
		model[32] = MODEL_M_Y_GRUS_LO_02;
		model[33] = MODEL_M_Y_GRUS_HI_02;
		model[34] = MODEL_M_M_GRU2_HI_01;
		model[35] = MODEL_M_M_GRU2_HI_02;
		model[36] = MODEL_M_M_GRU2_LO_02;
		model[37] = MODEL_M_Y_GRU2_LO_01;
		model[38] = MODEL_M_M_GTRI_HI_01;
		model[39] = MODEL_M_M_GTRI_HI_02;
		model[40] = MODEL_M_Y_GTRI_LO_01;
		model[41] = MODEL_M_Y_GTRI_LO_02;
		model[42] = MODEL_M_Y_GBIK_LO_01;
		model[43] = MODEL_M_Y_GBIK_LO_02;	
		
		change_player(model[(menu_item[SelectedItem].num_val - 1)]);
	}
	else if(SelectedItem == 13){ //Singleplayer
		int model[50];		
		model[0] = MODEL_M_M_ALCOHOLIC; 
		model[1] = MODEL_M_M_ARMOURED;
		model[2] = MODEL_M_M_BUSDRIVER;
		model[3] = MODEL_M_M_CHINATOWN_01;
		model[4] = MODEL_M_M_CRACKHEAD;
		model[5] = MODEL_M_M_DOC_SCRUBS_01;
		model[6] = MODEL_M_M_DOCTOR_01;
		model[7] = MODEL_M_M_DODGYDOC;
		model[8] = MODEL_M_M_EECOOK;
		model[9] = MODEL_M_M_ENFORCER;
		model[10] = MODEL_M_M_FACTORY_01;
		model[11] = MODEL_M_M_FATCOP_01;
		model[12] = MODEL_M_M_FBI;
		model[13] = MODEL_M_M_FEDCO;
		model[14] = MODEL_M_M_FIRECHIEF;
		model[15] = MODEL_M_M_GUNNUT_01;
		model[16] = MODEL_M_M_HELIPILOT_01;
		model[17] = MODEL_M_M_HPORTER_01;
		model[18] = MODEL_M_M_KOREACOOK_01;
		model[19] = MODEL_M_M_LAWYER_01;
		model[20] = MODEL_M_M_LAWYER_02;
		model[21] = MODEL_M_M_LOONYBLACK;
		model[22] = MODEL_M_M_PILOT;
		model[23] = MODEL_M_M_PINDUS_01;
		model[24] = MODEL_M_M_POSTAL_01;
		model[25] = MODEL_M_M_SAXPLAYER_01;
		model[26] = MODEL_M_M_SECURITYMAN;
		model[27] = MODEL_M_M_SELLER_01;
		model[28] = MODEL_M_M_SHORTORDER;
		model[29] = MODEL_M_M_STREETFOOD_01;
		model[30] = MODEL_M_M_SWEEPER;
		model[31] = MODEL_M_M_TAXIDRIVER;
		model[32] = MODEL_M_M_TELEPHONE;
		model[33] = MODEL_M_M_TENNIS;
		model[34] = MODEL_M_M_TRAIN_01;
		model[35] = MODEL_M_M_TRAMPBLACK;
		model[36] = MODEL_M_M_TRUCKER_01;
		model[37] = MODEL_M_O_JANITOR;
		model[38] = MODEL_M_O_HOTEL_FOOT;
		model[39] = MODEL_M_O_MPMOBBOSS;
		model[40] = MODEL_M_Y_AIRWORKER;
		model[41] = MODEL_M_Y_BARMAN_01;
		model[42] = MODEL_M_Y_BOUNCER_01;
		model[43] = MODEL_M_Y_BOUNCER_02;
		model[44] = MODEL_M_Y_BOWL_01;	
		model[45] = MODEL_M_Y_BOWL_02;	
		model[46] = MODEL_M_Y_CHINVEND_01;
		model[47] = MODEL_M_Y_CLUBFIT;
		model[48] = MODEL_M_Y_CONSTRUCT_01;
		model[49] = MODEL_M_Y_CONSTRUCT_02;
		
		change_player(model[(menu_item[SelectedItem].num_val - 1)]);
	}	
	else if(SelectedItem == 14){ //Singleplayer
		int model[37];		
		model[0] = MODEL_M_Y_CONSTRUCT_03; 
		model[1] = MODEL_M_Y_COP;
		model[2] = MODEL_M_Y_COP_TRAFFIC;
		model[3] = MODEL_M_Y_COURIER;
		model[4] = MODEL_M_Y_COWBOY_01;
		model[5] = MODEL_M_Y_DEALER;
		model[6] = MODEL_M_Y_DRUG_01;
		model[7] = MODEL_M_Y_FF_BURGER_R;
		model[8] = MODEL_M_Y_FF_CLUCK_R;
		model[9] = MODEL_M_Y_FF_RSCAFE;
		model[10] = MODEL_M_Y_FF_TWCAFE;
		model[11] = MODEL_M_Y_FF_WSPIZZA_R;
		model[12] = MODEL_M_Y_FIREMAN;
		model[13] = MODEL_M_Y_GARBAGE;
		model[14] = MODEL_M_Y_GOON_01;
		model[15] = MODEL_M_Y_GYMGUY_01;
		model[16] = MODEL_M_Y_MECHANIC_02;
		model[17] = MODEL_M_Y_MODO;
		model[18] = MODEL_M_Y_NHELIPILOT;
		model[19] = MODEL_M_Y_PERSEUS;
		model[20] = MODEL_M_Y_PINDUS_01;
		model[21] = MODEL_M_Y_PINDUS_02;
		model[22] = MODEL_M_Y_PINDUS_03;
		model[23] = MODEL_M_Y_PMEDIC;
		model[24] = MODEL_M_Y_PRISON;
		model[25] = MODEL_M_Y_PRISONAOM;
		model[26] = MODEL_M_Y_ROMANCAB;
		model[27] = MODEL_M_Y_RUNNER;
		model[28] = MODEL_M_Y_SHOPASST_01;
		model[29] = MODEL_M_Y_STROOPER;
		model[30] = MODEL_M_Y_SWAT;
		model[31] = MODEL_M_Y_SWORDSWALLOW;
		model[32] = MODEL_M_Y_THIEF;
		model[33] = MODEL_M_Y_VALET;
		model[34] = MODEL_M_Y_VENDOR;
		model[35] = MODEL_M_Y_FRENCHTOM;
		model[36] = MODEL_M_Y_JIM_FITZ;
		
		change_player(model[(menu_item[SelectedItem].num_val - 1)]);
	}	
	else if(SelectedItem == 15){ //Singleplayer
		int model[16];		
		model[0] = MODEL_F_O_MAID_01; 
		model[1] = MODEL_F_O_BINCO;
		model[2] = MODEL_F_Y_BANK_01;
		model[3] = MODEL_F_Y_DOCTOR_01;
		model[4] = MODEL_F_Y_GYMGAL_01;
		model[5] = MODEL_F_Y_FF_BURGER_R;
		model[6] = MODEL_F_Y_FF_CLUCK_R;
		model[7] = MODEL_F_Y_FF_RSCAFE;
		model[8] = MODEL_F_Y_FF_TWCAFE;
		model[9] = MODEL_F_Y_FF_WSPIZZA_R;
		model[10] = MODEL_F_Y_HOOKER_01;
		model[11] = MODEL_F_Y_HOOKER_03;
		model[12] = MODEL_F_Y_NURSE;
		model[13] = MODEL_F_Y_STRIPPERC01;
		model[14] = MODEL_F_Y_STRIPPERC02;
		model[15] = MODEL_F_Y_WAITRESS_01;
		
		change_player(model[(menu_item[SelectedItem].num_val - 1)]);
	}
	else if(SelectedItem == 16){ //Singleplayer
		int model[87];		
		model[0] = MODEL_M_Y_CONSTRUCT_03; 
		model[1] = MODEL_M_Y_COP;
		model[2] = MODEL_M_Y_COP_TRAFFIC;
		model[3] = MODEL_M_Y_COURIER;
		model[4] = MODEL_M_Y_COWBOY_01;
		model[5] = MODEL_M_Y_DEALER;
		model[6] = MODEL_M_Y_DRUG_01;
		model[7] = MODEL_M_Y_FF_BURGER_R;
		model[8] = MODEL_M_Y_FF_CLUCK_R;
		model[9] = MODEL_M_Y_FF_RSCAFE;
		model[10] = MODEL_M_Y_FF_TWCAFE;
		model[11] = MODEL_M_Y_FF_WSPIZZA_R;
		model[12] = MODEL_M_Y_FIREMAN;
		model[13] = MODEL_M_Y_GARBAGE;
		model[14] = MODEL_M_Y_GOON_01;
		model[15] = MODEL_M_Y_GYMGUY_01;
		model[16] = MODEL_M_Y_MECHANIC_02;
		model[17] = MODEL_M_Y_MODO;
		model[18] = MODEL_M_Y_NHELIPILOT;
		model[19] = MODEL_M_Y_PERSEUS;
		model[20] = MODEL_M_Y_PINDUS_01;
		model[21] = MODEL_M_Y_PINDUS_02;
		model[22] = MODEL_M_Y_PINDUS_03;
		model[23] = MODEL_M_Y_PMEDIC;
		model[24] = MODEL_M_Y_PRISON;
		model[25] = MODEL_M_Y_PRISONAOM;
		model[26] = MODEL_M_Y_ROMANCAB;
		model[27] = MODEL_M_Y_RUNNER;
		model[28] = MODEL_M_Y_SHOPASST_01;
		model[29] = MODEL_M_Y_STROOPER;
		model[30] = MODEL_M_Y_SWAT;
		model[31] = MODEL_M_Y_SWORDSWALLOW;
		model[32] = MODEL_M_Y_THIEF;
		model[33] = MODEL_M_Y_VALET;
		model[34] = MODEL_M_Y_VENDOR;
		model[35] = MODEL_M_Y_FRENCHTOM;
		model[36] = MODEL_M_Y_JIM_FITZ;
		model[37] = MODEL_M_Y_TOURIST_02;
		model[38] = MODEL_M_Y_TOUGH_05;
		model[39] = MODEL_M_Y_STREETPUNK_05;
		model[40] = MODEL_M_Y_STREETPUNK_04;
		model[41] = MODEL_M_Y_STREETPUNK_02;
		model[42] = MODEL_M_Y_STREETBLK_03;
		model[43] = MODEL_M_Y_STREETBLK_02;
		model[44] = MODEL_M_Y_STREET_04;
		model[45] = MODEL_M_Y_STREET_01;
		model[46] = MODEL_M_Y_STREET_03;
		model[47] = MODEL_M_Y_SOHO_01;
		model[48] = MODEL_M_Y_SKATEBIKE_01;
		model[49] = MODEL_M_Y_SHADY_02;
		model[50] = MODEL_M_Y_QUEENSBRIDGE;
		model[51] = MODEL_M_Y_PVILLBO_03;
		model[52] = MODEL_M_Y_PVILLBO_02;
		model[53] = MODEL_M_Y_PVILLBO_01;
		model[54] = MODEL_M_Y_PRICH_01;
		model[55] = MODEL_M_Y_PQUEENS_01;
		model[56] = MODEL_M_Y_PORIENT_01;
		model[57] = MODEL_M_Y_PMANHAT_02;
		model[58] = MODEL_M_Y_PMANHAT_01;
		model[59] = MODEL_M_Y_PLATIN_03;
		model[60] = MODEL_M_Y_PLATIN_02;
		model[61] = MODEL_M_Y_PLATIN_01;
		model[62] = MODEL_M_Y_PJERSEY_01;
		model[63] = MODEL_M_Y_PHARLEM_01;
		model[64] = MODEL_M_Y_PHARBRON_01;
		model[65] = MODEL_M_Y_PCOOL_02;
		model[66] = MODEL_M_Y_PCOOL_01;
		model[67] = MODEL_M_Y_PBRONX_01;
		model[68] = MODEL_M_Y_LEASTSIDE_01;
		model[69] = MODEL_M_Y_HASID_01;
		model[70] = MODEL_M_Y_HARLEM_04;
		model[71] = MODEL_M_Y_HARLEM_02;
		model[72] = MODEL_M_Y_HARLEM_01;
		model[73] = MODEL_M_O_STREET_01;
		model[74] = MODEL_M_O_SUITED;
		model[75] = MODEL_M_Y_BOHO_01;
		model[76] = MODEL_M_Y_DODGY_01;
		model[77] = MODEL_M_Y_DORK_02;
		model[78] = MODEL_M_Y_DOWNTOWN_01;
		model[79] = MODEL_M_Y_DOWNTOWN_02;
		model[80] = MODEL_M_Y_DOWNTOWN_03;
		model[81] = MODEL_M_Y_GAYYOUNG;
		model[82] = MODEL_M_Y_GENSTREET_11;
		model[83] = MODEL_M_Y_GENSTREET_16;
		model[84] = MODEL_M_Y_GENSTREET_20;
		model[85] = MODEL_M_Y_GENSTREET_34;
		model[86] = MODEL_M_Y_HARDMAN_01;		
		change_player(model[(menu_item[SelectedItem].num_val - 1)]);
	}
	else if(SelectedItem == 17){ //Singleplayer
		
		int model[73];		
		model[0] = MODEL_IG_AHMAD; 
		model[1] = MODEL_IG_ARMANDO;
		model[2] = MODEL_IG_ARMSDEALER;
		model[3] = MODEL_IG_ARNAUD;
		model[4] = MODEL_IG_BANKER;
		model[5] = MODEL_IG_BRUCIE2;
		model[6] = MODEL_IG_BULGARIN2;
		model[7] = MODEL_IG_DAISY;
		model[8] = MODEL_IG_DEEJAY;
		model[9] = MODEL_IG_DESSIE;
		model[10] = MODEL_IG_EVAN;
		model[11] = MODEL_IG_GRACIE2;
		model[12] = MODEL_IG_HENRIQUE;
		model[13] = MODEL_IG_ISSAC2;
		model[14] = MODEL_IG_JOHNNY2;
		model[15] = MODEL_IG_LUIS2;
		model[16] = MODEL_IG_MARGOT;
		model[17] = MODEL_IG_MORI_K;
		model[18] = MODEL_IG_MR_SANTOS;
		model[19] = MODEL_IG_OYVEY;
		model[20] = MODEL_IG_NIKO;
		model[21] = MODEL_IG_OYVEY;
		model[22] = MODEL_IG_ROCCO;
		model[23] = MODEL_IG_TAHIR;
		model[24] = MODEL_IG_TIMUR;
		model[25] = MODEL_IG_TONY;
		model[26] = MODEL_IG_TRAMP2;
		model[27] = MODEL_IG_TRIAD;
		model[28] = MODEL_IG_TROY;
		model[29] = MODEL_IG_VIC;
		model[30] = MODEL_IG_VICGIRL;
		model[31] = MODEL_IG_VINCE;
		model[32] = MODEL_IG_YUSEF;
		model[33] = MODEL_F_Y_ASIANCLUB_01;
		model[34] = MODEL_F_Y_ASIANCLUB_02;
		model[35] = MODEL_F_Y_CLUBEURO_01;
		model[36] = MODEL_F_Y_DOMGIRL_01;
		model[37] = MODEL_F_Y_EMIDTOWN_02;
		model[38] = MODEL_F_Y_HOSTESS;
		model[39] = MODEL_F_Y_HOTCHICK_01;
		model[40] = MODEL_F_Y_HOTCHICK_02;
		model[41] = MODEL_F_Y_HOTCHICK_03;
		model[42] = MODEL_F_Y_PGIRL_01;
		model[43] = MODEL_F_Y_PGIRL_02;
		model[44] = MODEL_M_M_E2MAF_01;
		model[45] = MODEL_M_M_E2MAF_02;
		model[46] = MODEL_M_Y_BATHROOM;
		model[47] = MODEL_M_Y_CIADLC_01;
		model[49] = MODEL_M_Y_CIADLC_02;
		model[50] = MODEL_M_Y_GAYBLACK_01;
		model[51] = MODEL_M_Y_GAYDANCER;
        model[52] = MODEL_M_Y_FIGHTCLUB_01;
		model[53] = MODEL_M_Y_FIGHTCLUB_02;
		model[54] = MODEL_M_Y_FIGHTCLUB_03;
		model[55] = MODEL_M_Y_FIGHTCLUB_04;
		model[56] = MODEL_M_Y_FIGHTCLUB_05;
		model[57] = MODEL_M_Y_FIGHTCLUB_06;
		model[58] = MODEL_M_Y_FIGHTCLUB_07;
		model[59] = MODEL_M_Y_FIGHTCLUB_08;
		model[60] = MODEL_F_Y_CLOEPARKER;
		model[61] = MODEL_F_Y_DANCER_01;
		model[62] = MODEL_F_Y_JONI;
		model[63] = MODEL_M_M_MAFUNION;
		model[64] = MODEL_M_Y_CELEBBLOG;
		model[65] = MODEL_M_Y_EXSPORTS;
		model[66] = MODEL_M_Y_MOBPARTY;
		model[67] = MODEL_M_Y_PAPARAZZI_01;
		model[68] = MODEL_IG_BLUEBROS;
		model[69] = MODEL_IG_JACKSON;
		model[70] = MODEL_IG_NAPOLI;
		model[71] = MODEL_IG_ROYAL;
		model[72] = MODEL_IG_SPADE;		
		change_player(model[(menu_item[SelectedItem].num_val - 1)]);
	}
	else if(SelectedItem == 18){ //Singleplayer
		
		int model[26];		
		model[0] = MODEL_IG_NIKO; 
		model[1] = MODEL_IG_ASHLEYA;
		model[2] = MODEL_IG_CLAY;
		model[3] = MODEL_IG_MALC;
		model[4] = MODEL_IG_BILLY;
		model[5] = MODEL_IG_JIM_FITZ;
		model[6] = MODEL_IG_BRIANJ;
		model[7] = MODEL_IG_EVAN;
		model[8] = MODEL_IG_TERRY;
		model[9] = MODEL_IG_DAVE_GROSSMAN;
		model[10] = MODEL_IG_LOSTGIRL;
		model[11] = MODEL_IG_BILLYPRISON;
		model[12] = MODEL_IG_MARTA;
		model[13] = MODEL_IG_DESEAN;
		model[14] = MODEL_IG_MATTHEWS;
		model[15] = MODEL_IG_MCCORNISH;
		model[16] = MODEL_IG_PGIRL_01;
		model[17] = MODEL_IG_PGIRL_02;
		model[18] = MODEL_IG_ROMAN_E1;
		model[19] = MODEL_IG_STROOPER;
		model[20] = MODEL_F_Y_BIKESTRIPPER_01;
		model[21] = MODEL_F_Y_EMIDTOWN_01;
		model[22] = MODEL_M_M_SPRETZER;
		model[23] = MODEL_M_Y_CIADLC_01;
		model[24] = MODEL_M_O_HISPANIC_01;
		model[25] = MODEL_M_Y_HISPANIC_01;				
		change_player(model[(menu_item[SelectedItem].num_val - 1)]);
	}
	else if(SelectedItem == 19)	ACTIVATE_NETWORK_SETTINGS_MENU();
	else if(SelectedItem == 20){	
		MD_Stride_Strings_Action(pPlayer);	
	}
}