/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version V13 TRIDENT
 * @ DEV TEAM V13 - IIV NATHAN VII & DEVILSDESIGN
 */
//FILE HEAVILY OPTIMISED BY NATHAN  -- VERY NICELY DONE!!!
 /**
 How to use : 
 A. Create a function for the actionpad spawn // set an object
			1. Teleporter Mobile (using the grids + spark = 6 objects!)
			2. Teleporter on fixed place (using the grids + spark = 6 objects!)
			3. Actionpad doing a function  (undefined) 
 
 */
 

void aPadObjects(void){
	create_mobile_mapbase(pPlayer,0x4F3E5681,0.00f, -0.97f,0.00f, 1, 0);//1st object all the others are attached to
	create_mobile_mapobj(0x55CA3AE6,1, 0, 0.5483, 3.150,0,0);//SPARK
	create_mobile_mapobj(0x4F3E5681,-3.1206, 0, -2.2700, 0,1.575,0);//Grid1
	create_mobile_mapobj(0x4F3E5681,3.1206, 0, -2.2700, 0,4.725,0);//grid2
	create_mobile_mapobj(0x4F3E5681,0, 4.500, -3.7767, 1.575,0,0);//grid3
}
 void aPadPayNSprayObjects(void){
	aPadObjects();
	create_mobile_mapobj(-41876173,22.5808,-9.3944,-3.500,0,0.0,0);//Pain spray Building
	create_mobile_mapobj(-1855959785,-3.0934,-4.725,-4.2500,0,0.0,4.725);//traffic lights
	create_mobile_mapobj(-1855959785,3.0934,-4.725,-4.2500,0,0.0,4.725);//traffic lights
	create_mobile_mapobj(-1855959785,-3.7792,3.9734,-4.2500,0,0.0,3.150);//traffic lights
	create_mobile_mapobj(-1855959785,3.7792,3.9734,-4.2500,0,0.0,0);//traffic lights
}
void aPadVehicleGeneratorObjects(void)
{
	aPadObjects();
	create_mobile_mapobj(-1855959785,-3.0934,-4.725,-4.2500,0,0.0,4.725);//traffic lights
	create_mobile_mapobj(-1855959785,3.0934,-4.725,-4.2500,0,0.0,4.725);//traffic lights
	create_mobile_mapobj(-1855959785,-3.7792,3.9734,-4.2500,0,0.0,3.150);//traffic lights
	create_mobile_mapobj(-1855959785,3.7792,3.9734,-4.2500,0,0.0,0);//traffic lights
	create_mobile_mapobj(-1324211035,0,7.0815,-1.0811+0.970,0,0.0,0);//ramp
}
 
#pragma once

#define MAX_ACTIONPADS 3

enum ePadActions{
   // ACTION_SULTANRS_TELEPORT = 1,
	ACTION_VEHICLE_GENERATE = 2,
	ACTION_PAYNSPRAY = 3,
	ACTION_TELEPORT_COORD_GROUND_X_Y = 4,
};


typedef struct _action_pads{
	int actionPadObj;
	int action; //0 by default
	int veh_model_to_generate; //0 by default so we can generate whatever vehicle easily, one var :P
	float TeleportCoordGroundX;
	float TeleportCoordGroundY; //X and Y both set to 1337 on startup, when we delete actionpads, we have to set the action pad index's coords to 1337 too for safety..
} action_pads;
action_pads aPads[MAX_ACTIONPADS];  //var usage = (5 x MAX_ACTIONPADS)


