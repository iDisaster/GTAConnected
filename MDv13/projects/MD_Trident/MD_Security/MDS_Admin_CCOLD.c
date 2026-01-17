/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv10
 * @ MADE BY - DEVILSDESIGN & SHoCKxWAVE & IIV_NATHAN_VII //Stop Typing Everything Like This In The Prints! It's an eyesaw! - Nathan
 */ //jusT likE iF i typeD everythinG likE thiS...
 
 //!ADMIN CONTROLS SETUP & FUNCTIONS
 #pragma once
  
   // this code will not be compiled in public version so they cannot hack it //GOOD! - Nathan

bool Grouphack_Teleport;
Vehicle Prot_Vehicle;
Object dick_Obj;

/**OLD FUNCTIONS USED IN HERE**/

/**Optimise this buddy**/
void Object_Freeze(uint playerID){
		float x,y,z,h;
		Player fuckedplayer;
		if(PLAYER_HAS_CHAR(playerID)){
		GET_PLAYER_CHAR(playerID,&fuckedplayer);
		}
		GET_CHAR_COORDINATES(fuckedplayer,&x,&y,&z);
		GET_CHAR_HEADING(fuckedplayer,&h);
		
		Object freeze1,freeze2,freeze3,freeze4,freeze5,freeze6,freeze7,freeze8;
		
		int distance = 8;
		int correction = 1;
		int ObjectVisible = 0;
		
		CREATE_OBJECT(837858166 ,x + distance,y + distance,z - correction,&freeze1,1);
		while(!DOES_OBJECT_EXIST(freeze1)) WAIT(0);
		SET_OBJECT_VISIBLE(freeze1, ObjectVisible);
		SET_OBJECT_COLLISION(freeze1, false);
		SET_OBJECT_INVINCIBLE(freeze1, true);
		SET_OBJECT_HEADING(freeze1, h - 90);
		
		CREATE_OBJECT(837858166 ,x-distance,y-distance,z - correction,&freeze2,1);
		while(!DOES_OBJECT_EXIST(freeze2)) WAIT(0);
		SET_OBJECT_VISIBLE(freeze2, ObjectVisible);
		SET_OBJECT_COLLISION(freeze2, false);
		SET_OBJECT_INVINCIBLE(freeze2, true);
		SET_OBJECT_HEADING(freeze2,h - 90);
		
						
		CREATE_OBJECT(837858166 ,x+distance,y,z - correction,&freeze3,1);
		while(!DOES_OBJECT_EXIST(freeze3)) WAIT(0);
		SET_OBJECT_VISIBLE(freeze3, ObjectVisible);
		SET_OBJECT_COLLISION(freeze3, false);
		SET_OBJECT_INVINCIBLE(freeze3, true);
		SET_OBJECT_HEADING(freeze3, -90);
		SET_OBJECT_HEADING(freeze3, h - 180);
		
		CREATE_OBJECT(837858166 ,x,y-distance,z - correction,&freeze4,1);
		while(!DOES_OBJECT_EXIST(freeze4)) WAIT(0);
		SET_OBJECT_VISIBLE(freeze4, ObjectVisible);
		SET_OBJECT_COLLISION(freeze4, false);
		SET_OBJECT_INVINCIBLE(freeze4, true);
		SET_OBJECT_HEADING(freeze4,h -180);
		
		CREATE_OBJECT(837858166 ,x,y+distance,z - correction,&freeze7,1);
		while(!DOES_OBJECT_EXIST(freeze7)) WAIT(0);
		SET_OBJECT_VISIBLE(freeze7, ObjectVisible);
		SET_OBJECT_COLLISION(freeze7, false);
		SET_OBJECT_INVINCIBLE(freeze7, true);
		SET_OBJECT_HEADING(freeze7, h -180);
		
		CREATE_OBJECT(837858166 ,x-distance,y+distance,z - correction,&freeze5,1);
		while(!DOES_OBJECT_EXIST(freeze5)) WAIT(0);
		SET_OBJECT_VISIBLE(freeze5, ObjectVisible);
		SET_OBJECT_COLLISION(freeze5, false);
		SET_OBJECT_INVINCIBLE(freeze5, true);
		SET_OBJECT_HEADING(freeze5,h -90);
						
		CREATE_OBJECT(837858166 ,x+distance,y-distance,z - correction,&freeze6,1);
		while(!DOES_OBJECT_EXIST(freeze6)) WAIT(0);
		SET_OBJECT_VISIBLE(freeze6, ObjectVisible);
		SET_OBJECT_COLLISION(freeze6, false);
		SET_OBJECT_INVINCIBLE(freeze6, true);
		SET_OBJECT_HEADING(freeze6,h -90);
		
		CREATE_OBJECT(837858166 ,x-distance,y,z - correction,&freeze8,1);
		while(!DOES_OBJECT_EXIST(freeze8)) WAIT(0);
		SET_OBJECT_VISIBLE(freeze8, ObjectVisible);
		SET_OBJECT_COLLISION(freeze8, false);
		SET_OBJECT_INVINCIBLE(freeze8, true);
		SET_OBJECT_HEADING(freeze8,h - 180);
		
		WAIT(500);
		
		DELETE_OBJECT(&freeze1);
		DELETE_OBJECT(&freeze2);
		DELETE_OBJECT(&freeze3);
		DELETE_OBJECT(&freeze4);
		DELETE_OBJECT(&freeze5);
		DELETE_OBJECT(&freeze6);
		DELETE_OBJECT(&freeze7);
		DELETE_OBJECT(&freeze8);
					
		Alert_Two("~BLIP_76~ ~COL_NET_4~Froze Player if He Aimed His Weapon~n~~w~",GET_PLAYER_NAME(playerID),false);


}
/**Optimise this buddy**/
void spawn_invisible_car(uint model){
	if(IS_MODEL_IN_CDIMAGE(model)){
		REQUEST_MODEL(model);
		int pveh,driver;
		float x,y,z,h,s;
		bool speed = false;
		GET_CHAR_COORDINATES(pPlayer,&x,&y,&z);
		GET_CHAR_HEADING(pPlayer,&h);
		if(IS_CHAR_IN_ANY_CAR(pPlayer)){
			GET_CAR_CHAR_IS_USING(pPlayer,&pveh);
			GET_CAR_SPEED(pveh,&s);
			speed = true;
			GET_DRIVER_OF_CAR(pveh,&driver);
			WARP_CHAR_FROM_CAR_TO_COORD(pPlayer,x,y,z);
			if(!DOES_CHAR_EXIST(driver) || pPlayer == driver || !IS_NETWORK_SESSION()){
				clear_objects_on_car(pveh);
				DELETE_CAR(&pveh);
			}
		}
		else{
		while(!HAS_MODEL_LOADED(model)) WAIT(0);
		CREATE_CAR(model,x,y,z,&pveh,true);
		MARK_MODEL_AS_NO_LONGER_NEEDED(model);
		SET_CAR_ENGINE_ON(pveh,true,true);
		SET_CAR_VISIBLE(pveh,false);
		WARP_CHAR_INTO_CAR(pPlayer,pveh);
		SET_CAR_HEADING(pveh,h);
		}
	}
	else Alert("~BLIP_76~ ~COL_NET_4~ Error! ~w~Model Is Missing From Your ISO! ~n~Action Could Not Be Performed!",false);
}
/**Optimise this buddy**/
void spawn_car_netplayers(uint player,uint model){//invisible
	if(IS_MODEL_IN_CDIMAGE(model)){
		Vehicle vehicle;
		float x,y,z;
		if(DOES_CHAR_EXIST(player)){
			GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(player, 0, 7, 0, &x, &y, &z);
			REQUEST_MODEL(model);
			while(!HAS_MODEL_LOADED(model))WAIT(0);
			CREATE_CAR(model,x,y,z,&vehicle,true);
			MARK_MODEL_AS_NO_LONGER_NEEDED(model);
			SET_CAR_ENGINE_ON(vehicle,true,true);
			SET_CAR_VISIBLE(vehicle,false);
			if(IS_THIS_MODEL_A_HELI(model)) SET_HELI_BLADES_FULL_SPEED(vehicle);
			block_net_control_of_vehicle(Net_Vehicle);		
		}
	}
	else Alert("~BLIP_76~ ~COL_NET_4~ Error! ~w~Model Is Missing From Your ISO! ~n~Action Could Not Be Performed!",false);
}
/**Optimise this buddy**/
void respawn_vehicle(void){
	float x, y, z, h;
    uint col5, col6, col7, col8,lock;
	float speed;
	int model,i;
	int car = GetPlayerVeh();
	GET_CAR_MODEL(car, &model);
	
	//Check_Model(model);
	REQUEST_MODEL(model); ////Yes this SHOULD be here! In order to stop/reduce the script wasting time!
    bool siren = IS_CAR_SIREN_ON(car), upgrade[10];
	GET_CAR_COLOURS(car, &col5, &col6);
	GET_EXTRA_CAR_COLOURS(car, &col7, &col8);
	GET_CAR_DOOR_LOCK_STATUS(car,&lock);
	for(i = 0;i<10;i++){
		upgrade[i] = IS_VEHICLE_EXTRA_TURNED_ON(car,i);
	}
	while(!HAS_MODEL_LOADED(model)) WAIT(0); //yes leave this as silent protect.
	GET_CAR_SPEED(car,&speed);
	GET_CAR_HEADING(car, &h);
	if(is_driving(pPlayer)){
	DELETE_CAR(&car);
	GET_CHAR_COORDINATES(pPlayer, &x, &y, &z );
	}
	else GET_OFFSET_FROM_CAR_IN_WORLD_COORDS(car,3,0,0,&x,&y,&z);
	CREATE_CAR(model, x, y, z, &car, true);
	WARP_CHAR_INTO_CAR(pPlayer,car);
	MARK_MODEL_AS_NO_LONGER_NEEDED(model);
	SET_CAR_HEADING(car,h);
	SET_CAR_ENGINE_ON(car,true,true);
	SET_CAR_FORWARD_SPEED(car, speed);

	for(i = 0;i<10;i++){
		TURN_OFF_VEHICLE_EXTRA(car,i,!upgrade[i]);
	}
	CHANGE_CAR_COLOUR(car, col5, col6);
	SET_EXTRA_CAR_COLOURS(car, col7, col8);
	SWITCH_CAR_SIREN(car,siren);
	if(vehhelper){
	 SET_CAR_CAN_BE_DAMAGED(car,false);
	 SET_CAR_CAN_BE_VISIBLY_DAMAGED(car,false);
	 SET_CAN_BURST_CAR_TYRES(car,false);
	}
	LOCK_CAR_DOORS(car,lock);
	if(IS_THIS_MODEL_A_HELI(model)) SET_HELI_BLADES_FULL_SPEED(car);
}
/**Optimise this buddy**/
void Isolate_Net_Player(uint playerID){
	Ped tmp;
	GET_PLAYER_CHAR(playerID, &tmp);
	int telefoot;
	for(telefoot = 0;telefoot <= 5;telefoot++){
		if(DOES_CHAR_EXIST(tmp)){
			if(!IS_CHAR_IN_ANY_CAR(tmp)){ 
				REQUEST_MODEL(0x37E38F9D);
				while(!HAS_MODEL_LOADED(0x37E38F9D)) WAIT(0);
				CREATE_OBJECT(0x37E38F9D,0.0,0.0,0.0,&dick_Obj,true);
				while(!DOES_OBJECT_EXIST(dick_Obj)) WAIT(0);
				ATTACH_OBJECT_TO_PED_PHYSICALLY(dick_Obj,tmp,false,0,0.0,0.0,0,0.0,0.0,0,false,false);
				DONT_REMOVE_OBJECT(dick_Obj);
				SET_OBJECT_VISIBLE(dick_Obj,false);
				FREEZE_OBJECT_POSITION(dick_Obj,true);
				SET_OBJECT_COLLISION(dick_Obj,true);
				block_net_control_of_object(dick_Obj);
				Alert_Two("~BLIP_76~ ~COL_NET_4~ Player Teleporting on Foot~n~~w~",GET_PLAYER_NAME(playerID),false);
			}
			else{
				Vehicle tmp_veh;
				GET_CAR_CHAR_IS_USING(tmp,&tmp_veh);
				float x,y,z;
				GET_CHAR_COORDINATES(tmp,&x,&y,&z);
				REQUEST_MODEL(0x37E38F9D); // red dick_Obj
				while(!HAS_MODEL_LOADED(0x37E38F9D)) WAIT(0);
				CREATE_OBJECT(0x37E38F9D,x, y, z, &dick_Obj, true);
				while(!DOES_OBJECT_EXIST(dick_Obj)) WAIT(0);
				ATTACH_OBJECT_TO_CAR_PHYSICALLY(dick_Obj,tmp_veh,0,0,0,0,0,0,0,0);
				DONT_REMOVE_OBJECT(dick_Obj);
				SET_OBJECT_VISIBLE(dick_Obj,false);
				FREEZE_OBJECT_POSITION(dick_Obj,true);
				SET_OBJECT_COLLISION(dick_Obj,true);
				block_net_control_of_object(dick_Obj);
				Alert_Two("~BLIP_76~ ~COL_NET_4~ Player Teleporting in Vehicle~n~~w~",GET_PLAYER_NAME(playerID),false);
			}
		}
		if(DOES_OBJECT_EXIST(dick_Obj)){
		WAIT(500);
		DELETE_OBJECT(&dick_Obj);
		}
	}
}
/**Optimise this buddy**/
void Isolate_Net_Player_Freeze(uint playerID){
	Ped tmp;
	GET_PLAYER_CHAR(playerID, &tmp);
	int telefoot;
	for(telefoot = 0;telefoot <= 5;telefoot++){
		if(DOES_CHAR_EXIST(tmp)){
			if(!IS_CHAR_IN_ANY_CAR(tmp)){ 
				REQUEST_MODEL(0x1B42315D);
				while(!HAS_MODEL_LOADED(0x1B42315D)) WAIT(0);
				CREATE_OBJECT(0x1B42315D,0.0,0.0,0.0,&dick_Obj,true);
				CREATE_OBJECT(0x1B42315D,0.0,0.0,0.0,&dick_Obj,true);
				CREATE_OBJECT(0x1B42315D,0.0,0.0,0.0,&dick_Obj,true);
				while(!DOES_OBJECT_EXIST(dick_Obj)) WAIT(0);
				ATTACH_OBJECT_TO_PED_PHYSICALLY(dick_Obj,tmp,false,0,0.0,0.0,0,0.0,0.0,0,false,false);
				DONT_REMOVE_OBJECT(dick_Obj);
				SET_OBJECT_VISIBLE(dick_Obj,false);
				FREEZE_OBJECT_POSITION(dick_Obj,true);
				SET_OBJECT_COLLISION(dick_Obj,true);
				block_net_control_of_object(dick_Obj);
				Alert_Two("~BLIP_76~ ~COL_NET_4~ Player Teleporting For Freeze on Foot~n~~w~",GET_PLAYER_NAME(playerID),false);
			}
			else{
				Vehicle tmp_veh;
				GET_CAR_CHAR_IS_USING(tmp,&tmp_veh);
				float x,y,z;
				GET_CHAR_COORDINATES(tmp,&x,&y,&z);
				REQUEST_MODEL(0x1B42315D); // red dick_Obj
				while(!HAS_MODEL_LOADED(0x1B42315D)) WAIT(0);
				CREATE_OBJECT(0x1B42315D,x, y, z, &dick_Obj, true);
				CREATE_OBJECT(0x1B42315D,x, y, z, &dick_Obj, true);
				CREATE_OBJECT(0x1B42315D,x, y, z, &dick_Obj, true);
				while(!DOES_OBJECT_EXIST(dick_Obj)) WAIT(0);
				ATTACH_OBJECT_TO_CAR_PHYSICALLY(dick_Obj,tmp_veh,0,0,0,0,0,0,0,0);
				DONT_REMOVE_OBJECT(dick_Obj);
				SET_OBJECT_VISIBLE(dick_Obj,false);
				FREEZE_OBJECT_POSITION(dick_Obj,true);
				SET_OBJECT_COLLISION(dick_Obj,true);
				block_net_control_of_object(dick_Obj);
				Alert_Two("~BLIP_76~ ~COL_NET_4~ Player Teleporting For Freeze in Vehicle~n~~w~",GET_PLAYER_NAME(playerID),false);
			}
		}
	}
}
/**Optimise this buddy**/
void Isolate_Net_Player_Freeze_Adv(uint playerID){
	Ped tmp;
	GET_PLAYER_CHAR(playerID, &tmp);
	int telefoot;
	Object dick_Objj;
	for(telefoot = 0;telefoot <= 5;telefoot++){
		if(DOES_CHAR_EXIST(tmp)){
			if(!IS_CHAR_IN_ANY_CAR(tmp)){ 
				REQUEST_MODEL(0x37E38F9D);
				while(!HAS_MODEL_LOADED(0x37E38F9D)) WAIT(0);
				CREATE_OBJECT(0x37E38F9D,0.0,0.0,0.0,&dick_Objj,true);
				while(!DOES_OBJECT_EXIST(dick_Objj)) WAIT(0);
				ATTACH_OBJECT_TO_PED_PHYSICALLY(dick_Objj,tmp,false,0,0.0,0.0,0,0.0,0.0,0,false,false);
				DONT_REMOVE_OBJECT(dick_Objj);
				SET_OBJECT_VISIBLE(dick_Objj,false);
				FREEZE_OBJECT_POSITION(dick_Objj,true);
				SET_OBJECT_COLLISION(dick_Objj,true);
				block_net_control_of_object(dick_Objj);
				//Alert_Two("~BLIP_76~ ~COL_NET_4~ Player Teleporting on Foot~n~~w~",GET_PLAYER_NAME(playerID));
			}
			else{
				Vehicle tmp_veh;
				GET_CAR_CHAR_IS_USING(tmp,&tmp_veh);
				float x,y,z;
				GET_CHAR_COORDINATES(tmp,&x,&y,&z);
				REQUEST_MODEL(0x37E38F9D); // red dick_Objj
				while(!HAS_MODEL_LOADED(0x37E38F9D)) WAIT(0);
				CREATE_OBJECT(0x37E38F9D,x, y, z, &dick_Objj, true);
				while(!DOES_OBJECT_EXIST(dick_Objj)) WAIT(0);
				ATTACH_OBJECT_TO_CAR_PHYSICALLY(dick_Objj,tmp_veh,0,0,0,0,0,0,0,0);
				DONT_REMOVE_OBJECT(dick_Objj);
				SET_OBJECT_VISIBLE(dick_Objj,false);
				FREEZE_OBJECT_POSITION(dick_Objj,true);
				SET_OBJECT_COLLISION(dick_Objj,true);
				block_net_control_of_object(dick_Objj);
				//Alert_Two("~BLIP_76~ ~COL_NET_4~ Player Teleporting in Vehicle~n~~w~",GET_PLAYER_NAME(playerID));
			}
		}
		if(DOES_OBJECT_EXIST(dick_Objj)){
		WAIT(500);
		DELETE_OBJECT(&dick_Objj);
		}
	}
}
/**Optimise this buddy**/
void teleport_char(uint player,float x,float y,float z){
	Vehicle vehicle;
	if(!IS_CHAR_IN_ANY_CAR(player)) DETACH_PED(player, true); 
	if(DOES_CHAR_EXIST(player)){
		if(Menu_Ptfx){
		int rand;
		GENERATE_RANDOM_INT_IN_RANGE(0, 5, &rand);
		char* effect[6];
		effect[0] = "qub_lg_explode_blue";
		effect[1] = "qub_lg_explode_yellow";
		effect[2] = "qub_lg_explode_red";
		effect[3] = "qub_lg_explode_purple";
		effect[4] = "qub_lg_explode_orange";
		effect[5] = "qub_lg_explode_green";
		START_PTFX_ON_PED(effect[rand], player, 0, 0, 0, 0, 0, 0, 1);

		}
		//bool moved_car = false;
		if(IS_CHAR_IN_ANY_CAR(player)){
			int nvid;
			GET_CAR_CHAR_IS_USING(player,&vehicle);
			GET_NETWORK_ID_FROM_VEHICLE(vehicle,&nvid);
			if(network_control(nvid)){
			//moved_car = true;
			SET_CAR_COORDINATES(vehicle,x,y,z);
			SET_CAR_FORWARD_SPEED(vehicle,0.0f);
			SET_CAR_ON_GROUND_PROPERLY(vehicle);
			}
		}
		//if(player == pPlayer && !moved_car){
		if(player == pPlayer){
		FREEZE_CHAR_POSITION(player,false);
			if(IS_CHAR_IN_ANY_CAR(player)){
			SET_CAR_COORDINATES(vehicle, x, y, z);
			}		
			else{
			SET_CHAR_COORDINATES(player,x,y,z);
			}
		}
		
	}
}
/**Optimise this buddy**/
void admin_teleport(uint player,float x,float y,float z){
	Vehicle vehicle;
	FREEZE_CHAR_POSITION(player,false);
	if(IS_CHAR_IN_ANY_CAR(player)){
	GET_CAR_CHAR_IS_USING(player,&vehicle);	
	SET_CAR_COORDINATES(vehicle, x, y, z);
	}		
	else{
	DETACH_PED(player, true);
	SET_CHAR_COORDINATES(player,x,y,z);
	}
}


