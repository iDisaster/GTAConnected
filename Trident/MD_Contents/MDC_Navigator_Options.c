/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Current Version : TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */  
#pragma once
//Devil Gona redo this!

void MC_Navigator_Setup(const int Player_ID){
	Ped Player_PED;
	if(!PLAYER_HAS_CHAR(Player_ID))return Alert_Abort(Error_Char_Missing,false);
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);
	MENU_SUB_HEADER = "~BLIP_76~ Navigator Options ~BLIP_76~";
	NETWORK_FIRST_FOUR_ITEMS_MENU_SETUP();
	Add_JumpOver("~BLIP_94~ M D   N A V I G A T O R  ~BLIP_94~");	//5
	AddFunction_Value_CB("Player Help", 5); 		//6//Health - Give Armour - Remove Armour - Flip Vehicle - 
	AddFunction_Value_CB("Helper Loops", 4); //7//Auto Flip - Auto Fix - Juggernaut Player - Juggernaut Vehicle
	AddBool_CB("Drive/Walk on Water",DOES_OBJECT_EXIST(drive_water[Player_ID]));		
	AddFunction_Value_CB("Weapons", 4); 			//9//Poor - Advanced - Episodic - Remove 
	AddFunction_Value_CB("Vehicle Physics", 2); 		//10//Desolidify(Always) - Desolidify(Shooting) - Desolidify(Air) - Freeze Position
	AddFunction_Value_CB("Game Options", 6); 			//11//Burn Player - Burn Vehicle - Break Vehicle - Kill Player - Kick - Freak Out
	AddFunction_Value_CB("Canonball",12); 			//12//Heli / Patriot
	AddFunction_Value_CB("Forces",9); 					//13//
	AddFunction_Value_CB("Heading",6); 				//14//
	AddFunction_Value_CB("Transformer",6);			//15//Yes we will make this work on other players:)
	AddFunction_Value("Armed Vehicle",2);				//16//Rocket Car - Rocket Heli - Rapid Fire Heli(Premium only)
	AddFunction_Value_CB("Spawn & Help",5);			//17//Spawn Buzzard - Spawn Annihilator - Spawn Sultan RS - Armour
	return;
}

