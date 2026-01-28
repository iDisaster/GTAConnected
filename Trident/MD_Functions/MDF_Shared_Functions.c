/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT Based on ESSENTIALS
 * @ MADE BY - DEVILSDESIGN && IIV NATHAN VII
 */
 
#pragma once

/* USAGE

#define GetBit(BitSet, bitIndex) IS_BIT_SET(BitSet, bitIndex)

#define SetBit(BitSet, bitIndex, bitValue)	SetBitHelper(&BitSet, bitIndex, bitValue)

#define ToggleBit(BitSet, bitIndex)	ToggleBitHelper(&BitSet, bitIndex)
*/

//int CarryAllWeaponsIndex = 0; //USE 0 as disabled, //should use a byte set, currently "int flymod;" can be byteset'd too, maybe some other things also..

void TOGGLE_SCRIPT(char* name){
	if(!DOES_SCRIPT_EXIST(name)){
		char * buffer[32];
		Strcpy(buffer, "~b~MD: ");
		Strcat(buffer,  "~s~Request failed! ~n~Sco: ~y~"); //41
		Strcat(buffer,  name); //41
		Strcat(buffer,  "~s~ is missing from your image. "); //41
		Alert(buffer,false);
	return;
	}
	if(GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT(name) > 0)TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME(name);
	else{
		REQUEST_SCRIPT(name);
		while(!HAS_SCRIPT_LOADED(name)) WAIT(0);
		START_NEW_SCRIPT(name,1024);
		MARK_SCRIPT_AS_NO_LONGER_NEEDED(name);
	}
}

bool ARE_ALL_PLAYERS_MUTED(void){
	int i;
	for(i = 0; i < MAX_PLAYERS; i++){
		if(Invalid_Player(i)) continue;
		if(!NETWORK_IS_PLAYER_MUTED_BY_ME(i)) return false;
	}
	return true;
}

void SET_ALL_PLAYERS_MUTED(const bool value){
	int i;
	for(i = 0; i < MAX_PLAYERS; i++){
		if(Invalid_Player(i)) continue;
		NETWORK_SET_PLAYER_MUTED(i,value);
	}
}

void Crossbrowser_Setself(void){
	register int scanner;
	for(scanner = 0; scanner < MAX_PLAYERS; scanner++){
		//if(Player_Display_Selection(players[scanner].id))continue;
		if(players[scanner].id != iPlayer)continue;
		ChangeNetPlayer = scanner;
		break;	
	}	
}

void MD_SET_WEATHER(const int weather){	
	if(GetByteInSet(WeatherTimeAutoLockByteSet, FREEZE_WEATHER) != 50){ //50 = disabled
		SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_WEATHER, weather);
	}
	FORCE_WEATHER_NOW(weather);
}

void MD_SET_TIME(const int hour, const int minute){
	if(GetByteInSet(WeatherTimeAutoLockByteSet, FREEZE_TIME_HOUR) != 25){ //25 = disabled	
		SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_HOUR, hour);
		SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_MINUTE, minute);
	}
	SET_TIME_OF_DAY(hour,minute);
}


void Fix_Game_Before_Leaving(void){
	if(!In_Network) return;
	int i,tmp;	
	for(i = 0; i < MAX_PLAYERS; i++){
		if(DOES_OBJECT_EXIST(drive_water[i])) 
			DELETE_OBJECT(&drive_water[i]);
	}	
	if(GET_HOST_ID() == iPlayer){
		MD_SET_WEATHER(WEATHER_SUNNY);
		MD_SET_TIME(9,00); //to stop fancy up graphics weathers and shit fucking the lobby for normal players if your host
		WAIT(1500);	
	}
}

void Player_Counter(void){
	register int PlayerScan;
	player_count = 0;	
	for(PlayerScan = 0; PlayerScan < MAX_PLAYERS; PlayerScan++){
	if(Player_Display_Selection(PlayerScan))continue;//Skip Invalids - Count all that isnt invalid	
	players[player_count].id = PlayerScan;
	player_count++;
	}	
}


//!Unused in the menu - Why leave it here ?
/*
void GET_CHAR_ACTUAL_COORDINATES_WITH_HEADING_NO_OFFSET(const int ped, float *x, float *y, float *z, float *h) //Why ur putting a * in front ? |Devils question
{
//it's actually set char coordinates that has offset, hence, SET_CHAR_COORDINATES_NO_OFFSET
	if(DOES_CHAR_EXIST(ped))
	{
		GET_CHAR_COORDINATES(ped,&*x,&*y,&*z);
		if(IS_CHAR_IN_ANY_CAR(ped)){
			//need to figure offset in vehicles as it's random as fk - Nathan
		}
		else{
			*z = (*z - 1);
		}
		GET_CHAR_HEADING(ped,&*h);
	}
	else{
		*x = TO_FLOAT(0);
		*y = TO_FLOAT(0);
		*z = TO_FLOAT(0);
		*h = TO_FLOAT(0);
	}
}
*/

void MD_CarryAllweapons(void){  
	if(GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT("menu_startup") != 0) return; // Prevent switching weapons when a menu is displayed! --> Needed cus it fucked with crossbrowser
	if(IS_CHAR_ON_FOOT(pPlayer)){		
		int Weapons[25];
		int max_weapons = 16;
			Weapons[0] = WEAPON_UNARMED;
			Weapons[1] = WEAPON_BASEBALLBAT;
			Weapons[2] = WEAPON_POOLCUE;
			Weapons[3] = WEAPON_KNIFE;
			Weapons[4] = WEAPON_GRENADE;
			Weapons[5] = WEAPON_MOLOTOV;
			Weapons[6] = WEAPON_PISTOL;
			Weapons[7] = WEAPON_DEAGLE;
			Weapons[8] = WEAPON_SHOTGUN;
			Weapons[9] = WEAPON_BARETTA;
			Weapons[10] = WEAPON_MICRO_UZI;
			Weapons[11] = WEAPON_MP5;
			Weapons[12] = WEAPON_AK47;
			Weapons[13] = WEAPON_M4;
			Weapons[14] = WEAPON_SNIPERRIFLE;
			Weapons[15] = WEAPON_M40A1;
			Weapons[16] = WEAPON_RLAUNCHER;

		if(Episode == 1)Weapons[17] = 0;
		else if(Episode == 2)Weapons[17] = 0;
		
		bool input;
		if((IS_BUTTON_JUST_PRESSED(0, DPAD_RIGHT)) || IS_GAME_KEYBOARD_KEY_PRESSED(KEY_F6)){
			if(CAW_Weapon < max_weapons)CAW_Weapon = (CAW_Weapon + 1);
			else CAW_Weapon = 0;
			input = true;
		}
		else if((IS_BUTTON_JUST_PRESSED(0, DPAD_LEFT)) || IS_GAME_KEYBOARD_KEY_PRESSED(KEY_F5)){
			if(CAW_Weapon == 0)CAW_Weapon = max_weapons;			
			else CAW_Weapon = (CAW_Weapon - 1);			
			input = true;
		}

		if(input){			
			if(HAS_CHAR_GOT_WEAPON(pPlayer, Weapons[CAW_Weapon]))SET_CURRENT_CHAR_WEAPON(pPlayer, Weapons[CAW_Weapon], true);			
			else{
				int max_ammo;
				GET_MAX_AMMO(pPlayer, Weapons[CAW_Weapon], &max_ammo);
				GIVE_WEAPON_TO_CHAR(pPlayer, Weapons[CAW_Weapon], max_ammo, false);				
			}	
		}		
	}
}
	
void UPDATE_CHANGE_NET_PLAYER_WEAPON_INFO(void){
	if(!PLAYER_HAS_CHAR(players[ChangeNetPlayer].id)) return;  
	int Weapon_Detect;
	GET_CURRENT_CHAR_WEAPON(PLAYER_CHAR(players[ChangeNetPlayer].id), &Weapon_Detect);
	NetPlayer_Weapon = "Unknown";
	if(Weapon_Detect == WEAPON_UNARMED) NetPlayer_Weapon = "Unarmed";
	else if(Weapon_Detect == WEAPON_BASEBALLBAT) NetPlayer_Weapon = "Baseball Bat";
	else if(Weapon_Detect == WEAPON_POOLCUE) NetPlayer_Weapon = "Pool Cue"; 
	else if(Weapon_Detect == WEAPON_KNIFE) NetPlayer_Weapon = "Knife";
	else if(Weapon_Detect == WEAPON_GRENADE) NetPlayer_Weapon = "Grenades";
	else if(Weapon_Detect == WEAPON_MOLOTOV) NetPlayer_Weapon = "Molotov";
	else if(Weapon_Detect == WEAPON_ROCKET) NetPlayer_Weapon = "Freeze Gun";
	else if(Weapon_Detect == WEAPON_PISTOL) NetPlayer_Weapon = "Glock";
	else if(Weapon_Detect == WEAPON_DEAGLE) NetPlayer_Weapon = "Desert Eagle";
	else if(Weapon_Detect == WEAPON_SHOTGUN) NetPlayer_Weapon = "Pump Shotgun";
	else if(Weapon_Detect == WEAPON_BARETTA) NetPlayer_Weapon = "Baretta";
	else if(Weapon_Detect == WEAPON_MICRO_UZI) NetPlayer_Weapon = "Micro Uzi";
	else if(Weapon_Detect == WEAPON_MP5) NetPlayer_Weapon = "MP5";
	else if(Weapon_Detect == WEAPON_AK47) NetPlayer_Weapon = "AK-47";
	else if(Weapon_Detect == WEAPON_M4) NetPlayer_Weapon = "M4";
	else if(Weapon_Detect == WEAPON_SNIPERRIFLE) NetPlayer_Weapon = "PSG-1 Sniper";
	else if(Weapon_Detect == WEAPON_M40A1) NetPlayer_Weapon = "M40A1 Sniper";
	else if(Weapon_Detect == WEAPON_RLAUNCHER) NetPlayer_Weapon = "RPG";
	else if(Episode == 2)
	{
		if(Weapon_Detect == WEAPON_EPISODIC_1) NetPlayer_Weapon = "Grenade Launcher";
		else if(Weapon_Detect == WEAPON_EPISODIC_9) NetPlayer_Weapon = ".44 Pistol";
		else if(Weapon_Detect == WEAPON_EPISODIC_10) NetPlayer_Weapon = "Explosive AA12";
		else if(Weapon_Detect == WEAPON_EPISODIC_11) NetPlayer_Weapon = "AA12";
		else if(Weapon_Detect == WEAPON_EPISODIC_12) NetPlayer_Weapon = "P-90";
		else if(Weapon_Detect == WEAPON_EPISODIC_13) NetPlayer_Weapon = "Uzi";
		else if(Weapon_Detect == WEAPON_EPISODIC_14) NetPlayer_Weapon = "M249 LMG";
		else if(Weapon_Detect == WEAPON_EPISODIC_15) NetPlayer_Weapon = "DSR-1 Sniper";
		else if(Weapon_Detect == WEAPON_EPISODIC_16) NetPlayer_Weapon = "Sticky Bombs";
	}
}


int GET_PLAYER_RANK_TEXTURE(const int playerindex){
	
	//REQUEST_STREAMED_TXD("network", 1);
	//int rank = GET_PLAYER_RANK_LEVEL_DURING_MP(playerindex);
	
	char* ranks[11];
	ranks[0] = "STAR_RATING_0";
	ranks[1] = "STAR_RATING_1";
	ranks[2] = "STAR_RATING_2";
	ranks[3] = "STAR_RATING_3";
	ranks[4] = "STAR_RATING_4";
	ranks[5] = "STAR_RATING_5";
	ranks[6] = "STAR_RATING_6";
	ranks[7] = "STAR_RATING_7";
	ranks[8] = "STAR_RATING_8";
	ranks[9] = "STAR_RATING_9";
	ranks[10] = "STAR_RATING_10";
	return GET_TEXTURE_FROM_STREAMED_TXD("network", ranks[GET_PLAYER_RANK_LEVEL_DURING_MP(playerindex)]);
	
}

void Attach_Ped_To_Char (int Netplayer_PED, int Aped_model,char* set){
	float Aped_x, Aped_y, Aped_z;
	int Aped_ID;
	int Aped_PED, Aped_OBJECT;
	Aped_z += 0.0;
	Aped_y += 1.0;
	REQUEST_MODEL(Aped_model);
	while (!HAS_MODEL_LOADED(Aped_model)) WAIT(0);
	GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(Netplayer_PED, 0, 2, 0, &Aped_x, &Aped_y, &Aped_z);
	CREATE_CHAR(26, Aped_model, Aped_x,Aped_y,Aped_z, &Aped_PED, true);
	MARK_MODEL_AS_NO_LONGER_NEEDED(Aped_model);	
	GET_NETWORK_ID_FROM_PED(Aped_PED,&Aped_ID);
	REQUEST_CONTROL_OF_NETWORK_ID(Aped_ID);
	int tick = 0;
	while(!HAS_CONTROL_OF_NETWORK_ID(Aped_ID)){
		tick++;
		REQUEST_CONTROL_OF_NETWORK_ID(Aped_ID);
		if(tick >= 10) break;
		WAIT(0);
	}
	SET_NETWORK_ID_CAN_MIGRATE(Aped_ID,true);
	SET_CHAR_INVINCIBLE(Aped_PED, true);
	SET_CHAR_VISIBLE(Aped_PED, true);
	FREEZE_CHAR_POSITION(Aped_PED, true);
	CREATE_OBJECT(MODEL_CJ_GOLF_BALL,0.0,0.0,0.0,&Aped_OBJECT,true);
	SET_OBJECT_VISIBLE(Aped_OBJECT, false);
	ATTACH_OBJECT_TO_PED(Aped_OBJECT,Netplayer_PED,0,0.0,2,0,0.0,0.0,0.0,false);
	WAIT(10);
	ATTACH_PED_TO_OBJECT(Aped_PED,Aped_OBJECT,0,0.0,0.0,0,0,0,0,0);
	MARK_OBJECT_AS_NO_LONGER_NEEDED(&Aped_OBJECT);	
}


void Clone_Car(const int cveh, float x, float y, float z, float h, int *car_clone){
	int model;
	if(!DOES_VEHICLE_EXIST(cveh)) return;
	GET_CAR_MODEL(cveh,&model);
	REQUEST_MODEL(model);
	int colour1,colour2,colourEXT1,colourEXT2,health,i;
	float dirt_level;
	GET_CAR_COLOURS(cveh, &colour1, &colour2);
	GET_EXTRA_CAR_COLOURS(cveh, &colourEXT1, &colourEXT2);
	GET_CAR_HEALTH(cveh, &health);
	GET_VEHICLE_DIRT_LEVEL(cveh, &dirt_level);
	bool siren;
	bool upgrade[10];
	siren = IS_CAR_SIREN_ON(cveh);
	for(i = 0;i<10;i++){
	upgrade[i] = IS_VEHICLE_EXTRA_TURNED_ON(cveh,i);
	}
	while(!HAS_MODEL_LOADED(model)) WAIT(0);
	CREATE_CAR(model,x,y,z,&*car_clone,true);
	while(!DOES_VEHICLE_EXIST(*car_clone)) WAIT(0);
	SET_CAR_CAN_BE_DAMAGED(*car_clone, !GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE)); 
	SET_CAR_CAN_BE_VISIBLY_DAMAGED(*car_clone, !GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE));
	SET_CAN_BURST_CAR_TYRES(*car_clone, !GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE));
	SET_CAR_WATERTIGHT(*car_clone, GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE));
	SET_CAR_HEADING(*car_clone,h);
	if(!GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE))SET_CAR_HEALTH(*car_clone,health);
	CHANGE_CAR_COLOUR(*car_clone,colour1,colour2);
	SET_EXTRA_CAR_COLOURS(*car_clone,colourEXT1,colourEXT2);
	SET_VEHICLE_DIRT_LEVEL(*car_clone,dirt_level);
	SWITCH_CAR_SIREN(*car_clone,siren);
	for(i = 0; i < 10; i++)
	{
		TURN_OFF_VEHICLE_EXTRA(*car_clone,i,!upgrade[i]);
	}	
}

