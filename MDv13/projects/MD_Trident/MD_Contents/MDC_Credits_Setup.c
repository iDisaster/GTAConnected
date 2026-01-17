#pragma once

void  MC_Credits_Setup(void)
{
    MENU_SUB_HEADER = "~BLIP_76~ Credits ~BLIP_76~ ";
    AddFunction("~PAD_RIGHT~~COL_NET_6~Developers:");
    AddFunction("~PAD_RIGHT~~s~DevilsDesign - Attrotious base");
	AddFunction("~PAD_RIGHT~~s~XBL AIZLE - Thinking XNotify fixes blackscreen.");
	AddFunction("~PAD_RIGHT~~s~IIV NATHAN VII - Invites, admin system, security");
	AddFunction("~PAD_RIGHT~~s~and everything devil couldn't do and got me to fix.");
	AddFunction("~s~----------------------");
	return;
}
void MC_Credits_Action ()
{
	if(SelectedItem == 4)
	{

	}
	if(SelectedItem == 5)
	{
		NETWORK_SHOW_FRIEND_PROFILE_UI ("XBL AIZLE");
	}
	if(SelectedItem == 6)
	{
		NETWORK_SHOW_FRIEND_PROFILE_UI ("Inquisition V2");
	}
}


