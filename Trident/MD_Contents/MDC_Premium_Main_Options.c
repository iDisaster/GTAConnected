/**
 * @ MD EXTEND+
 * @ Version MDv13 TRIDENT(Essentials Based)
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */ 


void MC_Premium_Main_Setup(void){  //submenu from this

	MENU_SUB_HEADER = "Premium Options";	
	AddFunction_Value("~BLIP_52~ Enter Twilight Zone",3);					           			//1
	menu_item[1].num_val = (Episode + 1); //yes this should be correct, auto select current episode by default - Nathan (strings don't take 0 as devil is dumb)
	Add_JumpOver("~BLIP_94~  MD Premium   O p t i o n s  ~BLIP_94~");			                //2 >>JUMPOVER
	AddFunction("~BLIP_52~ ~y~Exit GhostMode / ~COL_NET_10~Show Yourself");						//3
	AddBool("~BLIP_68~ Players List On Screen",PlayerList);						                //4
	AddFunction("~BLIP_68~ Scan for Ghosts (HOLY/SNG)");				    //5 
	AddFunction("~BLIP_68~ Ghost Destroyer (SNG)");    //6
	AddFunction("~BLIP_68~ Resurrect all Ghosts (SNG)"); //7
	AddBool("~BLIP_68~ Fake Freeze",FakeFreeze); // 8
	AddFunction("Get number of registered objects"); //9
	AddFunction("Get number of registered peds"); //10
	AddFunction("Get number of registered vehicles"); //11
	AddSubMenu("Blackscreen to ID (NEW) ~PAD_RIGHT~"); //12
	AddSubMenu("Invite ~COL_NET_4~System (NEW)  ~PAD_RIGHT~");	    //  13 --> this
	#ifdef SuperAdmin
	AddSubMenu("~COL_NET_3~SuperAdmin Options ~PAD_RIGHT~"); // 14
	#endif
	#ifdef Developer
	AddSubMenu("Development ~COL_NET_4~Options  ~PAD_RIGHT~");	//  15 --> this	
	#endif
}

