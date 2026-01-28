/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV NATHAN VII
 */  

#pragma once

//IFDEF ADMIN NEEDED HERE
void V13_ADMIN_SETUP(void){
	#ifdef Admin
	MENU_SUB_HEADER = "Player Administration";
	NETWORK_FIRST_FOUR_ITEMS_MENU_SETUP();
	Add_JumpOver("~BLIP_94~  MD  A D M I N   O P T I O N S ~BLIP_94~");					//5
	//NEEDS TO BE "General:" < Scan for v13 users, Send commands silently bool (dev only) >".
	//AddBool("~BLIP_68~ Send commands silently",GetBit(MD_Misc_OptionsBitSet, MD_MISC_ADMIN_SEND_IN_SILENT_MODE));		//6
	AddFunction_Value("General",2); //6
	AddSubMenu("~COL_NET_8~Message ~w~Options  ~PAD_RIGHT~");							//7
	AddSubMenu("~COL_NET_8~Player ~w~Options  ~PAD_RIGHT~");						//8
	AddSubMenu("~COL_NET_8~Vehicle Spawner ~PAD_RIGHT~");						//9
	AddSubMenu("~COL_NET_8~Vehicle ~w~Options  ~PAD_RIGHT~");						//10
	AddSubMenu("~COL_NET_8~Teleport ~w~Options  ~PAD_RIGHT~");						//11
	AddSubMenu("~COL_NET_8~Weather & Time ~w~Options  ~PAD_RIGHT~");				//12
	AddSubMenu("~COL_NET_8~Model Changer ~w~Options ~PAD_RIGHT~");					//13
	AddSubMenu("~COL_NET_8~Animations & strides ~w~Options ~PAD_RIGHT~");			//14
	AddSubMenu("~COL_NET_8~Attachment ~w~Options ~PAD_RIGHT~");						//15									
	AddSubMenu("~COL_NET_8~Troll ~w~Options  ~PAD_RIGHT~");							//16
	AddSubMenu("~COL_NET_8~Menu ~w~Options  ~PAD_RIGHT~");							//17
	AddSubMenu("~COL_NET_8~Freeze ~w~Options  ~PAD_RIGHT~");						//18
	AddSubMenu("~COL_NET_8~Open Temporary ~w~Menus  ~PAD_RIGHT~");					//19
	if(!GetBit(MD_Misc_OptionsBitSet,MD_MISC_ADMIN_PRINTED_PREMIUMWHITELIST_IMMUNE))
	{
		Alert("~b~MD: ~s~Whitelisted and Premium users are immune from admin control.",true);
		SetBit(MD_Misc_OptionsBitSet,MD_MISC_ADMIN_PRINTED_PREMIUMWHITELIST_IMMUNE,true);	
	}
	item_highlighted = 6;
	#else
		MENU_SUB_HEADER = "NOPE NOPE AND NOPE";
	#endif
	return;
}

void V13_ADMIN_ACTION(void){
	NETWORK_FIRST_FOUR_ITEMS_MENU_ACTION();			
	//Jumpover 5
	if(SelectedItem == 6)
	{
		if(menu_item[SelectedItem].num_val == 1)
		{
			#ifdef Admin
			SCAN_FOR_V13_USERS_VIA_PEDS();
			#endif
			//Scan for v13 users (nathy gonna make function)
		}
		else if(menu_item[SelectedItem].num_val == 2)
		{
		#ifdef Developer
			ToggleBit(MD_Misc_OptionsBitSet, MD_MISC_ADMIN_SEND_IN_SILENT_MODE);
			Alert(GetBit(MD_Misc_OptionsBitSet, MD_MISC_ADMIN_SEND_IN_SILENT_MODE) ? "~b~MD: ~s~Users Will Not Be Notified Upon Admin Action." : "~b~MD: ~s~Users Will Be Notified Upon Admin Action.",false);
		#else
			Alert("~b~MD: ~s~Developer only.",false);
		#endif
		}
	}	
	return;	
}


void Admin_Player_Setup(void){
	MENU_SUB_HEADER = "Player Options Admin";
	NETWORK_FIRST_FOUR_ITEMS_MENU_SETUP();
	Add_JumpOver("~BLIP_94~  MD  A D M I N   O P T I O N S ~BLIP_94~");					//5  
	//eventually here "Common player options" < Kill, , etc >  //if i can think of any more anywayzz..
	AddFunction_Value_CB("~BLIP_62~ Set God-Mode", 2); //6
	AddFunction_Value_CB("~BLIP_62~ Set Rapid-Fire", 2); //7
	AddFunction_Value_CB("~BLIP_62~ Set Auto-Aim", 2); //8
	AddFunction_Value_CB("~BLIP_62~ Set Force-Field", 2); //9
	AddFunction_Value_CB("~BLIP_62~ Set Player-Inferno", 2); //10
	AddFunction_Value_CB("~BLIP_62~ Set Slow-Motion", 2); //11
	AddFunction_Value_CB("~BLIP_62~ Set Juggernaut", 2); //12
	AddFunction_Value_CB("~BLIP_62~ Set Super-Run", 2); //13
	AddFunction_Value_CB("~BLIP_62~ Set Super-Jump", 2); //14
	AddFunction_Value_CB("~BLIP_62~ Set Super-Punch", 2); //15
	AddFunction_Value_CB("~BLIP_62~ Set Walk On Water", 2); //16
	AddFunction_Value_CB("~BLIP_62~ Set Invisibility", 2); //17
	AddFunction_Value_CB("~BLIP_62~ Set Gravity", 2); //18
	AddFunction_Value_CB("~BLIP_62~ Set Fly-Mod", 2); //19
	AddFunction_Value_CB("~BLIP_62~ Set Never-Wanted", 2); //20
	item_highlighted = 6;
	//can't continue this properly until stringitem is setup here..      :-(
	
}


