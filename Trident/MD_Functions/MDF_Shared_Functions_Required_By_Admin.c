/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT Based on ESSENTIALS
 * @ MADE BY - DEVILSDESIGN && IIV NATHAN VII
 * @ Updated : 20-03-2017
 */

 //CreateByteSet(hour, minute, 1, 1, &freezeTime);
//	if(freezeTime) SET_TIME_OF_DAY(GetByteInSet(freezeTime, 0), GetByteInSet(freezeTime, 1));
//SpectateByteSet
void CreateByteSet(uint b0, uint b1, uint b2, uint b3, uint *ByteSet)
{
	*ByteSet = ((b3 % 256) * 16777216) + ((b2 % 256) * 65536) + ((b1 % 256) * 256) + (b0 % 256);
}

uint GetByteInSet(uint ByteSet, uint byteIndex)
{
	int i;
	for(i = 0; i < (byteIndex * 2); i++)
	{
		ByteSet = SHIFT_RIGHT(ByteSet, 4);	//SHIFT_RIGHT, shifts by 4 bits
	}
	ByteSet = ByteSet % 256;
	return ByteSet;
}

void GetByteSet(uint ByteSet, uint *b0, uint *b1, uint *b2, uint *b3)
{
	*b0 = GetByteInSet(ByteSet, 0);
	*b1 = GetByteInSet(ByteSet, 1);
	*b2 = GetByteInSet(ByteSet, 2);
	*b3 = GetByteInSet(ByteSet, 3);
}


void SetByteSet(uint *ByteSet, uint byteIndex, uint byteValue)
{
	uint b[4];
	GetByteSet(*ByteSet, &b[0], &b[1], &b[2], &b[3]);
	b[byteIndex] = byteValue;
	CreateByteSet(b[0], b[1], b[2], b[3], &*ByteSet);
}



//use -1 for respawn mode, and hmm, -2 for clone maybe? I'll get to it!
void nathan_spawn_vehicle(const int model, float x, float y, float z, float h){

    int col5, col6, col7, col8,lock,car;
	float speed;
	Ped driver;
	bool respawning = (model == -1);
	bool upgrade[10];
	bool siren;
	int i;
	if(respawning)
	{
		//respawn
		GET_CAR_CHAR_IS_USING(pPlayer,&car);
		GET_CAR_MODEL(car, &model);
		GET_DRIVER_OF_CAR(car,&driver);
		siren = IS_CAR_SIREN_ON(car);
		GET_CAR_COLOURS(car, &col5, &col6);
		GET_EXTRA_CAR_COLOURS(car, &col7, &col8);
		GET_CAR_DOOR_LOCK_STATUS(car,&lock);
		GET_CAR_SPEED(car,&speed);
		GET_CAR_HEADING(car, &h);
		for(i = 0;i<10;i++)
		{
			upgrade[i] = IS_VEHICLE_EXTRA_TURNED_ON(car,i);
		}
	}
	if(!IS_MODEL_IN_CDIMAGE(model)) return;
		//GET_CAR_MODEL(car, &model);
	REQUEST_MODEL(model); ////Yes this SHOULD be here! In order to stop/reduce the script wasting time!
	while(!HAS_MODEL_LOADED(model)) WAIT(0); 
      CREATE_CAR(model, x, y, z, &car, true);
	if(model == MODEL_ANNIHILATOR)
	{
		SET_CAR_CAN_BE_DAMAGED(car,false);
		SET_CAR_CAN_BE_VISIBLY_DAMAGED(car, false);
		FIX_CAR(car);
	}
	WARP_CHAR_INTO_CAR(pPlayer,car);
	
	if(IS_THIS_MODEL_A_HELI(model))
		SET_HELI_BLADES_FULL_SPEED(car);
	
	MARK_MODEL_AS_NO_LONGER_NEEDED(model);
	SET_CAR_HEADING(car,h);
	SET_CAR_ENGINE_ON(car,true,true);
	if(respawning)
	{
		for(i = 0; i < 10; i++)
		{
			TURN_OFF_VEHICLE_EXTRA(car,i,!upgrade[i]);
		}	
		SET_CAR_FORWARD_SPEED(car, speed);
		CHANGE_CAR_COLOUR(car, col5, col6);
		SET_EXTRA_CAR_COLOURS(car, col7, col8);
		SWITCH_CAR_SIREN(car,siren);
		LOCK_CAR_DOORS(car,lock);
	}
}

