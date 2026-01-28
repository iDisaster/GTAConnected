/*	--------------------------------------------------------------------------------
	This header contains each native implemented by R* in GTAIV/EFLC PC version.
	Almost all network natives are `//` cuz im not sure that someone will ever
	use 'em. Some natives are `// deprecated` becuase they are corrupted/nulled/etc.
	I have no time for typing/naming everything here so some params are unnamed or
	untyped.
	Be aware that game patches before 1070/1120 may not have some of this natives.
	1/3 of this natives were grabbed from aru's scripthook so cookies to aru =B

	This file is a part of scocl project (C) Alexander Blade 2011
--------------------------------------------------------------------------------   */

//Organization done by KeyFlamer. 
// Hope you all enjoy!
//01 July 2016 - 03 July 2016

#pragma once

#include "types.h"
#include "consts.h"
/**TESTING**/
extern void TELEPORT_NETWORK_PLAYER(int Playerindex, float x, float y, float z);

//namespace CHAR
//{
/**Found by devil**/
//extern boolean FORCE_NET_PLAYER_INVISIBLE(Ped ped, boolean false);
//extern void REGISTER_KILL_IN_MULTIPLAYER_GAME(int KillersPlayerIndex, int playerIndexKilled, int DestroyerOfNetworkID); //NATHAN CONFIRMED -- Wrong!
extern void REGISTER_KILL_IN_MULTIPLAYER_GAME(char* attacker, char* victim, char* manner); //DEVIL CONFIRMED


extern void SET_PLAYER_COLOUR(int playerid, int colour); 
extern boolean SET_IGNORE_SERVER_UPDATE(boolean set);


