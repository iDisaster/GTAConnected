/**
 * @ MD EXTEND+
 * @ Version  TRIDENT(Essentials Based)
 * @ MADE BY - DEVILSDESIGN && IIV NATHAN VII
 */
 
#pragma once

void Essentials_Startup(void){
	if(GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT("menu_startup") != 0) return;	
	REQUEST_SCRIPT("menu_startup");	
	if (menu_level == 0){
		item_highlighted = 1;
		menu_level = 1;
		press_counter = 2;
		press_counter_timesby = 1;			
	}
	BLOCK_PED_WEAPON_SWITCHING(pPlayer, true);
	Menu_Setup_Draw();
	menu_consts_start_y = Menu_Start_Pos_y;
	menu_consts_max = menu_max;
	SetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_SHOW, true);
	uint menuThreadID = GET_ID_OF_THIS_THREAD();
	while(!HAS_SCRIPT_LOADED("menu_startup")) WAIT(0);
	START_NEW_SCRIPT_WITH_ARGS("menu_startup", &menuThreadID, 1, 128);
	MARK_SCRIPT_AS_NO_LONGER_NEEDED("menu_startup");	
}

void Essentials_Shutdown(void){
	char * cellphone = In_Network ? "mpcellphone" : "spcellphone";
	REQUEST_SCRIPT(cellphone);
	Menu_Close_Draw();
	TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("menu_startup");
	BLOCK_PED_WEAPON_SWITCHING(pPlayer,false);		
	SetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_SHOW, false);
	while(!HAS_SCRIPT_LOADED(cellphone)) WAIT(0);
	START_NEW_SCRIPT(cellphone, 1024);
	MARK_SCRIPT_AS_NO_LONGER_NEEDED(cellphone);	
	Update_On_Display_Only = true;
}


