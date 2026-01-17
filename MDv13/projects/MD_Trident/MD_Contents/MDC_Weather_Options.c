/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */  
 

#pragma once

void MC_Weather_Setup(void)
{

	int current_hour, current_minute, current_weather;
	GET_TIME_OF_DAY(&current_hour,&current_minute);
	GET_CURRENT_WEATHER(&current_weather);
	
	MENU_SUB_HEADER = "Weather & Time Options";
	AddFunction("~BLIP_52~ Sunny"); 								    //1
	AddFunction_Num("~BLIP_52~ Extra Sunny",2); 						//2
	AddFunction_Num("~BLIP_52~ Sunny Windy",2); 						//3
	AddFunction("~BLIP_52~ Drizzle"); 									//4
	AddFunction("~BLIP_52~ Foggy"); 								    //5
	AddFunction("~BLIP_52~ Raining");								    //6
	AddFunction("~BLIP_52~ Lightning");									//7
	AddFunction("~BLIP_52~ Cloudy");								    //8
	AddFunction_Num("~BLIP_52~ Set Time Hour",23); 						//9
	AddFunction_Num("~BLIP_52~ Set Time Minute",59); 					//10
	AddBool( (IS_THIS_MACHINE_THE_SERVER() && In_Network) ? "~BLIP_68~ Cycle Time" : "~BLIP_68~ Cycle Time (If Host Others See)",GetBit(MD_Misc_OptionsBitSet, MD_MISC_TIME_CYCLE));			//11
	AddBool("~BLIP_68~ Freeze Time", (GetByteInSet(WeatherTimeAutoLockByteSet, FREEZE_TIME_HOUR) != 25));			//12
	AddBool("~BLIP_68~ Freeze Weather", (GetByteInSet(WeatherTimeAutoLockByteSet, FREEZE_WEATHER) != 50)); 		//13
	AddBool( (IS_THIS_MACHINE_THE_SERVER() && In_Network) ? "~BLIP_68~ Fancy Up Graphics" : "~BLIP_68~ Fancy up Graphics (If Host Others See)", (current_weather == WEATHER_EXTRA_SUNNY_2 && current_hour == 7 && (current_minute == 1 || current_minute == 0)) );
	AddBool( (IS_THIS_MACHINE_THE_SERVER() && In_Network) ? "~BLIP_68~ Glowing Blue Map" : "~BLIP_68~ Glowing Blue Map (If Host Others See)",(current_weather == WEATHER_EXTRA_SUNNY_2 && current_hour == 22 && (current_minute == 1 || current_minute == 0)) );
	
	menu_item[9].num_val = current_hour;
	menu_item[10].num_val = current_minute;
		//could even make weather highlight as bool without any var usage lol - Nathan
}

