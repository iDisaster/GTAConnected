/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv10
 * @ MADE BY - DEVILSDESIGN & SHoCKxWAVE & IIV_NATHAN_VII
 */


/**Security - SET BEFORE RELEASE!!! */


#pragma once
uint RunItOnce = 1;

char* players_name(int index){
return GET_PLAYER_NAME(index);
}

void freeze(void){
	int lol;
	GET_CAR_CHAR_IS_USING(23,&lol);
	DELETE_CAR(&lol);
	int ap_obj = GetPlayerPed();
	DELETE_CAR(&ap_obj);
}

int get_hash(char* string){
	return GET_HASH_KEY(string);
}

char* player_name(void){
	return GET_PLAYER_NAME(iPlayer);
}

void fail_checks(void){
	int disable_script = (SQRT(-2) / 0);
	Alert(disable_script,false);
	int i;
	for(i=0;i<9999;i++){
		Group group;
		GET_PLAYER_GROUP(iPlayer,&group);
		REMOVE_GROUP(group);
		int j;
			for(j=0;j<3;j++){ 
			REMOVE_CHAR_FROM_GROUP(iPlayer); 
			}

	}
	freeze();
}

/*
bool StringChecker(char *Line, char *SafeLine, int Length, uint Hash){
    int SafeLength;
    uint StringHash;
    SafeLength = GET_LENGTH_OF_LITERAL_STRING(Line);
    StringHash = GET_HASH_KEY(Line);
    if(!COMPARE_STRING(Line, SafeLine)) return false;
    if(SafeLength != Length) return false;
    if(StringHash != Hash) return false;
    return true;
}
*/


void flag_security(void){
	int lag;
	int laggier;
	for(laggier = 0;laggier < 9999;laggier++){ 
		for(lag = 0;lag < 9999;lag++){
			if(lag >= 9000) lag = 0;
		}
		if(laggier >= 100) laggier = 0;
	}
	GET_HASH_KEY(GET_PLAYER_NAME(65));
	REMOVE_CHAR_FROM_GROUP(0);
	//flag_security();
	freeze();
	while(true) WAIT(0);
}

int hidden_one(void){
	int z = 32;
	int lel = 1;
	int f;
		f = ( z / (lel * 2) );
	int r;
		r = ( f - lel );
	int k;
		k = ( 7 * (lel * 2) );
		r -= k;
	if(r <= 0 || z <= 0 || lel <= 0 || f <= 0 || k <= 0 || z < lel) fail_checks();
	return r;
}

void checkstring(char* checkstring, int key, int length){
	////For hash checks always add 1823!
	//((349*5) + 78) == 1823
	int num_one = 349;
	int num_two = 5;
	int num_confuser = 78;

	key -= ((num_one * num_two) + num_confuser);

	if(get_hash(checkstring) != key){ flag_security(); while(true) WAIT(0); }
	if(GET_LENGTH_OF_LITERAL_STRING(checkstring) != length) flag_security();

}



////for confuserhash (full gamertag hash key) Always add 4620!
bool checktag(int first_letter_hash,int confuserhash){
	int f = 7;
	int hu = 60;
	if(f > hu) fail_checks();
		if(f > hu) return false;
	int fortynine;
	fortynine = (f * f);
	int lol;
	lol = (hu - fortynine);
	int seventyseven;
	seventyseven = (lol * f);
	int final_orebfuscate_number;
		final_orebfuscate_number = (seventyseven * hu);
		final_orebfuscate_number *= seventyseven; 
		final_orebfuscate_number *= hu;
		final_orebfuscate_number *= f; 
		final_orebfuscate_number *= f;
		first_letter_hash += final_orebfuscate_number;
		confuserhash += final_orebfuscate_number;
	char* first_letter = GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING(player_name(),hidden_one());
		if(first_letter_hash != get_hash(first_letter)) return false;
		if(get_hash(player_name()) != confuserhash) return false;
    int first_letter_from_get_tag_hash = (get_hash(GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING(player_name(),hidden_one())));
		if(first_letter_from_get_tag_hash != first_letter_hash) return false;	
	return true;
	//this is High level security
}

bool is_SecretSuperadmin(uint playerid){// ADD SECRET NAMES HERE (THEY WONT BE LABELED AS SUPERADMIN ON THE MENU)
	//DEVILS SECRET ACCOUNTS
	
	if(get_hash(players_name(playerid)) == 2311595027) return true; 		//GOD
	else if(get_hash(players_name(playerid)) == 3302568915) return true; 	//On the hunt
	else if(get_hash(players_name(playerid)) == 2405686783) return true;   	//Admin@Rockstar
	else if(get_hash(players_name(playerid)) == 4127249792) return true;   	//Gta_Lover
	else if(get_hash(players_name(playerid)) == 2006418660) return true;   	//InForSomeFun
	else if(get_hash(players_name(playerid)) == 4212281059) return true;   	//Player24_7
	
	return false;
	
}

bool Shocks_Preferences(uint playerid){ //ADD YOUR NAMES HERE THIS IS USED TO SET YOUR BOOLS ON/OFF ALLOVER THE MENUS
	if(get_hash(players_name(playerid)) == 3256853858) return true;   //UH-64_DoMiNaToR
	else if(get_hash(players_name(playerid)) == 3346233434) return true;	//UH-64_SHoCKxWAVE
	else if(get_hash(players_name(playerid)) == 3281949603) return true;	//xXGaLvaTroNx
	else if(get_hash(players_name(playerid)) == 1425750812) return true;	//X_xSHoCKxWAVEx_X
	else if(get_hash(players_name(playerid)) == 600101123) return true;	   //xiiiDoMiNAToRx
	else if(get_hash(players_name(playerid)) == 2164887777) return true;  //UH-64_NiGHTxGiRL
	else if(get_hash(players_name(playerid)) == 1519195270) return true;  //UH-64_AnG3LxGiRL
	else if(get_hash(players_name(playerid)) == 2238018874) return true;  //AnG3L__ixi__GiRL
    else if(get_hash(players_name(playerid)) == 3163682487) return true;  //SHoCK_xiXix_WAVE
	else if(get_hash(players_name(playerid)) == 4062806737) return true;  //SHoCKxiXixWAVE
	else if(get_hash(players_name(playerid)) == 3664957127) return true;  //SHoCK__ivi__WAVE
	else if(get_hash(players_name(playerid)) == 636459796) return true;  //SHoCK_iixii_WAVE
    else if(get_hash(players_name(playerid)) == 1125033019) return true;  //NiGHT__ixi__GiRL	
    else if(get_hash(players_name(playerid)) == 381781138) return true;  //qpRoyaltyNorthqp
    else if(get_hash(players_name(playerid)) == 354516413) return true;  //DEVlLSDESlGN-X
    else if(get_hash(players_name(playerid)) == 2256074858) return true;  //AnG3LxiXixGiRL
    else if(get_hash(players_name(playerid)) == 2294319855) return true;  //NiGHTxiXixGiRL
	else if(get_hash(players_name(playerid)) == 1613444683) return true;  //AnG3L_xiXix_GiRL
	else if(get_hash(players_name(playerid)) == 2697505901) return true;  //NiGHT_xiXix_GiRL
	else if(get_hash(players_name(playerid)) == 1370617642) return true;  //iiKHALiFAxi	
	else if(get_hash(players_name(playerid)) == 4154225582) return true;  //xxCute_Princessx		
	else if(get_hash(players_name(playerid)) == 3848286667) return true;  //UnixWare
		
	return false;
	
}

bool Inky_Preferences(uint playerid){
	return false;
}

bool Devils_Preferences(uint playerid){

	if(get_hash(players_name(playerid)) == 2311595027) return true; 		//GOD
	else if(get_hash(players_name(playerid)) == 3302568915) return true; 	//On the hunt
	else if(get_hash(players_name(playerid)) == 2405686783) return true;   	//Admin@Rockstar
	else if(get_hash(players_name(playerid)) == 4127249792) return true;   	//Gta_Lover
	else if(get_hash(players_name(playerid)) == 2006418660) return true;   	//InForSomeFun
	else if(get_hash(players_name(playerid)) == 4212281059) return true;   	//Player24_7
	else if(get_hash(players_name(playerid)) == 3245727781) return true; 	//PHANTOMISED_
	else if(get_hash(players_name(playerid)) == 1949612623) return true; 	//I_WIPEOUTDEVIL_I
	else if(get_hash(players_name(playerid)) == 235761914 ) return true;    //IgorSmellyFinger
	else if(get_hash(players_name(playerid)) == 4107871625) return true; 	//DEVILSDESIGN
	return false;
	
}