void MC_Navigator_Action(const int Player_ID){ 
    NETWORK_FIRST_FOUR_ITEMS_MENU_ACTION();			
	//Jumpover 5
	Ped Player_PED;
	Vehicle vehicle;
	uint vehicle_id;
	float heading, speed;	
	//!**Player Char Check**//
	if(!PLAYER_HAS_CHAR(Player_ID)){
	return Alert_Abort(Error_Char_Missing,false);
	}
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);   
			
	if(DOES_CHAR_EXIST(Player_PED)){
		if(SelectedItem == 6){
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
		else if(SelectedItem == 7){
			if(menu_item[SelectedItem].num_val == 1){
			ToggleBit(autoFixVehBitSet,Player_ID);
			}
			else if(menu_item[SelectedItem].num_val == 2){
			ToggleBit(autoFlipVehBitSet,Player_ID);
			}
			else if(menu_item[SelectedItem].num_val == 3){
			ToggleBit(infiniteArmourBitSet,Player_ID);
			}
			else if(menu_item[SelectedItem].num_val == 4){
			ToggleBit(freezeGunProtectBitSet,Player_ID);
			}
			else if(menu_item[SelectedItem].num_val == 5){
			if(IS_THIS_MACHINE_THE_SERVER())ToggleBit(neverWantedBitSet,Player_ID);			
			}			
		}
		else if(SelectedItem == 8){
			TOGGLE_DRIVE_WALK_WATER_FOR_PLAYER(Player_ID); //prints in function
			menu_item[SelectedItem].extra_val = IS_DRIVE_WALK_WATER_ENABLED_FOR_PLAYER(Player_ID);			
		}
		else if(SelectedItem == 9){
			if(menu_item[SelectedItem].num_val == 1){
				REMOVE_ALL_CHAR_WEAPONS(Player_PED);
				GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_DEAGLE,AMMO_MAX,false);//
				GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_GRENADE,AMMO_MAX,false);//
				GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_RLAUNCHER,AMMO_MAX,false);//
				GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_MP5,AMMO_MAX,false);//
				GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_M4,AMMO_MAX,false);//
				GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_BARETTA,AMMO_MAX,false);//
				GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_SNIPERRIFLE,AMMO_MAX,false);//
				GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_KNIFE,1,false);
				char * buffer[32]; //128 characters to play with
				Strcpy(buffer, "~b~MD: ~s~ "); //27 Characters				
				Strcat(buffer, "~s~advanced weapons given to: "); //27 Characters
				PLAYER_NAME_WITH_COLOUR(Player_ID, &buffer); //WORKS! 47				
				Strcat(buffer, ".");
				Alert(buffer,true);
			}
			else if(menu_item[SelectedItem].num_val == 2){//Poor
				REMOVE_ALL_CHAR_WEAPONS(Player_PED);
				GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_PISTOL,AMMO_MAX,false);
				GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_MOLOTOV,AMMO_MAX,false);
				GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_RLAUNCHER,AMMO_MAX,false);
				GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_MICRO_UZI,AMMO_MAX,false);
				GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_AK47,AMMO_MAX,false);
				GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_SHOTGUN,AMMO_MAX,false);
				GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_M40A1,AMMO_MAX,false);
				GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_KNIFE,1,false);
				char * buffer[32]; //128 characters to play with
				Strcpy(buffer, "~b~MD: ~s~ "); //27 Characters				
				Strcat(buffer, "~s~poor weapons given to: "); //27 Characters
				PLAYER_NAME_WITH_COLOUR(Player_ID, &buffer); //WORKS! 47				
				Strcat(buffer, ".");
				Alert(buffer,true);
			}
			else if(menu_item[SelectedItem].num_val == 3){//Ballad
				REMOVE_ALL_CHAR_WEAPONS(Player_PED);
				GIVE_EPISODIC_WEAPONS_TO_CHAR(Player_PED,Episode);
				char * buffer[32]; //128 characters to play with
				Strcpy(buffer, "~b~MD: ~s~ "); //27 Characters				
				Strcat(buffer, "~s~episodic weapons given to: "); //27 Characters
				PLAYER_NAME_WITH_COLOUR(Player_ID, &buffer); //WORKS! 47				
				Strcat(buffer, ".");
				Alert(buffer,true);	
			}
			else if(menu_item[SelectedItem].num_val == 4){
				REMOVE_ALL_CHAR_WEAPONS(Player_PED);
				char * buffer[32]; //128 characters to play with
				Strcpy(buffer, "~b~MD: ~s~ "); //27 Characters				
				Strcat(buffer, "~s~weapons were removed from: "); //27 Characters
				PLAYER_NAME_WITH_COLOUR(Player_ID, &buffer); //WORKS! 47				
				Strcat(buffer, ".");
				Alert(buffer,true);	
			}
		}
		else if(SelectedItem == 10){//Physics
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
			if(menu_item[SelectedItem].num_val == 1){
			ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_DESOLIDIFY);		
				if(!GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_DESOLIDIFY)) SET_CAR_COLLISION(vehicle,true);
				else SET_CAR_COLLISION(vehicle,false);
				char * buffer[32]; //128 characters to play with
				Strcpy(buffer, "~b~MD: "); //27 Characters
				PLAYER_NAME_WITH_COLOUR(Player_ID, &buffer); //WORKS! 47
				Strcat(buffer, "'s ~s~"); //27 Characters
				Strcat(buffer, VEHICLES_MODEL_NAME(vehicle));
				GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_DESOLIDIFY) ? Strcat(buffer, "~s~ has been solidified") : Strcat(buffer, "~s~ is solid again"); //27 Characters
				Strcat(buffer, ".");
				Alert(buffer,true);				
			
			}		
			else if(menu_item[SelectedItem].num_val == 2){
				
				ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_FREEZE_POS );
				FREEZE_CAR_POSITION(vehicle,GetBit(VehicleOptionsBitSet,VEHICLE_OPTION_FREEZE_POS));				
				char * buffer[32]; //128 characters to play with
				Strcpy(buffer, "~b~MD: "); //27 Characters
				PLAYER_NAME_WITH_COLOUR(Player_ID, &buffer); //WORKS! 47
				Strcat(buffer, "'s ~s~"); //27 Characters
				Strcat(buffer, VEHICLES_MODEL_NAME(vehicle));
				GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_FREEZE_POS) ? Strcat(buffer, "~s~ position has been frozen") : Strcat(buffer, "~s~ position was unfrozen"); //27 Characters
				Strcat(buffer, ".");
				Alert(buffer,true);					
			}			
		}
		else if(SelectedItem == 11){//Unfriendly
			if(menu_item[SelectedItem].num_val == 1){
			Print_Kill_Feed = !Print_Kill_Feed;		
			Alert_Two("~BLIP_76~ ~c~KillFeed", Print_Kill_Feed ? PrintON : PrintOFF ,false);	
			}
			else if(menu_item[SelectedItem].num_val == 2){
			Alert("Lets keep this in unfriendly",false);
			}
			else if(menu_item[SelectedItem].num_val == 3){
			Alert("Lets keep this in unfriendly",false);
			}
			else if(menu_item[SelectedItem].num_val == 4){
			Alert("Lets keep this in unfriendly",false);
			}
			else if(menu_item[SelectedItem].num_val == 5){
			Alert("Lets keep this in unfriendly",false);
			}
			else if(menu_item[SelectedItem].num_val == 6){
			Alert("Lets keep this in unfriendly",false);
			}		
		}
		else if(SelectedItem == 12){//Canonball
			if(menu_item[SelectedItem].num_val == 1)Ram_Player_Vehicle(Player_ID,MODEL_ANNIHILATOR);			
			else if(menu_item[SelectedItem].num_val == 2){
				if(Episode == 2)Ram_Player_Vehicle(Player_ID,MODEL_BUZZARD);
				else Ram_Player_Vehicle(Player_ID,MODEL_MAVERICK);				
			}
			else if(menu_item[SelectedItem].num_val == 3)Ram_Player_Vehicle(Player_ID,MODEL_SULTANRS);
			else if(menu_item[SelectedItem].num_val == 4)Ram_Player_Vehicle(Player_ID,MODEL_NRG900);
			else if(menu_item[SelectedItem].num_val == 5)Ram_Player_Vehicle(Player_ID,MODEL_AMBULANCE);
			else if(menu_item[SelectedItem].num_val == 6)Ram_Player_Vehicle(Player_ID,MODEL_FBI);
			else if(menu_item[SelectedItem].num_val == 7)Ram_Player_Vehicle(Player_ID,MODEL_FIRETRUK);
			else if(menu_item[SelectedItem].num_val == 8)Ram_Player_Vehicle(Player_ID,MODEL_NOOSE);
			else if(menu_item[SelectedItem].num_val == 9)Ram_Player_Vehicle(Player_ID,MODEL_POLICE);
			else if(menu_item[SelectedItem].num_val == 10)Ram_Player_Vehicle(Player_ID,MODEL_POLICE2);
			else if(menu_item[SelectedItem].num_val == 11)Ram_Player_Vehicle(Player_ID,MODEL_POLPATRIOT);
			else if(menu_item[SelectedItem].num_val == 12)Ram_Player_Vehicle(Player_ID,MODEL_PSTOCKADE);
			
		}
		else if(SelectedItem == 13){
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
			if(menu_item[SelectedItem].num_val == 1)APPLY_FORCE_TO_CAR(vehicle,3,0,0,1000,0,0,0,0, 1, 1, 1);
			else if(menu_item[SelectedItem].num_val == 2)APPLY_FORCE_TO_CAR(vehicle,3,0,0,-1000,0,0,0,0, 1, 1, 1);
			else if(menu_item[SelectedItem].num_val == 3)APPLY_FORCE_TO_CAR(vehicle,3,-60,0,0,0,-60,0,0, 1, 1, 1);
			else if(menu_item[SelectedItem].num_val == 4)APPLY_FORCE_TO_CAR(vehicle,3,60,0,0,0,-60,0,0, 1, 1, 1);
			else if(menu_item[SelectedItem].num_val == 5)APPLY_FORCE_TO_CAR(vehicle,3,0,60,10.0,0,0,-10.0,0, 1, 1, 1);
			else if(menu_item[SelectedItem].num_val == 6)APPLY_FORCE_TO_CAR(vehicle,3,0,-60,10.0,0,0,-10.0,0, 1, 1, 1);
			else if(menu_item[SelectedItem].num_val == 7){
				ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_FREEZE_POS );
				FREEZE_CAR_POSITION(vehicle,GetBit(VehicleOptionsBitSet,VEHICLE_OPTION_FREEZE_POS));
			}
			else if(menu_item[SelectedItem].num_val == 8){
				int z;
				for(z = 0; z < 4; z++){
					BREAK_CAR_DOOR(vehicle,z,true);
					BURST_CAR_TYRE(vehicle,z);
					REMOVE_CAR_WINDOW(vehicle,z);
				}
				START_CAR_FIRE(vehicle);
				SET_ENGINE_HEALTH(vehicle,-5);
				SET_CAR_ENGINE_ON(vehicle,false,false);
				char * buffer[32]; //128 characters to play with
				Strcpy(buffer, "~b~MD: ~s~ "); //27 Characters				
				Strcat(buffer, "~s~damaged the"); //27 Characters
				Strcat(buffer, VEHICLES_MODEL_NAME(vehicle));
				Strcat(buffer, "~s~from: "); //27 Characters
				PLAYER_NAME_WITH_COLOUR(Player_ID, &buffer); //WORKS! 47				
				Strcat(buffer, ".");
				Alert(buffer,true);	
			}
			else if(menu_item[SelectedItem].num_val == 9){
				FIX_CAR(vehicle);
				SET_CAR_ENGINE_ON(vehicle,true,true);
				SET_VEHICLE_DIRT_LEVEL(vehicle, 0);
				char * buffer[32]; //128 characters to play with
				Strcpy(buffer, "~b~MD: ~s~ "); //27 Characters				
				Strcat(buffer, "~s~fixed the"); //27 Characters
				Strcat(buffer, VEHICLES_MODEL_NAME(vehicle));
				Strcat(buffer, "~s~from: "); //27 Characters
				PLAYER_NAME_WITH_COLOUR(Player_ID, &buffer); //WORKS! 47				
				Strcat(buffer, ".");
				Alert(buffer,true);	
			}			
		}
		else if(SelectedItem == 14){
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
			float Vehicle_Heading_Change;
			if(menu_item[SelectedItem].num_val > 0 || menu_item[SelectedItem].num_val < 6){
				GET_CAR_SPEED(vehicle,&speed);
				GET_CAR_HEADING(vehicle,&Vehicle_Heading_Change);
			}
			if(menu_item[SelectedItem].num_val == 1)SET_CAR_FORWARD_SPEED(vehicle,speed*3);
			if(menu_item[SelectedItem].num_val == 2){
			SET_CAR_HEADING(vehicle,Vehicle_Heading_Change-180);
			SET_CAR_FORWARD_SPEED(vehicle,speed*3);
			}
			if(menu_item[SelectedItem].num_val == 3){
			SET_CAR_HEADING(vehicle,Vehicle_Heading_Change - 180);
			SET_CAR_FORWARD_SPEED(vehicle,speed);		
			}
			if(menu_item[SelectedItem].num_val == 4){
			SET_CAR_HEADING(vehicle,Vehicle_Heading_Change + 90.00f);
			SET_CAR_FORWARD_SPEED(vehicle,speed);		
			}
			if(menu_item[SelectedItem].num_val == 5){
			SET_CAR_HEADING(vehicle,Vehicle_Heading_Change - 90.00f);
			SET_CAR_FORWARD_SPEED(vehicle,speed);		
			}	
			if(menu_item[SelectedItem].num_val == 6){
			ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_ROTATE);
			}
		}
		else if(SelectedItem == 15){
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
			
			
			if(menu_item[SelectedItem].num_val == 1){
				Vehicle_Transformer(Player_ID, 1);
			}
			else if(menu_item[SelectedItem].num_val == 2){
				Vehicle_Transformer(Player_ID, 2);
			}
			else if(menu_item[SelectedItem].num_val == 3){
				Vehicle_Transformer(Player_ID, 3);
			}
			else if(menu_item[SelectedItem].num_val == 4){		
				turn_car_into_heli(vehicle);		
			}
			else if(menu_item[SelectedItem].num_val == 5){
				delete_transformers_on_vehicle(vehicle);
				SET_CHAR_VISIBLE(Player_PED,true);
				SetBit(VehicleOptionsBitSet, !VEHICLE_OPTION_INVISIBLE,false);	
				SET_CAR_VISIBLE(vehicle,true);	
			}
			else if(menu_item[SelectedItem].num_val == 6){
				delete_transformers_on_vehicle(vehicle);
				SET_CHAR_VISIBLE(Player_PED,true);
				SetBit(VehicleOptionsBitSet, !VEHICLE_OPTION_INVISIBLE,false);	
				if(IS_CHAR_IN_ANY_CAR(Player_PED))DELETE_CAR(&vehicle);				
			}
		}
		else if(SelectedItem == 16){
			if(menu_item[SelectedItem].num_val == 1){
			MD_Weapon_Vehicle = !MD_Weapon_Vehicle;
			if(MD_Weapon_Vehicle)Vehicle_Weapon = WEAPON_SNIPERRIFLE;
			}
			else if(menu_item[SelectedItem].num_val == 2){
				Devils_Rapid_Fire_Heli = !Devils_Rapid_Fire_Heli;
				if(Devils_Rapid_Fire_Heli)Vehicle_Weapon = WEAPON_SNIPERRIFLE;
			}				
		}
		else if(SelectedItem == 17){
			if(menu_item[SelectedItem].num_val == 1)MD_VEHICLE_SPAWNER_ON_ID(Player_ID,MODEL_ANNIHILATOR);			
			if(menu_item[SelectedItem].num_val == 2)(Episode == 2) ? MD_VEHICLE_SPAWNER_ON_ID(Player_ID,MODEL_BUZZARD) : MD_VEHICLE_SPAWNER_ON_ID(Player_ID,MODEL_MAVERICK);				
			
			if(menu_item[SelectedItem].num_val == 3)MD_VEHICLE_SPAWNER_ON_ID(Player_ID,MODEL_SULTANRS);
			if(menu_item[SelectedItem].num_val == 4)MD_VEHICLE_SPAWNER_ON_ID(Player_ID,MODEL_NRG900);
			if(menu_item[SelectedItem].num_val == 5){
				ADD_ARMOUR_TO_CHAR(Player_PED,200);
				char * buffer[32]; //128 characters to play with
				Strcpy(buffer, "~b~MD: ~s~Armour was given to "); //27 Characters
				PLAYER_NAME_WITH_COLOUR(Player_ID, &buffer); //WORKS! 47
				Strcat(buffer, ".");
				Alert(buffer,false);					
			}			
		}		
	}
} 