bool IS_DRIVE_WALK_WATER_ENABLED_FOR_PLAYER(const int playerindex)
{
	return DOES_OBJECT_EXIST(drive_water[playerindex]);
}

void TOGGLE_DRIVE_WALK_WATER_FOR_PLAYER(const int playerindex)
{
	char * buffer[32];
	Strcpy(buffer, "~b~MD: "); //7 chars
	PLAYER_NAME_WITH_COLOUR(playerindex, &buffer); //33
	Strcat(buffer, " ~s~"); //37
	if(PLAYER_HAS_CHAR(playerindex))
	{
		//GET_PLAYER_CHAR(playerindex,&players[playerindex].ped);
		if(DOES_OBJECT_EXIST(drive_water[playerindex]))
		{
			Strcat(buffer, "can no longer drive or walk on water."); //72 chars
			DELETE_OBJECT(&drive_water[playerindex]);
		}
		else
		{
			REQUEST_MODEL(0x4F9981BE); 
			Strcat(buffer, "can now drive and walk on water."); //32 + 33 = 55
			float x,y,z;
			int NetID;
			GET_CHAR_COORDINATES(PLAYER_CHAR(playerindex),&x,&y,&z); //loop will "catch" the object, make less waiting happen :P
			while(!HAS_MODEL_LOADED(0x4F9981BE)) WAIT(0); 
			CREATE_OBJECT(0x4F9981BE, x, y, z, &drive_water[playerindex], true); 
			MARK_MODEL_AS_NO_LONGER_NEEDED(0x4F9981BE);
			SET_OBJECT_VISIBLE(drive_water[playerindex],false);
			SET_OBJECT_INVINCIBLE(drive_water[playerindex],true);
			GET_NETWORK_ID_FROM_OBJECT(drive_water[playerindex], &NetID);
			SET_NETWORK_ID_CAN_MIGRATE(NetID, false);
			SET_OBJECT_COORDINATES(drive_water[playerindex],x,y,-9.2);
		}
	}
	else
	{
		Strcat(buffer, "does not have a character.");;
	}
	Alert(buffer,false);
}



bool IS_CHARS_VEHICLE_LOCKED(const int ped) //Nathan new func
{
	if(!DOES_CHAR_EXIST(ped) || !IS_CHAR_IN_ANY_CAR(ped)) return false;
	int lock,veh;
	GET_CAR_CHAR_IS_USING(ped,&veh);
	GET_CAR_DOOR_LOCK_STATUS(veh,&lock);
	return (lock == VEHICLE_DOOR_LOCKED_BOTH_SIDES || lock == VEHICLE_DOOR_LOCKED_FROM_OUTSIDE);
}

void SET_VEHICLE_LOCKED_WITHOUT_NET_CONTROL_REQUEST(const int veh, const int lock)
{
	if(!DOES_VEHICLE_EXIST(veh)) return;
	if(lock == 0 || lock == 1)
	{
		LOCK_CAR_DOORS(veh, (lock ? VEHICLE_DOOR_LOCKED_BOTH_SIDES : VEHICLE_DOOR_UNLOCKED));
	}
	else if(lock == VEHICLE_DOOR_LOCKED_FROM_OUTSIDE)
	{
		LOCK_CAR_DOORS(veh,VEHICLE_DOOR_LOCKED_FROM_OUTSIDE);
	}
}


