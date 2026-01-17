/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Current Version : TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */    

#pragma once

/**Devil is rethinking this!**/

//int rapidweapon;
//bool DevilsRapidFire;
		

void MC_Weapon_Setup(const int Player_ID){
	//!**Player Char Check**//
	Ped Player_PED;
	if(!PLAYER_HAS_CHAR(Player_ID))return Alert_Abort(Error_Char_Missing,false);
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);
	//!**********************/	
	item_highlighted = 6;
	MENU_SUB_HEADER = "Weapons Option";	
	NETWORK_FIRST_FOUR_ITEMS_MENU_SETUP();
	Add_JumpOver("~BLIP_94~  MD W E A P O N S  ~BLIP_94~");			//5
	AddFunction_Value_CB("All",5);									//6  // Carry All Weapons (You) / Poor Weapons / Advanced Weapons / Remove
	AddFunction_Value_CB("Melee",5);								//7  //	List Poor weapons + Remove
	AddFunction_Value_CB("Throw",3);								//8
	AddFunction_Value_CB("Poor",7);									//9  //	List Advanced weapons + Remove
	AddFunction_Value_CB("Advanced",7);								//10  //	List Explosive Third Party weapons + Remove
	AddFunction_Value_CB("TBoGT",7);								//11
	AddFunction_Value_CB("Special",14);								//12
	AddFunction_Value("Vehicle",10);									//13  //	List Vehicle related Third Party weapons + Remove !!NO NETPLAYERS
	Add_JumpOver("~BLIP_94~  O P T I O N S   ~BLIP_94~");			//14
	AddBool("Auto Aim (You) ",GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_AUTO_AIM));				//15
	AddBool("Rapid Fire (You)",GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_RAPID_FIRE));				//16
	AddBool("Unlimited Clip (You)", GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_INFINITE_AMMO));		//17
	return;
}
void REMOVE_ALL_WEAPONS_FROM_NETPLAYER(const int Player_ID){ // Here we will from now on ALWAYS use ID
	//!**Player Char Check**//
	Ped Player_PED;
	if(!PLAYER_HAS_CHAR(Player_ID)){
	Alert_Abort(Error_Char_Missing,false);
	return;
	}
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);
	//!**********************/
	REMOVE_ALL_CHAR_WEAPONS(Player_PED);
	WAIT(5);
}

void MD_All_Weapon_Strings_Action(const int Player_ID){//OK
	//!**Player Char Check**//
	Ped Player_PED;
	if(!PLAYER_HAS_CHAR(Player_ID)){
	Alert_Abort(Error_Char_Missing,false);
	return;
	}
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);
	//!**********************/	
	if(menu_item[SelectedItem].num_val == 1){
	ToggleBit(pPlayerOptionsBitSet, PLAYER_OPTION_CARRY_ALL_WEAPONS);
	Alert_Two("~b~MD: ~s~Carry All Weapons ~y~(You only!)", GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_CARRY_ALL_WEAPONS) ? PrintON : PrintOFF ,false);
	}	
	else if(menu_item[SelectedItem].num_val == 2){
		REMOVE_ALL_CHAR_WEAPONS(Player_PED);
		GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_DEAGLE,AMMO_MAX,false);//
		GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_GRENADE,AMMO_MAX,false);//
		GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_RLAUNCHER,AMMO_MAX,false);//
		GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_MP5,AMMO_MAX,false);//
		GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_M4,AMMO_MAX,false);//
		GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_BARETTA,AMMO_MAX,false);//
		GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_SNIPERRIFLE,AMMO_MAX,false);//
		GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_KNIFE,1,false);
	}
	else if(menu_item[SelectedItem].num_val == 3){//Poor
		REMOVE_ALL_CHAR_WEAPONS(Player_PED);
		GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_PISTOL,AMMO_MAX,false);
		GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_MOLOTOV,AMMO_MAX,false);
		GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_RLAUNCHER,AMMO_MAX,false);
		GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_MICRO_UZI,AMMO_MAX,false);
		GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_AK47,AMMO_MAX,false);
		GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_SHOTGUN,AMMO_MAX,false);
		GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_M40A1,AMMO_MAX,false);
		GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_KNIFE,1,false);
	}
	else if(menu_item[SelectedItem].num_val == 4){//Ballad
		REMOVE_ALL_CHAR_WEAPONS(Player_PED);
		GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_EPISODIC_9,AMMO_MAX,false);
		GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_EPISODIC_10,AMMO_MAX,false);
		GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_EPISODIC_13,AMMO_MAX,false);
		GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_EPISODIC_14,AMMO_MAX,false);
		GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_EPISODIC_15,AMMO_MAX,false);
		GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_EPISODIC_1,AMMO_MAX,false);
		GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_EPISODIC_16,AMMO_MAX,false);
		GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_KNIFE,1,false);
	}
	else if(menu_item[SelectedItem].num_val == 5)REMOVE_ALL_CHAR_WEAPONS(Player_PED);
}

