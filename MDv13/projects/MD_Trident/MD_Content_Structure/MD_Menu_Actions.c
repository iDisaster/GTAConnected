/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Current Version : TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */ 

#pragma once

void MENU_ACTION(void){
	SetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_SET_ITEMS, true);
	if(menu_level == 1)	return MD_Main_Action();		
	else if(menu_level == 2){		
		if(last_selected[1] == 1) return MD_New_PlayerOptions_Action( players[ChangeNetPlayer].id );		
		else if ( last_selected[1] == 2 ) return MC_Network_Start_Action( players[ChangeNetPlayer].id );			
		else if ( last_selected[1] == 3 ) return MD_VehOpt_Pplayer_Action( );		
		else if ( last_selected[1] == 4 ) return MC_Weapon_Action( players[ChangeNetPlayer].id ); 
		else if ( last_selected[1] == 6 ) return MC_Weather_Action( );	
		else if ( last_selected[1] == 5 ) return MC_Network_Teleport_Action( players[ChangeNetPlayer].id ); 			
		else if ( last_selected[1] == 7 ) return MD_Player_Changer_Action( );	
		else if ( last_selected[1] == 8 ) return MD_Animations_Action( );
		else if ( last_selected[1] == 9 ) return MD_Attachments_Action( );
		else if ( last_selected[1] == 10 ) return MD_Rotations_Action( );
		else if ( last_selected[1] == 11 ) return MC_Content_Builder_Action( );
		else if ( last_selected[1] == 13 ) return MC_Sco_Modloader_Main_Action( );
		else if ( last_selected[1] == 16 ) return MC_Menu_Setting_Action( );			
		else if ( last_selected[1] == 22 ) return MC_Premium_Main_Action( );
		else return Modmanager();		
	}
	else if(menu_level == 3){
		if(last_selected[1] == 2){
			if(last_selected[2] == 1){
			return MC_Network_All_Player_Action();
			}
			else if(last_selected[2] == 2){
			return MC_Navigator_Action(players[ChangeNetPlayer].id);		
			}			
			else if(last_selected[2] > 3 )return MC_Network_Main_Action();
			
		}
		else if(last_selected[1] == 3){
			if(last_selected[2] == 6){
			MC_Car_Spawner_Action(players[ChangeNetPlayer].id);			
			}
			else if(last_selected[2] == 7){
			MC_Vehicle_Addon_Action(players[ChangeNetPlayer].id);			
			}
			else if(last_selected[2] == 8){
			MC_Veh_Upgrade_Action(players[ChangeNetPlayer].id);			
			}
			//return;
		}
		else if(last_selected[1] == 5){
			if(last_selected[2] == 6){
			tele_Action_heli(players[ChangeNetPlayer].id);
			}
			else if(last_selected[2] == 7){
			tele_Action_airport(players[ChangeNetPlayer].id);
			}
			else if(last_selected[2] == 8){
			tele_Action_broker(players[ChangeNetPlayer].id);
			}
			else if(last_selected[2] == 9){
			tele_Action_dukes(players[ChangeNetPlayer].id);
			}
			else if(last_selected[2] == 10){
			tele_Action_algon(players[ChangeNetPlayer].id);
			}
			else if(last_selected[2] == 11){
			tele_Action_alder(players[ChangeNetPlayer].id);
			}
			else if(last_selected[2] == 12){
			tele_Action_bohan(players[ChangeNetPlayer].id);
			}
			else if(last_selected[2] == 13){
			tele_Action_happy(players[ChangeNetPlayer].id);
			}
			else if(last_selected[2] == 14){
			tele_Action_special(players[ChangeNetPlayer].id);
			}
			else if(last_selected[2] == 15){
			tele_Action_police(players[ChangeNetPlayer].id);
			}
			//return;
		}		
		else if(last_selected[1] == 7){
			if(last_selected[2] == 21){
				MD_Player_MoreChanger_Action();				
			}
		}		
		else if(last_selected[1] == 22){
			if(last_selected[2] == 6){
				//MC_Invite_Main_Action();
			}
			else if(last_selected[2] == 12){ // was 7
				BlackscreenID_Action();
			}
			else if(last_selected[2] == 14){ // was 7
				MD_SuperAdmin_Action();
			}
			else if(last_selected[2] == 15){ // was 7
				MC_Development_Action();
			}
			//return;
		}
		else Modmanager();		
	}
	else if(menu_level == 4){
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
				#ifdef Admin
				else if(last_selected[3] == 17){
				MASTER_SUPER_ADMIN_ACTION();
				}
				else if(last_selected[3] == 18){
				V13_ADMIN_ACTION();
				}
				#endif
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
		else if(last_selected[1] == 22){
			if(last_selected[2] == 13){				
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
				#ifdef Admin
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
					#endif
				
					//return;
				}
				else if(last_selected[3] == 18){
					#ifdef Admin
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
					#endif
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
