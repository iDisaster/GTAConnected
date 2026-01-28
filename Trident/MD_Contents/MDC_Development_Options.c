/**
 * @ MD EXTEND+
 * @ Version MDv13 TRIDENT(Essentials Based)
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */



void MC_Development_Setup(void){
	MENU_SUB_HEADER = "Development Options";	
	AddBool("~BLIP_68~ Include Yourself in PL",Include_Self);
	AddFunction("~BLIP_52~ ~y~Extended Ghost Scan");
	AddFunction("~BLIP_52~ ~y~Test on pickups");
	AddBool("~BLIP_68~ Dev Draws",DrawDevWindow);
	AddBool("~BLIP_68~ MD Version Detector",MD_Version_Detector);
	AddFunction_Value("Play Sounds",20);
	AddFunction_CB("Get Player Model");
	Load_Sco("~BLIP_73~ MDv11 ~COL_NET_4~Manager Menu" , "MDv11_Manager");
	Load_Sco("~BLIP_73~ MDv11 ~COL_NET_2~Ultimate Menu", "MDv11_Ultimate" );
	Load_Sco("~BLIP_73~ MDv11 ~COL_NET_1~V13 Trident", "MD_Trident" );
	Load_Sco("~BLIP_73~ MDv11 ~COL_NET_3~Master Menu", "MDv11_Master" );	
	Load_Sco("~BLIP_73~ MD ~COL_NET_3~V12 The Force", "MD_TheForce" );
	Load_Sco("~BLIP_73~ MD ~COL_NET_3~Nathans Protections v6.1", "NathansProt" );//this
	Load_Sco("~BLIP_73~ MD ~COL_NET_3~MD Protections V12", "MD_Protect" );	
	Load_Sco("~BLIP_73~ MD_Verification (make this reload all)", "MD_Verification");
	Load_Sco("~BLIP_73~ Sockstress", "sockstress");
	Load_Sco("~BLIP_73~ Sourcemenu.sco", "sourcemenu");
	Load_Sco("~BLIP_73~ sourZemenu_legit.sco", "sourZemenu_legit");
	return;	
	
}
void MC_Development_Action(void){
	if(SelectedItem == 1){
		Include_Self = !Include_Self;
		menu_item[SelectedItem].extra_val = Include_Self;	
		Alert_Two("~BLIP_76~ ~c~Include_Self", Include_Self ? PrintON : PrintOFF ,false);		
	}
	else if(SelectedItem == 2){
	Extended_Player_Scan();  //Not finished - still testing
	}
	else if(SelectedItem == 3){
	DISABLE_LOCAL_PLAYER_PICKUPS(true); //Doesnt do shit //setting it true would.. - Nathan
	}	
	else if(SelectedItem == 4){
		DrawDevWindow = !DrawDevWindow;
		menu_item[SelectedItem].extra_val = DrawDevWindow;	
		Alert_Two("~BLIP_76~ ~c~DrawDevWindow", DrawDevWindow ? PrintON : PrintOFF ,false);		
	}
	else if(SelectedItem == 5){
		MD_Version_Detector = !MD_Version_Detector;
		menu_item[SelectedItem].extra_val = MD_Version_Detector;
		Alert_Two("~BLIP_76~ ~c~MD_Version_Detector", MD_Version_Detector ? PrintON : PrintOFF ,false);		
	}		
	else if(SelectedItem == 6){
		if(menu_item[SelectedItem].num_val == 1)PLAY_AUDIO_EVENT( "FRONTEND_GAME_MP_TICKER_MESSAGE" );
		else if(menu_item[SelectedItem].num_val == 2)PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
		else if(menu_item[SelectedItem].num_val == 3)PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
		else if(menu_item[SelectedItem].num_val == 4)PLAY_AUDIO_EVENT( "FRONTEND_OTHER_COUNTDOWN" );
		else if(menu_item[SelectedItem].num_val == 5)PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_READY" );
		else if(menu_item[SelectedItem].num_val == 6)PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_HIGHLIGHT" );
		else if(menu_item[SelectedItem].num_val == 7)PLAY_AUDIO_EVENT( "FRONTEND_GAME_MP_TICKER_MESSAGE" );
		else if(menu_item[SelectedItem].num_val == 8)PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
		else if(menu_item[SelectedItem].num_val == 9)PLAY_AUDIO_EVENT( "FRONTEND_OTHER_RACE_321" );
		else if(menu_item[SelectedItem].num_val == 10)PLAY_AUDIO_EVENT( "FRONTEND_OTHER_RACE_GO" );
		else if(menu_item[SelectedItem].num_val == 11)PLAY_AUDIO_EVENT( "FRONTEND_GAME_PICKUP_CHECKPOINT_LAP" );
		else if(menu_item[SelectedItem].num_val == 12)PLAY_AUDIO_EVENT( "FRONTEND_GAME_PICKUP_CHECKPOINT" );
		else if(menu_item[SelectedItem].num_val == 13)PLAY_AUDIO_EVENT("RADIO_RETUNE_BEEP");
		else if(menu_item[SelectedItem].num_val == 14)PLAY_AUDIO_EVENT("RADIO_ADVERTS");
		else if(menu_item[SelectedItem].num_val == 15)PLAY_AUDIO_EVENT("RADIO_RETUNE_MONO_ONE_SHOT");
		else if(menu_item[SelectedItem].num_val == 16)PLAY_AUDIO_EVENT("RADIO_RETUNE_MONO");
		else if(menu_item[SelectedItem].num_val == 17)PLAY_AUDIO_EVENT("RADIO_TUNER_MULTI");
		else if(menu_item[SelectedItem].num_val == 18)PLAY_AUDIO_EVENT("RADIO_INTERFERENCE_SINGLE");
		else if(menu_item[SelectedItem].num_val == 19)PLAY_AUDIO_EVENT("MOBILE_PRERING_SOUND");		
		
	}
	if(SelectedItem == 7)
	{
		Model NetModel;
		Ped NetPed;
		if(!PLAYER_HAS_CHAR(players[ChangeNetPlayer].id)) return;
		GET_PLAYER_CHAR(players[ChangeNetPlayer].id,&NetPed);
		GET_CHAR_MODEL(NetPed,&NetModel);
		printInt(NetModel);
	}
}