void MD_Melee_Weapon_Strings_Action(const int Player_ID){
//!**Player Char Check**//
	Ped Player_PED;
	if(!PLAYER_HAS_CHAR(Player_ID)){
	Alert_Abort(Error_Char_Missing,false);
	return;
	}
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);
	//!**********************/
	if(menu_item[SelectedItem].num_val > 1 && menu_item[SelectedItem].num_val < 5 )REMOVE_ALL_CHAR_WEAPONS(Player_PED);
	if(menu_item[SelectedItem].num_val == 1)REMOVE_ALL_CHAR_WEAPONS(Player_PED);
	else if(menu_item[SelectedItem].num_val == 2)GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_KNIFE,1,false);
	else if(menu_item[SelectedItem].num_val == 3)GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_BASEBALLBAT,1,false);
	else if(menu_item[SelectedItem].num_val == 4)GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_POOLCUE,1,false);
	else if(menu_item[SelectedItem].num_val == 5)REMOVE_ALL_CHAR_WEAPONS(Player_PED);	
}

void MD_Thrown_Weapon_Strings_Action(const int Player_ID){
//!**Player Char Check**//
	Ped Player_PED;
	if(!PLAYER_HAS_CHAR(Player_ID)){
	Alert_Abort(Error_Char_Missing,false);
	return;
	}
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);
	//!**********************/
	
	if(menu_item[SelectedItem].num_val > 3)	REMOVE_ALL_CHAR_WEAPONS(Player_PED);	
	if(menu_item[SelectedItem].num_val == 1)	GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_MOLOTOV,AMMO_MAX,false);	
	else if(menu_item[SelectedItem].num_val == 2)	GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_GRENADE,AMMO_MAX,false);
	else if(menu_item[SelectedItem].num_val == 3)	REMOVE_ALL_CHAR_WEAPONS(Player_PED);	
}

void MD_Poor_Weapon_Strings_Action(const int Player_ID){
//!**Player Char Check**//
	Ped Player_PED;
	if(!PLAYER_HAS_CHAR(Player_ID)){
	Alert_Abort(Error_Char_Missing,false);
	return;
	}
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);
	//!**********************/
	if(menu_item[SelectedItem].num_val < 7 )	REMOVE_ALL_CHAR_WEAPONS(Player_PED);
	if(menu_item[SelectedItem].num_val == 1)	GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_PISTOL,AMMO_MAX,false);
	else if(menu_item[SelectedItem].num_val == 2)	GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_RLAUNCHER,AMMO_MAX,false);
	else if(menu_item[SelectedItem].num_val == 3)	GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_MICRO_UZI,AMMO_MAX,false);
	else if(menu_item[SelectedItem].num_val == 4)	GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_AK47,AMMO_MAX,false);
	else if(menu_item[SelectedItem].num_val == 5)	GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_SHOTGUN,AMMO_MAX,false);
	else if(menu_item[SelectedItem].num_val == 6)	GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_M40A1,AMMO_MAX,false);
	else if(menu_item[SelectedItem].num_val == 7)	REMOVE_ALL_CHAR_WEAPONS(Player_PED);	
}