bool network_control(const int Network_ID){
	if(!In_Network || HAS_CONTROL_OF_NETWORK_ID(Network_ID)) return true;
	if(!REQUEST_CONTROL_OF_NETWORK_ID(Network_ID)){
		PRIORITIZE_STREAMING_REQUEST();
		register int tick = 0;
		while ( !HAS_CONTROL_OF_NETWORK_ID(Network_ID) && ++tick < 10 ) WAIT(100);
	}
	bool control = HAS_CONTROL_OF_NETWORK_ID(Network_ID);
	#ifdef Premium
	if(!control){
		int i;
		int ID_Controller = 1337;
		for(i = 0; i < MAX_PLAYERS; i++){
			if(!DOES_PLAYER_HAVE_CONTROL_OF_NETWORK_ID(i,Network_ID)) continue;
			ID_Controller = i;
			break;
		}
		char * buffer[32]; //128 characters
		Strcpy(buffer, ((ID_Controller == 1337) ? "~b~MD: ~s~Unable to get control of Net ID: " : "~b~MD: ") ); //43 characters
		if(ID_Controller != 1337){
			PLAYER_NAME_WITH_COLOUR(ID_Controller, &buffer); //WORKS!
			Strcat(buffer, "~s~ has control of Net ID: "); //27 characters + 27 = 54 // + first string = 61
			PLAYERS_COLOUR(ID_Controller, &buffer); //we'll see.. just a test :P - Nathan
		}
		//PLAYERS_COLOUR(ID_Controller, &buffer); //Nah premium only :D
		itoa(Network_ID, buffer); //like 50 characters total
		Alert(buffer, false);
		
	}
	#else
	if(!control){
		char* buffer[16];
		Strcpy(buffer, "~b~MD: ~s~Unable to get control of Net ID: "); //Telling you who has control is Premium and above Only! - Nathan
		itoa( Network_ID, buffer);
		Alert(buffer, false);
	}
	#endif
	return control; // SHould this be here ? //yes....
}

void MD_Delete_Objects_On_Vehicle(const int Player_ID){ //!Devils Remake
	//!**Player Char Check**//
	Ped Player_PED;
	Vehicle vehicle;
	int C_Object,delObj;
	if(!PLAYER_HAS_CHAR(Player_ID))return Alert_Abort(Error_Char_Missing,false);
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);
	/**Vehicle Checker**/
	if(!IS_CHAR_IN_ANY_CAR(Player_PED)){
		if(Player_PED == pPlayer)Alert_Abort(Error_Personal_Vehicle,false);
		else Alert_Abort(Error_NetPlayer_Vehicle,false);		
	}
	else GET_CAR_CHAR_IS_USING(Player_PED,&vehicle);	
	bool Print_Once;
	for(C_Object=16;C_Object<=9999;C_Object++){
		if(!DOES_OBJECT_EXIST_WITH_NETWORK_ID(C_Object)) continue;
		GET_OBJECT_FROM_NETWORK_ID(C_Object,&delObj);
			if(!IS_OBJECT_ATTACHED(delObj)) continue;
				if(!DOES_VEHICLE_EXIST(vehicle)) return;
					if(GET_CAR_OBJECT_IS_ATTACHED_TO(delObj) != vehicle) continue;
		if(!network_control(C_Object)) continue;
		if(Print_Once){				
				char * buffer[32]; //gives me 128 chars to play with...
				Strcpy(buffer, "~b~MD: ~s~Deleting objects attached to a "); //42 characters 
				int model;
				GET_CAR_MODEL(vehicle,&model);
				Strcat(buffer, GET_STRING_FROM_TEXT_FILE(GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(model)));
				Strcat(buffer, model); //5 characters + 58 = 63. PERFECT!
				Alert(buffer,false);
				Print_Once = 0;
		}
		Run_Ptfx(C_Object);		
		DELETE_OBJECT(&delObj);
	}	
}

//!Might need to take this out
void delete_objects_on_vehicle(Vehicle vehicle){ //Old one freezes for some reason
	if(!DOES_VEHICLE_EXIST(vehicle)) return;
	int i,z,object;
	bool printed;
	for(z = 0; z < 5; z++){
		for(i = 0; i < 8250; i++){
			if(!DOES_OBJECT_EXIST_WITH_NETWORK_ID(i)) continue;
			GET_OBJECT_FROM_NETWORK_ID(i,&object);
			if(!IS_OBJECT_ATTACHED(object) || GET_CAR_OBJECT_IS_ATTACHED_TO(object) != vehicle) continue;
			REQUEST_CONTROL_OF_NETWORK_ID(i);
			if(!HAS_CONTROL_OF_NETWORK_ID(i)) continue;
			if(!printed){
				printed = true;
				char * buffer[32]; //gives me 128 chars to play with...
				Strcpy(buffer, "~b~MD: ~s~Deleting objects attached to a "); //42 characters 
				int model;
				GET_CAR_MODEL(vehicle,&model);
				Strcat(buffer, GET_STRING_FROM_TEXT_FILE(GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(model)));
				Strcat(buffer, model); //5 characters + 58 = 63. PERFECT!
				Alert(buffer,false);
			}
			Run_Ptfx(object);
			DELETE_OBJECT(&object);
			}
		WAIT(60);
	}
}

void delete_entitys_on_object(const int object) //for deleting attachments
{ //best to do this by distance! //Look into it for devil, spawn/find biggest rotation + then get distance from root object (right under you)
	//using a 2D distance (birdsEyeViewDistance) is probably best bet for accuracy + that's what DRAW_SPHERE represents i believe so
	if(!DOES_OBJECT_EXIST(object)) return;
	int i, z;
	float rootx,rooty,rootz;
	float ex,ey,ez;
	GET_OBJECT_COORDINATES(object,&rootx,&rooty,&rootz);
	float birdsEyeDistance;
	for(z = 0; z < 5; z++){
		for(i = 0; i < 8250; i++){
			if(DOES_OBJECT_EXIST_WITH_NETWORK_ID(i)){
				int net_object;
				GET_OBJECT_FROM_NETWORK_ID(i,&net_object);
				if(!IS_OBJECT_ATTACHED(net_object)) continue; //works fine, just add distance for accuracy
				GET_OBJECT_COORDINATES(net_object,&ex,&ey,&ez);
				GET_DISTANCE_BETWEEN_COORDS_2D(rootx, rooty, ex, ey, &birdsEyeDistance);
				if(birdsEyeDistance < 30){
					REQUEST_CONTROL_OF_NETWORK_ID(i);
					if(!HAS_CONTROL_OF_NETWORK_ID(i)) continue;
					DELETE_OBJECT(&net_object);
				}
			}
			else if(DOES_PED_EXIST_WITH_NETWORK_ID(i) && (i % 100) != 1){
				int ped;
				GET_PED_FROM_NETWORK_ID(i,&ped);
			//	if(IS_PED_ATTACHED_TO_OBJECT(ped, object)) //doesn't delete for some reason...			
				GET_CHAR_COORDINATES(ped,&ex,&ey,&ez);
				GET_DISTANCE_BETWEEN_COORDS_2D(rootx, rooty, ex, ey, &birdsEyeDistance);
				if(birdsEyeDistance < 30){ // make it < max rotation distance from root object.. will test
					REQUEST_CONTROL_OF_NETWORK_ID(i); //eventually remove this and only use if has control
													//easy enough to do just have to lock control of all attaches/rotations
													///then we'll always HAS_CONTROL_OF_NETWORK_ID :P
					if(!HAS_CONTROL_OF_NETWORK_ID(i)) continue;
					DELETE_CHAR(&ped);
				}
			}
			else if(DOES_VEHICLE_EXIST_WITH_NETWORK_ID(i)){
				int veh;
				GET_VEHICLE_FROM_NETWORK_ID(i,&veh);
				GET_CAR_COORDINATES(veh,&ex,&ey,&ez);
				GET_DISTANCE_BETWEEN_COORDS_2D(rootx, rooty, ex, ey, &birdsEyeDistance);
				if(IS_CAR_ATTACHED(veh) && birdsEyeDistance < 30){
					REQUEST_CONTROL_OF_NETWORK_ID(i);
					if(!HAS_CONTROL_OF_NETWORK_ID(i)) continue;
					DELETE_CAR(&veh);
				}
			}
		}
		WAIT(80);
	}
	int Rotation_Subject_ID;
	for(Rotation_Subject_ID = 0; Rotation_Subject_ID < MAX_ROTATION_SUBJECTS; Rotation_Subject_ID++){
		if (DOES_CHAR_EXIST(Rotation_Subject[Rotation_Subject_ID])){
			DELETE_CHAR(&Rotation_Subject[Rotation_Subject_ID]);			
			WAIT(75);
		}
	}	
}


void MUTE_ALL_PLAYERS(const bool mute){
	int Netplayer_ID;
	for( Netplayer_ID=0;  Netplayer_ID < MAX_PLAYERS;  Netplayer_ID++){
		if(Player_Display_Selection(Netplayer_ID) || iPlayer ==  Netplayer_ID) continue;
		NETWORK_SET_PLAYER_MUTED(Netplayer_ID,mute);
	}
}

void Shuffle_Vehicle_Seat(void) {//Nathan's func, works on bikes too :D
    int tmp_veh;
    if(!IS_CHAR_IN_ANY_CAR(pPlayer)) return;
    GET_CAR_CHAR_IS_USING(pPlayer,&tmp_veh);
    if(IS_CHAR_ON_ANY_BIKE(pPlayer)){
        int driver;
        GET_DRIVER_OF_CAR(tmp_veh,&driver);
        if(!DOES_CHAR_EXIST(driver))WARP_CHAR_INTO_CAR(pPlayer,tmp_veh);
        else if(driver == pPlayer && IS_CAR_PASSENGER_SEAT_FREE(tmp_veh,0))WARP_CHAR_INTO_CAR_AS_PASSENGER(pPlayer,tmp_veh,0);
    }
    TASK_SHUFFLE_TO_NEXT_CAR_SEAT(pPlayer,tmp_veh);
}

void clear_attachments(void){
	int attach_id;
	for(attach_id = 0; attach_id < MAX_ATTACH_OBJECTS ; attach_id++){
		if (DOES_OBJECT_EXIST(Attach_object[attach_id]))DELETE_OBJECT(&Attach_object[attach_id]);		
	}
}


void clear_objects_on_car(const int veh){
	if(!DOES_VEHICLE_EXIST(veh)) return;
	int C_Object,delObj,nvid;
	for(C_Object=16;C_Object<=9999;C_Object++){
		if(!DOES_OBJECT_EXIST_WITH_NETWORK_ID(C_Object)) continue;
		GET_OBJECT_FROM_NETWORK_ID(C_Object,&delObj);
			if(!IS_OBJECT_ATTACHED(delObj)) continue;
				if(!DOES_VEHICLE_EXIST(veh)) return;
					if(GET_CAR_OBJECT_IS_ATTACHED_TO(delObj) != veh) continue;
		if(!network_control(C_Object)) continue;
		DELETE_OBJECT(&delObj);
	}
}



void Universal_Delete(const int given_distance, const int type, const bool print){
	const int current_type = (type - 1);
	float desired_distance = TO_FLOAT(given_distance);
	const char* types[12]; //this may not compile like this as i think you have to define const for every var upon creation, but lets see!
		  types[0] = "peds";
		  types[1] = "objects";
		  types[2] = "vehicles.all";
		  types[3] = "vehicles.abandoned";
		  types[4] = "cars.all";
		  types[5] = "cars.abandoned";
		  types[6] = "bikes.all";
		  types[7] = "bikes.abandoned";
		  types[8] = "boats.all";
		  types[9] = "boats.abandoned";
		  types[10] = "helis.all";
		  types[11] = "helis.abandoned";
	char * buffer[16]; //64 characters
	if(print){
		Strcpy(buffer, "~b~MD: ~s~Deleting "); // 19 characters
		Strcat(buffer, types[current_type]); //18 characters + 19 = 37
		Strcat(buffer, "."); //38
		Alert(buffer,false);
	}
	float distance,mx,my,mz;
	//x = 1.0f; //leave this here!
	GET_CHAR_COORDINATES(pPlayer,&mx,&my,&mz); // This needs to change to player coordinates me thinks...
	int i,j,tmp,driver,model;
	for(j = 0; j < 5; j++){
		float x,y,z;
		for(i = 0; i < 8251; i++){
			switch(current_type)
			{
				case 0:
				{
					if(!DOES_PED_EXIST_WITH_NETWORK_ID(i) || (i % 100 == 1)) continue;
					GET_PED_FROM_NETWORK_ID(i,&tmp);
					GET_CHAR_COORDINATES(tmp,&x,&y,&z);
				}
				break;
				case 1:
				{
					if(!DOES_OBJECT_EXIST_WITH_NETWORK_ID(i)) continue;
					GET_OBJECT_FROM_NETWORK_ID(i,&tmp);
					GET_OBJECT_COORDINATES(tmp,&x,&y,&z);
				}
				break;
				default:
				{
					if(!DOES_VEHICLE_EXIST_WITH_NETWORK_ID(i))continue;
					GET_VEHICLE_FROM_NETWORK_ID(i,&tmp);
					float nx,ny,nz;
					GET_CAR_COORDINATES(tmp,&nx,&ny,&nz); //attempt to stop keep deleting same vehicle
					if(nx == x && ny == y && nz == z) continue; //this is different too but can't see how it would cause issues..
					x = nx; y = ny; z = nz;
					if(current_type % 2 == 1){ //if number is odd (abandoned only)				
						GET_DRIVER_OF_CAR(tmp,&driver);
						int psngrs;
						GET_NUMBER_OF_PASSENGERS(tmp, &psngrs);  //only thing different to my protection, we check passengers
						if(DOES_CHAR_EXIST(driver)|| (psngrs > 0) ) continue;
					}
					GET_CAR_MODEL(tmp,&model);
				}
				break;
			}
			switch(current_type)
			{
				case 4: case 5:{ if(!IS_THIS_MODEL_A_CAR(model)) continue; } break;
				case 6: case 7:{ if(!IS_THIS_MODEL_A_BIKE(model)) continue; } break;
				case 8: case 9:{ if(!IS_THIS_MODEL_A_BOAT(model)) continue; } break;
				case 10: case 11:{ if(!IS_THIS_MODEL_A_HELI(model)) continue; } break;
			}
			
			GET_DISTANCE_BETWEEN_COORDS_3D(mx,my,mz,x,y,z,&distance);
			if(distance > desired_distance) continue;		
			REQUEST_CONTROL_OF_NETWORK_ID(i);
			if(!HAS_CONTROL_OF_NETWORK_ID(i)) continue;
			//here should work fine!
			Run_Ptfx(tmp); //leave this here, no need to have it 2 more times..
			switch(current_type)
			{
				case 0:
				{
					delete_objects_on_ped(tmp);
					DELETE_CHAR(&tmp);
				}
				break;
				case 1:
				{
					DELETE_OBJECT(&tmp);
				}
				break;
				default:
				{
					clear_objects_on_car(tmp);
					Run_Ptfx(tmp);
					DELETE_CAR(&tmp);
				}
				break;
			}
		}
		WAIT(90); //1 sec for network control, this is about right, (it's gonna take like 10MS to do this, maybe longer aha)
	}
	if(print){
		Strcpy(buffer, "~b~MD: ~s~Finished deleting "); // 39 characters
		Strcat(buffer, types[current_type]); //18 characters + 39 = 57
		Strcat(buffer, "."); //57+4 = 61
		Alert(buffer,false);
	}
}

