/**
 * @ MD EXTEND+
 * @ Version MDv13 TRIDENT(Essentials Based)
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */
 
#pragma once

//! Menu Functions
void menu_hold_pressed(uint p_id){
	uint button1;
	uint button2;

	switch(p_id)
	{
		case 1:
		{
			button1 = BUTTON_DPAD_UP;
			button2 = KEY_UP_ARROW;
		}
		break;
		case 2:
		{
			button1 = BUTTON_DPAD_DOWN;
			button2 = KEY_DOWN_ARROW;
		}
		break;
		case 3:
		{
			button1 = BUTTON_DPAD_LEFT;
			button2 = KEY_LEFT_ARROW;
		}
		break;
		case 4:
		{
			button1 = BUTTON_DPAD_RIGHT;
			button2 = KEY_RIGHT_ARROW;
		}
		break;
	}

	if (IS_BUTTON_PRESSED(0, button1) || IS_GAME_KEYBOARD_KEY_PRESSED(button2)){
		press_id = p_id;
		if (hold_counter > 40){
			press_counter_timesby++;
			hold_counter = 0;
		}

		hold_counter++;
		press_counter++;
		press_counter *= press_counter_timesby;
	}
	else if (press_id == p_id){
		press_counter_timesby = 1;
		hold_counter = 0;
	}
}

bool menu_up_pressed(bool counter){
	if ((IS_BUTTON_JUST_PRESSED(0, BUTTON_DPAD_UP) || IS_GAME_KEYBOARD_KEY_JUST_PRESSED(KEY_UP_ARROW))
	 || (press_counter > 6 && (IS_BUTTON_PRESSED(0, BUTTON_DPAD_UP) || IS_GAME_KEYBOARD_KEY_PRESSED(KEY_UP_ARROW)))){
	 	SetBit(MD_Misc_OptionsBitSet, MD_MISC_RESET_COUNTER, true);
		return true;
	}
	
	if (counter)
		menu_hold_pressed(1);

	return false;
}

bool menu_down_pressed(bool counter){
	if ((IS_BUTTON_JUST_PRESSED(0, BUTTON_DPAD_DOWN) || IS_GAME_KEYBOARD_KEY_JUST_PRESSED(KEY_DOWN_ARROW))
	 || (press_counter > 6 && (IS_BUTTON_PRESSED(0, BUTTON_DPAD_DOWN) || IS_GAME_KEYBOARD_KEY_PRESSED(KEY_DOWN_ARROW)))){
	 	SetBit(MD_Misc_OptionsBitSet, MD_MISC_RESET_COUNTER, true);
		return true;
	}

	if (counter)
		menu_hold_pressed(2);

	return false;
}

bool menu_left_pressed(bool counter){
	if ((IS_BUTTON_JUST_PRESSED(0, DPAD_LEFT) || IS_GAME_KEYBOARD_KEY_JUST_PRESSED(KEY_LEFT_ARROW))
	 || (press_counter > 6 && (IS_BUTTON_PRESSED(0, DPAD_LEFT) || IS_GAME_KEYBOARD_KEY_PRESSED(KEY_LEFT_ARROW)))){
		SetBit(MD_Misc_OptionsBitSet, MD_MISC_RESET_COUNTER, true);
		return true;
	}
	if (counter)menu_hold_pressed(3);
	return false;
}

bool menu_right_pressed(bool counter){
	if ((IS_BUTTON_JUST_PRESSED(0, DPAD_RIGHT) || IS_GAME_KEYBOARD_KEY_JUST_PRESSED(KEY_RIGHT_ARROW))
	 || (press_counter > 6 && (IS_BUTTON_PRESSED(0, DPAD_RIGHT) || IS_GAME_KEYBOARD_KEY_PRESSED(KEY_RIGHT_ARROW)))){
		SetBit(MD_Misc_OptionsBitSet, MD_MISC_RESET_COUNTER, true);
		return true;
	}
	if (counter)menu_hold_pressed(4);
	return false;
}

bool menu_LB_pressed(bool counter){
	if ((IS_BUTTON_JUST_PRESSED(0, BUTTON_LB) || IS_GAME_KEYBOARD_KEY_JUST_PRESSED(KEY_L))
	 || (press_counter > 6 && (IS_BUTTON_PRESSED(0, BUTTON_LB) || IS_GAME_KEYBOARD_KEY_PRESSED(KEY_L)))){
		SetBit(MD_Misc_OptionsBitSet, MD_MISC_RESET_COUNTER, true);
		return true;
	}
	if (counter)menu_hold_pressed(3);
	return false;
}