void MD_Advanced_Weapon_Strings_Action(const int Player_ID){
//!**Player Char Check**//
	Ped Player_PED;
	if(!PLAYER_HAS_CHAR(Player_ID)){
	Alert_Abort(Error_Char_Missing,false);
	return;
	}
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);
	//!**********************/
	if(menu_item[SelectedItem].num_val < 7 )REMOVE_ALL_CHAR_WEAPONS(Player_PED);
	if(menu_item[SelectedItem].num_val == 1)	GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_DEAGLE,AMMO_MAX,false);//
	else if(menu_item[SelectedItem].num_val == 2)	GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_RLAUNCHER,AMMO_MAX,false);//
	else if(menu_item[SelectedItem].num_val == 3)	GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_MP5,AMMO_MAX,false);//
	else if(menu_item[SelectedItem].num_val == 4)	GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_M4,AMMO_MAX,false);//
	else if(menu_item[SelectedItem].num_val == 5)	GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_BARETTA,AMMO_MAX,false);//
	else if(menu_item[SelectedItem].num_val == 6)	GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_SNIPERRIFLE,AMMO_MAX,false);//
	else if(menu_item[SelectedItem].num_val == 7)	REMOVE_ALL_CHAR_WEAPONS(Player_PED);
}

void MD_Special_Weapon_Strings_Action(const int Player_ID){
	//!**Player Char Check**//
	Ped Player_PED;
	if(!PLAYER_HAS_CHAR(Player_ID)){
	Alert_Abort(Error_Char_Missing,false);
	return;
	}
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);
	//!**********************/	
	char * buffer[32];
		Strcpy(buffer, "~b~MD: ");
		PLAYER_NAME_WITH_COLOUR(Player_ID, &buffer); //WORKS!
		Strcat(buffer,  "~s~"); //41	
	if(menu_item[SelectedItem].num_val == 1){//Weapon_String[1] = "~BLIP_52~ Nailgun";
		delete_objects_on_ped(Player_PED);
		REMOVE_ALL_CHAR_WEAPONS(Player_PED);;
		attach_object_to_player(Player_PED, -1576276196,BONE_RIGHT_HAND, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,0.0000,25);
		GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_MICRO_UZI,AMMO_MAX,false);
		Strcat(buffer, DOES_OBJECT_EXIST(Attach_object[25]) ? " now has" : " no longer has");
		Strcat(buffer, " a nailgun as weapon.");		
		Alert(buffer,false);		
	}
	else if(menu_item[SelectedItem].num_val == 2){//Rocket Weapon
		delete_objects_on_ped(Player_PED);
		ToggleBit(rocketWeaponsBitSet,Player_ID);
		Strcat(buffer, GetBit(rocketWeaponsBitSet,Player_ID) ? " now has" : " no longer has");
		Strcat(buffer, " rocket weapons.");
		Alert(buffer,false);		
	}
	else if(menu_item[SelectedItem].num_val == 3){
	TOGGLE_SCRIPT("aimbot");
	}
	else if(menu_item[SelectedItem].num_val == 4){
	TOGGLE_SCRIPT("m97_grav");
	}
	else if(menu_item[SelectedItem].num_val == 5){
	TOGGLE_SCRIPT("m97_taser");
	}
	else if(menu_item[SelectedItem].num_val == 6){
	TOGGLE_SCRIPT("rocketdeagle");
	}
	else if(menu_item[SelectedItem].num_val == 7){
	TOGGLE_SCRIPT("drs01");
	}
	else if(menu_item[SelectedItem].num_val == 8){
	TOGGLE_SCRIPT("buffy_force");
	}
	else if(menu_item[SelectedItem].num_val == 9){
	TOGGLE_SCRIPT("ForceFieldv25");
	}
	else if(menu_item[SelectedItem].num_val == 10){
	TOGGLE_SCRIPT("buffy_mp5");
	}
	else if(menu_item[SelectedItem].num_val == 11){
	TOGGLE_SCRIPT("rob_cl");
	}
	else if(menu_item[SelectedItem].num_val == 12){
	TOGGLE_SCRIPT("buffy_launcher");
	}
	else if(menu_item[SelectedItem].num_val == 13){
	TOGGLE_SCRIPT("rob_carmod");
	}	
	else if(menu_item[SelectedItem].num_val == 14){//Weapon_String[6] = "~BLIP_49~ Remove Player Weapons";				
		TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("aimbot");
		TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("m97_grav");
		TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("m97_taser");
		TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("rocketdeagle");
		TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("drs01");
		TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("buffy_force");
		TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("ForceFieldv25");
		TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("buffy_mp5");
		TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("rob_cl");
		TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("buffy_launcher");
		TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("rob_carmod");	
		REMOVE_ALL_CHAR_WEAPONS(Player_PED);
		Strcat(buffer, (" no longer has") );
		Strcat(buffer, " weapons.");
		Alert(buffer,false);
	}
}

