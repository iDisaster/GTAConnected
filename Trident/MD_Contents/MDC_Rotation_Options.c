/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV NATHAN VII
 */
#pragma once

/**New Setup for rotation Engine - IMPLEMENTED**/
void MD_Rotations_Setup(void){ 	
	MENU_SUB_HEADER = "Rotation Engine";
	NETWORK_FIRST_FOUR_ITEMS_MENU_SETUP();
	Add_JumpOver("~BLIP_94~  MD  R O T A T I O N S   E N G I N E ~BLIP_94~");			//5
	AddBool("~BLIP_68~ Clear Previous Rotations",renew_rotate);							//6
	AddFunction_Value("Set Rotation Speed",5);											//7  
	AddFunction_Value("Set Rotation Distance",4);										//8  
	AddFunction_Value("Rotation Mode",3);												//9   
	AddFunction_Value("Adjust Rotation Height ",7);										//10  
	AddFunction("Detach Rotation"); 													//11
	AddFunction_Value_CB("Vehicle Rotations ",10);										//12
	AddFunction_Value_CB("Emergency Rotations ",9);										//13
	AddFunction_Value_CB("Truck Rotations ",10);										//14
	AddFunction_Value_CB("Bike Rotations ",8);											//15
	AddFunction_Value_CB("Boat Rotations ",9);											//16
	AddFunction_Value_CB("Heli Rotations ",5);											//17
	AddFunction_Value_CB("Pedestrian Rotations ",4);									//18
	AddFunction_Value_CB("Object Rotations ",17);										//19	
	AddBool("Solidify Objects/Vehicles SET PREMIUM ONLY",Rot_Solidify);					//20
	
	menu_item[1].num_val = (GetBit(MD_Misc_OptionsBitSet, MD_MISC_AUTO_SPECTATE) ? 2 : 1);
	//Add_StringValue(1); 
	return;
} 
/**New Action for rotation Engine - IMPLEMENTED**/
void MD_Rotations_Action(void){
		NETWORK_FIRST_FOUR_ITEMS_MENU_ACTION();		
	//Jumpover 5
	if(SelectedItem == 6){
		renew_rotate = !renew_rotate;
		menu_item[SelectedItem].extra_val = renew_rotate;
		Alert_Two("~BLIP_76~ ~c~Clear Rotation before attaching new set", renew_rotate ? PrintON : PrintOFF ,false); 	
	}
	else if(SelectedItem == 7){ //Set Speed
		if(menu_item[SelectedItem].num_val == 1)Rotation_Speed = 0.01f;			
		else if(menu_item[SelectedItem].num_val == 2)Rotation_Speed = 0.04f;			
		else if(menu_item[SelectedItem].num_val == 3)Rotation_Speed = 0.08f;			
		else if(menu_item[SelectedItem].num_val == 4)Rotation_Speed = 0.30f;					
		else if(menu_item[SelectedItem].num_val == 5)Rotation_Speed = 0.0f;			
				
	}
	else if(SelectedItem == 8){
		if(menu_item[SelectedItem].num_val == 1)Rotation_Distance = 3.00f;			
		else if(menu_item[SelectedItem].num_val == 2)Rotation_Distance = 6.00f;				
		else if(menu_item[SelectedItem].num_val == 3)Rotation_Distance = 15.00f;
		else if(menu_item[SelectedItem].num_val == 4)Rotation_Distance = 0.00f;						
	}
	else if(SelectedItem == 9){
		if(menu_item[SelectedItem].num_val == 1){ //90°
		angletest1 = 0.0f;
		angletest2 = 3.1500f;
		angletest3 = 1.575f;
		angletest4 = 4.725f;
		angletest5 = 3.9375f;
		angletest6 = 0.7875f;
		angletest7 = 2.3625f;
		angletest8 = 5.5125f;
		}
		else if(menu_item[SelectedItem].num_val == 2){ //180°
		angletest1 = 1.575f;
		angletest2 = 4.725f;
		angletest3 = 3.1500f;
		angletest4 = 0.00f;
		angletest5 = 5.5125f;
		angletest6 = 2.3625f;
		angletest7 = 3.9375f;
		angletest8 = 0.7875f;						
		}
		else if(menu_item[SelectedItem].num_val == 3){ //360°
		angletest1 = 4.725f;
		angletest2 = 1.575f;
		angletest3 = 0.00f;
		angletest4 = 3.150f;
		angletest5 = 2.3625f;
		angletest6 = 5.5125f;
		angletest7 = 0.7875f;
		angletest8 = 3.9375f;						
		}		
	}
	else if(SelectedItem == 10){
		if(menu_item[SelectedItem].num_val == 1){
		Set_Rotation_Height = -1.5f;
		}
		else if(menu_item[SelectedItem].num_val == 2){
		Set_Rotation_Height = -1.0f;
		}
		else if(menu_item[SelectedItem].num_val == 3){
		Set_Rotation_Height = -0.5f;
		}
		else if(menu_item[SelectedItem].num_val == 4){
		Set_Rotation_Height = 0.0f;
		}
		else if(menu_item[SelectedItem].num_val == 5){
		Set_Rotation_Height = 0.5f;
		}
		else if(menu_item[SelectedItem].num_val == 6){
		Set_Rotation_Height = 1.0f;
		}
		else if(menu_item[SelectedItem].num_val == 7){
		Set_Rotation_Height = 1.5f;
		}			
	} 
	else if(SelectedItem == 11){//Detach and disable ID protection
		SetBit(MD_Misc_OptionsBitSet, MD_MISC_ROTATIONS_LOOP, false);
		int Rotation_Subject_ID;
		for(Rotation_Subject_ID = 0; Rotation_Subject_ID <= MAX_ROTATION_SUBJECTS -1; Rotation_Subject_ID++){
			if (DOES_VEHICLE_EXIST(Rotation_Subject[Rotation_Subject_ID]) && IS_CAR_ATTACHED(Rotation_Subject[Rotation_Subject_ID])){			
				SET_CAR_COLLISION(Rotation_Subject[Rotation_Subject_ID], true);
				
			}			
		}
		
		
		
		
		
		/*
		int Blocked_ID, Veh_Number;
		for( Veh_Number = 0; Veh_Number < 9;  Veh_Number++){
		 if(!DOES_VEHICLE_EXIST(Rotation_Subject[Veh_Number]))continue;			
			GET_NETWORK_ID_FROM_VEHICLE(Rotation_Subject[Veh_Number], &Blocked_ID);
			SET_NETWORK_ID_CAN_MIGRATE(Blocked_ID, true);
		}
		*/
		if(DOES_OBJECT_EXIST(Rotation_Subject_Handle))DELETE_OBJECT(&Rotation_Subject_Handle);
		
		//Block_Net_Control_Of_Entity(model,Rotation_Subject[id]);	--> Make this turn false when detaching the cars
	}
	else if(SelectedItem == 12){
	int Rot_Vehicle_Model;
		if(renew_rotate)clear_rotations();						
		if(menu_item[SelectedItem].num_val == 1)Rot_Vehicle_Model = MODEL_SULTAN;
		else if(menu_item[SelectedItem].num_val == 2)Rot_Vehicle_Model = MODEL_SULTANRS;
		else if(menu_item[SelectedItem].num_val == 3)Rot_Vehicle_Model = MODEL_TURISMO;
		else if(menu_item[SelectedItem].num_val == 4)Rot_Vehicle_Model = MODEL_COMET;
		else if(menu_item[SelectedItem].num_val == 5)Rot_Vehicle_Model = MODEL_INFERNUS;
		else if(menu_item[SelectedItem].num_val == 6)Rot_Vehicle_Model = MODEL_SENTINEL;
		else if(menu_item[SelectedItem].num_val == 7)Rot_Vehicle_Model = MODEL_TRASH;
		else if(menu_item[SelectedItem].num_val == 8)Rot_Vehicle_Model = MODEL_STRETCH;			
		else if(menu_item[SelectedItem].num_val == 9)Rot_Vehicle_Model = MODEL_VOODOO;	
		if(menu_item[SelectedItem].num_val >= 1 && menu_item[SelectedItem].num_val <= 9 )MC_Create_Player_Rotation (players[ChangeNetPlayer].id, Rot_Vehicle_Model, 1.00f, 00.00f, 00.00f, 00.00f, 00.00f );
		else if(menu_item[SelectedItem].num_val == 10)clear_rotations();
	}
	else if(SelectedItem == 13){
		int Rot_Vehicle_Model;
		if(renew_rotate)clear_rotations();						
		if(menu_item[SelectedItem].num_val == 1)Rot_Vehicle_Model = MODEL_AMBULANCE;
		else if(menu_item[SelectedItem].num_val == 2)Rot_Vehicle_Model = MODEL_FBI;
		else if(menu_item[SelectedItem].num_val == 3)Rot_Vehicle_Model = MODEL_NOOSE;
		else if(menu_item[SelectedItem].num_val == 4)Rot_Vehicle_Model = MODEL_POLICE;
		else if(menu_item[SelectedItem].num_val == 5)Rot_Vehicle_Model = MODEL_POLICE2;
		else if(menu_item[SelectedItem].num_val == 6)Rot_Vehicle_Model = MODEL_POLPATRIOT;
		else if(menu_item[SelectedItem].num_val == 7)Rot_Vehicle_Model = MODEL_PSTOCKADE;
		else if(menu_item[SelectedItem].num_val == 8)Rot_Vehicle_Model = MODEL_FIRETRUK;			
		if(menu_item[SelectedItem].num_val > 0 && menu_item[SelectedItem].num_val < 9 )MC_Create_Player_Rotation (players[ChangeNetPlayer].id, Rot_Vehicle_Model, 1.00f, 00.00f, 00.00f, 00.00f, 00.00f );
		else if(menu_item[SelectedItem].num_val == 9)clear_rotations();
	}
	else if(SelectedItem == 17){
		int Rot_Vehicle_Model;
		if(renew_rotate)clear_rotations();						
		if(menu_item[SelectedItem].num_val == 1)Rot_Vehicle_Model = MODEL_ANNIHILATOR; 
		else if(menu_item[SelectedItem].num_val == 2)Rot_Vehicle_Model = MODEL_MAVERICK;		
		else if(menu_item[SelectedItem].num_val == 3)Rot_Vehicle_Model = MODEL_POLMAV;
		else if(menu_item[SelectedItem].num_val == 4)Rot_Vehicle_Model = MODEL_TOURMAV; 
		if(menu_item[SelectedItem].num_val > 0 && menu_item[SelectedItem].num_val < 5 )MC_Create_Player_Rotation (players[ChangeNetPlayer].id, Rot_Vehicle_Model, 1.00f, 00.00f, 00.00f, 00.00f, 00.00f );
		else if(menu_item[SelectedItem].num_val == 5)clear_rotations();
	}
	else if(SelectedItem == 16){
		int Rot_Vehicle_Model;
		if(renew_rotate)clear_rotations();						
		if(menu_item[SelectedItem].num_val == 1)Rot_Vehicle_Model = MODEL_DINGHY; 
		else if(menu_item[SelectedItem].num_val == 2)Rot_Vehicle_Model = MODEL_JETMAX;		
		else if(menu_item[SelectedItem].num_val == 3)Rot_Vehicle_Model = MODEL_MARQUIS;
		else if(menu_item[SelectedItem].num_val == 4)Rot_Vehicle_Model = MODEL_PREDATOR; 
		else if(menu_item[SelectedItem].num_val == 5)Rot_Vehicle_Model = MODEL_REEFER;	
		else if(menu_item[SelectedItem].num_val == 6)Rot_Vehicle_Model = MODEL_SQUALO;
		else if(menu_item[SelectedItem].num_val == 7)Rot_Vehicle_Model = MODEL_TROPIC;	
		else if(menu_item[SelectedItem].num_val == 8)Rot_Vehicle_Model = MODEL_TUGA;		
		if(menu_item[SelectedItem].num_val > 0 && menu_item[SelectedItem].num_val < 9 )MC_Create_Player_Rotation (players[ChangeNetPlayer].id, Rot_Vehicle_Model, 1.00f, 00.00f, 00.00f, 00.00f, 00.00f );
		else if(menu_item[SelectedItem].num_val == 9)clear_rotations();
	}
	else if(SelectedItem == 15){
	int Rot_Vehicle_Model;
		if(renew_rotate)clear_rotations();						
		if(menu_item[SelectedItem].num_val == 1)Rot_Vehicle_Model = MODEL_BOBBER;
		else if(menu_item[SelectedItem].num_val == 2)Rot_Vehicle_Model = MODEL_FAGGIO;
		else if(menu_item[SelectedItem].num_val == 3)Rot_Vehicle_Model = MODEL_HELLFURY;
		else if(menu_item[SelectedItem].num_val == 4)Rot_Vehicle_Model = MODEL_NRG900;
		else if(menu_item[SelectedItem].num_val == 5)Rot_Vehicle_Model = MODEL_PCJ;
		else if(menu_item[SelectedItem].num_val == 6)Rot_Vehicle_Model = MODEL_SANCHEZ;
		else if(menu_item[SelectedItem].num_val == 7)Rot_Vehicle_Model = MODEL_ZOMBIEB;
		if(menu_item[SelectedItem].num_val > 0 && menu_item[SelectedItem].num_val < 8 )MC_Create_Player_Rotation (players[ChangeNetPlayer].id, Rot_Vehicle_Model, 1.00f, 00.00f, 00.00f, 00.00f, 00.00f );
		else if(menu_item[SelectedItem].num_val == 8)clear_rotations();
	}
	else if(SelectedItem == 14){
		int Rot_Vehicle_Model;
		if(renew_rotate)clear_rotations();						
		if(menu_item[SelectedItem].num_val == 1)Rot_Vehicle_Model = MODEL_BIFF; 
		else if(menu_item[SelectedItem].num_val == 2)Rot_Vehicle_Model = MODEL_BOXVILLE;		
		else if(menu_item[SelectedItem].num_val == 3)Rot_Vehicle_Model = MODEL_FLATBED;
		else if(menu_item[SelectedItem].num_val == 4)Rot_Vehicle_Model = MODEL_MRTASTY; 
		else if(menu_item[SelectedItem].num_val == 5)Rot_Vehicle_Model = MODEL_PHANTOM;	
		else if(menu_item[SelectedItem].num_val == 6)Rot_Vehicle_Model = MODEL_RIPLEY;
		else if(menu_item[SelectedItem].num_val == 7)Rot_Vehicle_Model = MODEL_STEED;	
		else if(menu_item[SelectedItem].num_val == 8)Rot_Vehicle_Model = MODEL_FEROCI2;		
		else if(menu_item[SelectedItem].num_val == 9)Rot_Vehicle_Model = MODEL_FORKLIFT;
		if(menu_item[SelectedItem].num_val > 0 && menu_item[SelectedItem].num_val < 10 )MC_Create_Player_Rotation (players[ChangeNetPlayer].id, Rot_Vehicle_Model, 1.00f, 00.00f, 00.00f, 00.00f, 00.00f );
		else if(menu_item[SelectedItem].num_val == 10)clear_rotations();
	}
	else if(SelectedItem == 18){ //Ped rotations
		Ped Rot_Ped_Model;
		if(renew_rotate)clear_rotations();			
		if(menu_item[SelectedItem].num_val == 1)Rot_Ped_Model = MODEL_F_Y_STRIPPERC01;
		else if(menu_item[SelectedItem].num_val == 2)Rot_Ped_Model = MODEL_M_Y_SWAT;
		else if(menu_item[SelectedItem].num_val == 3)Rot_Ped_Model = MODEL_M_Y_CLUBFIT;
		if(menu_item[SelectedItem].num_val >= 1 && menu_item[SelectedItem].num_val <= 3 )MC_Create_Player_Rotation (players[ChangeNetPlayer].id, Rot_Ped_Model, 1.50f, 00.00f, 00.00f, 00.00f, 00.00f );					
		else if(menu_item[SelectedItem].num_val == 4)clear_rotations();	
	}			
	else if(SelectedItem == 19){//Rotations		
		Model Rot_Object_Model;
		if(renew_rotate)clear_rotations();
		
		if(menu_item[SelectedItem].num_val == 1){//Blue neons 0xD20167BE			
		Rot_Object_Model = 0xD20167BE;	
		MC_Create_Player_Rotation (players[ChangeNetPlayer].id, Rot_Object_Model, -0.20, 00.00f, 00.00f, 00.00f, 00.00f );			
		}
		else if(menu_item[SelectedItem].num_val == 2){//Green Flash 0x3BF5F0E5
		if(renew_rotate)clear_rotations();			
		Rot_Object_Model = 0x3BF5F0E5;
		float Setheight = 3.00f;
		MC_Create_Player_Rotation (players[ChangeNetPlayer].id, Rot_Object_Model, Setheight, 00.00f, 00.00f, 00.00f, 00.00f );			
		}
		else if(menu_item[SelectedItem].num_val == 3){//Green Flash 0x3BF5F0E5
		if(renew_rotate)clear_rotations();
		Rot_Object_Model = 0x3BF5F0E5;
		float Setheight = -0.4013f;
		float Set_Angle_x = 4.200f;
		float Set_Angle_y = 00.00f;
		float Set_Angle_z = 00.00f;
		MC_Create_Player_Rotation (players[ChangeNetPlayer].id, Rot_Object_Model,Setheight,Set_Angle_x, Set_Angle_y, Set_Angle_z, 00.00f );					
		}
		else if(menu_item[SelectedItem].num_val == 4){//Purple Flash 0x6A299B19
		if(renew_rotate)clear_rotations();
		Rot_Object_Model = 0x6A299B19;
		float Setheight = 3.00f;
		float Set_Angle_x = 0.00f;
		float Set_Angle_y = 0.00f;
		float Set_Angle_z = 0.00f;
		float Set_Angle_Bone = 0.00f;
		MC_Create_Player_Rotation (players[ChangeNetPlayer].id, Rot_Object_Model, Setheight,Set_Angle_x, Set_Angle_y, Set_Angle_z, Set_Angle_Bone);			
		}
		else if(menu_item[SelectedItem].num_val == 5){//Purple Flash 0x6A299B19
		if(renew_rotate)clear_rotations();
		Rot_Object_Model = 0x6A299B19;
		float Setheight = -0.500f;
		float Set_Angle_x = 4.2000f;
		float Set_Angle_y = 0.0400f;
		float Set_Angle_z = 2.3625;
		MC_Create_Player_Rotation (players[ChangeNetPlayer].id, Rot_Object_Model, Setheight,Set_Angle_x, Set_Angle_y, Set_Angle_z, 00.00f );	
		}			
		else if(menu_item[SelectedItem].num_val == 6){//Flaming Barel 451384443
		if(renew_rotate)clear_rotations();
		Rot_Object_Model = 451384443;
		float Setheight = -0.500f;
		float Set_Angle_x = 0.00f;
		float Set_Angle_y = 0.00f;
		float Set_Angle_z = 0.00f;
		MC_Create_Player_Rotation (players[ChangeNetPlayer].id, Rot_Object_Model, Setheight,Set_Angle_x, Set_Angle_y, Set_Angle_z, 00.00f );			
		}
		else if(menu_item[SelectedItem].num_val == 7){//Flames 0xF329E245
		if(renew_rotate)clear_rotations();
		Rot_Object_Model = 0xF329E245;
		float Setheight = -1.60f;
		float Set_Angle_x = 0.00f;
		float Set_Angle_y = 0.00f;
		float Set_Angle_z = 0.00f;
		MC_Create_Player_Rotation (players[ChangeNetPlayer].id, Rot_Object_Model, Setheight,Set_Angle_x, Set_Angle_y, Set_Angle_z, 00.00f );			
		}	
		else if(menu_item[SelectedItem].num_val == 8){//stars
		if(renew_rotate)clear_rotations();
		Rot_Object_Model = 0x68D6190D;	
		float Setheight = 10.00f;
		float Set_Angle_x = 0.00f;
		float Set_Angle_y = 0.00f;
		float Set_Angle_z = 0.00f;
		MC_Create_Player_Rotation (players[ChangeNetPlayer].id, Rot_Object_Model, Setheight,Set_Angle_x, Set_Angle_y, Set_Angle_z, 00.00f );			
		}
		else if(menu_item[SelectedItem].num_val == 9){//Light around 0x2A56D09E
		if(renew_rotate)clear_rotations();
		Rot_Object_Model = 0x2A56D09E;
		float Setheight = 3.00f;
		float Set_Angle_x = 0.00f;
		float Set_Angle_y = 0.00f;
		float Set_Angle_z = 0.00f;
		MC_Create_Player_Rotation (players[ChangeNetPlayer].id, Rot_Object_Model, Setheight,Set_Angle_x, Set_Angle_y, Set_Angle_z, 00.00f );			
		}
		else if(menu_item[SelectedItem].num_val == 10){//Disco Lights 0xEDF775CB
			if(GET_CURRENT_EPISODE() == 0){
			if(renew_rotate)clear_rotations();				
			Rot_Object_Model = 0xEDF775CB;
			float Setheight = 5.00f;
			float Set_Angle_x = 0.00f;
			float Set_Angle_y = 0.00f;
			float Set_Angle_z = 0.00f;
			MC_Create_Player_Rotation (players[ChangeNetPlayer].id, Rot_Object_Model, Setheight,Set_Angle_x, Set_Angle_y, Set_Angle_z, 00.00f );				
			}
		else Alert("~BLIP_76~ ~COL_NET_4~GTA IV Original Only!",false);
		}
		else if(menu_item[SelectedItem].num_val == 11){//Red Neons 0xCB26803D
		if(renew_rotate)clear_rotations();		
		Rot_Object_Model = 0xCB26803D;
		float Setheight = 0.80f;
		float Set_Angle_x = 0.00f;
		float Set_Angle_y = 0.00f;
		float Set_Angle_z = 0.00f;
		MC_Create_Player_Rotation (players[ChangeNetPlayer].id, Rot_Object_Model, Setheight,Set_Angle_x, Set_Angle_y, Set_Angle_z, 00.00f );		
		}
		else if(menu_item[SelectedItem].num_val == 12){//Sparks 0x55CA3AE6
		if(renew_rotate)clear_rotations();
		Rot_Object_Model = 0x55CA3AE6;
		float Setheight = 0.30f;
		float Set_Angle_x = 3.1099f;
		float Set_Angle_y = 0.00f;
		float Set_Angle_z = 0.00f;
		MC_Create_Player_Rotation (players[ChangeNetPlayer].id, Rot_Object_Model, Setheight,Set_Angle_x, Set_Angle_y, Set_Angle_z, 00.00f );				
		}
		else if(menu_item[SelectedItem].num_val == 13){//Shower 0x55CA3AE6
		if(renew_rotate)clear_rotations();
		Rot_Object_Model = 0x397C604F;
		float Setheight = -1.00f;
		float Set_Angle_x = 3.1599f;
		float Set_Angle_y = 0.00f;
		float Set_Angle_z = 0.00f;
		MC_Create_Player_Rotation (players[ChangeNetPlayer].id, Rot_Object_Model, Setheight,Set_Angle_x, Set_Angle_y, Set_Angle_z, 00.00f );		
		}
		else if(menu_item[SelectedItem].num_val == 14){//Smoke 0x55CA3AE6
		if(renew_rotate)clear_rotations();
		Rot_Object_Model = 0x3427A4F4;	
		float Setheight =  -18.80f;
		float Set_Angle_x = 0.00f;
		float Set_Angle_y = 0.00f;
		float Set_Angle_z = 0.00f;
		MC_Create_Player_Rotation (players[ChangeNetPlayer].id, Rot_Object_Model, Setheight,Set_Angle_x, Set_Angle_y, Set_Angle_z, 00.00f );			
		}
		else if(menu_item[SelectedItem].num_val == 15){//Hamburger -625491925
		if(renew_rotate)clear_rotations();
		Rot_Object_Model = -625491925;
		float Setheight =  3.00f;
		float Set_Angle_x = 0.00f;
		float Set_Angle_y = 0.00f;
		float Set_Angle_z = 0.00f;
		MC_Create_Player_Rotation (players[ChangeNetPlayer].id, Rot_Object_Model, Setheight,Set_Angle_x, Set_Angle_y, Set_Angle_z, 00.00f );			
		}
		else if(menu_item[SelectedItem].num_val == 16){//Hamburger 0x55CA3AE6
		if(renew_rotate)clear_rotations();
		Rot_Object_Model = -625491925;
		float Setheight =  -0.20f;
		float Set_Angle_x = 0.00f;
		float Set_Angle_y = 0.00f;
		float Set_Angle_z = 0.00f;
		MC_Create_Player_Rotation (players[ChangeNetPlayer].id, Rot_Object_Model, Setheight,Set_Angle_x, Set_Angle_y, Set_Angle_z, 00.00f );				
		}
		else if(menu_item[SelectedItem].num_val == 17){
		clear_rotations();	
		}			
	}
	else if(SelectedItem == 20){ // PREMIUM ONLY !!!!
		Rot_Solidify = !Rot_Solidify;
		menu_item[SelectedItem].extra_val = Rot_Solidify;
		if(!Rot_Solidify){
		Alert("~BLIP_76~ ~c~Solidify Vehicles ~COL_NET_4~OFF",false);
		}
		else Alert("~BLIP_76~ ~c~Solidify Vehicles ~COL_NET_3~ON",false);
	}	
}