void DISABLE_SPECTATE(const bool Telport_Tower){
	if(DOES_CAM_EXIST(scriptedCam)){
		SET_CAM_ACTIVE(scriptedCam,false);
		SET_CAM_PROPAGATE(scriptedCam,false);
		UNATTACH_CAM(scriptedCam);
		DESTROY_CAM(scriptedCam); 
		while(DOES_CAM_EXIST(scriptedCam)) WAIT(0);
		CAM_RESTORE();
		//SET_CAM_BEHIND_PED(pPlayer); //didnt do fk all
		scriptedCam = 0;
	}
	//wont be in a car cuz spectate trashes it..
	FREEZE_CHAR_POSITION(pPlayer,false);
	SET_CHAR_COLLISION(pPlayer,true);
	SET_CHAR_VISIBLE(pPlayer,true);
	SET_PLAYER_CONTROL(iPlayer,true);
	int SpectatePlayerIndex, SpectatePreviousPlayerIndex, AttachPlayerIndex, AttachType;
	GetByteSet(SpectateAndAttachByteSet,&SpectatePlayerIndex,&SpectatePreviousPlayerIndex,&AttachPlayerIndex,&AttachType);
	SpectatePlayerIndex = MAX_PLAYERS;
	SpectatePreviousPlayerIndex = MAX_PLAYERS;
	AttachType = 0;
	AttachPlayerIndex = MAX_PLAYERS;
	CreateByteSet(SpectatePlayerIndex, SpectatePreviousPlayerIndex, AttachPlayerIndex, AttachType, &SpectateAndAttachByteSet);
	if(Telport_Tower)SET_CHAR_COORDINATES(pPlayer,2635.00,415.0,79.00);
	//MD_Teleport_ID_Heading(iPlayer,2635.00, 415, 79.00,0);  //Tower Top
	
}

void Killfeed(void) //Nathan 
{
	//Please add who joined and left the game //Can't because messages would spam, we'd need 16/32 vars for blips to stop this - Nathan
	//Please add who changed model //to stop this spamming we'd also have to store everyones model,, another 16/32 vars, I think it's best we put this in another .sco - Nathan
	
	if(Print_Kill_Feed){
		int i;
		char * buffer[32];
		Strcpy(buffer, "~b~MD: ~COL_NET_");
		for(i = 0; i < MAX_PLAYERS; i++)
		{
			if(Player_Display_Selection(i) || !PLAYER_HAS_CHAR(i) || !NETWORK_PLAYER_HAS_DIED_RECENTLY(i)) continue;
			int killerIndex = FIND_NETWORK_KILLER_OF_PLAYER(i);
			if(killerIndex == i)
			{
				itoa( (i + 1), buffer);
				Strcat(buffer, "~");
				Strcat(buffer, GET_PLAYER_NAME(i));
				Strcat(buffer, " ~s~died.");
			}
			else
			{
				itoa( (killerIndex + 1), buffer);
				Strcat(buffer, "~");
				Strcat(buffer, GET_PLAYER_NAME(killerIndex));
				Strcat(buffer, " ~s~killed ~COL_NET_");
				itoa( (i + 1), buffer);
				Strcat(buffer, "~");
				Strcat(buffer, GET_PLAYER_NAME(i));
				Strcat(buffer, "~s~.");
			}
			Alert(buffer, false);
			break;
			//int FIND_NETWORK_KILLER_OF_PLAYER(Player playerIndex);
			//if(FIND_NETWORK_KILLER_OF_PLAYER(i) == i) "DIED"
		}      
	}
	/*
	for(NetPlayer_ID = 0;NetPlayer_ID <= 15;NetPlayer_ID++){
		if(Player_Display_Selection(NetPlayer_ID))continue;
		if(GET_PLAYER_ID() == NetPlayer_ID)continue;
		if(!PLAYER_HAS_CHAR(NetPlayer_ID))continue;
		if(NETWORK_PLAYER_HAS_DIED_RECENTLY(NetPlayer_ID)){
			Alert_Two("~BLIP_76~ ~COL_NET_1~Player Died : ~w~",GET_PLAYER_NAME(NetPlayer_ID),false);
		}		
	}
	*/
}



bool Teleport_iPlayer_To_PlayerIndex(const int playerindex, const bool teleport_in_car)
{
	bool pPlayer_is_in_car = IS_CHAR_IN_ANY_CAR(pPlayer);
	char * buffer[32];
	Strcpy(buffer, "~b~MD: ");
	PLAYER_NAME_WITH_COLOUR(playerindex, &buffer); //WORKS!
	
	int playerped;
	GET_PLAYER_CHAR(playerindex,&playerped);
	if(!DOES_CHAR_EXIST(playerped))
	{
		Strcat(buffer, " ~s~does not have a character, unable to teleport.");
		Alert(buffer,false);
		return false;
	}
	bool player_is_in_car = IS_CHAR_IN_ANY_CAR(playerped);
	float x,y,z,h;
	int rand;
	GENERATE_RANDOM_INT_IN_RANGE(0,2,&rand);
	GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(playerped, (player_is_in_car ? ((rand == 1) ? 3 : -3) : 0), (player_is_in_car ? 0 : ( pPlayer_is_in_car ? -5 : -2 )), 0,&x,&y,&z);
	z = (z - (player_is_in_car ? 0.5f : 1.0f)); //so you go to ground not up in the fkin air
	GET_CHAR_HEADING(playerped,&h);
	if(teleport_in_car)
	{
		if(DOES_VEHICLE_EXIST(Personal_Vehicle))
		{
			int driver;
			GET_DRIVER_OF_CAR(Personal_Vehicle,&driver);
			bool can_proceed; //false by default
			if(driver == pPlayer)
			{
				can_proceed = true;
			}
			else
			{
				int NetID;
				GET_NETWORK_ID_FROM_VEHICLE(Personal_Vehicle,&NetID);
				if(network_control(NetID))
				{
					can_proceed = true;
				}
				else
				{
					return false; ///
					//user gets net control error
				}
			}
			if(can_proceed)
			{
				SET_CAR_COORDINATES(Personal_Vehicle,x,y,z);
				SET_CAR_HEADING(Personal_Vehicle,h);
				return true;
			}
		}
		else
		{
			Alert("~b~MD: ~s~You are not in a vehicle.",false);
			return false;
		}
	}
	else
	{
		WARP_CHAR_FROM_CAR_TO_COORD(pPlayer,x,y,z); //works on foot too i believe without issue
		SET_CHAR_HEADING(pPlayer,h);
		return true;
	}
	return false;
}

bool MD_Teleport_ID_Heading(const int Player_ID, float x, float y, float z, float h){	
	Ped Player_PED;
	int Player_VEHICLE, Player_VEHICLE_DRIVER, Player_VEHICLE_ID;
	bool Is_iPlayer = (Player_ID == iPlayer);
	GET_PLAYER_CHAR(Player_ID,&Player_PED);
	if(!DOES_CHAR_EXIST(Player_PED)) return false; //just for safety
	bool to_respawn = false;
	Run_Ptfx(Player_PED); //do ID here if ptfx works
	if(Is_iPlayer){
		SET_CHAR_VISIBLE(pPlayer,!GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_TELEPORT_INVISIBLE));
		//DETACH_PED(pPlayer,true);
	}	
	bool in_car = IS_CHAR_IN_ANY_CAR(Player_PED);
	if(in_car){
		GET_CAR_CHAR_IS_USING(Player_PED,&Player_VEHICLE);
		GET_DRIVER_OF_CAR(Player_VEHICLE,&Player_VEHICLE_DRIVER); //why did you change all my var names!? - Nathan
		FREEZE_CAR_POSITION(Player_VEHICLE, false);
		GET_NETWORK_ID_FROM_VEHICLE(Player_VEHICLE, &Player_VEHICLE_ID);
		if(Is_iPlayer)		{
			if(Player_VEHICLE_DRIVER == Player_PED) //pPlayer would make much more sense to read
			{ 			
				SET_CAR_VISIBLE(Player_VEHICLE,!GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_TELEPORT_INVISIBLE));
			}
			else
			{
				WARP_CHAR_FROM_CAR_TO_COORD(pPlayer,x,y,z); //not really good to tp other players for your sake, this is good//if everyone wants to be teleported -> you simply teleport the drver
				SET_CHAR_HEADING(pPlayer,h);
				return true;
			}
		}
		else
		{
			if(!network_control(Player_VEHICLE_ID)) //if/when this returns true, it'll not run any code below and instantly 
			{                                       //start processing (!to_respawn), as you can see code here will have nothing 
				
				if(IS_THIS_MACHINE_THE_SERVER())    //to run if network_control is true..
				{
					to_respawn = true;
				}
				else
				{
					//ifdef superadmin to respawn = true  //possibly
				}
			}
		}
		if(!to_respawn)
		{
			SET_CAR_FORWARD_SPEED(Player_VEHICLE,0.0f); //This will stop network control fucking people up
			SET_CAR_COORDINATES(Player_VEHICLE,x,y,z);
			SET_CAR_HEADING(Player_VEHICLE,h);
			SET_CAR_ON_GROUND_PROPERLY(Player_VEHICLE); //can sometimes cause freezing..
			return true;
		}
	}
	if(Is_iPlayer) //this is unfortunately REQUIRED, as if you're not in a car, you won't get teleported by code above..
	{
		if(in_car) SET_CAR_COORDINATES(Player_VEHICLE,x,y,z);
		else SET_CHAR_COORDINATES(pPlayer,x,y,z);
		SET_CHAR_HEADING(pPlayer,h);
		return true;
	}
	else if(to_respawn)
	{
		if(IS_THIS_MACHINE_THE_SERVER())
		{
			REGISTER_PLAYER_RESPAWN_COORDS(Player_ID,x,y,z); //DO NOT USE RESURRECT, IT CAUSES ALL SORTS OF GLITCHES! //seems to maybe not work on piss3
			return true;
		}
		#ifdef SuperAdmin 
		else
		{
			REGISTER_PLAYER_RESPAWN_COORDS(Player_ID, x, y, z);
			//REQUEST_COLLISION_AT_POSN( x, y, z );
			RESURRECT_NETWORK_PLAYER(Player_ID,x,y,z,h);
			REQUEST_COLLISION_AT_POSN( x, y, z );
			return true;
		}
		#endif
	}
	return false;
}

void MD_Teleport_ID(const int Player_ID,float x,float y,float z){ 
	Ped Player_PED;
	GET_PLAYER_CHAR(Player_ID,&Player_PED);
	float land_x,land_y,land_z;
	if(DOES_CHAR_EXIST(Player_PED) && PLAYER_HAS_CHAR(Player_ID)){
		Vehicle vehicle;
		if(!IS_CHAR_IN_ANY_CAR(Player_PED)){
			if(Player_PED == pPlayer){ //Self start animation to run
				DISABLE_SPECTATE(false);		
				SET_CHAR_VISIBLE(Player_PED,!GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_TELEPORT_INVISIBLE));
				DETACH_PED(Player_PED,true);
				play_anims("move_gng@afro_c","sprint",0,0);
				WAIT(600);
				REQUEST_ANIMS("move_gng@afro_c");
				SET_CHAR_COORDINATES_NO_OFFSET(Player_PED,x,y,z);
				SWITCH_PED_TO_ANIMATED(pPlayer, 1);
				FREEZE_CHAR_POSITION(pPlayer,false);
				play_anims("move_gng@afro_c","sstop_l",0,1); //Animation when teleported
				WAIT(25);
				FREEZE_CHAR_POSITION(pPlayer,false);							
			}
			else{
				//Dev Only!!!!
				REGISTER_PLAYER_RESPAWN_COORDS(Player_ID, x, y, z);
				REQUEST_COLLISION_AT_POSN( x, y, z );
				RESURRECT_NETWORK_PLAYER(Player_ID,x,y,z,0);	
				FREEZE_CHAR_POSITION(Player_PED,false);
				//Else print cannot perform action unless as host
			}
		}
		else{
			int nvid;
			GET_CAR_CHAR_IS_USING(Player_PED,&vehicle);
			Run_Ptfx(vehicle);
			GET_NETWORK_ID_FROM_VEHICLE(vehicle,&nvid);
			if(!network_control(nvid) && Player_PED != pPlayer){
			//Add bool to choose to do this
			REGISTER_PLAYER_RESPAWN_COORDS(Player_ID, x, y, z);
			REQUEST_COLLISION_AT_POSN( x, y, z );
			RESURRECT_NETWORK_PLAYER(Player_ID,x,y,z,0);
			FREEZE_CHAR_POSITION(Player_PED,false);
			Alert("~b~MD: ~s~ Vehicle ID Controlled : Pulling them out",false);
			}
			else if(network_control(nvid) && Player_PED != pPlayer){
			SET_CAR_COORDINATES(vehicle,x,y,z);
			SET_CAR_FORWARD_SPEED(vehicle,0.0f);
			SET_CAR_ON_GROUND_PROPERLY(vehicle);
			}
			else{
				FREEZE_CHAR_POSITION(Player_PED,false);
				if(IS_CHAR_IN_ANY_CAR(Player_PED)){
				Run_Ptfx(vehicle);
				SET_CAR_COORDINATES(vehicle, x, y, z);
				SET_CAR_FORWARD_SPEED(vehicle,0.0f);
				}
			}
		}		
	}
	else Alert(Error_Char_Missing,false);	
}