void change_player(const int playerModel)
{
	if(!IS_MODEL_IN_CDIMAGE(playerModel))
	{
		Alert("~b~MD: ~s~Model missing, unable to change.",false);
		return;
	}
	REQUEST_MODEL(playerModel);
	float heading;
	Weapon savedWeapons[WEAPON_SLOT_THROWN+1];
	uint savedAmmo[WEAPON_SLOT_THROWN+1];
	uint key, health, armor, currentWeaponAmmo, seatIndex = 0;
	Weapon currentWeapon;
	Vehicle playerVehicle = 0;
	int i;
	
	GET_CHAR_ARMOUR(pPlayer, &armor);
	GET_CHAR_HEALTH(pPlayer, &health);
	//health -= armor;
	//Weapons
	uint ammo1;
	//NEW v
	for(i = WEAPON_SLOT_UNARMED; i <= WEAPON_SLOT_THROWN; i++)
	{
		GET_CHAR_WEAPON_IN_SLOT(pPlayer, i, &savedWeapons[i], &savedAmmo[i], &ammo1);
	}
	GET_CURRENT_CHAR_WEAPON(pPlayer, &currentWeapon);
	GET_AMMO_IN_CLIP(pPlayer, currentWeapon, &currentWeaponAmmo);
	//Vehicle
	if(IS_CHAR_IN_ANY_CAR(pPlayer))
	{
		Ped pedInSeat = 0;
		int i;
		GET_CAR_CHAR_IS_USING(pPlayer, &playerVehicle);
		GET_DRIVER_OF_CAR(playerVehicle, &pedInSeat);
		if(pedInSeat == pPlayer)
		{
			seatIndex = -1;
		}
		else
		{
			for(i = 0; i < 3; i++)
			{
				GET_CHAR_IN_CAR_PASSENGER_SEAT(playerVehicle, i, &pedInSeat);
				if(pPlayer == pedInSeat)
				{
					seatIndex = i;
					break;
				}
			}
		}
	}
	GET_CHAR_HEADING(pPlayer, &heading);
	GET_KEY_FOR_CHAR_IN_ROOM(pPlayer, &key);
	while(!HAS_MODEL_LOADED(playerModel))	WAIT(0);
	CHANGE_PLAYER_MODEL(iPlayer, playerModel);
	MARK_MODEL_AS_NO_LONGER_NEEDED(playerModel);
	pPlayer = GetPlayerPed(); //Get/set the new player ped ID
	ADD_ARMOUR_TO_CHAR(pPlayer, armor);
	SET_CHAR_HEALTH(pPlayer, health);
	//Weapons
	for(i = WEAPON_SLOT_UNARMED; i <= WEAPON_SLOT_THROWN; i++)
	{
		if(savedWeapons[i] != currentWeapon)
		{
			GIVE_WEAPON_TO_CHAR(pPlayer, savedWeapons[i], savedAmmo[i], false);
		}
	}
	if(currentWeapon)
	{
		uint ammo;
		GET_AMMO_IN_CHAR_WEAPON(pPlayer, currentWeapon, &ammo);
		REMOVE_WEAPON_FROM_CHAR(pPlayer, currentWeapon);
		GIVE_WEAPON_TO_CHAR(pPlayer, currentWeapon, ammo, false);
		SET_CURRENT_CHAR_WEAPON(pPlayer, currentWeapon, true);
		SET_AMMO_IN_CLIP(pPlayer, currentWeapon, currentWeaponAmmo);
		SET_CHAR_AMMO(pPlayer, currentWeapon, ammo);
	}
	
	//Vehicle
	if(DOES_VEHICLE_EXIST(playerVehicle))
	{
		if(seatIndex == -1)
			WARP_CHAR_INTO_CAR(pPlayer, playerVehicle);
		else
			WARP_CHAR_INTO_CAR_AS_PASSENGER(pPlayer, playerVehicle, seatIndex);
	}
	SET_CHAR_HEADING(pPlayer, heading);
	if(IS_INTERIOR_SCENE())	SET_ROOM_FOR_CHAR_BY_KEY(pPlayer, key);
	SET_CHAR_RANDOM_COMPONENT_VARIATION(pPlayer);
	FORCE_FULL_VOICE(pPlayer);
	if(GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_HELMET)) GIVE_PED_HELMET(pPlayer);
	BLOCK_PED_WEAPON_SWITCHING(pPlayer, true);
	if(playerModel == GET_PLAYERSETTINGS_MODEL_CHOICE())
	{
		SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE(iPlayer);
	}
	else
	{
		SET_CHAR_RANDOM_COMPONENT_VARIATION(pPlayer);
	}
}
/*
void LOAD_ANIMS(const char* set)
{
	REQUEST_ANIMS(set);
	while(!HAVE_ANIMS_LOADED(set)) WAIT(0);
}

void UNLOAD_ANIMS(const char* set)
{
	REMOVE_ANIMS(set);
}
*/
void pPlayer_strides(const char* set){
	REQUEST_ANIMS(set);
	while(!HAVE_ANIMS_LOADED(set)) WAIT(0);
	SET_ANIM_GROUP_FOR_CHAR(pPlayer,set);
	REMOVE_ANIMS(set);
}