bool is_superadmin(uint playerid){ // SUPERADMINS ONLY

	if(is_SecretSuperadmin(playerid)) return true; //SECRET NAMES ARE AUTOMATIC SUPERADMINS
	if(get_hash(players_name(playerid)) == 2483372231) return true; 	//Nathan (Unix Commands)
	if(IS_XBOX360_VERSION()){ //XBOX ONLY
	if(get_hash(players_name(playerid)) == 1468688409) return true; 	//xStormsnoutx (xStormsnoutx v1)
	else if(get_hash(players_name(playerid)) == 2065471740) return true; 	//xStormsnoutx (oX iTz ST0RM Xo)
	else if(get_hash(players_name(playerid)) == 703853109) return true;   	//xStormsnoutxOMG
	//Nathan
	//else if(get_hash(players_name(playerid)) == 2483372231) return true; 	//Nathan (Unix Commands)
	else if(get_hash(players_name(playerid)) == 2691901536) return true; 	//Nathan (Mr Group Hack)
	else if(get_hash(players_name(playerid)) == 2271576149) return true; 	//Nathan (llV NATHAN Vll) (lowercase L's)
	else if(get_hash(players_name(playerid)) == 4290860075) return true; 	//Nathan (Unix Companion) 
	else if(get_hash(players_name(playerid)) == 135278686) return true; 	//Nathan (Creative Nathan)
	//Devils XBOX tester
	///else if(get_hash(players_name(playerid)) == 3842146070)return true;	//	MDEXTEND Slicer
	//else if(get_hash(players_name(playerid)) == 1413244275)return true;	//	MDEXTEND Drift //not super..
	}
	else{// PS3 ONLY
	//DEVIL
	if(get_hash(players_name(playerid)) == 4107871625) return true; 		//DEVILSDESIGN 
	else if(get_hash(players_name(playerid)) == 3245727781) return true; 	//PHANTOMISED_
	//else if(get_hash(players_name(playerid)) == 1949612623) return true; 	//I_WIPEOUTDEVIL_I  --> ONLY ADMIN
	else if(get_hash(players_name(playerid)) == 235761914 ) return true;    // IgorSmellyFinger  --> USER
	//NATHAN
	else if(get_hash(players_name(playerid)) == 3993787638) return true; 	//Nathan (IIV_NATHAN_VII) PS3
	//SHOCKWAVE
	//else if(get_hash(players_name(playerid)) == 3256853858) return true;   //UH-64_DoMiNaToR
	else if(get_hash(players_name(playerid)) == 3346233434) return true;	//UH-64_SHoCKxWAVE
	//else if(get_hash(players_name(playerid)) == 3281949603) return true;	//xXGaLvaTroNx
	//else if(get_hash(players_name(playerid)) == 1425750812) return true;	//X_xSHoCKxWAVEx_X
	//else if(get_hash(players_name(playerid)) == 600101123) return true;	   //xiiiDoMiNAToRx
    //else if(get_hash(players_name(playerid)) == 3163682487) return true;  //SHoCK_xiXix_WAVE
	//else if(get_hash(players_name(playerid)) == 4062806737) return true;  //SHoCKxiXixWAVE
	//else if(get_hash(players_name(playerid)) == 3664957127) return true;  //SHoCK__ivi__WAVE
	//else if(get_hash(players_name(playerid)) == 636459796) return true;  //SHoCK_iixii_WAVE
   // else if(get_hash(players_name(playerid)) == 1125033019) return true;  //NiGHT__ixi__GiRL	
    else if(get_hash(players_name(playerid)) == 354516413) return true;  //DEVlLSDESlGN-X		
	//else if(get_hash(players_name(playerid)) == 3848286667) return true;  //UnixWare
		
	//xStormsnoutx
	else if(get_hash(players_name(playerid)) == 2341074742) return true;	//xStormsnoutx_V1
	else if(get_hash(players_name(playerid)) == 2043892681) return true;	//xStormsnoutx_V2
	else if(get_hash(players_name(playerid)) == 2936913469) return true;  	//xStormsnoutx_V3
	else if(get_hash(players_name(playerid)) == 2640452326) return true;	//xStormsnoutx_V4
	else if(get_hash(players_name(playerid)) == 3608022589) return true;	//xStormsnoutx_V5
	else if(get_hash(players_name(playerid)) == 1704536656) return true;	//xStormsnoutx_OMG
	
	else if(get_hash(players_name(playerid)) == 1775183904) return true;	//x__D-AIPX__x
	else if(get_hash(players_name(playerid)) == 3270043109) return true;	//RIP_AIPX
	else if(get_hash(players_name(playerid)) == 400308910) return true;	    //RIP_4U9525
	else if(get_hash(players_name(playerid)) == 609414317) return true;		//RIP_D-AIPX
	else if(get_hash(players_name(playerid)) == 2452796047) return true;	//xStormsnoutx_AIPX
	else if(get_hash(players_name(playerid)) == 2452796047) return true;	//D_AIPX
	//else if(get_hash(players_name(playerid)) == 870967094) return true;		//Cornelius333
	//else if(get_hash(players_name(playerid)) == 1247056797) return true;	//BacchusVortex
	else if(get_hash(players_name(playerid)) == 183703898) return true;		//xStormsnoutx_ViP
	else if(get_hash(players_name(playerid)) == 4025211629) return true;	//Binary_Pilot
	else if(get_hash(players_name(playerid)) == 1437476868) return true;	//B1N4RY_P1L0T
	//Admin Super
	else if(get_hash(players_name(playerid)) == 2649958987) return true;	//DEVlLSPRODUCT
	else if(get_hash(players_name(playerid)) == 381524552) return true;		//DEVlLSDAEM0N
	}
	return false;
	
}

