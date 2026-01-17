/**
 * @ MD Essentials
 * @ MD Series ; Version 12, March 2016
 * @ Copyright (C) 2016 DEVILSDESIGN
 //You wasted a lot of time with these prints buddy, people kinda see on screen where they teleport too.... - Nathan
*/  

#pragma once

void tele_helipads_index(){	
	if(SelectedItem == 1)		{TP_x = 2219.8132	, 	TP_y = 745.6130	, 	TP_z = 5.830	;		Alert("~BLIP_76~ ~c~Airport Helipad",false);}
	else if(SelectedItem == 2)	{TP_x = 2132.2297	, 	TP_y = 441.9621	, 	TP_z = 23.4956	;		Alert("~BLIP_76~ ~c~Sheriffs Helipad",false);}
	else if(SelectedItem == 3)	{TP_x = -707.6221	, 	TP_y = 365.6933	, 	TP_z = 3.8330	;		Alert("~BLIP_76~ ~c~City Helipad",false);}
	else if(SelectedItem == 4)	{TP_x = 380.0672	, 	TP_y = -714.4636, 	TP_z = 4.4611	;		Alert("~BLIP_76~ ~c~Heli Tours",false);}
	else if(SelectedItem == 5)	{TP_x = -2125.2920	, 	TP_y = 142.8950	, 	TP_z = 18.4270	;		Alert("~BLIP_76~ ~c~Fire Department Helipad",false);}
	else if(SelectedItem == 6)	{TP_x = -826.3179	, 	TP_y = 781.8586	, 	TP_z = 6.3370	;		Alert("~BLIP_76~ ~c~City 2 Helipad",false);}
}
void tele_airport_index(){	
	if(SelectedItem == 1)		{TP_x = 2219.8132	, TP_y = 745.6130	, TP_z = 5.830;		Alert("~BLIP_76~ ~c~Teleported to Helipads",false);}
	else if(SelectedItem == 2)	{TP_x = 2168.1106	, TP_y = 765.7915	, TP_z = 28.9740;	Alert("~BLIP_76~ ~c~Teleported to Hangar 1 (Top)",false);}
	else if(SelectedItem == 3)	{TP_x = 2168.1106	, TP_y = 765.7915	, TP_z = 5.5784;	Alert("~BLIP_76~ ~c~Teleported to Hangar 1 (Inside)",false);}
	else if(SelectedItem == 4)	{TP_x = 2255.2063	, TP_y = 643.0560	, TP_z = 28.8072;	Alert("~BLIP_76~ ~c~Teleported to Hangar 2 (Top)",false);}
	else if(SelectedItem == 5)	{TP_x = 2255.2063	, TP_y = 643.0560	, TP_z = 5.5784;	Alert("~BLIP_76~ ~c~Teleported to Hangar 2 (Inside)",false);}
	else if(SelectedItem == 6)	{TP_x = 2622.3501	, TP_y = 408.0522	, TP_z = 79.2688;	Alert("~BLIP_76~ ~c~Teleported to Tower (Top)",false);}
	else if(SelectedItem == 7)	{TP_x = 2624.6602	, TP_y = 405.3479	, TP_z = 41.5520;	Alert("~BLIP_76~ ~c~Teleported to Tower (Level 2)",false);}
	else if(SelectedItem == 8)	{TP_x = 2631.9465	, TP_y = 403.1338	, TP_z = 17.7790;	Alert("~BLIP_76~ ~c~Teleported to Tower (Level 1)",false);}
	else if(SelectedItem == 9)	{TP_x = 2633.4407	, TP_y = 415.1447	, TP_z = 5.3555;	Alert("~BLIP_76~ ~c~Teleported to Tower (Inside)",false);}
	else if(SelectedItem == 10){TP_x = 2311.6799	, TP_y = 26.2974	, TP_z = 82.4870;	Alert("~BLIP_76~ ~c~Teleported to Radar Tower (Top)",false);}
	else if(SelectedItem == 11){TP_x = 2320.0469	, TP_y = 30.7563	, TP_z = 5.4215;	Alert("~BLIP_76~ ~c~Teleported to Radar Tower (Inside)",false);}
	else if(SelectedItem == 12){TP_x = 2132.2297	, TP_y = 441.9621	, TP_z = 23.4956;	Alert("~BLIP_76~ ~c~Teleported to Sheriffs Building (Top)",false);}
	else if(SelectedItem == 13){TP_x = 2138.7852	, TP_y = 433.7174	, TP_z = 5.8495;	Alert("~BLIP_76~ ~c~Teleported to Sheriffs Building (Inside)",false);}
	else if(SelectedItem == 14){TP_x = 2494.9207	, TP_y = 267.1155	, TP_z = 20.1800;	Alert("~BLIP_76~ ~c~Teleported to Sniper Lookout (Top)",false);}
	else if(SelectedItem == 15){TP_x = 2502.8150	, TP_y = 276.0000	, TP_z = 5.5750;	Alert("~BLIP_76~ ~c~Teleported to Sniper Lookout (Inside)",false);}
	else if(SelectedItem == 16){TP_x = 2496.3533	, TP_y = 515.8263	, TP_z = 20.1800;	Alert("~BLIP_76~ ~c~Teleported to Bazooka Lookout (Top)",false);}
	else if(SelectedItem == 17){TP_x = 2496.9800	, TP_y = 503.9500	, TP_z = 5.5750;	Alert("~BLIP_76~ ~c~Teleported to Bazooka Lookout (Inside)",false);}
	else if(SelectedItem == 18){TP_x = 2425.5264	, TP_y = 389.2336	, TP_z = 5.8487;	Alert("~BLIP_76~ ~c~Teleported to Big Building (Inside)",false);}	
}
void tele_broker_index(){	
	if(SelectedItem == 1)		{TP_x = 1375.8765, TP_y = 197.4544, TP_z = 47.8063;		Alert("~BLIP_76~ ~c~Teleported to Crackhouse",false);}
}

