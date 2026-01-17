/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version V7 ULTIMATE
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */
 #pragma once


void create_mobile_mapobj(int model,float ox, float oy, float oz, float rx,float ry,float rz){	//Working together with BASE !!! Attaching objects to Hook
	Object mapextra_obj;
	if (IS_MODEL_IN_CDIMAGE(model)){
	REQUEST_MODEL(model);
	while (!HAS_MODEL_LOADED(model))WAIT(0);
		CREATE_OBJECT_NO_OFFSET(model, 0, 0, 0, &mapextra_obj, true);
		MARK_MODEL_AS_NO_LONGER_NEEDED(model);
		
		FREEZE_OBJECT_POSITION(mapextra_obj, true);
		SET_OBJECT_LIGHTS(mapextra_obj, true);
		SET_OBJECT_VISIBLE(mapextra_obj, true);
		SET_OBJECT_INVINCIBLE(mapextra_obj, true);
		
		ATTACH_OBJECT_TO_OBJECT(mapextra_obj, mapbase_obj, 0, ox,oy,oz,rx,ry,rz);
		SET_OBJECT_COLLISION(mapextra_obj, true);
		block_net_control_of_object(mapextra_obj);
	}
}

void GIVE_HEALTH_TO_CHAR(const int Player_PED){
	Pickup healthpack;
	float Player_PED_GroundZ;
	float Player_PED_x, Player_PED_y, Player_PED_z;
	Blip BlipPickup;
	REMOVE_ALL_PICKUPS_OF_TYPE(2);
	GET_CHAR_COORDINATES(Player_PED, &Player_PED_x, &Player_PED_y, &Player_PED_z);
	GET_GROUND_Z_FOR_3D_COORD(Player_PED_x, Player_PED_y, Player_PED_z, &Player_PED_GroundZ);
	CREATE_PICKUP(1069950328, 2, Player_PED_x, Player_PED_y, Player_PED_GroundZ, &healthpack, false);
	ADD_BLIP_FOR_PICKUP(healthpack, &BlipPickup);
	WAIT(200);
	REMOVE_PICKUP(healthpack);
}

void Spawn_Pickup(Ped PlayerPed,Model SpawnPickup_model,Pickup PickupInt,uint SpawnPickup_type ){
	REMOVE_ALL_PICKUPS_OF_TYPE(2);
	
	Blip BlipPickup;
	float PlayerPed_x, PlayerPed_y, PlayerPed_z;
	GET_CHAR_COORDINATES(PlayerPed, &PlayerPed_x, &PlayerPed_y, &PlayerPed_z);
	if(!IS_ANY_PICKUP_AT_COORDS(PlayerPed_x, PlayerPed_y, PlayerPed_z)){
	CREATE_PICKUP(SpawnPickup_model, SpawnPickup_type, PlayerPed_x, PlayerPed_y+1, PlayerPed_z, &PickupInt, false);
	ADD_BLIP_FOR_PICKUP(PickupInt, &BlipPickup);
	/*
	create_map_obj(1005973733, 0.0577, -0.1013, -2.5672, 0, 4.200, 0,0,0, 0);
	*/
	}
	
	if(HAS_PICKUP_BEEN_COLLECTED(PickupInt)){
		Alert("Pickup has been collected",false);
	}
}


