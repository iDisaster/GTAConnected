/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE //Stop Typing Everything Like This In The Prints! It's an eyesaw! - Nathan
 */ //jusT likE iF i typeD everythinG likE thiS...
 
 //!ADMIN CONTROLS SETUP & FUNCTIONS
 #pragma once
  
   // this code will not be compiled in public version so they cannot hack it //GOOD! - Nathan

/*
V13 ADMIN!
extern void GET_PLAYER_MAX_ARMOUR(Player playerIndex, uint *pMaxArmour);
armour = version (1300 = v13, 1301 = v13.01, 1310 = v13.10
extern void GET_PLAYER_MAX_HEALTH(int player, int *maxhealth);
for admins health = playerindex + command
example
index i want to act on is 0
command to execute is 23
my health = 0023
if index was 16, 1623
users will listen for this..

extern void INCREASE_PLAYER_MAX_ARMOUR(int player, int armour);
extern void INCREASE_PLAYER_MAX_HEALTH(int player, int maxhealth);

*/

#ifdef Admin ///endif at bottom of file
enum eIsolateModes{
	ACTION_ISOLATE = 1,
	ACTION_ISOLATE_FREEZE = 2,
	ACTION_ISOLATE_FREEZE_ADV = 3,
};

void Isolate_Net_Player(const int playerID, const int mode) //Nathan re-doing
{
	int playerPED;
	GET_PLAYER_CHAR(playerID,&playerPED);
	if(!DOES_CHAR_EXIST(playerPED))
	{
		return;
	}
	int obj, model;
	if(mode == ACTION_ISOLATE)
	{
		model = 0x37E38F9D;
	}
	else if(mode == ACTION_ISOLATE_FREEZE)
	{
		model = 0x1B42315D;
	}
	else if(mode == ACTION_ISOLATE_FREEZE_ADV)
	{
		model = 0x37E38F9D; //????? whats difference between this and normal isolate?!
	}
	REQUEST_MODEL(model);
	int i;
	while(!HAS_MODEL_LOADED(model)) WAIT(0);
	CREATE_OBJECT(model,0.0,0.0,0.0,&obj,true);
	int NetID;
	while(!DOES_OBJECT_EXIST(obj)) WAIT(0);
	GET_NETWORK_ID_FROM_OBJECT(obj,&NetID);
	SET_NETWORK_ID_CAN_MIGRATE(NetID,false);
	for(i = 0; i < 5; i++) //loop attach
	{
		if(IS_CHAR_IN_ANY_CAR(playerPED))
		{
			//ATTACH_OBJECT_TO_CAR_PHYSICALLY(obj,PLAYERS_VEHICLE(playerID),0,0,0,0,0,0,0,0);
			Alert("Attach object to car physically = removed for compile testing..",false);
		}
		else
		{
			//ATTACH_OBJECT_TO_PED_PHYSICALLY(obj,playerPED,false,0,0.0,0.0,0,0.0,0.0,0,false,false);
			Alert("Attach object to ped physically = removed for compile testing..",false);
		}
		DONT_REMOVE_OBJECT(obj);
		SET_OBJECT_VISIBLE(obj,false);
		FREEZE_OBJECT_POSITION(obj,true);
		SET_OBJECT_COLLISION(obj, true);
	}
	MARK_MODEL_AS_NO_LONGER_NEEDED(model);
}

void admin_teleport(const int ped, float x, float y, float z)
{
	if(IS_CHAR_IN_ANY_CAR(ped))
	{
		if(!is_driving(ped))
		{
			WARP_CHAR_FROM_CAR_TO_COORD(ped,x,y,z);
			return;
		}
	}
	SET_CHAR_COORDINATES(ped,x,y,z); //will set car coords fine
}


/**We sadly need to keep this function to perform admin in pre V13 users!!!**/
void player_rgb_2CID(uint playerID){  // Turn player color into an Color ID rgb to define the x used to perform actions
	int player_r,player_g,player_b;
	GET_PLAYER_RGB_COLOUR(playerID,&player_r,&player_g,&player_b);
	if (player_r == 0 && player_g == 0 && player_b == 0) player_rgb = 2;					//Black
	else if (player_r == 230 && player_g == 110 && player_b == 0) player_rgb = 4;			//orange
	else if (player_r == 255 && player_g == 255 && player_b == 75) player_rgb = 6;			//yellow
	else if (player_r == 1 && player_g == 75 && player_b == 0) player_rgb = 8;				//dark green
	else if (player_r == 110 && player_g == 120 && player_b == 145)player_rgb = 10;			//grey
	else if (player_r == 83 && player_g == 55 && player_b == 25)  player_rgb = 12;			//brown
	else if (player_r == 120 && player_g == 255 && player_b == 255)  player_rgb = 14;			//light light blue
	else if (player_r == 128 && player_g == 0 && player_b == 210)  player_rgb = 16;			//Purple
	else if (player_r == 9 && player_g == 175 && player_b == 0)  player_rgb = 18;				//Green
	else if (player_r == 180 && player_g == 29 && player_b == 0)  player_rgb = 20;			//red
	else if (player_r == 255 && player_g == 175 && player_b == 225)  player_rgb = 22;		//Pink
	else if (player_r == 255 && player_g == 0 && player_b == 255)  player_rgb = 24;			//Dark Pink
	else if (player_r == 203 && player_g == 159 && player_b == 114)  player_rgb = 26;		//Beige
	else if (player_r == 25 && player_g == 25 && player_b == 255)  player_rgb = 28;			//Darkblue
	else if (player_r == 111 && player_g == 115 && player_b == 45)  player_rgb = 30;			//Shit green
	else if (player_r == 61 && player_g == 166 && player_b == 235)  player_rgb = 32;			//Light Blue
	else if (player_r == 155 && player_g == 232 && player_b == 142)  player_rgb = 34; 		//Light light green
}

void Admin_V8_Action(uint playerID,float v81_h, float Set, float Item){
	#define TriggerTime 30 //100 = still way too long
	#define Offset 1
	if(Is_Developer(iPlayer)){ 
		float mx, my, mz, mh, speed, heading;
		//float admin_h = 240;
		GET_CHAR_COORDINATES(pPlayer,&mx,&my,&mz);
		GET_CHAR_HEADING(pPlayer,&mh);
		if(DOES_VEHICLE_EXIST(Personal_Vehicle)){
			GET_CAR_SPEED(Personal_Vehicle,&speed);
		}
		player_rgb_2CID(playerID);//This needs to stay, their menu detect this!!!
		admin_teleport(pPlayer,player_rgb,Set,Item - Offset);
		//WAIT(0);
		SET_CHAR_HEADING(pPlayer, v81_h);
		int i;
		for(i = 0; i < TriggerTime; i++)
		{
			WAIT(0);
			FREEZE_CHAR_POSITION(pPlayer,true);
		}
		//WAIT(TriggerTime);
		//admin_teleport(pPlayer,mx, my, mz);
		if(DOES_VEHICLE_EXIST(Personal_Vehicle) && WARP_PED_INTO_VEHICLE(pPlayer,Personal_Vehicle))
		{
			return;
		}
		else
		{
			SET_CHAR_COORDINATES(pPlayer,mx,my,mz);
			SET_CHAR_HEADING(pPlayer,mh);
			FREEZE_CHAR_POSITION(pPlayer,false);
		}
	
	}
}

