/**
 * @ MD Trident
 * @ MD Series: Version 13, January 2017 //#ifdef Premium IS USED HERE!
 * @ Copyright (C) 2017 IIV NATHAN VII / DEVILSDESIGN
*/  

//#ifdef Premium IS USED HERE! /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//Created by IIV NATHAN VII
// IF ISSUES ARISE because of button priorities or something (shouldn't do) LET ME KNOW! (Nathan) I should be able to sort it!
//Controls currently at line: 205!
//COPY_ANIMATIONS(Ped ped, Ped pednext, float speed); //Put ped in water and copy anims.. SwimWalk?
//#include <natives.h>
//#include <inccommon.h>
//#include <strings.h>
//#include <types.h>
//#include <consts.h>
  
//PUT THESE FUNCTIONS IN SHARED!
/*
void Shuffle_Vehicle_Seat(void) //WORKS ON BIKES TOO!
{
    int tmp_veh;
    if(!IS_CHAR_IN_ANY_CAR(pPlayer)) return;
    GET_CAR_CHAR_IS_USING(pPlayer,&tmp_veh);
    if(IS_CHAR_ON_ANY_BIKE(pPlayer))
    {
        int driver;
        GET_DRIVER_OF_CAR(tmp_veh,&driver);
        if(!DOES_CHAR_EXIST(driver))
            WARP_CHAR_INTO_CAR(pPlayer,tmp_veh);
        else if(driver == pPlayer && IS_CAR_PASSENGER_SEAT_FREE(tmp_veh,0))
            WARP_CHAR_INTO_CAR_AS_PASSENGER(pPlayer,tmp_veh,0);
    }
    TASK_SHUFFLE_TO_NEXT_CAR_SEAT(pPlayer,tmp_veh);
}
 
void Clone_Car( int cveh, float x, float y, float z, float h, int *car_clone)
{
  int model;
  if(!DOES_VEHICLE_EXIST(cveh)) return;
  int colour1,colour2,colourEXT1,colourEXT2;
  int health;
  float dirt_level;
  GET_CAR_MODEL(cveh,&model);
  GET_CAR_COLOURS(cveh, &colour1, &colour2);
  GET_EXTRA_CAR_COLOURS(cveh, &colourEXT1, &colourEXT2);
  GET_CAR_HEALTH(cveh, &health);
  GET_VEHICLE_DIRT_LEVEL(cveh, &dirt_level);
  bool siren = IS_CAR_SIREN_ON(cveh);
   ////////////////
  CREATE_CAR(model,x,y,z,&cveh,true);
  SET_VEHICLE_ALPHA(cveh,0); //should make vehicle transparent and appear slowly...
  SET_CAR_HEADING(cveh,h);
  SET_CAR_ON_GROUND_PROPERLY(cveh);
  SET_CAR_HEALTH(cveh,health);
  CHANGE_CAR_COLOUR(cveh,colour1,colour2);
  SET_EXTRA_CAR_COLOURS(cveh,colourEXT1,colourEXT2);
  SET_VEHICLE_DIRT_LEVEL(cveh,dirt_level); //can adjust dirt level and health based on vehicle helper being on..
  SWITCH_CAR_SIREN(cveh,siren);
  //If Vehicle helper looped (we can do this on tick delay!)
    //SET_CAR_CAN_BE_DAMAGED(cveh,!vehicle_helper);
    //SET_CAR_CAN_BE_VISIBLY_DAMAGED(cveh,!vehicle_helper);
    //if doesn't work use SET_CAR_PROOFS(cveh,bool bulletproof, bool fireproof, bool explosionproof, bool colissionproof, bool meleeproof);
   
  car_clone = cveh;
}


*/
 
 
#ifdef Premium //This is for the enum and loop voids
 
 enum eKeyboardAntiPauseActions{
	ACTION_COMPLETE_AND_DISABLED = 0,
	ACTION_NETWORK_SPY_PLAYER = 1,
	ACTION_NETWORK_MUTE_PLAYER = 2,
	ACTION_NETWORK_KICK_PLAYER = 3,
	ACTION_NETWORK_VIEW_PLAYER_PROFILE = 4,
};
 
