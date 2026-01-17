void main()
{
    unknown uVar2;

    l_U98 = -1;
    l_U99 = 225;
    l_U661 = 0.00000000;
    l_U985 = -1;
    l_U1256 = -1;
    l_U1280 = 16;
    l_U1281 = 10000;
    l_U1282 = 255;
    l_U1283 = 1;
    l_U1305 = 0;
    l_U1306 = 0;
    l_U1307 = 0;
    l_U1308 = 1;
    l_U1309 = 0;
    l_U1310 = 0;
    l_U1311 = 0;
    l_U1312 = 0;
    l_U1313 = 0;
    l_U1314 = 0;
    l_U1315 = 0;
    l_U1316 = 0;
    l_U1317 = 0;
    l_U1318 = -1;
    l_U1319 = -1;
    l_U1320 = 18;
    l_U1327 = 0.15800000;
    l_U1328 = -0.02400000;
    l_U1329 = 0.01000000;
    l_U1330 = 0.12600000;
    l_U1344 = -1;
    l_U1371 = 120.00000000;
    l_U1428 = -1;
    l_U1430 = 0;
    l_U1433 = 0;
    l_U1434 = 0;
    l_U1435 = 0;
    l_U1436 = 0;
    l_U3190 = 1;
    l_U3234 = 190;
    l_U3516 = 0;
    l_U3517 = 0;
    l_U3519 = 0;
    l_U3522 = 0;
    l_U3535 = 0;
    l_U3539 = 0;
    l_U3542 = 0;
    l_U3544 = 0;
    l_U3551 = nil;
    l_U3570 = 0;
    l_U3571 = 0;
    l_U3597 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        while (true)
        {
            WAIT( 0 );
        }
    }
    sub_380();
    sub_2978();
    sub_4565( "MPKP2AU" );
    sub_4676( 0, 0, "", 0 );
    sub_4676( 1, 0, "PETROVIC", 0 );
    sub_4676( 2, 0, "NOOSE_1", 0 );
    sub_4859( 1 );
    CLEAR_BRIEF();
    DISABLE_PAUSE_MENU( 1 );
    UNPAUSE_GAME();
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        SET_CHAR_MONEY( sub_2736(), 0 );
    }
    if (NOT (IS_CHAR_DEAD( sub_2736() )))
    {
        SET_CHAR_VISIBLE( sub_2736(), 0 );
    }
    SET_SCENARIO_PED_DENSITY_MULTIPLIER( 0.00000000, 0.00000000 );
    SET_PLAYERS_DROP_MONEY_IN_NETWORK_GAME( 0 );
    sub_4994( 1 );
    l_U1968[GET_PLAYER_ID()]._fU20 = -1;
    SWITCH_ROADS_OFF( -1248.84500000, -298.68170000, -0.22850000, -1288.83400000, -231.20580000, 11.67600000 );
    SWITCH_PED_PATHS_OFF( -1861.32100000, -659.10270000, -1.54553700, -1868.89600000, -668.45510000, 63.92974000 );
    SWITCH_PED_PATHS_OFF( 1239.33400000, 1379.85100000, 9.53421900, 1334.56600000, 1576.45300000, 23.56154000 );
    SET_PED_NON_CREATION_AREA( 1239.33400000, 1379.85100000, 9.53421900, 1334.56600000, 1576.45300000, 23.56154000 );
    sub_5220( 0, 1, "_AUTOAIM", 2, 0 );
    sub_5220( 1, 6, "FRIENDLY_FIRE", 2, 0 );
    sub_5220( 2, 1, "DIFFICULTY", 3, 0 );
    sub_5220( 3, 1, "TRAFFIC", 4, 0 );
    sub_5220( 4, 1, "PEDESTRIANS", 4, 0 );
    if (N_604003528())
    {
        sub_5220( 5, 6, "NAME_OPT", 2, 0 );
    }
    else
    {
        sub_5220( 5, 6, "NAME_OPT_PS3", 2, 0 );
    }
    sub_5220( 6, 6, "RETICULE_OPT", 2, 0 );
    sub_5220( 7, 1, "VOICE_OPT", 2, 0 );
    sub_5220( 8, 1, "TIME_OF_DAY", 5, 0 );
    sub_5220( 9, 1, "WEATHER", 6, 0 );
    sub_5220( 10, 16, "DESCRIPTION", 2, 0 );
    sub_5220( 11, 15, "RADIO_OPT", 19, 0 );
    if (NOT NETWORK_IS_TVT())
    {
        sub_5220( 12, 17, "KICK_PLAYER", 16, GET_PLAYER_ID() );
    }
    sub_5630( 1, -1, 0, -1 );
    sub_5681();
    if (sub_5714())
    {
        l_U1500._fU352[0] = sub_5771( 419, NETWORK_GET_GAME_MODE() );
        l_U1500._fU352[1] = sub_5771( 422, NETWORK_GET_GAME_MODE() );
        l_U1500._fU352[2] = sub_5910( 24, 0 );
        l_U1500._fU352[3] = sub_5910( 1, 2 );
        l_U1500._fU352[4] = sub_5910( 2, 1 );
        l_U1500._fU352[5] = sub_5910( 3, 1 );
        l_U1500._fU352[6] = sub_5910( 4, 0 );
        l_U1500._fU352[7] = sub_5910( 5, 0 );
        l_U1500._fU352[8] = sub_5910( 9, 0 );
        l_U1500._fU352[9] = sub_5910( 10, 0 );
        l_U1500._fU352[10] = sub_5910( 11, 1 );
        sub_6136();
    }
    if (NOT l_U3187)
    {
        CHANGE_PICKUP_BLIP_SPRITE( 4 );
        CHANGE_PICKUP_BLIP_SCALE( 0.78000000 );
        CHANGE_PICKUP_BLIP_PRIORITY( 1 );
        CHANGE_PICKUP_BLIP_COLOUR( 2 );
        CHANGE_PICKUP_BLIP_DISPLAY( 4 );
        l_U3187 = 1;
    }
    l_U3209 = 0;
    l_U1968[GET_PLAYER_ID()]._fU0 = 1;
    sub_6247();
    l_U1968[GET_PLAYER_ID()]._fU24 = -1;
    sub_6299();
    sub_6556( 1 );
    while (true)
    {
        WAIT( 0 );
        if (NOT IS_NETWORK_GAME_RUNNING())
        {
            if (NOT LOCAL_PLAYER_IS_READY_TO_START_PLAYING())
            {
                TERMINATE_THIS_SCRIPT();
            }
        }
        GET_NETWORK_TIMER( ref l_U3208 );
        if (NOT l_U3187)
        {
            CHANGE_PICKUP_BLIP_SPRITE( 4 );
            CHANGE_PICKUP_BLIP_SCALE( 0.78000000 );
            CHANGE_PICKUP_BLIP_PRIORITY( 1 );
            CHANGE_PICKUP_BLIP_COLOUR( 2 );
            CHANGE_PICKUP_BLIP_DISPLAY( 4 );
            l_U3187 = 1;
        }
        sub_6702( 0, 0, 0 );
        RESERVE_NETWORK_MISSION_PEDS_FOR_HOST( 50 );
        RESERVE_NETWORK_MISSION_VEHICLES_FOR_HOST( 30 );
        RESERVE_NETWORK_MISSION_OBJECTS_FOR_HOST( 5 );
        if (sub_5714())
        {
            if ((l_U1500._fU272 > 1) AND (l_U1500._fU272 < 9))
            {
                sub_8586();
            }
            sub_12036();
            sub_12327();
            sub_17171();
            sub_6136();
        }
        sub_43809( 16, ref l_U1968[0]._fU4, ref l_U1968[1]._fU4, ref l_U1968[2]._fU4, ref l_U1968[3]._fU4, ref l_U1968[4]._fU4, ref l_U1968[5]._fU4, ref l_U1968[6]._fU4, ref l_U1968[7]._fU4, ref l_U1968[8]._fU4, ref l_U1968[9]._fU4, ref l_U1968[10]._fU4, ref l_U1968[11]._fU4, ref l_U1968[12]._fU4, ref l_U1968[13]._fU4, ref l_U1968[14]._fU4, ref l_U1968[15]._fU4 );
        if (LOCAL_PLAYER_IS_READY_TO_START_PLAYING())
        {
            LAUNCH_LOCAL_PLAYER_IN_NETWORK_GAME();
        }
        if (l_U1500._fU512 != 0)
        {
            if (NOT (l_U1500._fU272 >= 9))
            {
                sub_45721( l_U1500._fU512 );
            }
        }
        if ((l_U3209 > 3) AND (l_U3209 < 12))
        {
            sub_45952();
            sub_46057();
            sub_49347();
            if (NOT l_U3177)
            {
                if ((sub_13089() < 2) || (l_U1968[GET_PLAYER_ID()]._fU28 == 2))
                {
                    sub_49430();
                }
            }
        }
        if ((l_U3209 > 3) AND (l_U3209 < 13))
        {
            sub_83074();
        }
        if ((l_U1500._fU272 == 9) || (l_U1500._fU916))
        {
            sub_84982();
        }
        if (l_U1500._fU272 < 9)
        {
            sub_86144();
        }
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            switch (l_U3209)
            {
                case 0:
                if (sub_18129())
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
                    {
                        if (((((sub_86429()) || (l_U3189)) || (l_U1500._fU272 > 1)) || (l_U1500._fU344 > 0)) || (g_U26675))
                        {
                            if (IS_SCREEN_FADED_OUT())
                            {
                                l_U3209 = 1;
                            }
                            else if (NOT IS_SCREEN_FADING_OUT())
                            {
                                sub_52185( 500 );
                                l_U3189 = 1;
                            }
                        }
                        else
                        {
                            sub_86580();
                        }
                    }
                }
                break;
                case 1:
                sub_90662();
                l_U3209 = 3;
                break;
                case 2:
                sub_92007( 1 );
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2736(), 2000.00000000, 2000.00000000, 200.00000000, 10.00000000, 10.00000000, 10.00000000, 0 )))
                {
                    SET_CHAR_COORDINATES( sub_2736(), 2000.00000000, 2000.00000000, 200.00000000 );
                    FREEZE_CHAR_POSITION( sub_2736(), 1 );
                }
                if (l_U1968[GET_PLAYER_ID()]._fU124 == 1)
                {
                    sub_93151();
                    sub_53965( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                    sub_55436( "WAITING_END", sub_65337( 23 ), sub_65370( 23 ), sub_65337( 24 ), sub_65370( 24 ), 255, 255, 255, 255, 2 );
                }
                if (NETWORK_IS_SESSION_STARTED())
                {
                    if (sub_13089() > 0)
                    {
                        if (NOT l_U3182)
                        {
                            if (LOCAL_PLAYER_IS_READY_TO_START_PLAYING())
                            {
                                LAUNCH_LOCAL_PLAYER_IN_NETWORK_GAME();
                            }
                            l_U3182 = 1;
                        }
                        if ((sub_120417()) || (sub_120494()))
                        {
                            sub_49430();
                        }
                    }
                    if (NOT l_U1968[GET_PLAYER_ID()]._fU124)
                    {
                        l_U1968[GET_PLAYER_ID()]._fU124 = 1;
                        SET_CHAR_VISIBLE( sub_2736(), 0 );
                        SET_CHAR_COLLISION( sub_2736(), 0 );
                    }
                }
                else
                {
                    l_U3182 = 0;
                }
                break;
                case 3:
                if (sub_18143( 1543404628 ))
                {
                    if (l_U1500._fU272 <= 1)
                    {
                        sub_93151();
                        sub_120724( 0, l_U1500._fU352[0] == 1, 0, 0 );
                        sub_92007( 1 );
                    }
                    else if (l_U1500._fU520 > l_U3208)
                    {
                        sub_120772();
                        sub_93151();
                        DISABLE_PAUSE_MENU( 0 );
                        CHANGE_PLAYER_MODEL( sub_1079(), 1543404628 );
                        l_U3063 = sub_2736();
                        sub_87252( ref l_U3063, l_U1500._fU444[GET_PLAYER_ID()] );
                        SET_CHAR_VISIBLE( sub_2736(), 0 );
                        SET_PLAYER_KEEPS_WEAPONS_WHEN_RESPAWNED( sub_1079() );
                        SET_ANIM_GROUP_FOR_CHAR( sub_2736(), "Move_player" );
                        SET_VOICE_ID_FROM_HEAD_COMPONENT( sub_2736(), 0, 1 );
                        GIVE_WEAPON_TO_CHAR( sub_2736(), 3, 0, 0 );
                        GIVE_WEAPON_TO_CHAR( sub_2736(), 4, 5, 0 );
                        GIVE_WEAPON_TO_CHAR( sub_2736(), 12, 2000, 0 );
                        GIVE_WEAPON_TO_CHAR( sub_2736(), 14, 1500, 1 );
                        if (NOT (DOES_BLIP_EXIST( l_U3073 )))
                        {
                            ADD_BLIP_FOR_COORD( -1879.17500000, -654.38290000, 2.57230000, ref l_U3073 );
                            CHANGE_BLIP_SPRITE( l_U3073, 4 );
                            CHANGE_BLIP_SCALE( l_U3073, 0.78000000 );
                            CHANGE_BLIP_PRIORITY( l_U3073, 1 );
                            SET_ROUTE( l_U3073, 1 );
                        }
                        CHANGE_BLIP_COLOUR( l_U3073, 5 );
                        SET_CHAR_HEADING( sub_2736(), l_U3481[GET_PLAYER_ID()] );
                        sub_416( GET_PLAYER_ID(), 1 );
                        l_U3219 = l_U3208 + 1000;
                        sub_121204();
                        sub_122500( ref l_U1500._fU352 );
                        SET_CREATE_RANDOM_COPS( 0 );
                        l_U3209 = 4;
                    }
                    else
                    {
                        sub_93151();
                        sub_86202( GET_PLAYER_ID(), 1 );
                        l_U1968[GET_PLAYER_ID()]._fU124 = 1;
                        RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), 994.28930000, -793.26730000, 182.55050000, 0.00000000 );
                        sub_49625();
                        l_U1968[GET_PLAYER_ID()]._fU8 = -5;
                        l_U1968[GET_PLAYER_ID()]._fU0 = 1;
                        sub_122500( ref l_U1500._fU352 );
                        l_U3232 = l_U3208 + 3500;
                        l_U3205 = 1;
                        l_U3209 = 11;
                    }
                }
                break;
                case 4:
                if (l_U3208 > l_U3219)
                {
                    if (IS_SCREEN_FADED_IN())
                    {
                        PRINT_NOW( "COOP_SNIPE_M16", 5000, 1 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( -322343873 );
                        l_U3219 = l_U3208 + 120000;
                    }
                    else if (NOT (IS_CHAR_DEAD( sub_2736() )))
                    {
                        if (NOT IS_SCREEN_FADING_IN())
                        {
                            sub_58230( 1000 );
                        }
                    }
                }
                if (l_U1500._fU948)
                {
                    if (DOES_BLIP_EXIST( l_U3073 ))
                    {
                        SET_ROUTE( l_U3073, 0 );
                        REMOVE_BLIP( l_U3073 );
                    }
                    l_U3209 = 5;
                }
                break;
                case 5:
                CLEAR_PRINTS();
                PRINT_NOW( "COOP_SNIPE_M14", 5000, 1 );
                sub_123753();
                l_U3209 = 6;
                break;
                case 6:
                if (l_U1500._fU948)
                {
                    CLEAR_PRINTS();
                    PRINT_NOW( "COOP_SNIPE_M1", 5000, 1 );
                    l_U3209 = 7;
                }
                break;
                case 7:
                sub_124050();
                sub_129141();
                if (l_U1500._fU696)
                {
                    sub_135841();
                }
                if ((l_U1500._fU272 == 6) AND (l_U1500._fU544 > 0))
                {
                    if ((((l_U1500._fU544 == 1) || (l_U1500._fU544 == 5)) || (l_U1500._fU544 == 6)) || (l_U1500._fU544 == 7))
                    {
                        CLEAR_PRINTS();
                        PRINT_NOW( "COOP_SNIPE_M3", 5000, 1 );
                        PRINT( "COOP_SNIPE_M4", 5000, 1 );
                        PRINT( "COOP_SNIPE_M5", 5000, 1 );
                    }
                    else
                    {
                        CLEAR_PRINTS();
                        PRINT_NOW( "COOP_SNIPE_M3", 5000, 1 );
                    }
                    l_U3209 = 8;
                }
                break;
                case 8:
                sub_124050();
                if ((l_U1500._fU944) AND (NOT l_U3184))
                {
                    FORCE_WEATHER( 7 );
                    FORCE_WIND( 0.60000000 );
                    l_U3184 = 1;
                }
                if (l_U1500._fU272 == 7)
                {
                    if (NOT (DOES_BLIP_EXIST( l_U3107 )))
                    {
                        ADD_BLIP_FOR_COORD( -1406.00700000, 1469.09500000, 28.44910000, ref l_U3107 );
                        CHANGE_BLIP_SPRITE( l_U3107, 4 );
                        SET_ROUTE( l_U3107, 1 );
                        CHANGE_BLIP_COLOUR( l_U3107, 5 );
                    }
                    CLEAR_PRINTS();
                    PRINT_NOW( "COOP_SNIPE_M9", 5000, 1 );
                    l_U3209 = 9;
                }
                else if (l_U1500._fU716)
                {
                    sub_138926();
                }
                break;
                case 9:
                sub_138926();
                sub_124050();
                if (IS_CHAR_IN_AREA_3D( sub_2736(), -1400.58500000, 1464.29400000, 24.99439000, -1411.33300000, 1475.78300000, 29.39546000, 0 ))
                {
                    if (DOES_BLIP_EXIST( l_U3107 ))
                    {
                        SET_ROUTE( l_U3107, 0 );
                        REMOVE_BLIP( l_U3107 );
                    }
                    if (NOT sub_41343())
                    {
                        CLEAR_PRINTS();
                        PRINT_NOW( "COOP_DRUG_06", 5000, 1 );
                    }
                    l_U1968[GET_PLAYER_ID()]._fU116 = 1;
                    l_U3209 = 10;
                }
                else
                {
                    LOCATE_CHAR_ANY_MEANS_3D( sub_2736(), -1406.00700000, 1469.09500000, 28.44910000, 8.00000000, 8.00000000, 8.00000000, 1 );
                }
                if ((l_U1500._fU272 == 11) || (l_U1500._fU516 > 0))
                {
                    l_U3209 = 10;
                }
                break;
                case 10:
                if (l_U1500._fU272 == 11)
                {
                    if (l_U1500._fU516 > 0)
                    {
                        if (IS_SCREEN_FADED_OUT())
                        {
                            if (l_U1500._fU712)
                            {
                                if (l_U1968[GET_PLAYER_ID()]._fU28 == 0)
                                {
                                    l_U1968[GET_PLAYER_ID()]._fU28 = 4;
                                }
                                CLEAR_PRINTS();
                                sub_49625();
                                sub_50959();
                                l_U1968[GET_PLAYER_ID()]._fU0 = 1;
                                l_U1968[GET_PLAYER_ID()]._fU8 = -5;
                                sub_58230( 500 );
                                l_U3209 = 11;
                            }
                            else if (IS_CHAR_DEAD( sub_2736() ))
                            {
                                N_312012851( sub_2736(), ref l_U3475._fU0, ref l_U3475._fU4, ref l_U3475._fU8 );
                                GET_CLOSEST_CAR_NODE( l_U3475._fU0, l_U3475._fU4, l_U3475._fU8, ref l_U3478._fU0, ref l_U3478._fU4, ref l_U3478._fU8 );
                                REQUEST_COLLISION_AT_POSN( l_U3478._fU0, l_U3478._fU4, l_U3478._fU8 );
                                RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), l_U3478, 0.00000000 );
                            }
                        }
                        else if (NOT IS_SCREEN_FADING_OUT())
                        {
                            sub_52185( 500 );
                        }
                    }
                }
                if ((NOT (IS_CHAR_IN_AREA_3D( sub_2736(), -1400.58500000, 1464.29400000, 24.99439000, -1411.33300000, 1475.78300000, 29.39546000, 0 ))) AND (NOT (l_U1500._fU516 > 0)))
                {
                    CLEAR_PRINTS();
                    PRINT_NOW( "COOP_DRUG_07", 5000, 1 );
                    if (NOT (DOES_BLIP_EXIST( l_U3107 )))
                    {
                        ADD_BLIP_FOR_COORD( -1406.00700000, 1469.09500000, 28.44910000, ref l_U3107 );
                        CHANGE_BLIP_SPRITE( l_U3107, 4 );
                        SET_ROUTE( l_U3107, 1 );
                        CHANGE_BLIP_COLOUR( l_U3107, 5 );
                    }
                    l_U3209 = 9;
                }
                break;
                case 11:
                if (l_U3191)
                {
                    sub_84982();
                }
                else if (sub_153661())
                {
                    l_U3191 = 1;
                }
                else
                {
                    sub_153940();
                }
                sub_50959();
                if (IS_SCREEN_FADED_OUT())
                {
                    sub_121999( 1 );
                }
                else
                {
                    sub_121999( 0 );
                }
                if (sub_154416())
                {
                    sub_85936( 0 );
                }
                else
                {
                    sub_52268( 0 );
                }
                break;
                case 12:
                if (IS_SCREEN_FADED_OUT())
                {
                    if (NOT IS_SCREEN_FADING_IN())
                    {
                        sub_58230( 500 );
                    }
                }
                if (l_U1968[GET_PLAYER_ID()]._fU152)
                {
                    l_U1968[GET_PLAYER_ID()]._fU152 = 0;
                }
                if (NOT l_U1968[GET_PLAYER_ID()]._fU132)
                {
                    l_U1968[GET_PLAYER_ID()]._fU132 = 1;
                }
                if (sub_85936( 1 ))
                {
                    sub_52185( 0 );
                    SET_GARAGE_LEAVE_CAMERA_ALONE( "PegGar", 0 );
                    l_U3209 = 13;
                }
                break;
                case 13:
                if (l_U1968[GET_PLAYER_ID()]._fU124)
                {
                    l_U1968[GET_PLAYER_ID()]._fU124 = 0;
                }
                if (((NETWORK_IS_TVT()) AND (sub_53752())) || (NETWORK_IS_RENDEZVOUS()))
                {
                    sub_85936( 0 );
                    SET_WIDESCREEN_FORMAT( 2 );
                    sub_53965( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                    sub_55436( "RETURN_PARTY", sub_65337( 23 ), sub_65370( 23 ), sub_65337( 24 ), sub_65370( 24 ), 255, 255, 255, 255, 2 );
                    if (NETWORK_IS_RENDEZVOUS_HOST())
                    {
                        SET_CREATE_RANDOM_COPS( 1 );
                        sub_154980();
                    }
                }
                else if (DOES_CAM_EXIST( l_U3065 ))
                {
                    SET_CAM_ACTIVE( l_U3065, 0 );
                    SET_CAM_PROPAGATE( l_U3065, 0 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    DESTROY_CAM( l_U3065 );
                }
                SET_CREATE_RANDOM_COPS( 1 );
                sub_93151();
                sub_92007( 1 );;
                break;
                case 14:
                if (l_U1968[GET_PLAYER_ID()]._fU152)
                {
                    l_U1968[GET_PLAYER_ID()]._fU152 = 0;
                }
                if (IS_SCREEN_FADED_OUT())
                {
                    if (NOT IS_SCREEN_FADING_IN())
                    {
                        sub_58230( 500 );
                    }
                }
                if (sub_52268( 1 ))
                {
                    if (IS_SCREEN_FADED_IN())
                    {
                        l_U3209 = 13;
                    }
                }
                break;
            }
        }
        if (l_U1500._fU272 >= 2)
        {
            if ((l_U3209 < 11) AND (l_U3209 > 3))
            {
                sub_92007( 0 );
                sub_155313();
                if (NOT l_U1968[GET_PLAYER_ID()]._fU244)
                {
                    sub_164591();
                }
                else if (IS_CHAR_DEAD( sub_2736() ))
                {
                    if (IS_SCREEN_FADED_OUT())
                    {
                        N_312012851( sub_2736(), ref l_U3475._fU0, ref l_U3475._fU4, ref l_U3475._fU8 );
                        GET_CLOSEST_CAR_NODE( l_U3475._fU0, l_U3475._fU4, l_U3475._fU8, ref l_U3478._fU0, ref l_U3478._fU4, ref l_U3478._fU8 );
                        REQUEST_COLLISION_AT_POSN( l_U3478._fU0, l_U3478._fU4, l_U3478._fU8 );
                        RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), l_U3478, 0.00000000 );
                    }
                }
            }
        }
    }
    return;
}

void sub_380()
{
    int I;

    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        sub_416( GET_PLAYER_ID(), 0 );
    }
    SET_MISSION_FLAG( 1 );
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    SET_GLOBAL_INSTANCE_PRIORITY( 1 );
    SET_MONEY_CARRIED_BY_ALL_NEW_PEDS( 0 );
    REGISTER_HOST_BROADCAST_VARIABLES( ref l_U1500, 468, -1 );
    REGISTER_CLIENT_BROADCAST_VARIABLES( ref l_U1968, 1089, -1 );
    GET_MAX_WANTED_LEVEL( ref l_U3211 );
    SET_WANTED_MULTIPLIER( 0.00000000 );
    SET_MAX_WANTED_LEVEL( 0 );
    ALLOW_EMERGENCY_SERVICES( 0 );
    COPY_COMBAT_DECISION_MAKER( 65546, ref l_U3067 );
    COPY_COMBAT_DECISION_MAKER( 65546, ref l_U3070 );
    N_521945732( 1, ref l_U3066 );
    N_521945732( 0, ref l_U3071 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U3069 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U3068 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U3072 );
    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U3067, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U3067, 5 );
    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U3070, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U3070, 10 );
    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U3069, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U3069, 10 );
    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U3068, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U3068, 5 );
    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U3072, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U3072, 5 );
    SET_DECISION_MAKER_ATTRIBUTE_FIRE_RATE( l_U3072, 2 );
    SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U3072, 1 );
    SET_RELATIONSHIP( 5, 25, 47 );
    SET_PLAYER_KEEPS_WEAPONS_WHEN_RESPAWNED( sub_1079() );
    CLEAR_AREA( -1406.00700000, 1469.09500000, 28.44910000, 100.00000000, 1 );
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( -1400.58500000, 1464.29400000, 24.99439000, -1411.33300000, 1475.78300000, 29.39546000, 0 );
    l_U3377[0] = {1239.92700000, 1451.90200000, 15.40340000};
    l_U3377[1] = {1242.21200000, 1451.64500000, 15.12790000};
    l_U3377[2] = {1244.55500000, 1451.69100000, 14.86280000};
    l_U3377[3] = {1246.33500000, 1451.72400000, 14.79740000};
    l_U3235[0] = {-1410.59600000, 1473.41800000, 24.94760000};
    l_U3235[1] = {-1406.73900000, 1473.41800000, 24.94760000};
    l_U3235[2] = {-1405.17300000, 1473.41800000, 24.94190000};
    l_U3235[3] = {-1402.00900000, 1473.41800000, 24.94190000};
    l_U3235[4] = {-1410.44300000, 1471.79500000, 24.94760000};
    l_U3235[5] = {-1406.71100000, 1471.79500000, 24.94760000};
    l_U3235[6] = {-1405.27500000, 1471.79500000, 24.94200000};
    l_U3235[7] = {-1401.98000000, 1471.79500000, 24.94190000};
    l_U3235[8] = {-1410.29400000, 1468.68200000, 24.94760000};
    l_U3235[9] = {-1406.99800000, 1468.68200000, 24.94760000};
    l_U3235[10] = {-1404.84500000, 1468.68200000, 24.94190000};
    l_U3235[11] = {-1402.25000000, 1468.68200000, 24.94190000};
    l_U3235[12] = {-1409.90300000, 1465.98300000, 24.94760000};
    l_U3235[13] = {-1406.93500000, 1465.98300000, 24.94760000};
    l_U3235[14] = {-1405.12700000, 1465.98300000, 24.94190000};
    l_U3235[15] = {-1401.68600000, 1465.98300000, 24.94190000};
    l_U3481[0] = 180.51490000;
    l_U3481[1] = 180.51490000;
    l_U3481[2] = 180.51490000;
    l_U3481[3] = 180.51490000;
    l_U3481[4] = 180.51490000;
    l_U3481[5] = 180.71090000;
    l_U3481[6] = 180.71090000;
    l_U3481[7] = 180.71090000;
    l_U3481[8] = 284.72890000;
    l_U3481[9] = 46.61570000;
    l_U3481[10] = 321.34430000;
    l_U3481[11] = 28.92020000;
    l_U3481[12] = 340.19630000;
    l_U3481[13] = 20.00480000;
    l_U3481[14] = 336.50960000;
    l_U3481[15] = 24.73540000;
    l_U3451 = {-1969.57200000, -677.49290000, 5.38977200};
    l_U3454 = {-1890.22700000, -621.07120000, 1.74547900};
    l_U3457 = {-1892.96100000, -635.62460000, 10.69892000};
    l_U3460 = {-1965.95500000, -672.17830000, 15.53131000};
    l_U3463 = {-1965.95500000, -672.17830000, 15.53131000};
    l_U3466 = {-1892.60200000, -635.71950000, 21.00838000};
    l_U3469 = {-1966.83500000, -673.02810000, 26.41593000};
    l_U3472 = {-1893.17300000, -634.31150000, 31.48756000};
    l_U3426[0] = {-1875.22400000, -636.20580000, 1.83820000};
    l_U3426[1] = {-1872.27500000, -637.88000000, 1.83820000};
    l_U3426[2] = {-1876.16400000, -639.64640000, 1.83820000};
    l_U3426[3] = {-1879.19600000, -642.26820000, 1.83820000};
    l_U3426[4] = {-1874.54200000, -643.56970000, 1.83820000};
    l_U3426[5] = {-1870.79200000, -641.20300000, 1.83820000};
    l_U3426[6] = {-1873.78500000, -638.28740000, 1.83820000};
    l_U3426[7] = {-1867.24700000, -636.87630000, 1.83820000};
    l_U3284[0] = {-1911.50100000, -661.94290000, 8.51260000};
    l_U3284[1] = {-1941.80700000, -640.77610000, 8.51280000};
    l_U3284[2] = {-1953.85000000, -662.22790000, 13.84520000};
    l_U3284[3] = {-1912.73100000, -646.31010000, 13.84530000};
    l_U3284[4] = {-1911.48500000, -664.32800000, 19.17740000};
    l_U3284[5] = {-1938.60400000, -657.32330000, 19.17740000};
    l_U3284[6] = {-1930.69500000, -668.45780000, 2.01450000};
    l_U3284[7] = {-1906.41100000, -639.51360000, 2.01490000};
    l_U3284[8] = {-1929.99900000, -591.30490000, 1.83830000};
    sub_2528( "PLAYER", 1, 13, -1 );
    sub_2528( "KILLS", 2, 11, 3 );
    sub_2528( "DEATHS", 2, 6, 4 );
    sub_2528( "TMKILLS", 2, 29, 6 );
    sub_2528( "CASH", 6, 16, 20 );
    sub_2528( "TIME", 4, 31, 22 );
    BEGIN_CAM_COMMANDS( ref l_U3210 );
    if (NOT (IS_CHAR_DEAD( sub_2736() )))
    {
        SET_CHAR_VISIBLE( sub_2736(), 0 );
    }
    for ( I = 0; I <= 15; I++ )
    {
        sub_2827( ref l_U1968[I]._fU4 );
    }
    return;
}

void sub_416(unknown uParam0, boolean bParam1)
{
    SET_PLAYER_CONTROL_FOR_NETWORK( sub_427( uParam0 ), bParam1, 0 );
    SET_CHAR_VISIBLE( sub_465( uParam0 ), bParam1 );
    if (bParam1)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_465( uParam0 ) )))
        {
            SET_CHAR_COLLISION( sub_465( uParam0 ), 1 );
        }
        FREEZE_CHAR_POSITION( sub_465( uParam0 ), 0 );
        SET_CHAR_NEVER_TARGETTED( sub_465( uParam0 ), 0 );
        SET_PLAYER_INVINCIBLE( sub_427( uParam0 ), 0 );
    }
    else
    {
        SET_CHAR_COLLISION( sub_465( uParam0 ), 0 );
        FREEZE_CHAR_POSITION( sub_465( uParam0 ), 1 );
        SET_CHAR_NEVER_TARGETTED( sub_465( uParam0 ), 1 );
        SET_PLAYER_INVINCIBLE( sub_427( uParam0 ), 1 );
        REMOVE_PTFX_FROM_PED( sub_465( uParam0 ) );
        if (NOT (IS_CHAR_FATALLY_INJURED( sub_465( uParam0 ) )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_465( uParam0 ) );
        }
    }
    return;
}

void sub_427(unknown uParam0)
{
    return CONVERT_INT_TO_PLAYERINDEX( uParam0 );
}

void sub_465(unknown uParam0)
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( uParam0 ), ref Result );
    return Result;
}

void sub_1079()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_2528(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int I;

    for ( I = 0; I < 7; I++ )
    {
        if (l_U662[I]._fU16 == 0)
        {
            StrCopy( ref l_U662[I]._fU0, uParam0, 16 );
            l_U662[I]._fU16 = uParam1;
            l_U662[I]._fU20 = uParam2;
            l_U662[I]._fU92 = uParam3;
            return;
        }
    }
    return;
}

void sub_2736()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2827(unknown uParam0)
{
    NETWORK_SET_TALKER_FOCUS( -1 );
    sub_2848( uParam0, 31, 0 );
    return;
}

void sub_2848(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U18._fU636 = uParam1;
    g_U18._fU632 = uParam2;
    sub_2879( uParam0, uParam1 );
    sub_2913( uParam0, uParam2 );
    return;
}

void sub_2879(unknown uParam0, unknown uParam1)
{
    SET_BITS_IN_RANGE( uParam0, 0, 15, uParam1 );
    return;
}

void sub_2913(unknown uParam0, unknown uParam1)
{
    SET_BITS_IN_RANGE( uParam0, 16, 31, uParam1 );
    return;
}

int sub_2978()
{
    if (l_U596)
    {
        return 1;
    }
    l_U599[0] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_ARROW_RIGHT" );
    l_U599[1] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_ARROW_UP" );
    l_U599[2] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_ARROW_UPDOWN" );
    l_U599[3] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_BESTLAP" );
    l_U599[4] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_CAR_STOLEN" );
    l_U599[5] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_CRIMINAL" );
    l_U599[6] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_DEATHS" );
    l_U599[7] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_HEADSET_ON1" );
    l_U599[8] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_HEADSET_ON2" );
    l_U599[9] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_HOLDINGSTASH" );
    l_U599[10] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_KICK_PLAYER" );
    l_U599[11] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_KILLS" );
    l_U599[12] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_NOTCONNECTED" );
    l_U599[13] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_PLAYER" );
    l_U599[14] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_POSITIONS" );
    l_U599[15] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_RANKING" );
    l_U599[16] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_SCORE" );
    l_U599[17] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_0" );
    l_U599[18] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_1" );
    l_U599[19] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_2" );
    l_U599[20] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_3" );
    l_U599[21] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_4" );
    l_U599[22] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_5" );
    l_U599[23] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_6" );
    l_U599[24] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_7" );
    l_U599[25] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_8" );
    l_U599[26] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_9" );
    l_U599[27] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_10" );
    l_U599[28] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_TASKS_COMPLETED" );
    l_U599[29] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_TEAM_KILL" );
    l_U599[30] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_TERRITORY" );
    l_U599[31] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_TOTALTIME" );
    l_U599[32] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_VIP" );
    l_U599[33] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_GTA" );
    l_U599[34] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_INVITE" );
    l_U599[35] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "MAP_LOBBY" );
    l_U596 = 1;
    return 1;
}

void sub_4565(unknown uParam0)
{
    StrCopy( ref l_U0._fU0, uParam0, 16 );
    sub_4582();
    return;
}

void sub_4582()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U0._fU16[I]._fU0 = nil;
        StrCopy( ref l_U0._fU16[I]._fU4, "", 32 );
        l_U0._fU344[I] = 0;
    }
    return;
}

void sub_4676(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U0._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U0._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4756( "\n PED NUMBER ", uParam0 );
    sub_4796( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4756(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4796(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4859(unknown uParam0)
{
    l_U1417 = uParam0;
    return;
}

void sub_4994(unknown uParam0)
{
    g_U18._fU668 = -1;
    g_U18._fU672 = uParam0;
    return;
}

void sub_5220(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref l_U1087[uParam0]._fU0, uParam2, 16 );
    l_U1087[uParam0]._fU16 = uParam1;
    l_U1087[uParam0]._fU24 = uParam3;
    l_U1087[uParam0]._fU20 = uParam4;
    l_U1087[uParam0]._fU28 = uParam4;
    return;
}

void sub_5630(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U1293 = uParam0;
    l_U1295 = uParam1;
    l_U1292 = uParam2;
    l_U1294 = uParam3;
    l_U1296 = 1;
    return;
}

void sub_5681()
{
    RESTORE_SCRIPT_ARRAY_FROM_SCRATCHPAD( ref l_U1439, 61, 2, 2 );
    return;
}

int sub_5714()
{
    if (IS_THIS_MACHINE_THE_SERVER())
    {
        SET_THIS_MACHINE_RUNNING_SERVER_SCRIPT( 1 );
        return 1;
    }
    return 0;
}

void sub_5771(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref uVar4._fU0, 10);
    ref uVar4;
    N_3938899946( ref uVar4 );
    switch (uParam0)
    {
        case 419: return uVar4._fU0[6];
        case 420: return uVar4._fU0[7];
        case 421: return 0;
    }
    return uVar4._fU0[8];
}

void sub_5910(unknown uParam0, unknown Result)
{
    if (IS_BIT_SET( l_U1439[uParam0], 0 ))
    {
        return GET_BITS_IN_RANGE( l_U1439[uParam0], 1, 31 );
    }
    return Result;
}

void sub_6136()
{
    SET_THIS_MACHINE_RUNNING_SERVER_SCRIPT( 0 );
    return;
}

void sub_6247()
{
    g_U18._fU660 = -1;
    g_U18._fU664 = 1;
    return;
}

void sub_6299()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        l_U1968[I]._fU52 = 50;
        l_U1968[I]._fU56 = 50;
        l_U1968[I]._fU60 = 50;
        l_U1968[I]._fU64 = 50;
        l_U1968[I]._fU68 = 50;
        l_U1968[I]._fU72 = 50;
        l_U1968[I]._fU76 = 50;
        l_U1968[I]._fU80 = 50;
        l_U1968[I]._fU84 = 50;
        l_U1968[I]._fU88 = 50;
        l_U1968[I]._fU92 = 50;
        l_U1968[I]._fU96 = 50;
    }
    return;
}

void sub_6556(unknown uParam0)
{
    l_U1351 = uParam0;
    return;
}

void sub_6702(int iParam0, boolean bParam1, unknown uParam2)
{
    int iVar5;
    unknown uVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    uVar11 = sub_6711();
    if (IS_NETWORK_GAME_RUNNING())
    {
        GET_NETWORK_TIMER( ref iVar5 );
        if (NETWORK_IS_SESSION_STARTED())
        {
            if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
            {
                if (l_U1431)
                {
                    l_U1431 = 0;
                }
                switch (uVar11)
                {
                    case 1:
                    if (NOT sub_6982())
                    {
                        if (iParam0 != l_U1428)
                        {
                            sub_7051( iParam0 );
                            iParam0 = l_U1428;
                        }
                    }
                    else if (NOT l_U1430)
                    {
                        l_U1429 = iVar5 + 25000;
                        l_U1430 = 1;
                        sub_7051( iParam0 );
                    }
                    else if (l_U1429 < iVar5)
                    {
                        l_U1430 = 0;
                    };;;
                    break;
                    case 2:
                    if (NOT l_U1430)
                    {
                        l_U1429 = iVar5 + 45000;
                        l_U1430 = 1;
                        iVar7 = iParam0 - iVar5;
                        iVar7 = iVar7 / 60000;
                        if (NOT bParam1)
                        {
                            sub_7072();
                            SET_RICH_PRESENCE_TEMPLATEMP3( iVar7 + 1, sub_6720() );
                        }
                        else if (NOT sub_7958())
                        {
                            sub_7072();
                            SET_RICH_PRESENCE_TEMPLATEMP6( sub_8029(), iParam0, sub_6720() );
                        }
                        else
                        {
                            sub_7072();
                            SET_RICH_PRESENCE_TEMPLATEMP6( uParam2, iParam0, sub_6720() );
                        }
                    }
                    else if (l_U1429 < iVar5)
                    {
                        l_U1430 = 0;
                    }
                    break;
                    case 3:
                    if (l_U1428 != sub_7667())
                    {
                        sub_7072();
                        SET_RICH_PRESENCE_TEMPLATEMP5( 3, sub_7667(), sub_6720() );
                        l_U1428 = sub_7667();
                    }
                    break;
                    case 0:
                    if (NOT l_U1430)
                    {
                        l_U1429 = iVar5 + 45000;
                        l_U1430 = 1;
                        sub_7072();
                        SET_RICH_PRESENCE_TEMPLATEMP2( sub_6720() );
                    }
                    else if (l_U1429 < iVar5)
                    {
                        l_U1430 = 0;
                    }
                    break;
                }
            }
        }
        else if (NOT l_U1431)
        {
            if (NOT NETWORK_IS_SESSION_STARTED())
            {
                if (sub_6720() == 16)
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
                    {
                        GET_CHAR_COORDINATES( sub_2736(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                        if ((GET_MAP_AREA_FROM_COORDS( uVar8 )) != 5)
                        {
                            if (NOT l_U1430)
                            {
                                l_U1429 = iVar5 + 45000;
                                l_U1430 = 1;
                                sub_7072();
                                SET_RICH_PRESENCE_TEMPLATEMP2( sub_6720() );
                            }
                            else if (l_U1429 < iVar5)
                            {
                                l_U1430 = 0;
                            }
                        }
                    }
                }
                else if (sub_6720() == 8)
                {
                    SET_RICH_PRESENCE_TEMPLATEPARTY();
                    l_U1431 = 1;
                }
                else
                {
                    sub_7072();
                    SET_RICH_PRESENCE_TEMPLATELOBBY( sub_6720() );
                    l_U1430 = 0;
                    l_U1431 = 1;
                }
            }
        }
    }
    return;
}

int sub_6711()
{
    switch (sub_6720())
    {
        case 7:
        case 6: return 1;
        case 13:
        case 14:
        case 15:
        case 11:
        case 10: return 3;
        case 16:
        case 8: return 0;
    }
    return 2;
    return 3;
}

void sub_6720()
{
    if (l_U98 == -1)
    {
        l_U98 = NETWORK_GET_GAME_MODE();
    }
    return l_U98;
}

int sub_6982()
{
    int iVar2;

    iVar2 = sub_6720();
    if (((iVar2 == 7) || (iVar2 == 8)) || (iVar2 == 6))
    {
        return 1;
    }
    return 0;
}

void sub_7051(int iParam0)
{
    if (l_U1432 == 0)
    {
        sub_7072();
        SET_RICH_PRESENCE_TEMPLATEMP1( 1, sub_7097( GET_PLAYER_ID() ), sub_7667(), sub_6720() );
        l_U1432 = 1;
    }
    else if ((iParam0 > 0) AND (iParam0 < 60))
    {
        sub_7072();
        SET_RICH_PRESENCE_TEMPLATEMP4( iParam0, sub_6720() );
        l_U1432 = 0;
    }
    return;
}

void sub_7072()
{
    return;
}

void sub_7097(unknown uParam0)
{
    if (l_U960)
    {
        return l_U831[uParam0]._fU16;
    }
    return sub_7132( uParam0 );
}

int sub_7132(int iParam0)
{
    int I;
    int iVar4;
    int Result;

    if (sub_7143( iParam0 ))
    {
        for ( I = 0; I < 16; I++ )
        {
            iVar4 = l_U662[0]._fU24[I];
            if ((IS_NETWORK_PLAYER_ACTIVE( iVar4 )) AND (NOT l_U1048[iVar4]))
            {
                Result++;
                if (l_U662[sub_7288()]._fU24[iVar4] == l_U662[sub_7288()]._fU24[iParam0])
                {
                    return Result;
                }
            }
        }
    }
    else
    {
        for ( I = 0; I < 16; I++ )
        {
            iVar4 = l_U662[0]._fU24[I];
            if ((IS_NETWORK_PLAYER_ACTIVE( iVar4 )) AND (NOT l_U1048[iVar4]))
            {
                Result++;
                if (iVar4 == iParam0)
                {
                    return Result;
                }
            }
        }
    }
    return 1;
}

int sub_7143(int iParam0)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (I != iParam0)
        {
            if ((sub_7176( I )) AND (NOT (sub_7228( I ))))
            {
                if (l_U662[sub_7288()]._fU24[I] == l_U662[sub_7288()]._fU24[iParam0])
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_7176(unknown uParam0)
{
    if (l_U960)
    {
        return l_U831[uParam0]._fU4;
    }
    return IS_NETWORK_PLAYER_ACTIVE( uParam0 );
}

void sub_7228(unknown uParam0)
{
    if (l_U960)
    {
        return l_U831[uParam0]._fU8;
    }
    return l_U1048[uParam0];
}

int sub_7288()
{
    int Result;

    for ( Result = 0; Result < 7; Result++ )
    {
        if (((l_U662[Result]._fU16 == 7) || (l_U662[Result]._fU16 == 6)) || (l_U662[Result]._fU16 == 3))
        {
            return Result;
        }
    }
    return 1;
}

void sub_7667()
{
    int I;
    int Result;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            Result++;
        }
    }
    return Result;
}

int sub_7958()
{
    int iVar2;

    iVar2 = NETWORK_GET_GAME_MODE();
    if (((((iVar2 == 10) || (iVar2 == 12)) || (iVar2 == 1)) || (iVar2 == 3)) || (iVar2 == 4))
    {
        return 1;
    }
    return 0;
}

void sub_8029()
{
    unknown Result;

    if (IS_PLAYER_PLAYING( sub_1079() ))
    {
        STORE_SCORE( sub_1079(), ref Result );
    }
    return Result;
}

void sub_8586()
{
    int I;
    unknown[16] uVar3;
    unknown[2] uVar20;

    array(ref uVar3, 16);
    array(ref uVar20, 2);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1968[I]._fU0;
    }
    if (sub_8663( ref l_U1500._fU1208, l_U1500._fU1208 ))
    {
        sub_8853( ref uVar3, ref l_U1500._fU276, 50.00000000, ref l_U1500._fU1208, 50.00000000 );
    }
    else if (sub_8663( ref l_U1500._fU1292, l_U1500._fU1292 ))
    {
        sub_8853( ref uVar3, ref l_U1500._fU276, 50.00000000, ref l_U1500._fU1292, 50.00000000 );
    }
    else if (sub_8663( ref l_U1500._fU1572, l_U1500._fU1572 ))
    {
        sub_8853( ref uVar3, ref l_U1500._fU276, 50.00000000, ref l_U1500._fU1572, 50.00000000 );
    }
    else if (sub_8663( ref l_U1500._fU1668, l_U1500._fU1668 ))
    {
        sub_8853( ref uVar3, ref l_U1500._fU276, 50.00000000, ref l_U1500._fU1668, 50.00000000 );
    }
    else if (sub_8663( ref l_U1500._fU1696, l_U1500._fU1696 ))
    {
        sub_8853( ref uVar3, ref l_U1500._fU276, 50.00000000, ref l_U1500._fU1696, 50.00000000 );
    }
    else if (sub_8663( ref l_U1500._fU1712, l_U1500._fU1712 ))
    {
        sub_8853( ref uVar3, ref l_U1500._fU276, 50.00000000, ref l_U1500._fU1712, 50.00000000 );
    }
    else
    {
        sub_8853( ref uVar3, ref l_U1500._fU276, 10.00000000, ref uVar20, 1120403456 );
    };;;;;;
    return;
}

int sub_8663(unknown uParam0, int iParam1)
{
    int I;

    for ( I = 0; I < iParam1; I++ )
    {
        if (sub_8692( (uParam0^)[I] ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_8692(unknown uParam0)
{
    if (DOES_PED_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        if (NOT (IS_CHAR_DEAD( sub_8717( uParam0 ) )))
        {
            if (NOT (IS_CHAR_INJURED( sub_8717( uParam0 ) )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_8717(unknown uParam0)
{
    unknown Result;

    GET_PED_FROM_NETWORK_ID( uParam0, ref Result );
    return Result;
}

void sub_8853(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    int I;

    for ( I = 15; I >= 0; I += -1 )
    {
        if (((uParam0^)[I] == 1) || (NOT (IS_NETWORK_PLAYER_ACTIVE( I ))))
        {
            (uParam1^)[I] = 0;
        }
        else if (((uParam0^)[I] == 0) AND (IS_NETWORK_PLAYER_ACTIVE( I )))
        {
            if ((uParam1^)[I] == 0)
            {
                if (l_U1417)
                {
                    sub_9052( uParam1, sub_8969( sub_465( I ) ), uParam2, uParam4, uParam3, I );
                }
                else if (l_U1421)
                {
                    sub_9052( uParam1, l_U1422, uParam2, uParam4, uParam3, I );
                }
                else if (l_U1420)
                {
                    sub_9052( uParam1, sub_11241( -1, 1 ), uParam2, uParam4, uParam3, I );
                }
                else
                {
                    sub_9052( uParam1, sub_11241( GET_PLAYER_TEAM( sub_427( I ) ), 1 ), uParam2, uParam4, uParam3, I );
                };;;
            }
        }
    }
    return;
}

void sub_8969(unknown uParam0)
{
    unknown Result;
    unknown uVar4;
    unknown uVar5;

    if (IS_CHAR_DEAD( uParam0 ))
    {
        N_312012851( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else
    {
        GET_CHAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    return Result;
}

int sub_9052(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    int I;
    unknown uVar11;
    int iVar12;
    boolean bVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;

    if (LOAD_ALL_PATH_NODES( 1 ))
    {
        FLUSH_ALL_SPAWN_BLOCKING_AREAS();
        for ( I = 0; I < (uParam6^); I++ )
        {
            if (sub_9105( (uParam6^)[I] ))
            {
                ADD_SPAWN_BLOCKING_AREA( sub_9605( (uParam6^)[I] ), uParam5 );
            }
        }
        while (iVar12 < 127)
        {
            if (NOT l_U1417)
            {
                sub_9800( ref uParam1, uParam4 + l_U1426 );
            }
            bVar13 = false;
            if (l_U1419)
            {
                if (GET_RANDOM_CAR_NODE( uParam1, uParam4 + l_U1426, 2, 1, 1, ref uVar14, ref uVar11 ))
                {
                    bVar13 = true;
                }
            }
            else if (l_U1418)
            {
                if (sub_10749())
                {
                    if (GET_SORTED_NETWORK_RESTART_NODE_USING_GROUP_LIST( uParam1, uParam4 + l_U1426, ref uVar14, ref uVar11, uParam7, 2, uParam5 ))
                    {
                        bVar13 = true;
                    }
                }
                else if (GET_SORTED_NETWORK_RESTART_NODE_USING_GROUP_LIST( uParam1, uParam4 + l_U1426, ref uVar14, ref uVar11, uParam7, 7, uParam5 ))
                {
                    bVar13 = true;
                }
            }
            else if (sub_10749())
            {
                if (GET_SORTED_NETWORK_RESTART_NODE( uParam1, uParam4 + l_U1426, ref uVar14, ref uVar11, uParam7, 0, uParam5 ))
                {
                    bVar13 = true;
                }
            }
            else if (sub_6720() == 7)
            {
                if (GET_SORTED_NETWORK_RESTART_NODE( uParam1, uParam4 + l_U1426, ref uVar14, ref uVar11, uParam7, 9, uParam5 ))
                {
                    bVar13 = true;
                }
            }
            else if (sub_6720() == 16)
            {
                if (GET_SORTED_NETWORK_RESTART_NODE( uParam1, uParam4 + l_U1426, ref uVar14, ref uVar11, uParam7, 21, uParam5 ))
                {
                    bVar13 = true;
                }
            }
            else if (GET_SORTED_NETWORK_RESTART_NODE( uParam1, uParam4 + l_U1426, ref uVar14, ref uVar11, uParam7, 7, uParam5 ))
            {
                bVar13 = true;
            };;;;;;
            if (bVar13)
            {
                (uParam0^)[uParam7] = uVar11;
                l_U1426 = 0.00000000;
                REGISTER_PLAYER_RESPAWN_COORDS( uParam7, uVar14 );
                return 1;
            }
            else
            {
                l_U1426 += 30.00000000;
                return 0;
            }
        }
        l_U1426 += 10.00000000;
    }
    return 0;
}

int sub_9105(unknown uParam0)
{
    int iVar3;

    if (DOES_PED_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        if (IS_CHAR_DEAD( sub_8717( uParam0 ) ))
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        if (IS_VEH_DRIVEABLE( sub_9181( uParam0 ) ))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else if (DOES_OBJECT_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        if (IS_OBJECT_IN_WATER( sub_9256( uParam0 ) ))
        {
            return 0;
        }
        else
        {
            iVar3 = sub_9342( sub_9313( sub_9256( uParam0 ) ) );
            if (((iVar3 == 0) || (((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( sub_9256( uParam0 ), 1 )) < 0.30000000) AND (iVar3 < 500))) || (((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( sub_9256( uParam0 ), 0 )) < 0.30000000) AND (iVar3 < 500)))
            {
                return 0;
            }
            else if (IS_OBJECT_ATTACHED( sub_9256( uParam0 ) ))
            {
                if (DOES_VEHICLE_EXIST( GET_CAR_OBJECT_IS_ATTACHED_TO( sub_9256( uParam0 ) ) ))
                {
                    if (IS_VEH_DRIVEABLE( GET_CAR_OBJECT_IS_ATTACHED_TO( sub_9256( uParam0 ) ) ))
                    {
                        return 1;
                    }
                    else if (IS_CAR_IN_WATER( GET_CAR_OBJECT_IS_ATTACHED_TO( sub_9256( uParam0 ) ) ))
                    {
                        return 0;
                    }
                    else
                    {
                        return 1;
                    }
                }
                else
                {
                    return 1;
                }
            }
            else
            {
                return 1;
            }
        }
    };;;
    return 0;
}

void sub_9181(unknown uParam0)
{
    unknown Result;

    GET_VEHICLE_FROM_NETWORK_ID( uParam0, ref Result );
    return Result;
}

void sub_9256(unknown uParam0)
{
    unknown Result;

    GET_OBJECT_FROM_NETWORK_ID( uParam0, ref Result );
    return Result;
}

void sub_9313(unknown uParam0)
{
    unknown Result;

    GET_OBJECT_HEALTH( uParam0, ref Result );
    return Result;
}

void sub_9342(unknown uParam0)
{
    return FLOOR( uParam0 );
}

void sub_9605(unknown uParam0)
{
    unknown Result;
    unknown uVar4;
    unknown uVar5;

    if (DOES_PED_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        GET_CHAR_COORDINATES( sub_8717( uParam0 ), ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        GET_DEAD_CAR_COORDINATES( sub_9181( uParam0 ), ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else if (DOES_OBJECT_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        GET_OBJECT_COORDINATES( sub_9256( uParam0 ), ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    };;;
    return Result;
}

void sub_9800(int iParam0, float fParam1)
{
    if (fParam1 > 500.00000000)
    {
        (iParam0^) = {sub_9826( (iParam0^) )};
        return;
    }
    if (iParam0->_fU0 > 311.18070000)
    {
        if (iParam0->_fU4 > 1267.14300000)
        {
            if ((iParam0->_fU0 - fParam1) < 311.18070000)
            {
                iParam0->_fU0 = 311.18070000 + fParam1;
            }
            if ((iParam0->_fU4 - fParam1) < 1267.14300000)
            {
                iParam0->_fU4 = 1267.14300000 + fParam1;
            }
            return;
        }
        else if (iParam0->_fU0 > 529.00000000)
        {
            if ((iParam0->_fU4 + fParam1) > 1267.14300000)
            {
                iParam0->_fU4 = 1267.14300000 - fParam1;
            }
            if ((iParam0->_fU0 - fParam1) < 529.00000000)
            {
                iParam0->_fU0 = 529.00000000 + fParam1;
            }
            return;
        }
    }
    else if (iParam0->_fU0 < -745.48310000)
    {
        if ((iParam0->_fU0 + fParam1) > -745.48310000)
        {
            iParam0->_fU0 = -745.48310000 - fParam1;
        }
        return;
    }
    if (iParam0->_fU4 > 1267.14300000)
    {
        if ((iParam0->_fU0 + fParam1) > 311.18070000)
        {
            iParam0->_fU0 = 311.18070000 - fParam1;
            return;
        }
    }
    else if ((iParam0->_fU0 + fParam1) > 529.00000000)
    {
        iParam0->_fU0 = 529.00000000 - fParam1;
        return;
    }
    if ((iParam0->_fU0 - fParam1) < -745.48310000)
    {
        iParam0->_fU0 = -745.48310000 + fParam1;
    }
    return;
}

void sub_9826(vector vParam0)
{
    int I;
    int iVar6;
    float fVar7;
    float fVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    vector vVar12;

    iVar6 = -1;
    fVar7 = 2.5E7;
    for ( I = 0; I < 8; I++ )
    {
        vVar12 = {sub_9859( I )};
        uVar9 = {vParam0 - vVar12};
        fVar8 = ((uVar9._fU0 * uVar9._fU0) + (uVar9._fU4 * uVar9._fU4)) + (uVar9._fU8 * uVar9._fU8);
        if (fVar7 > fVar8)
        {
            iVar6 = I;
            fVar7 = fVar8;
        }
    }
    return sub_9859( iVar6 );
}

vector sub_9859(int iParam0)
{
    if (iParam0 == -1)
    {
        iParam0 = sub_9879( 0, 8 );
    }
    switch (iParam0)
    {
        case 0:
        return vector( 15.99670000, 1695.95200000, 905.27170000);
        break;
        case 1:
        return vector( 21.42760000, 403.18210000, 1308.08100000);
        break;
        case 2:
        return vector( 17.62610000, -345.36140000, 1132.11700000);
        break;
        case 3:
        return vector( 13.72400000, -288.08140000, -37.85620000);
        break;
        case 4:
        return vector( 13.81190000, 397.71090000, -220.00020000);
        break;
        case 5:
        return vector( 13.80190000, 1187.77700000, -271.03720000);
        break;
        case 6:
        return vector( 22.81060000, 1277.81500000, -1181.39700000);
        break;
        case 7:
        return vector( 11.96080000, 237.23200000, -1581.99200000);
        break;
    }
    return vector( 17.62610000, -345.36140000, 1132.11700000);
}

void sub_9879(unknown uParam0, unknown Result)
{
    GENERATE_RANDOM_INT_IN_RANGE( uParam0, Result, ref Result );
    return Result;
}

int sub_10749()
{
    int iVar2;

    iVar2 = NETWORK_GET_GAME_MODE();
    if ((((iVar2 == 13) || (iVar2 == 14)) || (iVar2 == 15)) || (iVar2 == 16))
    {
        return 1;
    }
    return 0;
}

vector sub_11241(int iParam0, unknown uParam1)
{
    int I;
    int iVar5;
    int iVar6;
    vector vVar7;

    if ((l_U1415) AND (uParam1))
    {
        return sub_9859( l_U1416 );
    }
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (IS_PLAYER_CONTROL_ON( sub_427( I ) ))
            {
                if (NOT (sub_11350( sub_465( I ), -2000.00000000, -2000.00000000, 250.00000000, 50.00000000 )))
                {
                    iVar6++;
                    if (((GET_PLAYER_TEAM( sub_427( I ) )) == iParam0) || (iParam0 == -1))
                    {
                        vVar7 = {vVar7 + (sub_8969( sub_465( I ) ))};
                        iVar5++;
                    }
                }
            }
        }
    }
    if (iVar5 == 0)
    {
        if ((iVar6 > 0) AND (iParam0 != -1))
        {
            return sub_11241( -1, 0 );
        }
        else
        {
            return sub_9859( -1 );
        }
    }
    return vVar7 / (TO_FLOAT( iVar5 ));
}

int sub_11350(unknown uParam0, vector vParam1, float fParam4)
{
    float fVar7;
    vector vVar8;

    fParam4 *= fParam4;
    GET_CHAR_COORDINATES( uParam0, ref vVar8.x, ref vVar8.y, ref vVar8.z );
    vVar8 = {vVar8 - vParam1};
    fVar7 = ((vVar8.x * vVar8.x) + (vVar8.y * vVar8.y)) + (vVar8.z * vVar8.z);
    if (fVar7 < fParam4)
    {
        return 1;
    }
    return 0;
}

void sub_12036()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_12059( I ))
        {
            if (NETWORK_PLAYER_HAS_DIED_RECENTLY( I ))
            {
                if (I != (FIND_NETWORK_KILLER_OF_PLAYER( I )))
                {
                    l_U1500._fU0[FIND_NETWORK_KILLER_OF_PLAYER( I )] -= 100;
                    l_U1500._fU204[FIND_NETWORK_KILLER_OF_PLAYER( I )]++;
                }
                l_U1500._fU136[I]++;
            }
        }
        else if (PLAYER_WANTS_TO_JOIN_NETWORK_GAME( I ))
        {
            TELL_NET_PLAYER_TO_START_PLAYING( I, 0 );
        }
    }
    return;
}

int sub_12059(unknown uParam0)
{
    if (IS_NETWORK_PLAYER_ACTIVE( uParam0 ))
    {
        if ((NOT l_U1968[uParam0]._fU124) AND (NOT l_U1968[uParam0]._fU152))
        {
            return 1;
        }
    }
    return 0;
}

void sub_12327()
{
    unknown uVar2;
    int I;

    for ( I = 0; I < l_U1500._fU1208; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1208[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( sub_8717( l_U1500._fU1208[I] ) ))
            {
                if ((GET_DESTROYER_OF_NETWORK_ID( l_U1500._fU1208[I], ref uVar2 )) != -1)
                {
                    if (l_U1500._fU952[I] == 0)
                    {
                        l_U1500._fU0[GET_DESTROYER_OF_NETWORK_ID( l_U1500._fU1208[I], ref uVar2 )] += 100;
                        l_U1500._fU68[GET_DESTROYER_OF_NETWORK_ID( l_U1500._fU1208[I], ref uVar2 )]++;
                        l_U1500._fU952[I] = l_U3208 + 5000;
                    }
                    else if (l_U3208 > l_U1500._fU952[I])
                    {
                        if (((l_U1968[GET_PLAYER_ID()]._fU220) AND (l_U1968[GET_PLAYER_ID()]._fU224)) AND (l_U1968[GET_PLAYER_ID()]._fU228))
                        {
                            sub_12725( sub_8717( l_U1500._fU1208[I] ) );
                            l_U1500._fU1208[I] = nil;
                        }
                    }
                }
            }
        }
    }
    for ( I = 0; I < l_U1500._fU1292; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1292[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( sub_8717( l_U1500._fU1292[I] ) ))
            {
                if ((GET_DESTROYER_OF_NETWORK_ID( l_U1500._fU1292[I], ref uVar2 )) != -1)
                {
                    if (l_U1500._fU1036[I] == 0)
                    {
                        l_U1500._fU0[GET_DESTROYER_OF_NETWORK_ID( l_U1500._fU1292[I], ref uVar2 )] += 100;
                        l_U1500._fU68[GET_DESTROYER_OF_NETWORK_ID( l_U1500._fU1292[I], ref uVar2 )]++;
                        l_U1500._fU1036[I] = l_U3208 + 5000;
                    }
                    else if (l_U3208 > l_U1500._fU1036[I])
                    {
                        if (sub_13080())
                        {
                            sub_12725( sub_8717( l_U1500._fU1292[I] ) );
                            l_U1500._fU1292[I] = nil;
                        }
                    }
                }
            }
        }
    }
    for ( I = 0; I < l_U1500._fU1572; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1572[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( sub_8717( l_U1500._fU1572[I] ) ))
            {
                if ((GET_DESTROYER_OF_NETWORK_ID( l_U1500._fU1572[I], ref uVar2 )) != -1)
                {
                    if (l_U1500._fU1072[I] == 0)
                    {
                        l_U1500._fU0[GET_DESTROYER_OF_NETWORK_ID( l_U1500._fU1572[I], ref uVar2 )] += 100;
                        l_U1500._fU68[GET_DESTROYER_OF_NETWORK_ID( l_U1500._fU1572[I], ref uVar2 )]++;
                        l_U1500._fU1072[I] = l_U3208 + 5000;
                    }
                    else if (l_U3208 > l_U1500._fU1072[I])
                    {
                        if (sub_13782())
                        {
                            sub_12725( sub_8717( l_U1500._fU1572[I] ) );
                            l_U1500._fU1572[I] = nil;
                        }
                    }
                }
            }
        }
    }
    for ( I = 0; I < l_U1500._fU1696; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1696[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( sub_8717( l_U1500._fU1696[I] ) ))
            {
                if ((GET_DESTROYER_OF_NETWORK_ID( l_U1500._fU1696[I], ref uVar2 )) != -1)
                {
                    if (l_U1500._fU1100[I] == 0)
                    {
                        l_U1500._fU0[GET_DESTROYER_OF_NETWORK_ID( l_U1500._fU1696[I], ref uVar2 )] += 100;
                        l_U1500._fU68[GET_DESTROYER_OF_NETWORK_ID( l_U1500._fU1696[I], ref uVar2 )]++;
                        l_U1500._fU1100[I] = l_U3208 + 5000;
                    }
                    else if (l_U3208 > l_U1500._fU1100[I])
                    {
                        if (l_U1968[GET_PLAYER_ID()]._fU260)
                        {
                            sub_12725( sub_8717( l_U1500._fU1696[I] ) );
                            l_U1500._fU1696[I] = nil;
                        }
                    }
                }
            }
        }
    }
    for ( I = 0; I < l_U1500._fU1712; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1712[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( sub_8717( l_U1500._fU1712[I] ) ))
            {
                if ((GET_DESTROYER_OF_NETWORK_ID( l_U1500._fU1712[I], ref uVar2 )) != -1)
                {
                    if (l_U1500._fU1116[I] == 0)
                    {
                        l_U1500._fU0[GET_DESTROYER_OF_NETWORK_ID( l_U1500._fU1712[I], ref uVar2 )] += 100;
                        l_U1500._fU68[GET_DESTROYER_OF_NETWORK_ID( l_U1500._fU1712[I], ref uVar2 )]++;
                        l_U1500._fU1116[I] = l_U3208 + 5000;
                    }
                    else if (l_U3208 > l_U1500._fU1116[I])
                    {
                        if ((l_U1968[GET_PLAYER_ID()]._fU264) AND (l_U1968[GET_PLAYER_ID()]._fU268))
                        {
                            sub_12725( sub_8717( l_U1500._fU1712[I] ) );
                            l_U1500._fU1712[I] = nil;
                        }
                    }
                }
            }
        }
    }
    for ( I = 0; I < l_U1500._fU1636; I++ )
    {
        if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1500._fU1636[I] ))
        {
            if (NOT (IS_VEH_DRIVEABLE( sub_9181( l_U1500._fU1636[I] ) )))
            {
                if (l_U1500._fU1196[I] == 0)
                {
                    l_U3230++;
                    l_U1500._fU1196[I] = l_U3208 + 5000;
                }
                else if (l_U3208 > l_U1500._fU1196[I])
                {
                    sub_15079( sub_9181( l_U1500._fU1636[I] ) );
                    l_U1500._fU1636[I] = nil;
                }
            }
        }
    }
    for ( I = 0; I < l_U1500._fU1648; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1648[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( sub_8717( l_U1500._fU1648[I] ) ))
            {
                if ((GET_DESTROYER_OF_NETWORK_ID( l_U1500._fU1648[I], ref uVar2 )) != -1)
                {
                    if (l_U1500._fU1156[I] == 0)
                    {
                        l_U1500._fU0[GET_DESTROYER_OF_NETWORK_ID( l_U1500._fU1648[I], ref uVar2 )] += 100;
                        l_U1500._fU68[GET_DESTROYER_OF_NETWORK_ID( l_U1500._fU1648[I], ref uVar2 )]++;
                        l_U1500._fU1156[I] = l_U3208 + 5000;
                    }
                    else if (l_U3208 > l_U1500._fU1156[I])
                    {
                        sub_12725( sub_8717( l_U1500._fU1648[I] ) );
                        l_U1500._fU1648[I] = nil;
                    }
                }
            }
        }
    }
    if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1500._fU1600 ))
    {
        if (NOT (IS_VEH_DRIVEABLE( sub_9181( l_U1500._fU1600 ) )))
        {
            if (l_U1500._fU1192 == 0)
            {
                l_U3230++;
                l_U1500._fU1192 = l_U3208 + 5000;
            }
            else if (l_U3208 > l_U1500._fU1192)
            {
                sub_15079( sub_9181( l_U1500._fU1600 ) );
                l_U1500._fU1600 = nil;
            }
        }
    }
    for ( I = 0; I < l_U1500._fU1604; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1604[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( sub_8717( l_U1500._fU1604[I] ) ))
            {
                if ((GET_DESTROYER_OF_NETWORK_ID( l_U1500._fU1604[I], ref uVar2 )) != -1)
                {
                    if (l_U1500._fU1136[I] == 0)
                    {
                        l_U1500._fU0[GET_DESTROYER_OF_NETWORK_ID( l_U1500._fU1604[I], ref uVar2 )] += 100;
                        l_U1500._fU68[GET_DESTROYER_OF_NETWORK_ID( l_U1500._fU1604[I], ref uVar2 )]++;
                        l_U1500._fU1136[I] = l_U3208 + 5000;
                        l_U3229++;
                    }
                    else if (l_U3208 > l_U1500._fU1136[I])
                    {
                        sub_12725( sub_8717( l_U1500._fU1604[I] ) );
                        l_U1500._fU1604[I] = nil;
                    }
                }
            }
        }
    }
    for ( I = 0; I < l_U1500._fU1524; I++ )
    {
        if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1500._fU1524[I] ))
        {
            if (NOT (IS_VEH_DRIVEABLE( sub_9181( l_U1500._fU1524[I] ) )))
            {
                if (l_U1500._fU1188 == 0)
                {
                    l_U3230++;
                    l_U1500._fU1188 = l_U3208 + 5000;
                }
                else if (l_U3208 > l_U1500._fU1188)
                {
                    sub_15079( sub_9181( l_U1500._fU1524[I] ) );
                    l_U1500._fU1524[I] = nil;
                }
            }
        }
    }
    if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1732[0] ))
    {
        if (IS_CHAR_FATALLY_INJURED( sub_8717( l_U1500._fU1732[0] ) ))
        {
            if ((GET_DESTROYER_OF_NETWORK_ID( l_U1500._fU1732[0], ref uVar2 )) != -1)
            {
                if (l_U1500._fU1176 == 0)
                {
                    l_U1500._fU0[GET_DESTROYER_OF_NETWORK_ID( l_U1500._fU1732[0], ref uVar2 )] += 100;
                    l_U1500._fU68[GET_DESTROYER_OF_NETWORK_ID( l_U1500._fU1732[0], ref uVar2 )]++;
                    l_U1500._fU1176 = l_U3208 + 5000;
                }
                else if (l_U3208 > l_U1500._fU1176)
                {
                    sub_12725( sub_8717( l_U1500._fU1732[0] ) );
                    l_U1500._fU1732[0] = nil;
                }
            }
        }
    }
    if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1748[0] ))
    {
        if (IS_CHAR_FATALLY_INJURED( sub_8717( l_U1500._fU1748[0] ) ))
        {
            if ((GET_DESTROYER_OF_NETWORK_ID( l_U1500._fU1748[0], ref uVar2 )) != -1)
            {
                if (l_U1500._fU1180 == 0)
                {
                    l_U1500._fU0[GET_DESTROYER_OF_NETWORK_ID( l_U1500._fU1748[0], ref uVar2 )] += 100;
                    l_U1500._fU68[GET_DESTROYER_OF_NETWORK_ID( l_U1500._fU1748[0], ref uVar2 )]++;
                    l_U1500._fU1180 = l_U3208 + 5000;
                }
                else if (l_U3208 > l_U1500._fU1180)
                {
                    sub_12725( sub_8717( l_U1500._fU1748[0] ) );
                    l_U1500._fU1748[0] = nil;
                }
            }
        }
    }
    if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1764[0] ))
    {
        if (IS_CHAR_FATALLY_INJURED( sub_8717( l_U1500._fU1764[0] ) ))
        {
            if ((GET_DESTROYER_OF_NETWORK_ID( l_U1500._fU1764[0], ref uVar2 )) != -1)
            {
                if (l_U1500._fU1184 == 0)
                {
                    l_U1500._fU0[GET_DESTROYER_OF_NETWORK_ID( l_U1500._fU1764[0], ref uVar2 )] += 100;
                    l_U1500._fU68[GET_DESTROYER_OF_NETWORK_ID( l_U1500._fU1764[0], ref uVar2 )]++;
                    l_U1500._fU1184 = l_U3208 + 5000;
                }
                else if (l_U3208 > l_U1500._fU1184)
                {
                    sub_12725( sub_8717( l_U1500._fU1764[0] ) );
                    l_U1500._fU1764[0] = nil;
                }
            }
        }
    }
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1500._fU0[I] < 0)
            {
                l_U1500._fU0[I] = 0;
            }
        }
    }
    return;
}

void sub_12725(unknown uParam0)
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

int sub_13080()
{
    int I;

    if (sub_13089() < 3)
    {
        for ( I = 0; I < 16; I++ )
        {
            if (sub_12059( I ))
            {
                if (l_U1968[I]._fU232)
                {
                    return 1;
                }
            }
        }
    }
    else if (sub_13089() == 3)
    {
        for ( I = 0; I < 16; I++ )
        {
            if (sub_12059( I ))
            {
                if ((l_U1968[I]._fU232) AND (l_U1968[I]._fU236))
                {
                    return 1;
                }
            }
        }
    }
    else if (sub_13089() == 4)
    {
        for ( I = 0; I < 16; I++ )
        {
            if (sub_12059( I ))
            {
                if (((l_U1968[I]._fU232) AND (l_U1968[I]._fU236)) AND (l_U1968[I]._fU240))
                {
                    return 1;
                }
            }
        }
    };;;
    return 0;
}

void sub_13089()
{
    int I;
    int Result;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_12059( I ))
        {
            Result++;
        }
    }
    return Result;
}

int sub_13782()
{
    int I;

    if (sub_13089() < 3)
    {
        for ( I = 0; I < 16; I++ )
        {
            if (sub_12059( I ))
            {
                if (l_U1968[I]._fU248)
                {
                    return 1;
                }
            }
        }
    }
    else if (sub_13089() == 3)
    {
        for ( I = 0; I < 16; I++ )
        {
            if (sub_12059( I ))
            {
                if ((l_U1968[I]._fU248) AND (l_U1968[I]._fU252))
                {
                    return 1;
                }
            }
        }
    }
    else if (sub_13089() == 4)
    {
        for ( I = 0; I < 16; I++ )
        {
            if (sub_12059( I ))
            {
                if (((l_U1968[I]._fU248) AND (l_U1968[I]._fU252)) AND (l_U1968[I]._fU256))
                {
                    return 1;
                }
            }
        }
    };;;
    return 0;
}

void sub_15079(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_17171()
{
    int I;

    if (l_U1500._fU272 >= 1)
    {
        sub_17196();
    }
    if ((l_U1500._fU272 > 1) AND (l_U1500._fU272 < 9))
    {
        sub_17680();
    }
    if (l_U1500._fU272 > 1)
    {
        l_U1500._fU712 = sub_17956();
    }
    switch (l_U1500._fU272)
    {
        case 0:
        if (sub_18129())
        {
            l_U1500._fU272 = 1;
        }
        break;
        case 1:
        if (sub_18129())
        {
            if (NOT NETWORK_IS_OPERATION_PENDING())
            {
                if ((sub_18341()) || (l_U3177))
                {
                    sub_19131( l_U1500._fU352[9] );
                    sub_19302( l_U1500._fU352[8] );
                    SET_SYNC_WEATHER_AND_GAME_TIME( 1 );
                    if (NOT sub_19480())
                    {
                        if (NOT NETWORK_IS_OPERATION_PENDING())
                        {
                            if (NOT NETWORK_IS_SESSION_STARTED())
                            {
                                NETWORK_START_SESSION();
                            }
                        }
                    }
                    if (N_1242010017())
                    {
                        NETWORK_ADVERTISE_SESSION( 0 );
                    }
                    l_U1500._fU520 = l_U3208 + 30000;
                    if ((l_U3064 == nil) AND (CAN_REGISTER_MISSION_PED()))
                    {
                        l_U3064 = sub_19684( 1543404628, 10.00000000, 10.00000000, 1000.00000000, 0.00000000 );
                        sub_19756( l_U3064, ref l_U1500._fU444 );
                        sub_20335( ref l_U1500._fU444, 8, 0 );
                    }
                    sub_20409( l_U3064 );
                    CLEAR_AREA( l_U3235[GET_PLAYER_ID()]._fU0, l_U3235[GET_PLAYER_ID()]._fU4, l_U3235[GET_PLAYER_ID()]._fU8, 100.00000000, 1 );
                    if ((l_U1500._fU1344[0] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
                    {
                        l_U1500._fU1344[0] = sub_20623( sub_20549( -322343873, -1403.61600000, 1471.11800000, 25.46630000, 180.76230000 ) );
                        CHANGE_CAR_COLOUR( sub_9181( l_U1500._fU1344[0] ), 0, 1 );
                        SET_EXTRA_CAR_COLOURS( sub_9181( l_U1500._fU1344[0] ), 1, 0 );
                        TURN_OFF_VEHICLE_EXTRA( sub_9181( l_U1500._fU1344[0] ), 5, 0 );
                        TURN_OFF_VEHICLE_EXTRA( sub_9181( l_U1500._fU1344[0] ), 6, 0 );
                        TURN_OFF_VEHICLE_EXTRA( sub_9181( l_U1500._fU1344[0] ), 7, 0 );
                        TURN_OFF_VEHICLE_EXTRA( sub_9181( l_U1500._fU1344[0] ), 8, 0 );
                        TAKE_CAR_OUT_OF_PARKED_CARS_BUDGET( sub_9181( l_U1500._fU1344[0] ), 1 );
                        SET_CAR_ON_GROUND_PROPERLY( sub_9181( l_U1500._fU1344[0] ) );
                        SET_NETWORK_ID_CAN_MIGRATE( l_U1500._fU1344[0], 1 );
                    }
                    if ((l_U1500._fU1344[1] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
                    {
                        l_U1500._fU1344[1] = sub_20623( sub_20549( -322343873, -1408.64200000, 1471.11800000, 25.46700000, 180.12690000 ) );
                        CHANGE_CAR_COLOUR( sub_9181( l_U1500._fU1344[1] ), 0, 1 );
                        SET_EXTRA_CAR_COLOURS( sub_9181( l_U1500._fU1344[1] ), 1, 0 );
                        TURN_OFF_VEHICLE_EXTRA( sub_9181( l_U1500._fU1344[1] ), 5, 0 );
                        TURN_OFF_VEHICLE_EXTRA( sub_9181( l_U1500._fU1344[1] ), 6, 0 );
                        TURN_OFF_VEHICLE_EXTRA( sub_9181( l_U1500._fU1344[1] ), 7, 0 );
                        TURN_OFF_VEHICLE_EXTRA( sub_9181( l_U1500._fU1344[1] ), 8, 0 );
                        TAKE_CAR_OUT_OF_PARKED_CARS_BUDGET( sub_9181( l_U1500._fU1344[1] ), 1 );
                        SET_CAR_ON_GROUND_PROPERLY( sub_9181( l_U1500._fU1344[1] ) );
                        SET_NETWORK_ID_CAN_MIGRATE( l_U1500._fU1344[1], 1 );
                    }
                    if ((l_U1500._fU1540[0] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
                    {
                        l_U1500._fU1540[0] = sub_20623( sub_20549( 400514754, -2027.97800000, -607.37000000, 0.35420000, 167.35550000 ) );
                        TAKE_CAR_OUT_OF_PARKED_CARS_BUDGET( sub_9181( l_U1500._fU1540[0] ), 1 );
                        SET_NETWORK_ID_CAN_MIGRATE( l_U1500._fU1540[0], 1 );
                        ANCHOR_BOAT( sub_9181( l_U1500._fU1540[0] ), 1 );
                    }
                    if ((l_U1500._fU1540[1] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
                    {
                        l_U1500._fU1540[1] = sub_20623( sub_20549( 400514754, -2017.35600000, -545.71200000, 0.36360000, 167.60060000 ) );
                        TAKE_CAR_OUT_OF_PARKED_CARS_BUDGET( sub_9181( l_U1500._fU1540[1] ), 1 );
                        SET_NETWORK_ID_CAN_MIGRATE( l_U1500._fU1540[1], 1 );
                        ANCHOR_BOAT( sub_9181( l_U1500._fU1540[1] ), 1 );
                    }
                    if ((l_U1500._fU1540[2] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
                    {
                        l_U1500._fU1540[2] = sub_20623( sub_20549( 400514754, -2053.64200000, -499.09070000, 0.36360000, 99.32500000 ) );
                        TAKE_CAR_OUT_OF_PARKED_CARS_BUDGET( sub_9181( l_U1500._fU1540[2] ), 1 );
                        SET_NETWORK_ID_CAN_MIGRATE( l_U1500._fU1540[2], 1 );
                        ANCHOR_BOAT( sub_9181( l_U1500._fU1540[2] ), 1 );
                    }
                    if ((l_U1500._fU1540[3] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
                    {
                        l_U1500._fU1540[3] = sub_20623( sub_20549( 400514754, -1968.27400000, -702.51040000, 0.56670000, 257.90150000 ) );
                        TAKE_CAR_OUT_OF_PARKED_CARS_BUDGET( sub_9181( l_U1500._fU1540[3] ), 1 );
                        SET_NETWORK_ID_CAN_MIGRATE( l_U1500._fU1540[3], 1 );
                        ANCHOR_BOAT( sub_9181( l_U1500._fU1540[3] ), 1 );
                    }
                    if ((l_U1500._fU1540[4] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
                    {
                        l_U1500._fU1540[4] = sub_20623( sub_20549( 400514754, -1890.03900000, -722.15810000, -0.34430000, 262.40610000 ) );
                        TAKE_CAR_OUT_OF_PARKED_CARS_BUDGET( sub_9181( l_U1500._fU1540[4] ), 1 );
                        SET_NETWORK_ID_CAN_MIGRATE( l_U1500._fU1540[4], 1 );
                        ANCHOR_BOAT( sub_9181( l_U1500._fU1540[4] ), 1 );
                    }
                    if ((l_U1500._fU1540[5] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
                    {
                        l_U1500._fU1540[5] = sub_20623( sub_20549( 400514754, -1819.40900000, -722.90250000, 0.39320000, 261.31920000 ) );
                        TAKE_CAR_OUT_OF_PARKED_CARS_BUDGET( sub_9181( l_U1500._fU1540[5] ), 1 );
                        SET_NETWORK_ID_CAN_MIGRATE( l_U1500._fU1540[5], 1 );
                        ANCHOR_BOAT( sub_9181( l_U1500._fU1540[5] ), 1 );
                    }
                    if ((l_U1500._fU1540[6] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
                    {
                        l_U1500._fU1540[6] = sub_20623( sub_20549( 400514754, -1634.72800000, -686.92350000, 0.26290000, 262.74270000 ) );
                        TAKE_CAR_OUT_OF_PARKED_CARS_BUDGET( sub_9181( l_U1500._fU1540[6] ), 1 );
                        SET_NETWORK_ID_CAN_MIGRATE( l_U1500._fU1540[6], 1 );
                        ANCHOR_BOAT( sub_9181( l_U1500._fU1540[6] ), 1 );
                    }
                    switch (l_U1500._fU352[2])
                    {
                        case 0:
                        SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U3067, 1 );
                        SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U3067, 5 );
                        SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U3070, 1 );
                        SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U3070, 10 );
                        SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U3069, 1 );
                        SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U3069, 50 );
                        SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U3068, 1 );
                        SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U3068, 5 );
                        break;
                        case 1:
                        SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U3067, 1 );
                        SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U3067, 25 );
                        SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U3070, 1 );
                        SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U3070, 35 );
                        SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U3069, 1 );
                        SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U3069, 70 );
                        SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U3068, 1 );
                        SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U3068, 25 );
                        break;
                        case 2:
                        SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U3067, 1 );
                        SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U3067, 45 );
                        SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U3070, 1 );
                        SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U3070, 60 );
                        SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U3069, 1 );
                        SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U3069, 90 );
                        SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U3068, 1 );
                        SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U3068, 45 );
                        break;
                    }
                    sub_22606();
                    l_U1500._fU272 = 2;
                }
            }
        }
        break;
        case 2:
        if (NOT sub_19480())
        {
            if (NOT NETWORK_IS_OPERATION_PENDING())
            {
                if (NOT NETWORK_IS_SESSION_STARTED())
                {
                    NETWORK_START_SESSION();
                }
            }
        }
        if (N_1242010017())
        {
            NETWORK_ADVERTISE_SESSION( 0 );
        }
        if (NOT l_U1500._fU704)
        {
            if (sub_23074())
            {
                l_U1500._fU704 = 1;
            }
        }
        if (NOT l_U3178)
        {
            if (sub_24991())
            {
                l_U3178 = 1;
            }
        }
        if (l_U1500._fU512 == 0)
        {
            if (IS_SCREEN_FADED_IN())
            {
                l_U1500._fU512 = l_U3208;
            }
        }
        if ((l_U1500._fU704) AND (l_U3178))
        {
            l_U1500._fU272 = 5;
        }
        break;
        case 5:
        if (NOT sub_19480())
        {
            if (NOT NETWORK_IS_OPERATION_PENDING())
            {
                if (NOT NETWORK_IS_SESSION_STARTED())
                {
                    NETWORK_START_SESSION();
                }
            }
        }
        if (N_1242010017())
        {
            NETWORK_ADVERTISE_SESSION( 0 );
        }
        sub_26157();
        if (l_U1500._fU512 == 0)
        {
            if (IS_SCREEN_FADED_IN())
            {
                l_U1500._fU512 = l_U3208;
            }
        }
        if (NOT l_U1500._fU948)
        {
            if (sub_30915())
            {
                l_U1500._fU948 = 1;
            }
        }
        if ((COUNT_PICKUPS_OF_TYPE( 22 )) == 0)
        {
            if (sub_31956())
            {
                sub_32697();
                l_U1500._fU272 = 6;
            }
        }
        if (NOT l_U1500._fU708)
        {
            if (sub_32739())
            {
                l_U1500._fU708 = 1;
            }
        }
        break;
        case 6:
        if (NOT sub_19480())
        {
            if (NOT NETWORK_IS_OPERATION_PENDING())
            {
                if (NOT NETWORK_IS_SESSION_STARTED())
                {
                    NETWORK_START_SESSION();
                }
            }
        }
        if (N_1242010017())
        {
            NETWORK_ADVERTISE_SESSION( 0 );
        }
        if ((sub_33515()) || (l_U3179))
        {
            l_U1500._fU272 = 7;
        }
        else if (NOT l_U1500._fU716)
        {
            if (sub_34010())
            {
                l_U1500._fU716 = 1;
            }
        }
        for ( I = 0; I < 16; I++ )
        {
            if (sub_12059( I ))
            {
                if (l_U1968[I]._fU128)
                {
                    sub_40822();
                    l_U1500._fU272 = 9;
                    l_U1500._fU720 = 1;
                }
            }
        }
        break;
        case 7:
        if (NOT sub_19480())
        {
            if (NOT NETWORK_IS_OPERATION_PENDING())
            {
                if (NOT NETWORK_IS_SESSION_STARTED())
                {
                    NETWORK_START_SESSION();
                }
            }
        }
        if (sub_41343())
        {
            if ((sub_13089() > 1) || (l_U3177))
            {
                for ( I = 0; I < 16; I++ )
                {
                    if (sub_12059( I ))
                    {
                        switch (l_U1500._fU352[2])
                        {
                            case 0:
                            l_U1500._fU0[I] += 2500;
                            break;
                            case 1:
                            l_U1500._fU0[I] += 3500;
                            break;
                            case 2:
                            l_U1500._fU0[I] += 4500;
                            break;
                        }
                    }
                }
                sub_41647();
                l_U3212 = l_U3208 + 2500;
                l_U1500._fU516 = l_U3208 - l_U1500._fU512;
                l_U1500._fU272 = 8;
            }
        }
        break;
        case 8:
        if (l_U3208 > l_U3212)
        {
            l_U1500._fU272 = 11;
        }
        break;
        case 11: break;
        case 9:
        l_U1500._fU916 = 1;
        sub_41647();
        break;
    }
    return;
}

void sub_17196()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1968[I]._fU20;
    }
    sub_17252( ref uVar3 );
    return;
}

void sub_17252(unknown uParam0)
{
    int I;
    int[16] iVar4;
    int iVar21;

    array(ref iVar4, 16);
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if ((((uParam0^)[I] != -1) AND ((uParam0^)[I] != I)) AND (l_U1390[I] == 1))
            {
                if (IS_NETWORK_PLAYER_ACTIVE( (uParam0^)[I] ))
                {
                    iVar4[(uParam0^)[I]]++;
                }
            }
        }
    }
    for ( I = 0; I < 16; I++ )
    {
        if (iVar4[I] >= iVar4[iVar21])
        {
            iVar21 = I;
        }
    }
    if ((sub_7667() > 2) AND (NOT NETWORK_IS_TVT()))
    {
        if (((sub_7667() > 3) AND (iVar4[iVar21] > (sub_7667() / 2))) || ((sub_7667() == 3) AND (iVar4[iVar21] == 2)))
        {
            PRINTSTRING( "SCRIPT: Kick Player " );
            PRINTINT( iVar21 );
            PRINTSTRING( " with votes " );
            PRINTINT( iVar4[iVar21] );
            PRINTSTRING( " needed " );
            PRINTINT( sub_7667() / 2 );
            PRINTNL();
            if (IS_NETWORK_PLAYER_ACTIVE( iVar21 ))
            {
                NETWORK_KICK_PLAYER( iVar21 );
            }
        }
    }
    return;
}

void sub_17680()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1968[I]._fU24;
    }
    sub_17744( ref l_U1500._fU540, ref uVar3 );
    return;
}

void sub_17744(unknown uParam0, unknown uParam1)
{
    int I;
    int[17] iVar5;
    int iVar23;

    array(ref iVar5, 17);
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if ((uParam1^)[I] != -1)
            {
                iVar5[(uParam1^)[I]]++;
            }
        }
    }
    for ( I = 0; I < 17; I++ )
    {
        if (iVar5[I] >= iVar5[iVar23])
        {
            iVar23 = I;
        }
    }
    if ((iVar5[iVar23] > (sub_7667() / 2)) AND (iVar5[iVar23] > 0))
    {
        (uParam0^) = iVar23;
    }
    else
    {
        (uParam0^) = -1;
    }
    return;
}

int sub_17956()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_12059( I ))
        {
            if (IS_CHAR_DEAD( sub_465( I ) ))
            {
                return 0;
            }
        }
    }
    return 1;
}

int sub_18129()
{
    if (((((sub_18143( -322343873 )) AND (sub_18143( 584879743 ))) AND (sub_18143( 1376298265 ))) AND (sub_18143( 400514754 ))) AND (sub_18143( -1043459709 )))
    {
        if ((((sub_18143( -1461281345 )) AND (sub_18143( 1543404628 ))) AND (sub_18143( 510389335 ))) AND (sub_18143( -1947682830 )))
        {
            return 1;
        }
    }
    return 0;
}

int sub_18143(unknown uParam0)
{
    REQUEST_MODEL( uParam0 );
    if (HAS_MODEL_LOADED( uParam0 ))
    {
        return 1;
    }
    return 0;
}

int sub_18341()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1968[I]._fU8;
    }
    if (sub_18405( ref uVar3, ref l_U1500._fU344 ))
    {
        return 1;
    }
    return 0;
}

int sub_18405(unknown uParam0, unknown uParam1)
{
    int I;
    int iVar5;
    int iVar6;
    unknown uVar7;
    int iVar8;
    boolean bVar9;
    unknown uVar10;

    bVar9 = true;
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            iVar5++;
            if ((uParam0^)[I] == 2)
            {
                iVar6++;
            }
        }
    }
    if (NOT (sub_18483( ref uVar10 )))
    {
        bVar9 = false;
    }
    if (NETWORK_IS_TVT())
    {
        if (NETWORK_GET_NUM_UNFILLED_RESERVATIONS() > 0)
        {
            bVar9 = false;
        }
    }
    if (iVar6 < 2)
    {
        if (sub_6720() != 16)
        {
            bVar9 = false;
        }
    }
    if ((uParam0^)[GET_PLAYER_ID()] != 2)
    {
        bVar9 = false;
    }
    if (bVar9)
    {
        GET_NETWORK_TIMER( ref iVar8 );
        if (iVar5 == iVar6)
        {
            if (iVar5 == GET_NUMBER_OF_PLAYERS())
            {
                (uParam1^) = 0;
                return 1;
            }
        }
        else if (iVar6 > (GET_NUMBER_OF_PLAYERS() / 2))
        {
            if ((uParam1^) == 0)
            {
                GET_NETWORK_TIMER( uParam1 );
            }
            else if ((uParam1^) < (iVar8 - 10000))
            {
                if (iVar5 == GET_NUMBER_OF_PLAYERS())
                {
                    (uParam1^) = 0;
                    return 1;
                }
            }
        }
        else
        {
            (uParam1^) = 0;
        }
    }
    else
    {
        (uParam1^) = 0;
    }
    return 0;
}

int sub_18483(unknown uParam0)
{
    int I;
    int iVar4;

    (uParam0^) = 0;
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            iVar4++;
        }
    }
    if (sub_6720() == 16)
    {
        if (iVar4 > 0)
        {
            return 1;
        }
    }
    if (iVar4 < 2)
    {
        return 0;
    }
    if ((sub_6720() == 5) || (sub_6720() == 4))
    {
        if (iVar4 < 4)
        {
            return 0;
        }
    }
    if ((sub_18610()) || (sub_18655()))
    {
        if (sub_18655())
        {
            if (iVar4 < 3)
            {
                return 0;
            }
        }
        else if (iVar4 < 4)
        {
            return 0;
        }
        if (sub_18752() < 2)
        {
            (uParam0^) = 1;
            return 0;
        }
    }
    return 1;
}

int sub_18610()
{
    int iVar2;

    iVar2 = NETWORK_GET_GAME_MODE();
    if ((iVar2 == 10) || (iVar2 == 12))
    {
        return 1;
    }
    return 0;
}

int sub_18655()
{
    int iVar2;

    iVar2 = NETWORK_GET_GAME_MODE();
    if (((iVar2 == 1) || (iVar2 == 3)) || (iVar2 == 4))
    {
        return 1;
    }
    return 0;
}

void sub_18752()
{
    int I;
    int Result;

    for ( I = 0; I < 8; I++ )
    {
        if ((GET_NO_OF_PLAYERS_IN_TEAM( I )) > 0)
        {
            Result++;
        }
    }
    return Result;
}

void sub_19131(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        FORCE_WEATHER_NOW( 1 );
        RELEASE_WEATHER();
        break;
        case 1:
        FORCE_WEATHER_NOW( 1 );
        break;
        case 2:
        FORCE_WEATHER_NOW( 3 );
        break;
        case 3:
        FORCE_WEATHER_NOW( 5 );
        break;
        case 4:
        FORCE_WEATHER_NOW( 4 );
        break;
        case 5:
        FORCE_WEATHER_NOW( 6 );
        break;
    }
    return;
}

void sub_19302(unknown uParam0)
{
    switch (uParam0)
    {
        case -1:
        SET_TIME_OF_DAY( sub_9879( 0, 24 ), 0 );
        break;
        case 0:
        SET_TIME_OF_DAY( sub_9879( 0, 24 ), 0 );
        break;
        case 1:
        SET_TIME_OF_DAY( 6, 0 );
        break;
        case 2:
        SET_TIME_OF_DAY( 12, 0 );
        break;
        case 3:
        SET_TIME_OF_DAY( 18, 0 );
        break;
        case 4:
        SET_TIME_OF_DAY( 0, 0 );
        break;
    }
    return;
}

int sub_19480()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1968[I]._fU28 > 0)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_19684(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown Result;

    CREATE_CHAR( 26, uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, ref Result, 1 );
    SET_CHAR_HEADING( Result, uParam4 );
    return Result;
}

void sub_19756(unknown uParam0, unknown uParam1)
{
    int I;
    int J;
    int[10] iVar6;
    unknown[10] uVar17;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    unknown uVar66;
    unknown uVar67;
    unknown uVar68;
    unknown uVar69;
    unknown uVar70;
    unknown uVar71;
    unknown uVar72;
    unknown uVar73;
    unknown uVar74;
    unknown uVar75;
    unknown uVar76;
    unknown uVar77;
    unknown uVar78;
    unknown uVar79;
    unknown uVar80;
    unknown uVar81;
    unknown uVar82;
    unknown uVar83;
    unknown uVar84;
    unknown uVar85;
    unknown uVar86;
    unknown uVar87;
    unknown uVar88;
    unknown uVar89;
    unknown uVar90;
    unknown uVar91;
    unknown uVar92;
    unknown uVar93;
    unknown uVar94;
    unknown uVar95;
    unknown uVar96;
    unknown uVar97;
    unknown uVar98;
    unknown uVar99;
    unknown uVar100;
    unknown uVar101;
    unknown uVar102;
    unknown uVar103;
    unknown uVar104;
    unknown uVar105;
    unknown uVar106;
    unknown uVar107;
    int iVar108;

    array(ref iVar6, 10);
    (array(ref array(ref array(ref array(ref array(ref array(ref array(ref array(ref array(ref array(ref array(ref uVar17, 10)->_fU4, 8)->_fU36, 8)->_fU36, 8)->_fU36, 8)->_fU36, 8)->_fU36, 8)->_fU36, 8)->_fU36, 8)->_fU36, 8)->_fU36, 8)) + 36;
    array(ref uVar17, 10);
    for ( I = 0; I <= 9; I++ )
    {
        iVar6[I] = GET_NUMBER_OF_CHAR_DRAWABLE_VARIATIONS( uParam0, I );
        if (iVar6[I] >= 8)
        {
            iVar6[I] = 7;
        }
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        (uParam1^)[I] = 0;
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        for ( J = 0; J <= 9; J++ )
        {
            if (iVar6[J] != 0)
            {
                iVar108 = I mod iVar6[J];
                if (iVar108 == 0)
                {
                    sub_20012( ref uVar17[J], iVar6[J] );
                }
            }
            else
            {
                iVar108 = 0;
            }
            SET_BITS_IN_RANGE( ref (uParam1^)[I], J * 3, (J * 3) + 2, uVar17[J][iVar108] );
        }
        sub_4756( "\n Random Ped ", I );
        for ( J = 0; J <= 9; J++ )
        {
            sub_4756( ", ", GET_BITS_IN_RANGE( (uParam1^)[I], J * 3, (J * 3) + 2 ) );
        }
    }
    return;
}

void sub_20012(unknown uParam0, int iParam1)
{
    int I;
    unknown uVar5;
    unknown uVar6;

    if (iParam1 <= 1)
    {
        (uParam0^)[0] = 0;
    }
    else if ((uParam0^) >= iParam1)
    {
        for ( I = 0; I <= (iParam1 - 1); I++ )
        {
            (uParam0^)[I] = I;
        }
        for ( I = iParam1 - 1; I >= 1; I += -1 )
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, I + 1, ref uVar6 );
            uVar5 = (uParam0^)[I];
            (uParam0^)[I] = (uParam0^)[uVar6];
            (uParam0^)[uVar6] = uVar5;
        }
    }
    return;
}

void sub_20335(unknown uParam0, int iParam1, unknown uParam2)
{
    int I;

    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        SET_BITS_IN_RANGE( ref (uParam0^)[I], iParam1 * 3, (iParam1 * 3) + 2, uParam2 );
    }
    return;
}

void sub_20409(unknown uParam0)
{
    DELETE_CHAR( ref uParam0 );
    return;
}

void sub_20549(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown Result;

    CREATE_CAR( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, ref Result, 1 );
    SET_CAR_HEADING( Result, uParam4 );
    SET_CAR_COORDINATES( Result, uParam1._fU0, uParam1._fU4, uParam1._fU8 );
    return Result;
}

void sub_20623(unknown uParam0)
{
    unknown Result;

    GET_NETWORK_ID_FROM_VEHICLE( uParam0, ref Result );
    return Result;
}

void sub_22606()
{
    vector[10] vVar2;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    int I;

    array(ref vVar2, 10);
    vVar2[0] = {-2020.75000000, -637.38150000, 6.17380000};
    vVar2[1] = {-1933.95400000, -680.44210000, 8.25280000};
    vVar2[2] = {-1924.82800000, -655.98380000, 2.01550000};
    vVar2[3] = {-1946.47300000, -656.00900000, 2.01510000};
    vVar2[4] = {-1924.25600000, -637.34010000, 8.51230000};
    vVar2[5] = {-1922.87500000, -653.36190000, 13.84600000};
    vVar2[6] = {-1916.50400000, -669.58130000, 19.17770000};
    vVar2[7] = {-1938.41900000, -652.89710000, 24.51190000};
    vVar2[8] = {-1913.21800000, -653.61680000, 29.84470000};
    vVar2[9] = {-1937.15300000, -637.27450000, 35.17610000};
    for ( I = 0; I < 10; I++ )
    {
        if (l_U1500._fU1828[I] == nil)
        {
            CREATE_PICKUP( 1069950328, 3, vVar2[I]._fU0, vVar2[I]._fU4, vVar2[I]._fU8, ref l_U1500._fU1828[I], 0 );
        }
    }
    return;
}

int sub_23074()
{
    int I;
    int iVar3;
    vector[20] vVar4;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    float[20] fVar65;

    array(ref vVar4, 20);
    array(ref fVar65, 20);
    vVar4[0] = {-1926.32700000, -619.68470000, 3.70350000};
    vVar4[1] = {-1926.19500000, -622.83430000, 3.70350000};
    vVar4[2] = {-1922.17400000, -623.25000000, 3.70350000};
    vVar4[3] = {-1964.31800000, -657.75780000, 1.72000000};
    vVar4[4] = {-1996.60300000, -626.49510000, 1.54360000};
    vVar4[5] = {-1994.83700000, -626.79750000, 1.54240000};
    vVar4[6] = {-1994.82000000, -625.81960000, 1.54310000};
    vVar4[7] = {-2003.17600000, -621.62950000, 1.87610000};
    vVar4[8] = {-2004.69100000, -621.07380000, 1.94090000};
    vVar4[9] = {-2023.75300000, -619.08000000, 5.81800000};
    vVar4[10] = {-2020.78300000, -600.78340000, 5.86950000};
    vVar4[11] = {-2024.60100000, -616.75520000, 5.53930000};
    vVar4[12] = {-1964.23000000, -651.07680000, 8.21700000};
    vVar4[13] = {-1925.72100000, -666.78440000, 8.21756000};
    vVar4[14] = {-1941.96900000, -640.06380000, 8.21747000};
    vVar4[15] = {-1935.88500000, -651.84280000, 8.21760000};
    vVar4[16] = {-1926.35400000, -654.53280000, 8.21740000};
    vVar4[17] = {-1902.95800000, -638.79470000, 8.21780000};
    vVar4[18] = {-1910.62800000, -661.46750000, 8.21750000};
    vVar4[19] = {-1950.43100000, -680.70970000, 8.21750000};
    fVar65[0] = 188.18040000;
    fVar65[1] = 210.52910000;
    fVar65[2] = 265.57830000;
    fVar65[3] = 359.14660000;
    fVar65[4] = 279.31730000;
    fVar65[5] = 69.47190000;
    fVar65[6] = 109.51080000;
    fVar65[7] = 69.47110000;
    fVar65[8] = 244.27280000;
    fVar65[9] = 289.32280000;
    fVar65[10] = 244.27530000;
    fVar65[11] = 104.12560000;
    fVar65[12] = 94.49640000;
    fVar65[13] = 147.05060000;
    fVar65[14] = 147.06880000;
    fVar65[15] = 139.54370000;
    fVar65[16] = 124.52190000;
    fVar65[17] = 229.62680000;
    fVar65[18] = 304.33670000;
    fVar65[19] = 4.90670000;
    switch (l_U3516)
    {
        case 0:
        if ((sub_18143( -1461281345 )) AND (sub_18143( 510389335 )))
        {
            for ( I = 0; I < 20; I++ )
            {
                if ((l_U1500._fU1208[I] == nil) AND (CAN_REGISTER_MISSION_PED()))
                {
                    if (I > 17)
                    {
                        l_U1500._fU1208[I] = sub_23952( sub_19684( 510389335, vVar4[I], fVar65[I] ) );
                    }
                    else
                    {
                        l_U1500._fU1208[I] = sub_24015( vVar4[I], fVar65[I] );
                    }
                    SET_CHAR_RELATIONSHIP_GROUP( sub_8717( l_U1500._fU1208[I] ), 25 );
                    REMOVE_ALL_CHAR_WEAPONS( sub_8717( l_U1500._fU1208[I] ) );
                    if (sub_13089() < 3)
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar3 );
                        if (iVar3 == 0)
                        {
                            GIVE_DELAYED_WEAPON_TO_CHAR( sub_8717( l_U1500._fU1208[I] ), 12, 10000, 1 );
                        }
                        else
                        {
                            GIVE_DELAYED_WEAPON_TO_CHAR( sub_8717( l_U1500._fU1208[I] ), 10, 10000, 1 );
                        }
                    }
                    else if (sub_13089() == 3)
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar3 );
                        if (iVar3 == 0)
                        {
                            GIVE_DELAYED_WEAPON_TO_CHAR( sub_8717( l_U1500._fU1208[I] ), 12, 10000, 1 );
                        }
                        else
                        {
                            GIVE_DELAYED_WEAPON_TO_CHAR( sub_8717( l_U1500._fU1208[I] ), 13, 10000, 1 );
                        }
                    }
                    else if (sub_13089() == 4)
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar3 );
                        if (iVar3 == 0)
                        {
                            GIVE_DELAYED_WEAPON_TO_CHAR( sub_8717( l_U1500._fU1208[I] ), 13, 10000, 1 );
                        }
                        else
                        {
                            GIVE_DELAYED_WEAPON_TO_CHAR( sub_8717( l_U1500._fU1208[I] ), 14, 10000, 1 );
                        }
                    };;;
                    SET_NETWORK_ID_CAN_MIGRATE( l_U1500._fU1208[I], 1 );
                    l_U3218++;
                    if (I > 11)
                    {
                        SET_COMBAT_DECISION_MAKER( sub_8717( l_U1500._fU1208[I] ), l_U3068 );
                        TASK_GUARD_CURRENT_POSITION( sub_8717( l_U1500._fU1208[I] ), 10.00000000, 10.00000000, 1 );
                    }
                }
            }
            if (l_U3218 == 20)
            {
                sub_24636( ref l_U1500._fU548 );
                l_U3516 = 1;
            }
        }
        break;
        case 1:
        if (l_U3517 < 3)
        {
            for ( I = 0; I < l_U1500._fU548; I++ )
            {
                if (NOT l_U1500._fU724[l_U1500._fU548[I]])
                {
                    if (sub_8692( l_U1500._fU1208[l_U1500._fU548[I]] ))
                    {
                        l_U1500._fU724[l_U1500._fU548[I]] = 1;
                        l_U3517++;
                        I = l_U1500._fU548;
                    }
                }
            }
        }
        else
        {
            l_U3516 = 2;
            return 1;
        }
        break;
        case 2:
        return 1;
        break;
    }
    return 0;
}

void sub_23952(unknown uParam0)
{
    unknown Result;

    GET_NETWORK_ID_FROM_PED( uParam0, ref Result );
    return Result;
}

void sub_24015(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    uVar6 = sub_19684( -1461281345, uParam0, uParam3 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar6 );
    GIVE_DELAYED_WEAPON_TO_CHAR( uVar6, 14, 9999, 1 );
    SET_CHAR_RELATIONSHIP_GROUP( uVar6, 25 );
    SET_CHAR_HEALTH( uVar6, 200 );
    SET_CHAR_DECISION_MAKER( uVar6, l_U3066 );
    SET_CHAR_IS_TARGET_PRIORITY( uVar6, 1 );
    SET_PED_HEEDS_THE_EVERYONE_IGNORE_PLAYER_FLAG( uVar6, 0 );
    return sub_23952( uVar6 );
}

void sub_24636(unknown uParam0)
{
    int I;
    unknown uVar4;
    unknown uVar5;

    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        (uParam0^)[I] = I;
    }
    for ( I = (uParam0^) - 1; I >= 1; I += -1 )
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, I + 1, ref uVar5 );
        uVar4 = (uParam0^)[I];
        (uParam0^)[I] = (uParam0^)[uVar5];
        (uParam0^)[uVar5] = uVar4;
    }
    return;
}

int sub_24991()
{
    int I;
    vector[9] vVar3;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    float[9] fVar31;
    unknown[9] uVar41;

    array(ref vVar3, 9);
    array(ref fVar31, 9);
    array(ref uVar41, 9);
    vVar3[0] = {-1878.48000000, -648.75840000, 2.33310000};
    vVar3[1] = {-1878.88300000, -647.05040000, 2.33310000};
    vVar3[2] = {-1878.41500000, -645.16780000, 2.33310000};
    vVar3[3] = {-1889.53000000, -660.57030000, 2.32040000};
    vVar3[4] = {-1888.77400000, -658.56510000, 2.31690000};
    vVar3[5] = {-1889.73800000, -656.47440000, 2.33320000};
    vVar3[6] = {-1888.58600000, -654.27120000, 2.32220000};
    vVar3[7] = {-1877.69500000, -633.19920000, 2.38990000};
    vVar3[8] = {-1877.52300000, -639.33030000, 2.38990000};
    fVar31[0] = 121.28850000;
    fVar31[1] = 104.43930000;
    fVar31[2] = 82.12950000;
    fVar31[3] = 93.95180000;
    fVar31[4] = 114.80930000;
    fVar31[5] = 103.91990000;
    fVar31[6] = 71.24260000;
    fVar31[7] = 90.00000000;
    fVar31[8] = 90.00000000;
    for ( I = 0; I < 9; I++ )
    {
        if (I > 6)
        {
            if ((l_U1500._fU1356[I] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
            {
                l_U1500._fU1356[I] = sub_20623( sub_20549( 1376298265, vVar3[I], fVar31[I] ) );
                CHANGE_CAR_COLOUR( sub_9181( l_U1500._fU1356[I] ), 0, 0 );
                SET_EXTRA_CAR_COLOURS( sub_9181( l_U1500._fU1356[I] ), 37, 0 );
                TURN_OFF_VEHICLE_EXTRA( sub_9181( l_U1500._fU1356[I] ), 5, 0 );
                TURN_OFF_VEHICLE_EXTRA( sub_9181( l_U1500._fU1356[I] ), 6, 0 );
                TURN_OFF_VEHICLE_EXTRA( sub_9181( l_U1500._fU1356[I] ), 7, 0 );
                TAKE_CAR_OUT_OF_PARKED_CARS_BUDGET( sub_9181( l_U1500._fU1356[I] ), 1 );
                SET_LOAD_COLLISION_FOR_CAR_FLAG( sub_9181( l_U1500._fU1356[I] ), 1 );
                SET_NETWORK_ID_CAN_MIGRATE( l_U1500._fU1356[I], 1 );
            }
        }
        else if ((l_U1500._fU1356[I] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
        {
            l_U1500._fU1356[I] = sub_20623( sub_20549( 584879743, vVar3[I], fVar31[I] ) );
            CHANGE_CAR_COLOUR( sub_9181( l_U1500._fU1356[I] ), 34, 34 );
            SET_EXTRA_CAR_COLOURS( sub_9181( l_U1500._fU1356[I] ), 32, 0 );
            TAKE_CAR_OUT_OF_PARKED_CARS_BUDGET( sub_9181( l_U1500._fU1356[I] ), 1 );
            SET_LOAD_COLLISION_FOR_CAR_FLAG( sub_9181( l_U1500._fU1356[I] ), 1 );
            GET_GROUND_Z_FOR_3D_COORD( vVar3[I]._fU0, vVar3[I]._fU4, vVar3[I]._fU8, ref uVar41[I] );
            SET_CAR_COORDINATES( sub_9181( l_U1500._fU1356[I] ), vVar3[I]._fU0, vVar3[I]._fU4, uVar41[I] );
            SET_CAR_HEADING( sub_9181( l_U1500._fU1356[I] ), fVar31[I] );
            SET_NETWORK_ID_CAN_MIGRATE( l_U1500._fU1356[I], 1 );
        }
        l_U3518++;
    }
    if (l_U3518 == 9)
    {
        return 1;
    }
    return 0;
}

void sub_26157()
{
    if (NOT l_U1500._fU696)
    {
        if (((sub_26193( l_U3451, l_U3454 )) || (sub_26322( ref l_U1500._fU1208 ))) || (sub_26473( 5.00000000 )))
        {
            if (sub_26591())
            {
                l_U1500._fU696 = 1;
            }
        }
    }
    if (NOT l_U1500._fU920)
    {
        if (((sub_26193( l_U3457, l_U3460 )) || (sub_26322( ref l_U1500._fU1208 ))) || (sub_26473( 15.00000000 )))
        {
            if (sub_27830())
            {
                l_U1500._fU920 = 1;
            }
        }
    }
    if (NOT l_U1500._fU928)
    {
        if (((sub_26193( l_U3463, l_U3466 )) || (sub_26322( ref l_U1500._fU1572 ))) || (sub_26473( 21.00000000 )))
        {
            if (sub_29001())
            {
                l_U1500._fU928 = 1;
            }
        }
    }
    if (NOT l_U1500._fU932)
    {
        if (((sub_26193( l_U3469, l_U3472 )) || (sub_26322( ref l_U1500._fU1572 ))) || (sub_26473( 31.00000000 )))
        {
            if (sub_29814())
            {
                l_U1500._fU932 = 1;
            }
        }
    }
    return;
}

int sub_26193(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int I;

    for ( I = 0; I < sub_7667(); I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (IS_CHAR_IN_AREA_3D( sub_465( I ), uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, 0 ))
            {
                I = sub_7667();
                return 1;
            }
        }
    }
    return 0;
}

int sub_26322(unknown uParam0)
{
    int I;
    int iVar4;

    for ( I = 0; I < (uParam0^); I++ )
    {
        if (sub_26352( (uParam0^)[I] ))
        {
            iVar4++;
        }
    }
    if ((TO_FLOAT( iVar4 / (uParam0^) )) >= 0.65000000)
    {
        return 1;
    }
    return 0;
}

int sub_26352(unknown uParam0)
{
    if (DOES_PED_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        if (NOT (IS_CHAR_DEAD( sub_8717( uParam0 ) )))
        {
            return 0;
        }
    }
    return 1;
}

int sub_26473(float fParam0)
{
    int I;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_12059( I ))
        {
            if (NOT (IS_CHAR_DEAD( sub_465( I ) )))
            {
                GET_CHAR_COORDINATES( sub_465( I ), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                if (uVar4._fU8 > fParam0)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_26591()
{
    int I;
    int iVar3;
    vector[8] vVar4;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    float[8] fVar29;

    array(ref vVar4, 8);
    array(ref fVar29, 8);
    vVar4[0] = {-1961.90400000, -655.16440000, 13.55020000};
    vVar4[1] = {-1938.34200000, -654.60810000, 13.55010000};
    vVar4[2] = {-1925.31900000, -665.97300000, 13.55000000};
    vVar4[3] = {-1943.38000000, -640.59000000, 13.55030000};
    vVar4[4] = {-1922.29900000, -647.62460000, 13.54990000};
    vVar4[5] = {-1912.12100000, -665.21030000, 13.54990000};
    vVar4[6] = {-1911.82700000, -653.76530000, 13.55020000};
    vVar4[7] = {-1907.24000000, -639.45620000, 13.55060000};
    fVar29[0] = 216.49340000;
    fVar29[1] = 156.40560000;
    fVar29[2] = 133.88360000;
    fVar29[3] = 186.45940000;
    fVar29[4] = 269.04550000;
    fVar29[5] = 306.58850000;
    fVar29[6] = 291.56740000;
    fVar29[7] = 239.01880000;
    switch (l_U3519)
    {
        case 0:
        if (sub_18143( -1461281345 ))
        {
            for ( I = 0; I < 8; I++ )
            {
                if ((l_U1500._fU1292[I] == nil) AND (CAN_REGISTER_MISSION_PED()))
                {
                    l_U1500._fU1292[I] = sub_24015( vVar4[I], fVar29[I] );
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( sub_8717( l_U1500._fU1292[I] ), 1 );
                    SET_CHAR_RELATIONSHIP_GROUP( sub_8717( l_U1500._fU1292[I] ), 25 );
                    SET_NETWORK_ID_CAN_MIGRATE( l_U1500._fU1292[I], 1 );
                    SET_CHAR_DECISION_MAKER( sub_8717( l_U1500._fU1292[I] ), l_U3066 );
                    REMOVE_ALL_CHAR_WEAPONS( sub_8717( l_U1500._fU1292[I] ) );
                    if (sub_13089() < 3)
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar3 );
                        if (iVar3 == 0)
                        {
                            GIVE_DELAYED_WEAPON_TO_CHAR( sub_8717( l_U1500._fU1292[I] ), 12, 10000, 1 );
                        }
                        else
                        {
                            GIVE_DELAYED_WEAPON_TO_CHAR( sub_8717( l_U1500._fU1292[I] ), 10, 10000, 1 );
                        }
                    }
                    else if (sub_13089() == 3)
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar3 );
                        if (iVar3 == 0)
                        {
                            GIVE_DELAYED_WEAPON_TO_CHAR( sub_8717( l_U1500._fU1292[I] ), 12, 10000, 1 );
                        }
                        else
                        {
                            GIVE_DELAYED_WEAPON_TO_CHAR( sub_8717( l_U1500._fU1292[I] ), 13, 10000, 1 );
                        }
                    }
                    else if (sub_13089() == 4)
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar3 );
                        if (iVar3 == 0)
                        {
                            GIVE_DELAYED_WEAPON_TO_CHAR( sub_8717( l_U1500._fU1292[I] ), 13, 10000, 1 );
                        }
                        else
                        {
                            GIVE_DELAYED_WEAPON_TO_CHAR( sub_8717( l_U1500._fU1292[I] ), 14, 10000, 1 );
                        }
                    };;;
                    SET_COMBAT_DECISION_MAKER( sub_8717( l_U1500._fU1292[I] ), l_U3068 );
                    l_U3520++;
                }
            }
            if (l_U3520 == 8)
            {
                sub_24636( ref l_U1500._fU632 );
                l_U3519 = 1;
            }
        }
        break;
        case 1:
        if ((((sub_13089() < 3) AND (l_U3521 < 1)) || ((sub_13089() == 3) AND (l_U3521 < 3))) || ((sub_13089() == 4) AND (l_U3521 < 3)))
        {
            for ( I = 0; I < l_U1500._fU632; I++ )
            {
                if (NOT l_U1500._fU808[l_U1500._fU632[I]])
                {
                    if (sub_8692( l_U1500._fU1292[l_U1500._fU632[I]] ))
                    {
                        l_U1500._fU808[l_U1500._fU632[I]] = 1;
                        l_U3521++;
                        I = l_U1500._fU632;
                    }
                }
            }
        }
        else
        {
            l_U3519 = 2;
            return 1;
        }
        break;
        case 2:
        return 1;
        break;
    }
    return 0;
}

int sub_27830()
{
    int I;
    int iVar3;
    vector[6] vVar4;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    float[6] fVar23;

    array(ref vVar4, 6);
    array(ref fVar23, 6);
    vVar4[0] = {-1938.47700000, -655.21190000, 18.88300000};
    vVar4[1] = {-1929.40600000, -666.54000000, 18.88200000};
    vVar4[2] = {-1925.31000000, -648.15250000, 18.88340000};
    vVar4[3] = {-1914.03200000, -662.47360000, 18.88230000};
    vVar4[4] = {-1907.96800000, -640.33560000, 18.88320000};
    vVar4[5] = {-1902.95500000, -659.10170000, 18.88370000};
    fVar23[0] = 180.25540000;
    fVar23[1] = 105.16710000;
    fVar23[2] = 187.75610000;
    fVar23[3] = 307.90060000;
    fVar23[4] = 232.80330000;
    fVar23[5] = 314.99080000;
    switch (l_U3522)
    {
        case 0:
        if (sub_18143( -1461281345 ))
        {
            for ( I = 0; I < 6; I++ )
            {
                if ((l_U1500._fU1572[I] == nil) AND (CAN_REGISTER_MISSION_PED()))
                {
                    l_U1500._fU1572[I] = sub_24015( vVar4[I], fVar23[I] );
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( sub_8717( l_U1500._fU1572[I] ), 1 );
                    SET_CHAR_RELATIONSHIP_GROUP( sub_8717( l_U1500._fU1572[I] ), 25 );
                    SET_NETWORK_ID_CAN_MIGRATE( l_U1500._fU1572[I], 1 );
                    SET_CHAR_DECISION_MAKER( sub_8717( l_U1500._fU1572[I] ), l_U3066 );
                    REMOVE_ALL_CHAR_WEAPONS( sub_8717( l_U1500._fU1572[I] ) );
                    if (sub_13089() < 3)
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar3 );
                        if (iVar3 == 0)
                        {
                            GIVE_DELAYED_WEAPON_TO_CHAR( sub_8717( l_U1500._fU1572[I] ), 12, 10000, 1 );
                        }
                        else
                        {
                            GIVE_DELAYED_WEAPON_TO_CHAR( sub_8717( l_U1500._fU1572[I] ), 10, 10000, 1 );
                        }
                    }
                    else if (sub_13089() == 3)
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar3 );
                        if (iVar3 == 0)
                        {
                            GIVE_DELAYED_WEAPON_TO_CHAR( sub_8717( l_U1500._fU1572[I] ), 12, 10000, 1 );
                        }
                        else
                        {
                            GIVE_DELAYED_WEAPON_TO_CHAR( sub_8717( l_U1500._fU1572[I] ), 13, 10000, 1 );
                        }
                    }
                    else if (sub_13089() == 4)
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar3 );
                        if (iVar3 == 0)
                        {
                            GIVE_DELAYED_WEAPON_TO_CHAR( sub_8717( l_U1500._fU1572[I] ), 13, 10000, 1 );
                        }
                        else
                        {
                            GIVE_DELAYED_WEAPON_TO_CHAR( sub_8717( l_U1500._fU1572[I] ), 14, 10000, 1 );
                        }
                    };;;
                    SET_COMBAT_DECISION_MAKER( sub_8717( l_U1500._fU1572[I] ), l_U3068 );
                    l_U3223++;
                }
            }
            if (l_U3223 == 6)
            {
                sub_24636( ref l_U1500._fU668 );
                l_U3522 = 1;
            }
        }
        break;
        case 1:
        if ((((sub_13089() < 3) AND (l_U3523 < 1)) || ((sub_13089() == 3) AND (l_U3523 < 1))) || ((sub_13089() == 4) AND (l_U3523 < 3)))
        {
            for ( I = 0; I < l_U1500._fU668; I++ )
            {
                if (NOT l_U1500._fU844[l_U1500._fU668[I]])
                {
                    if (sub_8692( l_U1500._fU1572[l_U1500._fU668[I]] ))
                    {
                        l_U1500._fU844[l_U1500._fU668[I]] = 1;
                        l_U3523++;
                        I = l_U1500._fU668;
                    }
                }
            }
        }
        else
        {
            l_U3522 = 2;
            return 1;
        }
        break;
        case 2:
        return 1;
        break;
    }
    return 0;
}

int sub_29001()
{
    int I;
    int iVar3;
    vector[3] vVar4;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    float[3] fVar14;

    array(ref vVar4, 3);
    array(ref fVar14, 3);
    vVar4[0] = {-1946.46000000, -665.64250000, 29.84320000};
    vVar4[1] = {-1948.13400000, -665.04300000, 29.84320000};
    vVar4[2] = {-1925.48800000, -649.36810000, 29.84360000};
    fVar14[0] = 69.68820000;
    fVar14[1] = 249.84780000;
    fVar14[2] = 300.71470000;
    if (sub_18143( -1461281345 ))
    {
        for ( I = 0; I < 3; I++ )
        {
            if ((l_U1500._fU1696[I] == nil) AND (CAN_REGISTER_MISSION_PED()))
            {
                l_U1500._fU1696[I] = sub_24015( vVar4[I], fVar14[I] );
                SET_LOAD_COLLISION_FOR_CHAR_FLAG( sub_8717( l_U1500._fU1696[I] ), 1 );
                SET_CHAR_RELATIONSHIP_GROUP( sub_8717( l_U1500._fU1696[I] ), 25 );
                SET_NETWORK_ID_CAN_MIGRATE( l_U1500._fU1696[I], 1 );
                SET_CHAR_DECISION_MAKER( sub_8717( l_U1500._fU1696[I] ), l_U3066 );
                REMOVE_ALL_CHAR_WEAPONS( sub_8717( l_U1500._fU1696[I] ) );
                if (sub_13089() < 3)
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar3 );
                    if (iVar3 == 0)
                    {
                        GIVE_DELAYED_WEAPON_TO_CHAR( sub_8717( l_U1500._fU1696[I] ), 12, 10000, 1 );
                    }
                    else
                    {
                        GIVE_DELAYED_WEAPON_TO_CHAR( sub_8717( l_U1500._fU1696[I] ), 10, 10000, 1 );
                    }
                }
                else if (sub_13089() == 3)
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar3 );
                    if (iVar3 == 0)
                    {
                        GIVE_DELAYED_WEAPON_TO_CHAR( sub_8717( l_U1500._fU1696[I] ), 12, 10000, 1 );
                    }
                    else
                    {
                        GIVE_DELAYED_WEAPON_TO_CHAR( sub_8717( l_U1500._fU1696[I] ), 13, 10000, 1 );
                    }
                }
                else if (sub_13089() == 4)
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar3 );
                    if (iVar3 == 0)
                    {
                        GIVE_DELAYED_WEAPON_TO_CHAR( sub_8717( l_U1500._fU1696[I] ), 13, 10000, 1 );
                    }
                    else
                    {
                        GIVE_DELAYED_WEAPON_TO_CHAR( sub_8717( l_U1500._fU1696[I] ), 14, 10000, 1 );
                    }
                };;;
                SET_COMBAT_DECISION_MAKER( sub_8717( l_U1500._fU1696[I] ), l_U3068 );
                l_U3524++;
            }
        }
        if (l_U3524 == 3)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref iVar3 );
            l_U1500._fU880[iVar3] = 1;
            return 1;
        }
    }
    return 0;
}

int sub_29814()
{
    int I;
    int iVar3;
    vector[4] vVar4;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    float[4] fVar17;

    array(ref vVar4, 4);
    array(ref fVar17, 4);
    vVar4[0] = {-1926.67000000, -654.68290000, 35.17670000};
    vVar4[1] = {-1926.74300000, -652.29300000, 35.17670000};
    vVar4[2] = {-1913.76600000, -637.89410000, 35.17630000};
    vVar4[3] = {-1940.24500000, -665.46710000, 35.17670000};
    fVar17[0] = 0.07300000;
    fVar17[1] = 182.14780000;
    fVar17[2] = 237.86890000;
    fVar17[3] = 95.54140000;
    if (sub_18143( -1461281345 ))
    {
        for ( I = 0; I < 4; I++ )
        {
            if ((l_U1500._fU1712[I] == nil) AND (CAN_REGISTER_MISSION_PED()))
            {
                l_U1500._fU1712[I] = sub_24015( vVar4[I], fVar17[I] );
                SET_LOAD_COLLISION_FOR_CHAR_FLAG( sub_8717( l_U1500._fU1712[I] ), 1 );
                SET_CHAR_RELATIONSHIP_GROUP( sub_8717( l_U1500._fU1712[I] ), 25 );
                SET_NETWORK_ID_CAN_MIGRATE( l_U1500._fU1712[I], 1 );
                SET_CHAR_DECISION_MAKER( sub_8717( l_U1500._fU1712[I] ), l_U3066 );
                REMOVE_ALL_CHAR_WEAPONS( sub_8717( l_U1500._fU1712[I] ) );
                SET_SENSE_RANGE( sub_8717( l_U1500._fU1712[I] ), 60.00000000 );
                if (sub_13089() < 3)
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar3 );
                    if (iVar3 == 0)
                    {
                        GIVE_DELAYED_WEAPON_TO_CHAR( sub_8717( l_U1500._fU1712[I] ), 12, 10000, 1 );
                    }
                    else
                    {
                        GIVE_DELAYED_WEAPON_TO_CHAR( sub_8717( l_U1500._fU1712[I] ), 10, 10000, 1 );
                    }
                }
                else if (sub_13089() == 3)
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar3 );
                    if (iVar3 == 0)
                    {
                        GIVE_DELAYED_WEAPON_TO_CHAR( sub_8717( l_U1500._fU1712[I] ), 12, 10000, 1 );
                    }
                    else
                    {
                        GIVE_DELAYED_WEAPON_TO_CHAR( sub_8717( l_U1500._fU1712[I] ), 13, 10000, 1 );
                    }
                }
                else if (sub_13089() == 4)
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar3 );
                    if (iVar3 == 0)
                    {
                        GIVE_DELAYED_WEAPON_TO_CHAR( sub_8717( l_U1500._fU1712[I] ), 13, 10000, 1 );
                    }
                    else
                    {
                        GIVE_DELAYED_WEAPON_TO_CHAR( sub_8717( l_U1500._fU1712[I] ), 14, 10000, 1 );
                    }
                };;;
                SET_COMBAT_DECISION_MAKER( sub_8717( l_U1500._fU1712[I] ), l_U3068 );
                l_U3525++;
            }
        }
        if (l_U3525 == 4)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 6, ref iVar3 );
            if (iVar3 == 0)
            {
                l_U1500._fU896[0] = 1;
                l_U1500._fU896[3] = 1;
            }
            else if (iVar3 == 1)
            {
                l_U1500._fU896[1] = 1;
                l_U1500._fU896[2] = 1;
            }
            else if (iVar3 == 2)
            {
                l_U1500._fU896[2] = 1;
                l_U1500._fU896[3] = 1;
            }
            else if (iVar3 == 3)
            {
                l_U1500._fU896[1] = 1;
                l_U1500._fU896[3] = 1;
            }
            else if (iVar3 == 4)
            {
                l_U1500._fU896[0] = 1;
                l_U1500._fU896[2] = 1;
            }
            else if (iVar3 == 5)
            {
                l_U1500._fU896[0] = 1;
                l_U1500._fU896[1] = 1;
            };;;;;;
            return 1;
        }
    }
    return 0;
}

int sub_30915()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_12059( I ))
        {
            if (LOCATE_CHAR_ON_FOOT_3D( sub_465( I ), -1879.17500000, -654.38290000, 2.57230000, 25.00000000, 25.00000000, 25.00000000, 0 ))
            {
                return 1;
            }
            if (IS_CHAR_IN_AREA_3D( sub_465( I ), -1853.52100000, -710.49720000, 45.78420000, -2020.79800000, -596.47670000, -12.81520000, 0 ))
            {
                return 1;
            }
            if (sub_31063())
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_31063()
{
    int J;
    int I;
    unknown uVar4;

    for ( J = 0; J < l_U1500._fU1208; J++ )
    {
        if (sub_8692( l_U1500._fU1208[J] ))
        {
            if ((sub_31133( sub_8717( l_U1500._fU1208[J] ) )) || (sub_31247( sub_8717( l_U1500._fU1208[J] ) )))
            {
                return 1;
            }
            if (IS_CHAR_SHOOTING( sub_8717( l_U1500._fU1208[J] ) ))
            {
                return 1;
            }
            for ( I = 0; I < 16; I++ )
            {
                if (IS_NETWORK_PLAYER_ACTIVE( I ))
                {
                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( sub_465( I ), sub_8717( l_U1500._fU1208[J] ), 0 ))
                    {
                        return 1;
                    }
                    if (sub_31461( sub_465( I ) ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_465( I ), ref uVar4 );
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CAR( sub_8717( l_U1500._fU1208[J] ), uVar4 ))
                        {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    if (sub_31615())
    {
        return 1;
    }
    return 0;
}

int sub_31133(unknown uParam0)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (NOT (IS_CHAR_DEAD( uParam0 )))
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( uParam0, sub_465( I ), 0 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_31247(unknown uParam0)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (NOT (IS_CHAR_DEAD( uParam0 )))
            {
                if (IS_PLAYER_TARGETTING_CHAR( sub_427( I ), uParam0 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_31461(unknown uParam0)
{
    if (((((IS_CHAR_IN_ANY_BOAT( uParam0 )) || (IS_CHAR_IN_ANY_CAR( uParam0 ))) || (IS_CHAR_IN_ANY_HELI( uParam0 ))) || (IS_CHAR_IN_ANY_PLANE( uParam0 ))) || (IS_CHAR_IN_ANY_TRAIN( uParam0 )))
    {
        return 1;
    }
    return 0;
}

int sub_31615()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_12059( I ))
        {
            if ((((IS_CHAR_IN_AREA_3D( sub_465( I ), -1916.34400000, -641.70980000, -7.86329900, -1919.62900000, -597.86100000, 9.30491600, 0 )) || (IS_CHAR_IN_AREA_3D( sub_465( I ), -1921.45700000, -591.69110000, -1.09832400, -1937.76800000, -597.98410000, 10.46613000, 0 ))) || (IS_CHAR_IN_AREA_3D( sub_465( I ), -1972.74600000, -587.61290000, 0.39221800, -2017.46400000, -588.69740000, 8.19444400, 0 ))) || (IS_CHAR_IN_AREA_3D( sub_465( I ), -1900.33000000, -667.46640000, -0.21704900, -1899.28700000, -717.79410000, 9.29394300, 0 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_31956()
{
    int I;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    for ( I = 0; I < l_U1500._fU1208; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1208[I] ))
        {
            if ((IS_CHAR_FATALLY_INJURED( sub_8717( l_U1500._fU1208[I] ) )) || (IS_CHAR_DEAD( sub_8717( l_U1500._fU1208[I] ) )))
            {
                iVar3++;
            }
        }
        else
        {
            iVar3++;
        }
    }
    for ( I = 0; I < l_U1500._fU1292; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1292[I] ))
        {
            if ((IS_CHAR_FATALLY_INJURED( sub_8717( l_U1500._fU1292[I] ) )) || (IS_CHAR_DEAD( sub_8717( l_U1500._fU1292[I] ) )))
            {
                iVar4++;
            }
        }
        else
        {
            iVar4++;
        }
    }
    for ( I = 0; I < l_U1500._fU1572; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1572[I] ))
        {
            if ((IS_CHAR_FATALLY_INJURED( sub_8717( l_U1500._fU1572[I] ) )) || (IS_CHAR_DEAD( sub_8717( l_U1500._fU1572[I] ) )))
            {
                iVar5++;
            }
        }
        else
        {
            iVar5++;
        }
    }
    for ( I = 0; I < l_U1500._fU1696; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1696[I] ))
        {
            if ((IS_CHAR_FATALLY_INJURED( sub_8717( l_U1500._fU1696[I] ) )) || (IS_CHAR_DEAD( sub_8717( l_U1500._fU1696[I] ) )))
            {
                iVar6++;
            }
        }
        else
        {
            iVar6++;
        }
    }
    for ( I = 0; I < l_U1500._fU1712; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1712[I] ))
        {
            if ((IS_CHAR_FATALLY_INJURED( sub_8717( l_U1500._fU1712[I] ) )) || (IS_CHAR_DEAD( sub_8717( l_U1500._fU1712[I] ) )))
            {
                iVar7++;
            }
        }
        else
        {
            iVar7++;
        }
    }
    if (((((iVar3 == l_U1500._fU1208) AND (iVar4 == l_U1500._fU1292)) AND (iVar5 == l_U1500._fU1572)) AND (iVar6 == l_U1500._fU1696)) AND (iVar7 == l_U1500._fU1712))
    {
        return 1;
    }
    return 0;
}

void sub_32697()
{
    return;
}

int sub_32739()
{
    int I;
    int iVar3;
    vector[11] vVar4;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;

    array(ref vVar4, 11);
    vVar4[0] = {-1921.92700000, -647.31830000, 19.17860000};
    vVar4[1] = {-1913.55600000, -653.60380000, 19.17860000};
    vVar4[2] = {-1915.10300000, -659.54210000, 19.17860000};
    vVar4[3] = {-1934.01600000, -660.88100000, 19.17860000};
    vVar4[4] = {-1939.76800000, -647.17320000, 24.51190000};
    vVar4[5] = {-1918.60100000, -648.49810000, 24.51130000};
    vVar4[6] = {-1934.05500000, -637.50260000, 24.51060000};
    vVar4[7] = {-1906.50000000, -657.93070000, 24.51120000};
    vVar4[8] = {-1993.56700000, -654.61830000, 1.83790000};
    vVar4[9] = {-1929.76600000, -629.90380000, 8.47380000};
    vVar4[10] = {-1888.73200000, -629.77250000, 8.47380000};
    for ( I = 0; I <= 10; I++ )
    {
        if (((((I == 0) || (I == 3)) || (I == 5)) || (I == 7)) || (I == 9))
        {
            if (l_U1500._fU1780[I] == nil)
            {
                CREATE_PICKUP_WITH_AMMO( sub_33068( 18 ), 3, 3, vVar4[I]._fU0, vVar4[I]._fU4, vVar4[I]._fU8, ref l_U1500._fU1780[I] );
            }
        }
        else if (((I == 1) || (I == 4)) || (I == 8))
        {
            if (l_U1500._fU1780[I] == nil)
            {
                CREATE_PICKUP_WITH_AMMO( sub_33068( 4 ), 3, 5, vVar4[I]._fU0, vVar4[I]._fU4, vVar4[I]._fU8, ref l_U1500._fU1780[I] );
            }
        }
        else if (((I == 2) || (I == 6)) || (I == 10))
        {
            if (l_U1500._fU1780[I] == nil)
            {
                CREATE_PICKUP_WITH_AMMO( sub_33068( 5 ), 3, 5, vVar4[I]._fU0, vVar4[I]._fU4, vVar4[I]._fU8, ref l_U1500._fU1780[I] );
            }
        };;;
    }
    for ( I = 0; I < l_U1500._fU1780; I++ )
    {
        if (DOES_PICKUP_EXIST( l_U1500._fU1780[I] ))
        {
            iVar3++;
        }
    }
    if (iVar3 == 11)
    {
        return 1;
    }
    return 0;
}

void sub_33068(unknown uParam0)
{
    unknown Result;

    GET_WEAPONTYPE_MODEL( uParam0, ref Result );
    return Result;
}

int sub_33515()
{
    switch (l_U1500._fU544)
    {
        case 1:
        if (sub_33596())
        {
            return 1;
        }
        break;
        case 2:
        if (sub_33690())
        {
            return 1;
        }
        break;
        case 3:
        if (sub_33772())
        {
            return 1;
        }
        break;
        case 4:
        if ((sub_33690()) AND (sub_33772()))
        {
            return 1;
        }
        break;
        case 5:
        if ((sub_33690()) AND (sub_33596()))
        {
            return 1;
        }
        break;
        case 6:
        if ((sub_33596()) AND (sub_33772()))
        {
            return 1;
        }
        break;
        case 7:
        if (((sub_33772()) AND (sub_33690())) AND (sub_33596()))
        {
            return 1;
        }
        break;
    }
    return 0;
}

int sub_33596()
{
    if (((sub_8692( l_U1500._fU1732[0] )) || (sub_8692( l_U1500._fU1748[0] ))) || (sub_8692( l_U1500._fU1764[0] )))
    {
        return 0;
    }
    return 1;
}

int sub_33690()
{
    int I;

    for ( I = 0; I < 4; I++ )
    {
        if (sub_8692( l_U1500._fU1604[I] ))
        {
            return 0;
        }
    }
    return 1;
}

int sub_33772()
{
    int I;

    for ( I = 0; I < 4; I++ )
    {
        if (sub_8692( l_U1500._fU1648[I] ))
        {
            return 0;
        }
    }
    return 1;
}

int sub_34010()
{
    switch (l_U3544)
    {
        case 0:
        if (NOT l_U3192)
        {
            if (sub_13089() < 3)
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U3545 );
                l_U3544 = 1;
            }
            else if (sub_13089() == 3)
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U3545 );
                l_U3544 = 2;
            }
            else if (sub_13089() == 4)
            {
                l_U3544 = 3;
            };;;
        }
        else if (l_U3193)
        {
            if (sub_34179())
            {
                l_U1500._fU944 = 1;
                l_U1500._fU544 = 1;
                return 1;
            }
        }
        else if (l_U3194)
        {
            if (sub_37040())
            {
                l_U1500._fU544 = 3;
                return 1;
            }
        }
        else if (l_U3195)
        {
            if (sub_39182())
            {
                l_U1500._fU544 = 2;
                return 1;
            }
        }
        else if (l_U3196)
        {
            if ((sub_34179()) AND (sub_37040()))
            {
                l_U1500._fU544 = 6;
                return 1;
            }
        }
        else if (l_U3197)
        {
            if ((sub_37040()) AND (sub_39182()))
            {
                l_U1500._fU544 = 4;
                return 1;
            }
        }
        else if (l_U3198)
        {
            if ((sub_39182()) AND (sub_34179()))
            {
                l_U1500._fU544 = 5;
                return 1;
            }
        }
        else if (l_U3199)
        {
            if (((sub_34179()) AND (sub_37040())) AND (sub_39182()))
            {
                l_U1500._fU544 = 7;
                return 1;
            }
        };;;;;;;;
        break;
        case 1:
        if (l_U3545 == 0)
        {
            if (sub_34179())
            {
                l_U1500._fU544 = 1;
                return 1;
            }
        }
        else if (l_U3545 == 1)
        {
            if (sub_37040())
            {
                l_U1500._fU544 = 3;
                return 1;
            }
        }
        else if (l_U3545 == 2)
        {
            if (sub_39182())
            {
                l_U1500._fU544 = 2;
                return 1;
            }
        };;;
        break;
        case 2:
        if (l_U3545 == 0)
        {
            if ((sub_34179()) AND (sub_37040()))
            {
                l_U1500._fU544 = 6;
                return 1;
            }
        }
        else if (l_U3545 == 1)
        {
            if ((sub_37040()) AND (sub_39182()))
            {
                l_U1500._fU544 = 4;
                return 1;
            }
        }
        else if (l_U3545 == 2)
        {
            if ((sub_39182()) AND (sub_34179()))
            {
                l_U1500._fU544 = 5;
                return 1;
            }
        };;;
        break;
        case 3:
        if (((sub_34179()) AND (sub_37040())) AND (sub_39182()))
        {
            l_U1500._fU544 = 7;
            return 1;
        }
        break;
    }
    return 0;
}

int sub_34179()
{
    vector[3] vVar2;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    float[3] fVar12;
    int iVar16;

    array(ref vVar2, 3);
    array(ref fVar12, 3);
    vVar2[0] = {-2191.58900000, -522.34170000, 0.08630000};
    vVar2[1] = {-2127.68700000, -594.38770000, 0.08630000};
    vVar2[2] = {-2010.17900000, -728.01480000, 0.08630000};
    fVar12[0] = 214.51000000;
    fVar12[1] = 224.07370000;
    fVar12[2] = 247.42150000;
    switch (l_U3542)
    {
        case 0:
        if (sub_34341( vVar2[0] ))
        {
            iVar16 = 0;
            l_U3542 = 1;
        }
        else if (sub_34341( vVar2[1] ))
        {
            iVar16 = 1;
            l_U3542 = 1;
        }
        else if (sub_34341( vVar2[2] ))
        {
            iVar16 = 2;
            l_U3542 = 1;
        };;;
        break;
        case 1:
        if ((sub_18143( 1376298265 )) AND (sub_18143( 584879743 )))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( -322343873 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 510389335 );
            if ((l_U1500._fU1524[0] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
            {
                l_U1500._fU1524[0] = sub_20623( sub_20549( 400514754, vVar2[iVar16], fVar12[iVar16] ) );
                TAKE_CAR_OUT_OF_PARKED_CARS_BUDGET( sub_9181( l_U1500._fU1524[0] ), 1 );
                SET_LOAD_COLLISION_FOR_CAR_FLAG( sub_9181( l_U1500._fU1524[0] ), 1 );
                SET_NETWORK_ID_CAN_MIGRATE( l_U1500._fU1524[0], 1 );
                SET_CAR_HEALTH( sub_9181( l_U1500._fU1524[0] ), 800 );
                l_U3543++;
            }
            if ((l_U1500._fU1328[0] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
            {
                l_U1500._fU1328[0] = sub_20623( sub_20549( 584879743, -1051.64200000, 1823.42700000, 7.88690000, 238.12870000 ) );
                CHANGE_CAR_COLOUR( sub_9181( l_U1500._fU1328[0] ), 0, 0 );
                SET_EXTRA_CAR_COLOURS( sub_9181( l_U1500._fU1328[0] ), 37, 0 );
                TURN_OFF_VEHICLE_EXTRA( sub_9181( l_U1500._fU1328[0] ), 5, 0 );
                TURN_OFF_VEHICLE_EXTRA( sub_9181( l_U1500._fU1328[0] ), 6, 0 );
                TURN_OFF_VEHICLE_EXTRA( sub_9181( l_U1500._fU1328[0] ), 7, 0 );
                TAKE_CAR_OUT_OF_PARKED_CARS_BUDGET( sub_9181( l_U1500._fU1328[0] ), 1 );
                SET_LOAD_COLLISION_FOR_CAR_FLAG( sub_9181( l_U1500._fU1328[0] ), 1 );
                SET_NETWORK_ID_CAN_MIGRATE( l_U1500._fU1328[0], 1 );
                l_U3543++;
            }
            if ((l_U1500._fU1328[1] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
            {
                l_U1500._fU1328[1] = sub_20623( sub_20549( 584879743, -1052.53000000, 1825.95700000, 7.97030000, 234.52100000 ) );
                CHANGE_CAR_COLOUR( sub_9181( l_U1500._fU1328[1] ), 0, 0 );
                SET_EXTRA_CAR_COLOURS( sub_9181( l_U1500._fU1328[1] ), 37, 0 );
                TURN_OFF_VEHICLE_EXTRA( sub_9181( l_U1500._fU1328[1] ), 5, 0 );
                TURN_OFF_VEHICLE_EXTRA( sub_9181( l_U1500._fU1328[1] ), 6, 0 );
                TURN_OFF_VEHICLE_EXTRA( sub_9181( l_U1500._fU1328[1] ), 7, 0 );
                TAKE_CAR_OUT_OF_PARKED_CARS_BUDGET( sub_9181( l_U1500._fU1328[1] ), 1 );
                SET_LOAD_COLLISION_FOR_CAR_FLAG( sub_9181( l_U1500._fU1328[1] ), 1 );
                SET_NETWORK_ID_CAN_MIGRATE( l_U1500._fU1328[1], 1 );
                l_U3543++;
            }
            if ((l_U1500._fU1328[2] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
            {
                l_U1500._fU1328[2] = sub_20623( sub_20549( 584879743, -1055.29100000, 1826.27200000, 7.81740000, 226.46750000 ) );
                CHANGE_CAR_COLOUR( sub_9181( l_U1500._fU1328[2] ), 0, 0 );
                SET_EXTRA_CAR_COLOURS( sub_9181( l_U1500._fU1328[2] ), 37, 0 );
                TURN_OFF_VEHICLE_EXTRA( sub_9181( l_U1500._fU1328[2] ), 5, 0 );
                TURN_OFF_VEHICLE_EXTRA( sub_9181( l_U1500._fU1328[2] ), 6, 0 );
                TURN_OFF_VEHICLE_EXTRA( sub_9181( l_U1500._fU1328[2] ), 7, 0 );
                TAKE_CAR_OUT_OF_PARKED_CARS_BUDGET( sub_9181( l_U1500._fU1328[2] ), 1 );
                SET_LOAD_COLLISION_FOR_CAR_FLAG( sub_9181( l_U1500._fU1328[2] ), 1 );
                SET_NETWORK_ID_CAN_MIGRATE( l_U1500._fU1328[2], 1 );
                l_U3543++;
            }
            if ((l_U1500._fU1480 == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
            {
                l_U1500._fU1480 = sub_20623( sub_20549( 1376298265, -1020.21700000, 1808.20800000, 7.97070000, 241.74070000 ) );
                CHANGE_CAR_COLOUR( sub_9181( l_U1500._fU1480 ), 0, 0 );
                SET_EXTRA_CAR_COLOURS( sub_9181( l_U1500._fU1480 ), 37, 0 );
                TURN_OFF_VEHICLE_EXTRA( sub_9181( l_U1500._fU1480 ), 5, 0 );
                TURN_OFF_VEHICLE_EXTRA( sub_9181( l_U1500._fU1480 ), 6, 0 );
                TURN_OFF_VEHICLE_EXTRA( sub_9181( l_U1500._fU1480 ), 7, 0 );
                TAKE_CAR_OUT_OF_PARKED_CARS_BUDGET( sub_9181( l_U1500._fU1480 ), 1 );
                SET_LOAD_COLLISION_FOR_CAR_FLAG( sub_9181( l_U1500._fU1480 ), 1 );
                SET_NETWORK_ID_CAN_MIGRATE( l_U1500._fU1480, 1 );
                l_U3543++;
            }
            if (sub_18143( -1461281345 ))
            {
                if (sub_35989( l_U1500._fU1524[0] ))
                {
                    if ((l_U1500._fU1732[0] == nil) AND (CAN_REGISTER_MISSION_PED()))
                    {
                        l_U1500._fU1732[0] = sub_24015( 2000.00000000, 2000.00000000, 200.00000000, 0.00000000 );
                        SET_LOAD_COLLISION_FOR_CHAR_FLAG( sub_8717( l_U1500._fU1732[0] ), 1 );
                        WARP_CHAR_INTO_CAR( sub_8717( l_U1500._fU1732[0] ), sub_9181( l_U1500._fU1524[0] ) );
                        SET_NETWORK_ID_CAN_MIGRATE( l_U1500._fU1732[0], 1 );
                        SET_CHAR_DECISION_MAKER( sub_8717( l_U1500._fU1732[0] ), l_U3071 );
                        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( sub_8717( l_U1500._fU1732[0] ), 0 );
                        l_U3543++;
                    }
                    if ((l_U1500._fU1748[0] == nil) AND (CAN_REGISTER_MISSION_PED()))
                    {
                        l_U1500._fU1748[0] = sub_24015( 2000.00000000, 2000.00000000, 200.00000000, 0.00000000 );
                        SET_LOAD_COLLISION_FOR_CHAR_FLAG( sub_8717( l_U1500._fU1748[0] ), 1 );
                        WARP_CHAR_INTO_CAR_AS_PASSENGER( sub_8717( l_U1500._fU1748[0] ), sub_9181( l_U1500._fU1524[0] ), 1 );
                        SET_NETWORK_ID_CAN_MIGRATE( l_U1500._fU1748[0], 1 );
                        SET_CHAR_DECISION_MAKER( sub_8717( l_U1500._fU1748[0] ), l_U3066 );
                        SET_COMBAT_DECISION_MAKER( sub_8717( l_U1500._fU1748[0] ), l_U3067 );
                        GIVE_WEAPON_TO_CHAR( sub_8717( l_U1500._fU1748[0] ), 14, 10000, 1 );
                        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( sub_8717( l_U1500._fU1748[0] ), 0 );
                        SET_CHAR_WILL_USE_COVER( sub_8717( l_U1500._fU1748[0] ), 0 );
                        l_U3543++;
                    }
                    if ((l_U1500._fU1764[0] == nil) AND (CAN_REGISTER_MISSION_PED()))
                    {
                        l_U1500._fU1764[0] = sub_24015( 2000.00000000, 2000.00000000, 200.00000000, 0.00000000 );
                        SET_LOAD_COLLISION_FOR_CHAR_FLAG( sub_8717( l_U1500._fU1764[0] ), 1 );
                        WARP_CHAR_INTO_CAR_AS_PASSENGER( sub_8717( l_U1500._fU1764[0] ), sub_9181( l_U1500._fU1524[0] ), 2 );
                        SET_NETWORK_ID_CAN_MIGRATE( l_U1500._fU1764[0], 1 );
                        SET_CHAR_DECISION_MAKER( sub_8717( l_U1500._fU1764[0] ), l_U3066 );
                        SET_COMBAT_DECISION_MAKER( sub_8717( l_U1500._fU1764[0] ), l_U3067 );
                        GIVE_WEAPON_TO_CHAR( sub_8717( l_U1500._fU1764[0] ), 14, 10000, 1 );
                        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( sub_8717( l_U1500._fU1764[0] ), 0 );
                        SET_CHAR_WILL_USE_COVER( sub_8717( l_U1500._fU1764[0] ), 0 );
                        l_U3543++;
                    }
                }
                if (l_U3543 == 8)
                {
                    l_U3542 = 2;
                    return 1;
                }
            }
        }
        break;
        case 2:
        return 1;
        break;
    }
    return 0;
}

int sub_34341(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    if (LOCATE_CHAR_ANY_MEANS_3D( sub_2736(), uParam0._fU0, uParam0._fU4, uParam0._fU8, 15.00000000, 15.00000000, 15.00000000, 0 ))
    {
        return 0;
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_2736(), uParam0._fU0, uParam0._fU4, uParam0._fU8, 120.00000000, 120.00000000, 120.00000000, 0 ))
    {
        GET_GAME_VIEWPORT_ID( ref uVar5 );
        if (CAM_IS_SPHERE_VISIBLE( uVar5, uParam0._fU0, uParam0._fU4, uParam0._fU8, 2.00000000 ))
        {
            return 0;
        }
        if (IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE( uParam0, 2.00000000 ))
        {
            return 0;
        }
    }
    return 1;
}

int sub_35989(unknown uParam0)
{
    float fVar3;
    int iVar4;

    if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        if (IS_VEH_DRIVEABLE( sub_9181( uParam0 ) ))
        {
            GET_CAR_MODEL( sub_9181( uParam0 ), ref iVar4 );
            if (((iVar4 == -1660661558) || (iVar4 == 353883353)) || (iVar4 == 837858166))
            {
                return 1;
            }
            else
            {
                GET_CAR_UPRIGHT_VALUE( sub_9181( uParam0 ), ref fVar3 );
                if (fVar3 > 0.00000000)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_37040()
{
    int I;
    vector[4] vVar3;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    vector[4] vVar16;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    float[4] fVar29;
    float[4] fVar34;

    array(ref vVar3, 4);
    array(ref vVar16, 4);
    array(ref fVar29, 4);
    array(ref fVar34, 4);
    vVar3[0] = {-1744.93700000, -446.45740000, 2.34880000};
    vVar16[0] = {-1742.98800000, -452.26200000, 2.34180000};
    fVar29[0] = 6.75560000;
    fVar34[0] = 20.57360000;
    vVar3[1] = {-1508.62600000, -536.26370000, 2.39410000};
    vVar16[1] = {-1510.08200000, -541.70980000, 2.46540000};
    fVar29[1] = 344.79860000;
    fVar34[1] = 341.34780000;
    vVar3[2] = {-1387.64600000, -449.34700000, 2.39600000};
    vVar16[2] = {-1382.18500000, -449.11510000, 2.40630000};
    fVar29[2] = 90.75560000;
    fVar34[2] = 93.57360000;
    vVar3[3] = {-1536.30800000, -391.45450000, 2.39690000};
    vVar16[3] = {-1541.58600000, -391.65480000, 2.39310000};
    fVar29[3] = 273.75560000;
    fVar34[3] = 267.57360000;
    switch (l_U3539)
    {
        case 0:
        if (l_U3541 == 0)
        {
            if (NOT l_U1500._fU936)
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref l_U1500._fU524 );
            }
            l_U3541 = 1;
            if ((sub_34341( vVar3[l_U1500._fU524] )) AND (sub_34341( vVar16[l_U1500._fU524] )))
            {
                l_U3539 = 1;
            }
        }
        else if ((sub_34341( vVar3[l_U1500._fU524] )) AND (sub_34341( vVar16[l_U1500._fU524] )))
        {
            l_U3539 = 1;
        }
        else if (NOT l_U1500._fU936)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref l_U1500._fU524 );
        };;;
        break;
        case 1:
        if (sub_34341( vVar3[l_U1500._fU524] ))
        {
            if (l_U1500._fU1636[0] == nil)
            {
                if (CAN_REGISTER_MISSION_VEHICLE())
                {
                    l_U1500._fU1636[0] = sub_20623( sub_20549( 584879743, vVar3[l_U1500._fU524], fVar29[l_U1500._fU524] ) );
                    CHANGE_CAR_COLOUR( sub_9181( l_U1500._fU1636[0] ), 34, 34 );
                    SET_EXTRA_CAR_COLOURS( sub_9181( l_U1500._fU1636[0] ), 32, 0 );
                    TAKE_CAR_OUT_OF_PARKED_CARS_BUDGET( sub_9181( l_U1500._fU1636[0] ), 1 );
                    SET_LOAD_COLLISION_FOR_CAR_FLAG( sub_9181( l_U1500._fU1636[0] ), 1 );
                    SET_NETWORK_ID_CAN_MIGRATE( l_U1500._fU1636[0], 1 );
                    l_U3540++;
                }
            }
            else if (sub_18143( -1461281345 ))
            {
                for ( I = 0; I <= 1; I++ )
                {
                    if ((l_U1500._fU1648[I] == nil) AND (CAN_REGISTER_MISSION_PED()))
                    {
                        l_U1500._fU1648[I] = sub_24015( 0.00000000, 0.00000000, 500.00000000, 0.00000000 );
                        SET_NETWORK_ID_CAN_MIGRATE( l_U1500._fU1648[I], 1 );
                        SET_CHAR_WILL_DO_DRIVEBYS( sub_8717( l_U1500._fU1648[I] ), 1 );
                        SET_CHAR_WILL_USE_CARS_IN_COMBAT( sub_8717( l_U1500._fU1648[I] ), 1 );
                        SET_CHAR_WILL_USE_COVER( sub_8717( l_U1500._fU1648[I] ), 0 );
                        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( sub_8717( l_U1500._fU1648[I] ), 0 );
                        if (sub_35989( l_U1500._fU1636[0] ))
                        {
                            if (I == 0)
                            {
                                SET_CHAR_DECISION_MAKER( sub_8717( l_U1500._fU1648[I] ), l_U3071 );
                                WARP_CHAR_INTO_CAR( sub_8717( l_U1500._fU1648[I] ), sub_9181( l_U1500._fU1636[0] ) );
                            }
                            else if (HAS_CHAR_GOT_WEAPON( sub_8717( l_U1500._fU1648[I] ), 14 ))
                            {
                                REMOVE_WEAPON_FROM_CHAR( sub_8717( l_U1500._fU1648[I] ), 14 );
                            }
                            SET_CHAR_DECISION_MAKER( sub_8717( l_U1500._fU1648[I] ), l_U3066 );
                            SET_COMBAT_DECISION_MAKER( sub_8717( l_U1500._fU1648[I] ), l_U3067 );
                            WARP_CHAR_INTO_CAR_AS_PASSENGER( sub_8717( l_U1500._fU1648[I] ), sub_9181( l_U1500._fU1636[0] ), 0 );
                            SET_SENSE_RANGE( sub_8717( l_U1500._fU1648[I] ), 100.00000000 );;
                        }
                        l_U3540++;
                    }
                }
            }
            if (l_U1500._fU1636[1] == nil)
            {
                if (CAN_REGISTER_MISSION_VEHICLE())
                {
                    l_U1500._fU1636[1] = sub_20623( sub_20549( 584879743, vVar16[l_U1500._fU524], fVar34[l_U1500._fU524] ) );
                    CHANGE_CAR_COLOUR( sub_9181( l_U1500._fU1636[1] ), 34, 34 );
                    SET_EXTRA_CAR_COLOURS( sub_9181( l_U1500._fU1636[1] ), 32, 0 );
                    TAKE_CAR_OUT_OF_PARKED_CARS_BUDGET( sub_9181( l_U1500._fU1636[1] ), 1 );
                    SET_LOAD_COLLISION_FOR_CAR_FLAG( sub_9181( l_U1500._fU1636[1] ), 1 );
                    SET_NETWORK_ID_CAN_MIGRATE( l_U1500._fU1636[1], 1 );
                    l_U3540++;
                }
            }
            else if (sub_18143( -1461281345 ))
            {
                for ( I = 2; I <= 3; I++ )
                {
                    if ((l_U1500._fU1648[I] == nil) AND (CAN_REGISTER_MISSION_PED()))
                    {
                        l_U1500._fU1648[I] = sub_24015( 0.00000000, 0.00000000, 500.00000000, 0.00000000 );
                        SET_NETWORK_ID_CAN_MIGRATE( l_U1500._fU1648[I], 1 );
                        SET_CHAR_WILL_DO_DRIVEBYS( sub_8717( l_U1500._fU1648[I] ), 1 );
                        SET_CHAR_WILL_USE_CARS_IN_COMBAT( sub_8717( l_U1500._fU1648[I] ), 1 );
                        SET_CHAR_WILL_USE_COVER( sub_8717( l_U1500._fU1648[I] ), 0 );
                        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( sub_8717( l_U1500._fU1648[I] ), 0 );
                        if (sub_35989( l_U1500._fU1636[1] ))
                        {
                            if (I == 2)
                            {
                                SET_CHAR_DECISION_MAKER( sub_8717( l_U1500._fU1648[I] ), l_U3071 );
                                WARP_CHAR_INTO_CAR( sub_8717( l_U1500._fU1648[I] ), sub_9181( l_U1500._fU1636[1] ) );
                            }
                            else
                            {
                                SET_CHAR_DECISION_MAKER( sub_8717( l_U1500._fU1648[I] ), l_U3066 );
                                SET_COMBAT_DECISION_MAKER( sub_8717( l_U1500._fU1648[I] ), l_U3067 );
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( sub_8717( l_U1500._fU1648[I] ), sub_9181( l_U1500._fU1636[1] ), 0 );
                                SET_SENSE_RANGE( sub_8717( l_U1500._fU1648[I] ), 100.00000000 );
                            }
                        }
                        l_U3540++;
                    }
                }
            }
        }
        if (l_U3540 == 6)
        {
            l_U3539 = 5;
            return 1;
        }
        break;
        case 5:
        return 1;
        break;
    }
    return 0;
}

int sub_39182()
{
    int I;
    vector[4] vVar3;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    float[4] fVar16;

    array(ref vVar3, 4);
    array(ref fVar16, 4);
    vVar3[0] = {-1735.05200000, -391.13070000, 2.63160000};
    vVar3[1] = {-1647.02400000, -332.32160000, 2.25270000};
    vVar3[2] = {-1591.38300000, -371.83910000, 2.65370000};
    vVar3[3] = {-1310.36700000, -498.45700000, 2.71230000};
    fVar16[0] = 325.94150000;
    fVar16[1] = 44.08140000;
    fVar16[2] = 181.78850000;
    fVar16[3] = 161.58190000;
    switch (l_U3535)
    {
        case 0:
        if (l_U3538 == 0)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 1, 4, ref l_U1500._fU528 );
            l_U3538 = 1;
            if (sub_34341( vVar3[l_U1500._fU528] ))
            {
                l_U3535 = 1;
            }
        }
        else if (sub_34341( vVar3[l_U1500._fU528] ))
        {
            l_U3535 = 1;
        }
        else
        {
            GENERATE_RANDOM_INT_IN_RANGE( 1, 4, ref l_U1500._fU528 );
        }
        break;
        case 1:
        if (l_U1500._fU1600 == nil)
        {
            if (CAN_REGISTER_MISSION_VEHICLE())
            {
                if (sub_18143( -119658072 ))
                {
                    l_U1500._fU1600 = sub_20623( sub_20549( -119658072, vVar3[l_U1500._fU528], fVar16[l_U1500._fU528] ) );
                    TAKE_CAR_OUT_OF_PARKED_CARS_BUDGET( sub_9181( l_U1500._fU1600 ), 1 );
                    CHANGE_CAR_COLOUR( sub_9181( l_U1500._fU1600 ), 0, 0 );
                    SET_EXTRA_CAR_COLOURS( sub_9181( l_U1500._fU1600 ), 0, 0 );
                    SET_LOAD_COLLISION_FOR_CAR_FLAG( sub_9181( l_U1500._fU1600 ), 1 );
                    SET_NETWORK_ID_CAN_MIGRATE( l_U1500._fU1600, 1 );
                    l_U3536++;
                }
            }
        }
        else if (sub_18143( -1461281345 ))
        {
            for ( I = 0; I <= 3; I++ )
            {
                if ((l_U1500._fU1604[I] == nil) AND (CAN_REGISTER_MISSION_PED()))
                {
                    l_U1500._fU1604[I] = sub_24015( 0.00000000, 0.00000000, 500.00000000, 0.00000000 );
                    SET_NETWORK_ID_CAN_MIGRATE( l_U1500._fU1604[I], 1 );
                    SET_CHAR_WILL_DO_DRIVEBYS( sub_8717( l_U1500._fU1604[I] ), 1 );
                    SET_CHAR_WILL_USE_CARS_IN_COMBAT( sub_8717( l_U1500._fU1604[I] ), 1 );
                    SET_CHAR_WILL_USE_COVER( sub_8717( l_U1500._fU1604[I] ), 0 );
                    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( sub_8717( l_U1500._fU1604[I] ), 0 );
                    if (sub_35989( l_U1500._fU1600 ))
                    {
                        if (I == 0)
                        {
                            SET_CHAR_DECISION_MAKER( sub_8717( l_U1500._fU1604[I] ), l_U3071 );
                            WARP_CHAR_INTO_CAR( sub_8717( l_U1500._fU1604[I] ), sub_9181( l_U1500._fU1600 ) );
                        }
                        else
                        {
                            SET_CHAR_DECISION_MAKER( sub_8717( l_U1500._fU1604[I] ), l_U3066 );
                            SET_COMBAT_DECISION_MAKER( sub_8717( l_U1500._fU1604[I] ), l_U3067 );
                            WARP_CHAR_INTO_CAR_AS_PASSENGER( sub_8717( l_U1500._fU1604[I] ), sub_9181( l_U1500._fU1600 ), I - 1 );
                        }
                    }
                    l_U3536++;
                }
            }
        }
        if (l_U3536 == 5)
        {
            sub_24636( ref l_U3213 );
            l_U3535 = 2;
        }
        break;
        case 2:
        l_U3535 = 3;
        return 1;
        break;
        case 3:
        return 1;
        break;
    }
    return 0;
}

void sub_40822()
{
    int I;

    for ( I = 0; I < l_U1500._fU1648; I++ )
    {
        if (sub_8692( l_U1500._fU1648[I] ))
        {
            if (REQUEST_CONTROL_OF_NETWORK_ID( l_U1500._fU1648[I] ))
            {
                SET_CHAR_INVINCIBLE( sub_8717( l_U1500._fU1648[I] ), 1 );
            }
        }
    }
    for ( I = 0; I < l_U1500._fU1604; I++ )
    {
        if (sub_8692( l_U1500._fU1604[I] ))
        {
            if (REQUEST_CONTROL_OF_NETWORK_ID( l_U1500._fU1604[I] ))
            {
                SET_CHAR_INVINCIBLE( sub_8717( l_U1500._fU1604[I] ), 1 );
            }
        }
    }
    if (sub_8692( l_U1500._fU1732[0] ))
    {
        if (REQUEST_CONTROL_OF_NETWORK_ID( l_U1500._fU1732[0] ))
        {
            SET_CHAR_INVINCIBLE( sub_8717( l_U1500._fU1732[0] ), 1 );
        }
    }
    if (sub_8692( l_U1500._fU1748[0] ))
    {
        if (REQUEST_CONTROL_OF_NETWORK_ID( l_U1500._fU1748[0] ))
        {
            SET_CHAR_INVINCIBLE( sub_8717( l_U1500._fU1748[0] ), 1 );
        }
    }
    if (sub_8692( l_U1500._fU1764[0] ))
    {
        if (REQUEST_CONTROL_OF_NETWORK_ID( l_U1500._fU1764[0] ))
        {
            SET_CHAR_INVINCIBLE( sub_8717( l_U1500._fU1764[0] ), 1 );
        }
    }
    return;
}

int sub_41343()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_12059( I ))
        {
            if (NOT (IS_CHAR_IN_AREA_3D( sub_465( I ), -1400.58500000, 1464.29400000, 24.99439000, -1411.33300000, 1475.78300000, 29.39546000, 0 )))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_41647()
{
    int I;

    for ( I = 0; I < l_U1500._fU1208; I++ )
    {
        if (sub_8692( l_U1500._fU1208[I] ))
        {
            sub_12725( sub_8717( l_U1500._fU1208[I] ) );
            l_U1500._fU1208[I] = nil;
        }
    }
    for ( I = 0; I < l_U1500._fU1292; I++ )
    {
        if (sub_8692( l_U1500._fU1292[I] ))
        {
            sub_12725( sub_8717( l_U1500._fU1292[I] ) );
            l_U1500._fU1292[I] = nil;
        }
    }
    for ( I = 0; I < l_U1500._fU1572; I++ )
    {
        if (sub_8692( l_U1500._fU1572[I] ))
        {
            sub_12725( sub_8717( l_U1500._fU1572[I] ) );
            l_U1500._fU1572[I] = nil;
        }
    }
    for ( I = 0; I < l_U1500._fU1696; I++ )
    {
        if (sub_8692( l_U1500._fU1696[I] ))
        {
            sub_12725( sub_8717( l_U1500._fU1696[I] ) );
            l_U1500._fU1696[I] = nil;
        }
    }
    for ( I = 0; I < l_U1500._fU1712; I++ )
    {
        if (sub_8692( l_U1500._fU1712[I] ))
        {
            sub_12725( sub_8717( l_U1500._fU1712[I] ) );
            l_U1500._fU1712[I] = nil;
        }
    }
    for ( I = 0; I < l_U1500._fU1524; I++ )
    {
        if (sub_35989( l_U1500._fU1524[I] ))
        {
            sub_15079( sub_9181( l_U1500._fU1524[I] ) );
            l_U1500._fU1524[I] = nil;
        }
    }
    for ( I = 0; I < l_U1500._fU1648; I++ )
    {
        if (sub_8692( l_U1500._fU1648[I] ))
        {
            sub_12725( sub_8717( l_U1500._fU1648[I] ) );
            l_U1500._fU1648[I] = nil;
        }
    }
    for ( I = 0; I < l_U1500._fU1604; I++ )
    {
        if (sub_8692( l_U1500._fU1604[I] ))
        {
            sub_12725( sub_8717( l_U1500._fU1604[I] ) );
            l_U1500._fU1604[I] = nil;
        }
    }
    for ( I = 0; I < l_U1500._fU1732; I++ )
    {
        if (sub_8692( l_U1500._fU1732[I] ))
        {
            sub_12725( sub_8717( l_U1500._fU1732[I] ) );
            l_U1500._fU1732[I] = nil;
        }
    }
    for ( I = 0; I < l_U1500._fU1748; I++ )
    {
        if (sub_8692( l_U1500._fU1748[I] ))
        {
            sub_12725( sub_8717( l_U1500._fU1748[I] ) );
            l_U1500._fU1748[I] = nil;
        }
    }
    for ( I = 0; I < l_U1500._fU1764; I++ )
    {
        if (sub_8692( l_U1500._fU1764[I] ))
        {
            sub_12725( sub_8717( l_U1500._fU1764[I] ) );
            l_U1500._fU1764[I] = nil;
        }
    }
    for ( I = 0; I < l_U1500._fU1344; I++ )
    {
        if (sub_35989( l_U1500._fU1344[I] ))
        {
            sub_15079( sub_9181( l_U1500._fU1344[I] ) );
            l_U1500._fU1344[I] = nil;
        }
    }
    for ( I = 0; I < l_U1500._fU1344; I++ )
    {
        if (sub_35989( l_U1500._fU1344[I] ))
        {
            sub_15079( sub_9181( l_U1500._fU1344[I] ) );
            l_U1500._fU1344[I] = nil;
        }
    }
    for ( I = 0; I < l_U1500._fU1636; I++ )
    {
        if (sub_35989( l_U1500._fU1636[I] ))
        {
            sub_15079( sub_9181( l_U1500._fU1636[I] ) );
            l_U1500._fU1636[I] = nil;
        }
    }
    if (sub_35989( l_U1500._fU1480 ))
    {
        sub_15079( sub_9181( l_U1500._fU1480 ) );
        l_U1500._fU1480 = nil;
    }
    if (sub_35989( l_U1500._fU1600 ))
    {
        sub_15079( sub_9181( l_U1500._fU1600 ) );
        l_U1500._fU1600 = nil;
    }
    for ( I = 0; I < l_U1500._fU1540; I++ )
    {
        if (sub_35989( l_U1500._fU1540[I] ))
        {
            sub_15079( sub_9181( l_U1500._fU1540[I] ) );
            l_U1500._fU1540[I] = nil;
        }
    }
    for ( I = 0; I < l_U1500._fU1328; I++ )
    {
        if (sub_35989( l_U1500._fU1328[I] ))
        {
            sub_15079( sub_9181( l_U1500._fU1328[I] ) );
            l_U1500._fU1328[I] = nil;
        }
    }
    for ( I = 0; I < l_U1500._fU1828; I++ )
    {
        if (DOES_PICKUP_EXIST( l_U1500._fU1828[I] ))
        {
            REMOVE_PICKUP( l_U1500._fU1828[I] );
            l_U1500._fU1828[I] = nil;
        }
    }
    for ( I = 0; I < l_U1500._fU1780; I++ )
    {
        if (DOES_PICKUP_EXIST( l_U1500._fU1780[I] ))
        {
            REMOVE_PICKUP( l_U1500._fU1780[I] );
            l_U1500._fU1780[I] = nil;
        }
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( -322343873 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 584879743 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1376298265 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 400514754 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1461281345 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1543404628 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 510389335 );
    l_U1500._fU272 = 10;
    return;
}

void sub_43809(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16)
{
    int I;
    int iVar20;
    unknown[16] uVar21;
    unknown uVar38;

    iVar20 = GET_PLAYER_ID();
    array(ref uVar21, 16);
    sub_43876( ref uVar21, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam9, uParam10, uParam11, uParam12, uParam13, uParam14, uParam15, uParam16 );
    sub_44067( ref uVar21[iVar20], g_U18._fU636, g_U18._fU632 );
    if (NOT g_U18._fU1492)
    {
        switch (g_U18._fU632)
        {
            case 0:
            for ( I = 0; I <= (iParam0 - 1); I++ )
            {
                if ((I != iVar20) AND (IS_NETWORK_PLAYER_ACTIVE( I )))
                {
                    if (((sub_44216( ref uVar21[I] )) == iVar20) AND ((sub_44256( ref uVar21[I] )) == 3))
                    {
                        if ((NOT (NETWORK_IS_PLAYER_BLOCKED_BY_ME( I ))) AND (NOT (NETWORK_AM_I_BLOCKED_BY_PLAYER( I ))))
                        {
                            StrCopy( ref g_U18._fU584, GET_PLAYER_NAME( sub_427( I ) ), 32 );
                            sub_2848( ref uVar21[iVar20], I, 1 );
                            break;
                        }
                    }
                }
            }
            break;
            case 1:
            if (g_U18._fU636 == 31)
            {
                sub_2848( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if (IS_NETWORK_PLAYER_ACTIVE( g_U18._fU636 ))
            {
                if (NOT (sub_44449( iVar20, g_U18._fU636, ref uVar38 )))
                {
                    sub_2848( ref uVar21[iVar20], 31, 4 );
                    break;
                }
                switch (sub_44256( ref uVar21[g_U18._fU636] ))
                {
                    case 3:
                    case 9: if ((sub_44216( ref uVar21[g_U18._fU636] )) == iVar20)
                    {
                        break;
                    }
                    default:
                    sub_2848( ref uVar21[iVar20], 31, 4 );
                    break;
                }
            }
            else
            {
                sub_2848( ref uVar21[iVar20], 31, 4 );
            }
            break;
            case 2:
            if (g_U18._fU636 == 31)
            {
                sub_2848( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if (IS_NETWORK_PLAYER_ACTIVE( g_U18._fU636 ))
            {
                if ((sub_44256( ref uVar21[g_U18._fU636] )) == 0)
                {
                    sub_2848( ref uVar21[iVar20], g_U18._fU636, 3 );
                    break;
                }
            }
            sub_2848( ref uVar21[iVar20], 31, 6 );
            break;
            case 3:
            if (g_U18._fU636 == 31)
            {
                sub_2848( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if (IS_NETWORK_PLAYER_ACTIVE( g_U18._fU636 ))
            {
                if (NOT (sub_44449( iVar20, g_U18._fU636, ref uVar38 )))
                {
                    sub_2848( ref uVar21[iVar20], 31, 4 );
                    break;
                }
                switch (sub_44256( ref uVar21[g_U18._fU636] ))
                {
                    case 0: break;
                    case 9:
                    case 1:
                    if ((sub_44216( ref uVar21[g_U18._fU636] )) == iVar20)
                    {
                        if ((sub_44256( ref uVar21[g_U18._fU636] )) == 9)
                        {
                            sub_2848( ref uVar21[iVar20], g_U18._fU636, 9 );
                        }
                        break;
                    }
                    sub_2848( ref uVar21[iVar20], 31, 6 );
                    break;
                    default:
                    sub_2848( ref uVar21[iVar20], 31, 4 );
                    break;
                }
            }
            else
            {
                sub_2848( ref uVar21[iVar20], 31, 6 );
            }
            break;
            case 9:
            if (g_U18._fU636 == 31)
            {
                sub_2848( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if (NOT (sub_44449( iVar20, g_U18._fU636, ref uVar38 )))
            {
                sub_2848( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if ((sub_44216( ref uVar21[g_U18._fU636] )) != iVar20)
            {
                sub_2848( ref uVar21[iVar20], 31, 4 );
            }
            break;
        }
    }
    sub_45264( iVar20, ref uVar21, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam9, uParam10, uParam11, uParam12, uParam13, uParam14, uParam15, uParam16 );
    return;
}

void sub_43876(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16)
{
    (uParam0^)[15] = (uParam16^);
    (uParam0^)[14] = (uParam15^);
    (uParam0^)[13] = (uParam14^);
    (uParam0^)[12] = (uParam13^);
    (uParam0^)[11] = (uParam12^);
    (uParam0^)[10] = (uParam11^);
    (uParam0^)[9] = (uParam10^);
    (uParam0^)[8] = (uParam9^);
    (uParam0^)[7] = (uParam8^);
    (uParam0^)[6] = (uParam7^);
    (uParam0^)[5] = (uParam6^);
    (uParam0^)[4] = (uParam5^);
    (uParam0^)[3] = (uParam4^);
    (uParam0^)[2] = (uParam3^);
    (uParam0^)[1] = (uParam2^);
    (uParam0^)[0] = (uParam1^);
    return;
}

void sub_44067(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_2879( uParam0, uParam1 );
    sub_2913( uParam0, uParam2 );
    return;
}

void sub_44216(unknown uParam0)
{
    return GET_BITS_IN_RANGE( (uParam0^), 0, 15 );
}

void sub_44256(unknown uParam0)
{
    return GET_BITS_IN_RANGE( (uParam0^), 16, 31 );
}

int sub_44449(unknown uParam0, int iParam1, unknown uParam2)
{
    if (iParam1 != 31)
    {
        if (IS_NETWORK_PLAYER_ACTIVE( iParam1 ))
        {
            if (NETWORK_PLAYER_HAS_HEADSET( uParam0 ))
            {
                if (NETWORK_PLAYER_HAS_HEADSET( iParam1 ))
                {
                    return 1;
                }
                else
                {
                    (uParam2^) = 14;
                }
            }
            else
            {
                (uParam2^) = 12;
            }
        }
        else
        {
            (uParam2^) = 4;
        }
    }
    else
    {
        (uParam2^) = 4;
    }
    return 0;
}

void sub_45264(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17)
{
    switch (uParam0)
    {
        case 0:
        (uParam2^) = (uParam1^)[0];
        break;
        case 1:
        (uParam3^) = (uParam1^)[1];
        break;
        case 2:
        (uParam4^) = (uParam1^)[2];
        break;
        case 3:
        (uParam5^) = (uParam1^)[3];
        break;
        case 4:
        (uParam6^) = (uParam1^)[4];
        break;
        case 5:
        (uParam7^) = (uParam1^)[5];
        break;
        case 6:
        (uParam8^) = (uParam1^)[6];
        break;
        case 7:
        (uParam9^) = (uParam1^)[7];
        break;
        case 8:
        (uParam10^) = (uParam1^)[8];
        break;
        case 9:
        (uParam11^) = (uParam1^)[9];
        break;
        case 10:
        (uParam12^) = (uParam1^)[10];
        break;
        case 11:
        (uParam13^) = (uParam1^)[11];
        break;
        case 12:
        (uParam14^) = (uParam1^)[12];
        break;
        case 13:
        (uParam15^) = (uParam1^)[13];
        break;
        case 14:
        (uParam16^) = (uParam1^)[14];
        break;
        case 15:
        (uParam17^) = (uParam1^)[15];
        break;
    }
    return;
}

void sub_45721(int iParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    char[16] cVar14;

    if (NOT NETWORK_END_SESSION_PENDING())
    {
        GET_NETWORK_TIMER( ref iVar3 );
    }
    iVar4 = iVar3 - iParam0;
    iVar5 = iVar4 / 10;
    iVar6 = iVar4 / 1000;
    iVar7 = iVar6 / 60;
    iVar5 -= iVar6 * 100;
    iVar6 -= iVar7 * 60;
    iVar8 = iVar5 / 10;
    iVar9 = iVar5 mod 10;
    iVar10 = iVar6 / 10;
    iVar11 = iVar6 mod 10;
    iVar12 = iVar7 / 10;
    iVar13 = iVar7 mod 10;
    string(ref cVar14, iVar12, 16);
    ConcatString(ref cVar14, iVar13, 16);
    ConcatString(ref cVar14, ":", 16);
    ConcatString(ref cVar14, iVar10, 16);
    ConcatString(ref cVar14, iVar11, 16);
    ConcatString(ref cVar14, ":", 16);
    ConcatString(ref cVar14, iVar8, 16);
    ConcatString(ref cVar14, iVar9, 16);
    if (NOT NETWORK_END_SESSION_PENDING())
    {
        SET_MULTIPLAYER_HUD_TIME( ref cVar14 );
    }
    return;
}

void sub_45952()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1968[I]._fU152)
            {
                sub_46010( I, 1 );
            }
        }
    }
    return;
}

void sub_46010(unknown uParam0, unknown uParam1)
{
    l_U1065[uParam0] = uParam1;
    return;
}

void sub_46057()
{
    if (sub_46066())
    {
        if (sub_46227())
        {
            switch (sub_46658())
            {
                case 0:
                SAY_AMBIENT_SPEECH( sub_2736(), "GANG_CHASE", 1, 0, 0 );
                break;
                case 1:
                SAY_AMBIENT_SPEECH( sub_2736(), "GENERIC_FUCK_OFF", 1, 0, 0 );
                break;
                case 2:
                SAY_AMBIENT_SPEECH( sub_2736(), "GENERIC_HI", 1, 0, 0 );
                break;
                case 3:
                SAY_AMBIENT_SPEECH( sub_2736(), "GANG_WATCH_THIS_GUY_SOLO", 1, 0, 0 );
                break;
                case 4:
                SAY_AMBIENT_SPEECH( sub_2736(), "JEERING", 1, 0, 0 );
                break;
                case 5:
                SAY_AMBIENT_SPEECH( sub_2736(), "ABUSE_DRIVER", 1, 0, 0 );
                break;
                case 6:
                SAY_AMBIENT_SPEECH( sub_2736(), "TARGET_NOGENDER", 1, 0, 0 );
                break;
                case 7:
                SAY_AMBIENT_SPEECH( sub_2736(), "FIGHT", 1, 0, 0 );
                break;
                case 8:
                SAY_AMBIENT_SPEECH( sub_2736(), "GANG_FIGHT_CHEER", 1, 0, 0 );
                break;
            }
        }
    }
    return;
}

int sub_46066()
{
    int iVar2;
    unknown uVar3;
    int iVar4;

    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (IS_CHAR_IN_ANY_HELI( sub_2736() ))
        {
            return 0;
        }
        if (IS_CHAR_IN_ANY_CAR( sub_2736() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2736(), ref uVar3 );
            GET_DRIVER_OF_CAR( uVar3, ref iVar4 );
            if (iVar4 == sub_2736())
            {
                GET_CURRENT_CHAR_WEAPON( sub_2736(), ref iVar2 );
                if (iVar2 == 0)
                {
                    return 1;
                }
            }
            else
            {
                return 1;
            }
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int sub_46227()
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (sub_46257( 1, 1 ))
        {
            if (NOT (IS_CHAR_IN_AIR( sub_2736() )))
            {
                if (NOT l_U1438)
                {
                    if (IS_CONTROL_JUST_PRESSED( 0, 23 ))
                    {
                        if (NOT (IS_AMBIENT_SPEECH_PLAYING( sub_2736() )))
                        {
                            l_U1438 = 1;
                            return 1;
                        }
                    }
                }
                else if (NOT (IS_CONTROL_JUST_PRESSED( 0, 23 )))
                {
                    l_U1438 = 0;
                }
            }
        }
    }
    return 0;
}

int sub_46257(boolean bParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;
    float fVar6;

    if (IS_MINIGAME_IN_PROGRESS())
    {
        return 0;
    }
    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_2736() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2736(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_CAR_UPRIGHT_VALUE( uVar4, ref fVar6 );
                if ((fVar6 < 0.95000000) || (fVar6 > 1.01100000))
                {
                    return 0;
                }
            }
        }
    }
    if (bParam0)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_2736() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2736(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2736()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2736() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2736() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_1079() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_1079() )))
    {
        return 0;
    }
    return 1;
}

int sub_46658()
{
    if (sub_46667())
    {
        return 6;
    }
    else if (sub_46809( 1 ))
    {
        return 7;
    }
    else if (sub_46809( 0 ))
    {
        return 8;
    }
    if (sub_47616())
    {
        return 1;
    }
    if ((sub_47937()) || ((sub_46844()) AND (sub_48044())))
    {
        if (sub_48225() != nil)
        {
            if (IS_CHAR_MALE( sub_48225() ))
            {
                return 3;
            }
            else
            {
                return 4;
            }
        }
        else
        {
            return 3;
        }
    }
    if (sub_48395())
    {
        return 5;
    }
    if (sub_48661( 10.00000000 ))
    {
        return 2;
    }
    return 2;
}

int sub_46667()
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (IS_CHAR_SHOOTING( sub_2736() ))
        {
            return 1;
        }
    }
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if ((IS_CHAR_ARMED( sub_2736(), 2 )) || (IS_CHAR_ARMED( sub_2736(), 4 )))
        {
            if (IS_BUTTON_PRESSED( 0, 7 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_46809(boolean bParam0)
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (bParam0)
        {
            if (sub_46844())
            {
                if (IS_NETWORK_PLAYER_ACTIVE( l_U1437 ))
                {
                    if (NOT (IS_CHAR_DEAD( sub_465( l_U1437 ) )))
                    {
                        if (IS_CHAR_VISIBLE( sub_465( l_U1437 ) ))
                        {
                            if (sub_47281( sub_2736(), sub_465( l_U1437 ), 10.00000000 ))
                            {
                                if (IS_CHAR_IN_MELEE_COMBAT( sub_2736() ))
                                {
                                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( sub_465( l_U1437 ), sub_2736(), 0 ))
                                    {
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        else if (IS_NETWORK_PLAYER_ACTIVE( l_U1437 ))
        {
            if (NOT (IS_CHAR_DEAD( sub_465( l_U1437 ) )))
            {
                if (IS_CHAR_VISIBLE( sub_465( l_U1437 ) ))
                {
                    if (sub_47281( sub_2736(), sub_465( l_U1437 ), 10.00000000 ))
                    {
                        if (IS_CHAR_IN_MELEE_COMBAT( sub_465( l_U1437 ) ))
                        {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_46844()
{
    float fVar2;
    int I;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    fVar2 = 10000.00000000;
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        for ( I = 0; I <= 15; I++ )
        {
            if (IS_NETWORK_PLAYER_ACTIVE( I ))
            {
                if (I != GET_PLAYER_ID())
                {
                    if ((NOT (IS_CHAR_DEAD( sub_2736() ))) AND (NOT (IS_CHAR_DEAD( sub_465( I ) ))))
                    {
                        if (IS_CHAR_VISIBLE( sub_465( I ) ))
                        {
                            GET_CHAR_COORDINATES( sub_465( GET_PLAYER_ID() ), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                            GET_CHAR_COORDINATES( sub_465( I ), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                            if ((VDIST( uVar4, uVar7 )) < 10000.00000000)
                            {
                                fVar2 = VDIST( uVar4, uVar7 );
                                l_U1437 = I;
                            }
                        }
                    }
                }
            }
        }
    }
    if (IS_NETWORK_PLAYER_ACTIVE( l_U1437 ))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (((GET_PLAYER_TEAM( sub_427( l_U1437 ) )) != (GET_PLAYER_TEAM( sub_1079() ))) || ((GET_PLAYER_TEAM( sub_427( l_U1437 ) )) == -1))
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
    return 0;
}

int sub_47281(unknown uParam0, unknown uParam1, float fParam2)
{
    float fVar5;
    vector vVar6;
    vector vVar9;

    fParam2 *= fParam2;
    GET_CHAR_COORDINATES( uParam0, ref vVar6.x, ref vVar6.y, ref vVar6.z );
    GET_CHAR_COORDINATES( uParam1, ref vVar9.x, ref vVar9.y, ref vVar9.z );
    vVar6 = {vVar6 - vVar9};
    fVar5 = ((vVar6.x * vVar6.x) + (vVar6.y * vVar6.y)) + (vVar6.z * vVar6.z);
    if (fVar5 < fParam2)
    {
        return 1;
    }
    return 0;
}

int sub_47616()
{
    int I;
    unknown uVar3;

    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( sub_2736(), 57 ))
        {
            CLEAR_CHAR_LAST_WEAPON_DAMAGE( sub_2736() );
            CLEAR_CHAR_LAST_DAMAGE_ENTITY( sub_2736() );
            CLEAR_CHAR_LAST_DAMAGE_BONE( sub_2736() );
            return 1;
        }
        for ( I = 0; I < 16; I++ )
        {
            if (IS_NETWORK_PLAYER_ACTIVE( I ))
            {
                if (I != GET_PLAYER_ID())
                {
                    if (IS_CHAR_IN_ANY_CAR( sub_465( I ) ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_465( I ), ref uVar3 );
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CAR( sub_2736(), uVar3 ))
                        {
                            CLEAR_CHAR_LAST_WEAPON_DAMAGE( sub_2736() );
                            CLEAR_CHAR_LAST_DAMAGE_ENTITY( sub_2736() );
                            CLEAR_CHAR_LAST_DAMAGE_BONE( sub_2736() );
                            return 1;
                        }
                    }
                    else if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( sub_2736(), sub_465( I ), 0 ))
                    {
                        CLEAR_CHAR_LAST_WEAPON_DAMAGE( sub_2736() );
                        CLEAR_CHAR_LAST_DAMAGE_ENTITY( sub_2736() );
                        CLEAR_CHAR_LAST_DAMAGE_BONE( sub_2736() );
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_47937()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2736(), 0.00000000, 5.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        if (ARE_ENEMY_PEDS_IN_AREA( sub_2736(), uVar2, 10.00000000 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_48044()
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( l_U1437 ))
        {
            if (NOT (IS_CHAR_DEAD( sub_465( l_U1437 ) )))
            {
                if (IS_CHAR_VISIBLE( sub_465( l_U1437 ) ))
                {
                    if (sub_47281( sub_2736(), sub_465( l_U1437 ), 10.00000000 ))
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( sub_465( l_U1437 ) )))
                        {
                            if (NOT (IS_CHAR_IN_MELEE_COMBAT( sub_2736() )))
                            {
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void sub_48225()
{
    if (IS_NETWORK_PLAYER_ACTIVE( l_U1437 ))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (((GET_PLAYER_TEAM( sub_427( l_U1437 ) )) != (GET_PLAYER_TEAM( sub_1079() ))) || ((GET_PLAYER_TEAM( sub_427( l_U1437 ) )) == -1))
            {
                return sub_465( l_U1437 );
            }
        }
    }
    return nil;
}

int sub_48395()
{
    float fVar2;

    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (sub_46844())
        {
            if (sub_48433())
            {
                if (IS_NETWORK_PLAYER_ACTIVE( l_U1437 ))
                {
                    if (NOT (IS_CHAR_DEAD( sub_465( l_U1437 ) )))
                    {
                        if (IS_CHAR_VISIBLE( sub_465( l_U1437 ) ))
                        {
                            if (sub_47281( sub_2736(), sub_465( l_U1437 ), 10.00000000 ))
                            {
                                if ((IS_CHAR_IN_ANY_CAR( sub_2736() )) AND (IS_CHAR_IN_ANY_CAR( sub_465( l_U1437 ) )))
                                {
                                    GET_CHAR_SPEED( sub_2736(), ref fVar2 );
                                    if (fVar2 > 20.00000000)
                                    {
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_48433()
{
    int iVar2;

    iVar2 = sub_6720();
    if ((iVar2 == 6) || (iVar2 == 7))
    {
        return 1;
    }
    return 0;
}

int sub_48661(unknown uParam0)
{
    int I;

    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        for ( I = 0; I < 16; I++ )
        {
            if (IS_NETWORK_PLAYER_ACTIVE( I ))
            {
                if (I != GET_PLAYER_ID())
                {
                    if (NOT (IS_CHAR_DEAD( sub_465( I ) )))
                    {
                        if (IS_CHAR_VISIBLE( sub_465( I ) ))
                        {
                            if (sub_47281( sub_2736(), sub_465( I ), uParam0 ))
                            {
                                if (NOT (IS_CHAR_IN_ANY_CAR( sub_465( I ) )))
                                {
                                    if ((NOT (IS_CHAR_IN_MELEE_COMBAT( sub_2736() ))) AND (NOT (IS_CHAR_IN_MELEE_COMBAT( sub_465( I ) ))))
                                    {
                                        if (((GET_PLAYER_TEAM( sub_427( I ) )) != (GET_PLAYER_TEAM( sub_1079() ))) || ((GET_PLAYER_TEAM( sub_427( I ) )) == -1))
                                        {
                                            return 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void sub_49347()
{
    if (l_U3206)
    {
        SET_RADAR_ZOOM( l_U3234 );
    }
    return;
}

void sub_49430()
{
    if (l_U1968[GET_PLAYER_ID()]._fU28 == 0)
    {
        l_U1968[GET_PLAYER_ID()]._fU28 = 2;
    }
    if ((l_U1968[GET_PLAYER_ID()]._fU28 == 0) || (l_U1968[GET_PLAYER_ID()]._fU28 == 2))
    {
        switch (l_U3597)
        {
            case 0:
            l_U3181 = 1;
            if (IS_SCREEN_FADED_OUT())
            {
                if (l_U1500._fU712)
                {
                    l_U1968[GET_PLAYER_ID()]._fU144 = 1;
                    CLEAR_PRINTS();
                    sub_49625();
                    sub_50959();
                    l_U3232 = l_U3208 + 3500;
                    l_U1968[GET_PLAYER_ID()]._fU8 = -5;
                    if (NETWORK_IS_SESSION_STARTED())
                    {
                        l_U1968[GET_PLAYER_ID()]._fU0 = 1;
                        l_U3597 = 1;
                    }
                    else
                    {
                        l_U1968[GET_PLAYER_ID()]._fU0 = 1;
                        l_U3597 = 2;
                    }
                }
                else if (IS_CHAR_DEAD( sub_2736() ))
                {
                    N_312012851( sub_2736(), ref l_U3475._fU0, ref l_U3475._fU4, ref l_U3475._fU8 );
                    GET_CLOSEST_CAR_NODE( l_U3475._fU0, l_U3475._fU4, l_U3475._fU8, ref l_U3478._fU0, ref l_U3478._fU4, ref l_U3478._fU8 );
                    REQUEST_COLLISION_AT_POSN( l_U3478._fU0, l_U3478._fU4, l_U3478._fU8 );
                    RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), l_U3478, 0.00000000 );
                }
            }
            else if (NOT IS_SCREEN_FADING_OUT())
            {
                sub_52185( 500 );
            }
            break;
            case 1:
            sub_50959();
            sub_52268( 0 );
            if (l_U3208 > l_U3232)
            {
                if (IS_SCREEN_FADED_IN())
                {
                    if (sub_79941( 2147483647, 0 ))
                    {
                        if (NOT l_U1968[GET_PLAYER_ID()]._fU148)
                        {
                            l_U1968[GET_PLAYER_ID()]._fU148 = 1;
                        }
                        sub_416( GET_PLAYER_ID(), 0 );
                        l_U3209 = 14;
                        l_U3597 = 3;
                    }
                }
                else if (NOT IS_SCREEN_FADING_IN())
                {
                    sub_58230( 500 );
                }
            }
            break;
            case 2:
            sub_52268( 0 );
            if (l_U3208 > l_U3232)
            {
                if (IS_SCREEN_FADED_IN())
                {
                    sub_416( GET_PLAYER_ID(), 0 );
                    l_U1968[GET_PLAYER_ID()]._fU120 = 1;
                    l_U3209 = 14;
                    l_U3597 = 3;
                }
                else if (NOT IS_SCREEN_FADING_IN())
                {
                    sub_58230( 500 );
                }
            }
            break;
        }
    }
    return;
}

void sub_49625()
{
    sub_49634();
    sub_416( GET_PLAYER_ID(), 0 );
    FREEZE_CHAR_POSITION( sub_2736(), 1 );
    SET_CHAR_COLLISION( sub_2736(), 0 );
    DISPLAY_HUD( 0 );
    sub_49949( ref l_U3065 );
    return;
}

void sub_49634()
{
    int I;

    for ( I = 0; I < 8; I++ )
    {
        sub_49665( ref l_U104[I] );
    }
    for ( I = 0; I < 16; I++ )
    {
        l_U579[I] = 0;
    }
    l_U577 = 0;
    l_U578 = 0;
    return;
}

void sub_49665(int iParam0)
{
    iParam0->_fU4 = 0;
    iParam0->_fU0 = 0;
    iParam0->_fU8 = 0;
    StrCopy( ref iParam0->_fU12, "\n", 64 );
    StrCopy( ref ref iParam0->_fU76->_fU0, "\n", 64 );
    ref iParam0->_fU76->_fU64 = 0;
    ref iParam0->_fU76->_fU68 = 0;
    ref iParam0->_fU76->_fU72 = 0;
    ref iParam0->_fU76->_fU76 = 0;
    StrCopy( ref ref iParam0->_fU156->_fU0, "\n", 64 );
    ref iParam0->_fU156->_fU64 = 0;
    ref iParam0->_fU156->_fU68 = 0;
    ref iParam0->_fU156->_fU72 = 0;
    ref iParam0->_fU156->_fU76 = 0;
    return;
}

void sub_49949(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown Result;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    float fVar14;
    float fVar15;
    int iVar16;

    GET_GAME_CAM( uParam0 );
    GET_CAM_POS( (uParam0^), ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    GET_CAM_ROT( (uParam0^), ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
    GET_CAM_FOV( (uParam0^), ref fVar14 );
    PRINTSTRING( "FOV = " );
    PRINTFLOAT( fVar14 );
    PRINTNL();
    GET_INTERIOR_FROM_CHAR( sub_2736(), ref iVar16 );
    if (iVar16 == nil)
    {
        if ((GET_CLOSEST_CAR_NODE_WITH_HEADING( Result._fU0, Result._fU4, Result._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8, ref fVar15 )) AND (sub_50123( Result, uVar8, 60.00000000 )))
        {
            Result = {uVar8};
            uVar11._fU8 = fVar15;
            Result._fU8 += 2.00000000;
            uVar11._fU0 = sub_50250( 0.00000000, 15.00000000 );
            uVar11._fU4 = 0.00000000;
            uVar11._fU8 += sub_50250( -20.00000000, 20.00000000 );
            fVar14 = 65.00000000;
        }
        else if ((GET_CLOSEST_NETWORK_RESTART_NODE( Result, ref uVar8, ref fVar15 )) AND (sub_50123( Result, uVar8, 60.00000000 )))
        {
            Result = {uVar8};
            uVar11._fU8 = fVar15;
            Result._fU8 += 2.00000000;
            uVar11._fU0 = sub_50250( 0.00000000, 15.00000000 );
            uVar11._fU4 = 0.00000000;
            uVar11._fU8 += sub_50250( -20.00000000, 20.00000000 );
            fVar14 = 65.00000000;
        }
        else if (GET_CLOSEST_CAR_NODE_WITH_HEADING( Result._fU0, Result._fU4, Result._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8, ref fVar15 ))
        {
            GET_GROUND_Z_FOR_3D_COORD( Result._fU0, Result._fU4, Result._fU8, ref fVar15 );
            if (fVar15 < 1.00000000)
            {
                bVar4 = true;
            }
        };;;
    }
    else
    {
        GET_KEY_FOR_CHAR_IN_ROOM( sub_2736(), ref iVar3 );
        if (iVar3 == 0)
        {
            CLEAR_ROOM_FOR_VIEWPORT( sub_50576() );
        }
        else
        {
            SET_ROOM_FOR_VIEWPORT_BY_KEY( sub_50576(), iVar3 );
        }
    }
    (uParam0^) = nil;
    CREATE_CAM( 14, uParam0 );
    if (bVar4)
    {
        SET_CAM_POS( (uParam0^), Result._fU0, Result._fU4, 65.00000000 );
        POINT_CAM_AT_COORD( (uParam0^), uVar8._fU0, uVar8._fU4, uVar8._fU8 );
        CAM_PROCESS( (uParam0^) );
        GET_CAM_ROT( (uParam0^), ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
        UNPOINT_CAM( (uParam0^) );
        uVar11._fU0 = 0.00000000;
    }
    else
    {
        SET_CAM_POS( (uParam0^), Result._fU0, Result._fU4, Result._fU8 );
    }
    SET_CAM_ROT( (uParam0^), uVar11._fU0, uVar11._fU4, sub_50796( uVar11._fU8 ) );
    SET_CAM_FOV( (uParam0^), fVar14 );
    SET_CAM_FAR_CLIP( (uParam0^), 2000.00000000 );
    SET_CAM_ACTIVE( (uParam0^), 1 );
    SET_CAM_PROPAGATE( (uParam0^), 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    return Result;
}

int sub_50123(vector vParam0, vector vParam3, float fParam6)
{
    float fVar9;

    fParam6 *= fParam6;
    vParam3 = {vParam3 - vParam0};
    fVar9 = ((vParam3.x * vParam3.x) + (vParam3.y * vParam3.y)) + (vParam3.z * vParam3.z);
    if (fVar9 <= fParam6)
    {
        return 1;
    }
    return 0;
}

void sub_50250(unknown uParam0, unknown Result)
{
    GENERATE_RANDOM_FLOAT_IN_RANGE( uParam0, Result, ref Result );
    return Result;
}

void sub_50576()
{
    unknown Result;

    GET_GAME_VIEWPORT_ID( ref Result );
    return Result;
}

void sub_50796(float Result)
{
    while (Result >= 360.00000000)
    {
        Result -= 360.00000000;
    }
    while (Result < 0.00000000)
    {
        Result += 360.00000000;
    }
    return Result;
}

void sub_50959()
{
    int I;

    if ((((l_U1500._fU516 > 0) || (l_U1500._fU720)) || (l_U3205)) || (l_U1968[GET_PLAYER_ID()]._fU28 == 2))
    {
        for ( I = 0; I < 16; I++ )
        {
            if (sub_12059( I ))
            {
                l_U3499[I] = l_U1500._fU516;
            }
        }
        sub_51083( 3, ref l_U1500._fU68 );
        sub_51083( 4, ref l_U1500._fU136 );
        sub_51083( 6, ref l_U1500._fU204 );
        sub_51083( 20, ref l_U1500._fU0 );
        sub_51083( 22, ref l_U3499 );
    }
    return;
}

void sub_51083(int iParam0, unknown uParam1)
{
    int I;
    int J;

    if (((iParam0 == 20) AND (NOT sub_48433())) || (iParam0 == -3))
    {
        sub_51115( uParam1 );
        return;
    }
    else
    {
        for ( J = 0; J < 7; J++ )
        {
            if (l_U662[J]._fU92 == iParam0)
            {
                for ( I = 0; I < (uParam1^); I++ )
                {
                    l_U662[J]._fU24[I] = (uParam1^)[I];
                }
                return;
            }
        }
    }
    return;
}

void sub_51115(unknown uParam0)
{
    int I;

    if (NOT l_U1082)
    {
        sub_51135();
        l_U1082 = 1;
    }
    for ( I = 0; I < 16; I++ )
    {
        if (l_U662[sub_7288()]._fU24[I] != (uParam0^)[I])
        {
            l_U662[sub_7288()]._fU24[I] = (uParam0^)[I];
            sub_51340( I );
        }
    }
    return sub_7667();
}

void sub_51135()
{
    int I;
    int J;

    for ( J = 0; J < 7; J++ )
    {
        for ( I = 0; I < 16; I++ )
        {
            l_U662[J]._fU24[I] = 0;
        }
    }
    for ( I = 0; I < 16; I++ )
    {
        l_U1004[I] = I;
        l_U662[0]._fU24[I] = I;
    }
    return;
}

void sub_51340(unknown uParam0)
{
    unknown uVar3;

    if (l_U1004[uParam0] > 0)
    {
        uVar3 = l_U662[0]._fU24[l_U1004[uParam0] - 1];
        if (l_U662[sub_7288()]._fU24[uParam0] > l_U662[sub_7288()]._fU24[uVar3])
        {
            l_U662[0]._fU24[l_U1004[uParam0] - 1] = uParam0;
            l_U662[0]._fU24[l_U1004[uParam0]] = uVar3;
            l_U1004[uVar3]++;
            l_U1004[uParam0]--;
            sub_51340( uParam0 );
            return;
        }
    }
    if (l_U1004[uParam0] < 15)
    {
        uVar3 = l_U662[0]._fU24[l_U1004[uParam0] + 1];
        if (l_U662[sub_7288()]._fU24[uParam0] < l_U662[sub_7288()]._fU24[uVar3])
        {
            l_U662[0]._fU24[l_U1004[uParam0] + 1] = uParam0;
            l_U662[0]._fU24[l_U1004[uParam0]] = uVar3;
            l_U1004[uVar3]--;
            l_U1004[uParam0]++;
            sub_51340( uParam0 );
            return;
        }
    }
    return;
}

void sub_52185(unknown uParam0)
{
    SET_SCREEN_FADE( sub_52194(), 0, 0, 0, 0, 0, 0, 255, uParam0, 1.00000000, 1.00000000 );
    return;
}

void sub_52194()
{
    unknown Result;

    GET_SCREEN_VIEWPORT_ID( ref Result );
    return Result;
}

void sub_52268(unknown uParam0)
{
    int I;
    unknown[16] uVar4;

    array(ref uVar4, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar4[I] = l_U1968[I]._fU8;
    }
    if (l_U1968[GET_PLAYER_ID()]._fU152)
    {
        return sub_52376( 8, ref uVar4, ref l_U1500._fU348, l_U1500._fU344, uParam0, 1, 0, 2147483647 );
        break;
    }
    return sub_52376( 8, ref uVar4, ref l_U1500._fU348, l_U1500._fU344, uParam0, 0, 0, 2147483647 );
}

int sub_52376(int iParam0, unknown uParam1, unknown uParam2, int iParam3, boolean bParam4, int iParam5, boolean bParam6, unknown uParam7)
{
    int I;
    int iVar11;
    int J;
    int iVar13;
    int iVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    int iVar19;
    boolean bVar20;
    boolean bVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    float fVar28;
    float fVar29;
    char[32] cVar30;
    boolean bVar38;
    int[7] iVar39;

    if (NOT (IS_FONT_LOADED( 6 )))
    {
        LOAD_TEXT_FONT( 6 );
    }
    sub_2978();
    if (IS_PAUSE_MENU_ACTIVE())
    {
        DEACTIVATE_FRONTEND();
    }
    DISABLE_PAUSE_MENU( 1 );
    HIDE_HUD_AND_RADAR_THIS_FRAME();
    CLEAR_PRINTS();
    if (l_U965)
    {
        SET_TEXT_DRAW_BEFORE_FADE( 0 );
        SET_SPRITES_DRAW_BEFORE_FADE( 0 );
        DONT_DISPLAY_LOADING_ON_FADE_THIS_FRAME();
    }
    else
    {
        SET_TEXT_DRAW_BEFORE_FADE( 1 );
        SET_SPRITES_DRAW_BEFORE_FADE( 1 );
    }
    if (bParam4)
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (sub_18655())
            {
                if ((GET_PLAYER_TEAM( sub_1079() )) == -1)
                {
                    SET_PLAYER_TEAM( sub_1079(), sub_52568() );
                }
            }
            else if (sub_18610())
            {
                if ((GET_PLAYER_TEAM( sub_1079() )) == -1)
                {
                    SET_PLAYER_TEAM( sub_1079(), sub_53050( 2 ) );
                }
                else if (sub_18752() < 2)
                {
                    if ((sub_53413( GET_PLAYER_TEAM( sub_1079() ) )) > 1)
                    {
                        if (sub_53511( GET_PLAYER_ID() ))
                        {
                            SET_PLAYER_TEAM( sub_1079(), sub_53050( 2 ) );
                        }
                    }
                }
            }
            else if (sub_10749())
            {
                if ((GET_PLAYER_TEAM( sub_1079() )) != 0)
                {
                    SET_PLAYER_TEAM( sub_1079(), 0 );
                }
            }
            else if ((GET_PLAYER_TEAM( sub_1079() )) != -1)
            {
                SET_PLAYER_TEAM( sub_1079(), -1 );
            };;;;
        }
        if (sub_5714())
        {
            sub_53743( uParam1, uParam2 );
            sub_6136();
        }
    }
    bVar38 = false;
    if (iParam3 != 0)
    {
        sub_53929( iParam3, 1 );
        bVar38 = true;
    }
    else if ((uParam2^) != 0)
    {
        if (NOT l_U1366)
        {
            sub_53929( (uParam2^), 0 );
            GET_NETWORK_TIMER( ref iVar19 );
            bVar38 = true;
            if ((uParam2^) < (iVar19 - 10000))
            {
                l_U1366 = 1;
                return 1;
            }
        }
    }
    else
    {
        l_U1281 = 10000;
    }
    if (l_U1299)
    {
        if (l_U1365)
        {
            SET_LOBBY_MUTE_OVERRIDE( 0 );
            l_U1365 = 0;
        }
        if (sub_55000())
        {
            l_U1299 = 0;
        }
        sub_57543();
        return 0;
    }
    if (((sub_48433()) || (sub_10749())) || (sub_6720() == 10))
    {
        if ((bParam4) || (l_U966))
        {
            if (sub_57874())
            {
                sub_57901();
            }
            l_U965 = 0;
        }
        else if (sub_58516())
        {
            if (l_U965)
            {
                l_U1364 = -1;
            }
            else if (l_U1364 == 0)
            {
                GET_NETWORK_TIMER( ref l_U1364 );
            }
            else if (l_U1364 != -1)
            {
                GET_NETWORK_TIMER( ref iVar19 );
                if ((l_U1364 < (iVar19 - 6000)) AND (NOT IS_SCREEN_FADING()))
                {
                    l_U1364 = -1;
                    l_U965 = 1;
                }
            };;;
            if ((sub_6720() == 7) || (sub_6720() == 6))
            {
                sub_59381( 2, l_U965 );
            }
            else
            {
                sub_59381( 1, l_U965 );
            }
            if (l_U965)
            {
                sub_62879( 1 );
                INIT_FRONTEND_HELPER_TEXT();
                DRAW_FRONTEND_HELPER_TEXT( "BACK", "INPUT_F_CANCEL", 0 );
                if (sub_63640())
                {
                    DRAW_FRONTEND_HELPER_TEXT( "CAMERA", "PAD_BACK", 0 );
                    DRAW_FRONTEND_HELPER_TEXT( "SELECT_PLAYER", "PAD_LSTICK_LR", 1 );
                    if (l_U986 < 3)
                    {
                        DRAW_FRONTEND_HELPER_TEXT( "SPEC_RADIO", "PAD_DPAD_LR", 0 );
                        sub_63822();
                    }
                    sub_64137();
                }
                if (sub_57384())
                {
                    l_U965 = 0;
                }
                return 0;
            }
        }
        else
        {
            l_U965 = 0;
        }
    }
    if (IS_HELP_MESSAGE_BEING_DISPLAYED())
    {
        CLEAR_HELP();
    }
    if (l_U963)
    {
        if (l_U1365)
        {
            SET_LOBBY_MUTE_OVERRIDE( 0 );
            l_U1365 = 0;
        }
        if (sub_57384())
        {
            l_U963 = 0;
        }
        else if (sub_57232())
        {
            if (NOT NETWORK_IS_OPERATION_PENDING())
            {
                UNPAUSE_GAME();
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    sub_52185( 0 );
                }
                sub_65145();
            }
        }
        if (l_U963)
        {
            SET_WIDESCREEN_FORMAT( 0 );
            DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
            SET_WIDESCREEN_FORMAT( 1 );
            sub_53965( 0, sub_55382(), sub_57688(), 0, 0, 0, 0, 0, 255 );
            GET_HUD_COLOUR( 49, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
            if (bParam4)
            {
                sub_55436( "WANT_TO_LEAVE", sub_65337( 106 ), sub_65370( 106 ), sub_65337( 107 ), sub_65370( 107 ), uVar15, uVar16, uVar17, 255, 1 );
            }
            else if (((sub_53752()) AND (sub_48433())) || (NOT sub_48433()))
            {
                sub_55436( "WANTTOLEAVEIG", sub_65337( 106 ), sub_65370( 106 ), sub_65337( 107 ), sub_65370( 107 ), uVar15, uVar16, uVar17, 255, 1 );
            }
            else
            {
                sub_55436( "WANTTOLEAVERACE", sub_65337( 106 ), sub_65370( 106 ), sub_65337( 107 ), sub_65370( 107 ), uVar15, uVar16, uVar17, 255, 1 );
            }
            INIT_FRONTEND_HELPER_TEXT();
            DRAW_FRONTEND_HELPER_TEXT( "CANCEL", "INPUT_F_CANCEL", 0 );
            DRAW_FRONTEND_HELPER_TEXT( "CONFIRM", "INPUT_F_ACCEPT", 0 );
            if ((uParam2^) != 0)
            {
                GET_NETWORK_TIMER( ref iVar19 );
                if ((uParam2^) < (iVar19 - 10000))
                {
                    return 1;
                }
            }
            sub_57543();
            return 0;
        }
    }
    if (NOT l_U1365)
    {
        SET_LOBBY_MUTE_OVERRIDE( 1 );
        l_U1365 = 1;
    }
    if (sub_53752())
    {
        if (((sub_65763() == 1) || ((sub_65911() == 1) AND ((iParam0 == 7) || (l_U961)))) || ((sub_7228( GET_PLAYER_ID() )) AND (sub_7667() == 1)))
        {
            sub_62879( 0 );
        }
        else
        {
            sub_62879( 1 );
        }
    }
    else
    {
        sub_62879( 1 );
    }
    sub_57543();
    SET_WIDESCREEN_FORMAT( 1 );
    if ((iParam0 == 7) || (l_U961))
    {
        if (sub_66276())
        {
            bVar20 = true;
        }
        else
        {
            bVar20 = false;
        }
    }
    else if (sub_66585())
    {
        bVar20 = true;
    }
    else
    {
        bVar20 = false;
    }
    fVar27 = 0.34790000;
    if (GET_IS_WIDESCREEN())
    {
        fVar23 = 0.21200000;
        fVar24 = 0.78000000;
        fVar25 = 1.20000000;
    }
    else
    {
        fVar23 = 0.21800000;
        fVar24 = 0.60000000;
        fVar25 = 0.98300000;
    }
    if (iParam5 == 0)
    {
        if ((sub_65763() == 1) || ((sub_7228( GET_PLAYER_ID() )) AND (sub_7667() == 1)))
        {
            sub_53965( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
            GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
            sub_55436( "LAST_PLAYER_IN", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
            if ((sub_53752()) AND (N_604003528()))
            {
                SET_WIDESCREEN_FORMAT( 2 );
                sub_53965( 0, 0.00000000, sub_57688(), 0, 0, 0, 0, 0, 255 );
                GET_HUD_COLOUR( 56, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                if (GET_IS_WIDESCREEN())
                {
                    sub_55436( "NOT_COUNT_RANK", sub_55382() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, uVar15, uVar16, uVar17, 255, 2 );
                }
                else
                {
                    sub_55436( "NOT_COUNT_RANK", sub_55382() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, uVar15, uVar16, uVar17, 255, 2 );
                }
                SET_WIDESCREEN_FORMAT( 1 );
            }
        }
        else if (NOT (sub_7228( GET_PLAYER_ID() )))
        {
            if (iParam0 == 8)
            {
                sub_53965( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                if (bParam6)
                {
                    GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                    sub_55436( "MISSION_PASSED", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                }
                else
                {
                    GET_HUD_COLOUR( 4, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                    sub_55436( "MISSION_FAILED", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                }
            }
            else
            {
                sub_53965( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                if (bVar20)
                {
                    if ((iParam0 == 7) || (l_U961))
                    {
                        if (sub_65911() == 1)
                        {
                            GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                            sub_55436( "LAST_TEAM_IN", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                            if ((sub_53752()) AND (N_604003528()))
                            {
                                SET_WIDESCREEN_FORMAT( 2 );
                                sub_53965( 0, 0.00000000, sub_57688(), 0, 0, 0, 0, 0, 255 );
                                GET_HUD_COLOUR( 56, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                                if (GET_IS_WIDESCREEN())
                                {
                                    sub_55436( "NOT_COUNT_RANK", sub_55382() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, uVar15, uVar16, uVar17, 255, 2 );
                                }
                                else
                                {
                                    sub_55436( "NOT_COUNT_RANK", sub_55382() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, uVar15, uVar16, uVar17, 255, 2 );
                                }
                            }
                            SET_WIDESCREEN_FORMAT( 1 );
                        }
                        else
                        {
                            GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                            sub_55436( "EQUAL", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                        }
                    }
                    else
                    {
                        GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                        sub_55436( "EQUAL", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                    }
                }
                else if ((iParam0 == 7) || (l_U961))
                {
                    if (NOT l_U964)
                    {
                        if (sub_67866( l_U1030[0] ))
                        {
                            GET_TEAM_RGB_COLOUR( GET_PLAYER_TEAM( sub_1079() ), ref uVar15, ref uVar16, ref uVar17 );
                            if ((sub_68001( GET_PLAYER_TEAM( sub_1079() ) )) == 1)
                            {
                                StrCopy( ref cVar30, GET_STRING_FROM_TEXT_FILE( sub_68214( GET_PLAYER_TEAM( sub_1079() ), 1 ) ), 32 );
                                ConcatString(ref cVar30, " ", 32);
                                ConcatString(ref cVar30, GET_STRING_FROM_TEXT_FILE( "JOINTWINNER" ), 32);
                                sub_56603( 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, ref cVar30 );
                            }
                            else if (sub_67866( GET_PLAYER_TEAM( sub_1079() ) ))
                            {
                                StrCopy( ref cVar30, GET_STRING_FROM_TEXT_FILE( sub_68214( GET_PLAYER_TEAM( sub_1079() ), 1 ) ), 32 );
                                ConcatString(ref cVar30, " ", 32);
                                ConcatString(ref cVar30, GET_STRING_FROM_TEXT_FILE( "JOINT" ), 32);
                                ConcatString(ref cVar30, " ", 32);
                                ConcatString(ref cVar30, sub_68001( GET_PLAYER_TEAM( sub_1079() ) ), 32);
                                ConcatString(ref cVar30, sub_64463( sub_68001( GET_PLAYER_TEAM( sub_1079() ) ), 1 ), 32);
                                sub_56603( 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, ref cVar30 );
                            }
                            else
                            {
                                StrCopy( ref cVar30, GET_STRING_FROM_TEXT_FILE( sub_68214( GET_PLAYER_TEAM( sub_1079() ), 1 ) ), 32 );
                                ConcatString(ref cVar30, " ", 32);
                                ConcatString(ref cVar30, sub_68001( GET_PLAYER_TEAM( sub_1079() ) ), 32);
                                ConcatString(ref cVar30, sub_64463( sub_68001( GET_PLAYER_TEAM( sub_1079() ) ), 1 ), 32);
                                ConcatString(ref cVar30, " ", 32);
                                ConcatString(ref cVar30, GET_STRING_FROM_TEXT_FILE( "PLACE" ), 32);
                                sub_56603( 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, ref cVar30 );
                            }
                        }
                        else
                        {
                            GET_TEAM_RGB_COLOUR( l_U1030[0], ref uVar15, ref uVar16, ref uVar17 );
                            sub_69978( "TEAMNAME_WINS", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, sub_68214( l_U1030[0], 0 ) );
                        }
                    }
                }
                else if (sub_7143( GET_PLAYER_ID() ))
                {
                    if ((sub_7097( GET_PLAYER_ID() )) == 1)
                    {
                        GET_HUD_COLOUR( 16, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                        sub_55436( "JOINTWINNER", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                    }
                    else
                    {
                        GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                        StrCopy( ref cVar30, GET_STRING_FROM_TEXT_FILE( "JOINT" ), 32 );
                        ConcatString(ref cVar30, " ", 32);
                        ConcatString(ref cVar30, sub_7097( GET_PLAYER_ID() ), 32);
                        ConcatString(ref cVar30, sub_64463( sub_7097( GET_PLAYER_ID() ), 1 ), 32);
                        sub_56603( 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, ref cVar30 );
                    }
                }
                else if ((sub_7097( GET_PLAYER_ID() )) == 1)
                {
                    GET_HUD_COLOUR( 16, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                    sub_55436( "WINNERS", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                }
                else
                {
                    GET_HUD_COLOUR( 4, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                    string(ref cVar30, sub_7097( GET_PLAYER_ID() ), 32);
                    ConcatString(ref cVar30, sub_64463( sub_7097( GET_PLAYER_ID() ), 1 ), 32);
                    ConcatString(ref cVar30, " ", 32);
                    ConcatString(ref cVar30, GET_STRING_FROM_TEXT_FILE( "PLACE" ), 32);
                    sub_56603( 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, ref cVar30 );
                };;;;
            }
        }
    }
    else if (NOT sub_10749())
    {
        sub_53965( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
        GET_HUD_COLOUR( 4, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
        sub_54262( "ROUND_NUM", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, iParam5 );
    }
    for ( I = 0; I < 16; I++ )
    {
        if (sub_7176( l_U662[0]._fU24[I] ))
        {
            iVar13++;
        }
    }
    if ((iParam0 == 7) || (l_U961))
    {
        for ( J = 0; J < 8; J++ )
        {
            if ((sub_66302( l_U1030[J] )) > 0)
            {
                iVar13++;
            }
        }
    }
    if (iVar13 > 10)
    {
        sub_55728( ref l_U1085, (iVar13 - 10) + 1, 0 );
        bVar21 = true;
        iVar14 = iVar13;
        iVar13 = 10;
    }
    fVar28 = 0.00500000 * 2;
    for ( iVar11 = 0; iVar11 < 7; iVar11++ )
    {
        if (l_U662[iVar11]._fU16 != 0)
        {
            fVar28 += sub_70831( l_U662[iVar11]._fU16 );
        }
    }
    fVar29 = ((TO_FLOAT( iVar13 + 2 )) * 0.04000000) + (0.00500000 * 2.00000000);
    fVar26 = 0.50000000 - (fVar28 * 0.50000000);
    DRAW_RECT( fVar26 + (fVar28 * 0.50000000), ((fVar27 - 0.00500000) - 0.04000000) + (fVar29 * 0.50000000), fVar28, fVar29, 0, 0, 0, 245 );
    fVar26 = (0.50000000 + 0.00500000) - (fVar28 * 0.50000000);
    if (GET_IS_WIDESCREEN())
    {
        fVar22 = 0.03860000;
    }
    else
    {
        fVar22 = 0.03900000;
    }
    for ( iVar11 = 0; iVar11 < 7; iVar11++ )
    {
        if (l_U662[iVar11]._fU16 != 0)
        {
            if (l_U662[iVar11]._fU16 == 1)
            {
                if (GET_IS_WIDESCREEN())
                {
                    fVar24 = 0.01050000;
                }
                else
                {
                    fVar24 = 0.01100000;
                }
                DRAW_SPRITE( l_U599[l_U662[iVar11]._fU20], fVar26 + fVar24, fVar27 + -0.02370000, (fVar22 / 4) * 3, fVar22, 0.00000000, 255, 255, 255, 255 );
                fVar26 += sub_70831( 1 );
            }
            else
            {
                fVar26 += (sub_70831( l_U662[iVar11]._fU16 )) * 0.50000000;
                DRAW_SPRITE( l_U599[l_U662[iVar11]._fU20], fVar26, fVar27 + -0.02370000, (fVar22 / 4) * 3, fVar22, 0.00000000, 255, 255, 255, 255 );
                fVar26 += (sub_70831( l_U662[iVar11]._fU16 )) * 0.50000000;
            }
        }
    }
    array(ref iVar39, 7);
    for ( I = 0; I < 7; I++ )
    {
        iVar39[I] = I;
    }
    fVar26 = 0.50000000 - (fVar28 * 0.50000000);
    if (GET_IS_WIDESCREEN())
    {
        if ((iParam0 == 7) || (l_U961))
        {
            sub_71729( ref iVar39, fVar26 + 0.00500000, fVar27 + 0.00400000, 0.36000000, 0.52500000, 0.04000000, 0.36000000, 0.52500000, 0.04000000, iParam0, 10, l_U1085, -1 );
        }
        else
        {
            sub_77893( ref iVar39, fVar26 + 0.00500000, fVar27 + 0.00400000, 0.36000000, 0.52500000, 0.04000000, iParam0, 10, l_U1085, -1 );
        }
    }
    else if ((iParam0 == 7) || (l_U961))
    {
        sub_71729( ref iVar39, fVar26 + 0.00500000, fVar27 + 0.00600000, 0.31300000, 0.47000000, 0.04000000, 0.31300000, 0.47000000, 0.04000000, iParam0, 10, l_U1085, -1 );
    }
    else
    {
        sub_77893( ref iVar39, fVar26 + 0.00500000, fVar27 + 0.00600000, 0.31300000, 0.47000000, 0.04000000, iParam0, 10, l_U1085, -1 );
    }
    if ((bParam4) AND (iParam5 == 0))
    {
        if ((sub_53752()) || (NOT N_604003528()))
        {
            if (NOT bVar38)
            {
                SET_WIDESCREEN_FORMAT( 2 );
                GET_FRONTEND_DESIGN_VALUE( 23, ref fVar24, ref fVar25 );
                GET_FRONTEND_DESIGN_VALUE( 24, ref fVar22, ref fVar23 );
                sub_53965( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                if ((l_U1257[GET_PLAYER_ID()] > -1) AND (l_U1257[GET_PLAYER_ID()] < (GET_PLAYER_RANK_LEVEL_DURING_MP( GET_PLAYER_ID() ))))
                {
                    sub_55436( "RANK_INCREASED", fVar24, fVar25, fVar22, fVar23, 255, 255, 255, 255, 2 );
                    sub_53965( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                    sub_55436( "NEWCLOTHESAVAIL", fVar24, fVar25 + 0.04050000, fVar22, fVar23, 255, 255, 255, 255, 2 );
                }
                else if ((GET_PLAYER_RANK_LEVEL_DURING_MP( GET_PLAYER_ID() )) < 10)
                {
                    sub_54262( "CASH_LEVELUP", fVar24, fVar25, fVar22, fVar23, 255, 255, 255, 255, 2, GET_LEFT_PLAYER_CASH_TO_REACH_LEVEL( (GET_PLAYER_RANK_LEVEL_DURING_MP( GET_PLAYER_ID() )) + 1 ) );
                }
                SET_WIDESCREEN_FORMAT( 1 );
            }
        }
    }
    fVar26 = 0.50000000;
    if ((N_604003528()) || (GET_IS_WIDESCREEN()))
    {
        DRAW_RECT( fVar26, fVar27, fVar28, 0.00200000, 255, 255, 255, 255 );
        DRAW_RECT( fVar26, fVar27 + ((TO_FLOAT( iVar13 )) * 0.04000000), fVar28, 0.00200000, 255, 255, 255, 255 );
    }
    else
    {
        DRAW_RECT( fVar26, fVar27, fVar28, 0.00400000, 255, 255, 255, 255 );
        DRAW_RECT( fVar26, fVar27 + ((TO_FLOAT( iVar13 )) * 0.04000000), fVar28, 0.00400000, 255, 255, 255, 255 );
    }
    if (GET_IS_WIDESCREEN())
    {
        fVar22 = 0.00000000;
        fVar24 = 0.02250000;
        fVar25 = 0.02750000;
    }
    else
    {
        fVar22 = 0.00000000;
        fVar24 = 0.02300000;
        fVar25 = 0.02800000;
    }
    if (bVar21)
    {
        if (l_U1085 == 0)
        {
            DRAW_SPRITE( l_U599[1], fVar26 + fVar22, (fVar27 + ((TO_FLOAT( iVar13 )) * 0.04000000)) + 0.02300000, fVar24, fVar25, 180.00000000, 255, 255, 255, 255 );
        }
        else if (l_U1085 == (iVar14 - 10))
        {
            DRAW_SPRITE( l_U599[1], fVar26 + fVar22, (fVar27 + ((TO_FLOAT( iVar13 )) * 0.04000000)) + 0.02300000, fVar24, fVar25, 0.00000000, 255, 255, 255, 255 );
        }
        else
        {
            DRAW_SPRITE( l_U599[2], fVar26 + fVar22, (fVar27 + ((TO_FLOAT( iVar13 )) * 0.04000000)) + 0.02300000, fVar24, fVar25, 0.00000000, 255, 255, 255, 255 );
        }
    }
    if (bParam4)
    {
        SET_WIDESCREEN_FORMAT( 3 );
        INIT_FRONTEND_HELPER_TEXT();
        DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
        DRAW_FRONTEND_HELPER_TEXT( "CONTINUE", "INPUT_F_ACCEPT", 0 );
        if (N_604003528())
        {
            if (NETWORK_GET_NUM_PLAYERS_MET() > 0)
            {
                DRAW_FRONTEND_HELPER_TEXT( "PLAYERS", "INPUT_F_X", 0 );
            }
        }
        if (bVar21)
        {
            DRAW_FRONTEND_HELPER_TEXT( "SCROLL", "PAD_DPAD_UPDOWN", (N_604003528()) AND (NOT GET_IS_WIDESCREEN()) );
        }
        if (sub_57232())
        {
            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_READY" );
            l_U1299 = 0;
            l_U1085 = 0;
            return 1;
        }
        else if (sub_57384())
        {
            l_U963 = 1;
        }
        else if (((sub_57046()) AND (NETWORK_GET_NUM_PLAYERS_MET() > 0)) AND (N_604003528()))
        {
            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
            l_U1299 = 1;
        };;;
    }
    else
    {
        INIT_FRONTEND_HELPER_TEXT();
        if (NOT l_U966)
        {
            DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
        }
        if (NOT IS_SCREEN_FADING())
        {
            if ((((((sub_48433()) || (sub_10749())) || (sub_6720() == 10)) AND (NOT l_U966)) AND (NOT IS_SCREEN_FADING())) AND (sub_58516()))
            {
                DRAW_FRONTEND_HELPER_TEXT( "SPECTATE", "INPUT_F_ACCEPT", 0 );
            }
            if (N_604003528())
            {
                if (NETWORK_GET_NUM_PLAYERS_MET() > 0)
                {
                    DRAW_FRONTEND_HELPER_TEXT( "PLAYERS", "INPUT_F_X", 0 );
                }
            }
        }
        if ((sub_57384()) AND (NOT l_U966))
        {
            l_U963 = 1;
        }
        else if (((((sub_57232()) AND (((sub_48433()) || (sub_10749())) || (sub_6720() == 10))) AND (NOT l_U966)) AND (NOT IS_SCREEN_FADING())) AND (sub_58516()))
        {
            l_U965 = 1;
        }
        else if ((((sub_57046()) AND (NETWORK_GET_NUM_PLAYERS_MET() > 0)) AND (N_604003528())) AND (NOT IS_SCREEN_FADING()))
        {
            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
            l_U1299 = 1;
        };;;
    }
    l_U966 = 0;
    if ((uParam2^) != 0)
    {
        GET_NETWORK_TIMER( ref iVar19 );
        if ((uParam2^) < (iVar19 - 10000))
        {
            return 1;
        }
    }
    return 0;
}

int sub_52568()
{
    int I;
    int Result;
    int iVar4;
    int iVar5;
    int iVar6;

    iVar6 = -1;
    for ( I = 0; I < 8; I++ )
    {
        if ((GET_NO_OF_PLAYERS_IN_TEAM( I )) > 0)
        {
            iVar5++;
            iVar6 = I;
        }
    }
    if (iVar5 == 0)
    {
        return sub_9879( 0, 2 );
    }
    else if (iVar5 == 1)
    {
        if ((GET_NO_OF_PLAYERS_IN_TEAM( -1 )) > (GET_NO_OF_PLAYERS_IN_TEAM( iVar6 )))
        {
            return sub_9879( 0, 2 );
        }
        else
        {
            for ( I = 0; I < 8; I++ )
            {
                if ((GET_NO_OF_PLAYERS_IN_TEAM( I )) == 0)
                {
                    return I;
                }
            }
        }
    }
    for ( I = 0; I < 8; I++ )
    {
        if ((GET_NO_OF_PLAYERS_IN_TEAM( I )) > 0)
        {
            if (((GET_NO_OF_PLAYERS_IN_TEAM( Result )) > (GET_NO_OF_PLAYERS_IN_TEAM( I ))) || (I == 0))
            {
                Result = I;
                iVar5 = 0;
            }
            else if ((GET_NO_OF_PLAYERS_IN_TEAM( Result )) == (GET_NO_OF_PLAYERS_IN_TEAM( I )))
            {
                iVar5++;
            }
        }
    }
    if (iVar5 == 0)
    {
        return Result;
    }
    else if (iVar5 == 8)
    {
        return sub_9879( 0, 8 );
    }
    else
    {
        iVar4 = sub_9879( 0, iVar5 );
        iVar5 = 0;
        for ( I = 0; I < 8; I++ )
        {
            if ((GET_NO_OF_PLAYERS_IN_TEAM( I )) > 0)
            {
                if ((GET_NO_OF_PLAYERS_IN_TEAM( Result )) == (GET_NO_OF_PLAYERS_IN_TEAM( I )))
                {
                    if (iVar4 == iVar5)
                    {
                        return I;
                    }
                    iVar5++;
                }
            }
        }
    }
    return 0;
}

int sub_53050(int iParam0)
{
    int I;
    int Result;
    int iVar5;
    int iVar6;

    if (iParam0 == 2)
    {
        if ((GET_NO_OF_PLAYERS_IN_TEAM( 0 )) < (GET_NO_OF_PLAYERS_IN_TEAM( 1 )))
        {
            return 0;
        }
        else if ((GET_NO_OF_PLAYERS_IN_TEAM( 0 )) > (GET_NO_OF_PLAYERS_IN_TEAM( 1 )))
        {
            return 1;
        }
        else
        {
            return sub_9879( 0, iParam0 );
        }
    }
    else
    {
        for ( I = 0; I < iParam0; I++ )
        {
            if (((GET_NO_OF_PLAYERS_IN_TEAM( Result )) > (GET_NO_OF_PLAYERS_IN_TEAM( I ))) || (I == 0))
            {
                Result = I;
                iVar5 = 0;
            }
            else if ((GET_NO_OF_PLAYERS_IN_TEAM( Result )) == (GET_NO_OF_PLAYERS_IN_TEAM( I )))
            {
                iVar5++;
            }
        }
        if (iVar5 == 0)
        {
            return Result;
        }
        else if (iVar5 == iParam0)
        {
            return sub_9879( 0, iParam0 );
        }
        else
        {
            iVar6 = sub_9879( 0, iVar5 );
            iVar5 = 0;
            for ( I = 0; I < iParam0; I++ )
            {
                if ((GET_NO_OF_PLAYERS_IN_TEAM( Result )) == (GET_NO_OF_PLAYERS_IN_TEAM( I )))
                {
                    if (iVar6 == iVar5)
                    {
                        return I;
                    }
                    iVar5++;
                }
            }
        }
    }
    return -1;
}

void sub_53413(int iParam0)
{
    int I;
    int Result;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if ((GET_PLAYER_TEAM( sub_427( I ) )) == iParam0)
            {
                Result++;
            }
        }
    }
    return Result;
}

int sub_53511(int iParam0)
{
    int I;
    int iVar4;
    int iVar5;

    iVar5 = GET_PLAYER_TEAM( sub_427( iParam0 ) );
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if ((GET_PLAYER_TEAM( sub_427( I ) )) == iVar5)
            {
                iVar4 = I;
            }
        }
    }
    if (iVar4 == iParam0)
    {
        return 1;
    }
    return 0;
}

void sub_53743(unknown uParam0, unknown uParam1)
{
    int I;
    int iVar5;
    int iVar6;

    if (sub_53752())
    {
        (uParam1^) = 0;
    }
    else
    {
        for ( I = 0; I < 16; I++ )
        {
            if (IS_NETWORK_PLAYER_ACTIVE( I ))
            {
                iVar5++;
                if ((uParam0^)[I] == -5)
                {
                    iVar6++;
                }
            }
        }
        if ((iVar6 > 0) AND (iVar6 <= (iVar5 / 2)))
        {
            if ((uParam1^) == 0)
            {
                GET_NETWORK_TIMER( uParam1 );
            }
        }
        else
        {
            (uParam1^) = 0;
        }
    }
    return;
}

void sub_53752()
{
    return NETWORK_IS_GAME_RANKED();
}

void sub_53929(int iParam0, boolean bParam1)
{
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    SET_WIDESCREEN_FORMAT( 2 );
    sub_53965( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    GET_FRONTEND_DESIGN_VALUE( 23, ref uVar9, ref uVar10 );
    GET_FRONTEND_DESIGN_VALUE( 24, ref uVar11, ref uVar12 );
    GET_HUD_COLOUR( 49, ref uVar5, ref uVar6, ref uVar7, ref uVar8 );
    GET_NETWORK_TIMER( ref iVar4 );
    if (((iParam0 + 10000) - iVar4) > 0)
    {
        if (bParam1)
        {
            sub_54262( "STARTING_IN", uVar9, uVar10, uVar11, uVar12, 255, 255, 255, 255, 2, (((iParam0 + 10000) - iVar4) / 1000) + 1 );
        }
        else
        {
            sub_54587( uVar9, uVar10, uVar11, uVar12, 255, 255, 255, 255, 2, (((iParam0 + 10000) - iVar4) / 1000) + 1 );
        }
        if ((((iParam0 + 10000) - iVar4) + 1000) <= l_U1281)
        {
            PLAY_AUDIO_EVENT( "FRONTEND_OTHER_COUNTDOWN" );
            l_U1281 -= 1000;
        }
    }
    else if (bParam1)
    {
        sub_54262( "STARTING_IN", uVar9, uVar10, uVar11, uVar12, 255, 255, 255, 255, 2, 1 );
    }
    else
    {
        sub_54587( uVar9, uVar10, uVar11, uVar12, 255, 255, 255, 255, 2, 1 );
    }
    SET_WIDESCREEN_FORMAT( 3 );
    return;
}

void sub_53965(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    SET_TEXT_FONT( uParam0 );
    SET_TEXT_BACKGROUND( 0 );
    SET_TEXT_DROPSHADOW( 0, 0, 0, 0, 255 );
    SET_TEXT_EDGE( 0, 0, 0, 0, 255 );
    switch (uParam3)
    {
        case 1:
        SET_TEXT_BACKGROUND( 1 );
        break;
        case 2:
        SET_TEXT_DROPSHADOW( uParam4, uParam5, uParam6, uParam7, uParam8 );
        break;
        case 3:
        SET_TEXT_EDGE( uParam4, uParam5, uParam6, uParam7, uParam8 );
        break;
    }
    SET_TEXT_PROPORTIONAL( 1 );
    SET_TEXT_WRAP( uParam1, uParam2 );
    return;
}

void sub_54262(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_54302( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_NUMBER( uParam0, uParam10 );
    DISPLAY_TEXT_WITH_NUMBER( uParam1, uParam2, uParam0, uParam10 );
    return Result;
}

void sub_54302(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        SET_TEXT_JUSTIFY( 0 );
        SET_TEXT_CENTRE( 0 );
        SET_TEXT_RIGHT_JUSTIFY( 0 );
        break;
        case 1:
        SET_TEXT_JUSTIFY( 0 );
        SET_TEXT_CENTRE( 1 );
        SET_TEXT_RIGHT_JUSTIFY( 0 );
        break;
        case 2:
        SET_TEXT_JUSTIFY( 1 );
        SET_TEXT_CENTRE( 0 );
        SET_TEXT_RIGHT_JUSTIFY( 0 );
        break;
        case 3:
        SET_TEXT_JUSTIFY( 0 );
        SET_TEXT_CENTRE( 0 );
        SET_TEXT_RIGHT_JUSTIFY( 1 );
        SET_TEXT_WRAP( 0.00000000, (uParam1^) );
        (uParam1^) = 0.00000000;
        break;
    }
    return;
}

void sub_54587(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam4, uParam5, uParam6, uParam7 );
    SET_TEXT_SCALE( uParam2, uParam3 );
    sub_54302( uParam8, ref uParam0 );
    Result = GET_STRING_WIDTH_WITH_NUMBER( "NUMBER", uParam9 );
    DISPLAY_TEXT_WITH_NUMBER( uParam0, uParam1, "NUMBER", uParam9 );
    return Result;
}

int sub_55000()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    float fVar6;
    unknown uVar7;
    unknown uVar8;

    if (GET_IS_WIDESCREEN())
    {
        fVar6 = 0.13500000;
    }
    else
    {
        fVar6 = 0.13900000;
    }
    sub_55041( 1 );
    GET_FRONTEND_DESIGN_VALUE( 113, ref uVar7, ref uVar8 );
    sub_53965( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    sub_55436( "RECENT_PLAYERS", sub_55382(), 0.08500000, uVar7, uVar8, 255, 255, 255, 255, 2 );
    sub_53965( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    GET_HUD_COLOUR( 56, ref uVar3, ref uVar4, ref uVar5, ref I );
    if (N_604003528())
    {
        sub_55436( "RECENTPLYRX360", sub_55382() + 0.00100000, fVar6, 0.31500000, 0.42950000, uVar3, uVar4, uVar5, 255, 2 );
    }
    else
    {
        sub_55436( "RECENTPLYRDESC", sub_55382() + 0.00100000, fVar6, 0.31500000, 0.42950000, uVar3, uVar4, uVar5, 255, 2 );
    }
    if (GET_IS_WIDESCREEN())
    {
        fVar6 = 0.21550000;
    }
    else
    {
        fVar6 = 0.21600000;
    }
    sub_55728( ref l_U1297, NETWORK_GET_NUM_PLAYERS_MET(), 0 );
    if (NETWORK_GET_NUM_PLAYERS_MET() > 16)
    {
        DRAW_FRONTEND_HELPER_TEXT( "UP_DOWN", "PAD_LT_RT", 0 );
        if (IS_BUTTON_JUST_PRESSED( 0, 7 ))
        {
            l_U1297 += 16;
            if (l_U1297 >= NETWORK_GET_NUM_PLAYERS_MET())
            {
                l_U1297 = NETWORK_GET_NUM_PLAYERS_MET() - 1;
            }
        }
        else if (IS_BUTTON_JUST_PRESSED( 0, 5 ))
        {
            l_U1297 -= 16;
            if (l_U1297 < 0)
            {
                l_U1297 = 0;
            }
        }
    }
    if (l_U1297 >= (l_U1298 + 16))
    {
        l_U1298 = (l_U1297 - 16) + 1;
    }
    else if (l_U1297 < l_U1298)
    {
        l_U1298 = l_U1297;
    }
    for ( I = l_U1298; I <= ((l_U1298 + 16) - 1); I++ )
    {
        if (I < NETWORK_GET_NUM_PLAYERS_MET())
        {
            sub_53965( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
            if (l_U1297 == I)
            {
                sub_56603( sub_55382(), fVar6, 0.35000000, 0.47750000, 255, 255, 255, 255, 2, NETWORK_GET_MET_PLAYER_NAME( I ) );
            }
            else
            {
                sub_56603( sub_55382(), fVar6, 0.35000000, 0.47750000, uVar3, uVar4, uVar5, 255, 2, NETWORK_GET_MET_PLAYER_NAME( I ) );
            }
            fVar6 += 0.03600000;
        }
    }
    INIT_FRONTEND_HELPER_TEXT();
    DRAW_FRONTEND_HELPER_TEXT( "BACK", "INPUT_F_CANCEL", 0 );
    if (N_604003528())
    {
        DRAW_FRONTEND_HELPER_TEXT( "GAMER_CARD", "INPUT_F_ACCEPT", 0 );
    }
    else
    {
        DRAW_FRONTEND_HELPER_TEXT( "PROFILE", "INPUT_F_ACCEPT", 0 );
    }
    DRAW_FRONTEND_HELPER_TEXT( "REVIEW", "INPUT_F_X", 0 );
    if (NETWORK_GET_NUM_PLAYERS_MET() > 1)
    {
        DRAW_FRONTEND_HELPER_TEXT( "SCROLL", "PAD_DPAD_UPDOWN", 1 );
        if (NETWORK_GET_NUM_PLAYERS_MET() > 16)
        {
            DRAW_FRONTEND_HELPER_TEXT( "UP_DOWN", "PAD_LT_RT", 0 );
        }
    }
    else if (NETWORK_GET_NUM_PLAYERS_MET() == 0)
    {
        return 1;
    }
    if (sub_57046())
    {
        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
        NETWORK_SHOW_MET_PLAYER_FEEDBACK_UI( l_U1297 );
    }
    else if (sub_57232())
    {
        NETWORK_SHOW_MET_PLAYER_PROFILE_UI( l_U1297 );
    }
    else if (sub_57384())
    {
        return 1;
    };;;
    return 0;
}

void sub_55041(boolean bParam0)
{
    unknown uVar3;
    unknown uVar4;

    SET_WIDESCREEN_FORMAT( 0 );
    DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
    if (bParam0)
    {
        GET_FRONTEND_DESIGN_VALUE( 0, ref uVar3, ref uVar4 );
        if ((N_604003528()) || (GET_IS_WIDESCREEN()))
        {
            DRAW_RECT( 0.50000000, uVar3, 1.00000000, 0.00200000, 180, 180, 180, 255 );
        }
        else
        {
            DRAW_RECT( 0.50000000, uVar3, 1.00000000, 0.00400000, 180, 180, 180, 255 );
        }
    }
    GET_FRONTEND_DESIGN_VALUE( 22, ref uVar3, ref uVar4 );
    if ((N_604003528()) || (GET_IS_WIDESCREEN()))
    {
        DRAW_RECT( 0.50000000, uVar3, 1.00000000, 0.00200000, 180, 180, 180, 255 );
    }
    else
    {
        DRAW_RECT( 0.50000000, uVar3, 1.00000000, 0.00400000, 180, 180, 180, 255 );
    }
    SET_WIDESCREEN_FORMAT( 2 );
    return;
}

void sub_55382()
{
    unknown Result;
    unknown uVar3;

    GET_FRONTEND_DESIGN_VALUE( 112, ref Result, ref uVar3 );
    return Result;
}

void sub_55436(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_54302( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH( uParam0 );
    DISPLAY_TEXT( uParam1, uParam2, uParam0 );
    return Result;
}

int sub_55728(unknown uParam0, int iParam1, boolean bParam2)
{
    int iVar5;
    int iVar6;
    int iVar7;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar6, ref iVar7, ref iVar5, ref iVar5 );
    GET_NETWORK_TIMER( ref iVar5 );
    if ((IS_BUTTON_PRESSED( 0, 8 )) || (iVar7 < 65436))
    {
        if ((l_U1285) || (iVar5 > (l_U1277 + 150)))
        {
            (uParam0^)--;
            if ((uParam0^) < 0)
            {
                if (bParam2)
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_HIGHLIGHT" );
                    (uParam0^) += iParam1;
                }
                else
                {
                    (uParam0^) = 0;
                }
            }
            else
            {
                PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_HIGHLIGHT" );
            }
            l_U1277 = iVar5;
            l_U1285 = 0;
            return 1;
        }
    }
    if ((IS_BUTTON_PRESSED( 0, 9 )) || (iVar7 > 100))
    {
        if ((l_U1285) || (iVar5 > (l_U1277 + 150)))
        {
            (uParam0^)++;
            if ((uParam0^) >= iParam1)
            {
                if (bParam2)
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_HIGHLIGHT" );
                    (uParam0^) -= iParam1;
                }
                else
                {
                    (uParam0^) = iParam1 - 1;
                }
            }
            else
            {
                PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_HIGHLIGHT" );
            }
            l_U1277 = iVar5;
            l_U1285 = 0;
            return 1;
        }
    }
    if (NOT l_U1285)
    {
        if (NOT (IS_BUTTON_PRESSED( 0, 10 )))
        {
            if (NOT (IS_BUTTON_PRESSED( 0, 11 )))
            {
                if (NOT (IS_BUTTON_PRESSED( 0, 8 )))
                {
                    if (NOT (IS_BUTTON_PRESSED( 0, 9 )))
                    {
                        if ((iVar6 < 100) AND (iVar6 > 65436))
                        {
                            if ((iVar7 < 100) AND (iVar7 > 65436))
                            {
                                l_U1285 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void sub_56603(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam4, uParam5, uParam6, uParam7 );
    SET_TEXT_SCALE( uParam2, uParam3 );
    sub_54302( uParam8, ref uParam0 );
    Result = GET_STRING_WIDTH_WITH_STRING( "STRING", uParam9 );
    DISPLAY_TEXT_WITH_LITERAL_STRING( uParam0, uParam1, "STRING", uParam9 );
    return Result;
}

int sub_57046()
{
    if (IS_CONTROL_PRESSED( 2, 79 ))
    {
        if (l_U1287)
        {
            l_U1287 = 0;
            return 1;
        }
    }
    else if (((((NOT (IS_CONTROL_PRESSED( 2, 77 ))) AND (NOT (IS_CONTROL_PRESSED( 2, 78 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 80 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 12 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 13 ))))
    {
        l_U1287 = 1;
    }
    return 0;
}

int sub_57232()
{
    if (IS_CONTROL_PRESSED( 2, 77 ))
    {
        if (l_U1287)
        {
            l_U1287 = 0;
            return 1;
        }
    }
    else if (((((NOT (IS_CONTROL_PRESSED( 2, 79 ))) AND (NOT (IS_CONTROL_PRESSED( 2, 78 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 80 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 12 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 13 ))))
    {
        l_U1287 = 1;
    }
    return 0;
}

int sub_57384()
{
    if (IS_CONTROL_PRESSED( 2, 78 ))
    {
        if (l_U1287)
        {
            l_U1287 = 0;
            return 1;
        }
    }
    else if (((((NOT (IS_CONTROL_PRESSED( 2, 77 ))) AND (NOT (IS_CONTROL_PRESSED( 2, 79 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 80 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 12 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 13 ))))
    {
        l_U1287 = 1;
    }
    return 0;
}

void sub_57543()
{
    int iVar2;

    if (NOT N_604003528())
    {
        if (NETWORK_CHECK_INVITE_ARRIVAL())
        {
            GET_NETWORK_TIMER( ref l_U1363 );
            l_U1363 += 5000;
            NETWORK_CLEAR_INVITE_ARRIVAL();
        }
        GET_NETWORK_TIMER( ref iVar2 );
        if ((l_U1363 > iVar2) AND (l_U1363 != 0))
        {
            SET_WIDESCREEN_FORMAT( 3 );
            sub_53965( 0, 0.00000000, 1.50000000, 0, 0, 0, 0, 0, 255 );
            sub_55436( "INVITE_RECIEVED", sub_57688() + -0.05050000, 0.09800000, 0.35000000, 0.47800000, 255, 255, 255, 255, 3 );
            DRAW_SPRITE( l_U599[34], sub_57688() + -0.02050000, 0.10580000, 0.09570000, 0.06320000, 0.00000000, 255, 255, 255, 255 );
        }
    }
    return;
}

float sub_57688()
{
    unknown uVar2;
    unknown uVar3;

    GET_FRONTEND_DESIGN_VALUE( 112, ref uVar2, ref uVar3 );
    return 1.00000000 - uVar2;
}

void sub_57874()
{
    return l_U1306;
}

void sub_57901()
{
    sub_57912( 0, 1 );
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    sub_58296();
    sub_58341();
    sub_58424();
    l_U1305 = 0;
    l_U1304 = 0;
    l_U1306 = 0;
    l_U1317 = 0;
    l_U1320 = 18;
    sub_58230( 0 );
    return;
}

void sub_57912(boolean bParam0, boolean bParam1)
{
    if (bParam1)
    {
        if (IS_IN_SPECTATOR_MODE())
        {
            SET_IN_SPECTATOR_MODE( 0 );
            if (NOT (DOES_CAM_EXIST( l_U1342 )))
            {
                CREATE_CAM( 6, ref l_U1342 );
            }
            if (DOES_CAM_EXIST( l_U1342 ))
            {
                GET_GAME_CAM( ref l_U1343 );
                GET_CAM_POS( l_U1343, ref l_U1331._fU0, ref l_U1331._fU4, ref l_U1331._fU8 );
                GET_CAM_ROT( l_U1343, ref l_U1334._fU0, ref l_U1334._fU4, ref l_U1334._fU8 );
                GET_CAM_FOV( l_U1343, ref l_U1337 );
                SET_CAM_POS( l_U1342, l_U1331._fU0, l_U1331._fU4, l_U1331._fU8 );
                SET_CAM_ROT( l_U1342, l_U1334._fU0, l_U1334._fU4, l_U1334._fU8 );
                SET_CAM_FOV( l_U1342, l_U1337 );
                SET_CAM_ACTIVE( l_U1342, 1 );
                SET_CAM_PROPAGATE( l_U1342, 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            }
        }
        l_U1305 = 0;
    }
    SET_CAMERA_CONTROLS_DISABLED_WITH_PLAYER_CONTROLS( 1 );
    ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
    if (bParam0)
    {
        sub_58230( 0 );
    }
    return;
}

void sub_58230(unknown uParam0)
{
    SET_SCREEN_FADE( sub_52194(), 0, 0, 1, 0, 0, 0, 255, uParam0, 1.00000000, 1.00000000 );
    return;
}

void sub_58296()
{
    SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY( 0 );
    if (IS_MOBILE_PHONE_RADIO_ACTIVE())
    {
        SET_MOBILE_PHONE_RADIO_STATE( 0 );
    }
    return;
}

void sub_58341()
{
    l_U1307 = 0;
    l_U1308 = 1;
    l_U1309 = 0;
    l_U1311 = 0;
    l_U1312 = 0;
    l_U1313 = 0;
    l_U1314 = 0;
    l_U1315 = 0;
    l_U1316 = 0;
    l_U1318 = -1;
    l_U1319 = -1;
    return;
}

void sub_58424()
{
    l_U1310 = 0;
    SET_FOLLOW_VEHICLE_CAM_SUBMODE( -1 );
    l_U1344 = -1;
    return;
}

int sub_58516()
{
    if (NOT (l_U1305 == 4))
    {
        if (NOT sub_58538())
        {
            return 1;
        }
        else if (NOT (l_U1304 == 0))
        {
            sub_57912( 0, 1 );
            l_U1305 = 4;
        }
    }
    else if (l_U1312)
    {
        sub_58818();
    }
    else if (l_U1317)
    {
        if (NOT sub_58538())
        {
            l_U1304 = 0;
            l_U1317 = 0;
            sub_58341();
            if (IS_IN_SPECTATOR_MODE())
            {
                SET_IN_SPECTATOR_MODE( 0 );
            }
            l_U1305 = 0;
        }
    };;;
    return 0;
}

int sub_58538()
{
    int I;

    for ( I = 0; I <= 15; I++ )
    {
        if (sub_58561( I ))
        {
            return 0;
        }
    }
    return 1;
}

int sub_58561(int iParam0)
{
    if ((iParam0 >= 0) AND (iParam0 < 16))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( iParam0 ))
        {
            if (NOT (iParam0 == GET_PLAYER_ID()))
            {
                if ((NOT (IS_CHAR_INJURED( sub_465( iParam0 ) ))) || ((iParam0 == l_U1318) AND (NOT l_U1316)))
                {
                    if ((NOT l_U1048[iParam0]) AND (NOT l_U1065[iParam0]))
                    {
                        if ((IS_PLAYER_SCRIPT_CONTROL_ON( CONVERT_INT_TO_PLAYERINDEX( iParam0 ) )) || ((IS_CHAR_IN_ANY_CAR( sub_465( iParam0 ) )) AND (l_U1304 == 2)))
                        {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void sub_58818()
{
    if (NOT l_U1313)
    {
        if (NOT l_U1314)
        {
            if (DOES_CAM_EXIST( l_U1342 ))
            {
                if ((NOT IS_SCREEN_FADED_OUT()) AND (NOT IS_SCREEN_FADING()))
                {
                    sub_52185( 200 );
                }
                else if (NOT (IS_CHAR_DEAD( sub_2736() )))
                {
                    SET_CHAR_COORDINATES( sub_2736(), l_U1338._fU0, l_U1338._fU4, l_U1338._fU8 );
                    if (DOES_CAM_EXIST( l_U1342 ))
                    {
                        DESTROY_CAM( l_U1342 );
                    }
                    ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 0 );
                    if (IS_NETWORK_GAME_RUNNING())
                    {
                        GET_NETWORK_TIMER( ref l_U1325 );
                    }
                    l_U1324 = l_U1325 + 5000;
                    l_U1313 = 1;
                }
            }
            else
            {
                l_U1314 = 1;
            }
        }
    }
    else if (IS_NETWORK_GAME_RUNNING())
    {
        GET_NETWORK_TIMER( ref l_U1325 );
    }
    if (l_U1324 < l_U1325)
    {
        ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
        sub_58230( 200 );
        l_U1313 = 0;
        l_U1314 = 1;
    }
    if (l_U1314)
    {
        if ((NOT sub_58538()) AND (IS_SCREEN_FADED_IN()))
        {
            l_U1305 = 0;
            sub_58341();
        }
    }
    return;
}

void sub_59381(unknown uParam0, boolean bParam1)
{
    float fVar4;
    unknown uVar5;

    if (IS_NETWORK_GAME_RUNNING())
    {
        GET_NETWORK_TIMER( ref l_U1325 );
    }
    if (NOT l_U1306)
    {
        l_U1306 = 1;
    }
    if (l_U1304 == 0)
    {
        if (DOES_CAM_EXIST( l_U1342 ))
        {
            DESTROY_CAM( l_U1342 );
        }
        l_U1304 = uParam0;
    }
    if (NOT l_U1310)
    {
        GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref l_U1344 );
        if ((NOT (l_U1344 == -1)) AND (NOT (l_U1344 == 0)))
        {
            l_U1310 = 1;
            SET_FOLLOW_VEHICLE_CAM_SUBMODE( 5 );
        }
    }
    if (l_U1309)
    {
        sub_59546();
        if (NOT bParam1)
        {
            sub_57912( 1, 0 );
            l_U1309 = 0;
        }
    }
    else if (bParam1)
    {
        l_U1309 = 1;
        if (IS_IN_SPECTATOR_MODE())
        {
            l_U1305 = 2;
            sub_59867();
        }
        else if (l_U1308)
        {
            sub_59945();
            l_U1319 = -1;
            if (NOT (l_U1318 == -1))
            {
                fVar4 = sub_59999( sub_2736(), sub_465( l_U1318 ) );
                if ((((fVar4 < 30) AND (NOT (fVar4 == -1))) AND (NOT IS_SCREEN_FADING())) AND (NOT (IS_CHAR_DEAD( sub_2736() ))))
                {
                    sub_59867();
                    if (NOT sub_60276())
                    {
                        ;
                    }
                    sub_60463();
                    l_U1305 = 2;
                    l_U1308 = 0;
                }
            }
            else
            {
                l_U1305 = 4;
            }
        }
    }
    switch (l_U1305)
    {
        case 0:
        if (l_U1309)
        {
            if ((IS_SCREEN_FADED_IN()) || (IS_SCREEN_FADED_OUT()))
            {
                if (IS_SCREEN_FADED_IN())
                {
                    sub_52185( 200 );
                }
                l_U1307 = 0;
                l_U1305 = 1;
            }
        }
        break;
        case 1:
        if (IS_SCREEN_FADED_OUT())
        {
            if (NOT l_U1307)
            {
                if (NOT l_U1308)
                {
                    if (NOT (l_U1319 == -1))
                    {
                        if (sub_58561( l_U1319 ))
                        {
                            l_U1318 = l_U1319;
                            l_U1319 = -1;
                        }
                        else
                        {
                            sub_59945();
                        }
                    }
                    else if (NOT (sub_58561( l_U1318 )))
                    {
                        sub_59945();
                    }
                }
                else if (NOT (sub_58561( l_U1319 )))
                {
                    sub_59945();
                }
                if (NOT sub_60276())
                {
                    ;
                }
                sub_59867();
                if (l_U1308)
                {
                    sub_60463();
                    l_U1308 = 0;
                }
                ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 0 );
                l_U1307 = 1;
                l_U1324 = l_U1325 + 5000;
            }
            else if (NOT sub_60934())
            {
                if (l_U1309)
                {
                    l_U1318 = sub_60987();
                    if (NOT sub_60276())
                    {
                        ;
                    }
                    l_U1324 = l_U1325 + 5000;
                }
                else
                {
                    sub_57912( 1, 1 );
                }
            }
            else
            {
                sub_61536();
                if (((GET_NUM_STREAMING_REQUESTS() < 5) AND (NOT IS_STREAMING_PRIORITY_REQUESTS())) || (l_U1324 < l_U1325))
                {
                    if (NOT sub_60276())
                    {
                        ;
                    }
                    ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
                    l_U1305 = 2;
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    sub_58230( 200 );
                }
                else if ((NOT IS_SCREEN_FADING()) AND (l_U1309))
                {
                    sub_61536();
                    sub_61847( 1 );
                }
            }
        }
        break;
        case 2:
        sub_60276();
        if (NOT sub_60934())
        {
            if (l_U1309)
            {
                l_U1319 = sub_60987();
                if (l_U1319 != -1)
                {
                    if ((sub_59999( sub_2736(), sub_465( l_U1319 ) )) < 30)
                    {
                        l_U1318 = l_U1319;
                        if (NOT sub_60276())
                        {
                            ;
                        }
                        l_U1319 = -1;
                    }
                    else
                    {
                        sub_57912( 0, 1 );
                    }
                }
            }
            else
            {
                sub_57912( 1, 1 );
            }
        }
        else if (IS_NETWORK_PLAYER_ACTIVE( l_U1318 ))
        {
            if (IS_CHAR_INJURED( sub_465( l_U1318 ) ))
            {
                if (NOT l_U1315)
                {
                    l_U1326 = l_U1325 + 6000;
                    l_U1315 = 1;
                }
                else if (l_U1326 < l_U1325)
                {
                    l_U1315 = 0;
                    l_U1316 = 1;
                }
            }
        }
        sub_61536();
        if (l_U1309)
        {
            if (NOT IS_SCREEN_FADING())
            {
                sub_61847( 0 );
            }
        }
        break;
    }
    return;
}

void sub_59546()
{
    boolean bVar2;

    bVar2 = false;
    if (IS_BUTTON_JUST_PRESSED( 0, 11 ))
    {
        l_U1320++;
        if (l_U1320 > 18)
        {
            l_U1320 = 0;
        }
        bVar2 = true;
    }
    if (IS_BUTTON_JUST_PRESSED( 0, 10 ))
    {
        l_U1320--;
        if (l_U1320 < 0)
        {
            l_U1320 = 18;
        }
        RETUNE_RADIO_TO_STATION_INDEX( l_U1320 );
        bVar2 = true;
    }
    if (l_U986 < 3)
    {
        if (bVar2)
        {
            if (l_U1320 != 18)
            {
                if (NOT IS_MOBILE_PHONE_RADIO_ACTIVE())
                {
                    SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY( 1 );
                    SET_MOBILE_PHONE_RADIO_STATE( 1 );
                }
                RETUNE_RADIO_TO_STATION_INDEX( l_U1320 );
            }
            else if (IS_MOBILE_PHONE_RADIO_ACTIVE())
            {
                SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY( 0 );
                SET_MOBILE_PHONE_RADIO_STATE( 0 );
            }
        }
    }
    else if (IS_MOBILE_PHONE_RADIO_ACTIVE())
    {
        SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY( 0 );
        SET_MOBILE_PHONE_RADIO_STATE( 0 );
    }
    return;
}

void sub_59867()
{
    if (NOT IS_IN_SPECTATOR_MODE())
    {
        SET_IN_SPECTATOR_MODE( 1 );
    }
    SET_CAMERA_CONTROLS_DISABLED_WITH_PLAYER_CONTROLS( 0 );
    SET_CINEMATIC_BUTTON_ENABLED( 0 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    return;
}

int sub_59945()
{
    int I;
    int iVar3;
    float fVar4;
    float fVar5;

    iVar3 = -1;
    fVar4 = 10000;
    for ( I = 0; I <= 15; I++ )
    {
        if (sub_58561( I ))
        {
            fVar5 = sub_59999( sub_2736(), sub_465( I ) );
            if ((fVar5 < fVar4) AND (NOT (fVar5 == -1)))
            {
                iVar3 = I;
                fVar4 = fVar5;
            }
        }
    }
    if (NOT (iVar3 == -1))
    {
        l_U1318 = iVar3;
        return 1;
    }
    return 0;
}

float sub_59999(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown Result;

    if ((DOES_CHAR_EXIST( uParam0 )) AND (DOES_CHAR_EXIST( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
        GET_CHAR_COORDINATES( uParam1, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( uVar7._fU0, uVar7._fU4, uVar7._fU8, uVar4._fU0, uVar4._fU4, uVar4._fU8, ref Result );
        return Result;
    }
    return -1.00000000;
}

int sub_60276()
{
    if ((l_U1318 >= 0) AND (l_U1318 < 16))
    {
        if ((l_U1318 < 16) AND (l_U1318 != GET_PLAYER_ID()))
        {
            if (IS_NETWORK_PLAYER_ACTIVE( l_U1318 ))
            {
                if (DOES_CHAR_EXIST( sub_465( l_U1318 ) ))
                {
                    if (NOT (IS_CHAR_INJURED( sub_465( l_U1318 ) )))
                    {
                        l_U1315 = 0;
                        l_U1316 = 0;
                        l_U1344 = 1;
                        GET_GAME_CAM( ref l_U1341 );
                        SET_CAM_TARGET_PED( l_U1341, sub_465( l_U1318 ) );
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_60463()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_CHAR_DEAD( sub_2736() ))
    {
        N_312012851( sub_2736(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        REQUEST_COLLISION_AT_POSN( uVar2._fU0, uVar2._fU4, uVar2._fU8 );
        RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), uVar2, 0 );
    }
    SET_CHAR_COLLISION( sub_2736(), 0 );
    SET_CHAR_VISIBLE( sub_2736(), 0 );
    FREEZE_CHAR_POSITION( sub_2736(), 1 );
    return;
}

int sub_60934()
{
    unknown uVar2;

    if (sub_58561( l_U1318 ))
    {
        return 1;
    }
    return 0;
}

int sub_60987()
{
    int Result;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    boolean bVar7;

    if (NOT (l_U1304 == 2))
    {
        for ( Result = l_U1318; Result <= 15; Result++ )
        {
            if (sub_61027( Result ))
            {
                return Result;
            }
        }
        for ( Result = 0; Result <= l_U1318; Result++ )
        {
            if (sub_61027( Result ))
            {
                return Result;
            }
        }
    }
    else
    {
        iVar3 = -1;
        iVar4 = -1;
        iVar5 = -1;
        iVar6 = -1;
        bVar7 = true;
        for ( Result = 0; Result <= 15; Result++ )
        {
            if (l_U662[0]._fU24[Result] == l_U1318)
            {
                iVar3 = Result;
                Result = 16;
            }
        }
        iVar4 = iVar3 + 1;
        if (iVar4 == 16)
        {
            iVar4 = 0;
        }
        iVar5 = iVar3 - 1;
        if (iVar5 < 0)
        {
            iVar5 = 15;
        }
        iVar6 = iVar4;
        while (bVar7)
        {
            if ((iVar6 >= 0) AND (iVar6 < 16))
            {
                if (sub_61027( l_U662[0]._fU24[iVar6] ))
                {
                    return l_U662[0]._fU24[iVar6];
                }
            }
            if (iVar6 == iVar5)
            {
                bVar7 = false;
            }
            else
            {
                iVar6++;
                if (iVar6 == 16)
                {
                    iVar6 = 0;
                }
            }
        }
        return -1;
    }
    return -1;
}

int sub_61027(int iParam0)
{
    if ((iParam0 >= 0) AND (iParam0 < 16))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( iParam0 ))
        {
            if (NOT (iParam0 == GET_PLAYER_ID()))
            {
                if ((NOT (IS_CHAR_INJURED( sub_465( iParam0 ) ))) AND (NOT (iParam0 == l_U1318)))
                {
                    if ((NOT l_U1048[iParam0]) AND (NOT l_U1065[iParam0]))
                    {
                        if ((IS_PLAYER_SCRIPT_CONTROL_ON( CONVERT_INT_TO_PLAYERINDEX( iParam0 ) )) || ((IS_CHAR_IN_ANY_CAR( sub_465( iParam0 ) )) AND (l_U1304 == 2)))
                        {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void sub_61536()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_NETWORK_PLAYER_ACTIVE( l_U1318 ))
    {
        if (NOT (IS_CHAR_INJURED( sub_465( l_U1318 ) )))
        {
            GET_CHAR_COORDINATES( sub_465( l_U1318 ), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            if (NOT (IS_CHAR_DEAD( sub_2736() )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2736() )))
                {
                    SET_CHAR_COORDINATES( sub_2736(), uVar2._fU0, uVar2._fU4, uVar2._fU8 - 10 );
                }
                else
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_2736(), uVar2._fU0, uVar2._fU4, uVar2._fU8 - 10 );
                }
            }
            SET_CHAR_COLLISION( sub_2736(), 0 );
            SET_CHAR_VISIBLE( sub_2736(), 0 );
        }
    }
    return;
}

void sub_61847(boolean bParam0)
{
    float fVar3;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref l_U1321, ref l_U1323, ref l_U1322, ref l_U1323 );
    if (l_U1311)
    {
        if ((l_U1321 < 80) AND (l_U1321 > 65456))
        {
            l_U1311 = 0;
        }
    }
    else if (l_U1321 > 80)
    {
        l_U1319 = sub_60987();
        if (NOT (l_U1319 == -1))
        {
            fVar3 = sub_59999( sub_2736(), sub_465( l_U1319 ) );
            if (((fVar3 < 30) AND (NOT (fVar3 == -1))) || (bParam0))
            {
                l_U1318 = l_U1319;
                if (NOT sub_60276())
                {
                    ;
                }
                l_U1319 = -1;
                if (bParam0)
                {
                    l_U1324 = l_U1325 + 5000;
                }
            }
            else
            {
                sub_57912( 0, 1 );
            }
            l_U1311 = 1;
        }
    }
    else if (l_U1321 < 65456)
    {
        l_U1319 = sub_62089();
        if (NOT (l_U1319 == -1))
        {
            fVar3 = sub_59999( sub_2736(), sub_465( l_U1319 ) );
            if (((fVar3 < 30) AND (NOT (fVar3 == -1))) || (bParam0))
            {
                l_U1318 = l_U1319;
                if (NOT sub_60276())
                {
                    ;
                }
                l_U1319 = -1;
                if (bParam0)
                {
                    l_U1324 = l_U1325 + 5000;
                }
            }
            else
            {
                sub_57912( 0, 1 );
            }
            l_U1311 = 1;
        }
    };;;
    return;
}

int sub_62089()
{
    int Result;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    boolean bVar7;

    if (NOT (l_U1304 == 2))
    {
        for ( Result = l_U1318; Result >= 0; Result += -1 )
        {
            if (sub_61027( Result ))
            {
                return Result;
            }
        }
        for ( Result = 15; Result >= l_U1318; Result += -1 )
        {
            if (sub_61027( Result ))
            {
                return Result;
            }
        }
    }
    else
    {
        iVar3 = -1;
        iVar4 = -1;
        iVar5 = -1;
        iVar6 = -1;
        bVar7 = true;
        for ( Result = 0; Result <= 15; Result++ )
        {
            if (l_U662[0]._fU24[Result] == l_U1318)
            {
                iVar3 = Result;
                Result = 16;
            }
        }
        iVar4 = iVar3 - 1;
        if (iVar4 < 0)
        {
            iVar4 = 15;
        }
        iVar5 = iVar3 + 1;
        if (iVar5 == 16)
        {
            iVar5 = 0;
        }
        iVar6 = iVar4;
        while (bVar7)
        {
            if ((iVar6 >= 0) AND (iVar6 < 16))
            {
                if (sub_61027( l_U662[0]._fU24[iVar6] ))
                {
                    return l_U662[0]._fU24[iVar6];
                }
            }
            if (iVar6 == iVar5)
            {
                bVar7 = false;
            }
            else
            {
                iVar6--;
                if (iVar6 < 0)
                {
                    iVar6 = 15;
                }
            }
        }
        return -1;
    }
    return -1;
}

void sub_62879(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    SET_WIDESCREEN_FORMAT( 0 );
    GET_FRONTEND_DESIGN_VALUE( 0, ref uVar3, ref uVar4 );
    DRAW_RECT( 0.50000000, 0.00000000, 1.00000000, uVar3 * 2.00000000, 0, 0, 0, 255 );
    if ((N_604003528()) || (GET_IS_WIDESCREEN()))
    {
        DRAW_RECT( 0.50000000, uVar3, 1.00000000, 0.00200000, 180, 180, 180, 255 );
    }
    else
    {
        DRAW_RECT( 0.50000000, uVar3, 1.00000000, 0.00400000, 180, 180, 180, 255 );
    }
    GET_FRONTEND_DESIGN_VALUE( 22, ref uVar3, ref uVar4 );
    DRAW_RECT( 0.50000000, 1.00000000, 1.00000000, (1.00000000 - uVar3) * 2.00000000, 0, 0, 0, 255 );
    if ((N_604003528()) || (GET_IS_WIDESCREEN()))
    {
        DRAW_RECT( 0.50000000, uVar3, 1.00000000, 0.00200000, 180, 180, 180, 255 );
    }
    else
    {
        DRAW_RECT( 0.50000000, uVar3, 1.00000000, 0.00400000, 180, 180, 180, 255 );
    }
    SET_WIDESCREEN_FORMAT( 2 );
    sub_63198( uParam0 );
    return;
}

void sub_63198(boolean bParam0)
{
    char[16] cVar3;
    unknown uVar7;
    unknown uVar8;

    StrCopy( ref cVar3, "NTGT_", 16 );
    ConcatString(ref cVar3, sub_6720(), 16);
    GET_FRONTEND_DESIGN_VALUE( 113, ref uVar7, ref uVar8 );
    sub_53965( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    if (bParam0)
    {
        if (sub_53752())
        {
            sub_55436( ref cVar3, sub_55382() + 0.03250000, 0.11900000, uVar7, uVar8, 255, 255, 255, 255, 2 );
            DRAW_SPRITE( l_U599[15], sub_55382() + 0.01100000, 0.11900000 + 0.02300000, 0.03100000, 0.04400000, 0.00000000, 255, 255, 255, 255 );
        }
        else
        {
            sub_55436( ref cVar3, sub_55382(), 0.11900000, uVar7, uVar8, 255, 255, 255, 255, 2 );
        }
    }
    else if (sub_53752())
    {
        sub_55436( ref cVar3, sub_55382() + 0.03250000, 0.08500000, uVar7, uVar8, 255, 255, 255, 255, 2 );
        DRAW_SPRITE( l_U599[15], sub_55382() + 0.01100000, 0.08500000 + 0.02300000, 0.03100000, 0.04400000, 0.00000000, 255, 255, 255, 255 );
    }
    else
    {
        sub_55436( ref cVar3, sub_55382(), 0.08500000, uVar7, uVar8, 255, 255, 255, 255, 2 );
    }
    return;
}

int sub_63640()
{
    if (((l_U1309) AND (IS_IN_SPECTATOR_MODE())) AND (l_U1318 > -1))
    {
        if (sub_60934())
        {
            return 1;
        }
        return 0;
    }
    return 0;
}

void sub_63822()
{
    char[16] cVar2;
    unknown uVar6;

    SET_WIDESCREEN_FORMAT( 3 );
    DRAW_SPRITE( l_U599[0], sub_57688() - (0.01400000 / 2), l_U1330 - (0.02000000 / 2), 0.01400000, 0.02000000, 0.00000000, 255, 255, 255, 255 );
    SET_TEXT_SCALE( 0.31500000, 0.43000000 );
    sub_53965( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    StrCopy( ref cVar2, "RADIO_OPT", 16 );
    ConcatString(ref cVar2, l_U1320, 16);
    uVar6 = GET_STRING_WIDTH( ref cVar2 );
    sub_55436( ref cVar2, (sub_57688() - 0.01400000) - l_U1329, l_U1330 + l_U1328, 0.31500000, 0.43000000, 255, 255, 255, 255, 3 );
    DRAW_SPRITE( l_U599[0], ((sub_57688() - (0.01400000 * 1.50000000)) - uVar6) - (l_U1329 * 2), l_U1330 - (0.02000000 / 2), 0.01400000 * -1, 0.02000000, 0.00000000, 255, 255, 255, 255 );
    return;
}

void sub_64137()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    char[32] cVar7;
    unknown uVar15;

    SET_WIDESCREEN_FORMAT( 3 );
    DRAW_SPRITE( l_U599[0], sub_57688() - (0.01400000 / 2), l_U1327 - (0.02000000 / 2), 0.01400000, 0.02000000, 0.00000000, 255, 255, 255, 255 );
    SET_TEXT_SCALE( 0.31500000, 0.43000000 );
    sub_53965( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    if (NOT (l_U1304 == 2))
    {
        StrCopy( ref cVar7, sub_64278(), 32 );
    }
    else
    {
        string(ref cVar7, sub_64346( l_U1318 ), 32);
        ConcatString(ref cVar7, sub_64463( sub_64346( l_U1318 ), 0 ), 32);
        ConcatString(ref cVar7, " : ", 32);
        ConcatString(ref cVar7, sub_64278(), 32);
    }
    SET_TEXT_USE_UNDERSCORE( 1 );
    uVar15 = GET_STRING_WIDTH_WITH_STRING( "STRING", ref cVar7 );
    sub_64713( ref uVar2, ref uVar3, ref uVar4 );
    SET_TEXT_COLOUR( uVar2, uVar3, uVar4, 255 );
    sub_56603( (sub_57688() - 0.01400000) - l_U1329, l_U1327 + l_U1328, 0.31500000, 0.43000000, uVar2, uVar3, uVar4, 255, 3, ref cVar7 );
    SET_TEXT_USE_UNDERSCORE( 0 );
    DRAW_SPRITE( l_U599[0], ((sub_57688() - (0.01400000 * 1.50000000)) - uVar15) - (l_U1329 * 2), l_U1327 - (0.02000000 / 2), 0.01400000 * -1, 0.02000000, 0.00000000, 255, 255, 255, 255 );
    return;
}

string sub_64278()
{
    if (sub_58561( l_U1318 ))
    {
        return GET_PLAYER_NAME( sub_427( l_U1318 ) );
    }
    return "";
}

int sub_64346(int iParam0)
{
    int I;
    int iVar4;
    int Result;

    for ( I = 0; I < 16; I++ )
    {
        iVar4 = l_U662[0]._fU24[I];
        if ((IS_NETWORK_PLAYER_ACTIVE( iVar4 )) AND (NOT l_U1048[iVar4]))
        {
            Result++;
            if (iVar4 == iParam0)
            {
                return Result;
            }
        }
    }
    return 1;
}

void sub_64463(int iParam0, boolean bParam1)
{
    if (bParam1)
    {
        if (iParam0 == 1)
        {
            return GET_STRING_FROM_TEXT_FILE( "ST_" );
        }
        if (iParam0 == 2)
        {
            return GET_STRING_FROM_TEXT_FILE( "ND_" );
        }
        if (iParam0 == 3)
        {
            return GET_STRING_FROM_TEXT_FILE( "RD_" );
        }
        return GET_STRING_FROM_TEXT_FILE( "TH_" );
    }
    if (iParam0 == 1)
    {
        return GET_STRING_FROM_TEXT_FILE( "ST" );
    }
    if (iParam0 == 2)
    {
        return GET_STRING_FROM_TEXT_FILE( "ND" );
    }
    if (iParam0 == 3)
    {
        return GET_STRING_FROM_TEXT_FILE( "RD" );
    }
    return GET_STRING_FROM_TEXT_FILE( "TH" );
}

void sub_64713(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (sub_58561( l_U1318 ))
    {
        if (l_U1304 == 1)
        {
            GET_TEAM_RGB_COLOUR( GET_PLAYER_TEAM( sub_427( l_U1318 ) ), uParam0, uParam1, uParam2 );
        }
        else
        {
            GET_PLAYER_RGB_COLOUR( sub_427( l_U1318 ), uParam0, uParam1, uParam2 );
        }
    }
    return;
}

void sub_65145()
{
    g_U12 = 1;
    sub_65158();
    return;
}

void sub_65158()
{
    FORCE_LOADING_SCREEN( 1 );
    while (true)
    {
        WAIT( 0 );
    }
    return;
}

void sub_65337(unknown uParam0)
{
    unknown Result;
    unknown uVar4;

    GET_FRONTEND_DESIGN_VALUE( uParam0, ref Result, ref uVar4 );
    return Result;
}

void sub_65370(unknown uParam0)
{
    unknown uVar3;
    unknown Result;

    GET_FRONTEND_DESIGN_VALUE( uParam0, ref uVar3, ref Result );
    return Result;
}

void sub_65763()
{
    int I;
    int Result;

    if (l_U960)
    {
        for ( I = 0; I < 16; I++ )
        {
            if ((l_U831[I]._fU4) AND (NOT l_U831[I]._fU8))
            {
                Result++;
            }
        }
        return Result;
    }
    for ( I = 0; I < 16; I++ )
    {
        if ((IS_NETWORK_PLAYER_ACTIVE( I )) AND (NOT l_U1048[I]))
        {
            Result++;
        }
    }
    return Result;
}

void sub_65911()
{
    int I;
    int Result;
    int[8] iVar4;

    array(ref iVar4, 8);
    if (l_U960)
    {
        for ( I = 0; I < 16; I++ )
        {
            if ((l_U831[I]._fU4) AND (NOT l_U831[I]._fU8))
            {
                if (l_U831[I]._fU12 > -1)
                {
                    if (NOT iVar4[l_U831[I]._fU12])
                    {
                        Result++;
                        iVar4[l_U831[I]._fU12] = 1;
                    }
                }
            }
        }
        return Result;
    }
    for ( I = 0; I < 16; I++ )
    {
        if ((IS_NETWORK_PLAYER_ACTIVE( I )) AND (NOT l_U1048[I]))
        {
            if ((GET_PLAYER_TEAM( sub_427( I ) )) > -1)
            {
                if (NOT (iVar4[GET_PLAYER_TEAM( sub_427( I ) )]))
                {
                    Result++;
                    iVar4[GET_PLAYER_TEAM( sub_427( I ) )] = 1;
                }
            }
        }
    }
    return Result;
}

int sub_66276()
{
    int I;
    int iVar3;

    iVar3 = -1;
    for ( I = 0; I < 8; I++ )
    {
        if ((sub_66302( I )) > 0)
        {
            if (iVar3 == -1)
            {
                iVar3 = l_U1039[I];
            }
            else if (iVar3 != l_U1039[I])
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_66302(int iParam0)
{
    int I;
    int Result;

    if (l_U960)
    {
        for ( I = 0; I < 16; I++ )
        {
            if ((l_U831[I]._fU4) AND (NOT l_U831[I]._fU8))
            {
                if (l_U831[I]._fU12 == iParam0)
                {
                    Result++;
                }
            }
        }
        return Result;
    }
    for ( I = 0; I < 16; I++ )
    {
        if ((IS_NETWORK_PLAYER_ACTIVE( I )) AND (NOT l_U1048[I]))
        {
            if ((GET_PLAYER_TEAM( sub_427( I ) )) == iParam0)
            {
                Result++;
            }
        }
    }
    return Result;
}

int sub_66585()
{
    int I;
    int iVar3;

    iVar3 = -1;
    for ( I = 0; I < 16; I++ )
    {
        if (sub_7176( I ))
        {
            if (NOT (sub_7228( I )))
            {
                if (iVar3 == -1)
                {
                    iVar3 = l_U662[sub_7288()]._fU24[I];
                }
                else if (iVar3 != l_U662[sub_7288()]._fU24[I])
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}

int sub_67866(int iParam0)
{
    int I;

    for ( I = 0; I < 8; I++ )
    {
        if (I != iParam0)
        {
            if ((sub_66302( I )) > 0)
            {
                if (l_U1039[I] == l_U1039[iParam0])
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_68001(int iParam0)
{
    int I;
    int Result;

    if (sub_67866( iParam0 ))
    {
        for ( I = 0; I < 8; I++ )
        {
            if ((sub_66302( l_U1030[I] )) > 0)
            {
                Result++;
                if (l_U1039[l_U1030[I]] == l_U1039[iParam0])
                {
                    return Result;
                }
            }
        }
    }
    else
    {
        for ( I = 0; I < 8; I++ )
        {
            if ((sub_66302( l_U1030[I] )) > 0)
            {
                Result++;
                if (l_U1030[I] == iParam0)
                {
                    return Result;
                }
            }
        }
    }
    return 1;
}

string sub_68214(int iParam0, boolean bParam1)
{
    int I;
    int iVar5;

    if (l_U1302)
    {
        if (l_U1303 == 0)
        {
            switch (iParam0)
            {
                case 0: return "MP_CUST_TEAM_0";
                case 1: return "MP_CUST_TEAM_1";
                case 2: return "MP_CUST_TEAM_2";
                case 3: return "MP_CUST_TEAM_3";
                case 4: return "MP_CUST_TEAM_4";
                case 5: return "MP_CUST_TEAM_5";
                case 6: return "MP_CUST_TEAM_6";
                case 7: return "MP_CUST_TEAM_7";
            }
        }
        else if (l_U1303 == 1)
        {
            switch (iParam0)
            {
                case 0: return "MP_ALT_TEAM_0";
                case 1: return "MP_ALT_TEAM_1";
                case 2: return "MP_ALT_TEAM_2";
                case 3: return "MP_ALT_TEAM_3";
                case 4: return "MP_ALT_TEAM_4";
                case 5: return "MP_ALT_TEAM_5";
                case 6: return "MP_ALT_TEAM_6";
                case 7: return "MP_ALT_TEAM_7";
            }
        }
        else
        {
            switch (iParam0)
            {
                case 0: return "MP_ALT2_TEAM_0";
                case 1: return "MP_ALT2_TEAM_1";
                case 2: return "MP_ALT2_TEAM_2";
                case 3: return "MP_ALT2_TEAM_3";
                case 4: return "MP_ALT2_TEAM_4";
                case 5: return "MP_ALT2_TEAM_5";
                case 6: return "MP_ALT2_TEAM_6";
                case 7: return "MP_ALT2_TEAM_7";
            }
        }
    }
    if (bParam1)
    {
        for ( I = 0; I < 8; I++ )
        {
            if ((sub_66302( I )) > 0)
            {
                if (I == iParam0)
                {
                    switch (iVar5)
                    {
                        case 0: return "MP_TEAM_0";
                        case 1: return "MP_TEAM_1";
                        case 2: return "MP_TEAM_2";
                        case 3: return "MP_TEAM_3";
                        case 4: return "MP_TEAM_4";
                        case 5: return "MP_TEAM_5";
                        case 6: return "MP_TEAM_6";
                        case 7: return "MP_TEAM_7";
                    }
                }
                iVar5++;
            }
        }
    }
    else
    {
        for ( I = 0; I < 8; I++ )
        {
            if ((sub_66302( I )) > 0)
            {
                if (I == iParam0)
                {
                    switch (iVar5)
                    {
                        case 0: return "MP_TEAM_L0";
                        case 1: return "MP_TEAM_L1";
                        case 2: return "MP_TEAM_L2";
                        case 3: return "MP_TEAM_L3";
                        case 4: return "MP_TEAM_L4";
                        case 5: return "MP_TEAM_L5";
                        case 6: return "MP_TEAM_L6";
                        case 7: return "MP_TEAM_L7";
                    }
                }
                iVar5++;
            }
        }
    }
    return "MP_TEAM_0";
}

void sub_69978(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_54302( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_STRING( uParam0, uParam10 );
    DISPLAY_TEXT_WITH_STRING( uParam1, uParam2, uParam0, uParam10 );
    return Result;
}

float sub_70831(unknown uParam0)
{
    if (GET_IS_WIDESCREEN())
    {
        switch (uParam0)
        {
            case 1: return 0.37000000;
            case 2:
            case 7: return 0.10280000;
            case 3: return 0.13000000;
            case 4: return 0.13000000;
            case 5:
            case 6: return 0.13000000;
        }
    }
    else
    {
        switch (uParam0)
        {
            case 1: return 0.31500000;
            case 2:
            case 7: return 0.06500000;
            case 3: return 0.06120000;
            case 4: return 0.09750000;
            case 5:
            case 6: return 0.11450000;
        }
    }
    return 0.10280000;
}

void sub_71729(unknown uParam0, unknown uParam1, float fParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, int iParam9, int iParam10, int iParam11, unknown uParam12)
{
    int J;
    int iVar16;
    int I;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    int iVar21;
    int iVar22;
    float fVar23;
    unknown uVar24;
    int iVar25;

    for ( iVar16 = 0; iVar16 < 8; iVar16++ )
    {
        if ((sub_66302( l_U1030[iVar16] )) > 0)
        {
            if ((iVar25 >= iParam11) AND (iVar25 < (iParam11 + iParam10)))
            {
                fVar23 = uParam1;
                iVar21 = 0;
                if (iParam9 != 6)
                {
                    if (iParam9 != 7)
                    {
                        fParam2 += uParam5;
                    }
                }
                for ( I = 0; I < 7; I++ )
                {
                    if (((uParam0^)[I] == sub_7288()) || ((uParam0^)[I] == 0))
                    {
                        if (l_U662[(uParam0^)[I]]._fU16 > 0)
                        {
                            GET_TEAM_RGB_COLOUR( l_U1030[iVar16], ref uVar18, ref uVar19, ref uVar20 );
                            if ((iParam9 == 6) || (iParam9 == 7))
                            {
                                sub_53965( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                                iVar22 = 1;
                            }
                            else
                            {
                                sub_53965( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                                iVar22 = 3;
                            }
                            if (l_U662[(uParam0^)[I]]._fU16 != 1)
                            {
                                if ((iParam9 == 6) || (iParam9 == 7))
                                {
                                    fVar23 += (sub_70831( l_U662[(uParam0^)[I]]._fU16 )) * 0.50000000;
                                }
                            }
                            switch (l_U662[(uParam0^)[I]]._fU16)
                            {
                                case 1:
                                if ((iParam9 == 6) || (iParam9 == 7))
                                {
                                    sub_53965( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                                    sub_55436( sub_68214( l_U1030[iVar16], 1 ), fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, 2 );
                                    fVar23 += (sub_70831( l_U662[(uParam0^)[I]]._fU16 )) - uVar24;
                                }
                                else if (iParam9 != 0)
                                {
                                    if (iParam9 != 1)
                                    {
                                        if (iParam9 != 9)
                                        {
                                            if (iParam9 != 10)
                                            {
                                                fVar23 += 0.01700000;
                                            }
                                        }
                                    }
                                }
                                sub_55436( sub_68214( l_U1030[iVar16], 1 ), fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, 2 );;
                                iVar21++;
                                break;
                                case 2:
                                case 7:
                                sub_54587( fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, iVar22, l_U1039[l_U1030[iVar16]] );
                                iVar21++;
                                break;
                                case 3:
                                if (l_U1039[l_U1030[iVar16]] > 0)
                                {
                                    sub_72515( fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, iVar22, l_U1021[l_U1030[iVar16]] + 1 );
                                }
                                iVar21++;
                                break;
                                case 4:
                                if (l_U1039[l_U1030[iVar16]] < 5940000)
                                {
                                    sub_72789( fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, iVar22, l_U1039[l_U1030[iVar16]], 1.00000000 );
                                }
                                iVar21++;
                                break;
                                case 5:
                                case 6:
                                sub_54262( "CASH", fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, iVar22, l_U1039[l_U1030[iVar16]] );
                                iVar21++;
                                break;
                            }
                            if (l_U662[(uParam0^)[I]]._fU16 != 1)
                            {
                                if ((iParam9 == 6) || (iParam9 == 7))
                                {
                                    fVar23 += (sub_70831( l_U662[(uParam0^)[I]]._fU16 )) * 0.50000000;
                                }
                            }
                            if (iVar21 == 2)
                            {
                                I = 7;
                            }
                        }
                    }
                    else if ((iParam9 == 6) || (iParam9 == 7))
                    {
                        fVar23 += sub_70831( 2 );
                    }
                }
                if ((iParam9 == 6) || (iParam9 == 7))
                {
                    fParam2 += uParam5;
                }
                if (iParam9 != 6)
                {
                    if (iParam9 != 7)
                    {
                        if (GET_IS_WIDESCREEN())
                        {
                            if ((sub_7667() + sub_18752()) > 22)
                            {
                                fParam2 += -0.00250000;
                            }
                            else
                            {
                                fParam2 += -0.00300000;
                            }
                        }
                        else
                        {
                            fParam2 += 0.00000000;
                        }
                    }
                }
            }
            iVar25++;
            for ( J = 0; J < 16; J++ )
            {
                if (sub_7176( l_U662[0]._fU24[J] ))
                {
                    if ((sub_74657( l_U662[0]._fU24[J] )) == l_U1030[iVar16])
                    {
                        if ((iVar25 >= iParam11) AND (iVar25 < (iParam11 + iParam10)))
                        {
                            sub_74783( l_U662[0]._fU24[J], uParam0, uParam1, ref fParam2, uParam6, uParam7, uParam8, iParam9, 0 );
                        }
                        iVar25++;
                    }
                }
            }
        }
    }
    return;
}

void sub_72515(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, int iParam9)
{
    if (iParam9 == 1)
    {
        return sub_55436( "FIRST", uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8 );
    }
    if (iParam9 == 2)
    {
        return sub_55436( "SECOND", uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8 );
    }
    if (iParam9 == 3)
    {
        return sub_55436( "THIRD", uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8 );
    }
    return sub_54262( "NTH", uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, iParam9 );
}

float sub_72789(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8, int iParam9, unknown uParam10)
{
    int iVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    int iVar17;
    int iVar18;
    int iVar19;
    int iVar20;
    int iVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;

    if (iParam9 < 0)
    {
        iParam9 = 0;
    }
    else if (iParam9 > 5999990)
    {
        iParam9 = 5999990;
    }
    iVar13 = iParam9 / 10;
    iVar14 = iParam9 / 1000;
    iVar15 = iVar14 / 60;
    iVar13 -= iVar14 * 100;
    iVar14 -= iVar15 * 60;
    iVar16 = iVar13 / 10;
    iVar17 = iVar13 mod 10;
    iVar18 = iVar14 / 10;
    iVar19 = iVar14 mod 10;
    iVar20 = iVar15 / 10;
    iVar21 = iVar15 mod 10;
    SET_TEXT_SCALE( uParam2, uParam3 );
    fVar22 = (GET_STRING_WIDTH_WITH_STRING( "STRING", "0" )) * uParam10;
    fVar23 = (GET_STRING_WIDTH( "COLON" )) * uParam10;
    fVar24 = fVar22 * 0.50000000;
    fVar25 = fVar23 * 0.50000000;
    if (iParam8 == 2)
    {
        fVar26 = uParam0 + (fVar22 / 2);
        sub_54587( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar20 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_54587( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar21 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_55436( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 += fVar25;
        fVar26 += fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_54587( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar18 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_54587( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar19 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_55436( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 += fVar25;
        fVar26 += fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_54587( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar16 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_54587( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar17 );
    }
    else if (iParam8 == 3)
    {
        fVar26 = uParam0 - (fVar22 / 2);
        sub_54587( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar17 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_54587( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar16 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_55436( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 -= fVar25;
        fVar26 -= fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_54587( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar19 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_54587( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar18 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_55436( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 -= fVar25;
        fVar26 -= fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_54587( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar21 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_54587( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar20 );
    }
    else
    {
        fVar26 = uParam0 + fVar24;
        sub_54587( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar19 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_55436( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_54587( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar16 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_54587( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar17 );
        fVar26 = uParam0 - fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_54587( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar18 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_55436( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_54587( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar21 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_54587( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar20 );
    }
    return (6 * fVar22) + (2 * fVar23);
}

void sub_74657(unknown uParam0)
{
    if (l_U960)
    {
        return l_U831[uParam0]._fU12;
    }
    return GET_PLAYER_TEAM( sub_427( uParam0 ) );
}

void sub_74783(int iParam0, unknown uParam1, float fParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7, unknown uParam8)
{
    int I;
    int iVar12;
    int iVar13;
    int iVar14;
    unknown uVar15;
    int iVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    float fVar20;
    unknown uVar21;
    unknown uVar22;

    sub_74800( iParam0, ref iVar12, ref iVar13, ref iVar14 );
    if ((l_U1351) AND ((iParam7 == 2) || (iParam7 == 3)))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( iParam0 ))
        {
            if ((IS_CHAR_DEAD( sub_465( iParam0 ) )) || (l_U1065[iParam0]))
            {
                GET_HUD_COLOUR( 50, ref iVar12, ref iVar13, ref iVar14, ref uVar15 );
            }
        }
    }
    if (iParam7 != 6)
    {
        if (iParam7 != 7)
        {
            if (iParam7 != 8)
            {
                (uParam3^) += uParam6;
            }
        }
    }
    for ( I = 0; I < 7; I++ )
    {
        if ((uParam1^)[I] > -1)
        {
            if (l_U662[(uParam1^)[I]]._fU16 > 0)
            {
                iVar16 = 3;
                if (((iParam7 == 6) || (iParam7 == 7)) || (iParam7 == 8))
                {
                    iVar16 = 1;
                }
                sub_53965( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                if (l_U662[(uParam1^)[I]]._fU16 != 1)
                {
                    if (((iParam7 == 6) || (iParam7 == 7)) || (iParam7 == 8))
                    {
                        fParam2 += (sub_70831( l_U662[(uParam1^)[I]]._fU16 )) * 0.50000000;
                    }
                }
                switch (l_U662[(uParam1^)[I]]._fU16)
                {
                    case 1:
                    if (((iParam7 == 6) || (iParam7 == 7)) || (iParam7 == 8))
                    {
                        if (sub_7228( iParam0 ))
                        {
                            iVar12 = 60;
                            iVar13 = 60;
                            iVar14 = 60;
                        }
                        else
                        {
                            sub_74800( iParam0, ref iVar12, ref iVar13, ref iVar14 );
                        }
                        if (l_U102)
                        {
                            if (N_604003528())
                            {
                                sub_56603( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, 2, "WWWWWWWWWWWWWWW" );
                            }
                            else
                            {
                                sub_56603( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, 2, "WWWWWWWWWWWWWWWW" );
                            }
                        }
                        else
                        {
                            SET_TEXT_USE_UNDERSCORE( 1 );
                            sub_56603( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, 2, sub_75571( iParam0 ) );
                            SET_TEXT_USE_UNDERSCORE( 0 );
                        }
                        if ((sub_53752()) || (NOT N_604003528()))
                        {
                            if (IS_NETWORK_PLAYER_ACTIVE( iParam0 ))
                            {
                                if (iParam0 != GET_PLAYER_ID())
                                {
                                    l_U1257[iParam0] = GET_PLAYER_RANK_LEVEL_DURING_MP( iParam0 );
                                }
                                if ((GET_PLAYER_RANK_LEVEL_DURING_MP( iParam0 )) > -1)
                                {
                                    if (GET_IS_WIDESCREEN())
                                    {
                                        DRAW_SPRITE( l_U599[17 + (GET_PLAYER_RANK_LEVEL_DURING_MP( iParam0 ))], fParam2 + 0.33450000, (uParam3^) + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
                                    }
                                    else if (N_604003528())
                                    {
                                        DRAW_SPRITE( l_U599[17 + (GET_PLAYER_RANK_LEVEL_DURING_MP( iParam0 ))], fParam2 + 0.27500000, (uParam3^) + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
                                    }
                                    else
                                    {
                                        DRAW_SPRITE( l_U599[17 + (GET_PLAYER_RANK_LEVEL_DURING_MP( iParam0 ))], fParam2 + 0.29500000, (uParam3^) + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
                                    }
                                }
                            }
                            else if (l_U1257[iParam0] > -1)
                            {
                                if (GET_IS_WIDESCREEN())
                                {
                                    DRAW_SPRITE( l_U599[17 + l_U1257[iParam0]], fParam2 + 0.33450000, (uParam3^) + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
                                }
                                else
                                {
                                    DRAW_SPRITE( l_U599[17 + l_U1257[iParam0]], fParam2 + 0.27500000, (uParam3^) + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
                                }
                            }
                        }
                        fParam2 += (sub_70831( 1 )) - uVar19;
                    }
                    else if ((iParam7 == 9) || (iParam7 == 10))
                    {
                        if (GET_IS_WIDESCREEN())
                        {
                            fVar20 = -0.00100000;
                        }
                        else
                        {
                            fVar20 = 0.00000000;
                        }
                    }
                    else if (iParam7 != 0)
                    {
                        if (iParam7 != 1)
                        {
                            if (l_U1048[iParam0])
                            {
                                iVar12 = 60;
                                iVar13 = 60;
                                iVar14 = 60;
                            }
                            fParam2 += 0.01700000;
                        }
                    }
                    if (l_U102)
                    {
                        if ((iParam7 == 9) || (iParam7 == 10))
                        {
                            if (GET_IS_WIDESCREEN())
                            {
                                if (N_604003528())
                                {
                                    uVar22 = sub_76563( 0.29700000, uParam4, sub_76361( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, "WWWWWWWWWWWWWWW" ) );
                                }
                                else
                                {
                                    uVar22 = sub_76563( 0.29700000, uParam4, sub_76361( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, "WWWWWWWWWWWWWWWW" ) );
                                }
                            }
                            else if (N_604003528())
                            {
                                uVar22 = sub_76563( 0.23900000, uParam4, sub_76361( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, "WWWWWWWWWWWWWWW" ) );
                            }
                            else
                            {
                                uVar22 = sub_76563( 0.23900000, uParam4, sub_76361( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, "WWWWWWWWWWWWWWWW" ) );
                            }
                            sub_53965( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                            SET_TEXT_USE_UNDERSCORE( 1 );
                        }
                        else
                        {
                            uVar22 = uParam4;
                        }
                        if (N_604003528())
                        {
                            sub_56603( fParam2, (uParam3^) + fVar20, uVar22, uParam5, iVar12, iVar13, iVar14, 255, 2, "WWWWWWWWWWWWWWW" );
                        }
                        else
                        {
                            sub_56603( fParam2, (uParam3^) + fVar20, uVar22, uParam5, iVar12, iVar13, iVar14, 255, 2, "WWWWWWWWWWWWWWWW" );
                        }
                    }
                    else if ((iParam7 == 9) || (iParam7 == 10))
                    {
                        if (GET_IS_WIDESCREEN())
                        {
                            uVar22 = sub_76563( 0.29700000, uParam4, sub_76361( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, sub_75571( iParam0 ) ) );
                        }
                        else
                        {
                            uVar22 = sub_76563( 0.23900000, uParam4, sub_76361( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, sub_75571( iParam0 ) ) );
                        }
                        sub_53965( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                        SET_TEXT_USE_UNDERSCORE( 1 );
                    }
                    else
                    {
                        uVar22 = uParam4;
                    }
                    SET_TEXT_USE_UNDERSCORE( 1 );
                    sub_56603( fParam2, (uParam3^) + fVar20, uVar22, uParam5, iVar12, iVar13, iVar14, 255, 2, sub_75571( iParam0 ) );
                    SET_TEXT_USE_UNDERSCORE( 0 );;;
                    break;
                    case 2:
                    case 7:
                    if (NOT (sub_7228( iParam0 )))
                    {
                        sub_54587( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, l_U662[(uParam1^)[I]]._fU24[iParam0] );
                    }
                    break;
                    case 3:
                    if (NOT (sub_7228( iParam0 )))
                    {
                        if (l_U662[(uParam1^)[I]]._fU24[iParam0] > 0)
                        {
                            sub_72515( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, sub_7097( iParam0 ) );
                        }
                    }
                    break;
                    case 4:
                    if (NOT (sub_7228( iParam0 )))
                    {
                        if ((l_U662[(uParam1^)[I]]._fU24[iParam0] < 2147483647) AND (l_U662[(uParam1^)[I]]._fU24[iParam0] > -2147483648))
                        {
                            sub_72789( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, l_U662[(uParam1^)[I]]._fU24[iParam0], 1.00000000 );
                        }
                    }
                    break;
                    case 5:
                    case 6:
                    if ((NOT l_U1352) || (iParam7 != 6))
                    {
                        if (NOT (sub_7228( iParam0 )))
                        {
                            if ((((sub_18610()) || (sub_18655())) AND ((sub_74657( iParam0 )) > -1)) AND (sub_6720() != 1))
                            {
                                sub_54262( "CASH", fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, (l_U1039[sub_74657( iParam0 )]) / (sub_66302( sub_74657( iParam0 ) )) );
                            }
                            else
                            {
                                sub_54262( "CASH", fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, l_U662[(uParam1^)[I]]._fU24[iParam0] );
                            }
                        }
                    }
                    break;
                }
                if (l_U662[(uParam1^)[I]]._fU16 != 1)
                {
                    if (((iParam7 == 6) || (iParam7 == 7)) || (iParam7 == 8))
                    {
                        fParam2 += (sub_70831( l_U662[(uParam1^)[I]]._fU16 )) * 0.50000000;
                    }
                }
            }
        }
    }
    if (((iParam7 == 6) || (iParam7 == 7)) || (iParam7 == 8))
    {
        (uParam3^) += uParam6;
    }
    return;
}

void sub_74800(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (l_U960)
    {
        (uParam1^) = l_U831[uParam0]._fU20;
        (uParam2^) = l_U831[uParam0]._fU24;
        (uParam3^) = l_U831[uParam0]._fU28;
    }
    else
    {
        sub_74879( sub_427( uParam0 ), uParam1, uParam2, uParam3 );
    }
    return;
}

void sub_74879(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (((GET_PLAYER_TEAM( uParam0 )) == -1) || (sub_6720() == 16))
    {
        GET_PLAYER_RGB_COLOUR( uParam0, uParam1, uParam2, uParam3 );
    }
    else
    {
        GET_TEAM_RGB_COLOUR( GET_PLAYER_TEAM( uParam0 ), uParam1, uParam2, uParam3 );
    }
    return;
}

void sub_75571(unknown uParam0)
{
    if (l_U960)
    {
        return l_U831[uParam0]._fU0;
    }
    return GET_PLAYER_NAME( sub_427( uParam0 ) );
}

void sub_76361(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    unknown Result;

    SET_TEXT_FONT( uParam0 );
    SET_TEXT_BACKGROUND( 0 );
    SET_TEXT_DROPSHADOW( 0, 0, 0, 0, 255 );
    SET_TEXT_EDGE( 0, 0, 0, 0, 255 );
    switch (uParam3)
    {
        case 1:
        SET_TEXT_BACKGROUND( 1 );
        break;
        case 2:
        SET_TEXT_DROPSHADOW( uParam4, 0, 0, 0, 255 );
        break;
        case 3:
        SET_TEXT_EDGE( uParam4, 0, 0, 0, 255 );
        break;
    }
    SET_TEXT_PROPORTIONAL( 1 );
    SET_TEXT_WRAP( uParam1, uParam2 );
    SET_TEXT_SCALE( uParam5, uParam6 );
    Result = GET_STRING_WIDTH_WITH_STRING( "STRING", uParam7 );
    return Result;
}

void sub_76563(float fParam0, unknown Result, float fParam2)
{
    if (fParam2 > fParam0)
    {
        return (fParam0 * Result) / fParam2;
        break;
    }
    return Result;
}

void sub_77893(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7, int iParam8, unknown uParam9)
{
    int I;
    int iVar13;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_7176( l_U662[0]._fU24[I] ))
        {
            if ((iVar13 >= iParam8) AND (iVar13 < (iParam8 + iParam7)))
            {
                sub_74783( l_U662[0]._fU24[I], uParam0, uParam1, ref uParam2, uParam3, uParam4, uParam5, uParam6, 0 );
            }
            iVar13++;
        }
    }
    return;
}

int sub_79941(int iParam0, boolean bParam1)
{
    int J;
    int iVar5;
    int I;
    int iVar7;
    int[16] iVar8;

    array(ref iVar8, 16);
    l_U966 = 1;
    if (l_U962)
    {
        if (NOT NETWORK_END_SESSION_PENDING())
        {
            l_U962 = 0;
            return 1;
        }
    }
    else if (NETWORK_START_SESSION_SUCCEEDED())
    {
        if (NOT l_U1048[GET_PLAYER_ID()])
        {
            if (sub_65763() > 1)
            {
                if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
                {
                    if ((sub_18610()) || (sub_18655()))
                    {
                        if (NOT sub_66276())
                        {
                            if (((GET_PLAYER_TEAM( sub_1079() )) == l_U1030[0]) || ((l_U1039[GET_PLAYER_TEAM( sub_1079() )]) == l_U1039[l_U1030[0]]))
                            {
                                REGISTER_MULTIPLAYER_GAME_WIN( GET_PLAYER_ID(), 0 );
                            }
                        }
                    }
                    else if (sub_10749())
                    {
                        if (bParam1)
                        {
                            REGISTER_MULTIPLAYER_GAME_WIN( GET_PLAYER_ID(), iParam0 );
                        }
                    }
                    else if ((sub_7132( GET_PLAYER_ID() )) == 1)
                    {
                        if (NOT sub_66585())
                        {
                            REGISTER_MULTIPLAYER_GAME_WIN( GET_PLAYER_ID(), 0 );
                        }
                    };;;
                }
            }
            if (NOT sub_48433())
            {
                for ( J = 0; J < 16; J++ )
                {
                    iVar8[J] = 1;
                    if (IS_NETWORK_PLAYER_ACTIVE( J ))
                    {
                        if (NOT l_U1048[J])
                        {
                            for ( I = 0; I < 7; I++ )
                            {
                                switch (l_U662[I]._fU92)
                                {
                                    case 20:
                                    if ((sub_18610()) || (sub_18655()))
                                    {
                                        if (sub_6720() != 1)
                                        {
                                            l_U662[I]._fU24[J] = (l_U1039[sub_74657( J )]) / (sub_66302( sub_74657( J ) ));
                                        }
                                    }
                                    iVar8[J] += l_U662[I]._fU24[J] * 10000;
                                    break;
                                    case 3:
                                    case 5:
                                    case 7:
                                    case 8:
                                    iVar8[J] += l_U662[I]._fU24[J];
                                    break;
                                    case 4:
                                    iVar8[J] -= l_U662[I]._fU24[J];
                                    break;
                                    case 6:
                                    iVar8[J] -= l_U662[I]._fU24[J] * 2;
                                    break;
                                }
                            }
                        }
                    }
                    if (iVar8[J] == 0)
                    {
                        iVar8[J] = 1;
                    }
                }
                for ( J = 0; J < 16; J++ )
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( J ))
                    {
                        if (NOT l_U1048[J])
                        {
                            REGISTER_NETWORK_BEST_GAME_SCORES( J, 24, iVar8[J] );
                            if (sub_10749())
                            {
                                REGISTER_NETWORK_BEST_GAME_SCORES( J, 25, iParam0 * -1 );
                            }
                        }
                    }
                }
                for ( J = 0; J < 16; J++ )
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( J ))
                    {
                        if (NOT l_U1048[J])
                        {
                            if (sub_10749())
                            {
                                UPDATE_NETWORK_STATISTICS( J, 24, iVar8[J], -1 );
                                UPDATE_NETWORK_STATISTICS( J, 25, iParam0 * -1, -1 );
                            }
                            else
                            {
                                UPDATE_NETWORK_STATISTICS( J, 24, iVar8[J], GET_PLAYER_TEAM( sub_427( J ) ) );
                            }
                        }
                    }
                }
            }
            for ( J = 0; J < 16; J++ )
            {
                if (IS_NETWORK_PLAYER_ACTIVE( J ))
                {
                    if (NOT l_U1048[J])
                    {
                        if ((sub_18610()) || (sub_18655()))
                        {
                            UPDATE_NETWORK_STATISTICS( J, 0, 1, GET_PLAYER_TEAM( sub_427( J ) ) );
                            if (((sub_66276()) || (sub_65763() < 2)) || (sub_65911() < 2))
                            {
                                UPDATE_NETWORK_STATISTICS( J, 1, 0, GET_PLAYER_TEAM( sub_427( J ) ) );
                            }
                            else if (((GET_PLAYER_TEAM( sub_427( J ) )) == l_U1030[0]) || ((l_U1039[GET_PLAYER_TEAM( sub_427( J ) )]) == l_U1039[l_U1030[0]]))
                            {
                                UPDATE_NETWORK_STATISTICS( J, 1, 1, GET_PLAYER_TEAM( sub_427( J ) ) );
                            }
                            else
                            {
                                UPDATE_NETWORK_STATISTICS( J, 1, 0, GET_PLAYER_TEAM( sub_427( J ) ) );
                            }
                        }
                        else
                        {
                            UPDATE_NETWORK_STATISTICS( J, 0, 1, -1 );
                            if (sub_10749())
                            {
                                if ((((sub_7132( J )) == 1) AND (sub_65763() > 1)) AND (NOT sub_66585()))
                                {
                                    UPDATE_NETWORK_STATISTICS( J, 1, 1, -1 );
                                }
                                else
                                {
                                    UPDATE_NETWORK_STATISTICS( J, 1, 0, -1 );
                                }
                                UPDATE_NETWORK_STATISTICS( J, 22, iParam0, -1 );
                                if (bParam1)
                                {
                                    UPDATE_NETWORK_STATISTICS( J, 2, 1, -1 );
                                }
                                else
                                {
                                    UPDATE_NETWORK_STATISTICS( J, 2, 0, -1 );
                                }
                            }
                            else if ((((sub_7132( J )) == 1) AND (sub_65763() > 1)) AND (NOT sub_66585()))
                            {
                                UPDATE_NETWORK_STATISTICS( J, 1, 1, GET_PLAYER_TEAM( sub_427( J ) ) );
                            }
                            else
                            {
                                UPDATE_NETWORK_STATISTICS( J, 1, 0, GET_PLAYER_TEAM( sub_427( J ) ) );
                            }
                        }
                    }
                }
            }
            if (sub_65763() > 1)
            {
                if ((sub_18610()) || (sub_18655()))
                {
                    if (sub_65911() > 1)
                    {
                        iVar7 = sub_65911() - 1;
                        I = iVar7;
                        for ( iVar5 = 0; iVar5 < 8; iVar5++ )
                        {
                            if ((sub_66302( l_U1030[iVar5] )) > 0)
                            {
                                for ( J = 0; J < 16; J++ )
                                {
                                    if (IS_NETWORK_PLAYER_ACTIVE( J ))
                                    {
                                        if ((GET_PLAYER_TEAM( sub_427( J ) )) == l_U1030[iVar5])
                                        {
                                            if (NOT l_U1048[J])
                                            {
                                                UPDATE_NETWORK_RELATIVE_SCORE( J, iVar7, GET_PLAYER_TEAM( sub_427( J ) ) );
                                            }
                                        }
                                    }
                                }
                                I--;
                                if ((iVar5 + 1) < 8)
                                {
                                    if (l_U1039[l_U1030[iVar5]] != (l_U1039[l_U1030[iVar5 + 1]]))
                                    {
                                        iVar7 = I;
                                    }
                                }
                            }
                        }
                    }
                }
                else
                {
                    iVar7 = sub_65763() - 1;
                    I = iVar7;
                    for ( J = 0; J < 16; J++ )
                    {
                        if (IS_NETWORK_PLAYER_ACTIVE( l_U662[0]._fU24[J] ))
                        {
                            if (NOT l_U1048[l_U662[0]._fU24[J]])
                            {
                                UPDATE_NETWORK_RELATIVE_SCORE( l_U662[0]._fU24[J], iVar7, -1 );
                                I--;
                                if ((J + 1) < 16)
                                {
                                    if (l_U662[sub_7288()]._fU24[l_U662[0]._fU24[J]] != (l_U662[sub_7288()]._fU24[l_U662[0]._fU24[J + 1]]))
                                    {
                                        iVar7 = I;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            for ( I = 0; I < 7; I++ )
            {
                if (((((l_U662[I]._fU16 != 0) AND (l_U662[I]._fU16 != 1)) AND (l_U662[I]._fU92 != -1)) AND (l_U662[I]._fU92 != -2)) AND (l_U662[I]._fU92 != -3))
                {
                    for ( J = 0; J < 16; J++ )
                    {
                        if (IS_NETWORK_PLAYER_ACTIVE( J ))
                        {
                            if (NOT l_U1048[J])
                            {
                                if (sub_10749())
                                {
                                    UPDATE_NETWORK_STATISTICS( J, l_U662[I]._fU92, l_U662[I]._fU24[J], -1 );
                                }
                                else
                                {
                                    UPDATE_NETWORK_STATISTICS( J, l_U662[I]._fU92, l_U662[I]._fU24[J], GET_PLAYER_TEAM( sub_427( J ) ) );
                                }
                            }
                        }
                    }
                }
            }
            if (sub_10749())
            {
                if ((iParam0 != 2147483647) AND (iParam0 != 0))
                {
                    for ( J = 0; J < 16; J++ )
                    {
                        if (IS_NETWORK_PLAYER_ACTIVE( J ))
                        {
                            if (NOT l_U1048[J])
                            {
                                UPDATE_NETWORK_STATISTICS( J, 22, iParam0, -1 );
                            }
                        }
                    }
                }
            }
            if (sub_48433())
            {
                for ( I = 0; I < 7; I++ )
                {
                    if (l_U662[I]._fU92 == 23)
                    {
                        for ( J = 0; J < 16; J++ )
                        {
                            if (IS_NETWORK_PLAYER_ACTIVE( J ))
                            {
                                if (NOT l_U1048[J])
                                {
                                    UPDATE_NETWORK_STATISTICS( J, 24, l_U662[I]._fU24[J] * -1, GET_PLAYER_TEAM( sub_427( J ) ) );
                                }
                            }
                        }
                    }
                }
            }
            if ((sub_18610()) || (sub_18655()))
            {
                for ( J = 0; J < 16; J++ )
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( J ))
                    {
                        if ((GET_PLAYER_TEAM( sub_427( J ) )) > -1)
                        {
                            if (NOT l_U1048[J])
                            {
                                UPDATE_NETWORK_STATISTICS( J, 21, l_U1039[GET_PLAYER_TEAM( sub_427( J ) )], GET_PLAYER_TEAM( sub_427( J ) ) );
                            }
                        }
                    }
                }
            }
        }
        if ((sub_18610()) || (sub_18655()))
        {
            l_U961 = 1;
        }
        else
        {
            l_U961 = 0;
        }
        for ( J = 0; J < 16; J++ )
        {
            if (IS_NETWORK_PLAYER_ACTIVE( J ))
            {
                l_U831[J]._fU4 = 1;
                l_U831[J]._fU0 = GET_PLAYER_NAME( sub_427( J ) );
                l_U831[J]._fU12 = GET_PLAYER_TEAM( sub_427( J ) );
                sub_74879( sub_427( J ), ref l_U831[J]._fU20, ref l_U831[J]._fU24, ref l_U831[J]._fU28 );
                l_U831[J]._fU16 = sub_7132( J );
                l_U831[J]._fU8 = l_U1048[J];
            }
            else
            {
                l_U831[J]._fU4 = 0;
                l_U831[J]._fU0 = "";
                l_U831[J]._fU12 = 0;
                l_U831[J]._fU16 = 0;
                l_U831[J]._fU20 = 0;
                l_U831[J]._fU24 = 0;
                l_U831[J]._fU28 = 0;
                l_U831[J]._fU8 = 0;
            }
        }
        l_U960 = 1;
        NETWORK_END_SESSION();
        l_U962 = 1;
    }
    return 0;
}

void sub_83074()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1968[I]._fU24;
    }
    sub_83156( l_U1500._fU540, ref uVar3, ref l_U1968[GET_PLAYER_ID()]._fU24 );
    return;
}

void sub_83156(int iParam0, unknown uParam1, unknown uParam2)
{
    int I;
    char[64] cVar6;
    char[16] cVar22;

    (uParam2^) = sub_83165();
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U967[I] != (uParam1^)[I])
            {
                if ((uParam1^)[I] != -1)
                {
                    StrCopy( ref cVar6, GET_STRING_FROM_TEXT_FILE( "SUGGESTS" ), 64 );
                    ConcatString(ref cVar6, " ", 64);
                    StrCopy( ref cVar22, "NTGT_", 16 );
                    ConcatString(ref cVar22, (uParam1^)[I], 16);
                    ConcatString(ref cVar6, GET_STRING_FROM_TEXT_FILE( ref cVar22 ), 64);
                    sub_83321( I, -1, ref cVar6 );
                }
                l_U967[I] = (uParam1^)[I];
            }
        }
    }
    if (iParam0 != -1)
    {
        if (iParam0 != l_U984)
        {
            StrCopy( ref cVar22, "NTGT_", 16 );
            ConcatString(ref cVar22, iParam0, 16);
            sub_84694( "NEXT_GAME_MODE", -1, ref cVar22 );
            l_U984 = iParam0;
        }
    }
    return;
}

void sub_83165()
{
    return g_U18._fU660;
}

void sub_83321(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar6 = sub_83332( uParam1 );
    StrCopy( ref l_U104[uVar6]._fU76._fU0, GET_PLAYER_NAME( sub_427( uParam0 ) ), 64 );
    sub_74879( sub_427( uParam0 ), ref l_U104[uVar6]._fU76._fU68, ref l_U104[uVar6]._fU76._fU72, ref l_U104[uVar6]._fU76._fU76 );
    StrCopy( ref l_U104[uVar6]._fU156._fU0, uParam2, 64 );
    GET_HUD_COLOUR( 1, ref l_U104[uVar6]._fU156._fU68, ref l_U104[uVar6]._fU156._fU72, ref l_U104[uVar6]._fU156._fU76, ref uVar5 );
    sub_83780( uVar6 );
    return;
}

void sub_83332(unknown uParam0)
{
    unknown Result;

    Result = l_U577;
    sub_49665( ref l_U104[l_U577] );
    l_U104[l_U577]._fU8 = uParam0;
    l_U104[l_U577]._fU0 = 1;
    l_U104[l_U577]._fU4 = sub_83401() + 6000;
    sub_83453( ref l_U577, 8 );
    sub_49665( ref l_U104[l_U577] );
    if (l_U577 == l_U578)
    {
        sub_83453( ref l_U578, 8 );
    }
    PLAY_AUDIO_EVENT( "FRONTEND_GAME_MP_TICKER_MESSAGE" );
    return Result;
}

void sub_83401()
{
    unknown Result;

    GET_GAME_TIMER( ref Result );
    return Result;
}

int sub_83453(unknown uParam0, int iParam1)
{
    (uParam0^)++;
    if ((uParam0^) >= iParam1)
    {
        (uParam0^) = 0;
        return 1;
    }
    return 0;
}

void sub_83780(unknown uParam0)
{
    char[64] cVar3;

    StrCopy( ref cVar3, "", 64 );
    if (NOT (COMPARE_STRING( ref l_U104[uParam0]._fU76._fU0, "" )))
    {
        if (NOT (COMPARE_STRING( ref l_U104[uParam0]._fU76._fU0, "NULL" )))
        {
            if (NOT (COMPARE_STRING( ref l_U104[uParam0]._fU76._fU0, "\n" )))
            {
                if (NOT (COMPARE_STRING( ref l_U104[uParam0]._fU76._fU0, "null" )))
                {
                    if (l_U104[uParam0]._fU76._fU64)
                    {
                        if (NOT (COMPARE_STRING( GET_STRING_FROM_TEXT_FILE( ref l_U104[uParam0]._fU76._fU0 ), "NULL" )))
                        {
                            ConcatString(ref cVar3, GET_STRING_FROM_TEXT_FILE( ref l_U104[uParam0]._fU76._fU0 ), 64);
                            ConcatString(ref cVar3, " ", 64);
                        }
                    }
                    else
                    {
                        ConcatString(ref cVar3, ref l_U104[uParam0]._fU76._fU0, 64);
                        ConcatString(ref cVar3, " ", 64);
                    }
                }
            }
        }
    }
    if (NOT (COMPARE_STRING( ref l_U104[uParam0]._fU12, "" )))
    {
        if (NOT (COMPARE_STRING( ref l_U104[uParam0]._fU12, "NULL" )))
        {
            if (NOT (COMPARE_STRING( ref l_U104[uParam0]._fU12, "\n" )))
            {
                if (NOT (COMPARE_STRING( ref l_U104[uParam0]._fU12, "null" )))
                {
                    if (NOT (COMPARE_STRING( GET_STRING_FROM_TEXT_FILE( ref l_U104[uParam0]._fU12 ), "NULL" )))
                    {
                        ConcatString(ref cVar3, GET_STRING_FROM_TEXT_FILE( ref l_U104[uParam0]._fU12 ), 64);
                        ConcatString(ref cVar3, " ", 64);
                    }
                }
            }
        }
    }
    if (NOT (COMPARE_STRING( ref l_U104[uParam0]._fU156._fU0, "" )))
    {
        if (NOT (COMPARE_STRING( ref l_U104[uParam0]._fU156._fU0, "NULL" )))
        {
            if (NOT (COMPARE_STRING( ref l_U104[uParam0]._fU156._fU0, "\n" )))
            {
                if (NOT (COMPARE_STRING( ref l_U104[uParam0]._fU156._fU0, "null" )))
                {
                    if (l_U104[uParam0]._fU156._fU64)
                    {
                        if (NOT (COMPARE_STRING( GET_STRING_FROM_TEXT_FILE( ref l_U104[uParam0]._fU156._fU0 ), "NULL" )))
                        {
                            ConcatString(ref cVar3, GET_STRING_FROM_TEXT_FILE( ref l_U104[uParam0]._fU156._fU0 ), 64);
                        }
                    }
                    else
                    {
                        ConcatString(ref cVar3, ref l_U104[uParam0]._fU156._fU0, 64);
                    }
                }
            }
        }
    }
    if (NOT (COMPARE_STRING( ref cVar3, "" )))
    {
        if (NOT (COMPARE_STRING( ref cVar3, "NULL" )))
        {
            if (NOT (COMPARE_STRING( ref cVar3, "\n" )))
            {
                if (NOT (COMPARE_STRING( ref cVar3, "null" )))
                {
                    ADD_TO_PREVIOUS_BRIEF_WITH_UNDERSCORE( ref cVar3 );
                }
            }
        }
    }
    return;
}

void sub_84694(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar6 = sub_83332( uParam1 );
    StrCopy( ref l_U104[uVar6]._fU76._fU0, uParam0, 64 );
    l_U104[uVar6]._fU76._fU64 = 1;
    GET_HUD_COLOUR( 1, ref l_U104[uVar6]._fU76._fU68, ref l_U104[uVar6]._fU76._fU72, ref l_U104[uVar6]._fU76._fU76, ref uVar5 );
    StrCopy( ref l_U104[uVar6]._fU156._fU0, uParam2, 64 );
    l_U104[uVar6]._fU156._fU64 = 1;
    GET_HUD_COLOUR( 1, ref l_U104[uVar6]._fU156._fU68, ref l_U104[uVar6]._fU156._fU72, ref l_U104[uVar6]._fU156._fU76, ref uVar5 );
    sub_83780( uVar6 );
    return;
}

void sub_84982()
{
    if (NOT l_U1968[GET_PLAYER_ID()]._fU136)
    {
        l_U1968[GET_PLAYER_ID()]._fU136 = 1;
    }
    if (l_U1968[GET_PLAYER_ID()]._fU28 == 0)
    {
        l_U1968[GET_PLAYER_ID()]._fU28 = 3;
    }
    if (((l_U1968[GET_PLAYER_ID()]._fU28 == 0) || (l_U1968[GET_PLAYER_ID()]._fU28 == 3)) || (l_U3191))
    {
        DISABLE_PAUSE_MENU( 1 );
        if (IS_PAUSE_MENU_ACTIVE())
        {
            UNPAUSE_GAME();
            DEACTIVATE_FRONTEND();
        }
        if ((l_U1968[GET_PLAYER_ID()]._fU28 == 0) || (l_U1968[GET_PLAYER_ID()]._fU28 == 5))
        {
            l_U1968[GET_PLAYER_ID()]._fU28 = 3;
        }
        if ((l_U1968[GET_PLAYER_ID()]._fU28 == 0) || (l_U1968[GET_PLAYER_ID()]._fU28 == 3))
        {
            switch (l_U3595)
            {
                case 0:
                l_U1968[GET_PLAYER_ID()]._fU244 = 1;
                SET_CHAR_INVINCIBLE( sub_2736(), 1 );
                if (NOT l_U3191)
                {
                    PRINT_NOW( "COOP_DRUG_MF_1", 5000, 1 );
                }
                l_U3595 = 1;
                break;
                case 1:
                if (IS_SCREEN_FADED_OUT())
                {
                    if (l_U1500._fU712)
                    {
                        sub_49625();
                        sub_50959();
                        sub_58230( 500 );
                        l_U1968[GET_PLAYER_ID()]._fU8 = -5;
                        l_U3232 = l_U3208 + 3500;
                        l_U1968[GET_PLAYER_ID()]._fU8 = -5;
                        if (NETWORK_IS_SESSION_STARTED())
                        {
                            l_U1968[GET_PLAYER_ID()]._fU0 = 1;
                            l_U3595 = 2;
                        }
                        else
                        {
                            l_U1968[GET_PLAYER_ID()]._fU0 = 1;
                            l_U3595 = 3;
                        }
                    }
                    else if (IS_CHAR_DEAD( sub_2736() ))
                    {
                        N_312012851( sub_2736(), ref l_U3475._fU0, ref l_U3475._fU4, ref l_U3475._fU8 );
                        GET_CLOSEST_CAR_NODE( l_U3475._fU0, l_U3475._fU4, l_U3475._fU8, ref l_U3478._fU0, ref l_U3478._fU4, ref l_U3478._fU8 );
                        REQUEST_COLLISION_AT_POSN( l_U3478._fU0, l_U3478._fU4, l_U3478._fU8 );
                        RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), l_U3478, 0.00000000 );
                        sub_416( GET_PLAYER_ID(), 0 );
                    }
                }
                else if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    if (NOT IS_SCREEN_FADING_OUT())
                    {
                        sub_52185( 500 );
                    }
                }
                break;
                case 2:
                sub_52268( 0 );
                if (l_U3208 > l_U3232)
                {
                    if (IS_SCREEN_FADED_IN())
                    {
                        if (sub_79941( 2147483647, 0 ))
                        {
                            sub_416( GET_PLAYER_ID(), 0 );
                            l_U1968[GET_PLAYER_ID()]._fU148 = 1;
                            l_U3209 = 14;
                            l_U3595 = 4;
                        }
                    }
                    else if (NOT IS_SCREEN_FADING_IN())
                    {
                        sub_58230( 500 );
                    }
                }
                break;
                case 3:
                if (l_U3208 > l_U3596)
                {
                    if (IS_SCREEN_FADED_IN())
                    {
                        sub_85936( 0 );
                        sub_416( GET_PLAYER_ID(), 0 );
                        l_U1968[GET_PLAYER_ID()]._fU120 = 1;
                        l_U3209 = 14;
                        l_U3595++;
                    }
                    else if (NOT IS_SCREEN_FADING_IN())
                    {
                        sub_58230( 500 );
                    }
                }
                break;
            }
        }
    }
    return;
}

void sub_85936(unknown uParam0)
{
    int I;
    unknown[16] uVar4;

    array(ref uVar4, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar4[I] = l_U1968[I]._fU8;
    }
    return sub_52376( 8, ref uVar4, ref l_U1500._fU348, l_U1500._fU344, uParam0, 0, 1, l_U1500._fU516 );
}

void sub_86144()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1968[I]._fU124)
            {
                sub_86202( I, 1 );
            }
        }
    }
    return;
}

void sub_86202(unknown uParam0, unknown uParam1)
{
    l_U1048[uParam0] = uParam1;
    return;
}

int sub_86429()
{
    if ((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_86580()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    DISABLE_PAUSE_MENU( 1 );
    if (IS_PAUSE_MENU_ACTIVE())
    {
        DEACTIVATE_FRONTEND();
        UNPAUSE_GAME();
    }
    switch (l_U3571)
    {
        case 0:
        BEGIN_CAM_COMMANDS( ref l_U3210 );
        UNPAUSE_GAME();
        DISABLE_PAUSE_MENU( 1 );
        RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), l_U3235[GET_PLAYER_ID()], l_U3481[GET_PLAYER_ID()] );
        DISPLAY_HUD( 0 );
        DISPLAY_RADAR( 0 );
        SET_PLAYER_CONTROL_FOR_NETWORK( sub_1079(), 0, 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2736(), 1 );
        SET_CHAR_COORDINATES( sub_2736(), -1406.41600000, 1471.61500000, 24.94690000 );
        sub_416( GET_PLAYER_ID(), 0 );
        SET_CHAR_COLLISION( sub_2736(), 0 );
        FORCE_LOADING_SCREEN( 1 );
        sub_86889( -1406.41600000, 1471.61500000, 24.94690000 );
        FORCE_LOADING_SCREEN( 0 );
        l_U3571 = 1;
        break;
        case 1:
        if (l_U3210 > 0)
        {
            if (l_U3572 == nil)
            {
                FREEZE_CHAR_POSITION( sub_2736(), 1 );
                SET_CHAR_COLLISION( sub_2736(), 0 );
                SET_CHAR_VISIBLE( sub_2736(), 0 );
                CREATE_CHAR( 26, -1947682830, -1415.67500000, 1472.20200000, -100.00000000, ref l_U3572, 0 );
                SET_CHAR_HEADING( l_U3572, 316.91160000 );
                sub_4676( 1, l_U3572, "PETROVIC", 0 );
                CREATE_CHAR( 26, 1543404628, -1414.90200000, 1472.95500000, -100.00000000, ref l_U3573, 0 );
                SET_CHAR_HEADING( l_U3573, 127.32280000 );
                sub_87252( ref l_U3573, l_U1500._fU444[GET_PLAYER_ID()] );
                CREATE_CAR( -322343873, -1403.61600000, 1471.11800000, 25.46630000, ref l_U3574[0], 0 );
                SET_CAR_HEADING( l_U3574[0], 180.00000000 );
                CHANGE_CAR_COLOUR( l_U3574[0], 0, 1 );
                SET_EXTRA_CAR_COLOURS( l_U3574[0], 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( l_U3574[0], 5, 0 );
                TURN_OFF_VEHICLE_EXTRA( l_U3574[0], 6, 0 );
                TURN_OFF_VEHICLE_EXTRA( l_U3574[0], 7, 0 );
                TURN_OFF_VEHICLE_EXTRA( l_U3574[0], 8, 0 );
                CREATE_CAR( -322343873, -1408.64200000, 1471.11800000, 25.46700000, ref l_U3574[1], 0 );
                SET_CAR_HEADING( l_U3574[1], 180.00000000 );
                CHANGE_CAR_COLOUR( l_U3574[1], 0, 1 );
                SET_EXTRA_CAR_COLOURS( l_U3574[1], 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( l_U3574[1], 5, 0 );
                TURN_OFF_VEHICLE_EXTRA( l_U3574[1], 6, 0 );
                TURN_OFF_VEHICLE_EXTRA( l_U3574[1], 7, 0 );
                TURN_OFF_VEHICLE_EXTRA( l_U3574[1], 8, 0 );
                l_U3571 = 2;
            }
        }
        break;
        case 2:
        if (IS_SCREEN_FADED_IN())
        {
            sub_4676( 1, l_U3572, "PETROVIC", 0 );
            sub_87791( "MPKP2_GIV2", ref l_U3057, 6, 1 );
            l_U3571 = 3;
        }
        else if (NOT IS_SCREEN_FADING_IN())
        {
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            CREATE_CAM( 14, ref l_U3577[0] );
            SET_CAM_POS( l_U3577[0], -1415.64400000, 1474.13000000, 26.08175000 );
            SET_CAM_ROT( l_U3577[0], 3.43329100, 0.00000000, -166.64950000 );
            SET_CAM_FOV( l_U3577[0], 45.00000000 );
            SET_CAM_ACTIVE( l_U3577[0], 1 );
            SET_CAM_PROPAGATE( l_U3577[0], 1 );
            CLEAR_PRINTS();
            SET_LOBBY_MUTE_OVERRIDE( 1 );
            sub_58230( 500 );
        }
        break;
        case 3:
        if (IS_GARAGE_CLOSED( "PegGar" ))
        {
            CHANGE_GARAGE_TYPE( "PegGar", 3 );
            OPEN_GARAGE( "PegGar" );
        }
        if (NOT (sub_88988( l_U3057 )))
        {
            if (IS_SCREEN_FADED_OUT())
            {
                CREATE_CAM( 14, ref l_U3581[0] );
                SET_CAM_POS( l_U3581[0], -1416.63100000, 1454.47400000, 30.98659000 );
                SET_CAM_ROT( l_U3581[0], -22.63323000, -0.00000000, -46.65661000 );
                SET_CAM_FOV( l_U3581[0], 37.80002000 );
                CREATE_CAM( 14, ref l_U3581[1] );
                SET_CAM_POS( l_U3581[1], -1412.27100000, 1458.35700000, 27.34563000 );
                SET_CAM_ROT( l_U3581[1], -10.60112000, 0.00000000, -34.39532000 );
                SET_CAM_FOV( l_U3581[1], 45.00000000 );
                CREATE_CAM( 3, ref l_U3584 );
                SET_CAM_INTERP_STYLE_CORE( l_U3584, l_U3581[0], l_U3581[1], 5000, 0 );
                SET_CAM_ACTIVE( l_U3584, 1 );
                SET_CAM_PROPAGATE( l_U3584, 1 );
                if (DOES_CAM_EXIST( l_U3580 ))
                {
                    if (IS_CAM_ACTIVE( l_U3580 ))
                    {
                        SET_CAM_ACTIVE( l_U3580, 0 );
                    }
                    if (IS_CAM_PROPAGATING( l_U3580 ))
                    {
                        SET_CAM_PROPAGATE( l_U3580, 0 );
                    }
                }
                if ((NOT (IS_CHAR_INJURED( l_U3572 ))) AND (NOT (IS_CHAR_INJURED( l_U3573 ))))
                {
                    SET_CHAR_COORDINATES( l_U3572, -1409.58400000, 1459.36800000, 24.09930000 );
                    SET_CHAR_HEADING( l_U3572, 339.00570000 );
                    SET_CHAR_COORDINATES( l_U3573, -1409.06000000, 1458.45800000, 24.04860000 );
                    SET_CHAR_HEADING( l_U3573, 343.76550000 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U3572 );
                    OPEN_SEQUENCE_TASK( ref l_U3593 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1406.75700000, 1472.40700000, 24.94760000, 2, 30000, 0 );
                    TASK_ACHIEVE_HEADING( 0, 348.22310000 );
                    CLOSE_SEQUENCE_TASK( l_U3593 );
                    TASK_PERFORM_SEQUENCE( l_U3572, l_U3593 );
                    CLEAR_SEQUENCE_TASK( l_U3593 );
                    OPEN_SEQUENCE_TASK( ref l_U3593 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1406.08500000, 1472.26700000, 24.94550000, 2, 30000, 0 );
                    TASK_ACHIEVE_HEADING( 0, 337.22310000 );
                    CLOSE_SEQUENCE_TASK( l_U3593 );
                    TASK_PERFORM_SEQUENCE( l_U3573, l_U3593 );
                    CLEAR_SEQUENCE_TASK( l_U3593 );
                    l_U3571 = 4;
                    l_U3232 = l_U3208 + 500;
                }
            }
            else if (NOT IS_SCREEN_FADING_OUT())
            {
                sub_52185( 500 );
            }
        }
        break;
        case 4:
        if (l_U3208 > l_U3232)
        {
            if (NOT l_U3594)
            {
                sub_4676( 1, l_U3572, "PETROVIC", 0 );
                sub_87791( "MPKP2_GIV3", ref l_U3057, 6, 1 );
                l_U3594 = 1;
            }
            if (IS_SCREEN_FADED_IN())
            {
                if ((DOES_CHAR_EXIST( l_U3572 )) AND (DOES_CAM_EXIST( l_U3584 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U3572 )))
                    {
                        GET_CHAR_COORDINATES( l_U3572, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        if ((uVar2._fU4 >= 1464.13000000) || (NOT IS_CAM_INTERPOLATING()))
                        {
                            CREATE_CAM( 14, ref l_U3585[0] );
                            SET_CAM_POS( l_U3585[0], -1407.31000000, 1474.24900000, 27.04107000 );
                            SET_CAM_ROT( l_U3585[0], -4.35233600, -0.00000000, 175.62050000 );
                            SET_CAM_FOV( l_U3585[0], 24.00005000 );
                            CREATE_CAM( 14, ref l_U3585[1] );
                            SET_CAM_POS( l_U3585[1], -1405.56300000, 1474.23100000, 25.62196000 );
                            SET_CAM_ROT( l_U3585[1], 6.07730700, -0.00000000, 163.08890000 );
                            SET_CAM_FOV( l_U3585[1], 19.20007000 );
                            CREATE_CAM( 3, ref l_U3588 );
                            SET_CAM_INTERP_STYLE_CORE( l_U3588, l_U3585[0], l_U3585[1], 5000, 0 );
                            SET_CAM_ACTIVE( l_U3588, 1 );
                            SET_CAM_PROPAGATE( l_U3588, 1 );
                            if (DOES_CAM_EXIST( l_U3584 ))
                            {
                                if (IS_CAM_ACTIVE( l_U3584 ))
                                {
                                    SET_CAM_ACTIVE( l_U3584, 0 );
                                }
                                if (IS_CAM_PROPAGATING( l_U3584 ))
                                {
                                    SET_CAM_PROPAGATE( l_U3584, 0 );
                                }
                                DESTROY_CAM( l_U3584 );
                            }
                            l_U3571 = 5;
                        }
                    }
                }
            }
            else if (NOT IS_SCREEN_FADING_IN())
            {
                sub_58230( 500 );
            }
        }
        break;
        case 5:
        l_U3571 = 7;
        break;
        case 7:
        if (NOT (sub_88988( l_U3057 )))
        {
            if (IS_SCREEN_FADED_IN())
            {
                sub_4676( 1, l_U3572, "PETROVIC", 0 );
                sub_87791( "MPKP2_GIV4", ref l_U3057, 6, 1 );
                l_U3231 = l_U3208 + 5000;
                l_U3571 = 8;
            }
        }
        break;
        case 8:
        if (NOT (sub_88988( l_U3057 )))
        {
            if (IS_SCREEN_FADED_OUT())
            {
                l_U3571 = 9;
                l_U3209 = 1;
            }
            else if (NOT IS_SCREEN_FADING_OUT())
            {
                sub_52185( 1000 );
            }
        }
        break;
    }
    return;
}

void sub_86889(unknown uParam0, unknown uParam1, unknown uParam2)
{
    START_LOAD_SCENE( uParam0._fU0, uParam0._fU4, uParam0._fU8 );
    while (NOT UPDATE_LOAD_SCENE())
    {
        if (NOT IS_NETWORK_GAME_RUNNING())
        {
            if (NOT LOCAL_PLAYER_IS_READY_TO_START_PLAYING())
            {
                TERMINATE_THIS_SCRIPT();
            }
        }
        if (NOT NETWORK_END_SESSION_PENDING())
        {
            GET_NETWORK_TIMER( ref l_U3208 );
        }
        if (sub_5714())
        {
            sub_17171();
            sub_6136();
        }
    }
    return;
}

void sub_87252(unknown uParam0, unknown uParam1)
{
    int I;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    sub_87273( "\n Set Ped" );
    for ( I = 0; I <= 9; I++ )
    {
        uVar5 = GET_BITS_IN_RANGE( uParam1, I * 3, (I * 3) + 2 );
        uVar6 = GET_NUMBER_OF_CHAR_TEXTURE_VARIATIONS( (uParam0^), I, uVar5 );
        GENERATE_RANDOM_INT_IN_RANGE( 0, uVar6, ref uVar7 );
        sub_4756( " # ", uVar5 );
        sub_4756( ", ", uVar7 );
        SET_CHAR_COMPONENT_VARIATION( (uParam0^), I, uVar5, uVar7 );
    }
    return;
}

void sub_87273(unknown uParam0)
{
    return;
}

void sub_87791(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_87812( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

void sub_87812(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;
    char[12] cVar11;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;

    StrCopy( ref cVar7, uParam1, 16 );
    array(ref cVar11, 2);
    StrCopy( ref cVar11[0], uParam0, 16 );
    StrCopy( ref cVar11[1], "END", 16 );
    return sub_87866( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_87866(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_87888( iParam1 )))
    {
        return 0;
    }
    l_U0._fU384 = 0;
    iParam1->_fU16 = 0;
    iParam1->_fU20 = uParam5;
    if (bParam3)
    {
        if (iParam1->_fU12)
        {
            iVar12 = iParam1->_fU8;
            iParam1->_fU12 = 0;
        }
    }
    else
    {
        iParam1->_fU12 = 0;
        if (bParam4)
        {
            iVar12 = uParam6;
            iParam1->_fU8 = uParam6;
            iParam1->_fU12 = 0;
        }
        else
        {
            iParam1->_fU8 = 0;
            iParam1->_fU12 = 0;
        }
    }
    iParam1->_fU16 = bParam4;
    for ( I = 0; I <= (g_U8425 - 1); I++ )
    {
        StrCopy( ref g_U8425[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8425[I] = {(uParam0^)[I]};
    }
    g_U8419 = {(iParam1^)};
    sub_88562( ref g_U8321, ref l_U0 );
    StrCopy( ref g_U8321._fU0, uParam7, 16 );
    g_U8321._fU388 = uParam8;
    g_U8320 = 1;
    return 1;
}

int sub_87888(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_87273( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U483[1] ))
    {
        switch (g_U18._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_87273( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8320)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8318 > iParam0->_fU0)
        {
            sub_87273( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8318 = iParam0->_fU0;
    g_U8319++;
    if (g_U8319 > 100000)
    {
        g_U8319 = 1;
    }
    iParam0->_fU4 = g_U8319;
    return 1;
}

void sub_88562(int iParam0, int iParam1)
{
    int I;

    iParam0->_fU0 = {iParam1->_fU0};
    for ( I = 0; I <= 8; I++ )
    {
        iParam0->_fU16[I] = {iParam1->_fU16[I]};
        iParam0->_fU344[I] = iParam1->_fU344[I];
    }
    iParam0->_fU384 = iParam1->_fU384;
    iParam0->_fU388 = iParam1->_fU388;
    return;
}

int sub_88988(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8320 == 1)) || (g_U8320 == 2))
    {
        if (uParam0._fU4 == g_U8319)
        {
            return 1;
        }
        else
        {
            sub_87273( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_87273( "\n speech is not playing" );
    }
    return 0;
}

void sub_90662()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    DISPLAY_RADAR( 1 );
    DISPLAY_HUD( 1 );
    if (IS_GARAGE_OPEN( "PegGar" ))
    {
        CLOSE_GARAGE( "PegGar" );
        CHANGE_GARAGE_TYPE( "PegGar", 4 );
    }
    sub_90759( -1402.82000000, 1453.05300000, 24.29530000, ref uVar3, ref uVar6 );
    SET_GARAGE_LEAVE_CAMERA_ALONE( "PegGar", 1 );
    SET_CHAR_COORDINATES( sub_2736(), uVar3._fU0, uVar3._fU4, uVar3._fU8 );
    LOAD_SCENE( uVar3._fU0, uVar3._fU4, uVar3._fU8 );
    SET_CHAR_VISIBLE( sub_2736(), 0 );
    SET_PLAYER_KEEPS_WEAPONS_WHEN_RESPAWNED( sub_1079() );
    SET_ANIM_GROUP_FOR_CHAR( sub_2736(), "Move_player" );
    SET_CHAR_HEADING( sub_2736(), uVar6 );
    SET_CHAR_COMPONENT_VARIATION( sub_2736(), 8, 1, 0 );
    SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 0 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    for ( I = 0; I < l_U3577; I++ )
    {
        if (DOES_CAM_EXIST( l_U3577[I] ))
        {
            DESTROY_CAM( l_U3577[I] );
        }
    }
    for ( I = 0; I < l_U3585; I++ )
    {
        if (DOES_CAM_EXIST( l_U3585[I] ))
        {
            DESTROY_CAM( l_U3585[I] );
        }
    }
    if (DOES_CAM_EXIST( l_U3580 ))
    {
        DESTROY_CAM( l_U3580 );
    }
    if (DOES_CAM_EXIST( l_U3588 ))
    {
        DESTROY_CAM( l_U3588 );
    }
    for ( I = 0; I < l_U3558; I++ )
    {
        if (DOES_CHAR_EXIST( l_U3558[I] ))
        {
            DELETE_CHAR( ref l_U3558[I] );
            l_U3558[I] = nil;
        }
    }
    for ( I = 0; I < l_U3565; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U3565[I] ))
        {
            DELETE_CAR( ref l_U3565[I] );
        }
    }
    for ( I = 0; I < l_U3574; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U3574[I] ))
        {
            DELETE_CAR( ref l_U3574[I] );
        }
    }
    if (DOES_CHAR_EXIST( l_U3573 ))
    {
        DELETE_CHAR( ref l_U3573 );
    }
    if (DOES_CHAR_EXIST( l_U3572 ))
    {
        DELETE_CHAR( ref l_U3572 );
    }
    GIVE_WEAPON_TO_CHAR( sub_2736(), 4, 5, 0 );
    GIVE_WEAPON_TO_CHAR( sub_2736(), 12, 1500, 0 );
    GIVE_WEAPON_TO_CHAR( sub_2736(), 14, 1500, 1 );
    sub_91701( ref l_U3057, 0 );
    DISPLAY_RADAR( 1 );
    END_CAM_COMMANDS( ref l_U3210 );
    SETTIMERA( 0 );
    CLEAR_PRINTS();
    if (NOT (DOES_BLIP_EXIST( l_U3073 )))
    {
        ADD_BLIP_FOR_COORD( -1879.17500000, -654.38290000, 2.57230000, ref l_U3073 );
        CHANGE_BLIP_SPRITE( l_U3073, 4 );
        CHANGE_BLIP_SCALE( l_U3073, 0.78000000 );
        CHANGE_BLIP_PRIORITY( l_U3073, 1 );
        SET_ROUTE( l_U3073, 1 );
    }
    DO_SCREEN_FADE_IN( 500 );
    SETTIMERA( 0 );
    SET_LOBBY_MUTE_OVERRIDE( 0 );
    return;
}

void sub_90759(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4)
{
    int I;
    int iVar8;
    unknown uVar9;
    unknown uVar10;

    for ( I = 0; I < 16; I++ )
    {
        if (I == GET_PLAYER_ID())
        {
            I = 16;
        }
        else if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if ((GET_PLAYER_TEAM( sub_1079() )) == (GET_PLAYER_TEAM( sub_427( I ) )))
            {
                iVar8++;
            }
        }
    }
    (uParam4^) = (360.00000000 / (TO_FLOAT( GET_NO_OF_PLAYERS_IN_TEAM( GET_PLAYER_TEAM( sub_1079() ) ) ))) * (TO_FLOAT( iVar8 ));
    uVar9 = SIN( (uParam4^) );
    uVar10 = COS( (uParam4^) );
    (iParam3^) = {uParam0};
    iParam3->_fU0 += (uVar10 * 2.50000000) + (uVar9 * 2.50000000);
    iParam3->_fU4 += (uVar9 * 2.50000000) + ((uVar10 * -1) * 2.50000000);
    (uParam4^) = sub_50796( (uParam4^) + 45.00000000 );
    return;
}

void sub_91701(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8319)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_92007(unknown uParam0)
{
    int I;
    unknown[16] uVar4;

    array(ref uVar4, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar4[I] = l_U1968[I]._fU20;
    }
    sub_92082( ref uVar4, ref l_U1968[GET_PLAYER_ID()]._fU20, uParam0 );
    return;
}

void sub_92082(unknown uParam0, unknown uParam1, boolean bParam2)
{
    int I;
    int iVar6;

    if (NETWORK_IS_TVT())
    {
        iVar6 = -1;
        (uParam1^) = -1;
    }
    else if (bParam2)
    {
        iVar6 = l_U1256;
    }
    else
    {
        iVar6 = sub_92134();
    }
    if (NOT NETWORK_IS_TVT())
    {
        if (iVar6 == (uParam1^))
        {
            if (((uParam1^) > -1) AND ((uParam1^) != GET_PLAYER_ID()))
            {
                if (IS_NETWORK_PLAYER_ACTIVE( iVar6 ))
                {
                    if (NOT (COMPARE_STRING( GET_PLAYER_NAME( sub_427( iVar6 ) ), ref l_U1407 )))
                    {
                        if (NOT (COMPARE_STRING( ref l_U1407, "" )))
                        {
                            if (NOT (COMPARE_STRING( ref l_U1407, "NULL" )))
                            {
                                if (NOT (COMPARE_STRING( ref l_U1407, "\n" )))
                                {
                                    if (NOT (COMPARE_STRING( ref l_U1407, "null" )))
                                    {
                                        if (bParam2)
                                        {
                                            l_U1256 = GET_PLAYER_ID();
                                            (uParam1^) = GET_PLAYER_ID();
                                        }
                                        else
                                        {
                                            sub_4994( 1 );
                                            (uParam1^) = -1;
                                        }
                                        StrCopy( ref l_U1407, "", 32 );
                                        return;
                                    }
                                }
                            }
                        }
                    }
                }
                else
                {
                    StrCopy( ref l_U1407, "", 32 );
                }
            }
            else
            {
                StrCopy( ref l_U1407, "", 32 );
            }
        }
        else if ((iVar6 > -1) AND (iVar6 != GET_PLAYER_ID()))
        {
            if (IS_NETWORK_PLAYER_ACTIVE( iVar6 ))
            {
                StrCopy( ref l_U1407, GET_PLAYER_NAME( sub_427( iVar6 ) ), 32 );
            }
            else
            {
                StrCopy( ref l_U1407, "", 32 );
            }
        }
        (uParam1^) = iVar6;
    }
    for ( I = 0; I < 16; I++ )
    {
        if ((IS_NETWORK_PLAYER_ACTIVE( I )) AND (NOT NETWORK_IS_TVT()))
        {
            if (l_U1390[I] == 1)
            {
                if (l_U987[I] != (uParam0^)[I])
                {
                    if (NOT bParam2)
                    {
                        if (((uParam0^)[I] > -1) AND ((uParam0^)[I] != I))
                        {
                            if (IS_NETWORK_PLAYER_ACTIVE( (uParam0^)[I] ))
                            {
                                sub_92694( I, "WANTS_TO_KICK", (uParam0^)[I] );
                            }
                        }
                    }
                    l_U987[I] = (uParam0^)[I];
                }
            }
            else if ((uParam0^)[I] != 0)
            {
                l_U1390[I] = 1;
            }
        }
        else
        {
            l_U987[I] = -1;
            l_U1390[I] = 0;
        }
    }
    return;
}

void sub_92134()
{
    if (g_U18._fU668 != -1)
    {
        if (NOT (IS_NETWORK_PLAYER_ACTIVE( g_U18._fU668 )))
        {
            g_U18._fU668 = -1;
        }
    }
    return g_U18._fU668;
}

void sub_92694(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    uVar5 = sub_83332( -2 );
    StrCopy( ref l_U104[uVar5]._fU76._fU0, GET_PLAYER_NAME( sub_427( uParam0 ) ), 64 );
    StrCopy( ref l_U104[uVar5]._fU12, uParam1, 64 );
    sub_74879( sub_427( uParam0 ), ref l_U104[uVar5]._fU76._fU68, ref l_U104[uVar5]._fU76._fU72, ref l_U104[uVar5]._fU76._fU76 );
    StrCopy( ref l_U104[uVar5]._fU156._fU0, GET_PLAYER_NAME( sub_427( uParam2 ) ), 64 );
    sub_74879( sub_427( uParam2 ), ref l_U104[uVar5]._fU156._fU68, ref l_U104[uVar5]._fU156._fU72, ref l_U104[uVar5]._fU156._fU76 );
    sub_83780( uVar5 );
    return;
}

void sub_93151()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1968[I]._fU8;
    }
    sub_93241( 9, ref uVar3, ref l_U1500._fU352, ref l_U1500._fU540, ref l_U1500._fU348, l_U1500._fU344 );
    l_U1968[GET_PLAYER_ID()]._fU8 = uVar3[GET_PLAYER_ID()];
    return;
}

void sub_93241(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    char[16] cVar8;
    int I;
    int J;
    int iVar14;
    unknown uVar15;
    int iVar16;
    int iVar17;
    int iVar18;
    int iVar19;
    unknown uVar20;
    int iVar21;
    int iVar22;
    int iVar23;
    int iVar24;
    int iVar25;
    int iVar26;
    boolean bVar27;
    boolean bVar28;
    boolean bVar29;
    boolean bVar30;
    boolean bVar31;
    boolean bVar32;
    float fVar33;
    unknown uVar34;
    float fVar35;
    float fVar36;
    float fVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    float fVar49;
    float fVar50;
    int[7] iVar51;
    boolean bVar59;

    array(ref uVar38._fU0, 10);
    ref uVar38;
    if (l_U986 == -1)
    {
        STOP_STREAM();
        l_U986 = 0;
    }
    if (l_U1365)
    {
        SET_LOBBY_MUTE_OVERRIDE( 0 );
        l_U1365 = 0;
    }
    if (l_U960)
    {
        sub_93320();
        l_U1274++;
    }
    l_U963 = 0;
    l_U960 = 0;
    l_U1366 = 0;
    if (GET_HOST_ID() != -1)
    {
        if (((uParam1^)[GET_PLAYER_ID()] == -5) || (((GET_HOST_ID() != GET_PLAYER_ID()) AND ((uParam1^)[GET_HOST_ID()] < -4)) AND ((uParam1^)[GET_PLAYER_ID()] > -5)))
        {
            if ((uParam1^)[GET_PLAYER_ID()] != 3)
            {
                l_U1086 = sub_93499( sub_6720() );
                (uParam1^)[GET_PLAYER_ID()] = -7;
                if (NOT sub_53752())
                {
                    if (sub_5714())
                    {
                        l_U1370 = 0;
                        if ((uParam3^) != -1)
                        {
                            if ((NOT (sub_93757( sub_93499( (uParam3^) ) ))) || (GET_NUMBER_OF_PLAYERS() <= 4))
                            {
                                l_U1086 = sub_93499( (uParam3^) );
                                (uParam1^)[GET_PLAYER_ID()] = -8;
                                l_U1370 = 1;
                            }
                        }
                        sub_6136();
                    }
                }
            }
        }
    }
    if (sub_5714())
    {
        sub_53743( uParam1, uParam4 );
        sub_6136();
    }
    if (NOT (IS_FONT_LOADED( 6 )))
    {
        LOAD_TEXT_FONT( 6 );
    }
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    if (NOT l_U1290)
    {
        PAUSE_GAME();
        l_U1290 = 1;
    }
    sub_2978();
    DISABLE_PAUSE_MENU( 1 );
    HIDE_HUD_AND_RADAR_THIS_FRAME();
    if (l_U1286)
    {
        if (NOT IS_SCREEN_FADED_OUT())
        {
            sub_52185( 0 );
        }
        l_U1286 = 0;
        return;
    }
    else if (IS_SCREEN_FADED_OUT())
    {
        sub_58230( 0 );
    }
    if (NOT IS_MOBILE_PHONE_RADIO_ACTIVE())
    {
        l_U1367._fU0 = 18;
        RESTORE_SCRIPT_ARRAY_FROM_SCRATCHPAD( ref l_U1367, 1, 99, 1 );
        CLEAR_SCRIPT_ARRAY_FROM_SCRATCHPAD( 1 );
        SAVE_SCRIPT_ARRAY_IN_SCRATCHPAD( ref l_U1367, 1, 99, 1 );
        if (l_U1367._fU0 != 18)
        {
            SET_MOBILE_PHONE_RADIO_STATE( 1 );
            RETUNE_RADIO_TO_STATION_INDEX( l_U1367._fU0 );
            l_U1087[sub_94124( 15 )]._fU20 = l_U1367._fU0;
        }
        else if ((l_U1087[sub_94124( 15 )]._fU20) != 18)
        {
            l_U1087[sub_94124( 15 )]._fU20 = 18;
        }
    }
    ENABLE_FRONTEND_RADIO();
    if (IS_GAME_IN_CONTROL_OF_MUSIC())
    {
        l_U1087[sub_94124( 15 )]._fU24 = 19;
    }
    else
    {
        l_U1087[sub_94124( 15 )]._fU24 = 0;
    }
    if (NOT l_U1082)
    {
        sub_51135();
        l_U1082 = 1;
    }
    if (iParam0 == 10)
    {
        if (NOT l_U1083)
        {
            sub_94339();
            l_U1083 = 1;
        }
    }
    if (GET_IS_WIDESCREEN())
    {
        fVar37 = 0.68500000;
    }
    else
    {
        fVar37 = 0.70000000;
    }
    J = 0;
    for ( I = 0; I < 21; I++ )
    {
        if (l_U1087[I]._fU16 == 0)
        {
            l_U1087[I]._fU20 = 0;
        }
        else
        {
            J++;
            if (l_U1087[I]._fU16 < 12)
            {
                l_U1087[I]._fU20 = (uParam2^)[I];
            }
            else if (l_U1087[I]._fU16 == 17)
            {
                if (sub_7667() < 3)
                {
                    l_U1087[I]._fU24 = 0;
                    l_U1087[I]._fU20 = GET_PLAYER_ID();
                }
                else if (l_U1087[I]._fU24 == 0)
                {
                    l_U1087[I]._fU24 = 16;
                    l_U1087[I]._fU20 = GET_PLAYER_ID();
                }
            }
            if (l_U1087[I]._fU20 >= l_U1087[I]._fU24)
            {
                if (l_U1087[I]._fU24 != 0)
                {
                    l_U1087[I]._fU20 = l_U1087[I]._fU28;
                }
            }
        }
    }
    if (NOT l_U1299)
    {
        if (l_U1289)
        {
            USE_MASK( 1 );
        }
    }
    if (NOT IS_PAUSE_MENU_ACTIVE())
    {
        if (iParam5 != 0)
        {
            sub_53929( iParam5, 1 );
            bVar31 = true;
        }
        else
        {
            l_U1281 = 10000;
        }
        if (NOT l_U1299)
        {
            if (((uParam1^)[GET_PLAYER_ID()] == 0) AND (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() )))
            {
                if (sub_57384())
                {
                    USE_MASK( 0 );
                    l_U1289 = 0;
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    (uParam1^)[GET_PLAYER_ID()] = -3;
                }
                else if ((sub_94963()) AND (sub_95081()))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    ACTIVATE_NETWORK_SETTINGS_MENU();
                }
                else if (sub_95263())
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    DISPLAY_FRONTEND_MAP_BLIPS( 0 );
                    ACTIVATE_FRONTEND();
                }
                else if (sub_57232())
                {
                    if (((l_U1087[l_U1275]._fU16 == 17) AND (l_U1256 != l_U1087[l_U1275]._fU20)) AND (l_U1087[l_U1275]._fU20 != GET_PLAYER_ID()))
                    {
                        l_U1256 = l_U1087[l_U1275]._fU20;
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    }
                    else
                    {
                        GET_NETWORK_TIMER( ref l_U1279 );
                        bVar30 = true;
                        if (IS_THIS_MACHINE_THE_SERVER())
                        {
                            for ( I = 0; I < 16; I++ )
                            {
                                if (IS_NETWORK_PLAYER_ACTIVE( I ))
                                {
                                    if ((uParam1^)[GET_PLAYER_ID()] < -4)
                                    {
                                        bVar30 = false;
                                    }
                                }
                            }
                        }
                        if (bVar30)
                        {
                            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_READY" );
                            if (IS_THIS_MACHINE_THE_SERVER())
                            {
                                l_U597 = 1;
                                (uParam1^)[GET_PLAYER_ID()] = 2;
                            }
                            else
                            {
                                (uParam1^)[GET_PLAYER_ID()] = 2;
                            }
                        }
                    }
                }
                else if ((sub_95738()) AND ((NOT NETWORK_IS_TVT()) || (sub_95876())))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    if (NETWORK_IS_TVT())
                    {
                        (uParam1^)[GET_PLAYER_ID()] = -1;
                    }
                    else
                    {
                        USE_MASK( 0 );
                        l_U1289 = 0;
                        l_U1086 = sub_93499( sub_6720() );
                        (uParam1^)[GET_PLAYER_ID()] = -4;
                    }
                }
                else if ((sub_57046()) AND (((NETWORK_GET_NUM_PLAYERS_MET() > 0) AND (N_604003528())) || (((NOT NETWORK_IS_TVT()) AND (NETWORK_GET_FRIEND_COUNT() > 0)) AND (NOT N_604003528()))))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1299 = 1;
                }
                else if (sub_96153())
                {
                    if (sub_55728( ref l_U1275, J, 0 ))
                    {
                        if (NOT sub_10749())
                        {
                            if ((l_U1275 == 0) || ((sub_48433()) AND (l_U1275 < 4)))
                            {
                                l_U1087[sub_94124( 16 )]._fU20 = 0;
                            }
                        }
                        if (l_U1275 == (l_U1276 + 6))
                        {
                            l_U1276++;
                        }
                        else if (l_U1275 < l_U1276)
                        {
                            l_U1276 = l_U1275;
                        }
                        else if (l_U1275 > (l_U1276 + 6))
                        {
                            l_U1276 = l_U1275;
                            if (l_U1276 > (J - 6))
                            {
                                l_U1276 = J - 6;
                            }
                        };;;
                    }
                    if (l_U1087[l_U1275]._fU16 == 12)
                    {
                        if (sub_96472())
                        {
                            if (sub_96604())
                            {
                                if ((GET_PLAYER_TEAM( sub_1079() )) > -1)
                                {
                                    if (sub_18655())
                                    {
                                        uVar15 = GET_PLAYER_TEAM( sub_1079() );
                                        sub_96868( ref uVar15, 8 );
                                        SET_PLAYER_TEAM( sub_1079(), uVar15 );
                                    }
                                    else if ((GET_PLAYER_TEAM( sub_1079() )) == 0)
                                    {
                                        SET_PLAYER_TEAM( sub_1079(), 1 );
                                    }
                                    else if ((GET_PLAYER_TEAM( sub_1079() )) == 1)
                                    {
                                        SET_PLAYER_TEAM( sub_1079(), 0 );
                                    };;;
                                }
                            }
                            else if (sub_97010())
                            {
                                if (sub_18655())
                                {
                                    uVar15 = GET_PLAYER_TEAM( sub_1079() );
                                    sub_83453( ref uVar15, 8 );
                                    SET_PLAYER_TEAM( sub_1079(), uVar15 );
                                }
                                else if ((GET_PLAYER_TEAM( sub_1079() )) == 0)
                                {
                                    SET_PLAYER_TEAM( sub_1079(), 1 );
                                }
                                else if ((GET_PLAYER_TEAM( sub_1079() )) == 1)
                                {
                                    SET_PLAYER_TEAM( sub_1079(), 0 );
                                };;;
                            }
                        }
                    }
                    else if (l_U1087[l_U1275]._fU16 == 17)
                    {
                        if (sub_7667() < 3)
                        {
                            l_U1087[l_U1275]._fU24 = 0;
                            l_U1087[l_U1275]._fU20 = GET_PLAYER_ID();
                        }
                        else if (l_U1087[l_U1275]._fU20 != -1)
                        {
                            if (l_U1087[l_U1275]._fU20 != GET_PLAYER_ID())
                            {
                                if (NOT (IS_NETWORK_PLAYER_ACTIVE( l_U1087[l_U1275]._fU20 )))
                                {
                                    l_U1087[l_U1275]._fU20 = GET_PLAYER_ID();
                                }
                            }
                        }
                        if (sub_96604())
                        {
                            iVar16 = l_U1087[l_U1275]._fU20;
                            sub_83453( ref iVar16, 16 );
                            while (NOT (IS_NETWORK_PLAYER_ACTIVE( iVar16 )))
                            {
                                sub_83453( ref iVar16, 16 );
                            }
                            l_U1087[l_U1275]._fU20 = iVar16;
                            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
                        }
                        else if (sub_97010())
                        {
                            iVar16 = l_U1087[l_U1275]._fU20;
                            sub_96868( ref iVar16, 16 );
                            while (NOT (IS_NETWORK_PLAYER_ACTIVE( iVar16 )))
                            {
                                sub_96868( ref iVar16, 16 );
                            }
                            l_U1087[l_U1275]._fU20 = iVar16;
                            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
                        }
                        if (l_U1087[l_U1275]._fU20 == GET_PLAYER_ID())
                        {
                            l_U1256 = GET_PLAYER_ID();
                        }
                    }
                    else if ((IS_THIS_MACHINE_THE_SERVER()) || (l_U1087[l_U1275]._fU16 >= 12))
                    {
                        if (l_U1087[l_U1275]._fU20 < l_U1087[l_U1275]._fU24)
                        {
                            if (NOT (sub_97902( l_U1275 )))
                            {
                                if (sub_97997( ref l_U1087[l_U1275]._fU20, l_U1087[l_U1275]._fU24 ))
                                {
                                    if (l_U1087[l_U1275]._fU16 == 15)
                                    {
                                        sub_98375( l_U1087[l_U1275]._fU20 );
                                    }
                                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
                                }
                            }
                        }
                    };;;
                }
                else if (J > 6)
                {
                    sub_55728( ref l_U1276, (J - 6) + 1, 0 );
                };;;;;;;;
                if ((uParam1^)[GET_PLAYER_ID()] != -4)
                {
                    sub_98628( 0 );
                    INIT_FRONTEND_HELPER_TEXT();
                    DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
                    if (((l_U1087[l_U1275]._fU16 == 17) AND (l_U1256 != l_U1087[l_U1275]._fU20)) AND (l_U1087[l_U1275]._fU20 != GET_PLAYER_ID()))
                    {
                        DRAW_FRONTEND_HELPER_TEXT( "KICK_PLAYERU", "INPUT_F_ACCEPT", 0 );
                    }
                    else
                    {
                        DRAW_FRONTEND_HELPER_TEXT( "READY", "INPUT_F_ACCEPT", 0 );
                    }
                    if (N_604003528())
                    {
                        if (NETWORK_GET_NUM_PLAYERS_MET() > 0)
                        {
                            DRAW_FRONTEND_HELPER_TEXT( "PLAYERS", "INPUT_F_X", 0 );
                        }
                    }
                    else if (NETWORK_GET_FRIEND_COUNT() > 0)
                    {
                        if (NOT NETWORK_IS_TVT())
                        {
                            DRAW_FRONTEND_HELPER_TEXT( "INVITES", "INPUT_F_X", 0 );
                        }
                    }
                    if (sub_94963())
                    {
                        DRAW_FRONTEND_HELPER_TEXT( "MODEL", "INPUT_F_Y", 0 );
                    }
                    DRAW_FRONTEND_HELPER_TEXT( "FRONTEND", "PAD_START", 1 );
                    if (NETWORK_IS_TVT())
                    {
                        if (NETWORK_IS_RENDEZVOUS_HOST())
                        {
                            if (NETWORK_ALL_PARTY_MEMBERS_PRESENT())
                            {
                                DRAW_FRONTEND_HELPER_TEXT( "NTGTU_8", "PAD_BACK", 0 );
                            }
                        }
                    }
                    else
                    {
                        DRAW_FRONTEND_HELPER_TEXT( "NEW_GAME", "PAD_BACK", 0 );
                    }
                    if (sub_99133( l_U1275 ))
                    {
                        DRAW_FRONTEND_HELPER_TEXT( "SETTINGS", "PAD_DPAD_ALL", 0 );
                    }
                    else
                    {
                        DRAW_FRONTEND_HELPER_TEXT( "SETTINGS", "PAD_DPAD_UPDOWN", 0 );
                    }
                }
            }
            else if (((uParam1^)[GET_PLAYER_ID()] == 3) || ((NOT (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))) AND ((uParam1^)[GET_PLAYER_ID()] != -3)))
            {
                sub_98628( 0 );
                INIT_FRONTEND_HELPER_TEXT();
                DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
                if (sub_57384())
                {
                    (uParam1^)[GET_PLAYER_ID()] = -3;
                }
            }
            else if ((uParam1^)[GET_PLAYER_ID()] == 2)
            {
                l_U1087[sub_94124( 16 )]._fU20 = 1;
                sub_98628( 0 );
                if (NOT l_U1286)
                {
                    if (J > 6)
                    {
                        if (sub_55728( ref l_U1276, (J - 6) + 1, 0 ))
                        {
                            l_U1275 = l_U1276;
                        }
                    }
                    GET_NETWORK_TIMER( ref iVar26 );
                    if ((sub_57384()) AND (l_U1279 < (iVar26 + 500)))
                    {
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        l_U1087[sub_94124( 16 )]._fU20 = 0;
                        l_U1291 = 1;
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                    else if (((sub_57046()) AND (NETWORK_GET_NUM_PLAYERS_MET() > 0)) AND (N_604003528()))
                    {
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        l_U1299 = 1;
                    }
                    else
                    {
                        sub_53965( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                        GET_FRONTEND_DESIGN_VALUE( 23, ref uVar34, ref fVar35 );
                        GET_FRONTEND_DESIGN_VALUE( 24, ref fVar36, ref fVar33 );
                        GET_HUD_COLOUR( 49, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                        if (NOT (sub_18483( ref bVar28 )))
                        {
                            if (bVar31)
                            {
                                if (NOT bVar32)
                                {
                                    if (bVar28)
                                    {
                                        sub_55436( "NEEDMORETEAMS", uVar34, fVar35, fVar36 + 0.04050000, fVar33, 255, 255, 255, 255, 2 );
                                    }
                                    else
                                    {
                                        sub_55436( "NEEDMOREPLAYERS", uVar34, fVar35, fVar36 + 0.04050000, fVar33, 255, 255, 255, 255, 2 );
                                    }
                                    bVar32 = true;
                                }
                            }
                            else if (bVar28)
                            {
                                sub_55436( "NEEDMORETEAMS", uVar34, fVar35, fVar36, fVar33, 255, 255, 255, 255, 2 );
                            }
                            else
                            {
                                sub_55436( "NEEDMOREPLAYERS", uVar34, fVar35, fVar36, fVar33, 255, 255, 255, 255, 2 );
                            }
                            bVar31 = true;;
                        }
                    }
                    INIT_FRONTEND_HELPER_TEXT();
                    DRAW_FRONTEND_HELPER_TEXT( "UNREADY", "INPUT_F_CANCEL", 0 );
                    if (N_604003528())
                    {
                        if (NETWORK_GET_NUM_PLAYERS_MET() > 0)
                        {
                            DRAW_FRONTEND_HELPER_TEXT( "PLAYERS", "INPUT_F_X", 0 );
                        }
                    }
                    DRAW_FRONTEND_HELPER_TEXT( "SETTINGS", "PAD_DPAD_UPDOWN", 0 );
                }
            }
            else if ((uParam1^)[GET_PLAYER_ID()] == -4)
            {
                if (sub_57384())
                {
                    sub_98628( 1 );
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1291 = 1;
                    (uParam1^)[GET_PLAYER_ID()] = 0;
                }
                else if (sub_57232())
                {
                    sub_55041( 1 );
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1291 = 1;
                    (uParam1^)[GET_PLAYER_ID()] = -2;
                }
                else
                {
                    sub_55728( ref l_U1086, 14, 0 );
                }
            }
            else if (((uParam1^)[GET_PLAYER_ID()] == -7) || ((uParam1^)[GET_PLAYER_ID()] == -8))
            {
                if (((l_U1369) AND (NOT NETWORK_IS_TVT())) AND (NOT sub_53752()))
                {
                    if (sub_7667() < 3)
                    {
                        l_U1087[sub_94124( 17 )]._fU20 = GET_PLAYER_ID();
                        l_U1369 = 0;
                    }
                    else if ((l_U1087[sub_94124( 17 )]._fU20) != -1)
                    {
                        if ((l_U1087[sub_94124( 17 )]._fU20) != GET_PLAYER_ID())
                        {
                            if (NOT (IS_NETWORK_PLAYER_ACTIVE( l_U1087[sub_94124( 17 )]._fU20 )))
                            {
                                l_U1087[sub_94124( 17 )]._fU20 = GET_PLAYER_ID();
                            }
                        }
                    }
                    if (sub_57384())
                    {
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        l_U1369 = 0;
                    }
                    else if (sub_96604())
                    {
                        iVar16 = l_U1087[sub_94124( 17 )]._fU20;
                        sub_83453( ref iVar16, 16 );
                        while (NOT (IS_NETWORK_PLAYER_ACTIVE( iVar16 )))
                        {
                            sub_83453( ref iVar16, 16 );
                        }
                        l_U1087[sub_94124( 17 )]._fU20 = iVar16;
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
                    }
                    else if (sub_97010())
                    {
                        iVar16 = l_U1087[sub_94124( 17 )]._fU20;
                        sub_96868( ref iVar16, 16 );
                        while (NOT (IS_NETWORK_PLAYER_ACTIVE( iVar16 )))
                        {
                            sub_96868( ref iVar16, 16 );
                        }
                        l_U1087[sub_94124( 17 )]._fU20 = iVar16;
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
                    }
                    else if (sub_57232())
                    {
                        if ((l_U1256 != (l_U1087[sub_94124( 17 )]._fU20)) AND ((l_U1087[sub_94124( 17 )]._fU20) != GET_PLAYER_ID()))
                        {
                            l_U1256 = l_U1087[sub_94124( 17 )]._fU20;
                            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        }
                    };;;;
                    if ((l_U1087[sub_94124( 17 )]._fU20) == GET_PLAYER_ID())
                    {
                        l_U1256 = GET_PLAYER_ID();
                    }
                }
                else if (sub_57384())
                {
                    sub_55041( 1 );
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1291 = 1;
                    if (((IS_THIS_MACHINE_THE_SERVER()) AND ((uParam1^)[GET_PLAYER_ID()] == -8)) AND (NOT l_U1370))
                    {
                        (uParam1^)[GET_PLAYER_ID()] = -7;
                    }
                    else
                    {
                        (uParam1^)[GET_PLAYER_ID()] = -6;
                    }
                }
                else if ((((sub_95081()) AND (sub_7667() > 2)) AND (NOT NETWORK_IS_TVT())) AND (NOT sub_53752()))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1369 = 1;
                }
                else if ((IS_THIS_MACHINE_THE_SERVER()) AND (NOT sub_53752()))
                {
                    if ((uParam1^)[GET_PLAYER_ID()] == -7)
                    {
                        if (sub_57232())
                        {
                            if (NOT l_U1370)
                            {
                                if ((NOT (sub_93757( l_U1086 ))) || (GET_NUMBER_OF_PLAYERS() <= 4))
                                {
                                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                                    (uParam1^)[GET_PLAYER_ID()] = -8;
                                }
                            }
                        }
                        else if (l_U1370)
                        {
                            (uParam1^)[GET_PLAYER_ID()] = -8;
                        }
                        else if (sub_101626( ref l_U1086, 14 ))
                        {
                            if (GET_NUMBER_OF_PLAYERS() > 4)
                            {
                                while (sub_93757( l_U1086 ))
                                {
                                    l_U1086--;
                                }
                            }
                        }
                        else if (sub_101969( ref l_U1086, 14 ))
                        {
                            if (GET_NUMBER_OF_PLAYERS() > 4)
                            {
                                while (sub_93757( l_U1086 ))
                                {
                                    l_U1086++;
                                }
                            }
                        }
                        (uParam3^) = sub_102311( l_U1086 );;;
                    }
                    else if ((uParam1^)[GET_PLAYER_ID()] == -8)
                    {
                        if ((sub_93757( l_U1086 )) AND (GET_NUMBER_OF_PLAYERS() > 4))
                        {
                            (uParam1^)[GET_PLAYER_ID()] = -7;
                        }
                    }
                }
                else if (sub_53752())
                {
                    if (sub_57232())
                    {
                        if (NOT NETWORK_LEAVE_GAME_PENDING())
                        {
                            sub_102624( ref uVar38, sub_102311( l_U1086 ), -1 );
                            if ((NETWORK_IS_GAME_RANKED()) AND ((sub_102311( l_U1086 )) != 16))
                            {
                                uVar38._fU0[1] = 1;
                            }
                            N_1187265313( ref uVar38 );
                            sub_102962();
                        }
                    }
                    else
                    {
                        sub_55728( ref l_U1086, 14, 0 );
                    }
                }
                else if ((uParam3^) == -1)
                {
                    l_U1086 = sub_93499( sub_6720() );
                }
                else
                {
                    l_U1086 = sub_93499( (uParam3^) );
                };;;;;;
                if (GET_HOST_ID() > -1)
                {
                    if ((uParam1^)[GET_HOST_ID()] > -5)
                    {
                        sub_55041( 1 );
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                }
            }
            else if (((((uParam1^)[GET_PLAYER_ID()] == -3) || ((uParam1^)[GET_PLAYER_ID()] == -6)) || ((uParam1^)[GET_PLAYER_ID()] == -2)) || ((uParam1^)[GET_PLAYER_ID()] == -1))
            {
                if (sub_57384())
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1291 = 1;
                    if ((uParam1^)[GET_PLAYER_ID()] == -6)
                    {
                        sub_55041( 1 );
                        (uParam1^)[GET_PLAYER_ID()] = -7;
                    }
                    else if ((uParam1^)[GET_PLAYER_ID()] == -2)
                    {
                        sub_55041( 1 );
                        (uParam1^)[GET_PLAYER_ID()] = -4;
                    }
                    else
                    {
                        sub_98628( 1 );
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                }
                else if (sub_57232())
                {
                    if (NOT NETWORK_LEAVE_GAME_PENDING())
                    {
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        UNPAUSE_GAME();
                        if (NOT IS_SCREEN_FADED_OUT())
                        {
                            sub_52185( 0 );
                        }
                        if ((uParam1^)[GET_PLAYER_ID()] == -1)
                        {
                            if (NETWORK_IS_RENDEZVOUS_HOST())
                            {
                                sub_103448();
                            }
                            else
                            {
                                (uParam1^)[GET_PLAYER_ID()] = 0;
                            }
                        }
                        else if ((uParam1^)[GET_PLAYER_ID()] == -2)
                        {
                            if (NOT NETWORK_LEAVE_GAME_PENDING())
                            {
                                sub_102624( ref uVar38, sub_102311( l_U1086 ), -1 );
                                if ((NETWORK_IS_GAME_RANKED()) AND ((sub_102311( l_U1086 )) != 16))
                                {
                                    uVar38._fU0[1] = 1;
                                }
                                N_1187265313( ref uVar38 );
                                sub_102962();
                            }
                        }
                        else
                        {
                            sub_65145();
                        }
                    }
                }
                if (((((uParam1^)[GET_PLAYER_ID()] == -3) || ((uParam1^)[GET_PLAYER_ID()] == -6)) || ((uParam1^)[GET_PLAYER_ID()] == -2)) || ((uParam1^)[GET_PLAYER_ID()] == -1))
                {
                    SET_WIDESCREEN_FORMAT( 0 );
                    DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                    SET_WIDESCREEN_FORMAT( 1 );
                    sub_53965( 0, sub_55382(), sub_57688(), 0, 0, 0, 0, 0, 255 );
                    GET_FRONTEND_DESIGN_VALUE( 106, ref uVar34, ref fVar35 );
                    GET_FRONTEND_DESIGN_VALUE( 107, ref fVar36, ref fVar33 );
                    GET_HUD_COLOUR( 49, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                    if ((uParam1^)[GET_PLAYER_ID()] == -1)
                    {
                        sub_55436( "RETURNTOPARTYM", uVar34, fVar35, fVar36, fVar33, iVar17, iVar18, iVar19, 255, 1 );
                    }
                    else if ((uParam1^)[GET_PLAYER_ID()] == -2)
                    {
                        sub_55436( "CHOOSENEWGAME", uVar34, fVar35, fVar36, fVar33, iVar17, iVar18, iVar19, 255, 1 );
                    }
                    else
                    {
                        sub_55436( "WANT_TO_LEAVE", uVar34, fVar35, fVar36, fVar33, iVar17, iVar18, iVar19, 255, 1 );
                    }
                    INIT_FRONTEND_HELPER_TEXT();
                    DRAW_FRONTEND_HELPER_TEXT( "CANCEL", "INPUT_F_CANCEL", 0 );
                    DRAW_FRONTEND_HELPER_TEXT( "CONFIRM", "INPUT_F_ACCEPT", 0 );
                }
            };;;;;;
            SET_WIDESCREEN_FORMAT( 3 );
            if (((uParam1^)[GET_PLAYER_ID()] == 0) || ((uParam1^)[GET_PLAYER_ID()] == 2))
            {
                if (J > 6)
                {
                    if (((IS_THIS_MACHINE_THE_SERVER()) AND (l_U1276 == 0)) AND (l_U1283))
                    {
                        GET_NETWORK_TIMER( ref iVar26 );
                        if (l_U1282 < (iVar26 - 750))
                        {
                            GET_NETWORK_TIMER( ref l_U1282 );
                            sub_104212( ref l_U1284 );
                        }
                    }
                    else
                    {
                        l_U1282 = 0;
                        l_U1284 = 0;
                        l_U1283 = 0;
                    }
                    if (NOT l_U1284)
                    {
                        if (l_U1276 == 0)
                        {
                            DRAW_SPRITE( l_U599[1], fVar37, 0.79100000, 0.02100000, 0.02400000, 180.00000000, 255, 255, 255, 255 );
                        }
                        else if (l_U1276 == (J - 6))
                        {
                            DRAW_SPRITE( l_U599[1], fVar37, 0.79100000, 0.02100000, 0.02400000, 0.00000000, 255, 255, 255, 255 );
                        }
                        else
                        {
                            DRAW_SPRITE( l_U599[2], fVar37, 0.79100000, 0.02100000, 0.02400000, 0.00000000, 255, 255, 255, 255 );
                        }
                    }
                }
            }
        }
    }
    l_U1286 = 0;
    if (sub_5714())
    {
        for ( I = 0; I < 21; I++ )
        {
            if (l_U1087[I]._fU16 != 0)
            {
                if (l_U1087[I]._fU16 < 12)
                {
                    (uParam2^)[I] = l_U1087[I]._fU20;
                }
            }
        }
        sub_6136();
    }
    if (NOT NETWORK_IS_TVT())
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (sub_18655())
            {
                if ((GET_PLAYER_TEAM( sub_1079() )) == -1)
                {
                    SET_PLAYER_TEAM( sub_1079(), sub_52568() );
                    if ((uParam1^)[GET_PLAYER_ID()] == 2)
                    {
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                }
            }
            else if (sub_18610())
            {
                if ((GET_PLAYER_TEAM( sub_1079() )) == -1)
                {
                    SET_PLAYER_TEAM( sub_1079(), sub_53050( 2 ) );
                    if ((uParam1^)[GET_PLAYER_ID()] == 2)
                    {
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                }
                else if (sub_18752() < 2)
                {
                    if ((sub_53413( GET_PLAYER_TEAM( sub_1079() ) )) > 1)
                    {
                        if (sub_53511( GET_PLAYER_ID() ))
                        {
                            SET_PLAYER_TEAM( sub_1079(), sub_53050( 2 ) );
                            if ((uParam1^)[GET_PLAYER_ID()] == 2)
                            {
                                (uParam1^)[GET_PLAYER_ID()] = 0;
                            }
                        }
                    }
                }
            }
            else if (sub_10749())
            {
                if ((GET_PLAYER_TEAM( sub_1079() )) != 0)
                {
                    SET_PLAYER_TEAM( sub_1079(), 0 );
                }
            }
            else if ((GET_PLAYER_TEAM( sub_1079() )) != -1)
            {
                SET_PLAYER_TEAM( sub_1079(), -1 );
                if ((uParam1^)[GET_PLAYER_ID()] == 2)
                {
                    (uParam1^)[GET_PLAYER_ID()] = 0;
                }
            };;;;
        }
    }
    if (((((uParam1^)[GET_PLAYER_ID()] == -3) || ((uParam1^)[GET_PLAYER_ID()] == -6)) || ((uParam1^)[GET_PLAYER_ID()] == -2)) || ((uParam1^)[GET_PLAYER_ID()] == -1))
    {
        sub_57543();
        return;
    }
    else if (IS_PAUSE_MENU_ACTIVE())
    {
        sub_98628( 1 );
        sub_57543();
        return;
    }
    else if (l_U1299)
    {
        if (N_604003528())
        {
            if (sub_55000())
            {
                l_U1299 = 0;
            }
            sub_57543();
            return;
        }
        else if (sub_105167( bVar31, bVar32 ))
        {
            l_U1299 = 0;
        }
        sub_57543();
        return;;
    }
    else if (sub_94963())
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (GET_PLAYERSETTINGS_MODEL_CHOICE() != (sub_108083( sub_2736() )))
            {
                if (sub_18143( GET_PLAYERSETTINGS_MODEL_CHOICE() ))
                {
                    CHANGE_PLAYER_MODEL( sub_1079(), GET_PLAYERSETTINGS_MODEL_CHOICE() );
                    SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE( sub_1079() );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( GET_PLAYERSETTINGS_MODEL_CHOICE() );
                    sub_416( GET_PLAYER_ID(), 0 );
                }
            }
            else if (HAS_GAMER_CHANGED_NETWORK_MODEL_SETTINGS())
            {
                SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE( sub_1079() );
            }
        }
    };;;;
    if ((sub_53752()) || (NOT N_604003528()))
    {
        if (NOT bVar31)
        {
            if (((uParam1^)[GET_PLAYER_ID()] == 0) || ((uParam1^)[GET_PLAYER_ID()] == 2))
            {
                iVar16 = GET_LOCAL_PLAYER_MP_CASH();
                if (iVar16 > 0)
                {
                    SET_WIDESCREEN_FORMAT( 2 );
                    sub_53965( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                    GET_FRONTEND_DESIGN_VALUE( 23, ref uVar34, ref fVar35 );
                    GET_FRONTEND_DESIGN_VALUE( 24, ref fVar36, ref fVar33 );
                    GET_HUD_COLOUR( 49, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                    sub_54262( "CASH", uVar34, fVar35, fVar36, fVar33, 255, 255, 255, 255, 2, iVar16 );
                    SET_WIDESCREEN_FORMAT( 3 );
                }
            }
        }
    }
    if ((uParam1^)[GET_PLAYER_ID()] == -4)
    {
        sub_55041( 1 );
        sub_53965( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
        sub_55436( "NEWGAME", sub_55382(), 0.08500000, sub_65337( 113 ), sub_65370( 113 ), 255, 255, 255, 255, 2 );
        INIT_FRONTEND_HELPER_TEXT();
        DRAW_FRONTEND_HELPER_TEXT( "CANCEL", "INPUT_F_CANCEL", 0 );
        DRAW_FRONTEND_HELPER_TEXT( "CONFIRM", "INPUT_F_ACCEPT", 0 );
        DRAW_FRONTEND_HELPER_TEXT( "MODE", "PAD_DPAD_UPDOWN", 0 );
        sub_108657( 0 );
        SET_WIDESCREEN_FORMAT( 2 );
        if (GET_IS_WIDESCREEN())
        {
            sub_53965( 0, sub_55382(), sub_57688() * 1.20000000, 0, 0, 0, 0, 0, 255 );
        }
        else
        {
            sub_53965( 0, sub_55382(), sub_57688(), 0, 0, 0, 0, 0, 255 );
        }
        GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
        if (GET_IS_WIDESCREEN())
        {
            sub_55436( "CHOOSENEWGAME", sub_55382() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
        }
        else
        {
            sub_55436( "CHOOSENEWGAME", sub_55382() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
        }
    }
    else if (((uParam1^)[GET_PLAYER_ID()] == -7) || ((uParam1^)[GET_PLAYER_ID()] == -8))
    {
        sub_55041( 1 );
        sub_53965( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
        if (sub_53752())
        {
            sub_55436( "NEXTGAME", sub_55382(), 0.11900000, sub_65337( 113 ), sub_65370( 113 ), 255, 255, 255, 255, 2 );
        }
        else
        {
            sub_55436( "NEXTGAME", sub_55382(), 0.08500000, sub_65337( 113 ), sub_65370( 113 ), 255, 255, 255, 255, 2 );
        }
        SET_WIDESCREEN_FORMAT( 3 );
        INIT_FRONTEND_HELPER_TEXT();
        if (((l_U1369) AND (NOT NETWORK_IS_TVT())) AND (NOT sub_53752()))
        {
            if ((l_U1256 != (l_U1087[sub_94124( 17 )]._fU20)) AND ((l_U1087[sub_94124( 17 )]._fU20) != GET_PLAYER_ID()))
            {
                DRAW_FRONTEND_HELPER_TEXT( "CANCEL", "INPUT_F_CANCEL", 0 );
                DRAW_FRONTEND_HELPER_TEXT( "KICK_PLAYERU", "INPUT_F_ACCEPT", 0 );
            }
            else
            {
                DRAW_FRONTEND_HELPER_TEXT( "BACK", "INPUT_F_CANCEL", 0 );
            }
            DRAW_FRONTEND_HELPER_TEXT( "CHOOSEKICK", "PAD_DPAD_LR", 0 );
            fVar33 = 0.01300000;
            DRAW_SPRITE( l_U599[0], (fVar37 + fVar33) - 0.01300000, 0.76300000 + 0.01300000, 0.01400000 * -1, 0.02000000, 0.00000000, 255, 255, 255, 255 );
            sub_55436( ref l_U1087[sub_94124( 17 )]._fU0, fVar37 - fVar33, 0.76300000, 0.31500000, 0.43000000, 255, 255, 255, 255, 3 );
            sub_53965( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
            if ((((l_U1087[sub_94124( 17 )]._fU20) > -1) AND ((l_U1087[sub_94124( 17 )]._fU20) != GET_PLAYER_ID())) AND (IS_NETWORK_PLAYER_ACTIVE( l_U1087[sub_94124( 17 )]._fU20 )))
            {
                sub_74879( sub_427( l_U1087[sub_94124( 17 )]._fU20 ), ref iVar21, ref iVar22, ref iVar23 );
                if (l_U102)
                {
                    if (N_604003528())
                    {
                        fVar36 = sub_56603( fVar37 + fVar33, 0.76300000, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, "WWWWWWWWWWWWWWW" );
                    }
                    else
                    {
                        fVar36 = sub_56603( fVar37 + fVar33, 0.76300000, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, "WWWWWWWWWWWWWWWW" );
                    }
                }
                else
                {
                    SET_TEXT_SCALE( 0.31500000, 0.43000000 );
                    SET_TEXT_USE_UNDERSCORE( 1 );
                    fVar49 = GET_STRING_WIDTH_WITH_STRING( "STRING", GET_PLAYER_NAME( sub_427( l_U1087[sub_94124( 17 )]._fU20 ) ) );
                    fVar50 = sub_57688() - (fVar37 + fVar33);
                    if (fVar49 <= fVar50)
                    {
                        fVar36 = sub_56603( fVar37 + fVar33, 0.76300000, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_427( l_U1087[sub_94124( 17 )]._fU20 ) ) );
                    }
                    else
                    {
                        fVar36 = sub_56603( fVar37 + fVar33, 0.76300000, (fVar50 * 0.31500000) / fVar49, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_427( l_U1087[sub_94124( 17 )]._fU20 ) ) );
                    }
                    SET_TEXT_USE_UNDERSCORE( 0 );
                }
            }
            else
            {
                fVar36 = sub_55436( "NONE", fVar37 + fVar33, 0.76300000, 0.31500000, 0.43000000, 255, 255, 255, 255, 2 );
            }
            DRAW_SPRITE( l_U599[0], ((fVar37 + fVar33) + 0.01300000) + fVar36, 0.76300000 + 0.01300000, 0.01400000, 0.02000000, 0.00000000, 255, 255, 255, 255 );
        }
        else if (sub_53752())
        {
            DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
            DRAW_FRONTEND_HELPER_TEXT( "CONFIRM", "INPUT_F_ACCEPT", 0 );
            sub_108657( 0 );
        }
        else if ((IS_THIS_MACHINE_THE_SERVER()) AND ((uParam1^)[GET_PLAYER_ID()] == -7))
        {
            DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
            DRAW_FRONTEND_HELPER_TEXT( "CONFIRM", "INPUT_F_ACCEPT", 0 );
            if ((sub_7667() > 2) AND (NOT NETWORK_IS_TVT()))
            {
                DRAW_FRONTEND_HELPER_TEXT( "KICK_PLAYERU", "INPUT_F_Y", 0 );
            }
            DRAW_FRONTEND_HELPER_TEXT( "MODE", "PAD_DPAD_UPDOWN", 0 );
        }
        else if ((IS_THIS_MACHINE_THE_SERVER()) AND (NOT l_U1370))
        {
            DRAW_FRONTEND_HELPER_TEXT( "CANCEL", "INPUT_F_CANCEL", 0 );
            if ((sub_7667() > 2) AND (NOT NETWORK_IS_TVT()))
            {
                DRAW_FRONTEND_HELPER_TEXT( "KICK_PLAYERU", "INPUT_F_Y", 0 );
            }
        }
        else
        {
            DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
            if ((sub_7667() > 2) AND (NOT NETWORK_IS_TVT()))
            {
                DRAW_FRONTEND_HELPER_TEXT( "KICK_PLAYERU", "INPUT_F_Y", 0 );
            }
        };;;;
        if (NOT sub_53752())
        {
            sub_108657( 1 );
        }
        SET_WIDESCREEN_FORMAT( 2 );
        if (NOT sub_53752())
        {
            if (GET_IS_WIDESCREEN())
            {
                sub_53965( 0, sub_55382(), sub_57688() * 1.20000000, 0, 0, 0, 0, 0, 255 );
                GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                sub_55436( "CHOOSNEXTGAME", sub_55382() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
            }
            else
            {
                sub_53965( 0, sub_55382(), sub_57688(), 0, 0, 0, 0, 0, 255 );
                GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                sub_55436( "CHOOSNEXTGAME", sub_55382() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
            }
        }
        if (NOT sub_53752())
        {
            if (((uParam1^)[GET_PLAYER_ID()] == -8) AND (IS_THIS_MACHINE_THE_SERVER()))
            {
                bVar29 = true;
                for ( I = 0; I < 16; I++ )
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( I ))
                    {
                        if (((uParam1^)[I] != -7) AND ((uParam1^)[I] != -8))
                        {
                            bVar29 = false;
                        }
                    }
                }
                if (sub_93757( l_U1086 ))
                {
                    if (GET_NUMBER_OF_PLAYERS() > 4)
                    {
                        (uParam1^)[GET_PLAYER_ID()] = -7;
                        bVar29 = false;
                    }
                }
                else if ((sub_102311( l_U1086 )) == sub_6720())
                {
                    if ((sub_102311( l_U1086 )) != 10)
                    {
                        if (l_U1274 < 10)
                        {
                            if (bVar29)
                            {
                                (uParam1^)[GET_PLAYER_ID()] = 0;
                                bVar29 = false;
                            }
                        }
                    }
                }
                if (bVar29)
                {
                    if (NOT NETWORK_IS_OPERATION_PENDING())
                    {
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        UNPAUSE_GAME();
                        if (NOT IS_SCREEN_FADED_OUT())
                        {
                            sub_52185( 0 );
                        }
                        sub_111882( sub_102311( l_U1086 ) );
                    }
                }
            }
        }
    }
    else
    {
        SET_WIDESCREEN_FORMAT( 2 );
        StrCopy( ref cVar8, "CP_DESCRP_", 16 );
        ConcatString(ref cVar8, sub_6720(), 16);
        if (GET_IS_WIDESCREEN())
        {
            sub_53965( 0, sub_55382(), sub_57688() * 1.20000000, 0, 0, 0, 0, 0, 255 );
            GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
            sub_55436( ref cVar8, sub_55382() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
        }
        else
        {
            sub_53965( 0, sub_55382(), sub_57688(), 0, 0, 0, 0, 0, 255 );
            GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
            sub_55436( ref cVar8, sub_55382() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
        }
        SET_WIDESCREEN_FORMAT( 3 );
        if (NOT l_U1289)
        {
            if ((l_U1087[sub_94124( 16 )]._fU20) == 1)
            {
                sub_112202( 0 );
            }
            else if (sub_112541( ref I ))
            {
                if (sub_112637( ref l_U1087[I]._fU0, l_U1087[I]._fU24 ))
                {
                    if (l_U1291)
                    {
                        l_U1291 = 0;
                    }
                    else if (GET_IS_WIDESCREEN())
                    {
                        DRAW_SPRITE( l_U639[l_U1087[I]._fU20], 0.68500000, 0.38100000, 0.52800000, 0.37700000, 0.00000000, 255, 255, 255, 255 );
                    }
                    else
                    {
                        DRAW_SPRITE( l_U639[l_U1087[I]._fU20], 0.70900000, 0.38100000, 0.52800000, 0.37700000, 0.00000000, 255, 255, 255, 255 );
                    }
                }
                else if (l_U1291)
                {
                    l_U1291 = 0;
                }
                else if (GET_IS_WIDESCREEN())
                {
                    DRAW_SPRITE( l_U599[35], 0.68500000, 0.38100000, 0.52800000, 0.37700000, 0.00000000, 255, 255, 255, 255 );
                }
                else
                {
                    DRAW_SPRITE( l_U599[35], 0.70900000, 0.38100000, 0.52800000, 0.37700000, 0.00000000, 255, 255, 255, 255 );
                };;;
            }
            else if (l_U1291)
            {
                l_U1291 = 0;
            }
            else if (GET_IS_WIDESCREEN())
            {
                DRAW_SPRITE( l_U599[35], 0.68500000, 0.38100000, 0.52800000, 0.37700000, 0.00000000, 255, 255, 255, 255 );
            }
            else
            {
                DRAW_SPRITE( l_U599[35], 0.70900000, 0.38100000, 0.52800000, 0.37700000, 0.00000000, 255, 255, 255, 255 );
            };;;;
        }
        if (GET_IS_WIDESCREEN())
        {
            DRAW_RECT( fVar37, 0.57100000, 0.43400000, 0.00200000, 60, 60, 60, 255 );
            DRAW_RECT( fVar37, 0.77500000, 0.43400000, 0.00200000, 60, 60, 60, 255 );
        }
        else if (N_604003528())
        {
            DRAW_RECT( fVar37, 0.57100000, 0.40500000, 0.00200000, 60, 60, 60, 255 );
            DRAW_RECT( fVar37, 0.77500000, 0.40500000, 0.00200000, 60, 60, 60, 255 );
        }
        else
        {
            DRAW_RECT( fVar37, 0.57100000, 0.40500000, 0.00400000, 60, 60, 60, 255 );
            DRAW_RECT( fVar37, 0.77500000, 0.40500000, 0.00400000, 60, 60, 60, 255 );
        }
        SET_WIDESCREEN_FORMAT( 0 );
        if ((GET_IS_WIDESCREEN()) || (N_604003528()))
        {
            DRAW_RECT( 0.50000000, sub_65337( 0 ), 1.00000000, 0.00200000, 180, 180, 180, 255 );
        }
        else
        {
            DRAW_RECT( 0.50000000, sub_65337( 0 ), 1.00000000, 0.00400000, 180, 180, 180, 255 );
        }
        SET_WIDESCREEN_FORMAT( 3 );
        fVar35 = 0.57800000;
        iVar25 = l_U1276;
        iVar24 = 6;
        for ( I = iVar25; I <= ((iVar25 + iVar24) - 1); I++ )
        {
            if (l_U1087[I]._fU16 != 0)
            {
                bVar27 = false;
                iVar17 = 255;
                iVar18 = 255;
                iVar19 = 255;
                sub_53965( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                if (sub_96153())
                {
                    fVar33 = 0.01300000;
                    if ((uParam1^)[GET_PLAYER_ID()] == 0)
                    {
                        bVar27 = sub_99133( I );
                        if (NOT (sub_97902( I )))
                        {
                            if (bVar27)
                            {
                                if (l_U1275 == I)
                                {
                                    DRAW_SPRITE( l_U599[0], (fVar37 + fVar33) - 0.01300000, fVar35 + 0.01300000, 0.01400000 * -1, 0.02000000, 0.00000000, 255, 255, 255, 255 );
                                }
                                else
                                {
                                    GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref J );
                                }
                            }
                            else if (l_U1275 != I)
                            {
                                iVar17 = 60;
                                iVar18 = 60;
                                iVar19 = 60;
                            }
                        }
                        else if (l_U1275 != I)
                        {
                            iVar17 = 60;
                            iVar18 = 60;
                            iVar19 = 60;
                        }
                    }
                    sub_55436( ref l_U1087[I]._fU0, fVar37 - fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 3 );
                }
                else
                {
                    fVar33 = 0.00800000;
                    sub_55436( ref l_U1087[I]._fU0, fVar37 - fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 3 );
                }
                sub_53965( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                switch (l_U1087[I]._fU16)
                {
                    case 1:
                    case 8:
                    if ((bVar27) || (l_U1087[I]._fU24 > 0))
                    {
                        cVar8 = {l_U1087[I]._fU0};
                        ConcatString(ref cVar8, l_U1087[I]._fU20, 16);
                        fVar36 = sub_55436( ref cVar8, fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    else
                    {
                        fVar36 = sub_55436( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 2:
                    if (l_U1087[I]._fU20 < 2147483647)
                    {
                        fVar36 = sub_72789( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, l_U1087[I]._fU20, 1065353216 );
                    }
                    else
                    {
                        fVar36 = sub_56603( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, "-" );
                    }
                    break;
                    case 3:
                    fVar36 = sub_54587( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, l_U1087[I]._fU20 );
                    break;
                    case 11:
                    if ((bVar27) || (l_U1087[I]._fU24 > 0))
                    {
                        if (l_U1087[I]._fU20 == 0)
                        {
                            fVar36 = sub_55436( "RANDOM", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                        else
                        {
                            fVar36 = sub_54587( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, l_U1087[I]._fU20 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_55436( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 13:
                    if ((bVar27) || (l_U1087[I]._fU24 > 0))
                    {
                        ;
                    }
                    else
                    {
                        fVar36 = sub_55436( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 4:
                    case 14:
                    if ((bVar27) || (l_U1087[I]._fU24 > 0))
                    {
                        fVar36 = sub_115117( "NUM_OUTOF_NUM", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, l_U1087[I]._fU20 + 1, l_U1087[I]._fU24 );
                    }
                    else
                    {
                        fVar36 = sub_55436( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 15:
                    if (l_U1087[I]._fU20 > -1)
                    {
                        cVar8 = {l_U1087[I]._fU0};
                        ConcatString(ref cVar8, l_U1087[I]._fU20, 16);
                        fVar36 = sub_55436( ref cVar8, fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    else
                    {
                        fVar36 = sub_55436( "OFF", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 5:
                    case 7:
                    if ((bVar27) || (l_U1087[I]._fU24 > 0))
                    {
                        if (l_U1087[I]._fU20 > 0)
                        {
                            fVar36 = sub_55436( "YES", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                        else
                        {
                            fVar36 = sub_55436( "NO", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_55436( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 6:
                    case 16:
                    if ((bVar27) || (l_U1087[I]._fU24 > 0))
                    {
                        if (l_U1087[I]._fU20 > 0)
                        {
                            fVar36 = sub_55436( "ON", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                        else
                        {
                            fVar36 = sub_55436( "OFF", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_55436( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 9:
                    case 10:
                    if (sub_115934())
                    {
                        if (l_U1087[I]._fU20 > 0)
                        {
                            fVar36 = sub_55436( "ON", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                        else
                        {
                            fVar36 = sub_55436( "OFF", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_55436( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 12:
                    if ((bVar27) || (l_U1087[I]._fU24 > 0))
                    {
                        fVar36 = sub_54587( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, sub_116265() );
                    }
                    else if ((GET_PLAYER_TEAM( sub_1079() )) == -1)
                    {
                        fVar36 = sub_55436( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    else
                    {
                        fVar36 = sub_54587( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, sub_116265() );
                    }
                    break;
                    case 17:
                    if ((bVar27) || (l_U1087[I]._fU24 > 0))
                    {
                        if (((l_U1087[I]._fU20 > -1) AND (l_U1087[I]._fU20 != GET_PLAYER_ID())) AND (IS_NETWORK_PLAYER_ACTIVE( l_U1087[I]._fU20 )))
                        {
                            if (l_U1275 == I)
                            {
                                sub_74879( sub_427( l_U1087[I]._fU20 ), ref iVar21, ref iVar22, ref iVar23 );
                            }
                            else
                            {
                                iVar21 = iVar17;
                                iVar22 = iVar18;
                                iVar23 = iVar19;
                            }
                            if (l_U102)
                            {
                                if (N_604003528())
                                {
                                    fVar36 = sub_56603( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, "WWWWWWWWWWWWWWW" );
                                }
                                else
                                {
                                    fVar36 = sub_56603( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, "WWWWWWWWWWWWWWWW" );
                                }
                            }
                            else
                            {
                                SET_TEXT_SCALE( 0.31500000, 0.43000000 );
                                SET_TEXT_USE_UNDERSCORE( 1 );
                                fVar49 = GET_STRING_WIDTH_WITH_STRING( "STRING", GET_PLAYER_NAME( sub_427( l_U1087[I]._fU20 ) ) );
                                if (GET_IS_WIDESCREEN())
                                {
                                    if (fVar49 <= 0.20300000)
                                    {
                                        fVar36 = sub_56603( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_427( l_U1087[I]._fU20 ) ) );
                                    }
                                    else
                                    {
                                        fVar36 = sub_56603( fVar37 + fVar33, fVar35, 0.06394500 / fVar49, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_427( l_U1087[I]._fU20 ) ) );
                                    }
                                }
                                else if (fVar49 <= 0.18900000)
                                {
                                    fVar36 = sub_56603( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_427( l_U1087[I]._fU20 ) ) );
                                }
                                else
                                {
                                    fVar36 = sub_56603( fVar37 + fVar33, fVar35, 0.05953500 / fVar49, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_427( l_U1087[I]._fU20 ) ) );
                                }
                                SET_TEXT_USE_UNDERSCORE( 0 );
                            }
                        }
                        else
                        {
                            fVar36 = sub_55436( "NONE", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_55436( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                }
                if ((l_U1275 == I) AND ((uParam1^)[GET_PLAYER_ID()] == 0))
                {
                    if (bVar27)
                    {
                        if (NOT (sub_97902( l_U1275 )))
                        {
                            DRAW_SPRITE( l_U599[0], ((fVar37 + fVar33) + 0.01300000) + fVar36, fVar35 + 0.01300000, 0.01400000, 0.02000000, 0.00000000, 255, 255, 255, 255 );
                        }
                    }
                }
                fVar35 += 0.03200000;
            }
        }
    }
    sub_57543();
    array(ref iVar51, 7);
    for ( I = 0; I < 7; I++ )
    {
        iVar51[I] = -1;
    }
    iVar51[0] = 0;
    SET_WIDESCREEN_FORMAT( 2 );
    if (GET_IS_WIDESCREEN())
    {
        fVar36 = 0.40600000;
        fVar35 = 0.18000000;
    }
    else
    {
        fVar36 = 0.34900000;
        fVar35 = 0.18100000;
    }
    if (iParam0 == 10)
    {
        for ( I = 0; I < 16; I++ )
        {
            if (bVar59)
            {
                bVar59 = false;
            }
            else
            {
                GET_HUD_COLOUR( 49, ref iVar17, ref iVar18, ref iVar19, ref J );
                if (GET_IS_WIDESCREEN())
                {
                    DRAW_RECT( ((0.20800000 + sub_55382()) + 0.00900000) + sub_117757(), 0.04900000 + fVar35, 0.42900000, 0.03800000, iVar17, iVar18, iVar19, 45 );
                }
                else
                {
                    DRAW_RECT( ((0.17900000 + sub_55382()) + 0.00900000) + sub_117757(), 0.04900000 + fVar35, 0.37200000, 0.03700000, iVar17, iVar18, iVar19, 45 );
                }
                bVar59 = true;
            }
            fVar35 += 0.03600000;
        }
        if (GET_IS_WIDESCREEN())
        {
            fVar35 = 0.18000000;
        }
        else
        {
            fVar35 = 0.18100000;
        }
        for ( J = 0; J < 8; J++ )
        {
            if ((sub_53413( J )) > 0)
            {
                iVar14++;
                sub_53965( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                GET_TEAM_RGB_COLOUR( J, ref iVar17, ref iVar18, ref iVar19 );
                if (GET_IS_WIDESCREEN())
                {
                    sub_54587( sub_55382() + 0.00900000, fVar35 + 0.03200000, 0.38000000, 0.55500000, iVar17, iVar18, iVar19, 255, 1, iVar14 );
                }
                else
                {
                    sub_54587( sub_55382() + 0.00900000, fVar35 + 0.03100000, 0.38000000, 0.55500000, iVar17, iVar18, iVar19, 255, 1, iVar14 );
                }
                for ( I = 0; I < 16; I++ )
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( l_U662[0]._fU24[I] ))
                    {
                        if ((GET_PLAYER_TEAM( sub_427( l_U662[0]._fU24[I] ) )) == J)
                        {
                            if (GET_IS_WIDESCREEN())
                            {
                                sub_74783( l_U662[0]._fU24[I], ref iVar51, (sub_55382() + 0.00900000) + sub_117757(), ref fVar35, 0.35000000, 0.47750000, 0.03600000, iParam0, 0 );
                            }
                            else
                            {
                                sub_74783( l_U662[0]._fU24[I], ref iVar51, (sub_55382() + 0.00900000) + sub_117757(), ref fVar35, 0.32500000, 0.43500000, 0.03600000, iParam0, 0 );
                            }
                            sub_118568( l_U662[0]._fU24[I], (((uParam1^)[l_U662[0]._fU24[I]] == 2) || (((NOT sub_53752()) AND ((uParam1^)[l_U662[0]._fU24[I]] == -7)) AND (GET_HOST_ID() != l_U662[0]._fU24[I]))) || (((uParam1^)[l_U662[0]._fU24[I]] == -8) AND (GET_HOST_ID() == l_U662[0]._fU24[I])), ((sub_55382() + 0.00900000) + sub_117757()) + fVar36, fVar35 );
                        }
                    }
                }
            }
        }
    }
    else
    {
        for ( I = 0; I < 16; I++ )
        {
            if (bVar59)
            {
                bVar59 = false;
            }
            else
            {
                GET_HUD_COLOUR( 49, ref iVar17, ref iVar18, ref iVar19, ref J );
                if (GET_IS_WIDESCREEN())
                {
                    DRAW_RECT( ((0.20800000 + sub_55382()) + 0.00900000) + -0.00900000, 0.04900000 + fVar35, 0.42900000, 0.03800000, iVar17, iVar18, iVar19, 45 );
                }
                else
                {
                    DRAW_RECT( ((0.17900000 + sub_55382()) + 0.00900000) + -0.00900000, 0.04900000 + fVar35, 0.37200000, 0.03800000, iVar17, iVar18, iVar19, 45 );
                }
                bVar59 = true;
            }
            fVar35 += 0.03600000;
        }
        if (GET_IS_WIDESCREEN())
        {
            fVar35 = 0.18000000;
        }
        else
        {
            fVar35 = 0.18100000;
        }
        for ( I = 0; I < 16; I++ )
        {
            if (IS_NETWORK_PLAYER_ACTIVE( l_U662[0]._fU24[I] ))
            {
                if (((GET_PLAYER_TEAM( sub_427( l_U662[0]._fU24[I] ) )) == -1) || (sub_10749()))
                {
                    if (GET_IS_WIDESCREEN())
                    {
                        sub_74783( l_U662[0]._fU24[I], ref iVar51, (sub_55382() + 0.00900000) + -0.00900000, ref fVar35, 0.35000000, 0.47750000, 0.03600000, iParam0, ((uParam1^)[GET_PLAYER_ID()] == 0) || ((uParam1^)[GET_PLAYER_ID()] == 2) );
                    }
                    else
                    {
                        sub_74783( l_U662[0]._fU24[I], ref iVar51, (sub_55382() + 0.00900000) + -0.00900000, ref fVar35, 0.32500000, 0.43500000, 0.03600000, iParam0, ((uParam1^)[GET_PLAYER_ID()] == 0) || ((uParam1^)[GET_PLAYER_ID()] == 2) );
                    }
                    sub_118568( l_U662[0]._fU24[I], (((uParam1^)[l_U662[0]._fU24[I]] == 2) || (((NOT sub_53752()) AND ((uParam1^)[l_U662[0]._fU24[I]] == -7)) AND (GET_HOST_ID() != l_U662[0]._fU24[I]))) || (((uParam1^)[l_U662[0]._fU24[I]] == -8) AND (GET_HOST_ID() == l_U662[0]._fU24[I])), ((sub_55382() + 0.00900000) + -0.00900000) + fVar36, fVar35 );
                }
            }
        }
    }
    return;
}

void sub_93320()
{
    if (DOES_CAM_EXIST( l_U1342 ))
    {
        DESTROY_CAM( l_U1342 );
    }
    return;
}

int sub_93499(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 2: return 1;
        case 5: return 2;
        case 6: return 3;
        case 7: return 4;
        case 1: return 5;
        case 3: return 6;
        case 4: return 7;
        case 10: return 8;
        case 12: return 9;
        case 13: return 10;
        case 14: return 11;
        case 15: return 12;
        case 16: return 13;
    }
    return 0;
}

int sub_93757(int iParam0)
{
    if (((iParam0 == 10) || (iParam0 == 11)) || (iParam0 == 12))
    {
        return 1;
    }
    return 0;
}

int sub_94124(int iParam0)
{
    int Result;

    for ( Result = 0; Result < 21; Result++ )
    {
        if (l_U1087[Result]._fU16 == iParam0)
        {
            return Result;
        }
    }
    return 20;
}

void sub_94339()
{
    int I;

    for ( I = 0; I < 8; I++ )
    {
        l_U1021[I] = I;
        l_U1030[I] = I;
        l_U1039[I] = 0;
    }
    return;
}

int sub_94963()
{
    unknown uVar2;

    uVar2 = sub_6720();
    switch (uVar2)
    {
        case 9: return 0;
        case 10: return 0;
        case 11: return 0;
        case 12: return 0;
        case 13: return 0;
        case 14: return 0;
        case 15: return 0;
    }
    return 1;
}

int sub_95081()
{
    if (IS_CONTROL_PRESSED( 2, 80 ))
    {
        if (l_U1287)
        {
            l_U1287 = 0;
            return 1;
        }
    }
    else if (((((NOT (IS_CONTROL_PRESSED( 2, 77 ))) AND (NOT (IS_CONTROL_PRESSED( 2, 79 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 78 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 12 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 13 ))))
    {
        l_U1287 = 1;
    }
    return 0;
}

int sub_95263()
{
    if (IS_BUTTON_PRESSED( 0, 12 ))
    {
        l_U1288 = 1;
    }
    else if (l_U1288)
    {
        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
        l_U1288 = 0;
        return 1;
    }
    return 0;
}

int sub_95738()
{
    if (IS_BUTTON_PRESSED( 0, 13 ))
    {
        if (l_U1287)
        {
            l_U1287 = 0;
            return 1;
        }
    }
    else if (((((NOT (IS_CONTROL_PRESSED( 2, 79 ))) AND (NOT (IS_CONTROL_PRESSED( 2, 78 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 80 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 77 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 12 ))))
    {
        l_U1287 = 1;
    }
    return 0;
}

int sub_95876()
{
    if (NETWORK_IS_TVT())
    {
        if (NETWORK_IS_RENDEZVOUS_HOST())
        {
            if (NETWORK_ALL_PARTY_MEMBERS_PRESENT())
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_96153()
{
    int I;

    for ( I = 0; I < 21; I++ )
    {
        if (l_U1087[I]._fU16 != 0)
        {
            if (l_U1087[I]._fU16 < 12)
            {
                if (IS_THIS_MACHINE_THE_SERVER())
                {
                    return 1;
                }
            }
            else
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_96472()
{
    if (NOT NETWORK_IS_TVT())
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (sub_18610())
            {
                if ((sub_53413( GET_PLAYER_TEAM( sub_1079() ) )) == 1)
                {
                    return 0;
                }
                return 1;
            }
            else if (sub_18655())
            {
                if (sub_7667() == 1)
                {
                    return 0;
                }
                return 1;
            }
        }
    }
    return 0;
}

int sub_96604()
{
    int iVar2;
    int iVar3;
    int iVar4;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar3, ref iVar4, ref iVar2, ref iVar2 );
    GET_NETWORK_TIMER( ref iVar2 );
    if ((IS_BUTTON_PRESSED( 0, 10 )) || (iVar3 < 65436))
    {
        if ((l_U1285) || (iVar2 > (l_U1277 + 300)))
        {
            l_U1277 = iVar2;
            l_U1285 = 0;
            return 1;
        }
    }
    if (NOT l_U1285)
    {
        if (NOT (IS_BUTTON_PRESSED( 0, 10 )))
        {
            if (NOT (IS_BUTTON_PRESSED( 0, 11 )))
            {
                if (NOT (IS_BUTTON_PRESSED( 0, 8 )))
                {
                    if (NOT (IS_BUTTON_PRESSED( 0, 9 )))
                    {
                        if ((iVar3 < 100) AND (iVar3 > 65436))
                        {
                            if ((iVar4 < 100) AND (iVar4 > 65436))
                            {
                                l_U1285 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_96868(unknown uParam0, int iParam1)
{
    (uParam0^)--;
    if ((uParam0^) < 0)
    {
        (uParam0^) = iParam1 - 1;
        return 1;
    }
    return 0;
}

int sub_97010()
{
    int iVar2;
    int iVar3;
    int iVar4;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar3, ref iVar4, ref iVar2, ref iVar2 );
    GET_NETWORK_TIMER( ref iVar2 );
    if ((IS_BUTTON_PRESSED( 0, 11 )) || (iVar3 > 100))
    {
        if ((l_U1285) || (iVar2 > (l_U1277 + 300)))
        {
            l_U1277 = iVar2;
            l_U1285 = 0;
            return 1;
        }
    }
    if (NOT l_U1285)
    {
        if (NOT (IS_BUTTON_PRESSED( 0, 10 )))
        {
            if (NOT (IS_BUTTON_PRESSED( 0, 11 )))
            {
                if (NOT (IS_BUTTON_PRESSED( 0, 8 )))
                {
                    if (NOT (IS_BUTTON_PRESSED( 0, 9 )))
                    {
                        if ((iVar3 < 100) AND (iVar3 > 65436))
                        {
                            if ((iVar4 < 100) AND (iVar4 > 65436))
                            {
                                l_U1285 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_97902(int iParam0)
{
    if ((((iParam0 == l_U1293) || (iParam0 == l_U1295)) || (iParam0 == l_U1292)) || (iParam0 == l_U1294))
    {
        return 1;
    }
    return 0;
}

int sub_97997(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar5, ref iVar6, ref iVar4, ref iVar4 );
    GET_NETWORK_TIMER( ref iVar4 );
    if ((IS_BUTTON_PRESSED( 0, 10 )) || (iVar5 < 65436))
    {
        if ((l_U1285) || (iVar4 > (l_U1277 + 300)))
        {
            for ( (uParam0^)--; (uParam0^) < 0; (uParam0^) += iParam1 )
            {
                ;
            }
            l_U1277 = iVar4;
            l_U1285 = 0;
            return 1;
        }
    }
    if ((IS_BUTTON_PRESSED( 0, 11 )) || (iVar5 > 100))
    {
        if ((l_U1285) || (iVar4 > (l_U1277 + 300)))
        {
            for ( (uParam0^)++; (uParam0^) >= iParam1; (uParam0^) -= iParam1 )
            {
                ;
            }
            l_U1277 = iVar4;
            l_U1285 = 0;
            return 1;
        }
    }
    if (NOT l_U1285)
    {
        if (NOT (IS_BUTTON_PRESSED( 0, 10 )))
        {
            if (NOT (IS_BUTTON_PRESSED( 0, 11 )))
            {
                if (NOT (IS_BUTTON_PRESSED( 0, 8 )))
                {
                    if (NOT (IS_BUTTON_PRESSED( 0, 9 )))
                    {
                        if ((iVar5 < 100) AND (iVar5 > 65436))
                        {
                            if ((iVar6 < 100) AND (iVar6 > 65436))
                            {
                                l_U1285 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void sub_98375(int iParam0)
{
    if (iParam0 == 18)
    {
        if (IS_MOBILE_PHONE_RADIO_ACTIVE())
        {
            SET_MOBILE_PHONE_RADIO_STATE( 0 );
        }
    }
    else if ((GET_PLAYER_RADIO_STATION_INDEX() != iParam0) || (NOT IS_MOBILE_PHONE_RADIO_ACTIVE()))
    {
        if (NOT IS_MOBILE_PHONE_RADIO_ACTIVE())
        {
            SET_MOBILE_PHONE_RADIO_STATE( 1 );
        }
        RETUNE_RADIO_TO_STATION_INDEX( iParam0 );
    }
    if (l_U1367._fU0 != iParam0)
    {
        l_U1367._fU0 = iParam0;
        CLEAR_SCRIPT_ARRAY_FROM_SCRATCHPAD( 1 );
        SAVE_SCRIPT_ARRAY_IN_SCRATCHPAD( ref l_U1367, 1, 99, 1 );
    }
    return;
}

void sub_98628(unknown uParam0)
{
    sub_55041( uParam0 );
    sub_63198( 0 );
    return;
}

int sub_99133(unknown uParam0)
{
    if (l_U1087[uParam0]._fU16 != 0)
    {
        if ((l_U1087[uParam0]._fU16 == 9) || (l_U1087[uParam0]._fU16 == 10))
        {
            if (IS_THIS_MACHINE_THE_SERVER())
            {
                if (sub_18655())
                {
                    if (sub_18655())
                    {
                        return 1;
                    }
                }
                else
                {
                    return 1;
                }
            }
        }
        else if (l_U1087[uParam0]._fU16 < 12)
        {
            if (IS_THIS_MACHINE_THE_SERVER())
            {
                if (l_U1087[uParam0]._fU24 > 0)
                {
                    return 1;
                }
            }
        }
        else if (l_U1087[uParam0]._fU16 > 12)
        {
            if (l_U1087[uParam0]._fU24 > 0)
            {
                return 1;
            }
        }
        else if (sub_96472())
        {
            return 1;
        };;;;
    }
    return 0;
}

int sub_101626(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar5, ref iVar6, ref iVar4, ref iVar4 );
    GET_NETWORK_TIMER( ref iVar4 );
    if ((IS_BUTTON_PRESSED( 0, 8 )) || (iVar6 < 65436))
    {
        if ((l_U1285) || (iVar4 > (l_U1277 + 150)))
        {
            (uParam0^)--;
            if ((uParam0^) < 0)
            {
                (uParam0^) = 0;
            }
            else
            {
                PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_HIGHLIGHT" );
            }
            l_U1277 = iVar4;
            l_U1285 = 0;
            return 1;
        }
    }
    if (NOT l_U1285)
    {
        if (NOT (IS_BUTTON_PRESSED( 0, 10 )))
        {
            if (NOT (IS_BUTTON_PRESSED( 0, 11 )))
            {
                if (NOT (IS_BUTTON_PRESSED( 0, 8 )))
                {
                    if (NOT (IS_BUTTON_PRESSED( 0, 9 )))
                    {
                        if ((iVar5 < 100) AND (iVar5 > 65436))
                        {
                            if ((iVar6 < 100) AND (iVar6 > 65436))
                            {
                                l_U1285 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_101969(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar5, ref iVar6, ref iVar4, ref iVar4 );
    GET_NETWORK_TIMER( ref iVar4 );
    if ((IS_BUTTON_PRESSED( 0, 9 )) || (iVar6 > 100))
    {
        if ((l_U1285) || (iVar4 > (l_U1277 + 150)))
        {
            (uParam0^)++;
            if ((uParam0^) >= iParam1)
            {
                (uParam0^) = iParam1 - 1;
            }
            else
            {
                PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_HIGHLIGHT" );
            }
            l_U1277 = iVar4;
            l_U1285 = 0;
            return 1;
        }
    }
    if (NOT l_U1285)
    {
        if (NOT (IS_BUTTON_PRESSED( 0, 10 )))
        {
            if (NOT (IS_BUTTON_PRESSED( 0, 11 )))
            {
                if (NOT (IS_BUTTON_PRESSED( 0, 8 )))
                {
                    if (NOT (IS_BUTTON_PRESSED( 0, 9 )))
                    {
                        if ((iVar5 < 100) AND (iVar5 > 65436))
                        {
                            if ((iVar6 < 100) AND (iVar6 > 65436))
                            {
                                l_U1285 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_102311(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 1: return 2;
        case 2: return 5;
        case 3: return 6;
        case 4: return 7;
        case 5: return 1;
        case 6: return 3;
        case 7: return 4;
        case 8: return 10;
        case 9: return 12;
        case 10: return 13;
        case 11: return 14;
        case 12: return 15;
        case 13: return 16;
    }
    return 0;
}

void sub_102624(int iParam0, int iParam1, int iParam2)
{
    int I;

    for ( I = 0; I <= (iParam0->_fU0 - 1); I++ )
    {
        iParam0->_fU0[I] = 0;
    }
    if (iParam1 != -1)
    {
        if (iParam2 == -1)
        {
            iParam2 = GET_CURRENT_EPISODE();
        }
        iParam0->_fU0[0] = iParam1;
        iParam0->_fU0[1] = 0;
        iParam0->_fU0[2] = sub_102720( iParam1 );
        iParam0->_fU0[3] = 0;
        iParam0->_fU0[4] = iParam2;
        g_U14 = iParam2;
        iParam0->_fU0[5] = sub_102814( iParam1 );
    }
    return;
}

int sub_102720(unknown uParam0)
{
    switch (uParam0)
    {
        case 13:
        case 14:
        case 15:
        return 4;
        break;
    }
    return 16;
}

int sub_102814(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 3:
        case 4:
        return 8;
        break;
        case 10:
        case 12:
        return 2;
        break;
    }
    return 0;
}

void sub_102962()
{
    g_U10 = 1;
    sub_65158();
    return;
}

void sub_103448()
{
    g_U11 = 1;
    sub_65158();
    return;
}

void sub_104212(unknown uParam0)
{
    if ((uParam0^))
    {
        (uParam0^) = 0;
        return;
    }
    (uParam0^) = 1;
    return;
}

int sub_105167(unknown uParam0, boolean bParam1)
{
    int I;
    int iVar5;
    int iVar6;
    int iVar7;
    unknown uVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    float fVar12;
    unknown uVar13;
    unknown uVar14;
    char[8] cVar15;

    if (GET_IS_WIDESCREEN())
    {
        fVar12 = 0.13500000;
    }
    else
    {
        fVar12 = 0.13900000;
    }
    sub_55041( 1 );
    GET_FRONTEND_DESIGN_VALUE( 113, ref uVar13, ref uVar14 );
    sub_53965( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    sub_55436( "INVITE_TITLE", sub_55382(), 0.08500000, uVar13, uVar14, 255, 255, 255, 255, 2 );
    sub_53965( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    GET_HUD_COLOUR( 56, ref iVar5, ref iVar6, ref iVar7, ref uVar8 );
    sub_55436( "INVITES_DESC", sub_55382() + 0.00100000, fVar12, 0.31500000, 0.42950000, iVar5, iVar6, iVar7, 255, 2 );
    if (GET_IS_WIDESCREEN())
    {
        fVar12 = 0.21550000;
    }
    else
    {
        fVar12 = 0.21600000;
    }
    for ( I = 0; I < 16; I++ )
    {
        if (bVar10)
        {
            bVar10 = false;
        }
        else
        {
            GET_HUD_COLOUR( 49, ref iVar5, ref iVar6, ref iVar7, ref uVar8 );
            if (GET_IS_WIDESCREEN())
            {
                DRAW_RECT( 0.57000000 + sub_55382(), 0.01370000 + fVar12, 1.15500000, 0.03800000, iVar5, iVar6, iVar7, 45 );
            }
            else
            {
                DRAW_RECT( 0.40200000 + sub_55382(), 0.01370000 + fVar12, 0.82000000, 0.03800000, iVar5, iVar6, iVar7, 45 );
            }
            bVar10 = true;
        }
        fVar12 += 0.03600000;
    }
    if (GET_IS_WIDESCREEN())
    {
        fVar12 = 0.21550000;
    }
    else
    {
        fVar12 = 0.21600000;
    }
    sub_55728( ref l_U1300, NETWORK_GET_FRIEND_COUNT(), 0 );
    if (NETWORK_GET_FRIEND_COUNT() > 16)
    {
        DRAW_FRONTEND_HELPER_TEXT( "UP_DOWN", "PAD_LT_RT", 0 );
        if (IS_BUTTON_JUST_PRESSED( 0, 7 ))
        {
            l_U1300 += 16;
            if (l_U1300 >= NETWORK_GET_FRIEND_COUNT())
            {
                l_U1300 = NETWORK_GET_FRIEND_COUNT() - 1;
            }
        }
        else if (IS_BUTTON_JUST_PRESSED( 0, 5 ))
        {
            l_U1300 -= 16;
            if (l_U1300 < 0)
            {
                l_U1300 = 0;
            }
        }
    }
    if (l_U1300 >= (l_U1301 + 16))
    {
        l_U1301 = (l_U1300 - 16) + 1;
    }
    else if (l_U1300 < l_U1301)
    {
        l_U1301 = l_U1300;
    }
    for ( I = l_U1301; I <= ((l_U1301 + 16) - 1); I++ )
    {
        if (I < NETWORK_GET_FRIEND_COUNT())
        {
            sub_53965( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
            if (l_U1300 == I)
            {
                iVar5 = 255;
                iVar6 = 255;
                iVar7 = 255;
            }
            else if (NETWORK_IS_FRIEND_ONLINE( NETWORK_GET_FRIEND_NAME( I ) ))
            {
                GET_HUD_COLOUR( 56, ref iVar5, ref iVar6, ref iVar7, ref uVar8 );
            }
            else
            {
                GET_HUD_COLOUR( 50, ref iVar5, ref iVar6, ref iVar7, ref uVar8 );
            }
            if (l_U102)
            {
                if (N_604003528())
                {
                    sub_56603( sub_55382(), fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2, "WWWWWWWWWWWWWWW" );
                }
                else
                {
                    sub_56603( sub_55382(), fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2, "WWWWWWWWWWWWWWWW" );
                }
            }
            else
            {
                SET_TEXT_USE_UNDERSCORE( 1 );
                sub_56603( sub_55382(), fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2, NETWORK_GET_FRIEND_NAME( I ) );
                SET_TEXT_USE_UNDERSCORE( 0 );
            }
            sub_53965( 0, 0.00000000, 1.50000000, 0, 0, 0, 0, 0, 255 );
            if (sub_106249( I ))
            {
                sub_55436( "INGAME", sub_55382() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
            }
            else if (sub_106404( I ))
            {
                sub_55436( "INVITING", sub_55382() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
                if (GET_CURRENT_EPISODE() == (NETWORK_GET_UNACCEPTED_INVITE_EPISODE( sub_106550( I ) )))
                {
                    StrCopy( ref cVar15, "NTGT_", 8 );
                    ConcatString(ref cVar15, NETWORK_GET_UNACCEPTED_INVITE_GAME_MODE( sub_106550( I ) ), 8);
                    sub_53965( 0, 0.00000000, 1.50000000, 0, 0, 0, 0, 0, 255 );
                    if (GET_IS_WIDESCREEN())
                    {
                        sub_55436( ref cVar15, sub_57688() + 0.32600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 3 );
                    }
                    else
                    {
                        sub_55436( ref cVar15, sub_57688() + -0.01100000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 3 );
                    }
                }
            }
            else if (NETWORK_DID_INVITE_FRIEND( NETWORK_GET_FRIEND_NAME( I ) ))
            {
                sub_55436( "INVITED", sub_55382() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
            }
            else if (NETWORK_IS_FRIEND_ONLINE( NETWORK_GET_FRIEND_NAME( I ) ))
            {
                sub_55436( "ONLINE", sub_55382() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
            }
            else
            {
                sub_55436( "OFFLINE", sub_55382() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
            };;;;
            if (NETWORK_IS_FRIEND_IN_SAME_TITLE( NETWORK_GET_FRIEND_NAME( I ) ))
            {
                DRAW_SPRITE( l_U599[33], sub_55382() + 0.33300000, fVar12 + 0.01520000, 0.03900000, 0.02600000, 0.00000000, iVar5, iVar6, iVar7, 255 );
            }
            fVar12 += 0.03600000;
        }
    }
    GET_NETWORK_TIMER( ref iVar9 );
    if (l_U1362 > (iVar9 - 5000))
    {
        SET_WIDESCREEN_FORMAT( 2 );
        sub_53965( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
        GET_FRONTEND_DESIGN_VALUE( 23, ref uVar11, ref fVar12 );
        GET_FRONTEND_DESIGN_VALUE( 24, ref uVar13, ref uVar14 );
        if (NOT bParam1)
        {
            SET_TEXT_USE_UNDERSCORE( 1 );
            sub_107262( "INVITED_PLAYER", uVar11, fVar12 + 0.04050000, uVar13, uVar14, 255, 255, 255, 255, 2, ref l_U1353 );
            SET_TEXT_USE_UNDERSCORE( 0 );
        }
    }
    INIT_FRONTEND_HELPER_TEXT();
    DRAW_FRONTEND_HELPER_TEXT( "BACK", "INPUT_F_CANCEL", 0 );
    if ((l_U1361 != l_U1300) || (l_U1362 < (iVar9 - 5000)))
    {
        l_U1361 = -1;
    }
    if (NOT (sub_106249( l_U1300 )))
    {
        if (sub_106404( l_U1300 ))
        {
            DRAW_FRONTEND_HELPER_TEXT( "ACCEPT_INVITE", "INPUT_F_ACCEPT", 0 );
        }
        else if (((NOT (NETWORK_DID_INVITE_FRIEND( NETWORK_GET_FRIEND_NAME( l_U1300 ) ))) || (l_U1361 == -1)) AND (NETWORK_IS_FRIEND_ONLINE( NETWORK_GET_FRIEND_NAME( l_U1300 ) )))
        {
            DRAW_FRONTEND_HELPER_TEXT( "INVITE", "INPUT_F_ACCEPT", 0 );
        }
    }
    if (NETWORK_GET_FRIEND_COUNT() > 1)
    {
        DRAW_FRONTEND_HELPER_TEXT( "SCROLL", "PAD_DPAD_UPDOWN", 0 );
        if (NETWORK_GET_FRIEND_COUNT() > 16)
        {
            DRAW_FRONTEND_HELPER_TEXT( "UP_DOWN", "PAD_LT_RT", 0 );
        }
    }
    else if (NETWORK_GET_FRIEND_COUNT() == 0)
    {
        return 1;
    }
    if (sub_57232())
    {
        if (NETWORK_IS_FRIEND_ONLINE( NETWORK_GET_FRIEND_NAME( l_U1300 ) ))
        {
            if (NOT (sub_106249( l_U1300 )))
            {
                if (sub_106404( l_U1300 ))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    NETWORK_ACCEPT_INVITE( sub_106550( l_U1300 ) );
                }
                else if (((NOT (NETWORK_DID_INVITE_FRIEND( NETWORK_GET_FRIEND_NAME( l_U1300 ) ))) || (l_U1361 == -1)) AND (NETWORK_IS_FRIEND_ONLINE( NETWORK_GET_FRIEND_NAME( l_U1300 ) )))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    NETWORK_INVITE_FRIEND( NETWORK_GET_FRIEND_NAME( l_U1300 ), "" );
                    StrCopy( ref l_U1353, NETWORK_GET_FRIEND_NAME( l_U1300 ), 32 );
                    l_U1361 = l_U1300;
                    GET_NETWORK_TIMER( ref l_U1362 );
                    l_U1363 = 0;
                }
            }
        }
    }
    else if (sub_57384())
    {
        return 1;
    }
    return 0;
}

int sub_106249(unknown uParam0)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (COMPARE_STRING( NETWORK_GET_FRIEND_NAME( uParam0 ), GET_PLAYER_NAME( sub_427( I ) ) ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_106404(unknown uParam0)
{
    int I;

    for ( I = 0; I < NETWORK_GET_NUM_UNACCEPTED_INVITES(); I++ )
    {
        if (COMPARE_STRING( NETWORK_GET_FRIEND_NAME( uParam0 ), NETWORK_GET_UNACCEPTED_INVITER_NAME( I ) ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_106550(unknown uParam0)
{
    int Result;

    for ( Result = 0; Result < NETWORK_GET_NUM_UNACCEPTED_INVITES(); Result++ )
    {
        if (COMPARE_STRING( NETWORK_GET_FRIEND_NAME( uParam0 ), NETWORK_GET_UNACCEPTED_INVITER_NAME( Result ) ))
        {
            return Result;
        }
    }
    return 0;
}

void sub_107262(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_54302( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_STRING( uParam0, uParam10 );
    DISPLAY_TEXT_WITH_LITERAL_STRING( uParam1, uParam2, uParam0, uParam10 );
    return Result;
}

void sub_108083(unknown uParam0)
{
    unknown Result;

    GET_CHAR_MODEL( uParam0, ref Result );
    return Result;
}

void sub_108657(boolean bParam0)
{
    int I;
    int iVar4;
    int iVar5;
    int iVar6;
    unknown uVar7;
    boolean bVar8;
    float fVar9;
    float fVar10;

    SET_WIDESCREEN_FORMAT( 3 );
    if (GET_IS_WIDESCREEN())
    {
        fVar9 = 0.68400000;
        fVar10 = 0.21700000;
    }
    else
    {
        fVar9 = 0.69900000;
        fVar10 = 0.21500000;
    }
    for ( I = 0; I < 14; I++ )
    {
        bVar8 = true;
        if (bParam0)
        {
            if (sub_93757( I ))
            {
                if (GET_NUMBER_OF_PLAYERS() > 4)
                {
                    bVar8 = false;
                }
            }
        }
        if (bVar8)
        {
            if (l_U1086 == I)
            {
                iVar4 = 255;
                iVar5 = 255;
                iVar6 = 255;
            }
            else
            {
                GET_HUD_COLOUR( 56, ref iVar4, ref iVar5, ref iVar6, ref uVar7 );
            }
        }
        else if (l_U1086 != I)
        {
            iVar4 = 60;
            iVar5 = 60;
            iVar6 = 60;
        }
        sub_53965( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
        sub_55436( sub_108890( I ), fVar9, fVar10, 0.35000000, 0.47750000, iVar4, iVar5, iVar6, 255, 1 );
        fVar10 += 0.03600000;
    }
    return;
}

string sub_108890(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return "NTGT_0";
        case 1: return "NTGT_2";
        case 2: return "NTGT_5";
        case 3: return "NTGT_6";
        case 4: return "NTGT_7";
        case 5: return "NTGT_1";
        case 6: return "NTGT_3";
        case 7: return "NTGT_4";
        case 8: return "NTGT_10";
        case 9: return "NTGT_12";
        case 10: return "NTGT_13";
        case 11: return "NTGT_14";
        case 12: return "NTGT_15";
        case 13: return "NTGT_16";
    }
    return "NTGT_";
}

void sub_111882(unknown uParam0)
{
    g_U13 = uParam0;
    if (NOT g_U26675)
    {
        sub_65158();
    }
    return;
}

void sub_112202(boolean bParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    float fVar7;
    float fVar8;
    char[16] cVar9;

    if (bParam0)
    {
        fVar7 = sub_55382();
        if (GET_IS_WIDESCREEN())
        {
            fVar8 = 0.13500000;
        }
        else
        {
            fVar8 = 0.13900000;
        }
    }
    else if (GET_IS_WIDESCREEN())
    {
        fVar7 = 0.46830000;
        fVar8 = 0.21800000;
    }
    else
    {
        fVar7 = 0.49600000;
        fVar8 = 0.21800000;
    }
    StrCopy( ref cVar9, "LONG_DESCRP_", 16 );
    ConcatString(ref cVar9, sub_6720(), 16);
    if (l_U1278 == 1)
    {
        ConcatString(ref cVar9, "A", 16);
    }
    else if (l_U1278 == 2)
    {
        ConcatString(ref cVar9, "B", 16);
    }
    if (NOT bParam0)
    {
        SET_WIDESCREEN_FORMAT( 3 );
    }
    SET_TEXT_LINE_HEIGHT_MULT( 1.25000000 );
    if ((GET_IS_WIDESCREEN()) AND (bParam0))
    {
        sub_53965( 0, fVar7, sub_57688() * 1.20000000, 0, 0, 0, 0, 0, 255 );
    }
    else
    {
        sub_53965( 0, fVar7, sub_57688(), 0, 0, 0, 0, 0, 255 );
    }
    GET_HUD_COLOUR( 56, ref uVar3, ref uVar4, ref uVar5, ref uVar6 );
    sub_55436( ref cVar9, fVar7, fVar8, 0.31500000, 0.42950000, uVar3, uVar4, uVar5, 255, 2 );
    return;
}

int sub_112541(unknown uParam0)
{
    int I;

    for ( I = 0; I < 21; I++ )
    {
        if (l_U1087[I]._fU16 == 8)
        {
            (uParam0^) = I;
            return 1;
        }
    }
    return 0;
}

int sub_112637(unknown uParam0, unknown uParam1)
{
    int I;
    char[16] cVar5;

    if (l_U637)
    {
        return 1;
    }
    StrCopy( ref l_U1345, uParam0, 16 );
    l_U636 = uParam1;
    REQUEST_STREAMED_TXD( uParam0, 1 );
    if (HAS_STREAMED_TXD_LOADED( uParam0 ))
    {
        for ( I = 0; I < l_U636; I++ )
        {
            StrCopy( ref cVar5, uParam0, 16 );
            ConcatString(ref cVar5, I, 16);
            l_U639[I] = GET_TEXTURE_FROM_STREAMED_TXD( uParam0, ref cVar5 );
        }
        l_U637 = 1;
        return 1;
    }
    return 0;
}

void sub_115117(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    float Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_54302( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_NUMBER( uParam0, uParam10 );
    Result += GET_STRING_WIDTH_WITH_NUMBER( "NUMBER", uParam11 );
    Result -= GET_STRING_WIDTH_WITH_NUMBER( "NUMBER", 11 );
    DISPLAY_TEXT_WITH_2_NUMBERS( uParam1, uParam2, uParam0, uParam10, uParam11 );
    return Result;
}

int sub_115934()
{
    if (sub_18655())
    {
        if (sub_18655())
        {
            return 1;
        }
    }
    else if ((sub_18610()) || (sub_10749()))
    {
        return 1;
    }
    return 0;
}

int sub_116265()
{
    int I;
    int Result;

    for ( I = 0; I < 8; I++ )
    {
        if ((sub_53413( I )) > 0)
        {
            Result++;
            if (I == (GET_PLAYER_TEAM( sub_1079() )))
            {
                return Result;
            }
        }
    }
    return 0;
}

float sub_117757()
{
    if (GET_IS_WIDESCREEN())
    {
        return 0.02700000;
    }
    return 0.02100000;
}

void sub_118568(int iParam0, boolean bParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    iVar7 = 3;
    GET_HUD_COLOUR( 56, ref uVar8, ref uVar9, ref uVar10, ref iVar6 );
    GET_NETWORK_TIMER( ref iVar6 );
    if ((sub_118607( iParam0 )) > 0)
    {
        if ((sub_53752()) || (NOT N_604003528()))
        {
            iVar7 = 4;
        }
        if (l_U1368 > iVar6)
        {
            DRAW_SPRITE( l_U599[10], uParam2 + (-0.02400000 * iVar7), uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
        }
        else
        {
            sub_53965( 0, sub_55382(), sub_57688(), 0, 0, 0, 0, 0, 255 );
            sub_54587( (uParam2 + (-0.02400000 * iVar7)) + -0.00030000, (uParam3 + 0.01300000) + -0.01320000, 0.31500000, 0.42950000, 255, 255, 255, 255, 1, sub_118607( iParam0 ) );
            if (l_U1368 < (iVar6 - 1000))
            {
                l_U1368 = iVar6 + 1000;
            }
        }
    }
    if (((sub_53752()) || (NOT N_604003528())) AND ((GET_PLAYER_RANK_LEVEL_DURING_MP( iParam0 )) > -1))
    {
        DRAW_SPRITE( l_U599[17 + (GET_PLAYER_RANK_LEVEL_DURING_MP( iParam0 ))], uParam2 + (-0.02400000 * 3), uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
    }
    if (GET_HOST_ID() == iParam0)
    {
        DRAW_SPRITE( l_U599[32], uParam2 + (-0.02400000 * 2), uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
    }
    if (NETWORK_PLAYER_HAS_HEADSET( iParam0 ))
    {
        if (NETWORK_IS_PLAYER_MUTED_BY_ME( iParam0 ))
        {
            DRAW_SPRITE( l_U599[8], uParam2 + -0.02400000, uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, uVar8, uVar9, uVar10, 255 );
        }
        else if (NETWORK_IS_PLAYER_TALKING( iParam0 ))
        {
            DRAW_SPRITE( l_U599[7], uParam2 + -0.02400000, uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
        }
        else
        {
            DRAW_SPRITE( l_U599[7], uParam2 + -0.02400000, uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, uVar8, uVar9, uVar10, 255 );
        }
    }
    if (bParam1)
    {
        DRAW_SPRITE( l_U599[28], uParam2, uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
    }
    else
    {
        DRAW_SPRITE( l_U599[12], uParam2, uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, uVar8, uVar9, uVar10, 255 );
    }
    return;
}

void sub_118607(int iParam0)
{
    int I;
    int Result;

    if (NOT NETWORK_IS_TVT())
    {
        for ( I = 0; I < 16; I++ )
        {
            if (I != iParam0)
            {
                if (IS_NETWORK_PLAYER_ACTIVE( I ))
                {
                    if (l_U987[I] == iParam0)
                    {
                        Result++;
                    }
                }
            }
        }
    }
    return Result;
}

int sub_120417()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_12059( I ))
        {
            if (l_U1968[I]._fU132)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_120494()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_12059( I ))
        {
            if (l_U1968[I]._fU136)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_120724(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return;
}

void sub_120772()
{
    PRINT_BIG( "STARTINGGAME", 50, 2 );
    if (IS_PAUSE_MENU_ACTIVE())
    {
        DEACTIVATE_FRONTEND();
    }
    l_U1286 = 1;
    return;
}

void sub_121204()
{
    unknown uVar2;

    if (l_U1500._fU352[1] == 0)
    {
        NETWORK_SET_FRIENDLY_FIRE_OPTION( 0 );
    }
    else if (l_U1500._fU352[1] == 1)
    {
        NETWORK_SET_FRIENDLY_FIRE_OPTION( 1 );
    }
    if (l_U1500._fU352[0] == 0)
    {
        DISABLE_PLAYER_LOCKON( sub_1079(), 1 );
    }
    else if (l_U1500._fU352[0] == 1)
    {
        DISABLE_PLAYER_LOCKON( sub_1079(), 0 );
    }
    sub_121358( l_U1500._fU352[3], 1065353216 );
    sub_121617( l_U1500._fU352[4], 1065353216 );
    if (l_U1500._fU352[5] == 0)
    {
        DISPLAY_PLAYER_NAMES( 0 );
    }
    else if (l_U1500._fU352[5] == 1)
    {
        DISPLAY_PLAYER_NAMES( 1 );
    }
    if (l_U1500._fU352[6] == 0)
    {
        NETWORK_SET_HEALTH_RETICULE_OPTION( 0 );
    }
    else if (l_U1500._fU352[6] == 1)
    {
        NETWORK_SET_HEALTH_RETICULE_OPTION( 1 );
    }
    sub_121999( l_U1500._fU352[7] );
    switch (l_U1500._fU352[2])
    {
        case 0:
        l_U3233 = 5;
        break;
        case 1:
        l_U3233 = 4;
        break;
        case 2:
        l_U3233 = 3;
        break;
    }
    sub_122247( l_U1500._fU352[2], 24 );
    sub_122247( l_U1500._fU352[3], 1 );
    sub_122247( l_U1500._fU352[4], 2 );
    sub_122247( l_U1500._fU352[5], 3 );
    sub_122247( l_U1500._fU352[6], 4 );
    sub_122247( l_U1500._fU352[7], 5 );
    sub_122247( l_U1500._fU352[8], 9 );
    sub_122247( l_U1500._fU352[9], 10 );
    sub_122247( l_U1500._fU352[10], 11 );
    sub_122443();
    return;
}

void sub_121358(int iParam0, unknown uParam1)
{
    if (iParam0 == 0)
    {
        SET_RANDOM_CAR_DENSITY_MULTIPLIER( 0.00000000 );
        SET_PARKED_CAR_DENSITY_MULTIPLIER( 2.00000000 );
        SET_REDUCE_VEHICLE_MODEL_BUDGET( 0 );
    }
    else if (iParam0 == 4)
    {
        SET_RANDOM_CAR_DENSITY_MULTIPLIER( 0.00000000 );
        SET_PARKED_CAR_DENSITY_MULTIPLIER( 0.00000000 );
        SET_REDUCE_VEHICLE_MODEL_BUDGET( 1 );
    }
    else if (iParam0 == 1)
    {
        SET_RANDOM_CAR_DENSITY_MULTIPLIER( 0.50000000 * uParam1 );
        SET_PARKED_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SET_REDUCE_VEHICLE_MODEL_BUDGET( 0 );
    }
    else if (iParam0 == 2)
    {
        SET_RANDOM_CAR_DENSITY_MULTIPLIER( 0.80000000 * uParam1 );
        SET_PARKED_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SET_REDUCE_VEHICLE_MODEL_BUDGET( 0 );
    }
    else
    {
        SET_RANDOM_CAR_DENSITY_MULTIPLIER( 1.00000000 * uParam1 );
        SET_PARKED_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SET_REDUCE_VEHICLE_MODEL_BUDGET( 0 );
    };;;;
    return;
}

void sub_121617(int iParam0, unknown uParam1)
{
    if (iParam0 == 3)
    {
        SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
        SET_SCENARIO_PED_DENSITY_MULTIPLIER( 0.00000000, 0.00000000 );
        SET_REDUCE_PED_MODEL_BUDGET( 1 );
    }
    else if (iParam0 == 0)
    {
        SET_PED_DENSITY_MULTIPLIER( 0.40000000 * uParam1 );
        SET_SCENARIO_PED_DENSITY_MULTIPLIER( 0.40000000 * uParam1, 0.30000000 * uParam1 );
        SET_REDUCE_PED_MODEL_BUDGET( 1 );
    }
    else if (iParam0 == 1)
    {
        SET_PED_DENSITY_MULTIPLIER( 0.70000000 * uParam1 );
        SET_SCENARIO_PED_DENSITY_MULTIPLIER( 0.70000000 * uParam1, 0.65000000 * uParam1 );
        SET_REDUCE_PED_MODEL_BUDGET( 0 );
    }
    else
    {
        SET_PED_DENSITY_MULTIPLIER( 1.00000000 * uParam1 );
        SET_SCENARIO_PED_DENSITY_MULTIPLIER( 1.00000000 * uParam1, 1.00000000 * uParam1 );
        SET_REDUCE_PED_MODEL_BUDGET( 0 );
    };;;
    if (sub_48433())
    {
        SET_REDUCE_PED_MODEL_BUDGET( 1 );
    }
    return;
}

void sub_121999(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        NETWORK_SET_TALKER_PROXIMITY( 0.00000000 );
        NETWORK_SET_TEAM_ONLY_CHAT( 0 );
        break;
        case 1:
        NETWORK_SET_TALKER_PROXIMITY( -1.00000000 );
        NETWORK_SET_TEAM_ONLY_CHAT( 0 );
        break;
        case 2:
        NETWORK_SET_TALKER_PROXIMITY( 30.00000000 );
        NETWORK_SET_TEAM_ONLY_CHAT( 0 );
        break;
        case 3:
        NETWORK_SET_TALKER_PROXIMITY( 0.00000000 );
        NETWORK_SET_TEAM_ONLY_CHAT( 1 );
        break;
    }
    return;
}

void sub_122247(unknown uParam0, unknown uParam1)
{
    SET_BIT( ref l_U1439[uParam1], 0 );
    SET_BITS_IN_RANGE( ref l_U1439[uParam1], 1, 31, uParam0 );
    return;
}

void sub_122443()
{
    CLEAR_SCRIPT_ARRAY_FROM_SCRATCHPAD( 2 );
    SAVE_SCRIPT_ARRAY_IN_SCRATCHPAD( ref l_U1439, 61, 2, 2 );
    return;
}

void sub_122500(unknown uParam0)
{
    int I;
    char[16] cVar4;

    sub_122511( uParam0 );
    DEACTIVATE_NETWORK_SETTINGS_MENU();
    SWITCH_OFF_WAYPOINT();
    for ( I = 0; I < 16; I++ )
    {
        l_U579[I] = 0;
    }
    if (IS_MOBILE_PHONE_RADIO_ACTIVE())
    {
        SET_MOBILE_PHONE_RADIO_STATE( 0 );
    }
    TURN_OFF_RADIOHUD_IN_LOBBY();
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    DISPLAY_FRONTEND_MAP_BLIPS( 1 );
    l_U1287 = 0;
    l_U1281 = 10000;
    l_U1290 = 0;
    l_U1299 = 0;
    l_U1370 = 0;
    l_U1364 = 0;
    l_U1256 = GET_PLAYER_ID();
    l_U1087[sub_94124( 16 )]._fU20 = 0;
    if (NOT NETWORK_IS_TVT())
    {
        l_U1087[sub_94124( 17 )]._fU20 = GET_PLAYER_ID();
    }
    StrCopy( ref cVar4, "LONG_DESCRP_", 16 );
    ConcatString(ref cVar4, sub_6720(), 16);
    if (l_U1278 == 1)
    {
        ConcatString(ref cVar4, "A", 16);
    }
    else if (l_U1278 == 2)
    {
        ConcatString(ref cVar4, "B", 16);
    }
    PRINT_NOW( ref cVar4, 1, 1 );
    if ((sub_53752()) || (NOT N_604003528()))
    {
        l_U1257[GET_PLAYER_ID()] = GET_PLAYER_RANK_LEVEL_DURING_MP( GET_PLAYER_ID() );
    }
    UNPAUSE_GAME();
    return;
}

void sub_122511(unknown uParam0)
{
    int I;
    int iVar4;
    char[16] cVar5;

    for ( I = 0; I < 21; I++ )
    {
        if ((l_U1087[I]._fU16 != 0) AND (l_U1087[I]._fU16 < 12))
        {
            switch (l_U1087[I]._fU16)
            {
                case 1:
                case 8:
                cVar5 = {l_U1087[I]._fU0};
                ConcatString(ref cVar5, (uParam0^)[I], 16);
                sub_122684( ref l_U1087[I]._fU0, ref cVar5, iVar4 );
                break;
                case 5:
                case 7:
                if ((uParam0^)[I] > 0)
                {
                    sub_122684( ref l_U1087[I]._fU0, "YES", iVar4 );
                }
                else
                {
                    sub_122684( ref l_U1087[I]._fU0, "NO", iVar4 );
                }
                break;
                case 6:
                case 9:
                case 10:
                if ((uParam0^)[I] > 0)
                {
                    sub_122684( ref l_U1087[I]._fU0, "ON", iVar4 );
                }
                else
                {
                    sub_122684( ref l_U1087[I]._fU0, "OFF", iVar4 );
                }
                break;
                case 11:
                StrCopy( ref cVar5, "CPGO_NUM_", 16 );
                ConcatString(ref cVar5, (uParam0^)[I], 16);
                sub_122684( ref l_U1087[I]._fU0, ref cVar5, iVar4 );
                break;
            }
            iVar4++;
        }
    }
    return;
}

void sub_122684(unknown uParam0, unknown uParam1, unknown uParam2)
{
    StrCopy( ref g_U18._fU676[uParam2], uParam0, 16 );
    StrCopy( ref g_U18._fU1080[uParam2], uParam1, 16 );
    sub_4796( "\n ~~~~ NetCellphone Adding info, ", uParam0 );
    sub_4796( " and ", uParam1 );
    return;
}

void sub_123753()
{
    int I;

    for ( I = 0; I < 20; I++ )
    {
        if (sub_8692( l_U1500._fU1208[I] ))
        {
            if (HAS_CONTROL_OF_NETWORK_ID( l_U1500._fU1208[I] ))
            {
                if ((I < 4) || (I > 11))
                {
                    SET_COMBAT_DECISION_MAKER( sub_8717( l_U1500._fU1208[I] ), l_U3068 );
                    SET_SENSE_RANGE( sub_8717( l_U1500._fU1208[I] ), 65.00000000 );
                }
                else
                {
                    SET_COMBAT_DECISION_MAKER( sub_8717( l_U1500._fU1208[I] ), l_U3067 );
                    SET_SENSE_RANGE( sub_8717( l_U1500._fU1208[I] ), 65.00000000 );
                }
            }
        }
    }
    return;
}

void sub_124050()
{
    if (l_U3209 < 8)
    {
        sub_124071();
        sub_124300();
        sub_124529();
        sub_124758();
        sub_124987();
    }
    else
    {
        sub_125221();
        sub_126179();
        sub_127496();
    }
    return;
}

void sub_124071()
{
    int I;

    for ( I = 0; I < l_U1500._fU1208; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1208[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( sub_8717( l_U1500._fU1208[I] ) ))
            {
                if (DOES_BLIP_EXIST( l_U3116[I] ))
                {
                    REMOVE_BLIP( l_U3116[I] );
                    l_U3222++;
                }
            }
            else if (NOT (DOES_BLIP_EXIST( l_U3116[I] )))
            {
                ADD_BLIP_FOR_CHAR( sub_8717( l_U1500._fU1208[I] ), ref l_U3116[I] );
                CHANGE_BLIP_COLOUR( l_U3116[I], 1 );
            }
        }
    }
    return;
}

void sub_124300()
{
    int I;

    for ( I = 0; I < l_U1500._fU1292; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1292[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( sub_8717( l_U1500._fU1292[I] ) ))
            {
                if (DOES_BLIP_EXIST( l_U3137[I] ))
                {
                    REMOVE_BLIP( l_U3137[I] );
                    l_U3222++;
                }
            }
            else if (NOT (DOES_BLIP_EXIST( l_U3137[I] )))
            {
                ADD_BLIP_FOR_CHAR( sub_8717( l_U1500._fU1292[I] ), ref l_U3137[I] );
                CHANGE_BLIP_COLOUR( l_U3137[I], 1 );
            }
        }
    }
    return;
}

void sub_124529()
{
    int I;

    for ( I = 0; I < l_U1500._fU1572; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1572[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( sub_8717( l_U1500._fU1572[I] ) ))
            {
                if (DOES_BLIP_EXIST( l_U3146[I] ))
                {
                    REMOVE_BLIP( l_U3146[I] );
                    l_U3222++;
                }
            }
            else if (NOT (DOES_BLIP_EXIST( l_U3146[I] )))
            {
                ADD_BLIP_FOR_CHAR( sub_8717( l_U1500._fU1572[I] ), ref l_U3146[I] );
                CHANGE_BLIP_COLOUR( l_U3146[I], 1 );
            }
        }
    }
    return;
}

void sub_124758()
{
    int I;

    for ( I = 0; I < l_U1500._fU1696; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1696[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( sub_8717( l_U1500._fU1696[I] ) ))
            {
                if (DOES_BLIP_EXIST( l_U3153[I] ))
                {
                    REMOVE_BLIP( l_U3153[I] );
                    l_U3222++;
                }
            }
            else if (NOT (DOES_BLIP_EXIST( l_U3153[I] )))
            {
                ADD_BLIP_FOR_CHAR( sub_8717( l_U1500._fU1696[I] ), ref l_U3153[I] );
                CHANGE_BLIP_COLOUR( l_U3153[I], 1 );
            }
        }
    }
    return;
}

void sub_124987()
{
    int I;

    for ( I = 0; I < l_U1500._fU1712; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1712[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( sub_8717( l_U1500._fU1712[I] ) ))
            {
                if (DOES_BLIP_EXIST( l_U3157[I] ))
                {
                    REMOVE_BLIP( l_U3157[I] );
                    l_U3222++;
                }
            }
            else if (NOT (DOES_BLIP_EXIST( l_U3157[I] )))
            {
                ADD_BLIP_FOR_CHAR( sub_8717( l_U1500._fU1712[I] ), ref l_U3157[I] );
                CHANGE_BLIP_COLOUR( l_U3157[I], 1 );
            }
        }
    }
    return;
}

void sub_125221()
{
    int I;

    for ( I = 0; I < l_U1500._fU1604; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1604[I] ))
        {
            if (NOT (IS_CHAR_FATALLY_INJURED( sub_8717( l_U1500._fU1604[I] ) )))
            {
                if (sub_35989( l_U1500._fU1600 ))
                {
                    if (IS_CHAR_IN_CAR( sub_8717( l_U1500._fU1604[I] ), sub_9181( l_U1500._fU1600 ) ))
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U3108 )))
                        {
                            ADD_BLIP_FOR_CAR( sub_9181( l_U1500._fU1600 ), ref l_U3108 );
                            CHANGE_BLIP_SPRITE( l_U3108, 4 );
                            CHANGE_BLIP_SCALE( l_U3108, 0.78000000 );
                            CHANGE_BLIP_PRIORITY( l_U3108, 1 );
                            CHANGE_BLIP_COLOUR( l_U3108, 1 );
                        }
                    }
                    else if (NOT (DOES_BLIP_EXIST( l_U3167[I] )))
                    {
                        ADD_BLIP_FOR_CHAR( sub_8717( l_U1500._fU1604[I] ), ref l_U3167[I] );
                        CHANGE_BLIP_SPRITE( l_U3167[I], 4 );
                        CHANGE_BLIP_SCALE( l_U3167[I], 0.78000000 );
                        CHANGE_BLIP_PRIORITY( l_U3167[I], 1 );
                        CHANGE_BLIP_COLOUR( l_U3167[I], 1 );
                    }
                }
                else if (NOT (DOES_BLIP_EXIST( l_U3167[I] )))
                {
                    ADD_BLIP_FOR_CHAR( sub_8717( l_U1500._fU1604[I] ), ref l_U3167[I] );
                    CHANGE_BLIP_SPRITE( l_U3167[I], 4 );
                    CHANGE_BLIP_SCALE( l_U3167[I], 0.78000000 );
                    CHANGE_BLIP_PRIORITY( l_U3167[I], 1 );
                    CHANGE_BLIP_COLOUR( l_U3167[I], 1 );
                }
            }
            else if (DOES_BLIP_EXIST( l_U3167[I] ))
            {
                REMOVE_BLIP( l_U3167[I] );
                l_U3222++;
            }
        }
        if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1500._fU1600 ))
        {
            if (DOES_BLIP_EXIST( l_U3108 ))
            {
                if (sub_125838( sub_9181( l_U1500._fU1600 ) ))
                {
                    REMOVE_BLIP( l_U3108 );
                }
                else if (sub_125932())
                {
                    REMOVE_BLIP( l_U3108 );
                }
                if (NOT (IS_VEH_DRIVEABLE( sub_9181( l_U1500._fU1600 ) )))
                {
                    REMOVE_BLIP( l_U3108 );
                }
            }
        }
    }
    return;
}

int sub_125838(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_NUMBER_OF_PASSENGERS( uParam0, ref iVar3 );
        GET_DRIVER_OF_CAR( uParam0, ref iVar4 );
        if ((iVar4 == nil) AND (iVar3 == 0))
        {
            return 1;
        }
    }
    return 0;
}

int sub_125932()
{
    int I;

    for ( I = 0; I < l_U1500._fU1604; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1604[I] ))
        {
            if (NOT (IS_CHAR_FATALLY_INJURED( sub_8717( l_U1500._fU1604[I] ) )))
            {
                if (sub_35989( l_U1500._fU1600 ))
                {
                    if (IS_CHAR_IN_CAR( sub_8717( l_U1500._fU1604[I] ), sub_9181( l_U1500._fU1600 ) ))
                    {
                        return 0;
                    }
                }
            }
        }
    }
    return 1;
}

void sub_126179()
{
    int I;

    for ( I = 0; I < l_U1500._fU1648; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1648[I] ))
        {
            if (NOT (IS_CHAR_FATALLY_INJURED( sub_8717( l_U1500._fU1648[I] ) )))
            {
                if (I < 2)
                {
                    if (sub_35989( l_U1500._fU1636[0] ))
                    {
                        if (IS_CHAR_IN_CAR( sub_8717( l_U1500._fU1648[I] ), sub_9181( l_U1500._fU1636[0] ) ))
                        {
                            if (NOT (DOES_BLIP_EXIST( l_U3109[0] )))
                            {
                                ADD_BLIP_FOR_CAR( sub_9181( l_U1500._fU1636[0] ), ref l_U3109[0] );
                                CHANGE_BLIP_SPRITE( l_U3109[0], 4 );
                                CHANGE_BLIP_SCALE( l_U3109[0], 0.78000000 );
                                CHANGE_BLIP_PRIORITY( l_U3109[0], 1 );
                                CHANGE_BLIP_COLOUR( l_U3109[0], 1 );
                            }
                            if (DOES_BLIP_EXIST( l_U3162[I] ))
                            {
                                REMOVE_BLIP( l_U3162[I] );
                            }
                        }
                        else if (NOT (DOES_BLIP_EXIST( l_U3162[I] )))
                        {
                            ADD_BLIP_FOR_CHAR( sub_8717( l_U1500._fU1648[I] ), ref l_U3162[I] );
                            CHANGE_BLIP_SPRITE( l_U3162[I], 4 );
                            CHANGE_BLIP_SCALE( l_U3162[I], 0.78000000 );
                            CHANGE_BLIP_PRIORITY( l_U3162[I], 1 );
                            CHANGE_BLIP_COLOUR( l_U3162[I], 1 );
                        }
                    }
                    else if (NOT (DOES_BLIP_EXIST( l_U3162[I] )))
                    {
                        ADD_BLIP_FOR_CHAR( sub_8717( l_U1500._fU1648[I] ), ref l_U3162[I] );
                        CHANGE_BLIP_SPRITE( l_U3162[I], 4 );
                        CHANGE_BLIP_SCALE( l_U3162[I], 0.78000000 );
                        CHANGE_BLIP_PRIORITY( l_U3162[I], 1 );
                        CHANGE_BLIP_COLOUR( l_U3162[I], 1 );
                    }
                }
                else if (sub_35989( l_U1500._fU1636[1] ))
                {
                    if (IS_CHAR_IN_CAR( sub_8717( l_U1500._fU1648[I] ), sub_9181( l_U1500._fU1636[1] ) ))
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U3109[1] )))
                        {
                            ADD_BLIP_FOR_CAR( sub_9181( l_U1500._fU1636[1] ), ref l_U3109[1] );
                            CHANGE_BLIP_SPRITE( l_U3109[1], 4 );
                            CHANGE_BLIP_SCALE( l_U3109[1], 0.78000000 );
                            CHANGE_BLIP_PRIORITY( l_U3109[1], 1 );
                            CHANGE_BLIP_COLOUR( l_U3109[1], 1 );
                        }
                        if (DOES_BLIP_EXIST( l_U3162[I] ))
                        {
                            REMOVE_BLIP( l_U3162[I] );
                        }
                    }
                    else if (NOT (DOES_BLIP_EXIST( l_U3162[I] )))
                    {
                        ADD_BLIP_FOR_CHAR( sub_8717( l_U1500._fU1648[I] ), ref l_U3162[I] );
                        CHANGE_BLIP_SPRITE( l_U3162[I], 4 );
                        CHANGE_BLIP_SCALE( l_U3162[I], 0.78000000 );
                        CHANGE_BLIP_PRIORITY( l_U3162[I], 1 );
                        CHANGE_BLIP_COLOUR( l_U3162[I], 1 );
                    }
                }
                else if (NOT (DOES_BLIP_EXIST( l_U3162[I] )))
                {
                    ADD_BLIP_FOR_CHAR( sub_8717( l_U1500._fU1648[I] ), ref l_U3162[I] );
                    CHANGE_BLIP_SPRITE( l_U3162[I], 4 );
                    CHANGE_BLIP_SCALE( l_U3162[I], 0.78000000 );
                    CHANGE_BLIP_PRIORITY( l_U3162[I], 1 );
                    CHANGE_BLIP_COLOUR( l_U3162[I], 1 );
                };;;
            }
            else if (DOES_BLIP_EXIST( l_U3162[I] ))
            {
                REMOVE_BLIP( l_U3162[I] );
                l_U3222++;
            }
        }
        if (I < 2)
        {
            if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1500._fU1636[I] ))
            {
                if (DOES_BLIP_EXIST( l_U3109[I] ))
                {
                    if (NOT (IS_VEH_DRIVEABLE( sub_9181( l_U1500._fU1636[I] ) )))
                    {
                        REMOVE_BLIP( l_U3109[I] );
                        l_U3201[I] = 1;
                    }
                    if (sub_125838( sub_9181( l_U1500._fU1636[0] ) ))
                    {
                        REMOVE_BLIP( l_U3109[I] );
                        l_U3201[I] = 1;
                    }
                }
            }
        }
    }
    return;
}

void sub_127496()
{
    int I;
    unknown uVar3;

    if (l_U1968[GET_PLAYER_ID()]._fU32 < 19)
    {
        for ( I = 0; I <= 2; I++ )
        {
            switch (I)
            {
                case 0:
                uVar3 = l_U1500._fU1732[0];
                break;
                case 1:
                uVar3 = l_U1500._fU1748[0];
                break;
                case 2:
                uVar3 = l_U1500._fU1764[0];
                break;
            }
            if (DOES_PED_EXIST_WITH_NETWORK_ID( uVar3 ))
            {
                if (IS_CHAR_FATALLY_INJURED( sub_8717( uVar3 ) ))
                {
                    if (DOES_BLIP_EXIST( l_U3173[I] ))
                    {
                        REMOVE_BLIP( l_U3173[I] );
                        l_U3222++;
                    }
                }
                if (sub_8692( uVar3 ))
                {
                    if (sub_35989( l_U1500._fU1524[0] ))
                    {
                        if (IS_CHAR_IN_CAR( sub_8717( uVar3 ), sub_9181( l_U1500._fU1524[0] ) ))
                        {
                            if (NOT (DOES_BLIP_EXIST( l_U3172 )))
                            {
                                ADD_BLIP_FOR_CAR( sub_9181( l_U1500._fU1524[0] ), ref l_U3172 );
                                CHANGE_BLIP_SPRITE( l_U3172, 4 );
                                CHANGE_BLIP_SCALE( l_U3172, 0.78000000 );
                                CHANGE_BLIP_PRIORITY( l_U3172, 1 );
                                CHANGE_BLIP_COLOUR( l_U3172, 1 );
                            }
                        }
                        else if (NOT (DOES_BLIP_EXIST( l_U3173[I] )))
                        {
                            ADD_BLIP_FOR_CHAR( sub_8717( uVar3 ), ref l_U3173[I] );
                            CHANGE_BLIP_SPRITE( l_U3173[I], 4 );
                            CHANGE_BLIP_SCALE( l_U3173[I], 0.78000000 );
                            CHANGE_BLIP_PRIORITY( l_U3173[I], 1 );
                            CHANGE_BLIP_COLOUR( l_U3173[I], 1 );
                        }
                    }
                }
            }
        }
        if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1500._fU1524[0] ))
        {
            if (DOES_BLIP_EXIST( l_U3172 ))
            {
                if (sub_125838( sub_9181( l_U1500._fU1524[0] ) ))
                {
                    REMOVE_BLIP( l_U3172 );
                }
                if (NOT (IS_VEH_DRIVEABLE( sub_9181( l_U1500._fU1524[0] ) )))
                {
                    REMOVE_BLIP( l_U3172 );
                }
                if (((NOT (sub_8692( l_U1500._fU1732[0] ))) AND (NOT (sub_8692( l_U1500._fU1748[0] )))) AND (NOT (sub_8692( l_U1500._fU1764[0] ))))
                {
                    REMOVE_BLIP( l_U3172 );
                }
            }
        }
    }
    else if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1500._fU1524[0] ))
    {
        if (DOES_BLIP_EXIST( l_U3172 ))
        {
            if (sub_125838( sub_9181( l_U1500._fU1524[0] ) ))
            {
                REMOVE_BLIP( l_U3172 );
            }
            if (NOT (IS_VEH_DRIVEABLE( sub_9181( l_U1500._fU1524[0] ) )))
            {
                REMOVE_BLIP( l_U3172 );
            }
            if (((NOT (sub_8692( l_U1500._fU1732[0] ))) AND (NOT (sub_8692( l_U1500._fU1748[0] )))) AND (NOT (sub_8692( l_U1500._fU1764[0] ))))
            {
                REMOVE_BLIP( l_U3172 );
            }
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        switch (I)
        {
            case 0:
            uVar3 = l_U1500._fU1732[0];
            break;
            case 1:
            uVar3 = l_U1500._fU1748[0];
            break;
            case 2:
            uVar3 = l_U1500._fU1764[0];
            break;
        }
        if (DOES_PED_EXIST_WITH_NETWORK_ID( uVar3 ))
        {
            if (sub_8692( uVar3 ))
            {
                if (sub_35989( uVar3 ))
                {
                    if (IS_CHAR_IN_CAR( sub_8717( uVar3 ), sub_9181( l_U1500._fU1328[I] ) ))
                    {
                        if (DOES_BLIP_EXIST( l_U3173[I] ))
                        {
                            REMOVE_BLIP( l_U3173[I] );
                        }
                        if (NOT (DOES_BLIP_EXIST( l_U3112[I] )))
                        {
                            ADD_BLIP_FOR_CAR( sub_9181( l_U1500._fU1328[I] ), ref l_U3112[I] );
                            CHANGE_BLIP_SPRITE( l_U3112[I], 4 );
                            CHANGE_BLIP_SCALE( l_U3112[I], 0.78000000 );
                            CHANGE_BLIP_PRIORITY( l_U3112[I], 1 );
                            CHANGE_BLIP_COLOUR( l_U3112[I], 1 );
                        }
                    }
                    else if (DOES_BLIP_EXIST( l_U3112[I] ))
                    {
                        REMOVE_BLIP( l_U3112[I] );
                    }
                    if (NOT (DOES_BLIP_EXIST( l_U3173[I] )))
                    {
                        ADD_BLIP_FOR_CHAR( sub_8717( uVar3 ), ref l_U3173[I] );
                        CHANGE_BLIP_SPRITE( l_U3173[I], 4 );
                        CHANGE_BLIP_SCALE( l_U3173[I], 0.78000000 );
                        CHANGE_BLIP_PRIORITY( l_U3173[I], 1 );
                        CHANGE_BLIP_COLOUR( l_U3173[I], 1 );
                    }
                }
                else if (DOES_BLIP_EXIST( l_U3112[I] ))
                {
                    REMOVE_BLIP( l_U3112[I] );
                }
                if (NOT (DOES_BLIP_EXIST( l_U3173[I] )))
                {
                    ADD_BLIP_FOR_CHAR( sub_8717( uVar3 ), ref l_U3173[I] );
                    CHANGE_BLIP_SPRITE( l_U3173[I], 4 );
                    CHANGE_BLIP_SCALE( l_U3173[I], 0.78000000 );
                    CHANGE_BLIP_PRIORITY( l_U3173[I], 1 );
                    CHANGE_BLIP_COLOUR( l_U3173[I], 1 );
                }
            }
            else if (DOES_BLIP_EXIST( l_U3173[I] ))
            {
                REMOVE_BLIP( l_U3173[I] );
            }
        }
    }
    return;
}

void sub_129141()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    sub_129150();
    for ( I = 0; I < l_U1500._fU1208; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1208[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( sub_8717( l_U1500._fU1208[I] ) ))
            {
                if (HAS_CONTROL_OF_NETWORK_ID( l_U1500._fU1208[I] ))
                {
                    if (l_U1500._fU724[I])
                    {
                        if (sub_130208())
                        {
                            if (NOT l_U1968[GET_PLAYER_ID()]._fU220)
                            {
                                if (((I != l_U1968[GET_PLAYER_ID()]._fU52) AND (I != l_U1968[GET_PLAYER_ID()]._fU56)) AND (I != l_U1968[GET_PLAYER_ID()]._fU60))
                                {
                                    GET_DEAD_CHAR_PICKUP_COORDS( sub_8717( l_U1500._fU1208[I] ), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                    CREATE_PICKUP( 744256525, 22, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U1968[GET_PLAYER_ID()]._fU156._fU0[0], 1 );
                                    l_U1968[GET_PLAYER_ID()]._fU220 = 1;
                                    l_U1968[GET_PLAYER_ID()]._fU52 = I;
                                    l_U3224++;
                                }
                            }
                            if (NOT l_U1968[GET_PLAYER_ID()]._fU224)
                            {
                                if (((I != l_U1968[GET_PLAYER_ID()]._fU52) AND (I != l_U1968[GET_PLAYER_ID()]._fU56)) AND (I != l_U1968[GET_PLAYER_ID()]._fU60))
                                {
                                    GET_DEAD_CHAR_PICKUP_COORDS( sub_8717( l_U1500._fU1208[I] ), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                    CREATE_PICKUP( 744256525, 22, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U1968[GET_PLAYER_ID()]._fU156._fU0[1], 1 );
                                    l_U1968[GET_PLAYER_ID()]._fU224 = 1;
                                    l_U1968[GET_PLAYER_ID()]._fU56 = I;
                                    l_U3224++;
                                }
                            }
                            if (NOT l_U1968[GET_PLAYER_ID()]._fU228)
                            {
                                if (((I != l_U1968[GET_PLAYER_ID()]._fU52) AND (I != l_U1968[GET_PLAYER_ID()]._fU56)) AND (I != l_U1968[GET_PLAYER_ID()]._fU60))
                                {
                                    GET_DEAD_CHAR_PICKUP_COORDS( sub_8717( l_U1500._fU1208[I] ), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                    CREATE_PICKUP( 744256525, 22, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U1968[GET_PLAYER_ID()]._fU156._fU0[2], 1 );
                                    l_U1968[GET_PLAYER_ID()]._fU228 = 1;
                                    l_U1968[GET_PLAYER_ID()]._fU60 = I;
                                    l_U3224++;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    for ( I = 0; I < l_U1500._fU1292; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1292[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( sub_8717( l_U1500._fU1292[I] ) ))
            {
                if (HAS_CONTROL_OF_NETWORK_ID( l_U1500._fU1292[I] ))
                {
                    if (l_U1500._fU808[I])
                    {
                        if (sub_131542())
                        {
                            if (NOT l_U1968[GET_PLAYER_ID()]._fU232)
                            {
                                if (((I != l_U1968[GET_PLAYER_ID()]._fU64) AND (I != l_U1968[GET_PLAYER_ID()]._fU68)) AND (I != l_U1968[GET_PLAYER_ID()]._fU72))
                                {
                                    GET_DEAD_CHAR_PICKUP_COORDS( sub_8717( l_U1500._fU1292[I] ), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                    CREATE_PICKUP( 744256525, 22, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U1968[GET_PLAYER_ID()]._fU156._fU16[0], 1 );
                                    l_U1968[GET_PLAYER_ID()]._fU232 = 1;
                                    l_U1968[GET_PLAYER_ID()]._fU64 = I;
                                    l_U3225++;
                                }
                            }
                            if (sub_13089() > 2)
                            {
                                if (NOT l_U1968[GET_PLAYER_ID()]._fU236)
                                {
                                    if (((I != l_U1968[GET_PLAYER_ID()]._fU64) AND (I != l_U1968[GET_PLAYER_ID()]._fU68)) AND (I != l_U1968[GET_PLAYER_ID()]._fU72))
                                    {
                                        GET_DEAD_CHAR_PICKUP_COORDS( sub_8717( l_U1500._fU1292[I] ), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                        CREATE_PICKUP( 744256525, 22, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U1968[GET_PLAYER_ID()]._fU156._fU16[1], 1 );
                                        l_U1968[GET_PLAYER_ID()]._fU236 = 1;
                                        l_U1968[GET_PLAYER_ID()]._fU68 = I;
                                        l_U3225++;
                                    }
                                }
                            }
                            if (sub_13089() == 4)
                            {
                                if (NOT l_U1968[GET_PLAYER_ID()]._fU240)
                                {
                                    if (((I != l_U1968[GET_PLAYER_ID()]._fU64) AND (I != l_U1968[GET_PLAYER_ID()]._fU68)) AND (I != l_U1968[GET_PLAYER_ID()]._fU72))
                                    {
                                        GET_DEAD_CHAR_PICKUP_COORDS( sub_8717( l_U1500._fU1292[I] ), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                        CREATE_PICKUP( 744256525, 22, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U1968[GET_PLAYER_ID()]._fU156._fU16[2], 1 );
                                        l_U1968[GET_PLAYER_ID()]._fU240 = 1;
                                        l_U1968[GET_PLAYER_ID()]._fU72 = I;
                                        l_U3225++;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    for ( I = 0; I < l_U1500._fU1572; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1572[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( sub_8717( l_U1500._fU1572[I] ) ))
            {
                if (HAS_CONTROL_OF_NETWORK_ID( l_U1500._fU1572[I] ))
                {
                    if (l_U1500._fU844[I])
                    {
                        if (sub_133010())
                        {
                            if (NOT l_U1968[GET_PLAYER_ID()]._fU248)
                            {
                                if (((I < l_U1968[GET_PLAYER_ID()]._fU76) AND (I < l_U1968[GET_PLAYER_ID()]._fU80)) AND (I < l_U1968[GET_PLAYER_ID()]._fU84))
                                {
                                    GET_DEAD_CHAR_PICKUP_COORDS( sub_8717( l_U1500._fU1572[I] ), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                    CREATE_PICKUP( 744256525, 22, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U1968[GET_PLAYER_ID()]._fU156._fU32[0], 1 );
                                    l_U1968[GET_PLAYER_ID()]._fU248 = 1;
                                    l_U1968[GET_PLAYER_ID()]._fU76 = I;
                                    l_U3226++;
                                }
                            }
                            if (sub_13089() > 2)
                            {
                                if (NOT l_U1968[GET_PLAYER_ID()]._fU252)
                                {
                                    if (((I < l_U1968[GET_PLAYER_ID()]._fU76) AND (I < l_U1968[GET_PLAYER_ID()]._fU80)) AND (I < l_U1968[GET_PLAYER_ID()]._fU84))
                                    {
                                        GET_DEAD_CHAR_PICKUP_COORDS( sub_8717( l_U1500._fU1572[I] ), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                        CREATE_PICKUP( 744256525, 22, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U1968[GET_PLAYER_ID()]._fU156._fU32[1], 1 );
                                        l_U1968[GET_PLAYER_ID()]._fU252 = 1;
                                        l_U1968[GET_PLAYER_ID()]._fU80 = I;
                                        l_U3226++;
                                    }
                                }
                            }
                            if (sub_13089() == 4)
                            {
                                if (NOT l_U1968[GET_PLAYER_ID()]._fU256)
                                {
                                    if (((I < l_U1968[GET_PLAYER_ID()]._fU76) AND (I < l_U1968[GET_PLAYER_ID()]._fU80)) AND (I < l_U1968[GET_PLAYER_ID()]._fU84))
                                    {
                                        GET_DEAD_CHAR_PICKUP_COORDS( sub_8717( l_U1500._fU1572[I] ), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                        CREATE_PICKUP( 744256525, 22, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U1968[GET_PLAYER_ID()]._fU156._fU32[2], 1 );
                                        l_U1968[GET_PLAYER_ID()]._fU256 = 1;
                                        l_U1968[GET_PLAYER_ID()]._fU84 = I;
                                        l_U3226++;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    for ( I = 0; I < l_U1500._fU1696; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1696[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( sub_8717( l_U1500._fU1696[I] ) ))
            {
                if (HAS_CONTROL_OF_NETWORK_ID( l_U1500._fU1696[I] ))
                {
                    if (l_U1500._fU880[I])
                    {
                        if (sub_134484())
                        {
                            if (NOT l_U1968[GET_PLAYER_ID()]._fU260)
                            {
                                if (I < l_U1968[GET_PLAYER_ID()]._fU88)
                                {
                                    GET_DEAD_CHAR_PICKUP_COORDS( sub_8717( l_U1500._fU1696[I] ), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                    CREATE_PICKUP( 744256525, 22, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U1968[GET_PLAYER_ID()]._fU156._fU48, 1 );
                                    l_U1968[GET_PLAYER_ID()]._fU260 = 1;
                                    l_U1968[GET_PLAYER_ID()]._fU88 = I;
                                    l_U3227++;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    for ( I = 0; I < l_U1500._fU1712; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1712[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( sub_8717( l_U1500._fU1712[I] ) ))
            {
                if (HAS_CONTROL_OF_NETWORK_ID( l_U1500._fU1712[I] ))
                {
                    if (l_U1500._fU896[I])
                    {
                        if (sub_135021())
                        {
                            if (NOT l_U1968[GET_PLAYER_ID()]._fU264)
                            {
                                if ((I < l_U1968[GET_PLAYER_ID()]._fU92) AND (I < l_U1968[GET_PLAYER_ID()]._fU96))
                                {
                                    GET_DEAD_CHAR_PICKUP_COORDS( sub_8717( l_U1500._fU1712[I] ), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                    CREATE_PICKUP( 744256525, 22, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U1968[GET_PLAYER_ID()]._fU156._fU52[0], 1 );
                                    l_U1968[GET_PLAYER_ID()]._fU264 = 1;
                                    l_U1968[GET_PLAYER_ID()]._fU92 = I;
                                    l_U3228++;
                                }
                            }
                            if (NOT l_U1968[GET_PLAYER_ID()]._fU268)
                            {
                                if ((I < l_U1968[GET_PLAYER_ID()]._fU92) AND (I < l_U1968[GET_PLAYER_ID()]._fU96))
                                {
                                    GET_DEAD_CHAR_PICKUP_COORDS( sub_8717( l_U1500._fU1712[I] ), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                    CREATE_PICKUP( 744256525, 22, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U1968[GET_PLAYER_ID()]._fU156._fU52[1], 1 );
                                    l_U1968[GET_PLAYER_ID()]._fU268 = 1;
                                    l_U1968[GET_PLAYER_ID()]._fU96 = I;
                                    l_U3228++;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_129150()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_12059( I ))
        {
            if (l_U1968[I]._fU52 < 50)
            {
                if (I != GET_PLAYER_ID())
                {
                    l_U1968[GET_PLAYER_ID()]._fU52 = l_U1968[I]._fU52;
                }
            }
            if (l_U1968[I]._fU56 < 50)
            {
                if (I != GET_PLAYER_ID())
                {
                    l_U1968[GET_PLAYER_ID()]._fU56 = l_U1968[I]._fU56;
                }
            }
            if (l_U1968[I]._fU60 < 50)
            {
                if (I != GET_PLAYER_ID())
                {
                    l_U1968[GET_PLAYER_ID()]._fU60 = l_U1968[I]._fU60;
                }
            }
            if (l_U1968[I]._fU64 < 50)
            {
                if (I != GET_PLAYER_ID())
                {
                    l_U1968[GET_PLAYER_ID()]._fU64 = l_U1968[I]._fU64;
                }
            }
            if (l_U1968[I]._fU68 < 50)
            {
                if (I != GET_PLAYER_ID())
                {
                    l_U1968[GET_PLAYER_ID()]._fU68 = l_U1968[I]._fU68;
                }
            }
            if (l_U1968[I]._fU72 < 50)
            {
                if (I != GET_PLAYER_ID())
                {
                    l_U1968[GET_PLAYER_ID()]._fU72 = l_U1968[I]._fU72;
                }
            }
            if (l_U1968[I]._fU76 < 50)
            {
                if (I != GET_PLAYER_ID())
                {
                    l_U1968[GET_PLAYER_ID()]._fU76 = l_U1968[I]._fU76;
                }
            }
            if (l_U1968[I]._fU80 < 50)
            {
                if (I != GET_PLAYER_ID())
                {
                    l_U1968[GET_PLAYER_ID()]._fU80 = l_U1968[I]._fU80;
                }
            }
            if (l_U1968[I]._fU84 < 50)
            {
                if (I != GET_PLAYER_ID())
                {
                    l_U1968[GET_PLAYER_ID()]._fU84 = l_U1968[I]._fU84;
                }
            }
            if (l_U1968[I]._fU88 < 50)
            {
                if (I != GET_PLAYER_ID())
                {
                    l_U1968[GET_PLAYER_ID()]._fU88 = l_U1968[I]._fU88;
                }
            }
            if (l_U1968[I]._fU92 < 50)
            {
                if (I != GET_PLAYER_ID())
                {
                    l_U1968[GET_PLAYER_ID()]._fU92 = l_U1968[I]._fU92;
                }
            }
            if (l_U1968[I]._fU96 < 50)
            {
                if (I != GET_PLAYER_ID())
                {
                    l_U1968[GET_PLAYER_ID()]._fU96 = l_U1968[I]._fU96;
                }
            }
        }
    }
    return;
}

int sub_130208()
{
    int I;

    sub_130217();
    for ( I = 0; I < 16; I++ )
    {
        if (sub_12059( I ))
        {
            if (((l_U1968[I]._fU220) AND (l_U1968[I]._fU224)) AND (l_U1968[I]._fU228))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_130217()
{
    int I;

    if (NOT l_U1968[GET_PLAYER_ID()]._fU220)
    {
        for ( I = 0; I < 16; I++ )
        {
            if (I != GET_PLAYER_ID())
            {
                if (sub_12059( I ))
                {
                    if (l_U1968[I]._fU220)
                    {
                        l_U1968[GET_PLAYER_ID()]._fU220 = 1;
                    }
                }
            }
        }
    }
    if (NOT l_U1968[GET_PLAYER_ID()]._fU224)
    {
        for ( I = 0; I < 16; I++ )
        {
            if (I != GET_PLAYER_ID())
            {
                if (sub_12059( I ))
                {
                    if (l_U1968[I]._fU224)
                    {
                        l_U1968[GET_PLAYER_ID()]._fU224 = 1;
                    }
                }
            }
        }
    }
    if (NOT l_U1968[GET_PLAYER_ID()]._fU228)
    {
        for ( I = 0; I < 16; I++ )
        {
            if (I != GET_PLAYER_ID())
            {
                if (sub_12059( I ))
                {
                    if (l_U1968[I]._fU228)
                    {
                        l_U1968[GET_PLAYER_ID()]._fU228 = 1;
                    }
                }
            }
        }
    }
    return;
}

int sub_131542()
{
    int I;

    sub_131551();
    for ( I = 0; I < 16; I++ )
    {
        if (sub_12059( I ))
        {
            if (sub_13089() < 3)
            {
                if (l_U1968[I]._fU232)
                {
                    return 0;
                }
            }
            else if (sub_13089() == 3)
            {
                if ((l_U1968[I]._fU232) AND (l_U1968[I]._fU232))
                {
                    return 0;
                }
            }
            else if (sub_13089() == 4)
            {
                if (((l_U1968[I]._fU232) AND (l_U1968[I]._fU232)) AND (l_U1968[I]._fU232))
                {
                    return 0;
                }
            };;;
        }
    }
    return 1;
}

void sub_131551()
{
    int I;

    if (NOT l_U1968[GET_PLAYER_ID()]._fU232)
    {
        for ( I = 0; I < 16; I++ )
        {
            if (I != GET_PLAYER_ID())
            {
                if (sub_12059( I ))
                {
                    if (l_U1968[I]._fU232)
                    {
                        l_U1968[GET_PLAYER_ID()]._fU232 = 1;
                    }
                }
            }
        }
    }
    if (NOT l_U1968[GET_PLAYER_ID()]._fU236)
    {
        for ( I = 0; I < 16; I++ )
        {
            if (I != GET_PLAYER_ID())
            {
                if (sub_12059( I ))
                {
                    if (l_U1968[I]._fU236)
                    {
                        l_U1968[GET_PLAYER_ID()]._fU236 = 1;
                    }
                }
            }
        }
    }
    if (NOT l_U1968[GET_PLAYER_ID()]._fU240)
    {
        for ( I = 0; I < 16; I++ )
        {
            if (I != GET_PLAYER_ID())
            {
                if (sub_12059( I ))
                {
                    if (l_U1968[I]._fU240)
                    {
                        l_U1968[GET_PLAYER_ID()]._fU240 = 1;
                    }
                }
            }
        }
    }
    return;
}

int sub_133010()
{
    int I;

    sub_133019();
    for ( I = 0; I < 16; I++ )
    {
        if (sub_12059( I ))
        {
            if (sub_13089() < 3)
            {
                if (l_U1968[I]._fU248)
                {
                    return 0;
                }
            }
            else if (sub_13089() == 3)
            {
                if ((l_U1968[I]._fU248) AND (l_U1968[I]._fU252))
                {
                    return 0;
                }
            }
            else if (sub_13089() == 4)
            {
                if (((l_U1968[I]._fU248) AND (l_U1968[I]._fU252)) AND (l_U1968[I]._fU256))
                {
                    return 0;
                }
            };;;
        }
    }
    return 1;
}

void sub_133019()
{
    int I;

    if (NOT l_U1968[GET_PLAYER_ID()]._fU248)
    {
        for ( I = 0; I < 16; I++ )
        {
            if (I != GET_PLAYER_ID())
            {
                if (sub_12059( I ))
                {
                    if (l_U1968[I]._fU248)
                    {
                        l_U1968[GET_PLAYER_ID()]._fU248 = 1;
                    }
                }
            }
        }
    }
    if (NOT l_U1968[GET_PLAYER_ID()]._fU252)
    {
        for ( I = 0; I < 16; I++ )
        {
            if (I != GET_PLAYER_ID())
            {
                if (sub_12059( I ))
                {
                    if (l_U1968[I]._fU252)
                    {
                        l_U1968[GET_PLAYER_ID()]._fU252 = 1;
                    }
                }
            }
        }
    }
    if (NOT l_U1968[GET_PLAYER_ID()]._fU256)
    {
        for ( I = 0; I < 16; I++ )
        {
            if (I != GET_PLAYER_ID())
            {
                if (sub_12059( I ))
                {
                    if (l_U1968[I]._fU256)
                    {
                        l_U1968[GET_PLAYER_ID()]._fU256 = 1;
                    }
                }
            }
        }
    }
    return;
}

int sub_134484()
{
    int I;

    sub_134493();
    for ( I = 0; I < 16; I++ )
    {
        if (sub_12059( I ))
        {
            if (l_U1968[I]._fU260)
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_134493()
{
    int I;

    if (NOT l_U1968[GET_PLAYER_ID()]._fU260)
    {
        for ( I = 0; I < 16; I++ )
        {
            if (I != GET_PLAYER_ID())
            {
                if (sub_12059( I ))
                {
                    if (l_U1968[I]._fU260)
                    {
                        l_U1968[GET_PLAYER_ID()]._fU260 = 1;
                    }
                }
            }
        }
    }
    return;
}

int sub_135021()
{
    int I;

    sub_135030();
    for ( I = 0; I < 16; I++ )
    {
        if (sub_12059( I ))
        {
            if ((l_U1968[I]._fU264) AND (l_U1968[I]._fU268))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_135030()
{
    int I;

    if (NOT l_U1968[GET_PLAYER_ID()]._fU264)
    {
        for ( I = 0; I < 16; I++ )
        {
            if (I != GET_PLAYER_ID())
            {
                if (sub_12059( I ))
                {
                    if (l_U1968[I]._fU264)
                    {
                        l_U1968[GET_PLAYER_ID()]._fU264 = 1;
                    }
                }
            }
        }
    }
    if (NOT l_U1968[GET_PLAYER_ID()]._fU268)
    {
        for ( I = 0; I < 16; I++ )
        {
            if (I != GET_PLAYER_ID())
            {
                if (sub_12059( I ))
                {
                    if (l_U1968[I]._fU268)
                    {
                        l_U1968[GET_PLAYER_ID()]._fU268 = 1;
                    }
                }
            }
        }
    }
    return;
}

void sub_135841()
{
    if (l_U1500._fU704)
    {
        sub_135864();
    }
    if (l_U1500._fU696)
    {
        sub_137418();
    }
    if (l_U1500._fU920)
    {
        sub_137635();
    }
    if (l_U1500._fU924)
    {
        sub_137852();
    }
    if (l_U1500._fU928)
    {
        sub_138069();
    }
    if (l_U1500._fU932)
    {
        sub_138286();
    }
    return;
}

void sub_135864()
{
    int I;
    int iVar3;
    int iVar4;
    vector[6] vVar5;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    vector[6] vVar24;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    vector[6] vVar43;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;

    array(ref vVar5, 6);
    array(ref vVar24, 6);
    array(ref vVar43, 6);
    vVar5[0] = {-1941.20000000, -659.53880000, 10.64230000};
    vVar24[0] = {-1917.68800000, -659.82040000, 8.39230000};
    vVar5[1] = {-1929.92400000, -644.41180000, 10.64280000};
    vVar24[1] = {-1951.18200000, -640.91350000, 8.39280000};
    vVar5[2] = {-1926.02100000, -652.68390000, 10.64280000};
    vVar24[2] = {-1947.27900000, -649.18560000, 8.39280000};
    vVar5[3] = {-1918.34900000, -654.42410000, 10.64230000};
    vVar24[3] = {-1933.44200000, -654.34850000, 8.39230000};
    vVar5[4] = {-1894.83300000, -642.95300000, 10.64260000};
    vVar24[4] = {-1909.87000000, -644.23480000, 8.39260000};
    vVar5[5] = {-1899.97800000, -659.25010000, 10.64230000};
    vVar24[5] = {-1915.04100000, -660.18500000, 8.39230000};
    vVar43[0] = {-1927.05800000, -659.49550000, 9.51730000};
    vVar43[1] = {-1939.78800000, -643.57070000, 9.51780000};
    vVar43[2] = {-1935.88500000, -651.84280000, 9.51780000};
    vVar43[3] = {-1926.44100000, -653.62160000, 9.51730000};
    vVar43[4] = {-1902.96400000, -642.88130000, 9.51760000};
    vVar43[5] = {-1908.10500000, -658.99110000, 9.51730000};
    for ( I = 0; I < 12; I++ )
    {
        if (sub_8692( l_U1500._fU1208[I] ))
        {
            if (HAS_CONTROL_OF_NETWORK_ID( l_U1500._fU1208[I] ))
            {
                GET_SCRIPT_TASK_STATUS( sub_8717( l_U1500._fU1208[I] ), 91, ref iVar3 );
                if (iVar3 == 7)
                {
                    if (NOT (IS_CHAR_INJURED( sub_8717( l_U1500._fU1208[I] ) )))
                    {
                        TASK_COMBAT( sub_8717( l_U1500._fU1208[I] ), sub_136492( sub_8717( l_U1500._fU1208[I] ) ) );
                    }
                }
            }
        }
    }
    for ( I = 12; I <= 19; I++ )
    {
        if ((I == 12) || (I == 19))
        {
            if (sub_8692( l_U1500._fU1208[I] ))
            {
                if (HAS_CONTROL_OF_NETWORK_ID( l_U1500._fU1208[I] ))
                {
                    GET_SCRIPT_TASK_STATUS( sub_8717( l_U1500._fU1208[I] ), 117, ref iVar4 );
                    if (iVar4 == 7)
                    {
                        if (NOT (IS_CHAR_INJURED( sub_8717( l_U1500._fU1208[I] ) )))
                        {
                            TASK_GUARD_CURRENT_POSITION( sub_8717( l_U1500._fU1208[I] ), 5.00000000, 1.00000000, 1 );
                        }
                    }
                }
            }
        }
        else if (sub_8692( l_U1500._fU1208[I] ))
        {
            if (HAS_CONTROL_OF_NETWORK_ID( l_U1500._fU1208[I] ))
            {
                GET_SCRIPT_TASK_STATUS( sub_8717( l_U1500._fU1208[I] ), 106, ref iVar4 );
                if (iVar4 == 7)
                {
                    if (NOT (IS_CHAR_INJURED( sub_8717( l_U1500._fU1208[I] ) )))
                    {
                        if ((I == 14) || (I == 15))
                        {
                            SET_CHAR_ANGLED_DEFENSIVE_AREA( sub_8717( l_U1500._fU1208[I] ), vVar5[I - 13]._fU0, vVar5[I - 13]._fU4, vVar5[I - 13]._fU8, vVar24[I - 13]._fU0, vVar24[I - 13]._fU4, vVar24[I - 13]._fU8, 13.62500000 );
                            TASK_GUARD_ANGLED_DEFENSIVE_AREA( sub_8717( l_U1500._fU1208[I] ), vVar43[I - 13], 90.00000000, 15.00000000, -1, vVar5[I - 13], vVar24[I - 13], 13.62500000 );
                        }
                        else
                        {
                            SET_CHAR_ANGLED_DEFENSIVE_AREA( sub_8717( l_U1500._fU1208[I] ), vVar5[I - 13]._fU0, vVar5[I - 13]._fU4, vVar5[I - 13]._fU8, vVar24[I - 13]._fU0, vVar24[I - 13]._fU4, vVar24[I - 13]._fU8, 7.12500000 );
                            TASK_GUARD_ANGLED_DEFENSIVE_AREA( sub_8717( l_U1500._fU1208[I] ), vVar43[I - 13], 90.00000000, 15.00000000, -1, vVar5[I - 13], vVar24[I - 13], 7.12500000 );
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_136492(unknown uParam0)
{
    int I;
    unknown Result;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown[16] uVar8;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    float fVar57;
    float fVar58;

    array(ref uVar8, 16);
    fVar58 = 2.147484E8;
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        for ( I = 0; I < 16; I++ )
        {
            if (sub_12059( I ))
            {
                GET_CHAR_COORDINATES( sub_465( I ), ref uVar8[I]._fU0, ref uVar8[I]._fU4, ref uVar8[I]._fU8 );
                GET_DISTANCE_BETWEEN_COORDS_3D( uVar5._fU0, uVar5._fU4, uVar5._fU8, uVar8[I]._fU0, uVar8[I]._fU4, uVar8[I]._fU8, ref fVar57 );
                if (fVar57 < fVar58)
                {
                    fVar58 = fVar57;
                    Result = sub_465( I );
                }
            }
        }
    }
    return Result;
}

void sub_137418()
{
    int I;
    int iVar3;

    for ( I = 0; I <= (l_U1500._fU1292 - 1); I++ )
    {
        if (sub_8692( l_U1500._fU1292[I] ))
        {
            if (HAS_CONTROL_OF_NETWORK_ID( l_U1500._fU1292[I] ))
            {
                GET_SCRIPT_TASK_STATUS( sub_8717( l_U1500._fU1292[I] ), 117, ref iVar3 );
                if (iVar3 == 7)
                {
                    if (NOT (IS_CHAR_INJURED( sub_8717( l_U1500._fU1292[I] ) )))
                    {
                        TASK_GUARD_CURRENT_POSITION( sub_8717( l_U1500._fU1292[I] ), 5.00000000, 1.00000000, 1 );
                    }
                }
            }
        }
    }
    return;
}

void sub_137635()
{
    int I;
    int iVar3;

    for ( I = 0; I <= (l_U1500._fU1572 - 1); I++ )
    {
        if (sub_8692( l_U1500._fU1572[I] ))
        {
            if (HAS_CONTROL_OF_NETWORK_ID( l_U1500._fU1572[I] ))
            {
                GET_SCRIPT_TASK_STATUS( sub_8717( l_U1500._fU1572[I] ), 117, ref iVar3 );
                if (iVar3 == 7)
                {
                    if (NOT (IS_CHAR_INJURED( sub_8717( l_U1500._fU1572[I] ) )))
                    {
                        TASK_GUARD_CURRENT_POSITION( sub_8717( l_U1500._fU1572[I] ), 5.00000000, 1.00000000, 1 );
                    }
                }
            }
        }
    }
    return;
}

void sub_137852()
{
    int I;
    int iVar3;

    for ( I = 0; I <= (l_U1500._fU1668 - 1); I++ )
    {
        if (sub_8692( l_U1500._fU1668[I] ))
        {
            if (HAS_CONTROL_OF_NETWORK_ID( l_U1500._fU1668[I] ))
            {
                GET_SCRIPT_TASK_STATUS( sub_8717( l_U1500._fU1668[I] ), 117, ref iVar3 );
                if (iVar3 == 7)
                {
                    if (NOT (IS_CHAR_INJURED( sub_8717( l_U1500._fU1668[I] ) )))
                    {
                        TASK_GUARD_CURRENT_POSITION( sub_8717( l_U1500._fU1668[I] ), 5.00000000, 1.00000000, 1 );
                    }
                }
            }
        }
    }
    return;
}

void sub_138069()
{
    int I;
    int iVar3;

    for ( I = 0; I <= (l_U1500._fU1696 - 1); I++ )
    {
        if (sub_8692( l_U1500._fU1696[I] ))
        {
            if (HAS_CONTROL_OF_NETWORK_ID( l_U1500._fU1696[I] ))
            {
                GET_SCRIPT_TASK_STATUS( sub_8717( l_U1500._fU1696[I] ), 117, ref iVar3 );
                if (iVar3 == 7)
                {
                    if (NOT (IS_CHAR_INJURED( sub_8717( l_U1500._fU1696[I] ) )))
                    {
                        TASK_GUARD_CURRENT_POSITION( sub_8717( l_U1500._fU1696[I] ), 5.00000000, 1.00000000, 1 );
                    }
                }
            }
        }
    }
    return;
}

void sub_138286()
{
    int I;
    int iVar3;

    for ( I = 0; I <= (l_U1500._fU1712 - 1); I++ )
    {
        if (sub_8692( l_U1500._fU1712[I] ))
        {
            if (HAS_CONTROL_OF_NETWORK_ID( l_U1500._fU1712[I] ))
            {
                GET_SCRIPT_TASK_STATUS( sub_8717( l_U1500._fU1712[I] ), 117, ref iVar3 );
                if (iVar3 == 7)
                {
                    if (NOT (IS_CHAR_INJURED( sub_8717( l_U1500._fU1712[I] ) )))
                    {
                        TASK_GUARD_CURRENT_POSITION( sub_8717( l_U1500._fU1712[I] ), 5.00000000, 1.00000000, 1 );
                    }
                }
            }
        }
    }
    return;
}

void sub_138926()
{
    sub_138935();
    sub_142307();
    sub_146354();
    sub_151444();
    return;
}

void sub_138935()
{
    int I;
    unknown[4] uVar3;
    int iVar8;

    array(ref uVar3, 4);
    if (sub_8692( l_U1500._fU1604[0] ))
    {
        if (sub_35989( l_U1500._fU1600 ))
        {
            if (IS_CHAR_IN_CAR( sub_8717( l_U1500._fU1604[0] ), sub_9181( l_U1500._fU1600 ) ))
            {
                sub_139058( l_U1500._fU1604[0], sub_9181( l_U1500._fU1600 ) );
            }
            if (sub_140957( sub_9181( l_U1500._fU1600 ) ))
            {
                for ( I = 1; I <= 3; I++ )
                {
                    if (sub_8692( l_U1500._fU1604[I] ))
                    {
                        sub_141270( l_U1500._fU1604[I] );
                    }
                }
            }
        }
        else
        {
            for ( I = 0; I <= 3; I++ )
            {
                if (sub_8692( l_U1500._fU1604[I] ))
                {
                    if (HAS_CONTROL_OF_NETWORK_ID( l_U1500._fU1604[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( sub_8717( l_U1500._fU1604[I] ) )))
                        {
                            GET_SCRIPT_TASK_STATUS( sub_8717( l_U1500._fU1604[I] ), 91, ref uVar3[I] );
                            if (uVar3[I] == 7)
                            {
                                SET_CHAR_WILL_USE_CARS_IN_COMBAT( sub_8717( l_U1500._fU1604[I] ), 0 );
                                SET_CHAR_WILL_USE_COVER( sub_8717( l_U1500._fU1604[I] ), 1 );
                                SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( sub_8717( l_U1500._fU1604[I] ), 1 );
                                SET_CHAR_DECISION_MAKER( sub_8717( l_U1500._fU1604[I] ), l_U3066 );
                                SET_COMBAT_DECISION_MAKER( sub_8717( l_U1500._fU1604[I] ), l_U3067 );
                                TASK_COMBAT( sub_8717( l_U1500._fU1604[I] ), sub_136492( sub_8717( l_U1500._fU1604[I] ) ) );
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        for ( I = 1; I <= 3; I++ )
        {
            if (sub_8692( l_U1500._fU1604[I] ))
            {
                if (sub_35989( l_U1500._fU1600 ))
                {
                    if (IS_CHAR_IN_CAR( sub_8717( l_U1500._fU1604[I] ), sub_9181( l_U1500._fU1600 ) ))
                    {
                        if (HAS_CONTROL_OF_NETWORK_ID( l_U1500._fU1604[I] ))
                        {
                            if (NOT (IS_CHAR_INJURED( sub_8717( l_U1500._fU1604[I] ) )))
                            {
                                GET_SCRIPT_TASK_STATUS( sub_8717( l_U1500._fU1604[I] ), 13, ref iVar8 );
                                if (iVar8 == 7)
                                {
                                    TASK_LEAVE_CAR( sub_8717( l_U1500._fU1604[I] ), sub_9181( l_U1500._fU1600 ) );
                                }
                            }
                        }
                    }
                    else if (HAS_CONTROL_OF_NETWORK_ID( l_U1500._fU1604[I] ))
                    {
                        GET_SCRIPT_TASK_STATUS( sub_8717( l_U1500._fU1604[I] ), 91, ref uVar3[I] );
                        if (uVar3[I] == 7)
                        {
                            SET_CHAR_WILL_USE_CARS_IN_COMBAT( sub_8717( l_U1500._fU1604[I] ), 0 );
                            SET_CHAR_WILL_USE_COVER( sub_8717( l_U1500._fU1604[I] ), 1 );
                            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( sub_8717( l_U1500._fU1604[I] ), 1 );
                            SET_CHAR_DECISION_MAKER( sub_8717( l_U1500._fU1604[I] ), l_U3066 );
                            SET_COMBAT_DECISION_MAKER( sub_8717( l_U1500._fU1604[I] ), l_U3068 );
                            TASK_COMBAT( sub_8717( l_U1500._fU1604[I] ), sub_136492( sub_8717( l_U1500._fU1604[I] ) ) );
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_139058(unknown uParam0, unknown uParam1)
{
    vector[15] vVar4;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    int iVar50;

    array(ref vVar4, 15);
    switch (l_U1500._fU528)
    {
        case 0:
        vVar4[0] = {-1597.15500000, -246.98680000, 2.96460000};
        vVar4[1] = {-1597.15500000, -246.98680000, 2.96460000};
        vVar4[2] = {-1513.99800000, -150.90480000, 10.71410000};
        vVar4[3] = {-1466.78700000, -105.51940000, 6.30430000};
        vVar4[4] = {-1419.18500000, -14.83220000, 22.85130000};
        vVar4[5] = {-1418.73700000, 161.09900000, 50.65600000};
        vVar4[6] = {-1279.38800000, 368.97720000, 50.61810000};
        vVar4[7] = {-1243.76400000, 649.42110000, 12.59360000};
        vVar4[8] = {-1353.86000000, 547.34650000, 12.01040000};
        vVar4[9] = {-1404.76100000, 554.07750000, 16.80580000};
        vVar4[10] = {-1434.12000000, 564.99680000, 19.05780000};
        break;
        case 1:
        vVar4[0] = {-1601.74500000, -251.60730000, 3.05960000};
        vVar4[1] = {-1522.26300000, -75.34480000, 7.44880000};
        vVar4[2] = {-1579.60900000, 73.98620000, 10.29030000};
        vVar4[3] = {-1661.71900000, 267.57400000, 18.28570000};
        vVar4[4] = {-1649.00600000, 368.37640000, 25.22840000};
        vVar4[5] = {-1582.08000000, 557.32480000, 25.25820000};
        vVar4[6] = {-1560.96600000, 678.35350000, 25.25560000};
        vVar4[7] = {-1497.66900000, 750.30020000, 25.25570000};
        vVar4[8] = {-1429.56500000, 733.38980000, 19.78460000};
        vVar4[9] = {-1431.52200000, 701.80110000, 19.35850000};
        vVar4[10] = {-1476.98600000, 698.97580000, 19.38800000};
        break;
        case 2:
        vVar4[0] = {-1456.32300000, -311.52610000, 2.67160000};
        vVar4[1] = {-1243.02100000, -311.69810000, 2.78410000};
        vVar4[2] = {-1311.57000000, -159.61690000, 4.91740000};
        vVar4[3] = {-1377.36700000, -1.39510000, 6.50280000};
        vVar4[4] = {-1485.12900000, 191.32380000, 10.28980000};
        vVar4[5] = {-1546.13100000, 337.77580000, 21.89270000};
        vVar4[6] = {-1646.63000000, 337.93850000, 25.04980000};
        vVar4[7] = {-1722.81100000, 251.47190000, 20.96780000};
        vVar4[8] = {-1886.85700000, 172.72520000, 12.10330000};
        vVar4[9] = {-2086.75600000, 203.48360000, 12.15750000};
        vVar4[10] = {-2118.72400000, 163.92670000, 11.85260000};
        break;
        case 3:
        vVar4[0] = {-1444.83300000, -485.07550000, 4.03900000};
        vVar4[1] = {-1633.81300000, -485.48150000, 50.08760000};
        vVar4[2] = {-1795.15200000, -376.02520000, 50.93960000};
        vVar4[3] = {-1861.66400000, -133.10780000, 50.11810000};
        vVar4[4] = {-1960.70900000, 22.46630000, 26.87960000};
        vVar4[5] = {-1967.84600000, 233.76780000, 23.46710000};
        vVar4[6] = {-1805.10400000, 432.64630000, 21.85720000};
        vVar4[7] = {-1658.39900000, 587.51830000, 27.44690000};
        vVar4[8] = {-1647.15100000, 744.46610000, 29.66830000};
        vVar4[9] = {-1506.83000000, 830.18150000, 19.35930000};
        vVar4[10] = {-1484.49200000, 872.84850000, 19.34510000};
        break;
    }
    if (sub_8692( uParam0 ))
    {
        if (HAS_CONTROL_OF_NETWORK_ID( uParam0 ))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_8717( uParam0 ), vVar4[l_U1968[GET_PLAYER_ID()]._fU36]._fU0, vVar4[l_U1968[GET_PLAYER_ID()]._fU36]._fU4, vVar4[l_U1968[GET_PLAYER_ID()]._fU36]._fU8, 10.00000000, 10.00000000, 10.00000000, 0 )))
            {
                GET_SCRIPT_TASK_STATUS( sub_8717( uParam0 ), 15, ref iVar50 );
                if (iVar50 == 7)
                {
                    if (l_U1968[GET_PLAYER_ID()]._fU36 < 11)
                    {
                        TASK_CAR_DRIVE_TO_COORD( sub_8717( uParam0 ), uParam1, vVar4[l_U1968[GET_PLAYER_ID()]._fU36]._fU0, vVar4[l_U1968[GET_PLAYER_ID()]._fU36]._fU4, vVar4[l_U1968[GET_PLAYER_ID()]._fU36]._fU8, 18.00000000, 0, 0, 2, 8.00000000, 0 );
                    }
                    else
                    {
                        l_U1968[GET_PLAYER_ID()]._fU128 = 1;
                    }
                }
            }
            else
            {
                l_U1968[GET_PLAYER_ID()]._fU36++;
            }
            sub_140508( sub_8717( uParam0 ) );
        }
        else
        {
            sub_140794();
        }
    }
    return;
}

void sub_140508(unknown uParam0)
{
    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            if (NOT (sub_140553( uParam0, 25.00000000 )))
            {
                if (NOT (sub_140553( uParam0, 50.00000000 )))
                {
                    if (sub_140553( uParam0, 75.00000000 ))
                    {
                        SET_DRIVE_TASK_CRUISE_SPEED( uParam0, 20.00000000 );
                    }
                    else
                    {
                        SET_DRIVE_TASK_CRUISE_SPEED( uParam0, 10.00000000 );
                    }
                }
                else
                {
                    SET_DRIVE_TASK_CRUISE_SPEED( uParam0, 30.00000000 );
                }
            }
            else
            {
                SET_DRIVE_TASK_CRUISE_SPEED( uParam0, 40.00000000 );
            }
        }
    }
    return;
}

int sub_140553(unknown uParam0, unknown uParam1)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_12059( I ))
        {
            if ((NOT (IS_CHAR_DEAD( sub_465( I ) ))) AND (NOT (IS_CHAR_DEAD( uParam0 ))))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_465( I ), uParam0, uParam1, uParam1, uParam1, 0 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_140794()
{
    int I;
    unknown[16] uVar3;
    int iVar20;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1968[I]._fU36;
        if (uVar3[I] > iVar20)
        {
            iVar20 = uVar3[I];
        }
    }
    if (l_U1968[GET_PLAYER_ID()]._fU36 < iVar20)
    {
        l_U1968[GET_PLAYER_ID()]._fU36 = iVar20;
    }
    return;
}

int sub_140957(unknown uParam0)
{
    int I;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        for ( I = 0; I < 16; I++ )
        {
            if (IS_NETWORK_PLAYER_ACTIVE( I ))
            {
                if (sub_141008( uParam0 ))
                {
                    return 1;
                }
                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_465( I ), uParam0, 30.00000000, 30.00000000, 30.00000000, 0 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_141008(unknown uParam0)
{
    int I;
    unknown uVar4;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (sub_31461( sub_465( I ) ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_465( I ), ref uVar4 );
            }
            if (NOT (IS_CAR_DEAD( uParam0 )))
            {
                if ((HAS_CAR_BEEN_DAMAGED_BY_CHAR( uParam0, sub_465( I ) )) || (HAS_CAR_BEEN_DAMAGED_BY_CAR( uParam0, uVar4 )))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_141270(unknown uParam0)
{
    int iVar3;

    if (sub_8692( uParam0 ))
    {
        if (HAS_CONTROL_OF_NETWORK_ID( uParam0 ))
        {
            if (NOT (IS_CHAR_INJURED( sub_8717( uParam0 ) )))
            {
                if (NOT (HAS_CHAR_GOT_WEAPON( sub_8717( uParam0 ), 12 )))
                {
                    REMOVE_ALL_CHAR_WEAPONS( sub_8717( uParam0 ) );
                    GIVE_WEAPON_TO_CHAR( sub_8717( uParam0 ), 12, 10000, 0 );
                }
                GET_SCRIPT_TASK_STATUS( sub_8717( uParam0 ), 91, ref iVar3 );
                if (iVar3 == 7)
                {
                    TASK_COMBAT( sub_8717( uParam0 ), sub_136492( sub_8717( uParam0 ) ) );
                }
            }
        }
    }
    return;
}

void sub_142307()
{
    int I;

    for ( I = 0; I <= 4; I++ )
    {
        if ((I == 0) || (I == 2))
        {
            if (sub_8692( l_U1500._fU1648[I] ))
            {
                if (I == 2)
                {
                    if (sub_35989( l_U1500._fU1636[1] ))
                    {
                        if (IS_CHAR_IN_CAR( sub_8717( l_U1500._fU1648[I] ), sub_9181( l_U1500._fU1636[1] ) ))
                        {
                            sub_142475( l_U1500._fU1648[I], sub_9181( l_U1500._fU1636[1] ), I );
                        }
                    }
                    else if (HAS_CONTROL_OF_NETWORK_ID( l_U1500._fU1648[I] ))
                    {
                        SET_COMBAT_DECISION_MAKER( sub_8717( l_U1500._fU1648[I] ), l_U3068 );
                        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( sub_8717( l_U1500._fU1648[I] ), 1 );
                        SET_CHAR_WILL_USE_COVER( sub_8717( l_U1500._fU1648[I] ), 1 );
                        TASK_COMBAT( sub_8717( l_U1500._fU1648[I] ), sub_136492( sub_8717( l_U1500._fU1648[I] ) ) );
                    }
                }
                else if (sub_35989( l_U1500._fU1636[0] ))
                {
                    if (IS_CHAR_IN_CAR( sub_8717( l_U1500._fU1648[I] ), sub_9181( l_U1500._fU1636[0] ) ))
                    {
                        sub_142475( l_U1500._fU1648[I], sub_9181( l_U1500._fU1636[0] ), I );
                    }
                }
                else if (HAS_CONTROL_OF_NETWORK_ID( l_U1500._fU1648[I] ))
                {
                    SET_COMBAT_DECISION_MAKER( sub_8717( l_U1500._fU1648[I] ), l_U3068 );
                    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( sub_8717( l_U1500._fU1648[I] ), 1 );
                    SET_CHAR_WILL_USE_COVER( sub_8717( l_U1500._fU1648[I] ), 1 );
                    TASK_COMBAT( sub_8717( l_U1500._fU1648[I] ), sub_136492( sub_8717( l_U1500._fU1648[I] ) ) );
                };;;
            }
        }
        else if ((sub_35989( l_U1500._fU1636[0] )) AND (sub_8692( l_U1500._fU1648[1] )))
        {
            if (IS_CHAR_IN_CAR( sub_8717( l_U1500._fU1648[1] ), sub_9181( l_U1500._fU1636[0] ) ))
            {
                if (sub_140957( sub_9181( l_U1500._fU1636[0] ) ))
                {
                    sub_141270( l_U1500._fU1648[1] );
                }
            }
            else if (sub_8692( l_U1500._fU1648[1] ))
            {
                if (HAS_CONTROL_OF_NETWORK_ID( l_U1500._fU1648[1] ))
                {
                    SET_COMBAT_DECISION_MAKER( sub_8717( l_U1500._fU1648[1] ), l_U3068 );
                    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( sub_8717( l_U1500._fU1648[1] ), 1 );
                    SET_CHAR_WILL_USE_COVER( sub_8717( l_U1500._fU1648[1] ), 1 );
                    TASK_COMBAT( sub_8717( l_U1500._fU1648[1] ), sub_136492( sub_8717( l_U1500._fU1648[1] ) ) );
                }
            }
        }
        else if (sub_8692( l_U1500._fU1648[1] ))
        {
            if (HAS_CONTROL_OF_NETWORK_ID( l_U1500._fU1648[1] ))
            {
                SET_COMBAT_DECISION_MAKER( sub_8717( l_U1500._fU1648[1] ), l_U3068 );
                SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( sub_8717( l_U1500._fU1648[1] ), 1 );
                SET_CHAR_WILL_USE_COVER( sub_8717( l_U1500._fU1648[1] ), 1 );
                TASK_COMBAT( sub_8717( l_U1500._fU1648[1] ), sub_136492( sub_8717( l_U1500._fU1648[1] ) ) );
            }
        }
        if ((sub_35989( l_U1500._fU1636[1] )) AND (sub_8692( l_U1500._fU1648[3] )))
        {
            if (IS_CHAR_IN_CAR( sub_8717( l_U1500._fU1648[3] ), sub_9181( l_U1500._fU1636[1] ) ))
            {
                if (sub_140957( sub_9181( l_U1500._fU1636[1] ) ))
                {
                    sub_141270( l_U1500._fU1648[3] );
                }
            }
            else if (sub_8692( l_U1500._fU1648[3] ))
            {
                if (HAS_CONTROL_OF_NETWORK_ID( l_U1500._fU1648[3] ))
                {
                    SET_COMBAT_DECISION_MAKER( sub_8717( l_U1500._fU1648[3] ), l_U3068 );
                    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( sub_8717( l_U1500._fU1648[3] ), 1 );
                    SET_CHAR_WILL_USE_COVER( sub_8717( l_U1500._fU1648[3] ), 1 );
                    TASK_COMBAT( sub_8717( l_U1500._fU1648[3] ), sub_136492( sub_8717( l_U1500._fU1648[3] ) ) );
                }
            }
        }
        else if (sub_8692( l_U1500._fU1648[3] ))
        {
            if (HAS_CONTROL_OF_NETWORK_ID( l_U1500._fU1648[3] ))
            {
                SET_COMBAT_DECISION_MAKER( sub_8717( l_U1500._fU1648[3] ), l_U3068 );
                SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( sub_8717( l_U1500._fU1648[3] ), 1 );
                SET_CHAR_WILL_USE_COVER( sub_8717( l_U1500._fU1648[3] ), 1 );
                TASK_COMBAT( sub_8717( l_U1500._fU1648[3] ), sub_136492( sub_8717( l_U1500._fU1648[3] ) ) );
            }
        };;;
    }
    return;
}

void sub_142475(unknown uParam0, unknown uParam1, int iParam2)
{
    vector[15] vVar5;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    int iVar51;

    array(ref vVar5, 15);
    switch (l_U1500._fU524)
    {
        case 0:
        vVar5[0] = {-1714.72600000, -365.38310000, 1.88430000};
        vVar5[1] = {-1597.15500000, -246.98680000, 2.96460000};
        vVar5[2] = {-1513.99800000, -150.90480000, 10.71410000};
        vVar5[3] = {-1466.78700000, -105.51940000, 6.30430000};
        vVar5[4] = {-1419.18500000, -14.83220000, 22.85130000};
        vVar5[5] = {-1418.73700000, 161.09900000, 50.65600000};
        vVar5[6] = {-1279.86600000, 370.67700000, 50.59580000};
        vVar5[7] = {-1245.73300000, 737.65310000, 20.05480000};
        vVar5[8] = {-1121.76400000, 777.28720000, 19.77460000};
        vVar5[9] = {-934.12600000, 847.30930000, 11.08550000};
        vVar5[10] = {-965.78290000, 868.34390000, 13.19250000};
        break;
        case 1:
        vVar5[0] = {-1507.99400000, -441.07020000, 2.41850000};
        vVar5[1] = {-1320.74700000, -365.24800000, 2.54370000};
        vVar5[2] = {-1209.02400000, -247.10800000, 2.53650000};
        vVar5[3] = {-1311.76200000, -92.79180000, 6.16030000};
        vVar5[4] = {-1386.90200000, 67.84160000, 6.38970000};
        vVar5[5] = {-1364.24000000, 215.55890000, 8.48890000};
        vVar5[6] = {-1352.55800000, 359.99110000, 14.14340000};
        vVar5[7] = {-1388.04400000, 436.74300000, 14.11320000};
        vVar5[8] = {-1254.83200000, 457.82960000, 4.49410000};
        vVar5[9] = {-1163.07200000, 514.47540000, 3.86670000};
        vVar5[10] = {-1065.66200000, 580.60910000, 3.86710000};
        break;
        case 2:
        vVar5[0] = {-1443.45500000, -485.69570000, 3.60610000};
        vVar5[1] = {-1635.74000000, -485.41640000, 49.89840000};
        vVar5[2] = {-1794.90500000, -395.07320000, 50.61420000};
        vVar5[3] = {-1835.66600000, -187.46460000, 50.62590000};
        vVar5[4] = {-1951.74500000, 11.07130000, 28.22610000};
        vVar5[5] = {-1927.34000000, 294.22540000, 22.62850000};
        vVar5[6] = {-1696.12200000, 561.81870000, 24.82420000};
        vVar5[7] = {-1650.96600000, 737.99800000, 29.36410000};
        vVar5[8] = {-1550.68200000, 771.07420000, 24.70100000};
        vVar5[9] = {-1431.92500000, 734.35320000, 19.66550000};
        vVar5[10] = {-1296.87800000, 665.12020000, 14.88740000};
        break;
        case 3:
        vVar5[0] = {-1417.07300000, -321.83580000, 2.35820000};
        vVar5[1] = {-1208.87000000, -249.61600000, 2.53730000};
        vVar5[2] = {-1312.88900000, -71.13860000, 6.20490000};
        vVar5[3] = {-1371.83100000, 72.49510000, 6.28110000};
        vVar5[4] = {-1277.53000000, 311.69190000, 13.06340000};
        vVar5[5] = {-1275.23900000, 541.48090000, 12.00210000};
        vVar5[6] = {-1186.56200000, 745.02920000, 17.55750000};
        vVar5[7] = {-1237.31900000, 864.02340000, 19.11630000};
        vVar5[8] = {-1252.50800000, 1084.48100000, 18.96890000};
        vVar5[9] = {-1092.54700000, 1136.58800000, 14.61920000};
        vVar5[10] = {-1116.34200000, 1186.86600000, 16.76090000};
        break;
    }
    if (iParam2 == 0)
    {
        if (sub_8692( uParam0 ))
        {
            if (HAS_CONTROL_OF_NETWORK_ID( uParam0 ))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_8717( uParam0 ), vVar5[l_U1968[GET_PLAYER_ID()]._fU40]._fU0, vVar5[l_U1968[GET_PLAYER_ID()]._fU40]._fU4, vVar5[l_U1968[GET_PLAYER_ID()]._fU40]._fU8, 5.00000000, 5.00000000, 5.00000000, 0 )))
                {
                    GET_SCRIPT_TASK_STATUS( sub_8717( uParam0 ), 15, ref iVar51 );
                    if (iVar51 == 7)
                    {
                        if (l_U1968[GET_PLAYER_ID()]._fU40 < 11)
                        {
                            if (NOT (l_U1968[GET_PLAYER_ID()]._fU40 == 10))
                            {
                                TASK_CAR_DRIVE_TO_COORD( sub_8717( uParam0 ), uParam1, vVar5[l_U1968[GET_PLAYER_ID()]._fU40]._fU0, vVar5[l_U1968[GET_PLAYER_ID()]._fU40]._fU4, vVar5[l_U1968[GET_PLAYER_ID()]._fU40]._fU8, 18.00000000, 0, 0, 2, 5.00000000, 0 );
                            }
                            else
                            {
                                TASK_CAR_DRIVE_TO_COORD( sub_8717( uParam0 ), uParam1, vVar5[l_U1968[GET_PLAYER_ID()]._fU40]._fU0, vVar5[l_U1968[GET_PLAYER_ID()]._fU40]._fU4, vVar5[l_U1968[GET_PLAYER_ID()]._fU40]._fU8, 18.00000000, 0, 0, 2, 3.00000000, 0 );
                            }
                        }
                        else
                        {
                            l_U1968[GET_PLAYER_ID()]._fU128 = 1;
                        }
                    }
                }
                else
                {
                    l_U1968[GET_PLAYER_ID()]._fU40++;
                }
                sub_140508( sub_8717( uParam0 ) );
            }
            else
            {
                sub_144086();
            }
        }
    }
    else if (iParam2 == 2)
    {
        if (sub_8692( uParam0 ))
        {
            if (HAS_CONTROL_OF_NETWORK_ID( uParam0 ))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_8717( uParam0 ), vVar5[l_U1968[GET_PLAYER_ID()]._fU44]._fU0, vVar5[l_U1968[GET_PLAYER_ID()]._fU44]._fU4, vVar5[l_U1968[GET_PLAYER_ID()]._fU44]._fU8, 5.00000000, 5.00000000, 5.00000000, 0 )))
                {
                    GET_SCRIPT_TASK_STATUS( sub_8717( uParam0 ), 15, ref iVar51 );
                    if (iVar51 == 7)
                    {
                        if (l_U1968[GET_PLAYER_ID()]._fU40 < 11)
                        {
                            if (NOT (l_U1968[GET_PLAYER_ID()]._fU40 == 10))
                            {
                                TASK_CAR_DRIVE_TO_COORD( sub_8717( uParam0 ), uParam1, vVar5[l_U1968[GET_PLAYER_ID()]._fU40]._fU0, vVar5[l_U1968[GET_PLAYER_ID()]._fU40]._fU4, vVar5[l_U1968[GET_PLAYER_ID()]._fU40]._fU8, 18.00000000, 0, 0, 2, 5.00000000, 0 );
                            }
                            else
                            {
                                TASK_CAR_DRIVE_TO_COORD( sub_8717( uParam0 ), uParam1, vVar5[l_U1968[GET_PLAYER_ID()]._fU40]._fU0, vVar5[l_U1968[GET_PLAYER_ID()]._fU40]._fU4, vVar5[l_U1968[GET_PLAYER_ID()]._fU40]._fU8, 18.00000000, 0, 0, 2, 3.00000000, 0 );
                            }
                        }
                        else
                        {
                            l_U1968[GET_PLAYER_ID()]._fU128 = 1;
                        }
                    }
                }
                else
                {
                    l_U1968[GET_PLAYER_ID()]._fU44++;
                }
                sub_140508( sub_8717( uParam0 ) );
            }
            else
            {
                sub_144086();
            }
        }
    }
    return;
}

void sub_144086()
{
    int I;
    unknown[16] uVar3;
    unknown[16] uVar20;
    int iVar37;
    int iVar38;

    array(ref uVar3, 16);
    array(ref uVar20, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1968[I]._fU40;
        if (uVar3[I] > iVar37)
        {
            iVar37 = uVar3[I];
        }
    }
    for ( I = 0; I < 16; I++ )
    {
        uVar20[I] = l_U1968[I]._fU44;
        if (uVar20[I] > iVar38)
        {
            iVar38 = uVar20[I];
        }
    }
    if (l_U1968[GET_PLAYER_ID()]._fU40 < iVar37)
    {
        l_U1968[GET_PLAYER_ID()]._fU40 = iVar37;
    }
    if (l_U1968[GET_PLAYER_ID()]._fU44 < iVar38)
    {
        l_U1968[GET_PLAYER_ID()]._fU44 = iVar38;
    }
    return;
}

void sub_146354()
{
    unknown uVar2;
    int iVar3;

    if (NOT sub_146363())
    {
        if (sub_35989( l_U1500._fU1524[0] ))
        {
            sub_146441( 0 );
            GET_DRIVER_OF_CAR( sub_9181( l_U1500._fU1524[0] ), ref iVar3 );
            if (NOT (iVar3 == nil))
            {
                if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1732[0] ))
                {
                    if (iVar3 == (sub_8717( l_U1500._fU1732[0] )))
                    {
                        sub_148176( l_U1500._fU1732[0], sub_9181( l_U1500._fU1524[0] ), uVar2 );
                        sub_149253( l_U1500._fU1732[0], sub_9181( l_U1500._fU1524[0] ) );
                    }
                }
                if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1748[0] ))
                {
                    if (iVar3 == (sub_8717( l_U1500._fU1748[0] )))
                    {
                        sub_148176( l_U1500._fU1748[0], sub_9181( l_U1500._fU1524[0] ), uVar2 );
                        sub_149253( l_U1500._fU1748[0], sub_9181( l_U1500._fU1524[0] ) );
                    }
                }
                if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1764[0] ))
                {
                    if (iVar3 == (sub_8717( l_U1500._fU1764[0] )))
                    {
                        sub_148176( l_U1500._fU1764[0], sub_9181( l_U1500._fU1524[0] ), uVar2 );
                        sub_149253( l_U1500._fU1764[0], sub_9181( l_U1500._fU1524[0] ) );
                    }
                }
            }
        }
    }
    else
    {
        sub_149890();
    }
    return;
}

int sub_146363()
{
    if (l_U1968[GET_PLAYER_ID()]._fU32 < 19)
    {
        return 0;
    }
    return 1;
}

void sub_146441(unknown uParam0)
{
    int iVar3;
    float fVar4;
    int iVar5;
    int iVar6;

    if (sub_35989( l_U1500._fU1524[uParam0] ))
    {
        GET_CAR_SPEED( sub_9181( l_U1500._fU1524[uParam0] ), ref fVar4 );
        if (fVar4 < 3.00000000)
        {
            GET_DRIVER_OF_CAR( sub_9181( l_U1500._fU1524[uParam0] ), ref iVar3 );
            if (NOT (iVar3 == nil))
            {
                if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1732[uParam0] ))
                {
                    if (iVar3 == (sub_8717( l_U1500._fU1732[uParam0] )))
                    {
                        if (sub_26352( l_U1500._fU1732[uParam0] ))
                        {
                            if (sub_8692( l_U1500._fU1748[uParam0] ))
                            {
                                if (IS_CHAR_IN_CAR( sub_8717( l_U1500._fU1748[uParam0] ), sub_9181( l_U1500._fU1524[uParam0] ) ))
                                {
                                    if (HAS_CONTROL_OF_NETWORK_ID( l_U1500._fU1748[uParam0] ))
                                    {
                                        GET_SCRIPT_TASK_STATUS( sub_8717( l_U1500._fU1748[uParam0] ), 31, ref iVar5 );
                                        if (iVar5 == 7)
                                        {
                                            TASK_LEAVE_CAR( sub_8717( l_U1500._fU1748[uParam0] ), sub_9181( l_U1500._fU1524[uParam0] ) );
                                        }
                                    }
                                }
                                else if (HAS_CONTROL_OF_NETWORK_ID( l_U1500._fU1748[uParam0] ))
                                {
                                    GET_SCRIPT_TASK_STATUS( sub_8717( l_U1500._fU1748[uParam0] ), 12, ref iVar6 );
                                    if (iVar6 == 7)
                                    {
                                        TASK_ENTER_CAR_AS_DRIVER( sub_8717( l_U1500._fU1748[uParam0] ), sub_9181( l_U1500._fU1524[uParam0] ), 30000 );
                                    }
                                }
                            }
                            else if (sub_8692( l_U1500._fU1764[uParam0] ))
                            {
                                if (HAS_CONTROL_OF_NETWORK_ID( l_U1500._fU1764[uParam0] ))
                                {
                                    if (IS_CHAR_IN_CAR( sub_8717( l_U1500._fU1764[uParam0] ), sub_9181( l_U1500._fU1524[uParam0] ) ))
                                    {
                                        GET_SCRIPT_TASK_STATUS( sub_8717( l_U1500._fU1764[uParam0] ), 31, ref iVar5 );
                                        if (iVar5 == 7)
                                        {
                                            TASK_LEAVE_CAR( sub_8717( l_U1500._fU1764[uParam0] ), sub_9181( l_U1500._fU1524[uParam0] ) );
                                        }
                                    }
                                    else
                                    {
                                        GET_SCRIPT_TASK_STATUS( sub_8717( l_U1500._fU1764[uParam0] ), 12, ref iVar6 );
                                        if (iVar6 == 7)
                                        {
                                            TASK_ENTER_CAR_AS_DRIVER( sub_8717( l_U1500._fU1764[uParam0] ), sub_9181( l_U1500._fU1524[uParam0] ), 30000 );
                                        }
                                    }
                                }
                            }
                        }
                    }
                    else if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1500._fU1748[uParam0] ))
                    {
                        if (iVar3 == (sub_8717( l_U1500._fU1748[uParam0] )))
                        {
                            if (sub_26352( l_U1500._fU1748[uParam0] ))
                            {
                                if (sub_8692( l_U1500._fU1764[uParam0] ))
                                {
                                    if (HAS_CONTROL_OF_NETWORK_ID( l_U1500._fU1764[uParam0] ))
                                    {
                                        if (IS_CHAR_IN_CAR( sub_8717( l_U1500._fU1764[uParam0] ), sub_9181( l_U1500._fU1524[uParam0] ) ))
                                        {
                                            GET_SCRIPT_TASK_STATUS( sub_8717( l_U1500._fU1764[uParam0] ), 31, ref iVar5 );
                                            if (iVar5 == 7)
                                            {
                                                TASK_LEAVE_CAR( sub_8717( l_U1500._fU1764[uParam0] ), sub_9181( l_U1500._fU1524[uParam0] ) );
                                            }
                                        }
                                        else
                                        {
                                            GET_SCRIPT_TASK_STATUS( sub_8717( l_U1500._fU1764[uParam0] ), 12, ref iVar6 );
                                            if (iVar6 == 7)
                                            {
                                                TASK_ENTER_CAR_AS_DRIVER( sub_8717( l_U1500._fU1764[uParam0] ), sub_9181( l_U1500._fU1524[uParam0] ), 30000 );
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else if (sub_8692( l_U1500._fU1748[uParam0] ))
            {
                if (HAS_CONTROL_OF_NETWORK_ID( l_U1500._fU1748[uParam0] ))
                {
                    if (IS_CHAR_IN_CAR( sub_8717( l_U1500._fU1748[uParam0] ), sub_9181( l_U1500._fU1524[uParam0] ) ))
                    {
                        GET_SCRIPT_TASK_STATUS( sub_8717( l_U1500._fU1748[uParam0] ), 31, ref iVar5 );
                        if (iVar5 == 7)
                        {
                            TASK_LEAVE_CAR( sub_8717( l_U1500._fU1748[uParam0] ), sub_9181( l_U1500._fU1524[uParam0] ) );
                        }
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( sub_8717( l_U1500._fU1748[uParam0] ), 12, ref iVar6 );
                        if (iVar6 == 7)
                        {
                            TASK_ENTER_CAR_AS_DRIVER( sub_8717( l_U1500._fU1748[uParam0] ), sub_9181( l_U1500._fU1524[uParam0] ), 30000 );
                        }
                    }
                }
            }
            else if (sub_8692( l_U1500._fU1764[uParam0] ))
            {
                if (HAS_CONTROL_OF_NETWORK_ID( l_U1500._fU1764[uParam0] ))
                {
                    if (IS_CHAR_IN_CAR( sub_8717( l_U1500._fU1764[uParam0] ), sub_9181( l_U1500._fU1524[uParam0] ) ))
                    {
                        GET_SCRIPT_TASK_STATUS( sub_8717( l_U1500._fU1764[uParam0] ), 31, ref iVar5 );
                        if (iVar5 == 7)
                        {
                            TASK_LEAVE_CAR( sub_8717( l_U1500._fU1764[uParam0] ), sub_9181( l_U1500._fU1524[uParam0] ) );
                        }
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( sub_8717( l_U1500._fU1764[uParam0] ), 12, ref iVar6 );
                        if (iVar6 == 7)
                        {
                            TASK_ENTER_CAR_AS_DRIVER( sub_8717( l_U1500._fU1764[uParam0] ), sub_9181( l_U1500._fU1524[uParam0] ), 30000 );
                        }
                    }
                }
            };;;
        }
    }
    return;
}

void sub_148176(unknown uParam0, unknown uParam1, int iParam2)
{
    vector[19] vVar5;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    int iVar66;

    array(ref vVar5, 19);
    vVar5[0] = {-2031.00900000, -702.97890000, 0.00000000};
    vVar5[1] = {-1774.19200000, -769.69160000, 0.00000000};
    vVar5[2] = {-1337.83900000, -791.21200000, 0.00000000};
    vVar5[3] = {-1039.18100000, -702.26030000, 0.00000000};
    vVar5[4] = {-905.01850000, -566.78530000, 0.00000000};
    vVar5[5] = {-821.46780000, -401.99040000, 0.00000000};
    vVar5[6] = {-842.70860000, -124.63750000, 0.00000000};
    vVar5[7] = {-840.53470000, 45.33260000, 0.00000000};
    vVar5[8] = {-811.33130000, 295.21640000, 0.00000000};
    vVar5[9] = {-786.52640000, 536.08770000, 0.00000000};
    vVar5[10] = {-751.80250000, 853.82950000, 0.00000000};
    vVar5[11] = {-713.57760000, 1167.29800000, 0.00000000};
    vVar5[12] = {-654.01590000, 1437.30300000, 0.00000000};
    vVar5[13] = {-626.01870000, 1607.41200000, 0.00000000};
    vVar5[14] = {-740.28120000, 1879.72000000, 0.00000000};
    vVar5[15] = {-894.91350000, 2033.04200000, 0.00000000};
    vVar5[16] = {-1040.64400000, 2047.36700000, 0.00000000};
    vVar5[17] = {-1093.99300000, 1888.53200000, 0.00000000};
    vVar5[18] = {-1102.30700000, 1832.89800000, 0.00000000};
    uVar63 = {vVar5[18]};
    if (iParam2 == 0)
    {
        if (sub_8692( uParam0 ))
        {
            if (NOT (LOCATE_CHAR_IN_CAR_3D( sub_8717( uParam0 ), uVar63._fU0, uVar63._fU4, uVar63._fU8, 6.00000000, 6.00000000, 6.00000000, 0 )))
            {
                if (HAS_CONTROL_OF_NETWORK_ID( uParam0 ))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_8717( uParam0 ), vVar5[l_U1968[GET_PLAYER_ID()]._fU32]._fU0, vVar5[l_U1968[GET_PLAYER_ID()]._fU32]._fU4, vVar5[l_U1968[GET_PLAYER_ID()]._fU32]._fU8, 8.00000000, 8.00000000, 8.00000000, 0 )))
                    {
                        GET_SCRIPT_TASK_STATUS( sub_8717( uParam0 ), 15, ref iVar66 );
                        if (iVar66 == 7)
                        {
                            if (l_U1968[GET_PLAYER_ID()]._fU32 < 19)
                            {
                                TASK_CAR_DRIVE_TO_COORD( sub_8717( uParam0 ), uParam1, vVar5[l_U1968[GET_PLAYER_ID()]._fU32]._fU0, vVar5[l_U1968[GET_PLAYER_ID()]._fU32]._fU4, vVar5[l_U1968[GET_PLAYER_ID()]._fU32]._fU8, 10.00000000, 0, 0, 3, 8.00000000, 200 );
                            }
                        }
                    }
                    else
                    {
                        l_U1968[GET_PLAYER_ID()]._fU32++;
                    }
                }
                else
                {
                    sub_149052();
                }
            }
        }
    }
    return;
}

void sub_149052()
{
    int I;
    unknown[16] uVar3;
    int iVar20;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1968[I]._fU32;
        if (I == 0)
        {
            iVar20 = uVar3[I];
        }
        else if (uVar3[I] > iVar20)
        {
            iVar20 = uVar3[I];
        }
    }
    if (l_U1968[GET_PLAYER_ID()]._fU32 < iVar20)
    {
        l_U1968[GET_PLAYER_ID()]._fU32 = iVar20;
    }
    return;
}

void sub_149253(unknown uParam0, unknown uParam1)
{
    if (sub_8692( uParam0 ))
    {
        if (IS_VEH_DRIVEABLE( uParam1 ))
        {
            if (l_U1968[GET_PLAYER_ID()]._fU32 < 17)
            {
                if (NOT (LOCATE_CHAR_IN_CAR_CHAR_3D( sub_8717( uParam0 ), sub_2736(), 25.00000000, 25.00000000, 25.00000000, 0 )))
                {
                    if (NOT (LOCATE_CHAR_IN_CAR_CHAR_3D( sub_8717( uParam0 ), sub_2736(), 50.00000000, 50.00000000, 50.00000000, 0 )))
                    {
                        if (LOCATE_CHAR_IN_CAR_CHAR_3D( sub_8717( uParam0 ), sub_2736(), 75.00000000, 75.00000000, 75.00000000, 0 ))
                        {
                            if (HAS_CONTROL_OF_NETWORK_ID( uParam0 ))
                            {
                                SET_DRIVE_TASK_CRUISE_SPEED( sub_8717( uParam0 ), 20.00000000 );
                            }
                        }
                        else if (HAS_CONTROL_OF_NETWORK_ID( uParam0 ))
                        {
                            SET_DRIVE_TASK_CRUISE_SPEED( sub_8717( uParam0 ), 10.00000000 );
                        }
                    }
                    else if (HAS_CONTROL_OF_NETWORK_ID( uParam0 ))
                    {
                        SET_DRIVE_TASK_CRUISE_SPEED( sub_8717( uParam0 ), 30.00000000 );
                    }
                }
                else if (HAS_CONTROL_OF_NETWORK_ID( uParam0 ))
                {
                    SET_DRIVE_TASK_CRUISE_SPEED( sub_8717( uParam0 ), 40.00000000 );
                }
            }
            else if (NOT l_U3546)
            {
                if (HAS_CONTROL_OF_NETWORK_ID( uParam0 ))
                {
                    SET_DRIVE_TASK_CRUISE_SPEED( sub_8717( uParam0 ), 15.00000000 );
                    l_U3546 = 1;
                }
            }
        }
    }
    return;
}

void sub_149890()
{
    if (sub_8692( l_U1500._fU1732[0] ))
    {
        if (sub_35989( l_U1500._fU1328[0] ))
        {
            if (HAS_CONTROL_OF_NETWORK_ID( l_U1500._fU1732[0] ))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_8717( l_U1500._fU1732[0] ), sub_9181( l_U1500._fU1328[0] ) )))
                {
                    sub_150048( sub_8717( l_U1500._fU1732[0] ), sub_9181( l_U1500._fU1328[0] ) );
                }
                else
                {
                    sub_150259( sub_8717( l_U1500._fU1732[0] ), sub_9181( l_U1500._fU1328[0] ) );
                }
            }
        }
    }
    if (sub_8692( l_U1500._fU1748[0] ))
    {
        if (sub_35989( l_U1500._fU1328[1] ))
        {
            if (HAS_CONTROL_OF_NETWORK_ID( l_U1500._fU1748[0] ))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_8717( l_U1500._fU1748[0] ), sub_9181( l_U1500._fU1328[1] ) )))
                {
                    sub_150048( sub_8717( l_U1500._fU1748[0] ), sub_9181( l_U1500._fU1328[1] ) );
                }
                else
                {
                    sub_150259( sub_8717( l_U1500._fU1748[0] ), sub_9181( l_U1500._fU1328[1] ) );
                }
            }
        }
    }
    if (sub_8692( l_U1500._fU1764[0] ))
    {
        if (sub_35989( l_U1500._fU1328[2] ))
        {
            if (HAS_CONTROL_OF_NETWORK_ID( l_U1500._fU1764[0] ))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_8717( l_U1500._fU1764[0] ), sub_9181( l_U1500._fU1328[2] ) )))
                {
                    sub_150048( sub_8717( l_U1500._fU1764[0] ), sub_9181( l_U1500._fU1328[2] ) );
                }
                else
                {
                    sub_150259( sub_8717( l_U1500._fU1764[0] ), sub_9181( l_U1500._fU1328[2] ) );
                }
            }
        }
    }
    return;
}

void sub_150048(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            if (IS_CHAR_IN_ANY_BOAT( uParam0 ))
            {
                GET_SCRIPT_TASK_STATUS( uParam0, 130, ref iVar4 );
                if (iVar4 == 7)
                {
                    TASK_GET_OFF_BOAT( uParam0, -1 );
                }
            }
            else
            {
                GET_SCRIPT_TASK_STATUS( uParam0, 130, ref iVar4 );
                if (iVar4 == 7)
                {
                    if (NOT (IS_CHAR_IN_CAR( uParam0, uParam1 )))
                    {
                        GET_SCRIPT_TASK_STATUS( uParam0, 12, ref iVar5 );
                        if (iVar5 == 7)
                        {
                            TASK_ENTER_CAR_AS_DRIVER( uParam0, uParam1, 45000 );
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_150259(unknown uParam0, unknown uParam1)
{
    vector[12] vVar4;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    int iVar41;

    array(ref vVar4, 12);
    vVar4[0] = {-1031.75000000, 1803.89600000, 7.73370000};
    vVar4[1] = {-976.25820000, 1621.02000000, 23.34300000};
    vVar4[2] = {-951.22110000, 1384.28100000, 24.39740000};
    vVar4[3] = {-921.06120000, 1243.57500000, 22.32520000};
    vVar4[4] = {-792.83060000, 1164.07200000, 18.91670000};
    vVar4[5] = {-649.03420000, 1205.35000000, 18.49750000};
    vVar4[6] = {-516.90700000, 1339.10100000, 16.96470000};
    vVar4[7] = {-306.84610000, 1338.28100000, 20.95260000};
    vVar4[8] = {-197.42900000, 1339.29000000, 19.89680000};
    vVar4[9] = {-205.46760000, 1383.14500000, 19.81820000};
    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            if (HAS_CONTROL_OF_NETWORK_ID( sub_23952( uParam0 ) ))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( uParam0, vVar4[l_U1968[GET_PLAYER_ID()]._fU48]._fU0, vVar4[l_U1968[GET_PLAYER_ID()]._fU48]._fU4, vVar4[l_U1968[GET_PLAYER_ID()]._fU48]._fU8, 10.00000000, 10.00000000, 10.00000000, 0 )))
                {
                    GET_SCRIPT_TASK_STATUS( uParam0, 15, ref iVar41 );
                    if (iVar41 == 7)
                    {
                        if (l_U1968[GET_PLAYER_ID()]._fU48 < 10)
                        {
                            TASK_CAR_DRIVE_TO_COORD( uParam0, uParam1, vVar4[l_U1968[GET_PLAYER_ID()]._fU48]._fU0, vVar4[l_U1968[GET_PLAYER_ID()]._fU48]._fU4, vVar4[l_U1968[GET_PLAYER_ID()]._fU48]._fU8, 18.00000000, 0, 0, 2, 8.00000000, 0 );
                        }
                        else
                        {
                            l_U1968[GET_PLAYER_ID()]._fU128 = 1;
                        }
                    }
                }
                else
                {
                    l_U1968[GET_PLAYER_ID()]._fU48++;
                }
            }
            else
            {
                sub_150883();
            }
        }
    }
    return;
}

void sub_150883()
{
    int I;
    unknown[16] uVar3;
    int iVar20;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1968[I]._fU48;
        if (uVar3[I] > iVar20)
        {
            iVar20 = uVar3[I];
        }
    }
    if (l_U1968[GET_PLAYER_ID()]._fU48 < iVar20)
    {
        l_U1968[GET_PLAYER_ID()]._fU48 = iVar20;
    }
    return;
}

void sub_151444()
{
    sub_151457( ref l_U3551 );
    if (l_U3551 != nil)
    {
        sub_151892( l_U3551 );
    }
    else
    {
        sub_152628();
    }
    return;
}

void sub_151457(unknown uParam0)
{
    int I;
    unknown uVar4;
    int iVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    float fVar12;
    float fVar13;

    GET_CHAR_COORDINATES( sub_2736(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    if ((uParam0^) == nil)
    {
        fVar13 = 100000.00000000;
    }
    else if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        GET_CHAR_COORDINATES( (uParam0^), ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( uVar6._fU0, uVar6._fU4, uVar6._fU8, uVar9._fU0, uVar9._fU4, uVar9._fU8, ref fVar13 );
    }
    else
    {
        (uParam0^) = nil;
        fVar13 = 100000.00000000;
    }
    for ( I = 0; I <= 3; I++ )
    {
        switch (I)
        {
            case 0:
            uVar4 = l_U1500._fU1732[0];
            break;
            case 1:
            uVar4 = l_U1500._fU1604[0];
            break;
            case 2:
            uVar4 = l_U1500._fU1648[0];
            break;
            case 3:
            uVar4 = l_U1500._fU1648[2];
            break;
        }
        if (sub_8692( uVar4 ))
        {
            iVar5 = sub_8717( uVar4 );
            if ((NOT (IS_CHAR_INJURED( iVar5 ))) AND (iVar5 != (uParam0^)))
            {
                GET_CHAR_COORDINATES( iVar5, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                GET_DISTANCE_BETWEEN_COORDS_3D( uVar6._fU0, uVar6._fU4, uVar6._fU8, uVar9._fU0, uVar9._fU4, uVar9._fU8, ref fVar12 );
                if (fVar12 < (fVar13 + 1.50000000))
                {
                    (uParam0^) = iVar5;
                }
            }
        }
    }
    return;
}

void sub_151892(unknown uParam0)
{
    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            if (IS_CHAR_IN_ANY_CAR( uParam0 ))
            {
                sub_151945( ref uParam0 );
            }
            else
            {
                sub_152628();
            }
        }
        else
        {
            sub_152628();
        }
    }
    else
    {
        sub_152628();
    }
    return;
}

void sub_151945(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U1436)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((l_U1434) AND (IS_HINT_RUNNING()))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U1435 + 500))
        {
            l_U1434 = 0;
        }
    }
    if (((((IS_CONTROL_PRESSED( 0, 51 )) AND (IS_CHAR_IN_ANY_CAR( sub_2736() ))) AND (NOT (IS_CHAR_DEAD( (uParam0^) )))) AND (NOT sub_152113())) AND (iVar3 != 4))
    {
        if ((NOT IS_HINT_RUNNING()) AND (IS_CHAR_IN_ANY_CAR( (uParam0^) )))
        {
            if (l_U1436)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U1435 );
            l_U1434 = 1;
            l_U1433 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U1433) AND (NOT l_U1434))
        {
            if (l_U1436)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U1433 = 1;
        }
    }
    else if (l_U1433)
    {
        if (l_U1436)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U1433 = 0;
    };;;
    return;
}

int sub_152113()
{
    if (g_U482 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_152628()
{
    if (l_U1436)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED KILL_CHASE_HINT_CAM()" );
    }
    if (IS_HINT_RUNNING())
    {
        HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
    }
    l_U1434 = 0;
    l_U1433 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

int sub_153661()
{
    if (((sub_153670()) || (sub_153748())) || (sub_153826()))
    {
        return 1;
    }
    return 0;
}

int sub_153670()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_12059( I ))
        {
            if (NOT l_U1968[I]._fU152)
            {
                return 0;
            }
        }
    }
    return 1;
}

int sub_153748()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_12059( I ))
        {
            if (l_U1968[I]._fU28 == 3)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_153826()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1968[I]._fU28 == 2)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_153940()
{
    sub_50959();
    if (sub_153954())
    {
        if (NETWORK_IS_SESSION_STARTED())
        {
            if (sub_79941( l_U1500._fU516, 1 ))
            {
                l_U1968[GET_PLAYER_ID()]._fU148 = 1;
            }
            if (sub_154091())
            {
                l_U3209 = 12;
            }
        }
        else if (NOT l_U1968[GET_PLAYER_ID()]._fU120)
        {
            l_U1968[GET_PLAYER_ID()]._fU120 = 1;
            sub_85936( 0 );
            sub_416( GET_PLAYER_ID(), 0 );
        }
        else if (sub_154259())
        {
            l_U3209 = 12;
        };;;
    }
    else if (l_U1968[GET_PLAYER_ID()]._fU124)
    {
        if (sub_154416())
        {
            if (l_U1968[GET_PLAYER_ID()]._fU28 == 0)
            {
                l_U1968[GET_PLAYER_ID()]._fU28 = 4;
            }
        }
    }
    return;
}

int sub_153954()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1968[I]._fU28 == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int sub_154091()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (NOT l_U1968[I]._fU148)
            {
                return 0;
            }
        }
    }
    return 1;
}

int sub_154259()
{
    int I;
    int iVar3;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if ((l_U1968[I]._fU148) || (l_U1968[I]._fU120))
            {
                iVar3++;
            }
        }
    }
    if (iVar3 == GET_NUMBER_OF_PLAYERS())
    {
        return 1;
    }
    return 0;
}

int sub_154416()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1968[I]._fU28 == 4)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_154980()
{
    int iVar2;

    GET_NETWORK_TIMER( ref iVar2 );
    if (l_U103 == 0)
    {
        GET_NETWORK_TIMER( ref l_U103 );
    }
    else if (l_U103 < (iVar2 - 25000))
    {
        l_U103 = 0;
        g_U11 = 1;
        sub_65158();
    }
    return;
}

void sub_155313()
{
    if (l_U3207 != l_U1500._fU0[GET_PLAYER_ID()])
    {
        sub_155371( l_U1500._fU0[GET_PLAYER_ID()] - l_U3207 );
        l_U3207 = l_U1500._fU0[GET_PLAYER_ID()];
    }
    sub_155832( ref l_U3074, 0, 0, -1 );
    sub_158712();
    sub_160267( l_U1500._fU0[GET_PLAYER_ID()] );
    if (sub_160342())
    {
        sub_160599( ref l_U1500._fU0, ref l_U1500._fU0, 2, l_U3233, 1 );
    }
    return;
}

void sub_155371(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    char[16] cVar7;

    if (iParam0 > 0)
    {
        StrCopy( ref cVar7, "+ ", 16 );
        if ((GET_CURRENT_LANGUAGE() == 4) || (GET_CURRENT_LANGUAGE() == 1))
        {
            ConcatString(ref cVar7, iParam0, 16);
            ConcatString(ref cVar7, "$", 16);
        }
        else
        {
            ConcatString(ref cVar7, "$", 16);
            ConcatString(ref cVar7, iParam0, 16);
        }
        GET_HUD_COLOUR( 16, ref uVar3, ref uVar4, ref uVar5, ref uVar6 );
        sub_155480( ref cVar7, uVar3, uVar4, uVar5, -1, " ", uVar3, uVar4, uVar5 );
    }
    else if (iParam0 < 0)
    {
        StrCopy( ref cVar7, "- ", 16 );
        if ((GET_CURRENT_LANGUAGE() == 4) || (GET_CURRENT_LANGUAGE() == 1))
        {
            ConcatString(ref cVar7, iParam0 * -1, 16);
            ConcatString(ref cVar7, "$", 16);
        }
        else
        {
            ConcatString(ref cVar7, "$", 16);
            ConcatString(ref cVar7, iParam0 * -1, 16);
        }
        GET_HUD_COLOUR( 4, ref uVar3, ref uVar4, ref uVar5, ref uVar6 );
        sub_155480( ref cVar7, uVar3, uVar4, uVar5, -1, " ", uVar3, uVar4, uVar5 );
    }
    return;
}

void sub_155480(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    unknown uVar11;

    uVar11 = sub_83332( uParam4 );
    StrCopy( ref l_U104[uVar11]._fU76._fU0, uParam0, 64 );
    l_U104[uVar11]._fU76._fU68 = uParam1;
    l_U104[uVar11]._fU76._fU72 = uParam2;
    l_U104[uVar11]._fU76._fU76 = uParam3;
    StrCopy( ref l_U104[uVar11]._fU156._fU0, uParam5, 64 );
    l_U104[uVar11]._fU156._fU68 = uParam6;
    l_U104[uVar11]._fU156._fU72 = uParam7;
    l_U104[uVar11]._fU156._fU76 = uParam8;
    return;
}

void sub_155832(unknown uParam0, int iParam1, boolean bParam2, int iParam3)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U579[I] == -1)
            {
                sub_155895( I, -1, "JOINED" );
                l_U579[I] = 1;
            }
            if (l_U579[I] == 0)
            {
                l_U579[I] = 1;
            }
            if (IS_CHAR_FATALLY_INJURED( sub_465( I ) ))
            {
                sub_156190( ref (uParam0^)[I] );
                if (l_U579[I] == 2)
                {
                    if (I == (FIND_NETWORK_KILLER_OF_PLAYER( I )))
                    {
                        sub_155895( I, -1, "DIED" );
                    }
                    else if (IS_NETWORK_PLAYER_ACTIVE( FIND_NETWORK_KILLER_OF_PLAYER( I ) ))
                    {
                        sub_156333( FIND_NETWORK_KILLER_OF_PLAYER( I ), I );
                    }
                    l_U579[I] = 3;
                }
            }
            else if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
            {
                if (IS_PLAYER_SCRIPT_CONTROL_ON( sub_427( I ) ))
                {
                    if (sub_156894( I ))
                    {
                        sub_156190( ref (uParam0^)[I] );
                    }
                    else if (((((iParam1 == 0) || ((iParam1 != 4) AND (((GET_PLAYER_TEAM( sub_1079() )) == (GET_PLAYER_TEAM( sub_427( I ) ))) AND ((GET_PLAYER_TEAM( sub_1079() )) > -1)))) || (((sub_6720() == 10) AND ((GET_PLAYER_TEAM( sub_1079() )) == 0)) AND (NOT bParam2))) || ((((sub_6720() == 10) AND ((GET_PLAYER_TEAM( sub_1079() )) == 0)) AND (bParam2)) AND (I == iParam3))) || (((iParam1 == 6) AND (bParam2)) AND (iParam3 == GET_PLAYER_ID())))
                    {
                        if (NOT (DOES_BLIP_EXIST( (uParam0^)[I] )))
                        {
                            (uParam0^)[I] = sub_157259( I );
                        }
                    }
                    else if ((iParam1 == 1) || ((iParam1 == 7) AND (iParam3 == GET_PLAYER_ID())))
                    {
                        if (sub_47281( sub_2736(), sub_465( I ), l_U1371 ))
                        {
                            if (NOT (DOES_BLIP_EXIST( (uParam0^)[I] )))
                            {
                                (uParam0^)[I] = sub_157259( I );
                                l_U1372[I] = 255;
                            }
                        }
                        else if (DOES_BLIP_EXIST( (uParam0^)[I] ))
                        {
                            if (l_U1372[I] == 0)
                            {
                                REMOVE_BLIP( (uParam0^)[I] );
                                (uParam0^)[I] = nil;
                            }
                            else
                            {
                                CHANGE_BLIP_ALPHA( (uParam0^)[I], l_U1372[I] );
                                l_U1372[I] -= 20;
                                sub_157665( ref l_U1372[I], 0, 255 );
                            }
                        }
                    }
                    else if (iParam1 == 2)
                    {
                        if (NOT (sub_47281( sub_2736(), sub_465( I ), l_U1371 )))
                        {
                            if (NOT (DOES_BLIP_EXIST( (uParam0^)[I] )))
                            {
                                (uParam0^)[I] = sub_157259( I );
                                l_U1372[I] = 0;
                            }
                            if (DOES_BLIP_EXIST( (uParam0^)[I] ))
                            {
                                CHANGE_BLIP_ALPHA( (uParam0^)[I], l_U1372[I] );
                                l_U1372[I] += 25;
                                sub_157665( ref l_U1372[I], 0, 255 );
                            }
                        }
                        else if (DOES_BLIP_EXIST( (uParam0^)[I] ))
                        {
                            if (l_U1372[I] == 0)
                            {
                                REMOVE_BLIP( (uParam0^)[I] );
                                (uParam0^)[I] = nil;
                            }
                            else
                            {
                                CHANGE_BLIP_ALPHA( (uParam0^)[I], l_U1372[I] );
                                l_U1372[I] -= 20;
                                sub_157665( ref l_U1372[I], 0, 255 );
                            }
                        }
                    }
                    else if (iParam1 == 3)
                    {
                        if (sub_6720() == 16)
                        {
                            if (GET_HOST_ID() == I)
                            {
                                if (NOT (DOES_BLIP_EXIST( (uParam0^)[I] )))
                                {
                                    (uParam0^)[I] = sub_157259( I );
                                }
                            }
                            else
                            {
                                sub_156190( ref (uParam0^)[I] );
                            }
                        }
                        else if ((sub_158105( I )) == 1)
                        {
                            if (NOT (DOES_BLIP_EXIST( (uParam0^)[I] )))
                            {
                                (uParam0^)[I] = sub_157259( I );
                            }
                        }
                        else
                        {
                            sub_156190( ref (uParam0^)[I] );
                        }
                    }
                    else if (iParam1 == 4)
                    {
                        sub_156190( ref (uParam0^)[I] );
                    };;;;;;
                }
                else
                {
                    sub_156190( ref (uParam0^)[I] );
                }
            }
            if (l_U579[I] == 1)
            {
                l_U579[I] = 2;
            }
            if (l_U579[I] == 3)
            {
                l_U579[I] = 2;
            }
        }
        else if (l_U579[I] > 0)
        {
            sub_156190( ref (uParam0^)[I] );
            sub_155895( I, -1, "LEFTGAME" );
        }
        l_U579[I] = -1;;
    }
    if ((NETWORK_IS_RENDEZVOUS()) || (NETWORK_IS_TVT()))
    {
        if (l_U1389 != NETWORK_GET_RENDEZVOUS_HOST_PLAYER_ID())
        {
            l_U1389 = NETWORK_GET_RENDEZVOUS_HOST_PLAYER_ID();
            if (NETWORK_GET_RENDEZVOUS_HOST_PLAYER_ID() != -1)
            {
                if (IS_NETWORK_PLAYER_ACTIVE( l_U1389 ))
                {
                    sub_155895( l_U1389, -1, "IS_PARTY_LEADER" );
                }
            }
        }
    }
    return;
}

void sub_155895(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar6 = sub_83332( uParam1 );
    StrCopy( ref l_U104[uVar6]._fU76._fU0, GET_PLAYER_NAME( sub_427( uParam0 ) ), 64 );
    sub_74879( sub_427( uParam0 ), ref l_U104[uVar6]._fU76._fU68, ref l_U104[uVar6]._fU76._fU72, ref l_U104[uVar6]._fU76._fU76 );
    StrCopy( ref l_U104[uVar6]._fU156._fU0, uParam2, 64 );
    l_U104[uVar6]._fU156._fU64 = 1;
    GET_HUD_COLOUR( 1, ref l_U104[uVar6]._fU156._fU68, ref l_U104[uVar6]._fU156._fU72, ref l_U104[uVar6]._fU156._fU76, ref uVar5 );
    sub_83780( uVar6 );
    return;
}

void sub_156190(unknown uParam0)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        SET_ROUTE( (uParam0^), 0 );
        REMOVE_BLIP( (uParam0^) );
    }
    (uParam0^) = nil;
    return;
}

void sub_156333(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    char[16] cVar5;

    GET_DESTROYER_OF_NETWORK_ID( sub_23952( sub_465( uParam1 ) ), ref uVar4 );
    switch (uVar4)
    {
        case 0:
        case 56:
        case 1:
        case 2:
        StrCopy( ref cVar5, "KLD_MELEE", 16 );
        break;
        case 3:
        StrCopy( ref cVar5, "KLD_KNIFE", 16 );
        break;
        case 4:
        case 6:
        case 18:
        case 51:
        StrCopy( ref cVar5, "KLD_EXPLOSION", 16 );
        break;
        case 5:
        case 19:
        StrCopy( ref cVar5, "KLD_FIRE", 16 );
        break;
        case 7:
        case 9:
        StrCopy( ref cVar5, "KLD_PISTOL", 16 );
        break;
        case 10:
        case 11:
        StrCopy( ref cVar5, "KLD_SHOTGUN", 16 );
        break;
        case 12:
        case 13:
        case 52:
        StrCopy( ref cVar5, "KLD_UZI", 16 );
        break;
        case 14:
        case 15:
        case 20:
        StrCopy( ref cVar5, "KLD_AK", 16 );
        break;
        case 16:
        case 17:
        StrCopy( ref cVar5, "KLD_SNIPER", 16 );
        break;
        case 49:
        case 50:
        StrCopy( ref cVar5, "KLD_RUNOVER", 16 );
        break;
        default:
        StrCopy( ref cVar5, "KLD_GENERIC", 16 );
        break;
    }
    ConcatString(ref cVar5, sub_9879( 0, 10 ), 16);
    REGISTER_KILL_IN_MULTIPLAYER_GAME( uParam0, uParam1, uVar4 );
    sub_92694( uParam0, ref cVar5, uParam1 );
    return;
}

int sub_156894(unknown uParam0)
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_2736() ))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_465( uParam0 ) ))
            {
                if ((GET_PLAYER_TEAM( sub_427( uParam0 ) )) == (GET_PLAYER_TEAM( sub_427( GET_PLAYER_ID() ) )))
                {
                    if ((sub_157002( sub_2736() )) == (sub_157002( sub_465( uParam0 ) )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_157002(unknown uParam0)
{
    unknown Result;

    if (IS_CHAR_IN_ANY_CAR( uParam0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref Result );
        return Result;
    }
    return nil;
}

void sub_157259(int iParam0)
{
    unknown Result;
    int iVar4;
    int iVar5;
    int iVar6;

    ADD_BLIP_FOR_CHAR( sub_465( iParam0 ), ref Result );
    sub_74879( sub_427( iParam0 ), ref iVar4, ref iVar5, ref iVar6 );
    CHANGE_BLIP_COLOUR( Result, (((iVar4 * 16777216) + (iVar5 * 65536)) + (iVar6 * 256)) + 255 );
    CHANGE_BLIP_PRIORITY( Result, 3 );
    CHANGE_BLIP_SCALE( Result, 0.90000000 );
    CHANGE_BLIP_NAME_FROM_ASCII( Result, GET_PLAYER_NAME( sub_427( iParam0 ) ) );
    if (iParam0 == GET_PLAYER_ID())
    {
        CHANGE_BLIP_DISPLAY( Result, 0 );
    }
    else
    {
        CHANGE_BLIP_DISPLAY( Result, 2 );
    }
    return Result;
}

void sub_157665(unknown uParam0, int iParam1, int iParam2)
{
    if ((uParam0^) > iParam2)
    {
        (uParam0^) = iParam2;
    }
    if ((uParam0^) < iParam1)
    {
        (uParam0^) = iParam1;
    }
    return;
}

void sub_158105(unknown uParam0)
{
    if (((sub_18655()) || (sub_18610())) AND ((GET_PLAYER_TEAM( sub_427( uParam0 ) )) > -1))
    {
        return sub_158161( GET_PLAYER_TEAM( sub_427( uParam0 ) ) );
    }
    return sub_7132( uParam0 );
}

int sub_158161(int iParam0)
{
    int I;
    int Result;

    if (sub_67866( iParam0 ))
    {
        for ( I = 0; I < 8; I++ )
        {
            if ((sub_53413( l_U1030[I] )) > 0)
            {
                Result++;
                if (l_U1039[l_U1030[I]] == l_U1039[iParam0])
                {
                    return Result;
                }
            }
        }
    }
    else
    {
        for ( I = 0; I < 8; I++ )
        {
            if ((sub_53413( l_U1030[I] )) > 0)
            {
                Result++;
                if (l_U1030[I] == iParam0)
                {
                    return Result;
                }
            }
        }
    }
    return 1;
}

void sub_158712()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    float fVar11;
    unknown uVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;

    if (sub_2978())
    {
        SET_WIDESCREEN_FORMAT( 2 );
        iVar2 = l_U578;
        if (IS_HELP_MESSAGE_BEING_DISPLAYED())
        {
            GET_HELP_MESSAGE_BOX_SIZE( ref fVar13, ref fVar14 );
            fVar14 += l_U661 + 0.03000000;
        }
        else if (IS_IN_SPECTATOR_MODE())
        {
            fVar14 = (0.21550000 + l_U661) + l_U1084;
        }
        else if (GET_IS_HIDEF())
        {
            fVar14 = (0.06000000 + l_U661) + l_U1084;
        }
        else
        {
            fVar14 = (0.08000000 + l_U661) + l_U1084;
        };;;
        if (GET_IS_WIDESCREEN())
        {
            fVar15 = 0.31250000;
            fVar16 = 0.44550000;
        }
        else
        {
            fVar15 = 0.30000000;
            fVar16 = 0.44000000;
        }
        GET_GAME_TIMER( ref iVar5 );
        GET_FRAME_TIME( ref uVar10 );
        while (iVar2 != l_U577)
        {
            if (l_U104[iVar2]._fU0 == 1)
            {
                if (GET_IS_HIDEF())
                {
                    fVar13 = 0.07700000;
                }
                else
                {
                    fVar13 = 0.09700000;
                }
                iVar3 = sub_159042( (l_U104[iVar2]._fU4 - 512) - iVar5, 0, 255 );
                sub_53965( 0, -0.50000000, 1.50000000, 3, 1, 0, 0, 0, iVar3 );
                SET_TEXT_USE_UNDERSCORE( 1 );
                if (l_U104[iVar2]._fU76._fU64)
                {
                    uVar12 = sub_55436( ref l_U104[iVar2]._fU76._fU0, fVar13, fVar14, fVar15, fVar16, l_U104[iVar2]._fU76._fU68, l_U104[iVar2]._fU76._fU72, l_U104[iVar2]._fU76._fU76, iVar3, 2 );
                }
                else
                {
                    uVar12 = sub_56603( fVar13, fVar14, fVar15, fVar16, l_U104[iVar2]._fU76._fU68, l_U104[iVar2]._fU76._fU72, l_U104[iVar2]._fU76._fU76, iVar3, 2, ref l_U104[iVar2]._fU76._fU0 );
                }
                fVar13 += uVar12;
                if (l_U104[iVar2]._fU8 == -1)
                {
                    fVar13 += sub_76361( 0, -0.50000000, 1.50000000, 3, 1, fVar15, fVar16, " " );
                }
                if (l_U104[iVar2]._fU8 == -2)
                {
                    fVar13 += sub_76361( 0, -0.50000000, 1.50000000, 3, 1, fVar15, fVar16, " " );
                    sub_53965( 0, -0.50000000, 1.50000000, 3, 1, 0, 0, 0, iVar3 );
                    GET_HUD_COLOUR( 1, ref uVar6, ref uVar7, ref uVar8, ref uVar9 );
                    SET_TEXT_USE_UNDERSCORE( 1 );
                    fVar13 += sub_55436( ref l_U104[iVar2]._fU12, fVar13, fVar14, fVar15, fVar16, uVar6, uVar7, uVar8, iVar3, 2 );
                    SET_TEXT_USE_UNDERSCORE( 1 );
                    fVar13 += sub_76361( 0, -0.50000000, 1.50000000, 3, 1, fVar15, fVar16, " " );
                }
                else if ((l_U104[iVar2]._fU8 > -1) AND (l_U104[iVar2]._fU8 < 36))
                {
                    fVar13 += 0.03200000 / 2;
                    DRAW_SPRITE( l_U599[l_U104[iVar2]._fU8], fVar13, fVar14 + 0.00900000, 0.03200000, 0.03200000, 0.00000000, 255, 255, 255, iVar3 );
                    fVar13 += 0.03200000 / 2;
                }
                sub_53965( 0, -0.50000000, 1.50000000, 3, 1, 0, 0, 0, iVar3 );
                SET_TEXT_USE_UNDERSCORE( 1 );
                if (l_U104[iVar2]._fU156._fU64)
                {
                    sub_55436( ref l_U104[iVar2]._fU156._fU0, fVar13, fVar14, fVar15, fVar16, l_U104[iVar2]._fU156._fU68, l_U104[iVar2]._fU156._fU72, l_U104[iVar2]._fU156._fU76, iVar3, 2 );
                }
                else
                {
                    sub_56603( fVar13, fVar14, fVar15, fVar16, l_U104[iVar2]._fU156._fU68, l_U104[iVar2]._fU156._fU72, l_U104[iVar2]._fU156._fU76, iVar3, 2, ref l_U104[iVar2]._fU156._fU0 );
                }
                SET_TEXT_USE_UNDERSCORE( 0 );
                if (iVar3 < 255)
                {
                    iVar4++;
                }
                if (l_U104[iVar2]._fU4 <= iVar5)
                {
                    l_U661 -= -0.02600000;
                    sub_49665( ref l_U104[iVar2] );
                    sub_83453( ref l_U578, 8 );
                    iVar4--;
                }
                fVar14 -= -0.02600000;
                sub_83453( ref iVar2, 8 );
            }
            if (l_U104[iVar2]._fU0 == 0)
            {
                if ((iVar2 == l_U578) AND (iVar4 == 0))
                {
                    l_U661 = 0.00000000;
                }
                iVar2 = l_U577;
            }
        }
        l_U661 -= uVar10 * 0.08000000;
        l_U1084 = 0.00000000;
        fVar11 = -0.02600000 * (TO_FLOAT( iVar4 ));
        if (l_U661 <= fVar11)
        {
            l_U661 = fVar11;
        }
        SET_WIDESCREEN_FORMAT( 0 );
    }
    return;
}

void sub_159042(int iParam0, int iParam1, int Result)
{
    if (iParam0 > Result)
    {
        return Result;
    }
    if (iParam0 < iParam1)
    {
        return iParam1;
    }
    return iParam0;
}

int sub_160267(int iParam0)
{
    int iVar3;

    DISPLAY_CASH( 1 );
    STORE_SCORE( sub_1079(), ref iVar3 );
    if (iVar3 != iParam0)
    {
        iParam0 -= iVar3;
        ADD_SCORE( sub_1079(), iParam0 );
        return 1;
    }
    return 0;
}

int sub_160342()
{
    int iVar2;

    GET_NETWORK_TIMER( ref iVar2 );
    if (NOT sub_160359())
    {
        if (IS_BUTTON_PRESSED( 0, 9 ))
        {
            if (NOT l_U1350)
            {
                if (l_U1349 > iVar2)
                {
                    l_U1349 = iVar2 - 5000;
                }
                else
                {
                    l_U1349 = iVar2 + 5000;
                }
                l_U1350 = 1;
            }
            else if (l_U1349 > iVar2)
            {
                l_U1349 = iVar2 + 5000;
            }
        }
        else
        {
            l_U1350 = 0;
        }
        if (l_U1349 > iVar2)
        {
            SET_RADAR_ZOOM( 980 );
            return 1;
        }
    }
    SET_RADAR_ZOOM( 0 );
    return 0;
}

int sub_160359()
{
    switch (g_U482)
    {
        case 9:
        case 5:
        return 0;
        break;
    }
    return 1;
}

void sub_160599(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
{
    if (NOT (IS_FONT_LOADED( 6 )))
    {
        LOAD_TEXT_FONT( 6 );
    }
    HIDE_HELP_TEXT_THIS_FRAME();
    if (((iParam2 == 1) || (iParam2 == 3)) || (iParam2 == 5))
    {
        sub_160658( uParam1 );
    }
    sub_51115( uParam0 );
    if ((sub_7667() + sub_18752()) > 22)
    {
        if (GET_IS_HIDEF())
        {
            sub_161169( iParam2, 0.07000000, 0.06400000, 0.31300000, 0.40600000, 0.02450000, 0.28000000, 0.39070000, 0.02300000, uParam3, uParam4 );
        }
        else
        {
            sub_161169( iParam2, 0.09000000, 0.08400000, 0.30000000, 0.44000000, 0.02450000, 0.30000000, 0.44000000, 0.02300000, uParam3, uParam4 );
        }
    }
    else if (GET_IS_HIDEF())
    {
        sub_161169( iParam2, 0.07000000, 0.06400000, 0.31300000, 0.46000000, 0.02700000, 0.28000000, 0.42000000, 0.02700000, uParam3, uParam4 );
    }
    else
    {
        sub_161169( iParam2, 0.09000000, 0.08400000, 0.30000000, 0.44000000, 0.02700000, 0.30000000, 0.44000000, 0.02700000, uParam3, uParam4 );
    }
    return;
}

void sub_160658(unknown uParam0)
{
    int I;

    if (NOT l_U1083)
    {
        sub_94339();
        l_U1083 = 1;
    }
    if ((uParam0^) <= 8)
    {
        for ( I = 0; I < (uParam0^); I++ )
        {
            if (l_U1039[I] != (uParam0^)[I])
            {
                l_U1039[I] = (uParam0^)[I];
                sub_160753( I );
            }
        }
    }
    return;
}

void sub_160753(unknown uParam0)
{
    unknown uVar3;

    if (l_U1021[uParam0] > 0)
    {
        uVar3 = l_U1030[l_U1021[uParam0] - 1];
        if (l_U1039[uParam0] > l_U1039[uVar3])
        {
            l_U1030[l_U1021[uParam0] - 1] = uParam0;
            l_U1030[l_U1021[uParam0]] = uVar3;
            l_U1021[uVar3]++;
            l_U1021[uParam0]--;
            sub_160753( uParam0 );
            return;
        }
    }
    if (l_U1021[uParam0] < 7)
    {
        uVar3 = l_U1030[l_U1021[uParam0] + 1];
        if (l_U1039[uParam0] < l_U1039[uVar3])
        {
            l_U1030[l_U1021[uParam0] + 1] = uParam0;
            l_U1030[l_U1021[uParam0]] = uVar3;
            l_U1021[uVar3]--;
            l_U1021[uParam0]++;
            sub_160753( uParam0 );
            return;
        }
    }
    return;
}

void sub_161169(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, int iParam9, boolean bParam10)
{
    int I;
    int J;
    int iVar15;
    int iVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    char[32] cVar23;
    int[7] iVar31;

    SET_WIDESCREEN_FORMAT( 2 );
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            SET_TEXT_USE_UNDERSCORE( 1 );
            fVar17 = sub_76361( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, GET_PLAYER_NAME( sub_427( I ) ) );
            SET_TEXT_USE_UNDERSCORE( 0 );
            if (fVar17 > fVar18)
            {
                fVar18 = fVar17;
            }
            if ((iParam0 == 3) AND ((sub_74657( I )) > -1))
            {
                if ((l_U662[sub_7288()]._fU16 == 5) || (l_U662[sub_7288()]._fU16 == 6))
                {
                    if (sub_6720() == 1)
                    {
                        fVar17 = sub_161402( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, "CASH", l_U662[sub_7288()]._fU24[I] );
                    }
                    else
                    {
                        fVar17 = sub_161402( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, "CASH", (l_U1039[sub_74657( I )]) / (sub_66302( sub_74657( I ) )) );
                    }
                }
                else
                {
                    fVar17 = sub_161718( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, (l_U1039[sub_74657( I )]) / (sub_66302( sub_74657( I ) )) );
                }
                if (fVar17 > fVar19)
                {
                    fVar19 = fVar17;
                }
            }
            else if (iParam0 == 2)
            {
                if ((l_U662[sub_7288()]._fU16 == 5) || (l_U662[sub_7288()]._fU16 == 6))
                {
                    fVar17 = sub_161402( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, "CASH", l_U662[sub_7288()]._fU24[I] );
                }
                else
                {
                    fVar17 = sub_161718( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, l_U662[sub_7288()]._fU24[I] );
                }
                if (fVar17 > fVar19)
                {
                    fVar19 = fVar17;
                }
            }
            else if ((iParam0 == 4) || (iParam0 == 5))
            {
                fVar17 = sub_162155( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, sub_7132( I ) );
                if (fVar17 > fVar19)
                {
                    fVar19 = fVar17;
                }
            };;;
            iVar15++;
        }
    }
    if (((iParam0 == 1) || (iParam0 == 3)) || (iParam0 == 5))
    {
        for ( J = 0; J < 8; J++ )
        {
            if ((sub_53413( J )) > 0)
            {
                fVar17 = sub_162546( 6, 0.00000000, 1.00000000, 0, 0, uParam6, uParam7, sub_68214( J, 1 ) );
                if (fVar17 > fVar18)
                {
                    fVar18 = fVar17;
                }
                if (iParam0 == 3)
                {
                    if ((l_U662[sub_7288()]._fU16 == 5) || (l_U662[sub_7288()]._fU16 == 6))
                    {
                        fVar17 = sub_161402( 6, 0.00000000, 1.00000000, 0, 0, uParam6, uParam7, "CASH", l_U1039[J] );
                    }
                    else
                    {
                        fVar17 = sub_161718( 6, 0.00000000, 1.00000000, 0, 0, uParam6, uParam7, l_U1039[J] );
                    }
                    if (fVar17 > fVar19)
                    {
                        fVar19 = fVar17;
                    }
                }
                else if (iParam0 == 5)
                {
                    fVar17 = sub_162155( 6, 0.00000000, 1.00000000, 0, 0, uParam6, uParam7, sub_158161( J ) );
                    if (fVar17 > fVar19)
                    {
                        fVar19 = fVar17;
                    }
                }
                iVar16++;
            }
        }
    }
    fVar18 += fVar19 + 0.01700000;
    StrCopy( ref cVar23, "NTGT_", 32 );
    ConcatString(ref cVar23, sub_6720(), 32);
    fVar17 = sub_162546( 6, 0.00000000, 1.00000000, 0, 0, 0.31000000, 0.45500000, ref cVar23 );
    if (fVar17 > fVar18)
    {
        fVar18 = fVar17;
    }
    if (iParam9 != 2147483647)
    {
        if (bParam10)
        {
            if (sub_10749())
            {
                fVar17 = sub_161402( 6, 0.00000000, 1.00000000, 0, 0, 0.31000000, 0.45500000, "LIVES_LEFT", iParam9 );
            }
            else
            {
                fVar17 = sub_161402( 6, 0.00000000, 1.00000000, 0, 0, 0.31000000, 0.45500000, "MAX_POINTS", iParam9 );
            }
            if (fVar17 > fVar18)
            {
                fVar18 = fVar17;
            }
        }
    }
    fVar20 = (0.01000000 * 2.00000000) + fVar18;
    if (GET_IS_WIDESCREEN())
    {
        fVar22 = (((TO_FLOAT( iVar15 )) * uParam5) + ((TO_FLOAT( iVar16 )) * uParam8)) + ((TO_FLOAT( iVar16 )) * -0.00300000);
    }
    else
    {
        fVar22 = (((TO_FLOAT( iVar15 )) * uParam5) + ((TO_FLOAT( iVar16 )) * uParam8)) + ((TO_FLOAT( iVar16 )) * 0.00000000);
    }
    if ((iParam9 != 2147483647) AND (bParam10))
    {
        fVar21 = (fVar22 + 0.08200000) + (0.01200000 * 2.00000000);
    }
    else
    {
        fVar21 = (fVar22 + 0.03800000) + (0.01200000 * 2.00000000);
    }
    l_U1084 = fVar21 - -0.02600000;
    DRAW_CURVED_WINDOW( uParam1, uParam2 - 0.01200000, fVar20, fVar21, 245 );
    StrCopy( ref cVar23, "NTGT_", 32 );
    ConcatString(ref cVar23, sub_6720(), 32);
    sub_53965( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    sub_55436( ref cVar23, uParam1 + 0.01000000, uParam2 + -0.00370000, 0.31000000, 0.45500000, 255, 255, 255, 255, 2 );
    if ((N_604003528()) || (GET_IS_WIDESCREEN()))
    {
        DRAW_RECT( uParam1 + (fVar20 * 0.50000000), (uParam2 + -0.00370000) + 0.03450000, (fVar20 - 0.01000000) - 0.01000000, 0.00200000, 255, 255, 255, 255 );
    }
    else
    {
        DRAW_RECT( uParam1 + (fVar20 * 0.50000000), (uParam2 + -0.00370000) + 0.03450000, (fVar20 - 0.01000000) - 0.01000000, 0.00400000, 255, 255, 255, 255 );
    }
    if (iParam9 != 2147483647)
    {
        if (bParam10)
        {
            if ((N_604003528()) || (GET_IS_WIDESCREEN()))
            {
                DRAW_RECT( uParam1 + (fVar20 * 0.50000000), ((((uParam2 + fVar22) + -0.00370000) + 0.03450000) + -0.01900000) + 0.03820000, (fVar20 - 0.01000000) - 0.01000000, 0.00200000, 255, 255, 255, 255 );
            }
            else
            {
                DRAW_RECT( uParam1 + (fVar20 * 0.50000000), ((((uParam2 + fVar22) + -0.00370000) + 0.03450000) + -0.01900000) + 0.03820000, (fVar20 - 0.01000000) - 0.01000000, 0.00400000, 255, 255, 255, 255 );
            }
            sub_53965( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
            if (sub_10749())
            {
                sub_54262( "LIVES_LEFT", uParam1 + 0.01000000, (((((uParam2 + fVar22) + -0.00370000) + 0.03450000) + -0.01900000) + 0.03820000) + 0.00650000, 0.31000000, 0.45500000, 255, 255, 255, 255, 2, iParam9 );
            }
            else
            {
                sub_54262( "MAX_POINTS", uParam1 + 0.01000000, (((((uParam2 + fVar22) + -0.00370000) + 0.03450000) + -0.01900000) + 0.03820000) + 0.00650000, 0.31000000, 0.45500000, 255, 255, 255, 255, 2, iParam9 );
            }
        }
    }
    array(ref iVar31, 7);
    for ( I = 0; I < 7; I++ )
    {
        iVar31[I] = -1;
    }
    if ((iParam0 == 0) || (iParam0 == 1))
    {
        iVar31[0] = 0;
    }
    else
    {
        iVar31[0] = sub_7288();
        iVar31[1] = 0;
    }
    if (((iParam0 == 1) || (iParam0 == 3)) || (iParam0 == 5))
    {
        sub_71729( ref iVar31, (uParam1 + 0.01000000) + fVar19, ((uParam2 + -0.00370000) + 0.03450000) + -0.01900000, uParam6, uParam7, uParam8, uParam3, uParam4, uParam5, iParam0, 24, 0, -1 );
    }
    else
    {
        sub_77893( ref iVar31, (uParam1 + 0.01000000) + fVar19, ((uParam2 + -0.00370000) + 0.03450000) + -0.01900000, uParam3, uParam4, uParam5, iParam0, 16, 0, -1 );
    }
    return;
}

void sub_161402(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    unknown Result;

    SET_TEXT_FONT( uParam0 );
    SET_TEXT_BACKGROUND( 0 );
    SET_TEXT_DROPSHADOW( 0, 0, 0, 0, 255 );
    SET_TEXT_EDGE( 0, 0, 0, 0, 255 );
    switch (uParam3)
    {
        case 1:
        SET_TEXT_BACKGROUND( 1 );
        break;
        case 2:
        SET_TEXT_DROPSHADOW( uParam4, 0, 0, 0, 255 );
        break;
        case 3:
        SET_TEXT_EDGE( uParam4, 0, 0, 0, 255 );
        break;
    }
    SET_TEXT_PROPORTIONAL( 1 );
    SET_TEXT_WRAP( uParam1, uParam2 );
    SET_TEXT_SCALE( uParam5, uParam6 );
    Result = GET_STRING_WIDTH_WITH_NUMBER( uParam7, uParam8 );
    return Result;
}

void sub_161718(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    unknown Result;

    SET_TEXT_FONT( uParam0 );
    SET_TEXT_BACKGROUND( 0 );
    SET_TEXT_DROPSHADOW( 0, 0, 0, 0, 255 );
    SET_TEXT_EDGE( 0, 0, 0, 0, 255 );
    switch (uParam3)
    {
        case 1:
        SET_TEXT_BACKGROUND( 1 );
        break;
        case 2:
        SET_TEXT_DROPSHADOW( uParam4, 0, 0, 0, 255 );
        break;
        case 3:
        SET_TEXT_EDGE( uParam4, 0, 0, 0, 255 );
        break;
    }
    SET_TEXT_PROPORTIONAL( 1 );
    SET_TEXT_WRAP( uParam1, uParam2 );
    SET_TEXT_SCALE( uParam5, uParam6 );
    Result = GET_STRING_WIDTH_WITH_NUMBER( "NUMBER", uParam7 );
    return Result;
}

void sub_162155(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7)
{
    unknown uVar10;

    SET_TEXT_FONT( uParam0 );
    SET_TEXT_BACKGROUND( 0 );
    SET_TEXT_DROPSHADOW( 0, 0, 0, 0, 255 );
    SET_TEXT_EDGE( 0, 0, 0, 0, 255 );
    switch (uParam3)
    {
        case 1:
        SET_TEXT_BACKGROUND( 1 );
        break;
        case 2:
        SET_TEXT_DROPSHADOW( uParam4, 0, 0, 0, 255 );
        break;
        case 3:
        SET_TEXT_EDGE( uParam4, 0, 0, 0, 255 );
        break;
    }
    SET_TEXT_PROPORTIONAL( 1 );
    SET_TEXT_WRAP( uParam1, uParam2 );
    SET_TEXT_SCALE( uParam5, uParam6 );
    if (iParam7 == 1)
    {
        return GET_STRING_WIDTH( "FIRST" );
    }
    if (iParam7 == 2)
    {
        return GET_STRING_WIDTH( "SECOND" );
    }
    if (iParam7 == 3)
    {
        return GET_STRING_WIDTH( "THIRD" );
    }
    return GET_STRING_WIDTH_WITH_NUMBER( "NTH", iParam7 );
}

void sub_162546(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    unknown Result;

    SET_TEXT_FONT( uParam0 );
    SET_TEXT_BACKGROUND( 0 );
    SET_TEXT_DROPSHADOW( 0, 0, 0, 0, 255 );
    SET_TEXT_EDGE( 0, 0, 0, 0, 255 );
    switch (uParam3)
    {
        case 1:
        SET_TEXT_BACKGROUND( 1 );
        break;
        case 2:
        SET_TEXT_DROPSHADOW( uParam4, 0, 0, 0, 255 );
        break;
        case 3:
        SET_TEXT_EDGE( uParam4, 0, 0, 0, 255 );
        break;
    }
    SET_TEXT_PROPORTIONAL( 1 );
    SET_TEXT_WRAP( uParam1, uParam2 );
    SET_TEXT_SCALE( uParam5, uParam6 );
    Result = GET_STRING_WIDTH( uParam7 );
    return Result;
}

void sub_164591()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (NOT IS_PAUSE_MENU_ACTIVE())
    {
        if ((HOW_LONG_HAS_NETWORK_PLAYER_BEEN_DEAD_FOR( GET_PLAYER_ID() )) > 4000)
        {
            if (IS_SCREEN_FADED_OUT())
            {
                if (IS_CHAR_DEAD( sub_2736() ))
                {
                    if ((sub_164665()) || (NOT l_U3190))
                    {
                        if (sub_164824( ref l_U1968[GET_PLAYER_ID()]._fU0, l_U1500._fU276[GET_PLAYER_ID()], ref uVar2, ref uVar5 ))
                        {
                            sub_416( GET_PLAYER_ID(), 0 );
                            RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), uVar2, uVar5 );
                            l_U3190 = 1;
                            FORCE_LOADING_SCREEN( 1 );
                            sub_86889( uVar2 );
                            FORCE_LOADING_SCREEN( 0 );
                            sub_416( GET_PLAYER_ID(), 1 );
                            if (NOT (HAS_CHAR_GOT_WEAPON( sub_2736(), 3 )))
                            {
                                GIVE_WEAPON_TO_CHAR( sub_2736(), 3, 0, 0 );
                            }
                            if (NOT (HAS_CHAR_GOT_WEAPON( sub_2736(), 4 )))
                            {
                                GIVE_WEAPON_TO_CHAR( sub_2736(), 4, 3, 0 );
                            }
                            if (NOT (HAS_CHAR_GOT_WEAPON( sub_2736(), 12 )))
                            {
                                GIVE_WEAPON_TO_CHAR( sub_2736(), 12, 1500, 0 );
                            }
                            if (NOT (HAS_CHAR_GOT_WEAPON( sub_2736(), 14 )))
                            {
                                GIVE_WEAPON_TO_CHAR( sub_2736(), 14, 1000, 1 );
                            }
                            SET_CURRENT_CHAR_WEAPON( sub_2736(), 14, 1 );
                            if (IS_SCREEN_FADED_OUT())
                            {
                                sub_58230( 500 );
                            }
                            if (NOT (IS_PLAYER_CONTROL_ON( sub_1079() )))
                            {
                                sub_416( GET_PLAYER_ID(), 1 );
                            }
                            sub_165233();
                        }
                    }
                    else
                    {
                        sub_165450();
                        l_U3209 = 11;
                    }
                }
            }
            else if (IS_SCREEN_FADED_IN())
            {
                sub_52185( 500 );
            }
        }
    }
    return;
}

int sub_164665()
{
    switch (l_U1500._fU352[2])
    {
        case 0:
        case 1:
        case 2:
        if (l_U3190)
        {
            if (l_U3233 > 1)
            {
                l_U3233--;
                l_U3190 = 0;
                return 1;
            }
        }
        break;
    }
    return 0;
}

int sub_164824(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3)
{
    LOAD_ALL_PATH_NODES( 1 );
    if ((uParam0^) == 0)
    {
        if (iParam1 > 0)
        {
            if (LOAD_ALL_PATH_NODES( 1 ))
            {
                if (l_U1419)
                {
                    GET_SPAWN_COORDINATES_FOR_CAR_NODE( iParam1, sub_11241( -1, 0 ), uParam2, uParam3 );
                }
                else
                {
                    GET_COORDINATES_FOR_NETWORK_RESTART_NODE( iParam1, uParam2, uParam3 );
                }
                (uParam0^) = 1;
                return 1;
            }
        }
    }
    else
    {
        (uParam0^) = 0;
    }
    return 0;
}

void sub_165233()
{
    if (l_U3233 == 4)
    {
        CLEAR_PRINTS();
        PRINT_NOW( "COOP_LIVES_4", 5000, 1 );
    }
    else if (l_U3233 == 3)
    {
        CLEAR_PRINTS();
        PRINT_NOW( "COOP_LIVES_3", 5000, 1 );
    }
    else if (l_U3233 == 2)
    {
        CLEAR_PRINTS();
        PRINT_NOW( "COOP_LIVES_2", 5000, 1 );
    }
    else if (l_U3233 == 1)
    {
        CLEAR_PRINTS();
        PRINT_NOW( "COOP_LIVES_1", 5000, 1 );
    };;;;
    return;
}

void sub_165450()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT (IS_CHAR_DEAD( sub_2736() )))
    {
        ;
    }
    else
    {
        N_312012851( sub_2736(), ref l_U3475._fU0, ref l_U3475._fU4, ref l_U3475._fU8 );
        GET_CLOSEST_CAR_NODE( l_U3475._fU0, l_U3475._fU4, l_U3475._fU8, ref l_U3478._fU0, ref l_U3478._fU4, ref l_U3478._fU8 );
        REQUEST_COLLISION_AT_POSN( l_U3478._fU0, l_U3478._fU4, l_U3478._fU8 );
        RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), l_U3478, 0.00000000 );
    }
    sub_49625();
    l_U1968[GET_PLAYER_ID()]._fU8 = -5;
    l_U1968[GET_PLAYER_ID()]._fU0 = 1;
    l_U1968[GET_PLAYER_ID()]._fU28 = 5;
    l_U1968[GET_PLAYER_ID()]._fU152 = 1;
    l_U3205 = 1;
    if (IS_SCREEN_FADED_OUT())
    {
        if (NOT IS_SCREEN_FADING_IN())
        {
            sub_58230( 500 );
        }
    }
    l_U3209 = 11;
    return;
}