void create_object_vehicle(uint object_vehicle, int visible){// FUNCTION TO CREATE OBJECT VEHICLE BASE
	
	REQUEST_MODEL(object_vehicle);
    MD_Delete_Objects_On_Vehicle(iPlayer);	
	while (!HAS_MODEL_LOADED(object_vehicle))WAIT(0);
	float curHeading, curX, curY, curZ, cGroundZ, curSpeed;
	if (IS_CHAR_IN_ANY_CAR(pPlayer)){
		GET_CAR_CHAR_IS_USING(pPlayer, &object_veh);
		GET_CAR_SPEED(object_veh, &curSpeed);
		GET_CAR_HEADING(object_veh, &curHeading);
		GET_CAR_COORDINATES(object_veh, &curX, &curY, &curZ);
		DELETE_CAR(&object_veh);
		MARK_CAR_AS_NO_LONGER_NEEDED(&object_veh);
	}
	else{
		GET_CHAR_HEADING(pPlayer, &curHeading);
		GET_CHAR_COORDINATES(pPlayer, &curX, &curY, &curZ);
	}
	CREATE_CAR(object_vehicle, curX, curY, curZ, &object_veh, true);
	while (!DOES_VEHICLE_EXIST(object_veh))WAIT(0);
	SET_CAR_HEADING(object_veh, curHeading);
	SET_CAR_COORDINATES(object_veh, curX, curY, curZ);
	SET_CAR_VISIBLE(object_veh,visible);
	SET_HAS_BEEN_OWNED_BY_PLAYER(object_veh, true);
	SET_NEEDS_TO_BE_HOTWIRED(object_veh, false);
	SET_CAR_ENGINE_ON(object_veh, true, true);	
	if(GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE)){
		SET_CAR_CAN_BE_DAMAGED(object_veh,false);
		SET_CAR_CAN_BE_VISIBLY_DAMAGED(object_veh,false);
        SET_CAN_BURST_CAR_TYRES(object_veh,false);
	}
	if(GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_ALL_UPGRADES)){
		int i;
		for(i=0;i<=9;i++){
		TURN_OFF_VEHICLE_EXTRA(object_veh, i, false);
		}
	}
	if(GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_DIRT)){
		SET_VEHICLE_DIRT_LEVEL(object_veh,15.9);
		WASH_VEHICLE_TEXTURES(object_veh,255);
	}
	else{
		SET_VEHICLE_DIRT_LEVEL(object_veh,0);
		WASH_VEHICLE_TEXTURES(object_veh,0);
	}
	WARP_CHAR_INTO_CAR(pPlayer, object_veh);
	if (IS_THIS_MODEL_A_HELI(object_vehicle))
		SET_HELI_BLADES_FULL_SPEED(object_veh);
	MARK_MODEL_AS_NO_LONGER_NEEDED(object_vehicle);
	LOCK_CAR_DOORS(object_veh, VEHICLE_DOOR_UNLOCKED);
	if (IS_INTERIOR_SCENE()){
		GET_GROUND_Z_FOR_3D_COORD(curX, curY, curZ, &cGroundZ);
		SET_CHAR_COORDINATES_NO_OFFSET(pPlayer, curX, curY, cGroundZ);
		LOAD_SCENE(curX, curY, curZ);
	}
	if (curSpeed != 0)
		SET_CAR_FORWARD_SPEED(object_veh, curSpeed);
	return;
}

void CreateMapObj(const int model, float x, float y, float z, float h, float qx, float qy, float qz, float qw, bool dynamic, bool NO_OFFSET)
{
	Object object;
    if(IS_MODEL_IN_CDIMAGE(model))
    {
    	REQUEST_MODEL(model);
        while(!HAS_MODEL_LOADED(model)) WAIT(0); 
        if(NO_OFFSET)
        {
        	CREATE_OBJECT_NO_OFFSET(model, x, y, z, &object, true);
        }
        else
        {
        	CREATE_OBJECT(model, x, y, z, &object, true);
        }
		MARK_MODEL_AS_NO_LONGER_NEEDED(model);
		SET_OBJECT_HEADING(object, h);
        SET_OBJECT_QUATERNION(object, qx, qy, qz, qw);
        SET_OBJECT_INVINCIBLE(object, true);
        SET_OBJECT_PROOFS(object, false, false, false, false, false);
        SET_OBJECT_VISIBLE(object, true);
        SET_OBJECT_LIGHTS(object, true);
        if (dynamic)
        {
        	SET_OBJECT_DYNAMIC(object, true);
        }
        else 
        {
        	FREEZE_OBJECT_POSITION(object, true);   
        }             
		WAIT(0);								
		if(In_Network)
		{
			int nvid;
            GET_NETWORK_ID_FROM_OBJECT(object, &nvid);
            SET_NETWORK_ID_CAN_MIGRATE(nvid, false);
        }
    }
}