/*

void telepad_saved1(void){
	create_mobile_mapbase(pPlayer,0xDD28B247,0,4,0, true, false);//blue cube 
	create_mobile_mapbase(pPlayer,0x4F3E5681,0, -0.970,0, true, false);//1st object all the others are attached to
	create_mobile_mapobj(0x55CA3AE6,1, 0, 0.5483, 3.150,0,0);//SPARK
	create_mobile_mapobj(0x4F3E5681,-3.1206, 0, -2.2700, 0,1.575,0);//Grid1
	create_mobile_mapobj(0x4F3E5681,3.1206, 0, -2.2700, 0,4.725,0);//grid2
	create_mobile_mapobj(0x4F3E5681,0, 4.500, -3.7767, 1.575,0,0);//grid3
}
void telepad_saved2(void){
	create_mobile_mapbase(pPlayer,0x2718C626,0,4,0, true, false);//red cube
	create_mobile_mapbase(pPlayer,0x4F3E5681,0, -0.970,0, true, false);//1st object all the others are attached to
	create_mobile_mapobj(0x55CA3AE6,1, 0, 0.5483, 3.150,0,0);//SPARK
	create_mobile_mapobj(0x4F3E5681,-3.1206, 0, -2.2700, 0,1.575,0);//Grid1
	create_mobile_mapobj(0x4F3E5681,3.1206, 0, -2.2700, 0,4.725,0);//grid2
	create_mobile_mapobj(0x4F3E5681,0, 4.500, -3.7767, 1.575,0,0);//grid3	
}

*/


//Create_Actionpad(pad_action, &padID);

					//use an ePadActions,    //set to 0 if not used,   // use 1337 if not used           //use 1337 if not used
void Create_Actionpad(const int PadAction, const int model_to_generate, float teleportCoordsForPadX, float teleportCoordsForPadY)  //Created at pPlayer coords
{
	//this drops below pPlayer
	int i,free_aPad_Index = -1;
	for(i = 0; i < MAX_ACTIONPADS; i++)
	{
		if(DOES_OBJECT_EXIST(aPads[i].actionPadObj)) continue;
		free_aPad_Index = i;
		break;
	}
	char * buffer[32];
	if(free_aPad_Index == -1)
	{
		Strcpy(buffer, "~b~MD: ~s~The limit of ");
		itoa( MAX_ACTIONPADS, buffer);
		Strcat(buffer, " action pads has been reached.");
		Alert(buffer,false);
		return;
	}
	//REQUEST_MODEL(0x4F3E5681); // gamegrid 
	
	REQUEST_MODEL(0x4F3E5681);
	aPads[free_aPad_Index].action = PadAction;
	aPads[free_aPad_Index].veh_model_to_generate = model_to_generate;
	aPads[free_aPad_Index].TeleportCoordGroundX = teleportCoordsForPadX;
	aPads[free_aPad_Index].TeleportCoordGroundY = teleportCoordsForPadY;
	float x,y,z,h;
	if(IS_CHAR_IN_ANY_CAR(pPlayer))
	{
		int tmp_veh, tmp_driver;
		GET_CAR_CHAR_IS_USING(pPlayer,&tmp_veh);
		GET_DRIVER_OF_CAR(tmp_veh,&tmp_driver);
		if(tmp_driver == pPlayer)
		{
			SET_CAR_FORWARD_SPEED(tmp_veh,0);
		}
		else
		{
			REMOVE_CHAR_FROM_CAR_MAINTAIN_POSITION(pPlayer,tmp_veh);
		}
	}
	while(!HAS_MODEL_LOADED(0x4F3E5681)) WAIT(0); //gamegrid
		//create object here
	GET_CHAR_COORDINATES(pPlayer,&x,&y,&z);
	GET_GROUND_Z_FOR_3D_COORD(x,y,z,&z); //no need for attempts here as you're loaded here and not teleporting / NO ISSUES
	GET_CHAR_HEADING(pPlayer,&h);
	CREATE_OBJECT(0x4F3E5681,x,y,z+0.05f,&aPads[free_aPad_Index].actionPadObj,true);
	FREEZE_OBJECT_POSITION(aPads[free_aPad_Index].actionPadObj,true);
	SET_OBJECT_INVINCIBLE(aPads[free_aPad_Index].actionPadObj,true);
	SET_OBJECT_HEADING(aPads[free_aPad_Index].actionPadObj,h);
	SET_OBJECT_COLLISION(aPads[free_aPad_Index].actionPadObj, false);
	SET_OBJECT_VISIBLE(aPads[free_aPad_Index].actionPadObj, false); 
	int NetID;
	GET_NETWORK_ID_FROM_OBJECT(aPads[free_aPad_Index].actionPadObj,&NetID);
	SET_NETWORK_ID_CAN_MIGRATE(NetID,false);
	MARK_MODEL_AS_NO_LONGER_NEEDED(0x4F3E5681);
	if(PadAction == ACTION_PAYNSPRAY)
	{
		aPadPayNSprayObjects();
	}
	else if(PadAction == ACTION_VEHICLE_GENERATE)
	{
		aPadVehicleGeneratorObjects();
	}
	else if(PadAction == ACTION_TELEPORT_COORD_GROUND_X_Y)
	{
		aPadObjects();
		//create_mobile_mapbase(pPlayer,0x2718C626,0,4,0, true, false);//red cube
		//SPAWN CUBE WITH COLOUR BASED ON ACTION PAD INDEX :P
		
		/*
		void telepad_saved2(void){
		create_mobile_mapbase(pPlayer,0x2718C626,0,4,0, true, false);//red cube
		
		void telepad_saved1(void){
		create_mobile_mapbase(pPlayer,0xDD28B247,0,4,0, true, false);//blue cube 
		*/
	}
		Strcpy(buffer, "~b~MD Actionpad ");
		itoa( (free_aPad_Index + 1), buffer);
		Strcat(buffer, ": ~s~Has been created.");
		Alert(buffer,false);
}