void MD_Vehicle_Weapon_Strings_Action(const int Player_ID){ // Need to do this still
	//!**Player Char Check**//
	Ped Player_PED;
	if(!PLAYER_HAS_CHAR(Player_ID)){
	Alert_Abort(Error_Char_Missing,false);
	return;
	}
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);
	//!**********************/
	if(menu_item[SelectedItem].num_val == 1){
	TOGGLE_SCRIPT("weap10");
	}
	else if(menu_item[SelectedItem].num_val == 2){
	TOGGLE_SCRIPT("weap12");
	}
	else if(menu_item[SelectedItem].num_val == 3){
	TOGGLE_SCRIPT("Sam-turrets");//Shoot explosive Vehicles
	}
	else if(menu_item[SelectedItem].num_val == 4){
	TOGGLE_SCRIPT("rev_xml_heli");//Ram
	}
	else if(menu_item[SelectedItem].num_val == 5){
	TOGGLE_SCRIPT("flameheli");//Ram 2
	}
	else if(menu_item[SelectedItem].num_val == 6){
	TOGGLE_SCRIPT("weap2");//Ram 3
	}
	else if(menu_item[SelectedItem].num_val == 7){
	TOGGLE_SCRIPT("weap3");
	}
	else if(menu_item[SelectedItem].num_val == 8){
	TOGGLE_SCRIPT("weap13");
	}
	else if(menu_item[SelectedItem].num_val == 9){
	TOGGLE_SCRIPT("AdvancedHeliRounds");
	}	
	else if(menu_item[SelectedItem].num_val == 10){
	TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("weap10");
	TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("weap12");
	TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("Sam-turrets");//Shoot explosive Vehicles
	TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("rev_xml_heli");//Ram
	TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("flameheli");//Ram 2
	TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("weap2");//Ram 3
	TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("weap3");
	TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("weap13");
	TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("AdvancedHeliRounds");
	}
}

void MD_TBOGT_Weapon_Strings_Action(const int Player_ID){
	//!**Player Char Check**//
	Ped Player_PED;
	if(!PLAYER_HAS_CHAR(Player_ID)){
	Alert_Abort(Error_Char_Missing,false);
	return;
	}
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);
	//!**********************/
	if(Episode == 2){
		REMOVE_ALL_CHAR_WEAPONS(Player_PED);;
		if(menu_item[SelectedItem].num_val == 1)GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_EPISODIC_13,AMMO_MAX,false);
		if(menu_item[SelectedItem].num_val == 2)GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_EPISODIC_1,AMMO_MAX,false);
		else if(menu_item[SelectedItem].num_val == 3)GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_EPISODIC_16,AMMO_MAX,false);
		else if(menu_item[SelectedItem].num_val == 4)GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_EPISODIC_9,AMMO_MAX,false);
		else if(menu_item[SelectedItem].num_val == 5)GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_EPISODIC_10,AMMO_MAX,false);
		else if(menu_item[SelectedItem].num_val == 6)GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_EPISODIC_14,AMMO_MAX,false);		
		else if(menu_item[SelectedItem].num_val == 7)GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_EPISODIC_15,AMMO_MAX,false);
		else if(menu_item[SelectedItem].num_val == 8)GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_EPISODIC_21,AMMO_MAX,false);
		else if(menu_item[SelectedItem].num_val == 9)GIVE_WEAPON_TO_CHAR(Player_PED,WEAPON_EPISODIC_12,AMMO_MAX,false);		
		else if(menu_item[SelectedItem].num_val == 10)REMOVE_ALL_CHAR_WEAPONS(Player_PED);
	}
	else Alert(Error_TBOGT,false);
}


