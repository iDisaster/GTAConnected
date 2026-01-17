/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */

#pragma once

char* MD_Version;
char* MD_SubVersion;
char* MENU_HEADER;
char* MENU_SUB_HEADER;
char* MENU_FOOTER;
char* null_string;
//char* custom_bool_on;
//char* custom_bool_off;
char* load_script;
char* Essentials_script[MAX_MENU_ITEMS];

#define ETC  ~COL_NET_4~
#include "MD_Compile_Settings.c"

/**Version info for Detection*/
//#define Version_Advertise 130 //1301 would be v13.01, this will just be v13
/**Version Title*/
#define MD_Extend_Header 		"E  X  T  E  N  D"
#define MD_Extend_SubHeader  	"~BLIP_76~  T  R  I  D  E  N  T  ~BLIP_76~"
#define MD_Version 				"v13"
#ifdef Beta
#define MD_SubVersion 				"BETA"
#else
#define MD_SubVersion 				"~BLIP_73~"
#endif
#define MD_Creators 				"~BLIP_76~ Made by Devilsdesign & IIV NATHAN VII~BLIP_76~"
#define MD_Display_Welcome			"~COL_NET_4~Welcome to MD Trident V13! ~n~ ~w~ Open with :(Hold) ~PAD_DPAD_DOWN~ + (press)~PAD_B~"
#define VERSION_DISPLAY		"~BLIP_76~ MD EXTEND~w~+ ~COL_NET_4~TRIDENT"


/**Footers*/
#define menu_lfooter "~b~MD: ~s~Made by ~r~DEVILSDESIGN ~s~& ~r~IIV NATHAN VII"
#define menu_rfooter "     ~BLIP_76~ Visit www.consolecrunch.com for updates! ~BLIP_76~"
#define MD_Extend_Footer "Made by DEVILSDESIGN & IIV NATHAN VII"

/**Error Messages used in the menu*/
#define ADMIN_ONLY_STRING			"~b~MD: ~s~This feature is admin only."
#define Error_Personal_Vehicle 		"~b~MD: ~s~You need to be in a vehicle to use this feature."
#define Error_NetPlayer_Vehicle 	"~b~MD: ~s~Player is not in a vehicle."
#define Error_Model_Missing			"~b~MD: ~s~Model is missing from img files."
#define Error_Char_Missing			"~b~MD: ~s~Player has no character, action can not be performed."
#define Error_No_Player				"~b~MD: ~s~Player does not exist anymore, action can not be performed."
#define Error_ID_Control			"~b~MD: ~s~Unable to control ID, action can not be performed."
#define Error_TBOGT					"~b~MD: ~s~TBOGT Only!"
#define Colours_Updated				"~b~MD: ~s~Vehicle Colours saved! Function Enabled.~n~ Go to spawn settings to disable."
#define Essentials_Error ""
#define Essentials_Error_invalid "Not available currently."
#define Essentials_Error_script "Add your own .sco's!"
#define Essentials_Error_goback "Press ~INPUT_FRONTEND_CANCEL~ to go back."

/**Generally used txt in menu**/
#define PrintON		" ~COL_NET_3~ON" //mehhhhhhh
#define PrintOFF	" ~COL_NET_4~OFF"
//Add strinchecker here

void Security_Check(void){
	/*
	if((SecureTextForEditing("MD  E X T E N D  ~BLIP_73~", 28, 3569161059))){
	Alert(MD_Display_Welcome,true);
	}
	else{
	Freeze_Self();
	}
	*/
}