/**
 * @ MD EXTEND+
 * @ Version MDv13 TRIDENT(Essentials Based)
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */

#pragma once


void MD_VehOpt_NetPlayer_Setup(void){	
	MENU_SUB_HEADER = "Network Vehicle Options";
	NETWORK_FIRST_FOUR_ITEMS_MENU_SETUP(); 
	Add_JumpOver("~BLIP_94~  V E H I C L E   N E T   O P T I O N S ~BLIP_94~");				//5
	AddSubMenu("~BLIP_73~ ~b~MD ~c~Full Spawner  ~PAD_RIGHT~");						//6
	AddSubMenu("~BLIP_73~ ~b~MD ~c~Garage ~y~(Addons & Colours)  ~PAD_RIGHT~");		//7
	AddSubMenu("~BLIP_73~ ~b~MD ~c~Upgrades ~PAD_RIGHT~");							//8
	AddFunction_Value_CB("Quick Spawn",13); 												//9	- Favorite cars		
	AddFunction_Value_CB("General",7); 														//10 //Fix & wash , flip, delete, try damage proof, Make visible, Make invisible, Clone!
	//AddFunction_Value("Spawn Settings", 8); (ADD THIS PLEASE!!! completely rigged in veh pPlayer)!
	AddFunction_Value_CB("Heading", 5); 													//11 //Speedboost, Reverse + Speedboost, Reverse, Turn Right, Turn Left 
	AddFunction_Value_CB("Vehicle helpers",2); 												//12 //auto fix, auto flip, auto spawn boat for player in water? two bitsets, one for bool, one for bool has spawned :P, mark as no longer needed upon spawning so it doesnt fuck the game.. IMPORTANT
	AddFunction_Value_CB("Throw",6); //up down left right forwards backwards 				//13 //up down left right forwards backwards
	/**Devils suggestions**/
	//AddFunction_Value_CB("Spawn Settings",10);	//1. bool Multiple Spawns Lined up OOOORRR 2. bool Multiple Spawns Circular // 3. Emergency Lights / 4. Headlights / 5. Horn / 6. Alarm	/ 7.Invincible
	//AddFunction_Value_CB("Multi Spawner",14);		//Sultan RS / Sentinel / Infernus / Comet / Mix Sports / Mix 2 door / Mix 4 door / Mix Police / Mix SUV / Mix Truck / Mix Boat / Mix Bike / Mix Heli / Annihilator
	//AddFunction_Value_CB("Vehicle control",14);	//Lock Doors - Freeze position ..
	
	//AddFunction_CB("~BLIP_52~ Delete");								//4
	//AddFunction_CB("~BLIP_52~ Make invincible");						//5
	//AddBool_CB("~BLIP_68~ Lock doors",IS_CHARS_VEHICLE_LOCKED(PLAYER_CHAR(players[ChangeNetPlayer].id))); 	//6 //Nathan's custom functions :D
	//AddFunction_CB("~BLIP_52~ Flip");									//7
	//AddFunction_CB("~BLIP_52~ Fix");									//8
	//AddFunction_CB("~BLIP_52~ Set Invisible");							//9
	/*
	AddFunction_CB("~BLIP_52~ Reverse Heading");						//10
	AddBool_CB("~BLIP_68~ Freeze Position",GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_FREEZE_POS));			//11
	AddBool_CB("~BLIP_68~ Set translucent (Desolidify)",GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_WIPEOUT_HELI));; //Wipeout_Heli);	//12
	AddFunction_Value_CB("~BLIP_52~ Throw",4);							//13 //need: Up, Down, Left, Right, Forwards, Backwards
	AddFunction_CB("~BLIP_52~ Give Speed-Boost");						//14
	AddFunction_CB("~BLIP_52~ Reverse & give Speed-Boost");			//15
	AddFunction_CB("~BLIP_52~ Break");									//16
	AddFunction_CB("~BLIP_52~ Delete attached objects"); //17	
	*/
}

