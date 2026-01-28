/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */ 

//NOT DESIGNED FOR PC!!!!!
//int GET_PLAYER_ID_FOR_THIS_PED(Ped ped);

#include <natives.h>
#include "MD_Compile_Settings.c"
#include "MD_Base_Setup/MDB_Strings.h"
#include <common.h> 
#include <consts.h> 
//#include "MD_Base_Setup/MDB_Supernet_Vars.h" //I'll declare my own here
//#include "MD_Security/MDS_Security.h" //we are releasing ghost for free right?
//#include "MD_Security/MDS_User_Verification.h" //meh?
bool Holyghost = false;
bool StopStreaming = false;
SwitchStreaming_Message = false;
SwitchStreaming_Toggle = false;
bool Streaming;
#define MDVersion_Txt_Size		0.19f,0.35f
#define GetBit(BitSet, bitIndex) IS_BIT_SET(BitSet, bitIndex)

#define SetBit(BitSet, bitIndex, bitValue)	SetBitHelper(&BitSet, bitIndex, bitValue)

#define ToggleBit(BitSet, bitIndex)	ToggleBitHelper(&BitSet, bitIndex)

void SetBitHelper(uint *BitSet, uint bitIndex, bool value){
	if(value)SET_BIT(&*BitSet, bitIndex);
	else CLEAR_BIT(&*BitSet, bitIndex);	
}

void ToggleBitHelper(uint *BitSet, uint bitIndex){
	if(!IS_BIT_SET(*BitSet, bitIndex))SET_BIT(&*BitSet, bitIndex);
	else CLEAR_BIT(&*BitSet, bitIndex);	
}

#define NORMAL_MODE 1
#define NORMAL_MODE_JOINED 2
#define GHOST_MODE_OBTAINING_HOST 3
#define GHOST_MODE_FOUND_HOST 4
#define GHOST_MODE_JOINED 5

//if dpad down is pressed in freemode, minimap does SET_RADAR_ZOOM( 980 ); on a loop for 5 seconds, then puts it back to 0, think it'll restore to 0 though auto..

int pPlayer,Mode,Episode,empty_slots,Glowing,minimap_tick = 0;
bool Glowing_Increment = false;
int Rotating360 = 1;
Texture radar;
int player_blip[MAX_PLAYERS];

//uint HasRegisteredRespawnBitSet;

bool Invalid_Player(const int playerid){ //should move to common.h
	return (GET_HASH_KEY(GET_PLAYER_NAME(playerid)) == 2211124811 || HAS_NETWORK_PLAYER_LEFT_GAME(playerid)); //Invalid
}

void change_player(int modelp){
	if(IS_MODEL_IN_CDIMAGE(modelp)){
		REQUEST_MODEL(modelp);
		float h;
		GET_CHAR_HEADING(pPlayer,&h);
		while(!HAS_MODEL_LOADED(modelp)) WAIT(0);
		CHANGE_PLAYER_MODEL(GET_PLAYER_ID(), modelp);
		MARK_MODEL_AS_NO_LONGER_NEEDED(modelp);	
		GET_PLAYER_CHAR(GET_PLAYER_ID(),&pPlayer);
		SET_CHAR_HEADING(pPlayer,h);
	}	
}




void Effects(void)
{
	if(Glowing >= 190) Glowing_Increment = false;
	if(Glowing <= 0) Glowing_Increment = true;
	if(Glowing_Increment){
		if(Glowing > 185) Glowing++;
		else Glowing += 3;
	}
	else{
		if(Glowing < 10) Glowing--;
		else Glowing -= 3;
	}
	if (Rotating360 >= 360)Rotating360 = 0;
	else Rotating360 += 5;	


	if(empty_slots == -2) DRAW_SPRITE(radar,0.37f , 0.620f, 0.0500, 0.0500, Rotating360, Glowing, 100, 100, 200);
	else {
		if(Holyghost)MD_Terminate_Script(((Episode == 2) || IS_XBOX360_VERSION()) ? "network_main_rs" : "network_main");			
		DRAW_SPRITE(radar,0.37f , 0.620f, 0.0500, 0.0500, Rotating360, Glowing, 255, Glowing, 255);
	}
			
	if(Mode == NORMAL_MODE)
	{
		Set_Up_Draw(0.2150f*2,0.3600f*2, Glowing, 255, Glowing, 255,0,0,0);					
		DISPLAY_TEXT_WITH_LITERAL_STRING(0.40,  0.60, "STRING", "Joining Normally");
	}
	else
	{
		Set_Up_Draw(0.2150f*2,0.3600f*2, 255, Glowing, Glowing, 255,0,0,0);	
		if(!Holyghost)DISPLAY_TEXT_WITH_LITERAL_STRING(0.40,  0.60, "STRING", "Joining As Ghost");
		else DISPLAY_TEXT_WITH_LITERAL_STRING(0.40,  0.60, "STRING", "Joining As Holy Ghost");
	}

}