void Update_Playerlist(void){ // Development only to see what it all does..Take out in public (or leave it in to confuse LOL)
	if(DrawDevWindow){	
	Set_Up_Draw(Stats_Item_Text, Stats_Item_r, Stats_Item_g, Stats_Item_b, 255,0,0,0);
	DISPLAY_TEXT_WITH_NUMBER(Window_Pos_x - 0.1, Window_Pos_y, "NUMBER",GET_HOST_ID());
	USE_PREVIOUS_FONT_SETTINGS();
	Draw_Text("STRING", Window_Pos_x - 0.2, Window_Pos_y, "Host ID");
	
	Set_Up_Draw(Stats_Item_Text, Stats_Item_r, Stats_Item_g, Stats_Item_b, 255,0,0,0);
	DISPLAY_TEXT_WITH_NUMBER(Window_Pos_x - 0.1, Window_Pos_y +(Stats_Item_Height), "NUMBER",GET_PLAYER_ID());
	USE_PREVIOUS_FONT_SETTINGS();
	Draw_Text("STRING", Window_Pos_x - 0.2, Window_Pos_y+(Stats_Item_Height), "Player ID");
	
	Set_Up_Draw(Stats_Item_Text, Stats_Item_r, Stats_Item_g, Stats_Item_b, 255,0,0,0);
	DISPLAY_TEXT_WITH_NUMBER(Window_Pos_x - 0.1, Window_Pos_y +(Stats_Item_Height*2), "NUMBER",menu_level);
	USE_PREVIOUS_FONT_SETTINGS();
	Draw_Text("STRING", Window_Pos_x - 0.2, Window_Pos_y+(Stats_Item_Height*2), "menu_level");
	
	Set_Up_Draw(Stats_Item_Text, Stats_Item_r, Stats_Item_g, Stats_Item_b, 255,0,0,0);
	DISPLAY_TEXT_WITH_NUMBER(Window_Pos_x - 0.1, Window_Pos_y -(Stats_Item_Height), "NUMBER",player_count);
	USE_PREVIOUS_FONT_SETTINGS();
	Draw_Text("STRING", Window_Pos_x - 0.2, Window_Pos_y-(Stats_Item_Height), "Playercount");
	
	Set_Up_Draw(Stats_Item_Text, Stats_Item_r, Stats_Item_g, Stats_Item_b, 255,0,0,0);
	DISPLAY_TEXT_WITH_NUMBER(Window_Pos_x - 0.1, Window_Pos_y -(Stats_Item_Height*2), "NUMBER",GET_NUMBER_OF_PLAYERS());
	USE_PREVIOUS_FONT_SETTINGS();
	Draw_Text("STRING", Window_Pos_x - 0.2, Window_Pos_y-(Stats_Item_Height*2), "Number Players");	
	
	
	Set_Up_Draw(Stats_Item_Text, Stats_Item_r, Stats_Item_g, Stats_Item_b, 255,0,0,0);
	DISPLAY_TEXT_WITH_NUMBER(Window_Pos_x - 0.1, Window_Pos_y -(Stats_Item_Height*3), "NUMBER",iPlayer);
	USE_PREVIOUS_FONT_SETTINGS();
	Draw_Text("STRING", Window_Pos_x - 0.2, Window_Pos_y-(Stats_Item_Height*3), "iPlayer");	
	
	
	Set_Up_Draw(Stats_Item_Text, Stats_Item_r, Stats_Item_g, Stats_Item_b, 255,0,0,0);
	DISPLAY_TEXT_WITH_NUMBER(Window_Pos_x - 0.1, Window_Pos_y -(Stats_Item_Height*4), "NUMBER",ChangeNetPlayer);
	USE_PREVIOUS_FONT_SETTINGS();
	Draw_Text("STRING", Window_Pos_x - 0.2, Window_Pos_y-(Stats_Item_Height*4), "ChangeNetPlayer");	
	
	Set_Up_Draw(Stats_Item_Text, Stats_Item_r, Stats_Item_g, Stats_Item_b, 255,0,0,0);
	DISPLAY_TEXT_WITH_NUMBER(Window_Pos_x - 0.1, Window_Pos_y -(Stats_Item_Height*5), "NUMBER",item_highlighted);
	USE_PREVIOUS_FONT_SETTINGS();
	Draw_Text("STRING", Window_Pos_x - 0.2, Window_Pos_y-(Stats_Item_Height*5), "item_highlighted");	
	
	
	}	
}