void MD_VehOpt_NetPlayer_Action(void){
	NETWORK_FIRST_FOUR_ITEMS_MENU_ACTION();
	int net_veh;
	float speed,h;
	char * buffer[32];
	if( SelectedItem == 10 || SelectedItem == 11 || SelectedItem == 13 || SelectedItem == 15 ||  SelectedItem == 16 ||  SelectedItem == 17 ||  SelectedItem == 18 ||  SelectedItem == 19 ||  SelectedItem == 20 ||  SelectedItem == 21 ){		
		if(IS_CHAR_IN_ANY_CAR(PLAYER_CHAR(players[ChangeNetPlayer].id)))
		{
			int net_veh_id;
			GET_CAR_CHAR_IS_USING(PLAYER_CHAR(players[ChangeNetPlayer].id), &net_veh);
			GET_NETWORK_ID_FROM_VEHICLE(net_veh,&net_veh_id);
			if(!network_control(net_veh_id)) //prints in function
			{
				if(SelectedItem == 10)
				{
					if(menu_item[SelectedItem].num_val != 7)
					{
						return;
					}
				}
				else return;
			}
			GET_CAR_HEADING(net_veh,&h);
			GET_CAR_SPEED(net_veh,&speed);
			Strcpy(buffer, "~b~MD: ");
			PLAYER_NAME_WITH_COLOUR(players[ChangeNetPlayer].id, &buffer); //WORKS!
			Strcat(buffer, "'s ~s~");
			Strcat(buffer, VEHICLES_MODEL_NAME(net_veh));
		}
		else
		{
			Alert(Error_NetPlayer_Vehicle,false);
			return;
		}
	}
	if(SelectedItem == 9){//DONE
		int Vehicle[14];
		Vehicle[1] = MODEL_COMET;				
		Vehicle[2] = MODEL_TURISMO;				
		Vehicle[3] = MODEL_INFERNUS;				
		Vehicle[4] = MODEL_SUPERGT;				
		Vehicle[5] = MODEL_SULTANRS;				
		Vehicle[6] = MODEL_ORACLE;				
		Vehicle[7] = MODEL_PATRIOT;				
		Vehicle[8] = MODEL_FBI;				
		Vehicle[9] = MODEL_BUS;				
		Vehicle[10] = MODEL_SQUALO;				
		Vehicle[11] = MODEL_NRG900;				
		Vehicle[12] = MODEL_MAVERICK;				
		Vehicle[13] = MODEL_ANNIHILATOR;		
		MD_VEHICLE_SPAWNER_ON_ID(players[ChangeNetPlayer].id,Vehicle[(menu_item[SelectedItem].num_val)]);
	}
	/**General**/ 
	if(SelectedItem == 10)
	{
		if(menu_item[SelectedItem].num_val == 1)
		{
			FIX_CAR(net_veh);
			SET_CAR_ENGINE_ON(net_veh,true,true);
			SET_VEHICLE_DIRT_LEVEL(net_veh, 0);
		}
		else if(menu_item[SelectedItem].num_val == 2)
		{
			float h;
			GET_CAR_HEADING(net_veh,&h);
			SET_VEHICLE_QUATERNION(net_veh,0,0,0,0);
			SET_CAR_HEADING(net_veh,h);
			SET_CAR_ON_GROUND_PROPERLY(net_veh);
		}
		else if(menu_item[SelectedItem].num_val == 3)
		{
			MD_Delete_Objects_On_Vehicle(players[ChangeNetPlayer].id); //will only print if it deletes an object
			DELETE_CAR(&net_veh);
		}		
		else if(menu_item[SelectedItem].num_val == 4)
		{
			SET_CAR_CAN_BE_DAMAGED(net_veh,false);
			SET_CAR_CAN_BE_VISIBLY_DAMAGED(net_veh,false);
			Alert("~b~MD: ~s~This generally only works on spawned vehicles, but we tried anyway.",false);
		}
		else if(menu_item[SelectedItem].num_val == 5)
		{
			SET_CAR_VISIBLE(net_veh,true);
		}
		else if(menu_item[SelectedItem].num_val == 6)
		{
			SET_CAR_VISIBLE(net_veh,false);
		}
		else if(menu_item[SelectedItem].num_val == 7)
		{
			float x,y,z,heaaad;
			int tmp;
			GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(pPlayer,1.5f,5.0f,0.0f,&x,&y,&z);
			GET_CHAR_HEADING(pPlayer,&heaaad);
			heaaad += 50;
			Clone_Car(net_veh,x,y,z,heaaad,&tmp);
			/*GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(pPlayer,1.5f,5.0f,0.0f,&x,&y,&z);
			GET_CHAR_HEADING(pPlayer,&h);
			h += 50.0f; //drivers seat facing you, open le door //maybe put like, -= 70.0f
			int car_clone;
			Clone_Car(Personal_Vehicle, x, y, z, h, &car_clone); //GetPlayerVeh() == works
			OPEN_CAR_DOOR(car_clone, 0);*/
			//OPEN_CAR_DOOR(tmp,0);
		}
	}
	else if(SelectedItem == 11)
	{
		/*//Speedboost, Reverse + Speedboost, Reverse, Turn Right, Turn Left //11*/
		if(menu_item[SelectedItem].num_val == 1)
		{
			SET_CAR_FORWARD_SPEED(net_veh, (speed*6));
		//	Strcat(buffer, " was given a speed boost.");
		}
		else if(menu_item[SelectedItem].num_val == 2)
		{
			SET_CAR_HEADING(net_veh, (h - 180));
			SET_CAR_FORWARD_SPEED(net_veh, (speed*6));
			//Strcat(buffer, " was given a speed boost in the opposite direction.");
		}
		else if(menu_item[SelectedItem].num_val == 3)
		{
			SET_CAR_HEADING(net_veh, (h - 180));
			SET_CAR_FORWARD_SPEED(net_veh, speed);
		}
		else if(menu_item[SelectedItem].num_val == 4)
		{
			SET_CAR_HEADING(net_veh, (h - 270));
			SET_CAR_FORWARD_SPEED(net_veh, speed);
		}
		else if(menu_item[SelectedItem].num_val == 5)
		{
			SET_CAR_HEADING(net_veh, (h - 90));
			SET_CAR_FORWARD_SPEED(net_veh, speed);
		}
	}
	else if(SelectedItem == 12)
	{
		if(menu_item[SelectedItem].num_val == 1)
		{
			ToggleBit(autoFixVehBitSet, players[ChangeNetPlayer].id);
		}
		else if(menu_item[SelectedItem].num_val == 2)
		{
			ToggleBit(autoFlipVehBitSet, players[ChangeNetPlayer].id);
		}
	}
	else if(SelectedItem == 13)
	{
		//Strcat(buffer, " was thrown ");
		////up down left right forwards backwards
		if(menu_item[SelectedItem].num_val == 1) //Upwards
		{
			APPLY_FORCE_TO_CAR(net_veh,3,0,0,1000,0,0,0,0, 1, 1, 1);
	//		Strcat(buffer, "upwards.");
		}
		else if(menu_item[SelectedItem].num_val == 2) //Downwards
		{
			APPLY_FORCE_TO_CAR(net_veh,3,0,0,-1000,0,0,0,0, 1, 1, 1);
	//		Strcat(buffer, "downwards.");
		}
		else if(menu_item[SelectedItem].num_val == 3) //Left
		{
			APPLY_FORCE_TO_CAR(net_veh,3,60,0,0,0,-60,0,0, 1, 1, 1);
	//		Strcat(buffer, "left.");
		}
		else if(menu_item[SelectedItem].num_val == 4) //Right
		{
			APPLY_FORCE_TO_CAR(net_veh,3,60,0,0,0,60,0,0, 1, 1, 1);
	//		Strcat(buffer, "right.");
		}
		else if(menu_item[SelectedItem].num_val == 5) //forwards
		{
			APPLY_FORCE_TO_CAR(net_veh,3,0,60,10.0,0,0,-10.0,0, 1, 1, 1);
	//		Strcat(buffer, "forwards.");
		}
		else if(menu_item[SelectedItem].num_val == 6) //Backwards
		{
			APPLY_FORCE_TO_CAR(net_veh,3,0,-60,-10.0,0,0,-10.0,0, 1, 1, 1);
		//	Strcat(buffer, "backwards.");
		}
	}
	//	AddFunction_Value_CB("Throw",6); //up down left right forwards backwards 				//13 //up down left right forwards backwards

	
	/*
	if(DOES_CHAR_EXIST(ped)){
		float h,speed;
		int net_veh,net_veh_id,net_veh_model;
		bool in_car = IS_CHAR_IN_ANY_CAR(ped);
		if(in_car)
		{
			GET_CAR_CHAR_IS_USING(ped,&net_veh);
			GET_CAR_MODEL(net_veh,&net_veh_model);
			GET_NETWORK_ID_FROM_VEHICLE(net_veh,&net_veh_id);
			GET_CAR_HEADING(net_veh,&h);
			GET_CAR_SPEED(net_veh,&speed);
		}
		char * buffer[32];
		if(SelectedItem > 5) //set net control to only go on the items that need it.
		{
			if(!in_car) return;
			Strcpy(buffer, "~b~MD: ");
			PLAYER_NAME_WITH_COLOUR(id, &buffer); //WORKS!
			Strcat(buffer, "'s ~s~");
			Strcat(buffer, GET_STRING_FROM_TEXT_FILE(GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(net_veh_model)));
			if(network_control(net_veh_id))
			{
				if(id != iPlayer && SelectedItem < 13 && SelectedItem != 6 && SelectedItem != 8) 
					SET_CAR_FORWARD_SPEED(net_veh,0.0f); //stop them going crazy! lol //I re-set speed to what it was if we're reversing heading or whatever, take a look below!
			}
			else
			{
				return;
				//function will display prints if it can't get control
			}
		}
		
		if(SelectedItem == 6) //Delete vehicle
		{
			 delete_objects_on_vehicle(net_veh); //will only print if it deletes an object
			 DELETE_CAR(&net_veh);
			 Strcat(buffer, " was deleted.");
		}
		else if(SelectedItem == 7) //Vehicle helper
		{
			SET_CAR_CAN_BE_DAMAGED(net_veh,false);
			SET_CAR_CAN_BE_VISIBLY_DAMAGED(net_veh,false);
			SET_CAN_BURST_CAR_TYRES(net_veh,false);
			SET_CAR_PROOFS(net_veh,true,true,true,true,true);
			Strcat(buffer, " is now invincible.");
		}
		else if(SelectedItem == 8) //Lock vehicle
		{
			SET_VEHICLE_LOCKED_WITHOUT_NET_CONTROL_REQUEST(net_veh, !IS_CHARS_VEHICLE_LOCKED(ped)); //Net control is dealt with above
			bool locked = IS_CHARS_VEHICLE_LOCKED(ped);
			menu_item[SelectedItem].extra_val = locked;
			Strcat(buffer, (locked ? " is now locked." : " is now un-locked."));
		}
		else if(SelectedItem == 9) //Flip vehicle
		{
			SET_VEHICLE_QUATERNION(net_veh,0,0,0,0);
			SET_CAR_HEADING(net_veh,h);
			SET_CAR_ON_GROUND_PROPERLY(net_veh);
			Strcat(buffer, " was flipped.");
		}
		else if(SelectedItem == 10) //Fix veh
		{
			FIX_CAR(net_veh);
			SET_CAR_ENGINE_ON(net_veh,true,true);
			/* //Uncomment this if FIX_CAR doesn't fix tyres!
			bool bike = IS_THIS_MODEL_A_BIKE(net_veh_model);
			if(IS_THIS_MODEL_A_CAR(net_veh_model) || bike)
			{
				int num_tyres = (bike ? 2 : 4);
				int z;
				for(z = 0; z < num_tyres; z++)
				{
					FIX_CAR_TYRE(net_veh,z);
				}
			}
			
			Strcat(buffer, " was fixed.");
		}
		else if(SelectedItem == 11) //Set invisible
		{
			ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_NET_INVISIBLE);
			SET_CAR_VISIBLE(net_veh,!GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_NET_INVISIBLE));
			menu_item[SelectedItem].extra_val = GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_NET_INVISIBLE);
			Strcat(buffer, (GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_NET_INVISIBLE) ? " is now invisible." : " is now visible."));
		}
		else if(SelectedItem == 12) //reverse heading
		{
			SET_CAR_HEADING(net_veh, (h - 180) );
			SET_CAR_FORWARD_SPEED(net_veh, speed);
			Strcat(buffer, " is now going in the opposite direction."); // :D - Nathan
		}
		else if(SelectedItem == 13) //Freeze car pos
		{
			ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_FREEZE_POS);
			FREEZE_CAR_POSITION(net_veh,GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_FREEZE_POS));
			Strcat(buffer, (GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_FREEZE_POS) ? " is now frozen." : " is now un-frozen."));
			menu_item[SelectedItem].extra_val = GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_FREEZE_POS);
		}
		else if(SelectedItem == 14) //Set veh translucent
		{
			ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_WIPEOUT_HELI);
			SET_CAR_COLLISION(net_veh, !GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_WIPEOUT_HELI));
			Strcat(buffer, (GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_WIPEOUT_HELI) ? " is now translucent." : " is now solid."));
		}
		else if(SelectedItem == 15) //Throw vehicle forward //Could make a string item for these "Throw Vehicle < Forwards, Backwards, Upwards, Sideways >"
		{
			Strcat(buffer, " was thrown ");
			if(menu_item[SelectedItem].num_val == 1) //forwards
			{
				APPLY_FORCE_TO_CAR(net_veh,3,0,60,10.0,0,0,-10.0,0, 1, 1, 1);
				Strcat(buffer, "forwards.");
			}
			else if(menu_item[SelectedItem].num_val == 2) //Sideways
			{
				APPLY_FORCE_TO_CAR(net_veh,3,60,0,0,0,-60,0,0, 1, 1, 1);
				Strcat(buffer, "sideways.");
			}
			else if(menu_item[SelectedItem].num_val == 3) //Upwards
			{
				APPLY_FORCE_TO_CAR(net_veh,3,0,0,1000,0,0,0,0, 1, 1, 1);
				Strcat(buffer, "upwards.");
			}
			else if(menu_item[SelectedItem].num_val == 4) //Backwards
			{
				APPLY_FORCE_TO_CAR(net_veh,3,0,-60,-10.0,0,0,-10.0,0, 1, 1, 1);
				Strcat(buffer, "backwards.");
			}
		}
		else if(SelectedItem == 16) //Speed boost
		{
			SET_CAR_FORWARD_SPEED(net_veh, (speed*6));
			Strcat(buffer, " was given a speed boost.");
		}
		else if(SelectedItem == 17) //Reverse + speed boost
		{
			SET_CAR_HEADING(net_veh, (h - 180));
			SET_CAR_FORWARD_SPEED(net_veh, (speed*6));
			Strcat(buffer, " was given a speed boost in the opposite direction.");
		}
		else if(SelectedItem == 18) //Break vehicle
		{
			int z;
			for(z = 0; z < 4; z++)
			{
				BREAK_CAR_DOOR(net_veh,z,true);
				BURST_CAR_TYRE(net_veh,z);
				REMOVE_CAR_WINDOW(net_veh,z);
			}
			START_CAR_FIRE(net_veh);
			SET_ENGINE_HEALTH(net_veh,-5);
			SET_CAR_ENGINE_ON(net_veh,false,false);
			Strcat(buffer, " is now broke as fuck."); // heh - Nath :D
		}
		else if(SelectedItem == 19)
		{
			Strcat(buffer, " had objects attached to it deleted.");
		}
		
		if(SelectedItem > 3)
		{
			Alert(buffer, false);
		}
	} //161
	*/
}


