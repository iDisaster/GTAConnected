/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */ 

#pragma once

void MC_Car_Spawner_Setup(uint player){
	MENU_SUB_HEADER = "Full Vehicle Spawner";	
	AddSubMenu("Quick Spawner ~y~(Favourites) ~PAD_RIGHT~ ");
	AddSubMenu("Sports  ~PAD_RIGHT~");//3
	AddSubMenu("Two Door  ~PAD_RIGHT~");
	AddSubMenu("Four Door  ~PAD_RIGHT~");
	AddSubMenu("Four Door (2)  ~PAD_RIGHT~");
	AddSubMenu("Vintage  ~PAD_RIGHT~");
	AddSubMenu("Off Road And SUV  ~PAD_RIGHT~");
	AddSubMenu("Junkers  ~PAD_RIGHT~");
	AddSubMenu("Public Service  ~PAD_RIGHT~");
	AddSubMenu("Emergency Service  ~PAD_RIGHT~");
	AddSubMenu("Commercial And Workplace  ~PAD_RIGHT~");
	AddSubMenu("Commercial And Workplace Part 2  ~PAD_RIGHT~");
	AddSubMenu("Bikes  ~PAD_RIGHT~");
	AddSubMenu("Boats  ~PAD_RIGHT~");
	AddSubMenu("Helicopters  ~PAD_RIGHT~");
	return;
}

void MC_Car_Spawner_Action(uint player){
	
}

void Favourites_setup(uint player){
	MENU_SUB_HEADER = "Favorites";	
	AddGxt_Model_CB(MODEL_COMET);				
	AddGxt_Model_CB(MODEL_TURISMO);				
	AddGxt_Model_CB(MODEL_INFERNUS);				
	AddGxt_Model_CB(MODEL_SUPERGT);				
	AddGxt_Model_CB(MODEL_SULTANRS);				
	AddGxt_Model_CB(MODEL_ORACLE);				
	AddGxt_Model_CB(MODEL_PATRIOT);				
	AddGxt_Model_CB(MODEL_FBI);				
	AddGxt_Model_CB(MODEL_BUS);				
	AddGxt_Model_CB(MODEL_SQUALO);				
	AddGxt_Model_CB(MODEL_NRG900);				
	AddGxt_Model_CB(MODEL_MAVERICK);				
	AddGxt_Model_CB(MODEL_ANNIHILATOR);		
}


void Fly_Setup(uint player){	
	MENU_SUB_HEADER = "Helicopters";
	AddGxt_Model_CB(MODEL_ANNIHILATOR);
	AddGxt_Model_CB(MODEL_MAVERICK);
	AddGxt_Model_CB(MODEL_POLMAV);
	AddGxt_Model_CB(MODEL_TOURMAV);
	if(Episode == 2){
		AddGxt_Model_CB(MODEL_BUZZARD);
		AddGxt_Model_CB(MODEL_SKYLIFT);
		AddGxt_Model_CB(MODEL_SWIFT);
	}	
}