void Actionpad_looped(void)
{
	int i,j,f,n;
	float aPadCornerOffsetX[2];
	aPadCornerOffsetX[0] = 3.1204f;
	aPadCornerOffsetX[1] = -3.1284f;
	float aPadCornerOffsetY[2];
	aPadCornerOffsetY[0] = 4.6515f;
	aPadCornerOffsetY[1] = -4.6273f;
	
	float aPadCornerWorldCoordX[2];
	float aPadCornerWorldCoordY[2];
	float aPadx,aPady,aPadz,z;
	for(i = 0; i < MAX_ACTIONPADS; i++)
	{
		if(!DOES_OBJECT_EXIST(aPads[i].actionPadObj))
		{
			aPads[i].TeleportCoordGroundX = 1337;
			aPads[i].TeleportCoordGroundY = 1337;
		//aPads[i].TeleportCoordGroundZ //if it causes issues i'll add this
			aPads[i].veh_model_to_generate = 0;
			aPads[i].action = 0;
			aPads[i].actionPadObj = 0; //reset
			continue;
		}
		GET_OBJECT_COORDINATES(aPads[i].actionPadObj,&aPadx,&aPady,&aPadz);
		for(j = 0; j < 2; j++)
		{
			GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS(aPads[i].actionPadObj,aPadCornerOffsetX[j],aPadCornerOffsetY[j],0,&aPadCornerWorldCoordX[j],&aPadCornerWorldCoordY[j],&z);
		}
		int tmp_ped,tmp_veh,tmp_driver;
		float tmp_x,tmp_y,tmp_z;
		for(f = 0; f < MAX_PLAYERS; f++)
		{
			if(Player_Display_Selection(f)) continue; //contains PLAYER_HAS_CHAR check -- NO
			GET_PLAYER_CHAR(f,&tmp_ped);
			if(IS_CHAR_IN_ANY_CAR(tmp_ped))
			{
				GET_CAR_CHAR_IS_USING(tmp_ped,&tmp_veh);
				GET_DRIVER_OF_CAR(tmp_veh,&tmp_driver);
				if(tmp_driver == tmp_ped) //Player is driving
				{
					if(!IS_CAR_IN_AREA_2D(tmp_veh,aPadCornerWorldCoordX[0],aPadCornerWorldCoordY[0],aPadCornerWorldCoordX[1],aPadCornerWorldCoordY[1],false)) continue;
					GET_CAR_COORDINATES(tmp_veh,&tmp_x,&tmp_y,&tmp_z);
					int distance;
					GET_DISTANCE_BETWEEN_COORDS_3D(aPadx,aPady,aPadz,tmp_x,tmp_y,tmp_z,&distance);
					if(distance > 7) continue;
					int netID;
					GET_NETWORK_ID_FROM_VEHICLE(tmp_veh,&netID);
					REQUEST_CONTROL_OF_NETWORK_ID(netID);
					if(!HAS_CONTROL_OF_NETWORK_ID(netID) || aPads[i].action == 0) continue;	//if no control or action not defined (don't use 0)
					//WE NOW HAVE CONTROL OF PLAYERS CAR AND THEY ARE ON THE ACTION PAD
					char * buffer[32];
						Strcpy(buffer, "~b~MD ActionPad "); //16
						itoa( (i + 1), buffer); //17
						Strcat(buffer, ": ~COL_NET_"); //11 + 17 = 28
						itoa( (f + 1), buffer); //30
						Strcat(buffer, "~"); //31
						Strcat(buffer,GET_PLAYER_NAME(f)); //46
					
					if(aPads[i].action == ACTION_VEHICLE_GENERATE)
					{
						if(aPads[i].veh_model_to_generate != 0 && IS_MODEL_IN_CDIMAGE(aPads[i].veh_model_to_generate)) //Hash has been set + Model is in users image.
						{
							if(!HAS_MODEL_LOADED(aPads[i].veh_model_to_generate))
							{
								REQUEST_MODEL(aPads[i].veh_model_to_generate);
								continue;
							}
							DELETE_CAR(&tmp_veh);
							float spawn_x,spawn_y,spawn_z;
							int spawned_veh;
							GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS(aPads[i].actionPadObj,0,4,0,&spawn_x, &spawn_y, &spawn_z);
							CREATE_CAR(aPads[i].veh_model_to_generate,spawn_x,spawn_y,spawn_z + 5, &spawned_veh, true);
							REQUEST_COLLISION_AT_POSN(spawn_x,spawn_y,spawn_z + 5);
							float h;
							GET_OBJECT_HEADING(aPads[i].actionPadObj,&h);
							SET_CAR_HEADING(spawned_veh,h);
							int rand[4],n;
							for(n = 0; n < 4; n++)
							{
								GENERATE_RANDOM_INT_IN_RANGE(0,134,&rand[n]);
							}	
							CHANGE_CAR_COLOUR(spawned_veh,rand[0],rand[1]);
							SET_EXTRA_CAR_COLOURS(spawned_veh,rand[2],rand[3]);
							SET_CAR_CAN_BE_DAMAGED(spawned_veh,false); 
							SET_CAR_CAN_BE_VISIBLY_DAMAGED(spawned_veh,false); 
							SET_CAN_BURST_CAR_TYRES(spawned_veh,false); //can make a var for Actionpad_Generate_InvincibleVehs
							SET_CAR_STRONG(spawned_veh,true);
							Strcat(buffer, " ~s~used the ");
							Strcat(buffer, GET_STRING_FROM_TEXT_FILE(GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(aPads[i].veh_model_to_generate)));
							Strcat(buffer, " generator.");
							
						}
					}
					else if(aPads[i].action == ACTION_PAYNSPRAY)
					{
						int rand[4];
						for(n = 0; n < 4; n++)
						{
							GENERATE_RANDOM_INT_IN_RANGE(0,134,&rand[n]);
						}
						CHANGE_CAR_COLOUR(tmp_veh,rand[0],rand[1]);
						SET_EXTRA_CAR_COLOURS(tmp_veh,rand[2],rand[3]);
						GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(tmp_ped, 0, -8, 0 ,&tmp_x,&tmp_y,&tmp_z);
						SET_CAR_COORDINATES(tmp_veh,tmp_x, tmp_y, tmp_z); //their heading shouldn't change so no need to grab it
						Strcat(buffer, " ~s~used the Pay'NSpray."); //24 + 46 = 70
					}
					else if(aPads[i].action == ACTION_TELEPORT_COORD_GROUND_X_Y)
					{
						if(aPads[i].TeleportCoordGroundX != 1337 && aPads[i].TeleportCoordGroundY != 1337)
						{
							float ground;
							GET_GROUND_Z_FOR_3D_COORD(aPads[i].TeleportCoordGroundX,aPads[i].TeleportCoordGroundY,50,&ground);
							SET_CAR_FORWARD_SPEED(tmp_veh,0); //stop net control fucking them up
							SET_CAR_COORDINATES(tmp_veh,aPads[i].TeleportCoordGroundX,aPads[i].TeleportCoordGroundY,ground);
							Strcat(buffer, " ~s~was teleported to ~r~X: ~s~"); //78
							itoa((int)aPads[i].TeleportCoordGroundX, buffer); //max 5 chars?  //83
							Strcat(buffer, " ~r~Y: ~s~"); //93
							itoa((int)aPads[i].TeleportCoordGroundY, buffer); //5 //might just get away with this
						}
					}
					
					if(aPads[i].action > 1) //0 not used & 1 not defined currently
					{
						Alert(buffer, false);
					}
				}
				else
				{
					continue;
				}
			}
			else
			{
				continue;
			}
		}
	}
}