void Essentials_Button_Registration(void){
	if(!GetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_MOVE) && !Move_Player_Info){ 
	//if(!GetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_MOVE)){ 
		if (menu_up_pressed(true) && !GetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_IN_ERROR)){
			if (item_highlighted == 1) item_highlighted = itemCount;
			else{
				item_highlighted--;
				if (itemCount > menu_consts_max && item_highlighted > (menu_start_scrolling - 1)){
					Menu_Start_Pos_y += Item_height;
					menu_max--;
				}
				if(menu_item[item_highlighted].type == 10 )item_highlighted--;							
			}
			//PLAY_AUDIO_EVENT("FRONTEND_MENU_MP_SERVER_HIGHLIGHT");
			PLAY_AUDIO_EVENT("RADIO_RETUNE_BEEP");
		}
		else if (menu_down_pressed(true) && !GetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_IN_ERROR)){
			if (item_highlighted == itemCount){
				item_highlighted = 1;
				Menu_Start_Pos_y = menu_consts_start_y;
				menu_max = menu_consts_max;
			}
			else{
				item_highlighted++;
				if (itemCount > menu_consts_max && item_highlighted > menu_start_scrolling){
					Menu_Start_Pos_y -= Item_height;
					menu_max++;	
				}
				if(menu_item[item_highlighted].type == 10 )item_highlighted++;	
			}
			PLAY_AUDIO_EVENT("RADIO_RETUNE_BEEP");
			//PLAY_AUDIO_EVENT("FRONTEND_MENU_MP_SERVER_HIGHLIGHT");
			
		}		
		//!Setting up cross browsing on netplayers --> DEVILSDESIGN//
		if((menu_item[item_highlighted].type > 20 && menu_item[item_highlighted].type < 30)){ 	
			//!Crosbrowsing setting to yourself*//
			if (IS_BUTTON_PRESSED(0, BUTTON_X) && IS_BUTTON_JUST_PRESSED(0, BUTTON_SELECT) && !GetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_IN_ERROR)){				
				if(players[ChangeNetPlayer].id != iPlayer){
                    int scanner;
                    for(scanner = 0; scanner < 16; scanner++){
                        if(players[scanner].id != iPlayer) continue;
                        ChangeNetPlayer = scanner;
                        Alert("~b~MD: ~s~Crossbrowsing set to yourself!",false);
                        break;
                    }
                }
			}						
			if (IS_BUTTON_PRESSED(0, BUTTON_X) && IS_BUTTON_JUST_PRESSED(0, DPAD_RIGHT) && !GetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_IN_ERROR)){
				PLAY_AUDIO_EVENT("RADIO_RETUNE_BEEP");
				Player_Counter();			
				if(ChangeNetPlayer == player_count - 1)	ChangeNetPlayer = 0;
				else ChangeNetPlayer++;			
				if(Player_Display_Selection( players[ChangeNetPlayer].id)){
				ChangeNetPlayer++;
				return ;
				}					     
				if(GetBit(MD_Misc_OptionsBitSet, MD_MISC_AUTO_SPECTATE)) SetByteSet(&SpectateAndAttachByteSet, SPECTATE_PLAYER_INDEX, players[ChangeNetPlayer].id);
				if(MD_Player_Info)UPDATE_CHANGE_NET_PLAYER_WEAPON_INFO();						
				#ifdef Admin
				if(MD_Version_Detector)	userfound = GET_PLAYER_MD_STATUS(players[ChangeNetPlayer].id); 
				#endif	
			}
			else if (IS_BUTTON_PRESSED(0, BUTTON_X) && IS_BUTTON_JUST_PRESSED(0, DPAD_LEFT) && !GetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_IN_ERROR)){
				PLAY_AUDIO_EVENT("RADIO_RETUNE_BEEP");
				Player_Counter();				
				if(ChangeNetPlayer == 0) ChangeNetPlayer = player_count - 1;
				else ChangeNetPlayer--;			
					if(Player_Display_Selection( players[ChangeNetPlayer].id)){
					ChangeNetPlayer--;
					return ;
					}					
				if(GetBit(MD_Misc_OptionsBitSet, MD_MISC_AUTO_SPECTATE)) SetByteSet(&SpectateAndAttachByteSet, SPECTATE_PLAYER_INDEX, players[ChangeNetPlayer].id);
				if(MD_Player_Info)UPDATE_CHANGE_NET_PLAYER_WEAPON_INFO();						
				#ifdef Admin
				if(MD_Version_Detector)	userfound = GET_PLAYER_MD_STATUS(players[ChangeNetPlayer].id);
				#endif	
			}				
		}
		if( !IS_BUTTON_PRESSED(0, BUTTON_X) && menu_right_pressed(true)){
			if(menu_item[item_highlighted].type == 8 
			|| menu_item[item_highlighted].type == 9 
			|| menu_item[item_highlighted].type == 14 
			|| menu_item[item_highlighted].type == 15 
			|| menu_item[item_highlighted].type == 22 
			|| menu_item[item_highlighted].type == 23 
			|| menu_item[item_highlighted].type == 24){
				if(menu_item[item_highlighted].num_val == menu_item[item_highlighted].extra_val)
				menu_item[item_highlighted].num_val = 1;
				else menu_item[item_highlighted].num_val += 1;						
			}
		}
		else if( !IS_BUTTON_PRESSED(0, BUTTON_X) && menu_left_pressed(true)){
			if(menu_item[item_highlighted].type == 8 
			|| menu_item[item_highlighted].type == 9 
			|| menu_item[item_highlighted].type == 14 
			|| menu_item[item_highlighted].type == 15 
			|| menu_item[item_highlighted].type == 22 
			|| menu_item[item_highlighted].type == 23 
			|| menu_item[item_highlighted].type == 24){
				if(menu_item[item_highlighted].num_val == 1) menu_item[item_highlighted].num_val = menu_item[item_highlighted].extra_val;
				else menu_item[item_highlighted].num_val -= 1;				
			}
		}	
		if (menu_back_pressed()){
			if (menu_level != 1 || GetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_IN_ERROR)){
				SetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_SET_ITEMS, false);
				Reset_Menu();
				if(!GetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_ACTION_ERROR)) menu_level--;
				SelectedItem = last_selected[menu_level - 1];
				if(GetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_IN_ERROR)){
					if(GetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_ACTION_ERROR)){
						SetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_ACTION_ERROR, false);
					}
					SetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_IN_ERROR, false);
				}
			}
			else if (!GetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_DISABLE)){
				Essentials_Shutdown();
				menu_level = 0;
			}
			//PLAY_AUDIO_EVENT("FRONTEND_MENU_MP_SERVER_HIGHLIGHT");
			//PLAY_AUDIO_EVENT("FRONTEND_OTHER_COUNTDOWN");
			//PLAY_AUDIO_EVENT("FRONTEND_MENU_MP_SERVER_HIGHLIGHT");
			PLAY_AUDIO_EVENT("RADIO_RETUNE_BEEP");
		}
		else if(GetBit(MD_Misc_OptionsBitSet, MD_MISC_RESET_COUNTER)){
			press_counter = 2;
			SetBit(MD_Misc_OptionsBitSet, MD_MISC_RESET_COUNTER, false);
		}
	}
	if (menu_forward_pressed() && press_counter_timesby < 2 && !GetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_IN_ERROR)){
		SelectedItem = item_highlighted;
		if(GetBit(MenuActionBitSet, (SelectedItem - 1)))MENU_ACTION();
		else{
			SetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_SET_ITEMS, false);
			last_selected[menu_level] = SelectedItem;
			item_highlighted = 1;
			Reset_Menu();			
			menu_level++;
		} 
		PLAY_AUDIO_EVENT("FRONTEND_MENU_MP_SERVER_HIGHLIGHT");		
		//if(GetBit(MenuActionBitSet, (SelectedItem - 1))) PLAY_AUDIO_EVENT("FRONTEND_MENU_MP_READY");
		//else PLAY_AUDIO_EVENT("FRONTEND_MENU_MP_SERVER_HIGHLIGHT");
	}
}

void Essentials_Core(void){
if(GetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_SHUTDOWN)) Essentials_Shutdown();
	Essentials_Button_Registration();
	if(!GetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_SET_ITEMS)){
		Base_set();
		if (menu_back_pressed() && last_selected[menu_level] != 0){
			if (last_selected[menu_level] <= itemCount) item_highlighted = last_selected[menu_level];
			else item_highlighted = itemCount;
			last_selected[menu_level] = 0;
			if (itemCount > menu_consts_max && item_highlighted > menu_start_scrolling){
				uint Menu_Line;
				for (Menu_Line = (menu_start_scrolling + 1); Menu_Line <= item_highlighted; Menu_Line++){
					Menu_Start_Pos_y -= Item_height;
					menu_max++;
				}
			}
		}
	}
	if (menu_up_pressed(false)){
		if (itemCount > menu_consts_max && item_highlighted == itemCount){
			Menu_Start_Pos_y = (menu_consts_start_y) - ((itemCount - menu_start_scrolling) * Item_height);
			menu_max = itemCount + menu_start_scrolling;
		}
	}
}