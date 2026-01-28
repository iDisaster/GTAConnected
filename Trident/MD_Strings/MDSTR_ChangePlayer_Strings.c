/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */  
 
 //General change player strings - Coded one time  Pplayer and admin
 
void MD_Ped_Model_Uniform_Strings(int MenuItem_Index){
	char* Uniform_string[14];
	Uniform_string[0] = "< Fat Cop >"; 
	Uniform_string[1] = "< N.O.O.S.E (Crouched) >"; 
	Uniform_string[2] = "< N.O.O.S.E >"; 
	Uniform_string[3] = "< FBI >";
	Uniform_string[4] = "< Normal Cop >"; 
	Uniform_string[5] = "< Traffic Cop >";
	Uniform_string[6] = "< Fire man >"; 
	Uniform_string[7] = "< Fire Chief >"; 
	Uniform_string[8] = "< Security >";
	Uniform_string[9] = "< Armoured >"; 
	Uniform_string[10] = "< Club Fit >"; 
	Uniform_string[11] = "< Prisoner >"; 
	Uniform_string[12] = "< Prisoner Old >"; 
	Uniform_string[13] = "< Cluck >";			
	menu_item[MenuItem_Index].charval = Uniform_string[menu_item[MenuItem_Index].num_val - 1];
}
void MD_Ped_Model_Gang_Strings(int MenuItem_Index){
	char* Gang_string[4];
	Gang_string[0] = "< Normal >";
	Gang_string[1] = "< Normal + Coat >";
	Gang_string[2] = "< Experienced >";
	Gang_string[3] = "< Boss >";
	menu_item[MenuItem_Index].charval = Gang_string[menu_item[MenuItem_Index].num_val - 1];	
}
void MD_Ped_Model_Medical_Strings(int MenuItem_Index){
	char* Medical_string[5];
	Medical_string[0] = "< Male Doctor >";
	Medical_string[1] = "< Female Doctor >";
	Medical_string[2] = "< Female Nurse >";
	Medical_string[3] = "< Scrub Doctor >";
	Medical_string[4] = "< Dodgy Doctor >";			
	menu_item[MenuItem_Index].charval = Medical_string[menu_item[MenuItem_Index].num_val - 1];
}
void MD_Ped_Model_Stripper_Strings(int MenuItem_Index){
	char* Stripper_string[2];
	Stripper_string[0] = "< White >";
	Stripper_string[1] = "< Black >";		
	menu_item[MenuItem_Index].charval = Stripper_string[menu_item[MenuItem_Index].num_val - 1];
}
void MD_Ped_Model_Business_Strings(int MenuItem_Index){
	char* Business_String[9];
	Business_String[0] = "< Business 1 >"; 	
	Business_String[1] = "< Business 2 >"; 	
	Business_String[2] = "< Business 3 >"; 	
	Business_String[3] = "< Business 4 >"; 	
	Business_String[4] = "< Business 5 >"; 	
	Business_String[5] = "< Business 6 >"; 	
	Business_String[6] = "< Business 7 >"; 	
	Business_String[7] = "< Business 8 >"; 	
	Business_String[8] = "< Business 9 >"; 	
	menu_item[MenuItem_Index].charval = Business_String[menu_item[MenuItem_Index].num_val - 1];
}
void MD_Ped_Model_Cluck_Strings(int MenuItem_Index){
	char* cluck_string[3];
	cluck_string[0] = "< Female >";
	cluck_string[1] = "< Male >";
	menu_item[MenuItem_Index].charval = cluck_string[menu_item[MenuItem_Index].num_val - 1];
}
void MD_Ped_Model_Funny_Strings(int MenuItem_Index){
	char* Funny_String[2];
	Funny_String[0] = "< Gay Middle Aged >";
	Funny_String[1] = "< Gay Young >";
	menu_item[MenuItem_Index].charval = Funny_String[menu_item[MenuItem_Index].num_val - 1];
}
void MD_Ped_Model_SingleP_Strings(int MenuItem_Index){
	char* Various_String[9];
	Various_String[0] = "< Lil Jacob >";
	Various_String[1] = "< Brucie >";
	Various_String[2] = "< Roman >";
	Various_String[3] = "< Dwayne >";
	Various_String[4] = "< Badman >";
	Various_String[5] = "< Dmitri >";
	Various_String[6] = "< Michelle >";
	Various_String[7] = "< Packie >";
	Various_String[8] = "< Playboy >";
	menu_item[MenuItem_Index].charval = Various_String[menu_item[MenuItem_Index].num_val - 1];
}
void MD_Texture_Head_Strings(int MenuItem_Index){
	char* Text_Head_String[5];
	Text_Head_String[0] = "< REMOVE >";
	Text_Head_String[1] = "< Superhero Female >";
	Text_Head_String[2] = "< Superhero Male >";
	Text_Head_String[3] = "< Jamaican >";
	Text_Head_String[4] = "< Jamaican 2 >";	
	menu_item[MenuItem_Index].charval = Text_Head_String[menu_item[MenuItem_Index].num_val];
}
void MD_Texture_Body_Strings(int MenuItem_Index){
	char* Text_Body_String[7];
	Text_Body_String[0] = "< Variations 1 >";
	Text_Body_String[1] = "< Variations 2 >";
	Text_Body_String[2] = "< Variations 3 >";
	Text_Body_String[3] = "< Variations 4 >";
	Text_Body_String[4] = "< Variations 5 >";
	Text_Body_String[5] = "< Variations 6 >";
	Text_Body_String[6] = "< Variations 7 >";	
	menu_item[MenuItem_Index].charval = Text_Body_String[(menu_item[MenuItem_Index].num_val - 1)];
}

