/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version V7 ULTIMATE
 */

#pragma once
void mapmod_setup(void){
	MENU_SUB_HEADER = "MapMods";
	/*
	Load("~BLIP_68~ Airport Tele Green Cloud",script_status("ml3"));		//1
	AddBool("~BLIP_68~ Airport Tele Sky High",script_status("ml4"));			//2
	AddBool("~BLIP_68~ Airport Tele City View",script_status("ml5"));			//4
	AddBool("~BLIP_68~ Airport Tele Underwater",script_status("ml6"));		//5	
	AddBool("~BLIP_68~ Airport Race Track",script_status("ml13"));			//6
	AddBool("~BLIP_68~ Airport Drag Track",script_status("ml14"));			//7
	AddBool("~BLIP_68~ Airport Rally Track",script_status("ml15"));			//8
	*/
	AddFunction("~BLIP_52~ Devils Cloud (Green Cloud Remake)");		//8
	
}
void mapmod_action(void){
/*
	if(SelectedItem == 1){ 
	toggle_script("ml3","~BLIP_76~ ~c~Airport Tele Green Cloud",SelectedItem);
	}
	else if(SelectedItem == 2){ 
	toggle_script("ml4","~BLIP_76~ ~c~Airport Tele Sky High",SelectedItem);
	}
	else if(SelectedItem == 3){ 
	toggle_script("ml5","~BLIP_76~ ~c~Airport Tele City View",SelectedItem);
	}
	else if(SelectedItem == 4){ 
	toggle_script("ml6","~BLIP_76~ ~c~Airport Tele Underwater",SelectedItem);
	}
	else if(SelectedItem == 5){ 
	toggle_script("ml13","~BLIP_76~ ~c~Airport Race Track",SelectedItem);
	}
	else if(SelectedItem == 6){ 
	toggle_script("ml14","~BLIP_76~ ~c~Airport Drag Track",SelectedItem);
	}
	else if(SelectedItem == 7){ 
	toggle_script("ml15","~BLIP_76~ ~c~Airport Rally Track",SelectedItem);
	}
	/*
	else if(SelectedItem == 9){
	Garage_Gunshop();
    print("~BLIP_76~ ~c~Garage And GunShop Created By ~COL_NET_3~* iiVxR3B0RN *~n~ ~w~21 Objects");
	}
	*/
	/*
	else if(SelectedItem == 8){
	Ramp_Devilscloud();
	}
	/*
	else if(SelectedItem == 10){
	//
	}
	else if(SelectedItem == 11){
	//
	}
	*/
}
