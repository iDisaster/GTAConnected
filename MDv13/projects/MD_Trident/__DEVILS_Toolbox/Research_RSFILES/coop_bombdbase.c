void main()
{
    int J;
    int I;

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
    l_U1437 = 0;
    l_U1439 = 0;
    l_U1456 = -1;
    l_U1458 = 0;
    l_U1461 = 0;
    l_U1462 = 0;
    l_U1463 = 0;
    l_U1464 = 0;
    l_U2654 = 1;
    l_U3307 = 0;
    l_U3318 = 0;
    l_U3320 = 0;
    l_U3322 = 0;
    l_U3376 = 0;
    l_U3380 = 0;
    l_U3389 = 1.00000000;
    l_U3391 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        while (true)
        {
            WAIT( 0 );
            PRINTSTRING( "Bomb the Base is waiting for Simon’s script to shutdown the session\n" );
        }
    }
    sub_443();
    REGISTER_SCRIPT_WITH_AUDIO( 1 );
    sub_3218();
    sub_4805( "MPKP2AU" );
    sub_4916( 0, 0, "", 0 );
    sub_4916( 1, 0, "PETROVIC", 0 );
    CLEAR_BRIEF();
    ADD_SCENARIO_BLOCKING_AREA( 638.46670000, -148.58470000, 5.73518500, 805.93850000, -435.41940000, 32.10667000 );
    SET_PLAYERS_DROP_MONEY_IN_NETWORK_GAME( 0 );
    SET_GLOBAL_INSTANCE_PRIORITY( 1 );
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        sub_5169( GET_PLAYER_ID(), 0 );
        SET_CHAR_MONEY( sub_5471(), 0 );
    }
    if (sub_5520())
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U1528._fU596 );
        sub_5584();
    }
    SET_MONEY_CARRIED_BY_ALL_NEW_PEDS( 0 );
    SET_SCENARIO_PED_DENSITY_MULTIPLIER( 0.00000000, 0.00000000 );
    sub_5635( 1 );
    l_U1863[GET_PLAYER_ID()]._fU20 = -1;
    if ((GET_PLAYER_ID() >= 0) AND (GET_PLAYER_ID() < 16))
    {
        ;
    }
    sub_5727( 0, 1, "_AUTOAIM", 2, 0 );
    sub_5727( 1, 6, "FRIENDLY_FIRE", 2, 0 );
    sub_5727( 2, 1, "DIFFICULTY", 3, 0 );
    sub_5727( 3, 1, "TRAFFIC", 4, 0 );
    sub_5727( 4, 1, "PEDESTRIANS", 4, 0 );
    if (N_604003528())
    {
        sub_5727( 5, 6, "NAME_OPT", 2, 0 );
    }
    else
    {
        sub_5727( 5, 6, "NAME_OPT_PS3", 2, 0 );
    }
    sub_5727( 6, 6, "RETICULE_OPT", 2, 0 );
    sub_5727( 7, 1, "VOICE_OPT", 2, 0 );
    sub_5727( 8, 1, "TIME_OF_DAY", 5, 0 );
    sub_5727( 9, 1, "WEATHER", 6, 0 );
    sub_5727( 10, 16, "DESCRIPTION", 2, 0 );
    sub_5727( 11, 15, "RADIO_OPT", 19, 0 );
    if (NOT NETWORK_IS_TVT())
    {
        sub_5727( 12, 17, "KICK_PLAYER", 16, GET_PLAYER_ID() );
    }
    sub_6137( 1, -1, 0, -1 );
    sub_6188();
    if (sub_5520())
    {
        l_U1528._fU508[0] = sub_6241( 419, NETWORK_GET_GAME_MODE() );
        l_U1528._fU508[1] = sub_6241( 422, NETWORK_GET_GAME_MODE() );
        l_U1528._fU508[2] = sub_6380( 24, 0 );
        l_U1528._fU508[3] = sub_6380( 1, 2 );
        l_U1528._fU508[4] = sub_6380( 2, 1 );
        l_U1528._fU508[5] = sub_6380( 3, 1 );
        l_U1528._fU508[6] = sub_6380( 4, 0 );
        l_U1528._fU508[7] = sub_6380( 5, 0 );
        l_U1528._fU508[8] = sub_6380( 9, 0 );
        l_U1528._fU508[9] = sub_6380( 10, 0 );
        l_U1528._fU508[10] = sub_6380( 11, 1 );
        sub_5584();
    }
    if ((GET_PLAYER_ID() >= 0) AND (GET_PLAYER_ID() < 16))
    {
        l_U1863[GET_PLAYER_ID()]._fU8 = 1;
        sub_6654();
        l_U1863[GET_PLAYER_ID()]._fU24 = -1;
    }
    SET_TIME_OF_DAY( 6, 0 );
    sub_6716( 1 );
    sub_6741( 1 );
    while (true)
    {
        WAIT( 0 );
        sub_6779();
        if (NOT IS_NETWORK_GAME_RUNNING())
        {
            if (NOT LOCAL_PLAYER_IS_READY_TO_START_PLAYING())
            {
                TERMINATE_THIS_SCRIPT();
            }
        }
        GET_NETWORK_TIMER( ref l_U2660 );
        RESERVE_NETWORK_MISSION_PEDS_FOR_HOST( 35 );
        RESERVE_NETWORK_MISSION_VEHICLES_FOR_HOST( 10 );
        RESERVE_NETWORK_MISSION_OBJECTS_FOR_HOST( 5 );
        sub_7378( 0, 0, 0 );
        if (sub_9236( l_U1528._fU1060[1] ))
        {
            if (l_U2605)
            {
                GET_CAR_HEALTH( sub_9261( l_U1528._fU1060[1] ), ref l_U2667 );
                if (l_U2667 > 2000)
                {
                    if (HAS_CONTROL_OF_NETWORK_ID( l_U1528._fU1060[1] ))
                    {
                        SET_CAR_HEALTH( sub_9261( l_U1528._fU1060[1] ), 2000 );
                    }
                }
            }
        }
        if (sub_5520())
        {
            sub_9516();
            sub_5584();
        }
        sub_42948( 16, ref l_U1863[0]._fU16, ref l_U1863[1]._fU16, ref l_U1863[2]._fU16, ref l_U1863[3]._fU16, ref l_U1863[4]._fU16, ref l_U1863[5]._fU16, ref l_U1863[6]._fU16, ref l_U1863[7]._fU16, ref l_U1863[8]._fU16, ref l_U1863[9]._fU16, ref l_U1863[10]._fU16, ref l_U1863[11]._fU16, ref l_U1863[12]._fU16, ref l_U1863[13]._fU16, ref l_U1863[14]._fU16, ref l_U1863[15]._fU16 );
        if (l_U1528._fU136 != 0)
        {
            if (l_U1528._fU140 == 0)
            {
                sub_44840( l_U1528._fU136 );
            }
        }
        if (((l_U1528._fU432 >= 4) || (l_U1528._fU796)) || (l_U2649))
        {
            if (l_U2659 > 3)
            {
                if (sub_14137( GET_PLAYER_ID() ))
                {
                    sub_45128();
                }
            }
        }
        if ((l_U2659 < 3) AND (l_U1528._fU144 > 0))
        {
            if (l_U2660 > l_U1528._fU144)
            {
                l_U2659 = 3;
            }
        }
        if ((IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() )) || (LOCAL_PLAYER_IS_READY_TO_START_PLAYING()))
        {
            if (LOCAL_PLAYER_IS_READY_TO_START_PLAYING())
            {
                LAUNCH_LOCAL_PLAYER_IN_NETWORK_GAME();
            }
            if ((l_U2659 > 3) AND (l_U2659 < 10))
            {
                sub_80732();
                sub_83984();
                if (NOT l_U2647)
                {
                    if ((sub_29532() < 2) || (l_U1863[GET_PLAYER_ID()]._fU28 == 2))
                    {
                        sub_84133();
                    }
                }
            }
            if ((l_U2659 > 3) AND (l_U2659 < 11))
            {
                sub_85007();
            }
            if (l_U2659 < 11)
            {
                sub_86901();
            }
            switch (l_U2659)
            {
                case 0:
                if (sub_19997())
                {
                    if (l_U2547 == nil)
                    {
                        CREATE_OBJECT( 1185749008, 718.02100000, -254.87400000, 10.57200000, ref l_U2547, 0 );
                        SET_OBJECT_HEADING( l_U2547, 155.06140000 );
                        CREATE_OBJECT( 1185749008, 709.17100000, -250.72400000, 10.57200000, ref l_U2548, 0 );
                        SET_OBJECT_HEADING( l_U2548, 155.06140000 );
                    }
                    if (LOCAL_PLAYER_IS_READY_TO_START_PLAYING())
                    {
                        LAUNCH_LOCAL_PLAYER_IN_NETWORK_GAME();
                    }
                    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
                    {
                        if (((sub_87275()) || (l_U1528._fU432 > 1)) || (g_U26675))
                        {
                            sub_48383( 500 );
                            l_U2659 = 1;
                        }
                        else
                        {
                            sub_87372();
                        }
                    }
                }
                break;
                case 1:
                if (IS_SCREEN_FADED_OUT())
                {
                    sub_89849();
                    l_U2659 = 3;
                }
                break;
                case 3:
                if (sub_19997())
                {
                    if (l_U1528._fU432 <= 1)
                    {
                        CLEAR_PRINTS();
                        sub_90533();
                        sub_117699( 0, l_U1528._fU508[0] == 1, 0, 0 );
                        sub_117717( 1 );
                    }
                    else if (l_U1528._fU144 > l_U2660)
                    {
                        sub_118794();
                        sub_90533();
                        DISABLE_PAUSE_MENU( 0 );
                        CHANGE_PLAYER_MODEL( sub_8714(), 1543404628 );
                        l_U2511 = sub_5471();
                        sub_118924( ref l_U2511, l_U1528._fU360[GET_PLAYER_ID()] );
                        SET_ANIM_GROUP_FOR_CHAR( sub_5471(), "Move_player" );
                        SET_VOICE_ID_FROM_HEAD_COMPONENT( sub_5471(), 0, 1 );
                        GIVE_WEAPON_TO_CHAR( sub_5471(), 3, 0, 0 );
                        GIVE_WEAPON_TO_CHAR( sub_5471(), 4, 5, 0 );
                        GIVE_WEAPON_TO_CHAR( sub_5471(), 12, 2000, 0 );
                        GIVE_WEAPON_TO_CHAR( sub_5471(), 16, 500, 0 );
                        GIVE_WEAPON_TO_CHAR( sub_5471(), 14, 1500, 1 );
                        sub_5169( GET_PLAYER_ID(), 1 );
                        PRINT_NOW( "COOP_BDB_NGT_01", 5000, 1 );
                        sub_4916( 0, sub_5471(), "", 0 );
                        sub_119248();
                        sub_120544( ref l_U1528._fU508 );
                        l_U2659 = 4;
                    }
                    else
                    {
                        sub_86959( GET_PLAYER_ID(), 1 );
                        l_U1863[GET_PLAYER_ID()]._fU100 = 1;
                        REQUEST_COLLISION_AT_POSN( 994.28930000, -793.26730000, 182.55050000 );
                        RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), 994.28930000, -793.26730000, 182.55050000, 0.00000000 );
                        FORCE_LOADING_SCREEN( 1 );
                        sub_87600( 994.28930000, -793.26730000, 182.55050000 );
                        FORCE_LOADING_SCREEN( 0 );
                        sub_45641();
                        l_U1863[GET_PLAYER_ID()]._fU12 = -5;
                        l_U1863[GET_PLAYER_ID()]._fU8 = 1;
                        if (IS_SCREEN_FADED_OUT())
                        {
                            if (NOT IS_SCREEN_FADING_IN())
                            {
                                sub_47971( 500 );
                            }
                        }
                        l_U2657 = 1;
                        l_U2659 = 9;
                    }
                }
                break;
                case 4:
                if (IS_SCREEN_FADED_IN())
                {
                    if (sub_29532() < 3)
                    {
                        SET_WANTED_MULTIPLIER( 0.50000000 );
                    }
                    else
                    {
                        SET_WANTED_MULTIPLIER( 1.00000000 );
                    }
                    if ((sub_9236( l_U1528._fU1076[0] )) AND (sub_9236( l_U1528._fU1076[1] )))
                    {
                        if (sub_9236( l_U1528._fU1060[1] ))
                        {
                            if (NOT (DOES_BLIP_EXIST( l_U2577[1] )))
                            {
                                ADD_BLIP_FOR_CAR( sub_9261( l_U1528._fU1060[1] ), ref l_U2577[1] );
                                CHANGE_BLIP_SPRITE( l_U2577[1], 4 );
                                CHANGE_BLIP_SCALE( l_U2577[1], 0.78000000 );
                                CHANGE_BLIP_PRIORITY( l_U2577[1], 1 );
                                CHANGE_BLIP_COLOUR( l_U2577[1], 3 );
                            }
                        }
                        CLEAR_PRINTS();
                        PRINT_NOW( "COOP_BDB_NGT_01", 4000, 1 );
                        l_U1863[GET_PLAYER_ID()]._fU0 = 1;
                        l_U2659 = 5;
                    }
                }
                else if (l_U1528._fU804)
                {
                    if (NOT IS_SCREEN_FADING_IN())
                    {
                        sub_118794();
                        sub_47971( 500 );
                    }
                }
                else
                {
                    sub_118794();
                }
                break;
                case 5:
                if (NOT l_U2583)
                {
                    sub_121987();
                    l_U2583 = 1;
                }
                if (NOT l_U3377)
                {
                    for ( J = 0; J < 16; J++ )
                    {
                        if (sub_14137( J ))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_5218( J ), sub_9261( l_U1528._fU1060[1] ), 50.00000000, 50.00000000, 50.00000000, 0 ))
                            {
                                for ( I = 0; I < 3; I++ )
                                {
                                    if (sub_9236( l_U1528._fU1060[I] ))
                                    {
                                        if (HAS_CONTROL_OF_NETWORK_ID( l_U1528._fU1060[I] ))
                                        {
                                            SET_LOAD_COLLISION_FOR_CAR_FLAG( sub_9261( l_U1528._fU1060[I] ), 0 );
                                        }
                                    }
                                }
                                l_U3377 = 1;
                            }
                        }
                    }
                }
                if (l_U1863[GET_PLAYER_ID()]._fU36)
                {
                    if (sub_125389( l_U1528._fU1056 ))
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U2573 )))
                        {
                            ADD_BLIP_FOR_COORD( 707.82250000, -265.34770000, 9.87860000, ref l_U2573 );
                            CHANGE_BLIP_SPRITE( l_U2573, 4 );
                            CHANGE_BLIP_SCALE( l_U2573, 0.78000000 );
                            CHANGE_BLIP_PRIORITY( l_U2573, 1 );
                            CHANGE_BLIP_COLOUR( l_U2573, 5 );
                            SET_ROUTE( l_U2581, 0 );
                            SET_ROUTE( l_U2573, 1 );
                            PRINT_NOW( "COOP_BDB_CD_01", 5000, 1 );
                        }
                        l_U2659 = 6;
                    }
                    else if (sub_125615() < sub_29532())
                    {
                        if (sub_9236( l_U1528._fU1056 ))
                        {
                            if (IS_CHAR_IN_CAR( sub_5471(), sub_9261( l_U1528._fU1056 ) ))
                            {
                                l_U2625[GET_PLAYER_ID()] = 1;
                                l_U2666 = sub_125615();
                                l_U2659 = 6;
                            }
                            else
                            {
                                l_U2659 = 6;
                            }
                        }
                    }
                    else
                    {
                        l_U2666 = sub_125615();
                        if (NOT (DOES_BLIP_EXIST( l_U2573 )))
                        {
                            ADD_BLIP_FOR_COORD( 707.82250000, -265.34770000, 9.87860000, ref l_U2573 );
                            CHANGE_BLIP_SPRITE( l_U2573, 4 );
                            CHANGE_BLIP_SCALE( l_U2573, 0.78000000 );
                            CHANGE_BLIP_PRIORITY( l_U2573, 1 );
                            CHANGE_BLIP_COLOUR( l_U2573, 5 );
                            SET_ROUTE( l_U2581, 0 );
                            SET_ROUTE( l_U2573, 1 );
                        }
                        l_U2659 = 7;
                    }
                }
                else
                {
                    sub_126008();
                }
                break;
                case 6:
                if (sub_9236( l_U1528._fU1056 ))
                {
                    if (sub_125615() > l_U2666)
                    {
                        if (l_U2625[GET_PLAYER_ID()])
                        {
                            if (sub_125615() == sub_29532())
                            {
                                l_U2666 = sub_125615();
                                if (NOT (DOES_BLIP_EXIST( l_U2573 )))
                                {
                                    ADD_BLIP_FOR_COORD( 707.82250000, -265.34770000, 9.87860000, ref l_U2573 );
                                    CHANGE_BLIP_SPRITE( l_U2573, 4 );
                                    CHANGE_BLIP_SCALE( l_U2573, 0.78000000 );
                                    CHANGE_BLIP_PRIORITY( l_U2573, 1 );
                                    CHANGE_BLIP_COLOUR( l_U2573, 5 );
                                    SET_ROUTE( l_U2581, 0 );
                                    SET_ROUTE( l_U2573, 1 );
                                }
                                l_U2659 = 7;
                            }
                        }
                    }
                }
                if ((sub_130340( sub_5471() )) AND (sub_144195( 707.82250000, -265.34770000, 9.87860000, 150.00000000, 0 )))
                {
                    l_U2659 = 7;
                }
                if (sub_144195( 707.82250000, -265.34770000, 9.87860000, 100.00000000, 0 ))
                {
                    l_U2659 = 7;
                }
                break;
                case 7:
                if (sub_130340( sub_5471() ))
                {
                    if (sub_144195( 707.82250000, -265.34770000, 9.87860000, 150.00000000, 0 ))
                    {
                        if (DOES_BLIP_EXIST( l_U2573 ))
                        {
                            SET_ROUTE( l_U2573, 0 );
                            REMOVE_BLIP( l_U2573 );
                            l_U1863[GET_PLAYER_ID()]._fU0 = 3;
                            CLEAR_PRINTS();
                            PRINT_NOW( "COOP_BDB_GT_03", 5000, 1 );
                            PRINT( "COOP_BDB_GT_04", 5000, 1 );
                            PRINT( "COOP_BDB_GT_06", 6000, 1 );
                            l_U2659 = 8;
                        }
                    }
                    else if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
                    {
                        if (sub_9236( l_U1528._fU1056 ))
                        {
                            SET_CAR_COORDINATES( sub_9261( l_U1528._fU1056 ), 801.90940000, -118.87530000, 6.52960000 );
                        }
                    }
                }
                else if (sub_144195( 707.82250000, -265.34770000, 9.87860000, 100.00000000, 0 ))
                {
                    if (DOES_BLIP_EXIST( l_U2573 ))
                    {
                        SET_ROUTE( l_U2573, 0 );
                        REMOVE_BLIP( l_U2573 );
                        l_U1863[GET_PLAYER_ID()]._fU0 = 3;
                        CLEAR_PRINTS();
                        PRINT_NOW( "COOP_BDB_GT_03", 5000, 1 );
                        PRINT( "COOP_BDB_GT_04", 5000, 1 );
                        PRINT( "COOP_BDB_GT_06", 6000, 1 );
                        l_U2659 = 8;
                    }
                }
                else if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
                {
                    if (sub_9236( l_U1528._fU1056 ))
                    {
                        SET_CAR_COORDINATES( sub_9261( l_U1528._fU1056 ), 801.90940000, -118.87530000, 6.52960000 );
                    }
                };;;
                break;
                case 8:
                sub_145218();
                sub_145573();
                sub_149308();
                sub_151450();
                if (l_U1528._fU140 > 0)
                {
                    if (l_U2646)
                    {
                        if (IS_SCREEN_FADED_OUT())
                        {
                            if (IS_CHAR_DEAD( sub_5471() ))
                            {
                                N_312012851( sub_5471(), ref l_U2984._fU0, ref l_U2984._fU4, ref l_U2984._fU8 );
                                GET_CLOSEST_CAR_NODE( l_U2984._fU0, l_U2984._fU4, l_U2984._fU8, ref l_U2990._fU0, ref l_U2990._fU4, ref l_U2990._fU8 );
                                REQUEST_COLLISION_AT_POSN( l_U2990._fU0, l_U2990._fU4, l_U2990._fU8 );
                                RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), l_U2990, 0.00000000 );
                            }
                            if (l_U2662 == 0)
                            {
                                sub_47971( 500 );
                                l_U2662 = 1;
                            }
                            sub_45641();
                            sub_46975();
                            sub_47971( 500 );
                            l_U1863[GET_PLAYER_ID()]._fU12 = -5;
                            l_U1863[GET_PLAYER_ID()]._fU8 = 1;
                            l_U2659 = 9;
                            l_U2673 = l_U2660 + 3500;
                        }
                        else if (NOT IS_SCREEN_FADING_OUT())
                        {
                            sub_48383( 500 );
                        }
                    }
                    else if (l_U1863[GET_PLAYER_ID()]._fU28 == 0)
                    {
                        l_U1863[GET_PLAYER_ID()]._fU28 = 4;
                    }
                    if (NOT l_U1863[GET_PLAYER_ID()]._fU40)
                    {
                        l_U1863[GET_PLAYER_ID()]._fU40 = 1;
                    }
                    sub_152346();;
                    STORE_WANTED_LEVEL( sub_8714(), ref l_U2665 );
                    if (l_U2665 > 0)
                    {
                        ALTER_WANTED_LEVEL( sub_8714(), 0 );
                        APPLY_WANTED_LEVEL_CHANGE_NOW( sub_8714() );
                    }
                }
                else if (l_U1528._fU616 > 0)
                {
                    sub_155555();
                }
                if (IS_KEYBOARD_KEY_PRESSED( 37 ))
                {
                    l_U1528._fU624[0] = 1;
                    l_U1528._fU636 = 1;
                }
                break;
                case 9:
                if (l_U2653)
                {
                    sub_45128();
                }
                else if (sub_155888())
                {
                    l_U2653 = 1;
                }
                else
                {
                    sub_156167();
                }
                sub_46975();
                sub_156593( l_U1528._fU772 );
                if (IS_SCREEN_FADED_OUT())
                {
                    sub_120043( 1 );
                }
                else
                {
                    sub_120043( 0 );
                }
                if (l_U1528._fU772)
                {
                    if (((l_U2987._fU0 == 0.00000000) AND (l_U2987._fU4 == 0.00000000)) AND (l_U2987._fU8 == 0.00000000))
                    {
                        l_U2987 = {sub_45965( ref l_U2546 )};
                        sub_156727( l_U2987 );
                    }
                }
                if (sub_156445())
                {
                    sub_79220( 0 );
                }
                else
                {
                    sub_48462( 0 );
                    sub_156782();
                }
                break;
                case 10:
                if (l_U1863[GET_PLAYER_ID()]._fU116)
                {
                    l_U1863[GET_PLAYER_ID()]._fU116 = 0;
                }
                if (NOT l_U1863[GET_PLAYER_ID()]._fU104)
                {
                    l_U1863[GET_PLAYER_ID()]._fU104 = 1;
                }
                if (sub_79220( 1 ))
                {
                    sub_48383( 0 );
                    l_U2659 = 11;
                }
                break;
                case 11:
                if (l_U1863[GET_PLAYER_ID()]._fU100)
                {
                    l_U1863[GET_PLAYER_ID()]._fU100 = 0;
                }
                if (((NETWORK_IS_TVT()) AND (sub_49946())) || (NETWORK_IS_RENDEZVOUS()))
                {
                    sub_79220( 0 );
                    SET_WIDESCREEN_FORMAT( 2 );
                    sub_50159( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                    sub_51630( "RETURN_PARTY", sub_61486( 23 ), sub_61519( 23 ), sub_61486( 24 ), sub_61519( 24 ), 255, 255, 255, 255, 2 );
                    if (NETWORK_IS_RENDEZVOUS_HOST())
                    {
                        sub_157137();
                    }
                }
                else if (DOES_CAM_EXIST( l_U2546 ))
                {
                    SET_CAM_ACTIVE( l_U2546, 0 );
                    SET_CAM_PROPAGATE( l_U2546, 0 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    DESTROY_CAM( l_U2546 );
                }
                sub_90533();
                sub_117717( 1 );;
                break;
                case 12:
                if (NOT l_U1863[GET_PLAYER_ID()]._fU108)
                {
                    l_U1863[GET_PLAYER_ID()]._fU108 = 1;
                }
                if (l_U1863[GET_PLAYER_ID()]._fU116)
                {
                    l_U1863[GET_PLAYER_ID()]._fU116 = 0;
                }
                if (sub_48462( 1 ))
                {
                    l_U2659 = 11;
                }
                break;
            }
            if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
            {
                if (IS_CHAR_IN_ANGLED_AREA_3D( sub_5471(), 686.10730000, -344.82320000, 29.37320000, 761.10040000, -179.67810000, -10.50180000, 31.62500000, 0 ))
                {
                    STORE_WANTED_LEVEL( sub_8714(), ref l_U2665 );
                    if (l_U2665 > 0)
                    {
                        ALTER_WANTED_LEVEL( sub_8714(), 0 );
                        APPLY_WANTED_LEVEL_CHANGE_NOW( sub_8714() );
                    }
                }
            }
        }
        if (l_U2659 > 3)
        {
            if (l_U2659 < 9)
            {
                sub_157574();
                sub_117717( 0 );
            }
        }
        if ((GET_PLAYER_ID() >= 0) AND (GET_PLAYER_ID() < 16))
        {
            if ((l_U1528._fU432 >= 2) AND (l_U2659 > 3))
            {
                if (NOT l_U1863[GET_PLAYER_ID()]._fU40)
                {
                    if (NOT l_U1863[GET_PLAYER_ID()]._fU112)
                    {
                        sub_167257();
                    }
                    else if (IS_CHAR_DEAD( sub_5471() ))
                    {
                        if (IS_SCREEN_FADED_OUT())
                        {
                            N_312012851( sub_5471(), ref l_U2984._fU0, ref l_U2984._fU4, ref l_U2984._fU8 );
                            GET_CLOSEST_CAR_NODE( l_U2984._fU0, l_U2984._fU4, l_U2984._fU8, ref l_U2990._fU0, ref l_U2990._fU4, ref l_U2990._fU8 );
                            REQUEST_COLLISION_AT_POSN( l_U2990._fU0, l_U2990._fU4, l_U2990._fU8 );
                            RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), l_U2990, 0.00000000 );
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_443()
{
    int I;

    SET_MISSION_FLAG( 1 );
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    REGISTER_HOST_BROADCAST_VARIABLES( ref l_U1528, 335, -1 );
    REGISTER_CLIENT_BROADCAST_VARIABLES( ref l_U1863, 641, -1 );
    GET_MAX_WANTED_LEVEL( ref l_U2665 );
    COPY_COMBAT_DECISION_MAKER( 65546, ref l_U2550 );
    N_521945732( 1, ref l_U2549 );
    N_521945732( 0, ref l_U2553 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U2552 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U2551 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U2554 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U2555 );
    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U2550, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2550, 5 );
    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U2552, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2552, 50 );
    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U2551, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2551, 5 );
    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U2554, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2554, 10 );
    SET_DECISION_MAKER_ATTRIBUTE_FIRE_RATE( l_U2554, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U2554, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U2555, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2555, 5 );
    SET_DECISION_MAKER_ATTRIBUTE_FIRE_RATE( l_U2555, 2 );
    SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U2555, 1 );
    SET_RELATIONSHIP( 5, 25, 47 );
    SET_RELATIONSHIP( 1, 25, 3 );
    SET_RELATIONSHIP( 1, 3, 25 );
    SET_RELATIONSHIP( 1, 24, 3 );
    SET_RELATIONSHIP( 1, 3, 24 );
    BEGIN_CAM_COMMANDS( ref l_U2658 );
    REQUEST_INTERIOR_MODELS( -986835254, "cargbridgerm" );
    REQUEST_INTERIOR_MODELS( 1093739381, "carholdrm" );
    l_U2677[0] = {691.77590000, -299.21320000, 9.87200000};
    l_U2677[1] = {692.77620000, -297.76160000, 9.87330000};
    l_U2677[2] = {693.51710000, -296.13310000, 9.87430000};
    l_U2677[3] = {694.11830000, -294.56520000, 9.87450000};
    l_U2677[4] = {691.77590000, -299.21320000, 9.87200000};
    l_U2677[5] = {692.77620000, -297.76160000, 9.87330000};
    l_U2677[6] = {693.51710000, -296.13310000, 9.87430000};
    l_U2677[7] = {694.11830000, -294.56520000, 9.87450000};
    l_U2677[8] = {691.77590000, -299.21320000, 9.87200000};
    l_U2677[9] = {692.77620000, -297.76160000, 9.87330000};
    l_U2677[10] = {693.51710000, -296.13310000, 9.87430000};
    l_U2677[11] = {694.11830000, -294.56520000, 9.87450000};
    l_U2677[12] = {691.77590000, -299.21320000, 9.87200000};
    l_U2677[13] = {692.77620000, -297.76160000, 9.87330000};
    l_U2677[14] = {693.51710000, -296.13310000, 9.87430000};
    l_U2677[15] = {694.11830000, -294.56520000, 9.87450000};
    l_U2726[0] = {-470.56740000, 179.24190000, 8.85740000};
    l_U2726[1] = {-471.99850000, 179.20820000, 8.85740000};
    l_U2726[2] = {-473.77010000, 179.16510000, 8.85740000};
    l_U2726[3] = {-475.70290000, 179.11950000, 8.85740000};
    l_U2726[4] = {-475.74470000, 180.20010000, 8.85740000};
    l_U2726[5] = {-474.75540000, 180.23760000, 8.85740000};
    l_U2726[6] = {-473.79640000, 180.27400000, 8.85740000};
    l_U2726[7] = {-471.84880000, 180.34790000, 8.85740000};
    l_U2726[8] = {-470.68620000, 182.02580000, 8.85740000};
    l_U2726[9] = {-472.45370000, 181.98410000, 8.85740000};
    l_U2726[10] = {-474.55010000, 181.93460000, 8.85740000};
    l_U2726[11] = {-476.76810000, 181.88240000, 8.85740000};
    l_U2726[12] = {-476.82420000, 183.33280000, 8.85740000};
    l_U2726[13] = {-475.08040000, 183.39900000, 8.85740000};
    l_U2726[14] = {-472.88500000, 183.48240000, 8.85740000};
    l_U2726[15] = {-470.08300000, 183.58870000, 8.85740000};
    l_U3162[0] = {753.94870000, -311.89680000, 5.81340000};
    l_U3162[1] = {753.36190000, -316.78710000, 5.81300000};
    l_U2775[0] = {688.97690000, -305.39620000, 22.89240000};
    l_U2775[1] = {719.45940000, -252.85970000, 3.25550000};
    l_U3155[0] = {688.76970000, -306.02870000, 21.88790000};
    l_U3155[1] = {719.45940000, -252.85970000, 2.25550000};
    l_U3169[0] = 340.70550000;
    l_U3169[1] = 339.62500000;
    l_U2993[0] = {688.32220000, -309.34790000, 14.98890000};
    l_U2993[1] = {686.29360000, -310.07300000, 15.02270000};
    l_U2993[2] = {690.94380000, -305.96650000, 22.88720000};
    l_U2993[3] = {685.34340000, -303.42160000, 22.88730000};
    l_U3006[0] = {700.14360000, -307.76740000, 15.04460000};
    l_U3006[1] = {680.62880000, -298.86320000, 15.04460000};
    l_U3006[2] = {698.92440000, -307.03920000, 22.88250000};
    l_U3006[3] = {682.34980000, -299.44090000, 22.88320000};
    l_U3172[0] = 336.95320000;
    l_U3172[1] = 334.94080000;
    l_U3172[2] = 241.73230000;
    l_U3172[3] = 70.81160000;
    l_U3019 = {692.13930000, -306.92990000, 9.04000000};
    l_U3195 = 281.24060000;
    l_U2782 = {684.06020000, -317.03060000, 7.94000000};
    l_U2785 = {679.26120000, -319.81960000, 13.55140000};
    l_U2978 = {685.74380000, -308.52880000, 14.02610000};
    l_U2981 = {690.27010000, -307.96950000, 16.03600000};
    l_U2788 = {698.37780000, -307.48050000, 13.36270000};
    l_U2791 = {699.37730000, -310.65390000, 15.36270000};
    l_U2794 = {681.92970000, -299.93790000, 13.36270000};
    l_U2797 = {678.95170000, -301.14150000, 15.36270000};
    l_U2886[0] = {700.36280000, -307.70260000, 9.87010000};
    l_U2886[1] = {706.87200000, -294.22290000, 9.87360000};
    l_U2886[2] = {714.61410000, -278.21990000, 9.87600000};
    l_U2886[3] = {720.52110000, -262.12340000, 9.87280000};
    l_U2886[4] = {730.86140000, -238.62660000, 9.87760000};
    l_U2886[5] = {677.18710000, -301.40800000, 9.86970000};
    l_U2886[6] = {684.83440000, -285.59480000, 9.87410000};
    l_U2886[7] = {692.33230000, -269.41530000, 9.87660000};
    l_U2886[8] = {702.73440000, -250.61790000, 9.87010000};
    l_U2886[9] = {712.76590000, -228.29330000, 9.88020000};
    l_U2886[10] = {691.33290000, -297.94710000, 11.96850000};
    l_U2886[11] = {705.75850000, -272.00310000, 11.96860000};
    l_U2886[12] = {717.74350000, -244.05420000, 11.96840000};
    l_U2886[13] = {730.71460000, -216.90970000, 11.96850000};
    sub_2693( "PLAYER", 1, 13, -1 );
    sub_2693( "KILLS", 2, 11, 3 );
    sub_2693( "DEATHS", 2, 6, 4 );
    sub_2693( "TMKILLS", 2, 29, 6 );
    sub_2693( "CASH", 6, 16, 20 );
    sub_2693( "TIME", 4, 31, 22 );
    l_U1863[GET_PLAYER_ID()]._fU136._fU0 = 1;
    l_U1863[GET_PLAYER_ID()]._fU136._fU4 = 1;
    CLEAR_AREA( l_U2677[GET_PLAYER_ID()]._fU0, l_U2677[GET_PLAYER_ID()]._fU4, l_U2677[GET_PLAYER_ID()]._fU8, 500.00000000, 1 );
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        l_U1863[GET_PLAYER_ID()]._fU0 = 0;
    }
    for ( I = 0; I <= 15; I++ )
    {
        sub_3059( ref l_U1863[I]._fU16 );
    }
    return;
}

void sub_2693(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_3059(unknown uParam0)
{
    NETWORK_SET_TALKER_FOCUS( -1 );
    sub_3080( uParam0, 31, 0 );
    return;
}

void sub_3080(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U18._fU636 = uParam1;
    g_U18._fU632 = uParam2;
    sub_3111( uParam0, uParam1 );
    sub_3145( uParam0, uParam2 );
    return;
}

void sub_3111(unknown uParam0, unknown uParam1)
{
    SET_BITS_IN_RANGE( uParam0, 0, 15, uParam1 );
    return;
}

void sub_3145(unknown uParam0, unknown uParam1)
{
    SET_BITS_IN_RANGE( uParam0, 16, 31, uParam1 );
    return;
}

int sub_3218()
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

void sub_4805(unknown uParam0)
{
    StrCopy( ref l_U0._fU0, uParam0, 16 );
    sub_4822();
    return;
}

void sub_4822()
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

void sub_4916(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U0._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U0._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4996( "\n PED NUMBER ", uParam0 );
    sub_5036( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4996(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5036(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5169(unknown uParam0, boolean bParam1)
{
    SET_PLAYER_CONTROL_FOR_NETWORK( sub_5180( uParam0 ), bParam1, 0 );
    SET_CHAR_VISIBLE( sub_5218( uParam0 ), bParam1 );
    if (bParam1)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_5218( uParam0 ) )))
        {
            SET_CHAR_COLLISION( sub_5218( uParam0 ), 1 );
        }
        FREEZE_CHAR_POSITION( sub_5218( uParam0 ), 0 );
        SET_CHAR_NEVER_TARGETTED( sub_5218( uParam0 ), 0 );
        SET_PLAYER_INVINCIBLE( sub_5180( uParam0 ), 0 );
    }
    else
    {
        SET_CHAR_COLLISION( sub_5218( uParam0 ), 0 );
        FREEZE_CHAR_POSITION( sub_5218( uParam0 ), 1 );
        SET_CHAR_NEVER_TARGETTED( sub_5218( uParam0 ), 1 );
        SET_PLAYER_INVINCIBLE( sub_5180( uParam0 ), 1 );
        REMOVE_PTFX_FROM_PED( sub_5218( uParam0 ) );
        if (NOT (IS_CHAR_FATALLY_INJURED( sub_5218( uParam0 ) )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_5218( uParam0 ) );
        }
    }
    return;
}

void sub_5180(unknown uParam0)
{
    return CONVERT_INT_TO_PLAYERINDEX( uParam0 );
}

void sub_5218(unknown uParam0)
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( uParam0 ), ref Result );
    return Result;
}

void sub_5471()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_5520()
{
    if (IS_THIS_MACHINE_THE_SERVER())
    {
        SET_THIS_MACHINE_RUNNING_SERVER_SCRIPT( 1 );
        return 1;
    }
    return 0;
}

void sub_5584()
{
    SET_THIS_MACHINE_RUNNING_SERVER_SCRIPT( 0 );
    return;
}

void sub_5635(unknown uParam0)
{
    g_U18._fU668 = -1;
    g_U18._fU672 = uParam0;
    return;
}

void sub_5727(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref l_U1087[uParam0]._fU0, uParam2, 16 );
    l_U1087[uParam0]._fU16 = uParam1;
    l_U1087[uParam0]._fU24 = uParam3;
    l_U1087[uParam0]._fU20 = uParam4;
    l_U1087[uParam0]._fU28 = uParam4;
    return;
}

void sub_6137(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U1293 = uParam0;
    l_U1295 = uParam1;
    l_U1292 = uParam2;
    l_U1294 = uParam3;
    l_U1296 = 1;
    return;
}

void sub_6188()
{
    RESTORE_SCRIPT_ARRAY_FROM_SCRATCHPAD( ref l_U1467, 61, 2, 2 );
    return;
}

void sub_6241(unknown uParam0, unknown uParam1)
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

void sub_6380(unknown uParam0, unknown Result)
{
    if (IS_BIT_SET( l_U1467[uParam0], 0 ))
    {
        return GET_BITS_IN_RANGE( l_U1467[uParam0], 1, 31 );
    }
    return Result;
}

void sub_6654()
{
    g_U18._fU660 = -1;
    g_U18._fU664 = 1;
    return;
}

void sub_6716(unknown uParam0)
{
    l_U1445 = uParam0;
    return;
}

void sub_6741(unknown uParam0)
{
    l_U1351 = uParam0;
    return;
}

void sub_6779()
{
    if (l_U3383)
    {
        if (sub_6801( 351 ))
        {
            if (l_U3385)
            {
                if ((l_U3315 == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
                {
                    l_U3315 = sub_6908( -1660661558, -710.76280000, 356.97530000, 25.06270000, 270.00000000 );
                    FREEZE_CAR_POSITION( l_U3315, 1 );
                }
            }
            if (NOT l_U3386)
            {
                if (l_U3384)
                {
                    if (NOT (IS_CAR_DEAD( l_U3315 )))
                    {
                        if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U3315 )))
                        {
                            FREEZE_CAR_POSITION( l_U3315, 0 );
                            START_PLAYBACK_RECORDED_CAR( l_U3315, 351 );
                            l_U3386 = 1;
                        }
                    }
                }
            }
            else if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U3315 )))
            {
                l_U3384 = 0;
            }
            if (l_U3387)
            {
                if (NOT (IS_CAR_DEAD( l_U3315 )))
                {
                    SET_CAR_COORDINATES( l_U3315, -710.76280000, 356.97530000, 25.06270000 );
                    SET_CAR_HEADING( l_U3315, 270.00000000 );
                    FREEZE_CAR_POSITION( l_U3315, 1 );
                }
            }
            if ((NOT l_U3384) AND (l_U3387))
            {
                l_U3386 = 0;
                l_U3387 = 0;
            }
            if (l_U3388)
            {
                if (NOT (IS_CAR_DEAD( l_U3315 )))
                {
                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U3315 ))
                    {
                        SET_PLAYBACK_SPEED( l_U3315, l_U3389 );
                    }
                }
            }
        }
    }
    return;
}

int sub_6801(unknown uParam0)
{
    REQUEST_CAR_RECORDING( uParam0 );
    if (HAS_CAR_RECORDING_BEEN_LOADED( uParam0 ))
    {
        return 1;
    }
    return 0;
}

void sub_6908(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown Result;

    CREATE_CAR( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, ref Result, 1 );
    SET_CAR_HEADING( Result, uParam4 );
    SET_CAR_COORDINATES( Result, uParam1._fU0, uParam1._fU4, uParam1._fU8 );
    return Result;
}

void sub_7378(int iParam0, boolean bParam1, unknown uParam2)
{
    int iVar5;
    unknown uVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    uVar11 = sub_7387();
    if (IS_NETWORK_GAME_RUNNING())
    {
        GET_NETWORK_TIMER( ref iVar5 );
        if (NETWORK_IS_SESSION_STARTED())
        {
            if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
            {
                if (l_U1459)
                {
                    l_U1459 = 0;
                }
                switch (uVar11)
                {
                    case 1:
                    if (NOT sub_7658())
                    {
                        if (iParam0 != l_U1456)
                        {
                            sub_7727( iParam0 );
                            iParam0 = l_U1456;
                        }
                    }
                    else if (NOT l_U1458)
                    {
                        l_U1457 = iVar5 + 25000;
                        l_U1458 = 1;
                        sub_7727( iParam0 );
                    }
                    else if (l_U1457 < iVar5)
                    {
                        l_U1458 = 0;
                    };;;
                    break;
                    case 2:
                    if (NOT l_U1458)
                    {
                        l_U1457 = iVar5 + 45000;
                        l_U1458 = 1;
                        iVar7 = iParam0 - iVar5;
                        iVar7 = iVar7 / 60000;
                        if (NOT bParam1)
                        {
                            sub_7748();
                            SET_RICH_PRESENCE_TEMPLATEMP3( iVar7 + 1, sub_7396() );
                        }
                        else if (NOT sub_8634())
                        {
                            sub_7748();
                            SET_RICH_PRESENCE_TEMPLATEMP6( sub_8705(), iParam0, sub_7396() );
                        }
                        else
                        {
                            sub_7748();
                            SET_RICH_PRESENCE_TEMPLATEMP6( uParam2, iParam0, sub_7396() );
                        }
                    }
                    else if (l_U1457 < iVar5)
                    {
                        l_U1458 = 0;
                    }
                    break;
                    case 3:
                    if (l_U1456 != sub_8343())
                    {
                        sub_7748();
                        SET_RICH_PRESENCE_TEMPLATEMP5( 3, sub_8343(), sub_7396() );
                        l_U1456 = sub_8343();
                    }
                    break;
                    case 0:
                    if (NOT l_U1458)
                    {
                        l_U1457 = iVar5 + 45000;
                        l_U1458 = 1;
                        sub_7748();
                        SET_RICH_PRESENCE_TEMPLATEMP2( sub_7396() );
                    }
                    else if (l_U1457 < iVar5)
                    {
                        l_U1458 = 0;
                    }
                    break;
                }
            }
        }
        else if (NOT l_U1459)
        {
            if (NOT NETWORK_IS_SESSION_STARTED())
            {
                if (sub_7396() == 16)
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
                    {
                        GET_CHAR_COORDINATES( sub_5471(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                        if ((GET_MAP_AREA_FROM_COORDS( uVar8 )) != 5)
                        {
                            if (NOT l_U1458)
                            {
                                l_U1457 = iVar5 + 45000;
                                l_U1458 = 1;
                                sub_7748();
                                SET_RICH_PRESENCE_TEMPLATEMP2( sub_7396() );
                            }
                            else if (l_U1457 < iVar5)
                            {
                                l_U1458 = 0;
                            }
                        }
                    }
                }
                else if (sub_7396() == 8)
                {
                    SET_RICH_PRESENCE_TEMPLATEPARTY();
                    l_U1459 = 1;
                }
                else
                {
                    sub_7748();
                    SET_RICH_PRESENCE_TEMPLATELOBBY( sub_7396() );
                    l_U1458 = 0;
                    l_U1459 = 1;
                }
            }
        }
    }
    return;
}

int sub_7387()
{
    switch (sub_7396())
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

void sub_7396()
{
    if (l_U98 == -1)
    {
        l_U98 = NETWORK_GET_GAME_MODE();
    }
    return l_U98;
}

int sub_7658()
{
    int iVar2;

    iVar2 = sub_7396();
    if (((iVar2 == 7) || (iVar2 == 8)) || (iVar2 == 6))
    {
        return 1;
    }
    return 0;
}

void sub_7727(int iParam0)
{
    if (l_U1460 == 0)
    {
        sub_7748();
        SET_RICH_PRESENCE_TEMPLATEMP1( 1, sub_7773( GET_PLAYER_ID() ), sub_8343(), sub_7396() );
        l_U1460 = 1;
    }
    else if ((iParam0 > 0) AND (iParam0 < 60))
    {
        sub_7748();
        SET_RICH_PRESENCE_TEMPLATEMP4( iParam0, sub_7396() );
        l_U1460 = 0;
    }
    return;
}

void sub_7748()
{
    return;
}

void sub_7773(unknown uParam0)
{
    if (l_U960)
    {
        return l_U831[uParam0]._fU16;
    }
    return sub_7808( uParam0 );
}

int sub_7808(int iParam0)
{
    int I;
    int iVar4;
    int Result;

    if (sub_7819( iParam0 ))
    {
        for ( I = 0; I < 16; I++ )
        {
            iVar4 = l_U662[0]._fU24[I];
            if ((IS_NETWORK_PLAYER_ACTIVE( iVar4 )) AND (NOT l_U1048[iVar4]))
            {
                Result++;
                if (l_U662[sub_7964()]._fU24[iVar4] == l_U662[sub_7964()]._fU24[iParam0])
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

int sub_7819(int iParam0)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (I != iParam0)
        {
            if ((sub_7852( I )) AND (NOT (sub_7904( I ))))
            {
                if (l_U662[sub_7964()]._fU24[I] == l_U662[sub_7964()]._fU24[iParam0])
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_7852(unknown uParam0)
{
    if (l_U960)
    {
        return l_U831[uParam0]._fU4;
    }
    return IS_NETWORK_PLAYER_ACTIVE( uParam0 );
}

void sub_7904(unknown uParam0)
{
    if (l_U960)
    {
        return l_U831[uParam0]._fU8;
    }
    return l_U1048[uParam0];
}

int sub_7964()
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

void sub_8343()
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

int sub_8634()
{
    int iVar2;

    iVar2 = NETWORK_GET_GAME_MODE();
    if (((((iVar2 == 10) || (iVar2 == 12)) || (iVar2 == 1)) || (iVar2 == 3)) || (iVar2 == 4))
    {
        return 1;
    }
    return 0;
}

void sub_8705()
{
    unknown Result;

    if (IS_PLAYER_PLAYING( sub_8714() ))
    {
        STORE_SCORE( sub_8714(), ref Result );
    }
    return Result;
}

void sub_8714()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_9236(unknown uParam0)
{
    float fVar3;
    int iVar4;

    if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        if (IS_VEH_DRIVEABLE( sub_9261( uParam0 ) ))
        {
            GET_CAR_MODEL( sub_9261( uParam0 ), ref iVar4 );
            if (((iVar4 == -1660661558) || (iVar4 == 353883353)) || (iVar4 == 837858166))
            {
                return 1;
            }
            else
            {
                GET_CAR_UPRIGHT_VALUE( sub_9261( uParam0 ), ref fVar3 );
                if (fVar3 > 0.00000000)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_9261(unknown uParam0)
{
    unknown Result;

    GET_VEHICLE_FROM_NETWORK_ID( uParam0, ref Result );
    return Result;
}

void sub_9516()
{
    int J;
    int I;
    int iVar4;

    if ((GET_PLAYER_ID() >= 0) AND (GET_PLAYER_ID() < 16))
    {
        if ((l_U1528._fU432 > 1) AND (l_U1528._fU432 < 7))
        {
            if (l_U1528._fU804)
            {
                sub_9591();
            }
            sub_10752();
            l_U1528._fU776 = sub_14114();
        }
        sub_14251();
        sub_14533();
        if (l_U1528._fU432 >= 1)
        {
            sub_19073();
        }
        if ((l_U1528._fU432 > 1) AND (l_U1528._fU432 < 7))
        {
            sub_19557();
        }
        if (NOT l_U1528._fU792)
        {
            if (sub_19832())
            {
                l_U1528._fU792 = 1;
            }
        }
        switch (l_U1528._fU432)
        {
            case 0:
            if (sub_19997())
            {
                l_U1528._fU432 = 1;
            }
            break;
            case 1:
            if (NOT NETWORK_IS_OPERATION_PENDING())
            {
                if ((sub_20162()) || (l_U2647))
                {
                    sub_20952( l_U1528._fU508[9] );
                    sub_21123( l_U1528._fU508[8] );
                    SET_SYNC_WEATHER_AND_GAME_TIME( 1 );
                    if (NOT sub_21301())
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
                    l_U1528._fU144 = l_U2660 + 30000;
                    if ((iVar4 == nil) AND (CAN_REGISTER_MISSION_PED()))
                    {
                        iVar4 = sub_21502( 1543404628, 10.00000000, 10.00000000, 1000.00000000, 0.00000000 );
                        sub_21568( iVar4, ref l_U1528._fU360 );
                        sub_22147( ref l_U1528._fU360, 8, 0 );
                    }
                    sub_22218( iVar4 );
                    switch (l_U1528._fU508[2])
                    {
                        case 0:
                        SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U2550, 1 );
                        SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2550, 5 );
                        SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U2552, 1 );
                        SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2552, 50 );
                        SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U2551, 1 );
                        SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2551, 5 );
                        break;
                        case 1:
                        SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U2550, 1 );
                        SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2550, 25 );
                        SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U2552, 1 );
                        SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2552, 70 );
                        SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U2551, 1 );
                        SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2551, 25 );
                        break;
                        case 2:
                        SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U2550, 1 );
                        SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2550, 45 );
                        SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U2552, 1 );
                        SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2552, 90 );
                        SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U2551, 1 );
                        SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2551, 45 );
                        break;
                    }
                    sub_22545();
                    l_U1528._fU136 = l_U2660;
                    l_U1528._fU432 = 2;
                }
            }
            break;
            case 2:
            if (NOT l_U1528._fU804)
            {
                if (sub_23672())
                {
                    l_U1528._fU804 = 1;
                }
            }
            if (NOT sub_21301())
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
            if (NOT l_U1528._fU748)
            {
                sub_27611();
            }
            if (NOT l_U3377)
            {
                for ( J = 0; J < 16; J++ )
                {
                    if (sub_14137( J ))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_5218( J ), sub_9261( l_U1528._fU1060[1] ), 50.00000000, 50.00000000, 50.00000000, 0 ))
                        {
                            for ( I = 0; I < 3; I++ )
                            {
                                if (sub_9236( l_U1528._fU1060[I] ))
                                {
                                    if (HAS_CONTROL_OF_NETWORK_ID( l_U1528._fU1060[I] ))
                                    {
                                        SET_LOAD_COLLISION_FOR_CAR_FLAG( sub_9261( l_U1528._fU1060[I] ), 0 );
                                    }
                                }
                            }
                            l_U3377 = 1;
                        }
                    }
                }
            }
            for ( J = 0; J < 16; J++ )
            {
                if (sub_14137( J ))
                {
                    if (l_U1863[J]._fU0 == 3)
                    {
                        l_U1528._fU432 = 3;
                        J = 16;
                    }
                }
            }
            if (NOT l_U2650)
            {
                l_U2650 = 1;
            }
            if (NOT l_U1528._fU772)
            {
                l_U1528._fU772 = sub_29214();
            }
            break;
            case 3:
            if (NOT sub_21301())
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
            if (NOT l_U1528._fU728)
            {
                if (sub_20011( -503930010 ))
                {
                    sub_29471();
                }
            }
            if (l_U1528._fU140 == 0)
            {
                if ((l_U1528._fU624[0]) AND (l_U1528._fU624[1]))
                {
                    if (l_U1528._fU616 == 0)
                    {
                        l_U1528._fU616 = l_U2660 + 65000;
                    }
                    else if ((sub_32974()) || (l_U2660 > l_U1528._fU616))
                    {
                        for ( J = 0; J < 16; J++ )
                        {
                            if (sub_14137( J ))
                            {
                                if (NOT l_U2607[J])
                                {
                                    switch (l_U1528._fU508[2])
                                    {
                                        case 0:
                                        l_U1528._fU156[J] += 2500;
                                        l_U2607[J] = 1;
                                        break;
                                        case 1:
                                        l_U1528._fU156[J] += 3500;
                                        l_U2607[J] = 1;
                                        break;
                                        case 2:
                                        l_U1528._fU156[J] += 4500;
                                        l_U2607[J] = 1;
                                        break;
                                    }
                                }
                            }
                        }
                        sub_33379();
                        l_U1528._fU140 = l_U2660 - l_U1528._fU136;
                        l_U1528._fU432 = 7;
                    }
                }
            }
            sub_35120();
            sub_35322();
            break;
            case 7: break;
            case 4:
            l_U1528._fU796 = 1;
            sub_33379();
            break;
            case 5:
            l_U1528._fU800 = 1;
            sub_33379();
            break;
        }
    }
    return;
}

void sub_9591()
{
    if (l_U1528._fU432 >= 1)
    {
        if (sub_9616())
        {
            l_U1528._fU432 = 5;
            l_U1528._fU784 = 1;
            l_U1528._fU788 = 1;
        }
        if ((NOT l_U1863[GET_PLAYER_ID()]._fU32) AND (NOT l_U1528._fU784))
        {
            if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1528._fU1060[1] ))
            {
                if ((((CHECK_STUCK_TIMER( sub_9261( l_U1528._fU1060[1] ), 3, 60000 )) || (CHECK_STUCK_TIMER( sub_9261( l_U1528._fU1060[1] ), 0, 5000 ))) || (CHECK_STUCK_TIMER( sub_9261( l_U1528._fU1060[1] ), 1, 40000 ))) || (CHECK_STUCK_TIMER( sub_9261( l_U1528._fU1060[1] ), 2, 30000 )))
                {
                    l_U1528._fU780 = 1;
                    l_U1528._fU432 = 4;
                    l_U1528._fU788 = 1;
                }
                if (NOT (IS_VEH_DRIVEABLE( sub_9261( l_U1528._fU1060[1] ) )))
                {
                    l_U1528._fU780 = 1;
                    l_U1528._fU432 = 4;
                    l_U1528._fU788 = 1;
                }
                else
                {
                    l_U3193 = GET_ENGINE_HEALTH( sub_9261( l_U1528._fU1060[1] ) );
                    l_U3194 = GET_PETROL_TANK_HEALTH( sub_9261( l_U1528._fU1060[1] ) );
                    GET_CAR_HEALTH( sub_9261( l_U1528._fU1060[1] ), ref l_U2667 );
                    if (((l_U3193 == 0.00000000) || (l_U3194 == 0.00000000)) || (l_U2667 == 0))
                    {
                        l_U1528._fU780 = 1;
                        l_U1528._fU432 = 4;
                        l_U1528._fU788 = 1;
                    }
                }
            }
            else
            {
                l_U1528._fU780 = 1;
                l_U1528._fU432 = 4;
                l_U1528._fU788 = 1;
            }
        }
    }
    if (sub_9616())
    {
        l_U1528._fU432 = 5;
        l_U1528._fU784 = 1;
        l_U1528._fU788 = 1;
    }
    return;
}

int sub_9616()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if ((sub_9236( l_U1528._fU1060[0] )) AND (sub_9236( l_U1528._fU1060[1] )))
    {
        switch (l_U1528._fU596)
        {
            case 0:
            if (LOCATE_CAR_3D( sub_9261( l_U1528._fU1060[0] ), 1270.49700000, 1452.00000000, 15.43720000, 10.00000000, 10.00000000, 10.00000000, 0 ))
            {
                uVar2 = {sub_9782( sub_9261( l_U1528._fU1060[0] ) )};
                if (LOCATE_CAR_3D( sub_9261( l_U1528._fU1060[1] ), uVar2._fU0, uVar2._fU4, uVar2._fU8, 20.00000000, 20.00000000, 20.00000000, 0 ))
                {
                    return 1;
                }
            }
            break;
            case 1:
            if (LOCATE_CAR_3D( sub_9261( l_U1528._fU1060[0] ), -1992.49400000, 39.02310000, 7.10100000, 10.00000000, 10.00000000, 10.00000000, 0 ))
            {
                uVar2 = {sub_9782( sub_9261( l_U1528._fU1060[0] ) )};
                if (LOCATE_CAR_3D( sub_9261( l_U1528._fU1060[1] ), uVar2._fU0, uVar2._fU4, uVar2._fU8, 20.00000000, 20.00000000, 20.00000000, 0 ))
                {
                    return 1;
                }
            }
            break;
            case 2:
            if (LOCATE_CAR_3D( sub_9261( l_U1528._fU1060[0] ), 1448.28500000, -298.75440000, 14.43750000, 10.00000000, 10.00000000, 10.00000000, 0 ))
            {
                uVar2 = {sub_9782( sub_9261( l_U1528._fU1060[0] ) )};
                if (LOCATE_CAR_3D( sub_9261( l_U1528._fU1060[1] ), uVar2._fU0, uVar2._fU4, uVar2._fU8, 20.00000000, 20.00000000, 20.00000000, 0 ))
                {
                    return 1;
                }
            }
            break;
        }
    }
    return 0;
}

void sub_9782(unknown uParam0)
{
    unknown Result;
    unknown uVar4;
    unknown uVar5;

    GET_DEAD_CAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    return Result;
}

void sub_10752()
{
    int I;
    unknown[16] uVar3;
    unknown[2] uVar20;

    array(ref uVar3, 16);
    array(ref uVar20, 2);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1863[I]._fU8;
    }
    if (sub_10829( ref l_U1528._fU1100, l_U1528._fU1100 ))
    {
        sub_11019( ref uVar3, ref l_U1528._fU440, 50.00000000, ref l_U1528._fU1100, 1120403456 );
    }
    else if (sub_10829( ref l_U1528._fU808, l_U1528._fU808 ))
    {
        sub_11019( ref uVar3, ref l_U1528._fU440, 50.00000000, ref l_U1528._fU808, 1120403456 );
    }
    else if (sub_10829( ref l_U1528._fU852, l_U1528._fU852 ))
    {
        sub_11019( ref uVar3, ref l_U1528._fU440, 50.00000000, ref l_U1528._fU852, 1120403456 );
    }
    else if (sub_10829( ref l_U1528._fU896, l_U1528._fU896 ))
    {
        sub_11019( ref uVar3, ref l_U1528._fU440, 50.00000000, ref l_U1528._fU896, 1120403456 );
    }
    else if (sub_10829( ref l_U1528._fU940, l_U1528._fU940 ))
    {
        sub_11019( ref uVar3, ref l_U1528._fU440, 50.00000000, ref l_U1528._fU940, 1120403456 );
    }
    else
    {
        sub_11019( ref uVar3, ref l_U1528._fU440, 50.00000000, ref uVar20, 1120403456 );
    };;;;;
    return;
}

int sub_10829(unknown uParam0, int iParam1)
{
    int I;

    for ( I = 0; I < iParam1; I++ )
    {
        if (sub_10858( (uParam0^)[I] ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_10858(unknown uParam0)
{
    if (DOES_PED_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        if (NOT (IS_CHAR_DEAD( sub_10883( uParam0 ) )))
        {
            if (NOT (IS_CHAR_INJURED( sub_10883( uParam0 ) )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_10883(unknown uParam0)
{
    unknown Result;

    GET_PED_FROM_NETWORK_ID( uParam0, ref Result );
    return Result;
}

void sub_11019(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
                if (l_U1445)
                {
                    sub_11218( uParam1, sub_11135( sub_5218( I ) ), uParam2, uParam4, uParam3, I );
                }
                else if (l_U1449)
                {
                    sub_11218( uParam1, l_U1450, uParam2, uParam4, uParam3, I );
                }
                else if (l_U1448)
                {
                    sub_11218( uParam1, sub_13383( -1, 1 ), uParam2, uParam4, uParam3, I );
                }
                else
                {
                    sub_11218( uParam1, sub_13383( GET_PLAYER_TEAM( sub_5180( I ) ), 1 ), uParam2, uParam4, uParam3, I );
                };;;
            }
        }
    }
    return;
}

void sub_11135(unknown uParam0)
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

int sub_11218(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
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
            if (sub_11271( (uParam6^)[I] ))
            {
                ADD_SPAWN_BLOCKING_AREA( sub_11747( (uParam6^)[I] ), uParam5 );
            }
        }
        while (iVar12 < 127)
        {
            if (NOT l_U1445)
            {
                sub_11942( ref uParam1, uParam4 + l_U1454 );
            }
            bVar13 = false;
            if (l_U1447)
            {
                if (GET_RANDOM_CAR_NODE( uParam1, uParam4 + l_U1454, 2, 1, 1, ref uVar14, ref uVar11 ))
                {
                    bVar13 = true;
                }
            }
            else if (l_U1446)
            {
                if (sub_12891())
                {
                    if (GET_SORTED_NETWORK_RESTART_NODE_USING_GROUP_LIST( uParam1, uParam4 + l_U1454, ref uVar14, ref uVar11, uParam7, 2, uParam5 ))
                    {
                        bVar13 = true;
                    }
                }
                else if (GET_SORTED_NETWORK_RESTART_NODE_USING_GROUP_LIST( uParam1, uParam4 + l_U1454, ref uVar14, ref uVar11, uParam7, 7, uParam5 ))
                {
                    bVar13 = true;
                }
            }
            else if (sub_12891())
            {
                if (GET_SORTED_NETWORK_RESTART_NODE( uParam1, uParam4 + l_U1454, ref uVar14, ref uVar11, uParam7, 0, uParam5 ))
                {
                    bVar13 = true;
                }
            }
            else if (sub_7396() == 7)
            {
                if (GET_SORTED_NETWORK_RESTART_NODE( uParam1, uParam4 + l_U1454, ref uVar14, ref uVar11, uParam7, 9, uParam5 ))
                {
                    bVar13 = true;
                }
            }
            else if (sub_7396() == 16)
            {
                if (GET_SORTED_NETWORK_RESTART_NODE( uParam1, uParam4 + l_U1454, ref uVar14, ref uVar11, uParam7, 21, uParam5 ))
                {
                    bVar13 = true;
                }
            }
            else if (GET_SORTED_NETWORK_RESTART_NODE( uParam1, uParam4 + l_U1454, ref uVar14, ref uVar11, uParam7, 7, uParam5 ))
            {
                bVar13 = true;
            };;;;;;
            if (bVar13)
            {
                (uParam0^)[uParam7] = uVar11;
                l_U1454 = 0.00000000;
                REGISTER_PLAYER_RESPAWN_COORDS( uParam7, uVar14 );
                return 1;
            }
            else
            {
                l_U1454 += 30.00000000;
                return 0;
            }
        }
        l_U1454 += 10.00000000;
    }
    return 0;
}

int sub_11271(unknown uParam0)
{
    int iVar3;

    if (DOES_PED_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        if (IS_CHAR_DEAD( sub_10883( uParam0 ) ))
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
        if (IS_VEH_DRIVEABLE( sub_9261( uParam0 ) ))
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
        if (IS_OBJECT_IN_WATER( sub_11398( uParam0 ) ))
        {
            return 0;
        }
        else
        {
            iVar3 = sub_11484( sub_11455( sub_11398( uParam0 ) ) );
            if (((iVar3 == 0) || (((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( sub_11398( uParam0 ), 1 )) < 0.30000000) AND (iVar3 < 500))) || (((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( sub_11398( uParam0 ), 0 )) < 0.30000000) AND (iVar3 < 500)))
            {
                return 0;
            }
            else if (IS_OBJECT_ATTACHED( sub_11398( uParam0 ) ))
            {
                if (DOES_VEHICLE_EXIST( GET_CAR_OBJECT_IS_ATTACHED_TO( sub_11398( uParam0 ) ) ))
                {
                    if (IS_VEH_DRIVEABLE( GET_CAR_OBJECT_IS_ATTACHED_TO( sub_11398( uParam0 ) ) ))
                    {
                        return 1;
                    }
                    else if (IS_CAR_IN_WATER( GET_CAR_OBJECT_IS_ATTACHED_TO( sub_11398( uParam0 ) ) ))
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

void sub_11398(unknown uParam0)
{
    unknown Result;

    GET_OBJECT_FROM_NETWORK_ID( uParam0, ref Result );
    return Result;
}

void sub_11455(unknown uParam0)
{
    unknown Result;

    GET_OBJECT_HEALTH( uParam0, ref Result );
    return Result;
}

void sub_11484(unknown uParam0)
{
    return FLOOR( uParam0 );
}

void sub_11747(unknown uParam0)
{
    unknown Result;
    unknown uVar4;
    unknown uVar5;

    if (DOES_PED_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        GET_CHAR_COORDINATES( sub_10883( uParam0 ), ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        GET_DEAD_CAR_COORDINATES( sub_9261( uParam0 ), ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else if (DOES_OBJECT_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        GET_OBJECT_COORDINATES( sub_11398( uParam0 ), ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    };;;
    return Result;
}

void sub_11942(int iParam0, float fParam1)
{
    if (fParam1 > 500.00000000)
    {
        (iParam0^) = {sub_11968( (iParam0^) )};
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

void sub_11968(vector vParam0)
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
        vVar12 = {sub_12001( I )};
        uVar9 = {vParam0 - vVar12};
        fVar8 = ((uVar9._fU0 * uVar9._fU0) + (uVar9._fU4 * uVar9._fU4)) + (uVar9._fU8 * uVar9._fU8);
        if (fVar7 > fVar8)
        {
            iVar6 = I;
            fVar7 = fVar8;
        }
    }
    return sub_12001( iVar6 );
}

vector sub_12001(int iParam0)
{
    if (iParam0 == -1)
    {
        iParam0 = sub_12021( 0, 8 );
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

void sub_12021(unknown uParam0, unknown Result)
{
    GENERATE_RANDOM_INT_IN_RANGE( uParam0, Result, ref Result );
    return Result;
}

int sub_12891()
{
    int iVar2;

    iVar2 = NETWORK_GET_GAME_MODE();
    if ((((iVar2 == 13) || (iVar2 == 14)) || (iVar2 == 15)) || (iVar2 == 16))
    {
        return 1;
    }
    return 0;
}

vector sub_13383(int iParam0, unknown uParam1)
{
    int I;
    int iVar5;
    int iVar6;
    vector vVar7;

    if ((l_U1443) AND (uParam1))
    {
        return sub_12001( l_U1444 );
    }
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (IS_PLAYER_CONTROL_ON( sub_5180( I ) ))
            {
                if (NOT (sub_13492( sub_5218( I ), -2000.00000000, -2000.00000000, 250.00000000, 50.00000000 )))
                {
                    iVar6++;
                    if (((GET_PLAYER_TEAM( sub_5180( I ) )) == iParam0) || (iParam0 == -1))
                    {
                        vVar7 = {vVar7 + (sub_11135( sub_5218( I ) ))};
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
            return sub_13383( -1, 0 );
        }
        else
        {
            return sub_12001( -1 );
        }
    }
    return vVar7 / (TO_FLOAT( iVar5 ));
}

int sub_13492(unknown uParam0, vector vParam1, float fParam4)
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

int sub_14114()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_14137( I ))
        {
            if (IS_CHAR_DEAD( sub_5218( I ) ))
            {
                return 0;
            }
        }
    }
    return 1;
}

int sub_14137(unknown uParam0)
{
    if (IS_NETWORK_PLAYER_ACTIVE( uParam0 ))
    {
        if (NOT l_U1863[uParam0]._fU100)
        {
            return 1;
        }
    }
    return 0;
}

void sub_14251()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_14137( I ))
        {
            if (NETWORK_PLAYER_HAS_DIED_RECENTLY( I ))
            {
                if (I != (FIND_NETWORK_KILLER_OF_PLAYER( I )))
                {
                    l_U1528._fU156[FIND_NETWORK_KILLER_OF_PLAYER( I )] -= 100;
                    l_U1528._fU68[FIND_NETWORK_KILLER_OF_PLAYER( I )]++;
                }
                l_U1528._fU292[I]++;
            }
            l_U1528._fU156[I] += GET_CHAR_MONEY( sub_5218( I ) );
            SET_CHAR_MONEY( sub_5218( I ), 0 );
        }
        else if (PLAYER_WANTS_TO_JOIN_NETWORK_GAME( I ))
        {
            TELL_NET_PLAYER_TO_START_PLAYING( I, 0 );
        }
    }
    return;
}

void sub_14533()
{
    int I;
    unknown uVar3;

    for ( I = 0; I < l_U1528._fU1100; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1528._fU1100[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( sub_14621( l_U1528._fU1100[I], "Bc.net_FirstWave", I ) ))
            {
                if ((GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU1100[I], ref uVar3 )) != -1)
                {
                    l_U1528._fU156[GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU1100[I], ref uVar3 )] += 100;
                    l_U1528._fU224[GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU1100[I], ref uVar3 )]++;
                }
                sub_15034( sub_14621( l_U1528._fU1100[I], "Bc.net_FirstWave", I ) );
                l_U1528._fU1100[I] = nil;
            }
        }
    }
    for ( I = 0; I < l_U1528._fU1004; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1528._fU1004[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( sub_14621( l_U1528._fU1004[I], "Bc.net_EnemySniper", I ) ))
            {
                if ((GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU1004[I], ref uVar3 )) != -1)
                {
                    l_U1528._fU156[GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU1004[I], ref uVar3 )] += 100;
                    l_U1528._fU224[GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU1004[I], ref uVar3 )]++;
                }
                sub_15034( sub_14621( l_U1528._fU1004[I], "Bc.net_EnemySniper", I ) );
                l_U1528._fU1004[I] = nil;
            }
        }
    }
    for ( I = 0; I < l_U1528._fU808; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1528._fU808[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( sub_14621( l_U1528._fU808[I], "Bc.net_CanteenEnemy", I ) ))
            {
                if ((GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU808[I], ref uVar3 )) != -1)
                {
                    l_U1528._fU156[GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU808[I], ref uVar3 )] += 100;
                    l_U1528._fU224[GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU808[I], ref uVar3 )]++;
                }
                sub_15034( sub_14621( l_U1528._fU808[I], "Bc.net_CanteenEnemy", I ) );
                l_U1528._fU808[I] = nil;
            }
        }
    }
    for ( I = 0; I < l_U1528._fU852; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1528._fU852[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( sub_14621( l_U1528._fU852[I], "Bc.net_SQEnemy", I ) ))
            {
                if ((GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU852[I], ref uVar3 )) != -1)
                {
                    l_U1528._fU156[GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU852[I], ref uVar3 )] += 100;
                    l_U1528._fU224[GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU852[I], ref uVar3 )]++;
                }
                sub_15034( sub_14621( l_U1528._fU852[I], "Bc.net_SQEnemy", I ) );
                l_U1528._fU852[I] = nil;
            }
        }
    }
    for ( I = 0; I < l_U1528._fU896; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1528._fU896[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( sub_14621( l_U1528._fU896[I], "Bc.net_WalkwaysEnemy", I ) ))
            {
                if ((GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU896[I], ref uVar3 )) != -1)
                {
                    l_U1528._fU156[GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU896[I], ref uVar3 )] += 100;
                    l_U1528._fU224[GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU896[I], ref uVar3 )]++;
                }
                sub_15034( sub_14621( l_U1528._fU896[I], "Bc.net_WalkwaysEnemy", I ) );
                l_U1528._fU896[I] = nil;
            }
        }
    }
    for ( I = 0; I < l_U1528._fU940; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1528._fU940[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( sub_14621( l_U1528._fU940[I], "Bc.net_CargoHoldEnemy", I ) ))
            {
                if ((GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU940[I], ref uVar3 )) != -1)
                {
                    l_U1528._fU156[GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU940[I], ref uVar3 )] += 100;
                    l_U1528._fU224[GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU940[I], ref uVar3 )]++;
                }
                sub_15034( sub_14621( l_U1528._fU940[I], "Bc.net_CargoHoldEnemy", I ) );
                l_U1528._fU940[I] = nil;
            }
        }
    }
    for ( I = 0; I < l_U1528._fU1024; I++ )
    {
        if (I != 1)
        {
            if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1528._fU1024[I] ))
            {
                if (IS_CHAR_FATALLY_INJURED( sub_14621( l_U1528._fU1024[I], "Bc.net_ConvoyDriver", I ) ))
                {
                    if ((GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU1024[I], ref uVar3 )) != -1)
                    {
                        l_U1528._fU156[GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU1024[I], ref uVar3 )] += 100;
                        l_U1528._fU224[GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU1024[I], ref uVar3 )]++;
                    }
                    sub_15034( sub_14621( l_U1528._fU1024[I], "Bc.net_ConvoyDriver", I ) );
                    l_U1528._fU1024[I] = nil;
                }
            }
        }
        else if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1528._fU1024[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( sub_14621( l_U1528._fU1024[I], "Bc.net_ConvoyDriver", I ) ))
            {
                if ((GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU1024[I], ref uVar3 )) != -1)
                {
                    l_U1528._fU156[GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU1024[I], ref uVar3 )] += 100;
                    l_U1528._fU224[GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU1024[I], ref uVar3 )]++;
                }
                sub_15034( sub_14621( l_U1528._fU1024[I], "Bc.net_ConvoyDriver", I ) );
                l_U1528._fU1024[I] = nil;
            }
        }
    }
    for ( I = 0; I < l_U1528._fU1040; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1528._fU1040[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( sub_14621( l_U1528._fU1040[I], "Bc.net_ConvoyPassenger", I ) ))
            {
                if ((GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU1040[I], ref uVar3 )) != -1)
                {
                    l_U1528._fU156[GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU1040[I], ref uVar3 )] += 100;
                    l_U1528._fU224[GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU1040[I], ref uVar3 )]++;
                }
                sub_15034( sub_14621( l_U1528._fU1040[I], "Bc.net_ConvoyPassenger", I ) );
                l_U1528._fU1040[I] = nil;
            }
        }
    }
    for ( I = 0; I < l_U1528._fU1060; I++ )
    {
        if (I != 1)
        {
            if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1528._fU1060[I] ))
            {
                if (NOT (IS_VEH_DRIVEABLE( sub_9261( l_U1528._fU1060[I] ) )))
                {
                    sub_17843( sub_9261( l_U1528._fU1060[I] ) );
                    l_U1528._fU1060[I] = nil;
                }
            }
        }
    }
    if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1528._fU1060[1] ))
    {
        if (NOT (IS_VEH_DRIVEABLE( sub_9261( l_U1528._fU1060[1] ) )))
        {
            if ((GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU1060[1], ref uVar3 )) != -1)
            {
                l_U1528._fU156[GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU1060[1], ref uVar3 )] -= 500;
            }
            sub_17843( sub_9261( l_U1528._fU1060[1] ) );
            l_U1528._fU1060[1] = nil;
        }
    }
    if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1528._fU1092 ))
    {
        if (IS_CHAR_FATALLY_INJURED( sub_14621( l_U1528._fU1092, "Bc.net_ConvoyPassenger02", -1 ) ))
        {
            if ((GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU1092, ref uVar3 )) != -1)
            {
                l_U1528._fU156[GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU1092, ref uVar3 )] += 100;
                l_U1528._fU224[GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU1092, ref uVar3 )]++;
            }
            sub_15034( sub_14621( l_U1528._fU1092, "Bc.net_ConvoyPassenger02", -1 ) );
            l_U1528._fU1092 = nil;
        }
    }
    if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1528._fU1096 ))
    {
        if (IS_CHAR_FATALLY_INJURED( sub_14621( l_U1528._fU1096, "Bc.net_ConvoyPassenger03", -1 ) ))
        {
            if ((GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU1096, ref uVar3 )) != -1)
            {
                l_U1528._fU156[GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU1096, ref uVar3 )] += 100;
                l_U1528._fU224[GET_DESTROYER_OF_NETWORK_ID( l_U1528._fU1096, ref uVar3 )]++;
            }
            sub_15034( sub_14621( l_U1528._fU1096, "Bc.net_ConvoyPassenger03", -1 ) );
            l_U1528._fU1096 = nil;
        }
    }
    for ( I = 0; I < 16; I++ )
    {
        if (sub_14137( I ))
        {
            if (l_U1528._fU156[I] < 0)
            {
                l_U1528._fU156[I] = 0;
            }
        }
    }
    if ((GET_PLAYER_ID() >= 0) AND (GET_PLAYER_ID() < 16))
    {
        if (l_U1863[GET_PLAYER_ID()]._fU36)
        {
            for ( I = 0; I <= 2; I++ )
            {
                if (sub_10858( l_U1528._fU1024[I] ))
                {
                    sub_15034( sub_10883( l_U1528._fU1024[I] ) );
                    l_U1528._fU1024[I] = nil;
                }
                if (sub_10858( l_U1528._fU1040[I] ))
                {
                    sub_15034( sub_10883( l_U1528._fU1040[I] ) );
                    l_U1528._fU1040[I] = nil;
                }
                if (sub_10858( l_U1528._fU1092 ))
                {
                    sub_15034( sub_10883( l_U1528._fU1092 ) );
                    l_U1528._fU1092 = nil;
                }
                if (sub_10858( l_U1528._fU1096 ))
                {
                    sub_15034( sub_10883( l_U1528._fU1096 ) );
                    l_U1528._fU1096 = nil;
                }
                if (sub_9236( l_U1528._fU1060[I] ))
                {
                    sub_17843( sub_9261( l_U1528._fU1060[I] ) );
                    l_U1528._fU1060[I] = nil;
                }
            }
        }
    }
    return;
}

void sub_14621(int iParam0, unknown uParam1, int iParam2)
{
    int Result;

    if (NOT (iParam0 == nil))
    {
        GET_PED_FROM_NETWORK_ID( iParam0, ref Result );
        if (Result == nil)
        {
            if (iParam2 == -1)
            {
                PRINTSTRING( uParam1 );
            }
            else
            {
                PRINTSTRING( uParam1 );
                PRINTSTRING( "[" );
                PRINTINT( iParam2 );
                PRINTSTRING( "]" );
                PRINTNL();
            }
        }
        return Result;
    }
    else if (iParam2 == -1)
    {
        PRINTSTRING( uParam1 );
    }
    else
    {
        PRINTSTRING( uParam1 );
        PRINTSTRING( "[" );
        PRINTINT( iParam2 );
        PRINTSTRING( "]" );
        PRINTNL();
    }
    return Result;
}

void sub_15034(unknown uParam0)
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_17843(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_19073()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1863[I]._fU20;
    }
    sub_19129( ref uVar3 );
    return;
}

void sub_19129(unknown uParam0)
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
    if ((sub_8343() > 2) AND (NOT NETWORK_IS_TVT()))
    {
        if (((sub_8343() > 3) AND (iVar4[iVar21] > (sub_8343() / 2))) || ((sub_8343() == 3) AND (iVar4[iVar21] == 2)))
        {
            PRINTSTRING( "SCRIPT: Kick Player " );
            PRINTINT( iVar21 );
            PRINTSTRING( " with votes " );
            PRINTINT( iVar4[iVar21] );
            PRINTSTRING( " needed " );
            PRINTINT( sub_8343() / 2 );
            PRINTNL();
            if (IS_NETWORK_PLAYER_ACTIVE( iVar21 ))
            {
                NETWORK_KICK_PLAYER( iVar21 );
            }
        }
    }
    return;
}

void sub_19557()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1863[I]._fU24;
    }
    sub_19621( ref l_U1528._fU428, ref uVar3 );
    return;
}

void sub_19621(unknown uParam0, unknown uParam1)
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
    if ((iVar5[iVar23] > (sub_8343() / 2)) AND (iVar5[iVar23] > 0))
    {
        (uParam0^) = iVar23;
    }
    else
    {
        (uParam0^) = -1;
    }
    return;
}

int sub_19832()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_14137( I ))
        {
            if (NOT l_U1863[I]._fU56)
            {
                return 0;
            }
        }
    }
    return 1;
}

int sub_19997()
{
    if ((((((sub_20011( 1747439474 )) AND (sub_20011( 1075583233 ))) AND (sub_20011( 1269098716 ))) AND (sub_20011( 83136452 ))) AND (sub_20011( 1543404628 ))) AND (sub_20011( 1185749008 )))
    {
        return 1;
    }
    return 0;
}

int sub_20011(unknown uParam0)
{
    REQUEST_MODEL( uParam0 );
    if (HAS_MODEL_LOADED( uParam0 ))
    {
        return 1;
    }
    return 0;
}

int sub_20162()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1863[I]._fU12;
    }
    if (sub_20226( ref uVar3, ref l_U1528._fU608 ))
    {
        return 1;
    }
    return 0;
}

int sub_20226(unknown uParam0, unknown uParam1)
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
    if (NOT (sub_20304( ref uVar10 )))
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
        if (sub_7396() != 16)
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

int sub_20304(unknown uParam0)
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
    if (sub_7396() == 16)
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
    if ((sub_7396() == 5) || (sub_7396() == 4))
    {
        if (iVar4 < 4)
        {
            return 0;
        }
    }
    if ((sub_20431()) || (sub_20476()))
    {
        if (sub_20476())
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
        if (sub_20573() < 2)
        {
            (uParam0^) = 1;
            return 0;
        }
    }
    return 1;
}

int sub_20431()
{
    int iVar2;

    iVar2 = NETWORK_GET_GAME_MODE();
    if ((iVar2 == 10) || (iVar2 == 12))
    {
        return 1;
    }
    return 0;
}

int sub_20476()
{
    int iVar2;

    iVar2 = NETWORK_GET_GAME_MODE();
    if (((iVar2 == 1) || (iVar2 == 3)) || (iVar2 == 4))
    {
        return 1;
    }
    return 0;
}

void sub_20573()
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

void sub_20952(unknown uParam0)
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

void sub_21123(unknown uParam0)
{
    switch (uParam0)
    {
        case -1:
        SET_TIME_OF_DAY( sub_12021( 0, 24 ), 0 );
        break;
        case 0:
        SET_TIME_OF_DAY( sub_12021( 0, 24 ), 0 );
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

int sub_21301()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1863[I]._fU28 > 0)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_21502(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown Result;

    CREATE_CHAR( 26, uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, ref Result, 1 );
    SET_CHAR_HEADING( Result, uParam4 );
    return Result;
}

void sub_21568(unknown uParam0, unknown uParam1)
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
                    sub_21824( ref uVar17[J], iVar6[J] );
                }
            }
            else
            {
                iVar108 = 0;
            }
            SET_BITS_IN_RANGE( ref (uParam1^)[I], J * 3, (J * 3) + 2, uVar17[J][iVar108] );
        }
        sub_4996( "\n Random Ped ", I );
        for ( J = 0; J <= 9; J++ )
        {
            sub_4996( ", ", GET_BITS_IN_RANGE( (uParam1^)[I], J * 3, (J * 3) + 2 ) );
        }
    }
    return;
}

void sub_21824(unknown uParam0, int iParam1)
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

void sub_22147(unknown uParam0, int iParam1, unknown uParam2)
{
    int I;

    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        SET_BITS_IN_RANGE( ref (uParam0^)[I], iParam1 * 3, (iParam1 * 3) + 2, uParam2 );
    }
    return;
}

void sub_22218(unknown uParam0)
{
    DELETE_CHAR( ref uParam0 );
    return;
}

void sub_22545()
{
    vector[14] vVar2;
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
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    vector[8] vVar45;
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
    int I;

    array(ref vVar2, 14);
    array(ref vVar45, 8);
    vVar2[0] = {748.19730000, -179.58400000, 13.99840000};
    vVar2[1] = {696.61430000, -289.26770000, 8.87430000};
    vVar2[2] = {675.48350000, -334.35580000, 8.87340000};
    vVar2[3] = {685.73330000, -299.31270000, 2.25830000};
    vVar2[4] = {709.58050000, -247.94470000, 2.24150000};
    vVar2[5] = {680.03670000, -305.38770000, 17.25100000};
    vVar2[6] = {682.83580000, -299.67330000, 21.88270000};
    vVar2[7] = {679.85950000, -309.30790000, 14.04020000};
    vVar2[8] = {696.25740000, -309.48570000, 9.85160000};
    vVar2[9] = {693.04560000, -309.21530000, 9.85160000};
    vVar2[10] = {-696.90490000, 338.94270000, 3.05250000};
    vVar2[11] = {-722.94850000, 372.58260000, 9.50080000};
    vVar2[12] = {-747.35660000, 331.35550000, 5.91810000};
    vVar2[13] = {-716.87160000, 384.24420000, 3.05250000};
    vVar45[0] = {736.44780000, -221.12680000, 8.89320000};
    vVar45[1] = {724.03900000, -213.05220000, 8.89330000};
    vVar45[2] = {726.53500000, -255.17760000, 8.87280000};
    vVar45[3] = {694.17880000, -271.95360000, 8.87570000};
    vVar45[4] = {677.67970000, -315.90100000, 9.07800000};
    vVar45[5] = {684.57060000, -318.86440000, 14.07910000};
    vVar45[6] = {686.83080000, -320.43090000, 17.33050000};
    vVar45[7] = {709.88230000, -278.61150000, 11.79580000};
    for ( I = 0; I < 14; I++ )
    {
        if ((l_U1528._fU1244[I] == nil) AND (CAN_REGISTER_MISSION_OBJECT()))
        {
            CREATE_PICKUP( 1069950328, 22, vVar2[I]._fU0, vVar2[I]._fU4, vVar2[I]._fU8, ref l_U1528._fU1244[I], 0 );
            if ((I == 3) || (I == 4))
            {
                ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U1528._fU1244[I], "carholdrm" );
            }
            if (I == 7)
            {
                ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U1528._fU1244[I], "cargo_cabsrm" );
            }
            if ((I > 7) AND (I < 10))
            {
                ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U1528._fU1244[I], "GtaMloRoom02" );
            }
        }
    }
    for ( I = 0; I < 8; I++ )
    {
        if (I < 8)
        {
            if ((l_U1528._fU1304[I] == nil) AND (CAN_REGISTER_MISSION_OBJECT()))
            {
                CREATE_PICKUP( -1758615024, 22, vVar45[I]._fU0, vVar45[I]._fU4, vVar45[I]._fU8, ref l_U1528._fU1304[I], 0 );
                if (I == 4)
                {
                    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U1528._fU1304[I], "GtaMloRoom02" );
                }
                else if (I == 5)
                {
                    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U1528._fU1304[I], "cargo_cabsrm" );
                }
            }
        }
    }
    return;
}

int sub_23672()
{
    vector[3] vVar2;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    float[3] fVar12;

    array(ref vVar2, 3);
    array(ref fVar12, 3);
    if (l_U1528._fU596 == 0)
    {
        vVar2[0] = {-403.33580000, 1165.39500000, 13.39000000};
        fVar12[0] = 269.57300000;
        vVar2[1] = {-418.62350000, 1165.51100000, 12.65000000};
        fVar12[1] = 269.55330000;
        vVar2[2] = {-431.79240000, 1165.41000000, 12.15000000};
        fVar12[2] = 269.68930000;
        CLEAR_AREA( vVar2[0]._fU0, vVar2[0]._fU4, vVar2[0]._fU8, 200.00000000, 1 );
        CLEAR_AREA( vVar2[1]._fU0, vVar2[1]._fU4, vVar2[1]._fU8, 200.00000000, 1 );
        CLEAR_AREA( vVar2[2]._fU0, vVar2[2]._fU4, vVar2[2]._fU8, 200.00000000, 1 );
        if ((l_U1528._fU1060[2] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
        {
            l_U1528._fU1060[0] = sub_23957( sub_6908( 1269098716, vVar2[0], fVar12[0] ) );
            SET_LOAD_COLLISION_FOR_CAR_FLAG( sub_9261( l_U1528._fU1060[0] ), 1 );
            MARK_CAR_AS_CONVOY_CAR( sub_9261( l_U1528._fU1060[0] ), 1 );
            SET_CAR_ENGINE_ON( sub_9261( l_U1528._fU1060[0] ), 1, 1 );
            SET_CAR_HEALTH( sub_9261( l_U1528._fU1060[0] ), 2000 );
            l_U1528._fU620++;
        }
        if ((l_U1528._fU1060[1] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
        {
            l_U1528._fU1060[1] = sub_23957( sub_6908( 1747439474, vVar2[1], fVar12[1] ) );
            SET_LOAD_COLLISION_FOR_CAR_FLAG( sub_9261( l_U1528._fU1060[1] ), 1 );
            SET_CAR_ONLY_DAMAGED_BY_PLAYER( sub_9261( l_U1528._fU1060[1] ), 1 );
            MARK_CAR_AS_CONVOY_CAR( sub_9261( l_U1528._fU1060[1] ), 1 );
            SET_CAR_ENGINE_ON( sub_9261( l_U1528._fU1060[1] ), 1, 1 );
            SET_CAR_HEALTH( sub_9261( l_U1528._fU1060[1] ), 3300 );
            LOCK_CAR_DOORS( sub_9261( l_U1528._fU1060[1] ), 3 );
            SET_CAN_BURST_CAR_TYRES( sub_9261( l_U1528._fU1060[1] ), 0 );
            l_U1528._fU620++;
        }
        if ((l_U1528._fU1060[2] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
        {
            l_U1528._fU1060[2] = sub_23957( sub_6908( 1269098716, vVar2[2], fVar12[2] ) );
            SET_LOAD_COLLISION_FOR_CAR_FLAG( sub_9261( l_U1528._fU1060[2] ), 1 );
            MARK_CAR_AS_CONVOY_CAR( sub_9261( l_U1528._fU1060[2] ), 1 );
            SET_CAR_ENGINE_ON( sub_9261( l_U1528._fU1060[2] ), 1, 1 );
            SET_CAR_HEALTH( sub_9261( l_U1528._fU1060[2] ), 2000 );
            l_U1528._fU620++;
        }
    }
    else if (l_U1528._fU596 == 1)
    {
        vVar2[0] = {36.65840000, 1281.51100000, 20.30000000};
        fVar12[0] = 180.31820000;
        vVar2[1] = {36.56620000, 1290.48400000, 18.70000000};
        fVar12[1] = 180.48520000;
        vVar2[2] = {36.55240000, 1300.37400000, 17.67000000};
        fVar12[2] = 180.48100000;
        CLEAR_AREA( vVar2[0]._fU0, vVar2[0]._fU4, vVar2[0]._fU8, 200.00000000, 1 );
        CLEAR_AREA( vVar2[1]._fU0, vVar2[1]._fU4, vVar2[1]._fU8, 200.00000000, 1 );
        CLEAR_AREA( vVar2[2]._fU0, vVar2[2]._fU4, vVar2[2]._fU8, 200.00000000, 1 );
        if ((l_U1528._fU1060[0] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
        {
            l_U1528._fU1060[0] = sub_23957( sub_6908( 1269098716, vVar2[0], fVar12[0] ) );
            SET_LOAD_COLLISION_FOR_CAR_FLAG( sub_9261( l_U1528._fU1060[0] ), 1 );
            MARK_CAR_AS_CONVOY_CAR( sub_9261( l_U1528._fU1060[0] ), 1 );
            SET_CAR_ENGINE_ON( sub_9261( l_U1528._fU1060[0] ), 1, 1 );
            l_U1528._fU620++;
        }
        if ((l_U1528._fU1060[1] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
        {
            l_U1528._fU1060[1] = sub_23957( sub_6908( 1747439474, vVar2[1], fVar12[1] ) );
            SET_CAR_ONLY_DAMAGED_BY_PLAYER( sub_9261( l_U1528._fU1060[1] ), 1 );
            SET_LOAD_COLLISION_FOR_CAR_FLAG( sub_9261( l_U1528._fU1060[1] ), 1 );
            MARK_CAR_AS_CONVOY_CAR( sub_9261( l_U1528._fU1060[1] ), 1 );
            SET_CAR_ENGINE_ON( sub_9261( l_U1528._fU1060[1] ), 1, 1 );
            SET_CAR_HEALTH( sub_9261( l_U1528._fU1060[1] ), 3300 );
            LOCK_CAR_DOORS( sub_9261( l_U1528._fU1060[1] ), 3 );
            SET_CAN_BURST_CAR_TYRES( sub_9261( l_U1528._fU1060[1] ), 0 );
            l_U1528._fU620++;
        }
        if ((l_U1528._fU1060[2] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
        {
            l_U1528._fU1060[2] = sub_23957( sub_6908( 1269098716, vVar2[2], fVar12[2] ) );
            SET_LOAD_COLLISION_FOR_CAR_FLAG( sub_9261( l_U1528._fU1060[2] ), 1 );
            MARK_CAR_AS_CONVOY_CAR( sub_9261( l_U1528._fU1060[2] ), 1 );
            SET_CAR_ENGINE_ON( sub_9261( l_U1528._fU1060[2] ), 1, 1 );
            l_U1528._fU620++;
        }
    }
    else if (l_U1528._fU596 == 2)
    {
        vVar2[0] = {-4.93290000, 258.37920000, 13.98000000};
        fVar12[0] = 270.08550000;
        vVar2[1] = {-20.56880000, 258.34590000, 13.98000000};
        fVar12[1] = 270.08550000;
        vVar2[2] = {-32.50310000, 258.32410000, 13.98000000};
        fVar12[2] = 270.05970000;
        CLEAR_AREA( vVar2[0]._fU0, vVar2[0]._fU4, vVar2[0]._fU8, 200.00000000, 1 );
        CLEAR_AREA( vVar2[1]._fU0, vVar2[1]._fU4, vVar2[1]._fU8, 200.00000000, 1 );
        CLEAR_AREA( vVar2[2]._fU0, vVar2[2]._fU4, vVar2[2]._fU8, 200.00000000, 1 );
        if ((l_U1528._fU1060[0] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
        {
            l_U1528._fU1060[0] = sub_23957( sub_6908( 1269098716, vVar2[0], fVar12[0] ) );
            SET_LOAD_COLLISION_FOR_CAR_FLAG( sub_9261( l_U1528._fU1060[0] ), 1 );
            MARK_CAR_AS_CONVOY_CAR( sub_9261( l_U1528._fU1060[0] ), 1 );
            SET_CAR_ENGINE_ON( sub_9261( l_U1528._fU1060[0] ), 1, 1 );
            SET_CAR_HEALTH( sub_9261( l_U1528._fU1060[0] ), 2000 );
            l_U1528._fU620++;
        }
        if ((l_U1528._fU1060[1] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
        {
            l_U1528._fU1060[1] = sub_23957( sub_6908( 1747439474, vVar2[1], fVar12[1] ) );
            SET_CAR_ONLY_DAMAGED_BY_PLAYER( sub_9261( l_U1528._fU1060[1] ), 1 );
            SET_LOAD_COLLISION_FOR_CAR_FLAG( sub_9261( l_U1528._fU1060[1] ), 1 );
            MARK_CAR_AS_CONVOY_CAR( sub_9261( l_U1528._fU1060[1] ), 1 );
            SET_CAR_ENGINE_ON( sub_9261( l_U1528._fU1060[1] ), 1, 1 );
            SET_CAR_HEALTH( sub_9261( l_U1528._fU1060[1] ), 3300 );
            LOCK_CAR_DOORS( sub_9261( l_U1528._fU1060[1] ), 3 );
            SET_CAN_BURST_CAR_TYRES( sub_9261( l_U1528._fU1060[1] ), 0 );
            l_U1528._fU620++;
        }
        if ((l_U1528._fU1060[2] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
        {
            l_U1528._fU1060[2] = sub_23957( sub_6908( 1269098716, vVar2[2], fVar12[2] ) );
            SET_LOAD_COLLISION_FOR_CAR_FLAG( sub_9261( l_U1528._fU1060[2] ), 1 );
            MARK_CAR_AS_CONVOY_CAR( sub_9261( l_U1528._fU1060[2] ), 1 );
            SET_CAR_ENGINE_ON( sub_9261( l_U1528._fU1060[2] ), 1, 1 );
            SET_CAR_HEALTH( sub_9261( l_U1528._fU1060[2] ), 2000 );
            l_U1528._fU620++;
        }
    };;;
    CLEAR_AREA( -632.30350000, -144.89450000, 4.51930000, 50.00000000, 1 );
    if (sub_20011( 83136452 ))
    {
        if ((l_U1528._fU1076[0] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
        {
            l_U1528._fU1076[0] = sub_23957( sub_6908( 83136452, -479.73800000, 190.66290000, 9.54720000, 270.88790000 ) );
            SET_NETWORK_ID_CAN_MIGRATE( l_U1528._fU1076[0], 0 );
            SET_CAR_HEALTH( sub_9261( l_U1528._fU1076[0] ), 2000 );
            SET_NETWORK_ID_CAN_MIGRATE( l_U1528._fU1076[0], 1 );
            CHANGE_CAR_COLOUR( sub_9261( l_U1528._fU1076[0] ), 0, 0 );
            SET_EXTRA_CAR_COLOURS( sub_9261( l_U1528._fU1076[0] ), 3, 0 );
            TURN_OFF_VEHICLE_EXTRA( sub_9261( l_U1528._fU1076[0] ), 5, 0 );
            TURN_OFF_VEHICLE_EXTRA( sub_9261( l_U1528._fU1076[0] ), 6, 0 );
            TURN_OFF_VEHICLE_EXTRA( sub_9261( l_U1528._fU1076[0] ), 7, 0 );
            TURN_OFF_VEHICLE_EXTRA( sub_9261( l_U1528._fU1076[0] ), 8, 0 );
            l_U1528._fU620++;
        }
        if ((l_U1528._fU1076[1] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
        {
            l_U1528._fU1076[1] = sub_23957( sub_6908( 83136452, -479.66190000, 186.17970000, 9.33010000, 270.86740000 ) );
            SET_NETWORK_ID_CAN_MIGRATE( l_U1528._fU1076[1], 0 );
            SET_CAR_HEALTH( sub_9261( l_U1528._fU1076[1] ), 2000 );
            SET_NETWORK_ID_CAN_MIGRATE( l_U1528._fU1076[1], 1 );
            CHANGE_CAR_COLOUR( sub_9261( l_U1528._fU1076[1] ), 0, 0 );
            SET_EXTRA_CAR_COLOURS( sub_9261( l_U1528._fU1076[1] ), 3, 0 );
            TURN_OFF_VEHICLE_EXTRA( sub_9261( l_U1528._fU1076[1] ), 5, 0 );
            TURN_OFF_VEHICLE_EXTRA( sub_9261( l_U1528._fU1076[1] ), 6, 0 );
            TURN_OFF_VEHICLE_EXTRA( sub_9261( l_U1528._fU1076[1] ), 7, 0 );
            TURN_OFF_VEHICLE_EXTRA( sub_9261( l_U1528._fU1076[1] ), 8, 0 );
            l_U1528._fU620++;
        }
    }
    if ((l_U1528._fU1168[0] == nil) AND (CAN_REGISTER_MISSION_OBJECT()))
    {
        l_U1528._fU1168[0] = sub_27048( sub_26991( 2117308820, 753.94870000, -311.89680000, 5.81340000, 0.00000000, 1 ) );
        SET_OBJECT_INVINCIBLE( sub_11398( l_U1528._fU1168[0] ), 1 );
        FREEZE_OBJECT_POSITION( sub_11398( l_U1528._fU1168[0] ), 1 );
        SET_OBJECT_VISIBLE( sub_11398( l_U1528._fU1168[0] ), 0 );
        SET_OBJECT_COLLISION( sub_11398( l_U1528._fU1168[0] ), 0 );
        SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES( l_U1528._fU1168[0], 1 );
        SET_NETWORK_ID_CAN_MIGRATE( l_U1528._fU1168[0], 1 );
        l_U1528._fU620++;
    }
    if ((l_U1528._fU1168[1] == nil) AND (CAN_REGISTER_MISSION_OBJECT()))
    {
        l_U1528._fU1168[1] = sub_27048( sub_26991( 2117308820, 753.36190000, -316.78710000, 5.81300000, 0.00000000, 1 ) );
        SET_OBJECT_INVINCIBLE( sub_11398( l_U1528._fU1168[1] ), 1 );
        FREEZE_OBJECT_POSITION( sub_11398( l_U1528._fU1168[1] ), 1 );
        SET_OBJECT_VISIBLE( sub_11398( l_U1528._fU1168[1] ), 0 );
        SET_OBJECT_COLLISION( sub_11398( l_U1528._fU1168[1] ), 0 );
        SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES( l_U1528._fU1168[1], 1 );
        SET_NETWORK_ID_CAN_MIGRATE( l_U1528._fU1168[1], 1 );
        l_U1528._fU620++;
    }
    if (l_U1528._fU620 == 7)
    {
        return 1;
    }
    return 0;
}

void sub_23957(unknown uParam0)
{
    unknown Result;

    GET_NETWORK_ID_FROM_VEHICLE( uParam0, ref Result );
    return Result;
}

void sub_26991(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown Result;

    CREATE_OBJECT( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, ref Result, uParam5 );
    SET_OBJECT_HEADING( Result, uParam4 );
    return Result;
}

void sub_27048(unknown uParam0)
{
    unknown Result;

    GET_NETWORK_ID_FROM_OBJECT( uParam0, ref Result );
    return Result;
}

void sub_27611()
{
    int I;

    for ( I = 0; I < 3; I++ )
    {
        if (sub_9236( l_U1528._fU1060[I] ))
        {
            if ((l_U1528._fU1024[I] == nil) AND (CAN_REGISTER_MISSION_PED()))
            {
                l_U1528._fU1024[I] = sub_27775( sub_27708( 1075583233, sub_9261( l_U1528._fU1060[I] ), 0 ) );
                SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( sub_10883( l_U1528._fU1024[I] ), 0 );
                SET_CHAR_WILL_USE_COVER( sub_10883( l_U1528._fU1024[I] ), 0 );
                SET_CHAR_DECISION_MAKER( sub_10883( l_U1528._fU1024[I] ), l_U2553 );
                GIVE_WEAPON_TO_CHAR( sub_10883( l_U1528._fU1024[I] ), 13, 10000, 1 );
                SET_CHAR_IS_TARGET_PRIORITY( sub_10883( l_U1528._fU1024[I] ), 1 );
                SET_CHAR_RELATIONSHIP_GROUP( sub_10883( l_U1528._fU1024[I] ), 24 );
                SET_PED_HEEDS_THE_EVERYONE_IGNORE_PLAYER_FLAG( sub_10883( l_U1528._fU1024[I] ), 0 );
                l_U3306++;
            }
            if ((l_U1528._fU1040[I] == nil) AND (CAN_REGISTER_MISSION_PED()))
            {
                l_U1528._fU1040[I] = sub_27775( sub_27708( 1075583233, sub_9261( l_U1528._fU1060[I] ), 1 ) );
                SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( sub_10883( l_U1528._fU1040[I] ), 0 );
                SET_CHAR_WILL_USE_COVER( sub_10883( l_U1528._fU1040[I] ), 0 );
                SET_CHAR_DECISION_MAKER( sub_10883( l_U1528._fU1040[I] ), l_U2553 );
                SET_COMBAT_DECISION_MAKER( sub_10883( l_U1528._fU1040[I] ), l_U2551 );
                GIVE_WEAPON_TO_CHAR( sub_10883( l_U1528._fU1040[I] ), 13, 10000, 1 );
                SET_CHAR_IS_TARGET_PRIORITY( sub_10883( l_U1528._fU1040[I] ), 1 );
                SET_CHAR_RELATIONSHIP_GROUP( sub_10883( l_U1528._fU1040[I] ), 24 );
                SET_PED_HEEDS_THE_EVERYONE_IGNORE_PLAYER_FLAG( sub_10883( l_U1528._fU1040[I] ), 0 );
                l_U3306++;
            }
            if (I == 1)
            {
                if ((l_U1528._fU1092 == nil) AND (CAN_REGISTER_MISSION_PED()))
                {
                    l_U1528._fU1092 = sub_27775( sub_27708( 1075583233, sub_9261( l_U1528._fU1060[I] ), 2 ) );
                    SET_CHAR_DECISION_MAKER( sub_10883( l_U1528._fU1092 ), l_U2553 );
                    SET_COMBAT_DECISION_MAKER( sub_10883( l_U1528._fU1092 ), l_U2551 );
                    SET_CHAR_IS_TARGET_PRIORITY( sub_10883( l_U1528._fU1092 ), 1 );
                    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( sub_10883( l_U1528._fU1092 ), 0 );
                    SET_CHAR_WILL_USE_COVER( sub_10883( l_U1528._fU1092 ), 0 );
                    GIVE_WEAPON_TO_CHAR( sub_10883( l_U1528._fU1092 ), 13, 10000, 1 );
                    SET_CHAR_RELATIONSHIP_GROUP( sub_10883( l_U1528._fU1092 ), 24 );
                    SET_PED_HEEDS_THE_EVERYONE_IGNORE_PLAYER_FLAG( sub_10883( l_U1528._fU1092 ), 0 );
                    l_U3306++;
                }
                if ((l_U1528._fU1096 == nil) AND (CAN_REGISTER_MISSION_PED()))
                {
                    l_U1528._fU1096 = sub_27775( sub_27708( 1075583233, sub_9261( l_U1528._fU1060[I] ), 3 ) );
                    SET_CHAR_DECISION_MAKER( sub_10883( l_U1528._fU1092 ), l_U2553 );
                    SET_COMBAT_DECISION_MAKER( sub_10883( l_U1528._fU1092 ), l_U2551 );
                    SET_CHAR_IS_TARGET_PRIORITY( sub_10883( l_U1528._fU1096 ), 1 );
                    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( sub_10883( l_U1528._fU1096 ), 0 );
                    SET_CHAR_WILL_USE_COVER( sub_10883( l_U1528._fU1096 ), 0 );
                    GIVE_WEAPON_TO_CHAR( sub_10883( l_U1528._fU1096 ), 12, 10000, 1 );
                    SET_CHAR_RELATIONSHIP_GROUP( sub_10883( l_U1528._fU1096 ), 24 );
                    SET_PED_HEEDS_THE_EVERYONE_IGNORE_PLAYER_FLAG( sub_10883( l_U1528._fU1096 ), 0 );
                    l_U3306++;
                }
            }
        }
    }
    if (l_U3306 == 8)
    {
        l_U1528._fU748 = 1;
    }
    return;
}

void sub_27708(unknown uParam0, unknown uParam1, int iParam2)
{
    unknown Result;

    if (iParam2 == 0)
    {
        CREATE_CHAR_INSIDE_CAR( uParam1, 26, uParam0, ref Result );
        return Result;
    }
    iParam2--;
    CREATE_CHAR_AS_PASSENGER( uParam1, 26, uParam0, iParam2, ref Result );
    return Result;
}

void sub_27775(unknown uParam0)
{
    unknown Result;

    GET_NETWORK_ID_FROM_PED( uParam0, ref Result );
    return Result;
}

int sub_29214()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_14137( I ))
        {
            if ((NOT l_U1863[I]._fU100) AND (NOT l_U1863[I]._fU116))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_5218( I ), -705.70340000, 343.41520000, 4.63430000, 10.00000000, 10.00000000, 8.00000000, 0 )))
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}

int sub_29471()
{
    int I;
    int iVar3;

    switch (l_U3320)
    {
        case 0:
        if (sub_29532() < 3)
        {
            l_U3320 = 1;
        }
        else if (sub_29532() == 3)
        {
            l_U3320 = 2;
        }
        else if (sub_29532() == 4)
        {
            l_U3320 = 3;
        };;;
        break;
        case 1:
        l_U2929[0] = {741.79510000, -208.65950000, 8.60110000};
        l_U2929[1] = {732.00440000, -231.12850000, 8.58700000};
        l_U2929[2] = {727.50000000, -252.93760000, 8.57630000};
        l_U2929[3] = {710.63750000, -279.72000000, 8.57900000};
        l_U2929[4] = {705.77520000, -294.54850000, 8.58030000};
        l_U2929[5] = {698.34670000, -305.50720000, 8.57770000};
        l_U2929[6] = {708.43600000, -245.52680000, 8.57490000};
        l_U2929[7] = {694.69860000, -272.22830000, 8.57850000};
        l_U3196[0] = 241.53790000;
        l_U3196[1] = 241.06730000;
        l_U3196[2] = 341.29310000;
        l_U3196[3] = 233.09060000;
        l_U3196[4] = 276.69170000;
        l_U3196[5] = 336.49990000;
        l_U3196[6] = 67.88990000;
        l_U3196[7] = 57.33270000;
        for ( I = 0; I < 8; I++ )
        {
            if (((l_U1528._fU1100[I] == nil) AND (CAN_REGISTER_MISSION_PED())) AND (sub_30036() < 30))
            {
                l_U1528._fU1100[I] = sub_30454( l_U2929[I], l_U3196[I] );
                SET_LOAD_COLLISION_FOR_CHAR_FLAG( sub_10883( l_U1528._fU1100[I] ), 1 );
                SET_NETWORK_ID_CAN_MIGRATE( l_U1528._fU1100[I], 1 );
                SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES( l_U1528._fU1100[I], 1 );
                SET_CHAR_DECISION_MAKER( sub_10883( l_U1528._fU1100[I] ), l_U2549 );
                if ((I < 2) || (I == 7))
                {
                    SET_COMBAT_DECISION_MAKER( sub_10883( l_U1528._fU1100[I] ), l_U2551 );
                }
                else
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar3 );
                    if (iVar3 == 0)
                    {
                        SET_COMBAT_DECISION_MAKER( sub_10883( l_U1528._fU1100[I] ), l_U2550 );
                    }
                    else
                    {
                        SET_COMBAT_DECISION_MAKER( sub_10883( l_U1528._fU1100[I] ), l_U2552 );
                    }
                }
                SET_SENSE_RANGE( sub_10883( l_U1528._fU1100[I] ), 70.00000000 );
                l_U3321++;
            }
        }
        if (NOT l_U1528._fU728)
        {
            if (l_U3321 == 8)
            {
                l_U1528._fU728 = 1;
                l_U3320 = 4;
            }
        }
        break;
        case 2:
        l_U2929[0] = {741.79510000, -208.65950000, 8.60110000};
        l_U2929[1] = {736.09380000, -222.10030000, 8.59650000};
        l_U2929[2] = {732.00440000, -231.12850000, 8.58700000};
        l_U2929[3] = {721.83340000, -246.43430000, 14.96150000};
        l_U2929[4] = {718.42720000, -269.83660000, 8.57850000};
        l_U2929[5] = {710.63750000, -279.72000000, 8.57900000};
        l_U2929[6] = {739.62700000, -197.84760000, 16.02390000};
        l_U2929[7] = {698.34670000, -305.50720000, 8.57770000};
        l_U2929[8] = {710.97090000, -230.73580000, 8.57850000};
        l_U2929[9] = {698.20520000, -256.35740000, 8.57700000};
        l_U2929[10] = {683.16690000, -287.33500000, 8.57920000};
        l_U3196[0] = 241.53790000;
        l_U3196[1] = 316.02630000;
        l_U3196[2] = 241.06730000;
        l_U3196[3] = 316.45810000;
        l_U3196[4] = 328.58640000;
        l_U3196[5] = 233.09060000;
        l_U3196[6] = 154.86070000;
        l_U3196[7] = 336.49990000;
        l_U3196[8] = 295.12030000;
        l_U3196[9] = 345.65200000;
        l_U3196[10] = 332.76580000;
        for ( I = 0; I < 11; I++ )
        {
            if ((l_U1528._fU1100[I] == nil) AND (CAN_REGISTER_MISSION_PED()))
            {
                l_U1528._fU1100[I] = sub_30454( l_U2929[I], l_U3196[I] );
                SET_LOAD_COLLISION_FOR_CHAR_FLAG( sub_10883( l_U1528._fU1100[I] ), 1 );
                SET_NETWORK_ID_CAN_MIGRATE( l_U1528._fU1100[I], 1 );
                SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES( l_U1528._fU1100[I], 1 );
                SET_CHAR_DECISION_MAKER( sub_10883( l_U1528._fU1100[I] ), l_U2549 );
                if ((I < 3) || (I == 7))
                {
                    SET_COMBAT_DECISION_MAKER( sub_10883( l_U1528._fU1100[I] ), l_U2551 );
                }
                else if ((I == 3) || (I == 6))
                {
                    SET_COMBAT_DECISION_MAKER( sub_10883( l_U1528._fU1100[I] ), l_U2555 );
                }
                else
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar3 );
                    if (iVar3 == 0)
                    {
                        SET_COMBAT_DECISION_MAKER( sub_10883( l_U1528._fU1100[I] ), l_U2550 );
                    }
                    else
                    {
                        SET_COMBAT_DECISION_MAKER( sub_10883( l_U1528._fU1100[I] ), l_U2552 );
                    }
                }
                SET_SENSE_RANGE( sub_10883( l_U1528._fU1100[I] ), 70.00000000 );
                l_U3321++;
            }
        }
        if (NOT l_U1528._fU728)
        {
            if (l_U3321 == 11)
            {
                l_U1528._fU728 = 1;
                l_U3320 = 4;
            }
        }
        break;
        case 3:
        l_U2929[0] = {741.79510000, -208.65950000, 8.60110000};
        l_U2929[1] = {736.09380000, -222.10030000, 8.59650000};
        l_U2929[2] = {732.00440000, -231.12850000, 8.58700000};
        l_U2929[3] = {721.83340000, -246.43430000, 14.96150000};
        l_U2929[4] = {727.50000000, -252.93760000, 8.57630000};
        l_U2929[5] = {718.42720000, -269.83660000, 8.57850000};
        l_U2929[6] = {710.63750000, -279.72000000, 8.57900000};
        l_U2929[7] = {705.77520000, -294.54850000, 8.58030000};
        l_U2929[8] = {739.62700000, -197.84760000, 16.02390000};
        l_U2929[9] = {698.34670000, -305.50720000, 8.57770000};
        l_U2929[10] = {695.96080000, -304.36310000, 8.57430000};
        l_U2929[11] = {710.97090000, -230.73580000, 8.57850000};
        l_U2929[12] = {708.43600000, -245.52680000, 8.57490000};
        l_U2929[13] = {698.20520000, -256.35740000, 8.57700000};
        l_U2929[14] = {694.69860000, -272.22830000, 8.57850000};
        l_U2929[15] = {683.16690000, -287.33500000, 8.57920000};
        l_U3196[0] = 241.53790000;
        l_U3196[1] = 316.02630000;
        l_U3196[2] = 241.06730000;
        l_U3196[3] = 316.45810000;
        l_U3196[4] = 341.29310000;
        l_U3196[5] = 328.58640000;
        l_U3196[6] = 233.09060000;
        l_U3196[7] = 276.69170000;
        l_U3196[8] = 154.86070000;
        l_U3196[9] = 336.49990000;
        l_U3196[10] = 328.95450000;
        l_U3196[11] = 295.12030000;
        l_U3196[12] = 67.88990000;
        l_U3196[13] = 345.65200000;
        l_U3196[14] = 57.33270000;
        l_U3196[15] = 332.76580000;
        for ( I = 0; I < 16; I++ )
        {
            if ((l_U1528._fU1100[I] == nil) AND (CAN_REGISTER_MISSION_PED()))
            {
                l_U1528._fU1100[I] = sub_30454( l_U2929[I], l_U3196[I] );
                SET_LOAD_COLLISION_FOR_CHAR_FLAG( sub_10883( l_U1528._fU1100[I] ), 1 );
                SET_NETWORK_ID_CAN_MIGRATE( l_U1528._fU1100[I], 1 );
                SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES( l_U1528._fU1100[I], 1 );
                SET_CHAR_DECISION_MAKER( sub_10883( l_U1528._fU1100[I] ), l_U2549 );
                if (((I < 3) || (I == 9)) || (I == 10))
                {
                    SET_COMBAT_DECISION_MAKER( sub_10883( l_U1528._fU1100[I] ), l_U2551 );
                }
                else if ((I == 3) || (I == 8))
                {
                    SET_COMBAT_DECISION_MAKER( sub_10883( l_U1528._fU1100[I] ), l_U2555 );
                }
                else
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar3 );
                    if (iVar3 == 0)
                    {
                        SET_COMBAT_DECISION_MAKER( sub_10883( l_U1528._fU1100[I] ), l_U2550 );
                    }
                    else
                    {
                        SET_COMBAT_DECISION_MAKER( sub_10883( l_U1528._fU1100[I] ), l_U2552 );
                    }
                }
                SET_SENSE_RANGE( sub_10883( l_U1528._fU1100[I] ), 70.00000000 );
                l_U3321++;
            }
        }
        if (NOT l_U1528._fU728)
        {
            if (l_U3321 == 16)
            {
                l_U1528._fU728 = 1;
                l_U3320 = 4;
            }
        }
        break;
        case 4:
        return 1;
        break;
    }
    return 0;
}

void sub_29532()
{
    int I;
    int Result;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if ((NOT l_U1863[I]._fU100) AND (NOT l_U1863[I]._fU116))
            {
                Result++;
            }
        }
    }
    return Result;
}

void sub_30036()
{
    int I;
    int Result;

    for ( I = 0; I < l_U1528._fU1100; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1528._fU1100[I] ))
        {
            Result++;
        }
    }
    for ( I = 0; I < l_U1528._fU1004; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1528._fU1004[I] ))
        {
            Result++;
        }
    }
    for ( I = 0; I < l_U1528._fU808; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1528._fU808[I] ))
        {
            Result++;
        }
    }
    for ( I = 0; I < l_U1528._fU852; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1528._fU852[I] ))
        {
            Result++;
        }
    }
    for ( I = 0; I < l_U1528._fU896; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1528._fU896[I] ))
        {
            Result++;
        }
    }
    for ( I = 0; I < l_U1528._fU940; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1528._fU940[I] ))
        {
            Result++;
        }
    }
    return Result;
}

void sub_30454(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    uVar6 = sub_21502( -503930010, uParam0, uParam3 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar6 );
    GIVE_WEAPON_TO_CHAR( uVar6, 13, 9999, 1 );
    SET_CHAR_RELATIONSHIP_GROUP( uVar6, 25 );
    SET_CHAR_HEALTH( uVar6, 200 );
    SET_CHAR_DECISION_MAKER( uVar6, l_U2553 );
    SET_CHAR_IS_TARGET_PRIORITY( uVar6, 1 );
    SET_PED_HEEDS_THE_EVERYONE_IGNORE_PLAYER_FLAG( uVar6, 0 );
    return sub_27775( uVar6 );
}

int sub_32974()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (NOT l_U1863[I]._fU116)
        {
            if (sub_14137( I ))
            {
                if (NOT (IS_CHAR_IN_WATER( sub_5218( I ) )))
                {
                    if (IS_CHAR_IN_ANGLED_AREA_3D( sub_5218( I ), 738.50190000, -163.15010000, -10.12230000, 657.86470000, -332.84000000, 33.50270000, 30.87500000, 0 ))
                    {
                        return 0;
                    }
                }
            }
        }
    }
    return 1;
}

void sub_33379()
{
    int I;

    for ( I = 0; I < l_U1528._fU1100; I++ )
    {
        if (sub_10858( l_U1528._fU1100[I] ))
        {
            sub_15034( sub_14621( l_U1528._fU1100[I], "Bc.net_FirstWave", I ) );
            l_U1528._fU1100[I] = nil;
        }
    }
    for ( I = 0; I < l_U1528._fU1004; I++ )
    {
        if (sub_10858( l_U1528._fU1004[I] ))
        {
            sub_15034( sub_14621( l_U1528._fU1004[I], "Bc.net_EnemySniper", I ) );
            l_U1528._fU1004[I] = nil;
        }
    }
    for ( I = 0; I < l_U1528._fU808; I++ )
    {
        if (sub_10858( l_U1528._fU808[I] ))
        {
            sub_15034( sub_14621( l_U1528._fU808[I], "Bc.net_CanteenEnemy", I ) );
            l_U1528._fU808[I] = nil;
        }
    }
    for ( I = 0; I < l_U1528._fU852; I++ )
    {
        if (sub_10858( l_U1528._fU852[I] ))
        {
            sub_15034( sub_14621( l_U1528._fU852[I], "Bc.net_SQEnemy", I ) );
            l_U1528._fU852[I] = nil;
        }
    }
    for ( I = 0; I < l_U1528._fU896; I++ )
    {
        if (sub_10858( l_U1528._fU896[I] ))
        {
            sub_15034( sub_14621( l_U1528._fU896[I], "Bc.net_WalkwaysEnemy", I ) );
            l_U1528._fU896[I] = nil;
        }
    }
    for ( I = 0; I < l_U1528._fU940; I++ )
    {
        if (sub_10858( l_U1528._fU940[I] ))
        {
            sub_15034( sub_14621( l_U1528._fU940[I], "Bc.net_CargoHoldEnemy", I ) );
            l_U1528._fU940[I] = nil;
        }
    }
    for ( I = 0; I < l_U1528._fU1024; I++ )
    {
        if (sub_10858( l_U1528._fU1024[I] ))
        {
            sub_15034( sub_14621( l_U1528._fU1024[I], "Bc.net_ConvoyDriver", I ) );
            l_U1528._fU1024[I] = nil;
        }
    }
    for ( I = 0; I < l_U1528._fU1040; I++ )
    {
        if (sub_10858( l_U1528._fU1040[I] ))
        {
            sub_15034( sub_14621( l_U1528._fU1040[I], "Bc.net_ConvoyPassenger", I ) );
            l_U1528._fU1040[I] = nil;
        }
    }
    for ( I = 0; I < l_U1528._fU1060; I++ )
    {
        if (sub_9236( l_U1528._fU1060[I] ))
        {
            sub_17843( sub_9261( l_U1528._fU1060[I] ) );
            l_U1528._fU1060[I] = nil;
        }
    }
    if (sub_10858( l_U1528._fU1092 ))
    {
        sub_15034( sub_14621( l_U1528._fU1092, "Bc.net_ConvoyPassenger02", -1 ) );
        l_U1528._fU1092 = nil;
    }
    if (sub_10858( l_U1528._fU1096 ))
    {
        sub_15034( sub_14621( l_U1528._fU1096, "Bc.net_ConvoyPassenger03", -1 ) );
        l_U1528._fU1096 = nil;
    }
    if (sub_9236( l_U1528._fU1056 ))
    {
        sub_17843( sub_9261( l_U1528._fU1056 ) );
        l_U1528._fU1056 = nil;
    }
    for ( I = 0; I < l_U1528._fU1076; I++ )
    {
        if (sub_9236( l_U1528._fU1076[I] ))
        {
            sub_17843( sub_9261( l_U1528._fU1076[I] ) );
            l_U1528._fU1076[I] = nil;
        }
    }
    if (DOES_OBJECT_EXIST_WITH_NETWORK_ID( l_U1528._fU1088 ))
    {
        sub_34735( sub_11398( l_U1528._fU1088 ) );
        l_U1528._fU1088 = nil;
    }
    for ( I = 0; I < l_U1528._fU1244; I++ )
    {
        if (DOES_PICKUP_EXIST( l_U1528._fU1244[I] ))
        {
            REMOVE_PICKUP( l_U1528._fU1244[I] );
            l_U1528._fU1244[I] = nil;
        }
    }
    for ( I = 0; I < l_U1528._fU1304; I++ )
    {
        if (DOES_PICKUP_EXIST( l_U1528._fU1304[I] ))
        {
            REMOVE_PICKUP( l_U1528._fU1304[I] );
            l_U1528._fU1304[I] = nil;
        }
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( 431692232 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1660661558 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 83136452 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1747439474 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1269098716 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1185749008 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1543404628 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1075583233 );
    REMOVE_ANIMS( "MISSBDB_2" );
    l_U1528._fU432 = 6;
    return;
}

void sub_34735(unknown uParam0)
{
    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_35120()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_14137( I ))
        {
            if (l_U1863[I]._fU136._fU16 == 1)
            {
                if (NOT l_U1528._fU624[0])
                {
                    l_U1528._fU436++;
                    l_U1528._fU624[0] = 1;
                }
            }
            if (l_U1863[I]._fU136._fU20 == 1)
            {
                if (NOT l_U1528._fU624[1])
                {
                    l_U1528._fU436++;
                    l_U1528._fU624[1] = 1;
                }
            }
        }
    }
    return;
}

void sub_35322()
{
    int I;

    if (NOT l_U2624)
    {
        for ( I = 0; I < 16; I++ )
        {
            if (sub_14137( I ))
            {
                if (sub_35403( 725.50340000, -293.02980000, 8.37780000, 680.54810000, -271.77020000, 39.00280000, 32.00000000 ))
                {
                    l_U2624 = 1;
                }
            }
        }
        if (l_U1528._fU728)
        {
            if (sub_30036() < 35)
            {
                if ((sub_29532() < 3) AND (l_U2663 < 5))
                {
                    if (sub_20011( -503930010 ))
                    {
                        sub_35598( 5 );
                    }
                }
                else if ((sub_29532() == 3) AND (l_U2663 < 10))
                {
                    if (sub_20011( -503930010 ))
                    {
                        sub_35598( 10 );
                    }
                }
                else if ((sub_29532() == 4) AND (l_U2663 < 15))
                {
                    if (sub_20011( -503930010 ))
                    {
                        sub_35598( 15 );
                    }
                };;;
            }
        }
    }
    for ( I = 0; I < 16; I++ )
    {
        if (sub_14137( I ))
        {
            if (sub_35403( 725.50340000, -293.02980000, 8.37780000, 680.54810000, -271.77020000, 39.00280000, 32.00000000 ))
            {
                l_U2601 = 1;
            }
        }
    }
    if (l_U2601)
    {
        if (NOT l_U1528._fU732)
        {
            if (sub_20011( -503930010 ))
            {
                sub_36195();
            }
        }
        if (sub_37788( l_U2782, l_U2785 ))
        {
            if (NOT l_U2603)
            {
                sub_37925( ref l_U1528._fU1100, 14, l_U2550 );
                sub_37925( ref l_U1528._fU808, 10, l_U2550 );
                l_U2603 = 1;
            }
        }
    }
    if (l_U1528._fU712)
    {
        if (NOT l_U2602)
        {
            if (NOT l_U1528._fU764)
            {
                if (sub_20011( -503930010 ))
                {
                    sub_38084();
                }
            }
        }
        else
        {
            for ( I = 0; I < 4; I++ )
            {
                if (sub_10858( l_U1528._fU1004[I] ))
                {
                    if (REQUEST_CONTROL_OF_NETWORK_ID( l_U1528._fU1004[I] ))
                    {
                        if (HAS_CHAR_GOT_WEAPON( sub_10883( l_U1528._fU1004[I] ), 16 ))
                        {
                            REMOVE_ALL_CHAR_WEAPONS( sub_10883( l_U1528._fU1004[I] ) );
                            GIVE_DELAYED_WEAPON_TO_CHAR( sub_10883( l_U1528._fU1004[I] ), 13, 10000, 1 );
                            sub_37925( ref l_U1528._fU1004, 4, l_U2552 );
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
            if (IS_NETWORK_PLAYER_ACTIVE( I ))
            {
                if (IS_CHAR_IN_AREA_3D( sub_5218( I ), 748.30140000, -211.36000000, 7.28690000, 738.88850000, -212.56150000, 10.88940000, 0 ))
                {
                    l_U1528._fU712 = 1;
                }
            }
        }
    }
    if (l_U2602)
    {
        if (NOT l_U1528._fU736)
        {
            if (sub_20011( -503930010 ))
            {
                sub_38977();
            }
        }
        if (NOT l_U2604)
        {
            if ((sub_37788( l_U2788, l_U2791 )) || (sub_37788( l_U2794, l_U2797 )))
            {
                sub_37925( ref l_U1528._fU852, 10, l_U2550 );
                l_U2604 = 1;
            }
        }
    }
    else
    {
        for ( I = 0; I < 16; I++ )
        {
            if (sub_14137( I ))
            {
                if (LOCATE_CHAR_ON_FOOT_3D( sub_5218( I ), 681.15620000, -317.72880000, 10.79860000, 3.00000000, 3.00000000, 3.00000000, 0 ))
                {
                    l_U2602 = 1;
                }
            }
        }
        if ((sub_35403( 694.93430000, -313.36400000, 13.92420000, 698.34550000, -314.92140000, 16.42420000, 2.50000000 )) || (sub_35403( 676.90500000, -304.61980000, 13.92500000, 680.30050000, -306.21120000, 16.42500000, 2.50000000 )))
        {
            l_U2602 = 1;
        }
    }
    if (NOT l_U1528._fU740)
    {
        if ((l_U2606) AND (NOT l_U2645))
        {
            if (sub_20011( -503930010 ))
            {
                sub_40114();
            }
        }
        if ((l_U2645) AND (NOT l_U2606))
        {
            if (sub_20011( -503930010 ))
            {
                sub_40860();
            }
        }
        if (sub_37788( l_U2978, l_U2981 ))
        {
            if (NOT l_U2645)
            {
                l_U2606 = 1;
            }
        }
        if ((sub_35403( 656.25020000, -292.99490000, 21.04980000, 719.50010000, -323.58010000, 35.17480000, 7.37500000 )) AND (NOT (sub_35403( 674.12860000, -317.38740000, 13.63660000, 689.64380000, -324.82330000, 17.01160000, 21.62500000 ))))
        {
            if (NOT l_U2606)
            {
                l_U2645 = 1;
            }
        }
    }
    for ( I = 0; I < 16; I++ )
    {
        if (sub_14137( I ))
        {
            if (LOCATE_CHAR_ON_FOOT_3D( sub_5218( I ), 676.44510000, -319.01790000, 6.44630000, 3.00000000, 3.00000000, 3.00000000, 0 ))
            {
                l_U1528._fU636 = 1;
            }
        }
    }
    if (l_U1528._fU636)
    {
        if (NOT l_U1528._fU744)
        {
            if (sub_20011( -503930010 ))
            {
                sub_41944();
            }
        }
    }
    return;
}

int sub_35403(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_14137( I ))
        {
            if (IS_CHAR_IN_ANGLED_AREA_3D( sub_5218( I ), uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, uParam6, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_35598(int iParam0)
{
    int iVar3;
    int I;

    for ( I = 0; I < iParam0; I++ )
    {
        if ((l_U1528._fU1100[I] == nil) AND (CAN_REGISTER_MISSION_PED()))
        {
            l_U1528._fU1100[I] = sub_30454( l_U3019, l_U3195 );
            SET_LOAD_COLLISION_FOR_CHAR_FLAG( sub_10883( l_U1528._fU1100[I] ), 1 );
            SET_ROOM_FOR_CHAR_BY_NAME( sub_10883( l_U1528._fU1100[I] ), "GtaMloRoom02" );
            SET_CHAR_DECISION_MAKER( sub_10883( l_U1528._fU1100[I] ), l_U2549 );
            SET_SENSE_RANGE( sub_10883( l_U1528._fU1100[I] ), 250.00000000 );
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar3 );
            if (iVar3 == 0)
            {
                SET_COMBAT_DECISION_MAKER( sub_10883( l_U1528._fU1100[I] ), l_U2552 );
            }
            else
            {
                SET_COMBAT_DECISION_MAKER( sub_10883( l_U1528._fU1100[I] ), l_U2551 );
            }
            SET_NETWORK_ID_CAN_MIGRATE( l_U1528._fU1100[I], 1 );
            l_U1528._fU1180[I] = sub_10883( l_U1528._fU1100[I] );
            l_U2663++;
            I = iParam0;
        }
    }
    return;
}

void sub_36195()
{
    int I;

    l_U3022[0] = {689.71430000, -306.56100000, 9.00000000};
    l_U3022[1] = {694.53410000, -312.71320000, 9.00000000};
    l_U3022[2] = {690.39360000, -315.16210000, 9.00000000};
    l_U3022[3] = {684.79260000, -316.77150000, 9.00000000};
    l_U3022[4] = {680.39070000, -314.38740000, 9.00000000};
    l_U3022[5] = {683.85940000, -320.80760000, 15.15000000};
    l_U3022[6] = {684.18540000, -319.04680000, 15.15000000};
    l_U3022[7] = {682.58970000, -318.33890000, 15.15000000};
    l_U3213[0] = 248.69800000;
    l_U3213[1] = 60.98280000;
    l_U3213[2] = 326.03810000;
    l_U3213[3] = 326.30870000;
    l_U3213[4] = 326.15620000;
    l_U3213[5] = 79.27390000;
    l_U3213[6] = 202.47380000;
    l_U3213[7] = 199.07360000;
    switch (l_U3322)
    {
        case 0:
        if (sub_29532() < 3)
        {
            l_U3322 = 1;
        }
        else if (sub_29532() == 3)
        {
            l_U3322 = 2;
        }
        else if (sub_29532() == 4)
        {
            l_U3322 = 3;
        };;;
        break;
        case 1:
        if (NOT l_U1528._fU732)
        {
            if (l_U3323 < 5)
            {
                for ( I = 0; I < 5; I++ )
                {
                    if ((l_U1528._fU808[I] == nil) AND (CAN_REGISTER_MISSION_PED()))
                    {
                        if (sub_30036() < 35)
                        {
                            if (NOT l_U3324[I])
                            {
                                l_U1528._fU808[I] = sub_30454( l_U3022[I], l_U3213[I] );
                                SET_LOAD_COLLISION_FOR_CHAR_FLAG( sub_10883( l_U1528._fU808[I] ), 1 );
                                SET_ROOM_FOR_CHAR_BY_NAME( sub_10883( l_U1528._fU808[I] ), "GtaMloRoom02" );
                                SET_CHAR_DECISION_MAKER( sub_10883( l_U1528._fU808[I] ), l_U2549 );
                                SET_COMBAT_DECISION_MAKER( sub_10883( l_U1528._fU808[I] ), l_U2551 );
                                l_U3324[I] = 1;
                                l_U3323++;
                            }
                        }
                    }
                }
            }
            else
            {
                l_U1528._fU732 = 1;
            }
        }
        break;
        case 2:
        if (NOT l_U1528._fU732)
        {
            if (l_U3323 < 8)
            {
                for ( I = 0; I < 8; I++ )
                {
                    if ((l_U1528._fU808[I] == nil) AND (CAN_REGISTER_MISSION_PED()))
                    {
                        if (sub_30036() < 35)
                        {
                            if (NOT l_U3324[I])
                            {
                                l_U1528._fU808[I] = sub_30454( l_U3022[I], l_U3213[I] );
                                SET_LOAD_COLLISION_FOR_CHAR_FLAG( sub_10883( l_U1528._fU808[I] ), 1 );
                                SET_CHAR_DECISION_MAKER( sub_10883( l_U1528._fU808[I] ), l_U2549 );
                                if (I < 5)
                                {
                                    SET_COMBAT_DECISION_MAKER( sub_10883( l_U1528._fU808[I] ), l_U2551 );
                                    SET_ROOM_FOR_CHAR_BY_NAME( sub_10883( l_U1528._fU808[I] ), "GtaMloRoom02" );
                                }
                                else
                                {
                                    SET_COMBAT_DECISION_MAKER( sub_10883( l_U1528._fU808[I] ), l_U2552 );
                                    SET_ROOM_FOR_CHAR_BY_NAME( sub_10883( l_U1528._fU808[I] ), "cargo_cabsrm" );
                                }
                                l_U3324[I] = 1;
                                l_U3323++;
                            }
                        }
                    }
                }
            }
            else
            {
                l_U1528._fU732 = 1;
            }
        }
        break;
        case 3:
        if (NOT l_U1528._fU732)
        {
            if (l_U3323 < 8)
            {
                for ( I = 0; I < 8; I++ )
                {
                    if ((l_U1528._fU808[I] == nil) AND (CAN_REGISTER_MISSION_PED()))
                    {
                        if (sub_30036() < 35)
                        {
                            if (NOT l_U3324[I])
                            {
                                l_U1528._fU808[I] = sub_30454( l_U3022[I], l_U3213[I] );
                                SET_LOAD_COLLISION_FOR_CHAR_FLAG( sub_10883( l_U1528._fU808[I] ), 1 );
                                SET_ROOM_FOR_CHAR_BY_NAME( sub_10883( l_U1528._fU808[I] ), "GtaMloRoom02" );
                                SET_CHAR_DECISION_MAKER( sub_10883( l_U1528._fU808[I] ), l_U2549 );
                                if (I < 5)
                                {
                                    SET_COMBAT_DECISION_MAKER( sub_10883( l_U1528._fU808[I] ), l_U2551 );
                                    SET_ROOM_FOR_CHAR_BY_NAME( sub_10883( l_U1528._fU808[I] ), "GtaMloRoom02" );
                                }
                                else
                                {
                                    SET_COMBAT_DECISION_MAKER( sub_10883( l_U1528._fU808[I] ), l_U2552 );
                                    SET_ROOM_FOR_CHAR_BY_NAME( sub_10883( l_U1528._fU808[I] ), "cargo_cabsrm" );
                                }
                                l_U3324[I] = 1;
                                l_U3323++;
                            }
                        }
                    }
                }
            }
            else
            {
                l_U1528._fU732 = 1;
            }
        }
        break;
    }
    return;
}

int sub_37788(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_14137( I ))
        {
            if (IS_CHAR_IN_AREA_3D( sub_5218( I ), uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_37925(unknown uParam0, int iParam1, unknown uParam2)
{
    int I;

    for ( I = 0; I < iParam1; I++ )
    {
        if (sub_10858( (uParam0^)[I] ))
        {
            SET_COMBAT_DECISION_MAKER( sub_10883( (uParam0^)[I] ), uParam2 );
        }
    }
    return;
}

void sub_38084()
{
    int I;

    if (NOT l_U1528._fU764)
    {
        for ( I = 0; I < 4; I++ )
        {
            if ((l_U1528._fU1004[I] == nil) AND (CAN_REGISTER_MISSION_PED()))
            {
                if (sub_38159( l_U2993[I] ))
                {
                    if (sub_30036() < 35)
                    {
                        l_U1528._fU1004[I] = sub_30454( l_U2993[I], l_U3172[I] );
                        if (I < 2)
                        {
                            SET_ROOM_FOR_CHAR_BY_NAME( sub_10883( l_U1528._fU1004[I] ), "cargo_cabsrm" );
                        }
                        else
                        {
                            SET_ROOM_FOR_CHAR_BY_NAME( sub_10883( l_U1528._fU1004[I] ), "cargbridgerm" );
                        }
                        SET_LOAD_COLLISION_FOR_CHAR_FLAG( sub_10883( l_U1528._fU1004[I] ), 1 );
                        SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES( l_U1528._fU1004[I], 1 );
                        SET_COMBAT_DECISION_MAKER( sub_10883( l_U1528._fU1004[I] ), l_U2554 );
                        SET_SENSE_RANGE( sub_10883( l_U1528._fU1004[I] ), 75.00000000 );
                        REMOVE_ALL_CHAR_WEAPONS( sub_10883( l_U1528._fU1004[I] ) );
                        GIVE_DELAYED_WEAPON_TO_CHAR( sub_10883( l_U1528._fU1004[I] ), 16, 10000, 1 );
                        SET_CHAR_SHOOT_RATE( sub_10883( l_U1528._fU1004[I] ), 10 );
                        l_U2664++;
                    }
                }
            }
        }
    }
    if (l_U2664 == 4)
    {
        l_U1528._fU764 = 1;
    }
    return;
}

int sub_38159(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_14137( I ))
        {
            GET_GAME_VIEWPORT_ID( ref l_U2510 );
            if (CAM_IS_SPHERE_VISIBLE( l_U2510, uParam0._fU0, uParam0._fU4, uParam0._fU8, 5.00000000 ))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_38977()
{
    int I;

    l_U3053[0] = {684.61110000, -317.17070000, 15.15000000};
    l_U3053[1] = {684.09640000, -314.15480000, 15.15000000};
    l_U3053[2] = {688.02720000, -312.70060000, 15.15000000};
    l_U3053[3] = {686.46620000, -307.78740000, 15.15000000};
    l_U3053[4] = {690.65140000, -306.26830000, 15.15000000};
    l_U3053[5] = {684.28230000, -301.99970000, 15.15000000};
    l_U3224[0] = 330.09270000;
    l_U3224[1] = 342.29520000;
    l_U3224[2] = 348.07600000;
    l_U3224[3] = 162.06210000;
    l_U3224[4] = 75.86960000;
    l_U3224[5] = 247.22570000;
    if (NOT l_U1528._fU736)
    {
        if (l_U3333 < 6)
        {
            for ( I = 0; I < 6; I++ )
            {
                if ((l_U1528._fU852[I] == nil) AND (CAN_REGISTER_MISSION_PED()))
                {
                    if (sub_30036() < 35)
                    {
                        if (NOT l_U3334[I])
                        {
                            l_U1528._fU852[I] = sub_30454( l_U3053[I], l_U3224[I] );
                            SET_LOAD_COLLISION_FOR_CHAR_FLAG( sub_10883( l_U1528._fU852[I] ), 1 );
                            SET_ROOM_FOR_CHAR_BY_NAME( sub_10883( l_U1528._fU852[I] ), "cargo_cabsrm" );
                            SET_CHAR_DECISION_MAKER( sub_10883( l_U1528._fU852[I] ), l_U2549 );
                            SET_COMBAT_DECISION_MAKER( sub_10883( l_U1528._fU852[I] ), l_U2551 );
                            TASK_COMBAT( sub_10883( l_U1528._fU852[I] ), sub_39510( sub_10883( l_U1528._fU852[I] ) ) );
                            l_U3334[I] = 1;
                            l_U3333++;
                        }
                    }
                }
            }
        }
        else
        {
            l_U1528._fU736 = 1;
        }
    }
    return;
}

void sub_39510(unknown uParam0)
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
            if (sub_14137( I ))
            {
                GET_CHAR_COORDINATES( sub_5218( I ), ref uVar8[I]._fU0, ref uVar8[I]._fU4, ref uVar8[I]._fU8 );
                GET_DISTANCE_BETWEEN_COORDS_3D( uVar5._fU0, uVar5._fU4, uVar5._fU8, uVar8[I]._fU0, uVar8[I]._fU4, uVar8[I]._fU8, ref fVar57 );
                if (fVar57 < fVar58)
                {
                    fVar58 = fVar57;
                    Result = sub_5218( I );
                }
            }
        }
    }
    return Result;
}

void sub_40114()
{
    int I;

    l_U3078[0] = {677.85670000, -324.36940000, 15.04460000};
    l_U3078[1] = {683.20180000, -326.04260000, 15.04460000};
    l_U3078[2] = {687.52890000, -321.98260000, 17.24790000};
    l_U3078[3] = {686.79650000, -318.09860000, 20.81890000};
    l_U3078[4] = {697.72130000, -308.08040000, 21.88250000};
    l_U3078[5] = {680.63820000, -302.60450000, 21.88320000};
    l_U3078[6] = {680.26420000, -312.75110000, 20.81850000};
    l_U3078[7] = {688.21930000, -302.93110000, 21.88600000};
    l_U3078[8] = {694.98350000, -305.96120000, 21.88590000};
    l_U3078[9] = {684.67850000, -304.28010000, 21.88810000};
    l_U3233[0] = 335.64470000;
    l_U3233[1] = 293.28500000;
    l_U3233[2] = 102.36440000;
    l_U3233[3] = 249.99380000;
    l_U3233[4] = 151.00780000;
    l_U3233[5] = 158.13520000;
    l_U3233[6] = 162.42910000;
    l_U3233[7] = 234.82430000;
    l_U3233[8] = 156.32400000;
    l_U3233[9] = 254.79170000;
    if (NOT l_U1528._fU740)
    {
        if (l_U3352 < 10)
        {
            for ( I = 0; I < 10; I++ )
            {
                if ((l_U1528._fU896[I] == nil) AND (CAN_REGISTER_MISSION_PED()))
                {
                    if (sub_30036() < 35)
                    {
                        if (NOT l_U3341[I])
                        {
                            l_U1528._fU896[I] = sub_30454( l_U3078[I], l_U3233[I] );
                            SET_LOAD_COLLISION_FOR_CHAR_FLAG( sub_10883( l_U1528._fU896[I] ), 1 );
                            if (I > 6)
                            {
                                SET_ROOM_FOR_CHAR_BY_NAME( sub_10883( l_U1528._fU896[I] ), "cargbridgerm" );
                            }
                            SET_CHAR_DECISION_MAKER( sub_10883( l_U1528._fU896[I] ), l_U2549 );
                            SET_COMBAT_DECISION_MAKER( sub_10883( l_U1528._fU896[I] ), l_U2551 );
                            l_U3341[I] = 1;
                            l_U3352++;
                        }
                    }
                }
            }
        }
        else
        {
            l_U1528._fU740 = 1;
        }
    }
    return;
}

void sub_40860()
{
    int I;

    l_U3078[0] = {685.63280000, -302.37420000, 14.03410000};
    l_U3078[1] = {686.64390000, -302.83850000, 14.03410000};
    l_U3078[2] = {687.73080000, -303.46380000, 14.03420000};
    l_U3078[3] = {691.77590000, -305.36340000, 14.01400000};
    l_U3078[4] = {693.49440000, -306.08920000, 14.03410000};
    l_U3078[5] = {695.71040000, -307.02550000, 14.03410000};
    l_U3078[6] = {685.47880000, -301.20980000, 21.88570000};
    l_U3078[7] = {686.76780000, -301.57860000, 21.88560000};
    l_U3078[8] = {695.21070000, -305.03270000, 21.88520000};
    l_U3078[9] = {693.01120000, -308.20510000, 21.88820000};
    l_U3233[0] = 68.62460000;
    l_U3233[1] = 68.62460000;
    l_U3233[2] = 68.62460000;
    l_U3233[3] = 247.06400000;
    l_U3233[4] = 247.06400000;
    l_U3233[5] = 247.06400000;
    l_U3233[6] = 161.05610000;
    l_U3233[7] = 161.07340000;
    l_U3233[8] = 185.26340000;
    l_U3233[9] = 306.18470000;
    if (NOT l_U1528._fU740)
    {
        if (l_U3352 < 10)
        {
            for ( I = 0; I < 10; I++ )
            {
                if ((l_U1528._fU896[I] == nil) AND (CAN_REGISTER_MISSION_PED()))
                {
                    if (sub_30036() < 35)
                    {
                        if (NOT l_U3341[I])
                        {
                            l_U1528._fU896[I] = sub_30454( l_U3078[I], l_U3233[I] );
                            SET_LOAD_COLLISION_FOR_CHAR_FLAG( sub_10883( l_U1528._fU896[I] ), 1 );
                            SET_CHAR_DECISION_MAKER( sub_10883( l_U1528._fU896[I] ), l_U2549 );
                            if (I > 5)
                            {
                                SET_COMBAT_DECISION_MAKER( sub_10883( l_U1528._fU896[I] ), l_U2551 );
                                SET_ROOM_FOR_CHAR_BY_NAME( sub_10883( l_U1528._fU896[I] ), "cargbridgerm" );
                            }
                            else
                            {
                                SET_COMBAT_DECISION_MAKER( sub_10883( l_U1528._fU896[I] ), l_U2552 );
                                TASK_COMBAT( sub_10883( l_U1528._fU896[I] ), sub_39510( sub_10883( l_U1528._fU896[I] ) ) );
                            }
                            l_U3341[I] = 1;
                            l_U3352++;
                        }
                    }
                }
            }
        }
        else
        {
            l_U1528._fU740 = 1;
        }
    }
    return;
}

void sub_41944()
{
    int I;

    l_U3109[0] = {689.58920000, -318.24880000, 3.07610000};
    l_U3109[1] = {691.64200000, -306.52660000, 2.44760000};
    l_U3109[2] = {694.74240000, -307.39260000, 2.44080000};
    l_U3109[3] = {687.56840000, -296.03290000, 1.96240000};
    l_U3109[4] = {695.33340000, -297.07070000, 1.96160000};
    l_U3109[5] = {701.53890000, -287.79750000, 1.96250000};
    l_U3109[6] = {687.98220000, -298.52500000, 3.25820000};
    l_U3109[7] = {698.93060000, -273.43380000, 1.94150000};
    l_U3109[8] = {709.43980000, -275.07500000, 1.94080000};
    l_U3109[9] = {708.07660000, -259.19980000, 1.96340000};
    l_U3177[0] = 129.67440000;
    l_U3177[1] = 189.59420000;
    l_U3177[2] = 136.61150000;
    l_U3177[3] = 229.11630000;
    l_U3177[4] = 181.41760000;
    l_U3177[5] = 196.75340000;
    l_U3177[6] = 151.39200000;
    l_U3177[7] = 191.14810000;
    l_U3177[8] = 111.79340000;
    l_U3177[9] = 204.41190000;
    if (NOT l_U1528._fU744)
    {
        if (l_U3353 < 10)
        {
            for ( I = 0; I < 10; I++ )
            {
                if ((l_U1528._fU940[I] == nil) AND (CAN_REGISTER_MISSION_PED()))
                {
                    if (sub_30036() < 35)
                    {
                        if (NOT l_U3354[I])
                        {
                            l_U1528._fU940[I] = sub_30454( l_U3109[I], l_U3177[I] );
                            SET_LOAD_COLLISION_FOR_CHAR_FLAG( sub_10883( l_U1528._fU940[I] ), 1 );
                            if (I < 3)
                            {
                                SET_ROOM_FOR_CHAR_BY_NAME( sub_10883( l_U1528._fU940[I] ), "GtaMloRoom02" );
                            }
                            else
                            {
                                SET_ROOM_FOR_CHAR_BY_NAME( sub_10883( l_U1528._fU940[I] ), "carholdrm" );
                            }
                            SET_CHAR_DECISION_MAKER( sub_10883( l_U1528._fU940[I] ), l_U2549 );
                            SET_COMBAT_DECISION_MAKER( sub_10883( l_U1528._fU940[I] ), l_U2551 );
                            l_U3354[I] = 1;
                            l_U3353++;
                        }
                    }
                }
            }
        }
        else
        {
            l_U1528._fU744 = 1;
        }
    }
    return;
}

void sub_42948(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16)
{
    int I;
    int iVar20;
    unknown[16] uVar21;
    unknown uVar38;

    iVar20 = GET_PLAYER_ID();
    array(ref uVar21, 16);
    sub_43015( ref uVar21, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam9, uParam10, uParam11, uParam12, uParam13, uParam14, uParam15, uParam16 );
    sub_43206( ref uVar21[iVar20], g_U18._fU636, g_U18._fU632 );
    if (NOT g_U18._fU1492)
    {
        switch (g_U18._fU632)
        {
            case 0:
            for ( I = 0; I <= (iParam0 - 1); I++ )
            {
                if ((I != iVar20) AND (IS_NETWORK_PLAYER_ACTIVE( I )))
                {
                    if (((sub_43355( ref uVar21[I] )) == iVar20) AND ((sub_43395( ref uVar21[I] )) == 3))
                    {
                        if ((NOT (NETWORK_IS_PLAYER_BLOCKED_BY_ME( I ))) AND (NOT (NETWORK_AM_I_BLOCKED_BY_PLAYER( I ))))
                        {
                            StrCopy( ref g_U18._fU584, GET_PLAYER_NAME( sub_5180( I ) ), 32 );
                            sub_3080( ref uVar21[iVar20], I, 1 );
                            break;
                        }
                    }
                }
            }
            break;
            case 1:
            if (g_U18._fU636 == 31)
            {
                sub_3080( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if (IS_NETWORK_PLAYER_ACTIVE( g_U18._fU636 ))
            {
                if (NOT (sub_43588( iVar20, g_U18._fU636, ref uVar38 )))
                {
                    sub_3080( ref uVar21[iVar20], 31, 4 );
                    break;
                }
                switch (sub_43395( ref uVar21[g_U18._fU636] ))
                {
                    case 3:
                    case 9: if ((sub_43355( ref uVar21[g_U18._fU636] )) == iVar20)
                    {
                        break;
                    }
                    default:
                    sub_3080( ref uVar21[iVar20], 31, 4 );
                    break;
                }
            }
            else
            {
                sub_3080( ref uVar21[iVar20], 31, 4 );
            }
            break;
            case 2:
            if (g_U18._fU636 == 31)
            {
                sub_3080( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if (IS_NETWORK_PLAYER_ACTIVE( g_U18._fU636 ))
            {
                if ((sub_43395( ref uVar21[g_U18._fU636] )) == 0)
                {
                    sub_3080( ref uVar21[iVar20], g_U18._fU636, 3 );
                    break;
                }
            }
            sub_3080( ref uVar21[iVar20], 31, 6 );
            break;
            case 3:
            if (g_U18._fU636 == 31)
            {
                sub_3080( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if (IS_NETWORK_PLAYER_ACTIVE( g_U18._fU636 ))
            {
                if (NOT (sub_43588( iVar20, g_U18._fU636, ref uVar38 )))
                {
                    sub_3080( ref uVar21[iVar20], 31, 4 );
                    break;
                }
                switch (sub_43395( ref uVar21[g_U18._fU636] ))
                {
                    case 0: break;
                    case 9:
                    case 1:
                    if ((sub_43355( ref uVar21[g_U18._fU636] )) == iVar20)
                    {
                        if ((sub_43395( ref uVar21[g_U18._fU636] )) == 9)
                        {
                            sub_3080( ref uVar21[iVar20], g_U18._fU636, 9 );
                        }
                        break;
                    }
                    sub_3080( ref uVar21[iVar20], 31, 6 );
                    break;
                    default:
                    sub_3080( ref uVar21[iVar20], 31, 4 );
                    break;
                }
            }
            else
            {
                sub_3080( ref uVar21[iVar20], 31, 6 );
            }
            break;
            case 9:
            if (g_U18._fU636 == 31)
            {
                sub_3080( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if (NOT (sub_43588( iVar20, g_U18._fU636, ref uVar38 )))
            {
                sub_3080( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if ((sub_43355( ref uVar21[g_U18._fU636] )) != iVar20)
            {
                sub_3080( ref uVar21[iVar20], 31, 4 );
            }
            break;
        }
    }
    sub_44403( iVar20, ref uVar21, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam9, uParam10, uParam11, uParam12, uParam13, uParam14, uParam15, uParam16 );
    return;
}

void sub_43015(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16)
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

void sub_43206(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_3111( uParam0, uParam1 );
    sub_3145( uParam0, uParam2 );
    return;
}

void sub_43355(unknown uParam0)
{
    return GET_BITS_IN_RANGE( (uParam0^), 0, 15 );
}

void sub_43395(unknown uParam0)
{
    return GET_BITS_IN_RANGE( (uParam0^), 16, 31 );
}

int sub_43588(unknown uParam0, int iParam1, unknown uParam2)
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

void sub_44403(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17)
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

void sub_44840(int iParam0)
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

    if ((NOT NETWORK_END_SESSION_PENDING()) AND (IS_NETWORK_SESSION()))
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
    if ((NOT NETWORK_END_SESSION_PENDING()) AND (IS_NETWORK_SESSION()))
    {
        SET_MULTIPLAYER_HUD_TIME( ref cVar14 );
    }
    return;
}

void sub_45128()
{
    int I;

    if (((l_U1528._fU780) AND (NOT l_U1528._fU784)) || (l_U2653))
    {
        DISABLE_PAUSE_MENU( 1 );
        if (IS_PAUSE_MENU_ACTIVE())
        {
            UNPAUSE_GAME();
            DEACTIVATE_FRONTEND();
        }
        for ( I = 0; I < l_U1528._fU1060; I++ )
        {
            if (DOES_BLIP_EXIST( l_U2577[I] ))
            {
                REMOVE_BLIP( l_U2577[I] );
            }
        }
        if (DOES_BLIP_EXIST( l_U2581 ))
        {
            REMOVE_BLIP( l_U2581 );
        }
        if ((l_U1863[GET_PLAYER_ID()]._fU28 == 0) || (l_U1863[GET_PLAYER_ID()]._fU28 == 5))
        {
            l_U1863[GET_PLAYER_ID()]._fU28 = 3;
        }
        if (NOT l_U1863[GET_PLAYER_ID()]._fU40)
        {
            l_U1863[GET_PLAYER_ID()]._fU40 = 1;
        }
        if ((l_U1863[GET_PLAYER_ID()]._fU28 == 0) || (l_U1863[GET_PLAYER_ID()]._fU28 == 3))
        {
            switch (l_U2669)
            {
                case 0:
                l_U1863[GET_PLAYER_ID()]._fU112 = 1;
                SET_CHAR_INVINCIBLE( sub_5471(), 1 );
                if (NOT l_U2653)
                {
                    PRINT_NOW( "COOP_BDB_MF_01", 5000, 1 );
                }
                l_U2669 = 1;
                l_U2673 = l_U2660 + 3500;
                break;
                case 1:
                if (l_U2660 > l_U2673)
                {
                    if (IS_SCREEN_FADED_OUT())
                    {
                        if (l_U1528._fU776)
                        {
                            sub_45641();
                            sub_46975();
                            sub_47971( 500 );
                            l_U1863[GET_PLAYER_ID()]._fU12 = -5;
                            l_U1863[GET_PLAYER_ID()]._fU8 = 1;
                            l_U2674 = l_U2660 + 2000;
                            l_U1863[GET_PLAYER_ID()]._fU12 = -5;
                            if (NETWORK_IS_SESSION_STARTED())
                            {
                                l_U1863[GET_PLAYER_ID()]._fU8 = 1;
                                l_U2669 = 2;
                            }
                            else
                            {
                                l_U1863[GET_PLAYER_ID()]._fU8 = 1;
                                l_U2669 = 3;
                            }
                        }
                        else if (IS_CHAR_DEAD( sub_5471() ))
                        {
                            N_312012851( sub_5471(), ref l_U2984._fU0, ref l_U2984._fU4, ref l_U2984._fU8 );
                            GET_CLOSEST_CAR_NODE( l_U2984._fU0, l_U2984._fU4, l_U2984._fU8, ref l_U2990._fU0, ref l_U2990._fU4, ref l_U2990._fU8 );
                            REQUEST_COLLISION_AT_POSN( l_U2990._fU0, l_U2990._fU4, l_U2990._fU8 );
                            RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), l_U2990, 0.00000000 );
                        }
                    }
                    else if ((l_U3390) || (l_U2653))
                    {
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            if (NOT IS_SCREEN_FADING_OUT())
                            {
                                sub_48383( 500 );
                            }
                        }
                    }
                    else if (IS_MESSAGE_BEING_DISPLAYED())
                    {
                        l_U3390 = 1;
                    };;;
                }
                break;
                case 2:
                sub_48462( 0 );
                if (l_U2660 > l_U2673)
                {
                    if (IS_SCREEN_FADED_IN())
                    {
                        if (sub_76090( 2147483647, 0 ))
                        {
                            if (NOT l_U1863[GET_PLAYER_ID()]._fU124)
                            {
                                l_U1863[GET_PLAYER_ID()]._fU124 = 1;
                            }
                        }
                        if (sub_79027())
                        {
                            l_U2669 = 4;
                            l_U2659 = 12;
                        }
                    }
                    else if (NOT IS_SCREEN_FADING_IN())
                    {
                        sub_47971( 500 );
                    }
                }
                break;
                case 3:
                if (l_U2660 > l_U2673)
                {
                    if (IS_SCREEN_FADED_IN())
                    {
                        sub_79220( 0 );
                        if (NOT l_U1863[GET_PLAYER_ID()]._fU128)
                        {
                            l_U1863[GET_PLAYER_ID()]._fU128 = 1;
                            sub_5169( GET_PLAYER_ID(), 0 );
                        }
                        else if (sub_79027())
                        {
                            l_U2669++;
                            l_U2659 = 12;
                        }
                    }
                    else if (NOT IS_SCREEN_FADING_IN())
                    {
                        sub_47971( 500 );
                    }
                }
                break;
            }
        }
    }
    if ((l_U1528._fU784) || (l_U2649))
    {
        DISABLE_PAUSE_MENU( 1 );
        if (IS_PAUSE_MENU_ACTIVE())
        {
            UNPAUSE_GAME();
            DEACTIVATE_FRONTEND();
        }
        for ( I = 0; I < l_U1528._fU1060; I++ )
        {
            if (DOES_BLIP_EXIST( l_U2577[I] ))
            {
                REMOVE_BLIP( l_U2577[I] );
            }
        }
        if (l_U1863[GET_PLAYER_ID()]._fU28 == 0)
        {
            l_U1863[GET_PLAYER_ID()]._fU28 = 3;
        }
        if (NOT l_U1863[GET_PLAYER_ID()]._fU40)
        {
            l_U1863[GET_PLAYER_ID()]._fU40 = 1;
        }
        if ((l_U1863[GET_PLAYER_ID()]._fU28 == 0) || (l_U1863[GET_PLAYER_ID()]._fU28 == 3))
        {
            switch (l_U2669)
            {
                case 0:
                l_U1863[GET_PLAYER_ID()]._fU112 = 1;
                SET_CHAR_INVINCIBLE( sub_5471(), 1 );
                if (NOT l_U2649)
                {
                    PRINT_NOW( "COOP_BDB_MF_02", 5000, 1 );
                }
                l_U2669 = 1;
                l_U2673 = l_U2660 + 3500;
                break;
                case 1:
                if (l_U2660 > l_U2673)
                {
                    if (IS_SCREEN_FADED_OUT())
                    {
                        if (l_U1528._fU776)
                        {
                            sub_5169( GET_PLAYER_ID(), 0 );
                            sub_45641();
                            sub_46975();
                            sub_47971( 500 );
                            l_U1863[GET_PLAYER_ID()]._fU12 = -5;
                            l_U1863[GET_PLAYER_ID()]._fU8 = 1;
                            l_U2674 = l_U2660 + 2000;
                            if (NOT sub_49946())
                            {
                                l_U1863[GET_PLAYER_ID()]._fU12 = -5;
                            }
                            if (NETWORK_IS_SESSION_STARTED())
                            {
                                l_U1863[GET_PLAYER_ID()]._fU8 = 1;
                                l_U2669 = 2;
                            }
                            else
                            {
                                l_U1863[GET_PLAYER_ID()]._fU8 = 1;
                                l_U2669 = 3;
                            }
                        }
                        else if (IS_CHAR_DEAD( sub_5471() ))
                        {
                            N_312012851( sub_5471(), ref l_U2984._fU0, ref l_U2984._fU4, ref l_U2984._fU8 );
                            GET_CLOSEST_CAR_NODE( l_U2984._fU0, l_U2984._fU4, l_U2984._fU8, ref l_U2990._fU0, ref l_U2990._fU4, ref l_U2990._fU8 );
                            REQUEST_COLLISION_AT_POSN( l_U2990._fU0, l_U2990._fU4, l_U2990._fU8 );
                            RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), l_U2990, 0.00000000 );
                        }
                    }
                    else if ((l_U3390) || (l_U2649))
                    {
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            if (NOT IS_SCREEN_FADING_OUT())
                            {
                                sub_48383( 500 );
                            }
                        }
                    }
                    else if (IS_MESSAGE_BEING_DISPLAYED())
                    {
                        l_U3390 = 1;
                    };;;
                }
                break;
                case 2:
                sub_48462( 0 );
                if (l_U2660 > l_U2673)
                {
                    if (IS_SCREEN_FADED_IN())
                    {
                        if (sub_76090( 2147483647, 0 ))
                        {
                            if (NOT l_U1863[GET_PLAYER_ID()]._fU124)
                            {
                                l_U1863[GET_PLAYER_ID()]._fU124 = 1;
                            }
                        }
                        if (sub_79027())
                        {
                            l_U2659 = 12;
                            l_U2669 = 4;
                        }
                    }
                    else if (NOT IS_SCREEN_FADING_IN())
                    {
                        sub_47971( 500 );
                    }
                }
                break;
                case 3:
                if (l_U2660 > l_U2673)
                {
                    if (IS_SCREEN_FADED_IN())
                    {
                        sub_79220( 0 );
                        if (NOT l_U1863[GET_PLAYER_ID()]._fU128)
                        {
                            l_U1863[GET_PLAYER_ID()]._fU128 = 1;
                            sub_5169( GET_PLAYER_ID(), 0 );
                        }
                        if (sub_79027())
                        {
                            l_U2659 = 12;
                            l_U2669++;
                        }
                    }
                    else if (NOT IS_SCREEN_FADING_IN())
                    {
                        sub_47971( 500 );
                    }
                }
                break;
            }
        }
    }
    return;
}

void sub_45641()
{
    sub_45650();
    sub_5169( GET_PLAYER_ID(), 0 );
    FREEZE_CHAR_POSITION( sub_5471(), 1 );
    SET_CHAR_COLLISION( sub_5471(), 0 );
    DISPLAY_HUD( 0 );
    sub_45965( ref l_U2546 );
    return;
}

void sub_45650()
{
    int I;

    for ( I = 0; I < 8; I++ )
    {
        sub_45681( ref l_U104[I] );
    }
    for ( I = 0; I < 16; I++ )
    {
        l_U579[I] = 0;
    }
    l_U577 = 0;
    l_U578 = 0;
    return;
}

void sub_45681(int iParam0)
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

void sub_45965(unknown uParam0)
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
    GET_INTERIOR_FROM_CHAR( sub_5471(), ref iVar16 );
    if (iVar16 == nil)
    {
        if ((GET_CLOSEST_CAR_NODE_WITH_HEADING( Result._fU0, Result._fU4, Result._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8, ref fVar15 )) AND (sub_46139( Result, uVar8, 60.00000000 )))
        {
            Result = {uVar8};
            uVar11._fU8 = fVar15;
            Result._fU8 += 2.00000000;
            uVar11._fU0 = sub_46266( 0.00000000, 15.00000000 );
            uVar11._fU4 = 0.00000000;
            uVar11._fU8 += sub_46266( -20.00000000, 20.00000000 );
            fVar14 = 65.00000000;
        }
        else if ((GET_CLOSEST_NETWORK_RESTART_NODE( Result, ref uVar8, ref fVar15 )) AND (sub_46139( Result, uVar8, 60.00000000 )))
        {
            Result = {uVar8};
            uVar11._fU8 = fVar15;
            Result._fU8 += 2.00000000;
            uVar11._fU0 = sub_46266( 0.00000000, 15.00000000 );
            uVar11._fU4 = 0.00000000;
            uVar11._fU8 += sub_46266( -20.00000000, 20.00000000 );
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
        GET_KEY_FOR_CHAR_IN_ROOM( sub_5471(), ref iVar3 );
        if (iVar3 == 0)
        {
            CLEAR_ROOM_FOR_VIEWPORT( sub_46592() );
        }
        else
        {
            SET_ROOM_FOR_VIEWPORT_BY_KEY( sub_46592(), iVar3 );
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
    SET_CAM_ROT( (uParam0^), uVar11._fU0, uVar11._fU4, sub_46812( uVar11._fU8 ) );
    SET_CAM_FOV( (uParam0^), fVar14 );
    SET_CAM_FAR_CLIP( (uParam0^), 2000.00000000 );
    SET_CAM_ACTIVE( (uParam0^), 1 );
    SET_CAM_PROPAGATE( (uParam0^), 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    return Result;
}

int sub_46139(vector vParam0, vector vParam3, float fParam6)
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

void sub_46266(unknown uParam0, unknown Result)
{
    GENERATE_RANDOM_FLOAT_IN_RANGE( uParam0, Result, ref Result );
    return Result;
}

void sub_46592()
{
    unknown Result;

    GET_GAME_VIEWPORT_ID( ref Result );
    return Result;
}

void sub_46812(float Result)
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

void sub_46975()
{
    int I;

    if ((((l_U1528._fU140 > 0) || (l_U1528._fU788)) || (l_U2657)) || (l_U1863[GET_PLAYER_ID()]._fU28 == 2))
    {
        for ( I = 0; I < 16; I++ )
        {
            if (sub_14137( I ))
            {
                l_U3274[I] = l_U1528._fU140;
            }
        }
        sub_47099( 3, ref l_U1528._fU224 );
        sub_47099( 4, ref l_U1528._fU292 );
        sub_47099( 6, ref l_U1528._fU68 );
        sub_47099( 20, ref l_U1528._fU156 );
        sub_47099( 22, ref l_U3274 );
    }
    return;
}

void sub_47099(int iParam0, unknown uParam1)
{
    int I;
    int J;

    if (((iParam0 == 20) AND (NOT sub_47112())) || (iParam0 == -3))
    {
        sub_47169( uParam1 );
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

int sub_47112()
{
    int iVar2;

    iVar2 = sub_7396();
    if ((iVar2 == 6) || (iVar2 == 7))
    {
        return 1;
    }
    return 0;
}

void sub_47169(unknown uParam0)
{
    int I;

    if (NOT l_U1082)
    {
        sub_47189();
        l_U1082 = 1;
    }
    for ( I = 0; I < 16; I++ )
    {
        if (l_U662[sub_7964()]._fU24[I] != (uParam0^)[I])
        {
            l_U662[sub_7964()]._fU24[I] = (uParam0^)[I];
            sub_47394( I );
        }
    }
    return sub_8343();
}

void sub_47189()
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

void sub_47394(unknown uParam0)
{
    unknown uVar3;

    if (l_U1004[uParam0] > 0)
    {
        uVar3 = l_U662[0]._fU24[l_U1004[uParam0] - 1];
        if (l_U662[sub_7964()]._fU24[uParam0] > l_U662[sub_7964()]._fU24[uVar3])
        {
            l_U662[0]._fU24[l_U1004[uParam0] - 1] = uParam0;
            l_U662[0]._fU24[l_U1004[uParam0]] = uVar3;
            l_U1004[uVar3]++;
            l_U1004[uParam0]--;
            sub_47394( uParam0 );
            return;
        }
    }
    if (l_U1004[uParam0] < 15)
    {
        uVar3 = l_U662[0]._fU24[l_U1004[uParam0] + 1];
        if (l_U662[sub_7964()]._fU24[uParam0] < l_U662[sub_7964()]._fU24[uVar3])
        {
            l_U662[0]._fU24[l_U1004[uParam0] + 1] = uParam0;
            l_U662[0]._fU24[l_U1004[uParam0]] = uVar3;
            l_U1004[uVar3]--;
            l_U1004[uParam0]++;
            sub_47394( uParam0 );
            return;
        }
    }
    return;
}

void sub_47971(unknown uParam0)
{
    SET_SCREEN_FADE( sub_47980(), 0, 0, 1, 0, 0, 0, 255, uParam0, 1.00000000, 1.00000000 );
    return;
}

void sub_47980()
{
    unknown Result;

    GET_SCREEN_VIEWPORT_ID( ref Result );
    return Result;
}

void sub_48383(unknown uParam0)
{
    SET_SCREEN_FADE( sub_47980(), 0, 0, 0, 0, 0, 0, 255, uParam0, 1.00000000, 1.00000000 );
    return;
}

void sub_48462(unknown uParam0)
{
    int I;
    unknown[16] uVar4;

    array(ref uVar4, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar4[I] = l_U1863[I]._fU12;
    }
    if (l_U1863[GET_PLAYER_ID()]._fU116)
    {
        return sub_48570( 8, ref uVar4, ref l_U1528._fU612, l_U1528._fU608, uParam0, 1, 0, 2147483647 );
        break;
    }
    return sub_48570( 8, ref uVar4, ref l_U1528._fU612, l_U1528._fU608, uParam0, 0, 0, 2147483647 );
}

int sub_48570(int iParam0, unknown uParam1, unknown uParam2, int iParam3, boolean bParam4, int iParam5, boolean bParam6, unknown uParam7)
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
    sub_3218();
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
            if (sub_20476())
            {
                if ((GET_PLAYER_TEAM( sub_8714() )) == -1)
                {
                    SET_PLAYER_TEAM( sub_8714(), sub_48762() );
                }
            }
            else if (sub_20431())
            {
                if ((GET_PLAYER_TEAM( sub_8714() )) == -1)
                {
                    SET_PLAYER_TEAM( sub_8714(), sub_49244( 2 ) );
                }
                else if (sub_20573() < 2)
                {
                    if ((sub_49607( GET_PLAYER_TEAM( sub_8714() ) )) > 1)
                    {
                        if (sub_49705( GET_PLAYER_ID() ))
                        {
                            SET_PLAYER_TEAM( sub_8714(), sub_49244( 2 ) );
                        }
                    }
                }
            }
            else if (sub_12891())
            {
                if ((GET_PLAYER_TEAM( sub_8714() )) != 0)
                {
                    SET_PLAYER_TEAM( sub_8714(), 0 );
                }
            }
            else if ((GET_PLAYER_TEAM( sub_8714() )) != -1)
            {
                SET_PLAYER_TEAM( sub_8714(), -1 );
            };;;;
        }
        if (sub_5520())
        {
            sub_49937( uParam1, uParam2 );
            sub_5584();
        }
    }
    bVar38 = false;
    if (iParam3 != 0)
    {
        sub_50123( iParam3, 1 );
        bVar38 = true;
    }
    else if ((uParam2^) != 0)
    {
        if (NOT l_U1366)
        {
            sub_50123( (uParam2^), 0 );
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
        if (sub_51194())
        {
            l_U1299 = 0;
        }
        sub_53737();
        return 0;
    }
    if (((sub_47112()) || (sub_12891())) || (sub_7396() == 10))
    {
        if ((bParam4) || (l_U966))
        {
            if (sub_54068())
            {
                sub_54095();
            }
            l_U965 = 0;
        }
        else if (sub_54665())
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
            if ((sub_7396() == 7) || (sub_7396() == 6))
            {
                sub_55530( 2, l_U965 );
            }
            else
            {
                sub_55530( 1, l_U965 );
            }
            if (l_U965)
            {
                sub_59028( 1 );
                INIT_FRONTEND_HELPER_TEXT();
                DRAW_FRONTEND_HELPER_TEXT( "BACK", "INPUT_F_CANCEL", 0 );
                if (sub_59789())
                {
                    DRAW_FRONTEND_HELPER_TEXT( "CAMERA", "PAD_BACK", 0 );
                    DRAW_FRONTEND_HELPER_TEXT( "SELECT_PLAYER", "PAD_LSTICK_LR", 1 );
                    if (l_U986 < 3)
                    {
                        DRAW_FRONTEND_HELPER_TEXT( "SPEC_RADIO", "PAD_DPAD_LR", 0 );
                        sub_59971();
                    }
                    sub_60286();
                }
                if (sub_53578())
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
        if (sub_53578())
        {
            l_U963 = 0;
        }
        else if (sub_53426())
        {
            if (NOT NETWORK_IS_OPERATION_PENDING())
            {
                UNPAUSE_GAME();
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    sub_48383( 0 );
                }
                sub_61294();
            }
        }
        if (l_U963)
        {
            SET_WIDESCREEN_FORMAT( 0 );
            DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
            SET_WIDESCREEN_FORMAT( 1 );
            sub_50159( 0, sub_51576(), sub_53882(), 0, 0, 0, 0, 0, 255 );
            GET_HUD_COLOUR( 49, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
            if (bParam4)
            {
                sub_51630( "WANT_TO_LEAVE", sub_61486( 106 ), sub_61519( 106 ), sub_61486( 107 ), sub_61519( 107 ), uVar15, uVar16, uVar17, 255, 1 );
            }
            else if (((sub_49946()) AND (sub_47112())) || (NOT sub_47112()))
            {
                sub_51630( "WANTTOLEAVEIG", sub_61486( 106 ), sub_61519( 106 ), sub_61486( 107 ), sub_61519( 107 ), uVar15, uVar16, uVar17, 255, 1 );
            }
            else
            {
                sub_51630( "WANTTOLEAVERACE", sub_61486( 106 ), sub_61519( 106 ), sub_61486( 107 ), sub_61519( 107 ), uVar15, uVar16, uVar17, 255, 1 );
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
            sub_53737();
            return 0;
        }
    }
    if (NOT l_U1365)
    {
        SET_LOBBY_MUTE_OVERRIDE( 1 );
        l_U1365 = 1;
    }
    if (sub_49946())
    {
        if (((sub_61912() == 1) || ((sub_62060() == 1) AND ((iParam0 == 7) || (l_U961)))) || ((sub_7904( GET_PLAYER_ID() )) AND (sub_8343() == 1)))
        {
            sub_59028( 0 );
        }
        else
        {
            sub_59028( 1 );
        }
    }
    else
    {
        sub_59028( 1 );
    }
    sub_53737();
    SET_WIDESCREEN_FORMAT( 1 );
    if ((iParam0 == 7) || (l_U961))
    {
        if (sub_62425())
        {
            bVar20 = true;
        }
        else
        {
            bVar20 = false;
        }
    }
    else if (sub_62734())
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
        if ((sub_61912() == 1) || ((sub_7904( GET_PLAYER_ID() )) AND (sub_8343() == 1)))
        {
            sub_50159( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
            GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
            sub_51630( "LAST_PLAYER_IN", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
            if ((sub_49946()) AND (N_604003528()))
            {
                SET_WIDESCREEN_FORMAT( 2 );
                sub_50159( 0, 0.00000000, sub_53882(), 0, 0, 0, 0, 0, 255 );
                GET_HUD_COLOUR( 56, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                if (GET_IS_WIDESCREEN())
                {
                    sub_51630( "NOT_COUNT_RANK", sub_51576() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, uVar15, uVar16, uVar17, 255, 2 );
                }
                else
                {
                    sub_51630( "NOT_COUNT_RANK", sub_51576() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, uVar15, uVar16, uVar17, 255, 2 );
                }
                SET_WIDESCREEN_FORMAT( 1 );
            }
        }
        else if (NOT (sub_7904( GET_PLAYER_ID() )))
        {
            if (iParam0 == 8)
            {
                sub_50159( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                if (bParam6)
                {
                    GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                    sub_51630( "MISSION_PASSED", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                }
                else
                {
                    GET_HUD_COLOUR( 4, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                    sub_51630( "MISSION_FAILED", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                }
            }
            else
            {
                sub_50159( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                if (bVar20)
                {
                    if ((iParam0 == 7) || (l_U961))
                    {
                        if (sub_62060() == 1)
                        {
                            GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                            sub_51630( "LAST_TEAM_IN", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                            if ((sub_49946()) AND (N_604003528()))
                            {
                                SET_WIDESCREEN_FORMAT( 2 );
                                sub_50159( 0, 0.00000000, sub_53882(), 0, 0, 0, 0, 0, 255 );
                                GET_HUD_COLOUR( 56, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                                if (GET_IS_WIDESCREEN())
                                {
                                    sub_51630( "NOT_COUNT_RANK", sub_51576() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, uVar15, uVar16, uVar17, 255, 2 );
                                }
                                else
                                {
                                    sub_51630( "NOT_COUNT_RANK", sub_51576() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, uVar15, uVar16, uVar17, 255, 2 );
                                }
                            }
                            SET_WIDESCREEN_FORMAT( 1 );
                        }
                        else
                        {
                            GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                            sub_51630( "EQUAL", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                        }
                    }
                    else
                    {
                        GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                        sub_51630( "EQUAL", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                    }
                }
                else if ((iParam0 == 7) || (l_U961))
                {
                    if (NOT l_U964)
                    {
                        if (sub_64015( l_U1030[0] ))
                        {
                            GET_TEAM_RGB_COLOUR( GET_PLAYER_TEAM( sub_8714() ), ref uVar15, ref uVar16, ref uVar17 );
                            if ((sub_64150( GET_PLAYER_TEAM( sub_8714() ) )) == 1)
                            {
                                StrCopy( ref cVar30, GET_STRING_FROM_TEXT_FILE( sub_64363( GET_PLAYER_TEAM( sub_8714() ), 1 ) ), 32 );
                                ConcatString(ref cVar30, " ", 32);
                                ConcatString(ref cVar30, GET_STRING_FROM_TEXT_FILE( "JOINTWINNER" ), 32);
                                sub_52797( 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, ref cVar30 );
                            }
                            else if (sub_64015( GET_PLAYER_TEAM( sub_8714() ) ))
                            {
                                StrCopy( ref cVar30, GET_STRING_FROM_TEXT_FILE( sub_64363( GET_PLAYER_TEAM( sub_8714() ), 1 ) ), 32 );
                                ConcatString(ref cVar30, " ", 32);
                                ConcatString(ref cVar30, GET_STRING_FROM_TEXT_FILE( "JOINT" ), 32);
                                ConcatString(ref cVar30, " ", 32);
                                ConcatString(ref cVar30, sub_64150( GET_PLAYER_TEAM( sub_8714() ) ), 32);
                                ConcatString(ref cVar30, sub_60612( sub_64150( GET_PLAYER_TEAM( sub_8714() ) ), 1 ), 32);
                                sub_52797( 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, ref cVar30 );
                            }
                            else
                            {
                                StrCopy( ref cVar30, GET_STRING_FROM_TEXT_FILE( sub_64363( GET_PLAYER_TEAM( sub_8714() ), 1 ) ), 32 );
                                ConcatString(ref cVar30, " ", 32);
                                ConcatString(ref cVar30, sub_64150( GET_PLAYER_TEAM( sub_8714() ) ), 32);
                                ConcatString(ref cVar30, sub_60612( sub_64150( GET_PLAYER_TEAM( sub_8714() ) ), 1 ), 32);
                                ConcatString(ref cVar30, " ", 32);
                                ConcatString(ref cVar30, GET_STRING_FROM_TEXT_FILE( "PLACE" ), 32);
                                sub_52797( 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, ref cVar30 );
                            }
                        }
                        else
                        {
                            GET_TEAM_RGB_COLOUR( l_U1030[0], ref uVar15, ref uVar16, ref uVar17 );
                            sub_66127( "TEAMNAME_WINS", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, sub_64363( l_U1030[0], 0 ) );
                        }
                    }
                }
                else if (sub_7819( GET_PLAYER_ID() ))
                {
                    if ((sub_7773( GET_PLAYER_ID() )) == 1)
                    {
                        GET_HUD_COLOUR( 16, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                        sub_51630( "JOINTWINNER", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                    }
                    else
                    {
                        GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                        StrCopy( ref cVar30, GET_STRING_FROM_TEXT_FILE( "JOINT" ), 32 );
                        ConcatString(ref cVar30, " ", 32);
                        ConcatString(ref cVar30, sub_7773( GET_PLAYER_ID() ), 32);
                        ConcatString(ref cVar30, sub_60612( sub_7773( GET_PLAYER_ID() ), 1 ), 32);
                        sub_52797( 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, ref cVar30 );
                    }
                }
                else if ((sub_7773( GET_PLAYER_ID() )) == 1)
                {
                    GET_HUD_COLOUR( 16, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                    sub_51630( "WINNERS", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                }
                else
                {
                    GET_HUD_COLOUR( 4, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                    string(ref cVar30, sub_7773( GET_PLAYER_ID() ), 32);
                    ConcatString(ref cVar30, sub_60612( sub_7773( GET_PLAYER_ID() ), 1 ), 32);
                    ConcatString(ref cVar30, " ", 32);
                    ConcatString(ref cVar30, GET_STRING_FROM_TEXT_FILE( "PLACE" ), 32);
                    sub_52797( 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, ref cVar30 );
                };;;;
            }
        }
    }
    else if (NOT sub_12891())
    {
        sub_50159( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
        GET_HUD_COLOUR( 4, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
        sub_50456( "ROUND_NUM", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, iParam5 );
    }
    for ( I = 0; I < 16; I++ )
    {
        if (sub_7852( l_U662[0]._fU24[I] ))
        {
            iVar13++;
        }
    }
    if ((iParam0 == 7) || (l_U961))
    {
        for ( J = 0; J < 8; J++ )
        {
            if ((sub_62451( l_U1030[J] )) > 0)
            {
                iVar13++;
            }
        }
    }
    if (iVar13 > 10)
    {
        sub_51922( ref l_U1085, (iVar13 - 10) + 1, 0 );
        bVar21 = true;
        iVar14 = iVar13;
        iVar13 = 10;
    }
    fVar28 = 0.00500000 * 2;
    for ( iVar11 = 0; iVar11 < 7; iVar11++ )
    {
        if (l_U662[iVar11]._fU16 != 0)
        {
            fVar28 += sub_66980( l_U662[iVar11]._fU16 );
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
                fVar26 += sub_66980( 1 );
            }
            else
            {
                fVar26 += (sub_66980( l_U662[iVar11]._fU16 )) * 0.50000000;
                DRAW_SPRITE( l_U599[l_U662[iVar11]._fU20], fVar26, fVar27 + -0.02370000, (fVar22 / 4) * 3, fVar22, 0.00000000, 255, 255, 255, 255 );
                fVar26 += (sub_66980( l_U662[iVar11]._fU16 )) * 0.50000000;
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
            sub_67878( ref iVar39, fVar26 + 0.00500000, fVar27 + 0.00400000, 0.36000000, 0.52500000, 0.04000000, 0.36000000, 0.52500000, 0.04000000, iParam0, 10, l_U1085, -1 );
        }
        else
        {
            sub_74042( ref iVar39, fVar26 + 0.00500000, fVar27 + 0.00400000, 0.36000000, 0.52500000, 0.04000000, iParam0, 10, l_U1085, -1 );
        }
    }
    else if ((iParam0 == 7) || (l_U961))
    {
        sub_67878( ref iVar39, fVar26 + 0.00500000, fVar27 + 0.00600000, 0.31300000, 0.47000000, 0.04000000, 0.31300000, 0.47000000, 0.04000000, iParam0, 10, l_U1085, -1 );
    }
    else
    {
        sub_74042( ref iVar39, fVar26 + 0.00500000, fVar27 + 0.00600000, 0.31300000, 0.47000000, 0.04000000, iParam0, 10, l_U1085, -1 );
    }
    if ((bParam4) AND (iParam5 == 0))
    {
        if ((sub_49946()) || (NOT N_604003528()))
        {
            if (NOT bVar38)
            {
                SET_WIDESCREEN_FORMAT( 2 );
                GET_FRONTEND_DESIGN_VALUE( 23, ref fVar24, ref fVar25 );
                GET_FRONTEND_DESIGN_VALUE( 24, ref fVar22, ref fVar23 );
                sub_50159( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                if ((l_U1257[GET_PLAYER_ID()] > -1) AND (l_U1257[GET_PLAYER_ID()] < (GET_PLAYER_RANK_LEVEL_DURING_MP( GET_PLAYER_ID() ))))
                {
                    sub_51630( "RANK_INCREASED", fVar24, fVar25, fVar22, fVar23, 255, 255, 255, 255, 2 );
                    sub_50159( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                    sub_51630( "NEWCLOTHESAVAIL", fVar24, fVar25 + 0.04050000, fVar22, fVar23, 255, 255, 255, 255, 2 );
                }
                else if ((GET_PLAYER_RANK_LEVEL_DURING_MP( GET_PLAYER_ID() )) < 10)
                {
                    sub_50456( "CASH_LEVELUP", fVar24, fVar25, fVar22, fVar23, 255, 255, 255, 255, 2, GET_LEFT_PLAYER_CASH_TO_REACH_LEVEL( (GET_PLAYER_RANK_LEVEL_DURING_MP( GET_PLAYER_ID() )) + 1 ) );
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
        if (sub_53426())
        {
            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_READY" );
            l_U1299 = 0;
            l_U1085 = 0;
            return 1;
        }
        else if (sub_53578())
        {
            l_U963 = 1;
        }
        else if (((sub_53240()) AND (NETWORK_GET_NUM_PLAYERS_MET() > 0)) AND (N_604003528()))
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
            if ((((((sub_47112()) || (sub_12891())) || (sub_7396() == 10)) AND (NOT l_U966)) AND (NOT IS_SCREEN_FADING())) AND (sub_54665()))
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
        if ((sub_53578()) AND (NOT l_U966))
        {
            l_U963 = 1;
        }
        else if (((((sub_53426()) AND (((sub_47112()) || (sub_12891())) || (sub_7396() == 10))) AND (NOT l_U966)) AND (NOT IS_SCREEN_FADING())) AND (sub_54665()))
        {
            l_U965 = 1;
        }
        else if ((((sub_53240()) AND (NETWORK_GET_NUM_PLAYERS_MET() > 0)) AND (N_604003528())) AND (NOT IS_SCREEN_FADING()))
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

int sub_48762()
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
        return sub_12021( 0, 2 );
    }
    else if (iVar5 == 1)
    {
        if ((GET_NO_OF_PLAYERS_IN_TEAM( -1 )) > (GET_NO_OF_PLAYERS_IN_TEAM( iVar6 )))
        {
            return sub_12021( 0, 2 );
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
        return sub_12021( 0, 8 );
    }
    else
    {
        iVar4 = sub_12021( 0, iVar5 );
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

int sub_49244(int iParam0)
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
            return sub_12021( 0, iParam0 );
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
            return sub_12021( 0, iParam0 );
        }
        else
        {
            iVar6 = sub_12021( 0, iVar5 );
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

void sub_49607(int iParam0)
{
    int I;
    int Result;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if ((GET_PLAYER_TEAM( sub_5180( I ) )) == iParam0)
            {
                Result++;
            }
        }
    }
    return Result;
}

int sub_49705(int iParam0)
{
    int I;
    int iVar4;
    int iVar5;

    iVar5 = GET_PLAYER_TEAM( sub_5180( iParam0 ) );
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if ((GET_PLAYER_TEAM( sub_5180( I ) )) == iVar5)
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

void sub_49937(unknown uParam0, unknown uParam1)
{
    int I;
    int iVar5;
    int iVar6;

    if (sub_49946())
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

void sub_49946()
{
    return NETWORK_IS_GAME_RANKED();
}

void sub_50123(int iParam0, boolean bParam1)
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
    sub_50159( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    GET_FRONTEND_DESIGN_VALUE( 23, ref uVar9, ref uVar10 );
    GET_FRONTEND_DESIGN_VALUE( 24, ref uVar11, ref uVar12 );
    GET_HUD_COLOUR( 49, ref uVar5, ref uVar6, ref uVar7, ref uVar8 );
    GET_NETWORK_TIMER( ref iVar4 );
    if (((iParam0 + 10000) - iVar4) > 0)
    {
        if (bParam1)
        {
            sub_50456( "STARTING_IN", uVar9, uVar10, uVar11, uVar12, 255, 255, 255, 255, 2, (((iParam0 + 10000) - iVar4) / 1000) + 1 );
        }
        else
        {
            sub_50781( uVar9, uVar10, uVar11, uVar12, 255, 255, 255, 255, 2, (((iParam0 + 10000) - iVar4) / 1000) + 1 );
        }
        if ((((iParam0 + 10000) - iVar4) + 1000) <= l_U1281)
        {
            PLAY_AUDIO_EVENT( "FRONTEND_OTHER_COUNTDOWN" );
            l_U1281 -= 1000;
        }
    }
    else if (bParam1)
    {
        sub_50456( "STARTING_IN", uVar9, uVar10, uVar11, uVar12, 255, 255, 255, 255, 2, 1 );
    }
    else
    {
        sub_50781( uVar9, uVar10, uVar11, uVar12, 255, 255, 255, 255, 2, 1 );
    }
    SET_WIDESCREEN_FORMAT( 3 );
    return;
}

void sub_50159(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
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

void sub_50456(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_50496( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_NUMBER( uParam0, uParam10 );
    DISPLAY_TEXT_WITH_NUMBER( uParam1, uParam2, uParam0, uParam10 );
    return Result;
}

void sub_50496(unknown uParam0, unknown uParam1)
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

void sub_50781(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam4, uParam5, uParam6, uParam7 );
    SET_TEXT_SCALE( uParam2, uParam3 );
    sub_50496( uParam8, ref uParam0 );
    Result = GET_STRING_WIDTH_WITH_NUMBER( "NUMBER", uParam9 );
    DISPLAY_TEXT_WITH_NUMBER( uParam0, uParam1, "NUMBER", uParam9 );
    return Result;
}

int sub_51194()
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
    sub_51235( 1 );
    GET_FRONTEND_DESIGN_VALUE( 113, ref uVar7, ref uVar8 );
    sub_50159( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    sub_51630( "RECENT_PLAYERS", sub_51576(), 0.08500000, uVar7, uVar8, 255, 255, 255, 255, 2 );
    sub_50159( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    GET_HUD_COLOUR( 56, ref uVar3, ref uVar4, ref uVar5, ref I );
    if (N_604003528())
    {
        sub_51630( "RECENTPLYRX360", sub_51576() + 0.00100000, fVar6, 0.31500000, 0.42950000, uVar3, uVar4, uVar5, 255, 2 );
    }
    else
    {
        sub_51630( "RECENTPLYRDESC", sub_51576() + 0.00100000, fVar6, 0.31500000, 0.42950000, uVar3, uVar4, uVar5, 255, 2 );
    }
    if (GET_IS_WIDESCREEN())
    {
        fVar6 = 0.21550000;
    }
    else
    {
        fVar6 = 0.21600000;
    }
    sub_51922( ref l_U1297, NETWORK_GET_NUM_PLAYERS_MET(), 0 );
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
            sub_50159( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
            if (l_U1297 == I)
            {
                sub_52797( sub_51576(), fVar6, 0.35000000, 0.47750000, 255, 255, 255, 255, 2, NETWORK_GET_MET_PLAYER_NAME( I ) );
            }
            else
            {
                sub_52797( sub_51576(), fVar6, 0.35000000, 0.47750000, uVar3, uVar4, uVar5, 255, 2, NETWORK_GET_MET_PLAYER_NAME( I ) );
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
    if (sub_53240())
    {
        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
        NETWORK_SHOW_MET_PLAYER_FEEDBACK_UI( l_U1297 );
    }
    else if (sub_53426())
    {
        NETWORK_SHOW_MET_PLAYER_PROFILE_UI( l_U1297 );
    }
    else if (sub_53578())
    {
        return 1;
    };;;
    return 0;
}

void sub_51235(boolean bParam0)
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

void sub_51576()
{
    unknown Result;
    unknown uVar3;

    GET_FRONTEND_DESIGN_VALUE( 112, ref Result, ref uVar3 );
    return Result;
}

void sub_51630(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_50496( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH( uParam0 );
    DISPLAY_TEXT( uParam1, uParam2, uParam0 );
    return Result;
}

int sub_51922(unknown uParam0, int iParam1, boolean bParam2)
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

void sub_52797(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam4, uParam5, uParam6, uParam7 );
    SET_TEXT_SCALE( uParam2, uParam3 );
    sub_50496( uParam8, ref uParam0 );
    Result = GET_STRING_WIDTH_WITH_STRING( "STRING", uParam9 );
    DISPLAY_TEXT_WITH_LITERAL_STRING( uParam0, uParam1, "STRING", uParam9 );
    return Result;
}

int sub_53240()
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

int sub_53426()
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

int sub_53578()
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

void sub_53737()
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
            sub_50159( 0, 0.00000000, 1.50000000, 0, 0, 0, 0, 0, 255 );
            sub_51630( "INVITE_RECIEVED", sub_53882() + -0.05050000, 0.09800000, 0.35000000, 0.47800000, 255, 255, 255, 255, 3 );
            DRAW_SPRITE( l_U599[34], sub_53882() + -0.02050000, 0.10580000, 0.09570000, 0.06320000, 0.00000000, 255, 255, 255, 255 );
        }
    }
    return;
}

float sub_53882()
{
    unknown uVar2;
    unknown uVar3;

    GET_FRONTEND_DESIGN_VALUE( 112, ref uVar2, ref uVar3 );
    return 1.00000000 - uVar2;
}

void sub_54068()
{
    return l_U1306;
}

void sub_54095()
{
    sub_54106( 0, 1 );
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    sub_54445();
    sub_54490();
    sub_54573();
    l_U1305 = 0;
    l_U1304 = 0;
    l_U1306 = 0;
    l_U1317 = 0;
    l_U1320 = 18;
    sub_47971( 0 );
    return;
}

void sub_54106(boolean bParam0, boolean bParam1)
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
        sub_47971( 0 );
    }
    return;
}

void sub_54445()
{
    SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY( 0 );
    if (IS_MOBILE_PHONE_RADIO_ACTIVE())
    {
        SET_MOBILE_PHONE_RADIO_STATE( 0 );
    }
    return;
}

void sub_54490()
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

void sub_54573()
{
    l_U1310 = 0;
    SET_FOLLOW_VEHICLE_CAM_SUBMODE( -1 );
    l_U1344 = -1;
    return;
}

int sub_54665()
{
    if (NOT (l_U1305 == 4))
    {
        if (NOT sub_54687())
        {
            return 1;
        }
        else if (NOT (l_U1304 == 0))
        {
            sub_54106( 0, 1 );
            l_U1305 = 4;
        }
    }
    else if (l_U1312)
    {
        sub_54967();
    }
    else if (l_U1317)
    {
        if (NOT sub_54687())
        {
            l_U1304 = 0;
            l_U1317 = 0;
            sub_54490();
            if (IS_IN_SPECTATOR_MODE())
            {
                SET_IN_SPECTATOR_MODE( 0 );
            }
            l_U1305 = 0;
        }
    };;;
    return 0;
}

int sub_54687()
{
    int I;

    for ( I = 0; I <= 15; I++ )
    {
        if (sub_54710( I ))
        {
            return 0;
        }
    }
    return 1;
}

int sub_54710(int iParam0)
{
    if ((iParam0 >= 0) AND (iParam0 < 16))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( iParam0 ))
        {
            if (NOT (iParam0 == GET_PLAYER_ID()))
            {
                if ((NOT (IS_CHAR_INJURED( sub_5218( iParam0 ) ))) || ((iParam0 == l_U1318) AND (NOT l_U1316)))
                {
                    if ((NOT l_U1048[iParam0]) AND (NOT l_U1065[iParam0]))
                    {
                        if ((IS_PLAYER_SCRIPT_CONTROL_ON( CONVERT_INT_TO_PLAYERINDEX( iParam0 ) )) || ((IS_CHAR_IN_ANY_CAR( sub_5218( iParam0 ) )) AND (l_U1304 == 2)))
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

void sub_54967()
{
    if (NOT l_U1313)
    {
        if (NOT l_U1314)
        {
            if (DOES_CAM_EXIST( l_U1342 ))
            {
                if ((NOT IS_SCREEN_FADED_OUT()) AND (NOT IS_SCREEN_FADING()))
                {
                    sub_48383( 200 );
                }
                else if (NOT (IS_CHAR_DEAD( sub_5471() )))
                {
                    SET_CHAR_COORDINATES( sub_5471(), l_U1338._fU0, l_U1338._fU4, l_U1338._fU8 );
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
        sub_47971( 200 );
        l_U1313 = 0;
        l_U1314 = 1;
    }
    if (l_U1314)
    {
        if ((NOT sub_54687()) AND (IS_SCREEN_FADED_IN()))
        {
            l_U1305 = 0;
            sub_54490();
        }
    }
    return;
}

void sub_55530(unknown uParam0, boolean bParam1)
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
        sub_55695();
        if (NOT bParam1)
        {
            sub_54106( 1, 0 );
            l_U1309 = 0;
        }
    }
    else if (bParam1)
    {
        l_U1309 = 1;
        if (IS_IN_SPECTATOR_MODE())
        {
            l_U1305 = 2;
            sub_56016();
        }
        else if (l_U1308)
        {
            sub_56094();
            l_U1319 = -1;
            if (NOT (l_U1318 == -1))
            {
                fVar4 = sub_56148( sub_5471(), sub_5218( l_U1318 ) );
                if ((((fVar4 < 30) AND (NOT (fVar4 == -1))) AND (NOT IS_SCREEN_FADING())) AND (NOT (IS_CHAR_DEAD( sub_5471() ))))
                {
                    sub_56016();
                    if (NOT sub_56425())
                    {
                        ;
                    }
                    sub_56612();
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
                    sub_48383( 200 );
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
                        if (sub_54710( l_U1319 ))
                        {
                            l_U1318 = l_U1319;
                            l_U1319 = -1;
                        }
                        else
                        {
                            sub_56094();
                        }
                    }
                    else if (NOT (sub_54710( l_U1318 )))
                    {
                        sub_56094();
                    }
                }
                else if (NOT (sub_54710( l_U1319 )))
                {
                    sub_56094();
                }
                if (NOT sub_56425())
                {
                    ;
                }
                sub_56016();
                if (l_U1308)
                {
                    sub_56612();
                    l_U1308 = 0;
                }
                ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 0 );
                l_U1307 = 1;
                l_U1324 = l_U1325 + 5000;
            }
            else if (NOT sub_57083())
            {
                if (l_U1309)
                {
                    l_U1318 = sub_57136();
                    if (NOT sub_56425())
                    {
                        ;
                    }
                    l_U1324 = l_U1325 + 5000;
                }
                else
                {
                    sub_54106( 1, 1 );
                }
            }
            else
            {
                sub_57685();
                if (((GET_NUM_STREAMING_REQUESTS() < 5) AND (NOT IS_STREAMING_PRIORITY_REQUESTS())) || (l_U1324 < l_U1325))
                {
                    if (NOT sub_56425())
                    {
                        ;
                    }
                    ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
                    l_U1305 = 2;
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    sub_47971( 200 );
                }
                else if ((NOT IS_SCREEN_FADING()) AND (l_U1309))
                {
                    sub_57685();
                    sub_57996( 1 );
                }
            }
        }
        break;
        case 2:
        sub_56425();
        if (NOT sub_57083())
        {
            if (l_U1309)
            {
                l_U1319 = sub_57136();
                if (l_U1319 != -1)
                {
                    if ((sub_56148( sub_5471(), sub_5218( l_U1319 ) )) < 30)
                    {
                        l_U1318 = l_U1319;
                        if (NOT sub_56425())
                        {
                            ;
                        }
                        l_U1319 = -1;
                    }
                    else
                    {
                        sub_54106( 0, 1 );
                    }
                }
            }
            else
            {
                sub_54106( 1, 1 );
            }
        }
        else if (IS_NETWORK_PLAYER_ACTIVE( l_U1318 ))
        {
            if (IS_CHAR_INJURED( sub_5218( l_U1318 ) ))
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
        sub_57685();
        if (l_U1309)
        {
            if (NOT IS_SCREEN_FADING())
            {
                sub_57996( 0 );
            }
        }
        break;
    }
    return;
}

void sub_55695()
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

void sub_56016()
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

int sub_56094()
{
    int I;
    int iVar3;
    float fVar4;
    float fVar5;

    iVar3 = -1;
    fVar4 = 10000;
    for ( I = 0; I <= 15; I++ )
    {
        if (sub_54710( I ))
        {
            fVar5 = sub_56148( sub_5471(), sub_5218( I ) );
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

float sub_56148(unknown uParam0, unknown uParam1)
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

int sub_56425()
{
    if ((l_U1318 >= 0) AND (l_U1318 < 16))
    {
        if ((l_U1318 < 16) AND (l_U1318 != GET_PLAYER_ID()))
        {
            if (IS_NETWORK_PLAYER_ACTIVE( l_U1318 ))
            {
                if (DOES_CHAR_EXIST( sub_5218( l_U1318 ) ))
                {
                    if (NOT (IS_CHAR_INJURED( sub_5218( l_U1318 ) )))
                    {
                        l_U1315 = 0;
                        l_U1316 = 0;
                        l_U1344 = 1;
                        GET_GAME_CAM( ref l_U1341 );
                        SET_CAM_TARGET_PED( l_U1341, sub_5218( l_U1318 ) );
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_56612()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_CHAR_DEAD( sub_5471() ))
    {
        N_312012851( sub_5471(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        REQUEST_COLLISION_AT_POSN( uVar2._fU0, uVar2._fU4, uVar2._fU8 );
        RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), uVar2, 0 );
    }
    SET_CHAR_COLLISION( sub_5471(), 0 );
    SET_CHAR_VISIBLE( sub_5471(), 0 );
    FREEZE_CHAR_POSITION( sub_5471(), 1 );
    return;
}

int sub_57083()
{
    unknown uVar2;

    if (sub_54710( l_U1318 ))
    {
        return 1;
    }
    return 0;
}

int sub_57136()
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
            if (sub_57176( Result ))
            {
                return Result;
            }
        }
        for ( Result = 0; Result <= l_U1318; Result++ )
        {
            if (sub_57176( Result ))
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
                if (sub_57176( l_U662[0]._fU24[iVar6] ))
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

int sub_57176(int iParam0)
{
    if ((iParam0 >= 0) AND (iParam0 < 16))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( iParam0 ))
        {
            if (NOT (iParam0 == GET_PLAYER_ID()))
            {
                if ((NOT (IS_CHAR_INJURED( sub_5218( iParam0 ) ))) AND (NOT (iParam0 == l_U1318)))
                {
                    if ((NOT l_U1048[iParam0]) AND (NOT l_U1065[iParam0]))
                    {
                        if ((IS_PLAYER_SCRIPT_CONTROL_ON( CONVERT_INT_TO_PLAYERINDEX( iParam0 ) )) || ((IS_CHAR_IN_ANY_CAR( sub_5218( iParam0 ) )) AND (l_U1304 == 2)))
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

void sub_57685()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_NETWORK_PLAYER_ACTIVE( l_U1318 ))
    {
        if (NOT (IS_CHAR_INJURED( sub_5218( l_U1318 ) )))
        {
            GET_CHAR_COORDINATES( sub_5218( l_U1318 ), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            if (NOT (IS_CHAR_DEAD( sub_5471() )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_5471() )))
                {
                    SET_CHAR_COORDINATES( sub_5471(), uVar2._fU0, uVar2._fU4, uVar2._fU8 - 10 );
                }
                else
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_5471(), uVar2._fU0, uVar2._fU4, uVar2._fU8 - 10 );
                }
            }
            SET_CHAR_COLLISION( sub_5471(), 0 );
            SET_CHAR_VISIBLE( sub_5471(), 0 );
        }
    }
    return;
}

void sub_57996(boolean bParam0)
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
        l_U1319 = sub_57136();
        if (NOT (l_U1319 == -1))
        {
            fVar3 = sub_56148( sub_5471(), sub_5218( l_U1319 ) );
            if (((fVar3 < 30) AND (NOT (fVar3 == -1))) || (bParam0))
            {
                l_U1318 = l_U1319;
                if (NOT sub_56425())
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
                sub_54106( 0, 1 );
            }
            l_U1311 = 1;
        }
    }
    else if (l_U1321 < 65456)
    {
        l_U1319 = sub_58238();
        if (NOT (l_U1319 == -1))
        {
            fVar3 = sub_56148( sub_5471(), sub_5218( l_U1319 ) );
            if (((fVar3 < 30) AND (NOT (fVar3 == -1))) || (bParam0))
            {
                l_U1318 = l_U1319;
                if (NOT sub_56425())
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
                sub_54106( 0, 1 );
            }
            l_U1311 = 1;
        }
    };;;
    return;
}

int sub_58238()
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
            if (sub_57176( Result ))
            {
                return Result;
            }
        }
        for ( Result = 15; Result >= l_U1318; Result += -1 )
        {
            if (sub_57176( Result ))
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
                if (sub_57176( l_U662[0]._fU24[iVar6] ))
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

void sub_59028(unknown uParam0)
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
    sub_59347( uParam0 );
    return;
}

void sub_59347(boolean bParam0)
{
    char[16] cVar3;
    unknown uVar7;
    unknown uVar8;

    StrCopy( ref cVar3, "NTGT_", 16 );
    ConcatString(ref cVar3, sub_7396(), 16);
    GET_FRONTEND_DESIGN_VALUE( 113, ref uVar7, ref uVar8 );
    sub_50159( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    if (bParam0)
    {
        if (sub_49946())
        {
            sub_51630( ref cVar3, sub_51576() + 0.03250000, 0.11900000, uVar7, uVar8, 255, 255, 255, 255, 2 );
            DRAW_SPRITE( l_U599[15], sub_51576() + 0.01100000, 0.11900000 + 0.02300000, 0.03100000, 0.04400000, 0.00000000, 255, 255, 255, 255 );
        }
        else
        {
            sub_51630( ref cVar3, sub_51576(), 0.11900000, uVar7, uVar8, 255, 255, 255, 255, 2 );
        }
    }
    else if (sub_49946())
    {
        sub_51630( ref cVar3, sub_51576() + 0.03250000, 0.08500000, uVar7, uVar8, 255, 255, 255, 255, 2 );
        DRAW_SPRITE( l_U599[15], sub_51576() + 0.01100000, 0.08500000 + 0.02300000, 0.03100000, 0.04400000, 0.00000000, 255, 255, 255, 255 );
    }
    else
    {
        sub_51630( ref cVar3, sub_51576(), 0.08500000, uVar7, uVar8, 255, 255, 255, 255, 2 );
    }
    return;
}

int sub_59789()
{
    if (((l_U1309) AND (IS_IN_SPECTATOR_MODE())) AND (l_U1318 > -1))
    {
        if (sub_57083())
        {
            return 1;
        }
        return 0;
    }
    return 0;
}

void sub_59971()
{
    char[16] cVar2;
    unknown uVar6;

    SET_WIDESCREEN_FORMAT( 3 );
    DRAW_SPRITE( l_U599[0], sub_53882() - (0.01400000 / 2), l_U1330 - (0.02000000 / 2), 0.01400000, 0.02000000, 0.00000000, 255, 255, 255, 255 );
    SET_TEXT_SCALE( 0.31500000, 0.43000000 );
    sub_50159( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    StrCopy( ref cVar2, "RADIO_OPT", 16 );
    ConcatString(ref cVar2, l_U1320, 16);
    uVar6 = GET_STRING_WIDTH( ref cVar2 );
    sub_51630( ref cVar2, (sub_53882() - 0.01400000) - l_U1329, l_U1330 + l_U1328, 0.31500000, 0.43000000, 255, 255, 255, 255, 3 );
    DRAW_SPRITE( l_U599[0], ((sub_53882() - (0.01400000 * 1.50000000)) - uVar6) - (l_U1329 * 2), l_U1330 - (0.02000000 / 2), 0.01400000 * -1, 0.02000000, 0.00000000, 255, 255, 255, 255 );
    return;
}

void sub_60286()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    char[32] cVar7;
    unknown uVar15;

    SET_WIDESCREEN_FORMAT( 3 );
    DRAW_SPRITE( l_U599[0], sub_53882() - (0.01400000 / 2), l_U1327 - (0.02000000 / 2), 0.01400000, 0.02000000, 0.00000000, 255, 255, 255, 255 );
    SET_TEXT_SCALE( 0.31500000, 0.43000000 );
    sub_50159( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    if (NOT (l_U1304 == 2))
    {
        StrCopy( ref cVar7, sub_60427(), 32 );
    }
    else
    {
        string(ref cVar7, sub_60495( l_U1318 ), 32);
        ConcatString(ref cVar7, sub_60612( sub_60495( l_U1318 ), 0 ), 32);
        ConcatString(ref cVar7, " : ", 32);
        ConcatString(ref cVar7, sub_60427(), 32);
    }
    SET_TEXT_USE_UNDERSCORE( 1 );
    uVar15 = GET_STRING_WIDTH_WITH_STRING( "STRING", ref cVar7 );
    sub_60862( ref uVar2, ref uVar3, ref uVar4 );
    SET_TEXT_COLOUR( uVar2, uVar3, uVar4, 255 );
    sub_52797( (sub_53882() - 0.01400000) - l_U1329, l_U1327 + l_U1328, 0.31500000, 0.43000000, uVar2, uVar3, uVar4, 255, 3, ref cVar7 );
    SET_TEXT_USE_UNDERSCORE( 0 );
    DRAW_SPRITE( l_U599[0], ((sub_53882() - (0.01400000 * 1.50000000)) - uVar15) - (l_U1329 * 2), l_U1327 - (0.02000000 / 2), 0.01400000 * -1, 0.02000000, 0.00000000, 255, 255, 255, 255 );
    return;
}

string sub_60427()
{
    if (sub_54710( l_U1318 ))
    {
        return GET_PLAYER_NAME( sub_5180( l_U1318 ) );
    }
    return "";
}

int sub_60495(int iParam0)
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

void sub_60612(int iParam0, boolean bParam1)
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

void sub_60862(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (sub_54710( l_U1318 ))
    {
        if (l_U1304 == 1)
        {
            GET_TEAM_RGB_COLOUR( GET_PLAYER_TEAM( sub_5180( l_U1318 ) ), uParam0, uParam1, uParam2 );
        }
        else
        {
            GET_PLAYER_RGB_COLOUR( sub_5180( l_U1318 ), uParam0, uParam1, uParam2 );
        }
    }
    return;
}

void sub_61294()
{
    g_U12 = 1;
    sub_61307();
    return;
}

void sub_61307()
{
    FORCE_LOADING_SCREEN( 1 );
    while (true)
    {
        WAIT( 0 );
    }
    return;
}

void sub_61486(unknown uParam0)
{
    unknown Result;
    unknown uVar4;

    GET_FRONTEND_DESIGN_VALUE( uParam0, ref Result, ref uVar4 );
    return Result;
}

void sub_61519(unknown uParam0)
{
    unknown uVar3;
    unknown Result;

    GET_FRONTEND_DESIGN_VALUE( uParam0, ref uVar3, ref Result );
    return Result;
}

void sub_61912()
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

void sub_62060()
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
            if ((GET_PLAYER_TEAM( sub_5180( I ) )) > -1)
            {
                if (NOT (iVar4[GET_PLAYER_TEAM( sub_5180( I ) )]))
                {
                    Result++;
                    iVar4[GET_PLAYER_TEAM( sub_5180( I ) )] = 1;
                }
            }
        }
    }
    return Result;
}

int sub_62425()
{
    int I;
    int iVar3;

    iVar3 = -1;
    for ( I = 0; I < 8; I++ )
    {
        if ((sub_62451( I )) > 0)
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

void sub_62451(int iParam0)
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
            if ((GET_PLAYER_TEAM( sub_5180( I ) )) == iParam0)
            {
                Result++;
            }
        }
    }
    return Result;
}

int sub_62734()
{
    int I;
    int iVar3;

    iVar3 = -1;
    for ( I = 0; I < 16; I++ )
    {
        if (sub_7852( I ))
        {
            if (NOT (sub_7904( I )))
            {
                if (iVar3 == -1)
                {
                    iVar3 = l_U662[sub_7964()]._fU24[I];
                }
                else if (iVar3 != l_U662[sub_7964()]._fU24[I])
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}

int sub_64015(int iParam0)
{
    int I;

    for ( I = 0; I < 8; I++ )
    {
        if (I != iParam0)
        {
            if ((sub_62451( I )) > 0)
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

int sub_64150(int iParam0)
{
    int I;
    int Result;

    if (sub_64015( iParam0 ))
    {
        for ( I = 0; I < 8; I++ )
        {
            if ((sub_62451( l_U1030[I] )) > 0)
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
            if ((sub_62451( l_U1030[I] )) > 0)
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

string sub_64363(int iParam0, boolean bParam1)
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
            if ((sub_62451( I )) > 0)
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
            if ((sub_62451( I )) > 0)
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

void sub_66127(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_50496( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_STRING( uParam0, uParam10 );
    DISPLAY_TEXT_WITH_STRING( uParam1, uParam2, uParam0, uParam10 );
    return Result;
}

float sub_66980(unknown uParam0)
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

void sub_67878(unknown uParam0, unknown uParam1, float fParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, int iParam9, int iParam10, int iParam11, unknown uParam12)
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
        if ((sub_62451( l_U1030[iVar16] )) > 0)
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
                    if (((uParam0^)[I] == sub_7964()) || ((uParam0^)[I] == 0))
                    {
                        if (l_U662[(uParam0^)[I]]._fU16 > 0)
                        {
                            GET_TEAM_RGB_COLOUR( l_U1030[iVar16], ref uVar18, ref uVar19, ref uVar20 );
                            if ((iParam9 == 6) || (iParam9 == 7))
                            {
                                sub_50159( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                                iVar22 = 1;
                            }
                            else
                            {
                                sub_50159( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                                iVar22 = 3;
                            }
                            if (l_U662[(uParam0^)[I]]._fU16 != 1)
                            {
                                if ((iParam9 == 6) || (iParam9 == 7))
                                {
                                    fVar23 += (sub_66980( l_U662[(uParam0^)[I]]._fU16 )) * 0.50000000;
                                }
                            }
                            switch (l_U662[(uParam0^)[I]]._fU16)
                            {
                                case 1:
                                if ((iParam9 == 6) || (iParam9 == 7))
                                {
                                    sub_50159( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                                    sub_51630( sub_64363( l_U1030[iVar16], 1 ), fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, 2 );
                                    fVar23 += (sub_66980( l_U662[(uParam0^)[I]]._fU16 )) - uVar24;
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
                                sub_51630( sub_64363( l_U1030[iVar16], 1 ), fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, 2 );;
                                iVar21++;
                                break;
                                case 2:
                                case 7:
                                sub_50781( fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, iVar22, l_U1039[l_U1030[iVar16]] );
                                iVar21++;
                                break;
                                case 3:
                                if (l_U1039[l_U1030[iVar16]] > 0)
                                {
                                    sub_68664( fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, iVar22, l_U1021[l_U1030[iVar16]] + 1 );
                                }
                                iVar21++;
                                break;
                                case 4:
                                if (l_U1039[l_U1030[iVar16]] < 5940000)
                                {
                                    sub_68938( fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, iVar22, l_U1039[l_U1030[iVar16]], 1.00000000 );
                                }
                                iVar21++;
                                break;
                                case 5:
                                case 6:
                                sub_50456( "CASH", fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, iVar22, l_U1039[l_U1030[iVar16]] );
                                iVar21++;
                                break;
                            }
                            if (l_U662[(uParam0^)[I]]._fU16 != 1)
                            {
                                if ((iParam9 == 6) || (iParam9 == 7))
                                {
                                    fVar23 += (sub_66980( l_U662[(uParam0^)[I]]._fU16 )) * 0.50000000;
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
                        fVar23 += sub_66980( 2 );
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
                            if ((sub_8343() + sub_20573()) > 22)
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
                if (sub_7852( l_U662[0]._fU24[J] ))
                {
                    if ((sub_70806( l_U662[0]._fU24[J] )) == l_U1030[iVar16])
                    {
                        if ((iVar25 >= iParam11) AND (iVar25 < (iParam11 + iParam10)))
                        {
                            sub_70932( l_U662[0]._fU24[J], uParam0, uParam1, ref fParam2, uParam6, uParam7, uParam8, iParam9, 0 );
                        }
                        iVar25++;
                    }
                }
            }
        }
    }
    return;
}

void sub_68664(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, int iParam9)
{
    if (iParam9 == 1)
    {
        return sub_51630( "FIRST", uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8 );
    }
    if (iParam9 == 2)
    {
        return sub_51630( "SECOND", uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8 );
    }
    if (iParam9 == 3)
    {
        return sub_51630( "THIRD", uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8 );
    }
    return sub_50456( "NTH", uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, iParam9 );
}

float sub_68938(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8, int iParam9, unknown uParam10)
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
        sub_50781( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar20 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_50781( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar21 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_51630( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 += fVar25;
        fVar26 += fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_50781( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar18 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_50781( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar19 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_51630( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 += fVar25;
        fVar26 += fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_50781( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar16 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_50781( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar17 );
    }
    else if (iParam8 == 3)
    {
        fVar26 = uParam0 - (fVar22 / 2);
        sub_50781( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar17 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_50781( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar16 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_51630( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 -= fVar25;
        fVar26 -= fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_50781( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar19 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_50781( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar18 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_51630( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 -= fVar25;
        fVar26 -= fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_50781( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar21 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_50781( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar20 );
    }
    else
    {
        fVar26 = uParam0 + fVar24;
        sub_50781( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar19 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_51630( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_50781( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar16 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_50781( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar17 );
        fVar26 = uParam0 - fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_50781( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar18 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_51630( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_50781( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar21 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_50781( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar20 );
    }
    return (6 * fVar22) + (2 * fVar23);
}

void sub_70806(unknown uParam0)
{
    if (l_U960)
    {
        return l_U831[uParam0]._fU12;
    }
    return GET_PLAYER_TEAM( sub_5180( uParam0 ) );
}

void sub_70932(int iParam0, unknown uParam1, float fParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7, unknown uParam8)
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

    sub_70949( iParam0, ref iVar12, ref iVar13, ref iVar14 );
    if ((l_U1351) AND ((iParam7 == 2) || (iParam7 == 3)))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( iParam0 ))
        {
            if ((IS_CHAR_DEAD( sub_5218( iParam0 ) )) || (l_U1065[iParam0]))
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
                sub_50159( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                if (l_U662[(uParam1^)[I]]._fU16 != 1)
                {
                    if (((iParam7 == 6) || (iParam7 == 7)) || (iParam7 == 8))
                    {
                        fParam2 += (sub_66980( l_U662[(uParam1^)[I]]._fU16 )) * 0.50000000;
                    }
                }
                switch (l_U662[(uParam1^)[I]]._fU16)
                {
                    case 1:
                    if (((iParam7 == 6) || (iParam7 == 7)) || (iParam7 == 8))
                    {
                        if (sub_7904( iParam0 ))
                        {
                            iVar12 = 60;
                            iVar13 = 60;
                            iVar14 = 60;
                        }
                        else
                        {
                            sub_70949( iParam0, ref iVar12, ref iVar13, ref iVar14 );
                        }
                        if (l_U102)
                        {
                            if (N_604003528())
                            {
                                sub_52797( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, 2, "WWWWWWWWWWWWWWW" );
                            }
                            else
                            {
                                sub_52797( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, 2, "WWWWWWWWWWWWWWWW" );
                            }
                        }
                        else
                        {
                            SET_TEXT_USE_UNDERSCORE( 1 );
                            sub_52797( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, 2, sub_71720( iParam0 ) );
                            SET_TEXT_USE_UNDERSCORE( 0 );
                        }
                        if ((sub_49946()) || (NOT N_604003528()))
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
                        fParam2 += (sub_66980( 1 )) - uVar19;
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
                                    uVar22 = sub_72712( 0.29700000, uParam4, sub_72510( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, "WWWWWWWWWWWWWWW" ) );
                                }
                                else
                                {
                                    uVar22 = sub_72712( 0.29700000, uParam4, sub_72510( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, "WWWWWWWWWWWWWWWW" ) );
                                }
                            }
                            else if (N_604003528())
                            {
                                uVar22 = sub_72712( 0.23900000, uParam4, sub_72510( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, "WWWWWWWWWWWWWWW" ) );
                            }
                            else
                            {
                                uVar22 = sub_72712( 0.23900000, uParam4, sub_72510( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, "WWWWWWWWWWWWWWWW" ) );
                            }
                            sub_50159( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                            SET_TEXT_USE_UNDERSCORE( 1 );
                        }
                        else
                        {
                            uVar22 = uParam4;
                        }
                        if (N_604003528())
                        {
                            sub_52797( fParam2, (uParam3^) + fVar20, uVar22, uParam5, iVar12, iVar13, iVar14, 255, 2, "WWWWWWWWWWWWWWW" );
                        }
                        else
                        {
                            sub_52797( fParam2, (uParam3^) + fVar20, uVar22, uParam5, iVar12, iVar13, iVar14, 255, 2, "WWWWWWWWWWWWWWWW" );
                        }
                    }
                    else if ((iParam7 == 9) || (iParam7 == 10))
                    {
                        if (GET_IS_WIDESCREEN())
                        {
                            uVar22 = sub_72712( 0.29700000, uParam4, sub_72510( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, sub_71720( iParam0 ) ) );
                        }
                        else
                        {
                            uVar22 = sub_72712( 0.23900000, uParam4, sub_72510( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, sub_71720( iParam0 ) ) );
                        }
                        sub_50159( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                        SET_TEXT_USE_UNDERSCORE( 1 );
                    }
                    else
                    {
                        uVar22 = uParam4;
                    }
                    SET_TEXT_USE_UNDERSCORE( 1 );
                    sub_52797( fParam2, (uParam3^) + fVar20, uVar22, uParam5, iVar12, iVar13, iVar14, 255, 2, sub_71720( iParam0 ) );
                    SET_TEXT_USE_UNDERSCORE( 0 );;;
                    break;
                    case 2:
                    case 7:
                    if (NOT (sub_7904( iParam0 )))
                    {
                        sub_50781( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, l_U662[(uParam1^)[I]]._fU24[iParam0] );
                    }
                    break;
                    case 3:
                    if (NOT (sub_7904( iParam0 )))
                    {
                        if (l_U662[(uParam1^)[I]]._fU24[iParam0] > 0)
                        {
                            sub_68664( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, sub_7773( iParam0 ) );
                        }
                    }
                    break;
                    case 4:
                    if (NOT (sub_7904( iParam0 )))
                    {
                        if ((l_U662[(uParam1^)[I]]._fU24[iParam0] < 2147483647) AND (l_U662[(uParam1^)[I]]._fU24[iParam0] > -2147483648))
                        {
                            sub_68938( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, l_U662[(uParam1^)[I]]._fU24[iParam0], 1.00000000 );
                        }
                    }
                    break;
                    case 5:
                    case 6:
                    if ((NOT l_U1352) || (iParam7 != 6))
                    {
                        if (NOT (sub_7904( iParam0 )))
                        {
                            if ((((sub_20431()) || (sub_20476())) AND ((sub_70806( iParam0 )) > -1)) AND (sub_7396() != 1))
                            {
                                sub_50456( "CASH", fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, (l_U1039[sub_70806( iParam0 )]) / (sub_62451( sub_70806( iParam0 ) )) );
                            }
                            else
                            {
                                sub_50456( "CASH", fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, l_U662[(uParam1^)[I]]._fU24[iParam0] );
                            }
                        }
                    }
                    break;
                }
                if (l_U662[(uParam1^)[I]]._fU16 != 1)
                {
                    if (((iParam7 == 6) || (iParam7 == 7)) || (iParam7 == 8))
                    {
                        fParam2 += (sub_66980( l_U662[(uParam1^)[I]]._fU16 )) * 0.50000000;
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

void sub_70949(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (l_U960)
    {
        (uParam1^) = l_U831[uParam0]._fU20;
        (uParam2^) = l_U831[uParam0]._fU24;
        (uParam3^) = l_U831[uParam0]._fU28;
    }
    else
    {
        sub_71028( sub_5180( uParam0 ), uParam1, uParam2, uParam3 );
    }
    return;
}

void sub_71028(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (((GET_PLAYER_TEAM( uParam0 )) == -1) || (sub_7396() == 16))
    {
        GET_PLAYER_RGB_COLOUR( uParam0, uParam1, uParam2, uParam3 );
    }
    else
    {
        GET_TEAM_RGB_COLOUR( GET_PLAYER_TEAM( uParam0 ), uParam1, uParam2, uParam3 );
    }
    return;
}

void sub_71720(unknown uParam0)
{
    if (l_U960)
    {
        return l_U831[uParam0]._fU0;
    }
    return GET_PLAYER_NAME( sub_5180( uParam0 ) );
}

void sub_72510(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
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

void sub_72712(float fParam0, unknown Result, float fParam2)
{
    if (fParam2 > fParam0)
    {
        return (fParam0 * Result) / fParam2;
        break;
    }
    return Result;
}

void sub_74042(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7, int iParam8, unknown uParam9)
{
    int I;
    int iVar13;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_7852( l_U662[0]._fU24[I] ))
        {
            if ((iVar13 >= iParam8) AND (iVar13 < (iParam8 + iParam7)))
            {
                sub_70932( l_U662[0]._fU24[I], uParam0, uParam1, ref uParam2, uParam3, uParam4, uParam5, uParam6, 0 );
            }
            iVar13++;
        }
    }
    return;
}

int sub_76090(int iParam0, boolean bParam1)
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
            if (sub_61912() > 1)
            {
                if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
                {
                    if ((sub_20431()) || (sub_20476()))
                    {
                        if (NOT sub_62425())
                        {
                            if (((GET_PLAYER_TEAM( sub_8714() )) == l_U1030[0]) || ((l_U1039[GET_PLAYER_TEAM( sub_8714() )]) == l_U1039[l_U1030[0]]))
                            {
                                REGISTER_MULTIPLAYER_GAME_WIN( GET_PLAYER_ID(), 0 );
                            }
                        }
                    }
                    else if (sub_12891())
                    {
                        if (bParam1)
                        {
                            REGISTER_MULTIPLAYER_GAME_WIN( GET_PLAYER_ID(), iParam0 );
                        }
                    }
                    else if ((sub_7808( GET_PLAYER_ID() )) == 1)
                    {
                        if (NOT sub_62734())
                        {
                            REGISTER_MULTIPLAYER_GAME_WIN( GET_PLAYER_ID(), 0 );
                        }
                    };;;
                }
            }
            if (NOT sub_47112())
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
                                    if ((sub_20431()) || (sub_20476()))
                                    {
                                        if (sub_7396() != 1)
                                        {
                                            l_U662[I]._fU24[J] = (l_U1039[sub_70806( J )]) / (sub_62451( sub_70806( J ) ));
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
                            if (sub_12891())
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
                            if (sub_12891())
                            {
                                UPDATE_NETWORK_STATISTICS( J, 24, iVar8[J], -1 );
                                UPDATE_NETWORK_STATISTICS( J, 25, iParam0 * -1, -1 );
                            }
                            else
                            {
                                UPDATE_NETWORK_STATISTICS( J, 24, iVar8[J], GET_PLAYER_TEAM( sub_5180( J ) ) );
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
                        if ((sub_20431()) || (sub_20476()))
                        {
                            UPDATE_NETWORK_STATISTICS( J, 0, 1, GET_PLAYER_TEAM( sub_5180( J ) ) );
                            if (((sub_62425()) || (sub_61912() < 2)) || (sub_62060() < 2))
                            {
                                UPDATE_NETWORK_STATISTICS( J, 1, 0, GET_PLAYER_TEAM( sub_5180( J ) ) );
                            }
                            else if (((GET_PLAYER_TEAM( sub_5180( J ) )) == l_U1030[0]) || ((l_U1039[GET_PLAYER_TEAM( sub_5180( J ) )]) == l_U1039[l_U1030[0]]))
                            {
                                UPDATE_NETWORK_STATISTICS( J, 1, 1, GET_PLAYER_TEAM( sub_5180( J ) ) );
                            }
                            else
                            {
                                UPDATE_NETWORK_STATISTICS( J, 1, 0, GET_PLAYER_TEAM( sub_5180( J ) ) );
                            }
                        }
                        else
                        {
                            UPDATE_NETWORK_STATISTICS( J, 0, 1, -1 );
                            if (sub_12891())
                            {
                                if ((((sub_7808( J )) == 1) AND (sub_61912() > 1)) AND (NOT sub_62734()))
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
                            else if ((((sub_7808( J )) == 1) AND (sub_61912() > 1)) AND (NOT sub_62734()))
                            {
                                UPDATE_NETWORK_STATISTICS( J, 1, 1, GET_PLAYER_TEAM( sub_5180( J ) ) );
                            }
                            else
                            {
                                UPDATE_NETWORK_STATISTICS( J, 1, 0, GET_PLAYER_TEAM( sub_5180( J ) ) );
                            }
                        }
                    }
                }
            }
            if (sub_61912() > 1)
            {
                if ((sub_20431()) || (sub_20476()))
                {
                    if (sub_62060() > 1)
                    {
                        iVar7 = sub_62060() - 1;
                        I = iVar7;
                        for ( iVar5 = 0; iVar5 < 8; iVar5++ )
                        {
                            if ((sub_62451( l_U1030[iVar5] )) > 0)
                            {
                                for ( J = 0; J < 16; J++ )
                                {
                                    if (IS_NETWORK_PLAYER_ACTIVE( J ))
                                    {
                                        if ((GET_PLAYER_TEAM( sub_5180( J ) )) == l_U1030[iVar5])
                                        {
                                            if (NOT l_U1048[J])
                                            {
                                                UPDATE_NETWORK_RELATIVE_SCORE( J, iVar7, GET_PLAYER_TEAM( sub_5180( J ) ) );
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
                    iVar7 = sub_61912() - 1;
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
                                    if (l_U662[sub_7964()]._fU24[l_U662[0]._fU24[J]] != (l_U662[sub_7964()]._fU24[l_U662[0]._fU24[J + 1]]))
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
                                if (sub_12891())
                                {
                                    UPDATE_NETWORK_STATISTICS( J, l_U662[I]._fU92, l_U662[I]._fU24[J], -1 );
                                }
                                else
                                {
                                    UPDATE_NETWORK_STATISTICS( J, l_U662[I]._fU92, l_U662[I]._fU24[J], GET_PLAYER_TEAM( sub_5180( J ) ) );
                                }
                            }
                        }
                    }
                }
            }
            if (sub_12891())
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
            if (sub_47112())
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
                                    UPDATE_NETWORK_STATISTICS( J, 24, l_U662[I]._fU24[J] * -1, GET_PLAYER_TEAM( sub_5180( J ) ) );
                                }
                            }
                        }
                    }
                }
            }
            if ((sub_20431()) || (sub_20476()))
            {
                for ( J = 0; J < 16; J++ )
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( J ))
                    {
                        if ((GET_PLAYER_TEAM( sub_5180( J ) )) > -1)
                        {
                            if (NOT l_U1048[J])
                            {
                                UPDATE_NETWORK_STATISTICS( J, 21, l_U1039[GET_PLAYER_TEAM( sub_5180( J ) )], GET_PLAYER_TEAM( sub_5180( J ) ) );
                            }
                        }
                    }
                }
            }
        }
        if ((sub_20431()) || (sub_20476()))
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
                l_U831[J]._fU0 = GET_PLAYER_NAME( sub_5180( J ) );
                l_U831[J]._fU12 = GET_PLAYER_TEAM( sub_5180( J ) );
                sub_71028( sub_5180( J ), ref l_U831[J]._fU20, ref l_U831[J]._fU24, ref l_U831[J]._fU28 );
                l_U831[J]._fU16 = sub_7808( J );
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

int sub_79027()
{
    int I;
    int iVar3;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if ((l_U1863[I]._fU124) || (l_U1863[I]._fU128))
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

void sub_79220(unknown uParam0)
{
    int I;
    unknown[16] uVar4;

    array(ref uVar4, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar4[I] = l_U1863[I]._fU12;
    }
    return sub_48570( 8, ref uVar4, ref l_U1528._fU612, l_U1528._fU608, uParam0, 0, 1, l_U1528._fU140 );
}

void sub_80732()
{
    if (sub_80741())
    {
        if (sub_80902())
        {
            switch (sub_81333())
            {
                case 0:
                SAY_AMBIENT_SPEECH( sub_5471(), "GANG_CHASE", 1, 0, 0 );
                break;
                case 1:
                SAY_AMBIENT_SPEECH( sub_5471(), "GENERIC_FUCK_OFF", 1, 0, 0 );
                break;
                case 2:
                SAY_AMBIENT_SPEECH( sub_5471(), "GENERIC_HI", 1, 0, 0 );
                break;
                case 3:
                SAY_AMBIENT_SPEECH( sub_5471(), "GANG_WATCH_THIS_GUY_SOLO", 1, 0, 0 );
                break;
                case 4:
                SAY_AMBIENT_SPEECH( sub_5471(), "JEERING", 1, 0, 0 );
                break;
                case 5:
                SAY_AMBIENT_SPEECH( sub_5471(), "ABUSE_DRIVER", 1, 0, 0 );
                break;
                case 6:
                SAY_AMBIENT_SPEECH( sub_5471(), "TARGET_NOGENDER", 1, 0, 0 );
                break;
                case 7:
                SAY_AMBIENT_SPEECH( sub_5471(), "FIGHT", 1, 0, 0 );
                break;
                case 8:
                SAY_AMBIENT_SPEECH( sub_5471(), "GANG_FIGHT_CHEER", 1, 0, 0 );
                break;
            }
        }
    }
    return;
}

int sub_80741()
{
    int iVar2;
    unknown uVar3;
    int iVar4;

    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (IS_CHAR_IN_ANY_HELI( sub_5471() ))
        {
            return 0;
        }
        if (IS_CHAR_IN_ANY_CAR( sub_5471() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5471(), ref uVar3 );
            GET_DRIVER_OF_CAR( uVar3, ref iVar4 );
            if (iVar4 == sub_5471())
            {
                GET_CURRENT_CHAR_WEAPON( sub_5471(), ref iVar2 );
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

int sub_80902()
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (sub_80932( 1, 1 ))
        {
            if (NOT (IS_CHAR_IN_AIR( sub_5471() )))
            {
                if (NOT l_U1466)
                {
                    if (IS_CONTROL_JUST_PRESSED( 0, 23 ))
                    {
                        if (NOT (IS_AMBIENT_SPEECH_PLAYING( sub_5471() )))
                        {
                            l_U1466 = 1;
                            return 1;
                        }
                    }
                }
                else if (NOT (IS_CONTROL_JUST_PRESSED( 0, 23 )))
                {
                    l_U1466 = 0;
                }
            }
        }
    }
    return 0;
}

int sub_80932(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_5471() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5471(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_5471() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5471(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_5471()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_5471() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_5471() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_8714() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_8714() )))
    {
        return 0;
    }
    return 1;
}

int sub_81333()
{
    if (sub_81342())
    {
        return 6;
    }
    else if (sub_81484( 1 ))
    {
        return 7;
    }
    else if (sub_81484( 0 ))
    {
        return 8;
    }
    if (sub_82291())
    {
        return 1;
    }
    if ((sub_82612()) || ((sub_81519()) AND (sub_82719())))
    {
        if (sub_82900() != nil)
        {
            if (IS_CHAR_MALE( sub_82900() ))
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
    if (sub_83070())
    {
        return 5;
    }
    if (sub_83298( 10.00000000 ))
    {
        return 2;
    }
    return 2;
}

int sub_81342()
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (IS_CHAR_SHOOTING( sub_5471() ))
        {
            return 1;
        }
    }
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if ((IS_CHAR_ARMED( sub_5471(), 2 )) || (IS_CHAR_ARMED( sub_5471(), 4 )))
        {
            if (IS_BUTTON_PRESSED( 0, 7 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_81484(boolean bParam0)
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (bParam0)
        {
            if (sub_81519())
            {
                if (IS_NETWORK_PLAYER_ACTIVE( l_U1465 ))
                {
                    if (NOT (IS_CHAR_DEAD( sub_5218( l_U1465 ) )))
                    {
                        if (IS_CHAR_VISIBLE( sub_5218( l_U1465 ) ))
                        {
                            if (sub_81956( sub_5471(), sub_5218( l_U1465 ), 10.00000000 ))
                            {
                                if (IS_CHAR_IN_MELEE_COMBAT( sub_5471() ))
                                {
                                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( sub_5218( l_U1465 ), sub_5471(), 0 ))
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
        else if (IS_NETWORK_PLAYER_ACTIVE( l_U1465 ))
        {
            if (NOT (IS_CHAR_DEAD( sub_5218( l_U1465 ) )))
            {
                if (IS_CHAR_VISIBLE( sub_5218( l_U1465 ) ))
                {
                    if (sub_81956( sub_5471(), sub_5218( l_U1465 ), 10.00000000 ))
                    {
                        if (IS_CHAR_IN_MELEE_COMBAT( sub_5218( l_U1465 ) ))
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

int sub_81519()
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
                    if ((NOT (IS_CHAR_DEAD( sub_5471() ))) AND (NOT (IS_CHAR_DEAD( sub_5218( I ) ))))
                    {
                        if (IS_CHAR_VISIBLE( sub_5218( I ) ))
                        {
                            GET_CHAR_COORDINATES( sub_5218( GET_PLAYER_ID() ), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                            GET_CHAR_COORDINATES( sub_5218( I ), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                            if ((VDIST( uVar4, uVar7 )) < 10000.00000000)
                            {
                                fVar2 = VDIST( uVar4, uVar7 );
                                l_U1465 = I;
                            }
                        }
                    }
                }
            }
        }
    }
    if (IS_NETWORK_PLAYER_ACTIVE( l_U1465 ))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (((GET_PLAYER_TEAM( sub_5180( l_U1465 ) )) != (GET_PLAYER_TEAM( sub_8714() ))) || ((GET_PLAYER_TEAM( sub_5180( l_U1465 ) )) == -1))
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

int sub_81956(unknown uParam0, unknown uParam1, float fParam2)
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

int sub_82291()
{
    int I;
    unknown uVar3;

    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( sub_5471(), 57 ))
        {
            CLEAR_CHAR_LAST_WEAPON_DAMAGE( sub_5471() );
            CLEAR_CHAR_LAST_DAMAGE_ENTITY( sub_5471() );
            CLEAR_CHAR_LAST_DAMAGE_BONE( sub_5471() );
            return 1;
        }
        for ( I = 0; I < 16; I++ )
        {
            if (IS_NETWORK_PLAYER_ACTIVE( I ))
            {
                if (I != GET_PLAYER_ID())
                {
                    if (IS_CHAR_IN_ANY_CAR( sub_5218( I ) ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5218( I ), ref uVar3 );
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CAR( sub_5471(), uVar3 ))
                        {
                            CLEAR_CHAR_LAST_WEAPON_DAMAGE( sub_5471() );
                            CLEAR_CHAR_LAST_DAMAGE_ENTITY( sub_5471() );
                            CLEAR_CHAR_LAST_DAMAGE_BONE( sub_5471() );
                            return 1;
                        }
                    }
                    else if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( sub_5471(), sub_5218( I ), 0 ))
                    {
                        CLEAR_CHAR_LAST_WEAPON_DAMAGE( sub_5471() );
                        CLEAR_CHAR_LAST_DAMAGE_ENTITY( sub_5471() );
                        CLEAR_CHAR_LAST_DAMAGE_BONE( sub_5471() );
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_82612()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_5471(), 0.00000000, 5.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        if (ARE_ENEMY_PEDS_IN_AREA( sub_5471(), uVar2, 10.00000000 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_82719()
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( l_U1465 ))
        {
            if (NOT (IS_CHAR_DEAD( sub_5218( l_U1465 ) )))
            {
                if (IS_CHAR_VISIBLE( sub_5218( l_U1465 ) ))
                {
                    if (sub_81956( sub_5471(), sub_5218( l_U1465 ), 10.00000000 ))
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( sub_5218( l_U1465 ) )))
                        {
                            if (NOT (IS_CHAR_IN_MELEE_COMBAT( sub_5471() )))
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

void sub_82900()
{
    if (IS_NETWORK_PLAYER_ACTIVE( l_U1465 ))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (((GET_PLAYER_TEAM( sub_5180( l_U1465 ) )) != (GET_PLAYER_TEAM( sub_8714() ))) || ((GET_PLAYER_TEAM( sub_5180( l_U1465 ) )) == -1))
            {
                return sub_5218( l_U1465 );
            }
        }
    }
    return nil;
}

int sub_83070()
{
    float fVar2;

    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (sub_81519())
        {
            if (sub_47112())
            {
                if (IS_NETWORK_PLAYER_ACTIVE( l_U1465 ))
                {
                    if (NOT (IS_CHAR_DEAD( sub_5218( l_U1465 ) )))
                    {
                        if (IS_CHAR_VISIBLE( sub_5218( l_U1465 ) ))
                        {
                            if (sub_81956( sub_5471(), sub_5218( l_U1465 ), 10.00000000 ))
                            {
                                if ((IS_CHAR_IN_ANY_CAR( sub_5471() )) AND (IS_CHAR_IN_ANY_CAR( sub_5218( l_U1465 ) )))
                                {
                                    GET_CHAR_SPEED( sub_5471(), ref fVar2 );
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

int sub_83298(unknown uParam0)
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
                    if (NOT (IS_CHAR_DEAD( sub_5218( I ) )))
                    {
                        if (IS_CHAR_VISIBLE( sub_5218( I ) ))
                        {
                            if (sub_81956( sub_5471(), sub_5218( I ), uParam0 ))
                            {
                                if (NOT (IS_CHAR_IN_ANY_CAR( sub_5218( I ) )))
                                {
                                    if ((NOT (IS_CHAR_IN_MELEE_COMBAT( sub_5471() ))) AND (NOT (IS_CHAR_IN_MELEE_COMBAT( sub_5218( I ) ))))
                                    {
                                        if (((GET_PLAYER_TEAM( sub_5180( I ) )) != (GET_PLAYER_TEAM( sub_8714() ))) || ((GET_PLAYER_TEAM( sub_5180( I ) )) == -1))
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

void sub_83984()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1863[I]._fU116)
            {
                sub_84042( I, 1 );
            }
        }
    }
    return;
}

void sub_84042(unknown uParam0, unknown uParam1)
{
    l_U1065[uParam0] = uParam1;
    return;
}

void sub_84133()
{
    if (l_U1863[GET_PLAYER_ID()]._fU28 == 0)
    {
        l_U1863[GET_PLAYER_ID()]._fU28 = 2;
    }
    if (NOT l_U1863[GET_PLAYER_ID()]._fU40)
    {
        l_U1863[GET_PLAYER_ID()]._fU40 = 1;
    }
    if ((l_U1863[GET_PLAYER_ID()]._fU28 == 0) || (l_U1863[GET_PLAYER_ID()]._fU28 == 2))
    {
        switch (l_U3391)
        {
            case 0:
            if (IS_SCREEN_FADED_OUT())
            {
                if (l_U1528._fU776)
                {
                    l_U1863[GET_PLAYER_ID()]._fU84 = 1;
                    CLEAR_PRINTS();
                    sub_45641();
                    sub_46975();
                    l_U2673 = l_U2660 + 3500;
                    l_U1863[GET_PLAYER_ID()]._fU12 = -5;
                    if (NETWORK_IS_SESSION_STARTED())
                    {
                        l_U1863[GET_PLAYER_ID()]._fU8 = 1;
                        l_U3391 = 1;
                    }
                    else
                    {
                        l_U1863[GET_PLAYER_ID()]._fU8 = 1;
                        l_U3391 = 2;
                    }
                }
                else if (IS_CHAR_DEAD( sub_5471() ))
                {
                    N_312012851( sub_5471(), ref l_U2984._fU0, ref l_U2984._fU4, ref l_U2984._fU8 );
                    GET_CLOSEST_CAR_NODE( l_U2984._fU0, l_U2984._fU4, l_U2984._fU8, ref l_U2990._fU0, ref l_U2990._fU4, ref l_U2990._fU8 );
                    REQUEST_COLLISION_AT_POSN( l_U2990._fU0, l_U2990._fU4, l_U2990._fU8 );
                    RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), l_U2990, 0.00000000 );
                }
            }
            else if (NOT IS_SCREEN_FADING_OUT())
            {
                sub_48383( 500 );
            }
            break;
            case 1:
            sub_48462( 0 );
            if (l_U2660 > l_U2673)
            {
                if (IS_SCREEN_FADED_IN())
                {
                    if (sub_76090( 2147483647, 0 ))
                    {
                        if (NOT l_U1863[GET_PLAYER_ID()]._fU124)
                        {
                            l_U1863[GET_PLAYER_ID()]._fU124 = 1;
                        }
                        sub_5169( GET_PLAYER_ID(), 0 );
                    }
                    if (sub_79027())
                    {
                        l_U2659 = 12;
                        l_U3391 = 3;
                    }
                }
                else if (NOT IS_SCREEN_FADING_IN())
                {
                    sub_47971( 500 );
                }
            }
            break;
            case 2:
            sub_48462( 0 );
            if (l_U2660 > l_U2673)
            {
                if (IS_SCREEN_FADED_IN())
                {
                    if (NOT l_U1863[GET_PLAYER_ID()]._fU128)
                    {
                        l_U1863[GET_PLAYER_ID()]._fU128 = 1;
                        sub_5169( GET_PLAYER_ID(), 0 );
                    }
                    else if (sub_79027())
                    {
                        l_U2659 = 12;
                        l_U3391 = 3;
                    }
                }
                else if (NOT IS_SCREEN_FADING_IN())
                {
                    sub_47971( 500 );
                }
            }
            break;
        }
    }
    return;
}

void sub_85007()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1863[I]._fU24;
    }
    sub_85089( l_U1528._fU428, ref uVar3, ref l_U1863[GET_PLAYER_ID()]._fU24 );
    return;
}

void sub_85089(int iParam0, unknown uParam1, unknown uParam2)
{
    int I;
    char[64] cVar6;
    char[16] cVar22;

    (uParam2^) = sub_85098();
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
                    sub_85254( I, -1, ref cVar6 );
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
            sub_86627( "NEXT_GAME_MODE", -1, ref cVar22 );
            l_U984 = iParam0;
        }
    }
    return;
}

void sub_85098()
{
    return g_U18._fU660;
}

void sub_85254(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar6 = sub_85265( uParam1 );
    StrCopy( ref l_U104[uVar6]._fU76._fU0, GET_PLAYER_NAME( sub_5180( uParam0 ) ), 64 );
    sub_71028( sub_5180( uParam0 ), ref l_U104[uVar6]._fU76._fU68, ref l_U104[uVar6]._fU76._fU72, ref l_U104[uVar6]._fU76._fU76 );
    StrCopy( ref l_U104[uVar6]._fU156._fU0, uParam2, 64 );
    GET_HUD_COLOUR( 1, ref l_U104[uVar6]._fU156._fU68, ref l_U104[uVar6]._fU156._fU72, ref l_U104[uVar6]._fU156._fU76, ref uVar5 );
    sub_85713( uVar6 );
    return;
}

void sub_85265(unknown uParam0)
{
    unknown Result;

    Result = l_U577;
    sub_45681( ref l_U104[l_U577] );
    l_U104[l_U577]._fU8 = uParam0;
    l_U104[l_U577]._fU0 = 1;
    l_U104[l_U577]._fU4 = sub_85334() + 6000;
    sub_85386( ref l_U577, 8 );
    sub_45681( ref l_U104[l_U577] );
    if (l_U577 == l_U578)
    {
        sub_85386( ref l_U578, 8 );
    }
    PLAY_AUDIO_EVENT( "FRONTEND_GAME_MP_TICKER_MESSAGE" );
    return Result;
}

void sub_85334()
{
    unknown Result;

    GET_GAME_TIMER( ref Result );
    return Result;
}

int sub_85386(unknown uParam0, int iParam1)
{
    (uParam0^)++;
    if ((uParam0^) >= iParam1)
    {
        (uParam0^) = 0;
        return 1;
    }
    return 0;
}

void sub_85713(unknown uParam0)
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

void sub_86627(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar6 = sub_85265( uParam1 );
    StrCopy( ref l_U104[uVar6]._fU76._fU0, uParam0, 64 );
    l_U104[uVar6]._fU76._fU64 = 1;
    GET_HUD_COLOUR( 1, ref l_U104[uVar6]._fU76._fU68, ref l_U104[uVar6]._fU76._fU72, ref l_U104[uVar6]._fU76._fU76, ref uVar5 );
    StrCopy( ref l_U104[uVar6]._fU156._fU0, uParam2, 64 );
    l_U104[uVar6]._fU156._fU64 = 1;
    GET_HUD_COLOUR( 1, ref l_U104[uVar6]._fU156._fU68, ref l_U104[uVar6]._fU156._fU72, ref l_U104[uVar6]._fU156._fU76, ref uVar5 );
    sub_85713( uVar6 );
    return;
}

void sub_86901()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1863[I]._fU100)
            {
                sub_86959( I, 1 );
            }
        }
    }
    return;
}

void sub_86959(unknown uParam0, unknown uParam1)
{
    l_U1048[uParam0] = uParam1;
    return;
}

int sub_87275()
{
    if ((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_87372()
{
    DISABLE_PAUSE_MENU( 1 );
    if (IS_PAUSE_MENU_ACTIVE())
    {
        DEACTIVATE_FRONTEND();
        UNPAUSE_GAME();
    }
    switch (l_U3376)
    {
        case 0:
        UNPAUSE_GAME();
        DISABLE_PAUSE_MENU( 1 );
        if (l_U3382 == 0)
        {
            REQUEST_COLLISION_AT_POSN( 725.72420000, -170.58400000, 3.69700000 );
            SET_CHAR_COORDINATES( sub_5471(), 725.72420000, -170.58400000, 3.69700000 );
            FREEZE_CHAR_POSITION( sub_5471(), 1 );
            SET_CHAR_COLLISION( sub_5471(), 0 );
            SET_CHAR_VISIBLE( sub_5471(), 0 );
            FORCE_LOADING_SCREEN( 1 );
            sub_87600( 725.72420000, -170.58400000, 3.69700000 );
            FORCE_LOADING_SCREEN( 0 );
            l_U3382 = l_U2660 + 3000;
        }
        else if (l_U2660 > l_U3382)
        {
            CLEAR_AREA( l_U2677[GET_PLAYER_ID()]._fU0, l_U2677[GET_PLAYER_ID()]._fU4, l_U2677[GET_PLAYER_ID()]._fU8, 500.00000000, 0 );
            SET_WIDESCREEN_BORDERS( 1 );
            DISPLAY_RADAR( 0 );
            SET_LOBBY_MUTE_OVERRIDE( 1 );
            SETTIMERA( 0 );
            CLEAR_PRINTS();
            l_U3376 = 1;
        }
        break;
        case 1:
        sub_87893();
        sub_47971( 500 );
        if (DOES_CAM_EXIST( l_U2543 ))
        {
            SET_CAM_ACTIVE( l_U2543, 0 );
            SET_CAM_PROPAGATE( l_U2543, 0 );
        }
        SETTIMERA( 0 );
        l_U3376 = 2;
        SET_TEXT_DRAW_BEFORE_FADE( 0 );
        sub_88640( "MPKP2_GIV2b", ref l_U2504, 6, 1 );
        break;
        case 2:
        if (TIMERA() > 5000)
        {
            if (NOT (sub_89626( l_U2504 )))
            {
                l_U3376 = 10;
            }
        }
        break;
        case 10:
        sub_48383( 1000 );
        l_U2659 = 1;
        break;
    }
    return;
}

void sub_87600(unknown uParam0, unknown uParam1, unknown uParam2)
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
        if ((NOT NETWORK_END_SESSION_PENDING()) AND (IS_NETWORK_SESSION()))
        {
            GET_NETWORK_TIMER( ref l_U2660 );
        }
        if (sub_5520())
        {
            sub_9516();
            sub_5584();
        }
    }
    return;
}

void sub_87893()
{
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    CREATE_CAM( 14, ref l_U2530[0] );
    SET_CAM_POS( l_U2530[0], 725.72420000, -170.58400000, 7.69700000 );
    SET_CAM_ROT( l_U2530[0], 7.13410000, 0.00000000, -168.93510000 );
    SET_CAM_FOV( l_U2530[0], 45.00000000 );
    SET_CAM_ACTIVE( l_U2530[0], 1 );
    CREATE_CAM( 14, ref l_U2530[1] );
    SET_CAM_POS( l_U2530[1], 727.83220000, -172.68400000, 24.54960000 );
    SET_CAM_ROT( l_U2530[1], -16.14730000, 0.00000000, -168.53440000 );
    SET_CAM_FOV( l_U2530[1], 45.00000000 );
    SET_CAM_ACTIVE( l_U2530[1], 1 );
    CREATE_CAM( 14, ref l_U2530[2] );
    SET_CAM_POS( l_U2530[2], 739.35590000, -208.14670000, 23.02020000 );
    SET_CAM_ROT( l_U2530[2], -13.51660000, 0.00000000, 151.71950000 );
    SET_CAM_FOV( l_U2530[2], 45.00000000 );
    SET_CAM_ACTIVE( l_U2530[2], 1 );
    CREATE_CAM( 14, ref l_U2530[3] );
    SET_CAM_POS( l_U2530[3], 741.72800000, -251.34820000, 23.02020000 );
    SET_CAM_ROT( l_U2530[3], -9.89400000, 0.00000000, 134.78820000 );
    SET_CAM_FOV( l_U2530[3], 45.00000000 );
    SET_CAM_ACTIVE( l_U2530[3], 1 );
    CREATE_CAM( 25, ref l_U2526[0] );
    SET_CAM_SPLINE_DURATION( l_U2526[0], 37500 );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U2526[0], 0 );
    ADD_CAM_SPLINE_NODE( l_U2526[0], l_U2530[0] );
    ADD_CAM_SPLINE_NODE( l_U2526[0], l_U2530[1] );
    ADD_CAM_SPLINE_NODE( l_U2526[0], l_U2530[2] );
    ADD_CAM_SPLINE_NODE( l_U2526[0], l_U2530[3] );
    SET_CAM_ACTIVE( l_U2526[0], 1 );
    SET_CAM_PROPAGATE( l_U2526[0], 1 );
    return;
}

void sub_88640(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_88661( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

void sub_88661(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_88715( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_88715(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_88737( iParam1 )))
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
    sub_89423( ref g_U8321, ref l_U0 );
    StrCopy( ref g_U8321._fU0, uParam7, 16 );
    g_U8321._fU388 = uParam8;
    g_U8320 = 1;
    return 1;
}

int sub_88737(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_88814( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_88814( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_88814( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_88814(unknown uParam0)
{
    return;
}

void sub_89423(int iParam0, int iParam1)
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

int sub_89626(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8320 == 1)) || (g_U8320 == 2))
    {
        if (uParam0._fU4 == g_U8319)
        {
            return 1;
        }
        else
        {
            sub_88814( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_88814( "\n speech is not playing" );
    }
    return 0;
}

void sub_89849()
{
    int I;

    DISABLE_PAUSE_MENU( 0 );
    SET_WIDESCREEN_BORDERS( 0 );
    sub_89879( ref l_U2504, 0 );
    DISPLAY_RADAR( 1 );
    SET_CAM_BEHIND_PED( sub_5471() );
    RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), l_U2726[GET_PLAYER_ID()], 0.00000000 );
    FORCE_LOADING_SCREEN( 1 );
    sub_87600( l_U2726[GET_PLAYER_ID()] );
    FORCE_LOADING_SCREEN( 0 );
    SET_CHAR_HEADING( sub_5471(), 0.00000000 );
    SET_ANIM_GROUP_FOR_CHAR( sub_5471(), "Move_player" );
    SET_PLAYER_KEEPS_WEAPONS_WHEN_RESPAWNED( sub_8714() );
    SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 0 );
    SET_CAM_BEHIND_PED( sub_5471() );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_CAM_EXIST( l_U2526[I] ))
        {
            DESTROY_CAM( l_U2526[I] );
        }
    }
    for ( I = 0; I < 12; I++ )
    {
        if (DOES_CAM_EXIST( l_U2530[I] ))
        {
            DESTROY_CAM( l_U2530[I] );
        }
    }
    if (DOES_CAM_EXIST( l_U2543 ))
    {
        DESTROY_CAM( l_U2543 );
    }
    if (DOES_CAM_EXIST( l_U2544 ))
    {
        DESTROY_CAM( l_U2544 );
    }
    if (DOES_CAM_EXIST( l_U2545 ))
    {
        DESTROY_CAM( l_U2545 );
    }
    DISPLAY_RADAR( 1 );
    END_CAM_COMMANDS( ref l_U2658 );
    SETTIMERA( 0 );
    CLEAR_PRINTS();
    GIVE_WEAPON_TO_CHAR( sub_5471(), 14, 1500, 0 );
    GIVE_WEAPON_TO_CHAR( sub_5471(), 12, 1500, 0 );
    SET_CAM_BEHIND_PED( sub_5471() );
    SETTIMERA( 0 );
    SET_LOBBY_MUTE_OVERRIDE( 0 );
    return;
}

void sub_89879(int iParam0, unknown uParam1)
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

void sub_90533()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1863[I]._fU12;
    }
    sub_90623( 9, ref uVar3, ref l_U1528._fU508, ref l_U1528._fU428, ref l_U1528._fU612, l_U1528._fU608 );
    if ((GET_PLAYER_ID() >= 0) AND (GET_PLAYER_ID() < 16))
    {
        l_U1863[GET_PLAYER_ID()]._fU12 = uVar3[GET_PLAYER_ID()];
    }
    return;
}

void sub_90623(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
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
        sub_90702();
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
                l_U1086 = sub_90881( sub_7396() );
                (uParam1^)[GET_PLAYER_ID()] = -7;
                if (NOT sub_49946())
                {
                    if (sub_5520())
                    {
                        l_U1370 = 0;
                        if ((uParam3^) != -1)
                        {
                            if ((NOT (sub_91139( sub_90881( (uParam3^) ) ))) || (GET_NUMBER_OF_PLAYERS() <= 4))
                            {
                                l_U1086 = sub_90881( (uParam3^) );
                                (uParam1^)[GET_PLAYER_ID()] = -8;
                                l_U1370 = 1;
                            }
                        }
                        sub_5584();
                    }
                }
            }
        }
    }
    if (sub_5520())
    {
        sub_49937( uParam1, uParam4 );
        sub_5584();
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
    sub_3218();
    DISABLE_PAUSE_MENU( 1 );
    HIDE_HUD_AND_RADAR_THIS_FRAME();
    if (l_U1286)
    {
        if (NOT IS_SCREEN_FADED_OUT())
        {
            sub_48383( 0 );
        }
        l_U1286 = 0;
        return;
    }
    else if (IS_SCREEN_FADED_OUT())
    {
        sub_47971( 0 );
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
            l_U1087[sub_91506( 15 )]._fU20 = l_U1367._fU0;
        }
        else if ((l_U1087[sub_91506( 15 )]._fU20) != 18)
        {
            l_U1087[sub_91506( 15 )]._fU20 = 18;
        }
    }
    ENABLE_FRONTEND_RADIO();
    if (IS_GAME_IN_CONTROL_OF_MUSIC())
    {
        l_U1087[sub_91506( 15 )]._fU24 = 19;
    }
    else
    {
        l_U1087[sub_91506( 15 )]._fU24 = 0;
    }
    if (NOT l_U1082)
    {
        sub_47189();
        l_U1082 = 1;
    }
    if (iParam0 == 10)
    {
        if (NOT l_U1083)
        {
            sub_91721();
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
                if (sub_8343() < 3)
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
            sub_50123( iParam5, 1 );
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
                if (sub_53578())
                {
                    USE_MASK( 0 );
                    l_U1289 = 0;
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    (uParam1^)[GET_PLAYER_ID()] = -3;
                }
                else if ((sub_92345()) AND (sub_92463()))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    ACTIVATE_NETWORK_SETTINGS_MENU();
                }
                else if (sub_92645())
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    DISPLAY_FRONTEND_MAP_BLIPS( 0 );
                    ACTIVATE_FRONTEND();
                }
                else if (sub_53426())
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
                else if ((sub_93120()) AND ((NOT NETWORK_IS_TVT()) || (sub_93258())))
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
                        l_U1086 = sub_90881( sub_7396() );
                        (uParam1^)[GET_PLAYER_ID()] = -4;
                    }
                }
                else if ((sub_53240()) AND (((NETWORK_GET_NUM_PLAYERS_MET() > 0) AND (N_604003528())) || (((NOT NETWORK_IS_TVT()) AND (NETWORK_GET_FRIEND_COUNT() > 0)) AND (NOT N_604003528()))))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1299 = 1;
                }
                else if (sub_93535())
                {
                    if (sub_51922( ref l_U1275, J, 0 ))
                    {
                        if (NOT sub_12891())
                        {
                            if ((l_U1275 == 0) || ((sub_47112()) AND (l_U1275 < 4)))
                            {
                                l_U1087[sub_91506( 16 )]._fU20 = 0;
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
                        if (sub_93854())
                        {
                            if (sub_93986())
                            {
                                if ((GET_PLAYER_TEAM( sub_8714() )) > -1)
                                {
                                    if (sub_20476())
                                    {
                                        uVar15 = GET_PLAYER_TEAM( sub_8714() );
                                        sub_94250( ref uVar15, 8 );
                                        SET_PLAYER_TEAM( sub_8714(), uVar15 );
                                    }
                                    else if ((GET_PLAYER_TEAM( sub_8714() )) == 0)
                                    {
                                        SET_PLAYER_TEAM( sub_8714(), 1 );
                                    }
                                    else if ((GET_PLAYER_TEAM( sub_8714() )) == 1)
                                    {
                                        SET_PLAYER_TEAM( sub_8714(), 0 );
                                    };;;
                                }
                            }
                            else if (sub_94392())
                            {
                                if (sub_20476())
                                {
                                    uVar15 = GET_PLAYER_TEAM( sub_8714() );
                                    sub_85386( ref uVar15, 8 );
                                    SET_PLAYER_TEAM( sub_8714(), uVar15 );
                                }
                                else if ((GET_PLAYER_TEAM( sub_8714() )) == 0)
                                {
                                    SET_PLAYER_TEAM( sub_8714(), 1 );
                                }
                                else if ((GET_PLAYER_TEAM( sub_8714() )) == 1)
                                {
                                    SET_PLAYER_TEAM( sub_8714(), 0 );
                                };;;
                            }
                        }
                    }
                    else if (l_U1087[l_U1275]._fU16 == 17)
                    {
                        if (sub_8343() < 3)
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
                        if (sub_93986())
                        {
                            iVar16 = l_U1087[l_U1275]._fU20;
                            sub_85386( ref iVar16, 16 );
                            while (NOT (IS_NETWORK_PLAYER_ACTIVE( iVar16 )))
                            {
                                sub_85386( ref iVar16, 16 );
                            }
                            l_U1087[l_U1275]._fU20 = iVar16;
                            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
                        }
                        else if (sub_94392())
                        {
                            iVar16 = l_U1087[l_U1275]._fU20;
                            sub_94250( ref iVar16, 16 );
                            while (NOT (IS_NETWORK_PLAYER_ACTIVE( iVar16 )))
                            {
                                sub_94250( ref iVar16, 16 );
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
                            if (NOT (sub_95284( l_U1275 )))
                            {
                                if (sub_95379( ref l_U1087[l_U1275]._fU20, l_U1087[l_U1275]._fU24 ))
                                {
                                    if (l_U1087[l_U1275]._fU16 == 15)
                                    {
                                        sub_95757( l_U1087[l_U1275]._fU20 );
                                    }
                                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
                                }
                            }
                        }
                    };;;
                }
                else if (J > 6)
                {
                    sub_51922( ref l_U1276, (J - 6) + 1, 0 );
                };;;;;;;;
                if ((uParam1^)[GET_PLAYER_ID()] != -4)
                {
                    sub_96010( 0 );
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
                    if (sub_92345())
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
                    if (sub_96515( l_U1275 ))
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
                sub_96010( 0 );
                INIT_FRONTEND_HELPER_TEXT();
                DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
                if (sub_53578())
                {
                    (uParam1^)[GET_PLAYER_ID()] = -3;
                }
            }
            else if ((uParam1^)[GET_PLAYER_ID()] == 2)
            {
                l_U1087[sub_91506( 16 )]._fU20 = 1;
                sub_96010( 0 );
                if (NOT l_U1286)
                {
                    if (J > 6)
                    {
                        if (sub_51922( ref l_U1276, (J - 6) + 1, 0 ))
                        {
                            l_U1275 = l_U1276;
                        }
                    }
                    GET_NETWORK_TIMER( ref iVar26 );
                    if ((sub_53578()) AND (l_U1279 < (iVar26 + 500)))
                    {
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        l_U1087[sub_91506( 16 )]._fU20 = 0;
                        l_U1291 = 1;
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                    else if (((sub_53240()) AND (NETWORK_GET_NUM_PLAYERS_MET() > 0)) AND (N_604003528()))
                    {
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        l_U1299 = 1;
                    }
                    else
                    {
                        sub_50159( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                        GET_FRONTEND_DESIGN_VALUE( 23, ref uVar34, ref fVar35 );
                        GET_FRONTEND_DESIGN_VALUE( 24, ref fVar36, ref fVar33 );
                        GET_HUD_COLOUR( 49, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                        if (NOT (sub_20304( ref bVar28 )))
                        {
                            if (bVar31)
                            {
                                if (NOT bVar32)
                                {
                                    if (bVar28)
                                    {
                                        sub_51630( "NEEDMORETEAMS", uVar34, fVar35, fVar36 + 0.04050000, fVar33, 255, 255, 255, 255, 2 );
                                    }
                                    else
                                    {
                                        sub_51630( "NEEDMOREPLAYERS", uVar34, fVar35, fVar36 + 0.04050000, fVar33, 255, 255, 255, 255, 2 );
                                    }
                                    bVar32 = true;
                                }
                            }
                            else if (bVar28)
                            {
                                sub_51630( "NEEDMORETEAMS", uVar34, fVar35, fVar36, fVar33, 255, 255, 255, 255, 2 );
                            }
                            else
                            {
                                sub_51630( "NEEDMOREPLAYERS", uVar34, fVar35, fVar36, fVar33, 255, 255, 255, 255, 2 );
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
                if (sub_53578())
                {
                    sub_96010( 1 );
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1291 = 1;
                    (uParam1^)[GET_PLAYER_ID()] = 0;
                }
                else if (sub_53426())
                {
                    sub_51235( 1 );
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1291 = 1;
                    (uParam1^)[GET_PLAYER_ID()] = -2;
                }
                else
                {
                    sub_51922( ref l_U1086, 14, 0 );
                }
            }
            else if (((uParam1^)[GET_PLAYER_ID()] == -7) || ((uParam1^)[GET_PLAYER_ID()] == -8))
            {
                if (((l_U1369) AND (NOT NETWORK_IS_TVT())) AND (NOT sub_49946()))
                {
                    if (sub_8343() < 3)
                    {
                        l_U1087[sub_91506( 17 )]._fU20 = GET_PLAYER_ID();
                        l_U1369 = 0;
                    }
                    else if ((l_U1087[sub_91506( 17 )]._fU20) != -1)
                    {
                        if ((l_U1087[sub_91506( 17 )]._fU20) != GET_PLAYER_ID())
                        {
                            if (NOT (IS_NETWORK_PLAYER_ACTIVE( l_U1087[sub_91506( 17 )]._fU20 )))
                            {
                                l_U1087[sub_91506( 17 )]._fU20 = GET_PLAYER_ID();
                            }
                        }
                    }
                    if (sub_53578())
                    {
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        l_U1369 = 0;
                    }
                    else if (sub_93986())
                    {
                        iVar16 = l_U1087[sub_91506( 17 )]._fU20;
                        sub_85386( ref iVar16, 16 );
                        while (NOT (IS_NETWORK_PLAYER_ACTIVE( iVar16 )))
                        {
                            sub_85386( ref iVar16, 16 );
                        }
                        l_U1087[sub_91506( 17 )]._fU20 = iVar16;
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
                    }
                    else if (sub_94392())
                    {
                        iVar16 = l_U1087[sub_91506( 17 )]._fU20;
                        sub_94250( ref iVar16, 16 );
                        while (NOT (IS_NETWORK_PLAYER_ACTIVE( iVar16 )))
                        {
                            sub_94250( ref iVar16, 16 );
                        }
                        l_U1087[sub_91506( 17 )]._fU20 = iVar16;
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
                    }
                    else if (sub_53426())
                    {
                        if ((l_U1256 != (l_U1087[sub_91506( 17 )]._fU20)) AND ((l_U1087[sub_91506( 17 )]._fU20) != GET_PLAYER_ID()))
                        {
                            l_U1256 = l_U1087[sub_91506( 17 )]._fU20;
                            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        }
                    };;;;
                    if ((l_U1087[sub_91506( 17 )]._fU20) == GET_PLAYER_ID())
                    {
                        l_U1256 = GET_PLAYER_ID();
                    }
                }
                else if (sub_53578())
                {
                    sub_51235( 1 );
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
                else if ((((sub_92463()) AND (sub_8343() > 2)) AND (NOT NETWORK_IS_TVT())) AND (NOT sub_49946()))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1369 = 1;
                }
                else if ((IS_THIS_MACHINE_THE_SERVER()) AND (NOT sub_49946()))
                {
                    if ((uParam1^)[GET_PLAYER_ID()] == -7)
                    {
                        if (sub_53426())
                        {
                            if (NOT l_U1370)
                            {
                                if ((NOT (sub_91139( l_U1086 ))) || (GET_NUMBER_OF_PLAYERS() <= 4))
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
                        else if (sub_99008( ref l_U1086, 14 ))
                        {
                            if (GET_NUMBER_OF_PLAYERS() > 4)
                            {
                                while (sub_91139( l_U1086 ))
                                {
                                    l_U1086--;
                                }
                            }
                        }
                        else if (sub_99351( ref l_U1086, 14 ))
                        {
                            if (GET_NUMBER_OF_PLAYERS() > 4)
                            {
                                while (sub_91139( l_U1086 ))
                                {
                                    l_U1086++;
                                }
                            }
                        }
                        (uParam3^) = sub_99693( l_U1086 );;;
                    }
                    else if ((uParam1^)[GET_PLAYER_ID()] == -8)
                    {
                        if ((sub_91139( l_U1086 )) AND (GET_NUMBER_OF_PLAYERS() > 4))
                        {
                            (uParam1^)[GET_PLAYER_ID()] = -7;
                        }
                    }
                }
                else if (sub_49946())
                {
                    if (sub_53426())
                    {
                        if (NOT NETWORK_LEAVE_GAME_PENDING())
                        {
                            sub_100006( ref uVar38, sub_99693( l_U1086 ), -1 );
                            if ((NETWORK_IS_GAME_RANKED()) AND ((sub_99693( l_U1086 )) != 16))
                            {
                                uVar38._fU0[1] = 1;
                            }
                            N_1187265313( ref uVar38 );
                            sub_100344();
                        }
                    }
                    else
                    {
                        sub_51922( ref l_U1086, 14, 0 );
                    }
                }
                else if ((uParam3^) == -1)
                {
                    l_U1086 = sub_90881( sub_7396() );
                }
                else
                {
                    l_U1086 = sub_90881( (uParam3^) );
                };;;;;;
                if (GET_HOST_ID() > -1)
                {
                    if ((uParam1^)[GET_HOST_ID()] > -5)
                    {
                        sub_51235( 1 );
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                }
            }
            else if (((((uParam1^)[GET_PLAYER_ID()] == -3) || ((uParam1^)[GET_PLAYER_ID()] == -6)) || ((uParam1^)[GET_PLAYER_ID()] == -2)) || ((uParam1^)[GET_PLAYER_ID()] == -1))
            {
                if (sub_53578())
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1291 = 1;
                    if ((uParam1^)[GET_PLAYER_ID()] == -6)
                    {
                        sub_51235( 1 );
                        (uParam1^)[GET_PLAYER_ID()] = -7;
                    }
                    else if ((uParam1^)[GET_PLAYER_ID()] == -2)
                    {
                        sub_51235( 1 );
                        (uParam1^)[GET_PLAYER_ID()] = -4;
                    }
                    else
                    {
                        sub_96010( 1 );
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                }
                else if (sub_53426())
                {
                    if (NOT NETWORK_LEAVE_GAME_PENDING())
                    {
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        UNPAUSE_GAME();
                        if (NOT IS_SCREEN_FADED_OUT())
                        {
                            sub_48383( 0 );
                        }
                        if ((uParam1^)[GET_PLAYER_ID()] == -1)
                        {
                            if (NETWORK_IS_RENDEZVOUS_HOST())
                            {
                                sub_100830();
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
                                sub_100006( ref uVar38, sub_99693( l_U1086 ), -1 );
                                if ((NETWORK_IS_GAME_RANKED()) AND ((sub_99693( l_U1086 )) != 16))
                                {
                                    uVar38._fU0[1] = 1;
                                }
                                N_1187265313( ref uVar38 );
                                sub_100344();
                            }
                        }
                        else
                        {
                            sub_61294();
                        }
                    }
                }
                if (((((uParam1^)[GET_PLAYER_ID()] == -3) || ((uParam1^)[GET_PLAYER_ID()] == -6)) || ((uParam1^)[GET_PLAYER_ID()] == -2)) || ((uParam1^)[GET_PLAYER_ID()] == -1))
                {
                    SET_WIDESCREEN_FORMAT( 0 );
                    DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                    SET_WIDESCREEN_FORMAT( 1 );
                    sub_50159( 0, sub_51576(), sub_53882(), 0, 0, 0, 0, 0, 255 );
                    GET_FRONTEND_DESIGN_VALUE( 106, ref uVar34, ref fVar35 );
                    GET_FRONTEND_DESIGN_VALUE( 107, ref fVar36, ref fVar33 );
                    GET_HUD_COLOUR( 49, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                    if ((uParam1^)[GET_PLAYER_ID()] == -1)
                    {
                        sub_51630( "RETURNTOPARTYM", uVar34, fVar35, fVar36, fVar33, iVar17, iVar18, iVar19, 255, 1 );
                    }
                    else if ((uParam1^)[GET_PLAYER_ID()] == -2)
                    {
                        sub_51630( "CHOOSENEWGAME", uVar34, fVar35, fVar36, fVar33, iVar17, iVar18, iVar19, 255, 1 );
                    }
                    else
                    {
                        sub_51630( "WANT_TO_LEAVE", uVar34, fVar35, fVar36, fVar33, iVar17, iVar18, iVar19, 255, 1 );
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
                            sub_101594( ref l_U1284 );
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
    if (sub_5520())
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
        sub_5584();
    }
    if (NOT NETWORK_IS_TVT())
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (sub_20476())
            {
                if ((GET_PLAYER_TEAM( sub_8714() )) == -1)
                {
                    SET_PLAYER_TEAM( sub_8714(), sub_48762() );
                    if ((uParam1^)[GET_PLAYER_ID()] == 2)
                    {
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                }
            }
            else if (sub_20431())
            {
                if ((GET_PLAYER_TEAM( sub_8714() )) == -1)
                {
                    SET_PLAYER_TEAM( sub_8714(), sub_49244( 2 ) );
                    if ((uParam1^)[GET_PLAYER_ID()] == 2)
                    {
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                }
                else if (sub_20573() < 2)
                {
                    if ((sub_49607( GET_PLAYER_TEAM( sub_8714() ) )) > 1)
                    {
                        if (sub_49705( GET_PLAYER_ID() ))
                        {
                            SET_PLAYER_TEAM( sub_8714(), sub_49244( 2 ) );
                            if ((uParam1^)[GET_PLAYER_ID()] == 2)
                            {
                                (uParam1^)[GET_PLAYER_ID()] = 0;
                            }
                        }
                    }
                }
            }
            else if (sub_12891())
            {
                if ((GET_PLAYER_TEAM( sub_8714() )) != 0)
                {
                    SET_PLAYER_TEAM( sub_8714(), 0 );
                }
            }
            else if ((GET_PLAYER_TEAM( sub_8714() )) != -1)
            {
                SET_PLAYER_TEAM( sub_8714(), -1 );
                if ((uParam1^)[GET_PLAYER_ID()] == 2)
                {
                    (uParam1^)[GET_PLAYER_ID()] = 0;
                }
            };;;;
        }
    }
    if (((((uParam1^)[GET_PLAYER_ID()] == -3) || ((uParam1^)[GET_PLAYER_ID()] == -6)) || ((uParam1^)[GET_PLAYER_ID()] == -2)) || ((uParam1^)[GET_PLAYER_ID()] == -1))
    {
        sub_53737();
        return;
    }
    else if (IS_PAUSE_MENU_ACTIVE())
    {
        sub_96010( 1 );
        sub_53737();
        return;
    }
    else if (l_U1299)
    {
        if (N_604003528())
        {
            if (sub_51194())
            {
                l_U1299 = 0;
            }
            sub_53737();
            return;
        }
        else if (sub_102549( bVar31, bVar32 ))
        {
            l_U1299 = 0;
        }
        sub_53737();
        return;;
    }
    else if (sub_92345())
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (GET_PLAYERSETTINGS_MODEL_CHOICE() != (sub_105465( sub_5471() )))
            {
                if (sub_20011( GET_PLAYERSETTINGS_MODEL_CHOICE() ))
                {
                    CHANGE_PLAYER_MODEL( sub_8714(), GET_PLAYERSETTINGS_MODEL_CHOICE() );
                    SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE( sub_8714() );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( GET_PLAYERSETTINGS_MODEL_CHOICE() );
                    sub_5169( GET_PLAYER_ID(), 0 );
                }
            }
            else if (HAS_GAMER_CHANGED_NETWORK_MODEL_SETTINGS())
            {
                SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE( sub_8714() );
            }
        }
    };;;;
    if ((sub_49946()) || (NOT N_604003528()))
    {
        if (NOT bVar31)
        {
            if (((uParam1^)[GET_PLAYER_ID()] == 0) || ((uParam1^)[GET_PLAYER_ID()] == 2))
            {
                iVar16 = GET_LOCAL_PLAYER_MP_CASH();
                if (iVar16 > 0)
                {
                    SET_WIDESCREEN_FORMAT( 2 );
                    sub_50159( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                    GET_FRONTEND_DESIGN_VALUE( 23, ref uVar34, ref fVar35 );
                    GET_FRONTEND_DESIGN_VALUE( 24, ref fVar36, ref fVar33 );
                    GET_HUD_COLOUR( 49, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                    sub_50456( "CASH", uVar34, fVar35, fVar36, fVar33, 255, 255, 255, 255, 2, iVar16 );
                    SET_WIDESCREEN_FORMAT( 3 );
                }
            }
        }
    }
    if ((uParam1^)[GET_PLAYER_ID()] == -4)
    {
        sub_51235( 1 );
        sub_50159( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
        sub_51630( "NEWGAME", sub_51576(), 0.08500000, sub_61486( 113 ), sub_61519( 113 ), 255, 255, 255, 255, 2 );
        INIT_FRONTEND_HELPER_TEXT();
        DRAW_FRONTEND_HELPER_TEXT( "CANCEL", "INPUT_F_CANCEL", 0 );
        DRAW_FRONTEND_HELPER_TEXT( "CONFIRM", "INPUT_F_ACCEPT", 0 );
        DRAW_FRONTEND_HELPER_TEXT( "MODE", "PAD_DPAD_UPDOWN", 0 );
        sub_106039( 0 );
        SET_WIDESCREEN_FORMAT( 2 );
        if (GET_IS_WIDESCREEN())
        {
            sub_50159( 0, sub_51576(), sub_53882() * 1.20000000, 0, 0, 0, 0, 0, 255 );
        }
        else
        {
            sub_50159( 0, sub_51576(), sub_53882(), 0, 0, 0, 0, 0, 255 );
        }
        GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
        if (GET_IS_WIDESCREEN())
        {
            sub_51630( "CHOOSENEWGAME", sub_51576() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
        }
        else
        {
            sub_51630( "CHOOSENEWGAME", sub_51576() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
        }
    }
    else if (((uParam1^)[GET_PLAYER_ID()] == -7) || ((uParam1^)[GET_PLAYER_ID()] == -8))
    {
        sub_51235( 1 );
        sub_50159( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
        if (sub_49946())
        {
            sub_51630( "NEXTGAME", sub_51576(), 0.11900000, sub_61486( 113 ), sub_61519( 113 ), 255, 255, 255, 255, 2 );
        }
        else
        {
            sub_51630( "NEXTGAME", sub_51576(), 0.08500000, sub_61486( 113 ), sub_61519( 113 ), 255, 255, 255, 255, 2 );
        }
        SET_WIDESCREEN_FORMAT( 3 );
        INIT_FRONTEND_HELPER_TEXT();
        if (((l_U1369) AND (NOT NETWORK_IS_TVT())) AND (NOT sub_49946()))
        {
            if ((l_U1256 != (l_U1087[sub_91506( 17 )]._fU20)) AND ((l_U1087[sub_91506( 17 )]._fU20) != GET_PLAYER_ID()))
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
            sub_51630( ref l_U1087[sub_91506( 17 )]._fU0, fVar37 - fVar33, 0.76300000, 0.31500000, 0.43000000, 255, 255, 255, 255, 3 );
            sub_50159( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
            if ((((l_U1087[sub_91506( 17 )]._fU20) > -1) AND ((l_U1087[sub_91506( 17 )]._fU20) != GET_PLAYER_ID())) AND (IS_NETWORK_PLAYER_ACTIVE( l_U1087[sub_91506( 17 )]._fU20 )))
            {
                sub_71028( sub_5180( l_U1087[sub_91506( 17 )]._fU20 ), ref iVar21, ref iVar22, ref iVar23 );
                if (l_U102)
                {
                    if (N_604003528())
                    {
                        fVar36 = sub_52797( fVar37 + fVar33, 0.76300000, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, "WWWWWWWWWWWWWWW" );
                    }
                    else
                    {
                        fVar36 = sub_52797( fVar37 + fVar33, 0.76300000, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, "WWWWWWWWWWWWWWWW" );
                    }
                }
                else
                {
                    SET_TEXT_SCALE( 0.31500000, 0.43000000 );
                    SET_TEXT_USE_UNDERSCORE( 1 );
                    fVar49 = GET_STRING_WIDTH_WITH_STRING( "STRING", GET_PLAYER_NAME( sub_5180( l_U1087[sub_91506( 17 )]._fU20 ) ) );
                    fVar50 = sub_53882() - (fVar37 + fVar33);
                    if (fVar49 <= fVar50)
                    {
                        fVar36 = sub_52797( fVar37 + fVar33, 0.76300000, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_5180( l_U1087[sub_91506( 17 )]._fU20 ) ) );
                    }
                    else
                    {
                        fVar36 = sub_52797( fVar37 + fVar33, 0.76300000, (fVar50 * 0.31500000) / fVar49, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_5180( l_U1087[sub_91506( 17 )]._fU20 ) ) );
                    }
                    SET_TEXT_USE_UNDERSCORE( 0 );
                }
            }
            else
            {
                fVar36 = sub_51630( "NONE", fVar37 + fVar33, 0.76300000, 0.31500000, 0.43000000, 255, 255, 255, 255, 2 );
            }
            DRAW_SPRITE( l_U599[0], ((fVar37 + fVar33) + 0.01300000) + fVar36, 0.76300000 + 0.01300000, 0.01400000, 0.02000000, 0.00000000, 255, 255, 255, 255 );
        }
        else if (sub_49946())
        {
            DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
            DRAW_FRONTEND_HELPER_TEXT( "CONFIRM", "INPUT_F_ACCEPT", 0 );
            sub_106039( 0 );
        }
        else if ((IS_THIS_MACHINE_THE_SERVER()) AND ((uParam1^)[GET_PLAYER_ID()] == -7))
        {
            DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
            DRAW_FRONTEND_HELPER_TEXT( "CONFIRM", "INPUT_F_ACCEPT", 0 );
            if ((sub_8343() > 2) AND (NOT NETWORK_IS_TVT()))
            {
                DRAW_FRONTEND_HELPER_TEXT( "KICK_PLAYERU", "INPUT_F_Y", 0 );
            }
            DRAW_FRONTEND_HELPER_TEXT( "MODE", "PAD_DPAD_UPDOWN", 0 );
        }
        else if ((IS_THIS_MACHINE_THE_SERVER()) AND (NOT l_U1370))
        {
            DRAW_FRONTEND_HELPER_TEXT( "CANCEL", "INPUT_F_CANCEL", 0 );
            if ((sub_8343() > 2) AND (NOT NETWORK_IS_TVT()))
            {
                DRAW_FRONTEND_HELPER_TEXT( "KICK_PLAYERU", "INPUT_F_Y", 0 );
            }
        }
        else
        {
            DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
            if ((sub_8343() > 2) AND (NOT NETWORK_IS_TVT()))
            {
                DRAW_FRONTEND_HELPER_TEXT( "KICK_PLAYERU", "INPUT_F_Y", 0 );
            }
        };;;;
        if (NOT sub_49946())
        {
            sub_106039( 1 );
        }
        SET_WIDESCREEN_FORMAT( 2 );
        if (NOT sub_49946())
        {
            if (GET_IS_WIDESCREEN())
            {
                sub_50159( 0, sub_51576(), sub_53882() * 1.20000000, 0, 0, 0, 0, 0, 255 );
                GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                sub_51630( "CHOOSNEXTGAME", sub_51576() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
            }
            else
            {
                sub_50159( 0, sub_51576(), sub_53882(), 0, 0, 0, 0, 0, 255 );
                GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                sub_51630( "CHOOSNEXTGAME", sub_51576() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
            }
        }
        if (NOT sub_49946())
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
                if (sub_91139( l_U1086 ))
                {
                    if (GET_NUMBER_OF_PLAYERS() > 4)
                    {
                        (uParam1^)[GET_PLAYER_ID()] = -7;
                        bVar29 = false;
                    }
                }
                else if ((sub_99693( l_U1086 )) == sub_7396())
                {
                    if ((sub_99693( l_U1086 )) != 10)
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
                            sub_48383( 0 );
                        }
                        sub_109264( sub_99693( l_U1086 ) );
                    }
                }
            }
        }
    }
    else
    {
        SET_WIDESCREEN_FORMAT( 2 );
        StrCopy( ref cVar8, "CP_DESCRP_", 16 );
        ConcatString(ref cVar8, sub_7396(), 16);
        if (GET_IS_WIDESCREEN())
        {
            sub_50159( 0, sub_51576(), sub_53882() * 1.20000000, 0, 0, 0, 0, 0, 255 );
            GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
            sub_51630( ref cVar8, sub_51576() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
        }
        else
        {
            sub_50159( 0, sub_51576(), sub_53882(), 0, 0, 0, 0, 0, 255 );
            GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
            sub_51630( ref cVar8, sub_51576() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
        }
        SET_WIDESCREEN_FORMAT( 3 );
        if (NOT l_U1289)
        {
            if ((l_U1087[sub_91506( 16 )]._fU20) == 1)
            {
                sub_109584( 0 );
            }
            else if (sub_109923( ref I ))
            {
                if (sub_110019( ref l_U1087[I]._fU0, l_U1087[I]._fU24 ))
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
            DRAW_RECT( 0.50000000, sub_61486( 0 ), 1.00000000, 0.00200000, 180, 180, 180, 255 );
        }
        else
        {
            DRAW_RECT( 0.50000000, sub_61486( 0 ), 1.00000000, 0.00400000, 180, 180, 180, 255 );
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
                sub_50159( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                if (sub_93535())
                {
                    fVar33 = 0.01300000;
                    if ((uParam1^)[GET_PLAYER_ID()] == 0)
                    {
                        bVar27 = sub_96515( I );
                        if (NOT (sub_95284( I )))
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
                    sub_51630( ref l_U1087[I]._fU0, fVar37 - fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 3 );
                }
                else
                {
                    fVar33 = 0.00800000;
                    sub_51630( ref l_U1087[I]._fU0, fVar37 - fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 3 );
                }
                sub_50159( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                switch (l_U1087[I]._fU16)
                {
                    case 1:
                    case 8:
                    if ((bVar27) || (l_U1087[I]._fU24 > 0))
                    {
                        cVar8 = {l_U1087[I]._fU0};
                        ConcatString(ref cVar8, l_U1087[I]._fU20, 16);
                        fVar36 = sub_51630( ref cVar8, fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    else
                    {
                        fVar36 = sub_51630( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 2:
                    if (l_U1087[I]._fU20 < 2147483647)
                    {
                        fVar36 = sub_68938( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, l_U1087[I]._fU20, 1065353216 );
                    }
                    else
                    {
                        fVar36 = sub_52797( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, "-" );
                    }
                    break;
                    case 3:
                    fVar36 = sub_50781( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, l_U1087[I]._fU20 );
                    break;
                    case 11:
                    if ((bVar27) || (l_U1087[I]._fU24 > 0))
                    {
                        if (l_U1087[I]._fU20 == 0)
                        {
                            fVar36 = sub_51630( "RANDOM", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                        else
                        {
                            fVar36 = sub_50781( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, l_U1087[I]._fU20 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_51630( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 13:
                    if ((bVar27) || (l_U1087[I]._fU24 > 0))
                    {
                        ;
                    }
                    else
                    {
                        fVar36 = sub_51630( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 4:
                    case 14:
                    if ((bVar27) || (l_U1087[I]._fU24 > 0))
                    {
                        fVar36 = sub_112499( "NUM_OUTOF_NUM", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, l_U1087[I]._fU20 + 1, l_U1087[I]._fU24 );
                    }
                    else
                    {
                        fVar36 = sub_51630( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 15:
                    if (l_U1087[I]._fU20 > -1)
                    {
                        cVar8 = {l_U1087[I]._fU0};
                        ConcatString(ref cVar8, l_U1087[I]._fU20, 16);
                        fVar36 = sub_51630( ref cVar8, fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    else
                    {
                        fVar36 = sub_51630( "OFF", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 5:
                    case 7:
                    if ((bVar27) || (l_U1087[I]._fU24 > 0))
                    {
                        if (l_U1087[I]._fU20 > 0)
                        {
                            fVar36 = sub_51630( "YES", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                        else
                        {
                            fVar36 = sub_51630( "NO", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_51630( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 6:
                    case 16:
                    if ((bVar27) || (l_U1087[I]._fU24 > 0))
                    {
                        if (l_U1087[I]._fU20 > 0)
                        {
                            fVar36 = sub_51630( "ON", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                        else
                        {
                            fVar36 = sub_51630( "OFF", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_51630( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 9:
                    case 10:
                    if (sub_113316())
                    {
                        if (l_U1087[I]._fU20 > 0)
                        {
                            fVar36 = sub_51630( "ON", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                        else
                        {
                            fVar36 = sub_51630( "OFF", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_51630( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 12:
                    if ((bVar27) || (l_U1087[I]._fU24 > 0))
                    {
                        fVar36 = sub_50781( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, sub_113647() );
                    }
                    else if ((GET_PLAYER_TEAM( sub_8714() )) == -1)
                    {
                        fVar36 = sub_51630( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    else
                    {
                        fVar36 = sub_50781( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, sub_113647() );
                    }
                    break;
                    case 17:
                    if ((bVar27) || (l_U1087[I]._fU24 > 0))
                    {
                        if (((l_U1087[I]._fU20 > -1) AND (l_U1087[I]._fU20 != GET_PLAYER_ID())) AND (IS_NETWORK_PLAYER_ACTIVE( l_U1087[I]._fU20 )))
                        {
                            if (l_U1275 == I)
                            {
                                sub_71028( sub_5180( l_U1087[I]._fU20 ), ref iVar21, ref iVar22, ref iVar23 );
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
                                    fVar36 = sub_52797( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, "WWWWWWWWWWWWWWW" );
                                }
                                else
                                {
                                    fVar36 = sub_52797( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, "WWWWWWWWWWWWWWWW" );
                                }
                            }
                            else
                            {
                                SET_TEXT_SCALE( 0.31500000, 0.43000000 );
                                SET_TEXT_USE_UNDERSCORE( 1 );
                                fVar49 = GET_STRING_WIDTH_WITH_STRING( "STRING", GET_PLAYER_NAME( sub_5180( l_U1087[I]._fU20 ) ) );
                                if (GET_IS_WIDESCREEN())
                                {
                                    if (fVar49 <= 0.20300000)
                                    {
                                        fVar36 = sub_52797( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_5180( l_U1087[I]._fU20 ) ) );
                                    }
                                    else
                                    {
                                        fVar36 = sub_52797( fVar37 + fVar33, fVar35, 0.06394500 / fVar49, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_5180( l_U1087[I]._fU20 ) ) );
                                    }
                                }
                                else if (fVar49 <= 0.18900000)
                                {
                                    fVar36 = sub_52797( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_5180( l_U1087[I]._fU20 ) ) );
                                }
                                else
                                {
                                    fVar36 = sub_52797( fVar37 + fVar33, fVar35, 0.05953500 / fVar49, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_5180( l_U1087[I]._fU20 ) ) );
                                }
                                SET_TEXT_USE_UNDERSCORE( 0 );
                            }
                        }
                        else
                        {
                            fVar36 = sub_51630( "NONE", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_51630( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                }
                if ((l_U1275 == I) AND ((uParam1^)[GET_PLAYER_ID()] == 0))
                {
                    if (bVar27)
                    {
                        if (NOT (sub_95284( l_U1275 )))
                        {
                            DRAW_SPRITE( l_U599[0], ((fVar37 + fVar33) + 0.01300000) + fVar36, fVar35 + 0.01300000, 0.01400000, 0.02000000, 0.00000000, 255, 255, 255, 255 );
                        }
                    }
                }
                fVar35 += 0.03200000;
            }
        }
    }
    sub_53737();
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
                    DRAW_RECT( ((0.20800000 + sub_51576()) + 0.00900000) + sub_115139(), 0.04900000 + fVar35, 0.42900000, 0.03800000, iVar17, iVar18, iVar19, 45 );
                }
                else
                {
                    DRAW_RECT( ((0.17900000 + sub_51576()) + 0.00900000) + sub_115139(), 0.04900000 + fVar35, 0.37200000, 0.03700000, iVar17, iVar18, iVar19, 45 );
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
            if ((sub_49607( J )) > 0)
            {
                iVar14++;
                sub_50159( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                GET_TEAM_RGB_COLOUR( J, ref iVar17, ref iVar18, ref iVar19 );
                if (GET_IS_WIDESCREEN())
                {
                    sub_50781( sub_51576() + 0.00900000, fVar35 + 0.03200000, 0.38000000, 0.55500000, iVar17, iVar18, iVar19, 255, 1, iVar14 );
                }
                else
                {
                    sub_50781( sub_51576() + 0.00900000, fVar35 + 0.03100000, 0.38000000, 0.55500000, iVar17, iVar18, iVar19, 255, 1, iVar14 );
                }
                for ( I = 0; I < 16; I++ )
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( l_U662[0]._fU24[I] ))
                    {
                        if ((GET_PLAYER_TEAM( sub_5180( l_U662[0]._fU24[I] ) )) == J)
                        {
                            if (GET_IS_WIDESCREEN())
                            {
                                sub_70932( l_U662[0]._fU24[I], ref iVar51, (sub_51576() + 0.00900000) + sub_115139(), ref fVar35, 0.35000000, 0.47750000, 0.03600000, iParam0, 0 );
                            }
                            else
                            {
                                sub_70932( l_U662[0]._fU24[I], ref iVar51, (sub_51576() + 0.00900000) + sub_115139(), ref fVar35, 0.32500000, 0.43500000, 0.03600000, iParam0, 0 );
                            }
                            sub_115950( l_U662[0]._fU24[I], (((uParam1^)[l_U662[0]._fU24[I]] == 2) || (((NOT sub_49946()) AND ((uParam1^)[l_U662[0]._fU24[I]] == -7)) AND (GET_HOST_ID() != l_U662[0]._fU24[I]))) || (((uParam1^)[l_U662[0]._fU24[I]] == -8) AND (GET_HOST_ID() == l_U662[0]._fU24[I])), ((sub_51576() + 0.00900000) + sub_115139()) + fVar36, fVar35 );
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
                    DRAW_RECT( ((0.20800000 + sub_51576()) + 0.00900000) + -0.00900000, 0.04900000 + fVar35, 0.42900000, 0.03800000, iVar17, iVar18, iVar19, 45 );
                }
                else
                {
                    DRAW_RECT( ((0.17900000 + sub_51576()) + 0.00900000) + -0.00900000, 0.04900000 + fVar35, 0.37200000, 0.03800000, iVar17, iVar18, iVar19, 45 );
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
                if (((GET_PLAYER_TEAM( sub_5180( l_U662[0]._fU24[I] ) )) == -1) || (sub_12891()))
                {
                    if (GET_IS_WIDESCREEN())
                    {
                        sub_70932( l_U662[0]._fU24[I], ref iVar51, (sub_51576() + 0.00900000) + -0.00900000, ref fVar35, 0.35000000, 0.47750000, 0.03600000, iParam0, ((uParam1^)[GET_PLAYER_ID()] == 0) || ((uParam1^)[GET_PLAYER_ID()] == 2) );
                    }
                    else
                    {
                        sub_70932( l_U662[0]._fU24[I], ref iVar51, (sub_51576() + 0.00900000) + -0.00900000, ref fVar35, 0.32500000, 0.43500000, 0.03600000, iParam0, ((uParam1^)[GET_PLAYER_ID()] == 0) || ((uParam1^)[GET_PLAYER_ID()] == 2) );
                    }
                    sub_115950( l_U662[0]._fU24[I], (((uParam1^)[l_U662[0]._fU24[I]] == 2) || (((NOT sub_49946()) AND ((uParam1^)[l_U662[0]._fU24[I]] == -7)) AND (GET_HOST_ID() != l_U662[0]._fU24[I]))) || (((uParam1^)[l_U662[0]._fU24[I]] == -8) AND (GET_HOST_ID() == l_U662[0]._fU24[I])), ((sub_51576() + 0.00900000) + -0.00900000) + fVar36, fVar35 );
                }
            }
        }
    }
    return;
}

void sub_90702()
{
    if (DOES_CAM_EXIST( l_U1342 ))
    {
        DESTROY_CAM( l_U1342 );
    }
    return;
}

int sub_90881(unknown uParam0)
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

int sub_91139(int iParam0)
{
    if (((iParam0 == 10) || (iParam0 == 11)) || (iParam0 == 12))
    {
        return 1;
    }
    return 0;
}

int sub_91506(int iParam0)
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

void sub_91721()
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

int sub_92345()
{
    unknown uVar2;

    uVar2 = sub_7396();
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

int sub_92463()
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

int sub_92645()
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

int sub_93120()
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

int sub_93258()
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

int sub_93535()
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

int sub_93854()
{
    if (NOT NETWORK_IS_TVT())
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (sub_20431())
            {
                if ((sub_49607( GET_PLAYER_TEAM( sub_8714() ) )) == 1)
                {
                    return 0;
                }
                return 1;
            }
            else if (sub_20476())
            {
                if (sub_8343() == 1)
                {
                    return 0;
                }
                return 1;
            }
        }
    }
    return 0;
}

int sub_93986()
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

int sub_94250(unknown uParam0, int iParam1)
{
    (uParam0^)--;
    if ((uParam0^) < 0)
    {
        (uParam0^) = iParam1 - 1;
        return 1;
    }
    return 0;
}

int sub_94392()
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

int sub_95284(int iParam0)
{
    if ((((iParam0 == l_U1293) || (iParam0 == l_U1295)) || (iParam0 == l_U1292)) || (iParam0 == l_U1294))
    {
        return 1;
    }
    return 0;
}

int sub_95379(unknown uParam0, int iParam1)
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

void sub_95757(int iParam0)
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

void sub_96010(unknown uParam0)
{
    sub_51235( uParam0 );
    sub_59347( 0 );
    return;
}

int sub_96515(unknown uParam0)
{
    if (l_U1087[uParam0]._fU16 != 0)
    {
        if ((l_U1087[uParam0]._fU16 == 9) || (l_U1087[uParam0]._fU16 == 10))
        {
            if (IS_THIS_MACHINE_THE_SERVER())
            {
                if (sub_20476())
                {
                    if (sub_20476())
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
        else if (sub_93854())
        {
            return 1;
        };;;;
    }
    return 0;
}

int sub_99008(unknown uParam0, unknown uParam1)
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

int sub_99351(unknown uParam0, int iParam1)
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

int sub_99693(unknown uParam0)
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

void sub_100006(int iParam0, int iParam1, int iParam2)
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
        iParam0->_fU0[2] = sub_100102( iParam1 );
        iParam0->_fU0[3] = 0;
        iParam0->_fU0[4] = iParam2;
        g_U14 = iParam2;
        iParam0->_fU0[5] = sub_100196( iParam1 );
    }
    return;
}

int sub_100102(unknown uParam0)
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

int sub_100196(unknown uParam0)
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

void sub_100344()
{
    g_U10 = 1;
    sub_61307();
    return;
}

void sub_100830()
{
    g_U11 = 1;
    sub_61307();
    return;
}

void sub_101594(unknown uParam0)
{
    if ((uParam0^))
    {
        (uParam0^) = 0;
        return;
    }
    (uParam0^) = 1;
    return;
}

int sub_102549(unknown uParam0, boolean bParam1)
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
    sub_51235( 1 );
    GET_FRONTEND_DESIGN_VALUE( 113, ref uVar13, ref uVar14 );
    sub_50159( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    sub_51630( "INVITE_TITLE", sub_51576(), 0.08500000, uVar13, uVar14, 255, 255, 255, 255, 2 );
    sub_50159( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    GET_HUD_COLOUR( 56, ref iVar5, ref iVar6, ref iVar7, ref uVar8 );
    sub_51630( "INVITES_DESC", sub_51576() + 0.00100000, fVar12, 0.31500000, 0.42950000, iVar5, iVar6, iVar7, 255, 2 );
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
                DRAW_RECT( 0.57000000 + sub_51576(), 0.01370000 + fVar12, 1.15500000, 0.03800000, iVar5, iVar6, iVar7, 45 );
            }
            else
            {
                DRAW_RECT( 0.40200000 + sub_51576(), 0.01370000 + fVar12, 0.82000000, 0.03800000, iVar5, iVar6, iVar7, 45 );
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
    sub_51922( ref l_U1300, NETWORK_GET_FRIEND_COUNT(), 0 );
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
            sub_50159( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
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
                    sub_52797( sub_51576(), fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2, "WWWWWWWWWWWWWWW" );
                }
                else
                {
                    sub_52797( sub_51576(), fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2, "WWWWWWWWWWWWWWWW" );
                }
            }
            else
            {
                SET_TEXT_USE_UNDERSCORE( 1 );
                sub_52797( sub_51576(), fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2, NETWORK_GET_FRIEND_NAME( I ) );
                SET_TEXT_USE_UNDERSCORE( 0 );
            }
            sub_50159( 0, 0.00000000, 1.50000000, 0, 0, 0, 0, 0, 255 );
            if (sub_103631( I ))
            {
                sub_51630( "INGAME", sub_51576() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
            }
            else if (sub_103786( I ))
            {
                sub_51630( "INVITING", sub_51576() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
                if (GET_CURRENT_EPISODE() == (NETWORK_GET_UNACCEPTED_INVITE_EPISODE( sub_103932( I ) )))
                {
                    StrCopy( ref cVar15, "NTGT_", 8 );
                    ConcatString(ref cVar15, NETWORK_GET_UNACCEPTED_INVITE_GAME_MODE( sub_103932( I ) ), 8);
                    sub_50159( 0, 0.00000000, 1.50000000, 0, 0, 0, 0, 0, 255 );
                    if (GET_IS_WIDESCREEN())
                    {
                        sub_51630( ref cVar15, sub_53882() + 0.32600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 3 );
                    }
                    else
                    {
                        sub_51630( ref cVar15, sub_53882() + -0.01100000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 3 );
                    }
                }
            }
            else if (NETWORK_DID_INVITE_FRIEND( NETWORK_GET_FRIEND_NAME( I ) ))
            {
                sub_51630( "INVITED", sub_51576() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
            }
            else if (NETWORK_IS_FRIEND_ONLINE( NETWORK_GET_FRIEND_NAME( I ) ))
            {
                sub_51630( "ONLINE", sub_51576() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
            }
            else
            {
                sub_51630( "OFFLINE", sub_51576() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
            };;;;
            if (NETWORK_IS_FRIEND_IN_SAME_TITLE( NETWORK_GET_FRIEND_NAME( I ) ))
            {
                DRAW_SPRITE( l_U599[33], sub_51576() + 0.33300000, fVar12 + 0.01520000, 0.03900000, 0.02600000, 0.00000000, iVar5, iVar6, iVar7, 255 );
            }
            fVar12 += 0.03600000;
        }
    }
    GET_NETWORK_TIMER( ref iVar9 );
    if (l_U1362 > (iVar9 - 5000))
    {
        SET_WIDESCREEN_FORMAT( 2 );
        sub_50159( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
        GET_FRONTEND_DESIGN_VALUE( 23, ref uVar11, ref fVar12 );
        GET_FRONTEND_DESIGN_VALUE( 24, ref uVar13, ref uVar14 );
        if (NOT bParam1)
        {
            SET_TEXT_USE_UNDERSCORE( 1 );
            sub_104644( "INVITED_PLAYER", uVar11, fVar12 + 0.04050000, uVar13, uVar14, 255, 255, 255, 255, 2, ref l_U1353 );
            SET_TEXT_USE_UNDERSCORE( 0 );
        }
    }
    INIT_FRONTEND_HELPER_TEXT();
    DRAW_FRONTEND_HELPER_TEXT( "BACK", "INPUT_F_CANCEL", 0 );
    if ((l_U1361 != l_U1300) || (l_U1362 < (iVar9 - 5000)))
    {
        l_U1361 = -1;
    }
    if (NOT (sub_103631( l_U1300 )))
    {
        if (sub_103786( l_U1300 ))
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
    if (sub_53426())
    {
        if (NETWORK_IS_FRIEND_ONLINE( NETWORK_GET_FRIEND_NAME( l_U1300 ) ))
        {
            if (NOT (sub_103631( l_U1300 )))
            {
                if (sub_103786( l_U1300 ))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    NETWORK_ACCEPT_INVITE( sub_103932( l_U1300 ) );
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
    else if (sub_53578())
    {
        return 1;
    }
    return 0;
}

int sub_103631(unknown uParam0)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (COMPARE_STRING( NETWORK_GET_FRIEND_NAME( uParam0 ), GET_PLAYER_NAME( sub_5180( I ) ) ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_103786(unknown uParam0)
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

int sub_103932(unknown uParam0)
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

void sub_104644(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_50496( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_STRING( uParam0, uParam10 );
    DISPLAY_TEXT_WITH_LITERAL_STRING( uParam1, uParam2, uParam0, uParam10 );
    return Result;
}

void sub_105465(unknown uParam0)
{
    unknown Result;

    GET_CHAR_MODEL( uParam0, ref Result );
    return Result;
}

void sub_106039(boolean bParam0)
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
            if (sub_91139( I ))
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
        sub_50159( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
        sub_51630( sub_106272( I ), fVar9, fVar10, 0.35000000, 0.47750000, iVar4, iVar5, iVar6, 255, 1 );
        fVar10 += 0.03600000;
    }
    return;
}

string sub_106272(unknown uParam0)
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

void sub_109264(unknown uParam0)
{
    g_U13 = uParam0;
    if (NOT g_U26675)
    {
        sub_61307();
    }
    return;
}

void sub_109584(boolean bParam0)
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
        fVar7 = sub_51576();
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
    ConcatString(ref cVar9, sub_7396(), 16);
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
        sub_50159( 0, fVar7, sub_53882() * 1.20000000, 0, 0, 0, 0, 0, 255 );
    }
    else
    {
        sub_50159( 0, fVar7, sub_53882(), 0, 0, 0, 0, 0, 255 );
    }
    GET_HUD_COLOUR( 56, ref uVar3, ref uVar4, ref uVar5, ref uVar6 );
    sub_51630( ref cVar9, fVar7, fVar8, 0.31500000, 0.42950000, uVar3, uVar4, uVar5, 255, 2 );
    return;
}

int sub_109923(unknown uParam0)
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

int sub_110019(unknown uParam0, unknown uParam1)
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

void sub_112499(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    float Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_50496( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_NUMBER( uParam0, uParam10 );
    Result += GET_STRING_WIDTH_WITH_NUMBER( "NUMBER", uParam11 );
    Result -= GET_STRING_WIDTH_WITH_NUMBER( "NUMBER", 11 );
    DISPLAY_TEXT_WITH_2_NUMBERS( uParam1, uParam2, uParam0, uParam10, uParam11 );
    return Result;
}

int sub_113316()
{
    if (sub_20476())
    {
        if (sub_20476())
        {
            return 1;
        }
    }
    else if ((sub_20431()) || (sub_12891()))
    {
        return 1;
    }
    return 0;
}

int sub_113647()
{
    int I;
    int Result;

    for ( I = 0; I < 8; I++ )
    {
        if ((sub_49607( I )) > 0)
        {
            Result++;
            if (I == (GET_PLAYER_TEAM( sub_8714() )))
            {
                return Result;
            }
        }
    }
    return 0;
}

float sub_115139()
{
    if (GET_IS_WIDESCREEN())
    {
        return 0.02700000;
    }
    return 0.02100000;
}

void sub_115950(int iParam0, boolean bParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    iVar7 = 3;
    GET_HUD_COLOUR( 56, ref uVar8, ref uVar9, ref uVar10, ref iVar6 );
    GET_NETWORK_TIMER( ref iVar6 );
    if ((sub_115989( iParam0 )) > 0)
    {
        if ((sub_49946()) || (NOT N_604003528()))
        {
            iVar7 = 4;
        }
        if (l_U1368 > iVar6)
        {
            DRAW_SPRITE( l_U599[10], uParam2 + (-0.02400000 * iVar7), uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
        }
        else
        {
            sub_50159( 0, sub_51576(), sub_53882(), 0, 0, 0, 0, 0, 255 );
            sub_50781( (uParam2 + (-0.02400000 * iVar7)) + -0.00030000, (uParam3 + 0.01300000) + -0.01320000, 0.31500000, 0.42950000, 255, 255, 255, 255, 1, sub_115989( iParam0 ) );
            if (l_U1368 < (iVar6 - 1000))
            {
                l_U1368 = iVar6 + 1000;
            }
        }
    }
    if (((sub_49946()) || (NOT N_604003528())) AND ((GET_PLAYER_RANK_LEVEL_DURING_MP( iParam0 )) > -1))
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

void sub_115989(int iParam0)
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

void sub_117699(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return;
}

void sub_117717(unknown uParam0)
{
    int I;
    unknown[16] uVar4;

    array(ref uVar4, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar4[I] = l_U1863[I]._fU20;
    }
    if ((GET_PLAYER_ID() >= 0) AND (GET_PLAYER_ID() < 16))
    {
        sub_117816( ref uVar4, ref l_U1863[GET_PLAYER_ID()]._fU20, uParam0 );
    }
    return;
}

void sub_117816(unknown uParam0, unknown uParam1, boolean bParam2)
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
        iVar6 = sub_117868();
    }
    if (NOT NETWORK_IS_TVT())
    {
        if (iVar6 == (uParam1^))
        {
            if (((uParam1^) > -1) AND ((uParam1^) != GET_PLAYER_ID()))
            {
                if (IS_NETWORK_PLAYER_ACTIVE( iVar6 ))
                {
                    if (NOT (COMPARE_STRING( GET_PLAYER_NAME( sub_5180( iVar6 ) ), ref l_U1407 )))
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
                                            sub_5635( 1 );
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
                StrCopy( ref l_U1407, GET_PLAYER_NAME( sub_5180( iVar6 ) ), 32 );
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
                                sub_118428( I, "WANTS_TO_KICK", (uParam0^)[I] );
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

void sub_117868()
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

void sub_118428(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    uVar5 = sub_85265( -2 );
    StrCopy( ref l_U104[uVar5]._fU76._fU0, GET_PLAYER_NAME( sub_5180( uParam0 ) ), 64 );
    StrCopy( ref l_U104[uVar5]._fU12, uParam1, 64 );
    sub_71028( sub_5180( uParam0 ), ref l_U104[uVar5]._fU76._fU68, ref l_U104[uVar5]._fU76._fU72, ref l_U104[uVar5]._fU76._fU76 );
    StrCopy( ref l_U104[uVar5]._fU156._fU0, GET_PLAYER_NAME( sub_5180( uParam2 ) ), 64 );
    sub_71028( sub_5180( uParam2 ), ref l_U104[uVar5]._fU156._fU68, ref l_U104[uVar5]._fU156._fU72, ref l_U104[uVar5]._fU156._fU76 );
    sub_85713( uVar5 );
    return;
}

void sub_118794()
{
    PRINT_BIG( "STARTINGGAME", 50, 2 );
    if (IS_PAUSE_MENU_ACTIVE())
    {
        DEACTIVATE_FRONTEND();
    }
    l_U1286 = 1;
    return;
}

void sub_118924(unknown uParam0, unknown uParam1)
{
    int I;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    sub_88814( "\n Set Ped" );
    for ( I = 0; I <= 9; I++ )
    {
        uVar5 = GET_BITS_IN_RANGE( uParam1, I * 3, (I * 3) + 2 );
        uVar6 = GET_NUMBER_OF_CHAR_TEXTURE_VARIATIONS( (uParam0^), I, uVar5 );
        GENERATE_RANDOM_INT_IN_RANGE( 0, uVar6, ref uVar7 );
        sub_4996( " # ", uVar5 );
        sub_4996( ", ", uVar7 );
        SET_CHAR_COMPONENT_VARIATION( (uParam0^), I, uVar5, uVar7 );
    }
    return;
}

void sub_119248()
{
    if (l_U1528._fU508[1] == 0)
    {
        NETWORK_SET_FRIENDLY_FIRE_OPTION( 0 );
    }
    else if (l_U1528._fU508[1] == 1)
    {
        NETWORK_SET_FRIENDLY_FIRE_OPTION( 1 );
    }
    if (l_U1528._fU508[0] == 0)
    {
        DISABLE_PLAYER_LOCKON( sub_8714(), 1 );
    }
    else if (l_U1528._fU508[0] == 1)
    {
        DISABLE_PLAYER_LOCKON( sub_8714(), 0 );
    }
    sub_119402( l_U1528._fU508[3], 1065353216 );
    sub_119661( l_U1528._fU508[4], 1065353216 );
    if (l_U1528._fU508[5] == 0)
    {
        DISPLAY_PLAYER_NAMES( 0 );
    }
    else if (l_U1528._fU508[5] == 1)
    {
        DISPLAY_PLAYER_NAMES( 1 );
    }
    if (l_U1528._fU508[6] == 0)
    {
        NETWORK_SET_HEALTH_RETICULE_OPTION( 0 );
    }
    else if (l_U1528._fU508[6] == 1)
    {
        NETWORK_SET_HEALTH_RETICULE_OPTION( 1 );
    }
    sub_120043( l_U1528._fU508[7] );
    switch (l_U1528._fU508[2])
    {
        case 0:
        l_U2676 = 5;
        break;
        case 1:
        l_U2676 = 4;
        break;
        case 2:
        l_U2676 = 3;
        break;
    }
    sub_120291( l_U1528._fU508[2], 24 );
    sub_120291( l_U1528._fU508[3], 1 );
    sub_120291( l_U1528._fU508[4], 2 );
    sub_120291( l_U1528._fU508[5], 3 );
    sub_120291( l_U1528._fU508[6], 4 );
    sub_120291( l_U1528._fU508[7], 5 );
    sub_120291( l_U1528._fU508[8], 9 );
    sub_120291( l_U1528._fU508[9], 10 );
    sub_120291( l_U1528._fU508[10], 11 );
    sub_120487();
    return;
}

void sub_119402(int iParam0, unknown uParam1)
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

void sub_119661(int iParam0, unknown uParam1)
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
    if (sub_47112())
    {
        SET_REDUCE_PED_MODEL_BUDGET( 1 );
    }
    return;
}

void sub_120043(unknown uParam0)
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

void sub_120291(unknown uParam0, unknown uParam1)
{
    SET_BIT( ref l_U1467[uParam1], 0 );
    SET_BITS_IN_RANGE( ref l_U1467[uParam1], 1, 31, uParam0 );
    return;
}

void sub_120487()
{
    CLEAR_SCRIPT_ARRAY_FROM_SCRATCHPAD( 2 );
    SAVE_SCRIPT_ARRAY_IN_SCRATCHPAD( ref l_U1467, 61, 2, 2 );
    return;
}

void sub_120544(unknown uParam0)
{
    int I;
    char[16] cVar4;

    sub_120555( uParam0 );
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
    l_U1087[sub_91506( 16 )]._fU20 = 0;
    if (NOT NETWORK_IS_TVT())
    {
        l_U1087[sub_91506( 17 )]._fU20 = GET_PLAYER_ID();
    }
    StrCopy( ref cVar4, "LONG_DESCRP_", 16 );
    ConcatString(ref cVar4, sub_7396(), 16);
    if (l_U1278 == 1)
    {
        ConcatString(ref cVar4, "A", 16);
    }
    else if (l_U1278 == 2)
    {
        ConcatString(ref cVar4, "B", 16);
    }
    PRINT_NOW( ref cVar4, 1, 1 );
    if ((sub_49946()) || (NOT N_604003528()))
    {
        l_U1257[GET_PLAYER_ID()] = GET_PLAYER_RANK_LEVEL_DURING_MP( GET_PLAYER_ID() );
    }
    UNPAUSE_GAME();
    return;
}

void sub_120555(unknown uParam0)
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
                sub_120728( ref l_U1087[I]._fU0, ref cVar5, iVar4 );
                break;
                case 5:
                case 7:
                if ((uParam0^)[I] > 0)
                {
                    sub_120728( ref l_U1087[I]._fU0, "YES", iVar4 );
                }
                else
                {
                    sub_120728( ref l_U1087[I]._fU0, "NO", iVar4 );
                }
                break;
                case 6:
                case 9:
                case 10:
                if ((uParam0^)[I] > 0)
                {
                    sub_120728( ref l_U1087[I]._fU0, "ON", iVar4 );
                }
                else
                {
                    sub_120728( ref l_U1087[I]._fU0, "OFF", iVar4 );
                }
                break;
                case 11:
                StrCopy( ref cVar5, "CPGO_NUM_", 16 );
                ConcatString(ref cVar5, (uParam0^)[I], 16);
                sub_120728( ref l_U1087[I]._fU0, ref cVar5, iVar4 );
                break;
            }
            iVar4++;
        }
    }
    return;
}

void sub_120728(unknown uParam0, unknown uParam1, unknown uParam2)
{
    StrCopy( ref g_U18._fU676[uParam2], uParam0, 16 );
    StrCopy( ref g_U18._fU1080[uParam2], uParam1, 16 );
    sub_5036( "\n ~~~~ NetCellphone Adding info, ", uParam0 );
    sub_5036( " and ", uParam1 );
    return;
}

void sub_121987()
{
    if (sub_9236( l_U1528._fU1060[0] ))
    {
        if (l_U1528._fU596 == 0)
        {
            OPEN_SEQUENCE_TASK( ref l_U2524 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), -358.39490000, 1214.74100000, 17.59410000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), -354.20070000, 1318.83300000, 16.31230000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), -354.25990000, 1510.04900000, 18.37290000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), -293.91090000, 1577.76700000, 19.95220000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), -120.21750000, 1585.95400000, 29.44790000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), 60.26690000, 1675.53700000, 29.45000000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), 310.98920000, 1777.27400000, 18.32110000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), 498.69330000, 1778.71100000, 27.66290000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            CLOSE_SEQUENCE_TASK( l_U2524 );
            OPEN_SEQUENCE_TASK( ref l_U2525 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), 687.75930000, 1780.31000000, 31.99310000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), 813.59840000, 1899.46300000, 34.06410000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), 933.60920000, 1906.75700000, 23.47260000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), 964.39060000, 1814.20400000, 19.77650000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), 1122.86300000, 1668.67800000, 13.34100000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), 1239.23200000, 1521.50900000, 16.38570000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), 1270.49700000, 1452.00000000, 15.43720000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            CLOSE_SEQUENCE_TASK( l_U2525 );
            OPEN_SEQUENCE_TASK( ref l_U2516[0] );
            TASK_PERFORM_SEQUENCE( 0, l_U2524 );
            TASK_PERFORM_SEQUENCE( 0, l_U2525 );
            CLOSE_SEQUENCE_TASK( l_U2516[0] );
        }
        else if (l_U1528._fU596 == 1)
        {
            OPEN_SEQUENCE_TASK( ref l_U2524 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), 36.90930000, 1200.15600000, 15.10400000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), -222.11720000, 1169.97500000, 14.45370000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), -411.95100000, 1170.42900000, 13.57410000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), -626.99590000, 1170.35600000, 19.11840000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), -868.86610000, 1169.57500000, 17.64350000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), -912.19490000, 1074.07200000, 20.25730000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), -999.55820000, 980.01340000, 22.04120000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), -1134.11500000, 880.37060000, 19.43520000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            CLOSE_SEQUENCE_TASK( l_U2524 );
            OPEN_SEQUENCE_TASK( ref l_U2525 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), -1194.44900000, 739.62910000, 17.22990000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), -1308.93700000, 547.74590000, 12.13160000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), -1443.65100000, 521.71550000, 16.95270000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), -1587.72800000, 488.22290000, 25.07200000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), -1755.81900000, 222.74620000, 19.11620000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), -1874.59100000, 177.58610000, 12.66220000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), -1939.19200000, 90.62730000, 7.10340000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), -1992.49400000, 39.02310000, 7.10100000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            CLOSE_SEQUENCE_TASK( l_U2525 );
            OPEN_SEQUENCE_TASK( ref l_U2516[0] );
            TASK_PERFORM_SEQUENCE( 0, l_U2524 );
            TASK_PERFORM_SEQUENCE( 0, l_U2525 );
            CLOSE_SEQUENCE_TASK( l_U2516[0] );
        }
        else if (l_U1528._fU596 == 2)
        {
            OPEN_SEQUENCE_TASK( ref l_U2524 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), 88.43170000, 254.18780000, 17.30510000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), 371.28100000, 253.14140000, 45.11700000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), 690.66060000, 252.43800000, 41.70700000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), 877.02670000, 253.53700000, 41.17660000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), 1013.47000000, 226.56410000, 36.74230000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), 1095.07600000, 193.73110000, 31.25490000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), 1095.43700000, 59.63090000, 33.67960000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            CLOSE_SEQUENCE_TASK( l_U2524 );
            OPEN_SEQUENCE_TASK( ref l_U2525 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), 1113.96700000, -124.90820000, 33.58780000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), 1175.40100000, -144.02590000, 29.73570000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), 1206.57700000, -192.86440000, 25.51610000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), 1253.38400000, -222.44130000, 24.82630000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), 1351.90000000, -222.77390000, 21.28850000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), 1377.66400000, -284.82840000, 19.76700000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            TASK_CAR_DRIVE_TO_COORD( 0, sub_9261( l_U1528._fU1060[0] ), 1448.28500000, -298.75440000, 14.43750000, 12.00000000, 0, 0, 0, 4.00000000, 30 );
            CLOSE_SEQUENCE_TASK( l_U2525 );
            OPEN_SEQUENCE_TASK( ref l_U2516[0] );
            TASK_PERFORM_SEQUENCE( 0, l_U2524 );
            TASK_PERFORM_SEQUENCE( 0, l_U2525 );
            CLOSE_SEQUENCE_TASK( l_U2516[0] );
        };;;
    }
    if ((sub_9236( l_U1528._fU1060[1] )) AND (sub_9236( l_U1528._fU1060[0] )))
    {
        OPEN_SEQUENCE_TASK( ref l_U2516[1] );
        TASK_CAR_MISSION( 0, sub_9261( l_U1528._fU1060[1] ), sub_9261( l_U1528._fU1060[0] ), 12, 12.00000000, 2, 1, 15 );
        CLOSE_SEQUENCE_TASK( l_U2516[1] );
    }
    if (sub_9236( l_U1528._fU1060[2] ))
    {
        OPEN_SEQUENCE_TASK( ref l_U2516[2] );
        TASK_CAR_MISSION( 0, sub_9261( l_U1528._fU1060[2] ), sub_9261( l_U1528._fU1060[1] ), 12, 12.00000000, 2, 1, 15 );
        CLOSE_SEQUENCE_TASK( l_U2516[2] );
    }
    if (sub_9236( l_U1528._fU1060[1] ))
    {
        OPEN_SEQUENCE_TASK( ref l_U2520[0] );
        TASK_CAR_DRIVE_WANDER( 0, sub_9261( l_U1528._fU1060[1] ), 20.00000000, 3 );
        CLOSE_SEQUENCE_TASK( l_U2520[0] );
    }
    return;
}

int sub_125389(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        if (IS_VEH_DRIVEABLE( sub_9261( uParam0 ) ))
        {
            return 0;
        }
    }
    return 1;
}

void sub_125615()
{
    int I;
    int Result;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_14137( I ))
        {
            if (sub_9236( l_U1528._fU1056 ))
            {
                if (IS_CHAR_IN_CAR( sub_5218( I ), sub_9261( l_U1528._fU1056 ) ))
                {
                    if (NOT l_U2625[I])
                    {
                        l_U2625[I] = 1;
                    }
                    Result++;
                }
            }
        }
    }
    return Result;
}

void sub_126008()
{
    int I;
    int J;
    int iVar4;
    unknown[3] uVar5;

    array(ref uVar5, 3);
    switch (l_U3318)
    {
        case 0:
        if (l_U1528._fU748)
        {
            l_U3318 = 1;
        }
        break;
        case 1:
        if (NOT l_U1863[GET_PLAYER_ID()]._fU48)
        {
            if (IS_KEYBOARD_KEY_PRESSED( 36 ))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_5471(), 228.09530000, 1000.76400000, 15.18750000, 5.00000000, 5.00000000, 5.00000000, 0 )))
                {
                    SET_CHAR_COORDINATES( sub_5471(), 228.09530000, 1000.76400000, 15.18750000 );
                }
            }
            for ( I = 0; I < 16; I++ )
            {
                if (l_U1863[I]._fU48)
                {
                    if (I != GET_PLAYER_ID())
                    {
                        l_U1863[GET_PLAYER_ID()]._fU48 = 1;
                    }
                }
            }
            if (sub_9236( l_U1528._fU1060[1] ))
            {
                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_5471(), sub_9261( l_U1528._fU1060[1] ), 225.00000000, 225.00000000, 225.00000000, 0 ))
                {
                    if (NOT l_U1863[GET_PLAYER_ID()]._fU48)
                    {
                        l_U1863[GET_PLAYER_ID()]._fU48 = 1;
                    }
                    for ( I = 0; I < 3; I++ )
                    {
                        if ((sub_9236( l_U1528._fU1060[I] )) AND (sub_10858( l_U1528._fU1024[I] )))
                        {
                            GET_SCRIPT_TASK_STATUS( sub_10883( l_U1528._fU1024[I] ), 29, ref uVar5[I] );
                            if (NOT sub_9616())
                            {
                                if (uVar5[I] == 7)
                                {
                                    if (HAS_CONTROL_OF_NETWORK_ID( l_U1528._fU1024[I] ))
                                    {
                                        if (NOT (IS_CHAR_INJURED( sub_10883( l_U1528._fU1024[I] ) )))
                                        {
                                            TASK_PERFORM_SEQUENCE( sub_10883( l_U1528._fU1024[I] ), l_U2516[I] );
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        else if (NOT sub_9616())
        {
            for ( I = 0; I < 3; I++ )
            {
                if ((sub_9236( l_U1528._fU1060[I] )) AND (sub_10858( l_U1528._fU1024[I] )))
                {
                    GET_SCRIPT_TASK_STATUS( sub_10883( l_U1528._fU1024[I] ), 29, ref uVar5[I] );
                    if (uVar5[I] == 7)
                    {
                        if (HAS_CONTROL_OF_NETWORK_ID( l_U1528._fU1024[I] ))
                        {
                            if (NOT (IS_CHAR_INJURED( sub_10883( l_U1528._fU1024[I] ) )))
                            {
                                TASK_PERFORM_SEQUENCE( sub_10883( l_U1528._fU1024[I] ), l_U2516[I] );
                            }
                        }
                    }
                }
            }
        }
        sub_126894();;
        if (NOT l_U3319)
        {
            if (sub_9236( l_U1528._fU1060[1] ))
            {
                if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( sub_9261( l_U1528._fU1060[1] ), sub_5471() ))
                {
                    if (NOT l_U1863[GET_PLAYER_ID()]._fU116)
                    {
                        CLEAR_PRINTS();
                        PRINT_NOW( "COOP_BDB_NGT_14", 5000, 1 );
                        l_U3319 = 1;
                    }
                }
                if ((LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_5471(), sub_9261( l_U1528._fU1060[1] ), 75.00000000, 75.00000000, 75.00000000, 0 )) AND (IS_CAR_ON_SCREEN( sub_9261( l_U1528._fU1060[1] ) )))
                {
                    if (NOT l_U1863[GET_PLAYER_ID()]._fU116)
                    {
                        CLEAR_PRINTS();
                        PRINT_NOW( "COOP_BDB_NGT_14", 5000, 1 );
                        l_U3319 = 1;
                    }
                }
            }
        }
        if (sub_128152())
        {
            sub_128629();
            if (DOES_BLIP_EXIST( l_U2577[0] ))
            {
                REMOVE_BLIP( l_U2577[0] );
            }
            if (DOES_BLIP_EXIST( l_U2577[2] ))
            {
                REMOVE_BLIP( l_U2577[2] );
            }
            l_U3318 = 2;
        }
        break;
        case 2:
        if (l_U2642)
        {
            if (NOT l_U1863[GET_PLAYER_ID()]._fU116)
            {
                sub_127695();
            }
            if (sub_9236( l_U1528._fU1060[1] ))
            {
                GET_CAR_HEALTH( sub_9261( l_U1528._fU1060[1] ), ref l_U2667 );
                if (l_U2667 > 0)
                {
                    for ( I = 0; I < 3; I++ )
                    {
                        if (sub_9236( l_U1528._fU1060[I] ))
                        {
                            if (HAS_CONTROL_OF_NETWORK_ID( l_U1528._fU1060[I] ))
                            {
                                SET_NETWORK_ID_CAN_MIGRATE( l_U1528._fU1060[I], 1 );
                                LOCK_CAR_DOORS( sub_9261( l_U1528._fU1060[I] ), 1 );
                            }
                        }
                        if (sub_10858( l_U1528._fU1024[I] ))
                        {
                            SET_CHAR_RELATIONSHIP_GROUP( sub_10883( l_U1528._fU1024[I] ), 25 );
                            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( sub_10883( l_U1528._fU1024[I] ), 1 );
                            SET_CHAR_WILL_USE_COVER( sub_10883( l_U1528._fU1024[I] ), 1 );
                        }
                        if (sub_10858( l_U1528._fU1040[I] ))
                        {
                            SET_CHAR_RELATIONSHIP_GROUP( sub_10883( l_U1528._fU1040[I] ), 25 );
                            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( sub_10883( l_U1528._fU1040[I] ), 1 );
                            SET_CHAR_WILL_USE_COVER( sub_10883( l_U1528._fU1040[I] ), 1 );
                        }
                        if (sub_10858( l_U1528._fU1092 ))
                        {
                            SET_CHAR_RELATIONSHIP_GROUP( sub_10883( l_U1528._fU1092 ), 25 );
                            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( sub_10883( l_U1528._fU1092 ), 1 );
                            SET_CHAR_WILL_USE_COVER( sub_10883( l_U1528._fU1092 ), 1 );
                        }
                        if (sub_10858( l_U1528._fU1096 ))
                        {
                            SET_CHAR_RELATIONSHIP_GROUP( sub_10883( l_U1528._fU1096 ), 25 );
                            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( sub_10883( l_U1528._fU1096 ), 1 );
                            SET_CHAR_WILL_USE_COVER( sub_10883( l_U1528._fU1096 ), 1 );
                        }
                    }
                    if (NOT l_U1863[GET_PLAYER_ID()]._fU116)
                    {
                        PRINT_NOW( "COOP_BDB_NGT_02", 5000, 1 );
                    }
                    l_U3318 = 3;
                }
            }
        }
        else if (NOT l_U1863[GET_PLAYER_ID()]._fU116)
        {
            sub_126894();
        }
        sub_128629();
        if (sub_9236( l_U1528._fU1060[1] ))
        {
            GET_CAR_HEALTH( sub_9261( l_U1528._fU1060[1] ), ref l_U2675 );
            if (l_U2675 > 0)
            {
                if (l_U2675 < 2001)
                {
                    l_U2652 = 0;
                    l_U2642 = 1;
                }
                if (sub_133967( l_U1528._fU1024[1] ))
                {
                    l_U2652 = 0;
                    l_U2642 = 1;
                }
                if (sub_10858( l_U1528._fU1024[1] ))
                {
                    if (NOT (IS_CHAR_IN_CAR( sub_10883( l_U1528._fU1024[1] ), sub_9261( l_U1528._fU1060[1] ) )))
                    {
                        l_U2652 = 0;
                        l_U2642 = 1;
                    }
                }
                for ( J = 0; J < 16; J++ )
                {
                    if (sub_14137( J ))
                    {
                        if (IS_CHAR_IN_CAR( sub_5218( J ), sub_9261( l_U1528._fU1060[1] ) ))
                        {
                            l_U2652 = 0;
                            l_U2642 = 1;
                        }
                    }
                }
            }
        }
        break;
        case 3:
        if (sub_134209())
        {
            for ( I = 0; I < 3; I++ )
            {
                if (sub_9236( l_U1528._fU1060[I] ))
                {
                    if (DOES_BLIP_EXIST( l_U2577[I] ))
                    {
                        REMOVE_BLIP( l_U2577[I] );
                    }
                }
            }
            l_U3318 = 4;
        }
        else
        {
            for ( I = 0; I < 3; I++ )
            {
                if (sub_9236( l_U1528._fU1060[I] ))
                {
                    if (HAS_CONTROL_OF_NETWORK_ID( l_U1528._fU1060[I] ))
                    {
                        SET_NETWORK_ID_CAN_MIGRATE( l_U1528._fU1060[I], 1 );
                        LOCK_CAR_DOORS( sub_9261( l_U1528._fU1060[I] ), 1 );
                    }
                }
            }
            if (sub_9236( l_U1528._fU1060[1] ))
            {
                if (sub_134596( sub_9261( l_U1528._fU1060[1] ), 100.00000000, 100.00000000, 50.00000000, 0 ))
                {
                    if (sub_10858( l_U1528._fU1024[1] ))
                    {
                        sub_134736( l_U1528._fU1024[1] );
                    }
                    if (sub_10858( l_U1528._fU1040[1] ))
                    {
                        sub_134736( l_U1528._fU1040[1] );
                    }
                    if (sub_10858( l_U1528._fU1092 ))
                    {
                        sub_134736( l_U1528._fU1092 );
                    }
                    if (sub_10858( l_U1528._fU1096 ))
                    {
                        sub_134736( l_U1528._fU1096 );
                    }
                }
                else
                {
                    for ( I = 0; I < 3; I++ )
                    {
                        if (sub_9236( l_U1528._fU1060[I] ))
                        {
                            if (HAS_CONTROL_OF_NETWORK_ID( l_U1528._fU1060[I] ))
                            {
                                SET_NETWORK_ID_CAN_MIGRATE( l_U1528._fU1060[I], 1 );
                                LOCK_CAR_DOORS( sub_9261( l_U1528._fU1060[I] ), 1 );
                            }
                        }
                    }
                    if (NOT l_U1863[GET_PLAYER_ID()]._fU32)
                    {
                        sub_135260();
                    }
                    if (l_U2652)
                    {
                        if (sub_9236( l_U1528._fU1060[1] ))
                        {
                            if (HAS_CONTROL_OF_NETWORK_ID( l_U1528._fU1060[1] ))
                            {
                                SET_CAR_HEALTH( sub_9261( l_U1528._fU1060[1] ), 2750 );
                            }
                        }
                        l_U3318 = 2;
                        l_U2642 = 0;
                    }
                }
            }
        }
        if (NOT l_U1863[GET_PLAYER_ID()]._fU116)
        {
            sub_127695();
        }
        break;
        case 4:
        if (NOT l_U1863[GET_PLAYER_ID()]._fU116)
        {
            sub_88640( "MPKP2_ARR3", ref l_U2504, 6, 1 );
        }
        l_U3318 = 5;
        break;
        case 5:
        STORE_WANTED_LEVEL( sub_8714(), ref iVar4 );
        ADD_BLIP_FOR_COORD( -705.70340000, 343.41520000, 4.63430000, ref l_U2581 );
        CHANGE_BLIP_SPRITE( l_U2581, 4 );
        CHANGE_BLIP_SCALE( l_U2581, 0.78000000 );
        CHANGE_BLIP_PRIORITY( l_U2581, 1 );
        CHANGE_BLIP_COLOUR( l_U2581, 5 );
        SET_ROUTE( l_U2581, 1 );
        SET_WANTED_MULTIPLIER( 1.50000000 );
        if (NOT l_U1863[GET_PLAYER_ID()]._fU116)
        {
            if (sub_9236( l_U1528._fU1060[1] ))
            {
                if (IS_CHAR_IN_CAR( sub_5471(), sub_9261( l_U1528._fU1060[1] ) ))
                {
                    if (iVar4 < 3)
                    {
                        ALTER_WANTED_LEVEL( sub_8714(), 3 );
                        APPLY_WANTED_LEVEL_CHANGE_NOW( sub_8714() );
                    }
                }
            }
        }
        l_U1863[GET_PLAYER_ID()]._fU44 = 1;
        l_U3318 = 6;
        break;
        case 6:
        if (sub_137539( ref l_U2504 ))
        {
            if (sub_9236( l_U1528._fU1060[1] ))
            {
                if (sub_14137( GET_PLAYER_ID() ))
                {
                    if (IS_CHAR_IN_CAR( sub_5471(), sub_9261( l_U1528._fU1060[1] ) ))
                    {
                        if (NOT l_U1863[GET_PLAYER_ID()]._fU116)
                        {
                            CLEAR_PRINTS();
                            PRINT_NOW( "COOP_BDB_NGT_03", 5000, 1 );
                        }
                        l_U3318 = 7;
                    }
                    else if (NOT l_U1863[GET_PLAYER_ID()]._fU116)
                    {
                        CLEAR_PRINTS();
                        PRINT_NOW( "COOP_BDB_NGT_04", 5000, 1 );
                    }
                    l_U3318 = 7;;
                }
            }
        }
        break;
        case 7:
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_5471(), -615.50830000, 333.80750000, 3.66190000, 5.00000000, 5.00000000, 5.00000000, 0 )))
        {
            if (IS_KEYBOARD_KEY_PRESSED( 36 ))
            {
                SET_CHAR_COORDINATES( sub_5471(), -615.50830000, 333.80750000, 3.66190000 );
            }
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_5471(), -705.70340000, 343.41520000, 3.63430000, 50.00000000, 50.00000000, 50.00000000, 0 ))
        {
            if (NOT l_U1863[GET_PLAYER_ID()]._fU116)
            {
                STORE_WANTED_LEVEL( sub_8714(), ref iVar4 );
                if (iVar4 > 0)
                {
                    ALTER_WANTED_LEVEL( sub_8714(), 0 );
                    APPLY_WANTED_LEVEL_CHANGE_NOW( sub_8714() );
                }
            }
        }
        if (l_U1528._fU772)
        {
            if (sub_9236( l_U1528._fU1060[1] ))
            {
                if (LOCATE_CAR_3D( sub_9261( l_U1528._fU1060[1] ), -705.70340000, 343.41520000, 4.63430000, 8.00000000, 8.00000000, 8.00000000, 0 ))
                {
                    if (NOT l_U1863[GET_PLAYER_ID()]._fU116)
                    {
                        if (IS_MESSAGE_BEING_DISPLAYED())
                        {
                            CLEAR_PRINTS();
                        }
                        SET_PLAYER_CONTROL_FOR_NETWORK( sub_8714(), 0, 1 );
                        BEGIN_CAM_COMMANDS( ref l_U2658 );
                    }
                    l_U3318 = 9;
                }
            }
        }
        else if (NOT l_U1863[GET_PLAYER_ID()]._fU116)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_5471(), -705.70340000, 343.41520000, 4.63430000, 8.00000000, 8.00000000, 8.00000000, 0 ))
            {
                if (NOT l_U2651)
                {
                    CLEAR_PRINTS();
                    PRINT_NOW( "COOP_BDB_NGT_16", 5000, 1 );
                    l_U2651 = 1;
                }
            }
            else if (l_U2651)
            {
                CLEAR_PRINTS();
                PRINT_NOW( "COOP_BDB_NGT_06", 5000, 1 );
                l_U2651 = 0;
            }
            LOCATE_CHAR_ANY_MEANS_3D( sub_5471(), -705.70340000, 343.41520000, 13.38430000, 8.00000000, 8.00000000, 8.00000000, 1 );;
        }
        sub_138436();
        break;
        case 9:
        if (IS_SCREEN_FADED_OUT())
        {
            if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1528._fU1060[1] ))
            {
                if (HAS_CONTROL_OF_NETWORK_ID( l_U1528._fU1060[1] ))
                {
                    SET_CAR_COORDINATES( sub_9261( l_U1528._fU1060[1] ), -705.70340000, 343.41520000, 4.63430000 );
                    SET_CAR_HEADING( sub_9261( l_U1528._fU1060[1] ), 90.00000000 );
                }
            }
            CLEAR_HELP();
            l_U3318 = 10;
        }
        else if (NOT IS_SCREEN_FADING_OUT())
        {
            sub_48383( 500 );
        }
        break;
        case 10:
        if (NOT l_U1863[GET_PLAYER_ID()]._fU116)
        {
            if (l_U3314)
            {
                SET_CAM_BEHIND_PED( sub_5471() );
                l_U1863[GET_PLAYER_ID()]._fU32 = 1;
                l_U3318 = 11;
            }
            else
            {
                sub_139396();
            }
        }
        else if (sub_5520())
        {
            if (sub_143232())
            {
                if (sub_20011( -1660661558 ))
                {
                    if ((l_U1528._fU1056 == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
                    {
                        l_U1528._fU1056 = sub_23957( sub_6908( -1660661558, -708.95860000, 357.00490000, 3.98910000, 270.00000000 ) );
                        CHANGE_CAR_COLOUR( sub_9261( l_U1528._fU1056 ), 104, 104 );
                        LOCK_CAR_DOORS( sub_9261( l_U1528._fU1056 ), 1 );
                        l_U1528._fU752 = 1;
                    }
                }
            }
            sub_5584();
        }
        if (sub_143485())
        {
            l_U1863[GET_PLAYER_ID()]._fU32 = 1;
            l_U3318 = 11;
        }
        break;
        case 11:
        if (IS_SCREEN_FADED_IN())
        {
            if (sub_5520())
            {
                if (l_U1528._fU772)
                {
                    l_U1528._fU772 = 0;
                }
                sub_5584();
            }
            if (DOES_BLIP_EXIST( l_U2581 ))
            {
                if (NOT (DOES_BLIP_EXIST( l_U2573 )))
                {
                    ADD_BLIP_FOR_COORD( 707.82250000, -265.34770000, 9.87860000, ref l_U2573 );
                    CHANGE_BLIP_SPRITE( l_U2573, 4 );
                    CHANGE_BLIP_SCALE( l_U2573, 0.78000000 );
                    CHANGE_BLIP_PRIORITY( l_U2573, 1 );
                    CHANGE_BLIP_COLOUR( l_U2573, 5 );
                    SET_ROUTE( l_U2581, 0 );
                    SET_ROUTE( l_U2573, 1 );
                }
                CLEAR_PRINTS();
                PRINT_NOW( "COOP_BDB_NGT_08", 5000, 1 );
                REMOVE_BLIP( l_U2581 );
            }
            else if (NOT l_U1863[GET_PLAYER_ID()]._fU116)
            {
                if (NOT (DOES_BLIP_EXIST( l_U2573 )))
                {
                    ADD_BLIP_FOR_COORD( 707.82250000, -265.34770000, 9.87860000, ref l_U2573 );
                    CHANGE_BLIP_SPRITE( l_U2573, 4 );
                    CHANGE_BLIP_SCALE( l_U2573, 0.78000000 );
                    CHANGE_BLIP_PRIORITY( l_U2573, 1 );
                    CHANGE_BLIP_COLOUR( l_U2573, 5 );
                    SET_ROUTE( l_U2581, 0 );
                    SET_ROUTE( l_U2573, 1 );
                    CLEAR_PRINTS();
                    PRINT_NOW( "COOP_BDB_NGT_08", 5000, 1 );
                }
            }
            l_U3318 = 12;;
        }
        else if (NOT IS_SCREEN_FADING_IN())
        {
            SET_CAM_BEHIND_PED( sub_5471() );
            sub_47971( 500 );
        }
        break;
        case 12:
        if (NOT l_U1863[GET_PLAYER_ID()]._fU36)
        {
            if ((sub_144099()) || (sub_144195( 707.82250000, -265.34770000, 9.87860000, 100.00000000, 0 )))
            {
                l_U1863[GET_PLAYER_ID()]._fU36 = 1;
                l_U1528._fU1060[1] = nil;
                MARK_MODEL_AS_NO_LONGER_NEEDED( 1747439474 );
            }
        }
        break;
    }
    return;
}

void sub_126894()
{
    if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1528._fU1024[1] ))
    {
        l_U2512 = sub_10883( l_U1528._fU1024[1] );
        if (NOT (IS_CHAR_INJURED( sub_10883( l_U1528._fU1024[1] ) )))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_10883( l_U1528._fU1024[1] ) ))
            {
                sub_127012( ref l_U2512 );
            }
            else
            {
                sub_127695();
            }
        }
        else
        {
            sub_127695();
        }
    }
    else
    {
        sub_127695();
    }
    return;
}

void sub_127012(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U1464)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((l_U1462) AND (IS_HINT_RUNNING()))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U1463 + 500))
        {
            l_U1462 = 0;
        }
    }
    if (((((IS_CONTROL_PRESSED( 0, 51 )) AND (IS_CHAR_IN_ANY_CAR( sub_5471() ))) AND (NOT (IS_CHAR_DEAD( (uParam0^) )))) AND (NOT sub_127180())) AND (iVar3 != 4))
    {
        if ((NOT IS_HINT_RUNNING()) AND (IS_CHAR_IN_ANY_CAR( (uParam0^) )))
        {
            if (l_U1464)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U1463 );
            l_U1462 = 1;
            l_U1461 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U1461) AND (NOT l_U1462))
        {
            if (l_U1464)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U1461 = 1;
        }
    }
    else if (l_U1461)
    {
        if (l_U1464)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U1461 = 0;
    };;;
    return;
}

int sub_127180()
{
    if (g_U482 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_127695()
{
    if (l_U1464)
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
    l_U1462 = 0;
    l_U1461 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

int sub_128152()
{
    int I;
    unknown uVar3;

    for ( I = 0; I < 3; I++ )
    {
        if ((sub_9236( l_U1528._fU1060[I] )) AND (sub_10858( l_U1528._fU1024[I] )))
        {
            if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( sub_9261( l_U1528._fU1060[I] ), sub_5471() ))
            {
                l_U1863[GET_PLAYER_ID()]._fU52 = 1;
                return 1;
            }
            if (IS_CHAR_IN_ANY_CAR( sub_5471() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5471(), ref uVar3 );
                if (HAS_CAR_BEEN_DAMAGED_BY_CAR( sub_9261( l_U1528._fU1060[I] ), uVar3 ))
                {
                    l_U1863[GET_PLAYER_ID()]._fU52 = 1;
                    return 1;
                }
            }
            if (IS_CHAR_IN_ANY_CAR( sub_5471() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5471(), ref uVar3 );
                if (IS_CAR_TOUCHING_CAR( uVar3, sub_9261( l_U1528._fU1060[I] ) ))
                {
                    l_U1863[GET_PLAYER_ID()]._fU52 = 1;
                    return 1;
                }
            }
            if (IS_CHAR_TOUCHING_VEHICLE( sub_5471(), sub_9261( l_U1528._fU1060[I] ) ))
            {
                l_U1863[GET_PLAYER_ID()]._fU52 = 1;
                return 1;
            }
        }
    }
    for ( I = 0; I < 16; I++ )
    {
        if (sub_14137( I ))
        {
            if (l_U1863[I]._fU52)
            {
                if (I != GET_PLAYER_ID())
                {
                    l_U1863[GET_PLAYER_ID()]._fU52 = 1;
                }
                return 1;
            }
        }
    }
    return 0;
}

void sub_128629()
{
    int I;

    for ( I = 0; I <= (l_U1528._fU1060 - 1); I++ )
    {
        if (I == 1)
        {
            if ((sub_9236( l_U1528._fU1060[1] )) AND (sub_10858( l_U1528._fU1024[1] )))
            {
                sub_128709();
                sub_129160();
            }
            else
            {
                sub_129632();
            }
        }
        else if ((sub_10858( l_U1528._fU1024[I] )) AND (sub_9236( l_U1528._fU1060[I] )))
        {
            sub_130075();
            sub_131777();
        }
        else
        {
            sub_132608();
        }
    }
    return;
}

void sub_128709()
{
    int iVar2;

    if (l_U2648)
    {
        if (sub_10858( l_U1528._fU1024[1] ))
        {
            if (HAS_CONTROL_OF_NETWORK_ID( l_U1528._fU1024[1] ))
            {
                GET_SCRIPT_TASK_STATUS( sub_14621( l_U1528._fU1024[1], "Bc.net_ConvoyDriver", 1 ), 29, ref iVar2 );
                if (iVar2 == 7)
                {
                    if (NOT (IS_CHAR_INJURED( sub_14621( l_U1528._fU1024[1], "Bc.net_ConvoyDriver", 1 ) )))
                    {
                        TASK_PERFORM_SEQUENCE( sub_14621( l_U1528._fU1024[1], "Bc.net_ConvoyDriver", 1 ), l_U2520[0] );
                    }
                }
            }
        }
    }
    else if (sub_10858( l_U1528._fU1024[1] ))
    {
        if (HAS_CONTROL_OF_NETWORK_ID( l_U1528._fU1024[1] ))
        {
            if (NOT (IS_CHAR_INJURED( sub_14621( l_U1528._fU1024[1], "Bc.net_ConvoyDriver", 1 ) )))
            {
                CLEAR_CHAR_TASKS( sub_14621( l_U1528._fU1024[1], "Bc.net_ConvoyDriver", 1 ) );
                TASK_PERFORM_SEQUENCE( sub_14621( l_U1528._fU1024[1], "Bc.net_ConvoyDriver", 1 ), l_U2520[0] );
                l_U2648 = 1;
            }
        }
    }
    return;
}

void sub_129160()
{
    int I;
    unknown uVar3;
    int iVar4;

    for ( I = 0; I <= 2; I++ )
    {
        switch (I)
        {
            case 0:
            uVar3 = l_U1528._fU1040[1];
            break;
            case 1:
            uVar3 = l_U1528._fU1092;
            break;
            case 2:
            uVar3 = l_U1528._fU1096;
            break;
        }
        if (sub_10858( uVar3 ))
        {
            if (HAS_CONTROL_OF_NETWORK_ID( uVar3 ))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_10883( uVar3 ) ))
                {
                    GET_SCRIPT_TASK_STATUS( sub_10883( uVar3 ), 91, ref iVar4 );
                    if (iVar4 == 7)
                    {
                        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( sub_10883( uVar3 ), 0 );
                        SET_CHAR_WILL_USE_COVER( sub_10883( uVar3 ), 0 );
                        SET_CHAR_WILL_DO_DRIVEBYS( sub_10883( uVar3 ), 1 );
                        SET_CHAR_RELATIONSHIP_GROUP( sub_10883( uVar3 ), 25 );
                        SET_COMBAT_DECISION_MAKER( sub_10883( uVar3 ), l_U2550 );
                        SET_SENSE_RANGE( sub_10883( uVar3 ), 65.00000000 );
                        if ((sub_39510( sub_10883( uVar3 ) )) != nil)
                        {
                            TASK_COMBAT( sub_10883( uVar3 ), sub_39510( sub_10883( uVar3 ) ) );
                        }
                        else
                        {
                            REGISTER_HATED_TARGETS_AROUND_PED( sub_10883( uVar3 ), 50.00000000 );
                        }
                    }
                }
                else
                {
                    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( sub_10883( uVar3 ), 0 );
                    SET_CHAR_WILL_USE_COVER( sub_10883( uVar3 ), 0 );
                    SET_CHAR_WILL_DO_DRIVEBYS( sub_10883( uVar3 ), 1 );
                    SET_CHAR_RELATIONSHIP_GROUP( sub_10883( uVar3 ), 25 );
                    SET_COMBAT_DECISION_MAKER( sub_10883( uVar3 ), l_U2551 );
                    SET_SENSE_RANGE( sub_10883( uVar3 ), 65.00000000 );
                }
            }
        }
    }
    return;
}

void sub_129632()
{
    int I;
    int iVar3;
    unknown uVar4;

    for ( I = 0; I <= 3; I++ )
    {
        switch (I)
        {
            case 0:
            uVar4 = l_U1528._fU1024[1];
            break;
            case 1:
            uVar4 = l_U1528._fU1040[1];
            break;
            case 2:
            uVar4 = l_U1528._fU1092;
            break;
            case 3:
            uVar4 = l_U1528._fU1096;
            break;
        }
        if (NOT l_U3292[I])
        {
            if (sub_10858( uVar4 ))
            {
                if (HAS_CONTROL_OF_NETWORK_ID( uVar4 ))
                {
                    SET_COMBAT_DECISION_MAKER( sub_10883( uVar4 ), l_U2551 );
                    SET_SENSE_RANGE( sub_10883( uVar4 ), 65.00000000 );
                    SET_CHAR_RELATIONSHIP_GROUP( sub_10883( uVar4 ), 25 );
                    l_U3292[I] = 1;
                }
            }
        }
        if (sub_10858( uVar4 ))
        {
            if (HAS_CONTROL_OF_NETWORK_ID( uVar4 ))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_10883( uVar4 ) ))
                {
                    TASK_LEAVE_ANY_CAR( sub_10883( uVar4 ) );
                }
                GET_SCRIPT_TASK_STATUS( sub_10883( uVar4 ), 117, ref iVar3 );
                SET_CHAR_WILL_USE_CARS_IN_COMBAT( sub_10883( uVar4 ), 1 );
                SET_CHAR_WILL_USE_COVER( sub_10883( uVar4 ), 1 );
                if (iVar3 == 7)
                {
                    TASK_GUARD_CURRENT_POSITION( sub_10883( uVar4 ), 20.00000000, 20.00000000, 1 );
                }
            }
        }
    }
    return;
}

void sub_130075()
{
    int I;
    int iVar3;

    for ( I = 0; I <= 2; I += 2 )
    {
        if ((sub_10858( l_U1528._fU1024[I] )) AND (sub_9236( l_U1528._fU1060[I] )))
        {
            if (HAS_CONTROL_OF_NETWORK_ID( l_U1528._fU1024[I] ))
            {
                if (sub_10858( l_U1528._fU1040[I] ))
                {
                    if (IS_CHAR_IN_CAR( sub_10883( l_U1528._fU1024[I] ), sub_9261( l_U1528._fU1060[I] ) ))
                    {
                        if ((sub_130252( sub_10883( l_U1528._fU1024[I] ) )) != nil)
                        {
                            TASK_CAR_MISSION( sub_10883( l_U1528._fU1024[I] ), sub_9261( l_U1528._fU1060[I] ), sub_130252( sub_10883( l_U1528._fU1024[I] ) ), 2, 30.00000000, 2, 0, 0 );
                        }
                        else if (sub_9236( l_U1528._fU1060[1] ))
                        {
                            if (I == 0)
                            {
                                TASK_CAR_MISSION( sub_10883( l_U1528._fU1024[I] ), sub_9261( l_U1528._fU1060[I] ), sub_9261( l_U1528._fU1060[1] ), 7, 30.00000000, 2, 0, 0 );
                            }
                            else if (sub_9236( l_U1528._fU1060[0] ))
                            {
                                TASK_CAR_MISSION( sub_10883( l_U1528._fU1024[I] ), sub_9261( l_U1528._fU1060[I] ), sub_9261( l_U1528._fU1060[0] ), 7, 30.00000000, 2, 0, 0 );
                            }
                            else
                            {
                                TASK_CAR_MISSION( sub_10883( l_U1528._fU1024[I] ), sub_9261( l_U1528._fU1060[I] ), sub_9261( l_U1528._fU1060[1] ), 7, 30.00000000, 2, 0, 0 );
                            }
                        }
                    }
                    else if (NOT l_U3297[I])
                    {
                        SET_CHAR_RELATIONSHIP_GROUP( sub_10883( l_U1528._fU1024[I] ), 25 );
                        SET_CHAR_DECISION_MAKER( sub_10883( l_U1528._fU1024[I] ), l_U2549 );
                        SET_COMBAT_DECISION_MAKER( sub_10883( l_U1528._fU1024[I] ), l_U2551 );
                        SET_SENSE_RANGE( sub_10883( l_U1528._fU1024[I] ), 60.00000000 );
                        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( sub_10883( l_U1528._fU1024[I] ), 1 );
                        SET_CHAR_WILL_USE_COVER( sub_10883( l_U1528._fU1024[I] ), 1 );
                        SET_CHAR_WILL_USE_CARS_IN_COMBAT( sub_10883( l_U1528._fU1024[I] ), 1 );
                        SET_CHAR_WILL_DO_DRIVEBYS( sub_10883( l_U1528._fU1024[I] ), 1 );
                        l_U3297[I] = 1;
                    }
                    GET_SCRIPT_TASK_STATUS( sub_10883( l_U1528._fU1024[I] ), 91, ref iVar3 );
                    if (iVar3 == 7)
                    {
                        if ((sub_39510( sub_10883( l_U1528._fU1024[I] ) )) != nil)
                        {
                            TASK_COMBAT( sub_10883( l_U1528._fU1024[I] ), sub_39510( sub_10883( l_U1528._fU1024[I] ) ) );
                        }
                        else
                        {
                            REGISTER_HATED_TARGETS_AROUND_PED( sub_10883( l_U1528._fU1024[I] ), 50.00000000 );
                        }
                    }
                }
                else if (NOT l_U3297[I])
                {
                    SET_CHAR_RELATIONSHIP_GROUP( sub_10883( l_U1528._fU1024[I] ), 25 );
                    SET_CHAR_DECISION_MAKER( sub_10883( l_U1528._fU1024[I] ), l_U2549 );
                    SET_COMBAT_DECISION_MAKER( sub_10883( l_U1528._fU1024[I] ), l_U2550 );
                    SET_SENSE_RANGE( sub_10883( l_U1528._fU1024[I] ), 60.00000000 );
                    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( sub_10883( l_U1528._fU1024[I] ), 1 );
                    SET_CHAR_WILL_USE_COVER( sub_10883( l_U1528._fU1024[I] ), 1 );
                    SET_CHAR_WILL_USE_CARS_IN_COMBAT( sub_10883( l_U1528._fU1024[I] ), 1 );
                    SET_CHAR_WILL_DO_DRIVEBYS( sub_10883( l_U1528._fU1024[I] ), 1 );
                    l_U3297[I] = 1;
                }
                GET_SCRIPT_TASK_STATUS( sub_10883( l_U1528._fU1024[I] ), 91, ref iVar3 );
                if (iVar3 == 7)
                {
                    if ((sub_39510( sub_10883( l_U1528._fU1024[I] ) )) != nil)
                    {
                        TASK_COMBAT( sub_10883( l_U1528._fU1024[I] ), sub_39510( sub_10883( l_U1528._fU1024[I] ) ) );
                    }
                    else
                    {
                        REGISTER_HATED_TARGETS_AROUND_PED( sub_10883( l_U1528._fU1024[I] ), 50.00000000 );
                    }
                }
            }
        }
    }
    return;
}

void sub_130252(unknown uParam0)
{
    int I;
    unknown uVar4;
    unknown Result;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown[16] uVar9;
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
    float fVar58;
    float fVar59;

    array(ref uVar9, 16);
    fVar59 = 2.147484E8;
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        for ( I = 0; I < 16; I++ )
        {
            if (sub_14137( I ))
            {
                if (sub_130340( sub_5218( I ) ))
                {
                    GET_CHAR_COORDINATES( sub_5218( I ), ref uVar9[I]._fU0, ref uVar9[I]._fU4, ref uVar9[I]._fU8 );
                    GET_DISTANCE_BETWEEN_COORDS_3D( uVar6._fU0, uVar6._fU4, uVar6._fU8, uVar9[I]._fU0, uVar9[I]._fU4, uVar9[I]._fU8, ref fVar58 );
                    if (fVar58 < fVar59)
                    {
                        fVar59 = fVar58;
                        uVar4 = sub_5218( I );
                    }
                }
            }
        }
    }
    if (fVar59 < 2.147484E8)
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( uVar4, ref Result );
        return Result;
    }
    return nil;
}

int sub_130340(unknown uParam0)
{
    if (((((IS_CHAR_IN_ANY_BOAT( uParam0 )) || (IS_CHAR_IN_ANY_CAR( uParam0 ))) || (IS_CHAR_IN_ANY_HELI( uParam0 ))) || (IS_CHAR_IN_ANY_PLANE( uParam0 ))) || (IS_CHAR_IN_ANY_TRAIN( uParam0 )))
    {
        return 1;
    }
    return 0;
}

void sub_131777()
{
    int I;
    int iVar3;

    for ( I = 0; I <= 2; I += 2 )
    {
        if ((sub_10858( l_U1528._fU1040[I] )) AND (sub_9236( l_U1528._fU1060[I] )))
        {
            if (HAS_CONTROL_OF_NETWORK_ID( l_U1528._fU1040[I] ))
            {
                if (IS_CHAR_IN_CAR( sub_10883( l_U1528._fU1040[I] ), sub_9261( l_U1528._fU1060[I] ) ))
                {
                    GET_SCRIPT_TASK_STATUS( sub_10883( l_U1528._fU1040[I] ), 91, ref iVar3 );
                    if (iVar3 == 7)
                    {
                        SET_CHAR_RELATIONSHIP_GROUP( sub_10883( l_U1528._fU1040[I] ), 25 );
                        SET_CHAR_DECISION_MAKER( sub_10883( l_U1528._fU1040[I] ), l_U2549 );
                        SET_COMBAT_DECISION_MAKER( sub_10883( l_U1528._fU1040[I] ), l_U2550 );
                        SET_SENSE_RANGE( sub_10883( l_U1528._fU1040[I] ), 60.00000000 );
                        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( sub_10883( l_U1528._fU1040[I] ), 0 );
                        SET_CHAR_WILL_USE_COVER( sub_10883( l_U1528._fU1040[I] ), 0 );
                        SET_CHAR_WILL_DO_DRIVEBYS( sub_10883( l_U1528._fU1040[I] ), 1 );
                        if ((sub_39510( sub_10883( l_U1528._fU1040[I] ) )) != nil)
                        {
                            TASK_COMBAT( sub_10883( l_U1528._fU1040[I] ), sub_39510( sub_10883( l_U1528._fU1040[I] ) ) );
                        }
                        else
                        {
                            REGISTER_HATED_TARGETS_AROUND_PED( sub_10883( l_U1528._fU1040[I] ), 50.00000000 );
                        }
                    }
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( sub_10883( l_U1528._fU1040[I] ), 91, ref iVar3 );
                    if (iVar3 == 7)
                    {
                        SET_CHAR_RELATIONSHIP_GROUP( sub_10883( l_U1528._fU1040[I] ), 25 );
                        SET_CHAR_DECISION_MAKER( sub_10883( l_U1528._fU1040[I] ), l_U2549 );
                        SET_COMBAT_DECISION_MAKER( sub_10883( l_U1528._fU1040[I] ), l_U2550 );
                        SET_SENSE_RANGE( sub_10883( l_U1528._fU1040[I] ), 60.00000000 );
                        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( sub_10883( l_U1528._fU1040[I] ), 1 );
                        SET_CHAR_WILL_USE_COVER( sub_10883( l_U1528._fU1040[I] ), 1 );
                        if ((sub_39510( sub_10883( l_U1528._fU1040[I] ) )) != nil)
                        {
                            TASK_COMBAT( sub_10883( l_U1528._fU1040[I] ), sub_39510( sub_10883( l_U1528._fU1040[I] ) ) );
                        }
                        else
                        {
                            REGISTER_HATED_TARGETS_AROUND_PED( sub_10883( l_U1528._fU1040[I] ), 50.00000000 );
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_132608()
{
    int I;
    int iVar3;
    unknown uVar4;

    for ( I = 0; I <= 3; I++ )
    {
        switch (I)
        {
            case 0:
            uVar4 = l_U1528._fU1024[0];
            break;
            case 1:
            uVar4 = l_U1528._fU1024[2];
            break;
            case 2:
            uVar4 = l_U1528._fU1040[0];
            break;
            case 3:
            uVar4 = l_U1528._fU1040[2];
            break;
        }
        if (I < 2)
        {
            if (NOT l_U3301[I])
            {
                if (sub_10858( uVar4 ))
                {
                    if (HAS_CONTROL_OF_NETWORK_ID( uVar4 ))
                    {
                        SET_COMBAT_DECISION_MAKER( sub_10883( uVar4 ), l_U2551 );
                        SET_SENSE_RANGE( sub_10883( uVar4 ), 65.00000000 );
                        SET_CHAR_RELATIONSHIP_GROUP( sub_10883( uVar4 ), 25 );
                        l_U3301[I] = 1;
                    }
                }
            }
        }
        if (sub_10858( uVar4 ))
        {
            if (HAS_CONTROL_OF_NETWORK_ID( uVar4 ))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_10883( uVar4 ) ))
                {
                    TASK_LEAVE_ANY_CAR( sub_10883( uVar4 ) );
                }
                GET_SCRIPT_TASK_STATUS( sub_10883( uVar4 ), 117, ref iVar3 );
                if (iVar3 == 7)
                {
                    SET_COMBAT_DECISION_MAKER( sub_10883( uVar4 ), l_U2551 );
                    SET_SENSE_RANGE( sub_10883( uVar4 ), 65.00000000 );
                    SET_CHAR_WILL_USE_CARS_IN_COMBAT( sub_10883( uVar4 ), 1 );
                    SET_CHAR_WILL_USE_COVER( sub_10883( uVar4 ), 1 );
                    SET_CHAR_RELATIONSHIP_GROUP( sub_10883( uVar4 ), 25 );
                    TASK_GUARD_CURRENT_POSITION( sub_10883( uVar4 ), 20.00000000, 20.00000000, 1 );
                }
            }
        }
    }
    return;
}

int sub_133967(unknown uParam0)
{
    if (DOES_PED_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        if (NOT (IS_CHAR_DEAD( sub_10883( uParam0 ) )))
        {
            return 0;
        }
    }
    return 1;
}

int sub_134209()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_14137( I ))
        {
            if (sub_9236( l_U1528._fU1060[1] ))
            {
                if (IS_CHAR_IN_CAR( sub_5218( I ), sub_9261( l_U1528._fU1060[1] ) ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_134596(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_14137( I ))
        {
            if (NOT (IS_CAR_DEAD( uParam0 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_5218( I ), uParam0, uParam1, uParam2, uParam3, uParam4 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_134736(unknown uParam0)
{
    int iVar3;

    if (sub_10858( uParam0 ))
    {
        if (HAS_CONTROL_OF_NETWORK_ID( uParam0 ))
        {
            if (NOT (IS_CHAR_INJURED( sub_14621( uParam0, "NetID", -1 ) )))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_14621( uParam0, "NetID", -1 ) ))
                {
                    GET_SCRIPT_TASK_STATUS( sub_14621( uParam0, "NetID", -1 ), 31, ref iVar3 );
                    if (iVar3 == 7)
                    {
                        TASK_LEAVE_ANY_CAR( sub_14621( uParam0, "NetID", -1 ) );
                    }
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( sub_14621( uParam0, "NetID", -1 ), 91, ref iVar3 );
                    if (iVar3 == 7)
                    {
                        SET_COMBAT_DECISION_MAKER( sub_14621( uParam0, "NetID", -1 ), l_U2551 );
                        TASK_COMBAT( sub_14621( uParam0, "NetID", -1 ), sub_39510( sub_14621( uParam0, "NetID", -1 ) ) );
                    }
                }
            }
        }
    }
    return;
}

void sub_135260()
{
    int iVar2;

    if (sub_9236( l_U1528._fU1060[1] ))
    {
        if (sub_10858( l_U1528._fU1024[1] ))
        {
            sub_135342( l_U1528._fU1024[1], sub_9261( l_U1528._fU1060[1] ) );
            if (sub_10858( l_U1528._fU1040[1] ))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_10883( l_U1528._fU1040[1] ), sub_9261( l_U1528._fU1060[1] ) )))
                {
                    GET_SCRIPT_TASK_STATUS( sub_10883( l_U1528._fU1040[1] ), 11, ref iVar2 );
                    if (iVar2 == 7)
                    {
                        if (NOT (IS_CHAR_INJURED( sub_10883( l_U1528._fU1040[1] ) )))
                        {
                            if (HAS_CONTROL_OF_NETWORK_ID( l_U1528._fU1040[1] ))
                            {
                                TASK_ENTER_CAR_AS_PASSENGER( sub_10883( l_U1528._fU1040[1] ), sub_9261( l_U1528._fU1060[1] ), 30000, 0 );
                            }
                        }
                    }
                }
            }
            if (sub_10858( l_U1528._fU1092 ))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_10883( l_U1528._fU1092 ), sub_9261( l_U1528._fU1060[1] ) )))
                {
                    GET_SCRIPT_TASK_STATUS( sub_10883( l_U1528._fU1092 ), 11, ref iVar2 );
                    if (iVar2 == 7)
                    {
                        if (NOT (IS_CHAR_INJURED( sub_10883( l_U1528._fU1092 ) )))
                        {
                            if (HAS_CONTROL_OF_NETWORK_ID( l_U1528._fU1092 ))
                            {
                                TASK_ENTER_CAR_AS_PASSENGER( sub_10883( l_U1528._fU1092 ), sub_9261( l_U1528._fU1060[1] ), 30000, 1 );
                            }
                        }
                    }
                }
            }
            if (sub_10858( l_U1528._fU1096 ))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_10883( l_U1528._fU1096 ), sub_9261( l_U1528._fU1060[1] ) )))
                {
                    GET_SCRIPT_TASK_STATUS( sub_10883( l_U1528._fU1096 ), 11, ref iVar2 );
                    if (iVar2 == 7)
                    {
                        if (NOT (IS_CHAR_INJURED( sub_10883( l_U1528._fU1096 ) )))
                        {
                            if (HAS_CONTROL_OF_NETWORK_ID( l_U1528._fU1096 ))
                            {
                                TASK_ENTER_CAR_AS_PASSENGER( sub_10883( l_U1528._fU1096 ), sub_9261( l_U1528._fU1060[1] ), 30000, 2 );
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_135342(int iParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;

    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( iParam0 ))
        {
            if ((NOT (IS_CHAR_INJURED( sub_10883( iParam0 ) ))) || (NOT (IS_CHAR_DEAD( sub_10883( iParam0 ) ))))
            {
                if (IS_CHAR_IN_CAR( sub_10883( iParam0 ), uParam1 ))
                {
                    GET_DRIVER_OF_CAR( uParam1, ref iVar6 );
                    if ((sub_10883( iParam0 )) == iVar6)
                    {
                        if (HAS_CONTROL_OF_NETWORK_ID( iParam0 ))
                        {
                            GET_SCRIPT_TASK_STATUS( sub_10883( iParam0 ), 16, ref iVar5 );
                            if (iVar5 == 7)
                            {
                                if (((((iParam0 == l_U1528._fU1024[1]) AND (sub_135516( 3 ))) || ((iParam0 == l_U1528._fU1040[1]) AND (sub_135516( 2 )))) || ((iParam0 == l_U1528._fU1092) AND (sub_135516( 1 )))) || (iParam0 == l_U1528._fU1096))
                                {
                                    TASK_CAR_DRIVE_WANDER( sub_10883( iParam0 ), uParam1, 15.00000000, 2 );
                                }
                            }
                            else
                            {
                                l_U2652 = 1;
                            }
                        }
                    }
                }
                else if (HAS_CONTROL_OF_NETWORK_ID( iParam0 ))
                {
                    GET_SCRIPT_TASK_STATUS( sub_10883( iParam0 ), 12, ref iVar4 );
                    if (iVar4 == 7)
                    {
                        TASK_ENTER_CAR_AS_DRIVER( sub_10883( iParam0 ), uParam1, 30000 );
                    }
                }
            }
        }
    }
    return;
}

int sub_135516(unknown uParam0)
{
    int iVar3;

    switch (uParam0)
    {
        case 3:
        if (sub_9236( l_U1528._fU1060[1] ))
        {
            if (sub_10858( l_U1528._fU1024[1] ))
            {
                if (IS_CHAR_IN_CAR( sub_10883( l_U1528._fU1024[1] ), sub_9261( l_U1528._fU1060[1] ) ))
                {
                    iVar3++;
                }
            }
            if (sub_10858( l_U1528._fU1040[1] ))
            {
                if (IS_CHAR_IN_CAR( sub_10883( l_U1528._fU1040[1] ), sub_9261( l_U1528._fU1060[1] ) ))
                {
                    iVar3++;
                }
            }
            else
            {
                iVar3++;
            }
            if (sub_10858( l_U1528._fU1092 ))
            {
                if (IS_CHAR_IN_CAR( sub_10883( l_U1528._fU1092 ), sub_9261( l_U1528._fU1060[1] ) ))
                {
                    iVar3++;
                }
            }
            else
            {
                iVar3++;
            }
            if (sub_10858( l_U1528._fU1096 ))
            {
                if (IS_CHAR_IN_CAR( sub_10883( l_U1528._fU1096 ), sub_9261( l_U1528._fU1060[1] ) ))
                {
                    iVar3++;
                }
            }
            else
            {
                iVar3++;
            }
        }
        if (iVar3 == 4)
        {
            return 1;
        }
        break;
        case 2:
        if (sub_9236( l_U1528._fU1060[1] ))
        {
            if (sub_10858( l_U1528._fU1040[1] ))
            {
                if (IS_CHAR_IN_CAR( sub_10883( l_U1528._fU1040[1] ), sub_9261( l_U1528._fU1060[1] ) ))
                {
                    iVar3++;
                }
            }
            else
            {
                iVar3++;
            }
            if (sub_10858( l_U1528._fU1092 ))
            {
                if (IS_CHAR_IN_CAR( sub_10883( l_U1528._fU1092 ), sub_9261( l_U1528._fU1060[1] ) ))
                {
                    iVar3++;
                }
            }
            else
            {
                iVar3++;
            }
            if (sub_10858( l_U1528._fU1096 ))
            {
                if (IS_CHAR_IN_CAR( sub_10883( l_U1528._fU1096 ), sub_9261( l_U1528._fU1060[1] ) ))
                {
                    iVar3++;
                }
            }
            else
            {
                iVar3++;
            }
        }
        if (iVar3 == 3)
        {
            return 1;
        }
        break;
        case 1:
        if (sub_9236( l_U1528._fU1060[1] ))
        {
            if (sub_10858( l_U1528._fU1092 ))
            {
                if (IS_CHAR_IN_CAR( sub_10883( l_U1528._fU1092 ), sub_9261( l_U1528._fU1060[1] ) ))
                {
                    iVar3++;
                }
            }
            else
            {
                iVar3++;
            }
        }
        if (iVar3 == 2)
        {
            return 1;
        }
        break;
    }
    return 0;
}

int sub_137539(int iParam0)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8319)
        {
            return 0;
        }
    }
    return 1;
}

void sub_138436()
{
    if (sub_9236( l_U1528._fU1060[1] ))
    {
        if (NOT (LOCATE_CAR_3D( sub_9261( l_U1528._fU1060[1] ), -705.70340000, 343.41520000, 4.63430000, 8.00000000, 8.00000000, 8.00000000, 0 )))
        {
            GET_DRIVER_OF_CAR( sub_9261( l_U1528._fU1060[1] ), ref l_U3291 );
            if (l_U3291 == nil)
            {
                if (sub_138587( sub_9261( l_U1528._fU1060[1] ) ))
                {
                    if (DOES_BLIP_EXIST( l_U2581 ))
                    {
                        REMOVE_BLIP( l_U2581 );
                        SET_ROUTE( l_U2581, 0 );
                        ADD_BLIP_FOR_CAR( sub_9261( l_U1528._fU1060[1] ), ref l_U2577[1] );
                        CHANGE_BLIP_SPRITE( l_U2577[1], 4 );
                        CHANGE_BLIP_SCALE( l_U2577[1], 0.78000000 );
                        CHANGE_BLIP_PRIORITY( l_U2577[1], 1 );
                        CHANGE_BLIP_COLOUR( l_U2577[1], 3 );
                    }
                    if (l_U2668 < l_U2660)
                    {
                        CLEAR_PRINTS();
                        PRINT_NOW( "COOP_BDB_NGT_15", 5000, 1 );
                        l_U2668 = l_U2660 + 30000;
                    }
                    else
                    {
                        l_U2668 = l_U2660 + 30000;
                    }
                }
            }
            else if (DOES_BLIP_EXIST( l_U2577[1] ))
            {
                REMOVE_BLIP( l_U2577[1] );
                ADD_BLIP_FOR_COORD( -705.70340000, 343.41520000, 4.63430000, ref l_U2581 );
                CHANGE_BLIP_SPRITE( l_U2581, 4 );
                CHANGE_BLIP_SCALE( l_U2581, 0.78000000 );
                CHANGE_BLIP_PRIORITY( l_U2581, 1 );
                CHANGE_BLIP_COLOUR( l_U2581, 5 );
                SET_ROUTE( l_U2581, 1 );
                l_U2668 = l_U2660;
                if (l_U3291 == sub_5471())
                {
                    PRINT_NOW( "COOP_BDB_NGT_17", 5000, 1 );
                }
            }
        }
    }
    return;
}

int sub_138587(unknown uParam0)
{
    int I;

    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (NOT (IS_CAR_DEAD( uParam0 )))
            {
                for ( I = 0; I < 16; I++ )
                {
                    if (sub_14137( I ))
                    {
                        if (IS_CHAR_IN_CAR( sub_5218( I ), uParam0 ))
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

void sub_139396()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    DISABLE_PAUSE_MENU( 1 );
    if (IS_PAUSE_MENU_ACTIVE())
    {
        DEACTIVATE_FRONTEND();
        UNPAUSE_GAME();
    }
    if (IS_CHAR_DEAD( sub_5471() ))
    {
        N_312012851( sub_5471(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        REQUEST_COLLISION_AT_POSN( uVar3._fU0, uVar3._fU4, uVar3._fU8 );
        RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), uVar3, 0.00000000 );
    }
    switch (l_U3307)
    {
        case 0:
        if ((((((l_U2658 > 0) AND (sub_6801( 351 ))) AND (sub_20011( 431692232 ))) AND (sub_20011( -1660661558 ))) AND (sub_139620( "MISSBDB_2" ))) AND (sub_20011( -503930010 )))
        {
            if (l_U3315 == nil)
            {
                CLEAR_AREA( -707.85140000, 356.90270000, 3.18430000, 100.00000000, 1 );
                CLEAR_AREA_OF_CARS( -707.85140000, 356.90270000, 3.18430000, 100.00000000 );
                CLEAR_AREA_OF_CHARS( -707.85140000, 356.90270000, 3.18430000, 100.00000000 );
                CLEAR_AREA_OF_OBJECTS( -707.85140000, 356.90270000, 3.18430000, 100.00000000 );
                CREATE_CAR( -1660661558, -710.76280000, 356.97530000, 25.06270000, ref l_U3315, 0 );
                CHANGE_CAR_COLOUR( l_U3315, 104, 104 );
                START_PLAYBACK_RECORDED_CAR( l_U3315, 351 );
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U3315, 1500 );
            }
            if (DOES_VEHICLE_EXIST( l_U3315 ))
            {
                if (NOT (IS_CAR_DEAD( l_U3315 )))
                {
                    if (l_U3316 == nil)
                    {
                        CREATE_CHAR( 26, 431692232, 0.00000000, 0.00000000, 500.00000000, ref l_U3316, 0 );
                        sub_4916( 2, l_U3316, "RUSSIAN_1_M", 0 );
                        WARP_CHAR_INTO_CAR( l_U3316, l_U3315 );
                        SET_CHAR_DECISION_MAKER( l_U3316, l_U2553 );
                        SET_HELI_BLADES_FULL_SPEED( l_U3315 );
                        SET_CHAR_COLLISION( l_U3316, 0 );
                        SET_CAR_COLLISION( l_U3315, 0 );
                    }
                }
            }
            if (DOES_CHAR_EXIST( l_U3316 ))
            {
                MARK_MODEL_AS_NO_LONGER_NEEDED( 1075583233 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( 1269098716 );
                sub_5169( GET_PLAYER_ID(), 0 );
                SET_CHAR_COLLISION( sub_5471(), 0 );
                FREEZE_CHAR_POSITION( sub_5471(), 1 );
                UNPAUSE_GAME();
                DISABLE_PAUSE_MENU( 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                CREATE_CAM( 14, ref l_U3308 );
                SET_CAM_POS( l_U3308, -673.37300000, 388.12240000, 26.18259000 );
                POINT_CAM_AT_VEHICLE( l_U3308, l_U3315 );
                SET_CAM_FOV( l_U3308, 16.80000000 );
                CREATE_CAM( 14, ref l_U3309 );
                SET_CAM_POS( l_U3309, -682.37640000, 396.10930000, 4.77278800 );
                POINT_CAM_AT_VEHICLE( l_U3309, l_U3315 );
                SET_CAM_FOV( l_U3309, 16.80000000 );
                CREATE_CAM( 3, ref l_U3310 );
                SET_CAM_INTERP_STYLE_CORE( l_U3310, l_U3308, l_U3309, 14500, 0 );
                SET_CAM_ACTIVE( l_U3310, 1 );
                SET_CAM_PROPAGATE( l_U3310, 1 );
                DISPLAY_HUD( 0 );
                DISPLAY_RADAR( 0 );
                l_U3312 = l_U2660 + 500;
                l_U3313 = l_U2660 + 8500;
                l_U3307 = 1;
            }
        }
        break;
        case 1:
        if (l_U2660 > l_U3312)
        {
            if (IS_SCREEN_FADED_IN())
            {
                if (l_U2660 > l_U3313)
                {
                    sub_48383( 1000 );
                    l_U3307 = 2;
                }
            }
            else if (NOT IS_SCREEN_FADING_IN())
            {
                if (sub_140516())
                {
                    if (sub_9236( l_U1528._fU1060[1] ))
                    {
                        if (HAS_CONTROL_OF_NETWORK_ID( l_U1528._fU1060[1] ))
                        {
                            SET_CAR_COORDINATES( sub_9261( l_U1528._fU1060[1] ), -705.70340000, 343.41520000, 4.63430000 );
                            SET_CAR_HEADING( sub_9261( l_U1528._fU1060[1] ), 90.00000000 );
                        }
                    }
                    for ( I = 0; I < 2; I++ )
                    {
                        if (sub_9236( l_U1528._fU1076[I] ))
                        {
                            if (LOCATE_CAR_3D( sub_9261( l_U1528._fU1076[I] ), -707.85140000, 356.90270000, 3.18430000, 30.00000000, 30.00000000, 30.00000000, 0 ))
                            {
                                if (HAS_CONTROL_OF_NETWORK_ID( l_U1528._fU1076[I] ))
                                {
                                    FREEZE_CAR_POSITION( sub_9261( l_U1528._fU1076[I] ), 1 );
                                    SET_CAR_VISIBLE( sub_9261( l_U1528._fU1076[I] ), 0 );
                                    SET_CAR_COLLISION( sub_9261( l_U1528._fU1076[I] ), 0 );
                                }
                            }
                        }
                    }
                    for ( I = 0; I < l_U1528._fU1060; I++ )
                    {
                        if (I != 1)
                        {
                            if (sub_9236( l_U1528._fU1060[I] ))
                            {
                                if (LOCATE_CAR_3D( sub_9261( l_U1528._fU1060[I] ), -707.85140000, 356.90270000, 3.18430000, 30.00000000, 30.00000000, 30.00000000, 0 ))
                                {
                                    if (HAS_CONTROL_OF_NETWORK_ID( l_U1528._fU1060[I] ))
                                    {
                                        FREEZE_CAR_POSITION( sub_9261( l_U1528._fU1060[I] ), 1 );
                                        SET_CAR_VISIBLE( sub_9261( l_U1528._fU1060[I] ), 0 );
                                        SET_CAR_COLLISION( sub_9261( l_U1528._fU1060[I] ), 0 );
                                    }
                                }
                            }
                        }
                    }
                    DISPLAY_HUD( 0 );
                    DISPLAY_RADAR( 0 );
                    sub_47971( 500 );
                }
            }
        }
        break;
        case 2:
        if (IS_SCREEN_FADED_OUT())
        {
            CREATE_CAM( 14, ref l_U3311 );
            SET_CAM_POS( l_U3311, -699.67350000, 360.17070000, 4.87925400 );
            SET_CAM_ROT( l_U3311, -8.50433600, -0.00000000, 99.37335000 );
            SET_CAM_FOV( l_U3311, 31.50003000 );
            SET_CAM_ACTIVE( l_U3311, 1 );
            SET_CAM_PROPAGATE( l_U3311, 1 );
            SET_CAM_ACTIVE( l_U3310, 0 );
            SET_CAM_PROPAGATE( l_U3310, 0 );
            if (NOT (IS_CHAR_DEAD( l_U3316 )))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( l_U3316, -702.70950000, 360.12240000, 3.07160000 );
                SET_CHAR_HEADING( l_U3316, 241.01340000 );
            }
            if (l_U3317 == nil)
            {
                CREATE_CHAR( 26, 1543404628, -701.15630000, 359.57470000, 3.07160000, ref l_U3317, 0 );
                sub_118924( ref l_U3317, l_U1528._fU360[GET_PLAYER_ID()] );
                SET_CHAR_HEADING( l_U3317, 90.92710000 );
                sub_118924( ref l_U2511, l_U1528._fU360[GET_PLAYER_ID()] );
            }
            if (NOT (IS_CAR_DEAD( l_U3315 )))
            {
                SET_CAR_COORDINATES( l_U3315, -708.95860000, 357.00490000, 3.98910000 );
                SET_CAR_HEADING( l_U3315, 270.00000000 );
            }
            sub_47971( 500 );
            l_U3307 = 3;
        }
        break;
        case 3:
        if (IS_SCREEN_FADED_IN())
        {
            CLEAR_PRINTS();
            sub_88640( "MPKP2_RUS", ref l_U2504, 6, 1 );
            l_U3307 = 4;
        }
        break;
        case 4:
        if (IS_SCREEN_FADED_OUT())
        {
            if (DOES_VEHICLE_EXIST( l_U3315 ))
            {
                sub_5169( GET_PLAYER_ID(), 1 );
                SET_CHAR_COLLISION( sub_5471(), 1 );
                FREEZE_CHAR_POSITION( sub_5471(), 0 );
                SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 0 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                DELETE_CHAR( ref l_U3316 );
                DELETE_CHAR( ref l_U3317 );
                DELETE_CAR( ref l_U3315 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( 431692232 );
                REMOVE_CAR_RECORDING( 351 );
                if (DOES_CAM_EXIST( l_U3308 ))
                {
                    DESTROY_CAM( l_U3308 );
                }
                if (DOES_CAM_EXIST( l_U3309 ))
                {
                    DESTROY_CAM( l_U3309 );
                }
                if (DOES_CAM_EXIST( l_U3310 ))
                {
                    DESTROY_CAM( l_U3310 );
                }
                DISPLAY_HUD( 1 );
                DISPLAY_RADAR( 1 );
                END_CAM_COMMANDS( ref l_U2658 );
                SET_CAM_BEHIND_PED( sub_5471() );
            }
            else if (l_U1528._fU752)
            {
                l_U3314 = 1;
                DISABLE_PAUSE_MENU( 0 );
            }
            else
            {
                l_U1863[GET_PLAYER_ID()]._fU132 = 1;
                if (sub_5520())
                {
                    if ((l_U1528._fU1056 == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
                    {
                        l_U1528._fU1056 = sub_23957( sub_6908( -1660661558, -708.95860000, 357.00490000, 3.98910000, 270.00000000 ) );
                        CHANGE_CAR_COLOUR( sub_9261( l_U1528._fU1056 ), 104, 104 );
                        LOCK_CAR_DOORS( sub_9261( l_U1528._fU1056 ), 1 );
                        l_U1528._fU752 = 1;
                    }
                    sub_5584();
                }
            }
        }
        else if (NOT (sub_89626( l_U2504 )))
        {
            if (NOT IS_SCREEN_FADING_OUT())
            {
                sub_48383( 500 );
            }
        }
        break;
    }
    return;
}

int sub_139620(unknown uParam0)
{
    REQUEST_ANIMS( uParam0 );
    if (HAVE_ANIMS_LOADED( uParam0 ))
    {
        return 1;
    }
    return 0;
}

int sub_140516()
{
    int I;
    vector[16] vVar3;
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
    unknown uVar50;
    unknown uVar51;
    float[16] fVar52;
    unknown uVar69;
    unknown uVar70;

    array(ref vVar3, 16);
    array(ref fVar52, 16);
    vVar3[0] = {-706.77810000, 346.78970000, 3.05250000};
    vVar3[1] = {-708.72780000, 346.62020000, 2.75750000};
    vVar3[2] = {-704.43120000, 346.53280000, 2.75610000};
    vVar3[3] = {-701.82940000, 346.58020000, 2.75710000};
    vVar3[4] = {-705.58620000, 346.70390000, 2.75710000};
    vVar3[5] = {-707.80790000, 346.72510000, 2.75650000};
    vVar3[6] = {-703.19930000, 346.69530000, 2.75650000};
    vVar3[7] = {-700.46040000, 346.71590000, 2.75640000};
    vVar3[8] = {-706.19710000, 345.95350000, 2.75660000};
    vVar3[9] = {-709.84200000, 346.74050000, 2.75670000};
    vVar3[10] = {-705.01820000, 345.96340000, 2.75670000};
    vVar3[11] = {-699.50390000, 346.85750000, 2.75690000};
    vVar3[12] = {-710.68080000, 346.79880000, 2.75680000};
    vVar3[13] = {-709.82800000, 344.90060000, 2.75710000};
    vVar3[14] = {-700.84220000, 345.24220000, 2.75680000};
    vVar3[15] = {-699.39610000, 348.33390000, 2.77660000};
    fVar52[0] = 27.82470000;
    fVar52[1] = 1.07600000;
    fVar52[2] = 358.80560000;
    fVar52[3] = 359.68090000;
    fVar52[4] = 9.55180000;
    fVar52[5] = 357.15000000;
    fVar52[6] = 2.62460000;
    fVar52[7] = 12.36380000;
    fVar52[8] = 353.53440000;
    fVar52[9] = 8.33200000;
    fVar52[10] = 15.19420000;
    fVar52[11] = 45.08690000;
    fVar52[12] = 347.30210000;
    fVar52[13] = 340.94930000;
    fVar52[14] = 33.48820000;
    fVar52[15] = 50.39400000;
    if (IS_CHAR_IN_ANY_CAR( sub_5471() ))
    {
        if (sub_9236( l_U1528._fU1060[1] ))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_5471(), sub_9261( l_U1528._fU1060[1] ) )))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5471(), ref uVar70 );
                uVar69 = sub_23957( uVar70 );
                WARP_CHAR_FROM_CAR_TO_COORD( sub_5471(), vVar3[GET_PLAYER_ID()]._fU0, vVar3[GET_PLAYER_ID()]._fU4, vVar3[GET_PLAYER_ID()]._fU8 );
                SET_CHAR_HEADING( sub_5471(), fVar52[GET_PLAYER_ID()] );
                if (HAS_CONTROL_OF_NETWORK_ID( uVar69 ))
                {
                    sub_141307( sub_9261( uVar69 ), 0, 1 );
                }
            }
            else
            {
                WARP_CHAR_FROM_CAR_TO_COORD( sub_5471(), vVar3[GET_PLAYER_ID()]._fU0, vVar3[GET_PLAYER_ID()]._fU4, vVar3[GET_PLAYER_ID()]._fU8 );
                SET_CHAR_HEADING( sub_5471(), fVar52[GET_PLAYER_ID()] );
            }
        }
    }
    else
    {
        SET_CHAR_COORDINATES( sub_5471(), vVar3[GET_PLAYER_ID()]._fU0, vVar3[GET_PLAYER_ID()]._fU4, vVar3[GET_PLAYER_ID()]._fU8 );
        SET_CHAR_HEADING( sub_5471(), fVar52[GET_PLAYER_ID()] );
    }
    for ( I = 0; I < 16; I++ )
    {
        if (sub_14137( I ))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_5218( I ) ))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_141307(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_COORDINATES( uParam0, ref uVar5, ref uVar6, ref uVar7 );
        SET_CAR_COORDINATES( uParam0, uVar5, uVar6, uVar7 + 200.00000000 );
        FREEZE_CAR_POSITION( uParam0, uParam2 );
        SET_CAR_VISIBLE( uParam0, uParam1 );
        SET_CAR_COLLISION( uParam0, uParam1 );
    }
    return;
}

int sub_143232()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_14137( I ))
        {
            if (NOT l_U1863[I]._fU116)
            {
                if (NOT l_U1863[I]._fU132)
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}

int sub_143485()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (l_U1863[I]._fU32)
        {
            return 1;
        }
    }
    return 0;
}

int sub_144099()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_14137( I ))
        {
            if (sub_130340( sub_5218( I ) ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_144195(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_14137( I ))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_5218( I ), uParam0, uParam1, uParam2, uParam3, uParam3, uParam3, uParam4 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_145218()
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        if (l_U1528._fU624[I])
        {
            if (DOES_BLIP_EXIST( l_U2574[I] ))
            {
                REMOVE_BLIP( l_U2574[I] );
                if (l_U1528._fU436 == 1)
                {
                    CLEAR_PRINTS();
                    PRINT_NOW( "COOP_BDB_BP_01", 5000, 1 );
                }
                else if (l_U1528._fU436 == 2)
                {
                    CLEAR_PRINTS();
                    PRINT_NOW( "COOP_BDB_BP_03", 5000, 1 );
                    l_U2656 = 1;
                }
            }
        }
        else if (NOT (DOES_BLIP_EXIST( l_U2574[I] )))
        {
            ADD_BLIP_FOR_COORD( l_U2775[I]._fU0, l_U2775[I]._fU4, l_U2775[I]._fU8, ref l_U2574[I] );
            CHANGE_BLIP_SPRITE( l_U2574[I], 4 );
            CHANGE_BLIP_SCALE( l_U2574[I], 0.78000000 );
            CHANGE_BLIP_PRIORITY( l_U2574[I], 1 );
            CHANGE_BLIP_COLOUR( l_U2574[I], 5 );
        }
    }
    return;
}

void sub_145573()
{
    sub_145582();
    sub_146620();
    if ((LOCATE_CHAR_ANY_MEANS_3D( sub_5471(), l_U2775[0]._fU0, l_U2775[0]._fU4, l_U2775[0]._fU8, 1.60000000, 1.60000000, 1.60000000, 0 )) || (l_U1863[GET_PLAYER_ID()]._fU136._fU8 == 1))
    {
        if (l_U1863[GET_PLAYER_ID()]._fU136._fU16 == 0)
        {
            if (l_U1863[GET_PLAYER_ID()]._fU136._fU0 == 1)
            {
                if (sub_147088( 0 ))
                {
                    if (l_U1863[GET_PLAYER_ID()]._fU136._fU8 == 0)
                    {
                        l_U1863[GET_PLAYER_ID()]._fU136._fU0 = 0;
                        l_U1863[GET_PLAYER_ID()]._fU136._fU8 = 1;
                        SET_PLAYER_CONTROL_FOR_NETWORK( sub_8714(), 0, 0 );
                        SET_CHAR_NEVER_TARGETTED( sub_5471(), 1 );
                        SET_PLAYER_INVINCIBLE( sub_8714(), 1 );
                        REMOVE_PTFX_FROM_PED( sub_5471() );
                        CLEAR_AREA( l_U2775[0]._fU0, l_U2775[0]._fU4, l_U2775[0]._fU8, 2.00000000, 1 );
                        SET_GAME_CAM_HEADING( 0.00000000 );
                    }
                }
            }
            else if (l_U1863[GET_PLAYER_ID()]._fU136._fU8 == 1)
            {
                if (sub_147406( 0 ))
                {
                    l_U1863[GET_PLAYER_ID()]._fU136._fU16 = 1;
                    SET_PLAYER_CONTROL_FOR_NETWORK( sub_8714(), 1, 1 );
                    SET_CHAR_NEVER_TARGETTED( sub_5471(), 0 );
                    SET_CHAR_INVINCIBLE( sub_5471(), 0 );
                }
            }
        }
        else if (NOT (IS_PLAYER_CONTROL_ON( sub_8714() )))
        {
            SET_PLAYER_CONTROL_FOR_NETWORK( sub_8714(), 1, 1 );
            SET_CHAR_NEVER_TARGETTED( sub_5471(), 0 );
            SET_CHAR_INVINCIBLE( sub_5471(), 0 );
        }
    }
    if ((LOCATE_CHAR_ANY_MEANS_3D( sub_5471(), l_U2775[1]._fU0, l_U2775[1]._fU4, l_U2775[1]._fU8, 1.60000000, 1.60000000, 1.60000000, 0 )) || (l_U1863[GET_PLAYER_ID()]._fU136._fU12 == 1))
    {
        if (l_U1863[GET_PLAYER_ID()]._fU136._fU20 == 0)
        {
            if (l_U1863[GET_PLAYER_ID()]._fU136._fU4 == 1)
            {
                if (sub_147088( 1 ))
                {
                    if (l_U1863[GET_PLAYER_ID()]._fU136._fU12 == 0)
                    {
                        l_U1863[GET_PLAYER_ID()]._fU136._fU4 = 0;
                        l_U1863[GET_PLAYER_ID()]._fU136._fU12 = 1;
                        SET_PLAYER_CONTROL_FOR_NETWORK( sub_8714(), 0, 0 );
                        SET_CHAR_NEVER_TARGETTED( sub_5471(), 1 );
                        SET_PLAYER_INVINCIBLE( sub_8714(), 1 );
                        REMOVE_PTFX_FROM_PED( sub_5471() );
                        CLEAR_AREA( l_U2775[1]._fU0, l_U2775[1]._fU4, l_U2775[1]._fU8, 2.00000000, 1 );
                        SET_GAME_CAM_HEADING( 0.00000000 );
                    }
                }
            }
            else if (l_U1863[GET_PLAYER_ID()]._fU136._fU12 == 1)
            {
                if (sub_147406( 1 ))
                {
                    l_U1863[GET_PLAYER_ID()]._fU136._fU20 = 1;
                    SET_PLAYER_CONTROL_FOR_NETWORK( sub_8714(), 1, 1 );
                    SET_CHAR_NEVER_TARGETTED( sub_5471(), 0 );
                    SET_CHAR_INVINCIBLE( sub_5471(), 0 );
                }
            }
        }
        else if (NOT (IS_PLAYER_CONTROL_ON( sub_8714() )))
        {
            SET_PLAYER_CONTROL_FOR_NETWORK( sub_8714(), 1, 1 );
            SET_CHAR_NEVER_TARGETTED( sub_5471(), 0 );
            SET_CHAR_INVINCIBLE( sub_5471(), 0 );
        }
    }
    return;
}

void sub_145582()
{
    int J;
    int I;

    for ( J = 0; J < 16; J++ )
    {
        for ( I = 0; I < 2; I++ )
        {
            if (IS_NETWORK_PLAYER_ACTIVE( J ))
            {
                if (J != GET_PLAYER_ID())
                {
                    if (l_U1863[J]._fU136._fU16 == 0)
                    {
                        if (l_U1863[J]._fU136._fU0 == 1)
                        {
                            if (((l_U1863[GET_PLAYER_ID()]._fU136._fU0 == 0) AND (l_U1863[GET_PLAYER_ID()]._fU136._fU8 == 0)) AND (l_U1863[GET_PLAYER_ID()]._fU136._fU16 == 0))
                            {
                                l_U1863[GET_PLAYER_ID()]._fU136._fU0 = 1;
                            }
                        }
                        else if (l_U1863[J]._fU136._fU0 == 0)
                        {
                            if (l_U1863[GET_PLAYER_ID()]._fU136._fU0 == 1)
                            {
                                l_U1863[GET_PLAYER_ID()]._fU136._fU0 = 0;
                            }
                        }
                    }
                    else
                    {
                        l_U1863[GET_PLAYER_ID()]._fU136._fU16 = 1;
                    }
                    if (l_U1863[J]._fU136._fU20 == 0)
                    {
                        if (l_U1863[J]._fU136._fU4 == 1)
                        {
                            if (((l_U1863[GET_PLAYER_ID()]._fU136._fU4 == 0) AND (l_U1863[GET_PLAYER_ID()]._fU136._fU12 == 0)) AND (l_U1863[GET_PLAYER_ID()]._fU136._fU20 == 0))
                            {
                                l_U1863[GET_PLAYER_ID()]._fU136._fU4 = 1;
                            }
                        }
                        else if (l_U1863[J]._fU136._fU4 == 0)
                        {
                            if (l_U1863[GET_PLAYER_ID()]._fU136._fU4 == 1)
                            {
                                l_U1863[GET_PLAYER_ID()]._fU136._fU4 = 0;
                            }
                        }
                    }
                    else
                    {
                        l_U1863[GET_PLAYER_ID()]._fU136._fU20 = 1;
                    }
                }
            }
            else if (l_U1863[J]._fU136._fU8 == 1)
            {
                if (l_U1863[J]._fU136._fU8 == 0)
                {
                    sub_146216( 0 );
                }
            }
            if (l_U1863[J]._fU136._fU12 == 1)
            {
                if (l_U1863[J]._fU136._fU12 == 0)
                {
                    sub_146216( 1 );
                }
            }
        }
    }
    return;
}

void sub_146216(int iParam0)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (iParam0 == 0)
            {
                l_U1863[I]._fU136._fU0 = 1;
            }
            else if (iParam0 == 1)
            {
                l_U1863[I]._fU136._fU4 = 1;
            }
            if (DOES_OBJECT_EXIST_WITH_NETWORK_ID( l_U1528._fU1168[iParam0] ))
            {
                if (HAS_CONTROL_OF_NETWORK_ID( l_U1528._fU1168[iParam0] ))
                {
                    SET_OBJECT_COORDINATES( sub_11398( l_U1528._fU1168[iParam0] ), l_U3162[iParam0]._fU0, l_U3162[iParam0]._fU4, l_U3162[iParam0]._fU8 );
                    SET_OBJECT_VISIBLE( sub_11398( l_U1528._fU1168[iParam0] ), 0 );
                    SET_OBJECT_COLLISION( sub_11398( l_U1528._fU1168[iParam0] ), 0 );
                    FREEZE_OBJECT_POSITION( sub_11398( l_U1528._fU1168[iParam0] ), 1 );
                    SET_NETWORK_ID_CAN_MIGRATE( l_U1528._fU1168[iParam0], 1 );
                }
            }
        }
    }
    return;
}

void sub_146620()
{
    unknown uVar2;

    if (l_U1863[GET_PLAYER_ID()]._fU136._fU0 == 1)
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_5471(), l_U2775[0]._fU0, l_U2775[0]._fU4, l_U2775[0]._fU8, 1.60000000, 1.60000000, 1.60000000, 0 )))
        {
            LOCATE_CHAR_ANY_MEANS_3D( sub_5471(), l_U2775[0]._fU0, l_U2775[0]._fU4, l_U2775[0]._fU8, 1.60000000, 1.60000000, 1.60000000, 1 );
        }
    }
    if (l_U1863[GET_PLAYER_ID()]._fU136._fU4 == 1)
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_5471(), l_U2775[1]._fU0, l_U2775[1]._fU4, l_U2775[1]._fU8, 1.60000000, 1.60000000, 1.60000000, 0 )))
        {
            LOCATE_CHAR_ANY_MEANS_3D( sub_5471(), l_U2775[1]._fU0, l_U2775[1]._fU4, l_U2775[1]._fU8, 1.60000000, 1.60000000, 1.60000000, 1 );
        }
    }
    return;
}

int sub_147088(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (iParam0 == 0)
    {
        GET_CHAR_COORDINATES( sub_5471(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        if ((uVar3._fU8 < 23.25000000) AND (sub_80932( 1, 1 )))
        {
            return 1;
        }
    }
    else if (sub_80932( 1, 1 ))
    {
        return 1;
    }
    return 0;
}

int sub_147406(unknown uParam0)
{
    int iVar3;
    int iVar4;

    GET_CURRENT_CHAR_WEAPON( sub_5471(), ref iVar4 );
    if (l_U2584[uParam0])
    {
        GET_SCRIPT_TASK_STATUS( sub_5471(), 29, ref iVar3 );
        if ((iVar3 == 7) AND (l_U3367[uParam0]))
        {
            return 1;
        }
        else if (iVar3 == 1)
        {
            GET_SEQUENCE_PROGRESS( sub_5471(), ref l_U3365 );
            if (l_U3365 == 1)
            {
                if ((IS_CHAR_PLAYING_ANIM( sub_5471(), "MISSBDB_2", "Bomb" )) || (IS_CHAR_PLAYING_ANIM( sub_5471(), "MISSBDB_2", "Bomb_Unarmed" )))
                {
                    sub_147600( uParam0 );
                }
            }
        }
    }
    else if (((iVar4 == 16) || (iVar4 == 14)) || (iVar4 == 12))
    {
        OPEN_SEQUENCE_TASK( ref l_U2513[uParam0] );
        TASK_CHAR_SLIDE_TO_COORD( 0, l_U3155[uParam0]._fU0, l_U3155[uParam0]._fU4, l_U3155[uParam0]._fU8, l_U3169[uParam0], 0.30000000 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Bomb", "MISSBDB_2", 8.00000000, 0, 0, 0, 0, -1 );
        CLOSE_SEQUENCE_TASK( l_U2513[uParam0] );
        TASK_PERFORM_SEQUENCE( sub_5471(), l_U2513[uParam0] );
        CLEAR_SEQUENCE_TASK( l_U2513[uParam0] );
        l_U2584[uParam0] = 1;
    }
    else
    {
        OPEN_SEQUENCE_TASK( ref l_U2513[uParam0] );
        TASK_CHAR_SLIDE_TO_COORD( 0, l_U3155[uParam0]._fU0, l_U3155[uParam0]._fU4, l_U3155[uParam0]._fU8, l_U3169[uParam0], 0.30000000 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Bomb_Unarmed", "MISSBDB_2", 8.00000000, 0, 0, 0, 0, -1 );
        CLOSE_SEQUENCE_TASK( l_U2513[uParam0] );
        TASK_PERFORM_SEQUENCE( sub_5471(), l_U2513[uParam0] );
        CLEAR_SEQUENCE_TASK( l_U2513[uParam0] );
        l_U2584[uParam0] = 1;
    }
    return 0;
}

void sub_147600(int iParam0)
{
    if (IS_CHAR_PLAYING_ANIM( sub_5471(), "MISSBDB_2", "Bomb" ))
    {
        GET_CHAR_ANIM_CURRENT_TIME( sub_5471(), "MISSBDB_2", "Bomb", ref l_U3366 );
    }
    else if (IS_CHAR_PLAYING_ANIM( sub_5471(), "MISSBDB_2", "Bomb_Unarmed" ))
    {
        GET_CHAR_ANIM_CURRENT_TIME( sub_5471(), "MISSBDB_2", "Bomb_Unarmed", ref l_U3366 );
    }
    if (DOES_OBJECT_EXIST_WITH_NETWORK_ID( l_U1528._fU1168[iParam0] ))
    {
        if (NOT (IS_OBJECT_ATTACHED( sub_11398( l_U1528._fU1168[iParam0] ) )))
        {
            if (REQUEST_CONTROL_OF_NETWORK_ID( l_U1528._fU1168[iParam0] ))
            {
                if (NOT l_U3373[iParam0])
                {
                    SET_OBJECT_VISIBLE( sub_11398( l_U1528._fU1168[iParam0] ), 1 );
                    SET_OBJECT_COLLISION( sub_11398( l_U1528._fU1168[iParam0] ), 1 );
                }
                if (l_U3366 > 0.20400000)
                {
                    if (NOT l_U3367[iParam0])
                    {
                        ATTACH_OBJECT_TO_PED( sub_11398( l_U1528._fU1168[iParam0] ), sub_5471(), 1219, 0.27500000, 0.02500000, 0.00000000, 0.12500000, 4.65000000, 0.22500000, 0 );
                        if (iParam0 == 0)
                        {
                            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( sub_11398( l_U1528._fU1168[iParam0] ), "cargbridgerm" );
                        }
                        else
                        {
                            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( sub_11398( l_U1528._fU1168[iParam0] ), "carholdrm" );
                        }
                        l_U3367[iParam0] = 1;
                    }
                }
            }
        }
        else if (REQUEST_CONTROL_OF_NETWORK_ID( l_U1528._fU1168[iParam0] ))
        {
            if (l_U3366 > 0.35400000)
            {
                if (NOT l_U3370[iParam0])
                {
                    DETACH_OBJECT( sub_11398( l_U1528._fU1168[iParam0] ), 0 );
                    FREEZE_OBJECT_POSITION( sub_11398( l_U1528._fU1168[iParam0] ), 1 );
                    SET_OBJECT_COLLISION( sub_11398( l_U1528._fU1168[iParam0] ), 0 );
                    l_U3370[iParam0] = 1;
                }
            }
        }
    }
    return;
}

void sub_149308()
{
    int I;
    int iVar3;

    for ( I = 0; I < 15; I++ )
    {
        if (sub_10858( l_U1528._fU1100[I] ))
        {
            if ((sub_10883( l_U1528._fU1100[I] )) == l_U1528._fU1180[I])
            {
                if (sub_149433( sub_39510( sub_14621( l_U1528._fU1100[I], "Bc.net_FirstWave", I ) ) ))
                {
                    if (HAS_CONTROL_OF_NETWORK_ID( l_U1528._fU1100[I] ))
                    {
                        GET_SCRIPT_TASK_STATUS( sub_10883( l_U1528._fU1100[I] ), 106, ref iVar3 );
                        if ((sub_149611( sub_39510( sub_14621( l_U1528._fU1100[I], "Bc.net_FirstWave", I ) ) )) != -1)
                        {
                            if (iVar3 == 7)
                            {
                                if (NOT (IS_CHAR_INJURED( sub_10883( l_U1528._fU1100[I] ) )))
                                {
                                    sub_150668( sub_10883( l_U1528._fU1100[I] ), sub_149611( sub_39510( sub_14621( l_U1528._fU1100[I], "Bc.net_FirstWave", I ) ) ) );
                                }
                            }
                        }
                        else
                        {
                            TASK_COMBAT( sub_10883( l_U1528._fU1100[I] ), sub_39510( sub_14621( l_U1528._fU1100[I], "Bc.net_FirstWave", I ) ) );
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_149433(unknown uParam0)
{
    if (IS_CHAR_IN_ANGLED_AREA_3D( uParam0, 738.50190000, -163.15010000, -10.12230000, 657.86470000, -332.84000000, 33.50270000, 30.87500000, 0 ))
    {
        return 1;
    }
    return 0;
}

int sub_149611(unknown uParam0)
{
    int Result;
    vector[7] vVar4;
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
    unknown uVar24;
    unknown uVar25;
    vector[7] vVar26;
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
    float[7] fVar48;
    vector[4] vVar56;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    unknown uVar66;
    unknown uVar67;
    unknown uVar68;
    vector[4] vVar69;
    unknown uVar74;
    unknown uVar75;
    unknown uVar76;
    unknown uVar77;
    unknown uVar78;
    unknown uVar79;
    unknown uVar80;
    unknown uVar81;
    float[4] fVar82;

    array(ref vVar4, 7);
    array(ref vVar26, 7);
    array(ref fVar48, 7);
    array(ref vVar56, 4);
    array(ref vVar69, 4);
    array(ref fVar82, 4);
    vVar4[0] = {738.26420000, -231.22090000, 8.76820000};
    vVar26[0] = {754.11830000, -197.44000000, 10.51820000};
    fVar48[0] = 6.62500000;
    vVar56[0] = {735.76130000, -219.36920000, 10.84830000};
    vVar69[0] = {744.69720000, -200.15840000, 12.59830000};
    fVar82[0] = 11.25000000;
    vVar4[1] = {729.99540000, -249.37860000, 8.75050000};
    vVar26[1] = {736.90110000, -234.68960000, 10.50050000};
    fVar48[1] = 6.62500000;
    vVar56[1] = {723.32440000, -246.24030000, 10.84900000};
    vVar69[1] = {732.26030000, -227.02950000, 12.59900000};
    fVar82[1] = 11.25000000;
    vVar4[2] = {719.69060000, -271.77580000, 8.75350000};
    vVar26[2] = {726.45300000, -257.02040000, 10.50350000};
    fVar48[2] = 3.75000000;
    vVar56[2] = {712.84420000, -275.18790000, 10.84890000};
    vVar69[2] = {721.72810000, -255.95290000, 12.59890000};
    fVar82[2] = 15.25000000;
    vVar26[3] = {712.71010000, -286.55210000, 8.75280000};
    vVar26[3] = {719.61910000, -271.86460000, 10.50280000};
    fVar48[3] = 3.75000000;
    vVar56[3] = {700.20410000, -302.62400000, 10.84880000};
    vVar69[3] = {709.13760000, -283.41200000, 12.59880000};
    fVar82[3] = 15.25000000;
    vVar4[4] = {720.99720000, -221.93020000, 8.76920000};
    vVar26[4] = {736.92790000, -188.18540000, 10.51920000};
    fVar48[4] = 6.62500000;
    vVar4[5] = {710.86830000, -243.05260000, 8.75140000};
    vVar26[5] = {720.28740000, -223.37900000, 10.50140000};
    fVar48[5] = 6.62500000;
    vVar4[6] = {695.77670000, -268.20570000, 8.75660000};
    vVar26[6] = {702.50840000, -253.89890000, 10.50660000};
    fVar48[6] = 4.00000000;
    for ( Result = 0; Result < 7; Result++ )
    {
        if (NOT (IS_CHAR_DEAD( uParam0 )))
        {
            if (Result < 4)
            {
                if ((sub_150378( uParam0, vVar4[Result], vVar26[Result], fVar48[Result] )) || (sub_150378( uParam0, vVar56[Result], vVar69[Result], fVar82[Result] )))
                {
                    return Result;
                }
            }
            else if (sub_150378( uParam0, vVar4[Result], vVar26[Result], fVar48[Result] ))
            {
                return Result;
            }
        }
    }
    return -1;
}

int sub_150378(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    if (IS_CHAR_IN_ANGLED_AREA_3D( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam4._fU0, uParam4._fU4, uParam4._fU8, uParam7, 0 ))
    {
        return 1;
    }
    return 0;
}

void sub_150668(unknown uParam0, unknown uParam1)
{
    l_U2886[0] = {0.00000000, 0.00000000, 0.00000000};
    l_U2800[0] = {733.90330000, -233.28030000, 10.50050000};
    l_U2843[0] = {726.99770000, -247.96930000, 8.75050000};
    l_U3244[0] = 6.62500000;
    l_U2800[1] = {724.74850000, -256.23920000, 10.50350000};
    l_U2843[1] = {717.98600000, -270.99460000, 8.75350000};
    l_U3244[1] = 6.62500000;
    l_U2886[1] = {0.00000000, 0.00000000, 0.00000000};
    l_U2800[2] = {717.92240000, -271.06650000, 10.50280000};
    l_U2843[2] = {711.01350000, -285.75400000, 8.75280000};
    l_U3244[2] = 3.75000000;
    l_U2886[2] = {0.00000000, 0.00000000, 0.00000000};
    l_U2800[3] = {707.92620000, -292.42890000, 10.50420000};
    l_U2843[3] = {703.22550000, -302.48640000, 8.75420000};
    l_U3244[3] = 3.75000000;
    l_U2886[3] = {0.00000000, 0.00000000, 0.00000000};
    l_U2800[4] = {717.29960000, -221.94860000, 10.50140000};
    l_U2843[4] = {707.88060000, -241.62220000, 8.75140000};
    l_U3244[4] = 6.62500000;
    l_U2886[4] = {0.00000000, 0.00000000, 0.00000000};
    l_U2800[5] = {700.69870000, -253.04740000, 10.50660000};
    l_U2843[5] = {693.96700000, -267.35420000, 8.75660000};
    l_U3244[5] = 4.00000000;
    l_U2886[5] = {0.00000000, 0.00000000, 0.00000000};
    l_U2800[6] = {688.42830000, -279.53720000, 10.50320000};
    l_U2843[6] = {681.72220000, -293.85600000, 8.75320000};
    l_U3244[6] = 4.00000000;
    l_U2886[6] = {0.00000000, 0.00000000, 0.00000000};
    TASK_GUARD_ANGLED_DEFENSIVE_AREA( uParam0, l_U2886[uParam1], l_U3259[uParam1], 0.00000000, 0, l_U2800[uParam1], l_U2843[uParam1], l_U3244[uParam1] );
    return;
}

void sub_151450()
{
    int I;
    unknown[4] uVar3;
    unknown[4] uVar8;

    array(ref uVar3, 4);
    array(ref uVar8, 4);
    for ( I = 0; I < 4; I++ )
    {
        if (sub_10858( l_U1528._fU1004[I] ))
        {
            if (LOCATE_CHAR_ON_FOOT_3D( sub_10883( l_U1528._fU1004[I] ), l_U3006[I]._fU0, l_U3006[I]._fU4, l_U3006[I]._fU8, 1.00000000, 1.00000000, 1.00000000, 0 ))
            {
                GET_SCRIPT_TASK_STATUS( sub_10883( l_U1528._fU1004[I] ), 91, ref uVar8[I] );
                if ((uVar8[I] == 7) AND (HAS_CONTROL_OF_NETWORK_ID( l_U1528._fU1004[I] )))
                {
                    if (NOT (IS_CHAR_INJURED( sub_10883( l_U1528._fU1004[I] ) )))
                    {
                        TASK_COMBAT( sub_10883( l_U1528._fU1004[I] ), sub_39510( sub_14621( l_U1528._fU1004[I], "Bc.net_EnemySniper", I ) ) );
                    }
                }
            }
            else
            {
                GET_SCRIPT_TASK_STATUS( sub_10883( l_U1528._fU1004[I] ), 27, ref uVar3[I] );
                if ((uVar3[I] == 7) AND (HAS_CONTROL_OF_NETWORK_ID( l_U1528._fU1004[I] )))
                {
                    if (NOT (IS_CHAR_INJURED( sub_10883( l_U1528._fU1004[I] ) )))
                    {
                        TASK_FOLLOW_NAV_MESH_TO_COORD( sub_10883( l_U1528._fU1004[I] ), l_U3006[I]._fU0, l_U3006[I]._fU4, l_U3006[I]._fU8, 3, 20000, 0 );
                    }
                }
            }
        }
    }
    return;
}

void sub_152346()
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
    if (IS_CHAR_DEAD( sub_5471() ))
    {
        N_312012851( sub_5471(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), uVar2, 0.00000000 );
        sub_5169( GET_PLAYER_ID(), 0 );
    }
    switch (l_U3380)
    {
        case 0:
        if (IS_SCREEN_FADED_OUT())
        {
            if (NOT (IS_CHAR_DEAD( sub_5471() )))
            {
                if (sub_130340( sub_5471() ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_5471(), 721.42000000, -293.94000000, 5.85000000 );
                }
                else
                {
                    SET_CHAR_COORDINATES( sub_5471(), 721.42000000, -293.94000000, 5.85000000 );
                }
            }
            else
            {
                RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), 721.42000000, -293.94000000, 5.85000000, 0.00000000 );
            }
            sub_5169( GET_PLAYER_ID(), 0 );
            DISPLAY_HUD( 0 );
            DISPLAY_RADAR( 0 );
            FORCE_LOADING_SCREEN( 1 );
            REQUEST_COLLISION_AT_POSN( 721.42000000, -293.94000000, 5.85000000 );
            sub_87600( 721.42000000, -293.94000000, 5.85000000 );
            FORCE_LOADING_SCREEN( 0 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( -503930010 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 1543404628 );
            REMOVE_ANIMS( "MISSBDB_2" );
            l_U2674 = 0;
            l_U3380 = 1;
        }
        else if (NOT IS_SCREEN_FADING_OUT())
        {
            sub_48383( 500 );
        }
        break;
        case 1:
        l_U1863[GET_PLAYER_ID()]._fU56 = 1;
        if (l_U1528._fU792)
        {
            if (l_U2674 == 0)
            {
                l_U2674 = l_U2660 + 250;
            }
            else if (IS_SCREEN_FADED_IN())
            {
                if (l_U2660 > l_U2674)
                {
                    l_U2670 = l_U2660 + 250;
                    l_U3380 = 2;
                }
            }
            else if (NOT IS_SCREEN_FADING_IN())
            {
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                CREATE_CAM( 14, ref l_U3381 );
                SET_CAM_POS( l_U3381, 771.16990000, -221.29780000, 19.43459000 );
                SET_CAM_ROT( l_U3381, 0.58118300, 0.00000000, 104.04420000 );
                SET_CAM_FOV( l_U3381, 70.00000000 );
                SET_CAM_ACTIVE( l_U3381, 1 );
                SET_CAM_PROPAGATE( l_U3381, 1 );
                sub_47971( 500 );
            };;;
        }
        break;
        case 2:
        if (IS_PAUSE_MENU_ACTIVE())
        {
            DEACTIVATE_FRONTEND();
        }
        switch (l_U2671)
        {
            case 0:
            if (l_U2660 > l_U2670)
            {
                ADD_EXPLOSION( 688.97690000, -305.39620000, 22.89240000, 13, 4.00000000, 0, 0, 1.00000000 );
                PLAY_SOUND_FROM_POSITION( -1, "BOMB_DA_BASS_2_EXPLOSION_BIG", 688.97690000, -305.39620000, 22.89240000 );
                l_U2670 = l_U2660 + 1000;
                l_U2671++;
            }
            break;
            case 1:
            if (l_U2660 > l_U2670)
            {
                TRIGGER_PTFX( "exp_ship_destroy", 703.10720000, -276.12850000, 9.69858100, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
                PLAY_SOUND_FROM_POSITION( -1, "BOMB_DA_BASS_2_EXPLOSION_BIG", 703.10720000, -276.12850000, 9.69858100 );
                l_U2670 = l_U2660 + 1000;
                l_U2671++;
            }
            break;
            case 2:
            if (l_U2660 > l_U2670)
            {
                TRIGGER_PTFX( "exp_ship_destroy", 719.45940000, -252.85970000, 2.25550000, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
                PLAY_SOUND_FROM_POSITION( -1, "BOMB_DA_BASS_2_EXPLOSION_BIG", 719.45940000, -252.85970000, 2.25550000 );
                l_U2670 = l_U2660 + 1000;
                l_U2671 = 13;
            }
            break;
            case 3:
            if (l_U2660 > l_U2670)
            {
                TRIGGER_PTFX( "exp_ship_destroy", 710.57860000, -271.71560000, 10.96850000, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
                PLAY_SOUND_FROM_POSITION( -1, "BOMB_DA_BASS_2_EXPLOSION_BIG", 710.57860000, -271.71560000, 10.96850000 );
                l_U2670 = l_U2660 + 500;
                l_U2671++;
            }
            break;
            case 4:
            if (l_U2660 > l_U2670)
            {
                TRIGGER_PTFX( "exp_ship_destroy", 704.70340000, -261.87860000, 10.96850000, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
                PLAY_SOUND_FROM_POSITION( -1, "BOMB_DA_BASS_2_EXPLOSION_BIG", 704.70340000, -261.87860000, 10.96850000 );
                l_U2670 = l_U2660 + 500;
                l_U2671++;
            }
            break;
            case 5:
            if (l_U2660 > l_U2670)
            {
                TRIGGER_PTFX( "exp_ship_destroy", 716.11040000, -259.58720000, 10.96850000, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
                PLAY_SOUND_FROM_POSITION( -1, "BOMB_DA_BASS_2_EXPLOSION_BIG", 716.11040000, -259.58720000, 10.96850000 );
                l_U2670 = l_U2660 + 500;
                l_U2671++;
            }
            break;
            case 6:
            if (l_U2660 > l_U2670)
            {
                ADD_EXPLOSION( 725.41240000, -250.12790000, 8.87090000, 13, 4.00000000, 0, 0, 1.00000000 );
                PLAY_SOUND_FROM_POSITION( -1, "BOMB_DA_BASS_2_EXPLOSION_BIG", 725.41240000, -250.12790000, 8.87090000 );
                l_U2670 = l_U2660 + 500;
                l_U2671++;
            }
            break;
            case 7:
            if (l_U2660 > l_U2670)
            {
                TRIGGER_PTFX( "exp_ship_destroy", 718.10940000, -238.01630000, 10.96840000, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
                PLAY_SOUND_FROM_POSITION( -1, "BOMB_DA_BASS_2_EXPLOSION_BIG", 718.10940000, -238.01630000, 10.96840000 );
                l_U2670 = l_U2660 + 500;
                l_U2671++;
            }
            break;
            case 8:
            if (l_U2660 > l_U2670)
            {
                TRIGGER_PTFX( "exp_ship_destroy", 723.40250000, -234.54750000, 10.96840000, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
                PLAY_SOUND_FROM_POSITION( -1, "BOMB_DA_BASS_2_EXPLOSION_BIG", 723.40250000, -234.54750000, 10.96840000 );
                l_U2670 = l_U2660 + 500;
                l_U2671++;
            }
            break;
            case 9:
            if (l_U2660 > l_U2670)
            {
                TRIGGER_PTFX( "exp_ship_destroy", 734.69320000, -228.41630000, 8.88850000, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
                PLAY_SOUND_FROM_POSITION( -1, "BOMB_DA_BASS_2_EXPLOSION_BIG", 734.69320000, -228.41630000, 8.88850000 );
                l_U2670 = l_U2660 + 500;
                l_U2671++;
            }
            break;
            case 10:
            if (l_U2660 > l_U2670)
            {
                TRIGGER_PTFX( "exp_ship_destroy", 733.84220000, -217.72500000, 10.96840000, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
                PLAY_SOUND_FROM_POSITION( -1, "BOMB_DA_BASS_2_EXPLOSION_BIG", 733.84220000, -217.72500000, 10.96840000 );
                l_U2670 = l_U2660 + 500;
                l_U2671++;
            }
            break;
            case 11:
            if (l_U2660 > l_U2670)
            {
                ADD_EXPLOSION( 731.71340000, -205.41400000, 10.96840000, 13, 4.00000000, 0, 0, 1.00000000 );
                PLAY_SOUND_FROM_POSITION( -1, "BOMB_DA_BASS_2_EXPLOSION_BIG", 731.71340000, -205.41400000, 10.96840000 );
                l_U2670 = l_U2660 + 500;
                l_U2671++;
            }
            break;
            case 12:
            if (l_U2660 > l_U2670)
            {
                TRIGGER_PTFX( "exp_ship_destroy", 743.32520000, -207.29850000, 8.87710000, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
                PLAY_SOUND_FROM_POSITION( -1, "BOMB_DA_BASS_2_EXPLOSION_BIG", 743.32520000, -207.29850000, 8.87710000 );
                l_U2670 = l_U2660 + 500;
                l_U2671++;
            }
            break;
            case 13:
            if (l_U2660 > l_U2670)
            {
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                sub_48383( 500 );
                l_U3380 = 3;
                l_U2670 = l_U2660 + 500;
                l_U2671++;
            }
            break;
        }
        break;
        case 3:
        if (l_U2660 > l_U2670)
        {
            if (IS_SCREEN_FADED_OUT())
            {
                SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
                if (NOT l_U2646)
                {
                    l_U2646 = 1;
                }
            }
            if (DOES_CAM_EXIST( l_U3381 ))
            {
                DESTROY_CAM( l_U3381 );
            }
            DISPLAY_HUD( 1 );
            DISPLAY_RADAR( 1 );
        }
        break;
    }
    return;
}

void sub_155555()
{
    if (l_U2655)
    {
        if (l_U1528._fU616 > l_U2660)
        {
            l_U3379 = (l_U1528._fU616 - l_U2660) / 1000;
            PRINT_WITH_NUMBER_NOW( "DET_TIME", l_U3379, -1, 0 );
            if (l_U3378 == 0)
            {
                if (l_U3379 < 45)
                {
                    if (PRELOAD_STREAM( "MP_COUNTDOWN" ))
                    {
                        l_U3378++;
                    }
                }
            }
            else if (l_U3378 == 1)
            {
                if ((l_U1528._fU616 - l_U2660) <= 28725)
                {
                    PLAY_STREAM_FRONTEND();
                    MUTE_POSITIONED_RADIO( 1 );
                    DISABLE_FRONTEND_RADIO();
                    l_U3378++;
                }
            }
        }
    }
    else if (l_U2656)
    {
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            l_U2655 = 1;
        }
    }
    return;
}

int sub_155888()
{
    if (((sub_155897()) || (sub_155975())) || (sub_156053()))
    {
        return 1;
    }
    return 0;
}

int sub_155897()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_14137( I ))
        {
            if (NOT l_U1863[I]._fU116)
            {
                return 0;
            }
        }
    }
    return 1;
}

int sub_155975()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_14137( I ))
        {
            if (l_U1863[I]._fU28 == 3)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_156053()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1863[I]._fU28 == 2)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_156167()
{
    if (sub_156176())
    {
        if (NETWORK_IS_SESSION_STARTED())
        {
            if (sub_76090( l_U1528._fU140, 1 ))
            {
                l_U1863[GET_PLAYER_ID()]._fU124 = 1;
            }
            if (sub_79027())
            {
                l_U2659 = 10;
            }
        }
        else if (NOT l_U1863[GET_PLAYER_ID()]._fU128)
        {
            l_U1863[GET_PLAYER_ID()]._fU128 = 1;
            sub_5169( GET_PLAYER_ID(), 0 );
        }
        else if (sub_79027())
        {
            l_U2659 = 10;
        };;;
    }
    else if (l_U1863[GET_PLAYER_ID()]._fU100)
    {
        if (sub_156445())
        {
            if (l_U1863[GET_PLAYER_ID()]._fU28 == 0)
            {
                l_U1863[GET_PLAYER_ID()]._fU28 = 4;
            }
        }
    }
    return;
}

int sub_156176()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1863[I]._fU28 == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int sub_156445()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_14137( I ))
        {
            if (l_U1863[I]._fU28 == 4)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_156593(unknown uParam0)
{
    l_U1312 = uParam0;
    return;
}

void sub_156727(unknown uParam0, unknown uParam1, unknown uParam2)
{
    l_U1338 = {uParam0};
    return;
}

void sub_156782()
{
    if (NOT l_U1863[GET_PLAYER_ID()]._fU36)
    {
        sub_126008();
    }
    return;
}

void sub_157137()
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
        sub_61307();
    }
    return;
}

void sub_157574()
{
    int I;

    if (sub_5520())
    {
        for ( I = 0; I < 16; I++ )
        {
            if (sub_14137( I ))
            {
                if (NOT l_U1528._fU756)
                {
                    if (l_U1863[I]._fU60)
                    {
                        l_U1528._fU756 = 1;
                        l_U1528._fU148 = I;
                    }
                }
                if (NOT l_U1528._fU760)
                {
                    if (l_U1863[I]._fU64)
                    {
                        l_U1528._fU760 = 1;
                        l_U1528._fU152 = I;
                    }
                }
            }
        }
        sub_5584();
    }
    if (sub_14137( GET_PLAYER_ID() ))
    {
        if (NOT l_U2643)
        {
            if (l_U1528._fU756)
            {
                sub_157812( l_U1528._fU148, -1, "OBJECTIVE_01" );
                l_U2643 = 1;
            }
        }
        if (NOT l_U2644)
        {
            if (l_U1528._fU760)
            {
                sub_157812( l_U1528._fU152, -1, "OBJECTIVE_01" );
                l_U2644 = 1;
            }
        }
        if (l_U2661 != l_U1528._fU156[GET_PLAYER_ID()])
        {
            sub_158166( l_U1528._fU156[GET_PLAYER_ID()] - l_U2661 );
            l_U2661 = l_U1528._fU156[GET_PLAYER_ID()];
        }
        if (l_U2659 >= 3)
        {
            sub_158641( ref l_U2556, 0, 0, -1 );
        }
        sub_161292();
        sub_162849( l_U1528._fU156[GET_PLAYER_ID()] );
        if (sub_162924())
        {
            sub_163185( ref l_U1528._fU156, ref l_U1528._fU156, 2, l_U2676, 1 );
        }
    }
    return;
}

void sub_157812(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar6 = sub_85265( uParam1 );
    StrCopy( ref l_U104[uVar6]._fU76._fU0, GET_PLAYER_NAME( sub_5180( uParam0 ) ), 64 );
    sub_71028( sub_5180( uParam0 ), ref l_U104[uVar6]._fU76._fU68, ref l_U104[uVar6]._fU76._fU72, ref l_U104[uVar6]._fU76._fU76 );
    StrCopy( ref l_U104[uVar6]._fU156._fU0, uParam2, 64 );
    l_U104[uVar6]._fU156._fU64 = 1;
    GET_HUD_COLOUR( 1, ref l_U104[uVar6]._fU156._fU68, ref l_U104[uVar6]._fU156._fU72, ref l_U104[uVar6]._fU156._fU76, ref uVar5 );
    sub_85713( uVar6 );
    return;
}

void sub_158166(int iParam0)
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
        sub_158275( ref cVar7, uVar3, uVar4, uVar5, -1, " ", uVar3, uVar4, uVar5 );
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
        sub_158275( ref cVar7, uVar3, uVar4, uVar5, -1, " ", uVar3, uVar4, uVar5 );
    }
    return;
}

void sub_158275(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    unknown uVar11;

    uVar11 = sub_85265( uParam4 );
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

void sub_158641(unknown uParam0, int iParam1, boolean bParam2, int iParam3)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U579[I] == -1)
            {
                sub_157812( I, -1, "JOINED" );
                l_U579[I] = 1;
            }
            if (l_U579[I] == 0)
            {
                l_U579[I] = 1;
            }
            if (IS_CHAR_FATALLY_INJURED( sub_5218( I ) ))
            {
                sub_158770( ref (uParam0^)[I] );
                if (l_U579[I] == 2)
                {
                    if (I == (FIND_NETWORK_KILLER_OF_PLAYER( I )))
                    {
                        sub_157812( I, -1, "DIED" );
                    }
                    else if (IS_NETWORK_PLAYER_ACTIVE( FIND_NETWORK_KILLER_OF_PLAYER( I ) ))
                    {
                        sub_158913( FIND_NETWORK_KILLER_OF_PLAYER( I ), I );
                    }
                    l_U579[I] = 3;
                }
            }
            else if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
            {
                if (IS_PLAYER_SCRIPT_CONTROL_ON( sub_5180( I ) ))
                {
                    if (sub_159474( I ))
                    {
                        sub_158770( ref (uParam0^)[I] );
                    }
                    else if (((((iParam1 == 0) || ((iParam1 != 4) AND (((GET_PLAYER_TEAM( sub_8714() )) == (GET_PLAYER_TEAM( sub_5180( I ) ))) AND ((GET_PLAYER_TEAM( sub_8714() )) > -1)))) || (((sub_7396() == 10) AND ((GET_PLAYER_TEAM( sub_8714() )) == 0)) AND (NOT bParam2))) || ((((sub_7396() == 10) AND ((GET_PLAYER_TEAM( sub_8714() )) == 0)) AND (bParam2)) AND (I == iParam3))) || (((iParam1 == 6) AND (bParam2)) AND (iParam3 == GET_PLAYER_ID())))
                    {
                        if (NOT (DOES_BLIP_EXIST( (uParam0^)[I] )))
                        {
                            (uParam0^)[I] = sub_159839( I );
                        }
                    }
                    else if ((iParam1 == 1) || ((iParam1 == 7) AND (iParam3 == GET_PLAYER_ID())))
                    {
                        if (sub_81956( sub_5471(), sub_5218( I ), l_U1371 ))
                        {
                            if (NOT (DOES_BLIP_EXIST( (uParam0^)[I] )))
                            {
                                (uParam0^)[I] = sub_159839( I );
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
                                sub_160245( ref l_U1372[I], 0, 255 );
                            }
                        }
                    }
                    else if (iParam1 == 2)
                    {
                        if (NOT (sub_81956( sub_5471(), sub_5218( I ), l_U1371 )))
                        {
                            if (NOT (DOES_BLIP_EXIST( (uParam0^)[I] )))
                            {
                                (uParam0^)[I] = sub_159839( I );
                                l_U1372[I] = 0;
                            }
                            if (DOES_BLIP_EXIST( (uParam0^)[I] ))
                            {
                                CHANGE_BLIP_ALPHA( (uParam0^)[I], l_U1372[I] );
                                l_U1372[I] += 25;
                                sub_160245( ref l_U1372[I], 0, 255 );
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
                                sub_160245( ref l_U1372[I], 0, 255 );
                            }
                        }
                    }
                    else if (iParam1 == 3)
                    {
                        if (sub_7396() == 16)
                        {
                            if (GET_HOST_ID() == I)
                            {
                                if (NOT (DOES_BLIP_EXIST( (uParam0^)[I] )))
                                {
                                    (uParam0^)[I] = sub_159839( I );
                                }
                            }
                            else
                            {
                                sub_158770( ref (uParam0^)[I] );
                            }
                        }
                        else if ((sub_160685( I )) == 1)
                        {
                            if (NOT (DOES_BLIP_EXIST( (uParam0^)[I] )))
                            {
                                (uParam0^)[I] = sub_159839( I );
                            }
                        }
                        else
                        {
                            sub_158770( ref (uParam0^)[I] );
                        }
                    }
                    else if (iParam1 == 4)
                    {
                        sub_158770( ref (uParam0^)[I] );
                    };;;;;;
                }
                else
                {
                    sub_158770( ref (uParam0^)[I] );
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
            sub_158770( ref (uParam0^)[I] );
            sub_157812( I, -1, "LEFTGAME" );
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
                    sub_157812( l_U1389, -1, "IS_PARTY_LEADER" );
                }
            }
        }
    }
    return;
}

void sub_158770(unknown uParam0)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        SET_ROUTE( (uParam0^), 0 );
        REMOVE_BLIP( (uParam0^) );
    }
    (uParam0^) = nil;
    return;
}

void sub_158913(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    char[16] cVar5;

    GET_DESTROYER_OF_NETWORK_ID( sub_27775( sub_5218( uParam1 ) ), ref uVar4 );
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
    ConcatString(ref cVar5, sub_12021( 0, 10 ), 16);
    REGISTER_KILL_IN_MULTIPLAYER_GAME( uParam0, uParam1, uVar4 );
    sub_118428( uParam0, ref cVar5, uParam1 );
    return;
}

int sub_159474(unknown uParam0)
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_5471() ))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_5218( uParam0 ) ))
            {
                if ((GET_PLAYER_TEAM( sub_5180( uParam0 ) )) == (GET_PLAYER_TEAM( sub_5180( GET_PLAYER_ID() ) )))
                {
                    if ((sub_159582( sub_5471() )) == (sub_159582( sub_5218( uParam0 ) )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_159582(unknown uParam0)
{
    unknown Result;

    if (IS_CHAR_IN_ANY_CAR( uParam0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref Result );
        return Result;
    }
    return nil;
}

void sub_159839(int iParam0)
{
    unknown Result;
    int iVar4;
    int iVar5;
    int iVar6;

    ADD_BLIP_FOR_CHAR( sub_5218( iParam0 ), ref Result );
    sub_71028( sub_5180( iParam0 ), ref iVar4, ref iVar5, ref iVar6 );
    CHANGE_BLIP_COLOUR( Result, (((iVar4 * 16777216) + (iVar5 * 65536)) + (iVar6 * 256)) + 255 );
    CHANGE_BLIP_PRIORITY( Result, 3 );
    CHANGE_BLIP_SCALE( Result, 0.90000000 );
    CHANGE_BLIP_NAME_FROM_ASCII( Result, GET_PLAYER_NAME( sub_5180( iParam0 ) ) );
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

void sub_160245(unknown uParam0, int iParam1, int iParam2)
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

void sub_160685(unknown uParam0)
{
    if (((sub_20476()) || (sub_20431())) AND ((GET_PLAYER_TEAM( sub_5180( uParam0 ) )) > -1))
    {
        return sub_160741( GET_PLAYER_TEAM( sub_5180( uParam0 ) ) );
    }
    return sub_7808( uParam0 );
}

int sub_160741(int iParam0)
{
    int I;
    int Result;

    if (sub_64015( iParam0 ))
    {
        for ( I = 0; I < 8; I++ )
        {
            if ((sub_49607( l_U1030[I] )) > 0)
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
            if ((sub_49607( l_U1030[I] )) > 0)
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

void sub_161292()
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

    if (sub_3218())
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
                iVar3 = sub_161622( (l_U104[iVar2]._fU4 - 512) - iVar5, 0, 255 );
                sub_50159( 0, -0.50000000, 1.50000000, 3, 1, 0, 0, 0, iVar3 );
                SET_TEXT_USE_UNDERSCORE( 1 );
                if (l_U104[iVar2]._fU76._fU64)
                {
                    uVar12 = sub_51630( ref l_U104[iVar2]._fU76._fU0, fVar13, fVar14, fVar15, fVar16, l_U104[iVar2]._fU76._fU68, l_U104[iVar2]._fU76._fU72, l_U104[iVar2]._fU76._fU76, iVar3, 2 );
                }
                else
                {
                    uVar12 = sub_52797( fVar13, fVar14, fVar15, fVar16, l_U104[iVar2]._fU76._fU68, l_U104[iVar2]._fU76._fU72, l_U104[iVar2]._fU76._fU76, iVar3, 2, ref l_U104[iVar2]._fU76._fU0 );
                }
                fVar13 += uVar12;
                if (l_U104[iVar2]._fU8 == -1)
                {
                    fVar13 += sub_72510( 0, -0.50000000, 1.50000000, 3, 1, fVar15, fVar16, " " );
                }
                if (l_U104[iVar2]._fU8 == -2)
                {
                    fVar13 += sub_72510( 0, -0.50000000, 1.50000000, 3, 1, fVar15, fVar16, " " );
                    sub_50159( 0, -0.50000000, 1.50000000, 3, 1, 0, 0, 0, iVar3 );
                    GET_HUD_COLOUR( 1, ref uVar6, ref uVar7, ref uVar8, ref uVar9 );
                    SET_TEXT_USE_UNDERSCORE( 1 );
                    fVar13 += sub_51630( ref l_U104[iVar2]._fU12, fVar13, fVar14, fVar15, fVar16, uVar6, uVar7, uVar8, iVar3, 2 );
                    SET_TEXT_USE_UNDERSCORE( 1 );
                    fVar13 += sub_72510( 0, -0.50000000, 1.50000000, 3, 1, fVar15, fVar16, " " );
                }
                else if ((l_U104[iVar2]._fU8 > -1) AND (l_U104[iVar2]._fU8 < 36))
                {
                    fVar13 += 0.03200000 / 2;
                    DRAW_SPRITE( l_U599[l_U104[iVar2]._fU8], fVar13, fVar14 + 0.00900000, 0.03200000, 0.03200000, 0.00000000, 255, 255, 255, iVar3 );
                    fVar13 += 0.03200000 / 2;
                }
                sub_50159( 0, -0.50000000, 1.50000000, 3, 1, 0, 0, 0, iVar3 );
                SET_TEXT_USE_UNDERSCORE( 1 );
                if (l_U104[iVar2]._fU156._fU64)
                {
                    sub_51630( ref l_U104[iVar2]._fU156._fU0, fVar13, fVar14, fVar15, fVar16, l_U104[iVar2]._fU156._fU68, l_U104[iVar2]._fU156._fU72, l_U104[iVar2]._fU156._fU76, iVar3, 2 );
                }
                else
                {
                    sub_52797( fVar13, fVar14, fVar15, fVar16, l_U104[iVar2]._fU156._fU68, l_U104[iVar2]._fU156._fU72, l_U104[iVar2]._fU156._fU76, iVar3, 2, ref l_U104[iVar2]._fU156._fU0 );
                }
                SET_TEXT_USE_UNDERSCORE( 0 );
                if (iVar3 < 255)
                {
                    iVar4++;
                }
                if (l_U104[iVar2]._fU4 <= iVar5)
                {
                    l_U661 -= -0.02600000;
                    sub_45681( ref l_U104[iVar2] );
                    sub_85386( ref l_U578, 8 );
                    iVar4--;
                }
                fVar14 -= -0.02600000;
                sub_85386( ref iVar2, 8 );
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

void sub_161622(int iParam0, int iParam1, int Result)
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

int sub_162849(int iParam0)
{
    int iVar3;

    DISPLAY_CASH( 1 );
    STORE_SCORE( sub_8714(), ref iVar3 );
    if (iVar3 != iParam0)
    {
        iParam0 -= iVar3;
        ADD_SCORE( sub_8714(), iParam0 );
        return 1;
    }
    return 0;
}

int sub_162924()
{
    int iVar2;

    GET_NETWORK_TIMER( ref iVar2 );
    if (NOT sub_162941())
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

int sub_162941()
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

void sub_163185(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
{
    if (NOT (IS_FONT_LOADED( 6 )))
    {
        LOAD_TEXT_FONT( 6 );
    }
    HIDE_HELP_TEXT_THIS_FRAME();
    if (((iParam2 == 1) || (iParam2 == 3)) || (iParam2 == 5))
    {
        sub_163244( uParam1 );
    }
    sub_47169( uParam0 );
    if ((sub_8343() + sub_20573()) > 22)
    {
        if (GET_IS_HIDEF())
        {
            sub_163755( iParam2, 0.07000000, 0.06400000, 0.31300000, 0.40600000, 0.02450000, 0.28000000, 0.39070000, 0.02300000, uParam3, uParam4 );
        }
        else
        {
            sub_163755( iParam2, 0.09000000, 0.08400000, 0.30000000, 0.44000000, 0.02450000, 0.30000000, 0.44000000, 0.02300000, uParam3, uParam4 );
        }
    }
    else if (GET_IS_HIDEF())
    {
        sub_163755( iParam2, 0.07000000, 0.06400000, 0.31300000, 0.46000000, 0.02700000, 0.28000000, 0.42000000, 0.02700000, uParam3, uParam4 );
    }
    else
    {
        sub_163755( iParam2, 0.09000000, 0.08400000, 0.30000000, 0.44000000, 0.02700000, 0.30000000, 0.44000000, 0.02700000, uParam3, uParam4 );
    }
    return;
}

void sub_163244(unknown uParam0)
{
    int I;

    if (NOT l_U1083)
    {
        sub_91721();
        l_U1083 = 1;
    }
    if ((uParam0^) <= 8)
    {
        for ( I = 0; I < (uParam0^); I++ )
        {
            if (l_U1039[I] != (uParam0^)[I])
            {
                l_U1039[I] = (uParam0^)[I];
                sub_163339( I );
            }
        }
    }
    return;
}

void sub_163339(unknown uParam0)
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
            sub_163339( uParam0 );
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
            sub_163339( uParam0 );
            return;
        }
    }
    return;
}

void sub_163755(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, int iParam9, boolean bParam10)
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
            fVar17 = sub_72510( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, GET_PLAYER_NAME( sub_5180( I ) ) );
            SET_TEXT_USE_UNDERSCORE( 0 );
            if (fVar17 > fVar18)
            {
                fVar18 = fVar17;
            }
            if ((iParam0 == 3) AND ((sub_70806( I )) > -1))
            {
                if ((l_U662[sub_7964()]._fU16 == 5) || (l_U662[sub_7964()]._fU16 == 6))
                {
                    if (sub_7396() == 1)
                    {
                        fVar17 = sub_163988( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, "CASH", l_U662[sub_7964()]._fU24[I] );
                    }
                    else
                    {
                        fVar17 = sub_163988( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, "CASH", (l_U1039[sub_70806( I )]) / (sub_62451( sub_70806( I ) )) );
                    }
                }
                else
                {
                    fVar17 = sub_164304( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, (l_U1039[sub_70806( I )]) / (sub_62451( sub_70806( I ) )) );
                }
                if (fVar17 > fVar19)
                {
                    fVar19 = fVar17;
                }
            }
            else if (iParam0 == 2)
            {
                if ((l_U662[sub_7964()]._fU16 == 5) || (l_U662[sub_7964()]._fU16 == 6))
                {
                    fVar17 = sub_163988( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, "CASH", l_U662[sub_7964()]._fU24[I] );
                }
                else
                {
                    fVar17 = sub_164304( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, l_U662[sub_7964()]._fU24[I] );
                }
                if (fVar17 > fVar19)
                {
                    fVar19 = fVar17;
                }
            }
            else if ((iParam0 == 4) || (iParam0 == 5))
            {
                fVar17 = sub_164741( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, sub_7808( I ) );
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
            if ((sub_49607( J )) > 0)
            {
                fVar17 = sub_165132( 6, 0.00000000, 1.00000000, 0, 0, uParam6, uParam7, sub_64363( J, 1 ) );
                if (fVar17 > fVar18)
                {
                    fVar18 = fVar17;
                }
                if (iParam0 == 3)
                {
                    if ((l_U662[sub_7964()]._fU16 == 5) || (l_U662[sub_7964()]._fU16 == 6))
                    {
                        fVar17 = sub_163988( 6, 0.00000000, 1.00000000, 0, 0, uParam6, uParam7, "CASH", l_U1039[J] );
                    }
                    else
                    {
                        fVar17 = sub_164304( 6, 0.00000000, 1.00000000, 0, 0, uParam6, uParam7, l_U1039[J] );
                    }
                    if (fVar17 > fVar19)
                    {
                        fVar19 = fVar17;
                    }
                }
                else if (iParam0 == 5)
                {
                    fVar17 = sub_164741( 6, 0.00000000, 1.00000000, 0, 0, uParam6, uParam7, sub_160741( J ) );
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
    ConcatString(ref cVar23, sub_7396(), 32);
    fVar17 = sub_165132( 6, 0.00000000, 1.00000000, 0, 0, 0.31000000, 0.45500000, ref cVar23 );
    if (fVar17 > fVar18)
    {
        fVar18 = fVar17;
    }
    if (iParam9 != 2147483647)
    {
        if (bParam10)
        {
            if (sub_12891())
            {
                fVar17 = sub_163988( 6, 0.00000000, 1.00000000, 0, 0, 0.31000000, 0.45500000, "LIVES_LEFT", iParam9 );
            }
            else
            {
                fVar17 = sub_163988( 6, 0.00000000, 1.00000000, 0, 0, 0.31000000, 0.45500000, "MAX_POINTS", iParam9 );
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
    ConcatString(ref cVar23, sub_7396(), 32);
    sub_50159( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    sub_51630( ref cVar23, uParam1 + 0.01000000, uParam2 + -0.00370000, 0.31000000, 0.45500000, 255, 255, 255, 255, 2 );
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
            sub_50159( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
            if (sub_12891())
            {
                sub_50456( "LIVES_LEFT", uParam1 + 0.01000000, (((((uParam2 + fVar22) + -0.00370000) + 0.03450000) + -0.01900000) + 0.03820000) + 0.00650000, 0.31000000, 0.45500000, 255, 255, 255, 255, 2, iParam9 );
            }
            else
            {
                sub_50456( "MAX_POINTS", uParam1 + 0.01000000, (((((uParam2 + fVar22) + -0.00370000) + 0.03450000) + -0.01900000) + 0.03820000) + 0.00650000, 0.31000000, 0.45500000, 255, 255, 255, 255, 2, iParam9 );
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
        iVar31[0] = sub_7964();
        iVar31[1] = 0;
    }
    if (((iParam0 == 1) || (iParam0 == 3)) || (iParam0 == 5))
    {
        sub_67878( ref iVar31, (uParam1 + 0.01000000) + fVar19, ((uParam2 + -0.00370000) + 0.03450000) + -0.01900000, uParam6, uParam7, uParam8, uParam3, uParam4, uParam5, iParam0, 24, 0, -1 );
    }
    else
    {
        sub_74042( ref iVar31, (uParam1 + 0.01000000) + fVar19, ((uParam2 + -0.00370000) + 0.03450000) + -0.01900000, uParam3, uParam4, uParam5, iParam0, 16, 0, -1 );
    }
    return;
}

void sub_163988(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
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

void sub_164304(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
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

void sub_164741(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7)
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

void sub_165132(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
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

void sub_167257()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if ((HOW_LONG_HAS_NETWORK_PLAYER_BEEN_DEAD_FOR( GET_PLAYER_ID() )) > 4000)
    {
        if (IS_SCREEN_FADED_OUT())
        {
            if (IS_CHAR_DEAD( sub_5471() ))
            {
                if ((sub_167318()) || (NOT l_U2654))
                {
                    if (sub_167477( ref l_U1863[GET_PLAYER_ID()]._fU8, l_U1528._fU440[GET_PLAYER_ID()], ref uVar2, ref uVar5 ))
                    {
                        sub_5169( GET_PLAYER_ID(), 0 );
                        RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), uVar2, uVar5 );
                        l_U2654 = 1;
                        FORCE_LOADING_SCREEN( 1 );
                        sub_87600( uVar2 );
                        FORCE_LOADING_SCREEN( 0 );
                        sub_5169( GET_PLAYER_ID(), 1 );
                        if (NOT (HAS_CHAR_GOT_WEAPON( sub_5471(), 3 )))
                        {
                            GIVE_WEAPON_TO_CHAR( sub_5471(), 3, 0, 0 );
                        }
                        if (NOT (HAS_CHAR_GOT_WEAPON( sub_5471(), 4 )))
                        {
                            GIVE_WEAPON_TO_CHAR( sub_5471(), 4, 1, 0 );
                        }
                        if (NOT (HAS_CHAR_GOT_WEAPON( sub_5471(), 14 )))
                        {
                            GIVE_WEAPON_TO_CHAR( sub_5471(), 14, 1000, 0 );
                        }
                        if (NOT (HAS_CHAR_GOT_WEAPON( sub_5471(), 12 )))
                        {
                            GIVE_WEAPON_TO_CHAR( sub_5471(), 12, 1500, 0 );
                        }
                        if (NOT (HAS_CHAR_GOT_WEAPON( sub_5471(), 16 )))
                        {
                            GIVE_WEAPON_TO_CHAR( sub_5471(), 16, 500, 0 );
                        }
                        SET_CURRENT_CHAR_WEAPON( sub_5471(), 14, 1 );
                        if (IS_SCREEN_FADED_OUT())
                        {
                            sub_47971( 500 );
                        }
                        if (NOT (IS_PLAYER_CONTROL_ON( sub_8714() )))
                        {
                            sub_5169( GET_PLAYER_ID(), 1 );
                        }
                        sub_167922();
                    }
                }
                else
                {
                    sub_168139();
                }
            }
        }
        else if (IS_SCREEN_FADED_IN())
        {
            sub_48383( 500 );
        }
    }
    return;
}

int sub_167318()
{
    switch (l_U1528._fU508[2])
    {
        case 0:
        case 1:
        case 2:
        if (l_U2654)
        {
            if (l_U2676 > 1)
            {
                l_U2676--;
                l_U2654 = 0;
                return 1;
            }
        }
        break;
    }
    return 0;
}

int sub_167477(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3)
{
    LOAD_ALL_PATH_NODES( 1 );
    if ((uParam0^) == 0)
    {
        if (iParam1 > 0)
        {
            if (LOAD_ALL_PATH_NODES( 1 ))
            {
                if (l_U1447)
                {
                    GET_SPAWN_COORDINATES_FOR_CAR_NODE( iParam1, sub_13383( -1, 0 ), uParam2, uParam3 );
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

void sub_167922()
{
    if (l_U2676 == 4)
    {
        CLEAR_PRINTS();
        PRINT_NOW( "COOP_LIVES_4", 5000, 1 );
    }
    else if (l_U2676 == 3)
    {
        CLEAR_PRINTS();
        PRINT_NOW( "COOP_LIVES_3", 5000, 1 );
    }
    else if (l_U2676 == 2)
    {
        CLEAR_PRINTS();
        PRINT_NOW( "COOP_LIVES_2", 5000, 1 );
    }
    else if (l_U2676 == 1)
    {
        CLEAR_PRINTS();
        PRINT_NOW( "COOP_LIVES_1", 5000, 1 );
    };;;;
    return;
}

void sub_168139()
{
    if (NOT (IS_CHAR_DEAD( sub_5471() )))
    {
        ;
    }
    else
    {
        N_312012851( sub_5471(), ref l_U2984._fU0, ref l_U2984._fU4, ref l_U2984._fU8 );
        GET_CLOSEST_CAR_NODE( l_U2984._fU0, l_U2984._fU4, l_U2984._fU8, ref l_U2990._fU0, ref l_U2990._fU4, ref l_U2990._fU8 );
        REQUEST_COLLISION_AT_POSN( l_U2990._fU0, l_U2990._fU4, l_U2990._fU8 );
        RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), l_U2990, 0.00000000 );
    }
    sub_45641();
    l_U1863[GET_PLAYER_ID()]._fU12 = -5;
    l_U1863[GET_PLAYER_ID()]._fU8 = 1;
    l_U1863[GET_PLAYER_ID()]._fU116 = 1;
    l_U1863[GET_PLAYER_ID()]._fU28 = 5;
    l_U2657 = 1;
    if (IS_SCREEN_FADED_OUT())
    {
        if (NOT IS_SCREEN_FADING_IN())
        {
            sub_47971( 500 );
        }
    }
    l_U2659 = 9;
    return;
}
