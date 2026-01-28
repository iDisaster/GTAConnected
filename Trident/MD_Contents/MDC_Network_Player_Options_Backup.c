/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Current Version : TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */  

#pragma once

//SET_PED_COMPONENTS_TO_NETWORK_PLAYERSETTINGS_MODEL(Ped ped);

//extern void MAKE_PLAYER_FIRE_PROOF(int player, boolean proof); //host onleh probs but ye

/*
NATHAN NOTES
ToggleBit(forceFieldBitSet, GetPlayerIndex());
if(GetBit(forceFieldBitSet, GetPlayerIndex()))

#define GetBit(BitSet, bitIndex) IS_BIT_SET(BitSet, bitIndex)

#define SetBit(BitSet, bitIndex, bitValue)	SetBitHelper(&BitSet, bitIndex, bitValue)

uint forceFieldBitSet;
uint juggernautBitSet;
uint restrictWeaponBitSet;
uint restrictVehicleBitSet;

for(i = 0; i < MAX_NETWORK_PLAYERS; i++)
	{
		if(!IS_NETWORK_PLAYER_ACTIVE(i))
		{
			SetBit(forceFieldBitSet, i, false);
			SetBit(juggernautBitSet, i, false);
			SetBit(restrictWeaponBitSet, i, false);
			SetBit(restrictVehicleBitSet, i, false);
			continue;
		}

*/

void MC_Network_Start_Setup(void){ 
	register int PlayerScan;
	MENU_SUB_HEADER = "Network Players Menu";
	player_count = 0;
	for(PlayerScan = 0;PlayerScan < MAX_PLAYERS;PlayerScan++){
		if(Player_Display_Selection(PlayerScan))continue;			
		players[player_count].id = PlayerScan;
		player_count++;
	}	
	if(player_count > 0){	
		SetBit(MD_Misc_OptionsBitSet, MD_MISC_NETPLAYER_LIST, true);
		AddSubMenu("~BLIP_82~ All Players");
		for(PlayerScan = 0; PlayerScan < MAX_PLAYERS; PlayerScan++){
			if(Player_Display_Selection(PlayerScan))continue;			
			AddPlayername(GET_PLAYER_NAME(PlayerScan));													
		}		
	}
	else{
		SetBit(MD_Misc_OptionsBitSet, MD_MISC_MENU_IN_ERROR, true);
		MENU_SUB_HEADER = "Network Players Menu";
		AddSubMenu("Game is Empty");
	}
	return;		
}

void MC_Network_Start_Action(void){	
	ChangeNetPlayer = SelectedItem;	
}

void MC_Network_Main_Setup(void){ 
	item_highlighted = 1;	

	uint index;
	if(GetBit(MD_Misc_OptionsBitSet, MD_MISC_NETPLAYER_LIST)){
	ChangeNetPlayer = last_selected[(menu_level - 1)]- 2;
	SetBit(MD_Misc_OptionsBitSet, MD_MISC_NETPLAYER_LIST, false);
	}
	else{
	index = ChangeNetPlayer;
	}
	MENU_SUB_HEADER = "Network Player Options";									
	NETWORK_FIRST_FOUR_ITEMS_MENU_SETUP();
	//Add Jumpover 
	AddSubMenu("Network Player ~COL_NET_4~Options  ~PAD_RIGHT~");											//5
	AddSubMenu("Weapon ~COL_NET_2~Options  ~PAD_RIGHT~");											//6
	AddSubMenu("Vehicle ~COL_NET_1~Options  ~PAD_RIGHT~");											//7
	AddSubMenu("Teleport ~COL_NET_11~Options  ~PAD_RIGHT~");										//8
	AddSubMenu("Army ~COL_NET_8~Options ~PAD_RIGHT~");									//9
	AddSubMenu("Rotation Engine ~COL_NET_11~Options ~PAD_RIGHT~");							//10
	AddSubMenu("Object Attachment ~COL_NET_12~Options ~PAD_RIGHT~");									//11
	AddSubMenu("Delete/Clear (To be taken out)~COL_NET_4~Options  ~PAD_RIGHT~");											//12
	AddFunction_CB(IS_THIS_MACHINE_THE_SERVER() ? "Kick Player" : "~BLIP_52~ Kick Player ~y~(Host Only)");	//13
	AddBool_CB("Mute Player",NETWORK_IS_PLAYER_MUTED_BY_ME(players[index].id)); 	//Nathan was here			//14
	AddSubMenu("Unfriendly ~COL_NET_8~Options ~PAD_RIGHT~");										//15
	AddSubMenu("Admin (Pre V13) ~COL_NET_8~Options ~PAD_RIGHT~");									//16
	AddSubMenu("Admin New V13 ~COL_NET_8~Options ~PAD_RIGHT~");									//17]
	item_highlighted = 5;
	return;
}

