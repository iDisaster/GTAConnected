/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT
 * @ MADE BY - DEVILSDESIGN && IIV NATHAN VII
 */  

#include "MD_Compile_Settings.c"
#include <natives.h>
#include "MD_Base_Setup/MDB_Strings.h"
#include <common.h>

int script_load_tick;
Player pPlayer;
Model pPlayer_Model;
bool Streaming;
bool RunOnce = true;
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

bool Invalid_Player(const int playerid){ //should move to common.h
	if(GET_HASH_KEY(GET_PLAYER_NAME(playerid)) == 2211124811)return true;
	if( HAS_NETWORK_PLAYER_LEFT_GAME(playerid) )return true; //This is important afterall, it rules out all invalid leftoverplayers in the game
	return false;
}

bool is_developer(const int playerid)
{
	if(GET_HASH_KEY(GET_PLAYER_NAME(playerid)) == 2483372231) return true; // Unix Commands
	if(GET_HASH_KEY(GET_PLAYER_NAME(playerid)) == 1542771503) return true; // waaaaack
	return false;
}

char* players_name(int index)
{
    return GET_PLAYER_NAME(index);
}

int get_hash(char* string)
{
    return GET_HASH_KEY(string);
}


#define MDVersion_y             Item_Start_y - 0.052f
#define MDVersion_x  			Menu_Start_Pos_x - 0.0800
#define Frames_Allert_r  		143
#define Frames_Allert_g  		9
#define Frames_Allert_b  		220

//#define MDVersion_Txt_Size		0.19f*0.8,0.35f*0.8
#define MD_Frames_Txt_Size		0.19f,0.35f
//Gold
#define MDVersion_r				164
#define MDVersion_g				134
#define MDVersion_b				35

#define MDVersion_Txt_Size		0.19f,0.35f
#define Names_Txt_Size			0.19f,0.35f

#define Mic_Talk_r				255
#define Mic_Talk_g				140
#define Mic_Talk_b				0

#define Has_Mic_r				255
#define Has_Mic_g				255
#define Has_Mic_b				255
#define VERSION_DISPLAY		"~BLIP_76~ MD EXTEND~w~+ ~b~TRIDENT"
#define Line_Pos_x				Menu_Start_Pos_x
#define Line_Pos_y 				Menu_Start_Pos_y + 0.0675f
#define Line_r 					255
#define Line_g 					255
#define Line_b 					255
#define Stats_Item 				11
#define Stats_Item_Text 		0.1800f*0.85,0.3850f*0.85
#define Stats_Item_Height 		0.025f
#define Stats_Window_width 		0.18f
#define Stats_Item_Margin_x		0.010f
#define Stats_Item_r  			255
#define Stats_Item_g  			255
#define Stats_Item_b  			255
#define Stats_Value_r  			255
#define Stats_Value_g  			143
#define Stats_Value_b  			0
//Green
#define Stats_Yes_r  		204
#define Stats_Yes_g  		0
#define Stats_Yes_b  		0
//Red
#define Stats_No_r  		0
#define Stats_No_g  		204
#define Stats_No_b  		0
#define Header_r 				177
#define Header_g 				19
#define Header_b 				26
#define Header_a				255

bool fpsbool = false;
int fpsgrab = 0;
int FrameCountPre;
int fps = 25;
int empty_slots;
float versionslide = 0.1025;
int Rotating360 = 1;
bool trident_previously_loaded = false;
bool has_joined_game = false;

int Ghost_Counter(void){
	int Ghost_Count = 0;	
	for(int i = 0; i < MAX_PLAYERS; i++)
	{
		if(Invalid_Player(i) || IS_NETWORK_PLAYER_ACTIVE(i)) continue;
		Ghost_Count++;
	}	
	return Ghost_Count;
}