/*
if(DOES_OBJECT_EXIST(SultanRSGenerator_obj)){ //ACTIONPAD OBJECT
		//DEFINING ACTIONPAD
			int i,tmp,tmp_veh,tmp_vehNetId;
			float x,y,z,x2,y2,z2,h;
			float tmp_x,tmp_y,tmp_z;
			float mobile_obj_corner_1_x,mobile_obj_corner_2_x,mobile_obj_corner_1_y,mobile_obj_corner_2_y;
			float distance;
				GET_OBJECT_COORDINATES(SultanRSGenerator_obj,&x2,&y2,&z2);
				float ap_obj;
                 GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS(SultanRSGenerator_obj,3.1204f,4.6515f,0,&mobile_obj_corner_1_x,&mobile_obj_corner_1_y,&ap_obj);
			     GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS(SultanRSGenerator_obj,-3.1284f,-4.6273f,0,&mobile_obj_corner_2_x,&mobile_obj_corner_2_y,&ap_obj);
		//SCAN PLAYERS
		for(i=0;i<=15;i++){
			if(!IS_NETWORK_PLAYER_ACTIVE(i)) continue;
				GET_PLAYER_CHAR(i,&tmp);
			if(!DOES_CHAR_EXIST(tmp)) continue;
			if(!is_driving(tmp)) continue;
				GET_CAR_CHAR_IS_USING(tmp,&tmp_veh);
			if(!IS_CAR_IN_AREA_2D(tmp_veh,mobile_obj_corner_1_x,mobile_obj_corner_1_y,mobile_obj_corner_2_x,mobile_obj_corner_2_y,false)) continue;
				GET_CAR_COORDINATES(tmp_veh,&x,&y,&z);
				GET_CHAR_COORDINATES(tmp,&tmp_x,&tmp_y,&tmp_z);
				GET_DISTANCE_BETWEEN_COORDS_3D(x,y,z,x2,y2,z2,&distance);
			if(distance > 5) continue;

			//Alert_Two(GET_PLAYER_NAME(i),"~BLIP_76~~COL_NET_4~was detected on the actionpad~n~~w~Attemting to get control of NET ID"); 
			GET_NETWORK_ID_FROM_VEHICLE(tmp_veh,&tmp_vehNetId);
			REQUEST_CONTROL_OF_NETWORK_ID(tmp_vehNetId);
			if(!HAS_CONTROL_OF_NETWORK_ID(tmp_vehNetId)) continue;					
			if(!IS_CHAR_IN_ANY_HELI(tmp)){
			float Cargen_x, Cargen_y, Cargen_z, Cargen_h;// Cargen_zz;
			float TP_out_x, TP_out_y, TP_out_z, TP_out_h;
			uint carmodel,tmp_carmodel;
			GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(tmp, 10, 0, 0 ,&TP_out_x,&TP_out_y,&TP_out_z);
			GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(tmp, 0, 0, 0 ,&Cargen_x,&Cargen_y,&Cargen_z);
			//GET_GROUND_Z_FOR_3D_COORD(Cargen_x, Cargen_y, Cargen_z, &Cargen_zz);
			GET_CHAR_HEADING(tmp,&Cargen_h);
			REQUEST_MODEL(MODEL_SULTANRS);
				while(!HAS_MODEL_LOADED(MODEL_SULTANRS)) WAIT(0);
				GET_CAR_MODEL(tmp_veh, &tmp_carmodel);
				if(tmp_carmodel == MODEL_SULTANRS){
				SET_CAR_COORDINATES(tmp_veh,TP_out_x, TP_out_y, TP_out_z);
				SET_CAR_HEADING(tmp_veh,Cargen_h);
				}
				else{
				Vehicle vehicle;
				clear_objects_on_car(tmp_veh);
				DELETE_CAR(&tmp_veh);
				MARK_CAR_AS_NO_LONGER_NEEDED(&tmp_veh);
				CREATE_CAR(MODEL_SULTANRS,Cargen_x ,Cargen_y,Cargen_z,&vehicle,true);
				SET_CAR_COORDINATES_NO_OFFSET(vehicle, Cargen_x, Cargen_y, Cargen_z);
				SET_CAR_HEADING(vehicle,Cargen_h);
				FREEZE_CAR_POSITION(vehicle, false);
				MARK_MODEL_AS_NO_LONGER_NEEDED(MODEL_SULTANRS);
				GET_CAR_MODEL(vehicle, &carmodel);
				int colours[14],rand;
				colours[0] = 128; //yellow
				colours[1] = 120; //cream
				colours[2] = 107; //brown
				colours[3] = 59; //green
				colours[4] = 132; //yellow
				colours[5] = 129; //lightblue
				colours[6] = 125; //pink
				colours[7] = 135; //white
				colours[8] = 30; //red
				colours[9] = 46; 
				colours[10] = 65; //blue
				colours[11] = 71; //blue
				colours[12] = 76; //blue
				colours[13] = 103; //
				GENERATE_RANDOM_INT_IN_RANGE(0,13,&rand);
				if(carmodel == MODEL_SULTANRS){
					CHANGE_CAR_COLOUR(vehicle,0,colours[rand]); 
					SET_EXTRA_CAR_COLOURS(vehicle,colours[rand],colours[rand]);
				}
				else{
					int dick;
					GENERATE_RANDOM_INT_IN_RANGE(0,13,&dick);
					CHANGE_CAR_COLOUR(vehicle,colours[rand],colours[dick]);
					int cock;
					GENERATE_RANDOM_INT_IN_RANGE(0,13,&rand);
					GENERATE_RANDOM_INT_IN_RANGE(0,13,&cock);
					SET_EXTRA_CAR_COLOURS(vehicle,colours[rand],colours[cock]);
				}
				Alert_Two(GET_PLAYER_NAME(i),"~COL_NET_1~~BLIP_76~used the Sultan RS Generator",false);
				SET_CAR_COLLISION(vehicle, true);
				SET_CAR_CAN_BE_DAMAGED(vehicle, !damage);
				SET_CAR_CAN_BE_VISIBLY_DAMAGED(vehicle, !damage);
				SET_CAN_BURST_CAR_TYRES(vehicle,!damage);
				SET_CAR_STRONG(vehicle,!damage);
				
				int j;
				for(j=0;j<=9;j++){
					TURN_OFF_VEHICLE_EXTRA(vehicle,j,false);
				}		
				SWITCH_CAR_SIREN(vehicle,siren);
				SET_CAN_BURST_CAR_TYRES(vehicle,false);
				}
			}
			else{
			Alert_Two(GET_PLAYER_NAME(i),"~COL_NET_4~~BLIP_76~detected on actionpad using a heli~n~~w~Player is now burning to death!",false);
			clear_objects_on_car(tmp_veh);
			DELETE_CAR(&tmp_veh);
			MARK_CAR_AS_NO_LONGER_NEEDED(&tmp_veh);
			START_CHAR_FIRE(tmp);
			}	
		}
	}
*/