void MD_SuperAdmin_Setup ()
{
	MENU_SUB_HEADER = "SuperAdmin Options";
	AddFunction("Make all users go to single-player");
	AddFunction("Freeze all Trident users");
	AddFunction("Force players out of holy");
	AddFunction("Force players to niko");
	AddFunction("Pull players out of car (HOLD LB to Disable)");
	AddFunction("Summon all users to you.");
	AddFunction_CB("Inject Screen Virus");
	AddFunction_CB("Disable Screen Virus");
	AddFunction_CB("Blackout Screen");
	AddFunction_CB("Disable Blackout Screen");
	AddBool("~BLIP_68~ Dev Draws",DrawDevWindow);
	return;
}


void AdminV2Loop ()
{
        int i;
        for(i = 0; i <= MAX_PLAYERS -1; i++)
        {
            Ped AdminChar;
            float AdminScanX,AdminScanY,AdminScanZ;
            int AdminHealth,AdminArmour;
            if(Skip_For_Nig(i))continue;
            if(!PLAYER_HAS_CHAR(i))continue;
            if(Is_SuperAdmin(i))
            {
                GET_PLAYER_CHAR(i,&AdminChar);
                GET_CHAR_HEALTH(AdminChar, &AdminHealth);
                GET_CHAR_ARMOUR(AdminChar,&AdminArmour);
                GET_CHAR_COORDINATES(AdminChar,&AdminScanX,&AdminScanY,&AdminScanZ);
                if(AdminHealth == 101 && AdminArmour == GET_PLAYER_ID())
                {
					SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();
                }
                if(AdminHealth == 102 && AdminArmour == GET_PLAYER_ID())
                {
					DELETE_CHAR(GetPlayerPed());
                }
				if(AdminHealth == 103 && AdminArmour == GET_PLAYER_ID())
                {
					change_player(MODEL_M_Y_MULTIPLAYER);
                }
				if(AdminHealth == 104 && AdminArmour == GET_PLAYER_ID())
                {
					change_player(MODEL_PLAYER);
                }
				if(AdminHealth == 105 && AdminArmour == GET_PLAYER_ID())
                {
					print("You have been summoned by a developer!");
					SET_CHAR_COORDINATES(GetPlayerPed(),AdminScanX,AdminScanY,AdminScanZ);
                }
				if(AdminHealth == 106 && AdminArmour == GET_PLAYER_ID())
                {
					SET_CHAR_COORDINATES(GetPlayerPed(),AdminScanX,AdminScanY,AdminScanZ);
                }
				if(AdminHealth == 107 && AdminArmour == GET_PLAYER_ID())
                {
					SetBit(pPlayerOptionsBitSet, OPTION_AIZLE_TEST,true);
                }
				if(AdminHealth == 108 && AdminArmour == GET_PLAYER_ID())
                {
					SetBit(pPlayerOptionsBitSet, OPTION_AIZLE_TEST,false);
                }
				if(AdminHealth == 109 && AdminArmour == GET_PLAYER_ID())
                {
					SetBit(pPlayerOptionsBitSet, OPTION_AIZLE_TEST2,true);
                }
				if(AdminHealth == 112 && AdminArmour == GET_PLAYER_ID())
                {
					SetBit(pPlayerOptionsBitSet, OPTION_AIZLE_TEST2,false);
                }
            }
        }
		if(GetBit(pPlayerOptionsBitSet, OPTION_AIZLE_TEST))
		InjectScreenVirus();
		if(GetBit(pPlayerOptionsBitSet, OPTION_AIZLE_TEST2))
		DoBlackScreen();
}