void MC_Vehicle_Setup(void){
	MD_Colour_Display_1 = false;
	MD_Colour_Display_2 = false;
	MENU_SUB_HEADER = "Vehicle Garage";
	AddSubMenu("~BLIP_73~ ~b~MD ~c~Full Spawner ~PAD_RIGHT~");					//1
	AddSubMenu("~BLIP_73~ ~b~MD ~c~Spawn Settings ~PAD_RIGHT~");				//2
	AddSubMenu("~BLIP_73~ ~b~MD ~c~Active Options ~PAD_RIGHT~");				//3
	AddSubMenu("~BLIP_73~ ~b~MD ~c~Colours/Neons/Add-Ons ~PAD_RIGHT~");		//4 
	AddSubMenu("~BLIP_73~ ~b~MD ~c~Upgrades ~PAD_RIGHT~");						//5
	AddFunction("~BLIP_52~ Fix");							//6
	AddFunction("~BLIP_52~ Flip ");							//7
	AddBool("~BLIP_68~ Lock", IS_CHARS_VEHICLE_LOCKED(pPlayer)); //8
	AddFunction("~BLIP_49~ Delete");						//9
	AddFunction("~BLIP_52~ Duplicate");						//10 //nathan needs to fix fuck
	AddFunction("~BLIP_52~ Eject From");					//11
	AddFunction("~BLIP_52~ Shuffle Seats ( Switch Seats )");		//12
	AddFunction("~BLIP_52~ Slingshot");						//13
	AddFunction("~BLIP_52~ Rotate Vehicle 180 Degrees");			//14
	AddBool("~BLIP_68~ Rotate Vehicle 360 Degrees",GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_ROTATE));		//15
	
}

void MC_Vehicle_Action(void){
	if(IS_CHAR_IN_ANY_CAR(pPlayer)){
		bool driving = is_driving(pPlayer);
		GET_CAR_CHAR_IS_USING(pPlayer, &NetPlayer_Vehicle);
		if(SelectedItem == 6){
			FIX_CAR(NetPlayer_Vehicle);
			SET_CAR_ENGINE_ON(NetPlayer_Vehicle,true,true);
			SET_VEHICLE_DIRT_LEVEL(NetPlayer_Vehicle, 0);
		}
		else if(SelectedItem == 7){ 
			if(!IS_CHAR_IN_ANY_HELI(pPlayer)){
			float h;
			GET_CAR_HEADING(NetPlayer_Vehicle,&h);
			SET_VEHICLE_QUATERNION(NetPlayer_Vehicle,0,0,0,0);
			SET_CAR_HEADING(NetPlayer_Vehicle,h);
			SET_CAR_ON_GROUND_PROPERLY(NetPlayer_Vehicle);
			}
			else Alert("~b~MD: ~s~Why would you want to flip a heli?",false);
		}
		else if(SelectedItem == 8 && driving)
		{
			SET_VEHICLE_LOCKED_WITHOUT_NET_CONTROL_REQUEST(NetPlayer_Vehicle, !IS_CHARS_VEHICLE_LOCKED(pPlayer));
			menu_item[SelectedItem].extra_val = IS_CHARS_VEHICLE_LOCKED(pPlayer);
		}
		else if(SelectedItem == 9){
			if(driving){
			MD_Delete_Objects_On_Vehicle(iPlayer); //Nathan waz here
			DELETE_CAR(&NetPlayer_Vehicle);
			}			
		}	
		else if(SelectedItem == 10){ //Broke as fuck currently
			int model,tmp;
			float x,y,z,h;
			GET_CAR_MODEL(NetPlayer_Vehicle, &model);
			GET_CAR_HEADING(NetPlayer_Vehicle, &h);
			if(!IS_THIS_MODEL_A_HELI(model)) GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(pPlayer, 4, 0, 0, &x, &y, &z); //lazy for now
			else GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(pPlayer, 17, 0, 0, &x, &y, &z);
			Clone_Car(NetPlayer_Vehicle,x,y,z,h,&tmp);
			SET_CAR_CAN_BE_DAMAGED(tmp,!GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE));
			SET_CAR_CAN_BE_VISIBLY_DAMAGED(tmp,!GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE));
			SET_CAN_BURST_CAR_TYRES(tmp,!GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE));
			//Should just point cam at cloned car (tmp)
			/*
			char * buffer[16];
			Strcpy(buffer, "~b~MD: ~s~Your "); //15
			int tmp_model;
			GET_CAR_MODEL(NetPlayer_Vehicle,&tmp_model);
			Strcat(buffer, GET_STRING_FROM_TEXT_FILE(GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(tmp_model)));
			Strcat(buffer, " was duplicated.");
			//should temporarily point cam at car tmp car maybe.
			Alert("~BLIP_76~ ~c~Vehicle Duplicated!",false);
			return;
			*/
		}
		else if(SelectedItem == 11){ //TEST  REMOVE_CHAR_FROM_CAR_MAINTAIN_POSITION(Ped ped, Car car); !
		//float x,y,z;
		//GET_CHAR_COORDINATES(pPlayer,&x,&y,&z);
		//WARP_CHAR_FROM_CAR_TO_COORD(pPlayer, x, y, z+1);
		REMOVE_CHAR_FROM_CAR_MAINTAIN_POSITION(pPlayer,NetPlayer_Vehicle);
		}
		else if(SelectedItem == 12){
			Shuffle_Vehicle_Seat();
		}
		if(SelectedItem == 13){
		if(Menu_Ptfx){
		START_PTFX_ON_VEH("qub_lg_explode_red", NetPlayer_Vehicle, 0, 0, 0, 0, 0, 0, 1);
		}
		APPLY_FORCE_TO_CAR(NetPlayer_Vehicle,true,0.0,0.0,1000.0,0.0,0.0,0.0,true,true,true,true);
		Alert("~b~MD: ~s~You want to get high? ~COL_NET_3~YES.",false);
		}	
		if(SelectedItem == 14){ 
			float h,speed;
			GET_CAR_HEADING(NetPlayer_Vehicle,&h);
			GET_CAR_SPEED(NetPlayer_Vehicle,&speed);
			SET_CAR_HEADING(NetPlayer_Vehicle,h-180);
			SET_CAR_FORWARD_SPEED(NetPlayer_Vehicle,speed);
		}
		if(SelectedItem == 15){ 
			ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_ROTATE);
			menu_item[SelectedItem].extra_val = GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_ROTATE);
		}		
	}
	else Alert(Error_NetPlayer_Vehicle,false);
	
}


void MC_Vehicle_SpawnSettings_Setup(void){
	MENU_SUB_HEADER = "Vehicle Spawn Settings";
	AddBool("~BLIP_68~ All upgrades",GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_ALL_UPGRADES));	//1 //nathan was here
	AddBool("~BLIP_68~ Invincible",GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE));			//2
	AddBool("~BLIP_68~ Sirens",GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_SIREN));				//3
	
}
void MC_Vehicle_SpawnSettings_Action(void){
	if(SelectedItem == 1){
		ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_ALL_UPGRADES);
		menu_item[SelectedItem].extra_val = GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_ALL_UPGRADES);
	}	
	else if(SelectedItem == 2){ 
		ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE);
		menu_item[SelectedItem].extra_val = GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE);
	}
	else if(SelectedItem == 3){
		ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_SIREN);
		menu_item[SelectedItem].extra_val = GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_SIREN);
	}
}

