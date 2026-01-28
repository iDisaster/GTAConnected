/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV NATHAN VII
 */  
 
#pragma once 

//We also need a function to make bodyguards drive cars
//extern int FIND_MAX_NUMBER_OF_GROUP_MEMBERS(void);
//extern void GET_GROUP_SIZE(Group group, uint *pStartIndex, uint *pCount);
//extern void GET_NTH_GROUP_MEMBER(int group, int n, Ped *ped);
//extern void GET_NUMBER_OF_FOLLOWERS(Ped ped, int *followers);

void Clear_All_BGuards(void){
	if(!Guard_Check()) return;
	int i;
	for(i = 0; i < MAX_SPAWNGUARDS; i++){
		if(!DOES_CHAR_EXIST(BG_ped[i])) continue;
		Run_Ptfx(BG_ped[i]);
		FORCE_CHAR_TO_DROP_WEAPON(BG_ped[i]);
		delete_objects_on_ped(BG_ped[i]);
		DELETE_CHAR(&BG_ped[i]);
		MARK_CHAR_AS_NO_LONGER_NEEDED(&BG_ped[i]);
	}
	Alert("~b~MD: ~s~All bodyguards cleared.",false);
}

void Attach_Objects_BGuards(uint model,int pedbone, float obj_x, float obj_y, float obj_z, float obj_rx, float obj_ry, float obj_rz, int id){	
	if (IS_MODEL_IN_CDIMAGE(model)){
		if(!Guard_Check()) return;
		REQUEST_MODEL(model);
		while(!HAS_MODEL_LOADED(model)) WAIT(0);
			int i;
			for(i = 0; i < MAX_SPAWNGUARDS; i++){
				if(!DOES_CHAR_EXIST(BG_ped[i])) continue;
				CREATE_OBJECT(model,0.0,0.0,0.0,&Attach_object[id],true);
				Run_Ptfx(BG_ped[i]);
				MARK_MODEL_AS_NO_LONGER_NEEDED(model);
				FREEZE_OBJECT_POSITION(Attach_object[id], false);
				SET_OBJECT_VISIBLE(Attach_object[id], true);
				SET_OBJECT_LIGHTS(Attach_object[id], true);
				SET_OBJECT_INVINCIBLE(Attach_object[id], true);
				SET_OBJECT_COLLISION(Attach_object[id], false);
				SET_OBJECT_DYNAMIC(Attach_object[id],true);
				while (!DOES_OBJECT_EXIST(Attach_object[id]))WAIT(0);
				block_net_control_of_object(Attach_object[id]);
				ATTACH_OBJECT_TO_PED(Attach_object[id],BG_ped[i],pedbone, obj_x, obj_y, obj_z, obj_rx, obj_ry, obj_rz,false);		
			}
		Alert("~b~MD: ~s~Attached Selected Object to Guards",false);
	}
}
void Teleport_BGuards_Coord(float x, float y, float z){
	if(!Guard_Check()) return;
	int i;
	for(i = 0; i < MAX_SPAWNGUARDS; i++){
		if(!DOES_CHAR_EXIST(BG_ped[i])) continue;
		int BG_id;
		GET_NETWORK_ID_FROM_PED(BG_ped[i], &BG_id);
		if(network_control(BG_id)){
		Run_Ptfx(BG_ped[i]);
		if(IS_CHAR_IN_ANY_CAR(BG_ped[i]))
			WARP_CHAR_FROM_CAR_TO_COORD(BG_ped[i],x,y,z);
		else
			SET_CHAR_COORDINATES(BG_ped[i], x, y, z);
		}
	}
	Alert("~b~MD: ~s~Bodyguards teleported.",false);
}