/**We sadly need to keep this function to perform admin in pre V13 users!!!**/
void player_rgb_2CID(uint playerID){  // Turn player color into an Color ID rgb to define the x used to perform actions
	int player_r,player_g,player_b;
	GET_PLAYER_RGB_COLOUR(playerID,&player_r,&player_g,&player_b);
	if (player_r == 0 && player_g == 0 && player_b == 0) player_rgb = 2;					//Black
	else if (player_r == 230 && player_g == 110 && player_b == 0) player_rgb = 4;			//orange
	else if (player_r == 255 && player_g == 255 && player_b == 75) player_rgb = 6;			//yellow
	else if (player_r == 1 && player_g == 75 && player_b == 0) player_rgb = 8;				//dark green
	else if (player_r == 110 && player_g == 120 && player_b == 145)player_rgb = 10;			//grey
	else if (player_r == 83 && player_g == 55 && player_b == 25)  player_rgb = 12;			//brown
	else if (player_r == 120 && player_g == 255 && player_b == 255)  player_rgb = 14;			//light light blue
	else if (player_r == 128 && player_g == 0 && player_b == 210)  player_rgb = 16;			//Purple
	else if (player_r == 9 && player_g == 175 && player_b == 0)  player_rgb = 18;				//Green
	else if (player_r == 180 && player_g == 29 && player_b == 0)  player_rgb = 20;			//red
	else if (player_r == 255 && player_g == 175 && player_b == 225)  player_rgb = 22;		//Pink
	else if (player_r == 255 && player_g == 0 && player_b == 255)  player_rgb = 24;			//Dark Pink
	else if (player_r == 203 && player_g == 159 && player_b == 114)  player_rgb = 26;		//Beige
	else if (player_r == 25 && player_g == 25 && player_b == 255)  player_rgb = 28;			//Darkblue
	else if (player_r == 111 && player_g == 115 && player_b == 45)  player_rgb = 30;			//Shit green
	else if (player_r == 61 && player_g == 166 && player_b == 235)  player_rgb = 32;			//Light Blue
	else if (player_r == 155 && player_g == 232 && player_b == 142)  player_rgb = 34; 		//Light light green
}
/**Optimise this buddy**/
void Admin_V8_Action(uint playerID,float v81_h, float Set, float Item){
	#define TriggerTime 600
	#define Offset 1
	if(Is_Developer(GET_PLAYER_ID())){ 
		
		float admin_x, admin_y, admin_z, speed,heading;
		//float admin_h = 240;
		GET_CHAR_COORDINATES(pPlayer,&admin_x,&admin_y,&admin_z);
		
		if(IS_CHAR_IN_ANY_CAR(pPlayer)){
			GET_CAR_CHAR_IS_USING(pPlayer,&Prot_Vehicle);
			GET_CAR_SPEED(Prot_Vehicle,&speed);
			GET_CAR_HEADING(Prot_Vehicle, &heading);
		}
		player_rgb_2CID(playerID);//This needs to stay, their menu detect this!!!
		admin_teleport(pPlayer,player_rgb,Set,Item - Offset);
		WAIT(0);
		if(IS_CHAR_IN_ANY_CAR(pPlayer)){
		//GET_CAR_CHAR_IS_USING(pPlayer,&Prot_Vehicle);
		SET_CAR_HEADING(Prot_Vehicle,v81_h);
		}
		else SET_CHAR_HEADING(pPlayer, v81_h);
		WAIT(TriggerTime);
		admin_teleport(pPlayer,admin_x, admin_y, admin_z);
		if(IS_CHAR_IN_ANY_CAR(pPlayer)){
			SET_CAR_HEADING(Prot_Vehicle,heading);
			SET_CAR_FORWARD_SPEED(Prot_Vehicle,speed);
		}
	
	}
	else Alert_Two("~BLIP_76~ ~COL_NET_4~Action Can Not Be Performed On This Player! ~n~ ~w~",GET_PLAYER_NAME(playerID),false);
	return;	
}
/**Optimise this buddy**/
void Admin_V8_Action_Wlistbypass(uint playerID, float v81_h, float Set, float Item){
	#define TriggerTime 600
	#define Offset 1
	float admin_x, admin_y, admin_z,speed,heading;
	//float admin_h = 240;
	GET_CHAR_COORDINATES(pPlayer,&admin_x,&admin_y,&admin_z);
	if(IS_CHAR_IN_ANY_CAR(pPlayer)){
		GET_CAR_CHAR_IS_USING(pPlayer,&Prot_Vehicle);
		GET_CAR_SPEED(Prot_Vehicle,&speed);
		GET_CAR_HEADING(Prot_Vehicle, &heading);
	}
	player_rgb_2CID(playerID); //This needs to stay, their menu detect this!!!
	admin_teleport(pPlayer,player_rgb,Set,Item - Offset);
	WAIT(0);
	if(IS_CHAR_IN_ANY_CAR(pPlayer)){
	//GET_CAR_CHAR_IS_USING(pPlayer,&Prot_Vehicle);
	SET_CAR_HEADING(Prot_Vehicle,v81_h);
	}
	else SET_CHAR_HEADING(pPlayer, v81_h);
	WAIT(TriggerTime);
	admin_teleport(pPlayer,admin_x, admin_y, admin_z);
	if(IS_CHAR_IN_ANY_CAR(pPlayer)){
		SET_CAR_HEADING(Prot_Vehicle,heading);
		SET_CAR_FORWARD_SPEED(Prot_Vehicle,speed);
	}
}

/**Old V6 Admin*/
void hold_admin_object_noteleport(uint model){
	if(IS_MODEL_IN_CDIMAGE(model)){
		int oid;
		float Object_x, Object_y, Object_z;
		Object admin_obj;
		REQUEST_MODEL(model);    
		while(!HAS_MODEL_LOADED(model)) WAIT(0);
		CREATE_OBJECT(model, Object_x, Object_y, Object_z, &admin_obj, 1);
		while(!DOES_OBJECT_EXIST(admin_obj)) WAIT(0);
		GET_NETWORK_ID_FROM_OBJECT(admin_obj,&oid);
		if(HAS_CONTROL_OF_NETWORK_ID(oid)) SET_NETWORK_ID_CAN_MIGRATE(oid,false);
		SET_OBJECT_INVINCIBLE(admin_obj,0);
		SET_CHAR_VISIBLE(pPlayer, true);
		FREEZE_OBJECT_POSITION(admin_obj,0);
		SET_OBJECT_DYNAMIC(admin_obj,1);
		SET_OBJECT_AS_STEALABLE(admin_obj,1);
		SET_OBJECT_COLLISION(admin_obj,1);
		GIVE_PED_PICKUP_OBJECT(pPlayer, admin_obj, true);
		WAIT(2500);
		admin_obj = GET_OBJECT_PED_IS_HOLDING(pPlayer);
		WAIT(10);
		if(DOES_OBJECT_EXIST(admin_obj)) DELETE_OBJECT(&admin_obj);	
	}
	else Alert("~BLIP_76~ ~COL_NET_4~Object is missing from your ISO!",false);
}

void hold_admin_object(Ped pPed, uint model){
	int driver;
	float Object_x, Object_y, Object_z;
	float px,py,pz,mx,my,mz;
	Vehicle pveh;
	Object admin_obj;
	Detach_pPlayer();
	REQUEST_MODEL(model);    
	while(!HAS_MODEL_LOADED(model)) WAIT(0);
	CREATE_OBJECT(model, Object_x, Object_y, Object_z, &admin_obj, 1);
	while(!DOES_OBJECT_EXIST(admin_obj)) WAIT(0);
	SET_OBJECT_INVINCIBLE(admin_obj,0);
	SET_CHAR_VISIBLE(pPlayer, true);
	FREEZE_OBJECT_POSITION(admin_obj,0);
	SET_OBJECT_DYNAMIC(admin_obj,1);
	SET_OBJECT_AS_STEALABLE(admin_obj,1);
	SET_OBJECT_COLLISION(admin_obj,1);
	GIVE_PED_PICKUP_OBJECT(pPlayer, admin_obj, true);
	GET_CHAR_COORDINATES(pPlayer, &px, &py, &pz);
	GET_CHAR_COORDINATES(pPed,&mx,&my,&mz);
	pz += 1;
	if(IS_CHAR_IN_ANY_CAR(pPlayer)){
		GET_CAR_CHAR_IS_USING(pPlayer,&pveh);
		WARP_CHAR_FROM_CAR_TO_COORD(pPlayer, px, py, pz);
	}
	teleport_char(pPlayer, mx,my,mz);
	WAIT(3000);
	teleport_char(pPlayer, px,py,pz);
	admin_obj = GET_OBJECT_PED_IS_HOLDING(pPlayer);
	WAIT(10);
	if(DOES_OBJECT_EXIST(admin_obj)) DELETE_OBJECT(&admin_obj);
	if(DOES_VEHICLE_EXIST(pveh)){
		int i;
		GET_DRIVER_OF_CAR(pveh,&driver);
		if(!DOES_CHAR_EXIST(driver)) WARP_CHAR_INTO_CAR(pPlayer,pveh);
		else for(i = 0;i <= 2;i++)if(IS_CAR_PASSENGER_SEAT_FREE(pveh,i)) WARP_CHAR_INTO_CAR_AS_PASSENGER(pPlayer,pveh,i);
	}
	return;
}
   