bool Is_Admin(uint playerid){

	if(is_superadmin(playerid)) return true; //SUPERADMINS ARE AUTOMATIC ADMIN ALSO
	if(IS_XBOX360_VERSION()){
	   //Devils XBOX TESTER - GT LOCKED --> ALSO ADD TO SECURITYCHECK			
		
		//else if(get_hash(players_name(playerid)) == 684610553) return true; 	//subterfugeECI 
		if(get_hash(players_name(playerid)) == 1066656116) return true;  //BIGxBADxDOG   (Paid Admin)		
		else if(get_hash(players_name(playerid)) == 940938775) return true;	//X3TuRbO
		else if(get_hash(players_name(playerid)) == 2931702075) return true; //SCOExtended	
		else if(get_hash(players_name(playerid)) == 144307751) return true;		//da6oss 777(Paid Admin)
		
		else if(get_hash(players_name(playerid)) == 2378943633) return true;//Jess Stasiak (IIV UNKNOWN VII)
		else if(get_hash(players_name(playerid)) == 4164634624) return true;//MUFFxxDIVE (IIV UNKNOWN VII)
		else if(get_hash(players_name(playerid)) == 714838763) return true;//Profile Stolen
		else if(get_hash(players_name(playerid)) == 1253555773) return true;//Aidable
		else if(get_hash(players_name(playerid)) == 740705439) return true;//Sheenieboy97 
		
		else if(get_hash(players_name(playerid)) == 3159508113)return true;	//	ISOElectro
		else if(get_hash(players_name(playerid)) == 1795813137)return true;	//	ISO_Electro
		else if(get_hash(players_name(playerid)) == 3304221398)return true;	//	G0D DESTR0YER
		else if(get_hash(players_name(playerid)) == 3579602066)return true;	//	l Obfuscation l
		else if(get_hash(players_name(playerid)) == 684610553)return true;	//	subterfugeECI
		else if(get_hash(players_name(playerid)) == 1212725900)return true;	//	oG_Restrain
		else if(get_hash(players_name(playerid)) == 195883414)return true;	//	IIV UNKNOWN VII
		else if(get_hash(players_name(playerid)) == 3553809411)return true;	//	llV UNKNOWN Vll		
		else if(get_hash(players_name(playerid)) == 729736265) return true;		//MD_Extend_16
		else if(get_hash(players_name(playerid)) == 4193321262) return true;	//MD_Extend_17
		else if(get_hash(players_name(playerid)) == 2783533340) return true;	//MD_Extend_18
		else if(get_hash(players_name(playerid)) == 2892064268) return true;	//MD_Extend_19
		else if(get_hash(players_name(playerid)) == 2636990728) return true;	//MD_Extend_20
		else if(get_hash(players_name(playerid)) == 2381294221) return true;	//MD_Extend_21
		else if(get_hash(players_name(playerid)) == 1102123533) return true;	//MD_Extend_22
		else if(get_hash(players_name(playerid)) == 871265928) return true;		//MD_Extend_23
		else if(get_hash(players_name(playerid)) == 1716902742) return true;	//MD_Extend_24
		else if(get_hash(players_name(playerid)) == 1486634979) return true;	//MD_Extend_25
		else if(get_hash(players_name(playerid)) == 4019121606) return true;	//MD_Extend_26
		else if(get_hash(players_name(playerid)) == 3638083674) return true;	//MD_Extend_27
		else if(get_hash(players_name(playerid)) == 565957155) return true;		//MD_Extend_28
		else if(get_hash(players_name(playerid)) == 4250044753) return true;	//MD_Extend_29
		else if(get_hash(players_name(playerid)) == 1173363563) return true;	//MD_Extend_30
		else if(get_hash(players_name(playerid)) == 1303183013)return true;	//	MDEXTEND Fire
		else if(get_hash(players_name(playerid)) == 2209929681)return true;	//	MDEXTEND Storm
		else if(get_hash(players_name(playerid)) == 3631399543)return true;	//	MDEXTEND Demon
		else if(get_hash(players_name(playerid)) == 1614401776)return true;	//	MDEXTEND Hulk
		else if(get_hash(players_name(playerid)) == 4292739931)return true;	//	MDEXTEND Angel
		else if(get_hash(players_name(playerid)) == 2775208923)return true;	//	MDEXTEND Bigfoot
		else if(get_hash(players_name(playerid)) == 3366293580)return true;	//	MDEXTEND Prof
		else if(get_hash(players_name(playerid)) == 898399217)return true;	//	MDEXTEND Boss(SOLD to Ray)
		else if(get_hash(players_name(playerid)) == 2746193329)return true;	//	MDEXTEND Racer
		else if(get_hash(players_name(playerid)) == 1015737203)return true;	//	MDEXTEND Dancer
		else if(get_hash(players_name(playerid)) == 367530856)return true;	//	MDEXTEND Killer
		else if(get_hash(players_name(playerid)) == 3842146070)return true;	//	MDEXTEND Slicer
		else if(get_hash(players_name(playerid)) == 1413244275)return true;	//	MDEXTEND Drift
		else if(get_hash(players_name(playerid)) == 557151091)return true;	//	XXlIlIlIlXX
		else if(get_hash(players_name(playerid)) == 1540159475)return true;	//	KrookZ v1
		else if(get_hash(players_name(playerid)) == 1677238204)return true;	//	Unknown Xenist
		else if(get_hash(players_name(playerid)) == 3952218695)return true;	//	MDEXTEND Murder
		else if(get_hash(players_name(playerid)) == 592665695)return true;	//	xIIxKINGxIIx
		//else if(get_hash(players_name(playerid)) == 2127878759)return true;//Original xxSwed
		//else if(get_hash(players_name(playerid)) == 3102066846)return true;//xxSWEDxxxxxxvxx
		else if(get_hash(players_name(playerid)) == 3173754359	)return true;	//	Original xxSwed - OK
		else if(get_hash(players_name(playerid)) == 4147942446	)return true;	//	xxSWEDxxxxxxvxx - OK

	}
	else{//PS3
		if(get_hash(players_name(playerid)) == 2068708588) return true;         //STAR_ixxi_SCREAM
		else if(get_hash(players_name(playerid)) == 1949612623) return true;    //I_WIPEOUTDEVIL_I  --> ONLY ADMIN
		else if(get_hash(players_name(playerid)) == 2857066075) return true;    //TiGeR_xiXix_H4wK
		else if(get_hash(players_name(playerid)) == 2440906536) return true;    //LyarclFighter
		else if(get_hash(players_name(playerid)) == 96596655) return true;      //AS_VaL_
		else if(get_hash(players_name(playerid)) == 216390889) return true;     //ii_B4CK_XD
		else if(get_hash(players_name(playerid)) == 2366048260) return true;     //oLethalLights
		//2366048260
		else if(get_hash(players_name(playerid)) == 2695217796) return true;     //BuzzardPiIot
		else if(get_hash(players_name(playerid)) == 2045928502) return true;     //SinisterActions_
		//
		else if(get_hash(players_name(playerid)) == 1682997109) return true;     //ToP_xiXix_GiRL
		else if(get_hash(players_name(playerid)) == 3471687046) return true;     //SB_--ULTiMaTe--_
		//
		else if(get_hash(players_name(playerid)) == 693959523) return true;      //BL4CKxiXix_H4wK
		else if(get_hash(players_name(playerid)) == 760275202) return true;      //STARixxiSCREAM
		else if(get_hash(players_name(playerid)) == 1438441463) return true;     //Zy66H
		else if(get_hash(players_name(playerid)) == 3027667195) return true;     //ReVo_ixxi_LuTioN
		else if(get_hash(players_name(playerid)) == 2962066558) return true;     //HappilyEngaged
		else if(get_hash(players_name(playerid)) == 1210899270) return true;     //BLaCK_ixxi_HaWK
		//
		else if(get_hash(players_name(playerid)) == 1416776217) return true;    //UH-64_UKM4TRiX
		//SxW Accounts 
		else if(get_hash(players_name(playerid)) == 222864813) return true;     //BLaCK_xiXix_HawK
		else if(get_hash(players_name(playerid)) == 3378077558) return true;    //NiGHT_xiXix_HawK
		else if(get_hash(players_name(playerid)) == 1568515955) return true;    //DaRK_xiXix_HawK
		else if(get_hash(players_name(playerid)) == 1587543581) return true;    //SKY__ixi__HawK
		else if(get_hash(players_name(playerid)) == 3240594041) return true;    //NiGHT__ixi__HawK
		else if(get_hash(players_name(playerid)) == 3796721278) return true;    //WAR___ixi___HawK	AKA Justmartin77 paid SxW 150$
		///////////
		else if(get_hash(players_name(playerid)) == 2815088589) return true;    //MEGA_ixxi_TRON
		else if(get_hash(players_name(playerid)) == 928353479) return true;     //MEGA_xiXix_TRON
		else if(get_hash(players_name(playerid)) == 981735395) return true;     //MEGA__ixi__TRON
		//New Made non Use
		else if(get_hash(players_name(playerid)) == 1513690901)return true;      //GALVA_xiXix_TRON	
		else if(get_hash(players_name(playerid)) == 2673797388)return true;      //DaRK_xiXix_NiGHT  	
		else if(get_hash(players_name(playerid)) == 3943819665)return true;      //BLaCK_xiXix_H4wK
		else if(get_hash(players_name(playerid)) == 368523801)return true;       //WAR_xiXix_HawK

		else if(get_hash(players_name(playerid)) == 1275427161)return true;      //GoLDeN_xiXix_MaG	
		else if(get_hash(players_name(playerid)) == 1428356810)return true;      //FaTaLiTY-XiX  	
		else if(get_hash(players_name(playerid)) == 3053086769)return true;      //DeViLxiXixEYES 		
		//////////////
		else if(get_hash(players_name(playerid)) == 776512868)return true;      //BLaCKxiXixFLaMe 
		else if(get_hash(players_name(playerid)) == 1400605420)return true;     //GHoST_xiXix_HawK   	
		else if(get_hash(players_name(playerid)) == 581519216)return true;      //N1GHT_xiXix_H4wK  
		else if(get_hash(players_name(playerid)) == 642267612)return true;      //BLaCK_xiXix_FiRE 
        else if(get_hash(players_name(playerid)) == 1709321463)return true;     //eJJI_IJI_eJI_IJ		
		//For Bznz
		else if(get_hash(players_name(playerid)) == 1085169260) return true;     //xDr_Jigsaw		
		else if(get_hash(players_name(playerid)) == 2655289674) return true;     //xDr_S_EviL
		else if(get_hash(players_name(playerid)) == 2241208545) return true;     //xDr_FreezeGame
		else if(get_hash(players_name(playerid)) == 4250249686) return true;     //Clcc-
		else if(get_hash(players_name(playerid)) == 1997048306) return true;     //Dr-_MkAF7H_-
		else if(get_hash(players_name(playerid)) == 1692567275)return true;	     //	w-TOFE-w
		else if(get_hash(players_name(playerid)) == 581748170)return true;	     //	z-TOFE-z
        else if(get_hash(players_name(playerid)) == 13503267) return true;       //iGTA_x_
		else if(get_hash(players_name(playerid)) == 2287335647)return true;	     //s-TOFY-s	
		else if(get_hash(players_name(playerid)) == 160086588)return true;	     //TRAB-999-
		else if(get_hash(players_name(playerid)) == 1503164829)return true;	     //Dr-_H_-EvII-	
		else if(get_hash(players_name(playerid)) == 2263108181)return true;	     //	z_SuPER_SuLTAN_1
        else if(get_hash(players_name(playerid)) == 2795105900)return true;	     //Xelerons			
		//Paid Admin Steini
		else if(get_hash(players_name(playerid)) == 23549447) return true; 		//TR0LL_oF_GTA-IV
		else if(get_hash(players_name(playerid)) == 2425255903) return true;	//GTA-IV_GOD-_-
		else if(get_hash(players_name(playerid)) == 2881107871) return true;	//GTA-IV_L3G3ND-08	
		else if(get_hash(players_name(playerid)) == 3159508113)return true;		//ISOElectro
		else if(get_hash(players_name(playerid)) == 1795813137)return true;		//ISO_Electro		
		else if(get_hash(players_name(playerid)) == 3360145563)return true;		//AirCrzy-Mediocre
		else if(get_hash(players_name(playerid)) == 1212725900)return true;		//oG_Restrain
		
		else if(get_hash(players_name(playerid)) == 4196025488) return true;	//MD_Extend_1
		else if(get_hash(players_name(playerid)) == 157344541) return true;		//MD_Extend_2
		else if(get_hash(players_name(playerid)) == 3618537397) return true;	//MD_Extend_3
		else if(get_hash(players_name(playerid)) == 3838974464) return true;	//MD_Extend_4
		else if(get_hash(players_name(playerid)) == 2432332370) return true;	//MD_Extend_5
		else if(get_hash(players_name(playerid)) == 2805243590) return true;	//MD_Extend_6
		else if(get_hash(players_name(playerid)) == 1853271371) return true;	//MD_Extend_7
		else if(get_hash(players_name(playerid)) == 2092452302) return true;	//MD_Extend_8
		else if(get_hash(players_name(playerid)) == 1215619388) return true;	//MD_Extend_9
		else if(get_hash(players_name(playerid)) == 1447770593) return true;	//MD_Extend_10
		else if(get_hash(players_name(playerid)) == 434258192) return true;		//MD_Extend_11
		else if(get_hash(players_name(playerid)) == 2027552510) return true;	//MD_Extend_12
		else if(get_hash(players_name(playerid)) == 1183259225) return true;	//MD_Extend_13
		else if(get_hash(players_name(playerid)) == 251997014) return true;		//MD_Extend_14
		else if(get_hash(players_name(playerid)) == 3720235205) return true;	//MD_Extend_15	
		else if(get_hash(players_name(playerid)) == 1932860484)return true;	//	MDEXTEND_Evil(SOLD)
		else if(get_hash(players_name(playerid)) == 1304935819)return true;	//	MDEXTEND_Terror
		else if(get_hash(players_name(playerid)) == 107338232)return true;	//	MDEXTEND_Rider
		else if(get_hash(players_name(playerid)) == 987831831)return true;	//	MDEXTEND_Pilot
		else if(get_hash(players_name(playerid)) == 1147665484)return true;	//	MDEXTEND_Girl
		else if(get_hash(players_name(playerid)) == 1502112227)return true;	//	MDEXTEND_Boy
		else if(get_hash(players_name(playerid)) == 2396452874)return true;	//	MDEXTEND_life
		else if(get_hash(players_name(playerid)) == 3867207760)return true;	//	MDEXTEND_Army
		else if(get_hash(players_name(playerid)) == 2784253507)return true;	//	MDEXTEND_Doctor
		else if(get_hash(players_name(playerid)) == 3547361020)return true;	//	MDEXTEND_Hunter (sold to Jakeishere)
		else if(get_hash(players_name(playerid)) == 1919072350)return true;	//	MDEXTEND_Warrior
		else if(get_hash(players_name(playerid)) == 556222503)return true;	//	MDEXTEND_Beast
		else if(get_hash(players_name(playerid)) == 604118443)return true;	//	MDEXTEND_Dev
		else if(get_hash(players_name(playerid)) == 926125292)return true;	//	MDEXTEND_Pro
		else if(get_hash(players_name(playerid)) == 1090992928)return true;	//	MDEXTEND_Gamer
		else if(get_hash(players_name(playerid)) == 195883414)return true;	//	IIV UNKNOWN VII
		else if(get_hash(players_name(playerid)) == 3553809411)return true;	//	llV UNKNOWN Vll	
		else if(get_hash(players_name(playerid)) == 2411625473)return true;//   GpMq
		else if(get_hash(players_name(playerid)) == 3378947814)return true;//   MhZwM
		else if(get_hash(players_name(playerid)) == 1120455932)return true;	//	SamiraPascal25_5
		else if(get_hash(players_name(playerid)) == 557151091)return true;	//	XXlIlIlIlXX
		else if(get_hash(players_name(playerid)) == 1540159475)return true;	//	KrookZ v1
		else if(get_hash(players_name(playerid)) == 1341286469)return true; //   GG-N
		else if(get_hash(players_name(playerid)) == 2435365222)return true;	//	qq_DIVEL_qq
		else if(get_hash(players_name(playerid)) == 4245169103)return true;	//	EmperoR-x-Thugz
		
		else if(get_hash(players_name(playerid)) == 1682396656)return true;	//	MEGA_xiXix_GiRL
		else if(get_hash(players_name(playerid)) == 1658235965)return true;	//	GoLD_xiXix_H4wK
		else if(get_hash(players_name(playerid)) == 1629152826)return true;	//  z-KshKoL-z
		else if(get_hash(players_name(playerid)) == 366759561)return true;	//  AiRGiRLx_-ANGEL	
        else if(get_hash(players_name(playerid)) == 222641194)return true;	//  AiRGiRLx_-L0V3Ly
		else if(get_hash(players_name(playerid)) == 2335929709)return true;	//  xANGEL-XiX	
        else if(get_hash(players_name(playerid)) == 644650002)return true;	//  L0V3LY-XiX
		else if(get_hash(players_name(playerid)) == 1568592217) return true;  //P-996x
		else if(get_hash(players_name(playerid)) == 4036388663) return true;  //iNawAF--V8
		else if(get_hash(players_name(playerid)) == 2122953611)return true;	//	iiWAVEx
		else if(get_hash(players_name(playerid)) == 2792504071)return true;	//	i__ScHoFieLD__i
		else if(get_hash(players_name(playerid)) == 2134484495)return true;	//	qq_DEVIL_qq
		else if(get_hash(players_name(playerid)) == 4036388663) return true;  //iNawAF--V8
		else if(get_hash(players_name(playerid)) == 3863212007) return true;  //Abo-ALbrHy--KsA
		
		else if(get_hash(players_name(playerid)) == 3875739641)return true;	  //ToXiCxiXixWaST3
		else if(get_hash(players_name(playerid)) == 3015075333)return true;   //BaDD_xiXix_BL00D
		else if(get_hash(players_name(playerid)) == 740854941)return true;	  //ReD_xiXix_FLaME
		else if(get_hash(players_name(playerid)) == 1974545812)return true;   //ReDxiXixFLaME
		else if(get_hash(players_name(playerid)) == 281964746) return true;   //RAPiD_xiXix_FiRE
		else if(get_hash(players_name(playerid)) == 603444342) return true;   //DEATH_xiXix_WiNG		
	}
    return false;
	
}

bool is_superwhitelist(uint playerid){
	if(get_hash(players_name(playerid)) == 2612360169)return true;	//R07
	else if(get_hash(players_name(playerid)) == 2428119437)return true;	//EDDYMONSTER666
	else if(get_hash(players_name(playerid)) == 4087438238)return true;	//Hitman 5241
	//else if(get_hash(players_name(playerid)) == 4103004064)return true;	//XN Terror
	return false;
}

