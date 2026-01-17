/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Current Version : TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */
uint menu_max, menu_consts_max, menu_start_scrolling;
float Menu_Start_Pos_x = 0.6950f, Menu_Start_Pos_y = 0.1550f;
float Player_Stats_Pos_x = 0.2400f,Player_Stats_Pos_y = 0.1300f; // Stats Window
float dropdown_y = 1.2;
bool Update_On_Display_Only;
#pragma once
#define Gold 					164, 134, 35

#define ItemLine_MD				164, 134, 35

#define Chocolate 				210,105,30
#define Steelblue 				70,130,180
#define DevilsRed 				153, 0, 0
#define menu_consts_start_y 	Menu_Start_Pos_y
#define Centering_Pos			0.1250f
#define Window_Pos_x 			Menu_Start_Pos_x
#define	Window_Pos_y			Menu_Start_Pos_y

#define Header_Pos_x			Menu_Start_Pos_x + 0.0200f
#define Header_Pos_y 			Menu_Start_Pos_y + 0.0050f
#define Header_r 				177
#define Header_g 				19
#define Header_b 				26
#define Header_a				255
#define Header_Txt_Size 		0.258f,0.432f
#define Extend_Txt_Size			0.303f,0.450f
#define Updated_Txt_Size 		0.1500f,0.2200f

#define Sub_Header_Pos_x 		Menu_Start_Pos_x
#define Sub_Header_Pos_y 		Menu_Start_Pos_y + 0.0400f
#define Sub_Header_r 			58
#define Sub_Header_g 			95
#define Sub_Header_b 			205
#define Sub_Header_Txt_Size 	0.2000f,0.3200f

#define Version_Pos_x 			Menu_Start_Pos_x + 0.2109f
#define Version_Pos_y 			Menu_Start_Pos_y + 0.0045f
#define Version_Txt_Size		0.4200f,0.9500f
#define SubVersion_Txt_Size		0.303f,0.450f
#define SubVersion_Pos_y 		Menu_Start_Pos_y + 0.0300f
#define Line_Pos_x				Menu_Start_Pos_x
#define Line_Pos_y 				Menu_Start_Pos_y + 0.0675f
#define Line_r 					255
#define Line_g 					255
#define Line_b 					255

#define Item_Pos_x				Menu_Start_Pos_x + 0.020f
#define Item_StringValue_Pos_x	Item_Pos_x + 0.2150f
#define Item_Pos_y				0.0500f
#define Item_height				0.0280f
#define Item_Txt_Size 			0.19f,0.35f
#define Names_Txt_Size			0.19f,0.35f
#define Jumpover_Txt_Size		0.209,0.385f
#define Item_r 				180
#define Item_g 				180
#define Item_b 				180
#define Item_a 				255
#define Scroll_Item_r 			255
#define Scroll_Item_g 			255
#define Scroll_Item_b 			255
#define SubMenu_r 				139
#define SubMenu_g 				134
#define SubMenu_b 				130
#define MenuBlip_r 				255
#define MenuBlip_g 				255
#define MenuBlip_b 				255
#define Item_Highlight_r 		255
#define Item_Highlight_g 		143
#define Item_Highlight_b 		0

#define AddString_r 		138
#define AddString_g 		43
#define AddString_b 		226

#define JumpOver_r 				58
#define JumpOver_g				95
#define JumpOver_b				205

#define Bool_r					255
#define Bool_g					128
#define Bool_b					0

#define Ranksize				0.0160f, 0.0200f
#define Color_Palette_x			Menu_Start_Pos_x + 0.1850f
#define Color_Palette_y			Menu_Start_Pos_y + 0.1200f
#define Color_Palette_Scroll 	0.028

#define Info_Item_Text 			0.1520f,0.2800f


#define Stats_Item_Text 		0.1530f,0.32725f
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
//Red Alert
#define Alert_r  		255
#define Alert_g  		0
#define Alert_b  		0

#define Ghost_r  		0
#define Ghost_g  		102
#define Ghost_b  		204

#define Holy_r  		127
#define Holy_g  		0
#define Holy_b  		255

#define Spy_Item_r		255
#define Spy_Item_g		255
#define Spy_Item_b		255
#define Orange_rgb 			255,69,0


//Purple for allerts!
#define Stats_Allert_r  		177
#define Stats_Allert_g  		19
#define Stats_Allert_b  		26

#define Stats_Spacer_40          0.040f
#define Stats_Spacer_50          0.050f
#define Stats_Spacer_60          0.060f
#define Stats_Spacer_70          0.070f
#define Stats_Spacer_80          0.080f
#define Stats_Spacer_90          0.090f

#define MDVersion_y             Item_Start_y - 0.052f
#define MDVersion_x  			Menu_Start_Pos_x - 0.0800f
#define Frames_Allert_r  		143
#define Frames_Allert_g  		9
#define Frames_Allert_b  		220

//#define MDVersion_Txt_Size		0.1520f,0.2800f
#define MD_Frames_Txt_Size		0.19f,0.35f
#define MDVersion_r				0
#define MDVersion_g				76
#define MDVersion_b				153
#define MDVersion_Txt_Size		0.19f,0.35f


#define Mic_Talk_r				255
#define Mic_Talk_g				140
#define Mic_Talk_b				0

#define Has_Mic_r				255
#define Has_Mic_g				255
#define Has_Mic_b				255

#define MenuTypeSprite_y		0.0120f

Texture arrowUpDown;
Texture arrowLeftRight;
//Texture Map_Background_Texture;
//blips   radar_police_heli  64x64

/**Item Types Blips**/
Texture Submenu_Blip;
Texture Charvalue_Blip;
Texture Invite_Icon;


void Menu_Setup_Draw(void){
	menu_max = MAX_MENU_ITEMS;
	menu_start_scrolling = MENU_START_SCROLLING;
}

void Menu_Open_Draw()
{
	REQUEST_STREAMED_TXD("network", 1); //stop commenting this it prevents the menu from opening.. - Nathan
	REQUEST_STREAMED_TXD("blips", 1);
	CREATE_MOBILE_PHONE(2);
	SET_CINEMATIC_BUTTON_ENABLED(false);
	while (!HAS_STREAMED_TXD_LOADED("network")) WAIT(0);
	arrowUpDown = GET_TEXTURE_FROM_STREAMED_TXD("network", "ICON_W_ARROW_UP");
	arrowLeftRight = GET_TEXTURE_FROM_STREAMED_TXD("network", "ICON_W_ARROW_RIGHT");
	Submenu_Blip = GET_TEXTURE_FROM_STREAMED_TXD("blips", "radar_police_heli");
	Charvalue_Blip = GET_TEXTURE_FROM_STREAMED_TXD("blips", "radar_hospital");
	PLAY_AUDIO_EVENT("FRONTEND_MENU_MP_READY");
}

void Menu_Close_Draw(){

	PLAY_AUDIO_EVENT("FRONTEND_MENU_MP_UNREADY");
	DESTROY_MOBILE_PHONE();
	SET_CINEMATIC_BUTTON_ENABLED(true);
	if(GetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_SLIDE)){//Slider Position on start/closing
	Menu_Start_Pos_x = 0.7500f;
	Menu_Start_Pos_y = 0.155f;
	}
	Fading_100 = 100;
	Fading_150 = 150;
	dropdown_y = 1;
	RELEASE_TEXTURE(arrowUpDown);
	RELEASE_TEXTURE(arrowLeftRight);
	RELEASE_TEXTURE(Submenu_Blip);
	RELEASE_TEXTURE(Charvalue_Blip);
	//MARK_STREAMED_TXD_AS_NO_LONGER_NEEDED("network"); ///hmmmmmm other scripts need this buddy, maybe bad idea
	MARK_STREAMED_TXD_AS_NO_LONGER_NEEDED("blips");
}