void MC_Vehicle_Active_Options_Setup(void){ 
	MENU_SUB_HEADER = "Active Vehicle Options";
	AddBool("~BLIP_68~ Invincible",GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE)); //Vehicle_Invincible);									//1
	AddBool("~BLIP_68~ Invisibility",GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVISIBLE)); //Veh_Self_Invisible);							//2
	AddBool("~BLIP_68~ Super Speed",GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_SUPER_SPEED)); //Veh_Super_Speed);									//3
	AddBool("~BLIP_68~ Drift Mode",GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_DRIFT)); //drift);												//4
	AddBool("~BLIP_68~ Lower Vehicle",GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_LOWER)); //lower);											//5
	AddBool("~BLIP_68~ Car/Bike/Truck Jump ~PAD_A~ or ~PAD_X~",GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_JUMP)); //Veh_Jump);				//6
	AddBool("~BLIP_68~ Super Bike",GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_SUPER_BIKE)); //Veh_Super_Bike);										//7
	AddBool("~BLIP_68~ Stick Car/Bike/Truck to Ground",GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_STICK_GROUND)); //Veh_On_Ground);					//8
	AddBool("~BLIP_68~ DeSolidify Vehicle ( Drive/Fly )",GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_DESOLIDIFY)); //thruwalls);					//9
	AddBool("~BLIP_68~ Freeze Vehicle Position",GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_FREEZE_POS)); //freezecar);								//10
	AddBool("~BLIP_68~ Vehicle Lock",IS_CHARS_VEHICLE_LOCKED(pPlayer));					//11
	//AddBool("~BLIP_68~ Auto-Lock Vehicle",Veh_Autolock); 	//nathan enhance this with unlock for friends + string item	
	AddFunction_Value("~BLIP_68~ Auto-Lock",3);								//12
	AddBool("~BLIP_68~ Auto Spawn Boat In Water",GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_AUTO_BOAT)); //Veh_Auto_Boat);						//13
	AddBool("~BLIP_68~ Drive/Walk On Water",IS_DRIVE_WALK_WATER_ENABLED_FOR_PLAYER(iPlayer));	//14
	//menu_item[12].num_val = Veh_Autolock;
	//Add_StringValue(12); //to update
}
void MC_Vehicle_Active_Options_Action(void){
	if(SelectedItem == 1){ 
	ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE);
	menu_item[SelectedItem].extra_val = GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE);;
	}
	else if(SelectedItem == 2){
	ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVISIBLE);
	menu_item[SelectedItem].extra_val = GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVISIBLE);
	if(!GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVISIBLE)){
		Alert("~b~MD: ~s~Your current vehicle shall no longer be invisible.",false);
		if(IS_CHAR_IN_ANY_CAR(pPlayer)){
			GET_CAR_CHAR_IS_USING(pPlayer, &NetPlayer_Vehicle);
			SET_CAR_VISIBLE(NetPlayer_Vehicle,true);
		}
	}
	else Alert("~b~MD: ~s~Your current vehicle shall now always be invisible.",false);
	}
	else if(SelectedItem == 3){ 
	ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_SUPER_SPEED);
	menu_item[SelectedItem].extra_val = GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_SUPER_SPEED);
	}
	else if(SelectedItem == 4){
	ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_DRIFT);
	menu_item[SelectedItem].extra_val = GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_DRIFT);
	}
	else if(SelectedItem == 5){
	ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_LOWER);
	menu_item[SelectedItem].extra_val = GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_LOWER);
	}
	else if(SelectedItem == 6){
	ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_JUMP);
	menu_item[SelectedItem].extra_val = GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_JUMP);
	}
	else if(SelectedItem == 7){
	ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_SUPER_BIKE);
	menu_item[SelectedItem].extra_val = GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_SUPER_BIKE);
	}
	else if(SelectedItem == 8){
	ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_STICK_GROUND);
	menu_item[SelectedItem].extra_val = GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_STICK_GROUND);
	}
	else if(SelectedItem == 9){
	ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_DESOLIDIFY);
	menu_item[SelectedItem].extra_val = GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_DESOLIDIFY);
	}
	else if(IS_CHAR_IN_ANY_CAR(pPlayer))
	{ 
		GET_CAR_CHAR_IS_USING(pPlayer, &NetPlayer_Vehicle);
		if(SelectedItem == 10){
		ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_FREEZE_POS);
		FREEZE_CAR_POSITION(NetPlayer_Vehicle,GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_FREEZE_POS));
		menu_item[SelectedItem].extra_val = GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_FREEZE_POS);
		}
		else if(SelectedItem == 11)
		{ 
			SET_VEHICLE_LOCKED_WITHOUT_NET_CONTROL_REQUEST(NetPlayer_Vehicle,!IS_CHARS_VEHICLE_LOCKED(pPlayer));
			menu_item[SelectedItem].extra_val = IS_CHARS_VEHICLE_LOCKED(pPlayer);
			/*
			char * buffer[16];
			Strcpy(buffer, "~b~MD: ~s~Your "); //15
			int tmp_model;
			GET_CAR_MODEL(NetPlayer_Vehicle,&tmp_model);
			Strcat(buffer, GET_STRING_FROM_TEXT_FILE(GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(tmp_model)));
			Strcat(buffer, " is now ");
			Strcat(buffer, menu_item[SelectedItem].extra_val ? "locked." : "unlocked."); //just cuz saves processing is locked again
			Alert(buffer, false);
			*/
			// no need for print u see it change colour on menu (lights up DUH IN FACE)
		}			
	}	
	if(SelectedItem == 12)
	{ 
		
			 
	}	
	else if(SelectedItem == 13){
		ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_AUTO_BOAT);
		menu_item[SelectedItem].extra_val = GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_AUTO_BOAT);
	}
	else if(SelectedItem == 14){
		TOGGLE_DRIVE_WALK_WATER_FOR_PLAYER(iPlayer);
		menu_item[SelectedItem].extra_val = IS_DRIVE_WALK_WATER_ENABLED_FOR_PLAYER(iPlayer);
	}
}


void create_veh_obj(Object object, float obj_x, float obj_y, float obj_z, float obj_rx, float obj_ry, float obj_rz, Vehicle object_veh){ //PART OF CUSTOM VEHICLES - OBJECTS ON VEHICLES
	Object veh_object;
	if (IS_MODEL_IN_CDIMAGE(object)){
		REQUEST_MODEL(object);
		while (!HAS_MODEL_LOADED(object))
			WAIT(0);
			//if (IS_CHAR_IN_ANY_CAR(player))GET_CAR_CHAR_IS_USING(player, &object_veh);
			CREATE_OBJECT(object, 0, 0, 0, &veh_object, true);
			while (!DOES_OBJECT_EXIST(veh_object))WAIT(0);
			MARK_MODEL_AS_NO_LONGER_NEEDED(object);
			FREEZE_OBJECT_POSITION(veh_object, true);
			SET_OBJECT_VISIBLE(veh_object, true);
			SET_OBJECT_LIGHTS(veh_object, true);
			SET_OBJECT_INVINCIBLE(veh_object, true);
			SET_OBJECT_COLLISION(veh_object, false);			
			if(In_Network){
					int nvid;
					GET_NETWORK_ID_FROM_OBJECT(veh_object, &nvid);
					SET_NETWORK_ID_CAN_MIGRATE(nvid, false);
			}			
			ATTACH_OBJECT_TO_CAR(veh_object, object_veh, 0, obj_x, obj_y, obj_z, obj_rx, obj_ry, obj_rz);
			
		if (IS_INTERIOR_SCENE()){
			uint viewport_id, room_key;
			GET_GAME_VIEWPORT_ID(&viewport_id);
			GET_KEY_FOR_VIEWPORT_IN_ROOM(viewport_id, &room_key);
			ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY(veh_object, room_key);
		}
			return;
	}
	else Alert("~BLIP_76~ ~COL_NET_4~Error! ~w~Model missing from your CD image",false);	
	//PLAY_AUDIO_EVENT("FRONTEND_MENU_MP_SERVER_HIGHLIGHT");
	return;
}
void neon_set(Object crotch){
	SET_OBJECT_LIGHTS(crotch, true);
	SET_OBJECT_VISIBLE(crotch, true);
	SET_OBJECT_INVINCIBLE(crotch, 1);
}
void disco_lights_on_vehicle(Vehicle object_veh){
	create_veh_obj(0xEDF775CB,0,0,0,0.1,0,0, object_veh);
	create_veh_obj(0xEDF775CB,0,0,0,0.1,0,1.575, object_veh);
	create_veh_obj(0xEDF775CB,0,0,0,0.1,0,3.150, object_veh);
	create_veh_obj(0xEDF775CB,0,0,0,0.1,0,4.725, object_veh);
	Alert("~BLIP_76~ ~c~Disco flash added! ~w~(4 Objects)",false);
	
}
void white_neon_on_vehicle(Vehicle object_veh){
	create_veh_obj(0x4585E2BA,0,0,0,0.1,0,0, object_veh);	
	Alert("~BLIP_76~ ~c~White neons added! ~w~(1 Object)",false);
	
}
void red_neon_on_vehicle(Vehicle object_veh){
	create_veh_obj(0xCB26803D,0,0,0,0.1,0,0, object_veh);
	create_veh_obj(0xCB26803D,0,0,0,0.1,0,3.150, object_veh);
	Alert("~BLIP_76~ ~c~Red neons added! ~w~(2 Objects)",false);
	
}
void blue_neon_on_vehicle(Vehicle object_veh){
	create_veh_obj(0xD20167BE,0,-0.7,0,4.75,0,0, object_veh);
	Alert("~BLIP_76~ ~c~Blue neons added! ~w~(1 Object)",false);
	
}
void orange_neon_on_vehicle(Vehicle object_veh){
	create_veh_obj(0x2F8AEA79,0,0.2,-0.2,-190,0,160.20, object_veh);
	create_veh_obj(0x2F8AEA79,0.2,1.2,-0.2,-190,0,160.2, object_veh);
	create_veh_obj(0x2F8AEA79,0,0.2,-0.2,-190,0,160.20, object_veh);		
	Alert("~BLIP_76~~c~Orange neons added! ~w~(5 Objects)",false);
	
}
void lavender_neon_on_vehicle(Vehicle object_veh){
	create_veh_obj(0x12948067,0,0,0,0.1,0,0, object_veh);	
	create_veh_obj(0x12948067,0,0,0,0.1,0,1.575, object_veh);	
	create_veh_obj(0x12948067,0,0,0,0.1,0,3.150, object_veh);	
	create_veh_obj(0x12948067,0,0,0,0.1,0,4.725, object_veh);	
	Alert("~BLIP_76~ ~c~Lavender neons added! (Night) ~w~(4 Objects)",false);
	
}
void electro_shock_on_vehicle(Vehicle object_veh){
	create_veh_obj(0x55CA3AE6,0.5235,1.7225,0.1475,1.7799,0,0, object_veh);
	create_veh_obj(0x55CA3AE6,-0.5235,1.7225,0.1475,1.7799,0,0, object_veh);
	create_veh_obj(0x55CA3AE6,0,1.0261,0.4292,1.7799,0,0, object_veh);
	create_veh_obj(0x55CA3AE6,0.5235,-1.9229,0.1475,1.799,0,3.150, object_veh);
	create_veh_obj(0x55CA3AE6,-0.5235,-1.9229,0.1475,1.799,0,3.150, object_veh);
	Alert("~BLIP_76~ ~c~Electro shocks added! ~w~(5 Objects)",false);	
	
}
void green_flash_on_vehicle(Vehicle object_veh){
	create_veh_obj(0x3BF5F0E5,0,0,0,6.0,0,0.787, object_veh);
	create_veh_obj(0x3BF5F0E5,0,0,0,6.0,0,2.362, object_veh);
	create_veh_obj(0x3BF5F0E5,0,0,0,6.0,0,3.936, object_veh);
	create_veh_obj(0x3BF5F0E5,0,0,0,6.0,0,5.512, object_veh);
	create_veh_obj(0x3BF5F0E5,0,0,0,6.0,0,0, object_veh);
	create_veh_obj(0x3BF5F0E5,0,0,0,6.0,0,1.575, object_veh);
	create_veh_obj(0x3BF5F0E5,0,0,0,6.0,0,3.150, object_veh);
	create_veh_obj(0x3BF5F0E5,0,0,0,6.0,0,4.725, object_veh);
	Alert("~BLIP_76~ ~c~Green flash added! ~w~(8 Objects)",false);
	
}