void Spawn_BGuards(const int playersPed, const int model, const int weapon){
	if(DOES_CHAR_EXIST(playersPed)){
		fix_group_for_guards();
		if(Number_of_BGuards() > (MAX_SPAWNGUARDS - 1)){
			Alert("~b~MD: ~s~Maximum bodyguards have been spawned!",false);
			return;
		}
		REQUEST_MODEL(model);
		while(!HAS_MODEL_LOADED(model)) WAIT(0);
		int i,rand;
		float x,y,z;
		for(i = 0; i < MAX_SPAWNGUARDS; i++){
			if(DOES_CHAR_EXIST(BG_ped[i])) continue;
			GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(playersPed, 0, 2, 0, &x, &y, &z);
			GENERATE_RANDOM_INT_IN_RANGE(0,14,&rand);		
			// RELATIONSHIP_GROUP_MISSION_4, //26 //this must be whai	
			//CREATE_CHAR(26, model, x + rand,y + rand,z, &BG_ped[i], true);
			CREATE_CHAR(RELATIONSHIP_GROUP_MISSION_1, model, x + rand,y + rand,z, &BG_ped[i], true);
			MARK_MODEL_AS_NO_LONGER_NEEDED(model);
			Run_Ptfx(BG_ped[i]);
			if(In_Network){
				int NetID;
				GET_NETWORK_ID_FROM_PED(BG_ped[i],&NetID);
				SET_NETWORK_ID_CAN_MIGRATE(NetID,false);
			}		
			SET_CHAR_RANDOM_COMPONENT_VARIATION(BG_ped[i]);
			SET_GROUP_MEMBER(BG_Group, BG_ped[i]);
			SET_CHAR_NEVER_LEAVES_GROUP(BG_ped[i], true);
			SET_PLAYER_GROUP_TO_FOLLOW_ALWAYS(iPlayer,true);
			SET_GROUP_SEPARATION_RANGE(BG_Group,1000);
			//SET_CHAR_RELATIONSHIP_GROUP(BG_ped[i], RELATIONSHIP_GROUP_PLAYER); //yes leave them as generic singleplayer blah, good
			SET_CHAR_RELATIONSHIP(BG_ped[i], RELATIONSHIP_RESPECT, PLAYERS_RELATIONSHIP_GROUP(iPlayer)); //tell them to respect us (the user), Good!
			//SET_CHAR_RELATIONSHIP(BG_ped[i], RELATIONSHIP_RESPECT, RELATIONSHIP_GROUP_PLAYER);
			SET_CHAR_ACCURACY(BG_ped[i], 500);
			SET_SENSE_RANGE(BG_ped[i], 1000.0);
			SET_PED_GENERATES_DEAD_BODY_EVENTS(BG_ped[i], true);
			SET_CHAR_SHOOT_RATE(BG_ped[i], 200);
			SET_CHAR_WILL_USE_COVER(BG_ped[i], true);
			SET_CHAR_WILL_DO_DRIVEBYS(BG_ped[i], true);
			SET_CHAR_SIGNAL_AFTER_KILL(BG_ped[i], true);
			SET_CHAR_WILL_USE_CARS_IN_COMBAT(BG_ped[i], true);
			SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN(BG_ped[i], false);
			SET_CHAR_INVINCIBLE(BG_ped[i], true); ////////////////
			SET_CHAR_PROOFS(BG_ped[i], true, true, true, true, true);
			SET_CHAR_PROVIDE_COVERING_FIRE(BG_ped[i], true);
			SET_CHAR_CANT_BE_DRAGGED_OUT(BG_ped[i], true);
			SET_CHAR_STAY_IN_CAR_WHEN_JACKED(BG_ped[i], true);
			SET_PED_DONT_DO_EVASIVE_DIVES(BG_ped[i], false);
			SET_PED_PATH_MAY_DROP_FROM_HEIGHT(BG_ped[i], true);
			SET_PED_PATH_MAY_USE_CLIMBOVERS(BG_ped[i], true);
			SET_PED_PATH_MAY_USE_LADDERS(BG_ped[i], true);
			SET_ROCKET_LAUNCHER_FREEBIE_IN_HELI(true);
			GIVE_PED_HELMET(BG_ped[i]);
			SET_CHAR_KEEP_TASK(BG_ped[i], true);
			UpdateWeaponOfPed(BG_ped[i], weapon);
			SET_CURRENT_CHAR_WEAPON(BG_ped[i], weapon, true);
			//GIVE_PED_FAKE_NETWORK_NAME(Ped ped, char *name, int r, int g, int b, int a);
				/*
			MAX_SPAWNGUARDS 7
			*/
			/*
			WAIT(500);
			char* guard_net_names[7];
			//guard_net_names[0] = "~b~MD ~s~Bodyguard ~COL_NET_4~1"; //string too long
			guard_net_names[0] = "MD Bodyguard 1";
			guard_net_names[1] = "MD Bodyguard 2";
			guard_net_names[2] = "MD Bodyguard 3";
			guard_net_names[3] = "MD Bodyguard 4";
			guard_net_names[4] = "MD Bodyguard 5";
			guard_net_names[5] = "MD Bodyguard 6";
			guard_net_names[6] = "MD Bodyguard 7";
			int i, rand[3];
			for(i = 0; i < 3; i++)
			{
				GENERATE_RANDOM_INT_IN_RANGE(0, 255, &rand[i]);
			}
			
			GIVE_PED_FAKE_NETWORK_NAME(BG_ped[i], guard_net_names[i], rand[0], rand[1], rand[2], 200);
			*/
			return; // BG_ped[i]; 
		}
	}
	else return	Alert(Error_No_Player,false);	
}



