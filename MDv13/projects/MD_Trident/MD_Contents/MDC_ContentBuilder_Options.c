/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV NATHAN VII
 */ 


void MC_Content_Builder_Setup(void){ 	
//need to add delete distance
	MENU_SUB_HEADER = "Content Builder";
	NETWORK_FIRST_FOUR_ITEMS_MENU_SETUP();
	Add_JumpOver("~BLIP_94~ MD C O N T E N T  B U I L D E R ~BLIP_94~");		//5
	AddFunction_Value("~BLIP_73~ ~b~MD ~c~Teleporter Mapmods ",5);		//6  	//Green Cloud Teleporter and more
	AddFunction_Value("~BLIP_73~ ~b~MD ~c~Mapmod Builder Type ",5); 	//7		// Boat Ramp / Half Pipes / Road To Heaven / Platform / Long Road / Half Pipe
	AddFunction_Num("~BLIP_73~ ~b~MD ~c~Mapmod Builder Amount ",5); 	//8		// Amount to spawn from 1 to 8
	AddFunction_Value("~BLIP_73~ ~b~MD ~c~Buildings ",5);				//9		// Solid Building / Solid House 1 / SOlid House 2 / Garagebox / Pylon / Chimney 
	AddFunction_Value("~BLIP_73~ ~b~MD ~c~Road Signs ",5);				//10		// Red Lights, barriers, etc...
	AddFunction_Value("~BLIP_73~ ~b~MD ~c~Restricted Area ",5);			//11		//Helipads / Control Tower / Health Packs / Garage Airport / Tunnel Airport / Gates Airport / Broker Bridges / Remove 
	AddFunction_Value("~BLIP_73~ ~b~MD ~c~Spawn Actionpad Vehicle Generator ",5);		//12		//20 types of cars 
	AddFunction_Value("~BLIP_73~ ~b~MD ~c~Spawn Actionpad ",5);				//13	//5 types of actionpad : Excellerator, kick skyhigh, kick back, etc.. Actions 
	AddFunction_Value("~BLIP_73~ ~b~MD ~c~Set Action-Pad Exit ",5);	//14    //Teleporter Blue / Teleporter Red / Teleporter Orange
	AddFunction_Value_CB("~BLIP_73~ ~b~MD ~c~Spawn Teleporter ",5);		//15    //Teleporter Blue / Teleporter Red / Teleporter Orange ///Give me models for these!
	AddFunction_Value("~BLIP_73~ ~b~MD ~c~Vehicle Spawn Options",5);	//16	//Emergency ON / Emergency OFF / Invincible ON/ Invincible OFF / Neons ON / Neons OFF / 
	AddFunction_Value("~BLIP_73~ ~b~MD ~c~Vehicle Spawn Amount",5);	//17	//Max 8
	AddFunction_Value("~BLIP_73~ ~b~MD ~c~Vehicle Spawn Model",5);		//18	//Sultan RS/ Sentinel / Infernus / Bikes / Police Patriot / Police Mix / Stockade / Emergency Mix / Annihilator / Police Heli Mix / Stinger / Sport Mix / Two Door Mix / Four Door Mix / Trucks Mix / Service Mix
	//maybe Action pad to set:
	// Set selected pads teleport coords: < Current, Airport, Etc>
	//menu_item[1].num_val = (GetBit(MD_Misc_OptionsBitSet, MD_MISC_AUTO_SPECTATE) ? 2 : 1);
	//Add_StringValue(1); //update string
}

/**Strings are done in xxx\Dropbox\MDv13_DEVELOPMENT\V13_NEW_MD_BASE(Devil)\MD_Menu_Structure\MD_Menu_StringItems.c*/

