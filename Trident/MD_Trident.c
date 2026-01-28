/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Current Version : TRIDENT
 * @ MADE BY - DEVILSDESIGN
 */ 

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wcomment"
#pragma clang diagnostic ignored "-Wpointer-sign"
#pragma clang diagnostic ignored "-Wint-conversion"
#pragma clang diagnostic ignored "-Wconstant-conversion"
 //!Dont change below*/
#include "MD_Compile_Settings.c"
#include "inc/natives.h"
#include "MD_Base_Setup/MDB_Strings.h"
#include "inc/common.h"
#include "inc/consts.h"
//#include <MDB_Vars.h>
#include "MD_Base_Setup/MDB_Vars.h"
#include "MD_Base_Setup/MDB_Language.h"
#define PremiumPrint "~COL_NET_6~MD ~s~PREMIUM ~COL_NET_4~Press ~PAD_DPAD_DOWN~ + ~PAD_B~ to open."
#define PublicPrint "~COL_NET_6~MD ~s~PREMIUM ~COL_NET_4~Press ~PAD_DPAD_DOWN~ + ~PAD_B~ to open."
#define AdminPrint "~COL_NET_6~MD ~s~PREMIUM ~COL_NET_4~Press ~PAD_DPAD_DOWN~ + ~PAD_B~ to open."
#define SuperAdminPrint "~COL_NET_6~MD ~s~PREMIUM ~COL_NET_4~Press ~PAD_DPAD_DOWN~ + ~PAD_B~ to open."
#define DeveloperPrint "~COL_NET_6~MD ~s~PREMIUM ~COL_NET_4~Press ~PAD_DPAD_DOWN~ + ~PAD_B~ to open."

#include "MD_Functions/MDF_Shared_Functions_Required_By_Admin.c"
#include "MD_Security/MDS_Security.h"
#include "MD_Security/MDS_User_Verification.h"

#include "MD_Base_Setup/MDB_Looped_Setup.c"

//!!Always check here first before making new ones!!!
#include "MD_Strings/MD_Generally_Used_Strings.c" //**New!! - Updated 25.07.2017**/ 
//!
#include "MD_Strings/MDSTR_Shortcut_Strings.c" //**New!! - Updated 10.03.2017**/
#include "MD_Strings/MDSTR_Animation_Strings.c" //**New!! - Updated 19.03.2017**/
#include "MD_Strings/MDSTR_ChangePlayer_Strings.c" //**New!! - Updated 20.03.2017**/
#include "MD_Strings/MDSTR_Admin_Strings.c"
#include "MD_Strings/MDSTR_Netplayer_unfriendly.c"//**New!! - Updated 06/05/2017**/
#include "MD_Strings/MDSTR_Weapon_Strings.c" //**New!! - Updated 19.03.2017**/
#include "MD_Strings/MDSTR_Attachment_Strings.c" //**New!! - Updated 18.03.2017**/
#include "MD_Strings/MDSTR_Rotation_Strings.c" //**New!! - Updated 21.03.2017**/
#include "MD_Strings/MDSTR_Army_Strings.c"//**New!! - Updated 22.03.2017**/

#include "MD_Strings/MDSTR_ContentBuilder_Strings.c"
#include "MD_Strings/MDSTR_Netplayer_Options_Strings.c"

#include "MD_Strings/MDSTR_Vehicle_Options_Strings.c"//**New!! - Updated 04.04.2017**/
#include "MD_Strings/MDSTR_Net_Vehicle_Options_Strings.c"//**New!! - Updated 23.04.2017**/
#include "MD_Strings/MDSTR_Navigator_Strings.c"//**New!! - Updated 23.07.2017**/
#include "MD_Strings/MDSTR_Player_Options_Strings.c"
#include "MD_Strings/MDSTR_Strings_BASE_Structure.c"



#include "MD_Functions/MDF_Shared_Functions.c"
#include "MD_Functions/MDF_Creation_Functions.c"
#include "MD_Functions/MDF_Army_Functions.c"
#include "MD_Base_Setup/MDB_Template.c"
#include "MD_Base_Setup/MDB_Menu_Functions.c"

