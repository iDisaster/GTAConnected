/**
 * @ MD Essentials
 * @ MD Series ; Version 12, March 2016
 * @ Copyright (C) 2016 DEVILSDESIGN 
*/  

#pragma once

void MC_Deletion_Setup(void){ 
	MENU_HEADER = MD_Extend_Header; 
	MENU_SUB_HEADER = "Clear - Delete Options";
	AddFunction("~BLIP_49~ Delete Objects on Your Vehicle Only");				//1
	AddFunction("~BLIP_49~ Delete All Objects");								//2
	AddFunction_Num("~BLIP_49~ Delete Nearby Objects",5);			//4 // Example numval
	AddFunction("~BLIP_49~ Delete Your Vehicle Only");			//5
	AddFunction("~BLIP_49~ Delete All Vehicles");					//6
	AddFunction("~BLIP_49~ Delete All Abandoned Vehicles Only!");	//7
	AddFunction("~BLIP_49~ Delete Nearby Cars Only");				//8
	AddFunction("~BLIP_49~ Delete Nearby Helis Only");			//9
	AddFunction("~BLIP_49~ Delete Nearby Boats Only");			//10
	AddFunction("~BLIP_49~ Delete Nearby Bikes Only");			//11
	AddFunction("~BLIP_49~ Delete All Peds");						//12
	AddFunction("~BLIP_49~ Delete Nearby Peds");					//13
	AddBool("~BLIP_68~ Clear Runway Planes",GetBit(MD_Misc_OptionsBitSet, MD_MISC_DISABLE_RUNWAY_PLANES));			//15
	AddFunction("~BLIP_49~ Detach Self From Vehicle/Player ");	//16
}

void MC_Deletion_Action(void){
	int nvid;
	int i;
	Vehicle vehicle;
	if(SelectedItem == 1){
		if(IS_CHAR_IN_ANY_CAR(pPlayer)){
		GET_CAR_CHAR_IS_USING(pPlayer, &vehicle);
		clear_objects_on_car(vehicle);
		Alert("~BLIP_76~ ~c~Objects on your vehicle cleared!",false);
		}
		else Alert("~BLIP_76~ ~c~You are not in a vehicle!",false);			
	}
	else if(SelectedItem == 2){
		delete_objects(9999);
		Alert("~BLIP_76~ ~c~Cleared all objects!",false);			
	}	
	else if(SelectedItem == 3){
		if(menu_item[SelectedItem].num_val == 1){
		Alert("~BLIP_76~ ~c~Clearing nearby objects...~n~~w~ Within 1 foot",false);
		delete_objects(1);
		WAIT(500);
		Alert("~BLIP_76~ ~c~Objects cleared!",false);
		}
		if(menu_item[SelectedItem].num_val == 2){
		Alert("~BLIP_76~ ~c~Clearing nearby objects...~n~~w~ Within 5 feet",false);
		delete_objects(5);
		WAIT(500);
		Alert("~BLIP_76~ ~c~Objects cleared!",false);
		}
		if(menu_item[SelectedItem].num_val == 3){
		Alert("~BLIP_76~ ~c~Clearing nearby objects...~n~~w~ Within 20 feet",false);
		delete_objects(20);
		WAIT(500);
		Alert("~BLIP_76~ ~c~Objects cleared!",false);
		}
		if(menu_item[SelectedItem].num_val == 4){
		Alert("~BLIP_76~ ~c~Clearing nearby objects...~n~~w~ Within 50 feet",false);
		delete_objects(50);
		WAIT(500);
		Alert("~BLIP_76~ ~c~Objects cleared!",false);
		}		
	}	
	else if(SelectedItem == 4){
		if(IS_CHAR_IN_ANY_CAR(pPlayer)){
			GET_CAR_CHAR_IS_USING(pPlayer, &Personal_Vehicle);
			DELETE_CAR(&Personal_Vehicle);	
		}
	}
	else if(SelectedItem == 5){
		delete_vehicles(9999,false,"all");
		Alert("~BLIP_76~ ~c~Cleared all vehicles!",false);			
	}
	else if(SelectedItem == 6){
		delete_vehicles(9999,true,"all");
		Alert("~BLIP_76~ ~c~Cleared out only abandoned vehicles!",false);			
	}
	else if(SelectedItem == 7){
		delete_vehicles(80,false,"cars");
		Alert("~BLIP_76~ ~c~Cleared nearby cars!",false);			
	}
	else if(SelectedItem == 8){
		delete_vehicles(80,false,"helis");
		Alert("~BLIP_76~ ~c~Cleared nearby helis!",false);			
	}
	else if(SelectedItem == 9){
		delete_vehicles(80,false,"boats");
		Alert("~BLIP_76~ ~c~Cleared nearby boats!",false);			
	}
	else if(SelectedItem == 10){
		delete_vehicles(80,false,"bikes");
		Alert("~BLIP_76~ ~c~Cleared nearby bikes",false);			
	}
	else if(SelectedItem == 11){
		delete_peds(9999);
		Alert("~BLIP_76~ ~c~Cleared all peds!",false);			
	}
	else if(SelectedItem == 12){
		delete_peds(70);
		Alert("~BLIP_76~ ~c~Cleared nearby peds!",false);			
	}	
	else if(SelectedItem == 13){
		ToggleBit(MD_Misc_OptionsBitSet, MD_MISC_DISABLE_RUNWAY_PLANES);
		menu_item[SelectedItem].extra_val = GetBit(MD_Misc_OptionsBitSet, MD_MISC_DISABLE_RUNWAY_PLANES);
		SWITCH_AMBIENT_PLANES(!GetBit(MD_Misc_OptionsBitSet, MD_MISC_DISABLE_RUNWAY_PLANES));
	}
	else if(SelectedItem == 14){
	 Detach_pPlayer();
	}
}