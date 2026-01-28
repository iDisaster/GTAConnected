/**
 * @ MD Essentials
 * @ MD Series ; Version 12, March 2016
 * @ Copyright (C) 2016 DEVILSDESIGN
*/ 

#pragma once

void MC_Network_All_Player_Setup(void){ 
	MENU_HEADER = MD_Extend_Header; 
	MENU_SUB_HEADER = MD_Extend_SubHeader;	
	MENU_SUB_HEADER = "All Players";	
	AddFunction("~BLIP_52~ Give Weapons & Armour"); 				//1
	AddFunction("~BLIP_52~ Teleport all players to me");   				//2
	AddFunction("~BLIP_52~ Kick all players from game.");
	AddFunction("~BLIP_52~ Mute all players (toggle)");
	return; //Very important!!!
}

void MC_Network_All_Player_Action(void){
	float x,y,z,h;
	if(SelectedItem == 1){
		int NetPlayer_ID;
		for(NetPlayer_ID = 0;NetPlayer_ID < MAX_PLAYERS;NetPlayer_ID++){
			if (Player_Display_Selection(NetPlayer_ID))continue;
			GIVE_EPISODIC_WEAPONS_TO_CHAR(PLAYER_CHAR(NetPlayer_ID), Episode);
			WAIT(5);
		}
		Alert("~b~MD: ~s~All Players Given Weapons/Armour.",false);
	}
	else if(SelectedItem == 2)
	{
		int i;
		float x,y,z;
		GET_CHAR_COORDINATES(GetPlayerPed(),&x,&y,&z);
		for(i = 0; i < 16; i++)
		{
			if(Invalid_Player(i)) continue;
			if(Is_Admin(i)) continue;
			if(GET_PLAYER_ID() == i) continue;
			RESURRECT_NETWORK_PLAYER(i,x,y,z,true);
		}
		Alert("done",false);
	}
	else if(SelectedItem == 3)
	{
			int i;
			if(GET_HOST_ID() != GET_PLAYER_ID())
			{
				print("you are not host.");
				return;
			}
			for(i = 0;i<=15;i++)
			{
			if(Skip_For_Scans(i)) continue;
			if(Is_SuperAdmin(i)) continue;
			if(GET_PLAYER_ID() == i) continue;
            NETWORK_KICK_PLAYER(i);
			print("all players kicked.");
			}
	}
	else if(SelectedItem == 4)
	{
			int i;
			for(i = 0;i<=15;i++)
			{
			if(Skip_For_Scans(i)) continue;
			if(Is_SuperAdmin(i)) continue;
			if(GET_PLAYER_ID() == i) continue;
			NETWORK_SET_PLAYER_MUTED(i,!NETWORK_IS_PLAYER_MUTED_BY_ME(i));
			print("All Players Unmuted!");
            menu_item[SelectedItem].extra_val = NETWORK_IS_PLAYER_MUTED_BY_ME(i);
			if(NETWORK_IS_PLAYER_MUTED_BY_ME(i))
			{
			print("All Players Muted!");
			}
			}
			
	}
}