void MicOnDisplay(){
	if (Rotating360 >= 360)Rotating360 = 0;
	else Rotating360 += 5;
	if(FlashingGhost >= 255) SetBit(MD_Misc_OptionsBitSet, MD_MISC_FLASHING_GHOST_INCREMENT, false);
	else if(FlashingGhost < 150) SetBit(MD_Misc_OptionsBitSet, MD_MISC_FLASHING_GHOST_INCREMENT, true);
	if(GetBit(MD_Misc_OptionsBitSet, MD_MISC_FLASHING_GHOST_INCREMENT)){
		if(FlashingGhost > 240){
			FlashingGhost += (255 - FlashingGhost);
			SetBit(MD_Misc_OptionsBitSet, MD_MISC_FLASHING_GHOST_INCREMENT, false);
		}
		else FlashingGhost += 2;
	}
	else FlashingGhost -= 2;
}

void Menu_Effects(){
	float Menu_Move_x = Menu_Start_Pos_x;
	float Menu_Move_y = Menu_Start_Pos_y;
	if(Glowing >= 190) SetBit(MD_Misc_OptionsBitSet, MD_MISC_GLOWING_INCREMENT, false);
	if(Glowing <= 0) SetBit(MD_Misc_OptionsBitSet, MD_MISC_GLOWING_INCREMENT, true);
	if(GetBit(MD_Misc_OptionsBitSet, MD_MISC_GLOWING_INCREMENT)){
		if(Glowing > 185) Glowing++;
		else Glowing += 2;
	}
	else{
		if(Glowing < 10) Glowing--;
		else Glowing -= 2;
	}
	if(GetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_MOVE)){
		if (IS_BUTTON_PRESSED(0,DPAD_RIGHT))	Menu_Start_Pos_x += 0.01;
		else if (IS_BUTTON_PRESSED(0,DPAD_LEFT))		Menu_Start_Pos_x -= 0.01;
		else if (IS_BUTTON_PRESSED(0,DPAD_UP))		Menu_Start_Pos_y -= 0.01;
		else if (IS_BUTTON_PRESSED(0,DPAD_DOWN))		Menu_Start_Pos_y += 0.01;
		Set_Up_Draw(Stats_Item_Text, Stats_Item_r, Stats_Item_g, Stats_Item_b, 255,0,0,0);
		DISPLAY_TEXT_WITH_FLOAT(Menu_Start_Pos_x + Stats_Item_Margin_x + 0.1, Menu_Start_Pos_y -(Stats_Item_Height*3), "NUMBER", Menu_Move_x, 8);
		USE_PREVIOUS_FONT_SETTINGS();
		DISPLAY_TEXT_WITH_FLOAT(Menu_Start_Pos_x + Stats_Item_Margin_x + 0.1, Menu_Start_Pos_y -(Stats_Item_Height*2), "NUMBER", Menu_Move_y, 8);
		USE_PREVIOUS_FONT_SETTINGS();
		Draw_Text("STRING", Menu_Start_Pos_x + Stats_Item_Margin_x, Menu_Start_Pos_y -(Stats_Item_Height*3), "Menu Pos x:");
		USE_PREVIOUS_FONT_SETTINGS();
		Draw_Text("STRING", Menu_Start_Pos_x + Stats_Item_Margin_x, Menu_Start_Pos_y -(Stats_Item_Height*2), "Menu Pos y:");
	}


	if(Move_Player_Info){
		if (IS_BUTTON_PRESSED(0,DPAD_RIGHT))	InfoDisplay_x += 0.01;
		else if (IS_BUTTON_PRESSED(0,DPAD_LEFT))		InfoDisplay_x -= 0.01;
		else if (IS_BUTTON_PRESSED(0,DPAD_UP))		InfoDisplay_y -= 0.01;
		else if (IS_BUTTON_PRESSED(0,DPAD_DOWN))		InfoDisplay_y += 0.01;
		Set_Up_Draw(Stats_Item_Text, Stats_Item_r, Stats_Item_g, Stats_Item_b, 255,0,0,0);
		DISPLAY_TEXT_WITH_FLOAT(InfoDisplay_x + Stats_Item_Margin_x + 0.1, InfoDisplay_y -(Stats_Item_Height*3), "NUMBER", Menu_Move_x, 8);
		USE_PREVIOUS_FONT_SETTINGS();
		DISPLAY_TEXT_WITH_FLOAT(InfoDisplay_x + Stats_Item_Margin_x + 0.1, InfoDisplay_y -(Stats_Item_Height*2), "NUMBER", Menu_Move_y, 8);
		USE_PREVIOUS_FONT_SETTINGS();
		Draw_Text("STRING", InfoDisplay_x + Stats_Item_Margin_x, InfoDisplay_y -(Stats_Item_Height*3), "Menu Pos x:");
		USE_PREVIOUS_FONT_SETTINGS();
		Draw_Text("STRING", InfoDisplay_x + Stats_Item_Margin_x, InfoDisplay_y -(Stats_Item_Height*2), "Menu Pos y:");
	}


	if(GetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_SLIDE)){
		if(Menu_Start_Pos_x > 0.6951f){
			Menu_Start_Pos_x -= 0.008f;
			Menu_Start_Pos_y = 0.155f;
		}
	}
	if(Fading_100 < 255)Fading_100 += 5;
	if(Fading_150 < 255)Fading_150 += 5;
}

void Draw_Spy_Helper_Window(void){
	if(Draw_Spy_Helper){
	Set_Up_Draw(MDVersion_Txt_Size, Gold, Header_a,0,0,0);
	DISPLAY_TEXT_WITH_LITERAL_STRING( 0.19f, 0.754f, "STRING", "SPECTATE MODE OPTIONS");
	Set_Up_Draw(Info_Item_Text, Spy_Item_r, Spy_Item_g, Spy_Item_b, Header_a,0,0,0);
	DISPLAY_TEXT_WITH_LITERAL_STRING( 0.19f,0.782f, "STRING", "DISABLE - Hold:  ~PAD_LB~  - Press:  ~PAD_RB~");
	USE_PREVIOUS_FONT_SETTINGS();
	DISPLAY_TEXT_WITH_LITERAL_STRING( 0.19f, 0.81f , "STRING", "TELEPORT TO PLAYER - Hold:  ~PAD_LB~  - Press:  ~PAD_RT~");
	USE_PREVIOUS_FONT_SETTINGS();
	DISPLAY_TEXT_WITH_LITERAL_STRING( 0.19f, 0.838f, "STRING", "TELEPORT SAFE ZONE - Hold:  ~PAD_LB~  - Press:  ~PAD_LT~");
	}
}


void Menu_Draw_Footer_2(){

}




float Timer_Slide = 0;

