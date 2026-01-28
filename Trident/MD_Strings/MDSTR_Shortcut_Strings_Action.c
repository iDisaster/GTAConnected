/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */  

#pragma once

void MD_Spy_Strings_Action(int playerIndex){
	if(!PLAYER_HAS_CHAR(playerIndex)) return;
	SetBit(MD_Misc_OptionsBitSet, MD_MISC_AUTO_SPECTATE, (menu_item[SelectedItem].num_val == 2)); 
	if(menu_item[SelectedItem].num_val > 0 && menu_item[SelectedItem].num_val < 3){
		SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_FLYMOD, false);		
		char * buffer[64];
		Strcpy(buffer, "~b~MD: ~s~");		
		if(Player_Display_Selection(playerIndex)){
			Strcat(buffer, "You cannot spy on ");
			PLAYER_NAME_WITH_COLOUR(playerIndex, &buffer); //WORKS!
			Strcat(buffer, "~s~.");
			Alert(buffer,false);
			return;
		}
		else{			
			SetByteSet(&SpectateAndAttachByteSet, SPECTATE_PLAYER_INDEX, playerIndex);
			/* //Lets have peoples attention drawn to the spectate shotrcut draws and not the whack useless print :) - Nathan
			Strcat(buffer, "Spectating: "); //31
			PLAYER_NAME_WITH_COLOUR(playerIndex, &buffer); //WORKS! 40
			Strcat(buffer, "~s~.~n~~PAD_LB~ & ~PAD_RB~ to disable."); //74
			Alert(buffer,false);
			*/
		}
		
	}	
	else if(menu_item[SelectedItem].num_val == 3){
		if(GetByteInSet(SpectateAndAttachByteSet, ATTACH_TYPE) == 3){
			Detach_pPlayer_On_Coord();
			Alert("~b~MD: ~s~Spectate mode disabled for flymod!",false);
		}
		bool flymod = GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_FLYMOD);
			if(flymod)
			{
				if(DOES_CAM_EXIST(scriptedCam))
				{
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
			SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_FLYMOD, !flymod);
	}	
}


