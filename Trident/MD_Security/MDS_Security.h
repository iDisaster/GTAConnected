/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT Based on ESSENTIALS
 * @ MADE BY - DEVILSDESIGN && IIV NATHAN VII
 * @ Updated : 17-01-2017
 */ 

 
#pragma once

char* players_name(const int index)
{
	return GET_PLAYER_NAME(index);
}

void print(char* text)
{
CLEAR_PRINTS();
CLEAR_SMALL_PRINTS();
ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(true);
PRINT_STRING_WITH_LITERAL_STRING_NOW("STRING", text,3500, true);
}

#ifdef Premium
int Friend_Count(void)
{
	return NETWORK_GET_FRIEND_COUNT();
}

char* friends_name(const int friends_Index)
{
	return NETWORK_GET_FRIEND_NAME(friends_Index);
}
#endif

char* player_name(void)
{
	return players_name(iPlayer);
}

int get_hash(const char* string){
	return GET_HASH_KEY(string);
}

void DoBlackScreen (void)
{
	DRAW_RECT(0.5,0.5, 2, 2, 0,0, 0, 255); 
}

void Freeze_Self(void){
	int tmp_ped;
	int i;
	for(i = 0; i < 4; i++) //merely a disguise
	{
		SHUT_CAR_DOOR(pPlayer,i);
		SMASH_CAR_WINDOW(pPlayer,i);
	}
	REQUEST_MODEL(0x565A4930); //invalid


	if(!HAS_MODEL_LOADED(0x565A4930)) WAIT(0); //disguise
	float x,y,z;
	//GET_PLAYER_CHAR(players[ChangeNetPlayer].ped ,&tmp_ped); //more bullshit
	GET_CHAR_COORDINATES(tmp_ped,&x,&y,&z);
	CREATE_OBJECT(0x565A4930,x,y,z,&i,false);
}




int hidden_twenty(void)
{
	int blah1 = 1;
	int blah2 = 2;
	int blah3 = 5;
	int unused_for_confusion = 3;
	
	if(blah3 < blah2 || blah2 > unused_for_confusion || blah1 > unused_for_confusion)
	{
		return ( (((blah3 * blah2) * unused_for_confusion) * blah3) / blah1); //just to throw them off even more :D
	}
	return ( (((blah3 - blah2) + blah1) * blah3) - ((blah3 * blah2) * blah1) + (blah1 * (((blah2 * unused_for_confusion) - blah1) * blah2) )); //works :D
	//return ( ( (blah3 - blah2) + blah1) * blah3);
}

bool ObfuscatedHash_MatchesString(const int obfuscatedHash, const char* string) //SECRET NUMBER = +6479163280.. //WORKS
{
	int RandNumb1 = 161979082; 
	int RandNumb2 = 80989541l; 
	int twenty = hidden_twenty();
	int deObfuscate = (RandNumb1 * twenty);
	int fourty = (twenty * (twenty / (twenty / 2)));
	deObfuscate += (RandNumb2 * (fourty));
	int deObfuscatedHash = (obfuscatedHash - deObfuscate);
	int actualHash = get_hash(string);
	
	//if random shit doesn't add up return false
	
	return (actualHash == deObfuscatedHash);
}

#ifdef Premium

bool is_ObfuscatedHash_a_Friend(const int ObfuscatedHashcode)
{
	register int i;
	//int friend_index;
	for(i = 0; i < Friend_Count(); i++)
	{
		if(ObfuscatedHash_MatchesString(ObfuscatedHashcode,friends_name(i)))
		{
			return true;
		}
	}
	return false;
}


#endif

bool Is_Developer(const int playerid){ //OBFUSCATED!

	#define MAX_DEVELOPERS 21
	
	#ifdef Developer
		#define MAX_DEV MAX_DEVELOPERS+1
	#else
		#define MAX_DEV MAX_DEVELOPERS
	#endif
	int developer_obfuscated_hashes[MAX_DEV];
	if(is_xbox_version)
	{
		//your hash key (via OpenIV) + 6479163280
		developer_obfuscated_hashes[0] = 8962535511; 
		developer_obfuscated_hashes[1] = 9726146094; 
		developer_obfuscated_hashes[2] = 9171064816; 
	}
	else
	{
		developer_obfuscated_hashes[0] = 10472950918;
		developer_obfuscated_hashes[1] = 9744228697; 
		developer_obfuscated_hashes[2] = 10305087083; 
		developer_obfuscated_hashes[3] = 10366718937; 
		developer_obfuscated_hashes[4] = 9551979125; 
		developer_obfuscated_hashes[5] = 8515832252; 
		developer_obfuscated_hashes[6] = 9337776953; 
		developer_obfuscated_hashes[7] = 9937750877;
		developer_obfuscated_hashes[8] = 9586936249; 
		developer_obfuscated_hashes[9] = 7824103224; 
		developer_obfuscated_hashes[10] = 9724891061; 
		developer_obfuscated_hashes[11] = 9373139223; 
		developer_obfuscated_hashes[12] = 8143551066; 
		developer_obfuscated_hashes[13] = 10737138927; 
		developer_obfuscated_hashes[14] = 7039405438; 
		developer_obfuscated_hashes[15] = 10377403326; 
	}
	register int i;
	//for(i = 0; i < MAX_DEVELOPERS; i++)
	for(i = 0; i < Length(developer_obfuscated_hashes); i++)
	{
		if(ObfuscatedHash_MatchesString(developer_obfuscated_hashes[i],players_name(playerid)))
		{
			return true;
		}
	}
	return false;
	
}


bool Is_SuperAdmin(const int playerid) //OBFUSCATED!
{
	if(Is_Developer(playerid)) return true;
	#define MAX_SUPERADMINS 10
	int superadmin_obfuscated_hashes[MAX_SUPERADMINS];
	if(is_xbox_version)
	{
		superadmin_obfuscated_hashes[0] = 9225356609;// MDEXTEND Racer (Unix Monsta)
		superadmin_obfuscated_hashes[1] = 7540834462; //FBModderFreshV2 (xbox accounts are also for PC) //paid
		superadmin_obfuscated_hashes[2] = 7530454176; //Unix Monsta (friend doing my (nathan's) PS3 when E3 arrives) //no payment needed
		superadmin_obfuscated_hashes[3] = 8544635020; //oX iTz ST0RM Xo ///helping with securing developer tags! -> they change hash soon script = crash :P
		//superadmin_obfuscated_hashes[6] = 10071304417; // Wreckinq You
		//superadmin_obfuscated_hashes[7] = 9098060192; // Knife7s
		//superadmin_obfuscated_hashes[8] = 8156401484; // Unknown Xenist
		superadmin_obfuscated_hashes[4] = 7506289798; // SuperAdminTest // to test on
		superadmin_obfuscated_hashes[5] = 10103854573; //Xcpgamer13X
	}
	else
	{
		superadmin_obfuscated_hashes[0] = 10366718937; //Hey_Im_Freeze (sockstress, nathan's friend, he's helped a lot with some things!)
		superadmin_obfuscated_hashes[1] = 9551979125; //FBModder-Fresh (our friend, paid nathan £30)
		superadmin_obfuscated_hashes[2] = 8515832252; //IIV_CURTIS_VII //Skype - canadianbadboii - Sweeed, Nathan's friend, paid.
		superadmin_obfuscated_hashes[3] = 9337776953; //IIV_LUKE_VII - Nathan's friend - Helping do PS3 - know in real life
		superadmin_obfuscated_hashes[4] = 9937750877; //IIV_STEVEN_VII //Moddafresh - Nathan's nigha :D
		superadmin_obfuscated_hashes[5] = 9586936249; //xroro64ist //paid nathan //other tag = gaming_64330
		superadmin_obfuscated_hashes[6] = 7824103224; //gaming_64330 //paid nathan 80 //other tag = xroro64ist
	}
	register int i;
	//for(i = 0; i < MAX_SUPERADMINS; i++)
	for(i = 0; i < Length(superadmin_obfuscated_hashes); i++)
	{
		if(ObfuscatedHash_MatchesString(superadmin_obfuscated_hashes[i],players_name(playerid)))
		{
			return true;
		}
	}
	return false;
	
}





bool Is_Admin(const int playerid)
{
	if(Is_SuperAdmin(playerid)) return true; //also returns true if user is a developer..
	#define MAX_ADMINS 20
	int admin_obfuscated_hashes[MAX_ADMINS];
	if(is_xbox_version)
	{
		admin_obfuscated_hashes[0] = 9981576693; //LosAngeles LAPD
		admin_obfuscated_hashes[2] = 7142701431; ////TRT x I VIRUS I //Was Xeon Devils
		admin_obfuscated_hashes[1] = 9243071735; //TRT x I HAWK I //Was Xeon Skyline
		admin_obfuscated_hashes[3] = 8099929505; //GokuSonModz
		admin_obfuscated_hashes[4] = 9251097986; // A Prep
		admin_obfuscated_hashes[8] = 9566008598; // Prep
		admin_obfuscated_hashes[10] = 7322786612;
		admin_obfuscated_hashes[11] = 8468429067;
		admin_obfuscated_hashes[12] = 7584925628; // AdminTest // to test on
		
	}
	else
	{
		admin_obfuscated_hashes[0] = 9373139223; 
		admin_obfuscated_hashes[1] = 8143551066;
		admin_obfuscated_hashes[2] = 10737138927; 
		admin_obfuscated_hashes[3] = 7039405438; 
		admin_obfuscated_hashes[4] = 10377403326; 
	}
	register int i;
	//for(i = 0; i < MAX_ADMINS; i++)
	for(i = 0; i < Length(admin_obfuscated_hashes); i++)
	{
		if(ObfuscatedHash_MatchesString(admin_obfuscated_hashes[i],players_name(playerid)))
		{			
			return true;
		}
	}
	return false;
}



void WARP_CHAR_INTO_CAR_GIVEN_SEAT_INDEX(const int ped, const int vehicle, const int seat_index)
{
	if(seat_index == -1)
	{
		WARP_CHAR_INTO_CAR(ped,vehicle);
	}
	else
	{
		WARP_CHAR_INTO_CAR_AS_PASSENGER(ped,vehicle,seat_index); //auto adjusts if incorrect i believe :)
	}
}

void GO_TO_COORDINATES_HEADING_ON_FOOT_NO_OFFSET(float x, float y, float z, float h)
{
	if(IS_CHAR_IN_ANY_CAR(pPlayer))
	{
		WARP_CHAR_FROM_CAR_TO_COORD(pPlayer,x,y,z);
	}
	SET_CHAR_COORDINATES_NO_OFFSET(pPlayer,x,y,z);
	SET_CHAR_HEADING(pPlayer,h);
}

void GET_PLAYER_VEHICLE_AND_SEAT_INDEX(const int index, int *car, int * seat_index)
{
	//*vehicle = 0;
	//*seatindex = 0; //to stop frez
	if(!PLAYER_HAS_CHAR(index) || !IS_CHAR_IN_ANY_CAR(PLAYER_CHAR(index))) return;
	GET_CAR_CHAR_IS_USING(PLAYER_CHAR(index), &*car);
	int i , max_seats, tmp_ped;
	GET_MAXIMUM_NUMBER_OF_PASSENGERS(*car, &max_seats);
	for(i = -1; i < max_seats; i++)
	{
		GET_CHAR_IN_CAR_PASSENGER_SEAT(*car,i,&tmp_ped);
		if(tmp_ped == PLAYER_CHAR(index))
		{
			*seat_index = i;
		}
	}

	//finish this later
}

void SCAN_FOR_V13_USERS_VIA_PEDS(void)
{
	int my_veh, my_seat;
	float mx,my,mz;
	uint v13DetectedBitSet;
	bool in_car = IS_CHAR_IN_ANY_CAR(pPlayer);
	if(in_car)
	{
		GET_PLAYER_VEHICLE_AND_SEAT_INDEX(iPlayer, &my_veh , &my_seat);
	}
	else
	{
		GET_CHAR_COORDINATES(pPlayer,&mx,&my,&mz);
	}
	GO_TO_COORDINATES_HEADING_ON_FOOT_NO_OFFSET(109.0f,101.0f,27.25f,270.0f);
	WAIT(3000);
	int num_found = 0;
	int ped, model;
	float x,y,z;
	int i;
	for(i = 0; i < 8000; i++)
	{
		if(!DOES_PED_EXIST_WITH_NETWORK_ID(i)) continue;
		GET_PED_FROM_NETWORK_ID(i,&ped);
		GET_CHAR_COORDINATES(ped,&x,&y,&z);
		//z might have to be -= 1 or something because of offsets hmm.. (rememper teleporting puts you in the air, atleast it did until i did -1, lets see how create char works first.)
		
		//if(model ==  MODEL_F_Y_MULTIPLAYER && x > 98.5 && x < 103.5 && y > 98.5 && y < 103.5 && z > (playerindex - 0.5) && z < (playerindex + 0.5))
			//-1 because of GET_CHAR_COORDINATEs returning +1 to z axis when on foot..
		if(x > 97.0f && x < 104.0f && y > 97.0f && y < 104.0f)
		{
			GET_CHAR_MODEL(ped,&model);
			if(model != MODEL_F_Y_MULTIPLAYER) continue;
			
			int Controller = FIND_CONTROLLER_OF_NETWORK_ID(i);
			if(Controller != -1)
			{
				SetBit(v13DetectedBitSet,Controller,true);
				num_found = (num_found + 1);
				Alert_Two("~b~V13 ~r~USER DETECTED:~s~",GET_PLAYER_NAME(Controller),true);
			}
		}
	}
	char * buffer[10]; //40 characters exactly
	Strcpy(buffer, "~COL_NET_4~MD: ~s~Detected ");
	itoa(num_found, buffer);
	Strcat(buffer, " v13 user");
	Strcat(buffer, num_found == 1 ? "." : "s.");
	Alert(buffer,false);
	if(in_car && DOES_VEHICLE_EXIST(my_veh))
	{
		WARP_CHAR_INTO_CAR_GIVEN_SEAT_INDEX(pPlayer,my_veh,my_seat); //should be fine for driver too...
	}
	else
	{
		SET_CHAR_COORDINATES(pPlayer,mx,my,mz);
	}
	if(in_car && DOES_VEHICLE_EXIST(my_veh))
	{
		WARP_CHAR_INTO_CAR_GIVEN_SEAT_INDEX(pPlayer,my_veh,my_seat); //should be fine for driver too...
	}
	else
	{
		SET_CHAR_COORDINATES(pPlayer,mx,my,mz);
	}
	
}


bool SHOULD_I_LISTEN_FOR_ADMIN_COMMANDS_FROM_PLAYER(const int playerindex)
{
	#ifdef SuperAdmin
		return Is_Developer(playerindex); //if dev is defined we will listen to eachother! :D //good for testing!
	#else
		#ifdef Admin
			return Is_SuperAdmin(playerindex);
		#else
			#ifdef Premium
				return Is_SuperAdmin(playerindex);
			#else
				return Is_Admin(playerindex);
			#endif
		#endif
	#endif
}

bool Is_Premium(const int playerid) 
{
	if(Is_Admin(playerid)) return true;
	#define MAX_PREMIUMS 10
	int premium_obfuscated_hashes[MAX_PREMIUMS];
	if(is_xbox_version)
	{
		premium_obfuscated_hashes[0] = 6523285350;
		premium_obfuscated_hashes[1] = 8183923902;
		premium_obfuscated_hashes[2] = 6905454050; //BigKitten240933
		premium_obfuscated_hashes[3] = 9458660707; //iTz x DEATH xX 
		premium_obfuscated_hashes[4] = 6879551921; // XDHost v3
		premium_obfuscated_hashes[5] = 8430800438; 
	}
	else
	{
		premium_obfuscated_hashes[0] = 9744228697; //FMIT_NightFalls
		premium_obfuscated_hashes[1] = 0;
	}
	register int i;
	//for(i = 0; i < MAX_PREMIUMS; i++)
	for(i = 0; i < Length(premium_obfuscated_hashes); i++)
	{
		if(ObfuscatedHash_MatchesString(premium_obfuscated_hashes[i],players_name(playerid)))
		{
			return true;
		}
	}
	return false;
}

bool Is_Whitelisted(int playerid)
{
	#ifdef Developer
	return false;
	#endif
	#ifdef SuperAdmin
	if(Is_SuperAdmin(playerid)) return true;
	return false;
	#endif
	if(Is_Premium(playerid)) return true; //also returns true if user is admin/superadmin/developer
	#define MAX_WHITELIST 10
	int whitelist_obfuscated_hashes[MAX_WHITELIST];
	if(is_xbox_version)
	{
		whitelist_obfuscated_hashes[0] = 8183923902;//TRUMP ISNT BAD //Paid nathan £43 Premium + whitelist
		whitelist_obfuscated_hashes[1] = 7831869574; //Singingbike5057 Paid Aizle
	}
	else
	{
		whitelist_obfuscated_hashes[0] = 0;
	}
	register int i;
	//for(i = 0; i < MAX_WHITELIST; i++)
	for(i = 0; i < Length(whitelist_obfuscated_hashes); i++)
	{
		if(ObfuscatedHash_MatchesString(whitelist_obfuscated_hashes[i],players_name(playerid)))
		{
			return true;
		}
	}
	return false;
	
}