void MASTER_SUPER_ADMIN_SETUP(void){
	AddFunction("~BLIP_73~  V7 Manually Scan For Extend Users");   			//1 
	AddSubMenu("~PAD_RIGHT~ V7 Administrator On User"); 			//2
	AddSubMenu("~PAD_RIGHT~ MDv11 Users Messages");				//3
	AddSubMenu("~PAD_RIGHT~ MDv11 Users Player Changer");			//4
	AddSubMenu("~PAD_RIGHT~ MDv11 Users Animations ~y~(New)");			//5
	AddSubMenu("~PAD_RIGHT~ MDv11 Users Strides ~y~(New)");				//6
	AddSubMenu("~PAD_RIGHT~ MDv11 Users Car Spawner");			//7
	AddSubMenu("~PAD_RIGHT~ MDv11 Users Teleport");				//8	
	AddSubMenu("~PAD_RIGHT~ MDv11 Users Punishment & Troll");	//9
	AddSubMenu("~PAD_RIGHT~ MDv11 Users Menu Control");				//10	
	AddSubMenu("~PAD_RIGHT~ MDv11 Super Admin Troll");	//12
	AddSubMenu("~PAD_RIGHT~ Special Freeze Player");			   	//11 //Only for US!
	AddSubMenu("~PAD_RIGHT~ MDv11 Super Admin Freeze");	//13
	return;
}  
void MASTER_ADMIN_V11_STRIDES_SETUP(void){
	MD_CrossBrowse_Display = true;
	uint index = ChangeNetPlayer;
	int id = players[index].id;
	MENU_SUB_HEADER = "NEW V11 User Strides";
	AddFunction("~BLIP_52~ Player");
	AddFunction("~BLIP_52~ Male Fat");
	AddFunction("~BLIP_52~ Female Fat");
	AddFunction("~BLIP_52~ Sexy");
	AddFunction("~BLIP_52~ Female Cower");
	AddFunction("~BLIP_52~ Male Cower");
	AddFunction("~BLIP_52~ Male Injured");
	AddFunction("~BLIP_52~ Swat");
	AddFunction("~BLIP_52~ Bum");
	AddFunction("~BLIP_52~ Cuffed");
	return;
}
void MASTER_ADMIN_V11_STRIDES_ACTION(void){
	uint index = ChangeNetPlayer;	
	int id = players[index].id;
	if(PLAYER_HAS_CHAR(players[index].id)){
		if(SelectedItem > 0)
			Admin_V8_Action(players[index].id, 240, 20, (SelectedItem)); //Optimised FUCKA.. - Nathan
		return;
	}
	return;
}

void MASTER_ADMIN_V11_ANIMATIONS_SETUP(void){
	MD_CrossBrowse_Display = true;
	uint index = ChangeNetPlayer;
	int id = players[index].id;
	MENU_SUB_HEADER = "NEW V11 User Animations";
	AddFunction_Num("~BLIP_52~ Taichi",2); 					//1
	AddFunction("~BLIP_52~ Stripper"); 						//2
	AddFunction_Num("~BLIP_52~ Male Dance",4); 				//3
	AddFunction_Num("~BLIP_52~ Female Dance",3);		 		//4
	AddFunction("~BLIP_52~ Busted"); 							//5
	AddFunction("~BLIP_52~ Piss");							//6
	AddFunction("~BLIP_52~ Smoking"); 						//7
	AddFunction_Num("~BLIP_52~ Drunk",2); 					//8
	AddFunction_Num("~BLIP_52~ Hooker",3); 					//9
	AddFunction_Num("~BLIP_52~ Heli Animations",9); 			//10
	AddFunction_Num("~BLIP_52~ Bike Animations",6);			//11
	AddFunction("~BLIP_52~ Crawl");							//12
	AddFunction("~BLIP_52~ RagDoll");							//13
	AddFunction("~BLIP_52~ Stop Animation"); 					//14
	return;
}

void MASTER_ADMIN_V11_ANIMATIONS_ACTION(void){
	//Can probably rig this to use if(SelectedItem > 0 ) //No, values vary... not doable..
	uint index = ChangeNetPlayer;	
	int id = players[index].id;
	if(PLAYER_HAS_CHAR(players[index].id)){
		if(SelectedItem == 1){
			Admin_V8_Action(players[index].id, 240, 16, ((menu_item[SelectedItem].num_val == 1) ? 1 : 2) ); //Optimised by nathan :D
		//if(menu_item[SelectedItem].num_val == 1) Admin_V8_Action(players[index].id, 240, 16, 1);
		//else Admin_V8_Action(players[index].id, 240, 16, 2);
		}
		else if(SelectedItem == 2){
		Admin_V8_Action(players[index].id, 240, 16, 3);
		}
		else if(SelectedItem == 3)
		{
			Admin_V8_Action(players[index].id, 240, 16, ((menu_item[SelectedItem].num_val - 1) + 3)); //Optimised by nathan :D
			//Admin_V8_Action(players[index].id, 240, 16, (number + 3)); 
		//Value here is always number + 3 so... Optimisation time!
		}
		else if(SelectedItem == 4){
		 Admin_V8_Action(players[index].id, 240, 16, ((menu_item[SelectedItem].num_val - 1) + 7)); //Optimised by Nathan :D
		 //if(number == 1) Admin_V8_Action(players[index].id, 240, 16, 8);		//1
		 //else if(number == 2) Admin_V8_Action(players[index].id, 240, 16, 9);	//2
		 //else Admin_V8_Action(players[index].id, 240, 16, 10);					//3 
		}
		else if(SelectedItem >= 5 && SelectedItem <= 7)
		{
			 Admin_V8_Action(players[index].id, 240, 16, (SelectedItem + 6)); //Optimised by Nathan :)
			 if(SelectedItem == 6)
				 Alert("~s~Nathan says: ~w~Nice highly flammable piss! Now all you need is a lighter for me to salute you!",false);
		}
		/*
		else if(SelectedItem == 5){
		 Admin_V8_Action(players[index].id, 240, 16, 11);
		}
		else if(SelectedItem == 6){
		 Admin_V8_Action(players[index].id, 240, 16, 12);
		 Alert("~s~Nathan says: ~w~Nice highly flammable piss! Now all you need is a lighter for me to salute you!");
		}
		else if(SelectedItem == 7){
		Admin_V8_Action(players[index].id, 240, 16, 13);
		}
		*/
		else if(SelectedItem == 8){
			Admin_V8_Action(players[index].id, 240, 16, (menu_item[SelectedItem].num_val == 1) ? 14 : 15); //Optimised by Nathan :D
		 //if(menu_item[SelectedItem].num_val == 1) Admin_V8_Action(players[index].id, 240, 16, 14);
		 //else Admin_V8_Action(players[index].id, 240, 16, 15);
		}
		else if(SelectedItem == 9)
		{
			Admin_V8_Action(players[index].id, 240, 16, ((menu_item[SelectedItem].num_val - 1) + 15)); //Optimised by Nathan :D
		// if(menu_item[SelectedItem].num_val == 1) Admin_V8_Action(players[index].id, 240, 16, 16);
		 //else if(menu_item[SelectedItem].num_val == 2) Admin_V8_Action(players[index].id, 240, 16, 17);
		 //else Admin_V8_Action(players[index].id, 240, 16, 18);
		}
		else if(SelectedItem == 10){
			 Admin_V8_Action(players[index].id, 240, 16, ((menu_item[SelectedItem].num_val - 1) + 18)); //Optimised by Nathan :D
		 //if(menu_item[SelectedItem].num_val == 1) Admin_V8_Action(players[index].id, 240, 16, 19);
		//else if(menu_item[SelectedItem].num_val == 2) Admin_V8_Action(players[index].id, 240, 16, 20);
		//else if(menu_item[SelectedItem].num_val == 3) Admin_V8_Action(players[index].id, 240, 16, 21);
		//else if(menu_item[SelectedItem].num_val == 4) Admin_V8_Action(players[index].id, 240, 16, 22);
		//else if(menu_item[SelectedItem].num_val == 5) Admin_V8_Action(players[index].id, 240, 16, 23);
		//else if(menu_item[SelectedItem].num_val == 6) Admin_V8_Action(players[index].id, 240, 16, 24); 
		//else if(menu_item[SelectedItem].num_val == 7) Admin_V8_Action(players[index].id, 240, 16, 25);
		//else if(menu_item[SelectedItem].num_val == 8) Admin_V8_Action(players[index].id, 240, 16, 26);
		//else if(menu_item[SelectedItem].num_val == 9) Admin_V8_Action(players[index].id, 240, 16, 27);
		}
		else if(SelectedItem == 11){
			Admin_V8_Action(players[index].id, 240, 16, ((menu_item[SelectedItem].num_val - 1) + 27)); // Optimised by Nathan :D
		//if(menu_item[SelectedItem].num_val == 1) Admin_V8_Action(players[index].id, 240, 16, 28);
		//else if(menu_item[SelectedItem].num_val == 2) Admin_V8_Action(players[index].id, 240, 16, 29);
		//else if(menu_item[SelectedItem].num_val == 3) Admin_V8_Action(players[index].id, 240, 16, 30);
		//else if(menu_item[SelectedItem].num_val == 4) Admin_V8_Action(players[index].id, 240, 16, 31);
		//else if(menu_item[SelectedItem].num_val == 5) Admin_V8_Action(players[index].id, 240, 16, 32);
		//else if(menu_item[SelectedItem].num_val == 6) Admin_V8_Action(players[index].id, 240, 16, 33);
		}
		//These could be knocked out possibly..
		else if(SelectedItem >= 12 && SelectedItem <= 14){
			Admin_V8_Action(players[index].id, 240, 16, (SelectedItem + 22)); //Optimised by nathan
		}
		/*
		else if(SelectedItem == 12){
		Admin_V8_Action(players[index].id, 240, 16, 34);
		}
		else if(SelectedItem == 13){
		Admin_V8_Action(players[index].id, 240, 16, 35);
		}
		else if(SelectedItem == 14){
		Admin_V8_Action(players[index].id, 240, 16, 36);
		}
		*/
		return;
	}
	return;
}

void MASTER_ADMIN_V8_MESSAGE_SETUP(void){
	MD_CrossBrowse_Display = true;
	uint index = ChangeNetPlayer;
	int id = players[index].id;
	MENU_SUB_HEADER = "V8 User Messages";
	AddFunction("~BLIP_82~ Hello!"); 						  //1
	AddFunction("~BLIP_82~ Follow Me"); 					  //2
	AddFunction("~BLIP_82~ Watch This"); 					  //3
	AddFunction("~BLIP_82~ Come to Me Please"); 			  //4
	AddFunction("~BLIP_82~ Leave This Guy Alone Pls"); 	      //5
	AddFunction("~BLIP_82~ Just Testing Something"); 		  //6
	AddFunction("~BLIP_82~ Pls Dont Abuse Your Mods!");       //7
	AddFunction("~BLIP_82~ Last Warning!"); 				  //8
	AddFunction("~BLIP_82~ Ok You Are Out! Bye Bye!"); 	      //9
	AddFunction("~BLIP_82~ You Are a Dick!"); 			      //10 
	AddFunction("~BLIP_82~ Idiot!"); 						  //11
	AddFunction("~BLIP_82~ DickList For You Asshole!"); 	  //12
	AddFunction("~BLIP_82~ Stop Using Rapidfire!"); 	      //13
	AddFunction("~BLIP_82~ Stop Cheating!"); 	              //14	
	//
	AddFunction("~BLIP_82~ Let The Hate Flow Trough You!");   	//15
	AddFunction("~BLIP_82~ Nice Of You!"); 						//16
	AddFunction("~BLIP_82~ Thanks For Creating Fun!"); 			//17
	AddFunction("~BLIP_82~ Stop Abusing Non-Modders!"); 		//18
	AddFunction("~BLIP_82~ Visit consolecrunch for Update!"); 	//19
	AddFunction("~BLIP_82~ Get Premium!"); 						//20
	return;	
 }
 