void purple_flash_on_vehicle(Vehicle object_veh){
	create_veh_obj(0x6A299B19,0,0,0,6.0,0,0.787, object_veh);
	create_veh_obj(0x6A299B19,0,0,0,6.0,0,2.362, object_veh);
	create_veh_obj(0x6A299B19,0,0,0,6.0,0,3.936, object_veh);
	create_veh_obj(0x6A299B19,0,0,0,6.0,0,5.512, object_veh);
	create_veh_obj(0x6A299B19,0,0,0,6.0,0,0, object_veh);
	create_veh_obj(0x6A299B19,0,0,0,6.0,0,1.575, object_veh);
	create_veh_obj(0x6A299B19,0,0,0,6.0,0,3.150, object_veh);
	create_veh_obj(0x6A299B19,0,0,0,6.0,0,4.725, object_veh);
	Alert("~BLIP_76~ ~c~Purple flash added! ~w~(8 Objects)",false);
	
}

void yellow_neon_on_vehicle(Vehicle object_veh){
	create_veh_obj(0xB3AC6409,0.2,1.2,-0.2,-190,0,160.2, object_veh);
	create_veh_obj(0xB3AC6409,0.2,0.2,-0.2,-190,0,160.2, object_veh);
	create_veh_obj(0xB3AC6409,0.2,-1.2,-0.2,-190,0,160.2, object_veh);
	create_veh_obj(0xB3AC6409,0.2,0.2,-0.2,-190,0,160.2, object_veh);
	Alert("~BLIP_76~ ~c~Yellow Neons Added! ~w~(4 Objects)",false);			
}

void green_neon_on_vehicle(Vehicle object_veh){
	create_veh_obj(0xD611D7B6,0.0999999,0.24,-0.36, 0,-1.56, 1.521, object_veh);
	create_veh_obj(0xD611D7B6,0.0999999,0.24,-0.36, 0,-1.56, 1.521, object_veh);
	Alert("~BLIP_76~ ~c~Green Neons Added! ~w~(2 Objects)",false);
}

void devilsdust_on_vehicle(Vehicle object_veh){
	int i;
	for(i = 0;i<=4;i++){
	create_veh_obj(451384443,0,-0.1,0.0,1.575,0,0, object_veh);
	}
	Alert("~BLIP_76~ ~c~Devils dust added! ~w~(8 Objects)",false);
	
}
void whitesmoke_on_vehicle(Vehicle object_veh){
	create_veh_obj(0x3427A4F4,0,0,-18.800,0,0,0, object_veh);
	Alert("~BLIP_76~ ~c~White smoke added! ~w~(8 Objects)",false);
	
}
void devilsmoke_on_vehicle(Vehicle object_veh){
	create_veh_obj(0xFD810533,7.8201,15.7448,-28.80000,0.7900,0.4000,1.3100, object_veh);
	Alert("~BLIP_76~ ~c~Devils smoke added! ~w~(8 Objects)",false);
	
}
void lightreflect_on_vehicle(Vehicle object_veh){
	create_veh_obj(0xFEB2FDAF,0.1047,-0.5208,-1.0183,3.1399,0,0, object_veh);
	Alert("~BLIP_76~ ~c~Light reflection added! ~w~(8 Objects)",false);
	
}
void lightaround_on_vehicle(Vehicle object_veh){
	create_veh_obj(0x2A56D09E,0,0,0,0,0,0, object_veh);
	Alert("~BLIP_76~ ~c~Light surrounding added! ~w~(8 Objects)",false);
	
}


void MD_Colour_Display_Setup_1 (const int Player_ID){
	MENU_SUB_HEADER = "MD Colour Palette";
	AddBool("~BLIP_68~ Solid Colours",GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_UNIFIED_COLOUR));
	AddFunction_CB("~BLIP_52~ Red");
	AddFunction_CB("~BLIP_52~ Orange Red");
	AddFunction_CB("~BLIP_52~ Orange Yellow");
	AddFunction_CB("~BLIP_52~ Yellow");
	AddFunction_CB("~BLIP_52~ Light Blue");
	AddFunction_CB("~BLIP_52~ Medium Blue");
	AddFunction_CB("~BLIP_52~ Dark Blue");
	AddFunction_CB("~BLIP_52~ Medium Orchid");
	AddFunction_CB("~BLIP_52~ Medium Violet");
	AddFunction_CB("~BLIP_52~ Light Green");
	AddFunction_CB("~BLIP_52~ Medium Green");
	AddFunction_CB("~BLIP_52~ Dark Green");
	AddFunction_CB("~BLIP_52~ White");
	AddFunction_CB("~BLIP_52~ Light Grey");
	AddFunction_CB("~BLIP_52~ Dark Grey");
	AddFunction_CB("~BLIP_52~ Black");
	AddFunction_CB("~BLIP_52~ Devils Colours");
	AddBool("~BLIP_68~ Rainbow Car",GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_RAINBOW));
	AddFunction_Value("Save Colour",2); //20
}

void MD_Colour_Display_Setup_2(const int Player_ID){
	MENU_SUB_HEADER = " MD Special Colours";
	AddFunction_CB("~BLIP_52~ Gold");				//1
	AddFunction_CB("~BLIP_52~ Cream");				//2
	AddFunction_CB("~BLIP_52~ Chocolate");			//3
	AddFunction_CB("~BLIP_52~ Grape");				//4
	AddFunction_CB("~BLIP_52~ Magenta");				//5
	AddFunction_CB("~BLIP_52~ Blackcurrant");		//6
	AddFunction_CB("~BLIP_52~ Stinger");				//7
	AddFunction_CB("~BLIP_52~ Silver");			//8
	AddFunction_CB("~BLIP_52~ Metallic Red");		//9
	AddFunction_CB("~BLIP_52~ Neon Blue");			//10
	AddFunction_CB("~BLIP_52~ Royal Blue");			//11
	AddFunction_CB("~BLIP_52~ Silvery Blue");		//12
	AddFunction_CB("~BLIP_52~ Electric Blue");		//13
	AddFunction_CB("~BLIP_52~ Champagne");			//14
	AddFunction_CB("~BLIP_52~ Pine/Lime");			//15
	AddFunction_CB("~BLIP_52~ Spearmint");			//16
	AddFunction_CB("~BLIP_52~ Special Green");		//17
	AddFunction_CB("~BLIP_52~ Metallic Green");		//18
	AddFunction_CB("~BLIP_52~ Metallic Purple");		//19
	AddFunction_CB("~BLIP_52~ Electric Yellow");		//20
	AddFunction_Value("Save Colours",2);  //21
}