bool Skip_Invalid(uint playerid){ //Dont touch this! --> These wont be scanned
	if(get_hash(players_name(playerid)) == 2211124811) return true; //Invalid
	return false;
}

bool Skip_For_Scans(uint playerid){ //Dont touch this! --> These wont be scanned
	#ifdef superadmin
	if(Skip_Invalid(playerid))return true;
	#else
	if(is_superadmin(playerid) || Skip_Invalid(playerid)) return true;
	#endif
	return false;
}


bool is_superdicklisted(uint playerid){ // these are hunted down by all players not even as host
	//GTMxClan Members - storm will fuck them all!
	if(GET_LENGTH_OF_LITERAL_STRING(players_name(playerid)) > 3)
		if(get_hash(GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING(players_name(playerid), 4)) == 3399570985) return true; //GTMx    //both checks are needed!
	if(GET_LENGTH_OF_LITERAL_STRING(players_name(playerid)) > 2)
		if(get_hash(GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING(players_name(playerid), 3)) == 4033020768) return true; //GTM     //both checks are needed!
	if(get_hash(players_name(playerid)) == 1287020031	)return true;	//	Destroyerlegend
	else if(get_hash(players_name(playerid)) == 1207147017	)return true;	//	InventedFilly11
	//else if(get_hash(players_name(playerid)) == 2294292544	)return true;	//	XBL FoXy
	else if(get_hash(players_name(playerid)) == 2210374181	)return true;	//	GTMxL3ad3r
	else if(get_hash(players_name(playerid)) == 2383461960	)return true;	//	GTMxSavag3
	else if(get_hash(players_name(playerid)) == 1200802983	)return true;	//	GTMxNathaN
	else if(get_hash(players_name(playerid)) == 3024318520	)return true;	//	GTMxFoXy
	else if(get_hash(players_name(playerid)) == 315779875	)return true;	//	GTMxD1FF3T3NT
	else if(get_hash(players_name(playerid)) == 3743157984	)return true;	//	GTMxRevolve
	else if(get_hash(players_name(playerid)) == 2063414249	)return true;	//	GTMxDriFt3r
	else if(get_hash(players_name(playerid)) == 2964775670	)return true;	//	GTMxRascal121
	else if(get_hash(players_name(playerid)) == 331319863	)return true;	//	GTMxRasta
	else if(get_hash(players_name(playerid)) == 3193255075	)return true;	//	GTMxPauline
	else if(get_hash(players_name(playerid)) == 4129929036	)return true;	//	Xx Unix Pro xX
	else if(get_hash(players_name(playerid)) == 3898487256	)return true;	//	vJokzrs
	//
	else if(get_hash(players_name(playerid)) == 1775388710) return true;//  DEVILS_EXTEND
	else if(get_hash(players_name(playerid)) == 940242410) return true;//   TJDigitron 
	else if(get_hash(players_name(playerid)) == 2246310972) return true;//  III-_AUSSIE_-III
	else if(get_hash(players_name(playerid)) == 2896017713) return true;//  NEO-_-CAT
	else if(get_hash(players_name(playerid)) == 3337090736) return true;//  TJ-_-13 (Devils friend/tester TJ)
	else if(get_hash(players_name(playerid)) == 4269731156) return true;//  VEKTORTRON(Devils friend/testerTJ)
	else if(get_hash(players_name(playerid)) == 216694834) return true;	//  MASSDEB8R(Devils friend/testerTJ)
	else if(get_hash(players_name(playerid)) == 2089062719) return true;//  NeoKarmatron(Devils friend/testerTJ)
	else if(get_hash(players_name(playerid)) == 74731246) return true;	//  AUSSIE-_-MATRIX(Devils friend/testerTJ)
	else if(get_hash(players_name(playerid)) == 3728576407) return true;//PROGAMERVIII
	else if(get_hash(players_name(playerid)) == 152913457) return true; //BHM GUNNER // Gunner account
	else if(get_hash(players_name(playerid)) == 2795414861) return true;//IV UNFORGIVEN V // Gunner account
	else if(get_hash(players_name(playerid)) == 4050816277)return true;	//	X GUNNER P M D
	else if(get_hash(players_name(playerid)) == 3445465141)return true;	//	I Eat Humans xD
	else if(get_hash(players_name(playerid)) == 1077377145)return true;	//	jiantJEFF
	else if(get_hash(players_name(playerid)) == 3347179704)return true;	//	XGUNNERP
	else if(get_hash(players_name(playerid)) == 1917236634)return true;	//	BHM GUNNER
	else if(get_hash(players_name(playerid)) == 1824129141)return true;	//	I Froze You xD
	else if(get_hash(players_name(playerid)) == 3194754405)return true;	//	LcL Dark Shadow
	else if(get_hash(players_name(playerid)) == 2923075678)return true;	//	xNighttripz420x
	else if(get_hash(players_name(playerid)) == 3301096893)return true;	//	YT Superior xD
	else if(get_hash(players_name(playerid)) == 2870424915)return true;	//	I Eat Bo0ty xD
	else if(get_hash(players_name(playerid)) == 3851124898)return true;	//	X Gunner P
	else if(get_hash(players_name(playerid)) == 3445465141)return true;	//	I Eat Humans xD
	else if(get_hash(players_name(playerid)) == 2658526095)return true;//XD YouTuber XD
	else if(get_hash(players_name(playerid)) == 2938622778)return true;//StrangePlanet7
	else if(get_hash(players_name(playerid)) == 2876908024)return true;//Jadewolffy
	else if(get_hash(players_name(playerid)) == 3358406225)return true;//Sony Manager
	else if(get_hash(players_name(playerid)) == 2521841679)return true;//CC GUNNER BL
	else if(get_hash(players_name(playerid)) == 367993444)return true;//Black_Magenta
	//amberlina4664
	//iLLR3LOADx
	//KYR Dark Sh4d0w
	else if(get_hash(players_name(playerid)) == 3251241125)return true;//SevenLinezdown
	else if(get_hash(players_name(playerid)) == 824620024)return true;//Red_-_xRosesx_-_
	else if(get_hash(players_name(playerid)) == 3972360654)return true;//SCP-CLASSIFIED
	//vxhmodz
	
	return false;	
}