void MC_Network_Main_Action(void){
	/**Dont touch this!! - Yes this needs to be here to update crossbrowser*/
	uint index;
	if(GetBit(MD_Misc_OptionsBitSet, MD_MISC_NETPLAYER_LIST)){
	ChangeNetPlayer = last_selected[(menu_level - 1)]- 2;	
	SetBit(MD_Misc_OptionsBitSet, MD_MISC_NETPLAYER_LIST, false);
	}
	else{
	index = ChangeNetPlayer;
	}
	NETWORK_FIRST_FOUR_ITEMS_MENU_ACTION();			
	//Add Jumpover
	if(PLAYER_HAS_CHAR(players[ChangeNetPlayer].id)){
		if(SelectedItem == 13){
			char * buffer[32]; //128 chars
			Strcpy(buffer, "~b~MD: "); //16
			PLAYER_NAME_WITH_COLOUR(players[ChangeNetPlayer].id, &buffer); //WORKS!//25 chars
			SET_THIS_MACHINE_RUNNING_SERVER_SCRIPT( 1 );
			NETWORK_KICK_PLAYER(players[ChangeNetPlayer].id);
			if(IS_THIS_MACHINE_THE_SERVER()){
				NETWORK_KICK_PLAYER(players[ChangeNetPlayer].id); //I think NETWORK_KICK_PLAYER(&players[ChangeNetPlayer].id) may do a vote..
				Strcat(buffer, "~s~ was kicked from the game."); //29 + 34 = 63
			} 
			else
			{
				Strcat(buffer, "~s~ could not be kicked, you are not host."); //38 + 29 = 67
			}
			Alert(buffer,false);
				//Alert("~b~MD: ~s~You are not host.",false);			
		}
		else if(SelectedItem == 14){
		 NETWORK_SET_PLAYER_MUTED(players[ChangeNetPlayer].id, !NETWORK_IS_PLAYER_MUTED_BY_ME(players[ChangeNetPlayer].id));
		 menu_item[SelectedItem].extra_val = NETWORK_IS_PLAYER_MUTED_BY_ME(players[ChangeNetPlayer].id);			 
		}		
	}		
}