void Ragdoll_BGuards(void){
	if(!Guard_Check()) return;
	int i;
	for(i = 0; i < MAX_SPAWNGUARDS; i++){
		if(!DOES_CHAR_EXIST(BG_ped[i])) continue;
		Run_Ptfx(BG_ped[i]);
		SWITCH_PED_TO_RAGDOLL(BG_ped[i],20000,30000,false,false,false,false);
	}
	Alert("~b~MD: ~s~Ragdoll'd bodyguards.",false);
}

void Delete_Objects_BGuards(void){ 
	if(!Guard_Check()) return;
	int i;
	for(i = 0; i < MAX_SPAWNGUARDS; i++){
		if(!DOES_CHAR_EXIST(BG_ped[i])) continue;
		delete_objects_on_ped(BG_ped[i]); //sorted buddy :D
	}
	//Universal_Delete( 20,2, false );
	Alert("~b~MD: ~s~Objects attached to guards cleared.",false);
}

/**use looped**/
void Attach_BG_To_Vehcile(const int vehicle,float wide1,float wide2,float position_y, float height, float angle){
	int i;
	int BG_id;
	float net_x,net_y,net_z;
	Ped NetPlayer_Char;
	if(!Guard_Check()) return;
	for(i = 0; i < MAX_SPAWNGUARDS; i++){
		if(!DOES_CHAR_EXIST(BG_ped[i])) continue;
		if (DOES_VEHICLE_EXIST(vehicle)){
			ATTACH_PED_TO_CAR(BG_ped[i], vehicle, 0, wide1, position_y, height, 0.00, angle, 0.00, 1);
		}
		
	}		
}


void Fire_BG_Weapon(const int player_index){
	int i;
	int BG_id;
	float net_x,net_y,net_z;
	Ped NetPlayer_Char;
	if(!Guard_Check()) return;
	for(i = 0; i < MAX_SPAWNGUARDS; i++){
		if(!DOES_CHAR_EXIST(BG_ped[i])) continue;
		GET_PLAYER_CHAR(player_index,&NetPlayer_Char);
		if(!DOES_CHAR_EXIST(NetPlayer_Char)) continue;
		GetOffset(NetPlayer_Char, 5, &net_x, &net_y, &net_y);
		FIRE_PED_WEAPON(BG_ped[i], net_x, net_y, net_z);
	}	
	Alert("~b~MD: ~s~Firing Guards Weapon",false);	
}
void weapon_vehicle2(int weapon){
	float x ,y ,z ,Offset_x , Offset_y , Offset_z ;	
	Vehicle Weapon_Vehicle;
	if(IS_CHAR_IN_ANY_CAR(pPlayer)){
		if(IS_CHAR_IN_ANY_CAR(pPlayer)){			 
			int Veh_Guard;
			for(Veh_Guard = 0;Veh_Guard < MAX_SPAWNGUARDS;Veh_Guard++){
			Spawn_BGuards(pPlayer, MODEL_M_Y_CLUBFIT,weapon);
			}
			Attach_BG_To_Vehcile(Personal_Vehicle,0,0,0, 0, 0);		
		}		
	}
}


void Strides_BGuards(const char* set){
	int i;
	int BG_id;
	if(!Guard_Check()) return;
	REQUEST_ANIMS(set);
	while(!HAVE_ANIMS_LOADED(set)) WAIT(0);	
	for(i = 0; i < MAX_SPAWNGUARDS; i++){
		if(!DOES_CHAR_EXIST(BG_ped[i])) continue;		
		Run_Ptfx(BG_ped[i]);
		GET_NETWORK_ID_FROM_PED(BG_ped[i], &BG_id);
		if(network_control(BG_id)){
		SET_ANIM_GROUP_FOR_CHAR(BG_ped[i],set);
		}
	}
	Alert("~b~MD: ~s~Bodyguard strides set.",false);
	REMOVE_ANIMS(set);
}