void MD_PlayerOption_Strings_Action(){ //this is all pplayer, why pass playerindex and char at all... pfft - Nathan
	bool VehicleAlert;
	if(VehicleAlert){
		if(!IS_CHAR_IN_ANY_CAR(pPlayer)){
		Alert(Error_Personal_Vehicle,false);
		return;
		}
	}
	if(menu_item[SelectedItem].num_val == 1){
		SET_CHAR_HEALTH(pPlayer,500);
		ADD_ARMOUR_TO_CHAR(pPlayer,200);
		GIVE_EPISODIC_WEAPONS_TO_CHAR(pPlayer,Episode);
		Alert("~b~MD: ~s~Health, armour and weapons given.", false);
	}
	else if(menu_item[SelectedItem].num_val == 2){
		ToggleBit(MD_Misc_OptionsBitSet, MD_MISC_MUTE_ALL);
		menu_item[SelectedItem].extra_val = GetBit(MD_Misc_OptionsBitSet, MD_MISC_MUTE_ALL);
		MUTE_ALL_PLAYERS(GetBit(MD_Misc_OptionsBitSet, MD_MISC_MUTE_ALL)); //Nice!
		char * buffer[16]; // 64 chars
		Strcpy(buffer, "~b~MD: ~s~All players have been "); //32
		Strcat(buffer, GetBit(MD_Misc_OptionsBitSet, MD_MISC_MUTE_ALL) ? "~COL_NET_4~muted" : "~COL_NET_3~un-muted"); //19 = 51
		Strcat(buffer, "~s~."); //55 chars
		Alert(buffer,false);							
	}
	else if(menu_item[SelectedItem].num_val == 3){
		char * buffer[32];
		Strcpy(buffer, "~b~MD: ~s~You will die in 2 seconds"); //37
		if(Episode == 0) //Original
		{
			Strcat(buffer, ", pause the game to stay dead"); //29
		}
		Strcat(buffer, "."); //67 chars
		Alert(buffer,false);
		int die;
		for(die = 0;die <= 80;die++)WAIT(0);		 ///looooooooooool
		SET_CHAR_HEALTH(pPlayer,-1);
	}
	else if(menu_item[SelectedItem].num_val == 4){ 
		
		SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_GODMODE, true);
		SET_PLAYER_INVINCIBLE(iPlayer, true);
		SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE, true);
		Detach_pPlayer();
		MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_ANNIHILATOR);
		if(IS_CHAR_IN_ANY_HELI(pPlayer))
		{
			MD_Teleport_ID_Heading(iPlayer, 3706.1404,  -2496.5984, 0.9329, 94.6);	
			Alert("~b~MD: ~s~You were teleported to the safe zone, explosions will not render out here.",false);		
		}				
	}			
	else if(menu_item[SelectedItem].num_val == 5){	
		if(GetByteInSet(SpectateAndAttachByteSet, ATTACH_TYPE) == 3){
		Alert("~b~MD: ~s~Fuction disabled in spymode",false);
		return;		
		}
		VehicleAlert = true;
			GET_CAR_CHAR_IS_USING(pPlayer, &Personal_Vehicle);
			FIX_CAR(Personal_Vehicle);
			SET_VEHICLE_DIRT_LEVEL(Personal_Vehicle, 0);
			SET_CAR_ENGINE_ON(Personal_Vehicle,true,true);
			Alert("~b~MD: ~s~Vehicle fixed.",false);					
	}
	else if(menu_item[SelectedItem].num_val == 6){
		if(GetByteInSet(SpectateAndAttachByteSet, ATTACH_TYPE) == 3){
		Alert("~b~MD: ~s~Fuction disabled in spymode",false);
		return;		
		}
		VehicleAlert = true;
		Vehicle Personal_Vehicle;
		GET_CAR_CHAR_IS_USING(pPlayer, &Personal_Vehicle);
		if(!IS_CHAR_IN_ANY_HELI(pPlayer)){
			float h;
			GET_CAR_HEADING(Personal_Vehicle,&h);
			SET_VEHICLE_QUATERNION(Personal_Vehicle,0,0,0,0);
			SET_CAR_HEADING(Personal_Vehicle,h);
			SET_CAR_ON_GROUND_PROPERLY(Personal_Vehicle);
			Alert("~b~MD: ~s~Your vehicle was flipped.",false);					
		}
		else Alert("~b~MD: ~s~Function disabled for heli's.",false);				
	}
	else if(menu_item[SelectedItem].num_val == 7){
		if(GetByteInSet(SpectateAndAttachByteSet, ATTACH_TYPE) == 3){
		Alert("~b~MD: ~s~Fuction disabled in spymode",false);
		return;		
		}
		
		VehicleAlert = true;
		Vehicle Personal_Vehicle;
		GET_CAR_CHAR_IS_USING(pPlayer, &Personal_Vehicle);
		if(is_driving(pPlayer)){
			DELETE_CAR(&Personal_Vehicle);
			Alert("~b~MD: ~s~Vehicle deleted.",false);										
		}
	}		
	else if(menu_item[SelectedItem].num_val == 8){
	if(GetByteInSet(SpectateAndAttachByteSet, ATTACH_TYPE) != 3)MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_SULTANRS);		
	}
	else if(menu_item[SelectedItem].num_val == 9){
	if(GetByteInSet(SpectateAndAttachByteSet, ATTACH_TYPE) != 3)MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_ANNIHILATOR);		
	}	
	else if(menu_item[SelectedItem].num_val == 10){
	if(GetByteInSet(SpectateAndAttachByteSet, ATTACH_TYPE) == 3) Detach_pPlayer();
	MD_Teleport_ID_Heading(iPlayer, 2219.8132, 745.6130, 5.830, 0.0);		
	}
}