#include "MD_Strings/MDSTR_Shortcut_Strings_Action.c" //**New!!**/
#include "MD_Strings/MDSTR_Animation_Strings_Action.c" //**New!!**/
#include "MD_Security/MDS_Admin_CC.c"
#include "MD_Contents/MDC_Main_Options.c"
#include "MD_Contents/MDC_Development_Options.c"
#include "MD_Contents/MDC_Premium_Main_Options.c"
#include "MD_Contents/MDC_Deletion_Options.c"
#include "MD_Contents/MDC_Menu_Settings.c"
#include "MD_Contents/MDC_Weapon_Options.c"
#include "MD_Contents/MDC_Weather_Options.c"
#include "MD_Contents/MDC_Player_Changer.c"
#include "MD_Contents/MDC_Teleport_Index.h"
#include "MD_Contents/MDC_Teleport_Options.c"
#include "MD_Contents/MDC_Army_Options.c"
#include "MD_Contents/MDC_Vehicle_Car_Spawner.c"
#include "MD_Contents/MDC_Vehicle_Garage_Pplayer.c"
#include "MD_Contents/MDC_Vehicle_Garage_Net.c"
#include "MD_Contents/MDC_Player_Options.c"
#include "MD_Contents/MDC_Navigator_Options.c"
#include "MD_Contents/MDC_Network_Player_Options.c"
#include "MD_Contents/MDC_Network_All_Player_Options.c"
#include "MD_Contents/MDC_Sco_Loading.c"
#include "MD_Contents/MDC_Invite_System.c" //PREMIUM ONLY!
#include "MD_Contents/MDC_Credits_Setup.c"
#include "MD_Functions/MDF_ContentBuilder_Functions.c"
#include "MD_Contents/MDC_Animation_Options.c"
#include "MD_Contents/MDC_Rotation_Options.c"
#include "MD_Contents/MDC_ContentBuilder_Options.c"
#include "MD_Contents/MDC_Attachment_Options.c"
#include "MD_Contents/MDC_Keyboard_Shortcuts.c"
#include "MD_Contents/MDC_Unfriendly_Options.c"
#include "MD_Contents/MDC_V13_Admin_Options.c"
#include "MD_Contents/MDC_Mapmods.c"
#include "MD_Contents/MDC_Mapmods_Scripts.c"
#include "MD_Content_Structure/MD_Menu_Setup.c"
#include "MD_Content_Structure/MD_Menu_Actions.c"
#include "MD_Base_Setup/MDB_Engine.c"
bool Debug_Checks = false;
bool RunOnce = true;
bool ModDraws;

