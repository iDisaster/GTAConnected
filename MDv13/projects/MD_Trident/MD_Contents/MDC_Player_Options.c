/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Current Version : TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */ 

/* #########################     PLAYER OPTIONS SETUP & ACTION          ############################*/

#pragma once

//Maybe add autospawn boat to this section - Player Protections

void MD_New_PlayerOptions_Setup(const int Player_ID){ 
	//!**Player Char Check**//
	Ped Player_PED;
	if(!PLAYER_HAS_CHAR(Player_ID))return Alert_Abort(Error_Char_Missing,false);
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);
	//!**********************/	

	MENU_SUB_HEADER = "Player Options";
	NETWORK_FIRST_FOUR_ITEMS_MENU_SETUP();
	Add_JumpOver("~BLIP_94~  P L A Y E R   O P T I O N S ~BLIP_94~");	//5
	
	//!NeW Setup
	AddFunction_Value("Player Protection",3);													//6 Godmode / Juggernaut / never wanted / ADD autospawn boat(water)
	AddFunction_Value_CB("Player Help",5);	
	AddFunction_Value_CB("Weapon Options",5);													//7 Unlimmited Clip / Rapid Fire / Auto Aim / Give Weapons /Remove Weapons
													//8 ALL PLAYERS / SELF = Default on enter submenu
	AddFunction_Value("Visibility",5);															//9 Invisible (On Foot) / Invisible (On Foot+Vehicle) / Hide Blip(On Foot) / Hide Blip (On Foot + Vehicle)
	AddFunction_Value("Super Powers",4);														//10 Super Punch /  Super Punch /  Super Jump / Force Field
	AddFunction_Value_CB("Physics", 3); 															//11  / Drive Walk ON Water / Gravity / Slow Motion
	AddBool("~BLIP_68~ Fly-mod ~PAD_LB~ slower / ~PAD_RB~ faster",GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_FLYMOD));	//12 
	AddBool("~BLIP_52~ Inferno",GetBit(pPlayerOptionsBitSet,PLAYER_OPTION_INFERNO));	//13 ALL PLAYERS / SELF = Default on enter submenu
	AddFunction_CB("~BLIP_52~ Explode Player");													//14 ALL PLAYERS / SELF = Default on enter submenu
	AddFunction_CB("~BLIP_52~ Spawn Money around player");										//15 ALL PLAYERS / SELF = Default on enter submenu
	AddFunction("~BLIP_68~ Change to Niko");													//16
	AddFunction_Value_CB("Set Player Colors (YOU = Host)",18); 									//17 ALL PLAYERS / SELF = Default on enter submenu
	AddFunction("~BLIP_68~ Reset Player");
	AddFunction_CB("~BLIP_68~ Resurrect Player(Pull out Ghost)");
	AddFunction("Find new Game");
	//AddBool_CB("Attach Player Info x ",Attach_Player_Info);
	//AddFunction_Value_CB("Player Info Display",9);  //Show window / Set Player 1 - Set Player 2	
	item_highlighted = 6;
	//*/  //--> = 25 options on one page without the top 4 shortcuts = all together 34 options on ONE PAGE !!!	
	return;	
}