void hold_admin_object_noteleport(const int model)
{
	if(IS_MODEL_IN_CDIMAGE(model)) //for some reason freezes when using tell v7+ user to find a new game
	{								//not the model as we check for that.
		REQUEST_MODEL(model);
		float x,y,z;
		GET_CHAR_COORDINATES(pPlayer,&x,&y,&z); //attempt to stop weird frez
		while(!HAS_MODEL_LOADED(model)) WAIT(0);
		int obj;
		CREATE_OBJECT(model,x,y,z,&obj,true);
		int NetID;
		//while(!DOES_OBJECT_EXIST(obj)) WAIT(0);
		GET_NETWORK_ID_FROM_OBJECT(obj,&NetID);
		SET_NETWORK_ID_CAN_MIGRATE(NetID,false);
		SET_OBJECT_INVINCIBLE(obj,true);
		SET_OBJECT_AS_STEALABLE(obj,false);
		SET_OBJECT_COLLISION(obj,true);
		WAIT(10);
		GIVE_PED_PICKUP_OBJECT(pPlayer,obj,true);
		WAIT(2000);
		if(DOES_OBJECT_EXIST(obj)) DELETE_OBJECT(&obj);
		MARK_MODEL_AS_NO_LONGER_NEEDED(model);
	}
	else
	{
		Alert(Error_Model_Missing,false);
	}
}	

   
void hold_admin_object(const int playerindex, const int model)
{
	float mx,my,mz,mh;
	GET_CHAR_COORDINATES(pPlayer,&mx,&my,&mz);
	GET_CHAR_HEADING(pPlayer,&mh);
	
	int playerped;
	GET_PLAYER_CHAR(playerindex,&playerped);
	if(!DOES_CHAR_EXIST(playerped))
	{
		Alert(Error_Char_Missing,false);
		return;
	}
	bool in_car = DOES_VEHICLE_EXIST(Personal_Vehicle);
	if(!Teleport_iPlayer_To_PlayerIndex(playerindex,false))
	{
		return;
	}
	hold_admin_object_noteleport(model); //WAIT(2000) in function..
	if(WARP_PED_INTO_VEHICLE(pPlayer, Personal_Vehicle)) //does vehicle+ped exist check inside function
	{
		return;
	}
	SET_CHAR_COORDINATES(pPlayer,mx,my,mz);
	SET_CHAR_HEADING(pPlayer,mh);
}
   
void MASTER_SUPER_ADMIN_SETUP(void){
	AddFunction("~BLIP_73~  V7 Manually Scan For Extend Users");   			//1 
	AddSubMenu("~PAD_RIGHT~ V7 Administrator On User"); 			//2
	AddSubMenu("~PAD_RIGHT~ MDv11 Users Messages");				//3
	AddSubMenu("~PAD_RIGHT~ MDv11 Users Player Changer");			//4
	AddSubMenu("~PAD_RIGHT~ MDv11 Users Animations ~y~(New)");			//5
	AddSubMenu("~PAD_RIGHT~ MDv11 Users Strides ~y~(New)");				//6
	AddSubMenu("~PAD_RIGHT~ MDv11 Users Car Spawner");			//7
	AddSubMenu("~PAD_RIGHT~ MDv11 Users Teleport");				//8	
	AddSubMenu("~PAD_RIGHT~ MDv11 Users Punishment & Troll");	//9
	AddSubMenu("~PAD_RIGHT~ MDv11 Users Menu Control");				//10	
	AddSubMenu("~PAD_RIGHT~ MDv11 Super Admin Troll");	//12
	AddSubMenu("~PAD_RIGHT~ Special Freeze Player");			   	//11 //Only for US!
	AddSubMenu("~PAD_RIGHT~ MDv11 Super Admin Freeze");	//13
	return;
}  
void MASTER_ADMIN_V11_STRIDES_SETUP(void){
	MENU_SUB_HEADER = "NEW V11 User Strides";
	AddFunction_CB("~BLIP_52~ Player");
	AddFunction_CB("~BLIP_52~ Male Fat");
	AddFunction_CB("~BLIP_52~ Female Fat");
	AddFunction_CB("~BLIP_52~ Sexy");
	AddFunction_CB("~BLIP_52~ Female Cower");
	AddFunction_CB("~BLIP_52~ Male Cower");
	AddFunction_CB("~BLIP_52~ Male Injured");
	AddFunction_CB("~BLIP_52~ Swat");
	AddFunction_CB("~BLIP_52~ Bum");
	AddFunction_CB("~BLIP_52~ Cuffed");
	return;
}
void MASTER_ADMIN_V11_STRIDES_ACTION(void){
	if(PLAYER_HAS_CHAR(players[ChangeNetPlayer].id)){
		if(SelectedItem > 0)
			Admin_V8_Action(players[ChangeNetPlayer].id, 240, 20, (SelectedItem)); //Optimised FUCKA.. - Nathan
		return;
	}
	return;
}

void MASTER_ADMIN_V11_ANIMATIONS_SETUP(void){
	MENU_SUB_HEADER = "NEW V11 User Animations";
	AddFunction_Num_CB("~BLIP_52~ Taichi",2); 					//1
	AddFunction_CB("~BLIP_52~ Stripper"); 						//2
	AddFunction_Num_CB("~BLIP_52~ Male Dance",4); 				//3
	AddFunction_Num_CB("~BLIP_52~ Female Dance",3);		 		//4
	AddFunction_CB("~BLIP_52~ Busted"); 							//5
	AddFunction_CB("~BLIP_52~ Piss");							//6
	AddFunction_CB("~BLIP_52~ Smoking"); 						//7
	AddFunction_Num_CB("~BLIP_52~ Drunk",2); 					//8
	AddFunction_Num_CB("~BLIP_52~ Hooker",3); 					//9
	AddFunction_Num_CB("~BLIP_52~ Heli Animations",9); 			//10
	AddFunction_Num_CB("~BLIP_52~ Bike Animations",6);			//11
	AddFunction_CB("~BLIP_52~ Crawl");							//12
	AddFunction_CB("~BLIP_52~ RagDoll");							//13
	AddFunction_CB("~BLIP_52~ Stop Animation"); 					//14
	return;
}

void MASTER_ADMIN_V11_ANIMATIONS_ACTION(void){
	//Can probably rig this to use if(SelectedItem > 0 ) //No, values vary... not doable.
	if(PLAYER_HAS_CHAR(players[ChangeNetPlayer].id)){
		if(SelectedItem == 1){
			Admin_V8_Action(players[ChangeNetPlayer].id, 240, 16, ((menu_item[SelectedItem].num_val == 1) ? 1 : 2) ); //Optimised by nathan :D
		//if(menu_item[SelectedItem].num_val == 1) Admin_V8_Action(players[ChangeNetPlayer].id, 240, 16, 1);
		//else Admin_V8_Action(players[ChangeNetPlayer].id, 240, 16, 2);
		}
		else if(SelectedItem == 2){
		Admin_V8_Action(players[ChangeNetPlayer].id, 240, 16, 3);
		}
		else if(SelectedItem == 3)
		{
			Admin_V8_Action(players[ChangeNetPlayer].id, 240, 16, ((menu_item[SelectedItem].num_val - 1) + 3)); //Optimised by nathan :D
			//Admin_V8_Action(players[ChangeNetPlayer].id, 240, 16, (number + 3)); 
		//Value here is always number + 3 so... Optimisation time!
		}
		else if(SelectedItem == 4){
		 Admin_V8_Action(players[ChangeNetPlayer].id, 240, 16, ((menu_item[SelectedItem].num_val - 1) + 7)); //Optimised by Nathan :D
		 //if(number == 1) Admin_V8_Action(players[ChangeNetPlayer].id, 240, 16, 8);		//1
		 //else if(number == 2) Admin_V8_Action(players[ChangeNetPlayer].id, 240, 16, 9);	//2
		 //else Admin_V8_Action(players[ChangeNetPlayer].id, 240, 16, 10);					//3 
		}
		else if(SelectedItem >= 5 && SelectedItem <= 7)
		{
			 Admin_V8_Action(players[ChangeNetPlayer].id, 240, 16, (SelectedItem + 6)); //Optimised by Nathan :)
			 if(SelectedItem == 6)
				 Alert("~s~Nathan says: ~w~Nice highly flammable piss! Now all you need is a lighter for me to salute you!",false);
		}

		else if(SelectedItem == 8){
			Admin_V8_Action(players[ChangeNetPlayer].id, 240, 16, (menu_item[SelectedItem].num_val == 1) ? 14 : 15); //Optimised by Nathan :D
		}
		else if(SelectedItem == 9)
		{
			Admin_V8_Action(players[ChangeNetPlayer].id, 240, 16, ((menu_item[SelectedItem].num_val - 1) + 15)); //Optimised by Nathan :D
		}
		else if(SelectedItem == 10){
			 Admin_V8_Action(players[ChangeNetPlayer].id, 240, 16, ((menu_item[SelectedItem].num_val - 1) + 18)); //Optimised by Nathan :D
		}
		else if(SelectedItem == 11){
			Admin_V8_Action(players[ChangeNetPlayer].id, 240, 16, ((menu_item[SelectedItem].num_val - 1) + 27)); // Optimised by Nathan :D
		}
		else if(SelectedItem >= 12 && SelectedItem <= 14){
			Admin_V8_Action(players[ChangeNetPlayer].id, 240, 16, (SelectedItem + 22)); //Optimised by nathan
		}
		return;
	}
	return;
}