void Ghost_Player_List(void){
	/*
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
			*/
	if(PlayerList){
		 if(IS_BUTTON_JUST_PRESSED(0,DPAD_DOWN)) //Minimap zoom (just like freemode does it) works flawless //flashes when scrolling and menu open (doesnt normally so)
            {
                //BUILT IN CRASH HOPEFULLY IF MENU STARTUP NOT FOUND!
                if(GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT("menu_startup") < 1)
                {
                    if(playerlist_tick > GetTickCount())
                    {
                        playerlist_tick = (GetTickCount() - 5000);
                    }
                    else
                    {
                        playerlist_tick = (GetTickCount() + 5000);
                    }
                }
            }
			 if(playerlist_tick > GetTickCount() && GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT("menu_startup") < 1)
            {
                uint PlayerList_ID;
				uint cr,cg,cb;
				float Line_Y = 0.1000f;
				float Line_X = 0.0630f;
				float window_height = 0.0250f;
				float scale = 0.60;
				float width = 0.1800;
				Player_Counter();
				if(player_count > 0){
					//DRAW_CURVED_WINDOW(Line_X - 0.020f ,Line_Y - 0.020f, width,window_height*(GET_NUMBER_OF_PLAYERS()+1.5), 200);
					DRAW_SPRITE(GET_TEXTURE_FROM_STREAMED_TXD("network", "MAP_LOBBY"),Line_X + (width/2) -0.02, Line_Y + (window_height*(player_count/2)) - 0.02,  width, window_height*(player_count + 3 ), 0, 70,130,180, 255); //r g b a
					Set_Up_Draw(0.303f*scale,0.450f*scale, Gold, FlashingGhost,0,0,0);
					DISPLAY_TEXT_WITH_LITERAL_STRING(Line_X + 0.01, Line_Y - 0.048 , "STRING", MENU_HEADER);
					Set_Up_Draw(0.4200f*scale,0.9500f/2, Steelblue, 255, 0, 0, 0);
					DISPLAY_TEXT_WITH_LITERAL_STRING(Line_X - 0.01, Line_Y -0.053 , "STRING", "MD");
					Set_Up_Draw(0.303f*0.80,0.450f*0.80, 255, 255, 255, 255,0,0, 0);
					DISPLAY_TEXT_WITH_LITERAL_STRING(Line_X + width - 0.05, Line_Y - 0.05, "STRING", MD_SubVersion);
					Set_Up_Draw(0.2000f*0.60,0.3200f*0.60, Steelblue, 255, 0, 0, 0);
					SET_TEXT_CENTRE(1);
					DISPLAY_TEXT_WITH_LITERAL_STRING(Line_X + (width/2) - 0.02, Line_Y - 0.03, "STRING", MENU_SUB_HEADER);
					DRAW_RECT(Line_X + (width/2) - 0.02, Line_Y -0.01 , width, 0.00200000f, Line_r, Line_g, Line_b, 255);
					for(PlayerList_ID = 0;PlayerList_ID < MAX_PLAYERS ;PlayerList_ID++){
						if (Invalid_Player(PlayerList_ID)) continue;
						#ifndef Developer
						if(Is_Developer(PlayerList_ID)) continue;
						#endif
							char* Playerlist_name = GET_PLAYER_NAME(PlayerList_ID);
							GET_PLAYER_RGB_COLOUR(PlayerList_ID,&cr,&cg,&cb);
							Set_Up_Draw(0.1950f,0.3600f,cr,cg,cb,255,0,0,0);
							SET_TEXT_FONT(Player_Name_Font);
							SET_TEXT_USE_UNDERSCORE(!is_xbox_version);
							DISPLAY_TEXT_WITH_LITERAL_STRING(Line_X + 0.0260f, Line_Y, "STRING", Playerlist_name);

							if(IS_NETWORK_PLAYER_ACTIVE(PlayerList_ID)){
							DRAW_SPRITE(GET_TEXTURE_FROM_STREAMED_TXD("network", "ICON_W_PLAYER"),Line_X + 0.0100f , Line_Y + 0.0120f, 0.0200f, 0.0250f, 0, 255, 255, 255, 255);
							}
							else {
							if(PLAYER_HAS_CHAR(PlayerList_ID))DRAW_SPRITE(GET_TEXTURE_FROM_STREAMED_TXD("network", "ICON_W_CRIMINAL"),Line_X + 0.0100f , Line_Y + 0.0120f, 0.0200f, 0.0250f, 0, 255, 255, 255, 255);
							else DRAW_SPRITE(GET_TEXTURE_FROM_STREAMED_TXD("network", "ICON_W_DEATHS"),Line_X + 0.0100f , Line_Y + 0.0120f, 0.0200f, 0.0250f, 0, 255, 255, 255, 255);
							}
						if(NETWORK_PLAYER_HAS_HEADSET(PlayerList_ID)){//Headset icon
							if(!NETWORK_IS_PLAYER_TALKING(PlayerList_ID))DRAW_SPRITE(GET_TEXTURE_FROM_STREAMED_TXD("network", "ICON_W_HEADSET_ON1"),Line_X - 0.0100f, Line_Y + 0.0120f, 0.0160f, 0.0160f, Rotating360, Has_Mic_r, Has_Mic_g, Has_Mic_b, 255);
							else DRAW_SPRITE(GET_TEXTURE_FROM_STREAMED_TXD("network", "ICON_W_HEADSET_ON1"),Line_X - 0.0100f, Line_Y + 0.0120f, 0.0160f, 0.0160f, Rotating360, Mic_Talk_r, Mic_Talk_g, Mic_Talk_b, 255);
						}
						Line_Y += 0.025f;
					}
				}
            }
	}
}


void Menu_Draw_Header(){
	Set_Up_Draw(Extend_Txt_Size, Gold, FlashingGhost,0,0,0);
	SET_TEXT_DROPSHADOW( 0, 0, 0, 0, 255 );
	DISPLAY_TEXT_WITH_LITERAL_STRING(Header_Pos_x + 0.035, Header_Pos_y + 0.005, "STRING", MENU_HEADER);

	Set_Up_Draw(Version_Txt_Size, Steelblue, 255, 0, 0, 0);
	SET_TEXT_DROPSHADOW( 0, 0, 0, 0, 255 );
	DISPLAY_TEXT_WITH_LITERAL_STRING(Header_Pos_x, Header_Pos_y, "STRING", "MD");

	//Set_Up_Draw(Extend_Txt_Size, Header_r, Glowing, Glowing, FlashingGhost,FlashingGhost,FlashingGhost, FlashingGhost);
	Set_Up_Draw(Extend_Txt_Size, Steelblue, 255, 0, 0, 0);
	DISPLAY_TEXT_WITH_LITERAL_STRING(Version_Pos_x, Sub_Header_Pos_y - 0.02, "STRING", MD_SubVersion);

	Set_Up_Draw(Sub_Header_Txt_Size, Steelblue, 255, 0, 0, 0);
	SET_TEXT_CENTRE(1);
	SET_TEXT_DROPSHADOW( 0, 0, 0, 0, 255 );
	DISPLAY_TEXT_WITH_LITERAL_STRING(Sub_Header_Pos_x + Centering_Pos, Sub_Header_Pos_y, "STRING", MENU_SUB_HEADER);
	DRAW_RECT(Line_Pos_x + Centering_Pos,Line_Pos_y, 0.2500f, 0.00200000f, Line_r, Line_g, Line_b, 255);

	if(dropdown_y > 0.9600f)dropdown_y -= 0.01;
	else dropdown_y = 0.9500f;
	if(GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT("InqGhost") < 1)
	{
		Set_Up_Draw(MDVersion_Txt_Size,Gold,255,0,0,0);
		DISPLAY_TEXT_WITH_LITERAL_STRING( 0.35, dropdown_y, "STRING", "~BLIP_76~ DONT ABUSE YOUR MODS - KEEP MODDING FUN FOR EVERYONE! ~BLIP_76~");
	}

}

void Menu_Draw_Window(void){

	float y2;
	HIDE_HELP_TEXT_THIS_FRAME();
	if (itemCount > menu_consts_max)	y2 = 0.09f + (menu_consts_max * 0.0275f);
	else	y2 = 0.09f + (itemCount * 0.0275f);
	//DRAW_CURVED_WINDOW(Window_Pos_x, Window_Pos_y, 0.2500f, y2, 180);
	//Map_Background_Texture = GET_TEXTURE_FROM_STREAMED_TXD("network", "MAP_LOBBY");
	DRAW_SPRITE(GET_TEXTURE_FROM_STREAMED_TXD("network", "MAP_LOBBY"),Window_Pos_x + Centering_Pos, Window_Pos_y + (y2/2),  0.2500f, y2, 0, 70,130,180, 180);
}

void Menu_Draw_Helper(void){
	INIT_FRONTEND_HELPER_TEXT();
	DRAW_FRONTEND_HELPER_TEXT((menu_level == 1) ? "LEAVE" : "BACK", "INPUT_F_CANCEL", 0);
	//if (menu_level == 1)DRAW_FRONTEND_HELPER_TEXT("LEAVE", "INPUT_F_CANCEL", 0);
	//else DRAW_FRONTEND_HELPER_TEXT("BACK", "INPUT_F_CANCEL", 0);
	//if (menu_item[item_highlighted].action)	DRAW_FRONTEND_HELPER_TEXT("CONFIRM", "INPUT_F_ACCEPT", 0);
	if(GetBit(MenuActionBitSet, (item_highlighted - 1))) DRAW_FRONTEND_HELPER_TEXT("CONFIRM", "INPUT_F_ACCEPT", 0);
	else DRAW_FRONTEND_HELPER_TEXT("KYB_ENTER", "INPUT_F_ACCEPT", 0);
}