void MD_Teleport_Char(const int Player_PED,float x,float y,float z){ //Ped = int
	float land_x,land_y,land_z;
	if(DOES_CHAR_EXIST(Player_PED) && PLAYER_HAS_CHAR(Player_PED)){
		Vehicle vehicle;
		if(!IS_CHAR_IN_ANY_CAR(Player_PED)){
			if(Player_PED == pPlayer){ //Self start animation to run
				DISABLE_SPECTATE(false);			
				SET_CHAR_VISIBLE(Player_PED,!GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_TELEPORT_INVISIBLE));
				DETACH_PED(Player_PED,true);
				play_anims("move_gng@afro_c","sprint",0,0);
				WAIT(600);
				REQUEST_ANIMS("move_gng@afro_c");
				SET_CHAR_COORDINATES_NO_OFFSET(Player_PED,x,y,z);
				SWITCH_PED_TO_ANIMATED(pPlayer, 1);
				FREEZE_CHAR_POSITION(pPlayer,false);
				play_anims("move_gng@afro_c","sstop_l",0,1); //Animation when teleported
				WAIT(25);
				FREEZE_CHAR_POSITION(pPlayer,false);							
			}
			else{
				
			}
		}
		else{
			int nvid;
			GET_CAR_CHAR_IS_USING(Player_PED,&vehicle);
			Run_Ptfx(vehicle);
			GET_NETWORK_ID_FROM_VEHICLE(vehicle,&nvid);
			if(network_control(nvid) && Player_PED != pPlayer){
			SET_CAR_COORDINATES(vehicle,x,y,z);
			SET_CAR_FORWARD_SPEED(vehicle,0.0f);
			SET_CAR_ON_GROUND_PROPERLY(vehicle);
			}
			else{
				FREEZE_CHAR_POSITION(Player_PED,false);
				if(IS_CHAR_IN_ANY_CAR(Player_PED)){
				Run_Ptfx(vehicle);
				SET_CAR_COORDINATES(vehicle, x, y, z);
				SET_CAR_FORWARD_SPEED(vehicle,0.0f);
				}
			}
		}		
	}
	else Alert(Error_Char_Missing,false);	
}

void Detach_pPlayer_On_Coord(void){ //most of this can prolly be removed..
	float x,y,z;
	if(IS_CHAR_IN_ANY_CAR(pPlayer)){
		GET_CHAR_COORDINATES(pPlayer,&x,&y,&z);
		WARP_CHAR_FROM_CAR_TO_COORD(pPlayer,x,y,z+1);
	}
	SET_PLAYER_CONTROL(iPlayer,true);
	//if(is_driving(pPlayer)) SET_CAR_VISIBLE(GetPlayerVeh(),true);
	SET_CAM_BEHIND_PED(pPlayer);
	CAM_RESTORE();
	SET_CHAR_COLLISION(pPlayer,true);
	SET_CHAR_VISIBLE(pPlayer,!GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_TELEPORT_INVISIBLE));
	FREEZE_CHAR_POSITION(pPlayer,false);
	DETACH_PED(pPlayer, true);
	int SpectatePlayerIndex, SpectatePreviousPlayerIndex, AttachPlayerIndex, AttachType;
	GetByteSet(SpectateAndAttachByteSet,&SpectatePlayerIndex,&SpectatePreviousPlayerIndex,&AttachPlayerIndex,&AttachType);
	//if(AttachType == 3) MD_Teleport_ID_Heading(iPlayer,2635.00, 415, 79.00,0);  //Tower Top
	SpectatePlayerIndex = MAX_PLAYERS;
	SpectatePreviousPlayerIndex = MAX_PLAYERS;
	AttachType = 0;
	AttachPlayerIndex = MAX_PLAYERS;
	CreateByteSet(SpectatePlayerIndex, SpectatePreviousPlayerIndex, AttachPlayerIndex, AttachType, &SpectateAndAttachByteSet);
}

void Detach_pPlayer(void){ //most of this can prolly be removed..
	
	float x,y,z;
	if(IS_CHAR_IN_ANY_CAR(pPlayer)){
		GET_CHAR_COORDINATES(pPlayer,&x,&y,&z);
		WARP_CHAR_FROM_CAR_TO_COORD(pPlayer,x,y,z+1);
	}
	SET_PLAYER_CONTROL(iPlayer,true);
	SET_CAM_BEHIND_PED(pPlayer);
	CAM_RESTORE();
	SET_CHAR_COLLISION(pPlayer,true);
	SET_CHAR_VISIBLE(pPlayer,!GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_TELEPORT_INVISIBLE));
	FREEZE_CHAR_POSITION(pPlayer,false);
	DETACH_PED(pPlayer, true);
	int SpectatePlayerIndex, SpectatePreviousPlayerIndex, AttachPlayerIndex, AttachType;
	GetByteSet(SpectateAndAttachByteSet,&SpectatePlayerIndex,&SpectatePreviousPlayerIndex,&AttachPlayerIndex,&AttachType);
	SpectatePlayerIndex = MAX_PLAYERS;
	SpectatePreviousPlayerIndex = MAX_PLAYERS;
	AttachType = 0;
	AttachPlayerIndex = MAX_PLAYERS;
	CreateByteSet(SpectatePlayerIndex, SpectatePreviousPlayerIndex, AttachPlayerIndex, AttachType, &SpectateAndAttachByteSet);
	//SpectatePlayerIndex = -1;
	//Attach_Type = 0;
	//SET_PED_ALPHA(pPlayer,0); //0 = invisible, 255 = solid //will slowly increment to 255 (fade in) when used.
}

bool WARP_PED_INTO_VEHICLE(const int ped, const int veh)
{
	if(!DOES_CHAR_EXIST(ped) || !DOES_VEHICLE_EXIST(veh)) return false; //safety catch
	int driver;
	bool warped;
	GET_DRIVER_OF_CAR(veh,&driver);
	if(GetByteInSet(SpectateAndAttachByteSet, ATTACH_TYPE) == 3)
	{
		Detach_pPlayer();
	}
	if(DOES_CHAR_EXIST(driver))
	{
		int i;
		for(i = 0; i < 3; i++)
		{
			if(!IS_CAR_PASSENGER_SEAT_FREE(veh,i)) continue;
			WARP_CHAR_INTO_CAR_AS_PASSENGER(ped,veh,i);
			warped = true;
			break;
		}
	}
	else
	{
		WARP_CHAR_INTO_CAR(ped,veh);
		warped = true;
	}
	if(ped == pPlayer && warped)
	{
		SET_CHAR_VISIBLE(pPlayer,!GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_TELEPORT_INVISIBLE));
	}
	return warped;
}	

void GIVE_EPISODIC_WEAPONS_TO_CHAR(const int ped, const int episode){
    int i, weapons[11];
    	REMOVE_ALL_CHAR_WEAPONS(ped);
        weapons[0] = ( (episode == 2) ? WEAPON_EPISODIC_9 : WEAPON_PISTOL);
        weapons[1] = ( (episode == 2) ? WEAPON_EPISODIC_10 : WEAPON_GRENADE);
        weapons[2] = ( (episode == 2) ? WEAPON_EPISODIC_13 : WEAPON_RLAUNCHER);
        weapons[3] = ( (episode == 2) ? WEAPON_EPISODIC_14 : WEAPON_MP5);
        weapons[4] = ( (episode == 2) ? WEAPON_EPISODIC_15 : WEAPON_M4);
        weapons[5] = ( (episode == 2) ? WEAPON_EPISODIC_1 : WEAPON_BARETTA);
        weapons[6] = ( (episode == 2) ? WEAPON_EPISODIC_16 : WEAPON_SNIPERRIFLE);
		weapons[7] = WEAPON_BASEBALLBAT;
		weapons[8] = WEAPON_KNIFE;
		weapons[9] = WEAPON_ARMOUR;
		weapons[10] = WEAPON_UNARMED;
		//GIVE_WEAPON_TO_CHAR(ped, WEAPON_UNARMED, 1, false);
		WAIT(5);
        for(i = 0; i < 11; i ++)
        {
            GIVE_WEAPON_TO_CHAR(ped,weapons[i], (i < 7 ? AMMO_MAX : 1),false);
            WAIT(5);
			//WAIT(10);
        }
        ADD_ARMOUR_TO_CHAR(ped,200);
		Run_Ptfx(ped);
}

void block_net_control_of_object(Object Blocked_Object){
	if(!In_Network)return;
	int Blocked_Object_ID;
	GET_NETWORK_ID_FROM_OBJECT(Blocked_Object, &Blocked_Object_ID);
	SET_NETWORK_ID_CAN_MIGRATE(Blocked_Object_ID, false);
}

void Block_Net_Control_Of_Entity(int model,int Entity){
	if(!In_Network)return;
	int Entity_ID;
	if(IS_THIS_MODEL_A_VEHICLE(model))GET_NETWORK_ID_FROM_VEHICLE(Entity, &Entity_ID);
	else if(IS_THIS_MODEL_A_PED(model))GET_NETWORK_ID_FROM_PED(Entity, &Entity_ID);
	else (GET_NETWORK_ID_FROM_OBJECT(Entity, &Entity_ID));
	SET_NETWORK_ID_CAN_MIGRATE(Entity_ID, false);
}

void block_net_control_of_vehicle(Vehicle Blocked_Vehicle){
	if(!In_Network)return;
	int Blocked_Vehicle_ID;
	GET_NETWORK_ID_FROM_VEHICLE(Blocked_Vehicle,&Blocked_Vehicle_ID);
	SET_NETWORK_ID_CAN_MIGRATE(Blocked_Vehicle_ID,false);
}

void GetOffset(const int xPed, float distance, float *x, float *y, float *z){
	Vector3 p;
	GET_PED_BONE_POSITION(xPed, BONE_RIGHT_HAND, distance, distance * 0.042, distance * -0.113, &p);
	*x = p.x;
	*y = p.y;
	*z = p.z;
}


void GIVE_CASH_PICKUP_TO_CHAR(const int ped, const int cash_amount){
    int money_pickup = 0;
    float x, y, z, sx, sy, sz, bearing;
	GET_CHAR_COORDINATES(ped, &x, &y, &z);
    for ( bearing = 0.0f; bearing < 271.0f; bearing += 90.0f )    {
        x += 2.5f*SIN(bearing);
        y += 2.5f*COS(bearing);
        GET_SAFE_PICKUP_COORDS(x, y, z, &sx, &sy, &sz);
        CREATE_MONEY_PICKUP( sx, sy, sz, cash_amount, TRUE, &money_pickup );
    }
}

bool SPAWN_VEHICLE(const int model, float x, float y, float z, float h, int *spawned_veh)
{
	//no deleting will take place here! we do that outside the function if needs be..
	if(!IS_MODEL_IN_CDIMAGE(model))
	{
		Alert(Error_Model_Missing,false);
		return false;
	}
	REQUEST_MODEL(model);
	while(!HAS_MODEL_LOADED(model)) WAIT(0);
	CREATE_CAR(model, x, y, z, &*spawned_veh, true); //if freeze use &*spawned_veh
	SET_CAR_HEADING(*spawned_veh, h);
	SET_CAR_CAN_BE_DAMAGED(*spawned_veh,!GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE));
	SET_CAR_CAN_BE_VISIBLY_DAMAGED(*spawned_veh,!GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE));
	MARK_MODEL_AS_NO_LONGER_NEEDED(model);
	return true;
}

bool turn_car_into_heli(int veh) // SOmething wierd with this, heli doesnt get to be invisible + when transformer attached its a bumpy ride
{
	
	
	if(!DOES_VEHICLE_EXIST(veh)) return false;
	if(!IS_CHAR_IN_CAR(pPlayer,veh))
	{
		Alert("~b~MD: ~s~You can only perform this action on your own vehicle.", false);
		return false;
	}
	float x,y,z,h,speed;
	int spawned_heli;
	GET_CHAR_COORDINATES_HEADING(pPlayer,&x,&y,&z,&h);
	GET_CAR_SPEED(veh, &speed);
	if(!SPAWN_VEHICLE(MODEL_ANNIHILATOR, x, y, z, h, &spawned_heli)) return false; //This doesnt make sence does it ?
	WARP_CHAR_FROM_CAR_TO_CAR(pPlayer, spawned_heli, -1); //-1 = drivers seat
	SET_CAR_COLLISION(veh,false);
	ATTACH_CAR_TO_CAR(veh, spawned_heli, false, 0, 0, 0, 0, 0, 0);
	SET_HELI_BLADES_FULL_SPEED(spawned_heli);	
	SET_CAR_FORWARD_SPEED(spawned_heli,speed);
	SET_CAR_VISIBLE(spawned_heli,false);
	SET_CHAR_VISIBLE(pPlayer,false); //won't this stop name above head showing?
	SET_CAR_FORWARD_SPEED(spawned_heli,speed);
	//MARK_CAR_AS_NO_LONGER_NEEDED(&spawned_heli); //make the game able to delete it if it's not used..
	Alert("~b~MD: ~s~Transformation now able to fly",false);
	return true;
}

void Delete_Attached_Cars(void){
	Vehicle Attached_Vehicle;
	int Search_Vehicle_id;
	for(Search_Vehicle_id = 0; Search_Vehicle_id < 8000; Search_Vehicle_id++){
		if(!DOES_VEHICLE_EXIST_WITH_NETWORK_ID(Search_Vehicle_id)) continue;
		GET_VEHICLE_FROM_NETWORK_ID(Search_Vehicle_id,&Attached_Vehicle);	
		if(!IS_CAR_ATTACHED(Attached_Vehicle)) continue;
		if(Attached_Vehicle == Personal_Vehicle) continue;		
		if(!HAS_CONTROL_OF_NETWORK_ID(Search_Vehicle_id)) continue;		
		DELETE_CAR(&Attached_Vehicle);		
	}	
}

void Delete_Attached_Cars_New(int Player_ID){
	Ped Player_PED;
	if(PLAYER_HAS_CHAR(Player_ID)) GET_PLAYER_CHAR(Player_ID, &Player_PED);
	else { Alert("~b~MD: ~s~Player has no character, failed.",false); return; }
	if(Player_ID != iPlayer){
		char * buffer[32];
		Strcpy(buffer, "~b~MD: ~s~");	
		Strcat(buffer, "Deleting transformer vehicles on: "); 
		PLAYER_NAME_WITH_COLOUR(Player_ID, &buffer);
	}
	Vehicle Attached_Vehicle;
	int Search_Vehicle_id, i;
	float x,y,z,tx,ty,tz;
	float distance;
	GET_CHAR_COORDINATES(Player_PED,&x,&y,&z); //!OK : Get the coordinates
	if(!IS_CHAR_IN_ANY_CAR(Player_PED)){
		if(Player_ID == iPlayer){
		Alert(Error_Personal_Vehicle,false);
		return;
		}
		else{
		char * buffer[32];
		Strcpy(buffer, "~b~MD: ");
		PLAYER_NAME_WITH_COLOUR(Player_ID, &buffer); 
		Strcat(buffer, "~s~is not in a vehicle."); 	
		Alert(buffer, false);
		return;		
		}	
	}
	
	
	
	for(i = 0; i < 7; i++){
		for(Search_Vehicle_id = 0; Search_Vehicle_id < 8000; Search_Vehicle_id++){
			if(!DOES_VEHICLE_EXIST_WITH_NETWORK_ID(Search_Vehicle_id)) continue;
			GET_VEHICLE_FROM_NETWORK_ID(Search_Vehicle_id,&Attached_Vehicle);	
			if(!IS_CAR_ATTACHED(Attached_Vehicle)) continue;
			GET_CAR_COORDINATES(Attached_Vehicle,&tx,&ty,&tz);
			GET_DISTANCE_BETWEEN_COORDS_3D(x,y,z,tx,ty,tz,&distance);
			if(distance > 25.0f) continue;
			if(Attached_Vehicle == Personal_Vehicle) continue;		
			REQUEST_CONTROL_OF_NETWORK_ID(Search_Vehicle_id);
			if(!HAS_CONTROL_OF_NETWORK_ID(Search_Vehicle_id)) continue;		
			DELETE_CAR(&Attached_Vehicle);		
		}	
		WAIT(80);
	}
	//Strcat(buffer, "~s~Succesfull!"); 	
	//Alert(buffer, false);
}




