/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV NATHAN VII
 */

#pragma once

void MC_Net_Unfriendly_Setup(void){
	MENU_SUB_HEADER = "Unfriendly Options";
	//AddFunction_Value_CB("Ram Player",7); 	//16  // Patriot / Exploding Patriot / Annihilator / Exploding Annihilator / Your Vehicle / Closest Player Vehicle / All Player Vehicles
	AddFunction_CB("~BLIP_52~ Ram Player With Exploding Patriot");		//1
	AddFunction_CB("~BLIP_52~ Ram Player With Your Vehicle"); 			//2
	AddFunction_CB("~BLIP_73~ Glitch Player In Black Box");	            //3
	AddFunction_CB("~BLIP_52~ Chronicle Player");					    //4
	AddBool_CB("~BLIP_52~ Freeze Players Vehicle Position",GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_FREEZE_POS)); //5
	AddFunction_CB("~BLIP_52~ DeSolidify Players Vehicle ");			//6
	AddBool_CB("~BLIP_68~ Restrict Fire-Power",GetBit(restrictWeaponsBitSet, players[ChangeNetPlayer].id));   //7
	AddBool_CB("~BLIP_68~ Auto-Delete Vehicle", GetBit(autoDeleteVehicleBitSet, players[ChangeNetPlayer].id));//8
	AddBool_CB("~BLIP_68~ Auto-Burn", GetBit(autoBurnBitSet, players[ChangeNetPlayer].id));                   //9
	AddFunction_CB("Teleport To Kill-Zone");    //10
	AddFunction_CB("Give Rocket (Freeze Gun)"); //11
	AddFunction_CB("Group Hack (Freeze)");      //12
	AddFunction_CB("Player Model (Niko Freeze)");//13
	AddBool_CB("~BLIP_68~ Constant Boom (Explosion Lag)", GetBit(constantBoomBitSet, players[ChangeNetPlayer].id));//14
	AddFunction_CB("Blackscreen (freeze)");     //15
	AddFunction_Value_CB("Teleportations",5); 	//16
	AddFunction_Value_CB("Freeze Cars",6);		//17
	AddFunction_Value_CB("Object Freeze",5);	//18
	AddFunction_Value_CB("Lag Explosion",3);	//19
	AddFunction_CB("~BLIP_52~ Remove Player Weapons");//20
	AddFunction_CB("~BLIP_52~ Object Fuck Player");//20
}