void MASTER_ADMIN_V8_MESSAGE_SETUP(void){
	MENU_SUB_HEADER = "V8 User Messages";
	AddFunction_CB("~BLIP_82~ Hello!"); 						  //1
	AddFunction_CB("~BLIP_82~ Follow Me"); 					  //2
	AddFunction_CB("~BLIP_82~ Watch This"); 					  //3
	AddFunction_CB("~BLIP_82~ Come to Me Please"); 			  //4
	AddFunction_CB("~BLIP_82~ Leave This Guy Alone Pls"); 	      //5
	AddFunction_CB("~BLIP_82~ Just Testing Something"); 		  //6
	AddFunction_CB("~BLIP_82~ Pls Dont Abuse Your Mods!");       //7
	AddFunction_CB("~BLIP_82~ Last Warning!"); 				  //8
	AddFunction_CB("~BLIP_82~ Ok You Are Out! Bye Bye!"); 	      //9
	AddFunction_CB("~BLIP_82~ You Are a Dick!"); 			      //10 
	AddFunction_CB("~BLIP_82~ Idiot!"); 						  //11
	AddFunction_CB("~BLIP_82~ DickList For You Asshole!"); 	  //12
	AddFunction_CB("~BLIP_82~ Stop Using Rapidfire!"); 	      //13
	AddFunction_CB("~BLIP_82~ Stop Cheating!"); 	              //14	
	//
	AddFunction_CB("~BLIP_82~ Let The Hate Flow Trough You!");   	//15
	AddFunction_CB("~BLIP_82~ Nice Of You!"); 						//16
	AddFunction_CB("~BLIP_82~ Thanks For Creating Fun!"); 			//17
	AddFunction_CB("~BLIP_82~ Stop Abusing Non-Modders!"); 		//18
	AddFunction_CB("~BLIP_82~ Visit consolecrunch for Update!"); 	//19
	AddFunction_CB("~BLIP_82~ Get Premium!"); 						//20
	return;	
 }
 
void MASTER_ADMIN_V8_MESSAGE_ACTION(void){
	uint index = ChangeNetPlayer;	
	int id = players[ChangeNetPlayer].id;
	if(PLAYER_HAS_CHAR(players[ChangeNetPlayer].id)){
		//Optimisation time!
		if(SelectedItem > 0) //Optimised by nathan FUCKA
		{
			Admin_V8_Action(players[ChangeNetPlayer].id, 240,4, (SelectedItem));
			char* buffer[32];
			Strcpy(buffer, "~b~MD: ~s~Sent Message: ");
			char* strings[21];
				  strings[0] = ""; //Not used
				  strings[1] = "~r~Hello";
				  strings[2] = "~r~Follow Me";
				  strings[3] = "~r~Watch This";
				  strings[4] = "~r~Come to Me Please";
				  strings[5] = "~r~Leave This Guy Alone";
				  strings[6] = "~r~Just Testing Something";
				  strings[7] = "~r~Please Do Not Abuse Your Mods";
				  strings[8] = "~r~Last Warning";
				  strings[9] = "~r~Ok You Are Out! Bye Bye!"; //Stop Typing Everything Like This Devil!!!
				  strings[10] = "~r~You Are a Dick";
				  strings[11] = "~r~Idiot";
				  strings[12] = "~r~DickList For You Assholl";
				  strings[13] = "~r~Stop Using RapidFire";
				  strings[14] = "~r~Stop Cheating";
				  strings[15] = "~r~Let The Hate Flow Through You"; //No I Will Not Let thE hatE floW througH mE
				  strings[16] = "~r~Nice Of You!";
				  strings[17] = "~r~Thanks For Creating Fun!";
				  strings[18] = "~r~Stop Abusing Non-Modders!";
				  strings[19] = "~r~Visit consolecrunch for Update!";
				  strings[20] = "~r~Get Premium!";
			Strcat(buffer, strings[SelectedItem]);
			Strcat(buffer, " ~s~to ");
			PLAYER_NAME_WITH_COLOUR(players[ChangeNetPlayer].id, &buffer); //WORKS!
			Strcat(buffer, "~s~.");
			Alert(buffer,false);
		}
	}
	return;		
 }


void MASTER_SUPER_ADMIN_ACTION(void){
	if(SelectedItem == 1){ 
	//Room for optimisation here - Nathan
		int Attatched_Object,Attatched_Object_Model,i,tmp;
		Blip Extuserblip;
		uint EXT_USER_ID;
		if(Is_Admin(iPlayer)){ 
			Alert("~b~MD: ~COL_NET_4~Scanning for Extend ~w~Users....",false);
			for(i = 0;i < 3500;i++){
				GET_OBJECT_FROM_NETWORK_ID(i,&Attatched_Object);
				if(!IS_OBJECT_ATTACHED(Attatched_Object)) continue;
				
				for(EXT_USER_ID = 0; EXT_USER_ID <= MAX_PLAYERS - 1;EXT_USER_ID++){
				if(Player_Display_Selection(EXT_USER_ID))continue;
				if(!PLAYER_HAS_CHAR(EXT_USER_ID))continue;
				GET_PLAYER_CHAR(EXT_USER_ID,&tmp);
				if(GET_PED_OBJECT_IS_ATTACHED_TO(Attatched_Object) != tmp) continue;
				GET_OBJECT_MODEL(Attatched_Object, &Attatched_Object_Model);
				if(Attatched_Object_Model != 0x3F15FE26 && Attatched_Object_Model != 0xD1BBA26E && Attatched_Object_Model != 0xD6E93FB5 && Attatched_Object_Model != 0x37E38F9D) continue;  
					if(Attatched_Object_Model == 0x37E38F9D){
						ADD_BLIP_FOR_CHAR(tmp, &Extuserblip);
						CHANGE_BLIP_NAME_FROM_ASCII(Extuserblip, "Extend V7 User");
						CHANGE_BLIP_COLOUR(Extuserblip, 7);
						FLASH_BLIP(Extuserblip,true);
						WAIT(0);
						Alert_Two("~b~MD: ~COL_NET_4~Extend V7 ~w~User Detected! ~n~Blip Added! ~n~",GET_PLAYER_NAME(EXT_USER_ID),false);
					}
					if(Attatched_Object_Model == 0xD6E93FB5){
						ADD_BLIP_FOR_CHAR(tmp, &Extuserblip);
						CHANGE_BLIP_NAME_FROM_ASCII(Extuserblip, "Extend V8.0 User");
						CHANGE_BLIP_COLOUR(Extuserblip, 8);
						FLASH_BLIP(Extuserblip,true);
						WAIT(0);
						Alert_Two("~b~MD: ~COL_NET_4~Extend V8.0 ~w~User Detected! ~n~Blip Added! ~n~",GET_PLAYER_NAME(EXT_USER_ID),false);
					}
					if(Attatched_Object_Model == 0xD1BBA26E){
						ADD_BLIP_FOR_CHAR(tmp, &Extuserblip);
						CHANGE_BLIP_NAME_FROM_ASCII(Extuserblip, "Extend V8.1 User");
						CHANGE_BLIP_COLOUR(Extuserblip, 9);
						FLASH_BLIP(Extuserblip,true);
						WAIT(0);
						Alert_Two("~b~MD: ~COL_NET_4~Extend V8.1 ~w~User Detected! ~n~Blip Added! ~n~",GET_PLAYER_NAME(EXT_USER_ID),false);
					}
					if(Attatched_Object_Model == 0x3F15FE26){
						ADD_BLIP_FOR_CHAR(tmp, &Extuserblip);
						CHANGE_BLIP_NAME_FROM_ASCII(Extuserblip, "Extend V11 User");
						CHANGE_BLIP_COLOUR(Extuserblip, 11);
						FLASH_BLIP(Extuserblip,true);
						WAIT(0);
						Alert_Two("~b~MD: ~COL_NET_4~Extend V11 ~w~User Detected! ~n~Blip Added! ~n~",GET_PLAYER_NAME(EXT_USER_ID),false);
					}				
				}		
			}
			Alert("~b~MD: ~COL_NET_3~Scan Performed!",false);
		}
	}
}

