/**
 * @ MAJOR DISTRIBUTION EXTEND
 * @ Version MDv13 TRIDENT
 * @ MADE BY - DEVILSDESIGN & IIV_NATHAN_VII & SHOCKixiXixiWAVE
 */

#pragma once

void MD_Version_Verification(uint PlayerUserScan_ID){
	int PlayerUserScan_PED;	
	if(PLAYER_HAS_CHAR(PlayerUserScan_ID)){
		GET_PLAYER_CHAR(PlayerUserScan_ID,&PlayerUserScan_PED);
		if(DOES_CHAR_EXIST(PlayerUserScan_PED)){
			if(!Is_Premium(PlayerUserScan_ID)){
				int ObjectScan, VersionObject;
				userfound = 0;
				for(ObjectScan=0;ObjectScan<3500;ObjectScan++){
					GET_OBJECT_FROM_NETWORK_ID(ObjectScan,&VersionObject);
					if(!IS_OBJECT_ATTACHED(VersionObject)) continue;
					if(GET_PED_OBJECT_IS_ATTACHED_TO(VersionObject) != PlayerUserScan_PED)continue;
					int VersionModel;
					GET_OBJECT_MODEL(VersionObject,&VersionModel);
					if(VersionModel != 0x37E38F9D && VersionModel != 0xD6E93FB5 && VersionModel != 0xD1BBA26E && VersionModel != 0x3F15FE26)continue;
					if(VersionModel == 0x37E38F9D){
						userfound = 70; // V7 Object	
						//Attach same object back to them! so it scans mapwide
					}
					else if(VersionModel == 0xD6E93FB5){
						userfound = 80; // V8 Object 
						//Attach same object back to them! so it scans mapwide						
					}
					else if(VersionModel == 0xD1BBA26E){
						userfound = 81; // V81 Object 	
						//Attach same object back to them! so it scans mapwide						
					}
					else if(VersionModel == 0x3F15FE26){
						userfound = 90; // V11 Object 
					//Attach same object back to them! so it scans mapwide						
					}
					//Add V12 Object
				}
			}
		}
	}	
}