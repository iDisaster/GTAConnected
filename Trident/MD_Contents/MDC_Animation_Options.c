/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Current Version : TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */ 
#pragma once

void MD_Animations_Setup(void){
	item_highlighted = 10;

	MENU_SUB_HEADER = "Animation Engine";
	NETWORK_FIRST_FOUR_ITEMS_MENU_SETUP();
	Add_JumpOver("~BLIP_94~ MD A N I M A T I O N  S E T T I N G S ~BLIP_94~");	//5
	AddBool("Give Attachments For Animations",GetBit(MD_Misc_OptionsBitSet,MD_MISC_AUTO_ATTACH_TOOL_WITH_ANIMS));					//6  
	AddFunction_Value("Animation Speed",10);  								//7//Normsl - Medium - Fast
	AddBool("Loop Animations",Loop_Anims);										//8
	Add_JumpOver("~BLIP_94~ MD P L A Y  A N I M A T I O N S ~BLIP_94~");			//9
	AddFunction_Value("Strides ",11); 										//10		
	AddFunction_Value("Dances",9); 											//11		
	AddFunction_Value("Gestures",22);										//12		
	AddFunction_Value("Tools",5);											//13	
	AddFunction_Value("Heli",10);	 										//14	
	AddFunction_Value("Bike",7); 											//15	
	AddFunction_Value("Sliding",5);											//16		
	AddFunction_Value("Swimming",5);											//17	
	AddFunction_Value("Sitting",6); 											//18		
	AddFunction_Value("Pause",6); 											//19		
	AddFunction_Value("Sex",14);												//20		
	AddFunction_Value("Special",3);												//21	
	//Load_Sco("~BLIP_68~ Superman ~PAD_RB~+~PAD_DPAD_DOWN~/~PAD_LB~+~PAD_LSTICK_ALL~/", "eb_superman");
	//Load_Sco("~BLIP_68~ Swimming Everywhere ~PAD_RB~+~PAD_DPAD_DOWN~", "hand3");
	//Load_Sco("~BLIP_68~ Superhero ~PAD_DPAD_UP~  + ~COL_NET_4~F ~PAD_RT~ / M ~PAD_LT~", "model2");
	return;	

}

