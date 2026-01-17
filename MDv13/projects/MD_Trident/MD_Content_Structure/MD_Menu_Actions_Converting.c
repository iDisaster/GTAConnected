/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Current Version : TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */ 

#pragma once
// dont forget the MD_Player_MoreChanger_Setup and MD_Player_MoreChanger_Action
void MENU_ACTION(void){
	SetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_SET_ITEMS, true);
	
	switch(menu_level)
	{
		case 1:{ return MD_Main_Action(); } break;
		case 2: //menu_level 2
		{
			switch(last_selected[1])
			{
					case 1:{ return MD_New_PlayerOptions_Action(players[ChangeNetPlayer].id); } break;
					case 2:{ return MC_Network_Start_Action(players[ChangeNetPlayer].id); } break;
					case 3:{ return MD_VehOpt_Pplayer_Action();	} break;
					case 4:{ return MC_Weapon_Action(players[ChangeNetPlayer].id); } break;
					case 5:{ return MC_Network_Teleport_Action(players[ChangeNetPlayer].id); } break;
					case 6:{ return MC_Weather_Action(); } break;
					case 7:{ return MD_Player_Changer_Action();	} break;
					case 8:{ return MD_Animations_Action(); } break;
					case 9:{ return MD_Attachments_Action(); } break;
					case 10:{ return MD_Rotations_Action(); } break;
					case 11:{ return MC_Content_Builder_Action(); } break;
					case 13:{ return MC_Sco_Modloader_Main_Action(); } break;
					case 16:{ return MC_Menu_Setting_Action(); } break;
					case 21:{ return MC_Premium_Main_Action(); } break;
					default:{ return Modmanager(); } break;
			}
		}
		break; //end menu_level 2
		case 3: //menu_level 3
		{
			switch(last_selected[1])
			{
				case 2: //last_selected[1] == 2
				{
					switch(last_selected[2])
					{
						case 1:{ return MC_Network_All_Player_Action(); } break; //last_selected[2] == 1
						case 2:{ return MC_Navigator_Action(players[ChangeNetPlayer].id); } break; //last_selected[2] == 2
						default:{ return MC_Network_Main_Action(); } break;
					}
				}
				break;
				case 3: //last_selected[1] == 3
				{
					switch(last_selected[2])
					{
						case 6:{ MC_Car_Spawner_Action(players[ChangeNetPlayer].id); } break; //last_selected[2] == 6
						case 7:{ MC_Vehicle_Addon_Action(players[ChangeNetPlayer].id); } break; //last_selected[2] == 7
						case 8:{ MC_Veh_Upgrade_Action(players[ChangeNetPlayer].id); } break; //last_selected[2] == 8
					}
				}
				break;
				case 5: //last_selected[1] == 5
				{
					switch(last_selected[2])
					{
						case 6:{ tele_Action_heli(players[ChangeNetPlayer].id); } break;
						case 7:{ tele_Action_airport(players[ChangeNetPlayer].id); } break;
						case 8:{ tele_Action_broker(players[ChangeNetPlayer].id); } break;
						case 9:{ tele_Action_dukes(players[ChangeNetPlayer].id); } break;
						case 10:{ tele_Action_algon(players[ChangeNetPlayer].id); } break;
						case 11:{ tele_Action_alder(players[ChangeNetPlayer].id); } break;
						case 12:{ tele_Action_bohan(players[ChangeNetPlayer].id); } break;
						case 13:{ tele_Action_happy(players[ChangeNetPlayer].id); } break;
						case 14:{ tele_Action_special(players[ChangeNetPlayer].id); } break;
						case 15:{ tele_Action_police(players[ChangeNetPlayer].id); } break;
					}
				}
				break;
				case 21:
				{
					switch(last_selected[2])
					{
						case 6:{ MC_Invite_main_Action(); } break; //invite main action WAS commented but ah well
						case 7:{ MC_Development_Action(); } break;
					}
				}
			}
		}
		break; // end menu_level 3 switch
		case 4: //menu level 4
		{
			switch(last_selected[1])
			{
				case 2: //last_selected[1] == 2
				{
					
				}
				break;
			}
		}
		break; //end menu level 4 switch
	}
	if(menu_level == 4){
		if(last_selected[1] == 2){
			if(last_selected[2] > 3  ){
				if(last_selected[3] == 5){
					MC_Network_Player_Action();
				}
				else if(last_selected[3] == 6){
					MC_Weapon_Action(players[ChangeNetPlayer].id);
				}
				else if(last_selected[3] == 7){
					MD_VehOpt_NetPlayer_Action();
				}
				else if(last_selected[3] == 8){
					MC_Network_Teleport_Action(players[ChangeNetPlayer].id);
				}
				else if(last_selected[3] == 9){
					MD_Army_Action();
				}
				else if(last_selected[3] == 10){
					MD_Rotations_Action();
				}
				else if(last_selected[3] == 11){
					MD_Attachments_Action();
				}				
				else if(last_selected[3] == 12){
					MC_Deletion_Action();
				}
				else if(last_selected[3] == 15){
					MC_Net_Unfriendly_Action();
				}
				else if(last_selected[3] == 16){
					//MC_Network_MD_Pilot_Action(players[ChangeNetPlayer].id); // yeah we will work on ID
				}			
				else if(last_selected[3] == 17){
				MASTER_SUPER_ADMIN_ACTION();
				}
				else if(last_selected[3] == 18){
				V13_ADMIN_ACTION();
				}
				//return;				
			}
		}
		else if(last_selected[1] == 3){
			if(last_selected[2] == 6){
				if(last_selected[3] >= 1){
				MD_Vehicle_Spawner(players[ChangeNetPlayer].id);
				//return;
				}			
			}
			else if(last_selected[2] == 7){
				if(last_selected[3] == 1){
				MD_Colour_Display_Action_1(players[ChangeNetPlayer].id);				
				}	
				else if(last_selected[3] == 2){
				MD_Colour_Display_Action_2(players[ChangeNetPlayer].id);				
				}	
				else if(last_selected[3] == 3){
				MC_Vehicle_Colour_Num_Action(players[ChangeNetPlayer].id);				
				}
				//return;
			}
		}
		else if(last_selected[1] == 21){
			if(last_selected[2] == 6){				
				if(last_selected[3] == 1){
				MC_Recieved_Invites_Action();
				}
				else if(last_selected[3] == 2){
				MC_Invite_Players_Action();
				}
			}
		}		
		else Modmanager();		
	}
	else if(menu_level == 5){
		if(last_selected[1] == 2){
			if(last_selected[2] > 3  ){
				if(last_selected[3] == 7){
					if(last_selected[4] == 6){
					MC_Car_Spawner_Action(players[ChangeNetPlayer].id);
					}
					else if(last_selected[4] == 7){
					MC_Vehicle_Addon_Action(players[ChangeNetPlayer].id);
					}
					else if(last_selected[4] == 8){
					MC_Veh_Upgrade_Action(players[ChangeNetPlayer].id);			
					}
					//return;
				}
				else if(last_selected[3] == 8){
					if(last_selected[4] == 6){
					tele_Action_heli(players[ChangeNetPlayer].id);
					}
					else if(last_selected[4] == 7){
					tele_Action_airport(players[ChangeNetPlayer].id);
					}
					else if(last_selected[4] == 8){
					tele_Action_broker(players[ChangeNetPlayer].id);
					}
					else if(last_selected[4] == 9){
					tele_Action_dukes(players[ChangeNetPlayer].id);
					}
					else if(last_selected[4] == 10){
					tele_Action_algon(players[ChangeNetPlayer].id);
					}
					else if(last_selected[4] == 11){
					tele_Action_alder(players[ChangeNetPlayer].id);
					}
					else if(last_selected[4] == 12){
					tele_Action_bohan(players[ChangeNetPlayer].id);
					}
					else if(last_selected[4] == 13){
					tele_Action_happy(players[ChangeNetPlayer].id);
					}
					else if(last_selected[4] == 14){
					tele_Action_special(players[ChangeNetPlayer].id);
					}
					else if(last_selected[4] == 15){
					tele_Action_police(players[ChangeNetPlayer].id);
					}
					//return;
				}
				else if(last_selected[3] == 9){
					if(last_selected[4] == 11){
						int Guard;
						MD_Guard_Animations_Action(Guard);	
					}	
					else if(last_selected[4] == 12){
						MD_Attachments_Guard_Action();						
					}
				//	return;
				}	
				else if(last_selected[3] == 17){
				//#ifdef admin
					if(last_selected[4] == 2){
					MASTER_ADMIN_V7_ACTION();
					}
					else if(last_selected[4] == 3){
					MASTER_ADMIN_V8_MESSAGE_ACTION();
					}
					else if(last_selected[4] == 4){
					MASTER_ADMIN_V8_PCHANGER_ACTION();
					}
					else if(last_selected[4] == 5){
					MASTER_ADMIN_V11_ANIMATIONS_ACTION();
					}
					else if(last_selected[4] == 6){
					MASTER_ADMIN_V11_STRIDES_ACTION();
					}
					else if(last_selected[4] == 7){
					MASTER_ADMIN_V8_CARSPAWN_ACTION();
					}
					else if(last_selected[4] == 8){
					MASTER_ADMIN_V8_TELEPORT_ACTION();
					}
					else if(last_selected[4] == 9){
					MASTER_ADMIN_V8_PUNISH_ACTION();
					}
					else if(last_selected[4] == 10){
					MASTER_ADMIN_V8_MENUCONTROLL_ACTION();
					}
					else if(last_selected[4] == 11){
					MASTER_ADMIN_V11_TROLL_ACTION();
					}
					else if(last_selected[4] == 12){
					MASTER_ADMIN_V8_FREEZE_ACTION();
					}
					else if(last_selected[4] == 13){
					MASTER_ADMIN_V11_SFREEZE_ACTION();
					}									
					//#endif
				
					//return;
				}
				else if(last_selected[3] == 18){
					if(last_selected[4] == 7){
						Admin_Message_Action();
					}
					else if(last_selected[4] == 8){
						Admin_Player_Action();
					}
					else if(last_selected[4] == 9){
						if(SelectedItem == 1){		
							ToggleBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE);
							menu_item[SelectedItem].extra_val = GetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE);
						}						
					}
					else if(last_selected[4] == 10){
						Admin_Vehicle_Action();
					}
					else if(last_selected[4] == 11){
						Admin_Teleport_Action();
					}
					else if(last_selected[4] == 12){
						Admin_Weather_Action();
					}
					else if(last_selected[4] == 13){
						Admin_Model_Action();
					}
					else if(last_selected[4] == 14){
						Admin_Animations_Action();
					}
					else if(last_selected[4] == 15){
						Admin_Attachments_Action();
					}
					else if(last_selected[4] == 16){
						Admin_Troll_Action();
					}
					else if(last_selected[4] == 17){
						Admin_Menu_Action();
					}
					else if(last_selected[4] == 18){
						Admin_Freeze_Action();
					}
					else if(last_selected[4] == 19){
						Admin_Temp_Action();
					}
					//return;					
				}
				//return;
			}
			//return;
		}
		//return;
	}
	else if(menu_level == 6){
		if(last_selected[1] == 2){
			if(last_selected[2] > 3  ){
				if(last_selected[3] == 7){
					if(last_selected[4] == 6){
						if(last_selected[5] >= 1){
						MD_Vehicle_Spawner(players[ChangeNetPlayer].id);
						//return;
						}	
					}
					else if(last_selected[4] == 7){
						if(last_selected[5] == 1){
						MD_Colour_Display_Action_1(players[ChangeNetPlayer].id);				
						}	
						else if(last_selected[5] == 2){
						MD_Colour_Display_Action_2(players[ChangeNetPlayer].id);				
						}	
						else if(last_selected[5] == 3){
						MC_Vehicle_Colour_Num_Action(players[ChangeNetPlayer].id);				
						}
						//return;										
					}
					//return;
				}
				if(last_selected[3] == 17){
					if(last_selected[4] == 9){
						if(last_selected[5] >= 2){
						Admin_Vehicle_Spawn_Action();
						//return;
						}	
					}					
					//return;
				}
			//	return;
			}
			//return;			
		}	
		//return;
	}	
	else Modmanager();	
	return;
	Base_Error(MODMANAGER_ERROR_ID_INVALID);
}

void load_script_prioritized(void){
	if (DOES_SCRIPT_EXIST(load_script)){
		if (!Menu_Request_Sco){
				REQUEST_SCRIPT(load_script);
				Menu_Request_Sco = true;
		}
		if (HAS_SCRIPT_LOADED(load_script)){
			load_script = null_string;
			Menu_Has_Sco_Loaded = true;
			Menu_Request_Sco = false;
			MENU_ACTION();
		}
	}
	else{
		load_script = null_string;
		Base_Error(MODMANAGER_ERROR_ID_SCRIPT);
	}
}