void play_anims(const char* set, const char* anim, const int time1,const int time2){
	REQUEST_ANIMS(set);
	while(!HAVE_ANIMS_LOADED(set)) WAIT(0);
	TASK_PLAY_ANIM_WITH_FLAGS(pPlayer,anim,set,8.0,time1,time2); //yes anim then set.
	REMOVE_ANIMS(set); //unload
}

int Number_of_BGuards(void){
	int i;
	int number_of_guards = 0;
	for(i = 0; i < MAX_SPAWNGUARDS; i++){
		if(!DOES_CHAR_EXIST(BG_ped[i])) continue;
		number_of_guards++;
	}
	return number_of_guards;
}

void fix_group_for_guards(void){
	GET_PLAYER_GROUP(iPlayer,&BG_Group);
	if(!DOES_GROUP_EXIST(BG_Group)){
		CREATE_GROUP(0, &BG_Group, true);
		SET_GROUP_LEADER(BG_Group, pPlayer);
		SET_GROUP_FORMATION(BG_Group, group_formation);
		SET_GROUP_FORMATION_SPACING(BG_Group, group_spacing);
		int i;
		for(i = 0; i < MAX_SPAWNGUARDS; i++){
			if(DOES_CHAR_EXIST(BG_ped[i])) continue;
			SET_GROUP_MEMBER(BG_Group, BG_ped[i]);
		}
	}
}

bool Guard_Check(void){
	fix_group_for_guards();
	bool guards_exist = (Number_of_BGuards() > 0);
	if(!guards_exist){
		Alert("~b~MD: ~s~No bodyguards exist!",false);
	}
	return guards_exist;
}

void AnimationPlayer(bool pPlayer_Animation,const char* set, const char* anim, const int time1,const int time2){
	float animspeed;
	if(pPlayer_Animation){	
	REQUEST_ANIMS(set);
	while(!HAVE_ANIMS_LOADED(set)) WAIT(0);
	GET_CHAR_MOVE_ANIM_SPEED_MULTIPLIER(pPlayer, &animspeed);
	SET_CHAR_ANIM_SPEED(pPlayer, set,anim, animspeed*animationspeed);
	TASK_PLAY_ANIM_WITH_FLAGS(pPlayer,anim,set,8.0,time1,time2); //yes anim then set.		
	}
	else{
	if(!Guard_Check()) return;
	REQUEST_ANIMS(set);
	int i;
	while(!HAVE_ANIMS_LOADED(set)) WAIT(0);
	for(i = 0; i < MAX_SPAWNGUARDS; i++){
		if(!DOES_CHAR_EXIST(BG_ped[i])) continue;
		GET_CHAR_MOVE_ANIM_SPEED_MULTIPLIER(BG_ped[i], &animspeed);	
		SET_CHAR_ANIM_SPEED(BG_ped[i], set,anim, animspeed*animationspeed);
		TASK_PLAY_ANIM_WITH_FLAGS(BG_ped[i],anim,set,8.0,time1,time2);		
	}
	Alert("~b~MD: ~s~Bodyguards are now playing an animation.",false);		
	}
	REMOVE_ANIMS(set);
}