void BGuards_Clear_Enemies(void)
{
	int i,z;
	for(i = 0; i < MAX_PLAYERS; i++)
	{
		if(i == iPlayer) continue;
		for(z = 0; z < MAX_SPAWNGUARDS; z++)
		{
			if(!DOES_CHAR_EXIST(BG_ped[z])) continue;
			CLEAR_ALL_CHAR_RELATIONSHIPS(BG_ped[z], PLAYERS_RELATIONSHIP_GROUP(i));
			Alert("~b~MD: ~s~Bodyguards enemies cleared.",false);
		}
	}
}

/**This works*/
void BGuard_Send_After_PlayerPED(const int player_index, const int player_ped){	
	if(DOES_CHAR_EXIST(player_ped) || PLAYER_HAS_CHAR(player_index)){
		if(!Guard_Check()) return; //just for safety
		int i;
		for(i = 0;i < MAX_SPAWNGUARDS; i++){
			if(!DOES_CHAR_EXIST(BG_ped[i]) || !DOES_CHAR_EXIST(player_ped))continue;				
			int BG_id;
			GET_NETWORK_ID_FROM_PED(BG_ped[i], &BG_id);
			if(network_control(BG_id)){
				//SET_NETWORK_ID_CAN_MIGRATE(BG_id,true);				
				SET_CHAR_NEVER_LEAVES_GROUP(BG_ped[i], true);
				//SET_PLAYER_GROUP_TO_FOLLOW_ALWAYS(player_index,true); //we need to always follow our group, not other peoples :S
				//SET_CHAR_RELATIONSHIP(BG_ped[i], RELATIONSHIP_HATE, RELATIONSHIP_GROUP_PLAYER);
				SET_CHAR_RELATIONSHIP(BG_ped[i], RELATIONSHIP_HATE, PLAYERS_RELATIONSHIP_GROUP(player_index));
				SET_POLICE_IGNORE_PLAYER(player_index, false);
				SET_GROUP_CHAR_DUCKS_WHEN_AIMED_AT(BG_ped[i], true);
				SET_CHAR_SHOOT_RATE(BG_ped[i], 1000);
				SET_CHAR_ACCURACY(BG_ped[i], 1000);
				SET_CHAR_FIRE_DAMAGE_MULTIPLIER(BG_ped[i], 1000);
				SET_CHAR_WILL_USE_CARS_IN_COMBAT(BG_ped[i], true);
				SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT(BG_ped[i], false);
				SET_CHAR_WILL_DO_DRIVEBYS(BG_ped[i], true);
				SET_CHAR_WILL_USE_COVER(BG_ped[i], true);
				SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR(BG_ped[i],true);
				SET_CHAR_BLEEDING(BG_ped[i], true);
				//UpdateWeaponOfPed(BG_ped[i], weapon);
				//SET_CURRENT_CHAR_WEAPON(BG_ped[i], weapon, true);
				TASK_COMBAT(BG_ped[i], player_ped); //probably not needed anymore //TESTING WITH RELATIONSHIP GROUPS ALONE //doesn't seem to work anymore on its own
				SET_CHAR_KEEP_TASK(BG_ped[i], true);
				//SET_NETWORK_ID_CAN_MIGRATE(BG_id,true);
			}		
		}
		char * buffer[16];
		Strcpy(buffer, "~b~MD: ~s~Bodyguards sent after "); //41
		PLAYER_NAME_WITH_COLOUR(player_index,&buffer);
		Strcat(buffer, "."); //63 characters
		Alert(buffer, false);
	}
	else return	Alert(Error_No_Player,false);			
}

void Set_BGuards_Invincible(const bool invincible) //Nathan new
{
	if(!Guard_Check()) return;
	int i;
	for(i = 0; i < MAX_SPAWNGUARDS; i++)
	{
		if(!DOES_CHAR_EXIST(BG_ped[i])) continue;
		Run_Ptfx(BG_ped[i]);
		SET_CHAR_INVINCIBLE(BG_ped[i], invincible);
		SET_CHAR_PROOFS(BG_ped[i], invincible, invincible, invincible, invincible, invincible);
	}
	Alert( invincible ? "~b~MD: ~s~Bodyguards are now invincible." : "~b~MD: ~s~Bodyguards are no longer invincible.", false);
}