void main(void)
{
	THIS_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if(!IS_FONT_LOADED(Menu_Font)) LOAD_TEXT_FONT(Menu_Font); 	
	#ifndef VERSION_PC
		is_xbox_version = IS_XBOX360_VERSION(); 
	#endif
	//Security_Check();
	SETTIMERA(0);
	In_Network = IS_NETWORK_SESSION();
	/*
	if(!MD_STRINGS_CHECK() || !GetBit misc options strings checked)
	{
		//set bit secure md strings check and get bit blah// only if already secure
	}
	*/
	////if(!GetBit, strings checked ||
	#ifdef Admin
		CreateByteSet(10,MAX_PLAYERS,0,0,&AdminByteSet);
	#endif
	CreateByteSet(MAX_PLAYERS,MAX_PLAYERS,MAX_PLAYERS,0,&SpectateAndAttachByteSet);
	CreateByteSet(50,25,0,3,&WeatherTimeAutoLockByteSet);
	Episode = GET_CURRENT_EPISODE();
	iPlayer = GET_PLAYER_ID(); //DONT CHANGE!
	
	#ifdef Premium
	while(secure)
	//Could do
	//for(i = 0; i < GetBit(blah, securebit); i = 0); //so basically while get bit is true, if false it'll terminate
	#else
	while(true)
	#endif
	{
		
		
		//!This is u!
		pPlayer = GetPlayerPed(); //PED
		iPlayer = GET_PLAYER_ID();//ID
		#ifndef Developer
		if(Is_Developer(iPlayer)){ //Stop spoofers
			Freeze_Self(); 
			int i;
			for(i = 0; i < MAX_PLAYERS; i++)FUCK_THA_HOLE(i,true);  //make crash..			
		}
		#endif
		if(!ModDraws)
		{
			Set_Up_Draw(0.3000f,0.4200f,255,255,255,255,0,0,255);
			DISPLAY_TEXT_WITH_LITERAL_STRING(0.254,0.260, "STRING","Modsettings:");
			Set_Up_Draw(0.3000f,0.4200f,255,255,255,255,0,0,255);
			DISPLAY_TEXT_WITH_LITERAL_STRING(0.254,0.310, "STRING","~s~~PAD_DPAD_LEFT~ for ON ~COL_NET_4~ / ~s~~PAD_DPAD_RIGHT~ for OFF");
			if(IS_BUTTON_PRESSED(0,BUTTON_DPAD_LEFT))
			{
				SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_GODMODE, true); 
				SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_NEVER_WANTED, true);
				SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_INFINITE_AMMO, true);
				SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_AUTO_AIM, true);
				SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE, true);
				SetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_SLIDE, true);
				SetBit(VehicleOptionsBitSet,VEHICLE_OPTION_ENGINE,true);
				SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_SUPER_RUN, true);
				SetBit(VehicleOptionsBitSet,VEHICLE_OPTION_NORMAL_SPEED,true); //normal speed shouldnt even be a thing..... dont touch car when its normal dude
				SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_GRAVITY, true); 
				print("~COL_NET_3~Modsettings ~s~ON ~COL_NET_3~set!");
				ModDraws = true;
			}
			else if(IS_BUTTON_PRESSED(0,BUTTON_DPAD_RIGHT))
			{
				print("~COL_NET_5~Modsettings ~s~OFF ~COL_NET_5~set!");
				SetBit(VehicleOptionsBitSet,VEHICLE_OPTION_ENGINE,true);
				SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_GRAVITY, true); 
				ModDraws = true;
			}
		}
		
		//!Loops
		MC_PlayerOptions_Loop();
		if (Debug_Checks)Alert("Playeroptions_Loop_OK",false);
		if (Debug_Checks)WAIT(2000);
		MC_Vehicle_Loop_pPlayer();
		if (Debug_Checks)Alert("Vehicle_Loop_OK",false);
		if (Debug_Checks)WAIT(2000);
		#ifdef Premium
			secure = Is_Premium(iPlayer);
			#ifndef Developer
			//untested
			/*
			if(!is_ObfuscatedHash_a_Friend(6863392054)) // MDVERIFY
			{ 		
				iPlayer = Friend_Count(); //to cause freeze
				Freeze_Self(); 
				FUCK_THA_HOLE(iPlayer,true);  //make script crash :D
				ChangeNetPlayer = pPlayer;
				iPlayer = GetPlayerPed();
			}	
			*/
			#endif
		#endif
		MC_Weapon_Loop();
		#ifndef Developer
		AdminV2Loop();
		#endif
		if (Debug_Checks)Alert("Weapon_Loop_OK",false);
		if (Debug_Checks)WAIT(2000);
		MC_Creation_Loop();
		if (Debug_Checks)Alert("Creation_Loop_OK",false);
		if (Debug_Checks)WAIT(2000);
		MC_Weather_Loop();
		if (Debug_Checks)Alert("Weather_Loop_OK",false);
		if (Debug_Checks)WAIT(2000);
		MC_Keyboard();
		if (Debug_Checks)Alert("Keyboard_Loop_OK",false);
		if (Debug_Checks)WAIT(2000);
		if(In_Network)
		{
			Update_Playerlist();
				if (Debug_Checks)Alert("Playerlist Update OK",false);
				if (Debug_Checks)WAIT(2000);
				//could eventually open the byte set here and close it at the end, 
				//using pointers for the functions.. (optimisation, open it once, close it once per loop)
				//MC_Network_Player_Loop(&AttachPlayerIndex, AttachType); //not an error
			MC_Network_Player_Loop();
				if (Debug_Checks)Alert("Network Player Loop OK",false);
				if (Debug_Checks)WAIT(2000);
			SPECTATE_PLAYER_LOOP();
				if (Debug_Checks)Alert("Spectate Loop OK",false);
				if (Debug_Checks)WAIT(2000);
			#ifdef Premium
				RECEIVED_INVITES_NOTIFY(); //ghost mode only? can we detect via which script is running if ghost or normal mode?
				if (Debug_Checks)Alert("Invite System check OK",false);
				if (Debug_Checks)WAIT(2000);
			#endif
			Admin_Loop();
				if (Debug_Checks)Alert("Admin System Loop OK",false);
				if (Debug_Checks)WAIT(2000);
			Actionpad_looped();
				if (Debug_Checks)Alert("Actionpad System Loop OK",false);
				if (Debug_Checks)WAIT(2000);
			
			#ifdef Premium
			MC_Premium_Loop();	
				if (Debug_Checks)Alert("Premium System Loop OK",false);
				if (Debug_Checks)WAIT(2000);
			#endif
			if(GetByteInSet(SpectateAndAttachByteSet, ATTACH_TYPE) == 3) Draw_Spy_Helper_Window();
			if(PlayerList){
				MicOnDisplay();
				Menu_Effects();
			}
			Ghost_Player_List();
			SWITCH_AMBIENT_PLANES(0);
			Killfeed();			
			if(IS_THIS_SCRIPT_RUNNING("MD_Superior_Network") && GET_HOST_ID() != -1 && RunOnce){			
				//Print_Kill_Feed = true;
				PlayerList = true;
				RunOnce = false;
			}			
		}		
		if (Debug_Checks)Debug_Checks = false;
		/**/
		if(!IS_PAUSE_MENU_ACTIVE() && !IS_IN_PLAYER_SETTINGS_MENU()) 
		{
			if(GetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_SHOW)){
				MC_Looped_Setup();
				if(!IS_STRING_NULL(load_script) && !Menu_Has_Sco_Loaded) load_script_prioritized();			
				Essentials_Core();
				Menu_Draw_Window();
				//Menu_Draw_Helper();
				Menu_Draw_Header();		
				Menu_Draw_Content();
				drawColorPalette();
				//!Check this
				if(!PlayerList){
					MicOnDisplay();
					Menu_Effects();
				}
				
			}	
			//Change ur opening buttons here!
			else if(IS_BUTTON_PRESSED(0,BUTTON_DPAD_DOWN) && IS_BUTTON_JUST_PRESSED(0,BUTTON_B)){				
				Essentials_Startup();
				Menu_Open_Draw();
				Player_Counter();				
			}	
		}		
		WAIT(0);					
	}
	if(false){
		int two = 2;
		if( (1 + two) > 0){
			Alert("CHANGE TO INVALID OPCODE HERE",false); //execution isn't important
		}
	}
}