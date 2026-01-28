/**
 * @ MD EXTEND+
 * @ Version MDv13 TRIDENT(Essentials Based)
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */

#pragma once

//extern void EXPLODE_CAR(Vehicle vehicle, boolean unknownTrue, boolean unknownFalse); //etter than spawnin an explosion
//ANCHOR_BOAT(Vehicle boat, boolean anchor); //NEED THIS!!!

//NEEDED! Seat swap: int value (NATHAN CAN RIG THIS PERFECT IF U LIKE IT)

void MD_VehOpt_Pplayer_Setup(void){	
	MENU_SUB_HEADER = "Vehicle Options";
	NETWORK_FIRST_FOUR_ITEMS_MENU_SETUP(); 
	Add_JumpOver("~BLIP_94~  V E H I C L E   O P T I O N S ~BLIP_94~");			//5
	AddSubMenu("Full Spawner  ~PAD_RIGHT~");									//6
	AddSubMenu("Garage ~y~(Addons & Colours)  ~PAD_RIGHT~");					//7
	AddSubMenu("Upgrades ~PAD_RIGHT~");											//8
	AddFunction_Value("Quick Spawn",13); 										//9		
	AddFunction_Value("General",8); 											//10
	AddFunction_Value("Spawn Settings", 8);										//11
	AddFunction_Value("Physics", 3);											//12
	AddFunction_Value("Stunt Modes", 5); 										//13
	AddFunction_Value("Speed Settings",3); 										//14
	AddFunction_Value("Auto-lock",3); 											//15
	AddFunction_Value("Actions", 6); 											//16
	AddFunction_Value("Forces",9); 												//17
	AddFunction_Value("Heading",6); 											//18
	AddFunction_Value("Transformer",6);											//19
	AddFunction_Value("Heli Weapon Type",3);									//20
	AddFunction_Value("Armed Vehicles",2);										//21
	/**Remember Strings and numvals**/
	item_highlighted = 6;
	menu_item[15].num_val = GetByteInSet(WeatherTimeAutoLockByteSet,VEHICLE_AUTOLOCK);
	//menu_item[20].num_val == Vehicle_Weapon;
}

