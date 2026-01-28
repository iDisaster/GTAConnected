/**
 * @ MD Essentials
 * @ MD Series ; Version 12, March 2016
 * @ Copyright (C) 2016 DEVILSDESIGN
*/   

#pragma once

void MC_Menu_Setting_Setup(void){ 
	MENU_HEADER = MD_Extend_Header; 
	MENU_SUB_HEADER = "~BLIP_94~ Manager Settings ~BLIP_94~";
	AddBool("~BLIP_68~ Change Menu Position ~PAD_DPAD_ALL~",GetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_MOVE)); 		//1							
	AddBool("~BLIP_68~ Slide-In Effect ",GetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_SLIDE)); 							//2										
	AddBool("~BLIP_68~ Show All Sco's You Can Add",GetBit(MD_Misc_OptionsBitSet, MD_MISC_SHOW_MISSING_SCO));		//3
	AddBool("~BLIP_68~ Ptfx Effects on Spawns & Teleports",Menu_Ptfx);			//4	
	Add_JumpOver("~BLIP_94~  H e l p e r   D i s p l a y  ~BLIP_94~");		//5	>>JUMPOVER	
	AddBool("~PAD_RIGHT~ Keyboard Helper Display",Keyboard_Helper_Display);		//6
	AddBool("~PAD_RIGHT~ Spy & Flymod Helper",Draw_Spy_Helper);  			//7 Enable loop in weather options for keyboard
	Add_JumpOver("~BLIP_94~  E p i s o d e s  ~BLIP_94~");				        //8  >>JUMPOVER
	AddFunction("~BLIP_52~ Switch to FreeMode ~y~(GTA IV)"); 					//9
	AddFunction("~BLIP_52~ Switch to FreeMode ~r~(TBOGT)"); 					//10
	AddFunction("~BLIP_52~ Return to Single Player");							//11
	AddFunction("~BLIP_52~ Leave Network Game");							//11
	AddBool("~BLIP_68~ Kill Feed ",Print_Kill_Feed); //This will be done automatic by the menu
	AddBool("~BLIP_68~ MD Player Info",MD_Player_Info);
}


void MC_Menu_Setting_Action(void){
	if(SelectedItem == 1){
		ToggleBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_MOVE);
		menu_item[SelectedItem].extra_val = GetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_MOVE);
		SetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_SLIDE, false);
	}
	else if(SelectedItem == 2){
		ToggleBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_SLIDE);
		menu_item[SelectedItem].extra_val = GetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_SLIDE);			
	}			
	else if(SelectedItem == 3){
		ToggleBit(MD_Misc_OptionsBitSet, MD_MISC_SHOW_MISSING_SCO);
		menu_item[SelectedItem].extra_val = GetBit(MD_Misc_OptionsBitSet, MD_MISC_SHOW_MISSING_SCO);
	}	
	else if(SelectedItem == 4){
		Menu_Ptfx = !Menu_Ptfx;
		menu_item[SelectedItem].extra_val = Menu_Ptfx;
		Alert_Two("~BLIP_76~ ~c~Ptfx Effects On Various Functions", Menu_Ptfx ? PrintON : PrintOFF ,false);			
	}
	//5	>>JUMPOVER	
	else if(SelectedItem == 6){
		Keyboard_Helper_Display = !Keyboard_Helper_Display;
		menu_item[SelectedItem].extra_val = Keyboard_Helper_Display;
		
	}
	else if(SelectedItem == 7){
		Draw_Spy_Helper = !Draw_Spy_Helper;
		menu_item[SelectedItem].extra_val = Draw_Spy_Helper;				
	}
	//8 >>JUMPOVER
	else if(SelectedItem == 9){
		SHUTDOWN_AND_LAUNCH_NETWORK_GAME(0); 
	}
	else if(SelectedItem == 10){
		SHUTDOWN_AND_LAUNCH_NETWORK_GAME(2); 
	}		
	else if(SelectedItem == 11){
		SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();
	}
	else if(SelectedItem == 12){
	//NETWORK_LEAVE_GAME();
	}
	else if(SelectedItem == 13){
		Print_Kill_Feed = !Print_Kill_Feed;
		menu_item[SelectedItem].extra_val = Print_Kill_Feed;
		Alert_Two("~BLIP_76~ ~c~KillFeed", Print_Kill_Feed ? PrintON : PrintOFF ,false);			
	}
	else if(SelectedItem == 14){
		MD_Player_Info = !MD_Player_Info;
		menu_item[SelectedItem].extra_val = MD_Player_Info;	
		Alert_Two("~BLIP_76~ ~c~MD_Player_Info", MD_Player_Info ? PrintON : PrintOFF ,false);		
	}
}