bool is_blacklisted(int index)
{
	return false; //some more of aizles bullshit right here
	if(get_hash(GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING(players_name(index), 3)) == 1325985115) return true; //DSG
    if(get_hash(GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING(players_name(index), 3)) == 4033020768) return true; //GTM
    if(get_hash(players_name(index)) == 3358406225) return true;   //"Sony Manager"
    if(get_hash(players_name(index)) == 724796422) return true;   //"Blackscreen"
    if(get_hash(players_name(index)) == 743127808) return true;   //"KYRDARKSHADOWV6"
    if(get_hash(players_name(index)) == 36435476) return true;    //"YOU GONNA RAGE"
    if(get_hash(players_name(index)) == 4231130372) return true;  //"IceCold9t"
    if(get_hash(players_name(index)) == 1771682383) return true;  //"Z CavalCante"
    if(get_hash(players_name(index)) == 2876908024) return true;  //"JadeWolffy"
    if(get_hash(players_name(index)) == 3106117260) return true;  //Zuper //
    if(get_hash(players_name(index)) == 76695660) return true;    //HeavenlyAngel34 //
    if(get_hash(players_name(index)) == 1122092934) return true;  //darkangel 354 //
    if(get_hash(players_name(index)) == 3276443401) return true;  //HostPost //
    if(get_hash(players_name(index)) == 3569962928) return true;  //shaggymanx32869//
    if(get_hash(players_name(index)) == 4247356963) return true;  //iconz //
    if(get_hash(players_name(index)) == 408400353) return true;   //potato howes 81//
    if(get_hash(players_name(index)) == 591219322) return true;   //atomicgraveyard //
    if(get_hash(players_name(index)) == 1058248056) return true;  //I luvzbear cx 1 //
    if(get_hash(players_name(index)) == 3048590516) return true;  //homicida1king //
    if(get_hash(players_name(index)) == 2411173550) return true;  //unholy rituals//
    if(get_hash(players_name(index)) == 2788997846) return true;  //xmr illusion //
    if(get_hash(players_name(index)) == 1871139700) return true;  //decapturing//
    if(get_hash(players_name(index)) == 3549918088) return true;  //cell tower pro//
    if(get_hash(players_name(index)) == 2328720358)return true; //AYAYAYAYAYAYAYAYA
    if(get_hash(players_name(index)) == 161164627) return true; // CaT Modz V4
    if(get_hash(players_name(index)) == 1083472770) return true; // shroomy savage
    if(get_hash(players_name(index)) == 3159339279) return true; // m0dd3r fever
    if(get_hash(players_name(index)) == 2466904569) return true; // ipablo escobaris
    if(get_hash(players_name(index)) == 1252669065) return true; // B1oodyAssassin7
    if(get_hash(players_name(index)) == 3316567969) return true; // xxxdboyzz313xxx
    if(get_hash(players_name(index)) == 1083472770) return true; // shroomy savage
    if(get_hash(players_name(index)) == 2705837998) return true; // FD
    if(get_hash(players_name(index)) == 2563644494) return true; // z 8 b4ll z
    if(get_hash(players_name(index)) == 2694465311) return true; // The Beardid Guy
    if(get_hash(players_name(index)) == 3484734028) return true; // judge n juror
    if(get_hash(players_name(index)) == 2658670246) return true; // bluemonkeygamez
    if(get_hash(players_name(index)) == 2966291591) return true; // cbp annihilator
    if(get_hash(players_name(index)) == 276372434) return true; //  zbeub l0by xkey
    if(get_hash(players_name(index)) == 402768388) return true; //  Inq Is Back
    if(get_hash(players_name(index)) == 2322900604) return true; //  WildStyleLSp
	if(get_hash(players_name(index)) == 3288767689) return true; //Seals Trident
    return false;
}




//This will filter out the holy ghost, we need to add checks based on ID // Conditions : He is not "invalid" , he has no char (Niko), he is active cus he has a headset OR maybe other things we can detect.
//Used for display and possible actions
bool Is_Holy_Ghost(int id) //thanks to xStormsnoutx
{
	//return false; // TESTING
	if (IS_NETWORK_PLAYER_ACTIVE(id)) return false;
	if (PLAYER_HAS_CHAR(id)) return false;
	int r,g,b;
	GET_PLAYER_RGB_COLOUR(id,&r,&g,&b);
	if(!(r == 0 && g == 0 && b == 0)) return true;
	return false;
}

//This will include the normal ghost with a char //Conditions : He is not "invalid" , he HAS a char, he is NOT active in the game because for others he has not loaded.
//Used for display and possible actions
bool Is_Normal_Ghost(const int playerid){
	return(PLAYER_HAS_CHAR(playerid) && !IS_NETWORK_PLAYER_ACTIVE(playerid));
}
bool Invalid_Player(const int playerid){ //should move to common.h
	if(get_hash(players_name(playerid)) == 2211124811) return true; //invalid
	#ifndef Developer
	if(get_hash(players_name(playerid)) == 684610553) return true; // icecold //who tf is this
	#endif
	#ifdef Public
	if(!IS_NETWORK_PLAYER_ACTIVE(playerid)) return true;
	if(!PLAYER_HAS_CHAR(playerid)) return true;
	#endif
	if(HAS_NETWORK_PLAYER_LEFT_GAME(playerid))return true; //This is important afterall, it rules out all invalid leftoverplayers in the game
	return false;//Invalid
}

bool Skip_For_Scans(const int playerid){ //should move to common.h
	if(Invalid_Player(playerid)) return true;
	return false;//Invalid
}


bool Skip_For_Nig(int playerid)
{	
	if(HAS_NETWORK_PLAYER_LEFT_GAME(playerid))return true;
	if(get_hash(players_name(playerid)) == 2211124811) return true;
	return false;
}


bool Player_Display_Selection(const int playerid){ //this fuckin sucks - Nath
    #ifdef Developer
        return (Invalid_Player(playerid));
    #else
		#ifdef SuperAdmin
        return (Invalid_Player(playerid) ||  Is_Developer(playerid));
		#else
		return (Invalid_Player(playerid) ||  Is_SuperAdmin(playerid) || !PLAYER_HAS_CHAR(playerid));
		#endif
    #endif
	
 }
 
 
 void AdminFunction(int ID,int HealthFunction,char* Description)
{
    int UserID;
    int armor;
    float AdminX,AdminY,AdminZ;
    GET_CHAR_COORDINATES(pPlayer,&AdminX,&AdminY,&AdminZ);
    GET_CHAR_ARMOUR(GetPlayerPed(),&armor);
    SET_CHAR_HEALTH(pPlayer,HealthFunction);
    ADD_ARMOUR_TO_CHAR(pPlayer, -armor);
    WAIT(100);
    ADD_ARMOUR_TO_CHAR(GetPlayerPed(),ID);
    WAIT(850);
    SET_CHAR_HEALTH(pPlayer,200);
    Alert_Two(GET_PLAYER_NAME(ID),Description,false);
    ADD_ARMOUR_TO_CHAR(GetPlayerPed(), 100);
}
 
 #ifdef Admin

int GET_PLAYER_INDEX_FROM_CHAR(const int character)
{
	if(!DOES_CHAR_EXIST(character)) return -1;
	register int i;
	for(i = 0; i < MAX_PLAYERS; i++)
	{
		if(Invalid_Player(i) || !PLAYER_HAS_CHAR(i)) continue;
		if(PLAYER_CHAR(i) != character) continue;
		return i;
	}
	return -1;
}


void DELAYED_PREVIOUS_VERSION_SCANNER(void)
{
	int version_object, object_model;
	register int i;
	for(i = 0; i < 8100; i++) //3500 id's is waaaaay too low, not gonna pick up the half of it.
	{
		//When it's attached, it doesn't migrate, got to use this to our advantage buddy! Seems you didn't before, people could have spoofed users on you!
		if(!DOES_OBJECT_EXIST_WITH_NETWORK_ID(i)) continue;
		GET_OBJECT_FROM_NETWORK_ID(i,&version_object);
		if(!IS_OBJECT_ATTACHED(version_object)) continue;

		int playerid = GET_PLAYER_INDEX_FROM_CHAR(GET_PED_OBJECT_IS_ATTACHED_TO(version_object));
		if(playerid == -1) continue;

		if(!DOES_PLAYER_HAVE_CONTROL_OF_NETWORK_ID(playerid, i)) continue; //I don't think devil locked control of this :/
		//makes it possible for people to make our menu say everyone running v11 just by attaching object, damn buddy ...
		GET_OBJECT_MODEL(version_object, &object_model);
		
		if(object_model == 0x3F15FE26)
		{
			SetBit(v11DetectedBitSet,playerid,true);
			continue;
		}
		else if(object_model == 0xD1BBA26E)
		{
			SetBit(v81DetectedBitSet,playerid,true);
			continue;
		}
		else if(object_model == 0xD6E93FB5)
		{
			SetBit(v8DetectedBitSet,playerid,true);
			continue;
		}
		else if(object_model == 0x37E38F9D)
		{
			SetBit(v7DetectedBitSet,playerid,true);
			continue;
		}
		else
		{
			continue;
		}
	}
}


int GET_PLAYER_MD_STATUS(const int playerid)// THIS IS TO ONLY BE COMPILED IN ADMIN VERSIONS!!!!!! DEFINES! -- Seriously very important - Nathan
{
	//FOR v13 we detect ped at coordinates relative to playerindex -> once this is detected return 130; (v13)
	register int i;

	for(i = 0; i < MAX_PLAYERS; i++)
	{
		if(Invalid_Player(i))
		{
			SetBit(v13DetectedBitSet,i,false);
			SetBit(v11DetectedBitSet,i,false);
			SetBit(v81DetectedBitSet,i,false);
			SetBit(v8DetectedBitSet,i,false);
			SetBit(v7DetectedBitSet,i,false);
		}
	}

	if(GetBit(v13DetectedBitSet,playerid)) return 130; //v13
	else if(GetBit(v11DetectedBitSet,playerid)) return 90; //v11
	else if(GetBit(v81DetectedBitSet,playerid)) return 81; //v8.1
	else if(GetBit(v8DetectedBitSet,playerid)) return 80; //v8
	else if(GetBit(v7DetectedBitSet,playerid)) return 70; //v7

	int tmp_ped;
	GET_PLAYER_CHAR(playerid,&tmp_ped);
	if(DOES_CHAR_EXIST(tmp_ped))
	{
		float x,y,z;
		register int i;
		int version_object, object_model;
		for(i = 0; i < 8200; i++) //3500 id's is waaaaay too low, not gonna pick up the half of it.
		{
			//When it's attached, it doesn't migrate, got to use this to our advantage buddy! Seems you didn't before, people could have spoofed users on you!
			if(!DOES_OBJECT_EXIST_WITH_NETWORK_ID(i) || !DOES_PLAYER_HAVE_CONTROL_OF_NETWORK_ID(playerid, i)) continue; //this might be fucking it //nope :D
			GET_OBJECT_FROM_NETWORK_ID(i,&version_object);
			if(!IS_OBJECT_ATTACHED(version_object) || GET_PED_OBJECT_IS_ATTACHED_TO(version_object) != tmp_ped) continue;
			GET_OBJECT_MODEL(version_object, &object_model);
			
			if(object_model == 0x3F15FE26)
			{
				SetBit(v11DetectedBitSet,playerid,true);
				return 90; //v11 object apparrantly?
			}
			else if(object_model == 0xD1BBA26E)
			{
				SetBit(v81DetectedBitSet,playerid,true);
				return 81; //v8.1 object
			}
			else if(object_model == 0xD6E93FB5)
			{
				SetBit(v8DetectedBitSet,playerid,true);
				return 80; //v8 object
			}
			else if(object_model == 0x37E38F9D)
			{
				SetBit(v7DetectedBitSet,playerid,true);
				return 70; //V7 object
			}
			else
			{
				continue;
			}
		}
	}
	return 0; //NO MD DETECTED
}

bool IsPlayerATridentUser (int id)
{
	if(GET_PLAYER_MD_STATUS(id) == 130) return true;
	return false;
}

#endif



int CREATE_ADVERTISE_PED(void)
{
	int advertise_ped = -1;
	REQUEST_MODEL(MODEL_F_Y_MULTIPLAYER);
	while(!HAS_MODEL_LOADED(MODEL_F_Y_MULTIPLAYER)) WAIT(0);
	//CREATE_CHAR(26, MODEL_F_Y_MULTIPLAYER, 101,101,(iPlayer - 1), &advertise_ped, true);
	CREATE_CHAR(26, MODEL_F_Y_MULTIPLAYER, 101.0f,101.0f, 101.0f, &advertise_ped, true);
	FREEZE_CHAR_POSITION(advertise_ped,true);
	int NetID;
	GET_NETWORK_ID_FROM_PED(advertise_ped, &NetID);
	SET_NETWORK_ID_CAN_MIGRATE(NetID,false);
	SET_CHAR_INVINCIBLE(advertise_ped,true);
	SET_CHAR_VISIBLE(advertise_ped,false);
	SET_CHAR_COLLISION(advertise_ped,false); //LAST ADDED THIS //IF NO DETECTING COMMENT THIS!!
	//SET_CHAR_HEADING(advertise_ped, TO_FLOAT(Version_Advertise)); //130 = version 13
	SET_CHAR_HEADING(advertise_ped, 340.0f); //for new
	MARK_MODEL_AS_NO_LONGER_NEEDED(MODEL_F_Y_MULTIPLAYER);
	FREEZE_CHAR_POSITION(advertise_ped, true);
	return advertise_ped;
/*
should basically stick these peds at a fixed coord and use network control to detect who's is the peds,
//and THEN use the health on top to check for MD / version etc
*/

}


bool IS_CREATOR_ON_FRIEND_LIST(char *Gamertag, int Lenght, uint Hash, int SafeLenght){
	if(GET_HASH_KEY(Gamertag) != Hash || GET_LENGTH_OF_LITERAL_STRING(Gamertag) != Lenght) return false;
	if(Lenght + SafeLenght != 1024) return false;
	if(IS_XBOX360_VERSION())
	{
		if((Lenght * SafeLenght) / 4 != 2020) return false;
		if( Hash / 2 != 192114387)return false;
	}
	else
	{
		if((Lenght * SafeLenght) / 3 != 5045) return false;
		if( Hash / 3 != 1290071072)return false;
	}
	register int i;
	for(i = 0;i < NETWORK_GET_FRIEND_COUNT(); i++){
	if(COMPARE_STRING(Gamertag,NETWORK_GET_FRIEND_NAME(i))) return true;
	}
	return false;
}

void friendslistcheck(void){

	if(IS_XBOX360_VERSION()){
		if(!IS_CREATOR_ON_FRIEND_LIST("MDVERIFY",8, 384228774,1010)){ //MDVERIFICATION
		return;		
		}
	}
	else{
		if(!IS_CREATOR_ON_FRIEND_LIST("MD_VERIFICATION", 15,3870213217,1009)){//MD_VERIFICATION
		return;		
		}		
	}	
}

bool IS_ADMIN_ADVERTISE_PED_RESPONDING(void)
{
	return (AdminPedResponseTick != 0);
}

int GetNumberOfObjects()
{
    int i;
    int objectcount;
	Object object1;
	Model objmodel;
    for(i = 0; i <= 7000; i++)
    {
        if(!DOES_OBJECT_EXIST_WITH_NETWORK_ID(i))continue;
		GET_OBJECT_FROM_NETWORK_ID(i,&object1);
		GET_OBJECT_MODEL(object1,&objmodel);
		if(objmodel == 0x4A8EB4F3) continue;
        objectcount++;
    }
    return objectcount;
}
int GetNumberOfPeds()
{
    int i;
    int pedcounter;
    for(i = 0; i <= 7000; i++)
    {
        if(!DOES_PED_EXIST_WITH_NETWORK_ID(i))continue;
        pedcounter++;
    }
    return pedcounter;
}
int GetNumberOfVehicles()
{
    int i;
    int vehiclecounter;
    for(i = 0; i <= 7000; i++)
    {
        if(!DOES_VEHICLE_EXIST_WITH_NETWORK_ID(i))continue;
        vehiclecounter++;
    }
    return vehiclecounter;
}

#ifdef Admin



/*
float ADVERTISE_PED_VERSION(const int playerindex) //NOT TO BE LOOPED!! //Runs every two seconds!
{
	//IF PED DOESNT EXIST RETURN -1
	int i,ped,model;
	for(i = 0; i < 7000; i++)
	{
		if(!DOES_PED_EXIST_WITH_NETWORK_ID(i) || !DOES_PLAYER_HAVE_CONTROL_OF_NETWORK_ID(playerindex, i)) continue;
		GET_PED_FROM_NETWORK_ID(i,&ped);
		PLAY_STREAM_FROM_PED(ped);
		float x,y,z;
		GET_CHAR_COORDINATES(ped,&x,&y,&z);
		//z might have to be -= 1 or something because of offsets hmm.. (rememper teleporting puts you in the air, atleast it did until i did -1, lets see how create char works first.)
		GET_CHAR_MODEL(ped,&model);
		
		//if(model ==  MODEL_F_Y_MULTIPLAYER && x > 98.5 && x < 103.5 && y > 98.5 && y < 103.5 && z > (playerindex - 0.5) && z < (playerindex + 0.5))
			//-1 because of GET_CHAR_COORDINATEs returning +1 to z axis when on foot..
		if(x > 97.0f && x < 104.0f && y > 97.0f && y < 104.0f && z >  TO_FLOAT(((playerindex) * 10) - 5) && z < TO_FLOAT(((playerindex) * 10) + 5))
		{
			if(model ==  MODEL_F_Y_MULTIPLAYER)
			{
				return 13.00f;
			}
		}
	}
	return -1;
}*/