void MC_Network_Player_Setup(void){
	/**Dont touch this!!!**/
	//uint index = ChangeNetPlayer;
	int id = players[ChangeNetPlayer].id;
	
	MENU_SUB_HEADER = "Network Player Options";	 
	//need a loops submenu but we need
	//explode
	//burn
	//taser
	//set wanted level (host only)
	//need a submenu (loops) //ONLY IF RUN OUTTA SPACE
	//gonna expand mod assist out to have its functions specific :)
	
	
	/**vvvvvvvvvvvvvvvvvv!!!THIS SETUP NEEDS TO BE IN EVERY SUB!!!vvvvvvvvvvvvvvvvvvvvvvvvvvv*/
	NETWORK_FIRST_FOUR_ITEMS_MENU_SETUP();																					//4 General Shortcuts to be included in every submenu
	Add_JumpOver("~BLIP_94~ MD  N E T P L A Y E R  O P T I O N S ~BLIP_94~");														//5 General Shortcuts to be included in every submenu
	/**^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^**/
	
	/**Devils Note : Add strings if u want in String folder i have setup MDSTR_Netplayer_Options_Strings.c - Tested : WORKS!**/
	AddFunction_CB("Give Weapons & Armour");																						//6
	AddFunction_Value_CB("Set helper loops:",2);																						//7	//turn into charval (Set helper loops) on/off //make it change highlighted val too so they see stuff turn on etc		//2
	AddBool_CB("Infinite Armour",GetBit(infiniteArmourBitSet,id)); 																	//8
	#ifdef Premium
	AddBool_CB("Drive/Walk on Water (enhanced)",DOES_OBJECT_EXIST(drive_water[id]));												//9 OR / OR
	#else
	AddBool_CB("Drive/Walk on Water",DOES_OBJECT_EXIST(drive_water[id]));															//9 OR / OR
	#endif
	AddBool_CB("Vehicle auto-flip", GetBit(autoFlipVehBitSet,id));																	//10
	AddBool_CB("Vehicle auto-fix", GetBit(autoFixVehBitSet,id)); 																	//11
	AddBool_CB("Freeze gun protect", GetBit(freezeGunProtectBitSet,id)); 															//12
	AddBool_CB(IS_THIS_MACHINE_THE_SERVER() ? "Never wanted" : "~BLIP_68~ Never wanted (host only)", GetBit(neverWantedBitSet,id)); //13
	AddBool_CB("Rocket Weapons",GetBit(rocketWeaponsBitSet, id));																	//14
	AddFunction_CB("Delete attached objects");								 														//15
	item_highlighted = 6; 		
	//need to add set wanted level (host only)
	/*
	ALTER_WANTED_LEVEL(GetPlayerIndex(), menu[highlightedItem].value);
APPLY_WANTED_LEVEL_CHANGE_NOW(GetPlayerIndex());
SET_CHAR_WANTED_BY_POLICE(playerPed, true);
	*/
	//return;
}
void MC_Network_Player_Action(void){
	int id = players[ChangeNetPlayer].id;
		/**vvvvvvvvvvvvvvvvvv!!!THIS ACTION NEEDS TO BE IN EVERY SUB!!!vvvvvvvvvvvvvvvvvvvvvvvvvvv*/
		NETWORK_FIRST_FOUR_ITEMS_MENU_ACTION();				
		//Jumpover 5
		/**^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^**/
		char * buffer[32];
		if(SelectedItem > 5 && SelectedItem != 9){
			Strcpy(buffer, "~b~MD: ");
			PLAYER_NAME_WITH_COLOUR(id, &buffer); //WORKS!
			Strcat(buffer,  "~s~"); //41
		}
		if(SelectedItem == 6 && PLAYER_HAS_CHAR(players[ChangeNetPlayer].id)){
			GIVE_EPISODIC_WEAPONS_TO_CHAR(PLAYER_CHAR(players[ChangeNetPlayer].id), Episode); //yes this is correct
			Strcat(buffer, " has been given weapons and armour."); //35 + 41 = 76 chars
		}
		else if(SelectedItem == 7){ 
			bool to_enable = (menu_item[SelectedItem].num_val == 1);
			SetBit(infiniteArmourBitSet,id,to_enable);
			menu_item[8].extra_val = to_enable;
			SetBit(autoFlipVehBitSet,id,to_enable);
			menu_item[10].extra_val = to_enable;
			SetBit(autoFixVehBitSet,id,to_enable);
			menu_item[11].extra_val = to_enable;
			SetBit(freezeGunProtectBitSet,id,to_enable);
			menu_item[12].extra_val = to_enable;
			if(IS_THIS_MACHINE_THE_SERVER())
			{
				SetBit(neverWantedBitSet,id,to_enable);
				menu_item[13].extra_val = to_enable;
			}
			//SetBit(rocketWeaponsBitSet,id,to_enable); //causes laggg and players often kill emselves so
		//Set loops enabled/disabled
		}
		else if(SelectedItem == 8){ //inf armour
			ToggleBit(infiniteArmourBitSet, id);
			Strcat(buffer, (GetBit(infiniteArmourBitSet,id) ? " now has" : " no longer has") );
			Strcat(buffer, " infinite armour."); // 55
			menu_item[SelectedItem].extra_val = GetBit(infiniteArmourBitSet, id);
		}
		else if(SelectedItem == 9){ //drve walk wata //enhanced has ifdef on the drive walk water loop in player options buddy :)
			TOGGLE_DRIVE_WALK_WATER_FOR_PLAYER(id); //prints in function
			menu_item[SelectedItem].extra_val = IS_DRIVE_WALK_WATER_ENABLED_FOR_PLAYER(id);
		}
		else if(SelectedItem == 10){ //auto flip veh
			ToggleBit(autoFlipVehBitSet, id);
			Strcat(buffer, (GetBit(autoFlipVehBitSet,id) ? " now has" : " no longer has") );
			Strcat(buffer, " vehicle auto-flip.");
			menu_item[SelectedItem].extra_val = GetBit(autoFlipVehBitSet, id);
		}		
		else if(SelectedItem == 11) //veihicle autofix
		{
			ToggleBit(autoFixVehBitSet,id);
			Strcat(buffer, (GetBit(autoFixVehBitSet,id) ? " now has" : " no longer has") );
			Strcat(buffer, " vehicle auto-fix.");
			menu_item[SelectedItem].extra_val = GetBit(autoFixVehBitSet, id);
		}
		else if(SelectedItem == 12) //freeze gun protect
		{
			ToggleBit(freezeGunProtectBitSet,id);
			Strcat(buffer, (GetBit(freezeGunProtectBitSet,id) ? " now has" : " no longer has") );
			Strcat(buffer, " freeze gun protection.");
			menu_item[SelectedItem].extra_val = GetBit(freezeGunProtectBitSet, id);
		}
		else if(SelectedItem == 13) //never wanted
		{
			if(IS_THIS_MACHINE_THE_SERVER())
			{
				ToggleBit(neverWantedBitSet,id);
				Strcat(buffer, (GetBit(neverWantedBitSet,id) ? " now has" : " no longer has") );
				Strcat(buffer, " never-wanted.");
				menu_item[SelectedItem].extra_val = GetBit(neverWantedBitSet, id);
			}
			else
			{
				Alert("~b~MD: ~s~You must be host to change players wanted levels.",false);
				return;
			}
		}
		else if(SelectedItem == 14) //rocket weapons
		{
			ToggleBit(rocketWeaponsBitSet,id);
			Strcat(buffer, (GetBit(rocketWeaponsBitSet,id) ? " now has" : " no longer has") );
			Strcat(buffer, " rocket weapons.");
			menu_item[SelectedItem].extra_val = GetBit(rocketWeaponsBitSet, id);
		}
		else if(SelectedItem == 15 && PLAYER_HAS_CHAR(players[ChangeNetPlayer].id))
		{
			delete_objects_on_ped(PLAYER_CHAR(players[ChangeNetPlayer].id));
			Strcat(buffer, " had objects attached to them deleted.");
		}	
		
		if(SelectedItem > 5 && SelectedItem != 9){
			Alert(buffer,false);
			return;
		}
	
}