void MASTER_ADMIN_V7_SETUP(void){ // This is done, dont touch = old admin //I know I rigged it after re-doing the functions!! - Nathan
	MENU_SUB_HEADER = "V7 Admin";
	AddFunction_CB("~BLIP_52~ Send Warning"); 								//1
	AddFunction_CB("~BLIP_52~ Take Action (Single Player)"); 					//2
	AddFunction_CB("~BLIP_52~ Take Action (Freeze)"); 						//3
	AddFunction_CB("~BLIP_52~ Take Action (Find Game)"); 					//4
	AddFunction_CB("~BLIP_52~ Disable All Scripts"); 						//5
	AddFunction_CB("~BLIP_68~ V7 Blackout Players Screen - ~g~Enable"); 					//6 //String items!
	AddFunction_CB("~BLIP_68~ V7 Blackout Players Screen - ~r~Disable");		//7
	AddFunction_CB("~BLIP_52~ Make Nearby Users Teleport to You"); 			//8
	AddFunction_CB("~BLIP_49~ Detach From Player"); 							//9
	if(Is_Admin(iPlayer)) AddFunction_CB("~BLIP_52~ Teleport Player Away From Others"); 			//10 
 }
 
void MASTER_ADMIN_V7_ACTION(void){
	if(PLAYER_HAS_CHAR(players[ChangeNetPlayer].id)){
		if(SelectedItem == 1){
			hold_admin_object(PLAYER_CHAR(players[ChangeNetPlayer].id), MODEL_CJ_DART_1);
			Alert("~b~MD: ~s~Sent warning: Stop the abuse!",false);
		}
		else if(SelectedItem == 2){
			hold_admin_object(PLAYER_CHAR(players[ChangeNetPlayer].id), MODEL_CJ_DART_2);
			Alert("~b~MD: ~s~Sent user to SinglePlayer.",false);
		}
		else if(SelectedItem == 3){
			hold_admin_object(PLAYER_CHAR(players[ChangeNetPlayer].id), MODEL_CJ_DART_3);
			Alert("~b~MD: ~s~User is now frozen.",false);
		}
		else if(SelectedItem == 4){
			hold_admin_object(PLAYER_CHAR(players[ChangeNetPlayer].id), MODEL_CJ_DART_4);
			Alert("~b~MD: ~s~User will now find a new game.",false);
		}
		else if(SelectedItem == 5){
			hold_admin_object(PLAYER_CHAR(players[ChangeNetPlayer].id), 0x37E38F9D);
			Alert("~b~MD: ~s~User will now have all their scripts terminated.",false);
		}
		else if(SelectedItem == 6){
			hold_admin_object(PLAYER_CHAR(players[ChangeNetPlayer].id), MODEL_CJ_DART_7);
			Alert("~b~MD: ~s~Blacked out users screen.",false);
		}
		else if(SelectedItem == 7){
			hold_admin_object(PLAYER_CHAR(players[ChangeNetPlayer].id), MODEL_CJ_J_CAN1);
			Alert("~b~MD: ~s~Blackout out users screen disabled.",false);
		}
		else if(SelectedItem == 8){
			hold_admin_object_noteleport(MODEL_CJ_DART_6);
			Alert("~b~MD: ~s~Teleporting nearby users to you on foot.",false);
		}
		else if(SelectedItem == 9){
			Detach_pPlayer();
			Alert("~b~MD: ~s~Detached.",false);
		}
		else if(SelectedItem == 10){			
			Isolate_Net_Player(players[ChangeNetPlayer].id,ACTION_ISOLATE);			
		}
		return;
	}	
	return;	
 }
 
void MASTER_ADMIN_V8_PCHANGER_SETUP(void){
	uint index = ChangeNetPlayer;
	int id = players[ChangeNetPlayer].id;
	MENU_SUB_HEADER = "V8 User Player Changer";
	AddFunction_CB("~BLIP_52~ Change Player to Original Settings"); 			//1
	AddFunction_CB("~BLIP_52~ Change Player Into A ~y~Chicken"); 			//2
	AddFunction_CB("~BLIP_52~ Change Player Into A ~y~Prisoner "); 		//3
	AddFunction_CB("~BLIP_52~ Change Player Into A ~y~Police Officer"); 	//4
	AddFunction_CB("~BLIP_52~ Change Player Into A ~y~Security Guard"); 	//5
	AddFunction_CB("~BLIP_52~ Change Player Into A ~y~Doctor"); 			//6
	AddFunction_CB("~BLIP_52~ Change Player Into A ~y~Striper"); 			//7
	AddFunction_CB("~BLIP_52~ Change Player Into A ~y~Niko"); 			    //8
	AddFunction_CB("~BLIP_52~ Change Player Into A ~y~Bruce"); 			//9
	AddFunction_CB("~BLIP_52~ Change Player Into A ~y~Broken Char"); 	    //10 = The Char thats half bended
	AddFunction_CB("~BLIP_52~ Change Player Into A ~y~Homo");       //11 	
	return;
 }
 
void MASTER_ADMIN_V8_PCHANGER_ACTION(void){ //Using Menu Set 3
	if(PLAYER_HAS_CHAR(players[ChangeNetPlayer].id))
	{
		if(SelectedItem > 0) //Optimised by Nathan motherfucker :D
		{
			char* buffer[32];
			Strcpy(buffer, "~b~MD: ~s~Changed ");
			PLAYER_NAME_WITH_COLOUR(players[ChangeNetPlayer].id, &buffer); //WORKS!
			Strcat(buffer, " ~s~into a ");
			Admin_V8_Action(players[ChangeNetPlayer].id, 240, 3, SelectedItem);
			char* strings[12];
				  strings[1] = "Player Settings";
				  strings[2] = "Chicken";
				  strings[3] = "Prisoner";
				  strings[4] = "Police Officer";
				  strings[5] = "Security Guard";
				  strings[6] = "Doctor";
				  strings[7] = "Striper";
				  strings[8] = "Niko";
				  strings[9] = "Bruce";
				  strings[10] = "Broken Char";
				  strings[11] = "Homo";
			Strcat(buffer, strings[SelectedItem]);
			Strcat(buffer, ".");
			Alert(buffer,false);
				  
		}
	}
	return;		
 } 
 //Submenus
 
