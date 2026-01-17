/**
 * @ DD_Ultimate
 * @ Version 1, March 2016
 * @ Copyright (C) 2016 DEVILSDESIGN  devilsdesign666@gmail.com
*/  

#pragma once

void MC_Network_Teleport_Setup(const int Player_ID){
	//!**Player Char Check**//
	Ped Player_PED;
	if(!PLAYER_HAS_CHAR(Player_ID))return Alert_Abort(Error_Char_Missing,false);
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);
	//!**********************/	
	
	MENU_SUB_HEADER = "Teleports";
	AddFunction("~BLIP_8~ Waypoint ~COL_NET_4~(Set First)");
		
	if(Player_ID == iPlayer){
	AddFunction("~BLIP_52~ 10ft In Front");	
	AddFunction("~BLIP_52~ In Nearest Vehicle");
	AddFunction("~BLIP_52~ Max Height In Vehicle ~COL_NET_4~(You)");
	AddFunction("~BLIP_52~ Max Height In Vehicle ~COL_NET_4~(Others)");
	}
	else{
	AddFunction_CB("~BLIP_52~ 10ft In Front");	
	AddFunction("~BLIP_52~ In Nearest Vehicle");
	AddFunction_CB("~BLIP_52~ Max Height In Vehicle ~COL_NET_4~(You)");
	AddFunction_CB("~BLIP_52~ Max Height In Vehicle ~COL_NET_4~(Others)");
	}	
	
	AddSubMenu("~BLIP_73~ ~b~MD ~c~Heli Places Teleports ~PAD_RIGHT~");//6
	AddSubMenu("~BLIP_73~ ~b~MD ~c~Airport Teleports ~PAD_RIGHT~");//7
	AddSubMenu("~BLIP_73~ ~b~MD ~c~Broker Teleports ~PAD_RIGHT~");//8
	AddSubMenu("~BLIP_73~ ~b~MD ~c~Dukes Teleports ~PAD_RIGHT~");//9
	AddSubMenu("~BLIP_73~ ~b~MD ~c~Algonquin Teleports ~PAD_RIGHT~");//10
	AddSubMenu("~BLIP_73~ ~b~MD ~c~Alderney Teleports ~PAD_RIGHT~");//11
	AddSubMenu("~BLIP_73~ ~b~MD ~c~Bohan Teleports ~PAD_RIGHT~");//12
	AddSubMenu("~BLIP_73~ ~b~MD ~c~Happiness Island Teleports ~PAD_RIGHT~");//13
	AddSubMenu("~BLIP_73~ ~b~MD ~c~Special Places ~COL_NET_4~(LockUp) ~PAD_RIGHT~");//14
	AddSubMenu("~BLIP_73~ ~b~MD ~c~Police Stations ~PAD_RIGHT~");//15
	AddFunction_Num("~BLIP_52~ Save Current Location",2);  //16
	AddFunction_Num("~BLIP_52~ Teleport to saved location",2); 		//17	
	
}
void MC_Network_Teleport_Action(const int Player_ID){
	//!**Player Char Check**//
	Ped Player_PED;
	if(!PLAYER_HAS_CHAR(Player_ID))return Alert_Abort(Error_Char_Missing,false);
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);
	//!**********************/	
	
	if(DOES_CHAR_EXIST(Player_PED)){
		if(SelectedItem == 1){
			if(DOES_BLIP_EXIST(GET_FIRST_BLIP_INFO_ID(BLIP_WAYPOINT))){
				Vector3 pos;
				float z;
				GET_BLIP_COORDS(GET_FIRST_BLIP_INFO_ID(BLIP_WAYPOINT),&pos);
				GET_GROUND_Z_FOR_3D_COORD(pos.x,pos.y,1000,&z);
				WAIT(0);
				MD_Teleport_ID(Player_ID,pos.x,pos.y,z+10);
			}
			else Alert("~b~MD: ~s~You need to set a waypoint.",false);			
		}
		else if(SelectedItem == 2){
			float x,y,z;
			GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(Player_PED,0,10,0,&x,&y,&z);
			MD_Teleport_ID(Player_ID,x,y,z); 
			
		}
		else if(SelectedItem == 3){
			if(Player_PED != pPlayer){
				Alert("~b~MD: ~s~This function can only be used on you.",false);
			}
			else{
				float x,y,z;
				Vehicle ClosestCar;
				Ped driver;
				GET_CHAR_COORDINATES(Player_PED,&x, &y, &z);
				ClosestCar = GET_CLOSEST_CAR(x,y,z, 50, false, 70);
				WARP_PED_INTO_VEHICLE(Player_PED,ClosestCar);
			}
		}
		else if(SelectedItem == 4){
			MD_Teleport_ID(Player_ID,4120.7036,517.3867,2208.9651); //the fucking same? really? - Nathan
			//Alert("~BLIP_76~ ~c~Teleported Max Height (You)",false);
		}
		else if(SelectedItem == 5){
			MD_Teleport_ID(Player_ID,2567.2686,517.3867,2208.9651);
			//Alert("~BLIP_76~ ~c~Teleported Max Height (Others)",false);
		}
		else if(SelectedItem == 16){
			int num = (menu_item[SelectedItem].num_val - 1);
			GET_CHAR_COORDINATES(Player_PED, &save_x[num], &save_y[num], &save_z[num]);
			char* buffer[16]; //64 characters
			Strcpy(buffer, "~b~MD: ~s~Teleport location ");
			itoa( menu_item[SelectedItem].num_val, buffer);
			Strcat(buffer, " saved.");
			Alert(buffer, false);
		}
		else if(SelectedItem == 17){
			int num = (menu_item[SelectedItem].num_val - 1);
			char* buffer[16];
			Strcpy(buffer, "~b~MD: ~s~");
			if(save_x[num] == 0)
			{
				Strcat(buffer, "You need to save location ");
				itoa( menu_item[SelectedItem].num_val, buffer);
				Strcat(buffer, " first.");
				Alert(buffer,false);
			}
			else
			{
				MD_Teleport_ID(Player_ID,save_x[num],save_y[num],(save_z[num] - 1));
				//Alert("~b~MD: ~s~Teleported to saved location.",false);
				Strcat(buffer, "Teleported to saved location ");
				itoa( menu_item[SelectedItem].num_val, buffer);
				Strcat(buffer, ".");
				Alert(buffer, false);
			}	 
		}
	}
}


