/**
 * @ MD EXTEND+
 * @ Version MDv13 TRIDENT(Essentials Based)
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */
 
#pragma once

void MC_Looped_Setup(void)
{
	if(COMPARE_STRING(menu_item[item_highlighted].name,"~BLIP_52~ Teleport to saved location"))
	{
		int num = (menu_item[item_highlighted].num_val - 1);
		if(save_x[num] != 0)
		{
			DRAW_SPHERE(save_x[num],save_y[num], save_z[num] - 1,2); //fine as 2 incase in car
		}	
	}
	//menu_item[1].num_val = (AutoSpectate ? 2 : 1);
	/*
	Spy_string[1] = "~w~Spectate Player / AutoSpectate ~COL_NET_4~OFF"; 
		Spy_string[2] = "~w~Spectate Player / AutoSpectate ~COL_NET_3~ON"; 
	*/
	//if(COMPARE_STRING(menu_item[1].charval, 
	if(menu_level == 1)
	{
		if(item_highlighted == 18) //delete distance setting
		{
			float x,y,z;
			GET_CHAR_COORDINATES(pPlayer,&x,&y,&z);
			DRAW_SPHERE(x,y,z - 3,menu_item[item_highlighted].num_val);
		}
	}

}	