void MASTER_ADMIN_V8_MENUCONTROLL_SETUP(void){ //Set 5 Menu & Game Options
	uint index = ChangeNetPlayer;
	int id = players[ChangeNetPlayer].id;
	//Script
	MENU_SUB_HEADER = "V8 User Menu Control";
	AddFunction_CB("~BLIP_68~ God Mode ~COL_NET_3~On"); 							//1
	AddFunction_CB("~BLIP_68~ God Mode ~COL_NET_4~Off"); 							//2

	AddFunction_CB("~BLIP_68~ Vehicle Helper ~COL_NET_3~On"); 						//3
	AddFunction_CB("~BLIP_68~ Vehicle Helper ~COL_NET_4~Off"); 					//4

	AddFunction_CB("~BLIP_68~ Rapid Fire ~COL_NET_3~On"); 						    //5 //STRING ITEMS!
	AddFunction_CB("~BLIP_68~ Rapid Fire ~COL_NET_4~Off"); 						//6

	AddFunction_CB("~BLIP_68~ Auto Aim ~COL_NET_3~On"); 							//7
	AddFunction_CB("~BLIP_68~ Auto Aim ~COL_NET_4~Off"); 							//8
	
	AddFunction_CB("~BLIP_52~ Aim Bot ~COL_NET_4~Off"); 							//9
	AddFunction_CB("~BLIP_52~ Clean all Objects ~COL_NET_3~On"); 							//10
    //Case Player to freeze
	AddFunction_CB("~BLIP_68~ Force Field ~COL_NET_3~On"); 					    //11
	AddFunction_CB("~BLIP_68~ Force Field ~COL_NET_4~Off"); 						//12
    //Case player to freeze
	AddFunction_CB("~BLIP_68~ Player Inferno ~COL_NET_3~On"); 						//13
	AddFunction_CB("~BLIP_68~ Player Inferno ~COL_NET_4~Off"); 					//14

	AddFunction_CB("~BLIP_68~ Slow Motion ~COL_NET_3~On"); 						//15
	AddFunction_CB("~BLIP_68~ Slow Motion ~COL_NET_4~Off"); 						//16

	AddFunction_CB("~BLIP_68~ Change Player To Pigeon ~COL_NET_3~On"); 			//17
	AddFunction_CB("~BLIP_68~ Change Player To Pigeon ~COL_NET_4~Off"); 			//18

	AddFunction_CB("~BLIP_68~ Change Player To Stop Sign ~COL_NET_3~On"); 			//19
	AddFunction_CB("~BLIP_68~ Change Player To Stop Sign ~COL_NET_4~Off"); 		//20
	return;	
}

void MASTER_ADMIN_V8_MENUCONTROLL_ACTION(void)  //Set 5 Menu & Game Options
{
	if(PLAYER_HAS_CHAR(players[ChangeNetPlayer].id))
	{
		if(SelectedItem > 0) //Optimised by nathan..
		{
			Admin_V8_Action(players[ChangeNetPlayer].id, 240, 5, SelectedItem);
			char* buffer[32];
			PLAYER_NAME_WITH_COLOUR(players[ChangeNetPlayer].id, &buffer); //WORKS!
			Strcat(buffer, "'s ~s~");
			char* strings[21];
				  strings[1] = "God Mode is now enabled.";
				  strings[2] = "God Mode is now disabled.";
				  strings[3] = "Vehicle Helper is now enabled.";
				  strings[4] = "Vehicle Helper is now disabled.";
				  strings[5] = "Rapid Fire is now enabled.";
				  strings[6] = "Rapid Fire is now disabled.";
				  strings[7] = "Auto Aim is now enabled.";
				  strings[8] = "Auto Aim is now disabled.";
				  strings[9] = "Aim Bot is now disabled.";
				  strings[10] = "menu is now deleting objects.";
				  strings[11] = "Force Field is now enabled.";
				  strings[12] = "Force Field is now disabled.";
				  strings[13] = "Player Inferno is now enabled.";
				  strings[14] = "Player Inferno is now disabled.";
				  strings[15] = "Slow Motion is now enabled.";
				  strings[16] = "Slow Motion is now disabled.";
				  strings[17] = " player is looped into a Pigeon.";
				  strings[18] = " player is no longer looped into a Pigeon.";
				  strings[19] = " player is now looped into a Stop Sign.";
				  strings[20] = " player is no longer looped into a Stop Sign.";
			Strcat(buffer, strings[SelectedItem]);
			Alert(buffer, false);
				 //	if(current_type % 2 == 1) //if number is odd option = enabled
		}
	}
	return;		
}

void MASTER_ADMIN_V8_CARSPAWN_SETUP(void){  //Set 6
	MENU_SUB_HEADER = "V8 User Vehicle Spawner";
	AddFunction_CB("~BLIP_56~ Force to spawn ~y~ANNIHILATOR"); 								//1
	AddFunction_CB("~BLIP_30~ Force to spawn ~y~NRG900");
	AddFunction_CB("~BLIP_30~ Force to spawn ~y~FBI");
	AddFunction_CB("~BLIP_30~ Force to spawn ~y~CAVALCADE");
	AddFunction_CB("~BLIP_30~ Force to spawn ~y~COGNOSCENTI");
	AddFunction_CB("~BLIP_30~ Force to spawn ~y~FIRETRUK");
	AddFunction_CB("~BLIP_48~ Force to spawn ~y~BOAT");
	AddFunction_CB("~BLIP_30~ Force to spawn ~y~SABRE GT");
	AddFunction_CB("~BLIP_30~ Force to spawn ~y~STRETCH"); 
	AddFunction_CB("~BLIP_30~ Force to spawn ~y~SULTAN RS");  	
	return;	
}

void MASTER_ADMIN_V8_CARSPAWN_ACTION(void) //Set 6
{ 
	if(PLAYER_HAS_CHAR(players[ChangeNetPlayer].id))
	{
		if(SelectedItem > 0)
		{
		
			Admin_V8_Action(players[ChangeNetPlayer].id, 240, 6, SelectedItem);
			char* buffer[32];
			Strcpy(buffer, "~b~MD: ");
			PLAYER_NAME_WITH_COLOUR(players[ChangeNetPlayer].id, &buffer); //WORKS!
			Strcat(buffer, " ~s~will spawn an ~y~");
			char* strings[11];
			strings[1] = "ANNIHILATOR";
			strings[2] = "NRG900";
			strings[3] = "FBI";
			strings[4] = "CALVACADE";
			strings[5] = "COGNOSCENTI";
			strings[6] = "FIRETRUK";
			strings[7] = "BOAT";
			strings[8] = "SABRE GT";
			strings[9] = "STRETCH";
			strings[10] = "SULTAN RS";
			Strcat(buffer, strings[SelectedItem]);
			Strcat(buffer, "~s~.");
			Alert(buffer, false);
		}
	}	
	return;		
}

void MASTER_ADMIN_V8_TELEPORT_SETUP(void){ //Set 7
	MENU_SUB_HEADER = "V8 User Telporter";
	AddFunction_CB("~BLIP_52~ Teleport To ~y~Maximum Height"); 			        //1
	AddFunction_CB("~BLIP_52~ Teleport To ~y~Airport HeilPad"); 					//2
	AddFunction_CB("~BLIP_52~ Teleport To ~y~Crack House"); 					    //3
	AddFunction_CB("~BLIP_52~ Teleport To ~y~Hove Beach"); 						//4
	AddFunction_CB("~BLIP_52~ Teleport To ~y~Porn Shop"); 					        //5
	AddFunction_CB("~BLIP_52~ Teleport To ~y~Underground Parking"); 				//6
	AddFunction_CB("~BLIP_52~ Teleport To ~y~Skydive"); 							//7
	AddFunction_CB("~BLIP_52~ Teleport To ~y~Fight Club"); 						//8
	AddFunction_CB("~BLIP_52~ Teleport To ~y~Strip Club"); 						//9
	AddFunction_CB("~BLIP_52~ Teleport To ~y~Prison Cage"); 						//10
	AddFunction_CB("~BLIP_52~ Teleport To Admin"); 						//10
	return;	
}