//Order
void Player_Changer_Strings(int MenuItem_Index){
	if(MenuItem_Index == 1) return MD_Spy_Strings(MenuItem_Index);
	else if(MenuItem_Index == 2) return MD_Delete_Strings(MenuItem_Index);
	else if(MenuItem_Index == 3) return MD_PlayerOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
	//Jumpover
	//Sco
	//Function
	//Bool
	if(MenuItem_Index == 9)return MD_Texture_Head_Strings(MenuItem_Index);
	else if(MenuItem_Index == 10)return MD_Texture_Body_Strings(MenuItem_Index);
	else if(MenuItem_Index == 11)return MD_Ped_Model_Uniform_Strings(MenuItem_Index);
	else if(MenuItem_Index == 12)return MD_Ped_Model_Gang_Strings(MenuItem_Index);	
	else if(MenuItem_Index == 13)return MD_Ped_Model_Stripper_Strings(MenuItem_Index);
	else if(MenuItem_Index == 14)return MD_Ped_Model_Medical_Strings(MenuItem_Index);
	else if(MenuItem_Index == 15)return MD_Ped_Model_Business_Strings(MenuItem_Index);
	else if(MenuItem_Index == 16)return MD_Ped_Model_Cluck_Strings(MenuItem_Index);
	else if(MenuItem_Index == 17)return MD_Ped_Model_Funny_Strings(MenuItem_Index);
	else if(MenuItem_Index == 18)return MD_Ped_Model_SingleP_Strings(MenuItem_Index);
	else if(MenuItem_Index == 19)return MD_Stride_Strings(MenuItem_Index);
}
//Order