void MD_New_PlayerOptions_Action(const int Player_ID){
	Vehicle vehicle;
	uint vehicle_id;
	float heading, speed;	
	//!**Player Char Check**//
	Ped Player_PED;	
	//!**********************/	
	NETWORK_FIRST_FOUR_ITEMS_MENU_ACTION(); 
	//! ITEMLINE 5 ******************Jumpover TITLE MENU********************//
	if(PLAYER_HAS_CHAR(Player_ID)){
		GET_PLAYER_CHAR(Player_ID,&Player_PED);
		if(SelectedItem == 6){ //AddFunction_Value("Player Protection",2);		//6 Godmode / Juggernaut / Never wanted
			if(menu_item[SelectedItem].num_val == 1){
			ToggleBit(pPlayerOptionsBitSet,PLAYER_OPTION_GODMODE);
			
			//Alert_Two("~b~MD: ~s~Godmode",GetBit(pPlayerOptionsBitSet,PLAYER_OPTION_GODMODE) ? PrintON : PrintOFF ,false);		
			}
			else if(menu_item[SelectedItem].num_val == 2){
			ToggleBit(pPlayerOptionsBitSet,PLAYER_OPTION_JUGGERNAUT);
			
			//Alert_Two("~b~MD: ~s~Juggernaut",GetBit(pPlayerOptionsBitSet,PLAYER_OPTION_JUGGERNAUT) ? PrintON : PrintOFF ,false);	
			}
			else if(menu_item[SelectedItem].num_val == 3){
			ToggleBit(pPlayerOptionsBitSet,PLAYER_OPTION_NEVER_WANTED);
			
			//Alert_Two("~b~MD: ~s~Never wanted by the police",GetBit(pPlayerOptionsBitSet,PLAYER_OPTION_NEVER_WANTED) ? PrintON : PrintOFF ,false);	
			}
		}
		if(SelectedItem == 7){//AddFunction_CB("~BLIP_52~ Health / Armour / Remove Armour");	//8 ALL PLAYERS / SELF = Default on enter submenu
			
			if(menu_item[SelectedItem].num_val == 1){
				if(Player_PED == pPlayer)SET_CHAR_HEALTH(Player_PED,500);
				else GIVE_HEALTH_TO_CHAR(Player_PED);
				char * buffer[32]; //128 characters to play with
				Strcpy(buffer, "~b~MD: ~s~ "); //27 Characters				
				Strcat(buffer, "~s~Healthpack given to: "); //27 Characters
				PLAYER_NAME_WITH_COLOUR(Player_ID, &buffer); //WORKS! 47				
				Strcat(buffer, ".");
				Alert(buffer,true);					
			}
			else if(menu_item[SelectedItem].num_val == 2){
				ADD_ARMOUR_TO_CHAR(Player_PED,200);
				char * buffer[32]; //128 characters to play with
				Strcpy(buffer, "~b~MD: ~s~ "); //27 Characters				
				Strcat(buffer, "~s~Armour given to: "); //27 Characters
				PLAYER_NAME_WITH_COLOUR(Player_ID, &buffer); //WORKS! 47				
				Strcat(buffer, ".");
				Alert(buffer,true);	
			}
			else if(menu_item[SelectedItem].num_val == 3){
				ADD_ARMOUR_TO_CHAR(Player_PED,-100);
				char * buffer[32]; //128 characters to play with
				Strcpy(buffer, "~b~MD: ~s~ "); //27 Characters				
				Strcat(buffer, "~s~Armour removed from: "); //27 Characters
				PLAYER_NAME_WITH_COLOUR(Player_ID, &buffer); //WORKS! 47				
				Strcat(buffer, ".");
				Alert(buffer,true);	
			}
			else if(menu_item[SelectedItem].num_val == 4){
				if(IS_CHAR_IN_ANY_CAR(Player_PED)){
					GET_CAR_CHAR_IS_USING(Player_PED, &vehicle);
					GET_NETWORK_ID_FROM_VEHICLE(vehicle,&vehicle_id);
					if(!network_control(vehicle_id))return;
					GET_CAR_HEADING(vehicle,&heading);
					GET_CAR_SPEED(vehicle,&speed);			
				}
				else{
					Alert(Error_NetPlayer_Vehicle,false);
					return;
				}
				FIX_CAR(vehicle);
				SET_CAR_ENGINE_ON(vehicle,true,true);
				SET_VEHICLE_DIRT_LEVEL(vehicle, 0);
				char * buffer[32]; //128 characters to play with
				Strcpy(buffer, "~b~MD: ~s~ "); //27 Characters				
				PLAYER_NAME_WITH_COLOUR(Player_ID, &buffer); //WORKS! 47	
				Strcat(buffer, "'s ~y~"); //27 Characters
				Strcat(buffer, VEHICLES_MODEL_NAME(vehicle));
				Strcat(buffer, "~s~ was fixed & washed"); //27 Characters							
				Strcat(buffer, ".");
				Alert(buffer,true);	
			}
			else if(menu_item[SelectedItem].num_val == 5){
				if(IS_CHAR_IN_ANY_CAR(Player_PED)){
					GET_CAR_CHAR_IS_USING(Player_PED, &vehicle);
					GET_NETWORK_ID_FROM_VEHICLE(vehicle,&vehicle_id);
					if(!network_control(vehicle_id))return;
					GET_CAR_HEADING(vehicle,&heading);
					GET_CAR_SPEED(vehicle,&speed);			
				}
				else{
					Alert(Error_NetPlayer_Vehicle,false);
					return;
				}
				GET_CAR_HEADING(vehicle,&heading);
				SET_VEHICLE_QUATERNION(vehicle,0,0,0,0);
				SET_CAR_HEADING(vehicle,heading);
				SET_CAR_ON_GROUND_PROPERLY(vehicle);
				char * buffer[32]; //128 characters to play with
				Strcpy(buffer, "~b~MD: ~s~ "); //27 Characters				
				PLAYER_NAME_WITH_COLOUR(Player_ID, &buffer); //WORKS! 47	
				Strcat(buffer, "'s ~y~"); //27 Characters
				Strcat(buffer, VEHICLES_MODEL_NAME(vehicle));
				Strcat(buffer, "~s~ was set upright again"); //27 Characters
				Strcat(buffer, ".");
				Alert(buffer,true);
			}
		}
		else if(SelectedItem == 8){//AddFunction_Value("Weapon Options",4);		//7 Unlimmited Clip / Rapid Fire / Auto Aim / Give Weapons / Remove
			if(menu_item[SelectedItem].num_val == 1){
			ToggleBit(pPlayerOptionsBitSet,PLAYER_OPTION_INFINITE_AMMO);
			Alert_Two("~b~MD: ~s~Unlimited Clip (Yourself)",GetBit(pPlayerOptionsBitSet,PLAYER_OPTION_INFINITE_AMMO) ? PrintON : PrintOFF ,false);	
			}
			else if(menu_item[SelectedItem].num_val == 2){
			ToggleBit(pPlayerOptionsBitSet,PLAYER_OPTION_RAPID_FIRE);
			Alert_Two("~b~MD: ~s~Rapid Fire (Yourself)",GetBit(pPlayerOptionsBitSet,PLAYER_OPTION_RAPID_FIRE) ? PrintON : PrintOFF ,false);	
			}
			else if(menu_item[SelectedItem].num_val == 3){
			ToggleBit(pPlayerOptionsBitSet,PLAYER_OPTION_AUTO_AIM);
			Alert_Two("~b~MD: ~s~Auto Aim (Yourself)",GetBit(pPlayerOptionsBitSet,PLAYER_OPTION_AUTO_AIM) ? PrintON : PrintOFF ,false);	
			}
			else if(menu_item[SelectedItem].num_val == 4){
			GIVE_EPISODIC_WEAPONS_TO_CHAR(Player_PED,Episode);
			Alert_Two("~b~MD: ~s~Weapons given to", GET_PLAYER_NAME(Player_ID),true);
			}
			else if(menu_item[SelectedItem].num_val == 5){
			REMOVE_ALL_CHAR_WEAPONS(Player_PED);
			Alert_Two("~b~MD: ~s~Weapons removed from", GET_PLAYER_NAME(Player_ID),true);	
			}
		}
		if(SelectedItem == 9){//AddFunction_Value("Visibility",3);	//9 Invisible (On Foot) / Invisible (On Foot+Vehicle) / Hide Blip(On Foot) / Hide Blip (On Foot + Vehicle)
			
			if(menu_item[SelectedItem].num_val == 1){
				SET_CHAR_VISIBLE(pPlayer,!IS_CHAR_VISIBLE(pPlayer));
				Alert_Two("~b~MD: ~s~Visibility",IS_CHAR_VISIBLE(pPlayer) ? PrintON : PrintOFF ,false);
			}
			else if(menu_item[SelectedItem].num_val == 2){	
				Vehicle vehicle;
				if(!IS_CHAR_IN_ANY_CAR(pPlayer)){
				Alert_Abort(Error_Personal_Vehicle,false);
				return;
				}
				else{
				GET_CAR_CHAR_IS_USING(pPlayer,&vehicle);
				ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVISIBLE);
				SET_CAR_VISIBLE(vehicle,GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVISIBLE));			
				Alert_Two("~b~MD: ~s~Vehicle Visibility",GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVISIBLE) ? PrintON : PrintOFF ,false);
				}
			}
			else if(menu_item[SelectedItem].num_val == 3){		//Invisible Player + Car
				Vehicle vehicle;
				if(!IS_CHAR_IN_ANY_CAR(pPlayer)){
				Alert(Error_Personal_Vehicle,false);
				return;
				}
				else{
				GET_CAR_CHAR_IS_USING(pPlayer,&vehicle);
				SET_CHAR_VISIBLE(pPlayer,!IS_CHAR_VISIBLE(pPlayer));
				SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVISIBLE,IS_CHAR_VISIBLE(pPlayer));
				SET_CAR_VISIBLE(vehicle,IS_CHAR_VISIBLE(pPlayer));			
				Alert_Two("~b~MD: ~s~Vehicle + Player Visibility",(GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVISIBLE) && IS_CHAR_VISIBLE(pPlayer)) ? PrintON : PrintOFF ,false);
				}			
			}
			else if(menu_item[SelectedItem].num_val == 4){		
				ToggleBit(pPlayerOptionsBitSet, PLAYER_OPTION_REMOVE_BLIP);			
				if(!GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_REMOVE_BLIP)){
				SET_PLAYER_CONTROL(iPlayer,true);
				SET_CHAR_VISIBLE(pPlayer,true);			
				}
				Alert_Two("~b~MD: ~s~Ninja Mode",GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_REMOVE_BLIP) ? PrintON : PrintOFF ,false);			
			}
			else if(menu_item[SelectedItem].num_val == 5){			
				Vehicle vehicle;
				if(!IS_CHAR_IN_ANY_CAR(pPlayer)){	
				SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_REMOVE_BLIP,false);			
				Alert(Error_Personal_Vehicle,false);
				return;
				}
				else{
					GET_CAR_CHAR_IS_USING(pPlayer,&vehicle);
					ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_REMOVE_BLIP);
					if(!GetBit(pPlayerOptionsBitSet,VEHICLE_OPTION_REMOVE_BLIP)){
						SET_PLAYER_CONTROL(iPlayer,true);
						if(!IS_CHAR_VISIBLE(pPlayer))SET_CHAR_VISIBLE(pPlayer,true);
						if(IS_CHAR_IN_ANY_CAR(pPlayer) || is_driving(pPlayer)){
						SET_CAR_VISIBLE(vehicle,true);
						SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_DESOLIDIFY,false);
						}
					}					
				}			
			}				
		}
		//!Add Helpers for this
		else if(SelectedItem == 10){//AddFunction_Value("Super Powers",3);			//10 Super Punch /  Super Punch /  Super Jump / Force Field
			if(menu_item[SelectedItem].num_val == 1)ToggleBit(pPlayerOptionsBitSet,PLAYER_OPTION_SUPER_RUN);
			else if(menu_item[SelectedItem].num_val == 2)ToggleBit(pPlayerOptionsBitSet,PLAYER_OPTION_SUPER_JUMP);
			else if(menu_item[SelectedItem].num_val == 3)ToggleBit(pPlayerOptionsBitSet,PLAYER_OPTION_SUPER_PUNCH);
			else if(menu_item[SelectedItem].num_val == 4){
			if(GetBit(pPlayerOptionsBitSet,PLAYER_OPTION_GODMODE))SetBit(pPlayerOptionsBitSet,PLAYER_OPTION_GODMODE,true);
			ToggleBit(pPlayerOptionsBitSet,PLAYER_OPTION_FORCE_FIELD);
			Alert_Two("~b~MD: ~s~Player Inferno",GetBit(pPlayerOptionsBitSet,PLAYER_OPTION_INFERNO) ? PrintON : PrintOFF ,false);
			WAIT(1000);
			if(GetBit(pPlayerOptionsBitSet,PLAYER_OPTION_FORCE_FIELD)) Alert("~b~MD: ~s~ Do not overuse this! Godmode was enabled",false);
			}		
		}
		else if(SelectedItem == 11){//AddFunction_Value("Physics", 3); 		//11  / Drive Walk ON Water / Gravity / Slow Motion
			if(menu_item[SelectedItem].num_val == 1)TOGGLE_DRIVE_WALK_WATER_FOR_PLAYER(Player_ID);
			else if(menu_item[SelectedItem].num_val == 2)ToggleBit(pPlayerOptionsBitSet,PLAYER_OPTION_GRAVITY);
			else if(menu_item[SelectedItem].num_val == 3){
				ToggleBit(pPlayerOptionsBitSet,PLAYER_OPTION_SLOW_MO);
				SET_TIME_SCALE(GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_SLOW_MO) ? 0.3 : 1); 
			}
		}
		else if(SelectedItem == 12){
			if(GetByteInSet(SpectateAndAttachByteSet, ATTACH_TYPE) == 3){
				Detach_pPlayer_On_Coord();
				Alert("~b~MD: ~s~Spectate mode disabled for flymod!",false);
			}
			bool flymod = GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_FLYMOD);
			if(flymod){
				if(DOES_CAM_EXIST(scriptedCam)){
					SET_CAM_ACTIVE(scriptedCam, false);
					SET_CAM_PROPAGATE(scriptedCam, false);
					ACTIVATE_SCRIPTED_CAMS(false, false);
					UNATTACH_CAM(scriptedCam);
					DESTROY_CAM(scriptedCam);
					while (DOES_CAM_EXIST(scriptedCam)) WAIT(0);
					SET_CAM_BEHIND_PED(pPlayer);
					scriptedCam = 0;
				}
				FREEZE_CHAR_POSITION(pPlayer, false);
			}
			ToggleBit(pPlayerOptionsBitSet, PLAYER_OPTION_FLYMOD);
			menu_item[SelectedItem].extra_val = GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_FLYMOD);
		}
		else if(SelectedItem == 13){
			ToggleBit(pPlayerOptionsBitSet,PLAYER_OPTION_INFERNO);
			menu_item[SelectedItem].extra_val = GetBit(pPlayerOptionsBitSet,PLAYER_OPTION_INFERNO);
		}
		else if(SelectedItem == 14){
			float x,y,z;
			GET_CHAR_COORDINATES(Player_PED, &x, &y, &z);
			ADD_EXPLOSION(x, y, z, EXPLOSION_SHIP_DESTROY, 10.0, true, false, 0.7f);
		}
		else if(SelectedItem == 15){
				int i;
				for(i = 0; i < 4; i++){
					GIVE_CASH_PICKUP_TO_CHAR(Player_PED, 99999999999);
				}
		}
		else if(SelectedItem == 16){
			if(GetPlayerModel() != MODEL_PLAYER)change_player(MODEL_PLAYER);
			else change_player(GET_PLAYERSETTINGS_MODEL_CHOICE());
			SET_CHAR_HEALTH(pPlayer,500);
			ADD_ARMOUR_TO_CHAR(pPlayer,200);
			GIVE_EPISODIC_WEAPONS_TO_CHAR(pPlayer,Episode);
		}
		else if(SelectedItem == 17){
			if(menu_item[SelectedItem].num_val > 0 && menu_item[SelectedItem].num_val < 18)	SET_PLAYER_COLOUR(Player_ID,menu_item[SelectedItem].num_val - 1);	
			else {
				if (Player_ID == iPlayer)SET_PLAYER_COLOUR(Player_ID,iPlayer + 1);
				else{
					register int scanner;
					for(scanner = 0; scanner < MAX_PLAYERS; scanner++){
						if(players[scanner].id != Player_ID)continue;
						SET_PLAYER_COLOUR(Player_ID,players[scanner].id + 1);
						break;	
					}	
				}
			}
		}
		else if(SelectedItem == 18){
		change_player(GET_PLAYERSETTINGS_MODEL_CHOICE());
	//	if (Player_ID == iPlayer)SET_PLAYER_COLOUR(Player_ID,iPlayer + 1);
		}
		
	}
	if(SelectedItem == 19){
		float mx,my,mz;
		if(PLAYER_HAS_CHAR(Player_ID)){
			GET_PLAYER_CHAR(Player_ID,&Player_PED);
			GET_CHAR_COORDINATES(Player_PED,&mx,&my,&mz);
			RESURRECT_NETWORK_PLAYER( Player_ID, mx,my,mz, 0 );
			SET_CHAR_HEALTH(pPlayer,300);	
		}
		else{
		GET_CHAR_COORDINATES(pPlayer,&mx,&my,&mz);
		RESURRECT_NETWORK_PLAYER( Player_ID, mx,my,mz, 0 );
		}		
	}
	if(SelectedItem == 20)
	{
		SHUTDOWN_AND_LAUNCH_NETWORK_GAME(GET_CURRENT_EPISODE());
	}
	/*
	else if(SelectedItem == 20){		
		if(menu_item[SelectedItem].num_val == 1){
		Attach_Player_Info = !Attach_Player_Info;
			if(!Attach_Player_Info){
			Player_INFO_ID1 = 99;
			Player_INFO_ID2 = 99;
			Player_INFO_ID3 = 99;
			}
			else Player_INFO_ID1 = iPlayer;			
		}
		else if(menu_item[SelectedItem].num_val == 2){		
		Player_INFO_ID1 = Player_ID;
		}
		else if(menu_item[SelectedItem].num_val == 3){		
		Player_INFO_ID1 = 99;
		}
		else if(menu_item[SelectedItem].num_val == 4){		
		Player_INFO_ID2 = Player_ID;
		}
		else if(menu_item[SelectedItem].num_val == 5){		
		Player_INFO_ID2 = 99;
		}
		else if(menu_item[SelectedItem].num_val == 6){
		Player_INFO_ID3 = Player_ID;
		}
		else if(menu_item[SelectedItem].num_val == 7){
		Player_INFO_ID3 = 99;
		}
		else if(menu_item[SelectedItem].num_val == 8){//Move
		Move_Player_Info = !Move_Player_Info;
		}
		else if(menu_item[SelectedItem].num_val == 9){//Reset
		InfoDisplay_x = 0.4f;
		InfoDisplay_y = 0.1f;
		}
	}
	*/	
}

