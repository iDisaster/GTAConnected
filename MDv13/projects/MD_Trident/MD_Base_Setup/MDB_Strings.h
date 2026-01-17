/**
 * @ MD EXTEND+
 * @ Version MDv13 TRIDENT(Essentials Based)
 * @ MADE BY - DEVILSDESIGN & IIV NATHAN VII
 */ 

 //THIS IS NOT TO BE SHARED, THERE WILL BE HUGE CONSEQUENSES --> Nail in coffin for IV/ infinite loading screens for everybody 24/7 just like Red Dead Redemption
#pragma once

void SetByte(int* addr, const int val)
{
	#ifdef VERSION_PC
		*addr = (val % 256);
	#else
		*addr = SHIFT_LEFT(val % 256, 24) | (*addr & 0xFFFFFF);
	#endif
}

int GetByte(const int* addr)
{
	#ifdef VERSION_PC
		return *addr % 256;
	#else
		return SHIFT_RIGHT(*addr, 24);
	#endif
}

char* Strcpy(const char* dest, const char* src)
{
	int i;
	for(i = 0; GetByte((int*)((int)src + i)); i++)
		SetByte((int*)((int)dest + i), GetByte((int*)((int)src + i)));
	
	SetByte((int*)((int)dest + i), 0);
	return dest;
}

char* Strcat(const char* dest, const char * src)
{
	unsigned int len = GET_LENGTH_OF_LITERAL_STRING(dest);
	Strcpy((char*)((int)dest + len), src);
	return dest;
}

char* itoa(const int num, const char * dest)
{
	uint numArr[10];
	unsigned int len = GET_LENGTH_OF_LITERAL_STRING(dest);
	unsigned int size = 0;
	int i = num;
	bool negative = num < 0;
	if(negative) Strcpy((char*)((int)dest + len), "-");
	do 
	{
		numArr[9-size] = i % 10;
		i /= 10;
		size++;
	} while(i != 0);
	
	for(i = (10 - size); i < 10; i++)
	{
		SetByte((int*)((int)dest + (len + (i-(10-size)) + negative)), (numArr[i] + '0'));
	}
	SetByte((int*)((int)dest + (len + size + negative)), 0);
	return dest;
}


//Nathans funcs/////////
void PLAYERS_COLOUR(const int playerindex, char * dest)
{
	Strcat(dest, "~COL_NET_");
	itoa( (playerindex + 1), dest);
	Strcat(dest, "~");
}


void PLAYER_NAME_WITH_COLOUR(const int playerindex, char * dest) //WORKS!
{
	PLAYERS_COLOUR(playerindex, dest);
	Strcat(dest, GET_PLAYER_NAME(playerindex));
}

char* VEHICLES_MODEL_NAME(const int vehicle)
{
	int model;
	GET_CAR_MODEL(vehicle,&model);
	return GET_STRING_FROM_TEXT_FILE(GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(model));
}
////////////////////////

char* ftoa(float num, char * dest, int decimalPlaces)
{
	itoa((int)num, dest);
	Strcat(dest, ".");
	itoa( (int)((num - (int)num) * POW(10.0, (float)decimalPlaces)), dest);
	return dest;
}