void delete_objects_on_ped(const int nigger) //Vehicle = int
{ //Do not include this in universal delete as this will be handy usable seperately
	if(!DOES_CHAR_EXIST(nigger)) return;
	register int i;
	int z,object;
	for(z = 0; z < 2; z++)
	{ //i guess if we can grab control we'll get it almost immediately soo..
		for(i = 0; i < 6900; i++)
		{
			if(!DOES_OBJECT_EXIST_WITH_NETWORK_ID(i)) continue;
			GET_OBJECT_FROM_NETWORK_ID(i,&object);
			if(!IS_OBJECT_ATTACHED(object) || GET_PED_OBJECT_IS_ATTACHED_TO(object) != nigger) continue;
			REQUEST_CONTROL_OF_NETWORK_ID(i);
			if(!HAS_CONTROL_OF_NETWORK_ID(i)) continue;
			DELETE_OBJECT(&object);
		}
	}
}

bool MARK_OBJECT_FOR_NATHANS_PROTECTION(const int object)
{
	if(!DOES_SCRIPT_EXIST("network_protection") || GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT("network_protection") < 1)
	{
		return false;
	}
	int NetID;
	GET_NETWORK_ID_FROM_OBJECT(object,&NetID);
	if(HAS_CONTROL_OF_NETWORK_ID(NetID))
	{
		SET_NETWORK_ID_CAN_MIGRATE(NetID, false);
		SET_OBJECT_HEALTH(object, 165.0f);
		return true;
	}
	return false;
}

void attach_object_to_player(const int player, const int model,int pedbone, float obj_x, float obj_y, float obj_z, float obj_rx, float obj_ry, float obj_rz, const int id){	
	if (IS_MODEL_IN_CDIMAGE(model))
	{
		REQUEST_MODEL(model);
		while(!HAS_MODEL_LOADED(model)) WAIT(0);
		CREATE_OBJECT(model,0.0,0.0,0.0,&Attach_object[id],true);
		MARK_MODEL_AS_NO_LONGER_NEEDED(model);
		FREEZE_OBJECT_POSITION(Attach_object[id], false);
		SET_OBJECT_VISIBLE(Attach_object[id], true);
		SET_OBJECT_LIGHTS(Attach_object[id], true);
		SET_OBJECT_INVINCIBLE(Attach_object[id], true);
		SET_OBJECT_COLLISION(Attach_object[id], false);
		SET_OBJECT_DYNAMIC(Attach_object[id],true);
		while (!DOES_OBJECT_EXIST(Attach_object[id]))WAIT(0);
		int NetID;
		GET_NETWORK_ID_FROM_OBJECT(Attach_object[id],&NetID);
		if(HAS_CONTROL_OF_NETWORK_ID(NetID))
		{
			SET_NETWORK_ID_CAN_MIGRATE(NetID, false);
			SET_OBJECT_HEALTH(Attach_object[id], 165.0f);
			WAIT(100);
			ATTACH_OBJECT_TO_PED(Attach_object[id],player,pedbone, obj_x, obj_y, obj_z, obj_rx, obj_ry, obj_rz,false);
		}
	}		
	else Alert("~BLIP_76~ ~COL_NET_4~Error! ~w~Model missing from your CD image",false);	
}

void GET_CHAR_COORDINATES_HEADING(const int ped, float *X, float *Y, float *Z, float *H)
{
	GET_CHAR_COORDINATES(ped, &*X, &*Y, &*Z);
	GET_CHAR_HEADING(ped,&*H);
}