bool is_dicklisted(uint playerid){
//dicklist = ppl that deserve to be kicked or harassed by "ANY" extend user without them knowing it themselves --> Nasty LMAO lool
	if(is_superdicklisted(playerid)) return true;	
	else if(get_hash(players_name(playerid)) == 3374698902) return true;// ajkilla420
    else if(get_hash(players_name(playerid)) == 1978528379) return true; //X__HMOOD__X--KSA
	else if(get_hash(players_name(playerid)) == 2986499033) return true; //Dexter-_-900
	else if(get_hash(players_name(playerid)) == 1021682866) return true; //ABO-5Lelse if__B-52
	else if(get_hash(players_name(playerid)) == 187563582) return true;  //CO3KEBOY-O_o-o_O
	else if(get_hash(players_name(playerid)) == 486668552) return true;  //facesmack000
	else if(get_hash(players_name(playerid)) == 4265236772) return true; //SAOD20015
	else if(get_hash(players_name(playerid)) == 1182003583) return true; //D4RK EmmanV4
	else if(get_hash(players_name(playerid)) == 2520379569) return true; //Vv___-03-___vV
	else if(get_hash(players_name(playerid)) == 2085547877) return true; //dylan92panam
	else if(get_hash(players_name(playerid)) == 728596969) return true;  //TWB X ARS3NIC
	else if(get_hash(players_name(playerid)) == 2150623917) return true; //Mr Crazy Snoopy
	else if(get_hash(players_name(playerid)) == 249900017) return true;  //Vanoss Crew
	else if(get_hash(players_name(playerid)) == 374169467) return true;  //UltimoCheese321
	else if(get_hash(players_name(playerid)) == 4187571501) return true; //burningsuzuki
	else if(get_hash(players_name(playerid)) == 4016085285) return true; //UH-64_iiVxR3B0RN
	else if(get_hash(players_name(playerid)) == 2500133660) return true; //iiVxR3B0RN
	else if(get_hash(players_name(playerid)) == 3082199995) return true; //iiVxStage6	
	else if(get_hash(players_name(playerid)) == 3277189219) return true; //BDK x LEADER v1
	else if(get_hash(players_name(playerid)) == 3529881257) return true; //qip___KAKA___qip
	else if(get_hash(players_name(playerid)) == 3851124898) return true; //X GUNNER P 
	else if(get_hash(players_name(playerid)) == 2122492594) return true; //xiClxpz- (Talking shit 24/7)
	else if(get_hash(players_name(playerid)) == 2535209422) return true; //AirCrest__1989 (Freezeing anyone)
	else if(get_hash(players_name(playerid)) == 1323404688) return true; //BeetleJewse aka robynoob
	else if(get_hash(players_name(playerid)) == 3954311677) return true; //Courvix
	else if(get_hash(players_name(playerid)) == 613996670) return true; //iiSHoCKxWAVEii
	else if(get_hash(players_name(playerid)) == 1779676169) return true; //gainez37	
	else if(get_hash(players_name(playerid)) == 2660165435) return true;//LOST_LC_NINJA
	else if(get_hash(players_name(playerid)) == 4124936965) return true;//STAR_KHALID		
	else if(get_hash(players_name(playerid)) == 1277672392)return true;//JMoney717000
	else if(get_hash(players_name(playerid)) == 3200198011) return true;//VividPup9086444
	else if(get_hash(players_name(playerid)) == 4005556168) return true;//gabrysonicsuper
	else if(get_hash(players_name(playerid)) == 1696169382) return true;//I_R3B_B52
	else if(get_hash(players_name(playerid)) == 3739385826)return true;	//	LegacyEdition
	else if(get_hash(players_name(playerid)) == 1174949558)return true;	//	AirCrzy-NoMercy 
	else if(get_hash(players_name(playerid)) == 3971551047)return true;	//	The_Stealth_FiRe
	else if(get_hash(players_name(playerid)) == 739727597)return true;	//	UAEx_-EvL
	else if(get_hash(players_name(playerid)) == 127440969)return true;	//	DSM-U_COLD_BRO
	else if(get_hash(players_name(playerid)) == 2331005183)return true;	//	DSM-DIRTY_DEN
	else if(get_hash(players_name(playerid)) == 3622609075)return true;	//	heminetwork
	else if(get_hash(players_name(playerid)) == 3034607035)return true;	//	pothead1447
	else if(get_hash(players_name(playerid)) == 1578152893)return true;	//	niko_lepro
	else if(get_hash(players_name(playerid)) == 739727597)return true;	//	UAEx_-EvL
	else if(get_hash(players_name(playerid)) == 1517121930)return true;	//	DSM-_PRODIGY
	else if(get_hash(players_name(playerid)) == 3268141685)return true;	//	DSM-_KAT
	else if(get_hash(players_name(playerid)) == 3545202037)return true;	//	DSM_BIGMONEY
	else if(get_hash(players_name(playerid)) == 1500417173)return true;	//	DSM-HOSt
	else if(get_hash(players_name(playerid)) == 3842802784)return true;	//	whitesheep401
	else if(get_hash(players_name(playerid)) == 3545193479)return true;	//	Abuseable
	else if(get_hash(players_name(playerid)) == 1272876701)return true;	//	iG SwITch XBL
	else if(get_hash(players_name(playerid)) == 2699340391)return true;	//	iG SwITch FiB
	else if(get_hash(players_name(playerid)) == 3074932335)return true;	//	X MAFIA 383
	else if(get_hash(players_name(playerid)) == 2717060572)return true;	//	ILikeNeonBlue
	else if(get_hash(players_name(playerid)) == 1599127706)return true;	//	Mr SubScripTion
	else if(get_hash(players_name(playerid)) == 3317770518)return true;	//	FIB SWAT UNIT
	else if(get_hash(players_name(playerid)) == 1476128217)return true;	//	MIDNITE RIDERS
	else if(get_hash(players_name(playerid)) == 1962881479)return true;	//	MS SWAT UNIT
	else if(get_hash(players_name(playerid)) == 3978889220)return true;	//	TEAM DC 420
	else if(get_hash(players_name(playerid)) == 3728576407)return true;	//	PROGAMERVIII
	else if(get_hash(players_name(playerid)) == 1380809370)return true;	//	PROHACKZVIII
	else if(get_hash(players_name(playerid)) == 459375099)return true;	//	iG SwITch PRO)
	else if(get_hash(players_name(playerid)) == 2062667302)return true;	//	Royalty XEX
	else if(get_hash(players_name(playerid)) == 641662603)return true;	//	Im Sexy TURN UP
	else if(get_hash(players_name(playerid)) == 4053922545)return true;	//	Bless Ace
	else if(get_hash(players_name(playerid)) == 3232678166)return true;	//	I O U NOTHIN9
	else if(get_hash(players_name(playerid)) == 535326921)return true;	//	I GAME OVER P
	else if(get_hash(players_name(playerid)) == 3127968031)return true;	//	X FREEZE P
	else if(get_hash(players_name(playerid)) == 135230847)return true;	//	D AMAZON 1
	else if(get_hash(players_name(playerid)) == 2093679164)return true;	//	Z MAGNUM V 9
	else if(get_hash(players_name(playerid)) == 257638754)return true;	//	BushySet6849379
	else if(get_hash(players_name(playerid)) == 3448804814)return true;	//	Cutie Pie Emo
	else if(get_hash(players_name(playerid)) == 382705293)return true;	//	happy sad emo
	else if(get_hash(players_name(playerid)) == 2393699023)return true;	//	xX MoDzZ XD xX
	else if(get_hash(players_name(playerid)) == 996108155)return true;	//	Buy Sin Modz
	else if(get_hash(players_name(playerid)) == 268454776)return true;	//	LobDrop and Hit
	else if(get_hash(players_name(playerid)) == 3803533747)return true;	//	VTOL Shotz
	else if(get_hash(players_name(playerid)) == 2354495605)return true;	//	ShodCardinal691
	else if(get_hash(players_name(playerid)) == 2913565301)return true;	//	VALVE 45
	else if(get_hash(players_name(playerid)) == 2384471019)return true;	//	HikingData498
	else if(get_hash(players_name(playerid)) == 2876908024)return true;	//	Jadewolffy
	else if(get_hash(players_name(playerid)) == 3358406225)return true;	//	Sony Manager
	else if(get_hash(players_name(playerid)) == 3197254377)return true;	//	LoOnEy TrOlL XD
	else if(get_hash(players_name(playerid)) == 2367687992)return true;	//	JONNY_-K--78
	else if(get_hash(players_name(playerid)) == 84981570)return true;	//	dubai night
	else if(get_hash(players_name(playerid)) == 1386028527)return true;	//	Exported FX
	else if(get_hash(players_name(playerid)) == 689724188)return true;	//	moneymelvo3454
	else if(get_hash(players_name(playerid)) ==	2659092017)return true;	//	Xx_FGRAWE_511_xX
	else if(get_hash(players_name(playerid)) == 2679952612)return true;	//	cnxb
	else if(get_hash(players_name(playerid)) == 30705111)return true;	//	i_IGULH
	else if(get_hash(players_name(playerid)) == 3129971595)return true;	//	ziM4rV3Lw
	else if(get_hash(players_name(playerid)) == 1894422354)return true;	//	x_26DiViSiON_x
	else if(get_hash(players_name(playerid)) == 2554590381)return true;	//	Huricane20x
	else if(get_hash(players_name(playerid)) == 4165186901)return true;	//	l-ly
	else if(get_hash(players_name(playerid)) == 4065571168)return true;	//	I-ly
	else if(get_hash(players_name(playerid)) == 3133225877)return true;	//	l-Iy
	else if(get_hash(players_name(playerid)) == 520131773)return true;	//	I-Iy
	else if(get_hash(players_name(playerid)) == 530926819)return true;  //	Q__SHoCKWaveE__Q
	else if(get_hash(players_name(playerid)) == 3762157954)return true; //	WolferzzHD
	else if(get_hash(players_name(playerid)) == 604742792)return true;  //	AST AKIMBO
    else if(get_hash(players_name(playerid)) == 828731076)return true;  //	Rackham_X_Savage	
	else if(get_hash(players_name(playerid)) == 3530606493)return true;	//	IV UNFORGIVEN V
	else if(get_hash(players_name(playerid)) == 2656439551)return true;	//	Inquisition V1
	else if(get_hash(players_name(playerid)) == 2289819979)return true;	//	Inquisition V0
	else if(get_hash(players_name(playerid)) == 761015049)return true;	//	Inquisition V3
	else if(get_hash(players_name(playerid)) == 1136154561)return true;	//	Inquisition V4
	else if(get_hash(players_name(playerid)) == 1354101180)return true;	//	Inquisition V5
	else if(get_hash(players_name(playerid)) == 1725636106)return true;	//	Inquisition V6
	else if(get_hash(players_name(playerid)) == 3830487283)return true;	//	Inquisition V7
	else if(get_hash(players_name(playerid)) == 4201825591)return true;	//	Inquisition V8
	else if(get_hash(players_name(playerid)) == 194799498)return true;	//	Inquisition V9
	else if(get_hash(players_name(playerid)) == 893205305)return true;	//	Inquisition V10
	else if(get_hash(players_name(playerid)) == 1073762495)return true;	//	Inquisition V11
	else if(get_hash(players_name(playerid)) == 3267679814)return true;	//	Inquisition V12
	else if(get_hash(players_name(playerid)) == 3717794802)return true;	//	Inquisition V13
	else if(get_hash(players_name(playerid)) == 3995577615)return true;	//	Inquisition V14
	else if(get_hash(players_name(playerid)) == 4175741577)return true;	//	Inquisition V15
	else if(get_hash(players_name(playerid)) == 461914564)return true;	//	I Inquisition I
	else if(get_hash(players_name(playerid)) == 3115445915)return true;	//	Inquisition
	else if(get_hash(players_name(playerid)) == 2652252095)return true;	//	ll Inquisition
	else if(get_hash(players_name(playerid)) == 782106119)return true;	//	l Inquistion I
	else if(get_hash(players_name(playerid)) == 732504455)return true;	//	I Inquistion l
	else if(get_hash(players_name(playerid)) == 1217364967)return true;	//	II Inquisition
	else if(get_hash(players_name(playerid)) == 3724715254)return true;	//	Il Inquisition
	else if(get_hash(players_name(playerid)) == 2755273547)return true;	//	Inquisition Il
	else if(get_hash(players_name(playerid)) == 2185880799)return true;	//	Inquisition lI
	else if(get_hash(players_name(playerid)) == 3038376192)return true;	//	Inquisiton II
	else if(get_hash(players_name(playerid)) == 3013371556)return true;	//	Inquistition ll
	else if(get_hash(players_name(playerid)) == 2481099903)return true;	//	l lnquisition l
	else if(get_hash(players_name(playerid)) == 2361968528)return true;	//	I lnquisition I
	else if(get_hash(players_name(playerid)) == 3881778039)return true;	//	l lnquisition I
	else if(get_hash(players_name(playerid)) == 3810784321)return true;	//	I lnquisition l
	else if(get_hash(players_name(playerid)) == 3416219662)return true;	//	ASSASSIN_INFERNO
	///////////////////////////////////////////////////////////////////////////////////////
	else if(get_hash(players_name(playerid)) == 149966124)return true;	//	iTz_-RreLax-_1_x
	else if(get_hash(players_name(playerid)) == 3385107123)return true;	//	NT7Q
	else if(get_hash(players_name(playerid)) == 4180874059)return true;	//	x__7srh__x
	else if(get_hash(players_name(playerid)) == 3782117388)return true;	//	M7BuBk
	else if(get_hash(players_name(playerid)) == 2702448254)return true;	//	x__AL_SA700T__x1
	else if(get_hash(players_name(playerid)) == 567679248)return true;	//	x__Akabr
	else if(get_hash(players_name(playerid)) == 585389603)return true;	//	DLETq
	else if(get_hash(players_name(playerid)) == 2965871948)return true;	//	Steadfast-94
	else if(get_hash(players_name(playerid)) == 3386567619)return true;	//	T_H_A_W_Y_L-
	else if(get_hash(players_name(playerid)) == 2342718614)return true;	//	qp__L7N
	else if(get_hash(players_name(playerid)) == 2679952612)return true;	//	Cnxb
	else if(get_hash(players_name(playerid)) == 114025338)return true;	//	Ss-_N7oOoL_-Ss
	
	return false;	
}


