/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */  
 
 
 //!Generally used strings allover the place ONLY ONCE IN CODE !!!!
 
 
void Player_Help_Strings(int MenuItem_Index){
	char* String[6]; 
	String[0] = "< ERROR >";
	String[1] = "< Health >"; 
	String[2] = "< Armour >";
	String[3] = "< ~COL_NET_4~Remove Armour ~w~>";	
	String[4] = "< Fix Vehicle >";
	String[5] = "< Flip Vehicle >";
	menu_item[MenuItem_Index].charval = String[menu_item[MenuItem_Index].num_val];
}

void Helper_Loop_Strings(int MenuItem_Index){
	char* String[6]; 
	String[0] = "< ERROR >";
	String[1] = GetBit(autoFixVehBitSet,players[ChangeNetPlayer].id) ? "< ~COL_NET_1~Auto Fix Vehicle ~w~>" : "< Auto Fix Vehicle >"; 
	String[2] = GetBit(autoFlipVehBitSet,players[ChangeNetPlayer].id) ? "< ~COL_NET_1~Auto Flip Vehicle ~w~>" : "< Auto Flip Vehicle >";
	String[3] = GetBit(infiniteArmourBitSet,players[ChangeNetPlayer].id) ? "< ~COL_NET_1~Juggernaut Player ~w~>" :  "< Juggernaut Player >";	
	String[4] = GetBit(freezeGunProtectBitSet,players[ChangeNetPlayer].id) ? "< ~COL_NET_1~Freezegun Protection ~w~>" : "< Freezegun Protection >";
	String[5] = GetBit(neverWantedBitSet,players[ChangeNetPlayer].id) ? "< ~COL_NET_1~Never wanted ~w~>": "< Never wanted >";
	menu_item[MenuItem_Index].charval = String[menu_item[MenuItem_Index].num_val];
}

 
void MD_PO_Weapon_Option_Strings(int MenuItem_Index){
	char* Weapon_Opt_Strings[6]; 
	Weapon_Opt_Strings[1] = GetBit(pPlayerOptionsBitSet,PLAYER_OPTION_INFINITE_AMMO) ? "< ~COL_NET_1~Unlimited clip ~w~>" : "< Unlimited clip >";
	Weapon_Opt_Strings[2] = GetBit(pPlayerOptionsBitSet,PLAYER_OPTION_RAPID_FIRE) ? "< ~COL_NET_1~Rapid fire ~w~>" : "< Rapid fire >";
	Weapon_Opt_Strings[3] = GetBit(pPlayerOptionsBitSet,PLAYER_OPTION_AUTO_AIM) ? "< ~COL_NET_1~Auto aim ~w~>" : "< Auto aim >";
	Weapon_Opt_Strings[4] =  	"< Give Weapons >";
	Weapon_Opt_Strings[5] = 	"< Remove Weapons >";
	menu_item[MenuItem_Index].charval = Weapon_Opt_Strings[menu_item[MenuItem_Index].num_val];
} 
 
 
void Weapon_Strings(int MenuItem_Index){
	char* String[5]; 
	String[0] = "< ERROR >";
	String[1] = "< Advanced >"; 
	String[2] = "< Poor >";
	String[3] = "< Episodic >";	
	String[4] = "< ~COL_NET_4~Remove ~w~>";
	menu_item[MenuItem_Index].charval = String[menu_item[MenuItem_Index].num_val];
}

 void MD_PO_Physics_Strings(int MenuItem_Index){
 	char* physics_strings[4];
 	physics_strings[1] = DOES_OBJECT_EXIST(drive_water[iPlayer]) ? "< ~COL_NET_1~Drive/Walk on water ~w~>" : "< Drive/Walk on water >";
	physics_strings[2] = GetBit(pPlayerOptionsBitSet,PLAYER_OPTION_GRAVITY) ? "< ~COL_NET_1~Gravity ~w~>" : "< Gravity >" ;
	physics_strings[3] = GetBit(pPlayerOptionsBitSet,PLAYER_OPTION_SLOW_MO) ? "< ~COL_NET_1~Slow motion ~w~>" : "< Slow motion >";
	menu_item[MenuItem_Index].charval = physics_strings[menu_item[MenuItem_Index].num_val];
}

void Physics_Strings(int MenuItem_Index){
	char* String[3]; 
	String[0] = "< ERROR >";
	String[1] = "< Desolidify >"; 
	String[2] = "< Freeze Position ~w~>";
	menu_item[MenuItem_Index].charval = String[menu_item[MenuItem_Index].num_val];
}

void Help_Strings(int MenuItem_Index){
	char* String[6]; 
	String[0] = "< ERROR >";	
	String[1] = "< Spawn Anni >";
	String[2] = (Episode == 2) ? "< BUZZARD >" : "< MAVERICK >";
	String[3] = "< Spawn Sultan RS >";	
	String[4] = "< Spawn NRG 900 >";	
	String[5] = "< Give Armour >";
	menu_item[MenuItem_Index].charval = String[menu_item[MenuItem_Index].num_val];
}

void MD_PO_PlayerInfo_Strings(int MenuItem_Index){
 	char* PlayerInfo_Strings[10];
 	PlayerInfo_Strings[1] = Attach_Player_Info ? "< ~COL_NET_1~Display ~w~>" : "< Display >";
	PlayerInfo_Strings[2] = (Player_INFO_ID1 != 99) ? ((Player_INFO_ID1 != iPlayer) ? "< ~COL_NET_1~Player 1 Saved ~w~>" : "< ~COL_NET_1~Default (You) ~w~>") : "< Save Player 1 >";
	PlayerInfo_Strings[3] = "< Delete Player 1 >";
	PlayerInfo_Strings[4] = (Player_INFO_ID2 != 99) ? "< ~COL_NET_1~Player 2 Saved ~w~>" : "< Save Player 2 >";
	PlayerInfo_Strings[5] = "< Delete Player 2 >";
	PlayerInfo_Strings[6] = (Player_INFO_ID3 != 99) ? "< ~COL_NET_1~Player 3 Saved ~w~>" : "< Save Player 3 >";
	PlayerInfo_Strings[7] = "< Delete Player 3 >";
	PlayerInfo_Strings[8] = Move_Player_Info ? "< ~COL_NET_1~Move Position ~PAD_DPAD_ALL~ ~w~>" : "< Move Position >";
	PlayerInfo_Strings[9] = "< Reset Position >";	
	menu_item[MenuItem_Index].charval = PlayerInfo_Strings[menu_item[MenuItem_Index].num_val];
} 