void Vehicle_Transformer(int Player_ID, const int Transformer_Mode){
	Ped Player_Char;
	Vehicle Spawn_Vehicle,Transformer_Vehicle;
	Model Transformer_Model;
	float Spawn_x, Spawn_y, Spawn_z, Spawn_h, Spawn_s;
	if(PLAYER_HAS_CHAR(Player_ID))GET_PLAYER_CHAR(Player_ID, &Player_Char);
	else{
	Alert(Error_Char_Missing,false);
	return;
	}
	if(!IS_CHAR_IN_ANY_CAR(Player_Char)){
		if(Player_ID == iPlayer){
		Alert(Error_Personal_Vehicle,false);
		return;
		}
		else{
		char * buffer[32];
		Strcpy(buffer, "~b~MD: ~s~ ");
		PLAYER_NAME_WITH_COLOUR(Player_ID, &buffer); 
		Strcat(buffer, "~s~is not in a vehicle."); 	
		Alert(buffer, false);
		return;		
		}	
	}
	/**Get the data*/
	if(Player_ID == iPlayer){
		GET_CHAR_COORDINATES(pPlayer,&Spawn_x,&Spawn_y,&Spawn_z);
		GET_CAR_CHAR_IS_USING(pPlayer,&Spawn_Vehicle);
	}
	else{
		//Might need to use network control / Net players come later //nope wouldn't as only attaching, would only need that to set them invisi but meh
		GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(Player_Char, 0, 6, 0, &Spawn_x, &Spawn_y, &Spawn_z);
		GET_CAR_CHAR_IS_USING(Player_Char,&Spawn_Vehicle);
	}
	GET_CAR_MODEL(Spawn_Vehicle,&Transformer_Model);
	SET_CAR_VISIBLE(Spawn_Vehicle,false);	
	int i,upgrade[10];
	for(i = 0;i<10;i++)
	{
		upgrade[i] = IS_VEHICLE_EXTRA_TURNED_ON(Spawn_Vehicle,i);
	}
	if(IS_MODEL_IN_CDIMAGE(Transformer_Model))REQUEST_MODEL(Transformer_Model);
	else {
	Alert(Error_Model_Missing,false);
	return;	
	}	
	while(!HAS_MODEL_LOADED(Transformer_Model)) WAIT(0);	
	int Transformer_Num;
	float rotation = 0.0f;
	Delete_Attached_Cars_New(Player_ID);
	//Delete_Attached_Cars();
	//WAIT(100);
	//MD_VEHICLE_SPAWNER_ON_ID(iPlayer ,Transformer_Model);
	WAIT(80);
	int netID;
	for(Transformer_Num = 0; Transformer_Num < 12; Transformer_Num++) //Nathan wuz here
	{
		rotation += 30.0f;
		CREATE_CAR(Transformer_Model,Spawn_x,Spawn_y,Spawn_z,&Transformer_Vehicle,true);
		//WAIT(0);
		GET_NETWORK_ID_FROM_VEHICLE(Transformer_Vehicle,&netID);
		SET_NETWORK_ID_CAN_MIGRATE(Transformer_Vehicle,false);
		SET_CAR_COLLISION(Transformer_Vehicle,false);
		FORCE_CAR_LIGHTS(Transformer_Vehicle,2);
		//WAIT(0);
		SET_VEH_HAZARDLIGHTS(Transformer_Vehicle,true);
		SET_VEH_INDICATORLIGHTS(Transformer_Vehicle,true);
		SET_TAXI_LIGHTS(Transformer_Vehicle,true);
		for(i = 0; i < 10; i++)
		{
			TURN_OFF_VEHICLE_EXTRA(Transformer_Vehicle,i,!upgrade[i]);
			//if(i == 4) WAIT(0);
		}
		SWITCH_CAR_SIREN(Transformer_Vehicle,true);
		switch(Transformer_Mode)
		{
			case 1: ATTACH_CAR_TO_CAR(Transformer_Vehicle,Spawn_Vehicle, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, rotation); break;
			case 2: ATTACH_CAR_TO_CAR(Transformer_Vehicle,Spawn_Vehicle, 0, 0.0f, 0.0f, 0.0f, 0.0f, rotation, 0.0f); break;
			case 3: ATTACH_CAR_TO_CAR(Transformer_Vehicle,Spawn_Vehicle, 0, 0.0f, 0.0f, 0.0f, rotation, 0.0f, 0.0f); break;
		}
		//WAIT(0);
	}	
	MARK_MODEL_AS_NO_LONGER_NEEDED(Transformer_Model);
}

void SPECTATE_FIND_NEW_PLAYER_OR_DISABLE(void){
	int i,tmp_ped;
	for(i = 0; i < MAX_PLAYERS; i++){
		if(Player_Display_Selection(i)) continue;	
		
		GET_PLAYER_CHAR(i,&tmp_ped);		
		if(!DOES_CHAR_EXIST(tmp_ped)) continue;
		
		SetByteSet(&SpectateAndAttachByteSet, SPECTATE_PLAYER_INDEX, i);
		SetByteSet(&SpectateAndAttachByteSet, ATTACH_PLAYER_INDEX, i);
		//SpectatePlayerIndex = i;
		//Attach_Player_ID = i;
		return;
	}

	SetByteSet(&SpectateAndAttachByteSet, ATTACH_TYPE, 0);
	SetByteSet(&SpectateAndAttachByteSet, SPECTATE_PLAYER_INDEX, MAX_PLAYERS);
	//SpectatePlayerIndex = -1;
	//Attach_Type = 0;
	DISABLE_SPECTATE(true);
	//Detach_pPlayer();
}

void SPECTATE_PLAYER_LOOP(void)
{
	int SpectatePlayerIndex, SpectatePreviousPlayerIndex, AttachPlayerIndex, AttachType;
	GetByteSet(SpectateAndAttachByteSet,&SpectatePlayerIndex,&SpectatePreviousPlayerIndex,&AttachPlayerIndex,&AttachType);
	#ifdef Admin
	//if(AdminPlayerIndexActingUpon != -1)
	if(GetByteInSet(AdminByteSet, ADMIN_BYTE_SET_INDEX_ACTING_UPON) != MAX_PLAYERS)
	{
		return;
	}
	#endif
	if(SpectatePlayerIndex == MAX_PLAYERS) return; //disabled
	//GET_PLAYER_CHAR(SpectatePlayerIndex,&spectate_ped);
	//may need to move skip invalid above get player char if frez still occurs
	if(Invalid_Player(SpectatePlayerIndex) || !PLAYER_HAS_CHAR(SpectatePlayerIndex) || SpectatePlayerIndex == iPlayer)
	{
		//SPECTATE_FIND_NEW_PLAYER_OR_DISABLE();
		DISABLE_SPECTATE(true);
		return; //yes return, will process again next loop :)
	}
	SET_CHAR_VISIBLE(pPlayer,false);
	SET_CHAR_COLLISION(pPlayer,false);
	if(IS_CHAR_IN_ANY_CAR(pPlayer))
	{
		REMOVE_CHAR_FROM_CAR_MAINTAIN_POSITION(pPlayer,GetPlayerVeh());
	}
	SET_PLAYER_CONTROL(iPlayer,false);
	if(SpectatePreviousPlayerIndex != SpectatePlayerIndex) //used for THIS ONLY! //should prolly go off something else cuz if they spam change model streaming is gonna get spammed on/off too..
	{
		ALLOW_GAME_TO_PAUSE_FOR_STREAMING(true);
		SWITCH_STREAMING(false);
		//could use attach player id for comparison maybe.. hmm
		SpectatePreviousPlayerIndex = SpectatePlayerIndex;
		SetBit(MD_Misc_OptionsBitSet, MD_MISC_SPECTATE_STREAMING_BOOL, true);
	}
	else
	{
		if(GetBit(MD_Misc_OptionsBitSet, MD_MISC_SPECTATE_STREAMING_BOOL))
		{
			SWITCH_STREAMING(true);
			SetBit(MD_Misc_OptionsBitSet, MD_MISC_SPECTATE_STREAMING_BOOL, false);
		}
	}
	AttachType = 3;
	AttachPlayerIndex = SpectatePlayerIndex;
	//create quicker than setting individual as it gets and restores like i do here :) (better)
	CreateByteSet(SpectatePlayerIndex, SpectatePreviousPlayerIndex, AttachPlayerIndex, AttachType, &SpectateAndAttachByteSet);
	int spectate_ped = PLAYER_CHAR(SpectatePlayerIndex);
	if(DOES_CAM_EXIST(scriptedCam))
	{
		uint pos[4];
		GET_POSITION_OF_ANALOGUE_STICKS(0,&pos[0],&pos[1],&pos[2],&pos[3]);
		zoom += 0.01f * pos[1]; 
		angle += 0.035f * pos[2];  //maybe 0.04f (slightly faster than up/down due to players moving around n shit
		//we could even probably increase the cams movement speed based on how fast the player you're spectating is going, idk, maybe in the future. - Nathan
		angle2 = ( IS_LOOK_INVERTED() ? (angle2 - (0.035f * pos[3])) : (angle2 + (0.035f * pos[3])) );
		
		if(zoom < 2) zoom = 2; 
		else if(zoom > 50) zoom = 50;
		
		if(angle2 < 0) angle2 = 0; 
		else if(angle2 > 85) angle2 = 85;
		 
		UNATTACH_CAM(scriptedCam); 
		ATTACH_CAM_TO_PED(scriptedCam, spectate_ped); 
		SET_CAM_ATTACH_OFFSET(scriptedCam, zoom*SIN(angle)*COS(angle2), zoom*COS(angle)*COS(angle2), zoom*SIN(angle2)); 
		POINT_CAM_AT_PED(scriptedCam, spectate_ped);
		if(IS_BUTTON_PRESSED(0, BUTTON_L)) zoom += 0.3f;
		if(IS_BUTTON_PRESSED(0, BUTTON_R)) zoom -= 0.3f;
	}
	else
	{
		CREATE_CAM(14, &scriptedCam); 
		SET_CAM_ACTIVE(scriptedCam, 1); 
		SET_CAM_PROPAGATE(scriptedCam, 1); 
		ACTIVATE_SCRIPTED_CAMS(1, 1);
		ATTACH_CAM_TO_PED(scriptedCam, spectate_ped); 
	}

	bool L1_IS_PRESSED = IS_BUTTON_PRESSED(0,BUTTON_L1);
	if(L1_IS_PRESSED && IS_BUTTON_JUST_PRESSED(0,BUTTON_R1 ))
	{
		//Detach_pPlayer(); //works
		DISABLE_SPECTATE(true);
		return;
	}
	else if(L1_IS_PRESSED && IS_BUTTON_JUST_PRESSED(0,BUTTON_R2 ))
	{
		//Detach_pPlayer();	//Seems to freeze
		Teleport_iPlayer_To_PlayerIndex(SpectatePlayerIndex, false);
		DISABLE_SPECTATE(false);
		return;	
	}
	else if(L1_IS_PRESSED && IS_BUTTON_JUST_PRESSED(0,BUTTON_L2 ))
	{
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
}

void Extended_Player_Scan(void){
	int Ghost_Scan_ID;
	float player_x, player_y, player_z;
	Player Playerchar;
	//player_count = 0; 
	for(Ghost_Scan_ID = 0;Ghost_Scan_ID < MAX_PLAYERS ;Ghost_Scan_ID++){
		if(Invalid_Player(Ghost_Scan_ID))continue;
		if(Ghost_Scan_ID == iPlayer)continue;
		if(!IS_NETWORK_PLAYER_ACTIVE(Ghost_Scan_ID)){
			if(PLAYER_HAS_CHAR(Ghost_Scan_ID)){
			GET_PLAYER_CHAR(Ghost_Scan_ID,&Playerchar);
			//MD_Spectate_Player(Playerchar);
			Alert_Number(Ghost_Scan_ID,false);
			WAIT(1000);
			Alert_Two("~BLIP_76~ ~COL_NET_4~ Network Ghost Found ",GET_PLAYER_NAME(Ghost_Scan_ID),false);
			WAIT(1000);
			}
			else{
				Alert_Number(Ghost_Scan_ID,false);
				WAIT(1000);
				if(PLAYER_HAS_CHAR(Ghost_Scan_ID)){
				GET_PLAYER_CHAR(Ghost_Scan_ID,&Playerchar);			
				//MD_Spectate_Player(Playerchar);	
				Alert_Two("~BLIP_76~ ~COL_NET_4~ Network Ghost Found ",GET_PLAYER_NAME(Ghost_Scan_ID),false);
				}
				if(!PLAYER_HAS_CHAR(Ghost_Scan_ID))Alert_Two("~BLIP_76~ ~COL_NET_4~ Invalid Player:~w~",GET_PLAYER_NAME(Ghost_Scan_ID),false);
				WAIT(1000);
				if (PLAYER_WANTS_TO_JOIN_NETWORK_GAME(Ghost_Scan_ID))Alert_Two("~BLIP_76~ ~COL_NET_3~ * Player is in Joining Game Status :~w~",GET_PLAYER_NAME(Ghost_Scan_ID),false);
				else Alert_Two("~BLIP_76~ ~COL_NET_4~ Not Joining Game Status:~w~",GET_PLAYER_NAME(Ghost_Scan_ID),false);
				WAIT(1000);			
				if(NETWORK_PLAYER_HAS_HEADSET(Ghost_Scan_ID))Alert_Two("~BLIP_76~ ~COL_NET_3~ Ghost Has Headset :~w~",GET_PLAYER_NAME(Ghost_Scan_ID),false);
				else Alert_Two("~BLIP_76~ ~COL_NET_4~ No Headset Detected :~w~",GET_PLAYER_NAME(Ghost_Scan_ID),false);
				//WAIT(1000);	
				//if(NETWORK_PLAYER_HAS_KEYBOARD(Ghost_Scan_ID))Alert_Two("~BLIP_76~ ~COL_NET_3~ Ghost Has Keyboard :~w~",GET_PLAYER_NAME(Ghost_Scan_ID),false);
				//else Alert_Two("~BLIP_76~ ~COL_NET_4~ No Keyboard Detected :~w~",GET_PLAYER_NAME(Ghost_Scan_ID),false);
				//if(HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(Ghost_Scan_ID))Alert_Two("~BLIP_76~ ~COL_NET_4~ Damaged peds :~w~",GET_PLAYER_NAME(Ghost_Scan_ID),false); //Fucks the menu
				//WAIT(1000);
				//if(HAS_PLAYER_DAMAGED_AT_LEAST_ONE_VEHICLE(Ghost_Scan_ID))Alert_Two("~BLIP_76~ ~COL_NET_4~ Damaged vehicles :~w~",GET_PLAYER_NAME(Ghost_Scan_ID),false); //Fucks the menu
				WAIT(1000);
				if(IS_PLAYER_CONTROL_ON(Ghost_Scan_ID))Alert_Two("~BLIP_76~ ~COL_NET_4~ Player control on :~w~",GET_PLAYER_NAME(Ghost_Scan_ID),false);
				WAIT(1000);
				if(IS_PLAYER_TARGETTING_ANYTHING(Ghost_Scan_ID))Alert_Two("~BLIP_76~ ~COL_NET_4~ Targeting :~w~",GET_PLAYER_NAME(Ghost_Scan_ID),false);
				WAIT(1000);
				if(IS_PLAYER_SCRIPT_CONTROL_ON(Ghost_Scan_ID))Alert_Two("~BLIP_76~ ~COL_NET_4~ Script control on :~w~",GET_PLAYER_NAME(Ghost_Scan_ID),false);
				WAIT(1000);
				if(IS_PLAYER_READY_FOR_CUTSCENE(Ghost_Scan_ID))Alert_Two("~BLIP_76~ ~COL_NET_4~ Ready For cutscene :~w~",GET_PLAYER_NAME(Ghost_Scan_ID),false);
				WAIT(1000);
				if(IS_PLAYER_IN_REMOTE_MODE(Ghost_Scan_ID))Alert_Two("~BLIP_76~ ~COL_NET_4~ Remote mode :~w~",GET_PLAYER_NAME(Ghost_Scan_ID),false);
				WAIT(1000);
				//if(IS_PLAYER_VEHICLE_ENTRY_DISABLED(Ghost_Scan_ID))Alert_Two("~BLIP_76~ ~COL_NET_4~ Vehicle entry disabled :~w~",GET_PLAYER_NAME(Ghost_Scan_ID),false);;
				//WAIT(1000);
				if(IS_PLAYER_PLAYING(Ghost_Scan_ID))Alert_Two("~BLIP_76~ ~COL_NET_4~ IS_PLAYER_PLAYING NUB YOU MISSED A PRINT :D - Nathan :~w~",GET_PLAYER_NAME(Ghost_Scan_ID),false);	
				WAIT(5000);
			}
		}		
	}
	Alert("~BLIP_76~ ~w~ Scan Performed",false);
}

void Vehicle_Color_Modification(const int player,const int vehicle,const int color1, const int color2, const int color3, const int color4){
	if(GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_UNIFIED_COLOUR)){ //again makes no sense..
		CHANGE_CAR_COLOUR(vehicle, color1, color2);
		SET_EXTRA_CAR_COLOURS(vehicle, color3, color4);
	}
	else{  
		int rand;
		GENERATE_RANDOM_INT_IN_RANGE(0,134,&rand);
		CHANGE_CAR_COLOUR(vehicle,color1,rand);
		SET_EXTRA_CAR_COLOURS(vehicle,rand,rand); 
	}	
}



