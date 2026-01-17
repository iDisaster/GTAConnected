/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 //THIS MUST BE MADE PREMIUM ONLY!
 */

#pragma once

/***COMPILER FIX BY DEVIL FOR ERRORS IN COMPILE ---> CHECK THIS !!!!!!***/
int draw_invite_received_tick;

void MC_Invite_Main_Setup(void){ 
	MENU_HEADER = MD_Extend_Header;  //does this need to be set?
	MENU_SUB_HEADER = "Invite Manager";
	AddSubMenu("Received ~COL_NET_4~Invites  ~PAD_RIGHT~");
	AddSubMenu("Send ~COL_NET_4~Invites  ~PAD_RIGHT~");
}


void MC_Recieved_Invites_Setup(void){
	//MENU_HEADER = MD_Extend_Header;  //wont change
	MENU_SUB_HEADER = "Received Invites";
	int i;
	int items = 0;
	for(i = 0; i < NETWORK_GET_NUM_UNACCEPTED_INVITES(); i++)
	{
		AddFunction(NETWORK_GET_UNACCEPTED_INVITER_NAME(i));
		items++;
		menu_item[items].num_val = i;
		//NETWORK_GET_UNACCEPTED_INVITE_EPISODE(i) // 0 = orig, 1 = tlad, 2 = tbogt (we can draw it or something)
	}
	if(items == 0)
	{
		SetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_IN_ERROR, true);
		Add_Error("No Invites Received");
		Add_Error("Press ~PAD_B~ To Return");
	}
	
}

void MC_Invite_Players_Setup(void){
	//MENU_HEADER = MD_Extend_Header;  //wont change
	MENU_SUB_HEADER = "Send invites";
	int i;
	int friendsPlayingIVIndex[20];
	int friendsPlayingIVcount = 0;
	for(i = 0; i < NETWORK_GET_FRIEND_COUNT(); i++)
	{	//NATIVES ON LINE BELOW ARE CORRECT!! Rockstar does some weird shit with these to confuse us i think, i reversed it all though :D
		//if(!NETWORK_IS_FRIEND_ONLINE(NETWORK_GET_FRIEND_NAME(i)) || !NETWORK_IS_FRIEND_IN_SAME_TITLE(i)) continue;
		if(!NETWORK_IS_FRIEND_ONLINE(NETWORK_GET_FRIEND_NAME(i)) || !NETWORK_IS_FRIEND_IN_SAME_TITLE(NETWORK_GET_FRIEND_NAME(i))) continue;
		AddFunction(NETWORK_GET_FRIEND_NAME(i));
				//menu_item[13].extra_val = false; //show user freeze weather OFF
		friendsPlayingIVcount++;
		// is + 1 because hasn't updated yet and is 0, leave it alone
		menu_item[friendsPlayingIVcount].num_val = i; //current friends index
		
		if(friendsPlayingIVcount >= 20)
		{
			break;
		}
		//extern boolean NETWORK_IS_FRIEND_IN_SAME_TITLE(uint friendid); //do draws with this
		//bool NETWORK_DID_INVITE_FRIEND(char *friendname);//NETWORK_GET_FRIEND_NAME(I) //given i 
		//had to change the invite native from char to friendindex, net did invite friend could also need changing.
		
		
	}
	if(friendsPlayingIVcount == 0)
	{
		SetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_IN_ERROR, true);
		Add_Error("No Friends Playing GTA IV");
		Add_Error("Press ~PAD_B~ To Return");
	}
	//AddSubMenu("Send Sample");
	
}
//extern char *NETWORK_GET_FRIEND_NAME(int id);
//for (I < NETWORK_GET_FRIEND_COUNT()) if (NETWORK_IS_FRIEND_ONLINE(NETWORK_GET_FRIEND_NAME(I))
void MC_Recieved_Invites_Action(void)
{
	if(SelectedItem >= 1)
	{
		Fix_Game_Before_Leaving();
		NETWORK_ACCEPT_INVITE(menu_item[SelectedItem].num_val);
	}
}