void Menu_Draw_Content(void){
	int PlayerName_R,PlayerName_G, PlayerName_B, player_a = Item_a;
	int Item_Number;
	float Item_Start_y = Menu_Start_Pos_y + Item_Pos_y;
	for (Item_Number = 1; Item_Number <= itemCount; Item_Number++){
		Item_Start_y = (Item_Start_y + Item_height);
		if (Item_Number <= menu_max && Item_Start_y > (menu_consts_start_y + 0.0100f)){
			if (item_highlighted == Item_Number && !GetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_IN_ERROR)){
				/**Scrollbar**/
				DRAW_RECT(Menu_Start_Pos_x + Centering_Pos, (Item_Start_y + 0.0110f), 0.2500f, 0.0267f, Glowing, Glowing,200, 150); //Scrollbar
				/**Playerlist CrossBrowse Display BASICS**/
				if (menu_item[Item_Number].type > 20 && menu_item[Item_Number].type < 30){
					if(!In_Network) ChangeNetPlayer = iPlayer; // When not online we select self --> Works perfect

					/**Freeze preventor - Make player select player Kill actions if not allowed (for future use with holy ghost) **/
					if(Player_Display_Selection(players[ChangeNetPlayer].id)){
						DRAW_RECT(Menu_Start_Pos_x + Centering_Pos, (Item_Start_y + 0.0110f), 0.2500f, 0.0267f, 255, 0,0, 255);
						int scanner;
						for(scanner = 0; scanner < 16; scanner++){ //Setting for urself to prevent freezing.
							if(players[scanner].id != iPlayer) continue;
							ChangeNetPlayer = scanner;
							break;
						}
						SetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_IN_ERROR, true);
						continue;
					}
						/**Draw Crossbrowse Player Name**/
						GET_PLAYER_RGB_COLOUR(players[ChangeNetPlayer].id,&PlayerName_R,&PlayerName_G,&PlayerName_B);
						CrossBrowse_PlayerName = GET_PLAYER_NAME(players[ChangeNetPlayer].id);
						Set_Up_Draw(Names_Txt_Size, PlayerName_R, PlayerName_G, PlayerName_B, player_a, 0, 0, 0);
						SET_TEXT_CENTRE(1);
						SET_TEXT_USE_UNDERSCORE(true);
						SET_TEXT_FONT(Player_Name_Font);
						DISPLAY_TEXT_WITH_LITERAL_STRING( Menu_Start_Pos_x - 0.0800f, Item_Start_y + 0.0040f, "STRING", CrossBrowse_PlayerName);
						/**Draw Crossbrowse Scollerwindow**/
						DRAW_CURVED_WINDOW(Menu_Start_Pos_x - 0.1600f,Item_Start_y, 0.1575f, 0.0275f, 180);
						DRAW_SPRITE(arrowLeftRight, Menu_Start_Pos_x - 0.1500f, Item_Start_y + 0.015f, 0.0160f, 0.0160f, 180.0000f, Header_r, Header_g, Header_b,Header_a);
						DRAW_SPRITE(arrowLeftRight, Menu_Start_Pos_x - 0.0120f, Item_Start_y + 0.015f, 0.0160f, 0.0160f, 0.0000f, Header_r, Header_g, Header_b, Header_a);
						/**Draw Crossbrowse NAME scrol helper**/
						Set_Up_Draw(Info_Item_Text, Orange_rgb, Header_a, 0, 0, 0);
						SET_TEXT_CENTRE(1);
						DISPLAY_TEXT_WITH_LITERAL_STRING( Menu_Start_Pos_x - 0.1200f, Item_Start_y + 0.0050f + Item_height, "STRING", "Select Player Hold ~PAD_X~ Press ~PAD_DPAD_LEFTRIGHT~ / ~PAD_X~ + ~PAD_BACK~ for self");
					//	Set_Up_Draw(Info_Item_Text, Orange_rgb, Header_a, 0, 0, 0);
					//	SET_TEXT_CENTRE(1);
					//	DISPLAY_TEXT_WITH_LITERAL_STRING( Menu_Start_Pos_x - 0.0800f, Item_Start_y + 0.0050f + Item_height*2, "STRING", "Select Self:  Hold:  ~PAD_X~  Press: ~PAD_LB~");
						/**Draw Crossbrowse Mic Display**/
						Set_Up_Draw(Sub_Header_Txt_Size, Header_r, Glowing, Glowing, Header_a, 0, 0, 0);
						SET_TEXT_CENTRE(1);
						if(NETWORK_PLAYER_HAS_HEADSET(players[ChangeNetPlayer].id)){
							if(!NETWORK_IS_PLAYER_TALKING(players[ChangeNetPlayer].id))
								DRAW_SPRITE(GET_TEXTURE_FROM_STREAMED_TXD("network", "ICON_W_HEADSET_ON1"),Menu_Start_Pos_x - 0.0120f, Item_Start_y + 0.015f - 0.028f, 0.0160f, 0.0160f, Rotating360, Has_Mic_r, Has_Mic_g, Has_Mic_b, Header_a);
							else DRAW_SPRITE(GET_TEXTURE_FROM_STREAMED_TXD("network", "ICON_W_HEADSET_ON1"),Menu_Start_Pos_x - 0.0120f, Item_Start_y + 0.015f - 0.028f, 0.0160f, 0.0160f, Rotating360, Mic_Talk_r, Mic_Talk_g, Mic_Talk_b, Header_a);
						}
						/**Draw Crossbrowse If Muted**/
						/*
						else if(NETWORK_IS_PLAYER_MUTED_BY_ME(players[ChangeNetPlayer].id)){
						Set_Up_Draw(Info_Item_Text, Stats_Yes_r, Stats_Yes_g, Stats_Yes_b, 255,0,0,0);
						Draw_Text("STRING", Menu_Start_Pos_x - 0.15, Item_Start_y  - 0.025, "Muted");
						}
						*/
						/**Draw Crossbrowse Autospectate**/
						else if(GetBit(MD_Misc_OptionsBitSet, MD_MISC_AUTO_SPECTATE)){
						Set_Up_Draw(Info_Item_Text, Stats_Yes_r, Stats_Yes_g, Stats_Yes_b, 255,0,0,0);
						Draw_Text("STRING", Menu_Start_Pos_x - 0.15, Item_Start_y  - 0.025, "Auto-Spectate ~COL_NET_3~ON");
						}
						if(!is_xbox_version)DRAW_SPRITE(GET_PLAYER_RANK_TEXTURE(players[ChangeNetPlayer].id),Menu_Start_Pos_x - 0.0400f, Item_Start_y + 0.015f - 0.028f, 0.0200f, 0.0250f, 0, 255, 255, 255, Header_a);//Display Rank
						/**Detection for EXTEND users */ // This worke perfect
						if(MD_Version_Detector){
								char* usertype = "null";
								#ifdef SuperAdmin //stealth is always good
									if(Is_Developer(players[ChangeNetPlayer].id))usertype = "~BLIP_76~ MD Developer";
									else if(Is_SuperAdmin(players[ChangeNetPlayer].id))usertype = "~BLIP_76~ MD SuperAdmin";
								#else
									if(Is_SuperAdmin(players[ChangeNetPlayer].id))usertype = "~BLIP_76~ MD SuperAdmin";
								#endif
							bool premium = Is_Premium(players[ChangeNetPlayer].id);
							bool whitelist = Is_Whitelisted(players[ChangeNetPlayer].id);
							if(COMPARE_STRING(usertype,"null"))	{
								if(!Is_SuperAdmin(players[ChangeNetPlayer].id))
								{
								if(Is_Admin(players[ChangeNetPlayer].id))usertype = "~BLIP_76~ MD Admin";
								else if(premium && whitelist)usertype = "~BLIP_76~ MD Premium Whitelisted";
								else if(premium)usertype = "~BLIP_76~ MD Premium";
								else if(whitelist)usertype = "~BLIP_76~ MD Whitelisted";
								}
							}
							if(COMPARE_STRING(usertype,"null")){
								if(userfound > 0){
									if(userfound == 130)usertype = "~BLIP_76~ MD v13 User";
									else if(userfound == 90)usertype = "~BLIP_76~ MD v11 User";
									else if(userfound == 81)usertype = "~BLIP_76~ MD v8.1 User";
									else if(userfound == 80)usertype = "~BLIP_76~ MD v8 User";
									else if(userfound == 70)usertype = "~BLIP_76~ MD v7 User";
								}
							}
							if(!COMPARE_STRING(usertype,"null")){
								Set_Up_Draw(Sub_Header_Txt_Size, Header_r, Glowing, Glowing, Header_a, 0, 0, 0);
								SET_TEXT_CENTRE(1);
								DISPLAY_TEXT_WITH_LITERAL_STRING(MDVersion_x, MDVersion_y, "STRING",usertype);
							}
						}
					//}
				}
				/**Draw helpers on Highlighted Item types**/

				/**Item for AddNum Display**/
				if(menu_item[Item_Number].type == 8 || menu_item[Item_Number].type == 22){
					Set_Up_Draw(Info_Item_Text, Header_r, Glowing, Glowing, 255, 0, 0, 0);
					SET_TEXT_CENTRE(1);
					if(menu_item[Item_Number].type == 8)DISPLAY_TEXT_WITH_LITERAL_STRING( Menu_Start_Pos_x - 0.0700f, Item_Start_y + 0.0040f, "STRING", "Select Value:  ~PAD_DPAD_LEFTRIGHT~");
					else DISPLAY_TEXT_WITH_LITERAL_STRING( Menu_Start_Pos_x - 0.0700f, Item_Start_y + 0.0050f + Item_height*2, "STRING", "Select Value:  ~PAD_DPAD_LEFTRIGHT~");
				}
				/**Item for AddString Display**/
				if(menu_item[Item_Number].type == 9 || menu_item[Item_Number].type == 23){
					Set_Up_Draw(Info_Item_Text, Header_r, Glowing, Glowing, 255, 0, 0, 0);
					SET_TEXT_CENTRE(1);
					if(menu_item[Item_Number].type == 9)DISPLAY_TEXT_WITH_LITERAL_STRING( Menu_Start_Pos_x - 0.0700f, Item_Start_y + 0.0050f, "STRING", "Select Value:  ~PAD_DPAD_LEFTRIGHT~");
					else DISPLAY_TEXT_WITH_LITERAL_STRING( Menu_Start_Pos_x - 0.0700f, Item_Start_y + 0.0050f + Item_height*2, "STRING", "Select Value:  ~PAD_DPAD_LEFTRIGHT~");
				}
				/**Item for Add_Line_String Display**/
				if(menu_item[Item_Number].type == 15 || menu_item[Item_Number].type == 24){
					Set_Up_Draw(Info_Item_Text, Header_r, Glowing, Glowing, Header_a, 0, 0, 0);
					SET_TEXT_CENTRE(1);
					if(menu_item[Item_Number].type == 15)DISPLAY_TEXT_WITH_LITERAL_STRING( Menu_Start_Pos_x - 0.0700f, Item_Start_y + 0.0040f, "STRING", "Select Value:  ~PAD_DPAD_LEFTRIGHT~");
					else DISPLAY_TEXT_WITH_LITERAL_STRING( Menu_Start_Pos_x - 0.0700f, Item_Start_y + 0.0050f + Item_height*2, "STRING", "Select Value:  ~PAD_DPAD_LEFTRIGHT~");
				}

				if(menu_item[Item_Number].type == 14){
					Set_Up_Draw(Info_Item_Text, Header_r, Glowing, Glowing, Header_a, 0, 0, 0);
					SET_TEXT_CENTRE(1);
					if(menu_item[Item_Number].type == 14)DISPLAY_TEXT_WITH_LITERAL_STRING( Menu_Start_Pos_x - 0.0700f, Item_Start_y + 0.0040f, "STRING", "Select Value:  ~PAD_DPAD_LEFTRIGHT~");
					//else DISPLAY_TEXT_WITH_LITERAL_STRING( Menu_Start_Pos_x - 0.0700f, Item_Start_y + 0.0050f + Item_height*2, "STRING", "Select Value:  ~PAD_DPAD_LEFTRIGHT~");
				}
			}

			/**Bool Items**/

			if (menu_item[Item_Number].type == 3 || menu_item[Item_Number].type == 25){
				if(last_selected[1] == 2 && menu_level == 4 && last_selected[3] == 5){//(Md assist drive walk water etc)
					if(Item_Number == 8 && GetBit(infiniteArmourBitSet, players[ChangeNetPlayer].id)){//ON
						Set_Up_Draw(Item_Txt_Size, Item_Highlight_r, Item_Highlight_g, Item_Highlight_b,  FlashingGhost, 0, 0, 0);
						DISPLAY_TEXT_WITH_LITERAL_STRING(Item_Pos_x, Item_Start_y,"STRING", menu_item[Item_Number].name);
					}
					else if(Item_Number == 9 && DOES_OBJECT_EXIST(drive_water[players[ChangeNetPlayer].id])){//ON
						Set_Up_Draw(Item_Txt_Size, Item_Highlight_r, Item_Highlight_g, Item_Highlight_b,  FlashingGhost, 0, 0, 0);
						DISPLAY_TEXT_WITH_LITERAL_STRING(Item_Pos_x, Item_Start_y,"STRING", menu_item[Item_Number].name);
					}
					else if(Item_Number == 10 &&  GetBit(autoFlipVehBitSet, players[ChangeNetPlayer].id)){//ON
						Set_Up_Draw(Item_Txt_Size, Item_Highlight_r, Item_Highlight_g, Item_Highlight_b,  FlashingGhost, 0, 0, 0);
						DISPLAY_TEXT_WITH_LITERAL_STRING(Item_Pos_x, Item_Start_y,"STRING", menu_item[Item_Number].name);
					}//rocketWeaponsBitSet
					else if(Item_Number == 11 && GetBit(autoFixVehBitSet, players[ChangeNetPlayer].id)){//ON
						Set_Up_Draw(Item_Txt_Size, Item_Highlight_r, Item_Highlight_g, Item_Highlight_b,  FlashingGhost, 0, 0, 0);
						DISPLAY_TEXT_WITH_LITERAL_STRING(Item_Pos_x, Item_Start_y,"STRING", menu_item[Item_Number].name);
					}
					else if(Item_Number == 12 && GetBit(freezeGunProtectBitSet, players[ChangeNetPlayer].id)){//ON
						Set_Up_Draw(Item_Txt_Size, Item_Highlight_r, Item_Highlight_g, Item_Highlight_b,  FlashingGhost, 0, 0, 0);
						DISPLAY_TEXT_WITH_LITERAL_STRING(Item_Pos_x, Item_Start_y,"STRING", menu_item[Item_Number].name);
					}
					else if(Item_Number == 13 && GetBit(neverWantedBitSet, players[ChangeNetPlayer].id)){//ON
						Set_Up_Draw(Item_Txt_Size, Item_Highlight_r, Item_Highlight_g, Item_Highlight_b,  FlashingGhost, 0, 0, 0);
						DISPLAY_TEXT_WITH_LITERAL_STRING(Item_Pos_x, Item_Start_y,"STRING", menu_item[Item_Number].name);
					}
					else if(Item_Number == 14 && GetBit(rocketWeaponsBitSet, players[ChangeNetPlayer].id)){//ON
						Set_Up_Draw(Item_Txt_Size, Item_Highlight_r, Item_Highlight_g, Item_Highlight_b,  FlashingGhost, 0, 0, 0);
						DISPLAY_TEXT_WITH_LITERAL_STRING(Item_Pos_x, Item_Start_y,"STRING", menu_item[Item_Number].name);
					}
					else if(menu_item[Item_Number].extra_val && !(menu_item[Item_Number].type > 20 && menu_item[Item_Number].type < 30)){//ON
						Set_Up_Draw(Item_Txt_Size, Item_Highlight_r, Item_Highlight_g, Item_Highlight_b, Item_a, 0, 0, 0);
						DISPLAY_TEXT_WITH_LITERAL_STRING(Item_Pos_x, Item_Start_y,"STRING", menu_item[Item_Number].name);
					}
					else{//OFF
						Set_Up_Draw(Item_Txt_Size, Item_r, Item_g, Item_b, Item_a, 0, 0, 0);
						DISPLAY_TEXT_WITH_LITERAL_STRING(Item_Pos_x, Item_Start_y,"STRING", menu_item[Item_Number].name);
					}
				}
				else {//else if not in net player bools
					if(menu_item[Item_Number].extra_val){//ON
						Set_Up_Draw(Item_Txt_Size, Item_Highlight_r, Item_Highlight_g, Item_Highlight_b, Item_a, 0, 0, 0);
						DISPLAY_TEXT_WITH_LITERAL_STRING(Item_Pos_x, Item_Start_y,"STRING", menu_item[Item_Number].name);
					}
					else{
						Set_Up_Draw(Item_Txt_Size, Item_r, Item_g, Item_b, Item_a, 0, 0, 0);
						DISPLAY_TEXT_WITH_LITERAL_STRING(Item_Pos_x, Item_Start_y,"STRING", menu_item[Item_Number].name);
					}
				}
				DRAW_SPRITE(arrowLeftRight, Item_Pos_x - 0.0100, Item_Start_y + MenuTypeSprite_y, 0.0100, 0.0160, 0.000, Bool_r, Bool_g, Bool_b, Fading_100);
			}
			/**Sco Item Present Display**/
			else if (menu_item[Item_Number].type == 4){
				if (menu_item[Item_Number].extra_val){//ON
					Set_Up_Draw(Item_Txt_Size, Item_Highlight_r, Item_Highlight_g, Item_Highlight_b, Item_a, 0, 0, 0);
					DISPLAY_TEXT_WITH_LITERAL_STRING(Item_Pos_x, Item_Start_y,"STRING", menu_item[Item_Number].name);
				}
				else{//OFF
					Set_Up_Draw(Item_Txt_Size, Item_r, Item_g, Item_b, Item_a, 0, 0, 0);
					DISPLAY_TEXT_WITH_LITERAL_STRING(Item_Pos_x, Item_Start_y,"STRING", menu_item[Item_Number].name);
				}
				DRAW_SPRITE(arrowLeftRight, Item_Pos_x - 0.0100, Item_Start_y + MenuTypeSprite_y, 0.0100, 0.0160, 0.000, Stats_No_r, Stats_No_g, Stats_No_b, Fading_100);
			}
			/**Item Vehicle Display**/
			else if (menu_item[Item_Number].type == 5 || menu_item[Item_Number].type == 27){
				Set_Up_Draw(Item_Txt_Size, Item_r, Item_g, Item_b, Item_a, 0, 0, 0);
				SET_TEXT_USE_UNDERSCORE(1);
				DISPLAY_TEXT_WITH_LITERAL_STRING(Item_Pos_x, Item_Start_y, "STRING", GET_STRING_FROM_TEXT_FILE(GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(menu_item[Item_Number].num_val)));
			}
			/**Item Not Present Display - Used for .sco files that are not present**/
			else if (menu_item[Item_Number].type == 6){
				Set_Up_Draw(Item_Txt_Size, Header_r, Glowing, Glowing, Fading_100, 0,0, Glowing);
				DISPLAY_TEXT_WITH_LITERAL_STRING(Item_Pos_x, Item_Start_y, "STRING", menu_item[Item_Number].name);
				DRAW_SPRITE(arrowLeftRight, Item_Pos_x - 0.0100, Item_Start_y + MenuTypeSprite_y, 0.0100, 0.0160, 0.000, Stats_Yes_r, Stats_Yes_g, Stats_Yes_b, Fading_100);
			}
			/**Playernames Item Vertical Display**/
			else if (menu_item[Item_Number].type == 7){
				if (Player_Display_Selection(players[Item_Number - 4].id))continue;
				GET_PLAYER_RGB_COLOUR(players[Item_Number - 4].id,&PlayerName_R,&PlayerName_G,&PlayerName_B);
				Set_Up_Draw(Names_Txt_Size, PlayerName_R, PlayerName_G, PlayerName_B, player_a, 0, 0, 0);
				SET_TEXT_USE_UNDERSCORE(true);
				SET_TEXT_FONT(Player_Name_Font);
				DISPLAY_TEXT_WITH_LITERAL_STRING(Item_Pos_x  + 0.0150, Item_Start_y, "STRING", menu_item[Item_Number].name);
				//!Headset
				if(NETWORK_PLAYER_HAS_HEADSET(players[Item_Number - 4].id)){
					if(!NETWORK_IS_PLAYER_TALKING(players[Item_Number - 4].id))DRAW_SPRITE(GET_TEXTURE_FROM_STREAMED_TXD("network", "ICON_W_HEADSET_ON1"),Item_Pos_x - 0.0100 , Item_Start_y + 0.0120, 0.0160, 0.0160, Rotating360, Has_Mic_r, Has_Mic_g, Has_Mic_b, player_a);
					else DRAW_SPRITE(GET_TEXTURE_FROM_STREAMED_TXD("network", "ICON_W_HEADSET_ON1"),Item_Pos_x - 0.0100 , Item_Start_y + 0.0120, 0.0160, 0.0160, Rotating360, Mic_Talk_r, Mic_Talk_g, Mic_Talk_b, player_a);
				}
				//!Ghost
				if((Is_Normal_Ghost(players[Item_Number - 4].id))){
					Model pPlayer_Model;
					Set_Up_Draw(Names_Txt_Size, Ghost_r, Ghost_g, Ghost_b, FlashingGhost, 0, 0, 0);
					SET_TEXT_RIGHT_JUSTIFY(1);
					SET_TEXT_WRAP(0.0,Item_StringValue_Pos_x);
					/*
					//!When pPlayer
					if ((players[Item_Number - 2].id) == iPlayer){
						GET_CHAR_MODEL(pPlayer, &pPlayer_Model);
						if(pPlayer_Model == MODEL_PLAYER){
						DISPLAY_TEXT_WITH_LITERAL_STRING(0.0, Item_Start_y, "STRING", "Holy Ghost");
						}
						else DISPLAY_TEXT_WITH_LITERAL_STRING(0.0, Item_Start_y, "STRING", "Ghost");
					}
					else
					*/
					DISPLAY_TEXT_WITH_LITERAL_STRING(0.0, Item_Start_y, "STRING", "Ghost");
				}
				//!Real Ghost
				if((Is_Holy_Ghost(players[Item_Number - 4].id))){
					Set_Up_Draw(Names_Txt_Size, Holy_r, Holy_g, Holy_b, FlashingGhost, 20, 20, 0);
					SET_TEXT_RIGHT_JUSTIFY(1);
					SET_TEXT_WRAP(0.0,Item_StringValue_Pos_x);
					DISPLAY_TEXT_WITH_LITERAL_STRING(0.0, Item_Start_y, "STRING", "Holy Ghost");
				}
				//!Rank
				if(!is_xbox_version){
					DRAW_SPRITE(GET_PLAYER_RANK_TEXTURE(players[Item_Number - 4].id),Item_Pos_x + 0.0050f , Item_Start_y + 0.0120f, Ranksize, 0, 255, 255, 255, player_a);
				}
			}
			/**Item for AddNum Display**/
			else if(menu_item[Item_Number].type == 8 || menu_item[Item_Number].type == 22){
				float left_pos_x;
				if(menu_item[Item_Number].num_val < 10)left_pos_x = Item_Pos_x + 0.2012f;
				if(menu_item[Item_Number].num_val >= 10) left_pos_x = Item_Pos_x + 0.2080f;
				if(menu_item[Item_Number].num_val >= 100)left_pos_x = Item_Pos_x + 0.2155f;
				if(menu_item[Item_Number].num_val >= 1000)left_pos_x = Item_Pos_x + 0.2250f;
				DRAW_SPRITE(arrowLeftRight, left_pos_x, Item_Start_y + MenuTypeSprite_y, 0.0160f, 0.0160f, 0.0000f, Header_r, Header_g, Header_b, Header_a);
				Set_Up_Draw(Item_Txt_Size, 255, 255, 255, Item_a, 0, 0, 0);
				DISPLAY_TEXT_WITH_NUMBER(Item_Pos_x + 0.1850f, Item_Start_y, "NUMBR", menu_item[Item_Number].num_val);
				DRAW_SPRITE(arrowLeftRight, Item_Pos_x + 0.1750f, Item_Start_y + MenuTypeSprite_y , 0.0160f, 0.0160f, 180.0000f, Header_r, Header_g, Header_b, Header_a);
				Set_Up_Draw(Item_Txt_Size, Scroll_Item_r, Scroll_Item_g, Scroll_Item_b, Fading_100, 0, 0, 0);
				DISPLAY_TEXT_WITH_LITERAL_STRING(Item_Pos_x, Item_Start_y, "STRING", menu_item[Item_Number].name);
				DRAW_SPRITE(arrowLeftRight, Item_Pos_x - 0.0100f, Item_Start_y + MenuTypeSprite_y, 0.0100f, 0.0160f, 0.0000f, AddString_r, AddString_g, AddString_b, Fading_100);
			}
			/**Item for AddString Display**/
			else if(menu_item[Item_Number].type == 9 || menu_item[Item_Number].type == 23){
				Set_Up_Draw(Item_Txt_Size, Scroll_Item_r, Scroll_Item_g, Scroll_Item_b, Fading_100, 0, 0, 0);
				Draw_Text("STRING", Item_Pos_x + 0.0150f, Item_Start_y, menu_item[Item_Number].name);
				Set_Up_Draw(Item_Txt_Size, Scroll_Item_r, Scroll_Item_g, Scroll_Item_b, Fading_100, 0, 0, 0);
				SET_TEXT_RIGHT_JUSTIFY(1);
				SET_TEXT_WRAP(0.0,Item_StringValue_Pos_x);
				DISPLAY_TEXT_WITH_LITERAL_STRING(0.0f, Item_Start_y,  "STRING",menu_item[Item_Number].charval);
				DRAW_SPRITE(arrowLeftRight, Item_Pos_x - 0.0100f, Item_Start_y + MenuTypeSprite_y, 0.0100f, 0.0160f, 0.0000f, AddString_r, AddString_g, AddString_b, Fading_100);
				//blips   radar_hospital  64x64  Submenu_Blip
				/**Submenu Sprite**/
				if (item_highlighted == Item_Number)DRAW_SPRITE(Charvalue_Blip, Item_Pos_x+ 0.0050f, Item_Start_y + MenuTypeSprite_y, 0.0160f, 0.0160f, Rotating360, MenuBlip_r, MenuBlip_g, MenuBlip_b, Fading_100);
				else DRAW_SPRITE(Charvalue_Blip, Item_Pos_x + 0.0050f, Item_Start_y + MenuTypeSprite_y, 0.0160f, 0.0160f, 0.000f, MenuBlip_r, MenuBlip_g, MenuBlip_b, Fading_100);
			}
			/**Item for Add_Line_String Display**/
			else if(menu_item[Item_Number].type == 15 || menu_item[Item_Number].type == 24){
				Set_Up_Draw(Item_Txt_Size, Scroll_Item_r, Scroll_Item_g, Scroll_Item_b, Fading_100, 0, 0, 0);
				SET_TEXT_CENTRE(1);
				DISPLAY_TEXT_WITH_LITERAL_STRING(Window_Pos_x  + Centering_Pos, Item_Start_y,  "STRING",menu_item[Item_Number].charval);
				DRAW_SPRITE(arrowLeftRight, Item_Pos_x + 0.2100f , Item_Start_y + MenuTypeSprite_y, 0.0160f, 0.0160f, 0.0000f, 255, 255, 255, FlashingGhost);
				DRAW_SPRITE(arrowLeftRight, Item_Pos_x + 0.0100f , Item_Start_y + MenuTypeSprite_y , 0.0160f, 0.0160f, 180.0000f, 255, 255, 255, FlashingGhost);
				DRAW_SPRITE(arrowLeftRight, Item_Pos_x - 0.0100f, Item_Start_y + MenuTypeSprite_y, 0.0100f, 0.0160f, 0.0000f, AddString_r, AddString_g, AddString_b, Fading_100);
			}
			/**Item that will be Skipped Display**/
			else if (menu_item[Item_Number].type == 10){
				Set_Up_Draw(Jumpover_Txt_Size, Gold, FlashingGhost,0,0,0);
				DISPLAY_TEXT_WITH_LITERAL_STRING(Item_Pos_x, Item_Start_y, "STRING", menu_item[Item_Number].name);
				DRAW_SPRITE(arrowLeftRight, Item_Pos_x - 0.0100f , Item_Start_y + MenuTypeSprite_y, 0.0100f, 0.0160f, 0.0000f, 255, 255, 255, Fading_100);
			}
			/**Item for Error Display**/
			else if (menu_item[Item_Number].type == 11){
				Set_Up_Draw(Item_Txt_Size, Header_r, Glowing, Glowing, Fading_100, 0,0,Glowing);
				DISPLAY_TEXT_WITH_LITERAL_STRING(Item_Pos_x, Item_Start_y, "STRING", menu_item[Item_Number].name);
				DRAW_SPRITE(arrowLeftRight, Item_Pos_x - 0.0100f, Item_Start_y + MenuTypeSprite_y, 0.0100f, 0.0160f, 0.000f, Stats_Yes_r, Stats_Yes_g, Stats_Yes_b, Fading_100);
			}
			/**Item for Functions Display**/
			else if (menu_item[Item_Number].type == 12){
				Set_Up_Draw(Item_Txt_Size, Item_r, Item_g, Item_b, Fading_100, 0,0,Glowing);
				DISPLAY_TEXT_WITH_LITERAL_STRING(Item_Pos_x, Item_Start_y, "STRING", menu_item[Item_Number].name);
				DRAW_SPRITE(arrowLeftRight, Item_Pos_x - 0.0100f, Item_Start_y + MenuTypeSprite_y, 0.0100f, 0.0160f, 0.0000f, JumpOver_r, JumpOver_g, JumpOver_b, Fading_100);
			}
			/**Item for Functions Display**/
			else if (menu_item[Item_Number].type == 26){
				Set_Up_Draw(Item_Txt_Size, Item_r, Item_g, Item_b, Fading_100, 0,0,Glowing);
				DISPLAY_TEXT_WITH_LITERAL_STRING(Item_Pos_x, Item_Start_y, "STRING", menu_item[Item_Number].name);
				DRAW_SPRITE(arrowLeftRight, Item_Pos_x - 0.0100f, Item_Start_y + MenuTypeSprite_y, 0.0100f, 0.0160f, 0.0000f, JumpOver_r, JumpOver_g, JumpOver_b, Fading_100);
			}
			/**Item for Functions Display while Crossbrowse**/
			else if (menu_item[Item_Number].type == 21){
				Set_Up_Draw(Item_Txt_Size, Item_r, Item_g, Item_b, Fading_100, 0,0,Glowing);
				DISPLAY_TEXT_WITH_LITERAL_STRING(Item_Pos_x, Item_Start_y, "STRING", menu_item[Item_Number].name);
				DRAW_SPRITE(arrowLeftRight, Item_Pos_x - 0.0100f, Item_Start_y + MenuTypeSprite_y, 0.0100f, 0.0160f, 0.0000f, JumpOver_r, JumpOver_g, JumpOver_b, Fading_100);
			}
			/**Item for Submenu Display**/
			else if (menu_item[Item_Number].type == 13){
				DRAW_SPRITE(arrowLeftRight, Item_Pos_x - 0.0100f, Item_Start_y + MenuTypeSprite_y, 0.0100f, 0.0160f, 0.000f, SubMenu_r, SubMenu_g, SubMenu_b, Fading_100);
				//blips   radar_police_heli  64x64  Submenu_Blip
				/**Submenu Sprite**/
				if (item_highlighted == Item_Number)DRAW_SPRITE(Submenu_Blip, Item_Pos_x+ 0.0050f, Item_Start_y + MenuTypeSprite_y, 0.0100f, 0.0100f, Rotating360, MenuBlip_r, MenuBlip_g, MenuBlip_b, Fading_100);
				else DRAW_SPRITE(Submenu_Blip, Item_Pos_x + 0.0050f, Item_Start_y + MenuTypeSprite_y, 0.0100f, 0.0160f, 0.000f, MenuBlip_r, MenuBlip_g, MenuBlip_b, Fading_100);
				/**Submenu MD Gold**/
				Set_Up_Draw(Item_Txt_Size, Gold, Fading_100, 0,0,Glowing);
				DISPLAY_TEXT_WITH_LITERAL_STRING(Item_Pos_x + 0.0150f, Item_Start_y, "STRING", "MD");
				/**Submenu Itemname**/
				Set_Up_Draw(Item_Txt_Size, SubMenu_r, SubMenu_g, SubMenu_b, Fading_100, 0,0,Glowing);
				DISPLAY_TEXT_WITH_LITERAL_STRING(Item_Pos_x + 0.0300f, Item_Start_y, "STRING", menu_item[Item_Number].name);



			}
			/**Item for AddNumSphere Display**/
			else if(menu_item[Item_Number].type == 14){
				float left_pos_x;
				if(menu_item[Item_Number].num_val < 10)left_pos_x = Item_Pos_x + 0.2012f;
				else if(menu_item[Item_Number].num_val >= 10) left_pos_x = Item_Pos_x + 0.2080f;
				else if(menu_item[Item_Number].num_val >= 100)left_pos_x = Item_Pos_x + 0.2155f;
				else if(menu_item[Item_Number].num_val >= 1000)left_pos_x = Item_Pos_x + 0.2250f;
				DRAW_SPRITE(arrowLeftRight, left_pos_x, Item_Start_y + MenuTypeSprite_y, 0.0160f, 0.0160f, 0.0000f, Header_r, Header_g, Header_b, Header_a);
				Set_Up_Draw(Item_Txt_Size, 255, 255, 255, Item_a, 0, 0, 0);
				DISPLAY_TEXT_WITH_NUMBER(Item_Pos_x + 0.1850f, Item_Start_y, "NUMBR", menu_item[Item_Number].num_val);
				DRAW_SPRITE(arrowLeftRight, Item_Pos_x + 0.1750f, Item_Start_y + MenuTypeSprite_y , 0.0160f, 0.0160f, 180.0000f, Header_r, Header_g, Header_b, Header_a);
				Set_Up_Draw(Item_Txt_Size, Scroll_Item_r, Scroll_Item_g, Scroll_Item_b, Fading_100, 0, 0, 0);
				DISPLAY_TEXT_WITH_LITERAL_STRING(Item_Pos_x, Item_Start_y, "STRING", menu_item[Item_Number].name);
				DRAW_SPRITE(arrowLeftRight, Item_Pos_x - 0.0100f, Item_Start_y + MenuTypeSprite_y, 0.0100f, 0.0160f, 0.0000f, AddString_r, AddString_g, AddString_b, Fading_100);
			}
			if (item_highlighted == Item_Number && !GetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_IN_ERROR)){

				/**Playerlist CrossBrowse Display PLAYER INFO**/ // THis will need work since it freezes plain and simple
				if((menu_item[Item_Number].type > 20 && menu_item[Item_Number].type < 30) && MD_Player_Info){
					if(Player_Display_Selection(players[ChangeNetPlayer].id))continue;
					int tmp_model;
					int Armor,Health,PlayerVehicle,VehicleHealth;
					Model VehicleModel;

					if(!PLAYER_HAS_CHAR(players[ChangeNetPlayer].id)) return;
					GET_CHAR_MODEL(PLAYER_CHAR(players[ChangeNetPlayer].id),&tmp_model);
					if(NetPlayer_Scan_tick_delay < GetTickCount()){
						NetPlayer_Scan_tick_delay = (GetTickCount() + 2500); // Is about 1 second
						UPDATE_CHANGE_NET_PLAYER_WEAPON_INFO(); //Update code  and do it every minute
					}
					GET_CHAR_ARMOUR(PLAYER_CHAR(players[ChangeNetPlayer].id),&Armor);
					GET_CHAR_HEALTH(PLAYER_CHAR(players[ChangeNetPlayer].id),&Health);
					if(IS_CHAR_IN_ANY_CAR(PLAYER_CHAR(players[ChangeNetPlayer].id))){
						//STORE_CAR_CHAR_IS_IN_NO_SAVE(PLAYER_CHAR(players[ChangeNetPlayer].id), &PlayerVehicle);
						GET_CAR_CHAR_IS_USING(PLAYER_CHAR(players[ChangeNetPlayer].id), &PlayerVehicle);
						GET_CAR_HEALTH(PlayerVehicle,&VehicleHealth);//veh Health
						GET_CAR_MODEL(PlayerVehicle,&VehicleModel);//veh model
					}
					char* health[4]; Strcpy(health, "Health:  ~s~"); itoa( Health, health);
					char* armour[4]; Strcpy(armour, "Armour:  ~s~"); itoa(Armor, armour);
					char* playermodel[8]; Strcpy(playermodel, "Player model:  ~s~"); Strcat(playermodel, ( (In_Network && tmp_model != MODEL_F_Y_MULTIPLAYER && tmp_model != MODEL_M_Y_MULTIPLAYER) ? "Changed(Mods)" : "Normal"));
					char* weapon[8]; Strcpy(weapon, "Weapon:  ~s~"); Strcat(weapon, NetPlayer_Weapon);
					//Get all info
					//GET_PLAYER_CHAR(players[ChangeNetPlayer].id, &players[ChangeNetPlayer].ped); //temporary for other shit left
					//Draw it

					Set_Up_Draw(Info_Item_Text, PlayerName_R, PlayerName_G, PlayerName_B, 255,0,0,0);
					Draw_Text("STRING",Menu_Start_Pos_x - 0.15, Item_Start_y + 0.0040 + (Item_height*3),health); // Item Height = 0.0280
					USE_PREVIOUS_FONT_SETTINGS();
					//Draw_Text("STRING",Menu_Start_Pos_x - 0.08, Item_Start_y + 0.0040 + (Item_height*3),armour);
					Draw_Text("STRING",Menu_Start_Pos_x - 0.09, Item_Start_y + 0.0040 + (Item_height*3),armour);
					USE_PREVIOUS_FONT_SETTINGS();
					Draw_Text("STRING", Menu_Start_Pos_x - 0.15, Item_Start_y + 0.0040 + (Item_height*4), playermodel);
					USE_PREVIOUS_FONT_SETTINGS();
					Draw_Text("STRING", Menu_Start_Pos_x - 0.15, Item_Start_y + 0.0040 + (Item_height*5), weapon);

					if(DOES_VEHICLE_EXIST(PlayerVehicle)){
						char* vehhealth[8]; Strcpy(vehhealth, "Vehicle Health:  ~s~"); itoa(VehicleHealth, vehhealth); //23 //OK
						char* vehusing[8];
						char* vehicleaction = "Driving:";

						USE_PREVIOUS_FONT_SETTINGS();
						Draw_Text("STRING",Menu_Start_Pos_x - 0.15, Item_Start_y + 0.0040 + (Item_height*6),vehhealth);

						if(is_driving(PLAYER_CHAR(players[ChangeNetPlayer].id))){
							if(IS_CHAR_IN_ANY_HELI(PLAYER_CHAR(players[ChangeNetPlayer].id))) vehicleaction = "Flying:";
							else if(IS_CHAR_ON_ANY_BIKE(PLAYER_CHAR(players[ChangeNetPlayer].id))) vehicleaction = "Riding:";
							Strcpy(vehusing, vehicleaction);
						}
						else{
						Strcpy(vehusing, "Passenger of:"); //+ " ~s~" = 17
						}
						Strcat(vehusing, "  ~s~"); Strcat(vehusing, GET_STRING_FROM_TEXT_FILE(GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(VehicleModel)));
						USE_PREVIOUS_FONT_SETTINGS();
						Draw_Text("STRING", Menu_Start_Pos_x - 0.15, Item_Start_y + 0.0040 + (Item_height*7) , vehusing);

					}
					else{
						Set_Up_Draw(Info_Item_Text, Header_r, Glowing, Glowing, 150, 0, 0, 0);
						Draw_Text("STRING", Menu_Start_Pos_x - 0.15, Item_Start_y + 0.0040 +(Item_height*6),"On foot");
					}
				}
			}
			Add_StringValue(Item_Number);
		}
	}
}