/*
SetBit(modAssistBitSet, NetPlayer_ID, false);
			SetBit(restrictWeaponsBitSet, NetPlayer_ID, false);
*/
void MC_Network_MD_Assist_Loop(void) //Nathan making things stable!
{
	if(Invalid_Player(MD_Assist_to_run_index) || !PLAYER_HAS_CHAR(MD_Assist_to_run_index))
	{
		SetBit(restrictWeaponsBitSet, MD_Assist_to_run_index, false);
		SetBit(autoDeleteVehicleBitSet, MD_Assist_to_run_index, false);
		SetBit(autoBurnBitSet, MD_Assist_to_run_index, false);
		SetBit(autoFlipVehBitSet, MD_Assist_to_run_index, false);
		SetBit(autoFixVehBitSet, MD_Assist_to_run_index, false);
		SetBit(freezeGunProtectBitSet, MD_Assist_to_run_index, false);
		SetBit(infiniteArmourBitSet, MD_Assist_to_run_index, false);
		SetBit(neverWantedBitSet, MD_Assist_to_run_index, false);
		if(MD_Assist_to_run_index < (MAX_PLAYERS - 1)) MD_Assist_to_run_index = (MD_Assist_to_run_index + 1);	
		else MD_Assist_to_run_index = 0;
		return;
	}
	int MD_Assist_to_run_ped;
	GET_PLAYER_CHAR(MD_Assist_to_run_index,&MD_Assist_to_run_ped);
//NEW
	bool auto_flip_veh = GetBit(autoFlipVehBitSet, MD_Assist_to_run_index);
	bool auto_fix_veh = GetBit(autoFixVehBitSet, MD_Assist_to_run_index);
	bool freeze_gun_protect = GetBit(freezeGunProtectBitSet, MD_Assist_to_run_index); //done
	bool infinite_armour = GetBit(infiniteArmourBitSet, MD_Assist_to_run_index); //done
	bool never_wanted_host_only = GetBit(neverWantedBitSet, MD_Assist_to_run_index); //done
///
	bool restrict_weapons = GetBit(restrictWeaponsBitSet, MD_Assist_to_run_index);
	bool auto_del_vehicle = GetBit(autoDeleteVehicleBitSet, MD_Assist_to_run_index);
	bool auto_burn = GetBit(autoBurnBitSet, MD_Assist_to_run_index);
	//if(players[MD_Assist_to_run_index].mod_assist || players[MD_Assist_to_run_index].restrict_weps)

	if(infinite_armour)
	{
		int armour;
		GET_CHAR_ARMOUR(MD_Assist_to_run_ped,&armour);
		if(armour < 200) //max armour is 200 not 99
		{
			if(!HAS_CHAR_GOT_WEAPON(MD_Assist_to_run_ped,WEAPON_ARMOUR))
				GIVE_WEAPON_TO_CHAR(MD_Assist_to_run_ped,WEAPON_ARMOUR,1,false);
			//I wouldn't put a print here as it'll get shown way too often
			//ADD_ARMOUR_TO_CHAR(MD_Assist_to_run_ped,(200 - armour));
			ADD_ARMOUR_TO_CHAR(MD_Assist_to_run_ped,(210 - armour)); //account for net latenyz.. (10 extra fuck it)
		}
	}

	if(freeze_gun_protect)
	{
		if(HAS_CHAR_GOT_WEAPON(MD_Assist_to_run_ped, WEAPON_ROCKET))
		{
			REMOVE_WEAPON_FROM_CHAR(MD_Assist_to_run_ped, WEAPON_ROCKET);
			if(!HAS_CHAR_GOT_WEAPON(MD_Assist_to_run_ped, WEAPON_UNARMED))
			{
				GIVE_WEAPON_TO_CHAR(MD_Assist_to_run_ped,WEAPON_UNARMED,1,false);
			}
			char* buffer[21]; //84 characters
			Strcpy(buffer, "~b~MD: ~s~Removed the freeze gun from "); //53 Characters
			PLAYER_NAME_WITH_COLOUR(MD_Assist_to_run_index, &buffer); //WORKS! = 26 + 53 = 79
			Strcat(buffer, "~s~."); //4 + 79 = 83
			Alert(buffer, true);
		}
	}

	if(never_wanted_host_only)
	{
		if(IS_WANTED_LEVEL_GREATER(MD_Assist_to_run_index, 0))
		{
			ALTER_WANTED_LEVEL(MD_Assist_to_run_index, 0);
			APPLY_WANTED_LEVEL_CHANGE_NOW(MD_Assist_to_run_index);
			SET_CHAR_WANTED_BY_POLICE(MD_Assist_to_run_ped, false);
			CLEAR_WANTED_LEVEL(MD_Assist_to_run_index);
			//cleared players wanted level print mayB
		}
	}
//SET_NETWORK_ID_CAN_MIGRATE(carid[i], TRUE); //gives them back control quicker maybe?
	if(auto_fix_veh || auto_flip_veh || auto_del_vehicle)
	{
		if(is_driving(MD_Assist_to_run_ped))
		{
			int tmp_veh, nvid;
			GET_CAR_CHAR_IS_USING(MD_Assist_to_run_ped,&tmp_veh);
			GET_NETWORK_ID_FROM_VEHICLE(tmp_veh,&nvid);
			if(auto_fix_veh)
			{
				if(IS_CAR_ON_FIRE(tmp_veh) || IS_CAR_DEAD(tmp_veh))
				{
					REQUEST_CONTROL_OF_NETWORK_ID(nvid);
					if(HAS_CONTROL_OF_NETWORK_ID(nvid))
					{
						SET_CAR_FORWARD_SPEED(tmp_veh,0.0f); //stop net control fucking them up
						FIX_CAR(tmp_veh);
						SET_CAR_HEALTH(tmp_veh,1000);
						SET_CAR_ENGINE_ON(tmp_veh,true,true);
						char * buffer[32]; //128 characters to play with
						Strcpy(buffer, "~b~MD: ~s~Fixed "); //27 Characters
						PLAYER_NAME_WITH_COLOUR(MD_Assist_to_run_index, &buffer); //WORKS! 47
						Strcat(buffer, "'s ~s~"); //3 + 47 = 50
						Strcat(buffer, VEHICLES_MODEL_NAME(tmp_veh));
						Strcat(buffer, ".");
						Alert(buffer,true);
						//print mod assist repaired players vehicle (will do this)
					}
				}
			}
			if(auto_flip_veh)
			{
				if(IS_CAR_UPSIDEDOWN(tmp_veh))
				{
					float speed,ground;
					GET_CAR_SPEED(tmp_veh,&speed); 
					float x,y,z,h;
					GET_CAR_COORDINATES(tmp_veh,&x,&y,&z);
					GET_CAR_HEADING(tmp_veh,&h);
					GET_GROUND_Z_FOR_3D_COORD(x, y, z, &ground);
					int height = (z - ground);
					if(speed < 0.8f && height < 4) 
					{
						REQUEST_CONTROL_OF_NETWORK_ID(nvid);
						if(HAS_CONTROL_OF_NETWORK_ID(nvid))
						{
							SET_CAR_FORWARD_SPEED(tmp_veh,0.0f);
							SET_VEHICLE_QUATERNION(tmp_veh,0,0,0,0);
							SET_CAR_HEADING(tmp_veh,h);
							//SET_CAR_ON_GROUND_PROPERLY(tmp_veh); //can sometimes cause freezing
							char * buffer[32]; //128 characters to play with
							Strcpy(buffer, "~b~MD: ~s~Flipped "); //25 Characters
							PLAYER_NAME_WITH_COLOUR(MD_Assist_to_run_index, &buffer); //WORKS! 40
							Strcat(buffer, "'s ~s~"); //3 + 40 = 43
							Strcat(buffer, VEHICLES_MODEL_NAME(tmp_veh)); //15 to be safe //58 characters-
							Strcat(buffer, ".");
							Alert(buffer,true);
							//print vehicle was flipped
						}
					}
				}
			}
			if(auto_del_vehicle)
			{
				REQUEST_CONTROL_OF_NETWORK_ID(nvid);
				if(HAS_CONTROL_OF_NETWORK_ID(nvid))
				{
					char* buffer[32]; //leave as 32
					Strcpy(buffer, "~b~MD: ");  //15
					PLAYER_NAME_WITH_COLOUR(MD_Assist_to_run_index, &buffer); //WORKS! 34
					Strcat(buffer, "'s ~s~"); //6 = 40
					Strcat(buffer, VEHICLES_MODEL_NAME(tmp_veh));
					DELETE_CAR(&tmp_veh);
					Strcat(buffer, " was deleted.");
					Alert(buffer, false);
				}
			}
		}
	}
	if(restrict_weapons)
	{
		REMOVE_ALL_CHAR_WEAPONS(MD_Assist_to_run_ped);
		if(is_driving(MD_Assist_to_run_ped)){
			int tmp_veh;
			GET_CAR_CHAR_IS_USING(MD_Assist_to_run_ped,&tmp_veh);
			int nvid;
			GET_NETWORK_ID_FROM_VEHICLE(tmp_veh,&nvid);
			int model;
			GET_CAR_MODEL(tmp_veh,&model);
			if(model == MODEL_ANNIHILATOR || model == MODEL_FIRETRUK || model == MODEL_BUZZARD || model == MODEL_APC)
			{
				REQUEST_CONTROL_OF_NETWORK_ID(nvid);
				if(HAS_CONTROL_OF_NETWORK_ID(nvid))
				{
					DELETE_CAR(&tmp_veh);
					char * buffer[32];
					Strcpy(buffer, "~b~MD: "); //13
					PLAYER_NAME_WITH_COLOUR(MD_Assist_to_run_index, &buffer); //WORKS!
					Strcat(buffer, "'s ~s~fire-power ("); //3
					Strcat(buffer, GET_STRING_FROM_TEXT_FILE(GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(model))); //13?
					Strcat(buffer, ") has been deleted."); //18
					Alert(buffer,true);
				}
			}
		}
	}	
	if(auto_burn)
	{
		if(!IS_CHAR_ON_FIRE(MD_Assist_to_run_ped))
		{
		//MD: playername is now burning.
			char* buffer[16]; //64 chars
			Strcpy(buffer, "~b~MD: "); //16
			PLAYER_NAME_WITH_COLOUR(MD_Assist_to_run_index, &buffer); //WORKS!
			Strcat(buffer, " ~s~was set on fire."); //about 55
			START_CHAR_FIRE(MD_Assist_to_run_ped);
			Alert(buffer, false);
		}
	}	
	if(MD_Assist_to_run_index < (MAX_PLAYERS - 1)) MD_Assist_to_run_index = (MD_Assist_to_run_index + 1);	
	else MD_Assist_to_run_index = 0;
	
}