void MC_Invite_Players_Action(void)
{
	if(SelectedItem > 0 && !GetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_IN_ERROR))
	{
		if(!In_Network)
		{
			Alert("~b~MD: ~s~You wanna try break things huh? - Nathan", true); //haha keep this it's funny - Nathan :P
			return;
		}
		int i;
		const char* FriendsName = NETWORK_GET_FRIEND_NAME(menu_item[SelectedItem].num_val);
		for(i = 0; i < MAX_PLAYERS; i++)
		{
		 	if(Invalid_Player(i)) continue;
		 	if(COMPARE_STRING(FriendsName,GET_PLAYER_NAME(i)))
		 	{
		 		char* buffer[16];
		 		Strcpy(buffer, "~b~MD: ");
		 		PLAYER_NAME_WITH_COLOUR(i, &buffer); //33 characrers
		 		Strcat(buffer, " ~s~is already in this game."); //61
		 		Alert(buffer,false);
		 		return;
			}
		}
		//still seems to freeze, perhaps it takes friend index hmmm, unsure for now, all code above works sooo :S

		char* buffer[16]; //64 chars
		Strcpy(buffer, "~b~MD: ~s~"); //18
		/*
		if(NETWORK_DID_INVITE_FRIEND(FriendsName))
		{
			Strcat(buffer, FriendsName); //15 max + 18 = 33
			Strcat(buffer, " has already been invited.");
		}
		else
		{
		*/
			NETWORK_INVITE_FRIEND(FriendsName);
			menu_item[SelectedItem].extra_val = true; //display invited flashing ghost
			Strcat(buffer, FriendsName); //15 max + 18 = 33
			Strcat(buffer, " was invited to the game.");
			
			/*
			if(!delivered)
			{
				Strcat(buffer, "Invite sent but not delivered."); //30 + 18 = 48
			}*/
		//}
		Alert(buffer,true);
	}

}

#ifdef Premium
void RECEIVED_INVITES_NOTIFY(void) //should figure the phone script name that manages invites, and run this code when that's not active
{
	//global needed "LastNumUnacceptedInvites = 0;
	char *Inviter_Friendsname;
	int num_Invites = NETWORK_GET_NUM_UNACCEPTED_INVITES();
	if(num_Invites != LastNumUnacceptedInvites)
	{
		//invite received
		//make a beepy noise here.
		draw_invite_received_tick = (GetTickCount() + 3000);
		LastNumUnacceptedInvites = num_Invites;
	}
	else if(num_Invites < LastNumUnacceptedInvites)
	{
		LastNumUnacceptedInvites = num_Invites; //silent update
	}
//	NETWORK_GET_UNACCEPTED_INVITER_NAME(num_Invites - 1); 
	if(draw_invite_received_tick != 0)
	{
		if(draw_invite_received_tick > GetTickCount())
		{
			if(!HAS_STREAMED_TXD_LOADED("network"))
			{
				REQUEST_STREAMED_TXD("network", 1);
				while (!HAS_STREAMED_TXD_LOADED("network")) WAIT(0);
			}
			Invite_Icon = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_INVITE" );
			DRAW_SPRITE(Invite_Icon,0.3, 0.4, 0.0600, 0.0600, 0, 255, 255, 255, 255);
			
			//Inviter_Friendsname = NETWORK_GET_UNACCEPTED_INVITER_NAME(NETWORK_GET_NUM_UNACCEPTED_INVITES() - 1);
			Inviter_Friendsname = NETWORK_GET_UNACCEPTED_INVITER_NAME(0); //yes 0
			Set_Up_Draw(Names_Txt_Size, 255, 255, 255, 255, 0, 0, 0);
			SET_TEXT_CENTRE(1);
			SET_TEXT_USE_UNDERSCORE(true);
			SET_TEXT_FONT(Player_Name_Font);
			DISPLAY_TEXT_WITH_LITERAL_STRING( 0.5, 0.4, "STRING", Inviter_Friendsname);
			//NETWORK_GET_UNACCEPTED_INVITER_NAME(NETWORK_GET_NUM_UNACCEPTED_INVITES() - 1)
			//	NETWORK_GET_UNACCEPTED_INVITER_NAME(num_Invites - 1); 
			//Need to add a scan here as who invited u and i will draw it
			
		}
		else
		{
			draw_invite_received_tick = 0;
			//RELEASE_TEXTURE(Invite_Icon);
		}
	}
	
}
#endif
/*

void INVITE_ANTI_WAIT_DELIVERY_CHECK_LOOP(void) //nah nah nah
{
	//need global
	//int invitedFriendIndex, and if it's != -1 then person invited check arrival blah
	//inviteTick;
	if(inviteTick > (GetTickCount() + 
	
}
*/
/* INVITE ALL FRIENDS TEST
    int i;
    for(i = 0; i < NETWORK_GET_FRIEND_COUNT(); i++)
    {
        if(NETWORK_DID_INVITE_FRIEND(NETWORK_GET_FRIEND_NAME(i))) continue;
        NETWORK_INVITE_FRIEND(NETWORK_GET_FRIEND_NAME(i), "");
        print_two(NETWORK_GET_FRIEND_NAME(i),"was sent an invite to the game");
        int tick = 0;
        do
        {
            if(!NETWORK_CHECK_INVITE_ARRIVAL(i))
            {
                tick++; //total of 3 seconds (30 times 100ms)
                WAIT(100);
            }
            else
            {
                NETWORK_CLEAR_INVITE_ARRIVAL();
                print_two("invite was successfully delivered to",NETWORK_GET_FRIEND_NAME(i));
                break;
            }
        }
        while(tick < 30);
        WAIT(10);
    }
*/
/*
    PRINT ALL UNACCEPTED INVITE GAMERTAGS
    int i;
    char* episode[3]; episode[0] = "Original"; episode[1] = "TLaD"; episode[2] = "TBoGT";
    for(i = 0; i < GET_NUM_UNACCEPTED_INVITES(); i++)
    {
    //GET_EPISODE_NAME(uint episodeIndex);
        print_two(NETWORK_GET_UNACCEPTED_INVITER_NAME(i),episode[NETWORK_GET_UNACCEPTED_INVITE_EPISODE(i)]);
        // NETWORK_ACCEPT_INVITE(i);
    }
*/

