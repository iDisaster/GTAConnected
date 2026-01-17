/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv12 TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */ 

#pragma once

/**Setup the font for Extend+ Trident*/
#define Menu_Font				5
#define Player_Name_Font		0
#define GTAIV					1
#define TBOGT					2

#define Length(array) (sizeof(array) / 4)

#define PREMIUM_ONLY_STRING "~b~MD: ~s~This feature is premium only, visit www.consolecrunch.com"
bool Version_Increment;
bool Menu_Ptfx = true;


bool VEHICLE_HAS_EMPTY_SEATS(const int tmp_veh)
{
	if(!DOES_VEHICLE_EXIST(tmp_veh)) return false;
	int maxSeats;
	GET_MAXIMUM_NUMBER_OF_PASSENGERS(tmp_veh,&maxSeats);
	int i;
	for(i = -1; i < maxSeats; i++)
	{
		if(IS_CAR_PASSENGER_SEAT_FREE(tmp_veh,i)) return true;
	}
	return false;
}

int PLAYERS_RELATIONSHIP_GROUP(const int playerIndex){	
    if(IS_NETWORK_SESSION())return (playerIndex + 31);
    else return RELATIONSHIP_GROUP_PLAYER; //0   
}

int PLAYER_CHAR(const int playerindex){
	int ped;
	GET_PLAYER_CHAR(playerindex,&ped);
	//maybe try returning (playerindex % 100)
	return ped;
}

bool IS_PLAYER_IN_A_VEHICLE(const int playerindex)
{
	int ped = PLAYER_CHAR(playerindex);
	return (DOES_CHAR_EXIST(ped) && IS_CHAR_IN_ANY_CAR(ped));
}

int PLAYERS_VEHICLE(const int playerindex)
{
	int veh;
	if(IS_PLAYER_IN_A_VEHICLE(playerindex))
	{
		GET_CAR_CHAR_IS_USING(PLAYER_CHAR(playerindex), &veh);
		return veh;
	}
	return 0;
}

int GetTickCount()
{
	uint tick = 0;
	GET_GAME_TIMER(&tick);
	return tick;
}

int FIND_CONTROLLER_OF_NETWORK_ID(const int Network_ID)
{
 register int i;
 for(i = 0; i < MAX_PLAYERS; i++)
 {
  //if(is_invalid(i)) continue;
  if(!DOES_PLAYER_HAVE_CONTROL_OF_NETWORK_ID(i,Network_ID)) continue;
  return i;
  //break;
 }
 return -1;
}

void debugPrint(char* message)
{
	CLEAR_PRINTS();
	CLEAR_SMALL_PRINTS();
	ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(true);
	PRINT_STRING_WITH_LITERAL_STRING_NOW("STRING", message, 5000,true);
	WAIT(100);
}

void Alert(char* message, bool AddToBrief){
	CLEAR_PRINTS();
	CLEAR_SMALL_PRINTS();
	ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(AddToBrief);
	PRINT_STRING_WITH_LITERAL_STRING_NOW("STRING", message, 4000,true);
}

void Alert_Abort(char* message, bool AddToBrief){
	CLEAR_PRINTS();
	CLEAR_SMALL_PRINTS();
	ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(AddToBrief);
	PRINT_STRING_WITH_LITERAL_STRING_NOW("STRING", message, 4000,true);
	return;
}

void Alert_Two(char* message,char* message2, bool AddToBrief){
	CLEAR_PRINTS();
	CLEAR_SMALL_PRINTS();
	ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(AddToBrief);
	PRINT_STRING_WITH_TWO_LITERAL_STRINGS_NOW("STRTNM3", message, message2, 3000, true);
}

void Alert_Two_Long(char* message,char* message2, bool AddToBrief){
	CLEAR_PRINTS();
	CLEAR_SMALL_PRINTS();
	ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(AddToBrief);
	PRINT_STRING_WITH_TWO_LITERAL_STRINGS_NOW("STRTNM3", message, message2, 5000, true);
}

void Alert_Number(int num, bool AddToBrief){
	CLEAR_PRINTS();
	CLEAR_SMALL_PRINTS();
	ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(AddToBrief);
	PRINT_WITH_NUMBER_NOW("NUMBR", num, 3500, true);
}
void printInt(int num){
	CLEAR_PRINTS();
	CLEAR_SMALL_PRINTS();
	PRINT_WITH_NUMBER_NOW("NUMBR", num, 3500, true);
}