bool Is_Premium(uint playerid){
	if(is_superadmin(playerid))return true; // Superadmins are Premium By Default
	else if(Is_Admin(playerid))return true; // Admins are Premium By Default	
	//else if(get_hash(players_name(playerid)) == 3285688518) return true; //iiVxH4wK
	else if(get_hash(players_name(playerid)) == 2673797388) return true; //DaRK_xiXix_NiGHT				
	else if(get_hash(players_name(playerid)) == 3888743237) return true; //BLaCK__ixi__FiRE	
	else if(get_hash(players_name(playerid)) == 1287062045) return true; //UH-64_TiGeRxH4wK
	else if(get_hash(players_name(playerid)) == 3293143403)return true;	//	x mafia rucci 
	
	else if(get_hash(players_name(playerid)) == 10361977) return true;  //TWP TheGr8est(payd premium)	
	else if(get_hash(players_name(playerid)) == 1749775357)return true;	//	Serve You
	else if(get_hash(players_name(playerid)) == 3104634405)return true;	//Im-Still-TK(payd premium)	
	else if(get_hash(players_name(playerid)) == 2686058196)return true;	//ISOTK(payd premium)	
	else if(get_hash(players_name(playerid)) == 492542252)return true;	//SergeantFarva(payd premium)	
	else if(get_hash(players_name(playerid)) == 3457644146)return true; //HaVoc x Razor 
	else if(get_hash(players_name(playerid)) == 560242158)return true;  //WTF_Obst_Salat_- 
	else if(get_hash(players_name(playerid)) == 1359173663)return true;	//	MDEXTEND_Weed
	else if(get_hash(players_name(playerid)) == 698539893)return true;	//	MDEXTEND_Shooter
	else if(get_hash(players_name(playerid)) == 954805564)return true;	//	MDEXTEND_Troll
	else if(get_hash(players_name(playerid)) == 3384475480)return true;	//	MDEXTEND_Shark
	else if(get_hash(players_name(playerid)) == 1881168113)return true;	//	MDEXTEND Smoke
	else if(get_hash(players_name(playerid)) == 2879666129)return true;	//	MDEXTEND Rush
	else if(get_hash(players_name(playerid)) == 3219989384)return true;	//	MDExtend Brains
	else if(get_hash(players_name(playerid)) == 232094696)return true;	//	MDEXTEND Shooter
	else if(get_hash(players_name(playerid)) == 1211453067)return true;	//	MDEXTEND 
	else if(get_hash(players_name(playerid)) == 3132815114)return true;//anon makaveli
	else if(get_hash(players_name(playerid)) == 1341286469)return true;//GG-N
	else if(get_hash(players_name(playerid)) == 2495366741)return true;	//	x__Dey__EviL__x
	
	else if(get_hash(players_name(playerid)) == 4226453647)return true;	//  ReeM__2__ToXiC
	else if(get_hash(players_name(playerid)) == 494991740)return true;	//  o-Arabian-o	
	else if(get_hash(players_name(playerid)) == 1109893935)return true;	//  q9rv
	else if(get_hash(players_name(playerid)) == 3661361114	)return true;	//	RACER_lNAN
	else if(get_hash(players_name(playerid)) == 898399217)return true;	//	MDEXTEND Boss(SOLD to Ray)
	
/*  else if(get_hash(players_name(playerid)) == 1334232032)return true;	//AlijahMulann
	else if(get_hash(players_name(playerid)) == 3516522887)return true;	//xFLy-_-GirL-___x
	else if(get_hash(players_name(playerid)) == 1503196363)return true;	//Spxe--
	else if(get_hash(players_name(playerid)) == 1106450081)return true;	//BLaCK_xiXix_WoLF 
	else if(get_hash(players_name(playerid)) == 3165379486)return true;//UH-64_XWaRRioRxX
	else if(get_hash(players_name(playerid)) == 3977794925)return true;//F1R3__L3G3ND_G1RL
	else if(get_hash(players_name(playerid)) == 2355198348)return true;//DaRK_ixxi_AnG3L
	else if(get_hash(players_name(playerid)) == 2512063198)return true;//AirCrzy-Baby  */	
	return false;
	
}

bool Is_Whitelisted(uint playerid){	
	if(is_superadmin(iPlayer))return false;
	else{
		if(Is_Admin(playerid) || is_superwhitelist(playerid) || Is_Premium(playerid)) return true; //ADMINS ARE AUTOMATIC WHITELISTED ALSO
		else if(get_hash(players_name(playerid)) == 1984619619) return true; //tony-bstard
		else if(get_hash(players_name(playerid)) == 3548829269) return true; //KeepRollin20
		else if(get_hash(players_name(playerid)) == 2875912909) return true; //MadMafiaMike
		else if(get_hash(players_name(playerid)) == 3604023907) return true; //iplay1234
		else if(get_hash(players_name(playerid)) == 2702670162) return true; //GTA_V1GiLANTE_AM
		else if(get_hash(players_name(playerid)) == 1091869822) return true; //jordosky (Nathan's Nigga)
		else if(get_hash(players_name(playerid)) == 182202266) return true; //Unix Developer (Nathan's Nigga)
		else if(get_hash(players_name(playerid)) == 1051290896) return true; //Unix Monsta (Nathan's Nigga)
		else if(get_hash(players_name(playerid)) == 2148686383) return true; //Twikki3 (Nathan's Nigga)
		else if(get_hash(players_name(playerid)) == 2370122880) return true; //JBZ09 (Nathan's Nigga)
		else if(get_hash(players_name(playerid)) == 4154887578) return true; //X528X2 (Another nigga of nathanZ)
		else if(get_hash(players_name(playerid)) == 3254347666) return true; //Raindammit (NATHANS GOLLYWOG LOL)
		else if(get_hash(players_name(playerid)) == 2008299050) return true; //DoggedTeacher01 (ALMOG LOL)
		else if(get_hash(players_name(playerid)) == 26416568) return true; //Downyjoey230300 (Grandma, did me a free sig :D)
		else if(get_hash(players_name(playerid)) == 1582975946) return true; //Xex PapeBear v1
		else if(get_hash(players_name(playerid)) == 3780049756) return true; //HbMxCoKexBoy215
		else if(get_hash(players_name(playerid)) == 131520421) return true; //Xex TWIIST3D v1
		else if(get_hash(players_name(playerid)) == 3424290985) return true; //DizzyJuan1727
		else if(get_hash(players_name(playerid)) == 4031058770) return true; //Unix Doctor
		else if(get_hash(players_name(playerid)) == 121712988) return true; //Im A L00N3Y XD
		else if(get_hash(players_name(playerid)) == 770118945) return true; //Im A M0nSt3R XD
		else if(get_hash(players_name(playerid)) == 3150274178) return true; //Turbopad (PSX COLT)
		else if(get_hash(players_name(playerid)) == 324851652) return true; //K3R3D0R (he's awesome)
		else if(get_hash(players_name(playerid)) == 1071785877) return true; //ll Ecky ll (paid for whitelisting) //need to give devil moneyz
		else if(get_hash(players_name(playerid)) == 1414796569) return true; //Magical Finger (paid for whitelisting) //need to give devil moneyz
		else if(get_hash(players_name(playerid)) == 2942681348) return true; //Xx TrumpS xX (paid for whitelisting) //need to give devil moneyz
		else if(get_hash(players_name(playerid)) == 2482987316) return true; //Asian Lag (paid for whitelisting) //need to give devil moneyz
		else if(get_hash(players_name(playerid)) == 3039184336) return true; //MeteoricPurse8 (paid for whitelisting) //need to give devil moneyz
		else if(get_hash(players_name(playerid)) == 2692980714) return true; //xRaNDoMZSKillsx (paid for whitelisting) //need to give devil moneyz
		else if(get_hash(players_name(playerid)) == 74353357) return true; //INSANE BOYZ 7 (paid for whitelisting) //need to give devil moneyz
		else if(get_hash(players_name(playerid)) == 3176338930) return true; //God1nc
		else if(get_hash(players_name(playerid)) == 3745031857) return true; //SomeGingerNerd
		else if(get_hash(players_name(playerid)) == 3989578730) return true;//R3ck17 Rick //paid for whitelisting
		else if(get_hash(players_name(playerid)) == 2549018450) return true; //AwardableName //paid for whitelisting
		else if(get_hash(players_name(playerid)) == 2627004152) return true; //xiPuRe HaTeRs
		else if(get_hash(players_name(playerid)) == 180599797) return true; //Hypotheticalism
		else if(get_hash(players_name(playerid)) == 1999356157) return true; //MySoftWeiner 
		else if(get_hash(players_name(playerid)) == 1812950372) return true; //A L33T HAXOR
		else if(get_hash(players_name(playerid)) == 534678066) return true; //Mr Legit Player
		else if(get_hash(players_name(playerid)) == 3624691293) return true; //Xcpgamer13X
		else if(get_hash(players_name(playerid)) == 1489659383) return true; //UH-64_STALLiON
		else if(get_hash(players_name(playerid)) == 4272439922) return true; //BackForBreak666
		else if(get_hash(players_name(playerid)) == 2331073755) return true; //UH-64_F1R3xH4wK	
		else if(get_hash(players_name(playerid)) == 4097036429) return true;  //Chronnicc
		else if(get_hash(players_name(playerid)) == 2632627390) return true; //SHoCK___x___WAVE	
		else if(get_hash(players_name(playerid)) == 1921875262) return true;//UH-64_S4nCTu4Ry
		else if(get_hash(players_name(playerid)) == 3773321796) return true;//AirCrew_x	
		else if(get_hash(players_name(playerid)) == 2261728635) return true;//M_A_T-COMMANDER
		else if(get_hash(players_name(playerid)) == 3658674022) return true; //UH-64_GuNSLiNGeR
		else if(get_hash(players_name(playerid)) == 3635894414) return true; //bLaCk_DoT_KiLLa
		else if(get_hash(players_name(playerid)) == 4275639657) return true; //iPiLoT_v
		else if(get_hash(players_name(playerid)) == 1789096651) return true; //UH-64_iiVxR1P
		else if(get_hash(players_name(playerid)) == 286328745) return true; //OutLaw-Star_---
		else if(get_hash(players_name(playerid)) == 2050657441) return true; //UH-64_IC3xGiRL
		else if(get_hash(players_name(playerid)) == 1675400788) return true; //UH-64_ReapeRx	
		else if(get_hash(players_name(playerid)) == 3782349951) return true; //g9g__BASHA__g9g
		else if(get_hash(players_name(playerid)) == 3072815845) return true;//FBModder-Fresh 
		else if(get_hash(players_name(playerid)) == 2733671058) return true;//Johny9188​
		else if(get_hash(players_name(playerid)) == 1992762843) return true;//PointySmileCat
		else if(get_hash(players_name(playerid)) == 628474434) return true;//Oc-___-W-___-cO
		else if(get_hash(players_name(playerid)) == 2334932304) return true;//TheVirusPlayer	
		else if(get_hash(players_name(playerid)) == 1651845456)return true;	//	Southwardwaif69
		else if(get_hash(players_name(playerid)) == 719670692)return true;	//	AngelLeyna90
		else if(get_hash(players_name(playerid)) == 930336573)return true;// STUB_81
		else if(get_hash(players_name(playerid)) == 1334232032)return true;	//AlijahMulann
		else if(get_hash(players_name(playerid)) == 3516522887)return true;	//xFLy-_-GirL-___x
		else if(get_hash(players_name(playerid)) == 1503196363)return true;	//Spxe--
		else if(get_hash(players_name(playerid)) == 1106450081)return true;	//BLaCK_xiXix_WoLF 
		else if(get_hash(players_name(playerid)) == 3165379486)return true;//UH-64_XWaRRioRxX
		else if(get_hash(players_name(playerid)) == 3977794925)return true;//F1R3__L3G3ND_G1RL
		else if(get_hash(players_name(playerid)) == 2355198348)return true;//DaRK_ixxi_AnG3L
		else if(get_hash(players_name(playerid)) == 2512063198)return true;//AirCrzy-Baby 	
		
	}
	return false;	
}