void create_big_explosion(float fX,float fY,float fZ){
	ADD_EXPLOSION(fX,fY,fZ + 12.5,EXPLOSION_SHIP_DESTROY,10.0f,true,false,0.7f);
	ADD_EXPLOSION(fX,fY,fZ,EXPLOSION_SHIP_DESTROY,10.0f,true,false,0.7f);
	ADD_EXPLOSION(fX + 20.0,fY,fZ,EXPLOSION_SHIP_DESTROY,10.0f,true,false,0.7f);
	ADD_EXPLOSION(fX + 40.0,fY,fZ,EXPLOSION_SHIP_DESTROY,10.0f,true,false,0.7f);
	WAIT(100);
	ADD_EXPLOSION(fX,fY + 20.0,fZ,EXPLOSION_SHIP_DESTROY,10.0f,true,false,0.7f);
	ADD_EXPLOSION(fX,fY + 30.0,fZ,EXPLOSION_SHIP_DESTROY,10.0f,true,false,0.7f);
	ADD_EXPLOSION(fX - 20.0,fY,fZ,EXPLOSION_SHIP_DESTROY,10.0f,true,false,0.7f);
	ADD_EXPLOSION(fX - 40.0,fY,fZ,EXPLOSION_SHIP_DESTROY,10.0f,true,false,0.7f);
	WAIT(100);
	ADD_EXPLOSION(fX,fY + 20.0,fZ,EXPLOSION_SHIP_DESTROY,10.0f,true,false,0.7f);
	ADD_EXPLOSION(fX,fY - 40.0,fZ,EXPLOSION_SHIP_DESTROY,10.0f,true,false,0.7f);
	ADD_EXPLOSION(fX + 12.5,fY + 12.5,fZ,EXPLOSION_SHIP_DESTROY,10.0f,true,false,0.7f);
	WAIT(100);
	ADD_EXPLOSION(fX + 25.0,fY + 25.0,fZ,EXPLOSION_SHIP_DESTROY,10.0f,true,false,0.7f);
	ADD_EXPLOSION(fX - 12.5,fY - 12.5,fZ,EXPLOSION_SHIP_DESTROY,10.0f,true,false,0.7f);
	ADD_EXPLOSION(fX - 25.0,fY - 25.0,fZ,EXPLOSION_SHIP_DESTROY,10.0f,true,false,0.7f);

}

void spawn_car(uint model){
	if(IS_MODEL_IN_CDIMAGE(model)){
		//Check_Model(model);
		REQUEST_MODEL(model);
		int pveh,driver;
		float x,y,z,h,s;
		bool speed = false;
		
		GET_CHAR_COORDINATES(pPlayer,&x,&y,&z);
		GET_CHAR_HEADING(pPlayer,&h);
			if(Menu_Ptfx){
			int rand;
			GENERATE_RANDOM_INT_IN_RANGE(0, 5, &rand);
			char* effect[6];
			effect[0] = "qub_lg_explode_blue";
			effect[1] = "qub_lg_explode_yellow";
			effect[2] = "qub_lg_explode_red";
			effect[3] = "qub_lg_explode_purple";
			effect[4] = "qub_lg_explode_orange";
			effect[5] = "qub_lg_explode_green";
			START_PTFX_ON_PED(effect[rand], pPlayer, 0, 0, 0, 0, 0, 0, 1);
			}	
			if(IS_CHAR_IN_ANY_CAR(pPlayer)){
				GET_CAR_CHAR_IS_USING(pPlayer,&pveh);
				GET_CAR_SPEED(pveh,&s);
				speed = true;
				GET_DRIVER_OF_CAR(pveh,&driver);
				WARP_CHAR_FROM_CAR_TO_COORD(pPlayer,x,y,z);
				if(!DOES_CHAR_EXIST(driver) || pPlayer == driver || !IS_NETWORK_SESSION()){
					clear_objects_on_car(pveh);
					DELETE_CAR(&pveh);
				}
			}
			while(!HAS_MODEL_LOADED(model)) WAIT(0);
				CREATE_CAR(model,x,y,z,&pveh,true);
				MARK_MODEL_AS_NO_LONGER_NEEDED(model);
		#ifndef MasterMenu
		if(GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_PERSONAL_COLOUR))
		{
			//BUDDY IF YOU WANT THIS BACK TELL ME AND I'LL CREATE A BYTESET FOR IT GIVEN ALL VALUES ARE FROM 0 - 255?
		//	CHANGE_CAR_COLOUR(pveh, Personalcol1,Personalcol1);
		//	SET_EXTRA_CAR_COLOURS(pveh, Personalcol2, Personalcol1);
		}
		
		if(GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_ALL_UPGRADES)){
			int i;
			for(i=0;i<10;i++){
				TURN_OFF_VEHICLE_EXTRA(pveh, i, false);
			}
		}
		#endif
		SET_CAR_ENGINE_ON(pveh,true,true);
		WARP_CHAR_INTO_CAR(pPlayer,pveh);
		LOCK_CAR_DOORS(pveh,VEHICLE_DOOR_UNLOCKED);
		SET_CAR_HEADING(pveh,h);
		SET_VEHICLE_DIRT_LEVEL(pveh,0);
		WASH_VEHICLE_TEXTURES(pveh,0);
		SET_CAR_CAN_BE_DAMAGED(pveh,!GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE));
		SET_CAR_CAN_BE_VISIBLY_DAMAGED(pveh,!GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE));
		SET_CAN_BURST_CAR_TYRES(pveh,!GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE));
		#ifndef MasterMenu
		if(GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_DIRT)){
			SET_VEHICLE_DIRT_LEVEL(pveh,15.9);
			WASH_VEHICLE_TEXTURES(pveh,255);
		}
		SWITCH_CAR_SIREN(pveh,GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_SIREN));
		#endif
		if(speed){
			SET_CAR_FORWARD_SPEED(pveh,s);
		}
		
	}
	else Alert(Error_Model_Missing,false);
}

void spawn_eight_of_vehicle_model(int model1, int model2, int model3, int model4, int model5, int model6, int model7, int model8){ //USED IN CONTENT BUILDER
	
	int j;
	int INIT[9];
	INIT[1] = model1;
	INIT[2] = model2;
	INIT[3] = model3;
	INIT[4] = model4;
	INIT[5] = model5;
	INIT[6] = model6;
	INIT[7] = model7;
	INIT[8] = model8;
		for(j=1;j<9;j++){
			//Check_Model(INIT[j]);	
			REQUEST_MODEL(INIT[j]);
			if(!IS_MODEL_IN_CDIMAGE(INIT[j])){
				Alert(Error_Model_Missing,false);
				return;
			}
		}
	Car car;
	Object lights;
	float h,x,y,z;
	int i;
	if(!IS_THIS_MODEL_A_HELI(INIT[1])){
		if(IS_CHAR_IN_ANY_CAR(pPlayer)) GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(pPlayer, 9.5f, 4, 0, &x,&y,&z);
			else GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(pPlayer, 9.3, 4, 0, &x,&y,&z);
	}
	else GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(pPlayer,24,16,0,&x,&y,&z);
	GET_CHAR_HEADING(pPlayer,&h); //attempt uber l33t code here.
	for(j=1;j<9;j++){
	while(!HAS_MODEL_LOADED(INIT[j])) WAIT(0);
	}
	for(i = 1;i<9;i++){
		CREATE_CAR(INIT[i],x,y,z,&car,true);
		SET_CAR_HEADING(car,h);

			int colours[14],rand;
			colours[0] = 128; //yellow
			colours[1] = 120; //cream
			colours[2] = 107; //brown
			colours[3] = 59; //green
			colours[4] = 132; //yellow
			colours[5] = 129; //lightblue
			colours[6] = 125; //pink
			colours[7] = 135; //white
			colours[8] = 30; //red
			colours[9] = 46; 
			colours[10] = 65; //blue
			colours[11] = 71; //blue
			colours[12] = 76; //blue
			colours[13] = 103; //
			
	  
		GENERATE_RANDOM_INT_IN_RANGE(0,13,&rand);
	 
		if(INIT[i] == MODEL_SULTANRS){
			CHANGE_CAR_COLOUR(car,0,colours[rand]); 
			SET_EXTRA_CAR_COLOURS(car,colours[rand],colours[rand]);
		}
		else{
			int dick;
			GENERATE_RANDOM_INT_IN_RANGE(0,13,&dick);
			CHANGE_CAR_COLOUR(car,colours[rand],colours[dick]);
			int cock;
			GENERATE_RANDOM_INT_IN_RANGE(0,13,&rand);
			GENERATE_RANDOM_INT_IN_RANGE(0,13,&cock);
			SET_EXTRA_CAR_COLOURS(car,colours[rand],colours[cock]);
		}
		float dirt_level;	  
      WASH_VEHICLE_TEXTURES(car,255);
	  
		for(j=0;j<=9;j++){
			TURN_OFF_VEHICLE_EXTRA(car,j,false);
		}
			SET_CAR_ENGINE_ON(car,true,true);
			SET_VEHICLE_DIRT_LEVEL(car,0);
			WASH_VEHICLE_TEXTURES(car,0);
				//SET_CAR_PROOFS(car, true, true, true, true, true);
				SET_CAR_CAN_BE_DAMAGED(car, !GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_DAMAGE)); //var name here makes no sense to me buddy..
				SET_CAR_CAN_BE_VISIBLY_DAMAGED(car, !GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_DAMAGE));
				SET_CAN_BURST_CAR_TYRES(car,!GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_DAMAGE));
				SET_CAR_STRONG(car,GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_DAMAGE));
		SWITCH_CAR_SIREN(car,GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_SIREN));
		if(GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_DIRT)){
				SET_VEHICLE_DIRT_LEVEL(car,15.9f);
				WASH_VEHICLE_TEXTURES(car,255);
		}
		//if(add_neons){
		
		//if(i == 1 || i == 3 || i == 5 || i == 7)red_neon_on_vehicle(car); 
		//if(i == 2 || i == 4 || i == 6 || i == 8)blue_neon_on_vehicle(car);
		//}
  
		if(!IS_THIS_MODEL_A_HELI(INIT[i])){
			if(i>4) GET_OFFSET_FROM_CAR_IN_WORLD_COORDS(car, 6, 0, 0, &x, &y, &z);
			else if(i==4) GET_OFFSET_FROM_CAR_IN_WORLD_COORDS(car, 0, -10, 0, &x, &y, &z);
			else if(i<4) GET_OFFSET_FROM_CAR_IN_WORLD_COORDS(car, -6, 0, 0, &x, &y, &z);
		}
		else if(INIT[i] == MODEL_AMBULANCE || INIT[i] == MODEL_STOCKADE || INIT[i] == MODEL_BUZZARD){
			if(i>4) GET_OFFSET_FROM_CAR_IN_WORLD_COORDS(car, 10, 0, 0, &x, &y, &z);
			else if(i==4) GET_OFFSET_FROM_CAR_IN_WORLD_COORDS(car, 0, -16, 0, &x, &y, &z);
			else if(i<4) GET_OFFSET_FROM_CAR_IN_WORLD_COORDS(car, -10, 0, 0, &x, &y, &z);
		}
		else{ 
			if(i>4) GET_OFFSET_FROM_CAR_IN_WORLD_COORDS(car, 17, 0, 0, &x, &y, &z);
			else if(i==4) GET_OFFSET_FROM_CAR_IN_WORLD_COORDS(car, 0, -24, 0, &x, &y, &z);
			else if(i<4) GET_OFFSET_FROM_CAR_IN_WORLD_COORDS(car, -17, 0, 0, &x, &y, &z);
		}
  
	}
	for(j=1;j<9;j++){
		MARK_MODEL_AS_NO_LONGER_NEEDED(INIT[j]);
	}
}


void spawn_boat(void){
	spawn_car(MODEL_SQUALO);
}


