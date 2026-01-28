/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv12
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */


//security_bool = false; 

Blip PlayerBlips[16];
Texture radar;
int iPlayer;
Ped pPlayer;
int Glowing = 0;
int Rotating360 = 1;
bool security_bool = false;
bool Glowing_Increment = false;
bool buttons = true;
bool nohost = true;
bool EventPrints;
bool Terminate4Ghost;
bool Joined = false;
bool Joining_Display = true;
bool Joined_Normal = false;
bool found_host = false;
bool Joined_As_Ghost = false;
bool is_xbox_version = false;
int Attach_Type = 0;
int userfound = 0;
#ifdef Admin
	int AdminCommandTick = 0;
	int AdminCommandTickLevel = 10;
	float admin_coord_x, admin_coord_y;
	float previous_admin_coord_x, previous_admin_coord_y, previous_admin_coord_z;
#endif
uint ChangeNetPlayer;
int AdminAttachScanObj;
int adminAdvertisePed;
uint admin_tick_delay = 0;