char* CURRENT_GAME_MODES_SCRIPT_NAME(void)
{
	int GameMode = NETWORK_GET_GAME_MODE();
	//THIS DOES NOT TAKE INTO ACCOUNT SCRIPT NAME DIFFERENCES FROM 360/PS3 (if there are any)
	//YET......
	if(GameMode == GAME_MODE_DEATHMATCH)
	{
		if(Episode == 2)
		{
			return "e2_quickdm";
		}
		else
		{
			return "deathmatch_cr";
		}
		//return ( (Episode == 2) ? "e2_deathmatch" : "deathmatch_cr");
	}
	else if(GameMode == GAME_MODE_TEAM_DEATHMATCH)
	{
		if(Episode == 2)
		{
			return "e2_deathmatch";
		}
		else
		{
			return "deathmatch_cr";
		}
	}
	else if(GameMode == GAME_MODE_MAFIYA_WORK)
	{

	}
	else if(GameMode == GAME_MODE_TEAM_MAFIYA_WORK)
	{

	}
	else if(GameMode == GAME_MODE_TEAM_CAR_JACK_CITY)
	{

	}
	else if(GameMode == GAME_MODE_CAR_JACK_CITY)
	{
		//carsteal?
	}
	else if(GameMode == GAME_MODE_RACE)
	{
		if(Episode == 2)
		{
			return "e2_races";
		}
		else
		{
			return "races_cr";
		}
		//return ( (Episode == 2) ? "e2_races" : "races_cr");
	}
	else if(GameMode == GAME_MODE_PARTY_MODE)
	{
		
		if(Episode == 2)
		{
			return "e2_party_mode";
		}
		else
		{
			return "party_mode";
		}
		
		//return ( (Episode == 2) ? "e2_party_mode" : "party_mode");
	}
	else if(GameMode == GAME_MODE_COPS_AND_CROOKS)
	{

	}
	else if(GameMode == GAME_MODE_TURF_WAR)
	{

	}
	else if(GameMode == GAME_MODE_DEAL_BREAKER)
	{

	}
	else if(GameMode == GAME_MODE_HANGMANS_NOOSE)
	{

	}
	else if(GameMode == GAME_MODE_BOMB_DA_BASE_II)
	{
		return "coop_bombdbase";
	}
	else if(GameMode == GAME_MODE_FREE_MODE){
		
		if(Episode == 2)return "e2_freemode";
		else return "freemode_cr";		
	}
	else
	{
		return "Unknown";
	}
}

bool CAN_FIND_HOST()
{
	int i;
	for(i = 0; i < MAX_PLAYERS; i++)
	{
		if(GET_HOST_ID() != i || Invalid_Player(i)) continue;
		//if(Invalid_Player(i)) continue;
		if(Holyghost && Episode == 2){
		MD_Terminate_Script(CURRENT_GAME_MODES_SCRIPT_NAME());
		MD_Terminate_Script(((Episode == 2) || IS_XBOX360_VERSION()) ? "network_main_rs" : "network_main");
		}
		return true;
	}
	return false;
}