void delete_peds(const int desired_distance){
	int i;
	Ped networkPed;
	float x, y, z, x2, y2, z2, distance;
	for(i = 0; i < 3500; i++){
		if(!DOES_PED_EXIST_WITH_NETWORK_ID(i)) continue;
		if(i % 100 == 1) continue; //check for network players
		GET_PED_FROM_NETWORK_ID(i, &networkPed);
		GET_CHAR_COORDINATES(pPlayer, &x, &y, &z);
		GET_CHAR_COORDINATES(networkPed, &x2, &y2, &z2);
		GET_DISTANCE_BETWEEN_COORDS_3D(x2, y2, z2, x, y, z, &distance);
		if(distance > desired_distance) continue;
			if(network_control(i)){
				DELETE_CHAR(&networkPed);
			}
			WAIT(10);
	}
}
void delete_vehicles(const int desired_distance,const bool abandoned_only,const char* type){
	int mode;
	if(COMPARE_STRING(type,"all")) mode = 1;
	else if(COMPARE_STRING(type,"cars")) mode = 2;
	else if(COMPARE_STRING(type,"boats")) mode = 3;
	else if(COMPARE_STRING(type,"helis")) mode = 4;
	else if(COMPARE_STRING(type,"bikes")) mode = 5;
	int i,vehicle;
	float distance,x,y,z,mx,my,mz;
	Ped driver;
	int model;
	GET_CHAR_COORDINATES(pPlayer,&mx,&my,&mz);
	int DelObj;
	for(DelObj = 0;DelObj < 9;DelObj++){
	for(i=0;i<5001;i++){
		if(!DOES_VEHICLE_EXIST_WITH_NETWORK_ID(i)) continue;
		GET_VEHICLE_FROM_NETWORK_ID(i,&vehicle);
		if(abandoned_only){
			GET_DRIVER_OF_CAR(vehicle,&driver);
			if(DOES_CHAR_EXIST(driver)) continue;
		}
		GET_DRIVER_OF_CAR(vehicle,&driver);
		if(mode != 1){
			GET_CAR_MODEL(vehicle,&model);
			if(mode == 2){
				if(!IS_THIS_MODEL_A_CAR(model)) continue;
			}
			else if(mode == 3){
				if(!IS_THIS_MODEL_A_BOAT(model)) continue;
			}
			else if(mode == 4){
				if(!IS_THIS_MODEL_A_HELI(model)) continue;
			}
			else if(mode == 5){
				if(!IS_THIS_MODEL_A_BIKE(model)) continue;
			}	
		}
		GET_CAR_COORDINATES(vehicle,&x,&y,&z);
		GET_DISTANCE_BETWEEN_COORDS_3D(x,y,z,mx,my,mz,&distance);
		if(distance > desired_distance) continue;
		REQUEST_CONTROL_OF_NETWORK_ID(i);
		if(!HAS_CONTROL_OF_NETWORK_ID(i)) continue;
		if(driver == pPlayer) continue;
		Run_Ptfx(vehicle);
		clear_objects_on_car(vehicle);
		DELETE_CAR(&vehicle);
		}
	WAIT(30);
	}
}

void teleport_on_foot(float x,float y,float z,float h){
	FREEZE_CHAR_POSITION(pPlayer,false);
	if(IS_CHAR_IN_ANY_CAR(pPlayer) && !is_driving(pPlayer)) WARP_CHAR_FROM_CAR_TO_COORD(pPlayer,x,y,z);
	else{ 
	if(!IS_CHAR_IN_ANY_CAR(pPlayer)) SET_CHAR_COORDINATES(pPlayer,x,y,z); 
	}
	if(!IS_CHAR_IN_ANY_CAR(pPlayer)){
		SET_CHAR_HEADING(pPlayer,h);
		SET_GAME_CAM_HEADING(0.0); //whai not use h? - Nathan
		LOAD_ALL_OBJECTS_NOW();
		REQUEST_COLLISION_AT_POSN(x,y,z);
	}
}

void delete_objects(const int desired_distance){
	int i,object;
	float distance,x,y,z,mx,my,mz;
	GET_CHAR_COORDINATES(pPlayer,&mx,&my,&mz);
	int DelObj;
	for(DelObj = 0;DelObj < 9;DelObj++){
		for(i=0;i<8000;i++){
			if(!DOES_OBJECT_EXIST_WITH_NETWORK_ID(i)) continue;
			GET_OBJECT_FROM_NETWORK_ID(i,&object);
			GET_OBJECT_COORDINATES(object,&x,&y,&z);
			GET_DISTANCE_BETWEEN_COORDS_3D(x,y,z,mx,my,mz,&distance);
			if(distance > desired_distance) continue;
			REQUEST_CONTROL_OF_NETWORK_ID(i);
			if(!HAS_CONTROL_OF_NETWORK_ID(i)) continue;
			DELETE_OBJECT(&object);
			MARK_OBJECT_AS_NO_LONGER_NEEDED(&object);
		}
		WAIT(5);
	}
}

void create_mobile_mapbase(const int player,const int model,float infront, float off_z, float off_h, const int visible, const int collision){ //HOOK for mobile maps --> First
	float h, x, y, z,zz;
	GET_CHAR_HEIGHT_ABOVE_GROUND(player, &zz);
	GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(player,0,0+ infront, off_z , &x,&y,&z);
	GET_CHAR_HEADING(player,&h);
	
	REQUEST_MODEL(model);
    while (!HAS_MODEL_LOADED(model))WAIT(0);
	
	CREATE_OBJECT_NO_OFFSET(model, x, y, z-zz, &mapbase_obj, true);
	MARK_MODEL_AS_NO_LONGER_NEEDED(model);
	
	SET_OBJECT_HEADING(mapbase_obj, h + off_h);
	FREEZE_OBJECT_POSITION(mapbase_obj, true);
	SET_OBJECT_LIGHTS(mapbase_obj, true);
	SET_OBJECT_VISIBLE(mapbase_obj, visible);
	SET_OBJECT_INVINCIBLE(mapbase_obj, true);
	block_net_control_of_object(mapbase_obj);
	SET_OBJECT_COLLISION(mapbase_obj, collision);
	
}


void save_current_location_for_tp1(void){
	GET_CHAR_COORDINATES(pPlayer,&save_x,&save_y,&save_z);
	create_mobile_mapbase(pPlayer,0xDD28B247,0,4,0, true, false);//blue cube 
	Alert("~BLIP_76~ ~c~Current location saved!",false);
}
//TASK_PLAY_ANIM( 0, "ground_attack", "missroman4", 8.00000000, 1, 0, 0, 0, -1 );

void Simple_Ped_Anim(int SimplePed, const char* set, const char* anim){
	if(!HAVE_ANIMS_LOADED(set))REQUEST_ANIMS(set);
	while(!HAVE_ANIMS_LOADED(set)) WAIT(0);
	//TASK_PLAY_ANIM(SimplePed,anim,set,8.0, 1, 0, 0, 0, -1 ); //yes anim then set.
	 TASK_PLAY_ANIM_WITH_ADVANCED_FLAGS(SimplePed,  anim, set, 1000.00000000, 0, 0, 0, 0, 0, 0, 0, -1 );

	//REMOVE_ANIMS(set); //unload
}

/*
void Nathans_Rapid_Fire_Heli(void) //Need to te-make devils whacked load of shit.
{
	if(!GetBit(MD_Misc_OptionsBitSet, MD_MISC_NATHANS_RAPID_FIRE_HELI)) return; //just for safety
	int i;
	if(!DOES_VEHICLE_EXIST(Personal_Vehicle))
	{
		Alert("~b~MD: ~s~This mod requires a helicopter.",false);
		SetBit(MD_Misc_OptionsBitSet, MD_MISC_NATHANS_RAPID_FIRE_HELI, false);
		Nathans_RapidHeli_Veh = 0;
		for(i = 0; i < 4; i++)
		{
			if(DOES_CHAR_EXIST(Nathans_RapidHeli_Peds[i])) DELETE_CHAR(&Nathans_RapidHeli_Peds[i]);
		}
		return;
	}
	GET_CAR_CHAR_IS_USING(pPlayer,&Personal_Vehicle); //for safety..
	if(Nathans_RapidHeli_Veh == 0) Nathans_RapidHeli_Veh = Personal_Vehicle;
	else if(Personal_Vehicle != Nathans_RapidHeli_Veh)
	{
		Alert("~b~MD: ~s~Rapid heli disabled due to vehicle change.",false);
		SetBit(MD_Misc_OptionsBitSet, MD_MISC_NATHANS_RAPID_FIRE_HELI, false);
		Nathans_RapidHeli_Veh = 0;
		for(i = 0; i < 4; i++)
		{
			if(DOES_CHAR_EXIST(Nathans_RapidHeli_Peds[i])) DELETE_CHAR(&Nathans_RapidHeli_Peds[i]);
		}
		return;
	}
	if(is_driving(pPlayer))
	{
		int VehModel;
		GET_CAR_MODEL(Personal_Vehicle,&VehModel);
		if(!IS_THIS_MODEL_A_HELI(VehModel))
		{
			Alert("~b~MD: ~s~This mod requires a helicopter.",false);
			SetBit(MD_Misc_OptionsBitSet, MD_MISC_NATHANS_RAPID_FIRE_HELI, false);
			return;
		}
		float mx, my, mz, x_offset[4];
		x_offset[0] = -0.80f; x_offset[1] = -0.400f; x_offset[2] = 0.200f; x_offset[3] = 0.600f;
		GET_CHAR_COORDINATES(pPlayer,&mx,&my,&mz);
		int localgroup;
		for(i = 0; i < 4; i++)
		{
			if(i == 0)
			{
				GET_PLAYER_GROUP(iPlayer,&localgroup);
				if(!DOES_GROUP_EXIST(localgroup))
				{
					CREATE_GROUP(0, &localgroup, true);
					SET_GROUP_LEADER(localgroup, pPlayer);
					SET_GROUP_FORMATION(localgroup, 1);
					SET_GROUP_FORMATION_SPACING(localgroup, 1);
				}
			}
			if(!DOES_CHAR_EXIST(Nathans_RapidHeli_Peds[i]))
			{
				//SHOULD BE MODEL_M_Y_CLUBFIT WAS 1308302092
				if(!HAS_MODEL_LOADED(MODEL_M_Y_CLUBFIT))
				{
					REQUEST_MODEL(MODEL_M_Y_CLUBFIT);
					while(!HAS_MODEL_LOADED(MODEL_M_Y_CLUBFIT)) WAIT(0);
				}
				CREATE_CHAR(0, MODEL_M_Y_CLUBFIT, mx, my, mz, &Nathans_RapidHeli_Peds[i], true);
				SET_CHAR_COLLISION(Nathans_RapidHeli_Peds[i], false);
				WAIT(0);
				SET_GROUP_MEMBER(localgroup, Nathans_RapidHeli_Peds[i]);
				SET_CHAR_NEVER_LEAVES_GROUP(Nathans_RapidHeli_Peds[i], true);
				SET_CHAR_INVINCIBLE(Nathans_RapidHeli_Peds[i], true); 
				int netID;
				GET_NETWORK_ID_FROM_PED(Nathans_RapidHeli_Peds[i],&netID);
				SET_NETWORK_ID_CAN_MIGRATE(netID, false);
				WAIT(0);
				ATTACH_PED_TO_CAR(Nathans_RapidHeli_Peds[i], Personal_Vehicle, 0, x_offset[i], 2.0f, 0.0f, 0.0f, 0.0f, 0, 0);
				//SET_CHAR_COLLISION(Nathans_RapidHeli_Peds[i], false);
			}
			//if(i == 3 && HAS_MODEL_LOADED(1308302092)) MARK_MODEL_AS_NO_LONGER_NEEDED(1308302092); //who gives a shit for now
		}
		bool CURRENTLY_FIRING_HELI = false;
		if(VehModel == MODEL_ANNIHILATOR) CURRENTLY_FIRING_HELI = IS_BUTTON_PRESSED(0, BUTTON_X);
		else if(VehModel == MODEL_BUZZARD) CURRENTLY_FIRING_HELI = IS_BUTTON_PRESSED(0, BUTTON_A);

		if(DOES_CHAR_EXIST(Nathans_RapidHeli_Peds[Nathans_RapidHeli_IndexToShoot])) 
		{
			SET_CHAR_VISIBLE(Nathans_RapidHeli_Peds[Nathans_RapidHeli_IndexToShoot], CURRENTLY_FIRING_HELI);
		}
		if(CURRENTLY_FIRING_HELI)
		{
			for(i = 0; i < 4; i++)
			{
				if(!HAS_CHAR_GOT_WEAPON(Nathans_RapidHeli_Peds[i], WEAPON_MICRO_UZI))
				{
					GIVE_WEAPON_TO_CHAR(Nathans_RapidHeli_Peds[i], WEAPON_MICRO_UZI, AMMO_MAX, 0);
					WAIT(0);
					SET_CURRENT_CHAR_WEAPON(Nathans_RapidHeli_Peds[i], WEAPON_MICRO_UZI, true);
					WAIT(0);
				}
			}
			GET_OFFSET_FROM_CAR_IN_WORLD_COORDS(Personal_Vehicle, 0.0f, 200.0f, 0.0f, &mx, &my, &mz); //reuse vars
			float h;
			GET_CHAR_HEADING(pPlayer,&h);
			for(i = 0; i < 4; i++)
			{
			SET_CHAR_HEADING(Nathans_RapidHeli_Peds[i],(h + 180));	
			FIRE_PED_WEAPON(Nathans_RapidHeli_Peds[i], mx, my, mz); 
			}
		}
	}
}
*/
void Rapid_Fire_Heli(void){ // Dont touch this pls!!
	float WV_x, WV_y, WV_z;	
	Model model, Vehicle_Model;
	bool in_car = IS_CHAR_IN_ANY_CAR(pPlayer);
	if(in_car) 
	{
		GET_CAR_MODEL(Personal_Vehicle,&Vehicle_Model);
		GET_CAR_CHAR_IS_USING(pPlayer, &Personal_Vehicle);
	}
	if(in_car && (Vehicle_Model == MODEL_ANNIHILATOR || Vehicle_Model == MODEL_BUZZARD) && Devils_Rapid_Fire_Heli){
		
		if(DOES_VEHICLE_EXIST(Personal_Vehicle)){
			if(!DOES_CHAR_EXIST(WeaponVeh_ped[0])){ 
				GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(pPlayer, 0 ,0 , 0, &WV_x, &WV_y, &WV_z);				
							
				float x_Pos,Heading_Pos;
				//Model Weaponped_Model = 1308302092;
				Model Weaponped_Model = MODEL_M_Y_CLUBFIT; //For positioning
				REQUEST_MODEL(Weaponped_Model);
				while (!HAS_MODEL_LOADED(Weaponped_Model)) WAIT(0);				
				int Pednr;
				for(Pednr = 0; Pednr < MAX_WEAPONPEDS; Pednr++){
					if(DOES_CHAR_EXIST(WeaponVeh_ped[Pednr]))continue;
					switch(Pednr)
					{
						case 0: x_Pos = -0.80f; break;
						case 1: x_Pos = -0.400f; break;
						case 2: x_Pos = 0.200f; break;
						case 3: x_Pos = 0.600f; break;
					}										
							
					CREATE_CHAR(0, Weaponped_Model, WV_x, WV_y, WV_z, &WeaponVeh_ped[Pednr], 1);
					int texturesetting;
					for(texturesetting = 0; texturesetting < 8; texturesetting++){
					SET_CHAR_COMPONENT_VARIATION(WeaponVeh_ped[Pednr],texturesetting,0,0);
					}					
					SET_PED_EXISTS_ON_ALL_MACHINES(WeaponVeh_ped[Pednr], true);
					if(!IS_PED_ATTACHED_TO_ANY_CAR(WeaponVeh_ped[Pednr]))ATTACH_PED_TO_CAR(WeaponVeh_ped[Pednr], Personal_Vehicle,0, x_Pos,2,0, 0,0,0,0);
					WAIT(0);
					SET_GROUP_MEMBER(BG_Group, WeaponVeh_ped[Pednr]);
					SET_CHAR_NEVER_LEAVES_GROUP(WeaponVeh_ped[Pednr], true);
					SET_CHAR_INVINCIBLE(WeaponVeh_ped[Pednr], true); 
					FREEZE_CHAR_POSITION_AND_DONT_LOAD_COLLISION(WeaponVeh_ped[Pednr], true);	 //this fucks in multiplayer maybe me thinks..					
					if(IS_CHAR_VISIBLE(WeaponVeh_ped[Pednr]))SET_CHAR_VISIBLE(WeaponVeh_ped[Pednr],false);							
					ALLOW_REACTION_ANIMS(WeaponVeh_ped[Pednr], 0);
					SET_CHAR_ALL_ANIMS_SPEED(WeaponVeh_ped[Pednr], 0);
					
				}
				MARK_MODEL_AS_NO_LONGER_NEEDED(Weaponped_Model);
					
			}
			else{
				if(IS_CHAR_IN_ANY_CAR(pPlayer) ){
					int Pednr;
					float x_Pos,Heading_Pos,h;
					Ped Target_Ped;					
					if(IS_BUTTON_PRESSED(0,(Vehicle_Model == MODEL_ANNIHILATOR) ? BUTTON_X : BUTTON_A)){
						GET_CAR_CHAR_IS_USING(pPlayer, &Personal_Vehicle);
						float off_x,off_y,off_z;
						GET_OFFSET_FROM_CAR_IN_WORLD_COORDS(Personal_Vehicle, 0.00, 200.00, 0.00, &off_x, &off_y, &off_z); // Where 0,200,0 can be player coords (heatseekers LMAO)												
						for(Pednr = 0; Pednr < MAX_WEAPONPEDS; Pednr++){
							if(!DOES_CHAR_EXIST(WeaponVeh_ped[Pednr]))continue;
							switch(Pednr)
							{
								case 0: x_Pos = -0.80f; break;
								case 1: x_Pos = -0.400f; break;
								case 2: x_Pos = 0.200f; break;
								case 3: x_Pos = 0.600f; break;
							}
							//SET_CAR_COLLISION(Personal_Vehicle,false);
							GET_CHAR_HEADING(pPlayer,&h);
							SET_CHAR_HEADING(WeaponVeh_ped[Pednr],h/2);							
							if(!IS_PED_ATTACHED_TO_ANY_CAR(WeaponVeh_ped[Pednr]))ATTACH_PED_TO_CAR(WeaponVeh_ped[Pednr], Personal_Vehicle,0, x_Pos,2,0, 0,0,0,0);								
							SET_CHAR_VISIBLE(WeaponVeh_ped[Pednr],true);
							SET_CHAR_COLLISION( WeaponVeh_ped[Pednr], 0 );
							GIVE_WEAPON_TO_CHAR(WeaponVeh_ped[Pednr],Vehicle_Weapon, AMMO_MAX, 0);
							SET_CURRENT_CHAR_WEAPON(WeaponVeh_ped[Pednr], Vehicle_Weapon, true);
							FIRE_PED_WEAPON(WeaponVeh_ped[Pednr], off_x, off_y , off_z);							
							REMOVE_WEAPON_FROM_CHAR(WeaponVeh_ped[Pednr], Vehicle_Weapon);													
						}												
					}
					else{
						for(Pednr = 0; Pednr < MAX_WEAPONPEDS; Pednr++){
							if(!DOES_CHAR_EXIST(WeaponVeh_ped[Pednr]))continue;
							GET_CAR_CHAR_IS_USING(pPlayer, &Personal_Vehicle);
							switch(Pednr)
							{
								case 0: x_Pos = -0.80f; break;
								case 1: x_Pos = -0.400f; break;
								case 2: x_Pos = 0.200f; break;
								case 3: x_Pos = 0.600f; break;
							}										
							if(!IS_PED_ATTACHED_TO_ANY_CAR(WeaponVeh_ped[Pednr]))ATTACH_PED_TO_CAR(WeaponVeh_ped[Pednr], Personal_Vehicle,0, x_Pos,2,0, 0,0,0,0);
							SET_CHAR_COLLISION( WeaponVeh_ped[Pednr], 0 );
							if(!GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_DESOLIDIFY)) SET_CAR_COLLISION(Personal_Vehicle,true);
							if(IS_CHAR_VISIBLE(WeaponVeh_ped[Pednr]))SET_CHAR_VISIBLE(WeaponVeh_ped[Pednr],false);									
						}						
					}
				}
			}
		}				
	}
	else{
		if(Devils_Rapid_Fire_Heli){
			int Pednr;
			for(Pednr = 0; Pednr < MAX_WEAPONPEDS; Pednr++){
				if(DOES_CHAR_EXIST(WeaponVeh_ped[Pednr])){
				DELETE_CHAR(&WeaponVeh_ped[Pednr]);
				}			
			}
		}
		Devils_Rapid_Fire_Heli = false;
	}		
}

