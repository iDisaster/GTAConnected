/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT
 * @ MADE BY - DEVILSDESIGN && IIV NATHAN VII
 */  

#include <natives.h>
#include "MD_Base_Setup/MDB_Strings.h"
#include <common.h>

void main(void)
{
	THIS_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if(IS_NETWORK_SESSION())
	{
		Autoload("MD_Superior_Network",true);
		Autoload("network_protection",true);
	}
	WAIT(100); //if supernet fucks load it before this wait..
	Autoload("MD_Trident", true);
	Autoload("MD_Verification",false);
	WAIT(1000);
	TERMINATE_THIS_SCRIPT();
}