void Alert_2_Numbers(int value1,int value2, bool AddToBrief){
	CLEAR_PRINTS();
	CLEAR_SMALL_PRINTS();
	ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(false);
	PRINT_WITH_2_NUMBERS_NOW("NUMBR", value1, value2, 2000,true);
}



void Set_Up_Draw(float width, float height, uint r, uint g, uint b, uint a, uint r2, uint g2, uint b2){
    //loading incorrect font will cause all sorts of random glitchy crashes/ map not loading
	#ifdef VERSION_PC
	SET_TEXT_FONT(6);
	#else
	SET_TEXT_FONT(Menu_Font);
	#endif
	 
	SET_TEXT_BACKGROUND(0);
	SET_TEXT_DROPSHADOW(0, 0, 0, 0, 255);
	SET_TEXT_EDGE(1, r2, g2, b2, 200);
	SET_TEXT_COLOUR(r, g, b, a);
	SET_TEXT_SCALE(width, height);
	SET_TEXT_PROPORTIONAL(1);
	//SET_TEXT_JUSTIFY(0);
	SET_TEXT_CENTRE(0);
	//SET_TEXT_RIGHT_JUSTIFY(0);	
}


void Draw_Text(char *gxtName, float x, float y, char *val){
 DISPLAY_TEXT_WITH_LITERAL_STRING(x, y, gxtName, val);
// return;
}
void Draw_Number(char *gxtName, float x, float y, int val){
	DISPLAY_TEXT_WITH_NUMBER(x, y, gxtName, val);
}




//Nathans Functions//

/*
bool NETWORK_PLAYER_IS_ON_FRIENDS_LIST(const int player_id)
{
	//register int i; //maybe register int makes it too fast and that crashes it? (POSSIBLY)
	int i; //no register
	const char* PossibleFriend = GET_PLAYER_NAME(playerid); //1 less process to do 100+ times at once (possible frez)
	for(i = 0;i < NETWORK_GET_FRIEND_COUNT(); i++)
	{
		if(COMPARE_STRING(PossibleFriend,NETWORK_GET_FRIEND_NAME(i))) return true;
	}
	return false;
}
*/
bool NETWORK_PLAYER_IS_ON_FRIENDS_LIST(const int player_id)
{
    int i;
    const char* playerid_name = GET_PLAYER_NAME(player_id);
    for(i = 0;i < NETWORK_GET_FRIEND_COUNT(); i++)
    {
    	//char* friends_name = NETWORK_GET_FRIEND_NAME(i);
    	//if(!NETWORK_IS_FRIEND_ONLINE(friends_name)) continue;
        if(COMPARE_STRING(playerid_name,NETWORK_GET_FRIEND_NAME(i))) return true;
    }
    return false;
}

bool FRIENDS_LIST_CONTAINS_GAMERTAG(char* Gamertag)
{
	register int i;
	for(i = 0;i < NETWORK_GET_FRIEND_COUNT(); i++)
	{
		if(COMPARE_STRING(Gamertag,NETWORK_GET_FRIEND_NAME(i))) return true;
	}
	return false;
}

bool IS_THIS_PED_A_NETPLAYER(Ped query_ped){
	if(!IS_NETWORK_SESSION()) return false;
	int i,tmp_ped;
	for(i=0;i<GET_NUMBER_OF_PLAYERS();i++){
		//if(!IS_NETWORK_PLAYER_ACTIVE(i)) continue;
		GET_PLAYER_CHAR(i,&tmp_ped);
		if(tmp_ped == query_ped) return true;
	}
	return false;
}

int GET_PLAYER_INT_FROM_PLAYER_NAME(char* name){
	int i;
	for(i = 0; i < 16; i++)
	{ 
		if(COMPARE_STRING(GET_PLAYER_NAME(CONVERT_INT_TO_PLAYERINDEX(i)), name)) return i;
	}
	return 0; //just for safekeeping....
}


void GET_CAR_PASSENGERS(int car, int *Passenger1, int *Passenger2, int *Passenger3)
{
    GET_CHAR_IN_CAR_PASSENGER_SEAT(car,0,&*Passenger1);
    GET_CHAR_IN_CAR_PASSENGER_SEAT(car,1,&*Passenger2);
    GET_CHAR_IN_CAR_PASSENGER_SEAT(car,2,&*Passenger3);
	//return;
}