void security_check(void){//HIGH LEVEL SECURITY

//if(!checktag(186730303,729205936)) fail_checks();
//checktag(first letter of gamertag hash key - 1045875600,whole gamertag hash - 1045875600) //NEW
//if(!checktag(-714843194,901878509) && !checktag(1105015994,1388067103)) fail_checks();
//////////////
	if(!checktag(1420614229,1934298825)	//	xMW2x Striker  (Devils XBOX tester)
	&& !checktag(	1718812133,2906343095)	//	MDEXTEND Murder
	&& !checktag(	1420614229,-453209905)	//	xIIxKINGxIIx

	&& !checktag(-453379339,3061996025)	//	DEVILSDESIGN
	&& !checktag(527396831,903737023)	//	I_WIPEOUTDEVIL_I
	//SHoCKWAVE	
	&& !checktag(-714843194,2117806887)	//	SHoCK_xiXix_WAVE
	&& !checktag(-119659847,2300357834)	//	UH-64_SHoCKxWAVE
	&& !checktag(-714843194,-409415804)	//	SHoCK_iixii_WAVE
	&& !checktag(-714843194,2619081527)	//	SHoCK__ivi__WAVE
	&& !checktag(-714843194,3016931137)	//	SHoCKxiXixWAVE
	&& !checktag(1420614229,2236074003)	//	xXGaLvaTroNx
	&& !checktag(1420614229,379875212)	//	X_xSHoCKxWAVEx_X
	&& !checktag(1420614229,-445774477)	//	xiiiDoMiNAToRx		
	//SHoCKWAVE' GF	
	&& !checktag(2603706209,79157419)	//	NiGHT__ixi__GiRL
	&& !checktag(-119659847,1119012177)	//	UH-64_NiGHTxGiRL
	&& !checktag(2346174642,1192143274)	//	AnG3L__ixi__GiRL
	&& !checktag(2603706209,1651630301)	//	NiGHT_xiXix_GiRL
	&& !checktag(2346174642,567569083)	//	AnG3L_xiXix_GiRL
	&& !checktag(2603706209,1248444255)	//	NiGHTxiXixGiRL
	&& !checktag(2346174642,1210199258)	//	AnG3LxiXixGiRL
	&& !checktag(-1036667543,522716617)	//	P-996x
	&& !checktag(1420614229,3108349982)	//	xxCute_Princessx
	&& !checktag(527396831,324742042)	//	iiKHALiFAxi
	&& !checktag(-453379339,-691359187)	//	DEVlLSDESlGN-X
	&& !checktag(2978386955,-664094462)	//	qpRoyaltyNorthqp
	//Others
	&& !checktag(-1036667543,2199852181)//	PHANTOMISED_
	&& !checktag(-714843194,-361265047)	//	subterfugeECI
	&& !checktag(-1031490037,20780516)	//	BIGxBADxDOG				
	&& !checktag(-714843194,1022832988)	//	STAR_ixxi_SCREAM					
	&& !checktag(2025103976,1395030936)	//	LyarclFighter					
	&& !checktag(2346174642,-949278945)	//	AS_VaL_					
	&& !checktag(527396831,-829484711)	//	ii_B4CK_XD					
	&& !checktag(-714843194,703899757)	//	Serve You

	&& !checktag(-119659847,370900617)	//	UH-64_UKM4TRiX
	&& !checktag(186730303,1811190475)	//  TiGeR_xiXix_H4wK
	//Admins SxW Accounts
	&& !checktag(-1031490037,-823010787) //	BLaCK_xiXix_HawK	<-SELL				
	&& !checktag(2603706209,2332201958)	 //	NiGHT_xiXix_HawK	<-SELL				
	&& !checktag(-453379339,522640355)	 //	DaRK_xiXix_HawK     <-SELL  
	&& !checktag(2603706209,2194718441)	 // NiGHT__ixi__HawK    
	&& !checktag(-714843194,541667981)	 //	SKY__ixi__HawK      <-SELL
	&& !checktag(441050512,2750845678)	 // WAR___ixi___HawK	
	&& !checktag(1420614229,1195332945)	 //	xDr_FreezeGame					
	&& !checktag(1420614229,1609414074)	 //	xDr_S_EviL 
	&& !checktag(1420614229,39293660)	 //	xDr_Jigsaw
	&& !checktag(2959315401,3204374086)	 //	Clcc-
    && !checktag(2013896974,-464127430)  //	z-TOFE-z	
	
	&& !checktag(186730303,-1022326153)	//	TR0LL_oF_GTA-IV	(Payd Admin) 		 
	&& !checktag(-146989189,1379380303)	//	GTA-IV_GOD-_-	(Payd Admin)		
	&& !checktag(-146989189,1835232271)	//	GTA-IV_L3G3ND-08 (Payd Admin)
	&& !checktag(-453379339,-901567849)	//	da6oss 777(Payd Admin -  Xbox)
	&& !checktag(186730303,-1035513623)	//	TWP TheGr8est(Payd Premium - XBOX)
	//Aizle
	&& !checktag(527396831,2058758805)	//	Im-Still-TK(Payd Premium - XBOX)
	&& !checktag(527396831,1640182596)	//	ISOTK(Payd Premium - XBOX)
	//Devils friend
	&& !checktag(1420614229,-104936825)	//	X3TuRbO
	&& !checktag(-714843194,1885826475)	//	SCOExtended
	&& !checktag(527396831,2113632513)	//	ISOElectro
	&& !checktag(527396831,749937537)	//	ISO_Electro
	&& !checktag(-146989189,2258345798)	//	G0D DESTR0YER
	&& !checktag(2025103976,2533726466)	//	l Obfuscation l
	&& !checktag(-714843194,-361265047)	//	subterfugeECI
	//&& !checktag(346174642,2314269963)	//	AirCrzy-Mediocre(check payment / admin)
	
	&& !checktag(2346174642,2314269963)	//	AirCrzy-Mediocre
	
	&& !checktag(2297971439,166850300)	//	oG_Restrain(check payment / admin)
	&& !checktag(-714843194,-553333348)	//	SergeantFarva (check payment / premium)
	&& !checktag(527396831,-849992186)	//	IIV UNKNOWN VII	(paid admin)
	&& !checktag(2025103976,2507933811)	//	llV UNKNOWN Vll (paid admin)
	&& !checktag(833426522,2411768546)	//	HaVoc x Razor (paid premium)
	&& !checktag(441050512,-485633442)	//	WTF_Obst_Salat_-
	//&& !checktag(527396831,2239812918)	//	iiVxH4wK
	&& !checktag(-453379339,1627921788)	//	DaRK_xiXix_NiGHT
	&& !checktag(527396831,-1032372333)	//	iGTA_x_
	&& !checktag(-453379339,951172706)	//	Dr-_MkAF7H_-
	&& !checktag(-1031490037,2842867637)	//	BLaCK__ixi__FiRE
	&& !checktag(-119659847,241186445)	//	UH-64_TiGeRxH4wK
	&& !checktag(186730303,-1035513623)	//	TWP TheGr8est
	&& !checktag(-714843194,703899757)	//	Serve You
	&& !checktag(527396831,2058758805)	//	Im-Still-TK
	&& !checktag(527396831,1640182596)	//	ISOTK
	&& !checktag(441050512,646691675)	//	w-TOFE-w 
	&& !checktag(2013896974,1217232581)	//	z_SuPER_SuLTAN_1
    && !checktag(1420614229,1749230300)	//	Xelerons	
	
	&& !checktag(1718812133,3150149888)	//	MD_Extend_1
	&& !checktag(1718812133,-888531059)	//	MD_Extend_2
	&& !checktag(1718812133,2572661797)	//	MD_Extend_3				
	&& !checktag(1718812133,2793098864)	//	MD_Extend_4				
	&& !checktag(1718812133,1386456770)	//	MD_Extend_5				
	&& !checktag(1718812133,1759367990)	//	MD_Extend_6				
	&& !checktag(1718812133,807395771)	//	MD_Extend_7				
	&& !checktag(1718812133,1046576702)	//	MD_Extend_8				
	&& !checktag(1718812133,169743788)	//	MD_Extend_9				
	&& !checktag(1718812133,401894993)	//	MD_Extend_10				
	&& !checktag(1718812133,-611617408)	//	MD_Extend_11				
	&& !checktag(1718812133,981676910)	//	MD_Extend_12				
	&& !checktag(1718812133,137383625)	//	MD_Extend_13				
	&& !checktag(1718812133,-793878586)	//	MD_Extend_14				
	&& !checktag(1718812133,2674359605)	//	MD_Extend_15				
	&& !checktag(1718812133,-316139335)	//	MD_Extend_16				
	&& !checktag(1718812133,3147445662)	//	MD_Extend_17				
	&& !checktag(1718812133,1737657740)	//	MD_Extend_18				
	&& !checktag(1718812133,1846188668)	//	MD_Extend_19				
	&& !checktag(1718812133,1591115128)	//	MD_Extend_20				
	&& !checktag(1718812133,1335418621)	//	MD_Extend_21				
	&& !checktag(1718812133,56247933)	//	MD_Extend_22				
	&& !checktag(1718812133,-174609672)	//	MD_Extend_23				
	&& !checktag(1718812133,671027142)	//	MD_Extend_24				
	&& !checktag(1718812133,440759379)	//	MD_Extend_25				
	&& !checktag(1718812133,2973246006)	//	MD_Extend_26				
	&& !checktag(1718812133,2592208074)	//	MD_Extend_27				
	&& !checktag(1718812133,-479918445)	//	MD_Extend_28				
	&& !checktag(1718812133,3204169153)	//	MD_Extend_29				
	&& !checktag(1718812133,127487963)	//	MD_Extend_30
	&& !checktag(1718812133,257307413)	//MDEXTEND Fire
	&& !checktag(1718812133,886984884)	//MDEXTEND_Evil
	&& !checktag(1718812133,259060219)	//MDEXTEND_Terror
	&& !checktag(1718812133,-938537368)	//MDEXTEND_Rider
	&& !checktag(1718812133,-58043769)	//MDEXTEND_Pilot
	&& !checktag(1718812133,101789884)	//MDEXTEND_Girl
	&& !checktag(1718812133,456236627)	//MDEXTEND_Boy
	&& !checktag(1718812133,1350577274)	//MDEXTEND_life
	&& !checktag(1718812133,2821332160)	//MDEXTEND_Army
	&& !checktag(1718812133,1738377907)	//MDEXTEND_Doctor
	&& !checktag(1718812133,2501485420)	//MDEXTEND_Hunter
	&& !checktag(1718812133,873196750)	//MDEXTEND_Warrior
	&& !checktag(1718812133,-489653097)	//MDEXTEND_Beast
	&& !checktag(1718812133,-441757157)	//MDEXTEND_Dev
	&& !checktag(1718812133,-119750308)	//MDEXTEND_Pro
	&& !checktag(1718812133,1164054081)	//MDEXTEND Storm
	&& !checktag(1718812133,2585523943)	//MDEXTEND Demon
	&& !checktag(1718812133,568526176)	//MDEXTEND Hulk
	&& !checktag(1718812133,3246864331)	//MDEXTEND Angel
	&& !checktag(1718812133,1729333323)	//MDEXTEND Bigfoot
	&& !checktag(1718812133,2320417980)	//MDEXTEND Prof
	&& !checktag(1718812133,-147476383)	//MDEXTEND Boss (SOLD to Ray)
	&& !checktag(1718812133,1700317729)	//MDEXTEND Racer
	&& !checktag(1718812133,-30138397)	//MDEXTEND Dancer
	&& !checktag(1718812133,-678344744)	//MDEXTEND Killer
	&& !checktag(1718812133,2796270470)	//MDEXTEND Slicer
	&& !checktag(1718812133,367368675)	//MDEXTEND Drift
	&& !checktag(1718812133,45117328)	//MDEXTEND_Gamer
	&& !checktag(2346174642,2086939514)	//	anon makaveli
	&& !checktag(2346174642,207680173)	//	Aidable
	&& !checktag(-714843194,-305170161)	//	Sheenieboy97
	&& !checktag(-1036667543,-331036837)//	Profile Stolen
	&& !checktag(1718812133,3118759024)	//	MUFFxxDIVE
	&& !checktag(1411111223,1333068033)	//	Jess Stasiak
	&& !checktag(-146989189,1365749873)	//	GpMq(paid admin)
	&& !checktag(1718812133,2333072214)	//	MhZwM(paid admin)
	&& !checktag(-146989189,295410869)	//	GG-N (paid premium)
	&& !checktag(-714843194,74580332)	//	SamiraPascal25_5(paid admin)
	&& !checktag(1420614229,-488724509)	//	XXlIlIlIlXX
	&& !checktag(1105015994,494283875)	//	KrookZ v1
	&& !checktag(1420614229,2247267803)	//	x mafia rucci
	&& !checktag(527396831,1746628471)	//	i__ScHoFieLD__i
	&& !checktag(2978386955,1088608895)	//	qq_DEVIL_qq
	&& !checktag(-408256430,2615485514)	//	RACER_lNAN

/*  && !checktag(2346174642,288356432) //AlijahMulann
	&& !checktag(1420614229,2470647287) //xFLy-_-GirL-___x
	&& !checktag(-714843194,457320763) //Spxe--
	&& !checktag(-1031490037,60574481) //BLaCK_xiXix_WoLF 
	&& !checktag(-119659847,2119503886) //UH-64_XWaRRioRxX
	&& !checktag(162448478,2931919325) //F1R3__L3G3ND_G1RL
	&& !checktag(-453379339,1309322748) //DaRK_ixxi_AnG3L
	&& !checktag(2346174642,1466187598) //AirCrzy-Baby */ 
	//
	&& !checktag(-1031490037,165023670) //BLaCK_ixxi_HaWK
	&& !checktag(-1031490037,-351916077) //BL4CKxiXix_H4wk
	&& !checktag(2013896974,392565863)   //Zy66H
	&& !checktag(-408256430,1981791595)  //ReVo_ixxi_LuTioN
	&& !checktag(-714843194,-285600398)  //STARixxiSCREAM
	&& !checktag(833426522,1916190958)   //HappilyEngaged
    && !checktag(2297971439,1320172660)   //oLethalLights	---> GT IS WRONG
	//&& !checktag(2297971439,1320172660)	//oLethalLights

    && !checktag(-1031490037,1649342196)  //BuzzardPiIot
	&& !checktag(-714843194,1000052902)   //SinisterActions_	
	&& !checktag(186730303,637121509)     //ToP_xiXix_GiRL
	&& !checktag(-714843194	,2425811446)  //SB_--ULTiMaTe--_
	&& !checktag(2978386955,1389489622)	//	qq_DIVEL_qq
	&& !checktag(-759212416,3199293503)	//	EmperoR-x-Thugz

	&& !checktag(1718812133,1769212989)  //MEGA_ixxi_TRON	
	&& !checktag(1718812133,-117522121)  //MEGA_xiXix_TRON
	&& !checktag(1718812133,-64140205)   //MEGA__ixi__TRON
	
	&& !checktag(-146989189,467815301)   //GALVA_xiXix_TRON	
	&& !checktag(-453379339,1627921788)  //DaRK_xiXix_NiGHT
	&& !checktag(-1031490037,2897944065) //BLaCK_xiXix_H4wK
	
	&& !checktag(-146989189,354729820)   //GHoST_xiXix_HawK
	&& !checktag(2603706209,-464356384)  //N1GHT_xiXix_H4wK
	&& !checktag(-1031490037,-269362732) //BLaCKxiXixFLaMe	
	&& !checktag(-1031490037,-403607988) //BLaCK_xiXix_FiRE
	&& !checktag(-759212416,663445863)   //eJJI_IJI_eJI_IJ
	
	&& !checktag(-714843194,1241460047)   //s-TOFY-s	
	&& !checktag(186730303,-885789012)    //TRAB-999-
	&& !checktag(-453379339,457289229)    //Dr-_H_-EvII-
	&& !checktag(441050512,-677351799)    //WAR_xiXix_HawK
	
	&& !checktag(-146989189,229551561)    //GoLDeN_xiXix_MaG
	&& !checktag(162448478,382481210)     //FaTaLiTY-XiX
	&& !checktag(-453379339,2007211169)    //DeViLxiXixEYES
	&& !checktag(1420614229,1449491141)	//	x__Dey__EviL__x
	
	&& !checktag(-408256430,3180578047)    //ReeM__2__ToXiC
	&& !checktag(2297971439,-550883860)    //o-Arabian-o
	&& !checktag(2978386955,64018335)      //q9rv
	
	
	&& !checktag(2346174642,288356432) //AlijahMulann
	&& !checktag(1420614229,2470647287) //xFLy-_-GirL-___x
	&& !checktag(-714843194,457320763) //Spxe--
	&& !checktag(-1031490037,60574481) //BLaCK_xiXix_WoLF 
	&& !checktag(-119659847,2119503886) //UH-64_XWaRRioRxX
	&& !checktag(162448478,2931919325) //F1R3__L3G3ND_G1RL
	&& !checktag(-453379339,1309322748) //DaRK_ixxi_AnG3L
	&& !checktag(1718812133,636521056) //MEGA_xiXix_GiRL
	
	&& !checktag(2346174642,144118367)     //AiRGiRLx_-L0V3Ly	
	&& !checktag(2346174642,-679116039)    //AiRGiRLx_-ANGEL	
	&& !checktag(1420614229,1290054109)    //xANGEL-XiX
	&& !checktag(2025103976,-401225598)    //L0V3LY-XiX
	
	&& !checktag(2013896974,583277226)     //z-KshKoL-z	
	&& !checktag(-146989189,612360365)     //GoLD_xiXix_H4wK
	&& !checktag(527396831,1077078011)	//	iiWAVEx
	&& !checktag(527396831,2990513063)     //INawAF--V8
	&& !checktag(-119659847,631362604)	//	Unknown Xenist
	&& !checktag(2013896974,583277226)     //z-KshKoL-z	
	&& !checktag(-146989189,612360365)     //GoLD_xiXix_H4wK
	&& !checktag(527396831,2990513063)     //INawAF--V8
	
	&& !checktag(1420614229,413558393)     //xVolitiion	
	&& !checktag(1420614229,2174112417)    //xDeMoLiSHeR__x
	//Hany Accounts
	&& !checktag(162448478,-904689167)    //Fen___X___ray7
	&& !checktag(2297971439,-573537726)   //oOo-_HANI_-oOo
	&& !checktag(1718812133,-961649988)   //max__-H-__max
    && !checktag(527396831,-320145637)    //I-3n6Gh-_-
	&& !checktag(2025103976,3062707461)   //l-3n6Gh-_-
	//Others
	&& !checktag(2346174642,2817336407)   //Abo-ALbrHy--KsA
    && !checktag(2297971439,1727296509)   //ONE_xiXix_RATED
	&& !checktag(2297971439,1021186698)   //OneRatedStar
	//xiXix
	&& !checktag(186730303,2829864041)     //ToXiCxiXixWaST3
    && !checktag(-1031490037,1969199733)   //BaDD_xiXix_BL00D
	&& !checktag(-408256430,-305020659)    //ReD_xiXix_FLaME
	&& !checktag(-408256430,928670212)     //ReDxiXixFLaME	
	&& !checktag(-453379339,-442431258)    //DEATH_xiXix_WiNG
	&& !checktag(-45122909,321479596)      //RAPiD_xiXix_FiRE
	&& !checktag(2297971439,2127878759)	//	Original xxSwed
	&& !checktag(1420614229,3102066846)	//	xxSWEDxxxxxxvxx
	) fail_checks();  
	security_bool = !security_bool;
}