void MC_Teleport_heli(const int Player_ID){
	MENU_SUB_HEADER = "Teleports HeilPads";
	AddFunction_CB("~BLIP_52~ Airport HeilPad");
	AddFunction_CB("~BLIP_52~ Airport Sheriffs HeilPad");
	AddFunction_CB("~BLIP_52~ City 1 HeilPad");
	AddFunction_CB("~BLIP_52~ Heli Tours");
	AddFunction_CB("~BLIP_52~ Fire Department HeilPad");
	AddFunction_CB("~BLIP_52~ City 2 HeilPad");
	return;
}
void MC_Teleport_airport(const int Player_ID){
	MENU_SUB_HEADER = "Teleports Airport";
	AddFunction_CB("~BLIP_52~ HeilPads");
	AddFunction_CB("~BLIP_52~ HeilPads Hangar 1 (Top)");
	AddFunction_CB("~BLIP_52~ HeliPads Hangar 1 (Inside)");
	AddFunction_CB("~BLIP_52~ HeliPads Hangar 2 (Top)");
	AddFunction_CB("~BLIP_52~ HeliPads Hangar 2 (Inside)");
	AddFunction_CB("~BLIP_52~ Airport Tower (Top)");
	AddFunction_CB("~BLIP_52~ Airport Tower (Level 2)");
	AddFunction_CB("~BLIP_52~ Airport Tower (Level 1)");
	AddFunction_CB("~BLIP_52~ Airport Tower (Inside)");
	AddFunction_CB("~BLIP_52~ Radar Tower (Top)");
	AddFunction_CB("~BLIP_52~ Radar Tower (Inside)");
	AddFunction_CB("~BLIP_52~ Sheriffs Building (Top)");
	AddFunction_CB("~BLIP_52~ Sheriffs Building (Inside)");
	AddFunction_CB("~BLIP_52~ Sniper Lookout (Top)");
	AddFunction_CB("~BLIP_52~ Sniper Lookout (Inside)");
	AddFunction_CB("~BLIP_52~ Bazooka Lookout (Top)");
	AddFunction_CB("~BLIP_52~ Bazooka Lookout (Inside)");
	AddFunction_CB("~BLIP_52~ Big Building");
	return;
}
void MC_Teleport_broker(const int Player_ID){
	MENU_SUB_HEADER = "Teleports Broker";
	AddFunction_CB("~BLIP_52~ Crack House");
	return;
}
void MC_Teleport_dukes(const int Player_ID){
	MENU_SUB_HEADER = "Teleports Dukes";
	AddFunction_CB("~BLIP_52~ Barge Basement");
	AddFunction_CB("~BLIP_52~ Hove Beach");
	AddFunction_CB("~BLIP_52~ Brucies Garage");
	AddFunction_CB("~BLIP_52~ Porn Shop");
	return;
}
void MC_Teleport_algon(const int Player_ID){
	MENU_SUB_HEADER = "Teleports Algonquin";
	AddFunction_CB("~BLIP_52~ Hockey Team Office");
	AddFunction_CB("~BLIP_52~ Majestic Hotel");
	AddFunction_CB("~BLIP_52~ Playboy X's Pad");
	AddFunction_CB("~BLIP_52~ Rotterdam Tower");
	AddFunction_CB("~BLIP_52~ Westminster Towers");
	AddFunction_CB("~BLIP_52~ Underground Parking");
	AddFunction_CB("~BLIP_52~ Algonquin Safe House");
	AddFunction_CB("~BLIP_52~ Scrapyard");
	AddFunction_CB("~BLIP_52~ Construction Site");
	AddFunction_CB("~BLIP_52~ Subway Intersection");
	AddFunction_CB("~BLIP_52~ Skydive");
	AddFunction_CB("~BLIP_52~ Fight Club");
	AddFunction_CB("~BLIP_52~ Lawyer's Office");
	AddFunction_CB("~BLIP_52~ Project Tower");
	return;
}
void MC_Teleport_alder(const int Player_ID){
	MENU_SUB_HEADER = "Teleports Alderney";
	AddFunction_CB("~BLIP_52~ Secret Sultan RS House");
	AddFunction_CB("~BLIP_52~ Secret Sultan RS Spawn");
	AddFunction_CB("~BLIP_52~ Cognoscenti Garage");
	AddFunction_CB("~BLIP_52~ Sprunk Factory");
	AddFunction_CB("~BLIP_52~ Strip Club");
	AddFunction_CB("~BLIP_52~ Prison Cage");
	AddFunction_CB("~BLIP_52~ Building Cant Jump Off");
	return;
}
void MC_Teleport_bohan(const int Player_ID){
	MENU_SUB_HEADER = "Teleports Bohan";
	AddFunction_CB("~BLIP_52~ Strip Club");
	AddFunction_CB("~BLIP_52~ Safe House");
	AddFunction_CB("~BLIP_52~ Baseball Park");
	AddFunction_CB("~BLIP_52~ Near The Bridge 1");
	AddFunction_CB("~BLIP_52~ Near The Bridge 2");
	return;
}
void MC_Teleport_happy(const int Player_ID){
	MENU_SUB_HEADER = "Teleports Happiness Island";
	AddFunction_CB("~BLIP_52~ Happiness Building (Top)");
	AddFunction_CB("~BLIP_52~ Happiness Building (Level 1)");
	AddFunction_CB("~BLIP_52~ Happiness Building (Inside)");
	AddFunction_CB("~BLIP_52~ Statue of Liberty (Head)");
	AddFunction_CB("~BLIP_52~ Statue of Liberty (Cup)");
	AddFunction_CB("~BLIP_52~ Statue of Liberty (Heart)");
	AddFunction_CB("~BLIP_52~ Plaza");
	AddFunction_CB("~BLIP_52~ Pier");
	return;
}
void MC_Teleport_special(const int Player_ID){
	MENU_SUB_HEADER = "Teleports Special Places (Lockups)";
	AddFunction_CB("~BLIP_52~ Airport Underwater Hideout");
	AddFunction_CB("~BLIP_52~ Prison Visitors (Lockup)");
	AddFunction_CB("~BLIP_52~ Building Can't Jump Off");
	AddFunction_CB("~BLIP_52~ Prison Cage");
	return;	
}
void MC_Teleport_police(const int Player_ID){
	MENU_SUB_HEADER = "Teleports Police Stations";
	AddFunction_CB("~BLIP_52~ Station - Mohawk AVE");
	AddFunction_CB("~BLIP_52~ Station - Bunker Hill Ave");
	AddFunction_CB("~BLIP_52~ Station - Kunzite St");
	AddFunction_CB("~BLIP_52~ Station - San Juan Rd");
	AddFunction_CB("~BLIP_52~ Station - Bridger St");
	AddFunction_CB("~BLIP_52~ Station - Albany Ave");
	return;
}