/*
void Actionpad_teleport_function(uint function_object,float tx,float ty,float tz){
	if(DOES_OBJECT_EXIST(function_object)){ //ACTIONPAD OBJECT
		//DEFINING ACTIONPAD
			int i,tmp,tmp_veh,tmp_vehNetId;
			float x,y,z,x2,y2,z2,h;
			float mobile_obj_corner_1_x,mobile_obj_corner_2_x,mobile_obj_corner_1_y,mobile_obj_corner_2_y;
			float distance;
				GET_OBJECT_COORDINATES(function_object,&x2,&y2,&z2);
				float ap_obj;
                 GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS(function_object,3.1204f,4.6515f,0,&mobile_obj_corner_1_x,&mobile_obj_corner_1_y,&ap_obj);
			     GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS(function_object,-3.1284f,-4.6273f,0,&mobile_obj_corner_2_x,&mobile_obj_corner_2_y,&ap_obj);
		//SCAN PLAYERS
		for(i=0;i<MAX_PLAYERS;i++){
			if(!IS_NETWORK_PLAYER_ACTIVE(i)) continue;
				GET_PLAYER_CHAR(i,&tmp);
			if(!DOES_CHAR_EXIST(tmp)) continue;
			if(!is_driving(tmp)) continue;
				GET_CAR_CHAR_IS_USING(tmp,&tmp_veh);
			if(!IS_CAR_IN_AREA_2D(tmp_veh,mobile_obj_corner_1_x,mobile_obj_corner_1_y,mobile_obj_corner_2_x,mobile_obj_corner_2_y,false)) continue;
				GET_CAR_COORDINATES(tmp_veh,&x,&y,&z);
				GET_DISTANCE_BETWEEN_COORDS_3D(x,y,z,x2,y2,z2,&distance);
			if(distance > 5) continue;

				Alert_Two(GET_PLAYER_NAME(i),"~BLIP_76~~COL_NET_4~was detected on the teleporter~n~~w~Attemting to get control of NET ID",false); 
			GET_NETWORK_ID_FROM_VEHICLE(tmp_veh,&tmp_vehNetId);
				REQUEST_CONTROL_OF_NETWORK_ID(tmp_vehNetId);
			if(!HAS_CONTROL_OF_NETWORK_ID(tmp_vehNetId)) continue;					
			if(!IS_CHAR_IN_ANY_HELI(tmp)){
			SET_CAR_COORDINATES(tmp_veh,tx,ty,tz);//do the function
			
			if(tx == -970.6938)Alert_Two(GET_PLAYER_NAME(i),"~COL_NET_1~~BLIP_76~is teleporting to Sultan RS Spawn",false);
			if(tx == 2614.2830)Alert_Two(GET_PLAYER_NAME(i),"~COL_NET_1~~BLIP_76~is teleporting to Devils Cloud",false);
			if(tx == save_x1)Alert_Two(GET_PLAYER_NAME(i),"~COL_NET_1~~BLIP_76~is teleporting to Saved Location~y~ 1",false);
			if(tx == save_x2)Alert_Two(GET_PLAYER_NAME(i),"~COL_NET_1~~BLIP_76~is teleporting to Saved Location~y~ 2",false);
			
			FIX_CAR(tmp_veh);
			//if(tmp != pPlayer)change_car_color(tmp_veh,0,30,30,30);//devilscolors --> make this optional
			GET_CAR_HEADING(tmp_veh, &h);
			SET_CAR_HEADING(tmp_veh,0);
			}
			else{
			Alert_Two(GET_PLAYER_NAME(i),"~COL_NET_4~~BLIP_76~tried to teleport using a heli~n~~w~Player is now burning to death!",false);
			clear_objects_on_car(tmp_veh);
			DELETE_CAR(&tmp_veh);
			MARK_CAR_AS_NO_LONGER_NEEDED(&tmp_veh);
			START_CHAR_FIRE(tmp);
			}	
		}
	} 	
}
*/
/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version V7 ULTIMATE
 * @ DEV TEAM V7- DEVILSDESIGN
 */

 /**
 How to use : 
 A. Create a function for the actionpad spawn // set an object
			1. Teleporter Mobile (using the grids + spark = 6 objects!) //eh? -- Nathan
			2. Teleporter on fixed place (using the grids + spark = 6 objects!)
			3. Actionpad doing a function  (undefined) 
 
 */