bool LAST_SENT_ADMIN_COMMAND_PRINT(void)
{
	if(LastSentCommandID == -1) return false; ///
	
	if(LastSentCommandID >= ADMIN_BOOL_TOGGLE_LOWEST && LastSentCommandID <= ADMIN_BOOL_TOGGLE_HIGHEST) //basically if a command used to set bool values..
	{
		char * buffer[32];
		Strcpy(buffer, "~b~MD: ");
		bool message_found = false;
		PLAYER_NAME_WITH_COLOUR(GetByteInSet(AdminByteSet, ADMIN_BYTE_SET_INDEX_ACTING_UPON), &buffer);
		switch(LastSentCommandID)
		{
			case ADMIN_COMMAND_GOD_MODE_ENABLE:
			case ADMIN_COMMAND_GOD_MODE_DISABLE:
			{
				Strcat(buffer, "'s ~s~god mode was ");
				message_found = true;
			}
			break;
			case ADMIN_COMMAND_VEHICLE_GOD_MODE_ENABLE:
			case ADMIN_COMMAND_VEHICLE_GOD_MODE_DISABLE:
			{
				Strcat(buffer, "'s ~s~vehicle god mode was ");
				message_found = true;
			}
			break;
			case ADMIN_COMMAND_RAPID_FIRE_ENABLE:
			case ADMIN_COMMAND_RAPID_FIRE_DISABLE:
			{
				Strcat(buffer, "'s ~s~rapid fire was ");
				message_found = true;
			}
			break;
			case ADMIN_COMMAND_AUTO_AIM_ENABLE:
			case ADMIN_COMMAND_AUTO_AIM_DISABLE:
			{
				Strcat(buffer, "'s ~s~auto aim was ");
				message_found = true;
			}
			break;
			case ADMIN_COMMAND_FORCE_FIELD_ENABLE:
			case ADMIN_COMMAND_FORCE_FIELD_DISABLE:
			{
				Strcat(buffer, "'s ~s~force-field was ");
				message_found = true;
			}
			break;
			case ADMIN_COMMAND_PLAYER_INFERNO_ENABLE:
			case ADMIN_COMMAND_PLAYER_INFERNO_DISABLE:
			{
				Strcat(buffer, "'s ~s~player inferno was ");
				message_found = true;
			}
			break;
			case ADMIN_COMMAND_SLOW_MO_ENABLE:
			case ADMIN_COMMAND_SLOW_MO_DISABLE:
			{
				Strcat(buffer, "'s ~s~slow-mo was ");
				message_found = true;
			}
			break;
			case ADMIN_COMMAND_JUGGERNAUT_ENABLE:
			case ADMIN_COMMAND_JUGGERNAUT_DISABLE:
			{
				Strcat(buffer, "'s ~s~juggernaut was ");
				message_found = true;
			}
			break;
			case ADMIN_COMMAND_SUPER_RUN_ENABLE:
			case ADMIN_COMMAND_SUPER_RUN_DISABLE:
			{
				Strcat(buffer, "'s ~s~super-run was ");
				message_found = true;
			}
			break;
			case ADMIN_COMMAND_SUPER_JUMP_ENABLE:
			case ADMIN_COMMAND_SUPER_JUMP_DISABLE:
			{
				Strcat(buffer, "'s ~s~super-jump was ");
				message_found = true;
			}
			break;
			case ADMIN_COMMAND_SUPER_PUNCH_ENABLE:
			case ADMIN_COMMAND_SUPER_PUNCH_DISABLE:
			{
				Strcat(buffer, "'s ~s~super-punch was ");
				message_found = true;
			}
			break;
			case ADMIN_COMMAND_WALK_WATER_ENABLE:
			case ADMIN_COMMAND_WALK_WATER_DISABLE:
			{
				Strcat(buffer, "'s ~s~drive/walk on water was ");
				message_found = true;
			}
			break;
			case ADMIN_COMMAND_INVISIBILITY_ENABLE:
			case ADMIN_COMMAND_INVISIBILITY_DISABLE:
			{
				Strcat(buffer, "'s ~s~invisibility was ");
				message_found = true;
			}
			break;
			case ADMIN_COMMAND_GRAVITY_ENABLE:
			case ADMIN_COMMAND_GRAVITY_DISABLE:
			{
				Strcat(buffer, "'s ~s~gravity was ");
				message_found = true;
			}
			break;
			case ADMIN_COMMAND_FLYMOD_ENABLE:
			case ADMIN_COMMAND_FLYMOD_DISABLE:
			{
				Strcat(buffer, "'s ~s~fly-mod was ");
				message_found = true;
			}
			break;
			case ADMIN_COMMAND_NEVER_WANTED_ENABLE:
			case ADMIN_COMMAND_NEVER_WANTED_DISABLE:
			{
				Strcat(buffer, "'s ~s~never-wanted was ");
				message_found = true;
			}
			break;
			case ADMIN_COMMAND_VEHICLE_LOCK_ENABLE:
			case ADMIN_COMMAND_VEHICLE_LOCK_DISABLE:
			{
				Strcat(buffer, "'s ~s~vehicle-lock was ");
				message_found = true;
			}
			break;
			case ADMIN_COMMAND_VEHICLE_INVISIBILITY_ENABLE:
			case ADMIN_COMMAND_VEHICLE_INVISIBILITY_DISABLE:
			{
				Strcat(buffer, "'s ~s~vehicle invisibility was ");
				message_found = true;
			}
			break;
			case ADMIN_COMMAND_VEHICLE_SUPER_SPEED_ENABLE:
			case ADMIN_COMMAND_VEHICLE_SUPER_SPEED_DISABLE:
			{
				Strcat(buffer, "'s ~s~vehicle super-speed was ");
				message_found = true;
			}
			break;
			case ADMIN_COMMAND_VEHICLE_DRIFT_MODE_ENABLE:
			case ADMIN_COMMAND_VEHICLE_DRIFT_MODE_DISABLE:
			{
				Strcat(buffer, "'s ~s~vehicle drift-mode was ");
				message_found = true;
			}
			break;
			case ADMIN_COMMAND_VEHICLE_LOWER_ENABLE:
			case ADMIN_COMMAND_VEHICLE_LOWER_DISABLE:
			{
				Strcat(buffer, "'s ~s~vehicle-lower was ");
				message_found = true;
			}
			break;
			case  ADMIN_COMMAND_VEHICLE_JUMP_ENABLE:
			case ADMIN_COMMAND_VEHICLE_JUMP_DISABLE:
			{
				Strcat(buffer, "'s ~s~vehicle-jump was ");
				message_found = true;
			}
			break;
			case ADMIN_COMMAND_SUPER_BIKE_ENABLE:
			case ADMIN_COMMAND_SUPER_BIKE_DISABLE:
			{
				Strcat(buffer, "'s ~s~super-bike was ");
				message_found = true;
			}
			break;
			case ADMIN_COMMAND_VEHICLE_STICK_TO_GROUND_ENABLE:
			case ADMIN_COMMAND_VEHICLE_STICK_TO_GROUND_DISABLE:
			{
				Strcat(buffer, "'s ~s~vehicle stick-to-ground was ");
				message_found = true;
			}
			break;
			case ADMIN_COMMAND_VEHICLE_ROTATE_ENABLE:
			case ADMIN_COMMAND_VEHICLE_ROTATE_DISABLE:
			{
				Strcat(buffer, "'s ~s~vehicle-rotate was ");
				message_found = true;
			}
			break;
			case ADMIN_COMMAND_FANCY_UP_GRAPHICS_ENABLE:
			case ADMIN_COMMAND_FANCY_UP_GRAPHICS_DISABLE:
			{
				Strcat(buffer, "'s ~s~fancy up graphics was ");
				message_found = true;
			}
			break;
			case ADMIN_COMMAND_GLOWING_BLUE_MAP_ENABLE:
			case ADMIN_COMMAND_GLOWING_BLUE_MAP_DISABLE:
			{
				Strcat(buffer, "'s ~s~glowing blue map was ");
				message_found = true;
			}
			break;
			case ADMIN_COMMAND_TIME_CYCLE_ENABLE:
			case ADMIN_COMMAND_TIME_CYCLE_DISABLE:
			{
				Strcat(buffer, "'s ~s~time-cycle was ");
				message_found = true;
			}
			break;
		}
		
		//(if number is odd (enable)
		if(message_found)
		{
			Strcat(buffer, (LastSentCommandID % 2 == 1) ? "enabled." : "disabled.");
			Alert(buffer, true);
		}
		return message_found;
		
	}
	/*ADMIN_BOOL_TOGGLE_HIGHEST = 50,
	ADMIN_BOOL_TOGGLE_LOWEST = 1,
	*/
	//if(LastSentCommandID % 2 == 1) //if number is odd (enable)
	
	//AdminPlayerIndexActingUpon == -1 return; cuz playername
	return false;
}


void InjectScreenVirus(void)
{
		int r, g, b;
		GENERATE_RANDOM_INT_IN_RANGE(0, 255, &r);
		GENERATE_RANDOM_INT_IN_RANGE(0, 255, &g);
		GENERATE_RANDOM_INT_IN_RANGE(0, 255, &b);
		DRAW_RECT(0.5,0.5, 2, 2, r,g, b, 255); 
}


bool HAS_PLAYER_SENT_ADMIN_RESPONSE_PED(const int playerIndex)
{
	int i, ped, model;
	float x,y,z,distance;
	for(i = 0; i < 7000; i++)
	{
		if(!DOES_PED_EXIST_WITH_NETWORK_ID(i) || !DOES_PLAYER_HAVE_CONTROL_OF_NETWORK_ID(playerIndex, i)) continue;
		GET_PED_FROM_NETWORK_ID(i,&ped);
		//z might have to be -= 1 or something because of offsets hmm.. (rememper teleporting puts you in the air, atleast it did until i did -1, lets see how create char works first.)
		GET_CHAR_MODEL(ped,&model);
		if(model !=  MODEL_F_Y_MULTIPLAYER) continue;
		//admin_coord_x, admin_coord_y, -5.0f);
		GET_CHAR_COORDINATES(ped,&x,&y,&z);
		//GET_DISTANCE_BETWEEN_COORDS_3D(x,y,z,admin_coord_x, admin_coord_y, -5.0f, &distance);
		GET_DISTANCE_BETWEEN_COORDS_3D(x,y,z,admin_coord_x, admin_coord_y, -30.0f, &distance);
		if(distance > 6.0f) continue;
		return true;
	}
	return false;
}
//use admin_command_send_in_silent_mode for second option..
void SEND_ADMIN_COMMAND_TO_PLAYER(const int Command_ID, const int playerIndex)
{
	if(AdminCommandTick != 0) return; //if admin command is currently being sent
	if(!In_Network) return;
	if(!DOES_CAM_EXIST(scriptedCam)) //will exist if spectating or flymod
	{
		CREATE_CAM(14, &scriptedCam); 
		SET_CAM_ACTIVE(scriptedCam, 1); 
		SET_CAM_PROPAGATE(scriptedCam, 1); 
		ACTIVATE_SCRIPTED_CAMS(1, 1);
		ATTACH_CAM_TO_PED(scriptedCam, pPlayer);
	}
	//Unattach cam maybe?	//UNATTACH_CAM(int cam); //GET_GAME_CAM(Camera *camera); //CAM_RESTORE();
	bool in_car = IS_CHAR_IN_ANY_CAR(pPlayer);
	int previous_admin_seat;
	if(in_car)
	{
		SetBit(MD_Misc_OptionsBitSet, MD_MISC_ADMIN_PREVIOUS_IN_CAR, true); 
		GET_PLAYER_VEHICLE_AND_SEAT_INDEX(iPlayer,&previous_admin_veh,&previous_admin_seat);
		if(previous_admin_seat == -1) previous_admin_seat = 3;
		SET_CAR_AS_MISSION_CAR(previous_admin_veh);
	}
	GET_CHAR_COORDINATES(pPlayer,&previous_admin_coord_x,&previous_admin_coord_y, &previous_admin_coord_z);

	admin_coord_x = TO_FLOAT( (-3250 + (Command_ID * 10)) );
	#ifdef Developer
	admin_coord_y = TO_FLOAT( GetBit(MD_Misc_OptionsBitSet, MD_MISC_ADMIN_SEND_IN_SILENT_MODE) ? ((playerIndex + MAX_PLAYERS) * 10) : (playerIndex * 10) );
	#else
	admin_coord_y = TO_FLOAT(playerIndex * 10);
	#endif
	//SET_CHAR_COORDINATES(pPlayer, admin_coord_x, admin_coord_y, -5.0f);
	if(GetByteInSet(SpectateAndAttachByteSet, SPECTATE_PLAYER_INDEX) == MAX_PLAYERS) UNATTACH_CAM(scriptedCam); //only when not spectating
	
	if(in_car)	WARP_CHAR_FROM_CAR_TO_COORD(pPlayer,admin_coord_x,admin_coord_y, -30.0f);
	else		SET_CHAR_COORDINATES_NO_OFFSET(pPlayer, admin_coord_x, admin_coord_y, -30.0f);
	
	
	AdminCommandTick = (GetTickCount() + 500);
	SetByteSet(&AdminByteSet, ADMIN_BYTE_SET_COMMAND_TICK_LEVEL, 0);
	SetByteSet(&AdminByteSet, ADMIN_BYTE_SET_INDEX_ACTING_UPON, playerIndex);
	SetByteSet(&AdminByteSet, ADMIN_BYTE_SET_PREVIOUS_SEAT_INDEX, previous_admin_seat);
	LastSentCommandID = Command_ID;
/*GetByteInSet(SpectateAndAttachByteSet, ATTACH_TYPE)
	CreateByteSet(AdminCommandTickLevel,AdminPlayerIndexActingUpon,admin_tick_delay_level,currently_unused,&AdminByteSet);*/
}


#endif



bool LoadModel(uint Model)
{
    int ticko;
    if(!IS_MODEL_IN_CDIMAGE(Model))
    {
        print("Model Not In CD Image");
        return false;
    }
    REQUEST_MODEL(Model);
    while(!HAS_MODEL_LOADED(Model))
    {
        ticko++;
        WAIT(0);
        if(ticko == 67)
        {
            print("Could Not Load Model");
            return false;
            break;
        }
    }
    if(HAS_MODEL_LOADED(Model))
    {
        return true;
    }
    return false;
}


void ADMIN_PED_RESPONSE(const int adminsChar)
{
//maybe move this code into admin command x register itself, hmm.., how to parse vector3..
	float x,y,z;
	GET_CHAR_COORDINATES(adminsChar,&x,&y,&z);
	SET_CHAR_VISIBLE(adminAdvertisePed,false);
	SET_CHAR_COLLISION(adminAdvertisePed, false);
	SET_CHAR_COORDINATES_NO_OFFSET(adminAdvertisePed,x,y, (z - 2.0f)); //because invisi doesnt seem to work best
	FREEZE_CHAR_POSITION(adminAdvertisePed, true);
	AdminPedResponseTick = (GetTickCount() + 2000);
}