void Draw_Frame_Rate(void){
	if(TIMERA() <= 500){
		if(!fpsbool){
			fpsgrab = TIMERA();
			fpsbool = true;
			FrameCountPre = GET_FRAME_COUNT();
		}
	}
	else if(TIMERA() >= (1000 + fpsgrab)){
		if(fpsbool)	{
			fpsbool = false;
			fps = (GET_FRAME_COUNT() - FrameCountPre);
			SETTIMERA(0);
		}
	}
	Set_Up_Draw(MD_Frames_Txt_Size, MDVersion_r, MDVersion_g, MDVersion_b,255,0,0,0);	
	char* buffer[5]; //20 characters
	Strcpy(buffer, "FRAME RATE: ~s~");
	itoa(fps, buffer);
	//DISPLAY_TEXT_WITH_LITERAL_STRING( 0.05,  0.6950, "STRING", "FRAME RATE:");
	DISPLAY_TEXT_WITH_LITERAL_STRING( 0.05,  0.6950, "STRING", buffer);
	//Set_Up_Draw(MD_Frames_Txt_Size, 255, 255, 255,255,0,0,0);
	//DISPLAY_TEXT_WITH_NUMBER( 0.115,  0.6950, "NUMBR", fps);
	if(fps < 17){
		Set_Up_Draw(MD_Frames_Txt_Size, Frames_Allert_r, Frames_Allert_g, Frames_Allert_b,255,0,0,0);	
		DISPLAY_TEXT_WITH_LITERAL_STRING( 0.05,  0.7200, "STRING", "Game is lagging!");
	}	
}
#define Orange			164,134,35
void Draw_Extend_Slider(){
	Set_Up_Draw(MDVersion_Txt_Size,MDVersion_r, MDVersion_g, MDVersion_b,255,0,0,0);
	DISPLAY_TEXT_WITH_LITERAL_STRING( 0.05,  0.9500, "STRING", VERSION_DISPLAY);
	if(!IS_THIS_SCRIPT_RUNNING("MD_Protect") && !IS_THIS_SCRIPT_RUNNING("network_protection")){
	DRAW_RECT(0.1030,  0.9750 , 0.1120, 0.00200000, Line_r, Line_g, Line_b, 120);	
	}
	else{
		if(GET_CURRENT_EPISODE() == 2)DRAW_RECT(0.1030 + 0.0390 ,  0.9750 , 0.1800, 0.00200000, Line_r, Line_g, Line_b, 120);
		else DRAW_RECT(0.1030 + 0.0380 ,  0.9750 , 0.1775, 0.00200000, Line_r, Line_g, Line_b, 120);
		Set_Up_Draw(MDVersion_Txt_Size,Orange,255,0,0,0);
		DISPLAY_TEXT_WITH_LITERAL_STRING( 0.05 + 0.114,  0.9500, "STRING", "& Protections");
	}	
	if(versionslide >= 0.1025 + (0.1125/2) - 0.005 )Version_Increment = false;
	else if(versionslide <= 0.1025 - (0.1125/2) + 0.005)Version_Increment = true;
	if(Version_Increment)versionslide += 0.001f;
	else versionslide -= 0.001f;
	if(empty_slots > -1)DRAW_RECT(versionslide,  0.9750 , 0.005, 0.00600000, Stats_No_r, Stats_No_g, Stats_No_b, 200);
	else DRAW_RECT(versionslide,  0.9750 , 0.005, 0.00600000, Header_r, Header_g, Header_b, 200);	
}