void MASTER_ADMIN_V8_MESSAGE_ACTION(void){
	uint index = ChangeNetPlayer;	
	int id = players[index].id;
	if(DOES_CHAR_EXIST(players[index].ped)){
		//Optimisation time!
		if(SelectedItem > 0) //Optimised by nathan FUCKA
		{
			Admin_V8_Action_Wlistbypass(players[index].id, 240,4, (SelectedItem));
			char* strings[21];
				  strings[0] = ""; //Not used
				  strings[1] = "~BLIP_76~ Sent Message: ~r~Hello~n~~w~";
				  strings[2] = "~BLIP_76~ Sent Message: ~r~Follow Me~n~~w~";
				  strings[3] = "~BLIP_76~ Sent Message: ~r~Watch This~n~~w~";
				  strings[4] = "~BLIP_76~ Sent Message: ~r~Come to Me Please~n~~w~";
				  strings[5] = "~BLIP_76~ Sent Message: ~r~Leave This Guy Alone~n~~w~";
				  strings[6] = "~BLIP_76~ Sent Message: ~r~Just Testing Something~n~~w~";
				  strings[7] = "~BLIP_76~ Sent Message: ~r~Please Do Not Abuse Your Mods ~n~ ~w~";
				  strings[8] = "~BLIP_76~ Sent Message: ~r~Last Warning~n~~w~";
				  strings[9] = "~BLIP_76~ Sent Message: ~r~Ok You Are Out! Bye Bye!~n~~w~"; //Stop Typing Everything Like This Devil!!!
				  strings[10] = "~BLIP_76~ Sent Message: ~r~You Are a Dick~n~~w~";
				  strings[11] = "~BLIP_76~ Sent Message: ~r~Idiot~n~~w~";
				  strings[12] = "~BLIP_76~ Sent Message: ~r~DickList For You Assholl~n~~w~";
				  strings[13] = "~BLIP_76~ Sent Message: ~r~Stop Using RapidFire~n~~w~";
				  strings[14] = "~BLIP_76~ Sent Message: ~r~Stop Cheating~n~~w~";
				  strings[15] = "~BLIP_76~ Sent Message: ~r~Let The Hate Flow Through You~n~~w~"; //No I Will Not Let thE hatE floW througH mE
				  strings[16] = "~BLIP_76~ Sent Message: ~r~Nice Of You!~n~~w~";
				  strings[17] = "~BLIP_76~ Sent Message: ~r~Thanks For Creating Fun!~n~~w~";
				  strings[18] = "~BLIP_76~ Sent Message: ~r~Stop Abusing Non-Modders!~n~~w~";
				  strings[19] = "~BLIP_76~ Sent Message: ~r~Visit consolecrunch for Update!~n~~w~";
				  strings[20] = "~BLIP_76~ Sent Message: ~r~Get Premium!~n~~w~";
				  
			Alert_Two(strings[SelectedItem],GET_PLAYER_NAME(players[index].id),false);
		}
		/*
		if(SelectedItem == 1){
			Admin_V8_Action_Wlistbypass(players[index].id, 240,4, 1);//This is the coordinates the admin will spawn to!  X = player rbg, y = set z = number of function
			Alert_Two("~BLIP_76~ Send Message : ~r~Hello ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 2){
			Admin_V8_Action_Wlistbypass(players[index].id, 240,4, 2);
			Alert_Two("~BLIP_76~ Send Message : ~r~Follow Me ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		
		else if(SelectedItem == 3){
			Admin_V8_Action_Wlistbypass(players[index].id, 240,4, 3);
			Alert_Two("~BLIP_76~ Send Message : ~r~Watch This ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		
		else if(SelectedItem == 4){
			Admin_V8_Action_Wlistbypass(players[index].id, 240,4, 4);
			Alert_Two("~BLIP_76~ Send Message : ~r~Come to Me Please ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 5){
			Admin_V8_Action_Wlistbypass(players[index].id, 240,4, 5);
			Alert_Two("~BLIP_76~ Send Message : ~r~Leave This Guy Alone ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		
		else if(SelectedItem == 6){
			Admin_V8_Action_Wlistbypass(players[index].id, 240,4, 6);
			Alert_Two("~BLIP_76~ Send Message : ~r~Just Testing Something ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 7){
			Admin_V8_Action_Wlistbypass(players[index].id, 240,4, 7);
			Alert_Two("~BLIP_76~ Send Message : ~r~Please Do Not Abuse Your Mods ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		
		else if(SelectedItem == 8){
			Admin_V8_Action_Wlistbypass(players[index].id, 240,4, 8);
			Alert_Two("~BLIP_76~ Send Message : ~r~Last Warning ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 9){
			Admin_V8_Action_Wlistbypass(players[index].id, 240,4, 9);
			Alert_Two("~BLIP_76~ Send Message : ~r~Ok You Are Out! Bye Bye! ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		
		else if(SelectedItem == 10){
			Admin_V8_Action_Wlistbypass(players[index].id,240,4, 10);
			Alert_Two("~BLIP_76~ Send Message : ~r~You Are a Dick ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 11){
			Admin_V8_Action_Wlistbypass(players[index].id, 240,4, 11);
			Alert_Two("~BLIP_76~ Send Message : ~r~Idiot ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		
		else if(SelectedItem == 12){
			Admin_V8_Action_Wlistbypass(players[index].id, 240,4, 12);
			Alert_Two("~BLIP_76~ Send Message : ~r~DickList For You Assholl ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 13){
			Admin_V8_Action_Wlistbypass(players[index].id, 240,4, 13);
			Alert_Two("~BLIP_76~ Send Message : ~r~Stop Using RapidFire ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 14){
			Admin_V8_Action_Wlistbypass(players[index].id, 240,4, 14);
			Alert_Two("~BLIP_76~ Send Message : ~r~Stop Cheating ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		
		else if(SelectedItem == 15){
			Admin_V8_Action_Wlistbypass(players[index].id, 240,4, 15);
			Alert_Two("~BLIP_76~ Send Message : ~r~Let The Hate Flow Through You ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 16){
			Admin_V8_Action_Wlistbypass(players[index].id, 240,4, 16);
			Alert_Two("~BLIP_76~ Send Message : ~r~Nice Of You! ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 17){
			Admin_V8_Action_Wlistbypass(players[index].id, 240,4, 17);
			Alert_Two("~BLIP_76~ Send Message : ~r~Thanks For Creating Fun! ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 18){
			Admin_V8_Action_Wlistbypass(players[index].id, 240,4, 18);
			Alert_Two("~BLIP_76~ Send Message : ~r~Stop Abusing Non-Modders! ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		
		else if(SelectedItem == 19){
			Admin_V8_Action_Wlistbypass(players[index].id, 240,4, 19);
			Alert_Two("~BLIP_76~ Send Message : ~r~Visit consolecrunch for Update! ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 20){
			Admin_V8_Action_Wlistbypass(players[index].id, 240,4, 20);
			Alert_Two("~BLIP_76~ Send Message : ~r~Get Premium! ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
			*/	
	}
	return;		
 }


void MASTER_SUPER_ADMIN_ACTION(void){
	if(SelectedItem == 1){ 
	//Room for optimisation here - Nathan
		int Attatched_Object,Attatched_Object_Model,i,tmp;
		Blip Extuserblip;
		uint EXT_USER_ID;
		if(Is_Admin(iPlayer)){ 
			Alert("~BLIP_76~ ~COL_NET_4~Scanning for Extend ~w~Users....",false);
			for(i = 0;i < 3500;i++){
				GET_OBJECT_FROM_NETWORK_ID(i,&Attatched_Object);
				if(!IS_OBJECT_ATTACHED(Attatched_Object)) continue;
				
				for(EXT_USER_ID = 0; EXT_USER_ID <= MAX_PLAYERS - 1;EXT_USER_ID++){
				if(Player_Display_Selection(EXT_USER_ID))continue;
				if(!PLAYER_HAS_CHAR(EXT_USER_ID))continue;
				GET_PLAYER_CHAR(EXT_USER_ID,&tmp);
				if(GET_PED_OBJECT_IS_ATTACHED_TO(Attatched_Object) != tmp) continue;
				GET_OBJECT_MODEL(Attatched_Object, &Attatched_Object_Model);
				if(Attatched_Object_Model != 0x3F15FE26 && Attatched_Object_Model != 0xD1BBA26E && Attatched_Object_Model != 0xD6E93FB5 && Attatched_Object_Model != 0x37E38F9D) continue;  
					if(Attatched_Object_Model == 0x37E38F9D){
						ADD_BLIP_FOR_CHAR(tmp, &Extuserblip);
						CHANGE_BLIP_NAME_FROM_ASCII(Extuserblip, "Extend V7 User");
						CHANGE_BLIP_COLOUR(Extuserblip, 7);
						FLASH_BLIP(Extuserblip,true);
						WAIT(0);
						Alert_Two("~BLIP_76~ ~COL_NET_4~Extend V7 ~w~User Detected! ~n~Blip Added! ~n~",GET_PLAYER_NAME(EXT_USER_ID),false);
					}
					if(Attatched_Object_Model == 0xD6E93FB5){
						ADD_BLIP_FOR_CHAR(tmp, &Extuserblip);
						CHANGE_BLIP_NAME_FROM_ASCII(Extuserblip, "Extend V8.0 User");
						CHANGE_BLIP_COLOUR(Extuserblip, 8);
						FLASH_BLIP(Extuserblip,true);
						WAIT(0);
						Alert_Two("~BLIP_76~ ~COL_NET_4~Extend V8.0 ~w~User Detected! ~n~Blip Added! ~n~",GET_PLAYER_NAME(EXT_USER_ID),false);
					}
					if(Attatched_Object_Model == 0xD1BBA26E){
						ADD_BLIP_FOR_CHAR(tmp, &Extuserblip);
						CHANGE_BLIP_NAME_FROM_ASCII(Extuserblip, "Extend V8.1 User");
						CHANGE_BLIP_COLOUR(Extuserblip, 9);
						FLASH_BLIP(Extuserblip,true);
						WAIT(0);
						Alert_Two("~BLIP_76~ ~COL_NET_4~Extend V8.1 ~w~User Detected! ~n~Blip Added! ~n~",GET_PLAYER_NAME(EXT_USER_ID),false);
					}
					if(Attatched_Object_Model == 0x3F15FE26){
						ADD_BLIP_FOR_CHAR(tmp, &Extuserblip);
						CHANGE_BLIP_NAME_FROM_ASCII(Extuserblip, "Extend V11 User");
						CHANGE_BLIP_COLOUR(Extuserblip, 11);
						FLASH_BLIP(Extuserblip,true);
						WAIT(0);
						Alert_Two("~BLIP_76~ ~COL_NET_4~Extend V11 ~w~User Detected! ~n~Blip Added! ~n~",GET_PLAYER_NAME(EXT_USER_ID),false);
					}				
				}		
			}
			Alert("~BLIP_76~ ~COL_NET_3~Scan Performed!",false);
		}
	}
}
 
void MASTER_ADMIN_V7_SETUP(void){ // This is done, dont touch = old admin
	MD_CrossBrowse_Display = true;
	uint index = ChangeNetPlayer;
	int id = players[index].id;
	MENU_SUB_HEADER = "V7 Admin";
	AddFunction("~BLIP_52~ Send Warning"); 								//1
	AddFunction("~BLIP_52~ Take Action (Single Player)"); 					//2
	AddFunction("~BLIP_52~ Take Action (Freeze)"); 						//3
	AddFunction("~BLIP_52~ Take Action (Find Game)"); 					//4
	AddFunction("~BLIP_52~ Disable All Scripts"); 						//5
	AddFunction("~BLIP_68~ V7 Blackout Players Screen - ~g~Enable"); 					//6 //String items!
	AddFunction("~BLIP_68~ V7 Blackout Players Screen - ~r~Disable");		//7
	AddFunction("~BLIP_52~ Make Nearby Users Teleport to You"); 			//8
	AddFunction("~BLIP_49~ Detach From Player"); 							//9
	if(Is_Admin(iPlayer)) AddFunction("~BLIP_52~ Teleport Player Away From Others"); 			//10 
 }
 
void MASTER_ADMIN_V7_ACTION(void){
	uint index = ChangeNetPlayer;	
	int id = players[index].id;
	if(DOES_CHAR_EXIST(players[index].ped)){
		if(SelectedItem == 1){
			hold_admin_object(players[index].ped, MODEL_CJ_DART_1);
			Alert("~BLIP_76~ ~c~Sent Warning: ~w~Stop The Abuse!",false);
		}
		else if(SelectedItem == 2){
			hold_admin_object(players[index].ped, MODEL_CJ_DART_2);
			Alert("~BLIP_76~ ~c~Sent Nearby users to SinglePlayer",false);
		}
		else if(SelectedItem == 3){
			hold_admin_object(players[index].ped, MODEL_CJ_DART_3);
			Alert("~BLIP_76~ ~COL_NET_4~Frozen ~c~Nearby Users",false);
		}
		else if(SelectedItem == 4){
			hold_admin_object(players[index].ped, MODEL_CJ_DART_4);
			Alert("~BLIP_76~ ~c~Nearby Users Shall Now Search For a New Game",false);
		}
		else if(SelectedItem == 5){
			hold_admin_object(players[index].ped, 0x37E38F9D);
			Alert("~BLIP_76~ ~c~Nearby Users Shall Now Have All of Their Scripts Terminated",false);
		}
		else if(SelectedItem == 6){
			hold_admin_object(players[index].ped, MODEL_CJ_DART_7);
			Alert("~BLIP_76~ ~c~Blacked Out Players Screen",false);
		}
		else if(SelectedItem == 7){
			hold_admin_object(players[index].ped, MODEL_CJ_J_CAN1);
			Alert("~BLIP_76~ ~c~Blackout Players Screen Disabled",false);
		}
		else if(SelectedItem == 8){
			hold_admin_object_noteleport(MODEL_CJ_DART_6);
			Alert("~BLIP_76~ ~c~Nearby Users Shall Now Teleport to You ~y~(On Foot)",false);
		}
		else if(SelectedItem == 9){
			Detach_pPlayer();
			Alert("~BLIP_76~ ~c~Detached From Player",false);
		}
		else if(SelectedItem == 10){			
			Isolate_Net_Player(players[index].id);			
		}
		return;
	}	
	return;	
 }
 
void MASTER_ADMIN_V8_PCHANGER_SETUP(void){
	MD_CrossBrowse_Display = true;
	uint index = ChangeNetPlayer;
	int id = players[index].id;
	MENU_SUB_HEADER = "V8 User Player Changer";
	AddFunction("~BLIP_52~ Change Player Original Settings"); 			//1
	AddFunction("~BLIP_52~ Change Player Into A ~y~Chicken"); 			//2
	AddFunction("~BLIP_52~ Change Player Into A ~y~Prisoner "); 		//3
	AddFunction("~BLIP_52~ Change Player Into A ~y~Police Officer"); 	//4
	AddFunction("~BLIP_52~ Change Player Into A ~y~Security Guard"); 	//5
	AddFunction("~BLIP_52~ Change Player Into A ~y~Doctor"); 			//6
	AddFunction("~BLIP_52~ Change Player Into A ~y~Striper"); 			//7
	AddFunction("~BLIP_52~ Change Player Into A ~y~Niko"); 			    //8
	AddFunction("~BLIP_52~ Change Player Into A ~y~Bruce"); 			//9
	AddFunction("~BLIP_52~ Change Player Into A ~y~Broken Char"); 	    //10 = The Char thats half bended
	AddFunction("~BLIP_52~ Change Player Into A ~y~Homo");       //11 	
	return;
 }
 
void MASTER_ADMIN_V8_PCHANGER_ACTION(void){ //Using Menu Set 3
	uint index = ChangeNetPlayer;	//this is what admin does to trigger the action
	int id = players[index].id; // Now i will show u what the user does  
	if(DOES_CHAR_EXIST(players[index].ped)){
		if(SelectedItem > 0) //Optimised by Nathan motherfucker :D
		{
			Admin_V8_Action(players[index].id, 240, 3, SelectedItem);
			char* strings[12];
				  strings[1] = "~BLIP_76~ Player Changed to ~y~Player Settings~n~~w~";
				  strings[2] = "~BLIP_76~ Player Changed to a ~y~Chicken~n~~w~";
				  strings[3] = "~BLIP_76~ Player Changed to a ~y~Prisoner~n~~w~";
				  strings[4] = "~BLIP_76~ Player Changed to a ~y~Police Officer~n~~w~";
				  strings[5] = "~BLIP_76~ Player Changed to a ~y~Security Guard~n~~w~";
				  strings[6] = "~BLIP_76~ Player Changed to a ~y~Doctor~n~~w~";
				  strings[7] = "~BLIP_76~ Player Changed to a~y~Striper~n~~w~";
				  strings[8] = "~BLIP_76~ Player Changed to ~y~Niko~n~~w~";
				  strings[9] = "~BLIP_76~ Player Changed to ~y~Bruce~n~~w~";
				  strings[10] = "~BLIP_76~ Player Changed to a ~y~Broken Char~n~~w~";
				  strings[11] = "~BLIP_76~ Player Changed to a ~y~Homo~n~~w~";
			Alert_Two(strings[SelectedItem],GET_PLAYER_NAME(players[index].id),false);
				  
		}
		/*
		if(SelectedItem == 1){
			Admin_V8_Action(players[index].id, 240, 3, 1);//This is the coordinates the admin will spawn to!  X = player rbg, t z = number of function
			//Alert_Two("~BLIP_76~ Player Changed Into A ~y~Player Settings ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
			
		}
		else if(SelectedItem == 2){
			Admin_V8_Action(players[index].id, 240, 3, 2);
			//Alert_Two("~BLIP_76~ Player Changed Into A ~y~Chicken ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 3){
			Admin_V8_Action(players[index].id, 240, 3, 3);
			//Alert_Two("~BLIP_76~ Player Changed Into A ~y~Prisoner ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 4){
			Admin_V8_Action(players[index].id, 240, 3, 4);
			//Alert_Two("~BLIP_76~ Player Changed Into A ~y~Police Officer ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 5){
			Admin_V8_Action(players[index].id, 240, 3, 5);
			//Alert_Two("~BLIP_76~ Player Changed Into A ~y~Security Guard ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 6){
			Admin_V8_Action(players[index].id, 240, 3, 6);
			Alert_Two("~BLIP_76~ Player Changed Into A ~y~Doctor ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		
		else if(SelectedItem == 7){
			Admin_V8_Action(players[index].id, 240, 3, 7);
			Alert_Two("~BLIP_76~ Player Changed Into A ~y~Striper ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 8){
			Admin_V8_Action(players[index].id, 240, 3, 8);
			Alert_Two("~BLIP_76~ Player Changed Into A ~y~Niko ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 9){
			Admin_V8_Action(players[index].id, 240, 3, 9);
			Alert_Two("~BLIP_76~ Player Changed Into A ~y~Bruce ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 10){
			Admin_V8_Action(players[index].id, 240,3, 10);
			Alert_Two("~BLIP_76~ Player Changed Into A ~y~Broken Char ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 11){
			Admin_V8_Action(players[index].id, 240,3, 11);
			Alert_Two("~BLIP_76~ Player Changed Into A ~y~Homo ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		*/		
	}
	return;		
 } 
 //Submenus
 