void delete_transformers_on_vehicle(const int veh) //doesn't request control, our spawns (only if control = non migrate/locked to us) :D
{
	if(!DOES_VEHICLE_EXIST(veh)) return;
	float vx,vy,vz;
	GET_CAR_COORDINATES(veh,&vx,&vy,&vz);
	int i, tmp_veh;
	for(i = 0; i < 8000; i++)
	{
		if(!DOES_VEHICLE_EXIST_WITH_NETWORK_ID(i)) continue;
		GET_VEHICLE_FROM_NETWORK_ID(i,&tmp_veh);
		if(!IS_CAR_ATTACHED(tmp_veh) || (tmp_veh == veh)) continue;
		float tx,ty,tz,distance;
		GET_CAR_COORDINATES(tmp_veh,&tx,&ty,&tz);
		GET_DISTANCE_BETWEEN_COORDS_3D(vx,vy,vz,tx,ty,tz,&distance);
		if( (distance > 2.0f) || !HAS_CONTROL_OF_NETWORK_ID(i) ) continue;
		DELETE_CAR(&tmp_veh);
	}
	SET_CAR_VISIBLE(veh,true);
}

void delete_own_objects_on_vehicle(const int veh)
{
	if(!DOES_VEHICLE_EXIST(veh)) return;
	int i,object;
	for(i = 0; i < 8000; i++)
	{
		if(!DOES_OBJECT_EXIST_WITH_NETWORK_ID(i)) continue;
		GET_OBJECT_FROM_NETWORK_ID(i,&object);
		if(!IS_OBJECT_ATTACHED(object) || GET_CAR_OBJECT_IS_ATTACHED_TO(object) != veh) continue;
		if(HAS_CONTROL_OF_NETWORK_ID(i))
		{
			//Run_Ptfx(object);
			DELETE_OBJECT(&object);
		}
	}
}