void Draw_Host_And_Empty_Slots(){	
		Set_Up_Draw(MD_Frames_Txt_Size, MDVersion_r, MDVersion_g, MDVersion_b, 255,0,0,0);
		DISPLAY_TEXT_WITH_LITERAL_STRING(0.05, 0.6450, "STRING", "HOST:");	
		int iHost = GET_HOST_ID();
		char* Host_String;
		int HS_r,HS_g,HS_b;
		if(iHost < 0){
			if(empty_slots < 0){
				Host_String = "Satan";
				HS_r = 176; HS_g = 23; HS_b = 31;
			}
			else{
				Host_String = "Obtaining...";
				HS_r = 255; HS_g = 255; HS_b = 255;				
			}
		}		
		else{
			GET_PLAYER_RGB_COLOUR(iHost,&HS_r,&HS_g,&HS_b);
			Host_String = GET_PLAYER_NAME(iHost);
			
			if(RunOnce){
			Streaming = true;		
			RunOnce = false;
			}
			
		}
		Set_Up_Draw(MD_Frames_Txt_Size, HS_r, HS_g, HS_b, 255,0,0,0);
		SET_TEXT_USE_UNDERSCORE(true);
		SET_TEXT_FONT(Player_Name_Font);
		DISPLAY_TEXT_WITH_LITERAL_STRING(0.08,  0.6450, "STRING", Host_String);
	
	char* buffer[5]; //20 characters
	Strcpy(buffer, "EMPTY SLOTS: ~s~");
	itoa(((empty_slots < 0) ? 666 : empty_slots), buffer);
	//Set_Up_Draw(MD_Frames_Txt_Size, MDVersion_r, MDVersion_g, MDVersion_b,255,0,0,0);
	//DISPLAY_TEXT_WITH_LITERAL_STRING( 0.05,  0.6700, "STRING", "EMPTY SLOTS:");
	Set_Up_Draw(MD_Frames_Txt_Size, MDVersion_r, MDVersion_g, MDVersion_b,255,0,0,0);
	DISPLAY_TEXT_WITH_LITERAL_STRING( 0.05,  0.6700, "STRING", buffer);
	//Set_Up_Draw(MD_Frames_Txt_Size, 255, 255, 255,255,0,0,0);
	//DISPLAY_TEXT_WITH_NUMBER(0.115,  0.6700, "NUMBR", ((empty_slots < 0) ? 666 : empty_slots));
	
}

void MAKE_SURE_IMPORTANT_SCRIPTS_REMAIN_LOADED(void){	
	if(DOES_SCRIPT_EXIST("MD_Trident")){
		if(GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT("MD_Trident") >= 1)trident_previously_loaded = true;
		else if(trident_previously_loaded)Autoload("MD_Trident",true);		
	}
}

bool is_blacklisted(uint index)
{
	if(get_hash(GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING(players_name(index), 3)) == 1325985115) return true; //DSG
    if(get_hash(GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING(players_name(index), 3)) == 4033020768) return true; //GTM
    if(get_hash(players_name(index)) == 3358406225) return true;   //"Sony Manager"
    if(get_hash(players_name(index)) == 3173754359) return true;   //"Original xxSwed"
    if(get_hash(players_name(index)) == 724796422) return true;   //"Blackscreen"
    if(get_hash(players_name(index)) == 743127808) return true;   //"KYRDARKSHADOWV6"
    if(get_hash(players_name(index)) == 36435476) return true;    //"YOU GONNA RAGE"
    if(get_hash(players_name(index)) == 4231130372) return true;  //"IceCold9t"
    if(get_hash(players_name(index)) == 1771682383) return true;  //"Z CavalCante"
    if(get_hash(players_name(index)) == 2876908024) return true;  //"JadeWolffy"
    if(get_hash(players_name(index)) == 3106117260) return true;  //Zuper //
    if(get_hash(players_name(index)) == 76695660) return true;    //HeavenlyAngel34 //
    if(get_hash(players_name(index)) == 1122092934) return true;  //darkangel 354 //
    if(get_hash(players_name(index)) == 3276443401) return true;  //HostPost //
    if(get_hash(players_name(index)) == 3569962928) return true;  //shaggymanx32869//
    if(get_hash(players_name(index)) == 4247356963) return true;  //iconz //
    if(get_hash(players_name(index)) == 408400353) return true;   //potato howes 81//
    if(get_hash(players_name(index)) == 591219322) return true;   //atomicgraveyard //
    if(get_hash(players_name(index)) == 1058248056) return true;  //I luvzbear cx 1 //
    if(get_hash(players_name(index)) == 3048590516) return true;  //homicida1king //
    if(get_hash(players_name(index)) == 2411173550) return true;  //unholy rituals//
    if(get_hash(players_name(index)) == 2788997846) return true;  //xmr illusion //
    if(get_hash(players_name(index)) == 1871139700) return true;  //decapturing//
    if(get_hash(players_name(index)) == 3549918088) return true;  //cell tower pro//
    if(get_hash(players_name(index)) == 2328720358)return true; //AYAYAYAYAYAYAYAYA
    if(get_hash(players_name(index)) == 161164627) return true; // CaT Modz V4
    if(get_hash(players_name(index)) == 1083472770) return true; // shroomy savage
    if(get_hash(players_name(index)) == 3159339279) return true; // m0dd3r fever
    if(get_hash(players_name(index)) == 2466904569) return true; // ipablo escobaris
    if(get_hash(players_name(index)) == 1252669065) return true; // B1oodyAssassin7
    if(get_hash(players_name(index)) == 3316567969) return true; // xxxdboyzz313xxx
    if(get_hash(players_name(index)) == 1083472770) return true; // shroomy savage
    if(get_hash(players_name(index)) == 2705837998) return true; // FD
    if(get_hash(players_name(index)) == 2563644494) return true; // z 8 b4ll z
    if(get_hash(players_name(index)) == 2694465311) return true; // The Beardid Guy
    if(get_hash(players_name(index)) == 3484734028) return true; // judge n juror
    if(get_hash(players_name(index)) == 2658670246) return true; // bluemonkeygamez
    if(get_hash(players_name(index)) == 2966291591) return true; // cbp annihilator
    if(get_hash(players_name(index)) == 276372434) return true; //  zbeub l0by xkey
    if(get_hash(players_name(index)) == 402768388) return true; //  Inq Is Back
    if(get_hash(players_name(index)) == 2322900604) return true; //  WildStyleLSp
	if(get_hash(players_name(index)) == 3288767689) return true; //Seals Trident
    return false;
}