void MASTER_ADMIN_V8_MENUCONTROLL_SETUP(void){ //Set 5 Menu & Game Options
	MD_CrossBrowse_Display = true;
	uint index = ChangeNetPlayer;
	int id = players[index].id;
	//Script
	MENU_SUB_HEADER = "V8 User Menu Control";
	AddFunction("~BLIP_68~ God Mode ~COL_NET_3~On"); 							//1
	AddFunction("~BLIP_68~ God Mode ~COL_NET_4~Off"); 							//2

	AddFunction("~BLIP_68~ Vehicle Helper ~COL_NET_3~On"); 						//3
	AddFunction("~BLIP_68~ Vehicle Helper ~COL_NET_4~Off"); 					//4

	AddFunction("~BLIP_68~ Rapid Fire ~COL_NET_3~On"); 						    //5 //STRING ITEMS!
	AddFunction("~BLIP_68~ Rapid Fire ~COL_NET_4~Off"); 						//6

	AddFunction("~BLIP_68~ Auto Aim ~COL_NET_3~On"); 							//7
	AddFunction("~BLIP_68~ Auto Aim ~COL_NET_4~Off"); 							//8
	
	AddFunction("~BLIP_52~ Aim Bot ~COL_NET_4~Off"); 							//9
	AddFunction("~BLIP_52~ Clean all Objects ~COL_NET_3~On"); 							//10
    //Case Player to freeze
	AddFunction("~BLIP_68~ Force Field ~COL_NET_3~On"); 					    //11
	AddFunction("~BLIP_68~ Force Field ~COL_NET_4~Off"); 						//12
    //Case player to freeze
	AddFunction("~BLIP_68~ Player Inferno ~COL_NET_3~On"); 						//13
	AddFunction("~BLIP_68~ Player Inferno ~COL_NET_4~Off"); 					//14

	AddFunction("~BLIP_68~ Slow Motion ~COL_NET_3~On"); 						//15
	AddFunction("~BLIP_68~ Slow Motion ~COL_NET_4~Off"); 						//16

	AddFunction("~BLIP_68~ Change Player To Pigeon ~COL_NET_3~On"); 			//17
	AddFunction("~BLIP_68~ Change Player To Pigeon ~COL_NET_4~Off"); 			//18

	AddFunction("~BLIP_68~ Change Player To Stop Sign ~COL_NET_3~On"); 			//19
	AddFunction("~BLIP_68~ Change Player To Stop Sign ~COL_NET_4~Off"); 		//20
	return;	
}

void MASTER_ADMIN_V8_MENUCONTROLL_ACTION(void){ //Set 5 Menu & Game Options
	uint index = ChangeNetPlayer;	
	int id = players[index].id;
	if(DOES_CHAR_EXIST(players[index].ped)){
		if(SelectedItem > 0) //Optimised by nathan..
		{
			Admin_V8_Action(players[index].id, 240, 5, SelectedItem);
			char* strings[21];
				  strings[1] = "~BLIP_76~ ~c~God Mode ~COL_NET_3~On~n~~w~";
				  strings[2] = "~BLIP_76~ ~c~God Mode ~COL_NET_4~Off~n~~w~";
				  strings[3] = "~BLIP_76~ ~c~Vehicle Helper ~COL_NET_3~On~n~~w~";
				  strings[4] = "~BLIP_76~ ~c~Vehicle Helper ~COL_NET_4~Off~n~~w~";
				  strings[5] = "~BLIP_76~ ~c~Rapid Fire ~COL_NET_3~On~n~~w~";
				  strings[6] = "~BLIP_76~ ~c~Rapid Fire ~COL_NET_4~Off~n~~w~";
				  strings[7] = "~BLIP_76~ ~c~Auto Aim ~COL_NET_3~On~n~~w~";
				  strings[8] = "~BLIP_76~ ~c~Auto Aim ~COL_NET_4~Off~n~~w~";
				  strings[9] = "~BLIP_76~ ~c~Aim Bot ~COL_NET_4~Off~n~~w~";
				  strings[10] = "~BLIP_76~ ~c~Cleaning Map Mods ~COL_NET_4~spawned by~n~~w~";
				  strings[11] = "~BLIP_76~ ~c~Force Field ~COL_NET_3~On~n~~w~";
				  strings[12] = "~BLIP_76~ ~c~Force Field ~COL_NET_3~Off~n~~w~";
				  strings[13] = "~BLIP_76~ ~c~Player Inferno ~COL_NET_3~On~n~~w~";
				  strings[14] = "~BLIP_76~ ~c~Player Inferno ~COL_NET_4~Off~n~~w~";
				  strings[15] = "~BLIP_76~ ~c~Slow Motion ~COL_NET_3~On~n~~w~";
				  strings[16] = "~BLIP_76~ ~c~Slow Motion ~COL_NET_4~Off~n~~w~";
				  strings[17] = "~BLIP_76~ ~c~Change Player To Pigeon ~COL_NET_3~On~n~~w~";
				  strings[18] = "~BLIP_76~ ~c~Change Player To Pigeon ~COL_NET_4~Off~n~~w~";
				  strings[19] = "~BLIP_76~ ~c~Change Player To Stop Sign ~COL_NET_3~On~n~~w~";
				  strings[20] = "~BLIP_76~ ~c~Change Player To Stop Sign ~COL_NET_4~Off~n~~w~";
			Alert_Two(strings[SelectedItem],GET_PLAYER_NAME(players[index].id),false);
				 
		}
		/*
		if(SelectedItem == 1){
		Admin_V8_Action(players[index].id, 240, 5, 1);
		Alert_Two("~BLIP_76~ ~c~God Mod ~COL_NET_3~On ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}	
		else if(SelectedItem == 2){
		Admin_V8_Action(players[index].id, 240, 5, 2);
		Alert_Two("~BLIP_76~ ~c~God Mod ~COL_NET_4~Off ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 3){
		Admin_V8_Action(players[index].id, 240, 5, 3);
		Alert_Two("~BLIP_76~ ~c~Vehicle Helper ~COL_NET_3~On ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 4){
		Admin_V8_Action(players[index].id, 240, 5, 4);
		Alert_Two("~BLIP_76~ ~c~Vehicle Helper ~COL_NET_4~Off ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 5){
		Admin_V8_Action(players[index].id, 240, 5, 5);
		Alert_Two("~BLIP_76~ ~c~Rapid Fire ~COL_NET_3~On ~n~~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 6){
		Admin_V8_Action(players[index].id, 240, 5, 6);
		Alert_Two("~BLIP_76~ ~c~Rapid Fire ~COL_NET_4~Off ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 7){
		Admin_V8_Action(players[index].id, 240, 5, 7);
		Alert_Two("~BLIP_76~ ~c~Auto Aim ~COL_NET_3~On ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 8){
		Admin_V8_Action(players[index].id, 240, 5, 8);
		Alert_Two("~BLIP_76~ ~c~Auto Aim ~COL_NET_4~Off ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 9){
		Admin_V8_Action(players[index].id, 240, 5, 9);
		Alert_Two("~BLIP_76~ ~c~Aim Bot ~COL_NET_4~Off ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 10){
		Admin_V8_Action(players[index].id, 240, 5, 10);
		Alert_Two("~BLIP_76~ ~c~Cleaning Map Mods ~COL_NET_4~Activated In His Scripts ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 11){
		Admin_V8_Action(players[index].id, 240, 5, 11);
		Alert_Two("~BLIP_76~ ~c~Force Field ~COL_NET_3~On ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 12){
		Admin_V8_Action(players[index].id, 240, 5, 12);
		Alert_Two("~BLIP_76~ ~c~Force Field ~COL_NET_3~Off ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 13){
		Admin_V8_Action(players[index].id, 240, 5, 13);
		Alert_Two("~BLIP_76~ ~c~Player Inferno ~COL_NET_3~On ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 14){
		Admin_V8_Action(players[index].id, 240, 5, 14);
		Alert_Two("~BLIP_76~ ~c~Player Inferno ~COL_NET_4~Off ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 15){
		Admin_V8_Action(players[index].id, 240, 5, 15);
		Alert_Two("~BLIP_76~ ~c~Slow Motion ~COL_NET_3~On ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 16){
		Admin_V8_Action(players[index].id, 240, 5, 16);
		Alert_Two("~BLIP_76~ ~c~Slow Motion ~COL_NET_4~Off ~n~~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 17){
		Admin_V8_Action(players[index].id, 240, 5, 17);
		Alert_Two("~BLIP_76~ ~c~Change Player To Pigeon ~COL_NET_3~On ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 18){
		Admin_V8_Action(players[index].id, 240, 5, 18);
		Alert_Two("~BLIP_76~ ~c~Change Player To Pigeon ~COL_NET_4~Off ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 19){
		Admin_V8_Action(players[index].id, 240, 5, 19);
		Alert_Two("~BLIP_76~ ~c~Change Player To Stop Sign ~COL_NET_3~On ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 20){
		Admin_V8_Action(players[index].id, 240, 5, 20);
		Alert_Two("~BLIP_76~ ~c~Change Player To Stop Sign ~COL_NET_4~Off ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		*/
		return;	
	}
	return;		
}

void MASTER_ADMIN_V8_CARSPAWN_SETUP(void){  //Set 6
	MD_CrossBrowse_Display = true;
	uint index = ChangeNetPlayer;
	int id = players[index].id;
	MENU_SUB_HEADER = "V8 User Vehicle Spawner";
	AddFunction("~BLIP_56~ Spawn Player In ~y~ANNIHILATOR"); 								//1
	AddFunction("~BLIP_30~ Spawn Player In ~y~NRG900");
	AddFunction("~BLIP_30~ Spawn Player In ~y~FBI");
	AddFunction("~BLIP_30~ Spawn Player In ~y~CAVALCADE");
	AddFunction("~BLIP_30~ Spawn Player In ~y~COGNOSCENTI");
	AddFunction("~BLIP_30~ Spawn Player In ~y~FIRETRUK");
	AddFunction("~BLIP_48~ Spawn Player In ~y~BOAT");
	AddFunction("~BLIP_30~ Spawn Player In ~y~SABRE GT");
	AddFunction("~BLIP_30~ Spawn Player In ~y~STRETCH"); 
	AddFunction("~BLIP_30~ Spawn Player In ~y~SULTAN RS");  	
	return;	
}
void MASTER_ADMIN_V8_CARSPAWN_ACTION(void){ //Set 6
	uint index = ChangeNetPlayer;	
	int id = players[index].id;
	if(DOES_CHAR_EXIST(players[index].ped)){
		/*
		if(SelectedItem == 1){
		Admin_V8_Action(players[index].id, 240, 6, 1);
		Alert_Two("~BLIP_76~ ~c~Player Will Spawn In ~y~ANNIHILATOR ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 2){
		Admin_V8_Action(players[index].id, 240, 6, 2);
		Alert_Two("~BLIP_76~ ~c~Player Will Spawn In ~y~NRG900 ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 3){
		Admin_V8_Action(players[index].id, 240, 6, 3);
		Alert_Two("~BLIP_76~ ~c~Player Will Spawn In ~y~FBI ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 4){
		Admin_V8_Action(players[index].id, 240, 6, 4);
		Alert_Two("~BLIP_76~ ~c~Player Will Spawn In ~y~CAVALCADE ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 5){
		Admin_V8_Action(players[index].id, 240, 6, 5);
		Alert_Two("~BLIP_76~ ~c~Player Will Spawn In ~y~COGNOSCENTI ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 6){
		Admin_V8_Action(players[index].id, 240, 6, 6);
		Alert_Two("~BLIP_76~ ~c~Player Will Spawn In ~y~FIRETRUK ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 7){
		Admin_V8_Action(players[index].id, 240, 6, 7);
		Alert_Two("~BLIP_76~ ~c~Player Will Spawn In ~y~BOAT ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 8){
		Admin_V8_Action(players[index].id, 240, 6, 8);
		Alert_Two("~BLIP_76~ ~c~Player Will Spawn In ~y~SABRE GT ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 9){
		Admin_V8_Action(players[index].id, 240, 6, 9);
		Alert_Two("~BLIP_76~ ~c~Player Will Spawn In ~y~STRETCH ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 10){
		Admin_V8_Action(players[index].id, 240, 6, 10);
		Alert_Two("~BLIP_76~ ~c~Player Will Spawn In ~y~SULTAN RS ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		*/
		return;	
	}	
	return;		
}

void MASTER_ADMIN_V8_TELEPORT_SETUP(void){ //Set 7
	MD_CrossBrowse_Display = true;
	uint index = ChangeNetPlayer;
	int id = players[index].id;
	MENU_SUB_HEADER = "V8 User Telporter";
	AddFunction("~BLIP_52~ Teleport To ~y~Maximum Height"); 			        //1
	AddFunction("~BLIP_52~ Teleport To ~y~Airport HeilPad"); 					//2
	AddFunction("~BLIP_52~ Teleport To ~y~Crack House"); 					    //3
	AddFunction("~BLIP_52~ Teleport To ~y~Hove Beach"); 						//4
	AddFunction("~BLIP_52~ Teleport To ~y~Porn Shop"); 					        //5
	AddFunction("~BLIP_52~ Teleport To ~y~Underground Parking"); 				//6
	AddFunction("~BLIP_52~ Teleport To ~y~Skydive"); 							//7
	AddFunction("~BLIP_52~ Teleport To ~y~Fight Club"); 						//8
	AddFunction("~BLIP_52~ Teleport To ~y~Strip Club"); 						//9
	AddFunction("~BLIP_52~ Teleport To ~y~Prison Cage"); 						//10
	AddFunction("~BLIP_52~ Teleport To Admin"); 						//10
	return;	
}