void MC_Content_Builder_Action(void){
	NETWORK_FIRST_FOUR_ITEMS_MENU_ACTION();	
	if(SelectedItem == 6){//Green Cloud Teleporter and more
		if(menu_item[SelectedItem].num_val == 1){
		Create_Actionpad(ACTION_VEHICLE_GENERATE, MODEL_SULTANRS, 1337, 1337);
		}
		else if(menu_item[SelectedItem].num_val == 2){
		
		}
		else if(menu_item[SelectedItem].num_val == 3){
		
		}
		else if(menu_item[SelectedItem].num_val == 4){
		
		}
		else if(menu_item[SelectedItem].num_val == 5){
		
		}
		else if(menu_item[SelectedItem].num_val == 6){
		
		}		
	}
	else if(SelectedItem == 7){// Boat Ramp / Half Pipes / Road To Heaven / Platform / Long Road / Half Pipe
		if(menu_item[SelectedItem].num_val == 1){
		
		}
		else if(menu_item[SelectedItem].num_val == 2){
		
		}
		else if(menu_item[SelectedItem].num_val == 3){
		
		}
		else if(menu_item[SelectedItem].num_val == 4){
		
		}
		else if(menu_item[SelectedItem].num_val == 5){
		
		}
		else if(menu_item[SelectedItem].num_val == 6){
		
		}		
	}
	else if(SelectedItem == 8){// Amount to spawn from 1 to 8
		if(menu_item[SelectedItem].num_val == 1){
		
		}
		else if(menu_item[SelectedItem].num_val == 2){
		
		}
		else if(menu_item[SelectedItem].num_val == 3){
		
		}
		else if(menu_item[SelectedItem].num_val == 4){
		
		}
		else if(menu_item[SelectedItem].num_val == 5){
		
		}
		else if(menu_item[SelectedItem].num_val == 6){
		
		}
		else if(menu_item[SelectedItem].num_val == 7){
		
		}
		else if(menu_item[SelectedItem].num_val == 8){
		
		}		
	}
	else if(SelectedItem == 9){// Solid Building / Solid House 1 / SOlid House 2 / Garagebox / Pylon / Chimney 
		if(menu_item[SelectedItem].num_val == 1){
		
		}
		else if(menu_item[SelectedItem].num_val == 2){
		
		}
		else if(menu_item[SelectedItem].num_val == 3){
		
		}
		else if(menu_item[SelectedItem].num_val == 4){
		
		}
		else if(menu_item[SelectedItem].num_val == 5){
		
		}
		else if(menu_item[SelectedItem].num_val == 6){
		
		}		
	}
	else if(SelectedItem == 10){// Red Lights, barriers, etc...
		if(menu_item[SelectedItem].num_val == 1){
		
		}
		else if(menu_item[SelectedItem].num_val == 2){
		
		}
		else if(menu_item[SelectedItem].num_val == 3){
		
		}
		else if(menu_item[SelectedItem].num_val == 4){
		
		}
		else if(menu_item[SelectedItem].num_val == 5){
		
		}
		else if(menu_item[SelectedItem].num_val == 6){
		
		}		
	}
	else if(SelectedItem == 11){//Helipads / Control Tower / Health Packs / Garage Airport / Tunnel Airport / Gates Airport / Broker Bridges / Remove 
		if(menu_item[SelectedItem].num_val == 1){
		
		}
		else if(menu_item[SelectedItem].num_val == 2){
		
		}
		else if(menu_item[SelectedItem].num_val == 3){
		
		}
		else if(menu_item[SelectedItem].num_val == 4){
		
		}
		else if(menu_item[SelectedItem].num_val == 5){
		
		}
		else if(menu_item[SelectedItem].num_val == 6){
		
		}		
	}
	else if(SelectedItem == 12){//20 types of cars
	//AddFunction_Value("~BLIP_73~ ~b~MD ~c~Vehicle Generator ",20);	
		if(menu_item[SelectedItem].num_val == 1){
		Create_Actionpad(ACTION_VEHICLE_GENERATE, MODEL_SULTANRS, 1337, 1337);
		}
		else if(menu_item[SelectedItem].num_val == 2){
		
		}
		else if(menu_item[SelectedItem].num_val == 3){
		
		}
		else if(menu_item[SelectedItem].num_val == 4){
		
		}
		else if(menu_item[SelectedItem].num_val == 5){
		
		}
		else if(menu_item[SelectedItem].num_val == 6){
		
		}		
	}
	else if(SelectedItem == 13){//5 types of actionpad : Excellerator, kick skyhigh, kick back, etc.. Actions 
		if(menu_item[SelectedItem].num_val == 1){
		
		}
		else if(menu_item[SelectedItem].num_val == 2){
		
		}
		else if(menu_item[SelectedItem].num_val == 3){
		
		}
		else if(menu_item[SelectedItem].num_val == 4){
		
		}
		else if(menu_item[SelectedItem].num_val == 5){
		
		}
		else if(menu_item[SelectedItem].num_val == 6){
		
		}		
	}
	else if(SelectedItem == 14){	//Set actionpad exit//Teleporter Blue / Teleporter Red / Teleporter Orange
		int ActionPad = (menu_item[SelectedItem].num_val - 1);
		float x,y,z;
		GET_CHAR_COORDINATES(pPlayer,&x,&y,&z);
		aPads[ActionPad].TeleportCoordGroundX = x;
		aPads[ActionPad].TeleportCoordGroundY = y;
		char * buffer[16];
		Strcpy(buffer, "~b~MD Actionpad ");
		itoa( (ActionPad + 1), buffer);
		Strcat(buffer, ": ~s~Teleport co-ordinates set."); //47ish? bleh
		Alert(buffer, false);	
	}
	else if(SelectedItem == 15){//Teleporter Blue / Teleporter Red / Teleporter Orange
	//Create teleporter actionpad
		int ActionPad = (menu_item[SelectedItem].num_val - 1);
		 Create_Actionpad(ACTION_TELEPORT_COORD_GROUND_X_Y, 0, 1337, 1337);
		if(menu_item[SelectedItem].num_val == 1){
		
		}
		else if(menu_item[SelectedItem].num_val == 2){
		
		}
		else if(menu_item[SelectedItem].num_val == 3){
		
		}
		else if(menu_item[SelectedItem].num_val == 4){
		
		}
		else if(menu_item[SelectedItem].num_val == 5){
		
		}
		else if(menu_item[SelectedItem].num_val == 6){
		
		}		
	}
	else if(SelectedItem == 16){//Emergency ON / Emergency OFF / Invincible ON/ Invincible OFF / Neons ON / Neons OFF /
		if(menu_item[SelectedItem].num_val == 1){
		
		}
		else if(menu_item[SelectedItem].num_val == 2){
		
		}
		else if(menu_item[SelectedItem].num_val == 3){
		
		}
		else if(menu_item[SelectedItem].num_val == 4){
		
		}
		else if(menu_item[SelectedItem].num_val == 5){
		
		}
		else if(menu_item[SelectedItem].num_val == 6){
		
		}		
	}
	else if(SelectedItem == 17){//Vehicle Amount Max 8
		if(menu_item[SelectedItem].num_val == 1){
		
		}
		else if(menu_item[SelectedItem].num_val == 2){
		
		}
		else if(menu_item[SelectedItem].num_val == 3){
		
		}
		else if(menu_item[SelectedItem].num_val == 4){
		
		}
		else if(menu_item[SelectedItem].num_val == 5){
		
		}
		else if(menu_item[SelectedItem].num_val == 6){
		
		}		
	}
	else if(SelectedItem == 18){//Sultan RS/ Sentinel / Infernus / Bikes / Police Patriot / Police Mix / Stockade / Emergency Mix / Annihilator / Police Heli Mix / Stinger / Sport Mix / Two Door Mix / Four Door Mix / Trucks Mix / Service Mix
	
		if(menu_item[SelectedItem].num_val == 1){
		
		}
		else if(menu_item[SelectedItem].num_val == 2){
		
		}
		else if(menu_item[SelectedItem].num_val == 3){
		
		}
		else if(menu_item[SelectedItem].num_val == 4){
		
		}
		else if(menu_item[SelectedItem].num_val == 5){
		
		}
		else if(menu_item[SelectedItem].num_val == 6){
		
		}		
	}
 
}