void VerifyKeyboardSelectedNetworkIndex(void)
{
	register int i;
	if(Player_Display_Selection(KeyboardSelectedPlayerIndex)) //Skips developers :P
	{
		for(i = 0; i < MAX_PLAYERS; i++)
		{
			if(Player_Display_Selection(i)) continue;
			KeyboardSelectedPlayerIndex = i;
			return;
		}
	}
}
 
void MC_Keyboard_Network_Anti_Wait_Loop(void)
{
	if(KeyboardAntiWaitAction == ACTION_COMPLETE_AND_DISABLED) return;
	VerifyKeyboardSelectedNetworkIndex();
	if(IS_GAME_KEYBOARD_KEY_JUST_PRESSED(KEY_ESC))
	{
		KeyboardAntiWaitAction = ACTION_COMPLETE_AND_DISABLED;
		CLEAR_PRINTS();
		return;
	}
	else if(IS_GAME_KEYBOARD_KEY_JUST_PRESSED(KEY_RIGHT_ARROW))
	{
		KeyboardSelectedPlayerIndex++;
		if(Player_Display_Selection(KeyboardSelectedPlayerIndex))
		{
			register int i;
			for(i = KeyboardSelectedPlayerIndex; i < MAX_PLAYERS; i++)
			{
				if(Player_Display_Selection(i)) continue;
				KeyboardSelectedPlayerIndex = i;
				break;
			}
			if(Player_Display_Selection(KeyboardSelectedPlayerIndex)) //unable to increase
			{
				VerifyKeyboardSelectedNetworkIndex(); //will re-scan
			}
		}
	}
	else if(IS_GAME_KEYBOARD_KEY_JUST_PRESSED(KEY_LEFT_ARROW))
	{
		KeyboardSelectedPlayerIndex--;
		if(Player_Display_Selection(KeyboardSelectedPlayerIndex))
		{
			register int i;
			for(i = KeyboardSelectedPlayerIndex; i > -1; i--) //MAY NEED CHANGING TO 0, not sure, think this is correct! - Nathan
			{
				if(Player_Display_Selection(i)) continue;
				KeyboardSelectedPlayerIndex = i;
				break;
			}
			if(Player_Display_Selection(KeyboardSelectedPlayerIndex))
			{
				VerifyKeyboardSelectedNetworkIndex(); //will re-scan
			}
		}
	}
	
	char * buffer[32];
	Strcpy(buffer, "~b~MD: ~PAD_LEFT~ "); //27
	PLAYER_NAME_WITH_COLOUR(KeyboardSelectedPlayerIndex, &buffer); //WORKS! //45
	Strcat(buffer, "~s~ ~PAD_RIGHT~~n~"); //63
	if(KeyboardAntiWaitAction == ACTION_NETWORK_SPY_PLAYER)
	{
		Strcat(buffer, keyboard_close_on_network_selection ? "Spy = ENTER" : "Spy = ENTER, Exit = ESC");
		if(IS_GAME_KEYBOARD_KEY_JUST_PRESSED(KEY_ENTER))
		{
			if(Is_Whitelisted(KeyboardSelectedPlayerIndex))
			{
				PLAY_AUDIO_EVENT("FRONTEND_MENU_MP_UNREADY");
			}
			else
			{
				if(PLAYER_HAS_CHAR(KeyboardSelectedPlayerIndex))
				{
					int tmp_ped;
					GET_PLAYER_CHAR(KeyboardSelectedPlayerIndex,&tmp_ped);
					//Spectate_Char = tmp_ped;
					//SpectatePlayerIndex = KeyboardSelectedPlayerIndex;
					SetByteSet(&SpectateAndAttachByteSet, SPECTATE_PLAYER_INDEX, KeyboardSelectedPlayerIndex);
					//MD_Spectate_Player(tmp_ped);	pretty sure the loop will trigger this
					if(keyboard_close_on_network_selection)
					{
						char * nigger[32];
						Strcpy(nigger, "~b~MD: ~s~Spectating: "); //31
						PLAYER_NAME_WITH_COLOUR(KeyboardSelectedPlayerIndex, &nigger); //WORKS! = 40
						Strcat(nigger, "~s~.~n~Hold ~PAD_LB~ & Press ~PAD_RB~ to disable."); //74
						Alert(nigger, false);
						KeyboardAntiWaitAction = ACTION_COMPLETE_AND_DISABLED;
						return;
					}
				}
			}
		}
	}
	else if(KeyboardAntiWaitAction == ACTION_NETWORK_MUTE_PLAYER)
	{
		Strcat(buffer, NETWORK_IS_PLAYER_MUTED_BY_ME(KeyboardSelectedPlayerIndex) ? "UnMute" : "Mute");
		Strcat(buffer, keyboard_close_on_network_selection ? " = ENTER" : " = ENTER, Exit = ESC");
		if(IS_GAME_KEYBOARD_KEY_JUST_PRESSED(KEY_ENTER))
		{
			if(Is_Whitelisted(KeyboardSelectedPlayerIndex))
			{
				NETWORK_SET_PLAYER_MUTED(KeyboardSelectedPlayerIndex,false);
				PLAY_AUDIO_EVENT("FRONTEND_MENU_MP_UNREADY");
			}
			else
			{
				NETWORK_SET_PLAYER_MUTED(KeyboardSelectedPlayerIndex, !NETWORK_IS_PLAYER_MUTED_BY_ME(KeyboardSelectedPlayerIndex));
				if(keyboard_close_on_network_selection)
				{
					KeyboardAntiWaitAction = ACTION_COMPLETE_AND_DISABLED;
					return;
				}
			}
		}
	}
	else if(KeyboardAntiWaitAction == ACTION_NETWORK_KICK_PLAYER)
	{
		Strcat(buffer, keyboard_close_on_network_selection ? "Kick = ENTER" : "Kick = ENTER, Exit = ESC");
		if(IS_GAME_KEYBOARD_KEY_JUST_PRESSED(KEY_ENTER))
		{
			if(Is_Whitelisted(KeyboardSelectedPlayerIndex))
			{
				PLAY_AUDIO_EVENT("FRONTEND_MENU_MP_UNREADY");
			}
			else
			{
				NETWORK_KICK_PLAYER(KeyboardSelectedPlayerIndex);
				if(keyboard_close_on_network_selection)
				{
					KeyboardAntiWaitAction = ACTION_COMPLETE_AND_DISABLED;
					return;
				}
			}
		}
	}
	else if(KeyboardAntiWaitAction == ACTION_NETWORK_VIEW_PLAYER_PROFILE)
	{
		Strcat(buffer, keyboard_close_on_network_selection ? "Profile = ENTER" : "Profile = ENTER, Exit = ESC");
		//gt spoofers, lets allow people to view all profiles  (no whitelist)
		if(IS_GAME_KEYBOARD_KEY_JUST_PRESSED(KEY_ENTER))
		{
			NETWORK_SHOW_PLAYER_PROFILE_UI(KeyboardSelectedPlayerIndex);
			if(keyboard_close_on_network_selection)
			{
				KeyboardAntiWaitAction = ACTION_COMPLETE_AND_DISABLED;
				return;
			}
		}
	}
	CLEAR_PRINTS();
	ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(false);
	PRINT_STRING_WITH_LITERAL_STRING_NOW("STRING", buffer, 300,true);

}	
#endif
 