void MD_VEHICLE_SPAWNER_ON_ID(const int Player_ID ,const int model){ 	
	Ped Player_Char;
	Vehicle Spawnvihicle;
	float Spawn_x, Spawn_y, Spawn_z, Spawn_h, Spawn_s;
	
	if(PLAYER_HAS_CHAR(Player_ID))GET_PLAYER_CHAR(Player_ID, &Player_Char);
	else return	Alert(Error_Char_Missing,false);
	
	if(IS_MODEL_IN_CDIMAGE(model))REQUEST_MODEL(model);
	else return Alert(Error_Model_Missing,false);
	
	/**Clean up peds in the weaponvehicle if a new vehicle is spawned**/	
	int Pednr;
	for(Pednr = 0; Pednr < 4; Pednr++){
	if(DOES_CHAR_EXIST(WeaponVeh_ped[Pednr]))DELETE_CHAR(&WeaponVeh_ped[Pednr]);					
	}
	
	/**Get the data*/
	if(Player_ID == iPlayer){
		GET_CHAR_COORDINATES_HEADING(pPlayer,&Spawn_x,&Spawn_y,&Spawn_z,&Spawn_h);
		if(IS_CHAR_IN_ANY_CAR(pPlayer)){
			GET_CAR_CHAR_IS_USING(pPlayer,&Spawnvihicle);
			GET_CAR_SPEED(Spawnvihicle,&Spawn_s);
			delete_own_objects_on_vehicle(Spawnvihicle);
			delete_transformers_on_vehicle(Spawnvihicle);
			DELETE_CAR(&Spawnvihicle);		
		}		
	}
	else{
		GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(Player_Char, 0, 6, 0, &Spawn_x, &Spawn_y, &Spawn_z);
		GET_CHAR_HEADING(Player_Char,&Spawn_h);	
	}
	while(!HAS_MODEL_LOADED(model)) WAIT(0);
	/**Create that shit*/
	CREATE_CAR(model,Spawn_x,Spawn_y,Spawn_z,&Spawnvihicle,true);
	MARK_MODEL_AS_NO_LONGER_NEEDED(model);
	if(Player_ID == iPlayer){
		WARP_CHAR_INTO_CAR(pPlayer,Spawnvihicle);	
		/**Settings*/
		SET_CAR_HEADING(Spawnvihicle,Spawn_h);		
	}	
	if(!IS_THIS_MODEL_A_HELI(model)){
		int rand_colours[4];
		int rand_i;
		for(rand_i = 0; rand_i < 4; rand_i++)
		{
			GENERATE_RANDOM_INT_IN_RANGE(0,134,&rand_colours[rand_i]);
		}	
		CHANGE_CAR_COLOUR(Spawnvihicle,rand_colours[0],rand_colours[1]);
		SET_EXTRA_CAR_COLOURS(Spawnvihicle,rand_colours[2],rand_colours[3]);	
	}
	else{
		SET_HELI_BLADES_FULL_SPEED(Spawnvihicle);
	}
	if(Coloursetting_Personal && Player_ID == iPlayer){
	CHANGE_CAR_COLOUR(Spawnvihicle,SavedColors1,SavedColors2);
	SET_EXTRA_CAR_COLOURS(Spawnvihicle,SavedColors3,SavedColors4);	
	}
	if(Coloursetting_Net && Player_ID != iPlayer){
	CHANGE_CAR_COLOUR(Spawnvihicle,SavedColors5,SavedColors6);
	SET_EXTRA_CAR_COLOURS(Spawnvihicle,SavedColors7,SavedColors8);	
	}
	if(Coloursetting_Personal && SavedColors1 == 134 && SavedColors2 == 134 &&  SavedColors3 == 134 && SavedColors4 == 134)Alert("~b~MD: ~s~You might want to save a personal vehicle colour in spawnsettings.",false);
	if(Coloursetting_Net && SavedColors5 == 134&& SavedColors6 == 134 &&  SavedColors7 == 134 && SavedColors8 == 134)Alert("~b~MD: ~s~You might want to save a vehicle colour for netplayers in spawnsettings.",false);
	SET_CAR_ENGINE_ON(Spawnvihicle,GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_ENGINE),GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_ENGINE));
	if(GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_ALL_UPGRADES))
	{
		int Extra;
		for(Extra=0;Extra<10;Extra++)TURN_OFF_VEHICLE_EXTRA(Spawnvihicle,Extra, false);		
	}	
	Run_Ptfx(Spawnvihicle);	
	SET_CAR_FORWARD_SPEED(Spawnvihicle,Spawn_s);
	LOCK_CAR_DOORS(Spawnvihicle,VEHICLE_DOOR_UNLOCKED);
	SET_VEHICLE_DIRT_LEVEL(Spawnvihicle,0);
	WASH_VEHICLE_TEXTURES(Spawnvihicle,0);
	SET_CAR_CAN_BE_DAMAGED(Spawnvihicle,!GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE));
	SET_CAR_CAN_BE_VISIBLY_DAMAGED(Spawnvihicle,!GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE));
	SET_CAN_BURST_CAR_TYRES(Spawnvihicle,!GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE));
	SWITCH_CAR_SIREN(Spawnvihicle,GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_SIREN));
	MARK_CAR_AS_NO_LONGER_NEEDED(&Spawnvihicle); //make the game able to delete it if it's not used..
	if(Player_ID != iPlayer) //--> No need to print this for urself! //true buddy!
	{ 
		/**Now lets print this shit**/
		char * buffer[32];
		Strcpy(buffer, "~b~MD: ~s~A "); //12 characters
		Strcat(buffer, GET_STRING_FROM_TEXT_FILE(GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(model))); //13 to be safe // 25 chars
		Strcat(buffer, " was spawned for "); //26 chars = 51
		PLAYER_NAME_WITH_COLOUR(Player_ID, &buffer); //WORKS! //69
		Strcat(buffer, "~s~."); //73 chars
		Alert(buffer, false);	
	}
}