void GET_NETWORK_ID_FROM_PED(int Ped, int *NetID); //poop 2
extern boolean ARE_ANY_CHARS_NEAR_CHAR(Ped ped, float radius);
extern boolean CAN_CHAR_SEE_DEAD_CHAR(Ped ped, Ped pednext);
extern boolean CELL_CAM_IS_CHAR_VISIBLE(Ped ped);
extern boolean CELL_CAM_IS_CHAR_VISIBLE_NO_FACE_CHECK(Ped ped);
extern boolean DOES_CHAR_EXIST(Ped ped);
extern boolean GET_CHAR_ALLOWED_TO_RUN_ON_BOATS(Ped ped);
extern boolean GET_CHAR_ANIM_IS_EVENT(Ped ped, char *AnimName0, char *AnimName1, boolean flag);
extern boolean GET_CHAR_MELEE_ACTION_FLAG0(Ped ped);
extern boolean GET_CHAR_MELEE_ACTION_FLAG1(Ped ped);
extern boolean GET_CHAR_MELEE_ACTION_FLAG2(Ped ped);
extern boolean GET_CHAR_MOVEMENT_ANIMS_BLOCKED(Ped ped);
extern boolean GET_CHAR_READY_TO_BE_EXECUTED(Ped ped);
extern boolean GET_CHAR_READY_TO_BE_STUNNED(Ped ped);
extern boolean GET_CHAR_SWIM_STATE(Ped ped, int *state);
extern boolean GET_CHAR_WALK_ALONGSIDE_LEADER_WHEN_APPROPRIATE(Ped ped);
extern boolean GET_CHAR_WILL_COWER_INSTEAD_OF_FLEEING(Ped ped);
extern boolean GET_CHAR_WILL_TRY_TO_LEAVE_BOAT_AFTER_LEADER(Ped ped);
extern boolean GET_CHAR_WILL_TRY_TO_LEAVE_WATER(Ped ped);
extern boolean GET_CLOSEST_CHAR(float x, float y, float z, float radius, boolean unknown1, boolean unknown2, Ped *pPed);
extern boolean GET_GROUP_CHAR_DUCKS_WHEN_AIMED_AT(Ped ped);
extern boolean HAS_CAR_BEEN_DAMAGED_BY_CHAR(Vehicle vehicle, Ped ped);
extern boolean HAS_CHAR_ANIM_FINISHED(Ped ped, char *AnimName0, char *AnimName1);
extern boolean HAS_CHAR_BEEN_ARRESTED(Ped ped);
extern boolean HAS_CHAR_BEEN_DAMAGED_BY_CHAR(Ped ped, Ped otherChar, boolean unknownFalse);
extern boolean HAS_CHAR_BEEN_PHOTOGRAPHED(Ped ped);
extern boolean HAS_CHAR_SPOTTED_CHAR(Ped ped, Ped otherChar);
extern boolean HAS_CHAR_SPOTTED_CHAR_IN_FRONT(Ped ped, Ped otherChar);
extern boolean IS_ANY_CHAR_SHOOTING_IN_AREA(float x0, float y0, float z0, float x1, float y1, float z1, boolean flag);
extern boolean IS_CHAR_ARMED(Ped ped, uint slot);
extern boolean IS_CHAR_DEAD(Ped ped);
extern boolean IS_CHAR_DUCKING(Ped ped);
extern boolean IS_CHAR_FACING_CHAR(Ped ped, Ped otherChar, float angle);
extern boolean IS_CHAR_FATALLY_INJURED(Ped ped);
extern boolean IS_CHAR_GESTURING(Ped ped);
extern boolean IS_CHAR_GETTING_IN_TO_A_CAR(Ped ped);
extern boolean IS_CHAR_GETTING_UP(Ped ped);
extern boolean IS_CHAR_HEALTH_GREATER(Ped ped, uint health);
extern boolean IS_CHAR_INJURED(Ped ped);
extern boolean IS_CHAR_IN_AIR(Ped ped);
extern boolean IS_CHAR_IN_ANGLED_AREA_2D(Ped ped, float x1, float y1, float x2, float y2, float unknown, boolean unknownFalse);
extern boolean IS_CHAR_IN_ANGLED_AREA_3D(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, float unknown, boolean unknownFalse);
extern boolean IS_CHAR_IN_ANY_BOAT(Ped ped);
extern boolean IS_CHAR_IN_ANY_CAR(Ped ped);
extern boolean IS_CHAR_IN_ANY_HELI(Ped ped);
extern boolean IS_CHAR_IN_ANY_PLANE(Ped ped);
extern boolean IS_CHAR_IN_ANY_TRAIN(Ped ped);
extern boolean IS_CHAR_IN_AREA_2D(Ped ped, float x1, float y1, float x2, float y2, boolean unknownFalse);
extern boolean IS_CHAR_IN_AREA_3D(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, boolean unknownFalse);
extern boolean IS_CHAR_IN_AREA_ON_FOOT_2D(Ped ped, float x1, float y1, float x2, float y2, boolean unknownFalse);
extern boolean IS_CHAR_IN_FLYING_VEHICLE(Ped ped);
extern boolean IS_CHAR_IN_MELEE_COMBAT(Ped ped);
extern boolean IS_CHAR_IN_TAXI(Ped ped);
extern boolean IS_CHAR_IN_WATER(Ped ped);
extern boolean IS_CHAR_MALE(Ped ped);
extern boolean IS_CHAR_MODEL(Ped ped, uint model);
extern boolean IS_CHAR_ON_ANY_BIKE(Ped ped);
extern boolean IS_CHAR_ON_FIRE(Ped ped);
extern boolean IS_CHAR_ON_FOOT(Ped ped);
extern boolean IS_CHAR_ON_SCREEN(Ped ped);
extern boolean IS_CHAR_PLAYING_ANIM(Ped ped, char *animSet, char *animName);
extern boolean IS_CHAR_RESPONDING_TO_ANY_EVENT(Ped ped);
extern boolean IS_CHAR_RESPONDING_TO_EVENT(Ped ped, int eventid);
extern boolean IS_CHAR_SHOOTING(Ped ped);
extern boolean IS_CHAR_SHOOTING_IN_AREA(Ped ped, float x1, float y1, float x2, float y2, boolean unknownFalse);
extern boolean IS_CHAR_SITTING_IDLE(Ped ped);
extern boolean IS_CHAR_SITTING_IN_ANY_CAR(Ped ped);
extern boolean IS_CHAR_SITTING_IN_CAR(Ped ped, Vehicle vehicle);
extern boolean IS_CHAR_STOPPED(Ped ped);
extern boolean IS_CHAR_STUCK_UNDER_CAR(Ped ped);
extern boolean IS_CHAR_SWIMMING(Ped ped);
extern boolean IS_CHAR_TOUCHING_CHAR(Ped ped, Ped otherChar);
extern boolean IS_CHAR_TOUCHING_OBJECT(Ped ped, Object obj);
extern boolean IS_CHAR_TOUCHING_OBJECT_ON_FOOT(Ped ped, Object obj);
extern boolean IS_CHAR_TRYING_TO_ENTER_A_LOCKED_CAR(Ped ped);
extern boolean IS_CHAR_USING_ANY_SCENARIO(Ped ped);
extern boolean IS_CHAR_USING_MAP_ATTRACTOR(Ped ped);
extern boolean IS_CHAR_USING_SCENARIO(Ped ped, char *scenarioName);
extern boolean IS_CHAR_VISIBLE(Ped ped);
extern boolean IS_CHAR_WAITING_FOR_WORLD_COLLISION(Ped ped);
extern boolean LOCATE_CHAR_ANY_MEANS_2D(Ped ped, float x0, float y0, float x1, float y1, boolean flag);
extern boolean LOCATE_CHAR_ANY_MEANS_3D(Ped ped, float x0, float y0, float z0, float x1, float y1, float z1, boolean flag);
extern boolean LOCATE_CHAR_ANY_MEANS_CAR_2D(Ped ped, Car car, float x, float y, boolean flag);
extern boolean LOCATE_CHAR_ANY_MEANS_CAR_3D(Ped ped, Car car, float x, float y, float z, boolean flag);
extern boolean LOCATE_CHAR_ANY_MEANS_CHAR_2D(Ped ped, Ped pednext, float x, float y, boolean flag);
extern boolean LOCATE_CHAR_ANY_MEANS_CHAR_3D(Ped ped, Ped pednext, float x, float y, float z, boolean flag);
extern boolean LOCATE_CHAR_ANY_MEANS_OBJECT_2D(Ped ped, Object obj, float x, float y, boolean flag);
extern boolean LOCATE_CHAR_ANY_MEANS_OBJECT_3D(Ped ped, Object obj, float x, float y, float z, boolean flag);
extern boolean LOCATE_CHAR_IN_CAR_2D(Ped ped, float x0, float y0, float x1, float y1, boolean flag);
extern boolean LOCATE_CHAR_IN_CAR_3D(Ped ped, float x0, float y0, float z0, float x1, float y1, float z, boolean flag);
extern boolean LOCATE_CHAR_IN_CAR_CAR_2D(Ped ped, Car car, float x, float y, boolean flag);
extern boolean LOCATE_CHAR_IN_CAR_CAR_3D(Ped ped, Car car, float x, float y, float z, boolean flag);
extern boolean LOCATE_CHAR_IN_CAR_CHAR_2D(Ped ped, Ped pednext, float x, float y, boolean flag);
extern boolean LOCATE_CHAR_IN_CAR_CHAR_3D(Ped ped, Car pednext, float x, float y, float z, boolean flag);
extern boolean LOCATE_CHAR_IN_CAR_OBJECT_2D(Ped ped, Object obj, float x, float y, boolean flag);
extern boolean LOCATE_CHAR_IN_CAR_OBJECT_3D(Ped ped, Object obj, float x, float y, float z, boolean flag);
extern boolean LOCATE_CHAR_ON_FOOT_2D(Ped ped, float x0, float y0, float x1, float y1, boolean flag);
extern boolean LOCATE_CHAR_ON_FOOT_3D(Ped ped, float x0, float y0, float z0, float x1, float y1, float z1, boolean flag);
extern boolean LOCATE_CHAR_ON_FOOT_CAR_2D(Ped ped, Car car, float x, float y, boolean flag);
extern boolean LOCATE_CHAR_ON_FOOT_CAR_3D(Ped ped, Car car, float x, float y, float z, boolean flag);
extern boolean LOCATE_CHAR_ON_FOOT_CHAR_2D(Ped ped, Ped pednext, float x, float y, boolean flag);
extern boolean LOCATE_CHAR_ON_FOOT_CHAR_3D(Ped ped, Ped pednext, float x, float y, float z, boolean flag);
extern boolean LOCATE_CHAR_ON_FOOT_OBJECT_2D(Ped ped, Object obj, float x, float y, boolean flag);
extern boolean LOCATE_CHAR_ON_FOOT_OBJECT_3D(Ped ped, Object obj, float x, float y, float z, boolean flag);
extern boolean SET_CHAR_ANIM_PLAYING_FLAG(Ped ped, char *AnimName0, char *AnimName1, boolean flag);
extern char *GET_ANIM_GROUP_FROM_CHAR(Ped ped);
extern float GET_CHAR_MAX_MOVE_BLEND_RATIO(Ped ped);
extern int GET_CHAR_GRAVITY(Ped ped);
extern ScriptAny GET_CHAR_LAST_DAMAGE_BONE(Ped ped, uint *pBone);
extern ScriptAny SET_CHAR_DUCKING(Ped ped, boolean set);	//original scripts have ret for this
extern ScriptAny TOGGLE_CHAR_DUCKING(Ped ped);	//doesnt has result ,  but orig scripts though that shud
extern uint GET_CHAR_DRAWABLE_VARIATION(Ped ped, uint component);
extern uint GET_CHAR_MONEY(Ped ped);
extern uint GET_CHAR_TEXTURE_VARIATION(Ped ped, uint component);
extern uint GET_NUMBER_OF_CHAR_DRAWABLE_VARIATIONS(Ped ped, uint component);
extern uint GET_NUMBER_OF_CHAR_TEXTURE_VARIATIONS(Ped ped, uint component, uint unknown1);
extern void ADD_ARMOUR_TO_CHAR(Ped ped, uint amount);
extern void ATTACH_ANIMS_TO_MODEL(uint model, char *anims);
extern void BEGIN_CHAR_SEARCH_CRITERIA(void);
extern void BLEND_FROM_NM_WITH_ANIM(Ped ped, char *AnimName0, char *AnimName1, int, float x, float y, float z);
extern void BLEND_OUT_CHAR_MOVE_ANIMS(Ped ped);
extern void BLOCK_CHAR_AMBIENT_ANIMS(Ped ped, boolean block);
extern void BLOCK_CHAR_GESTURE_ANIMS(Ped ped, boolean value);
extern void BLOCK_CHAR_HEAD_IK(Ped ped, boolean block);
extern void BLOCK_CHAR_VISEME_ANIMS(Ped ped, boolean block);
extern void CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(Ped ped);
extern void CHANGE_CHAR_SIT_IDLE_ANIM(Ped ped, ScriptAny, ScriptAny, ScriptAny);
extern void CLEAR_ALL_CHAR_PROPS(Ped ped);
extern void CLEAR_ALL_CHAR_RELATIONSHIPS(Ped ped, int relgroup);
extern void CLEAR_CHAR_LAST_DAMAGE_BONE(Ped ped);
extern void CLEAR_CHAR_LAST_DAMAGE_ENTITY(Ped ped);
extern void CLEAR_CHAR_LAST_WEAPON_DAMAGE(Ped ped);
extern void CLEAR_CHAR_PROP(Ped ped, boolean unknown);
extern void CLEAR_CHAR_RELATIONSHIP(Ped ped, int reltype, int relgroup);
extern void CLEAR_CHAR_SECONDARY_TASK(Ped ped);
extern void CLEAR_CHAR_TASKS(Ped ped);
extern void CLEAR_CHAR_TASKS_IMMEDIATELY(Ped ped);
extern void CLEAR_RELATIONSHIP(int, int, int);
extern void CLEAR_ROOM_FOR_CHAR(Ped ped);
extern void CREATE_CHAR(RelationshipGroup type, uint model, float x, float y, float z, Ped *pPed, boolean unknownTrue);
extern void CREATE_CHAR_AS_PASSENGER(Vehicle vehicle, uint charType, uint model, uint passengerIndex, Ped *pPed);
extern void CREATE_CHAR_INSIDE_CAR(Vehicle vehicle, uint charType, uint model, Ped *pPed);
extern void CREATE_RANDOM_CHAR(float x, float y, float z, Ped *pPed);
extern void CREATE_RANDOM_CHAR_AS_PASSENGER(Vehicle vehicle, uint seat, Ped *pPed);
extern void CREATE_RANDOM_FEMALE_CHAR(float x, float y, float z, Ped *pPed);
extern void CREATE_RANDOM_MALE_CHAR(float x, float y, float z, Ped *pPed);
extern void DAMAGE_CHAR(Ped ped, uint hitPoints, boolean unknown);
extern void DELETE_CHAR(Ped *pPed);
extern void DONT_REMOVE_CHAR(Ped ped);	//mission cleanup related
extern void END_CHAR_SEARCH_CRITERIA(void);
extern void EXPLODE_CHAR_HEAD(Ped ped);
extern void EXTINGUISH_CHAR_FIRE(Ped ped);
extern void FREEZE_CHAR_POSITION(Ped ped, boolean frozen);
extern void FREEZE_CHAR_POSITION_AND_DONT_LOAD_COLLISION(Ped ped, boolean frozen);
extern void GET_CHAR_ANIM_BLEND_AMOUNT(Ped ped, char *AnimName0, char *AnimName1, float *amount);
extern void GET_CHAR_ANIM_CURRENT_TIME(Ped ped, char *animGroup, char *animName, float *pValue);
extern void GET_CHAR_ANIM_TOTAL_TIME(Ped ped, char *animGroup, char *animName, float *pValue);
extern void GET_CHAR_ARMOUR(Ped ped, uint *pArmour);
extern void GET_CHAR_COORDINATES(Ped ped, float *pX, float *pY, float *pZ);
extern void GET_CHAR_EXTRACTED_DISPLACEMENT(Ped ped, boolean unknown, float *pX, float *pY, float *pZ);
extern void GET_CHAR_EXTRACTED_VELOCITY(Ped ped, boolean, float *x, float *y, float *z);
extern void GET_CHAR_HEADING(Ped ped, float *pValue);
extern void GET_CHAR_HEALTH(Ped ped, float *pHealth);
extern void GET_CHAR_HEIGHT_ABOVE_GROUND(Ped ped, float *pValue);
extern void GET_CHAR_HIGHEST_PRIORITY_EVENT(Ped ped, int *event);
extern void GET_CHAR_IN_CAR_PASSENGER_SEAT(Vehicle vehicle, uint seatIndex, Ped *pPed);
extern void GET_CHAR_MODEL(Ped ped, uint *pModel);
extern void GET_CHAR_MOVE_ANIM_SPEED_MULTIPLIER(Ped ped, float *multiplier);
extern void GET_CHAR_PROP_INDEX(Ped ped, boolean unknown, uint *pIndex);
extern void GET_CHAR_SPEED(Ped ped, float *pValue);
extern void GET_CHAR_VELOCITY(Ped ped, float *pX, float *pY, float *pZ);
extern void GET_DEAD_CHAR_COORDINATES(Ped ped, float *pX, float *pY, float *pZ);
extern void GET_DEAD_CHAR_PICKUP_COORDS(Ped ped, float *pX, float *pY, float *pZ);
extern void GET_KEY_FOR_CHAR_IN_ROOM(Ped ped, uint *pKey);
extern void GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(Ped ped, float x, float y, float z, float *pOffX, float *pOffY, float *pOffZ);
extern void MARK_CHAR_AS_NO_LONGER_NEEDED(Ped *pPed);
extern void MODIFY_CHAR_MOVE_BLEND_RATIO(Ped ped, ScriptAny);
extern void MODIFY_CHAR_MOVE_STATE(Ped ped, uint state);
extern void REMOVE_CHAR_DEFENSIVE_AREA(Ped ped);
extern void REMOVE_CHAR_ELEGANTLY(Ped ped);
extern void REMOVE_CHAR_FROM_CAR_MAINTAIN_POSITION(Ped ped, Car car);
extern void REMOVE_CHAR_FROM_GROUP(Ped ped);
extern void SET_ANIM_GROUP_FOR_CHAR(Ped ped, char *grname);
extern void SET_CHAR_ACCURACY(Ped ped, uint value);
extern void SET_CHAR_ALLOWED_TO_DUCK(Ped ped, boolean set);
extern void SET_CHAR_ALLOWED_TO_RUN_ON_BOATS(Ped ped, boolean set);
extern void SET_CHAR_ALL_ANIMS_SPEED(Ped ped, float speed);
extern void SET_CHAR_ANGLED_DEFENSIVE_AREA(Ped ped, float x0, float y0, float z0, float x1, float y1, float z1, float angle);
extern void SET_CHAR_ANIM_BLEND_OUT_DELTA(Ped ped, char *AnimName0, char *AnimName1, float delta);
extern void SET_CHAR_ANIM_CURRENT_TIME(Ped ped, char *AnimName0, char *AnimName1, float time);
extern void SET_CHAR_ANIM_SPEED(Ped ped, char *AnimName0, char *AnimName1, float speed);
extern void SET_CHAR_AS_ENEMY(Ped ped, boolean value);
extern void SET_CHAR_AS_MISSION_CHAR(Ped ped);
extern void SET_CHAR_BLEEDING(Ped ped, boolean set);
extern void SET_CHAR_BULLETPROOF_VEST(Ped ped, boolean set);
extern void SET_CHAR_CANT_BE_DRAGGED_OUT(Ped ped, boolean enabled);
extern void SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE(Ped ped, boolean value);
extern void SET_CHAR_CAN_BE_SHOT_IN_VEHICLE(Ped ped, boolean enabled);
extern void SET_CHAR_CAN_SMASH_GLASS(Ped ped, boolean set);
extern void SET_CHAR_CLIMB_ANIM_RATE(Ped ped, float rate);
extern void SET_CHAR_COLLISION(Ped ped, boolean set);
extern void SET_CHAR_COMPONENT_VARIATION(Ped ped, uint component, uint modelVariation, uint textureVariation);
extern void SET_CHAR_COORDINATES(Ped ped, float x, float y, float z);
extern void SET_CHAR_COORDINATES_DONT_CLEAR_PLAYER_TASKS(Ped ped, float x, float y, float z);
extern void SET_CHAR_COORDINATES_DONT_WARP_GANG(Ped ped, float x, float y, float z);
extern void SET_CHAR_COORDINATES_DONT_WARP_GANG_NO_OFFSET(Ped ped, float x, float y, float z);
extern void SET_CHAR_COORDINATES_NO_OFFSET(Ped ped, float x, float y, float z);
extern void SET_CHAR_DEFAULT_COMPONENT_VARIATION(Ped ped);
extern void SET_CHAR_DEFENSIVE_AREA_ATTACHED_TO_PED(Ped ped, Ped pednext, float x0, float y0, float z0, float x1, float y1, float z1, int, int);
extern void SET_CHAR_DESIRED_HEADING(Ped ped, float heading);
extern void SET_CHAR_DIES_INSTANTLY_IN_WATER(Ped ped, boolean allow);
extern void SET_CHAR_DROPS_WEAPONS_WHEN_DEAD(Ped ped, boolean value);
extern void SET_CHAR_DROWNS_IN_SINKING_VEHICLE(Ped ped, boolean set);
extern void SET_CHAR_DROWNS_IN_WATER(Ped ped, boolean set);
extern void SET_CHAR_DRUGGED_UP(Ped ped, boolean drugged);
extern void SET_CHAR_DUCKING_TIMED(Ped ped, int timed);
extern void SET_CHAR_FIRE_DAMAGE_MULTIPLIER(Ped ped, float multiplier);
extern void SET_CHAR_FORCE_DIE_IN_CAR(Ped ped, boolean set);
extern void SET_CHAR_GESTURE_GROUP(Ped ped, char *AnimGroup);
extern void SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR(Ped ped, boolean set);
extern void SET_CHAR_GRAVITY(Ped ped, float value);
extern void SET_CHAR_HEADING(Ped ped, float heading);
extern void SET_CHAR_HEALTH(Ped ped, float health); //was uint
extern void SET_CHAR_INVINCIBLE(Ped ped, boolean enable);
extern void SET_CHAR_IN_CUTSCENE(Ped ped, boolean set);
extern void SET_CHAR_IS_TARGET_PRIORITY(Ped ped, boolean enable);
extern void SET_CHAR_KEEP_TASK(Ped ped, boolean value);
extern void SET_CHAR_MAX_HEALTH(Ped ped, uint value);
extern void SET_CHAR_MAX_MOVE_BLEND_RATIO(Ped ped, float ratio);
extern void SET_CHAR_MAX_TIME_IN_WATER(Ped ped, float time);
extern void SET_CHAR_MAX_TIME_UNDERWATER(Ped ped, float time);
extern void SET_CHAR_MELEE_ACTION_FLAG0(Ped ped, boolean set);
extern void SET_CHAR_MELEE_ACTION_FLAG1(Ped ped, boolean set);
extern void SET_CHAR_MELEE_ACTION_FLAG2(Ped ped, boolean set);
extern void SET_CHAR_MELEE_MOVEMENT_CONSTAINT_BOX(Ped ped, float x0, float y0, float z0, float x1, float y1, float z1);
extern void SET_CHAR_MONEY(Ped ped, uint amount);
extern void SET_CHAR_MOVEMENT_ANIMS_BLOCKED(Ped ped, boolean set);
extern void SET_CHAR_MOVE_ANIM_SPEED_MULTIPLIER(Ped ped, float multiplier);
extern void SET_CHAR_NEVER_LEAVES_GROUP(Ped ped, boolean value);
extern void SET_CHAR_NEVER_TARGETTED(Ped ped, boolean set);
extern void SET_CHAR_NOT_DAMAGED_BY_RELATIONSHIP_GROUP(Ped ped, uint relationshipGroup, boolean enable);
extern void SET_CHAR_ONLY_DAMAGED_BY_PLAYER(Ped ped, boolean set);
extern void SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(Ped ped, boolean set, int relgroup);
extern void SET_CHAR_PROOFS(Ped ped, boolean unknown0, boolean fallingDamage, boolean unknown1, boolean unknown2, boolean unknown3);
extern void SET_CHAR_PROP_INDEX(Ped ped, uint propType, uint index);
extern void SET_CHAR_PROP_INDEX_TEXTURE(Ped ped, int, int, int);
extern void SET_CHAR_PROVIDE_COVERING_FIRE(Ped ped, boolean set);
extern void SET_CHAR_RANDOM_COMPONENT_VARIATION(Ped ped);
extern void SET_CHAR_READY_TO_BE_EXECUTED(Ped ped, boolean set);
extern void SET_CHAR_READY_TO_BE_STUNNED(Ped ped, boolean set);
extern void SET_CHAR_RELATIONSHIP(Ped ped, uint relationshipLevel, uint relationshipGroup);
extern void SET_CHAR_RELATIONSHIP_GROUP(Ped ped, uint relationshipGroup);
extern void SET_CHAR_ROTATION(Ped ped, float xr, float yr, float zr);
extern void SET_CHAR_SHOOT_RATE(Ped ped, int rate);
extern void SET_CHAR_SIGNAL_AFTER_KILL(Ped ped, boolean set);
extern void SET_CHAR_SPHERE_DEFENSIVE_AREA(Ped ped, float x, float y, float z, float radius);
extern void SET_CHAR_STAY_IN_CAR_WHEN_JACKED(Ped ped, boolean set);
extern void SET_CHAR_SUFFERS_CRITICAL_HITS(Ped ped, boolean value);
extern void SET_CHAR_USES_DEAFULT_ANIM_GROUP_WHEN_FLEEING(Ped ped, boolean set);
extern void SET_CHAR_USES_UPPERBODY_DAMAGE_ANIMS_ONLY(Ped ped, boolean set);
extern void SET_CHAR_VELOCITY(Ped ped, float x, float y, float z);
extern void SET_CHAR_VISIBLE(Ped ped, boolean value);
extern void SET_CHAR_WALK_ALONGSIDE_LEADER_WHEN_APPROPRIATE(Ped ped, boolean set);
extern void SET_CHAR_WATCH_MELEE(Ped ped, boolean set);
extern void SET_CHAR_WILL_COWER_INSTEAD_OF_FLEEING(Ped ped, boolean set);
extern void SET_CHAR_WILL_DO_DRIVEBYS(Ped ped, boolean value);
extern void SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN(Ped ped, boolean value);
extern void SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT(Ped ped, boolean set);
extern void SET_CHAR_WILL_MOVE_WHEN_INJURED(Ped ped, boolean value);
extern void SET_CHAR_WILL_ONLY_FIRE_WITH_CLEAR_LOS(Ped ped, boolean set);
extern void SET_CHAR_WILL_REMAIN_ON_BOAT_AFTER_MISSION_ENDS(Ped ped, boolean set);
extern void SET_CHAR_WILL_TRY_TO_LEAVE_BOAT_AFTER_LEADER(Ped ped, boolean set);
extern void SET_CHAR_WILL_TRY_TO_LEAVE_WATER(Ped ped, boolean set);
extern void SET_CHAR_WILL_USE_CARS_IN_COMBAT(Ped ped, boolean value);
extern void SET_CHAR_WILL_USE_COVER(Ped ped, boolean value);
extern void SET_DEAD_CHAR_COORDINATES(Ped ped, float x, float y, float z);
extern void SET_GROUP_CHAR_DUCKS_WHEN_AIMED_AT(Ped ped, boolean value);
extern void SET_LOAD_COLLISION_FOR_CHAR_FLAG(Ped ped, boolean set);
extern void SET_ROOM_FOR_CHAR_BY_KEY(Ped ped, uint key);
extern void SET_ROOM_FOR_CHAR_BY_NAME(Ped ped, char *roomname);
extern void UNSET_CHAR_MELEE_MOVEMENT_CONSTAINT_BOX(Ped ped);
extern void FUCK_THA_HOLE(Ped ped, boolean set);
//}
//namespace PLAYER
//{
extern boolean CAN_PLAYER_START_MISSION(int player);
extern boolean GET_PLAYER_HAS_TRACKS(void);
extern boolean HAS_ACHIEVEMENT_BEEN_PASSED(uint achievement);
extern boolean HAS_PLAYER_COLLECTED_PICKUP(Player playerIndex, Pickup pikcup);
extern boolean HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(Player playerIndex);
extern boolean HAS_PLAYER_DAMAGED_AT_LEAST_ONE_VEHICLE(Player playerIndex);
extern boolean IS_PLACE_CAR_BOMB_ACTIVE(void);
extern boolean IS_PLAYER_BEING_ARRESTED(void);
extern boolean IS_PLAYER_CLIMBING(Player playerIndex);
extern boolean IS_PLAYER_CONTROL_ON(Player playerIndex);
extern boolean IS_PLAYER_DEAD(Player playerIndex);
extern boolean IS_PLAYER_FREE_AIMING_AT_CHAR(Player playerIndex, Ped ped);
extern boolean IS_PLAYER_FREE_FOR_AMBIENT_TASK(Player playerIndex);
extern boolean IS_PLAYER_IN_REMOTE_MODE(int player);
extern boolean IS_PLAYER_ONLINE(void);
extern boolean IS_PLAYER_PERFORMING_STOPPIE(int player);
extern boolean IS_PLAYER_PERFORMING_WHEELIE(int player);
extern boolean IS_PLAYER_PLAYING(Player playerIndex);
extern boolean IS_PLAYER_PRESSING_HORN(Player playerIndex);
extern boolean IS_PLAYER_READY_FOR_CUTSCENE(int player);
extern boolean IS_PLAYER_SCRIPT_CONTROL_ON(int player);
extern boolean IS_PLAYER_SIGNED_IN_LOCALLY(void);
extern boolean IS_PLAYER_TARGETTING_ANYTHING(Player playerIndex);
extern boolean IS_PLAYER_TARGETTING_CHAR(Player playerIndex, Ped ped);
extern boolean IS_PLAYER_TARGETTING_OBJECT(Player playerIndex, Object obj);
extern boolean IS_PLAYER_VEHICLE_ENTRY_DISABLED(int player);
extern boolean IS_SCORE_GREATER(Player playerIndex, uint score);
extern boolean PLAYER_HAS_CHAR(Player playerIndex);
extern boolean PLAYER_HAS_FLASHING_STARS_ABOUT_TO_DROP(Player playerIndex);
extern boolean PLAYER_HAS_GREYED_OUT_STARS(Player playerIndex);
extern boolean PLAYER_IS_INTERACTING_WITH_GARAGE(void);
extern boolean PLAYER_IS_NEAR_FIRST_PIGEON(float x, float y, float z);
extern boolean PLAYER_IS_PISSED_OFF(int player);
extern char * GET_PLAYER_RADIO_STATION_NAME(void);
extern char * GET_PLAYER_RADIO_STATION_NAME_ROLL(void);
extern char *GET_PLAYER_NAME(Player playerIndex);
extern char *GET_PLAYER_RADIO_STATION_NAME(void);
extern int GET_LOCAL_PLAYER_MP_CASH(void);
extern int GET_NO_LAW_VEHICLES_DESTROYED_BY_LOCAL_PLAYER(void);
extern void GET_PLAYER_ID_FOR_THIS_PED(Ped ped, int *netid);
extern int GET_PLAYER_RADIO_MODE(void);
extern Player CONVERT_INT_TO_PLAYERINDEX(uint playerId);
extern ScriptAny GET_PLAYER_TO_PLACE_BOMB_IN_CAR(Vehicle vehicle);
extern uint GET_LEFT_PLAYER_CASH_TO_REACH_LEVEL(uint playerRank);
extern uint GET_PLAYERSETTINGS_MODEL_CHOICE(void);
extern uint GET_PLAYER_ID(void);
extern uint GET_PLAYER_RADIO_STATION_INDEX(void);
extern uint GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(Player playerIndex);
extern uint GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(Player playerIndex);
extern uint GET_TIME_SINCE_PLAYER_HIT_BUILDING(Player playerIndex);
extern uint GET_TIME_SINCE_PLAYER_HIT_CAR(Player playerIndex);
extern uint GET_TIME_SINCE_PLAYER_HIT_OBJECT(Player playerIndex);
extern uint GET_TIME_SINCE_PLAYER_HIT_PED(Player playerIndex);
extern uint GET_TIME_SINCE_PLAYER_RAN_LIGHT(Player playerIndex);
extern void ADD_SCORE(Player playerIndex, int score);
extern void ALLOW_LOCKON_TO_RANDOM_PEDS(int player, boolean allow);
extern void ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS(Player playerIndex, boolean allow);
extern void AWARD_PLAYER_MISSION_RESPECT(float respect);
extern void BLOCK_STATS_MENU_ACTIONS(int player);
extern void CHANGE_PLAYER_MODEL(Player playerIndex, uint model);
extern void CHANGE_PLAYER_PHONE_MODEL(int player, uint model);
extern void CHANGE_PLAYER_PHONE_MODEL_OFFSETS(int player, float x0, float y0, float z0, float x1, float y1, float z1);
extern void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(Player playerIndex);
extern void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_VEHICLE(int player);
extern void CREATE_PLAYER(uint playerId, float x, float y, float z, Player *pPlayerIndex);
extern void DELETE_PLAYER(void);
extern void DISABLE_LOCAL_PLAYER_PICKUPS(boolean disable);
extern void DISABLE_PLAYER_AUTO_VEHICLE_EXIT(Ped ped, boolean disable);
extern void DISABLE_PLAYER_LOCKON(Player playerIndex, boolean disabled);
extern void DISABLE_PLAYER_SPRINT(Player playerIndex, boolean disabled);
extern void DISABLE_PLAYER_VEHICLE_ENTRY(int player, boolean disable);
extern void FAKE_DEATHARREST(void);
extern void FORCE_AIR_DRAG_MULT_FOR_PLAYERS_CAR(int player, float multiplier);
extern void FORCE_INTERIOR_LIGHTING_FOR_PLAYER(int player, boolean force);
extern void GET_NUM_OF_MODELS_KILLED_BY_PLAYER(int player, uint model, int *num);
extern void GET_PLAYERS_LAST_CAR_NO_SAVE(Vehicle* pVehicle);
extern void GET_PLAYER_CHAR(Player playerIndex, Ped *pPed);
extern void GET_PLAYER_GROUP(Player playerIndex, Group *pGroup);
extern void GET_PLAYER_MAX_ARMOUR(Player playerIndex, uint *pMaxArmour);
extern void GET_PLAYER_MAX_HEALTH(int player, int *maxhealth);
extern void GIVE_PLAYER_RAGDOLL_CONTROL(int player, boolean give);
extern void INCREASE_PLAYER_MAX_ARMOUR(int player, int armour);
extern void INCREASE_PLAYER_MAX_HEALTH(int player, int maxhealth);
extern void LISTEN_TO_PLAYER_GROUP_COMMANDS(Ped ped, boolean set);
extern void MAKE_PLAYER_FIRE_PROOF(int player, boolean proof);
extern void MAKE_PLAYER_GANG_DISAPPEAR(void);
extern void MAKE_PLAYER_GANG_REAPPEAR(void);
extern void MAKE_PLAYER_SAFE_FOR_CUTSCENE(int player);
extern void REGISTER_PLAYER_RESPAWN_COORDS(Player playerIndex, float x, float y, float z);
extern void REMOVE_PLAYER_HELMET(Player playerIndex, boolean remove);
extern void RESET_NO_LAW_VEHICLES_DESTROYED_BY_LOCAL_PLAYER(void);
extern void RESET_NUM_OF_MODELS_KILLED_BY_PLAYER(uint model);
extern void SET_ALL_RANDOM_PEDS_FLEE(int player, boolean set);
extern void SET_DISABLE_PLAYER_SHOVE_ANIMATION(Ped ped, boolean disable);
extern void SET_DONT_ACTIVATE_RAGDOLL_FROM_PLAYER_IMPACT(Ped ped, boolean set);
extern void SET_DRAW_PLAYER_COMPONENT(int component, boolean set);
extern void SET_EVERYONE_IGNORE_PLAYER(Player playerIndex, boolean value);
extern void SET_FORCE_LOOK_BEHIND(boolean set);
extern void SET_FORCE_PLAYER_TO_ENTER_THROUGH_DIRECT_DOOR(Ped ped, boolean set);
extern void SET_FREE_HEALTH_CARE(int player, boolean set);
extern void SET_LOCAL_PLAYER_PAIN_VOICE(char *name);
extern void SET_LOCAL_PLAYER_VOICE(char *name);
extern void SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE(Player playerIndex);
extern void SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(Player playerIndex, boolean value);
extern void SET_PLAYER_CAN_DO_DRIVE_BY(Player playerIndex, boolean value);
extern void SET_PLAYER_CAN_DROP_WEAPONS_IN_CAR(boolean set);
extern void SET_PLAYER_CAN_USE_COVER(Player playerIndex, boolean value);
extern void SET_PLAYER_CONTROL(Player playerIndex, boolean value);
extern void SET_PLAYER_CONTROL_ADVANCED(Player playerIndex, boolean unknown1, boolean unknown2, boolean unknown3);
extern void SET_PLAYER_CONTROL_FOR_AMBIENT_SCRIPT(int player, boolean flag0, boolean flag1);
extern void SET_PLAYER_CONTROL_FOR_TEXT_CHAT(int player, boolean set);
extern void SET_PLAYER_CONTROL_ON_IN_MISSION_CLEANUP(boolean set);
extern void SET_PLAYER_DISABLE_CROUCH(int player, boolean set);
extern void SET_PLAYER_DISABLE_JUMP(int player, boolean set);
extern void SET_PLAYER_FAST_RELOAD(Player playerIndex, boolean value);
extern void SET_PLAYER_FORCED_AIM(int player, boolean set);
extern void SET_PLAYER_GROUP_RECRUITMENT(int player, boolean set);
extern void SET_PLAYER_GROUP_TO_FOLLOW_ALWAYS(Player playerIndex, boolean value);
extern void SET_PLAYER_GROUP_TO_FOLLOW_NEVER(int player, boolean set);
extern void SET_PLAYER_ICON_COLOUR(int colour);
extern void SET_PLAYER_INVINCIBLE(Player playerIndex, boolean value);
extern void SET_PLAYER_INVISIBLE_TO_AI(boolean set);
extern void SET_PLAYER_IS_IN_STADIUM(boolean set);
extern void SET_PLAYER_KEEPS_WEAPONS_WHEN_RESPAWNED(boolean set);
extern void SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE(int player, Vehicle veh);
extern void SET_PLAYER_MOOD_NORMAL(Player playerIndex);
extern void SET_PLAYER_MOOD_PISSED_OFF(Player playerIndex, uint unknown150);
extern void SET_PLAYER_MP_MODIFIER(int player, int, float modifier);
extern void SET_PLAYER_NEVER_GETS_TIRED(Player playerIndex, boolean value);
extern void SET_PLAYER_PAIN_ROOT_BANK_NAME(char *name);
extern void SET_PLAYER_PLAYER_TARGETTING(boolean set);
extern void SET_PLAYER_SETTINGS_GENRE(Ped ped);
extern void SET_USE_LEG_IK(int player, boolean set);
extern void STORE_SCORE(Player playerIndex, uint* value);
void ALLOW_LOCKON_TO_FRIENDLY_PLAYERS(int player, boolean allow);
//}
//namespace PED
//{
extern boolean ARE_ENEMY_PEDS_IN_AREA(Ped ped, float x, float y, float z, float radius);
extern boolean CAN_PED_SHIMMY_IN_DIRECTION(Ped ped, int direction);
extern boolean CHECK_NM_FEEDBACK(Ped ped, int id, boolean);
extern boolean DOES_GROUP_EXIST(Group group);
extern boolean GET_PED_PATH_MAY_DROP_FROM_HEIGHT(Ped ped);
extern boolean GET_PED_PATH_MAY_USE_CLIMBOVERS(Ped ped);
extern boolean GET_PED_PATH_MAY_USE_LADDERS(Ped ped);
extern boolean GET_PED_PATH_WILL_AVOID_DYNAMIC_OBJECTS(Ped ped);
extern boolean GET_PED_STEERS_AROUND_OBJECTS(Ped ped);
extern boolean GET_PED_STEERS_AROUND_PEDS(Ped ped);
extern boolean GET_TASK_PLACE_CAR_BOMB_UNSUCCESSFUL(void);
extern boolean HAS_OVERRIDEN_SIT_IDLE_ANIM_FINISHED(Ped ped);
extern boolean IS_GROUP_LEADER(Ped ped, Group group);
extern boolean IS_GROUP_MEMBER(Ped ped, Group group);
extern boolean IS_PEDS_VEHICLE_HOT(Ped ped);
extern boolean IS_PED_ATTACHED_TO_ANY_CAR(Ped ped);
extern boolean IS_PED_ATTACHED_TO_OBJECT(Ped ped, Object obj);
extern boolean IS_PED_A_MISSION_PED(Ped ped);
extern boolean IS_PED_BEING_JACKED(Ped ped);
extern boolean IS_PED_CLIMBING(Ped ped);
extern boolean IS_PED_DOING_DRIVEBY(Ped ped);
extern boolean IS_PED_FLEEING(Ped ped);
extern boolean IS_PED_HOLDING_AN_OBJECT(Ped ped);
extern boolean IS_PED_IN_COMBAT(Ped ped);
extern boolean IS_PED_IN_COVER(Ped ped);
extern boolean IS_PED_IN_CUTSCENE_BLOCKING_BOUNDS(Ped ped);
extern boolean IS_PED_IN_GROUP(Ped ped);
extern boolean IS_PED_JACKING(Ped ped);
extern boolean IS_PED_LOOKING_AT_CAR(Ped ped, Car car);
extern boolean IS_PED_LOOKING_AT_OBJECT(Ped ped, Object obj);
extern boolean IS_PED_LOOKING_AT_PED(Ped ped, Ped otherChar);
extern boolean IS_PED_PINNED_DOWN(Ped ped);
extern boolean IS_PED_RAGDOLL(Ped ped);
extern boolean IS_PED_RETREATING(Ped ped);
extern boolean IS_THIS_PED_A_PLAYER(Ped ped);
extern boolean SWITCH_PED_TO_RAGDOLL(Ped ped, int unk, int time, boolean flag0, boolean flag1, boolean flag2, boolean flag3);
extern boolean SWITCH_PED_TO_RAGDOLL_WITH_FALL(Ped ped, int, int, int, float, float, int, float, float, float, float, float, float, float);
extern boolean WAS_PED_KILLED_BY_HEADSHOT(Ped ped);
extern boolean WAS_PED_SKELETON_UPDATED(Ped ped);
extern int FIND_MAX_NUMBER_OF_GROUP_MEMBERS(void);
extern int GET_NUMBER_OF_ACTIVE_STICKY_BOMBS_OWNED_BY_PED(Ped ped);
extern int GET_NUMBER_OF_INJURED_PEDS_IN_RANGE(float x, float y, float z, float radius);
extern Ped GET_PED_OBJECT_IS_ATTACHED_TO(Object obj);
extern uint GET_DAMAGE_TO_PED_BODY_PART(Ped ped, uint part);
extern uint GET_PED_CLIMB_STATE(Ped ped);
extern uint GET_PED_MODEL_FROM_INDEX(int index);
extern void ADD_PED_TO_CINEMATOGRAPHY_AI(int, Ped ped);
extern void ADD_PED_TO_MISSION_DELETION_LIST(Ped ped, boolean);
extern void ALLOW_TARGET_WHEN_INJURED(Ped ped, boolean allow);
extern void ALWAYS_USE_HEAD_ON_HORN_ANIM_WHEN_DEAD_IN_CAR(Ped ped, boolean use);
extern void APPLY_FORCE_TO_PED(Ped ped, uint unknown0_3, float x, float y, float z, float spinX, float spinY, float spinZ, uint unknown4_0, uint unknown5_1, uint unknown6_1, uint unknown7_1);
extern void ATTACH_PED_TO_CAR_PHYSICALLY(Ped ped, Car car, int pedbone, float x, float y, float z, float angle, float, boolean, boolean);
extern void ATTACH_PED_TO_OBJECT(Ped ped, Object obj, int pedbone, float x, float y, float z, float angle, float, boolean, boolean);
extern void ATTACH_PED_TO_OBJECT_PHYSICALLY(Ped ped, Object obj, int pedbone, float x, float y, float z, float angle, float, boolean, boolean);
extern void ATTACH_PED_TO_SHIMMY_EDGE(Ped ped, float x, float y, float z, float);
extern void CLOSE_MIC_PED(int id, Ped ped);
extern void COPY_ANIMATIONS(Ped ped, Ped pednext, float speed);
extern void CREATE_GROUP(boolean unknownFalse, Group *pGroup, boolean unknownTrue);
extern void CREATE_NM_MESSAGE(boolean, int id);
extern void DAMAGE_PED_BODY_PART(Ped ped, uint part, uint hitPoints);
extern void DEFINE_PED_GENERATION_CONSTRAINT_AREA(float x, float y, float z, float radius);
extern void DESTROY_PED_GENERATION_CONSTRAINT_AREA(void);
extern void DETACH_PED(Ped ped, boolean unknown);
extern void DETACH_PED_FROM_WITHIN_CAR(Ped ped, boolean unknown);
extern void DONT_SUPPRESS_ANY_PED_MODELS(void);
extern void DONT_SUPPRESS_PED_MODEL(uint model);
extern void ENABLE_ALL_PED_HELMETS(boolean enable);
extern void ENABLE_PED_HELMET(Ped ped, boolean enable);
extern void FORCE_FULL_VOICE(Ped ped);
extern void FORCE_PED_PINNED_DOWN(Ped ped, boolean force, uint timerMaybe);
extern void FORCE_PED_TO_FLEE_WHILST_DRIVING_VEHICLE(Ped ped, Vehicle vehicle);
extern void FORCE_PED_TO_LOAD_COVER(Ped ped, boolean force);
extern void FORCE_RANDOM_PED_TYPE(uint type);
extern void FORCE_SPAWN_SCENARIO_PEDS_IN_AREA(float x, float y, float z, float radius, int);
extern void GET_CUTSCENE_PED_POSITION(int unkped, Vector3 *pos);
extern void GET_DRIVER_OF_CAR(Vehicle vehicle, Ped *pPed);
extern void GET_GROUP_FORMATION(int group, int *formation);
extern void GET_GROUP_FORMATION_SPACING(int group, float *spacing);
extern void GET_GROUP_LEADER(Group group, Ped *pPed);
extern void GET_GROUP_MEMBER(Group group, uint index, Ped *pPed);
extern void GET_GROUP_SIZE(Group group, uint *pStartIndex, uint *pCount);
extern void GET_NTH_GROUP_MEMBER(int group, int n, Ped *ped);
extern void GET_NUMBER_OF_FOLLOWERS(Ped ped, int *followers);
extern void GET_PED_BONE_POSITION(Ped ped, uint bone, float x, float y, float z, Vector3 *pPosition);
extern void GET_PED_GROUP_INDEX(Ped ped, uint* pIndex);
extern void GET_PED_TYPE(Ped ped, uint *pType);
extern void GET_SCRIPT_TASK_STATUS(Ped ped, int task, int *status);
extern void GIVE_PED_AMBIENT_OBJECT(Ped ped, uint model);
extern void GIVE_PED_FAKE_NETWORK_NAME(Ped ped, char *name, int r, int g, int b, int a);
extern void GIVE_PED_HELMET(Ped ped);
extern void GIVE_PED_HELMET_WITH_OPTS(Ped ped, boolean);
extern void GIVE_PED_PICKUP_OBJECT(Ped ped, Object obj, boolean flag);
extern void KNOCK_PED_OFF_BIKE(Vehicle vehicle);
extern void PED_QUEUE_CONSIDER_PEDS_WITH_FLAG_FALSE(int flagid);
extern void PED_QUEUE_CONSIDER_PEDS_WITH_FLAG_TRUE(int flagid);
extern void PED_QUEUE_REJECT_PEDS_WITH_FLAG_FALSE(int flagid);
extern void PED_QUEUE_REJECT_PEDS_WITH_FLAG_TRUE(int flagid);
extern void REGISTER_HATED_TARGETS_AROUND_PED(Ped ped, float radius);
extern void REGISTER_HATED_TARGETS_IN_AREA(Ped, float x, float y, float z, float radius);
extern void REGISTER_TARGET(Ped ped, Ped target);
extern void REMOVE_CLOSE_MIC_PED(Ped ped);
extern void REMOVE_FAKE_NETWORK_NAME_FROM_PED(Ped ped);
extern void REMOVE_GROUP(Group group);
extern void REMOVE_PED_HELMET(Ped ped, boolean removed);
extern void RESET_VISIBLE_PED_DAMAGE(Ped ped);
extern void REVIVE_INJURED_PED(Ped ped);
extern void SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_FALSE(int flagid);
extern void SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE(uint flagId);
extern void SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_FALSE(int flagid);
extern void SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE(uint flagId);
extern void SEND_NM_MESSAGE(Ped ped);
extern void SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped ped, boolean value);
extern void SET_BRIANS_MOOD(int mood);
extern void SET_COLLIDE_WITH_PEDS(boolean set);
extern void SET_DEAD_PEDS_DROP_WEAPONS(boolean set);
extern void SET_DEATH_WEAPONS_PERSIST(Ped ped, boolean set);
extern void SET_GROUP_FOLLOW_STATUS(Group group, uint status);
extern void SET_GROUP_FORMATION(Group group, uint formation);
extern void SET_GROUP_FORMATION_SPACING(Group group, float space);
extern void SET_GROUP_LEADER(Group group, Ped leader);
extern void SET_GROUP_MEMBER(Group group, Ped member);
extern void SET_GROUP_SEPARATION_RANGE(Group group, float seperation);
extern void SET_HEADING_LIMIT_FOR_ATTACHED_PED(Ped ped, float heading0, float heading1);
extern void SET_IGNORE_LOW_PRIORITY_SHOCKING_EVENTS(Ped ped, boolean value);
extern void SET_INFORM_RESPECTED_FRIENDS(Ped ped, int, int);
extern void SET_MIN_MAX_PED_ACCURACY(Ped ped, float min, float max);
extern void SET_MONEY_CARRIED_BY_ALL_NEW_PEDS(int money);
extern void SET_MONEY_CARRIED_BY_PED_WITH_MODEL(uint model, int m0, int m1);
extern void SET_NM_ANIM_POSE(Ped ped, char *AnimName0, char *AnimName1, float pose);
extern void SET_NM_MESSAGE_BOOL(int id, boolean value);
extern void SET_NM_MESSAGE_FLOAT(int id, float value);
extern void SET_NM_MESSAGE_INSTANCE_INDEX(int id, Ped ped, Car car, Object obj);	//index can be ped or car or object only
extern void SET_NM_MESSAGE_INT(int id, int value);
extern void SET_NM_MESSAGE_STRING(int id, char *string);
extern void SET_NM_MESSAGE_VEC3(int id, float x, float y, float z);
extern void SET_PED_ALLOW_MISSION_ONLY_DRIVEBY_USE(Ped ped, boolean set);
extern void SET_PED_ALPHA(Ped ped, int alpha);
extern void SET_PED_DENSITY_MULTIPLIER(float density);
extern void SET_PED_DIES_WHEN_INJURED(Ped ped, boolean value);
extern void SET_PED_DONT_DO_EVASIVE_DIVES(Ped ped, boolean value);
extern void SET_PED_DONT_USE_VEHICLE_SPECIFIC_ANIMS(Ped ped, boolean set);
extern void SET_PED_ENABLE_LEG_IK(Ped ped, boolean set);
extern void SET_PED_FALL_OFF_BIKES_WHEN_SHOT(Ped ped, boolean set);
extern void SET_PED_FIRE_FX_LOD_SCALER(float scale);
extern void SET_PED_FORCE_FLY_THROUGH_WINDSCREEN(Ped ped, boolean set);
extern void SET_PED_FORCE_VISUALISE_HEAD_DAMAGE_FROM_BULLETS(Ped ped, boolean set);
extern void SET_PED_GENERATES_DEAD_BODY_EVENTS(Ped ped, boolean set);
extern void SET_PED_HEEDS_THE_EVERYONE_IGNORE_PLAYER_FLAG(Ped ped, boolean set);
extern void SET_PED_HELI_PILOT_RESPECTS_MINIMUMM_HEIGHT(Ped ped, boolean set);
extern void SET_PED_HELMET_TEXTURE_INDEX(Ped ped, int index);
extern void SET_PED_INSTANT_BLENDS_WEAPON_ANIMS(Ped ped, boolean set);
extern void SET_PED_IS_BLIND_RAGING(Ped ped, boolean value);
extern void SET_PED_IS_DRUNK(Ped ped, boolean value);
extern void SET_PED_MOBILE_RING_TYPE(Ped ped, int RingtoneId);
extern void SET_PED_MOTION_BLUR(Ped ped, boolean set);
extern void SET_PED_NON_CREATION_AREA(float x0, float y0, float z0, float x1, float y1, float z1);
extern void SET_PED_NON_REMOVAL_AREA(float x0, float y0, float z0, float x1, float y1, float z1);
extern void SET_PED_PATH_MAY_DROP_FROM_HEIGHT(Ped ped, boolean value);
extern void SET_PED_PATH_MAY_USE_CLIMBOVERS(Ped ped, boolean value);
extern void SET_PED_PATH_MAY_USE_LADDERS(Ped ped, boolean value);
extern void SET_PED_PATH_WILL_AVOID_DYNAMIC_OBJECTS(Ped ped, boolean set);
extern void SET_PED_SKIPS_COMPLEX_COVER_COLLISION_CHECKS(Ped ped, boolean set);
extern void SET_PED_STEERS_AROUND_OBJECTS(Ped ped, boolean set);
extern void SET_PED_STEERS_AROUND_PEDS(Ped ped, boolean set);
extern void SET_PED_WINDY_CLOTHING_SCALE(Ped ped, float scale);
extern void SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED(Ped ped, boolean set);
extern void SET_REDUCE_PED_MODEL_BUDGET(boolean set);
extern void SET_RELATIONSHIP(uint relationshipLevel, uint relationshipGroup1, uint relationshipGroup2);
extern void SET_ROMANS_MOOD(int moood);
extern void SET_ROTATION_FOR_ATTACHED_PED(Ped ped, float xr, float yr, float zr);
extern void SET_SCENARIO_PED_DENSITY_MULTIPLIER(float density, float densitynext);
extern void SET_SCRIPTED_ANIM_SEAT_OFFSET(Ped ped, float offset);
extern void SET_SENSE_RANGE(Ped ped, float value);
extern void SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS(Ped ped, int index);
extern void SET_SWIM_SPEED(Ped ped, float speed);
extern void STOP_PED_DOING_FALL_OFF_TESTS_WHEN_SHOT(Ped ped);
extern void STOP_PED_MOBILE_RINGING(Ped ped);
extern void STOP_PED_SPEAKING(Ped ped, boolean stopspeaking);
extern void STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Ped ped);
extern void SUPPRESS_PED_MODEL(uint model);
extern void SWITCH_PED_TO_ANIMATED(Ped ped, boolean unknownTrue);
extern void UNLOCK_RAGDOLL(Ped ped, boolean value);
extern void UPDATE_PED_PHYSICAL_ATTACHMENT_POSITION(Ped ped, float x0, float y0, float z0, float x1, float y1);//}
//namespace VEHICLE
//{
extern boolean ARE_TAXI_LIGHTS_ON(Vehicle vehicle);
extern boolean CAN_BE_DESCRIBED_AS_A_CAR(Vehicle veh);
extern boolean CHECK_STUCK_TIMER(Car car, int timernum, int timeout);
extern boolean CREATE_EMERGENCY_SERVICES_CAR(uint model, float x, float y, float z);
extern boolean CREATE_EMERGENCY_SERVICES_CAR_RETURN_DRIVER(uint model, float x, float y, float z, Car *car, Ped *cardriver, Ped *carpass);
extern boolean CREATE_EMERGENCY_SERVICES_CAR_THEN_WALK(uint model, float x, float y, float z);
extern boolean DOES_CAR_HAVE_HYDRAULICS(Car car);
extern boolean DOES_CAR_HAVE_ROOF(Vehicle vehicle);
extern boolean DOES_CAR_HAVE_STUCK_CAR_CHECK(Vehicle vehicle);
extern boolean DOES_VEHICLE_EXIST(Vehicle vehicle);
extern boolean GET_IS_STICKY_BOMB_STUCK_TO_VEHICLE(Vehicle veh);
extern boolean GET_VEHICLE_COMPONENT_INFO(Vehicle veh, int component_id, Vector3 *, Vector3 *, int *, boolean flag);
extern boolean HAS_CAR_BEEN_DAMAGED_BY_CAR(Vehicle vehicle, Vehicle otherCar);
extern boolean HAS_CAR_BEEN_DAMAGED_BY_WEAPON(Vehicle vehicle, uint weapon);
extern boolean HAS_CAR_BEEN_DROPPED_OFF(Car car);
extern boolean HAS_CAR_BEEN_RESPRAYED(Vehicle vehicle);
extern boolean HAS_CAR_RECORDING_BEEN_LOADED(int CarRec);
extern boolean HAS_CAR_STOPPED_BECAUSE_OF_LIGHT(Car car);
extern boolean HAS_CHAR_BEEN_DAMAGED_BY_CAR(Ped ped, Vehicle vehicle);
extern boolean HAS_OBJECT_BEEN_DAMAGED_BY_CAR(Object obj, Vehicle vehicle);
extern boolean HAS_RESPRAY_HAPPENED(void);
extern boolean IS_BIG_VEHICLE(Vehicle vehicle);
extern boolean IS_CAR_ATTACHED(Vehicle vehicle);
extern boolean IS_CAR_A_MISSION_CAR(Vehicle vehicle);
extern boolean IS_CAR_DEAD(Vehicle vehicle);
extern boolean IS_CAR_DOOR_DAMAGED(Vehicle vehicle, uint door);
extern boolean IS_CAR_DOOR_FULLY_OPEN(Vehicle vehicle, uint door);
extern boolean IS_CAR_HEALTH_GREATER(Car car, float health);
extern boolean IS_CAR_IN_AIR_PROPER(Vehicle vehicle);
extern boolean IS_CAR_IN_AREA_2D(Vehicle vehicle, float x1, float y1, float x2, float y2, boolean unknownFalse);
extern boolean IS_CAR_IN_AREA_3D(Vehicle vehicle, float x1, float y1, float z1, float x2, float y2, float z2, uint unknownFalse);
extern boolean IS_CAR_IN_GARAGE_AREA(char *garageName, Vehicle vehicle);
extern boolean IS_CAR_IN_WATER(Vehicle vehicle);
extern boolean IS_CAR_LOW_RIDER(Car car);
extern boolean IS_CAR_MODEL(Vehicle vehicle, uint model);
extern boolean IS_CAR_ON_FIRE(Vehicle vehicle);
extern boolean IS_CAR_ON_SCREEN(Vehicle vehicle);
extern boolean IS_CAR_PASSENGER_SEAT_FREE(Vehicle vehicle, uint seatIndex);
extern boolean IS_CAR_PLAYING_ANIM(Car car, char *animname0, char *animname1);
extern boolean IS_CAR_SIREN_ON(Vehicle vehicle);
extern boolean IS_CAR_STOPPED(Vehicle vehicle);
extern boolean IS_CAR_STOPPED_AT_TRAFFIC_LIGHTS(Vehicle vehicle);
extern boolean IS_CAR_STREET_RACER(Car car);
extern boolean IS_CAR_STUCK(Car car);
extern boolean IS_CAR_STUCK_ON_ROOF(Vehicle vehicle);
extern boolean IS_CAR_TOUCHING_CAR(Vehicle vehicle, Vehicle otherCar);
extern boolean IS_CAR_TYRE_BURST(Vehicle vehicle, uint tyre);
extern boolean IS_CAR_UPRIGHT(Vehicle vehicle);
extern boolean IS_CAR_UPSIDEDOWN(Vehicle vehicle);
extern boolean IS_CAR_WAITING_FOR_WORLD_COLLISION(Vehicle vehicle);
extern boolean IS_CHAR_IN_CAR(Ped ped, Vehicle vehicle);
extern boolean IS_CHAR_IN_MODEL(Ped ped, uint model);
extern boolean IS_CHAR_TOUCHING_VEHICLE(Ped ped, Vehicle vehicle);
extern boolean IS_EMERGENCY_SERVICES_VEHICLE(Vehicle veh);
extern boolean IS_HELI_PART_BROKEN(Vehicle heli, boolean flag0, boolean flag1, boolean flag2);
extern boolean IS_NEXT_STATION_ALLOWED(Vehicle veh);
extern boolean IS_PLAYBACK_GOING_ON_FOR_CAR(Car car);
extern boolean IS_THIS_MODEL_A_BIKE(uint model);
extern boolean IS_THIS_MODEL_A_BOAT(uint model);
extern boolean IS_THIS_MODEL_A_CAR(uint model);
extern boolean IS_THIS_MODEL_A_HELI(uint model);
extern boolean IS_THIS_MODEL_A_PED(uint model);
extern boolean IS_THIS_MODEL_A_PLANE(uint model);
extern boolean IS_THIS_MODEL_A_TRAIN(uint model);
extern boolean IS_THIS_MODEL_A_VEHICLE(uint model);
extern boolean IS_VEHICLE_EXTRA_TURNED_ON(Vehicle vehicle, uint extra);
extern boolean IS_VEHICLE_ON_ALL_WHEELS(Vehicle vehicle);
extern boolean IS_VEHICLE_TOUCHING_OBJECT(Vehicle veh, Object obj);
extern boolean IS_VEH_DRIVEABLE(Vehicle vehicle);
extern boolean IS_VEH_STUCK(Vehicle veh, int time, boolean flag0, boolean flag1, boolean flag2);
extern boolean IS_VEH_WINDOW_INTACT(Vehicle vehicle, uint window);
extern boolean LOCATE_CAR_2D(Car car, float x0, float y0, float xUnk, float yUnk, boolean flag);
extern boolean LOCATE_CAR_3D(Car car, float x, float y, float z, float xa, float ya, float za, boolean flag);
extern boolean LOCATE_DEAD_CAR_3D(Car car, float x, float y, float z, float xa, float ya, float za, boolean flag);
extern boolean PLAY_CAR_ANIM(Car car, char *animname0, char *animname1, float, boolean flag0, boolean flag1);
extern char * GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(uint model);
extern char *GET_STATION_NAME(Train train, uint station);
extern float FIND_POSITION_IN_RECORDING(Car car);
extern float FIND_TIME_POSITION_IN_RECORDING(Car car);
extern float GET_ENGINE_HEALTH(Vehicle vehicle);
extern float GET_HEIGHT_OF_VEHICLE(Vehicle vehicle, float x, float y, float z, boolean unknownTrue1, boolean unknownTrue2);
extern float GET_PETROL_TANK_HEALTH(Vehicle vehicle);
extern float GET_TIME_TIL_NEXT_STATION(Vehicle train);
extern float GET_TOTAL_DURATION_OF_CAR_RECORDING(int CarRec);
extern float GET_VEHICLE_ENGINE_REVS(Vehicle veh);
extern int FIND_TRAIN_DIRECTION(Vehicle train);
extern int GET_CAR_SIREN_HEALTH(Car car);
extern int GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR(Car car);
extern int GET_NUMBER_OF_STICKY_BOMBS_STUCK_TO_VEHICLE(Vehicle veh);
extern int GET_VEHICLE_GEAR(Vehicle veh);
extern int GET_VEHICLE_TYPE_OF_MODEL(uint model);
extern int SET_HELI_FORCE_ENGINE_ON(Vehicle heli, boolean set);	//doesnt return anything but in scripts it is requesting result
extern ScriptAny SET_CAR_ON_GROUND_PROPERLY(Vehicle vehicle);
extern uint GET_CURRENT_STATION_FOR_TRAIN(Train train);
extern uint GET_VEHICLE_MODEL_FROM_INDEX(int index);
extern Vehicle GET_CAR_OBJECT_IS_ATTACHED_TO(Object obj);
extern Vehicle GET_CLOSEST_CAR(float x, float y, float z, float radius, boolean unknownFalse, uint unknown70);
extern void ACTIVATE_HELI_SPEED_CHEAT(Vehicle heli, int cheat);	//10
extern void ADD_CAR_TO_MISSION_DELETION_LIST(Car car);
extern void ADD_STUCK_CAR_CHECK(Car car, float stuckdif, int timeout);
extern void ADD_STUCK_CAR_CHECK_WITH_WARP(Car car, float stuckdif, int time, boolean flag0, boolean flag1, boolean flag2, boolean flag3);
extern void ADD_UPSIDEDOWN_CAR_CHECK(Vehicle vehicle);
extern void ANCHOR_BOAT(Vehicle boat, boolean anchor);
extern void APPLY_FORCE_TO_CAR(Vehicle vehicle, uint unknown0_3, float x, float y, float z, float spinX, float spinY, float spinZ, uint unknown4_0, uint unknown5_1, uint unknown6_1, uint unknown7_1);
extern void ATTACH_CAR_TO_CAR(Car car0, Car car1, int, float x0, float y0, float z0, float x1, float y1, float z1);
extern void ATTACH_CAR_TO_CAR_PHYSICALLY(int vehid1, int vehid2, bool, int, float xoffset, float yoffset, float zoffset, float xbuffer, float ybuffer, float zbuffer, float xrotateveh1, float yrotateveh1, float, float, float);
extern void ATTACH_CAR_TO_OBJECT(Car car, Object obj, float, float, float, float, float, float, float);
extern void ATTACH_PED_TO_CAR(Ped ped, Vehicle vehicle, uint Pedbone, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, boolean, boolean);
extern void BREAK_CAR_DOOR(Vehicle vehicle, uint door, boolean unknownFalse);
extern void BURST_CAR_TYRE(Vehicle vehicle, uint tyre);
extern void CHANGE_CAR_COLOUR(Vehicle vehicle, ColourIndex colour1, ColourIndex colour2);
extern void CHANGE_PLAYBACK_TO_USE_AI(Car car);
extern void CLEAR_CAR_LAST_DAMAGE_ENTITY(Vehicle vehicle);
extern void CLEAR_CAR_LAST_WEAPON_DAMAGE(Vehicle vehicle);
extern void CLEAR_ROOM_FOR_CAR(Vehicle vehicle);
extern void CLOSE_ALL_CAR_DOORS(Vehicle vehicle);
extern void CONTROL_CAR_DOOR(Vehicle vehicle, uint door, uint unknown_maybe_open, float angle);
extern void CREATE_CAR(uint nameHash, float x, float y, float z, Vehicle *pVehicle, boolean unknownTrue);
extern void CREATE_CARS_ON_GENERATORS_IN_AREA(float x0, float y0, float z0, float x1, float y1, float z1);
extern void CREATE_CAR_GENERATOR(float x, float y, float z, float yaw, float pitch, float roll, uint model, uint color1, uint color2, uint spec1, uint spec2, int, boolean alarm, boolean doorlock, int *handle);
extern void CREATE_MISSION_TRAIN(uint unknown1, float x, float y, float z, boolean unknown2, Train *pTrain);
extern void CREATE_RANDOM_CAR_FOR_CAR_PARK(float x, float y, float z, float radius);
extern void CREATE_RANDOM_CHAR_AS_DRIVER(Vehicle vehicle, Ped *pPed);
extern void DAMAGE_CAR(Car car, float x, float y, float z, float unkforce0, float unkforce1, boolean flag);	//unkforce1 ~ 1000.0
extern void DELETE_ALL_TRAINS(void);
extern void DELETE_CAR(Vehicle *pVehicle);
extern void DELETE_CAR_GENERATOR(int handle);
extern void DELETE_MISSION_TRAIN(Train *pTrain);
extern void DELETE_MISSION_TRAINS(void);
extern void DETACH_CAR(Vehicle vehicle);
extern void DISABLE_CAR_GENERATORS(boolean flag0, boolean flag1);
extern void DISABLE_CAR_GENERATORS_WITH_HELI(boolean disable);
extern void DONT_SUPPRESS_ANY_CAR_MODELS(void);
extern void DONT_SUPPRESS_CAR_MODEL(uint model);
extern void ENABLE_GPS_IN_VEHICLE(Vehicle veh, boolean enable);
extern void FIX_CAR(Vehicle vehicle);
extern void FIX_CAR_TYRE(Vehicle vehicle, uint tyre);
extern void FORCE_ALL_VEHICLE_LIGHTS_OFF(boolean off);
extern void FORCE_CAR_LIGHTS(Car car, int lights);
extern void FORCE_GENERATE_PARKED_CARS_TOO_CLOSE_TO_OTHERS(boolean set);
extern void FORCE_RANDOM_CAR_MODEL(uint hash);
extern void FREEZE_CAR_POSITION(Vehicle vehicle, boolean frozen);
extern void FREEZE_CAR_POSITION_AND_DONT_LOAD_COLLISION(Vehicle vehicle, boolean frozen);
extern void GET_CAR_ANIM_CURRENT_TIME(Car car, char *animname0, char *animname1, float *time);
extern void GET_CAR_ANIM_TOTAL_TIME(Car car, char *animname0, char *animname1, float *time);
extern void GET_CAR_BLOCKING_CAR(Car car0, Car *car1);
extern void GET_CAR_CHAR_IS_USING(Ped ped, Vehicle *pVehicle);
extern void GET_CAR_COLOURS(Vehicle vehicle, ColourIndex *pColour1, ColourIndex *pColour2);
extern void GET_CAR_COORDINATES(Vehicle vehicle, float *pX, float *pY, float *pZ);
extern void GET_CAR_DEFORMATION_AT_POS(Vehicle vehicle, float x, float y, float z, Vector3 *pDeformation);
extern void GET_CAR_DOOR_LOCK_STATUS(Vehicle vehicle, uint *pValue);
extern void GET_CAR_FORWARD_VECTOR(Car car, Vector3 *vec);
extern void GET_CAR_FORWARD_X(Vehicle vehicle, float *pValue);
extern void GET_CAR_FORWARD_Y(Vehicle vehicle, float *pValue);
extern void GET_CAR_HEADING(Vehicle vehicle, float *pValue);
extern void GET_CAR_HEALTH(Vehicle vehicle, uint *pValue);
extern void GET_CAR_LIVERY(Car car, int *livery);
extern void GET_CAR_MASS(Car car, float *mass);
extern void GET_CAR_MODEL(Vehicle vehicle, uint *pValue);
extern void GET_CAR_MODEL_VALUE(Car car, int *value);
extern void GET_CAR_PITCH(Vehicle vehicle, float *pValue);
extern void GET_CAR_ROLL(Vehicle vehicle, float *pValue);
extern void GET_CAR_SPEED(Vehicle vehicle, float *pValue);
extern void GET_CAR_SPEED_VECTOR(Vehicle vehicle, Vector3 *pVector, boolean unknownFalse);
extern void GET_CAR_UPRIGHT_VALUE(Vehicle vehicle, float *pValue);
extern void GET_CURRENT_TAXI_CAR_MODEL(uint *pModel);
extern void GET_DEAD_CAR_COORDINATES(Vehicle vehicle, float *pX, float *pY, float *pZ);
extern void GET_DOOR_ANGLE_RATIO(Vehicle vehicle, uint door, float *pAngleRatio);
extern void GET_EXTRA_CAR_COLOURS(Vehicle vehicle, ColourIndex *pColour1, ColourIndex *pColour2);
extern void GET_KEY_FOR_CAR_IN_ROOM(Vehicle vehicle, uint *pKey);
extern void GET_MAXIMUM_NUMBER_OF_PASSENGERS(Vehicle vehicle, uint *pMax);
extern void GET_NEAREST_CABLE_CAR(float x, float y, float z, float radius, Vehicle *pVehicle);
extern void GET_NUMBER_OF_PASSENGERS(Vehicle vehicle, uint *pNumPassengers);
extern void GET_NUM_CAR_COLOURS(Vehicle vehicle, uint *pNumColours);
extern void GET_NUM_CAR_LIVERIES(Car car, int *num);
extern void GET_OFFSETS_FOR_ATTACH_CAR_TO_CAR(Car car0, Car car1, Vector3 *, Vector3 *);
extern void GET_OFFSET_FROM_CAR_GIVEN_WORLD_COORDS(Vehicle vehicle, float x, float y, float z, float *pOffX, float *pOffY, float *pOffZ);
extern void GET_OFFSET_FROM_CAR_IN_WORLD_COORDS(Vehicle vehicle, float x, float y, float z, float *pOffX, float *pOffY, float *pOffZ);
extern void GET_PLANE_UNDERCARRIAGE_POSITION(Vehicle plane, float *pos);
extern void GET_POSITION_OF_CAR_RECORDING_AT_TIME(int CarRec, float time, float *pos);
extern void GET_TRAIN_CABOOSE(Vehicle train, Vehicle *caboose);
extern void GET_TRAIN_CARRIAGE(Vehicle train, int num, Vehicle *carriage);
extern void GET_TRAIN_PLAYER_WOULD_ENTER(int player, int *train);
extern void GET_VEHICLE_DIRT_LEVEL(Vehicle vehicle, float* pIntensity);
extern void GET_VEHICLE_PLAYER_WOULD_ENTER(int player, Vehicle *veh);
extern void GET_VEHICLE_QUATERNION(Vehicle veh, float *qx, float *qy, float *qz, float *qw);
extern void HAND_VEHICLE_CONTROL_BACK_TO_PLAYER(Vehicle veh);
extern void LOCK_CAR_DOORS(Vehicle vehicle, uint value);
extern void MARK_CAR_AS_CONVOY_CAR(Vehicle vehicle, boolean convoyCar);
extern void MARK_CAR_AS_NO_LONGER_NEEDED(Vehicle *pVehicle);
extern void MARK_MISSION_TRAINS_AS_NO_LONGER_NEEDED(void);
extern void MARK_MISSION_TRAIN_AS_NO_LONGER_NEEDED(Train train);
extern void OPEN_CAR_DOOR(Vehicle vehicle, uint door);
extern void OVERRIDE_NUMBER_OF_PARKED_CARS(int num);
extern void PAUSE_PLAYBACK_RECORDED_CAR(Car car);
extern void PLANE_STARTS_IN_AIR(Vehicle plane);
extern void POP_CAR_BOOT(Vehicle vehicle);
extern void REMOVE_CARS_FROM_GENERATORS_IN_AREA(float x0, float y0, float z0, float x1, float y1, float z1);
extern void REMOVE_CAR_RECORDING(int CarRec);
extern void REMOVE_CAR_WINDOW(Car car, int windnum);
extern void REMOVE_STUCK_CAR_CHECK(Vehicle vehicle);
extern void REMOVE_UPSIDEDOWN_CAR_CHECK(Vehicle vehicle);
extern void RESET_CAR_WHEELS(Car car, boolean reset);
extern void RESET_STUCK_TIMER(Car car, int timer_num);
extern void SELECT_WEAPONS_FOR_VEHICLE(Vehicle veh, int weapon);
extern void SET_ALL_CARS_CAN_BE_DAMAGED(boolean set);
extern void SET_ALL_CAR_GENERATORS_BACK_TO_ACTIVE(void);
extern void SET_AMBIENT_PLANES_SPEED_MULTIPLIER(float multiplier);
extern void SET_BIKE_RIDER_WILL_PUT_FOOT_DOWN_WHEN_STOPPED(Vehicle bike, boolean set);
extern void SET_BLIP_THROTTLE_RANDOMLY(Vehicle veh, boolean set);
extern void SET_CAN_BURST_CAR_TYRES(Car car, boolean set);
extern void SET_CAN_RESPRAY_CAR(Car car, boolean can);
extern void SET_CAR_ALLOWED_TO_DROWN(Car car, boolean allowed);
extern void SET_CAR_ALWAYS_CREATE_SKIDS(Car car, boolean set);
extern void SET_CAR_ANIM_CURRENT_TIME(Car car, char *animname0, char *animname1, float time);
extern void SET_CAR_ANIM_SPEED(Car car, char *animname0, char *animname1, float speed);
extern void SET_CAR_AS_MISSION_CAR(Car car);
extern void SET_CAR_CAN_BE_DAMAGED(Vehicle vehicle, boolean value);
extern void SET_CAR_CAN_BE_VISIBLY_DAMAGED(Vehicle vehicle, boolean value);
extern void SET_CAR_COLLISION(Car car, boolean set);
extern void SET_CAR_COLOUR_COMBINATION(Car car, int combination);
extern void SET_CAR_COORDINATES(Vehicle vehicle, float pX, float pY, float pZ);
extern void SET_CAR_COORDINATES_NO_OFFSET(Car car, float x, float y, float z);
extern void SET_CAR_DENSITY_MULTIPLIER(float density);	//random car + parked car
extern void SET_CAR_DISTANCE_AHEAD_MULTIPLIER(Car car, float multiplier);
extern void SET_CAR_DOOR_LATCHED(Car car, int door, boolean flag0, boolean flag1);
extern void SET_CAR_ENGINE_ON(Car car, boolean flag0, boolean flag1);
extern void SET_CAR_FORWARD_SPEED(Vehicle vehicle, float speed);
extern void SET_CAR_FOV_FADE_MULT(float multiplier);
extern void SET_CAR_FOV_MAX(float maxfov);
extern void SET_CAR_FOV_MIN(float minfov);
extern void SET_CAR_FOV_RATE(float rate);
extern void SET_CAR_FOV_START_SPEED(float speed);
extern void SET_CAR_FOV_START_SPEED_BOAT(float speed);
extern void SET_CAR_GENERATORS_ACTIVE_IN_AREA(float x0, float y0, float z0, float x1, float y1, float z1, boolean set);
extern void SET_CAR_HEADING(Vehicle vehicle, float dir);
extern void SET_CAR_HEALTH(Vehicle vehicle, uint Value);
extern void SET_CAR_IN_CUTSCENE(Car car, boolean set);
extern void SET_CAR_LANE_SHIFT(Car car, float shift);
extern void SET_CAR_LIGHT_MULTIPLIER(Car car, float multiplier);
extern void SET_CAR_LIVERY(Car car, int livery);
extern void SET_CAR_MOTION_BLUR_EFFECT_BOAT(float blur);
extern void SET_CAR_NOT_DAMAGED_BY_RELATIONSHIP_GROUP(Car car, boolean set, int group);
extern void SET_CAR_ONLY_DAMAGED_BY_PLAYER(Car car, boolean set);
extern void SET_CAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(Car car, boolean set, int group);
extern void SET_CAR_PROOFS(Vehicle vehicle, boolean bulletProof, boolean fireProof, boolean explosionProof, boolean collisionProof, boolean meleeProof);
extern void SET_CAR_RANDOM_ROUTE_SEED(Car car, int seed);
extern void SET_CAR_STAY_IN_FAST_LANE(Car car, boolean set);
extern void SET_CAR_STAY_IN_SLOW_LANE(Car car, boolean set);
extern void SET_CAR_STRONG(Vehicle vehicle, boolean strong);
extern void SET_CAR_TRACTION(Car car, float traction);
extern void SET_CAR_VISIBLE(Vehicle vehicle, boolean value);
extern void SET_CAR_WATERTIGHT(Car car, boolean set);
extern void SET_CONVERTIBLE_ROOF(Car car, boolean set);
extern void SET_ENGINE_HEALTH(Vehicle vehicle, float health);
extern void SET_EXTRA_CAR_COLOURS(Vehicle vehicle, ColourIndex colour1, ColourIndex colour2);
extern void SET_FREEBIES_IN_VEHICLE(Vehicle veh, boolean set);
extern void SET_FREE_RESPRAYS(boolean set);
extern void SET_GANG_CAR(Car car, boolean set);
extern void SET_GPS_REMAINS_WHEN_TARGET_REACHED_FLAG(boolean set);
extern void SET_GPS_TEST_IN_3D_FLAG(boolean set);
extern void SET_HAS_BEEN_OWNED_BY_PLAYER(Car car, boolean set);
extern void SET_HAS_BEEN_OWNED_FOR_CAR_GENERATOR(int CarGen, boolean set);
extern void SET_HELI_BLADES_FULL_SPEED(Vehicle heli);
extern void SET_HELI_STABILISER(Vehicle heli, boolean set);
extern void SET_IGNORE_NO_GPS_FLAG(boolean set);
extern void SET_INTERP_IN_OUT_VEHICLE_ENABLED_THIS_FRAME(boolean set);
extern void SET_LOAD_COLLISION_FOR_CAR_FLAG(Car car, boolean set);
extern void SET_MISSION_TRAIN_COORDINATES(Vehicle train, float x, float y, float z);
extern void SET_NEEDS_TO_BE_HOTWIRED(Vehicle veh, boolean set);
extern void SET_NO_RESPRAYS(boolean set);
extern void SET_PARKED_CAR_DENSITY_MULTIPLIER(float multiplier);	//parked cars
extern void SET_PETROL_TANK_HEALTH(Vehicle vehicle, float value);
extern void SET_PETROL_TANK_WEAKPOINT(Car car, boolean set);
extern void SET_PLANE_THROTTLE(Vehicle plane, float throttle);
extern void SET_PLANE_UNDERCARRIAGE_UP(Vehicle plain, boolean set);
extern void SET_PLAYBACK_SPEED(Car car, float speed);
extern void SET_RANDOM_CAR_DENSITY_MULTIPLIER(float density);	//random car		
extern void SET_RECORDING_TO_POINT_NEAREST_TO_COORS(Car cat, float x, float y, float z);
extern void SET_REDUCE_VEHICLE_MODEL_BUDGET(boolean set);
extern void SET_RENDER_TRAIN_AS_DERAILED(Vehicle train, boolean set);
extern void SET_ROCKET_LAUNCHER_FREEBIE_IN_HELI(boolean set);
extern void SET_ROOM_FOR_CAR_BY_KEY(Car car, uint roomkey);
extern void SET_ROOM_FOR_CAR_BY_NAME(Car car, char *roomname);
extern void SET_SIREN_WITH_NO_DRIVER(Car car, boolean set);
extern void SET_SUPPRESS_HEADLIGHT_SWITCH(boolean set);
extern void SET_TARGET_CAR_FOR_MISSION_GARAGE(int garage, Car car);
extern void SET_TAXI_LIGHTS(Car car, boolean set);
extern void SET_TRAIN_AUDIO_ROLLOFF(Vehicle train, float rolloff);
extern void SET_TRAIN_CRUISE_SPEED(Vehicle train, float speed);
extern void SET_TRAIN_FORCED_TO_SLOW_DOWN(Vehicle train, boolean set);
extern void SET_TRAIN_IS_STOPPED_AT_STATION(Vehicle train);
extern void SET_TRAIN_SPEED(Vehicle train, float speed);
extern void SET_TRAIN_STOPS_FOR_STATIONS(Vehicle train, boolean set);
extern void SET_UPSIDEDOWN_CAR_NOT_DAMAGED(Car car, boolean set);
extern void SET_VEHICLE_ALPHA(Vehicle veh, int alpha);
extern void SET_VEHICLE_ALWAYS_RENDER(Vehicle veh);
extern void SET_VEHICLE_CAN_BE_TARGETTED(Vehicle veh, boolean set);
extern void SET_VEHICLE_DEFORMATION_MULT(Vehicle veh, float multiplier);
extern void SET_VEHICLE_DIRT_LEVEL(Vehicle vehicle, float intensity);
extern void SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(Vehicle veh, boolean set);
extern void SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Vehicle veh, boolean set);
extern void SET_VEHICLE_QUATERNION(Vehicle veh, float qx, float qy, float qz, float qw);
extern void SET_VEHICLE_RENDER_SCORCHED(Vehicle veh, boolean set);
extern void SET_VEHICLE_STEER_BIAS(Vehicle veh, float val);
extern void SET_VEH_ALARM(Vehicle veh, boolean set);
extern void SET_VEH_ALARM_DURATION(Vehicle veh, int duration);
extern void SET_VEH_HAS_STRONG_AXLES(Vehicle veh, boolean set);
extern void SET_VEH_HAZARDLIGHTS(Vehicle vehicle, boolean on);
extern void SET_VEH_INDICATORLIGHTS(Vehicle veh, boolean set);
extern void SET_VEH_INTERIORLIGHT(Vehicle veh, boolean set);
extern void SHUT_CAR_DOOR(Vehicle vehicle, uint door);
extern void SKIP_IN_PLAYBACK_RECORDED_CAR(Car car, float time);
extern void SKIP_TIME_IN_PLAYBACK_RECORDED_CAR(int CarRec, float time);
extern void SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_CAR(Car car);
extern void SKIP_TO_NEXT_ALLOWED_STATION(Vehicle train);
extern void SMASH_CAR_WINDOW(Car car, int windownum);
extern void SOUND_CAR_HORN(Vehicle vehicle, uint duration);
extern void START_PLAYBACK_RECORDED_CAR(Car car, int CarRec);
extern void START_PLAYBACK_RECORDED_CAR_LOOPED(Car car, int);
extern void START_PLAYBACK_RECORDED_CAR_USING_AI(Car car, int CarRec);
extern void START_PLAYBACK_RECORDED_CAR_WITH_OFFSET(Car car, int CarRec, float x, float y, float z);
extern void STOP_CAR_BREAKING(Car car, boolean stop);
extern void STOP_PLAYBACK_RECORDED_CAR(Car car);
extern void STOP_VEHICLE_ALWAYS_RENDER(Vehicle veh);
extern void STORE_CAR_CHAR_IS_IN_NO_SAVE(Ped ped, Car *car); //slower than GET_CAR_CHAR_IS_USING, this one stores it some random place else too (useless)
extern void SUPPRESS_CAR_MODEL(uint model);
extern void SWITCH_CAR_GENERATOR(int handle, int type);	//type can be 0 - off, 101 - on
extern void SWITCH_CAR_SIREN(Car car, boolean siren);
extern void TRAIN_LEAVE_STATION(Vehicle train);
extern void TRIGGER_VEH_ALARM(Vehicle car);
extern void TURN_CAR_TO_FACE_COORD(Car car, float x, float y);
extern void TURN_OFF_VEHICLE_EXTRA(Vehicle veh, int extra, boolean turnoff);
extern void UNPAUSE_PLAYBACK_RECORDED_CAR(Car car);
extern void VEHICLE_CAN_BE_TARGETTED_BY_HS_MISSILE(Car car, boolean set);
extern void VEHICLE_DOES_PROVIDE_COVER(Vehicle veh, boolean cover);
extern void WARP_CHAR_FROM_CAR_TO_CAR(Ped ped, Vehicle vehicle, uint seatIndex);
extern void WARP_CHAR_FROM_CAR_TO_COORD(Ped ped, float x, float y, float z);
extern void WARP_CHAR_INTO_CAR(Ped ped, Vehicle vehicle);
extern void WARP_CHAR_INTO_CAR_AS_PASSENGER(Ped ped, Vehicle vehicle, uint seatIndex);
extern void WASH_VEHICLE_TEXTURES(Vehicle vehicle, uint intensity);
//}
//namespace OBJECT
//{
extern boolean DOES_OBJECT_EXIST(Object obj);
extern boolean DOES_OBJECT_HAVE_PHYSICS(Object obj);
extern boolean DOES_OBJECT_HAVE_THIS_MODEL(Object obj, uint model);
extern boolean DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(float x, float y, float z, float radius, uint model);
extern boolean GET_IS_STICKY_BOMB_STUCK_TO_OBJECT(Object obj);
extern boolean HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_DAMAGED_BY_CAR(float x, float y, float z, float radius, uint type_or_model, Car car);
extern boolean HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_DAMAGED_BY_CHAR(float x, float y, float z, float radius, uint objectModel, Ped ped);
extern boolean HAS_FRAGMENT_ROOT_OF_CLOSEST_OBJECT_OF_TYPE_BEEN_DAMAGED(float x, float y, float z, float radius, uint);
extern boolean HAS_OBJECT_BEEN_DAMAGED(Object obj);
extern boolean HAS_OBJECT_BEEN_DAMAGED_BY_CHAR(Object obj, Ped ped);
extern boolean HAS_OBJECT_BEEN_DAMAGED_BY_WEAPON(Object obj, int unk);
extern boolean HAS_OBJECT_BEEN_PHOTOGRAPHED(Object obj);
extern boolean HAS_OBJECT_BEEN_UPROOTED(Object obj);
extern boolean HAS_OBJECT_COLLIDED_WITH_ANYTHING(Object obj);
extern boolean HAS_OBJECT_FRAGMENT_ROOT_BEEN_DAMAGED(Object obj);
extern boolean HAS_POOL_OBJECT_COLLIDED_WITH_CUSHION(Object obj);
extern boolean HAS_POOL_OBJECT_COLLIDED_WITH_OBJECT(Object obj, Object otherObj);
extern boolean IS_CLOSEST_OBJECT_OF_TYPE_SMASHED_OR_DAMAGED(float x, float y, float z, float radius, uint type_or_model, boolean flag0, boolean flag1);
extern boolean IS_GARAGE_CLOSED(char *garageName);
extern boolean IS_GARAGE_OPEN(char *garageName);
extern boolean IS_NON_FRAG_OBJECT_SMASHED(float x, float y, float z, float radius, uint model);
extern boolean IS_OBJECT_ATTACHED(Object obj);
extern boolean IS_OBJECT_IN_ANGLED_AREA_3D(Object obj, float x0, float y0, float z0, float x1, float y1, float z1, float, boolean flag);
extern boolean IS_OBJECT_IN_AREA_2D(Object obj, float x0, float y0, float x1, float y2, boolean flag);
extern boolean IS_OBJECT_IN_AREA_3D(Object obj, float x0, float y0, float z0, float x1, float y1, float z1, boolean flag);
extern boolean IS_OBJECT_IN_WATER(Object obj);
extern boolean IS_OBJECT_ON_FIRE(Object obj);
extern boolean IS_OBJECT_ON_SCREEN(Object obj);
extern boolean IS_OBJECT_PLAYING_ANIM(Object obj, char *animname0, char *animname1);
extern boolean IS_OBJECT_STATIC(Object obj);
extern boolean IS_OBJECT_TOUCHING_OBJECT(Object obj0, Object obj1);
extern boolean IS_OBJECT_UPRIGHT(Object obj, float angle);
extern boolean IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(Object obj);
extern boolean IS_SITTING_OBJECT_NEAR(float x, float y, float z, int);
extern boolean LOCATE_OBJECT_2D(Object obj, float x0, float y0, float x1, float y1, boolean flag);
extern boolean LOCATE_OBJECT_3D(Object obj, float x, float y, float z, float xr, float yr, float zr, boolean flag);
extern boolean PLAY_OBJECT_ANIM(Object obj, char *animname0, char *animname1, float unk, boolean flag0, boolean flag1);
extern boolean ROTATE_OBJECT(Object obj, float x, float y, boolean flag);
extern boolean SLIDE_OBJECT(Object obj, float x, float y, float z, float xs, float ys, float zs, boolean flag);
extern boolean SMASH_GLASS_ON_OBJECT(float x, float y, float z, float, uint model, float);
extern float GET_FRAGMENT_DAMAGE_HEALTH_OF_CLOSEST_OBJECT_OF_TYPE(float x, float y, float z, float radius, uint, boolean flag);
extern float GET_LEVEL_DESIGN_COORDS_FOR_OBJECT(Object obj, int, float *x, float *y, float *z);
extern float GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(Object obj, boolean unknown);
extern int GET_NUMBER_OF_STICKY_BOMBS_STUCK_TO_OBJECT(Object obj);
extern Object GET_OBJECT_PED_IS_HOLDING(Ped ped);
extern Object WHAT_WILL_PLAYER_PICKUP(int player);
extern uint GET_MODEL_PED_IS_HOLDING(Ped ped);
extern void ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY(Object obj, uint roomKey);
extern void ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME(Object obj, char *room_name);
extern void ADD_STUNT_JUMP(float x, float y, float z, float x0, float y0, float z0, float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, int reward);
extern void ANCHOR_OBJECT(Object obj, boolean anchor, uint flags);
extern void APPLY_FORCE_TO_OBJECT(Object obj, uint uk0_3, float pX, float pY, float pZ, float spinX, float spinY, float spinZ, uint uk4_0, uint uk5_1, uint uk6_1, uint uk7_1);
extern void ATTACH_OBJECT_TO_CAR(Object obj, Vehicle v, uint unknown0_0, float pX, float pY, float pZ, float rX, float rY, float rZ);
extern void ATTACH_OBJECT_TO_CAR_PHYSICALLY(Object obj, Car car, int pedbone, float x, float y, float z, float angle, float, boolean, boolean);
extern void ATTACH_OBJECT_TO_OBJECT(Object obj0, Object obj1_attach_to, int, float x0, float y0, float z0, float x1, float y1, float z1);
extern void ATTACH_OBJECT_TO_PED(Object obj, Ped c, uint bone, float pX, float pY, float pZ, float rX, float rY, float rZ, uint unknown1_0);
extern void ATTACH_OBJECT_TO_PED_PHYSICALLY (Object obj, Ped c, boolean unknown, uint bone, float pX, float pY, float pZ, float rX, float rY, float rZ, uint unknown1_0, uint unknown2_0);
extern void ATTACH_PARACHUTE_MODEL_TO_PLAYER(Ped ped, Object obj);
extern void CHANGE_GARAGE_TYPE(int garage, int type);
extern void CLEAR_OBJECT_LAST_DAMAGE_ENTITY(Object obj);
extern void CLEAR_OBJECT_LAST_WEAPON_DAMAGE(Object obj);
extern void CLEAR_ROOM_FOR_OBJECT(Object obj);
extern void CLOSE_GARAGE(char *garageName);
extern void CONNECT_LODS(Object obj0, Object obj1);
extern void CREATE_OBJECT(uint model, float x, float y, float z, Object *pObj, boolean unknownTrue);
extern void CREATE_OBJECT_NO_OFFSET(uint model, float x, float y, float z, Object *pObj, boolean unknownTrue);
extern void DELETE_OBJECT(Object *pObj);
extern void DETACH_OBJECT(Object obj, boolean unknown);
extern void DETACH_OBJECT_NO_COLLIDE(Object obj, boolean flag);
extern void DONT_REMOVE_OBJECT(Object obj);
extern void DROP_OBJECT(Ped ped, boolean unknownTrue);
extern void ENABLE_DISABLED_ATTRACTORS_ON_OBJECT(Object obj, boolean enable);
extern void FREEZE_OBJECT_POSITION(Object obj, boolean frozen);
extern void FREEZE_OBJECT_POSITION(Object obj, boolean set);
extern void FREEZE_OBJECT_POSITION_AND_DONT_LOAD_COLLISION(Object obj, boolean freeze);
extern void FREEZE_POSITION_OF_CLOSEST_OBJECT_OF_TYPE(float x, float y, float z, float radius, uint model, boolean frozen);
extern void GET_CLOSEST_STEALABLE_OBJECT(float x, float y, float z, float radius, Object *obj);
extern void GET_DOOR_STATE(Object obj, uint *, float *);
extern void GET_OBJECT_ANIM_CURRENT_TIME(Object obj, char *animname0, char *animname1, float *time);
extern void GET_OBJECT_ANIM_TOTAL_TIME(Object obj, char *animname0, char *animname1, float *time);
extern void GET_OBJECT_COORDINATES(Object obj, float *pX, float *pY, float *pZ);
extern void GET_OBJECT_HEADING(Object obj, float *pHeading);
extern void GET_OBJECT_HEALTH(Object obj, float *pHealth);
extern void GET_OBJECT_MASS(Object obj, float *mass);
extern void GET_OBJECT_MODEL(Object obj, uint *pModel);
extern void GET_OBJECT_QUATERNION(Object obj, float *qx, float *qy, float *qz, float *qw);
extern void GET_OBJECT_ROTATION_VELOCITY(Object obj, float *pX, float *pY, float *pZ);
extern void GET_OBJECT_SPEED(Object obj, float *pSpeed);
extern void GET_OBJECT_TURN_MASS(Object obj, float *turnmass);
extern void GET_OBJECT_VELOCITY(Object obj, float *pX, float *pY, float *pZ);
extern void GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS(Object obj, float x, float y, float z, float *pOffX, float *pOffY, float *pOffZ);
extern void GET_ROOM_KEY_FROM_OBJECT(Object obj, uint *pRoomKey);
extern void GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(uint model, float x, float y, float z, int *state, float *);
extern void GRAB_NEARBY_OBJECT_WITH_SPECIAL_ATTRIBUTE(int attribute, Object *obj);
extern void MAKE_OBJECT_TARGETTABLE(Object obj, boolean targettable);
extern void MARK_OBJECT_AS_NO_LONGER_NEEDED(Object *pObj);
extern void OPEN_GARAGE(char *name);
extern void PLACE_OBJECT_RELATIVE_TO_CAR(Object obj, Car car, float x, float y, float z);
extern void SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(Object obj, boolean set);
extern void SET_DOOR_STATE(Object door, boolean flag, float);
extern void SET_GARAGE_LEAVE_CAMERA_ALONE(char *garageName, boolean set);
extern void SET_HEADING_OF_CLOSEST_OBJECT_OF_TYPE(float x, float y, float z, float radius, uint type_or_model, float heading);
extern void SET_LOAD_COLLISION_FOR_OBJECT_FLAG(Object obj, boolean set);
extern void SET_OBJECT_ALPHA(Object obj, int alpha);
extern void SET_OBJECT_ANIM_CURRENT_TIME(Object obj, char *animname0, char *animname1, float time);
extern void SET_OBJECT_ANIM_PLAYING_FLAG(Object obj, char *animname0, char *animname1, boolean flag);
extern void SET_OBJECT_ANIM_SPEED(Object obj, char *animname0, char *animname1, float speed);
extern void SET_OBJECT_AS_STEALABLE(Object obj, boolean set);
extern void SET_OBJECT_CCD(Object obj, boolean set);
extern void SET_OBJECT_COLLISION(Object obj, boolean value);
extern void SET_OBJECT_COORDINATES(Object obj, float pX, float pY, float pZ);
extern void SET_OBJECT_DRAW_LAST(Object obj, boolean set);
extern void SET_OBJECT_DYNAMIC(Object obj, boolean set);
extern void SET_OBJECT_HEADING(Object obj, float value);
extern void SET_OBJECT_HEALTH(Object obj, float health);
extern void SET_OBJECT_INITIAL_ROTATION_VELOCITY(Object obj, float x, float y, float z);
extern void SET_OBJECT_INITIAL_VELOCITY(Object obj, float x, float y, float z);
extern void SET_OBJECT_INVINCIBLE(Object obj, boolean set);
extern void SET_OBJECT_LIGHTS(Object obj, boolean lights);
extern void SET_OBJECT_ONLY_DAMAGED_BY_PLAYER(Object obj, boolean set);
extern void SET_OBJECT_PHYSICS_PARAMS(Object obj, float, float, float v0x, float v0y, float v0z, float v1x, float v1y, float v1z, uint flag0, uint flag1);
extern void SET_OBJECT_PROOFS(Object obj, boolean unknown0, boolean fallingDamage, boolean unknown1, boolean unknown2, boolean unknown3);
extern void SET_OBJECT_QUATERNION(Object obj, float qx, float qy, float qz, float qw);
extern void SET_OBJECT_RECORDS_COLLISIONS(Object obj, boolean set);
extern void SET_OBJECT_RENDER_SCORCHED(Object obj, boolean set);
extern void SET_OBJECT_ROTATION(Object obj, float Pitch, float Roll, float Yaw);
extern void SET_OBJECT_SCALE(Object obj, float scale);
extern void SET_OBJECT_USED_IN_POOL_GAME(Object obj, boolean set);
extern void SET_OBJECT_VISIBLE(Object obj, boolean value);
extern void SET_USES_COLLISION_OF_CLOSEST_OBJECT_OF_TYPE(float x, float y, float z, float radius, uint type_or_model, boolean flag);
extern void SET_VISIBILITY_OF_CLOSEST_OBJECT_OF_TYPE(float x, float y, float z, float radius, uint type_or_model, boolean set);
extern void SWAP_NEAREST_BUILDING_MODEL(float x, float y, float z, float radius, uint modelfrom, uint modelto);
extern void WINCH_CAN_PICK_OBJECT_UP(Object obj, boolean can);
//}
//namespace ENTITY
//{
extern boolean LOOK_AT_NEARBY_ENTITY_WITH_SPECIAL_ATTRIBUTE(int, Vector3 *, float *, ScriptAny *, ScriptAny *, ScriptAny *);
extern void FIND_NEAREST_ENTITIES_WITH_SPECIAL_ATTRIBUTE(float x, float y, float z);
extern void SET_VISIBILITY_OF_NEARBY_ENTITY_WITH_SPECIAL_ATTRIBUTE(int attribute, boolean set);
//}
//namespace AI
//{	
extern boolean DOES_SCENARIO_EXIST_IN_AREA(ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern boolean IS_PAIN_PLAYING(Ped ped);
extern boolean TASK_SHIMMY_CLIMB_UP(Ped ped);
extern boolean TASK_SHIMMY_IN_DIRECTION(Ped ped, ScriptAny);
extern boolean TASK_SHIMMY_LET_GO(Ped ped);
extern void ADD_COVER_BLOCKING_AREA(ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void ADD_COVER_POINT(ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void ADD_FOLLOW_NAVMESH_TO_PHONE_TASK(Ped ped, ScriptAny, ScriptAny, ScriptAny);
extern void ADD_NEEDED_AT_POSN(float x, float y, float z);
extern void ADD_POINT_TO_GPS_RACE_TRACK(Vector3 *point);
extern void ADD_SCENARIO_BLOCKING_AREA(float x0, float y0, float z0, float x1, float y1, float z1);
extern void BLOCK_COWERING_IN_COVER(Ped ped, boolean set);
extern void BLOCK_PEEKING_IN_COVER(Ped ped, boolean set);
extern void CLEAR_SEQUENCE_TASK(TaskSequence taskSequence);
extern void CLOSE_SEQUENCE_TASK(TaskSequence taskSequence);
extern void FIRE_PED_WEAPON(Ped ped, float x, float y, float z);
extern void HIGH_FALL_SCREAM(Ped ped);
extern void ON_FIRE_SCREAM(Ped ped);
extern void OPEN_SEQUENCE_TASK(TaskSequence *pTaskSequence);
extern void PANIC_SCREAM(Ped ped);
extern void REMOVE_COVER_POINT(CoverPoint coverPoint);
extern void SET_DEFAULT_TARGET_SCORING_FUNCTION(Ped ped, ScriptAny);
extern void SET_DRIVE_TASK_CRUISE_SPEED(Ped ped, float speed);
extern void TAKE_CAR_OUT_OF_PARKED_CARS_BUDGET(Car car, boolean out);
extern void TASK_ACHIEVE_HEADING(Ped ped, float heading);
extern void TASK_AIM_GUN_AT_CHAR(Ped ped, Ped targetPed, uint duration);
extern void TASK_AIM_GUN_AT_COORD(Ped ped, float tX, float tY, float tZ, uint duration);
extern void TASK_CAR_DRIVE_TO_COORD(Ped ped, Vehicle, float, float, float, float, int, int, int, float, int);
extern void TASK_CAR_DRIVE_TO_COORD_NOT_AGAINST_TRAFFIC(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_CAR_DRIVE_WANDER(Ped ped, Vehicle vehicle, float speed, uint drivingStyle);
extern void TASK_CAR_MISSION(Ped ped, Vehicle vehicle, uint targetEntity, uint missionType, float speed, uint drivingStyle, uint unknown6_10, uint unknown7_5);
extern void TASK_CAR_MISSION_COORS_TARGET(Ped ped, Vehicle vehicle, float x, float y, float z, uint unknown0_4, float speed, uint unknown2_1, uint unknown3_5, uint unknown4_10);
extern void TASK_CAR_MISSION_COORS_TARGET_NOT_AGAINST_TRAFFIC(Ped ped, Vehicle vehicle, float x, float y, float z, uint unknown0_4, float speed, uint unknown2_1, uint unknown3_5, uint unknown4_10);
extern void TASK_CAR_MISSION_NOT_AGAINST_TRAFFIC(Ped ped, Vehicle vehicle, uint targetEntity, uint missionType, float speed, uint drivingStyle, uint unknown6_10, uint unknown7_5);
extern void TASK_CAR_MISSION_PED_TARGET(Ped ped, Vehicle vehicle, Ped target, uint unknown0_4, float speed, uint unknown2_1, uint unknown3_5, uint unknown4_10);
extern void TASK_CAR_MISSION_PED_TARGET_NOT_AGAINST_TRAFFIC(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_CAR_TEMP_ACTION(Ped ped, Vehicle vehicle, uint action, uint duration);
extern void TASK_CHAR_ARREST_CHAR(Ped ped0, Ped ped1);
//TASK_CHAR_SLIDE_TO_COORD(pPlayer, land_x, land_y, land_z, h, 0.50000000 );
extern void TASK_CHAR_SLIDE_TO_COORD(Ped ped, float x, float y, float z, float h, float time); //i think?
//extern void TASK_CHAR_SLIDE_TO_COORD_AND_PLAY_ANIM(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_CHAR_SLIDE_TO_COORD_AND_PLAY_ANIM(Ped ped, float x, float y, float z, float h, float time, char* animName, char* animSet, float animTime, int unk0, int unk1, int unk1_1, int unk0_1, int unk0_2);
extern void TASK_CHAR_SLIDE_TO_COORD_HDG_RATE(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_CHAT_WITH_CHAR(Ped ped, Ped pednext, boolean, boolean);
extern void TASK_CLEAR_LOOK_AT(Ped ped);
extern void TASK_CLIMB(Ped ped, boolean);
extern void TASK_CLIMB_LADDER(Ped ped, ScriptAny);
extern void TASK_COMBAT(Ped ped, Ped target);
extern void TASK_COMBAT_HATED_TARGETS_AROUND_CHAR(Ped ped, float radius);
extern void TASK_COMBAT_HATED_TARGETS_AROUND_CHAR_TIMED(Ped ped, float radius, uint duration);
extern void TASK_COMBAT_HATED_TARGETS_IN_AREA(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_COMBAT_ROLL(Ped ped, ScriptAny);
extern void TASK_COMBAT_TIMED(Ped ped, Char target, uint duration);
extern void TASK_COWER(Ped ped);
extern void TASK_DEAD(Ped ped);
extern void TASK_DESTROY_CAR(Ped ped, Car car);
extern void TASK_DIE(Ped ped);
extern void TASK_DRIVE_BY(Ped ped, Ped pednext, int, float x, float y, float z, float angle, int, boolean, int);
extern void TASK_DRIVE_POINT_ROUTE(Ped ped, int point, float radius);
extern void TASK_DRIVE_POINT_ROUTE_ADVANCED(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_DUCK(Ped ped, ScriptAny);
extern void TASK_ENTER_CAR_AS_DRIVER(Ped ped, Vehicle vehicle, uint duration);
extern void TASK_ENTER_CAR_AS_PASSENGER(Ped ped, Vehicle vehicle, uint duration, uint seatIndex);
extern void TASK_EVERYONE_LEAVE_CAR(Vehicle vehicle);
extern void TASK_EXTEND_ROUTE(Ped ped, ScriptAny, ScriptAny);
extern void TASK_FALL_AND_GET_UP(Ped ped, ScriptAny, ScriptAny);
extern void TASK_FLEE_CHAR_ANY_MEANS(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_FLUSH_ROUTE(void);
extern void TASK_FOLLOW_FOOTSTEPS(Ped ped, ScriptAny);
extern void TASK_FOLLOW_NAV_MESH_AND_SLIDE_TO_COORD(Ped ped, float x, float y, float z, int, int, float, float angle);
extern void TASK_FOLLOW_NAV_MESH_AND_SLIDE_TO_COORD_HDG_RATE(Ped ped, float x, float y, float z, int, int, float, float angle, float rate);
extern void TASK_FOLLOW_NAV_MESH_TO_COORD(Ped ped, float x, float y, float z, uint unknown0_2, uint unknown1_minus1, float unknown2_1);
extern void TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP(Ped ped, float x, float y, float z,uint unknown0_2, uint unknown1_minus1, float unknown2_1);
extern void TASK_GET_OFF_BOAT(Ped ped, int timeout);
extern void TASK_GOTO_CAR(Ped ped, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_GOTO_CHAR_AIMING(Ped ped, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_GOTO_CHAR_OFFSET(Ped ped, Ped target, uint duration, float offsetRight, float offsetFront);
extern void TASK_GO_STRAIGHT_TO_COORD(Ped ped, float x, float y, float z, uint unknown2, uint unknown45000);
extern void TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_CAR(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_GO_TO_CHAR(Ped ped, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_GO_TO_COORD_ANY_MEANS(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_GO_TO_COORD_WHILE_AIMING(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_GO_TO_COORD_WHILE_SHOOTING(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_GO_TO_OBJECT(Ped ped, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_GUARD_ANGLED_DEFENSIVE_AREA(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_GUARD_ASSIGNED_DEFENSIVE_AREA(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_GUARD_CURRENT_POSITION(Ped ped, float unknown0_15, float unknown1_10, uint unknown2_1);
extern void TASK_GUARD_SPHERE_DEFENSIVE_AREA(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_HANDS_UP(Ped ped, uint duration);
extern void TASK_HELI_MISSION(Ped ped, Vehicle heli, uint uk0_0, uint uk1_0, float pX, float pY, float pZ, uint uk2_4, float speed, uint uk3_5, float uk4_minus1, uint uk5_round_z_plus_1, uint uk6_40);
extern void TASK_JUMP(Ped ped, boolean flag);
extern void TASK_LEAVE_ANY_CAR(Ped ped);
extern void TASK_LEAVE_CAR(Ped ped, Vehicle vehicle);
extern void TASK_LEAVE_CAR_AND_FLEE(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_LEAVE_CAR_DONT_CLOSE_DOOR(Ped ped, Vehicle vehicle);
extern void TASK_LEAVE_CAR_IMMEDIATELY(Ped ped, Vehicle vehicle);
extern void TASK_LEAVE_CAR_IN_DIRECTION(Ped ped, Car car, boolean direction);
extern void TASK_LEAVE_GROUP(Ped ped);
extern void TASK_LOOK_AT_CHAR(Ped ped, Ped targetPed, uint duration, uint unknown_0);
extern void TASK_LOOK_AT_COORD(Ped ped, float x, float y, float z, uint duration, uint unknown_0);
extern void TASK_LOOK_AT_OBJECT(Ped ped, Object targetObject, uint duration, uint unknown_0);
extern void TASK_LOOK_AT_VEHICLE(Ped ped, Vehicle targetVehicle, uint duration, uint unknown_0);
extern void TASK_MOBILE_CONVERSATION(Ped ped, ScriptAny);
extern void TASK_OPEN_DRIVER_DOOR(Ped ped, Vehicle vehicle, uint unknown0);
extern void TASK_OPEN_PASSENGER_DOOR(Ped ped, Vehicle vehicle, uint seatIndex, uint unknown0);
extern void TASK_PAUSE(Ped ped, uint duration);
extern void TASK_PERFORM_SEQUENCE(Ped ped, TaskSequence taskSequence);
extern void TASK_PERFORM_SEQUENCE_FROM_PROGRESS(Ped ped, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_PERFORM_SEQUENCE_LOCALLY(Ped ped, ScriptAny);
extern void TASK_PICKUP_AND_CARRY_OBJECT(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_PLAY_ANIM(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_PLAY_ANIM_FACIAL(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_PLAY_ANIM_NON_INTERRUPTABLE(Ped ped, char *animname0, char *animname1, float, int, int, int, int, int);
extern void TASK_PLAY_ANIM_ON_CLONE(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_PLAY_ANIM_READY_TO_BE_EXECUTED(Ped ped, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_PLAY_ANIM_SECONDARY(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_PLAY_ANIM_SECONDARY_IN_CAR(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_PLAY_ANIM_SECONDARY_NO_INTERRUPT(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_PLAY_ANIM_SECONDARY_UPPER_BODY(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_PLAY_ANIM_UPPER_BODY(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_PLAY_ANIM_WITH_ADVANCED_FLAGS(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_PLAY_ANIM_WITH_FLAGS(Ped ped, char *animName, char *animSet, float unknown0_8, uint unknown1_0, uint flags);
extern void TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_PUT_CHAR_DIRECTLY_INTO_COVER(ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_SEEK_COVER_FROM_PED(Ped ped, ScriptAny, ScriptAny);
extern void TASK_SEEK_COVER_FROM_POS(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_SEEK_COVER_TO_COORDS(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_SEEK_COVER_TO_COVER_POINT(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_SEEK_COVER_TO_OBJECT(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_SET_IGNORE_WEAPON_RANGE_FLAG(Ped ped, boolean ignore);
extern void TASK_SHAKE_FIST(Ped ped);
extern void TASK_SHIMMY(Ped ped, ScriptAny);
extern void TASK_SHOOT_AT_CHAR(Ped shooter, Ped victim, int time, ShootMode shootmode);
extern void TASK_SHOOT_AT_COORD(Ped ped,float x, float y, float z, int time, ShootMode shootmode);
extern void TASK_SHUFFLE_TO_NEXT_CAR_SEAT(Ped ped, ScriptAny);
extern void TASK_SIT_DOWN(Ped ped, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_SIT_DOWN_INSTANTLY(Ped ped, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_SIT_DOWN_ON_NEAREST_OBJECT(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_SIT_DOWN_ON_OBJECT(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_SIT_DOWN_ON_SEAT(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_SMART_FLEE_CHAR(Ped ped, Ped fleeFromPed, float unknown0_100, uint duration);
extern void TASK_SMART_FLEE_CHAR_PREFERRING_PAVEMENTS(Ped ped, Ped fleeFromPed, float unknown0_100, uint duration);
extern void TASK_SMART_FLEE_POINT(Ped ped, float x, float y, float z, float unknown0_100, uint duration);
extern void TASK_SMART_FLEE_POINT_PREFERRING_PAVEMENTS(Ped ped, float x, float y, float z, float radius, int time_prob);
extern void TASK_STAND_GUARD(Ped ped, float x, float y, float z, float, float, boolean, int);
extern void TASK_STAND_STILL(Ped ped, int duration);
extern void TASK_START_SCENARIO_AT_POSITION(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_START_SCENARIO_IN_PLACE(Ped ped, ScriptAny, ScriptAny);
extern void TASK_SWAP_WEAPON(Ped ped, uint weapon);
extern void TASK_SWIM_TO_COORD(Ped ped, float x, float y, float z);
extern void TASK_TIRED(Ped ped, int);
extern void TASK_TOGGLE_DUCK(Ped ped, int);
extern void TASK_TOGGLE_PED_THREAT_SCANNER(Ped ped, boolean, boolean, boolean);
extern void TASK_TURN_CHAR_TO_FACE_CHAR(Ped ped, Ped targetPed);
extern void TASK_TURN_CHAR_TO_FACE_COORD(Ped ped, float x, float y, float z);
extern void TASK_USE_MOBILE_PHONE(Ped ped, boolean use);
extern void TASK_USE_MOBILE_PHONE_TIMED(Ped ped, uint duration);
extern void TASK_USE_NEAREST_SCENARIO_TO_POS(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_USE_NEAREST_SCENARIO_TO_POS_WARP(Ped ped, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void TASK_WANDER_STANDARD(Ped ped);
extern void TASK_WARP_CHAR_INTO_CAR_AS_DRIVER(Ped ped, Vehicle vehicle);
extern void TASK_WARP_CHAR_INTO_CAR_AS_PASSENGER(Ped ped, Vehicle vehicle, uint seatIndex);
//}
//namespace POLICE
//{
extern boolean GET_CREATE_RANDOM_COPS(void);
extern boolean IS_CHAR_IN_ANY_POLICE_VEHICLE(Ped ped);
extern boolean IS_COP_PED_IN_AREA_3D_NO_SAVE(float x0, float y0, float z0, float x1, float y1, float z1);
extern boolean IS_COP_VEHICLE_IN_AREA_3D_NO_SAVE(float x0, float y0, float z0, float x1, float y1, float z1);
extern boolean IS_WANTED_LEVEL_GREATER(Player playerIndex, uint level);
extern boolean WANTED_STARS_ARE_FLASHING(void);
extern void ADD_HOSPITAL_RESTART(float x, float y, float z, float radius, int islandnum);
extern void ADD_POLICE_RESTART(float x, float y, float z, float radius, int islandnum);
extern void ALTER_WANTED_LEVEL(Player playerIndex, uint level);
extern void ALTER_WANTED_LEVEL_NO_DROP(Player playerIndex, uint level);
extern void APPLY_WANTED_LEVEL_CHANGE_NOW(Player playerIndex);
extern void CLEAR_AREA_OF_COPS(float x, float y, float z, float radius);
extern void CLEAR_WANTED_LEVEL(Player playerIndex);
extern void DISABLE_POLICE_SCANNER(void);
extern void DONT_DISPATCH_COPS_FOR_PLAYER(int player, boolean dont);
extern void ENABLE_POLICE_SCANNER(void);
extern void EXTEND_PATROL_ROUTE(ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void FLUSH_PATROL_ROUTE(void);
extern void GET_CURRENT_BASIC_COP_MODEL(uint *pModel);
extern void GET_CURRENT_BASIC_POLICE_CAR_MODEL(uint *pModel);
extern void GET_CURRENT_COP_MODEL(uint *pModel);
extern void GET_CURRENT_POLICE_CAR_MODEL(uint *pModel);
extern void GET_MAX_WANTED_LEVEL(uint *pMaxWantedLevel);
extern void GET_PLAYER_WANTED_LEVEL_INCREMENT(int player, int *increment);
extern void MAINTAIN_FLASHING_STAR_AFTER_OFFENCE(int player, boolean maintain);
extern void REPORT_CRIME(float x, float y, float z, char *name);
extern void REPORT_DISPATCH(int id, float x, float y, float z);
extern void REPORT_POLICE_SPOTTING_SUSPECT(Vehicle veh);
extern void REPORT_SUSPECT_ARRESTED(void);
extern void REPORT_SUSPECT_DOWN(void);
extern void SET_CHAR_WANTED_BY_POLICE(Ped ped, boolean wanted);
extern void SET_CREATE_RANDOM_COPS(boolean set);
extern void SET_DITCH_POLICE_MODELS(boolean set);
extern void SET_EXTRA_HOSPITAL_RESTART_POINT(float x, float y, float z, float, float);
extern void SET_EXTRA_POLICE_STATION_RESTART_POINT(float x, float y, float z, float, float);
extern void SET_FAKE_WANTED_CIRCLE(float x, float y, float radius);
extern void SET_FAKE_WANTED_LEVEL(int lvl);
extern void SET_MAX_WANTED_LEVEL(uint lvl);
extern void SET_PED_WONT_ATTACK_PLAYER_WITHOUT_WANTED_LEVEL(Ped ped, boolean set);
extern void SET_PLAYER_AS_COP(int player, boolean set);
extern void SET_POLICE_FOCUS_WILL_TRACK_CAR(Car car, boolean set);
extern void SET_POLICE_IGNORE_PLAYER(Player playerIndex, boolean value);
extern void SET_POLICE_RADAR_BLIPS(boolean set);
extern void SET_WANTED_MULTIPLIER(float multiplier);
extern void SET_ZONE_NO_COPS(char *name, boolean set);
extern void SPECIFY_SCRIPT_POPULATION_ZONE_PERCENTAGE_COPS(int percentage);
extern void STORE_WANTED_LEVEL(Player playerIndex, uint* value);
extern void SWITCH_POLICE_HELIS(boolean set);
extern void TRIGGER_POLICE_REPORT(char *name);
extern void TRIGGER_VIGILANTE_CRIME(int id, float x, float y, float z);
//}
//namespace GAMEPLAY
//{
extern bool IS_PC_VERSION(void);
extern bool IS_XBOX360_VERSION(void);
extern boolean ARE_ALL_NAVMESH_REGIONS_LOADED(void);
extern boolean ARE_CREDITS_FINISHED(void);
extern boolean CAN_CREATE_RANDOM_CHAR(boolean flag0, boolean flag1);
extern boolean CAN_FONT_BE_LOADED(int fontid);
extern boolean CAN_START_MISSION_PASSED_TUNE(void);
extern boolean CHEAT_HAPPENED_RECENTLY(int cheat, int time);
extern boolean DID_SAVE_COMPLETE_SUCCESSFULLY(void);
extern boolean DOES_THIS_MINIGAME_SCRIPT_ALLOW_NON_MINIGAME_HELP_MESSAGES(void);
extern boolean GET_GFWL_HAS_SAFE_HOUSE(void);
extern boolean GET_IS_AUTOSAVE_OFF(void);
extern boolean GET_IS_DEPOSIT_ANIM_RUNNING(void);
extern boolean GET_IS_DISPLAYINGSAVEMESSAGE(void);
extern boolean GET_IS_PROJECTILE_TYPE_IN_AREA(float x0, float y0, float z0, float x1, float y1, float z1, int type);
extern boolean GET_MISSION_FLAG(void);
extern boolean HAS_DEATHARREST_EXECUTED(void);
extern boolean IS_AREA_OCCUPIED(float x1, float y1, float z1, float x2, float y2, float z2, boolean unknownFalse1, boolean unknownTrue, boolean unknownFalse2, boolean unknownFalse3, boolean unknownFalse4);
extern boolean IS_AUSSIE_VERSION(void);
extern boolean IS_AUTO_AIMING_ON(void);
extern boolean IS_AUTO_SAVE_IN_PROGRESS(void);
extern boolean IS_BIT_SET(int val, int bitnum);
extern boolean IS_BULLET_IN_AREA(float x, float y, float z, float radius, boolean unknownTrue);
extern boolean IS_BULLET_IN_BOX(float x1, float y1, float z1, float x2, float y2, float z2, boolean unknown);
extern boolean IS_EPISODE_AVAILABLE(int episode);
extern boolean IS_EPISODIC_DISC_BUILD(void);
extern boolean IS_FONT_LOADED(uint font);
extern boolean IS_FRONTEND_FADING(void);
extern boolean IS_GAME_IN_CONTROL_OF_MUSIC(void);
extern boolean IS_GERMAN_VERSION(void);
extern boolean IS_HELP_MESSAGE_BEING_DISPLAYED(void);
extern boolean IS_HINT_RUNNING(void);
extern boolean IS_HUD_PREFERENCE_SWITCHED_ON(void);
extern boolean IS_HUD_RETICULE_COMPLEX(void);
extern boolean IS_INTERIOR_SCENE(void);
extern boolean IS_IN_LAN_MODE(void);
extern boolean IS_IN_PLAYER_SETTINGS_MENU(void);
extern boolean IS_IN_SPECTATOR_MODE(void);
extern boolean IS_JAPANESE_VERSION(void);
extern boolean IS_LAZLOW_STATION_LOCKED(void);
extern boolean IS_LOOK_INVERTED(void);
extern boolean IS_MEMORY_CARD_IN_USE(void);
extern boolean IS_MESSAGE_BEING_DISPLAYED(void);
extern boolean IS_MINIGAME_IN_PROGRESS(void);
extern boolean IS_MISSION_COMPLETE_PLAYING(void);
extern boolean IS_PAUSE_MENU_ACTIVE(void);
extern boolean IS_PAY_N_SPRAY_ACTIVE(void);
extern boolean IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(float pX, float pY, float pZ, float sizeX, float sizeY, float sizeZ);
extern boolean IS_POS_IN_CUTSCENE_BLOCKING_BOUNDS(float x, float y, float z);
extern boolean IS_PROJECTILE_IN_AREA(float x0, float y0, float z0, float x1, float y1, float z1);
extern boolean IS_RADIO_HUD_ON(void);
extern boolean IS_RADIO_RETUNING(void);
extern boolean IS_RELATIONSHIP_SET(int, int, int);
extern boolean IS_REPLAY_SAVING(void);
extern boolean IS_REPLAY_SYSTEM_SAVING(void);
extern boolean IS_SCREEN_FADED_IN(void);
extern boolean IS_SCREEN_FADED_OUT(void);
extern boolean IS_SCREEN_FADING(void);
extern boolean IS_SCREEN_FADING_IN(void);
extern boolean IS_SCREEN_FADING_OUT(void);
extern boolean IS_SNIPER_INVERTED(void);
extern boolean IS_SYSTEM_UI_SHOWING(void);
extern boolean IS_THIS_A_MINIGAME_SCRIPT(void);
extern boolean SECUROM_SPOT_CHECK1(void);
extern boolean SECUROM_SPOT_CHECK2(void);
extern boolean SECUROM_SPOT_CHECK3(void);
extern boolean SECUROM_SPOT_CHECK4(void);
extern boolean SPOT_CHECK5(void);
extern boolean SPOT_CHECK6(void);
extern boolean SPOT_CHECK7(void);
extern boolean SPOT_CHECK8(void);
extern boolean STRING_TO_INT(char *str, int *intval);
extern char * ASCII_INT_TO_STRING(int ascii);
extern char * GET_EPISODE_NAME(uint episodeIndex);
extern char * GET_RADIO_NAME(int id);
extern char * OBFUSCATE_STRING(char *str);
extern char * UNOBFUSCATE_STRING(char *str);
extern float ABSF(float value);
extern float ABSI(float value);
extern float ACOS(float);
extern float ASIN(float value);
extern float ATAN(float value);
extern float ATAN2(float, float);
extern float GET_ASPECT_RATIO(void);
extern float GET_PROGRESS_PERCENTAGE(void);
extern int COMPARE_STRING(char *, char *);
extern int COMPARE_TWO_DATES(int date0_0, int date0_1, int date1_0, int date1_1);
extern int CONVERT_METRES_TO_FEET_INT(int metres);
extern int FIND_STATIC_EMITTER_INDEX(char *StaticEmitterName);
extern int GET_BITS_IN_RANGE(int val, int rangebegin, int rangeend);
extern int GET_CURRENT_STACK_SIZE(void);
extern int GET_FILTER_SAVE_SETTING(int filterid);
extern int GET_NAVMESH_ROUTE_RESULT(int navmesh);
extern int GET_PROFILE_SETTING(int settingid);
extern int GET_ROUTE_SIZE(void);
extern int GET_SCREEN_FADE_ALPHA(void);
extern int GET_STATIC_EMITTER_PLAYTIME(int StaticEmitterIndex);
extern int GET_STREAM_PLAYTIME(void);
extern int READ_KILL_FRENZY_STATUS(void);
extern int STRING_DIFFERENCE(char *str0, char *str1);//only works on 1.0.7
extern int STRING_STRING(char *, char *);//only works on 1.0.7
extern ScriptAny AWARD_ACHIEVEMENT(uint achievement);
extern ScriptAny GET_GROUND_Z_FOR_3D_COORD(float x, float y, float z, float *pGroundZ);
extern ScriptAny IS_SNIPER_BULLET_IN_AREA(float x0, float y0, float z0, float x1, float y1, float z1);
extern uint GET_CURRENT_DAY_OF_WEEK(void);
extern uint GET_CURRENT_EPISODE(void);
extern uint GET_CURRENT_LANGUAGE(void);
extern uint GET_EPISODE_INDEX_FROM_SUMMONS(void);
extern uint GET_HASH_KEY(char *value);
extern uint GET_HOURS_OF_DAY(void);
extern uint GET_MAP_AREA_FROM_COORDS(float x, float y, float z);
extern uint GET_MINUTES_OF_DAY(void);
extern uint GET_MINUTES_TO_TIME_OF_DAY(uint hour, uint minute);
extern uint GET_NEXT_STATION_FOR_TRAIN(Train train);
extern uint GET_NUM_STREAMING_REQUESTS(void);
extern uint GET_TIME_SINCE_LAST_ARREST(void);
extern uint GET_TIME_SINCE_LAST_DEATH(void);
extern uint REGISTER_SAVE_HOUSE(float x, float y, float z, float unkf, char* name, uint unk0);
extern void ABORT_ALL_GARAGE_ACTIVITY(void);
extern void ACTIVATE_CHEAT(uint cheat);//0 - 15
extern void ALLOW_AUTO_CONVERSATION_LOOKATS(Ped ped, boolean allow);
extern void ALLOW_EMERGENCY_SERVICES(boolean allow);
extern void ALLOW_GAME_TO_PAUSE_FOR_STREAMING(boolean allow);
extern void ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND(boolean value);
extern void ALLOW_MULTIPLE_DRIVEBY_PICKUPS(boolean allow);
extern void ALLOW_REACTION_ANIMS(Ped ped, boolean allow);
extern void ALLOW_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(boolean value);
extern void ALLOW_STUNT_JUMPS_TO_TRIGGER(boolean allow);
extern void CANCEL_OVERRIDE_RESTART(void);
extern void CLEAR_ANGLED_AREA_OF_CARS(float x0, float y0, float z0, float x1, float y1, float z1, float radius);
extern void CLEAR_AREA(float x, float y, float z, float radius, boolean unknown);
extern void CLEAR_AREA_OF_CARS(float x, float y, float z, float radius);
extern void CLEAR_AREA_OF_CHARS(float x, float y, float z, float radius);
extern void CLEAR_AREA_OF_OBJECTS(float x, float y, float z, float radius);
extern void CLEAR_BIT(int *val, int bit);
extern void CLEAR_PED_NON_CREATION_AREA(void);
extern void CLEAR_PED_NON_REMOVAL_AREA(void);
extern void CLEAR_SCRIPTED_CONVERSION_CENTRE(void);
extern void DISABLE_PAUSE_MENU(boolean disabled);
extern void DONT_DISPLAY_LOADING_ON_FADE_THIS_FRAME(void);
extern void DO_AUTO_SAVE(void);
extern void ENABLE_FANCY_WATER(boolean enable);
extern void ENABLE_SAVE_HOUSE(uint savehouse, boolean enable);
extern void FAIL_KILL_FRENZY(void);
extern void FIND_NEAREST_COLLECTABLE_BIN_BAGS(float x, float y, float z);
extern void FIND_STREET_NAME_AT_POSITION(float pX, float pY, float pZ, uint *strHash0, uint *strHash1);
extern void FIX_AMBIENCE_ORIENTATION(boolean fix);
extern void FIX_SCRIPT_MIC_TO_CURRENT_POSISITION(void);
extern void FLUSH_ALL_OUT_OF_DATE_RADAR_BLIPS_FROM_MISSION_CLEANUP_LIST(void);
extern void FLUSH_COVER_BLOCKING_AREAS(void);
extern void FLUSH_SCENARIO_BLOCKING_AREAS(void);
extern void FORCE_HIGH_LOD(boolean force);
extern void FORCE_LOADING_SCREEN(boolean force);
extern void FORCE_POPULATION_INIT(void);
extern void FORCE_WEATHER(uint weather);
extern void FORCE_WEATHER_NOW(uint weather);
extern void FORCE_WIND(float wind);
extern void GET_ANGLE_BETWEEN_2D_VECTORS(float x1, float y1, float x2, float y2, float *pResult);
extern void GET_CURRENT_DATE(uint *day, uint *month);
extern void GET_CURRENT_WEATHER(uint *pWeather);
extern void GET_CURRENT_WEATHER_FULL(int *weatherparam0, int *weatherparam1, int *weatherparam2);
extern void GET_DISTANCE_BETWEEN_COORDS_2D(float x1, float y1, float x2, float y2, float *pDist);
extern void GET_DISTANCE_BETWEEN_COORDS_3D(float x1, float y1, float z1, float x2, float y2, float z2, float *pDist);
extern void GET_FRONTEND_DESIGN_VALUE(int frontendid, float *, float *);
extern void GET_HEADING_FROM_VECTOR_2D(float x, float y, float *pHeading);
extern void GET_HUD_COLOUR(uint type, uint *pR, uint *pG, uint *pB, uint *pA);
extern void GET_SEQUENCE_PROGRESS(int seq, int *progress);
extern void GET_STREAM_BEAT_INFO(int *, int *, int *);
extern void LIMIT_ANGLE(float angle, float *anglelimited);
extern void LIMIT_TWO_PLAYER_DISTANCE(float distance);
extern void LOCK_LAZLOW_STATION(void);
extern void LOCK_PLAYER_SETTINGS_GENRE_CHANGE(int lock_bit_mask);
extern void LOOP_RACE_TRACK(boolean loop);
extern void OVERRIDE_FREEZE_FLAGS(boolean);
extern void OVERRIDE_NEXT_RESTART(float x, float y, float z, float heading);
extern void PICKUPS_PASS_TIME(uint time);
extern void POPULATE_NOW(void);
extern void PRIORITIZE_STREAMING_REQUEST(void);
extern void PROCESS_MISSION_DELETION_LIST(void);
extern void REGISTER_BEST_POSITION(int, int position);
extern void REGISTER_MISSION_PASSED(char *);
extern void REGISTER_ODDJOB_MISSION_PASSED(void);
extern void REGISTER_TRACK_NUMBER(int number);
extern void RELEASE_TEXTURE(Texture texture);
extern void RELEASE_TIME_OF_DAY(void);
extern void RELEASE_WEATHER(void);
extern void REMOVE_SCRIPT_MIC(void);
extern void RENDER_RACE_TRACK(boolean render);
extern void REPORT_TAGGED_RADIO_TRACK(int TrackTextId);
extern void RESET_ACHIEVEMENTS_AWARD(void);
extern void SAVE_SETTINGS(void);
extern void SET_ALLOW_DUMMY_CONVERSIONS(boolean set);
extern void SET_BIT(int *val, int bit);
extern void SET_BITS_IN_RANGE(int *, int rangebegin, int rangeend, int val);
extern void SET_CLEAR_HELP_IN_MISSION_CLEANUP(boolean set);
extern void SET_CLEAR_MANIFOLDS(boolean set);
extern void SET_COLLECTABLE1_TOTAL(int total);
extern void SET_CREDITS_TO_RENDER_BEFORE_FADE(boolean set);
extern void SET_DEFAULT_GLOBAL_INSTANCE_PRIORITY(void);
extern void SET_FADE_IN_AFTER_LOAD(boolean set);
extern void SET_FILTER_SAVE_SETTING(int filterid, int setting);
extern void SET_FOV_CHANNEL_SCRIPT(boolean set);
extern void SET_GLOBAL_INSTANCE_PRIORITY(int priority);
extern void SET_GLOBAL_RENDER_FLAGS(boolean, boolean, boolean, boolean);
extern void SET_GRAVITY_OFF(boolean set);
extern void SET_GFWL_HAS_SAFE_HOUSE(uint ukn);
extern void SET_GUNSHOT_SENSE_RANGE_FOR_RIOT2(float range);
extern void SET_MINIGAME_IN_PROGRESS(boolean set);
extern void SET_MISSION_FLAG(boolean isMission);
extern void SET_MISSION_PASSED_CASH(boolean add, int cash, int);
extern void SET_MISSION_PICKUP_SOUND(uint model, char *SoundName);
extern void SET_MISSION_RESPECT_TOTAL(float respect);
extern void SET_NEXT_DESIRED_MOVE_STATE(int state);
extern void SET_PHYS_CCD_HANDLES_ROTATION(boolean set);
extern void SET_RAILTRACK_RESISTANCE_MULT(float resistance);
extern void SET_RANDOM_SEED(int seed);
extern void SET_ROT_ORDER(int order);
extern void SET_SCRIPTED_CONVERSION_CENTRE(float x, float y, float z);
extern void SET_SEQUENCE_TO_REPEAT(int seq, int repeat);
extern void SET_SLEEP_MODE_ACTIVE(boolean set);
extern void SET_SNIPER_ZOOM_FACTOR(float factor);
extern void SET_TAXI_GARAGE_RADIO_STATE(boolean radiostate);
extern void SET_TOTAL_NUMBER_OF_MISSIONS(float floatstatval);
extern void SET_USE_POOL_GAME_PHYSICS_SETTINGS(boolean set);
extern void START_CREDITS(void);
extern void START_FIRING_AMNESTY(void);
extern void START_GPS_RACE_TRACK(int trackid);
extern void START_KILL_FRENZY(char *gxtname, int, int, int, int, int, int, int, boolean);
extern void STOP_CREDITS(void);
extern void SUPPRESS_FADE_IN_AFTER_DEATH_ARREST(boolean set);
extern void SWITCH_AMBIENT_PLANES(boolean on);
extern void SWITCH_GARBAGE_TRUCKS(boolean on);
extern void SWITCH_MAD_DRIVERS(boolean on);
extern void SWITCH_OFF_WAYPOINT(void);
extern void SWITCH_RANDOM_BOATS(boolean on);
extern void SWITCH_RANDOM_TRAINS(boolean on);
extern void SWITCH_STREAMING(boolean on);
extern void SYNCH_AMBIENT_PLANES(int, int);
extern void TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME(char *name);
extern void UNLOCK_GENERIC_NEWS_STORY(int StoryId);
extern void UNLOCK_LAZLOW_STATION(void);
extern void UNLOCK_MISSION_NEWS_STORY(int id);
//}
//namespace AUDIO
//{
extern boolean HAS_SOUND_FINISHED(uint sound);
extern boolean IS_AMBIENT_SPEECH_DISABLED(Ped ped);
extern boolean IS_AMBIENT_SPEECH_PLAYING(Ped ped);
extern boolean IS_ANY_SPEECH_PLAYING(Ped ped);
extern boolean IS_SCRIPTED_CONVERSATION_ONGOING(void);
extern boolean IS_SCRIPTED_SPEECH_PLAYING(Ped ped);
extern boolean REQUEST_AMBIENT_AUDIO_BANK(char *name);
extern boolean REQUEST_MISSION_AUDIO_BANK(char *name);
extern boolean ENABLE_SCRIPT_CONTROLLED_MICROPHONE(void);
extern char * GET_SPEECH_FOR_EMERGENCY_SERVICE_CALL(void);
extern int ABORT_SCRIPTED_CONVERSATION(boolean abort);
extern int GET_AUDIBLE_MUSIC_TRACK_TEXT_ID(void);
extern int GET_AUDIO_ROOM_ID(void);
extern int GET_CURRENT_SCRIPTED_CONVERSATION_LINE(void);
extern uint GET_SOUND_ID(void);
extern void ADD_LINE_TO_CONVERSATION(ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void ADD_LINE_TO_SCRIPTED_CONVERSATION(uint conversation, int, int);
extern void ADD_NEW_CONVERSATION_SPEAKER(int id, int, int *);
extern void ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(int, int);
extern void AMBIENT_AUDIO_BANK_NO_LONGER_NEEDED(void);
extern void CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(Ped ped);
extern void DISABLE_FRONTEND_RADIO(void);
extern void DISABLE_GPS(boolean disable);
extern void DISABLE_STICKY_BOMB_ACTIVE_SOUND(Ped ped, boolean disable);
extern void DONT_ABORT_CAR_CONVERSATIONS(boolean flag0, boolean flag1);
extern void ENABLE_CHASE_AUDIO(boolean enable);
extern void ENABLE_FRONTEND_RADIO(void);
extern void FORCE_INITIAL_PLAYER_STATION(char *stationName);
extern void FORCE_NOISE_OFF(boolean off);
extern void FORCE_RADIO_TRACK(char *radiostation, char *trackname, int, int);
extern void FREEZE_RADIO_STATION(char *stationName);
extern void GET_SOUND_LEVEL_AT_COORDS(Ped ped, float x, float y, float z, int *level);
extern void HANDLE_AUDIO_ANIM_EVENT(Ped ped, char *AudioAnimEventName);
extern void HELI_AUDIO_SHOULD_SKIP_STARTUP(Vehicle heli, boolean skip);
extern void MISSION_AUDIO_BANK_NO_LONGER_NEEDED(void);
extern void MUTE_GAMEWORLD_AND_POSITIONED_RADIO_FOR_TV(boolean mute);
extern void MUTE_GAMEWORLD_AUDIO(boolean mute);
extern void MUTE_POSITIONED_RADIO(boolean mute);
extern void MUTE_STATIC_EMITTER(int StaticEmitterIndex, boolean mute);
extern void NEW_SCRIPTED_CONVERSATION(void);
extern void PAUSE_SCRIPTED_CONVERSATION(boolean pause);
extern void PLAY_AUDIO_EVENT(char *name);
extern void PLAY_AUDIO_EVENT_FROM_OBJECT(char *EventName, Object obj);
extern void PLAY_AUDIO_EVENT_FROM_PED(char *name, Ped ped);
extern void PLAY_AUDIO_EVENT_FROM_VEHICLE(char *name, Vehicle veh);
extern void PLAY_FIRE_SOUND_FROM_POSITION(int sound_id, float x, float y, float z);
extern void PLAY_SCRIPTED_CONVERSATION_FRONTEND(boolean play);
extern void PLAY_SOUND(int SoundId, char *SoundName);
extern void PLAY_SOUND_FROM_OBJECT(int sound_id, char *name, Object obj);
extern void PLAY_SOUND_FROM_PED(int SoundId, char *SoundName, Ped ped);
extern void PLAY_SOUND_FROM_POSITION(int sound_id, char *name, float x, float y, float z);
extern void PLAY_SOUND_FROM_VEHICLE(int SoundId, char *SoundName, Vehicle veh);
extern void PLAY_SOUND_FRONTEND(uint sound, char *soundName);
extern void PLAY_STREAM_FROM_OBJECT(Object obj);
extern void PLAY_STREAM_FROM_PED(Ped ped);
extern void PLAY_STREAM_FRONTEND(void);
extern void REGISTER_SCRIPT_WITH_AUDIO(boolean reg);
extern void RELEASE_SCRIPT_CONTROLLED_MICROPHONE(void);
extern void RELEASE_SOUND_ID(uint sound);
extern void RESTART_SCRIPTED_CONVERSATION(void);
extern void RETUNE_RADIO_DOWN(void);
extern void RETUNE_RADIO_TO_STATION_INDEX(uint radioStation);
extern void RETUNE_RADIO_TO_STATION_NAME(char *name);
extern void RETUNE_RADIO_UP(void);
extern void SAY_AMBIENT_SPEECH(Ped ped, char *phraseName, boolean flag0, boolean flag1, int style);
extern void SAY_AMBIENT_SPEECH_WITH_VOICE(Ped ped, char *SpeechName, char *VoiceName, boolean flag0, boolean flag1, int style);
extern void SET_AMBIENT_VOICE_NAME(Ped ped, char *name);
extern void SET_GPS_VOICE_FOR_VEHICLE(Vehicle veh, int VoiceId);
extern void SET_LOUD_VEHICLE_RADIO(Vehicle veh, boolean set);
extern void SET_MOVIE_VOLUME(float volume);
extern void SET_SCRIPT_MIC_LOOK_AT(float x, float y, float z);
extern void SET_SCRIPT_MIC_POSITION(float x, float y, float z);
extern void SET_VARIABLE_ON_SOUND(uint sound, char *varname, float value);
extern void SET_VOICE_ID_FROM_HEAD_COMPONENT(Ped ped, int VoiceId, boolean IsMale);
extern void SKIP_RADIO_FORWARD(void);
extern void SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE(void);
extern void START_END_CREDITS_MUSIC(void);
extern void START_SCRIPT_CONVERSATION(boolean flag0, boolean flag1);
extern void STOP_END_CREDITS_MUSIC(void);
extern void STOP_SOUND(uint sound);
extern void TRIGGER_LOADING_MUSIC_ON_NEXT_FADE(void);
extern void TRIGGER_MISSION_COMPLETE_AUDIO(int id);
extern void UNFREEZE_RADIO_STATION(char *radiostation);
extern void UNPAUSE_RADIO(void);
extern void UNREGISTER_SCRIPT_WITH_AUDIO(void);
//}
//namespace CUTSCENE
//{
extern boolean HAS_CUTSCENE_FINISHED(void);
extern boolean HAS_CUTSCENE_LOADED(void);
extern boolean WAS_CUTSCENE_SKIPPED(void);
extern int GET_CUTSCENE_AUDIO_TIME_MS(void);
extern int GET_CUTSCENE_SECTION_PLAYING(void);
extern int GET_CUTSCENE_TIME(void);
extern void CLEAR_CUTSCENE(void);
extern void CLEAR_NAMED_CUTSCENE(char *name);
extern void INIT_CUTSCENE(char *name);
extern void SET_CUTSCENE_EXTRA_ROOM_POS(float x, float y, float z);
extern void START_CUTSCENE(void);
extern void START_CUTSCENE_NOW(char *name);
extern void STOP_CUTSCENE(void);
extern void STREAM_CUTSCENE(void);
//}
//namespace INTERIOR
//{
extern void ACTIVATE_INTERIOR(Interior interior, boolean unknownTrue);
extern void GET_INTERIOR_AT_COORDS(float x, float y, float z, Interior *pInterior);
extern void GET_INTERIOR_FROM_CAR(Vehicle vehicle, Interior *pInterior);
extern void GET_INTERIOR_FROM_CHAR(Ped ped, Interior *pInterior);
extern void GET_INTERIOR_HEADING(Interior interior, float *pHeading);
extern void GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS(Interior interior, float x, float y, float z, float *pOffset);
//}
//namespace CAM
//{
extern boolean CAM_IS_SPHERE_VISIBLE(Camera camera, float pX, float pY, float pZ, float radius);
extern boolean DOES_CAM_EXIST(Camera camera);
extern boolean DOES_VIEWPORT_EXIST(int viewportid);
extern boolean GET_VIEWPORT_POSITION_OF_COORD(float x, float y, float z, float *vx, float *vy, float *vz);
extern boolean IS_CAM_ACTIVE(Camera camera);
extern boolean IS_CAM_HAPPY(int cam);
extern boolean IS_CAM_INTERPOLATING(void);
extern boolean IS_CAM_PROPAGATING(Camera camera);
extern boolean IS_CAM_SEQUENCE_COMPLETE(int);
extern boolean IS_CAM_SHAKING(void);
extern boolean IS_FOLLOW_VEHICLE_CAM_OFFSET_ACTIVE(void);
extern boolean IS_SPECIFIC_CAM_INTERPOLATING(int cam);
extern boolean IS_VIEWPORT_ACTIVE(int viewportid);
extern int COUNT_SCRIPT_CAMS(void);
extern int COUNT_SCRIPT_CAMS_BY_TYPE_AND_OR_STATE(int type, int, int);
extern int GET_CAM_STATE(int cam);
extern void ACTIVATE_SCRIPTED_CAMS(boolean, boolean);
extern void ACTIVATE_VIEWPORT(int viewportid, boolean activate);
extern void ADD_CAM_SPLINE_NODE(int cam, int camnode);
extern void ATTACH_CAM_TO_OBJECT(int cam, Object obj);
extern void ATTACH_CAM_TO_PED(int cam, Ped ped);
extern void ATTACH_CAM_TO_VEHICLE(int cam, Vehicle veh);
extern void ATTACH_CAM_TO_VIEWPORT(int cam, int viewportid);
extern void BEGIN_CAM_COMMANDS(int *);
extern void CAM_PROCESS(int cam);
extern void CAM_RESTORE(void);
extern void CAM_RESTORE_JUMPCUT(void);
extern void CAM_SEQUENCE_CLOSE(void);
extern void CAM_SEQUENCE_GET_PROGRESS(int, int *progress);
extern void CAM_SEQUENCE_OPEN(int);
extern void CAM_SEQUENCE_REMOVE(int);
extern void CAM_SEQUENCE_START(int);
extern void CAM_SEQUENCE_STOP(int);
extern void CAM_SEQUENCE_WAIT(int cam, int time);
extern void CAM_SET_CINEMATIC(Vehicle veh, boolean set);
extern void CAM_SET_DOLLY_ZOOM_LOCK(int cam, boolean set);
extern void CAM_SET_INTERPOLATION_DETAILS(int);
extern void CAM_SET_INTERP_GRAPH_POS(int cam, int);
extern void CAM_SET_INTERP_GRAPH_ROT(int cam, int val);
extern void CAM_SET_INTERP_STATE_SRC(int cam, int);
extern void CAM_SET_INTERP_STATE_SRC(int, int);
extern void CELL_CAM_ACTIVATE(boolean, boolean);
extern void CELL_CAM_SET_CENTRE_POS(float x, float y);
extern void CELL_CAM_SET_COLOUR_BRIGHTNESS(float, float, float, float);
extern void CELL_CAM_SET_ZOOM(float zoom);
extern void CLEAR_ROOM_FOR_VIEWPORT(int viewportid);
extern void CLONE_CAM(int cam, int *camcopy);
extern void CREATE_CAM(uint camtype_usually14, Camera *camera);
extern void CREATE_HTML_VIEWPORT(int *htmlviewport);
extern void CREATE_VIEWPORT(int *viewport);
extern void DESTROY_ALL_CAMS(void);
extern void DESTROY_ALL_SCRIPT_VIEWPORTS(void);
extern void DESTROY_CAM(Camera camera);
extern void DESTROY_VIEWPORT(int viewportid);
extern void DETACH_CAM_FROM_VIEWPORT(int);
extern void DISABLE_HELI_CHASE_CAM_BONNET_NITRO_FIX(void);
extern void DISABLE_HELI_CHASE_CAM_THIS_UPDATE(void);
extern void DISABLE_INTERMEZZO_CAMS(void);
extern void ENABLE_CAM_COLLISION(int cam, boolean enable);
extern void ENABLE_FOV_LOD_MULTIPLIER(boolean enable);
extern void END_CAM_COMMANDS(int *);
extern void FORCE_GAME_TELESCOPE_CAM(boolean force);
extern void FORCE_NO_CAM_PAUSE(boolean foce);
extern void GET_CAM_FAR_CLIP(int cam, float *clip);
extern void GET_CAM_FAR_DOF(int cam, float *fardof);
extern void GET_CAM_FOV(Camera camera, float *fov);
extern void GET_CAM_MOTION_BLUR(int cam, int *blur);
extern void GET_CAM_NEAR_CLIP(int cam, float *clip);
extern void GET_CAM_NEAR_DOF(int cam, float *dof);
extern void GET_CAM_POS(Camera camera, float *pX, float *pY, float *pZ);
extern void GET_CAM_ROT(Camera camera, float *angleX, float *angleY, float *angleZ);
extern void GET_CINEMATIC_CAM(int *cam);
extern void GET_FOLLOW_VEHICLE_CAM_SUBMODE(int *mode);
extern void GET_FREE_CAM(int *cam);
extern void GET_GAME_CAM(Camera *camera);
extern void GET_GAME_CAM_CHILD(Camera *camera);
extern void GET_GAME_VIEWPORT_ID(int *viewportid);
extern void GET_KEY_FOR_VIEWPORT_IN_ROOM(int viewportid, int *roomkey);
extern void GET_RADAR_VIEWPORT_ID(int *viewport);
extern void GET_ROOT_CAM(Cam *rootcam);
extern void GET_SCREEN_VIEWPORT_ID(int *viewportid);
extern void GET_SCRIPT_CAM(int *cam);
extern void GET_SCRIPT_DRAW_CAM(int *cam);
extern void GET_VIEWPORT_POS_AND_SIZE(int viewportid, float *x, float *y, float *xsize, float *ysize);
extern void HINT_CAM(float x, float y, float z, int, int, int, int);
extern void m(int cam, int heading);	//set cam follow heading , "m" is a corect name
extern void POINT_CAM_AT_CAM(int cam, int camnext);
extern void POINT_CAM_AT_COORD(int cam, float x, float y, float z);
extern void POINT_CAM_AT_OBJECT(int cam, Object obj);
extern void POINT_CAM_AT_PED(int cam, Ped ped);
extern void POINT_CAM_AT_VEHICLE(int cam, Vehicle veh);
extern void POINT_FIXED_CAM(float x, float y, float z, int);
extern void POINT_FIXED_CAM_AT_OBJ(Object obj, int cam);
extern void POINT_FIXED_CAM_AT_PED(Ped ped, int cam);
extern void POINT_FIXED_CAM_AT_POS(float x, float y, float z, int cam);
extern void POINT_FIXED_CAM_AT_VEHICLE(Vehicle veh, int cam);
extern void PROSTITUTE_CAM_ACTIVATE(boolean activate);
extern void RESET_CAM_INTERP_CUSTOM_SPEED_GRAPH(void);
extern void RESET_CAM_SPLINE_CUSTOM_SPEED_GRAPH(void);
extern void SET_BLOCK_CAMERA_TOGGLE(boolean set);
extern void SET_CAMERA_AUTO_SCRIPT_ACTIVATION(boolean set);
extern void SET_CAMERA_BEGIN_CAM_COMMANDS_REQUIRED(boolean set);
extern void SET_CAMERA_CONTROLS_DISABLED_WITH_PLAYER_CONTROLS(boolean value);
extern void SET_CAMERA_STATE(int cam, int state);
extern void SET_CAM_ACTIVE(Camera camera, boolean value);
extern void SET_CAM_ATTACH_OFFSET(int cam, float x, float y, float z);
extern void SET_CAM_ATTACH_OFFSET_IS_RELATIVE(int cam, boolean set);
extern void SET_CAM_BEHIND_PED(Ped ped);
extern void SET_CAM_COMPONENT_SHAKE(int cam, int componentid, int, int time, float x, float y, float z);
extern void SET_CAM_DOF_FOCUSPOINT(int cam, float x, float y, float z, float);
extern void SET_CAM_FAR_CLIP(int cam, float clip);
extern void SET_CAM_FAR_DOF(int cam, float fardof);
extern void SET_CAM_FOV(Camera camera, float fov);
extern void SET_CAM_INHERIT_ROLL_OBJECT(int cam, Object obj);
extern void SET_CAM_INHERIT_ROLL_PED(int cam, Ped ped);
extern void SET_CAM_INHERIT_ROLL_VEHICLE(int cam, Vehicle veh);
extern void SET_CAM_INTERP_CUSTOM_SPEED_GRAPH(float speed);
extern void SET_CAM_INTERP_DETAIL_ROT_STYLE_ANGLES(int);
extern void SET_CAM_INTERP_DETAIL_ROT_STYLE_QUATS(int);
extern void SET_CAM_INTERP_STYLE_CORE(int cam0, int cam1, int cam2, int time, boolean flag);
extern void SET_CAM_INTERP_STYLE_DETAILED(int cam, boolean, boolean, boolean, boolean);
extern void SET_CAM_IN_FRONT_OF_PED(Ped ped);
extern void SET_CAM_MOTION_BLUR(int cam, float blur);
extern void SET_CAM_NAME(int cam, char *camname);
extern void SET_CAM_NEAR_CLIP(int cam, float clip);
extern void SET_CAM_NEAR_DOF(int cam, float dof);
extern void SET_CAM_POINT_DAMPING_PARAMS(int cam, float x, float y, float z);
extern void SET_CAM_POINT_OFFSET(int cam, float x, float y, float z);
extern void SET_CAM_POINT_OFFSET_IS_RELATIVE(int cam, boolean set);
extern void SET_CAM_POS(Camera camera, float pX, float pY, float pZ);
extern void SET_CAM_PROPAGATE(Camera camera, boolean value);
extern void SET_CAM_ROLL(int cam, float roll);
extern void SET_CAM_ROT(Camera camera, float angleX, float angleY, float angleZ);
extern void SET_CAM_SHAKE(int cam, boolean, int shakeval);
extern void SET_CAM_SPLINE_CUSTOM_SPEED_GRAPH(float speed);
extern void SET_CAM_SPLINE_DURATION(int cam, int duration);
extern void SET_CAM_SPLINE_PROGRESS(int cam, float progress);
extern void SET_CAM_SPLINE_SPEED_CONSTANT(int cam, boolean set);
extern void SET_CAM_SPLINE_SPEED_GRAPH(int cam, int);
extern void SET_CAM_TARGET_PED(Camera camera, Ped ped);
extern void SET_CINEMATIC_BUTTON_ENABLED(boolean set);
extern void SET_DANCE_SHAKE_ACTIVE_THIS_UPDATE(float shake);
extern void SET_DANCE_SHAKE_INACTIVE_IMMEDIATELY(void);
extern void SET_DRUNK_CAM(Cam cam, float val, int time);
extern void SET_FIXED_CAM_POS(float x, float y, float z);
extern void SET_FOLLOW_PED_PITCH_LIMIT_DOWN(float pitchdownlim);
extern void SET_FOLLOW_PED_PITCH_LIMIT_UP(float pitchuplim);
extern void SET_FOLLOW_VEHICLE_CAM_OFFSET(boolean, float x, float y, float z);
extern void SET_FOLLOW_VEHICLE_CAM_SUBMODE(int mode);
extern void SET_FOLLOW_VEHICLE_PITCH_LIMIT_DOWN(float pitchdownlim);
extern void SET_FOLLOW_VEHICLE_PITCH_LIMIT_UP(float pitchuplim);
extern void SET_GAME_CAMERA_CONTROLS_ACTIVE(boolean active);
extern void SET_GAME_CAM_HEADING(float heading);
extern void SET_GAME_CAM_PITCH(float pitch);
extern void SET_HINT_ADVANCED_PARAMS(float, float, float, float, boolean);
extern void SET_HINT_FOV(float fov);
extern void SET_HINT_MOVE_IN_DIST(float dist);
extern void SET_HINT_MOVE_IN_DIST_DEFAULT(void);
extern void SET_HINT_TIMES(float, float, float);
extern void SET_HINT_TIMES_DEFAULT(void);
extern void SET_PTFX_CAM_INSIDE_VEHICLE(boolean set);
extern void SET_ROOM_FOR_VIEWPORT_BY_KEY(int viewportid, uint roomkey);
extern void SET_ROOM_FOR_VIEWPORT_BY_NAME(int viewportid, char *roomname);
extern void SET_TELESCOPE_CAM_ANGLE_LIMITS(float, float, float, float, float, float);
extern void SET_VIEWPORT(int viewportid, float, float, float, float);
extern void SET_VIEWPORT_DESTINATION(int viewportid, float x, float y, float z, float, int, int);
extern void SET_VIEWPORT_MIRRORED(int viewportid, boolean set);
extern void SET_VIEWPORT_PRIORITY(int viewportid, int priority);
extern void SET_VIEWPORT_SHAPE(int cam, int shape);
extern void SNAPSHOT_CAM(int cam, int);
extern void UNATTACH_CAM(int cam);
extern void UNINHERIT_CAM_ROLL(int cam);
extern void UNPOINT_CAM(int cam);
//}
//namespace WEAPON
//{
extern boolean GET_AMMO_IN_CLIP(Ped ped, uint weapon, uint *pAmmo);
extern boolean GET_CURRENT_CHAR_WEAPON(Ped ped, uint *pWeapon);
extern boolean GET_MAX_AMMO(Ped ped, uint weapon, uint *pMaxAmmo);
extern boolean HAS_CHAR_BEEN_DAMAGED_BY_WEAPON(Ped ped, uint weapon);
extern boolean HAS_CHAR_GOT_WEAPON(Ped ped, uint weapon);
extern float GET_LOCAL_PLAYER_WEAPON_STAT(int wtype, int wid);
extern ScriptAny SET_AMMO_IN_CLIP(Ped ped, uint weapon, uint ammo);
extern void ADD_AMMO_TO_CHAR(Ped ped, uint weapon, uint amount);
extern void BLOCK_PED_WEAPON_SWITCHING(Ped ped, boolean value);
extern void ENABLE_MAX_AMMO_CAP(boolean enable);
extern void FIRE_SINGLE_BULLET(float x, float y, float z, float targetX, float targetY, float targetZ, uint unknown);
extern void FORCE_CHAR_TO_DROP_WEAPON(Ped ped);
extern void GET_AMMO_IN_CHAR_WEAPON(Ped ped, uint weapon, uint *pAmmo);
extern void GET_CHAR_WEAPON_IN_SLOT(Ped ped, uint slot, uint *pWeapon, uint *pAmmo0, uint *pAmmo1);
extern void GET_MAX_AMMO_IN_CLIP(Ped ped, uint weapon, uint *pMaxAmmo);
extern void GET_WEAPONTYPE_MODEL(int weapontype, uint *model);
extern void GET_WEAPONTYPE_SLOT(int weapon, int *slot);
extern void GIVE_DELAYED_WEAPON_TO_CHAR(Ped ped, int weapon, int delaytime, boolean flag);
extern void GIVE_WEAPON_TO_CHAR(Ped ped, uint weapon, uint ammo, bool Ohidden1Show);
extern void HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE(Ped ped, boolean hide);
extern void REMOVE_ALL_CHAR_WEAPONS(Ped ped);
extern void REMOVE_WEAPON_FROM_CHAR(Ped ped, uint weapon);
extern void RESET_LOCAL_PLAYER_WEAPON_STAT(int wtype, int wid);
extern void SET_CAN_TARGET_CHAR_WITHOUT_LOS(Ped ped, boolean set);
extern void SET_CHAR_AMMO(Ped ped, uint weapon, uint ammo);
extern void SET_CHAR_CURRENT_WEAPON_VISIBLE(Ped ped, boolean visble);
extern void SET_CHAR_WEAPON_SKILL(Ped ped, int skill);
extern void SET_CURRENT_CHAR_WEAPON(Ped ped, uint w, boolean unknownTrue);
extern void SET_ENABLE_NEAR_CLIP_SCAN(boolean set);
extern void SET_ENABLE_RC_DETONATE(boolean set);
extern void SET_ENABLE_RC_DETONATE_ON_CONTACT(boolean set);
extern void SET_HOT_WEAPON_SWAP(boolean set);
//}
//namespace STREAMING
//{
extern boolean HAS_COLLISION_FOR_MODEL_LOADED(uint model);
extern boolean HAS_MODEL_LOADED(uint model);
extern boolean HAS_STREAMED_TXD_LOADED(char *txdName);
extern boolean HAS_THIS_ADDITIONAL_TEXT_LOADED(char *textName, uint textIndex);
extern boolean HAVE_ANIMS_LOADED(char *animName);
extern boolean HAVE_REQUESTED_PATH_NODES_BEEN_LOADED(uint requestId);
extern boolean IS_MODEL_IN_CDIMAGE(uint model);
extern boolean IS_STREAMING_ADDITIONAL_TEXT(uint textIndex);
extern boolean IS_STREAMING_PRIORITY_REQUESTS(void);
extern boolean IS_STREAMING_THIS_ADDITIONAL_TEXT(char *, int, int);
extern boolean PRELOAD_STREAM(char *name);
extern boolean PRELOAD_STREAM_WITH_START_OFFSET(char *StreamName, int StartOffset);
extern boolean REMOVE_NAVMESH_REQUIRED_REGION(float, float);
extern boolean UPDATE_LOAD_SCENE(void);
extern void ADD_ADDITIONAL_POPULATION_MODEL(uint model);
extern void ENABLE_SCENE_STREAMING(boolean enable);
extern void FINISH_STREAMING_REQUEST_LIST(void);
extern void GET_MODEL_DIMENSIONS(uint model, Vector3 *pMinVector, Vector3 *pMaxVector);
extern void LOAD_ALL_OBJECTS_NOW(void);
extern void LOAD_SCENE(float x, float y, float z);
extern void LOAD_SCENE_FOR_ROOM_BY_KEY(int interior, uint roomhash);
extern void MARK_MODEL_AS_NO_LONGER_NEEDED(uint model);
extern void MARK_STREAMED_TXD_AS_NO_LONGER_NEEDED(char *txdName);
extern void REMOVE_ADDITIONAL_POPULATION_MODEL(uint model);
extern void REMOVE_ALL_INACTIVE_GROUPS_FROM_CLEANUP_LIST(void);
extern void REMOVE_ANIMS(char *animName);
extern void REMOVE_IPL(char *iplName);
extern void REMOVE_IPL_DISCREETLY(char *iplname);
extern void REMOVE_TXD(TextureDict txd);
extern void REQUEST_ADDITIONAL_TEXT(char *textName, uint textIndex);
extern void REQUEST_ALL_SLODS_IN_WORLD(void);
extern void REQUEST_ANIMS(char *animName);
extern void REQUEST_CAR_RECORDING(int CarRecId);
extern void REQUEST_COLLISION_AT_POSN(float x, float y, float z);
extern void REQUEST_COLLISION_FOR_MODEL(uint model);
extern void REQUEST_INTERIOR_MODELS(uint model, char *interiorName);
extern void REQUEST_IPL(char *iplName);
extern void REQUEST_MODEL(uint model);
extern void REQUEST_STREAMED_TXD(char *txdName, boolean unknown);
extern void SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(uint model, float x, float y, float z, int state, float);
extern void SET_STREAMING_REQUEST_LIST_TIME(int time);
extern void SET_STREAM_PARAMS(float rolloff, int UnkTime);
extern void SIMULATE_UPDATE_LOAD_SCENE(void);
extern void START_LOAD_SCENE(float x, float y, float z);
extern void START_STREAMING_REQUEST_LIST(char *name);
extern void STOP_STREAM(void);
extern Texture GET_TEXTURE(TextureDict dictionary, char *textureName);
extern Texture GET_TEXTURE_FROM_STREAMED_TXD(char *txdName, char *textureName);
extern TextureDict GET_TXD(char *txdName);
extern TextureDict LOAD_TXD(char *txdName);
//}
//namespace SCRIPT
//{
extern boolean DOES_SCRIPT_EXIST(char *name);
extern boolean HAS_SCRIPT_LOADED(char *scriptName);
extern boolean IS_THREAD_ACTIVE(uint threadId);
extern uint GET_ID_OF_THIS_THREAD(void);
extern uint GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT(char *scriptName);
extern void ALLOCATE_SCRIPT_TO_OBJECT(char *ScriptName, uint model, int unk, float radius, int UnkTime);
extern void ALLOCATE_SCRIPT_TO_RANDOM_PED(char *ScriptName, uint model, int unk, boolean flag);
extern void ALLOW_THIS_SCRIPT_TO_BE_PAUSED(boolean allows);
extern void DESTROY_THREAD(int ScriptHandle);
extern void GET_SCRIPT_RENDERTARGET_RENDER_ID(uint *pRenderId);
extern void MARK_SCRIPT_AS_NO_LONGER_NEEDED(char *scriptName);
extern void REQUEST_SCRIPT(char *scriptName);
extern void SET_INTERP_FROM_GAME_TO_SCRIPT(boolean, int);
extern void SET_INTERP_FROM_SCRIPT_TO_GAME(boolean, int);
extern void SET_SCRIPT_LIMIT_TO_GANG_SIZE(int size);
extern void SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(boolean allow);
extern void TERMINATE_THIS_SCRIPT(void);
extern void THIS_SCRIPT_SHOULD_BE_SAVED(void);
//}
//namespace UI
//{
extern Blip GET_FIRST_BLIP_INFO_ID(uint type);
extern Blip GET_NEXT_BLIP_INFO_ID(uint type);
extern boolean DOES_BLIP_EXIST(Blip blip);
extern boolean DOES_TEXT_LABEL_EXIST(char *gxtentry);
extern boolean HAS_ADDITIONAL_TEXT_LOADED(uint textIndex);
extern boolean IS_BLIP_SHORT_RANGE(Blip blip);
extern boolean IS_STRING_NULL(char *str);
extern boolean IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char *gxtentry);
extern boolean IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED(char *gxtentry, int number);
extern boolean IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED(char *gxtentry, char *str);
extern char * GET_STRING_FROM_STRING(char *str, int startsymb, int endsymb);
extern char * GET_STRING_FROM_TEXT_FILE(char *gxtentry);
extern char *GET_BLIP_NAME(Blip blip);
extern char *GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING(char *literalString, uint chars);
extern char *GET_FIRST_N_CHARACTERS_OF_STRING(char *gxtName, uint chars);
extern char *GET_NTH_INTEGER_IN_STRING(char *gxtName, uint index);
extern char * GET_STRING_FROM_HASH_KEY(uint hash);
extern float GET_STRING_WIDTH_WITH_STRING(char *gxtName, char *literalString);
extern int GET_BLIP_INFO_ID_ROTATION(int blip);
extern int GET_LENGTH_OF_STRING_WITH_THIS_HASH_KEY(uint gxtkey);
extern int GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL_INS_NUM(ScriptAny, ScriptAny, ScriptAny);	//cellphone realted
extern int GET_SIMPLE_BLIP_ID(void);
extern int GET_STRING_WIDTH(char *gxtName);
extern int GET_STRING_WIDTH_WITH_NUMBER(char *gxtName, int number);
extern int GET_STRING_WIDTH_WITH_TEXT_AND_INT(char *gxtname, char *gxtnamenext, int val);
extern int GET_WIDTH_OF_LITERAL_STRING(char *str);
extern int GET_WIDTH_OF_SUBSTRING_GIVEN_TEXT_LABEL(char *gxtname, boolean, ScriptAny, ScriptAny, ScriptAny);	//cellphone realted
extern Object GET_BLIP_INFO_ID_OBJECT_INDEX(Blip blip);
extern Ped GET_BLIP_INFO_ID_PED_INDEX(Blip blip);
extern Pickup GET_BLIP_INFO_ID_PICKUP_INDEX(Blip blip);
extern ScriptAny IS_THIS_PRINT_BEING_DISPLAYED(char *gxtentry, int, int, int, int, int, int, int, int, int, int);
extern uint GET_BLIP_INFO_ID_DISPLAY(Blip blip);
extern uint GET_BLIP_INFO_ID_TYPE(Blip blip);
extern uint GET_BLIP_SPRITE(Blip blip);
extern uint GET_LENGTH_OF_LITERAL_STRING(char *literalString);
extern uint GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL(char *gxtName);
extern Vehicle GET_BLIP_INFO_ID_CAR_INDEX(Blip blip);
extern void ACTIVATE_FRONTEND(void);
extern void ACTIVATE_REPLAY_MENU(void);
extern void ACTIVATE_SAVE_MENU(void);
extern void ADD_BLIP_FOR_CAR(Vehicle vehicle, Blip *pBlip);
extern void ADD_BLIP_FOR_CHAR(Ped ped, Blip *pBlip);
extern void ADD_BLIP_FOR_CONTACT(float x, float y, float z, Blip *pBlip);
extern void ADD_BLIP_FOR_COORD(float x, float y, float z, Blip *pBlip);
extern void ADD_BLIP_FOR_GANG_TERRITORY(float x0, float y0, float x1, float y1, int colour, int *blip);
extern void ADD_BLIP_FOR_OBJECT(Object obj, Blip *pBlip);
extern void ADD_BLIP_FOR_PICKUP(Pickup pickup, Blip *pBlip);
extern void ADD_BLIP_FOR_RADIUS(float x, float y, float z, int type, int *blip);
extern void ADD_BLIP_FOR_WEAPON(float x, float y, float z, int *blip);
extern void ADD_FIRST_N_CHARACTERS_OF_STRING_TO_HTML_SCRIPT_OBJECT(int htmlobj, char *str, int n);
extern void ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(boolean add);
extern void ADD_SIMPLE_BLIP_FOR_PICKUP(Pickup pickup);
extern void ADD_STRING_TO_HTML_SCRIPT_OBJECT(int htmlobj, char *str);
extern void ADD_STRING_TO_NEWS_SCROLLBAR(char *str);
extern void ADD_STRING_WITH_THIS_TEXT_LABEL_TO_PREVIOUS_BRIEF(char *gxtname);
extern void ADD_TICKER_TO_PREVIOUS_BRIEF_WITH_UNDERSCORE(ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);	//used for japanese text correcting
extern void ADD_TO_PREVIOUS_BRIEF(char *gxtentry);
extern void ADD_TO_PREVIOUS_BRIEF_WITH_UNDERSCORE(char *gxtentry);
extern void CHANGE_BLIP_ALPHA(Blip blip, int alpha);
extern void CHANGE_BLIP_COLOUR(Blip blip, ColourIndex colour);
extern void CHANGE_BLIP_DISPLAY(Blip blip, uint display);
extern void CHANGE_BLIP_NAME_FROM_ASCII(Blip blip, char *blipName);
extern void CHANGE_BLIP_NAME_FROM_TEXT_FILE(Blip blip, char *gxtName);
extern void CHANGE_BLIP_NAME_TO_PLAYER_NAME(int blip, int playerid);
extern void CHANGE_BLIP_PRIORITY(Blip blip, uint priority);
extern void CHANGE_BLIP_ROTATION(int blip, int rotation);
extern void CHANGE_BLIP_SCALE(Blip blip, float scale);
extern void CHANGE_BLIP_SPRITE(Blip blip, uint sprite);
extern void CHANGE_BLIP_TEAM_RELEVANCE(int blip, int relevance);
extern void CHANGE_PICKUP_BLIP_COLOUR(int colour);
extern void CHANGE_PICKUP_BLIP_DISPLAY(int display);
extern void CHANGE_PICKUP_BLIP_PRIORITY(int priority);
extern void CHANGE_PICKUP_BLIP_SCALE(float scale);
extern void CHANGE_PICKUP_BLIP_SPRITE(int sprite);
extern void CHANGE_TERRITORY_BLIP_SCALE(int blip, float, float);
extern void CLEAR_ADDITIONAL_TEXT(int textid, boolean);
extern void CLEAR_BRIEF(void);
extern void CLEAR_HELP(void);
extern void CLEAR_NEWS_SCROLLBAR(void);
extern void CLEAR_ONSCREEN_COUNTER(int counterid);
extern void CLEAR_ONSCREEN_TIMER(int timerid);
extern void CLEAR_PRINTS(void);
extern void CLEAR_SMALL_PRINTS(void);
extern void CLEAR_TEXT_LABEL(char *label);
extern void CLEAR_THIS_BIG_PRINT(char *gxtentry);
extern void CLEAR_THIS_PRINT(char *gxtentry);
extern void CLEAR_THIS_PRINT_BIG_NOW(boolean);
extern void CONVERT_THEN_ADD_STRING_TO_HTML_SCRIPT_OBJECT(int htmlobj, char *strgxtkey);
extern void CREATE_TEMPORARY_RADAR_BLIPS_FOR_PICKUPS_IN_AREA(float x, float y, float z, float radius, int bliptype);
extern void DEACTIVATE_FRONTEND(void);
extern void DIM_BLIP(Blip blip, boolean unknownTrue);
extern void DISPLAY_ALTIMETER_THIS_FRAME(void);
extern void DISPLAY_AMMO(boolean display);
extern void DISPLAY_AREA_NAME(boolean display);
extern void DISPLAY_CASH(boolean display);
extern void DISPLAY_FRONTEND_MAP_BLIPS(boolean display);
extern void DISPLAY_GRIME_THIS_FRAME(void);
extern void DISPLAY_HELP_TEXT_THIS_FRAME(char *gxtkey, boolean);
extern void DISPLAY_HUD(boolean display);
extern void DISPLAY_LOADING_THIS_FRAME_WITH_SCRIPT_SPRITES(void);
extern void DISPLAY_NON_MINIGAME_HELP_MESSAGES(boolean);
extern void DISPLAY_NTH_ONSCREEN_COUNTER_WITH_STRING(int, int, int, char *str);
extern void DISPLAY_ONSCREEN_TIMER_WITH_STRING(int timerid, boolean, char *str);
extern void DISPLAY_RADAR(boolean display);
extern void DISPLAY_SNIPER_SCOPE_THIS_FRAME(void);
extern void DISPLAY_TEXT(float x, float y, char *gxtName);
extern void DISPLAY_TEXT_SUBSTRING(ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);	//cellphone realted
extern void DISPLAY_TEXT_WITH_2_NUMBERS(float x, float y, char *gxtName, int number1, int number2);
extern void DISPLAY_TEXT_WITH_3_NUMBERS(float x, float y, char *gxtentry, int, int, int);
extern void DISPLAY_TEXT_WITH_BLIP_NAME(float x, float y, char *str, int blip);
extern void DISPLAY_TEXT_WITH_FLOAT(float x, float y, char *gxtName, float value, uint unknown);
extern void DISPLAY_TEXT_WITH_LITERAL_STRING(float x, float y, char *gxtName, char *literalStr);
extern void DISPLAY_TEXT_WITH_LITERAL_SUBSTRING(ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);	//cellphone realted
extern void DISPLAY_TEXT_WITH_NUMBER(float x, float y, char *gxtName, int value);
extern void DISPLAY_TEXT_WITH_STRING(float x, float y, char *gxtName, char *gxtStringName);
extern void DISPLAY_TEXT_WITH_STRING_AND_INT(float x, float y, char *gxtname, char *gxtnamenext, int val);
extern void DISPLAY_TEXT_WITH_SUBSTRING_GIVEN_HASH_KEY(float x, float y, char *gxtkey, uint gxtkey0);
extern void DISPLAY_TEXT_WITH_TWO_LITERAL_STRINGS(float x, float y, char *gxtName, char *literalStr1, char *literalStr2);
extern void DISPLAY_TEXT_WITH_TWO_STRINGS(float x, float y, char *gxtName, char *gxtStringName1, char *gxtStringName2);
extern void DISPLAY_TEXT_WITH_TWO_SUBSTRINGS_GIVEN_HASH_KEYS(float x, float y, char *gxtkey, uint gxtkey0, uint gxtkey1);
extern void FLASH_BLIP(Blip blip, boolean on);
extern void FLASH_BLIP_ALT(Blip blip, boolean on);
extern void FLASH_RADAR(boolean flash);
extern void FLASH_ROUTE(boolean flash);
extern void FLASH_WEAPON_ICON(boolean on);
extern void GET_BLIP_ALPHA(int blip, int *alpha);
extern void GET_BLIP_COLOUR(Blip blip, ColourIndex *pColour);
extern void GET_BLIP_COORDS(Blip blip, Vector3 *pVector);
extern void HIDE_HELP_TEXT_THIS_FRAME(void);
extern void HIDE_HUD_AND_RADAR_THIS_FRAME(void);
extern void INIT_FRONTEND_HELPER_TEXT(void);
extern void LOAD_ADDITIONAL_TEXT(char *textName, uint textIndex);
extern void LOAD_SETTINGS(void);
extern void LOAD_TEXT_FONT(uint font);
extern void PAUSE_GAME(void);
extern void PRINT(char *gxtName, uint timeMS, boolean enable);
extern void PRINTFLOAT(float value);
extern void PRINTINT(int value);
extern void PRINTNL(void);
extern void PRINTSTRING(char *value);
extern void PRINTVECTOR(float x, float y, float z);
extern void PRINT_BIG(char *gxtName, uint timeMS, boolean enable);
extern void PRINT_BIG_Q(char *gxtentry, int time, int flag);
extern void PRINT_HELP(char *gxtName);
extern void PRINT_HELP_FOREVER(char *gxtName);
extern void PRINT_HELP_FOREVER_WITH_NUMBER(char *gxtName, int value);
extern void PRINT_HELP_FOREVER_WITH_STRING(char *gxtName, char *gxtText);
extern void PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND(char *gxtName, char *gxtText);
extern void PRINT_HELP_FOREVER_WITH_TWO_NUMBERS(char *gxtentry, int, int);
extern void PRINT_HELP_OVER_FRONTEND(char *gxtentry);
extern void PRINT_HELP_WITH_NUMBER(char *gxtName, int value);
extern void PRINT_HELP_WITH_STRING(char *gxtName, char *gxtText);
extern void PRINT_HELP_WITH_STRING_NO_SOUND(char *gxtName, char *gxtText);
extern void PRINT_HELP_WITH_TWO_NUMBERS(char *gxtentry, int, int);
extern void PRINT_NOW(char *gxtName, uint timeMS, boolean enable);
extern void PRINT_STRING_IN_STRING(char *gxtName, char *gxtText, uint timeMS, boolean enable);
extern void PRINT_STRING_IN_STRING_NOW(char *gxtName, char *gxtText, uint timeMS, boolean enable);
extern void PRINT_STRING_WITH_LITERAL_STRING(char *gxtentry, char *string, int time, int flag);
extern void PRINT_STRING_WITH_LITERAL_STRING_NOW(char *gxtName, void *text, uint timeMS, boolean enable);
extern void PRINT_STRING_WITH_SUBSTRING_GIVEN_HASH_KEY_NOW(char *gxtkey0, uint gxtkey1, int time, int style);
extern void PRINT_STRING_WITH_TWO_LITERAL_STRINGS(char *gxtentry, char *string1, char *string2, int time, int flag);
extern void PRINT_STRING_WITH_TWO_LITERAL_STRINGS_NOW(char *gxtentry, char *string1, char *string2, int time, int flag);
extern void PRINT_WITH_2_NUMBERS(char *gxtName, int value1, int value2, uint timeMS, boolean enable);
extern void PRINT_WITH_2_NUMBERS_BIG(char *gxtentry, int, int, int time, int flag);
extern void PRINT_WITH_2_NUMBERS_NOW(char *gxtName, int value1, int value2, uint timeMS, boolean enable);
extern void PRINT_WITH_3_NUMBERS(char *gxtentry, int, int, int, int time, int flag);
extern void PRINT_WITH_3_NUMBERS_NOW(char *gxtentry, int, int, int, int time, int flag);
extern void PRINT_WITH_4_NUMBERS(char *gxtentry, int, int, int, int, int time, int flag);
extern void PRINT_WITH_4_NUMBERS_NOW(char *gxtentry, int, int, int, int, int time, int flag);
extern void PRINT_WITH_5_NUMBERS(char *gxtentry, int, int, int, int, int, int time, int flag);
extern void PRINT_WITH_5_NUMBERS_NOW(char *gxtentry, int, int, int, int, int, int time, int flag);
extern void PRINT_WITH_6_NUMBERS(char *gxtentry, int, int, int, int, int, int, int time, int flag);
extern void PRINT_WITH_6_NUMBERS_NOW(char *gxtentry, int, int, int, int, int, int, int time, int flag);
extern void PRINT_WITH_NUMBER(char *gxtName, int value, uint timeMS, boolean enable);
extern void PRINT_WITH_NUMBER_BIG(char *gxtName, int value, uint timeMS, boolean enable);
extern void PRINT_WITH_NUMBER_NOW(char *gxtName, int value, uint timeMS, boolean enable);
extern void REMOVE_BLIP(Blip blip);
extern void REMOVE_BLIP_AND_CLEAR_INDEX(int blip);
extern void SET_ALWAYS_DISPLAY_WEAPON_PICKUP_MESSAGE(boolean set);
extern void SET_BLIP_AS_FRIENDLY(Blip blip, boolean value);
extern void SET_BLIP_AS_SHORT_RANGE(Blip blip, boolean value);
extern void SET_BLIP_COORDINATES(int blip, float x, float y, float z);
extern void SET_BLIP_MARKER_LONG_DISTANCE(int blip, boolean set);
extern void SET_HIDE_WEAPON_ICON(boolean set);
extern void SET_MESSAGES_WAITING(boolean set);
extern void SET_MESSAGE_FORMATTING(boolean, int, int);
extern void SET_MULTIPLAYER_HUD_CASH(uint cash);
extern void SET_MULTIPLAYER_HUD_TIME(char *str);
extern void SET_ONSCREEN_COUNTER_FLASH_WHEN_FIRST_DISPLAYED(int counterid, boolean flash);
extern void SET_RADAR_AS_INTERIOR_THIS_FRAME(void);
extern void SET_RADAR_SCALE(float scale);
//extern void SET_RADAR_ZOOM(float zoom); //WRONG
extern void SET_RADAR_ZOOM(int zoom); //int is correct
extern void SET_ROUTE(Blip blip, boolean value);
extern void SET_TEXT_BACKGROUND(boolean value);
extern void SET_TEXT_CENTRE(boolean value);
extern void SET_TEXT_CENTRE_WRAPX(float wrapx);
extern void SET_TEXT_COLOUR(uint r, uint g, uint b, uint a);
extern void SET_TEXT_DRAW_BEFORE_FADE(boolean value);
extern void SET_TEXT_DROPSHADOW(boolean displayShadow, uint r, uint g, uint b, uint a);
extern void SET_TEXT_EDGE(boolean displayEdge, uint r, uint g, uint b, uint a);
extern void SET_TEXT_FONT(uint font);
extern void SET_TEXT_INPUT_ACTIVE(boolean set);
extern void SET_TEXT_JUSTIFY(boolean value);
extern void SET_TEXT_LINE_DISPLAY(uint unk1, uint unk2);
extern void SET_TEXT_LINE_HEIGHT_MULT(float lineHeight);
extern void SET_TEXT_PROPORTIONAL(boolean value);
extern void SET_TEXT_RENDER_ID(uint renderId);
extern void SET_TEXT_RIGHT_JUSTIFY(boolean value);
extern void SET_TEXT_SCALE(float w, float h);
extern void SET_TEXT_TO_USE_TEXT_FILE_COLOURS(boolean value);
extern void SET_TEXT_USE_UNDERSCORE(boolean value);
extern void SET_TEXT_VIEWPORT_ID(int id);
extern void SET_TEXT_WRAP(float unk1, float unk2);
extern void SHOW_BLIP_ON_ALTIMETER(int blip, boolean show);
extern void SHOW_SIGNIN_UI(void);
extern void SHOW_UPDATE_STATS(boolean show);
extern void UNLOAD_TEXT_FONT(void);
extern void UNPAUSE_GAME(void);
extern void USE_PREVIOUS_FONT_SETTINGS(void);
//}
//namespace GRAPHICS
//{
extern boolean ARE_WIDESCREEN_BORDERS_ACTIVE(void);
extern boolean GET_IS_HIDEF(void);
extern boolean GET_IS_WIDESCREEN(void);
extern float GET_LINE_HEIGHT(void);
extern int GET_FRAME_COUNT(void);
extern int GET_NUMBER_LINES(float, float, char *);
extern int GET_NUMBER_LINES_WITH_LITERAL_STRINGS(float, float, char *, char *, char *);
extern int GET_NUMBER_LINES_WITH_SUBSTRINGS(float, float, char *, char *, char *);
extern uint CREATE_CHECKPOINT(int type, float x, float y, float z, float, float);
extern void DELETE_CHECKPOINT(uint checkpoint);
extern void DISABLE_END_CREDITS_FADE(void);
extern void DO_SCREEN_FADE_IN(uint timeMS);
extern void DO_SCREEN_FADE_IN_UNHACKED(uint timeMS);
extern void DO_SCREEN_FADE_OUT(uint timeMS);
extern void DO_SCREEN_FADE_OUT_UNHACKED(uint timeMS);
extern void DRAW_CHECKPOINT(float x, float y, float z, float radius, int r, int g, int b);
extern void DRAW_CHECKPOINT_WITH_ALPHA(float x, float y, float z, float radius, int r, int g, int b, int a);
extern void DRAW_COLOURED_CYLINDER(float x, float y, float z, float, float, int r, int g, int b, int a);
extern void DRAW_CORONA(float x, float y, float z, float radius, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void DRAW_CURVED_WINDOW(float, float, float, float, uint alpha);
extern void DRAW_CURVED_WINDOW_NOTEXT(float, float, float, float, int);
extern void DRAW_CURVED_WINDOW_TEXT(float, float, float, int, int, char *, char *, int);
extern void DRAW_FRONTEND_HELPER_TEXT(char *, char *, boolean);
extern void DRAW_LIGHT_WITH_RANGE(float x, float y, float z, int r, int g, int b, float, float);
extern void DRAW_MOVIE(float, float, float, float, float, int r, int g, int b, int a);
extern void DRAW_RECT(float x1, float y1, float x2, float y2, uint r, uint g, uint b, uint a);
extern void DRAW_SPHERE(float x, float y, float z, float radius);
extern void DRAW_SPRITE(uint texture, float, float, float, float, float angle, int r, int g, int b, int a);
extern void DRAW_SPRITE_FRONT_BUFF(float x0, float y0, float x1, float y1, float rotation, int r, int g, int b, int a);
extern void DRAW_SPRITE_PHOTO(float x0, float y0, float x1, float y1, float rotation, int r, int g, int b, int a);
extern void DRAW_SPRITE_WITH_FIXED_ROTATION(uint texture, float, float, float, float, float angle, int r, int g, int b, int a);
extern void DRAW_SPRITE_WITH_UV(uint texture, float, float, float, float, float angle, int r, int g, int b, int a);
extern void DRAW_SPRITE_WITH_UV_COORDS(uint texture, float, float, float, float, float, float, float, float, float angle, int r, int g, int b, int a);
extern void DRAW_TOPLEVEL_SPRITE(uint texture, float, float, float, float, float angle, int r, int g, int b, int a);
extern void DRAW_WINDOW(float, float, float, float, char *str, uint alpha);
extern void DRAW_WINDOW_TEXT(float, float, float, int, char *, int);
extern void ENABLE_DEFERRED_LIGHTING(boolean enable);
extern void ENABLE_END_CREDITS_FADE(void);
extern void ENABLE_SHADOWS(boolean enable);
extern void GET_FRAME_TIME(float *time);
extern void GET_HELP_MESSAGE_BOX_SIZE(float *x, float *y);
extern void GET_PHYSICAL_SCREEN_RESOLUTION(float *x, float *y);
extern void GET_SCREEN_RESOLUTION(float *x, float *y);
extern void GET_TEXTURE_RESOLUTION(uint texture, float *x, float *y);
extern void IMPROVE_LOW_PERFORMANCE_MISSION_PER_FRAME_FLAG(void);
extern void LINE(float x0, float y0, float z0, float x1, float y1, float z1);
extern void PLAY_MOVIE(void);
extern void RELEASE_MOVIE(void);
extern void SET_CURRENT_MOVIE(char *filename);
extern void SET_HELP_MESSAGE_BOX_SIZE(float);
extern void SET_HELP_MESSAGE_BOX_SIZE_F(float size);
extern void SET_INSTANT_WIDESCREEN_BORDERS(boolean set);
extern void SET_MASK(float, float, float, float);
extern void SET_SCREEN_FADE(int viewportid, int, int, boolean, int r, int g, int b, int a, int, float, float);
extern void SET_SPRITES_DRAW_BEFORE_FADE(boolean set);
extern void SET_USE_HIGHDOF(boolean set);
extern void SET_WIDESCREEN_BORDERS(boolean set);
extern void SET_WIDESCREEN_FORMAT(int wideformatid);
extern void STOP_MOVIE(void);
extern void TOGGLE_TOPLEVEL_SPRITE(boolean toggle);
extern void USE_MASK(boolean use);
int ADD_SPHERE(float x, float y, float z, float radius, uint);
void REMOVE_SPHERE(uint sphere);
//}
//namespace STATS
//{
extern boolean CAN_THE_STAT_HAVE_STRING(int stat);
extern boolean GET_STAT_FRONTEND_VISIBILITY(int stat);
extern float GET_FLOAT_STAT(uint stat);
extern int GET_STAT_FRONTEND_DISPLAY_TYPE(int stat);
extern int GET_TOTAL_NUMBER_OF_STATS(void);
extern uint GET_INT_STAT(uint stat);
extern void DECREMENT_FLOAT_STAT(int stat, float val);
extern void DECREMENT_INT_STAT(uint stat, uint amount);
extern void INCREMENT_FLOAT_STAT(int stat, float val);
extern void INCREMENT_FLOAT_STAT_NO_MESSAGE(uint stat, float value);
extern void INCREMENT_INT_STAT(uint stat, uint value);
extern void INCREMENT_INT_STAT_NO_MESSAGE(uint stat, uint value);
extern void PLAYSTATS_CHEAT(int stat);
extern void PLAYSTATS_FLOAT(int, float);
extern void PLAYSTATS_INT(ScriptAny, int);
extern void PLAYSTATS_INT_FLOAT(ScriptAny, int, float);
extern void PLAYSTATS_INT_INT(ScriptAny, int, int);
extern void PLAYSTATS_MISSION_CANCELLED(int);
extern void PLAYSTATS_MISSION_FAILED(int);
extern void PLAYSTATS_MISSION_PASSED(char *);
extern void PLAYSTATS_MISSION_STARTED(int);
extern void REGISTER_FLOAT_STAT(int stat, float val);
extern void REGISTER_INT_STAT(int stat, int val);
extern void REGISTER_STRING_FOR_FRONTEND_STAT(int stat, char *str);
extern void SET_FLOAT_STAT(uint stat, float value);
extern void SET_INT_STAT(uint stat, uint value);
extern void SET_STAT_FRONTEND_ALWAYS_VISIBLE(boolean set);
extern void SET_STAT_FRONTEND_DISPLAY_TYPE(int stat, int type);
extern void SET_STAT_FRONTEND_NEVER_VISIBLE(int stat);
extern void SET_STAT_FRONTEND_VISIBILITY(int stat, boolean set);
extern void SET_STAT_FRONTEND_VISIBLE_AFTER_INCREMENTED(int stat);
//}
//namespace BRAIN
//{
extern boolean IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE(void);
extern void REGISTER_WORLD_POINT_SCRIPT_BRAIN(char *ScriptName, float radius);
extern void SWITCH_OBJECT_BRAINS(int brain, boolean switchstate);
//}
//namespace MOBILE
//{
extern boolean CAN_PHONE_BE_SEEN_ON_SCREEN(void);
extern boolean CODE_WANTS_MOBILE_PHONE_REMOVED(void);
extern boolean CODE_WANTS_MOBILE_PHONE_REMOVED_FOR_WEAPON_SWITCHING(void);
extern boolean GET_MOBILE_PHONE_TASK_SUB_TASK(Ped ped, int *);
extern boolean IS_MOBILE_PHONE_CALL_ONGOING(void);
extern boolean IS_MOBILE_PHONE_RADIO_ACTIVE(void);
extern float GET_MOBILE_PHONE_SCALE(void);
extern int GET_NUMBER_OF_WEB_PAGE_LINKS(int htmlviewport);
extern void ADD_LINE_TO_MOBILE_PHONE_CALL(int id, char *name, char *text);
extern void CREATE_MOBILE_PHONE(int);
extern void DESTROY_MOBILE_PHONE(void);
extern void GET_MOBILE_PHONE_RENDER_ID(uint *pRenderId);
extern void NEW_MOBILE_PHONE_CALL(void);
extern void PREVIEW_RINGTONE(int RingtoneId);
extern void SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(boolean set);
extern void SCRIPT_IS_USING_MOBILE_PHONE(boolean set);
extern void SET_MOBILE_PHONE_POSITION(float x, float y, float z);
extern void SET_MOBILE_PHONE_RADIO_STATE(boolean state);
extern void SET_MOBILE_PHONE_ROTATION(float x, float y, float z);
extern void SET_MOBILE_PHONE_SCALE(float scale);
extern void SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(boolean set);
extern void SET_MOBILE_RING_TYPE(int type);
extern void SET_PHONE_HUD_ITEM(int id, char *gxttext, int);
extern void START_CUSTOM_MOBILE_PHONE_RINGING(int RingtoneId);
extern void START_MOBILE_PHONE_CALL(Ped callfrom, char *callfromvoice, Ped callto, char *calltovoice, boolean flag0, boolean flag1);
extern void START_MOBILE_PHONE_CALLING(void);
extern void START_MOBILE_PHONE_RINGING(void);
extern void START_PED_MOBILE_RINGING(Ped ped, int unk);
extern void STOP_MOBILE_PHONE_RINGING(void);
extern void STOP_PREVIEW_RINGTONE(void);
//}
//namespace INTERNET
//{
extern boolean DOES_WEB_PAGE_EXIST(char *webaddress);
extern char * GET_WEB_PAGE_LINK_HREF(int htmlviewport, int linkid);
extern float GET_WEB_PAGE_HEIGHT(int htmlviewport);
extern int CREATE_HTML_SCRIPT_OBJECT(char *objname);
extern int GET_WEB_PAGE_LINK_AT_POSN(int htmlviewport, float x, float y);
extern void ADD_TO_HTML_SCRIPT_OBJECT(int htmlobj, char *htmlcode);
extern void DELETE_ALL_HTML_SCRIPT_OBJECTS(void);
extern void DELETE_HTML_SCRIPT_OBJECT(int htmlobj);
extern void GET_WEB_PAGE_LINK_POSN(int htmlviewport, int linkid, float *x, float *y);
extern void LOAD_WEB_PAGE(int htmlviewport, char *webaddress);
extern void RELOAD_WEB_PAGE(int htmlviewport);
extern void SET_WEB_PAGE_LINK_ACTIVE(int htmlviewport, int linkid, boolean active);
extern void SET_WEB_PAGE_SCROLL(int htmlviewport, float scroll);
//}
//namespace TIME
//{
extern void CLEAR_TIMECYCLE_MODIFIER(void);
extern void FORCE_TIME_OF_DAY(uint hour, uint minute);
extern void FORWARD_TO_TIME_OF_DAY(uint hour, uint minute);
extern void FREEZE_ONSCREEN_TIMER(boolean freeze);
extern void GET_GAME_TIMER(uint *pTimer);
extern void GET_TIME_OF_DAY(uint *hour, uint *minute);
extern void SET_MOVIE_TIME(float time);
extern void SET_TIMECYCLE_MODIFIER(char *name);
extern void SET_TIMER_BEEP_COUNTDOWN_TIME(int timerid, int beeptime);
extern void SET_TIME_CYCLE_FAR_CLIP_DISABLED(boolean set);
extern void SET_TIME_OF_DAY(uint hour, uint minute);
extern void SET_TIME_OF_NEXT_APPOINTMENT(int time);
extern void SET_TIME_ONE_DAY_BACK(void);
extern void SET_TIME_ONE_DAY_FORWARD(void);
extern void SET_TIME_SCALE(float scale);
//}
//namespace PATHFIND
//{
extern boolean GET_CLOSEST_CAR_NODE(float x, float y, float z, float *pResX, float *pResY, float *pResZ);
extern boolean GET_CLOSEST_CAR_NODE_FAVOUR_DIRECTION(int, float x, float y, float z, float *pX, float *pY, float *pZ, float *heading);
extern boolean GET_CLOSEST_CAR_NODE_WITH_HEADING(float x, float y, float z, float *pResX, float *pResY, float *pResZ, float *pHeading);
extern boolean GET_CLOSEST_MAJOR_CAR_NODE(float x, float y, float z, float *pResX, float *pResY, float *pResZ);
extern boolean GET_CLOSEST_ROAD(float x, float y, float z, float, int, Vector3 *, Vector3 *, float *, float *, float *);
extern boolean GET_NEXT_CLOSEST_CAR_NODE(float x, float y, float z, float *pX, float *pY, float *pZ);
extern boolean GET_NEXT_CLOSEST_CAR_NODE_FAVOUR_DIRECTION(float x, float y, float z, float *pX, float *pY, float *pZ, float *direction);
extern boolean GET_NEXT_CLOSEST_CAR_NODE_WITH_HEADING(float x, float y, float z, float *pX, float *pY, float *pZ, float *heading);
extern boolean GET_NEXT_CLOSEST_CAR_NODE_WITH_HEADING_ON_ISLAND(float x, float y, float z, float *pX, float *pY, float *pZ, float *heading);
extern boolean GET_NTH_CLOSEST_CAR_NODE(float x, float y, float z, int n, float *pX, float *pY, float *pZ);
extern boolean GET_NTH_CLOSEST_CAR_NODE_FAVOUR_DIRECTION(int, float x, float y, float z, int n, float *pX, float *pY, float *pZ, float *direction);
extern boolean GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING(float x, float y, float z, uint nodeNum, float *pResX, float *pResY, float *pResZ, float *pHeading);
extern boolean GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING_ON_ISLAND(float x, float y, float z, uint nodeNum, uint areaId, float *pResX, float *pResY, float *pResZ, float *pHeading, uint *pUnknownMaybeAreaId);
extern boolean GET_NTH_CLOSEST_WATER_NODE_WITH_HEADING(float x, float y, float z, boolean flag0, boolean flag1, Vector3* node, float *heading);
extern boolean GET_RANDOM_CAR_NODE(float x, float y, float z, float radius, boolean flag0, boolean flag1, boolean flag2, float *pX, float *pY, float *pZ, float *heading);
extern boolean GET_RANDOM_CAR_NODE_INCLUDE_SWITCHED_OFF_NODES(float x, float y, float z, float radius, boolean flag0, boolean flag1, boolean flag2, float *pX, float *pY, float *pZ, float *heading);
extern boolean GET_RANDOM_WATER_NODE(float x, float y, float z, float radius, boolean flag0, boolean flag1, boolean flag2, boolean flag3, float *pX, float *pY, float *pZ, float *heading);
extern boolean GET_SAFE_POSITION_FOR_CHAR(float x, float y, float z, boolean unknownTrue, float *pSafeX, float *pSafeY, float *pSafeZ);
extern float CALCULATE_TRAVEL_DISTANCE_BETWEEN_NODES(float x0, float y0, float z0, float x1, float y1, float z1);
extern int ADD_NAVMESH_REQUIRED_REGION(float x, float y, float z);
extern uint LOAD_ALL_PATH_NODES(boolean value);
extern void GENERATE_DIRECTIONS(float x, float y, float z, int *direction, Vector3 *);
extern void GET_RANDOM_CAR_BACK_BUMPER_IN_SPHERE(float x, float y, float z, float radius, int, int, Vehicle *veh);
extern void GET_RANDOM_CAR_FRONT_BUMPER_IN_SPHERE_NO_SAVE(float x, float y, float z, float radius, boolean flag0, boolean flag1, int *handle, boolean flag2);
extern void GET_RANDOM_CAR_IN_SPHERE(float x, float y, float z, float radius, uint model, int unk, Car *car);
extern void GET_RANDOM_CAR_IN_SPHERE_NO_SAVE(float x, float y, float z, float radius, uint model, boolean flag, Car *car);
extern void GET_RANDOM_CAR_MODEL_IN_MEMORY(boolean MustIncludeSpecialModels, uint *pHash, int *pErrorId /*-1 if error , 0 if no error*/);
extern void GET_RANDOM_CAR_OF_TYPE_IN_ANGLED_AREA_NO_SAVE(float, float, float, float, float, uint type, Car *car);
extern void GET_RANDOM_CAR_OF_TYPE_IN_AREA_NO_SAVE(float x0, float y0, float x1, float y1, uint model, Car *car);
extern void GET_RANDOM_CHAR_IN_AREA_OFFSET_NO_SAVE(float x, float y, float z, float sx, float sy, float sz, Ped *pPed);
extern void LOAD_PATH_NODES_IN_AREA(float x, float y, float z, float radius);
extern void MARK_ROAD_NODE_AS_DONT_WANDER(float x, float y, float z);
extern void RELEASE_PATH_NODES(void);
extern void SWITCH_PED_PATHS_OFF(float x0, float y0, float z0, float x1, float y1, float z1);
extern void SWITCH_PED_PATHS_ON(float x0, float y0, float z0, float x1, float y1, float z1);
extern void SWITCH_PED_ROADS_BACK_TO_ORIGINAL(float x0, float y0, float z0, float x1, float y1, float z1);
extern void SWITCH_ROADS_BACK_TO_ORIGINAL(float x0, float y0, float z0, float x1, float y1, float z1);
extern void SWITCH_ROADS_OFF(float x0, float y0, float z0, float x1, float y1, float z1);
extern void SWITCH_ROADS_ON(float x0, float y0, float z0, float x1, float y1, float z1);
extern void UNMARK_ALL_ROAD_NODES_AS_DONT_WANDER(void);
//}
//namespace CONTROLS
//{
extern boolean GET_ASCII_PRESSED(int key, int *);
extern boolean GET_BUFFERED_ASCII(int key, int *);
extern boolean GET_PAD_PITCH_ROLL(uint padIndex, float *pPitch, float *pRoll);
extern  boolean HAS_RELOADED_WITH_MOTION_CONTROL(int ukn0, bool *ukn);
extern boolean IS_BUTTON_JUST_PRESSED(uint padIndex, uint button);
extern boolean IS_BUTTON_PRESSED(uint padIndex, uint button);
extern boolean IS_CONTROL_JUST_PRESSED(int, int controlid);
extern boolean IS_CONTROL_PRESSED(int, int controlid);
extern boolean IS_GAME_KEYBOARD_KEY_JUST_PRESSED(int key);
extern boolean IS_GAME_KEYBOARD_KEY_PRESSED(int key);
extern boolean IS_GAME_KEYBOARD_NAV_DOWN_PRESSED(boolean);
extern boolean IS_GAME_KEYBOARD_NAV_LEFT_PRESSED(boolean);
extern boolean IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED(boolean);
extern boolean IS_GAME_KEYBOARD_NAV_UP_PRESSED(boolean);
extern boolean IS_IN_CAR_FIRE_BUTTON_PRESSED(void);
extern boolean IS_KEYBOARD_KEY_JUST_PRESSED(int key);
extern boolean IS_KEYBOARD_KEY_PRESSED(int key);
extern boolean IS_MOUSE_BUTTON_JUST_PRESSED(int);
extern boolean IS_MOUSE_BUTTON_PRESSED(int);
extern boolean IS_MOUSE_USING_VERTICAL_INVERSION(void);
extern boolean IS_NUMLOCK_ENABLED(void);
extern boolean IS_PC_USING_JOYPAD(void);
extern boolean IS_USING_CONTROLLER(void);
extern boolean USING_STANDARD_CONTROLS(void);
extern float GET_MOUSE_SENSITIVITY(void);
extern int GET_ACCEPT_BUTTON(void);
extern int GET_ASCII_JUST_PRESSED(int key, int);
extern int GET_CONTROL_VALUE(int, int controlid);
extern void CLEAR_SHAKE_PLAYERPAD_WHEN_CONTROLLER_DISABLED(void);
extern void GET_KEYBOARD_MOVE_INPUT(int *, int *);
extern void GET_MOUSE_INPUT(int *x, int *y);
extern void GET_MOUSE_POSITION(int *x, int *y);
extern void GET_MOUSE_WHEEL(int *);
extern void GET_PAD_STATE(int, int, int *);
extern void GET_POSITION_OF_ANALOGUE_STICKS(uint padIndex, int *pLeftX, int *pLeftY, int *pRightX, int *pRightY);
extern void SHAKE_PAD(int, int, int);
extern void SHAKE_PAD_IN_CUTSCENE(int, int, int);
extern void SHAKE_PLAYERPAD_WHEN_CONTROLLER_DISABLED(void);
//}
//namespace FIRE
//{
extern boolean DOES_SCRIPT_FIRE_EXIST(int fire);
extern boolean IS_EXPLOSION_IN_AREA(int expnum, float x0, float y0, float z0, float x1, float y1, float z1);
extern boolean IS_EXPLOSION_IN_SPHERE(int expnum, float x, float y, float z, float radius);
extern boolean IS_SCRIPT_FIRE_EXTINGUISHED(FireId fire);
extern FireId START_CAR_FIRE(Vehicle vehicle);
extern FireId START_CHAR_FIRE(Ped ped);
extern FireId START_SCRIPT_FIRE(float x, float y, float z, uint numGenerationsAllowed, uint strength);
extern int GET_NUMBER_OF_FIRES_IN_AREA(float x0, float y0, float z0, float x1, float y1, float z1);
extern ScriptAny START_OBJECT_FIRE(Object obj);
extern uint GET_NUMBER_OF_FIRES_IN_RANGE(float x, float y, float z, float radius);
extern void ADD_EXPLOSION(float x, float y, float z, ExplosionType exptype, float radius, bool playsound, bool novisual, float camshake);
extern void EXPLODE_CAR(Vehicle vehicle, boolean unknownTrue, boolean unknownFalse);
extern void EXPLODE_CAR_IN_CUTSCENE(Car car, boolean explode);
extern void EXPLODE_CAR_IN_CUTSCENE_SHAKE_AND_BIT(Car car, boolean flag0, boolean flag1, boolean flag2);
extern void EXTINGUISH_CAR_FIRE(Vehicle vehicle);
extern void EXTINGUISH_FIRE_AT_POINT(float x, float y, float z, float radius);
extern void EXTINGUISH_OBJECT_FIRE(Object obj);
extern void GET_SCRIPT_FIRE_COORDS(int fire, float *x, float *y, float *z);
extern void REMOVE_SCRIPT_FIRE(FireId fire);
extern void SET_MAX_FIRE_GENERATIONS(int max);
//}
//namespace DECISIONEVENT
//{
extern boolean DOES_DECISION_MAKER_EXIST(DecisionMaker dm);
extern void ADD_CHAR_DECISION_MAKER_EVENT_RESPONSE(DecisionMaker dm, uint eventid, uint responseid, float param1, float param2, float param3, float param4, uint unknown0_1, uint unknown1_1);
extern void ADD_COMBAT_DECISION_MAKER_EVENT_RESPONSE(DecisionMaker dm, uint eventid, uint responseid, float param1, float param2, float param3, float param4, uint unknown0_1, uint unknown1_1);
extern void ADD_GROUP_DECISION_MAKER_EVENT_RESPONSE(DecisionMaker dm, uint eventid, uint responseid, float param1, float param2, float param3, float param4, uint unknown0_1, uint unknown1_1);
extern void CLEAR_CHAR_DECISION_MAKER_EVENT_RESPONSE(DecisionMaker dm, uint eventid);
extern void CLEAR_COMBAT_DECISION_MAKER_EVENT_RESPONSE(DecisionMaker dm, uint eventid);
extern void CLEAR_GROUP_DECISION_MAKER_EVENT_RESPONSE(DecisionMaker dm, uint eventid);
extern void COPY_CHAR_DECISION_MAKER(uint type, DecisionMaker *pDM);
extern void COPY_COMBAT_DECISION_MAKER(uint type, DecisionMaker *pDM);
extern void COPY_GROUP_CHAR_DECISION_MAKER(uint type, DecisionMaker *pDM);
extern void COPY_GROUP_COMBAT_DECISION_MAKER(uint type, DecisionMaker *pDM);
extern void COPY_SHARED_CHAR_DECISION_MAKER(uint type, DecisionMaker *pDM);
extern void COPY_SHARED_COMBAT_DECISION_MAKER(uint type, DecisionMaker *pDM);
extern void LOAD_CHAR_DECISION_MAKER(uint type, DecisionMaker *pDM);
extern void LOAD_COMBAT_DECISION_MAKER(uint type, DecisionMaker *pDM);
extern void LOAD_GROUP_DECISION_MAKER(uint type, DecisionMaker *pDM);
extern void REMOVE_DECISION_MAKER(DecisionMaker dm);
extern void SET_ADVANCED_BOOL_IN_DECISION_MAKER(int dm, int, int, int, boolean);
extern void SET_CHAR_DECISION_MAKER(Ped ped, DecisionMaker dm);
extern void SET_CHAR_DECISION_MAKER_TO_DEFAULT(Ped ped);
extern void SET_COMBAT_DECISION_MAKER(Ped ped, DecisionMaker dm);
extern void SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET(DecisionMaker dm, boolean value);
extern void SET_DECISION_MAKER_ATTRIBUTE_CAUTION(DecisionMaker dm, uint value);
extern void SET_DECISION_MAKER_ATTRIBUTE_FIRE_RATE(DecisionMaker dm, uint value);
extern void SET_DECISION_MAKER_ATTRIBUTE_LOW_HEALTH(DecisionMaker dm, uint value);
extern void SET_DECISION_MAKER_ATTRIBUTE_MOVEMENT_STYLE(DecisionMaker dm, uint value);
extern void SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE(DecisionMaker dm, uint value);
extern void SET_DECISION_MAKER_ATTRIBUTE_RETREATING_BEHAVIOUR(DecisionMaker dm, uint value);
extern void SET_DECISION_MAKER_ATTRIBUTE_SIGHT_RANGE(DecisionMaker dm, uint value);
extern void SET_DECISION_MAKER_ATTRIBUTE_STANDING_STYLE(DecisionMaker dm, uint value);
extern void SET_DECISION_MAKER_ATTRIBUTE_TARGET_INJURED_REACTION(DecisionMaker dm, uint value);
extern void SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE(DecisionMaker dm, uint value);
extern void SET_DECISION_MAKER_ATTRIBUTE_TEAMWORK(DecisionMaker dm, uint value);
extern void SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY(DecisionMaker dm, uint value);
extern void SET_GROUP_CHAR_DECISION_MAKER(Group group, DecisionMaker dm);
extern void SET_GROUP_COMBAT_DECISION_MAKER(Group group, DecisionMaker dm);
extern void SET_GROUP_DECISION_MAKER(Group group, DecisionMaker dm);
extern void TASK_SET_CHAR_DECISION_MAKER(Ped ped, DecisionMaker dm);
extern void TASK_SET_COMBAT_DECISION_MAKER(Ped ped, DecisionMaker dm);
//}
//namespace ZONE
//{
extern boolean IS_CHAR_IN_ZONE(Ped ped, char *zonename);
extern char * GET_NAME_OF_INFO_ZONE(float x, float y, float z);
extern char * GET_NAME_OF_ZONE(float x, float y, float z);
extern int GET_CURRENT_POPULATION_ZONE_TYPE(void);
extern int GET_CURRENT_ZONE_SCUMMINESS(void);
extern void ACTIVATE_SCRIPT_POPULATION_ZONE(void);
extern void DEACTIVATE_SCRIPT_POPULATION_ZONE(void);
extern void FIND_PRIMARY_POPULATION_ZONE_GROUP(int *groupparam0, int *groupparam1);
extern void SET_ZONE_POPULATION_TYPE(char *zone, int poptype);
extern void SET_ZONE_SCUMMINESS(char *zone, int scumminess);
extern void SPECIFY_SCRIPT_POPULATION_ZONE_AREA(int, int, int, int, int, int);	//all params are WORDs
extern void SPECIFY_SCRIPT_POPULATION_ZONE_GROUPS(int, int, int, int, int);
extern void SPECIFY_SCRIPT_POPULATION_ZONE_NUM_CARS(int num);
extern void SPECIFY_SCRIPT_POPULATION_ZONE_NUM_PARKED_CARS(int num);
extern void SPECIFY_SCRIPT_POPULATION_ZONE_NUM_PEDS(int num);
extern void SPECIFY_SCRIPT_POPULATION_ZONE_NUM_SCENARIO_PEDS(int num);
//}
//namespace WATER
//{
extern boolean GET_WATER_HEIGHT(float x, float y, float z, float *pheight);
extern boolean GET_WATER_HEIGHT_NO_WAVES(float x, float y, float z, float *height);
extern boolean SYNCH_RECORDING_WITH_WATER(void);
//}
//namespace MENU
//{
extern int GET_MENU_ITEM_ACCEPTED(int menuid);
extern int GET_MENU_ITEM_SELECTED(int menuid);
extern void ACTIVATE_MENU_ITEM(int menuid, int item, boolean activate);
extern void CREATE_MENU(char *gxtentry, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, int *menuid);
extern void DELETE_MENU(int menuid);
extern void GET_MENU_POSITION(int menuid, float *x, float *y);
extern void HIGHLIGHT_MENU_ITEM(int menuid, int item, boolean highlight);
extern void SET_MENU_COLUMN(int menuid, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void SET_MENU_COLUMN_ORIENTATION(int menuid, int column, int orientation);
extern void SET_MENU_COLUMN_WIDTH(int menuid, int column, float width);
extern void SET_MENU_ITEM_WITH_2_NUMBERS(int menuid, int item, int, char *gxtkey, int number0, int number1);
extern void SET_MENU_ITEM_WITH_NUMBER(int menuid, int item, int, char *gxtkey, int number);
extern void SET_SELECTED_MENU_ITEM(int menuid, int item);
//}
//namespace NETWORK
//{
extern bool IS_NETWORK_PLAYER_ACTIVE(Player playerIndex);
extern boolean CAN_REGISTER_MISSION_OBJECT(void);
extern boolean CAN_REGISTER_MISSION_PED(void);
extern boolean CAN_REGISTER_MISSION_VEHICLE(void);
extern boolean DOES_GAME_CODE_WANT_TO_LEAVE_NETWORK_SESSION(void);
extern boolean DOES_OBJECT_EXIST_WITH_NETWORK_ID(int netid);
extern boolean DOES_PED_EXIST_WITH_NETWORK_ID(int netid);
extern boolean DOES_PLAYER_HAVE_CONTROL_OF_NETWORK_ID(int player, int id);
extern boolean DOES_VEHICLE_EXIST_WITH_NETWORK_ID(int nedid);
extern boolean GET_CELLPHONE_RANKED(void);
extern boolean GET_FILTER_MENU_ON(void);
extern boolean GET_GFWL_IS_RETURNING_TO_SINGLE_PLAYER(void);
extern boolean GET_HOST_MATCH_ON(void);
extern boolean GET_NETWORK_JOIN_FAIL(void);
extern boolean GET_RETURN_TO_FILTER_MENU(void);
extern boolean HAS_CONTROL_OF_NETWORK_ID(int netid);
extern boolean HAS_GAMER_CHANGED_NETWORK_MODEL_SETTINGS(void);
extern boolean HAS_NETWORK_PLAYER_LEFT_GAME(Player playerIndex);
extern boolean IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(ScriptAny);
extern boolean IS_NETWORK_GAME_PENDING(void);
extern boolean IS_NETWORK_GAME_RUNNING(void);
extern boolean IS_NETWORK_SESSION(void);
extern boolean IS_OBJECT_REASSIGNMENT_IN_PROGRESS(void);
extern boolean IS_OUR_PLAYER_HIGHER_PRIORITY_FOR_CAR_GENERATION(Player playerIndex);
extern boolean IS_PARTY_MODE(void);
extern boolean IS_THIS_MACHINE_THE_SERVER(void);
extern boolean LOCAL_PLAYER_IS_READY_TO_START_PLAYING(void);
extern boolean NETWORK_ALL_PARTY_MEMBERS_PRESENT(void);
extern boolean NETWORK_AM_I_BLOCKED_BY_PLAYER(Player playerIndex);
extern boolean NETWORK_AM_I_MUTED_BY_PLAYER(Player playerIndex);
extern boolean NETWORK_CHANGE_GAME_MODE_PENDING(void);
extern boolean NETWORK_CHANGE_GAME_MODE_SUCCEEDED(void);
extern boolean NETWORK_CHECK_INVITE_ARRIVAL(void);
extern boolean NETWORK_DID_INVITE_FRIEND(char *friendname);//NETWORK_GET_FRIEND_NAME(I)
extern boolean NETWORK_END_SESSION_PENDING(void);
extern boolean NETWORK_FIND_GAME_PENDING(void);
extern boolean NETWORK_GET_LAN_SESSION(void);
extern boolean NETWORK_HAS_STRICT_NAT(void);
extern boolean NETWORK_HAVE_ACCEPTED_INVITE(void);
extern boolean NETWORK_HAVE_ONLINE_PRIVILEGES(void);
extern boolean NETWORK_HAVE_SUMMONS(void);
extern boolean NETWORK_HOST_GAME_E1(int Gamemode, int Ranked, int Slots, int Private, int Episode, int MaxTeams);
extern boolean NETWORK_HOST_GAME_PENDING(void);
extern boolean NETWORK_HOST_GAME_SUCCEEDED(void);
extern boolean NETWORK_HOST_RENDEZVOUS_E1(int Gamemode, int Slots, int Episode);
extern boolean NETWORK_IS_BEING_KICKED(void);
extern boolean NETWORK_IS_COMMON_EPISODE(int id);
extern boolean NETWORK_IS_FIND_RESULT_UPDATED(int ukn0);
extern boolean NETWORK_IS_FIND_RESULT_VALID(int);
extern boolean NETWORK_IS_FRIEND_IN_SAME_TITLE(char* friendname);
extern boolean NETWORK_IS_GAME_RANKED(void);
extern boolean NETWORK_IS_INVITEE_ONLINE(void);
extern boolean NETWORK_IS_NETWORK_AVAILABLE(void);
extern boolean NETWORK_IS_OPERATION_PENDING(void);
extern boolean NETWORK_IS_PLAYER_BLOCKED_BY_ME(Player playerIndex);
extern boolean NETWORK_IS_PLAYER_MUTED_BY_ME(Player playerIndex);
extern boolean NETWORK_IS_PLAYER_TALKING(Player playerIndex);
extern boolean NETWORK_IS_PLAYER_TYPING(Player playerIndex);
extern boolean NETWORK_IS_RENDEZVOUS(void);
extern boolean NETWORK_IS_RENDEZVOUS_HOST(void);
extern boolean NETWORK_IS_ROCKSTART_SESSION_ID_VALID(void);
extern boolean NETWORK_IS_SESSION_ADVERTISED(void);
extern boolean NETWORK_IS_SESSION_ADVERTISE(void);	//1.0.7 only
extern boolean NETWORK_IS_SESSION_INVITABLE(void);
extern boolean NETWORK_IS_SESSION_STARTED(void);
extern boolean NETWORK_IS_TVT(void);
extern boolean NETWORK_JOIN_GAME_PENDING(void);
extern boolean NETWORK_JOIN_GAME_SUCCEEDED(void);
extern boolean NETWORK_JOIN_SUMMONS(void);
extern boolean NETWORK_LEAVE_GAME_PENDING(void);
extern boolean NETWORK_PLAYER_HAS_COMM_PRIVS(void);
extern boolean NETWORK_PLAYER_HAS_DIED_RECENTLY(Player playerIndex);
extern boolean NETWORK_PLAYER_HAS_HEADSET(ScriptAny);
extern boolean NETWORK_PLAYER_HAS_KEYBOARD(Player playerIndex);
extern boolean NETWORK_RESULT_MATCHES_SEARCH_CRITERIA(int result);
extern boolean NETWORK_RETURN_TO_RENDEZVOUS(void);
extern boolean NETWORK_RETURN_TO_RENDEZVOUS_PENDING(void);
extern boolean NETWORK_RETURN_TO_RENDEZVOUS_SUCCEEDED(void);
extern boolean NETWORK_START_SESSION_PENDING(void);
extern boolean NETWORK_START_SESSION_SUCCEEDED(void);
extern boolean NETWORK_STRING_VERIFY_PENDING(void);
extern boolean NETWORK_STRING_VERIFY_SUCCEEDED(void);
extern boolean PLAYER_WANTS_TO_JOIN_NETWORK_GAME(int);
extern boolean REQUEST_CONTROL_OF_NETWORK_ID(int netid);
extern char * NETWORK_GET_HOST_SERVER_NAME(int host);
extern char *NETWORK_GET_FRIEND_NAME(int id);//for (I < NETWORK_GET_FRIEND_COUNT()) if (NETWORK_IS_FRIEND_ONLINE(NETWORK_GET_FRIEND_NAME(I))
extern char *NETWORK_GET_NEXT_TEXT_CHAT(void);
extern char *NETWORK_GET_UNACCEPTED_INVITER_NAME(int inviteindex);
extern float GET_ONLINE_SCORE(int);	//147, 148, or 149
extern int FIND_NETWORK_KILLER_OF_PLAYER(Player playerIndex);
extern int GET_DESTROYER_OF_NETWORK_ID(int network_id, int *id);
//GET_DESTROYER_OF_NETWORK_ID(GET_NETWORK_ID_FROM_PED(PLAYER_CHAR(playerindexKilled)),&destroyer);
extern int GET_GAMER_NETWORK_SCORE(Player playerIndex, int, int);
extern int GET_NO_OF_PLAYERS_IN_TEAM(int team);
extern int GET_ONLINE_LAN(void);//idk what is returned
extern int GET_PLAYER_RANK_LEVEL_DURING_MP(Player playerIndex);
extern int GET_PLAYER_TEAM(int Player);
extern int HOW_LONG_HAS_NETWORK_PLAYER_BEEN_DEAD_FOR(Player playerIndex);
extern int MP_GET_AMOUNT_OF_ANCHOR_POINTS(Ped ped, int id);
extern int MP_GET_AMOUNT_OF_VARIATION_COMPONENT(Ped ped, int componentid);
extern int MP_GET_PREFERENCE_VALUE(int prefid);
extern int MP_GET_PROP_SETUP(Ped ped, int ukn0, int ukn1, int ukn2, int ukn3);
extern int MP_GET_VARIATION_SETUP(Ped ped, int, int, int, int);
extern int NETWORK_ACCEPT_INVITE(int inviteIndex);//if (COMPARE_STRING( NETWORK_GET_FRIEND_NAME( uParam0 ), NETWORK_GET_UNACCEPTED_INVITER_NAME( Result ) )) return result;
extern int NETWORK_GET_FRIEND_COUNT(void);
extern int NETWORK_GET_GAME_MODE(void);
extern int NETWORK_GET_HOST_AVERAGE_RANK(int host);
extern int NETWORK_GET_HOST_LATENCY(int host);
extern int NETWORK_GET_HOST_MATCH_PROGRESS(int host);
extern int NETWORK_GET_NUMBER_OF_GAMES(void);
extern int NETWORK_GET_NUM_OPEN_PUBLIC_SLOTS(void);
extern int NETWORK_GET_NUM_PARTY_MEMBERS(void);
extern int NETWORK_GET_NUM_PLAYERS_MET(void);
extern int NETWORK_GET_NUM_UNACCEPTED_INVITES(void);
extern int NETWORK_GET_NUM_UNFILLED_RESERVATIONS(void);
extern int NETWORK_GET_PLAYER_ID_OF_NEXT_TEXT_CHAT(void);
extern int NETWORK_GET_RENDEZVOUS_HOST_PLAYER_ID(void);
extern int NETWORK_GET_UNACCEPTED_INVITE_EPISODE(int invite_id);
extern int NETWORK_SET_SERVER_NAME(char *name);
extern int STORE_DAMAGE_TRACKER_FOR_NETWORK_PLAYER(Player playerIndex, int ukn57, ScriptAny);
extern ScriptAny GET_SERVER_ID(void);
extern ScriptAny NETWORK_GET_SERVER_NAME(void);
extern bool NETWORK_IS_FRIEND_ONLINE(char* friendname);
extern uint GET_HOST_ID(void);
extern uint GET_LOCAL_GAMERLEVEL_FROM_PROFILESETTINGS(void);
extern uint GET_NUMBER_OF_PLAYERS(void);
extern uint GET_PLAYER_COLOUR(int Player);
extern uint NETWORK_GET_MAX_PRIVATE_SLOTS(void);
extern uint NETWORK_GET_MAX_SLOTS(void);
extern void ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(ScriptAny, ScriptAny);
extern void ACTIVATE_NETWORK_SETTINGS_MENU(void);
extern void ADD_GROUP_TO_NETWORK_RESTART_NODE_GROUP_LIST(int);
extern void ADD_SPAWN_BLOCKING_AREA(ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void ADD_SPAWN_BLOCKING_DISC(ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void CLEAR_NETWORK_RESTART_NODE_GROUP_LIST(void);
extern void CLEAR_SCRIPT_ARRAY_FROM_SCRATCHPAD(int);
extern void DEACTIVATE_NETWORK_SETTINGS_MENU(void);
extern void DISPLAY_PLAYER_NAMES(ScriptAny);
extern void FIND_NETWORK_RESTART_POINT(ScriptAny, ScriptAny, ScriptAny);
extern void FLUSH_ALL_SPAWN_BLOCKING_AREAS(void);
extern void GET_COORDINATES_FOR_NETWORK_RESTART_NODE(float *X, float *Y, float *Z); //probably respawn coordinates
extern void GET_NETWORK_ID_FROM_OBJECT(Object obj, int *netid);
//extern int GET_PLAYER_ID_FOR_THIS_PED(Ped ped);
extern void GET_NETWORK_ID_FROM_VEHICLE(Vehicle vehicle, int *netid);
extern void GET_NETWORK_TIMER(int);
extern void GET_OBJECT_FROM_NETWORK_ID(int netid, Object *obj);
extern void GET_PED_FROM_NETWORK_ID(int netid, Ped *ped);
extern void GET_PLAYER_RGB_COLOUR(int Player, int *r, int *g, int *b);
extern void GET_SPAWN_COORDINATES_FOR_CAR_NODE(ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void GET_TEAM_RGB_COLOUR(int team, int *R, int *G, int *B);
extern void GET_VEHICLE_FROM_NETWORK_ID(int netid,Vehicle *vehicle);
extern void LAUNCH_LOCAL_PLAYER_IN_NETWORK_GAME(void);
extern void MP_SET_PREFERENCE_VALUE(int prefid, int value);
extern void NETWORK_ADVERTISE_SESSION(bool advertise);
extern void NETWORK_CHANGE_EXTENDED_GAME_CONFIG(ScriptAny);
extern void NETWORK_CLEAR_INVITE_ARRIVAL(void);
extern void NETWORK_CLEAR_SUMMONS(void);
extern void NETWORK_END_SESSION(void);
extern void NETWORK_EXPAND_TO_32_PLAYERS(void);
extern void NETWORK_FIND_GAME(int GameMode, int ukn0, int ukn1, int ukn2);
extern void NETWORK_FINISH_EXTENDED_SEARCH(void);
extern void NETWORK_GET_FIND_RESULT(ScriptAny, ScriptAny);
//extern void NETWORK_INVITE_FRIEND(char *friendname, char *ukn);//NETWORK_INVITE_FRIEND(NETWORK_GET_FRIEND_NAME(I), "");
extern bool NETWORK_INVITE_FRIEND(char *friendname); //Nathan waz ere
//extern void NETWORK_KICK_PLAYER(Player playerIndex, bool value);
extern void NETWORK_KICK_PLAYER(int playerIndex); //Nathan waz ere
extern void NETWORK_LEAVE_GAME(void);
extern void NETWORK_LIMIT_TO_16_PLAYERS(void);
extern void NETWORK_SET_FRIENDLY_FIRE_OPTION(bool friendly_fire);
extern void NETWORK_SET_HEALTH_RETICULE_OPTION(bool);
extern void NETWORK_SET_LAN_SESSION(ScriptAny);
extern void NETWORK_SET_LOCAL_PLAYER_IS_TYPING(Player playerIndex);
extern void NETWORK_SET_MATCH_PROGRESS(float);//FLOOR(float)
extern bool NETWORK_SET_PLAYER_MUTED(int playerid, bool mute);
extern void NETWORK_SET_SCRIPT_LOBBY_STATE(ScriptAny);
extern void NETWORK_SET_SESSION_INVITABLE(bool invitable);
extern void NETWORK_SET_TALKER_FOCUS(ScriptAny);
extern void NETWORK_SET_TALKER_PROXIMITY(ScriptAny);
extern void NETWORK_SET_TEAM_ONLY_CHAT(bool);
extern void NETWORK_SET_TEXT_CHAT_RECIPIENTS(ScriptAny);
extern void NETWORK_SHOW_FRIEND_PROFILE_UI(ScriptAny);
extern void NETWORK_SHOW_MET_PLAYER_FEEDBACK_UI(Player metPlayerIndex);
extern void NETWORK_SHOW_PLAYER_FEEDBACK_UI(Player payerIndex);
extern void NETWORK_SHOW_MET_PLAYER_PROFILE_UI(ScriptAny);
extern void NETWORK_SHOW_PLAYER_PROFILE_UI(Player playerIndex);
extern void NETWORK_START_EXTENDED_SEARCH(ScriptAny);
extern void NETWORK_START_SESSION(void);
extern void NETWORK_STORE_GAME_CONFIG(ScriptAny);
extern void NETWORK_VERIFY_USER_STRING(ScriptAny);
extern void OBFUSCATE_INT(int, int);
extern void OBFUSCATE_INT_ARRAY(ScriptAny, ScriptAny);
extern void REGISTER_CLIENT_BROADCAST_VARIABLES(ScriptAny, ScriptAny, ScriptAny);
extern void REGISTER_HOST_BROADCAST_VARIABLES(ScriptAny, int ukn0, int ukn1);
extern void REGISTER_MULTIPLAYER_GAME_WIN(Player playerIndex, bool);
extern void REGISTER_NETWORK_BEST_GAME_SCORES(Player playerIndex, int, int);
extern void RESERVE_NETWORK_MISSION_OBJECTS_FOR_HOST(int count);
extern void RESERVE_NETWORK_MISSION_PEDS_FOR_HOST(int);
extern void RESERVE_NETWORK_MISSION_VEHICLES(int);
extern void RESERVE_NETWORK_MISSION_VEHICLES_FOR_HOST(int);
extern void RESTORE_SCRIPT_ARRAY_FROM_SCRATCHPAD(ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void RESURRECT_NETWORK_PLAYER(Player playerIndex, float x, float y, float z, int ukn0);
extern void SAVE_SCRIPT_ARRAY_IN_SCRATCHPAD(ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void SET_ARMOUR_PICKUP_NETWORK_REGEN_TIME(uint timeMS);
extern void SET_CAR_EXISTS_ON_ALL_MACHINES(Vehicle vehicle, bool exists);
extern void SET_CELLPHONE_RANKED(bool toggle);
extern void SET_FILTER_MENU_ON(bool toggle);
extern void SET_GFWL_IS_RETURNING_TO_SINGLE_PLAYER(ScriptAny);
extern void SET_HEALTH_PICKUP_NETWORK_REGEN_TIME(uint timeMS);
extern void SET_HOST_MATCH_ON(bool);
extern void SET_IK_DISABLED_FOR_NETWORK_PLAYER(Player playerIndex, bool);
extern void SET_IN_MP_TUTORIAL(bool set);
extern void SET_IN_SPECTATOR_MODE(bool spectate);
extern void SET_KILLSTREAK(void);
extern void SET_LOBBY_MUTE_OVERRIDE(boolean set);
extern void SET_MSG_FOR_LOADING_SCREEN(char *label);
extern void SET_NETWORK_ID_CAN_MIGRATE(int netid, bool value);
extern void SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(int netID, boolean set);
extern void SET_NETWORK_ID_STOP_CLONING(int id, bool);
extern void SET_NETWORK_JOIN_FAIL(bool ukn0);
extern void SET_NETWORK_PLAYER_AS_VIP(Player playerIndex, bool);//Gamemode
extern void SET_NETWORK_VEHICLE_RESPOT_TIMER(int id, int ukn4000);
extern void SET_OBJECT_EXISTS_ON_ALL_MACHINES(Object obj, bool exists);
extern void SET_ONLINE_LAN(bool);
extern void SET_OVERRIDE_NO_SPRINTING_ON_PHONE_IN_MULTIPLAYER(bool);
extern void SET_PED_COMPONENTS_TO_NETWORK_PLAYERSETTINGS_MODEL(Ped ped);
extern void SET_PED_EXISTS_ON_ALL_MACHINES(Ped ped, boolean exists);
extern void SET_PLAYERS_DROP_MONEY_IN_NETWORK_GAME(bool toggle);
extern void SET_PLAYER_CONTROL_FOR_NETWORK(Player playerIndex, bool unknownTrue, bool unknownFalse);
extern void SET_PLAYER_TEAM(int Player, int team);
extern void SET_RETURN_TO_FILTER_MENU(bool);
extern void SET_RICH_PRESENCE(ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void SET_RICH_PRESENCE_TEMPLATEFILTER(void);
extern void SET_RICH_PRESENCE_TEMPLATELOBBY(ScriptAny);
extern void SET_RICH_PRESENCE_TEMPLATEMP1(ScriptAny, ScriptAny, ScriptAny, ScriptAny);
extern void SET_RICH_PRESENCE_TEMPLATEMP2(ScriptAny);
extern void SET_RICH_PRESENCE_TEMPLATEMP3(int, int);
extern void SET_RICH_PRESENCE_TEMPLATEMP4(ScriptAny, ScriptAny);
extern void SET_RICH_PRESENCE_TEMPLATEMP5(ScriptAny, ScriptAny, ScriptAny);
extern void SET_RICH_PRESENCE_TEMPLATEMP6(ScriptAny, ScriptAny, ScriptAny);
extern void SET_RICH_PRESENCE_TEMPLATEPARTY(void);
extern void SET_RICH_PRESENCE_TEMPLATESP1(ScriptAny, ScriptAny, ScriptAny);
extern void SET_RICH_PRESENCE_TEMPLATESP2(int);
extern void SET_SERVER_ID(int id);
extern void SET_START_FROM_FILTER_MENU(ScriptAny);
extern void SET_SYNC_WEATHER_AND_GAME_TIME(bool);
extern void SET_THIS_MACHINE_RUNNING_SERVER_SCRIPT(bool host);
extern void SET_WEAPON_PICKUP_NETWORK_REGEN_TIME(int weaponType, uint timeMS);
extern void SHUTDOWN_AND_LAUNCH_NETWORK_GAME(uint episode);
extern void SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME(void);
extern void STORE_SCRIPT_VALUES_FOR_NETWORK_GAME(ScriptAny);
extern void TELL_NET_PLAYER_TO_START_PLAYING(Player playerIndex, bool);
extern void TERMINATE_ALL_SCRIPTS_FOR_NETWORK_GAME(void);
extern void THIS_SCRIPT_IS_SAFE_FOR_NETWORK_GAME(void);
extern void TURN_OFF_RADIOHUD_IN_LOBBY(void);
extern void UNOBFUSCATE_INT(int count, int *val);
extern void UNOBFUSCATE_INT_ARRAY(ScriptAny, ScriptAny);
extern void UPDATE_NETWORK_RELATIVE_SCORE(ScriptAny, ScriptAny, ScriptAny);
extern void UPDATE_NETWORK_STATISTICS(Player playerIndex, int ukn0, int ukn1, int ukn2);
extern void USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(bool);
ScriptAny CALCULATE_CHECKSUM(ScriptAny, ScriptAny);
ScriptAny GET_CLOSEST_NETWORK_RESTART_NODE(ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
ScriptAny GET_RANDOM_NETWORK_RESTART_NODE(ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
ScriptAny GET_RANDOM_NETWORK_RESTART_NODE_USING_GROUP_LIST(ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
ScriptAny GET_SORTED_NETWORK_RESTART_NODE(ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
ScriptAny GET_SORTED_NETWORK_RESTART_NODE_USING_GROUP_LIST(ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
ScriptAny GET_START_FROM_FILTER_MENU(void);
ScriptAny IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(ScriptAny, ScriptAny, ScriptAny, ScriptAny);
ScriptAny NETWORK_CHANGE_GAME_MODE(ScriptAny, ScriptAny, ScriptAny, ScriptAny);
ScriptAny NETWORK_GET_MET_PLAYER_NAME(ScriptAny);
ScriptAny NETWORK_GET_UNACCEPTED_INVITE_GAME_MODE(ScriptAny);
ScriptAny NETWORK_JOIN_GAME(ScriptAny);	//server id?
ScriptAny NETWORK_RESTORE_GAME_CONFIG(ScriptAny);
ScriptAny NETWORK_SEND_TEXT_CHAT(Player playerIndex, ScriptAny);
ScriptAny NETWORK_STORE_SINGLE_PLAYER_GAME(void);
ScriptAny RESTORE_SCRIPT_VALUES_FOR_NETWORK_GAME(ScriptAny);
//}
//namespace DLC1
//{
extern void FLUSH_ALL_PLAYER_RESPAWN_COORDS(void);
extern void SEND_CLIENT_BROADCAST_VARIABLES_NOW(void);
extern void SET_PLAYER_AS_DAMAGED_PLAYER(Player playerIndex, int, bool);//SET_PLAYER_AS_DAMAGED_PLAYER( I, GET_PLAYER_ID(), 1 );
//}
//namespace DLC2
//{
extern boolean IS_LCPD_DATA_VALID(void);
extern void SET_DISPLAY_PLAYER_NAME_AND_ICON(Player playerIndex, bool set);
extern void SET_NETWORK_PED_USING_PARACHUTE(Ped ped);
extern void SET_ONLINE_SCORE(int, ScriptAny);//147, 148, or 149
extern void STOP_SYNCING_SCRIPT_ANIMATIONS(bool);
//}
//namespace PTFX
//{
extern boolean TRIGGER_PTFX(char *name, float x, float y, float z, float, float, float, uint flags);
extern boolean TRIGGER_PTFX_ON_OBJ(char *name, Object obj, float x, float y, float z, float, float, float, uint flags);
extern boolean TRIGGER_PTFX_ON_OBJ_BONE(char *name, Object obj, float x, float y, float z, float, float, float, int objbone, uint flags);
extern boolean TRIGGER_PTFX_ON_PED(char *name, Ped ped, float x, float y, float z, float, float, float, uint flags);
extern boolean TRIGGER_PTFX_ON_PED_BONE(char *name, Ped ped, float x, float y, float z, float, float, float, int pedbone, uint flags);
extern boolean TRIGGER_PTFX_ON_VEH(char *name, Vehicle veh, float x, float y, float z, float, float, float, float);
extern uint START_PTFX(char *name, float x, float y, float z, float yaw, float pitch, float roll, float scale);
extern uint START_PTFX_ON_OBJ(char *name, Object obj, float x, float y, float z, float yaw, float pitch, float roll, float scale);
extern uint START_PTFX_ON_OBJ_BONE(char *name, Object obj, float x, float y, float z, float yaw, float pitch, float roll, int objbone, float scale);
extern uint START_PTFX_ON_PED(char *name, Ped ped, float x, float y, float z, float yaw, float pitch, float roll, float scale);
extern uint START_PTFX_ON_PED_BONE(char *name, Ped ped, float x, float y, float z, float yaw, float pitch, float roll, int pedbone, float scale);
extern uint START_PTFX_ON_VEH(char *name, Vehicle veh, float x, float y, float z, float yaw, float pitch, float roll, float scale);
extern void EVOLVE_PTFX(uint ptfx, char *evolvetype, float val);
extern void REMOVE_PROJTEX_FROM_OBJECT(Object obj);
extern void REMOVE_PROJTEX_IN_RANGE(float x, float y, float z, float radius);
extern void REMOVE_PTFX(uint ptfx);
extern void REMOVE_PTFX_FROM_OBJECT(Object obj);
extern void REMOVE_PTFX_FROM_PED(Ped ped);
extern void REMOVE_PTFX_FROM_VEHICLE(Vehicle veh);
extern void STOP_PTFX(uint ptfx);
extern void UPDATE_PTFX_OFFSETS(uint ptfx, float x, float y, float z, float, float, float);
extern void UPDATE_PTFX_TINT(uint ptfx, float r, float g, float b, float a);
//}
//namespace SYSTEM
//{
extern boolean ALLOW_ONE_TIME_ONLY_COMMANDS_TO_RUN(void);
extern boolean GET_TEXT_INPUT_ACTIVE(void);
extern float CONVERT_METRES_TO_FEET(float metres);
extern float COS(float value);
extern float EXP(float);
extern float POW(float base, float power);
extern float SIN(float value);
extern float SQRT(float value);
extern float TAN(float value);
extern float TIMESTEPUNWARPED(void);
extern float TO_FLOAT(uint value);
extern float VDIST(float x0, float y0, float z0, float x1, float y1, float z1);
extern float VDIST2(float x0, float y0, float z0, float x1, float y1, float z1);
extern float VMAG(float x, float y, float z);
extern float VMAG2(float x, float y, float z);
extern int CEIL(float value);
extern int FLOOR(float value);
extern int ROUND(float);
extern int SHIFT_LEFT(int val, uint shifts);
extern int SHIFT_RIGHT(int val, uint shifts);
extern uint TIMERC(void);
extern uint START_NEW_SCRIPT(char *scriptName, uint stacksize);
extern uint START_NEW_SCRIPT_WITH_ARGS(char *scriptname, void *params, int paramcount, uint stacksize);
extern uint TIMERA(void);
extern uint TIMERB(void);
extern uint TIMESTEP(void);
extern void GENERATE_RANDOM_FLOAT(float *);
extern void GENERATE_RANDOM_FLOAT_IN_RANGE(float min, float max, float *pValue);
extern void GENERATE_RANDOM_INT(int *);
extern void GENERATE_RANDOM_INT_IN_RANGE(uint min, uint max, uint *pValue);
extern void GET_CORRECTED_COLOUR(uint r, uint g, uint b, uint *pR, uint *pG, uint *pB);
extern void SETTIMERA(uint value);
extern void SETTIMERB(uint value);
extern void SETTIMERC(int);
extern void WAIT(int timeMS);
//}
//namespace PICKUP
//{
extern boolean DOES_PICKUP_EXIST(Pickup pickup);
extern boolean HAS_PICKUP_BEEN_COLLECTED(Pickup pickup);
extern boolean IS_ANY_PICKUP_AT_COORDS(float x, float y, float z);
extern boolean IS_MONEY_PICKUP_AT_COORDS(float x, float y, float z);
extern int COUNT_PICKUPS_OF_TYPE(int type);
extern void ADD_PICKUP_TO_INTERIOR_ROOM_BY_KEY(Object pickup, uint room_hash);
extern void ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(Pickup pickup, char *roomName);
extern void CREATE_MONEY_PICKUP(float x, float y, float z, uint amount, boolean unknownTrue, Pickup *pPickup);
extern void CREATE_PICKUP(uint model, uint pickupType, float x, float y, float z, Pickup *pPickup, boolean unknownFalse);
extern void CREATE_PICKUP_ROTATE(uint model, uint pickupType, uint unknown, float x, float y, float z, float rX, float rY, float rZ, Pickup *pPickup);
extern void CREATE_PICKUP_WITH_AMMO(uint model, uint pickupType, uint unknown, float x, float y, float z, Pickup *pPickup);
extern void GET_PICKUP_COORDINATES(Pickup pickup, float *pX, float *pY, float *pZ);
extern void GET_ROOM_KEY_FROM_PICKUP(int pickup, uint *hash);
extern void GET_SAFE_PICKUP_COORDS(float x, float y, float z, float *pSafeX, float *pSafeY, float *pSafeZ);
extern void REMOVE_ALL_PICKUPS_OF_TYPE(uint type);
extern void REMOVE_PICKUP(Pickup pickup);
extern void REMOVE_TEMPORARY_RADAR_BLIPS_FOR_PICKUPS(void);
extern void RENDER_WEAPON_PICKUPS_BIGGER(boolean value);
extern void SET_ALL_PICKUPS_OF_TYPE_COLLECTABLE_BY_CAR(int pickuptype, boolean set);
extern void SET_DO_NOT_SPAWN_PARKED_CARS_ON_TOP(int pickup, boolean set);
extern void SET_PICKUPS_FIX_CARS(boolean set);
extern void SET_PICKUP_COLLECTABLE_BY_CAR(Object pickup, boolean set);
extern void SWITCH_ARROW_ABOVE_BLIPPED_PICKUPS(boolean on);
//}
//namespace WIDGET
//{
	extern char* ADD_TEXT_WIDGET(ScriptAny);
	extern int GET_CONTENTS_OF_TEXT_WIDGET(ScriptAny);//GET_HASH_KEY( GET_CONTENTS_OF_TEXT_WIDGET( l_U0 ) );
	extern void ADD_TO_WIDGET_COMBO(ScriptAny);
	extern void ADD_WIDGET_FLOAT_READ_ONLY(ScriptAny, ScriptAny);
	extern void ADD_WIDGET_FLOAT_SLIDER(ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
	extern void ADD_WIDGET_READ_ONLY(ScriptAny, ScriptAny);
	extern void ADD_WIDGET_SLIDER(ScriptAny, ScriptAny, ScriptAny, ScriptAny, ScriptAny);
	extern void ADD_WIDGET_STRING(ScriptAny);
	extern void ADD_WIDGET_TOGGLE(ScriptAny, ScriptAny);
	extern void CREATE_WIDGET_GROUP(ScriptAny);
	extern void DELETE_WIDGET(ScriptAny);
	extern void DELETE_WIDGET_GROUP(ScriptAny);
	extern void END_WIDGET_GROUP(void);
	extern void FINISH_WIDGET_COMBO(ScriptAny, ScriptAny);
	extern boolean DOES_WIDGET_GROUP_EXIST(ScriptAny);
	extern void SET_CONTENTS_OF_TEXT_WIDGET(ScriptAny, ScriptAny);
	extern void START_NEW_WIDGET_COMBO(void);
//}
//namespace DEBUG
//{
	SET_CHAR_NAME_DEBUG(Ped ped, char* debugName);
	void OPEN_DEBUG_FILE(void);
	void CLOSE_DEBUG_FILE(void);
	void DEBUG_OFF(void);
	void DRAW_DEBUG_SPHERE(float x, float y, float z, float radius);
	void SAVE_FLOAT_TO_DEBUG_FILE(ScriptAny);
	void SAVE_INT_TO_DEBUG_FILE(ScriptAny);
	void SAVE_NEWLINE_TO_DEBUG_FILE(void);
	void SAVE_STRING_TO_DEBUG_FILE(ScriptAny);
	extern boolean IS_DEBUG_CAMERA_ON(void);
	extern char *GET_MODEL_NAME_FOR_DEBUG(uint model);
	extern void ENABLE_DEBUG_CAM(boolean enable);
	extern void GET_DEBUG_CAM(int *cam);
	extern void INIT_DEBUG_WIDGETS(void);
	extern void SCRIPT_ASSERT(char *text);
	extern void SET_DEBUG_TEXT_VISIBLE(bool);
	extern int GET_CONSOLE_COMMAND_TOKEN(void);
	extern int GET_LATEST_CONSOLE_COMMAND(void);
//}
extern void GET_CAMERA_FROM_NETWORK_ID(int ned_id, int *cam);
/*namespace DEPRECATED
//{
	ACTIVATE_VECTOR_MAP
	ADD_AREA_TO_NETWORK_RESTART_NODE_GROUP_MAPPING
	ADD_EXPLOSION_WITH_DIRECTION
	ADD_NETWORK_RESTART
	ADD_PED_QUEUE
	ALLOW_NETWORK_POPULATION_GROUP_CYCLING
	ATTACH_CAR_TO_OBJECT_PHYSICALLY
	ATTACH_OBJECT_TO_OBJECT_PHYSICALLY
	ATTACH_PED_TO_CAR2
	ATTACH_PED_TO_WORLD_PHYSICALLY
	BEGIN_PED_QUEUE_MEMBERSHIP_LIST
	BREAKPOINT
	CALCULATE_FURTHEST_NETWORK_RESTART_NODES
	CAN_REGISTER_MISSION_ENTITIES
	CAN_RENDER_RADIOHUD_SPRITE_IN_MOBILE_PHONE
	CLAN_IS_PENDING
	CLEAR_EVENT_PRECEDENCE
	CLEAR_UP_TRIP_SKIP
	CREATE_CAR_GENERATOR_WITH_PLATE 
	CREATE_DUMMY_CHAR
	DEBUG_ON
	DELETE_DUMMY_CHAR
	DISABLE_DEBUG_CAM_AND_PLAYER_WARPING
	DISPLAY_PLAYER_ICONS
	DO_WEAPON_STUFF_AT_START_OF_2P_GAME		
	END_PED_QUEUE_MEMBERSHIP_LIST
	FORCE_NET_PLAYER_INVISIBLE
	GET_BLIP_INFO_ID_POSITION
	GET_CAMERA_FROM_NETWORK_ID
	GET_CHAR_ANIM_EVENT_TIME
	GET_CHAR_AREA_VISIBLE
	GET_CLOSEST_STRAIGHT_ROAD
	GET_FURTHEST_NETWORK_RESTART_NODE
	GET_INTERIOR_FROM_DUMMY_CHAR
	GET_KILL_TRACKING_RESULTS
	GET_LAST_TIME_NETWORK_ID_DAMAGED
	GET_LCPD_COP_SCORE
	GET_LCPD_CRIMINAL_SCORE
	GET_LOCAL_GAMERLEVEL_FROM_PROFILESETTINGS
	GET_MOBILE_PHONE_POSITION
	GET_MOBILE_PHONE_ROTATION
	GET_MODEL_NAME_OF_CAR_FOR_DEBUG_ONLY
	GET_MOTION_CONTROLS_ENABLED
	GET_MOTION_SENSOR_VALUES
	GET_NAME_OF_SCRIPT_TO_AUTOMATICALLY_START
	GET_NEEDED_PLAYER_CASH_FOR_LEVEL
	GET_NETWORK_PLAYER_VIP
	GET_NETWORK_RESTART_NODE_DEBUG
	GET_NUM_CONSOLE_COMMAND_TOKENS
	GET_NUM_KILLS_FOR_RANK_POINTS
	GET_OVERRIDE_NO_SPRINTING_ON_PHONE_IN_MULTIPLAYER
	GET_PAD_ORIENTATION
	GET_PARKING_NODE_IN_AREA
	GET_PED_AT_HEAD_OF_QUEUE
	GET_PLAYER_LCPD_SCORE
	GET_RANDOM_NETWORK_RESTART_NODE_EXCLUDING_GROUP
	GET_RANDOM_NETWORK_RESTART_NODE_OF_GROUP
	GET_REMOTE_CONTROLLED_CAR
	GET_ROOM_NAME_FROM_CHAR_DEBUG
	GET_SAFE_LOCAL_RESTART_COORDS
	GET_SEQUENCE_PROGRESS_RECURSIVE
	GET_SORTED_NETWORK_RESTART_NODE_EXCLUDING_GROUP
	GET_SORTED_NETWORK_RESTART_NODE_OF_GROUP
	GET_TEAM_COLOUR
	GET_VEHICLE_CLASS 
	GIVE_PLAYER_HELMET
	GIVE_REMOTE_CONTROLLED_MODEL_TO_PLAYER
	HAS_NET_ID_BEEN_CLONED
	HAS_PLAYER_RANK_BEEN_UPGRADED
	IS_2PLAYER_GAME_GOING_ON
	IS_ATTACHED_PLAYER_HEADING_ACHIEVED
	IS_CAM_COLLIDING
	IS_CAR_IN_ANGLED_AREA_2D
	IS_CAR_IN_ANGLED_AREA_3D
	IS_CAR_STOPPED_IN_AREA_2D
	IS_CHAR_ON_PLAYER_MACHINE
	IS_IN_MP_TUTORIAL
	IS_NETWORK_CONNECTED
	IS_NETWORK_PLAYER_VISIBLE
	IS_OBJECT_IN_ANGLED_AREA_2D
	IS_OBJECT_ON_PLAYER_MACHINE
	IS_PLAYER_IN_SHORTCUT_TAXI
	IS_VEHICLE_ON_PLAYER_MACHINE
	LCPD_FIRST_TIME
	LCPD_HAS_BEEN_CONFIGURED
	MAKE_ROOM_IN_PLAYER_GANG_FOR_MISSION_PEDS
	NETWORK_DISPLAY_HOST_GAMER_CARD
	NETWORK_GET_FRIENDLY_FIRE_OPTION
	NETWORK_GET_HEALTH_RETICULE_OPTION
	NETWORK_GET_HOST_NAME
	NETWORK_GET_TEAM_OPTION
	NETWORK_HOST_GAME_CNC
	NETWORK_JOIN_GAME_CNC
	NETWORK_SET_LOCAL_PLAYER_CAN_TALK
	PLAYER_HAS_FLASHING_STAR_AFTER_OFFENCE
	PRINTFLOAT2
	PRINTINT2
	PRINT_MISSION_DESCRIPTION
	READ_LOBBY_PREFERENCE
	REGISTER_MOD
	REGISTER_MODEL_FOR_RANK_POINTS
	RELEASE_ENTITY_FROM_ROPE_FOR_OBJECT
	RELEASE_TWO_PLAYER_DISTANCE
	REMOVE_ALL_NETWORK_RESTART_POINTS
	REMOVE_ALL_SCRIPT_FIRES
	REMOVE_PED_QUEUE
	REMOVE_RC_BUGGY
	RENDER_LOADING_CLOCK
	RENDER_RADIOHUD_SPRITE_IN_LOBBY
	RENDER_RADIOHUD_SPRITE_IN_MOBILE_PHONE
	RESERVE_NETWORK_MISSION_OBJECTS
	RESERVE_NETWORK_MISSION_PEDS
	RESET_ARMOUR_PICKUP_NETWORK_REGEN_TIME
	RESET_HEALTH_PICKUP_NETWORK_REGEN_TIME
	RESET_LATEST_CONSOLE_COMMAND
	RESET_MONEY_PICKUP_NETWORK_REGEN_TIME
	RESET_NETWORK_RESTART_NODE_GROUP_MAPPING
	RESET_WEAPON_PICKUP_NETWORK_REGEN_TIME
	SEND_HOST_BROADCAST_VARIABLES_NOW
	SET_ALL_PEDS_SPAWNED_ARE_COPS
	SET_ALTERNATIVE_HEAD_FOR_PED_QUEUE
	SET_AREA_NAME
	SET_CAR_STOP_CLONING
	SET_CHAR_DEFENSIVE_AREA_ATTACHED_TO_CAR
	SET_EVENT_PRECEDENCE
	SET_HEADING_FOR_ATTACHED_PLAYER
	SET_IGNORE_SERVER_UPDATE
	SET_INVINCIBILITY_TIMER_DURATION
	SET_LCPD_COP_SCORE
	SET_LCPD_CRIMINAL_SCORE
	SET_MONEY_PICKUP_NETWORK_REGEN_TIME
	SET_MULTIPLAYER_BRIEF
	SET_NETWORK_ID_STOP_CLONING_FOR_ENEMIES
	SET_NETWORK_VISIBILITY
	SET_OBJECT_STOP_CLONING
	SET_PED_QUEUE_MEMBERSHIP_LIST
	SET_PED_STOP_CLONING
	SET_PLAYERS_CAN_BE_IN_SEPARATE_CARS
	SET_PLAYER_COLOUR
	SET_ROPE_HEIGHT_FOR_OBJECT
	SET_SCRIPT_FIRE_AUDIO
	SET_TEAM_COLOUR
	SET_UP_TRIP_SKIP
	SET_UP_TRIP_SKIP_AFTER_MISSION
	SET_UP_TRIP_SKIP_FOR_VEHICLE_FINISHED_BY_SCRIPT
	SET_UP_TRIP_SKIP_TO_BE_FINISHED_BY_SCRIPT
	START_KILL_TRACKING
	START_PROFILE_TIMER
	STOP_KILL_TRACKING
	STOP_PROFILE_TIMER
	TAKE_REMOTE_CONTROL_OF_CAR
	TAKE_SCREEN_SHOT
	TASK_CHAR_SLIDE_TO_COORD_AND_PLAY_ANIM_HDG_RATE
	TASK_FOLLOW_PATROL_ROUTE
	TASK_JETPACK
	TASK_SAY
	TASK_SIT_DOWN_PLAY_ANIM
	TASK_SPACE_SHIP_GO_TO_COORD
	TELEPORT_NETWORK_PLAYER
	TURN_ON_RADIOHUD_IN_LOBBY
	UPDATE_PLAYER_LCPD_SCORE
	USE_DETONATOR
	WAITUNPAUSED
	WAITUNWARPED
	WRITE_LOBBY_PREFERENCE
	extern uint CREATE_USER_3D_MARKER(float x, float y, float z);
	extern void REMOVE_USER_3D_MARKER(uint marker);
	boolean IS_PLAYER_IN_INFO_ZONE(int player, int zoneid);
	void CLEAR_ROOM_FOR_DUMMY_CHAR(Ped ped);
	void GET_CONSOLE_COMMAND
	void GET_KEY_FOR_DUMMY_CHAR_IN_ROOM(Ped ped, int *room);
	void GET_ROPE_HEIGHT_FOR_OBJECT(Object obj, float *height);
	void GRAB_ENTITY_ON_ROPE_FOR_OBJECT(Object obj, int *, int *, int *);
	void RESET_CONSOLE_COMMAND
	void SET_ROOM_FOR_DUMMY_CHAR_BY_KEY(Ped dummy, int key);
	void SET_ROOM_FOR_DUMMY_CHAR_BY_NAME(Ped ped, char *roomname);
	void SET_SPRITE_HDR_MULTIPLIER(float multiplier);
	void SET_UP_TRIP_SKIP_FOR_SPECIFIC_VEHICLE(float, float, float, float, Vehicle veh);
}*/