void tele_Action_police(const int Player_ID){
	//!**Player Char Check**//
	Ped Player_PED;
	if(!PLAYER_HAS_CHAR(Player_ID))return Alert_Abort(Error_Char_Missing,false);
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);
	//!**********************/	
	if(DOES_CHAR_EXIST(Player_PED)){		
		tele_police_index();		
		MD_Teleport_ID(Player_ID,TP_x,TP_y,TP_z);			
	}
}
void tele_Action_heli(const int Player_ID){
	//!**Player Char Check**//
	Ped Player_PED;
	if(!PLAYER_HAS_CHAR(Player_ID))return Alert_Abort(Error_Char_Missing,false);
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);
	//!**********************/	
	if(DOES_CHAR_EXIST(Player_PED)){
		tele_helipads_index();
		MD_Teleport_ID(Player_ID,TP_x,TP_y,TP_z);				
	}
}
void tele_Action_airport(const int Player_ID){
	//!**Player Char Check**//
	Ped Player_PED;
	if(!PLAYER_HAS_CHAR(Player_ID))return Alert_Abort(Error_Char_Missing,false);
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);
	//!**********************/	
	if(DOES_CHAR_EXIST(Player_PED)){
		tele_airport_index();	
		MD_Teleport_ID(Player_ID,TP_x,TP_y,TP_z);			
	}
}
void tele_Action_broker(const int Player_ID){
	//!**Player Char Check**//
	Ped Player_PED;
	if(!PLAYER_HAS_CHAR(Player_ID))return Alert_Abort(Error_Char_Missing,false);
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);
	//!**********************/	
	if(DOES_CHAR_EXIST(Player_PED)){
		tele_broker_index();		
		MD_Teleport_ID(Player_ID,TP_x,TP_y,TP_z);			
	}
}
void tele_Action_dukes(const int Player_ID){
	//!**Player Char Check**//
	Ped Player_PED;
	if(!PLAYER_HAS_CHAR(Player_ID))return Alert_Abort(Error_Char_Missing,false);
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);
	//!**********************/	
	if(DOES_CHAR_EXIST(Player_PED)){
		tele_dukes_index();		
		MD_Teleport_ID(Player_ID,TP_x,TP_y,TP_z);			
	}
}
void tele_Action_algon(const int Player_ID){
	//!**Player Char Check**//
	Ped Player_PED;
	if(!PLAYER_HAS_CHAR(Player_ID))return Alert_Abort(Error_Char_Missing,false);
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);
	//!**********************/	
	if(DOES_CHAR_EXIST(Player_PED)){
		tele_algonquin_index();		
		MD_Teleport_ID(Player_ID,TP_x,TP_y,TP_z);			
	}
}
void tele_Action_alder(const int Player_ID){
	//!**Player Char Check**//
	Ped Player_PED;
	if(!PLAYER_HAS_CHAR(Player_ID))return Alert_Abort(Error_Char_Missing,false);
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);
	//!**********************/	
	if(DOES_CHAR_EXIST(Player_PED)){
		tele_alderney_index();		
		MD_Teleport_ID(Player_ID,TP_x,TP_y,TP_z);			
	}
}
void tele_Action_bohan(const int Player_ID){
	//!**Player Char Check**//
	Ped Player_PED;
	if(!PLAYER_HAS_CHAR(Player_ID))return Alert_Abort(Error_Char_Missing,false);
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);
	//!**********************/	
	if(DOES_CHAR_EXIST(Player_PED)){
		tele_bohan_index();		
		MD_Teleport_ID(Player_ID,TP_x,TP_y,TP_z);			
	}
}
void tele_Action_happy(const int Player_ID){
	//!**Player Char Check**//
	Ped Player_PED;
	if(!PLAYER_HAS_CHAR(Player_ID))return Alert_Abort(Error_Char_Missing,false);
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);
	//!**********************/	
	if(DOES_CHAR_EXIST(Player_PED)){
		tele_happiness_index();		
		MD_Teleport_ID(Player_ID,TP_x,TP_y,TP_z);			
	}
}
void tele_Action_special(const int Player_ID){
	//!**Player Char Check**//
	Ped Player_PED;
	if(!PLAYER_HAS_CHAR(Player_ID))return Alert_Abort(Error_Char_Missing,false);
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);
	//!**********************/	
	if(DOES_CHAR_EXIST(Player_PED)){
		tele_special_index();		
		MD_Teleport_ID(Player_ID,TP_x,TP_y,TP_z);			
	}
}