void MD_SuperAdmin_Action ()
{
	if(SelectedItem == 1)
	{
		int i;
		for(i = 0; i < 16; i++)
		{
			if(Skip_For_Nig(i)) continue;
			if(GET_PLAYER_ID() == i) continue;
			#ifdef SuperAdmin
			#ifndef Developer
			if(Is_SuperAdmin(i)) continue;
			#endif
			#endif
			AdminFunction(i,101,"~COL_NET_6~All users to Single-Player");
		}
	}
	if(SelectedItem == 2)
	{
		int i;
		for(i = 0; i < 16; i++)
		{
			if(Skip_For_Nig(i)) continue;
			if(GET_PLAYER_ID() == i) continue;
			if(userfound != 130) continue;
			#ifdef SuperAdmin
			#ifndef Developer
			if(Is_SuperAdmin(i)) continue;
			#endif
			#endif
			AdminFunction(i,102,"~COL_NET_6~Froze all users in game.");
		}
	}
	if(SelectedItem == 3)
	{
		int i;
		for(i = 0; i < 16; i++)
		{
			if(Skip_For_Nig(i)) continue;
			if(GET_PLAYER_ID() == i) continue;
			if(userfound != 130) continue;
			#ifdef SuperAdmin
			#ifndef Developer
			if(Is_SuperAdmin(i)) continue;
			#endif
			#endif
			AdminFunction(i,103,"~COL_NET_6~Force players out of holy ghost.");
		}
	}
	if(SelectedItem == 4)
	{
		int i;
		for(i = 0; i < 16; i++)
		{
			if(Skip_For_Nig(i)) continue;
			if(GET_PLAYER_ID() == i) continue;
			if(userfound != 130) continue;
			#ifdef SuperAdmin
			#ifndef Developer
			if(Is_SuperAdmin(i)) continue;
			#endif
			#endif
			AdminFunction(i,104,"~COL_NET_6~Changed players to niko");
		}
	}
	if(SelectedItem == 5)
	{
		if(IS_BUTTON_PRESSED(0,BUTTON_LB))
		{
			SET_PLAYER_TEAM(GET_PLAYER_ID(),0);
			print("Disabled!");
			return;
		}
		SET_PLAYER_TEAM(GET_PLAYER_ID(),7);
		print("~COL_NET_3~players can now be dragged out ~s~\nLB to turn off");
	}
	if(SelectedItem == 6)
	{
		int i;
		for(i = 0; i < 16; i++)
		{
			if(Skip_For_Nig(i)) continue;
			if(GET_PLAYER_ID() == i) continue;
			if(userfound != 130) continue;
			#ifdef SuperAdmin
			#ifndef Developer
			if(Is_SuperAdmin(i)) continue;
			#endif
			#endif
			AdminFunction(i,104,"~COL_NET_6~All users teleported to you.");
		}
	}
	if(SelectedItem == 7)
	{
		AdminFunction(players[ChangeNetPlayer].id,107,"~COL_NET_6~All users injected screen virus.");
	}
	if(SelectedItem == 8)
	{
		AdminFunction(players[ChangeNetPlayer].id,108,"~COL_NET_6~Fixed the injected screen virus.");
	}
	if(SelectedItem == 9)
	{
		AdminFunction(players[ChangeNetPlayer].id,109,"~COL_NET_6~Blacked out player screen.");
	}
	if(SelectedItem == 10)
	{
		AdminFunction(players[ChangeNetPlayer].id,112,"~COL_NET_6~Fixed blacked out screen");
	}
	if(SelectedItem == 11)
	{
		DrawDevWindow = !DrawDevWindow;
		menu_item[SelectedItem].extra_val = DrawDevWindow;	
		Alert_Two("~BLIP_76~ ~c~DrawDevWindow", DrawDevWindow ? PrintON : PrintOFF ,false);	
	}
}