//!Add to functions where it belongs
void draw_number(char *gxtName, float x, float y, int val){
	DISPLAY_TEXT_WITH_NUMBER(x, y, gxtName, val);
}

void draw_text(char *gxtName, float x, float y, char *val){
 DISPLAY_TEXT_WITH_LITERAL_STRING(x, y, gxtName, val);
}


void MC_PlayerOptions_Loop(void){
	SET_GRAVITY_OFF(!GetBit(pPlayerOptionsBitSet,PLAYER_OPTION_GRAVITY));
	if(Attach_Player_Info){		
		//InfoDisplay_x = 0.4f;
		//InfoDisplay_y = 0.1f;	
		
		float Offset_X = 0.1250f; //Adjust column 2
		float Offset_X2 = 0.1000f;
		float Line_Height = 0.025f;
		//#define Gold				164,134,35
		#define ID_TextSize			0.1950f*0.85,0.3600f*0.85
		//#define ID_TextSize			0.1950f,0.3600f
		
		Ped Player_INFO_PED1, Player_INFO_PED2, Player_INFO_PED3;
		uint PColor_R1,PColor_G1,PColor_B1,PColor_R2,PColor_G2,PColor_B2,PColor_R3,PColor_G3,PColor_B3;
		int ARMOR1,HEALTH1,VEHICLEID1,VEHICLEHEALTH1,VEHICLEMODEL1;
		int ARMOR2,HEALTH2,VEHICLEID2,VEHICLEHEALTH2,VEHICLEMODEL2;
		int ARMOR3,HEALTH3,VEHICLEID3,VEHICLEHEALTH3,VEHICLEMODEL3;
		
		//DRAW_SPRITE(Background,InfoDisplay_x + 0.03, InfoDisplay_y + 0.0550f ,  0.3000f, 0.175, 0, 0, 0, 255, 150);	
		
		float Player2_Offset,Player3_Offset;
		if(Player_INFO_ID2 != 99 )Player2_Offset = 0.1000 ;
		else Player2_Offset = 0;
		if(Player_INFO_ID3 != 99 )Player3_Offset = 0.1000 ; 
		else Player3_Offset = 0; 
		if(Player_INFO_ID3 != 99 && Player_INFO_ID2 == 99)Player3_Offset = 0.2000 ;
		
		DRAW_CURVED_WINDOW(InfoDisplay_x - Offset_X2 - 0.01, InfoDisplay_y -(Line_Height*1.5), 0.2100f + Player2_Offset + Player3_Offset, 0.175, 100);	
		
		
		
		
		Set_Up_Draw(0.1950f*0.75,0.3600f*0.75,Gold,255,0,0,0);
		SET_TEXT_FONT(Menu_Font);
		DISPLAY_TEXT_WITH_LITERAL_STRING(InfoDisplay_x - Offset_X2, InfoDisplay_y - Line_Height, "STRING", "M D  E X T E N D   A N T I  C H E A T   P L A Y E R   I N F O");
				
		if(Player_INFO_ID1 != 99){
			if(PLAYER_HAS_CHAR(Player_INFO_ID1)){
				GET_PLAYER_CHAR(Player_INFO_ID1,&Player_INFO_PED1);
				if(DOES_CHAR_EXIST(Player_INFO_PED1)){
					GET_PLAYER_RGB_COLOUR(Player_INFO_ID1,&PColor_R1,&PColor_G1,&PColor_B1);
					GET_CHAR_ARMOUR(Player_INFO_PED1,&ARMOR1);
					GET_CHAR_HEALTH(Player_INFO_PED1,&HEALTH1);								
					if(IS_CHAR_IN_ANY_CAR(Player_INFO_PED1)){								
						GET_CAR_CHAR_IS_USING(Player_INFO_PED1, &VEHICLEID1);								
						GET_CAR_HEALTH(VEHICLEID1,&VEHICLEHEALTH1);//veh Health
						GET_CAR_MODEL(VEHICLEID1,&VEHICLEMODEL1);//veh model
					}
				}	
			}
			else Player_INFO_ID1 = 99;		
		}
		if(Player_INFO_ID2 != 99){
			if(PLAYER_HAS_CHAR(Player_INFO_ID2)){
				GET_PLAYER_CHAR(Player_INFO_ID2,&Player_INFO_PED2);
				if(DOES_CHAR_EXIST(Player_INFO_PED2)){
					GET_PLAYER_RGB_COLOUR(Player_INFO_ID2,&PColor_R2,&PColor_G2,&PColor_B2);
					GET_CHAR_ARMOUR(Player_INFO_PED2,&ARMOR2);
					GET_CHAR_HEALTH(Player_INFO_PED2,&HEALTH2);								
					if(IS_CHAR_IN_ANY_CAR(Player_INFO_PED2)){								
						GET_CAR_CHAR_IS_USING(Player_INFO_PED2, &VEHICLEID2);								
						GET_CAR_HEALTH(VEHICLEID2,&VEHICLEHEALTH2);//veh Health
						GET_CAR_MODEL(VEHICLEID2,&VEHICLEMODEL2);//veh model
					}
				}	
			}
			else Player_INFO_ID2 = 99;			
		}
		if(Player_INFO_ID3 != 99){
			if(PLAYER_HAS_CHAR(Player_INFO_ID3)){
				GET_PLAYER_CHAR(Player_INFO_ID3,&Player_INFO_PED3);
				if(DOES_CHAR_EXIST(Player_INFO_PED3)){
					GET_PLAYER_RGB_COLOUR(Player_INFO_ID3,&PColor_R3,&PColor_G3,&PColor_B3);
					GET_CHAR_ARMOUR(Player_INFO_PED3,&ARMOR3);
					GET_CHAR_HEALTH(Player_INFO_PED3,&HEALTH3);								
					if(IS_CHAR_IN_ANY_CAR(Player_INFO_PED3)){								
						GET_CAR_CHAR_IS_USING(Player_INFO_PED3, &VEHICLEID3);								
						GET_CAR_HEALTH(VEHICLEID3,&VEHICLEHEALTH3);//veh Health
						GET_CAR_MODEL(VEHICLEID3,&VEHICLEMODEL3);//veh model
					}
				}	
			}
			else Player_INFO_ID3 = 99;			
		}
		//!Generally
		Set_Up_Draw(ID_TextSize,Gold,255,0,0,0);
		DISPLAY_TEXT_WITH_LITERAL_STRING(InfoDisplay_x - Offset_X2, InfoDisplay_y + Line_Height, "STRING", "Health : ");			
		USE_PREVIOUS_FONT_SETTINGS();
		DISPLAY_TEXT_WITH_LITERAL_STRING(InfoDisplay_x - Offset_X2, InfoDisplay_y + Line_Height*2, "STRING", "Armour : ");			
		USE_PREVIOUS_FONT_SETTINGS();
		DISPLAY_TEXT_WITH_LITERAL_STRING(InfoDisplay_x - Offset_X2, InfoDisplay_y + Line_Height*3, "STRING", "V.Health : ");			
		USE_PREVIOUS_FONT_SETTINGS();
		DISPLAY_TEXT_WITH_LITERAL_STRING(InfoDisplay_x - Offset_X2, InfoDisplay_y + Line_Height*4, "STRING", "Vehicle : ");
		
		//!The names & info	
		if(Player_INFO_ID1 != 99){
			//!Name
			Set_Up_Draw(ID_TextSize,PColor_R1,PColor_G1,PColor_B1,255,0,0,0);
			SET_TEXT_FONT(Player_Name_Font);
			SET_TEXT_USE_UNDERSCORE(true);
			SET_TEXT_CENTRE(1);			
			DISPLAY_TEXT_WITH_LITERAL_STRING(InfoDisplay_x, InfoDisplay_y, "STRING", GET_PLAYER_NAME(Player_INFO_ID1));	
			//int ARMOR1,HEALTH1,VEHICLEID1,VEHICLEHEALTH1,VEHICLEMODEL1;
			Set_Up_Draw(ID_TextSize,255, 255, 255,255,0,0,0);
			SET_TEXT_CENTRE(1);
			draw_number("NUMBR", InfoDisplay_x , InfoDisplay_y + Line_Height,HEALTH1);			
			USE_PREVIOUS_FONT_SETTINGS();	
			draw_number("NUMBR", InfoDisplay_x , InfoDisplay_y + Line_Height*2,ARMOR1);			
			USE_PREVIOUS_FONT_SETTINGS();	
			draw_number("NUMBR", InfoDisplay_x , InfoDisplay_y + Line_Height*3,VEHICLEHEALTH1);
			USE_PREVIOUS_FONT_SETTINGS();
			if(COMPARE_STRING(GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(VEHICLEMODEL1),"null")){
			draw_text("STRING", InfoDisplay_x , InfoDisplay_y + Line_Height*4,"ON FOOT");
			}
			else draw_text("PC_PD_NAMES", InfoDisplay_x , InfoDisplay_y + Line_Height*4,GET_STRING_FROM_TEXT_FILE(GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(VEHICLEMODEL1)));
		}
		if(Player_INFO_ID2 != 99){
			//!Name
			Set_Up_Draw(ID_TextSize,PColor_R2,PColor_G2,PColor_B2,255,0,0,0);
			SET_TEXT_FONT(Player_Name_Font);
			SET_TEXT_USE_UNDERSCORE(true);
			SET_TEXT_CENTRE(1);			
			DISPLAY_TEXT_WITH_LITERAL_STRING(InfoDisplay_x + Offset_X, InfoDisplay_y, "STRING", GET_PLAYER_NAME(Player_INFO_ID2));	
			//int ARMOR1,HEALTH1,VEHICLEID1,VEHICLEHEALTH1,VEHICLEMODEL1;
			Set_Up_Draw(ID_TextSize,255, 255, 255,255,0,0,0);
			SET_TEXT_CENTRE(1);
			draw_number("NUMBR", InfoDisplay_x + Offset_X, InfoDisplay_y + Line_Height,HEALTH2);			
			USE_PREVIOUS_FONT_SETTINGS();	
			draw_number("NUMBR", InfoDisplay_x + Offset_X , InfoDisplay_y + Line_Height*2,ARMOR2);			
			USE_PREVIOUS_FONT_SETTINGS();	
			draw_number("NUMBR", InfoDisplay_x + Offset_X , InfoDisplay_y + Line_Height*3,VEHICLEHEALTH2);
			USE_PREVIOUS_FONT_SETTINGS();	
			if(COMPARE_STRING(GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(VEHICLEMODEL1),"null")){
			draw_text("STRING", InfoDisplay_x , InfoDisplay_y + Line_Height*4,"ON FOOT");
			}
			else draw_text("PC_PD_NAMES", InfoDisplay_x + Offset_X, InfoDisplay_y + Line_Height*4,GET_STRING_FROM_TEXT_FILE(GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(VEHICLEMODEL2)));
		}	
		if(Player_INFO_ID3 != 99){
			//!Name
			Set_Up_Draw(ID_TextSize,PColor_R3,PColor_G3,PColor_B3,255,0,0,0);
			SET_TEXT_FONT(Player_Name_Font);
			SET_TEXT_USE_UNDERSCORE(true);
			SET_TEXT_CENTRE(1);			
			DISPLAY_TEXT_WITH_LITERAL_STRING(InfoDisplay_x + (Offset_X*2), InfoDisplay_y, "STRING", GET_PLAYER_NAME(Player_INFO_ID3));	
			//int ARMOR1,HEALTH1,VEHICLEID1,VEHICLEHEALTH1,VEHICLEMODEL1;
			Set_Up_Draw(ID_TextSize,255, 255, 255,255,0,0,0);
			SET_TEXT_CENTRE(1);
			draw_number("NUMBR", InfoDisplay_x + (Offset_X*2) , InfoDisplay_y + Line_Height,HEALTH3);			
			USE_PREVIOUS_FONT_SETTINGS();	
			draw_number("NUMBR", InfoDisplay_x + (Offset_X*2) , InfoDisplay_y + Line_Height*2,ARMOR3);			
			USE_PREVIOUS_FONT_SETTINGS();	
			draw_number("NUMBR", InfoDisplay_x + (Offset_X*2) , InfoDisplay_y + Line_Height*3,VEHICLEHEALTH3);
			USE_PREVIOUS_FONT_SETTINGS();	
			if(COMPARE_STRING(GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(VEHICLEMODEL1),"null")){
			draw_text("STRING", InfoDisplay_x , InfoDisplay_y + Line_Height*4,"ON FOOT");
			}
			else draw_text("PC_PD_NAMES", InfoDisplay_x + (Offset_X*2), InfoDisplay_y + Line_Height*4,GET_STRING_FROM_TEXT_FILE(GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(VEHICLEMODEL3)));
		}	
		
	}	
	
	bool pPlayer_is_in_car = IS_CHAR_IN_ANY_CAR(pPlayer);
	if(GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_FLYMOD) && !IS_PAUSE_MENU_ACTIVE() && GetByteInSet(SpectateAndAttachByteSet, ATTACH_TYPE) != 3){
		if(!DOES_CAM_EXIST(scriptedCam)){
			CREATE_CAM(14, &scriptedCam);
			SET_CAM_ACTIVE(scriptedCam, true);
			SET_CAM_PROPAGATE(scriptedCam, true);
			ACTIVATE_SCRIPTED_CAMS(true, true);
			scriptedCamPitch = 0.0;
		}		
		Vehicle playerVehicle;
		Ped driver;
		int leftX, leftY, rightX, rightY;
		float x, y, z, heading;
		float moveTrig, moveSpeed;
		float flymodCamDistance, flymodCamOffsetX, flymodCamOffsetY, flymodCamOffsetZ, flymodCamOffsetTrig;
		FREEZE_CHAR_POSITION(pPlayer, true);
		ATTACH_CAM_TO_PED(scriptedCam, pPlayer);
		POINT_CAM_AT_PED(scriptedCam, pPlayer);
		if (IS_CHAR_IN_ANY_CAR(pPlayer)){
			uint playerVehicleModel;
			Vector3 playerVehicleModelMinDims, playerVehicleModelMaxDims;
			GET_CAR_CHAR_IS_USING(pPlayer, &playerVehicle);
			GET_CAR_MODEL(playerVehicle, &playerVehicleModel);
			GET_MODEL_DIMENSIONS(playerVehicleModel, &playerVehicleModelMinDims, &playerVehicleModelMaxDims);
			flymodCamDistance = 1.5 * (playerVehicleModelMaxDims.y - playerVehicleModelMinDims.y);
			GET_CAR_COORDINATES(playerVehicle, &x, &y, &z);
			GET_CAR_HEADING(playerVehicle, &heading);
		}
		else{
			GET_CHAR_COORDINATES_HEADING(pPlayer,&x,&y,&z,&heading);
			flymodCamDistance = 4.0;
		}		
		GET_POSITION_OF_ANALOGUE_STICKS(0, &leftX, &leftY, &rightX, &rightY);		
		heading = heading - (rightX * 0.035f);
		if (heading > 360.0f)heading -= 360.0f;
		if (heading < 0.0f)	heading += 360.0f;		
		scriptedCamPitch = ( IS_LOOK_INVERTED() ? (scriptedCamPitch + (0.035f * rightY)) : (scriptedCamPitch - (0.035f * rightY)) );
		if (scriptedCamPitch < -70.0)scriptedCamPitch = -70.0;
		if (scriptedCamPitch > 70.0)scriptedCamPitch = 70.0;
		
		if (IS_BUTTON_JUST_PRESSED(0,BUTTON_FLYMOD_RESET_PITCH))	scriptedCamPitch = 0.0f;	
		
		moveSpeed = 1.0f;
		if (IS_BUTTON_PRESSED(0,BUTTON_FLYMOD_FAST_BUTTON) && !IS_BUTTON_PRESSED(0,BUTTON_FLYMOD_SLOW_BUTTON))	moveSpeed = 4.0f;
		if (IS_BUTTON_PRESSED(0,BUTTON_FLYMOD_SLOW_BUTTON) && !IS_BUTTON_PRESSED(0,BUTTON_FLYMOD_FAST_BUTTON))	moveSpeed = 0.25f;
		moveTrig = (leftY * 0.0133f) * COS(scriptedCamPitch);
		x = x + (moveSpeed * ((moveTrig * SIN(heading)) + (leftX * 0.0133f) * COS(heading)));
		y = y - (moveSpeed * ((moveTrig * COS(heading)) - (leftX * 0.0133f) * SIN(heading)));
		z = z - (moveSpeed * (((leftY * 0.0133f) * SIN(scriptedCamPitch)) + (GET_CONTROL_VALUE(0, 6) * 0.0025f) - (GET_CONTROL_VALUE(0, 5) * 0.0025f)));
		
		if(pPlayer_is_in_car){
			GET_DRIVER_OF_CAR(playerVehicle, &driver);
			if(driver == pPlayer || !In_Network){
				SET_CAR_COORDINATES_NO_OFFSET(playerVehicle, x, y, z);
				SET_CAR_HEADING(playerVehicle, heading);
			}
		}
		else{
			SET_CHAR_COORDINATES_NO_OFFSET(pPlayer, x, y, z);
			SET_CHAR_HEADING(pPlayer, heading);
		}		
		//quaternion EulerToQuaternion(vector3 euler); //YAW, PITCH, ROLL
		 
		flymodCamOffsetTrig = (flymodCamDistance * COS(scriptedCamPitch - 18.0f));
		flymodCamOffsetX = flymodCamOffsetX + (flymodCamOffsetTrig * SIN(heading));
		flymodCamOffsetY = flymodCamOffsetY - (flymodCamOffsetTrig * COS(heading));
		flymodCamOffsetZ = flymodCamOffsetZ - (flymodCamDistance * SIN(scriptedCamPitch - 18.0f));

		SET_CAM_ATTACH_OFFSET(scriptedCam, flymodCamOffsetX, flymodCamOffsetY, flymodCamOffsetZ); //last attempt = uncomment this and comment one above..
		Set_Up_Draw(MDVersion_Txt_Size, Gold, Header_a,0,0,0);
		DISPLAY_TEXT_WITH_LITERAL_STRING( 0.19f, 0.754f, "STRING", "FLY-MOD OPTIONS");
		Set_Up_Draw(Info_Item_Text, 255, 255, 255, Header_a,0,0,0);
		DISPLAY_TEXT_WITH_LITERAL_STRING( 0.19f,0.782f, "STRING", "DISABLE - Hold:  ~PAD_LB~  +  ~PAD_RB~  +  ~PAD_LT~  +  ~PAD_RT~");
		USE_PREVIOUS_FONT_SETTINGS();
		DISPLAY_TEXT_WITH_LITERAL_STRING( 0.19f, 0.81f , "STRING", "Speed - Hold:  ~PAD_LB~  -  Slower,  ~PAD_RB~  -  Faster.");
		USE_PREVIOUS_FONT_SETTINGS();
		DISPLAY_TEXT_WITH_LITERAL_STRING( 0.19f, 0.838f, "STRING", "Height - Hold:  ~PAD_LT~  -  Down,  ~PAD_RT~  -  Up.");
		
		if(IS_BUTTON_PRESSED(0,BUTTON_R1) && IS_BUTTON_PRESSED(0,BUTTON_L1) && IS_BUTTON_PRESSED(0,BUTTON_R2) && IS_BUTTON_PRESSED(0,BUTTON_L2)){
			SET_CAM_ACTIVE(scriptedCam, false);
			SET_CAM_PROPAGATE(scriptedCam, false);
			ACTIVATE_SCRIPTED_CAMS(false, false);
			UNATTACH_CAM(scriptedCam);
			DESTROY_CAM(scriptedCam);
			while (DOES_CAM_EXIST(scriptedCam)) WAIT(0);
			SET_CAM_BEHIND_PED(pPlayer);
			scriptedCam = 0;
			FREEZE_CHAR_POSITION(pPlayer, false);
			SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_FLYMOD, false);
		}
	}	
	SET_CHAR_INVINCIBLE(pPlayer,GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_GODMODE));
	SET_PLAYER_NEVER_GETS_TIRED(iPlayer, GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_GODMODE));
	SET_PLAYER_FAST_RELOAD(iPlayer, GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_GODMODE));
	ENABLE_MAX_AMMO_CAP(!GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_GODMODE));
	SET_CHAR_NEVER_TARGETTED(pPlayer,GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_GODMODE));
	
	DISABLE_PLAYER_LOCKON(iPlayer, !GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_AUTO_AIM));
	ALLOW_LOCKON_TO_FRIENDLY_PLAYERS(iPlayer, GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_AUTO_AIM));
	ALLOW_LOCKON_TO_RANDOM_PEDS(iPlayer, GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_AUTO_AIM));
	
	/**Jugg Stuff**/
	if(GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_JUGGERNAUT)){
		uint armor,health;
		GET_CHAR_ARMOUR(pPlayer,&armor);
		GET_CHAR_HEALTH(pPlayer,&health);
		if(health < 500)SET_CHAR_HEALTH(pPlayer,500);
		if(armor < 200)	ADD_ARMOUR_TO_CHAR(pPlayer,(200 - armor));		
	}
	/**Ammo Stuff**/
	if(GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_INFINITE_AMMO) && IS_CHAR_SHOOTING(pPlayer)){
		uint weapon,ammo;
		GET_CURRENT_CHAR_WEAPON(pPlayer,&weapon);
		if(weapon != WEAPON_GRENADE && weapon != WEAPON_MOLOTOV){
			GET_MAX_AMMO_IN_CLIP(pPlayer,weapon,&ammo);
			SET_AMMO_IN_CLIP(pPlayer,weapon,ammo);
		}
	}
	/**Never Wanted**/
	if(GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_NEVER_WANTED)) CLEAR_WANTED_LEVEL(iPlayer);
	/**Super Powers**/
	if(!pPlayer_is_in_car){
		bool LB_IS_PRESSED = IS_BUTTON_PRESSED(0,BUTTON_LB);
		bool RB_IS_PRESSED = IS_BUTTON_PRESSED(0,BUTTON_RB);
		if(GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_SUPER_RUN)){
			if( (LB_IS_PRESSED || RB_IS_PRESSED) && IS_BUTTON_PRESSED(0,BUTTON_A))APPLY_FORCE_TO_PED(pPlayer,true,0.0, (LB_IS_PRESSED ? 100.0 : 10.0) ,0.0,0.0,0.0,0.0,true,true,true,true);						
		}	
		if(GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_SUPER_JUMP)){			
			if( (LB_IS_PRESSED || RB_IS_PRESSED) && IS_BUTTON_PRESSED(0,BUTTON_X))APPLY_FORCE_TO_PED(pPlayer,true,0.0, (LB_IS_PRESSED ? 1.2 : 0.0), (LB_IS_PRESSED ? 11.0 : 50.0),0.0,0.0,0.0,true,true,true,true);									
		}		
		if(GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_SUPER_PUNCH)){
			if(LB_IS_PRESSED && IS_BUTTON_PRESSED(0,BUTTON_B)){	
				int wep;
				GET_CURRENT_CHAR_WEAPON(pPlayer,&wep);
				if(wep == WEAPON_UNARMED){
					float punch_x,punch_y,punch_z;
					GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(pPlayer, 0, 2, 0, &punch_x, &punch_y, &punch_z);
					ADD_EXPLOSION(punch_x, punch_y, punch_z, EXPLOSION_SHIP_DESTROY, 10, 0, 1, 0);					
				}
			}
		}
	}
	/**Drive water Function --> Loop here or in network players ? //here.*/ 
	float x,y,z;
	int NetPlayer_ID,tmp;
    for(NetPlayer_ID = 0; NetPlayer_ID < MAX_PLAYERS; NetPlayer_ID++){	
    	if(!DOES_OBJECT_EXIST(drive_water[NetPlayer_ID])) continue;		
		#ifdef Admin
		if(NetPlayer_ID == iPlayer && AdminCommandTick != 0) continue; 		
		#endif		
		GET_PLAYER_CHAR(NetPlayer_ID,&tmp);
		if(DOES_CHAR_EXIST(tmp)){
			#ifdef Premium
			if(IS_CHAR_IN_ANY_CAR(tmp)){
				float speed;
				int tmp_veh;
				GET_CAR_CHAR_IS_USING(tmp,&tmp_veh);
				//GET_CAR_FORWARD_Y(tmp_veh,&speed); //no good, useless //doesn't take into account heading.
				GET_CHAR_SPEED(tmp,&speed); //mayaswell try not spam one type of native if possible (this is not used i dont think)
				int offset;
				if(speed > 18 && IS_CAR_UPRIGHT(tmp_veh) && !IS_BIG_VEHICLE(tmp_veh))offset = 18; 
				else offset = 8;				
				GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(tmp,0,offset,0,&x,&y,&z); //char heading = exact same as vehicles
				SET_OBJECT_COORDINATES(drive_water[NetPlayer_ID],x,y, IS_CHAR_IN_ANY_BOAT(tmp) ? -15.0 : -9.2);
			}
			else{
				GET_CHAR_COORDINATES(tmp,&x,&y,&z);
				float ox,oy;
				GET_OBJECT_COORDINATES(drive_water[NetPlayer_ID],&ox,&oy,&z);
				float birdsEyeDistance;
				GET_DISTANCE_BETWEEN_COORDS_2D(x,y,ox,oy, &birdsEyeDistance);
				if(birdsEyeDistance > 16.25f) SET_OBJECT_COORDINATES(drive_water[NetPlayer_ID],x,y,-9.2);				
			}	
			#else
			GET_CHAR_COORDINATES(tmp,&x,&y,&z);
			SET_OBJECT_COORDINATES(drive_water[NetPlayer_ID],x,y, IS_CHAR_IN_ANY_BOAT(tmp) ? -15.0 : -9.2);
			#endif
			FREEZE_OBJECT_POSITION(drive_water[NetPlayer_ID],true); //required
			//SET_OBJECT_VISIBLE(drive_water[NetPlayer_ID],true); //nathan testing
		}
		else DELETE_OBJECT(&drive_water[NetPlayer_ID]);
				
		//if(!In_Network) break; //cba making network a lil slower just for singleplayer, nobody cares for it. - Nathan
    }	
	GET_CHAR_COORDINATES(pPlayer,&x,&y,&z);	
	if(GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_FORCE_FIELD))ADD_EXPLOSION(x,y,z,EXPLOSION_SHIP_DESTROY,10.0,false,true,0.0);
	if(GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_INFERNO))	ADD_EXPLOSION(x,y,z,EXPLOSION_MOLOTOV,7.5,true,false,0.0);
	if(GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_REMOVE_BLIP)){ //OPTIMISED but not tested
		if(!pPlayer_is_in_car){
			uint pos[4]; 
			GET_POSITION_OF_ANALOGUE_STICKS(0,&pos[0],&pos[1],&pos[2],&pos[3]);
			if(pos[0] == 0 && pos[1] == 0){
				if(!(IS_BUTTON_PRESSED(0,BUTTON_L) || IS_BUTTON_PRESSED(0,BUTTON_R))){
					if(GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_FLAME_EFFECT)){
						ADD_EXPLOSION(x,y,z,EXPLOSION_MOLOTOV,7.5,true,false,0.0);
						SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_FLAME_EFFECT, false);		
					}
				}	
			}
			else SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_FLAME_EFFECT, true);
			SET_CAMERA_CONTROLS_DISABLED_WITH_PLAYER_CONTROLS(false);
			SET_CHAR_VISIBLE(pPlayer,GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_FLAME_EFFECT));
			SET_PLAYER_CONTROL(iPlayer,GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_FLAME_EFFECT));
		}
	}	
	
	if(GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_REMOVE_BLIP)){ //Fixed! - Devil	
		int vehicle;
		if(IS_CHAR_IN_ANY_CAR(pPlayer)){ 
			GET_CAR_CHAR_IS_USING(pPlayer,&vehicle);
			if(IS_BUTTON_PRESSED(0,BUTTON_L) || IS_BUTTON_PRESSED(0,BUTTON_R)){	
				SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_FLAME_EFFECT, true);				
				
			}		
			else{
				float ground,speed;
				GET_CHAR_SPEED(pPlayer,&speed);
				GET_GROUND_Z_FOR_3D_COORD(x,y,z,&ground);
				int height = (z - ground);
				if(speed < 0.08f && height < 3){
					if(GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_FLAME_EFFECT)){
						ADD_EXPLOSION(x,y,z,EXPLOSION_MOLOTOV,7.5,true,false,0.0);
						SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_FLAME_EFFECT, false);											
					}
				}		
			}	
			FREEZE_CAR_POSITION(vehicle,!PLAYER_OPTION_FLAME_EFFECT);
			SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_DESOLIDIFY, !PLAYER_OPTION_FLAME_EFFECT);
			SET_CAMERA_CONTROLS_DISABLED_WITH_PLAYER_CONTROLS(!PLAYER_OPTION_FLAME_EFFECT);
			SET_PLAYER_CONTROL(iPlayer,GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_FLAME_EFFECT));
			SET_CHAR_VISIBLE(pPlayer,GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_FLAME_EFFECT));
			SET_CAR_VISIBLE(vehicle,GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_FLAME_EFFECT));	
		}
	}
	
	if(Variations_Loop){
		SET_CHAR_RANDOM_COMPONENT_VARIATION(pPlayer);
		SET_CHAR_COMPONENT_VARIATION(pPlayer,0, 1,1);
	}	
}