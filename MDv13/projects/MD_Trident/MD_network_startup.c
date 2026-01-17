/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII
 */  
 

#include <natives.h>
#include "MD_Base_Setup/MDB_Strings.h"
#include <common.h>


void main(){	
	THIS_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if(DOES_SCRIPT_EXIST("MD_Superior_Network"))Autoload("MD_Superior_Network",true);
	else Autoload(GET_CURRENT_EPISODE() == TBOGT ?  "network_main_rs" : "network_main",true);
	Autoload("MD_Load_Mods",true);			
	WAIT(100); 
	TERMINATE_THIS_SCRIPT();		
}