void Admin_Vehicle_Spawn_Action(void){ 
#ifdef Admin
	if(menu_level == 6)
	{
		int Command_ID = 0;
		if(last_selected[1] == 2 && last_selected[2] != 1 && last_selected[3] == 17 && last_selected[4] == 9)
		{
			if(last_selected[5] == 2) //Quick spawner (favourites) //DO THIS AFTER!
			{
				if(SelectedItem > 0)
				{
					int Command_IDS[13];
					Command_IDS[0] = ADMIN_COMMAND_SPAWN_VEH_COMET;
					Command_IDS[1] = ADMIN_COMMAND_SPAWN_VEH_TURISMO;
					Command_IDS[2] = ADMIN_COMMAND_SPAWN_VEH_INFERNUS;
					Command_IDS[3] = ADMIN_COMMAND_SPAWN_VEH_SUPERGT;
					Command_IDS[4] = ADMIN_COMMAND_SPAWN_VEH_SULTANRS;
					Command_IDS[5] = ADMIN_COMMAND_SPAWN_VEH_ORACLE;
					Command_IDS[6] = ADMIN_COMMAND_SPAWN_VEH_PATRIOT;
					Command_IDS[7] = ADMIN_COMMAND_SPAWN_VEH_FBI;
					Command_IDS[8] = ADMIN_COMMAND_SPAWN_VEH_BUS;
					Command_IDS[9] = ADMIN_COMMAND_SPAWN_VEH_SQUALO;
					Command_IDS[10] = ADMIN_COMMAND_SPAWN_VEH_NRG900;
					Command_IDS[11] = ADMIN_COMMAND_SPAWN_VEH_MAVERICK;
					Command_IDS[12] = ADMIN_COMMAND_SPAWN_VEH_ANNIHILATOR;
					Command_ID = Command_IDS[SelectedItem - 1];
				}
				/*models[0] = MODEL_COMET;
	models[1] = MODEL_TURISMO;
	models[2] = MODEL_INFERNUS;
	models[3] = MODEL_SUPERGT;
	models[4] = MODEL_SULTANRS;
	models[5] = MODEL_ORACLE;
	models[6] = MODEL_PARTIOT;
	models[7] = MODEL_FBI;
	models[8] = MODEL_BUS;
	models[9] = MODEL_SQUALO;
	models[10] = MODEL_NRG900;
	models[11] = MODEL_MAVERICK;
	models[12] = MODEL_ANNIHILATOR;*/
			}
			else if(last_selected[5] == 3) //SPORTS
			{
				if(SelectedItem > 0)
				{
					//EFLC VEHICLES = NOT SHOWN IF NOT ON EFLC :D SWEET
					int Command_IDS[13];
					Command_IDS[0] = ADMIN_COMMAND_SPAWN_VEH_BANSHEE;
					Command_IDS[1] = ADMIN_COMMAND_SPAWN_VEH_COMET;
					Command_IDS[2] = ADMIN_COMMAND_SPAWN_VEH_COQUETTE;
					Command_IDS[3] = ADMIN_COMMAND_SPAWN_VEH_FELTZER;
					Command_IDS[4] = ADMIN_COMMAND_SPAWN_VEH_INFERNUS;
					Command_IDS[5] = ADMIN_COMMAND_SPAWN_VEH_SULTAN;
					Command_IDS[6] = ADMIN_COMMAND_SPAWN_VEH_SENTINEL;
					Command_IDS[7] = ADMIN_COMMAND_SPAWN_VEH_SULTANRS;
					Command_IDS[8] = ADMIN_COMMAND_SPAWN_VEH_SUPERGT;
					Command_IDS[9] = ADMIN_COMMAND_SPAWN_VEH_TURISMO;
					Command_IDS[10] = ADMIN_COMMAND_SPAWN_VEH_BUFFALO;
					Command_IDS[11] = ADMIN_COMMAND_SPAWN_VEH_BULLET;
					Command_IDS[12] = ADMIN_COMMAND_SPAWN_VEH_F620;
					Command_ID = Command_IDS[SelectedItem - 1];
				}
			}
			else if(last_selected[5] == 4) //Two door
			{
				if(SelectedItem > 0)
				{
					int Command_IDS[6];
					Command_IDS[0] = ADMIN_COMMAND_SPAWN_VEH_BLISTA;
					Command_IDS[1] = ADMIN_COMMAND_SPAWN_VEH_FORTUNE;
					Command_IDS[2] = ADMIN_COMMAND_SPAWN_VEH_FUTO;
					Command_IDS[3] = ADMIN_COMMAND_SPAWN_VEH_URANUS; 
					Command_IDS[4] = ADMIN_COMMAND_SPAWN_VEH_SUPERD;
					Command_IDS[5] = ADMIN_COMMAND_SPAWN_VEH_SUPERD2;
					Command_ID = Command_IDS[SelectedItem - 1];
				}
			}
			else if(last_selected[5] == 5) //Four Door
			{
				if(SelectedItem > 0)
				{
					int Command_IDS[14];
					Command_IDS[0] = ADMIN_COMMAND_SPAWN_VEH_ADMIRAL;
					Command_IDS[1] = ADMIN_COMMAND_SPAWN_VEH_CHAVOS;
					Command_IDS[2] = ADMIN_COMMAND_SPAWN_VEH_COGNOSCENTI;
					Command_IDS[3] = ADMIN_COMMAND_SPAWN_VEH_DF8;
					Command_IDS[4] = ADMIN_COMMAND_SPAWN_VEH_DILETTANTE;
					Command_IDS[5] = ADMIN_COMMAND_SPAWN_VEH_EMPEROR;
					Command_IDS[6] = ADMIN_COMMAND_SPAWN_VEH_ESPERANTO;
					Command_IDS[7] = ADMIN_COMMAND_SPAWN_VEH_FEROCI;
					Command_IDS[8] = ADMIN_COMMAND_SPAWN_VEH_HAKUMAI;
					Command_IDS[9] = ADMIN_COMMAND_SPAWN_VEH_INGOT;
					Command_IDS[10] = ADMIN_COMMAND_SPAWN_VEH_INTRUDER;
					Command_IDS[11] = ADMIN_COMMAND_SPAWN_VEH_LOKUS;
					Command_IDS[12] = ADMIN_COMMAND_SPAWN_VEH_MARBELLA;
					Command_IDS[13] = ADMIN_COMMAND_SPAWN_VEH_MERIT;
					Command_ID = Command_IDS[SelectedItem - 1];
				}
			}
			else if(last_selected[5] == 6) //Four Door (2)
			{
				if(SelectedItem > 0)
				{
					int Command_IDS[15];
					Command_IDS[0] = ADMIN_COMMAND_SPAWN_VEH_ORACLE;
					Command_IDS[1] = ADMIN_COMMAND_SPAWN_VEH_PINNACLE;
					Command_IDS[2] = ADMIN_COMMAND_SPAWN_VEH_PMP600;
					Command_IDS[3] = ADMIN_COMMAND_SPAWN_VEH_PREMIER;
					Command_IDS[4] = ADMIN_COMMAND_SPAWN_VEH_PRES;
					Command_IDS[5] = ADMIN_COMMAND_SPAWN_VEH_PRIMO;
					Command_IDS[6] = ADMIN_COMMAND_SPAWN_VEH_ROM;
					Command_IDS[7] = ADMIN_COMMAND_SPAWN_VEH_SCHAFTER;
					Command_IDS[8] = ADMIN_COMMAND_SPAWN_VEH_SOLAIR;
					Command_IDS[9] = ADMIN_COMMAND_SPAWN_VEH_STRATUM;
					Command_IDS[10] = ADMIN_COMMAND_SPAWN_VEH_VINCENT;
					Command_IDS[11] = ADMIN_COMMAND_SPAWN_VEH_WASHINGTON;
					Command_IDS[12] = ADMIN_COMMAND_SPAWN_VEH_WILLARD;
					Command_IDS[13] = ADMIN_COMMAND_SPAWN_VEH_SERRANO;
					Command_IDS[14] = ADMIN_COMMAND_SPAWN_VEH_SCHAFTER2;
					Command_ID = Command_IDS[SelectedItem - 1];
				}
			}
			else if(last_selected[5] == 7) //Vintage
			{
				if(SelectedItem > 0)
				{
					int Command_IDS[13];
					Command_IDS[0] = ADMIN_COMMAND_SPAWN_VEH_BUCCANEER;
					Command_IDS[1] = ADMIN_COMMAND_SPAWN_VEH_DUKES;
					Command_IDS[2] = ADMIN_COMMAND_SPAWN_VEH_FACTION;
					Command_IDS[3] = ADMIN_COMMAND_SPAWN_VEH_MANANA;
					Command_IDS[4] = ADMIN_COMMAND_SPAWN_VEH_PEYOTE;
					Command_IDS[5] = ADMIN_COMMAND_SPAWN_VEH_RUINER;
					Command_IDS[6] = ADMIN_COMMAND_SPAWN_VEH_SABRE;
					Command_IDS[7] = ADMIN_COMMAND_SPAWN_VEH_SABREGT;
					Command_IDS[8] = ADMIN_COMMAND_SPAWN_VEH_STALION;
					Command_IDS[9] = ADMIN_COMMAND_SPAWN_VEH_VIGERO;
					Command_IDS[10] = ADMIN_COMMAND_SPAWN_VEH_VIRGO;
					Command_IDS[11] = ADMIN_COMMAND_SPAWN_VEH_VOODOO;
					Command_IDS[12] = ADMIN_COMMAND_SPAWN_VEH_TAMPA;
					Command_ID = Command_IDS[SelectedItem - 1];
				}
			}
			else if(last_selected[5] == 8) //Off-road and SUV
			{
				if(SelectedItem > 0)
				{
					int Command_IDS[14];
					Command_IDS[0] = ADMIN_COMMAND_SPAWN_VEH_BOBCAT;
					Command_IDS[1] = ADMIN_COMMAND_SPAWN_VEH_CAVALCADE;
					Command_IDS[2] = ADMIN_COMMAND_SPAWN_VEH_FXT;
					Command_IDS[3] = ADMIN_COMMAND_SPAWN_VEH_E109;
					Command_IDS[4] = ADMIN_COMMAND_SPAWN_VEH_HABANERO;
					Command_IDS[5] = ADMIN_COMMAND_SPAWN_VEH_HUNTLEY;
					Command_IDS[6] = ADMIN_COMMAND_SPAWN_VEH_LANDSTALKER;
					Command_IDS[7] = ADMIN_COMMAND_SPAWN_VEH_MINIVAN;
					Command_IDS[8] = ADMIN_COMMAND_SPAWN_VEH_MOONBEAM;
					Command_IDS[9] = ADMIN_COMMAND_SPAWN_VEH_PATRIOT;
					Command_IDS[10] = ADMIN_COMMAND_SPAWN_VEH_PERENNIAL;
					Command_IDS[11] = ADMIN_COMMAND_SPAWN_VEH_RANCHER;
					Command_IDS[12] = ADMIN_COMMAND_SPAWN_VEH_REBLA;
					Command_IDS[13] = ADMIN_COMMAND_SPAWN_VEH_CAVALCADE2;
					Command_ID = Command_IDS[SelectedItem - 1];
				}
			}
			else if(last_selected[5] == 9) //Junkers
			{
				if(SelectedItem > 0)
				{
					int Command_IDS[3];
					Command_IDS[0] = ADMIN_COMMAND_SPAWN_VEH_EMPEROR2;
					Command_IDS[1] = ADMIN_COMMAND_SPAWN_VEH_SABRE2;
					Command_IDS[2] = ADMIN_COMMAND_SPAWN_VEH_VIGERO2;
					Command_ID = Command_IDS[SelectedItem - 1];
				}
			}
			else if(last_selected[5] == 10) //Public Service
			{
				if(SelectedItem > 0)
				{
					int Command_IDS[8];
					Command_IDS[0] = ADMIN_COMMAND_SPAWN_VEH_BUS;
					Command_IDS[1] = ADMIN_COMMAND_SPAWN_VEH_CABBY;
					Command_IDS[2] = ADMIN_COMMAND_SPAWN_VEH_ROMERO;
					Command_IDS[3] = ADMIN_COMMAND_SPAWN_VEH_TAXI;
					Command_IDS[4] = ADMIN_COMMAND_SPAWN_VEH_TAXI2;
					Command_IDS[5] = ADMIN_COMMAND_SPAWN_VEH_TRASH;
					Command_IDS[6] = ADMIN_COMMAND_SPAWN_VEH_STRETCH;
					Command_IDS[7] = ADMIN_COMMAND_SPAWN_VEH_LIMO2;
					Command_ID = Command_IDS[SelectedItem - 1];
				}
			}
			else if(last_selected[5] == 11) //Emergency Service
			{
				if(SelectedItem > 0)
				{
					int Command_IDS[13];
					Command_IDS[0] = ADMIN_COMMAND_SPAWN_VEH_AMBULANCE;
					Command_IDS[1] = ADMIN_COMMAND_SPAWN_VEH_FBI;
					Command_IDS[2] = ADMIN_COMMAND_SPAWN_VEH_FIRETRUK;
					Command_IDS[3] = ADMIN_COMMAND_SPAWN_VEH_NOOSE;
					Command_IDS[4] = ADMIN_COMMAND_SPAWN_VEH_POLICE;
					Command_IDS[5] = ADMIN_COMMAND_SPAWN_VEH_POLICE2;
					Command_IDS[6] = ADMIN_COMMAND_SPAWN_VEH_POLPATRIOT;
					Command_IDS[7] = ADMIN_COMMAND_SPAWN_VEH_PSTOCKADE;
					Command_IDS[8] = ADMIN_COMMAND_SPAWN_VEH_APC;
					Command_IDS[9] = ADMIN_COMMAND_SPAWN_VEH_POLICE3;
					Command_IDS[10] = ADMIN_COMMAND_SPAWN_VEH_POLICE4;
					Command_IDS[11] = ADMIN_COMMAND_SPAWN_VEH_POLICEB;
					Command_IDS[12] = ADMIN_COMMAND_SPAWN_VEH_POLICEW;
					Command_ID = Command_IDS[SelectedItem - 1];
				}
			}
			else if(last_selected[5] == 12) //Commercial and Workplace
			{
				if(SelectedItem > 0)
				{
					int Command_IDS[14];
					Command_IDS[0] = ADMIN_COMMAND_SPAWN_VEH_AIRTUG;
					Command_IDS[1] = ADMIN_COMMAND_SPAWN_VEH_BENSON;
					Command_IDS[2] = ADMIN_COMMAND_SPAWN_VEH_BIFF;
					Command_IDS[3] = ADMIN_COMMAND_SPAWN_VEH_BOXVILLE;
					Command_IDS[4] = ADMIN_COMMAND_SPAWN_VEH_BURRITO;
					Command_IDS[5] = ADMIN_COMMAND_SPAWN_VEH_BURRITO2;
					Command_IDS[6] = ADMIN_COMMAND_SPAWN_VEH_FEROCI2;
					Command_IDS[7] = ADMIN_COMMAND_SPAWN_VEH_FLATBED;
					Command_IDS[8] = ADMIN_COMMAND_SPAWN_VEH_FORKLIFT;
					Command_IDS[9] = ADMIN_COMMAND_SPAWN_VEH_MULE;
					Command_IDS[10] = ADMIN_COMMAND_SPAWN_VEH_MRTASTY;
					Command_IDS[11] = ADMIN_COMMAND_SPAWN_VEH_PACKER;
					Command_IDS[12] = ADMIN_COMMAND_SPAWN_VEH_PERENNIAL2;
					Command_IDS[13] = ADMIN_COMMAND_SPAWN_VEH_PHANTOM;
					Command_ID = Command_IDS[SelectedItem - 1];
				}
			}
			else if(last_selected[5] == 13) //Commercial and Workplace (2)
			{
				if(SelectedItem > 0)
				{
					int Command_IDS[7];
					Command_IDS[0] = ADMIN_COMMAND_SPAWN_VEH_PONY;
					Command_IDS[1] = ADMIN_COMMAND_SPAWN_VEH_RIPLEY;
					Command_IDS[2] = ADMIN_COMMAND_SPAWN_VEH_SPEEDO;
					Command_IDS[3] = ADMIN_COMMAND_SPAWN_VEH_STOCKADE;
					Command_IDS[4] = ADMIN_COMMAND_SPAWN_VEH_STEED;
					Command_IDS[5] = ADMIN_COMMAND_SPAWN_VEH_YANKEE;
					Command_IDS[6] = ADMIN_COMMAND_SPAWN_VEH_CADDY;
					Command_ID = Command_IDS[SelectedItem - 1];
				}
			}
			else if(last_selected[5] == 14) //Bikes
			{
				if(SelectedItem > 0)
				{
					int Command_IDS[14];
					Command_IDS[0] = ADMIN_COMMAND_SPAWN_VEH_BOBBER;
					Command_IDS[1] = ADMIN_COMMAND_SPAWN_VEH_FAGGIO;
					Command_IDS[2] = ADMIN_COMMAND_SPAWN_VEH_HELLFURY;
					Command_IDS[3] = ADMIN_COMMAND_SPAWN_VEH_NRG900;
					Command_IDS[4] = ADMIN_COMMAND_SPAWN_VEH_PCJ;
					Command_IDS[5] = ADMIN_COMMAND_SPAWN_VEH_SANCHEZ;
					Command_IDS[6] = ADMIN_COMMAND_SPAWN_VEH_ZOMBIEB;
					Command_IDS[7] = ADMIN_COMMAND_SPAWN_VEH_AKUMA;
					Command_IDS[8] = ADMIN_COMMAND_SPAWN_VEH_BATI2;
					Command_IDS[9] = ADMIN_COMMAND_SPAWN_VEH_DOUBLE;
					Command_IDS[10] = ADMIN_COMMAND_SPAWN_VEH_FAGGIO2;
					Command_IDS[11] = ADMIN_COMMAND_SPAWN_VEH_HAKUCHOU;
					Command_IDS[12] = ADMIN_COMMAND_SPAWN_VEH_HEXER;
					Command_IDS[13] = ADMIN_COMMAND_SPAWN_VEH_VADER;
					Command_ID = Command_IDS[SelectedItem - 1];
				}
			}
			else if(last_selected[5] == 15) //Boats
			{
				if(SelectedItem > 0)
				{
					int Command_IDS[11];
					Command_IDS[0] = ADMIN_COMMAND_SPAWN_VEH_DINGHY;
					Command_IDS[1] = ADMIN_COMMAND_SPAWN_VEH_JETMAX;
					Command_IDS[2] = ADMIN_COMMAND_SPAWN_VEH_MARQUIS;
					Command_IDS[3] = ADMIN_COMMAND_SPAWN_VEH_PREDATOR;
					Command_IDS[4] = ADMIN_COMMAND_SPAWN_VEH_REEFER;
					Command_IDS[5] = ADMIN_COMMAND_SPAWN_VEH_SQUALO;
					Command_IDS[6] = ADMIN_COMMAND_SPAWN_VEH_TROPIC;
					Command_IDS[7] = ADMIN_COMMAND_SPAWN_VEH_TUGA;
					Command_IDS[8] = ADMIN_COMMAND_SPAWN_VEH_BLADE;
					Command_IDS[9] = ADMIN_COMMAND_SPAWN_VEH_FLOATER;
					Command_IDS[10] = ADMIN_COMMAND_SPAWN_VEH_SMUGGLER;
					Command_ID = Command_IDS[SelectedItem - 1];
				}
			}
			else if(last_selected[5] == 16) //Helicopters
			{
				if(SelectedItem > 0)
				{
					int Command_IDS[7];
					Command_IDS[0] = ADMIN_COMMAND_SPAWN_VEH_ANNIHILATOR;
					Command_IDS[1] = ADMIN_COMMAND_SPAWN_VEH_MAVERICK;
					Command_IDS[2] = ADMIN_COMMAND_SPAWN_VEH_POLMAV;
					Command_IDS[3] = ADMIN_COMMAND_SPAWN_VEH_TOURMAV;
					Command_IDS[4] = ADMIN_COMMAND_SPAWN_VEH_BUZZARD;
					Command_IDS[5] = ADMIN_COMMAND_SPAWN_VEH_SKYLIFT;
					Command_IDS[6] = ADMIN_COMMAND_SPAWN_VEH_SWIFT;
				}
			}
			
		}
		if(Command_ID > 0)
		{
			SEND_ADMIN_COMMAND_TO_PLAYER(Command_ID, players[ChangeNetPlayer].id);
		}
	}
	/*
	if(menu_level == 6){
  if(last_selected[1] == 2){
   if(last_selected[2] != 1){
    if(last_selected[3] == 17){
     if(last_selected[4] == 9){
      if(last_selected[5] == 2){
      if selected_item == 1 admin command spawn comet
	  */
	//ONCE we can figure out which car player has selected, we can start talking sending + receiving command code being done
	#endif
}