void MC_Weapon_Action(const int Player_ID){	
	//!**Player Char Check**//
	Ped Player_PED;
	if(!PLAYER_HAS_CHAR(Player_ID)){
	Alert_Abort(Error_Char_Missing,false);
	return;
	}
	else GET_PLAYER_CHAR(Player_ID,&Player_PED);
	//!**********************/	
	if(SelectedItem == 1)MD_Spy_Strings_Action(Player_ID);
	else if(SelectedItem == 2)Universal_Delete(Delete_Distance_Radius, menu_item[SelectedItem].num_val, true);
	else if(SelectedItem == 3)MD_PlayerOption_Strings_Action();
	else if(SelectedItem == 4)MD_QuickTeleport_Strings_Action(Player_ID);
	else if(SelectedItem == 6)MD_All_Weapon_Strings_Action(Player_ID);
	else if(SelectedItem == 7)MD_Melee_Weapon_Strings_Action(Player_ID);
	else if(SelectedItem == 8)MD_Thrown_Weapon_Strings_Action(Player_ID);
	else if(SelectedItem == 9)MD_Poor_Weapon_Strings_Action(Player_ID);
	else if(SelectedItem == 10)MD_Advanced_Weapon_Strings_Action(Player_ID);
	else if(SelectedItem == 11)MD_TBOGT_Weapon_Strings_Action(Player_ID);
	else if(SelectedItem == 12)MD_Special_Weapon_Strings_Action(Player_ID);
	else if(SelectedItem == 13)MD_Vehicle_Weapon_Strings_Action(Player_ID);
	else if(SelectedItem == 15){
		ToggleBit(pPlayerOptionsBitSet, PLAYER_OPTION_AUTO_AIM);
		menu_item[SelectedItem].extra_val = GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_AUTO_AIM);
	}
	else if(SelectedItem == 16){	
		ToggleBit(pPlayerOptionsBitSet, PLAYER_OPTION_RAPID_FIRE);
		if(!HAS_CHAR_GOT_WEAPON(pPlayer,WEAPON_ARMOUR))GIVE_WEAPON_TO_CHAR(pPlayer,WEAPON_PISTOL,AMMO_MAX,false);
		//GET_CURRENT_CHAR_WEAPON(pPlayer, &rapidweapon);//TESTING
		
		menu_item[SelectedItem].extra_val = GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_RAPID_FIRE);
	}
	else if(SelectedItem == 17){
		ToggleBit(pPlayerOptionsBitSet, PLAYER_OPTION_INFINITE_AMMO);
		menu_item[SelectedItem].extra_val = GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_INFINITE_AMMO);
	}		
}


void MC_Weapon_Loop(void){	
	if(GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_CARRY_ALL_WEAPONS)) MD_CarryAllweapons();
	if(GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_AUTO_AIM)){		
		DISABLE_PLAYER_LOCKON(iPlayer, !GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_AUTO_AIM));
		ALLOW_LOCKON_TO_FRIENDLY_PLAYERS(iPlayer, GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_AUTO_AIM));
		ALLOW_LOCKON_TO_RANDOM_PEDS(iPlayer, GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_AUTO_AIM));		
	}	
	if(GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_RAPID_FIRE)){ // Need to redo this to non timed rapid fire
		int PlayerWep;
		SET_PLAYER_FAST_RELOAD(iPlayer, true);
		ENABLE_MAX_AMMO_CAP(false);
		GET_CURRENT_CHAR_WEAPON(pPlayer, &PlayerWep);
		if(IS_BUTTON_PRESSED(0,BUTTON_R) && PlayerWep != WEAPON_UNARMED) SET_CHAR_ALL_ANIMS_SPEED(pPlayer, 40);
		else SET_CHAR_ALL_ANIMS_SPEED(pPlayer, 1);		
	}	
	if(GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_INFINITE_AMMO)){
		if(IS_CHAR_SHOOTING(pPlayer)){
				uint weapon,Unlimited_Ammunition;
				GET_CURRENT_CHAR_WEAPON(pPlayer,&weapon);
			if(weapon != WEAPON_GRENADE && weapon != WEAPON_MOLOTOV){
				GET_MAX_AMMO_IN_CLIP(pPlayer,weapon,&Unlimited_Ammunition);
				SET_AMMO_IN_CLIP(pPlayer,weapon,Unlimited_Ammunition);
			}
		}
	}			
}