void Kill_BGuards(void) //Temporary fix
{
	Set_BGuards_Invincible(false);
}

void Invincibility_BGuards(void) //Temporary fix
{
	Set_BGuards_Invincible(true);
}

void Helmets_BGuards(void){
	if(!Guard_Check()) return;
	int i;
	for(i = 0; i < MAX_SPAWNGUARDS; i++)
	{
		if(!DOES_CHAR_EXIST(BG_ped[i])) continue;
		Run_Ptfx(BG_ped[i]);
		GIVE_PED_HELMET(BG_ped[i]);
	}
	Alert("~b~MD: ~s~Helmets given to bodyguards.",false);
}

void Remove_Helmets_BGuards(void){
	if(!Guard_Check()) return;
	int i;
	for(i = 0; i < MAX_SPAWNGUARDS; i++)
	{
		if(!DOES_CHAR_EXIST(BG_ped[i])) continue;
		Run_Ptfx(BG_ped[i]);
		REMOVE_PED_HELMET(BG_ped[i], true);
	}
	Alert("~b~MD: ~s~Helmets removed from bodyguards.",false);
}

void Clear_Task_BGuards(void) //Nathan new
{
	if(!Guard_Check()) return;
	int i;
	for(i = 0; i < MAX_SPAWNGUARDS; i++)
	{
		if(!DOES_CHAR_EXIST(BG_ped[i])) continue;
		Run_Ptfx(BG_ped[i]);
		CLEAR_CHAR_TASKS_IMMEDIATELY(BG_ped[i]);
	}
	Alert("~b~MD: ~s~Bodyguard tasks cleared.",false);
}

void Clear_One_BGuards(void) //Nathan new
{
	if(!Guard_Check()) return;
	int i;
	for(i = 0; i < MAX_SPAWNGUARDS; i++)
	{
		if(!DOES_CHAR_EXIST(BG_ped[i])) continue;
		Run_Ptfx(BG_ped[i]);
		FORCE_CHAR_TO_DROP_WEAPON(BG_ped[i]);
		delete_objects_on_ped(BG_ped[i]);
		DELETE_CHAR(&BG_ped[i]);
		MARK_CHAR_AS_NO_LONGER_NEEDED(&BG_ped[i]);
		break;
	}
	Alert("~b~MD: ~s~One bodyguard was deleted.",false);
}

void Weapon_BGuards(const int weapon) //Nathan new
{
	if(!Guard_Check()) return;
	int i;
	for(i = 0; i < MAX_SPAWNGUARDS; i++)
	{
		if(!DOES_CHAR_EXIST(BG_ped[i])) continue;
		Run_Ptfx(BG_ped[i]);  
		REMOVE_ALL_CHAR_WEAPONS(BG_ped[i]);
		WAIT(3);
		UpdateWeaponOfPed(BG_ped[i], weapon);
		SET_CURRENT_CHAR_WEAPON(BG_ped[i],weapon, true);
		BGWeapontype_Lastselected = weapon;
	}
	Alert("~b~MD: ~s~Selected weapon given to bodyguards.",false);
}

void Remove_Weapon_BGuards(void) 
{
	if(!Guard_Check()) return;
	int i;
	for(i = 0; i < MAX_SPAWNGUARDS; i++)
	{
		if(!DOES_CHAR_EXIST(BG_ped[i])) continue;
		Run_Ptfx(BG_ped[i]);  
		REMOVE_ALL_CHAR_WEAPONS(BG_ped[i]);
		
	}
	Alert("~b~MD: ~s~Selected weapon removed from bodyguards.",false);
}

void Teleport_BGuards(void) //temporary fix
{
	float x,y,z;
	GET_CHAR_COORDINATES(pPlayer,&x,&y,&z);
	Teleport_BGuards_Coord(x,y,z);
}