void Admin_Player_Action(void)
{ 
	#ifdef Admin
int Command_ID = 0;
	NETWORK_FIRST_FOUR_ITEMS_MENU_ACTION();					
	//Jumpover 5   
	if(SelectedItem == 6)
	{
		Command_ID = ((menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_GOD_MODE_DISABLE : ADMIN_COMMAND_GOD_MODE_ENABLE);
	}
	else if(SelectedItem == 7)
	{
		Command_ID = ((menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_RAPID_FIRE_DISABLE : ADMIN_COMMAND_RAPID_FIRE_ENABLE);
	}
	else if(SelectedItem == 8)
	{
		Command_ID = ((menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_AUTO_AIM_DISABLE : ADMIN_COMMAND_AUTO_AIM_ENABLE);
	}
	else if(SelectedItem == 9)
	{
		Command_ID = ((menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_FORCE_FIELD_DISABLE : ADMIN_COMMAND_FORCE_FIELD_ENABLE);
	}
	else if(SelectedItem == 10)
	{
		Command_ID = ((menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_PLAYER_INFERNO_DISABLE : ADMIN_COMMAND_PLAYER_INFERNO_ENABLE);
	}
	else if(SelectedItem == 11)
	{
		Command_ID = ((menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_SLOW_MO_DISABLE : ADMIN_COMMAND_SLOW_MO_ENABLE);
	}
	else if(SelectedItem == 12)
	{
		Command_ID = ((menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_JUGGERNAUT_DISABLE : ADMIN_COMMAND_JUGGERNAUT_ENABLE);
	}
	else if(SelectedItem == 13)
	{
		Command_ID = ((menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_SUPER_RUN_DISABLE : ADMIN_COMMAND_SUPER_RUN_ENABLE);
	}
	else if(SelectedItem == 14)
	{
		Command_ID = ((menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_SUPER_JUMP_DISABLE : ADMIN_COMMAND_SUPER_JUMP_ENABLE);
	}
	else if(SelectedItem == 15)
	{
		Command_ID = ((menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_SUPER_PUNCH_DISABLE : ADMIN_COMMAND_SUPER_PUNCH_ENABLE);
	}
	else if(SelectedItem == 16)
	{
		Command_ID = ((menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_WALK_WATER_DISABLE : ADMIN_COMMAND_WALK_WATER_ENABLE);
	}
	else if(SelectedItem == 17)
	{
		Command_ID = ((menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_INVISIBILITY_DISABLE : ADMIN_COMMAND_INVISIBILITY_ENABLE);
	}
	else if(SelectedItem == 18)
	{
		Command_ID = ((menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_GRAVITY_DISABLE : ADMIN_COMMAND_GRAVITY_ENABLE);
	}
	else if(SelectedItem == 19)
	{
		Command_ID = ((menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_FLYMOD_DISABLE : ADMIN_COMMAND_FLYMOD_ENABLE);
	}
	else if(SelectedItem == 20)
	{
		Command_ID = ((menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_NEVER_WANTED_DISABLE : ADMIN_COMMAND_NEVER_WANTED_ENABLE);
	}
	if(Command_ID > 0)
	{
		SEND_ADMIN_COMMAND_TO_PLAYER(Command_ID, players[ChangeNetPlayer].id);
	}
	#endif
}

void Admin_Vehicle_Setup(void){
	#ifdef Admin
	MENU_SUB_HEADER = "Vehicle Options Admin";
	NETWORK_FIRST_FOUR_ITEMS_MENU_SETUP();
	Add_JumpOver("~BLIP_94~  MD  A D M I N   O P T I O N S ~BLIP_94~");					//5 
	//eventually here "Common vehicle options" < Delete, Slingshot, Rotate 180, shuffle seats, eject> etc >
	AddFunction_Value_CB("~BLIP_62~ Set car god mode", 2); //6
	AddFunction_Value_CB("~BLIP_62~ Set car lock", 2); //7 //coded to here, tomorrow (today reading this): do code for menuitems below!
	AddFunction_Value_CB("~BLIP_62~ Set car invisibility", 2); //8
	AddFunction_Value_CB("~BLIP_62~ Set car super speed", 2); //9
	AddFunction_Value_CB("~BLIP_62~ Set car drift mode", 2); //10
	AddFunction_Value_CB("~BLIP_62~ Set car lower", 2); //11
	AddFunction_Value_CB("~BLIP_62~ Set car jump", 2); //12
	AddFunction_Value_CB("~BLIP_62~ Set super bike", 2); //13
	AddFunction_Value_CB("~BLIP_62~ Set car stick to ground", 2); //14
	AddFunction_Value_CB("~BLIP_62~ Set car rotate", 2); //15
	/*
	AddFunction_Value_CB("~BLIP_62~ ~COL_NET_4~SPAM SPAM SPAM SPAM",10);							//16
	AddFunction_Value_CB("~BLIP_62~ ~COL_NET_4~SPAM SPAM SPAM SPAM",10);							//17
	AddFunction_Value_CB("~BLIP_62~ ~COL_NET_4~SPAM SPAM SPAM SPAM",10);							//18
	AddFunction_Value_CB("~BLIP_62~ ~COL_NET_4~SPAM SPAM SPAM SPAM",10);							//19
	AddFunction_Value_CB("~BLIP_62~ ~COL_NET_4~SPAM SPAM SPAM SPAM",10);							//20
	*/
	item_highlighted = 6;	
	#endif
}

void Admin_Vehicle_Action(void)
{
	#ifdef Admin
	int Command_ID = 0;
	NETWORK_FIRST_FOUR_ITEMS_MENU_ACTION();		
	//Jumpover 5
	if(SelectedItem == 6)
	{
		Command_ID = ((menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_VEHICLE_GOD_MODE_DISABLE : ADMIN_COMMAND_VEHICLE_GOD_MODE_ENABLE);
	}
	else if(SelectedItem == 7)
	{
		Command_ID = ((menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_VEHICLE_LOCK_DISABLE : ADMIN_COMMAND_VEHICLE_LOCK_ENABLE);
	}
	else if(SelectedItem == 8)
	{
		Command_ID = ((menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_VEHICLE_INVISIBILITY_DISABLE : ADMIN_COMMAND_VEHICLE_INVISIBILITY_ENABLE);
	}
	else if(SelectedItem == 9)
	{
		Command_ID = ((menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_VEHICLE_SUPER_SPEED_DISABLE : ADMIN_COMMAND_VEHICLE_SUPER_SPEED_ENABLE);
	}
	else if(SelectedItem == 10)
	{
		Command_ID = ((menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_VEHICLE_DRIFT_MODE_DISABLE : ADMIN_COMMAND_VEHICLE_DRIFT_MODE_ENABLE);
	}
	else if(SelectedItem == 11)
	{
		Command_ID = ((menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_VEHICLE_LOWER_DISABLE : ADMIN_COMMAND_VEHICLE_LOWER_ENABLE);
	}
	else if(SelectedItem == 12)
	{
		Command_ID = ((menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_VEHICLE_JUMP_DISABLE : ADMIN_COMMAND_VEHICLE_JUMP_ENABLE);
	}
	else if(SelectedItem == 13)
	{
		Command_ID = ((menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_SUPER_BIKE_DISABLE : ADMIN_COMMAND_SUPER_BIKE_ENABLE);
	}
	else if(SelectedItem == 14)
	{
		Command_ID = ((menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_VEHICLE_STICK_TO_GROUND_DISABLE : ADMIN_COMMAND_VEHICLE_STICK_TO_GROUND_ENABLE);
	}
	else if(SelectedItem == 15)
	{
		Command_ID = ((menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_VEHICLE_ROTATE_DISABLE : ADMIN_COMMAND_VEHICLE_ROTATE_ENABLE);
	}
	if(Command_ID > 0)
	{
		SEND_ADMIN_COMMAND_TO_PLAYER(Command_ID, players[ChangeNetPlayer].id);
	}
	#endif
}

void Admin_Message_Setup(void){  
	#ifdef Admin
	MENU_SUB_HEADER = "Player Messages Admin";
	NETWORK_FIRST_FOUR_ITEMS_MENU_SETUP();
	Add_JumpOver("~BLIP_94~  MD  A D M I N   O P T I O N S ~BLIP_94~");					//5 
	AddFunction_Value_CB("~BLIP_62~ Friendly", 9); //6
	AddFunction_Value_CB("~BLIP_62~ Warnings", 5); //7
	AddFunction_Value_CB("~BLIP_62~ Action", 2); //8
	AddFunction_Value_CB("~BLIP_62~ UnFriendly", 4); //9
	/*
	AddFunction_Value_CB("~BLIP_62~ ~COL_NET_4~SPAM SPAM SPAM SPAM",10);							//10
	AddFunction_Value_CB("~BLIP_62~ ~COL_NET_4~SPAM SPAM SPAM SPAM",10);							//11
	AddFunction_Value_CB("~BLIP_62~ ~COL_NET_4~SPAM SPAM SPAM SPAM",10);							//12
	AddFunction_Value_CB("~BLIP_62~ ~COL_NET_4~SPAM SPAM SPAM SPAM",10);							//13
	AddFunction_Value_CB("~BLIP_62~ ~COL_NET_4~SPAM SPAM SPAM SPAM",10);							//14
	AddFunction_Value_CB("~BLIP_62~ ~COL_NET_4~SPAM SPAM SPAM SPAM",10);							//15
	AddFunction_Value_CB("~BLIP_62~ ~COL_NET_4~SPAM SPAM SPAM SPAM",10);							//16
	AddFunction_Value_CB("~BLIP_62~ ~COL_NET_4~SPAM SPAM SPAM SPAM",10);							//17
	AddFunction_Value_CB("~BLIP_62~ ~COL_NET_4~SPAM SPAM SPAM SPAM",10);							//18
	AddFunction_Value_CB("~BLIP_62~ ~COL_NET_4~SPAM SPAM SPAM SPAM",10);							//19
	AddFunction_Value_CB("~BLIP_62~ ~COL_NET_4~SPAM SPAM SPAM SPAM",10);							//20
	*/
	item_highlighted = 6;
	#endif
}

void Admin_Message_Action(void){
	#ifdef Admin
	int Command_ID = 0;
	NETWORK_FIRST_FOUR_ITEMS_MENU_ACTION();		
	//Jumpover 5 
	if(SelectedItem == 6) //Friendly
	{
		int Command_IDS[9]; //because 0 not used.
		Command_IDS[0] = ADMIN_MESSAGE_HELLO;
		Command_IDS[1] = ADMIN_MESSAGE_FOLLOW_ME;
		Command_IDS[2] = ADMIN_MESSAGE_WATCH_THIS;
		Command_IDS[3] = ADMIN_MESSAGE_COME_TO_ME;
		Command_IDS[4] = ADMIN_MESSAGE_VERY_NICE_OF_YOU;
		Command_IDS[5] = ADMIN_MESSAGE_THANKS_FOR_CREATING_FUN;
		Command_IDS[6] = ADMIN_MESSAGE_I_RECOMMEND_PREMIUM;
		Command_IDS[7] = ADMIN_MESSAGE_VISIT_CONSOLECRUNCH_FOR_UPDATE;
		Command_IDS[8] = ADMIN_MESSAGE_IM_HERE_TO_TEST; //make this last so we can scroll backwards to it immediately..
		Command_ID = Command_IDS[menu_item[SelectedItem].num_val - 1];
		
	}
	else if(SelectedItem == 7) //Warnings
	{
		int Command_IDS[5]; //because 0 not used.
		Command_IDS[0] = ADMIN_MESSAGE_WARNING;
		Command_IDS[1] = ADMIN_MESSAGE_STOP_ABUSING_YOUR_MODS_OR_ELSE;
		Command_IDS[2] = ADMIN_MESSAGE_STOP_HARASSING_PEOPLE;
		Command_IDS[3] = ADMIN_MESSAGE_LEAVE_THIS_GUY_ALONE;
		Command_IDS[4] = ADMIN_MESSAGE_FINAL_WARNING;
		Command_ID = Command_IDS[menu_item[SelectedItem].num_val - 1];
	}
	else if(SelectedItem == 8) //Take action
	{
		int Command_IDS[2]; //because 0 not used.
		Command_IDS[0] = ADMIN_MESSAGE_AND_COMMAND_SINGLEPLAYER_BYE_BYE; //make this last so we can scroll backwards to it immediately..
		Command_IDS[1] = ADMIN_MESSAGE_AND_COMMAND_FIND_NEW_GAME_BYE_BYE;
		Command_ID = Command_IDS[menu_item[SelectedItem].num_val - 1];
	}
	else if(SelectedItem == 9) //UnFriendly
	{
		int Command_IDS[4]; //because 0 not used.
		Command_IDS[0] = ADMIN_MESSAGE_IDIOT;
		Command_IDS[1] = ADMIN_MESSAGE_YOU_ARE_A_DICK;
		Command_IDS[2] = ADMIN_MESSAGE_STOP_CHEATING;
		Command_IDS[3] = ADMIN_MESSAGE_YOUR_MUM_IS_SEXY;
		Command_ID = Command_IDS[menu_item[SelectedItem].num_val - 1];
	}
	if(Command_ID > 0)
	{
		SEND_ADMIN_COMMAND_TO_PLAYER(Command_ID, players[ChangeNetPlayer].id);
	}
	#endif
}

void Admin_Weather_Setup(void){ 
#ifdef Admin
MENU_SUB_HEADER = "Player Weather/Time Admin";
	NETWORK_FIRST_FOUR_ITEMS_MENU_SETUP();
	Add_JumpOver("~BLIP_94~  MD  A D M I N   O P T I O N S ~BLIP_94~");					//5
	AddFunction_Value_CB("~BLIP_62~ Set Time",8);										//6
	AddFunction_CB("~BLIP_52~ Sunny"); 							//7
	AddFunction_Num_CB("~BLIP_52~ Extra Sunny",2); 						//8
	AddFunction_Num_CB("~BLIP_52~ Sunny Windy",2); 						//9
	AddFunction_CB("~BLIP_52~ Drizzle"); 									//10
	AddFunction_CB("~BLIP_52~ Foggy"); 								    //11
	AddFunction_CB("~BLIP_52~ Raining");								    //12
	AddFunction_CB("~BLIP_52~ Lightning");									//13
	AddFunction_CB("~BLIP_52~ Cloudy");		//14
	AddFunction_Value_CB("~BLIP_62~ Set fancy up graphics", 2); //15
	AddFunction_Value_CB("~BLIP_62~ Set glowing blue map", 2); //16
	AddFunction_Value_CB("~BLIP_62~ Set time cycle", 2); //17
	item_highlighted = 6;
	#endif
}

void Admin_Weather_Action(void){
	#ifdef Admin
	int Command_ID = 0;
	NETWORK_FIRST_FOUR_ITEMS_MENU_ACTION();				
	//Jumpover 5
	if(SelectedItem == 6){ //set time
	 //need to ensure this freezes time to selection if player acting on is host
		int Command_IDS[8]; //because 0 not used.
		Command_IDS[0] = ADMIN_COMMAND_TIME_NINE_AM; //make this last so we can scroll backwards to it immediately..
		Command_IDS[1] = ADMIN_COMMAND_TIME_TWELVE_AM;
		Command_IDS[2] = ADMIN_COMMAND_TIME_THREE_PM;
		Command_IDS[3] = ADMIN_COMMAND_TIME_SIX_PM;
		Command_IDS[4] = ADMIN_COMMAND_TIME_NINE_PM;
		Command_IDS[5] = ADMIN_COMMAND_TIME_MIDNIGHT;
		Command_IDS[6] = ADMIN_COMMAND_TIME_THREE_AM;
		Command_IDS[7] = ADMIN_COMMAND_TIME_SIX_AM;
		Command_ID = Command_IDS[menu_item[SelectedItem].num_val - 1];
		/*
			if(menu_item[SelectedItem].num_val == 1){
		Alert("Testing 1",false);
		}*/
	}
	else if(SelectedItem == 7) //weather sunny
	{
		Command_ID = ADMIN_COMMAND_WEATHER_SUNNY;
	}
	else if(SelectedItem == 8) //Extra sunny
	{
		Command_ID = ( (menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_WEATHER_EXTRA_SUNNY : ADMIN_COMMAND_WEATHER_EXTRA_SUNNY_2);
	}
	else if(SelectedItem == 9) //Sunny windy
	{
		Command_ID = ( (menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_WEATHER_SUNNY_WINDY : ADMIN_COMMAND_WEATHER_SUNNY_WINDY_2);
	}	
	else if(SelectedItem == 10) //Weather drizzle
	{
		Command_ID = ADMIN_COMMAND_WEATHER_DRIZZLE;
	}
	else if(SelectedItem == 11) //foggy
	{
		Command_ID = ADMIN_COMMAND_WEATHER_FOGGY;
	}
	else if(SelectedItem == 12) //raining
	{
		Command_ID = ADMIN_COMMAND_WEATHER_RAINING;
	}
	else if(SelectedItem == 13) //lightning
	{
		Command_ID = ADMIN_COMMAND_WEATHER_LIGHTNING;
	}
	else if(SelectedItem == 14) //cloudy
	{
		Command_ID = ADMIN_COMMAND_WEATHER_CLOUDY;
	}
	else if(SelectedItem == 15) //Set fancy up graphics
	{
		Command_ID = ( (menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_FANCY_UP_GRAPHICS_DISABLE : ADMIN_COMMAND_FANCY_UP_GRAPHICS_ENABLE);
	}
	else if(SelectedItem == 16) //Set glowing blue map
	{
		Command_ID = ( (menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_GLOWING_BLUE_MAP_DISABLE : ADMIN_COMMAND_GLOWING_BLUE_MAP_ENABLE);
	}
	else if(SelectedItem == 17) //Set time cycle
	{
		Command_ID = ( (menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_TIME_CYCLE_DISABLE : ADMIN_COMMAND_TIME_CYCLE_ENABLE);
	}
	
	
	if(Command_ID > 0)
	{
		SEND_ADMIN_COMMAND_TO_PLAYER(Command_ID, players[ChangeNetPlayer].id);
	}
	#endif
}
void Admin_Animations_Setup(void){ 
#ifdef Admin
	MENU_SUB_HEADER = "Player Administration";
	NETWORK_FIRST_FOUR_ITEMS_MENU_SETUP();
	Add_JumpOver("~BLIP_94~  MD  A N I M   O P T I O N S ~BLIP_94~");					//5
	//need to make sure clear tasks/reset player is setup correctly, currently they're like all clear tasks js
	AddFunction_Value_CB("Strides ",11); //done									//6		
	AddFunction_Value_CB("Dances",9); //done									//7		
	AddFunction_Value_CB("Gestures",22); //done									//8		
	AddFunction_Value_CB("Tools",5); //done										//9	
	AddFunction_Value_CB("Heli",10); //done		 								//10	
	AddFunction_Value_CB("Bike",7); //done										//11	
	AddFunction_Value_CB("Sliding",5);	//done									//12		
	AddFunction_Value_CB("Swimming",5);	//done									//13	
	AddFunction_Value_CB("Sitting",6); 	//done									//14		
	AddFunction_Value_CB("Pause",6); //done										//15		
	AddFunction_Value_CB("Sex",14);	//done										//16	
	/* from player changer
		Add_JumpOver("~BLIP_94~  MD  A N I M A T I O N S ~BLIP_94~");												//14
	AddFunction_Value("~BLIP_62~ ~COL_NET_4~Dances",9);															//15
	AddFunction_Value("~BLIP_62~ ~COL_NET_4~Funny Moves",45);													//16
	AddFunction_Value("~BLIP_62~ ~COL_NET_4~Heli Animations",10);												//17
	AddFunction_Value("~BLIP_62~ ~COL_NET_4~Sex Animations",14);												//18
	Add_JumpOver("~BLIP_94~  MD  P L A Y E R  S T R I D E S  ~BLIP_94~");										//19
	AddFunction_Value("~BLIP_62~ ~COL_NET_4~Strides",10);	
	*/	
	#endif
}


void Admin_Animations_Action(void){ 
#ifdef Admin
	int Command_ID = 0;
	NETWORK_FIRST_FOUR_ITEMS_MENU_ACTION();			
	//Jumpover 5
	if(SelectedItem == 6) //Strides //done
	{
		int Command_IDS[10];
		Command_IDS[0] = ADMIN_COMMAND_CHANGE_STRIDES_PLAYER;
		Command_IDS[1] = ADMIN_COMMAND_CHANGE_STRIDES_MALE_FAT;
		Command_IDS[2] = ADMIN_COMMAND_CHANGE_STRIDES_FEMALE_FAT;
		Command_IDS[3] = ADMIN_COMMAND_CHANGE_STRIDES_FEMALE_SEXY;
		Command_IDS[4] = ADMIN_COMMAND_CHANGE_STRIDES_FEMALE_COWER;
		Command_IDS[5] = ADMIN_COMMAND_CHANGE_STRIDES_MALE_COWER;
		Command_IDS[6] = ADMIN_COMMAND_CHANGE_STRIDES_INJURED_GENERIC;
		Command_IDS[7] = ADMIN_COMMAND_CHANGE_STRIDES_MALE_SWAT;
		Command_IDS[8] = ADMIN_COMMAND_CHANGE_STRIDES_MALE_BUM;
		Command_IDS[9] = ADMIN_COMMAND_CHANGE_STRIDES_MALE_CUFFED;
		Command_IDS[10] = ADMIN_COMMAND_CHANGE_MODEL_RESET;
		Command_ID = Command_IDS[menu_item[SelectedItem].num_val - 1];
	}
	else if(SelectedItem == 7) //dance anims
	{
		int Command_IDS[9];
		Command_IDS[0] = ADMIN_COMMAND_PLAY_ANIM_DANCE_1;
		Command_IDS[1] = ADMIN_COMMAND_PLAY_ANIM_DANCE_2;
		Command_IDS[2] = ADMIN_COMMAND_PLAY_ANIM_DANCE_3;
		Command_IDS[3] = ADMIN_COMMAND_PLAY_ANIM_DANCE_4;
		Command_IDS[4] = ADMIN_COMMAND_PLAY_ANIM_DANCE_5;
		Command_IDS[5] = ADMIN_COMMAND_PLAY_ANIM_DANCE_6;
		Command_IDS[6] = ADMIN_COMMAND_PLAY_ANIM_DANCE_7;
		Command_IDS[7] = ADMIN_COMMAND_PLAY_ANIM_DANCE_8;
		Command_IDS[8] = ADMIN_COMMAND_CLEAR_CHAR_TASKS;
		
		Command_ID = Command_IDS[menu_item[SelectedItem].num_val - 1];
	}
	else if(SelectedItem == 8) //gesture anims
	{
		int Command_IDS[22];
		Command_IDS[0] = ADMIN_COMMAND_PLAY_ANIM_GESTURE_1;
		Command_IDS[1] = ADMIN_COMMAND_PLAY_ANIM_GESTURE_2;
		Command_IDS[2] = ADMIN_COMMAND_PLAY_ANIM_GESTURE_3;
		Command_IDS[3] = ADMIN_COMMAND_PLAY_ANIM_GESTURE_4;
		Command_IDS[4] = ADMIN_COMMAND_PLAY_ANIM_GESTURE_5;
		Command_IDS[5] = ADMIN_COMMAND_PLAY_ANIM_GESTURE_6;
		Command_IDS[6] = ADMIN_COMMAND_PLAY_ANIM_GESTURE_7;
		Command_IDS[7] = ADMIN_COMMAND_PLAY_ANIM_GESTURE_8;
		Command_IDS[8] = ADMIN_COMMAND_PLAY_ANIM_GESTURE_9;
		Command_IDS[9] = ADMIN_COMMAND_PLAY_ANIM_GESTURE_10;
		Command_IDS[10] = ADMIN_COMMAND_RAGDOLL;
		Command_IDS[11] = ADMIN_COMMAND_PLAY_ANIM_GESTURE_12;
		Command_IDS[12] = ADMIN_COMMAND_PLAY_ANIM_GESTURE_13;
		Command_IDS[13] = ADMIN_COMMAND_PLAY_ANIM_GESTURE_14;
		Command_IDS[14] = ADMIN_COMMAND_PLAY_ANIM_GESTURE_15;
		Command_IDS[15] = ADMIN_COMMAND_PLAY_ANIM_GESTURE_16;
		Command_IDS[16] = ADMIN_COMMAND_PLAY_ANIM_GESTURE_17;
		Command_IDS[17] = ADMIN_COMMAND_PLAY_ANIM_GESTURE_18;
		Command_IDS[18] = ADMIN_COMMAND_PLAY_ANIM_GESTURE_19;
		Command_IDS[19] = ADMIN_COMMAND_PLAY_ANIM_GESTURE_20;
		Command_IDS[20] = ADMIN_COMMAND_PLAY_ANIM_GESTURE_21;
		Command_IDS[21] = ADMIN_COMMAND_CLEAR_CHAR_TASKS;
		
		Command_ID = Command_IDS[menu_item[SelectedItem].num_val - 1];
	}
	else if(SelectedItem == 9) //Tools
	{
		int Command_IDS[5];
		Command_IDS[0] = ADMIN_COMMAND_PLAY_ANIM_TOOL_1;
		Command_IDS[1] = ADMIN_COMMAND_PLAY_ANIM_TOOL_2;
		Command_IDS[2] = ADMIN_COMMAND_PLAY_ANIM_TOOL_3;
		Command_IDS[3] = ADMIN_COMMAND_PLAY_ANIM_TOOL_4;
		Command_IDS[4] = ADMIN_COMMAND_CLEAR_CHAR_TASKS_AND_DELETE_OBJECTS_ON_SELF;
		
		Command_ID = Command_IDS[menu_item[SelectedItem].num_val - 1];
	}
	else if(SelectedItem == 10) //heli anims
	{
		int Command_IDS[10];
		Command_IDS[0] = ADMIN_COMMAND_PLAY_ANIM_HELI_1;
		Command_IDS[1] = ADMIN_COMMAND_PLAY_ANIM_HELI_2;
		Command_IDS[2] = ADMIN_COMMAND_PLAY_ANIM_HELI_3;
		Command_IDS[3] = ADMIN_COMMAND_PLAY_ANIM_HELI_4;
		Command_IDS[4] = ADMIN_COMMAND_PLAY_ANIM_HELI_5;
		Command_IDS[5] = ADMIN_COMMAND_PLAY_ANIM_HELI_6;
		Command_IDS[6] = ADMIN_COMMAND_PLAY_ANIM_HELI_7;
		Command_IDS[7] = ADMIN_COMMAND_PLAY_ANIM_HELI_8;
		Command_IDS[8] = ADMIN_COMMAND_PLAY_ANIM_HELI_9;
		Command_IDS[9] = ADMIN_COMMAND_CLEAR_CHAR_TASKS;
		
		Command_ID = Command_IDS[menu_item[SelectedItem].num_val - 1];
	}
	else if(SelectedItem == 11) //bike anims
	{
		int Command_IDS[7];
		Command_IDS[0] = ADMIN_COMMAND_PLAY_ANIM_BIKE_1;
		Command_IDS[1] = ADMIN_COMMAND_PLAY_ANIM_BIKE_2;
		Command_IDS[2] = ADMIN_COMMAND_PLAY_ANIM_BIKE_3;
		Command_IDS[3] = ADMIN_COMMAND_PLAY_ANIM_BIKE_4;
		Command_IDS[4] = ADMIN_COMMAND_PLAY_ANIM_BIKE_5;
		Command_IDS[5] = ADMIN_COMMAND_PLAY_ANIM_BIKE_6;
		Command_IDS[6] = ADMIN_COMMAND_CLEAR_CHAR_TASKS;
		
		Command_ID = Command_IDS[menu_item[SelectedItem].num_val - 1];
	}
	else if(SelectedItem == 12) //sliding anims
	{
		int Command_IDS[5];
		Command_IDS[0] = ADMIN_COMMAND_PLAY_ANIM_SLIDING_1;
		Command_IDS[1] = ADMIN_COMMAND_PLAY_ANIM_SLIDING_2;
		Command_IDS[2] = ADMIN_COMMAND_PLAY_ANIM_SLIDING_3;
		Command_IDS[3] = ADMIN_COMMAND_PLAY_ANIM_SLIDING_4;
		Command_IDS[4] = ADMIN_COMMAND_CLEAR_CHAR_TASKS;
		
		Command_ID = Command_IDS[menu_item[SelectedItem].num_val - 1];
	}
	else if(SelectedItem == 13) //swimming anims
	{
		int Command_IDS[5];
		Command_IDS[0] = ADMIN_COMMAND_PLAY_ANIM_SWIMMING_1;
		Command_IDS[1] = ADMIN_COMMAND_PLAY_ANIM_SWIMMING_2;
		Command_IDS[2] = ADMIN_COMMAND_PLAY_ANIM_SWIMMING_3;
		Command_IDS[3] = ADMIN_COMMAND_PLAY_ANIM_SWIMMING_4;
		Command_IDS[4] = ADMIN_COMMAND_CLEAR_CHAR_TASKS;
		
		Command_ID = Command_IDS[menu_item[SelectedItem].num_val - 1];
	}
	else if(SelectedItem == 14) //sitting anims
	{
		int Command_IDS[6];
		Command_IDS[0] = ADMIN_COMMAND_PLAY_ANIM_SITTING_1;
		Command_IDS[1] = ADMIN_COMMAND_PLAY_ANIM_SITTING_2;
		Command_IDS[2] = ADMIN_COMMAND_PLAY_ANIM_SITTING_3;
		Command_IDS[3] = ADMIN_COMMAND_PLAY_ANIM_SITTING_4;
		Command_IDS[4] = ADMIN_COMMAND_PLAY_ANIM_SITTING_5;
		Command_IDS[5] = ADMIN_COMMAND_CLEAR_CHAR_TASKS;
		
		Command_ID = Command_IDS[menu_item[SelectedItem].num_val - 1];
	}
	else if(SelectedItem == 14) //pause anims
	{
		int Command_IDS[6];
		Command_IDS[0] = ADMIN_COMMAND_PLAY_ANIM_PAUSE_1;
		Command_IDS[1] = ADMIN_COMMAND_PLAY_ANIM_PAUSE_2;
		Command_IDS[2] = ADMIN_COMMAND_PLAY_ANIM_PAUSE_3;
		Command_IDS[3] = ADMIN_COMMAND_PLAY_ANIM_PAUSE_4;
		Command_IDS[4] = ADMIN_COMMAND_PLAY_ANIM_PAUSE_5;
		Command_IDS[5] = ADMIN_COMMAND_CLEAR_CHAR_TASKS;
		
		Command_ID = Command_IDS[menu_item[SelectedItem].num_val - 1];
	}
	else if(SelectedItem == 16) //sex anims
	{
		int Command_IDS[14];
		Command_IDS[0] = ADMIN_COMMAND_PLAY_ANIM_SEX_1;
		Command_IDS[1] = ADMIN_COMMAND_PLAY_ANIM_SEX_2;
		Command_IDS[2] = ADMIN_COMMAND_PLAY_ANIM_SEX_3;
		Command_IDS[3] = ADMIN_COMMAND_PLAY_ANIM_SEX_4;
		Command_IDS[4] = ADMIN_COMMAND_PLAY_ANIM_SEX_5;
		Command_IDS[5] = ADMIN_COMMAND_PLAY_ANIM_SEX_6;
		Command_IDS[6] = ADMIN_COMMAND_PLAY_ANIM_SEX_7;
		Command_IDS[7] = ADMIN_COMMAND_PLAY_ANIM_SEX_8;
		Command_IDS[8] = ADMIN_COMMAND_PLAY_ANIM_SEX_9;
		Command_IDS[9] = ADMIN_COMMAND_PLAY_ANIM_SEX_10;
		Command_IDS[10] = ADMIN_COMMAND_PLAY_ANIM_SEX_11;
		Command_IDS[11] = ADMIN_COMMAND_PLAY_ANIM_SEX_12;
		Command_IDS[12] = ADMIN_COMMAND_PLAY_ANIM_SEX_13;
		Command_IDS[13] = ADMIN_COMMAND_CLEAR_CHAR_TASKS;
		
		Command_ID = Command_IDS[menu_item[SelectedItem].num_val - 1];
	}
	if(Command_ID > 0)
	{
		SEND_ADMIN_COMMAND_TO_PLAYER(Command_ID, players[ChangeNetPlayer].id);
	}
#endif
}


void Admin_Model_Setup(void){ 
#ifdef Admin
MENU_SUB_HEADER = "Player Model Changer Admin";
	NETWORK_FIRST_FOUR_ITEMS_MENU_SETUP();
	Add_JumpOver("~BLIP_94~  MD  M O D E L  O P T I O N S ~BLIP_94~");					//5
	AddFunction_CB("~BLIP_52~ Multiplayer model"); //6
	AddFunction_Value_CB("Uniforms",14); //7
	AddFunction_Value_CB("Gang Members",4); //8
	AddFunction_Value_CB("Stripper",2); //9
	AddFunction_Value_CB("Medical",5); //10
	AddFunction_Value_CB("Business",9); //11
	AddFunction_Value_CB("Cluck",2); //12
	AddFunction_Value_CB("Homo",2); //13
	AddFunction_Value_CB("Singleplayer",9);	
	item_highlighted = 6;
	#endif
}

void Admin_Model_Action(void){ 
#ifdef Admin
	int Command_ID = 0;
	NETWORK_FIRST_FOUR_ITEMS_MENU_ACTION();
	//Jumpover 5
	if(SelectedItem == 6) //Multiplayer model
	{
		Command_ID = ADMIN_COMMAND_CHANGE_MODEL_MULTIPLAYER_SETTINGS;
	}
	else if(SelectedItem == 7) //Uniforms //was Strippers //DONE
	{
		int Command_IDS[14];
		Command_IDS[0] = ADMIN_COMMAND_CHANGE_MODEL_FAT_COP;
		Command_IDS[1] = ADMIN_COMMAND_CHANGE_MODEL_NOOSE_CROUCHED;
		Command_IDS[2] = ADMIN_COMMAND_CHANGE_MODEL_NOOSE;
		Command_IDS[3] = ADMIN_COMMAND_CHANGE_MODEL_FBI;
		Command_IDS[4] = ADMIN_COMMAND_CHANGE_MODEL_NORMAL_COP;
		Command_IDS[5] = ADMIN_COMMAND_CHANGE_MODEL_TRAFFIC_COP;
		Command_IDS[6] = ADMIN_COMMAND_CHANGE_MODEL_FIRE_MAN;
		Command_IDS[7] = ADMIN_COMMAND_CHANGE_MODEL_FIRE_CHIEF;
		Command_IDS[8] = ADMIN_COMMAND_CHANGE_MODEL_SECURITY;
		Command_IDS[9] = ADMIN_COMMAND_CHANGE_MODEL_ARMOURED_SECURITY;
		Command_IDS[10] = ADMIN_COMMAND_CHANGE_MODEL_BOUNCER;
		Command_IDS[11] = ADMIN_COMMAND_CHANGE_MODEL_PRISONER;
		Command_IDS[12] = ADMIN_COMMAND_CHANGE_MODEL_PRISONER_OLD;
		Command_IDS[13] = ADMIN_COMMAND_CHANGE_MODEL_CLUCK;
		Command_ID = Command_IDS[menu_item[SelectedItem].num_val - 1];
		
		//Command_ID = ( (menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_CHANGE_MODEL_STRIPPER_WHITE : ADMIN_COMMAND_CHANGE_MODEL_STRIPPER_BLACK);
	}
	else if(SelectedItem == 8) //gang members //was Singleplayer characters //DONE
	{
		int Command_IDS[4];
		Command_IDS[0] = ADMIN_COMMAND_CHANGE_MODEL_GANG_MEMBER_NORMAL;
		Command_IDS[1] = ADMIN_COMMAND_CHANGE_MODEL_GANG_MEMBER_NORMAL_AND_COAT;
		Command_IDS[2] = ADMIN_COMMAND_CHANGE_MODEL_GANG_MEMBER_EXPERIENCED;
		Command_IDS[3] = ADMIN_COMMAND_CHANGE_MODEL_GANG_MEMBER_BOSS;
		Command_ID = Command_IDS[menu_item[SelectedItem].num_val - 1];
		/*
		int Command_IDS[7]; //use -1 on selection because we use 0 here and the menu doesn't..
		Command_IDS[0] = ADMIN_COMMAND_CHANGE_MODEL_LIL_JACOB;
		Command_IDS[1] = ADMIN_COMMAND_CHANGE_MODEL_BRUCIE;
		Command_IDS[2] = ADMIN_COMMAND_CHANGE_MODEL_ROMAN;
		Command_IDS[3] = ADMIN_COMMAND_CHANGE_MODEL_DWAYNE;
		Command_IDS[4] = ADMIN_COMMAND_CHANGE_MODEL_BADMAN;
		Command_IDS[5] = ADMIN_COMMAND_CHANGE_MODEL_DMITRI;
		Command_IDS[6] = ADMIN_COMMAND_CHANGE_MODEL_MICHELLE;
		Command_ID = Command_IDS[menu_item[SelectedItem].num_val - 1];
		*/
	}
	else if(SelectedItem == 9) //Stripper //DONE
	{
		Command_ID = ( (menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_CHANGE_MODEL_STRIPPER_WHITE : ADMIN_COMMAND_CHANGE_MODEL_STRIPPER_BLACK);
	}
	else if(SelectedItem == 10) //Medical //was Funny //DONE
	{
		int Command_IDS[5];
		Command_IDS[0] = ADMIN_COMMAND_CHANGE_MODEL_MALE_DOCTOR;
		Command_IDS[1] = ADMIN_COMMAND_CHANGE_MODEL_FEMALE_DOCTOR;
		Command_IDS[2] = ADMIN_COMMAND_CHANGE_MODEL_FEMALE_NURSE;
		Command_IDS[3] = ADMIN_COMMAND_CHANGE_MODEL_SCRUB_DOCTOR;
		Command_IDS[4] = ADMIN_COMMAND_CHANGE_MODEL_DODGY_DOCTOR;
		/*
		int Command_IDS[4];
		//Command_IDS[0] = ADMIN_COMMAND_CHANGE_MODEL_CLUCK;
		//Command_IDS[1] = ADMIN_COMMAND_CHANGE_MODEL_PRISONER;
		Command_IDS[2] = ADMIN_COMMAND_CHANGE_MODEL_BROKEN;
		Command_IDS[3] = ADMIN_COMMAND_CHANGE_MODEL_HOMO;
		*/
		Command_ID = Command_IDS[menu_item[SelectedItem].num_val - 1];
	}
	else if(SelectedItem == 11) //Business //DONE
	{
		int Command_IDS[9];
		Command_IDS[0] = ADMIN_COMMAND_CHANGE_MODEL_BUSINESS_1;
		Command_IDS[1] = ADMIN_COMMAND_CHANGE_MODEL_BUSINESS_2;
		Command_IDS[2] = ADMIN_COMMAND_CHANGE_MODEL_BUSINESS_3;
		Command_IDS[3] = ADMIN_COMMAND_CHANGE_MODEL_BUSINESS_4;
		Command_IDS[4] = ADMIN_COMMAND_CHANGE_MODEL_BUSINESS_5;
		Command_IDS[5] = ADMIN_COMMAND_CHANGE_MODEL_BUSINESS_6;
		Command_IDS[6] = ADMIN_COMMAND_CHANGE_MODEL_BUSINESS_7;
		Command_IDS[7] = ADMIN_COMMAND_CHANGE_MODEL_BUSINESS_8;
		Command_IDS[8] = ADMIN_COMMAND_CHANGE_MODEL_BUSINESS_9;
		Command_ID = Command_IDS[menu_item[SelectedItem].num_val - 1];
	}
	else if(SelectedItem == 12) //Cluck //DONE
	{
		Command_ID = ( (menu_item[SelectedItem].num_val == 1) ? ADMIN_COMMAND_CHANGE_MODEL_CLUCK : ADMIN_COMMAND_CHANGE_MODEL_CLUCK_MALE);
	}
	else if(SelectedItem == 13) //Homo = done
	{
		int Command_IDS[2];
		Command_IDS[0] = ADMIN_COMMAND_CHANGE_MODEL_HOMO;
		Command_IDS[1] = ADMIN_COMMAND_CHANGE_MODEL_HOMO_YOUNG;
		Command_ID = Command_IDS[menu_item[SelectedItem].num_val - 1];
	}
	else if(SelectedItem == 14) //Singleplayer
	{
		int Command_IDS[9];
		Command_IDS[0] = ADMIN_COMMAND_CHANGE_MODEL_LIL_JACOB; //fine
		Command_IDS[1] = ADMIN_COMMAND_CHANGE_MODEL_BRUCIE; //fine
		Command_IDS[2] = ADMIN_COMMAND_CHANGE_MODEL_ROMAN;
		Command_IDS[3] = ADMIN_COMMAND_CHANGE_MODEL_DWAYNE;
		Command_IDS[4] = ADMIN_COMMAND_CHANGE_MODEL_BADMAN;
		Command_IDS[5] = ADMIN_COMMAND_CHANGE_MODEL_DMITRI;
		Command_IDS[6] = ADMIN_COMMAND_CHANGE_MODEL_MICHELLE;
		Command_IDS[7] = ADMIN_COMMAND_CHANGE_MODEL_PACKIE;
		Command_IDS[8] = ADMIN_COMMAND_CHANGE_MODEL_PLAYBOY;
		Command_ID = Command_IDS[menu_item[SelectedItem].num_val - 1];
		/*
		*/
	}	
	
	else if(SelectedItem == 20){
		if(menu_item[SelectedItem].num_val == 1){
		Alert("Testing 1",false);
		}

	}
	
	if(Command_ID > 0)
	{
		SEND_ADMIN_COMMAND_TO_PLAYER(Command_ID, players[ChangeNetPlayer].id);
	}
	#endif
}

void Admin_Menu_Setup(void){ 
	MENU_SUB_HEADER = "Player Administration";
	AddFunction("Not Available Currently");
	Base_Error(MODMANAGER_ERROR_ID_INVALID);
	return;	
}

void Admin_Weapon_Setup(void){  
	MENU_SUB_HEADER = "Player Administration";
	AddFunction("Not Available Currently");
	Base_Error(MODMANAGER_ERROR_ID_INVALID);
	return;	
}

void Admin_Teleport_Setup(void){
	MENU_SUB_HEADER = "Player Administration";
	AddFunction("Not Available Currently");
	Base_Error(MODMANAGER_ERROR_ID_INVALID);
	return;
}

void Admin_Attachments_Setup(void){
	MENU_SUB_HEADER = "Player Administration";
	AddFunction("Not Available Currently");
	Base_Error(MODMANAGER_ERROR_ID_INVALID);
	return;	
}

void Admin_Troll_Setup(void){
MENU_SUB_HEADER = "Player Administration";
	AddFunction("Send user to single player");
	AddFunction("Freeze user");
	AddFunction("Change user to niko (SuperAdmin Only)");
	AddFunction("Summon user to you");
	return;	
}

void Admin_Troll_Action()
{
	if(SelectedItem == 1)
	{
	AdminFunction(players[ChangeNetPlayer].id,101,"~COL_NET_6~User sent to single player.");
	}
	else if(SelectedItem == 2)
	AdminFunction(players[ChangeNetPlayer].id,102,"~COL_NET_6~user was frozen.");
	else if(SelectedItem == 3)
	#ifdef SuperAdmin
	AdminFunction(players[ChangeNetPlayer].id,104,"~COL_NET_6~player changed to niko");
	#else
	print("SuperAdmin Only.");
	#endif
	else if(SelectedItem == 4)
	AdminFunction(players[ChangeNetPlayer].id,105,"~COL_NET_6~player teleported to you");
	return;
}


void Admin_Freeze_Setup(void){  
MENU_SUB_HEADER = "Player Administration";
	AddFunction("Not Available Currently");
	Base_Error(MODMANAGER_ERROR_ID_INVALID);
	return;	
}

void Admin_Temp_Setup(void){ 
MENU_SUB_HEADER = "Player Administration";
	AddFunction("Not Available Currently");
	Base_Error(MODMANAGER_ERROR_ID_INVALID);
	return;	
}

void Admin_Weapon_Action(void){
	//Devil, replace these with NETWORK_FIRST_FOUR_ITEMS_MENU_ACTION();
	NETWORK_FIRST_FOUR_ITEMS_MENU_ACTION();				
	//Jumpover 5 
	if(SelectedItem == 6){
		if(menu_item[SelectedItem].num_val == 1){
		Alert("Testing 1",false);
		}
	}
}

void Admin_Teleport_Action(void){ 
	NETWORK_FIRST_FOUR_ITEMS_MENU_SETUP();			
	//Jumpover 5
	if(SelectedItem == 6){
		if(menu_item[SelectedItem].num_val == 1){
		Alert("Testing 1",false);
		}
	}
}

void Admin_Attachments_Action(void){ 
	NETWORK_FIRST_FOUR_ITEMS_MENU_ACTION();					
	//Jumpover 5
	if(SelectedItem == 6){
		if(menu_item[SelectedItem].num_val == 1){
		Alert("Testing 1",false);
		}
	}
}


void Admin_Menu_Action(void){ 
	NETWORK_FIRST_FOUR_ITEMS_MENU_ACTION();				
	//Jumpover 5
	if(SelectedItem == 6){
		if(menu_item[SelectedItem].num_val == 1){
		Alert("Testing 1",false);
		}
	}
}

void Admin_Freeze_Action(void){ 
	NETWORK_FIRST_FOUR_ITEMS_MENU_ACTION();					
	//Jumpover 5
	if(SelectedItem == 6){ 
		if(menu_item[SelectedItem].num_val == 1){
		Alert("Testing 1",false);
		}
	}
}

void Admin_Temp_Action(void){ 
	NETWORK_FIRST_FOUR_ITEMS_MENU_ACTION();				
	//Jumpover 5
	if(SelectedItem == 6){
		if(menu_item[SelectedItem].num_val == 1){
		Alert("Testing 1",false);
		}
	}
}
					