void MD_Animations_Action(void){
	NETWORK_FIRST_FOUR_ITEMS_MENU_ACTION();			
	//Jumpover 5
	if(SelectedItem == 6){
		ToggleBit(MD_Misc_OptionsBitSet,MD_MISC_AUTO_ATTACH_TOOL_WITH_ANIMS);
		menu_item[SelectedItem].extra_val = GetBit(MD_Misc_OptionsBitSet,MD_MISC_AUTO_ATTACH_TOOL_WITH_ANIMS);
		//Alert_Two("~BLIP_76~ ~c~Give tool with animation", Attachment_OnAnims ? PrintON : PrintOFF ,false); 	
	}	
	else if(SelectedItem == 7){
		if(menu_item[SelectedItem].num_val == 1){
		animationspeed = 1.00f;
		Alert("~b~MD: ~s~Animspeed Set To Default",false);
		}
		else if(menu_item[SelectedItem].num_val == 2){
		animationspeed = 1.50f;
		Alert("~b~MD: ~s~Animspeed Set To 2~n~ Press Animation 2 Times To Play With Selected Speed.",false);
		}
		else if(menu_item[SelectedItem].num_val == 3){
		animationspeed = 2.00f;
		Alert("~b~MD: ~s~Animspeed Set To 3~n~ Press Animation 2 Times To Play With Selected Speed.",false);
		}
		else if(menu_item[SelectedItem].num_val == 4){
		animationspeed = 2.50f;
		Alert("~b~MD: ~s~Animspeed Set To 4~n~ Press Animation 2 Times To Play With Selected Speed.",false);
		}
		else if(menu_item[SelectedItem].num_val == 5){
		animationspeed = 3.00f;
		Alert("~b~MD: ~s~Animspeed Set To 5~n~ Press Animation 2 Times To Play With Selected Speed.",false);
		}
		else if(menu_item[SelectedItem].num_val == 6){
		animationspeed = 3.50f;
		Alert("~b~MD: ~s~Animspeed Set To 6~n~ Press Animation 2 Times To Play With Selected Speed.",false);
		}
		else if(menu_item[SelectedItem].num_val == 7){
		animationspeed = 4.00f;
		Alert("~b~MD: ~s~Animspeed Set To 7~n~ Press Animation 2 Times To Play With Selected Speed.",false);
		}
		else if(menu_item[SelectedItem].num_val == 8){
		animationspeed = 4.50f;
		Alert("~b~MD: ~s~Animspeed Set To 8~n~ Press Animation 2 Times To Play With Selected Speed.",false);
		}
		else if(menu_item[SelectedItem].num_val == 9){
		animationspeed = 5.00f;
		Alert("~b~MD: ~s~Animspeed Set To 9~n~ Press Animation 2 Times To Play With Selected Speed.",false);
		}
		else if(menu_item[SelectedItem].num_val == 10){
		animationspeed = 5.50f;
		Alert("~b~MD: ~s~Animspeed Set To 10~n~ Press Animation 2 Times To Play With Selected Speed.",false);
		}		
	}	
	else if(SelectedItem == 8){
		Loop_Anims = !Loop_Anims;
		menu_item[SelectedItem].extra_val = Loop_Anims;
		Alert_Two("~BLIP_76~ ~c~Animations Looped", Loop_Anims ? PrintON : PrintOFF ,false); 
		if(Loop_Anims) Animationloop = 99999.00f;
		else Animationloop = 0.00f;
	}
	//Jumpover //9
	else if(SelectedItem == 10){
	MD_Stride_Strings_Action(pPlayer);
	}
	else if(SelectedItem == 11){
	MD_Anim_Dance_Strings_Action(pPlayer);	
	}
	else if(SelectedItem == 12){
	MD_Anim_Gesture_Strings_Action(pPlayer);
	}
	else if(SelectedItem == 13){
	MD_Anim_Tool_Strings_Action(pPlayer);
	}
	else if(SelectedItem == 14){
	MD_Anim_Heli_Strings_Action(pPlayer);
	}
	else if(SelectedItem == 15){
	MD_Anim_Bike_Strings_Action(pPlayer);
	}
	else if(SelectedItem == 16){
	MD_Anim_Sliding_Strings_Action(pPlayer);
	}
	else if(SelectedItem == 17){
	 MD_Anim_Swim_Strings_Action(pPlayer);
	}
	else if(SelectedItem == 18){
	MD_Anim_Sit_Strings_Action(pPlayer);
	}
	else if(SelectedItem == 19){
	MD_Anim_Pause_Strings_Action(pPlayer);
	}
	else if(SelectedItem == 20){
	MD_Anim_Sex_Strings_Action(pPlayer);
	}	
	else if(SelectedItem == 21){	
		if(menu_item[SelectedItem].num_val == 1){
		TOGGLE_SCRIPT("hand3");
		Alert_Two("~b~MD: ~s~Swimming everywhere",(GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT("hand3") > 0) ? PrintON : PrintOFF ,false);	
		}
		else if(menu_item[SelectedItem].num_val == 2){
		TOGGLE_SCRIPT("eb_superman");
		Alert_Two("~b~MD: ~s~Superman",(GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT("eb_superman") > 0) ? PrintON : PrintOFF ,false);	
		}		
		else if(menu_item[SelectedItem].num_val == 3){//Weapon_String[6] = "~BLIP_49~ Remove Player Weapons";				
			TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("hand3");
			TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("eb_superman");
			Alert("~b~MD: ~s~All scripts disabled" ,false);	
			
		}
	}
}