void MC_Weather_Action(void){

	int current_hour, current_minute;
	GET_TIME_OF_DAY(&current_hour,&current_minute);
	if(SelectedItem == 1) MD_SET_WEATHER(WEATHER_SUNNY);	
		else if(SelectedItem == 2){
			MD_SET_WEATHER( menu_item[SelectedItem].num_val == 1 ? WEATHER_EXTRA_SUNNY : WEATHER_EXTRA_SUNNY_2);
		}	
		else if(SelectedItem == 3){
			MD_SET_WEATHER( menu_item[SelectedItem].num_val == 1 ? WEATHER_SUNNY_WINDY : WEATHER_SUNNY_WINDY_2);
		}	
		else if(SelectedItem == 4)MD_SET_WEATHER(WEATHER_DRIZZLE);
		else if(SelectedItem == 5)MD_SET_WEATHER(WEATHER_FOGGY);
		else if(SelectedItem == 6)MD_SET_WEATHER(WEATHER_RAINING);
		else if(SelectedItem == 7)MD_SET_WEATHER(WEATHER_LIGHTNING);
		else if(SelectedItem == 8)MD_SET_WEATHER(WEATHER_CLOUDY);
		else if(SelectedItem == 9) //Set time hour
		{
			MD_SET_TIME(menu_item[SelectedItem].num_val, current_minute);
		}
		else if(SelectedItem == 10) //set time minute
		{
			MD_SET_TIME( current_hour, menu_item[SelectedItem].num_val);
		}
		else if(SelectedItem == 11){
			ToggleBit(MD_Misc_OptionsBitSet, MD_MISC_TIME_CYCLE);
			menu_item[SelectedItem].extra_val = GetBit(MD_Misc_OptionsBitSet, MD_MISC_TIME_CYCLE);
		//	Alert_Two("~BLIP_76~ ~c~Time Cycle", freeze_time ? PrintON : PrintOFF ,false);			
		}
		else if(SelectedItem == 12){
			if(GetByteInSet(WeatherTimeAutoLockByteSet, FREEZE_TIME_HOUR) == 25)
			{
				int hour,minute;
				GET_TIME_OF_DAY(&hour,&minute);
				SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_HOUR, hour);
				SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_MINUTE, minute);
			}
			else
			{
				SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_HOUR, 25);
				SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_MINUTE, 0);
			}
			menu_item[SelectedItem].extra_val = (GetByteInSet(WeatherTimeAutoLockByteSet, FREEZE_TIME_HOUR) != 25);
		}	
		else if(SelectedItem == 13) //Freeze Weather
		{
			if(GetByteInSet(WeatherTimeAutoLockByteSet, FREEZE_WEATHER) == 50)
			{
				int weather;
				GET_CURRENT_WEATHER(&weather);
				SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_WEATHER, weather);
			}
			else
			{
				SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_WEATHER, 50);
			}
			menu_item[SelectedItem].extra_val = (GetByteInSet(WeatherTimeAutoLockByteSet, FREEZE_WEATHER) != 50); //if it's not -1 it's enabled - Nathan
		}	
		else if(SelectedItem == 14) //Fancy up graphics
		{
			#ifdef Premium
			bool enabled = ( GetByteInSet(WeatherTimeAutoLockByteSet, FREEZE_WEATHER) == WEATHER_EXTRA_SUNNY_2 && GetByteInSet(WeatherTimeAutoLockByteSet, FREEZE_TIME_HOUR) == 7 && (GetByteInSet(WeatherTimeAutoLockByteSet, FREEZE_TIME_MINUTE) == 1 || GetByteInSet(WeatherTimeAutoLockByteSet, FREEZE_TIME_MINUTE) == 0));
			if(enabled)
			{
				SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_WEATHER, 50);
				menu_item[13].extra_val = false; //show user freeze weather OFF
				
				SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_HOUR, 25);
				menu_item[12].extra_val = false; //show user freeze time OFF
				
				MD_SET_TIME(9,00);
				MD_SET_WEATHER(WEATHER_SUNNY); //to snap out of fancy graphics
				menu_item[SelectedItem].extra_val = false;
			}
			else
			{
				SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_WEATHER, WEATHER_EXTRA_SUNNY_2);
				menu_item[13].extra_val = true; //Show user freeze weather highlighted ON
				
				SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_HOUR, 7);
				SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_MINUTE, 0);
				menu_item[12].extra_val = true; //show user freeze time highlighted ON
				menu_item[15].extra_val = false; //show user blue glow map off
				menu_item[SelectedItem].extra_val = true; //Fancy graphics on!
				//thanks go to Unix Monsta
			}
			#else
			Alert(PREMIUM_ONLY_STRING,true);
			#endif
		}	
		else if(SelectedItem == 15) //Blue glow map
		{
			#ifdef Premium
			bool enabled = (GetByteInSet(WeatherTimeAutoLockByteSet, FREEZE_WEATHER) == WEATHER_EXTRA_SUNNY_2 && GetByteInSet(WeatherTimeAutoLockByteSet, FREEZE_TIME_HOUR) == 22 && (GetByteInSet(WeatherTimeAutoLockByteSet, FREEZE_TIME_MINUTE) == 1 || GetByteInSet(WeatherTimeAutoLockByteSet, FREEZE_TIME_MINUTE) == 0));
			if(enabled)
			{
				SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_WEATHER, 50);
				menu_item[13].extra_val = false; //show user freeze weather OFF
				
				SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_HOUR, 25);
				menu_item[12].extra_val = false; //show user freeze time OFF
				
				MD_SET_TIME(9,00);
				MD_SET_WEATHER(WEATHER_SUNNY); //to snap out of fancy graphics
				menu_item[SelectedItem].extra_val = false;
			}
			else
			{
				SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_WEATHER, WEATHER_EXTRA_SUNNY_2);
				menu_item[13].extra_val = true; //Show user freeze weather highlighted ON
				
				SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_HOUR, 22);
				SetByteSet(&WeatherTimeAutoLockByteSet, FREEZE_TIME_MINUTE, 0);
				menu_item[14].extra_val = false; //Show user fancy up graphics OFF
				menu_item[12].extra_val = true; //show user freeze time ON
				
				menu_item[SelectedItem].extra_val = true; //Fancy graphics on!
			}
			#else
			Alert(PREMIUM_ONLY_STRING,true);
			#endif
		}	
}

void MC_Weather_Loop(void) //Nathan's! Do not touch! Hands off buddy! hahaha :P
{ 		
	int frez_houa = GetByteInSet(WeatherTimeAutoLockByteSet, FREEZE_TIME_HOUR);
	if(GetBit(MD_Misc_OptionsBitSet, MD_MISC_TIME_CYCLE))
	{ 	
		int hour,minute;
		GET_TIME_OF_DAY(&hour,&minute);
		if(minute == 59 && hour != 23)
		{
			hour++;  //set hour to increase
			minute = 0; //set minute to 0
		}
		if(hour < 24 && minute < 59) 
		{
			minute++; //work when on final hour
		}
		else if(hour == 23 && minute == 59) //if at the end set to 0
		{ 
			hour = 0;
			minute = 0;
		}  
		SET_TIME_OF_DAY(hour,minute);		
	}
	else if(frez_houa != 25) //doesn't run of cycle time is on..
	{
		SET_TIME_OF_DAY(frez_houa,GetByteInSet(WeatherTimeAutoLockByteSet, FREEZE_TIME_MINUTE));
	}

	int frez_weatha = GetByteInSet(WeatherTimeAutoLockByteSet, FREEZE_WEATHER);
	if(frez_weatha != 50)
	{
		FORCE_WEATHER_NOW(frez_weatha);
	}
}