void tele_dukes_index(){	
	if(SelectedItem == 1)		{TP_x = 704.5024, TP_y = -270.7895, TP_z = 5.1121;		Alert("~BLIP_76~ ~c~Teleported to Barge Basement",false);}
	else if(SelectedItem == 2)	{TP_x = 1100.5000, TP_y = -747.0000, TP_z = 7.3972;		Alert("~BLIP_76~ ~c~Teleported to Hove Beach",false);}
	else if(SelectedItem == 3)	{TP_x = 875.9251, TP_y = -119.5862, TP_z = 6.0054;		Alert("~BLIP_76~ ~c~Teleported to Brucies Garage",false);}
	else if(SelectedItem == 4)	{TP_x = 796.0092, TP_y = -540.5947, TP_z = 7.5266;		Alert("~BLIP_76~ ~c~Teleported to Porn Shop",false);}
}
void tele_algonquin_index(){	
	if(SelectedItem == 1)		{TP_x = -245.9398, TP_y = 222.9828, TP_z = 205.9805;	Alert("~BLIP_76~ ~c~Teleported to Hockey Team Office",false);}
	else if(SelectedItem == 2)	{TP_x = -178.2, TP_y = 582.6, TP_z = 127.8500;			Alert("~BLIP_76~ ~c~Teleported to Majestic Hotel",false);}
	else if(SelectedItem == 3)	{TP_x = -416.3491, TP_y = 1461.9805, TP_z = 38.9715;	Alert("~BLIP_76~ ~c~Teleported to Playboy X's Pad",false);}	
	else if(SelectedItem == 4)	{TP_x = -279.5515, TP_y = -101.2410, TP_z = 386.7909;	Alert("~BLIP_76~ ~c~Teleported to Rotterdam Tower",false);}
	else if(SelectedItem == 5)	{TP_x = -532.6810, TP_y = 1273.3307, TP_z = 106.6500;	Alert("~BLIP_76~ ~c~Teleported to Westminster Towers",false);}
	else if(SelectedItem == 6)	{TP_x = 55.3537, TP_y = 1125.3387, TP_z = 3.4527;		Alert("~BLIP_76~ ~c~Teleported to Underground Parking",false);}
	else if(SelectedItem == 7)	{TP_x = 103.5343, TP_y = 857.4968, TP_z = 43.6211;		Alert("~BLIP_76~ ~c~Teleported to Safe House",false);}
	else if(SelectedItem == 8)	{TP_x = -473.0454, TP_y = 1746.8669, TP_z = 8.3762;		Alert("~BLIP_76~ ~c~Teleported to Scrapyard",false);}
	else if(SelectedItem == 9)	{TP_x = 237.5457, TP_y = -805.6555, TP_z = 14.7000;		Alert("~BLIP_76~ ~c~Teleported to Contruction Site",false);}
	else if(SelectedItem == 10) {TP_x = -7.6952, TP_y = 356.7396, TP_z = -2.9570;		Alert("~BLIP_76~ ~c~Teleported to Subway",false);}
	else if(SelectedItem == 11) {TP_x = -2476.0000, TP_y = 942.7000, TP_z = 1101.0000;	Alert("~BLIP_76~ ~c~Teleported to Skydive",false);}
	else if(SelectedItem == 12) {TP_x = -385.3183, TP_y = 1493.0056, TP_z = 11.7148;	Alert("~BLIP_76~ ~c~Teleported to Fight Club ~COL_NET_4~TBOGT ONLY!",false);}
	else if(SelectedItem == 13) {TP_x = 123.6929, TP_y = -671.5339, TP_z = 15.8061;		Alert("~BLIP_76~ ~c~Teleported to Lawyer's Office",false);}
	else if(SelectedItem == 14){TP_x = -120.6184, TP_y = 1502.8611, TP_z = 98.7829;		Alert("~BLIP_76~ ~c~Teleported to Projects Tower",false);}
}
void tele_alderney_index(){	
	if(SelectedItem == 1)		{TP_x = -992.8975, TP_y = 1870.2732, TP_z = 23.3234;	Alert("~BLIP_76~ ~c~Teleported to Sultan House",false);}
	else if(SelectedItem == 2)	{TP_x = -968.4757, TP_y = 1908.7188, TP_z = 22.3870;	Alert("~BLIP_76~ ~c~Teleported to Sultan Spawn",false);}
	else if(SelectedItem == 3)	{TP_x = -1409.1864, TP_y = 1461.8617, TP_z = 25.5280;	Alert("~BLIP_76~ ~c~Teleported to Cognoscenti Garage",false);}
	else if(SelectedItem == 4)	{TP_x = -1539.8414, TP_y = 163.2967, TP_z = 10.9000;	Alert("~BLIP_76~ ~c~Teleported to Sprunk Factory",false);}
	else if(SelectedItem == 5)	{TP_x = -1577.2926, TP_y = 18.9291, TP_z = 11.0153;		Alert("~BLIP_76~ ~c~Teleported to Strip Club",false);}
	else if(SelectedItem == 6)	{TP_x = -1079.8000, TP_y = -469.7000, TP_z = 3.6200;	Alert("~BLIP_76~ ~c~Teleported to Prison Cage",false);}
	else if(SelectedItem == 7)	{TP_x = -2072.8728, TP_y = 25.4543, TP_z = 96.2373;		Alert("~BLIP_76~ ~c~Teleported to Building Cant Jump Off",false);}
}
void tele_bohan_index(){	
	if(SelectedItem == 1)		{TP_x = 1186.0593, TP_y = 1697.5045, TP_z = 17.7532;	Alert("~BLIP_76~ ~c~Teleported to Strip Club",false);}
	else if(SelectedItem == 2)	{TP_x = 603.3540, TP_y = 1409.7708, TP_z = 18.4847;		Alert("~BLIP_76~ ~c~Teleported to Bohan Safe House",false);}
	else if(SelectedItem == 3)	{TP_x = 711.0583, TP_y = 1911.1498, TP_z = 27.1642;		Alert("~BLIP_76~ ~c~Teleported to Baseball Park",false);}
	else if(SelectedItem == 4)	{TP_x = 1462.0757, TP_y = 1563.3900, TP_z = 4.0576;		Alert("~BLIP_76~ ~c~Teleported to Near the Bridge 1",false);}
	else if(SelectedItem == 5)	{TP_x = 549.9749, TP_y = 1278.2107, TP_z = 21.8234;		Alert("~BLIP_76~ ~c~Teleported to Near the Bridge 2",false);}
}
void tele_happiness_index(){	
	if(SelectedItem == 1)		{TP_x = -607.6907, TP_y = -767.8975, TP_z = 20.6426;	Alert("~BLIP_76~ ~c~Teleported to Building (Top)",false);}
	else if(SelectedItem == 2)	{TP_x = -608.9211, TP_y = -779.1715, TP_z = 17.5085;	Alert("~BLIP_76~ ~c~Teleported to Building (Level 1)",false);}
	else if(SelectedItem == 3)	{TP_x = -608.0413, TP_y = -768.1970, TP_z = 9.8789;		Alert("~BLIP_76~ ~c~Teleported to Building (Inside)",false);}
	else if(SelectedItem == 4)	{TP_x = -609.5771, TP_y = -753.4142, TP_z = 85.7500;	Alert("~BLIP_76~ ~c~Teleported to Statue Head",false);}
	else if(SelectedItem == 5)	{TP_x = -605.3948, TP_y = -749.7060, TP_z = 94.9000;	Alert("~BLIP_76~ ~c~Teleported to Statue Cup",false);}
	else if(SelectedItem == 6)	{TP_x = -608.8611, TP_y = -755.9594, TP_z = 65.9950;	Alert("~BLIP_76~ ~c~Teleported to Statue Heart",false);}
	else if(SelectedItem == 7)	{TP_x = -600.1514, TP_y = -961.0953, TP_z = 4.8429;		Alert("~BLIP_76~ ~c~Teleported to Plaza",false);}
	else if(SelectedItem == 8)	{TP_x = -409.8473, TP_y = -976.8823, TP_z = 3.6314;		Alert("~BLIP_76~ ~c~Teleported to Pier",false);}
}
void tele_special_index(){	
	if(SelectedItem == 1)		{TP_x = 1626.7833, TP_y = 1319.8804, TP_z = -47.1266;	Alert("~BLIP_76~ ~c~Teleported to Underwater Hideout",false);}
	else if(SelectedItem == 2)	{TP_x = -1079.8553, TP_y = -362.9944, TP_z = 7.4039;	Alert("~BLIP_76~ ~c~Teleported to Secret Prison (Lockup)",false);}
	else if(SelectedItem == 3)	{TP_x = -2072.8728, TP_y = 25.4543, TP_z = 96.2373;		Alert("~BLIP_76~ ~c~Teleported to Building Cant Jump Off",false);}
	else if(SelectedItem == 4)	{TP_x = -1079.8000, TP_y = -469.7000, TP_z = 3.6200;	Alert("~BLIP_76~ ~c~Teleported to Prison Cage",false);}	
}
void tele_police_index(){	
	if(SelectedItem == 1)		{TP_x = 903.4626, TP_y = -363.2110, TP_z = 16.9067; 		Alert("~BLIP_76~ ~c~Mohawk Ave",false);}
	else if(SelectedItem == 2)	{TP_x = 1245.5483, TP_y = 583.3440, TP_z = 38.0665;		Alert("~BLIP_76~ ~c~Bunker Hill Ave",false);}
	else if(SelectedItem == 3)	{TP_x = -421.5369, TP_y = 286.9949, TP_z = 10.8285;		Alert("~BLIP_76~ ~c~Kunzite St",false);}
	else if(SelectedItem == 4)	{TP_x = 88.1274, TP_y = 1224.2035, TP_z = 15.5327;		Alert("~BLIP_76~ ~c~San Juan Rd",false);}
	else if(SelectedItem == 5)	{TP_x = -921.2032, TP_y = 1316.4619, TP_z = 24.0243;		Alert("~BLIP_76~ ~c~Bridger St",false);}
	else if(SelectedItem == 6)	{TP_x = 158.4689, TP_y = -203.2467, TP_z = 14.3076;		Alert("~BLIP_76~ ~c~Albany Ave",false);}
}