#pragma once

/**Teleporter needs*/



/*
float save_x1 = 1234.5678, save_y1 = 1234.5678, save_z1 = 1234.5678; //Telepad 1
float save_x2 = 8765.4321, save_y2 = 8765.4321, save_z2 = 8765.4321; //Telepad 2
float custom_float_change;
Object savedlocation1;//used for mobile teleport with saved coords
Object savedlocation2;
//Object Waypoint_location;
Object greencloud_obj;//used for devilscloud ramp
Object SultanRS_Teleport_obj;// used for test teleporter
Object PayNSpray_obj;
Object SultanRSGenerator_obj;
Object CometGenerator_obj;
Object SabreGTGenerator_obj;
Object SentinelGenerator_obj;
Object FbiGenerator_obj;
Object PatriotGenerator_obj;
*/
void content_builder_setup(void){
	MENU_SUB_HEADER = "Content Builder";
	AddSubMenu("~PAD_RIGHT~ Spawn 8 Vehicles Around You"); 	//1
	AddSubMenu("~PAD_RIGHT~ Custom & Funny Vehicles");		//2
	AddSubMenu("~PAD_RIGHT~ Buildings Near You");			//3
	AddSubMenu("~PAD_RIGHT~ MapMod Builder On The Fly");	//4
	AddSubMenu("~PAD_RIGHT~ Spawn MapMods");				//5
	AddSubMenu("~PAD_RIGHT~ Special Effects");				//6
	AddSubMenu("~PAD_RIGHT~ Object Rotations");				//7
	AddSubMenu("~PAD_RIGHT~ Fun Stuff - Devils Favourites"); //AddSubMenu("~PAD_RIGHT~ Give mods to others");			//8  // Change this to fun stuff
	AddSubMenu("~PAD_RIGHT~ Blocked / Restricted Areas");			    //9
	AddSubMenu("~PAD_RIGHT~ AirStrikes");					//10
	AddSubMenu("~PAD_RIGHT~ Mobile Teleporters - Non Modders");//11
	AddSubMenu("~PAD_RIGHT~ ActionPads - Non Modders");		//12
	AddSubMenu("~PAD_RIGHT~ Delete/Clear Options");			//13	
}

void actionpad_setup(void){
	MENU_SUB_HEADER = "Actionpads";
	AddFunction("~BLIP_52~ Pay'N Spray");				//1
	AddFunction("~BLIP_52~ Sultan RS Generator");		//2
	AddFunction("~BLIP_52~ Comet Generator");			//3
	AddFunction("~BLIP_52~ Sabre GT Generator");		//4
	AddFunction("~BLIP_52~ Sentinel XS Generator");	//5
	AddFunction("~BLIP_52~ FBI Buffalo Generator");	//6
	AddFunction("~BLIP_52~ Patriot Generator");		//7
}

