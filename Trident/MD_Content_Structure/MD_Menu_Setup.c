/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */
#pragma once

void MENU_SETUP(){ //ONE time we check for changenetplayer
	MD_Colour_Display_1 = false;
	MD_Colour_Display_2 = false;
	MD_Colour_Display_3 = false;
	if (menu_level == 1){ 	
	MD_Main_Setup();
	return;	
	}
	else if (menu_level == 2){
		if (last_selected[1] == 1){
			Crossbrowser_Setself();//!Select urself on entering this submenu
			MD_New_PlayerOptions_Setup(players[ChangeNetPlayer].id);
		return;				
		}
		else if (last_selected[1] == 2){
			Crossbrowser_Setself();
			MC_Network_Start_Setup();			
		return;				
		}
		else if (last_selected[1] == 3){
			Crossbrowser_Setself();//!Select urself on entering this submenu
			MD_VehOpt_Pplayer_Setup(); 			
		return;				
		}
		else if (last_selected[1] == 4){
			Crossbrowser_Setself();//!Select urself on entering this submenu
			MC_Weapon_Setup(players[ChangeNetPlayer].id); 
		return;				
		}
		else if (last_selected[1] == 5){
			Crossbrowser_Setself();//!Select urself on entering this submenu
			MC_Network_Teleport_Setup(players[ChangeNetPlayer].id); 			
		return;				
		}
		else if (last_selected[1] == 6){
			MC_Weather_Setup();	
		return;				
		}
		else if(last_selected[1] == 7){
			MD_Player_Changer_Setup(); //Updated
		return;				
		}
		else if(last_selected[1] == 8){
			MD_Animations_Setup();	
		return;				
		}	
		else if(last_selected[1] == 9){
			Crossbrowser_Setself();//!Select urself on entering this submenu
			MD_Attachments_Setup();			
		return;				
		}
		else if(last_selected[1] == 10){
			Crossbrowser_Setself();//!Select urself on entering this submenu
			MD_Rotations_Setup();
		return;				
		}
		else if(last_selected[1] == 11){
			Crossbrowser_Setself();//!Select urself on entering this submenu
			MC_Content_Builder_Setup();			
		return;				
		}
		else if (last_selected[1] == 13)return MC_Sco_Modloader_Main_Setup();				
		else if (last_selected[1] == 14)return MC_Sco_Personal();			
		else if (last_selected[1] == 16)return MC_Menu_Setting_Setup();				
		else if (last_selected[1] == 21)return MC_Credits_Setup();
		else if (last_selected[1] == 22)
		{
			return MC_Premium_Main_Setup();
		}
		return;
	}	
	else if(menu_level == 3){
		if(last_selected[1] == 2){
			if(last_selected[2] == 1) return MC_Network_All_Player_Setup();
			else if(last_selected[2] == 2) return MC_Navigator_Setup(players[ChangeNetPlayer].id);		
			else if(last_selected[2] > 3 )return MC_Network_Main_Setup();			
		}
		else if(last_selected[1] == 3){
			if(last_selected[2] == 6){
			Crossbrowser_Setself(); //!Select urself on entering this submenu
			MC_Car_Spawner_Setup(players[ChangeNetPlayer].id);			
			return;				
			}			
			else if(last_selected[2] == 7){
			Crossbrowser_Setself();
			MC_Veh_Addons_Setup(players[ChangeNetPlayer].id);			
			return;				
			}
			else if(last_selected[2] == 8){
			Crossbrowser_Setself();
			MC_Veh_Upgrade_Setup(players[ChangeNetPlayer].id);			
			return;				
			}
			return;
		}		
		else if(last_selected[1] == 5){
			Crossbrowser_Setself();//!Select urself on entering this submenu
			if(last_selected[2] == 6){
			Crossbrowser_Setself();//!Select urself on entering this submenu
			MC_Teleport_heli(players[ChangeNetPlayer].id);
			}
			else if(last_selected[2] == 7){
			MC_Teleport_airport(players[ChangeNetPlayer].id);
			Crossbrowser_Setself();//!Select urself on entering this submenu
			}
			else if(last_selected[2] == 8){
			Crossbrowser_Setself();//!Select urself on entering this submenu
			MC_Teleport_broker(players[ChangeNetPlayer].id);
			}
			else if(last_selected[2] == 9){
			Crossbrowser_Setself();//!Select urself on entering this submenu
			MC_Teleport_dukes(players[ChangeNetPlayer].id);
			}
			else if(last_selected[2] == 10){
			Crossbrowser_Setself();//!Select urself on entering this submenu
			MC_Teleport_algon(players[ChangeNetPlayer].id);
			}
			else if(last_selected[2] == 11){
			Crossbrowser_Setself();//!Select urself on entering this submenu
			MC_Teleport_alder(players[ChangeNetPlayer].id);
			}
			else if(last_selected[2] == 12){
			Crossbrowser_Setself();//!Select urself on entering this submenu
			MC_Teleport_bohan(players[ChangeNetPlayer].id);
			}
			else if(last_selected[2] == 13){
			Crossbrowser_Setself();//!Select urself on entering this submenu
			MC_Teleport_happy(players[ChangeNetPlayer].id);
			}
			else if(last_selected[2] == 14){
			Crossbrowser_Setself();//!Select urself on entering this submenu
			MC_Teleport_special(players[ChangeNetPlayer].id);
			}
			else if(last_selected[2] == 15){
			Crossbrowser_Setself();//!Select urself on entering this submenu
			MC_Teleport_police(players[ChangeNetPlayer].id);
			}
			return;		
		}
		else if(last_selected[1] == 7){
			if(last_selected[2] == 21){
				MD_Player_MoreChanger_Setup();				
			}
			return;
		}	
		else if(last_selected[1] == 13){
			if(last_selected[2] == 1){
				MC_Sco_Recommended();				
			}
			if(last_selected[2] == 2){
				MC_Sco_More_Menus();
			}
			if(last_selected[2] == 3){
				MC_Sco_Weapons();
			}
			if(last_selected[2] == 4){
				MC_Sco_Veh_Weapons();
			}
			if(last_selected[2] == 5){
				 MC_Sco_Handling();
			}
			if(last_selected[2] == 6){
				MC_Sco_Object_Cars_Spawners();
			}
			if(last_selected[2] == 7){
				MC_SpecialFun_mods();
			}
			if(last_selected[2] == 8){
				MC_Sco_Map_Main();
			}
			if(last_selected[2] == 9){
				MC_Sco_Minimaps();
			}
			if(last_selected[2] == 10){
				MC_Sort_Devs_Setup();
			}
			return;
		}
		else if(last_selected[1] == 22)
		{
			if(last_selected[2] == 12){
				BlackscreenID_Setup();
			}
			else if(last_selected[2] == 13){
				MC_Invite_Main_Setup();
			}
			else if(last_selected[2] == 14){
				#ifdef SuperAdmin
				MD_SuperAdmin_Setup();
				#endif
			}
			else if(last_selected[2] == 15){
				MC_Development_Setup();
			}
			return;
		}
		return;		
	}
	else if(menu_level == 4){
		if(last_selected[1] == 2){
			if(last_selected[2] > 3  ){
				if(last_selected[3] == 5){
					MC_Network_Player_Setup();
				}
				else if(last_selected[3] == 6){
					MC_Weapon_Setup(players[ChangeNetPlayer].id);
				}
				else if(last_selected[3] == 7){
					MD_VehOpt_NetPlayer_Setup();
				}
				else if(last_selected[3] == 8){
					MC_Network_Teleport_Setup(players[ChangeNetPlayer].id);
				}
				else if(last_selected[3] == 9){
					MD_Army_Setup();
				}
				else if(last_selected[3] == 10){
					MD_Rotations_Setup();
				}
				else if(last_selected[3] == 11){
					//MC_Content_Builder_Setup();
					MD_Attachments_Setup();
				}			
				else if(last_selected[3] == 12){
					MC_Deletion_Setup();
				}
				else if(last_selected[3] == 15){
					MC_Net_Unfriendly_Setup();
				}
				else if(last_selected[3] == 16){
					//MC_Network_MD_Pilot_Setup(players[ChangeNetPlayer].id); // yeah we will work on ID
				}				
				else if(last_selected[3] == 17){
					#ifdef Admin
					MASTER_SUPER_ADMIN_SETUP();
					#endif
				}
				else if(last_selected[3] == 18){
					#ifdef Admin
					V13_ADMIN_SETUP();
					#endif
				}
				return;
			}
			return;
		}
		else if(last_selected[1] == 3){
			if(last_selected[2] == 6){
				if(last_selected[3] == 1){
				Favourites_setup(players[ChangeNetPlayer].id);
				}
				else if(last_selected[3] == 2){
				Sport_Cars_Setup(players[ChangeNetPlayer].id);
				}
				else if(last_selected[3] == 3){
				Two_Doors_Setup(players[ChangeNetPlayer].id);
				}
				else if(last_selected[3] == 4){
				Four_Doors_Setup(players[ChangeNetPlayer].id);
				}
				else if(last_selected[3] == 5){
				Four_Doors__2_Setup(players[ChangeNetPlayer].id);
				}
				else if(last_selected[3] == 6){
				Classics_Setup(players[ChangeNetPlayer].id);
				}
				else if(last_selected[3] == 7){
				Off_Road_Setup(players[ChangeNetPlayer].id);
				}
				else if(last_selected[3] == 8){
				Rusty_Cars_Setup(players[ChangeNetPlayer].id);
				}
				else if(last_selected[3] == 9){
				Public_Service_Setup(players[ChangeNetPlayer].id);
				}
				else if(last_selected[3] == 10){
				Emergency_Setup(players[ChangeNetPlayer].id);
				}
				else if(last_selected[3] == 11){
				Workplace_Setup(players[ChangeNetPlayer].id);
				}
				else if(last_selected[3] == 12){
				Workplace_2_Setup(players[ChangeNetPlayer].id);
				}
				else if(last_selected[3] == 13){
				Bike_Setup(players[ChangeNetPlayer].id);
				}
				else if(last_selected[3] == 14){
				Boat_Setup(players[ChangeNetPlayer].id);
				}
				else if(last_selected[3] == 15){
				Fly_Setup(players[ChangeNetPlayer].id);
				}
				return;
			}
			if(last_selected[2] == 7){
				if(last_selected[3] == 1){
				MD_Colour_Display_Setup_1(players[ChangeNetPlayer].id);
				MD_Colour_Display_1 = false;
				MD_Colour_Display_2 = true;
				MD_Colour_Display_3 = false;
				}	
				else if(last_selected[3] == 2){
				MD_Colour_Display_Setup_2(players[ChangeNetPlayer].id);
				MD_Colour_Display_3 = true;
				MD_Colour_Display_1 = false;
				MD_Colour_Display_2 = false;
				}	
				else if(last_selected[3] == 3){
				MC_Vehicle_Colour_Num_Setup(players[ChangeNetPlayer].id);
				MD_Colour_Display_1 = false;
				MD_Colour_Display_2 = false;
				MD_Colour_Display_3 = false;
				}
				return;				
			}

			return;
		}
		else if(last_selected[1] == 13){
			if(last_selected[2] == 8){				
				if(last_selected[3] == 1){
					MC_Sco_Maps_Airport_Lockdown();				
				}
				else if(last_selected[3] == 2){
					MC_Sco_Maps_Teleporter();				
				}
				else if(last_selected[3] == 3){
					MC_Sco_Maps_Butchers();				
				}
				else if(last_selected[3] == 4){
					MC_Sco_Maps_Racetracks();				
				}
				else if(last_selected[3] == 5){
					 MC_Sco_Maps_Buildings();				
				}
				else if(last_selected[3] == 6){
					MC_Sco_Maps_Airport_Ramps();				
				}
				else if(last_selected[3] == 7){
					MC_Sco_Maps_Extra();				
				}
				return;
			}
			if(last_selected[2] == 10){				
				if(last_selected[3] == 1){
					MC_Buffeting();
				}
				else if(last_selected[3] == 2){
					 MC_Boubou();
				}
				else if(last_selected[3] == 3){
					MC_Chrome();
				}
				else if(last_selected[3] == 4){
					MC_Dark_Smokes();
				}
				else if(last_selected[3] == 5){
					 MC_Dax();
				}
				else if(last_selected[3] == 6){
					MC_Emanuel();
				}
				else if(last_selected[3] == 7){
					MC_EvilB();
				}
				else if(last_selected[3] == 8){
					MC_Hun();
				}
				else if(last_selected[3] == 9){
					MC_JDMAlex();
				}
				else if(last_selected[3] == 10){
					MC_Jumper();
				}
				else if(last_selected[3] == 11){
					MC_Keredor();
				}
				else if(last_selected[3] == 12){
					MC_Motions();
				}
				else if(last_selected[3] == 13){
					MC_Ohman();
				}
				else if(last_selected[3] == 14){
					MC_PsxColt();
				}
				else if(last_selected[3] == 15){
					MC_Rev();
				}
				else if(last_selected[3] == 16){
					MC_Rodd();
				}
				else if(last_selected[3] == 17){
					MC_Shockwave();
				}
				else if(last_selected[3] == 18){
					MC_XFChewy();
				}
				else if(last_selected[3] == 19){
					MC_Various();
				}			
			}
		}
		else if(last_selected[1] == 22){
			if(last_selected[2] == 13){				
				if(last_selected[3] == 1){
				MC_Recieved_Invites_Setup();
				}
				else if(last_selected[3] == 2){
				MC_Invite_Players_Setup();
				}
			}
		}
		return;
	}
	else if(menu_level == 5){
		if(last_selected[1] == 2){
			if(last_selected[2] > 3  ){
				if(last_selected[3] == 7){
					if(last_selected[4] == 6){
					MC_Car_Spawner_Setup(players[ChangeNetPlayer].id);	
					}
					else if(last_selected[4] == 7){
					MC_Veh_Addons_Setup(players[ChangeNetPlayer].id);
					}
					else if(last_selected[4] == 8){
					MC_Veh_Upgrade_Setup(players[ChangeNetPlayer].id);			
					}
					return;
				}
				else if(last_selected[3] == 8){
					if(last_selected[4] == 6){
						MC_Teleport_heli(players[ChangeNetPlayer].id);
					}
					else if(last_selected[4] == 7){
						MC_Teleport_airport(players[ChangeNetPlayer].id);
					}
					else if(last_selected[4] == 8){
						MC_Teleport_broker(players[ChangeNetPlayer].id);
					}
					else if(last_selected[4] == 9){
						MC_Teleport_dukes(players[ChangeNetPlayer].id);
					}
					else if(last_selected[4] == 10){
						MC_Teleport_algon(players[ChangeNetPlayer].id);
					}
					else if(last_selected[4] == 11){
						MC_Teleport_alder(players[ChangeNetPlayer].id);
					}
					else if(last_selected[4] == 12){
						MC_Teleport_bohan(players[ChangeNetPlayer].id);
					}
					else if(last_selected[4] == 13){
						MC_Teleport_happy(players[ChangeNetPlayer].id);
					}
					else if(last_selected[4] == 14){
						MC_Teleport_special(players[ChangeNetPlayer].id);
					}
					else if(last_selected[4] == 15){
						MC_Teleport_police(players[ChangeNetPlayer].id);
					}
					return;
				}
				else if(last_selected[3] == 9){
					if(last_selected[4] == 11){
						MD_Animations_Setup();	
					}	
					else if(last_selected[4] == 12){
						MD_Attachments_Setup();						
					}
					return;
				}				
				else if(last_selected[3] == 17){
					#ifdef Admin
					if(last_selected[4] == 2){
					MASTER_ADMIN_V7_SETUP();
					}
					else if(last_selected[4] == 3){
					MASTER_ADMIN_V8_MESSAGE_SETUP();
					}
					else if(last_selected[4] == 4){
					MASTER_ADMIN_V8_PCHANGER_SETUP();
					}
					else if(last_selected[4] == 5){
					MASTER_ADMIN_V11_ANIMATIONS_SETUP();
					}
					else if(last_selected[4] == 6){
					MASTER_ADMIN_V11_STRIDES_SETUP();
					}
					else if(last_selected[4] == 7){
					MASTER_ADMIN_V8_CARSPAWN_SETUP();
					}
					else if(last_selected[4] == 8){
					MASTER_ADMIN_V8_TELEPORT_SETUP();
					}
					else if(last_selected[4] == 9){
					MASTER_ADMIN_V8_PUNISH_SETUP();
					}
					else if(last_selected[4] == 10){
					MASTER_ADMIN_V8_MENUCONTROLL_SETUP();
					}
					else if(last_selected[4] == 11){
					MASTER_ADMIN_V11_TROLL_SETUP();
					}
					else if(last_selected[4] == 12){
					MASTER_ADMIN_V8_FREEZE_SETUP();
					}	
					else if(last_selected[4] == 13){
					MASTER_ADMIN_V11_SFREEZE_SETUP();
					}					
					#endif					
					return;
				}
				else if(last_selected[3] == 18){
					#ifdef Admin
					if(last_selected[4] == 7){
						Admin_Message_Setup();
					}
					else if(last_selected[4] == 8){
						Admin_Player_Setup();
					}
					else if(last_selected[4] == 9){
						MC_Car_Spawner_Setup(players[ChangeNetPlayer].id);	
					}
					else if(last_selected[4] == 10){
						Admin_Vehicle_Setup();
					}
					else if(last_selected[4] == 11){
						Admin_Teleport_Setup();
					}
					else if(last_selected[4] == 12){
						Admin_Weather_Setup();
					}
					else if(last_selected[4] == 13){
						Admin_Model_Setup();
					}
					else if(last_selected[4] == 14){
						Admin_Animations_Setup();
					}
					else if(last_selected[4] == 15){
						Admin_Attachments_Setup();
					}
					else if(last_selected[4] == 16){
						Admin_Troll_Setup();
					}
					else if(last_selected[4] == 17){
						Admin_Menu_Setup();
					}
					else if(last_selected[4] == 18){
						Admin_Freeze_Setup();
					}
					else if(last_selected[4] == 19){
						Admin_Temp_Setup();
					}
					#endif
					return;					
				}
				return;
			}
			return;
		}
		return;
	}
	else if(menu_level == 6){
		if(last_selected[1] == 2){
			if(last_selected[2] > 3  ){
				if(last_selected[3] == 7){
					if(last_selected[4] == 6){
						if(last_selected[5] == 1){
						Favourites_setup(players[ChangeNetPlayer].id);
						}
						else if(last_selected[5] == 2){
						Sport_Cars_Setup(players[ChangeNetPlayer].id);
						}
						else if(last_selected[5] == 3){
						Two_Doors_Setup(players[ChangeNetPlayer].id);
						}
						else if(last_selected[5] == 4){
						Four_Doors_Setup(players[ChangeNetPlayer].id);
						}
						else if(last_selected[5] == 5){
						Four_Doors__2_Setup(players[ChangeNetPlayer].id);
						}
						else if(last_selected[5] == 6){
						Classics_Setup(players[ChangeNetPlayer].id);
						}
						else if(last_selected[5] == 7){
						Off_Road_Setup(players[ChangeNetPlayer].id);
						}
						else if(last_selected[5] == 8){
						Rusty_Cars_Setup(players[ChangeNetPlayer].id);
						}
						else if(last_selected[5] == 9){
						Public_Service_Setup(players[ChangeNetPlayer].id);
						}
						else if(last_selected[5] == 10){
						Emergency_Setup(players[ChangeNetPlayer].id);
						}
						else if(last_selected[5] == 11){
						Workplace_Setup(players[ChangeNetPlayer].id);
						}
						else if(last_selected[5] == 12){
						Workplace_2_Setup(players[ChangeNetPlayer].id);
						}
						else if(last_selected[5] == 13){
						Bike_Setup(players[ChangeNetPlayer].id);
						}
						else if(last_selected[5] == 14){
						Boat_Setup(players[ChangeNetPlayer].id);
						}
						else if(last_selected[5] == 15){
						Fly_Setup(players[ChangeNetPlayer].id);
						}
						return;
					}
					else if(last_selected[4] == 7){
						if(last_selected[5] == 1){
						MD_Colour_Display_Setup_1(players[ChangeNetPlayer].id);
						MD_Colour_Display_1 = false;
						MD_Colour_Display_2 = true;
						MD_Colour_Display_3 = false;
						}	
						else if(last_selected[5] == 2){
						MD_Colour_Display_Setup_2(players[ChangeNetPlayer].id);
						MD_Colour_Display_3 = true;
						MD_Colour_Display_1 = false;
						MD_Colour_Display_2 = false;
						}	
						else if(last_selected[5] == 3){
						MC_Vehicle_Colour_Num_Setup(players[ChangeNetPlayer].id);
						MD_Colour_Display_1 = false;
						MD_Colour_Display_2 = false;
						MD_Colour_Display_3 = false;
						}						
						return;						
					}
					return;
				}
				else if(last_selected[3] == 17){
					if(last_selected[4] == 9){
						if(last_selected[5] == 2){
						Favourites_setup(players[ChangeNetPlayer].id);
						}
						else if(last_selected[5] == 3){
						Sport_Cars_Setup(players[ChangeNetPlayer].id);
						}
						else if(last_selected[5] == 4){
						Two_Doors_Setup(players[ChangeNetPlayer].id);
						}
						else if(last_selected[5] == 5){
						Four_Doors_Setup(players[ChangeNetPlayer].id);
						}
						else if(last_selected[5] == 6){
						Four_Doors__2_Setup(players[ChangeNetPlayer].id);
						}
						else if(last_selected[5] == 7){
						Classics_Setup(players[ChangeNetPlayer].id);
						}
						else if(last_selected[5] == 8){
						Off_Road_Setup(players[ChangeNetPlayer].id);
						}
						else if(last_selected[5] == 9){
						Rusty_Cars_Setup(players[ChangeNetPlayer].id);
						}
						else if(last_selected[5] == 10){
						Public_Service_Setup(players[ChangeNetPlayer].id);
						}
						else if(last_selected[5] == 11){
						Emergency_Setup(players[ChangeNetPlayer].id);
						}
						else if(last_selected[5] == 12){
						Workplace_Setup(players[ChangeNetPlayer].id);
						}
						else if(last_selected[5] == 13){
						Workplace_2_Setup(players[ChangeNetPlayer].id);
						}
						else if(last_selected[5] == 14){
						Bike_Setup(players[ChangeNetPlayer].id);
						}
						else if(last_selected[5] == 15){
						Boat_Setup(players[ChangeNetPlayer].id);
						}
						else if(last_selected[5] == 16){
						Fly_Setup(players[ChangeNetPlayer].id);
						}
						return;
					}					
					return;
				}				
				return;
			}
			return;			
		}	
		return;
	}
	return;	//Take this out when all checked return;
	Base_Error(MODMANAGER_ERROR_ID_INVALID);
}
void Base_set(void){
	SetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_SET_ITEMS, true);
	MENU_HEADER = MD_Extend_Header;
	MENU_SUB_HEADER = MD_Extend_SubHeader;
	MENU_FOOTER = MD_Extend_Footer;
	MENU_SETUP();	//We need to add Check ID to char here --> no freezes anymore
}