void create_map_obj(const int model, float x, float y, float z, float h, float qx, float qy, float qz, float qw, bool dynamic){  ///temporary placeholder

	//TEMPORARY PLACEHOLDER, REPLACE create_map_obj with my new CreateMapObj instead of calling this when you get time
	CreateMapObj(model,x,y,z,h,qx,qy,qz,qw,dynamic,true);
}
void create_map_obj_offset(uint model, float x, float y, float z, float h, float qx, float qy, float qz, float qw, bool dynamic){  //OBJECTS ON FIXED POSITION
	//TEMPORARY PLACEHOLDER, REPLACE create_map_obj_offset with my new CreateMapObj instead of calling this when you get time
	CreateMapObj(model,x,y,z,h,qx,qy,qz,qw,dynamic,false);

}

void create_map_car(uint model,float x,float y,float z){  //CARPLACEMENTS ON FIXED POSITION
	float h;
	Vehicle actionpad_vehicle;
	if(IS_MODEL_IN_CDIMAGE(model)){
			GET_CHAR_HEADING(pPlayer,&h);
			REQUEST_MODEL(model);
			while(!HAS_MODEL_LOADED(model)) WAIT(0);
			CREATE_CAR(model,x,y+7,z+2,&actionpad_vehicle,true);
			SET_CAR_HEADING(actionpad_vehicle,h-180);				
			MARK_MODEL_AS_NO_LONGER_NEEDED(model);
			SET_CAR_COLLISION(actionpad_vehicle, false);
			SET_CAR_CAN_BE_DAMAGED(actionpad_vehicle,false);
		SET_CAR_CAN_BE_VISIBLY_DAMAGED(actionpad_vehicle,false);
		SET_CAN_BURST_CAR_TYRES(actionpad_vehicle,false);
		FREEZE_CAR_POSITION(actionpad_vehicle, true);
		int lockZ;
		GET_CAR_DOOR_LOCK_STATUS(actionpad_vehicle,&lockZ);
		if(lockZ == VEHICLE_DOOR_UNLOCKED){
		LOCK_CAR_DOORS(actionpad_vehicle,VEHICLE_DOOR_LOCKED_BOTH_SIDES);
		}
	}
	else Alert("~BLIP_76~ ~COL_NET_4~Error! ~w~Model missing from your CD image",false);	
	//PLAY_AUDIO_EVENT("FRONTEND_MENU_MP_SERVER_HIGHLIGHT");
}


void attach_admin_object_to_player(const int player, const int model,const int pedbone, float obj_x, float obj_y, float obj_z, float obj_rx, float obj_ry, float obj_rz, const int id){	
//TEMPORARY PLACEHOLDER (both of these functions are the exact same, WASTE OF SPACE!
	attach_object_to_player(player,model,pedbone,obj_x,obj_y,obj_z,obj_rx,obj_ry,obj_rz,id);
}

void change_car_color (int player, ColourIndex color1, ColourIndex color2, ColourIndex color3, ColourIndex color4){
	Vehicle vehicle;
	GET_CAR_CHAR_IS_USING(player, &vehicle);
	
	if(GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_UNIFIED_COLOUR)){
		CHANGE_CAR_COLOUR(vehicle, color1, color2);
		SET_EXTRA_CAR_COLOURS(vehicle, color3, color4);
	}
	else{  
		int rand;
		GENERATE_RANDOM_INT_IN_RANGE(0,134,&rand);
		CHANGE_CAR_COLOUR(vehicle,color1,rand);
		SET_EXTRA_CAR_COLOURS(vehicle,rand,rand); //done <3
	}
	
	WAIT(0);
	FIX_CAR(vehicle);
	SET_VEHICLE_DIRT_LEVEL(vehicle,0.0);	
}