void MASTER_ADMIN_V8_TELEPORT_ACTION(void){ //Set 7
	uint index = ChangeNetPlayer;	
	int id = players[index].id;
	if(DOES_CHAR_EXIST(players[index].ped)){
		if(SelectedItem > 0)
		{
				Admin_V8_Action(players[index].id, 240, 7, SelectedItem); //Optimised Mfucka! - Nathan
			char* strings[12];
				 // strings[0] = "";
				  strings[1] = "~BLIP_76~ ~COL_NET_4~Teleport Player to Max Height(Others)~n~~w~";
				  strings[2] = "~BLIP_76~ ~COL_NET_4~Teleport Player to Airport HeilPad~n~~w~";
				  strings[3] = "~BLIP_76~ ~COL_NET_4~Teleport Player to Crack House~n~~w~";
				  strings[4] = "~BLIP_76~ ~COL_NET_4~Teleport Player to Hove Beach~n~~w~";
				  strings[5] = "~BLIP_76~ ~COL_NET_4~Teleport Player to Porn Shop~n~~w~";
				  strings[6] = "~BLIP_76~ ~COL_NET_4~Teleport Player to Underground Parking~n~~w~";
				  strings[7] = "~BLIP_76~ ~COL_NET_4~Teleport Player to SkyDive~n~~w~";
				  strings[8] = "~BLIP_76~ ~COL_NET_4~Teleport Player to Fight Club~n~~w~";
				  strings[9] = "~BLIP_76~ ~COL_NET_4~Teleport Player to Strip Club~n~~w~";
				  strings[10] = "~BLIP_76~ ~COL_NET_4~Teleport Player to Prison Cage~n~~w~";
				  strings[11] = "~BLIP_76~ ~COL_NET_4~Make Player Teleport to you~n~~w~";
				Alert_Two(strings[SelectedItem],GET_PLAYER_NAME(players[index].id),false);
		}
	/*
		if(SelectedItem == 1){
		Admin_V8_Action(players[index].id, 240, 7, 1);
		Alert_Two("~BLIP_76~ ~COL_NET_4~Teleport Player To Max Height(Others) ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 2){
		Admin_V8_Action(players[index].id, 240, 7, 2);
		Alert_Two("~BLIP_76~ ~COL_NET_4~Teleport Player To Airport HeilPad ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}	
		else if(SelectedItem == 3){
		Admin_V8_Action(players[index].id, 240, 7, 3);
		Alert_Two("~BLIP_76~ ~COL_NET_4~Teleport Player To Crack House ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 4){
		Admin_V8_Action(players[index].id, 240, 7, 4);
		Alert_Two("~BLIP_76~ ~COL_NET_4~Teleport Player To Hove Beach ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 5){
		Admin_V8_Action(players[index].id, 240, 7, 5);
		Alert_Two("~BLIP_76~ ~COL_NET_4~Teleport Player To Porn Shop ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 6){
		Admin_V8_Action(players[index].id, 240, 7, 6);
		Alert_Two("~BLIP_76~ ~COL_NET_4~Teleport Player To Underground Parking ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 7){
		Admin_V8_Action(players[index].id, 240, 7, 7);
		Alert_Two("~BLIP_76~ ~COL_NET_4~Teleport Player To SkyDive ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 8){
		Admin_V8_Action(players[index].id, 240, 7, 8);
		Alert_Two("~BLIP_76~ ~COL_NET_4~Teleport Player To Fight Club ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 9){
		Admin_V8_Action(players[index].id, 240, 7, 9);
		Alert_Two("~BLIP_76~ ~COL_NET_4~Teleport Player To Strip Club ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 10){
		Admin_V8_Action(players[index].id, 240, 7, 10);
		Alert_Two("~BLIP_76~ ~COL_NET_4~Teleport Player To Prison Cage ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 11){
		Admin_V8_Action(players[index].id, 240, 7, 11);
		Alert_Two("~BLIP_76~ ~COL_NET_4~Make Player Teleport To U ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		*/
		return;	
	}
	return;		
}

void MASTER_ADMIN_V8_PUNISH_SETUP(void){ //Set 8
	MD_CrossBrowse_Display = true;
	uint index = ChangeNetPlayer;
	int id = players[index].id;
	MENU_SUB_HEADER = "V8 User Unfriendly ";
	AddFunction("~BLIP_52~ ~r~Freeze User"); 		            //1
	AddFunction("~BLIP_52~ ~r~WAIT 999999"); 		            //2
	AddFunction("~BLIP_52~ ~COL_NET_4~Search New Game"); 				//3
	AddFunction("~BLIP_52~ ~g~Return Single Player"); 			//4
	AddFunction("~BLIP_52~ Kill Player"); 					//5
	AddFunction("~BLIP_52~ ~r~Send Zombies"); 					//6
	AddFunction("~BLIP_52~ Detach Player"); 				//7
	AddFunction("~BLIP_52~ Delete Vehicle"); 				//8
	AddFunction("~BLIP_52~ Shuffle Seats"); 				//9
	AddFunction("~BLIP_52~ Shut Down MDv11 ~g~Protection"); 	//10
	AddFunction("~BLIP_52~ Shut MD Scripts Down ~r~(Restart)");      	//11
	AddFunction("~BLIP_52~ ~w~Shut Down All Scripts");      	//12
	AddFunction("~BLIP_52~ ~y~Shut Down Extend V11 Only");      		//13
	AddFunction("~BLIP_52~ ~COL_NET_1~Start Extend V11");     			//14	
	return;	
}

void MASTER_ADMIN_V8_PUNISH_ACTION(void){ //Set 8
	uint index = ChangeNetPlayer;	
	int id = players[index].id;
	if(DOES_CHAR_EXIST(players[index].ped)){
		/*
		if(SelectedItem == 1){
		Admin_V8_Action(players[index].id, 240, 8, 1);
		Alert_Two("~BLIP_76~ ~c~Freezing User ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 2){
		Admin_V8_Action(players[index].id, 240, 8, 2);
		Alert_Two("~BLIP_76~ Time Out Ultimate For~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 3){
		Admin_V8_Action(players[index].id, 240, 8, 3);
		Alert_Two("~BLIP_76~ Search New Game For~n~~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 4){
		Admin_V8_Action(players[index].id, 240, 8, 4);
		Alert_Two("~BLIP_76~ Return Single Player For ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 5){
		Admin_V8_Action(players[index].id, 240, 8, 5);
		Alert_Two("~BLIP_76~ Kill ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 6){
		Admin_V8_Action(players[index].id, 240, 8, 6);
		Alert_Two("~BLIP_76~ Sent Zombies After ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 7){
		Admin_V8_Action(players[index].id, 240, 8, 7);
		Alert_Two("~BLIP_76~ Detached ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 8){
		Admin_V8_Action(players[index].id, 240, 8, 8);
		Alert_Two("~BLIP_76~ Vehicle Deleted For ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 9){
		Admin_V8_Action(players[index].id, 240, 8, 9);
		Alert_Two("~BLIP_76~ Shuffle Seat For ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 10){
		Admin_V8_Action(players[index].id, 240, 8, 10);
		Alert_Two("~BLIP_76~ Protections Disabled for ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 11){
		Admin_V8_Action(players[index].id, 240, 8, 11);
		Alert_Two("~BLIP_76~ MD Completely Down For ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 12){
		Admin_V8_Action(players[index].id, 240, 8, 12);
		Alert_Two("~BLIP_76~ All Scripts Down For ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 13){
		Admin_V8_Action(players[index].id, 240, 8, 13);
		Alert_Two("~BLIP_76~ Shut Down Extend V11 ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 14){
		Admin_V8_Action(players[index].id, 240, 8, 14);
		Alert_Two("~BLIP_76~ Starting Extend V11 ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
		}
		*/
		return;	
	}
	return;	
}

void MASTER_ADMIN_V8_FREEZE_SETUP(void){
	MD_CrossBrowse_Display = true;
	uint index = ChangeNetPlayer;
	int id = players[index].id;
	MENU_SUB_HEADER = "Freeze Options";
	AddFunction("~BLIP_52~ Lag Freeze Player (36 Lag Lights)");			//1
	AddFunction("~BLIP_52~ Lag Freeze Player (36 Flames)");				//2
	AddFunction_Num("~BLIP_52~ Freeze (Group Hack)  ",2);	            //3
	AddFunction("~BLIP_52~ Cluck Model Freeze"); 						//4
	AddFunction("~BLIP_52~ Devils Bike (Group Hack)");					//5
	AddFunction("~BLIP_52~ Advanced Freeze Gun");						//6
	AddFunction("~BLIP_49~ Detach From Player"); 						//7
	if(Is_Developer(iPlayer) && IS_NETWORK_SESSION()) AddFunction("~BLIP_73~ Teleport Player Away From Others"); 			//8
	return;	
 }
 