void MD_Colour_Display_Action_2(const int Player_ID){  //--> Always ID here
	//!**Player Char Check**//
	Ped Player_PED;
	Vehicle vehicle;
	if(!PLAYER_HAS_CHAR(Player_ID))return Alert_Abort(Error_Char_Missing,false);
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);	
	/**Vehicle Checker**/
	if(!IS_CHAR_IN_ANY_CAR(Player_PED)){
		if(Player_PED == pPlayer)Alert_Abort(Error_Personal_Vehicle,false);
		else Alert_Abort(Error_NetPlayer_Vehicle,false);		
	}
	else GET_CAR_CHAR_IS_USING(Player_PED,&vehicle);
	
	if(SelectedItem == 1)		{c = 106 , c3 = 132;}	//Gold
	else if(SelectedItem == 2)	{c = 93 , c3 = 127;}	//Cream
	else if(SelectedItem == 3)	{c = 102 , c3 = 132;}	//Chocolate
	else if(SelectedItem == 4)	{c = 0 , c3 = 101;}		//grape
	else if(SelectedItem == 5)	{c = 44 , c3 = 101;}	//Magenta
	else if(SelectedItem == 6)	{c = 36 , c3 = 124;}	//Blackcurrant
	else if(SelectedItem == 7)	{c = 85 , c3 = 125;}	//Stinger
	else if(SelectedItem == 8)	{c = 5 , c3 = 134;}		//Silver
	else if(SelectedItem == 9)	{c = 34 , c3 = 125;}	//metallic red	
	else if(SelectedItem == 10)	{c = 82 , c3 = 128;}		//Neon Blue
	else if(SelectedItem == 11)	{c = 85 , c3 = 84;}		//Royal Blue
	else if(SelectedItem == 12)	{c = 79 , c3 = 128;}		//silvery blue
	else if(SelectedItem == 13)	{c = 0 , c3 = 128;}		//Electric Blue
	else if(SelectedItem == 14)	{c = 95 , c3 = 127;}		//Champagne
	else if(SelectedItem == 15)	{c = 91 , c3 = 127;}		//Pine/lime
	else if(SelectedItem == 16)	{c = 60 , c3 = 127;}		//spearmint
	else if(SelectedItem == 17)	{c = 56 , c3 = 51;}		//custom Green
	else if(SelectedItem == 18)	{c = 51 , c3 = 127;}		//metallic green
	else if(SelectedItem == 19)	{c = 88 , c3 = 101;}		//Metallic purple
	else if(SelectedItem == 20)	{c = 0 , c3 = 127;}		//Electric yellow
	if(SelectedItem == 21){
		if(menu_item[SelectedItem].num_val == 1){
		GET_CAR_COLOURS(vehicle,&SavedColors1,&SavedColors2);
		GET_EXTRA_CAR_COLOURS(vehicle,&SavedColors3,&SavedColors4);
		Coloursetting_Personal = true;
		Alert(Colours_Updated,false);
		}
		else if(menu_item[SelectedItem].num_val == 2){
		GET_CAR_COLOURS(vehicle,&SavedColors5,&SavedColors6);
		GET_EXTRA_CAR_COLOURS(vehicle,&SavedColors7,&SavedColors8);
		Coloursetting_Net = true;
		Alert(Colours_Updated,false);
		}		
	}
	if(SelectedItem != 21){ 
		int vehicle_ID;
		if(pPlayer != Player_PED){
			GET_NETWORK_ID_FROM_VEHICLE(vehicle,&vehicle_ID);
			if(network_control(vehicle_ID)){
				int j;
				for(j = 0; j < 4; j++){
				BURST_CAR_TYRE(vehicle,j);
				REMOVE_CAR_WINDOW(vehicle,j);
				}
				DAMAGE_CAR(vehicle, 0, 0, 0, 100, 200, true); 
				START_CAR_FIRE(vehicle);
				SET_ENGINE_HEALTH(vehicle,-5);
				WAIT(0);
				CHANGE_CAR_COLOUR(vehicle, c, c);
				SET_EXTRA_CAR_COLOURS(vehicle, c3, c);		
				//{c = 0 , c3 = 127;}
				FIX_CAR(vehicle);					
			}
			else Alert(Error_ID_Control,false);
		}
		else{
		CHANGE_CAR_COLOUR(vehicle, c, c);
		SET_EXTRA_CAR_COLOURS(vehicle, c3, c);		
		}		
	}
}

void MD_Colour_Display_Action_1(const int Player_ID){
	//!**Player Char Check**//
	Ped Player_PED;
	Vehicle vehicle;
	if(!PLAYER_HAS_CHAR(Player_ID))return Alert_Abort(Error_Char_Missing,false);
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);	
	/**Vehicle Checker**/
	if(!IS_CHAR_IN_ANY_CAR(Player_PED)){
		if(Player_PED == pPlayer)Alert_Abort(Error_Personal_Vehicle,false);
		else Alert_Abort(Error_NetPlayer_Vehicle,false);		
	}
	else GET_CAR_CHAR_IS_USING(Player_PED,&vehicle);

	if(SelectedItem == 1){
	ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_UNIFIED_COLOUR);
	menu_item[SelectedItem].extra_val = GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_UNIFIED_COLOUR);	
	}
	else if(SelectedItem == 2){c = 35;}
	else if(SelectedItem == 3){c = 131;}
	else if(SelectedItem == 4){c = 132;}
	else if(SelectedItem == 5){c = 89;}
	else if(SelectedItem == 6){c = 128;}
	else if(SelectedItem == 7){c = 74;}
	else if(SelectedItem == 8){c = 69;}
	else if(SelectedItem == 9){c = 124;}
	else if(SelectedItem == 10){c = 101;}
	else if(SelectedItem == 11){c = 59;}
	else if(SelectedItem == 12){c = 51;}
	else if(SelectedItem == 13){c = 56;}
	else if(SelectedItem == 14){
		if(Episode == 2)c = 133;
		else c = 134;
	}
	else if(SelectedItem == 15){c = 114;}
	else if(SelectedItem == 16){c = 1;}
	else if(SelectedItem == 17){c = 0;}
	else if(SelectedItem == 18){
		SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_UNIFIED_COLOUR, true);
		Vehicle_Color_Modification(Player_PED,vehicle,0,30,30,30);		
	}	
	else if(SelectedItem == 19){
		ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_RAINBOW);
		menu_item[SelectedItem].extra_val = GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_RAINBOW);		
	}	
	if(SelectedItem == 20)	{
		if(menu_item[SelectedItem].num_val == 1){
		GET_CAR_COLOURS(vehicle,&SavedColors1,&SavedColors2);
		GET_EXTRA_CAR_COLOURS(vehicle,&SavedColors3,&SavedColors4);
		Coloursetting_Personal = true;
		Alert(Colours_Updated,false);
		}
		else if(menu_item[SelectedItem].num_val == 2){
		GET_CAR_COLOURS(vehicle,&SavedColors5,&SavedColors6);
		GET_EXTRA_CAR_COLOURS(vehicle,&SavedColors7,&SavedColors8);
		Coloursetting_Net = true;
		Alert(Colours_Updated,false);
		}
	}
	if(SelectedItem < 18){ 
		int vehicle_ID;
		if(pPlayer != Player_PED){
			GET_NETWORK_ID_FROM_VEHICLE(vehicle,&vehicle_ID);
			if(network_control(vehicle_ID)){
				int j;
				for(j = 0; j < 4; j++){
				BURST_CAR_TYRE(vehicle,j);
				REMOVE_CAR_WINDOW(vehicle,j);
				}
				DAMAGE_CAR(vehicle, 0, 0, 0, 100, 200, true); 
				START_CAR_FIRE(vehicle);
				SET_ENGINE_HEALTH(vehicle,-5);
				WAIT(0);
				Vehicle_Color_Modification(Player_PED,vehicle,c,c,c3,c);
				if(!GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_UNIFIED_COLOUR)) Alert("~b~MD: ~s~Select again to change extra colours.",false);					
				FIX_CAR(vehicle);					
			}
			else Alert(Error_ID_Control,false);
		}
		else{
		Vehicle_Color_Modification(Player_PED,vehicle,c,c,c3,c);
		if(!GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_UNIFIED_COLOUR)) Alert("~b~MD: ~s~Select again to change extra colours.",false);	
		}	
	}
}

void MC_Veh_Addons_Setup(const int Player_ID){ 
	AddSubMenu("~BLIP_73~ ~b~MD ~c~MD Colour Palette  ~PAD_RIGHT~");				//1
	AddSubMenu("~BLIP_73~ ~b~MD ~c~MD Special Colours  ~PAD_RIGHT~");				//2
	AddSubMenu("~BLIP_73~ ~b~MD ~c~Vehicle Colours ( Numbers )  ~PAD_RIGHT~");		//3
	AddFunction_CB("~BLIP_52~ Blue Neons");						//4
	AddFunction_CB("~BLIP_52~ Red Neons");							//5
	AddFunction_CB("~BLIP_52~ Orange Neons");						//6
	AddFunction_CB("~BLIP_52~ White Neons");						//7
	AddFunction_CB("~BLIP_52~ Lavender Neons ( Night )");			//8
	AddFunction_CB("~BLIP_52~ Disco Flash Effect");				//9
	AddFunction_CB("~BLIP_52~ Purple Flash Effect");				//10
	AddFunction_CB("~BLIP_52~ Green Flash Effect");				//11
	AddFunction_CB("~BLIP_52~ Light Reflect Effect (Night)");		//12
	AddFunction_CB("~BLIP_52~ Add Sparks");						//13
	AddFunction_CB("~BLIP_52~ Add White Smoke");					//14
	AddFunction_CB("~BLIP_52~ Add Devils Smoke");					//15
	AddFunction_CB("~BLIP_52~ Add  Devils Dust ( Use V-Helper! )");//16
	AddFunction_CB("~BLIP_52~ Light Around U ( Night )");			//17
	AddFunction_CB("~BLIP_52~ Yellow Neons ( TBoGT )");			//18
	AddFunction_CB("~BLIP_52~ Green Neons ( TBoGT )");				//19
	AddFunction_CB("~BLIP_52~ Delete Your Neons And Add-Ons");		//20
}

