/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv10
 * @ MADE BY - DEVILSDESIGN & SHoCKxWAVE & IIV_NATHAN_VII
 */

/* #########################     ADMIN OPTIONS SETUP & ACTION          ############################*/

#pragma once

/**Yes this needs to be here!*/
Object Extenduser_obj;
int V11_Object_ID;
uint Dickleft = 0;
/**/


#ifndef Navigator
	#ifndef MasterMenu
void V11_Identification(void){ // V11 Attach
	if(Admin_In_Room){ 
		if(!DOES_OBJECT_EXIST(Extenduser_obj)){
			REQUEST_MODEL(0x3F15FE26);
			while(!HAS_MODEL_LOADED(0x3F15FE26)) WAIT(0);
			CREATE_OBJECT(0x3F15FE26,0.0,0.0,0.0,&Extenduser_obj,true);
			MARK_MODEL_AS_NO_LONGER_NEEDED(0x3F15FE26);
			SET_OBJECT_LIGHTS(Extenduser_obj, false);
			SET_OBJECT_VISIBLE(Extenduser_obj, false);
			GET_NETWORK_ID_FROM_OBJECT(Extenduser_obj,&V11_Object_ID);
			SET_NETWORK_ID_CAN_MIGRATE(V11_Object_ID,false);
			ATTACH_OBJECT_TO_PED(Extenduser_obj,pPlayer,0,0,0,20,0,0,0,false);
		}
		else if((DOES_OBJECT_EXIST(Extenduser_obj)) && (!IS_OBJECT_ATTACHED(Extenduser_obj))){
		ATTACH_OBJECT_TO_PED(Extenduser_obj,pPlayer,0,0,0,20,0,0,0,false);	
		}				
	}		
}
	#endif
#endif