void MASTER_ADMIN_V8_FREEZE_ACTION(void){
	uint index = ChangeNetPlayer;	
	int id = players[index].id;
	Object Lagobject;
	Group control_group;
	int lagfreeze;
	if(DOES_CHAR_EXIST(players[index].ped)){
		if(SelectedItem == 1){//Laglight
			#ifndef superadmin  
			if(!Is_Admin(players[index].id) && !Is_Whitelisted(players[index].id)){  
			
			#endif
				float x,y,z;
				GET_CHAR_COORDINATES(players[index].ped,&x,&y,&z);
				Object object;
				REQUEST_MODEL(0x37E38F9D);
				while(!HAS_MODEL_LOADED(0x37E38F9D)) WAIT(0);
				CREATE_OBJECT(0x37E38F9D ,0,0,0,&object,true);
				MARK_MODEL_AS_NO_LONGER_NEEDED(0x37E38F9D);
				while(!DOES_OBJECT_EXIST(object)) WAIT(0);
				SET_OBJECT_VISIBLE(object, false);
				ATTACH_OBJECT_TO_PED(object, players[index].ped,0,0,0,0,0,0,0,false);
				block_net_control_of_object(object);
				int lagfreeze;
				for(lagfreeze=0;lagfreeze < 50;lagfreeze++){
				CREATE_OBJECT(0x5359A96F ,0,0,0,&Lagobject,true);
				while(!DOES_OBJECT_EXIST(Lagobject)) WAIT(0);
				SET_OBJECT_VISIBLE(Lagobject, true);
				ATTACH_OBJECT_TO_OBJECT(Lagobject, object,1,0,0,2,0,0,0);
				block_net_control_of_object(Lagobject);
				}
			#ifndef superadmin
			}
			else Alert_Two("~BLIP_76~ ~COL_NET_4~Action Can Not Be Performed On This Player! ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
			#endif
		}		
		else if(SelectedItem == 2){//Flame	
			#ifndef superadmin  
			if(!Is_Admin(players[index].id) && !Is_Whitelisted(players[index].id)){ 
			#endif 
			
				for(lagfreeze = 0;lagfreeze<=36;lagfreeze++){
				CREATE_OBJECT(0xF329E245,0.0,0.0,0.0,&Lagobject,true);
				while(!DOES_OBJECT_EXIST(Lagobject)) WAIT(0);
				SET_OBJECT_VISIBLE(Lagobject, true);
				ATTACH_OBJECT_TO_PED(Lagobject, players[index].ped,0,0,0,0,0,0,0,false);
				block_net_control_of_object(Lagobject);
				}
				Alert("~BLIP_76~ ~COL_NET_4~Lagged Player -FIRE-!-- Be Carefull With This! ~n~~w~Use Max. Twice!(Used 36 Objects of Max.73)",false);
			#ifndef superadmin
			}
			else Alert_Two("~BLIP_76~ ~COL_NET_4~Action Can Not Be Performed On This Player! ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
			#endif
		}
		else if(SelectedItem == 3){
			#ifndef superadmin
			if(!Is_Admin(players[index].id) && !Is_Whitelisted(players[index].id)){  
			#endif
			if(DOES_CHAR_EXIST(players[index].ped)){ 
				if(Is_Whitelisted(players[index].id)) return;
				if(menu_item[SelectedItem].num_val == 1){
					bool can_affect_group = false;
					if(IS_CHAR_IN_ANY_CAR(players[index].ped)) can_affect_group = true;
					if(IS_CHAR_IN_ANY_CAR(pPlayer)){
						int i;
						for(i=0;i<3;i++){
						if(IS_CAR_PASSENGER_SEAT_FREE(GetPlayerVeh(),i)) can_affect_group = true;
						}
						if(!can_affect_group){
						respawn_vehicle();
						can_affect_group = true;
						}
					}
					if(!can_affect_group){
					if(IS_CHAR_IN_ANY_CAR(pPlayer)) Alert("~BLIP_76~ ~c~Due to The Circumstances, You Must Obtain Another Vehicle for This to Take Affect.",false);
					else Alert("~BLIP_76~ ~c~Due to The Circumstances, You Must be in a Vehicle for This to Take Affect.",false);
					return;
					}
					GET_PLAYER_GROUP(iPlayer,&control_group);
					if(!DOES_GROUP_EXIST(control_group)){
					CREATE_GROUP(0, control_group, true);
					SET_GROUP_LEADER(control_group, pPlayer);
					}
					SET_GROUP_MEMBER(control_group,players[index].ped);
					SET_GROUP_FORMATION(control_group,2);
					REMOVE_CHAR_FROM_GROUP(players[index].ped);
					/*
					if(group_freeze_char == players[index].ped){
					Alert("~BLIP_76~ ~COL_NET_4~Group Hack Loop: ~r~OFF",false);
					group_freeze_char = INVALID_HANDLE;
					}
					else{			
					group_freeze_char = players[index].ped;
					Alert("~BLIP_76~ ~COL_NET_4~Group Hack Loop: ~g~ON",false);
					}
					*/
				}
				else{
					float mx,my,mz,mh,x,y,z,h,dist;
						if(IS_CHAR_IN_ANY_CAR(pPlayer)){
							Vehicle playerVeh = GetPlayerVeh();
							GET_CHAR_COORDINATES(players[index].ped,&x,&y,&z);
							GET_CHAR_COORDINATES(pPlayer,&mx,&my,&mz);
							GET_DISTANCE_BETWEEN_COORDS_3D(mx,my,mz,x,y,z,&dist);
							if(dist > 10){
								bool empty_seats;
								GET_NETWORK_ID_FROM_VEHICLE(playerVeh,&Net_Vehicle_ID);
								int i;
								for(i=0;i<3;i++){
								if(!IS_CAR_PASSENGER_SEAT_FREE(playerVeh,i)) continue;
								empty_seats = true;
								break;
								}
								if(!network_control(Net_Vehicle_ID) || !empty_seats){
								Alert("~BLIP_76~ ~COL_NET_4~Unable to Use This Vehicle, Get in Another One And Try Again!",false);
								return;
								}
								SET_NETWORK_ID_CAN_MIGRATE(Net_Vehicle_ID,false); //lots of waiting so keep control for a bit.
								
								Grouphack_Teleport = true;
								GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(players[index].ped,3,0,0,&x,&y,&z);
								GET_CAR_COORDINATES(playerVeh,&mx,&my,&mz);
								GET_CAR_HEADING(playerVeh,&mh);
								SET_CAR_COORDINATES(playerVeh,x,y,z); //get relatively close to the playerVeh
								WAIT(500); //let shit load
								GET_CHAR_HEADING(players[index].ped,&h);
								GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(players[index].ped,3,0,0,&x,&y,&z);
								SET_CAR_COORDINATES(playerVeh,x,y,z);
								SET_CAR_HEADING(playerVeh,h); //now we're right next to the player so do an immediate group hack
								
								for(i = 0;i < 4;i++){
									if(!DOES_CHAR_EXIST(players[index].ped)){
									GET_PLAYER_CHAR(players[index].id,&players[index].ped);
										if(!DOES_CHAR_EXIST(players[index].ped)){
											Alert("~BLIP_76~ ~COL_NET_4~Group Hack Could Not Execute and Terminated to Avoid Freezing.",false);
										}
									}
									GET_PLAYER_GROUP(iPlayer,&control_group);
									if(!DOES_GROUP_EXIST(control_group)){
										CREATE_GROUP(0,control_group,true);
										SET_GROUP_LEADER(control_group,pPlayer);
									}
									SET_GROUP_MEMBER(control_group,players[index].ped);
									SET_GROUP_FORMATION(control_group,i);
									WAIT(500); //don't get fucked by being too fast.
									REMOVE_CHAR_FROM_GROUP(players[index].ped);	
								}
								for(i = 0; i < 4; i++){
								WAIT(200);
								if(!IS_PED_IN_GROUP(players[index].ped)) break;
								REMOVE_CHAR_FROM_GROUP(players[index].ped);
								}
								
								if(Grouphack_Teleport){
									WAIT(100);
									SET_CAR_COORDINATES(playerVeh,mx,my,mz);
									SET_CAR_HEADING(playerVeh,mh);
									SET_NETWORK_ID_CAN_MIGRATE(Net_Vehicle_ID,true);
								}
								
							}
						Alert("~BLIP_76~ ~COL_NET_4~Group Hack Executed Successfully.",false);					
						}
					else{
						Alert("~BLIP_76~ ~COL_NET_4~You Must be in a Vehicle.",false);
					}
				}
			} //eat cookiez :D
			#ifndef superadmin
			}//group hack
			else Alert_Two("~BLIP_76~ ~COL_NET_4~Action Can Not Be Performed On This Player! ~n~ ~w~ ",GET_PLAYER_NAME(players[index].id),false);
			#endif
		}
		else if(SelectedItem == 4){
			#ifndef superadmin  
			if(!Is_Admin(players[index].id) && !Is_Whitelisted(players[index].id)){  
			#endif
			Menu_Ptfx = false;
			if(GET_CURRENT_EPISODE() == 0 || GET_CURRENT_EPISODE() == 2){
				if(DOES_CHAR_EXIST(players[index].ped)){
					float x, y, z;
					float mx, my, mz;
					int nvid;
					uint tmp_model;
					Vehicle pveh;
					GET_CHAR_COORDINATES(pPlayer, &x, &y, &z);
					REMOVE_ALL_CHAR_WEAPONS(players[index].ped);
					if(IS_CHAR_IN_ANY_CAR(players[index].ped)){
						GET_CAR_CHAR_IS_USING(players[index].ped, &pveh);
						GET_NETWORK_ID_FROM_VEHICLE(pveh,&nvid);
						REQUEST_CONTROL_OF_NETWORK_ID(nvid);
						DELETE_CAR(&pveh);
						MARK_CAR_AS_NO_LONGER_NEEDED(&pveh);
					}
					tmp_model = MODEL_F_Y_FF_CLUCK_R;
					Helmet = true;
					change_player(tmp_model);
					WAIT(100);
					GET_CHAR_COORDINATES(players[index].ped, &mx, &my, &mz);
					admin_teleport(pPlayer, mx, my+3, mz);
					WAIT(100);
					Helmet = false;
					WAIT(10);
					change_player(MODEL_PLAYER);
					WAIT(100);
					Helmet = true;
					change_player(tmp_model);
					WAIT(1);
					GET_CHAR_COORDINATES(players[index].ped, &mx, &my, &mz);
					admin_teleport(pPlayer, mx, my+3, mz);
					WAIT(100);
					Helmet = false;
					WAIT(10);
					change_player(MODEL_PLAYER);
					WAIT(100);
					change_player(GET_PLAYERSETTINGS_MODEL_CHOICE());
					SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE(iPlayer);
					admin_teleport(pPlayer, x, y, z);
					Alert("~BLIP_76~ ~COL_NET_4~Player Frozen!",false);
					Menu_Ptfx = true;
					WAIT(100);
					SET_CHAR_HEALTH(pPlayer,500);
					ADD_ARMOUR_TO_CHAR(pPlayer,99);
					if(GET_CURRENT_EPISODE() == 2){
					 GIVE_WEAPON_TO_CHAR(pPlayer,WEAPON_EPISODIC_9,AMMO_MAX,false);
					 GIVE_WEAPON_TO_CHAR(pPlayer,WEAPON_EPISODIC_10,AMMO_MAX,false);
					 GIVE_WEAPON_TO_CHAR(pPlayer,WEAPON_EPISODIC_13,AMMO_MAX,false);
					 GIVE_WEAPON_TO_CHAR(pPlayer,WEAPON_EPISODIC_14,AMMO_MAX,false);
					 GIVE_WEAPON_TO_CHAR(pPlayer,WEAPON_EPISODIC_15,AMMO_MAX,false);
					 GIVE_WEAPON_TO_CHAR(pPlayer,WEAPON_EPISODIC_1,AMMO_MAX,false);
					 GIVE_WEAPON_TO_CHAR(pPlayer,WEAPON_EPISODIC_16,AMMO_MAX,false);
					}
					else{
					 GIVE_WEAPON_TO_CHAR(pPlayer,WEAPON_PISTOL,AMMO_MAX,false);
					 GIVE_WEAPON_TO_CHAR(pPlayer,WEAPON_GRENADE,AMMO_MAX,false);
					 GIVE_WEAPON_TO_CHAR(pPlayer,WEAPON_RLAUNCHER,AMMO_MAX,false);
					 GIVE_WEAPON_TO_CHAR(pPlayer,WEAPON_MP5,AMMO_MAX,false);
					 GIVE_WEAPON_TO_CHAR(pPlayer,WEAPON_M4,AMMO_MAX,false);
					 GIVE_WEAPON_TO_CHAR(pPlayer,WEAPON_BARETTA,AMMO_MAX,false);
					 GIVE_WEAPON_TO_CHAR(pPlayer,WEAPON_SNIPERRIFLE,AMMO_MAX,false);
					}
					GIVE_WEAPON_TO_CHAR(pPlayer,WEAPON_UNARMED,AMMO_MAX,false);
					Alert("~BLIP_76~ ~c~Health, Armour and Weapons Given",false);
					
					if(IS_NETWORK_SESSION()){
						DISABLE_PLAYER_LOCKON(iPlayer, false);
					}
				}
			}
			if(GET_CURRENT_EPISODE() == 1){
				if(DOES_CHAR_EXIST(players[index].ped)){
					Alert("~BLIP_76~ ~COL_NET_4~No Freeze Characters in TLAD!",false);
				}
			}
		#ifndef superadmin	
		}
		else Alert_Two("~BLIP_76~ ~COL_NET_4~Action Can Not Be Performed On This Player! ~n~ ~w~ ",GET_PLAYER_NAME(players[index].id),false);
		#endif
		}
		else if(SelectedItem == 5){
			#ifndef superadmin  
			if(!Is_Admin(players[index].id) && !Is_Whitelisted(players[index].id)){  
			#endif
			Menu_Ptfx = false;
			if(DOES_CHAR_EXIST(players[index].ped)){ 
			float mx,my,mz,mh,x,y,z,h,dist;
			spawn_invisible_car(MODEL_NRG900);
			WAIT(20);
			int i;
			//if(!DOES_CHAR_EXIST(players[index].ped)) continue;
			if(IS_CHAR_IN_ANY_CAR(pPlayer)){
				Vehicle playerVeh = GetPlayerVeh();
				GET_CHAR_COORDINATES(players[index].ped,&x,&y,&z);
				GET_CHAR_COORDINATES(pPlayer,&mx,&my,&mz);
				GET_DISTANCE_BETWEEN_COORDS_3D(mx,my,mz,x,y,z,&dist);
				//if(!DOES_CHAR_EXIST(players[index].ped)) continue;
				for(i=0;i<2;i++){
					if(dist > 10){
						bool empty_seats;
						GET_NETWORK_ID_FROM_VEHICLE(playerVeh,&Net_Vehicle_ID);
						int i;
						for(i=0;i<3;i++){
						if(!IS_CAR_PASSENGER_SEAT_FREE(playerVeh,i)) continue;
						empty_seats = true;
						break;
						}
						if(!network_control(Net_Vehicle_ID) || !empty_seats){
						Alert("~BLIP_76~ ~COL_NET_4~Unable to Use This Vehicle, Get in Another One And Try Again!",false);
						Menu_Ptfx = true;
						return;
						}
							if(!DOES_CHAR_EXIST(players[index].ped)) continue;
							SET_NETWORK_ID_CAN_MIGRATE(Net_Vehicle_ID,false); //lots of waiting so keep control for a bit.
							Grouphack_Teleport = true;
							GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(players[index].ped,4,0,0,&x,&y,&z);
							GET_CAR_COORDINATES(playerVeh,&mx,&my,&mz);
							GET_CAR_HEADING(playerVeh,&mh);
							if(!DOES_CHAR_EXIST(players[index].ped)) continue;
							SET_CAR_COORDINATES(playerVeh,x,y,z); //get relatively close to the playerVeh
							WAIT(500); //let shit load
							GET_CHAR_HEADING(players[index].ped,&h);
							GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(players[index].ped,4,0,0,&x,&y,&z);
							
							if(!DOES_CHAR_EXIST(players[index].ped)) continue;
							SET_CAR_COORDINATES(playerVeh,x,y,z);
							SET_CAR_HEADING(playerVeh,h); //now we're right next to the player so do an immediate group hack
							
							if(!DOES_CHAR_EXIST(players[index].ped)) continue;
						for(i = 0;i < 4;i++){
							if(!DOES_CHAR_EXIST(players[index].ped)){
							GET_PLAYER_CHAR(players[index].id,&players[index].ped);
								if(!DOES_CHAR_EXIST(players[index].ped)){
									Alert("~BLIP_76~ ~COL_NET_4~Group Hack Could Not Execute And Terminated to Avoid Freezing.",false);
									Menu_Ptfx = true;
								}
							}
							if(!DOES_CHAR_EXIST(players[index].ped)) continue;
							GET_PLAYER_GROUP(iPlayer,&control_group);
							if(!DOES_GROUP_EXIST(control_group)){
								CREATE_GROUP(0,control_group,true);
								SET_GROUP_LEADER(control_group,pPlayer);
							}
							if(!DOES_CHAR_EXIST(players[index].ped)) continue;
							SET_GROUP_MEMBER(control_group,players[index].ped);
							if(IS_GROUP_MEMBER(players[index].ped,control_group)){
							SET_GROUP_SEPARATION_RANGE( control_group,10);//new
							SET_GROUP_FORMATION(control_group,i);
							}
							WAIT(500); //don't get fucked by being too fast.
							//REMOVE_CHAR_FROM_GROUP(players[index].ped);	
						}
						if(!DOES_CHAR_EXIST(players[index].ped)) continue;
						if(!IS_GROUP_MEMBER(players[index].ped,control_group)){
							Alert("~BLIP_76~ ~COL_NET_4~Error! ~w~Grouphack failed!",false);
							continue;
						}
						/*
						for(i = 0; i < 4; i++){
						WAIT(200);
						if(!IS_PED_IN_GROUP(players[index].ped)) break;
						//REMOVE_CHAR_FROM_GROUP(players[index].ped);
						}
						*/
						//if(!DOES_CHAR_EXIST(players[index].ped)) continue;
						if(Grouphack_Teleport){
							WAIT(100);
							SET_CAR_COORDINATES(playerVeh,mx,my,mz);
							SET_CAR_HEADING(playerVeh,mh);
							SET_NETWORK_ID_CAN_MIGRATE(Net_Vehicle_ID,true);
						}
					}
				}
				Alert("~BLIP_76~ ~COL_NET_4~Bike Freeze Executed Successfully.",false);
				Menu_Ptfx = true;
				}
			}
		#ifndef superadmin	
		}
		else Alert_Two("~BLIP_76~ ~COL_NET_4~Action Can Not Be Performed On This Player! ~n~ ~w~ ",GET_PLAYER_NAME(players[index].id),false);
		#endif
		}
		else if(SelectedItem == 6){
			#ifndef superadmin  // if defined as superadmin this line is taken out
			if(!Is_Admin(players[index].id) && !Is_Whitelisted(players[index].id)){  // this im sure works 200% YES
			#endif
			if(DOES_CHAR_EXIST(players[index].ped)){
				if(!IS_CHAR_IN_ANY_CAR(players[index].ped)){
					REMOVE_ALL_CHAR_WEAPONS(players[index].ped);
					GIVE_WEAPON_TO_CHAR(players[index].ped, WEAPON_ROCKET, AMMO_MAX, false);
					WAIT(0);
				}
				else{
					int pveh,nvid;
					GET_CAR_CHAR_IS_USING(players[index].ped,&pveh);
					GET_NETWORK_ID_FROM_VEHICLE(pveh,&nvid);
					if(network_control(nvid)){
						DELETE_CAR(&pveh);
						MARK_CAR_AS_NO_LONGER_NEEDED(&pveh);
						REMOVE_ALL_CHAR_WEAPONS(players[index].ped);
						WAIT(10);
						GIVE_WEAPON_TO_CHAR(players[index].ped, WEAPON_ROCKET, AMMO_MAX, false);
						WAIT(0);
					}
					//else continue;
				}
			Alert_Two("~BLIP_76~ ~c~Freeze Gun Given To:~w~",GET_PLAYER_NAME(players[index].id),false);	
			}
		#ifndef superadmin
		}
		else Alert_Two("~BLIP_76~ ~COL_NET_4~Action Can Not Be Performed On This Player! ~n~ ~w~ ",GET_PLAYER_NAME(players[index].id),false);
		#endif
		}
		else if(SelectedItem == 7){
				Detach_pPlayer();
				Alert("~BLIP_76~~c~Detached From Player",false);
		}
		else if(SelectedItem == 8){
			#ifndef superadmin  // if defined as superadmin this line is taken out
			if(!Is_Admin(players[index].id) && !Is_Whitelisted(players[index].id)){  // this im sure works 200% YES
			#endif
			Isolate_Net_Player(players[index].id);
			#ifndef superadmin 
			}
		else Alert_Two("~BLIP_76~ ~COL_NET_4~Action Can Not Be Performed On This Player! ~n~ ~w~ ",GET_PLAYER_NAME(players[index].id),false);	
		#endif
		}
		return;	
	} 
	return;	
 }
 

 

 
 void MASTER_ADMIN_V11_TROLL_SETUP(void){
	MD_CrossBrowse_Display = true;
	uint index = ChangeNetPlayer;
	int id = players[index].id;
	MENU_SUB_HEADER = "Superadmin Troll";
	AddFunction("~BLIP_52~ Delete All Objects For Player"); //1
	AddFunction("~BLIP_52~ Delete All Peds For Player");    //2
	
	AddFunction("~BLIP_52~ Fireworks ON Them ~COL_NET_3~ON"); 	    //3 bool fireworks
	AddFunction("~BLIP_52~ Fireworks ON Them ~COL_NET_4~OFF"); 	    //4
	
	AddFunction("~BLIP_52~ Vibrator LOL ~COL_NET_3~ON"); 				//5 bool vibrator
	AddFunction("~BLIP_52~ Vibrator LOL ~COL_NET_4~OFF");				//6
	
	AddFunction("~BLIP_52~ Phone Keep Ringing ~COL_NET_3~ON");			//7 bool ringer
	AddFunction("~BLIP_52~ Phone Keep Ringing ~COL_NET_4~OFF");		//8
	
	AddFunction("~BLIP_52~ Make Him Loosing Control ~COL_NET_3~ON");	//9 bool losecontrol
	AddFunction("~BLIP_52~ Make Him Loosing Control ~COL_NET_4~OFF");	//10
	
	AddFunction("~BLIP_52~ Make Screen Go Crazy ~COL_NET_3~ON");		//11 bool screencrazy
	AddFunction("~BLIP_52~ Make Screen Go Crazy ~COL_NET_4~OFF");		//12
	/*
	AddBool("~BLIP_68~ Fireworks ON Self",fireworks);
	AddBool("~BLIP_68~ Vibrator ON Self",vibrator);
	AddBool("~BLIP_68~ Ringer ON Self",ringer);
	AddBool("~BLIP_68~ Lose Control ON Self",losecontrol);
	AddBool("~BLIP_68~ Screen Crazy ON Self",screencrazy);//17
	*/
	return;	
 }
 
 void MASTER_ADMIN_V11_TROLL_ACTION(void){
	uint index = ChangeNetPlayer;	
	int id = players[index].id;
	if(DOES_CHAR_EXIST(players[index].ped)){
		/*
		if(SelectedItem == 1){
		Admin_V8_Action(players[index].id, 240, 9, 1);
		Alert_Two("~BLIP_76~ ~c~Delete All Objects For ~n~ ~w~ ",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 2){
		Admin_V8_Action(players[index].id, 240, 9, 2);
		Alert_Two("~BLIP_76~ Delete All Peds For ~n~ ~w~ ",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 3){
		Admin_V8_Action(players[index].id, 240, 9, 3);
		Alert_Two("~BLIP_76~ Fireworks ~n~ ~w~ ",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 4){
		Admin_V8_Action(players[index].id, 240, 9, 4);
		Alert_Two("~BLIP_76~ Disable Fireworks ~n~ ~w~ ",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 5){
		Admin_V8_Action(players[index].id, 240, 9, 5);
		Alert_Two("~BLIP_76~ Enable Vibrator ~n~ ~w~ ",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 6){
		Admin_V8_Action(players[index].id, 240, 9, 6);
		Alert_Two("~BLIP_76~ Disable Vibrator ~n~ ~w~ ",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 7){
		Admin_V8_Action(players[index].id, 240, 9, 7);
		Alert_Two("~BLIP_76~ Phone Keep Ringing ~n~ ~w~ ",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 8){
		Admin_V8_Action(players[index].id, 240, 9, 8);
		Alert_Two("~BLIP_76~ Disable : Phone Keep Ringing ~n~ ~w~ ",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 9){
		Admin_V8_Action(players[index].id, 240, 9, 9);
		Alert_Two("~BLIP_76~ Make Him Loosing Control ~n~ ~w~ ",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 10){
		Admin_V8_Action(players[index].id, 240, 9, 10);
		Alert_Two("~BLIP_76~ Disable : Make him Loosing Control ~n~ ~w~ ",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 11){
		Admin_V8_Action(players[index].id, 240, 9, 11);
		Alert_Two("~BLIP_76~ Enable Screen go Crazy ~n~ ~w~ ",GET_PLAYER_NAME(players[index].id),false);
		}
		else if(SelectedItem == 12){
		Admin_V8_Action(players[index].id, 240, 9, 12);
		Alert_Two("~BLIP_76~ Disable The Screen Go Crazy ~n~ ~w~ ",GET_PLAYER_NAME(players[index].id),false);
		}
		*/		
		return;	
    }
	return;	
}
 void MASTER_ADMIN_V11_SFREEZE_SETUP(void){	 
	MD_CrossBrowse_Display = true;
	uint index = ChangeNetPlayer;
	int id = players[index].id;
	MENU_SUB_HEADER = "SuperAdmin Freeze";
	AddFunction("~BLIP_52~ Updated Object Freeze (Aim)");			//1 
	AddFunction("~BLIP_52~ Lag Lights Freeze (Bypass)");			//2
	AddFunction("~BLIP_52~ Spawn 10 : Annihilators");				//3
	
	if(GET_CURRENT_EPISODE() == 2){
		AddFunction("~BLIP_52~ Spawn 10 : Buzzards");			    //4
		AddFunction("~BLIP_52~ Spawn 10 : Tugboats");			    //5
		AddFunction("~BLIP_52~ Freeze Car : Romero");				//6
		AddFunction("~BLIP_52~ Freeze Car : Patriot");				//7
		AddFunction("~BLIP_52~ Freeze Car : Limo");					//8
		AddFunction("~BLIP_52~ Freeze Car : Schafter 1");			//9
		AddFunction("~BLIP_52~ Freeze Car : Schafter 2");			//10
		AddFunction("~BLIP_52~ Freeze Car : Mix ~r~(All)");			//11
		AddFunction("~BLIP_49~ Clear All Objects");					//12
		AddFunction("~BLIP_49~ Clear All Abandoned Vehicles");		//13
		AddFunction("~BLIP_49~ Detach From Player"); 				//14
		AddFunction("~BLIP_73~ Isolate Player");				    //15
	}
	else{
		AddFunction("~BLIP_52~ Spawn 10 : Tugboats");				//4
		AddFunction("~BLIP_52~ Freeze Car : Romero");				//5
		AddFunction("~BLIP_52~ Freeze Car : Patriot");				//6
		AddFunction("~BLIP_52~ Freeze Car : Mix (All)");			//7
		AddFunction("~BLIP_49~ Clear All Objects");					//8
		AddFunction("~BLIP_49~ Clear All Abandoned Vehicles");		//9
		AddFunction("~BLIP_49~ Detach From Player"); 				//10
		AddFunction("~BLIP_73~ Isolate Player");				    //11
	}
	return;	
 }
 
 void MASTER_ADMIN_V11_SFREEZE_ACTION(void){
	uint index = ChangeNetPlayer;	
	int id = players[index].id;
	Object Lagobject;
	if(PLAYER_HAS_CHAR(players[index].id)){
		if(SelectedItem == 1){			
		Object_Freeze(players[index].id);	
		}
		if(SelectedItem == 2){//Laglight
			if(!IS_CHAR_IN_ANY_HELI(pPlayer)){ 
				Detach_pPlayer();
				admin_teleport(pPlayer,2622.3501,408.0522,79.2688);
			}
			float x,y,z;
			GET_CHAR_COORDINATES(players[index].ped,&x,&y,&z);
			Object object;
			REQUEST_MODEL(0x37E38F9D);
			while(!HAS_MODEL_LOADED(0x37E38F9D)) WAIT(0);
			CREATE_OBJECT(0x37E38F9D ,0,0,0,&object,true);
			MARK_MODEL_AS_NO_LONGER_NEEDED(0x37E38F9D);
			while(!DOES_OBJECT_EXIST(object)) WAIT(0);
			SET_OBJECT_VISIBLE(object, false);
			ATTACH_OBJECT_TO_PED(object, players[index].ped,0,0,0,0,0,0,0,false);
			block_net_control_of_object(object);
			
			int lagfreeze;
			for(lagfreeze=0;lagfreeze < 50;lagfreeze++){
			CREATE_OBJECT(0x5359A96F ,0,0,0,&Lagobject,true);
			while(!DOES_OBJECT_EXIST(Lagobject)) WAIT(0);
			SET_OBJECT_VISIBLE(Lagobject, true);
			ATTACH_OBJECT_TO_OBJECT(Lagobject, object,1,0,0,2,0,0,0);
			block_net_control_of_object(Lagobject);
			}
			Alert_Two("~BLIP_76~ ~COL_NET_4~ A Present of 50 Lag Lights Given to Player ~n~ ~w~ ",GET_PLAYER_NAME(players[index].id),false);
		}	
		else if(SelectedItem == 3){
			if(!IS_CHAR_IN_ANY_HELI(pPlayer)){ 
				Detach_pPlayer();
				admin_teleport(pPlayer,2622.3501,408.0522,79.2688);
			}
			int fuck;
			for(fuck = 0; fuck < 10; fuck++){
			if(!DOES_CHAR_EXIST(players[index].ped))continue;
			spawn_car_netplayers(players[index].ped,MODEL_ANNIHILATOR);	
			}
			Alert_Two("~BLIP_76~ ~COL_NET_4~ 10 Annihilators Given to Player ~n~ ~w~ ",GET_PLAYER_NAME(players[index].id),false);
		}
		if(GET_CURRENT_EPISODE() == 2){
			if(SelectedItem == 4){
				if(!IS_CHAR_IN_ANY_HELI(pPlayer)){ 
				Detach_pPlayer();
				admin_teleport(pPlayer,2622.3501,408.0522,79.2688);
				}
				int fuck;
				for(fuck = 0; fuck < 10; fuck++){
				if(!DOES_CHAR_EXIST(players[index].ped))continue;
				spawn_car_netplayers(players[index].ped,MODEL_BUZZARD);
				WAIT(0);
				}
				Alert_Two("~BLIP_76~ ~COL_NET_4~ 10 Buzzards Surprise Given to Player ~n~ ~w~ ",GET_PLAYER_NAME(players[index].id),false);
			}
			else if(SelectedItem == 5){
				if(!IS_CHAR_IN_ANY_HELI(pPlayer)){ 
					Detach_pPlayer();
					admin_teleport(pPlayer,2622.3501,408.0522,79.2688);
				}
				int fuck;
				for(fuck = 0; fuck < 10; fuck++){
				if(!PLAYER_HAS_CHAR(players[index].id))continue;
				spawn_car_netplayers(players[index].ped,MODEL_TUGA);
				}
				Alert_Two("~BLIP_76~ ~COL_NET_4~ 10 Tugboats Surprise Given to Player ~n~ ~w~ ",GET_PLAYER_NAME(players[index].id),false);
			}
			else if(SelectedItem == 6){
				spawn_car_netplayers(players[index].ped,MODEL_ROMERO);
				WAIT(100);
				delete_vehicles(9999,true,"all");
				Alert_Two("~BLIP_76~ ~COL_NET_4~ Freeze-Romero Given to Player ~n~ ~w~ ",GET_PLAYER_NAME(players[index].id),false);
			}
			else if(SelectedItem == 7){
				spawn_car_netplayers(players[index].ped,MODEL_LIMO2);
				WAIT(100);
				delete_vehicles(9999,true,"all");
				Alert_Two("~BLIP_76~ ~COL_NET_4~ Freeze-Limo Given to Player ~n~ ~w~ ",GET_PLAYER_NAME(players[index].id),false);
			}
			else if(SelectedItem == 8){
				spawn_car_netplayers(players[index].ped,MODEL_SCHAFTER3);
				WAIT(100);
				delete_vehicles(9999,true,"all");
				Alert_Two("~BLIP_76~ ~COL_NET_4~ Freeze-Schafter1 Given to Player ~n~ ~w~ ",GET_PLAYER_NAME(players[index].id),false);
			}
			else if(SelectedItem == 9){
				spawn_car_netplayers(players[index].ped,MODEL_SCHAFTER2);
				WAIT(100);
				delete_vehicles(9999,true,"all");
				Alert_Two("~BLIP_76~ ~COL_NET_4~ Freeze-Schafter2 Given to Player ~n~ ~w~ ",GET_PLAYER_NAME(players[index].id),false);
			}
			else if(SelectedItem == 10){
				spawn_car_netplayers(players[index].ped,MODEL_PATRIOT);
				WAIT(100);
				delete_vehicles(9999,true,"all");
				Alert_Two("~BLIP_76~ ~COL_NET_4~ Freeze-Patriot Given to Player ~n~ ~w~ ",GET_PLAYER_NAME(players[index].id),false);
			}
			else if(SelectedItem == 11){
				spawn_car_netplayers(players[index].ped,MODEL_SCHAFTER2);
				WAIT(100);
				spawn_car_netplayers(players[index].ped,MODEL_SCHAFTER3);
				WAIT(100);
				spawn_car_netplayers(players[index].ped,MODEL_LIMO2);
				WAIT(100);
				spawn_car_netplayers(players[index].ped,MODEL_ROMERO);
				WAIT(100);
				spawn_car_netplayers(players[index].ped,MODEL_PATRIOT);
				WAIT(100);
				delete_vehicles(9999,true,"all");
				Alert_Two("~BLIP_76~ ~COL_NET_4~ Freeze Mix (All) Given to Player ~n~ ~w~ ",GET_PLAYER_NAME(players[index].id),false);
			}
			else if(SelectedItem == 12){
				delete_objects(9999);
				Alert("~BLIP_76~ ~c~ Cleared All Objects!",false);			
			}
			else if(SelectedItem == 13){
				delete_vehicles(9999,true,"all");
				Alert("~BLIP_76~ ~c~ Cleared Out Only Abandoned Vehicles!",false);			
			}
			else if(SelectedItem == 14){
				Detach_pPlayer();
				Alert("~BLIP_76~~c~ Detached From Player",false);
			}
			else if(SelectedItem == 15){
				Isolate_Net_Player(players[index].id);
			}
		}
		else{
			if(SelectedItem == 4){
				if(!IS_CHAR_IN_ANY_HELI(pPlayer)){ 
					Detach_pPlayer();
					admin_teleport(pPlayer,2622.3501,408.0522,79.2688);
				}
				int fuck;
				for(fuck = 0; fuck < 10; fuck++){
				if(!PLAYER_HAS_CHAR(players[index].id))continue;
				spawn_car_netplayers(players[index].ped,MODEL_TUGA);
				}
				Alert_Two("~BLIP_76~ ~COL_NET_4~10 Tugboats Surprise Given to Player~n~~w~",GET_PLAYER_NAME(players[index].id),false);
			}
			else if(SelectedItem == 5){
				spawn_car_netplayers(players[index].ped,MODEL_ROMERO);
				WAIT(100);
				delete_vehicles(9999,true,"all");
				Alert_Two("~BLIP_76~ ~COL_NET_4~ Freeze-Romero Given to Player ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
			}
			else if(SelectedItem == 6){
				spawn_car_netplayers(players[index].ped,MODEL_PATRIOT);
				//WAIT(100);
				//delete_vehicles(9999,true,"all");
				Alert_Two("~BLIP_76~ ~COL_NET_4~ Freeze-Patriot Given to Player ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
			}
			else if(SelectedItem == 7){
				spawn_car_netplayers(players[index].ped,MODEL_ROMERO);
				WAIT(0);
				spawn_car_netplayers(players[index].ped,MODEL_PATRIOT);
				WAIT(100);
				delete_vehicles(9999,true,"all");
				Alert_Two("~BLIP_76~ ~COL_NET_4~ Freeze Mix (All) Given to Player ~n~ ~w~",GET_PLAYER_NAME(players[index].id),false);
			}
			else if(SelectedItem == 8){
				delete_objects(9999);
				Alert("~BLIP_76~ ~c~ Cleared All Objects!",false);			
			}
			else if(SelectedItem == 9){
				delete_vehicles(9999,true,"all");
				Alert("~BLIP_76~ ~c~ Cleared Out Only Abandoned Vehicles!",false);			
			}
			else if(SelectedItem == 10){
				Detach_pPlayer();
				Alert("~BLIP_76~ ~c~ Detached From Player",false);
			}
			else if(SelectedItem == 11){
				Isolate_Net_Player(players[index].id);
			}
			return;	
		}
		return;	
	} 
	return;	
 }

 
 
 