void AllModelsItem6(int MenuItem_Index){
	char* Model_String[46];		
	Model_String[0] = "< IG_ANNA >"; 
	Model_String[1] = "< IG_ANTHONY >";
	Model_String[2] = "< IG_BADMAN >";
	Model_String[3] = "< IG_BERNIE_CRANE >";
	Model_String[4] = "< IG_BLEDAR >";
	Model_String[5] = "< IG_BRIAN >";
	Model_String[6] = "< IG_BULGARIN >";
	Model_String[7] = "< IG_CHARISE >";
	Model_String[8] = "< IG_CHARLIEUC >";
	Model_String[9] = "< IG_CLARENCE >";
	Model_String[10] = "< IG_DARDAN >";
	Model_String[11] = "< IG_DARKO >";
	Model_String[12] = "< IG_DERRICK_MC >";
	Model_String[13] = "< IG_DMITRI >";
	Model_String[14] = "< IG_DWAYNE >";
	Model_String[15] = "< IG_EDDIELOW >";
	Model_String[16] = "< IG_FAUSTIN >";
	Model_String[17] = "< IG_FRANCIS_MC >";
	Model_String[18] = "< IG_FRENCH_TOM >";
	Model_String[19] = "< IG_GORDON >";
	Model_String[20] = "< IG_GRACIE >";
	Model_String[21] = "< IG_HOSSAN >";
	Model_String[22] = "< IG_ILYENA >";
	Model_String[23] = "< IG_ISAAC >";
	Model_String[24] = "< IG_IVAN >";
	Model_String[25] = "< IG_JAY >";
	Model_String[26] = "< IG_JASON >";
	Model_String[27] = "< IG_JEFF >";
	Model_String[28] = "< IG_JIMMY >";
	Model_String[29] = "< IG_JOHNNYBIKER >";
	Model_String[30] = "< IG_KATEMC >";
	Model_String[31] = "< IG_KENNY >";
	Model_String[32] = "< IG_LILJACOB >";
	Model_String[33] = "< IG_LILJACOBW >";
	Model_String[34] = "< IG_LUCA >";
	Model_String[35] = "< IG_LUIS >";
	Model_String[36] = "< IG_MALLORIE >";
	Model_String[37] = "< IG_MAMC >";
	Model_String[38] = "< IG_MANNY >";
	Model_String[39] = "< IG_MARNIE >";
	Model_String[40] = "< IG_MEL >";
	Model_String[41] = "< IG_MICHAEL >";
	Model_String[42] = "< IG_MICHELLE >";
	Model_String[43] = "< IG_MICKEY >";
	Model_String[44] = "< IG_PACKIE_MC >";
	Model_String[45] = "< IG_PATHOS >";
	menu_item[MenuItem_Index].charval = Model_String[(menu_item[MenuItem_Index].num_val - 1)];
}
void AllModelsItem7(int MenuItem_Index){
	char* Model_String[11];		
	Model_String[0] = "< IG_PETROVIC >"; 
	Model_String[1] = "< IG_PHIL_BELL >";
	Model_String[2] = "< IG_PLAYBOY_X >";
	Model_String[3] = "< IG_RAY_BOCCINO >";
	Model_String[4] = "< IG_RICKY >";
	Model_String[5] = "< IG_ROMAN >";
	Model_String[6] = "< IG_ROMANW >";
	Model_String[7] = "< IG_SARAH >";
	Model_String[8] = "< IG_TUNA >";
	Model_String[9] = "< IG_VINNY_SPAZ >";
	Model_String[10] = "< IG_VLAD >";
	menu_item[MenuItem_Index].charval = Model_String[(menu_item[MenuItem_Index].num_val - 1)];
}
void AllModelsItem8(int MenuItem_Index){
	char* Model_String[44];		
	Model_String[0] = "< M_Y_GAFR_LO_01 >"; 
	Model_String[1] = "< M_Y_GAFR_LO_02 >";
	Model_String[2] = "< M_Y_GAFR_HI_01 >";
	Model_String[3] = "< M_Y_GAFR_HI_02 >";
	Model_String[4] = "< M_Y_GALB_LO_01 >";
	Model_String[5] = "< M_Y_GALB_LO_02 >";
	Model_String[6] = "< M_Y_GALB_LO_03 >";
	Model_String[7] = "< M_Y_GALB_LO_04 >";
	Model_String[8] = "< M_M_GBIK_LO_03 >";
	Model_String[9] = "< M_Y_GBIK_HI_01 >";
	Model_String[10] = "< M_Y_GBIK_HI_02 >";
	Model_String[11] = "< M_Y_GBIK02_LO_02 >";
	Model_String[12] = "< M_Y_GIRI_LO_01 >";
	Model_String[13] = "< M_Y_GIRI_LO_02 >";
	Model_String[14] = "< M_Y_GIRI_LO_03 >";
	Model_String[15] = "< M_M_GJAM_HI_01 >";
	Model_String[16] = "< M_M_GJAM_HI_02 >";
	Model_String[17] = "< M_M_GJAM_HI_03 >";
	Model_String[18] = "< M_Y_GJAM_LO_01 >";
	Model_String[19] = "< M_Y_GJAM_LO_02 >";
	Model_String[20] = "< M_Y_GKOR_LO_01 >";
	Model_String[21] = "< M_Y_GKOR_LO_02 >";
	Model_String[22] = "< M_Y_GLAT_LO_01 >";
	Model_String[23] = "< M_Y_GLAT_LO_02 >";
	Model_String[24] = "< M_Y_GLAT_HI_01 >";
	Model_String[25] = "< M_Y_GLAT_HI_02 >";
	Model_String[26] = "< M_Y_GMAF_HI_01 >";
	Model_String[27] = "< M_Y_GMAF_HI_02 >";
	Model_String[28] = "< M_Y_GMAF_LO_01 >";
	Model_String[29] = "< M_Y_GMAF_LO_02 >";
	Model_String[30] = "< M_O_GRUS_HI_01 >";
	Model_String[31] = "< M_Y_GRUS_LO_01 >";
	Model_String[32] = "< M_Y_GRUS_LO_02 >";
	Model_String[33] = "< M_Y_GRUS_HI_02 >";
	Model_String[34] = "< M_M_GRU2_HI_01 >";
	Model_String[35] = "< M_M_GRU2_HI_02 >";
	Model_String[36] = "< M_M_GRU2_LO_02 >";
	Model_String[37] = "< M_Y_GRU2_LO_01 >";
	Model_String[38] = "< M_M_GTRI_HI_01 >";
	Model_String[39] = "< M_M_GTRI_HI_02 >";
	Model_String[40] = "< M_Y_GTRI_LO_01 >";
	Model_String[41] = "< M_Y_GTRI_LO_02 >";
	Model_String[42] = "< M_Y_GBIK_LO_01 >";
	Model_String[43] = "< M_Y_GBIK_LO_02 >";	
	
	menu_item[MenuItem_Index].charval = Model_String[(menu_item[MenuItem_Index].num_val - 1)];
}
void AllModelsItem9(int MenuItem_Index){
	char* Model_String[50];		
	Model_String[0] = "< M_M_ALCOHOLIC >"; 
	Model_String[1] = "< M_M_ARMOURED >";
	Model_String[2] = "< M_M_BUSDRIVER >";
	Model_String[3] = "< M_M_CHINATOWN_01 >";
	Model_String[4] = "< M_M_CRACKHEAD >";
	Model_String[5] = "< M_M_DOC_SCRUBS_01 >";
	Model_String[6] = "< M_M_DOCTOR_01 >";
	Model_String[7] = "< M_M_DODGYDOC >";
	Model_String[8] = "< M_M_EECOOK >";
	Model_String[9] = "< M_M_ENFORCER >";
	Model_String[10] = "< M_M_FACTORY_01 >";
	Model_String[11] = "< M_M_FATCOP_01 >";
	Model_String[12] = "< M_M_FBI >";
	Model_String[13] = "< M_M_FEDCO >";
	Model_String[14] = "< M_M_FIRECHIEF >";
	Model_String[15] = "< M_M_GUNNUT_01 >";
	Model_String[16] = "< M_M_HELIPILOT_01 >";
	Model_String[17] = "< M_M_HPORTER_01 >";
	Model_String[18] = "< M_M_KOREACOOK_01 >";
	Model_String[19] = "< M_M_LAWYER_01 >";
	Model_String[20] = "< M_M_LAWYER_02 >";
	Model_String[21] = "< M_M_LOONYBLACK >";
	Model_String[22] = "< M_M_PILOT >";
	Model_String[23] = "< M_M_PINDUS_01 >";
	Model_String[24] = "< M_M_POSTAL_01 >";
	Model_String[25] = "< M_M_SAXPLAYER_01 >";
	Model_String[26] = "< M_M_SECURITYMAN >";
	Model_String[27] = "< M_M_SELLER_01 >";
	Model_String[28] = "< M_M_SHORTORDER >";
	Model_String[29] = "< M_M_STREETFOOD_01 >";
	Model_String[30] = "< M_M_SWEEPER >";
	Model_String[31] = "< M_M_TAXIDRIVER >";
	Model_String[32] = "< M_M_TELEPHONE >";
	Model_String[33] = "< M_M_TENNIS >";
	Model_String[34] = "< M_M_TRAIN_01 >";
	Model_String[35] = "< M_M_TRAMPBLACK >";
	Model_String[36] = "< M_M_TRUCKER_01 >";
	Model_String[37] = "< M_O_JANITOR >";
	Model_String[38] = "< M_O_HOTEL_FOOT >";
	Model_String[39] = "< M_O_MPMOBBOSS >";
	Model_String[40] = "< M_Y_AIRWORKER >";
	Model_String[41] = "< M_Y_BARMAN_01 >";
	Model_String[42] = "< M_Y_BOUNCER_01 >";
	Model_String[43] = "< M_Y_BOUNCER_02 >";
	Model_String[44] = "< M_Y_BOWL_01 >";	
	Model_String[45] = "< M_Y_BOWL_02 >";	
	Model_String[46] = "< M_Y_CHINVEND_01 >";
	Model_String[47] = "< M_Y_CLUBFIT >";
	Model_String[48] = "< M_Y_CONSTRUCT_01 >";
	Model_String[49] = "< M_Y_CONSTRUCT_02 >";
	
	menu_item[MenuItem_Index].charval = Model_String[(menu_item[MenuItem_Index].num_val - 1)];
}	
void AllModelsItem10(int MenuItem_Index){
	char* Model_String[37];		
	Model_String[0] = "< M_Y_CONSTRUCT_03 >"; 
	Model_String[1] = "< M_Y_COP >";
	Model_String[2] = "< M_Y_COP_TRAFFIC >";
	Model_String[3] = "< M_Y_COURIER >";
	Model_String[4] = "< M_Y_COWBOY_01 >";
	Model_String[5] = "< M_Y_DEALER >";
	Model_String[6] = "< M_Y_DRUG_01 >";
	Model_String[7] = "< M_Y_FF_BURGER_R >";
	Model_String[8] = "< M_Y_FF_CLUCK_R >";
	Model_String[9] = "< M_Y_FF_RSCAFE >";
	Model_String[10] = "< M_Y_FF_TWCAFE >";
	Model_String[11] = "< M_Y_FF_WSPIZZA_R >";
	Model_String[12] = "< M_Y_FIREMAN >";
	Model_String[13] = "< M_Y_GARBAGE >";
	Model_String[14] = "< M_Y_GOON_01 >";
	Model_String[15] = "< M_Y_GYMGUY_01 >";
	Model_String[16] = "< M_Y_MECHANIC_02 >";
	Model_String[17] = "< M_Y_MODO >";
	Model_String[18] = "< M_Y_NHELIPILOT >";
	Model_String[19] = "< M_Y_PERSEUS >";
	Model_String[20] = "< M_Y_PINDUS_01 >";
	Model_String[21] = "< M_Y_PINDUS_02 >";
	Model_String[22] = "< M_Y_PINDUS_03 >";
	Model_String[23] = "< M_Y_PMEDIC >";
	Model_String[24] = "< M_Y_PRISON >";
	Model_String[25] = "< M_Y_PRISONAOM >";
	Model_String[26] = "< M_Y_ROMANCAB >";
	Model_String[27] = "< M_Y_RUNNER >";
	Model_String[28] = "< M_Y_SHOPASST_01 >";
	Model_String[29] = "< M_Y_STROOPER >";
	Model_String[30] = "< M_Y_SWAT >";
	Model_String[31] = "< M_Y_SWORDSWALLOW >";
	Model_String[32] = "< M_Y_THIEF >";
	Model_String[33] = "< M_Y_VALET >";
	Model_String[34] = "< M_Y_VENDOR >";
	Model_String[35] = "< M_Y_FRENCHTOM >";
	Model_String[36] = "< M_Y_JIM_FITZ >";
	
	menu_item[MenuItem_Index].charval = Model_String[(menu_item[MenuItem_Index].num_val - 1)];
}	
void AllModelsItem11(int MenuItem_Index){
	char* Model_String[16];		
	Model_String[0] = "< F_O_MAID_01 >"; 
	Model_String[1] = "< F_O_BINCO >";
	Model_String[2] = "< F_Y_BANK_01 >";
	Model_String[3] = "< F_Y_DOCTOR_01 >";
	Model_String[4] = "< F_Y_GYMGAL_01 >";
	Model_String[5] = "< F_Y_FF_BURGER_R >";
	Model_String[6] = "< F_Y_FF_CLUCK_R >";
	Model_String[7] = "< F_Y_FF_RSCAFE >";
	Model_String[8] = "< F_Y_FF_TWCAFE >";
	Model_String[9] = "< F_Y_FF_WSPIZZA_R >";
	Model_String[10] = "< F_Y_HOOKER_01 >";
	Model_String[11] = "< F_Y_HOOKER_03 >";
	Model_String[12] = "< F_Y_NURSE >";
	Model_String[13] = "< F_Y_STRIPPERC01 >";
	Model_String[14] = "< F_Y_STRIPPERC02 >";
	Model_String[15] = "< F_Y_WAITRESS_01 >";
	
	menu_item[MenuItem_Index].charval = Model_String[(menu_item[MenuItem_Index].num_val - 1)];
}
void AllModelsItem12(int MenuItem_Index){
	char* Model_String[87];		
	Model_String[0] = "< M_Y_CONSTRUCT_03 >"; 
	Model_String[1] = "< M_Y_COP >";
	Model_String[2] = "< M_Y_COP_TRAFFIC >";
	Model_String[3] = "< M_Y_COURIER >";
	Model_String[4] = "< M_Y_COWBOY_01 >";
	Model_String[5] = "< M_Y_DEALER >";
	Model_String[6] = "< M_Y_DRUG_01 >";
	Model_String[7] = "< M_Y_FF_BURGER_R >";
	Model_String[8] = "< M_Y_FF_CLUCK_R >";
	Model_String[9] = "< M_Y_FF_RSCAFE >";
	Model_String[10] = "< M_Y_FF_TWCAFE >";
	Model_String[11] = "< M_Y_FF_WSPIZZA_R >";
	Model_String[12] = "< M_Y_FIREMAN >";
	Model_String[13] = "< M_Y_GARBAGE >";
	Model_String[14] = "< M_Y_GOON_01 >";
	Model_String[15] = "< M_Y_GYMGUY_01 >";
	Model_String[16] = "< M_Y_MECHANIC_02 >";
	Model_String[17] = "< M_Y_MODO >";
	Model_String[18] = "< M_Y_NHELIPILOT >";
	Model_String[19] = "< M_Y_PERSEUS >";
	Model_String[20] = "< M_Y_PINDUS_01 >";
	Model_String[21] = "< M_Y_PINDUS_02 >";
	Model_String[22] = "< M_Y_PINDUS_03 >";
	Model_String[23] = "< M_Y_PMEDIC >";
	Model_String[24] = "< M_Y_PRISON >";
	Model_String[25] = "< M_Y_PRISONAOM >";
	Model_String[26] = "< M_Y_ROMANCAB >";
	Model_String[27] = "< M_Y_RUNNER >";
	Model_String[28] = "< M_Y_SHOPASST_01 >";
	Model_String[29] = "< M_Y_STROOPER >";
	Model_String[30] = "< M_Y_SWAT >";
	Model_String[31] = "< M_Y_SWORDSWALLOW >";
	Model_String[32] = "< M_Y_THIEF >";
	Model_String[33] = "< M_Y_VALET >";
	Model_String[34] = "< M_Y_VENDOR >";
	Model_String[35] = "< M_Y_FRENCHTOM >";
	Model_String[36] = "< M_Y_JIM_FITZ >";
	Model_String[37] = "< M_Y_TOURIST_02 >";
	Model_String[38] = "< M_Y_TOUGH_05 >";
	Model_String[39] = "< M_Y_STREETPUNK_05 >";
	Model_String[40] = "< M_Y_STREETPUNK_04 >";
	Model_String[41] = "< M_Y_STREETPUNK_02 >";
	Model_String[42] = "< M_Y_STREETBLK_03 >";
	Model_String[43] = "< M_Y_STREETBLK_02 >";
	Model_String[44] = "< M_Y_STREET_04 >";
	Model_String[45] = "< M_Y_STREET_01 >";
	Model_String[46] = "< M_Y_STREET_03 >";
	Model_String[47] = "< M_Y_SOHO_01 >";
	Model_String[48] = "< M_Y_SKATEBIKE_01 >";
	Model_String[49] = "< M_Y_SHADY_02 >";
	Model_String[50] = "< M_Y_QUEENSBRIDGE >";
	Model_String[51] = "< M_Y_PVILLBO_03 >";
	Model_String[52] = "< M_Y_PVILLBO_02 >";
	Model_String[53] = "< M_Y_PVILLBO_01 >";
	Model_String[54] = "< M_Y_PRICH_01 >";
	Model_String[55] = "< M_Y_PQUEENS_01 >";
	Model_String[56] = "< M_Y_PORIENT_01 >";
	Model_String[57] = "< M_Y_PMANHAT_02 >";
	Model_String[58] = "< M_Y_PMANHAT_01 >";
	Model_String[59] = "< M_Y_PLATIN_03 >";
	Model_String[60] = "< M_Y_PLATIN_02 >";
	Model_String[61] = "< M_Y_PLATIN_01 >";
	Model_String[62] = "< M_Y_PJERSEY_01 >";
	Model_String[63] = "< M_Y_PHARLEM_01 >";
	Model_String[64] = "< M_Y_PHARBRON_01 >";
	Model_String[65] = "< M_Y_PCOOL_02 >";
	Model_String[66] = "< M_Y_PCOOL_01 >";
	Model_String[67] = "< M_Y_PBRONX_01 >";
	Model_String[68] = "< M_Y_LEASTSIDE_01 >";
	Model_String[69] = "< M_Y_HASID_01 >";
	Model_String[70] = "< M_Y_HARLEM_04 >";
	Model_String[71] = "< M_Y_HARLEM_02 >";
	Model_String[72] = "< M_Y_HARLEM_01 >";
	Model_String[73] = "< M_O_STREET_01 >";
	Model_String[74] = "< M_O_SUITED >";
	Model_String[75] = "< M_Y_BOHO_01 >";
	Model_String[76] = "< M_Y_DODGY_01 >";
	Model_String[77] = "< M_Y_DORK_02 >";
	Model_String[78] = "< M_Y_DOWNTOWN_01 >";
	Model_String[79] = "< M_Y_DOWNTOWN_02 >";
	Model_String[80] = "< M_Y_DOWNTOWN_03 >";
	Model_String[81] = "< M_Y_GAYYOUNG >";
	Model_String[82] = "< M_Y_GENSTREET_11 >";
	Model_String[83] = "< M_Y_GENSTREET_16 >";
	Model_String[84] = "< M_Y_GENSTREET_20 >";
	Model_String[85] = "< M_Y_GENSTREET_34 >";
	Model_String[86] = "< M_Y_HARDMAN_01 >";		
	menu_item[MenuItem_Index].charval = Model_String[(menu_item[MenuItem_Index].num_val - 1)];
}
void AllModelsItem13(int MenuItem_Index){	
	char* Model_String[73];		
	Model_String[0] = "< IG_AHMAD >"; 
	Model_String[1] = "< IG_ARMANDO >";
	Model_String[2] = "< IG_ARMSDEALER >";
	Model_String[3] = "< IG_ARNAUD >";
	Model_String[4] = "< IG_BANKER >";
	Model_String[5] = "< IG_BRUCIE2 >";
	Model_String[6] = "< IG_BULGARIN2 >";
	Model_String[7] = "< IG_DAISY >";
	Model_String[8] = "< IG_DEEJAY >";
	Model_String[9] = "< IG_DESSIE >";
	Model_String[10] = "< IG_EVAN >";
	Model_String[11] = "< IG_GRACIE2 >";
	Model_String[12] = "< IG_HENRIQUE >";
	Model_String[13] = "< IG_ISSAC2 >";
	Model_String[14] = "< IG_JOHNNY2 >";
	Model_String[15] = "< IG_LUIS2 >";
	Model_String[16] = "< IG_MARGOT >";
	Model_String[17] = "< IG_MORI_K >";
	Model_String[18] = "< IG_MR_SANTOS >";
	Model_String[19] = "< IG_OYVEY >";
	Model_String[20] = "< IG_NIKO >";
	Model_String[21] = "< IG_OYVEY >";
	Model_String[22] = "< IG_ROCCO >";
	Model_String[23] = "< IG_TAHIR >";
	Model_String[24] = "< IG_TIMUR >";
	Model_String[25] = "< IG_TONY >";
	Model_String[26] = "< IG_TRAMP2 >";
	Model_String[27] = "< IG_TRIAD >";
	Model_String[28] = "< IG_TROY >";
	Model_String[29] = "< IG_VIC >";
	Model_String[30] = "< IG_VICGIRL >";
	Model_String[31] = "< IG_VINCE >";
	Model_String[32] = "< IG_YUSEF >";
	Model_String[33] = "< F_Y_ASIANCLUB_01 >";
	Model_String[34] = "< F_Y_ASIANCLUB_02 >";
	Model_String[35] = "< F_Y_CLUBEURO_01 >";
	Model_String[36] = "< F_Y_DOMGIRL_01 >";
	Model_String[37] = "< F_Y_EMIDTOWN_02 >";
	Model_String[38] = "< F_Y_HOSTESS >";
	Model_String[39] = "< F_Y_HOTCHICK_01 >";
	Model_String[40] = "< F_Y_HOTCHICK_02 >";
	Model_String[41] = "< F_Y_HOTCHICK_03 >";
	Model_String[42] = "< F_Y_PGIRL_01 >";
	Model_String[43] = "< F_Y_PGIRL_02 >";
	Model_String[44] = "< M_M_E2MAF_01 >";
	Model_String[45] = "< M_M_E2MAF_02 >";
	Model_String[46] = "< M_Y_BATHROOM >";
	Model_String[47] = "< M_Y_CIADLC_01 >";
	Model_String[49] = "< M_Y_CIADLC_02 >";
	Model_String[50] = "< M_Y_GAYBLACK_01 >";
	Model_String[51] = "< M_Y_GAYDANCER >";
	Model_String[52] = "< M_Y_FIGHTCLUB_01 >";
	Model_String[53] = "< M_Y_FIGHTCLUB_02 >";
	Model_String[54] = "< M_Y_FIGHTCLUB_03 >";
	Model_String[55] = "< M_Y_FIGHTCLUB_04 >";
	Model_String[56] = "< M_Y_FIGHTCLUB_05 >";
	Model_String[57] = "< M_Y_FIGHTCLUB_06 >";
	Model_String[58] = "< M_Y_FIGHTCLUB_07 >";
	Model_String[59] = "< M_Y_FIGHTCLUB_08 >";
	Model_String[60] = "< F_Y_CLOEPARKER >";
	Model_String[61] = "< F_Y_DANCER_01 >";
	Model_String[62] = "< F_Y_JONI >";
	Model_String[63] = "< M_M_MAFUNION >";
	Model_String[64] = "< M_Y_CELEBBLOG >";
	Model_String[65] = "< M_Y_EXSPORTS >";
	Model_String[66] = "< M_Y_MOBPARTY >";
	Model_String[67] = "< M_Y_PAPARAZZI_01 >";
	Model_String[68] = "< IG_BLUEBROS >";
	Model_String[69] = "< IG_JACKSON >";
	Model_String[70] = "< IG_NAPOLI >";
	Model_String[71] = "< IG_ROYAL >";
	Model_String[72] = "< IG_SPADE >";		
	menu_item[MenuItem_Index].charval = Model_String[(menu_item[MenuItem_Index].num_val - 1)];
}
void AllModelsItem14(int MenuItem_Index){		
	char* Model_String[26];		
	Model_String[0] = "< IG_NIKO >"; 
	Model_String[1] = "< IG_ASHLEYA >";
	Model_String[2] = "< IG_CLAY >";
	Model_String[3] = "< IG_MALC >";
	Model_String[4] = "< IG_BILLY >";
	Model_String[5] = "< IG_JIM_FITZ >";
	Model_String[6] = "< IG_BRIANJ >";
	Model_String[7] = "< IG_EVAN >";
	Model_String[8] = "< IG_TERRY >";
	Model_String[9] = "< IG_DAVE_GROSSMAN >";
	Model_String[10] = "< IG_LOSTGIRL >";
	Model_String[11] = "< IG_BILLYPRISON >";
	Model_String[12] = "< IG_MARTA >";
	Model_String[13] = "< IG_DESEAN >";
	Model_String[14] = "< IG_MATTHEWS >";
	Model_String[15] = "< IG_MCCORNISH >";
	Model_String[16] = "< IG_PGIRL_01 >";
	Model_String[17] = "< IG_PGIRL_02 >";
	Model_String[18] = "< IG_ROMAN_E1 >";
	Model_String[19] = "< IG_STROOPER >";
	Model_String[20] = "< F_Y_BIKESTRIPPER_01 >";
	Model_String[21] = "< F_Y_EMIDTOWN_01 >";
	Model_String[22] = "< M_M_SPRETZER >";
	Model_String[23] = "< M_Y_CIADLC_01 >";
	Model_String[24] = "< M_O_HISPANIC_01 >";
	Model_String[25] = "< M_Y_HISPANIC_01 >";				
	menu_item[MenuItem_Index].charval = Model_String[(menu_item[MenuItem_Index].num_val - 1)];
}