//bool keyboard_delete_abandoned_vehicles_only = true; //Has to be global!
void MC_Keyboard(void) //LOOP THIS ALWAYS!
{
	#ifdef Premium
	MC_Keyboard_Network_Anti_Wait_Loop();
	#endif
	#ifdef VERSION_PC
		if(NETWORK_IS_PLAYER_TYPING(iPlayer)) return;
	#endif
    /*
    //Controls
    //HOLD W: (Weather)
    //Press:
    //S for Sunny
    //T for thunder
    //D for drizzle
    //C for cloudy
    //M for Misty
    //B for breeze (windy)
    //E for extra sunny
    //F for Freeze weather toggle
    /////
    //HOLD T: (Time)
    //Press:
    //M for morning
    //D for day
    //N for night
    //E for evening
    //A for afternoon
	//C for cycle time 
    //F for freeze time toggle
    /////
    //Hold V: (Vehicle)
    //Press:
    //F to flip
    //S to shuffle seats (also works on bikes)
    //R to repair
    //D to delete
    //C for clone
    //E to eject yourself
    //L to toggle door locks
    //K to kick out passengers (respawns your car)
	//I to set invincible
    /////
    //Hold D: (Delete)
    //Press:
    //P for peds
    //O for objects
    //V for vehicles (basically every type of vehicle)
    //C for cars
    //M for motorbikes
    //B for boats
    //H for helicopters
    //A for abandoned vehicles only toggle
    /////
    //Hold P: (Player)
    //Press:
    //G for god mode toggle
    //A for auto-aim toggle 
    //I for infinite ammo toggle
    //W for give weapons 
    //V for Visibility toggle
    //F for forcefield toggle
    //N for never wanted toggle
    //J for super jump toggle
    //R for super run toggle
    //K for Kill
    //D for Detach
	//E for Explosion (premium only)
    /////
	//Hold N: (Network) (premium only)
	//Press:
	//S for Spy (Player selection)
	//M for mute (Player selection)
	//K for kick (Player selection)
	//P for profile 
	//C for Close on player selection toggle
    ////////////////
     
    */
    //register int i;
	int i;
    //W (weather)
    if(IS_GAME_KEYBOARD_KEY_PRESSED(KEY_W)) //Weather options
    {
        int weathers[8];
            weathers[0] = WEATHER_SUNNY;
            weathers[1] = WEATHER_LIGHTNING;
            weathers[2] = WEATHER_RAINING;
            weathers[3] = WEATHER_DRIZZLE;
            weathers[4] = WEATHER_CLOUDY;
            weathers[5] = WEATHER_FOGGY;
            weathers[6] = WEATHER_SUNNY_WINDY;
            weathers[7] = WEATHER_EXTRA_SUNNY;
        int keys[9];
            keys[0] = KEY_S; //weather sunny
            keys[1] = KEY_T; //weather thunder
            keys[2] = KEY_R; //weather raining
            keys[3] = KEY_D; //weather drizzle
            keys[4] = KEY_C; //weather cloudy
            keys[5] = KEY_M; //weather misty (foggy)
            keys[6] = KEY_B; //weather breeze (windy)
            keys[7] = KEY_E; //weather extra_sunny
            keys[8] = KEY_F; //freeze weather
		char* messages[9];
			  messages[0] = "sunny.";
			  messages[1] = "thunder.";
			  messages[2] = "raining.";
			  messages[3] = "drizzle.";
			  messages[4] = "cloudy.";
			  messages[5] = "misty/foggy.";
			  messages[6] = "breezy/windy";
			  messages[7] = "extra sunny";
			  messages[8] = (GetByteInSet(WeatherTimeAutoLockByteSet, FREEZE_WEATHER) == 50 ? "un-freeze." : "freeze.");
        for(i = 0; i < 9; i++)
        {
            if(!IS_GAME_KEYBOARD_KEY_JUST_PRESSED(keys[i])) continue;
             
                if(i >= 0 && i < 8)
                {
					MD_SET_WEATHER(weathers[i]);
                }
                else if(i == 8)
                {
					if(GetByteInSet(WeatherTimeAutoLockByteSet, FREEZE_WEATHER) == 50)
					{
						int weatha;
						GET_CURRENT_WEATHER(&weatha);
						SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_WEATHER, weatha);
					}
					else
					{
						SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_WEATHER, 50);
					}
                }
                Alert_Two("~b~MD: ~s~Weather command accepted",messages[i],false);
                break;
                //If using freeze weather set freeze weather here to weathers[i]
             
        }
        //Can make admin commands to force time and weather!
    }
    else if(IS_GAME_KEYBOARD_KEY_PRESSED(KEY_T)) //Time options //this is host only unless you enable freeze time! (could implement admin commands to force weather/time also)
    {
        //time
        int keys[7];
            keys[0] = KEY_M; //time morning
            keys[1] = KEY_D; //time day
            keys[2] = KEY_N; //time night
            keys[3] = KEY_E; //time evening
            keys[4] = KEY_A; //afternoon
            keys[5] = KEY_F; //freeze time
			keys[6] = KEY_C; //Cycle time
        int times[5];
            times[0] = 9; //9AM (morning)
            times[1] = 12; //12 //day
            times[2] = 24; //2400, midnight
            times[3] = 18; //6PM //evening
            times[4] = 15; //3PM Afternoon
		char* messages[7];
			  messages[0] = "morning.";
			  messages[1] = "day.";
			  messages[2] = "midnight.";
			  messages[3] = "evening.";
			  messages[4] = "afternoon.";
			  messages[5] = (GetByteInSet(WeatherTimeAutoLockByteSet, FREEZE_TIME_HOUR) == 25 ? "un-freeze." : "freeze."); //Pretty sure these should be flipped as it's before process!
			  messages[6] = (GetBit(MD_Misc_OptionsBitSet, MD_MISC_TIME_CYCLE) ? "time cycle off." : "time cycle on."); //flipped!
        for(i = 0; i < 7; i++)
        {
            if(!IS_GAME_KEYBOARD_KEY_JUST_PRESSED(keys[i])) continue;
            
                if( i < 5 )
                {
                    SET_TIME_OF_DAY(times[i],00);
					if(GetByteInSet(WeatherTimeAutoLockByteSet, FREEZE_TIME_HOUR) != 25)
					{
						SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_HOUR, times[i]);
					}
                }
                else if(i == 5)
                {
					if(GetByteInSet(WeatherTimeAutoLockByteSet, FREEZE_TIME_HOUR) == 25)
					{
						int houa, minuta;
						GET_TIME_OF_DAY(&houa,&minuta);
						SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_HOUR, houa);
						SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_MINUTE, minuta);
					}
					else
					{
						SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_HOUR, 25);
						SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_MINUTE, 0);
					}
                }
				else if(i == 6)
				{
					ToggleBit(MD_Misc_OptionsBitSet, MD_MISC_TIME_CYCLE);
				}
                Alert_Two("~b~MD: ~s~Time command accepted",messages[i],false);
                break;
        }
         
    }
    else if(IS_GAME_KEYBOARD_KEY_PRESSED(KEY_V)) //Vehicle options
    {
        int tmp_veh,nvid,driver;
        if(IS_CHAR_IN_ANY_CAR(pPlayer))
        {
            GET_CAR_CHAR_IS_USING(pPlayer,&tmp_veh);
            GET_DRIVER_OF_CAR(tmp_veh,&driver);
            GET_NETWORK_ID_FROM_VEHICLE(tmp_veh,&nvid);
                int keys[9];
                    keys[0] = KEY_F; //Flip vehicle
                    keys[1] = KEY_S; //shuffle seats
                    keys[2] = KEY_R; //repair vehicle
                    keys[3] = KEY_C; //Clone Vehicle //use KEY_C (clone) and KEY_D for Delete
                    keys[4] = KEY_E; //Eject from vehicle
                    keys[5] = KEY_L; //Lock vehicle
                    keys[6] = KEY_K; //kick out passengers
                    keys[7] = KEY_D; //Delete vehicle
					keys[8] = KEY_I; //Invincibility
                    char* second_string = "";
                for(i = 0; i < 8; i++)
                {
                    if(!IS_GAME_KEYBOARD_KEY_JUST_PRESSED(keys[i])) continue;
                     
					if( (i == 0 || i == 2 || i == 5 || i == 8 || i == 6 || i == 7 ) && (driver != pPlayer)) //works always and avoids fcar protection net id glitch
                    {
                        if(!network_control(nvid)) continue;
                    }
                    float x,y,z,h;
                    GET_CHAR_COORDINATES(pPlayer,&x,&y,&z);
                    GET_CHAR_HEADING(pPlayer,&h);
                     
                    if(i == 0) //KEY_F (flip)
                    {
                        SET_CAR_ON_GROUND_PROPERLY(tmp_veh);
                        second_string = "flip vehicle.";
                    }
                    else if(i == 1) //KEY_S (shuffle seats)
                    {
                        Shuffle_Vehicle_Seat();
                        second_string = "shuffle seats.";
                    }
                    else if(i == 2) //KEY_R //repair
                    {
                        FIX_CAR(tmp_veh);
                        SET_VEHICLE_DIRT_LEVEL(tmp_veh,0.0);
                        second_string = "repair vehicle.";
                    }
                    else if(i == 3) //KEY_C //clone vehicle
                    {
                        int rand,tmp;
                        GET_CAR_HEADING(tmp_veh,&h);
                        GENERATE_RANDOM_INT_IN_RANGE(0,1,&rand);
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS(tmp_veh,(rand == 1 ? +3 : -3),0,0,&x,&y,&z);
                        Clone_Car(tmp_veh,x,y,z,h,&tmp);
                        OPEN_CAR_DOOR(tmp,(rand == 1 ? 0 : 1)); //if spawned on right, open drivers door, if spawned on left, open passenger door
                        second_string = "clone vehicle.";
                    }
                    else if(i == 4) //KEY_E //Eject from vehicle
                    {
                        REMOVE_CHAR_FROM_CAR_MAINTAIN_POSITION(pPlayer,tmp_veh); //TEST THIS! - Nathan  --> this works!
                        second_string = "eject from vehicle.";
                    }
                    else if(i == 5) //KEY_L //Lock vehicle
                    {
                        int lock;
                        GET_CAR_DOOR_LOCK_STATUS(tmp_veh,&lock);
                        LOCK_CAR_DOORS(tmp_veh, ( (lock == VEHICLE_DOOR_UNLOCKED) ? VEHICLE_DOOR_LOCKED_BOTH_SIDES : VEHICLE_DOOR_UNLOCKED) );
                        second_string = (lock == VEHICLE_DOOR_UNLOCKED ? "doors locked." : "doors unlocked.");
                    }
                    else if(i == 6) //KEY_K //kick out passengers
                    {
						#ifdef Premium
							int tmp;
							float speed;
							GET_CAR_SPEED(tmp_veh,&speed);
							Clone_Car(tmp_veh,x,y,z,h,&tmp);
							DELETE_CAR(&tmp_veh);
							WARP_CHAR_INTO_CAR(pPlayer,tmp);
							SET_CAR_FORWARD_SPEED(tmp,speed);
							second_string = "eject passengers.";
						#else
							Alert(PREMIUM_ONLY_STRING,true);
							return;
						#endif
						
                    }
                    else if(i == 7) //KEY_D //delete vehicle
                    {
                        DELETE_CAR(&tmp_veh);
                        second_string = "delete vehicle.";
                    }
					else if(i == 8)
					{
						SET_CAR_CAN_BE_DAMAGED(tmp_veh,false);
						SET_CAR_CAN_BE_VISIBLY_DAMAGED(tmp_veh,false);
						SET_CAN_BURST_CAR_TYRES(tmp_veh,false);
						SET_CAR_PROOFS(tmp_veh,true,true,true,true,true);
						second_string = "set invincible.";
					}
                     
                    Alert_Two("~b~MD: ~s~Vehicle command accepted",second_string,false); 
                    break;
                }
        }   
    }
    else if(IS_GAME_KEYBOARD_KEY_PRESSED(KEY_D)) //Delete options
    {
        int keys[8];
            keys[0] = KEY_P; //Peds
            keys[1] = KEY_O; //Objects
            keys[2] = KEY_V; //Vehicles //KEY_A for abandoned mode toggle
            keys[3] = KEY_C; //Cars
            keys[4] = KEY_M; //MotorBikes
            keys[5] = KEY_B; //Boats
            keys[6] = KEY_H; //Helicopters
            keys[7] = KEY_A; //Abandoned vehicles only toggle
		char deletes[7];
              deletes[0] = 0;
              deletes[1] = 1;
              deletes[2] = (keyboard_delete_abandoned_vehicles_only ? 3 : 2);
              deletes[3] = (keyboard_delete_abandoned_vehicles_only ? 5 : 4);
              deletes[4] = (keyboard_delete_abandoned_vehicles_only ? 7 : 6);
              deletes[5] = (keyboard_delete_abandoned_vehicles_only ? 9 : 8);
              deletes[6] = (keyboard_delete_abandoned_vehicles_only ? 11 : 10);
        for(i = 0; i < 8; i++)
        {
            if(!IS_GAME_KEYBOARD_KEY_JUST_PRESSED(keys[i])) continue;
            if(i == 7)
            {
                keyboard_delete_abandoned_vehicles_only = !keyboard_delete_abandoned_vehicles_only;
                Alert_Two("~b~MD: ~s~Keyboard's vehicle delete mode",(keyboard_delete_abandoned_vehicles_only ? "abandoned only." : "all."),false);
                break;
            }
            Universal_Delete(325,deletes[i],true); 
            break;
        }
    }
    else if(IS_GAME_KEYBOARD_KEY_PRESSED(KEY_P)) //Player options
    {
        int keys[12];
            keys[0] = KEY_G; //God mode toggle
            keys[1] = KEY_I; //Infinite ammo toggle
            keys[2] = KEY_W; //Give weapons (must make function give_weapons(ped, episode))
            keys[3] = KEY_K; //Kill self
            keys[4] = KEY_N; //Never wanted
            keys[5] = KEY_F; //Forcefield
            keys[6] = KEY_V; //Visibility
            keys[7] = KEY_J; //Super jump
            keys[8] = KEY_R; //Super run
			keys[9] = KEY_A; //Auto-aim
			keys[10] = KEY_D; //Detach
			keys[11] = KEY_E; //Explosion (premium only)
            //keys[] = KEY_P; //Super punch (also known as super powers)
            char* second_string = "";
        for(i = 0; i < 12; i ++)
        {
            if(!IS_GAME_KEYBOARD_KEY_JUST_PRESSED(keys[i])) continue;
             
            if(i == 0) //God mode toggle
            {
                ToggleBit(pPlayerOptionsBitSet, PLAYER_OPTION_GODMODE);
                second_string = (GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_GODMODE) ? "god mode on." : "god mode off.");
            }
            else if(i == 1)
            {
                ToggleBit(pPlayerOptionsBitSet, PLAYER_OPTION_INFINITE_AMMO);
                second_string = (GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_INFINITE_AMMO) ? "infinite ammo on." : "infinite ammo off.");
            }
            else if(i == 2)
            {
                GIVE_EPISODIC_WEAPONS_TO_CHAR(pPlayer,Episode);
                second_string = "give weapons.";
            }
            else if(i == 3)
            {
                SET_CHAR_HEALTH(pPlayer,-1);
                second_string = "kill.";
            }
            else if(i == 4)
            {
                ToggleBit(pPlayerOptionsBitSet, PLAYER_OPTION_NEVER_WANTED);
                second_string = (GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_NEVER_WANTED) ? "never wanted on." : "never wanted off.");
            }
            else if(i == 5)
            {
                ToggleBit(pPlayerOptionsBitSet, PLAYER_OPTION_FORCE_FIELD);
                second_string = (GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_FORCE_FIELD) ? "force field on." : "force field off.");
            }
            else if(i == 6)
            {
                SET_CHAR_VISIBLE(pPlayer,!IS_CHAR_VISIBLE(pPlayer));
                second_string = (IS_CHAR_VISIBLE(pPlayer) ? "invisibility off." : "invisibility on.");
            }
            else if(i == 7)
            {
                ToggleBit(pPlayerOptionsBitSet, PLAYER_OPTION_SUPER_JUMP);
                second_string = (GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_SUPER_JUMP) ? "super jump on." : "super jump off.");
            }
            else if(i == 8)
            {
                ToggleBit(pPlayerOptionsBitSet, PLAYER_OPTION_SUPER_RUN);
                second_string = (GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_SUPER_RUN) ? "super run on." : "super run off.");
            }
			else if(i == 9)
			{
				ToggleBit(pPlayerOptionsBitSet, PLAYER_OPTION_INFINITE_AMMO);
				second_string = (GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_INFINITE_AMMO) ? "auto-aim on." : "auto-aim off.");
			}
			else if(i == 10)
			{
				Detach_pPlayer();
				second_string = "detached.";
			}
			else if(i == 11) //explosion
			{
				#ifdef Premium
					float x,y,z;
					GET_CHAR_COORDINATES(pPlayer, &x, &y, &z);
					ADD_EXPLOSION(x, y, z, EXPLOSION_SHIP_DESTROY, 10.0, true, false, 0.7f);
					second_string = "explosion.";
				#else
					Alert(PREMIUM_ONLY_STRING,true);
					return;
				#endif
			}
            Alert_Two("~b~MD: ~s~Player command accepted",second_string,false);
            break;
        }
         
    }
	else if(IS_GAME_KEYBOARD_KEY_PRESSED(KEY_N)) //Network Options
	{
		#ifdef Premium
			int keys[5];
				keys[0] = KEY_S; //Spy on player
				keys[1] = KEY_M; //Mute player
				keys[2] = KEY_K; //kick player
				keys[3] = KEY_C; //Close on network player selection toggle
				keys[4] = KEY_P; //Open profile of player
		//no second string needed here as loop handles it..
			for(i = 0; i < 5; i++)
			{
				if(!IS_GAME_KEYBOARD_KEY_JUST_PRESSED(keys[i])) continue;
			
				if(i == 0)
				{
					KeyboardAntiWaitAction = ACTION_NETWORK_SPY_PLAYER;
					return; //YES THIS IS SUPPOSED TO BE HERE! INPUT IS NOW LISTENED FOR BY THE OTHER FUNCTION
				}
				else if(i == 1)
				{
					KeyboardAntiWaitAction = ACTION_NETWORK_MUTE_PLAYER;
					return;
				}
				else if(i == 2)
				{
					if(IS_THIS_MACHINE_THE_SERVER())
					{
						KeyboardAntiWaitAction = ACTION_NETWORK_KICK_PLAYER;
						return;
					}
					else
					{
						Alert("~b~MD: ~s~You are not host.",false);
					}
				}
				else if(i == 3)
				{
					keyboard_close_on_network_selection = !keyboard_close_on_network_selection;
					if(KeyboardAntiWaitAction == ACTION_COMPLETE_AND_DISABLED)
					{
						Alert( keyboard_close_on_network_selection ? "~b~MD: ~s~Keyboard menu will now close on player selection." : "~b~MD: ~s~Keyboard menu will now stay open on player selection.",false);
					}
				}
				else if(i == 4)
				{
					KeyboardAntiWaitAction = ACTION_NETWORK_VIEW_PLAYER_PROFILE;
					return;
				}
			}
		#else
			Alert(PREMIUM_ONLY_STRING,true);
			return;
		#endif
	}
     
}


/* Invite stuff for future reference (Devil wants invites done through menu I think) - Nathan
 
extern boolean NETWORK_CHECK_INVITE_ARRIVAL(void);
extern boolean NETWORK_HAVE_ACCEPTED_INVITE(void);
extern boolean NETWORK_IS_INVITEE_ONLINE(void);
extern void NETWORK_CLEAR_INVITE_ARRIVAL(void);
extern void NETWORK_INVITE_FRIEND(char *friendname, char *ukn);//NETWORK_INVITE_FRIEND(NETWORK_GET_FRIEND_NAME(I), "");
 
NETWORK_GET_NUM_UNACCEPTED_INVITES(void);
extern int NETWORK_GET_UNACCEPTED_INVITE_EPISODE(int invite_id);
extern int NETWORK_GET_UNACCEPTED_INVITE_GAME_MODE(int invite_id);
*/

//GAME MODES v
/* 
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