void MC_Vehicle_Addon_Action(const int Player_ID){ //ID
	//!**Player Char Check**//
	Ped Player_PED;
	Vehicle vehicle;
	if(!PLAYER_HAS_CHAR(Player_ID))return Alert_Abort(Error_Char_Missing,false);
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);
	/**Vehicle Checker**/
	if(!IS_CHAR_IN_ANY_CAR(Player_PED)){
		if(Player_PED == pPlayer)Alert_Abort(Error_Personal_Vehicle,false);
		else Alert_Abort(Error_NetPlayer_Vehicle,false);		
	}
	else GET_CAR_CHAR_IS_USING(Player_PED,&vehicle);
		
	if(SelectedItem == 4)blue_neon_on_vehicle(vehicle);
	else if(SelectedItem == 5)red_neon_on_vehicle(vehicle);
	else if(SelectedItem == 6)orange_neon_on_vehicle(vehicle);
	else if(SelectedItem == 7)white_neon_on_vehicle(vehicle);
	else if(SelectedItem == 8)lavender_neon_on_vehicle(vehicle);
	else if(SelectedItem == 9){
		if(Episode == 0)disco_lights_on_vehicle(vehicle);
		else Alert("~b~MD: ~s~Original only.",false);
	}
	else if(SelectedItem == 10)	purple_flash_on_vehicle(vehicle);
	else if(SelectedItem == 11)	green_flash_on_vehicle(vehicle);
	else if(SelectedItem == 12)	lightreflect_on_vehicle(vehicle);
	else if(SelectedItem == 13)	electro_shock_on_vehicle(vehicle);
	else if(SelectedItem == 14)	whitesmoke_on_vehicle(vehicle);
	else if(SelectedItem == 15)	devilsmoke_on_vehicle(vehicle);
	else if(SelectedItem == 16)	devilsdust_on_vehicle(vehicle);
	else if(SelectedItem == 17)	lightaround_on_vehicle(vehicle);
	else if(SelectedItem == 18){
		if(Episode == 2)yellow_neon_on_vehicle(vehicle);
		else Alert("~b~MD: ~s~TBoGT only.",false);
	}
	else if(SelectedItem == 19){
		if(Episode == 2)green_neon_on_vehicle(vehicle);
		else Alert("~b~MD: ~s~TBoGT only.",false);
	}	
	else if(SelectedItem == 20)	MD_Delete_Objects_On_Vehicle(Player_ID);	
}


void MC_Vehicle_Colour_Num_Setup(const int Player_ID){ 
	//!**Player Char Check**//
	Ped Player_PED;
	Vehicle vehicle;
	ColourIndex color1, color2, color3, color4;
	if(!PLAYER_HAS_CHAR(Player_ID))return Alert_Abort(Error_Char_Missing,false);
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);	
	/**Vehicle Checker**/
	if(!IS_CHAR_IN_ANY_CAR(Player_PED)){
		if(Player_PED == pPlayer)Alert_Abort(Error_Personal_Vehicle,false);
		else Alert_Abort(Error_NetPlayer_Vehicle,false);		
	}
	else {
	GET_CAR_CHAR_IS_USING(Player_PED,&vehicle);	
	MENU_SUB_HEADER = "Vehicle Colours";	
	AddFunction_Num_CB("~BLIP_52~ Colour 1",134);
	AddFunction_Num_CB("~BLIP_52~ Colour 2",134);
	AddFunction_Num_CB("~BLIP_52~ Extra Colour 1",134);
	AddFunction_Num_CB("~BLIP_52~ Extra Colour 2",134);
	AddFunction_Value("Save Colours",2);  
	MD_Colour_Display_2 = true;
	
	GET_CAR_COLOURS(vehicle,&color1,&color2);
	GET_EXTRA_CAR_COLOURS(vehicle,&color3,&color4);

	menu_item[1].num_val = color1 + 1;
	menu_item[2].num_val = color2 + 1;
	menu_item[3].num_val = color3 + 1;
	menu_item[4].num_val = color4 + 1;	
	}
}


void MC_Veh_Upgrade_Setup(const int Player_ID){ 
	//!**Player Char Check**//
	Ped Player_PED;
	Vehicle vehicle;
	ColourIndex color1, color2, color3, color4;
	if(!PLAYER_HAS_CHAR(Player_ID))return Alert_Abort(Error_Char_Missing,false);
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);	
	/**Vehicle Checker**/
	if(!IS_CHAR_IN_ANY_CAR(Player_PED)){
		if(Player_PED == pPlayer)Alert_Abort(Error_Personal_Vehicle,false);
		else Alert_Abort(Error_NetPlayer_Vehicle,false);		
	}
	else {
	GET_CAR_CHAR_IS_USING(Player_PED,&vehicle);	
	MENU_SUB_HEADER = "Upgrades";
	
	char *txt_upgrade[10];
		txt_upgrade[0] = "~BLIP_52~ Upgrade 1";
		txt_upgrade[1] = "~BLIP_52~ Upgrade 2";
		txt_upgrade[2] = "~BLIP_52~ Upgrade 3";
		txt_upgrade[3] = "~BLIP_52~ Upgrade 4";
		txt_upgrade[4] = "~BLIP_52~ Upgrade 5";
		txt_upgrade[5] = "~BLIP_52~ Upgrade 6";
		txt_upgrade[6] = "~BLIP_52~ Upgrade 7";
		txt_upgrade[7] = "~BLIP_52~ Upgrade 8";
		txt_upgrade[8] = "~BLIP_52~ Upgrade 9";
		txt_upgrade[9] = "~BLIP_52~ Upgrade 10";
		uint I, txt_I;
		for (I = 0; I <= 9; I++){
			bool turnedon = false;
			if (!IS_VEHICLE_EXTRA_TURNED_ON(vehicle, I)){
				TURN_OFF_VEHICLE_EXTRA(vehicle, I, false);
				turnedon = true;
			}
			if (IS_VEHICLE_EXTRA_TURNED_ON(vehicle, I))	{
				txt_I++;
				if (turnedon)TURN_OFF_VEHICLE_EXTRA(vehicle, I, true);
				AddBool(txt_upgrade[txt_I],IS_VEHICLE_EXTRA_TURNED_ON(vehicle, I));
				menu_item[itemCount].num_val = I;
			}
		}
		if (txt_I == 0){
			SetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_IN_ERROR, true);
			Add_Error("~BLIP_52~ No Upgrades available");
			Add_Error("~BLIP_52~ Press ~PAD_B~ To Return");
		}
		return;	
	}	
}

void MC_Veh_Upgrade_Action(const int Player_ID){ 
	//!**Player Char Check**//
	Ped Player_PED;
	Vehicle vehicle;
	ColourIndex color1, color2, color3, color4;
	if(!PLAYER_HAS_CHAR(Player_ID))return Alert_Abort(Error_Char_Missing,false);
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);	
	/**Vehicle Checker**/
	if(!IS_CHAR_IN_ANY_CAR(Player_PED)){
		if(Player_PED == pPlayer)Alert_Abort(Error_Personal_Vehicle,false);
		else Alert_Abort(Error_NetPlayer_Vehicle,false);		
	}
	else {
		GET_CAR_CHAR_IS_USING(Player_PED,&vehicle);		
		uint vehicle_upgrade = menu_item[SelectedItem].num_val;
		if (IS_VEHICLE_EXTRA_TURNED_ON(vehicle, vehicle_upgrade)){
			TURN_OFF_VEHICLE_EXTRA(vehicle, vehicle_upgrade, true);
			menu_item[SelectedItem].extra_val = false;
		}
		else{
			TURN_OFF_VEHICLE_EXTRA(vehicle, vehicle_upgrade, false);
			menu_item[SelectedItem].extra_val = true;
		}	
	}
}	



void MC_Vehicle_Colour_Num_Action(const int Player_ID){
	//!**Player Char Check**//
	Ped Player_PED;
	Vehicle vehicle;
	ColourIndex color1, color2, color3, color4;
	if(!PLAYER_HAS_CHAR(Player_ID))return Alert_Abort(Error_Char_Missing,false);
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);	
	/**Vehicle Checker**/
	if(!IS_CHAR_IN_ANY_CAR(Player_PED)){
		if(Player_PED == pPlayer)Alert_Abort(Error_Personal_Vehicle,false);
		else Alert_Abort(Error_NetPlayer_Vehicle,false);		
	}
	else{
		GET_CAR_CHAR_IS_USING(Player_PED,&vehicle);	
		GET_CAR_COLOURS(vehicle,&color1,&color2);
		GET_EXTRA_CAR_COLOURS(vehicle,&color3,&color4);
		if(SelectedItem == 1)CHANGE_CAR_COLOUR(vehicle,(menu_item[item_highlighted].num_val - 1),color2);
		else if(SelectedItem == 2)CHANGE_CAR_COLOUR(vehicle,color1,(menu_item[item_highlighted].num_val - 1));
		else if(SelectedItem == 3)SET_EXTRA_CAR_COLOURS(vehicle,(menu_item[item_highlighted].num_val - 1),color4);
		else if(SelectedItem == 4)SET_EXTRA_CAR_COLOURS(vehicle,color3,(menu_item[item_highlighted].num_val - 1));	
		else if(SelectedItem == 5){
			if(menu_item[SelectedItem].num_val == 1){
			GET_CAR_COLOURS(vehicle,&SavedColors1,&SavedColors2);
			GET_EXTRA_CAR_COLOURS(vehicle,&SavedColors3,&SavedColors4);
			Coloursetting_Personal = true;
			Alert(Colours_Updated,false);
			}
			else if(menu_item[SelectedItem].num_val == 2){
			GET_CAR_COLOURS(vehicle,&SavedColors5,&SavedColors6);
			GET_EXTRA_CAR_COLOURS(vehicle,&SavedColors7,&SavedColors8);
			Coloursetting_Net = true;
			Alert(Colours_Updated,false);
			}
		}
	}	
}