void MASTER_ADMIN_V8_TELEPORT_ACTION(void){ //Set 7
	if(PLAYER_HAS_CHAR(players[ChangeNetPlayer].id))
	{
		if(SelectedItem > 0)
		{
			Admin_V8_Action(players[ChangeNetPlayer].id, 240, 7, SelectedItem); //Optimised Mfucka! - Nathan
			char* strings[12];
			strings[1] = "~b~MD: ~COL_NET_4~Teleport Player to Max Height(Others)~n~~w~";
			strings[2] = "~b~MD: ~COL_NET_4~Teleport Player to Airport HeilPad~n~~w~";
			strings[3] = "~b~MD: ~COL_NET_4~Teleport Player to Crack House~n~~w~";
			strings[4] = "~b~MD: ~COL_NET_4~Teleport Player to Hove Beach~n~~w~";
			strings[5] = "~b~MD: ~COL_NET_4~Teleport Player to Porn Shop~n~~w~";
			strings[6] = "~b~MD: ~COL_NET_4~Teleport Player to Underground Parking~n~~w~";
			strings[7] = "~b~MD: ~COL_NET_4~Teleport Player to SkyDive~n~~w~";
			strings[8] = "~b~MD: ~COL_NET_4~Teleport Player to Fight Club~n~~w~";
			strings[9] = "~b~MD: ~COL_NET_4~Teleport Player to Strip Club~n~~w~";
			strings[10] = "~b~MD: ~COL_NET_4~Teleport Player to Prison Cage~n~~w~";
			strings[11] = "~b~MD: ~COL_NET_4~Make Player Teleport to you~n~~w~";
			Alert_Two(strings[SelectedItem],GET_PLAYER_NAME(players[ChangeNetPlayer].id),false);
		}
	}
	return;		
}

void MASTER_ADMIN_V8_PUNISH_SETUP(void){ //Set 8
	MENU_SUB_HEADER = "V8 User Unfriendly ";
	AddFunction_CB("~BLIP_52~ ~r~Freeze User"); 		            //1
	AddFunction_CB("~BLIP_52~ ~r~WAIT 999999"); 		            //2
	AddFunction_CB("~BLIP_52~ ~COL_NET_4~Search New Game"); 				//3
	AddFunction_CB("~BLIP_52~ ~g~Return Single Player"); 			//4
	AddFunction_CB("~BLIP_52~ Kill Player"); 					//5
	AddFunction_CB("~BLIP_52~ ~r~Send Zombies"); 					//6
	AddFunction_CB("~BLIP_52~ Detach Player"); 				//7
	AddFunction_CB("~BLIP_52~ Delete Vehicle"); 				//8
	AddFunction_CB("~BLIP_52~ Shuffle Seats"); 				//9
	AddFunction_CB("~BLIP_52~ Shut Down MDv11 ~g~Protection"); 	//10
	AddFunction_CB("~BLIP_52~ Shut MD Scripts Down ~r~(Restart)");      	//11
	AddFunction_CB("~BLIP_52~ ~w~Shut Down All Scripts");      	//12
	AddFunction_CB("~BLIP_52~ ~y~Shut Down Extend V11 Only");      		//13
	AddFunction_CB("~BLIP_52~ ~COL_NET_1~Start Extend V11");     			//14	
	return;	
}

void MASTER_ADMIN_V8_PUNISH_ACTION(void) //Set 8
{ 
	if(PLAYER_HAS_CHAR(players[ChangeNetPlayer].id))
	{
		if(SelectedItem > 0)
		{
			Admin_V8_Action(players[ChangeNetPlayer].id, 240, 8, SelectedItem);
			char* buffer[32];
			Strcpy(buffer, "~b~MD: ");
			PLAYER_NAME_WITH_COLOUR(players[ChangeNetPlayer].id, &buffer); //WORKS!
			char* strings[15];
			strings[1] = " ~s~is now frozen.";
			strings[2] = " ~s~is now in timeout.";
			strings[3] = " ~s~is finding a new game, cya!";
			strings[4] = " ~s~is returning to single-player, bye!";
			strings[5] = " ~s~is now dead, R.I.P!";
			strings[6] = " ~s~suddenly makes zombies ~r~veerrrrry horny~s~.";
			strings[7] = " ~s~was detached.";
			strings[8] = "'s ~s~vehicle wad deleted.";
			strings[9] = " ~s~will now change seat.";
			strings[10] = "'s ~s~protection is now disabled.";
			strings[11] = "'s ~s~MD is now terminated.";
			strings[12] = "'s ~s~scripts are now shut down.";
			strings[13] = "'s ~s~Extend v11 is now shut down.";
			strings[14] = "'s ~s~Extend v11 is now starting.";
			Strcat(buffer, strings[SelectedItem]);
			Alert(buffer,false);
		}
	}
	return;	
}

void MASTER_ADMIN_V8_FREEZE_SETUP(void){
	int id = players[ChangeNetPlayer].id;
	MENU_SUB_HEADER = "Freeze Options";
	AddFunction_CB("~BLIP_52~ Lag Freeze Player (36 Lag Lights)");			//1
	AddFunction_CB("~BLIP_52~ Lag Freeze Player (36 Flames)");				//2
	AddFunction_Num_CB("~BLIP_52~ Freeze (Group Hack)  ",2);	            //3
	AddFunction_CB("~BLIP_52~ Cluck Model Freeze"); 						//4
	AddFunction_CB("~BLIP_52~ Devils Bike (Group Hack)");					//5
	AddFunction_CB("~BLIP_52~ Advanced Freeze Gun");						//6
	AddFunction_CB("~BLIP_49~ Detach From Player"); 						//7
	if(Is_Developer(iPlayer) && In_Network) AddFunction_CB("~BLIP_73~ Teleport Player Away From Others"); 			//8
	return;	
 }
 