void MC_Premium_Main_Action(void)
{
	float mx,my,mz,mh;
	if(SelectedItem == 1)
	{
		#ifndef Admin
		print("Admin only.");
		return;
		#endif
		if(Include_Self && LOCAL_PLAYER_IS_READY_TO_START_PLAYING()) LAUNCH_LOCAL_PLAYER_IN_NETWORK_GAME();
		if(GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_SHOW_ON_LEAVE)){
			GET_CHAR_COORDINATES(pPlayer,&mx,&my,&mz);
			GET_CHAR_HEADING(pPlayer,&mh);
			RESURRECT_NETWORK_PLAYER(iPlayer,mx,my,mz,mh);
		}
		Fix_Game_Before_Leaving();
		SHUTDOWN_AND_LAUNCH_NETWORK_GAME(menu_item[SelectedItem].num_val - 1);		
	}
	//2 >>JUMPOVER
	else if(SelectedItem == 3){
		if (LOCAL_PLAYER_IS_READY_TO_START_PLAYING())LAUNCH_LOCAL_PLAYER_IN_NETWORK_GAME();		
		Resurrect = true;
		Alert("~b~MD: ~s~Ghost mode disabled, others see you now.",false);		
	}
	else if(SelectedItem == 4){
		PlayerList = !PlayerList;
		menu_item[SelectedItem].extra_val = PlayerList;							
	}
	if(SelectedItem == 5)
	{
		int i;
		char* buffer[32];
		for(i = 0; i < 16; i++)
		{
			if(Skip_For_Scans(i)) continue;
			#ifndef SuperAdmin
			if(Is_SuperAdmin(i)) continue;
			#endif
			if(GET_PLAYER_ID() == i) continue;
			if(!PLAYER_HAS_CHAR(i))
			{
				Alert_Two("~COL_NET_6~Holy Ghost Identified: ~s~",GET_PLAYER_NAME(i),false);
				return;
			}
			if (PLAYER_HAS_CHAR(i) && !IS_NETWORK_PLAYER_ACTIVE(i)) Alert_Two("~COL_NET_2~Ghost Identified: ~s~",GET_PLAYER_NAME(i),false);
			else
			{
				Strcpy(buffer, "~b~MD: ");
				Strcat(buffer, "~s~ No ghosts were found."); //29 + 34 = 63
				Alert(buffer,false);
				
			}
		}
	}
	if(SelectedItem == 6)
	{
		int i;
		char* buffer[32];
		for(i = 0; i < 16; i++)
		{
			if(Invalid_Player(i)) continue;
			if(Is_Developer(i)) continue;
			#ifndef SuperAdmin
			if(Is_Admin(i)) continue;
			#endif
			if(GET_PLAYER_ID() == i) continue;
			if(PLAYER_HAS_CHAR(i) && !IS_NETWORK_PLAYER_ACTIVE(i))
			{
				TELL_NET_PLAYER_TO_START_PLAYING(i,true);
				Strcpy(buffer, "~b~MD: ");
				Strcat(buffer, "~s~ Ghost Destroyed:"); 
				PLAYER_NAME_WITH_COLOUR(i, &buffer);
				Alert(buffer,false);
				return;
			}
			else
			{
				Strcpy(buffer, "~b~MD: ");
				Strcat(buffer, "~s~ No ghosts found."); 
				Alert(buffer,false);
			}
				
		}
	}
	if(SelectedItem == 7)
	{
		int i;
		char* buffer[32];
		for(i = 0; i < 16; i++)
		{
			if(Skip_For_Scans(i)) continue;
			#ifndef SuperAdmin
			if(Is_Admin(i)) continue;
			#endif
			if(GET_PLAYER_ID() == i) continue;
			if(PLAYER_HAS_CHAR(i) && !IS_NETWORK_PLAYER_ACTIVE(i))
			{
				RESURRECT_NETWORK_PLAYER(i,0,0,0,true);
				Strcpy(buffer, "~b~MD: ");
				Strcat(buffer, "~s~ Ghost Resurrected:"); 
				PLAYER_NAME_WITH_COLOUR(i, &buffer);
				Alert(buffer,false);
				return;
			}
			else
			{
				Strcpy(buffer, "~b~MD: ");
				Strcat(buffer, "~s~ No ghosts found."); 
				Alert(buffer,false);
			}
				
		}
	}
	if(SelectedItem == 8)
	{
		FakeFreeze = !FakeFreeze;
		menu_item[SelectedItem].extra_val = FakeFreeze;
		if(FakeFreeze)
		{
			print("Other players will now think you froze!");
			PAUSE_GAME();
		}
		else UNPAUSE_GAME();
	}
	if(SelectedItem == 9)
	{
		printInt(GetNumberOfObjects());
	}
	if(SelectedItem == 10)
	{
		printInt(GetNumberOfPeds());
	}
	if(SelectedItem == 11)
	{
		printInt(GetNumberOfVehicles());
	}
}


 void MC_Premium_Loop(void){ // ONLY WHEN NETWORK
	float mx,my,mz,mh;
	if(Resurrect && IS_CHAR_DEAD(pPlayer))
	{
		WAIT(1000);
		GET_CHAR_COORDINATES(pPlayer,&mx,&my,&mz);
		GET_CHAR_HEADING(pPlayer,&mh);
		RESURRECT_NETWORK_PLAYER(iPlayer,mx,my,(mz - 1.0f),mh);
		SET_CHAR_HEALTH(pPlayer,300);
		
	} 	
 }
 
 
 void BlackscreenID_Setup (void)
 {
	MENU_SUB_HEADER = "Manual Blackscreen";
    print("~COL_NET_1~Do not abuse.");
    AddFunction("Orange");
    AddFunction("Purple");
    AddFunction("Grass Green");
    AddFunction("Red");
    AddFunction("Yellow");
    AddFunction("Light Blue");
    AddFunction("Dark Pink");
    AddFunction("Peach");
    AddFunction("Dark Green");
    AddFunction("Dark Blue");
    AddFunction("Pink");
    AddFunction("Light Light Blue");
    AddFunction("Shit Green");
    AddFunction("Light Green");
    AddFunction("Grey");
    AddFunction("Brown");
    AddFunction("Press ~PAD_A~ To Blackscreen");
	return;
 }
 
 void BlackscreenID_Action (void)
 {
	if(SelectedItem == 1)
    {
        GhostID = SelectedItem - 1;
        if(HAS_NETWORK_PLAYER_LEFT_GAME(GhostID) || Is_Whitelisted(GhostID))
        {
            print("~COL_NET_4~ Error - ~BLIP_6~ Invalid Player");
            return;
        }
        TELL_NET_PLAYER_TO_START_PLAYING(GhostID,true);
		print("~COL_NET_4~ Blackscreened player");
        return;
    }




    if(SelectedItem == 2)
    {
        GhostID = SelectedItem -1;
        if(HAS_NETWORK_PLAYER_LEFT_GAME(GhostID) || Is_Whitelisted(GhostID))
        {
            print("~COL_NET_4~ Error - ~BLIP_6~ Invalid Player");
            return;
        }
        TELL_NET_PLAYER_TO_START_PLAYING(GhostID,true);
		print("~COL_NET_4~ Blackscreened player");
        return;
    }


    if(SelectedItem == 3)
    {
        GhostID = SelectedItem -1;
        if(HAS_NETWORK_PLAYER_LEFT_GAME(GhostID) || Is_Whitelisted(GhostID))
        {
            print("~COL_NET_4~ Error - ~BLIP_6~ Invalid Player");
            return;
        }
        TELL_NET_PLAYER_TO_START_PLAYING(GhostID,true);
		print("~COL_NET_4~ Blackscreened player");
        return;
    }



    if(SelectedItem == 4)
    {
        GhostID = SelectedItem -1;
        if(HAS_NETWORK_PLAYER_LEFT_GAME(GhostID) || Is_Whitelisted(GhostID))
        {
            print("~COL_NET_4~ Error - ~BLIP_6~ Invalid Player");
            return;
        }
        TELL_NET_PLAYER_TO_START_PLAYING(GhostID,true);
		print("~COL_NET_4~ Blackscreened player");
        return;
    }

    if(SelectedItem == 5)
    {
        GhostID = SelectedItem -1;
        if(HAS_NETWORK_PLAYER_LEFT_GAME(GhostID) || Is_Whitelisted(GhostID))
        {
            print("~COL_NET_4~ Error - ~BLIP_6~ Invalid Player");
            return;
        }
        TELL_NET_PLAYER_TO_START_PLAYING(GhostID,true);
		print("~COL_NET_4~ Blackscreened player");
        return;
    }

    if(SelectedItem == 6)
    {
        GhostID = SelectedItem -1;
        if(HAS_NETWORK_PLAYER_LEFT_GAME(GhostID) || Is_Whitelisted(GhostID))
        {
            print("~COL_NET_4~ Error - ~BLIP_6~ Invalid Player");
            return;
        }
        TELL_NET_PLAYER_TO_START_PLAYING(GhostID,true);
		print("~COL_NET_4~ Blackscreened player");
        return;
    }


    if(SelectedItem == 7)
    {
        GhostID = SelectedItem -1;
        if(HAS_NETWORK_PLAYER_LEFT_GAME(GhostID) || Is_Whitelisted(GhostID))
        {
            print("~COL_NET_4~ Error - ~BLIP_6~ Invalid Player");
            return;
        }
        TELL_NET_PLAYER_TO_START_PLAYING(GhostID,true);
		print("~COL_NET_4~ Blackscreened player");
        return;
    }

    if(SelectedItem == 8)
    {
        GhostID = SelectedItem -1;
       if(HAS_NETWORK_PLAYER_LEFT_GAME(GhostID) || Is_Whitelisted(GhostID))
        {
            print("~COL_NET_4~ Error - ~BLIP_6~ Invalid Player");
            return;
        }
        TELL_NET_PLAYER_TO_START_PLAYING(GhostID,true);
		print("~COL_NET_4~ Blackscreened player");
        return;
    }

    if(SelectedItem == 9)
    {
        GhostID = SelectedItem -1;
        if(HAS_NETWORK_PLAYER_LEFT_GAME(GhostID) || Is_Whitelisted(GhostID))
        {
            print("~COL_NET_4~ Error - ~BLIP_6~ Invalid Player");
            return;
        }
        TELL_NET_PLAYER_TO_START_PLAYING(GhostID,true);
		print("~COL_NET_4~ Blackscreened player");
        return;
    }

    if(SelectedItem == 10)
    {
        GhostID = SelectedItem -1;
        if(HAS_NETWORK_PLAYER_LEFT_GAME(GhostID) || Is_Whitelisted(GhostID))
        {
            print("~COL_NET_4~ Error - ~BLIP_6~ Invalid Player");
            return;
        }
        TELL_NET_PLAYER_TO_START_PLAYING(GhostID,true);
		print("~COL_NET_4~ Blackscreened player");
        return;
    }
    if(SelectedItem == 11)
    {
        GhostID = SelectedItem -1;
        if(HAS_NETWORK_PLAYER_LEFT_GAME(GhostID) || Is_Whitelisted(GhostID))
        {
            print("~COL_NET_4~ Error - ~BLIP_6~ Invalid Player");
            return;
        }
        TELL_NET_PLAYER_TO_START_PLAYING(GhostID,true);
		print("~COL_NET_4~ Blackscreened player");
        return;
    }


    if(SelectedItem == 12)
    {
        GhostID = SelectedItem -1;
        if(HAS_NETWORK_PLAYER_LEFT_GAME(GhostID) || Is_Whitelisted(GhostID))
        {
            print("~COL_NET_4~ Error - ~BLIP_6~ Invalid Player");
            return;
        }
        TELL_NET_PLAYER_TO_START_PLAYING(GhostID,true);
		print("~COL_NET_4~ Blackscreened player");
        return;
    }


    if(SelectedItem == 13)
    {
        GhostID = SelectedItem -1;
        if(HAS_NETWORK_PLAYER_LEFT_GAME(GhostID) || Is_Whitelisted(GhostID))
        {
            print("~COL_NET_4~ Error - ~BLIP_6~ Invalid Player");
            return;
        }
        TELL_NET_PLAYER_TO_START_PLAYING(GhostID,true);
		print("~COL_NET_4~ Blackscreened player");
        return;
    }



    if(SelectedItem == 14)
    {
        GhostID = SelectedItem -1;
		if(HAS_NETWORK_PLAYER_LEFT_GAME(GhostID) || Is_Whitelisted(GhostID))
        {
            print("~COL_NET_4~ Error - ~BLIP_6~ Invalid Player");
            return;
        }
        TELL_NET_PLAYER_TO_START_PLAYING(GhostID,true);
		print("~COL_NET_4~ Blackscreened player");
        return;
    }

    if(SelectedItem == 15)
    {
        GhostID = SelectedItem -1;
        if(HAS_NETWORK_PLAYER_LEFT_GAME(GhostID) || Is_Whitelisted(GhostID))
        {
            print("~COL_NET_4~ Error - ~BLIP_6~ Invalid Player");
            return;
        }
        TELL_NET_PLAYER_TO_START_PLAYING(GhostID,true);
		print("~COL_NET_4~ Blackscreened player");
        return;
    }

    if(SelectedItem == 16)
    {
        GhostID = SelectedItem -1;
        if(HAS_NETWORK_PLAYER_LEFT_GAME(GhostID) || Is_Whitelisted(GhostID))
        {
            print("~COL_NET_4~ Error - ~BLIP_6~ Invalid Player");
            return;
        }
        TELL_NET_PLAYER_TO_START_PLAYING(GhostID,true);
		print("~COL_NET_4~ Blackscreened player");
        return;
    }

    if(SelectedItem == 17)
    {
        return;
    }

    if(SelectedItem == 18)
    {
        return;
    }
 }