void change_Netcar_color (Vehicle vehicle,int player, ColourIndex color1, ColourIndex color2, ColourIndex color3, ColourIndex color4)
{
	//TEMPORARY PLACEHOLDER (both of these functions are the exact same, WASTE OF SPACE!
	//I believe we already have functions for this no?
	change_car_color(player, color1, color2, color3, color4);
	
}

void clear_rotations(void){
    register int Rotation_Subject_ID;
	int i;
	for(i = 0; i < 3; i++){
		for(Rotation_Subject_ID = 0; Rotation_Subject_ID <= MAX_ROTATION_SUBJECTS -1; Rotation_Subject_ID++){
			if(!DOES_OBJECT_EXIST(Rotation_Subject_Handle))continue;
			if (DOES_CHAR_EXIST(Rotation_Subject[Rotation_Subject_ID]) &&  IS_PED_ATTACHED_TO_OBJECT(Rotation_Subject[Rotation_Subject_ID], Rotation_Subject_Handle)){			
				DELETE_CHAR(&Rotation_Subject[Rotation_Subject_ID]);			
			}
			else if (DOES_VEHICLE_EXIST(Rotation_Subject[Rotation_Subject_ID]) && IS_CAR_ATTACHED(Rotation_Subject[Rotation_Subject_ID])){
				DELETE_CAR(&Rotation_Subject[Rotation_Subject_ID]);				
			}	
			else if (DOES_OBJECT_EXIST(Rotation_Subject[Rotation_Subject_ID]) && IS_OBJECT_ATTACHED(Rotation_Subject[Rotation_Subject_ID])){
				DELETE_OBJECT(&Rotation_Subject[Rotation_Subject_ID]);			
			}	
		}
		WAIT(70);
	}
	SetBit(MD_Misc_OptionsBitSet,MD_MISC_ROTATIONS_LOOP,false);
	//Rotationsloop = false;	
	if(DOES_OBJECT_EXIST(Rotation_Subject_Handle))DELETE_OBJECT(&Rotation_Subject_Handle);	
}

/*
if(object == 0xD6E93FB5)continue;//V8 Object
if(object == 0xD1BBA26E)continue;//V81 Object
if(object == 0x3F15FE26)continue;//V11 Object
if(object == 0x2D295A4D)continue;//Spare Object
if(object == 0x3F15FE26)continue;//Spare Object
REQUEST_MODEL(0xF45AB5AE); // poolball 0xF45AB5AE
*/