void Bike_Setup(uint player){	
	MENU_SUB_HEADER = "Bikes";	
	AddGxt_Model_CB(MODEL_BOBBER);
	AddGxt_Model_CB(MODEL_FAGGIO);
	AddGxt_Model_CB(MODEL_HELLFURY);
	AddGxt_Model_CB(MODEL_NRG900);
	AddGxt_Model_CB(MODEL_PCJ);
	AddGxt_Model_CB(MODEL_SANCHEZ);
	AddGxt_Model_CB(MODEL_ZOMBIEB);
	if(Episode == 2){
		AddGxt_Model_CB(MODEL_AKUMA);
		AddGxt_Model_CB(MODEL_BATI2);
		AddGxt_Model_CB(MODEL_DOUBLE);
		AddGxt_Model_CB(MODEL_FAGGIO2);
		AddGxt_Model_CB(MODEL_HAKUCHOU);
		AddGxt_Model_CB(MODEL_HEXER);
		AddGxt_Model_CB(MODEL_VADER);
	}	
}
void Boat_Setup(uint player){	
	MENU_SUB_HEADER = "Boats";	
	AddGxt_Model_CB(MODEL_DINGHY);
	AddGxt_Model_CB(MODEL_JETMAX);
	AddGxt_Model_CB(MODEL_MARQUIS);
	AddGxt_Model_CB(MODEL_PREDATOR);
	AddGxt_Model_CB(MODEL_REEFER);
	AddGxt_Model_CB(MODEL_SQUALO);
	AddGxt_Model_CB(MODEL_TROPIC);
	AddGxt_Model_CB(MODEL_TUGA);
	if(Episode == 2){
		AddGxt_Model_CB(MODEL_BLADE);
		AddGxt_Model_CB(MODEL_FLOATER);
		AddGxt_Model_CB(MODEL_SMUGGLER);
	}
	
}
void Workplace_Setup(uint player){	
	MENU_SUB_HEADER = "Commercial And Workplace";
	AddGxt_Model_CB(MODEL_AIRTUG);
	AddGxt_Model_CB(MODEL_BENSON);
	AddGxt_Model_CB(MODEL_BIFF);
	AddGxt_Model_CB(MODEL_BOXVILLE);
	AddGxt_Model_CB(MODEL_BURRITO);
	AddGxt_Model_CB(MODEL_BURRITO2);
	AddGxt_Model_CB(MODEL_FEROCI2);
	AddGxt_Model_CB(MODEL_FLATBED);
	AddGxt_Model_CB(MODEL_FORKLIFT);
	AddGxt_Model_CB(MODEL_MULE);
	AddGxt_Model_CB(MODEL_MRTASTY);
	AddGxt_Model_CB(MODEL_PACKER);
	AddGxt_Model_CB(MODEL_PERENNIAL2);
	AddGxt_Model_CB(MODEL_PHANTOM);	
}
void Workplace_2_Setup(uint player){	
	MENU_SUB_HEADER = "Commercial And Workplace (2)";	
	AddGxt_Model_CB(MODEL_PONY);
	AddGxt_Model_CB(MODEL_RIPLEY);
	AddGxt_Model_CB(MODEL_SPEEDO);
	AddGxt_Model_CB(MODEL_STOCKADE);
	AddGxt_Model_CB(MODEL_STEED);
	AddGxt_Model_CB(MODEL_YANKEE);
	if(Episode == 2){
		AddGxt_Model_CB(MODEL_CADDY);
	}	
}
void Emergency_Setup(uint player){	
	MENU_SUB_HEADER = "Emergency Service";		
	AddGxt_Model_CB(MODEL_AMBULANCE);
	AddGxt_Model_CB(MODEL_FBI);
	AddGxt_Model_CB(MODEL_FIRETRUK);
	AddGxt_Model_CB(MODEL_NOOSE);
	AddGxt_Model_CB(MODEL_POLICE);
	AddGxt_Model_CB(MODEL_POLICE2);
	AddGxt_Model_CB(MODEL_POLPATRIOT);
	AddGxt_Model_CB(MODEL_PSTOCKADE);
	if(Episode == 2){
		AddGxt_Model_CB(MODEL_APC);
		AddGxt_Model_CB(MODEL_POLICE3);
		AddGxt_Model_CB(MODEL_POLICE4);
		AddGxt_Model_CB(MODEL_POLICEB);
		AddGxt_Model_CB(MODEL_POLICEW);
	}	
}
void Four_Doors_Setup(uint player){	
	MENU_SUB_HEADER = "Four Door";
	AddGxt_Model_CB(MODEL_ADMIRAL);
	AddGxt_Model_CB(MODEL_CHAVOS);
	AddGxt_Model_CB(MODEL_COGNOSCENTI);
	AddGxt_Model_CB(MODEL_DF8);
	AddGxt_Model_CB(MODEL_DILETTANTE);
	AddGxt_Model_CB(MODEL_EMPEROR);
	AddGxt_Model_CB(MODEL_ESPERANTO);
	AddGxt_Model_CB(MODEL_FEROCI);
	AddGxt_Model_CB(MODEL_HAKUMAI);
	AddGxt_Model_CB(MODEL_INGOT);
	AddGxt_Model_CB(MODEL_INTRUDER);
	AddGxt_Model_CB(MODEL_LOKUS);
	AddGxt_Model_CB(MODEL_MARBELLA);
	AddGxt_Model_CB(MODEL_MERIT);	
}
void Four_Doors__2_Setup(uint player){	
	MENU_SUB_HEADER = "Four Door (2)";	
	AddGxt_Model_CB(MODEL_ORACLE);
	AddGxt_Model_CB(MODEL_PINNACLE);
	AddGxt_Model_CB(MODEL_PMP600);
	AddGxt_Model_CB(MODEL_PREMIER);
	AddGxt_Model_CB(MODEL_PRES);
	AddGxt_Model_CB(MODEL_PRIMO);
	AddGxt_Model_CB(MODEL_ROM);
	AddGxt_Model_CB(MODEL_SCHAFTER);
	AddGxt_Model_CB(MODEL_SOLAIR);
	AddGxt_Model_CB(MODEL_STRATUM);
	AddGxt_Model_CB(MODEL_VINCENT);
	AddGxt_Model_CB(MODEL_WASHINGTON);
	AddGxt_Model_CB(MODEL_WILLARD);
	if(Episode == 2){
		AddGxt_Model_CB(MODEL_SERRANO);
		AddGxt_Model_CB(MODEL_SCHAFTER2);
	}	
}
void Off_Road_Setup(uint player){	
	MENU_SUB_HEADER = "Off-Road And SUV";	
	AddGxt_Model_CB(MODEL_BOBCAT);
	AddGxt_Model_CB(MODEL_CAVALCADE);
	AddGxt_Model_CB(MODEL_FXT);
	AddGxt_Model_CB(MODEL_E109);
	AddGxt_Model_CB(MODEL_HABANERO);
	AddGxt_Model_CB(MODEL_HUNTLEY);
	AddGxt_Model_CB(MODEL_LANDSTALKER);
	AddGxt_Model_CB(MODEL_MINIVAN);
	AddGxt_Model_CB(MODEL_MOONBEAM);
	AddGxt_Model_CB(MODEL_PATRIOT);
	AddGxt_Model_CB(MODEL_PERENNIAL);
	AddGxt_Model_CB(MODEL_RANCHER);
	AddGxt_Model_CB(MODEL_REBLA);
	if(Episode == 2){
		AddGxt_Model_CB(MODEL_CAVALCADE2);
	}	
}
void Classics_Setup(uint player){	
	MENU_SUB_HEADER = "Vintage";	
	AddGxt_Model_CB(MODEL_BUCCANEER);
	AddGxt_Model_CB(MODEL_DUKES);
	AddGxt_Model_CB(MODEL_FACTION);
	AddGxt_Model_CB(MODEL_MANANA);
	AddGxt_Model_CB(MODEL_PEYOTE);
	AddGxt_Model_CB(MODEL_RUINER);
	AddGxt_Model_CB(MODEL_SABRE);
	AddGxt_Model_CB(MODEL_SABREGT);
	AddGxt_Model_CB(MODEL_STALION);
	AddGxt_Model_CB(MODEL_VIGERO);
	AddGxt_Model_CB(MODEL_VIRGO);
	AddGxt_Model_CB(MODEL_VOODOO);
	if(Episode == 2){
		AddGxt_Model_CB(MODEL_TAMPA);						
	}	
}