void drawColorPalette(void){ // Move to main looped actions!
	if(MD_Colour_Display_1){
		DRAW_RECT(Color_Palette_x, Color_Palette_y - Color_Palette_Scroll , 0.1, 0.0230, 221, 159, 87, 255);//   - Gold
		DRAW_RECT(Color_Palette_x, Color_Palette_y, 0.1, 0.0230, 153, 0, 0, 255);//red
		DRAW_RECT(Color_Palette_x, Color_Palette_y + Color_Palette_Scroll, 0.1, 0.0230, 255,69,0, 255);//Orange Red
		DRAW_RECT(Color_Palette_x, Color_Palette_y + (Color_Palette_Scroll*2), 0.1, 0.0230, 255,140,0, 255);//Orange Yellow
		DRAW_RECT(Color_Palette_x, Color_Palette_y + (Color_Palette_Scroll*3), 0.1, 0.0230, 255,215,0, 255);//Yellow
		DRAW_RECT(Color_Palette_x, Color_Palette_y + (Color_Palette_Scroll*4), 0.1, 0.0230, 0,191,255, 255);//Light Blue
		DRAW_RECT(Color_Palette_x, Color_Palette_y + (Color_Palette_Scroll*5), 0.1, 0.0230, 0, 102, 204, 255);//Medium Blue
		DRAW_RECT(Color_Palette_x, Color_Palette_y + (Color_Palette_Scroll*6), 0.1, 0.0230, 40, 46, 127, 255);//Dark Blue
		DRAW_RECT(Color_Palette_x, Color_Palette_y + (Color_Palette_Scroll*7), 0.1, 0.0230, 186,85,211, 255);//Purple
		DRAW_RECT(Color_Palette_x, Color_Palette_y + (Color_Palette_Scroll*8), 0.1, 0.0230, 199,21,133, 255);//Pink
		DRAW_RECT(Color_Palette_x, Color_Palette_y + (Color_Palette_Scroll*9), 0.1, 0.0230, 50,205,50, 255);//Light Green
		DRAW_RECT(Color_Palette_x, Color_Palette_y + (Color_Palette_Scroll*10), 0.1, 0.0230, 34,139,34, 255);//medium Green
		DRAW_RECT(Color_Palette_x, Color_Palette_y + (Color_Palette_Scroll*11), 0.1, 0.0230, 0, 102, 51, 255);//Dark Green
		DRAW_RECT(Color_Palette_x, Color_Palette_y + (Color_Palette_Scroll*12), 0.1, 0.0230, 255, 255, 255, 255);//White
		DRAW_RECT(Color_Palette_x, Color_Palette_y + (Color_Palette_Scroll*13), 0.1, 0.0230, 192, 192, 192, 255);//Light Grey
		DRAW_RECT(Color_Palette_x, Color_Palette_y + (Color_Palette_Scroll*14), 0.1, 0.0230, 64, 64, 64, 255);//Dark Grey
		DRAW_RECT(Color_Palette_x, Color_Palette_y + (Color_Palette_Scroll*15), 0.1, 0.0230, 0, 0, 0, 255);//Black
		
	}
	else if(MD_Colour_Display_2){
		DRAW_RECT(Color_Palette_x, Color_Palette_y, 0.1, 0.0230, 153, 0, 0, 255);//red
		DRAW_RECT(Color_Palette_x, Color_Palette_y + Color_Palette_Scroll, 0.1, 0.0230, 255,69,0, 255);//Orange Red
		DRAW_RECT(Color_Palette_x, Color_Palette_y + (Color_Palette_Scroll*2), 0.1, 0.0230, 255,140,0, 255);//Orange Yellow
		DRAW_RECT(Color_Palette_x, Color_Palette_y + (Color_Palette_Scroll*3), 0.1, 0.0230, 255,215,0, 255);//Yellow
		DRAW_RECT(Color_Palette_x, Color_Palette_y + (Color_Palette_Scroll*4), 0.1, 0.0230, 0,191,255, 255);//Light Blue
		DRAW_RECT(Color_Palette_x, Color_Palette_y + (Color_Palette_Scroll*5), 0.1, 0.0230, 0, 102, 204, 255);//Medium Blue
		DRAW_RECT(Color_Palette_x, Color_Palette_y + (Color_Palette_Scroll*6), 0.1, 0.0230, 40, 46, 127, 255);//Dark Blue
		DRAW_RECT(Color_Palette_x, Color_Palette_y + (Color_Palette_Scroll*7), 0.1, 0.0230, 186,85,211, 255);//Purple
		DRAW_RECT(Color_Palette_x, Color_Palette_y + (Color_Palette_Scroll*8), 0.1, 0.0230, 199,21,133, 255);//Pink
		DRAW_RECT(Color_Palette_x, Color_Palette_y + (Color_Palette_Scroll*9), 0.1, 0.0230, 50,205,50, 255);//Light Green
		DRAW_RECT(Color_Palette_x, Color_Palette_y + (Color_Palette_Scroll*10), 0.1, 0.0230, 34,139,34, 255);//medium Green
		DRAW_RECT(Color_Palette_x, Color_Palette_y + (Color_Palette_Scroll*11), 0.1, 0.0230, 0, 102, 51, 255);//Dark Green
		DRAW_RECT(Color_Palette_x, Color_Palette_y + (Color_Palette_Scroll*12), 0.1, 0.0230, 255, 255, 255, 255);//White
		DRAW_RECT(Color_Palette_x, Color_Palette_y + (Color_Palette_Scroll*13), 0.1, 0.0230, 192, 192, 192, 255);//Light Grey
		DRAW_RECT(Color_Palette_x, Color_Palette_y + (Color_Palette_Scroll*14), 0.1, 0.0230, 64, 64, 64, 255);//Dark Grey
		DRAW_RECT(Color_Palette_x, Color_Palette_y + (Color_Palette_Scroll*15), 0.1, 0.0230, 0, 0, 0, 255);//Black
		
	}
	else if(MD_Colour_Display_3){
		DRAW_RECT(Color_Palette_x, Color_Palette_y - Color_Palette_Scroll , 0.1, 0.0230, 221, 159, 87, 255);//   - Gold
		DRAW_RECT(Color_Palette_x, Color_Palette_y , 0.1, 0.0230,250, 212, 149, 255);//  - Cream
		DRAW_RECT(Color_Palette_x, Color_Palette_y + Color_Palette_Scroll, 0.1, 0.0230,130, 57,  3 , 255);//   - Chocolate
		DRAW_RECT(Color_Palette_x, Color_Palette_y + Color_Palette_Scroll*2, 0.1, 0.0230,79,  7,   71, 255);//   - Grape
		DRAW_RECT(Color_Palette_x, Color_Palette_y + Color_Palette_Scroll*3, 0.1, 0.0230,255, 0,   168, 255);//  - Magenta
		DRAW_RECT(Color_Palette_x, Color_Palette_y + Color_Palette_Scroll*4, 0.1, 0.0230,79,  27,  50, 255);//   - Blackcurrant
		DRAW_RECT(Color_Palette_x, Color_Palette_y + Color_Palette_Scroll*5, 0.1, 0.0230,51,  18,  48, 255);//   - Stinger
		DRAW_RECT(Color_Palette_x, Color_Palette_y + Color_Palette_Scroll*6, 0.1, 0.0230,217, 222, 247 , 255);//   - Silver
		DRAW_RECT(Color_Palette_x, Color_Palette_y + Color_Palette_Scroll*7, 0.1, 0.0230,99,  13,  2 , 255);//   - Metallic Red
		DRAW_RECT(Color_Palette_x, Color_Palette_y + Color_Palette_Scroll*8, 0.1, 0.0230,13,  167, 255 , 255);// - Neon Blue
		DRAW_RECT(Color_Palette_x, Color_Palette_y + Color_Palette_Scroll*9, 0.1, 0.0230,24,  33,  201, 255);//  - Royal Blue
		DRAW_RECT(Color_Palette_x, Color_Palette_y + Color_Palette_Scroll*10, 0.1, 0.0230,145, 233, 255, 255);//  - Silvery Blue
		DRAW_RECT(Color_Palette_x, Color_Palette_y + Color_Palette_Scroll*11, 0.1, 0.0230,20,  5,   99, 255);//   - Electric Blue
		DRAW_RECT(Color_Palette_x, Color_Palette_y + Color_Palette_Scroll*12, 0.1, 0.0230,165, 145, 98, 255);//   - Champagne
		DRAW_RECT(Color_Palette_x, Color_Palette_y + Color_Palette_Scroll*13, 0.1, 0.0230,200, 255, 59, 255);//   - Pine/Lime
		DRAW_RECT(Color_Palette_x, Color_Palette_y + Color_Palette_Scroll*14, 0.1, 0.0230,190, 255, 183, 255);//  - Spearmint
		DRAW_RECT(Color_Palette_x, Color_Palette_y + Color_Palette_Scroll*15, 0.1, 0.0230,4,   107, 4, 255);//    - Special Green
		DRAW_RECT(Color_Palette_x, Color_Palette_y + Color_Palette_Scroll*16, 0.1, 0.0230,124, 255, 64, 255);//   - Metallic Green
		DRAW_RECT(Color_Palette_x, Color_Palette_y + Color_Palette_Scroll*17, 0.1, 0.0230,59,  8,   59, 255);//   - Metallic Purple
		DRAW_RECT(Color_Palette_x, Color_Palette_y + Color_Palette_Scroll*18, 0.1, 0.0230,178, 135, 0, 255);//    - Electric Yellow
	}
}


void MC_Vehicle_Loop(void) 
{
	//New
	
}

