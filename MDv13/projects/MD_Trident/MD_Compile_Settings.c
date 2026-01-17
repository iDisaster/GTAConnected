/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV NATHAN VII
 */

//!Preferences to compile*/

//#define VERSION_PC
//#define Developer
#define SuperAdmin
//#define Admin
//#define Premium
//#define Public
#define Beta
#define DevTest // this MUST be commented out on any compile that is not for the developers testing purposes.... (aka all Trident Users)

#ifdef Developer
	#define SuperAdmin
#endif

#ifdef SuperAdmin
	#define Admin
#endif

#ifdef Admin
	#define Premium
#endif



#ifdef DevTest
#ifndef Developer
#define GiveWarning
#endif
#endif
