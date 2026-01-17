/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Current Version : TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */ 

#pragma once

void MD_Main_Setup(void){ 
	MENU_HEADER = MD_Extend_Header; 
	MENU_SUB_HEADER = MD_Extend_SubHeader;
	
	AddSubMenu("Player ~COL_NET_1~Options ~PAD_RIGHT~");					//1  
	AddSubMenu("Network ~COL_NET_2~Options ~PAD_RIGHT~");					//2  
	AddSubMenu("Vehicle Garage ~COL_NET_3~Options ~PAD_RIGHT~");			//3  
	AddSubMenu("Weapon ~COL_NET_4~Options ~PAD_RIGHT~");					//4  
	AddSubMenu("Teleport ~COL_NET_5~Options ~PAD_RIGHT~");					//5 
	AddSubMenu("Weather / Time ~COL_NET_6~Options ~PAD_RIGHT~");			//6	
	AddSubMenu("Model Changer ~PAD_RIGHT~");								//7  
	AddSubMenu("Animations / Strides ~PAD_RIGHT~");							//8
	AddSubMenu("Object Attachments ~COL_NET_7~Options ~PAD_RIGHT~");		//9 
	AddSubMenu("Rotation Engine ~COL_NET_8~Options ~PAD_RIGHT~");			//10  
	AddSubMenu("Content Builder ~COL_NET_9~Options ~PAD_RIGHT~");			//11  
	Add_JumpOver("~BLIP_94~  M o d l o a d i n g ~BLIP_94~");				//12 
	AddSubMenu("Mod Manager ~PAD_RIGHT~");									//13
	AddSubMenu("Personal Add-Ons & AutoLoads ~PAD_RIGHT~");					//14
	Add_JumpOver("~BLIP_94~ M e n u  S e t t i n g s ~BLIP_94~");			//15
	AddSubMenu("Menu / Game ~COL_NET_10~Settings ~PAD_RIGHT~");				//16
	Add_JumpOver("~BLIP_94~  S  h  o  r  t  C  u  t  s ~BLIP_94~");			//17
	AddFunction_Value("Quick Delete",12);	//Exact Number of strings		//18
	AddFunction_Num("~BLIP_33~ Set Quick Delete Distance",350);				//19			
	AddFunction_Value("Quick Options",10);	//Exact Number of strings		//20
	AddSubMenu("CREDITS / DEVELOPMENT"); //21
	#ifdef Premium
	AddSubMenu("Premium ~COL_NET_11~Options ~PAD_RIGHT~"); //22
	#endif
	menu_item[19].num_val = Delete_Distance_Radius; //set current/default value once on setup
	
}
void MD_Main_Action(void){
	if(SelectedItem == 18){
		Universal_Delete(Delete_Distance_Radius, menu_item[SelectedItem].num_val, true);	//prints inside function :D
	}	
	else if(SelectedItem == 19){
		Delete_Distance_Radius = menu_item[SelectedItem].num_val;
		char * buffer[16];
		Strcpy(buffer, "~b~MD: ~s~Quick Delete Distance Set: "); //37
		itoa(Delete_Distance_Radius, buffer); // + 3 // 40
		Strcat(buffer, "."); //41
		Alert(buffer, false);		
	}
	else if(SelectedItem == 20){
		MD_PlayerOption_Strings_Action();		
	}	
}

 void Premium_Loop(void){ // ONLY WHEN NETWORK
	float mx,my,mz;
	if(Resurrect){
		if(IS_CHAR_DEAD(pPlayer)){
			GET_CHAR_COORDINATES(pPlayer,&mx,&my,&mz);
			RESURRECT_NETWORK_PLAYER( iPlayer, mx,my,mz, 0 );
			SET_CHAR_HEALTH(pPlayer,300);
		}
	} 	
 }