void Player_MoreChanger_Strings(int MenuItem_Index){
	if(MenuItem_Index == 1) return MD_Spy_Strings(MenuItem_Index);
	else if(MenuItem_Index == 2) return MD_Delete_Strings(MenuItem_Index);
	else if(MenuItem_Index == 3) return MD_PlayerOption_Strings(MenuItem_Index);
	else if(MenuItem_Index == 4) return MD_QuickTeleport_Strings(MenuItem_Index);
   //Jumpover
	//Sco
	//Function
	//Bool
	else if(MenuItem_Index == 9)return MD_Texture_Body_Strings(MenuItem_Index);
	else if(MenuItem_Index == 10)return AllModelsItem6(MenuItem_Index);
	else if(MenuItem_Index == 11)return AllModelsItem7(MenuItem_Index);
	else if(MenuItem_Index == 12)return AllModelsItem8(MenuItem_Index);
	else if(MenuItem_Index == 13)return AllModelsItem9(MenuItem_Index);	
	else if(MenuItem_Index == 14)return AllModelsItem10(MenuItem_Index);
	else if(MenuItem_Index == 15)return AllModelsItem11(MenuItem_Index);
	else if(MenuItem_Index == 16)return AllModelsItem12(MenuItem_Index);
	else if(MenuItem_Index == 17)return AllModelsItem13(MenuItem_Index);
	else if(MenuItem_Index == 18)return AllModelsItem14(MenuItem_Index);
	else if(MenuItem_Index == 20)return MD_Stride_Strings(MenuItem_Index);
}//super nice