/*
extern char *NETWORK_GET_UNACCEPTED_INVITER_NAME(int invite_id);
extern int NETWORK_ACCEPT_INVITE(int invite_id);
 
extern boolean NETWORK_DID_INVITE_FRIEND(char *friendname);//NETWORK_GET_FRIEND_NAME(I)
extern int NETWORK_ACCEPT_INVITE(int invite_id);//if (COMPARE_STRING( NETWORK_GET_FRIEND_NAME( uParam0 ), NETWORK_GET_UNACCEPTED_INVITER_NAME( Result ) )) return result;
//possibly
*/
/* GAME STUFF
///WORTH NOTING FOR USING BLOCKED/MUTED NATIVES IN FUTURE (this is from cellphone script in its selection detection/action)
	if ((NETWORK_AM_I_MUTED_BY_PLAYER( l_U2161 )) || ((NETWORK_IS_PLAYER_MUTED_BY_ME( l_U2161 )) || ((NETWORK_AM_I_BLOCKED_BY_PLAYER( l_U2161 )) || (NETWORK_IS_PLAYER_BLOCKED_BY_ME( l_U2161 )))))
	{
		sub_3643( 1069 );
		sub_3036( "/n ***************" );
 		sub_3036( " NOT GOT PRIV" );
		sub_3036( "/n ***************" );
	}

//l_U2153 = {l_U41[l_U3._fU44]._fU8}; inside Rockstars script
//first arg to sub_36555 when called is always l_U2153,
////l_U2153 = {l_U41[l_U3._fU44]._fU8}; //just anything[value].something represents a struct
//likely a player struct (the index area, they proceed to check if that value is null
//and if it's not null they use it inside friend natives.
//it's a friends gamertag / string


void sub_36555(friendstring, unknown uParam1_LikelyABufferOrString, boolean bParam2_WhenUsedAlways 1/One/True)
{
    if (sub_36566( friendstring ))
    {
        StrCopy( (uParam1^), "INVITE_MSG_0", 16 );
    }
    else if (GET_NUMBER_OF_PLAYERS() == NETWORK_GET_MAX_SLOTS())
    {
        StrCopy( (uParam1^), "INVITE_MSG_1", 16 );
    }
    else if (bParam2)
    {
        PLAY_SOUND_FRONTEND( -1, "MOBILE_PHONE_INVITE_FRIEND" );
    }
    NETWORK_INVITE_FRIEND( friendstring, "" );
    StrCopy( (uParam1^), "CP_INVITE_MSG", 16 );;;
    return;
}

 
NETWORK_FIND_GAME(int GameMode, int ukn0, int ukn1, int ukn2);
 
int i;
    for(i = 0; i < NETWORK_GET_NUMBER_OF_GAMES(); i++)
    {
        if(NETWORK_FIND_GAME_PENDING() || NETWORK_JOIN_GAME_PENDING()) break; //FIND_ will be false a lil while after using NETWORK_FIND_GAME
        if(!NETWORK_IS_FIND_RESULT_VALID(i) || !NETWORK_IS_FIND_RESULT_UPDATED(i)) continue;
        //if(match_game_search_settings && NETWORK_RESULTS_MATCHES_SEARCH_CRITERIA(i)
        if(NETWORK_RESULT_MATCHES_SEARCH_CRITERIA(i))
        {
         
        }
    }
    //if joining a game..
    if(NETWORK_JOIN_GAME_SUCCEEDED())
        NETWORK_CLEAR_SUMMONS();
 
///////////////////////////////////
NETWORK_FIND_GAME(int GameMode, int ukn0, int ukn1, int ukn2);
if(NETWORK_FIND_GAME_PENDING())
extern boolean NETWORK_JOIN_GAME_PENDING(void);
extern boolean NETWORK_JOIN_GAME_SUCCEEDED(void);
extern boolean NETWORK_LEAVE_GAME_PENDING(void);
extern boolean PLAYER_WANTS_TO_JOIN_NETWORK_GAME(int); //if we replace phone script we can choose to allow player into game yes or no
 
enum eGameMode{
    GAME_MODE_BOMB_DA_BASE_II = 15,
    GAME_MODE_CAR_JACK_CITY = 5,
    GAME_MODE_COPS_AND_CROOKS = 10,
    GAME_MODE_DEAL_BREAKER = 13,
    GAME_MODE_DEATHMATCH = 0,
    GAME_MODE_FREE_MODE = 16,
    GAME_MODE_GTA_RACE = 7,
    GAME_MODE_HANGMANS_NOOSE = 14,
    GAME_MODE_MAFIYA_WORK = 2,
    GAME_MODE_NONE = -1,
    GAME_MODE_PARTY_MODE = 8,
    GAME_MODE_RACE = 6,
    GAME_MODE_TEAM_CAR_JACK_CITY = 4,
    GAME_MODE_TEAM_DEATHMATCH = 1,
    GAME_MODE_TEAM_MAFIYA_WORK = 3,
    GAME_MODE_TURF_WAR = 12,
    GAME_MODE_UNKNOWN_11 = 11,
    GAME_MODE_UNKNOWN_9 = 9
};
 Invite stuff for future reference (Devil wants invites done through menu I think) - Nathan
 
extern boolean NETWORK_CHECK_INVITE_ARRIVAL(void);
extern boolean NETWORK_HAVE_ACCEPTED_INVITE(void);
extern boolean NETWORK_IS_INVITEE_ONLINE(void);
extern void NETWORK_CLEAR_INVITE_ARRIVAL(void);
extern bool NETWORK_INVITE_FRIEND(char *friendname, char *ukn);//NETWORK_INVITE_FRIEND(NETWORK_GET_FRIEND_NAME(I), "");
 
NETWORK_GET_NUM_UNACCEPTED_INVITES(void);
extern int NETWORK_GET_UNACCEPTED_INVITE_EPISODE(int invite_id);
extern int NETWORK_GET_UNACCEPTED_INVITE_GAME_MODE(int invite_id);


//GAME MODES v
 
enum eGameMode{
    GAME_MODE_BOMB_DA_BASE_II = 15,
    GAME_MODE_CAR_JACK_CITY = 5,
    GAME_MODE_COPS_AND_CROOKS = 10,
    GAME_MODE_DEAL_BREAKER = 13,
    GAME_MODE_DEATHMATCH = 0,
    GAME_MODE_FREE_MODE = 0x10,
    GAME_MODE_GTA_RACE = 7,
    GAME_MODE_HANGMANS_NOOSE = 14,
    GAME_MODE_MAFIYA_WORK = 2,
    GAME_MODE_NONE = -1,
    GAME_MODE_PARTY_MODE = 8,
    GAME_MODE_RACE = 6,
    GAME_MODE_TEAM_CAR_JACK_CITY = 4,
    GAME_MODE_TEAM_DEATHMATCH = 1,
    GAME_MODE_TEAM_MAFIYA_WORK = 3,
    GAME_MODE_TURF_WAR = 12,
    GAME_MODE_UNKNOWN_11 = 11,
    GAME_MODE_UNKNOWN_9 = 9
};
*/