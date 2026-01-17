/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv10
 * @ MADE BY - DEVILSDESIGN & SHoCKxWAVE & IIV_NATHAN_VII
 */

void admin_change_player(uint modelp){
	if(IS_MODEL_IN_CDIMAGE(modelp)){
		REQUEST_MODEL(modelp);		
		while (!HAS_MODEL_LOADED(modelp)) WAIT(0);
		CHANGE_PLAYER_MODEL(iPlayer, modelp);
		pPlayer = GetPlayerPed(); //don't remove this... your char changes when your model does..
		MARK_MODEL_AS_NO_LONGER_NEEDED(modelp);		
	}	
}

void Admin_In_Game_Scan(void){
	uint adminscanID;
	if(!Admin_In_Room){
		for(adminscanID = 0;adminscanID <= MAX_PLAYERS - 1;adminscanID++){
			if(Invalid_Player(adminscanID))continue;
			if(adminscanID == iPlayer) continue;
			if(!Is_Premium(adminscanID))continue;
			Admin_In_Room = true; // turns the listener on or off
		}
	}
}

void MobilePhoneTroll(void){
	int ringtone; 
	START_MOBILE_PHONE_RINGING();
	GENERATE_RANDOM_INT_IN_RANGE(1, 60, &ringtone); //you bastard!
	START_CUSTOM_MOBILE_PHONE_RINGING(ringtone);
}

void MakePlayerLoosingControll(void){
	float rand;
	GENERATE_RANDOM_FLOAT_IN_RANGE(0, 2500, &rand);
	SET_CHAR_COORDINATES(GetPlayerPed(), rand, rand, rand);
	if(IS_CHAR_IN_ANY_CAR(GetPlayerPed())){
		float speed, current_speed;
		int car;
		GENERATE_RANDOM_FLOAT_IN_RANGE(0, 10, &speed);
		GET_CAR_CHAR_IS_USING(GetPlayerPed(), &car);
		GET_CAR_SPEED(car, &current_speed);
		SET_CAR_FORWARD_SPEED(car, current_speed * speed);
	}
}



void InjectScreenVirus(void){
		int r, g, b;
		GENERATE_RANDOM_INT_IN_RANGE(0, 255, &r);
		GENERATE_RANDOM_INT_IN_RANGE(0, 255, &g);
		GENERATE_RANDOM_INT_IN_RANGE(0, 255, &b);
		DRAW_RECT(0.5,0.5, 2, 2, r,g, b, 255); 
}

void VibratorMode(void){
	int random;
	GENERATE_RANDOM_INT_IN_RANGE(100, 99999, &random);
	SHAKE_PAD(0, random, 200);
}

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

void ScanForUsers(uint PlayerUserScan_ID){
	int PlayerUserScan_PED;	
	if(PLAYER_HAS_CHAR(PlayerUserScan_ID)){
		GET_PLAYER_CHAR(PlayerUserScan_ID,&PlayerUserScan_PED);
		if(DOES_CHAR_EXIST(PlayerUserScan_PED)){
			if(!Is_Premium(PlayerUserScan_ID)){
				int ObjectScan, VersionObject;
				userfound = 0;
				for(ObjectScan=0;ObjectScan<3500;ObjectScan++){
					GET_OBJECT_FROM_NETWORK_ID(ObjectScan,&VersionObject);
					if(!IS_OBJECT_ATTACHED(VersionObject)) continue;
					if(GET_PED_OBJECT_IS_ATTACHED_TO(VersionObject) != PlayerUserScan_PED)continue;
					int VersionModel;
					GET_OBJECT_MODEL(VersionObject,&VersionModel);
					if(VersionModel != 0x37E38F9D && VersionModel != 0xD6E93FB5 && VersionModel != 0xD1BBA26E && VersionModel != 0x3F15FE26)continue;
					if(VersionModel == 0x37E38F9D){
						userfound = 70; // V7 Object					
					}
					else if(VersionModel == 0xD6E93FB5){
						userfound = 80; // V8 Object 					
					}
					else if(VersionModel == 0xD1BBA26E){
						userfound = 81; // V81 Object 					
					}
					else if(VersionModel == 0x3F15FE26){
						userfound = 90; // V11 Object 					
					}
				}
			}
		}
	}	
}