bool menu_RB_pressed(bool counter){
	if ((IS_BUTTON_JUST_PRESSED(0, BUTTON_RB) || IS_GAME_KEYBOARD_KEY_JUST_PRESSED(KEY_R))
	 || (press_counter > 6 && (IS_BUTTON_PRESSED(0,  BUTTON_RB) || IS_GAME_KEYBOARD_KEY_PRESSED(KEY_R)))){
		SetBit(MD_Misc_OptionsBitSet, MD_MISC_RESET_COUNTER, true);
		return true;
	}
	if(counter)menu_hold_pressed(4);
	return false;
}

bool menu_forward_pressed(void){
	if (IS_BUTTON_JUST_PRESSED(0, BUTTON_A) || IS_GAME_KEYBOARD_KEY_JUST_PRESSED(KEY_ENTER))
		return true;
	return false;
}

bool menu_back_pressed(void){
	if (IS_BUTTON_JUST_PRESSED(0, BUTTON_B) || IS_GAME_KEYBOARD_KEY_JUST_PRESSED(KEY_BACKSPACE))
		return true;
	return false;
}

/**Crossbrowsing MenuItems**/
//Keeping the type between 20 and 30 so if type is between this range it will crossbrowse.
void AddFunction_CB(char* item_text){
	itemCount++;
	menu_item[itemCount].name = item_text;
	SetBit(MenuActionBitSet, (itemCount - 1), true);
	menu_item[itemCount].type = 21;//Former 12	
}
void AddFunction_Num_CB(char* item_text,int maxval){	
	itemCount++;
	menu_item[itemCount].name = item_text;
	SetBit(MenuActionBitSet, (itemCount - 1), true);
	menu_item[itemCount].num_val = 1;
	menu_item[itemCount].extra_val = maxval;
	menu_item[itemCount].type = 22;	//Former 8
}
void AddFunction_Value_CB(char* item_text,int maxval){	
	itemCount++;
	menu_item[itemCount].name = item_text;	
	SetBit(MenuActionBitSet, (itemCount - 1), true);
	menu_item[itemCount].num_val = 1;
	menu_item[itemCount].extra_val = maxval;
	menu_item[itemCount].type = 23;	//Former 9	
	//Add_StringValue(itemCount);
}
void AddFunction_ValueLine_CB(int maxval){	
	itemCount++;	
	SetBit(MenuActionBitSet, (itemCount - 1), true);
	menu_item[itemCount].num_val = 1;
	menu_item[itemCount].extra_val = maxval;
	menu_item[itemCount].type = 24;	//Former 15
	//Add_StringValue(itemCount);

}
void AddBool_CB(char* item_text, bool item_bool){
	itemCount++;
	menu_item[itemCount].name = item_text;
	SetBit(MenuActionBitSet, (itemCount - 1), true);
	menu_item[itemCount].extra_val = item_bool;
	menu_item[itemCount].type = 25;	//Former 3
}

void AddBool_NoHighlight_CB(char* item_text){
	itemCount++;
	menu_item[itemCount].name = item_text;
	SetBit(MenuActionBitSet, (itemCount - 1), true);
	menu_item[itemCount].type = 26;	//Former 12
}

void AddGxt_Model_CB(uint item_gxt_hash){
	itemCount++;
	SetBit(MenuActionBitSet, (itemCount - 1), true);
	menu_item[itemCount].num_val = item_gxt_hash;
	menu_item[itemCount].type = 27;	//Former 5
}
/**END**/