void Teleport_InPlayerVeh_BGuards(const int Player_ID, const int num_guards){ //Nathan new!	
	if(PLAYER_HAS_CHAR(Player_ID)){
		if(!Guard_Check()) return;
		Ped Player_PED;
		GET_PLAYER_CHAR(Player_ID,&Player_PED);
		char * buffer[32];
		Strcpy(buffer, "~b~MD: ");
		if(!DOES_CHAR_EXIST(Player_PED))
		{
			PLAYER_NAME_WITH_COLOUR(Player_ID, &buffer);
			Strcat(buffer, "~s~ does not have a character.");
			Alert(buffer,false);
			return;
		}
		const bool in_car = IS_CHAR_IN_ANY_CAR(Player_PED);
		if(in_car)
		{
			int Player_PED_veh;
			GET_CAR_CHAR_IS_USING(Player_PED,&Player_PED_veh);
			int i,teleported_guards = 0;
			for(i = 0; i < MAX_SPAWNGUARDS; i++)
			{
				if(!DOES_CHAR_EXIST(BG_ped[i])) continue;
				int z;
				for(z = 0; z < 3; z++)
				{
					if(!IS_CAR_PASSENGER_SEAT_FREE(Player_PED_veh,z) || teleported_guards >= num_guards) continue;
					//Run_Ptfx(BG_ped[i]);
					WARP_CHAR_INTO_CAR_AS_PASSENGER(BG_ped[i],Player_PED_veh,z);
					teleported_guards++;
					break;
				}
			}
			Strcat(buffer, "~s~");
			itoa(teleported_guards,buffer);
			Strcat(buffer, " bodyguards are now in ");
			PLAYER_NAME_WITH_COLOUR(Player_ID, &buffer);
			Strcat(buffer, "'s ~s~");
			Strcat(buffer,VEHICLES_MODEL_NAME(Player_PED_veh));
			Strcat(buffer, ".");
		}
		else
		{
			PLAYER_NAME_WITH_COLOUR(Player_ID, &buffer);
			Strcat(buffer, " ~s~is not in a vehicle.");
		}
		Alert(buffer,false);
	}
	else return	Alert(Error_No_Player,false);	
}


//!Not used yet in the code
void Teleport_InVeh_BGuards(const int Player_ID){ //Nathan new //should change to playerid
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
	if(!Guard_Check()) return;
	int i,tmp;
	for(i = 0; i < MAX_SPAWNGUARDS; i++){
		if(!DOES_CHAR_EXIST(BG_ped[i])) continue;
		int z;
		for(z = 0; z < 3; z++){
			if(!IS_CAR_PASSENGER_SEAT_FREE(tmp,z)) continue;
			WARP_CHAR_INTO_CAR_AS_PASSENGER(BG_ped[i],vehicle,z);
			break;
		}
	}
	Alert("~b~MD: ~s~Bodyguards were teleported into a vehicle.",false);	
}


void BGuards_Arm_Vehicle(const int Player_ID){
	//!**Player Char Check**//
	Ped Player_PED;
	Vehicle vehicle;
	if(!PLAYER_HAS_CHAR(Player_ID))return Alert_Abort(Error_Char_Missing,false);
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);	
	/**Vehicle Checker**/
	if(Player_ID == iPlayer){
		if(!IS_CHAR_IN_ANY_CAR(Player_PED))MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_SULTAN);
		WAIT(100);
	}	
	if(!IS_CHAR_IN_ANY_CAR(Player_PED)){
		if(Player_PED == pPlayer)Alert_Abort(Error_Personal_Vehicle,false);
		else Alert_Abort(Error_NetPlayer_Vehicle,false);		
	}
	else GET_CAR_CHAR_IS_USING(Player_PED,&vehicle);
	int Free_Seat;
	for(Free_Seat = 0; Free_Seat < 3; Free_Seat++){
		if(!IS_CAR_PASSENGER_SEAT_FREE(vehicle, Free_Seat)) continue;
		if(!DOES_CHAR_EXIST(BG_ped[Free_Seat]))Spawn_BGuards(Player_PED,MODEL_M_M_ARMOURED,WEAPON_MP5);
		if(IS_CHAR_IN_CAR(BG_ped[Free_Seat],vehicle)) continue;
		WAIT(100);
		WARP_CHAR_INTO_CAR_AS_PASSENGER(BG_ped[Free_Seat],vehicle,Free_Seat);
		WAIT(100);
		SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT(BG_ped[Free_Seat], false);
		SET_CHAR_WILL_USE_CARS_IN_COMBAT(BG_ped[Free_Seat], true);	
	}	
}