void MC_Net_Unfriendly_Action(void){

    uint index = ChangeNetPlayer;
    int nvid;
   // int Player_PED;
    Vehicle Net_Vehicle;
    uint Net_Vehicle_ID;
	if(PLAYER_HAS_CHAR(players[ChangeNetPlayer].id)){
		if(SelectedItem == 1){
			if(!Is_Developer(players[index].id) && !Is_Whitelisted(players[index].id)){
			if(IS_MODEL_IN_CDIMAGE(MODEL_POLPATRIOT)){
				REQUEST_MODEL(MODEL_POLPATRIOT);
				float heading;
				float x,y,z;
				GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(PLAYER_CHAR(players[ChangeNetPlayer].id), 0, 25, 0, &x, &y, &z);
				GET_CHAR_HEADING(PLAYER_CHAR(players[ChangeNetPlayer].id), &heading);
			while(!HAS_MODEL_LOADED(MODEL_POLPATRIOT)) WAIT(0);
				CREATE_CAR(MODEL_POLPATRIOT,x,y,z,&Net_Vehicle,true);
				MARK_MODEL_AS_NO_LONGER_NEEDED(MODEL_POLPATRIOT);
				SET_CAR_ON_GROUND_PROPERLY(Net_Vehicle);
				CHANGE_CAR_COLOUR(Net_Vehicle, 30, 30);//majorred
				SET_EXTRA_CAR_COLOURS(Net_Vehicle, 30, 30);
				SET_SIREN_WITH_NO_DRIVER(Net_Vehicle,true);
				SWITCH_CAR_SIREN(Net_Vehicle,true);
				SET_VEHICLE_DIRT_LEVEL(Net_Vehicle, 10);
				WASH_VEHICLE_TEXTURES(Net_Vehicle, 255);
			if(heading > 180.0) heading -= 180.0;
				else heading += 180.0;
				SET_CAR_HEADING(Net_Vehicle, heading);
				FREEZE_CAR_POSITION(Net_Vehicle,false);
				SET_CAR_COLLISION(Net_Vehicle, true);
				SET_CAR_ENGINE_ON(Net_Vehicle,true,true);
				SET_CAR_VISIBLE(Net_Vehicle,true);
				SET_CAR_FORWARD_SPEED(Net_Vehicle,300);
				WAIT(100);
				EXPLODE_CAR(Net_Vehicle, true, false);
				GET_CHAR_COORDINATES(PLAYER_CHAR(players[ChangeNetPlayer].id),&x,&y,&z);
				ADD_EXPLOSION(x, y, z, EXPLOSION_SHIP_DESTROY, 10, true, false, 1);
				Alert_Two("~BLIP_76~ ~c~Exploding Police Patriot Sent To~w~",GET_PLAYER_NAME(players[index].id),false);
				}
				else Alert("~BLIP_76~ ~COL_NET_4~ Error! ~w~Model Is Missing From Your ISO! ~n~Action Could Not Be Performed!",false);
				}
			else Alert_Two("~BLIP_76~ ~COL_NET_4~Action Can Not Be Performed On This Player! ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 2){
		if(!Is_Developer(players[index].id) && !Is_Whitelisted(players[index].id)){
			if(!IS_CHAR_IN_ANY_CAR(pPlayer)){
				if(IS_MODEL_IN_CDIMAGE(MODEL_CAVALCADE)){
					spawn_car(MODEL_CAVALCADE);
				}
				else{
				Alert("~BLIP_76~ ~COL_NET_4~ Error! ~w~Model Is Missing From Your ISO! ~n~Action Could Not Be Performed!",false);
				return;
				}
			}
			float dist = 15.0;
			Vehicle veh;
			uint tick;
			float x,y,z, x1,y1,z1,fx,fy,fz;
			GET_CAR_CHAR_IS_USING(pPlayer,&veh);
			while(dist > 10){
				tick++;
				if(tick >= 100) break;
				GET_CHAR_COORDINATES(PLAYER_CHAR(players[ChangeNetPlayer].id),&x,&y,&z);
				GET_CAR_COORDINATES(veh,&x1,&y1,&z1);
				GET_DISTANCE_BETWEEN_COORDS_3D(x1, y1, z1, x, y, z, &dist);
				fx = (x - x1) / dist * 1200;
				fy = (y - y1) / dist * 1200;
				fz = (z - z1) / dist * 1200;
				APPLY_FORCE_TO_CAR(veh, 1,fx, fy, fz, 0, 0, 0, 1, 0, 1, 1);
				WAIT(0);
			}
			Alert("~BLIP_76~ ~c~Rammed Player With Your Vehicle!",false);
				}
			else Alert_Two("~BLIP_76~ ~COL_NET_4~Action Can Not Be Performed On This Player! ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 3){
			if(!Is_Developer(players[index].id) && !Is_Whitelisted(players[index].id)){
			float x,y,z,h;
			if(!DOES_CHAR_EXIST(PLAYER_CHAR(players[ChangeNetPlayer].id))) return;
			GET_CHAR_HEADING(PLAYER_CHAR(players[ChangeNetPlayer].id),&h);
			int i;
			REQUEST_MODEL(0x69305DBB);
			Object fuckup;
			while(!HAS_MODEL_LOADED(0x69305DBB)) WAIT(0);
			for(i=0;i<=3;i++){
			GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(PLAYER_CHAR(players[ChangeNetPlayer].id),17.3f,30.0f,0.025f,&x,&y,&z);
			GET_CHAR_HEADING(PLAYER_CHAR(players[ChangeNetPlayer].id),&h);
			CREATE_OBJECT_NO_OFFSET(0x69305DBB,x,y,z,&fuckup,true);
			while(!DOES_OBJECT_EXIST(fuckup)) WAIT(0);
			SET_OBJECT_HEADING(fuckup,h+90);
			SET_OBJECT_INVINCIBLE(fuckup,1);
			SET_OBJECT_COLLISION(fuckup,1);
			FREEZE_OBJECT_POSITION(fuckup,1);
			block_net_control_of_object(fuckup);
			}
			MARK_MODEL_AS_NO_LONGER_NEEDED(0x69305DBB);
			Alert_Two("~BLIP_76~ ~c~Caged Player~w~",GET_PLAYER_NAME(players[index].id),false);
			}
			else Alert_Two("~BLIP_76~ ~COL_NET_4~Action Can Not Be Performed On This Player! ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 4){
			if(!Is_Developer(players[index].id) && !Is_Whitelisted(players[index].id)){
				float x,y,z;
				GET_CHAR_COORDINATES(PLAYER_CHAR(players[ChangeNetPlayer].id),&x,&y,&z);
				ADD_EXPLOSION(x, y, z, EXPLOSION_SHIP_DESTROY, 10, false, true, 0);
			}
			else Alert_Two("~BLIP_76~ ~COL_NET_4~Action Can Not Be Performed On This Player! ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 5){
			if(!Is_Developer(players[index].id) && !Is_Whitelisted(players[index].id)){
			ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_FREEZE_POS);
			menu_item[SelectedItem].extra_val = GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_FREEZE_POS);
			GET_CAR_CHAR_IS_USING(PLAYER_CHAR(players[ChangeNetPlayer].id),&Net_Vehicle);
			GET_NETWORK_ID_FROM_VEHICLE(Net_Vehicle,&Net_Vehicle_ID);
				if(GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_FREEZE_POS)){
					if(network_control(Net_Vehicle_ID) && DOES_VEHICLE_EXIST(Net_Vehicle)){
						FREEZE_CAR_POSITION(Net_Vehicle, true);
						SET_NETWORK_ID_CAN_MIGRATE(Net_Vehicle_ID,false);
						Alert_Two("~BLIP_76~ ~c~Vehicle position frozen ~COL_NET_3~ON ~c~For ~w~",GET_PLAYER_NAME(players[index].id),false);
					}
				}
				else{
					if(network_control(Net_Vehicle_ID) && DOES_VEHICLE_EXIST(Net_Vehicle)){
					FREEZE_CAR_POSITION(Net_Vehicle, false);
					Alert_Two("~BLIP_76~ ~c~Vehicle position frozen ~COL_NET_4~OFF ~c~For ~w~",GET_PLAYER_NAME(players[index].id),false);
					}
				}
			}
			else Alert_Two("~BLIP_76~ ~COL_NET_4~Action Can Not Be Performed On This Player! ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 6){
			if(!Is_Developer(players[index].id) && !Is_Whitelisted(players[index].id)){
				if(IS_CHAR_IN_ANY_CAR(PLAYER_CHAR(players[ChangeNetPlayer].id))){
				GET_CAR_CHAR_IS_USING(PLAYER_CHAR(players[ChangeNetPlayer].id),&Net_Vehicle);
					GET_NETWORK_ID_FROM_VEHICLE(Net_Vehicle,&Net_Vehicle_ID);
					if(network_control(Net_Vehicle_ID)){
						SET_NETWORK_ID_CAN_MIGRATE(Net_Vehicle_ID, false);
						SET_CAR_COLLISION(Net_Vehicle, false);
						Alert("~BLIP_76~ ~c~Players Vehicle Is Now Phantom",false);
					}
				}
			}
			else Alert_Two("~BLIP_76~ ~COL_NET_4~Action Can Not Be Performed On This Player! ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 7){
			ToggleBit(restrictWeaponsBitSet, players[ChangeNetPlayer].id);
			menu_item[SelectedItem].extra_val = GetBit(restrictWeaponsBitSet, players[ChangeNetPlayer].id);
		}
		else if(SelectedItem == 8){
			ToggleBit(autoDeleteVehicleBitSet, players[ChangeNetPlayer].id);
			menu_item[SelectedItem].extra_val = GetBit(autoDeleteVehicleBitSet, players[ChangeNetPlayer].id);
		}
		else if(SelectedItem == 9){
			ToggleBit(autoBurnBitSet, players[ChangeNetPlayer].id);
			menu_item[SelectedItem].extra_val = GetBit(autoBurnBitSet, players[ChangeNetPlayer].id);
		}
		else if(SelectedItem == 10){
				//MD_Teleport_ID(players[ChangeNetPlayer].id,3800,1500,-10);
				RESURRECT_NETWORK_PLAYER(players[ChangeNetPlayer].id,4000,4000,-10,0);
				char* buffer[32];
				Strcpy(buffer, "~b~MD: "); //17
				PLAYER_NAME_WITH_COLOUR(players[ChangeNetPlayer].id, &buffer); //33
				Strcat(buffer, " ~s~was teleported to the kill-zone."); //36 = 71
				Alert(buffer, false);
		}
		else if(SelectedItem == 11){
			#ifdef Premium
			if(!Is_Whitelisted(players[ChangeNetPlayer].id) && Is_Premium(iPlayer)) //prints have to go in function if not good already
			{
				if(IS_CHAR_IN_ANY_CAR(PLAYER_CHAR(players[ChangeNetPlayer].id)))
				{
					int tmp_veh,nvid;
					GET_CAR_CHAR_IS_USING(PLAYER_CHAR(players[ChangeNetPlayer].id),&tmp_veh);
					GET_NETWORK_ID_FROM_VEHICLE(tmp_veh,&nvid);
					if(network_control(nvid)) //prints in function
					{
						REMOVE_ALL_CHAR_WEAPONS(PLAYER_CHAR(players[ChangeNetPlayer].id));
						DELETE_CAR(&tmp_veh);
						WAIT(7);
						GIVE_WEAPON_TO_CHAR(PLAYER_CHAR(players[ChangeNetPlayer].id), WEAPON_ROCKET, AMMO_MAX, false);
						char* buffer[16];
						Strcpy(buffer, "~b~MD: "); //7
						PLAYER_NAME_WITH_COLOUR(players[ChangeNetPlayer].id, &buffer);	//33
						Strcat(buffer, " ~s~was given the freeze gun."); //29 + 33 = 62
						Alert(buffer, false);
					}
				}
			}
			#else
			Alert(PREMIUM_ONLY_STRING,true);
			#endif
		}
		else if(SelectedItem == 12){
			#ifdef Premium
			if(!is_driving(pPlayer)){
				Alert("~b~MD: ~s~You must be the driver of a vehicle with free seats.",false);
				return;
			}
			float mx,my,mz,mh;
			GET_CHAR_COORDINATES(pPlayer,&mx,&my,&mz);
			GET_CHAR_HEADING(pPlayer,&mh);
			int localGroup;
			GET_PLAYER_GROUP(iPlayer,&localGroup);
			if(!DOES_GROUP_EXIST(localGroup)){
				CREATE_GROUP(0,localGroup,true);
				SET_GROUP_LEADER(localGroup,pPlayer);
			}
			Teleport_iPlayer_To_PlayerIndex(players[ChangeNetPlayer].id, true);
			char* buffer[36];
			Strcpy(buffer, "~b~MD: ");
			PLAYER_NAME_WITH_COLOUR(players[ChangeNetPlayer].id, &buffer);
			Strcat(buffer, " ~s~was group-hacked.");
			//maybe delete their car too if they're in one to make group hack work better, hmm, we'll see how well this works first
			SET_GROUP_MEMBER(localGroup, PLAYER_CHAR(players[ChangeNetPlayer].id));
			WAIT(500);
			REMOVE_CHAR_FROM_GROUP(PLAYER_CHAR(players[ChangeNetPlayer].id));
			WAIT(500);
			MD_Teleport_ID_Heading(iPlayer,mx,my,mz,mh);
			Alert(buffer, false);
			#else
			Alert(PREMIUM_ONLY_STRING,true);
			#endif
		}
		else if(SelectedItem == 13){
			#ifdef Premium
			if(Is_Premium(iPlayer) && !Is_Whitelisted(players[ChangeNetPlayer].id))
			{
				//change_player
				int model;
				REQUEST_MODEL(MODEL_PLAYER);
				GET_CHAR_MODEL(pPlayer,&model);
				int mycar = Personal_Vehicle;
				float x,y,z,h;
				GET_CHAR_COORDINATES(pPlayer,&x,&y,&z);
				GET_CHAR_HEADING(pPlayer,&h);
				Teleport_iPlayer_To_PlayerIndex(players[ChangeNetPlayer].id,false);
				WAIT(50);
				char* buffer[16];
				Strcpy(buffer, "~b~MD: ");
				PLAYER_NAME_WITH_COLOUR(players[ChangeNetPlayer].id, &buffer); //33
				Strcat(buffer, " ~s~was player-model'd."); //23 + 33 = 56
				float ox,oy,oz;
				GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(PLAYER_CHAR(players[ChangeNetPlayer].id),0,2,0,&ox,&oy,&oz);
				SET_CHAR_COORDINATES(pPlayer,ox,oy,oz);
				change_player(MODEL_PLAYER); //pPlayer updates in function
				WAIT(10);
				if(model == MODEL_PLAYER)
				{
					model = GET_PLAYERSETTINGS_MODEL_CHOICE();
				} //have to change
				change_player(model);
				WAIT(20);
				if(DOES_VEHICLE_EXIST(mycar) && WARP_PED_INTO_VEHICLE(pPlayer,mycar))
				{
					//nothing
				}
				else
				{
					MD_Teleport_ID_Heading(iPlayer,x,y,z,h);
				}
				if(model == GET_PLAYERSETTINGS_MODEL_CHOICE())
				{
					SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE(iPlayer);
					BLOCK_PED_WEAPON_SWITCHING(pPlayer, true);
				}
				Alert(buffer, false);
			}
			#else
			Alert(PREMIUM_ONLY_STRING,true);
			#endif
		}
		else if(SelectedItem == 14){
			ToggleBit(constantBoomBitSet, players[ChangeNetPlayer].id);
			menu_item[SelectedItem].extra_val = GetBit(constantBoomBitSet, players[ChangeNetPlayer].id);
		}
		else if(SelectedItem == 15){
		#ifndef Premium
		Alert("Premium version only!",false);
		return;
		#endif
		#ifndef SuperAdmin
		if(Is_Whitelisted(players[ChangeNetPlayer].id))
		{
			Alert("ERROR: ~COL_NET_4~ Player is Whitelisted.",false);
			return;
		}
		#endif
		char* buffer[16];
		Strcpy(buffer, "~b~MD: "); //7
		PLAYER_NAME_WITH_COLOUR(players[ChangeNetPlayer].id, &buffer); //15 + 11 = 26 + 7 = 33
		Strcat(buffer, " ~s~was blackscreened."); //22 + 33 = 55
		TELL_NET_PLAYER_TO_START_PLAYING(players[ChangeNetPlayer].id, false);
		Alert(buffer, false);
		}
		else if(SelectedItem == 16){
			if(menu_item[SelectedItem].num_val == 1)MD_Teleport_ID(players[ChangeNetPlayer].id,2425.5264,389.2336,5.8487);//TP_x = 2425.5264	, TP_y = 389.2336	, TP_z = 5.8487;//Airport Building
			else if(menu_item[SelectedItem].num_val == 2)MD_Teleport_ID(players[ChangeNetPlayer].id,704.5024,-270.7895,5.1121);//TP_x = 704.5024, TP_y = -270.7895, TP_z = 5.1121;//Barge Basement
			else if(menu_item[SelectedItem].num_val == 3)MD_Teleport_ID(players[ChangeNetPlayer].id,-7.6952,356.7396,-2.9570);//TP_x = -7.6952, TP_y = 356.7396, TP_z = -2.9570;//Subway
			else if(menu_item[SelectedItem].num_val == 4)MD_Teleport_ID(players[ChangeNetPlayer].id,-2072.8728,25.4543,25.4543);//TP_x = -2072.8728, TP_y = 25.4543, TP_z = 96.2373;//Isolate Building
			else if(menu_item[SelectedItem].num_val == 5)MD_Teleport_ID(players[ChangeNetPlayer].id,-605.3948,-749.7060,94.9000);//TP_x = -605.3948, TP_y = -749.7060, TP_z = 94.9000;	Alert("~BLIP_76~ ~c~Teleported to Statue Cup",false);}

		}
		else if(SelectedItem == 17){
			if(menu_item[SelectedItem].num_val == 1){
			MD_VEHICLE_SPAWNER_ON_ID(players[ChangeNetPlayer].id ,MODEL_PATRIOT);
			WAIT(100);
			delete_vehicles(9999,true,"all");
			Alert_Two("~BLIP_76~ ~COL_NET_4~ Freeze-Patriot Given to Player ~n~ ~w~ ",GET_PLAYER_NAME(players[ChangeNetPlayer].id),false);
			}
			else if(menu_item[SelectedItem].num_val == 2){
			MD_VEHICLE_SPAWNER_ON_ID(players[ChangeNetPlayer].id ,MODEL_ROMERO);
			WAIT(100);
			delete_vehicles(9999,true,"all");
			Alert_Two("~BLIP_76~ ~COL_NET_4~ Freeze-Romero Given to Player ~n~ ~w~ ",GET_PLAYER_NAME(players[ChangeNetPlayer].id),false);
			}
			else if(menu_item[SelectedItem].num_val == 3){
			MD_VEHICLE_SPAWNER_ON_ID(players[ChangeNetPlayer].id ,MODEL_LIMO2);
			WAIT(100);
			delete_vehicles(9999,true,"all");
			Alert_Two("~BLIP_76~ ~COL_NET_4~ Freeze-Limo Given to Player ~n~ ~w~ ",GET_PLAYER_NAME(players[ChangeNetPlayer].id),false);
			}
			else if(menu_item[SelectedItem].num_val == 4){
			MD_VEHICLE_SPAWNER_ON_ID(players[ChangeNetPlayer].id ,MODEL_SCHAFTER3);
			WAIT(100);
			delete_vehicles(9999,true,"all");
			Alert_Two("~BLIP_76~ ~COL_NET_4~ Freeze-Shafter 3 Given to Player ~n~ ~w~ ",GET_PLAYER_NAME(players[ChangeNetPlayer].id),false);
			}
			else if(menu_item[SelectedItem].num_val == 5){
			MD_VEHICLE_SPAWNER_ON_ID(players[ChangeNetPlayer].id ,MODEL_SCHAFTER2);
			WAIT(100);
			delete_vehicles(9999,true,"all");
			Alert_Two("~BLIP_76~ ~COL_NET_4~ Freeze-Shafter 2 Given to Player ~n~ ~w~ ",GET_PLAYER_NAME(players[ChangeNetPlayer].id),false);
			}
			else if(menu_item[SelectedItem].num_val == 6){
			MD_VEHICLE_SPAWNER_ON_ID(players[ChangeNetPlayer].id,MODEL_SCHAFTER2);
			WAIT(100);
			MD_VEHICLE_SPAWNER_ON_ID(players[ChangeNetPlayer].id,MODEL_SCHAFTER3);
			WAIT(100);
			MD_VEHICLE_SPAWNER_ON_ID(players[ChangeNetPlayer].id,MODEL_LIMO2);
			WAIT(100);
			MD_VEHICLE_SPAWNER_ON_ID(players[ChangeNetPlayer].id,MODEL_ROMERO);
			WAIT(100);
			MD_VEHICLE_SPAWNER_ON_ID(players[ChangeNetPlayer].id,MODEL_PATRIOT);
			WAIT(100);
			delete_vehicles(9999,true,"all");
			Alert_Two("~BLIP_76~ ~COL_NET_4~ Freeze Mix (All) Given to Player ~n~ ~w~ ",GET_PLAYER_NAME(players[ChangeNetPlayer].id),false);
			}
		}
		else if(SelectedItem == 18)
		{

		}
		else if(SelectedItem == 19)
		{

		}
		else if(SelectedItem == 20){
			if(DOES_CHAR_EXIST(PLAYER_CHAR(players[ChangeNetPlayer].id))){
				if(!Is_Developer(players[ChangeNetPlayer].id) && !Is_Whitelisted(players[ChangeNetPlayer].id)){
				REMOVE_ALL_CHAR_WEAPONS(PLAYER_CHAR(players[ChangeNetPlayer].id));
				WAIT(20);
				Alert_Two("~BLIP_76~ ~COL_NET_4~Disarmed Player~w~",GET_PLAYER_NAME(players[ChangeNetPlayer].id),false);
				}
			else Alert_Two("~BLIP_76~ ~COL_NET_4~Action Can Not Be Performed On This Player! ~n~ ~w~",GET_PLAYER_NAME(players[ChangeNetPlayer].id),false);
			}
		}
		else if(SelectedItem == 21)
		{
        if(!PLAYER_HAS_CHAR(players[ChangeNetPlayer].id))return;
		Ped NetPed;
		GET_PLAYER_CHAR(players[ChangeNetPlayer].id,&NetPed);
		Vehicle NetVehicle;
        Object Dart[7];
        Dart[0] = 0xF1388248;
        Dart[1] = 0xDF085DE8;
        Dart[2] = 0xA7DF6F93;
        Dart[3] = 0x5CC5D961;
        Dart[4] = 0x4A8EB4F3;
        Dart[5] = 0x2601EBDA;
        Dart[6] = 0x37E38F9D;
        int DartID[7];
        Object DartObj[7];
        Vehicle veh;
        bool inveh;
        int i;
        for(i = 0; i <= 6; i++)
        {
            if(!LoadModel(Dart[i]))continue;
            CREATE_OBJECT(Dart[i],0,0,0,&DartObj[i],true);
            if(!DOES_OBJECT_EXIST(DartObj[i]))
            {
                print("~r~Object Doesn't Exist, Continuing To Next...");
                continue;
            }
            GET_NETWORK_ID_FROM_OBJECT(Dart[i],&DartID[i]);
            REQUEST_CONTROL_OF_NETWORK_ID(DartID[i]);
            SET_OBJECT_VISIBLE(DartObj[i],false);
			if(!IS_CHAR_IN_ANY_CAR(NetPed))
			{
				print("~b~Attaching Object To Ped Physically...");
				WAIT(35);
				ATTACH_OBJECT_TO_PED_PHYSICALLY(DartObj[i],NetPed,false,0,0.0,0.0,0.0,0.0,0.0,0.0,false,false);
			}
			else
			{
				GET_CAR_CHAR_IS_USING(NetPed,&NetVehicle);
				ATTACH_OBJECT_TO_CAR_PHYSICALLY(DartObj[i],NetVehicle,0,0,0.0,0.0,0.0,0.0,false,false);
				print("~b~Attaching Object to Vehicle Physically");
			}
        }
		}
	}
	else{
		if(SelectedItem > 0)
		{
			Alert(Error_Char_Missing,false);
		}
	}
	return;
}