void MD_VehOpt_Pplayer_Action(void){	
	NETWORK_FIRST_FOUR_ITEMS_MENU_ACTION();	
	//Jumpover 5
	//Sub Spawner 6
	//Sub Addons 7
	//Sub Upgrades 8	
	if(SelectedItem == 10 || SelectedItem == 11 || SelectedItem == 15 ||  SelectedItem == 16 ||  SelectedItem == 17 ||  SelectedItem == 18 ||  SelectedItem == 19 ||  SelectedItem == 20 ||  SelectedItem == 21 ){		
		if(!IS_CHAR_IN_ANY_CAR(pPlayer)){
			Alert(Error_Personal_Vehicle,false);
			return;
		}
		else GET_CAR_CHAR_IS_USING(pPlayer,&Personal_Vehicle);		
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
		MD_VEHICLE_SPAWNER_ON_ID(iPlayer,Vehicle[(menu_item[SelectedItem].num_val)]);
	}
	/**General**/ 
	if(SelectedItem == 10){//DONE	
		if(menu_item[SelectedItem].num_val == 1){ // Fix & Wash
			FIX_CAR(Personal_Vehicle);
			SET_CAR_ENGINE_ON(Personal_Vehicle,true,true);
			SET_CAR_PROOFS( Personal_Vehicle, 1, 1, 1, 1, 1 );
			SET_VEHICLE_DIRT_LEVEL(Personal_Vehicle, 0);
		}
		else if(menu_item[SelectedItem].num_val == 2){ //Flip
			float h;
			GET_CAR_HEADING(Personal_Vehicle,&h);
			SET_VEHICLE_QUATERNION(Personal_Vehicle,0,0,0,0);
			SET_CAR_HEADING(Personal_Vehicle,h);
			SET_CAR_ON_GROUND_PROPERLY(Personal_Vehicle);
		}
		else if(menu_item[SelectedItem].num_val == 3){
			int i;
			SET_CAN_BURST_CAR_TYRES(Personal_Vehicle,true);
			for(i = 0; i < 8; i++)
			{
				if(IS_CAR_TYRE_BURST(Personal_Vehicle,i)) continue;
				BURST_CAR_TYRE(Personal_Vehicle,i);
			}
		//Burst Tyres
		}
		else if(menu_item[SelectedItem].num_val == 4){ //Fix tyres --> This doesnt work well, for a bike only front wheel is fixed, same for vehicle, not all wheels get fixed
			int num_tyres = 0;
				int i;
				for(i = 0; i < 8; i++)
				{
					if(IS_CAR_TYRE_BURST(Personal_Vehicle,i))
					{
						FIX_CAR_TYRE(Personal_Vehicle,i);	
					}						
				}
		}
		else if(menu_item[SelectedItem].num_val == 5){ // Okay..Works
		SET_CHAR_VISIBLE(pPlayer,!IS_CHAR_VISIBLE(pPlayer));
		}
		else if(menu_item[SelectedItem].num_val == 6){ // Sets invisible, doesnt reverse it --> This needs work
			if(IS_CHAR_VISIBLE(pPlayer)){			
				SET_CHAR_VISIBLE(pPlayer,false);
				if(IS_CHAR_IN_ANY_CAR(pPlayer)){
					GET_CAR_CHAR_IS_USING(pPlayer,&Personal_Vehicle);
					SET_CAR_VISIBLE(Personal_Vehicle, false);
					SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVISIBLE,true);					
				}
			}
			else{
				SET_CHAR_VISIBLE(pPlayer,true);				
				if(IS_CHAR_IN_ANY_CAR(pPlayer)){
					GET_CAR_CHAR_IS_USING(pPlayer,&Personal_Vehicle);
					SET_CAR_VISIBLE(Personal_Vehicle, true);	
					SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVISIBLE,false);					
				}				
			}		
		}
		else if(menu_item[SelectedItem].num_val == 7){	//Blips need work too. 2 things : Hide/show Blip Ped (ped alone) / or / Hide/show Blip Ped (+ vehicle visible/invisible)												
			
			if((GetBit(VehicleOptionsBitSet,VEHICLE_OPTION_REMOVE_BLIP) || GetBit(pPlayerOptionsBitSet,PLAYER_OPTION_REMOVE_BLIP))){
				SetBit(VehicleOptionsBitSet,VEHICLE_OPTION_REMOVE_BLIP,false);
				SetBit(pPlayerOptionsBitSet,PLAYER_OPTION_REMOVE_BLIP,false);
				SET_CHAR_VISIBLE(pPlayer,true);				
				if(IS_CHAR_IN_ANY_CAR(pPlayer)){				
					GET_CAR_CHAR_IS_USING(pPlayer,&Personal_Vehicle);
					SET_CAR_VISIBLE(Personal_Vehicle, true);	
					SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVISIBLE,false);
					SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_DESOLIDIFY,false);					
				}	
				SET_PLAYER_CONTROL(iPlayer, true);
			}
			else{
				SetBit(VehicleOptionsBitSet,VEHICLE_OPTION_REMOVE_BLIP,true);
				SetBit(pPlayerOptionsBitSet,PLAYER_OPTION_REMOVE_BLIP,true);								
			}	
			
		}
		else if(menu_item[SelectedItem].num_val == 8){
			MD_Delete_Objects_On_Vehicle(iPlayer); //will only print if it deletes an object
			DELETE_CAR(&Personal_Vehicle);
		}		
	}
	/**Active Spawn Settings**/
	else if(SelectedItem == 11){ //DONE
		if(menu_item[SelectedItem].num_val == 1){
			ToggleBit(VehicleOptionsBitSet,VEHICLE_OPTION_ALL_UPGRADES);
			int i;
			for(i=0;i<10;i++)TURN_OFF_VEHICLE_EXTRA(Personal_Vehicle, i, !GetBit(VehicleOptionsBitSet,VEHICLE_OPTION_ALL_UPGRADES));				
		}
		else if(menu_item[SelectedItem].num_val == 2){
		ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE);
		/* //This is looped buddy..
		SET_CAR_CAN_BE_DAMAGED(Personal_Vehicle,!GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE));
		SET_CAR_CAN_BE_VISIBLY_DAMAGED(Personal_Vehicle,!GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE));
		SET_CAN_BURST_CAR_TYRES(Personal_Vehicle,!GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE));	
		*/
			if(GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE)){
			FIX_CAR(Personal_Vehicle);
			SET_CAR_ENGINE_ON(Personal_Vehicle,true,true);
			SET_VEHICLE_DIRT_LEVEL(Personal_Vehicle, 0);
			}
		}		
		else if(menu_item[SelectedItem].num_val == 3){
		ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_SIREN);
		SWITCH_CAR_SIREN(Personal_Vehicle,GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_SIREN));
		}	
		else if(menu_item[SelectedItem].num_val == 4)ToggleBit(VehicleOptionsBitSet,VEHICLE_OPTION_RAINBOW);
		else if(menu_item[SelectedItem].num_val == 5){
		ToggleBit(VehicleOptionsBitSet,VEHICLE_OPTION_ENGINE);
		SET_CAR_ENGINE_ON(Personal_Vehicle,GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_ENGINE),GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_ENGINE));
		}
		else if(menu_item[SelectedItem].num_val == 6){
		Coloursetting_Personal = !Coloursetting_Personal;
		if(Coloursetting_Personal )Alert("~b~MD: ~y~Personal Vehicle: ~s~This will enable saved colors on next spawns!",false);
		else Alert("~b~MD: ~y~Personal Vehicle: ~s~Random colours will be used next spawns!",false);		
		}
		else if(menu_item[SelectedItem].num_val == 7){
		Coloursetting_Net = !Coloursetting_Net;	
		if(Coloursetting_Net )Alert("~b~MD: ~y~Net Vehicles: ~s~This will enable saved colors on next spawns!",false);
		else Alert("~b~MD: ~y~Net Vehicles: ~s~Random colours will be used next spawns!",false);			
		}
		else if(menu_item[SelectedItem].num_val == 8){
		Coloursetting_Net = false;
		Coloursetting_Personal = false;
		Alert("~b~MD: ~y~Use of saved colours disabled.~n~~s~Random colours will be used next spawns!",false);			
		}
	}
	/**Physics**/
	else if(SelectedItem == 12){//DONE	
		if(menu_item[SelectedItem].num_val == 1)TOGGLE_DRIVE_WALK_WATER_FOR_PLAYER(iPlayer);		
		else if(menu_item[SelectedItem].num_val == 2){
		ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_DESOLIDIFY);		
		Alert_Two("~b~MD: ~s~Desolidified vehicle", GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_DESOLIDIFY) ? PrintON : PrintOFF ,false);
		//if(GetBit(VehicleOptionsBitSet, !VEHICLE_OPTION_DESOLIDIFY))SET_CAR_COLLISION(Personal_Vehicle,true); // This fixes the issue  //can't see it would buddy, you have !number here.. wtf?
		if(!GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_DESOLIDIFY)) SET_CAR_COLLISION(Personal_Vehicle,true);
		}
		else if(menu_item[SelectedItem].num_val == 3)ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_AUTO_BOAT);
	}
	/**Handling**/
	else if(SelectedItem == 13){//DONE
		if(menu_item[SelectedItem].num_val == 1)ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_JUMP);
		else if(menu_item[SelectedItem].num_val == 2)ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_DRIFT);
		else if(menu_item[SelectedItem].num_val == 3)ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_LOWER);
		else if(menu_item[SelectedItem].num_val == 4)ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_STICK_GROUND);
		else if(menu_item[SelectedItem].num_val == 5)ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_SUPER_BIKE);
		
	}
	/**Speed settings**/
	else if(SelectedItem == 14){//DONE
		if(menu_item[SelectedItem].num_val == 1){
		SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_NORMAL_SPEED, true);
		SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_SUPER_SPEED,false);
		SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_TURBO_SPEED,false); 
		}
		else if(menu_item[SelectedItem].num_val == 2){		
		ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_TURBO_SPEED);
		SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_SUPER_SPEED,false);
		SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_NORMAL_SPEED,false);//Just used to highlight
		}
		else if(menu_item[SelectedItem].num_val == 3){
		ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_SUPER_SPEED);
		SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_TURBO_SPEED,false);
		SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_NORMAL_SPEED,false);//Just used to highlight
		}
	}
	else if(SelectedItem == 15){//Lock modes, should contain all lock modes 	
		//Add as item 1 : SET_VEHICLE_LOCKED_WITHOUT_NET_CONTROL_REQUEST(Personal_Vehicle, !IS_CHARS_VEHICLE_LOCKED(PLAYER_CHAR(iPlayer)));
		#ifndef Premium
		if(menu_item[SelectedItem].num_val == 2){//Unlock for friends		
			Alert(PREMIUM_ONLY_STRING,true);
			return;
		}
		#endif
		SetByteSet(&WeatherTimeAutoLockByteSet, VEHICLE_AUTOLOCK, menu_item[SelectedItem].num_val);
	}
	/**Actions**/
	else if(SelectedItem == 16){ //Actions
		if(menu_item[SelectedItem].num_val == 1 && DOES_VEHICLE_EXIST(Personal_Vehicle)){
			float x,y,z,h;
			GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(pPlayer,1.5f,5.0f,0.0f,&x,&y,&z);
			GET_CHAR_HEADING(pPlayer,&h);
			h += 50.0f; //drivers seat facing you, open le door //maybe put like, -= 70.0f
			int car_clone;
			Clone_Car(Personal_Vehicle, x, y, z, h, &car_clone); //GetPlayerVeh() == works
			OPEN_CAR_DOOR(car_clone, 0);
		}
		else if(menu_item[SelectedItem].num_val == 2)FREEZE_CAR_POSITION(Personal_Vehicle,true);
		else if(menu_item[SelectedItem].num_val == 3)FREEZE_CAR_POSITION(Personal_Vehicle,false);		
		else if(menu_item[SelectedItem].num_val == 4){
			int z;
			for(z = 0; z < 4; z++){
				BREAK_CAR_DOOR(Personal_Vehicle,z,true);
				BURST_CAR_TYRE(Personal_Vehicle,z);
				REMOVE_CAR_WINDOW(Personal_Vehicle,z);
			}
			START_CAR_FIRE(Personal_Vehicle);
			SET_ENGINE_HEALTH(Personal_Vehicle,-5);
			SET_CAR_ENGINE_ON(Personal_Vehicle,false,false);
		}
		else if(menu_item[SelectedItem].num_val == 5){
		Shuffle_Vehicle_Seat();
		}
		else if(menu_item[SelectedItem].num_val == 6){
		REMOVE_CHAR_FROM_CAR_MAINTAIN_POSITION(pPlayer,Personal_Vehicle);
		}
	}
	/**Forces**/
	else if(SelectedItem == 17){	//DONE
		if(menu_item[SelectedItem].num_val == 1)APPLY_FORCE_TO_CAR(Personal_Vehicle,3,0,0,1000,0,0,0,0, 1, 1, 1);
		else if(menu_item[SelectedItem].num_val == 2)APPLY_FORCE_TO_CAR(Personal_Vehicle,3,0,0,-1000,0,0,0,0, 1, 1, 1);
		else if(menu_item[SelectedItem].num_val == 3)APPLY_FORCE_TO_CAR(Personal_Vehicle,3,-60,0,0,0,-60,0,0, 1, 1, 1);
		else if(menu_item[SelectedItem].num_val == 4)APPLY_FORCE_TO_CAR(Personal_Vehicle,3,60,0,0,0,-60,0,0, 1, 1, 1);
		else if(menu_item[SelectedItem].num_val == 5)APPLY_FORCE_TO_CAR(Personal_Vehicle,3,0,60,10.0,0,0,-10.0,0, 1, 1, 1);
		else if(menu_item[SelectedItem].num_val == 6)APPLY_FORCE_TO_CAR(Personal_Vehicle,3,0,-60,10.0,0,0,-10.0,0, 1, 1, 1);
		else if(menu_item[SelectedItem].num_val == 7){
			ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_FREEZE_POS );
			FREEZE_CAR_POSITION(Personal_Vehicle,GetBit(VehicleOptionsBitSet,VEHICLE_OPTION_FREEZE_POS));
		}
		else if(menu_item[SelectedItem].num_val == 8){
			int z;
			for(z = 0; z < 4; z++){
				BREAK_CAR_DOOR(Personal_Vehicle,z,true);
				BURST_CAR_TYRE(Personal_Vehicle,z);
				REMOVE_CAR_WINDOW(Personal_Vehicle,z);
			}
			START_CAR_FIRE(Personal_Vehicle);
			SET_ENGINE_HEALTH(Personal_Vehicle,-5);
			SET_CAR_ENGINE_ON(Personal_Vehicle,false,false);
		}
		else if(menu_item[SelectedItem].num_val == 9){
			FIX_CAR(Personal_Vehicle);
			SET_CAR_ENGINE_ON(Personal_Vehicle,true,true);
			SET_VEHICLE_DIRT_LEVEL(Personal_Vehicle, 0);
		}		
	}
	/**Heading**/
	else if(SelectedItem == 18){
		float Vehicle_Heading_Change,speed;
		if(menu_item[SelectedItem].num_val > 0 || menu_item[SelectedItem].num_val < 6){
			GET_CAR_SPEED(Personal_Vehicle,&speed);
			GET_CAR_HEADING(Personal_Vehicle,&Vehicle_Heading_Change);
		}
		if(menu_item[SelectedItem].num_val == 1)SET_CAR_FORWARD_SPEED(Personal_Vehicle,speed*3);
		if(menu_item[SelectedItem].num_val == 2){
		SET_CAR_HEADING(Personal_Vehicle,Vehicle_Heading_Change-180);
		SET_CAR_FORWARD_SPEED(Personal_Vehicle,speed*3);
		}
		if(menu_item[SelectedItem].num_val == 3){
		SET_CAR_HEADING(Personal_Vehicle,Vehicle_Heading_Change - 180);
		SET_CAR_FORWARD_SPEED(Personal_Vehicle,speed);		
		}
		if(menu_item[SelectedItem].num_val == 4){
		SET_CAR_HEADING(Personal_Vehicle,Vehicle_Heading_Change + 90.00f);
		SET_CAR_FORWARD_SPEED(Personal_Vehicle,speed);		
		}
		if(menu_item[SelectedItem].num_val == 5){
		SET_CAR_HEADING(Personal_Vehicle,Vehicle_Heading_Change - 90.00f);
		SET_CAR_FORWARD_SPEED(Personal_Vehicle,speed);		
		}	
		if(menu_item[SelectedItem].num_val == 6){
		ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_ROTATE);
		}
	}
	/**Vehicle Transformer**/
	else if(SelectedItem == 19) //Bracket doesn't go here
	{	//Bracket being here makes it much easier to read
		if(menu_item[SelectedItem].num_val == 1) //Bracket doesn't go here
		{
			Vehicle_Transformer(iPlayer, 1);
		}
		else if(menu_item[SelectedItem].num_val == 2) //Bracket doesn't go here
		{
			Vehicle_Transformer(iPlayer, 2);
		}
		else if(menu_item[SelectedItem].num_val == 3) //Bracket doesn't go here
		{
			Vehicle_Transformer(iPlayer, 3);
		}
		else if(menu_item[SelectedItem].num_val == 4) //Bracket doesn't go here
		{		
			turn_car_into_heli(Personal_Vehicle);		
		}
		else if(menu_item[SelectedItem].num_val == 5){
			delete_transformers_on_vehicle(Personal_Vehicle);
			SET_CHAR_VISIBLE(pPlayer,true);
			SetBit(VehicleOptionsBitSet, !VEHICLE_OPTION_INVISIBLE,false);	
			SET_CAR_VISIBLE(Personal_Vehicle,true);	
		}
		else if(menu_item[SelectedItem].num_val == 6){
			delete_transformers_on_vehicle(Personal_Vehicle);
			SET_CHAR_VISIBLE(pPlayer,true);
			SetBit(VehicleOptionsBitSet, !VEHICLE_OPTION_INVISIBLE,false);	
			if(IS_CHAR_IN_ANY_CAR(pPlayer))DELETE_CAR(&Personal_Vehicle);				
		}
	}
	else if(SelectedItem == 20)
	{
		if(menu_item[SelectedItem].num_val == 1)
		{
			Vehicle_Weapon = WEAPON_RLAUNCHER;
			int Pednr;
			for(Pednr = 0; Pednr < 4; Pednr++)
			{
				if(!DOES_CHAR_EXIST(WeaponVeh_ped[Pednr])) continue;							
				UpdateWeaponOfPed(WeaponVeh_ped[Pednr], Vehicle_Weapon);
				SET_CURRENT_CHAR_WEAPON(WeaponVeh_ped[Pednr], Vehicle_Weapon, true);
				WAIT(30);
			}
			Alert("~b~MD: ~s~Heli Weapon updated",false);				
		}
		else if(menu_item[SelectedItem].num_val == 2)
		{
			Vehicle_Weapon = WEAPON_M4;
			int Pednr;
			for(Pednr = 0; Pednr < 4; Pednr++)
			{
				if(!DOES_CHAR_EXIST(WeaponVeh_ped[Pednr])) continue;						
				UpdateWeaponOfPed(WeaponVeh_ped[Pednr], Vehicle_Weapon);
				SET_CURRENT_CHAR_WEAPON(WeaponVeh_ped[Pednr], Vehicle_Weapon, true);
				WAIT(30);
			}
			Alert("~b~MD: ~s~Heli Weapon updated",false);				
		}
		else if(menu_item[SelectedItem].num_val == 3)
		{
			Vehicle_Weapon = WEAPON_SNIPERRIFLE;
			int Pednr;
			for(Pednr = 0; Pednr < 4; Pednr++)
			{
				if(!DOES_CHAR_EXIST(WeaponVeh_ped[Pednr])) continue;							
				UpdateWeaponOfPed(WeaponVeh_ped[Pednr], Vehicle_Weapon);
				SET_CURRENT_CHAR_WEAPON(WeaponVeh_ped[Pednr], Vehicle_Weapon, true);
				WAIT(30);
			}	
			Alert("~b~MD: ~s~Heli Weapon updated",false);			
		}
		
	}
	/**Vehicle Weapons**/
	else if(SelectedItem == 21){	
		if(menu_item[SelectedItem].num_val == 1){
		MD_Weapon_Vehicle = !MD_Weapon_Vehicle;
		
		}
		else if(menu_item[SelectedItem].num_val == 2)
		{
			/*
			if(!GetBit(MD_Misc_OptionsBitSet, MD_MISC_NATHANS_RAPID_FIRE_HELI))
			{
				SetBit(MD_Misc_OptionsBitSet, MD_MISC_NATHANS_RAPID_FIRE_HELI, true);
			}
			else
			{
				SetBit(MD_Misc_OptionsBitSet, MD_MISC_NATHANS_RAPID_FIRE_HELI, false);
				int i;
				for(i = 0; i < 4; i++)
				{
					if(DOES_CHAR_EXIST(Nathans_RapidHeli_Peds[i])) DELETE_CHAR(&Nathans_RapidHeli_Peds[i]);
				}
			}
			*/
		#ifdef Premium
		Devils_Rapid_Fire_Heli = !Devils_Rapid_Fire_Heli;
		if(Devils_Rapid_Fire_Heli)Vehicle_Weapon = WEAPON_SNIPERRIFLE;
		else
		{
			int i;
			for(i = 0; i < 4; i++)
			{
				if(DOES_CHAR_EXIST(WeaponVeh_ped[i])) DELETE_CHAR(&WeaponVeh_ped[i]);
			}
		}
		#else
			Alert("Premium only nigga!",false);
		#endif
		}		
	}
}