void MC_Network_Player_Loop(void){
	register int NetPlayer_ID;
	Ped NetPlayer_Char;
	for(NetPlayer_ID = 0;NetPlayer_ID < MAX_PLAYERS; NetPlayer_ID++){
		if (Player_Display_Selection(NetPlayer_ID)){
			SetBit(rocketWeaponsBitSet, NetPlayer_ID, false);
			SetBit(constantBoomBitSet, NetPlayer_ID, false);
			if(DOES_OBJECT_EXIST(drive_water[NetPlayer_ID])) DELETE_OBJECT(&drive_water[NetPlayer_ID]);
			continue;
		}
		if( !PLAYER_HAS_CHAR(NetPlayer_ID)) continue;
		GET_PLAYER_CHAR(NetPlayer_ID,&NetPlayer_Char);
		if(!DOES_CHAR_EXIST(NetPlayer_Char)) continue;
		float x,y,z,h;
		GET_CHAR_COORDINATES_HEADING(NetPlayer_Char,&x,&y,&z,&h);
		
		if(GetBit(constantBoomBitSet, NetPlayer_ID))
		{
			ADD_EXPLOSION(x,y,z, EXPLOSION_SHIP_DESTROY, 10, true, false, 1);
		}
		
		bool player_is_driving = false;
		int tmp_veh;
		bool in_car = IS_CHAR_IN_ANY_CAR(NetPlayer_Char);	
		if(GetBit(rocketWeaponsBitSet, NetPlayer_ID)){
			if(!in_car){
				if (IS_CHAR_SHOOTING(NetPlayer_Char)){
					float ax,ay,az;
					float wx,wy,wz;
					Ped rped;

					GetOffset(NetPlayer_Char, 5, &ax, &ay, &az);
					CREATE_RANDOM_CHAR(ax, ay, az, &rped);
					

					while ( !DOES_CHAR_EXIST(rped)) WAIT(0);
					SET_CHAR_VISIBLE(rped,true);
					GIVE_WEAPON_TO_CHAR(rped, WEAPON_RLAUNCHER, 2, 0);
					SET_CURRENT_CHAR_WEAPON(rped, WEAPON_RLAUNCHER, true);					
					GetOffset(NetPlayer_Char, 100,&wx,&wy,&wz);
					FIRE_PED_WEAPON(rped, wx, wy, wz);
					SET_CHAR_VISIBLE(rped,false);
					DELETE_CHAR(&rped);
					//REMOVE_WEAPON_FROM_CHAR(rped, WEAPON_RLAUNCHER);
				}
			}
		}	
		if(GetByteInSet(SpectateAndAttachByteSet, ATTACH_PLAYER_INDEX) == NetPlayer_ID){
			int offsetX[6], offsetY[6], offsetZ[6];
			offsetX[0] = 0; offsetY[0] = 1; offsetZ[0] = -0.95; //in front
			offsetX[1] = 0; offsetY[1] = -1; offsetZ[1] = -0.95; //behind
			offsetX[2] = 0; offsetY[2] = 0; offsetZ[2] = (z > 1000 ? -500 : 5);
			offsetX[3] = 0; offsetY[3] = 0; offsetZ[3] = 2; //On top of player
			offsetX[4] = 1; offsetY[4] = 0; offsetZ[4] = -0.95; //Right of player
			offsetX[5] = -1; offsetY[5] = 0; offsetZ[5] = -0.95; //left of player
			const int Attach_Type = GetByteInSet(SpectateAndAttachByteSet, ATTACH_TYPE);
			if(Attach_Type > 0){
				GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(NetPlayer_Char, offsetX[Attach_Type - 1], offsetY[Attach_Type - 1], offsetZ[Attach_Type - 1], &x, &y, &z);
				SET_CHAR_COORDINATES(pPlayer,x,y,z);
				SET_CHAR_HEADING(pPlayer,h);
			}
		}		
	}
	//Run after safety checks (will turn it player bools off if not safe to execute)
	MC_Network_MD_Assist_Loop();
}