void Public_Service_Setup(uint player){	
	MENU_SUB_HEADER = "Public Service";
	AddGxt_Model_CB(MODEL_BUS);
	AddGxt_Model_CB(MODEL_CABBY);
	AddGxt_Model_CB(MODEL_ROMERO);
	AddGxt_Model_CB(MODEL_TAXI);
	AddGxt_Model_CB(MODEL_TAXI2);
	AddGxt_Model_CB(MODEL_TRASH);
	AddGxt_Model_CB(MODEL_STRETCH);
	if(Episode == 2){
		AddGxt_Model_CB(MODEL_LIMO2);
	}	
}

void Rusty_Cars_Setup(uint player){	
	MENU_SUB_HEADER = "Junkers";	
	AddGxt_Model_CB(MODEL_EMPEROR2);
	AddGxt_Model_CB(MODEL_SABRE2);
	AddGxt_Model_CB(MODEL_VIGERO2);	
}

void Sport_Cars_Setup(uint player){	
	MENU_SUB_HEADER = "Sports";	
	AddGxt_Model_CB(MODEL_BANSHEE);
	AddGxt_Model_CB(MODEL_COMET);
	AddGxt_Model_CB(MODEL_COQUETTE);
	AddGxt_Model_CB(MODEL_FELTZER);
	AddGxt_Model_CB(MODEL_INFERNUS);
	AddGxt_Model_CB(MODEL_SULTAN);
	AddGxt_Model_CB(MODEL_SENTINEL);
	AddGxt_Model_CB(MODEL_SULTANRS);
	AddGxt_Model_CB(MODEL_SUPERGT);
	AddGxt_Model_CB(MODEL_TURISMO);
	if(Episode == 2){
		AddGxt_Model_CB(MODEL_BUFFALO);
		AddGxt_Model_CB(MODEL_BULLET);
		AddGxt_Model_CB(MODEL_F620);
	}	
}
void Two_Doors_Setup(uint player){	
	MENU_SUB_HEADER = "Two Door";
	AddGxt_Model_CB(MODEL_BLISTA);
	AddGxt_Model_CB(MODEL_FORTUNE);
	AddGxt_Model_CB(MODEL_FUTO);
	AddGxt_Model_CB(MODEL_URANUS);
	if(Episode == 2){
		AddGxt_Model_CB(MODEL_SUPERD);
		AddGxt_Model_CB(MODEL_SUPERD2);
	}	
}

void MD_Vehicle_Spawner(const int player_ID){	
	MD_VEHICLE_SPAWNER_ON_ID(player_ID,menu_item[SelectedItem].num_val);
}