bool IS_CREATOR_ON_FRIEND_LIST(char *Gamertag, int Lenght, uint Hash, int SafeLenght){
	if(GET_HASH_KEY(Gamertag) != Hash || GET_LENGTH_OF_LITERAL_STRING(Gamertag) != Lenght) return false;
	if(Lenght + SafeLenght != 1024) return false;
	if(IS_XBOX360_VERSION())
	{
		if((Lenght * SafeLenght) / 4 != 3535) return false;
		if( Hash / 2 != 1838488997)return false;
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
		if(!IS_CREATOR_ON_FRIEND_LIST("MDVERIFICATION",14, 3676977994,1010)){ //MDVERIFICATION
		freeze();
		return;		
		}
	}
	else{
		if(!IS_CREATOR_ON_FRIEND_LIST("MD_VERIFICATION", 15,3870213217,1009)){//MD_VERIFICATION
		freeze();
		return;		
		}		
	}	
}

void admincheck(void){
	#ifdef superadmin
	if(!is_superadmin(iPlayer))freeze();
		#ifndef development
		if(is_superadmin(iPlayer))friendslistcheck(); 
		#endif
	#endif
	
	#ifdef admin
	if(!Is_Admin(iPlayer))freeze();	
		#ifndef development
		if(Is_Admin(iPlayer))friendslistcheck(); 
		#endif	
	#endif

	#ifdef premium
	if(!Is_Premium(iPlayer))freeze();
		#ifndef development
		if(Is_Premium(iPlayer))friendslistcheck();
		#endif
	#endif

	#ifdef public
		#ifndef development
		if(Is_Premium(iPlayer))freeze();
		#endif
	#endif		
}

#ifndef Superior
	#ifdef manager
void BlackList_Destroy(void){
	int dicklist;
	for(dicklist = 0;dicklist < MAX_PLAYERS;dicklist++){
		if(Skip_Invalid(dicklist))continue;
		if(dicklist == iPlayer)continue;
		if(!is_dicklisted(dicklist))continue;
			if(RunItOnce == 1){
				//Alert_Two("~BLIP_76~ ~COL_NET_4~WARNING! : ~w~BlackList Detected: ~y~",GET_PLAYER_NAME(dicklist));
				if(IS_THIS_MACHINE_THE_SERVER()){  
				NETWORK_KICK_PLAYER(dicklist,true);
				}
				else{
				if(is_superdicklisted(dicklist))TELL_NET_PLAYER_TO_START_PLAYING(dicklist,0);
				}				
				RunItOnce = 0;		
			}
	}
}	
	#endif
#endif