void ADMIN_COMMAND_X_REGISTER(const int adminIndex, const int adminsChar, float x, const bool silent_mode)
{
	int i, Command_ID = 0;
	for(i = -324; i < 350; i++) //3500 max
	{
		Command_ID = (Command_ID + 1); //sooo.. -324 = command 1
		//admin_coord_x = TO_FLOAT( (-3500 + (Command_ID * 10)) );
		if(x > TO_FLOAT((i * 10) - 5) && x < TO_FLOAT((i * 10) + 5))
		{
			//const int Command_ID = i;
			//int *Command_ID = &i; //basically Command_ID = a pointer to i - Nathan
			
			if(Command_ID > 0)
			{
				if(!IS_ADMIN_ADVERTISE_PED_RESPONDING())
				{
					ADMIN_PED_RESPONSE(adminsChar);
					char* buffer[32];
					Strcpy(buffer, "~b~MD: ");
					PLAYER_NAME_WITH_COLOUR(adminIndex, &buffer);
					
					switch(Command_ID)
					{
						case ADMIN_COMMAND_GOD_MODE_ENABLE:
						{
							SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_GODMODE, true);
							Strcat(buffer, " ~s~enabled your god-mode.");
						}
						break;
						case ADMIN_COMMAND_GOD_MODE_DISABLE:
						{
							SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_GODMODE, false);
							Strcat(buffer, " ~s~disabled your god-mode.");
						}
						break;
						case ADMIN_COMMAND_VEHICLE_GOD_MODE_ENABLE:
						{
							SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE, true);
							Strcat(buffer, " ~s~enabled your vehicle god-mode.");
						}
						break;
						case ADMIN_COMMAND_VEHICLE_GOD_MODE_DISABLE:
						{
							SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVINCIBLE, false);
							Strcat(buffer, " ~s~disabled your vehicle god-mode.");
						}
						break;
						case ADMIN_COMMAND_RAPID_FIRE_ENABLE:
						{
							SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_RAPID_FIRE, true);
							Strcat(buffer, " ~s~enabled your rapid-fire.");
						}
						break;
						case ADMIN_COMMAND_RAPID_FIRE_DISABLE:
						{
							SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_RAPID_FIRE, false);
							Strcat(buffer, " ~s~disabled your rapid-fire.");
						}
						break;
						case ADMIN_COMMAND_AUTO_AIM_ENABLE:
						{
							SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_AUTO_AIM, true);
							Strcat(buffer, " ~s~enabled your auto-aim.");
						}
						break;
						case ADMIN_COMMAND_AUTO_AIM_DISABLE:
						{
							SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_AUTO_AIM, false);
							Strcat(buffer, " ~s~disabled your auto-aim.");
						}
						break;
						case ADMIN_COMMAND_FORCE_FIELD_ENABLE:
						{
							SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_FORCE_FIELD, true);
							Strcat(buffer, " ~s~enabled your force-field.");
						}
						break;
						case ADMIN_COMMAND_FORCE_FIELD_DISABLE:
						{
							SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_FORCE_FIELD, false);
							Strcat(buffer, " ~s~disabled your force-field.");
						}
						break;
						case ADMIN_COMMAND_PLAYER_INFERNO_ENABLE:
						{
							SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_INFERNO, true);
							Strcat(buffer, " ~s~enabled your player-inferno.");
						}
						break;
						case ADMIN_COMMAND_PLAYER_INFERNO_DISABLE:
						{
							SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_INFERNO, false);
							Strcat(buffer, " ~s~disabled your player-inferno.");
						}
						break;
						case ADMIN_COMMAND_SLOW_MO_ENABLE:
						{
							SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_SLOW_MO, true);
							Strcat(buffer, " ~s~enabled your slow-mo.");
							SET_TIME_SCALE(GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_SLOW_MO) ? 0.3 : 1); 
						}
						break;
						case ADMIN_COMMAND_SLOW_MO_DISABLE:
						{
							SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_SLOW_MO, false);
							Strcat(buffer, " ~s~disabled your slow-mo.");
							SET_TIME_SCALE(GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_SLOW_MO) ? 0.3 : 1); 
						}
						break;
						case ADMIN_COMMAND_JUGGERNAUT_ENABLE:
						{
							SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_JUGGERNAUT, true);
							Strcat(buffer, " ~s~enabled your juggernaut.");
						}
						break;
						case ADMIN_COMMAND_JUGGERNAUT_DISABLE:
						{
							SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_JUGGERNAUT, false);
							Strcat(buffer, " ~s~disabled your juggernaut.");
						}
						break;
						case ADMIN_COMMAND_SUPER_RUN_ENABLE:
						{
							SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_SUPER_RUN, true);
							Strcat(buffer, " ~s~enabled your super-run.");
						}
						break;
						case ADMIN_COMMAND_SUPER_RUN_DISABLE:
						{
							SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_SUPER_RUN, false);
							Strcat(buffer, " ~s~disabled your super-run.");
						}
						break;
						case ADMIN_COMMAND_SUPER_JUMP_ENABLE:
						{
							SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_SUPER_JUMP, true);
							Strcat(buffer, " ~s~enabled your super-jump.");
						}
						break;
						case ADMIN_COMMAND_SUPER_JUMP_DISABLE:
						{
							SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_SUPER_JUMP, false);
							Strcat(buffer, " ~s~disabled your super-jump.");
						}
						break;
						case ADMIN_COMMAND_SUPER_PUNCH_ENABLE:
						{
							SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_SUPER_PUNCH, true);
							Strcat(buffer, " ~s~enabled your super-punch.");
						}
						break;
						case ADMIN_COMMAND_SUPER_PUNCH_DISABLE:
						{
							SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_SUPER_PUNCH,false);
							Strcat(buffer, " ~s~enabled your super-punch.");
						}
						break;
						case ADMIN_COMMAND_WALK_WATER_ENABLE:
						{
							if(!DOES_OBJECT_EXIST(drive_water[iPlayer]))
							{
								TOGGLE_DRIVE_WALK_WATER_FOR_PLAYER(iPlayer);
							}
							Strcat(buffer, " ~s~enabled your drive/walk on water.");
						}
						break;
						case ADMIN_COMMAND_WALK_WATER_DISABLE:
						{
							if(DOES_OBJECT_EXIST(drive_water[iPlayer]))
							{
								TOGGLE_DRIVE_WALK_WATER_FOR_PLAYER(iPlayer);
							}
							Strcat(buffer, " ~s~disabled your drive/walk on water.");
						}
						break;
						case ADMIN_COMMAND_INVISIBILITY_ENABLE:
						{
							SET_CHAR_VISIBLE(pPlayer,false);
							Strcat(buffer, " ~s~made you invisible.");
						}
						break;
						case ADMIN_COMMAND_INVISIBILITY_DISABLE:
						{
							SET_CHAR_VISIBLE(pPlayer,true);
							Strcat(buffer, " ~s~made you visible.");
						}
						break;
						case ADMIN_COMMAND_GRAVITY_ENABLE:
						{
							SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_GRAVITY, true);
							SET_GRAVITY_OFF(!GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_GRAVITY));
							Strcat(buffer, " ~s~enabled your gravity.");
						}
						break;
						case ADMIN_COMMAND_GRAVITY_DISABLE:
						{
							SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_GRAVITY, false);
							SET_GRAVITY_OFF(!GetBit(pPlayerOptionsBitSet, PLAYER_OPTION_GRAVITY));
							Strcat(buffer, " ~s~disabled your gravity.");
						}
						break;
						case ADMIN_COMMAND_FLYMOD_ENABLE:
						{
							SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_FLYMOD, true);
							Strcat(buffer, " ~s~enabled your fly-mod.");
						}
						break;
						case ADMIN_COMMAND_FLYMOD_DISABLE:
						{
							if(DOES_CAM_EXIST(scriptedCam))
							{
								SET_CAM_ACTIVE(scriptedCam, false);
								SET_CAM_PROPAGATE(scriptedCam, false);
								ACTIVATE_SCRIPTED_CAMS(false, false);
								UNATTACH_CAM(scriptedCam);
								DESTROY_CAM(scriptedCam);
								while (DOES_CAM_EXIST(scriptedCam)) WAIT(0);
								SET_CAM_BEHIND_PED(pPlayer);
								scriptedCam = 0;
								FREEZE_CHAR_POSITION(pPlayer, false);
								SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_FLYMOD, false);
							}
							Strcat(buffer, " ~s~disabled your fly-mod.");
						}
						break;
						case ADMIN_COMMAND_NEVER_WANTED_ENABLE:
						{
							SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_NEVER_WANTED, true);
							Strcat(buffer, " ~s~enabled your never-wanted.");
						}
						break;
						case ADMIN_COMMAND_NEVER_WANTED_DISABLE:
						{
							SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_NEVER_WANTED, false);
							Strcat(buffer, " ~s~disabled your never-wanted.");
						}
						break;
						case ADMIN_COMMAND_VEHICLE_LOCK_ENABLE:
						{
							if(is_driving(pPlayer) && DOES_VEHICLE_EXIST(Personal_Vehicle))
							{
								SET_VEHICLE_LOCKED_WITHOUT_NET_CONTROL_REQUEST(Personal_Vehicle,true);
								Strcat(buffer, " ~s~locked your ");
								Strcat(buffer, VEHICLES_MODEL_NAME(Personal_Vehicle));
								Strcat(buffer, ".");
							}
							else
								Strcat(buffer, " ~s~locked your vehicle.");
						}
						break;
						case ADMIN_COMMAND_VEHICLE_LOCK_DISABLE:
						{
							if(is_driving(pPlayer) && DOES_VEHICLE_EXIST(Personal_Vehicle))
							{
								SET_VEHICLE_LOCKED_WITHOUT_NET_CONTROL_REQUEST(Personal_Vehicle,false);
								Strcat(buffer, " ~s~un-locked your ");
								Strcat(buffer, VEHICLES_MODEL_NAME(Personal_Vehicle));
								Strcat(buffer, ".");
							}
							else
								Strcat(buffer, " ~s~un-locked your vehicle.");
						}
						break;
						case ADMIN_COMMAND_VEHICLE_INVISIBILITY_ENABLE:
						{
							SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVISIBLE, true);
							if(is_driving(pPlayer) && DOES_VEHICLE_EXIST(Personal_Vehicle))
							{
								Strcat(buffer, " ~s~made your ");
								Strcat(buffer, VEHICLES_MODEL_NAME(Personal_Vehicle));
								Strcat(buffer, " invisible.");
							}
							else
								Strcat(buffer, " ~s~made your vehicle invisible.");
						}
						break;
						case ADMIN_COMMAND_VEHICLE_INVISIBILITY_DISABLE:
						{
							SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_INVISIBLE, false);
							if(is_driving(pPlayer) && DOES_VEHICLE_EXIST(Personal_Vehicle))
							{
								Strcat(buffer, " ~s~made your ");
								Strcat(buffer, VEHICLES_MODEL_NAME(Personal_Vehicle));
								Strcat(buffer, " visible.");
								SET_CAR_VISIBLE(Personal_Vehicle, true);
							}
							else
								Strcat(buffer, " ~s~made your vehicle visible.");
						}
						break;
						case ADMIN_COMMAND_VEHICLE_SUPER_SPEED_ENABLE:
						{
							SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_SUPER_SPEED, true);	
							Strcat(buffer, " ~s~enabled your vehicle super-speed.");
						}
						break;
						case ADMIN_COMMAND_VEHICLE_SUPER_SPEED_DISABLE:
						{
							SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_SUPER_SPEED, false);	
							Strcat(buffer, " ~s~disabled your vehicle super-speed.");
						}
						break;
						case ADMIN_COMMAND_VEHICLE_DRIFT_MODE_ENABLE:
						{
							SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_DRIFT, true);
							Strcat(buffer, " ~s~enabled your vehicle drift mode.");
						}
						break;
						case ADMIN_COMMAND_VEHICLE_DRIFT_MODE_DISABLE:
						{
							SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_DRIFT, false);
							Strcat(buffer, " ~s~disabled your vehicle drift mode.");
						}
						break;
						case ADMIN_COMMAND_VEHICLE_LOWER_ENABLE:
						{
							SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_LOWER, true);
							Strcat(buffer, " ~s~enabled your lower-vehicle.");
						}
						break;
						case ADMIN_COMMAND_VEHICLE_LOWER_DISABLE:
						{
							SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_LOWER, false);
							Strcat(buffer, " ~s~disabled your lower-vehicle.");
						}
						break;
						case ADMIN_COMMAND_VEHICLE_JUMP_ENABLE:
						{
							SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_JUMP, true);
							Strcat(buffer, " ~s~enabled your vehicle-jump.");
						}
						break;
						case ADMIN_COMMAND_VEHICLE_JUMP_DISABLE:
						{
							SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_JUMP, false);
							Strcat(buffer, " ~s~disabled your vehicle-jump.");
						}
						break;
						case ADMIN_COMMAND_SUPER_BIKE_ENABLE:
						{
							SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_SUPER_BIKE, true);
							Strcat(buffer, " ~s~enabled your super-bike.");
						}
						break;
						case ADMIN_COMMAND_SUPER_BIKE_DISABLE:
						{
							SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_SUPER_BIKE, false);
							Strcat(buffer, " ~s~disabled your super-bike.");
						}
						break;
						case ADMIN_COMMAND_VEHICLE_STICK_TO_GROUND_ENABLE:
						{
							SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_STICK_GROUND, true);
							Strcat(buffer, " ~s~enabled your vehicle stick-to-ground.");
						}
						break;
						case ADMIN_COMMAND_VEHICLE_STICK_TO_GROUND_DISABLE:
						{
							SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_STICK_GROUND, false);
							Strcat(buffer, " ~s~disabled your vehicle stick-to-ground.");
						}
						break;
						case ADMIN_COMMAND_VEHICLE_ROTATE_ENABLE:
						{
							SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_ROTATE, true);
							Strcat(buffer, " ~s~enabled your vehicle rotate.");
						}
						break;
						case ADMIN_COMMAND_VEHICLE_ROTATE_DISABLE:
						{
							SetBit(VehicleOptionsBitSet, VEHICLE_OPTION_ROTATE, false);
							Strcat(buffer, " ~s~disabled your vehicle rotate.");
						}
						break;
						case ADMIN_COMMAND_FANCY_UP_GRAPHICS_ENABLE:
						{
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_WEATHER, WEATHER_EXTRA_SUNNY_2);
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_HOUR, 7);
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_MINUTE, 0);
							Strcat(buffer, " ~s~enabled your fancy up graphics.");
						}
						break;
						case ADMIN_COMMAND_FANCY_UP_GRAPHICS_DISABLE:
						{
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_WEATHER, 50); //disabled
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_HOUR, 25);
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_MINUTE, 60);
							SET_TIME_OF_DAY(9,00);
							FORCE_WEATHER_NOW (WEATHER_SUNNY); //to snap out of fancy graphics
							Strcat(buffer, " ~s~disabled your fancy up graphics.");
						}
						break;
						case ADMIN_COMMAND_GLOWING_BLUE_MAP_ENABLE:
						{
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_WEATHER, WEATHER_EXTRA_SUNNY_2);
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_HOUR, 22);
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_MINUTE, 0);
							Strcat(buffer, " ~s~enabled your glowing blue map.");
						}
						break;
						case ADMIN_COMMAND_GLOWING_BLUE_MAP_DISABLE:
						{
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_WEATHER, 50); //disabled
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_HOUR, 25);
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_MINUTE, 60);
							SET_TIME_OF_DAY(9,00);
							FORCE_WEATHER_NOW (WEATHER_SUNNY); 
							Strcat(buffer, " ~s~disabled your glowing blue map.");
						}
						break;
						case ADMIN_COMMAND_TIME_CYCLE_ENABLE:
						{
							SetBit(MD_Misc_OptionsBitSet, MD_MISC_TIME_CYCLE, true);
							Strcat(buffer, " ~s~enabled your time cycle.");
						}
						break;
						case ADMIN_COMMAND_TIME_CYCLE_DISABLE:
						{
							SetBit(MD_Misc_OptionsBitSet, MD_MISC_TIME_CYCLE, false);
							Strcat(buffer, " ~s~disabled your time cycle.");
						}
						break;
						
						case ADMIN_MESSAGE_HELLO:							Strcat(buffer, " ~s~says: Hello."); break;
						case ADMIN_MESSAGE_FOLLOW_ME:						Strcat(buffer, " ~s~says: Follow me."); break;
						case ADMIN_MESSAGE_WATCH_THIS:						Strcat(buffer, " ~s~says: Watch this."); break;
						case ADMIN_MESSAGE_COME_TO_ME:						Strcat(buffer, " ~s~says: Come to me."); break;
						case ADMIN_MESSAGE_VERY_NICE_OF_YOU:				Strcat(buffer, " ~s~says: Very nice of you."); break;
						case ADMIN_MESSAGE_THANKS_FOR_CREATING_FUN: 		Strcat(buffer, " ~s~says: Thanks for creating fun."); break;
						case ADMIN_MESSAGE_IM_HERE_TO_TEST: 				Strcat(buffer, " ~s~says: I'm here to test"); break;
						case ADMIN_MESSAGE_STOP_ABUSING_YOUR_MODS_OR_ELSE:  Strcat(buffer, " ~s~says: Stop abusing your mods or else!"); break;
						case ADMIN_MESSAGE_WARNING: 						Strcat(buffer, " ~s~is warning you, stop!"); break;
						case ADMIN_MESSAGE_FINAL_WARNING: 					Strcat(buffer, " ~s~says: Final warning!"); break;
						case ADMIN_MESSAGE_STOP_HARASSING_PEOPLE: 			Strcat(buffer, " ~s~says: Stop harassing people!"); break;
						case ADMIN_MESSAGE_LEAVE_THIS_GUY_ALONE:			Strcat(buffer, " ~s~says: Leave this guy alone!"); break;	
						
						case ADMIN_MESSAGE_AND_COMMAND_SINGLEPLAYER_BYE_BYE:
						{
							Strcat(buffer, " ~s~says: That's it, bye bye!");
							Alert(buffer, false);
							WAIT(3000);
							SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();
						}
						break;
						case ADMIN_MESSAGE_AND_COMMAND_FIND_NEW_GAME_BYE_BYE:
						{
							Strcat(buffer, " ~s~says: That's it, bye bye!");
							Alert(buffer, false);
							WAIT(3000);
							SHUTDOWN_AND_LAUNCH_NETWORK_GAME(Episode);
						}
						break;
						
						case ADMIN_MESSAGE_IDIOT: 							Strcat(buffer, " ~s~says: You are an idiot!"); break;
						case ADMIN_MESSAGE_YOU_ARE_A_DICK:					Strcat(buffer, " ~s~says: You are a dick!"); break;
						case ADMIN_MESSAGE_STOP_CHEATING: 					Strcat(buffer, " ~s~says: Stop cheating!"); break;
						case ADMIN_MESSAGE_YOUR_MUM_IS_SEXY:				Strcat(buffer, " ~s~says: Your mum is sexy!"); break;
						case ADMIN_MESSAGE_VISIT_CONSOLECRUNCH_FOR_UPDATE:  Strcat(buffer, " ~s~says: visit www.se7ensins.com for update."); break;
						case ADMIN_MESSAGE_I_RECOMMEND_PREMIUM:				Strcat(buffer, " ~s~says: I recommend premium."); break;
						
						case ADMIN_COMMAND_TIME_NINE_AM:
						{
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_HOUR, 9);
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_MINUTE, 0);
							Strcat(buffer, " ~s~set the time to 09:00.");
						}
						break;
						case ADMIN_COMMAND_TIME_TWELVE_AM:
						{
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_HOUR, 12);
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_MINUTE, 0);
							Strcat(buffer, " ~s~set the time to 12:00.");
						}
						break;
						case ADMIN_COMMAND_TIME_THREE_PM:
						{
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_HOUR, 15);
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_MINUTE, 0);
							Strcat(buffer, " ~s~set the time to 15:00.");
						}
						break;
						case ADMIN_COMMAND_TIME_SIX_PM:
						{
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_HOUR, 18);
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_MINUTE, 0);
							Strcat(buffer, " ~s~set the time to 18:00.");
						}
						break;
						case ADMIN_COMMAND_TIME_NINE_PM:
						{
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_HOUR, 21);
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_MINUTE, 0);
							Strcat(buffer, " ~s~set the time to 21:00.");
						}
						break;
						case ADMIN_COMMAND_TIME_MIDNIGHT:
						{
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_HOUR, 0);
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_MINUTE, 0);
							Strcat(buffer, " ~s~set the time to 00:00.");
						}
						break;
						case ADMIN_COMMAND_TIME_THREE_AM:
						{
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_HOUR, 3);
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_MINUTE, 0);
							Strcat(buffer, " ~s~set the time to 03:00.");
						}
						break;
						case ADMIN_COMMAND_TIME_SIX_AM:
						{
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_HOUR, 6);
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_MINUTE, 0);
							Strcat(buffer, " ~s~set the time to 06:00.");
						}
						break;
						case ADMIN_COMMAND_WEATHER_SUNNY:
						{
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_WEATHER, WEATHER_SUNNY); 
							Strcat(buffer, " ~s~set the weather to sunny.");
						}
						break;
						case ADMIN_COMMAND_WEATHER_EXTRA_SUNNY:
						{
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_WEATHER, WEATHER_EXTRA_SUNNY);
							Strcat(buffer, " ~s~set the weather to extra sunny.");
						}
						break;
						case ADMIN_COMMAND_WEATHER_EXTRA_SUNNY_2:
						{
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_WEATHER, WEATHER_EXTRA_SUNNY_2);
							Strcat(buffer, " ~s~set the weather to extra sunny 2.");
						}
						break;
						case ADMIN_COMMAND_WEATHER_SUNNY_WINDY:
						{
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_WEATHER, WEATHER_SUNNY_WINDY);
							Strcat(buffer, " ~s~set the weather to sunny windy.");
						}
						break;
						case ADMIN_COMMAND_WEATHER_SUNNY_WINDY_2:
						{
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_WEATHER, WEATHER_SUNNY_WINDY_2);
							Strcat(buffer, " ~s~set the weather to sunny windy 2.");
						}
						break;
						case ADMIN_COMMAND_WEATHER_DRIZZLE:
						{
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_WEATHER, WEATHER_DRIZZLE);
							Strcat(buffer, " ~s~set the weather to drizzle.");
						}
						break;
						case ADMIN_COMMAND_WEATHER_FOGGY:
						{
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_WEATHER, WEATHER_FOGGY);
							Strcat(buffer, " ~s~set the weather to foggy.");
						}
						break;
						case ADMIN_COMMAND_WEATHER_RAINING:
						{
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_WEATHER, WEATHER_RAINING);
							Strcat(buffer, " ~s~set the weather to raining.");
						}
						break;
						case ADMIN_COMMAND_WEATHER_LIGHTNING:
						{
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_WEATHER, WEATHER_LIGHTNING);
							Strcat(buffer, " ~s~set the weather to lightning.");
						}
						break;
						case ADMIN_COMMAND_WEATHER_CLOUDY:
						{
							SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_WEATHER, WEATHER_CLOUDY);
							Strcat(buffer, " ~s~set the weather to cloudy.");
						}
						break;
						case ADMIN_COMMAND_CHANGE_MODEL_MULTIPLAYER_SETTINGS:
						{
							change_player(GET_PLAYERSETTINGS_MODEL_CHOICE());
							SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE(iPlayer);
							Strcat(buffer, " ~s~changed you to your multiplayer model.");
						}
						break;
						case ADMIN_COMMAND_CHANGE_MODEL_STRIPPER_WHITE:
						{
							change_player(MODEL_F_Y_STRIPPERC01);
							Strcat(buffer, " ~s~changed you to a white stripper.");
						}
						break;
						case ADMIN_COMMAND_CHANGE_MODEL_STRIPPER_BLACK:
						{
							change_player(MODEL_F_Y_STRIPPERC02);
							Strcat(buffer, " ~s~changed you to a black stripper.");
						}
						break;
						case ADMIN_COMMAND_CHANGE_MODEL_LIL_JACOB:
						{
							change_player(MODEL_IG_LILJACOB);
							Strcat(buffer, " ~s~changed you to Lil Jacob.");
						}
						break;
						case ADMIN_COMMAND_CHANGE_MODEL_BRUCIE:
						{
							change_player(MODEL_IG_BRUCIE);
							Strcat(buffer, " ~s~changed you to Brucie.");
						}
						break;
						case ADMIN_COMMAND_CHANGE_MODEL_ROMAN:
						{
							change_player(MODEL_IG_ROMAN);
							Strcat(buffer, " ~s~changed you to Roman.");
						}
						break;
						case ADMIN_COMMAND_CHANGE_MODEL_DWAYNE:
						{
							change_player(MODEL_IG_DWAYNE);
							Strcat(buffer, " ~s~changed you to Dwayne.");
						}
						break;
						case ADMIN_COMMAND_CHANGE_MODEL_BADMAN:
						{
							change_player(MODEL_IG_BADMAN);
							Strcat(buffer, " ~s~changed you to Badman.");
						}
						break;
						case ADMIN_COMMAND_CHANGE_MODEL_DMITRI:
						{
							change_player(MODEL_IG_DMITRI);
							Strcat(buffer, " ~s~changed you to Dmitri.");
						}
						break;
						case ADMIN_COMMAND_CHANGE_MODEL_MICHELLE:
						{
							change_player(MODEL_IG_MICHELLE);
							Strcat(buffer, " ~s~changed you to Michelle.");
						}
						break;
						case ADMIN_COMMAND_CHANGE_MODEL_PACKIE:
						{
							change_player(MODEL_IG_PACKIE_MC);
							Strcat(buffer, " ~s~changed you to Packie.");
						}
						break;
						case ADMIN_COMMAND_CHANGE_MODEL_PLAYBOY:
						{
							change_player(MODEL_IG_PLAYBOY_X);
							Strcat(buffer, " ~s~changed you to Playboy.");
						}
						break;
						case ADMIN_COMMAND_CHANGE_MODEL_CLUCK:
						{
							SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_HELMET, true);
							change_player(MODEL_F_Y_FF_CLUCK_R);
							Strcat(buffer, " ~s~changed you to a Cluck.");
						}
						break;
						case ADMIN_COMMAND_CHANGE_MODEL_CLUCK_MALE:
						{
							SetBit(pPlayerOptionsBitSet, PLAYER_OPTION_HELMET, true);
							change_player(MODEL_M_Y_FF_CLUCK_R);
							Strcat(buffer, " ~s~changed you to a male Cluck.");
						}
						break;
						case ADMIN_COMMAND_CHANGE_MODEL_PRISONER:
						{
							change_player(MODEL_M_Y_PRISON);
							Strcat(buffer, " ~s~changed you to a prisoner.");
						}
						break;
						case ADMIN_COMMAND_CHANGE_MODEL_PRISONER_OLD:
						{
							change_player(MODEL_M_Y_PRISONAOM);
							Strcat(buffer, " ~s~changed you to a old prisoner.");
						}
						break;
						case ADMIN_COMMAND_CHANGE_MODEL_BROKEN:
						{
							change_player(MODEL_CS_MALLORIE_W);
							Strcat(buffer, " ~s~Broke your character.");
						}
						break;
						case ADMIN_COMMAND_CHANGE_MODEL_HOMO:
						{
							change_player(MODEL_M_M_GAYMID);
							Strcat(buffer, " ~s~changed you to a homosexual.");
						}
						break;
						case ADMIN_COMMAND_CHANGE_MODEL_HOMO_YOUNG:
						{
							change_player(MODEL_M_Y_GAYYOUNG);
							Strcat(buffer, " ~s~changed you to a young homosexual.");
						}
						break;
						case ADMIN_COMMAND_CHANGE_MODEL_FAT_COP:
						{
							change_player(MODEL_M_M_FATCOP_01);
							Strcat(buffer, " ~s~changed you to a fat cop.");
						}
						break;
						case ADMIN_COMMAND_CHANGE_MODEL_NOOSE_CROUCHED:
						{
							change_player(MODEL_M_Y_SWAT);
							Strcat(buffer, " ~s~changed you to N.O.O.S.E (Crouched).");
						}
						break;
						case ADMIN_COMMAND_CHANGE_MODEL_NOOSE:
						{
							change_player(MODEL_M_Y_NHELIPILOT);
							Strcat(buffer, " ~s~changed you to N.O.O.S.E.");
						}
						break;
						case ADMIN_COMMAND_CHANGE_MODEL_FBI:
						{
							change_player(MODEL_M_M_FBI);
							Strcat(buffer, " ~s~changed you to a fed.");
						}
						break;
						case ADMIN_COMMAND_CHANGE_MODEL_NORMAL_COP:
						{
							change_player(MODEL_M_Y_COP);
							Strcat(buffer, " ~s~changed you to a cop.");
						}
						break;
						case ADMIN_COMMAND_CHANGE_MODEL_TRAFFIC_COP:
						{
							change_player(MODEL_M_Y_COP_TRAFFIC);
							Strcat(buffer, " ~s~changed you to a traffic cop.");
						}
						break;
						case ADMIN_COMMAND_CHANGE_MODEL_FIRE_MAN:
						{
							change_player(MODEL_M_Y_FIREMAN);
							Strcat(buffer, " ~s~changed you to a fire man.");
						}
						break;
						case ADMIN_COMMAND_CHANGE_MODEL_FIRE_CHIEF:
						{
							change_player(MODEL_M_M_FIRECHIEF);
							Strcat(buffer, " ~s~changed you to a fire chief.");
						}
						break;
						case ADMIN_COMMAND_CHANGE_MODEL_SECURITY:
						{
							change_player(MODEL_M_M_SECURITYMAN);
							Strcat(buffer, " ~s~changed you to security.");
						}
						break;
						case ADMIN_COMMAND_CHANGE_MODEL_ARMOURED_SECURITY:
						{
							change_player(MODEL_M_M_ARMOURED);
							Strcat(buffer, " ~s~changed you to armoured security.");
						}
						break;
						case ADMIN_COMMAND_CHANGE_MODEL_BOUNCER:
						{
							change_player(MODEL_M_Y_CLUBFIT);
							Strcat(buffer, " ~s~changed you to a bouncer.");
						}
						break; 
						case ADMIN_COMMAND_CHANGE_MODEL_MALE_DOCTOR:
						{
							change_player(MODEL_M_M_DOCTOR_01);
							Strcat(buffer, " ~s~changed you to a male doctor.");
						}
						break;
						case ADMIN_COMMAND_CHANGE_MODEL_FEMALE_DOCTOR:
						{
							change_player(MODEL_F_Y_DOCTOR_01);
							Strcat(buffer, " ~s~changed you to a female doctor.");
						}
						break;
						case ADMIN_COMMAND_CHANGE_MODEL_FEMALE_NURSE:
						{
							change_player(MODEL_F_Y_NURSE);
							Strcat(buffer, " ~s~changed you to a female nurse.");
						}
						break;
					} //end of switch
					
					if(Command_ID == ADMIN_COMMAND_CHANGE_MODEL_SCRUB_DOCTOR)
					{
						change_player(MODEL_M_M_DOC_SCRUBS_01);
						Strcat(buffer, " ~s~changed you to a scrub doctor.");
					}
					else if(Command_ID == ADMIN_COMMAND_CHANGE_MODEL_DODGY_DOCTOR)
					{
						change_player(MODEL_M_M_DODGYDOC);
						Strcat(buffer, " ~s~changed you to a dodgy doctor.");
					}
					else if(Command_ID == ADMIN_COMMAND_CHANGE_MODEL_GANG_MEMBER_NORMAL)
					{
						change_player(MODEL_M_Y_GAFR_LO_01);
						Strcat(buffer, " ~s~changed you to a gang member.");
					}
					else if(Command_ID == ADMIN_COMMAND_CHANGE_MODEL_GANG_MEMBER_NORMAL_AND_COAT)
					{
						change_player(MODEL_M_Y_GAFR_LO_02);
						Strcat(buffer, " ~s~changed you to a gang member.");
					}
					else if(Command_ID == ADMIN_COMMAND_CHANGE_MODEL_GANG_MEMBER_EXPERIENCED)
					{
						change_player(MODEL_M_Y_GAFR_HI_01);
						Strcat(buffer, " ~s~changed you to a gang member.");
					}
					else if(Command_ID == ADMIN_COMMAND_CHANGE_MODEL_GANG_MEMBER_BOSS)
					{
						change_player(MODEL_M_Y_GAFR_HI_02);
						Strcat(buffer, " ~s~changed you to a gang member.");
					}
					else if(Command_ID == ADMIN_COMMAND_CHANGE_MODEL_BUSINESS_1)
					{
						change_player(MODEL_F_M_BUSINESS_01);
						Strcat(buffer, " ~s~changed you to Business 1.");
					}
					else if(Command_ID == ADMIN_COMMAND_CHANGE_MODEL_BUSINESS_2)
					{
						change_player(MODEL_F_M_BUSINESS_02);
						Strcat(buffer, " ~s~changed you to Business 2.");
					}
					else if(Command_ID == ADMIN_COMMAND_CHANGE_MODEL_BUSINESS_3)
					{
						change_player(MODEL_F_M_PBUSINESS);
						Strcat(buffer, " ~s~changed you to Business 3.");
					}
					else if(Command_ID == ADMIN_COMMAND_CHANGE_MODEL_BUSINESS_4)
					{
						change_player(MODEL_F_Y_BUSINESS_01);
						Strcat(buffer, " ~s~changed you to Business 4.");
					}
					else if(Command_ID == ADMIN_COMMAND_CHANGE_MODEL_BUSINESS_5)
					{
						change_player(MODEL_M_M_BUSINESS_02);
						Strcat(buffer, " ~s~changed you to Business 5.");
					}
					else if(Command_ID == ADMIN_COMMAND_CHANGE_MODEL_BUSINESS_6)
					{
						change_player(MODEL_M_M_BUSINESS_03);
						Strcat(buffer, " ~s~changed you to Business 6.");
					}
					else if(Command_ID == ADMIN_COMMAND_CHANGE_MODEL_BUSINESS_7)
					{
						change_player(MODEL_M_M_PBUSINESS_01);
						Strcat(buffer, " ~s~changed you to Business 7.");
					}
					else if(Command_ID == ADMIN_COMMAND_CHANGE_MODEL_BUSINESS_8)
					{
						change_player(MODEL_M_Y_BUSINESS_01);
						Strcat(buffer, " ~s~changed you to Business 8.");
					}
					else if(Command_ID == ADMIN_COMMAND_CHANGE_MODEL_BUSINESS_9)
					{
						change_player(MODEL_M_Y_BUSINESS_02);
						Strcat(buffer, " ~s~changed you to Business 9.");
					}
					else if(Command_ID == ADMIN_COMMAND_CHANGE_MODEL_RESET)
					{
						change_player(GET_PLAYERSETTINGS_MODEL_CHOICE());
						SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE(GET_PLAYER_ID());
						Strcat(buffer, " ~s~reset your character.");
					}
					
					else if(Command_ID == ADMIN_COMMAND_CHANGE_STRIDES_PLAYER)
					{
						pPlayer_strides("move_player");
						Strcat(buffer, " ~s~changed your strides to player.");
					}
					else if(Command_ID == ADMIN_COMMAND_CHANGE_STRIDES_MALE_FAT)
					{
						pPlayer_strides("move_m@fat");
						Strcat(buffer, " ~s~changed your strides to fat male.");
					}
					else if(Command_ID == ADMIN_COMMAND_CHANGE_STRIDES_FEMALE_FAT)
					{
						pPlayer_strides("move_f@fat");
						Strcat(buffer, " ~s~changed your strides to fat female.");
					}
					else if(Command_ID == ADMIN_COMMAND_CHANGE_STRIDES_FEMALE_SEXY)
					{
						pPlayer_strides("move_f@sexy");
						Strcat(buffer, " ~s~changed your strides to sexy female.");
					}
					else if(Command_ID == ADMIN_COMMAND_CHANGE_STRIDES_FEMALE_COWER)
					{
						pPlayer_strides("move_f@cower");
						Strcat(buffer, " ~s~changed your strides to cower female.");
					}
					else if(Command_ID == ADMIN_COMMAND_CHANGE_STRIDES_MALE_COWER)
					{
						pPlayer_strides("move_m@cower");
						Strcat(buffer, " ~s~changed your strides to cower male.");
					}
					else if(Command_ID == ADMIN_COMMAND_CHANGE_STRIDES_INJURED_GENERIC)
					{
						pPlayer_strides("move_injured_generic");
						Strcat(buffer, " ~s~changed your strides to generic injured.");
					}
					else if(Command_ID == ADMIN_COMMAND_CHANGE_STRIDES_MALE_SWAT)
					{
						pPlayer_strides("move_m@swat");
						Strcat(buffer, " ~s~changed your strides to male swat.");
					}
					else if(Command_ID == ADMIN_COMMAND_CHANGE_STRIDES_MALE_BUM)
					{
						pPlayer_strides("move_m@bum");
						Strcat(buffer, " ~s~changed your strides to male bum.");
					}
					else if(Command_ID == ADMIN_COMMAND_CHANGE_STRIDES_MALE_CUFFED)
					{
						pPlayer_strides("move_m@h_cuffed");	
						Strcat(buffer, " ~s~changed your strides to male cuffed.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_DANCE_1)
					{
						play_anims("missstripclublo","pole_dance_a",0,0);
						Strcat(buffer, " ~s~is making you pole dance.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_DANCE_2)
					{
						play_anims("amb@dance_maleidl_a","loop_a",0,0);
						Strcat(buffer, " ~s~is making you dance.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_DANCE_3)
					{
						play_anims("amb@dance_maleidl_b","loop_b",0,0);
						Strcat(buffer, " ~s~is making you dance.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_DANCE_4)
					{
						play_anims("amb@dance_maleidl_c","loop_c",0,0);
						Strcat(buffer, " ~s~is making you dance.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_DANCE_5)
					{
						play_anims("amb@dance_maleidl_d","loop_d",0,0); 
						Strcat(buffer, " ~s~is making you dance.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_DANCE_6)
					{
						play_anims("amb@dance_femidl_a","loop_a",0,0); 
						Strcat(buffer, " ~s~is making you dance.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_DANCE_7)
					{
						play_anims("amb@dance_femidl_b","loop_b",0,0);
						Strcat(buffer, " ~s~is making you dance.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_DANCE_8)
					{
						play_anims("amb@dance_femidl_c","loop_c",0,0); 
						Strcat(buffer, " ~s~is making you dance.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_HELI_1)
					{
						play_anims("missbell4","land_on_heli",99999,1);
						Strcat(buffer, " ~s~is making you play heli anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_HELI_2)
					{
						play_anims("missfinale2d","kicked_from_heli",99999,1);
						Strcat(buffer, " ~s~is making you play heli anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_HELI_3)
					{
						play_anims("missfinale2p","bike2heli_idle2",99999,1); 
						Strcat(buffer, " ~s~is making you play heli anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_HELI_4)
					{
						play_anims("missfinale2d","land_on_heli",99999,1);
						Strcat(buffer, " ~s~is making you play heli anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_HELI_5)
					{
						play_anims("missfinale2d","hang_on_heli",99999,1);
						Strcat(buffer, " ~s~is making you play heli anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_HELI_6)
					{
						play_anims("missfinale2d","heli_idle",99999,1);
						Strcat(buffer, " ~s~is making you play heli anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_HELI_7)
					{
						play_anims("missfinale2p","bike2heli_climb1",99999,1);
						Strcat(buffer, " ~s~is making you play heli anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_HELI_8)
					{
						play_anims("missfinale2p","bike2heli",99999,1); 
						Strcat(buffer, " ~s~is making you play heli anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_HELI_9)
					{
						play_anims("missfinale2p_boat","boat2heli_p4",99999,1);
						Strcat(buffer, " ~s~is making you play heli anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_SEX_1)
					{
						play_anims("misscar_sex","f_blowjob_outro",0,0);
						Strcat(buffer, " ~s~is making you play sex anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_SEX_2)
					{
						play_anims("misscar_sex","f_blowjob_intro_low",0,0);
						Strcat(buffer, " ~s~is making you play sex anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_SEX_3)
					{
						play_anims("misscar_sex","f_blowjob_outro_low",0,0);
						Strcat(buffer, " ~s~is making you play sex anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_SEX_4)
					{
						play_anims("misscar_sex","f_blowjob_loop",0,0);
						Strcat(buffer, " ~s~is making you play sex anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_SEX_5)
					{
						play_anims("misscar_sex","f_handjob_loop",0,0);
						Strcat(buffer, " ~s~is making you play sex anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_SEX_6)
					{
						play_anims("misscar_sex","f_handjob_loop_low",0,0); 
						Strcat(buffer, " ~s~is making you play sex anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_SEX_7)
					{
						play_anims("misscar_sex","f_sex_intro",0,0);
						Strcat(buffer, " ~s~is making you play sex anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_SEX_8)
					{
						play_anims("misscar_sex","f_sex_loop",0,0);
						Strcat(buffer, " ~s~is making you play sex anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_SEX_9)
					{
						play_anims("misscar_sex","f_sex_loop_low",0,0);
						Strcat(buffer, " ~s~is making you play sex anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_SEX_10)
					{
						play_anims("amb@dating","car_kiss_ds",0,0);
						Strcat(buffer, " ~s~is making you play sex anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_SEX_11)
					{
						play_anims("amb@dating","car_kiss_ps",0,0);
						Strcat(buffer, " ~s~is making you play sex anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_SEX_12)
					{
						play_anims("amb@dating","player_kiss",0,0);
						Strcat(buffer, " ~s~is making you play sex anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_SEX_13)
					{
						play_anims("amb@pimps_pros","girl_hug",0,0);
						Strcat(buffer, " ~s~is making you play sex anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_BIKE_1)
					{
						AnimationPlayer(true,"missfinale2d","jump_on_heli_alt",Animationloop,1);
						Strcat(buffer, " ~s~is making you play bike anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_BIKE_2)
					{
						AnimationPlayer(true,"missfinale2d","kick_inside_heli",Animationloop,1);
						Strcat(buffer, " ~s~is making you play bike anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_BIKE_3)
					{
						AnimationPlayer(true,"missfinale2p","leg_swing",Animationloop,1); 
						Strcat(buffer, " ~s~is making you play bike anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_BIKE_4)
					{
						AnimationPlayer(true,"missfinale2p_boat","boat2heli_p1",Animationloop,1);
						Strcat(buffer, " ~s~is making you play bike anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_BIKE_5)
					{
						AnimationPlayer(true,"missfinale2p_boat","boat2heli_p2",Animationloop,1); 
						Strcat(buffer, " ~s~is making you play bike anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_BIKE_6)
					{
						AnimationPlayer(true,"missfinale2p_boat","boat2heli_p3",Animationloop,1); 
						Strcat(buffer, " ~s~is making you play bike anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_SLIDING_1)
					{
						AnimationPlayer(true,"amb@carry_create","walk_create",Animationloop,1);   //Sliding forward
						Strcat(buffer, " ~s~is making you play sliding anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_SLIDING_2)
					{
						AnimationPlayer(true,"amb@carry_idles","walk_idle_a",Animationloop,1); //Sliding far forward hand up
						Strcat(buffer, " ~s~is making you play sliding anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_SLIDING_3)
					{
						AnimationPlayer(true,"amb@carry_idles","walk_idle_c",Animationloop,1); //Sliding far forward
						Strcat(buffer, " ~s~is making you play sliding anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_SLIDING_4)
					{
						AnimationPlayer(true,"amb@flee_a","run_flee_lookaround_b",Animationloop,1);  //Running away funny looking around
						Strcat(buffer, " ~s~is making you play sliding anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_SWIMMING_1)
					{
						AnimationPlayer(true,"swimming","idle",Animationloop,1);
						Strcat(buffer, " ~s~is making you play swim anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_SWIMMING_2)
					{
						AnimationPlayer(true,"swimming","run",Animationloop,1); 	
						Strcat(buffer, " ~s~is making you play swim anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_SWIMMING_3)
					{
						AnimationPlayer(true,"swimming","walk",Animationloop,1); 	
						Strcat(buffer, " ~s~is making you play swim anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_SWIMMING_4)
					{
						AnimationPlayer(true,"swimming","walk_strafe_b",Animationloop,1);
						Strcat(buffer, " ~s~is making you play swim anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_SITTING_1)
					{
						AnimationPlayer(true,"amb@default","preacher_default",Animationloop,1); 
						Strcat(buffer, " ~s~is making you play sitting anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_SITTING_2)
					{
						AnimationPlayer(true,"amb@comedy","cheer_b",Animationloop,1);  
						Strcat(buffer, " ~s~is making you play sitting anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_SITTING_3)
					{
						AnimationPlayer(true,"amb@comedy","clap_a",Animationloop,1);  
						Strcat(buffer, " ~s~is making you play sitting anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_SITTING_4)
					{
						AnimationPlayer(true,"amb@comedy","jeer_a",Animationloop,1);
						Strcat(buffer, " ~s~is making you play sitting anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_SITTING_5)
					{
						AnimationPlayer(true,"amb@comedy","laugh_f",Animationloop,1);
						Strcat(buffer, " ~s~is making you play sitting anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_PAUSE_1)
					{
						AnimationPlayer(true,"amb@cold","pull_up_collar",Animationloop,1);
						Strcat(buffer, " ~s~is making you play pause anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_PAUSE_2)
					{
						AnimationPlayer(true,"amb@cold","stand_blowhands",Animationloop,1);
						Strcat(buffer, " ~s~is making you play pause anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_PAUSE_3)
					{
						AnimationPlayer(true,"amb@cold","stand_rubarms",Animationloop,1);
						Strcat(buffer, " ~s~is making you play pause anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_PAUSE_4)
					{
						AnimationPlayer(true,"amb@default","bouncer_default",Animationloop,1);
						Strcat(buffer, " ~s~is making you play pause anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_PAUSE_5)
					{
						AnimationPlayer(true,"amb@hurry_head","walk_b",Animationloop,1); 
						Strcat(buffer, " ~s~is making you play pause anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_GESTURE_1)
					{
						AnimationPlayer(true,"amb@park_taichi_a","taichi01",Animationloop,1);
						Strcat(buffer, " ~s~is making you play fitness anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_GESTURE_2)
					{
						AnimationPlayer(true,"amb@park_taichi_b","taichi02",Animationloop,1);
						Strcat(buffer, " ~s~is making you play fitness anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_GESTURE_3)
					{
						AnimationPlayer(true,"amb@hooker","idle_a",Animationloop,1);
						Strcat(buffer, " ~s~is making you play gesture anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_GESTURE_4)
					{
						AnimationPlayer(true,"amb@hooker","idle_b",Animationloop,1);
						Strcat(buffer, " ~s~is making you play gesture anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_GESTURE_5)
					{
						AnimationPlayer(true,"amb@hooker","idle_c",Animationloop,1);
						Strcat(buffer, " ~s~is making you play gesture anims.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_GESTURE_6)
					{
						AnimationPlayer(true,"missbrucie1","piss_interupted",Animationloop,1);
						Strcat(buffer, " ~s~is making you piss.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_GESTURE_7)
					{
						AnimationPlayer(true,"amb@smoking","stand_smoke",Animationloop,1);
						Strcat(buffer, " ~s~is making you smoke.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_GESTURE_8)
					{
						AnimationPlayer(true,"amb@drunk","wasted_seated",0,0x20);
						Strcat(buffer, " ~s~is making you drunk.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_GESTURE_9)
					{
						AnimationPlayer(true,"amb@drunk","wasteda",Animationloop,1);
						Strcat(buffer, " ~s~got you drunk as f.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_GESTURE_10)
					{
						AnimationPlayer(true,"misskbtruck","crawl_fwd_loop",99999,1);
						Strcat(buffer, " ~s~is making you crawl.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_GESTURE_12)
					{
						delete_objects_on_ped(pPlayer);
						attach_object_to_player(pPlayer, -596812191,BONE_HEAD, -0.0050, 0.0896, 0.0172, 0.0900, 1.5300,3.150,0);
						AnimationPlayer(true,"amb@default","telescope_default",Animationloop,1);	
						Strcat(buffer, " ~s~is making you look.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_GESTURE_13)
					{
						AnimationPlayer(true,"ragdoll_trans","preacher_trans",Animationloop,1);
						Strcat(buffer, " ~s~is making you preach.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_GESTURE_14)
					{
						AnimationPlayer(true,"amb@nightclub_ext","street_argue_f_a",Animationloop,1);
						Strcat(buffer, " ~s~is making you argue.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_GESTURE_15)
					{
						AnimationPlayer(true,"amb@pimps_pros","car_proposition",Animationloop,1); 
						Strcat(buffer, " ~s~is making you seduce.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_GESTURE_16)
					{
						AnimationPlayer(true,"amb@pimps_pros","rejection",Animationloop,1);
						Strcat(buffer, " ~s~is making you reject.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_GESTURE_17)
					{
						AnimationPlayer(true,"audio_motionbuilder","walk",Animationloop,1);
						Strcat(buffer, " ~s~is making you fake-freeze.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_GESTURE_18)
					{
						AnimationPlayer(true,"taxi_hail","fuck_u",Animationloop,1);
						Strcat(buffer, " ~s~is making you say fuck u.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_GESTURE_19)
					{
						AnimationPlayer(true,"ped","handsup",Animationloop,1); 
						Strcat(buffer, " ~s~is making you say surrender.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_GESTURE_20)
					{
						AnimationPlayer(true,"busted","idle_2_hands_up",0,0x20); 
						Strcat(buffer, " ~s~is making you say surrender.");
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_GESTURE_21)
					{
						AnimationPlayer(true,"missbernie1","default_idle",Animationloop,1);	
						Strcat(buffer, " ~s~put you on your knees.");
					}


					else if(Command_ID == ADMIN_COMMAND_RAGDOLL)
					{
						SWITCH_PED_TO_RAGDOLL(pPlayer,20000,30000,false,false,false,false);
						Strcat(buffer, " ~s~made you ragdoll.");

					}
					else if(Command_ID == ADMIN_COMMAND_CLEAR_CHAR_TASKS)
					{
						CLEAR_CHAR_TASKS_IMMEDIATELY(pPlayer);
						Strcat(buffer, " ~s~cleared your tasks.");
					}
					else if(Command_ID == ADMIN_COMMAND_CLEAR_CHAR_TASKS_AND_DELETE_OBJECTS_ON_SELF || (Command_ID >= ADMIN_COMMAND_PLAY_ANIM_TOOL_LOWEST && Command_ID <= ADMIN_COMMAND_PLAY_ANIM_TOOL_HIGHEST))
					{
						delete_objects_on_ped(pPlayer);
						CLEAR_CHAR_TASKS_IMMEDIATELY(pPlayer);
						if(Command_ID == ADMIN_COMMAND_CLEAR_CHAR_TASKS_AND_DELETE_OBJECTS_ON_SELF)
						{
							Strcat(buffer, " ~s~cleared your tasks & attachments.");
						}
					}
					//DO NOT PUT ELSE IF!! we need code above to clear shit every time instead of it being duplicated!
					if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_TOOL_1)
					{
						attach_object_to_player(pPlayer,-1813753615,BONE_RIGHT_HAND, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,0.000,0);
						AnimationPlayer(true,"amb@default","ff_sweep_default",Animationloop,1);	
						Strcat(buffer, " ~s~is making you sweep.");
						//delete is managed above :D
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_TOOL_2)
					{
						attach_object_to_player(pPlayer,1892875956,BONE_RIGHT_HAND, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,0.0000,0);
						AnimationPlayer(true,"amb@default","rake_default",Animationloop,1);	
						Strcat(buffer, " ~s~is making you rake.");
						//delete is managed above :D
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_TOOL_3)
					{
						attach_object_to_player(pPlayer, 2113166995,BONE_RIGHT_HAND, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,0.0000,0);
						AnimationPlayer(true,"amb@default","sledge_default",Animationloop,1);		
						Strcat(buffer, " ~s~is making you hammer.");
						//delete is managed above :D
					}
					else if(Command_ID == ADMIN_COMMAND_PLAY_ANIM_TOOL_4)
					{
						attach_object_to_player(pPlayer, 1234161243,BONE_RIGHT_HAND, 0, 0.0061,-0.0086, 0.0000, 0.0000,5.9600,0);
						AnimationPlayer(true,"amb@drill_create","drill_create",Animationloop,1);	
						Strcat(buffer, " ~s~is making you drill.");
						//delete is managed above :D
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_BANSHEE)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_BANSHEE);
						Strcat(buffer, " ~s~made you spawn a Banshee.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_COMET)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_COMET);
						Strcat(buffer, " ~s~made you spawn a Comet.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_COQUETTE)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_COQUETTE);
						Strcat(buffer, " ~s~made you spawn a Coquette.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_FELTZER)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_FELTZER);
						Strcat(buffer, " ~s~made you spawn a Feltzer.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_INFERNUS)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_INFERNUS);
						Strcat(buffer, " ~s~made you spawn a Infernus.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_SULTAN)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_SULTAN);
						Strcat(buffer, " ~s~made you spawn a Sultan.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_SENTINEL)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_SENTINEL);
						Strcat(buffer, " ~s~made you spawn a Sentinel.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_SULTANRS)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_SULTANRS);
						Strcat(buffer, " ~s~made you spawn a Sultan RS.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_SUPERGT)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_SUPERGT);
						Strcat(buffer, " ~s~made you spawn a Super GT.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_TURISMO)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_TURISMO);
						Strcat(buffer, " ~s~made you spawn a Turismo.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_BUFFALO)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_BUFFALO);
						Strcat(buffer, " ~s~made you spawn a Buffalo.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_F620)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_F620);
						Strcat(buffer, " ~s~made you spawn a F620.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_BLISTA)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_BLISTA);
						Strcat(buffer, " ~s~made you spawn a Blista.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_FORTUNE)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_FORTUNE);
						Strcat(buffer, " ~s~made you spawn a Fortune.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_FUTO)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_FUTO);
						Strcat(buffer, " ~s~made you spawn a Futo.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_URANUS)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_URANUS);
						Strcat(buffer, " ~s~made you spawn a Uranus.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_SUPERD)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_SUPERD);
						Strcat(buffer, " ~s~made you spawn a Super Diamond.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_SUPERD2)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_SUPERD2);
						Strcat(buffer, " ~s~made you spawn a Super Diamond 2.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_ADMIRAL)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_ADMIRAL);
						Strcat(buffer, " ~s~made you spawn a Admiral.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_CHAVOS)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_CHAVOS);
						Strcat(buffer, " ~s~made you spawn a Chavos.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_COGNOSCENTI)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_COGNOSCENTI);
						Strcat(buffer, " ~s~made you spawn a Cognoscenti.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_DF8)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_DF8);
						Strcat(buffer, " ~s~made you spawn a DF8.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_DILETTANTE)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_DILETTANTE);
						Strcat(buffer, " ~s~made you spawn a Dilettante.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_EMPEROR)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_EMPEROR);
						Strcat(buffer, " ~s~made you spawn a Emperor.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_ESPERANTO)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_ESPERANTO);
						Strcat(buffer, " ~s~made you spawn a Esperanto.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_FEROCI)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_FEROCI);
						Strcat(buffer, " ~s~made you spawn a Feroci.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_HAKUMAI)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_HAKUMAI);
						Strcat(buffer, " ~s~made you spawn a Hakumai.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_INGOT)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_INGOT);
						Strcat(buffer, " ~s~made you spawn a Ingot.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_INTRUDER)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_INTRUDER);
						Strcat(buffer, " ~s~made you spawn a Intruder.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_LOKUS)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_LOKUS);
						Strcat(buffer, " ~s~made you spawn a Lokus.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_MARBELLA)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_MARBELLA);
						Strcat(buffer, " ~s~made you spawn a Marbella.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_MERIT)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_MERIT);
						Strcat(buffer, " ~s~made you spawn a Merit.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_ORACLE)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_ORACLE);
						Strcat(buffer, " ~s~made you spawn a Oracle.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_PINNACLE)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_PINNACLE);
						Strcat(buffer, " ~s~made you spawn a Pinnacle.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_PMP600)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_PMP600);
						Strcat(buffer, " ~s~made you spawn a PMP600.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_PREMIER)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_PREMIER);
						Strcat(buffer, " ~s~made you spawn a Premier.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_PRES)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_PRES);
						Strcat(buffer, " ~s~made you spawn a Presidente.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_PRIMO)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_PRIMO);
						Strcat(buffer, " ~s~made you spawn a Primo.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_ROM)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_ROM);
						Strcat(buffer, " ~s~made you spawn a Roman's Taxi.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_SCHAFTER)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_SCHAFTER);
						Strcat(buffer, " ~s~made you spawn a Schafter.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_SOLAIR)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_SOLAIR);
						Strcat(buffer, " ~s~made you spawn a Solair.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_STRATUM)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_STRATUM);
						Strcat(buffer, " ~s~made you spawn a Stratum.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_VINCENT)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_VINCENT);
						Strcat(buffer, " ~s~made you spawn a Vincent.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_WASHINGTON)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_WASHINGTON);
						Strcat(buffer, " ~s~made you spawn a Washington.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_WILLARD)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_WILLARD);
						Strcat(buffer, " ~s~made you spawn a Willard.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_SERRANO)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_SERRANO);
						Strcat(buffer, " ~s~made you spawn a Serranno.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_SCHAFTER2)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_SCHAFTER2);
						Strcat(buffer, " ~s~made you spawn a Schafter 2.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_BUCCANEER)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_BUCCANEER);
						Strcat(buffer, " ~s~made you spawn a Bucanneer.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_DUKES)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_DUKES);
						Strcat(buffer, " ~s~made you spawn a Dukes.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_FACTION)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_FACTION);
						Strcat(buffer, " ~s~made you spawn a Faction.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_MANANA)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_MANANA);
						Strcat(buffer, " ~s~made you spawn a Manana.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_PEYOTE)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_PEYOTE);
						Strcat(buffer, " ~s~made you spawn a Peyote.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_RUINER)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_RUINER);
						Strcat(buffer, " ~s~made you spawn a Ruiner.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_SABRE)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_SABRE);
						Strcat(buffer, " ~s~made you spawn a Sabre.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_SABREGT)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_SABREGT);
						Strcat(buffer, " ~s~made you spawn a Sabre GT.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_STALION)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_STALION);
						Strcat(buffer, " ~s~made you spawn a Stallion.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_VIGERO)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_VIGERO);
						Strcat(buffer, " ~s~made you spawn a Vigero.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_VIRGO)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_VIRGO);
						Strcat(buffer, " ~s~made you spawn a Virgo.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_VOODOO)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_VOODOO);
						Strcat(buffer, " ~s~made you spawn a Voodoo.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_TAMPA)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_TAMPA);
						Strcat(buffer, " ~s~made you spawn a Tampa.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_BOBCAT)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_BOBCAT);
						Strcat(buffer, " ~s~made you spawn a Bobcat.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_CAVALCADE)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_CAVALCADE);
						Strcat(buffer, " ~s~made you spawn a Cavalcade.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_FXT)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_FXT);
						Strcat(buffer, " ~s~made you spawn a Cavalcade FXT.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_E109)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_E109);
						Strcat(buffer, " ~s~made you spawn a CONTENDER.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_HABANERO)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_HABANERO);
						Strcat(buffer, " ~s~made you spawn a Habanero.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_HUNTLEY)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_HUNTLEY);
						Strcat(buffer, " ~s~made you spawn a Huntley Sport.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_LANDSTALKER)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_LANDSTALKER);
						Strcat(buffer, " ~s~made you spawn a Landstalker.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_MINIVAN)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_MINIVAN);
						Strcat(buffer, " ~s~made you spawn a Minivan.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_MOONBEAM)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_MOONBEAM);
						Strcat(buffer, " ~s~made you spawn a Moonbeam.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_PATRIOT)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_PATRIOT);
						Strcat(buffer, " ~s~made you spawn a Patriot.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_PERENNIAL)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_PERENNIAL);
						Strcat(buffer, " ~s~made you spawn a Perennial.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_RANCHER)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_RANCHER);
						Strcat(buffer, " ~s~made you spawn a Rancher.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_REBLA)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_REBLA);
						Strcat(buffer, " ~s~made you spawn a Rebla.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_CAVALCADE2)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_CAVALCADE2);
						Strcat(buffer, " ~s~made you spawn a Cavalcade 2.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_EMPEROR2)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_EMPEROR2);
						Strcat(buffer, " ~s~made you spawn a Emperor 2.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_SABRE2)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_SABRE2);
						Strcat(buffer, " ~s~made you spawn a Sabre 2.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_VIGERO2)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_VIGERO2);
						Strcat(buffer, " ~s~made you spawn a Vigero 2.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_BUS)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_BUS);
						Strcat(buffer, " ~s~made you spawn a Bus.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_CABBY)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_CABBY);
						Strcat(buffer, " ~s~made you spawn a Cabby.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_ROMERO)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_ROMERO);
						Strcat(buffer, " ~s~made you spawn a Romero.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_TAXI)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_TAXI);
						Strcat(buffer, " ~s~made you spawn a Taxi.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_TAXI2)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_TAXI2);
						Strcat(buffer, " ~s~made you spawn a Taxi 2.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_TRASH)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_TRASH);
						Strcat(buffer, " ~s~made you spawn a Trashmaster.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_STRETCH)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_STRETCH);
						Strcat(buffer, " ~s~made you spawn a Stretch.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_LIMO2)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_LIMO2);
						Strcat(buffer, " ~s~made you spawn a Limo 2.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_AMBULANCE)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_AMBULANCE);
						Strcat(buffer, " ~s~made you spawn a Ambulance.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_FBI)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_FBI);
						Strcat(buffer, " ~s~made you spawn a FIB Buffalo.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_FIRETRUK)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_FIRETRUK);
						Strcat(buffer, " ~s~made you spawn a Fire truck.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_NOOSE)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_NOOSE);
						Strcat(buffer, " ~s~made you spawn a Noose Cruiser.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_POLICE)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_POLICE);
						Strcat(buffer, " ~s~made you spawn a Police Cruiser.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_POLICE2)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_POLICE2);
						Strcat(buffer, " ~s~made you spawn a Polica Patrol.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_POLPATRIOT)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_POLPATRIOT);
						Strcat(buffer, " ~s~made you spawn a Noose Patriot.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_PSTOCKADE)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_PSTOCKADE);
						Strcat(buffer, " ~s~made you spawn a Police Stockade.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_APC)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_APC);
						Strcat(buffer, " ~s~made you spawn a APC.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_POLICE3)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_POLICE3);
						Strcat(buffer, " ~s~made you spawn a Police 3.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_POLICE4)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_POLICE4);
						Strcat(buffer, " ~s~made you spawn a Police 4.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_POLICEB)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_POLICEB);
						Strcat(buffer, " ~s~made you spawn a Police B.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_POLICEW)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_POLICEW);
						Strcat(buffer, " ~s~made you spawn a Police W.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_AIRTUG)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_AIRTUG);
						Strcat(buffer, " ~s~made you spawn a Airtug.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_BENSON)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_BENSON);
						Strcat(buffer, " ~s~made you spawn a Benson.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_BIFF)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_BIFF);
						Strcat(buffer, " ~s~made you spawn a Biff.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_BOXVILLE)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_BOXVILLE);
						Strcat(buffer, " ~s~made you spawn a Boxville.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_BURRITO)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_BURRITO);
						Strcat(buffer, " ~s~made you spawn a Burrito.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_BURRITO2)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_BURRITO2);
						Strcat(buffer, " ~s~made you spawn a Laundromat.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_FEROCI2)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_FEROCI2);
						Strcat(buffer, " ~s~made you spawn a Feroci 2.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_FLATBED)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_FLATBED);
						Strcat(buffer, " ~s~made you spawn a Flatbed.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_FORKLIFT)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_FORKLIFT);
						Strcat(buffer, " ~s~made you spawn a Forklift.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_MULE)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_MULE);
						Strcat(buffer, " ~s~made you spawn a Mule.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_MRTASTY)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_MRTASTY);
						Strcat(buffer, " ~s~made you spawn a Mr. Tasty.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_PACKER)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_PACKER);
						Strcat(buffer, " ~s~made you spawn a Packer.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_PERENNIAL2)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_PERENNIAL2);
						Strcat(buffer, " ~s~made you spawn a Perennial 2.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_PHANTOM)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_PHANTOM);
						Strcat(buffer, " ~s~made you spawn a Phantom.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_PONY)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_PONY);
						Strcat(buffer, " ~s~made you spawn a Pony.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_RIPLEY)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_RIPLEY);
						Strcat(buffer, " ~s~made you spawn a Ripley.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_SPEEDO)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_SPEEDO);
						Strcat(buffer, " ~s~made you spawn a Speedo.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_STOCKADE)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_STOCKADE);
						Strcat(buffer, " ~s~made you spawn a Securicar.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_STEED)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_STEED);
						Strcat(buffer, " ~s~made you spawn a Steed.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_YANKEE)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_YANKEE);
						Strcat(buffer, " ~s~made you spawn a Yankee.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_CADDY)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_CADDY);
						Strcat(buffer, " ~s~made you spawn a Caddy.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_BOBBER)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_BOBBER);
						Strcat(buffer, " ~s~made you spawn a Freeway.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_FAGGIO)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_FAGGIO);
						Strcat(buffer, " ~s~made you spawn a Faggio.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_HELLFURY)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_HELLFURY);
						Strcat(buffer, " ~s~made you spawn a Hellfury.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_NRG900)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_NRG900);
						Strcat(buffer, " ~s~made you spawn a NRG900.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_PCJ)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_PCJ);
						Strcat(buffer, " ~s~made you spawn a PCJ 600.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_SANCHEZ)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_SANCHEZ);
						Strcat(buffer, " ~s~made you spawn a Sanchez.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_ZOMBIEB)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_ZOMBIEB);
						Strcat(buffer, " ~s~made you spawn a Zombie.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_AKUMA)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_AKUMA);
						Strcat(buffer, " ~s~made you spawn a Akuma.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_BATI2)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_BATI2);
						Strcat(buffer, " ~s~made you spawn a Bati 2.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_DOUBLE)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_DOUBLE);
						Strcat(buffer, " ~s~made you spawn a Double.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_FAGGIO2)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_FAGGIO2);
						Strcat(buffer, " ~s~made you spawn a Faggio 2.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_HAKUCHOU)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_HAKUCHOU);
						Strcat(buffer, " ~s~made you spawn a Hakuchou.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_HEXER)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_HEXER);
						Strcat(buffer, " ~s~made you spawn a Hexer.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_VADER)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_VADER);
						Strcat(buffer, " ~s~made you spawn a Vader.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_DINGHY)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_DINGHY);
						Strcat(buffer, " ~s~made you spawn a Dinghy.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_JETMAX)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_JETMAX);
						Strcat(buffer, " ~s~made you spawn a Jetmax.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_MARQUIS)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_MARQUIS);
						Strcat(buffer, " ~s~made you spawn a Marquis.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_PREDATOR)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_PREDATOR);
						Strcat(buffer, " ~s~made you spawn a Police Predator.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_REEFER)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_REEFER);
						Strcat(buffer, " ~s~made you spawn a Reefer.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_SQUALO)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_SQUALO);
						Strcat(buffer, " ~s~made you spawn a Squalo.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_TROPIC)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_TROPIC);
						Strcat(buffer, " ~s~made you spawn a Tropic.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_TUGA)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_TUGA);
						Strcat(buffer, " ~s~made you spawn a Tug.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_BLADE)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_BLADE);
						Strcat(buffer, " ~s~made you spawn a Blade.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_FLOATER)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_FLOATER);
						Strcat(buffer, " ~s~made you spawn a Floater.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_SMUGGLER)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_SMUGGLER);
						Strcat(buffer, " ~s~made you spawn a Smuggler.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_ANNIHILATOR)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_ANNIHILATOR);
						Strcat(buffer, " ~s~made you spawn a Annihilator.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_MAVERICK)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_MAVERICK);
						Strcat(buffer, " ~s~made you spawn a Maverick.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_POLMAV)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_POLMAV);
						Strcat(buffer, " ~s~made you spawn a Police Maverick.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_TOURMAV)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_TOURMAV);
						Strcat(buffer, " ~s~made you spawn a Helitours Maverick.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_BUZZARD)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_BUZZARD);
						Strcat(buffer, " ~s~made you spawn a Buzzard.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_SKYLIFT)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_SKYLIFT);
						Strcat(buffer, " ~s~made you spawn a Skylift.");
					}
					else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_SWIFT)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_SWIFT);
						Strcat(buffer, " ~s~made you spawn a Swift.");
					}
					/*else if(Command_ID == ADMIN_COMMAND_SPAWN_VEH_)
					{
						MD_VEHICLE_SPAWNER_ON_ID(iPlayer,MODEL_);
						Strcat(buffer, " ~s~made you spawn a .");
					}*/
					
					
					if(!silent_mode)
					{
						Alert(buffer, true); //yep, gotta add em to brief for proof! will only show once!
					}
					break;
					//perhaps for strings, odd number always is enable something, even number is always disable something?
				}
			}
			
			/*
			if(Command_ID == 1)
			{
				char* buffer[32];
				Strcpy(buffer, "Admin command 1 received from ");
				PLAYER_NAME_WITH_COLOUR(adminIndex, &buffer);
				Alert(buffer, true);
			}
			*/
			
			
			
			
			break;
		}
	}
}

void ADMIN_COMMANDS_LISTEN(void)
{
	int i,tmp_ped;
	float x,y,z;
	for(i = 0; i < MAX_PLAYERS; i++)
	{
		#ifdef Developer
		if(Invalid_Player(i) || !SHOULD_I_LISTEN_FOR_ADMIN_COMMANDS_FROM_PLAYER(i)) continue;
		#else
		if(i == iPlayer || Invalid_Player(i) || !SHOULD_I_LISTEN_FOR_ADMIN_COMMANDS_FROM_PLAYER(i)) continue;
		#endif
		if(!PLAYER_HAS_CHAR(i)) continue;
		GET_PLAYER_CHAR(i,&tmp_ped);
		if(!DOES_CHAR_EXIST(tmp_ped)) continue;
		GET_CHAR_COORDINATES(tmp_ped, &x,&y,&z);
		//z = (z - 1.0f);
	//	z = (z - 1);
		if(z > (-35.0f) && z < (-25.0f))
		//if(z > (-10.0f) && z < (0.0f))
		{
			//if(x > 0.0f && x < 3500.0f)
			if(x > -3250.0f && x < 3500.0f)
			{
				if(y > TO_FLOAT((iPlayer * 10) - 5) && y < TO_FLOAT((iPlayer * 10) + 5))
				{
				//void ADMIN_COMMAND_X_REGISTER(int * adminIndex, int * adminsChar, float * x, const bool silent_mode)
					ADMIN_COMMAND_X_REGISTER(i, tmp_ped, x, false); //normal mode
					//ADMIN_COMMAND_X_REGISTER(i,tmp_ped,x,false); //normal mode
				}
				else if(Is_Developer(i) && y > TO_FLOAT( (((iPlayer + MAX_PLAYERS) * 10) - 5) ) && y < TO_FLOAT( (((iPlayer + MAX_PLAYERS) * 10) + 5) ))
				{
					ADMIN_COMMAND_X_REGISTER(i, tmp_ped, x, true); //silent mode 
					//ADMIN_COMMAND_X_REGISTER(i,tmp_ped,x,true); //silent mode 
				}
			}
		}
	}
}



void Admin_Loop(void)
{
	#ifdef Admin
	if(AdminCommandTick != 0) //Sending Command
	{
		HIDE_HUD_AND_RADAR_THIS_FRAME();
		//Set player control false to hide blip?, must test if this will work properly
	}
	/*uint AdminByteSet;
enum AdminOnlyByteSet{
	ADMIN_BYTE_SET_COMMAND_TICK_LEVEL = 0, //set to 0 by default
	ADMIN_BYTE_SET_INDEX_ACTING_UPON = 1, //MAX_PLAYERS for disabled..
	ADMIN_BYTE_SET_TICK_DELAY_LEVEL = 2, //set to 0 by default..
};
int SpectatePlayerIndex, SpectatePreviousPlayerIndex, AttachPlayerIndex, AttachType;
	GetByteSet(SpectateAndAttachByteSet,&SpectatePlayerIndex,&SpectatePreviousPlayerIndex,&AttachPlayerIndex,&AttachType);
	SpectatePlayerIndex = MAX_PLAYERS;
	SpectatePreviousPlayerIndex = MAX_PLAYERS;
	AttachType = 0;
	AttachPlayerIndex = MAX_PLAYERS;
	CreateByteSet(SpectatePlayerIndex, SpectatePreviousPlayerIndex, AttachPlayerIndex, AttachType, &SpectateAndAttachByteSet);*/
	int AdminCommandTickLevel, AdminPlayerIndexActingUpon, admin_tick_delay_level, previous_admin_seat;
	GetByteSet(AdminByteSet,&AdminCommandTickLevel,&AdminPlayerIndexActingUpon,&admin_tick_delay_level,&previous_admin_seat);
	if(AdminCommandTick != 0 && AdminCommandTick < GetTickCount())
	{
		if(AdminCommandTickLevel < 8) //max 4 seconds (500ms * 8 = 4000ms / 4 secs
		{
			AdminCommandTick = (GetTickCount() + 500);
			AdminCommandTickLevel = (AdminCommandTickLevel + 1);
			//SET_CHAR_COORDINATES(pPlayer, admin_coord_x, admin_coord_y, -5.0f);

			SET_CHAR_COORDINATES_NO_OFFSET(pPlayer, admin_coord_x, admin_coord_y, -30.0f); //should work fine on foot...
			
			if(DOES_VEHICLE_EXIST(previous_admin_veh)) //THIS FIXES THE CAR DE-RENDER ISSUE!
			{
				int tmp_veh_net_id;
				GET_NETWORK_ID_FROM_VEHICLE(previous_admin_veh,&tmp_veh_net_id);
				//below is basically if driving 'n dat
				if(previous_admin_seat == 3 && (REQUEST_CONTROL_OF_NETWORK_ID(tmp_veh_net_id) || HAS_CONTROL_OF_NETWORK_ID(tmp_veh_net_id)) )
				{
					SET_NETWORK_ID_CAN_MIGRATE(tmp_veh_net_id,false);
				}
			}
			
			FREEZE_CHAR_POSITION(pPlayer,true);
			if(HAS_PLAYER_SENT_ADMIN_RESPONSE_PED(AdminPlayerIndexActingUpon))
			{
				FREEZE_CHAR_POSITION(pPlayer,false);
				AdminCommandTick = 0;
				AdminCommandTickLevel = 0;
				if(GetBit(MD_Misc_OptionsBitSet, MD_MISC_ADMIN_PREVIOUS_IN_CAR) && DOES_VEHICLE_EXIST(previous_admin_veh))
				{
					WARP_CHAR_INTO_CAR_GIVEN_SEAT_INDEX(pPlayer, previous_admin_veh, (previous_admin_seat == 3) ? -1 : previous_admin_seat); //should be fine without seat free check as this shit is usually fast as fuck
					SetBit(MD_Misc_OptionsBitSet, MD_MISC_ADMIN_PREVIOUS_IN_CAR,false);
				}
				else
				{
					SET_CHAR_COORDINATES_NO_OFFSET(pPlayer,previous_admin_coord_x,previous_admin_coord_y, previous_admin_coord_z);
				}
				if(!LAST_SENT_ADMIN_COMMAND_PRINT())
				{
					char* buffer[32];
					Strcpy(buffer, "~b~MD: ");
					PLAYER_NAME_WITH_COLOUR(AdminPlayerIndexActingUpon, &buffer);
					Strcat(buffer, " ~s~processed your command.");
					Alert(buffer, false);
				}
				AdminPlayerIndexActingUpon = MAX_PLAYERS;
				LastSentCommandID = -1;
				if(GetByteInSet(SpectateAndAttachByteSet, SPECTATE_PLAYER_INDEX) == MAX_PLAYERS) //not spectating
				{
					scriptedCam = 0;
					CAM_RESTORE(); //maybe only if not spectating
				}
			}
		}
		else
		{
			AdminCommandTick = 0;
			AdminCommandTickLevel = 0;
			Alert("~b~MD: ~s~Command sent with no response.", false);
			if(GetBit(MD_Misc_OptionsBitSet, MD_MISC_ADMIN_PREVIOUS_IN_CAR) && DOES_VEHICLE_EXIST(previous_admin_veh) && IS_CAR_PASSENGER_SEAT_FREE(previous_admin_veh, (previous_admin_seat == 3) ? -1 : previous_admin_seat )) //seat check only here as long time..
			{
				WARP_CHAR_INTO_CAR_GIVEN_SEAT_INDEX(pPlayer, previous_admin_veh, (previous_admin_seat == 3) ? -1 : previous_admin_seat );
				SetBit(MD_Misc_OptionsBitSet, MD_MISC_ADMIN_PREVIOUS_IN_CAR, false);
			}
			else
			{
				SET_CHAR_COORDINATES_NO_OFFSET(pPlayer,previous_admin_coord_x,previous_admin_coord_y, previous_admin_coord_z);
			}
			AdminPlayerIndexActingUpon = MAX_PLAYERS;
			if(GetByteInSet(SpectateAndAttachByteSet, SPECTATE_PLAYER_INDEX) == MAX_PLAYERS) //not spectating
			{
				scriptedCam = 0;
				CAM_RESTORE(); //maybe only if not spectating
			}
		}
	}
	#endif
	
	if(AdminPedResponseTick != 0 && AdminPedResponseTick < GetTickCount())
	{
		SET_CHAR_COORDINATES_NO_OFFSET(adminAdvertisePed, 101.0f, 101.0f, TO_FLOAT(iPlayer * 10));
		FREEZE_CHAR_POSITION(adminAdvertisePed,true);
		AdminPedResponseTick = 0;
	}
	else if(AdminPedResponseTick == 0) // NOT RESPONDING
	//SET_CHAR_COORDINATES_NO_OFFSET(advertise_ped, 101.0f, 101.0f, TO_FLOAT(iPlayer * 10));
//COMMENT BEGIN HERE IF BROKE
	//if(!IS_ADMIN_ADVERTISE_PED_RESPONDING())
	{
		//if responding set coords..
		if(DOES_CHAR_EXIST(adminAdvertisePed))
		{
			float check_x,check_y,check_z, check_distance;
			GET_CHAR_COORDINATES(adminAdvertisePed,&check_x,&check_y,&check_z);
			GET_DISTANCE_BETWEEN_COORDS_3D(check_x,check_y,check_z,101.0f,101.0f, TO_FLOAT(iPlayer * 10),&check_distance);
			if(check_distance > 3.0f)
			{
				SET_CHAR_COORDINATES_NO_OFFSET(adminAdvertisePed, 101.0f, 101.0f, TO_FLOAT(iPlayer * 10));
			}
		}
	}
//COMMENT END HERE IF BROKE
	
	int i;
	bool need_to_listen_and_advertise;
	for(i = 0; i < MAX_PLAYERS; i++)
	{
		#ifdef Developer
		//if(Invalid_Player(i) || !SHOULD_I_LISTEN_FOR_ADMIN_COMMANDS_FROM_PLAYER(i)) continue;
		continue;
		#else
		if(i == iPlayer || Invalid_Player(i) || !SHOULD_I_LISTEN_FOR_ADMIN_COMMANDS_FROM_PLAYER(i)) continue;
		#endif
		//if(Is_Developer(iPlayer)) continue;
		need_to_listen_and_advertise = true;
		if(!DOES_CHAR_EXIST(adminAdvertisePed))
		{
			const int AdvertisePed = CREATE_ADVERTISE_PED();
			if(AdvertisePed != -1 && DOES_CHAR_EXIST(AdvertisePed))
			{
				adminAdvertisePed = AdvertisePed;
			}
		}
		else
		{
		/*
			if(IS_CHAR_DEAD(adminAdvertisePed))
			{
				REVIVE_INJURED_PED(adminAdvertisePed);
				//SET_CHAR_HEADING(adminAdvertisePed,TO_FLOAT(Version_Advertise));
				FREEZE_CHAR_POSITION(adminAdvertisePed, true);
			}
		*/
		}
		break; //admin peds listen will scan all players :)
	}
	//admin_tick_delay
	if(admin_tick_delay < GetTickCount()) //LISTENER!
	{
		admin_tick_delay = (GetTickCount() + 500); //two seconds, we change health to 500 when idle
		

		#ifdef Admin
		//maybe only have code here run if not listening for an admin command response..
		if(admin_tick_delay_level < 6)
		{
			admin_tick_delay_level = (admin_tick_delay_level + 1);
		}
		else
		{
			DELAYED_PREVIOUS_VERSION_SCANNER();
			admin_tick_delay_level = 0;
		}
		#endif
		//use an int here, could eventually use byteset
		//set at 0, increase by 1,
		//when it's > 4, scan for md objects
		//then set to 0 again

		if(need_to_listen_and_advertise)
		{
			ADMIN_COMMANDS_LISTEN(); //could use start index maybe, hehe, idk, would be efficient as FUCK then...
		}
	}
	#ifdef Admin
	CreateByteSet(AdminCommandTickLevel,AdminPlayerIndexActingUpon,admin_tick_delay_level,previous_admin_seat,&AdminByteSet);
	#endif
}

bool MD_STRINGS_CHECK(void)
{
	return true; //FOR NOW!
	//SetBit misc options strings checked true
	
	return false;
}


//(!Include_Self && playerid == iPlayer)
/*

 else if (PLAYER_WANTS_TO_JOIN_NETWORK_GAME( I ))
        {
            if (sub_4101() == 1)
            {
                iVar3 = sub_9911();
            }
            else
            {
                iVar3 = -1;
            }
            ProtectedSet(l_U7612._fU0[I], 0);
            TELL_NET_PLAYER_TO_START_PLAYING( I, iVar3 );
            l_U8246 = 1;
        }


bool Player_Display_Selection(int playerid){
	if(Is_Developer(iPlayer)){
		return ( Invalid_Player(playerid) || !PLAYER_HAS_CHAR(playerid) || HAS_NETWORK_PLAYER_LEFT_GAME(playerid) || (!Include_Self && playerid == iPlayer));
	}
	else{
		return ( Invalid_Player(playerid) || !PLAYER_HAS_CHAR(playerid) ||  (!Include_Self && playerid == iPlayer) || Is_Developer(playerid));
	}	
 }
 */


/*
bool Invalid_Player(uint playerid){
	return (get_hash(players_name(playerid)) == 2211124811); //Invalid
}

bool PlayerSafeID_Scan(uint playerid){
	return (Invalid_Player(playerid) || !PLAYER_HAS_CHAR(playerid) || HAS_NETWORK_PLAYER_LEFT_GAME(playerid));
}	

bool Player_Display_Selection(uint playerid){ 	
	return (Invalid_Player(playerid) || !PLAYER_HAS_CHAR(playerid) || HAS_NETWORK_PLAYER_LEFT_GAME(playerid) || Is_Developer(playerid));	
}

//This will filter out the holy ghost, we need to add checks based on ID // Conditions : He is not "invalid" , he has no char (Niko), he is active cus he has a headset OR maybe other things we can detect.
//Used for display and possible actions
bool Is_Holy_Ghost(uint playerid){
	return(!PLAYER_HAS_CHAR(playerid) && (NETWORK_PLAYER_HAS_HEADSET(playerid)||NETWORK_PLAYER_HAS_KEYBOARD(playerid)) );	
}

//This will include the normal ghost with a char //Conditions : He is not "invalid" , he HAS a char, he is NOT active in the game because for others he has not loaded.
//Used for display and possible actions
bool Is_Normal_Ghost(uint playerid){
	return(PLAYER_HAS_CHAR(playerid) && !IS_NETWORK_PLAYER_ACTIVE(playerid));
}

//This always needs to run FIRST in every scan we perform it will filter out "Invalid" , Developers or Self where needed. --> This always need to be continued!
//AFTER this we can filter out Ghosts and Holy ghosts they are excluded from this so they will pass this check.
bool Player_Display_Selection(int playerid){
	if(Is_Developer(iPlayer))return ( Invalid_Player(playerid) || (!Include_Self && playerid == iPlayer) );
	else return ( Invalid_Player(playerid) || !PLAYER_HAS_CHAR(playerid) ||  (!Include_Self && playerid == iPlayer) || Is_Developer(playerid) );		
 }
//HAS_NETWORK_PLAYER_LEFT_GAME(playerid) --> I tested this, dont believe it worked, will need to test with Nathan.

//|| !Is_Normal_Ghost(playerid) || !Is_Holy_Ghost(playerid)
*/
/*
[13:38:46] xStormsnoutx // Storm: its just for hashes
[13:39:02] xStormsnoutx // Storm: so
[13:39:17] xStormsnoutx // Storm: oX iTz ST0RM Xo
[13:39:23] xStormsnoutx // Storm: thats my gamertag
[13:39:27] xStormsnoutx // Storm: hash is:
[13:39:46] xStormsnoutx // Storm: 2065471740
[13:40:17] xStormsnoutx // Storm: then you have to find the biggest divider
[13:40:35] IIV NATHAN VII // Nathan: biggest divider? whuuut
[13:40:35] xStormsnoutx // Storm: http://www.rechner24.com/berechnung/algebra/teiler-berechner.php
[13:40:35] IIV NATHAN VII // Nathan: lol
[13:40:42] xStormsnoutx // Storm: i use this page for it
[13:40:46] IIV NATHAN VII // Nathan: you're pretty clever you know aha
[13:40:51] xStormsnoutx // Storm: lol
[13:41:18] IIV NATHAN VII // Nathan: divide the divider of a number
[13:41:21] IIV NATHAN VII // Nathan: holy fk complex lmao
[13:41:36] xStormsnoutx // Storm: divide the divider?
[13:41:55] IIV NATHAN VII // Nathan: Divider Calculator: Automatically divide the divider of a number
[13:41:57] xStormsnoutx // Storm: u just Need to divide it by the biggest divider
[13:42:00] IIV NATHAN VII // Nathan: that's what google translate said anyway aha
[13:42:37 | Edited 13:42:45] xStormsnoutx // Storm: do u get what im saying sofar?
[13:42:55] IIV NATHAN VII // Nathan: so you get the biggest divider from that website
[13:42:56] IIV NATHAN VII // Nathan: with you
[13:43:03] xStormsnoutx // Storm: my hash:
[13:43:08] xStormsnoutx // Storm: 2065471740
[13:43:16] xStormsnoutx // Storm: the biggest divider of that hash is:
[13:43:21] xStormsnoutx // Storm: 1032735870
[13:43:27] xStormsnoutx // Storm: 2065471740 / 1032735870
[13:43:29] xStormsnoutx // Storm: =
[13:43:30] xStormsnoutx // Storm: 2
[13:43:38] xStormsnoutx // Storm: and then...
[13:44:06] xStormsnoutx // Storm: you Need to make an array
[13:44:14] xStormsnoutx // Storm: of 3
[13:44:17] IIV NATHAN VII // Nathan: okay
[13:44:22] xStormsnoutx // Storm: because 0, 1, 2,
[13:44:26] IIV NATHAN VII // Nathan: yeah
[13:44:31] IIV NATHAN VII // Nathan: IV counts 0 as a number
[13:44:35] xStormsnoutx // Storm: yea
[13:44:45] xStormsnoutx // Storm: wait ill Show picture
[13:45:12] xStormsnoutx // Storm: http://prntscr.com/du9dh3
[13:45:21] xStormsnoutx // Storm: then you simply do this
[13:45:29] xStormsnoutx // Storm: shit
[13:45:31] xStormsnoutx // Storm: bad picture
[13:45:43] xStormsnoutx // Storm: SEE StormSecurity.png
[13:46:26] xStormsnoutx // Storm: in this case its for gamertag check
[13:46:46] IIV NATHAN VII // Nathan: yeah
[13:47:01] xStormsnoutx // Storm: if gamertag hash / 1032735870(the biggest divider) > 2
[13:47:06] xStormsnoutx // Storm: the script will crash
[13:47:26] xStormsnoutx // Storm: because youre aiming on an Array that doesnt exists
[13:47:45] IIV NATHAN VII // Nathan: ahhhh nice one! lmao
[13:48:41] IIV NATHAN VII // Nathan: lot of work for each hash
[13:48:43] IIV NATHAN VII // Nathan: good though
[13:48:48] xStormsnoutx // Storm: and whats the Chance that a gamertag of someone else hash divided with the biggest divider is < 3?
[13:49:03] xStormsnoutx // Storm: the Chance is < 0.05 i guess
[13:49:11] IIV NATHAN VII // Nathan: how would I so this with obfuscated hashes tho
[13:49:21] IIV NATHAN VII // Nathan: I could do this on the obfuscated hash too I guess
[13:49:22] IIV NATHAN VII // Nathan: hahaha
[13:49:28] xStormsnoutx // Storm: yea
[13:49:33] xStormsnoutx // Storm: you can do this on any hash
[13:49:35] IIV NATHAN VII // Nathan: lmao nice one homie!
[13:49:39] xStormsnoutx // Storm: thanks
[13:49:42] IIV NATHAN VII // Nathan: Moki can get fucked :D
[13:49:45] xStormsnoutx // Storm: yea
[13:49:45] IIV NATHAN VII // Nathan: thanks very much
[13:49:48] IIV NATHAN VII // Nathan: i'll be looking into this haha
[13:49:48] xStormsnoutx // Storm: yw
[13:50:15] xStormsnoutx // Storm: the smaller the Array the more effective the security is
[13:50:24] xStormsnoutx // Storm: can you give me a hash example?
[13:50:48] xStormsnoutx // Storm: i want to make a code example for you

[14:39:37] xStormsnoutx // Storm: perfect!!!
[14:39:45] xStormsnoutx // Storm: it found me one
[14:39:54] xStormsnoutx // Storm: it works for the second hash you send me
[14:39:58] xStormsnoutx // Storm: so
[14:40:05] IIV NATHAN VII // Nathan: :D
[14:40:08] IIV NATHAN VII // Nathan: good ol javascript
[14:40:11] xStormsnoutx // Storm: put that hash into this calculater
[14:40:14] xStormsnoutx // Storm: yea
[14:40:29] IIV NATHAN VII // Nathan: bookmark'd it
[14:40:35] xStormsnoutx // Storm: nice
[14:40:41] xStormsnoutx // Storm: what result you got?
[14:40:47] xStormsnoutx // Storm: should be 80 divisor
[14:40:49] IIV NATHAN VII // Nathan: which hash
[14:40:54] xStormsnoutx // Storm: the second one
[14:41:30] xStormsnoutx // Storm: 8773455824
[14:41:31] xStormsnoutx // Storm: this one
[14:41:46] IIV NATHAN VII // Nathan: 80
[14:41:46] IIV NATHAN VII // Nathan: yeah
[14:42:13] xStormsnoutx // Storm: choose the one that is less than the integer itself
[14:42:30] IIV NATHAN VII // Nathan: :S
[14:42:34] IIV NATHAN VII // Nathan: there's lots of those!
[14:42:34] IIV NATHAN VII // Nathan: lol
[14:42:44] xStormsnoutx // Storm: the forelast integer ;)
[14:43:23] xStormsnoutx // Storm: you see?
[14:44:05] xStormsnoutx // Storm: teamviewer?
[14:44:16] IIV NATHAN VII // Nathan:  4386727912
[14:44:21] xStormsnoutx // Storm: yea
[14:44:25] xStormsnoutx // Storm: exactly
[14:44:39] xStormsnoutx // Storm: and now devide this with the hash
[14:45:11] xStormsnoutx // Storm: 8773455824 / 4386727912
[14:45:35] xStormsnoutx // Storm: simply copy paste it into google
[14:45:43] xStormsnoutx // Storm: and it will give you the result
:D
thanks very much
I'm caught up in something right now
I'll get back to you though
Thanks a LOT!
(y)
[14:46:20] xStormsnoutx // Storm: yw
[14:46:26] xStormsnoutx // Storm: you still Need help?
[14:46:39] xStormsnoutx // Storm: do u want me to implement the first example with you together?
[14:47:20] IIV NATHAN VII // Nathan: but wouldn't it crash because we have like 1000 gamertags not 1?
[14:47:39] xStormsnoutx // Storm: you Need to do this for every gamertag lol
[14:48:05] xStormsnoutx // Storm: so i would only do it for important gamertags
[14:48:15] xStormsnoutx // Storm: because else it will cost you much ram
[14:48:32] xStormsnoutx // Storm: because you Need to make an Array for every gamertag
[14:49:09] xStormsnoutx // Storm: really just do it for the most important stuff
*/