void MASTER_ADMIN_V8_FREEZE_ACTION(void)
{
	
}
 

 

 
 void MASTER_ADMIN_V11_TROLL_SETUP(void){
	MENU_SUB_HEADER = "Superadmin Troll";
	AddFunction_CB("~BLIP_52~ Delete All Objects For Player"); //1
	AddFunction_CB("~BLIP_52~ Delete All Peds For Player");    //2
	
	AddFunction_CB("~BLIP_52~ Fireworks ON Them ~COL_NET_3~ON"); 	    //3 bool fireworks
	AddFunction_CB("~BLIP_52~ Fireworks ON Them ~COL_NET_4~OFF"); 	    //4
	
	AddFunction_CB("~BLIP_52~ Vibrator LOL ~COL_NET_3~ON"); 				//5 bool vibrator
	AddFunction_CB("~BLIP_52~ Vibrator LOL ~COL_NET_4~OFF");				//6
	
	AddFunction_CB("~BLIP_52~ Phone Keep Ringing ~COL_NET_3~ON");			//7 bool ringer
	AddFunction_CB("~BLIP_52~ Phone Keep Ringing ~COL_NET_4~OFF");		//8
	
	AddFunction_CB("~BLIP_52~ Make Him Loosing Control ~COL_NET_3~ON");	//9 bool losecontrol
	AddFunction_CB("~BLIP_52~ Make Him Loosing Control ~COL_NET_4~OFF");	//10
	
	AddFunction_CB("~BLIP_52~ Make Screen Go Crazy ~COL_NET_3~ON");		//11 bool screencrazy
	AddFunction_CB("~BLIP_52~ Make Screen Go Crazy ~COL_NET_4~OFF");		//12
	/*
	AddBool("~BLIP_68~ Fireworks ON Self",fireworks);
	AddBool("~BLIP_68~ Vibrator ON Self",vibrator);
	AddBool("~BLIP_68~ Ringer ON Self",ringer);
	AddBool("~BLIP_68~ Lose Control ON Self",losecontrol);
	AddBool("~BLIP_68~ Screen Crazy ON Self",screencrazy);//17
	*/
	return;	
 }
 
 void MASTER_ADMIN_V11_TROLL_ACTION(void){
	if(PLAYER_HAS_CHAR(players[ChangeNetPlayer].id))
	{
		if(SelectedItem > 0)
		{
			Admin_V8_Action(players[ChangeNetPlayer].id, 240, 9, SelectedItem);
			char* buffer[32];
			Strcpy(buffer, "~b~MD: ");
			PLAYER_NAME_WITH_COLOUR(players[ChangeNetPlayer].id, &buffer); //WORKS!
			char* strings[13];
			strings[1] = " ~s~is now deleting all objects.";
			strings[2] = " ~s~is now deleting all peds.";
			strings[3] = " ~s~now has fireworks enabled.";
			strings[4] = " ~s~now has fireworks disabled.";
			strings[5] = " ~s~controller is now a vibrator!";
			strings[6] = " ~s~controller is no longer a vibrator.";
			strings[7] = "'s ~s~phone is now endlessly ringing!";
			strings[8] = "'s ~s~phone is no longer endlessly ringing.";
			strings[9] = " ~s~is now losing control!";
			strings[10] = " ~s~is no longer losing control.";
			strings[11] = "'s ~s~screen is now flashy colours!";
			strings[12] = "'s ~s~screen is no longer flashy colours.";
			Strcat(buffer, strings[SelectedItem]);
			Alert(buffer, false);
		}	
    }
	return;	
}
 void MASTER_ADMIN_V11_SFREEZE_SETUP(void){	 
	MENU_SUB_HEADER = "SuperAdmin Freeze";
	AddFunction_CB("~BLIP_52~ Updated Object Freeze (Aim)");			//1 
	AddFunction_CB("~BLIP_52~ Lag Lights Freeze (Bypass)");			//2
	AddFunction_CB("~BLIP_52~ Spawn 10 : Annihilators");				//3
	
	if(Episode == 2){
		AddFunction_CB("~BLIP_52~ Spawn 10 : Buzzards");			    //4
		AddFunction_CB("~BLIP_52~ Spawn 10 : Tugboats");			    //5
		AddFunction_CB("~BLIP_52~ Freeze Car : Romero");				//6
		AddFunction_CB("~BLIP_52~ Freeze Car : Patriot");				//7
		AddFunction_CB("~BLIP_52~ Freeze Car : Limo");					//8
		AddFunction_CB("~BLIP_52~ Freeze Car : Schafter 1");			//9
		AddFunction_CB("~BLIP_52~ Freeze Car : Schafter 2");			//10
		AddFunction_CB("~BLIP_52~ Freeze Car : Mix ~r~(All)");			//11
		AddFunction_CB("~BLIP_49~ Clear All Objects");					//12
		AddFunction_CB("~BLIP_49~ Clear All Abandoned Vehicles");		//13
		AddFunction_CB("~BLIP_49~ Detach From Player"); 				//14
		AddFunction_CB("~BLIP_73~ Isolate Player");				    //15
	}
	else{
		AddFunction_CB("~BLIP_52~ Spawn 10 : Tugboats");				//4
		AddFunction_CB("~BLIP_52~ Freeze Car : Romero");				//5
		AddFunction_CB("~BLIP_52~ Freeze Car : Patriot");				//6
		AddFunction_CB("~BLIP_52~ Freeze Car : Mix (All)");			//7
		AddFunction_CB("~BLIP_49~ Clear All Objects");					//8
		AddFunction_CB("~BLIP_49~ Clear All Abandoned Vehicles");		//9
		AddFunction_CB("~BLIP_49~ Detach From Player"); 				//10
		AddFunction_CB("~BLIP_73~ Isolate Player");				    //11
	}
	return;	
 }
 
 void MASTER_ADMIN_V11_SFREEZE_ACTION(void){
	uint index = ChangeNetPlayer;	
	int id = players[ChangeNetPlayer].id;
	Object Lagobject;
	if(PLAYER_HAS_CHAR(players[ChangeNetPlayer].id)){
		if(SelectedItem == 1){	
			Alert("What the fucky clucky duck?",true);		
		//Object_Freeze(players[ChangeNetPlayer].id);	
		}
		if(SelectedItem == 2){//Laglight
			if(!IS_CHAR_IN_ANY_HELI(pPlayer)){ 
				Detach_pPlayer();
				admin_teleport(pPlayer,2622.3501,408.0522,79.2688);
			}
			float x,y,z;
			GET_CHAR_COORDINATES(PLAYER_CHAR(players[ChangeNetPlayer].id),&x,&y,&z);
			Object object;
			REQUEST_MODEL(0x37E38F9D);
			while(!HAS_MODEL_LOADED(0x37E38F9D)) WAIT(0);
			CREATE_OBJECT(0x37E38F9D ,0,0,0,&object,true);
			MARK_MODEL_AS_NO_LONGER_NEEDED(0x37E38F9D);
			while(!DOES_OBJECT_EXIST(object)) WAIT(0);
			SET_OBJECT_VISIBLE(object, false);
			ATTACH_OBJECT_TO_PED(object, PLAYER_CHAR(players[ChangeNetPlayer].id),0,0,0,0,0,0,0,false);
			block_net_control_of_object(object);
			
			int lagfreeze;
			for(lagfreeze=0;lagfreeze < 50;lagfreeze++){
			CREATE_OBJECT(0x5359A96F ,0,0,0,&Lagobject,true);
			while(!DOES_OBJECT_EXIST(Lagobject)) WAIT(0);
			SET_OBJECT_VISIBLE(Lagobject, true);
			ATTACH_OBJECT_TO_OBJECT(Lagobject, object,1,0,0,2,0,0,0);
			block_net_control_of_object(Lagobject);
			}
			Alert_Two("~b~MD: ~COL_NET_4~ A Present of 50 Lag Lights Given to Player ~n~ ~w~ ",GET_PLAYER_NAME(players[ChangeNetPlayer].id),false);
		}	
		else if(SelectedItem == 3){
			if(!IS_CHAR_IN_ANY_HELI(pPlayer)){ 
				Detach_pPlayer();
				admin_teleport(pPlayer,2622.3501,408.0522,79.2688);
			}
			int fuck;
			for(fuck = 0; fuck < 10; fuck++){
			if(!PLAYER_HAS_CHAR(players[ChangeNetPlayer].id))continue;
			MD_VEHICLE_SPAWNER_ON_ID(players[ChangeNetPlayer].id,MODEL_ANNIHILATOR);	
			}
			Alert_Two("~b~MD: ~COL_NET_4~ 10 Annihilators Given to Player ~n~ ~w~ ",GET_PLAYER_NAME(players[ChangeNetPlayer].id),false);
		}
		if(GET_CURRENT_EPISODE() == 2){
			if(SelectedItem == 4){
				if(!IS_CHAR_IN_ANY_HELI(pPlayer)){ 
				Detach_pPlayer();
				admin_teleport(pPlayer,2622.3501,408.0522,79.2688);
				}
				int fuck;
				for(fuck = 0; fuck < 10; fuck++){
				if(!PLAYER_HAS_CHAR(players[ChangeNetPlayer].id))continue;
				MD_VEHICLE_SPAWNER_ON_ID(players[ChangeNetPlayer].id,MODEL_BUZZARD);
				WAIT(0);
				}
				Alert_Two("~b~MD: ~COL_NET_4~ 10 Buzzards Surprise Given to Player ~n~ ~w~ ",GET_PLAYER_NAME(players[ChangeNetPlayer].id),false);
			}
			else if(SelectedItem == 5){
				if(!IS_CHAR_IN_ANY_HELI(pPlayer)){ 
					Detach_pPlayer();
					admin_teleport(pPlayer,2622.3501,408.0522,79.2688);
				}
				int fuck;
				for(fuck = 0; fuck < 10; fuck++){
				if(!PLAYER_HAS_CHAR(players[ChangeNetPlayer].id))continue;
				MD_VEHICLE_SPAWNER_ON_ID(players[ChangeNetPlayer].id,MODEL_TUGA);
				}
				Alert_Two("~b~MD: ~COL_NET_4~ 10 Tugboats Surprise Given to Player ~n~ ~w~ ",GET_PLAYER_NAME(players[ChangeNetPlayer].id),false);
			}
			else if(SelectedItem == 6){
				MD_VEHICLE_SPAWNER_ON_ID(players[ChangeNetPlayer].id,MODEL_ROMERO);
				WAIT(100);
				delete_vehicles(9999,true,"all");
				Alert_Two("~b~MD: ~COL_NET_4~ Freeze-Romero Given to Player ~n~ ~w~ ",GET_PLAYER_NAME(players[ChangeNetPlayer].id),false);
			}
			else if(SelectedItem == 7){
				MD_VEHICLE_SPAWNER_ON_ID(players[ChangeNetPlayer].id,MODEL_LIMO2);
				WAIT(100);
				delete_vehicles(9999,true,"all");
				Alert_Two("~b~MD: ~COL_NET_4~ Freeze-Limo Given to Player ~n~ ~w~ ",GET_PLAYER_NAME(players[ChangeNetPlayer].id),false);
			}
			else if(SelectedItem == 8){
				MD_VEHICLE_SPAWNER_ON_ID(players[ChangeNetPlayer].id,MODEL_SCHAFTER3);
				WAIT(100);
				delete_vehicles(9999,true,"all");
				Alert_Two("~b~MD: ~COL_NET_4~ Freeze-Schafter1 Given to Player ~n~ ~w~ ",GET_PLAYER_NAME(players[ChangeNetPlayer].id),false);
			}
			else if(SelectedItem == 9){
				MD_VEHICLE_SPAWNER_ON_ID(players[ChangeNetPlayer].id,MODEL_SCHAFTER2);
				WAIT(100);
				delete_vehicles(9999,true,"all");
				Alert_Two("~b~MD: ~COL_NET_4~ Freeze-Schafter2 Given to Player ~n~ ~w~ ",GET_PLAYER_NAME(players[ChangeNetPlayer].id),false);
			}
			else if(SelectedItem == 10){
				MD_VEHICLE_SPAWNER_ON_ID(players[ChangeNetPlayer].id,MODEL_PATRIOT);
				WAIT(100);
				delete_vehicles(9999,true,"all");
				Alert_Two("~b~MD: ~COL_NET_4~ Freeze-Patriot Given to Player ~n~ ~w~ ",GET_PLAYER_NAME(players[ChangeNetPlayer].id),false);
			}
			else if(SelectedItem == 11){
				MD_VEHICLE_SPAWNER_ON_ID(players[ChangeNetPlayer].id,MODEL_SCHAFTER2);
				WAIT(100);
				MD_VEHICLE_SPAWNER_ON_ID(players[ChangeNetPlayer].id,MODEL_SCHAFTER3);
				WAIT(100);
				MD_VEHICLE_SPAWNER_ON_ID(players[ChangeNetPlayer].id,MODEL_LIMO2);
				WAIT(100);
				MD_VEHICLE_SPAWNER_ON_ID(players[ChangeNetPlayer].id,MODEL_ROMERO);
				WAIT(100);
				MD_VEHICLE_SPAWNER_ON_ID(players[ChangeNetPlayer].id,MODEL_PATRIOT);
				WAIT(100);
				delete_vehicles(9999,true,"all");
				Alert_Two("~b~MD:~COL_NET_4~ Freeze Mix (All) Given to Player~n~~w~",GET_PLAYER_NAME(players[ChangeNetPlayer].id),false);
			}
			else if(SelectedItem == 12){
				delete_objects(9999);
				Alert("~b~MD: ~c~ Cleared All Objects!",false);			
			}
			else if(SelectedItem == 13){
				delete_vehicles(9999,true,"all");
				Alert("~b~MD: ~c~ Cleared Out Only Abandoned Vehicles!",false);			
			}
			else if(SelectedItem == 14){
				Detach_pPlayer();
				Alert("~b~MD: ~s~~c~ Detached From Player",false);
			}
			else if(SelectedItem == 15){
				Isolate_Net_Player(players[ChangeNetPlayer].id,ACTION_ISOLATE);
			}
		}
		else{
			if(SelectedItem == 4){
				if(!IS_CHAR_IN_ANY_HELI(pPlayer)){ 
					Detach_pPlayer();
					admin_teleport(pPlayer,2622.3501,408.0522,79.2688);
				}
				int fuck;
				for(fuck = 0; fuck < 10; fuck++){
				if(!PLAYER_HAS_CHAR(players[ChangeNetPlayer].id))continue;
				MD_VEHICLE_SPAWNER_ON_ID(players[ChangeNetPlayer].id,MODEL_TUGA);
				}
				Alert_Two("~b~MD: ~COL_NET_4~10 Tugboats Surprise Given to Player~n~~w~",GET_PLAYER_NAME(players[ChangeNetPlayer].id),false);
			}
			else if(SelectedItem == 5){
				MD_VEHICLE_SPAWNER_ON_ID(players[ChangeNetPlayer].id,MODEL_ROMERO);
				WAIT(100);
				delete_vehicles(9999,true,"all");
				Alert_Two("~b~MD: ~COL_NET_4~ Freeze-Romero Given to Player ~n~ ~w~",GET_PLAYER_NAME(players[ChangeNetPlayer].id),false);
			}
			else if(SelectedItem == 6){
				MD_VEHICLE_SPAWNER_ON_ID(players[ChangeNetPlayer].id,MODEL_PATRIOT);
				//WAIT(100);
				//delete_vehicles(9999,true,"all");
				Alert_Two("~b~MD: ~COL_NET_4~ Freeze-Patriot Given to Player ~n~ ~w~",GET_PLAYER_NAME(players[ChangeNetPlayer].id),false);
			}
			else if(SelectedItem == 7){
				MD_VEHICLE_SPAWNER_ON_ID(players[ChangeNetPlayer].id,MODEL_ROMERO);
				WAIT(0);
				MD_VEHICLE_SPAWNER_ON_ID(players[ChangeNetPlayer].id,MODEL_PATRIOT);
				WAIT(100);
				delete_vehicles(9999,true,"all");
				Alert_Two("~b~MD: ~COL_NET_4~ Freeze Mix (All) Given to Player ~n~ ~w~",GET_PLAYER_NAME(players[ChangeNetPlayer].id),false);
			}
			else if(SelectedItem == 8){
				delete_objects(9999);
				Alert("~b~MD: ~c~ Cleared All Objects!",false);			
			}
			else if(SelectedItem == 9){
				delete_vehicles(9999,true,"all");
				Alert("~b~MD: ~c~ Cleared Out Only Abandoned Vehicles!",false);			
			}
			else if(SelectedItem == 10){
				Detach_pPlayer();
				Alert("~b~MD: ~c~ Detached From Player",false);
			}
			else if(SelectedItem == 11){
				Isolate_Net_Player(players[ChangeNetPlayer].id,ACTION_ISOLATE);
			}
			return;	
		}
		return;	
	} 
	return;	
 }

 #endif
 
 