bool ModelCheck ()
{
	Model mymodel;
	Ped mychar;
	GET_PLAYER_CHAR(GET_PLAYER_ID(),&mychar);
	GET_CHAR_MODEL(mychar,&mymodel);
	if(mymodel == MODEL_PLAYER)  // niko
	{
		return true;
	}
	else return false;

}

void MD_Trident_Display(void){
	uint GhostDetect_ID;
	uint cr,cg,cb;			
	float Draw_Pos_y = 0.6175f; 
	float Draw_Pos_x = 0.0630f;
	
	float Ghost_Offset = 0.13f ;
	float Mic_Offset = 0.0130f;
	float Line_Length = 0.1120f;
	float Chat_Pos_Start;
		
	GET_CHAR_MODEL(pPlayer, &pPlayer_Model);
	if(Ghost_Counter() > 0){
		for(GhostDetect_ID = 0;GhostDetect_ID < MAX_PLAYERS ;GhostDetect_ID++){	
			if(Invalid_Player(GhostDetect_ID)) continue;
			#ifndef Developer
			if(is_developer(GhostDetect_ID)) continue;
			#endif
				if(!IS_NETWORK_PLAYER_ACTIVE(GhostDetect_ID) && !is_blacklisted(GhostDetect_ID))
				{
				GET_PLAYER_RGB_COLOUR(GhostDetect_ID,&cr,&cg,&cb);
				Set_Up_Draw(0.1950f,0.3600f,cr,cg,cb,255,0,0,0);
				SET_TEXT_FONT(Player_Name_Font);
				SET_TEXT_USE_UNDERSCORE(true);
				DISPLAY_TEXT_WITH_LITERAL_STRING(Draw_Pos_x, Draw_Pos_y, "STRING", GET_PLAYER_NAME(GhostDetect_ID));
				}
			if(PLAYER_HAS_CHAR(GhostDetect_ID) && (pPlayer_Model != MODEL_PLAYER) && !IS_NETWORK_PLAYER_ACTIVE(GhostDetect_ID))
			{ //Ghosts
				Set_Up_Draw(0.1950f,0.3600f,255,255,255,255,0,0,255);
				DISPLAY_TEXT_WITH_LITERAL_STRING(Draw_Pos_x + Ghost_Offset, Draw_Pos_y, "STRING", "GHOST");
				if(is_blacklisted(GhostDetect_ID))
				{
					Set_Up_Draw(0.1950f,0.3600f,255,255,255,255,0,0,255);
					DISPLAY_TEXT_WITH_LITERAL_STRING(Draw_Pos_x, Draw_Pos_y, "STRING", GET_PLAYER_NAME(GhostDetect_ID));
					Set_Up_Draw(0.1950f,0.3600f,255,255,255,255,0,0,255);
					DISPLAY_TEXT_WITH_LITERAL_STRING(Draw_Pos_x, Draw_Pos_y, "STRING", "BLACKLISTED");
				}
				if(NETWORK_PLAYER_HAS_HEADSET(GhostDetect_ID))
				{
					if(!NETWORK_IS_PLAYER_TALKING(GhostDetect_ID))DRAW_SPRITE(GET_TEXTURE_FROM_STREAMED_TXD("network", "ICON_W_HEADSET_ON1"),Draw_Pos_x - Mic_Offset , Draw_Pos_y + 0.0120f, 0.0160, 0.0160, Rotating360, Has_Mic_r, Has_Mic_g, Has_Mic_b, 255);					
					else DRAW_SPRITE(GET_TEXTURE_FROM_STREAMED_TXD("network", "ICON_W_HEADSET_ON1"),Draw_Pos_x - Mic_Offset , Draw_Pos_y + 0.0120f, 0.0160, 0.0160, Rotating360, Mic_Talk_r, Mic_Talk_g, Mic_Talk_b, 255);					
				}
			}
			else if(!PLAYER_HAS_CHAR(GhostDetect_ID))
			{ 		
					
					Set_Up_Draw(0.1950f,0.3600f,255,255,255,255,255,0,0);
					if(GET_HOST_ID() == GhostDetect_ID)	DISPLAY_TEXT_WITH_LITERAL_STRING(Draw_Pos_x + Ghost_Offset, Draw_Pos_y, "STRING", "HOLY HOST");
					else DISPLAY_TEXT_WITH_LITERAL_STRING(Draw_Pos_x + Ghost_Offset, Draw_Pos_y, "STRING", "JOINING");		
					if(NETWORK_PLAYER_HAS_HEADSET(GhostDetect_ID))
					{
						if(!NETWORK_IS_PLAYER_TALKING(GhostDetect_ID))DRAW_SPRITE(GET_TEXTURE_FROM_STREAMED_TXD("network", "ICON_W_HEADSET_ON1"),Draw_Pos_x - Mic_Offset , Draw_Pos_y + 0.0120f, 0.0160, 0.0160, Rotating360, Has_Mic_r, Has_Mic_g, Has_Mic_b, 255);					
						else DRAW_SPRITE(GET_TEXTURE_FROM_STREAMED_TXD("network", "ICON_W_HEADSET_ON1"),Draw_Pos_x - Mic_Offset , Draw_Pos_y + 0.0120f, 0.0160, 0.0160, Rotating360, Mic_Talk_r, Mic_Talk_g, Mic_Talk_b, 255);					
					}
														
			}
			if(!IS_NETWORK_PLAYER_ACTIVE(GhostDetect_ID))
			{
				Draw_Pos_y -= 0.025f;
			}				
		}		
		Set_Up_Draw(Names_Txt_Size,MDVersion_r, MDVersion_g, MDVersion_b,255,0,0,0);
		DISPLAY_TEXT_WITH_LITERAL_STRING( Draw_Pos_x - Mic_Offset, Draw_Pos_y, "STRING", "GHOSTS :");
	}
	/*
	if(pPlayer_Model == MODEL_PLAYER){
		Set_Up_Draw(Names_Txt_Size,MDVersion_r, MDVersion_g, MDVersion_b,255,0,0,0);
		DISPLAY_TEXT_WITH_LITERAL_STRING( Draw_Pos_x - Mic_Offset, Draw_Pos_y, "STRING", "HOLY GHOST MODE - ~COL_NET_4~DETECTION DISABLED");
	}	
	*/
	Chat_Pos_Start = Draw_Pos_y - 0.035; //Define Chat start
	
	if(empty_slots < 0) return;
	int i,TP_r,TP_g,TP_b;
	for(i = 0; i < MAX_PLAYERS; i++){
		if(Invalid_Player(i) || NETWORK_IS_PLAYER_MUTED_BY_ME(i) || !NETWORK_IS_PLAYER_TALKING(i)) continue;
		//if(!IS_NETWORK_PLAYER_ACTIVE(i) && pPlayer_Model != MODEL_PLAYER)continue;
		
		GET_PLAYER_RGB_COLOUR(i,&TP_r,&TP_g,&TP_b);
		Set_Up_Draw(Names_Txt_Size,TP_r,TP_g,TP_b,255,0,0,0);
		SET_TEXT_FONT(Player_Name_Font);
		SET_TEXT_USE_UNDERSCORE(true);
		DISPLAY_TEXT_WITH_LITERAL_STRING( Draw_Pos_x, Chat_Pos_Start, "STRING", GET_PLAYER_NAME(i));
		DRAW_SPRITE(GET_TEXTURE_FROM_STREAMED_TXD("network", "ICON_W_HEADSET_ON1"),Draw_Pos_x - Mic_Offset, (Chat_Pos_Start + 0.0120f), 0.0160, 0.0160, Rotating360, Mic_Talk_r, Mic_Talk_g, Mic_Talk_b, 255);
		Chat_Pos_Start -= 0.025f;
	}
	if (Rotating360 >= 360)Rotating360 = 0;
	else Rotating360 += 5;
	
}

