void main()
{
    int I;
    int iVar3;
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
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    boolean bVar18;

    l_U0 = -1;
    l_U1 = 225;
    l_U563 = 0.00000000;
    l_U887 = -1;
    l_U1158 = -1;
    l_U1182 = 16;
    l_U1183 = 10000;
    l_U1184 = 255;
    l_U1185 = 1;
    l_U1207 = 0;
    l_U1208 = 0;
    l_U1209 = 0;
    l_U1210 = 1;
    l_U1211 = 0;
    l_U1212 = 0;
    l_U1213 = 0;
    l_U1214 = 0;
    l_U1215 = 0;
    l_U1216 = 0;
    l_U1217 = 0;
    l_U1218 = 0;
    l_U1219 = 0;
    l_U1220 = -1;
    l_U1221 = -1;
    l_U1222 = 18;
    l_U1229 = 0.15800000;
    l_U1230 = -0.02400000;
    l_U1231 = 0.01000000;
    l_U1232 = 0.12600000;
    l_U1246 = -1;
    l_U1273 = 120.00000000;
    l_U1362 = 0;
    l_U1364 = 0;
    l_U1368 = {0.00000000, 0.00000000, 0.00000000};
    l_U1371 = 2.50000000;
    l_U1372 = 0;
    l_U1373 = 0;
    l_U1374 = 0;
    l_U1375 = 0;
    l_U1376 = 0;
    l_U1377 = 0;
    l_U1378 = 0;
    l_U1379 = 0;
    l_U1382 = -1;
    l_U1384 = 0;
    l_U1387 = 0;
    l_U1393 = {1313.00000000, 70.00000000, 42.00000000};
    l_U1396 = {882.00000000, -29.00000000, 29.00000000};
    l_U1399 = {865.70000000, -517.80000000, 16.50000000};
    l_U1402 = {-28.00000000, -463.00000000, 16.00000000};
    l_U1405 = {-1247.00000000, 1540.00000000, 26.00000000};
    l_U1408 = {-160.00000000, 591.00000000, 119.00000000};
    l_U1411 = {79, 64857, 15};
    l_U1414 = {561.97610000, 1391.62600000, 30.85500000};
    l_U1417 = {943.00000000, -493.00000000, 16.00000000};
    l_U1420 = {1367, 192, 28};
    l_U1423 = {-97.00000000, 878.00000000, 15.00000000};
    l_U1426 = {-962.00000000, 893.00000000, 14.00000000};
    l_U1429 = {597.00000000, 1400.00000000, 12.00000000};
    l_U1432 = {-126.00000000, 1500.00000000, 23.00000000};
    l_U1435 = {1283, 400, 23};
    l_U1438 = {-1141.60400000, -374.96160000, 4.08170000};
    l_U1470 = 0;
    l_U1471 = 999999.90000000;
    l_U1472 = 0.00000000;
    l_U1473 = 0.26000000;
    l_U1474 = 0.65000000;
    l_U1476 = 5000.00000000;
    l_U1477 = 5000.00000000;
    l_U1479 = 0.00000000;
    l_U1481 = 0;
    l_U1492 = "amb@smoking_spliff";
    l_U1493 = "create_spliff";
    l_U1494 = "partial_smoke";
    l_U1495 = "partial_smoke_car";
    l_U1496 = {0.13700000, 0.03100000, 0.03500000};
    l_U1499 = {2.21400000, -0.12100000, 0.00000000};
    l_U1502 = {0.00000000, 0.00000000, 0.13600000};
    l_U1505 = {0.00000000, 0.00000000, 0.00000000};
    l_U1508 = {-0.48300000, -0.28500000, 0.62000000};
    l_U1511 = {-0.48300000, -1.30000000, 0.62000000};
    l_U1514 = {0.00000000, 0.00000000, 90.00000000};
    l_U1517 = {0.00000000, -0.28500000, 0.50000000};
    l_U1520 = {0.00000000, 0.00000000, 0.00000000};
    l_U2320 = 250.00000000;
    l_U2321 = 800.00000000;
    l_U2322 = 0;
    l_U2323 = 0;
    l_U2451 = 0;
    l_U2452 = 0;
    l_U2453 = 0;
    l_U2494 = 0;
    SET_MISSION_FLAG( 1 );
    REGISTER_HOST_BROADCAST_VARIABLES( ref l_U1829, 354, -1 );
    REGISTER_CLIENT_BROADCAST_VARIABLES( ref l_U1588, 241, -1 );
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        while (true)
        {
            SET_THIS_MACHINE_RUNNING_SERVER_SCRIPT( 0 );
            WAIT( 0 );
        }
    }
    SWITCH_ROADS_OFF( 23.39120000, -150.79680000, -100.00000000, 78.72040000, -157.52900000, 100.00000000 );
    ALLOW_EMERGENCY_SERVICES( 0 );
    LOAD_ALL_PATH_NODES( 1 );
    sub_1232();
    sub_1467( 0, 1, "_AUTOAIM", 2, 0 );
    sub_1467( 1, 6, "FRIENDLY_FIRE", 2, 0 );
    sub_1467( 2, 1, "VI_GAMETYPE", 2, 0 );
    sub_1467( 3, 12, "TEAM", 2, 0 );
    sub_1467( 9, 1, "VOICE_OPT", 4, 0 );
    sub_1467( 4, 1, "CS_WEAPONS", 12, 0 );
    sub_1467( 5, 1, "TRAFFIC", 4, 0 );
    sub_1467( 6, 1, "PEDESTRIANS", 4, 0 );
    if (N_604003528())
    {
        sub_1467( 7, 6, "NAME_OPT", 2, 0 );
    }
    else
    {
        sub_1467( 7, 6, "NAME_OPT_PS3", 2, 0 );
    }
    sub_1467( 10, 1, "SPAWN_TIME", 7, 0 );
    sub_1467( 11, 1, "TIME_OF_DAY", 5, 0 );
    sub_1467( 12, 1, "WEATHER", 6, 0 );
    sub_1467( 13, 16, "DESCRIPTION", 2, 0 );
    sub_1467( 14, 15, "RADIO_OPT", 19, 0 );
    if (NOT NETWORK_IS_TVT())
    {
        sub_1467( 15, 17, "KICK_PLAYER", 16, GET_PLAYER_ID() );
    }
    sub_1467( 8, 6, "RETICULE_OPT", 2, 0 );
    sub_1938( 1, -1, 0, -1 );
    sub_1990( 1 );
    sub_2024();
    l_U1588[GET_PLAYER_ID()]._fU48 = -1;
    l_U1588[GET_PLAYER_ID()]._fU52 = -1;
    sub_2095();
    if (sub_2128())
    {
        l_U1829._fU528[0] = sub_2185( 419, NETWORK_GET_GAME_MODE() );
        l_U1829._fU528[1] = sub_2185( 422, NETWORK_GET_GAME_MODE() );
        l_U1829._fU528[2] = sub_2326( 36, 1 );
        l_U1829._fU528[9] = sub_2326( 6, 3 );
        l_U1829._fU528[7] = sub_2326( 3, 1 );
        l_U1829._fU528[5] = sub_2326( 1, 2 );
        l_U1829._fU528[6] = sub_2326( 2, 1 );
        l_U1829._fU528[10] = sub_2326( 8, 1 );
        l_U1829._fU528[8] = sub_2326( 4, 1 );
        l_U1829._fU528[4] = sub_2326( 14, 0 );
        l_U1829._fU528[11] = sub_2326( 9, 0 );
        l_U1829._fU528[12] = sub_2326( 10, 0 );
        l_U1829._fU528[13] = sub_2326( 11, 0 );
        sub_2590();
    }
    l_U1588[GET_PLAYER_ID()]._fU16 = 1;
    while (NOT sub_2632())
    {
        WAIT( 0 );
    }
    SUPPRESS_CAR_MODEL( -1660661558 );
    sub_2863( 0 );
    SET_GLOBAL_INSTANCE_PRIORITY( 1 );
    sub_2901();
    for ( I = 0; I <= 15; I++ )
    {
        l_U1829._fU1092[I] = -1;
    }
    while (true)
    {
        if (LOCAL_PLAYER_IS_READY_TO_START_PLAYING())
        {
            LAUNCH_LOCAL_PLAYER_IN_NETWORK_GAME();
        }
        uVar7 = sub_3405( 0 );
        uVar8 = sub_3405( 1 );
        l_U2292 = l_U1829._fU0;
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            uVar10 = l_U1588[GET_PLAYER_ID()]._fU12;
        }
        for ( I = 0; I <= 15; I++ )
        {
            if (IS_NETWORK_PLAYER_ACTIVE( I ))
            {
                l_U2464[I] = GET_PLAYER_TEAM( sub_3442( I ) );
            }
            else
            {
                l_U2464[I] = -1;
            }
        }
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            l_U2486 = GET_PLAYER_ID() + 1;
        }
        RESERVE_NETWORK_MISSION_VEHICLES_FOR_HOST( 10 );
        WAIT( 0 );
        if (NOT IS_NETWORK_GAME_RUNNING())
        {
            if (NOT LOCAL_PLAYER_IS_READY_TO_START_PLAYING())
            {
                TERMINATE_THIS_SCRIPT();
            }
        }
        if (N_604003528())
        {
            sub_3767( l_U1829._fU4, 0, 0 );
        }
        if ((l_U1588[GET_PLAYER_ID()]._fU12 >= 1) AND (l_U1588[GET_PLAYER_ID()]._fU12 < 2))
        {
            if (l_U1829._fU1300 == 0)
            {
                if ((l_U1829._fU0 > 1) AND (l_U1829._fU0 < 8))
                {
                    l_U1588[GET_PLAYER_ID()]._fU56 = 1;
                    sub_5744();
                }
                sub_5839();
            }
        }
        sub_46023();
        if ((NOT NETWORK_END_SESSION_PENDING()) AND (IS_NETWORK_SESSION()))
        {
            GET_NETWORK_TIMER( ref l_U2206 );
        }
        if (l_U2318)
        {
            if (IS_THIS_MACHINE_THE_SERVER())
            {
                if (NOT IS_OBJECT_REASSIGNMENT_IN_PROGRESS())
                {
                    if (NOT l_U2319)
                    {
                        if (NETWORK_IS_SESSION_STARTED())
                        {
                            NETWORK_END_SESSION();
                            l_U2319 = 1;
                        }
                        else
                        {
                            l_U2319 = 1;
                        }
                    }
                    else if (NOT NETWORK_IS_OPERATION_PENDING())
                    {
                        UNPAUSE_GAME();
                        if (NOT IS_SCREEN_FADED_OUT())
                        {
                            PRINTSTRING( "CALLING THIS FADE TOO OFTEN bForceEndSession\n" );
                            sub_8397( 0 );
                        }
                        if (NOT sub_6398())
                        {
                            sub_32575( 10 );
                        }
                        else
                        {
                            sub_20798();
                        }
                    }
                }
            }
        }
        if ((l_U1829._fU1400) AND (NOT l_U2318))
        {
            if (l_U1829._fU1300 > 0)
            {
                l_U2483 = 0;
                REMOVE_ALL_PICKUPS_OF_TYPE( 23 );
                sub_48582();
                if (sub_72160( l_U1829._fU524 ))
                {
                    if (HAS_CONTROL_OF_NETWORK_ID( l_U1829._fU524 ))
                    {
                        FREEZE_CAR_POSITION( sub_72195( l_U1829._fU524 ), 1 );
                    }
                }
            }
            else
            {
                sub_28479( GET_PLAYER_ID(), 0 );
                l_U2318 = 1;
            }
        }
        else
        {
            sub_72342();
        }
        for ( I = 0; I <= 15; I++ )
        {
            if (NOT l_U1588[I]._fU36)
            {
                sub_111666( I, 1 );
            }
            else
            {
                sub_111666( I, 0 );
            }
        }
        if ((IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() )) || (((LOCAL_PLAYER_IS_READY_TO_START_PLAYING()) AND (NOT l_U2318)) AND (NOT l_U1829._fU1400)))
        {
            switch (l_U1588[GET_PLAYER_ID()]._fU12)
            {
                case 0:
                l_U2453 = 0;
                if ((NETWORK_IS_SESSION_STARTED()) AND (NOT l_U1588[GET_PLAYER_ID()]._fU36))
                {
                    if (IS_SCREEN_FADED_OUT())
                    {
                        if (NOT l_U2490)
                        {
                            sub_28479( GET_PLAYER_ID(), 0 );
                            BEGIN_CAM_COMMANDS( ref l_U2185 );
                            CREATE_CAM( 14, ref l_U2489 );
                            SET_CAM_POS( l_U2489, -760.36590000, -712.69780000, 9.96416100 );
                            SET_CAM_ROT( l_U2489, 11.91353000, -0.00000000, -43.26020000 );
                            SET_CAM_ACTIVE( l_U2489, 1 );
                            SET_CAM_PROPAGATE( l_U2489, 1 );
                            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                            END_CAM_COMMANDS( ref l_U2185 );
                            ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 0 );
                            SET_CHAR_COORDINATES( sub_5422(), -760.36590000, -712.69780000, 9.96416100 );
                            ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
                            SET_CHAR_HEADING( sub_5422(), 12.00000000 );
                            l_U1588[GET_PLAYER_ID()]._fU20 = -5;
                            sub_112114();
                            sub_113388( -760.36590000, -712.69780000, 9.96416100, 1 );
                            l_U2490 = 1;
                        }
                        else if ((l_U1829._fU1300 > 0) AND (NOT (l_U1207 == 1)))
                        {
                            DO_SCREEN_FADE_IN( 500 );
                        }
                        l_U967[GET_PLAYER_ID()] = 1;
                        sub_112114();
                        sub_49986( 0 );;
                    }
                    else if (LOCAL_PLAYER_IS_READY_TO_START_PLAYING())
                    {
                        LAUNCH_LOCAL_PLAYER_IN_NETWORK_GAME();
                    }
                    if (l_U1829._fU0 != 8)
                    {
                        if (l_U2494)
                        {
                            l_U2494 = 0;
                        }
                        sub_113720( GET_PLAYER_ID(), 1 );
                        l_U967[GET_PLAYER_ID()] = 1;
                        sub_112114();
                        sub_49986( 0 );
                        for ( I = 0; I <= 15; I++ )
                        {
                            if (IS_NETWORK_PLAYER_ACTIVE( I ))
                            {
                                if (l_U1588[I]._fU36)
                                {
                                    if ((l_U1829._fU8[I]._fU20 > 0) || (IS_CHAR_INJURED( sub_28507( I ) )))
                                    {
                                        sub_113720( I, 1 );
                                    }
                                    else
                                    {
                                        sub_113720( I, 0 );
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        sub_50799( 0, 1 );
                        if (NOT l_U2494)
                        {
                            if (l_U967[GET_PLAYER_ID()])
                            {
                                sub_28479( GET_PLAYER_ID(), 1 );
                                sub_113941();
                                l_U2494 = 1;
                                sub_28479( GET_PLAYER_ID(), 0 );
                            }
                        }
                        else
                        {
                            sub_50799( 0, 1 );
                            sub_112114();
                            sub_49986( 0 );
                        }
                    }
                    sub_114014( 0 );
                    sub_111666( GET_PLAYER_ID(), 1 );
                    if (l_U1829._fU1300 == l_U1829._fU1264)
                    {
                        if ((l_U1829._fU0 == 8) AND (l_U1829._fU1380))
                        {
                            sub_113720( GET_PLAYER_ID(), 0 );
                            BEGIN_CAM_COMMANDS( ref l_U2185 );
                            sub_116255( ref l_U2489 );
                            END_CAM_COMMANDS( ref l_U2185 );
                            sub_1990( 1 );
                            l_U1588[GET_PLAYER_ID()]._fU48 = -1;
                            SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
                            SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
                            sub_116393( ref l_U1829._fU528 );
                            l_U1588[GET_PLAYER_ID()]._fU20 = -5;
                            SET_CHAR_VISIBLE( sub_5422(), 0 );
                            l_U1588[GET_PLAYER_ID()]._fU8 = 0;
                            l_U1588[GET_PLAYER_ID()]._fU28 = 0;
                            l_U2490 = 0;
                            for ( I = 0; I <= 15; I++ )
                            {
                                l_U2295[I] = 0;
                            }
                            if (l_U1829._fU1300 == l_U1829._fU1264)
                            {
                                sub_117375();
                            }
                            else
                            {
                                sub_117635();
                            }
                        }
                    }
                    if (sub_117871() == 0)
                    {
                        l_U2318 = 1;
                    }
                }
                else
                {
                    l_U1588[GET_PLAYER_ID()]._fU36 = 1;
                    l_U1588[GET_PLAYER_ID()]._fU4 = 0;
                    DISABLE_PAUSE_MENU( 0 );
                    if ((l_U1829._fU1300 == 0) || (l_U1829._fU1300 == l_U1829._fU1264))
                    {
                        if (LOCAL_PLAYER_IS_READY_TO_START_PLAYING())
                        {
                            LAUNCH_LOCAL_PLAYER_IN_NETWORK_GAME();
                        }
                        CLEAR_THIS_PRINT_BIG_NOW( 1 );
                        sub_2863( 0 );
                        l_U1588[GET_PLAYER_ID()]._fU40 = 1;
                        l_U1588[GET_PLAYER_ID()]._fU12 = 1;
                    }
                    else if (l_U1829._fU1300 < l_U1829._fU1264)
                    {
                        if (l_U1829._fU0 != 1)
                        {
                            l_U1588[GET_PLAYER_ID()]._fU12 = 1;
                        }
                        else
                        {
                            sub_71590();
                        }
                    }
                }
                break;
                case 1:
                sub_114014( 1 );
                sub_118200( 1 );
                if ((l_U1829._fU0 == 5) AND (l_U1588[GET_PLAYER_ID()]._fU40))
                {
                    if ((l_U1829._fU1300 == 0) || (l_U1829._fU1300 == l_U1829._fU1264))
                    {
                        ;
                    }
                    else if (l_U1829._fU1300 < l_U1829._fU1264)
                    {
                        sub_118322();
                    }
                    l_U1588[GET_PLAYER_ID()]._fU12 = 3;
                    OVERRIDE_NUMBER_OF_PARKED_CARS( 0 );
                }
                else
                {
                    l_U1588[GET_PLAYER_ID()]._fU36 = 1;
                    sub_118550();
                    if ((l_U1829._fU0 == 1) || (l_U1829._fU0 == 8))
                    {
                        if ((l_U1829._fU1300 == 0) || (l_U1829._fU1300 == l_U1829._fU1264))
                        {
                            if (l_U1829._fU1300 == 0)
                            {
                                sub_5839();
                                sub_118665( 0, l_U1829._fU528[0] == 1, 0, 0 );
                                if (l_U1829._fU528[2] == 1)
                                {
                                    sub_1467( 10, 1, "SPAWN_TIME", 7, 0 );
                                }
                                else
                                {
                                    sub_1467( 10, 1, "SPAWN_TIME", 0, 0 );
                                }
                            }
                            if ((l_U1829._fU1300 == l_U1829._fU1264) AND (l_U1829._fU1300 != 0))
                            {
                                sub_5839();
                            }
                            if (l_U1829._fU528[2] == 1)
                            {
                                sub_118811( 0 );
                            }
                            else
                            {
                                sub_118811( 1 );
                            }
                        }
                        else if (l_U1829._fU1300 < l_U1829._fU1264)
                        {
                            sub_71590();
                        }
                    }
                    else if ((l_U1829._fU1300 == 0) || (l_U1829._fU1300 == l_U1829._fU1264))
                    {
                        if (l_U1829._fU1300 == 0)
                        {
                            if (l_U1829._fU0 <= 1)
                            {
                                sub_5839();
                            }
                        }
                        else if (l_U1829._fU1300 == l_U1829._fU1264)
                        {
                            sub_71590();
                        }
                    }
                    else if (l_U1829._fU1300 < l_U1829._fU1264)
                    {
                        sub_71590();
                        if (NOT l_U1588[GET_PLAYER_ID()]._fU40)
                        {
                            if ((GET_PLAYER_TEAM( sub_3442( GET_PLAYER_ID() ) )) == 0)
                            {
                                SET_PLAYER_TEAM( sub_3442( GET_PLAYER_ID() ), 1 );
                                l_U1588[GET_PLAYER_ID()]._fU40 = 1;
                            }
                            else
                            {
                                SET_PLAYER_TEAM( sub_3442( GET_PLAYER_ID() ), 0 );
                                l_U1588[GET_PLAYER_ID()]._fU40 = 1;
                            }
                        }
                    };;;
                }
                break;
                case 3:
                if (l_U1829._fU0 < 5)
                {
                    sub_119176();
                }
                if ((l_U1829._fU0 == 5) AND (NOT l_U1829._fU1404))
                {
                    if (sub_2632())
                    {
                        sub_114014( 1 );
                        sub_118200( 1 );
                        if (l_U1829._fU1300 < l_U1829._fU1264)
                        {
                            sub_118322();
                        }
                        if (l_U1829._fU528[2] == 1)
                        {
                            sub_119441();
                        }
                        else
                        {
                            sub_122310();
                        }
                    }
                }
                break;
                case 2:
                if (l_U1829._fU0 < 5)
                {
                    sub_119176();
                }
                sub_118200( 1 );
                if (l_U2484)
                {
                    if (sub_122728())
                    {
                        if (NOT l_U1829._fU1400)
                        {
                            if (l_U1829._fU0 == 6)
                            {
                                bVar18 = false;
                                sub_122890();
                                l_U2485 = 0;
                                l_U2484 = 0;
                                l_U2313 = 0;
                                l_U2316 = 0;
                                SET_GAME_CAM_HEADING( 0.00000000 );
                                sub_116393( ref l_U1829._fU528 );
                                sub_167497( 1 );
                                CLEAR_NETWORK_RESTART_NODE_GROUP_LIST();
                                switch (l_U1829._fU1288)
                                {
                                    case 0:
                                    ADD_GROUP_TO_NETWORK_RESTART_NODE_GROUP_LIST( 2 );
                                    break;
                                    case 1:
                                    ADD_GROUP_TO_NETWORK_RESTART_NODE_GROUP_LIST( 1 );
                                    break;
                                    default:
                                    ADD_GROUP_TO_NETWORK_RESTART_NODE_GROUP_LIST( 3 );
                                    ADD_GROUP_TO_NETWORK_RESTART_NODE_GROUP_LIST( 4 );
                                }
                                DEACTIVATE_FRONTEND();
                                SET_FOLLOW_VEHICLE_CAM_SUBMODE( -1 );
                                l_U1588[GET_PLAYER_ID()]._fU12 = 4;
                                DO_SCREEN_FADE_IN( 500 );
                                SET_FOLLOW_VEHICLE_CAM_SUBMODE( 2 );
                                SET_FOLLOW_VEHICLE_CAM_SUBMODE( -1 );
                            }
                        }
                        OVERRIDE_NUMBER_OF_PARKED_CARS( -1 );
                    }
                    else if ((l_U1829._fU1300 == 0) || (l_U1829._fU1300 == l_U1829._fU1264))
                    {
                        sub_5744();
                        sub_5839();
                    }
                    else if (l_U1829._fU1300 < l_U1829._fU1264)
                    {
                        sub_118322();
                    };;;
                }
                else
                {
                    iVar3 = 0;
                    if ((l_U1829._fU1300 == 0) || (l_U1829._fU1300 == l_U1829._fU1264))
                    {
                        sub_5744();
                        sub_5839();
                    }
                    else if (l_U1829._fU1300 < l_U1829._fU1264)
                    {
                        sub_118322();
                    }
                    if (sub_104243())
                    {
                        SET_FOLLOW_VEHICLE_CAM_SUBMODE( 2 );
                        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                        DESTROY_ALL_CAMS();
                        DISABLE_PAUSE_MENU( 0 );
                        SET_PLAYERS_DROP_MONEY_IN_NETWORK_GAME( 1 );
                        GET_CHAR_COORDINATES( sub_5422(), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                        if (NOT l_U1829._fU1400)
                        {
                            if (l_U1829._fU1300 == 0)
                            {
                                sub_113388( uVar4, 0 );
                            }
                            else
                            {
                                sub_113388( uVar4, 0 );
                            }
                        }
                        l_U1588[GET_PLAYER_ID()]._fU4 = 1;
                        SET_GAME_CAM_HEADING( 0.00000000 );
                        sub_50788();
                        l_U2484 = 1;
                    }
                }
                break;
                case 4:
                if (l_U1829._fU0 < 6)
                {
                    sub_21481();
                }
                sub_168032();
                sub_171284();
                if (NOT bVar18)
                {
                    if (IS_CHAR_IN_ANY_CAR( sub_5422() ))
                    {
                        SET_FOLLOW_VEHICLE_CAM_SUBMODE( 2 );
                        SET_FOLLOW_VEHICLE_CAM_SUBMODE( -1 );
                        bVar18 = true;
                    }
                }
                for ( I = 0; I <= 15; I++ )
                {
                    if (l_U1829._fU0 == 6)
                    {
                        if (l_U2295[I] != l_U1829._fU1024[I])
                        {
                            if (I == GET_PLAYER_ID())
                            {
                                sub_172196( l_U1829._fU1024[I] - l_U2295[I] );
                            }
                        }
                        l_U2295[I] = l_U1829._fU1024[I];
                    }
                }
                if (l_U1588[GET_PLAYER_ID()]._fU40)
                {
                    l_U1588[GET_PLAYER_ID()]._fU40 = 0;
                }
                if (l_U1829._fU528[2] == 1)
                {
                    sub_172707();
                    sub_173902();
                }
                else if (NOT (IS_CHAR_DEAD( sub_5422() )))
                {
                    sub_172707();
                    sub_173902();
                }
                sub_114014( 0 );
                sub_175567( 16, ref l_U1588[0]._fU0, ref l_U1588[1]._fU0, ref l_U1588[2]._fU0, ref l_U1588[3]._fU0, ref l_U1588[4]._fU0, ref l_U1588[5]._fU0, ref l_U1588[6]._fU0, ref l_U1588[7]._fU0, ref l_U1588[8]._fU0, ref l_U1588[9]._fU0, ref l_U1588[10]._fU0, ref l_U1588[11]._fU0, ref l_U1588[12]._fU0, ref l_U1588[13]._fU0, ref l_U1588[14]._fU0, ref l_U1588[15]._fU0 );
                if (l_U1829._fU528[2] == 1)
                {
                    if (NOT (IS_CHAR_DEAD( sub_5422() )))
                    {
                        if (l_U1829._fU0 < 8)
                        {
                            if (sub_177469())
                            {
                                sub_177730( ref l_U1829._fU956, ref l_U1829._fU1228, 3, 2147483647, 0 );
                            }
                        }
                    }
                }
                else if (l_U1829._fU0 < 8)
                {
                    if (l_U1829._fU8[GET_PLAYER_ID()]._fU20 == 0)
                    {
                        if (sub_177469())
                        {
                            sub_177730( ref l_U1829._fU956, ref l_U1829._fU1228, 3, 2147483647, 0 );
                        }
                    }
                }
                sub_181554( l_U1829._fU956[GET_PLAYER_ID()] );
                if ((GET_PLAYER_TEAM( sub_5097() )) > -1)
                {
                    SET_MULTIPLAYER_HUD_CASH( l_U1829._fU1228[GET_PLAYER_TEAM( sub_5097() )] );
                }
                else
                {
                    SET_MULTIPLAYER_HUD_CASH( -1 );
                }
                if (NOT (IS_CHAR_DEAD( sub_5422() )))
                {
                    if (sub_72160( l_U1829._fU524 ))
                    {
                        if (NOT (IS_CAR_UPSIDEDOWN( sub_72195( l_U1829._fU524 ) )))
                        {
                            if (l_U1829._fU1372)
                            {
                                if (NOT l_U2314)
                                {
                                    l_U2315 = l_U2206 + 60100;
                                    l_U2314 = 1;
                                }
                                else if (l_U1829._fU528[2] == 0)
                                {
                                    PRINT_NOW( "TMVIP_STRAND", 60000, 1 );
                                }
                                else
                                {
                                    PRINT_NOW( "TMVIP_STRANDA", 60000, 1 );
                                }
                            }
                            else if (l_U1829._fU528[2] == 0)
                            {
                                if (IS_THIS_PRINT_BEING_DISPLAYED( "TMVIP_STRAND", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                                {
                                    CLEAR_PRINTS();
                                }
                            }
                            else if (IS_THIS_PRINT_BEING_DISPLAYED( "TMVIP_STRANDA", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                            {
                                CLEAR_PRINTS();
                            };;;
                        }
                        else if (IS_THIS_PRINT_BEING_DISPLAYED( "TMVIP_STRAND", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                        {
                            CLEAR_PRINTS();
                        }
                        if (IS_THIS_PRINT_BEING_DISPLAYED( "TMVIP_STRANDA", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                        {
                            CLEAR_PRINTS();
                        }
                    }
                    else if (IS_THIS_PRINT_BEING_DISPLAYED( "TMVIP_STRAND", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                    {
                        CLEAR_PRINTS();
                    }
                    if (IS_THIS_PRINT_BEING_DISPLAYED( "TMVIP_STRANDA", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                    {
                        CLEAR_PRINTS();
                    }
                }
                if (l_U1829._fU528[2] == 1)
                {
                    sub_118200( 0 );
                    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
                    {
                        if (l_U1829._fU0 == 6)
                        {
                            if (l_U1829._fU1284 != -1)
                            {
                                if ((GET_PLAYER_TEAM( sub_5097() )) == 1)
                                {
                                    if (IS_NETWORK_PLAYER_ACTIVE( l_U1829._fU1284 ))
                                    {
                                        if (NOT (IS_CHAR_DEAD( sub_28507( l_U1829._fU1284 ) )))
                                        {
                                            uVar14 = sub_28507( l_U1829._fU1284 );
                                            sub_182354( ref uVar14 );
                                        }
                                    }
                                }
                            }
                            sub_183032();
                            sub_183302();
                            sub_184795();
                            sub_185400();
                            if (l_U1588[l_U1829._fU1284]._fU8)
                            {
                                if (sub_72160( l_U1829._fU524 ))
                                {
                                    if ((NOT (IS_CAR_UPSIDEDOWN( sub_72195( l_U1829._fU524 ) ))) || (l_U1829._fU1372))
                                    {
                                        if (GET_PLAYER_ID() != l_U1829._fU1284)
                                        {
                                            if (NOT (IS_CHAR_DEAD( sub_5422() )))
                                            {
                                                PRINT_NOW( "TMV_HELI_REACH", 7000, 1 );
                                            }
                                        }
                                    }
                                    else if (IS_THIS_PRINT_BEING_DISPLAYED( "TMV_HELI_REACH", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                                    {
                                        CLEAR_THIS_PRINT( "TMV_HELI_REACH" );
                                    }
                                }
                            }
                            else if (IS_THIS_PRINT_BEING_DISPLAYED( "TMV_HELI_REACH", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                            {
                                CLEAR_THIS_PRINT( "TMV_HELI_REACH" );
                            }
                            if (NOT (sub_72160( l_U1829._fU524 )))
                            {
                                if (NOT (IS_CHAR_DEAD( sub_5422() )))
                                {
                                    PRINT_NOW( "TMV_HELI_DES", 7000, 1 );
                                }
                            }
                            if (IS_NETWORK_PLAYER_ACTIVE( l_U1829._fU1284 ))
                            {
                                if (IS_CHAR_DEAD( sub_28507( l_U1829._fU1284 ) ))
                                {
                                    if (NOT (IS_CHAR_DEAD( sub_5422() )))
                                    {
                                        PRINT_NOW( "TM_VIP_DEAD", 3500, 1 );
                                    }
                                }
                                else
                                {
                                    GET_CHAR_COORDINATES( sub_28507( l_U1829._fU1284 ), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                                }
                            }
                            sub_186063();
                            if (l_U1829._fU1284 != -1)
                            {
                                if (IS_NETWORK_PLAYER_ACTIVE( l_U1829._fU1284 ))
                                {
                                    if (GET_PLAYER_ID() != l_U1829._fU1284)
                                    {
                                        if (l_U1829._fU0 != 8)
                                        {
                                            if ((HOW_LONG_HAS_NETWORK_PLAYER_BEEN_DEAD_FOR( GET_PLAYER_ID() )) > (sub_186557( l_U1829._fU528[10] )))
                                            {
                                                if (IS_SCREEN_FADED_IN())
                                                {
                                                    DO_SCREEN_FADE_OUT( 100 );
                                                }
                                                if (IS_SCREEN_FADED_OUT())
                                                {
                                                    sub_186724();
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        for ( I = 0; I <= 15; I++ )
                        {
                            REMOVE_BLIP( l_U2188[I] );
                        }
                    }
                    sub_187151();
                }
                else
                {
                    sub_118200( 1 );
                    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
                    {
                        if (l_U1829._fU0 == 6)
                        {
                            sub_187437();
                            sub_187554();
                            sub_187973();
                            sub_188164();
                            if ((GET_PLAYER_TEAM( sub_5097() )) == 1)
                            {
                                if (NOT (IS_CHAR_DEAD( sub_5422() )))
                                {
                                    if (NOT l_U1588[GET_PLAYER_ID()]._fU8)
                                    {
                                        if ((sub_189066() == (sub_108422( 0 ))) || (sub_189066() == 4))
                                        {
                                            if (sub_72160( l_U1829._fU524 ))
                                            {
                                                if (NOT (IS_CAR_UPSIDEDOWN( sub_72195( l_U1829._fU524 ) )))
                                                {
                                                    PRINT_NOW( "TMR_HELI_REACHF", 20000, 1 );
                                                    l_U2313 = 1;
                                                }
                                            }
                                        }
                                        else if (sub_189066() > 1)
                                        {
                                            if (sub_72160( l_U1829._fU524 ))
                                            {
                                                if (NOT (IS_CAR_UPSIDEDOWN( sub_72195( l_U1829._fU524 ) )))
                                                {
                                                    PRINT_NOW( "TMR_HELI_REACH", 20000, 1 );
                                                    l_U2313 = 1;
                                                }
                                            }
                                        }
                                        else if (sub_189066() == 1)
                                        {
                                            if (sub_72160( l_U1829._fU524 ))
                                            {
                                                if (NOT (IS_CAR_UPSIDEDOWN( sub_72195( l_U1829._fU524 ) )))
                                                {
                                                    PRINT_NOW( "TMR_HELI_REACHS", 20000, 1 );
                                                    l_U2313 = 1;
                                                }
                                            }
                                        }
                                        else if (IS_THIS_PRINT_BEING_DISPLAYED( "TMR_HELI_REACH", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                                        {
                                            CLEAR_THIS_PRINT( "TMR_HELI_REACH" );
                                        }
                                        else if (IS_THIS_PRINT_BEING_DISPLAYED( "TMR_HELI_REACHS", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                                        {
                                            CLEAR_THIS_PRINT( "TMR_HELI_REACHS" );
                                        }
                                        else if (IS_THIS_PRINT_BEING_DISPLAYED( "TMR_HELI_REACHF", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                                        {
                                            CLEAR_THIS_PRINT( "TMR_HELI_REACHF" );
                                        };;;;;;
                                    }
                                    else if (IS_THIS_PRINT_BEING_DISPLAYED( "TMR_HELI_REACH", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                                    {
                                        CLEAR_THIS_PRINT( "TMR_HELI_REACH" );
                                    }
                                    else if (IS_THIS_PRINT_BEING_DISPLAYED( "TMR_HELI_REACHS", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                                    {
                                        CLEAR_THIS_PRINT( "TMR_HELI_REACHS" );
                                    }
                                    else if (IS_THIS_PRINT_BEING_DISPLAYED( "TMR_HELI_REACHF", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                                    {
                                        CLEAR_THIS_PRINT( "TMR_HELI_REACHF" );
                                    };;;;
                                }
                            }
                            if (NOT (IS_CHAR_DEAD( sub_5422() )))
                            {
                                if (sub_73663( 0 ))
                                {
                                    PRINT_NOW( "TMVIP_TOD", 20000, 1 );
                                }
                                else if (sub_73663( 1 ))
                                {
                                    PRINT_NOW( "TMVIP_TTD", 20000, 1 );
                                }
                            }
                            if (NOT (sub_72160( l_U1829._fU524 )))
                            {
                                if ((NOT (sub_73663( 0 ))) || (NOT (sub_73663( 1 ))))
                                {
                                    if (NOT (IS_CHAR_DEAD( sub_5422() )))
                                    {
                                        PRINT_NOW( "TMV_HELI_DES", 7000, 1 );
                                    }
                                }
                                else if (IS_THIS_PRINT_BEING_DISPLAYED( "TMV_HELI_DES", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                                {
                                    CLEAR_THIS_PRINT( "TMV_HELI_DES" );
                                }
                            }
                            sub_186063();
                            if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
                            {
                                if ((l_U1829._fU8[GET_PLAYER_ID()]._fU20 > 0) || (IS_CHAR_INJURED( sub_5422() )))
                                {
                                    sub_112114();
                                    sub_49986( 0 );
                                }
                            }
                            for ( I = 0; I <= 15; I++ )
                            {
                                if (IS_NETWORK_PLAYER_ACTIVE( I ))
                                {
                                    if (l_U1588[I]._fU36)
                                    {
                                        if ((l_U1829._fU8[I]._fU20 > 0) || (IS_CHAR_INJURED( sub_28507( I ) )))
                                        {
                                            sub_113720( I, 1 );
                                        }
                                        else
                                        {
                                            sub_113720( I, 0 );
                                        }
                                    }
                                }
                            }
                        }
                        sub_187151();
                    }
                }
                break;
                case 6:
                l_U2328 = 0;
                l_U2314 = 0;
                SWITCH_OFF_WAYPOINT();
                for ( I = 0; I <= 15; I++ )
                {
                    if (DOES_BLIP_EXIST( l_U2188[I] ))
                    {
                        REMOVE_BLIP( l_U2188[I] );
                        l_U2295[I] = 0;
                    }
                }
                l_U2483 = 0;
                REMOVE_ALL_PICKUPS_OF_TYPE( 23 );
                sub_48582();
                if (sub_72160( l_U1829._fU524 ))
                {
                    if (HAS_CONTROL_OF_NETWORK_ID( l_U1829._fU524 ))
                    {
                        FREEZE_CAR_POSITION( sub_72195( l_U1829._fU524 ), 1 );
                    }
                }
                break;
            }
        }
    }
    return;
}

void sub_1232()
{
    RESERVE_NETWORK_MISSION_VEHICLES_FOR_HOST( 10 );
    sub_1261( "PLAYER", 1, 13, -1 );
    sub_1261( "KILLS", 2, 11, 3 );
    sub_1261( "DEATH", 2, 6, 4 );
    sub_1261( "TEAMKILL", 2, 29, 6 );
    sub_1261( "SCORE", 6, 16, 20 );
    return;
}

void sub_1261(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int I;

    for ( I = 0; I < 7; I++ )
    {
        if (l_U564[I]._fU16 == 0)
        {
            StrCopy( ref l_U564[I]._fU0, uParam0, 16 );
            l_U564[I]._fU16 = uParam1;
            l_U564[I]._fU20 = uParam2;
            l_U564[I]._fU92 = uParam3;
            return;
        }
    }
    return;
}

void sub_1467(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref l_U989[uParam0]._fU0, uParam2, 16 );
    l_U989[uParam0]._fU16 = uParam1;
    l_U989[uParam0]._fU24 = uParam3;
    l_U989[uParam0]._fU20 = uParam4;
    l_U989[uParam0]._fU28 = uParam4;
    return;
}

void sub_1938(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U1195 = uParam0;
    l_U1197 = uParam1;
    l_U1194 = uParam2;
    l_U1196 = uParam3;
    l_U1198 = 1;
    return;
}

void sub_1990(unknown uParam0)
{
    g_U18._fU668 = -1;
    g_U18._fU672 = uParam0;
    return;
}

void sub_2024()
{
    g_U18._fU660 = -1;
    g_U18._fU664 = 1;
    return;
}

void sub_2095()
{
    RESTORE_SCRIPT_ARRAY_FROM_SCRATCHPAD( ref l_U1526, 61, 2, 2 );
    return;
}

int sub_2128()
{
    if (IS_THIS_MACHINE_THE_SERVER())
    {
        SET_THIS_MACHINE_RUNNING_SERVER_SCRIPT( 1 );
        return 1;
    }
    return 0;
}

void sub_2185(unknown uParam0, unknown uParam1)
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

void sub_2326(unknown uParam0, unknown Result)
{
    if (IS_BIT_SET( l_U1526[uParam0], 0 ))
    {
        return GET_BITS_IN_RANGE( l_U1526[uParam0], 1, 31 );
    }
    return Result;
}

void sub_2590()
{
    SET_THIS_MACHINE_RUNNING_SERVER_SCRIPT( 0 );
    return;
}

int sub_2632()
{
    REQUEST_MISSION_AUDIO_BANK( "SCRIPT_MISSION\PM3_PROPER_BANK_JOB" );
    if ((((((((sub_2691( 869501081 )) AND (sub_2691( -1616890832 ))) AND (sub_2691( 1178487645 ))) AND (sub_2691( -19263344 ))) AND (sub_2691( -183203150 ))) AND (sub_2691( -1660661558 ))) AND (sub_2691( 400514754 ))) AND (sub_2691( 1264341792 )))
    {
        return 1;
    }
    return 0;
}

int sub_2691(unknown uParam0)
{
    REQUEST_MODEL( uParam0 );
    if (HAS_MODEL_LOADED( uParam0 ))
    {
        return 1;
    }
    return 0;
}

void sub_2863(unknown uParam0)
{
    l_U1205 = uParam0;
    l_U1204 = 1;
    return;
}

void sub_2901()
{
    CREATE_OBJECT_NO_OFFSET( 1845915705, -281.06440000, -283.70000000, 15.87640000, ref l_U1388, 0 );
    SET_OBJECT_HEADING( l_U1388, 90.00000000 );
    FREEZE_OBJECT_POSITION( l_U1388, 1 );
    CREATE_OBJECT_NO_OFFSET( -631715616, -281.06440000, -280.70640000, 15.87640000, ref l_U1389, 0 );
    SET_OBJECT_HEADING( l_U1389, 90.00000000 );
    FREEZE_OBJECT_POSITION( l_U1389, 1 );
    CREATE_OBJECT_NO_OFFSET( 639246688, 864.32000000, -121.64500000, 7.40000000, ref l_U1390, 0 );
    SET_OBJECT_HEADING( l_U1390, 90.00000000 );
    SET_OBJECT_DYNAMIC( l_U1390, 0 );
    FREEZE_OBJECT_POSITION( l_U1390, 1 );
    CREATE_OBJECT_NO_OFFSET( 1312423945, -123.72640000, 772.02260000, 35.05130000, ref l_U1391, 0 );
    SET_OBJECT_COORDINATES( l_U1391, -123.72640000, 772.02260000, 35.05130000 );
    SET_OBJECT_HEADING( l_U1391, 0.00000000 );
    SET_OBJECT_DYNAMIC( l_U1391, 0 );
    FREEZE_OBJECT_POSITION( l_U1391, 1 );
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "coop_swatasslt" )) == 0)
    {
        CREATE_OBJECT_NO_OFFSET( 223915744, 2394.49600000, 175.89900000, 5.85800000, ref l_U1392, 0 );
        SET_OBJECT_ROTATION( l_U1392, 0.00000000, 235.00000000, 240.37500000 );
        SET_OBJECT_DYNAMIC( l_U1392, 0 );
        FREEZE_OBJECT_POSITION( l_U1392, 1 );
    }
    return;
}

void sub_3405(int iParam0)
{
    int Result;
    int I;

    for ( I = 0; I <= 15; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if ((GET_PLAYER_TEAM( sub_3442( I ) )) == iParam0)
            {
                if (l_U1588[I]._fU36)
                {
                    Result++;
                }
            }
        }
    }
    return Result;
}

void sub_3442(unknown uParam0)
{
    return CONVERT_INT_TO_PLAYERINDEX( uParam0 );
}

void sub_3767(int iParam0, boolean bParam1, unknown uParam2)
{
    int iVar5;
    unknown uVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    uVar11 = sub_3776();
    if (IS_NETWORK_GAME_RUNNING())
    {
        GET_NETWORK_TIMER( ref iVar5 );
        if (NETWORK_IS_SESSION_STARTED())
        {
            if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
            {
                if (l_U1385)
                {
                    l_U1385 = 0;
                }
                switch (uVar11)
                {
                    case 1:
                    if (NOT sub_4041())
                    {
                        if (iParam0 != l_U1382)
                        {
                            sub_4110( iParam0 );
                            iParam0 = l_U1382;
                        }
                    }
                    else if (NOT l_U1384)
                    {
                        l_U1383 = iVar5 + 25000;
                        l_U1384 = 1;
                        sub_4110( iParam0 );
                    }
                    else if (l_U1383 < iVar5)
                    {
                        l_U1384 = 0;
                    };;;
                    break;
                    case 2:
                    if (NOT l_U1384)
                    {
                        l_U1383 = iVar5 + 45000;
                        l_U1384 = 1;
                        iVar7 = iParam0 - iVar5;
                        iVar7 = iVar7 / 60000;
                        if (NOT bParam1)
                        {
                            sub_4131();
                            SET_RICH_PRESENCE_TEMPLATEMP3( iVar7 + 1, sub_3785() );
                        }
                        else if (NOT sub_5017())
                        {
                            sub_4131();
                            SET_RICH_PRESENCE_TEMPLATEMP6( sub_5088(), iParam0, sub_3785() );
                        }
                        else
                        {
                            sub_4131();
                            SET_RICH_PRESENCE_TEMPLATEMP6( uParam2, iParam0, sub_3785() );
                        }
                    }
                    else if (l_U1383 < iVar5)
                    {
                        l_U1384 = 0;
                    }
                    break;
                    case 3:
                    if (l_U1382 != sub_4726())
                    {
                        sub_4131();
                        SET_RICH_PRESENCE_TEMPLATEMP5( 3, sub_4726(), sub_3785() );
                        l_U1382 = sub_4726();
                    }
                    break;
                    case 0:
                    if (NOT l_U1384)
                    {
                        l_U1383 = iVar5 + 45000;
                        l_U1384 = 1;
                        sub_4131();
                        SET_RICH_PRESENCE_TEMPLATEMP2( sub_3785() );
                    }
                    else if (l_U1383 < iVar5)
                    {
                        l_U1384 = 0;
                    }
                    break;
                }
            }
        }
        else if (NOT l_U1385)
        {
            if (NOT NETWORK_IS_SESSION_STARTED())
            {
                if (sub_3785() == 16)
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
                    {
                        GET_CHAR_COORDINATES( sub_5422(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                        if ((GET_MAP_AREA_FROM_COORDS( uVar8 )) != 5)
                        {
                            if (NOT l_U1384)
                            {
                                l_U1383 = iVar5 + 45000;
                                l_U1384 = 1;
                                sub_4131();
                                SET_RICH_PRESENCE_TEMPLATEMP2( sub_3785() );
                            }
                            else if (l_U1383 < iVar5)
                            {
                                l_U1384 = 0;
                            }
                        }
                    }
                }
                else if (sub_3785() == 8)
                {
                    SET_RICH_PRESENCE_TEMPLATEPARTY();
                    l_U1385 = 1;
                }
                else
                {
                    sub_4131();
                    SET_RICH_PRESENCE_TEMPLATELOBBY( sub_3785() );
                    l_U1384 = 0;
                    l_U1385 = 1;
                }
            }
        }
    }
    return;
}

int sub_3776()
{
    switch (sub_3785())
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

void sub_3785()
{
    if (l_U0 == -1)
    {
        l_U0 = NETWORK_GET_GAME_MODE();
    }
    return l_U0;
}

int sub_4041()
{
    int iVar2;

    iVar2 = sub_3785();
    if (((iVar2 == 7) || (iVar2 == 8)) || (iVar2 == 6))
    {
        return 1;
    }
    return 0;
}

void sub_4110(int iParam0)
{
    if (l_U1386 == 0)
    {
        sub_4131();
        SET_RICH_PRESENCE_TEMPLATEMP1( 1, sub_4156( GET_PLAYER_ID() ), sub_4726(), sub_3785() );
        l_U1386 = 1;
    }
    else if ((iParam0 > 0) AND (iParam0 < 60))
    {
        sub_4131();
        SET_RICH_PRESENCE_TEMPLATEMP4( iParam0, sub_3785() );
        l_U1386 = 0;
    }
    return;
}

void sub_4131()
{
    return;
}

void sub_4156(unknown uParam0)
{
    if (l_U862)
    {
        return l_U733[uParam0]._fU16;
    }
    return sub_4191( uParam0 );
}

int sub_4191(int iParam0)
{
    int I;
    int iVar4;
    int Result;

    if (sub_4202( iParam0 ))
    {
        for ( I = 0; I < 16; I++ )
        {
            iVar4 = l_U564[0]._fU24[I];
            if ((IS_NETWORK_PLAYER_ACTIVE( iVar4 )) AND (NOT l_U950[iVar4]))
            {
                Result++;
                if (l_U564[sub_4347()]._fU24[iVar4] == l_U564[sub_4347()]._fU24[iParam0])
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
            iVar4 = l_U564[0]._fU24[I];
            if ((IS_NETWORK_PLAYER_ACTIVE( iVar4 )) AND (NOT l_U950[iVar4]))
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

int sub_4202(int iParam0)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (I != iParam0)
        {
            if ((sub_4235( I )) AND (NOT (sub_4287( I ))))
            {
                if (l_U564[sub_4347()]._fU24[I] == l_U564[sub_4347()]._fU24[iParam0])
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_4235(unknown uParam0)
{
    if (l_U862)
    {
        return l_U733[uParam0]._fU4;
    }
    return IS_NETWORK_PLAYER_ACTIVE( uParam0 );
}

void sub_4287(unknown uParam0)
{
    if (l_U862)
    {
        return l_U733[uParam0]._fU8;
    }
    return l_U950[uParam0];
}

int sub_4347()
{
    int Result;

    for ( Result = 0; Result < 7; Result++ )
    {
        if (((l_U564[Result]._fU16 == 7) || (l_U564[Result]._fU16 == 6)) || (l_U564[Result]._fU16 == 3))
        {
            return Result;
        }
    }
    return 1;
}

void sub_4726()
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

int sub_5017()
{
    int iVar2;

    iVar2 = NETWORK_GET_GAME_MODE();
    if (((((iVar2 == 10) || (iVar2 == 12)) || (iVar2 == 1)) || (iVar2 == 3)) || (iVar2 == 4))
    {
        return 1;
    }
    return 0;
}

void sub_5088()
{
    unknown Result;

    if (IS_PLAYER_PLAYING( sub_5097() ))
    {
        STORE_SCORE( sub_5097(), ref Result );
    }
    return Result;
}

void sub_5097()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_5422()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_5744()
{
    if (l_U1829._fU1300 > 0)
    {
        PRINT_BIG( "START_ROUND", 50, 2 );
    }
    else
    {
        PRINT_BIG( "START_ROUNDA", 50, 2 );
    }
    l_U1188 = 1;
    return;
}

void sub_5839()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1588[I]._fU20;
    }
    sub_5927( 10, ref uVar3, ref l_U1829._fU528, ref l_U1829._fU1272, ref l_U1829._fU1276, l_U1829._fU1296 );
    l_U1588[GET_PLAYER_ID()]._fU20 = uVar3[GET_PLAYER_ID()];
    return;
}

void sub_5927(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
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
    if (l_U888 == -1)
    {
        STOP_STREAM();
        l_U888 = 0;
    }
    if (l_U1267)
    {
        SET_LOBBY_MUTE_OVERRIDE( 0 );
        l_U1267 = 0;
    }
    if (l_U862)
    {
        sub_6006();
        l_U1176++;
    }
    l_U865 = 0;
    l_U862 = 0;
    l_U1268 = 0;
    if (GET_HOST_ID() != -1)
    {
        if (((uParam1^)[GET_PLAYER_ID()] == -5) || (((GET_HOST_ID() != GET_PLAYER_ID()) AND ((uParam1^)[GET_HOST_ID()] < -4)) AND ((uParam1^)[GET_PLAYER_ID()] > -5)))
        {
            if ((uParam1^)[GET_PLAYER_ID()] != 3)
            {
                l_U988 = sub_6185( sub_3785() );
                (uParam1^)[GET_PLAYER_ID()] = -7;
                if (NOT sub_6398())
                {
                    if (sub_2128())
                    {
                        l_U1272 = 0;
                        if ((uParam3^) != -1)
                        {
                            if ((NOT (sub_6462( sub_6185( (uParam3^) ) ))) || (GET_NUMBER_OF_PLAYERS() <= 4))
                            {
                                l_U988 = sub_6185( (uParam3^) );
                                (uParam1^)[GET_PLAYER_ID()] = -8;
                                l_U1272 = 1;
                            }
                        }
                        sub_2590();
                    }
                }
            }
        }
    }
    if (sub_2128())
    {
        sub_6570( uParam1, uParam4 );
        sub_2590();
    }
    if (NOT (IS_FONT_LOADED( 6 )))
    {
        LOAD_TEXT_FONT( 6 );
    }
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    if (NOT l_U1192)
    {
        PAUSE_GAME();
        l_U1192 = 1;
    }
    sub_6781();
    DISABLE_PAUSE_MENU( 1 );
    HIDE_HUD_AND_RADAR_THIS_FRAME();
    if (l_U1188)
    {
        if (NOT IS_SCREEN_FADED_OUT())
        {
            sub_8397( 0 );
        }
        l_U1188 = 0;
        return;
    }
    else if (IS_SCREEN_FADED_OUT())
    {
        sub_8496( 0 );
    }
    if (NOT IS_MOBILE_PHONE_RADIO_ACTIVE())
    {
        l_U1269._fU0 = 18;
        RESTORE_SCRIPT_ARRAY_FROM_SCRATCHPAD( ref l_U1269, 1, 99, 1 );
        CLEAR_SCRIPT_ARRAY_FROM_SCRATCHPAD( 1 );
        SAVE_SCRIPT_ARRAY_IN_SCRATCHPAD( ref l_U1269, 1, 99, 1 );
        if (l_U1269._fU0 != 18)
        {
            SET_MOBILE_PHONE_RADIO_STATE( 1 );
            RETUNE_RADIO_TO_STATION_INDEX( l_U1269._fU0 );
            l_U989[sub_8651( 15 )]._fU20 = l_U1269._fU0;
        }
        else if ((l_U989[sub_8651( 15 )]._fU20) != 18)
        {
            l_U989[sub_8651( 15 )]._fU20 = 18;
        }
    }
    ENABLE_FRONTEND_RADIO();
    if (IS_GAME_IN_CONTROL_OF_MUSIC())
    {
        l_U989[sub_8651( 15 )]._fU24 = 19;
    }
    else
    {
        l_U989[sub_8651( 15 )]._fU24 = 0;
    }
    if (NOT l_U984)
    {
        sub_8835();
        l_U984 = 1;
    }
    if (iParam0 == 10)
    {
        if (NOT l_U985)
        {
            sub_8990();
            l_U985 = 1;
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
        if (l_U989[I]._fU16 == 0)
        {
            l_U989[I]._fU20 = 0;
        }
        else
        {
            J++;
            if (l_U989[I]._fU16 < 12)
            {
                l_U989[I]._fU20 = (uParam2^)[I];
            }
            else if (l_U989[I]._fU16 == 17)
            {
                if (sub_4726() < 3)
                {
                    l_U989[I]._fU24 = 0;
                    l_U989[I]._fU20 = GET_PLAYER_ID();
                }
                else if (l_U989[I]._fU24 == 0)
                {
                    l_U989[I]._fU24 = 16;
                    l_U989[I]._fU20 = GET_PLAYER_ID();
                }
            }
            if (l_U989[I]._fU20 >= l_U989[I]._fU24)
            {
                if (l_U989[I]._fU24 != 0)
                {
                    l_U989[I]._fU20 = l_U989[I]._fU28;
                }
            }
        }
    }
    if (NOT l_U1201)
    {
        if (l_U1191)
        {
            USE_MASK( 1 );
        }
    }
    if (NOT IS_PAUSE_MENU_ACTIVE())
    {
        if (iParam5 != 0)
        {
            sub_9471( iParam5, 1 );
            bVar31 = true;
        }
        else
        {
            l_U1183 = 10000;
        }
        if (NOT l_U1201)
        {
            if (((uParam1^)[GET_PLAYER_ID()] == 0) AND (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() )))
            {
                if (sub_10475())
                {
                    USE_MASK( 0 );
                    l_U1191 = 0;
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    (uParam1^)[GET_PLAYER_ID()] = -3;
                }
                else if ((sub_10676()) AND (sub_10794()))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    ACTIVATE_NETWORK_SETTINGS_MENU();
                }
                else if (sub_10976())
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    DISPLAY_FRONTEND_MAP_BLIPS( 0 );
                    ACTIVATE_FRONTEND();
                }
                else if (sub_11132())
                {
                    if (((l_U989[l_U1177]._fU16 == 17) AND (l_U1158 != l_U989[l_U1177]._fU20)) AND (l_U989[l_U1177]._fU20 != GET_PLAYER_ID()))
                    {
                        l_U1158 = l_U989[l_U1177]._fU20;
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    }
                    else
                    {
                        GET_NETWORK_TIMER( ref l_U1181 );
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
                                l_U499 = 1;
                                (uParam1^)[GET_PLAYER_ID()] = 2;
                            }
                            else
                            {
                                (uParam1^)[GET_PLAYER_ID()] = 2;
                            }
                        }
                    }
                }
                else if ((sub_11576()) AND ((NOT NETWORK_IS_TVT()) || (sub_11714())))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    if (NETWORK_IS_TVT())
                    {
                        (uParam1^)[GET_PLAYER_ID()] = -1;
                    }
                    else
                    {
                        USE_MASK( 0 );
                        l_U1191 = 0;
                        l_U988 = sub_6185( sub_3785() );
                        (uParam1^)[GET_PLAYER_ID()] = -4;
                    }
                }
                else if ((sub_11890()) AND (((NETWORK_GET_NUM_PLAYERS_MET() > 0) AND (N_604003528())) || (((NOT NETWORK_IS_TVT()) AND (NETWORK_GET_FRIEND_COUNT() > 0)) AND (NOT N_604003528()))))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1201 = 1;
                }
                else if (sub_12116())
                {
                    if (sub_12231( ref l_U1177, J, 0 ))
                    {
                        if (NOT sub_12781())
                        {
                            if ((l_U1177 == 0) || ((sub_12849()) AND (l_U1177 < 4)))
                            {
                                l_U989[sub_8651( 16 )]._fU20 = 0;
                            }
                        }
                        if (l_U1177 == (l_U1178 + 6))
                        {
                            l_U1178++;
                        }
                        else if (l_U1177 < l_U1178)
                        {
                            l_U1178 = l_U1177;
                        }
                        else if (l_U1177 > (l_U1178 + 6))
                        {
                            l_U1178 = l_U1177;
                            if (l_U1178 > (J - 6))
                            {
                                l_U1178 = J - 6;
                            }
                        };;;
                    }
                    if (l_U989[l_U1177]._fU16 == 12)
                    {
                        if (sub_13063())
                        {
                            if (sub_13359())
                            {
                                if ((GET_PLAYER_TEAM( sub_5097() )) > -1)
                                {
                                    if (sub_13270())
                                    {
                                        uVar15 = GET_PLAYER_TEAM( sub_5097() );
                                        sub_13623( ref uVar15, 8 );
                                        SET_PLAYER_TEAM( sub_5097(), uVar15 );
                                    }
                                    else if ((GET_PLAYER_TEAM( sub_5097() )) == 0)
                                    {
                                        SET_PLAYER_TEAM( sub_5097(), 1 );
                                    }
                                    else if ((GET_PLAYER_TEAM( sub_5097() )) == 1)
                                    {
                                        SET_PLAYER_TEAM( sub_5097(), 0 );
                                    };;;
                                }
                            }
                            else if (sub_13765())
                            {
                                if (sub_13270())
                                {
                                    uVar15 = GET_PLAYER_TEAM( sub_5097() );
                                    sub_14010( ref uVar15, 8 );
                                    SET_PLAYER_TEAM( sub_5097(), uVar15 );
                                }
                                else if ((GET_PLAYER_TEAM( sub_5097() )) == 0)
                                {
                                    SET_PLAYER_TEAM( sub_5097(), 1 );
                                }
                                else if ((GET_PLAYER_TEAM( sub_5097() )) == 1)
                                {
                                    SET_PLAYER_TEAM( sub_5097(), 0 );
                                };;;
                            }
                        }
                    }
                    else if (l_U989[l_U1177]._fU16 == 17)
                    {
                        if (sub_4726() < 3)
                        {
                            l_U989[l_U1177]._fU24 = 0;
                            l_U989[l_U1177]._fU20 = GET_PLAYER_ID();
                        }
                        else if (l_U989[l_U1177]._fU20 != -1)
                        {
                            if (l_U989[l_U1177]._fU20 != GET_PLAYER_ID())
                            {
                                if (NOT (IS_NETWORK_PLAYER_ACTIVE( l_U989[l_U1177]._fU20 )))
                                {
                                    l_U989[l_U1177]._fU20 = GET_PLAYER_ID();
                                }
                            }
                        }
                        if (sub_13359())
                        {
                            iVar16 = l_U989[l_U1177]._fU20;
                            sub_14010( ref iVar16, 16 );
                            while (NOT (IS_NETWORK_PLAYER_ACTIVE( iVar16 )))
                            {
                                sub_14010( ref iVar16, 16 );
                            }
                            l_U989[l_U1177]._fU20 = iVar16;
                            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
                        }
                        else if (sub_13765())
                        {
                            iVar16 = l_U989[l_U1177]._fU20;
                            sub_13623( ref iVar16, 16 );
                            while (NOT (IS_NETWORK_PLAYER_ACTIVE( iVar16 )))
                            {
                                sub_13623( ref iVar16, 16 );
                            }
                            l_U989[l_U1177]._fU20 = iVar16;
                            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
                        }
                        if (l_U989[l_U1177]._fU20 == GET_PLAYER_ID())
                        {
                            l_U1158 = GET_PLAYER_ID();
                        }
                    }
                    else if ((IS_THIS_MACHINE_THE_SERVER()) || (l_U989[l_U1177]._fU16 >= 12))
                    {
                        if (l_U989[l_U1177]._fU20 < l_U989[l_U1177]._fU24)
                        {
                            if (NOT (sub_14697( l_U1177 )))
                            {
                                if (sub_14792( ref l_U989[l_U1177]._fU20, l_U989[l_U1177]._fU24 ))
                                {
                                    if (l_U989[l_U1177]._fU16 == 15)
                                    {
                                        sub_15170( l_U989[l_U1177]._fU20 );
                                    }
                                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
                                }
                            }
                        }
                    };;;
                }
                else if (J > 6)
                {
                    sub_12231( ref l_U1178, (J - 6) + 1, 0 );
                };;;;;;;;
                if ((uParam1^)[GET_PLAYER_ID()] != -4)
                {
                    sub_15423( 0 );
                    INIT_FRONTEND_HELPER_TEXT();
                    DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
                    if (((l_U989[l_U1177]._fU16 == 17) AND (l_U1158 != l_U989[l_U1177]._fU20)) AND (l_U989[l_U1177]._fU20 != GET_PLAYER_ID()))
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
                    if (sub_10676())
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
                    if (sub_16702( l_U1177 ))
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
                sub_15423( 0 );
                INIT_FRONTEND_HELPER_TEXT();
                DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
                if (sub_10475())
                {
                    (uParam1^)[GET_PLAYER_ID()] = -3;
                }
            }
            else if ((uParam1^)[GET_PLAYER_ID()] == 2)
            {
                l_U989[sub_8651( 16 )]._fU20 = 1;
                sub_15423( 0 );
                if (NOT l_U1188)
                {
                    if (J > 6)
                    {
                        if (sub_12231( ref l_U1178, (J - 6) + 1, 0 ))
                        {
                            l_U1177 = l_U1178;
                        }
                    }
                    GET_NETWORK_TIMER( ref iVar26 );
                    if ((sub_10475()) AND (l_U1181 < (iVar26 + 500)))
                    {
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        l_U989[sub_8651( 16 )]._fU20 = 0;
                        l_U1193 = 1;
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                    else if (((sub_11890()) AND (NETWORK_GET_NUM_PLAYERS_MET() > 0)) AND (N_604003528()))
                    {
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        l_U1201 = 1;
                    }
                    else
                    {
                        sub_9507( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                        GET_FRONTEND_DESIGN_VALUE( 23, ref uVar34, ref fVar35 );
                        GET_FRONTEND_DESIGN_VALUE( 24, ref fVar36, ref fVar33 );
                        GET_HUD_COLOUR( 49, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                        if (NOT (sub_17496( ref bVar28 )))
                        {
                            if (bVar31)
                            {
                                if (NOT bVar32)
                                {
                                    if (bVar28)
                                    {
                                        sub_15865( "NEEDMORETEAMS", uVar34, fVar35, fVar36 + 0.04050000, fVar33, 255, 255, 255, 255, 2 );
                                    }
                                    else
                                    {
                                        sub_15865( "NEEDMOREPLAYERS", uVar34, fVar35, fVar36 + 0.04050000, fVar33, 255, 255, 255, 255, 2 );
                                    }
                                    bVar32 = true;
                                }
                            }
                            else if (bVar28)
                            {
                                sub_15865( "NEEDMORETEAMS", uVar34, fVar35, fVar36, fVar33, 255, 255, 255, 255, 2 );
                            }
                            else
                            {
                                sub_15865( "NEEDMOREPLAYERS", uVar34, fVar35, fVar36, fVar33, 255, 255, 255, 255, 2 );
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
                if (sub_10475())
                {
                    sub_15423( 1 );
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1193 = 1;
                    (uParam1^)[GET_PLAYER_ID()] = 0;
                }
                else if (sub_11132())
                {
                    sub_15434( 1 );
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1193 = 1;
                    (uParam1^)[GET_PLAYER_ID()] = -2;
                }
                else
                {
                    sub_12231( ref l_U988, 14, 0 );
                }
            }
            else if (((uParam1^)[GET_PLAYER_ID()] == -7) || ((uParam1^)[GET_PLAYER_ID()] == -8))
            {
                if (((l_U1271) AND (NOT NETWORK_IS_TVT())) AND (NOT sub_6398()))
                {
                    if (sub_4726() < 3)
                    {
                        l_U989[sub_8651( 17 )]._fU20 = GET_PLAYER_ID();
                        l_U1271 = 0;
                    }
                    else if ((l_U989[sub_8651( 17 )]._fU20) != -1)
                    {
                        if ((l_U989[sub_8651( 17 )]._fU20) != GET_PLAYER_ID())
                        {
                            if (NOT (IS_NETWORK_PLAYER_ACTIVE( l_U989[sub_8651( 17 )]._fU20 )))
                            {
                                l_U989[sub_8651( 17 )]._fU20 = GET_PLAYER_ID();
                            }
                        }
                    }
                    if (sub_10475())
                    {
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        l_U1271 = 0;
                    }
                    else if (sub_13359())
                    {
                        iVar16 = l_U989[sub_8651( 17 )]._fU20;
                        sub_14010( ref iVar16, 16 );
                        while (NOT (IS_NETWORK_PLAYER_ACTIVE( iVar16 )))
                        {
                            sub_14010( ref iVar16, 16 );
                        }
                        l_U989[sub_8651( 17 )]._fU20 = iVar16;
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
                    }
                    else if (sub_13765())
                    {
                        iVar16 = l_U989[sub_8651( 17 )]._fU20;
                        sub_13623( ref iVar16, 16 );
                        while (NOT (IS_NETWORK_PLAYER_ACTIVE( iVar16 )))
                        {
                            sub_13623( ref iVar16, 16 );
                        }
                        l_U989[sub_8651( 17 )]._fU20 = iVar16;
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
                    }
                    else if (sub_11132())
                    {
                        if ((l_U1158 != (l_U989[sub_8651( 17 )]._fU20)) AND ((l_U989[sub_8651( 17 )]._fU20) != GET_PLAYER_ID()))
                        {
                            l_U1158 = l_U989[sub_8651( 17 )]._fU20;
                            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        }
                    };;;;
                    if ((l_U989[sub_8651( 17 )]._fU20) == GET_PLAYER_ID())
                    {
                        l_U1158 = GET_PLAYER_ID();
                    }
                }
                else if (sub_10475())
                {
                    sub_15434( 1 );
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1193 = 1;
                    if (((IS_THIS_MACHINE_THE_SERVER()) AND ((uParam1^)[GET_PLAYER_ID()] == -8)) AND (NOT l_U1272))
                    {
                        (uParam1^)[GET_PLAYER_ID()] = -7;
                    }
                    else
                    {
                        (uParam1^)[GET_PLAYER_ID()] = -6;
                    }
                }
                else if ((((sub_10794()) AND (sub_4726() > 2)) AND (NOT NETWORK_IS_TVT())) AND (NOT sub_6398()))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1271 = 1;
                }
                else if ((IS_THIS_MACHINE_THE_SERVER()) AND (NOT sub_6398()))
                {
                    if ((uParam1^)[GET_PLAYER_ID()] == -7)
                    {
                        if (sub_11132())
                        {
                            if (NOT l_U1272)
                            {
                                if ((NOT (sub_6462( l_U988 ))) || (GET_NUMBER_OF_PLAYERS() <= 4))
                                {
                                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                                    (uParam1^)[GET_PLAYER_ID()] = -8;
                                }
                            }
                        }
                        else if (l_U1272)
                        {
                            (uParam1^)[GET_PLAYER_ID()] = -8;
                        }
                        else if (sub_19462( ref l_U988, 14 ))
                        {
                            if (GET_NUMBER_OF_PLAYERS() > 4)
                            {
                                while (sub_6462( l_U988 ))
                                {
                                    l_U988--;
                                }
                            }
                        }
                        else if (sub_19805( ref l_U988, 14 ))
                        {
                            if (GET_NUMBER_OF_PLAYERS() > 4)
                            {
                                while (sub_6462( l_U988 ))
                                {
                                    l_U988++;
                                }
                            }
                        }
                        (uParam3^) = sub_20147( l_U988 );;;
                    }
                    else if ((uParam1^)[GET_PLAYER_ID()] == -8)
                    {
                        if ((sub_6462( l_U988 )) AND (GET_NUMBER_OF_PLAYERS() > 4))
                        {
                            (uParam1^)[GET_PLAYER_ID()] = -7;
                        }
                    }
                }
                else if (sub_6398())
                {
                    if (sub_11132())
                    {
                        if (NOT NETWORK_LEAVE_GAME_PENDING())
                        {
                            sub_20460( ref uVar38, sub_20147( l_U988 ), -1 );
                            if ((NETWORK_IS_GAME_RANKED()) AND ((sub_20147( l_U988 )) != 16))
                            {
                                uVar38._fU0[1] = 1;
                            }
                            N_1187265313( ref uVar38 );
                            sub_20798();
                        }
                    }
                    else
                    {
                        sub_12231( ref l_U988, 14, 0 );
                    }
                }
                else if ((uParam3^) == -1)
                {
                    l_U988 = sub_6185( sub_3785() );
                }
                else
                {
                    l_U988 = sub_6185( (uParam3^) );
                };;;;;;
                if (GET_HOST_ID() > -1)
                {
                    if ((uParam1^)[GET_HOST_ID()] > -5)
                    {
                        sub_15434( 1 );
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                }
            }
            else if (((((uParam1^)[GET_PLAYER_ID()] == -3) || ((uParam1^)[GET_PLAYER_ID()] == -6)) || ((uParam1^)[GET_PLAYER_ID()] == -2)) || ((uParam1^)[GET_PLAYER_ID()] == -1))
            {
                if (sub_10475())
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1193 = 1;
                    if ((uParam1^)[GET_PLAYER_ID()] == -6)
                    {
                        sub_15434( 1 );
                        (uParam1^)[GET_PLAYER_ID()] = -7;
                    }
                    else if ((uParam1^)[GET_PLAYER_ID()] == -2)
                    {
                        sub_15434( 1 );
                        (uParam1^)[GET_PLAYER_ID()] = -4;
                    }
                    else
                    {
                        sub_15423( 1 );
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                }
                else if (sub_11132())
                {
                    if (NOT NETWORK_LEAVE_GAME_PENDING())
                    {
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        UNPAUSE_GAME();
                        if (NOT IS_SCREEN_FADED_OUT())
                        {
                            sub_8397( 0 );
                        }
                        if ((uParam1^)[GET_PLAYER_ID()] == -1)
                        {
                            if (NETWORK_IS_RENDEZVOUS_HOST())
                            {
                                sub_21323();
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
                                sub_20460( ref uVar38, sub_20147( l_U988 ), -1 );
                                if ((NETWORK_IS_GAME_RANKED()) AND ((sub_20147( l_U988 )) != 16))
                                {
                                    uVar38._fU0[1] = 1;
                                }
                                N_1187265313( ref uVar38 );
                                sub_20798();
                            }
                        }
                        else
                        {
                            sub_21481();
                        }
                    }
                }
                if (((((uParam1^)[GET_PLAYER_ID()] == -3) || ((uParam1^)[GET_PLAYER_ID()] == -6)) || ((uParam1^)[GET_PLAYER_ID()] == -2)) || ((uParam1^)[GET_PLAYER_ID()] == -1))
                {
                    SET_WIDESCREEN_FORMAT( 0 );
                    DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                    SET_WIDESCREEN_FORMAT( 1 );
                    sub_9507( 0, sub_15805(), sub_21626(), 0, 0, 0, 0, 0, 255 );
                    GET_FRONTEND_DESIGN_VALUE( 106, ref uVar34, ref fVar35 );
                    GET_FRONTEND_DESIGN_VALUE( 107, ref fVar36, ref fVar33 );
                    GET_HUD_COLOUR( 49, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                    if ((uParam1^)[GET_PLAYER_ID()] == -1)
                    {
                        sub_15865( "RETURNTOPARTYM", uVar34, fVar35, fVar36, fVar33, iVar17, iVar18, iVar19, 255, 1 );
                    }
                    else if ((uParam1^)[GET_PLAYER_ID()] == -2)
                    {
                        sub_15865( "CHOOSENEWGAME", uVar34, fVar35, fVar36, fVar33, iVar17, iVar18, iVar19, 255, 1 );
                    }
                    else
                    {
                        sub_15865( "WANT_TO_LEAVE", uVar34, fVar35, fVar36, fVar33, iVar17, iVar18, iVar19, 255, 1 );
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
                    if (((IS_THIS_MACHINE_THE_SERVER()) AND (l_U1178 == 0)) AND (l_U1185))
                    {
                        GET_NETWORK_TIMER( ref iVar26 );
                        if (l_U1184 < (iVar26 - 750))
                        {
                            GET_NETWORK_TIMER( ref l_U1184 );
                            sub_22140( ref l_U1186 );
                        }
                    }
                    else
                    {
                        l_U1184 = 0;
                        l_U1186 = 0;
                        l_U1185 = 0;
                    }
                    if (NOT l_U1186)
                    {
                        if (l_U1178 == 0)
                        {
                            DRAW_SPRITE( l_U501[1], fVar37, 0.79100000, 0.02100000, 0.02400000, 180.00000000, 255, 255, 255, 255 );
                        }
                        else if (l_U1178 == (J - 6))
                        {
                            DRAW_SPRITE( l_U501[1], fVar37, 0.79100000, 0.02100000, 0.02400000, 0.00000000, 255, 255, 255, 255 );
                        }
                        else
                        {
                            DRAW_SPRITE( l_U501[2], fVar37, 0.79100000, 0.02100000, 0.02400000, 0.00000000, 255, 255, 255, 255 );
                        }
                    }
                }
            }
        }
    }
    l_U1188 = 0;
    if (sub_2128())
    {
        for ( I = 0; I < 21; I++ )
        {
            if (l_U989[I]._fU16 != 0)
            {
                if (l_U989[I]._fU16 < 12)
                {
                    (uParam2^)[I] = l_U989[I]._fU20;
                }
            }
        }
        sub_2590();
    }
    if (NOT NETWORK_IS_TVT())
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (sub_13270())
            {
                if ((GET_PLAYER_TEAM( sub_5097() )) == -1)
                {
                    SET_PLAYER_TEAM( sub_5097(), sub_22576() );
                    if ((uParam1^)[GET_PLAYER_ID()] == 2)
                    {
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                }
            }
            else if (sub_13104())
            {
                if ((GET_PLAYER_TEAM( sub_5097() )) == -1)
                {
                    SET_PLAYER_TEAM( sub_5097(), sub_23116( 2 ) );
                    if ((uParam1^)[GET_PLAYER_ID()] == 2)
                    {
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                }
                else if (sub_17680() < 2)
                {
                    if ((sub_13166( GET_PLAYER_TEAM( sub_5097() ) )) > 1)
                    {
                        if (sub_23530( GET_PLAYER_ID() ))
                        {
                            SET_PLAYER_TEAM( sub_5097(), sub_23116( 2 ) );
                            if ((uParam1^)[GET_PLAYER_ID()] == 2)
                            {
                                (uParam1^)[GET_PLAYER_ID()] = 0;
                            }
                        }
                    }
                }
            }
            else if (sub_12781())
            {
                if ((GET_PLAYER_TEAM( sub_5097() )) != 0)
                {
                    SET_PLAYER_TEAM( sub_5097(), 0 );
                }
            }
            else if ((GET_PLAYER_TEAM( sub_5097() )) != -1)
            {
                SET_PLAYER_TEAM( sub_5097(), -1 );
                if ((uParam1^)[GET_PLAYER_ID()] == 2)
                {
                    (uParam1^)[GET_PLAYER_ID()] = 0;
                }
            };;;;
        }
    }
    if (((((uParam1^)[GET_PLAYER_ID()] == -3) || ((uParam1^)[GET_PLAYER_ID()] == -6)) || ((uParam1^)[GET_PLAYER_ID()] == -2)) || ((uParam1^)[GET_PLAYER_ID()] == -1))
    {
        sub_23876();
        return;
    }
    else if (IS_PAUSE_MENU_ACTIVE())
    {
        sub_15423( 1 );
        sub_23876();
        return;
    }
    else if (l_U1201)
    {
        if (N_604003528())
        {
            if (sub_24195())
            {
                l_U1201 = 0;
            }
            sub_23876();
            return;
        }
        else if (sub_25460( bVar31, bVar32 ))
        {
            l_U1201 = 0;
        }
        sub_23876();
        return;;
    }
    else if (sub_10676())
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (GET_PLAYERSETTINGS_MODEL_CHOICE() != (sub_28374( sub_5422() )))
            {
                if (sub_2691( GET_PLAYERSETTINGS_MODEL_CHOICE() ))
                {
                    CHANGE_PLAYER_MODEL( sub_5097(), GET_PLAYERSETTINGS_MODEL_CHOICE() );
                    SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE( sub_5097() );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( GET_PLAYERSETTINGS_MODEL_CHOICE() );
                    sub_28479( GET_PLAYER_ID(), 0 );
                }
            }
            else if (HAS_GAMER_CHANGED_NETWORK_MODEL_SETTINGS())
            {
                SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE( sub_5097() );
            }
        }
    };;;;
    if ((sub_6398()) || (NOT N_604003528()))
    {
        if (NOT bVar31)
        {
            if (((uParam1^)[GET_PLAYER_ID()] == 0) || ((uParam1^)[GET_PLAYER_ID()] == 2))
            {
                iVar16 = GET_LOCAL_PLAYER_MP_CASH();
                if (iVar16 > 0)
                {
                    SET_WIDESCREEN_FORMAT( 2 );
                    sub_9507( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                    GET_FRONTEND_DESIGN_VALUE( 23, ref uVar34, ref fVar35 );
                    GET_FRONTEND_DESIGN_VALUE( 24, ref fVar36, ref fVar33 );
                    GET_HUD_COLOUR( 49, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                    sub_9804( "CASH", uVar34, fVar35, fVar36, fVar33, 255, 255, 255, 255, 2, iVar16 );
                    SET_WIDESCREEN_FORMAT( 3 );
                }
            }
        }
    }
    if ((uParam1^)[GET_PLAYER_ID()] == -4)
    {
        sub_15434( 1 );
        sub_9507( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
        sub_15865( "NEWGAME", sub_15805(), 0.08500000, sub_29082( 113 ), sub_29115( 113 ), 255, 255, 255, 255, 2 );
        INIT_FRONTEND_HELPER_TEXT();
        DRAW_FRONTEND_HELPER_TEXT( "CANCEL", "INPUT_F_CANCEL", 0 );
        DRAW_FRONTEND_HELPER_TEXT( "CONFIRM", "INPUT_F_ACCEPT", 0 );
        DRAW_FRONTEND_HELPER_TEXT( "MODE", "PAD_DPAD_UPDOWN", 0 );
        sub_29274( 0 );
        SET_WIDESCREEN_FORMAT( 2 );
        if (GET_IS_WIDESCREEN())
        {
            sub_9507( 0, sub_15805(), sub_21626() * 1.20000000, 0, 0, 0, 0, 0, 255 );
        }
        else
        {
            sub_9507( 0, sub_15805(), sub_21626(), 0, 0, 0, 0, 0, 255 );
        }
        GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
        if (GET_IS_WIDESCREEN())
        {
            sub_15865( "CHOOSENEWGAME", sub_15805() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
        }
        else
        {
            sub_15865( "CHOOSENEWGAME", sub_15805() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
        }
    }
    else if (((uParam1^)[GET_PLAYER_ID()] == -7) || ((uParam1^)[GET_PLAYER_ID()] == -8))
    {
        sub_15434( 1 );
        sub_9507( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
        if (sub_6398())
        {
            sub_15865( "NEXTGAME", sub_15805(), 0.11900000, sub_29082( 113 ), sub_29115( 113 ), 255, 255, 255, 255, 2 );
        }
        else
        {
            sub_15865( "NEXTGAME", sub_15805(), 0.08500000, sub_29082( 113 ), sub_29115( 113 ), 255, 255, 255, 255, 2 );
        }
        SET_WIDESCREEN_FORMAT( 3 );
        INIT_FRONTEND_HELPER_TEXT();
        if (((l_U1271) AND (NOT NETWORK_IS_TVT())) AND (NOT sub_6398()))
        {
            if ((l_U1158 != (l_U989[sub_8651( 17 )]._fU20)) AND ((l_U989[sub_8651( 17 )]._fU20) != GET_PLAYER_ID()))
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
            DRAW_SPRITE( l_U501[0], (fVar37 + fVar33) - 0.01300000, 0.76300000 + 0.01300000, 0.01400000 * -1, 0.02000000, 0.00000000, 255, 255, 255, 255 );
            sub_15865( ref l_U989[sub_8651( 17 )]._fU0, fVar37 - fVar33, 0.76300000, 0.31500000, 0.43000000, 255, 255, 255, 255, 3 );
            sub_9507( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
            if ((((l_U989[sub_8651( 17 )]._fU20) > -1) AND ((l_U989[sub_8651( 17 )]._fU20) != GET_PLAYER_ID())) AND (IS_NETWORK_PLAYER_ACTIVE( l_U989[sub_8651( 17 )]._fU20 )))
            {
                sub_30820( sub_3442( l_U989[sub_8651( 17 )]._fU20 ), ref iVar21, ref iVar22, ref iVar23 );
                if (l_U4)
                {
                    if (N_604003528())
                    {
                        fVar36 = sub_24874( fVar37 + fVar33, 0.76300000, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, "WWWWWWWWWWWWWWW" );
                    }
                    else
                    {
                        fVar36 = sub_24874( fVar37 + fVar33, 0.76300000, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, "WWWWWWWWWWWWWWWW" );
                    }
                }
                else
                {
                    SET_TEXT_SCALE( 0.31500000, 0.43000000 );
                    SET_TEXT_USE_UNDERSCORE( 1 );
                    fVar49 = GET_STRING_WIDTH_WITH_STRING( "STRING", GET_PLAYER_NAME( sub_3442( l_U989[sub_8651( 17 )]._fU20 ) ) );
                    fVar50 = sub_21626() - (fVar37 + fVar33);
                    if (fVar49 <= fVar50)
                    {
                        fVar36 = sub_24874( fVar37 + fVar33, 0.76300000, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_3442( l_U989[sub_8651( 17 )]._fU20 ) ) );
                    }
                    else
                    {
                        fVar36 = sub_24874( fVar37 + fVar33, 0.76300000, (fVar50 * 0.31500000) / fVar49, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_3442( l_U989[sub_8651( 17 )]._fU20 ) ) );
                    }
                    SET_TEXT_USE_UNDERSCORE( 0 );
                }
            }
            else
            {
                fVar36 = sub_15865( "NONE", fVar37 + fVar33, 0.76300000, 0.31500000, 0.43000000, 255, 255, 255, 255, 2 );
            }
            DRAW_SPRITE( l_U501[0], ((fVar37 + fVar33) + 0.01300000) + fVar36, 0.76300000 + 0.01300000, 0.01400000, 0.02000000, 0.00000000, 255, 255, 255, 255 );
        }
        else if (sub_6398())
        {
            DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
            DRAW_FRONTEND_HELPER_TEXT( "CONFIRM", "INPUT_F_ACCEPT", 0 );
            sub_29274( 0 );
        }
        else if ((IS_THIS_MACHINE_THE_SERVER()) AND ((uParam1^)[GET_PLAYER_ID()] == -7))
        {
            DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
            DRAW_FRONTEND_HELPER_TEXT( "CONFIRM", "INPUT_F_ACCEPT", 0 );
            if ((sub_4726() > 2) AND (NOT NETWORK_IS_TVT()))
            {
                DRAW_FRONTEND_HELPER_TEXT( "KICK_PLAYERU", "INPUT_F_Y", 0 );
            }
            DRAW_FRONTEND_HELPER_TEXT( "MODE", "PAD_DPAD_UPDOWN", 0 );
        }
        else if ((IS_THIS_MACHINE_THE_SERVER()) AND (NOT l_U1272))
        {
            DRAW_FRONTEND_HELPER_TEXT( "CANCEL", "INPUT_F_CANCEL", 0 );
            if ((sub_4726() > 2) AND (NOT NETWORK_IS_TVT()))
            {
                DRAW_FRONTEND_HELPER_TEXT( "KICK_PLAYERU", "INPUT_F_Y", 0 );
            }
        }
        else
        {
            DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
            if ((sub_4726() > 2) AND (NOT NETWORK_IS_TVT()))
            {
                DRAW_FRONTEND_HELPER_TEXT( "KICK_PLAYERU", "INPUT_F_Y", 0 );
            }
        };;;;
        if (NOT sub_6398())
        {
            sub_29274( 1 );
        }
        SET_WIDESCREEN_FORMAT( 2 );
        if (NOT sub_6398())
        {
            if (GET_IS_WIDESCREEN())
            {
                sub_9507( 0, sub_15805(), sub_21626() * 1.20000000, 0, 0, 0, 0, 0, 255 );
                GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                sub_15865( "CHOOSNEXTGAME", sub_15805() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
            }
            else
            {
                sub_9507( 0, sub_15805(), sub_21626(), 0, 0, 0, 0, 0, 255 );
                GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                sub_15865( "CHOOSNEXTGAME", sub_15805() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
            }
        }
        if (NOT sub_6398())
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
                if (sub_6462( l_U988 ))
                {
                    if (GET_NUMBER_OF_PLAYERS() > 4)
                    {
                        (uParam1^)[GET_PLAYER_ID()] = -7;
                        bVar29 = false;
                    }
                }
                else if ((sub_20147( l_U988 )) == sub_3785())
                {
                    if ((sub_20147( l_U988 )) != 10)
                    {
                        if (l_U1176 < 10)
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
                            sub_8397( 0 );
                        }
                        sub_32575( sub_20147( l_U988 ) );
                    }
                }
            }
        }
    }
    else
    {
        SET_WIDESCREEN_FORMAT( 2 );
        StrCopy( ref cVar8, "CP_DESCRP_", 16 );
        ConcatString(ref cVar8, sub_3785(), 16);
        if (GET_IS_WIDESCREEN())
        {
            sub_9507( 0, sub_15805(), sub_21626() * 1.20000000, 0, 0, 0, 0, 0, 255 );
            GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
            sub_15865( ref cVar8, sub_15805() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
        }
        else
        {
            sub_9507( 0, sub_15805(), sub_21626(), 0, 0, 0, 0, 0, 255 );
            GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
            sub_15865( ref cVar8, sub_15805() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
        }
        SET_WIDESCREEN_FORMAT( 3 );
        if (NOT l_U1191)
        {
            if ((l_U989[sub_8651( 16 )]._fU20) == 1)
            {
                sub_32895( 0 );
            }
            else if (sub_33234( ref I ))
            {
                if (sub_33330( ref l_U989[I]._fU0, l_U989[I]._fU24 ))
                {
                    if (l_U1193)
                    {
                        l_U1193 = 0;
                    }
                    else if (GET_IS_WIDESCREEN())
                    {
                        DRAW_SPRITE( l_U541[l_U989[I]._fU20], 0.68500000, 0.38100000, 0.52800000, 0.37700000, 0.00000000, 255, 255, 255, 255 );
                    }
                    else
                    {
                        DRAW_SPRITE( l_U541[l_U989[I]._fU20], 0.70900000, 0.38100000, 0.52800000, 0.37700000, 0.00000000, 255, 255, 255, 255 );
                    }
                }
                else if (l_U1193)
                {
                    l_U1193 = 0;
                }
                else if (GET_IS_WIDESCREEN())
                {
                    DRAW_SPRITE( l_U501[35], 0.68500000, 0.38100000, 0.52800000, 0.37700000, 0.00000000, 255, 255, 255, 255 );
                }
                else
                {
                    DRAW_SPRITE( l_U501[35], 0.70900000, 0.38100000, 0.52800000, 0.37700000, 0.00000000, 255, 255, 255, 255 );
                };;;
            }
            else if (l_U1193)
            {
                l_U1193 = 0;
            }
            else if (GET_IS_WIDESCREEN())
            {
                DRAW_SPRITE( l_U501[35], 0.68500000, 0.38100000, 0.52800000, 0.37700000, 0.00000000, 255, 255, 255, 255 );
            }
            else
            {
                DRAW_SPRITE( l_U501[35], 0.70900000, 0.38100000, 0.52800000, 0.37700000, 0.00000000, 255, 255, 255, 255 );
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
            DRAW_RECT( 0.50000000, sub_29082( 0 ), 1.00000000, 0.00200000, 180, 180, 180, 255 );
        }
        else
        {
            DRAW_RECT( 0.50000000, sub_29082( 0 ), 1.00000000, 0.00400000, 180, 180, 180, 255 );
        }
        SET_WIDESCREEN_FORMAT( 3 );
        fVar35 = 0.57800000;
        iVar25 = l_U1178;
        iVar24 = 6;
        for ( I = iVar25; I <= ((iVar25 + iVar24) - 1); I++ )
        {
            if (l_U989[I]._fU16 != 0)
            {
                bVar27 = false;
                iVar17 = 255;
                iVar18 = 255;
                iVar19 = 255;
                sub_9507( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                if (sub_12116())
                {
                    fVar33 = 0.01300000;
                    if ((uParam1^)[GET_PLAYER_ID()] == 0)
                    {
                        bVar27 = sub_16702( I );
                        if (NOT (sub_14697( I )))
                        {
                            if (bVar27)
                            {
                                if (l_U1177 == I)
                                {
                                    DRAW_SPRITE( l_U501[0], (fVar37 + fVar33) - 0.01300000, fVar35 + 0.01300000, 0.01400000 * -1, 0.02000000, 0.00000000, 255, 255, 255, 255 );
                                }
                                else
                                {
                                    GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref J );
                                }
                            }
                            else if (l_U1177 != I)
                            {
                                iVar17 = 60;
                                iVar18 = 60;
                                iVar19 = 60;
                            }
                        }
                        else if (l_U1177 != I)
                        {
                            iVar17 = 60;
                            iVar18 = 60;
                            iVar19 = 60;
                        }
                    }
                    sub_15865( ref l_U989[I]._fU0, fVar37 - fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 3 );
                }
                else
                {
                    fVar33 = 0.00800000;
                    sub_15865( ref l_U989[I]._fU0, fVar37 - fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 3 );
                }
                sub_9507( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                switch (l_U989[I]._fU16)
                {
                    case 1:
                    case 8:
                    if ((bVar27) || (l_U989[I]._fU24 > 0))
                    {
                        cVar8 = {l_U989[I]._fU0};
                        ConcatString(ref cVar8, l_U989[I]._fU20, 16);
                        fVar36 = sub_15865( ref cVar8, fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    else
                    {
                        fVar36 = sub_15865( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 2:
                    if (l_U989[I]._fU20 < 2147483647)
                    {
                        fVar36 = sub_35250( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, l_U989[I]._fU20, 1065353216 );
                    }
                    else
                    {
                        fVar36 = sub_24874( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, "-" );
                    }
                    break;
                    case 3:
                    fVar36 = sub_10129( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, l_U989[I]._fU20 );
                    break;
                    case 11:
                    if ((bVar27) || (l_U989[I]._fU24 > 0))
                    {
                        if (l_U989[I]._fU20 == 0)
                        {
                            fVar36 = sub_15865( "RANDOM", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                        else
                        {
                            fVar36 = sub_10129( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, l_U989[I]._fU20 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_15865( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 13:
                    if ((bVar27) || (l_U989[I]._fU24 > 0))
                    {
                        ;
                    }
                    else
                    {
                        fVar36 = sub_15865( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 4:
                    case 14:
                    if ((bVar27) || (l_U989[I]._fU24 > 0))
                    {
                        fVar36 = sub_37281( "NUM_OUTOF_NUM", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, l_U989[I]._fU20 + 1, l_U989[I]._fU24 );
                    }
                    else
                    {
                        fVar36 = sub_15865( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 15:
                    if (l_U989[I]._fU20 > -1)
                    {
                        cVar8 = {l_U989[I]._fU0};
                        ConcatString(ref cVar8, l_U989[I]._fU20, 16);
                        fVar36 = sub_15865( ref cVar8, fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    else
                    {
                        fVar36 = sub_15865( "OFF", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 5:
                    case 7:
                    if ((bVar27) || (l_U989[I]._fU24 > 0))
                    {
                        if (l_U989[I]._fU20 > 0)
                        {
                            fVar36 = sub_15865( "YES", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                        else
                        {
                            fVar36 = sub_15865( "NO", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_15865( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 6:
                    case 16:
                    if ((bVar27) || (l_U989[I]._fU24 > 0))
                    {
                        if (l_U989[I]._fU20 > 0)
                        {
                            fVar36 = sub_15865( "ON", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                        else
                        {
                            fVar36 = sub_15865( "OFF", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_15865( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 9:
                    case 10:
                    if (sub_38098())
                    {
                        if (l_U989[I]._fU20 > 0)
                        {
                            fVar36 = sub_15865( "ON", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                        else
                        {
                            fVar36 = sub_15865( "OFF", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_15865( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 12:
                    if ((bVar27) || (l_U989[I]._fU24 > 0))
                    {
                        fVar36 = sub_10129( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, sub_38429() );
                    }
                    else if ((GET_PLAYER_TEAM( sub_5097() )) == -1)
                    {
                        fVar36 = sub_15865( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    else
                    {
                        fVar36 = sub_10129( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, sub_38429() );
                    }
                    break;
                    case 17:
                    if ((bVar27) || (l_U989[I]._fU24 > 0))
                    {
                        if (((l_U989[I]._fU20 > -1) AND (l_U989[I]._fU20 != GET_PLAYER_ID())) AND (IS_NETWORK_PLAYER_ACTIVE( l_U989[I]._fU20 )))
                        {
                            if (l_U1177 == I)
                            {
                                sub_30820( sub_3442( l_U989[I]._fU20 ), ref iVar21, ref iVar22, ref iVar23 );
                            }
                            else
                            {
                                iVar21 = iVar17;
                                iVar22 = iVar18;
                                iVar23 = iVar19;
                            }
                            if (l_U4)
                            {
                                if (N_604003528())
                                {
                                    fVar36 = sub_24874( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, "WWWWWWWWWWWWWWW" );
                                }
                                else
                                {
                                    fVar36 = sub_24874( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, "WWWWWWWWWWWWWWWW" );
                                }
                            }
                            else
                            {
                                SET_TEXT_SCALE( 0.31500000, 0.43000000 );
                                SET_TEXT_USE_UNDERSCORE( 1 );
                                fVar49 = GET_STRING_WIDTH_WITH_STRING( "STRING", GET_PLAYER_NAME( sub_3442( l_U989[I]._fU20 ) ) );
                                if (GET_IS_WIDESCREEN())
                                {
                                    if (fVar49 <= 0.20300000)
                                    {
                                        fVar36 = sub_24874( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_3442( l_U989[I]._fU20 ) ) );
                                    }
                                    else
                                    {
                                        fVar36 = sub_24874( fVar37 + fVar33, fVar35, 0.06394500 / fVar49, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_3442( l_U989[I]._fU20 ) ) );
                                    }
                                }
                                else if (fVar49 <= 0.18900000)
                                {
                                    fVar36 = sub_24874( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_3442( l_U989[I]._fU20 ) ) );
                                }
                                else
                                {
                                    fVar36 = sub_24874( fVar37 + fVar33, fVar35, 0.05953500 / fVar49, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_3442( l_U989[I]._fU20 ) ) );
                                }
                                SET_TEXT_USE_UNDERSCORE( 0 );
                            }
                        }
                        else
                        {
                            fVar36 = sub_15865( "NONE", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_15865( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                }
                if ((l_U1177 == I) AND ((uParam1^)[GET_PLAYER_ID()] == 0))
                {
                    if (bVar27)
                    {
                        if (NOT (sub_14697( l_U1177 )))
                        {
                            DRAW_SPRITE( l_U501[0], ((fVar37 + fVar33) + 0.01300000) + fVar36, fVar35 + 0.01300000, 0.01400000, 0.02000000, 0.00000000, 255, 255, 255, 255 );
                        }
                    }
                }
                fVar35 += 0.03200000;
            }
        }
    }
    sub_23876();
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
                    DRAW_RECT( ((0.20800000 + sub_15805()) + 0.00900000) + sub_39919(), 0.04900000 + fVar35, 0.42900000, 0.03800000, iVar17, iVar18, iVar19, 45 );
                }
                else
                {
                    DRAW_RECT( ((0.17900000 + sub_15805()) + 0.00900000) + sub_39919(), 0.04900000 + fVar35, 0.37200000, 0.03700000, iVar17, iVar18, iVar19, 45 );
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
            if ((sub_13166( J )) > 0)
            {
                iVar14++;
                sub_9507( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                GET_TEAM_RGB_COLOUR( J, ref iVar17, ref iVar18, ref iVar19 );
                if (GET_IS_WIDESCREEN())
                {
                    sub_10129( sub_15805() + 0.00900000, fVar35 + 0.03200000, 0.38000000, 0.55500000, iVar17, iVar18, iVar19, 255, 1, iVar14 );
                }
                else
                {
                    sub_10129( sub_15805() + 0.00900000, fVar35 + 0.03100000, 0.38000000, 0.55500000, iVar17, iVar18, iVar19, 255, 1, iVar14 );
                }
                for ( I = 0; I < 16; I++ )
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( l_U564[0]._fU24[I] ))
                    {
                        if ((GET_PLAYER_TEAM( sub_3442( l_U564[0]._fU24[I] ) )) == J)
                        {
                            if (GET_IS_WIDESCREEN())
                            {
                                sub_40491( l_U564[0]._fU24[I], ref iVar51, (sub_15805() + 0.00900000) + sub_39919(), ref fVar35, 0.35000000, 0.47750000, 0.03600000, iParam0, 0 );
                            }
                            else
                            {
                                sub_40491( l_U564[0]._fU24[I], ref iVar51, (sub_15805() + 0.00900000) + sub_39919(), ref fVar35, 0.32500000, 0.43500000, 0.03600000, iParam0, 0 );
                            }
                            sub_44317( l_U564[0]._fU24[I], (((uParam1^)[l_U564[0]._fU24[I]] == 2) || (((NOT sub_6398()) AND ((uParam1^)[l_U564[0]._fU24[I]] == -7)) AND (GET_HOST_ID() != l_U564[0]._fU24[I]))) || (((uParam1^)[l_U564[0]._fU24[I]] == -8) AND (GET_HOST_ID() == l_U564[0]._fU24[I])), ((sub_15805() + 0.00900000) + sub_39919()) + fVar36, fVar35 );
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
                    DRAW_RECT( ((0.20800000 + sub_15805()) + 0.00900000) + -0.00900000, 0.04900000 + fVar35, 0.42900000, 0.03800000, iVar17, iVar18, iVar19, 45 );
                }
                else
                {
                    DRAW_RECT( ((0.17900000 + sub_15805()) + 0.00900000) + -0.00900000, 0.04900000 + fVar35, 0.37200000, 0.03800000, iVar17, iVar18, iVar19, 45 );
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
            if (IS_NETWORK_PLAYER_ACTIVE( l_U564[0]._fU24[I] ))
            {
                if (((GET_PLAYER_TEAM( sub_3442( l_U564[0]._fU24[I] ) )) == -1) || (sub_12781()))
                {
                    if (GET_IS_WIDESCREEN())
                    {
                        sub_40491( l_U564[0]._fU24[I], ref iVar51, (sub_15805() + 0.00900000) + -0.00900000, ref fVar35, 0.35000000, 0.47750000, 0.03600000, iParam0, ((uParam1^)[GET_PLAYER_ID()] == 0) || ((uParam1^)[GET_PLAYER_ID()] == 2) );
                    }
                    else
                    {
                        sub_40491( l_U564[0]._fU24[I], ref iVar51, (sub_15805() + 0.00900000) + -0.00900000, ref fVar35, 0.32500000, 0.43500000, 0.03600000, iParam0, ((uParam1^)[GET_PLAYER_ID()] == 0) || ((uParam1^)[GET_PLAYER_ID()] == 2) );
                    }
                    sub_44317( l_U564[0]._fU24[I], (((uParam1^)[l_U564[0]._fU24[I]] == 2) || (((NOT sub_6398()) AND ((uParam1^)[l_U564[0]._fU24[I]] == -7)) AND (GET_HOST_ID() != l_U564[0]._fU24[I]))) || (((uParam1^)[l_U564[0]._fU24[I]] == -8) AND (GET_HOST_ID() == l_U564[0]._fU24[I])), ((sub_15805() + 0.00900000) + -0.00900000) + fVar36, fVar35 );
                }
            }
        }
    }
    return;
}

void sub_6006()
{
    if (DOES_CAM_EXIST( l_U1244 ))
    {
        DESTROY_CAM( l_U1244 );
    }
    return;
}

int sub_6185(unknown uParam0)
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

void sub_6398()
{
    return NETWORK_IS_GAME_RANKED();
}

int sub_6462(int iParam0)
{
    if (((iParam0 == 10) || (iParam0 == 11)) || (iParam0 == 12))
    {
        return 1;
    }
    return 0;
}

void sub_6570(unknown uParam0, unknown uParam1)
{
    int I;
    int iVar5;
    int iVar6;

    if (sub_6398())
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

int sub_6781()
{
    if (l_U498)
    {
        return 1;
    }
    l_U501[0] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_ARROW_RIGHT" );
    l_U501[1] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_ARROW_UP" );
    l_U501[2] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_ARROW_UPDOWN" );
    l_U501[3] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_BESTLAP" );
    l_U501[4] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_CAR_STOLEN" );
    l_U501[5] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_CRIMINAL" );
    l_U501[6] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_DEATHS" );
    l_U501[7] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_HEADSET_ON1" );
    l_U501[8] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_HEADSET_ON2" );
    l_U501[9] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_HOLDINGSTASH" );
    l_U501[10] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_KICK_PLAYER" );
    l_U501[11] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_KILLS" );
    l_U501[12] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_NOTCONNECTED" );
    l_U501[13] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_PLAYER" );
    l_U501[14] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_POSITIONS" );
    l_U501[15] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_RANKING" );
    l_U501[16] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_SCORE" );
    l_U501[17] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_0" );
    l_U501[18] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_1" );
    l_U501[19] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_2" );
    l_U501[20] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_3" );
    l_U501[21] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_4" );
    l_U501[22] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_5" );
    l_U501[23] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_6" );
    l_U501[24] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_7" );
    l_U501[25] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_8" );
    l_U501[26] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_9" );
    l_U501[27] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_10" );
    l_U501[28] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_TASKS_COMPLETED" );
    l_U501[29] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_TEAM_KILL" );
    l_U501[30] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_TERRITORY" );
    l_U501[31] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_TOTALTIME" );
    l_U501[32] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_VIP" );
    l_U501[33] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_GTA" );
    l_U501[34] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_INVITE" );
    l_U501[35] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "MAP_LOBBY" );
    l_U498 = 1;
    return 1;
}

void sub_8397(unknown uParam0)
{
    SET_SCREEN_FADE( sub_8406(), 0, 0, 0, 0, 0, 0, 255, uParam0, 1.00000000, 1.00000000 );
    return;
}

void sub_8406()
{
    unknown Result;

    GET_SCREEN_VIEWPORT_ID( ref Result );
    return Result;
}

void sub_8496(unknown uParam0)
{
    SET_SCREEN_FADE( sub_8406(), 0, 0, 1, 0, 0, 0, 255, uParam0, 1.00000000, 1.00000000 );
    return;
}

int sub_8651(int iParam0)
{
    int Result;

    for ( Result = 0; Result < 21; Result++ )
    {
        if (l_U989[Result]._fU16 == iParam0)
        {
            return Result;
        }
    }
    return 20;
}

void sub_8835()
{
    int I;
    int J;

    for ( J = 0; J < 7; J++ )
    {
        for ( I = 0; I < 16; I++ )
        {
            l_U564[J]._fU24[I] = 0;
        }
    }
    for ( I = 0; I < 16; I++ )
    {
        l_U906[I] = I;
        l_U564[0]._fU24[I] = I;
    }
    return;
}

void sub_8990()
{
    int I;

    for ( I = 0; I < 8; I++ )
    {
        l_U923[I] = I;
        l_U932[I] = I;
        l_U941[I] = 0;
    }
    return;
}

void sub_9471(int iParam0, boolean bParam1)
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
    sub_9507( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    GET_FRONTEND_DESIGN_VALUE( 23, ref uVar9, ref uVar10 );
    GET_FRONTEND_DESIGN_VALUE( 24, ref uVar11, ref uVar12 );
    GET_HUD_COLOUR( 49, ref uVar5, ref uVar6, ref uVar7, ref uVar8 );
    GET_NETWORK_TIMER( ref iVar4 );
    if (((iParam0 + 10000) - iVar4) > 0)
    {
        if (bParam1)
        {
            sub_9804( "STARTING_IN", uVar9, uVar10, uVar11, uVar12, 255, 255, 255, 255, 2, (((iParam0 + 10000) - iVar4) / 1000) + 1 );
        }
        else
        {
            sub_10129( uVar9, uVar10, uVar11, uVar12, 255, 255, 255, 255, 2, (((iParam0 + 10000) - iVar4) / 1000) + 1 );
        }
        if ((((iParam0 + 10000) - iVar4) + 1000) <= l_U1183)
        {
            PLAY_AUDIO_EVENT( "FRONTEND_OTHER_COUNTDOWN" );
            l_U1183 -= 1000;
        }
    }
    else if (bParam1)
    {
        sub_9804( "STARTING_IN", uVar9, uVar10, uVar11, uVar12, 255, 255, 255, 255, 2, 1 );
    }
    else
    {
        sub_10129( uVar9, uVar10, uVar11, uVar12, 255, 255, 255, 255, 2, 1 );
    }
    SET_WIDESCREEN_FORMAT( 3 );
    return;
}

void sub_9507(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
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

void sub_9804(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_9844( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_NUMBER( uParam0, uParam10 );
    DISPLAY_TEXT_WITH_NUMBER( uParam1, uParam2, uParam0, uParam10 );
    return Result;
}

void sub_9844(unknown uParam0, unknown uParam1)
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

void sub_10129(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam4, uParam5, uParam6, uParam7 );
    SET_TEXT_SCALE( uParam2, uParam3 );
    sub_9844( uParam8, ref uParam0 );
    Result = GET_STRING_WIDTH_WITH_NUMBER( "NUMBER", uParam9 );
    DISPLAY_TEXT_WITH_NUMBER( uParam0, uParam1, "NUMBER", uParam9 );
    return Result;
}

int sub_10475()
{
    if (IS_CONTROL_PRESSED( 2, 78 ))
    {
        if (l_U1189)
        {
            l_U1189 = 0;
            return 1;
        }
    }
    else if (((((NOT (IS_CONTROL_PRESSED( 2, 77 ))) AND (NOT (IS_CONTROL_PRESSED( 2, 79 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 80 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 12 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 13 ))))
    {
        l_U1189 = 1;
    }
    return 0;
}

int sub_10676()
{
    unknown uVar2;

    uVar2 = sub_3785();
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

int sub_10794()
{
    if (IS_CONTROL_PRESSED( 2, 80 ))
    {
        if (l_U1189)
        {
            l_U1189 = 0;
            return 1;
        }
    }
    else if (((((NOT (IS_CONTROL_PRESSED( 2, 77 ))) AND (NOT (IS_CONTROL_PRESSED( 2, 79 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 78 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 12 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 13 ))))
    {
        l_U1189 = 1;
    }
    return 0;
}

int sub_10976()
{
    if (IS_BUTTON_PRESSED( 0, 12 ))
    {
        l_U1190 = 1;
    }
    else if (l_U1190)
    {
        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
        l_U1190 = 0;
        return 1;
    }
    return 0;
}

int sub_11132()
{
    if (IS_CONTROL_PRESSED( 2, 77 ))
    {
        if (l_U1189)
        {
            l_U1189 = 0;
            return 1;
        }
    }
    else if (((((NOT (IS_CONTROL_PRESSED( 2, 79 ))) AND (NOT (IS_CONTROL_PRESSED( 2, 78 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 80 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 12 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 13 ))))
    {
        l_U1189 = 1;
    }
    return 0;
}

int sub_11576()
{
    if (IS_BUTTON_PRESSED( 0, 13 ))
    {
        if (l_U1189)
        {
            l_U1189 = 0;
            return 1;
        }
    }
    else if (((((NOT (IS_CONTROL_PRESSED( 2, 79 ))) AND (NOT (IS_CONTROL_PRESSED( 2, 78 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 80 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 77 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 12 ))))
    {
        l_U1189 = 1;
    }
    return 0;
}

int sub_11714()
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

int sub_11890()
{
    if (IS_CONTROL_PRESSED( 2, 79 ))
    {
        if (l_U1189)
        {
            l_U1189 = 0;
            return 1;
        }
    }
    else if (((((NOT (IS_CONTROL_PRESSED( 2, 77 ))) AND (NOT (IS_CONTROL_PRESSED( 2, 78 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 80 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 12 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 13 ))))
    {
        l_U1189 = 1;
    }
    return 0;
}

int sub_12116()
{
    int I;

    for ( I = 0; I < 21; I++ )
    {
        if (l_U989[I]._fU16 != 0)
        {
            if (l_U989[I]._fU16 < 12)
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

int sub_12231(unknown uParam0, int iParam1, boolean bParam2)
{
    int iVar5;
    int iVar6;
    int iVar7;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar6, ref iVar7, ref iVar5, ref iVar5 );
    GET_NETWORK_TIMER( ref iVar5 );
    if ((IS_BUTTON_PRESSED( 0, 8 )) || (iVar7 < 65436))
    {
        if ((l_U1187) || (iVar5 > (l_U1179 + 150)))
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
            l_U1179 = iVar5;
            l_U1187 = 0;
            return 1;
        }
    }
    if ((IS_BUTTON_PRESSED( 0, 9 )) || (iVar7 > 100))
    {
        if ((l_U1187) || (iVar5 > (l_U1179 + 150)))
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
            l_U1179 = iVar5;
            l_U1187 = 0;
            return 1;
        }
    }
    if (NOT l_U1187)
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
                                l_U1187 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_12781()
{
    int iVar2;

    iVar2 = NETWORK_GET_GAME_MODE();
    if ((((iVar2 == 13) || (iVar2 == 14)) || (iVar2 == 15)) || (iVar2 == 16))
    {
        return 1;
    }
    return 0;
}

int sub_12849()
{
    int iVar2;

    iVar2 = sub_3785();
    if ((iVar2 == 6) || (iVar2 == 7))
    {
        return 1;
    }
    return 0;
}

int sub_13063()
{
    if (NOT NETWORK_IS_TVT())
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (sub_13104())
            {
                if ((sub_13166( GET_PLAYER_TEAM( sub_5097() ) )) == 1)
                {
                    return 0;
                }
                return 1;
            }
            else if (sub_13270())
            {
                if (sub_4726() == 1)
                {
                    return 0;
                }
                return 1;
            }
        }
    }
    return 0;
}

int sub_13104()
{
    int iVar2;

    iVar2 = NETWORK_GET_GAME_MODE();
    if ((iVar2 == 10) || (iVar2 == 12))
    {
        return 1;
    }
    return 0;
}

void sub_13166(int iParam0)
{
    int I;
    int Result;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if ((GET_PLAYER_TEAM( sub_3442( I ) )) == iParam0)
            {
                Result++;
            }
        }
    }
    return Result;
}

int sub_13270()
{
    int iVar2;

    iVar2 = NETWORK_GET_GAME_MODE();
    if (((iVar2 == 1) || (iVar2 == 3)) || (iVar2 == 4))
    {
        return 1;
    }
    return 0;
}

int sub_13359()
{
    int iVar2;
    int iVar3;
    int iVar4;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar3, ref iVar4, ref iVar2, ref iVar2 );
    GET_NETWORK_TIMER( ref iVar2 );
    if ((IS_BUTTON_PRESSED( 0, 10 )) || (iVar3 < 65436))
    {
        if ((l_U1187) || (iVar2 > (l_U1179 + 300)))
        {
            l_U1179 = iVar2;
            l_U1187 = 0;
            return 1;
        }
    }
    if (NOT l_U1187)
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
                                l_U1187 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_13623(unknown uParam0, int iParam1)
{
    (uParam0^)--;
    if ((uParam0^) < 0)
    {
        (uParam0^) = iParam1 - 1;
        return 1;
    }
    return 0;
}

int sub_13765()
{
    int iVar2;
    int iVar3;
    int iVar4;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar3, ref iVar4, ref iVar2, ref iVar2 );
    GET_NETWORK_TIMER( ref iVar2 );
    if ((IS_BUTTON_PRESSED( 0, 11 )) || (iVar3 > 100))
    {
        if ((l_U1187) || (iVar2 > (l_U1179 + 300)))
        {
            l_U1179 = iVar2;
            l_U1187 = 0;
            return 1;
        }
    }
    if (NOT l_U1187)
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
                                l_U1187 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_14010(unknown uParam0, int iParam1)
{
    (uParam0^)++;
    if ((uParam0^) >= iParam1)
    {
        (uParam0^) = 0;
        return 1;
    }
    return 0;
}

int sub_14697(int iParam0)
{
    if ((((iParam0 == l_U1195) || (iParam0 == l_U1197)) || (iParam0 == l_U1194)) || (iParam0 == l_U1196))
    {
        return 1;
    }
    return 0;
}

int sub_14792(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar5, ref iVar6, ref iVar4, ref iVar4 );
    GET_NETWORK_TIMER( ref iVar4 );
    if ((IS_BUTTON_PRESSED( 0, 10 )) || (iVar5 < 65436))
    {
        if ((l_U1187) || (iVar4 > (l_U1179 + 300)))
        {
            for ( (uParam0^)--; (uParam0^) < 0; (uParam0^) += iParam1 )
            {
                ;
            }
            l_U1179 = iVar4;
            l_U1187 = 0;
            return 1;
        }
    }
    if ((IS_BUTTON_PRESSED( 0, 11 )) || (iVar5 > 100))
    {
        if ((l_U1187) || (iVar4 > (l_U1179 + 300)))
        {
            for ( (uParam0^)++; (uParam0^) >= iParam1; (uParam0^) -= iParam1 )
            {
                ;
            }
            l_U1179 = iVar4;
            l_U1187 = 0;
            return 1;
        }
    }
    if (NOT l_U1187)
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
                                l_U1187 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void sub_15170(int iParam0)
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
    if (l_U1269._fU0 != iParam0)
    {
        l_U1269._fU0 = iParam0;
        CLEAR_SCRIPT_ARRAY_FROM_SCRATCHPAD( 1 );
        SAVE_SCRIPT_ARRAY_IN_SCRATCHPAD( ref l_U1269, 1, 99, 1 );
    }
    return;
}

void sub_15423(unknown uParam0)
{
    sub_15434( uParam0 );
    sub_15722( 0 );
    return;
}

void sub_15434(boolean bParam0)
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

void sub_15722(boolean bParam0)
{
    char[16] cVar3;
    unknown uVar7;
    unknown uVar8;

    StrCopy( ref cVar3, "NTGT_", 16 );
    ConcatString(ref cVar3, sub_3785(), 16);
    GET_FRONTEND_DESIGN_VALUE( 113, ref uVar7, ref uVar8 );
    sub_9507( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    if (bParam0)
    {
        if (sub_6398())
        {
            sub_15865( ref cVar3, sub_15805() + 0.03250000, 0.11900000, uVar7, uVar8, 255, 255, 255, 255, 2 );
            DRAW_SPRITE( l_U501[15], sub_15805() + 0.01100000, 0.11900000 + 0.02300000, 0.03100000, 0.04400000, 0.00000000, 255, 255, 255, 255 );
        }
        else
        {
            sub_15865( ref cVar3, sub_15805(), 0.11900000, uVar7, uVar8, 255, 255, 255, 255, 2 );
        }
    }
    else if (sub_6398())
    {
        sub_15865( ref cVar3, sub_15805() + 0.03250000, 0.08500000, uVar7, uVar8, 255, 255, 255, 255, 2 );
        DRAW_SPRITE( l_U501[15], sub_15805() + 0.01100000, 0.08500000 + 0.02300000, 0.03100000, 0.04400000, 0.00000000, 255, 255, 255, 255 );
    }
    else
    {
        sub_15865( ref cVar3, sub_15805(), 0.08500000, uVar7, uVar8, 255, 255, 255, 255, 2 );
    }
    return;
}

void sub_15805()
{
    unknown Result;
    unknown uVar3;

    GET_FRONTEND_DESIGN_VALUE( 112, ref Result, ref uVar3 );
    return Result;
}

void sub_15865(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_9844( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH( uParam0 );
    DISPLAY_TEXT( uParam1, uParam2, uParam0 );
    return Result;
}

int sub_16702(unknown uParam0)
{
    if (l_U989[uParam0]._fU16 != 0)
    {
        if ((l_U989[uParam0]._fU16 == 9) || (l_U989[uParam0]._fU16 == 10))
        {
            if (IS_THIS_MACHINE_THE_SERVER())
            {
                if (sub_13270())
                {
                    if (sub_13270())
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
        else if (l_U989[uParam0]._fU16 < 12)
        {
            if (IS_THIS_MACHINE_THE_SERVER())
            {
                if (l_U989[uParam0]._fU24 > 0)
                {
                    return 1;
                }
            }
        }
        else if (l_U989[uParam0]._fU16 > 12)
        {
            if (l_U989[uParam0]._fU24 > 0)
            {
                return 1;
            }
        }
        else if (sub_13063())
        {
            return 1;
        };;;;
    }
    return 0;
}

int sub_17496(unknown uParam0)
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
    if (sub_3785() == 16)
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
    if ((sub_3785() == 5) || (sub_3785() == 4))
    {
        if (iVar4 < 4)
        {
            return 0;
        }
    }
    if ((sub_13104()) || (sub_13270()))
    {
        if (sub_13270())
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
        if (sub_17680() < 2)
        {
            (uParam0^) = 1;
            return 0;
        }
    }
    return 1;
}

void sub_17680()
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

int sub_19462(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar5, ref iVar6, ref iVar4, ref iVar4 );
    GET_NETWORK_TIMER( ref iVar4 );
    if ((IS_BUTTON_PRESSED( 0, 8 )) || (iVar6 < 65436))
    {
        if ((l_U1187) || (iVar4 > (l_U1179 + 150)))
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
            l_U1179 = iVar4;
            l_U1187 = 0;
            return 1;
        }
    }
    if (NOT l_U1187)
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
                                l_U1187 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_19805(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar5, ref iVar6, ref iVar4, ref iVar4 );
    GET_NETWORK_TIMER( ref iVar4 );
    if ((IS_BUTTON_PRESSED( 0, 9 )) || (iVar6 > 100))
    {
        if ((l_U1187) || (iVar4 > (l_U1179 + 150)))
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
            l_U1179 = iVar4;
            l_U1187 = 0;
            return 1;
        }
    }
    if (NOT l_U1187)
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
                                l_U1187 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_20147(unknown uParam0)
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

void sub_20460(int iParam0, int iParam1, int iParam2)
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
        iParam0->_fU0[2] = sub_20556( iParam1 );
        iParam0->_fU0[3] = 0;
        iParam0->_fU0[4] = iParam2;
        g_U14 = iParam2;
        iParam0->_fU0[5] = sub_20650( iParam1 );
    }
    return;
}

int sub_20556(unknown uParam0)
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

int sub_20650(unknown uParam0)
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

void sub_20798()
{
    g_U10 = 1;
    sub_20811();
    return;
}

void sub_20811()
{
    FORCE_LOADING_SCREEN( 1 );
    while (true)
    {
        WAIT( 0 );
    }
    return;
}

void sub_21323()
{
    g_U11 = 1;
    sub_20811();
    return;
}

void sub_21481()
{
    g_U12 = 1;
    sub_20811();
    return;
}

float sub_21626()
{
    unknown uVar2;
    unknown uVar3;

    GET_FRONTEND_DESIGN_VALUE( 112, ref uVar2, ref uVar3 );
    return 1.00000000 - uVar2;
}

void sub_22140(unknown uParam0)
{
    if ((uParam0^))
    {
        (uParam0^) = 0;
        return;
    }
    (uParam0^) = 1;
    return;
}

int sub_22576()
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
        return sub_22648( 0, 2 );
    }
    else if (iVar5 == 1)
    {
        if ((GET_NO_OF_PLAYERS_IN_TEAM( -1 )) > (GET_NO_OF_PLAYERS_IN_TEAM( iVar6 )))
        {
            return sub_22648( 0, 2 );
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
        return sub_22648( 0, 8 );
    }
    else
    {
        iVar4 = sub_22648( 0, iVar5 );
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

void sub_22648(unknown uParam0, unknown Result)
{
    GENERATE_RANDOM_INT_IN_RANGE( uParam0, Result, ref Result );
    return Result;
}

int sub_23116(int iParam0)
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
            return sub_22648( 0, iParam0 );
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
            return sub_22648( 0, iParam0 );
        }
        else
        {
            iVar6 = sub_22648( 0, iVar5 );
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

int sub_23530(int iParam0)
{
    int I;
    int iVar4;
    int iVar5;

    iVar5 = GET_PLAYER_TEAM( sub_3442( iParam0 ) );
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if ((GET_PLAYER_TEAM( sub_3442( I ) )) == iVar5)
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

void sub_23876()
{
    int iVar2;

    if (NOT N_604003528())
    {
        if (NETWORK_CHECK_INVITE_ARRIVAL())
        {
            GET_NETWORK_TIMER( ref l_U1265 );
            l_U1265 += 5000;
            NETWORK_CLEAR_INVITE_ARRIVAL();
        }
        GET_NETWORK_TIMER( ref iVar2 );
        if ((l_U1265 > iVar2) AND (l_U1265 != 0))
        {
            SET_WIDESCREEN_FORMAT( 3 );
            sub_9507( 0, 0.00000000, 1.50000000, 0, 0, 0, 0, 0, 255 );
            sub_15865( "INVITE_RECIEVED", sub_21626() + -0.05050000, 0.09800000, 0.35000000, 0.47800000, 255, 255, 255, 255, 3 );
            DRAW_SPRITE( l_U501[34], sub_21626() + -0.02050000, 0.10580000, 0.09570000, 0.06320000, 0.00000000, 255, 255, 255, 255 );
        }
    }
    return;
}

int sub_24195()
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
    sub_15434( 1 );
    GET_FRONTEND_DESIGN_VALUE( 113, ref uVar7, ref uVar8 );
    sub_9507( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    sub_15865( "RECENT_PLAYERS", sub_15805(), 0.08500000, uVar7, uVar8, 255, 255, 255, 255, 2 );
    sub_9507( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    GET_HUD_COLOUR( 56, ref uVar3, ref uVar4, ref uVar5, ref I );
    if (N_604003528())
    {
        sub_15865( "RECENTPLYRX360", sub_15805() + 0.00100000, fVar6, 0.31500000, 0.42950000, uVar3, uVar4, uVar5, 255, 2 );
    }
    else
    {
        sub_15865( "RECENTPLYRDESC", sub_15805() + 0.00100000, fVar6, 0.31500000, 0.42950000, uVar3, uVar4, uVar5, 255, 2 );
    }
    if (GET_IS_WIDESCREEN())
    {
        fVar6 = 0.21550000;
    }
    else
    {
        fVar6 = 0.21600000;
    }
    sub_12231( ref l_U1199, NETWORK_GET_NUM_PLAYERS_MET(), 0 );
    if (NETWORK_GET_NUM_PLAYERS_MET() > 16)
    {
        DRAW_FRONTEND_HELPER_TEXT( "UP_DOWN", "PAD_LT_RT", 0 );
        if (IS_BUTTON_JUST_PRESSED( 0, 7 ))
        {
            l_U1199 += 16;
            if (l_U1199 >= NETWORK_GET_NUM_PLAYERS_MET())
            {
                l_U1199 = NETWORK_GET_NUM_PLAYERS_MET() - 1;
            }
        }
        else if (IS_BUTTON_JUST_PRESSED( 0, 5 ))
        {
            l_U1199 -= 16;
            if (l_U1199 < 0)
            {
                l_U1199 = 0;
            }
        }
    }
    if (l_U1199 >= (l_U1200 + 16))
    {
        l_U1200 = (l_U1199 - 16) + 1;
    }
    else if (l_U1199 < l_U1200)
    {
        l_U1200 = l_U1199;
    }
    for ( I = l_U1200; I <= ((l_U1200 + 16) - 1); I++ )
    {
        if (I < NETWORK_GET_NUM_PLAYERS_MET())
        {
            sub_9507( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
            if (l_U1199 == I)
            {
                sub_24874( sub_15805(), fVar6, 0.35000000, 0.47750000, 255, 255, 255, 255, 2, NETWORK_GET_MET_PLAYER_NAME( I ) );
            }
            else
            {
                sub_24874( sub_15805(), fVar6, 0.35000000, 0.47750000, uVar3, uVar4, uVar5, 255, 2, NETWORK_GET_MET_PLAYER_NAME( I ) );
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
    if (sub_11890())
    {
        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
        NETWORK_SHOW_MET_PLAYER_FEEDBACK_UI( l_U1199 );
    }
    else if (sub_11132())
    {
        NETWORK_SHOW_MET_PLAYER_PROFILE_UI( l_U1199 );
    }
    else if (sub_10475())
    {
        return 1;
    };;;
    return 0;
}

void sub_24874(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam4, uParam5, uParam6, uParam7 );
    SET_TEXT_SCALE( uParam2, uParam3 );
    sub_9844( uParam8, ref uParam0 );
    Result = GET_STRING_WIDTH_WITH_STRING( "STRING", uParam9 );
    DISPLAY_TEXT_WITH_LITERAL_STRING( uParam0, uParam1, "STRING", uParam9 );
    return Result;
}

int sub_25460(unknown uParam0, boolean bParam1)
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
    sub_15434( 1 );
    GET_FRONTEND_DESIGN_VALUE( 113, ref uVar13, ref uVar14 );
    sub_9507( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    sub_15865( "INVITE_TITLE", sub_15805(), 0.08500000, uVar13, uVar14, 255, 255, 255, 255, 2 );
    sub_9507( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    GET_HUD_COLOUR( 56, ref iVar5, ref iVar6, ref iVar7, ref uVar8 );
    sub_15865( "INVITES_DESC", sub_15805() + 0.00100000, fVar12, 0.31500000, 0.42950000, iVar5, iVar6, iVar7, 255, 2 );
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
                DRAW_RECT( 0.57000000 + sub_15805(), 0.01370000 + fVar12, 1.15500000, 0.03800000, iVar5, iVar6, iVar7, 45 );
            }
            else
            {
                DRAW_RECT( 0.40200000 + sub_15805(), 0.01370000 + fVar12, 0.82000000, 0.03800000, iVar5, iVar6, iVar7, 45 );
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
    sub_12231( ref l_U1202, NETWORK_GET_FRIEND_COUNT(), 0 );
    if (NETWORK_GET_FRIEND_COUNT() > 16)
    {
        DRAW_FRONTEND_HELPER_TEXT( "UP_DOWN", "PAD_LT_RT", 0 );
        if (IS_BUTTON_JUST_PRESSED( 0, 7 ))
        {
            l_U1202 += 16;
            if (l_U1202 >= NETWORK_GET_FRIEND_COUNT())
            {
                l_U1202 = NETWORK_GET_FRIEND_COUNT() - 1;
            }
        }
        else if (IS_BUTTON_JUST_PRESSED( 0, 5 ))
        {
            l_U1202 -= 16;
            if (l_U1202 < 0)
            {
                l_U1202 = 0;
            }
        }
    }
    if (l_U1202 >= (l_U1203 + 16))
    {
        l_U1203 = (l_U1202 - 16) + 1;
    }
    else if (l_U1202 < l_U1203)
    {
        l_U1203 = l_U1202;
    }
    for ( I = l_U1203; I <= ((l_U1203 + 16) - 1); I++ )
    {
        if (I < NETWORK_GET_FRIEND_COUNT())
        {
            sub_9507( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
            if (l_U1202 == I)
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
            if (l_U4)
            {
                if (N_604003528())
                {
                    sub_24874( sub_15805(), fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2, "WWWWWWWWWWWWWWW" );
                }
                else
                {
                    sub_24874( sub_15805(), fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2, "WWWWWWWWWWWWWWWW" );
                }
            }
            else
            {
                SET_TEXT_USE_UNDERSCORE( 1 );
                sub_24874( sub_15805(), fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2, NETWORK_GET_FRIEND_NAME( I ) );
                SET_TEXT_USE_UNDERSCORE( 0 );
            }
            sub_9507( 0, 0.00000000, 1.50000000, 0, 0, 0, 0, 0, 255 );
            if (sub_26540( I ))
            {
                sub_15865( "INGAME", sub_15805() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
            }
            else if (sub_26695( I ))
            {
                sub_15865( "INVITING", sub_15805() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
                if (GET_CURRENT_EPISODE() == (NETWORK_GET_UNACCEPTED_INVITE_EPISODE( sub_26841( I ) )))
                {
                    StrCopy( ref cVar15, "NTGT_", 8 );
                    ConcatString(ref cVar15, NETWORK_GET_UNACCEPTED_INVITE_GAME_MODE( sub_26841( I ) ), 8);
                    sub_9507( 0, 0.00000000, 1.50000000, 0, 0, 0, 0, 0, 255 );
                    if (GET_IS_WIDESCREEN())
                    {
                        sub_15865( ref cVar15, sub_21626() + 0.32600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 3 );
                    }
                    else
                    {
                        sub_15865( ref cVar15, sub_21626() + -0.01100000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 3 );
                    }
                }
            }
            else if (NETWORK_DID_INVITE_FRIEND( NETWORK_GET_FRIEND_NAME( I ) ))
            {
                sub_15865( "INVITED", sub_15805() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
            }
            else if (NETWORK_IS_FRIEND_ONLINE( NETWORK_GET_FRIEND_NAME( I ) ))
            {
                sub_15865( "ONLINE", sub_15805() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
            }
            else
            {
                sub_15865( "OFFLINE", sub_15805() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
            };;;;
            if (NETWORK_IS_FRIEND_IN_SAME_TITLE( NETWORK_GET_FRIEND_NAME( I ) ))
            {
                DRAW_SPRITE( l_U501[33], sub_15805() + 0.33300000, fVar12 + 0.01520000, 0.03900000, 0.02600000, 0.00000000, iVar5, iVar6, iVar7, 255 );
            }
            fVar12 += 0.03600000;
        }
    }
    GET_NETWORK_TIMER( ref iVar9 );
    if (l_U1264 > (iVar9 - 5000))
    {
        SET_WIDESCREEN_FORMAT( 2 );
        sub_9507( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
        GET_FRONTEND_DESIGN_VALUE( 23, ref uVar11, ref fVar12 );
        GET_FRONTEND_DESIGN_VALUE( 24, ref uVar13, ref uVar14 );
        if (NOT bParam1)
        {
            SET_TEXT_USE_UNDERSCORE( 1 );
            sub_27553( "INVITED_PLAYER", uVar11, fVar12 + 0.04050000, uVar13, uVar14, 255, 255, 255, 255, 2, ref l_U1255 );
            SET_TEXT_USE_UNDERSCORE( 0 );
        }
    }
    INIT_FRONTEND_HELPER_TEXT();
    DRAW_FRONTEND_HELPER_TEXT( "BACK", "INPUT_F_CANCEL", 0 );
    if ((l_U1263 != l_U1202) || (l_U1264 < (iVar9 - 5000)))
    {
        l_U1263 = -1;
    }
    if (NOT (sub_26540( l_U1202 )))
    {
        if (sub_26695( l_U1202 ))
        {
            DRAW_FRONTEND_HELPER_TEXT( "ACCEPT_INVITE", "INPUT_F_ACCEPT", 0 );
        }
        else if (((NOT (NETWORK_DID_INVITE_FRIEND( NETWORK_GET_FRIEND_NAME( l_U1202 ) ))) || (l_U1263 == -1)) AND (NETWORK_IS_FRIEND_ONLINE( NETWORK_GET_FRIEND_NAME( l_U1202 ) )))
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
    if (sub_11132())
    {
        if (NETWORK_IS_FRIEND_ONLINE( NETWORK_GET_FRIEND_NAME( l_U1202 ) ))
        {
            if (NOT (sub_26540( l_U1202 )))
            {
                if (sub_26695( l_U1202 ))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    NETWORK_ACCEPT_INVITE( sub_26841( l_U1202 ) );
                }
                else if (((NOT (NETWORK_DID_INVITE_FRIEND( NETWORK_GET_FRIEND_NAME( l_U1202 ) ))) || (l_U1263 == -1)) AND (NETWORK_IS_FRIEND_ONLINE( NETWORK_GET_FRIEND_NAME( l_U1202 ) )))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    NETWORK_INVITE_FRIEND( NETWORK_GET_FRIEND_NAME( l_U1202 ), "" );
                    StrCopy( ref l_U1255, NETWORK_GET_FRIEND_NAME( l_U1202 ), 32 );
                    l_U1263 = l_U1202;
                    GET_NETWORK_TIMER( ref l_U1264 );
                    l_U1265 = 0;
                }
            }
        }
    }
    else if (sub_10475())
    {
        return 1;
    }
    return 0;
}

int sub_26540(unknown uParam0)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (COMPARE_STRING( NETWORK_GET_FRIEND_NAME( uParam0 ), GET_PLAYER_NAME( sub_3442( I ) ) ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_26695(unknown uParam0)
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

int sub_26841(unknown uParam0)
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

void sub_27553(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_9844( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_STRING( uParam0, uParam10 );
    DISPLAY_TEXT_WITH_LITERAL_STRING( uParam1, uParam2, uParam0, uParam10 );
    return Result;
}

void sub_28374(unknown uParam0)
{
    unknown Result;

    GET_CHAR_MODEL( uParam0, ref Result );
    return Result;
}

void sub_28479(unknown uParam0, boolean bParam1)
{
    SET_PLAYER_CONTROL_FOR_NETWORK( sub_3442( uParam0 ), bParam1, 0 );
    SET_CHAR_VISIBLE( sub_28507( uParam0 ), bParam1 );
    if (bParam1)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_28507( uParam0 ) )))
        {
            SET_CHAR_COLLISION( sub_28507( uParam0 ), 1 );
        }
        FREEZE_CHAR_POSITION( sub_28507( uParam0 ), 0 );
        SET_CHAR_NEVER_TARGETTED( sub_28507( uParam0 ), 0 );
        SET_PLAYER_INVINCIBLE( sub_3442( uParam0 ), 0 );
    }
    else
    {
        SET_CHAR_COLLISION( sub_28507( uParam0 ), 0 );
        FREEZE_CHAR_POSITION( sub_28507( uParam0 ), 1 );
        SET_CHAR_NEVER_TARGETTED( sub_28507( uParam0 ), 1 );
        SET_PLAYER_INVINCIBLE( sub_3442( uParam0 ), 1 );
        REMOVE_PTFX_FROM_PED( sub_28507( uParam0 ) );
        if (NOT (IS_CHAR_FATALLY_INJURED( sub_28507( uParam0 ) )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_28507( uParam0 ) );
        }
    }
    return;
}

void sub_28507(unknown uParam0)
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( uParam0 ), ref Result );
    return Result;
}

void sub_29082(unknown uParam0)
{
    unknown Result;
    unknown uVar4;

    GET_FRONTEND_DESIGN_VALUE( uParam0, ref Result, ref uVar4 );
    return Result;
}

void sub_29115(unknown uParam0)
{
    unknown uVar3;
    unknown Result;

    GET_FRONTEND_DESIGN_VALUE( uParam0, ref uVar3, ref Result );
    return Result;
}

void sub_29274(boolean bParam0)
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
            if (sub_6462( I ))
            {
                if (GET_NUMBER_OF_PLAYERS() > 4)
                {
                    bVar8 = false;
                }
            }
        }
        if (bVar8)
        {
            if (l_U988 == I)
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
        else if (l_U988 != I)
        {
            iVar4 = 60;
            iVar5 = 60;
            iVar6 = 60;
        }
        sub_9507( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
        sub_15865( sub_29507( I ), fVar9, fVar10, 0.35000000, 0.47750000, iVar4, iVar5, iVar6, 255, 1 );
        fVar10 += 0.03600000;
    }
    return;
}

string sub_29507(unknown uParam0)
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

void sub_30820(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (((GET_PLAYER_TEAM( uParam0 )) == -1) || (sub_3785() == 16))
    {
        GET_PLAYER_RGB_COLOUR( uParam0, uParam1, uParam2, uParam3 );
    }
    else
    {
        GET_TEAM_RGB_COLOUR( GET_PLAYER_TEAM( uParam0 ), uParam1, uParam2, uParam3 );
    }
    return;
}

void sub_32575(unknown uParam0)
{
    g_U13 = uParam0;
    if (NOT g_U26675)
    {
        sub_20811();
    }
    return;
}

void sub_32895(boolean bParam0)
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
        fVar7 = sub_15805();
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
    ConcatString(ref cVar9, sub_3785(), 16);
    if (l_U1180 == 1)
    {
        ConcatString(ref cVar9, "A", 16);
    }
    else if (l_U1180 == 2)
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
        sub_9507( 0, fVar7, sub_21626() * 1.20000000, 0, 0, 0, 0, 0, 255 );
    }
    else
    {
        sub_9507( 0, fVar7, sub_21626(), 0, 0, 0, 0, 0, 255 );
    }
    GET_HUD_COLOUR( 56, ref uVar3, ref uVar4, ref uVar5, ref uVar6 );
    sub_15865( ref cVar9, fVar7, fVar8, 0.31500000, 0.42950000, uVar3, uVar4, uVar5, 255, 2 );
    return;
}

int sub_33234(unknown uParam0)
{
    int I;

    for ( I = 0; I < 21; I++ )
    {
        if (l_U989[I]._fU16 == 8)
        {
            (uParam0^) = I;
            return 1;
        }
    }
    return 0;
}

int sub_33330(unknown uParam0, unknown uParam1)
{
    int I;
    char[16] cVar5;

    if (l_U539)
    {
        return 1;
    }
    StrCopy( ref l_U1247, uParam0, 16 );
    l_U538 = uParam1;
    REQUEST_STREAMED_TXD( uParam0, 1 );
    if (HAS_STREAMED_TXD_LOADED( uParam0 ))
    {
        for ( I = 0; I < l_U538; I++ )
        {
            StrCopy( ref cVar5, uParam0, 16 );
            ConcatString(ref cVar5, I, 16);
            l_U541[I] = GET_TEXTURE_FROM_STREAMED_TXD( uParam0, ref cVar5 );
        }
        l_U539 = 1;
        return 1;
    }
    return 0;
}

float sub_35250(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8, int iParam9, unknown uParam10)
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
        sub_10129( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar20 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_10129( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar21 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_15865( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 += fVar25;
        fVar26 += fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_10129( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar18 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_10129( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar19 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_15865( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 += fVar25;
        fVar26 += fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_10129( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar16 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_10129( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar17 );
    }
    else if (iParam8 == 3)
    {
        fVar26 = uParam0 - (fVar22 / 2);
        sub_10129( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar17 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_10129( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar16 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_15865( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 -= fVar25;
        fVar26 -= fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_10129( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar19 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_10129( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar18 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_15865( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 -= fVar25;
        fVar26 -= fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_10129( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar21 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_10129( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar20 );
    }
    else
    {
        fVar26 = uParam0 + fVar24;
        sub_10129( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar19 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_15865( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_10129( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar16 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_10129( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar17 );
        fVar26 = uParam0 - fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_10129( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar18 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_15865( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_10129( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar21 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_10129( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar20 );
    }
    return (6 * fVar22) + (2 * fVar23);
}

void sub_37281(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    float Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_9844( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_NUMBER( uParam0, uParam10 );
    Result += GET_STRING_WIDTH_WITH_NUMBER( "NUMBER", uParam11 );
    Result -= GET_STRING_WIDTH_WITH_NUMBER( "NUMBER", 11 );
    DISPLAY_TEXT_WITH_2_NUMBERS( uParam1, uParam2, uParam0, uParam10, uParam11 );
    return Result;
}

int sub_38098()
{
    if (sub_13270())
    {
        if (sub_13270())
        {
            return 1;
        }
    }
    else if ((sub_13104()) || (sub_12781()))
    {
        return 1;
    }
    return 0;
}

int sub_38429()
{
    int I;
    int Result;

    for ( I = 0; I < 8; I++ )
    {
        if ((sub_13166( I )) > 0)
        {
            Result++;
            if (I == (GET_PLAYER_TEAM( sub_5097() )))
            {
                return Result;
            }
        }
    }
    return 0;
}

float sub_39919()
{
    if (GET_IS_WIDESCREEN())
    {
        return 0.02700000;
    }
    return 0.02100000;
}

void sub_40491(int iParam0, unknown uParam1, float fParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7, unknown uParam8)
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

    sub_40508( iParam0, ref iVar12, ref iVar13, ref iVar14 );
    if ((l_U1253) AND ((iParam7 == 2) || (iParam7 == 3)))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( iParam0 ))
        {
            if ((IS_CHAR_DEAD( sub_28507( iParam0 ) )) || (l_U967[iParam0]))
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
            if (l_U564[(uParam1^)[I]]._fU16 > 0)
            {
                iVar16 = 3;
                if (((iParam7 == 6) || (iParam7 == 7)) || (iParam7 == 8))
                {
                    iVar16 = 1;
                }
                sub_9507( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                if (l_U564[(uParam1^)[I]]._fU16 != 1)
                {
                    if (((iParam7 == 6) || (iParam7 == 7)) || (iParam7 == 8))
                    {
                        fParam2 += (sub_40883( l_U564[(uParam1^)[I]]._fU16 )) * 0.50000000;
                    }
                }
                switch (l_U564[(uParam1^)[I]]._fU16)
                {
                    case 1:
                    if (((iParam7 == 6) || (iParam7 == 7)) || (iParam7 == 8))
                    {
                        if (sub_4287( iParam0 ))
                        {
                            iVar12 = 60;
                            iVar13 = 60;
                            iVar14 = 60;
                        }
                        else
                        {
                            sub_40508( iParam0, ref iVar12, ref iVar13, ref iVar14 );
                        }
                        if (l_U4)
                        {
                            if (N_604003528())
                            {
                                sub_24874( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, 2, "WWWWWWWWWWWWWWW" );
                            }
                            else
                            {
                                sub_24874( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, 2, "WWWWWWWWWWWWWWWW" );
                            }
                        }
                        else
                        {
                            SET_TEXT_USE_UNDERSCORE( 1 );
                            sub_24874( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, 2, sub_41443( iParam0 ) );
                            SET_TEXT_USE_UNDERSCORE( 0 );
                        }
                        if ((sub_6398()) || (NOT N_604003528()))
                        {
                            if (IS_NETWORK_PLAYER_ACTIVE( iParam0 ))
                            {
                                if (iParam0 != GET_PLAYER_ID())
                                {
                                    l_U1159[iParam0] = GET_PLAYER_RANK_LEVEL_DURING_MP( iParam0 );
                                }
                                if ((GET_PLAYER_RANK_LEVEL_DURING_MP( iParam0 )) > -1)
                                {
                                    if (GET_IS_WIDESCREEN())
                                    {
                                        DRAW_SPRITE( l_U501[17 + (GET_PLAYER_RANK_LEVEL_DURING_MP( iParam0 ))], fParam2 + 0.33450000, (uParam3^) + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
                                    }
                                    else if (N_604003528())
                                    {
                                        DRAW_SPRITE( l_U501[17 + (GET_PLAYER_RANK_LEVEL_DURING_MP( iParam0 ))], fParam2 + 0.27500000, (uParam3^) + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
                                    }
                                    else
                                    {
                                        DRAW_SPRITE( l_U501[17 + (GET_PLAYER_RANK_LEVEL_DURING_MP( iParam0 ))], fParam2 + 0.29500000, (uParam3^) + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
                                    }
                                }
                            }
                            else if (l_U1159[iParam0] > -1)
                            {
                                if (GET_IS_WIDESCREEN())
                                {
                                    DRAW_SPRITE( l_U501[17 + l_U1159[iParam0]], fParam2 + 0.33450000, (uParam3^) + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
                                }
                                else
                                {
                                    DRAW_SPRITE( l_U501[17 + l_U1159[iParam0]], fParam2 + 0.27500000, (uParam3^) + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
                                }
                            }
                        }
                        fParam2 += (sub_40883( 1 )) - uVar19;
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
                            if (l_U950[iParam0])
                            {
                                iVar12 = 60;
                                iVar13 = 60;
                                iVar14 = 60;
                            }
                            fParam2 += 0.01700000;
                        }
                    }
                    if (l_U4)
                    {
                        if ((iParam7 == 9) || (iParam7 == 10))
                        {
                            if (GET_IS_WIDESCREEN())
                            {
                                if (N_604003528())
                                {
                                    uVar22 = sub_42433( 0.29700000, uParam4, sub_42231( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, "WWWWWWWWWWWWWWW" ) );
                                }
                                else
                                {
                                    uVar22 = sub_42433( 0.29700000, uParam4, sub_42231( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, "WWWWWWWWWWWWWWWW" ) );
                                }
                            }
                            else if (N_604003528())
                            {
                                uVar22 = sub_42433( 0.23900000, uParam4, sub_42231( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, "WWWWWWWWWWWWWWW" ) );
                            }
                            else
                            {
                                uVar22 = sub_42433( 0.23900000, uParam4, sub_42231( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, "WWWWWWWWWWWWWWWW" ) );
                            }
                            sub_9507( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                            SET_TEXT_USE_UNDERSCORE( 1 );
                        }
                        else
                        {
                            uVar22 = uParam4;
                        }
                        if (N_604003528())
                        {
                            sub_24874( fParam2, (uParam3^) + fVar20, uVar22, uParam5, iVar12, iVar13, iVar14, 255, 2, "WWWWWWWWWWWWWWW" );
                        }
                        else
                        {
                            sub_24874( fParam2, (uParam3^) + fVar20, uVar22, uParam5, iVar12, iVar13, iVar14, 255, 2, "WWWWWWWWWWWWWWWW" );
                        }
                    }
                    else if ((iParam7 == 9) || (iParam7 == 10))
                    {
                        if (GET_IS_WIDESCREEN())
                        {
                            uVar22 = sub_42433( 0.29700000, uParam4, sub_42231( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, sub_41443( iParam0 ) ) );
                        }
                        else
                        {
                            uVar22 = sub_42433( 0.23900000, uParam4, sub_42231( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, sub_41443( iParam0 ) ) );
                        }
                        sub_9507( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                        SET_TEXT_USE_UNDERSCORE( 1 );
                    }
                    else
                    {
                        uVar22 = uParam4;
                    }
                    SET_TEXT_USE_UNDERSCORE( 1 );
                    sub_24874( fParam2, (uParam3^) + fVar20, uVar22, uParam5, iVar12, iVar13, iVar14, 255, 2, sub_41443( iParam0 ) );
                    SET_TEXT_USE_UNDERSCORE( 0 );;;
                    break;
                    case 2:
                    case 7:
                    if (NOT (sub_4287( iParam0 )))
                    {
                        sub_10129( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, l_U564[(uParam1^)[I]]._fU24[iParam0] );
                    }
                    break;
                    case 3:
                    if (NOT (sub_4287( iParam0 )))
                    {
                        if (l_U564[(uParam1^)[I]]._fU24[iParam0] > 0)
                        {
                            sub_43205( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, sub_4156( iParam0 ) );
                        }
                    }
                    break;
                    case 4:
                    if (NOT (sub_4287( iParam0 )))
                    {
                        if ((l_U564[(uParam1^)[I]]._fU24[iParam0] < 2147483647) AND (l_U564[(uParam1^)[I]]._fU24[iParam0] > -2147483648))
                        {
                            sub_35250( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, l_U564[(uParam1^)[I]]._fU24[iParam0], 1.00000000 );
                        }
                    }
                    break;
                    case 5:
                    case 6:
                    if ((NOT l_U1254) || (iParam7 != 6))
                    {
                        if (NOT (sub_4287( iParam0 )))
                        {
                            if ((((sub_13104()) || (sub_13270())) AND ((sub_43573( iParam0 )) > -1)) AND (sub_3785() != 1))
                            {
                                sub_9804( "CASH", fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, (l_U941[sub_43573( iParam0 )]) / (sub_43696( sub_43573( iParam0 ) )) );
                            }
                            else
                            {
                                sub_9804( "CASH", fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, l_U564[(uParam1^)[I]]._fU24[iParam0] );
                            }
                        }
                    }
                    break;
                }
                if (l_U564[(uParam1^)[I]]._fU16 != 1)
                {
                    if (((iParam7 == 6) || (iParam7 == 7)) || (iParam7 == 8))
                    {
                        fParam2 += (sub_40883( l_U564[(uParam1^)[I]]._fU16 )) * 0.50000000;
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

void sub_40508(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (l_U862)
    {
        (uParam1^) = l_U733[uParam0]._fU20;
        (uParam2^) = l_U733[uParam0]._fU24;
        (uParam3^) = l_U733[uParam0]._fU28;
    }
    else
    {
        sub_30820( sub_3442( uParam0 ), uParam1, uParam2, uParam3 );
    }
    return;
}

float sub_40883(unknown uParam0)
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

void sub_41443(unknown uParam0)
{
    if (l_U862)
    {
        return l_U733[uParam0]._fU0;
    }
    return GET_PLAYER_NAME( sub_3442( uParam0 ) );
}

void sub_42231(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
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

void sub_42433(float fParam0, unknown Result, float fParam2)
{
    if (fParam2 > fParam0)
    {
        return (fParam0 * Result) / fParam2;
        break;
    }
    return Result;
}

void sub_43205(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, int iParam9)
{
    if (iParam9 == 1)
    {
        return sub_15865( "FIRST", uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8 );
    }
    if (iParam9 == 2)
    {
        return sub_15865( "SECOND", uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8 );
    }
    if (iParam9 == 3)
    {
        return sub_15865( "THIRD", uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8 );
    }
    return sub_9804( "NTH", uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, iParam9 );
}

void sub_43573(unknown uParam0)
{
    if (l_U862)
    {
        return l_U733[uParam0]._fU12;
    }
    return GET_PLAYER_TEAM( sub_3442( uParam0 ) );
}

void sub_43696(int iParam0)
{
    int I;
    int Result;

    if (l_U862)
    {
        for ( I = 0; I < 16; I++ )
        {
            if ((l_U733[I]._fU4) AND (NOT l_U733[I]._fU8))
            {
                if (l_U733[I]._fU12 == iParam0)
                {
                    Result++;
                }
            }
        }
        return Result;
    }
    for ( I = 0; I < 16; I++ )
    {
        if ((IS_NETWORK_PLAYER_ACTIVE( I )) AND (NOT l_U950[I]))
        {
            if ((GET_PLAYER_TEAM( sub_3442( I ) )) == iParam0)
            {
                Result++;
            }
        }
    }
    return Result;
}

void sub_44317(int iParam0, boolean bParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    iVar7 = 3;
    GET_HUD_COLOUR( 56, ref uVar8, ref uVar9, ref uVar10, ref iVar6 );
    GET_NETWORK_TIMER( ref iVar6 );
    if ((sub_44356( iParam0 )) > 0)
    {
        if ((sub_6398()) || (NOT N_604003528()))
        {
            iVar7 = 4;
        }
        if (l_U1270 > iVar6)
        {
            DRAW_SPRITE( l_U501[10], uParam2 + (-0.02400000 * iVar7), uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
        }
        else
        {
            sub_9507( 0, sub_15805(), sub_21626(), 0, 0, 0, 0, 0, 255 );
            sub_10129( (uParam2 + (-0.02400000 * iVar7)) + -0.00030000, (uParam3 + 0.01300000) + -0.01320000, 0.31500000, 0.42950000, 255, 255, 255, 255, 1, sub_44356( iParam0 ) );
            if (l_U1270 < (iVar6 - 1000))
            {
                l_U1270 = iVar6 + 1000;
            }
        }
    }
    if (((sub_6398()) || (NOT N_604003528())) AND ((GET_PLAYER_RANK_LEVEL_DURING_MP( iParam0 )) > -1))
    {
        DRAW_SPRITE( l_U501[17 + (GET_PLAYER_RANK_LEVEL_DURING_MP( iParam0 ))], uParam2 + (-0.02400000 * 3), uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
    }
    if (GET_HOST_ID() == iParam0)
    {
        DRAW_SPRITE( l_U501[32], uParam2 + (-0.02400000 * 2), uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
    }
    if (NETWORK_PLAYER_HAS_HEADSET( iParam0 ))
    {
        if (NETWORK_IS_PLAYER_MUTED_BY_ME( iParam0 ))
        {
            DRAW_SPRITE( l_U501[8], uParam2 + -0.02400000, uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, uVar8, uVar9, uVar10, 255 );
        }
        else if (NETWORK_IS_PLAYER_TALKING( iParam0 ))
        {
            DRAW_SPRITE( l_U501[7], uParam2 + -0.02400000, uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
        }
        else
        {
            DRAW_SPRITE( l_U501[7], uParam2 + -0.02400000, uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, uVar8, uVar9, uVar10, 255 );
        }
    }
    if (bParam1)
    {
        DRAW_SPRITE( l_U501[28], uParam2, uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
    }
    else
    {
        DRAW_SPRITE( l_U501[12], uParam2, uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, uVar8, uVar9, uVar10, 255 );
    }
    return;
}

void sub_44356(int iParam0)
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
                    if (l_U889[I] == iParam0)
                    {
                        Result++;
                    }
                }
            }
        }
    }
    return Result;
}

void sub_46023()
{
    GET_NETWORK_TIMER( ref l_U1463 );
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        sub_46062();
        l_U1460 = 1;
    }
    return;
}

void sub_46062()
{
    if (l_U1441[17])
    {
        if ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -1580.10000000, 1.25000000, 8.10000000, 4.50000000, -1413798865 )) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 63965, 27.00000000, 10.00000000, 4.50000000, -1413798865 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1413798865, -1580.10000000, 1.25000000, 8.10000000, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1413798865, 63965, 27.00000000, 10.00000000, 1, 0.00000000 );
            l_U1441[17] = 1;
        }
    }
    if (NOT l_U1441[0])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1393._fU0, l_U1393._fU4, l_U1393._fU8, 1.50000000, 807349477 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U1393, 1, 0.00000000 );
            l_U1441[0] = 1;
        }
    }
    if (NOT l_U1441[1])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1396._fU0, l_U1396._fU4, l_U1396._fU8, 1.50000000, 419786306 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 419786306, l_U1396, 1, 0.00000000 );
            l_U1441[1] = 1;
        }
    }
    if (l_U1441[2])
    {
        if ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1399._fU0, l_U1399._fU4, l_U1399._fU8, 1.50000000, -1452339441 )) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 850.80000000, -517.80000000, 16.50000000, 1.50000000, 257820338 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, l_U1399, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 257820338, 850.80000000, -517.80000000, 16.50000000, 1, 0.00000000 );
            l_U1441[2] = 1;
        }
    }
    if (NOT l_U1441[2])
    {
        if ((((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1402._fU0, l_U1402._fU4, l_U1402._fU8, 1.50000000, -431164822 )) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -28.00000000, -466.00000000, 16.00000000, 1.50000000, 866127123 ))) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -28.00000000, -467.00000000, 16.00000000, 1.50000000, -431164822 ))) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -28.00000000, -470.00000000, 16.00000000, 1.50000000, 866127123 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -431164822, l_U1402, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 866127123, -28.00000000, -466.00000000, 16.00000000, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -431164822, -28.00000000, -467.00000000, 16.00000000, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 866127123, -28.00000000, -470.00000000, 16.00000000, 1, 0.00000000 );
            l_U1441[2] = 1;
        }
    }
    if (NOT l_U1441[4])
    {
        if ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1405._fU0, l_U1405._fU4, l_U1405._fU8, 1.50000000, -1452339441 )) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -1246.00000000, 1560.00000000, 26.00000000, 1.50000000, -1452339441 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, l_U1405, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, -1246.00000000, 1560.00000000, 26.00000000, 1, 0.00000000 );
            l_U1441[4] = 1;
        }
    }
    if (NOT l_U1441[5])
    {
        if ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1408._fU0, l_U1408._fU4, l_U1408._fU8, 1.50000000, -223135715 )) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -160.00000000, 593.00000000, 119.00000000, 1.50000000, -223135715 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -223135715, l_U1408, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -223135715, -160.00000000, 593.00000000, 119.00000000, 1, 0.00000000 );
            l_U1441[5] = 1;
        }
    }
    if (NOT l_U1441[5])
    {
        if ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1411._fU0, l_U1411._fU4, l_U1411._fU8, 1.50000000, -134192122 )) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 76, 64857, 15, 1.50000000, -602166187 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -134192122, l_U1411, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -602166187, 76, 64857, 15, 1, 0.00000000 );
            l_U1441[5] = 1;
        }
    }
    if (NOT l_U1441[7])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1414._fU0, l_U1414._fU4, l_U1414._fU8, 1.50000000, 804737190 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 804737190, l_U1414, 1, 0.00000000 );
            l_U1441[7] = 1;
        }
    }
    if (NOT l_U1441[8])
    {
        if ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1417._fU0, l_U1417._fU4, l_U1417._fU8, 1.50000000, 387699963 )) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 928, 65047, 16, 1.50000000, 387699963 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 387699963, l_U1417, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 387699963, 928, 65047, 16, 1, 0.00000000 );
            l_U1441[8] = 1;
        }
    }
    if (NOT l_U1441[9])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1420._fU0, l_U1420._fU4, l_U1420._fU8, 1.50000000, 807349477 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U1420, 1, 0.00000000 );
            l_U1441[9] = 1;
        }
    }
    if (NOT l_U1441[10])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 65439, 878, 15, 1.50000000, 419786306 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 419786306, 65439, 878, 15, 1, 0.00000000 );
            l_U1441[10] = 1;
        }
    }
    if (NOT l_U1441[11])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 64574, 893, 14, 1.50000000, 419786306 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 419786306, 64574, 893, 14, 0, 0.00000000 );
            l_U1441[11] = 1;
        }
    }
    if (NOT l_U1441[12])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 597, 1400, 12, 1.50000000, 261592072 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 261592072, 597, 1400, 12, 1, 0.00000000 );
            l_U1441[12] = 1;
        }
    }
    if (NOT l_U1441[13])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1432._fU0, l_U1432._fU4, l_U1432._fU8, 1.50000000, 1033979537 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1033979537, l_U1432, 1, 0.00000000 );
            l_U1441[13] = 1;
        }
    }
    if (NOT l_U1441[14])
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_5422(), l_U1435._fU0, l_U1435._fU4, l_U1435._fU8, 30.00000000, 30.00000000, 12.50000000, 0 ))
        {
            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1435._fU0, l_U1435._fU4, l_U1435._fU8, 4.50000000, 1135556036 ))
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1135556036, l_U1435, 1, 0.00000000 );
                l_U1441[14] = 1;
            }
        }
    }
    if (NOT l_U1441[15])
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_5422(), 1286.00000000, 400.00000000, 23.00000000, 30.00000000, 30.00000000, 12.50000000, 0 ))
        {
            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 1286, 400, 23, 4.50000000, -842872319 ))
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -842872319, 1286, 400, 23, 1, 0.00000000 );
                l_U1441[15] = 1;
            }
        }
    }
    return;
}

void sub_48582()
{
    unknown uVar2;

    switch (l_U2481)
    {
        case 0:
        UNPAUSE_GAME();
        if (l_U1829._fU1400)
        {
            DO_SCREEN_FADE_IN( 0 );
        }
        l_U2289 = l_U2206 + 15000;
        if (l_U1588[GET_PLAYER_ID()]._fU36)
        {
            if (IS_CHAR_DEAD( sub_5422() ))
            {
                sub_48726();
            }
            sub_48933( l_U1829._fU1288 );
        }
        sub_49986( 0 );
        l_U2481 = 1;
        break;
        case 1:
        sub_49986( 0 );
        CLEAR_BRIEF();
        CLEAR_PRINTS();
        SET_TEXT_DRAW_BEFORE_FADE( 0 );
        sub_67553();
        l_U2481 = 2;
        break;
        case 2:
        sub_49986( 0 );
        if (l_U1829._fU1300 == l_U1829._fU1264)
        {
            if (sub_67663( 2147483647, 1 ))
            {
                l_U1588[GET_PLAYER_ID()]._fU44 = 1;
            }
            if (sub_70572())
            {
                l_U2481 = 3;
            }
        }
        else
        {
            sub_70689( l_U2289 );
            l_U2481 = 3;
        }
        break;
        case 3:
        if (l_U1829._fU1300 < l_U1829._fU1264)
        {
            sub_70689( l_U2289 );
            if ((sub_49986( 1 )) || (l_U2289 < l_U2206))
            {
                if (((sub_3405( 0 )) == 0) || ((sub_3405( 1 )) == 0))
                {
                    if (sub_70572())
                    {
                        l_U2318 = 1;
                    }
                }
                else
                {
                    DO_SCREEN_FADE_OUT_UNHACKED( 500 );
                    l_U2481 = 4;
                }
            }
        }
        else if (((NETWORK_IS_TVT()) AND (sub_6398())) || (NETWORK_IS_RENDEZVOUS()))
        {
            sub_49986( 0 );
            SET_WIDESCREEN_FORMAT( 2 );
            sub_9507( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
            sub_15865( "RETURN_PARTY", sub_29082( 23 ), sub_29115( 23 ), sub_29082( 24 ), sub_29115( 24 ), 255, 255, 255, 255, 2 );
            if (NETWORK_IS_RENDEZVOUS_HOST())
            {
                sub_71252();
            }
        }
        else if ((sub_49986( 1 )) || (l_U2289 < l_U2206))
        {
            l_U2481 = 4;
            if (NOT l_U1829._fU1400)
            {
                DO_SCREEN_FADE_OUT_UNHACKED( 0 );
            }
        };;;
        break;
        case 4:
        if (NOT l_U1829._fU1400)
        {
            if (l_U1829._fU1300 < l_U1829._fU1264)
            {
                if (IS_SCREEN_FADED_OUT())
                {
                    if (sub_71442())
                    {
                        sub_71590();
                        if (l_U1829._fU1400)
                        {
                            l_U2318 = 1;
                        }
                        l_U1588[GET_PLAYER_ID()]._fU8 = 0;
                        l_U1588[GET_PLAYER_ID()]._fU32 = 0;
                        sub_71887();
                        l_U2481 = 0;
                    }
                }
            }
            else if (sub_71442())
            {
                sub_5839();
                if (l_U1829._fU1400)
                {
                    l_U2318 = 1;
                }
                CLEAR_AREA_OF_CARS( 0.00000000, 0.00000000, 0.00000000, 2000.00000000 );
                l_U1588[GET_PLAYER_ID()]._fU8 = 0;
                l_U1588[GET_PLAYER_ID()]._fU32 = 0;
                sub_71887();
                l_U2481 = 0;
            }
        }
        else if (l_U1829._fU1400)
        {
            l_U2318 = 1;
        }
        break;
    }
    return;
}

void sub_48726()
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if ((GET_PLAYER_TEAM( sub_5097() )) == 0)
        {
            REQUEST_COLLISION_AT_POSN( l_U1829._fU460._fU0, l_U1829._fU460._fU4, l_U1829._fU460._fU8 );
            RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), l_U1829._fU460, 0.00000000 );
        }
        else
        {
            REQUEST_COLLISION_AT_POSN( l_U1829._fU472._fU0, l_U1829._fU472._fU4, l_U1829._fU472._fU8 );
            RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), l_U1829._fU472, 0.00000000 );
        }
    }
    return;
}

void sub_48933(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    DISPLAY_HUD( 0 );
    DISPLAY_RADAR( 0 );
    uVar3 = {sub_48962( ref l_U2186 )};
    sub_28479( GET_PLAYER_ID(), 0 );
    return;
}

void sub_48962(unknown uParam0)
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
    GET_INTERIOR_FROM_CHAR( sub_5422(), ref iVar16 );
    if (iVar16 == nil)
    {
        if ((GET_CLOSEST_CAR_NODE_WITH_HEADING( Result._fU0, Result._fU4, Result._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8, ref fVar15 )) AND (sub_49136( Result, uVar8, 60.00000000 )))
        {
            Result = {uVar8};
            uVar11._fU8 = fVar15;
            Result._fU8 += 2.00000000;
            uVar11._fU0 = sub_49263( 0.00000000, 15.00000000 );
            uVar11._fU4 = 0.00000000;
            uVar11._fU8 += sub_49263( -20.00000000, 20.00000000 );
            fVar14 = 65.00000000;
        }
        else if ((GET_CLOSEST_NETWORK_RESTART_NODE( Result, ref uVar8, ref fVar15 )) AND (sub_49136( Result, uVar8, 60.00000000 )))
        {
            Result = {uVar8};
            uVar11._fU8 = fVar15;
            Result._fU8 += 2.00000000;
            uVar11._fU0 = sub_49263( 0.00000000, 15.00000000 );
            uVar11._fU4 = 0.00000000;
            uVar11._fU8 += sub_49263( -20.00000000, 20.00000000 );
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
        GET_KEY_FOR_CHAR_IN_ROOM( sub_5422(), ref iVar3 );
        if (iVar3 == 0)
        {
            CLEAR_ROOM_FOR_VIEWPORT( sub_49589() );
        }
        else
        {
            SET_ROOM_FOR_VIEWPORT_BY_KEY( sub_49589(), iVar3 );
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
    SET_CAM_ROT( (uParam0^), uVar11._fU0, uVar11._fU4, sub_49809( uVar11._fU8 ) );
    SET_CAM_FOV( (uParam0^), fVar14 );
    SET_CAM_FAR_CLIP( (uParam0^), 2000.00000000 );
    SET_CAM_ACTIVE( (uParam0^), 1 );
    SET_CAM_PROPAGATE( (uParam0^), 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    return Result;
}

int sub_49136(vector vParam0, vector vParam3, float fParam6)
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

void sub_49263(unknown uParam0, unknown Result)
{
    GENERATE_RANDOM_FLOAT_IN_RANGE( uParam0, Result, ref Result );
    return Result;
}

void sub_49589()
{
    unknown Result;

    GET_GAME_VIEWPORT_ID( ref Result );
    return Result;
}

void sub_49809(float Result)
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

void sub_49986(unknown uParam0)
{
    int I;
    int iVar4;
    unknown[16] uVar5;

    array(ref uVar5, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar5[I] = l_U1588[I]._fU20;
    }
    if (NOT l_U967[GET_PLAYER_ID()])
    {
        if (l_U1829._fU1300 == l_U1829._fU1264)
        {
            return sub_50107( 7, ref uVar5, ref l_U1829._fU1276, l_U1829._fU1296, uParam0, 0, 0, 0 );
        }
        else if (sub_67067() > 1)
        {
            return sub_50107( 7, ref uVar5, ref l_U1829._fU1276, l_U1829._fU1296, uParam0, l_U1829._fU1300, 0, 0 );
        }
        else
        {
            return sub_50107( 6, ref uVar5, ref l_U1829._fU1276, l_U1829._fU1296, uParam0, 0, 0, 0 );
        }
    }
    else if (l_U1829._fU0 < 8)
    {
        if (l_U1829._fU1300 == 0)
        {
            iVar4 = 1;
        }
        else
        {
            iVar4 = l_U1829._fU1300 + 1;
        }
        return sub_50107( 7, ref uVar5, ref l_U1829._fU1276, l_U1829._fU1296, uParam0, iVar4, 0, 0 );
    }
    else if (l_U1829._fU1300 == l_U1829._fU1264)
    {
        return sub_50107( 7, ref uVar5, ref l_U1829._fU1276, l_U1829._fU1296, uParam0, 0, 0, 0 );
    }
    else if (sub_67067() > 1)
    {
        return sub_50107( 7, ref uVar5, ref l_U1829._fU1276, l_U1829._fU1296, uParam0, l_U1829._fU1300, 0, 0 );
    }
    else
    {
        return sub_50107( 6, ref uVar5, ref l_U1829._fU1276, l_U1829._fU1296, uParam0, 0, 0, 0 );
    };;;;
    return sub_50107( 7, ref uVar5, ref l_U1829._fU1276, l_U1829._fU1296, uParam0, 0, 0, 0 );
}

int sub_50107(int iParam0, unknown uParam1, unknown uParam2, int iParam3, boolean bParam4, int iParam5, boolean bParam6, unknown uParam7)
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
    sub_6781();
    if (IS_PAUSE_MENU_ACTIVE())
    {
        DEACTIVATE_FRONTEND();
    }
    DISABLE_PAUSE_MENU( 1 );
    HIDE_HUD_AND_RADAR_THIS_FRAME();
    CLEAR_PRINTS();
    if (l_U867)
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
            if (sub_13270())
            {
                if ((GET_PLAYER_TEAM( sub_5097() )) == -1)
                {
                    SET_PLAYER_TEAM( sub_5097(), sub_22576() );
                }
            }
            else if (sub_13104())
            {
                if ((GET_PLAYER_TEAM( sub_5097() )) == -1)
                {
                    SET_PLAYER_TEAM( sub_5097(), sub_23116( 2 ) );
                }
                else if (sub_17680() < 2)
                {
                    if ((sub_13166( GET_PLAYER_TEAM( sub_5097() ) )) > 1)
                    {
                        if (sub_23530( GET_PLAYER_ID() ))
                        {
                            SET_PLAYER_TEAM( sub_5097(), sub_23116( 2 ) );
                        }
                    }
                }
            }
            else if (sub_12781())
            {
                if ((GET_PLAYER_TEAM( sub_5097() )) != 0)
                {
                    SET_PLAYER_TEAM( sub_5097(), 0 );
                }
            }
            else if ((GET_PLAYER_TEAM( sub_5097() )) != -1)
            {
                SET_PLAYER_TEAM( sub_5097(), -1 );
            };;;;
        }
        if (sub_2128())
        {
            sub_6570( uParam1, uParam2 );
            sub_2590();
        }
    }
    bVar38 = false;
    if (iParam3 != 0)
    {
        sub_9471( iParam3, 1 );
        bVar38 = true;
    }
    else if ((uParam2^) != 0)
    {
        if (NOT l_U1268)
        {
            sub_9471( (uParam2^), 0 );
            GET_NETWORK_TIMER( ref iVar19 );
            bVar38 = true;
            if ((uParam2^) < (iVar19 - 10000))
            {
                l_U1268 = 1;
                return 1;
            }
        }
    }
    else
    {
        l_U1183 = 10000;
    }
    if (l_U1201)
    {
        if (l_U1267)
        {
            SET_LOBBY_MUTE_OVERRIDE( 0 );
            l_U1267 = 0;
        }
        if (sub_24195())
        {
            l_U1201 = 0;
        }
        sub_23876();
        return 0;
    }
    if (((sub_12849()) || (sub_12781())) || (sub_3785() == 10))
    {
        if ((bParam4) || (l_U868))
        {
            if (sub_50761())
            {
                sub_50788();
            }
            l_U867 = 0;
        }
        else if (sub_51358())
        {
            if (l_U867)
            {
                l_U1266 = -1;
            }
            else if (l_U1266 == 0)
            {
                GET_NETWORK_TIMER( ref l_U1266 );
            }
            else if (l_U1266 != -1)
            {
                GET_NETWORK_TIMER( ref iVar19 );
                if ((l_U1266 < (iVar19 - 6000)) AND (NOT IS_SCREEN_FADING()))
                {
                    l_U1266 = -1;
                    l_U867 = 1;
                }
            };;;
            if ((sub_3785() == 7) || (sub_3785() == 6))
            {
                sub_52223( 2, l_U867 );
            }
            else
            {
                sub_52223( 1, l_U867 );
            }
            if (l_U867)
            {
                sub_55721( 1 );
                INIT_FRONTEND_HELPER_TEXT();
                DRAW_FRONTEND_HELPER_TEXT( "BACK", "INPUT_F_CANCEL", 0 );
                if (sub_56092())
                {
                    DRAW_FRONTEND_HELPER_TEXT( "CAMERA", "PAD_BACK", 0 );
                    DRAW_FRONTEND_HELPER_TEXT( "SELECT_PLAYER", "PAD_LSTICK_LR", 1 );
                    if (l_U888 < 3)
                    {
                        DRAW_FRONTEND_HELPER_TEXT( "SPEC_RADIO", "PAD_DPAD_LR", 0 );
                        sub_56274();
                    }
                    sub_56589();
                }
                if (sub_10475())
                {
                    l_U867 = 0;
                }
                return 0;
            }
        }
        else
        {
            l_U867 = 0;
        }
    }
    if (IS_HELP_MESSAGE_BEING_DISPLAYED())
    {
        CLEAR_HELP();
    }
    if (l_U865)
    {
        if (l_U1267)
        {
            SET_LOBBY_MUTE_OVERRIDE( 0 );
            l_U1267 = 0;
        }
        if (sub_10475())
        {
            l_U865 = 0;
        }
        else if (sub_11132())
        {
            if (NOT NETWORK_IS_OPERATION_PENDING())
            {
                UNPAUSE_GAME();
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    sub_8397( 0 );
                }
                sub_21481();
            }
        }
        if (l_U865)
        {
            SET_WIDESCREEN_FORMAT( 0 );
            DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
            SET_WIDESCREEN_FORMAT( 1 );
            sub_9507( 0, sub_15805(), sub_21626(), 0, 0, 0, 0, 0, 255 );
            GET_HUD_COLOUR( 49, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
            if (bParam4)
            {
                sub_15865( "WANT_TO_LEAVE", sub_29082( 106 ), sub_29115( 106 ), sub_29082( 107 ), sub_29115( 107 ), uVar15, uVar16, uVar17, 255, 1 );
            }
            else if (((sub_6398()) AND (sub_12849())) || (NOT sub_12849()))
            {
                sub_15865( "WANTTOLEAVEIG", sub_29082( 106 ), sub_29115( 106 ), sub_29082( 107 ), sub_29115( 107 ), uVar15, uVar16, uVar17, 255, 1 );
            }
            else
            {
                sub_15865( "WANTTOLEAVERACE", sub_29082( 106 ), sub_29115( 106 ), sub_29082( 107 ), sub_29115( 107 ), uVar15, uVar16, uVar17, 255, 1 );
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
            sub_23876();
            return 0;
        }
    }
    if (NOT l_U1267)
    {
        SET_LOBBY_MUTE_OVERRIDE( 1 );
        l_U1267 = 1;
    }
    if (sub_6398())
    {
        if (((sub_58105() == 1) || ((sub_58253() == 1) AND ((iParam0 == 7) || (l_U863)))) || ((sub_4287( GET_PLAYER_ID() )) AND (sub_4726() == 1)))
        {
            sub_55721( 0 );
        }
        else
        {
            sub_55721( 1 );
        }
    }
    else
    {
        sub_55721( 1 );
    }
    sub_23876();
    SET_WIDESCREEN_FORMAT( 1 );
    if ((iParam0 == 7) || (l_U863))
    {
        if (sub_58618())
        {
            bVar20 = true;
        }
        else
        {
            bVar20 = false;
        }
    }
    else if (sub_58745())
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
        if ((sub_58105() == 1) || ((sub_4287( GET_PLAYER_ID() )) AND (sub_4726() == 1)))
        {
            sub_9507( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
            GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
            sub_15865( "LAST_PLAYER_IN", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
            if ((sub_6398()) AND (N_604003528()))
            {
                SET_WIDESCREEN_FORMAT( 2 );
                sub_9507( 0, 0.00000000, sub_21626(), 0, 0, 0, 0, 0, 255 );
                GET_HUD_COLOUR( 56, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                if (GET_IS_WIDESCREEN())
                {
                    sub_15865( "NOT_COUNT_RANK", sub_15805() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, uVar15, uVar16, uVar17, 255, 2 );
                }
                else
                {
                    sub_15865( "NOT_COUNT_RANK", sub_15805() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, uVar15, uVar16, uVar17, 255, 2 );
                }
                SET_WIDESCREEN_FORMAT( 1 );
            }
        }
        else if (NOT (sub_4287( GET_PLAYER_ID() )))
        {
            if (iParam0 == 8)
            {
                sub_9507( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                if (bParam6)
                {
                    GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                    sub_15865( "MISSION_PASSED", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                }
                else
                {
                    GET_HUD_COLOUR( 4, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                    sub_15865( "MISSION_FAILED", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                }
            }
            else
            {
                sub_9507( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                if (bVar20)
                {
                    if ((iParam0 == 7) || (l_U863))
                    {
                        if (sub_58253() == 1)
                        {
                            GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                            sub_15865( "LAST_TEAM_IN", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                            if ((sub_6398()) AND (N_604003528()))
                            {
                                SET_WIDESCREEN_FORMAT( 2 );
                                sub_9507( 0, 0.00000000, sub_21626(), 0, 0, 0, 0, 0, 255 );
                                GET_HUD_COLOUR( 56, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                                if (GET_IS_WIDESCREEN())
                                {
                                    sub_15865( "NOT_COUNT_RANK", sub_15805() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, uVar15, uVar16, uVar17, 255, 2 );
                                }
                                else
                                {
                                    sub_15865( "NOT_COUNT_RANK", sub_15805() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, uVar15, uVar16, uVar17, 255, 2 );
                                }
                            }
                            SET_WIDESCREEN_FORMAT( 1 );
                        }
                        else
                        {
                            GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                            sub_15865( "EQUAL", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                        }
                    }
                    else
                    {
                        GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                        sub_15865( "EQUAL", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                    }
                }
                else if ((iParam0 == 7) || (l_U863))
                {
                    if (NOT l_U866)
                    {
                        if (sub_60026( l_U932[0] ))
                        {
                            GET_TEAM_RGB_COLOUR( GET_PLAYER_TEAM( sub_5097() ), ref uVar15, ref uVar16, ref uVar17 );
                            if ((sub_60161( GET_PLAYER_TEAM( sub_5097() ) )) == 1)
                            {
                                StrCopy( ref cVar30, GET_STRING_FROM_TEXT_FILE( sub_60374( GET_PLAYER_TEAM( sub_5097() ), 1 ) ), 32 );
                                ConcatString(ref cVar30, " ", 32);
                                ConcatString(ref cVar30, GET_STRING_FROM_TEXT_FILE( "JOINTWINNER" ), 32);
                                sub_24874( 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, ref cVar30 );
                            }
                            else if (sub_60026( GET_PLAYER_TEAM( sub_5097() ) ))
                            {
                                StrCopy( ref cVar30, GET_STRING_FROM_TEXT_FILE( sub_60374( GET_PLAYER_TEAM( sub_5097() ), 1 ) ), 32 );
                                ConcatString(ref cVar30, " ", 32);
                                ConcatString(ref cVar30, GET_STRING_FROM_TEXT_FILE( "JOINT" ), 32);
                                ConcatString(ref cVar30, " ", 32);
                                ConcatString(ref cVar30, sub_60161( GET_PLAYER_TEAM( sub_5097() ) ), 32);
                                ConcatString(ref cVar30, sub_56915( sub_60161( GET_PLAYER_TEAM( sub_5097() ) ), 1 ), 32);
                                sub_24874( 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, ref cVar30 );
                            }
                            else
                            {
                                StrCopy( ref cVar30, GET_STRING_FROM_TEXT_FILE( sub_60374( GET_PLAYER_TEAM( sub_5097() ), 1 ) ), 32 );
                                ConcatString(ref cVar30, " ", 32);
                                ConcatString(ref cVar30, sub_60161( GET_PLAYER_TEAM( sub_5097() ) ), 32);
                                ConcatString(ref cVar30, sub_56915( sub_60161( GET_PLAYER_TEAM( sub_5097() ) ), 1 ), 32);
                                ConcatString(ref cVar30, " ", 32);
                                ConcatString(ref cVar30, GET_STRING_FROM_TEXT_FILE( "PLACE" ), 32);
                                sub_24874( 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, ref cVar30 );
                            }
                        }
                        else
                        {
                            GET_TEAM_RGB_COLOUR( l_U932[0], ref uVar15, ref uVar16, ref uVar17 );
                            sub_62138( "TEAMNAME_WINS", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, sub_60374( l_U932[0], 0 ) );
                        }
                    }
                }
                else if (sub_4202( GET_PLAYER_ID() ))
                {
                    if ((sub_4156( GET_PLAYER_ID() )) == 1)
                    {
                        GET_HUD_COLOUR( 16, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                        sub_15865( "JOINTWINNER", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                    }
                    else
                    {
                        GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                        StrCopy( ref cVar30, GET_STRING_FROM_TEXT_FILE( "JOINT" ), 32 );
                        ConcatString(ref cVar30, " ", 32);
                        ConcatString(ref cVar30, sub_4156( GET_PLAYER_ID() ), 32);
                        ConcatString(ref cVar30, sub_56915( sub_4156( GET_PLAYER_ID() ), 1 ), 32);
                        sub_24874( 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, ref cVar30 );
                    }
                }
                else if ((sub_4156( GET_PLAYER_ID() )) == 1)
                {
                    GET_HUD_COLOUR( 16, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                    sub_15865( "WINNERS", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                }
                else
                {
                    GET_HUD_COLOUR( 4, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                    string(ref cVar30, sub_4156( GET_PLAYER_ID() ), 32);
                    ConcatString(ref cVar30, sub_56915( sub_4156( GET_PLAYER_ID() ), 1 ), 32);
                    ConcatString(ref cVar30, " ", 32);
                    ConcatString(ref cVar30, GET_STRING_FROM_TEXT_FILE( "PLACE" ), 32);
                    sub_24874( 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, ref cVar30 );
                };;;;
            }
        }
    }
    else if (NOT sub_12781())
    {
        sub_9507( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
        GET_HUD_COLOUR( 4, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
        sub_9804( "ROUND_NUM", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, iParam5 );
    }
    for ( I = 0; I < 16; I++ )
    {
        if (sub_4235( l_U564[0]._fU24[I] ))
        {
            iVar13++;
        }
    }
    if ((iParam0 == 7) || (l_U863))
    {
        for ( J = 0; J < 8; J++ )
        {
            if ((sub_43696( l_U932[J] )) > 0)
            {
                iVar13++;
            }
        }
    }
    if (iVar13 > 10)
    {
        sub_12231( ref l_U987, (iVar13 - 10) + 1, 0 );
        bVar21 = true;
        iVar14 = iVar13;
        iVar13 = 10;
    }
    fVar28 = 0.00500000 * 2;
    for ( iVar11 = 0; iVar11 < 7; iVar11++ )
    {
        if (l_U564[iVar11]._fU16 != 0)
        {
            fVar28 += sub_40883( l_U564[iVar11]._fU16 );
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
        if (l_U564[iVar11]._fU16 != 0)
        {
            if (l_U564[iVar11]._fU16 == 1)
            {
                if (GET_IS_WIDESCREEN())
                {
                    fVar24 = 0.01050000;
                }
                else
                {
                    fVar24 = 0.01100000;
                }
                DRAW_SPRITE( l_U501[l_U564[iVar11]._fU20], fVar26 + fVar24, fVar27 + -0.02370000, (fVar22 / 4) * 3, fVar22, 0.00000000, 255, 255, 255, 255 );
                fVar26 += sub_40883( 1 );
            }
            else
            {
                fVar26 += (sub_40883( l_U564[iVar11]._fU16 )) * 0.50000000;
                DRAW_SPRITE( l_U501[l_U564[iVar11]._fU20], fVar26, fVar27 + -0.02370000, (fVar22 / 4) * 3, fVar22, 0.00000000, 255, 255, 255, 255 );
                fVar26 += (sub_40883( l_U564[iVar11]._fU16 )) * 0.50000000;
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
        if ((iParam0 == 7) || (l_U863))
        {
            sub_63645( ref iVar39, fVar26 + 0.00500000, fVar27 + 0.00400000, 0.36000000, 0.52500000, 0.04000000, 0.36000000, 0.52500000, 0.04000000, iParam0, 10, l_U987, -1 );
        }
        else
        {
            sub_65095( ref iVar39, fVar26 + 0.00500000, fVar27 + 0.00400000, 0.36000000, 0.52500000, 0.04000000, iParam0, 10, l_U987, -1 );
        }
    }
    else if ((iParam0 == 7) || (l_U863))
    {
        sub_63645( ref iVar39, fVar26 + 0.00500000, fVar27 + 0.00600000, 0.31300000, 0.47000000, 0.04000000, 0.31300000, 0.47000000, 0.04000000, iParam0, 10, l_U987, -1 );
    }
    else
    {
        sub_65095( ref iVar39, fVar26 + 0.00500000, fVar27 + 0.00600000, 0.31300000, 0.47000000, 0.04000000, iParam0, 10, l_U987, -1 );
    }
    if ((bParam4) AND (iParam5 == 0))
    {
        if ((sub_6398()) || (NOT N_604003528()))
        {
            if (NOT bVar38)
            {
                SET_WIDESCREEN_FORMAT( 2 );
                GET_FRONTEND_DESIGN_VALUE( 23, ref fVar24, ref fVar25 );
                GET_FRONTEND_DESIGN_VALUE( 24, ref fVar22, ref fVar23 );
                sub_9507( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                if ((l_U1159[GET_PLAYER_ID()] > -1) AND (l_U1159[GET_PLAYER_ID()] < (GET_PLAYER_RANK_LEVEL_DURING_MP( GET_PLAYER_ID() ))))
                {
                    sub_15865( "RANK_INCREASED", fVar24, fVar25, fVar22, fVar23, 255, 255, 255, 255, 2 );
                    sub_9507( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                    sub_15865( "NEWCLOTHESAVAIL", fVar24, fVar25 + 0.04050000, fVar22, fVar23, 255, 255, 255, 255, 2 );
                }
                else if ((GET_PLAYER_RANK_LEVEL_DURING_MP( GET_PLAYER_ID() )) < 10)
                {
                    sub_9804( "CASH_LEVELUP", fVar24, fVar25, fVar22, fVar23, 255, 255, 255, 255, 2, GET_LEFT_PLAYER_CASH_TO_REACH_LEVEL( (GET_PLAYER_RANK_LEVEL_DURING_MP( GET_PLAYER_ID() )) + 1 ) );
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
        if (l_U987 == 0)
        {
            DRAW_SPRITE( l_U501[1], fVar26 + fVar22, (fVar27 + ((TO_FLOAT( iVar13 )) * 0.04000000)) + 0.02300000, fVar24, fVar25, 180.00000000, 255, 255, 255, 255 );
        }
        else if (l_U987 == (iVar14 - 10))
        {
            DRAW_SPRITE( l_U501[1], fVar26 + fVar22, (fVar27 + ((TO_FLOAT( iVar13 )) * 0.04000000)) + 0.02300000, fVar24, fVar25, 0.00000000, 255, 255, 255, 255 );
        }
        else
        {
            DRAW_SPRITE( l_U501[2], fVar26 + fVar22, (fVar27 + ((TO_FLOAT( iVar13 )) * 0.04000000)) + 0.02300000, fVar24, fVar25, 0.00000000, 255, 255, 255, 255 );
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
        if (sub_11132())
        {
            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_READY" );
            l_U1201 = 0;
            l_U987 = 0;
            return 1;
        }
        else if (sub_10475())
        {
            l_U865 = 1;
        }
        else if (((sub_11890()) AND (NETWORK_GET_NUM_PLAYERS_MET() > 0)) AND (N_604003528()))
        {
            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
            l_U1201 = 1;
        };;;
    }
    else
    {
        INIT_FRONTEND_HELPER_TEXT();
        if (NOT l_U868)
        {
            DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
        }
        if (NOT IS_SCREEN_FADING())
        {
            if ((((((sub_12849()) || (sub_12781())) || (sub_3785() == 10)) AND (NOT l_U868)) AND (NOT IS_SCREEN_FADING())) AND (sub_51358()))
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
        if ((sub_10475()) AND (NOT l_U868))
        {
            l_U865 = 1;
        }
        else if (((((sub_11132()) AND (((sub_12849()) || (sub_12781())) || (sub_3785() == 10))) AND (NOT l_U868)) AND (NOT IS_SCREEN_FADING())) AND (sub_51358()))
        {
            l_U867 = 1;
        }
        else if ((((sub_11890()) AND (NETWORK_GET_NUM_PLAYERS_MET() > 0)) AND (N_604003528())) AND (NOT IS_SCREEN_FADING()))
        {
            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
            l_U1201 = 1;
        };;;
    }
    l_U868 = 0;
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

void sub_50761()
{
    return l_U1208;
}

void sub_50788()
{
    sub_50799( 0, 1 );
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    sub_51138();
    sub_51183();
    sub_51266();
    l_U1207 = 0;
    l_U1206 = 0;
    l_U1208 = 0;
    l_U1219 = 0;
    l_U1222 = 18;
    sub_8496( 0 );
    return;
}

void sub_50799(boolean bParam0, boolean bParam1)
{
    if (bParam1)
    {
        if (IS_IN_SPECTATOR_MODE())
        {
            SET_IN_SPECTATOR_MODE( 0 );
            if (NOT (DOES_CAM_EXIST( l_U1244 )))
            {
                CREATE_CAM( 6, ref l_U1244 );
            }
            if (DOES_CAM_EXIST( l_U1244 ))
            {
                GET_GAME_CAM( ref l_U1245 );
                GET_CAM_POS( l_U1245, ref l_U1233._fU0, ref l_U1233._fU4, ref l_U1233._fU8 );
                GET_CAM_ROT( l_U1245, ref l_U1236._fU0, ref l_U1236._fU4, ref l_U1236._fU8 );
                GET_CAM_FOV( l_U1245, ref l_U1239 );
                SET_CAM_POS( l_U1244, l_U1233._fU0, l_U1233._fU4, l_U1233._fU8 );
                SET_CAM_ROT( l_U1244, l_U1236._fU0, l_U1236._fU4, l_U1236._fU8 );
                SET_CAM_FOV( l_U1244, l_U1239 );
                SET_CAM_ACTIVE( l_U1244, 1 );
                SET_CAM_PROPAGATE( l_U1244, 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            }
        }
        l_U1207 = 0;
    }
    SET_CAMERA_CONTROLS_DISABLED_WITH_PLAYER_CONTROLS( 1 );
    ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
    if (bParam0)
    {
        sub_8496( 0 );
    }
    return;
}

void sub_51138()
{
    SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY( 0 );
    if (IS_MOBILE_PHONE_RADIO_ACTIVE())
    {
        SET_MOBILE_PHONE_RADIO_STATE( 0 );
    }
    return;
}

void sub_51183()
{
    l_U1209 = 0;
    l_U1210 = 1;
    l_U1211 = 0;
    l_U1213 = 0;
    l_U1214 = 0;
    l_U1215 = 0;
    l_U1216 = 0;
    l_U1217 = 0;
    l_U1218 = 0;
    l_U1220 = -1;
    l_U1221 = -1;
    return;
}

void sub_51266()
{
    l_U1212 = 0;
    SET_FOLLOW_VEHICLE_CAM_SUBMODE( -1 );
    l_U1246 = -1;
    return;
}

int sub_51358()
{
    if (NOT (l_U1207 == 4))
    {
        if (NOT sub_51380())
        {
            return 1;
        }
        else if (NOT (l_U1206 == 0))
        {
            sub_50799( 0, 1 );
            l_U1207 = 4;
        }
    }
    else if (l_U1214)
    {
        sub_51660();
    }
    else if (l_U1219)
    {
        if (NOT sub_51380())
        {
            l_U1206 = 0;
            l_U1219 = 0;
            sub_51183();
            if (IS_IN_SPECTATOR_MODE())
            {
                SET_IN_SPECTATOR_MODE( 0 );
            }
            l_U1207 = 0;
        }
    };;;
    return 0;
}

int sub_51380()
{
    int I;

    for ( I = 0; I <= 15; I++ )
    {
        if (sub_51403( I ))
        {
            return 0;
        }
    }
    return 1;
}

int sub_51403(int iParam0)
{
    if ((iParam0 >= 0) AND (iParam0 < 16))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( iParam0 ))
        {
            if (NOT (iParam0 == GET_PLAYER_ID()))
            {
                if ((NOT (IS_CHAR_INJURED( sub_28507( iParam0 ) ))) || ((iParam0 == l_U1220) AND (NOT l_U1218)))
                {
                    if ((NOT l_U950[iParam0]) AND (NOT l_U967[iParam0]))
                    {
                        if ((IS_PLAYER_SCRIPT_CONTROL_ON( CONVERT_INT_TO_PLAYERINDEX( iParam0 ) )) || ((IS_CHAR_IN_ANY_CAR( sub_28507( iParam0 ) )) AND (l_U1206 == 2)))
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

void sub_51660()
{
    if (NOT l_U1215)
    {
        if (NOT l_U1216)
        {
            if (DOES_CAM_EXIST( l_U1244 ))
            {
                if ((NOT IS_SCREEN_FADED_OUT()) AND (NOT IS_SCREEN_FADING()))
                {
                    sub_8397( 200 );
                }
                else if (NOT (IS_CHAR_DEAD( sub_5422() )))
                {
                    SET_CHAR_COORDINATES( sub_5422(), l_U1240._fU0, l_U1240._fU4, l_U1240._fU8 );
                    if (DOES_CAM_EXIST( l_U1244 ))
                    {
                        DESTROY_CAM( l_U1244 );
                    }
                    ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 0 );
                    if (IS_NETWORK_GAME_RUNNING())
                    {
                        GET_NETWORK_TIMER( ref l_U1227 );
                    }
                    l_U1226 = l_U1227 + 5000;
                    l_U1215 = 1;
                }
            }
            else
            {
                l_U1216 = 1;
            }
        }
    }
    else if (IS_NETWORK_GAME_RUNNING())
    {
        GET_NETWORK_TIMER( ref l_U1227 );
    }
    if (l_U1226 < l_U1227)
    {
        ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
        sub_8496( 200 );
        l_U1215 = 0;
        l_U1216 = 1;
    }
    if (l_U1216)
    {
        if ((NOT sub_51380()) AND (IS_SCREEN_FADED_IN()))
        {
            l_U1207 = 0;
            sub_51183();
        }
    }
    return;
}

void sub_52223(unknown uParam0, boolean bParam1)
{
    float fVar4;
    unknown uVar5;

    if (IS_NETWORK_GAME_RUNNING())
    {
        GET_NETWORK_TIMER( ref l_U1227 );
    }
    if (NOT l_U1208)
    {
        l_U1208 = 1;
    }
    if (l_U1206 == 0)
    {
        if (DOES_CAM_EXIST( l_U1244 ))
        {
            DESTROY_CAM( l_U1244 );
        }
        l_U1206 = uParam0;
    }
    if (NOT l_U1212)
    {
        GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref l_U1246 );
        if ((NOT (l_U1246 == -1)) AND (NOT (l_U1246 == 0)))
        {
            l_U1212 = 1;
            SET_FOLLOW_VEHICLE_CAM_SUBMODE( 5 );
        }
    }
    if (l_U1211)
    {
        sub_52388();
        if (NOT bParam1)
        {
            sub_50799( 1, 0 );
            l_U1211 = 0;
        }
    }
    else if (bParam1)
    {
        l_U1211 = 1;
        if (IS_IN_SPECTATOR_MODE())
        {
            l_U1207 = 2;
            sub_52709();
        }
        else if (l_U1210)
        {
            sub_52787();
            l_U1221 = -1;
            if (NOT (l_U1220 == -1))
            {
                fVar4 = sub_52841( sub_5422(), sub_28507( l_U1220 ) );
                if ((((fVar4 < 30) AND (NOT (fVar4 == -1))) AND (NOT IS_SCREEN_FADING())) AND (NOT (IS_CHAR_DEAD( sub_5422() ))))
                {
                    sub_52709();
                    if (NOT sub_53118())
                    {
                        ;
                    }
                    sub_53305();
                    l_U1207 = 2;
                    l_U1210 = 0;
                }
            }
            else
            {
                l_U1207 = 4;
            }
        }
    }
    switch (l_U1207)
    {
        case 0:
        if (l_U1211)
        {
            if ((IS_SCREEN_FADED_IN()) || (IS_SCREEN_FADED_OUT()))
            {
                if (IS_SCREEN_FADED_IN())
                {
                    sub_8397( 200 );
                }
                l_U1209 = 0;
                l_U1207 = 1;
            }
        }
        break;
        case 1:
        if (IS_SCREEN_FADED_OUT())
        {
            if (NOT l_U1209)
            {
                if (NOT l_U1210)
                {
                    if (NOT (l_U1221 == -1))
                    {
                        if (sub_51403( l_U1221 ))
                        {
                            l_U1220 = l_U1221;
                            l_U1221 = -1;
                        }
                        else
                        {
                            sub_52787();
                        }
                    }
                    else if (NOT (sub_51403( l_U1220 )))
                    {
                        sub_52787();
                    }
                }
                else if (NOT (sub_51403( l_U1221 )))
                {
                    sub_52787();
                }
                if (NOT sub_53118())
                {
                    ;
                }
                sub_52709();
                if (l_U1210)
                {
                    sub_53305();
                    l_U1210 = 0;
                }
                ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 0 );
                l_U1209 = 1;
                l_U1226 = l_U1227 + 5000;
            }
            else if (NOT sub_53776())
            {
                if (l_U1211)
                {
                    l_U1220 = sub_53829();
                    if (NOT sub_53118())
                    {
                        ;
                    }
                    l_U1226 = l_U1227 + 5000;
                }
                else
                {
                    sub_50799( 1, 1 );
                }
            }
            else
            {
                sub_54378();
                if (((GET_NUM_STREAMING_REQUESTS() < 5) AND (NOT IS_STREAMING_PRIORITY_REQUESTS())) || (l_U1226 < l_U1227))
                {
                    if (NOT sub_53118())
                    {
                        ;
                    }
                    ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
                    l_U1207 = 2;
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    sub_8496( 200 );
                }
                else if ((NOT IS_SCREEN_FADING()) AND (l_U1211))
                {
                    sub_54378();
                    sub_54689( 1 );
                }
            }
        }
        break;
        case 2:
        sub_53118();
        if (NOT sub_53776())
        {
            if (l_U1211)
            {
                l_U1221 = sub_53829();
                if (l_U1221 != -1)
                {
                    if ((sub_52841( sub_5422(), sub_28507( l_U1221 ) )) < 30)
                    {
                        l_U1220 = l_U1221;
                        if (NOT sub_53118())
                        {
                            ;
                        }
                        l_U1221 = -1;
                    }
                    else
                    {
                        sub_50799( 0, 1 );
                    }
                }
            }
            else
            {
                sub_50799( 1, 1 );
            }
        }
        else if (IS_NETWORK_PLAYER_ACTIVE( l_U1220 ))
        {
            if (IS_CHAR_INJURED( sub_28507( l_U1220 ) ))
            {
                if (NOT l_U1217)
                {
                    l_U1228 = l_U1227 + 6000;
                    l_U1217 = 1;
                }
                else if (l_U1228 < l_U1227)
                {
                    l_U1217 = 0;
                    l_U1218 = 1;
                }
            }
        }
        sub_54378();
        if (l_U1211)
        {
            if (NOT IS_SCREEN_FADING())
            {
                sub_54689( 0 );
            }
        }
        break;
    }
    return;
}

void sub_52388()
{
    boolean bVar2;

    bVar2 = false;
    if (IS_BUTTON_JUST_PRESSED( 0, 11 ))
    {
        l_U1222++;
        if (l_U1222 > 18)
        {
            l_U1222 = 0;
        }
        bVar2 = true;
    }
    if (IS_BUTTON_JUST_PRESSED( 0, 10 ))
    {
        l_U1222--;
        if (l_U1222 < 0)
        {
            l_U1222 = 18;
        }
        RETUNE_RADIO_TO_STATION_INDEX( l_U1222 );
        bVar2 = true;
    }
    if (l_U888 < 3)
    {
        if (bVar2)
        {
            if (l_U1222 != 18)
            {
                if (NOT IS_MOBILE_PHONE_RADIO_ACTIVE())
                {
                    SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY( 1 );
                    SET_MOBILE_PHONE_RADIO_STATE( 1 );
                }
                RETUNE_RADIO_TO_STATION_INDEX( l_U1222 );
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

void sub_52709()
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

int sub_52787()
{
    int I;
    int iVar3;
    float fVar4;
    float fVar5;

    iVar3 = -1;
    fVar4 = 10000;
    for ( I = 0; I <= 15; I++ )
    {
        if (sub_51403( I ))
        {
            fVar5 = sub_52841( sub_5422(), sub_28507( I ) );
            if ((fVar5 < fVar4) AND (NOT (fVar5 == -1)))
            {
                iVar3 = I;
                fVar4 = fVar5;
            }
        }
    }
    if (NOT (iVar3 == -1))
    {
        l_U1220 = iVar3;
        return 1;
    }
    return 0;
}

float sub_52841(unknown uParam0, unknown uParam1)
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

int sub_53118()
{
    if ((l_U1220 >= 0) AND (l_U1220 < 16))
    {
        if ((l_U1220 < 16) AND (l_U1220 != GET_PLAYER_ID()))
        {
            if (IS_NETWORK_PLAYER_ACTIVE( l_U1220 ))
            {
                if (DOES_CHAR_EXIST( sub_28507( l_U1220 ) ))
                {
                    if (NOT (IS_CHAR_INJURED( sub_28507( l_U1220 ) )))
                    {
                        l_U1217 = 0;
                        l_U1218 = 0;
                        l_U1246 = 1;
                        GET_GAME_CAM( ref l_U1243 );
                        SET_CAM_TARGET_PED( l_U1243, sub_28507( l_U1220 ) );
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_53305()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_CHAR_DEAD( sub_5422() ))
    {
        N_312012851( sub_5422(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        REQUEST_COLLISION_AT_POSN( uVar2._fU0, uVar2._fU4, uVar2._fU8 );
        RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), uVar2, 0 );
    }
    SET_CHAR_COLLISION( sub_5422(), 0 );
    SET_CHAR_VISIBLE( sub_5422(), 0 );
    FREEZE_CHAR_POSITION( sub_5422(), 1 );
    return;
}

int sub_53776()
{
    unknown uVar2;

    if (sub_51403( l_U1220 ))
    {
        return 1;
    }
    return 0;
}

int sub_53829()
{
    int Result;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    boolean bVar7;

    if (NOT (l_U1206 == 2))
    {
        for ( Result = l_U1220; Result <= 15; Result++ )
        {
            if (sub_53869( Result ))
            {
                return Result;
            }
        }
        for ( Result = 0; Result <= l_U1220; Result++ )
        {
            if (sub_53869( Result ))
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
            if (l_U564[0]._fU24[Result] == l_U1220)
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
                if (sub_53869( l_U564[0]._fU24[iVar6] ))
                {
                    return l_U564[0]._fU24[iVar6];
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

int sub_53869(int iParam0)
{
    if ((iParam0 >= 0) AND (iParam0 < 16))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( iParam0 ))
        {
            if (NOT (iParam0 == GET_PLAYER_ID()))
            {
                if ((NOT (IS_CHAR_INJURED( sub_28507( iParam0 ) ))) AND (NOT (iParam0 == l_U1220)))
                {
                    if ((NOT l_U950[iParam0]) AND (NOT l_U967[iParam0]))
                    {
                        if ((IS_PLAYER_SCRIPT_CONTROL_ON( CONVERT_INT_TO_PLAYERINDEX( iParam0 ) )) || ((IS_CHAR_IN_ANY_CAR( sub_28507( iParam0 ) )) AND (l_U1206 == 2)))
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

void sub_54378()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_NETWORK_PLAYER_ACTIVE( l_U1220 ))
    {
        if (NOT (IS_CHAR_INJURED( sub_28507( l_U1220 ) )))
        {
            GET_CHAR_COORDINATES( sub_28507( l_U1220 ), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            if (NOT (IS_CHAR_DEAD( sub_5422() )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_5422() )))
                {
                    SET_CHAR_COORDINATES( sub_5422(), uVar2._fU0, uVar2._fU4, uVar2._fU8 - 10 );
                }
                else
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_5422(), uVar2._fU0, uVar2._fU4, uVar2._fU8 - 10 );
                }
            }
            SET_CHAR_COLLISION( sub_5422(), 0 );
            SET_CHAR_VISIBLE( sub_5422(), 0 );
        }
    }
    return;
}

void sub_54689(boolean bParam0)
{
    float fVar3;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref l_U1223, ref l_U1225, ref l_U1224, ref l_U1225 );
    if (l_U1213)
    {
        if ((l_U1223 < 80) AND (l_U1223 > 65456))
        {
            l_U1213 = 0;
        }
    }
    else if (l_U1223 > 80)
    {
        l_U1221 = sub_53829();
        if (NOT (l_U1221 == -1))
        {
            fVar3 = sub_52841( sub_5422(), sub_28507( l_U1221 ) );
            if (((fVar3 < 30) AND (NOT (fVar3 == -1))) || (bParam0))
            {
                l_U1220 = l_U1221;
                if (NOT sub_53118())
                {
                    ;
                }
                l_U1221 = -1;
                if (bParam0)
                {
                    l_U1226 = l_U1227 + 5000;
                }
            }
            else
            {
                sub_50799( 0, 1 );
            }
            l_U1213 = 1;
        }
    }
    else if (l_U1223 < 65456)
    {
        l_U1221 = sub_54931();
        if (NOT (l_U1221 == -1))
        {
            fVar3 = sub_52841( sub_5422(), sub_28507( l_U1221 ) );
            if (((fVar3 < 30) AND (NOT (fVar3 == -1))) || (bParam0))
            {
                l_U1220 = l_U1221;
                if (NOT sub_53118())
                {
                    ;
                }
                l_U1221 = -1;
                if (bParam0)
                {
                    l_U1226 = l_U1227 + 5000;
                }
            }
            else
            {
                sub_50799( 0, 1 );
            }
            l_U1213 = 1;
        }
    };;;
    return;
}

int sub_54931()
{
    int Result;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    boolean bVar7;

    if (NOT (l_U1206 == 2))
    {
        for ( Result = l_U1220; Result >= 0; Result += -1 )
        {
            if (sub_53869( Result ))
            {
                return Result;
            }
        }
        for ( Result = 15; Result >= l_U1220; Result += -1 )
        {
            if (sub_53869( Result ))
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
            if (l_U564[0]._fU24[Result] == l_U1220)
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
                if (sub_53869( l_U564[0]._fU24[iVar6] ))
                {
                    return l_U564[0]._fU24[iVar6];
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

void sub_55721(unknown uParam0)
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
    sub_15722( uParam0 );
    return;
}

int sub_56092()
{
    if (((l_U1211) AND (IS_IN_SPECTATOR_MODE())) AND (l_U1220 > -1))
    {
        if (sub_53776())
        {
            return 1;
        }
        return 0;
    }
    return 0;
}

void sub_56274()
{
    char[16] cVar2;
    unknown uVar6;

    SET_WIDESCREEN_FORMAT( 3 );
    DRAW_SPRITE( l_U501[0], sub_21626() - (0.01400000 / 2), l_U1232 - (0.02000000 / 2), 0.01400000, 0.02000000, 0.00000000, 255, 255, 255, 255 );
    SET_TEXT_SCALE( 0.31500000, 0.43000000 );
    sub_9507( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    StrCopy( ref cVar2, "RADIO_OPT", 16 );
    ConcatString(ref cVar2, l_U1222, 16);
    uVar6 = GET_STRING_WIDTH( ref cVar2 );
    sub_15865( ref cVar2, (sub_21626() - 0.01400000) - l_U1231, l_U1232 + l_U1230, 0.31500000, 0.43000000, 255, 255, 255, 255, 3 );
    DRAW_SPRITE( l_U501[0], ((sub_21626() - (0.01400000 * 1.50000000)) - uVar6) - (l_U1231 * 2), l_U1232 - (0.02000000 / 2), 0.01400000 * -1, 0.02000000, 0.00000000, 255, 255, 255, 255 );
    return;
}

void sub_56589()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    char[32] cVar7;
    unknown uVar15;

    SET_WIDESCREEN_FORMAT( 3 );
    DRAW_SPRITE( l_U501[0], sub_21626() - (0.01400000 / 2), l_U1229 - (0.02000000 / 2), 0.01400000, 0.02000000, 0.00000000, 255, 255, 255, 255 );
    SET_TEXT_SCALE( 0.31500000, 0.43000000 );
    sub_9507( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    if (NOT (l_U1206 == 2))
    {
        StrCopy( ref cVar7, sub_56730(), 32 );
    }
    else
    {
        string(ref cVar7, sub_56798( l_U1220 ), 32);
        ConcatString(ref cVar7, sub_56915( sub_56798( l_U1220 ), 0 ), 32);
        ConcatString(ref cVar7, " : ", 32);
        ConcatString(ref cVar7, sub_56730(), 32);
    }
    SET_TEXT_USE_UNDERSCORE( 1 );
    uVar15 = GET_STRING_WIDTH_WITH_STRING( "STRING", ref cVar7 );
    sub_57165( ref uVar2, ref uVar3, ref uVar4 );
    SET_TEXT_COLOUR( uVar2, uVar3, uVar4, 255 );
    sub_24874( (sub_21626() - 0.01400000) - l_U1231, l_U1229 + l_U1230, 0.31500000, 0.43000000, uVar2, uVar3, uVar4, 255, 3, ref cVar7 );
    SET_TEXT_USE_UNDERSCORE( 0 );
    DRAW_SPRITE( l_U501[0], ((sub_21626() - (0.01400000 * 1.50000000)) - uVar15) - (l_U1231 * 2), l_U1229 - (0.02000000 / 2), 0.01400000 * -1, 0.02000000, 0.00000000, 255, 255, 255, 255 );
    return;
}

string sub_56730()
{
    if (sub_51403( l_U1220 ))
    {
        return GET_PLAYER_NAME( sub_3442( l_U1220 ) );
    }
    return "";
}

int sub_56798(int iParam0)
{
    int I;
    int iVar4;
    int Result;

    for ( I = 0; I < 16; I++ )
    {
        iVar4 = l_U564[0]._fU24[I];
        if ((IS_NETWORK_PLAYER_ACTIVE( iVar4 )) AND (NOT l_U950[iVar4]))
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

void sub_56915(int iParam0, boolean bParam1)
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

void sub_57165(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (sub_51403( l_U1220 ))
    {
        if (l_U1206 == 1)
        {
            GET_TEAM_RGB_COLOUR( GET_PLAYER_TEAM( sub_3442( l_U1220 ) ), uParam0, uParam1, uParam2 );
        }
        else
        {
            GET_PLAYER_RGB_COLOUR( sub_3442( l_U1220 ), uParam0, uParam1, uParam2 );
        }
    }
    return;
}

void sub_58105()
{
    int I;
    int Result;

    if (l_U862)
    {
        for ( I = 0; I < 16; I++ )
        {
            if ((l_U733[I]._fU4) AND (NOT l_U733[I]._fU8))
            {
                Result++;
            }
        }
        return Result;
    }
    for ( I = 0; I < 16; I++ )
    {
        if ((IS_NETWORK_PLAYER_ACTIVE( I )) AND (NOT l_U950[I]))
        {
            Result++;
        }
    }
    return Result;
}

void sub_58253()
{
    int I;
    int Result;
    int[8] iVar4;

    array(ref iVar4, 8);
    if (l_U862)
    {
        for ( I = 0; I < 16; I++ )
        {
            if ((l_U733[I]._fU4) AND (NOT l_U733[I]._fU8))
            {
                if (l_U733[I]._fU12 > -1)
                {
                    if (NOT iVar4[l_U733[I]._fU12])
                    {
                        Result++;
                        iVar4[l_U733[I]._fU12] = 1;
                    }
                }
            }
        }
        return Result;
    }
    for ( I = 0; I < 16; I++ )
    {
        if ((IS_NETWORK_PLAYER_ACTIVE( I )) AND (NOT l_U950[I]))
        {
            if ((GET_PLAYER_TEAM( sub_3442( I ) )) > -1)
            {
                if (NOT (iVar4[GET_PLAYER_TEAM( sub_3442( I ) )]))
                {
                    Result++;
                    iVar4[GET_PLAYER_TEAM( sub_3442( I ) )] = 1;
                }
            }
        }
    }
    return Result;
}

int sub_58618()
{
    int I;
    int iVar3;

    iVar3 = -1;
    for ( I = 0; I < 8; I++ )
    {
        if ((sub_43696( I )) > 0)
        {
            if (iVar3 == -1)
            {
                iVar3 = l_U941[I];
            }
            else if (iVar3 != l_U941[I])
            {
                return 0;
            }
        }
    }
    return 1;
}

int sub_58745()
{
    int I;
    int iVar3;

    iVar3 = -1;
    for ( I = 0; I < 16; I++ )
    {
        if (sub_4235( I ))
        {
            if (NOT (sub_4287( I )))
            {
                if (iVar3 == -1)
                {
                    iVar3 = l_U564[sub_4347()]._fU24[I];
                }
                else if (iVar3 != l_U564[sub_4347()]._fU24[I])
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}

int sub_60026(int iParam0)
{
    int I;

    for ( I = 0; I < 8; I++ )
    {
        if (I != iParam0)
        {
            if ((sub_43696( I )) > 0)
            {
                if (l_U941[I] == l_U941[iParam0])
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_60161(int iParam0)
{
    int I;
    int Result;

    if (sub_60026( iParam0 ))
    {
        for ( I = 0; I < 8; I++ )
        {
            if ((sub_43696( l_U932[I] )) > 0)
            {
                Result++;
                if (l_U941[l_U932[I]] == l_U941[iParam0])
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
            if ((sub_43696( l_U932[I] )) > 0)
            {
                Result++;
                if (l_U932[I] == iParam0)
                {
                    return Result;
                }
            }
        }
    }
    return 1;
}

string sub_60374(int iParam0, boolean bParam1)
{
    int I;
    int iVar5;

    if (l_U1204)
    {
        if (l_U1205 == 0)
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
        else if (l_U1205 == 1)
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
            if ((sub_43696( I )) > 0)
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
            if ((sub_43696( I )) > 0)
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

void sub_62138(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_9844( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_STRING( uParam0, uParam10 );
    DISPLAY_TEXT_WITH_STRING( uParam1, uParam2, uParam0, uParam10 );
    return Result;
}

void sub_63645(unknown uParam0, unknown uParam1, float fParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, int iParam9, int iParam10, int iParam11, unknown uParam12)
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
        if ((sub_43696( l_U932[iVar16] )) > 0)
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
                    if (((uParam0^)[I] == sub_4347()) || ((uParam0^)[I] == 0))
                    {
                        if (l_U564[(uParam0^)[I]]._fU16 > 0)
                        {
                            GET_TEAM_RGB_COLOUR( l_U932[iVar16], ref uVar18, ref uVar19, ref uVar20 );
                            if ((iParam9 == 6) || (iParam9 == 7))
                            {
                                sub_9507( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                                iVar22 = 1;
                            }
                            else
                            {
                                sub_9507( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                                iVar22 = 3;
                            }
                            if (l_U564[(uParam0^)[I]]._fU16 != 1)
                            {
                                if ((iParam9 == 6) || (iParam9 == 7))
                                {
                                    fVar23 += (sub_40883( l_U564[(uParam0^)[I]]._fU16 )) * 0.50000000;
                                }
                            }
                            switch (l_U564[(uParam0^)[I]]._fU16)
                            {
                                case 1:
                                if ((iParam9 == 6) || (iParam9 == 7))
                                {
                                    sub_9507( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                                    sub_15865( sub_60374( l_U932[iVar16], 1 ), fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, 2 );
                                    fVar23 += (sub_40883( l_U564[(uParam0^)[I]]._fU16 )) - uVar24;
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
                                sub_15865( sub_60374( l_U932[iVar16], 1 ), fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, 2 );;
                                iVar21++;
                                break;
                                case 2:
                                case 7:
                                sub_10129( fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, iVar22, l_U941[l_U932[iVar16]] );
                                iVar21++;
                                break;
                                case 3:
                                if (l_U941[l_U932[iVar16]] > 0)
                                {
                                    sub_43205( fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, iVar22, l_U923[l_U932[iVar16]] + 1 );
                                }
                                iVar21++;
                                break;
                                case 4:
                                if (l_U941[l_U932[iVar16]] < 5940000)
                                {
                                    sub_35250( fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, iVar22, l_U941[l_U932[iVar16]], 1.00000000 );
                                }
                                iVar21++;
                                break;
                                case 5:
                                case 6:
                                sub_9804( "CASH", fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, iVar22, l_U941[l_U932[iVar16]] );
                                iVar21++;
                                break;
                            }
                            if (l_U564[(uParam0^)[I]]._fU16 != 1)
                            {
                                if ((iParam9 == 6) || (iParam9 == 7))
                                {
                                    fVar23 += (sub_40883( l_U564[(uParam0^)[I]]._fU16 )) * 0.50000000;
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
                        fVar23 += sub_40883( 2 );
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
                            if ((sub_4726() + sub_17680()) > 22)
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
                if (sub_4235( l_U564[0]._fU24[J] ))
                {
                    if ((sub_43573( l_U564[0]._fU24[J] )) == l_U932[iVar16])
                    {
                        if ((iVar25 >= iParam11) AND (iVar25 < (iParam11 + iParam10)))
                        {
                            sub_40491( l_U564[0]._fU24[J], uParam0, uParam1, ref fParam2, uParam6, uParam7, uParam8, iParam9, 0 );
                        }
                        iVar25++;
                    }
                }
            }
        }
    }
    return;
}

void sub_65095(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7, int iParam8, unknown uParam9)
{
    int I;
    int iVar13;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_4235( l_U564[0]._fU24[I] ))
        {
            if ((iVar13 >= iParam8) AND (iVar13 < (iParam8 + iParam7)))
            {
                sub_40491( l_U564[0]._fU24[I], uParam0, uParam1, ref uParam2, uParam3, uParam4, uParam5, uParam6, 0 );
            }
            iVar13++;
        }
    }
    return;
}

void sub_67067()
{
    int Result;
    int I;

    for ( I = 0; I <= 15; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1588[I]._fU36)
            {
                Result++;
            }
        }
    }
    return Result;
}

void sub_67553()
{
    NETWORK_SET_TALKER_FOCUS( -1 );
    sub_67572( 31, 0 );
    return;
}

void sub_67572(unknown uParam0, unknown uParam1)
{
    g_U18._fU636 = uParam0;
    g_U18._fU632 = uParam1;
    return;
}

int sub_67663(int iParam0, boolean bParam1)
{
    int J;
    int iVar5;
    int I;
    int iVar7;
    int[16] iVar8;

    array(ref iVar8, 16);
    l_U868 = 1;
    if (l_U864)
    {
        if (NOT NETWORK_END_SESSION_PENDING())
        {
            l_U864 = 0;
            return 1;
        }
    }
    else if (NETWORK_START_SESSION_SUCCEEDED())
    {
        if (NOT l_U950[GET_PLAYER_ID()])
        {
            if (sub_58105() > 1)
            {
                if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
                {
                    if ((sub_13104()) || (sub_13270()))
                    {
                        if (NOT sub_58618())
                        {
                            if (((GET_PLAYER_TEAM( sub_5097() )) == l_U932[0]) || ((l_U941[GET_PLAYER_TEAM( sub_5097() )]) == l_U941[l_U932[0]]))
                            {
                                REGISTER_MULTIPLAYER_GAME_WIN( GET_PLAYER_ID(), 0 );
                            }
                        }
                    }
                    else if (sub_12781())
                    {
                        if (bParam1)
                        {
                            REGISTER_MULTIPLAYER_GAME_WIN( GET_PLAYER_ID(), iParam0 );
                        }
                    }
                    else if ((sub_4191( GET_PLAYER_ID() )) == 1)
                    {
                        if (NOT sub_58745())
                        {
                            REGISTER_MULTIPLAYER_GAME_WIN( GET_PLAYER_ID(), 0 );
                        }
                    };;;
                }
            }
            if (NOT sub_12849())
            {
                for ( J = 0; J < 16; J++ )
                {
                    iVar8[J] = 1;
                    if (IS_NETWORK_PLAYER_ACTIVE( J ))
                    {
                        if (NOT l_U950[J])
                        {
                            for ( I = 0; I < 7; I++ )
                            {
                                switch (l_U564[I]._fU92)
                                {
                                    case 20:
                                    if ((sub_13104()) || (sub_13270()))
                                    {
                                        if (sub_3785() != 1)
                                        {
                                            l_U564[I]._fU24[J] = (l_U941[sub_43573( J )]) / (sub_43696( sub_43573( J ) ));
                                        }
                                    }
                                    iVar8[J] += l_U564[I]._fU24[J] * 10000;
                                    break;
                                    case 3:
                                    case 5:
                                    case 7:
                                    case 8:
                                    iVar8[J] += l_U564[I]._fU24[J];
                                    break;
                                    case 4:
                                    iVar8[J] -= l_U564[I]._fU24[J];
                                    break;
                                    case 6:
                                    iVar8[J] -= l_U564[I]._fU24[J] * 2;
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
                        if (NOT l_U950[J])
                        {
                            REGISTER_NETWORK_BEST_GAME_SCORES( J, 24, iVar8[J] );
                            if (sub_12781())
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
                        if (NOT l_U950[J])
                        {
                            if (sub_12781())
                            {
                                UPDATE_NETWORK_STATISTICS( J, 24, iVar8[J], -1 );
                                UPDATE_NETWORK_STATISTICS( J, 25, iParam0 * -1, -1 );
                            }
                            else
                            {
                                UPDATE_NETWORK_STATISTICS( J, 24, iVar8[J], GET_PLAYER_TEAM( sub_3442( J ) ) );
                            }
                        }
                    }
                }
            }
            for ( J = 0; J < 16; J++ )
            {
                if (IS_NETWORK_PLAYER_ACTIVE( J ))
                {
                    if (NOT l_U950[J])
                    {
                        if ((sub_13104()) || (sub_13270()))
                        {
                            UPDATE_NETWORK_STATISTICS( J, 0, 1, GET_PLAYER_TEAM( sub_3442( J ) ) );
                            if (((sub_58618()) || (sub_58105() < 2)) || (sub_58253() < 2))
                            {
                                UPDATE_NETWORK_STATISTICS( J, 1, 0, GET_PLAYER_TEAM( sub_3442( J ) ) );
                            }
                            else if (((GET_PLAYER_TEAM( sub_3442( J ) )) == l_U932[0]) || ((l_U941[GET_PLAYER_TEAM( sub_3442( J ) )]) == l_U941[l_U932[0]]))
                            {
                                UPDATE_NETWORK_STATISTICS( J, 1, 1, GET_PLAYER_TEAM( sub_3442( J ) ) );
                            }
                            else
                            {
                                UPDATE_NETWORK_STATISTICS( J, 1, 0, GET_PLAYER_TEAM( sub_3442( J ) ) );
                            }
                        }
                        else
                        {
                            UPDATE_NETWORK_STATISTICS( J, 0, 1, -1 );
                            if (sub_12781())
                            {
                                if ((((sub_4191( J )) == 1) AND (sub_58105() > 1)) AND (NOT sub_58745()))
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
                            else if ((((sub_4191( J )) == 1) AND (sub_58105() > 1)) AND (NOT sub_58745()))
                            {
                                UPDATE_NETWORK_STATISTICS( J, 1, 1, GET_PLAYER_TEAM( sub_3442( J ) ) );
                            }
                            else
                            {
                                UPDATE_NETWORK_STATISTICS( J, 1, 0, GET_PLAYER_TEAM( sub_3442( J ) ) );
                            }
                        }
                    }
                }
            }
            if (sub_58105() > 1)
            {
                if ((sub_13104()) || (sub_13270()))
                {
                    if (sub_58253() > 1)
                    {
                        iVar7 = sub_58253() - 1;
                        I = iVar7;
                        for ( iVar5 = 0; iVar5 < 8; iVar5++ )
                        {
                            if ((sub_43696( l_U932[iVar5] )) > 0)
                            {
                                for ( J = 0; J < 16; J++ )
                                {
                                    if (IS_NETWORK_PLAYER_ACTIVE( J ))
                                    {
                                        if ((GET_PLAYER_TEAM( sub_3442( J ) )) == l_U932[iVar5])
                                        {
                                            if (NOT l_U950[J])
                                            {
                                                UPDATE_NETWORK_RELATIVE_SCORE( J, iVar7, GET_PLAYER_TEAM( sub_3442( J ) ) );
                                            }
                                        }
                                    }
                                }
                                I--;
                                if ((iVar5 + 1) < 8)
                                {
                                    if (l_U941[l_U932[iVar5]] != (l_U941[l_U932[iVar5 + 1]]))
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
                    iVar7 = sub_58105() - 1;
                    I = iVar7;
                    for ( J = 0; J < 16; J++ )
                    {
                        if (IS_NETWORK_PLAYER_ACTIVE( l_U564[0]._fU24[J] ))
                        {
                            if (NOT l_U950[l_U564[0]._fU24[J]])
                            {
                                UPDATE_NETWORK_RELATIVE_SCORE( l_U564[0]._fU24[J], iVar7, -1 );
                                I--;
                                if ((J + 1) < 16)
                                {
                                    if (l_U564[sub_4347()]._fU24[l_U564[0]._fU24[J]] != (l_U564[sub_4347()]._fU24[l_U564[0]._fU24[J + 1]]))
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
                if (((((l_U564[I]._fU16 != 0) AND (l_U564[I]._fU16 != 1)) AND (l_U564[I]._fU92 != -1)) AND (l_U564[I]._fU92 != -2)) AND (l_U564[I]._fU92 != -3))
                {
                    for ( J = 0; J < 16; J++ )
                    {
                        if (IS_NETWORK_PLAYER_ACTIVE( J ))
                        {
                            if (NOT l_U950[J])
                            {
                                if (sub_12781())
                                {
                                    UPDATE_NETWORK_STATISTICS( J, l_U564[I]._fU92, l_U564[I]._fU24[J], -1 );
                                }
                                else
                                {
                                    UPDATE_NETWORK_STATISTICS( J, l_U564[I]._fU92, l_U564[I]._fU24[J], GET_PLAYER_TEAM( sub_3442( J ) ) );
                                }
                            }
                        }
                    }
                }
            }
            if (sub_12781())
            {
                if ((iParam0 != 2147483647) AND (iParam0 != 0))
                {
                    for ( J = 0; J < 16; J++ )
                    {
                        if (IS_NETWORK_PLAYER_ACTIVE( J ))
                        {
                            if (NOT l_U950[J])
                            {
                                UPDATE_NETWORK_STATISTICS( J, 22, iParam0, -1 );
                            }
                        }
                    }
                }
            }
            if (sub_12849())
            {
                for ( I = 0; I < 7; I++ )
                {
                    if (l_U564[I]._fU92 == 23)
                    {
                        for ( J = 0; J < 16; J++ )
                        {
                            if (IS_NETWORK_PLAYER_ACTIVE( J ))
                            {
                                if (NOT l_U950[J])
                                {
                                    UPDATE_NETWORK_STATISTICS( J, 24, l_U564[I]._fU24[J] * -1, GET_PLAYER_TEAM( sub_3442( J ) ) );
                                }
                            }
                        }
                    }
                }
            }
            if ((sub_13104()) || (sub_13270()))
            {
                for ( J = 0; J < 16; J++ )
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( J ))
                    {
                        if ((GET_PLAYER_TEAM( sub_3442( J ) )) > -1)
                        {
                            if (NOT l_U950[J])
                            {
                                UPDATE_NETWORK_STATISTICS( J, 21, l_U941[GET_PLAYER_TEAM( sub_3442( J ) )], GET_PLAYER_TEAM( sub_3442( J ) ) );
                            }
                        }
                    }
                }
            }
        }
        if ((sub_13104()) || (sub_13270()))
        {
            l_U863 = 1;
        }
        else
        {
            l_U863 = 0;
        }
        for ( J = 0; J < 16; J++ )
        {
            if (IS_NETWORK_PLAYER_ACTIVE( J ))
            {
                l_U733[J]._fU4 = 1;
                l_U733[J]._fU0 = GET_PLAYER_NAME( sub_3442( J ) );
                l_U733[J]._fU12 = GET_PLAYER_TEAM( sub_3442( J ) );
                sub_30820( sub_3442( J ), ref l_U733[J]._fU20, ref l_U733[J]._fU24, ref l_U733[J]._fU28 );
                l_U733[J]._fU16 = sub_4191( J );
                l_U733[J]._fU8 = l_U950[J];
            }
            else
            {
                l_U733[J]._fU4 = 0;
                l_U733[J]._fU0 = "";
                l_U733[J]._fU12 = 0;
                l_U733[J]._fU16 = 0;
                l_U733[J]._fU20 = 0;
                l_U733[J]._fU24 = 0;
                l_U733[J]._fU28 = 0;
                l_U733[J]._fU8 = 0;
            }
        }
        l_U862 = 1;
        NETWORK_END_SESSION();
        l_U864 = 1;
    }
    return 0;
}

int sub_70572()
{
    int I;

    for ( I = 0; I <= 15; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1588[I]._fU36)
            {
                if (NOT l_U1588[I]._fU44)
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}

void sub_70689(int iParam0)
{
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    SET_WIDESCREEN_FORMAT( 2 );
    sub_9507( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    GET_FRONTEND_DESIGN_VALUE( 23, ref uVar8, ref uVar9 );
    GET_FRONTEND_DESIGN_VALUE( 24, ref uVar10, ref uVar11 );
    GET_HUD_COLOUR( 49, ref uVar4, ref uVar5, ref uVar6, ref uVar7 );
    if ((NOT NETWORK_END_SESSION_PENDING()) AND (IS_NETWORK_SESSION()))
    {
        GET_NETWORK_TIMER( ref iVar3 );
    }
    if (sub_4726() > 1)
    {
        if ((iParam0 - iVar3) > 0)
        {
            sub_9804( "STARTING_IN", uVar8, uVar9, uVar10, uVar11, 255, 255, 255, 255, 2, ((iParam0 - iVar3) / 1000) + 1 );
            if (((l_U1829._fU1296 - iVar3) + 1000) <= l_U1183)
            {
                l_U1183 -= 1000;
            }
        }
        else
        {
            sub_9804( "STARTING_IN", uVar8, uVar9, uVar10, uVar11, 255, 255, 255, 255, 2, 1 );
        }
    }
    SET_WIDESCREEN_FORMAT( 3 );
    return;
}

void sub_71252()
{
    int iVar2;

    GET_NETWORK_TIMER( ref iVar2 );
    if (l_U5 == 0)
    {
        GET_NETWORK_TIMER( ref l_U5 );
    }
    else if (l_U5 < (iVar2 - 25000))
    {
        l_U5 = 0;
        g_U11 = 1;
        sub_20811();
    }
    return;
}

int sub_71442()
{
    int I;

    for ( I = 0; I <= 15; I++ )
    {
        if (DOES_BLIP_EXIST( l_U2188[I] ))
        {
            REMOVE_BLIP( l_U2188[I] );
            SET_NETWORK_PLAYER_AS_VIP( I, 0 );
        }
    }
    if (DOES_BLIP_EXIST( l_U2205 ))
    {
        REMOVE_BLIP( l_U2205 );
    }
    l_U1588[GET_PLAYER_ID()]._fU8 = 0;
    I = 0;
    l_U2183 = 0;
    return 1;
}

void sub_71590()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    if (IS_SCREEN_FADED_IN())
    {
        SET_WIDESCREEN_FORMAT( 0 );
        GET_FRONTEND_DESIGN_VALUE( 0, ref uVar4, ref uVar5 );
        sub_55721( 1 );
        GET_FRONTEND_DESIGN_VALUE( 22, ref uVar4, ref uVar5 );
        SET_WIDESCREEN_FORMAT( 2 );
        sub_9507( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
        if (sub_4726() > 1)
        {
            sub_15865( "WAITING_round", sub_29082( 23 ), sub_29115( 23 ), sub_29082( 24 ), sub_29115( 24 ), 255, 255, 255, 255, 2 );
        }
    }
    else if (NOT IS_SCREEN_FADING_IN())
    {
        DO_SCREEN_FADE_IN( 100 );
    }
    else
    {
        SET_WIDESCREEN_FORMAT( 0 );
        GET_FRONTEND_DESIGN_VALUE( 0, ref uVar4, ref uVar5 );
        sub_55721( 1 );
        GET_FRONTEND_DESIGN_VALUE( 22, ref uVar4, ref uVar5 );
        SET_WIDESCREEN_FORMAT( 2 );
    }
    return;
}

void sub_71887()
{
    l_U2183 = 0;
    l_U2184 = 0;
    l_U2214 = 0;
    l_U2183 = 0;
    l_U2184 = 0;
    DISPLAY_HUD( 0 );
    DISPLAY_RADAR( 0 );
    SET_WIDESCREEN_BORDERS( 0 );
    l_U2481 = 0;
    l_U2212 = 0;
    l_U2213 = 0;
    l_U1588[GET_PLAYER_ID()]._fU12 = 0;
    return;
}

int sub_72160(int iParam0)
{
    if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( iParam0 ))
    {
        if (iParam0 != nil)
        {
            if ((IS_VEH_DRIVEABLE( sub_72195( iParam0 ) )) || (NOT (IS_CAR_DEAD( sub_72195( iParam0 ) ))))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_72195(unknown uParam0)
{
    unknown Result;

    GET_VEHICLE_FROM_NETWORK_ID( uParam0, ref Result );
    return Result;
}

void sub_72342()
{
    if (sub_2128())
    {
        sub_72361();
        sub_73984();
        sub_76824();
        sub_2590();
    }
    return;
}

int sub_72361()
{
    int I;
    int iVar3;

    iVar3 = -1;
    for ( I = 0; I <= 15; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1829._fU0 == 6)
            {
                iVar3 = GET_CHAR_MONEY( sub_28507( I ) );
                if ((GET_PLAYER_TEAM( sub_3442( I ) )) > -1)
                {
                    l_U1829._fU1228[GET_PLAYER_TEAM( sub_3442( I ) )] += iVar3;
                    l_U1829._fU1240[GET_PLAYER_TEAM( sub_3442( I ) )] += iVar3;
                    l_U1829._fU1024[I] += iVar3;
                }
                SET_CHAR_MONEY( sub_28507( I ), 0 );
            }
            else if (l_U1829._fU0 < 6)
            {
                SET_CHAR_MONEY( sub_28507( I ), 0 );
            }
            if (NETWORK_PLAYER_HAS_DIED_RECENTLY( I ))
            {
                l_U1829._fU8[I]._fU4++;
                l_U1829._fU8[I]._fU20++;
                if ((FIND_NETWORK_KILLER_OF_PLAYER( I )) != I)
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( FIND_NETWORK_KILLER_OF_PLAYER( I ) ))
                    {
                        if ((GET_PLAYER_TEAM( sub_3442( FIND_NETWORK_KILLER_OF_PLAYER( I ) ) )) != (GET_PLAYER_TEAM( sub_3442( I ) )))
                        {
                            l_U1829._fU8[FIND_NETWORK_KILLER_OF_PLAYER( I )]._fU0++;
                            l_U1829._fU8[FIND_NETWORK_KILLER_OF_PLAYER( I )]._fU16++;
                            l_U1829._fU1024[FIND_NETWORK_KILLER_OF_PLAYER( I )] += 100;
                            l_U1829._fU1240[GET_PLAYER_TEAM( sub_3442( FIND_NETWORK_KILLER_OF_PLAYER( I ) ) )] += 100;
                            l_U1829._fU1228[GET_PLAYER_TEAM( sub_3442( FIND_NETWORK_KILLER_OF_PLAYER( I ) ) )] += 100;
                        }
                        else
                        {
                            l_U1829._fU8[FIND_NETWORK_KILLER_OF_PLAYER( I )]._fU12++;
                            l_U1829._fU8[FIND_NETWORK_KILLER_OF_PLAYER( I )]._fU24++;
                            if ((l_U1829._fU1024[FIND_NETWORK_KILLER_OF_PLAYER( I )]) >= 100)
                            {
                                l_U1829._fU1024[FIND_NETWORK_KILLER_OF_PLAYER( I )] -= 100;
                                l_U1829._fU1240[GET_PLAYER_TEAM( sub_3442( FIND_NETWORK_KILLER_OF_PLAYER( I ) ) )] -= 100;
                                l_U1829._fU1228[GET_PLAYER_TEAM( sub_3442( FIND_NETWORK_KILLER_OF_PLAYER( I ) ) )] -= 100;
                            }
                        }
                    }
                }
                else if ((FIND_NETWORK_KILLER_OF_PLAYER( I )) == I)
                {
                    l_U1829._fU8[I]._fU8++;
                    if ((l_U1829._fU1240[GET_PLAYER_TEAM( sub_3442( FIND_NETWORK_KILLER_OF_PLAYER( I ) ) )]) > 100)
                    {
                        l_U1829._fU1240[GET_PLAYER_TEAM( sub_3442( FIND_NETWORK_KILLER_OF_PLAYER( I ) ) )] -= 100;
                        l_U1829._fU1024[I] -= 100;
                    }
                    if ((l_U1829._fU1228[GET_PLAYER_TEAM( sub_3442( FIND_NETWORK_KILLER_OF_PLAYER( I ) ) )]) > 100)
                    {
                        l_U1829._fU1228[GET_PLAYER_TEAM( sub_3442( FIND_NETWORK_KILLER_OF_PLAYER( I ) ) )] -= 100;
                    }
                }
            }
            if (l_U1829._fU528[2] == 0)
            {
                if ((sub_73663( 0 )) || (sub_73663( 1 )))
                {
                    l_U1829._fU1396 = 1;
                }
            }
        }
        else if (PLAYER_WANTS_TO_JOIN_NETWORK_GAME( I ))
        {
            iVar3 = sub_23116( 2 );
            l_U1829._fU8[I]._fU0 = 0;
            l_U1829._fU8[I]._fU4 = 0;
            l_U1829._fU8[I]._fU8 = 0;
            l_U1829._fU8[I]._fU12 = 0;
            l_U1829._fU956[I] = 0;
            if (iVar3 == 0)
            {
                TELL_NET_PLAYER_TO_START_PLAYING( I, 0 );
                l_U1829._fU888[I] = 0;
            }
            else
            {
                TELL_NET_PLAYER_TO_START_PLAYING( I, 1 );
                l_U1829._fU888[I] = 1;
            }
        }
    }
    return 0;
}

int sub_73663(int iParam0)
{
    int I;
    unknown uVar4;
    unknown uVar5;

    for ( I = 0; I <= 15; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if ((GET_PLAYER_TEAM( sub_3442( I ) )) == iParam0)
            {
                if (l_U1588[I]._fU36)
                {
                    if (l_U1829._fU8[I]._fU20 == 0)
                    {
                        return 0;
                    }
                }
            }
        }
    }
    return 1;
}

void sub_73984()
{
    int I;
    unknown[1] uVar3;
    unknown[16] uVar5;

    array(ref uVar3, 1);
    uVar3[0] = nil;
    array(ref uVar5, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar5[I] = l_U1588[I]._fU16;
    }
    sub_74068( ref uVar5, ref l_U1829._fU1160, 200.00000000, ref uVar3, 1120403456 );
    return;
}

void sub_74068(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
                if (l_U1319)
                {
                    sub_74267( uParam1, sub_74184( sub_28507( I ) ), uParam2, uParam4, uParam3, I );
                }
                else if (l_U1323)
                {
                    sub_74267( uParam1, l_U1324, uParam2, uParam4, uParam3, I );
                }
                else if (l_U1322)
                {
                    sub_74267( uParam1, sub_76380( -1, 1 ), uParam2, uParam4, uParam3, I );
                }
                else
                {
                    sub_74267( uParam1, sub_76380( GET_PLAYER_TEAM( sub_3442( I ) ), 1 ), uParam2, uParam4, uParam3, I );
                };;;
            }
        }
    }
    return;
}

void sub_74184(unknown uParam0)
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

int sub_74267(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
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
            if (sub_74320( (uParam6^)[I] ))
            {
                ADD_SPAWN_BLOCKING_AREA( sub_74820( (uParam6^)[I] ), uParam5 );
            }
        }
        while (iVar12 < 127)
        {
            if (NOT l_U1319)
            {
                sub_75015( ref uParam1, uParam4 + l_U1328 );
            }
            bVar13 = false;
            if (l_U1321)
            {
                if (GET_RANDOM_CAR_NODE( uParam1, uParam4 + l_U1328, 2, 1, 1, ref uVar14, ref uVar11 ))
                {
                    bVar13 = true;
                }
            }
            else if (l_U1320)
            {
                if (sub_12781())
                {
                    if (GET_SORTED_NETWORK_RESTART_NODE_USING_GROUP_LIST( uParam1, uParam4 + l_U1328, ref uVar14, ref uVar11, uParam7, 2, uParam5 ))
                    {
                        bVar13 = true;
                    }
                }
                else if (GET_SORTED_NETWORK_RESTART_NODE_USING_GROUP_LIST( uParam1, uParam4 + l_U1328, ref uVar14, ref uVar11, uParam7, 7, uParam5 ))
                {
                    bVar13 = true;
                }
            }
            else if (sub_12781())
            {
                if (GET_SORTED_NETWORK_RESTART_NODE( uParam1, uParam4 + l_U1328, ref uVar14, ref uVar11, uParam7, 0, uParam5 ))
                {
                    bVar13 = true;
                }
            }
            else if (sub_3785() == 7)
            {
                if (GET_SORTED_NETWORK_RESTART_NODE( uParam1, uParam4 + l_U1328, ref uVar14, ref uVar11, uParam7, 9, uParam5 ))
                {
                    bVar13 = true;
                }
            }
            else if (sub_3785() == 16)
            {
                if (GET_SORTED_NETWORK_RESTART_NODE( uParam1, uParam4 + l_U1328, ref uVar14, ref uVar11, uParam7, 21, uParam5 ))
                {
                    bVar13 = true;
                }
            }
            else if (GET_SORTED_NETWORK_RESTART_NODE( uParam1, uParam4 + l_U1328, ref uVar14, ref uVar11, uParam7, 7, uParam5 ))
            {
                bVar13 = true;
            };;;;;;
            if (bVar13)
            {
                (uParam0^)[uParam7] = uVar11;
                l_U1328 = 0.00000000;
                REGISTER_PLAYER_RESPAWN_COORDS( uParam7, uVar14 );
                return 1;
            }
            else
            {
                l_U1328 += 30.00000000;
                return 0;
            }
        }
        l_U1328 += 10.00000000;
    }
    return 0;
}

int sub_74320(unknown uParam0)
{
    int iVar3;

    if (DOES_PED_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        if (IS_CHAR_DEAD( sub_74345( uParam0 ) ))
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
        if (IS_VEH_DRIVEABLE( sub_72195( uParam0 ) ))
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
        if (IS_OBJECT_IN_WATER( sub_74471( uParam0 ) ))
        {
            return 0;
        }
        else
        {
            iVar3 = sub_74557( sub_74528( sub_74471( uParam0 ) ) );
            if (((iVar3 == 0) || (((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( sub_74471( uParam0 ), 1 )) < 0.30000000) AND (iVar3 < 500))) || (((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( sub_74471( uParam0 ), 0 )) < 0.30000000) AND (iVar3 < 500)))
            {
                return 0;
            }
            else if (IS_OBJECT_ATTACHED( sub_74471( uParam0 ) ))
            {
                if (DOES_VEHICLE_EXIST( GET_CAR_OBJECT_IS_ATTACHED_TO( sub_74471( uParam0 ) ) ))
                {
                    if (IS_VEH_DRIVEABLE( GET_CAR_OBJECT_IS_ATTACHED_TO( sub_74471( uParam0 ) ) ))
                    {
                        return 1;
                    }
                    else if (IS_CAR_IN_WATER( GET_CAR_OBJECT_IS_ATTACHED_TO( sub_74471( uParam0 ) ) ))
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

void sub_74345(unknown uParam0)
{
    unknown Result;

    GET_PED_FROM_NETWORK_ID( uParam0, ref Result );
    return Result;
}

void sub_74471(unknown uParam0)
{
    unknown Result;

    GET_OBJECT_FROM_NETWORK_ID( uParam0, ref Result );
    return Result;
}

void sub_74528(unknown uParam0)
{
    unknown Result;

    GET_OBJECT_HEALTH( uParam0, ref Result );
    return Result;
}

void sub_74557(unknown uParam0)
{
    return FLOOR( uParam0 );
}

void sub_74820(unknown uParam0)
{
    unknown Result;
    unknown uVar4;
    unknown uVar5;

    if (DOES_PED_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        GET_CHAR_COORDINATES( sub_74345( uParam0 ), ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        GET_DEAD_CAR_COORDINATES( sub_72195( uParam0 ), ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else if (DOES_OBJECT_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        GET_OBJECT_COORDINATES( sub_74471( uParam0 ), ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    };;;
    return Result;
}

void sub_75015(int iParam0, float fParam1)
{
    if (fParam1 > 500.00000000)
    {
        (iParam0^) = {sub_75041( (iParam0^) )};
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

void sub_75041(vector vParam0)
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
        vVar12 = {sub_75074( I )};
        uVar9 = {vParam0 - vVar12};
        fVar8 = ((uVar9._fU0 * uVar9._fU0) + (uVar9._fU4 * uVar9._fU4)) + (uVar9._fU8 * uVar9._fU8);
        if (fVar7 > fVar8)
        {
            iVar6 = I;
            fVar7 = fVar8;
        }
    }
    return sub_75074( iVar6 );
}

vector sub_75074(int iParam0)
{
    if (iParam0 == -1)
    {
        iParam0 = sub_22648( 0, 8 );
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

vector sub_76380(int iParam0, unknown uParam1)
{
    int I;
    int iVar5;
    int iVar6;
    vector vVar7;

    if ((l_U1317) AND (uParam1))
    {
        return sub_75074( l_U1318 );
    }
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (IS_PLAYER_CONTROL_ON( sub_3442( I ) ))
            {
                if (NOT (sub_76489( sub_28507( I ), -2000.00000000, -2000.00000000, 250.00000000, 50.00000000 )))
                {
                    iVar6++;
                    if (((GET_PLAYER_TEAM( sub_3442( I ) )) == iParam0) || (iParam0 == -1))
                    {
                        vVar7 = {vVar7 + (sub_74184( sub_28507( I ) ))};
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
            return sub_76380( -1, 0 );
        }
        else
        {
            return sub_75074( -1 );
        }
    }
    return vVar7 / (TO_FLOAT( iVar5 ));
}

int sub_76489(unknown uParam0, vector vParam1, float fParam4)
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

void sub_76824()
{
    int I;
    int iVar3;
    unknown uVar4;
    int iVar5;
    int iVar6;
    unknown uVar7;
    unknown[2] uVar8;

    array(ref uVar8, 2);
    switch (l_U1829._fU0)
    {
        case 0:
        l_U1829._fU1384 = 0;
        l_U2453 = 0;
        l_U1829._fU0 = 1;
        l_U1829._fU1300 = 0;
        for ( I = 0; I <= 15; I++ )
        {
            l_U1829._fU752[I] = -1;
        }
        for ( I = 0; I <= 3; I++ )
        {
            l_U1829._fU484[I] = nil;
            l_U1829._fU504[I] = nil;
        }
        l_U1829._fU524 = nil;
        l_U1829._fU1400 = 0;
        GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref l_U1829._fU1288 );
        GENERATE_RANDOM_INT_IN_RANGE( 0, 7, ref l_U1829._fU1292 );
        break;
        case 1:
        if (NOT NETWORK_IS_OPERATION_PENDING())
        {
            if ((sub_77113()) || (l_U1829._fU1408))
            {
                for ( I = 0; I <= 3; I++ )
                {
                    l_U1829._fU484[I] = nil;
                    l_U1829._fU504[I] = nil;
                }
                l_U1829._fU524 = nil;
                sub_77617( l_U1829._fU528[11] );
                sub_77799( l_U1829._fU528[12] );
                SET_SYNC_WEATHER_AND_GAME_TIME( 1 );
                NETWORK_ADVERTISE_SESSION( 0 );
                if (l_U1829._fU528[2] == 1)
                {
                    sub_77994();
                    l_U1829._fU0 = 2;
                    l_U1829._fU1408 = 0;
                }
                else
                {
                    sub_80830();
                    l_U1829._fU0 = 2;
                    l_U1829._fU1408 = 0;
                }
                if (NOT NETWORK_IS_OPERATION_PENDING())
                {
                    if (NOT NETWORK_IS_SESSION_STARTED())
                    {
                        if (NOT NETWORK_START_SESSION_PENDING())
                        {
                            NETWORK_START_SESSION();
                        }
                    }
                }
            }
            else
            {
                for ( I = 0; I <= 15; I++ )
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( I ))
                    {
                        l_U1829._fU888[I] = GET_PLAYER_TEAM( sub_3442( I ) );
                    }
                }
                sub_81116();
            }
        }
        break;
        case 2:
        if (N_1242010017())
        {
            NETWORK_ADVERTISE_SESSION( 0 );
        }
        l_U1829._fU1280 = GET_HOST_ID();
        if (sub_81614())
        {
            if (l_U1829._fU1300 == 0)
            {
                for ( I = 0; I <= 15; I++ )
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( I ))
                    {
                        l_U1829._fU888[I] = GET_PLAYER_TEAM( sub_3442( I ) );
                    }
                }
            }
            if (sub_67067() == 1)
            {
                l_U1829._fU1400 = 1;
            }
            if (l_U1829._fU528[2] == 1)
            {
                if (sub_81871( ref l_U1829._fU460, l_U2209 ))
                {
                    l_U1829._fU0 = 3;
                }
            }
            else
            {
                sub_93684( ref l_U1829._fU460 );
                l_U1829._fU0 = 3;
            }
        }
        break;
        case 3:
        if (N_1242010017())
        {
            NETWORK_ADVERTISE_SESSION( 0 );
        }
        if (sub_67067() == 1)
        {
            l_U1829._fU1400 = 1;
        }
        if (sub_96482())
        {
            if (l_U1829._fU1300 == 0)
            {
                for ( I = 0; I <= 15; I++ )
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( I ))
                    {
                        l_U1829._fU888[I] = GET_PLAYER_TEAM( sub_3442( I ) );
                    }
                }
            }
            if (sub_96701( ref l_U1829._fU472 ))
            {
                l_U1829._fU1404 = 0;
                l_U1829._fU1284 = -1;
                l_U1829._fU0 = 4;
            }
        }
        break;
        case 4:
        if (N_1242010017())
        {
            NETWORK_ADVERTISE_SESSION( 0 );
        }
        sub_81116();
        iVar3 = 0;
        iVar5 = 0;
        if (l_U1829._fU528[2] == 1)
        {
            if (NOT l_U1829._fU1376)
            {
                for ( I = 0; I <= 15; I++ )
                {
                    l_U1829._fU684[I] = -1;
                    l_U1829._fU616[I] = -1;
                }
                for ( I = 0; I <= 15; I++ )
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( I ))
                    {
                        if (l_U1588[I]._fU36)
                        {
                            if ((GET_PLAYER_TEAM( sub_3442( I ) )) == 0)
                            {
                                l_U1829._fU616[iVar3] = I;
                                iVar3++;
                            }
                            else
                            {
                                l_U1829._fU684[iVar6] = I;
                                iVar6++;
                            }
                        }
                    }
                }
                if ((NOT NETWORK_END_SESSION_PENDING()) AND (IS_NETWORK_SESSION()))
                {
                    GET_NETWORK_TIMER( ref l_U2206 );
                }
                if (iVar3 > 1)
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, iVar3, ref uVar4 );
                    l_U1829._fU1284 = l_U1829._fU616[uVar4];
                }
                else
                {
                    l_U1829._fU1284 = l_U1829._fU616[0];
                }
                sub_97693();
                l_U1829._fU1376 = 1;
            }
            else if (sub_97751())
            {
                if (NOT l_U1829._fU1384)
                {
                    sub_99432();
                }
                else if (NOT NETWORK_IS_OPERATION_PENDING())
                {
                    if (NOT NETWORK_IS_SESSION_STARTED())
                    {
                        if (NOT NETWORK_START_SESSION_PENDING())
                        {
                            NETWORK_START_SESSION();
                        }
                    }
                }
                l_U1829._fU1256 = sub_22648( 0, 2147483647 );
                if ((NOT NETWORK_END_SESSION_PENDING()) AND (IS_NETWORK_SESSION()))
                {
                    GET_NETWORK_TIMER( ref l_U1829._fU1260 );
                }
                l_U1829._fU1376 = 0;
                l_U1829._fU0 = 5;;
            }
        }
        else if ((NOT NETWORK_END_SESSION_PENDING()) AND (IS_NETWORK_SESSION()))
        {
            GET_NETWORK_TIMER( ref l_U2206 );
        }
        sub_97693();
        if (sub_97751())
        {
            if (sub_102747())
            {
                if (NOT l_U1829._fU1384)
                {
                    sub_99432();
                }
                else if (NOT NETWORK_IS_OPERATION_PENDING())
                {
                    if (NOT NETWORK_IS_SESSION_STARTED())
                    {
                        if (NOT NETWORK_START_SESSION_PENDING())
                        {
                            NETWORK_START_SESSION();
                        }
                    }
                }
                if ((NOT NETWORK_END_SESSION_PENDING()) AND (IS_NETWORK_SESSION()))
                {
                    GET_NETWORK_TIMER( ref l_U1829._fU1260 );
                }
                l_U1829._fU0 = 5;;
            }
        }
        break;
        case 5:
        if (N_1242010017())
        {
            NETWORK_ADVERTISE_SESSION( 0 );
        }
        if ((GET_HOST_ID() != l_U1829._fU1280) || (l_U1829._fU1404))
        {
            if (GET_HOST_ID() != -1)
            {
                l_U1829._fU1384 = 0;
                l_U1829._fU1376 = 0;
                l_U1829._fU1392 = 0;
                l_U1829._fU1388 = 0;
                l_U1829._fU1404 = 1;
                if (sub_103407())
                {
                    if ((((sub_3405( 0 )) == 0) || ((sub_3405( 1 )) == 0)) || (sub_67067() <= 2))
                    {
                        l_U1829._fU1400 = 1;
                    }
                    else
                    {
                        for ( I = 0; I <= 15; I++ )
                        {
                            if (IS_NETWORK_PLAYER_ACTIVE( I ))
                            {
                                if ((GET_PLAYER_TEAM( sub_3442( I ) )) == 0)
                                {
                                    l_U1829._fU888[I] = GET_PLAYER_TEAM( sub_3442( I ) );
                                    l_U1829._fU1092[I] = 1;
                                }
                                else if ((GET_PLAYER_TEAM( sub_3442( I ) )) == 1)
                                {
                                    l_U1829._fU1092[I] = 0;
                                    l_U1829._fU888[I] = GET_PLAYER_TEAM( sub_3442( I ) );
                                }
                            }
                        }
                        l_U1829._fU1384 = 0;
                        l_U1829._fU1388 = 0;
                        l_U1829._fU1392 = 0;
                        l_U1829._fU0 = 2;
                    }
                }
            }
        }
        else if (((sub_3405( 0 )) > 0) AND ((sub_3405( 1 )) > 0))
        {
            if (sub_104243())
            {
                l_U1829._fU0 = 6;
            }
        }
        else if (l_U1829._fU1300 > 0)
        {
            l_U1829._fU1300 = l_U1829._fU1264;
        }
        l_U1829._fU1400 = 1;;;
        break;
        case 6:
        sub_81116();
        sub_104441();
        if (N_1242010017())
        {
            NETWORK_ADVERTISE_SESSION( 0 );
        }
        if (NOT NETWORK_IS_OPERATION_PENDING())
        {
            if (NOT NETWORK_IS_SESSION_STARTED())
            {
                if (NOT NETWORK_START_SESSION_PENDING())
                {
                    NETWORK_START_SESSION();
                }
            }
        }
        if (l_U1829._fU528[2] == 1)
        {
            if (l_U1829._fU1284 != -1)
            {
                if (IS_NETWORK_PLAYER_ACTIVE( l_U1829._fU1284 ))
                {
                    if ((HOW_LONG_HAS_NETWORK_PLAYER_BEEN_DEAD_FOR( l_U1829._fU1284 )) > 5000)
                    {
                        if (IS_CHAR_DEAD( sub_28507( l_U1829._fU1284 ) ))
                        {
                            sub_104876();
                            for ( I = 0; I <= 15; I++ )
                            {
                                if (IS_NETWORK_PLAYER_ACTIVE( I ))
                                {
                                    if (l_U1588[I]._fU36)
                                    {
                                        l_U1829._fU1092[I] = GET_PLAYER_TEAM( sub_3442( I ) );
                                    }
                                }
                            }
                            l_U1829._fU1240[1] += 1000;
                            l_U1829._fU1228[1] += 1000;
                            for ( I = 0; I <= 15; I++ )
                            {
                                if (IS_NETWORK_PLAYER_ACTIVE( I ))
                                {
                                    if ((GET_PLAYER_TEAM( sub_3442( I ) )) == 1)
                                    {
                                        if (l_U1588[I]._fU36)
                                        {
                                            l_U1829._fU956[I] += 1000 / (sub_3405( 1 ));
                                            l_U1829._fU1024[I] += 1000 / (sub_3405( 1 ));
                                        }
                                    }
                                }
                            }
                            l_U1829._fU1380 = 1;
                        }
                    }
                }
            }
            if (NOT (sub_72160( l_U1829._fU524 )))
            {
                if (sub_105446())
                {
                    for ( I = 0; I <= 15; I++ )
                    {
                        if (IS_NETWORK_PLAYER_ACTIVE( I ))
                        {
                            if (l_U1588[I]._fU36)
                            {
                                l_U1829._fU1092[I] = GET_PLAYER_TEAM( sub_3442( I ) );
                            }
                        }
                    }
                    sub_104876();
                    l_U1829._fU1240[1] += 1000;
                    l_U1829._fU1228[1] += 1000;
                    for ( I = 0; I <= 15; I++ )
                    {
                        if (IS_NETWORK_PLAYER_ACTIVE( I ))
                        {
                            if ((GET_PLAYER_TEAM( sub_3442( I ) )) == 1)
                            {
                                if (l_U1588[I]._fU36)
                                {
                                    l_U1829._fU956[I] += 1000 / (sub_3405( 1 ));
                                    l_U1829._fU1024[I] += 1000 / (sub_3405( 1 ));
                                }
                            }
                        }
                    }
                    l_U1829._fU1380 = 1;
                }
            }
            if (((sub_105831( 15000 )) || (sub_105970())) || (sub_106147()))
            {
                if (NOT sub_105446())
                {
                    for ( I = 0; I <= 15; I++ )
                    {
                        if (IS_NETWORK_PLAYER_ACTIVE( I ))
                        {
                            if (l_U1588[I]._fU36)
                            {
                                l_U1829._fU1092[I] = GET_PLAYER_TEAM( sub_3442( I ) );
                            }
                        }
                    }
                    sub_104876();
                    l_U1829._fU1240[1] += 1000;
                    l_U1829._fU1228[1] += 1000;
                    for ( I = 0; I <= 15; I++ )
                    {
                        if (IS_NETWORK_PLAYER_ACTIVE( I ))
                        {
                            if ((GET_PLAYER_TEAM( sub_3442( I ) )) == 1)
                            {
                                if (l_U1588[I]._fU36)
                                {
                                    l_U1829._fU956[I] += 1000 / (sub_3405( 1 ));
                                    l_U1829._fU1024[I] += 1000 / (sub_3405( 1 ));
                                }
                            }
                        }
                    }
                    l_U1829._fU1380 = 1;
                }
            }
            if (sub_72160( l_U1829._fU524 ))
            {
                if (l_U1829._fU1284 != -1)
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( l_U1829._fU1284 ))
                    {
                        if (NOT (IS_CHAR_DEAD( sub_28507( l_U1829._fU1284 ) )))
                        {
                            if (l_U1588[l_U1829._fU1284]._fU8)
                            {
                                if (sub_107162())
                                {
                                    for ( I = 0; I <= 15; I++ )
                                    {
                                        if (IS_NETWORK_PLAYER_ACTIVE( I ))
                                        {
                                            if (l_U1588[I]._fU36)
                                            {
                                                l_U1829._fU1092[I] = GET_PLAYER_TEAM( sub_3442( I ) );
                                            }
                                        }
                                    }
                                    sub_104876();
                                    l_U1829._fU1228[0] += 1000;
                                    l_U1829._fU1240[0] += 1000;
                                    for ( I = 0; I <= 15; I++ )
                                    {
                                        if (IS_NETWORK_PLAYER_ACTIVE( I ))
                                        {
                                            if ((GET_PLAYER_TEAM( sub_3442( I ) )) == 0)
                                            {
                                                if (l_U1588[I]._fU36)
                                                {
                                                    l_U1829._fU956[I] += 1000 / (sub_3405( 0 ));
                                                    l_U1829._fU1024[I] += 1000 / (sub_3405( 0 ));
                                                }
                                            }
                                        }
                                    }
                                    l_U1829._fU1380 = 1;
                                }
                            }
                            else if (NOT (IS_CAR_UPSIDEDOWN( sub_72195( l_U1829._fU524 ) )))
                            {
                                if (l_U2453)
                                {
                                    l_U2453 = 0;
                                }
                            }
                        }
                    }
                }
            }
            if (l_U1829._fU1284 != -1)
            {
                sub_107701();
            }
        }
        else if (sub_72160( l_U1829._fU524 ))
        {
            if (sub_108297())
            {
                if (sub_107162())
                {
                    sub_104876();
                    for ( I = 0; I <= 15; I++ )
                    {
                        if (IS_NETWORK_PLAYER_ACTIVE( I ))
                        {
                            if (l_U1588[I]._fU36)
                            {
                                l_U1829._fU1092[I] = GET_PLAYER_TEAM( sub_3442( I ) );
                            }
                        }
                    }
                    for ( I = 0; I <= 15; I++ )
                    {
                        if (IS_NETWORK_PLAYER_ACTIVE( I ))
                        {
                            if (NOT (IS_CHAR_DEAD( sub_28507( I ) )))
                            {
                                if ((GET_PLAYER_TEAM( sub_3442( I ) )) == 0)
                                {
                                    l_U1829._fU956[I] += sub_108746() / (sub_3405( 0 ));
                                    l_U1829._fU1024[I] += sub_108746() / (sub_3405( 0 ));
                                }
                            }
                        }
                    }
                    l_U1829._fU1228[0] += sub_108746();
                    l_U1829._fU1240[0] += sub_108746();
                    l_U1829._fU1380 = 1;
                }
            }
        }
        if (NOT (sub_72160( l_U1829._fU524 )))
        {
            if (sub_105446())
            {
                for ( I = 0; I <= 15; I++ )
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( I ))
                    {
                        if (l_U1588[I]._fU36)
                        {
                            l_U1829._fU1092[I] = GET_PLAYER_TEAM( sub_3442( I ) );
                        }
                    }
                }
                l_U1829._fU1240[1] += 1000;
                l_U1829._fU1228[1] += 1000;
                for ( I = 0; I <= 15; I++ )
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( I ))
                    {
                        if ((GET_PLAYER_TEAM( sub_3442( I ) )) == 1)
                        {
                            if (l_U1588[I]._fU36)
                            {
                                l_U1829._fU956[I] += 1000 / (sub_3405( 1 ));
                                l_U1829._fU1024[I] += 1000 / (sub_3405( 1 ));
                            }
                        }
                    }
                }
                l_U1829._fU1380 = 1;
                sub_104876();
            }
        }
        if ((sub_73663( 0 )) AND (l_U1829._fU1396))
        {
            if (sub_107162())
            {
                for ( I = 0; I <= 15; I++ )
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( I ))
                    {
                        if (l_U1588[I]._fU36)
                        {
                            l_U1829._fU1092[I] = GET_PLAYER_TEAM( sub_3442( I ) );
                        }
                    }
                }
                l_U1829._fU1240[1] += 1000;
                l_U1829._fU1228[1] += 1000;
                for ( I = 0; I <= 15; I++ )
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( I ))
                    {
                        if ((GET_PLAYER_TEAM( sub_3442( I ) )) == 1)
                        {
                            l_U1829._fU956[I] += 1000 / (sub_3405( 1 ));
                            l_U1829._fU1024[I] += 1000 / (sub_3405( 1 ));
                        }
                    }
                }
                l_U1829._fU1380 = 1;
                sub_104876();
            }
        }
        if ((sub_73663( 1 )) AND (l_U1829._fU1396))
        {
            if (sub_107162())
            {
                for ( I = 0; I <= 15; I++ )
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( I ))
                    {
                        if (l_U1588[I]._fU36)
                        {
                            l_U1829._fU1092[I] = GET_PLAYER_TEAM( sub_3442( I ) );
                        }
                    }
                }
                l_U1829._fU1240[0] += 1000;
                l_U1829._fU1228[0] += 1000;
                l_U1829._fU1380 = 1;
                for ( I = 0; I <= 15; I++ )
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( I ))
                    {
                        if ((GET_PLAYER_TEAM( sub_3442( I ) )) == 0)
                        {
                            l_U1829._fU956[I] += 1000 / (sub_3405( 0 ));
                            l_U1829._fU1024[I] += 1000 / (sub_3405( 0 ));
                        }
                    }
                }
                sub_104876();
            }
        }
        if (((sub_105831( 15000 )) || (sub_105970())) || (sub_106147()))
        {
            for ( I = 0; I <= 15; I++ )
            {
                if (IS_NETWORK_PLAYER_ACTIVE( I ))
                {
                    if (l_U1588[I]._fU36)
                    {
                        l_U1829._fU1092[I] = GET_PLAYER_TEAM( sub_3442( I ) );
                    }
                }
            }
            l_U1829._fU1240[1] += 1000;
            l_U1829._fU1228[1] += 1000;
            for ( I = 0; I <= 15; I++ )
            {
                if (IS_NETWORK_PLAYER_ACTIVE( I ))
                {
                    if ((GET_PLAYER_TEAM( sub_3442( I ) )) == 1)
                    {
                        if (l_U1588[I]._fU36)
                        {
                            l_U1829._fU956[I] += 1000 / (sub_3405( 1 ));
                            l_U1829._fU1024[I] += 1000 / (sub_3405( 1 ));
                        }
                    }
                }
            }
            l_U1829._fU1380 = 1;
            sub_104876();
        }
        sub_107701();;
        break;
        case 8:
        l_U1829._fU1384 = 0;
        l_U1829._fU1388 = 0;
        l_U1829._fU1392 = 0;
        if (l_U1829._fU528[2] == 1)
        {
            if (l_U1829._fU1300 == l_U1829._fU1264)
            {
                if (sub_110387())
                {
                    sub_110488();
                    l_U1829._fU1380 = 0;
                    l_U2458 = 0;
                    l_U2459 = 0;
                    l_U1829._fU1372 = 0;
                    l_U2453 = 0;
                }
            }
            else if (sub_110387())
            {
                if (sub_103407())
                {
                    for ( I = 0; I <= 3; I++ )
                    {
                        l_U1829._fU484[I] = nil;
                        l_U1829._fU504[I] = nil;
                    }
                    l_U1829._fU524 = nil;
                    sub_78133();
                    l_U1829._fU0 = 2;
                    for ( I = 0; I <= 15; I++ )
                    {
                        if (l_U1829._fU888[I] == 0)
                        {
                            l_U1829._fU888[I] = 1;
                        }
                        else
                        {
                            l_U1829._fU888[I] = 0;
                        }
                        l_U1829._fU8[I]._fU16 = 0;
                        l_U1829._fU8[I]._fU20 = 0;
                        l_U1829._fU8[I]._fU24 = 0;
                        l_U1829._fU1240[0] = 0;
                        l_U1829._fU1240[1] = 0;
                        l_U1829._fU1024[I] = 0;
                    }
                    uVar8[0] = l_U1829._fU1228[0];
                    uVar8[1] = l_U1829._fU1228[1];
                    l_U1829._fU1228[0] = l_U1829._fU1228[1];
                    l_U1829._fU1228[1] = uVar8[0];
                    l_U2458 = 0;
                    l_U2459 = 0;
                    l_U1829._fU1372 = 0;
                    l_U2453 = 0;
                    l_U1829._fU1380 = 0;
                    l_U1829._fU1412 = 0;
                }
            }
        }
        else if (l_U1829._fU1300 == l_U1829._fU1264)
        {
            if (sub_110387())
            {
                sub_110488();
                l_U1829._fU1380 = 0;
                l_U2453 = 0;
                l_U2458 = 0;
                l_U2459 = 0;
                l_U1829._fU1372 = 0;
            }
        }
        else if (sub_110387())
        {
            if (sub_103407())
            {
                sub_78133();
                for ( I = 0; I <= 3; I++ )
                {
                    l_U1829._fU484[I] = nil;
                    l_U1829._fU504[I] = nil;
                }
                l_U1829._fU524 = nil;
                for ( I = 0; I <= 15; I++ )
                {
                    if (l_U1829._fU888[I] == 0)
                    {
                        l_U1829._fU888[I] = 1;
                    }
                    else
                    {
                        l_U1829._fU888[I] = 0;
                    }
                    l_U1829._fU8[I]._fU16 = 0;
                    l_U1829._fU8[I]._fU20 = 0;
                    l_U1829._fU8[I]._fU24 = 0;
                    l_U1829._fU1240[0] = 0;
                    l_U1829._fU1240[1] = 0;
                    l_U1829._fU1024[I] = 0;
                }
                uVar8[0] = l_U1829._fU1228[0];
                uVar8[1] = l_U1829._fU1228[1];
                l_U1829._fU1228[0] = l_U1829._fU1228[1];
                l_U1829._fU1228[1] = uVar8[0];
                l_U2453 = 0;
                l_U1829._fU1380 = 0;
                l_U2458 = 0;
                l_U2459 = 0;
                l_U1829._fU1372 = 0;
                l_U1829._fU0 = 2;
                l_U1829._fU1412 = 0;
            }
        };;;
        break;
    }
    return;
}

int sub_77113()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1588[I]._fU20;
    }
    if (sub_77175( ref uVar3, ref l_U1829._fU1296 ))
    {
        return 1;
    }
    return 0;
}

int sub_77175(unknown uParam0, unknown uParam1)
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
    if (NOT (sub_17496( ref uVar10 )))
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
        if (sub_3785() != 16)
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

void sub_77617(unknown uParam0)
{
    switch (uParam0)
    {
        case -1:
        SET_TIME_OF_DAY( sub_22648( 0, 24 ), 0 );
        break;
        case 0:
        SET_TIME_OF_DAY( sub_22648( 0, 24 ), 0 );
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

void sub_77799(unknown uParam0)
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

void sub_77994()
{
    int I;

    for ( I = 0; I <= 15; I++ )
    {
        l_U1829._fU8[I]._fU0 = 0;
        l_U1829._fU8[I]._fU4 = 0;
        l_U1829._fU8[I]._fU8 = 0;
        l_U1829._fU8[I]._fU12 = 0;
        l_U1829._fU956[I] = 0;
    }
    for ( I = 0; I <= 1; I++ )
    {
        l_U1829._fU1228[I] = 0;
    }
    sub_78133();
    return;
}

void sub_78133()
{
    switch (l_U1829._fU1288)
    {
        case 0:
        if (l_U1829._fU528[2] == 1)
        {
            switch (l_U1829._fU1292)
            {
                case 0:
                sub_78318( -578.86170000, 1548.62500000, 1.14070000, -581.70270000, 1552.78500000, 0.00000000, 343.49550000 );
                break;
                case 1:
                sub_78318( -709.22070000, 357.11830000, 3.07160000, -708.58940000, 357.45240000, 2.87160000, 290.08510000 );
                break;
                case 2:
                sub_78318( -425.13940000, -629.34330000, 0.46830000, -422.83590000, -632.77710000, 0.00000000, 119.69000000 );
                break;
                case 3:
                sub_78318( 400.37810000, -680.53910000, 3.69200000, 400.26280000, -681.91390000, 3.69200000, 281.88240000 );
                break;
                case 4:
                sub_78318( 236.53920000, 393.30330000, 0.00000000, 236.53920000, 393.30330000, 0.00000000, 197.70340000 );
                break;
                case 5:
                sub_78318( 85.70830000, 1403.68100000, 2.31930000, 83.18130000, 1406.34300000, 2.31930000, 85.38000000 );
                break;
                case 6:
                sub_78318( -428.84210000, 1867.35200000, 1.14120000, -432.65510000, 1866.68000000, 0.00000000, 335.78200000 );
                break;
            }
        }
        else
        {
            switch (l_U1829._fU1292)
            {
                case 0:
                sub_78318( -425.13940000, -629.34330000, 0.46830000, -422.83590000, -632.77710000, 0.00000000, 119.69000000 );
                break;
                case 1:
                sub_78318( 400.37810000, -680.53910000, 3.69200000, 400.26280000, -681.91390000, 3.69200000, 281.88240000 );
                break;
                case 2:
                sub_78318( 85.70830000, 1403.68100000, 2.31930000, 83.18130000, 1406.34300000, 2.31930000, 85.38000000 );
                break;
                case 3:
                sub_78318( -428.84210000, 1867.35200000, 1.14120000, -432.65510000, 1866.68000000, 0.00000000, 335.78200000 );
                break;
                case 4:
                sub_78318( 85.70830000, 1403.68100000, 2.31930000, 83.18130000, 1406.34300000, 2.31930000, 85.38000000 );
                break;
                case 5:
                sub_78318( -578.86170000, 1548.62500000, 1.14070000, -581.70270000, 1552.78500000, 0.00000000, 343.49550000 );
                break;
                case 6:
                sub_78318( -425.13940000, -629.34330000, 0.46830000, -422.83590000, -632.77710000, 0.00000000, 119.69000000 );
                break;
                case 7:
                sub_78318( -428.84210000, 1867.35200000, 1.14120000, -432.65510000, 1866.68000000, 0.00000000, 335.78200000 );
                break;
            }
        }
        break;
        case 1:
        if (l_U1829._fU528[2] == 1)
        {
            switch (l_U1829._fU1292)
            {
                case 0:
                sub_78318( -1189.17700000, 1690.54700000, 37.42060000, -1190.29900000, 1689.92200000, 37.42050000, 338.11490000 );
                break;
                case 1:
                sub_78318( -1523.79200000, 1316.28700000, 0.13070000, -1538.71400000, 1319.96700000, 0.00000000, 45.85970000 );
                break;
                case 2:
                sub_78318( -1614.31500000, -616.92170000, 20.48660000, -1614.31500000, -616.92170000, 21.48660000, 45.85970000 );
                break;
                case 3:
                sub_78318( -825.18450000, 779.91980000, 8.32300000, -824.53800000, 780.02690000, 6.62300000, 324.90170000 );
                break;
                case 4:
                sub_78318( -756.00540000, 1418.07200000, 0.00550000, -741.08610000, 1396.21300000, 0.00000000, 207.61960000 );
                break;
                case 5:
                sub_78318( -1142.19200000, 1890.07000000, 0.25880000, -1142.19200000, 1890.07000000, 0.00000000, 355.38170000 );
                break;
                case 6:
                sub_78318( -2126.07800000, 145.09460000, 17.71320000, -2125.85100000, 145.29940000, 17.81310000, 277.94610000 );
                break;
            }
        }
        else
        {
            switch (l_U1829._fU1292)
            {
                case 2:
                sub_78318( -825.18450000, 779.91980000, 8.32300000, -824.53800000, 780.02690000, 6.62300000, 324.90170000 );
                break;
                case 5:
                sub_78318( -2126.07800000, 145.09460000, 17.71320000, -2125.85100000, 145.29940000, 17.71310000, 277.94610000 );
                break;
                case 1:
                sub_78318( -1189.17700000, 1690.54700000, 35.42060000, -1190.29900000, 1689.92200000, 35.42050000, 338.11490000 );
                break;
                case 4:
                sub_78318( -1523.79200000, 1316.28700000, 0.13070000, -1531.14300000, 1320.88100000, 0.49410000, 45.85970000 );
                break;
                case 7:
                sub_78318( -1142.19200000, 1890.07000000, 0.25880000, -1142.19200000, 1890.07000000, 0.25880000, 355.38170000 );
                break;
                case 0:
                sub_78318( -1614.31500000, -616.92170000, 20.48660000, -1614.31500000, -616.92170000, 21.48660000, 45.85970000 );
                break;
                case 3:
                sub_78318( -2126.07800000, 145.09460000, 17.71320000, -2125.85100000, 145.29940000, 17.71310000, 277.94610000 );
                break;
                case 6:
                sub_78318( -1614.31500000, -616.92170000, 20.48660000, -1614.31500000, -616.92170000, 21.48660000, 45.85970000 );
                break;
            }
        }
        break;
        case 2:
        switch (l_U1829._fU1292)
        {
            case 0:
            sub_78318( 1455.19700000, -756.63690000, 0.64690000, 1470.03300000, -757.55540000, 0.00000000, 274.60290000 );
            break;
            case 1:
            sub_78318( 1807.88900000, 11.15080000, 0.61270000, 1819.65800000, 8.23380000, 0.00000000, 252.95860000 );
            break;
            case 2:
            sub_78318( 2247.51500000, 755.78590000, 4.83070000, 2247.51500000, 755.78610000, 5.83070000, 252.95860000 );
            break;
            case 3:
            sub_78318( 1645.46900000, 1177.06600000, 0.49380000, 1636.40000000, 1174.55200000, 0.00000000, 352.69180000 );
            break;
            case 4:
            sub_78318( 1046.21500000, 1118.03500000, 0.30930000, 1040.83600000, 1116.93900000, 0.00000000, 1.02730000 );
            break;
            case 5:
            sub_78318( 743.11430000, 234.82870000, 0.08000000, 738.20770000, 235.45550000, 0.00000000, 95.19040000 );
            break;
            case 6:
            sub_78318( 722.45710000, -437.66780000, 0.44100000, 720.03060000, -437.04940000, 0.00000000, 337.88870000 );
            break;
        }
        break;
        case 3:
        switch (l_U1829._fU1292)
        {
            case 0:
            sub_78318( 1348.70600000, 1972.92800000, 1.50970000, 1351.56900000, 1987.39900000, 0.05010000, 355.67470000 );
            break;
            case 1:
            sub_78318( 398.48400000, 2153.88000000, 2.70630000, 391.31400000, 2157.08200000, 0.00000000, 353.32160000 );
            break;
            case 2:
            sub_78318( 436.27840000, 1077.00100000, 0.66190000, 433.17190000, 1072.35000000, 0.00000000, 3.98410000 );
            break;
            case 3:
            sub_78318( 679.68520000, 714.18910000, 0.45590000, 682.97120000, 722.55580000, 0.00000000, 182.20440000 );
            break;
            case 4:
            sub_78318( 415.60070000, 1077.05600000, 0.66240000, 411.52030000, 1074.98500000, 0.00000000, 355.31250000 );
            break;
            case 5:
            sub_78318( 415.60070000, 1077.05600000, 0.66240000, 411.52030000, 1074.98500000, 0.00000000, 355.31250000 );
            break;
            case 6:
            sub_78318( 1227.75300000, 1333.90800000, 0.47770000, 1239.18800000, 1330.34200000, 0.00000000, 261.06490000 );
            break;
        }
        break;
    }
    return;
}

void sub_78318(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    l_U2209 = {uParam0};
    l_U2283 = {uParam3};
    l_U2286 = uParam6;
    return;
}

void sub_80830()
{
    int I;

    for ( I = 0; I <= 15; I++ )
    {
        l_U1829._fU8[I]._fU0 = 0;
        l_U1829._fU8[I]._fU4 = 0;
        l_U1829._fU8[I]._fU8 = 0;
        l_U1829._fU8[I]._fU12 = 0;
        l_U1829._fU956[I] = 0;
    }
    for ( I = 0; I <= 1; I++ )
    {
        l_U1829._fU1228[I] = 0;
    }
    sub_78133();
    return;
}

void sub_81116()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1588[I]._fU48;
    }
    sub_81172( ref uVar3 );
    return;
}

void sub_81172(unknown uParam0)
{
    int I;
    int[16] iVar4;
    int iVar21;

    array(ref iVar4, 16);
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if ((((uParam0^)[I] != -1) AND ((uParam0^)[I] != I)) AND (l_U1292[I] == 1))
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
    if ((sub_4726() > 2) AND (NOT NETWORK_IS_TVT()))
    {
        if (((sub_4726() > 3) AND (iVar4[iVar21] > (sub_4726() / 2))) || ((sub_4726() == 3) AND (iVar4[iVar21] == 2)))
        {
            PRINTSTRING( "SCRIPT: Kick Player " );
            PRINTINT( iVar21 );
            PRINTSTRING( " with votes " );
            PRINTINT( iVar4[iVar21] );
            PRINTSTRING( " needed " );
            PRINTINT( sub_4726() / 2 );
            PRINTNL();
            if (IS_NETWORK_PLAYER_ACTIVE( iVar21 ))
            {
                NETWORK_KICK_PLAYER( iVar21 );
            }
        }
    }
    return;
}

int sub_81614()
{
    int I;
    unknown uVar3;

    for ( I = 0; I <= 15; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1588[I]._fU36)
            {
                if (NOT l_U1588[I]._fU56)
                {
                    PRINTSTRING( "readied up\n" );
                    return 0;
                }
            }
        }
    }
    return 1;
}

int sub_81871(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    float fVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    fVar6 = 950.00000000 + (sub_4726() * 5.00000000);
    switch (l_U1829._fU1288)
    {
        case 0:
        l_U2329 = sub_81952( 2, uParam1 );
        (uParam0^) = {sub_82170( 2, l_U2329 )};
        return 1;
        case 1:
        l_U2329 = sub_81952( 3, uParam1 );
        (uParam0^) = {sub_82170( 3, l_U2329 )};
        return 1;
        case 2:
        l_U2329 = sub_81952( 1, uParam1 );
        (uParam0^) = {sub_82170( 1, l_U2329 )};
        return 1;
        case 3:
        l_U2329 = sub_81952( 0, uParam1 );
        (uParam0^) = {sub_82170( 0, l_U2329 )};
        return 1;
    }
    return 0;
}

void sub_81952(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    float fVar6;
    int Result;
    int I;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    fVar6 = -100000.00000000;
    for ( I = 0; I <= ((sub_81978( uParam0 )) - 1); I++ )
    {
        uVar9 = {sub_82170( uParam0, I )};
        if ((VDIST( uVar9, uParam1 )) > fVar6)
        {
            fVar6 = VDIST( uVar9, uParam1 );
            Result = I;
        }
    }
    return Result;
}

int sub_81978(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 25;
        case 1: return 93;
        case 2: return 83;
        case 3: return 117;
        case 4: return 117;
        case 5: return 17;
        case 6: return 8;
        case 7: return 13;
        case 8: return 11;
        case 9: return 9;
        case 10: return 13;
        case 11: return 13;
    }
    return 25;
}

vector sub_82170(unknown uParam0, int iParam1)
{
    switch (uParam0)
    {
        case 0:
        if (iParam1 == -1)
        {
            iParam1 = sub_22648( 0, 25 );
        }
        switch (iParam1)
        {
            case 0: return vector( 11.86000000, 1480.08300000, 618.07590000);
            case 1: return vector( 6.34140000, 1292.62800000, 721.83950000);
            case 2: return vector( 6.32320000, 1306.20900000, 740.12030000);
            case 3: return vector( 3.38850000, 1291.65200000, 808.74600000);
            case 4: return vector( 8.16740000, 1321.93200000, 820.73540000);
            case 5: return vector( 16.88700000, 1578.86800000, 813.32400000);
            case 6: return vector( 15.85250000, 1508.26500000, 915.65440000);
            case 7: return vector( 15.85070000, 1604.64800000, 980.96690000);
            case 8: return vector( 16.05390000, 1660.69100000, 869.49900000);
            case 9: return vector( 16.05420000, 1692.10900000, 900.95810000);
            case 10: return vector( 9.71990000, 1714.01000000, 1097.83000000);
            case 11: return vector( 9.36050000, 1691.20600000, 1139.51400000);
            case 12: return vector( 15.58780000, 1715.95500000, 1246.73800000);
            case 13: return vector( 15.23600000, 1525.12100000, 1179.20100000);
            case 14: return vector( 15.76780000, 1487.04400000, 1265.91200000);
            case 15: return vector( 15.50320000, 1593.58700000, 1146.18200000);
            case 16: return vector( 15.96060000, 1746.87800000, 1432.23600000);
            case 17: return vector( 15.67790000, 1725.88000000, 1373.06000000);
            case 18: return vector( 11.79200000, 1827.38900000, 1063.96600000);
            case 19: return vector( 38.24020000, 1772.69000000, 707.08260000);
            case 20: return vector( 20.35470000, 1573.09000000, 698.03100000);
            case 21: return vector( 15.18290000, 1587.90900000, 406.78100000);
            case 22: return vector( 16.82120000, 1825.02500000, 305.05610000);
            case 23: return vector( 14.80370000, 1738.28100000, 467.88380000);
            case 24: return vector( 1.60910000, 1294.53800000, 480.31010000);
        }
        break;
        case 1:
        if (iParam1 == -1)
        {
            iParam1 = sub_22648( 0, 93 );
        }
        switch (iParam1)
        {
            case 0: return vector( 12.52300000, 1006.94000000, 1291.24800000);
            case 1: return vector( 12.79380000, 907.64040000, 1346.19600000);
            case 2: return vector( 25.01640000, 659.24100000, 1002.88500000);
            case 3: return vector( 21.32420000, 605.72570000, 916.80250000);
            case 4: return vector( 18.30560000, 498.71730000, 1043.39400000);
            case 5: return vector( 28.76460000, 426.74130000, 1095.18700000);
            case 6: return vector( 25.41670000, 242.28050000, 881.85890000);
            case 7: return vector( 30.45650000, 313.75290000, 1047.41000000);
            case 8: return vector( 28.70260000, 310.85200000, 1134.69000000);
            case 9: return vector( 29.53900000, 291.87750000, 1191.46500000);
            case 10: return vector( 21.00620000, 352.37520000, 1264.38500000);
            case 11: return vector( 22.59860000, 426.21810000, 1262.70600000);
            case 12: return vector( 28.74730000, 469.67310000, 1083.20500000);
            case 13: return vector( 31.45210000, 564.19990000, 1158.69700000);
            case 14: return vector( 36.26680000, 656.19350000, 1063.19600000);
            case 15: return vector( 27.11680000, 488.94650000, 1335.86200000);
            case 16: return vector( 34.39900000, 724.54380000, 1141.59000000);
            case 17: return vector( 36.26330000, 702.21250000, 1222.24300000);
            case 18: return vector( 34.96920000, 810.85610000, 1193.97500000);
            case 19: return vector( 34.96930000, 863.45180000, 1172.43100000);
            case 20: return vector( 15.43210000, 855.80790000, 1785.85000000);
            case 21: return vector( 28.44570000, 772.28630000, 1635.15100000);
            case 22: return vector( 24.73550000, 744.52480000, 1790.44800000);
            case 23: return vector( 26.72610000, 666.68710000, 1868.79000000);
            case 24: return vector( 27.77150000, 533.81120000, 1860.49700000);
            case 25: return vector( 26.95710000, 469.02990000, 1853.87800000);
            case 26: return vector( 21.55200000, 349.11430000, 1837.98200000);
            case 27: return vector( 24.43960000, 402.59170000, 1753.87500000);
            case 28: return vector( 27.91430000, 637.26570000, 1688.54100000);
            case 29: return vector( 29.57190000, 580.95640000, 1599.83200000);
            case 30: return vector( 28.02540000, 499.54890000, 1763.95000000);
            case 31: return vector( 28.23280000, 693.01830000, 1538.88700000);
            case 32: return vector( 33.88940000, 670.63650000, 1381.75000000);
            case 33: return vector( 32.86710000, 244.41300000, 1253.32200000);
            case 34: return vector( 15.04050000, 879.88560000, 1569.60900000);
            case 35: return vector( 22.54630000, 111.15850000, 1518.70300000);
            case 36: return vector( 22.12720000, 118.83260000, 1555.34600000);
            case 37: return vector( 21.48510000, 223.18330000, 1619.01300000);
            case 38: return vector( 24.82060000, 225.84630000, 1732.89300000);
            case 39: return vector( 19.87820000, 185.10600000, 1784.20200000);
            case 40: return vector( 17.08640000, 364.56730000, 1933.95900000);
            case 41: return vector( 17.17800000, 406.42020000, 1999.82100000);
            case 42: return vector( 17.24190000, 419.52450000, 1951.42900000);
            case 43: return vector( 17.05740000, 669.65300000, 1993.26600000);
            case 44: return vector( 17.04420000, 557.22600000, 1980.73400000);
            case 45: return vector( 20.91650000, 132.15810000, 1469.39800000);
            case 46: return vector( 22.64680000, 104.96900000, 1519.91700000);
            case 47: return vector( 26.24870000, 156.16530000, 1342.11400000);
            case 48: return vector( 24.90580000, 70.04300000, 1386.88000000);
            case 49: return vector( 23.92750000, 5.34360000, 1421.19000000);
            case 50: return vector( 27.26200000, -17.59060000, 1319.46100000);
            case 51: return vector( 34.60980000, 47.04350000, 1226.81100000);
            case 52: return vector( 33.99480000, -10.05610000, 1170.72900000);
            case 53: return vector( 33.41750000, 131.12990000, 1226.17100000);
            case 54: return vector( 31.92510000, 138.28250000, 1140.14900000);
            case 55: return vector( 26.12030000, 287.34790000, 966.40140000);
            case 56: return vector( 25.18380000, 193.27410000, 1454.69400000);
            case 57: return vector( 12.55740000, 500.87670000, 858.20650000);
            case 58: return vector( 10.54850000, 409.42270000, 791.45670000);
            case 59: return vector( 10.55300000, 433.43030000, 768.43630000);
            case 60: return vector( 14.01580000, 451.47590000, 940.76750000);
            case 61: return vector( 4.99450000, 297.97180000, 791.31590000);
            case 62: return vector( 5.01300000, 204.50710000, 770.29210000);
            case 63: return vector( 5.02430000, 112.42490000, 843.86490000);
            case 64: return vector( 4.93550000, 62.32970000, 753.13460000);
            case 65: return vector( 4.98820000, 2.64490000, 729.97670000);
            case 66: return vector( 5.00980000, 57.76990000, 829.83280000);
            case 67: return vector( 4.81910000, -84.20820000, 738.20060000);
            case 68: return vector( 4.81870000, -143.50070000, 733.29750000);
            case 69: return vector( 5.11550000, -159.40830000, 809.64500000);
            case 70: return vector( 5.00070000, -81.24490000, 874.37390000);
            case 71: return vector( 27.42940000, -175.93270000, 1168.90200000);
            case 72: return vector( 27.29410000, -100.45600000, 1207.72600000);
            case 73: return vector( 26.20640000, -103.50780000, 1282.88200000);
            case 74: return vector( 22.07750000, -91.55660000, 1347.49200000);
            case 75: return vector( 23.39490000, -178.87410000, 1326.10800000);
            case 76: return vector( 18.01780000, -357.37140000, 1349.93500000);
            case 77: return vector( 17.83520000, -341.18150000, 1278.38100000);
            case 78: return vector( 7.16070000, -788.06610000, 1402.19300000);
            case 79: return vector( 11.56210000, -616.90780000, 1324.22800000);
            case 80: return vector( 12.89480000, -643.04960000, 1198.87500000);
            case 81: return vector( 14.17170000, -505.07560000, 947.48580000);
            case 82: return vector( 13.33010000, -530.82930000, 870.75320000);
            case 83: return vector( 12.99880000, -496.68140000, 807.97960000);
            case 84: return vector( 12.85080000, -433.68640000, 851.69560000);
            case 85: return vector( 4.88490000, -351.46860000, 708.92820000);
            case 86: return vector( 4.81770000, -276.23270000, 748.00870000);
            case 87: return vector( 15.51040000, -315.32570000, 870.03630000);
            case 88: return vector( 18.23500000, -332.05010000, 962.37390000);
            case 89: return vector( 18.43680000, -326.58890000, 1046.69000000);
            case 90: return vector( 32.64030000, 44.39360000, 1044.99800000);
            case 91: return vector( 17.60450000, -398.05980000, 1122.56600000);
            case 92: return vector( 13.47790000, -522.33370000, 1048.34600000);
        }
        break;
        case 2:
        if (iParam1 == -1)
        {
            iParam1 = sub_22648( 0, 83 );
        }
        switch (iParam1)
        {
            case 0: return vector( 7.65860000, 1775.43500000, -373.69610000);
            case 1: return vector( 6.48470000, 1762.13100000, -162.95820000);
            case 2: return vector( 7.60000000, 1725.48800000, -513.99490000);
            case 3: return vector( 19.27450000, 1604.77200000, -318.10030000);
            case 4: return vector( 19.41470000, 1554.74800000, -290.06480000);
            case 5: return vector( 17.28570000, 1559.22900000, -100.49750000);
            case 6: return vector( 4.31860000, 606.92570000, -497.82940000);
            case 7: return vector( 12.10430000, 867.12990000, 13.09700000);
            case 8: return vector( 13.55350000, 1133.61600000, 97.45180000);
            case 9: return vector( 19.42860000, 1222.01000000, -15.85410000);
            case 10: return vector( 21.90780000, 1217.74500000, -414.01630000);
            case 11: return vector( 19.31950000, 1379.56300000, -197.87700000);
            case 12: return vector( 17.70170000, 1652.73700000, -214.88240000);
            case 13: return vector( 8.93800000, 1461.02500000, -576.55050000);
            case 14: return vector( 4.90860000, 1336.09700000, -606.20950000);
            case 15: return vector( 16.41390000, 1310.50700000, -432.50310000);
            case 16: return vector( 4.90860000, 1261.50200000, -625.64850000);
            case 17: return vector( 17.71070000, 1486.60400000, -528.70660000);
            case 18: return vector( 17.46170000, 1487.40600000, -149.38350000);
            case 19: return vector( 13.68340000, 846.67050000, -77.77500000);
            case 20: return vector( 11.76830000, 1140.57900000, -433.38850000);
            case 21: return vector( 9.00300000, 1139.36800000, -525.79130000);
            case 22: return vector( 8.91500000, 1119.42900000, -616.32780000);
            case 23: return vector( 8.80830000, 896.66940000, -485.99190000);
            case 24: return vector( 8.85530000, 803.22740000, -494.43800000);
            case 25: return vector( 8.66600000, 754.43880000, -425.29350000);
            case 26: return vector( 3.67030000, 524.20510000, -602.57340000);
            case 27: return vector( 20.48290000, 458.39770000, -663.64500000);
            case 28: return vector( 3.66170000, 366.05770000, -600.84910000);
            case 29: return vector( 3.69720000, 160.72360000, -617.49520000);
            case 30: return vector( 5.43270000, -101.88460000, -582.55000000);
            case 31: return vector( 3.91520000, -373.53180000, -369.34600000);
            case 32: return vector( 5.77790000, -273.28450000, -539.73880000);
            case 33: return vector( 5.92800000, -235.54600000, -634.22630000);
            case 34: return vector( 4.04000000, -404.35960000, -481.98250000);
            case 35: return vector( 3.78390000, -632.38750000, -364.81440000);
            case 36: return vector( 13.56400000, -197.95480000, -267.57860000);
            case 37: return vector( 13.73000000, 71.20590000, -91.70530000);
            case 38: return vector( 13.49080000, -21.98630000, -67.27070000);
            case 39: return vector( 13.64690000, -129.38480000, 59.28160000);
            case 40: return vector( 13.75770000, 93.49940000, 87.32090000);
            case 41: return vector( 13.76110000, 221.98050000, 165.11630000);
            case 42: return vector( 13.76260000, 167.23750000, 190.11750000);
            case 43: return vector( 13.80690000, 314.02540000, -96.91870000);
            case 44: return vector( 13.08150000, 232.32910000, -266.22990000);
            case 45: return vector( 14.65220000, 859.96810000, 79.58770000);
            case 46: return vector( 8.85820000, 188.36530000, -474.95030000);
            case 47: return vector( 13.75390000, 213.55740000, -340.93910000);
            case 48: return vector( 3.66220000, 228.65460000, -605.32670000);
            case 49: return vector( 5.98330000, 366.20490000, -488.78510000);
            case 50: return vector( 6.14690000, 454.81760000, -495.90230000);
            case 51: return vector( 13.77160000, 582.41290000, -252.59790000);
            case 52: return vector( 13.96520000, 580.24180000, -166.93490000);
            case 53: return vector( 13.76610000, 455.46490000, -306.30130000);
            case 54: return vector( 13.71500000, 459.05030000, 82.41400000);
            case 55: return vector( 14.15830000, 459.82810000, 194.42730000);
            case 56: return vector( 13.56230000, 580.18090000, 138.49810000);
            case 57: return vector( 13.56260000, 766.74960000, 1.83150000);
            case 58: return vector( 13.66690000, 745.64110000, 88.31150000);
            case 59: return vector( 13.52310000, 679.92140000, 103.05320000);
            case 60: return vector( 13.65080000, -10.80560000, -316.95710000);
            case 61: return vector( 13.48590000, -184.40780000, -2.01730000);
            case 62: return vector( 13.78530000, -201.20920000, 110.75850000);
            case 63: return vector( 13.76190000, -63.69430000, 232.39320000);
            case 64: return vector( 3.44660000, -277.88480000, 336.15850000);
            case 65: return vector( 3.94770000, -273.26340000, 258.82590000);
            case 66: return vector( 11.82780000, -263.37340000, 182.95850000);
            case 67: return vector( 13.71130000, -276.70750000, 110.16780000);
            case 68: return vector( 11.69840000, -266.66240000, -407.16640000);
            case 69: return vector( 13.76140000, -371.22950000, 105.98290000);
            case 70: return vector( 4.16690000, -366.13100000, 207.18310000);
            case 71: return vector( 3.66950000, -384.14740000, 359.86470000);
            case 72: return vector( 3.69350000, -437.83360000, 375.16980000);
            case 73: return vector( 8.03340000, -534.43320000, 210.23330000);
            case 74: return vector( 3.80830000, -582.54750000, -178.72500000);
            case 75: return vector( 3.95860000, -698.08430000, -162.34110000);
            case 76: return vector( 8.39950000, -695.34640000, 9.52350000);
            case 77: return vector( 3.80280000, -804.47690000, 227.46980000);
            case 78: return vector( 3.78760000, -875.59250000, 103.17110000);
            case 79: return vector( 3.99710000, -921.88750000, -40.14370000);
            case 80: return vector( 13.76290000, -396.12340000, -109.43440000);
            case 81: return vector( 4.12170000, -860.21850000, -153.22630000);
            case 82: return vector( 13.68540000, -333.58940000, -92.02700000);
        }
        break;
        case 3:
        case 4:
        if (iParam1 == -1)
        {
            iParam1 = sub_22648( 0, 117 );
        }
        switch (iParam1)
        {
            case 0: return vector( 21.32530000, 1877.23800000, -968.09440000);
            case 1: return vector( 5.47780000, 1842.18800000, -1235.05200000);
            case 2: return vector( 26.81980000, 1732.77300000, -1329.81100000);
            case 3: return vector( 31.64290000, 1759.46000000, -1211.59800000);
            case 4: return vector( 34.80070000, 1739.46300000, -1118.98400000);
            case 5: return vector( 23.01290000, 1653.47700000, -1010.12600000);
            case 6: return vector( 34.45380000, 1636.22800000, -1049.26600000);
            case 7: return vector( 33.43340000, 1684.11500000, -1242.47500000);
            case 8: return vector( 34.50010000, 1644.10800000, -1168.62200000);
            case 9: return vector( 28.73960000, 1546.94900000, -1185.65300000);
            case 10: return vector( 22.25330000, 1516.01000000, -989.71940000);
            case 11: return vector( 20.97180000, 1319.44300000, -877.73230000);
            case 12: return vector( 17.19490000, 1289.22800000, -800.82430000);
            case 13: return vector( 38.62990000, 1422.54200000, -989.66580000);
            case 14: return vector( 23.56280000, 1463.14700000, -1099.96400000);
            case 15: return vector( 23.34630000, 1431.02000000, -1153.24100000);
            case 16: return vector( 24.09170000, 1487.02700000, -1252.94600000);
            case 17: return vector( 24.26020000, 1456.12100000, -1403.51300000);
            case 18: return vector( 12.05020000, 1360.80200000, -1485.47800000);
            case 19: return vector( 19.44380000, 1362.04500000, -1359.87800000);
            case 20: return vector( 21.37860000, 1217.67800000, -1357.79800000);
            case 21: return vector( 19.68790000, 1287.73600000, -1243.70600000);
            case 22: return vector( 23.59540000, 1288.93100000, -1101.07300000);
            case 23: return vector( 24.68090000, 1318.10300000, -1015.20500000);
            case 24: return vector( 19.74750000, 1206.43500000, -849.25040000);
            case 25: return vector( 3.22060000, 911.59900000, -818.93300000);
            case 26: return vector( 21.44750000, 972.07610000, -950.46380000);
            case 27: return vector( 16.64870000, 1131.76900000, -958.20120000);
            case 28: return vector( 22.83790000, 1198.53900000, -954.24290000);
            case 29: return vector( 16.25710000, 1188.00300000, -1115.23600000);
            case 30: return vector( 20.83210000, 1189.78200000, -1201.85500000);
            case 31: return vector( 20.84050000, 1190.29100000, -1273.01700000);
            case 32: return vector( 18.58820000, 1104.27400000, -1293.52100000);
            case 33: return vector( 18.49510000, 1075.70700000, -1304.55400000);
            case 34: return vector( 18.45740000, 1006.13800000, -1292.89300000);
            case 35: return vector( 12.65120000, 1050.53100000, -1100.91000000);
            case 36: return vector( 12.49460000, 986.02390000, -1159.36200000);
            case 37: return vector( 18.57290000, 954.27920000, -1119.19300000);
            case 38: return vector( 12.55470000, 929.75630000, -1079.99500000);
            case 39: return vector( 21.99580000, 907.42770000, -1051.79900000);
            case 40: return vector( 22.01130000, 844.19840000, -1023.94200000);
            case 41: return vector( 12.72340000, 867.51560000, -961.24010000);
            case 42: return vector( 12.52170000, 862.18760000, -802.27420000);
            case 43: return vector( 2.81050000, 723.44110000, -957.28580000);
            case 44: return vector( 2.81050000, 724.21390000, -1063.71900000);
            case 45: return vector( 7.69330000, 631.68560000, -1105.33500000);
            case 46: return vector( 3.37270000, 582.38400000, -1062.67800000);
            case 47: return vector( 3.37290000, 461.64690000, -1078.28700000);
            case 48: return vector( 3.37280000, 448.55950000, -961.56350000);
            case 49: return vector( 3.37280000, 534.35520000, -1139.43900000);
            case 50: return vector( 3.37280000, 586.91720000, -1213.33900000);
            case 51: return vector( 14.39730000, 621.91630000, -1326.58500000);
            case 52: return vector( 14.41320000, 697.74240000, -1289.67800000);
            case 53: return vector( 18.58520000, 699.62350000, -1473.64100000);
            case 54: return vector( 18.56470000, 800.27630000, -1442.52000000);
            case 55: return vector( 18.53680000, 868.28020000, -1485.18600000);
            case 56: return vector( 19.35650000, 1128.87800000, -1410.87500000);
            case 57: return vector( 25.68970000, 1101.12300000, -1530.98800000);
            case 58: return vector( 22.06770000, 1096.15700000, -1482.66000000);
            case 59: return vector( 18.56670000, 952.04250000, -1324.23300000);
            case 60: return vector( 18.62050000, 812.95060000, -1116.48000000);
            case 61: return vector( 22.28230000, 790.52140000, -1539.90800000);
            case 62: return vector( 22.41000000, 549.57100000, -1536.89400000);
            case 63: return vector( 18.29070000, 564.57150000, -1437.82600000);
            case 64: return vector( 11.47960000, 513.36310000, -1371.03800000);
            case 65: return vector( 11.50240000, 481.46410000, -1316.28300000);
            case 66: return vector( 13.62130000, 406.00100000, -1355.12500000);
            case 67: return vector( 13.61990000, 329.50480000, -1389.73000000);
            case 68: return vector( 10.94580000, 273.62780000, -1419.33100000);
            case 69: return vector( 22.35660000, 373.78560000, -1557.78100000);
            case 70: return vector( 23.15560000, 382.59050000, -1692.34400000);
            case 71: return vector( 25.76310000, 465.39960000, -1742.06800000);
            case 72: return vector( 24.52370000, 527.81240000, -1642.03900000);
            case 73: return vector( 26.72250000, 593.61800000, -1697.34400000);
            case 74: return vector( 30.16810000, 666.59830000, -1715.70700000);
            case 75: return vector( 28.73200000, 819.00730000, -1626.71100000);
            case 76: return vector( 26.65330000, 722.91480000, -1617.95100000);
            case 77: return vector( 21.95440000, 278.70010000, -1858.60400000);
            case 78: return vector( 11.40920000, 174.99400000, -1629.69900000);
            case 79: return vector( 8.33030000, 49.06910000, -1722.45800000);
            case 80: return vector( 10.18690000, 137.05040000, -1733.34200000);
            case 81: return vector( 8.86220000, 98.23710000, -1838.51900000);
            case 82: return vector( 6.46700000, 30.42410000, -1923.29500000);
            case 83: return vector( 6.56920000, 47.74070000, -2004.63800000);
            case 84: return vector( 6.44380000, 85.64860000, -2111.06000000);
            case 85: return vector( 11.04470000, 162.83980000, -2117.73500000);
            case 86: return vector( 6.46760000, 22.96640000, -2162.07600000);
            case 87: return vector( 6.41700000, -20.20610000, -2096.04500000);
            case 88: return vector( 5.36250000, -58.98760000, -2052.07600000);
            case 89: return vector( 5.36200000, -63.90730000, -1988.34200000);
            case 90: return vector( 8.30550000, 65.12480000, -1803.32000000);
            case 91: return vector( 7.98240000, -26.54290000, -1661.46800000);
            case 92: return vector( 9.04390000, 7.02510000, -1605.84700000);
            case 93: return vector( 8.33010000, 94.73040000, -1647.83200000);
            case 94: return vector( 5.62780000, -83.44280000, -1582.47600000);
            case 95: return vector( 7.57060000, 203.07340000, -1325.71700000);
            case 96: return vector( 12.37480000, 305.19860000, -1311.18900000);
            case 97: return vector( 3.50000000, 409.32710000, -1136.75900000);
            case 98: return vector( 3.38140000, 302.66380000, -1221.75400000);
            case 99: return vector( 3.43250000, 220.56600000, -1211.77500000);
            case 100: return vector( 3.23210000, 156.45230000, -1103.03600000);
            case 101: return vector( 3.20690000, 14.68160000, -1173.89300000);
            case 102: return vector( 6.09490000, 35.36320000, -1373.79900000);
            case 103: return vector( 5.29650000, -23.42280000, -1388.33400000);
            case 104: return vector( 5.29510000, -81.36370000, -1497.59500000);
            case 105: return vector( 1.74990000, -276.05370000, -1698.75400000);
            case 106: return vector( 2.04540000, -498.97090000, -1763.43500000);
            case 107: return vector( 3.36560000, -388.59680000, -2058.28100000);
            case 108: return vector( 1.83670000, -652.61490000, -1821.11700000);
            case 109: return vector( 1.83680000, -571.96330000, -1473.77800000);
            case 110: return vector( 1.83700000, -273.85070000, -1460.09800000);
            case 111: return vector( -4.10300000, -309.17450000, -1590.66400000);
            case 112: return vector( 1.92350000, -495.69040000, -1349.04400000);
            case 113: return vector( 1.83730000, -585.87230000, -1198.31300000);
            case 114: return vector( 1.91810000, -307.02280000, -1048.56100000);
            case 115: return vector( 2.92350000, -189.61200000, -1225.26600000);
            case 116: return vector( 3.24710000, -120.01700000, -1101.24700000);
        }
        break;
        case 5:
        if (iParam1 == -1)
        {
            iParam1 = sub_22648( 0, 17 );
        }
        switch (iParam1)
        {
            case 0: return vector( 3.34110000, -405.85830000, -2045.04200000);
            case 1: return vector( 3.60510000, -428.17680000, -1547.04500000);
            case 2: return vector( 1.83700000, -637.65390000, -1795.02900000);
            case 3: return vector( 1.74950000, -247.12960000, -1795.40600000);
            case 4: return vector( 2.04560000, -463.58520000, -1785.83200000);
            case 5: return vector( 1.83860000, -587.66360000, -1549.03400000);
            case 6: return vector( 1.79720000, -272.56520000, -1540.37100000);
            case 7: return vector( 1.93740000, -397.69540000, -1702.85200000);
            case 8: return vector( 2.04570000, -487.50770000, -1905.31100000);
            case 9: return vector( 6.61150000, -238.27010000, -1946.72100000);
            case 10: return vector( 2.04560000, -395.38440000, -1820.22000000);
            case 11: return vector( 2.20890000, -361.97140000, -1934.11800000);
            case 12: return vector( 1.83830000, -654.23890000, -1891.93000000);
            case 13: return vector( 2.15020000, -566.00420000, -1946.33200000);
            case 14: return vector( 1.92410000, -575.05820000, -1686.18500000);
            case 15: return vector( 1.92450000, -512.00100000, -1675.69000000);
            case 16: return vector( 1.75040000, -273.01930000, -1698.45700000);
        }
        break;
        case 6:
        if (iParam1 == -1)
        {
            iParam1 = sub_22648( 0, 8 );
        }
        switch (iParam1)
        {
            case 0: return vector( 2.19400000, -348.87500000, -1116.10600000);
            case 1: return vector( 2.91770000, -429.06620000, -940.68080000);
            case 2: return vector( 2.43110000, -340.27360000, -986.03560000);
            case 3: return vector( 1.20020000, -457.83440000, -1121.07900000);
            case 4: return vector( 2.25220000, -403.28160000, -1044.28900000);
            case 5: return vector( 2.18010000, -431.28990000, -976.45000000);
            case 6: return vector( 2.19350000, -344.18240000, -1086.08800000);
            case 7: return vector( 2.12800000, -439.94420000, -1033.14200000);
        }
        break;
        case 7:
        if (iParam1 == -1)
        {
            iParam1 = sub_22648( 0, 13 );
        }
        switch (iParam1)
        {
            case 0: return vector( 3.37300000, 584.01250000, -1206.65900000);
            case 1: return vector( 3.37410000, 563.02200000, -1059.49400000);
            case 2: return vector( 3.37310000, 446.30590000, -1024.97900000);
            case 3: return vector( 3.44830000, 408.12270000, -1131.37000000);
            case 4: return vector( 3.37300000, 515.66940000, -1212.68900000);
            case 5: return vector( 6.22280000, 357.56740000, -1258.87200000);
            case 6: return vector( 3.50290000, 320.74460000, -1058.82900000);
            case 7: return vector( 5.24340000, -22.90110000, -1259.38600000);
            case 8: return vector( 3.21300000, 31.39740000, -1119.07800000);
            case 9: return vector( 3.26060000, 182.47170000, -1031.13300000);
            case 10: return vector( 3.43290000, 218.98540000, -1214.23100000);
            case 11: return vector( 3.23290000, 132.70520000, -1163.08600000);
            case 12: return vector( 3.28990000, 69.00570000, -1288.22500000);
        }
        break;
        case 8:
        if (iParam1 == -1)
        {
            iParam1 = sub_22648( 0, 11 );
        }
        switch (iParam1)
        {
            case 0: return vector( 3.95890000, -1025.65300000, -527.53870000);
            case 1: return vector( 3.83770000, -980.64140000, -625.33890000);
            case 2: return vector( 3.83770000, -899.27890000, -557.97600000);
            case 3: return vector( 3.83770000, -956.35500000, -491.18220000);
            case 4: return vector( 3.83770000, -848.72050000, -620.40250000);
            case 5: return vector( 12.06720000, -719.66980000, -610.40250000);
            case 6: return vector( 12.06630000, -786.44850000, -579.95470000);
            case 7: return vector( 4.43890000, -783.92350000, -657.18670000);
            case 8: return vector( 4.53750000, -852.37730000, -679.55770000);
            case 9: return vector( 4.53770000, -818.11370000, -523.48290000);
            case 10: return vector( 4.04630000, -1035.31200000, -589.67140000);
        }
        break;
        case 9:
        if (iParam1 == -1)
        {
            iParam1 = sub_22648( 0, 9 );
        }
        switch (iParam1)
        {
            case 0: return vector( 8.25160000, -62.69920000, 513.75260000);
            case 1: return vector( 7.73390000, 20.42110000, 438.30620000);
            case 2: return vector( 7.01870000, 104.81900000, 475.32740000);
            case 3: return vector( 7.71170000, 188.55850000, 554.05080000);
            case 4: return vector( 7.86380000, 298.63960000, 551.92350000);
            case 5: return vector( 7.70000000, 378.30950000, 467.79140000);
            case 6: return vector( 7.69450000, 279.19560000, 402.92760000);
            case 7: return vector( 7.75130000, 200.00230000, 469.10680000);
            case 8: return vector( 7.64390000, 143.16430000, 390.26780000);
        }
        break;
        case 10:
        if (iParam1 == -1)
        {
            iParam1 = sub_22648( 0, 13 );
        }
        switch (iParam1)
        {
            case 0: return vector( 1.80740000, 611.17860000, 629.72290000);
            case 1: return vector( 1.78520000, 760.26010000, 678.35020000);
            case 2: return vector( 1.73140000, 908.50520000, 605.03600000);
            case 3: return vector( 1.79620000, 755.22210000, 587.71640000);
            case 4: return vector( 1.73500000, 825.87650000, 478.63080000);
            case 5: return vector( 1.71450000, 1085.91700000, 479.15260000);
            case 6: return vector( 1.86610000, 1059.57500000, 605.38620000);
            case 7: return vector( 1.92710000, 996.68460000, 652.16320000);
            case 8: return vector( 1.74890000, 883.31270000, 667.88930000);
            case 9: return vector( 2.00830000, 675.89100000, 641.09500000);
            case 10: return vector( 1.73950000, 840.26280000, 555.20860000);
            case 11: return vector( 1.71740000, 977.89650000, 533.64810000);
            case 12: return vector( 1.71730000, 1010.97200000, 466.51330000);
        }
        break;
        case 11:
        if (iParam1 == -1)
        {
            iParam1 = sub_22648( 0, 13 );
        }
        switch (iParam1)
        {
            case 0: return vector( 4.80800000, 550.49180000, 2390.17300000);
            case 1: return vector( 4.80800000, 459.13780000, 2467.25700000);
            case 2: return vector( 4.80800000, 158.52140000, 2344.48900000);
            case 3: return vector( 4.80800000, 81.51120000, 2300.17400000);
            case 4: return vector( 4.80790000, 272.02870000, 2473.11900000);
            case 5: return vector( 4.80940000, 391.23960000, 2643.09500000);
            case 6: return vector( 4.85380000, 585.34740000, 2559.27100000);
            case 7: return vector( 4.80790000, 681.00580000, 2249.42400000);
            case 8: return vector( 4.80800000, 536.96060000, 2474.69900000);
            case 9: return vector( 4.80800000, 446.89450000, 2631.09700000);
            case 10: return vector( 4.80890000, 371.22510000, 2524.32500000);
            case 11: return vector( 4.80790000, 274.37840000, 2549.25300000);
            case 12: return vector( 4.80770000, 179.16780000, 2431.22900000);
        }
        break;
    }
    return vector( 0.00000000, 0.00000000, 0.00000000);
}

void sub_93684(unknown uParam0)
{
    switch (l_U1829._fU1288)
    {
        case 0:
        switch (l_U1829._fU1292)
        {
            case 0:
            case 3:
            case 6:
            sub_93921( -380.00000000, 861.00000000, 14.00000000, -386.67840000, 883.34530000, 15.06170000, -386.53050000, 887.86630000, 15.06170000, 258.20270000, 232.55900000, -373.29670000, 869.05710000, 13.67000000, -373.04500000, 890.03320000, 13.68010000, 179.54170000, 183.71170000 );
            l_U2249[2] = {-372.69280000, 896.73360000, 13.69830000};
            l_U2274[2] = 179.54170000;
            l_U2249[3] = {-373.62250000, 850.88100000, 13.64990000};
            l_U2274[3] = 179.54170000;
            break;
            case 1:
            case 4:
            case 7:
            sub_93921( -380.00000000, 861.00000000, 14.00000000, -386.67840000, 883.34530000, 15.06170000, -386.53050000, 887.86630000, 15.06170000, 258.20270000, 232.55900000, -373.29670000, 869.05710000, 13.67000000, -373.04500000, 890.03320000, 13.68010000, 179.54170000, 183.71170000 );
            l_U2249[2] = {-372.69280000, 896.73360000, 13.69830000};
            l_U2274[2] = 179.54170000;
            l_U2249[3] = {-373.62250000, 850.88100000, 13.64990000};
            l_U2274[3] = 179.54170000;
            break;
            case 2:
            case 5:
            sub_93921( 151.00000000, -256.00000000, 15.00000000, 150.03290000, -257.24080000, 13.75010000, 149.56560000, -251.68670000, 13.76750000, 2.50730000, 175.23910000, 143.60220000, -266.40150000, 13.71810000, 143.51850000, -254.98040000, 13.72240000, 2.24750000, 0.39980000 );
            l_U2249[2] = {144.01610000, -293.65970000, 13.69760000};
            l_U2274[2] = 2.24750000;
            l_U2249[3] = {144.45900000, -279.96160000, 13.67450000};
            l_U2274[3] = 2.24750000;
            break;
        }
        break;
        case 1:
        switch (l_U1829._fU1292)
        {
            case 2:
            case 5:
            sub_93921( -1197.40000000, 1631.63000000, 34.40000000, -1215.33600000, 1644.18600000, 33.25570000, -1220.20000000, 1643.18600000, 33.25470000, 190.28940000, 237.57900000, -1200.11400000, 1629.64800000, 32.17350000, -1219.78600000, 1639.07800000, 33.25100000, 176.31840000, 261.63210000 );
            l_U2249[2] = {-1237.18300000, 1641.49200000, 33.24750000};
            l_U2274[2] = 276.67150000;
            l_U2249[3] = {-1250.13200000, 1653.08200000, 33.24460000};
            l_U2274[3] = 179.29250000;
            break;
            case 1:
            case 4:
            case 7:
            sub_93921( -2035.65000000, -95.32000000, 7.34000000, -2050.44200000, -81.72030000, 5.67600000, -2063.94800000, -81.86150000, 5.68120000, 197.04550000, 230.52270000, -2066.47500000, -90.26330000, 5.70580000, -2049.80000000, -88.68810000, 5.65030000, 88.44660000, 89.29760000 );
            l_U2249[2] = {-2086.54300000, -88.66280000, 5.64980000};
            l_U2274[2] = 90.38290000;
            l_U2249[3] = {-2104.60200000, -88.33640000, 5.63840000};
            l_U2274[3] = 89.76970000;
            break;
            case 0:
            case 3:
            case 6:
            sub_93921( -1585.58000000, 774.20000000, 26.22000000, -1480.57600000, 1122.22500000, 22.04650000, -1481.06600000, 1115.11200000, 22.03360000, 262.17230000, 292.17910000, -1467.25900000, 1128.20400000, 22.00860000, -1466.94900000, 1113.28100000, 22.05270000, 180.34670000, 177.90950000 );
            l_U2249[2] = {-1479.17800000, 1098.52400000, 22.04320000};
            l_U2274[2] = 284.32680000;
            l_U2249[3] = {-1492.52600000, 1094.78500000, 22.41320000};
            l_U2274[3] = 174.65740000;
            break;
        }
        break;
        case 2:
        switch (l_U1829._fU1292)
        {
            case 0:
            case 3:
            case 6:
            sub_93921( 1013.65000000, 1872.87000000, 20.15000000, 1054.83900000, 1840.82600000, 11.78670000, 1050.80600000, 1834.32900000, 11.81900000, 202.77750000, 241.26290000, 1062.71800000, 1833.85100000, 11.66620000, 1060.61100000, 1818.50600000, 11.70410000, 151.42210000, 199.90430000 );
            l_U2249[2] = {1075.21800000, 1808.86300000, 11.74740000};
            l_U2274[2] = 267.33690000;
            l_U2249[3] = {1090.48300000, 1825.82000000, 11.70980000};
            l_U2274[3] = 20.82650000;
            break;
            case 1:
            case 4:
            case 7:
            sub_93921( 1346.65000000, 1653.22000000, 16.98000000, 1348.47100000, 1654.90900000, 15.66580000, 1348.13700000, 1639.81900000, 15.66960000, 181.50330000, 179.01610000, 1355.12200000, 1628.87200000, 15.76780000, 1355.66900000, 1647.96000000, 15.59830000, 5.58580000, 5.58580000 );
            l_U2249[2] = {1355.77400000, 1662.13000000, 15.64270000};
            l_U2274[2] = 359.84440000;
            l_U2249[3] = {1355.82300000, 1681.41700000, 15.74990000};
            l_U2274[3] = 359.84440000;
            break;
            case 2:
            case 5:
            sub_93921( 917.32000000, 1559.49000000, 17.64000000, 927.67960000, 1560.83600000, 15.83610000, 931.30480000, 1565.24100000, 15.77040000, 86.46360000, 273.13160000, 918.65290000, 1559.72900000, 15.51390000, 925.44730000, 1566.41500000, 15.60320000, 134.62760000, 134.50760000 );
            l_U2249[2] = {931.69840000, 1559.07400000, 15.79810000};
            l_U2274[2] = 52.88650000;
            l_U2249[3] = {938.20060000, 1578.96300000, 15.59170000};
            l_U2274[3] = 130.57950000;
            break;
        }
        break;
        case 3:
        switch (l_U1829._fU1292)
        {
            case 0:
            case 3:
            case 6:
            sub_93921( 1339.14000000, -751.80000000, 9.54000000, 1347.28600000, -749.74820000, 7.33820000, 1349.07300000, -754.86910000, 7.33820000, 68.03230000, 156.26840000, 1345.91700000, -771.02830000, 7.33420000, 1340.67800000, -748.79410000, 7.29250000, 10.93660000, 10.93660000 );
            l_U2249[2] = {1365.03500000, -781.05480000, 7.51230000};
            l_U2274[2] = 93.84920000;
            l_U2249[3] = {1362.56500000, -765.88950000, 7.51960000};
            l_U2274[3] = 118.32070000;
            break;
            case 1:
            case 4:
            case 7:
            sub_93921( 771.56000000, -311.99000000, 13.87000000, 778.63770000, -315.65060000, 10.85500000, 779.51610000, -308.72920000, 11.81070000, 115.71850000, 60.80390000, 774.74910000, -307.42740000, 11.68660000, 771.08110000, -324.23680000, 9.98570000, 332.54410000, 348.91570000 );
            l_U2249[2] = {772.14250000, -328.79520000, 9.42640000};
            l_U2274[2] = 5.15710000;
            l_U2249[3] = {775.94670000, -338.43160000, 7.74310000};
            l_U2274[3] = 59.20540000;
            break;
            case 2:
            case 5:
            sub_93921( 1337.10000000, -137.51000000, 25.69000000, 1352.86400000, -132.37640000, 21.82370000, 1356.31400000, -133.05060000, 21.56160000, 237.53530000, 254.77030000, 1349.28900000, -138.82180000, 22.05820000, 1364.06700000, -138.98710000, 21.07630000, 91.27700000, 91.27700000 );
            l_U2249[2] = {1374.02000000, -138.61450000, 20.54990000};
            l_U2274[2] = 93.26850000;
            l_U2249[3] = {1385.21200000, -130.58910000, 20.63330000};
            l_U2274[3] = 166.12070000;
            break;
        }
        break;
    }
    return;
}

void sub_93921(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18)
{
    l_U1829._fU460 = {uParam0};
    l_U2215[0] = {uParam3};
    l_U2215[1] = {uParam6};
    l_U2240[0] = uParam9;
    l_U2240[1] = uParam10;
    l_U2249[0] = {uParam11};
    l_U2249[1] = {uParam14};
    l_U2274[0] = uParam17;
    l_U2274[1] = uParam18;
    return;
}

int sub_96482()
{
    int I;

    for ( I = 0; I <= 15; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1588[I]._fU36)
            {
                if (l_U1829._fU1300 > 0)
                {
                    if (l_U1829._fU1092[I] == (GET_PLAYER_TEAM( sub_3442( I ) )))
                    {
                        return 0;
                    }
                }
            }
        }
    }
    return 1;
}

int sub_96701(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    switch (l_U1829._fU1288)
    {
        case 0:
        uVar3 = {sub_82170( 2, -1 )};
        if (GET_CLOSEST_CAR_NODE( uVar3._fU0, uVar3._fU4, uVar3._fU8, iParam0 + 0, iParam0 + 4, iParam0 + 8 ))
        {
            if (((VDIST( l_U1829._fU460, (iParam0^) )) > l_U2320) AND ((VDIST( l_U1829._fU460, (iParam0^) )) < l_U2321))
            {
                sub_78133();
                return 1;
            }
        }
        break;
        case 1:
        uVar3 = {sub_82170( 3, -1 )};
        if (GET_CLOSEST_CAR_NODE( uVar3._fU0, uVar3._fU4, uVar3._fU8, iParam0 + 0, iParam0 + 4, iParam0 + 8 ))
        {
            if (((VDIST( l_U1829._fU460, (iParam0^) )) > l_U2320) AND ((VDIST( l_U1829._fU460, (iParam0^) )) < l_U2321))
            {
                sub_78133();
                return 1;
            }
        }
        break;
        case 2:
        if (l_U1829._fU528[2] == 1)
        {
            uVar3 = {sub_82170( 1, -1 )};
        }
        else
        {
            uVar3 = {sub_82170( 0, -1 )};
        }
        if (GET_CLOSEST_CAR_NODE( uVar3._fU0, uVar3._fU4, uVar3._fU8, iParam0 + 0, iParam0 + 4, iParam0 + 8 ))
        {
            if (((VDIST( l_U1829._fU460, (iParam0^) )) > l_U2320) AND ((VDIST( l_U1829._fU460, (iParam0^) )) < l_U2321))
            {
                sub_78133();
                return 1;
            }
        }
        break;
        case 3:
        if (l_U1829._fU528[2] == 1)
        {
            uVar3 = {sub_82170( 0, -1 )};
        }
        else
        {
            uVar3 = {sub_82170( 1, -1 )};
        }
        if (GET_CLOSEST_CAR_NODE( uVar3._fU0, uVar3._fU4, uVar3._fU8, iParam0 + 0, iParam0 + 4, iParam0 + 8 ))
        {
            if (((VDIST( l_U1829._fU460, (iParam0^) )) > l_U2320) AND ((VDIST( l_U1829._fU460, (iParam0^) )) < l_U2321))
            {
                sub_78133();
                return 1;
            }
        }
        break;
    }
    return 0;
}

void sub_97693()
{
    if (l_U1829._fU1300 == 0)
    {
        l_U1829._fU1264 = 2;
    }
    return;
}

int sub_97751()
{
    int I;
    unknown uVar3;
    int[1] iVar4;
    unknown[1] uVar6;
    int iVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    array(ref iVar4, 1);
    array(ref uVar6, 1);
    iVar4[0] = 2046537925;
    uVar6[0] = sub_97778();
    if (NOT l_U1829._fU1392)
    {
        for ( I = 0; I <= (sub_98310( 1 )); I++ )
        {
            if (I == 0)
            {
                if (l_U1829._fU484[I] == nil)
                {
                    if (GET_RANDOM_CAR_NODE( l_U1829._fU472, 250.00000000 + (l_U2452 * 15.00000000), 1, 1, 1, ref uVar9, ref uVar3 ))
                    {
                        GET_SPAWN_COORDINATES_FOR_CAR_NODE( uVar3, l_U1829._fU460, ref uVar9, ref uVar12 );
                        if (uVar9._fU8 > 0.00000000)
                        {
                            sub_98561( ref l_U1829._fU484[I], ref iVar4, uVar9, uVar12 );
                            sub_98692( l_U1829._fU484[I] );
                            SWITCH_CAR_SIREN( sub_72195( l_U1829._fU484[I] ), 1 );
                            sub_98561( ref l_U1829._fU524, ref uVar6, l_U2283, l_U2286 );
                            SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES( l_U1829._fU524, 1 );
                            if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1829._fU524 ))
                            {
                                if (NOT (IS_CAR_DEAD( sub_72195( l_U1829._fU524 ) )))
                                {
                                    SET_CAR_ENGINE_ON( sub_72195( l_U1829._fU524 ), 1, 1 );
                                }
                            }
                            SET_LOAD_COLLISION_FOR_CAR_FLAG( sub_72195( l_U1829._fU524 ), 1 );
                            GET_CAR_MODEL( sub_72195( l_U1829._fU524 ), ref iVar8 );
                            if (iVar8 == -1660661558)
                            {
                                FREEZE_CAR_POSITION( sub_72195( l_U1829._fU524 ), 1 );
                            }
                            if (I == (sub_98310( 1 )))
                            {
                                l_U1829._fU1392 = 1;
                                return 1;
                            }
                        }
                    }
                    else
                    {
                        l_U2451++;
                        if (l_U2451 > 10)
                        {
                            l_U2452++;
                            l_U2451 = 0;
                        }
                    }
                }
            }
            else if (sub_72160( l_U1829._fU484[I - 1] ))
            {
                if (l_U1829._fU484[I] == nil)
                {
                    if (GET_RANDOM_CAR_NODE( l_U1829._fU472, 125.00000000 + (l_U2452 * 15.00000000), 1, 1, 1, ref uVar9, ref uVar3 ))
                    {
                        GET_SPAWN_COORDINATES_FOR_CAR_NODE( uVar3, l_U1829._fU460, ref uVar9, ref uVar12 );
                        if (uVar9._fU8 > 0.00000000)
                        {
                            sub_98561( ref l_U1829._fU484[I], ref iVar4, uVar9, uVar12 );
                            sub_98692( l_U1829._fU484[I] );
                            SWITCH_CAR_SIREN( sub_72195( l_U1829._fU484[I] ), 1 );
                            if (I == (sub_98310( 1 )))
                            {
                                l_U1829._fU1392 = 1;
                                return 1;
                            }
                        }
                        else
                        {
                            return 0;
                        }
                    }
                    else
                    {
                        l_U2451++;
                        if (l_U2451 > 10)
                        {
                            l_U2452++;
                            l_U2451 = 0;
                        }
                    }
                }
            }
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

void sub_97778()
{
    int Result;

    switch (l_U1829._fU1288)
    {
        case 0:
        if (l_U1829._fU528[2] == 1)
        {
            switch (l_U1829._fU1292)
            {
                case 0:
                case 2:
                case 4:
                case 6:
                Result = 400514754;
                break;
                case 1:
                case 3:
                case 5:
                Result = -1660661558;
                break;
            }
        }
        else
        {
            switch (l_U1829._fU1292)
            {
                case 1:
                case 2:
                case 4:
                Result = -1660661558;
                break;
                default:
                Result = 400514754;
                break;
            }
        }
        break;
        case 1:
        if (l_U1829._fU528[2] == 1)
        {
            switch (l_U1829._fU1292)
            {
                case 0:
                case 2:
                case 3:
                case 6:
                Result = -1660661558;
                break;
                default:
                Result = 400514754;
                break;
            }
        }
        else
        {
            switch (l_U1829._fU1292)
            {
                case 2:
                case 3:
                case 5:
                case 1:
                case 0:
                case 6:
                Result = -1660661558;
                break;
                default:
                Result = 400514754;
                break;
            }
        }
        break;
        case 2:
        switch (l_U1829._fU1292)
        {
            case 2:
            Result = -1660661558;
            break;
            default:
            Result = 400514754;
            break;
        }
        break;
        case 3: return 400514754;
    }
    return Result;
}

int sub_98310(unknown uParam0)
{
    if ((sub_3405( uParam0 )) < 4)
    {
        return 0;
    }
    if (((sub_3405( uParam0 )) > 4) AND ((sub_3405( uParam0 )) <= 8))
    {
        return 1;
    }
    if (((sub_3405( uParam0 )) > 8) AND ((sub_3405( uParam0 )) <= 12))
    {
        return 2;
    }
    if ((sub_3405( uParam0 )) > 12)
    {
        return 3;
    }
    return 3;
}

void sub_98561(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;

    GENERATE_RANDOM_INT_IN_RANGE( 0, (uParam1^), ref uVar8 );
    CREATE_CAR( (uParam1^)[uVar8], uParam2._fU0, uParam2._fU4, uParam2._fU8, ref uVar9, 1 );
    SET_CAR_HEADING( uVar9, uParam5 );
    (uParam0^) = sub_98628( uVar9 );
    SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES( (uParam0^), 1 );
    return;
}

void sub_98628(unknown uParam0)
{
    unknown Result;

    GET_NETWORK_ID_FROM_VEHICLE( uParam0, ref Result );
    return Result;
}

void sub_98692(unknown uParam0)
{
    SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES( uParam0, 1 );
    if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        if (NOT (IS_CAR_DEAD( sub_72195( uParam0 ) )))
        {
            SET_CAR_ENGINE_ON( sub_72195( uParam0 ), 1, 1 );
        }
    }
    LOCK_CAR_DOORS( sub_72195( uParam0 ), 1 );
    SET_LOAD_COLLISION_FOR_CAR_FLAG( sub_72195( uParam0 ), 1 );
    return;
}

void sub_99432()
{
    int I;
    unknown uVar3;

    l_U2331._fU136 = 0;
    l_U2391._fU136 = 0;
    l_U2331._fU140 = 0;
    l_U2391._fU140 = 0;
    l_U2331._fU224 = 0;
    l_U2331._fU228 = 0;
    l_U2331._fU232 = 0;
    l_U2331._fU236 = 0;
    l_U2391._fU224 = 0;
    l_U2391._fU228 = 0;
    l_U2391._fU232 = 0;
    l_U2391._fU236 = 0;
    for ( I = 0; I <= 15; I++ )
    {
        l_U2331._fU0[I] = -1;
        l_U2391._fU0[I] = -1;
        l_U2331._fU68[I] = -1;
        l_U2391._fU68[I] = -1;
    }
    for ( I = 0; I <= 15; I++ )
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref uVar3 );
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1588[I]._fU36)
            {
                if (l_U1829._fU888[I] == 0)
                {
                    l_U2331._fU0[l_U2331._fU136] = I;
                    l_U2331._fU136++;
                }
                else if (l_U1829._fU888[I] == 1)
                {
                    l_U2391._fU0[l_U2391._fU136] = I;
                    l_U2391._fU136++;
                }
            }
        }
    }
    l_U2331._fU140 = (l_U2331._fU136 / 4) + 1;
    l_U2391._fU140 = (l_U2391._fU136 / 4) + 1;
    for ( I = 0; I <= (l_U2331._fU136 - 1); I++ )
    {
        if (I < 4)
        {
            if (l_U2331._fU0[I] != -1)
            {
                l_U2331._fU68[l_U2331._fU0[I]] = 0;
                l_U1829._fU820[l_U2331._fU0[I]] = 0;
                l_U2331._fU224++;
            }
        }
        if ((I >= 4) AND (I < 8))
        {
            if (l_U2331._fU0[I] != -1)
            {
                l_U2331._fU68[l_U2331._fU0[I]] = 1;
                l_U1829._fU820[l_U2331._fU0[I]] = 1;
                l_U2331._fU228++;
            }
        }
        if ((I >= 8) AND (I < 12))
        {
            if (l_U2331._fU0[I] != -1)
            {
                l_U2331._fU68[l_U2331._fU0[I]] = 2;
                l_U1829._fU820[l_U2331._fU0[I]] = 2;
                l_U2331._fU232++;
            }
        }
        if ((I >= 12) AND (I < 16))
        {
            if (l_U2331._fU0[I] != -1)
            {
                l_U2331._fU68[l_U2331._fU0[I]] = 3;
                l_U1829._fU820[l_U2331._fU0[I]] = 3;
                l_U2331._fU236++;
            }
        }
    }
    for ( I = 0; I <= (l_U2391._fU136 - 1); I++ )
    {
        if (I < 4)
        {
            if (l_U2391._fU0[I] != -1)
            {
                l_U2391._fU68[l_U2391._fU0[I]] = 0;
                l_U1829._fU820[l_U2391._fU0[I]] = 0;
                l_U2391._fU224++;
            }
        }
        if ((I >= 4) AND (I < 8))
        {
            if (l_U2391._fU0[I] != -1)
            {
                l_U2391._fU228++;
                l_U2391._fU68[l_U2391._fU0[I]] = 1;
                l_U1829._fU820[l_U2391._fU0[I]] = 1;
            }
        }
        if ((I >= 8) AND (I < 12))
        {
            if (l_U2391._fU0[I] != -1)
            {
                l_U2391._fU68[l_U2391._fU0[I]] = 2;
                l_U1829._fU820[l_U2391._fU0[I]] = 2;
                l_U2391._fU232++;
            }
        }
        if ((I >= 12) AND (I < 16))
        {
            if (l_U2391._fU0[I] != -1)
            {
                l_U2391._fU68[l_U2391._fU0[I]] = 3;
                l_U1829._fU820[l_U2391._fU0[I]] = 3;
                l_U2391._fU236++;
            }
        }
    }
    sub_100729( ref l_U2331._fU144, l_U2331._fU224 );
    sub_100729( ref l_U2331._fU164, l_U2331._fU228 );
    sub_100729( ref l_U2331._fU184, l_U2331._fU232 );
    sub_100729( ref l_U2331._fU204, l_U2331._fU236 );
    sub_100729( ref l_U2391._fU144, l_U2391._fU224 );
    sub_100729( ref l_U2391._fU164, l_U2391._fU228 );
    sub_100729( ref l_U2391._fU184, l_U2391._fU232 );
    sub_100729( ref l_U2391._fU204, l_U2391._fU236 );
    sub_101040( 0, 0 );
    sub_101040( 0, 1 );
    sub_101040( 0, 2 );
    sub_101040( 0, 3 );
    sub_101040( 1, 0 );
    sub_101040( 1, 1 );
    sub_101040( 1, 2 );
    sub_101040( 1, 3 );
    l_U1829._fU1384 = 1;
    return;
}

void sub_100729(unknown uParam0, int iParam1)
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

void sub_101040(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    switch (iParam1)
    {
        case 0:
        if (iParam0 == 0)
        {
            for ( I = 0; I <= 15; I++ )
            {
                if (IS_NETWORK_PLAYER_ACTIVE( I ))
                {
                    if (l_U1588[I]._fU36)
                    {
                        if (l_U1829._fU888[I] == 0)
                        {
                            if (l_U2331._fU68[I] == iParam1)
                            {
                                if (l_U1829._fU820[I] == iParam1)
                                {
                                    if (iVar5 < l_U2331._fU224)
                                    {
                                        l_U1829._fU752[I] = l_U2331._fU144[iVar5];
                                        iVar5++;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        else
        {
            for ( I = 0; I <= 15; I++ )
            {
                if (IS_NETWORK_PLAYER_ACTIVE( I ))
                {
                    if (l_U1588[I]._fU36)
                    {
                        if (l_U1829._fU888[I] == 1)
                        {
                            if (l_U2391._fU68[I] == iParam1)
                            {
                                if (l_U1829._fU820[I] == iParam1)
                                {
                                    if (iVar5 < l_U2391._fU224)
                                    {
                                        l_U1829._fU752[I] = l_U2391._fU144[iVar5];
                                        iVar5++;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        break;
        case 1:
        if (iParam0 == 0)
        {
            for ( I = 0; I <= 15; I++ )
            {
                if (IS_NETWORK_PLAYER_ACTIVE( I ))
                {
                    if (l_U1588[I]._fU36)
                    {
                        if (l_U1829._fU888[I] == 0)
                        {
                            if (l_U2331._fU68[I] == iParam1)
                            {
                                if (l_U1829._fU820[I] == iParam1)
                                {
                                    if (iVar5 < l_U2331._fU228)
                                    {
                                        l_U1829._fU752[I] = l_U2331._fU164[iVar5];
                                        iVar5++;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        else
        {
            for ( I = 0; I <= 15; I++ )
            {
                if (IS_NETWORK_PLAYER_ACTIVE( I ))
                {
                    if (l_U1588[I]._fU36)
                    {
                        if (l_U1829._fU888[I] == 1)
                        {
                            if (l_U2391._fU68[I] == iParam1)
                            {
                                if (l_U1829._fU820[I] == iParam1)
                                {
                                    if (iVar5 < l_U2391._fU228)
                                    {
                                        l_U1829._fU752[I] = l_U2391._fU164[iVar5];
                                        iVar5++;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        break;
        case 2:
        if (iParam0 == 0)
        {
            for ( I = 0; I <= 15; I++ )
            {
                if (IS_NETWORK_PLAYER_ACTIVE( I ))
                {
                    if (l_U1588[I]._fU36)
                    {
                        if (l_U1829._fU888[I] == 0)
                        {
                            if (l_U2331._fU68[I] == iParam1)
                            {
                                if (l_U1829._fU820[I] == iParam1)
                                {
                                    if (iVar5 < l_U2331._fU232)
                                    {
                                        l_U1829._fU752[I] = l_U2331._fU184[iVar5];
                                        iVar5++;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        else
        {
            for ( I = 0; I <= 15; I++ )
            {
                if (IS_NETWORK_PLAYER_ACTIVE( I ))
                {
                    if (l_U1588[I]._fU36)
                    {
                        if (l_U1829._fU888[I] == 1)
                        {
                            if (l_U2391._fU68[I] == iParam1)
                            {
                                if (l_U1829._fU820[I] == iParam1)
                                {
                                    if (iVar5 < l_U2391._fU232)
                                    {
                                        l_U1829._fU752[I] = l_U2391._fU184[iVar5];
                                        iVar5++;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        break;
        case 3:
        if (iParam0 == 0)
        {
            for ( I = 0; I <= 15; I++ )
            {
                if (IS_NETWORK_PLAYER_ACTIVE( I ))
                {
                    if (l_U1588[I]._fU36)
                    {
                        if (l_U1829._fU888[I] == 0)
                        {
                            if (l_U2331._fU68[I] == iParam1)
                            {
                                if (l_U1829._fU820[I] == iParam1)
                                {
                                    if (iVar5 < l_U2331._fU236)
                                    {
                                        l_U1829._fU752[I] = l_U2331._fU204[iVar5];
                                        iVar5++;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        else
        {
            for ( I = 0; I <= 15; I++ )
            {
                if (IS_NETWORK_PLAYER_ACTIVE( I ))
                {
                    if (l_U1588[I]._fU36)
                    {
                        if (l_U1829._fU888[I] == 1)
                        {
                            if (l_U2391._fU68[I] == iParam1)
                            {
                                if (l_U1829._fU820[I] == iParam1)
                                {
                                    if (iVar5 < l_U2391._fU236)
                                    {
                                        l_U1829._fU752[I] = l_U2391._fU204[iVar5];
                                        iVar5++;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        break;
    }
    return;
}

int sub_102747()
{
    int I;
    int[1] iVar3;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    array(ref iVar3, 1);
    if (NOT l_U1829._fU1388)
    {
        if (l_U1829._fU528[2] == 0)
        {
            for ( I = 0; I <= (sub_98310( 0 )); I++ )
            {
                if (l_U1829._fU504[I] == nil)
                {
                    iVar3[0] = 1264341792;
                    CLEAR_AREA_OF_CARS( l_U2249[I]._fU0, l_U2249[I]._fU4, l_U2249[I]._fU8, 100.00000000 );
                    sub_98561( ref l_U1829._fU504[I], ref iVar3, l_U2249[I], l_U2274[I] );
                    SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES( l_U1829._fU504[I], 1 );
                    if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1829._fU504[I] ))
                    {
                        if (NOT (IS_CAR_DEAD( sub_72195( l_U1829._fU504[I] ) )))
                        {
                            SET_CAR_ENGINE_ON( sub_72195( l_U1829._fU504[I] ), 1, 1 );
                        }
                    }
                    SET_CAR_ENGINE_ON( sub_72195( l_U1829._fU504[I] ), 1, 1 );
                    SET_LOAD_COLLISION_FOR_CAR_FLAG( sub_72195( l_U1829._fU504[I] ), 0 );
                    LOCK_CAR_DOORS( sub_72195( l_U1829._fU504[I] ), 1 );
                    if (I == (sub_98310( 0 )))
                    {
                        l_U1829._fU1388 = 1;
                        return 1;
                    }
                }
            }
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_103407()
{
    int I;

    for ( I = 0; I <= 3; I++ )
    {
        if (sub_2128())
        {
            if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1829._fU484[I] ))
            {
                sub_103481( sub_72195( l_U1829._fU484[I] ) );
                l_U1829._fU484[I] = nil;
            }
            else if (I == 0)
            {
                ;
            }
            l_U1829._fU484[I] = nil;
            sub_2590();
        }
    }
    for ( I = 0; I <= 3; I++ )
    {
        if (sub_2128())
        {
            if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1829._fU504[I] ))
            {
                sub_103481( sub_72195( l_U1829._fU504[I] ) );
                l_U1829._fU504[I] = nil;
            }
            l_U1829._fU504[I] = nil;
            sub_2590();
        }
    }
    if (sub_2128())
    {
        if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1829._fU524 ))
        {
            sub_103481( sub_72195( l_U1829._fU524 ) );
            l_U1829._fU524 = nil;
        }
        l_U1829._fU524 = nil;
        sub_2590();
    }
    if (((((((((NOT (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1829._fU524 ))) AND (NOT (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1829._fU484[0] )))) AND (NOT (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1829._fU484[1] )))) AND (NOT (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1829._fU484[2] )))) AND (NOT (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1829._fU484[3] )))) AND (NOT (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1829._fU504[0] )))) AND (NOT (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1829._fU504[1] )))) AND (NOT (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1829._fU504[2] )))) AND (NOT (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1829._fU504[3] ))))
    {
        return 1;
    }
    return 0;
}

void sub_103481(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

int sub_104243()
{
    int I;
    int iVar3;

    for ( I = 0; I <= 15; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1588[I]._fU36)
            {
                if ((l_U1588[I]._fU28) AND (l_U1588[I]._fU40))
                {
                    iVar3++;
                }
            }
        }
    }
    if (iVar3 == sub_67067())
    {
        return 1;
    }
    return 0;
}

void sub_104441()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1588[I]._fU52;
    }
    sub_104505( ref l_U1829._fU1272, ref uVar3 );
    return;
}

void sub_104505(unknown uParam0, unknown uParam1)
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
    if ((iVar5[iVar23] > (sub_4726() / 2)) AND (iVar5[iVar23] > 0))
    {
        (uParam0^) = iVar23;
    }
    else
    {
        (uParam0^) = -1;
    }
    return;
}

void sub_104876()
{
    int I;

    l_U1829._fU1384 = 0;
    l_U1829._fU1388 = 0;
    l_U1829._fU1392 = 0;
    l_U1829._fU1396 = 0;
    for ( I = 0; I <= 15; I++ )
    {
        l_U1829._fU752[I] = -1;
    }
    if (l_U1829._fU1288 < 3)
    {
        l_U1829._fU1288++;
    }
    else
    {
        l_U1829._fU1288 = 0;
    }
    GENERATE_RANDOM_INT_IN_RANGE( 0, 7, ref l_U1829._fU1292 );
    l_U1829._fU1252 = l_U2206 + 10000;
    l_U1829._fU1412 = 1;
    l_U1829._fU1380 = 1;
    if (l_U1829._fU1300 < l_U1829._fU1264)
    {
        l_U1829._fU1300++;
    }
    l_U1829._fU0 = 8;
    return;
}

int sub_105446()
{
    if (NOT l_U2453)
    {
        l_U2454 = l_U2206 + 4000;
        l_U2453 = 1;
    }
    else if (l_U2454 < l_U2206)
    {
        return 1;
    }
    return 0;
}

int sub_105831(int iParam0)
{
    if (sub_72160( l_U1829._fU524 ))
    {
        if (IS_CAR_UPSIDEDOWN( sub_72195( l_U1829._fU524 ) ))
        {
            if (NOT l_U2458)
            {
                l_U2460 = l_U2206 + iParam0;
                l_U2458 = 1;
            }
            else if (l_U2460 < l_U2206)
            {
                return 1;
            }
        }
        else if (l_U2458)
        {
            l_U2458 = 0;
        }
    }
    return 0;
}

int sub_105970()
{
    int iVar2;

    if (sub_72160( l_U1829._fU524 ))
    {
        GET_CAR_MODEL( sub_72195( l_U1829._fU524 ), ref iVar2 );
        if (iVar2 == 400514754)
        {
            if (NOT (IS_CAR_IN_WATER( sub_72195( l_U1829._fU524 ) )))
            {
                if (NOT l_U2459)
                {
                    l_U2461 = l_U2206 + 15000;
                    l_U2459 = 1;
                }
                else if (l_U2461 < l_U2206)
                {
                    return 1;
                }
            }
            else if (l_U2459)
            {
                l_U2459 = 0;
            }
        }
    }
    return 0;
}

int sub_106147()
{
    if (sub_106156())
    {
        if (NOT l_U1829._fU1372)
        {
            l_U1829._fU1268 = l_U2206 + 60000;
            l_U1829._fU1372 = 1;
        }
        else if (l_U1829._fU1268 < l_U2206)
        {
            return 1;
        }
    }
    else if (l_U1829._fU1372)
    {
        l_U1829._fU1372 = 0;
    }
    return 0;
}

int sub_106156()
{
    int I;
    unknown uVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (sub_106165())
    {
        for ( I = 0; I <= 15; I++ )
        {
            if (IS_NETWORK_PLAYER_ACTIVE( I ))
            {
                if ((GET_PLAYER_TEAM( sub_3442( I ) )) == 0)
                {
                    if (l_U1829._fU528[2] == 0)
                    {
                        if (l_U1588[I]._fU32)
                        {
                            return 1;
                        }
                    }
                    else if (l_U1829._fU1284 != -1)
                    {
                        if (l_U1588[l_U1829._fU1284]._fU32)
                        {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    else if (sub_72160( l_U1829._fU524 ))
    {
        GET_CAR_MODEL( sub_72195( l_U1829._fU524 ), ref iVar4 );
        if (iVar4 == -1660661558)
        {
            GET_CAR_COORDINATES( sub_72195( l_U1829._fU524 ), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
            if ((GET_MAP_AREA_FROM_COORDS( uVar5 )) == 5)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_106165()
{
    int I;

    for ( I = 0; I <= 15; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1588[I]._fU36)
            {
                if ((GET_PLAYER_TEAM( sub_3442( I ) )) == 0)
                {
                    if (l_U1829._fU528[2] == 0)
                    {
                        if (l_U1588[I]._fU8)
                        {
                            return 0;
                        }
                    }
                    else if (l_U1829._fU1284 != -1)
                    {
                        if (l_U1588[l_U1829._fU1284]._fU8)
                        {
                            return 0;
                        }
                    }
                }
            }
        }
    }
    return 1;
}

int sub_107162()
{
    if (NOT l_U2453)
    {
        if (l_U1829._fU528[2] == 0)
        {
            if ((sub_73663( 0 )) || (sub_73663( 1 )))
            {
                l_U2454 = l_U2206 + 20000;
                l_U2453 = 1;
            }
            else
            {
                l_U2454 = l_U2206 + 20000;
                l_U2453 = 1;
            }
        }
        else
        {
            l_U2454 = l_U2206 + 20000;
            l_U2453 = 1;
        }
    }
    else if (l_U2454 < l_U2206)
    {
        l_U2453 = 0;
        return 1;
    }
    return 0;
}

int sub_107701()
{
    int J;
    int I;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (sub_67067() == 1)
    {
        sub_107722();
        return 0;
    }
    if (l_U1829._fU1284 != -1)
    {
        for ( J = 0; J <= 15; J++ )
        {
            if (J == l_U1829._fU1284)
            {
                if (NOT (IS_NETWORK_PLAYER_ACTIVE( J )))
                {
                    if (sub_107944())
                    {
                        if (sub_67067() > 2)
                        {
                            for ( I = 0; I <= 15; I++ )
                            {
                                if (IS_NETWORK_PLAYER_ACTIVE( I ))
                                {
                                    if (l_U1588[I]._fU36)
                                    {
                                        l_U1829._fU1092[I] = GET_PLAYER_TEAM( sub_3442( I ) );
                                    }
                                }
                            }
                            sub_104876();
                        }
                        else
                        {
                            for ( I = 0; I <= 15; I++ )
                            {
                                if (IS_NETWORK_PLAYER_ACTIVE( I ))
                                {
                                    if (l_U1588[I]._fU36)
                                    {
                                        l_U1829._fU1092[I] = GET_PLAYER_TEAM( sub_3442( I ) );
                                    }
                                }
                            }
                            sub_107722();
                        }
                        return 0;
                    }
                }
            }
        }
    }
    if (((sub_3405( 0 )) == 0) || ((sub_3405( 1 )) == 0))
    {
        sub_107722();
        return 0;
    }
    return 0;
}

void sub_107722()
{
    int I;

    l_U1829._fU1384 = 0;
    l_U1829._fU1388 = 0;
    l_U1829._fU1392 = 0;
    l_U1829._fU1396 = 0;
    for ( I = 0; I <= 15; I++ )
    {
        l_U1829._fU752[I] = -1;
    }
    l_U1829._fU1380 = 1;
    l_U1829._fU1252 = l_U2206 + 3500;
    l_U1829._fU1412 = 0;
    l_U1829._fU1300 = l_U1829._fU1264;
    l_U1829._fU0 = 8;
    return;
}

int sub_107944()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1588[I]._fU12 > 1)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_108297()
{
    int I;
    int iVar3;

    for ( I = 0; I <= 15; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1829._fU8[I]._fU20 == 0)
            {
                if ((GET_PLAYER_TEAM( sub_3442( I ) )) == 0)
                {
                    if (l_U1588[I]._fU8)
                    {
                        iVar3++;
                    }
                }
            }
        }
    }
    if (iVar3 > 0)
    {
        if ((iVar3 == 4) || (iVar3 == (sub_108422( 0 ))))
        {
            return 1;
        }
    }
    return 0;
}

void sub_108422(int iParam0)
{
    int I;
    int Result;

    for ( I = 0; I <= 15; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1588[I]._fU36)
            {
                if (l_U1829._fU8[I]._fU20 == 0)
                {
                    if ((GET_PLAYER_TEAM( sub_3442( I ) )) == iParam0)
                    {
                        Result++;
                    }
                }
            }
        }
    }
    return Result;
}

int sub_108746()
{
    int I;
    int iVar3;

    for ( I = 0; I <= 15; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1829._fU8[I]._fU20 == 0)
            {
                if ((GET_PLAYER_TEAM( sub_3442( I ) )) == 0)
                {
                    if (l_U1588[I]._fU8)
                    {
                        iVar3++;
                    }
                }
            }
        }
    }
    return iVar3 * 250;
}

int sub_110387()
{
    int I;

    for ( I = 0; I <= 15; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1588[I]._fU36)
            {
                if (NOT (l_U1588[I]._fU12 < 4))
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}

void sub_110488()
{
    int I;

    l_U1829._fU1228[0] = 0;
    l_U1829._fU1228[1] = 0;
    l_U1829._fU1240[0] = 0;
    l_U1829._fU1240[1] = 0;
    for ( I = 0; I < 16; I++ )
    {
        l_U1829._fU8[I]._fU0 = 0;
        l_U1829._fU8[I]._fU4 = 0;
        l_U1829._fU8[I]._fU8 = 0;
        l_U1829._fU8[I]._fU12 = 0;
        l_U1829._fU956[I] = 0;
        l_U1829._fU8[I]._fU16 = 0;
        l_U1829._fU8[I]._fU20 = 0;
        l_U1829._fU8[I]._fU24 = 0;
        l_U1829._fU1024[I] = 0;
    }
    l_U1829._fU0 = 0;
    return;
}

void sub_111666(unknown uParam0, unknown uParam1)
{
    l_U950[uParam0] = uParam1;
    return;
}

void sub_112114()
{
    int I;
    unknown[16] uVar3;
    unknown[16] uVar20;
    unknown[16] uVar37;

    array(ref uVar3, 16);
    array(ref uVar20, 16);
    array(ref uVar37, 16);
    for ( I = 0; I <= 15; I++ )
    {
        uVar3[I] = l_U1829._fU8[I]._fU0;
        uVar20[I] = l_U1829._fU8[I]._fU4;
        uVar37[I] = l_U1829._fU8[I]._fU12;
    }
    for ( I = 0; I < 16; I++ )
    {
        sub_112237( 3, ref uVar3 );
        sub_112237( 4, ref uVar20 );
        sub_112237( 6, ref uVar37 );
    }
    sub_112237( 20, ref l_U1829._fU956 );
    sub_112935( ref l_U1829._fU1228 );
    return;
}

void sub_112237(int iParam0, unknown uParam1)
{
    int I;
    int J;

    if (((iParam0 == 20) AND (NOT sub_12849())) || (iParam0 == -3))
    {
        sub_112269( uParam1 );
        return;
    }
    else
    {
        for ( J = 0; J < 7; J++ )
        {
            if (l_U564[J]._fU92 == iParam0)
            {
                for ( I = 0; I < (uParam1^); I++ )
                {
                    l_U564[J]._fU24[I] = (uParam1^)[I];
                }
                return;
            }
        }
    }
    return;
}

void sub_112269(unknown uParam0)
{
    int I;

    if (NOT l_U984)
    {
        sub_8835();
        l_U984 = 1;
    }
    for ( I = 0; I < 16; I++ )
    {
        if (l_U564[sub_4347()]._fU24[I] != (uParam0^)[I])
        {
            l_U564[sub_4347()]._fU24[I] = (uParam0^)[I];
            sub_112370( I );
        }
    }
    return sub_4726();
}

void sub_112370(unknown uParam0)
{
    unknown uVar3;

    if (l_U906[uParam0] > 0)
    {
        uVar3 = l_U564[0]._fU24[l_U906[uParam0] - 1];
        if (l_U564[sub_4347()]._fU24[uParam0] > l_U564[sub_4347()]._fU24[uVar3])
        {
            l_U564[0]._fU24[l_U906[uParam0] - 1] = uParam0;
            l_U564[0]._fU24[l_U906[uParam0]] = uVar3;
            l_U906[uVar3]++;
            l_U906[uParam0]--;
            sub_112370( uParam0 );
            return;
        }
    }
    if (l_U906[uParam0] < 15)
    {
        uVar3 = l_U564[0]._fU24[l_U906[uParam0] + 1];
        if (l_U564[sub_4347()]._fU24[uParam0] < l_U564[sub_4347()]._fU24[uVar3])
        {
            l_U564[0]._fU24[l_U906[uParam0] + 1] = uParam0;
            l_U564[0]._fU24[l_U906[uParam0]] = uVar3;
            l_U906[uVar3]--;
            l_U906[uParam0]++;
            sub_112370( uParam0 );
            return;
        }
    }
    return;
}

void sub_112935(unknown uParam0)
{
    int I;

    if (NOT l_U985)
    {
        sub_8990();
        l_U985 = 1;
    }
    if ((uParam0^) <= 8)
    {
        for ( I = 0; I < (uParam0^); I++ )
        {
            if (l_U941[I] != (uParam0^)[I])
            {
                l_U941[I] = (uParam0^)[I];
                sub_113030( I );
            }
        }
    }
    return;
}

void sub_113030(unknown uParam0)
{
    unknown uVar3;

    if (l_U923[uParam0] > 0)
    {
        uVar3 = l_U932[l_U923[uParam0] - 1];
        if (l_U941[uParam0] > l_U941[uVar3])
        {
            l_U932[l_U923[uParam0] - 1] = uParam0;
            l_U932[l_U923[uParam0]] = uVar3;
            l_U923[uVar3]++;
            l_U923[uParam0]--;
            sub_113030( uParam0 );
            return;
        }
    }
    if (l_U923[uParam0] < 7)
    {
        uVar3 = l_U932[l_U923[uParam0] + 1];
        if (l_U941[uParam0] < l_U941[uVar3])
        {
            l_U932[l_U923[uParam0] + 1] = uParam0;
            l_U932[l_U923[uParam0]] = uVar3;
            l_U923[uVar3]--;
            l_U923[uParam0]++;
            sub_113030( uParam0 );
            return;
        }
    }
    return;
}

int sub_113388(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    unknown uVar6;

    FORCE_LOADING_SCREEN( 1 );
    START_LOAD_SCENE( uParam0._fU0, uParam0._fU4, uParam0._fU8 );
    while (NOT UPDATE_LOAD_SCENE())
    {
        if (l_U1829._fU1400)
        {
            FORCE_LOADING_SCREEN( 0 );
            return 1;
        }
        if (NOT IS_NETWORK_GAME_RUNNING())
        {
            if (NOT LOCAL_PLAYER_IS_READY_TO_START_PLAYING())
            {
                TERMINATE_THIS_SCRIPT();
            }
        }
        if ((NOT NETWORK_END_SESSION_PENDING()) AND (IS_NETWORK_SESSION()))
        {
            GET_NETWORK_TIMER( ref l_U2206 );
        }
        sub_72342();
    }
    if (bParam3)
    {
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 2000 );
        }
    }
    FORCE_LOADING_SCREEN( 0 );
    return 0;
}

void sub_113720(unknown uParam0, unknown uParam1)
{
    l_U967[uParam0] = uParam1;
    return;
}

void sub_113941()
{
    l_U1222 = 18;
    l_U1219 = 1;
    return;
}

void sub_114014(unknown uParam0)
{
    int I;
    unknown[16] uVar4;

    array(ref uVar4, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar4[I] = l_U1588[I]._fU48;
    }
    sub_114089( ref uVar4, ref l_U1588[GET_PLAYER_ID()]._fU48, uParam0 );
    return;
}

void sub_114089(unknown uParam0, unknown uParam1, boolean bParam2)
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
        iVar6 = l_U1158;
    }
    else
    {
        iVar6 = sub_114141();
    }
    if (NOT NETWORK_IS_TVT())
    {
        if (iVar6 == (uParam1^))
        {
            if (((uParam1^) > -1) AND ((uParam1^) != GET_PLAYER_ID()))
            {
                if (IS_NETWORK_PLAYER_ACTIVE( iVar6 ))
                {
                    if (NOT (COMPARE_STRING( GET_PLAYER_NAME( sub_3442( iVar6 ) ), ref l_U1309 )))
                    {
                        if (NOT (COMPARE_STRING( ref l_U1309, "" )))
                        {
                            if (NOT (COMPARE_STRING( ref l_U1309, "NULL" )))
                            {
                                if (NOT (COMPARE_STRING( ref l_U1309, "\n" )))
                                {
                                    if (NOT (COMPARE_STRING( ref l_U1309, "null" )))
                                    {
                                        if (bParam2)
                                        {
                                            l_U1158 = GET_PLAYER_ID();
                                            (uParam1^) = GET_PLAYER_ID();
                                        }
                                        else
                                        {
                                            sub_1990( 1 );
                                            (uParam1^) = -1;
                                        }
                                        StrCopy( ref l_U1309, "", 32 );
                                        return;
                                    }
                                }
                            }
                        }
                    }
                }
                else
                {
                    StrCopy( ref l_U1309, "", 32 );
                }
            }
            else
            {
                StrCopy( ref l_U1309, "", 32 );
            }
        }
        else if ((iVar6 > -1) AND (iVar6 != GET_PLAYER_ID()))
        {
            if (IS_NETWORK_PLAYER_ACTIVE( iVar6 ))
            {
                StrCopy( ref l_U1309, GET_PLAYER_NAME( sub_3442( iVar6 ) ), 32 );
            }
            else
            {
                StrCopy( ref l_U1309, "", 32 );
            }
        }
        (uParam1^) = iVar6;
    }
    for ( I = 0; I < 16; I++ )
    {
        if ((IS_NETWORK_PLAYER_ACTIVE( I )) AND (NOT NETWORK_IS_TVT()))
        {
            if (l_U1292[I] == 1)
            {
                if (l_U889[I] != (uParam0^)[I])
                {
                    if (NOT bParam2)
                    {
                        if (((uParam0^)[I] > -1) AND ((uParam0^)[I] != I))
                        {
                            if (IS_NETWORK_PLAYER_ACTIVE( (uParam0^)[I] ))
                            {
                                sub_114701( I, "WANTS_TO_KICK", (uParam0^)[I] );
                            }
                        }
                    }
                    l_U889[I] = (uParam0^)[I];
                }
            }
            else if ((uParam0^)[I] != 0)
            {
                l_U1292[I] = 1;
            }
        }
        else
        {
            l_U889[I] = -1;
            l_U1292[I] = 0;
        }
    }
    return;
}

void sub_114141()
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

void sub_114701(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    uVar5 = sub_114711( -2 );
    StrCopy( ref l_U6[uVar5]._fU76._fU0, GET_PLAYER_NAME( sub_3442( uParam0 ) ), 64 );
    StrCopy( ref l_U6[uVar5]._fU12, uParam1, 64 );
    sub_30820( sub_3442( uParam0 ), ref l_U6[uVar5]._fU76._fU68, ref l_U6[uVar5]._fU76._fU72, ref l_U6[uVar5]._fU76._fU76 );
    StrCopy( ref l_U6[uVar5]._fU156._fU0, GET_PLAYER_NAME( sub_3442( uParam2 ) ), 64 );
    sub_30820( sub_3442( uParam2 ), ref l_U6[uVar5]._fU156._fU68, ref l_U6[uVar5]._fU156._fU72, ref l_U6[uVar5]._fU156._fU76 );
    sub_115286( uVar5 );
    return;
}

void sub_114711(unknown uParam0)
{
    unknown Result;

    Result = l_U479;
    sub_114738( ref l_U6[l_U479] );
    l_U6[l_U479]._fU8 = uParam0;
    l_U6[l_U479]._fU0 = 1;
    l_U6[l_U479]._fU4 = sub_114938() + 6000;
    sub_14010( ref l_U479, 8 );
    sub_114738( ref l_U6[l_U479] );
    if (l_U479 == l_U480)
    {
        sub_14010( ref l_U480, 8 );
    }
    PLAY_AUDIO_EVENT( "FRONTEND_GAME_MP_TICKER_MESSAGE" );
    return Result;
}

void sub_114738(int iParam0)
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

void sub_114938()
{
    unknown Result;

    GET_GAME_TIMER( ref Result );
    return Result;
}

void sub_115286(unknown uParam0)
{
    char[64] cVar3;

    StrCopy( ref cVar3, "", 64 );
    if (NOT (COMPARE_STRING( ref l_U6[uParam0]._fU76._fU0, "" )))
    {
        if (NOT (COMPARE_STRING( ref l_U6[uParam0]._fU76._fU0, "NULL" )))
        {
            if (NOT (COMPARE_STRING( ref l_U6[uParam0]._fU76._fU0, "\n" )))
            {
                if (NOT (COMPARE_STRING( ref l_U6[uParam0]._fU76._fU0, "null" )))
                {
                    if (l_U6[uParam0]._fU76._fU64)
                    {
                        if (NOT (COMPARE_STRING( GET_STRING_FROM_TEXT_FILE( ref l_U6[uParam0]._fU76._fU0 ), "NULL" )))
                        {
                            ConcatString(ref cVar3, GET_STRING_FROM_TEXT_FILE( ref l_U6[uParam0]._fU76._fU0 ), 64);
                            ConcatString(ref cVar3, " ", 64);
                        }
                    }
                    else
                    {
                        ConcatString(ref cVar3, ref l_U6[uParam0]._fU76._fU0, 64);
                        ConcatString(ref cVar3, " ", 64);
                    }
                }
            }
        }
    }
    if (NOT (COMPARE_STRING( ref l_U6[uParam0]._fU12, "" )))
    {
        if (NOT (COMPARE_STRING( ref l_U6[uParam0]._fU12, "NULL" )))
        {
            if (NOT (COMPARE_STRING( ref l_U6[uParam0]._fU12, "\n" )))
            {
                if (NOT (COMPARE_STRING( ref l_U6[uParam0]._fU12, "null" )))
                {
                    if (NOT (COMPARE_STRING( GET_STRING_FROM_TEXT_FILE( ref l_U6[uParam0]._fU12 ), "NULL" )))
                    {
                        ConcatString(ref cVar3, GET_STRING_FROM_TEXT_FILE( ref l_U6[uParam0]._fU12 ), 64);
                        ConcatString(ref cVar3, " ", 64);
                    }
                }
            }
        }
    }
    if (NOT (COMPARE_STRING( ref l_U6[uParam0]._fU156._fU0, "" )))
    {
        if (NOT (COMPARE_STRING( ref l_U6[uParam0]._fU156._fU0, "NULL" )))
        {
            if (NOT (COMPARE_STRING( ref l_U6[uParam0]._fU156._fU0, "\n" )))
            {
                if (NOT (COMPARE_STRING( ref l_U6[uParam0]._fU156._fU0, "null" )))
                {
                    if (l_U6[uParam0]._fU156._fU64)
                    {
                        if (NOT (COMPARE_STRING( GET_STRING_FROM_TEXT_FILE( ref l_U6[uParam0]._fU156._fU0 ), "NULL" )))
                        {
                            ConcatString(ref cVar3, GET_STRING_FROM_TEXT_FILE( ref l_U6[uParam0]._fU156._fU0 ), 64);
                        }
                    }
                    else
                    {
                        ConcatString(ref cVar3, ref l_U6[uParam0]._fU156._fU0, 64);
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

void sub_116255(unknown uParam0)
{
    if (DOES_CAM_EXIST( (uParam0^) ))
    {
        DESTROY_CAM( (uParam0^) );
    }
    (uParam0^) = nil;
    if (COUNT_SCRIPT_CAMS() == 0)
    {
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    }
    return;
}

void sub_116393(unknown uParam0)
{
    int I;
    char[16] cVar4;

    sub_116404( uParam0 );
    DEACTIVATE_NETWORK_SETTINGS_MENU();
    SWITCH_OFF_WAYPOINT();
    for ( I = 0; I < 16; I++ )
    {
        l_U481[I] = 0;
    }
    if (IS_MOBILE_PHONE_RADIO_ACTIVE())
    {
        SET_MOBILE_PHONE_RADIO_STATE( 0 );
    }
    TURN_OFF_RADIOHUD_IN_LOBBY();
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    DISPLAY_FRONTEND_MAP_BLIPS( 1 );
    l_U1189 = 0;
    l_U1183 = 10000;
    l_U1192 = 0;
    l_U1201 = 0;
    l_U1272 = 0;
    l_U1266 = 0;
    l_U1158 = GET_PLAYER_ID();
    l_U989[sub_8651( 16 )]._fU20 = 0;
    if (NOT NETWORK_IS_TVT())
    {
        l_U989[sub_8651( 17 )]._fU20 = GET_PLAYER_ID();
    }
    StrCopy( ref cVar4, "LONG_DESCRP_", 16 );
    ConcatString(ref cVar4, sub_3785(), 16);
    if (l_U1180 == 1)
    {
        ConcatString(ref cVar4, "A", 16);
    }
    else if (l_U1180 == 2)
    {
        ConcatString(ref cVar4, "B", 16);
    }
    PRINT_NOW( ref cVar4, 1, 1 );
    if ((sub_6398()) || (NOT N_604003528()))
    {
        l_U1159[GET_PLAYER_ID()] = GET_PLAYER_RANK_LEVEL_DURING_MP( GET_PLAYER_ID() );
    }
    UNPAUSE_GAME();
    return;
}

void sub_116404(unknown uParam0)
{
    int I;
    int iVar4;
    char[16] cVar5;

    for ( I = 0; I < 21; I++ )
    {
        if ((l_U989[I]._fU16 != 0) AND (l_U989[I]._fU16 < 12))
        {
            switch (l_U989[I]._fU16)
            {
                case 1:
                case 8:
                cVar5 = {l_U989[I]._fU0};
                ConcatString(ref cVar5, (uParam0^)[I], 16);
                sub_116577( ref l_U989[I]._fU0, ref cVar5, iVar4 );
                break;
                case 5:
                case 7:
                if ((uParam0^)[I] > 0)
                {
                    sub_116577( ref l_U989[I]._fU0, "YES", iVar4 );
                }
                else
                {
                    sub_116577( ref l_U989[I]._fU0, "NO", iVar4 );
                }
                break;
                case 6:
                case 9:
                case 10:
                if ((uParam0^)[I] > 0)
                {
                    sub_116577( ref l_U989[I]._fU0, "ON", iVar4 );
                }
                else
                {
                    sub_116577( ref l_U989[I]._fU0, "OFF", iVar4 );
                }
                break;
                case 11:
                StrCopy( ref cVar5, "CPGO_NUM_", 16 );
                ConcatString(ref cVar5, (uParam0^)[I], 16);
                sub_116577( ref l_U989[I]._fU0, ref cVar5, iVar4 );
                break;
            }
            iVar4++;
        }
    }
    return;
}

void sub_116577(unknown uParam0, unknown uParam1, unknown uParam2)
{
    StrCopy( ref g_U18._fU676[uParam2], uParam0, 16 );
    StrCopy( ref g_U18._fU1080[uParam2], uParam1, 16 );
    sub_116652( "\n ~~~~ NetCellphone Adding info, ", uParam0 );
    sub_116652( " and ", uParam1 );
    return;
}

void sub_116652(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_117375()
{
    unknown uVar2;
    unknown uVar3;

    l_U1204 = 0;
    switch (l_U1587)
    {
        case 0:
        if ((IS_CHAR_DEAD( sub_5422() )) AND (l_U1829._fU528[2] == 0))
        {
            sub_71590();
        }
        DISPLAY_RADAR( 0 );
        DISPLAY_HUD( 0 );
        l_U2207 = 0;
        CLEAR_PRINTS();
        sub_112114();
        l_U1587 = 1;
        break;
        case 1:
        CLEAR_HELP();
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        DESTROY_ALL_CAMS();
        SWITCH_OFF_WAYPOINT();
        sub_28479( GET_PLAYER_ID(), 0 );
        SET_CHAR_VISIBLE( sub_5422(), 1 );
        l_U1587 = 2;
        break;
        case 2:
        l_U1587 = 3;
        break;
        case 3:
        l_U1588[GET_PLAYER_ID()]._fU12 = 6;
        l_U1587 = 0;
        break;
    }
    return;
}

void sub_117635()
{
    unknown uVar2;
    unknown uVar3;

    switch (l_U1587)
    {
        case 0:
        l_U2207 = 0;
        if ((IS_CHAR_DEAD( sub_5422() )) AND (l_U1829._fU528[2] == 0))
        {
            sub_71590();
        }
        DISPLAY_RADAR( 0 );
        DISPLAY_HUD( 0 );
        CLEAR_PRINTS();
        sub_112114();
        l_U1587 = 1;
        break;
        case 1:
        CLEAR_HELP();
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        DESTROY_ALL_CAMS();
        SWITCH_OFF_WAYPOINT();
        sub_28479( GET_PLAYER_ID(), 0 );
        l_U1587 = 2;
        break;
        case 2:
        l_U1587 = 3;
        break;
        case 3:
        l_U1588[GET_PLAYER_ID()]._fU12 = 6;
        l_U1587 = 0;
        break;
    }
    return;
}

void sub_117871()
{
    int Result;
    int I;

    for ( I = 0; I <= 15; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1588[I]._fU36)
            {
                Result++;
            }
        }
    }
    return Result;
}

void sub_118200(unknown uParam0)
{
    l_U1253 = uParam0;
    return;
}

void sub_118322()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 0 );
    }
    DEACTIVATE_FRONTEND();
    DISABLE_PAUSE_MENU( 1 );
    SET_WIDESCREEN_FORMAT( 0 );
    DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
    SET_WIDESCREEN_FORMAT( 0 );
    if (l_U1829._fU1300 > 0)
    {
        PRINT_BIG( "START_ROUND", 50, 2 );
    }
    else
    {
        PRINT_BIG( "START_ROUNDA", 50, 2 );
    }
    l_U1188 = 1;
    return;
}

void sub_118550()
{
    return;
}

void sub_118665(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return;
}

void sub_118811(unknown uParam0)
{
    l_U1180 = uParam0;
    return;
}

void sub_119176()
{
    if (IS_CHAR_IN_ANY_CAR( sub_5422() ))
    {
        ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 0 );
        WARP_CHAR_FROM_CAR_TO_COORD( sub_5422(), 2000.00000000, 200.00000000, 40.00000000 );
        ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
    }
    sub_118322();
    l_U2287 = 0;
    l_U2207 = 0;
    l_U2482 = 0;
    l_U2485 = 0;
    l_U2484 = 0;
    l_U2313 = 0;
    l_U2316 = 0;
    REMOVE_ALL_CHAR_WEAPONS( sub_5422() );
    l_U1588[GET_PLAYER_ID()]._fU28 = 0;
    l_U1588[GET_PLAYER_ID()]._fU12 = 3;
    return;
}

void sub_119441()
{
    unknown uVar2;

    if (NOT l_U2287)
    {
        sub_78133();
        l_U2287 = 1;
    }
    if ((GET_PLAYER_TEAM( sub_5097() )) == 0)
    {
        if (NOT l_U2207)
        {
            if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
            {
                sub_119521();
            }
        }
        else
        {
            l_U2207 = 0;
            l_U2287 = 0;
            l_U2482 = 0;
            l_U1588[GET_PLAYER_ID()]._fU12 = 2;
            GIVE_DELAYED_WEAPON_TO_CHAR( sub_5422(), 7, 500, 1 );
            GIVE_DELAYED_WEAPON_TO_CHAR( sub_5422(), 3, 1, 0 );
            l_U1588[GET_PLAYER_ID()]._fU28 = 1;
            l_U1588[GET_PLAYER_ID()]._fU20 = -5;
            SET_GAME_CAM_HEADING( 0.00000000 );
        }
    }
    else if (NOT l_U2207)
    {
        GENERATE_RANDOM_FLOAT_IN_RANGE( -6.00000000, 6.00000000, ref uVar2 );
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            sub_119521();
        }
    }
    else if (l_U1829._fU752[GET_PLAYER_ID()] != -1)
    {
        if (sub_121324( 0 ))
        {
            l_U2207 = 0;
            l_U2287 = 0;
            l_U2482 = 0;
            l_U1588[GET_PLAYER_ID()]._fU12 = 2;
            l_U1588[GET_PLAYER_ID()]._fU28 = 1;
            SET_GAME_CAM_HEADING( 0.00000000 );
        }
    };;;
    return;
}

void sub_119521()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int iVar11;
    unknown uVar12;
    unknown uVar13;
    float fVar14;
    int iVar15;

    if ((l_U1829._fU1300 == 0) || (l_U1829._fU1300 == l_U1829._fU1264))
    {
        sub_5744();
        sub_5839();
    }
    else if (l_U1829._fU1300 < l_U1829._fU1264)
    {
        sub_118322();
    }
    PRINTSTRING( "******************************************************\n" );
    PRINTSTRING( "     PLEASE READ ME I CONTAIN THE RESPAWN DATA        \n  " );
    PRINTSTRING( "              iIsland is: 							   \n   " );
    PRINTINT( iVar11 );
    PRINTNL();
    PRINTSTRING( "***********************************************************\n" );
    switch (l_U1829._fU1288)
    {
        case 0:
        iVar11 = 2;
        break;
        case 1:
        iVar11 = 3;
        break;
        case 2:
        iVar11 = 1;
        break;
        case 3:
        iVar11 = 0;
        break;
    }
    GENERATE_RANDOM_FLOAT_IN_RANGE( -2.50000000, 4.50000000, ref uVar4 );
    if (NOT l_U2207)
    {
        if (NOT (IS_CHAR_DEAD( sub_5422() )))
        {
            if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
            {
                if ((GET_PLAYER_TEAM( sub_5097() )) == 1)
                {
                    CHANGE_PLAYER_MODEL( sub_5097(), -183203150 );
                    if (NOT (IS_CHAR_IN_ANY_CAR( sub_5422() )))
                    {
                        ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 0 );
                        SET_CHAR_COORDINATES( sub_5422(), l_U1829._fU472._fU0, l_U1829._fU472._fU4, l_U1829._fU472._fU8 );
                        ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
                    }
                    else
                    {
                        ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 0 );
                        WARP_CHAR_FROM_CAR_TO_COORD( sub_5422(), l_U1829._fU472._fU0, l_U1829._fU472._fU4, l_U1829._fU472._fU8 );
                        ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
                    }
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( sub_5422() );
                    SET_VOICE_ID_FROM_HEAD_COMPONENT( sub_5422(), 0, 1 );
                    SET_ANIM_GROUP_FOR_CHAR( sub_5422(), "move_player" );
                    SET_CHAR_HEALTH( sub_5422(), 200 );
                    SET_MAX_WANTED_LEVEL( 0 );
                    SET_CREATE_RANDOM_COPS( 0 );
                    l_U2207 = 1;
                }
                else
                {
                    for ( I = 0; I < 16; I++ )
                    {
                        if (I == GET_PLAYER_ID())
                        {
                            I = 16;
                        }
                        else if (IS_NETWORK_PLAYER_ACTIVE( I ))
                        {
                            if ((GET_PLAYER_TEAM( sub_5097() )) == (GET_PLAYER_TEAM( sub_3442( I ) )))
                            {
                                iVar15++;
                            }
                        }
                    }
                    fVar14 = (360.00000000 / (TO_FLOAT( GET_NO_OF_PLAYERS_IN_TEAM( GET_PLAYER_TEAM( sub_5097() ) ) ))) * (TO_FLOAT( iVar15 ));
                    uVar12 = SIN( fVar14 );
                    uVar13 = COS( fVar14 );
                    uVar8 = {l_U1829._fU460};
                    uVar8._fU0 += (uVar13 * 2.50000000) + (uVar12 * 2.50000000);
                    uVar8._fU4 += (uVar12 * 2.50000000) + ((uVar13 * -1) * 2.50000000);
                    fVar14 = sub_49809( fVar14 + 45.00000000 );
                    if (NOT (IS_CHAR_IN_ANY_CAR( sub_5422() )))
                    {
                        ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 0 );
                        SET_CHAR_COORDINATES( sub_5422(), uVar8._fU0, uVar8._fU4, uVar8._fU8 );
                        ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
                        SET_CHAR_HEADING( sub_5422(), fVar14 );
                    }
                    else
                    {
                        ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 0 );
                        WARP_CHAR_FROM_CAR_TO_COORD( sub_5422(), uVar8._fU0, uVar8._fU4, uVar8._fU8 );
                        ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
                        SET_CHAR_HEADING( sub_5422(), fVar14 );
                    }
                    if (l_U1829._fU528[2] == 0)
                    {
                        CHANGE_PLAYER_MODEL( sub_5097(), sub_120734() );
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( sub_5422() );
                        SET_VOICE_ID_FROM_HEAD_COMPONENT( sub_5422(), 0, 1 );
                        SET_ANIM_GROUP_FOR_CHAR( sub_5422(), "move_player" );
                        SET_CHAR_HEALTH( sub_5422(), 200 );
                        SET_MAX_WANTED_LEVEL( 0 );
                        SET_CREATE_RANDOM_COPS( 0 );
                        l_U2207 = 1;
                    }
                    else if (GET_PLAYER_ID() == l_U1829._fU1284)
                    {
                        CHANGE_PLAYER_MODEL( sub_5097(), 1178487645 );
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( sub_5422() );
                        SET_VOICE_ID_FROM_HEAD_COMPONENT( sub_5422(), 0, 1 );
                        SET_ANIM_GROUP_FOR_CHAR( sub_5422(), "move_player" );
                        SET_CHAR_HEALTH( sub_5422(), 200 );
                        SET_MAX_WANTED_LEVEL( 0 );
                        SET_CREATE_RANDOM_COPS( 0 );
                        l_U2207 = 1;
                    }
                    else
                    {
                        CHANGE_PLAYER_MODEL( sub_5097(), -1616890832 );
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( sub_5422() );
                        SET_VOICE_ID_FROM_HEAD_COMPONENT( sub_5422(), 0, 1 );
                        SET_ANIM_GROUP_FOR_CHAR( sub_5422(), "move_player" );
                        SET_CHAR_HEALTH( sub_5422(), 200 );
                        SET_MAX_WANTED_LEVEL( 0 );
                        SET_CREATE_RANDOM_COPS( 0 );
                        l_U2207 = 1;
                    }
                }
            }
        }
    }
    return;
}

int sub_120734()
{
    unknown uVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 150, ref uVar2 );
    return -19263344;
}

int sub_121324(unknown uParam0)
{
    if ((GET_PLAYER_TEAM( sub_5097() )) == 1)
    {
        if (sub_72160( l_U1829._fU484[l_U1829._fU820[GET_PLAYER_ID()]] ))
        {
            if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
            {
                if ((GET_PLAYER_TEAM( sub_5097() )) == 0)
                {
                    GIVE_DELAYED_WEAPON_TO_CHAR( sub_5422(), 7, 500, 1 );
                }
                else
                {
                    GIVE_DELAYED_WEAPON_TO_CHAR( sub_5422(), 13, 500, 1 );
                }
                GIVE_DELAYED_WEAPON_TO_CHAR( sub_5422(), 3, 1, 0 );
                ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 0 );
                switch (l_U1829._fU752[GET_PLAYER_ID()])
                {
                    case 0:
                    WARP_CHAR_INTO_CAR( sub_5422(), sub_72195( l_U1829._fU484[l_U1829._fU820[GET_PLAYER_ID()]] ) );
                    ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
                    return 1;
                    case 1:
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( sub_5422(), sub_72195( l_U1829._fU484[l_U1829._fU820[GET_PLAYER_ID()]] ), 0 );
                    ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
                    return 1;
                    case 2:
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( sub_5422(), sub_72195( l_U1829._fU484[l_U1829._fU820[GET_PLAYER_ID()]] ), 1 );
                    ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
                    return 1;
                    case 3:
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( sub_5422(), sub_72195( l_U1829._fU484[l_U1829._fU820[GET_PLAYER_ID()]] ), 2 );
                    ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
                    return 1;
                }
            }
        }
    }
    else if (sub_72160( l_U1829._fU504[l_U1829._fU820[GET_PLAYER_ID()]] ))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if ((GET_PLAYER_TEAM( sub_5097() )) == 0)
            {
                GIVE_DELAYED_WEAPON_TO_CHAR( sub_5422(), 7, 500, 1 );
            }
            else
            {
                GIVE_DELAYED_WEAPON_TO_CHAR( sub_5422(), 13, 500, 1 );
            }
            GIVE_DELAYED_WEAPON_TO_CHAR( sub_5422(), 3, 1, 0 );
            ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 0 );
            switch (l_U1829._fU752[GET_PLAYER_ID()])
            {
                case 0:
                WARP_CHAR_INTO_CAR( sub_5422(), sub_72195( l_U1829._fU504[l_U1829._fU820[GET_PLAYER_ID()]] ) );
                ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
                return 1;
                case 1:
                WARP_CHAR_INTO_CAR_AS_PASSENGER( sub_5422(), sub_72195( l_U1829._fU504[l_U1829._fU820[GET_PLAYER_ID()]] ), 0 );
                ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
                return 1;
                case 2:
                WARP_CHAR_INTO_CAR_AS_PASSENGER( sub_5422(), sub_72195( l_U1829._fU504[l_U1829._fU820[GET_PLAYER_ID()]] ), 1 );
                ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
                return 1;
                case 3:
                WARP_CHAR_INTO_CAR_AS_PASSENGER( sub_5422(), sub_72195( l_U1829._fU504[l_U1829._fU820[GET_PLAYER_ID()]] ), 2 );
                ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
                return 1;
            }
        }
    }
    return 0;
}

void sub_122310()
{
    unknown uVar2;

    if (NOT l_U2287)
    {
        sub_78133();
        l_U2287 = 1;
    }
    if ((GET_PLAYER_TEAM( sub_5097() )) == 0)
    {
        if (NOT l_U2207)
        {
            GENERATE_RANDOM_FLOAT_IN_RANGE( -6.00000000, 6.00000000, ref uVar2 );
            if ((IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() )) || (LOCAL_PLAYER_IS_READY_TO_START_PLAYING()))
            {
                sub_119521();
            }
        }
        else if (l_U1829._fU752[GET_PLAYER_ID()] != -1)
        {
            if (sub_121324( 0 ))
            {
                l_U2207 = 0;
                l_U2287 = 0;
                l_U2482 = 0;
                l_U1588[GET_PLAYER_ID()]._fU12 = 2;
                l_U1588[GET_PLAYER_ID()]._fU28 = 1;
                SET_GAME_CAM_HEADING( 0.00000000 );
            }
        }
    }
    else if (NOT l_U2207)
    {
        if ((IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() )) || (LOCAL_PLAYER_IS_READY_TO_START_PLAYING()))
        {
            sub_119521();
        }
    }
    else if (l_U1829._fU752[GET_PLAYER_ID()] != -1)
    {
        if (sub_121324( 0 ))
        {
            l_U2207 = 0;
            l_U2287 = 0;
            l_U2482 = 0;
            l_U1588[GET_PLAYER_ID()]._fU12 = 2;
            l_U1588[GET_PLAYER_ID()]._fU28 = 1;
            SET_GAME_CAM_HEADING( 0.00000000 );
        }
    };;;
    return;
}

int sub_122728()
{
    int I;
    int iVar3;

    for ( I = 0; I <= 15; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1588[I]._fU36)
            {
                if ((l_U1588[I]._fU28) AND (l_U1588[I]._fU4))
                {
                    iVar3++;
                }
            }
        }
    }
    if (iVar3 == sub_67067())
    {
        return 1;
    }
    return 0;
}

void sub_122890()
{
    NETWORK_SET_TEAM_ONLY_CHAT( 1 );
    NETWORK_SET_HEALTH_RETICULE_OPTION( l_U1829._fU528[8] == 1 );
    sub_122943( ref l_U1588[GET_PLAYER_ID()]._fU0 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    sub_28479( GET_PLAYER_ID(), 1 );
    if (l_U1829._fU528[2] == 0)
    {
        if ((GET_PLAYER_TEAM( sub_5097() )) == 1)
        {
            sub_123142();
        }
    }
    sub_124285( l_U1829._fU528[6], 1065353216 );
    sub_124554( l_U1829._fU528[5], 1065353216 );
    sub_124808( l_U1829._fU528[9] );
    DISPLAY_PLAYER_NAMES( l_U1829._fU528[7] == 1 );
    if (l_U1829._fU528[1] == 0)
    {
        NETWORK_SET_FRIENDLY_FIRE_OPTION( 0 );
    }
    else if (l_U1829._fU528[1] == 1)
    {
        NETWORK_SET_FRIENDLY_FIRE_OPTION( 1 );
    }
    if (l_U1829._fU528[0] == 0)
    {
        DISABLE_PLAYER_LOCKON( sub_5097(), 1 );
    }
    else
    {
        DISABLE_PLAYER_LOCKON( sub_5097(), 0 );
    }
    switch (l_U1829._fU1288)
    {
        case 0:
        sub_125168( 2, l_U1829._fU528[4], l_U1829._fU1256, 3 );
        break;
        case 1:
        sub_125168( 1, l_U1829._fU528[4], l_U1829._fU1256, 3 );
        break;
        case 2:
        sub_125168( 4, l_U1829._fU528[4], l_U1829._fU1256, 3 );
        sub_125168( 3, l_U1829._fU528[4], l_U1829._fU1256, 3 );
        break;
        case 3:
        sub_125168( 3, l_U1829._fU528[4], l_U1829._fU1256, 3 );
        sub_125168( 4, l_U1829._fU528[4], l_U1829._fU1256, 3 );
        break;
    }
    SET_MONEY_CARRIED_BY_ALL_NEW_PEDS( 0 );
    sub_167166( l_U1829._fU528[2], 36 );
    sub_167166( l_U1829._fU528[9], 6 );
    sub_167166( l_U1829._fU528[7], 3 );
    sub_167166( l_U1829._fU528[5], 1 );
    sub_167166( l_U1829._fU528[6], 2 );
    sub_167166( l_U1829._fU528[10], 8 );
    sub_167166( l_U1829._fU528[8], 4 );
    sub_167166( l_U1829._fU528[4], 14 );
    sub_167166( l_U1829._fU528[11], 9 );
    sub_167166( l_U1829._fU528[12], 10 );
    sub_167166( l_U1829._fU528[13], 11 );
    sub_167398();
    return;
}

void sub_122943(unknown uParam0)
{
    NETWORK_SET_TALKER_FOCUS( -1 );
    sub_122964( uParam0, 31, 0 );
    return;
}

void sub_122964(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U18._fU636 = uParam1;
    g_U18._fU632 = uParam2;
    sub_122995( uParam0, uParam1 );
    sub_123029( uParam0, uParam2 );
    return;
}

void sub_122995(unknown uParam0, unknown uParam1)
{
    SET_BITS_IN_RANGE( uParam0, 0, 15, uParam1 );
    return;
}

void sub_123029(unknown uParam0, unknown uParam1)
{
    SET_BITS_IN_RANGE( uParam0, 16, 31, uParam1 );
    return;
}

void sub_123142()
{
    switch (l_U1829._fU1288)
    {
        case 0:
        switch (l_U1829._fU1292)
        {
            case 0:
            case 3:
            case 6:
            TRIGGER_POLICE_REPORT( "SCRIPTED_REPORTS_MP_ROBBERY_LIBERTY_STATE_MUSEUM" );
            break;
            case 1:
            case 4:
            case 7:
            TRIGGER_POLICE_REPORT( "SCRIPTED_REPORTS_MP_ROBBERY_LIBERTY_STATE_MUSEUM" );
            break;
            case 2:
            case 5:
            TRIGGER_POLICE_REPORT( "SCRIPTED_REPORTS_MP_ROBBERY_THE_PAWN_SHOP" );
            break;
        }
        break;
        case 1:
        switch (l_U1829._fU1292)
        {
            case 0:
            case 3:
            case 6:
            TRIGGER_POLICE_REPORT( "SCRIPTED_REPORTS_MP_ROBBERY_THE_LARGE_MANSION" );
            break;
            case 1:
            case 4:
            case 7:
            TRIGGER_POLICE_REPORT( "SCRIPTED_REPORTS_MP_ROBBERY_THE_WAREHOUSE" );
            break;
            case 2:
            case 5:
            TRIGGER_POLICE_REPORT( "SCRIPTED_REPORTS_MP_ROBBERY_THE_AUTO_EROTICAR_GARAGE" );
            break;
        }
        break;
        case 2:
        switch (l_U1829._fU1292)
        {
            case 0:
            case 3:
            case 6:
            TRIGGER_POLICE_REPORT( "SCRIPTED_REPORTS_MP_ROBBERY_THE_INSIDER_BETTING" );
            break;
            case 1:
            case 4:
            case 7:
            TRIGGER_POLICE_REPORT( "SCRIPTED_REPORTS_MP_ROBBERY_THE_PILL_PHARMACY" );
            break;
            case 2:
            case 5:
            TRIGGER_POLICE_REPORT( "SCRIPTED_REPORTS_MP_ROBBERY_THE_AUTO_PARTS_GARAGE" );
            break;
        }
        break;
        case 3:
        switch (l_U1829._fU1292)
        {
            case 0:
            case 3:
            case 6:
            TRIGGER_POLICE_REPORT( "SCRIPTED_REPORTS_MP_ROBBERY_THE_BIG_HOUSE" );
            break;
            case 1:
            case 4:
            case 7:
            TRIGGER_POLICE_REPORT( "SCRIPTED_REPORTS_MP_ROBBERY_THE_TV_STORE" );
            break;
            case 2:
            case 5:
            TRIGGER_POLICE_REPORT( "SCRIPTED_REPORTS_MP_ROBBERY_THE_LIQUOR_STORE" );
            break;
        }
        break;
    }
    return;
}

void sub_124285(int iParam0, unknown uParam1)
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
    if (sub_12849())
    {
        SET_REDUCE_PED_MODEL_BUDGET( 1 );
    }
    return;
}

void sub_124554(int iParam0, unknown uParam1)
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

void sub_124808(unknown uParam0)
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

void sub_125168(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
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

    l_U1380 = uParam3;
    l_U1381 = iParam1;
    sub_125196( ref uVar6, iParam1, uParam0 );
    SET_RANDOM_SEED( uParam2 );
    if (iParam1 != 12)
    {
        sub_127014( ref uVar6, uParam0 );
        SET_WEAPON_PICKUP_NETWORK_REGEN_TIME( 3, 30000 );
        SET_WEAPON_PICKUP_NETWORK_REGEN_TIME( 1, 30000 );
        SET_WEAPON_PICKUP_NETWORK_REGEN_TIME( 7, 30000 );
        SET_WEAPON_PICKUP_NETWORK_REGEN_TIME( 9, 30000 );
        SET_WEAPON_PICKUP_NETWORK_REGEN_TIME( 10, 30000 );
        SET_WEAPON_PICKUP_NETWORK_REGEN_TIME( 11, 30000 );
        SET_WEAPON_PICKUP_NETWORK_REGEN_TIME( 12, 30000 );
        SET_WEAPON_PICKUP_NETWORK_REGEN_TIME( 13, 30000 );
        SET_WEAPON_PICKUP_NETWORK_REGEN_TIME( 14, 30000 );
        SET_WEAPON_PICKUP_NETWORK_REGEN_TIME( 15, 30000 );
        SET_WEAPON_PICKUP_NETWORK_REGEN_TIME( 16, 60000 );
        SET_WEAPON_PICKUP_NETWORK_REGEN_TIME( 17, 60000 );
        SET_WEAPON_PICKUP_NETWORK_REGEN_TIME( 18, 60000 );
        SET_WEAPON_PICKUP_NETWORK_REGEN_TIME( 4, 30000 );
        SET_WEAPON_PICKUP_NETWORK_REGEN_TIME( 5, 30000 );
    }
    sub_158428( uParam0 );
    SET_HEALTH_PICKUP_NETWORK_REGEN_TIME( 60000 );
    sub_163795( uParam0 );
    SET_ARMOUR_PICKUP_NETWORK_REGEN_TIME( 60000 );
    SWITCH_ARROW_ABOVE_BLIPPED_PICKUPS( 1 );
    return;
}

void sub_125196(int iParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;
    float fVar6;

    iParam0->_fU64 = uParam1;
    switch (uParam1)
    {
        case 1:
        iParam0->_fU4 = 1;
        iParam0->_fU8 = 10;
        iParam0->_fU24 = 40;
        iParam0->_fU48 = 10;
        break;
        case 2:
        iParam0->_fU12 = 5;
        iParam0->_fU16 = 10;
        iParam0->_fU28 = 20;
        iParam0->_fU32 = 20;
        iParam0->_fU44 = 5;
        iParam0->_fU52 = 10;
        break;
        case 3:
        iParam0->_fU12 = 6;
        iParam0->_fU20 = 20;
        iParam0->_fU28 = 30;
        iParam0->_fU36 = 30;
        iParam0->_fU40 = 10;
        iParam0->_fU52 = 15;
        iParam0->_fU48 = 5;
        iParam0->_fU56 = 15;
        break;
        case 4:
        iParam0->_fU8 = 5;
        iParam0->_fU12 = 10;
        break;
        case 5:
        iParam0->_fU16 = 10;
        iParam0->_fU20 = 10;
        break;
        case 6:
        iParam0->_fU48 = 10;
        iParam0->_fU52 = 10;
        break;
        case 7:
        iParam0->_fU0 = 10;
        iParam0->_fU4 = 10;
        break;
        case 8:
        iParam0->_fU24 = 10;
        iParam0->_fU28 = 10;
        break;
        case 9:
        iParam0->_fU32 = 10;
        iParam0->_fU36 = 10;
        break;
        case 10:
        iParam0->_fU56 = 10;
        break;
        case 11:
        iParam0->_fU40 = 10;
        iParam0->_fU44 = 10;
        break;
        case 0:
        iParam0->_fU4 = 1;
        iParam0->_fU8 = 3;
        iParam0->_fU12 = 10;
        iParam0->_fU16 = 20;
        iParam0->_fU20 = 20;
        iParam0->_fU24 = 30;
        iParam0->_fU28 = 30;
        iParam0->_fU32 = 30;
        iParam0->_fU36 = 30;
        iParam0->_fU40 = 10;
        iParam0->_fU44 = 5;
        iParam0->_fU48 = 10;
        iParam0->_fU52 = 25;
        iParam0->_fU56 = 20;
        break;
    }
    iParam0->_fU60 = iParam0->_fU0;
    iParam0->_fU60 += iParam0->_fU4;
    iParam0->_fU60 += iParam0->_fU8;
    iParam0->_fU60 += iParam0->_fU12;
    iParam0->_fU60 += iParam0->_fU16;
    iParam0->_fU60 += iParam0->_fU20;
    iParam0->_fU60 += iParam0->_fU24;
    iParam0->_fU60 += iParam0->_fU28;
    iParam0->_fU60 += iParam0->_fU32;
    iParam0->_fU60 += iParam0->_fU36;
    iParam0->_fU60 += iParam0->_fU40;
    iParam0->_fU60 += iParam0->_fU44;
    iParam0->_fU60 += iParam0->_fU48;
    iParam0->_fU60 += iParam0->_fU52;
    iParam0->_fU60 += iParam0->_fU56;
    switch (uParam2)
    {
        case 0:
        fVar6 = 575;
        break;
        case 1:
        fVar6 = 125;
        break;
        case 2:
        fVar6 = 167;
        break;
        case 3:
        fVar6 = 67;
        break;
        case 4:
        fVar6 = 144;
        break;
        case 5:
        fVar6 = 42;
        break;
        case 6:
        fVar6 = 24;
        break;
        case 7:
        fVar6 = 34;
        break;
        case 8:
        fVar6 = 15;
        break;
        case 9:
        fVar6 = 24;
        break;
        case 10:
        fVar6 = 33;
        break;
        case 11:
        fVar6 = 54;
        break;
        case 12:
        fVar6 = 20;
        break;
    }
    fVar5 = fVar6 / iParam0->_fU60;
    iParam0->_fU0 = sub_74557( (TO_FLOAT( iParam0->_fU0 )) * fVar5 );
    iParam0->_fU4 = sub_74557( (TO_FLOAT( iParam0->_fU4 )) * fVar5 );
    iParam0->_fU8 = sub_74557( (TO_FLOAT( iParam0->_fU8 )) * fVar5 );
    iParam0->_fU12 = sub_74557( (TO_FLOAT( iParam0->_fU12 )) * fVar5 );
    iParam0->_fU16 = sub_74557( (TO_FLOAT( iParam0->_fU16 )) * fVar5 );
    iParam0->_fU20 = sub_74557( (TO_FLOAT( iParam0->_fU20 )) * fVar5 );
    iParam0->_fU24 = sub_74557( (TO_FLOAT( iParam0->_fU24 )) * fVar5 );
    iParam0->_fU28 = sub_74557( (TO_FLOAT( iParam0->_fU28 )) * fVar5 );
    iParam0->_fU32 = sub_74557( (TO_FLOAT( iParam0->_fU32 )) * fVar5 );
    iParam0->_fU36 = sub_74557( (TO_FLOAT( iParam0->_fU36 )) * fVar5 );
    iParam0->_fU40 = sub_74557( (TO_FLOAT( iParam0->_fU40 )) * fVar5 );
    iParam0->_fU44 = sub_74557( (TO_FLOAT( iParam0->_fU44 )) * fVar5 );
    iParam0->_fU48 = sub_74557( (TO_FLOAT( iParam0->_fU48 )) * fVar5 );
    iParam0->_fU52 = sub_74557( (TO_FLOAT( iParam0->_fU52 )) * fVar5 );
    iParam0->_fU56 = sub_74557( (TO_FLOAT( iParam0->_fU56 )) * fVar5 );
    iParam0->_fU60 = iParam0->_fU0;
    iParam0->_fU60 += iParam0->_fU4;
    iParam0->_fU60 += iParam0->_fU8;
    iParam0->_fU60 += iParam0->_fU12;
    iParam0->_fU60 += iParam0->_fU16;
    iParam0->_fU60 += iParam0->_fU20;
    iParam0->_fU60 += iParam0->_fU24;
    iParam0->_fU60 += iParam0->_fU28;
    iParam0->_fU60 += iParam0->_fU32;
    iParam0->_fU60 += iParam0->_fU36;
    iParam0->_fU60 += iParam0->_fU40;
    iParam0->_fU60 += iParam0->_fU44;
    iParam0->_fU60 += iParam0->_fU48;
    iParam0->_fU60 += iParam0->_fU52;
    iParam0->_fU60 += iParam0->_fU56;
    return;
}

void sub_127014(int iParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0:
        sub_127014( iParam0, 3 );
        sub_127014( iParam0, 4 );
        sub_127014( iParam0, 2 );
        sub_127014( iParam0, 1 );
        sub_127014( iParam0, 8 );
        sub_127014( iParam0, 10 );
        sub_127014( iParam0, 9 );
        break;
        case 1:
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1196.11900000, 1907.18900000, 10.44690000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1040.06700000, 1415.01300000, 23.32290000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1619.44400000, 92.38760000, 10.32920000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1232.75700000, -449.90700000, 1.87340000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1463.06000000, 1407.98500000, 11.62070000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -2030.33000000, 175.78440000, 11.02870000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -862.60280000, 1469.77900000, 22.04920000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1012.03300000, 679.06480000, 3.07830000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1378.38600000, 735.35190000, 18.61550000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1111.47100000, 401.67400000, 3.56430000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1460.41900000, -519.12240000, 1.99810000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1375.61200000, 1309.62500000, 20.86810000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1721.67500000, -77.34120000, 5.29220000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1575.52100000, 163.83770000, 11.92580000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -982.23430000, 1026.28400000, 19.61470000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -2192.17600000, 189.19060000, 12.06900000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1984.85600000, -459.41330000, 2.24220000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1772.48200000, -635.06910000, 1.97230000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -966.62740000, 297.31780000, 3.37240000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1017.69000000, 47.42280000, 4.28950000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1213.55300000, -202.04250000, 2.43360000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1965.89200000, -621.95820000, 1.88090000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1253.14600000, -570.99440000, 1.83970000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1966.21400000, -84.47350000, 5.72440000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1891.29100000, 107.74920000, 6.01130000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1422.37000000, 136.37280000, 49.97710000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1165.49600000, 177.58810000, 3.30230000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1376.45400000, 1787.28600000, 17.63460000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -930.20860000, 1670.47400000, 22.86110000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -938.56030000, 1503.63000000, 24.11030000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1379.00900000, 511.33410000, 11.47260000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1612.35500000, 763.47670000, 27.13650000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1538.08500000, 504.22530000, 21.36960000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1232.44900000, 1313.95100000, 20.68790000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1083.27200000, 1202.30800000, 22.30520000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1390.47800000, 545.41720000, 11.48410000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1980.96900000, -265.83590000, 6.61140000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1741.89800000, 246.20510000, 20.26680000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1337.26100000, 307.37040000, 12.30250000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -982.65230000, 1354.82200000, 24.04510000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -838.37830000, 986.44950000, 19.63220000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1221.05700000, 864.11850000, 18.56040000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1976.24800000, -332.03490000, 2.14560000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1640.01600000, -590.24800000, 2.00040000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1883.32000000, -538.75700000, 2.20930000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -2157.76000000, -84.50720000, 5.72410000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1991.85400000, 22.04110000, 6.46750000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1819.05000000, 185.24510000, 15.05980000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1709.88900000, 123.50230000, 11.22510000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1370.11700000, 380.61760000, 13.61520000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1166.98700000, 368.54050000, 3.49970000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -914.88050000, 1330.30900000, 23.33390000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1059.97900000, 1522.27400000, 23.51210000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1249.42300000, 1446.43000000, 18.82090000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1105.38700000, 865.35820000, 21.13230000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1515.14300000, 647.81850000, 22.99270000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1417.65900000, 926.23530000, 20.06220000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -997.40830000, 713.36130000, 2.96060000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1132.63100000, 970.64170000, 18.57450000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1393.73000000, 982.70170000, 22.22130000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1702.86000000, 521.84710000, 24.44440000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1266.23500000, 1707.77100000, 26.72450000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -982.13600000, 1688.95500000, 18.40310000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1561.12900000, 1103.43900000, 26.17870000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1668.21500000, 317.14960000, 23.49550000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1242.57300000, 1071.52300000, 18.78060000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1655.30500000, -313.57930000, 1.85990000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1794.53300000, -58.22980000, 6.42350000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1670.90400000, 726.06620000, 28.86760000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -993.10710000, -315.56630000, 1.91840000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1972.19100000, -504.52570000, 2.25320000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -2179.58200000, 152.62590000, 11.89890000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -2083.70000000, 212.58110000, 10.80830000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1911.00500000, 297.32220000, 21.96660000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1620.61600000, -81.67460000, 5.73790000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1248.59100000, -18.99340000, 5.22130000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1185.79300000, -0.55840000, 3.30650000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1215.95700000, 1192.77300000, 20.66770000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1344.54300000, 1207.66700000, 16.15250000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1427.29900000, 1258.30400000, 23.01160000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1397.96300000, 1462.23900000, 24.17600000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -786.24220000, 1183.35700000, 8.45640000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1190.51000000, 1730.82400000, 31.88890000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1121.53000000, 695.33390000, 8.15600000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1674.10300000, 607.97680000, 27.42240000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -956.39570000, 791.87260000, 3.27540000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -995.10810000, 1125.10800000, 13.71140000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1584.32100000, 868.65160000, 20.24020000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1068.28000000, -543.48600000, 1.88580000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1531.64000000, -575.34600000, 2.00010000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1406.33800000, -89.17190000, 5.34300000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1714.17200000, 436.72830000, 24.44410000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1469.36200000, 490.46240000, 18.56530000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1312.04000000, 1734.09000000, 26.92140000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1537.10700000, 372.12060000, 20.96680000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -983.78270000, 1639.57700000, 22.89940000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1363.57000000, 1453.65700000, 19.97900000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1394.97000000, 1148.11900000, 18.72010000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -800.73000000, 1075.30600000, 10.04690000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1168.58000000, -295.70200000, 2.04920000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1339.62000000, 605.72930000, 11.51410000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1659.45000000, 649.34030000, 28.84120000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1353.10000000, 802.45560000, 18.56090000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1359.23000000, 446.40120000, 13.61450000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1852.94400000, -374.40150000, 2.17360000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1506.31600000, -388.77980000, 1.90370000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1024.62000000, -270.61100000, 1.91890000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1727.51000000, -226.10200000, 3.43530000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1299.11000000, -210.19200000, 1.94540000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1391.73300000, 60.11550000, 6.01040000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1468.68200000, 281.84210000, 12.76670000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1296.31000000, 223.55720000, 8.94460000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1523.81500000, -53.62390000, 5.89850000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1093.15500000, 1339.00100000, 23.51430000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -904.98600000, 1563.98500000, 24.70830000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1111.72300000, 1124.87900000, 12.62320000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1240.37000000, 452.18370000, 3.53580000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1470.64000000, 742.57860000, 23.07310000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -922.43100000, 893.72840000, 12.67350000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1204.28000000, 948.63290000, 18.59460000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1184.83000000, 786.36840000, 18.56270000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -899.17700000, 1078.25100000, 19.62630000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1258.09900000, 821.32230000, 18.56610000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1428.70900000, 798.65070000, 18.56530000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1487.61000000, 562.89360000, 19.12460000 );
        break;
        case 2:
        sub_128731( sub_127200( iParam0, 2 ), 23, 200, -563.10640000, 293.52680000, 5.65930000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 200, 79.41570000, -839.53680000, 3.99560000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 200, -277.35550000, -533.76340000, 3.92420000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 200, -491.51540000, -173.97790000, 6.90340000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 200, -235.68930000, 739.30850000, 6.12510000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 200, -539.49120000, 1362.38800000, 16.47050000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 200, -180.02360000, -823.41240000, 4.11750000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 200, 173.60920000, 236.49170000, 13.76010000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 200, 89.24590000, 1152.34900000, 13.57080000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 200, 63.60470000, -439.60590000, 13.75830000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 200, -226.95040000, 1714.70300000, 14.75500000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 200, 130.44570000, 467.39240000, 13.91780000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 200, -529.52310000, -339.29980000, 5.04460000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 200, -477.98870000, 1707.35300000, 7.46380000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 200, -636.54130000, -45.71210000, 3.81230000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 200, 140.68720000, -857.79680000, 3.77320000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 200, -108.89000000, 64499, 4.11910000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 200, 348.54010000, -431.52940000, 3.54320000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 200, 166.63900000, 1080.60900000, 13.62470000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 200, -145.57280000, 1694.71300000, 15.72350000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 200, 64.54370000, 261.20720000, 14.53200000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 200, -507.19360000, 533.97330000, 5.67160000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 200, -410.23560000, -141.84080000, 11.61790000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 200, -248.26890000, -589.95000000, 3.78540000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 200, 115.38710000, 741.87240000, 13.56160000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 200, 49.21290000, 1350.85200000, 15.25260000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 200, 332.02520000, -158.35070000, 8.06910000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 200, -462.60650000, 775.56370000, 8.98430000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 200, -66.39730000, 1550.17700000, 17.64730000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 200, -47.94850000, 35.91300000, 13.84780000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 200, -210.80500000, 1410.40400000, 19.35510000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 200, 136.81580000, 387.45690000, 14.02680000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 200, -604.36200000, 339.06450000, 3.67190000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 200, -135.90700000, 819.94900000, 17.62560000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 200, -437.64390000, 430.90700000, 8.93740000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 200, -522.79810000, 1018.30500000, 8.79210000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 200, -593.54960000, 1165.60900000, 8.94090000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 200, 89.78390000, 1251.53900000, 14.86610000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 200, -108.15450000, 1271.20900000, 19.43000000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 200, -5.26000000, -447.87000000, 13.75820000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 200, 171.83730000, -807.45750000, 3.97040000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 200, 0.32430000, -761.24270000, 4.08570000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 200, -526.37620000, 593.51290000, 12.12300000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 200, -554.97370000, 806.93090000, 8.05520000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 200, 13.89740000, 1147.71300000, 13.24760000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 200, 179.53490000, 691.26530000, 7.18630000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 200, -463.63800000, 899.77910000, 8.96270000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 200, -467.32180000, 1556.19000000, 17.47570000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 200, -284.66330000, 1600.64600000, 19.41570000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 200, -311.56230000, 1733.49700000, 12.12580000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 200, -99.43640000, 1350.29900000, 19.41500000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 200, -534.05160000, 1610.99600000, 8.39809000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 200, 91.99830000, -318.91000000, 13.61250000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 200, -619.61000000, -115.38000000, 5.59590000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 200, 361.06920000, -477.77790000, 4.81800000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 200, -404.86420000, 1487.26800000, 17.86060000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 200, -572.86970000, 227.56950000, 3.66220000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 150.65500000, 913.75690000, 7.35240000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -151.58120000, 1004.30900000, 5.22660000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -126.16370000, 554.53360000, 13.76430000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -389.27630000, 1763.59200000, 8.23320000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -414.94510000, 376.06220000, 11.07520000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -348.11940000, 631.42010000, 13.58580000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -561.26700000, 1457.39500000, 16.53680000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -656.75510000, 1140.68700000, 8.81430000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 286.89990000, -392.37890000, 3.97690000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 267.28000000, -686.88580000, 3.87500000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 185.85650000, 801.42330000, 7.45320000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -33.85220000, 772.73390000, 13.64890000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -658.17000000, 809.31000000, 3.10420000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 65123, 1658.10000000, 20.08190000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 65307, 1445.20000000, 19.45000000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -579.01340000, 1414.69400000, 14.47110000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -570.93210000, 158.32300000, 3.66220000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -641.65510000, -195.11170000, 3.94450000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -373.43770000, 1563.55700000, 19.15690000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -242.26720000, -515.22510000, 3.93780000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 83.27290000, 128.63830000, 13.74580000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 100.85700000, -751.07600000, 3.95820000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 148.27850000, -520.31800000, 13.76100000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -145.85800000, -436.54300000, 13.71600000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 30.52840000, -319.98200000, 13.72060000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -121.35400000, -765.42500000, 4.20210000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -301.78400000, -408.61900000, 3.82400000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -221.12500000, -244.63100000, 13.55080000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 345.52040000, -409.60800000, 3.69260000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -187.78400000, -104.23300000, 13.59230000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 23.03970000, -41.08220000, 13.81190000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -105.90000000, 129.42250000, 13.72260000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -470.49600000, 190.20460000, 8.85820000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -108.92700000, 371.07960000, 13.80730000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -308.23960000, 455.43910000, 13.69960000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 113.34910000, 650.53870000, 13.71280000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -69.89160000, 1147.73100000, 13.76710000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 29.31370000, 761.22520000, 13.50620000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 52.12710000, 889.81030000, 13.65160000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -616.57000000, 1001.96400000, 8.91920000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -491.81600000, 949.22980000, 8.96670000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 5.79550000, 1028.96500000, 13.72000000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -542.94400000, 1303.59300000, 16.25890000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -273.10860000, 1211.38200000, 17.78520000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -292.14300000, 1331.30300000, 23.60140000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -364.25800000, 1371.32500000, 14.19140000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -34.57900000, 1410.33300000, 19.42230000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -161.42200000, 1555.53300000, 17.37360000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 210.82320000, -105.36900000, 13.76120000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -124.28630000, -530.18220000, 13.76020000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -220.20000000, -883.72000000, 3.67810000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -107.78000000, -821.86000000, 4.12670000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 78.03000000, -670.74000000, 13.76770000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 151.18900000, -613.04700000, 9.63030000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -27.54000000, -823.69000000, 4.45430000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 200.28920000, -698.77010000, 3.95350000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -195.15000000, -711.21000000, 3.96790000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 100.96000000, -512.62000000, 15.08830000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 306.47000000, -623.30000000, 4.19430000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -79.41310000, 614.20590000, 13.76610000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -385.48000000, 738.49000000, 13.76610000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -434.99950000, 1101.79400000, 9.24650000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -31.37680000, 959.19130000, 13.92130000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -268.25000000, 751.37000000, 10.86610000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -199.04800000, 880.55260000, 5.15900000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -330.31000000, 1134.31000000, 12.49350000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -174.81230000, 938.15850000, 10.64700000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -115.90590000, 1043.57100000, 5.15920000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -315.16000000, 867.71000000, 8.89900000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -564.60000000, 1183.60000000, 9.01900000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -498.02150000, 1183.31100000, 13.21080000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -414.29530000, 1365.34600000, 15.55880000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -468.98060000, 1468.96400000, 17.86100000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -112.28410000, 1672.74500000, 17.61140000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -219.91810000, 1277.23200000, 22.09290000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 2.40000000, 1197.70000000, 16.47760000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -25.70000000, 1250.90000000, 19.43250000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -65.74770000, 1498.05800000, 17.44880000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -383.30600000, 319.06300000, 13.75090000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 65250, 344.20000000, 13.66590000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -212.60000000, 346.70000000, 14.03540000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -66.26470000, 278.22370000, 13.76360000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -181.14000000, 491.28420000, 13.71490000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -24.70000000, 405.20000000, 14.76350000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 51.61110000, 464.46720000, 13.69600000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 27.60000000, 374.20000000, 13.70190000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -603.98900000, 612.11540000, 3.85550000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -337.70000000, 215.40000000, 13.74920000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -383.50000000, 556.30000000, 13.77870000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -442.96920000, 590.37180000, 10.25190000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 141.80000000, 211.20000000, 13.76310000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -192.30000000, 162.40000000, 13.98940000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -348.60300000, -188.71300000, 13.64900000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -273.48200000, -157.81400000, 13.88300000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -117.97000000, -335.54000000, 13.73490000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -12.45000000, -218.40000000, 13.63990000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 179.94720000, -254.52090000, 11.85560000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 264.98180000, -302.83180000, 5.59270000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 162.58500000, -158.31150000, 13.92630000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 113.02140000, -39.66420000, 13.76250000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -126.60700000, -117.37200000, 13.81500000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 207.01740000, 20.70740000, 13.71320000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -254.45000000, -43.88000000, 13.76330000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -347.84500000, 105.27390000, 13.81310000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -345.03400000, -100.46700000, 13.70210000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -445.05100000, 131.98950000, 8.83120000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -490.37520000, 25.33320000, 6.86600000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -572.51200000, 86.31020000, 3.81230000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 29.85000000, -601.28000000, 13.69580000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, -184.29000000, 102.09000000, 13.76770000 );
        break;
        case 3:
        sub_128731( sub_127200( iParam0, 2 ), 23, 10, 539.10960000, 1256.93500000, 5.73630000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 10, 882.31930000, 1930.23800000, 34.16670000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 10, 1475.73900000, 1564.51600000, 3.66870000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 10, 93.89270000, 1713.48100000, 28.73100000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 10, 328.96450000, 1716.17800000, 14.86010000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 10, 1119.38200000, 1525.37700000, 15.63970000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 10, 707.74950000, 1309.93500000, 13.26370000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 10, 930.30580000, 1631.76100000, 16.05420000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 10, 360.37280000, 1881.50600000, 18.44000000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 10, 644.43170000, 1981.75500000, 30.80980000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 10, 468.04420000, 1396.87200000, 10.67750000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 10, 845.72580000, 1854.56700000, 43.95300000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 10, 1069.71500000, 1958.88900000, 10.90870000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 10, 1205.48100000, 1720.37000000, 15.66210000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 10, 1365.76300000, 1906.24700000, 4.63100000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 10, 634.93950000, 1612.97000000, 25.21720000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 10, 1319.39400000, 1685.28700000, 15.79480000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 10, 1439.96700000, 1723.91200000, 15.68820000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 10, 379.41550000, 1531.95200000, 15.94950000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 10, 1248.69500000, 1474.25200000, 15.82900000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 10, 386.04720000, 1755.51900000, 20.70220000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 10, 460.35860000, 2026.23700000, 6.86000000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 10, 553.16000000, 1462.95000000, 9.46780000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 10, 751.69490000, 1600.36700000, 20.85910000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 10, 1073.43700000, 1823.56400000, 12.77140000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 10, 1257.53000000, 1514.06300000, 15.99010000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 689.15590000, 1457.28400000, 13.75660000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 936.22550000, 1530.67400000, 15.83790000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 771.99180000, 1966.79800000, 22.72810000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 1185.19300000, 1471.14700000, 15.68200000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 702.78440000, 1937.85000000, 26.15900000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 547.32150000, 1316.52000000, 9.93810000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 368.63770000, 1628.96100000, 15.21180000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 510.20640000, 1825.90800000, 29.83320000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 584.97880000, 1880.88200000, 26.36540000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 734.09080000, 1532.38800000, 17.66370000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 1332.83000000, 1420.26600000, 10.63750000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 1134.34400000, 1812.80000000, 9.31490000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 1228.91500000, 1939.79000000, 11.30560000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 666.57490000, 1435.97500000, 13.16830000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 1060.42200000, 1902.93300000, 13.20990000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 772.97860000, 1477.91500000, 13.24540000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 1028.85700000, 1662.25600000, 15.19240000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 877.66640000, 1594.83200000, 15.93270000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 1141.42700000, 1672.18500000, 16.12200000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 482.39520000, 1621.94800000, 19.15470000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 325.66010000, 1807.28400000, 16.58760000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 438.86760000, 1955.03500000, 23.10060000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 440.77880000, 1648.07300000, 14.95950000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 455.56370000, 1541.82700000, 14.05120000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 468.56070000, 1498.16300000, 12.62310000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 539.00440000, 1760.74400000, 31.55800000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 562.00150000, 1545.10000000, 16.04880000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 558.07730000, 1432.16400000, 10.11410000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 587.98410000, 1673.94000000, 30.77670000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 611.11330000, 1734.55100000, 30.86380000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 689.79570000, 1542.87100000, 17.26990000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 731.81860000, 1401.85100000, 13.21590000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 788.46140000, 1394.36900000, 13.23530000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 816.96370000, 1758.44200000, 16.18570000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 931.48030000, 1713.01100000, 15.68600000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 965.84810000, 1781.22200000, 19.21950000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 1074.58800000, 1754.85300000, 13.37660000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 1236.91200000, 1776.98000000, 9.31600000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 1256.70600000, 1841.52500000, 9.13970000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 1303.10100000, 1848.62300000, 9.11100000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 10, 1408.43200000, 1575.70900000, 2.65490000 );
        break;
        case 4:
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, 971.25700000, -241.15850000, 21.77490000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, 1991.54800000, 666.28930000, 17.05490000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, 978.78280000, 697.73490000, 25.01930000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, 1670.20700000, 1148.62700000, 2.37930000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, 2197.52100000, -4.28880000, 4.78710000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, 769.50460000, 354.70890000, 7.67740000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, 1044.38500000, 577.04820000, 24.68200000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, 796.74760000, -204.30470000, 4.99600000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, 1034.98200000, 993.40050000, 14.51280000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, 1488.01100000, -481.83600000, 30.15300000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, 725.29760000, 59.99800000, 4.95690000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, 1491.71400000, 357.32600000, 16.20000000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, 1177.05400000, -381.75500000, 20.50900000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, 1534.77600000, 39.55110000, 23.86690000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, 1382.43500000, -562.72270000, 13.62910000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, 1455.49000000, -332.38300000, 13.75420000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, 1206.40700000, 1054.12900000, 6.88890000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, 1386.27600000, 399.48250000, 21.94650000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, 1510.31200000, -418.72120000, 33.56950000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, 2237.96900000, 698.48690000, 4.80750000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, 2334.89200000, 169.20370000, 4.85780000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, 957.12920000, 187.32830000, 30.85680000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, 1742.97400000, 406.33870000, 24.02560000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, 1462.04300000, 27.35250000, 23.23340000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, 1355.33500000, 114.71390000, 30.29480000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, 1301.52300000, -393.57320000, 17.34230000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, 1047.89600000, 488.45810000, 18.52560000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, 711.86510000, 112.66810000, 5.00400000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, 1324.37400000, -709.35170000, 7.32980000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, 937.48060000, -706.47240000, 15.44030000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, 1145.83100000, -629.40700000, 12.77860000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, 1636.29900000, 161.49530000, 26.91540000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, 1352.16700000, -526.77150000, 13.61500000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, 1390.80000000, -259.77330000, 19.18340000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, 896.72970000, 432.34670000, 12.57160000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, 1238.30300000, 424.19980000, 21.60770000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, 1769.25800000, 1027.22600000, 14.55440000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, 893.41270000, 486.69640000, 12.48910000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, 2313.73100000, -5.84420000, 4.85890000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, 2238.16700000, 189.87030000, 4.90610000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, 2081.40600000, 309.53860000, 18.81760000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, 2115.34300000, 505.21730000, 8.60340000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, 2068.74900000, 609.38340000, 17.70370000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, 1909.62700000, 277.26980000, 4.23590000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, 2457.64300000, 394.31570000, 4.80800000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1787.68600000, 884.52730000, 16.06660000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 794.19010000, 75.48400000, 5.01250000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1874.83800000, 107.34850000, 17.14260000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 2189.09700000, 321.15950000, 5.20560000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 2616.15100000, 432.87480000, 4.85950000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1489.06000000, 563.60000000, 28.83170000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1023.06200000, 617.05350000, 37.28110000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1381.86900000, 334.10410000, 18.50400000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1488.55100000, 648.40590000, 27.34510000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1497.21300000, 912.85590000, 14.28900000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1102.66500000, -84.83450000, 35.29810000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1103.88000000, -217.78940000, 21.19290000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 902.45760000, -682.94340000, 15.33640000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1139.98000000, -283.95670000, 19.64120000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1114.17900000, 287.47740000, 30.20140000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1202.41300000, -679.65320000, 15.42330000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 804.32350000, -25.85970000, 5.15600000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 850.31520000, 681.09970000, 6.88570000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1595.65200000, 366.45610000, 24.23320000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 834.78190000, 842.82500000, 10.80350000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1175.59000000, 975.44030000, 14.40380000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1246.67300000, 892.18030000, 30.61760000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 2408.35400000, 27.70170000, 5.08350000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 2762.13500000, 422.38900000, 5.06270000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 2327.30600000, -108.32800000, 4.85780000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 2489.17700000, 755.87680000, 3.45390000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1951.25600000, 864.31450000, 9.95050000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1910.89400000, 468.99340000, 17.39970000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1894.39700000, 724.58680000, 23.24230000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 2671.00600000, 413.67400000, 4.80730000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 2357.89800000, 398.53440000, 5.08020000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1056.80600000, -561.22890000, 12.66850000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 926.81460000, -500.43770000, 14.14500000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 940.84120000, 327.51310000, 29.74390000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1385.23000000, 190.27770000, 25.93480000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 945.37550000, -643.48990000, 13.23200000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1043.36600000, 909.41000000, 30.60360000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1136.78700000, -698.29410000, 15.42140000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 938.77260000, 911.06760000, 21.62160000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1062.84000000, 700.77970000, 32.94400000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1050.94100000, 854.70670000, 30.68800000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1240.56500000, 751.17660000, 35.11810000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1393.91600000, 530.09220000, 27.96500000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1263.16100000, 337.69190000, 20.31880000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1153.28600000, 448.26910000, 28.82300000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 830.50780000, 356.23580000, 5.96940000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1552.73500000, 836.96840000, 16.02460000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1823.46600000, 550.70790000, 27.97250000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1819.67400000, 344.58930000, 21.63850000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1780.63100000, 176.98750000, 20.74130000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1526.18500000, 202.64920000, 22.12750000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1414.34000000, 15.21330000, 24.87060000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1226.28700000, 151.64710000, 31.45340000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 957.46700000, 70.46760000, 29.02720000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1200.92300000, -49.12340000, 29.61420000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1302.28900000, -106.41000000, 25.83070000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1311.66600000, 94.31480000, 33.43510000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1267.07500000, -262.42500000, 24.33860000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1072.13700000, -278.21340000, 20.05710000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 989.40310000, -324.93550000, 19.87850000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 809.38740000, -501.27790000, 13.00590000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 896.74400000, -581.16300000, 12.97120000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 721.35270000, -294.43500000, 4.82040000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 766.60350000, -558.81270000, 8.71300000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 872.93650000, -293.38860000, 16.30820000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1248.20200000, -434.06700000, 15.65760000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1042.48200000, -470.39700000, 13.56660000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1029.54100000, -700.80800000, 15.44000000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 837.87730000, 126.86570000, 4.93750000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1376.86500000, -66.94800000, 21.78340000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1227.66700000, 24.23500000, 34.69800000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 881.41480000, 191.42900000, 29.83690000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1241.61900000, -149.58210000, 26.67020000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 798.72020000, -369.13160000, 6.53280000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1025.91100000, -71.99620000, 27.75800000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 790.45740000, -291.48900000, 13.50790000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1190.75800000, 695.12240000, 36.33260000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1736.31100000, 673.13120000, 27.00880000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1635.02900000, 726.04530000, 27.21290000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1641.17200000, 508.39920000, 27.78160000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1725.32700000, 504.99910000, 27.94640000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1168.02600000, 550.06880000, 28.22670000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1343.09000000, 618.81650000, 35.90860000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1415.46000000, 784.76450000, 27.24360000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 986.42850000, 517.60480000, 20.83150000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 978.83850000, 796.69900000, 24.33790000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1371.68500000, 813.48190000, 24.64800000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1736.14500000, 310.83050000, 11.00410000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1562.77400000, 486.79020000, 28.07260000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1540.74600000, 992.09050000, 13.14870000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1120.33300000, 770.54590000, 33.62930000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1687.03400000, 913.52890000, 15.09290000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 2456.05300000, 193.38270000, 4.85780000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 2187.67200000, 454.12460000, 5.10300000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 2544.68500000, 452.00130000, 4.80790000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 2406.69600000, 552.79240000, 4.85780000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 2309.43700000, 556.20780000, 5.03860000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1965.17900000, 157.26200000, 14.65190000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 2194.80600000, 633.44290000, 4.92400000 );
        break;
        case 5:
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1988.59600000, -261.24350000, 13.21570000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1957.61700000, -380.15630000, 2.54140000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1750.17500000, -188.89970000, 9.31030000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1462.18300000, -555.94830000, 7.14380000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1896.97200000, -652.20210000, 8.51260000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -2127.38100000, -327.66700000, 1.84810000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1832.01600000, -591.09220000, 39.02480000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1557.64900000, -487.77500000, 49.97720000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1839.98600000, -648.80100000, 5.82910000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1849.57000000, -197.37200000, 1.62920000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1569.59200000, -288.30590000, -1.61900000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1593.68600000, -528.22850000, 5.58460000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1652.23700000, -344.31550000, 1.83710000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1883.32000000, -538.75650000, 2.20930000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1981.27900000, -639.00310000, 3.28400000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1481.57000000, -285.77700000, 1.83700000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1744.83100000, -312.47730000, 5.92080000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1624.97600000, -680.03380000, 6.17540000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -2062.50500000, -433.98490000, 3.37430000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1756.51600000, -264.89190000, 10.12920000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1451.59000000, -613.79830000, 2.00180000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1516.68000000, -466.84100000, 1.82770000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1723.96000000, -386.08700000, 1.92320000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1703.45000000, -569.29200000, 1.92350000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1971.57000000, -577.45600000, 1.83690000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1927.70000000, -488.93700000, 2.20850000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1678.75000000, -254.92500000, 1.74960000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 63658, -300.98300000, 4.43590000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1975.83000000, -210.92500000, 1.62840000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -2024.15000000, -426.54300000, 3.28110000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1968.68000000, -507.75940000, 2.20930000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1813.52600000, -506.78250000, 2.04570000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1829.59200000, -454.68280000, 2.20950000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1682.03400000, -427.12200000, 1.91060000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1531.64500000, -575.34610000, 2.00010000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1562.14300000, -436.53920000, 3.60510000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1756.10000000, -451.95550000, 2.04500000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1858.55400000, -375.19650000, 3.23150000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1554.54900000, -233.75650000, 4.38720000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1643.03100000, -611.03750000, 1.83760000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1727.51100000, -226.10180000, 3.43530000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1937.72600000, -238.36680000, 4.43800000 );
        break;
        case 6:
        switch (iParam0->_fU64)
        {
            case 1:
            sub_128731( sub_146048( iParam0, 12 ), 23, 0, -1179.37400000, -471.02340000, 12.30210000 );
            sub_128731( sub_146048( iParam0, 5 ), 23, 0, -974.23990000, -394.78180000, 12.49830000 );
            sub_128731( sub_146048( iParam0, 12 ), 23, 0, -1129.84400000, -374.91930000, 11.96490000 );
            sub_128731( sub_146048( iParam0, 5 ), 23, 0, -985.62780000, -456.36110000, 12.30230000 );
            sub_128731( sub_146048( iParam0, 7 ), 23, 0, -1180.50800000, -469.41180000, 7.28980000 );
            sub_128731( sub_146048( iParam0, 12 ), 23, 0, -1139.07900000, -324.89190000, 7.28950000 );
            sub_128731( sub_146048( iParam0, 7 ), 23, 0, -1075.19800000, -492.82770000, 12.30190000 );
            sub_128731( sub_146048( iParam0, 5 ), 23, 0, -900.00490000, -397.62310000, 12.30170000 );
            break;
            case 2:
            sub_128731( sub_146048( iParam0, 17 ), 23, 0, -1179.37400000, -471.02340000, 12.30210000 );
            sub_128731( sub_146048( iParam0, 4 ), 23, 0, -974.23990000, -394.78180000, 12.49830000 );
            sub_128731( sub_146048( iParam0, 14 ), 23, 0, -1129.84400000, -374.91930000, 11.96490000 );
            sub_128731( sub_146048( iParam0, 4 ), 23, 0, -985.62780000, -456.36110000, 12.30230000 );
            sub_128731( sub_146048( iParam0, 13 ), 23, 0, -1180.50800000, -469.41180000, 7.28980000 );
            sub_128731( sub_146048( iParam0, 14 ), 23, 0, -1139.07900000, -324.89190000, 7.28950000 );
            sub_128731( sub_146048( iParam0, 17 ), 23, 0, -1075.19800000, -492.82770000, 12.30190000 );
            sub_128731( sub_146048( iParam0, 4 ), 23, 0, -900.00490000, -397.62310000, 12.30170000 );
            break;
            case 3:
            sub_128731( sub_146048( iParam0, 16 ), 23, 0, -1179.37400000, -471.02340000, 12.30210000 );
            sub_128731( sub_146048( iParam0, 18 ), 23, 0, -974.23990000, -394.78180000, 12.49830000 );
            sub_128731( sub_146048( iParam0, 15 ), 23, 0, -1129.84400000, -374.91930000, 11.96490000 );
            sub_128731( sub_146048( iParam0, 5 ), 23, 0, -985.62780000, -456.36110000, 12.30230000 );
            sub_128731( sub_146048( iParam0, 13 ), 23, 0, -1180.50800000, -469.41180000, 7.28980000 );
            sub_128731( sub_146048( iParam0, 15 ), 23, 0, -1139.07900000, -324.89190000, 7.28950000 );
            sub_128731( sub_146048( iParam0, 16 ), 23, 0, -1075.19800000, -492.82770000, 12.30190000 );
            sub_128731( sub_146048( iParam0, 4 ), 23, 0, -900.00490000, -397.62310000, 12.30170000 );
            break;
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1179.37400000, -471.02340000, 12.30210000 );
            sub_128731( sub_127200( iParam0, 2 ), 23, 0, -1129.84400000, -374.91930000, 11.96490000 );
            sub_128731( sub_127200( iParam0, 2 ), 23, 0, -1180.50800000, -469.41180000, 7.28980000 );
            sub_128731( sub_127200( iParam0, 2 ), 23, 0, -1075.19800000, -492.82770000, 12.30190000 );
            sub_128731( sub_127200( iParam0, 0 ), 23, 0, -974.23990000, -394.78180000, 12.49830000 );
            sub_128731( sub_127200( iParam0, 0 ), 23, 0, -985.62780000, -456.36110000, 12.30230000 );
            sub_128731( sub_127200( iParam0, 0 ), 23, 0, -1139.07900000, -324.89190000, 7.28950000 );
            sub_128731( sub_127200( iParam0, 0 ), 23, 0, -900.00490000, -397.62310000, 12.30170000 );
            break;
            case 0:
            sub_128731( sub_146048( iParam0, 16 ), 23, 0, -1179.37400000, -471.02340000, 12.30210000 );
            sub_128731( sub_146048( iParam0, 18 ), 23, 0, -974.23990000, -394.78180000, 12.49830000 );
            sub_128731( sub_146048( iParam0, 15 ), 23, 0, -1129.84400000, -374.91930000, 11.96490000 );
            sub_128731( sub_146048( iParam0, 5 ), 23, 0, -985.62780000, -456.36110000, 12.30230000 );
            sub_128731( sub_146048( iParam0, 13 ), 23, 0, -1180.50800000, -469.41180000, 7.28980000 );
            sub_128731( sub_146048( iParam0, 15 ), 23, 0, -1139.07900000, -324.89190000, 7.28950000 );
            sub_128731( sub_146048( iParam0, 16 ), 23, 0, -1075.19800000, -492.82770000, 12.30190000 );
            sub_128731( sub_146048( iParam0, 4 ), 23, 0, -900.00490000, -397.62310000, 12.30170000 );
            break;
        }
        sub_128731( sub_127200( iParam0, 2 ), 23, 0, -943.87520000, -369.52990000, 9.96950000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 0, -974.14700000, -325.42500000, 12.30190000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 0, -905.80910000, -355.14430000, 2.17950000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 0, -1034.78100000, -487.44620000, 2.17920000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 0, -1134.33600000, -442.75500000, 2.17880000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 0, -938.73180000, -411.02590000, 11.94080000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 0, -1135.11500000, -358.36580000, 2.17910000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 0, -969.02450000, -431.48750000, 2.93540000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, -971.50310000, -365.51860000, 2.13990000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, -1131.40600000, -476.22250000, 1.25700000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, -1084.88200000, -413.49010000, 2.18670000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, -930.18570000, -416.89610000, 3.71260000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, -1082.97000000, -349.59460000, 2.17820000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, -946.29130000, -328.82420000, 2.17950000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, -1049.83100000, -380.59300000, 2.31070000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, -1027.14900000, -358.24460000, 2.16310000 );
        break;
        case 7:
        switch (iParam0->_fU64)
        {
            case 1:
            sub_128731( sub_146048( iParam0, 7 ), 23, 0, -1075.98500000, 148.86390000, 6.37530000 );
            sub_128731( sub_146048( iParam0, 12 ), 23, 0, -1283.58800000, 455.25190000, 49.97760000 );
            sub_128731( sub_146048( iParam0, 5 ), 23, 0, -1255.54000000, 116.30180000, 4.80030000 );
            sub_128731( sub_146048( iParam0, 12 ), 23, 0, -964.67740000, 151.32000000, 5.27030000 );
            sub_128731( sub_146048( iParam0, 5 ), 23, 0, -1057.64600000, 249.89120000, 7.75290000 );
            break;
            case 2:
            sub_128731( sub_146048( iParam0, 17 ), 23, 0, -1075.98500000, 148.86390000, 6.37530000 );
            sub_128731( sub_146048( iParam0, 17 ), 23, 0, -1214.61000000, 531.44000000, 13.04100000 );
            sub_128731( sub_146048( iParam0, 4 ), 23, 0, -1255.54000000, 116.30180000, 4.80030000 );
            sub_128731( sub_146048( iParam0, 14 ), 23, 0, -964.67740000, 151.32000000, 5.27030000 );
            sub_128731( sub_146048( iParam0, 10 ), 23, 0, -1057.64600000, 249.89120000, 7.75290000 );
            break;
            case 3:
            sub_128731( sub_146048( iParam0, 16 ), 23, 0, -1075.98500000, 148.86390000, 6.37530000 );
            sub_128731( sub_146048( iParam0, 18 ), 23, 0, -1214.61000000, 531.44000000, 13.04100000 );
            sub_128731( sub_146048( iParam0, 4 ), 23, 0, -1255.54000000, 116.30180000, 4.80030000 );
            sub_128731( sub_146048( iParam0, 15 ), 23, 0, -964.67740000, 151.32000000, 5.27030000 );
            sub_128731( sub_146048( iParam0, 11 ), 23, 0, -1057.64600000, 249.89120000, 7.75290000 );
            break;
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            sub_128731( sub_127200( iParam0, 2 ), 23, 24, -964.67740000, 151.32000000, 5.27030000 );
            sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1283.58800000, 455.25190000, 49.97760000 );
            sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1075.98500000, 148.86390000, 6.37530000 );
            sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1255.54000000, 116.30180000, 4.80030000 );
            sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1057.64600000, 249.89120000, 7.75290000 );
            break;
            case 0:
            sub_128731( sub_146048( iParam0, 16 ), 23, 0, -1075.98500000, 148.86390000, 6.37530000 );
            sub_128731( sub_146048( iParam0, 18 ), 23, 0, -1214.61000000, 531.44000000, 13.04100000 );
            sub_128731( sub_146048( iParam0, 4 ), 23, 0, -1255.54000000, 116.30180000, 4.80030000 );
            sub_128731( sub_146048( iParam0, 15 ), 23, 0, -964.67740000, 151.32000000, 5.27030000 );
            sub_128731( sub_146048( iParam0, 11 ), 23, 0, -1057.64600000, 249.89120000, 7.75290000 );
            break;
        }
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1274.41100000, 701.62580000, 14.39700000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1099.49500000, 393.20450000, 3.93250000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1017.69400000, 47.42280000, 4.28950000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -968.62940000, 337.82890000, 3.50260000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -986.80800000, 453.98970000, 3.37260000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1184.88300000, 16.94380000, 3.30650000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -1296.30900000, 223.55720000, 8.94460000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, -919.65090000, 646.94350000, 3.07890000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1038.82800000, 568.35760000, 3.07740000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, -1055.34500000, 448.75700000, 3.37260000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1004.58400000, 710.36520000, 2.96050000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -975.65720000, 262.81570000, 3.37280000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1276.45500000, 641.39540000, 7.36890000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -954.30020000, 627.81490000, 3.07890000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1231.63400000, 500.95030000, 3.37340000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1213.79000000, 664.11570000, 12.85330000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1133.36000000, 519.97690000, 3.89570000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1101.90900000, 317.84240000, 3.50320000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1121.53500000, 695.33390000, 8.15600000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1143.45200000, 21.28500000, 3.20850000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1151.13800000, 341.02540000, 3.09000000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1168.72000000, 148.28840000, 3.23240000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1214.21100000, 591.50100000, 3.37350000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1240.37300000, 452.18370000, 3.53580000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1260.71500000, 353.20720000, 6.37320000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1275.83900000, -6.00980000, 5.23960000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1220.80700000, 209.69680000, 3.43310000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1196.68000000, 337.08170000, 3.00040000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, -1095.52500000, 579.76070000, 3.52740000 );
        break;
        case 8:
        switch (iParam0->_fU64)
        {
            case 1:
            sub_128731( sub_146048( iParam0, 12 ), 23, 24, -608.34910000, -798.24460000, 12.06630000 );
            sub_128731( sub_146048( iParam0, 5 ), 23, 24, -608.20830000, -857.52000000, 12.19460000 );
            sub_128731( sub_146048( iParam0, 12 ), 23, 24, -804.94760000, -737.65580000, 3.83730000 );
            sub_128731( sub_146048( iParam0, 7 ), 23, 24, -608.10000000, -819.83000000, 3.83770000 );
            sub_128731( sub_146048( iParam0, 12 ), 23, 24, -714.94530000, -818.98440000, 3.83740000 );
            sub_128731( sub_146048( iParam0, 7 ), 23, 24, -489.24340000, -890.79850000, 3.83770000 );
            sub_128731( sub_146048( iParam0, 12 ), 23, 24, -517.41030000, -978.96110000, 4.53750000 );
            sub_128731( sub_146048( iParam0, 12 ), 23, 24, -563.81060000, -1047.09000000, 4.05940000 );
            sub_128731( sub_146048( iParam0, 7 ), 23, 24, -625.72610000, -1002.18000000, 4.39280000 );
            sub_128731( sub_146048( iParam0, 5 ), 23, 24, -529.89010000, -813.25090000, 4.53770000 );
            sub_128731( sub_146048( iParam0, 5 ), 23, 24, -569.10100000, -733.48970000, 3.89950000 );
            sub_128731( sub_146048( iParam0, 7 ), 23, 24, -628.38550000, -673.67490000, 4.90510000 );
            sub_128731( sub_146048( iParam0, 7 ), 23, 24, -608.37770000, -893.77860000, 3.83770000 );
            sub_128731( sub_146048( iParam0, 5 ), 23, 24, -612.43000000, -955.11000000, 3.83770000 );
            sub_128731( sub_146048( iParam0, 12 ), 23, 24, -490.30000000, -956.50000000, 3.83770000 );
            break;
            case 2:
            sub_128731( sub_146048( iParam0, 17 ), 23, 24, -608.34910000, -798.24460000, 12.06630000 );
            sub_128731( sub_146048( iParam0, 17 ), 23, 24, -608.20830000, -857.52000000, 12.19460000 );
            sub_128731( sub_146048( iParam0, 4 ), 23, 24, -804.94760000, -737.65580000, 3.83730000 );
            sub_128731( sub_146048( iParam0, 13 ), 23, 24, -608.10000000, -819.83000000, 3.83770000 );
            sub_128731( sub_146048( iParam0, 14 ), 23, 24, -714.94530000, -818.98440000, 3.83740000 );
            sub_128731( sub_146048( iParam0, 9 ), 23, 24, -489.24340000, -890.79850000, 3.83770000 );
            sub_128731( sub_146048( iParam0, 13 ), 23, 24, -517.41030000, -978.96110000, 4.53750000 );
            sub_128731( sub_146048( iParam0, 14 ), 23, 24, -563.81060000, -1047.09000000, 4.05940000 );
            sub_128731( sub_146048( iParam0, 14 ), 23, 24, -625.72610000, -1002.18000000, 4.39280000 );
            sub_128731( sub_146048( iParam0, 14 ), 23, 24, -529.89010000, -813.25090000, 4.53770000 );
            sub_128731( sub_146048( iParam0, 14 ), 23, 24, -569.10100000, -733.48970000, 3.89950000 );
            sub_128731( sub_146048( iParam0, 4 ), 23, 24, -628.38550000, -673.67490000, 4.90510000 );
            sub_128731( sub_146048( iParam0, 9 ), 23, 24, -608.37770000, -893.77860000, 3.83770000 );
            sub_128731( sub_146048( iParam0, 4 ), 23, 24, -612.43000000, -955.11000000, 3.83770000 );
            sub_128731( sub_146048( iParam0, 14 ), 23, 24, -490.30000000, -956.50000000, 3.83770000 );
            break;
            case 3:
            sub_128731( sub_146048( iParam0, 17 ), 23, 24, -608.34910000, -798.24460000, 12.06630000 );
            sub_128731( sub_146048( iParam0, 5 ), 23, 24, -608.20830000, -857.52000000, 12.19460000 );
            sub_128731( sub_146048( iParam0, 18 ), 23, 24, -804.94760000, -737.65580000, 3.83730000 );
            sub_128731( sub_146048( iParam0, 13 ), 23, 24, -608.10000000, -819.83000000, 3.83770000 );
            sub_128731( sub_146048( iParam0, 15 ), 23, 24, -714.94530000, -818.98440000, 3.83740000 );
            sub_128731( sub_146048( iParam0, 13 ), 23, 24, -489.24340000, -890.79850000, 3.83770000 );
            sub_128731( sub_146048( iParam0, 13 ), 23, 24, -517.41030000, -978.96110000, 4.53750000 );
            sub_128731( sub_146048( iParam0, 15 ), 23, 24, -563.81060000, -1047.09000000, 4.05940000 );
            sub_128731( sub_146048( iParam0, 11 ), 23, 24, -625.72610000, -1002.18000000, 4.39280000 );
            sub_128731( sub_146048( iParam0, 11 ), 23, 24, -529.89010000, -813.25090000, 4.53770000 );
            sub_128731( sub_146048( iParam0, 18 ), 23, 24, -569.10100000, -733.48970000, 3.89950000 );
            sub_128731( sub_146048( iParam0, 4 ), 23, 24, -628.38550000, -673.67490000, 4.90510000 );
            sub_128731( sub_146048( iParam0, 13 ), 23, 24, -608.37770000, -893.77860000, 3.83770000 );
            sub_128731( sub_146048( iParam0, 4 ), 23, 24, -612.43000000, -955.11000000, 3.83770000 );
            sub_128731( sub_146048( iParam0, 13 ), 23, 24, -490.30000000, -956.50000000, 3.83770000 );
            break;
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            sub_128731( sub_127200( iParam0, 2 ), 23, 24, -608.20830000, -857.52000000, 12.19460000 );
            sub_128731( sub_127200( iParam0, 2 ), 23, 24, -804.94760000, -737.65580000, 3.83730000 );
            sub_128731( sub_127200( iParam0, 2 ), 23, 24, -714.94530000, -818.98440000, 3.83740000 );
            sub_128731( sub_127200( iParam0, 2 ), 23, 24, -563.81060000, -1047.09000000, 4.05940000 );
            sub_128731( sub_127200( iParam0, 2 ), 23, 24, -569.10100000, -733.48970000, 3.89950000 );
            sub_128731( sub_127200( iParam0, 2 ), 23, 24, -628.38550000, -673.67490000, 4.90510000 );
            sub_128731( sub_127200( iParam0, 2 ), 23, 24, -612.43000000, -955.11000000, 3.83770000 );
            sub_128731( sub_127200( iParam0, 0 ), 23, 24, -608.34910000, -798.24460000, 12.06630000 );
            sub_128731( sub_127200( iParam0, 0 ), 23, 24, -608.10000000, -819.83000000, 3.83770000 );
            sub_128731( sub_127200( iParam0, 0 ), 23, 24, -489.24340000, -890.79850000, 3.83770000 );
            sub_128731( sub_127200( iParam0, 0 ), 23, 24, -517.41030000, -978.96110000, 4.53750000 );
            sub_128731( sub_127200( iParam0, 0 ), 23, 24, -625.72610000, -1002.18000000, 4.39280000 );
            sub_128731( sub_127200( iParam0, 0 ), 23, 24, -529.89010000, -813.25090000, 4.53770000 );
            sub_128731( sub_127200( iParam0, 0 ), 23, 24, -608.37770000, -893.77860000, 3.83770000 );
            sub_128731( sub_127200( iParam0, 0 ), 23, 24, -490.30000000, -956.50000000, 3.83770000 );
            break;
            case 0:
            sub_128731( sub_146048( iParam0, 17 ), 23, 24, -608.34910000, -798.24460000, 12.06630000 );
            sub_128731( sub_146048( iParam0, 5 ), 23, 24, -608.20830000, -857.52000000, 12.19460000 );
            sub_128731( sub_146048( iParam0, 18 ), 23, 24, -804.94760000, -737.65580000, 3.83730000 );
            sub_128731( sub_146048( iParam0, 12 ), 23, 24, -608.10000000, -819.83000000, 3.83770000 );
            sub_128731( sub_146048( iParam0, 14 ), 23, 24, -714.94530000, -818.98440000, 3.83740000 );
            sub_128731( sub_146048( iParam0, 9 ), 23, 24, -489.24340000, -890.79850000, 3.83770000 );
            sub_128731( sub_146048( iParam0, 12 ), 23, 24, -517.41030000, -978.96110000, 4.53750000 );
            sub_128731( sub_146048( iParam0, 14 ), 23, 24, -563.81060000, -1047.09000000, 4.05940000 );
            sub_128731( sub_146048( iParam0, 10 ), 23, 24, -625.72610000, -1002.18000000, 4.39280000 );
            sub_128731( sub_146048( iParam0, 11 ), 23, 24, -529.89010000, -813.25090000, 4.53770000 );
            sub_128731( sub_146048( iParam0, 18 ), 23, 24, -569.10100000, -733.48970000, 3.89950000 );
            sub_128731( sub_146048( iParam0, 4 ), 23, 24, -628.38550000, -673.67490000, 4.90510000 );
            sub_128731( sub_146048( iParam0, 9 ), 23, 24, -608.37770000, -893.77860000, 3.83770000 );
            sub_128731( sub_146048( iParam0, 4 ), 23, 24, -612.43000000, -955.11000000, 3.83770000 );
            sub_128731( sub_146048( iParam0, 13 ), 23, 24, -490.30000000, -956.50000000, 3.83770000 );
            break;
        }
        break;
        case 9:
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, 408.80360000, -65.24540000, 4.29340000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, 561.51890000, 188.31020000, 7.71200000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, 546.11480000, 224.00730000, 9.71000000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, 535.68580000, 120.49250000, 2.56830000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 24, 489.39300000, 221.40600000, 7.72690000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, 523.61310000, -76.84820000, 8.28780000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, 375.34610000, 109.64960000, 3.99930000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, 466.36250000, -64.42510000, 8.25140000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 24, 433.49540000, 32.68570000, 7.85790000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 468.10000000, 402.10000000, 7.27620000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 431.43030000, 226.85410000, 13.71420000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 530.50880000, 257.98000000, 7.89350000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 415.05510000, 346.20030000, 7.53930000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 452.16560000, 313.49470000, 7.57830000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 480.96360000, 105.28050000, 6.95840000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 518.70980000, 313.52720000, 7.57960000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 533.97420000, 373.89600000, 7.69930000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 526.41750000, -13.77130000, 7.98750000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 486.09720000, 40.29870000, 7.71270000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 376.78250000, 43.35770000, 4.11130000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 432.88990000, 148.55520000, 7.70640000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 376.07240000, 198.49140000, 7.86880000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 455.20870000, 221.32960000, 7.70100000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 445.80360000, 99.30360000, 7.72650000 );
        break;
        case 10:
        sub_128731( sub_127200( iParam0, 2 ), 23, 0, 568.79020000, 786.22060000, 2.00000000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 0, 504.12220000, 691.04800000, 1.84050000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 0, 535.28340000, 852.84720000, 20.78500000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 0, 657.89820000, 700.62180000, 14.08770000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 0, 607.02870000, 879.24570000, 14.08760000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 0, 658.13440000, 879.37540000, 14.08750000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 0, 655.82540000, 1099.45200000, 0.50160000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 0, 433.36610000, 1064.61300000, 0.66200000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 0, 550.55820000, 898.25230000, 19.91800000 );
        sub_128731( sub_127200( iParam0, 2 ), 23, 0, 549.75850000, 721.80110000, 19.91820000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 0, 592.57450000, 1102.85800000, 1.81450000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 0, 464.57800000, 832.63300000, 1.64100000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 0, 615.58470000, 701.10530000, 8.86380000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 0, 543.24050000, 991.34010000, 3.64490000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 658.35990000, 735.46000000, 14.08760000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 625.95030000, 777.01490000, 14.08760000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 437.16310000, 919.35180000, 0.17810000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 556.17970000, 654.81580000, 19.76400000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 641.82240000, 835.48650000, 1.73330000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 684.25400000, 769.81860000, 1.78490000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 641.03790000, 911.81850000, 1.73080000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 476.83070000, 1087.36900000, 1.71370000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 609.53870000, 653.59840000, 2.32140000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 677.09640000, 698.25200000, 1.95400000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 628.76010000, 1020.96600000, 1.82520000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 570.15930000, 1058.61700000, 1.86450000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 491.34680000, 1064.61100000, 2.06010000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 576.71840000, 925.46780000, 1.73610000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 549.55200000, 802.08620000, 1.77480000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 504.04680000, 796.21140000, 4.13550000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 559.04920000, 589.71170000, 2.51860000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 548.33440000, 617.91640000, 1.85560000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 570.01580000, 714.47930000, 1.79620000 );
        break;
        case 11:
        switch (iParam0->_fU64)
        {
            case 1:
            sub_128731( sub_146048( iParam0, 12 ), 23, 0, 2496.14100000, 262.97270000, 19.17490000 );
            sub_128731( sub_146048( iParam0, 5 ), 23, 0, 2495.05400000, 524.63290000, 19.17500000 );
            sub_128731( sub_146048( iParam0, 12 ), 23, 0, 2475.86200000, 301.28410000, 18.84560000 );
            sub_128731( sub_146048( iParam0, 5 ), 23, 0, 2400.56500000, 497.48360000, 11.76310000 );
            sub_128731( sub_146048( iParam0, 5 ), 23, 0, 2226.60800000, 670.32020000, 17.56400000 );
            sub_128731( sub_146048( iParam0, 12 ), 23, 0, 2271.92100000, 367.94520000, 11.30240000 );
            sub_128731( sub_146048( iParam0, 12 ), 23, 0, 2144.44900000, -24.75960000, 4.78480000 );
            sub_128731( sub_146048( iParam0, 7 ), 23, 0, 2081.51700000, 299.51680000, 18.72830000 );
            sub_128731( sub_146048( iParam0, 5 ), 23, 0, 2162.52500000, -144.77160000, 0.81190000 );
            sub_128731( sub_146048( iParam0, 12 ), 23, 0, 2300.15400000, 457.03760000, 20.82560000 );
            sub_128731( sub_146048( iParam0, 12 ), 23, 0, 2255.44700000, 641.09600000, 28.03690000 );
            sub_128731( sub_146048( iParam0, 12 ), 23, 0, 2221.10000000, 336.34000000, 16.20610000 );
            break;
            case 2:
            sub_128731( sub_146048( iParam0, 17 ), 23, 0, 2496.14100000, 262.97270000, 19.17490000 );
            sub_128731( sub_146048( iParam0, 4 ), 23, 0, 2495.05400000, 524.63290000, 19.17500000 );
            sub_128731( sub_146048( iParam0, 14 ), 23, 0, 2475.86200000, 301.28410000, 18.84560000 );
            sub_128731( sub_146048( iParam0, 14 ), 23, 0, 2400.56500000, 497.48360000, 11.76310000 );
            sub_128731( sub_146048( iParam0, 4 ), 23, 0, 2226.60800000, 670.32020000, 17.56400000 );
            sub_128731( sub_146048( iParam0, 17 ), 23, 0, 2271.92100000, 367.94520000, 11.30240000 );
            sub_128731( sub_146048( iParam0, 14 ), 23, 0, 2144.44900000, -24.75960000, 4.78480000 );
            sub_128731( sub_146048( iParam0, 14 ), 23, 0, 2081.51700000, 299.51680000, 18.72830000 );
            sub_128731( sub_146048( iParam0, 4 ), 23, 0, 2162.52500000, -144.77160000, 0.81190000 );
            sub_128731( sub_146048( iParam0, 14 ), 23, 0, 2300.15400000, 457.03760000, 20.82560000 );
            sub_128731( sub_146048( iParam0, 17 ), 23, 0, 2255.44700000, 641.09600000, 28.03690000 );
            sub_128731( sub_146048( iParam0, 13 ), 23, 0, 2221.10000000, 336.34000000, 16.20610000 );
            break;
            case 3:
            sub_128731( sub_146048( iParam0, 16 ), 23, 0, 2496.14100000, 262.97270000, 19.17490000 );
            sub_128731( sub_146048( iParam0, 18 ), 23, 0, 2495.05400000, 524.63290000, 19.17500000 );
            sub_128731( sub_146048( iParam0, 15 ), 23, 0, 2475.86200000, 301.28410000, 18.84560000 );
            sub_128731( sub_146048( iParam0, 18 ), 23, 0, 2400.56500000, 497.48360000, 11.76310000 );
            sub_128731( sub_146048( iParam0, 4 ), 23, 0, 2226.60800000, 670.32020000, 17.56400000 );
            sub_128731( sub_146048( iParam0, 17 ), 23, 0, 2271.92100000, 367.94520000, 11.30240000 );
            sub_128731( sub_146048( iParam0, 18 ), 23, 0, 2144.44900000, -24.75960000, 4.78480000 );
            sub_128731( sub_146048( iParam0, 14 ), 23, 0, 2081.51700000, 299.51680000, 18.72830000 );
            sub_128731( sub_146048( iParam0, 4 ), 23, 0, 2162.52500000, -144.77160000, 0.81190000 );
            sub_128731( sub_146048( iParam0, 18 ), 23, 0, 2300.15400000, 457.03760000, 20.82560000 );
            sub_128731( sub_146048( iParam0, 16 ), 23, 0, 2255.44700000, 641.09600000, 28.03690000 );
            sub_128731( sub_146048( iParam0, 13 ), 23, 0, 2221.10000000, 336.34000000, 16.20610000 );
            break;
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            sub_128731( sub_127200( iParam0, 2 ), 23, 0, 2496.14100000, 262.97270000, 19.17490000 );
            sub_128731( sub_127200( iParam0, 2 ), 23, 0, 2495.05400000, 524.63290000, 19.17500000 );
            sub_128731( sub_127200( iParam0, 2 ), 23, 0, 2475.86200000, 301.28410000, 18.84560000 );
            sub_128731( sub_127200( iParam0, 2 ), 23, 0, 2300.15400000, 457.03760000, 20.82560000 );
            sub_128731( sub_127200( iParam0, 2 ), 23, 0, 2255.44700000, 641.09600000, 28.03690000 );
            sub_128731( sub_127200( iParam0, 2 ), 23, 0, 2221.10000000, 336.34000000, 16.20610000 );
            sub_128731( sub_127200( iParam0, 2 ), 23, 0, 2144.44900000, -24.75960000, 4.78480000 );
            sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2400.56500000, 497.48360000, 11.76310000 );
            sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2226.60800000, 670.32020000, 17.56400000 );
            sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2271.92100000, 367.94520000, 11.30240000 );
            sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2081.51700000, 299.51680000, 18.72830000 );
            sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2162.52500000, -144.77160000, 0.81190000 );
            break;
            case 0:
            sub_128731( sub_146048( iParam0, 16 ), 23, 0, 2496.14100000, 262.97270000, 19.17490000 );
            sub_128731( sub_146048( iParam0, 18 ), 23, 0, 2495.05400000, 524.63290000, 19.17500000 );
            sub_128731( sub_146048( iParam0, 15 ), 23, 0, 2475.86200000, 301.28410000, 18.84560000 );
            sub_128731( sub_146048( iParam0, 14 ), 23, 0, 2400.56500000, 497.48360000, 11.76310000 );
            sub_128731( sub_146048( iParam0, 4 ), 23, 0, 2226.60800000, 670.32020000, 17.56400000 );
            sub_128731( sub_146048( iParam0, 17 ), 23, 0, 2271.92100000, 367.94520000, 11.30240000 );
            sub_128731( sub_146048( iParam0, 18 ), 23, 0, 2144.44900000, -24.75960000, 4.78480000 );
            sub_128731( sub_146048( iParam0, 14 ), 23, 0, 2081.51700000, 299.51680000, 18.72830000 );
            sub_128731( sub_146048( iParam0, 4 ), 23, 0, 2162.52500000, -144.77160000, 0.81190000 );
            sub_128731( sub_146048( iParam0, 18 ), 23, 0, 2300.15400000, 457.03760000, 20.82560000 );
            sub_128731( sub_146048( iParam0, 16 ), 23, 0, 2255.44700000, 641.09600000, 28.03690000 );
            sub_128731( sub_146048( iParam0, 13 ), 23, 0, 2221.10000000, 336.34000000, 16.20610000 );
            break;
        }
        sub_128731( sub_127200( iParam0, 2 ), 23, 0, 2317.90500000, 329.69690000, 5.06600000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 0, 2866.54300000, 508.55150000, 1.65040000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 0, 2072.46800000, 214.56050000, 4.13590000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 0, 2109.73600000, 489.69760000, 5.06970000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 0, 2306.59700000, -132.14930000, 4.64290000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 0, 2502.10200000, 773.94060000, 5.85290000 );
        sub_128731( sub_127200( iParam0, 1 ), 23, 0, 2224.67300000, 367.84590000, 6.48730000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2671.00600000, 413.67400000, 4.80730000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2461.13200000, 536.93120000, 4.80800000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2650.94000000, 418.67970000, 4.81010000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2686.67500000, 417.35640000, 4.81010000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2383.91500000, 818.95320000, 4.69180000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2105.38400000, 758.34510000, 5.18750000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2114.72600000, 621.97900000, 13.26840000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2129.51800000, 853.62900000, 4.79520000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2165.49500000, 108.62400000, 6.04650000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2528.82800000, -25.02580000, 1.29660000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2587.07200000, 633.25320000, 4.94170000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2198.40700000, 767.72470000, 4.80780000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2203.98000000, 641.39890000, 4.80770000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2353.54800000, 476.59460000, 5.07980000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2368.21600000, 388.24700000, 5.08010000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2319.91000000, 197.22250000, 4.80770000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2333.73500000, 148.69650000, 4.80790000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2557.88800000, 239.62330000, 4.80800000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2710.08600000, 314.00470000, 4.80770000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2228.30800000, 176.13570000, 5.19870000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2245.69600000, 500.61720000, 5.05280000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2259.13700000, 104.54260000, 4.80840000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2285.27800000, -55.55380000, 4.67750000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2305.14600000, 56.55230000, 4.97910000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2321.58600000, 557.50310000, 4.80860000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2334.85200000, 767.19410000, 5.24410000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2391.13000000, 10.69820000, 5.42070000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2433.09900000, 597.82450000, 4.80820000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2476.77500000, 131.73940000, 5.42150000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2544.68500000, 452.00130000, 4.80790000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2564.21000000, 341.32000000, 4.80810000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2666.22600000, 227.90200000, 4.43690000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2713.83100000, 548.19950000, 2.69650000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2787.18100000, 322.15160000, 1.65070000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 0, 2168.95200000, 448.73480000, 5.08070000 );
        break;
        case 12:
        sub_128731( sub_127200( iParam0, 0 ), 23, 4, 543.19990000, 1463.87700000, 9.40950000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 4, 451.35610000, 1568.25100000, 14.63540000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 482.39520000, 1621.94800000, 19.15470000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 18, 489.23400000, 1706.20300000, 31.47090000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 200, 382.52510000, 1763.86900000, 19.32180000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 90, 475.82240000, 1887.74300000, 23.83430000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 1, 710.07570000, 1920.23900000, 26.32070000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 60, 737.77040000, 1796.69200000, 38.42670000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 703.30250000, 1707.06200000, 35.42970000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 90, 877.66640000, 1594.83200000, 15.93270000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 18, 938.83550000, 1647.00600000, 36.20010000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 120, 1028.85700000, 1662.25600000, 15.19240000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 120, 1141.42700000, 1672.18500000, 16.12200000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 120, 1134.34400000, 1812.80000000, 9.31490000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 3, 1060.42200000, 1902.93300000, 13.20990000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 120, 1228.91500000, 1939.79000000, 11.30560000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 24, 1337.30400000, 1737.75800000, 14.25920000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 1, 1212.84100000, 1655.74700000, 15.66540000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 3, 1185.19300000, 1471.14700000, 15.68200000 );
        sub_128731( sub_127200( iParam0, 0 ), 23, 18, 1216.53900000, 1396.60700000, 33.50070000 );
        break;
    }
    return;
}

void sub_127200(int iParam0, int iParam1)
{
    int iVar4;

    if (iParam1 == 2)
    {
        iVar4 = sub_22648( iParam0->_fU60 / 2, iParam0->_fU60 );
    }
    else if (iParam1 == 1)
    {
        iVar4 = sub_22648( iParam0->_fU60 / 3, iParam0->_fU60 );
    }
    else
    {
        iVar4 = sub_22648( 0, iParam0->_fU60 );
    }
    iParam0->_fU60--;
    if ((iVar4 < iParam0->_fU0) AND (iParam0->_fU0 > 0))
    {
        iParam0->_fU0--;
        return 3;
    }
    else
    {
        iVar4 -= iParam0->_fU0;
    }
    if ((iVar4 < iParam0->_fU4) AND (iParam0->_fU4 > 0))
    {
        iParam0->_fU4--;
        return 1;
    }
    else
    {
        iVar4 -= iParam0->_fU4;
    }
    if ((iVar4 < iParam0->_fU8) AND (iParam0->_fU8 > 0))
    {
        iParam0->_fU8--;
        return 7;
    }
    else
    {
        iVar4 -= iParam0->_fU8;
    }
    if ((iVar4 < iParam0->_fU12) AND (iParam0->_fU12 > 0))
    {
        iParam0->_fU12--;
        return 9;
    }
    else
    {
        iVar4 -= iParam0->_fU12;
    }
    if ((iVar4 < iParam0->_fU16) AND (iParam0->_fU16 > 0))
    {
        iParam0->_fU16--;
        return 10;
    }
    else
    {
        iVar4 -= iParam0->_fU16;
    }
    if ((iVar4 < iParam0->_fU20) AND (iParam0->_fU20 > 0))
    {
        iParam0->_fU20--;
        return 11;
    }
    else
    {
        iVar4 -= iParam0->_fU20;
    }
    if ((iVar4 < iParam0->_fU24) AND (iParam0->_fU24 > 0))
    {
        iParam0->_fU24--;
        return 12;
    }
    else
    {
        iVar4 -= iParam0->_fU24;
    }
    if ((iVar4 < iParam0->_fU28) AND (iParam0->_fU28 > 0))
    {
        iParam0->_fU28--;
        return 13;
    }
    else
    {
        iVar4 -= iParam0->_fU28;
    }
    if ((iVar4 < iParam0->_fU32) AND (iParam0->_fU32 > 0))
    {
        iParam0->_fU32--;
        return 14;
    }
    else
    {
        iVar4 -= iParam0->_fU32;
    }
    if ((iVar4 < iParam0->_fU36) AND (iParam0->_fU36 > 0))
    {
        iParam0->_fU36--;
        return 15;
    }
    else
    {
        iVar4 -= iParam0->_fU36;
    }
    if ((iVar4 < iParam0->_fU40) AND (iParam0->_fU40 > 0))
    {
        iParam0->_fU40--;
        return 16;
    }
    else
    {
        iVar4 -= iParam0->_fU40;
    }
    if ((iVar4 < iParam0->_fU44) AND (iParam0->_fU44 > 0))
    {
        iParam0->_fU44--;
        return 17;
    }
    else
    {
        iVar4 -= iParam0->_fU44;
    }
    if ((iVar4 < iParam0->_fU48) AND (iParam0->_fU48 > 0))
    {
        iParam0->_fU48--;
        return 5;
    }
    else
    {
        iVar4 -= iParam0->_fU48;
    }
    if ((iVar4 < iParam0->_fU52) AND (iParam0->_fU52 > 0))
    {
        iParam0->_fU52--;
        return 4;
    }
    else
    {
        iVar4 -= iParam0->_fU52;
    }
    if ((iVar4 < iParam0->_fU56) AND (iParam0->_fU56 > 0))
    {
        iParam0->_fU56--;
        return 18;
    }
    else
    {
        iVar4 -= iParam0->_fU56;
    }
    PRINTSTRING( "SCRIPT creating default pickup\n" );
    return sub_128211( l_U1381, ref iVar4 );
}

void sub_128211(unknown uParam0, unknown uParam1)
{
    int Result;

    switch (uParam0)
    {
        case 1:
        Result = 7;
        break;
        case 2:
        Result = 9;
        break;
        case 3:
        Result = 13;
        break;
        case 4:
        Result = 7;
        break;
        case 5:
        Result = 10;
        break;
        case 6:
        Result = 5;
        break;
        case 7:
        Result = 1;
        break;
        case 8:
        Result = 12;
        break;
        case 9:
        Result = 14;
        break;
        case 10:
        Result = 18;
        break;
        case 11:
        Result = 17;
        break;
        case 0:
        Result = 7;
        break;
    }
    (uParam1^) = sub_128423( Result );
    return Result;
}

int sub_128423(unknown uParam0)
{
    switch (uParam0)
    {
        case 7: return 30 * l_U1380;
        case 9: return 30 * l_U1380;
        case 10: return 16 * l_U1380;
        case 11: return 16 * l_U1380;
        case 12: return 60 * l_U1380;
        case 13: return 60 * l_U1380;
        case 14: return 80 * l_U1380;
        case 15: return 80 * l_U1380;
        case 16: return 12 * l_U1380;
        case 17: return 12 * l_U1380;
        case 5: return 3 * l_U1380;
        case 4: return 3 * l_U1380;
        case 18: return 2 * l_U1380;
    }
    return 0;
}

void sub_128731(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;

    uVar8 = sub_128423( uParam0 );
    CREATE_PICKUP_WITH_AMMO( sub_128752( uParam0 ), uParam1, uVar8, uParam3, uParam4, uParam5, ref uVar9 );
    return;
}

void sub_128752(unknown uParam0)
{
    unknown Result;

    GET_WEAPONTYPE_MODEL( uParam0, ref Result );
    return Result;
}

int sub_146048(int iParam0, unknown uParam1)
{
    iParam0->_fU60--;
    switch (uParam1)
    {
        case 3:
        iParam0->_fU0--;
        return 3;
        case 1:
        iParam0->_fU4--;
        return 1;
        case 7:
        iParam0->_fU8--;
        return 7;
        case 9:
        iParam0->_fU12--;
        return 9;
        case 10:
        iParam0->_fU16--;
        return 10;
        case 11:
        iParam0->_fU20--;
        return 11;
        case 12:
        iParam0->_fU24--;
        return 12;
        case 13:
        iParam0->_fU28--;
        return 13;
        case 14:
        iParam0->_fU32--;
        return 14;
        case 15:
        iParam0->_fU36--;
        return 15;
        case 16:
        iParam0->_fU40--;
        return 16;
        case 17:
        iParam0->_fU44--;
        return 17;
        case 5:
        iParam0->_fU48--;
        return 5;
        case 4:
        iParam0->_fU52--;
        return 4;
        case 18:
        iParam0->_fU56--;
        return 18;
    }
    PRINTSTRING( "SCRIPT creating default pickup\n" );
    return 18;
}

void sub_158428(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_158428( 3 );
        sub_158428( 4 );
        sub_158428( 2 );
        sub_158428( 1 );
        sub_158428( 8 );
        sub_158428( 10 );
        sub_158428( 9 );
        break;
        case 1:
        sub_158615( -1082.58000000, -589.92300000, 2.87730000, 0 );
        sub_158615( -1079.22000000, 691.90000000, 7.50090000, 0 );
        sub_158615( -920.39610000, 938.02750000, 12.76070000, 0 );
        sub_158615( -1567.27000000, 941.01030000, 25.68270000, 0 );
        sub_158615( 64043, 701.22000000, 22.42860000, 0 );
        sub_158615( -1323.60000000, 1278.36900000, 22.37020000, 0 );
        sub_158615( -1193.08000000, 13.87000000, 3.14000000, 0 );
        sub_158615( -1255.63600000, 55.82830000, 1.26420000, 0 );
        sub_158615( -2071.77000000, -80.08610000, 5.61450000, 0 );
        sub_158615( -1465.90000000, 110.18730000, 6.24540000, 0 );
        sub_158615( -1559.25800000, 127.01540000, 7.63100000, 0 );
        sub_158615( -951.51540000, 1405.20800000, 24.68460000, 0 );
        sub_158615( -1164.97000000, 1835.70900000, 3.04650000, 0 );
        sub_158615( -1196.93000000, 1672.78800000, 33.55620000, 0 );
        sub_158615( -970.63300000, 1524.85900000, 24.56880000, 0 );
        sub_158615( -724.28700000, 1471.32700000, 0.50690000, 0 );
        sub_158615( -1095.44000000, 1258.74800000, 23.82480000, 0 );
        sub_158615( -808.51310000, 1205.92700000, 17.23890000, 0 );
        sub_158615( -1016.98000000, 1024.75100000, 12.58410000, 0 );
        sub_158615( -1476.12000000, 1047.32500000, 22.03400000, 0 );
        sub_158615( -1349.40600000, 890.07560000, 18.68600000, 0 );
        sub_158615( -891.21000000, 834.67030000, 10.81970000, 0 );
        sub_158615( -1276.65000000, 742.18080000, 18.50840000, 0 );
        sub_158615( -1093.82300000, 636.50060000, 7.50040000, 0 );
        sub_158615( -952.21400000, 453.59930000, 3.37230000, 0 );
        sub_158615( -1614.88000000, 692.08700000, 25.37530000, 0 );
        sub_158615( -1364.45300000, 529.74320000, 11.47960000, 0 );
        sub_158615( -1831.84000000, 353.82380000, 24.44420000, 0 );
        sub_158615( -1555.78000000, 244.76660000, 11.68150000, 0 );
        sub_158615( -1481.94000000, -52.40670000, 6.57460000, 0 );
        sub_158615( -1642.17700000, 411.90560000, 24.44660000, 0 );
        sub_158615( -1753.70000000, 133.09870000, 10.18720000, 0 );
        sub_158615( -2083.07000000, 44.87500000, 6.09800000, 0 );
        sub_158615( -1914.51000000, -459.40200000, 2.20900000, 0 );
        sub_158615( -1302.27000000, -293.68600000, 2.86500000, 0 );
        sub_158615( -2125.72000000, -334.55900000, 1.89970000, 0 );
        sub_158615( -1772.58700000, -493.29320000, 2.04540000, 0 );
        sub_158615( -1339.11000000, -460.88800000, 1.89670000, 0 );
        sub_158615( -1353.65000000, -652.83300000, 2.00130000, 0 );
        sub_158615( -1054.87000000, -220.68300000, 1.91890000, 0 );
        sub_158615( -1893.78400000, -689.18750000, 1.83760000, 0 );
        sub_158615( -1688.54000000, -284.52100000, 1.75160000, 0 );
        sub_158615( -1899.95500000, 186.60480000, 11.17900000, 0 );
        sub_158615( -1402.59400000, 318.49800000, 12.44940000, 0 );
        sub_158615( -1649.63000000, -109.38000000, 4.97830000, 0 );
        sub_158615( 64271, -119.28200000, 3.21980000, 0 );
        sub_158615( -950.78700000, 189.35060000, 3.38630000, 0 );
        sub_158615( -1103.30000000, 364.79940000, 3.93280000, 0 );
        sub_158615( -1260.66000000, 1262.14700000, 20.78200000, 0 );
        sub_158615( -1299.73000000, 1563.46800000, 24.92780000, 0 );
        sub_158615( -992.55200000, 1736.74700000, 19.51390000, 0 );
        sub_158615( -843.71400000, 1378.74200000, 22.17000000, 0 );
        sub_158615( -1469.02000000, 1166.59000000, 22.01500000, 0 );
        sub_158615( -865.23000000, 1632.13000000, 21.35100000, 0 );
        sub_158615( -1326.88000000, 1436.46600000, 19.48630000, 0 );
        sub_158615( -1727.85200000, 601.47620000, 26.72240000, 0 );
        sub_158615( -1539.30300000, 581.51720000, 22.71660000, 0 );
        sub_158615( -993.90200000, 878.20890000, 21.98560000, 0 );
        sub_158615( -987.99100000, 608.15440000, 3.07890000, 0 );
        sub_158615( -836.38240000, 1071.52500000, 12.89240000, 0 );
        sub_158615( -1107.43200000, 1081.79400000, 12.65270000, 0 );
        sub_158615( -1422.44200000, 883.12570000, 18.63140000, 0 );
        sub_158615( -1174.19000000, 825.98350000, 18.55790000, 0 );
        sub_158615( -1370.73000000, 765.73500000, 18.54570000, 0 );
        break;
        case 2:
        sub_158615( -10.97350000, -377.20400000, 11.08810000, 0 );
        sub_158615( -9.61210000, 1308.05700000, 19.36520000, 0 );
        sub_158615( -115.34640000, 1328.85600000, 19.42410000, 0 );
        sub_158615( 368.47270000, -506.45180000, 4.81800000, 0 );
        sub_158615( 59.36250000, 193.13060000, 13.75680000, 0 );
        sub_158615( -425.69900000, 1301.45000000, 16.42360000, 0 );
        sub_158615( -332.18480000, 1643.76200000, 19.32420000, 0 );
        sub_158615( -116.04090000, 472.16360000, 8.55910000, 0 );
        sub_158615( -182.25800000, -602.07800000, 4.62510000, 0 );
        sub_158615( -422.21900000, 975.72740000, 8.96360000, 0 );
        sub_158615( -169.52000000, 1619.20900000, 19.31360000, 0 );
        sub_158615( -337.38000000, 1431.45300000, 11.33620000, 0 );
        sub_158615( 38.98980000, 1476.07500000, 2.24340000, 0 );
        sub_158615( -583.78600000, 1318.30600000, 4.94080000, 0 );
        sub_158615( -522.12800000, 968.89150000, 7.55940000, 0 );
        sub_158615( -176.50500000, 1077.67300000, 5.62530000, 0 );
        sub_158615( -237.93970000, 795.71930000, 5.16030000, 0 );
        sub_158615( -291.31900000, 578.53360000, 13.81190000, 0 );
        sub_158615( -533.30600000, 720.84310000, 8.96150000, 0 );
        sub_158615( -3.24710000, 501.39350000, 14.76200000, 0 );
        sub_158615( 212.50730000, 485.59830000, 14.18730000, 0 );
        sub_158615( -461.07800000, 497.06880000, 8.85170000, 0 );
        sub_158615( 280.63320000, -16.08720000, 8.91760000, 0 );
        sub_158615( -220.32500000, 61.39090000, 13.73580000, 0 );
        sub_158615( 210.88160000, -409.88850000, 4.08210000, 0 );
        sub_158615( 336.21990000, -711.23500000, 3.69170000, 0 );
        sub_158615( 1.10720000, -659.54400000, 13.75730000, 0 );
        sub_158615( 33.32420000, -937.15120000, 3.73070000, 0 );
        sub_158615( -788.95600000, 65.67300000, 3.81230000, 0 );
        sub_158615( -172.94300000, 276.67700000, 13.81300000, 0 );
        sub_158615( -414.08900000, -12.61080000, 8.89340000, 0 );
        sub_158615( -120.07200000, 11.81670000, 13.78350000, 0 );
        sub_158615( -224.77030000, -776.26140000, 5.19630000, 0 );
        sub_158615( -15.78000000, -529.51000000, 13.75940000, 0 );
        sub_158615( 234.57330000, -817.85860000, 3.71030000, 0 );
        sub_158615( -403.72000000, -447.38000000, 3.90720000, 0 );
        sub_158615( 191.30000000, 1140.61000000, 12.25340000, 0 );
        sub_158615( -205.12000000, 655.88000000, 11.40410000, 0 );
        sub_158615( -70.67000000, 946.33000000, 13.71270000, 0 );
        sub_158615( 26.61870000, 850.50510000, 13.37200000, 0 );
        sub_158615( -503.30000000, 1438.90000000, 16.15650000, 0 );
        sub_158615( -159.18130000, 1749.72900000, 7.44090000, 0 );
        sub_158615( -542.30000000, 1655.60000000, 7.67680000, 0 );
        sub_158615( -22.57230000, 1484.23300000, 17.42510000, 0 );
        sub_158615( 77.60000000, 321.40000000, 13.75380000, 0 );
        sub_158615( -445.40000000, 277.50000000, 8.95640000, 0 );
        sub_158615( -566.39040000, 390.84450000, 5.66890000, 0 );
        sub_158615( 107.58140000, 511.61350000, 12.30150000, 0 );
        sub_158615( -279.59900000, 445.29140000, 13.80670000, 0 );
        sub_158615( -417.04700000, -192.86500000, 9.53930000, 0 );
        sub_158615( -62.12140000, -289.14320000, 13.67290000, 0 );
        sub_158615( 169.77020000, -210.08000000, 13.82100000, 0 );
        sub_158615( -139.74400000, 81.76500000, 13.76910000, 0 );
        break;
        case 3:
        sub_158615( 985.20790000, 1827.30400000, 19.11830000, 0 );
        sub_158615( 1376.28500000, 1702.27400000, 15.88180000, 0 );
        sub_158615( 431.74100000, 1837.92700000, 21.20530000, 0 );
        sub_158615( 473.20250000, 1738.35900000, 14.80350000, 0 );
        sub_158615( 575.78850000, 1394.91800000, 9.96000000, 0 );
        sub_158615( 735.74320000, 1739.91900000, 35.60130000, 0 );
        sub_158615( 760.78820000, 1551.94800000, 20.35010000, 0 );
        sub_158615( 855.19800000, 1676.97900000, 16.05410000, 0 );
        sub_158615( 1098.36200000, 1596.66300000, 15.71600000, 0 );
        sub_158615( 1121.77600000, 1941.30500000, 12.71010000, 0 );
        sub_158615( 1290.00000000, 1435.00000000, 15.77600000, 0 );
        sub_158615( 426.39460000, 1590.38900000, 15.41430000, 0 );
        sub_158615( 557.55070000, 1635.64200000, 28.19540000, 0 );
        sub_158615( 597.58230000, 1958.46700000, 24.62740000, 0 );
        sub_158615( 626.76930000, 1828.41200000, 32.17850000, 0 );
        sub_158615( 1211.36500000, 1783.27100000, 9.09560000, 0 );
        break;
        case 4:
        sub_158615( 849.04920000, 392.57780000, 5.25980000, 0 );
        sub_158615( 897.30000000, -134.00100000, 4.91160000, 0 );
        sub_158615( 1843.24500000, 478.55510000, 27.09130000, 0 );
        sub_158615( 1427.79200000, 750.85690000, 27.62330000, 0 );
        sub_158615( 1845.72700000, 691.03880000, 25.76730000, 0 );
        sub_158615( 2320.44800000, 639.43910000, 4.80790000, 0 );
        sub_158615( 1124.33600000, 638.38240000, 37.85270000, 0 );
        sub_158615( 1647.82000000, 413.06230000, 30.21460000, 0 );
        sub_158615( 2273.61400000, 300.40370000, 5.06670000, 0 );
        sub_158615( 1431.79400000, 120.04750000, 24.88300000, 0 );
        sub_158615( 1314.51800000, 378.05340000, 21.45560000, 0 );
        sub_158615( 2285.27900000, 82.34910000, 4.80670000, 0 );
        sub_158615( 822.00570000, 199.24160000, 5.03550000, 0 );
        sub_158615( 1114.99400000, 44.93610000, 33.00890000, 0 );
        sub_158615( 1350.45800000, -255.86600000, 22.22680000, 0 );
        sub_158615( 753.85080000, -126.41500000, 4.81920000, 0 );
        sub_158615( 1284.27200000, -530.17200000, 13.39630000, 0 );
        sub_158615( 897.30980000, -509.68100000, 13.97050000, 0 );
        sub_158615( 2007.46300000, 620.96670000, 17.05250000, 0 );
        sub_158615( 2816.66200000, 425.61220000, 4.66280000, 0 );
        sub_158615( 2423.13700000, 454.06130000, 5.08040000, 0 );
        sub_158615( 2558.74900000, 81.81350000, 2.25080000, 0 );
        sub_158615( 1178.18000000, 194.08300000, 31.44340000, 0 );
        sub_158615( 2164.44400000, 368.42870000, 5.22480000, 0 );
        sub_158615( 962.23500000, 7.45580000, 23.57960000, 0 );
        sub_158615( 1359.50400000, -766.54400000, 7.45460000, 0 );
        sub_158615( 1167.83600000, -206.77400000, 22.60170000, 0 );
        sub_158615( 953.22130000, -320.52070000, 18.35930000, 0 );
        sub_158615( 1292.54900000, 144.22570000, 30.95520000, 0 );
        sub_158615( 955.96320000, -698.10500000, 14.21530000, 0 );
        sub_158615( 1858.97600000, 155.32600000, 12.27220000, 0 );
        sub_158615( 1111.20400000, -445.82780000, 12.45870000, 0 );
        sub_158615( 862.01680000, 940.66060000, 5.55700000, 0 );
        sub_158615( 1224.95300000, 1020.87200000, 12.63250000, 0 );
        sub_158615( 1577.94500000, 917.15250000, 15.06920000, 0 );
        sub_158615( 1670.41200000, 587.83220000, 29.23680000, 0 );
        sub_158615( 971.84260000, 624.12060000, 25.02010000, 0 );
        sub_158615( 1428.84200000, 563.46970000, 28.29920000, 0 );
        sub_158615( 1805.79700000, 813.58000000, 15.60590000, 0 );
        sub_158615( 1155.96400000, 306.88730000, 28.83000000, 0 );
        sub_158615( 1232.60800000, 524.12710000, 29.82790000, 0 );
        sub_158615( 2164.51500000, 583.68770000, 7.91790000, 0 );
        sub_158615( 1938.77700000, 1013.43000000, 4.99250000, 0 );
        sub_158615( 2650.71700000, 436.45850000, 4.80730000, 0 );
        break;
        case 5:
        sub_158615( -1914.50800000, -459.40190000, 2.20900000, 0 );
        sub_158615( -1548.81300000, -379.02390000, 1.88280000, 0 );
        sub_158615( -1688.54300000, -284.52080000, 1.75160000, 0 );
        sub_158615( -1777.87900000, -488.62450000, 2.04560000, 0 );
        sub_158615( -1982.68200000, -669.87910000, -1.86090000, 0 );
        sub_158615( -1798.12800000, -265.92090000, 1.71460000, 0 );
        sub_158615( -1700.79700000, -646.17020000, 3.01050000, 0 );
        sub_158615( -1968.54500000, -157.59920000, 1.92120000, 0 );
        sub_158615( -1528.95300000, -203.94390000, 6.73590000, 0 );
        sub_158615( -2066.17100000, -491.69040000, 6.17790000, 0 );
        break;
        case 6:
        sub_158615( -1049.63700000, -408.73490000, 2.30340000, 0 );
        sub_158615( -1110.67500000, -376.49920000, 2.17920000, 0 );
        sub_158615( -1124.23100000, -493.61110000, 2.17880000, 0 );
        sub_158615( -1026.58300000, -337.07500000, 2.22100000, 0 );
        sub_158615( -988.55210000, -435.07680000, 2.18010000, 0 );
        break;
        case 7:
        sub_158615( -1097.62500000, 693.99500000, 7.50040000, 0 );
        sub_158615( -1193.08000000, 13.87000000, 3.14000000, 0 );
        sub_158615( -1261.21700000, 56.19870000, 1.26420000, 0 );
        sub_158615( -1094.18600000, 636.52230000, 7.50040000, 0 );
        sub_158615( -952.21400000, 453.59930000, 3.37230000, 0 );
        sub_158615( -1103.29800000, 364.79940000, 3.93280000, 0 );
        sub_158615( -1047.40800000, 496.42660000, 3.52310000, 0 );
        sub_158615( -915.68000000, 281.99980000, 3.37280000, 0 );
        sub_158615( -1139.59400000, 144.54840000, 3.23240000, 0 );
        sub_158615( -1237.53500000, 709.79410000, 15.03190000, 0 );
        break;
        case 8:
        sub_158615( -607.98380000, -784.81920000, 3.83910000, "GtaMloRoomstat" );
        sub_158615( -667.97770000, -861.82260000, 4.53750000, 0 );
        sub_158615( -530.56270000, -1068.54000000, 3.83770000, 0 );
        sub_158615( -551.27530000, -999.64890000, 4.50760000, 0 );
        sub_158615( -650.00980000, -927.17210000, 4.53750000, 0 );
        sub_158615( -571.05880000, -875.00630000, 4.53750000, 0 );
        break;
        case 9:
        sub_158615( 455.10250000, 289.51030000, 7.54850000, 0 );
        sub_158615( 497.60490000, 175.63860000, 7.60760000, 0 );
        sub_158615( 391.26350000, 159.72480000, 8.22000000, 0 );
        sub_158615( 458.29470000, 74.45450000, 7.75970000, 0 );
        sub_158615( 504.16430000, -38.34650000, 8.24790000, 0 );
        break;
        case 10:
        sub_158615( 630.54060000, 789.35520000, 1.75120000, 0 );
        sub_158615( 657.73490000, 627.96940000, 1.80270000, 0 );
        sub_158615( 589.79970000, 859.90220000, 1.72980000, 0 );
        sub_158615( 489.47380000, 775.80120000, 1.73470000, 0 );
        sub_158615( 463.83520000, 1001.07300000, 1.71820000, 0 );
        break;
        case 11:
        sub_158615( 2320.44800000, 639.43910000, 4.80790000, 0 );
        sub_158615( 2273.61400000, 300.40370000, 5.06670000, 0 );
        sub_158615( 2285.27900000, 82.34910000, 4.80670000, 0 );
        sub_158615( 2164.51500000, 583.68770000, 7.91790000, 0 );
        sub_158615( 2423.13700000, 454.06130000, 5.08040000, 0 );
        sub_158615( 2521.31400000, 282.07120000, 4.80810000, 0 );
        sub_158615( 2816.66200000, 425.61220000, 4.66280000, 0 );
        sub_158615( 2758.89000000, 243.54010000, 4.09000000, 0 );
        sub_158615( 2422.53800000, -55.49270000, 1.28210000, 0 );
        sub_158615( 2248.59500000, 365.22820000, 6.60060000, 0 );
        sub_158615( 2297.76700000, 479.05770000, 5.09200000, 0 );
        sub_158615( 2069.47800000, 876.38090000, 5.00420000, 0 );
        break;
        case 12: break;
    }
    return;
}

void sub_158615(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    CREATE_PICKUP( 1069950328, 23, uParam0, uParam1, uParam2, ref uVar6, 0 );
    if (NOT (IS_STRING_NULL( uParam3 )))
    {
        if (NOT (COMPARE_STRING( uParam3, "" )))
        {
            ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( uVar6, uParam3 );
        }
    }
    return;
}

void sub_163795(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_163795( 3 );
        sub_163795( 4 );
        sub_163795( 2 );
        sub_163795( 1 );
        sub_163795( 8 );
        sub_163795( 10 );
        sub_163795( 9 );
        break;
        case 1:
        sub_163980( -1718.95400000, 272.59700000, 21.06310000 );
        sub_163980( -1558.40700000, -347.78600000, 1.83750000 );
        sub_163980( -2032.20700000, -338.29010000, 3.40370000 );
        sub_163980( -1497.11800000, -277.73100000, 1.83720000 );
        sub_163980( -1890.49700000, -155.03050000, 1.62940000 );
        sub_163980( -968.86000000, 1895.05400000, 21.34030000 );
        sub_163980( -1426.40600000, 625.19100000, 18.56760000 );
        sub_163980( -1778.49400000, 575.95780000, 25.11940000 );
        sub_163980( -841.69900000, 1274.37700000, 19.07420000 );
        sub_163980( -1361.73600000, 1692.55300000, 26.82030000 );
        sub_163980( -1299.50400000, 944.35900000, 18.56750000 );
        sub_163980( -2048.42700000, 172.86300000, 11.03890000 );
        sub_163980( -906.84050000, 652.42870000, 3.07870000 );
        sub_163980( -1216.80800000, 520.21910000, 3.37300000 );
        sub_163980( -1137.69600000, 955.04820000, 18.54370000 );
        sub_163980( -1877.95700000, 39.63470000, 5.85340000 );
        sub_163980( -965.57110000, 1211.19600000, 23.50070000 );
        sub_163980( -1564.22100000, -657.89900000, 2.00330000 );
        sub_163980( -1279.09900000, 1141.62300000, 18.57790000 );
        sub_163980( -1145.68300000, 1414.96900000, 23.49580000 );
        sub_163980( -1314.08900000, 169.73720000, 4.48440000 );
        sub_163980( -2216.31900000, 17.23170000, 8.29650000 );
        sub_163980( -1428.38700000, 1536.52500000, 15.61980000 );
        sub_163980( -1145.53100000, -382.07540000, 2.00250000 );
        break;
        case 2:
        sub_163980( -29.20910000, -887.00800000, -0.45090000 );
        sub_163980( 75.40810000, 597.05240000, 13.71130000 );
        sub_163980( -669.07150000, 471.10110000, 4.08930000 );
        sub_163980( -333.98000000, 1.00280000, 13.75990000 );
        sub_163980( -107.44990000, 766.80530000, 14.34170000 );
        sub_163980( -695.45310000, 1080.60800000, 3.10370000 );
        sub_163980( -571.39000000, 1531.44100000, 9.00370000 );
        sub_163980( -786.58210000, 141.96640000, 4.02810000 );
        sub_163980( -577.03340000, -328.15240000, 5.25250000 );
        sub_163980( 195.12650000, -527.20640000, 8.06920000 );
        sub_163980( -17.15680000, 1637.60200000, 2.83590000 );
        sub_163980( 103.37410000, 985.66010000, 13.69870000 );
        sub_163980( -319.37050000, 322.75250000, 13.70020000 );
        sub_163980( -179.20000000, 1451.10000000, 17.44250000 );
        sub_163980( -201.20000000, 1195.80000000, 13.62270000 );
        sub_163980( 107.70000000, 1221.10000000, 14.64690000 );
        sub_163980( -97.06850000, -609.38450000, 13.75040000 );
        sub_163980( 101.10990000, 409.17060000, 13.68690000 );
        sub_163980( -278.16310000, -369.19700000, 7.67500000 );
        sub_163980( -305.64000000, 1040.30000000, 8.96630000 );
        sub_163980( -111.42050000, -200.32650000, 11.99290000 );
        sub_163980( 497.07030000, -504.54370000, 1.60350000 );
        sub_163980( 102.67930000, -607.23380000, 13.76920000 );
        sub_163980( 315.67560000, -324.14100000, 3.95050000 );
        sub_163980( -389.39000000, 837.89000000, 13.71340000 );
        sub_163980( -106.39930000, 203.62740000, 13.60360000 );
        sub_163980( -568.80000000, 607.20000000, 5.64580000 );
        sub_163980( -417.40330000, 1739.69600000, 8.25570000 );
        break;
        case 3:
        sub_163980( 796.30620000, 1334.91000000, 9.86140000 );
        sub_163980( 370.65720000, 1887.00100000, 16.77270000 );
        sub_163980( 697.33800000, 1680.40500000, 32.93620000 );
        sub_163980( 243.60000000, 1772.58000000, 2.80140000 );
        sub_163980( 312.37770000, 1470.59700000, 15.72370000 );
        sub_163980( 397.94990000, 2074.39100000, 5.69970000 );
        sub_163980( 927.07400000, 1487.15300000, 15.86160000 );
        sub_163980( 889.48640000, 1783.75300000, 16.08660000 );
        sub_163980( 1346.63400000, 1960.05400000, 3.98950000 );
        sub_163980( 1204.99800000, 1648.65000000, 15.65110000 );
        sub_163980( 810.81520000, 1924.86500000, 37.93350000 );
        sub_163980( 617.25540000, 1496.23200000, 14.61220000 );
        break;
        case 4:
        sub_163980( 1096.54700000, 434.62660000, 28.76790000 );
        sub_163980( 1345.71000000, -874.09570000, 7.33140000 );
        sub_163980( 1446.49700000, -280.27500000, 14.19040000 );
        sub_163980( 2232.70500000, 891.79740000, 4.52110000 );
        sub_163980( 863.99160000, 740.41190000, 6.89360000 );
        sub_163980( 960.07070000, -431.33360000, 14.74810000 );
        sub_163980( 1237.56000000, 374.40010000, 20.97390000 );
        sub_163980( 2072.80800000, 102.75570000, 11.02200000 );
        sub_163980( 1361.68500000, 1047.57500000, 2.85150000 );
        sub_163980( 1586.65500000, 769.30970000, 28.21990000 );
        sub_163980( 1947.36900000, 393.30340000, 17.58600000 );
        sub_163980( 1252.28100000, -44.77040000, 27.34600000 );
        sub_163980( 939.28130000, -944.10300000, 14.23400000 );
        sub_163980( 1985.70900000, 826.63180000, 8.39960000 );
        sub_163980( 1307.98300000, 688.87480000, 35.73690000 );
        sub_163980( 2259.19400000, 423.94070000, 4.90050000 );
        sub_163980( 1131.33700000, -656.75790000, 13.13440000 );
        sub_163980( 1238.09500000, -353.24500000, 20.54410000 );
        sub_163980( 1657.90500000, 230.22240000, 23.95760000 );
        sub_163980( 740.74340000, -346.01260000, 4.83660000 );
        sub_163980( 733.56430000, 39.98200000, 4.95960000 );
        sub_163980( 932.15970000, 331.24980000, 30.16300000 );
        sub_163980( 1120.70800000, 891.31850000, 30.66750000 );
        sub_163980( 2521.81800000, 283.11260000, 4.80830000 );
        sub_163980( 2248.01400000, -142.04390000, 3.50840000 );
        sub_163980( 2637.66500000, 661.69060000, 2.68950000 );
        break;
        case 5:
        sub_163980( -1523.98700000, -287.50570000, 1.83720000 );
        sub_163980( -2032.20700000, -338.29010000, 3.40370000 );
        sub_163980( -1872.50800000, -163.83990000, 1.62960000 );
        sub_163980( -1896.91900000, -685.48900000, 1.83760000 );
        sub_163980( -1564.22100000, -657.89900000, 2.00330000 );
        sub_163980( -2112.71200000, -345.95280000, 0.69400000 );
        sub_163980( -1919.93500000, -298.88310000, 1.62860000 );
        break;
        case 6:
        sub_163980( -1035.30200000, -442.65560000, 2.05650000 );
        sub_163980( -907.82110000, -397.02890000, 2.38210000 );
        sub_163980( -998.51530000, -371.81950000, 2.16980000 );
        sub_163980( -1137.87200000, -374.96680000, 2.19720000 );
        break;
        case 7:
        sub_163980( -1217.48000000, 520.46980000, 3.37300000 );
        sub_163980( -907.75400000, 653.17680000, 3.07870000 );
        sub_163980( -1242.38800000, 91.51820000, 1.95310000 );
        sub_163980( -987.99080000, 608.15440000, 3.07890000 );
        sub_163980( -1183.54400000, 638.71690000, 6.90310000 );
        sub_163980( -950.78660000, 189.35060000, 3.38630000 );
        sub_163980( -1006.53800000, 332.57090000, 3.50290000 );
        sub_163980( -1065.29000000, 37.07740000, 3.21560000 );
        break;
        case 8:
        sub_163980( -607.92130000, -700.26330000, 12.06720000 );
        sub_163980( -528.80470000, -856.73380000, 4.53700000 );
        sub_163980( -645.03030000, -662.14430000, 3.83730000 );
        sub_163980( -412.70370000, -953.45100000, 2.61640000 );
        break;
        case 9:
        sub_163980( 484.24000000, -72.80000000, 8.25100000 );
        sub_163980( 412.61980000, 360.87370000, 7.61400000 );
        sub_163980( 373.74930000, 282.45030000, 4.82410000 );
        sub_163980( 407.44830000, -14.76920000, 7.84100000 );
        sub_163980( 560.50710000, 306.40010000, 7.93160000 );
        sub_163980( 487.24870000, 260.93470000, 7.69720000 );
        break;
        case 10:
        sub_163980( 490.00890000, 861.95290000, 0.19100000 );
        sub_163980( 500.19900000, 1045.00200000, 1.71450000 );
        sub_163980( 608.98120000, 725.17330000, 1.78680000 );
        sub_163980( 678.13100000, 872.69980000, 1.97390000 );
        sub_163980( 669.12870000, 983.03940000, 1.71650000 );
        sub_163980( 555.09680000, 646.18850000, 2.55930000 );
        sub_163980( 624.75300000, 1077.76800000, 1.79640000 );
        sub_163980( 397.25320000, 1082.47400000, 1.71530000 );
        break;
        case 11:
        sub_163980( 2072.80800000, 102.75570000, 11.02200000 );
        sub_163980( 2232.70500000, 891.79740000, 4.52110000 );
        sub_163980( 2247.87500000, -142.09800000, 3.50940000 );
        sub_163980( 2259.19400000, 423.94070000, 4.90050000 );
        sub_163980( 2142.46100000, 185.46280000, 4.81090000 );
        sub_163980( 2152.84400000, 341.89890000, 3.75030000 );
        sub_163980( 2558.74900000, 81.81350000, 2.25080000 );
        sub_163980( 2640.09500000, 663.64870000, 2.44290000 );
        sub_163980( 2619.64200000, 417.33540000, 4.93810000 );
        sub_163980( 2520.63000000, 612.33400000, 5.52400000 );
        sub_163980( 2422.20300000, 339.38180000, 5.08030000 );
        sub_163980( 2335.49600000, 499.03240000, 5.07800000 );
        break;
        case 12: break;
    }
    return;
}

void sub_163980(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    CREATE_PICKUP( -1758615024, 23, uParam0, uParam1, uParam2, ref uVar5, 0 );
    return;
}

void sub_167166(unknown uParam0, unknown uParam1)
{
    SET_BIT( ref l_U1526[uParam1], 0 );
    SET_BITS_IN_RANGE( ref l_U1526[uParam1], 1, 31, uParam0 );
    return;
}

void sub_167398()
{
    CLEAR_SCRIPT_ARRAY_FROM_SCRATCHPAD( 2 );
    SAVE_SCRIPT_ARRAY_IN_SCRATCHPAD( ref l_U1526, 61, 2, 2 );
    return;
}

void sub_167497(unknown uParam0)
{
    l_U1320 = uParam0;
    return;
}

void sub_168032()
{
    if (sub_168041())
    {
        if (sub_168202())
        {
            switch (sub_168633())
            {
                case 0:
                SAY_AMBIENT_SPEECH( sub_5422(), "GANG_CHASE", 1, 0, 0 );
                break;
                case 1:
                SAY_AMBIENT_SPEECH( sub_5422(), "GENERIC_FUCK_OFF", 1, 0, 0 );
                break;
                case 2:
                SAY_AMBIENT_SPEECH( sub_5422(), "GENERIC_HI", 1, 0, 0 );
                break;
                case 3:
                SAY_AMBIENT_SPEECH( sub_5422(), "GANG_WATCH_THIS_GUY_SOLO", 1, 0, 0 );
                break;
                case 4:
                SAY_AMBIENT_SPEECH( sub_5422(), "JEERING", 1, 0, 0 );
                break;
                case 5:
                SAY_AMBIENT_SPEECH( sub_5422(), "ABUSE_DRIVER", 1, 0, 0 );
                break;
                case 6:
                SAY_AMBIENT_SPEECH( sub_5422(), "TARGET_NOGENDER", 1, 0, 0 );
                break;
                case 7:
                SAY_AMBIENT_SPEECH( sub_5422(), "FIGHT", 1, 0, 0 );
                break;
                case 8:
                SAY_AMBIENT_SPEECH( sub_5422(), "GANG_FIGHT_CHEER", 1, 0, 0 );
                break;
            }
        }
    }
    return;
}

int sub_168041()
{
    int iVar2;
    unknown uVar3;
    int iVar4;

    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (IS_CHAR_IN_ANY_HELI( sub_5422() ))
        {
            return 0;
        }
        if (IS_CHAR_IN_ANY_CAR( sub_5422() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5422(), ref uVar3 );
            GET_DRIVER_OF_CAR( uVar3, ref iVar4 );
            if (iVar4 == sub_5422())
            {
                GET_CURRENT_CHAR_WEAPON( sub_5422(), ref iVar2 );
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

int sub_168202()
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (sub_168232( 1, 1 ))
        {
            if (NOT (IS_CHAR_IN_AIR( sub_5422() )))
            {
                if (NOT l_U1525)
                {
                    if (IS_CONTROL_JUST_PRESSED( 0, 23 ))
                    {
                        if (NOT (IS_AMBIENT_SPEECH_PLAYING( sub_5422() )))
                        {
                            l_U1525 = 1;
                            return 1;
                        }
                    }
                }
                else if (NOT (IS_CONTROL_JUST_PRESSED( 0, 23 )))
                {
                    l_U1525 = 0;
                }
            }
        }
    }
    return 0;
}

int sub_168232(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_5422() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5422(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_5422() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5422(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_5422()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_5422() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_5422() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_5097() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_5097() )))
    {
        return 0;
    }
    return 1;
}

int sub_168633()
{
    if (sub_168642())
    {
        return 6;
    }
    else if (sub_168784( 1 ))
    {
        return 7;
    }
    else if (sub_168784( 0 ))
    {
        return 8;
    }
    if (sub_169591())
    {
        return 1;
    }
    if ((sub_169912()) || ((sub_168819()) AND (sub_170019())))
    {
        if (sub_170200() != nil)
        {
            if (IS_CHAR_MALE( sub_170200() ))
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
    if (sub_170370())
    {
        return 5;
    }
    if (sub_170598( 10.00000000 ))
    {
        return 2;
    }
    return 2;
}

int sub_168642()
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (IS_CHAR_SHOOTING( sub_5422() ))
        {
            return 1;
        }
    }
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if ((IS_CHAR_ARMED( sub_5422(), 2 )) || (IS_CHAR_ARMED( sub_5422(), 4 )))
        {
            if (IS_BUTTON_PRESSED( 0, 7 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_168784(boolean bParam0)
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (bParam0)
        {
            if (sub_168819())
            {
                if (IS_NETWORK_PLAYER_ACTIVE( l_U1524 ))
                {
                    if (NOT (IS_CHAR_DEAD( sub_28507( l_U1524 ) )))
                    {
                        if (IS_CHAR_VISIBLE( sub_28507( l_U1524 ) ))
                        {
                            if (sub_169256( sub_5422(), sub_28507( l_U1524 ), 10.00000000 ))
                            {
                                if (IS_CHAR_IN_MELEE_COMBAT( sub_5422() ))
                                {
                                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( sub_28507( l_U1524 ), sub_5422(), 0 ))
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
        else if (IS_NETWORK_PLAYER_ACTIVE( l_U1524 ))
        {
            if (NOT (IS_CHAR_DEAD( sub_28507( l_U1524 ) )))
            {
                if (IS_CHAR_VISIBLE( sub_28507( l_U1524 ) ))
                {
                    if (sub_169256( sub_5422(), sub_28507( l_U1524 ), 10.00000000 ))
                    {
                        if (IS_CHAR_IN_MELEE_COMBAT( sub_28507( l_U1524 ) ))
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

int sub_168819()
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
                    if ((NOT (IS_CHAR_DEAD( sub_5422() ))) AND (NOT (IS_CHAR_DEAD( sub_28507( I ) ))))
                    {
                        if (IS_CHAR_VISIBLE( sub_28507( I ) ))
                        {
                            GET_CHAR_COORDINATES( sub_28507( GET_PLAYER_ID() ), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                            GET_CHAR_COORDINATES( sub_28507( I ), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                            if ((VDIST( uVar4, uVar7 )) < 10000.00000000)
                            {
                                fVar2 = VDIST( uVar4, uVar7 );
                                l_U1524 = I;
                            }
                        }
                    }
                }
            }
        }
    }
    if (IS_NETWORK_PLAYER_ACTIVE( l_U1524 ))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (((GET_PLAYER_TEAM( sub_3442( l_U1524 ) )) != (GET_PLAYER_TEAM( sub_5097() ))) || ((GET_PLAYER_TEAM( sub_3442( l_U1524 ) )) == -1))
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

int sub_169256(unknown uParam0, unknown uParam1, float fParam2)
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

int sub_169591()
{
    int I;
    unknown uVar3;

    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( sub_5422(), 57 ))
        {
            CLEAR_CHAR_LAST_WEAPON_DAMAGE( sub_5422() );
            CLEAR_CHAR_LAST_DAMAGE_ENTITY( sub_5422() );
            CLEAR_CHAR_LAST_DAMAGE_BONE( sub_5422() );
            return 1;
        }
        for ( I = 0; I < 16; I++ )
        {
            if (IS_NETWORK_PLAYER_ACTIVE( I ))
            {
                if (I != GET_PLAYER_ID())
                {
                    if (IS_CHAR_IN_ANY_CAR( sub_28507( I ) ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_28507( I ), ref uVar3 );
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CAR( sub_5422(), uVar3 ))
                        {
                            CLEAR_CHAR_LAST_WEAPON_DAMAGE( sub_5422() );
                            CLEAR_CHAR_LAST_DAMAGE_ENTITY( sub_5422() );
                            CLEAR_CHAR_LAST_DAMAGE_BONE( sub_5422() );
                            return 1;
                        }
                    }
                    else if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( sub_5422(), sub_28507( I ), 0 ))
                    {
                        CLEAR_CHAR_LAST_WEAPON_DAMAGE( sub_5422() );
                        CLEAR_CHAR_LAST_DAMAGE_ENTITY( sub_5422() );
                        CLEAR_CHAR_LAST_DAMAGE_BONE( sub_5422() );
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_169912()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_5422(), 0.00000000, 5.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        if (ARE_ENEMY_PEDS_IN_AREA( sub_5422(), uVar2, 10.00000000 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_170019()
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( l_U1524 ))
        {
            if (NOT (IS_CHAR_DEAD( sub_28507( l_U1524 ) )))
            {
                if (IS_CHAR_VISIBLE( sub_28507( l_U1524 ) ))
                {
                    if (sub_169256( sub_5422(), sub_28507( l_U1524 ), 10.00000000 ))
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( sub_28507( l_U1524 ) )))
                        {
                            if (NOT (IS_CHAR_IN_MELEE_COMBAT( sub_5422() )))
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

void sub_170200()
{
    if (IS_NETWORK_PLAYER_ACTIVE( l_U1524 ))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (((GET_PLAYER_TEAM( sub_3442( l_U1524 ) )) != (GET_PLAYER_TEAM( sub_5097() ))) || ((GET_PLAYER_TEAM( sub_3442( l_U1524 ) )) == -1))
            {
                return sub_28507( l_U1524 );
            }
        }
    }
    return nil;
}

int sub_170370()
{
    float fVar2;

    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (sub_168819())
        {
            if (sub_12849())
            {
                if (IS_NETWORK_PLAYER_ACTIVE( l_U1524 ))
                {
                    if (NOT (IS_CHAR_DEAD( sub_28507( l_U1524 ) )))
                    {
                        if (IS_CHAR_VISIBLE( sub_28507( l_U1524 ) ))
                        {
                            if (sub_169256( sub_5422(), sub_28507( l_U1524 ), 10.00000000 ))
                            {
                                if ((IS_CHAR_IN_ANY_CAR( sub_5422() )) AND (IS_CHAR_IN_ANY_CAR( sub_28507( l_U1524 ) )))
                                {
                                    GET_CHAR_SPEED( sub_5422(), ref fVar2 );
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

int sub_170598(unknown uParam0)
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
                    if (NOT (IS_CHAR_DEAD( sub_28507( I ) )))
                    {
                        if (IS_CHAR_VISIBLE( sub_28507( I ) ))
                        {
                            if (sub_169256( sub_5422(), sub_28507( I ), uParam0 ))
                            {
                                if (NOT (IS_CHAR_IN_ANY_CAR( sub_28507( I ) )))
                                {
                                    if ((NOT (IS_CHAR_IN_MELEE_COMBAT( sub_5422() ))) AND (NOT (IS_CHAR_IN_MELEE_COMBAT( sub_28507( I ) ))))
                                    {
                                        if (((GET_PLAYER_TEAM( sub_3442( I ) )) != (GET_PLAYER_TEAM( sub_5097() ))) || ((GET_PLAYER_TEAM( sub_3442( I ) )) == -1))
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

void sub_171284()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1588[I]._fU52;
    }
    sub_171366( l_U1829._fU1272, ref uVar3, ref l_U1588[GET_PLAYER_ID()]._fU52 );
    return;
}

void sub_171366(int iParam0, unknown uParam1, unknown uParam2)
{
    int I;
    char[64] cVar6;
    char[16] cVar22;

    (uParam2^) = sub_171375();
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U869[I] != (uParam1^)[I])
            {
                if ((uParam1^)[I] != -1)
                {
                    StrCopy( ref cVar6, GET_STRING_FROM_TEXT_FILE( "SUGGESTS" ), 64 );
                    ConcatString(ref cVar6, " ", 64);
                    StrCopy( ref cVar22, "NTGT_", 16 );
                    ConcatString(ref cVar22, (uParam1^)[I], 16);
                    ConcatString(ref cVar6, GET_STRING_FROM_TEXT_FILE( ref cVar22 ), 64);
                    sub_171531( I, -1, ref cVar6 );
                }
                l_U869[I] = (uParam1^)[I];
            }
        }
    }
    if (iParam0 != -1)
    {
        if (iParam0 != l_U886)
        {
            StrCopy( ref cVar22, "NTGT_", 16 );
            ConcatString(ref cVar22, iParam0, 16);
            sub_171816( "NEXT_GAME_MODE", -1, ref cVar22 );
            l_U886 = iParam0;
        }
    }
    return;
}

void sub_171375()
{
    return g_U18._fU660;
}

void sub_171531(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar6 = sub_114711( uParam1 );
    StrCopy( ref l_U6[uVar6]._fU76._fU0, GET_PLAYER_NAME( sub_3442( uParam0 ) ), 64 );
    sub_30820( sub_3442( uParam0 ), ref l_U6[uVar6]._fU76._fU68, ref l_U6[uVar6]._fU76._fU72, ref l_U6[uVar6]._fU76._fU76 );
    StrCopy( ref l_U6[uVar6]._fU156._fU0, uParam2, 64 );
    GET_HUD_COLOUR( 1, ref l_U6[uVar6]._fU156._fU68, ref l_U6[uVar6]._fU156._fU72, ref l_U6[uVar6]._fU156._fU76, ref uVar5 );
    sub_115286( uVar6 );
    return;
}

void sub_171816(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar6 = sub_114711( uParam1 );
    StrCopy( ref l_U6[uVar6]._fU76._fU0, uParam0, 64 );
    l_U6[uVar6]._fU76._fU64 = 1;
    GET_HUD_COLOUR( 1, ref l_U6[uVar6]._fU76._fU68, ref l_U6[uVar6]._fU76._fU72, ref l_U6[uVar6]._fU76._fU76, ref uVar5 );
    StrCopy( ref l_U6[uVar6]._fU156._fU0, uParam2, 64 );
    l_U6[uVar6]._fU156._fU64 = 1;
    GET_HUD_COLOUR( 1, ref l_U6[uVar6]._fU156._fU68, ref l_U6[uVar6]._fU156._fU72, ref l_U6[uVar6]._fU156._fU76, ref uVar5 );
    sub_115286( uVar6 );
    return;
}

void sub_172196(int iParam0)
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
        sub_172305( ref cVar7, uVar3, uVar4, uVar5, -1, " ", uVar3, uVar4, uVar5 );
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
        sub_172305( ref cVar7, uVar3, uVar4, uVar5, -1, " ", uVar3, uVar4, uVar5 );
    }
    return;
}

void sub_172305(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    unknown uVar11;

    uVar11 = sub_114711( uParam4 );
    StrCopy( ref l_U6[uVar11]._fU76._fU0, uParam0, 64 );
    l_U6[uVar11]._fU76._fU68 = uParam1;
    l_U6[uVar11]._fU76._fU72 = uParam2;
    l_U6[uVar11]._fU76._fU76 = uParam3;
    StrCopy( ref l_U6[uVar11]._fU156._fU0, uParam5, 64 );
    l_U6[uVar11]._fU156._fU68 = uParam6;
    l_U6[uVar11]._fU156._fU72 = uParam7;
    l_U6[uVar11]._fU156._fU76 = uParam8;
    return;
}

void sub_172707()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U481[I] == -1)
            {
                sub_172770( I, -1, "JOINED" );
                l_U481[I] = 1;
            }
            if (l_U481[I] == 0)
            {
                l_U481[I] = 1;
            }
            if (IS_CHAR_FATALLY_INJURED( sub_28507( I ) ))
            {
                if (l_U481[I] == 2)
                {
                    if (I == (FIND_NETWORK_KILLER_OF_PLAYER( I )))
                    {
                        sub_172770( I, -1, "DIED" );
                    }
                    else if (IS_NETWORK_PLAYER_ACTIVE( FIND_NETWORK_KILLER_OF_PLAYER( I ) ))
                    {
                        sub_173126( FIND_NETWORK_KILLER_OF_PLAYER( I ), I );
                    }
                    l_U481[I] = 3;
                }
            }
            else if (l_U481[I] == 1)
            {
                l_U481[I] = 2;
            }
            if (l_U481[I] == 3)
            {
                l_U481[I] = 2;
            }
        }
        else if (l_U481[I] > 0)
        {
            sub_172770( I, -1, "LEFTGAME" );
        }
        l_U481[I] = -1;;
    }
    if ((NETWORK_IS_RENDEZVOUS()) || (NETWORK_IS_TVT()))
    {
        if (l_U1291 != NETWORK_GET_RENDEZVOUS_HOST_PLAYER_ID())
        {
            l_U1291 = NETWORK_GET_RENDEZVOUS_HOST_PLAYER_ID();
            if (NETWORK_GET_RENDEZVOUS_HOST_PLAYER_ID() != -1)
            {
                if (IS_NETWORK_PLAYER_ACTIVE( l_U1291 ))
                {
                    sub_172770( l_U1291, -1, "IS_PARTY_LEADER" );
                }
            }
        }
    }
    return;
}

void sub_172770(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar6 = sub_114711( uParam1 );
    StrCopy( ref l_U6[uVar6]._fU76._fU0, GET_PLAYER_NAME( sub_3442( uParam0 ) ), 64 );
    sub_30820( sub_3442( uParam0 ), ref l_U6[uVar6]._fU76._fU68, ref l_U6[uVar6]._fU76._fU72, ref l_U6[uVar6]._fU76._fU76 );
    StrCopy( ref l_U6[uVar6]._fU156._fU0, uParam2, 64 );
    l_U6[uVar6]._fU156._fU64 = 1;
    GET_HUD_COLOUR( 1, ref l_U6[uVar6]._fU156._fU68, ref l_U6[uVar6]._fU156._fU72, ref l_U6[uVar6]._fU156._fU76, ref uVar5 );
    sub_115286( uVar6 );
    return;
}

void sub_173126(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    char[16] cVar5;

    GET_DESTROYER_OF_NETWORK_ID( sub_173142( sub_28507( uParam1 ) ), ref uVar4 );
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
    ConcatString(ref cVar5, sub_22648( 0, 10 ), 16);
    REGISTER_KILL_IN_MULTIPLAYER_GAME( uParam0, uParam1, uVar4 );
    sub_114701( uParam0, ref cVar5, uParam1 );
    return;
}

void sub_173142(unknown uParam0)
{
    unknown Result;

    GET_NETWORK_ID_FROM_PED( uParam0, ref Result );
    return Result;
}

void sub_173902()
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

    if (sub_6781())
    {
        SET_WIDESCREEN_FORMAT( 2 );
        iVar2 = l_U480;
        if (IS_HELP_MESSAGE_BEING_DISPLAYED())
        {
            GET_HELP_MESSAGE_BOX_SIZE( ref fVar13, ref fVar14 );
            fVar14 += l_U563 + 0.03000000;
        }
        else if (IS_IN_SPECTATOR_MODE())
        {
            fVar14 = (0.21550000 + l_U563) + l_U986;
        }
        else if (GET_IS_HIDEF())
        {
            fVar14 = (0.06000000 + l_U563) + l_U986;
        }
        else
        {
            fVar14 = (0.08000000 + l_U563) + l_U986;
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
        while (iVar2 != l_U479)
        {
            if (l_U6[iVar2]._fU0 == 1)
            {
                if (GET_IS_HIDEF())
                {
                    fVar13 = 0.07700000;
                }
                else
                {
                    fVar13 = 0.09700000;
                }
                iVar3 = sub_174228( (l_U6[iVar2]._fU4 - 512) - iVar5, 0, 255 );
                sub_9507( 0, -0.50000000, 1.50000000, 3, 1, 0, 0, 0, iVar3 );
                SET_TEXT_USE_UNDERSCORE( 1 );
                if (l_U6[iVar2]._fU76._fU64)
                {
                    uVar12 = sub_15865( ref l_U6[iVar2]._fU76._fU0, fVar13, fVar14, fVar15, fVar16, l_U6[iVar2]._fU76._fU68, l_U6[iVar2]._fU76._fU72, l_U6[iVar2]._fU76._fU76, iVar3, 2 );
                }
                else
                {
                    uVar12 = sub_24874( fVar13, fVar14, fVar15, fVar16, l_U6[iVar2]._fU76._fU68, l_U6[iVar2]._fU76._fU72, l_U6[iVar2]._fU76._fU76, iVar3, 2, ref l_U6[iVar2]._fU76._fU0 );
                }
                fVar13 += uVar12;
                if (l_U6[iVar2]._fU8 == -1)
                {
                    fVar13 += sub_42231( 0, -0.50000000, 1.50000000, 3, 1, fVar15, fVar16, " " );
                }
                if (l_U6[iVar2]._fU8 == -2)
                {
                    fVar13 += sub_42231( 0, -0.50000000, 1.50000000, 3, 1, fVar15, fVar16, " " );
                    sub_9507( 0, -0.50000000, 1.50000000, 3, 1, 0, 0, 0, iVar3 );
                    GET_HUD_COLOUR( 1, ref uVar6, ref uVar7, ref uVar8, ref uVar9 );
                    SET_TEXT_USE_UNDERSCORE( 1 );
                    fVar13 += sub_15865( ref l_U6[iVar2]._fU12, fVar13, fVar14, fVar15, fVar16, uVar6, uVar7, uVar8, iVar3, 2 );
                    SET_TEXT_USE_UNDERSCORE( 1 );
                    fVar13 += sub_42231( 0, -0.50000000, 1.50000000, 3, 1, fVar15, fVar16, " " );
                }
                else if ((l_U6[iVar2]._fU8 > -1) AND (l_U6[iVar2]._fU8 < 36))
                {
                    fVar13 += 0.03200000 / 2;
                    DRAW_SPRITE( l_U501[l_U6[iVar2]._fU8], fVar13, fVar14 + 0.00900000, 0.03200000, 0.03200000, 0.00000000, 255, 255, 255, iVar3 );
                    fVar13 += 0.03200000 / 2;
                }
                sub_9507( 0, -0.50000000, 1.50000000, 3, 1, 0, 0, 0, iVar3 );
                SET_TEXT_USE_UNDERSCORE( 1 );
                if (l_U6[iVar2]._fU156._fU64)
                {
                    sub_15865( ref l_U6[iVar2]._fU156._fU0, fVar13, fVar14, fVar15, fVar16, l_U6[iVar2]._fU156._fU68, l_U6[iVar2]._fU156._fU72, l_U6[iVar2]._fU156._fU76, iVar3, 2 );
                }
                else
                {
                    sub_24874( fVar13, fVar14, fVar15, fVar16, l_U6[iVar2]._fU156._fU68, l_U6[iVar2]._fU156._fU72, l_U6[iVar2]._fU156._fU76, iVar3, 2, ref l_U6[iVar2]._fU156._fU0 );
                }
                SET_TEXT_USE_UNDERSCORE( 0 );
                if (iVar3 < 255)
                {
                    iVar4++;
                }
                if (l_U6[iVar2]._fU4 <= iVar5)
                {
                    l_U563 -= -0.02600000;
                    sub_114738( ref l_U6[iVar2] );
                    sub_14010( ref l_U480, 8 );
                    iVar4--;
                }
                fVar14 -= -0.02600000;
                sub_14010( ref iVar2, 8 );
            }
            if (l_U6[iVar2]._fU0 == 0)
            {
                if ((iVar2 == l_U480) AND (iVar4 == 0))
                {
                    l_U563 = 0.00000000;
                }
                iVar2 = l_U479;
            }
        }
        l_U563 -= uVar10 * 0.08000000;
        l_U986 = 0.00000000;
        fVar11 = -0.02600000 * (TO_FLOAT( iVar4 ));
        if (l_U563 <= fVar11)
        {
            l_U563 = fVar11;
        }
        SET_WIDESCREEN_FORMAT( 0 );
    }
    return;
}

void sub_174228(int iParam0, int iParam1, int Result)
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

void sub_175567(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16)
{
    int I;
    int iVar20;
    unknown[16] uVar21;
    unknown uVar38;

    iVar20 = GET_PLAYER_ID();
    array(ref uVar21, 16);
    sub_175634( ref uVar21, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam9, uParam10, uParam11, uParam12, uParam13, uParam14, uParam15, uParam16 );
    sub_175825( ref uVar21[iVar20], g_U18._fU636, g_U18._fU632 );
    if (NOT g_U18._fU1492)
    {
        switch (g_U18._fU632)
        {
            case 0:
            for ( I = 0; I <= (iParam0 - 1); I++ )
            {
                if ((I != iVar20) AND (IS_NETWORK_PLAYER_ACTIVE( I )))
                {
                    if (((sub_175974( ref uVar21[I] )) == iVar20) AND ((sub_176014( ref uVar21[I] )) == 3))
                    {
                        if ((NOT (NETWORK_IS_PLAYER_BLOCKED_BY_ME( I ))) AND (NOT (NETWORK_AM_I_BLOCKED_BY_PLAYER( I ))))
                        {
                            StrCopy( ref g_U18._fU584, GET_PLAYER_NAME( sub_3442( I ) ), 32 );
                            sub_122964( ref uVar21[iVar20], I, 1 );
                            break;
                        }
                    }
                }
            }
            break;
            case 1:
            if (g_U18._fU636 == 31)
            {
                sub_122964( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if (IS_NETWORK_PLAYER_ACTIVE( g_U18._fU636 ))
            {
                if (NOT (sub_176207( iVar20, g_U18._fU636, ref uVar38 )))
                {
                    sub_122964( ref uVar21[iVar20], 31, 4 );
                    break;
                }
                switch (sub_176014( ref uVar21[g_U18._fU636] ))
                {
                    case 3:
                    case 9: if ((sub_175974( ref uVar21[g_U18._fU636] )) == iVar20)
                    {
                        break;
                    }
                    default:
                    sub_122964( ref uVar21[iVar20], 31, 4 );
                    break;
                }
            }
            else
            {
                sub_122964( ref uVar21[iVar20], 31, 4 );
            }
            break;
            case 2:
            if (g_U18._fU636 == 31)
            {
                sub_122964( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if (IS_NETWORK_PLAYER_ACTIVE( g_U18._fU636 ))
            {
                if ((sub_176014( ref uVar21[g_U18._fU636] )) == 0)
                {
                    sub_122964( ref uVar21[iVar20], g_U18._fU636, 3 );
                    break;
                }
            }
            sub_122964( ref uVar21[iVar20], 31, 6 );
            break;
            case 3:
            if (g_U18._fU636 == 31)
            {
                sub_122964( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if (IS_NETWORK_PLAYER_ACTIVE( g_U18._fU636 ))
            {
                if (NOT (sub_176207( iVar20, g_U18._fU636, ref uVar38 )))
                {
                    sub_122964( ref uVar21[iVar20], 31, 4 );
                    break;
                }
                switch (sub_176014( ref uVar21[g_U18._fU636] ))
                {
                    case 0: break;
                    case 9:
                    case 1:
                    if ((sub_175974( ref uVar21[g_U18._fU636] )) == iVar20)
                    {
                        if ((sub_176014( ref uVar21[g_U18._fU636] )) == 9)
                        {
                            sub_122964( ref uVar21[iVar20], g_U18._fU636, 9 );
                        }
                        break;
                    }
                    sub_122964( ref uVar21[iVar20], 31, 6 );
                    break;
                    default:
                    sub_122964( ref uVar21[iVar20], 31, 4 );
                    break;
                }
            }
            else
            {
                sub_122964( ref uVar21[iVar20], 31, 6 );
            }
            break;
            case 9:
            if (g_U18._fU636 == 31)
            {
                sub_122964( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if (NOT (sub_176207( iVar20, g_U18._fU636, ref uVar38 )))
            {
                sub_122964( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if ((sub_175974( ref uVar21[g_U18._fU636] )) != iVar20)
            {
                sub_122964( ref uVar21[iVar20], 31, 4 );
            }
            break;
        }
    }
    sub_177022( iVar20, ref uVar21, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam9, uParam10, uParam11, uParam12, uParam13, uParam14, uParam15, uParam16 );
    return;
}

void sub_175634(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16)
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

void sub_175825(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_122995( uParam0, uParam1 );
    sub_123029( uParam0, uParam2 );
    return;
}

void sub_175974(unknown uParam0)
{
    return GET_BITS_IN_RANGE( (uParam0^), 0, 15 );
}

void sub_176014(unknown uParam0)
{
    return GET_BITS_IN_RANGE( (uParam0^), 16, 31 );
}

int sub_176207(unknown uParam0, int iParam1, unknown uParam2)
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

void sub_177022(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17)
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

int sub_177469()
{
    int iVar2;

    GET_NETWORK_TIMER( ref iVar2 );
    if (NOT sub_177486())
    {
        if (IS_BUTTON_PRESSED( 0, 9 ))
        {
            if (NOT l_U1252)
            {
                if (l_U1251 > iVar2)
                {
                    l_U1251 = iVar2 - 5000;
                }
                else
                {
                    l_U1251 = iVar2 + 5000;
                }
                l_U1252 = 1;
            }
            else if (l_U1251 > iVar2)
            {
                l_U1251 = iVar2 + 5000;
            }
        }
        else
        {
            l_U1252 = 0;
        }
        if (l_U1251 > iVar2)
        {
            SET_RADAR_ZOOM( 980 );
            return 1;
        }
    }
    SET_RADAR_ZOOM( 0 );
    return 0;
}

int sub_177486()
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

void sub_177730(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
{
    if (NOT (IS_FONT_LOADED( 6 )))
    {
        LOAD_TEXT_FONT( 6 );
    }
    HIDE_HELP_TEXT_THIS_FRAME();
    if (((iParam2 == 1) || (iParam2 == 3)) || (iParam2 == 5))
    {
        sub_112935( uParam1 );
    }
    sub_112269( uParam0 );
    if ((sub_4726() + sub_17680()) > 22)
    {
        if (GET_IS_HIDEF())
        {
            sub_177878( iParam2, 0.07000000, 0.06400000, 0.31300000, 0.40600000, 0.02450000, 0.28000000, 0.39070000, 0.02300000, uParam3, uParam4 );
        }
        else
        {
            sub_177878( iParam2, 0.09000000, 0.08400000, 0.30000000, 0.44000000, 0.02450000, 0.30000000, 0.44000000, 0.02300000, uParam3, uParam4 );
        }
    }
    else if (GET_IS_HIDEF())
    {
        sub_177878( iParam2, 0.07000000, 0.06400000, 0.31300000, 0.46000000, 0.02700000, 0.28000000, 0.42000000, 0.02700000, uParam3, uParam4 );
    }
    else
    {
        sub_177878( iParam2, 0.09000000, 0.08400000, 0.30000000, 0.44000000, 0.02700000, 0.30000000, 0.44000000, 0.02700000, uParam3, uParam4 );
    }
    return;
}

void sub_177878(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, int iParam9, boolean bParam10)
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
            fVar17 = sub_42231( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, GET_PLAYER_NAME( sub_3442( I ) ) );
            SET_TEXT_USE_UNDERSCORE( 0 );
            if (fVar17 > fVar18)
            {
                fVar18 = fVar17;
            }
            if ((iParam0 == 3) AND ((sub_43573( I )) > -1))
            {
                if ((l_U564[sub_4347()]._fU16 == 5) || (l_U564[sub_4347()]._fU16 == 6))
                {
                    if (sub_3785() == 1)
                    {
                        fVar17 = sub_178111( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, "CASH", l_U564[sub_4347()]._fU24[I] );
                    }
                    else
                    {
                        fVar17 = sub_178111( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, "CASH", (l_U941[sub_43573( I )]) / (sub_43696( sub_43573( I ) )) );
                    }
                }
                else
                {
                    fVar17 = sub_178427( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, (l_U941[sub_43573( I )]) / (sub_43696( sub_43573( I ) )) );
                }
                if (fVar17 > fVar19)
                {
                    fVar19 = fVar17;
                }
            }
            else if (iParam0 == 2)
            {
                if ((l_U564[sub_4347()]._fU16 == 5) || (l_U564[sub_4347()]._fU16 == 6))
                {
                    fVar17 = sub_178111( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, "CASH", l_U564[sub_4347()]._fU24[I] );
                }
                else
                {
                    fVar17 = sub_178427( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, l_U564[sub_4347()]._fU24[I] );
                }
                if (fVar17 > fVar19)
                {
                    fVar19 = fVar17;
                }
            }
            else if ((iParam0 == 4) || (iParam0 == 5))
            {
                fVar17 = sub_178864( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, sub_4191( I ) );
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
            if ((sub_13166( J )) > 0)
            {
                fVar17 = sub_179255( 6, 0.00000000, 1.00000000, 0, 0, uParam6, uParam7, sub_60374( J, 1 ) );
                if (fVar17 > fVar18)
                {
                    fVar18 = fVar17;
                }
                if (iParam0 == 3)
                {
                    if ((l_U564[sub_4347()]._fU16 == 5) || (l_U564[sub_4347()]._fU16 == 6))
                    {
                        fVar17 = sub_178111( 6, 0.00000000, 1.00000000, 0, 0, uParam6, uParam7, "CASH", l_U941[J] );
                    }
                    else
                    {
                        fVar17 = sub_178427( 6, 0.00000000, 1.00000000, 0, 0, uParam6, uParam7, l_U941[J] );
                    }
                    if (fVar17 > fVar19)
                    {
                        fVar19 = fVar17;
                    }
                }
                else if (iParam0 == 5)
                {
                    fVar17 = sub_178864( 6, 0.00000000, 1.00000000, 0, 0, uParam6, uParam7, sub_179650( J ) );
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
    ConcatString(ref cVar23, sub_3785(), 32);
    fVar17 = sub_179255( 6, 0.00000000, 1.00000000, 0, 0, 0.31000000, 0.45500000, ref cVar23 );
    if (fVar17 > fVar18)
    {
        fVar18 = fVar17;
    }
    if (iParam9 != 2147483647)
    {
        if (bParam10)
        {
            if (sub_12781())
            {
                fVar17 = sub_178111( 6, 0.00000000, 1.00000000, 0, 0, 0.31000000, 0.45500000, "LIVES_LEFT", iParam9 );
            }
            else
            {
                fVar17 = sub_178111( 6, 0.00000000, 1.00000000, 0, 0, 0.31000000, 0.45500000, "MAX_POINTS", iParam9 );
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
    l_U986 = fVar21 - -0.02600000;
    DRAW_CURVED_WINDOW( uParam1, uParam2 - 0.01200000, fVar20, fVar21, 245 );
    StrCopy( ref cVar23, "NTGT_", 32 );
    ConcatString(ref cVar23, sub_3785(), 32);
    sub_9507( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    sub_15865( ref cVar23, uParam1 + 0.01000000, uParam2 + -0.00370000, 0.31000000, 0.45500000, 255, 255, 255, 255, 2 );
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
            sub_9507( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
            if (sub_12781())
            {
                sub_9804( "LIVES_LEFT", uParam1 + 0.01000000, (((((uParam2 + fVar22) + -0.00370000) + 0.03450000) + -0.01900000) + 0.03820000) + 0.00650000, 0.31000000, 0.45500000, 255, 255, 255, 255, 2, iParam9 );
            }
            else
            {
                sub_9804( "MAX_POINTS", uParam1 + 0.01000000, (((((uParam2 + fVar22) + -0.00370000) + 0.03450000) + -0.01900000) + 0.03820000) + 0.00650000, 0.31000000, 0.45500000, 255, 255, 255, 255, 2, iParam9 );
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
        iVar31[0] = sub_4347();
        iVar31[1] = 0;
    }
    if (((iParam0 == 1) || (iParam0 == 3)) || (iParam0 == 5))
    {
        sub_63645( ref iVar31, (uParam1 + 0.01000000) + fVar19, ((uParam2 + -0.00370000) + 0.03450000) + -0.01900000, uParam6, uParam7, uParam8, uParam3, uParam4, uParam5, iParam0, 24, 0, -1 );
    }
    else
    {
        sub_65095( ref iVar31, (uParam1 + 0.01000000) + fVar19, ((uParam2 + -0.00370000) + 0.03450000) + -0.01900000, uParam3, uParam4, uParam5, iParam0, 16, 0, -1 );
    }
    return;
}

void sub_178111(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
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

void sub_178427(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
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

void sub_178864(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7)
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

void sub_179255(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
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

int sub_179650(int iParam0)
{
    int I;
    int Result;

    if (sub_60026( iParam0 ))
    {
        for ( I = 0; I < 8; I++ )
        {
            if ((sub_13166( l_U932[I] )) > 0)
            {
                Result++;
                if (l_U941[l_U932[I]] == l_U941[iParam0])
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
            if ((sub_13166( l_U932[I] )) > 0)
            {
                Result++;
                if (l_U932[I] == iParam0)
                {
                    return Result;
                }
            }
        }
    }
    return 1;
}

int sub_181554(int iParam0)
{
    int iVar3;

    DISPLAY_CASH( 1 );
    STORE_SCORE( sub_5097(), ref iVar3 );
    if (iVar3 != iParam0)
    {
        iParam0 -= iVar3;
        ADD_SCORE( sub_5097(), iParam0 );
        return 1;
    }
    return 0;
}

void sub_182354(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U1379)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((l_U1377) AND (IS_HINT_RUNNING()))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U1378 + 500))
        {
            l_U1377 = 0;
        }
    }
    if (((((IS_CONTROL_PRESSED( 0, 51 )) AND (IS_CHAR_IN_ANY_CAR( sub_5422() ))) AND (NOT (IS_CHAR_DEAD( (uParam0^) )))) AND (NOT sub_182522())) AND (iVar3 != 4))
    {
        if ((NOT IS_HINT_RUNNING()) AND (IS_CHAR_IN_ANY_CAR( (uParam0^) )))
        {
            if (l_U1379)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U1378 );
            l_U1377 = 1;
            l_U1376 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U1376) AND (NOT l_U1377))
        {
            if (l_U1379)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U1376 = 1;
        }
    }
    else if (l_U1376)
    {
        if (l_U1379)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U1376 = 0;
    };;;
    return;
}

int sub_182522()
{
    if (g_U482 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_183032()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT l_U2183)
    {
        if (l_U1829._fU1284 > -1)
        {
            if ((IS_NETWORK_PLAYER_ACTIVE( l_U1829._fU1284 )) AND (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() )))
            {
                if ((NOT (IS_CHAR_DEAD( sub_28507( l_U1829._fU1284 ) ))) AND (NOT (IS_CHAR_DEAD( sub_5422() ))))
                {
                    if ((GET_PLAYER_TEAM( sub_5097() )) == (GET_PLAYER_TEAM( sub_3442( l_U1829._fU1284 ) )))
                    {
                        if (GET_PLAYER_ID() == l_U1829._fU1284)
                        {
                            PRINT_NOW( "TM_VIP_M01", 15000, 1 );
                        }
                        else
                        {
                            PRINT_NOW( "TM_VIP_M02", 15000, 1 );
                        }
                    }
                    else
                    {
                        PRINT_NOW( "TM_VIP_M03", 15000, 1 );
                    }
                    l_U2183 = 1;
                }
            }
        }
    }
    return;
}

void sub_183302()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    for ( I = 0; I <= 15; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1588[I]._fU36)
            {
                if (l_U1829._fU1284 != -1)
                {
                    if ((GET_PLAYER_TEAM( sub_3442( I ) )) == (GET_PLAYER_TEAM( sub_3442( l_U1829._fU1284 ) )))
                    {
                        if (NOT (I == GET_PLAYER_ID()))
                        {
                            if (NOT (DOES_BLIP_EXIST( l_U2188[I] )))
                            {
                                if (NOT (IS_CHAR_DEAD( sub_28507( I ) )))
                                {
                                    ADD_BLIP_FOR_CHAR( sub_28507( I ), ref l_U2188[I] );
                                    CHANGE_BLIP_SCALE( l_U2188[I], 0.90000000 );
                                    CHANGE_BLIP_DISPLAY( l_U2188[I], 2 );
                                    CHANGE_BLIP_NAME_FROM_ASCII( l_U2188[I], GET_PLAYER_NAME( sub_3442( I ) ) );
                                    GET_TEAM_RGB_COLOUR( 0, ref uVar3, ref uVar4, ref uVar5 );
                                    sub_183586( l_U2188[I], uVar3, uVar4, uVar5 );
                                    if (I == l_U1829._fU1284)
                                    {
                                        CHANGE_BLIP_SPRITE( l_U2188[I], 76 );
                                        CHANGE_BLIP_NAME_FROM_TEXT_FILE( l_U2188[I], "BLIP_93" );
                                        SET_NETWORK_PLAYER_AS_VIP( I, 1 );
                                        CHANGE_BLIP_SCALE( l_U2188[I], 0.90000000 * 1.50000000 );
                                        CHANGE_BLIP_PRIORITY( l_U2188[I], 3 );
                                    }
                                    GET_TEAM_RGB_COLOUR( 0, ref uVar3, ref uVar4, ref uVar5 );
                                    sub_183586( l_U2188[I], uVar3, uVar4, uVar5 );
                                    if (I != l_U1829._fU1284)
                                    {
                                        SET_NETWORK_PLAYER_AS_VIP( I, 0 );
                                        CHANGE_BLIP_PRIORITY( l_U2188[I], 1 );
                                    }
                                    SETTIMERA( 0 );
                                }
                            }
                        }
                    }
                    else if (NOT (DOES_BLIP_EXIST( l_U2188[I] )))
                    {
                        if (NOT (I == GET_PLAYER_ID()))
                        {
                            if ((GET_PLAYER_TEAM( sub_3442( I ) )) == 1)
                            {
                                if ((GET_PLAYER_TEAM( sub_3442( GET_PLAYER_ID() ) )) == 1)
                                {
                                    if (NOT (IS_CHAR_DEAD( sub_28507( I ) )))
                                    {
                                        ADD_BLIP_FOR_CHAR( sub_28507( I ), ref l_U2188[I] );
                                        CHANGE_BLIP_SCALE( l_U2188[I], 0.90000000 );
                                        CHANGE_BLIP_DISPLAY( l_U2188[I], 2 );
                                        GET_TEAM_RGB_COLOUR( 1, ref uVar3, ref uVar4, ref uVar5 );
                                        sub_183586( l_U2188[I], uVar3, uVar4, uVar5 );
                                        SET_NETWORK_PLAYER_AS_VIP( I, 0 );
                                        CHANGE_BLIP_NAME_FROM_ASCII( l_U2188[I], GET_PLAYER_NAME( sub_3442( I ) ) );
                                        CHANGE_BLIP_PRIORITY( l_U2188[I], 1 );
                                    }
                                }
                            }
                            else if (I == l_U1829._fU1284)
                            {
                                if (NOT (IS_CHAR_DEAD( sub_28507( I ) )))
                                {
                                    ADD_BLIP_FOR_CHAR( sub_28507( I ), ref l_U2188[I] );
                                    CHANGE_BLIP_SCALE( l_U2188[I], 0.90000000 );
                                    CHANGE_BLIP_DISPLAY( l_U2188[I], 2 );
                                    GET_TEAM_RGB_COLOUR( GET_PLAYER_TEAM( sub_3442( I ) ), ref uVar3, ref uVar4, ref uVar5 );
                                    sub_183586( l_U2188[I], uVar3, uVar4, uVar5 );
                                    CHANGE_BLIP_NAME_FROM_ASCII( l_U2188[I], GET_PLAYER_NAME( sub_3442( I ) ) );
                                    SET_NETWORK_PLAYER_AS_VIP( I, 0 );
                                    CHANGE_BLIP_PRIORITY( l_U2188[I], 1 );
                                }
                            }
                        }
                        if (GET_PLAYER_ID() == l_U1829._fU1284)
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_28507( I ), sub_28507( l_U1829._fU1284 ), 100.00000000, 100.00000000, 25.00000000, 0 ))
                            {
                                if ((GET_PLAYER_TEAM( sub_3442( I ) )) != (GET_PLAYER_TEAM( sub_3442( l_U1829._fU1284 ) )))
                                {
                                    if (NOT (IS_CHAR_DEAD( sub_28507( I ) )))
                                    {
                                        ADD_BLIP_FOR_CHAR( sub_28507( I ), ref l_U2188[I] );
                                        GET_TEAM_RGB_COLOUR( GET_PLAYER_TEAM( sub_3442( I ) ), ref uVar3, ref uVar4, ref uVar5 );
                                        sub_183586( l_U2188[I], uVar3, uVar4, uVar5 );
                                        CHANGE_BLIP_DISPLAY( l_U2188[I], 2 );
                                        CHANGE_BLIP_NAME_FROM_ASCII( l_U2188[I], GET_PLAYER_NAME( sub_3442( I ) ) );
                                        SET_NETWORK_PLAYER_AS_VIP( I, 0 );
                                        CHANGE_BLIP_PRIORITY( l_U2188[I], 1 );
                                    }
                                }
                            }
                        }
                    }
                    else if (GET_PLAYER_ID() == l_U1829._fU1284)
                    {
                        if ((GET_PLAYER_TEAM( sub_3442( I ) )) != (GET_PLAYER_TEAM( sub_3442( l_U1829._fU1284 ) )))
                        {
                            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_28507( I ), sub_28507( l_U1829._fU1284 ), 100.00000000, 100.00000000, 25.00000000, 0 )))
                            {
                                REMOVE_BLIP( l_U2188[I] );
                            }
                        }
                    };;;
                }
            }
        }
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (IS_CHAR_DEAD( sub_28507( I ) ))
            {
                if (DOES_BLIP_EXIST( l_U2188[I] ))
                {
                    REMOVE_BLIP( l_U2188[I] );
                }
            }
        }
    }
    return;
}

void sub_183586(unknown uParam0, int iParam1, int iParam2, int iParam3)
{
    CHANGE_BLIP_COLOUR( uParam0, (((iParam1 * 16777216) + (iParam2 * 65536)) + (iParam3 * 256)) + 255 );
    return;
}

void sub_184795()
{
    int iVar2;

    if (NOT l_U1588[GET_PLAYER_ID()]._fU8)
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if ((GET_PLAYER_TEAM( sub_5097() )) == 0)
            {
                if (sub_72160( l_U1829._fU524 ))
                {
                    GET_CAR_CHAR_IS_USING( sub_5422(), ref iVar2 );
                    if (NOT (IS_CAR_UPSIDEDOWN( sub_72195( l_U1829._fU524 ) )))
                    {
                        if (iVar2 == (sub_72195( l_U1829._fU524 )))
                        {
                            if (HAS_CONTROL_OF_NETWORK_ID( l_U1829._fU524 ))
                            {
                                FREEZE_CAR_POSITION( sub_72195( l_U1829._fU524 ), 0 );
                            }
                        }
                    }
                    if ((IS_CHAR_SITTING_IN_CAR( sub_5422(), sub_72195( l_U1829._fU524 ) )) AND (NOT (IS_CAR_UPSIDEDOWN( sub_72195( l_U1829._fU524 ) ))))
                    {
                        if (HAS_CONTROL_OF_NETWORK_ID( l_U1829._fU524 ))
                        {
                            FREEZE_CAR_POSITION( sub_72195( l_U1829._fU524 ), 0 );
                        }
                        l_U1588[GET_PLAYER_ID()]._fU8 = 1;
                        l_U1588[GET_PLAYER_ID()]._fU32 = 1;
                        REMOVE_BLIP( l_U2205 );
                    }
                }
            }
        }
        if (l_U1588[GET_PLAYER_ID()]._fU32)
        {
            if (sub_72160( l_U1829._fU524 ))
            {
                if (NOT (IS_CHAR_SITTING_IN_CAR( sub_5422(), sub_72195( l_U1829._fU524 ) )))
                {
                    l_U1588[GET_PLAYER_ID()]._fU32 = 1;
                }
            }
        }
    }
    else if (sub_72160( l_U1829._fU524 ))
    {
        if (IS_CAR_UPSIDEDOWN( sub_72195( l_U1829._fU524 ) ))
        {
            l_U1588[GET_PLAYER_ID()]._fU8 = 0;
        }
    }
    if (sub_72160( l_U1829._fU524 ))
    {
        if (NOT (IS_CHAR_SITTING_IN_CAR( sub_5422(), sub_72195( l_U1829._fU524 ) )))
        {
            l_U1588[GET_PLAYER_ID()]._fU8 = 0;
        }
    }
    if (sub_72160( l_U1829._fU524 ))
    {
        REMOVE_BLIP( l_U2205 );
    }
    return;
}

void sub_185400()
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if ((GET_PLAYER_TEAM( sub_5097() )) == 0)
        {
            if ((NOT (DOES_BLIP_EXIST( l_U2205 ))) AND (NOT l_U1588[GET_PLAYER_ID()]._fU8))
            {
                if (sub_72160( l_U1829._fU524 ))
                {
                    ADD_BLIP_FOR_CAR( sub_72195( l_U1829._fU524 ), ref l_U2205 );
                    CHANGE_BLIP_SPRITE( l_U2205, 4 );
                    CHANGE_BLIP_SCALE( l_U2205, 0.78000000 );
                    CHANGE_BLIP_DISPLAY( l_U2205, 4 );
                    CHANGE_BLIP_COLOUR( l_U2205, 3 );
                }
            }
        }
    }
    return;
}

void sub_186063()
{
    int iVar2;

    if (sub_72160( l_U1829._fU524 ))
    {
        GET_CAR_MODEL( sub_72195( l_U1829._fU524 ), ref iVar2 );
        if (iVar2 == 400514754)
        {
            if (sub_105831( 7000 ))
            {
                if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "TMV_CUPD", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
                {
                    PRINT_NOW( "TMV_CUPD", 5000, 1 );
                }
            }
            else if (IS_THIS_PRINT_BEING_DISPLAYED( "TMV_CUPD", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
            {
                CLEAR_THIS_PRINT( "TMV_CUPD" );
            }
            if (sub_186260( l_U1829._fU524 ))
            {
                if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "TMV_CUPD", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
                {
                    PRINT_NOW( "TMV_WATOUT", 5000, 1 );
                }
            }
        }
    }
    return;
}

int sub_186260(unknown uParam0)
{
    if (sub_72160( uParam0 ))
    {
        if (NOT (IS_CAR_IN_WATER( sub_72195( uParam0 ) )))
        {
            if (NOT l_U2487)
            {
                l_U2488 = l_U2206 + 4500;
                l_U2487 = 1;
            }
            else if (l_U2488 < l_U2206)
            {
                return 1;
            }
        }
        else if (l_U2487)
        {
            l_U2487 = 0;
        }
    }
    return 0;
}

int sub_186557(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 1000;
        case 1: return 5000;
        case 2: return 10000;
        case 3: return 15000;
        case 4: return 20000;
        case 5: return 25000;
        case 6: return 30000;
    }
    return 1000;
}

void sub_186724()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (sub_186768( ref l_U1588[GET_PLAYER_ID()]._fU16, l_U1829._fU1160[GET_PLAYER_ID()], ref uVar2, ref uVar5 ))
    {
        sub_28479( GET_PLAYER_ID(), 0 );
        REMOVE_ALL_CHAR_WEAPONS( sub_28507( GET_PLAYER_ID() ) );
        REQUEST_COLLISION_AT_POSN( uVar2._fU0, uVar2._fU4, uVar2._fU8 );
        RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), uVar2, uVar5 );
        if (l_U1829._fU0 != 8)
        {
            sub_113388( uVar2, 1 );
        }
        if ((GET_PLAYER_TEAM( sub_5097() )) == 0)
        {
            GIVE_DELAYED_WEAPON_TO_CHAR( sub_5422(), 7, 500, 1 );
        }
        else
        {
            GIVE_DELAYED_WEAPON_TO_CHAR( sub_5422(), 13, 500, 1 );
        }
        GIVE_DELAYED_WEAPON_TO_CHAR( sub_5422(), 3, 1, 0 );
        sub_28479( GET_PLAYER_ID(), 1 );
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 100 );
        }
    }
    return;
}

int sub_186768(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3)
{
    LOAD_ALL_PATH_NODES( 1 );
    if ((uParam0^) == 0)
    {
        if (iParam1 > 0)
        {
            if (LOAD_ALL_PATH_NODES( 1 ))
            {
                if (l_U1321)
                {
                    GET_SPAWN_COORDINATES_FOR_CAR_NODE( iParam1, sub_76380( -1, 0 ), uParam2, uParam3 );
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

void sub_187151()
{
    int I;

    if ((l_U1829._fU0 == 8) AND (l_U1829._fU1380))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1588[I]._fU36)
            {
                sub_113720( I, 0 );
            }
        }
        l_U1588[GET_PLAYER_ID()]._fU20 = -5;
        SET_CHAR_VISIBLE( sub_5422(), 0 );
        sub_1990( 1 );
        l_U1588[GET_PLAYER_ID()]._fU48 = -1;
        l_U1588[GET_PLAYER_ID()]._fU8 = 0;
        l_U1588[GET_PLAYER_ID()]._fU28 = 0;
        for ( I = 0; I <= 15; I++ )
        {
            l_U2295[I] = 0;
        }
        if (l_U1829._fU1300 == l_U1829._fU1264)
        {
            sub_117375();
        }
        else
        {
            sub_117635();
        }
    }
    return;
}

void sub_187437()
{
    if (NOT l_U2183)
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if ((GET_PLAYER_TEAM( sub_5097() )) == 0)
            {
                PRINT_NOW( "TMRB_1", 7500, 1 );
            }
            else
            {
                PRINT_NOW( "TMRB_2", 7500, 1 );
            }
            l_U2183 = 1;
        }
    }
    return;
}

void sub_187554()
{
    int iVar2;

    if (NOT l_U1588[GET_PLAYER_ID()]._fU8)
    {
        if ((GET_PLAYER_TEAM( sub_5097() )) == 0)
        {
            if (sub_72160( l_U1829._fU524 ))
            {
                if (NOT (IS_CAR_UPSIDEDOWN( sub_72195( l_U1829._fU524 ) )))
                {
                    if (iVar2 == (sub_72195( l_U1829._fU524 )))
                    {
                        if (HAS_CONTROL_OF_NETWORK_ID( l_U1829._fU524 ))
                        {
                            FREEZE_CAR_POSITION( sub_72195( l_U1829._fU524 ), 0 );
                        }
                    }
                }
                if ((IS_CHAR_SITTING_IN_CAR( sub_5422(), sub_72195( l_U1829._fU524 ) )) AND (NOT (IS_CAR_UPSIDEDOWN( sub_72195( l_U1829._fU524 ) ))))
                {
                    if (HAS_CONTROL_OF_NETWORK_ID( l_U1829._fU524 ))
                    {
                        FREEZE_CAR_POSITION( sub_72195( l_U1829._fU524 ), 0 );
                    }
                    l_U1588[GET_PLAYER_ID()]._fU8 = 1;
                    l_U1588[GET_PLAYER_ID()]._fU32 = 1;
                    REMOVE_BLIP( l_U2205 );
                }
            }
        }
    }
    else if (sub_72160( l_U1829._fU524 ))
    {
        if (NOT (IS_CHAR_SITTING_IN_CAR( sub_5422(), sub_72195( l_U1829._fU524 ) )))
        {
            l_U1588[GET_PLAYER_ID()]._fU8 = 0;
        }
    }
    if (NOT (sub_72160( l_U1829._fU524 )))
    {
        REMOVE_BLIP( l_U2205 );
    }
    return;
}

void sub_187973()
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if ((GET_PLAYER_TEAM( sub_5097() )) == 0)
        {
            if ((NOT (DOES_BLIP_EXIST( l_U2205 ))) AND (NOT l_U1588[GET_PLAYER_ID()]._fU8))
            {
                if (sub_72160( l_U1829._fU524 ))
                {
                    ADD_BLIP_FOR_CAR( sub_72195( l_U1829._fU524 ), ref l_U2205 );
                    CHANGE_BLIP_SPRITE( l_U2205, 4 );
                    CHANGE_BLIP_SCALE( l_U2205, 0.78000000 );
                    CHANGE_BLIP_DISPLAY( l_U2205, 4 );
                    CHANGE_BLIP_COLOUR( l_U2205, 3 );
                }
            }
        }
    }
    return;
}

void sub_188164()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    for ( I = 0; I <= 15; I++ )
    {
        if (l_U1588[I]._fU36)
        {
            if (IS_NETWORK_PLAYER_ACTIVE( I ))
            {
                if ((GET_PLAYER_TEAM( sub_5097() )) == 0)
                {
                    if ((GET_PLAYER_TEAM( sub_3442( I ) )) == 0)
                    {
                        if (I != GET_PLAYER_ID())
                        {
                            if (NOT (DOES_BLIP_EXIST( l_U2188[I] )))
                            {
                                if (NOT (IS_CHAR_DEAD( sub_28507( I ) )))
                                {
                                    ADD_BLIP_FOR_CHAR( sub_28507( I ), ref l_U2188[I] );
                                    CHANGE_BLIP_SCALE( l_U2188[I], 0.90000000 );
                                    GET_TEAM_RGB_COLOUR( GET_PLAYER_TEAM( sub_3442( I ) ), ref uVar3, ref uVar4, ref uVar5 );
                                    sub_183586( l_U2188[I], uVar3, uVar4, uVar5 );
                                    CHANGE_BLIP_DISPLAY( l_U2188[I], 2 );
                                    CHANGE_BLIP_NAME_FROM_ASCII( l_U2188[I], GET_PLAYER_NAME( sub_3442( I ) ) );
                                }
                            }
                        }
                    }
                    else if (I != GET_PLAYER_ID())
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_28507( I ), sub_5422(), 150.00000000, 150.00000000, 100.00000000, 0 ))
                        {
                            if (NOT (DOES_BLIP_EXIST( l_U2188[I] )))
                            {
                                if (NOT (IS_CHAR_DEAD( sub_28507( I ) )))
                                {
                                    ADD_BLIP_FOR_CHAR( sub_28507( I ), ref l_U2188[I] );
                                    CHANGE_BLIP_SCALE( l_U2188[I], 0.90000000 );
                                    GET_TEAM_RGB_COLOUR( GET_PLAYER_TEAM( sub_3442( I ) ), ref uVar3, ref uVar4, ref uVar5 );
                                    sub_183586( l_U2188[I], uVar3, uVar4, uVar5 );
                                    CHANGE_BLIP_DISPLAY( l_U2188[I], 2 );
                                    CHANGE_BLIP_NAME_FROM_ASCII( l_U2188[I], GET_PLAYER_NAME( sub_3442( I ) ) );
                                }
                            }
                        }
                        else if (DOES_BLIP_EXIST( l_U2188[I] ))
                        {
                            REMOVE_BLIP( l_U2188[I] );
                        }
                    }
                }
                else if (I != GET_PLAYER_ID())
                {
                    if (NOT (DOES_BLIP_EXIST( l_U2188[I] )))
                    {
                        ADD_BLIP_FOR_CHAR( sub_28507( I ), ref l_U2188[I] );
                        CHANGE_BLIP_SCALE( l_U2188[I], 0.90000000 );
                        GET_TEAM_RGB_COLOUR( GET_PLAYER_TEAM( sub_3442( I ) ), ref uVar3, ref uVar4, ref uVar5 );
                        sub_183586( l_U2188[I], uVar3, uVar4, uVar5 );
                        CHANGE_BLIP_DISPLAY( l_U2188[I], 2 );
                        CHANGE_BLIP_NAME_FROM_ASCII( l_U2188[I], GET_PLAYER_NAME( sub_3442( I ) ) );
                    }
                }
            }
            if (IS_NETWORK_PLAYER_ACTIVE( I ))
            {
                if ((IS_CHAR_DEAD( sub_28507( I ) )) || (l_U1829._fU8[I]._fU20 > 0))
                {
                    if (DOES_BLIP_EXIST( l_U2188[I] ))
                    {
                        REMOVE_BLIP( l_U2188[I] );
                    }
                }
            }
        }
    }
    return;
}

void sub_189066()
{
    int I;
    int Result;

    for ( I = 0; I <= 15; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if ((GET_PLAYER_TEAM( sub_3442( I ) )) == 0)
            {
                if (l_U1588[I]._fU36)
                {
                    if (l_U1588[I]._fU8)
                    {
                        Result++;
                    }
                }
            }
        }
    }
    return Result;
}