void MC_Vehicle_Loop_pPlayer(void){
	/**Devils Mean Machines**/
	Weapon_Vehicle();
	#ifdef Premium
	Rapid_Fire_Heli();
	#endif
	/***********************/
	if(IS_CHAR_IN_ANY_CAR(pPlayer))	{
		/*
		if(GetBit(MD_Misc_OptionsBitSet, MD_MISC_NATHANS_RAPID_FIRE_HELI)) 
		{
			Nathans_Rapid_Fire_Heli();
			/*
			if(Nathans_RapidHeli_Tick < GetTickCount())
			{
				Nathans_RapidHeli_Tick = (GetTickCount() + 200);
				Nathans_Rapid_Fire_Heli();
			}
			
		}
		*/
		int driver;
		GET_CAR_CHAR_IS_USING(pPlayer,&Personal_Vehicle);
		GET_DRIVER_OF_CAR(Personal_Vehicle,&driver);
		if(driver == pPlayer){
			bool in_heli = IS_CHAR_IN_ANY_HELI(pPlayer);
			float mx,my,mz,mh;
			int model;
			GET_CAR_MODEL(Personal_Vehicle,&model);
			GET_CHAR_COORDINATES_HEADING(pPlayer,&mx,&my,&mz,&mh);
			
			/**Active Spawnsettings**/
			if(GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_STICK_GROUND))SET_CAR_ON_GROUND_PROPERLY(Personal_Vehicle);
			SET_CAR_ENGINE_ON(Personal_Vehicle,GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_ENGINE),GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_ENGINE));
			SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN(pPlayer, !GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE));
			SET_CAR_CAN_BE_DAMAGED(Personal_Vehicle, !GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE));
			SET_CAR_CAN_BE_VISIBLY_DAMAGED(Personal_Vehicle, !GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE));
			SET_CAN_BURST_CAR_TYRES(Personal_Vehicle, !GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE));
			SET_CAR_WATERTIGHT(Personal_Vehicle, GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE));
			//SET_CAR_VISIBLE(Personal_Vehicle, !GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVISIBLE));
			
			
			bool L_WAS_PRESSED = IS_BUTTON_JUST_PRESSED(0,BUTTON_L);
			bool R_IS_PRESSED = IS_BUTTON_PRESSED(0,BUTTON_R);
			bool L_IS_PRESSED = IS_BUTTON_PRESSED(0,BUTTON_L);
			float speed;
			GET_CAR_SPEED(Personal_Vehicle,&speed);
			/**Super Speed**/
			if(GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_SUPER_SPEED)){
				if(L_WAS_PRESSED || R_IS_PRESSED)SET_CAR_FORWARD_SPEED(Personal_Vehicle, ( L_WAS_PRESSED ? (speed / 6) : (speed * 1.02)) ); 				
			}
			/**Turbo Speed**/
			if(GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_TURBO_SPEED)){
			if(L_WAS_PRESSED || R_IS_PRESSED)SET_CAR_FORWARD_SPEED(Personal_Vehicle, ( L_WAS_PRESSED ? (speed / 3) : (speed * 1.0001)) ); 				
			}
			/**Super Bike**/
			bool on_bike = IS_CHAR_ON_ANY_BIKE(pPlayer);
			if(GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_SUPER_BIKE) && on_bike){
				if(R_IS_PRESSED || L_IS_PRESSED)SET_CAR_FORWARD_SPEED(Personal_Vehicle, (R_IS_PRESSED ? (speed * 1.01) : (speed / 3)) );
			}
			/**Spawn Boat in water**///Freezes
			bool in_boat = IS_CHAR_IN_ANY_BOAT(pPlayer);
			if(GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_AUTO_BOAT) && !in_boat){				
				if(IS_CAR_IN_WATER(Personal_Vehicle))MD_VEHICLE_SPAWNER_ON_ID(iPlayer ,MODEL_SQUALO);				
			}
			/**Vehicle Desolidify**/ 
			if(GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_DESOLIDIFY))
			{ 
				//if(!Devils_Rapid_Fire_Heli) //i think this what you need buddy??
				  SET_CAR_COLLISION(Personal_Vehicle,false);
				  if(!in_heli) SET_CAR_ON_GROUND_PROPERLY(Personal_Vehicle);
			}
			/*
			else if(!Devils_Rapid_Fire_Heli)
			{
				SET_CAR_COLLISION(Personal_Vehicle,true); //LOOOOOPED, BAD!
			}
			*/
			/**Vehicle Jump**/
			bool vehicle_upright = IS_CAR_UPRIGHT(Personal_Vehicle);
			if(GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_JUMP)){ //We need to display a helper for the 2 modes				
				if(IS_BUTTON_PRESSED(0,BUTTON_X)){	
					if(in_boat && !in_heli){					
						if(IS_VEHICLE_ON_ALL_WHEELS(Personal_Vehicle)){						
							if(on_bike) APPLY_FORCE_TO_CAR(Personal_Vehicle, 0, 0, 0, 510.0 , 0,0,0, 0, 1, 1, 1 );
							else APPLY_FORCE_TO_CAR(Personal_Vehicle, 0, 0, 0, 70.0 , 0,0,-70.0, 0, 1, 1, 1 );		
						}
					}
				}
				else if(IS_BUTTON_PRESSED(0,BUTTON_A))APPLY_FORCE_TO_CAR(Personal_Vehicle, 0, 0, 0, 80, 0, 0, -80, 0, 1, 1, 1);						
			}
			/**Stunt modes**/
			if(!in_boat && !in_heli && !on_bike && vehicle_upright){
				if(GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_LOWER))
					APPLY_FORCE_TO_CAR(Personal_Vehicle,true,0.0,0,-0.2,0.0,0.0,0.0,true,true,true,true);
				
				if(GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_DRIFT))
					APPLY_FORCE_TO_CAR(Personal_Vehicle,true,0.0,0,0.13,0.0,0.0,0.0,true,true,true,true);
			}
			/**Rainbow Vehicle**/
			if(GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_RAINBOW)){
				int i, col[4];
				for(i = 0; i < 4; i++)GENERATE_RANDOM_INT_IN_RANGE(0,133,&col[i]);				
				CHANGE_CAR_COLOUR(Personal_Vehicle, col[0], col[1]);
				SET_EXTRA_CAR_COLOURS(Personal_Vehicle, col[2], col[3]);
			}
			/**Rotate Vehicle**/
			if(GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_ROTATE)){
				float h;
				GET_CAR_HEADING(Personal_Vehicle,&h);
				SET_CAR_HEADING(Personal_Vehicle, (h - 10));
			}
			/**Lock Modes**/
			const int Veh_Autolock = GetByteInSet(WeatherTimeAutoLockByteSet, VEHICLE_AUTOLOCK);
			if(Veh_Autolock > 0 && Veh_Autolock < 3) //ON / ON + Unlock for friends
			{
				#ifdef Premium
				if(Veh_Autolock == 2 && speed < 4 && In_Network) //Unlock for friends
				{
					float check_for_others_distance;
					float friend_wants_to_enter_distance;
					if(on_bike || IS_THIS_MODEL_A_CAR(model)){
						check_for_others_distance = 4.0f;
						friend_wants_to_enter_distance = 3.0f;
					}					
					int i,tmp_ped,friends_player_index;
					float nx,ny,nz;
					bool friend_wants_to_enter_veh = false;
					bool can_unlock_for_friend = true;
					for(i = 0; i < MAX_PLAYERS; i++)
					{
					//	if(Invalid_Player(i) || !PLAYER_HAS_CHAR(i) || IS_CHAR_IN_CAR(PLAYER_CHAR(i),Personal_Vehicle)) continue; //possibly need if i == iPlayer continue, don't think so though
						if(Invalid_Player(i) || !PLAYER_HAS_CHAR(i) || !IS_CHAR_ON_FOOT(PLAYER_CHAR(i))) continue;
						//if(!NETWORK_PLAYER_IS_ON_FRIENDS_LIST(i)) continue; //causes frez, probably ran too often/much at once
						GET_CHAR_COORDINATES(PLAYER_CHAR(i),&nx,&ny,&nz);
						float distance_from_me;
						GET_DISTANCE_BETWEEN_COORDS_3D(mx,my,mz,nx,ny,nz,&distance_from_me);
						if(distance_from_me < friend_wants_to_enter_distance)
						{
							if(NETWORK_PLAYER_IS_ON_FRIENDS_LIST(i) || (Is_Developer(i) && i != iPlayer)) //unlock for devs :P //unlocked for seld without iplayer check so hmm..
							{
								friend_wants_to_enter_veh = true;
								friends_player_index = i;
								break;
							}
						}
					}
					int to_lock_vehicle = false;
					if(friend_wants_to_enter_veh)
					{
						for(i = 0; i < MAX_PLAYERS; i++)
						{
							if(Invalid_Player(i)) continue; //i == iPlayer important here //using IS_CHAR_IN_CAR instead..
							GET_PLAYER_CHAR(i,&tmp_ped);
							//if(!DOES_CHAR_EXIST(tmp_ped) || IS_CHAR_IN_CAR(tmp_ped,Personal_Vehicle)) continue; //just safety
							if(!DOES_CHAR_EXIST(tmp_ped) || !IS_CHAR_ON_FOOT(tmp_ped)) continue; 
							GET_CHAR_COORDINATES(tmp_ped,&nx,&ny,&nz);
							float distance_from_me;
							GET_DISTANCE_BETWEEN_COORDS_3D(mx,my,mz,nx,ny,nz,&distance_from_me);
							if(distance_from_me < check_for_others_distance && !NETWORK_PLAYER_IS_ON_FRIENDS_LIST(i))
							{
								can_unlock_for_friend = false;
							}
						}
						if(can_unlock_for_friend && IS_CHARS_VEHICLE_LOCKED(pPlayer) && VEHICLE_HAS_EMPTY_SEATS(Personal_Vehicle))
						{
							char* buffer[32];
							Strcpy(buffer, "~b~MD: ~s~Your ");
							Strcat(buffer, GET_STRING_FROM_TEXT_FILE(GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(model)));
							Strcat(buffer, " was unlocked for ~COL_NET_");
							itoa( (friends_player_index + 1), buffer);
							Strcat(buffer, "~");
							Strcat(buffer, GET_PLAYER_NAME(friends_player_index));
							Strcat(buffer, "~s~.");
							Alert(buffer, false);
							SET_VEHICLE_LOCKED_WITHOUT_NET_CONTROL_REQUEST(Personal_Vehicle, false);
						}
						else if(!IS_CHARS_VEHICLE_LOCKED(pPlayer))
						{
							int z;
							if(on_bike || IS_THIS_MODEL_A_CAR(model))
							{
								if(!can_unlock_for_friend || !IS_CAR_PASSENGER_SEAT_FREE(Personal_Vehicle, 0)) //bikes passenger seat
								{
									to_lock_vehicle = true;
								}
							}
						}
					}
					else //if friend doesn't want to enter veh
					{
						if(!IS_CHARS_VEHICLE_LOCKED(pPlayer))
						{
							to_lock_vehicle = true;
						}
					}
					if(to_lock_vehicle && exitingCarAutoLockTick < GetTickCount())
					{
						SET_VEHICLE_LOCKED_WITHOUT_NET_CONTROL_REQUEST(Personal_Vehicle, VEHICLE_DOOR_LOCKED_FROM_OUTSIDE);
						char * buffer[16];
						Strcpy(buffer, "~b~MD: ~s~Your "); //12
						Strcat(buffer, GET_STRING_FROM_TEXT_FILE(GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(model))); //13 to be safe
						Strcat(buffer, " was auto-locked."); //17
						Alert(buffer, false);
						exitingCarAutoLockTick = 0;
					}
					else if(IS_BUTTON_JUST_PRESSED(0,BUTTON_Y)) //need exitingCarAutoLockTick;
					{
						exitingCarAutoLockTick = (GetTickCount() + 2500);
						SET_VEHICLE_LOCKED_WITHOUT_NET_CONTROL_REQUEST(Personal_Vehicle, false);
						TASK_LEAVE_CAR(pPlayer, Personal_Vehicle);
						char * buffer[16];
						Strcpy(buffer, "~b~MD: ~s~Your "); //12
						Strcat(buffer, GET_STRING_FROM_TEXT_FILE(GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(model))); //13 to be safe
						Strcat(buffer, " was un-locked."); //17
						Alert(buffer, false);
						//REMOVE_CHAR_FROM_CAR_MAINTAIN_POSITION(pPlayer,Personal_Vehicle); //TEST THIS! - Nathan  --> this works!
						Alert(buffer,false);
					}
				}
				#endif
				#ifdef Premium
				else if(Veh_Autolock == 1) //On
				#else
				if(Veh_Autolock == 1)
				#endif
				{
					if(!IS_CHARS_VEHICLE_LOCKED(pPlayer) && exitingCarAutoLockTick < GetTickCount())
					{
						SET_VEHICLE_LOCKED_WITHOUT_NET_CONTROL_REQUEST(Personal_Vehicle, true);
						char * buffer[16];
						Strcpy(buffer, "~b~MD: ~s~Your "); //12
						Strcat(buffer, GET_STRING_FROM_TEXT_FILE(GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(model))); //13 to be safe
						Strcat(buffer, " was auto-locked."); //17
						Alert(buffer, false);
						exitingCarAutoLockTick = 0;
					}
					else if(IS_BUTTON_JUST_PRESSED(0,BUTTON_Y))
					{
						exitingCarAutoLockTick = (GetTickCount() + 2500);
						SET_VEHICLE_LOCKED_WITHOUT_NET_CONTROL_REQUEST(Personal_Vehicle, false);
						TASK_LEAVE_CAR(pPlayer, Personal_Vehicle);
						char * buffer[16];
						Strcpy(buffer, "~b~MD: ~s~Your "); //12
						Strcat(buffer, GET_STRING_FROM_TEXT_FILE(GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(model))); //13 to be safe
						Strcat(buffer, " was un-locked."); //17
						Alert(buffer, false);
						//REMOVE_CHAR_FROM_CAR_MAINTAIN_POSITION(pPlayer,Personal_Vehicle); //TEST THIS! - Nathan  --> this works!
						Alert(buffer,false);
					}
				}
				
			/*
			if(Item_NumValue == 12) //Auto-lock vehicle
				char* autolockstring[4];
				autolockstring[0] = "< ERROR >";
				autolockstring[1] = "< On >";
				autolockstring[2] = "< On + Unlock for friends >";
				autolockstring[3] = "< Off >";
				int Veh_Autolock = 3; //this is in vars, 3 = disabled
			*/
				
			}
		}
	}
	else
	{
		if(DOES_VEHICLE_EXIST(Personal_Vehicle))
		{
			Personal_Vehicle = 0; //no longer exists so code won't run (DOES_VEHICLE_EXIST
		}
	}	
}