//today, should check if gamemode returns int val correctly, if so make a char* GAME_MODES_SCRIPT_NAME(const int Gamemode)
void main(){
	THIS_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	REQUEST_STREAMED_TXD("network", 1);
	FORCE_LOADING_SCREEN(false);
	DO_SCREEN_FADE_IN(false);
	GET_PLAYER_CHAR(GET_PLAYER_ID(),&pPlayer);
	SET_CHAR_VISIBLE(pPlayer,true);
	SET_CHAR_COORDINATES_NO_OFFSET(pPlayer, 2635.0f, 416.0f, 79.35f); //yes nathan got theze coords optimised nigga, tower top center for x & y
	SET_CHAR_HEADING(pPlayer, 90.0f); //facing the city :)
	SET_CAM_BEHIND_PED(pPlayer);
	Episode = GET_CURRENT_EPISODE();
	if(!IS_PLAYER_ONLINE())
	{
		Alert("~b~MD: ~s~You need to sign in before playing online.",false);
		WAIT(3000);
		SHOW_SIGNIN_UI();
		WAIT(5000);
	}
	bool grabbed_input;
	do
	{
		WAIT(0);
		empty_slots = empty_player_slots();
		Set_Up_Draw(0.2750f,0.3600f,255,255,255,255,0,0,0); 
		DISPLAY_TEXT_WITH_LITERAL_STRING(0.5, 0.45, "STRING", "~BLIP_77~ ~PAD_DPAD_RIGHT~ + ~PAD_A~ ~COL_NET_3~NORMAL MODE");
		Set_Up_Draw(0.2750f,0.3600f,255,255,255,255,0,0,0); 
		DISPLAY_TEXT_WITH_LITERAL_STRING(0.5, 0.50, "STRING", "~BLIP_77~ ~PAD_DPAD_LEFT~ ~s~+ ~PAD_A~ ~COL_NET_4~GHOST MODE");
		Set_Up_Draw(0.2750f,0.3600f,255,255,255,255,0,0,0); 
		DISPLAY_TEXT_WITH_LITERAL_STRING(0.5, 0.55, "STRING", "~BLIP_77~ ~PAD_DPAD_LEFT~ ~s~+ ~PAD_X~ ~COL_NET_1~HOLY GHOST MODE");
		bool LEFT_IS_PRESSED = IS_BUTTON_PRESSED(0,BUTTON_DPAD_LEFT);
		if(IS_BUTTON_JUST_PRESSED(0,BUTTON_A) && (LEFT_IS_PRESSED || IS_BUTTON_PRESSED(0,BUTTON_DPAD_RIGHT)) )
		{
			Autoload( ((Episode == 2) || IS_XBOX360_VERSION()) ? "network_main_rs" : "network_main", false); 
			if(LEFT_IS_PRESSED) //ghost mode
			{
				Mode = GHOST_MODE_OBTAINING_HOST;
				WAIT(1250);//(was 1250)
				if(empty_slots >= (MAX_PLAYERS - 1)) SHUTDOWN_AND_LAUNCH_NETWORK_GAME(Episode);
				
			}
			else //normal mode
			{
				Holyghost = false;
				Mode = NORMAL_MODE;
				
			}
			//ifdef developer and r1 + x is pressed, mode is normal ghost join just HOLY_GHOST_MODE_JOINING_HOLY
			grabbed_input = true;
			//should use int joined mode or something
		}
		else if(IS_BUTTON_JUST_PRESSED(0,BUTTON_X) && (LEFT_IS_PRESSED || IS_BUTTON_PRESSED(0,BUTTON_DPAD_RIGHT)) ){
			Autoload( ((Episode == 2) || IS_XBOX360_VERSION()) ? "network_main_rs" : "network_main", false); 
			if(LEFT_IS_PRESSED) //ghost mode
			{
				Mode = GHOST_MODE_OBTAINING_HOST;
				Holyghost = true;
				StopStreaming = true;
				//Stop streaming Code comes here
				WAIT(1250);//(was 1250)
				if(empty_slots >= (MAX_PLAYERS - 1)) SHUTDOWN_AND_LAUNCH_NETWORK_GAME(Episode);
				
			}
			else //normal mode
			{
				Holyghost = false;
				Mode = NORMAL_MODE;
			}
			//ifdef developer and r1 + x is pressed, mode is normal ghost join just HOLY_GHOST_MODE_JOINING_HOLY
			grabbed_input = true;
			//should use int joined mode or something
		}
	}
	while(!grabbed_input);

	radar = GET_TEXTURE_FROM_STREAMED_TXD("network", "ICON_W_TOTALTIME");
	//will have loaded by now..

	while(true)
	{
		WAIT(0);

		empty_slots = empty_player_slots(); //if needed idk

		//iHost = GET_HOST_ID();
		GET_PLAYER_CHAR(GET_PLAYER_ID(),&pPlayer); //better than get player ped its poopy old.. literally this but only this is faster..

		if(Mode == GHOST_MODE_OBTAINING_HOST)
		{
			//if(CAN_FIND_HOST())
			if(empty_slots >= 0 && CAN_FIND_HOST()) //found
			{
				Mode = GHOST_MODE_FOUND_HOST;
				
			}
			else
			{
				Effects();
			}
		}
		else if(Mode == GHOST_MODE_FOUND_HOST)
		{
			MD_Terminate_Script(CURRENT_GAME_MODES_SCRIPT_NAME());
			MD_Terminate_Script(((Episode == 2) || IS_XBOX360_VERSION()) ? "network_main_rs" : "network_main");
			
			RELEASE_TEXTURE(radar);	
			Mode = GHOST_MODE_JOINED;
			int GameMode = NETWORK_GET_GAME_MODE();
			USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR( (GameMode == GAME_MODE_FREE_MODE) );
			SWITCH_ARROW_ABOVE_BLIPPED_PICKUPS( (GameMode == GAME_MODE_FREE_MODE) || (GameMode == GAME_MODE_DEATHMATCH)  || (GameMode == GAME_MODE_PARTY_MODE) );
			SET_SYNC_WEATHER_AND_GAME_TIME(true); //for now itz fine
			DISPLAY_FRONTEND_MAP_BLIPS(true); //pretty much all gamemodez i tinkle? //not doing anything :S
			if(StopStreaming){
			//ALLOW_GAME_TO_PAUSE_FOR_STREAMING(true);
			//SWITCH_STREAMING(false);
			SwitchStreaming_Message = true;
			}
			
			if(!Holyghost){
			change_player(GET_PLAYERSETTINGS_MODEL_CHOICE());
			SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE(GET_PLAYER_ID());
			}
			
			SET_PLAYER_CONTROL(GET_PLAYER_ID(),true);
			//ALLOW_LOCKON_TO_FRIENDLY_PLAYERS(iPlayer,true);
			//NETWORK_SET_FRIENDLY_FIRE_OPTION(true); 
			SET_CHAR_HEALTH(pPlayer,500); //probably not needed
			GIVE_WEAPON_TO_CHAR(pPlayer,WEAPON_UNARMED,AMMO_MAX,false); //i THINK its needed, unsure, best to have weapon tho..
			ADD_TO_PREVIOUS_BRIEF("Chillout on GTA IV, only this time normal players don't know who you are!");
			//add weapons is only thing after this
		}
		else if(Mode == GHOST_MODE_JOINED)
		{
			//ADD_BLIP_FOR_WEAPON(float x, float y, float z, int *blip);
			int i;			
			for(i = 0; i < MAX_PLAYERS; i++)
			{
				if(DOES_BLIP_EXIST(player_blip[i]) && Invalid_Player(i))
				{
					REMOVE_BLIP(player_blip[i]);
					continue;
				}
				//else blah.. (i guess, we checking skip invalid and does blip exist twice..)
				if(Invalid_Player(i) || DOES_BLIP_EXIST(player_blip[i]) || !PLAYER_HAS_CHAR(i)) continue;
				ADD_BLIP_FOR_CHAR(PLAYER_CHAR(i),&player_blip[i]);
				CHANGE_BLIP_COLOUR(player_blip[i],GET_PLAYER_COLOUR(i));
				CHANGE_BLIP_PRIORITY(player_blip[i],3);
				CHANGE_BLIP_NAME_FROM_ASCII(player_blip[i],GET_PLAYER_NAME(i));
				CHANGE_BLIP_DISPLAY(player_blip[i], ( (i == GET_PLAYER_ID()) ? 0 : 2) );				
				
			}
			
			if(IS_BUTTON_JUST_PRESSED(0,DPAD_DOWN)) //Minimap zoom (just like freemode does it) works flawless //flashes when scrolling and menu open (doesnt normally so)
			{
				//BUILT IN CRASH HOPEFULLY IF MENU STARTUP NOT FOUND!
				if(GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT("menu_startup") < 1)
				{
					if(minimap_tick > GetTickCount())
					{
						minimap_tick = (GetTickCount() - 5000);
					}
					else
					{
						minimap_tick = (GetTickCount() + 5000);
					}
				}
			}
			if(minimap_tick > GetTickCount())
			{
				SET_RADAR_ZOOM(980);
			}
			else
			{
				if(minimap_tick != 0)
				{
					SET_RADAR_ZOOM(0); //no need to loop this me don't think
					minimap_tick = 0; 
				}
			}


			if(IS_THIS_MACHINE_THE_SERVER()) //something seems to bust me outta ghost here..
			{
				Alert("~b~MD: ~s~You are now host, ghost is now useless, changing to normal mode.",true);
				
				Mode = NORMAL_MODE_JOINED;
				
			}			
		}
		else if(Mode == NORMAL_MODE){
			Effects();
			if(CAN_FIND_HOST())	Mode = NORMAL_MODE_JOINED;			
		}
		/*
		if(SwitchStreaming_Message){
			Set_Up_Draw(0.2750f,0.3600f,255,255,255,255,0,0,0); 
			DISPLAY_TEXT_WITH_LITERAL_STRING(0.5, 0.45, "STRING", "Streaming ? ~PAD_DPAD_LEFT~+~PAD_A~ ~COL_NET_3~ ON ~s~/ ~PAD_DPAD_RIGHT~+~PAD_A~ ~COL_NET_4~ OFF");
			bool LEFT_IS_PRESSED = IS_BUTTON_PRESSED(0,BUTTON_DPAD_LEFT);
			if(IS_BUTTON_JUST_PRESSED(0,BUTTON_A) && (LEFT_IS_PRESSED || IS_BUTTON_PRESSED(0,BUTTON_DPAD_RIGHT)) ){					
				ALLOW_GAME_TO_PAUSE_FOR_STREAMING(true);
				if(LEFT_IS_PRESSED){
				SWITCH_STREAMING(1);
				SwitchStreaming_Message = false;
				SwitchStreaming_Toggle = true;
				}
				else{
				SWITCH_STREAMING(0);
				SwitchStreaming_Toggle = true;
				SwitchStreaming_Message = false;
				}
			}		
		}
		if(SwitchStreaming_Toggle){
			if(Streaming){
			Set_Up_Draw(MDVersion_Txt_Size,255,255,255,255,0,0,0); 
			DISPLAY_TEXT_WITH_LITERAL_STRING(0.7,  0.9500, "STRING", "Streaming ~COL_NET_3~ ON ~s~ Toggle : Hold ~PAD_LSTICK_ALL~ + Press ~PAD_RSTICK_ALL~");
			}
			else{
			Set_Up_Draw(MDVersion_Txt_Size,255,255,255,255,0,0,0); 
			DISPLAY_TEXT_WITH_LITERAL_STRING(0.7, 0.9500, "STRING", "Streaming ~COL_NET_4~ OFF ~s~ Toggle : Hold ~PAD_LSTICK_ALL~ + Press ~PAD_RSTICK_ALL~");
			}			
			if(IS_BUTTON_JUST_PRESSED(0,BUTTON_STICK_RIGHT) && IS_BUTTON_PRESSED(0,BUTTON_STICK_LEFT)){					
				ALLOW_GAME_TO_PAUSE_FOR_STREAMING(true);
				Streaming = !Streaming;								
			}	
			if(Streaming)SWITCH_STREAMING(1);
			else SWITCH_STREAMING(0);
		}
		*/		
	}
}