void Weapon_Vehicle(void){ //Dont touch!
	float WV_x, WV_y, WV_z;	
	Model model;
	if(IS_CHAR_IN_ANY_CAR(pPlayer)&& MD_Weapon_Vehicle){
		if(IS_CHAR_IN_ANY_HELI(pPlayer)){
		Alert("~b~MD: ~s~Disabling Rocket vehicle mod ~n~This cannot be used in helis",false);
		MD_Weapon_Vehicle = false;
		return;
		}
		GET_CAR_CHAR_IS_USING(pPlayer, &Personal_Vehicle);
		if(DOES_VEHICLE_EXIST(Personal_Vehicle)  && MD_Weapon_Vehicle){
			if(!DOES_CHAR_EXIST(WeaponVeh_ped[0])){ 
				GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(pPlayer, 0 ,0 , 0, &WV_x, &WV_y, &WV_z);				
				GET_PLAYER_GROUP(iPlayer,&BG_Group);
				if(!DOES_GROUP_EXIST(BG_Group)){
				CREATE_GROUP(0, &BG_Group, true);
				SET_GROUP_LEADER(BG_Group, pPlayer);
				SET_GROUP_FORMATION(BG_Group, 1);
				SET_GROUP_FORMATION_SPACING(BG_Group, 1);
				}				
				float x_Pos,Heading_Pos;
				//Model Weaponped_Model = 1308302092; //Cutscene
				Model Weaponped_Model = 558221221; // Roman W
				//Model Weaponped_Model = MODEL_M_Y_CLUBFIT; //For positioning
				REQUEST_MODEL(Weaponped_Model);
				while (!HAS_MODEL_LOADED(Weaponped_Model)) WAIT(0);				
				int Pednr;
				for(Pednr = 0; Pednr < MAX_WEAPONPEDS; Pednr++){
					if(DOES_CHAR_EXIST(WeaponVeh_ped[Pednr]))continue;
							if(Pednr == 0)x_Pos = -2.80f;								
							else if(Pednr == 1)x_Pos = -1.400f;							
							else if(Pednr == 2)x_Pos = 1.200f;							
							else if(Pednr == 3)x_Pos = 2.600f;									
							
					CREATE_CHAR(0, Weaponped_Model, WV_x, WV_y, WV_z, &WeaponVeh_ped[Pednr], 1);
					int texturesetting;
					for(texturesetting = 0; texturesetting < 8; texturesetting++){
					SET_CHAR_COMPONENT_VARIATION(WeaponVeh_ped[Pednr],texturesetting,0,0);
					}					
					SET_PED_EXISTS_ON_ALL_MACHINES(WeaponVeh_ped[Pednr], true);
					if(!IS_PED_ATTACHED_TO_ANY_CAR(WeaponVeh_ped[Pednr]))ATTACH_PED_TO_CAR(WeaponVeh_ped[Pednr], Personal_Vehicle,0, x_Pos,3,0, 0,0,1,1);
					WAIT(0);
					SET_GROUP_MEMBER(BG_Group, WeaponVeh_ped[Pednr]);
					SET_CHAR_NEVER_LEAVES_GROUP(WeaponVeh_ped[Pednr], true);
					SET_CHAR_INVINCIBLE(WeaponVeh_ped[Pednr], true); 
					FREEZE_CHAR_POSITION_AND_DONT_LOAD_COLLISION(WeaponVeh_ped[Pednr], true);	 //this fucks in multiplayer maybe me thinks..					
					if(IS_CHAR_VISIBLE(WeaponVeh_ped[Pednr]))SET_CHAR_VISIBLE(WeaponVeh_ped[Pednr],false);							
					ALLOW_REACTION_ANIMS(WeaponVeh_ped[Pednr], 0);
					SET_CHAR_ALL_ANIMS_SPEED(WeaponVeh_ped[Pednr], 0);
					
				}
				MARK_MODEL_AS_NO_LONGER_NEEDED(Weaponped_Model);
					
			}
			else{
				if(IS_CHAR_IN_ANY_CAR(pPlayer) ){
					int Pednr;
					float x_Pos,Heading_Pos,h;
					Ped Target_Ped;	
					Vehicle_Weapon = WEAPON_RLAUNCHER;
					if(IS_BUTTON_PRESSED(0,BUTTON_X)){
						GET_CAR_CHAR_IS_USING(pPlayer, &Personal_Vehicle);
						float off_x,off_y,off_z;
						GET_OFFSET_FROM_CAR_IN_WORLD_COORDS(Personal_Vehicle, 0.00, 200.00, 0.20, &off_x, &off_y, &off_z); // Where 0,200,0 can be player coords (heatseekers LMAO)												
						for(Pednr = 0; Pednr < MAX_WEAPONPEDS; Pednr++){
							if(!DOES_CHAR_EXIST(WeaponVeh_ped[Pednr]))continue;
							if(Pednr == 0)x_Pos = -2.80f;								
							else if(Pednr == 1)x_Pos = -1.400f;							
							else if(Pednr == 2)x_Pos = 1.200f;							
							else if(Pednr == 3)x_Pos = 2.600f;
							GET_CHAR_HEADING(pPlayer,&h);
							SET_CHAR_HEADING(WeaponVeh_ped[Pednr],h/2);							
							SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(WeaponVeh_ped[Pednr], 1 );
							if(!IS_PED_ATTACHED_TO_ANY_CAR(WeaponVeh_ped[Pednr]))ATTACH_PED_TO_CAR(WeaponVeh_ped[Pednr], Personal_Vehicle,0, x_Pos,3,0, 0,0,1,1);								
							SET_CHAR_COLLISION( WeaponVeh_ped[Pednr], 0 );
							if(!HAS_CHAR_GOT_WEAPON(WeaponVeh_ped[Pednr],Vehicle_Weapon))GIVE_WEAPON_TO_CHAR(WeaponVeh_ped[Pednr],Vehicle_Weapon, AMMO_MAX, 0);
							SET_CURRENT_CHAR_WEAPON(WeaponVeh_ped[Pednr], Vehicle_Weapon, true);							
							SET_CHAR_VISIBLE(WeaponVeh_ped[Pednr],true);
							FIRE_PED_WEAPON(WeaponVeh_ped[Pednr], off_x, off_y , off_z);							
							SET_CHAR_VISIBLE(WeaponVeh_ped[Pednr],false);
							REMOVE_WEAPON_FROM_CHAR(WeaponVeh_ped[Pednr], Vehicle_Weapon);
						}												
					}
					else{
						for(Pednr = 0; Pednr < MAX_WEAPONPEDS; Pednr++){
							if(!DOES_CHAR_EXIST(WeaponVeh_ped[Pednr]))continue;
							GET_CAR_CHAR_IS_USING(pPlayer, &Personal_Vehicle);
							if(Pednr == 0)x_Pos = -2.80f;								
							else if(Pednr == 1)x_Pos = -1.400f;							
							else if(Pednr == 2)x_Pos = 1.200f;							
							else if(Pednr == 3)x_Pos = 2.600f;									
							if(!IS_PED_ATTACHED_TO_ANY_CAR(WeaponVeh_ped[Pednr]))ATTACH_PED_TO_CAR(WeaponVeh_ped[Pednr], Personal_Vehicle,0, x_Pos,3,0, 0,0,1,1);
							SET_CHAR_VISIBLE(WeaponVeh_ped[Pednr],false);
							if(GetBit(VehicleOptionsBitSet, !VEHICLE_OPTION_DESOLIDIFY))SET_CAR_COLLISION(Personal_Vehicle,true);
							if(HAS_CHAR_GOT_WEAPON(WeaponVeh_ped[Pednr],Vehicle_Weapon))REMOVE_WEAPON_FROM_CHAR(WeaponVeh_ped[Pednr], Vehicle_Weapon);							
						}						
					}
				}
			}
		}				
	}
	else{
		if(MD_Weapon_Vehicle){
			int Pednr;
			for(Pednr = 0; Pednr < MAX_WEAPONPEDS; Pednr++){
				if(DOES_CHAR_EXIST(WeaponVeh_ped[Pednr])){
				DELETE_CHAR(&WeaponVeh_ped[Pednr]);
				}			
			}
		}
		MD_Weapon_Vehicle = false;
	}		
}

void Ram_Player_Vehicle(const int Player_ID, Model Vehiclemodel){
	Ped Player_PED;
	Vehicle vehicle;
	float Spawn_x, Spawn_y, Spawn_z, Spawn_h, Spawn_s;
	if(PLAYER_HAS_CHAR(Player_ID))GET_PLAYER_CHAR(Player_ID, &Player_PED);
	else{
	Alert(Error_Char_Missing,false);
	return;
	}	
	if(IS_MODEL_IN_CDIMAGE(Vehiclemodel)){
		REQUEST_MODEL(Vehiclemodel);
		float heading;
		float x,y,z;
		GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(Player_PED, 0, 25, 0, &x, &y, &z);
		GET_CHAR_HEADING(Player_PED, &heading);
		while(!HAS_MODEL_LOADED(Vehiclemodel)) WAIT(0);
		CREATE_CAR(Vehiclemodel,x,y,z,&vehicle,true);
		MARK_MODEL_AS_NO_LONGER_NEEDED(Vehiclemodel);
		SET_CAR_ON_GROUND_PROPERLY(vehicle);
		CHANGE_CAR_COLOUR(vehicle, 30, 30);//majorred
		SET_EXTRA_CAR_COLOURS(vehicle, 30, 30);
		SET_SIREN_WITH_NO_DRIVER(vehicle,true);
		SWITCH_CAR_SIREN(vehicle,true);
		SET_VEHICLE_DIRT_LEVEL(vehicle, 10);
		WASH_VEHICLE_TEXTURES(vehicle, 255);
		if(heading > 180.0) heading -= 180.0;
		else heading += 180.0;
		SET_CAR_HEADING(vehicle, heading);
		FREEZE_CAR_POSITION(vehicle,false);
		SET_CAR_COLLISION(vehicle, true);
		SET_CAR_ENGINE_ON(vehicle,true,true);
		SET_CAR_VISIBLE(vehicle,true);
		SET_CAR_FORWARD_SPEED(vehicle,300);
		WAIT(100);
		EXPLODE_CAR(vehicle, true, false);
		GET_CHAR_COORDINATES(Player_PED,&x,&y,&z);
		ADD_EXPLOSION(x, y, z, EXPLOSION_SHIP_DESTROY, 10, true, false, 1);
		
		//!Print  
		char * buffer[32]; //128 characters to play with
		Strcpy(buffer, "~b~MD: ~s~An exploding "); //27 Characters
		Strcat(buffer, VEHICLES_MODEL_NAME(vehicle));
		Strcat(buffer, "~s~ was sent to: "); //27 Characters
		PLAYER_NAME_WITH_COLOUR(Player_ID, &buffer); //WORKS! 47
		Strcat(buffer, ".");
		Alert(buffer,true);		
	}
}