void AddSubMenu(char* item_text){
	itemCount++;
	menu_item[itemCount].name = item_text;
	menu_item[itemCount].type = 13;
}
void AddPlayername(char* item_text){
	itemCount++;
	menu_item[itemCount].name = item_text;
	menu_item[itemCount].type = 7;
}
void Add_NotPresent(char* item_text){
	itemCount++;
	menu_item[itemCount].name = item_text;
	menu_item[itemCount].type = 6;
}
void Add_JumpOver(char* item_text){
	itemCount++;
	menu_item[itemCount].name = item_text;
	menu_item[itemCount].type = 10;
}
void Add_Error(char* item_text){
	itemCount++;
	menu_item[itemCount].name = item_text;
	menu_item[itemCount].type = 11;
}
void AddFunction(char* item_text){
	itemCount++;
	menu_item[itemCount].name = item_text;
	SetBit(MenuActionBitSet, (itemCount - 1), true);
	menu_item[itemCount].type = 12;	
}
void AddFunction_Num(char* item_text,int maxval){	
	itemCount++;
	menu_item[itemCount].name = item_text;
	SetBit(MenuActionBitSet, (itemCount - 1), true);
	menu_item[itemCount].num_val = 1;
	menu_item[itemCount].extra_val = maxval;
	menu_item[itemCount].type = 8;	
}
void AddFunction_NumSphere(char* item_text,int maxval){	
	itemCount++;
	menu_item[itemCount].name = item_text;
	SetBit(MenuActionBitSet, (itemCount - 1), true);
	menu_item[itemCount].num_val = Delete_Distance_Radius;
	menu_item[itemCount].extra_val = maxval;
	menu_item[itemCount].type = 14;
}
void AddFunction_Value(char* item_text,int maxval){	
	itemCount++;
	menu_item[itemCount].name = item_text;	
	SetBit(MenuActionBitSet, (itemCount - 1), true);
	menu_item[itemCount].num_val = 1;
	menu_item[itemCount].extra_val = maxval;
	menu_item[itemCount].type = 9;		
	//Add_StringValue(itemCount);
}
void AddFunction_ValueLine(int maxval){	
	itemCount++;	
	SetBit(MenuActionBitSet, (itemCount - 1), true);
	menu_item[itemCount].num_val = 1;
	menu_item[itemCount].extra_val = maxval;
	menu_item[itemCount].type = 15;	
	//Add_StringValue(itemCount);
}
void AddBool(char* item_text, bool item_bool){
	itemCount++;
	menu_item[itemCount].name = item_text;
	SetBit(MenuActionBitSet, (itemCount - 1), true);
	menu_item[itemCount].extra_val = item_bool;
	menu_item[itemCount].type = 3;
}
void AddBool_NoHighlight(char* item_text){
	itemCount++;
	menu_item[itemCount].name = item_text;
	SetBit(MenuActionBitSet, (itemCount - 1), true);
	menu_item[itemCount].type = 12;
}
void AddGxt_Model(uint item_gxt_hash){
	itemCount++;
	SetBit(MenuActionBitSet, (itemCount - 1), true);
	menu_item[itemCount].num_val = item_gxt_hash;
	menu_item[itemCount].type = 5;
}
void Menu_Add_Item_Sco(bool item_bool){
	menu_item[itemCount].extra_val = item_bool;
	menu_item[itemCount].type = 4;
}
void Menu_Add_Action(void){
	SetBit(MenuActionBitSet, (itemCount - 1), true);
}
void Load_Sco(char* item_text, char* item_script){
	//Make an item type for this
	if (DOES_SCRIPT_EXIST(item_script)){
		AddSubMenu(item_text);
		Essentials_script[itemCount] = item_script;
		bool enabled;
		if (GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT(item_script) == 1)
		enabled = true;
		Menu_Add_Item_Sco(enabled);
		Menu_Add_Action();		
	}
	else{
		if(GetBit(MD_Misc_OptionsBitSet, MD_MISC_SHOW_MISSING_SCO)){
		Add_NotPresent(item_text);
		}
	}	
}

void Essentials_apply(void){
	if (menu_item[SelectedItem].extra_val){
		TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME(Essentials_script[SelectedItem]);
		menu_item[SelectedItem].extra_val = false;
	}
	else{
		TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME(Essentials_script[SelectedItem]);
		START_NEW_SCRIPT(Essentials_script[SelectedItem], 1024);
		MARK_SCRIPT_AS_NO_LONGER_NEEDED(Essentials_script[SelectedItem]);
		Menu_Has_Sco_Loaded = false;
		menu_item[SelectedItem].extra_val = true;
	}
}

void Modmanager(void){
	if(!Menu_Has_Sco_Loaded && !menu_item[SelectedItem].extra_val)load_script = Essentials_script[SelectedItem];	
	else Essentials_apply();
}

void Reset_Menu(void){
	int I;
	for (I = 1; I < (itemCount + 1); I++){
		menu_item[I].name = null_string;
		menu_item[I].type = 0;
		menu_item[I].num_val = 1;
		menu_item[I].extra_val = 0;		
		SetBit(MenuActionBitSet, (I - 1), false);
	}
	Menu_Start_Pos_y = menu_consts_start_y;
	menu_max = menu_consts_max;
	itemCount = 0;
}

void Base_Error(uint Error_id){
	//if (menu_item[SelectedItem].action)	Menu_Action_Error = true;
	if(GetBit(MenuActionBitSet,SelectedItem - 1))SetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_ACTION_ERROR, true);
	Reset_Menu();	
	MENU_HEADER = Essentials_Error;
	if (Error_id == MODMANAGER_ERROR_ID_INVALID)AddSubMenu(Essentials_Error_invalid);
	else if (Error_id == MODMANAGER_ERROR_ID_SCRIPT)AddSubMenu(Essentials_Error_script);
	AddSubMenu(Essentials_Error_goback);
	SetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_IN_ERROR, true);
	PLAY_AUDIO_EVENT("FRONTEND_MENU_ERROR");
}