//!Devils Functions//


//Nathan redo
void Autoload(char* sco, const bool print)
{
	char* buffer[32];
	Strcpy(buffer, "~b~MD: ~s~");
	if(DOES_SCRIPT_EXIST(sco))
	{
		if(GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT(sco) == 0)
		{
			REQUEST_SCRIPT(sco);
			Strcat(buffer, "Loaded ");
			Strcat(buffer, sco);
			Strcat(buffer, ".sco");
			while(!HAS_SCRIPT_LOADED(sco)) WAIT(0);
			START_NEW_SCRIPT(sco,1024);
			MARK_SCRIPT_AS_NO_LONGER_NEEDED(sco);	
		}
		else
		{
			Strcat(buffer, sco);
			Strcat(buffer, ".sco is already loaded.");
		}
	}
	else
	{
		Strcat(buffer, sco);
		Strcat(buffer, ".sco does not exist.");
	}	
	if(print)
	{
		Alert(buffer, false);
	}
	WAIT(2000);
}

bool IS_THIS_SCRIPT_RUNNING(char* sco){
	if(DOES_SCRIPT_EXIST(sco) && GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT(sco) == 1)return true;
	else return false;
}

void MD_Terminate_Script(char* sco){
	if (GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT(sco) >= 1) TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME(sco);
}




Ped GetPlayerPed(void){
	Ped playerped = INVALID_HANDLE;
	if ( PLAYER_HAS_CHAR(GET_PLAYER_ID())) GET_PLAYER_CHAR(GET_PLAYER_ID(), &playerped);
	return playerped;
}

int GetPlayerModel(void){
	int model;
	GET_CHAR_MODEL(GetPlayerPed(),&model);
	return model;
}
/*
int empty_player_slots(void)
{
	if(IS_THIS_MACHINE_THE_SERVER())
	{
		return (NETWORK_GET_MAX_SLOTS() - GET_NUMBER_OF_PLAYERS());
	}
	else
	{
		return NETWORK_GET_NUM_OPEN_PUBLIC_SLOTS(); //crashez? i tinkle?
	}
}
*/
//NETWORK_GET_NUM_OPEN_PUBLIC_SLOTS(void);
int empty_player_slots(void){
return (NETWORK_GET_MAX_SLOTS() - GET_NUMBER_OF_PLAYERS());
}
bool is_driving(int pd)
{
	if(!IS_CHAR_IN_ANY_CAR(pd)) return false;
	int veh,dvr;
	GET_CAR_CHAR_IS_USING(pd,&veh);
	GET_DRIVER_OF_CAR(veh,&dvr);
	return dvr == pd;
}

bool is_veh_locked(int veh){ //mmmmm should use other func for this set locked without net control request, + is chars vehicle locked
	int temp;
	GET_CAR_DOOR_LOCK_STATUS(veh,&temp);
	return temp == VEHICLE_DOOR_LOCKED_BOTH_SIDES; //need to also return true if temp is vehicle locked from outside only
}

void UpdateWeaponOfPed(Ped ped, Weapon weapon){
	if (HAS_CHAR_GOT_WEAPON(ped, weapon)){
		SET_CHAR_AMMO(ped, weapon, AMMO_MAX);    
	} 	
	else{
		GIVE_WEAPON_TO_CHAR(ped, weapon, AMMO_MAX, FALSE);
	}
}

Vehicle GetPlayerVeh(void){
	Vehicle vehicle = INVALID_HANDLE;
	int ped = GetPlayerPed();
	if (IS_CHAR_IN_ANY_CAR(ped))
	GET_CAR_CHAR_IS_USING(ped, &vehicle);
	return vehicle;
}

void Run_Ptfx(int Pointer){ 
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
		if (DOES_CHAR_EXIST(Pointer))START_PTFX_ON_PED(effect[rand], Pointer, 0, 0, 0, 0, 0, 0, 1);	
		else if(DOES_VEHICLE_EXIST(Pointer))START_PTFX_ON_VEH(effect[rand], Pointer, 0, 0, 0, 0, 0, 0, 1);
		else if(DOES_OBJECT_EXIST(Pointer))START_PTFX_ON_OBJ(effect[rand], Pointer, 0, 0, 0, 0, 0, 0, 1);
	}		
}

