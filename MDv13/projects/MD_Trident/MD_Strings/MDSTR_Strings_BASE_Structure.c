/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */  


void Add_StringValue(int MenuItem_Index){	
	/**Main Page**/
	if (menu_level == 1){ 
		if(MenuItem_Index == 18){
		return MD_Delete_Strings(MenuItem_Index);	
		}		
		else if(MenuItem_Index == 19){			
			Delete_Distance_Radius = menu_item[MenuItem_Index].num_val;				
		}
		else if(MenuItem_Index == 20) return MD_PlayerOption_Strings(MenuItem_Index);				
	}
	/**Submenus on Main Page**/
	else if (menu_level == 2){	
		/**Submenus on Main Page - Player Options**/
		if (last_selected[1] == 1){
			return MD_Player_Options_Strings(MenuItem_Index);
		}
		else if (last_selected[1] == 2){		
			if(MenuItem_Index == 3)return MD_PO_PlayerInfo_Strings(MenuItem_Index);			
		}		
		/**Submenus on Main Page - Vehicle Options**/
		else if (last_selected[1] == 3){
			return MD_VehOpt_Pplayer_Strings(MenuItem_Index);			
		}
		/**Submenus on Main Page - Weapons**/
		else if (last_selected[1] == 4){
			return MD_Weapon_Strings(MenuItem_Index);
		}
		/**Submenus on Main Page - Player Changer**/
		else if(last_selected[1] == 7){	
			return Player_Changer_Strings(MenuItem_Index);		
		}
		/**Submenus on Main Page - Animations**/
		else if(last_selected[1] == 8){
			 return MD_Animation_Strings(MenuItem_Index);
		}
		/**Submenus on Main Page - Attachments**/
		else if (last_selected[1] == 9){
			return MD_Attach_Strings(MenuItem_Index);
		}
		/**Submenus on Main Page - Rotations**/
		else if (last_selected[1] == 10){
			return MD_Rotation_Strings(MenuItem_Index);
		}
		/**Submenus on Main Page - Rotations**/
		else if (last_selected[1] == 11){
			return Content_Builder_Strings(MenuItem_Index);
		}
		/**Submenus on Main Page - Premium Options**/		
		else if(last_selected[1] == 22){
			if(MenuItem_Index == 1){
				char* episodes[4];
				episodes[0] = "< ERROR >";
				episodes[1] = "< Original >";
				episodes[2] = "< TLaD >";
				episodes[3] = "< TBoGT >";
				menu_item[MenuItem_Index].charval = episodes[menu_item[MenuItem_Index].num_val];	
			}
		}
	}
	else if(menu_level == 3){
		/**Submenus on Main Page - Network Players**/
		if(last_selected[1] == 2){
			/**All Players - Main**/
			if(last_selected[2] == 1){
				if(MenuItem_Index == 2){
					char* teleportAllString[4];
					teleportAllString[0] = "< ERROR > ";
					teleportAllString[1] = "< Around (Face away) >";
					teleportAllString[2] = "< Around (Face you) >";
					teleportAllString[3] = "< Lined up >";
					menu_item[MenuItem_Index].charval = teleportAllString[menu_item[MenuItem_Index].num_val];
				}
			
			}
			else if(last_selected[2] == 2){
				return MD_Navigator_Strings(MenuItem_Index);				
			}
			/**Selected Players Players - Main**/
			else if(last_selected[2] > 3){
				if(MenuItem_Index == 1){
					return MD_Spy_Strings (MenuItem_Index);
				}
				else if(MenuItem_Index == 2){			
					return MD_Delete_Strings(MenuItem_Index);
				}
				else if(MenuItem_Index == 3){
					return MD_PlayerOption_Strings(MenuItem_Index);		
				}
				else if(MenuItem_Index == 4){ 
					return MD_QuickTeleport_Strings(MenuItem_Index);		
				}				
			}
			else if(last_selected[2] == 21){
				return Player_MoreChanger_Strings(MenuItem_Index);				
			}			
		}
		else if(last_selected[1] == 3){ //Vehicle garage
			if(last_selected[2] == 3){ //Active options
				if(MenuItem_Index == 12){ //Auto-lock vehicle
					char* autolockstring[4];
					autolockstring[0] = "< ERROR >";
					autolockstring[1] = "< On >";
					autolockstring[2] = "< On + Unlock for friends >";
					autolockstring[3] = "< Off >";
					menu_item[MenuItem_Index].charval = autolockstring[menu_item[MenuItem_Index].num_val];
				}
			}
		}
		else if(last_selected[1] == 7){
			if(last_selected[2] == 21){
			return Player_MoreChanger_Strings(MenuItem_Index);	
			}		
		}
		else if(last_selected[1] == 21){
			if(last_selected[2] == 7){
				if(MenuItem_Index == 6){
					char* Sound_String[21];
					Sound_String[0] = "Error";
					Sound_String[1] = "FRONTEND_GAME_MP_TICKER_MESSAGE";
					Sound_String[2] = "FRONTEND_MENU_MP_UNREADY";
					Sound_String[3] = "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE";
					Sound_String[4] = "FRONTEND_OTHER_COUNTDOWN";
					Sound_String[5] = "FRONTEND_MENU_MP_READY";
					Sound_String[6] = "FRONTEND_MENU_MP_SERVER_HIGHLIGHT";
					Sound_String[7] = "FRONTEND_GAME_MP_TICKER_MESSAGE";
					Sound_String[8] = "MOBILE_PHONE_SMS_RECIEVE";
					Sound_String[9] = "FRONTEND_OTHER_RACE_321";
					Sound_String[10] = "FRONTEND_OTHER_RACE_GO";
					Sound_String[11] = "FRONTEND_GAME_PICKUP_CHECKPOINT_LAP";
					Sound_String[12] = "FRONTEND_GAME_PICKUP_CHECKPOINT";
					Sound_String[13] = "RADIO_RETUNE_BEEP";
					Sound_String[14] = "RADIO_ADVERTS";
					Sound_String[15] = "RADIO_RETUNE_MONO_ONE_SHOT";
					Sound_String[16] = "RADIO_RETUNE_MONO";
					Sound_String[17] = "RADIO_TUNER_MULTI"; //Keeps running
					Sound_String[18] = "RADIO_INTERFERENCE_SINGLE";
					Sound_String[19] = "MOBILE_PRERING_SOUND";		
					
					menu_item[MenuItem_Index].charval = Sound_String[menu_item[MenuItem_Index].num_val];
					
				}
			}
		}
		
	}
	else if(menu_level == 4){
		/**Selected Players Players - Main Submenus**/
		if(last_selected[1] == 2){ 	
			if(last_selected[3] == 5){
				return MD_NetPlayer_Options_Strings(MenuItem_Index);
			}
			else if(last_selected[3] == 6){
				return MD_Weapon_Strings(MenuItem_Index);
			}			
			else if(last_selected[3] == 7){
				MD_VehOpt_NetPlayer_Strings(MenuItem_Index);
			}
			else if(last_selected[3] == 9){
				return MD_Army_Strings(MenuItem_Index);
			}
			else if(last_selected[3] == 10){
				return MD_Rotation_Strings(MenuItem_Index);
			}
			else if(last_selected[3] == 11){
				return MD_Attach_Strings(MenuItem_Index);
			}
			else if(last_selected[3] == 15){
				if(MenuItem_Index == 16){
				return MD_Net_Unfr_Telport_Strings(MenuItem_Index);
				}
				if(MenuItem_Index == 17){
				return MD_Net_Unfr_FC_Strings(MenuItem_Index);
				}
				if(MenuItem_Index == 18){
				return MD_Net_Unfr_Obj_Strings(MenuItem_Index);
				}
				if(MenuItem_Index == 19){
				return MD_Net_Unfr_Lag_Strings(MenuItem_Index);
				}
			}
			/*
			else if(last_selected[3] == 16){ //Pilot
				if(MenuItem_Index == 3){
				return Pilot_Weapon_Strings(MenuItem_Index);
				}
			}
			*/
			else if(last_selected[3] == 18){
				if(MenuItem_Index == 1){
					return MD_Spy_Strings (MenuItem_Index);
				}
				else if(MenuItem_Index == 2){			
					return MD_Delete_Strings(MenuItem_Index);
				}
				else if(MenuItem_Index == 3){ // Main
					return MD_PlayerOption_Strings(MenuItem_Index);		
				}
				else if(MenuItem_Index == 4){ // Main
					return MD_QuickTeleport_Strings(MenuItem_Index);		
				}
				else if(MenuItem_Index == 6){ // Main
					return MD_QuickAdmin_Strings(MenuItem_Index);		
				}
			}						
		}
		else if(last_selected[1] == 3){
			if(last_selected[2] == 7){
				if(last_selected[3] == 1){
					return MD_VehOpt_Save_ColourSettings_Strings(20);										
				}	
				else if(last_selected[3] == 2){
					return MD_VehOpt_Save_ColourSettings_Strings(21);								
				}	
				else if(last_selected[3] == 3){						
					return MD_VehOpt_Save_ColourSettings_Strings(5);											 							
				}				
			}			
		}			
	}
	else if(menu_level == 5){
		if(last_selected[1] == 2){			
			if(last_selected[2] > 3){
				if(last_selected[3] == 9){
					if(last_selected[4] == 11){
						 return MD_Animation_Strings(MenuItem_Index);
					}
					else if (last_selected[4] == 12){
						return MD_Attach_Strings(MenuItem_Index);
					}				
				}
				else if(last_selected[3] == 18){
					if(last_selected[4] == 7){
					return Admin_Message_Strings(MenuItem_Index);
					}
					else if(last_selected[4] == 8){
					return Admin_Player_Stringitems(MenuItem_Index);
					}
					else if(last_selected[4] == 9){
					return Admin_Weapon_Strings(MenuItem_Index);
					}
					else if(last_selected[4] == 10){
					return Admin_Vehicle_Strings(MenuItem_Index);
					}
					else if(last_selected[4] == 11){
					return Admin_Teleport_Strings(MenuItem_Index);
					}
					else if(last_selected[4] == 12){
					return Admin_Weather_Strings(MenuItem_Index);
					}
					else if(last_selected[4] == 13){
					return Admin_Model_Strings(MenuItem_Index);
					}
					else if(last_selected[4] == 14){
					return Admin_Animations_Strings(MenuItem_Index);
					}
					else if(last_selected[4] == 15){
					return Admin_Attachments_Strings(MenuItem_Index);
					}
					else if(last_selected[4] == 16){
					return Admin_Troll_Strings(MenuItem_Index);
					}
					else if(last_selected[4] == 17){
					return Admin_Menu_Strings(MenuItem_Index);
					}
					else if(last_selected[4] == 18){
					return Admin_Freeze_Strings(MenuItem_Index);
					}
					else if(last_selected[4] == 19){
					return Admin_Temp_Strings(MenuItem_Index);
					}				
				}
			}
		}		
	}
	else if(menu_level == 6){
		if(last_selected[1] == 2){
			if(last_selected[2] > 3){
				if(last_selected[3] == 7){
					if(last_selected[4] == 7){
						if(last_selected[5] == 1){								
							return MD_VehOpt_Save_ColourSettings_Strings(20);														
						}	
						else if(last_selected[5] == 2){							
							return MD_VehOpt_Save_ColourSettings_Strings(21);											
						}	
						else if(last_selected[5] == 3){							
							return MD_VehOpt_Save_ColourSettings_Strings(5);												 							
						}																
					}					
				}				
			}					
		}		
	}	
	else menu_item[MenuItem_Index].charval = "~PAD_LEFT~ Not Implemented ~PAD_RIGHT~";		
}