void MD_QuickTeleport_Strings_Action(int playerIndex){
	if(menu_item[SelectedItem].num_val != 5){
		if(!PLAYER_HAS_CHAR(playerIndex)) return;
	}
	int Net_Ped = PLAYER_CHAR(playerIndex);
	int Net_Vehicle;
	float x,y,z,h;
	int rand;
	GENERATE_RANDOM_INT_IN_RANGE(0,2,&rand);
	bool player_is_in_car = IS_CHAR_IN_ANY_CAR(Net_Ped);
	bool pPlayer_is_in_car = IS_CHAR_IN_ANY_CAR(pPlayer);	
	if(menu_item[SelectedItem].num_val == 1){
		if(GetByteInSet(SpectateAndAttachByteSet, ATTACH_TYPE) == 3)Detach_pPlayer();			
		Teleport_iPlayer_To_PlayerIndex(playerIndex, false);	
	}
	else if(menu_item[SelectedItem].num_val == 2){
		if(GetByteInSet(SpectateAndAttachByteSet, ATTACH_TYPE) == 3)Detach_pPlayer();			
		Teleport_iPlayer_To_PlayerIndex(playerIndex, true);
	}
	else if(menu_item[SelectedItem].num_val == 3){
		char * buffer[32];
		Strcpy(buffer, "~b~MD: ");
		PLAYER_NAME_WITH_COLOUR(playerIndex, &buffer); //WORKS!
		if(player_is_in_car){
		GET_CAR_CHAR_IS_USING(Net_Ped,&Net_Vehicle);
		int model;
		GET_CAR_MODEL(Net_Vehicle,&model); //used for string below
		if(WARP_PED_INTO_VEHICLE(pPlayer,Net_Vehicle)){
			return;
		}
			Strcat(buffer, "'s ~s~");
			Strcat(buffer, GET_STRING_FROM_TEXT_FILE(GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(model)));
			Strcat(buffer, " is full.");
		}
		else{
			Strcat(buffer, " ~s~isn't in a vehicle.");				
		}
		Alert(buffer, false); 
	}
	else if(menu_item[SelectedItem].num_val == 4){
		if(Net_Ped == pPlayer){
		Alert("~b~MD: ~s~U can't teleport urself to urself dumbass!",false);
		return;
		}
		/*
		int Net_Vehicle_ID;
		GET_CAR_CHAR_IS_USING(Net_Ped,&Net_Vehicle);
		GET_NETWORK_ID_FROM_VEHICLE(Net_Vehicle,&Net_Vehicle_ID);
		*/
		float x,y,z,h;
		//int lol;
		//GET_CHAR_HEADING(pPlayer,&h);
		if(!IS_CHAR_IN_ANY_CAR(pPlayer))GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(pPlayer,-2.7f,0,-0.5,&x,&y,&z);
		else GET_OFFSET_FROM_CAR_IN_WORLD_COORDS(GetPlayerVeh(),-3,0,0,&x,&y,&z);		
		MD_Teleport_ID(playerIndex,x,y,z);
		/*
		int lol;
		GET_CHAR_HEADING(pPlayer,&h);
		if(!IS_CHAR_IN_ANY_CAR(pPlayer)){
		 if(lol == 1) GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(pPlayer,2.7f,0,-0.5,&x,&y,&z);
		 else GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(pPlayer,-2.7f,0,-0.5,&x,&y,&z);
		}
		else{
		if(lol == 1) GET_OFFSET_FROM_CAR_IN_WORLD_COORDS(GetPlayerVeh(),3,0,0,&x,&y,&z);
		else GET_OFFSET_FROM_CAR_IN_WORLD_COORDS(GetPlayerVeh(),-3,0,0,&x,&y,&z);
		}
		if(DOES_VEHICLE_EXIST(Net_Vehicle) && network_control(Net_Vehicle_ID)){
		GENERATE_RANDOM_INT_IN_RANGE(0,2,&lol);
		GET_CHAR_HEADING(pPlayer,&h);
		SET_CAR_COORDINATES(Net_Vehicle,x,y,z);
		SET_CAR_FORWARD_SPEED(Net_Vehicle,0.0f);
		SET_CAR_HEADING(Net_Vehicle,h);
		SET_CAR_ON_GROUND_PROPERLY(Net_Vehicle);
		Alert("~BLIP_76~ ~c~Teleported Player to You ~n~~w~Player Can Be Teleported on Foot If Your Host!",false);
		}
		else{
		h = (h - 180);
		z = (z - 1);		
		REGISTER_PLAYER_RESPAWN_COORDS(playerIndex, x, y, z);
		REQUEST_COLLISION_AT_POSN( x, y, z );
		RESURRECT_NETWORK_PLAYER(playerIndex,x,y,z,h);
		}
		*/		
		
	}
	else if(menu_item[SelectedItem].num_val == 5){	
		RESURRECT_NETWORK_PLAYER(playerIndex,3600.0f,1251.0f,-1.0f, 0);		
	}	
	else if(menu_item[SelectedItem].num_val == 6){
		Detach_pPlayer();
	}
}

//Nathan begin cleanup.......
void NETWORK_FIRST_FOUR_ITEMS_MENU_SETUP(void)
{
	AddFunction_ValueLine_CB(3);												//1		Spy Auto or not auto					
	AddFunction_Value("Quick~c~ Delete",12);									//2  	//Delete All Peds / Delete All Vehicles / Delete abandoned Vehicles / Delete all Objects / AutoDelete Objects ON/ AutoDelete Objects OFF
	AddFunction_Value("Quick~c~ Options",10);									//3		Exact Number of strings					//3
	AddFunction_Value_CB("Quick~c~ Teleport",6);								//4
	menu_item[4].num_val = (IS_CHAR_IN_ANY_CAR(pPlayer) ? 2 : 1);
}

void NETWORK_FIRST_FOUR_ITEMS_MENU_ACTION(void)
{	
	if(SelectedItem > 4) return;
	else if(SelectedItem == 1) 
	{
		MD_Spy_Strings_Action( players[ChangeNetPlayer].id);
	}
	else if(SelectedItem == 2) Universal_Delete(Delete_Distance_Radius, menu_item[SelectedItem].num_val, true);		
	else if(SelectedItem == 3) MD_PlayerOption_Strings_Action();	
	else if(SelectedItem == 4 ) MD_QuickTeleport_Strings_Action( players[ChangeNetPlayer].id);
	/*
		switch(SelectedItem) //ready for ap ii..
		{
			case 1:
				MD_Spy_Strings_Action(players[ChangeNetPlayer].id);
				break;
			case 2:
				Universal_Delete(Delete_Distance_Radius, menu_item[SelectedItem].num_val, true);
				break;
			case 3:
				MD_PlayerOption_Strings_Action();
				break;
			case 4:
				MD_QuickTeleport_Strings_Action( players[ChangeNetPlayer].id);
				break;
			default:
				return;		
		}
	*/
}