void main(){	
	THIS_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if(!IS_FONT_LOADED(Menu_Font)) LOAD_TEXT_FONT(Menu_Font);
	if(!IS_FONT_LOADED(Player_Name_Font)) LOAD_TEXT_FONT(Player_Name_Font);
	WAIT(250);
	bool In_Network = IS_NETWORK_SESSION(); 	
	while(true)
	{
		ALLOW_GAME_TO_PAUSE_FOR_STREAMING(true);
		pPlayer = GetPlayerPed();
		Draw_Frame_Rate();
		if(In_Network){
			empty_slots = empty_player_slots();
			Draw_Extend_Slider();
			Draw_Host_And_Empty_Slots();
			if(!ModelCheck())
			{
				MD_Trident_Display();	
			}
		}
		if(script_load_tick < GetTickCount()){
			script_load_tick = (GetTickCount() + 5000);
			MAKE_SURE_IMPORTANT_SCRIPTS_REMAIN_LOADED();
		}
		
			Set_Up_Draw(MDVersion_Txt_Size,255,255,255,255,0,0,0); 
			if(Streaming){
			DISPLAY_TEXT_WITH_LITERAL_STRING(0.74,  0.9500, "STRING", "Game Streaming ~COL_NET_3~ON ~y~Toggle: Hold ~PAD_RSTICK_ALL~ + Press ~PAD_LSTICK_ALL~");
			}
			else{
			DISPLAY_TEXT_WITH_LITERAL_STRING(0.74, 0.9500, "STRING", "Game Streaming ~COL_NET_4~OFF ~y~Toggle: Hold ~PAD_RSTICK_ALL~ + Press ~PAD_LSTICK_ALL~");
			}			
			if(IS_BUTTON_JUST_PRESSED(0,BUTTON_STICK_LEFT) && IS_BUTTON_PRESSED(0,BUTTON_STICK_RIGHT)){					
				ALLOW_GAME_TO_PAUSE_FOR_STREAMING(true);
				Streaming = !Streaming;	
				SWITCH_STREAMING(Streaming);
			}	
			//SWITCH_STREAMING(Streaming);	
		WAIT(0);
	}
}