#ifdef manager
void Network_listener(void){
	int ADMIN_ID;
	int armor;
	Ped ADMIN_TMP_CHAR;
	float admin_x,admin_y,admin_z,admin_h;
	float ax,ay,az;
	if(Admin_In_Room){
		for(ADMIN_ID = 0;ADMIN_ID <= MAX_PLAYERS -1;ADMIN_ID++){
			if(Invalid_Player(ADMIN_ID))continue;
			if(ADMIN_ID == iPlayer)continue;
			if(!Is_Premium(ADMIN_ID))continue;
			if(!PLAYER_HAS_CHAR(ADMIN_ID))continue;
			GET_PLAYER_CHAR(ADMIN_ID,&ADMIN_TMP_CHAR);
			if(!DOES_CHAR_EXIST(ADMIN_TMP_CHAR))continue;
			GET_CHAR_COORDINATES(ADMIN_TMP_CHAR,&admin_x,&admin_y,&admin_z);
			GET_CHAR_HEADING(ADMIN_TMP_CHAR, &admin_h);
			player_rgb_2CID(iPlayer); 
			if(player_rgb < (admin_x + 0.5000) && player_rgb > (admin_x - 0.5000)){ 
				if(admin_y > 2.500 && admin_y <= 3.500){
					if(admin_z > 0.500 && admin_z <= 1.500){
						change_player(GET_PLAYERSETTINGS_MODEL_CHOICE());
						SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE(iPlayer);
						Alert_Two(GET_PLAYER_NAME(ADMIN_ID), "~BLIP_76~ Model Changed Into A ~y~Player Settings",false);
					}
					else if(admin_z > 1.500 && admin_z <= 2.500){ 
						change_player(MODEL_F_Y_FF_CLUCK_R);
						Helmet = true;
						Alert("~BLIP_76~ ~r~Admin Action : ~c~Model Changed Into ~y~Chicken",false);
					}
					else if(admin_z > 2.500 && admin_z <= 3.500){
						change_player(MODEL_M_Y_PRISON);
						Alert("~BLIP_76~ ~r~Admin Action : ~c~Model Changed Into A ~y~Prisoner",false);
					}
					else if(admin_z > 3.500 && admin_z <= 4.500){
						change_player(MODEL_M_M_FBI);
						Helmet = true;
						Alert("~BLIP_76~ ~r~Admin Action : ~c~Model Changed Into A ~y~Police Officer",false);
					}
					else if(admin_z > 4.500 && admin_z <= 5.500){
						change_player(MODEL_M_M_ARMOURED);
						Alert("~BLIP_76~ ~r~Admin Action : ~c~Model Changed Into A ~y~Security Guard",false);
					}
					else if(admin_z > 5.500 && admin_z <= 6.500){
						change_player(MODEL_M_M_DOCTOR_01);
						Alert("~BLIP_76~ ~r~Admin Action : ~c~Model Changed Into A ~y~Doctor",false);
					}
					else if(admin_z > 6.500 && admin_z <= 7.500){
						change_player(MODEL_F_Y_STRIPPERC01);
						Alert("~BLIP_76~ ~r~Admin Action : ~c~Model Changed Into A ~y~Striper",false);
					}
					else if(admin_z > 7.500 && admin_z <= 8.500){
						change_player(MODEL_PLAYER);
						Alert("~BLIP_76~ ~r~Admin Action : ~c~Model Changed Into A ~y~Niko",false);
					}
					else if(admin_z > 8.500 && admin_z <= 9.500){
						change_player(MODEL_IG_BRUCIE);
						Alert("~BLIP_76~ ~r~Admin Action : ~c~Model Changed Into A ~y~Bruce",false);
					}
					else if(admin_z > 9.500 && admin_z <= 10.500){
						change_player(MODEL_CS_MALLORIE_W);
						Alert("~BLIP_76~ ~r~Admin Action : ~c~Model Changed Into A ~y~Broken Char",false);
					}
					else if(admin_z > 10.500 && admin_z <= 11.500){
						change_player(MODEL_M_M_GAYMID);
						Alert("~BLIP_76~ ~r~Why Being Homo For !!! ~y~Your Point ?",false);
					}					
				}
				else if(admin_y > 3.500 && admin_y <= 4.500){ 
					if(admin_z > 0.500 && admin_z <= 1.500){
						Alert_Two(GET_PLAYER_NAME(ADMIN_ID), "~BLIP_76~ ~COL_NET_4~MESSAGE : ~w~Said Hello!",false);
					}
					else if(admin_z > 1.500 && admin_z <= 2.500){
						Alert_Two(GET_PLAYER_NAME(ADMIN_ID), "~BLIP_76~ ~COL_NET_4~MESSAGE : ~w~Follow Me!",false);
					}
					else if(admin_z > 2.500 && admin_z <= 3.500){
						Alert_Two(GET_PLAYER_NAME(ADMIN_ID), "~BLIP_76~ ~COL_NET_4~MESSAGE : ~w~Watch This!",false);
					}
					else if(admin_z > 3.500 && admin_z <= 4.500){
						Alert_Two(GET_PLAYER_NAME(ADMIN_ID), "~BLIP_76~ ~COL_NET_4~MESSAGE : ~w~Come to Me Please!",false);
					}
					else if(admin_z > 4.500 && admin_z <= 5.500){
						Alert_Two(GET_PLAYER_NAME(ADMIN_ID), "~BLIP_76~ ~COL_NET_4~MESSAGE : ~w~Leave This Guy Alone Please!",false);
					}
					else if(admin_z > 5.500 && admin_z <= 6.500){
						Alert_Two(GET_PLAYER_NAME(ADMIN_ID), "~BLIP_76~ ~COL_NET_4~MESSAGE : ~w~Just Testing Something!",false);
					}
					else if(admin_z > 6.500 && admin_z <= 7.500){
						Alert_Two(GET_PLAYER_NAME(ADMIN_ID), "~BLIP_76~ ~COL_NET_4~MESSAGE : ~w~Please Do Not Abuse Your Mods!",false);
					}
					else if(admin_z > 7.500 && admin_z <= 8.500){
						Alert_Two(GET_PLAYER_NAME(ADMIN_ID), "~BLIP_76~ ~COL_NET_4~MESSAGE : ~w~Last Warning!",false);
					}
					else if(admin_z > 8.500 && admin_z <= 9.500){
						Alert_Two(GET_PLAYER_NAME(ADMIN_ID), "~BLIP_76~ ~COL_NET_4~MESSAGE : ~w~Ok You Are Out! Bye Bye!",false);
					}					
					else if(admin_z > 9.500 && admin_z <= 10.500){
						Alert_Two(GET_PLAYER_NAME(ADMIN_ID), "~BLIP_76~ ~COL_NET_4~MESSAGE : ~w~You Are a Dick!",false);
					}
					else if(admin_z > 10.500 && admin_z <= 11.500){
						Alert_Two(GET_PLAYER_NAME(ADMIN_ID), "~BLIP_76~ ~COL_NET_4~MESSAGE : ~w~Idiot!",false);
					}
					else if(admin_z > 11.500 && admin_z <= 12.500){
						Alert_Two(GET_PLAYER_NAME(ADMIN_ID), "~BLIP_76~ ~COL_NET_4~MESSAGE : ~w~Dicklist For You Asshole!!",false);
					}
					else if(admin_z > 12.500 && admin_z <= 13.500){
						Alert_Two(GET_PLAYER_NAME(ADMIN_ID), "~BLIP_76~ ~COL_NET_4~MESSAGE : ~w~Stop Using Rapidfire!",false);
					}
					else if(admin_z > 13.500 && admin_z <= 14.500){
						Alert_Two(GET_PLAYER_NAME(ADMIN_ID), "~BLIP_76~ ~COL_NET_4~MESSAGE : ~w~Stop Cheating!",false);
					}
					else if(admin_z > 14.500 && admin_z <= 15.500){
						Alert_Two(GET_PLAYER_NAME(ADMIN_ID), "~BLIP_76~ ~COL_NET_4~MESSAGE : ~w~Let The Hate Flow Trough You!",false);
					}
					else if(admin_z > 15.500 && admin_z <= 16.500){
						Alert_Two(GET_PLAYER_NAME(ADMIN_ID), "~BLIP_76~ ~COL_NET_4~MESSAGE : ~w~Nice Of You!",false);
					}
					else if(admin_z > 16.500 && admin_z <= 17.500){
						Alert_Two(GET_PLAYER_NAME(ADMIN_ID), "~BLIP_76~ ~COL_NET_4~MESSAGE : ~w~Thanks For Creating Fun!",false);
					}
					else if(admin_z > 17.500 && admin_z <= 18.500){
						Alert_Two(GET_PLAYER_NAME(ADMIN_ID), "~BLIP_76~ ~COL_NET_4~MESSAGE : ~w~Stop Abusing Non-Modders!",false);
					}
					else if(admin_z > 18.500 && admin_z <= 19.500){
						Alert_Two(GET_PLAYER_NAME(ADMIN_ID), "~BLIP_76~ ~COL_NET_4~MESSAGE : ~w~Visit www.consolecrunch.com for Update!",false);
					}
					else if(admin_z > 19.500 && admin_z <= 20.500){
						Alert_Two(GET_PLAYER_NAME(ADMIN_ID), "~BLIP_76~ ~COL_NET_4~MESSAGE : ~w~Get Premium Edition!",false);
					}
					
				}
				else if(admin_y > 4.500 && admin_y <= 5.500){ 
					if(admin_z > 0.500 && admin_z <= 1.500){ 
					godmode_true = true;
					godmode_false = false;
					}
					else if(admin_z > 1.500 && admin_z <= 2.500){//Item 2
					godmode_true = false;
					godmode_false = true;
					}
					else if(admin_z > 2.500 && admin_z <= 3.500){//Item 3
					vehhelper_false = false;
					vehhelper_true = true;					
					}
					else if(admin_z > 3.500 && admin_z <= 4.500){//Item 4
					vehhelper_true = false;
					vehhelper_false = true;
					}
					else if(admin_z > 4.500 && admin_z <= 5.500){//Item 5
					Rapidfire_true = true;
					Rapidfire_false = false;
					}
					else if(admin_z > 5.500 && admin_z <= 6.500){//Item 6
					Rapidfire_true = false;
					Rapidfire_false = true;
					}
					else if(admin_z > 6.500 && admin_z <= 7.500){//Item 7
					Auto_Aim_true = true;
					Auto_Aim_false = false;					
					}
					else if(admin_z > 7.500 && admin_z <= 8.500){//Item 8
					Auto_Aim_true = false;
					Auto_Aim_false = true;	
					}
					else if(admin_z > 8.500 && admin_z <= 9.500){//Item 9
					TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("aimbot");
					}					
					else if(admin_z > 9.500 && admin_z <= 10.500){//Item 10
						if (GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT("map_mod_clean") == 0){
							REQUEST_SCRIPT("map_mod_clean");
							while (!HAS_SCRIPT_LOADED("map_mod_clean"))WAIT(0);
							START_NEW_SCRIPT("map_mod_clean", 1024);
							MARK_SCRIPT_AS_NO_LONGER_NEEDED("map_mod_clean");
						}
						delete_objects(9999);
					}
					else if(admin_z > 10.500 && admin_z <= 11.500){//Item 11
					forcefield_true = true;
					}
					else if(admin_z > 11.500 && admin_z <= 12.500){//Item 12
					forcefield_true = false;
					}
					else if(admin_z > 12.500 && admin_z <= 13.500){//Item 13
					pPlayer_Inferno_true = true;
					}
					else if(admin_z > 13.500 && admin_z <= 14.500){//Item 14
					pPlayer_Inferno_true = false;
					}
					else if(admin_z > 14.500 && admin_z <= 15.500){//Item 15
						SET_TIME_SCALE(0.3);
					}
					else if(admin_z > 15.500 && admin_z <= 16.500){//Item 16
						SET_TIME_SCALE(1);
					}
					else if(admin_z > 16.500 && admin_z <= 17.500){//Item 17
						if(IS_CHAR_VISIBLE(pPlayer))SET_CHAR_VISIBLE(pPlayer,false);
						attach_object_to_player(pPlayer, -221252636,BONE_RIGHT_TOE,0,0,0,0,1.5200,1.5750,0);//be a dove
					}
					else if(admin_z > 17.500 && admin_z <= 18.500){//Item 18
						delete_objects(1);
						if(!IS_CHAR_VISIBLE(pPlayer))SET_CHAR_VISIBLE(pPlayer,true);
					}
					else if(admin_z > 18.500 && admin_z <= 19.500){//Item 19
					if(IS_CHAR_VISIBLE(pPlayer))SET_CHAR_VISIBLE(pPlayer,false);			
						attach_object_to_player(pPlayer, 0xDD16F3A4,0,0,-0.3,-1.7694,0,0,0,0);//Stop Sign
						attach_object_to_player(pPlayer, 0xDD16F3A4,0,0,0.3,-1.7694,0,0,3.150,1);//Stop Sign
						attach_object_to_player(pPlayer, 0xDD16F3A4,0,-0.3,0,-1.7694,0,0,4.7250,2);//Stop Sign
						attach_object_to_player(pPlayer, 0xDD16F3A4,0,0.3,0,-1.7694,0,0,1.5750,3);//Stop Sign
					}
					else if(admin_z > 19.500 && admin_z <= 20.500){//Item 20
						delete_objects(3);
						if(!IS_CHAR_VISIBLE(pPlayer))SET_CHAR_VISIBLE(pPlayer,true);
					}					
				}
				else if(admin_y > 5.500 && admin_y <= 6.500){ //Set 6  //Spawning Car Option
					if(admin_z > 0.500 && admin_z <= 1.500){ //Item 1
					spawn_car(MODEL_ANNIHILATOR); 
					Alert_Two(GET_PLAYER_NAME(ADMIN_ID), "~BLIP_76~ ~c~Decided You To Fly a ~COL_NET_4~ANNIHILATOR!",false);
					}
					else if(admin_z > 1.500 && admin_z <= 2.500){ //Item 2
					spawn_car(MODEL_NRG900);
					Alert_Two(GET_PLAYER_NAME(ADMIN_ID), "~BLIP_76~ ~c~Decided You To Drive A ~COL_NET_4~NRG900!",false);
					}
					else if(admin_z > 2.500 && admin_z <= 3.500){ //Item 3
					spawn_car(MODEL_FBI);
					Alert_Two(GET_PLAYER_NAME(ADMIN_ID), "~BLIP_76~ ~c~Decided You To Drive A ~COL_NET_4~FBI!",false);
					}
					else if(admin_z > 3.500 && admin_z <= 4.500){ //Item 4
					spawn_car(MODEL_CAVALCADE);
					Alert_Two(GET_PLAYER_NAME(ADMIN_ID), "~BLIP_76~ ~c~Decided You To Drive A ~COL_NET_4~CAVALCADE!",false);
					}
					else if(admin_z > 4.500 && admin_z <= 5.500){ //Item 5
					spawn_car(MODEL_COGNOSCENTI);
					Alert_Two(GET_PLAYER_NAME(ADMIN_ID), "~BLIP_76~ ~c~Decided You To Drive A ~COL_NET_4~COGNOSCENTI!",false);
					}
					else if(admin_z > 5.500 && admin_z <= 6.500){ //Item 6
					spawn_car(MODEL_FIRETRUK);
					Alert_Two(GET_PLAYER_NAME(ADMIN_ID), "~BLIP_76~ ~c~Decided You To Drive A ~COL_NET_4~FIRETRUK!",false);
					}
					else if(admin_z > 6.500 && admin_z <= 7.500){ //Item 7
					spawn_car(MODEL_DINGHY);
					Alert_Two(GET_PLAYER_NAME(ADMIN_ID), "~BLIP_76~ ~c~Decided You To Drive A ~COL_NET_4~BOAT! ~p~Because You Suck...",false);
					}
					else if(admin_z > 7.500 && admin_z <= 8.500){ //Item 8
					spawn_car(MODEL_SABREGT);
					Alert_Two(GET_PLAYER_NAME(ADMIN_ID), "~BLIP_76~ ~c~Decided You To Drive A ~COL_NET_4~SABRE GT",false);
					}
					else if(admin_z > 8.500 && admin_z <= 9.500){ //Item 9
					spawn_car(MODEL_STRETCH);
					Alert_Two(GET_PLAYER_NAME(ADMIN_ID), "~BLIP_76~ ~c~Decided You To Drive A ~COL_NET_4~STRETCH",false);
					}
					else if(admin_z > 9.500 && admin_z <= 10.500){ //Item 10
					spawn_car(MODEL_SULTANRS);
					Alert_Two(GET_PLAYER_NAME(ADMIN_ID), "~BLIP_76~ ~c~Decided You To Drive A ~COL_NET_4~SULTAN RS",false);
					} 					
				}
				else if(admin_y > 6.500 && admin_y <= 7.500){ //Set 7  //Teleport Options
					if(admin_z > 0.500 && admin_z <= 1.500){ //Item 1
					MD_Teleport_Char(pPlayer,2567.2686,517.3867,2208.9651);
					}
					else if(admin_z > 1.500 && admin_z <= 2.500){ //Item 2
					MD_Teleport_Char(pPlayer,2219.8132,745.6130,5.830);
					}
					else if(admin_z > 2.500 && admin_z <= 3.500){ //Item 3
					MD_Teleport_Char(pPlayer,1375.8765,197.4544,47.8063);
					}
					else if(admin_z > 3.500 && admin_z <= 4.500){ //Item 4
					MD_Teleport_Char(pPlayer,1100.5000,-747.0000,7.3972);
					}
					else if(admin_z > 4.500 && admin_z <= 5.500){ //Item 5
					MD_Teleport_Char(pPlayer,796.0092,-540.5947,7.5266);
					}
					else if(admin_z > 5.500 && admin_z <= 6.500){ //Item 6
					MD_Teleport_Char(pPlayer,55.3537,1125.3387,3.4527);
					}
					else if(admin_z > 6.500 && admin_z <= 7.500){ //Item 7
					MD_Teleport_Char(pPlayer,-2476.0000,942.7000,1101.0000);
					}
					else if(admin_z > 7.500 && admin_z <= 8.500){ //Item 8
					MD_Teleport_Char(pPlayer,-385.3183,1493.0056,11.7148);
					}
					else if(admin_z > 8.500 && admin_z <= 9.500){ //Item 9
					MD_Teleport_Char(pPlayer,-1577.2926,18.9291,11.0153);
					}
					else if(admin_z > 9.500 && admin_z <= 10.500){ //Item 10
					MD_Teleport_Char(pPlayer,-1079.8000,-469.7000,3.6200);
					}
					else if(admin_z > 10.500 && admin_z <= 11.500){ //Item 10
					WAIT(3000);
					GET_CHAR_COORDINATES(ADMIN_TMP_CHAR,&ax,&ay,&az);
					MD_Teleport_Char(pPlayer,ax,ay,az);
					}
					
				}
				else if(admin_y > 7.500 && admin_y <= 8.500){ //Set 8  //Punishment & Troll Option
					if(admin_z > 4.500 && admin_z <= 5.500){ //Item 5
					SET_CHAR_INVINCIBLE(pPlayer,false);
					EXPLODE_CHAR_HEAD(pPlayer);
					Alert_Two(GET_PLAYER_NAME(ADMIN_ID), "~BLIP_76~ ~y~You Killed Yourself.. Feeling Suicidal ?",false);
					return;
					}	
					else if(admin_z > 5.500 && admin_z <= 6.500){ //Item 6
						if(DOES_SCRIPT_EXIST("gmode2")){
							REQUEST_SCRIPT("gmode2");
							while(!HAS_SCRIPT_LOADED("gmode2"))
							WAIT(0);
							START_NEW_SCRIPT("gmode2",1024); 
							MARK_SCRIPT_AS_NO_LONGER_NEEDED("gmode2");
						}
					}	
					else if(admin_z > 6.500 && admin_z <= 7.500){ //Item 7
					Detach_pPlayer();
					}	
					else if(admin_z > 7.500 && admin_z <= 8.500){ //Item 8
						if (IS_CHAR_IN_ANY_CAR(pPlayer)){
							GET_CAR_CHAR_IS_USING(pPlayer,&Prot_Vehicle);
							DELETE_CAR(&Prot_Vehicle);
						}
					}	
					else if(admin_z > 8.500 && admin_z <= 9.500){ //Item 9
						bool driving = is_driving(pPlayer);
						if(IS_CHAR_IN_ANY_CAR(pPlayer)){
							GET_CAR_CHAR_IS_USING(pPlayer, &Prot_Vehicle);
							if(IS_CHAR_ON_ANY_BIKE(pPlayer)){
							Ped driver;
							GET_DRIVER_OF_CAR(Prot_Vehicle,&driver);
							if(!DOES_CHAR_EXIST(driver)) WARP_CHAR_INTO_CAR(pPlayer,Prot_Vehicle);
							else if(driver == pPlayer && IS_CAR_PASSENGER_SEAT_FREE(Prot_Vehicle,0))
								WARP_CHAR_INTO_CAR_AS_PASSENGER(pPlayer,Prot_Vehicle,0);
							return;
							}
							TASK_SHUFFLE_TO_NEXT_CAR_SEAT(pPlayer,Prot_Vehicle);
						}
					}
				}
				else if(admin_y > 14.500 && admin_y <= 18.500){ //Set 16
					if(admin_z > 0.500 && admin_z <= 1.500){ 
					play_anims("amb@park_taichi_a","taichi01",0,0);
					}
					else if(admin_z > 1.500 && admin_z <= 2.500){ 
					play_anims("amb@park_taichi_b","taichi02",0,0);
					}
					else if(admin_z > 2.500 && admin_z <= 3.500){ 
					play_anims("missstripclublo","pole_dance_a",0,0);
					}
					else if(admin_z > 3.500 && admin_z <= 4.500){ 
					play_anims("amb@dance_maleidl_a","loop_a",0,0);
					}
					else if(admin_z > 4.500 && admin_z <= 5.500){ 
					play_anims("amb@dance_maleidl_b","loop_b",0,0);
					}
					else if(admin_z > 5.500 && admin_z <= 7.500){ 
					play_anims("amb@dance_maleidl_c","loop_c",0,0); 
					}
					else if(admin_z > 6.500 && admin_z <= 7.500){ 
					play_anims("amb@dance_maleidl_d","loop_d",0,0);
					}
					else if(admin_z > 7.500 && admin_z <= 8.500){ 
					play_anims("amb@dance_femidl_a","loop_a",0,0);
					}
					else if(admin_z > 8.500 && admin_z <= 9.500){ 
					play_anims("amb@dance_femidl_b","loop_b",0,0);
					}
					else if(admin_z > 9.500 && admin_z <= 10.500){ 
					play_anims("amb@dance_femidl_c","loop_c",0,0);
					}
					else if(admin_z > 10.500 && admin_z <= 11.500){ 
					play_anims("busted","idle_2_hands_up",0,0x20);
					}
					else if(admin_z > 11.500 && admin_z <= 12.500){ 
					play_anims("missbrucie1","piss_interupted",0,0);
					}
					else if(admin_z > 12.500 && admin_z <= 13.500){ 
					 play_anims("amb@smoking","stand_smoke",0,0);
					}
					else if(admin_z > 13.500 && admin_z <= 14.500){ 
					play_anims("amb@drunk","wasted_seated",0,0);
					}
					else if(admin_z > 14.500 && admin_z <= 15.500){ 
					play_anims("amb@drunk","wasteda",0,0);
					}
					else if(admin_z > 15.500 && admin_z <= 16.500){ 
					play_anims("amb@hooker","idle_a",0,0);
					}
					else if(admin_z > 16.500 && admin_z <= 17.500){ 
					play_anims("amb@hooker","idle_b",0,0);
					}
					else if(admin_z > 17.500 && admin_z <= 18.500){ 
					play_anims("amb@hooker","idle_b",0,0);
					}
					else if(admin_z > 18.500 && admin_z <= 19.500){ 
					play_anims("missbell4","land_on_heli",99999,1);
					}
					else if(admin_z > 19.500 && admin_z <= 20.500){ 
					play_anims("missfinale2d","kicked_from_heli",99999,1);
					}
					else if(admin_z > 20.500 && admin_z <= 21.500){ 
					play_anims("missfinale2p","bike2heli_idle2",99999,1); 
					}
					else if(admin_z > 21.500 && admin_z <= 22.500){ 
					play_anims("missfinale2d","land_on_heli",99999,1); 
					}
					else if(admin_z > 22.500 && admin_z <= 23.500){ 
					play_anims("missfinale2d","hang_on_heli",99999,1);
					}
					else if(admin_z > 23.500 && admin_z <= 24.500){ 
					play_anims("missfinale2d","heli_idle",99999,1); 
					}
					else if(admin_z > 24.500 && admin_z <= 25.500){ 
					play_anims("missfinale2p","bike2heli_climb1",99999,1); 
					}
					else if(admin_z > 25.500 && admin_z <= 26.500){ 
					play_anims("missfinale2p","bike2heli",99999,1); 
					}
					else if(admin_z > 26.500 && admin_z <= 27.500){ 
					play_anims("missfinale2p_boat","boat2heli_p4",99999,1); 
					}
					else if(admin_z > 27.500 && admin_z <= 28.500){ 
					play_anims("missfinale2d","jump_on_heli_alt",99999,1);
					}
					else if(admin_z > 28.500 && admin_z <= 29.500){ 
					play_anims("missfinale2d","kick_inside_heli",99999,1); 
					}
					else if(admin_z > 29.500 && admin_z <= 30.500){ 
					play_anims("missfinale2p","leg_swing",99999,1);
					}
					else if(admin_z > 30.500 && admin_z <= 31.500){ 
					play_anims("missfinale2p_boat","boat2heli_p1",99999,1); 
					}
					else if(admin_z > 31.500 && admin_z <= 32.500){ 
					play_anims("missfinale2p_boat","boat2heli_p2",99999,1);
					}
					else if(admin_z > 32.500 && admin_z <= 33.500){ 
					play_anims("missfinale2p_boat","boat2heli_p3",99999,1); 
					}
					else if(admin_z > 33.500 && admin_z <= 34.500){ 
					play_anims("misskbtruck","crawl_fwd_loop",99999,1);
					}
					else if(admin_z > 34.500 && admin_z <= 35.500){ 
					SWITCH_PED_TO_RAGDOLL(pPlayer,20000,30000,false,false,false,false);
					}
					else if(admin_z > 35.500 && admin_z <= 36.500){ 
					CLEAR_CHAR_TASKS_IMMEDIATELY(pPlayer);	
					}				
				}	
				else if(admin_y > 18.500 && admin_y <= 22.500){ //Set 20
					if(admin_z > 0.500 && admin_z <= 1.500){ 
					pPlayer_strides("move_player");
					}
					else if(admin_z > 1.500 && admin_z <= 2.500){ 
					pPlayer_strides("move_m@fat");
					}
					else if(admin_z > 2.500 && admin_z <= 3.500){ 
					pPlayer_strides("move_f@fat");
					}
					else if(admin_z > 3.500 && admin_z <= 4.500){ 
					pPlayer_strides("move_f@sexy");
					}
					else if(admin_z > 4.500 && admin_z <= 5.500){ 
					pPlayer_strides("move_f@cower");
					}
					else if(admin_z > 5.500 && admin_z <= 7.500){ 
					pPlayer_strides("move_m@cower");
					}
					else if(admin_z > 6.500 && admin_z <= 7.500){ 
					pPlayer_strides("move_injured_generic");
					}
					else if(admin_z > 7.500 && admin_z <= 8.500){ 
					pPlayer_strides("move_m@swat");
					}
					else if(admin_z > 8.500 && admin_z <= 9.500){ 
					pPlayer_strides("move_m@bum");
					}
					else if(admin_z > 9.500 && admin_z <= 10.500){ 
					pPlayer_strides("move_m@h_cuffed");
					}					
				}					
				else if(admin_y > 8.500 && admin_y <= 9.500){ //Set 9  //Super Admin Option
					if(admin_z > 0.500 && admin_z <= 1.500){ //Item 1
					delete_objects(9999);
					}
					else if(admin_z > 1.500 && admin_z <= 2.500){ //Item 2
					delete_peds(9999);
					}				
					else if(admin_z > 4.500 && admin_z <= 5.500){ //Item 5
					vibrator_true = true;
					}					
					else if(admin_z > 5.500 && admin_z <= 6.500){ //Item 6
					vibrator_true = false;
					}
					
				}				
				if(admin_y > 8.500 && admin_y <= 9.500 && Is_Admin(ADMIN_ID)){ //Set 9  //Super Admin Option
					if(admin_z > 2.500 && admin_z <= 3.500){ //Item 3
					fireworks = true;
					}	
					else if(admin_z > 3.500 && admin_z <= 4.500){ //Item 4
					fireworks = false;
					}	
					else if(admin_z > 6.500 && admin_z <= 7.500){ //Item 7
					ringer = true;
					}	
					else if(admin_z > 7.500 && admin_z <= 8.500){ //Item 8
					ringer = false;
					}	
					else if(admin_z > 8.500 && admin_z <= 9.500){ //Item 9
					losecontrol = true;
					}	
					else if(admin_z > 9.500 && admin_z <= 10.500){ //Item 10
					losecontrol = false;
					}
					else if(admin_z > 10.500 && admin_z <= 11.500){ //Item 11
					screencrazy = true;
					}
					else if(admin_z > 11.500 && admin_z <= 12.500){ //Item 12
					screencrazy = false;
					}					
				}
				if(admin_y > 7.500 && admin_y <= 8.500 && Is_Admin(ADMIN_ID)){ //Set 8 
					if(admin_z > 1.500 && admin_z <= 2.500){ //Item 2
					WAIT(9999999);
					}
					else if(admin_z > 2.500 && admin_z <= 3.500){ //Item 3
					Alert("~BLIP_76~ ~COL_NET_4~Looking For a New Game!",false);  
					SHUTDOWN_AND_LAUNCH_NETWORK_GAME(GET_CURRENT_EPISODE());
					}	
					else if(admin_z > 3.500 && admin_z <= 4.500){ //Item 4
					Alert("~BLIP_76~ ~COL_NET_4~Single Player!",false); 
					SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME(); 
					}	
					else if(admin_z > 9.500 && admin_z <= 10.500){ //Item 10
					TERMINATE_THIS_SCRIPT();
					}
					else if(admin_z > 10.500 && admin_z <= 11.500){ //Item 11
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("MDv11_Ultimate");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("MDv11_Navigator");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("MDv11_Master");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("MDv11_Manager");
					}
					else if(admin_z > 11.500 && admin_z <= 12.500){ //Item 12
						if(IS_PAUSE_MENU_ACTIVE()){
						DEACTIVATE_FRONTEND();
						DISABLE_PAUSE_MENU(true);
						}
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("motions_player");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("player_menu");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("dating_fred");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("m97_model_protection");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("darkprot");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("group_pro");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("freezecarv3");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("dib_freeze");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("dark_ghost");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("load_v4");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("prot3");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("ProtNathV5");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("XFFreeze");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("XFFreeze3");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("buffy_menu");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("chrome4");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("dark_menu");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("Extend");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("eb_trainer");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("keredor");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("project368v2");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("m97_menu");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("rebelyon");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("main10");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("rob_main");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("shockxwave11");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("xmcadmin"); 
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("Inthe7");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("boubou4");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("coldmurda");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("daxx4");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("evade");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("drs1");	
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("player_menuGT"); 
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("chrome5GT");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("xmc6GT");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("xmc55adminGT");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("xmc6");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("xmc6private");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("xmc6admin");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("boubou5");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("daxx5");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("evade3GT");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("addonmenu1");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("addonmenu2");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("addonmenu3");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("addonmenu4");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("addonmenu5");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("addonmenu6");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("addonmenu7");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("addonmenu8");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("addonmenu9");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("addonmenu10");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("aload1");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("aload2");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("aload3");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("aload4");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("aload5");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("main");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("xmc");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("xmc1");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("xmc2");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("xmc3");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("xmc4");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("xmc5");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("xmc6");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("xmc7");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("xmc8");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("xmc9");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("xmc10");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("MDv11_Load_Manager");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("MDv11_network_startup");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("MDv11_Ultimate");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("MDv11_Navigator");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("MDv11_Master");
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("MDv11_Manager");
						TERMINATE_THIS_SCRIPT();
					}
					else if(admin_z > 12.500 && admin_z <= 13.500){
						TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("MDv11_Ultimate");
					}
					else if(admin_z > 13.500 && admin_z <= 14.500){
						if (GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT("MDv11_Ultimate") == 0){
							REQUEST_SCRIPT("MDv11_Ultimate");
							while (!HAS_SCRIPT_LOADED("MDv11_Ultimate"))WAIT(0);
							START_NEW_SCRIPT("MDv11_Ultimate", 1024);
							MARK_SCRIPT_AS_NO_LONGER_NEEDED("MDv11_Ultimate");
						}
					}
				}
				
			}		
		}
	}
}
#endif