void Create_Rotation(uint Player_ID, int model,float Subject_h,float Subject_x,float Subject_y, float height,float Angle_x,float Angle_y,float Angle_z,int id){
	if(PLAYER_HAS_CHAR(Player_ID)){	
		Ped Player_PED;
		if(!DOES_OBJECT_EXIST(Rotation_Subject_Handle)){ //Create it
			Model Handle_model = 0xF45AB5AE;
			REQUEST_MODEL(Handle_model); 
			while(!HAS_MODEL_LOADED(Handle_model))WAIT(0);		
			CREATE_OBJECT(Handle_model, 0.0, 0.0, 0.0, &Rotation_Subject_Handle, true);
			MARK_MODEL_AS_NO_LONGER_NEEDED(Handle_model);		 
			SET_OBJECT_VISIBLE(Rotation_Subject_Handle, true);
			GET_PLAYER_CHAR(Player_ID,&Player_PED);
			ATTACH_OBJECT_TO_PED (Rotation_Subject_Handle,Player_PED, 0.0,0.0, 0.0, -1, 0.0, 0.0, rotate_inc, 0);
			//block_net_control_of_object(Rotation_Subject_Handle);
			if(!MARK_OBJECT_FOR_NATHANS_PROTECTION(Rotation_Subject_Handle)) //net control set in my func
			{
				block_net_control_of_object(Rotation_Subject_Handle);
			}
			WAIT(50);
			SetBit(MD_Misc_OptionsBitSet,MD_MISC_ROTATIONS_LOOP,true);
			//Rotationsloop = true;
			Alert("Rotation base created",false);
		}
		if(IS_MODEL_IN_CDIMAGE(model) && DOES_OBJECT_EXIST(Rotation_Subject_Handle)){
			REQUEST_MODEL(model);
			while (!HAS_MODEL_LOADED(model))WAIT(0);
			if(IS_THIS_MODEL_A_VEHICLE(model)){
			CREATE_CAR(model,0.0,0.0,0.0,&Rotation_Subject[id],true);
			MARK_MODEL_AS_NO_LONGER_NEEDED(model);
			ATTACH_CAR_TO_OBJECT(Rotation_Subject[id], Rotation_Subject_Handle,1,Subject_x, Subject_y,height, Angle_x,Angle_y,Angle_z);
			SWITCH_CAR_SIREN(Rotation_Subject[id],true);
			}
			else if(IS_THIS_MODEL_A_PED(model)){			
			CREATE_CHAR(26, model, 0.0,0.0,0.0, &Rotation_Subject[id], true);
			MARK_MODEL_AS_NO_LONGER_NEEDED(model);
			SET_CHAR_RANDOM_COMPONENT_VARIATION(Rotation_Subject[id]);
			ATTACH_PED_TO_OBJECT(Rotation_Subject[id],Rotation_Subject_Handle,1,Subject_x, Subject_y,height,  Angle_x,Angle_y,1,1);
			}
			else{ 
			CREATE_OBJECT_NO_OFFSET(model, 0, 0, 0, &Rotation_Subject[id], true);
			MARK_MODEL_AS_NO_LONGER_NEEDED(model);
			FREEZE_OBJECT_POSITION(Rotation_Subject[id], true);
			SET_OBJECT_VISIBLE(Rotation_Subject[id], true);
			SET_OBJECT_LIGHTS(Rotation_Subject[id], true);
			SET_OBJECT_INVINCIBLE(Rotation_Subject[id], true);			
			ATTACH_OBJECT_TO_OBJECT(Rotation_Subject[id],Rotation_Subject_Handle,1,Subject_x, Subject_y,height, Angle_x, Angle_y ,Angle_z);			
			}
			//Block_Net_Control_Of_Entity(model,Rotation_Subject[id]);//	--> Make this turn false when detaching the cars	
		}
		else Alert("~BLIP_76~ ~COL_NET_4~Error! ~w~Model missing from your CD image",false); 
	}
	else Alert(Error_Char_Missing,false);
} 


void MC_Create_Player_Rotation ( uint Player_ID, int Rot_Object_Model, float heightz, float angle1, float angle2, float angle3, float angle4 ){			
		float hook = 0;			
		float diagonal = 0.66;
		Create_Rotation(Player_ID,Rot_Object_Model,angle4, Rotation_Distance ,hook,heightz,angle1,angle2,angletest1,0);
		Create_Rotation(Player_ID,Rot_Object_Model,angle4,-Rotation_Distance,hook,heightz,angle1 ,angle2,angletest2,1);	
		Create_Rotation(Player_ID,Rot_Object_Model,angle4,hook	,Rotation_Distance,heightz,angle1 ,angle2,angletest3,2);	
		Create_Rotation(Player_ID,Rot_Object_Model,angle4,hook	,-Rotation_Distance,heightz,angle1,angle2,angletest4,3);			
		Create_Rotation(Player_ID,Rot_Object_Model,angle4,-Rotation_Distance*diagonal,-Rotation_Distance*diagonal,heightz,angle1 ,angle2,angletest5,4);
		Create_Rotation(Player_ID,Rot_Object_Model,angle4, Rotation_Distance*diagonal, Rotation_Distance*diagonal,heightz,angle1 ,angle2,angletest6,5);
		Create_Rotation(Player_ID,Rot_Object_Model,angle4,-Rotation_Distance*diagonal, Rotation_Distance*diagonal,heightz,angle1,angle2 ,angletest7,6);
		Create_Rotation(Player_ID,Rot_Object_Model,angle4, Rotation_Distance*diagonal,-Rotation_Distance*diagonal,heightz,angle1 ,angle2,angletest8,7);	
} 
 
/**Rotation loop**/ 
void MC_Creation_Loop (void){
	register int NetPlayer_ID;
	int Rotation_Subject_ID;
	Ped NetPlayer_Char;
	Vehicle Rotation_Vehicle;
	float Driving_x;
	if(GetBit(MD_Misc_OptionsBitSet,MD_MISC_ROTATIONS_LOOP) && DOES_OBJECT_EXIST(Rotation_Subject_Handle)){
		if (rotate_inc >= 6.3f)rotate_inc = 0.05f;
		else rotate_inc += Rotation_Speed;
		for(NetPlayer_ID = 0;NetPlayer_ID < MAX_PLAYERS; NetPlayer_ID++){
			if(Player_Display_Selection(NetPlayer_ID))continue;
			GET_PLAYER_CHAR(NetPlayer_ID,&NetPlayer_Char);
			if(!DOES_CHAR_EXIST(NetPlayer_Char)) continue;			
			if(GET_PED_OBJECT_IS_ATTACHED_TO(Rotation_Subject_Handle) == NetPlayer_Char && IS_OBJECT_ATTACHED(Rotation_Subject_Handle)){ 
				if(IS_CHAR_IN_ANY_CAR(NetPlayer_Char)){				
				if(is_driving(NetPlayer_Char))Driving_x = 0.5f;
				else Driving_x = -0.5f;
				if(!DOES_CHAR_EXIST(NetPlayer_Char))continue;
				ATTACH_OBJECT_TO_PED (Rotation_Subject_Handle,NetPlayer_Char, 0, Driving_x, 0.0,Set_Rotation_Height -0.90f, 0.0, 0.0, rotate_inc, 0);
				}
				else {
				if(!DOES_CHAR_EXIST(NetPlayer_Char)) continue;
				ATTACH_OBJECT_TO_PED (Rotation_Subject_Handle,NetPlayer_Char, 0, 0.0, 0.0,Set_Rotation_Height - 1.50f, 0.0, 0.0, rotate_inc, 0);
				}
			}			
		}
	}
	if(Rot_Solidify){//Premium Only!!!
		for(Rotation_Subject_ID = 0; Rotation_Subject_ID <= MAX_ROTATION_SUBJECTS -1; Rotation_Subject_ID++){
			if (DOES_VEHICLE_EXIST(Rotation_Subject[Rotation_Subject_ID]) && IS_CAR_ATTACHED(Rotation_Subject[Rotation_Subject_ID])){			
				if (IS_THIS_MODEL_A_HELI(GET_VEHICLE_MODEL_FROM_INDEX(Rotation_Subject_ID))){
				SET_HELI_BLADES_FULL_SPEED(Rotation_Subject[Rotation_Subject_ID]); //This doesnt work!!
				}
				SET_CAR_COLLISION(Rotation_Subject[Rotation_Subject_ID], Rot_Solidify);
			}
			else if (DOES_OBJECT_EXIST(Rotation_Subject[Rotation_Subject_ID]) && IS_OBJECT_ATTACHED(Rotation_Subject[Rotation_Subject_ID])){
				SET_OBJECT_COLLISION(Rotation_Subject[Rotation_Subject_ID], Rot_Solidify);			
			}
		}
	}		
}

