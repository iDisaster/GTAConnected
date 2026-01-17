void main()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown[16] uVar5;
    unknown uVar22;

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
    l_U1342 = -1;
    l_U1344 = 0;
    l_U1347 = 0;
    l_U1353 = {1313.00000000, 70.00000000, 42.00000000};
    l_U1356 = {882.00000000, -29.00000000, 29.00000000};
    l_U1359 = {865.70000000, -517.80000000, 16.50000000};
    l_U1362 = {-28.00000000, -463.00000000, 16.00000000};
    l_U1365 = {-1247.00000000, 1540.00000000, 26.00000000};
    l_U1368 = {-160.00000000, 591.00000000, 119.00000000};
    l_U1371 = {79, 64857, 15};
    l_U1374 = {561.97610000, 1391.62600000, 30.85500000};
    l_U1377 = {943.00000000, -493.00000000, 16.00000000};
    l_U1380 = {1367, 192, 28};
    l_U1383 = {-97.00000000, 878.00000000, 15.00000000};
    l_U1386 = {-962.00000000, 893.00000000, 14.00000000};
    l_U1389 = {597.00000000, 1400.00000000, 12.00000000};
    l_U1392 = {-126.00000000, 1500.00000000, 23.00000000};
    l_U1395 = {1283, 400, 23};
    l_U1398 = {-1141.60400000, -374.96160000, 4.08170000};
    SET_MISSION_FLAG( 1 );
    REGISTER_HOST_BROADCAST_VARIABLES( ref l_U1487, 57, -1 );
    REGISTER_CLIENT_BROADCAST_VARIABLES( ref l_U1544, 97, -1 );
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    SET_GLOBAL_INSTANCE_PRIORITY( 2 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        while (true)
        {
            PRINTSTRING( "freemode_cr is waiting for Simon's network_main script to terminate it\n" );
            WAIT( 0 );
        }
    }
    array(ref uVar5, 16);
    for ( I = 0; I < 11; I++ )
    {
        SWITCH_CAR_GENERATOR( g_U64964[I], 101 );
    }
    sub_799( "PLAYER", 1, 13, -1 );
    sub_799( "SCORE", 6, 16, 20 );
    ADD_SCENARIO_BLOCKING_AREA( -1184.82500000, -502.39840000, 0.40637700, -895.27470000, -320.98380000, 22.06192000 );
    ADD_SCENARIO_BLOCKING_AREA( 2047.14200000, 36.41048000, -8.88823000, 2852.10400000, 880.11010000, 36.31237000 );
    ADD_SCENARIO_BLOCKING_AREA( 64356, 470, 0, 64486, 630, 15 );
    ADD_SCENARIO_BLOCKING_AREA( 65121, 64537, 0, 65136, 64556, 15 );
    SET_MONEY_CARRIED_BY_ALL_NEW_PEDS( 0 );
    SET_PLAYERS_DROP_MONEY_IN_NETWORK_GAME( 0 );
    sub_1095( 0, 1, "_AUTOAIM", 2, 0 );
    sub_1095( 1, 6, "POLICE_ON_OFF", 2, 0 );
    sub_1095( 2, 9, "FRIENDLY_FIRE", 2, 0 );
    sub_1095( 3, 8, "DM_LOCATION", 12, 0 );
    sub_1095( 4, 1, "CS_WEAPONS", 12, 0 );
    sub_1095( 5, 1, "FM_DURATION", 8, 0 );
    sub_1095( 6, 1, "TRAFFIC", 4, 0 );
    sub_1095( 7, 1, "PEDESTRIANS", 4, 0 );
    sub_1095( 8, 1, "BLIPS_OPTION", 2, 0 );
    if (N_604003528())
    {
        sub_1095( 9, 6, "NAME_OPT", 2, 0 );
    }
    else
    {
        sub_1095( 9, 6, "NAME_OPT_PS3", 2, 0 );
    }
    sub_1095( 10, 6, "RETICULE_OPT", 2, 0 );
    sub_1095( 11, 1, "VOICE_OPT", 3, 0 );
    sub_1095( 12, 1, "SPAWN_DIST", 3, 0 );
    sub_1095( 13, 1, "SPAWN_TIME", 7, 0 );
    sub_1095( 14, 1, "TIME_OF_DAY", 5, 0 );
    sub_1095( 15, 1, "WEATHER", 6, 0 );
    sub_1095( 16, 16, "DESCRIPTION", 2, 0 );
    sub_1095( 17, 15, "RADIO_OPT", 19, 0 );
    if (NOT NETWORK_IS_TVT())
    {
        sub_1095( 18, 17, "KICK_PLAYER", 16, GET_PLAYER_ID() );
    }
    sub_1644( 2, 1, 0, -1 );
    sub_1695();
    if (sub_1728())
    {
        l_U1487._fU128[0] = sub_1785( 419, NETWORK_GET_GAME_MODE() );
        l_U1487._fU128[2] = sub_1785( 422, NETWORK_GET_GAME_MODE() );
        l_U1487._fU128[1] = sub_1785( 420, NETWORK_GET_GAME_MODE() );
        l_U1487._fU128[8] = sub_1953( 42, 0 );
        l_U1487._fU128[9] = sub_1953( 3, 1 );
        l_U1487._fU128[10] = sub_1953( 4, 1 );
        l_U1487._fU128[13] = sub_1953( 8, 1 );
        l_U1487._fU128[6] = sub_1953( 1, 2 );
        l_U1487._fU128[7] = sub_1953( 2, 1 );
        l_U1487._fU128[3] = sub_1953( 13, 0 );
        l_U1487._fU128[4] = sub_1953( 14, 0 );
        l_U1487._fU128[5] = sub_1953( 37, 0 );
        l_U1487._fU128[11] = sub_1953( 5, 0 );
        l_U1487._fU128[12] = sub_1953( 7, 0 );
        l_U1487._fU128[14] = sub_1953( 9, 0 );
        l_U1487._fU128[15] = sub_1953( 10, 0 );
        l_U1487._fU128[16] = sub_1953( 11, 0 );
        sub_2276();
    }
    sub_2301();
    LOAD_ALL_PATH_NODES( 1 );
    sub_3887();
    SWITCH_ARROW_ABOVE_BLIPPED_PICKUPS( 1 );
    REGISTER_SCRIPT_WITH_AUDIO( 1 );
    SET_ROCKET_LAUNCHER_FREEBIE_IN_HELI( 1 );
    USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR( 1 );
    if (NOT (IS_CHAR_DEAD( sub_4360() )))
    {
        sub_4422( GET_PLAYER_ID(), 0 );
    }
    sub_4724();
    l_U1544[GET_PLAYER_ID()]._fU16 = -1;
    sub_4775( 1 );
    l_U1544[GET_PLAYER_ID()]._fU20 = -1;
    l_U1544[GET_PLAYER_ID()]._fU4 = 1;
    SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
    SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
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
        GET_NETWORK_TIMER( ref l_U1641 );
        sub_4925();
        if (LOCAL_PLAYER_IS_READY_TO_START_PLAYING())
        {
            LAUNCH_LOCAL_PLAYER_IN_NETWORK_GAME();
        }
        if ((l_U1544[GET_PLAYER_ID()]._fU0 == 0) || (l_U1544[GET_PLAYER_ID()]._fU0 == 1))
        {
            if (l_U1487._fU0 == 2)
            {
                sub_24463();
            }
            sub_24531();
        }
        if (N_604003528())
        {
            sub_63052( l_U1487._fU4, 0, 0 );
        }
        sub_64209();
        sub_66621( 16, ref l_U1544[0]._fU8, ref l_U1544[1]._fU8, ref l_U1544[2]._fU8, ref l_U1544[3]._fU8, ref l_U1544[4]._fU8, ref l_U1544[5]._fU8, ref l_U1544[6]._fU8, ref l_U1544[7]._fU8, ref l_U1544[8]._fU8, ref l_U1544[9]._fU8, ref l_U1544[10]._fU8, ref l_U1544[11]._fU8, ref l_U1544[12]._fU8, ref l_U1544[13]._fU8, ref l_U1544[14]._fU8, ref l_U1544[15]._fU8 );
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (l_U1487._fU0 == 2)
            {
                if (((l_U1544[GET_PLAYER_ID()]._fU0 == 1) || ((HOW_LONG_HAS_NETWORK_PLAYER_BEEN_DEAD_FOR( GET_PLAYER_ID() )) > (sub_68647( l_U1487._fU128[13] )))) AND (NOT IS_PAUSE_MENU_ACTIVE()))
                {
                    if ((IS_SCREEN_FADED_OUT()) || (l_U1544[GET_PLAYER_ID()]._fU0 == 1))
                    {
                        if (sub_68829( ref l_U1642, ref l_U1645 ))
                        {
                            if (l_U1487._fU128[4] != 12)
                            {
                                REQUEST_MODEL( sub_69513( 3 ) );
                                REQUEST_MODEL( sub_69513( sub_69562( l_U1487._fU128[4], ref uVar3 ) ) );
                            }
                            sub_70070( ref uVar22 );
                            sub_4422( GET_PLAYER_ID(), 0 );
                            REQUEST_COLLISION_AT_POSN( l_U1642._fU0, l_U1642._fU4, l_U1642._fU8 );
                            RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), l_U1642, l_U1645 );
                            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4360() );
                            SET_CHAR_HEALTH( sub_4360(), 300 );
                            REMOVE_ALL_CHAR_WEAPONS( sub_4360() );
                            CLEAR_WANTED_LEVEL( sub_30185() );
                            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_4360(), 0 );
                            SET_GAME_CAM_HEADING( 0.00000000 );
                            if (l_U1544[GET_PLAYER_ID()]._fU0 == 1)
                            {
                                CLEAR_AREA( l_U1642._fU0, l_U1642._fU4, l_U1642._fU8, 200.00000000, 0 );
                            }
                            FORCE_LOADING_SCREEN( 1 );
                            sub_70353( l_U1642 );
                            FORCE_LOADING_SCREEN( 0 );
                            sub_70472( ref l_U1487._fU128 );
                            if (l_U1487._fU128[4] != 12)
                            {
                                GIVE_WEAPON_TO_CHAR( sub_4360(), 3, 1, 0 );
                                GIVE_WEAPON_TO_CHAR( sub_4360(), sub_69562( l_U1487._fU128[4], ref uVar3 ), uVar3, 0 );
                                MARK_MODEL_AS_NO_LONGER_NEEDED( sub_69513( 3 ) );
                                MARK_MODEL_AS_NO_LONGER_NEEDED( sub_69513( sub_69562( l_U1487._fU128[4], ref uVar3 ) ) );
                            }
                            if (IS_SCREEN_FADED_OUT())
                            {
                                sub_25617( 500 );
                            }
                            sub_4422( GET_PLAYER_ID(), 1 );
                            if (l_U1544[GET_PLAYER_ID()]._fU0 == 1)
                            {
                                l_U1544[GET_PLAYER_ID()]._fU0 = 2;
                            }
                        }
                    }
                    else if (IS_SCREEN_FADED_IN())
                    {
                        sub_25518( 500 );
                    }
                }
                if (l_U1544[GET_PLAYER_ID()]._fU0 == 2)
                {
                    sub_71559( 0 );
                    sub_73748( ref uVar5, l_U1487._fU128[8], 0, -1 );
                    sub_76813();
                    sub_77583();
                    if (sub_80720())
                    {
                        sub_80983( ref l_U564[2]._fU24, ref l_U564[2]._fU24, 0, 2147483647, 0 );
                    }
                    if (l_U1487._fU4 != 0)
                    {
                        sub_88256( l_U1487._fU4, 0 );
                    }
                    sub_88791();
                }
            }
            else if ((l_U1544[GET_PLAYER_ID()]._fU0 > 0) AND (l_U1544[GET_PLAYER_ID()]._fU0 < 3))
            {
                if (IS_PLAYER_SCRIPT_CONTROL_ON( sub_30185() ))
                {
                    sub_4422( GET_PLAYER_ID(), 0 );
                }
                sub_90351( ref uVar22 );
                if (NOT IS_SCREEN_FADED_IN())
                {
                    sub_25617( 0 );
                }
                CLEAR_PRINTS();
                CLEAR_HELP();
                SWITCH_OFF_WAYPOINT();
                sub_91246();
                if (IS_PAUSE_MENU_ACTIVE())
                {
                    DEACTIVATE_FRONTEND();
                }
                DISABLE_PAUSE_MENU( 1 );
                l_U1544[GET_PLAYER_ID()]._fU12 = -5;
                sub_91352();
                l_U1544[GET_PLAYER_ID()]._fU0 = 3;
            }
            if (l_U1544[GET_PLAYER_ID()]._fU0 == 3)
            {
                if (IS_SCREEN_FADED_IN())
                {
                    if (l_U1487._fU0 == 2)
                    {
                        sub_25518( 0 );
                    }
                    else
                    {
                        sub_25518( 500 );
                    }
                }
                l_U1544[GET_PLAYER_ID()]._fU0 = 4;
            }
            if (l_U1544[GET_PLAYER_ID()]._fU0 == 4)
            {
                if (IS_SCREEN_FADED_OUT())
                {
                    l_U1544[GET_PLAYER_ID()]._fU0 = 0;
                }
            }
            if (l_U1544[GET_PLAYER_ID()]._fU0 == 0)
            {
                if (l_U1487._fU0 == 2)
                {
                    ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
                    sub_91589();
                    sub_91688( ref uVar5 );
                    FLUSH_ALL_OUT_OF_DATE_RADAR_BLIPS_FROM_MISSION_CLEANUP_LIST();
                    sub_4724();
                    l_U1544[GET_PLAYER_ID()]._fU16 = -1;
                    sub_4775( 1 );
                    l_U1544[GET_PLAYER_ID()]._fU20 = -1;
                    if (l_U1487._fU128[1] == 0)
                    {
                        SET_MAX_WANTED_LEVEL( 0 );
                        SET_WANTED_MULTIPLIER( 0.00000000 );
                        SET_CREATE_RANDOM_COPS( 0 );
                        SET_DITCH_POLICE_MODELS( 1 );
                    }
                    else
                    {
                        SET_MAX_WANTED_LEVEL( 6 );
                        SET_WANTED_MULTIPLIER( 1.00000000 );
                        SET_CREATE_RANDOM_COPS( 1 );
                        SET_DITCH_POLICE_MODELS( 0 );
                    }
                    DISABLE_PLAYER_LOCKON( sub_30185(), l_U1487._fU128[0] == 0 );
                    ALLOW_LOCKON_TO_FRIENDLY_PLAYERS( sub_30185(), l_U1487._fU128[2] == 1 );
                    NETWORK_SET_FRIENDLY_FIRE_OPTION( l_U1487._fU128[2] == 1 );
                    DISPLAY_PLAYER_NAMES( l_U1487._fU128[9] == 1 );
                    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
                    sub_92058( l_U1487._fU128[7], 1065353216 );
                    sub_92327( l_U1487._fU128[6], 1065353216 );
                    NETWORK_SET_HEALTH_RETICULE_OPTION( l_U1487._fU128[10] == 1 );
                    sub_92602( l_U1487._fU128[11] );
                    if (NOT IS_THIS_MACHINE_THE_SERVER())
                    {
                        sub_7539();
                    }
                    REMOVE_ALL_PICKUPS_OF_TYPE( 23 );
                    sub_92821( l_U1487._fU128[3], l_U1487._fU128[4], l_U1487._fU84, 3 );
                    sub_134123();
                    sub_134204( l_U1487._fU128[3] );
                    if (IS_CHAR_MALE( sub_4360() ))
                    {
                        SET_VOICE_ID_FROM_HEAD_COMPONENT( sub_4360(), 0, 1 );
                    }
                    else
                    {
                        SET_VOICE_ID_FROM_HEAD_COMPONENT( sub_4360(), 0, 0 );
                    }
                    sub_24463();
                    l_U1544[GET_PLAYER_ID()]._fU0 = 1;
                    sub_134739( l_U1487._fU128[8], 42 );
                    sub_134739( l_U1487._fU128[9], 3 );
                    sub_134739( l_U1487._fU128[10], 4 );
                    sub_134739( l_U1487._fU128[13], 8 );
                    sub_134739( l_U1487._fU128[6], 1 );
                    sub_134739( l_U1487._fU128[7], 2 );
                    sub_134739( l_U1487._fU128[3], 13 );
                    sub_134739( l_U1487._fU128[4], 14 );
                    sub_134739( l_U1487._fU128[5], 37 );
                    sub_134739( l_U1487._fU128[11], 5 );
                    sub_134739( l_U1487._fU128[12], 7 );
                    sub_134739( l_U1487._fU128[14], 9 );
                    sub_134739( l_U1487._fU128[15], 10 );
                    sub_134739( l_U1487._fU128[16], 11 );
                    sub_135027();
                }
                else
                {
                    sub_71559( 1 );
                    if (NOT (sub_11077( sub_4360(), sub_7739(), 5.00000000 )))
                    {
                        ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 0 );
                        sub_135123( sub_4360(), sub_7739() );
                    }
                }
            }
        }
    }
    return;
}

void sub_799(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_1095(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref l_U989[uParam0]._fU0, uParam2, 16 );
    l_U989[uParam0]._fU16 = uParam1;
    l_U989[uParam0]._fU24 = uParam3;
    l_U989[uParam0]._fU20 = uParam4;
    l_U989[uParam0]._fU28 = uParam4;
    return;
}

void sub_1644(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U1195 = uParam0;
    l_U1197 = uParam1;
    l_U1194 = uParam2;
    l_U1196 = uParam3;
    l_U1198 = 1;
    return;
}

void sub_1695()
{
    RESTORE_SCRIPT_ARRAY_FROM_SCRATCHPAD( ref l_U1426, 61, 2, 2 );
    return;
}

int sub_1728()
{
    if (IS_THIS_MACHINE_THE_SERVER())
    {
        SET_THIS_MACHINE_RUNNING_SERVER_SCRIPT( 1 );
        return 1;
    }
    return 0;
}

void sub_1785(unknown uParam0, unknown uParam1)
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

void sub_1953(unknown uParam0, unknown Result)
{
    if (IS_BIT_SET( l_U1426[uParam0], 0 ))
    {
        return GET_BITS_IN_RANGE( l_U1426[uParam0], 1, 31 );
    }
    return Result;
}

void sub_2276()
{
    SET_THIS_MACHINE_RUNNING_SERVER_SCRIPT( 0 );
    return;
}

int sub_2301()
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

void sub_3887()
{
    CREATE_OBJECT_NO_OFFSET( 1845915705, -281.06440000, -283.70000000, 15.87640000, ref l_U1348, 0 );
    SET_OBJECT_HEADING( l_U1348, 90.00000000 );
    FREEZE_OBJECT_POSITION( l_U1348, 1 );
    CREATE_OBJECT_NO_OFFSET( -631715616, -281.06440000, -280.70640000, 15.87640000, ref l_U1349, 0 );
    SET_OBJECT_HEADING( l_U1349, 90.00000000 );
    FREEZE_OBJECT_POSITION( l_U1349, 1 );
    CREATE_OBJECT_NO_OFFSET( 639246688, 864.32000000, -121.64500000, 7.40000000, ref l_U1350, 0 );
    SET_OBJECT_HEADING( l_U1350, 90.00000000 );
    SET_OBJECT_DYNAMIC( l_U1350, 0 );
    FREEZE_OBJECT_POSITION( l_U1350, 1 );
    CREATE_OBJECT_NO_OFFSET( 1312423945, -123.72640000, 772.02260000, 35.05130000, ref l_U1351, 0 );
    SET_OBJECT_COORDINATES( l_U1351, -123.72640000, 772.02260000, 35.05130000 );
    SET_OBJECT_HEADING( l_U1351, 0.00000000 );
    SET_OBJECT_DYNAMIC( l_U1351, 0 );
    FREEZE_OBJECT_POSITION( l_U1351, 1 );
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "coop_swatasslt" )) == 0)
    {
        CREATE_OBJECT_NO_OFFSET( 223915744, 2394.49600000, 175.89900000, 5.85800000, ref l_U1352, 0 );
        SET_OBJECT_ROTATION( l_U1352, 0.00000000, 235.00000000, 240.37500000 );
        SET_OBJECT_DYNAMIC( l_U1352, 0 );
        FREEZE_OBJECT_POSITION( l_U1352, 1 );
    }
    return;
}

void sub_4360()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4422(unknown uParam0, boolean bParam1)
{
    SET_PLAYER_CONTROL_FOR_NETWORK( sub_4433( uParam0 ), bParam1, 0 );
    SET_CHAR_VISIBLE( sub_4471( uParam0 ), bParam1 );
    if (bParam1)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_4471( uParam0 ) )))
        {
            SET_CHAR_COLLISION( sub_4471( uParam0 ), 1 );
        }
        FREEZE_CHAR_POSITION( sub_4471( uParam0 ), 0 );
        SET_CHAR_NEVER_TARGETTED( sub_4471( uParam0 ), 0 );
        SET_PLAYER_INVINCIBLE( sub_4433( uParam0 ), 0 );
    }
    else
    {
        SET_CHAR_COLLISION( sub_4471( uParam0 ), 0 );
        FREEZE_CHAR_POSITION( sub_4471( uParam0 ), 1 );
        SET_CHAR_NEVER_TARGETTED( sub_4471( uParam0 ), 1 );
        SET_PLAYER_INVINCIBLE( sub_4433( uParam0 ), 1 );
        REMOVE_PTFX_FROM_PED( sub_4471( uParam0 ) );
        if (NOT (IS_CHAR_FATALLY_INJURED( sub_4471( uParam0 ) )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4471( uParam0 ) );
        }
    }
    return;
}

void sub_4433(unknown uParam0)
{
    return CONVERT_INT_TO_PLAYERINDEX( uParam0 );
}

void sub_4471(unknown uParam0)
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( uParam0 ), ref Result );
    return Result;
}

void sub_4724()
{
    g_U18._fU660 = -1;
    g_U18._fU664 = 1;
    return;
}

void sub_4775(unknown uParam0)
{
    g_U18._fU668 = -1;
    g_U18._fU672 = uParam0;
    return;
}

void sub_4925()
{
    if (sub_1728())
    {
        sub_4944();
        sub_5008();
        sub_2276();
    }
    return;
}

void sub_4944()
{
    int I;
    unknown uVar3;

    for ( I = 0; I < 16; I++ )
    {
        if (PLAYER_WANTS_TO_JOIN_NETWORK_GAME( I ))
        {
            TELL_NET_PLAYER_TO_START_PLAYING( I, 0 );
        }
    }
    return;
}

void sub_5008()
{
    int I;

    switch (l_U1487._fU0)
    {
        case 0:
        l_U1487._fU0 = 1;
        break;
        case 1:
        if (LOAD_ALL_PATH_NODES( 1 ))
        {
            if (NOT NETWORK_IS_OPERATION_PENDING())
            {
                if (N_1242010017())
                {
                    sub_5114();
                    if (sub_5651())
                    {
                        for ( I = 0; I < 16; I++ )
                        {
                            l_U1487._fU12[I] = 0;
                        }
                        for ( I = 0; I < 8; I++ )
                        {
                            l_U1487._fU92[I] = -1;
                        }
                        if (l_U1487._fU128[5] == 0)
                        {
                            l_U1487._fU4 = 0;
                            l_U1487._fU216 = -1;
                        }
                        else
                        {
                            l_U1487._fU4 = l_U1641 + sub_6575();
                        }
                        l_U1487._fU8 = l_U1641;
                        sub_6772( l_U1487._fU128[14] );
                        sub_6980( l_U1487._fU128[15] );
                        SET_SYNC_WEATHER_AND_GAME_TIME( 1 );
                        sub_7147();
                        l_U1487._fU84 = sub_6840( 0, 2147483647 );
                        sub_8538();
                        if (l_U1487._fU128[3] > 4)
                        {
                            sub_11459( l_U1487._fU88, ref l_U1487._fU92, 20.00000000, 0, 1140457472 );
                        }
                        else
                        {
                            sub_11459( l_U1487._fU88, ref l_U1487._fU92, 100.00000000, 0, 1140457472 );
                        }
                        l_U1487._fU0 = 2;
                    }
                }
            }
        }
        break;
        case 2:
        if (N_1242010017())
        {
            if (l_U1487._fU4 != 0)
            {
                if (l_U1641 > (l_U1487._fU4 - 20000))
                {
                    NETWORK_ADVERTISE_SESSION( 0 );
                }
            }
        }
        if (sub_23655())
        {
            NETWORK_ADVERTISE_SESSION( 0 );
            l_U1487._fU0 = 3;
        }
        else
        {
            sub_8538();
            sub_5114();
            sub_23832();
            if (l_U1487._fU128[3] > 4)
            {
                sub_8358( sub_7739() );
                sub_7573( 0, l_U1487._fU80 );
            }
            else
            {
                sub_7548();
            }
            if (l_U1641 > (l_U1487._fU8 + 30000))
            {
                sub_7573( 0, l_U1487._fU80 );
            }
            else if (l_U1487._fU128[3] > 4)
            {
                sub_11459( l_U1487._fU88, ref l_U1487._fU92, 20.00000000, 0, 1140457472 );
            }
            else
            {
                sub_11459( l_U1487._fU88, ref l_U1487._fU92, 100.00000000, 0, 1140457472 );
            }
            sub_7573( 1, l_U1487._fU80 );;
        }
        break;
        case 3:
        sub_5114();
        if (l_U1544[GET_PLAYER_ID()]._fU12 > -5)
        {
            SET_SYNC_WEATHER_AND_GAME_TIME( 0 );
            l_U1487._fU0 = 1;
            if (NOT N_1242010017())
            {
                NETWORK_ADVERTISE_SESSION( 1 );
            }
        }
        break;
    }
    return;
}

void sub_5114()
{
    int I;
    int[16] iVar3;

    array(ref iVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            iVar3[I] = l_U1544[I]._fU20;
        }
        else
        {
            iVar3[I] = -1;
        }
    }
    sub_5194( ref iVar3 );
    return;
}

void sub_5194(unknown uParam0)
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
    if ((sub_5371() > 2) AND (NOT NETWORK_IS_TVT()))
    {
        if (((sub_5371() > 3) AND (iVar4[iVar21] > (sub_5371() / 2))) || ((sub_5371() == 3) AND (iVar4[iVar21] == 2)))
        {
            PRINTSTRING( "SCRIPT: Kick Player " );
            PRINTINT( iVar21 );
            PRINTSTRING( " with votes " );
            PRINTINT( iVar4[iVar21] );
            PRINTSTRING( " needed " );
            PRINTINT( sub_5371() / 2 );
            PRINTNL();
            if (IS_NETWORK_PLAYER_ACTIVE( iVar21 ))
            {
                NETWORK_KICK_PLAYER( iVar21 );
            }
        }
    }
    return;
}

void sub_5371()
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

int sub_5651()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1544[I]._fU12;
    }
    if (sub_5713( ref uVar3, ref l_U1487._fU220 ))
    {
        return 1;
    }
    return 0;
}

int sub_5713(unknown uParam0, unknown uParam1)
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
    if (NOT (sub_5791( ref uVar10 )))
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
        if (sub_5847() != 16)
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

int sub_5791(unknown uParam0)
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
    if (sub_5847() == 16)
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
    if ((sub_5847() == 5) || (sub_5847() == 4))
    {
        if (iVar4 < 4)
        {
            return 0;
        }
    }
    if ((sub_5953()) || (sub_5998()))
    {
        if (sub_5998())
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
        if (sub_6095() < 2)
        {
            (uParam0^) = 1;
            return 0;
        }
    }
    return 1;
}

void sub_5847()
{
    if (l_U0 == -1)
    {
        l_U0 = NETWORK_GET_GAME_MODE();
    }
    return l_U0;
}

int sub_5953()
{
    int iVar2;

    iVar2 = NETWORK_GET_GAME_MODE();
    if ((iVar2 == 10) || (iVar2 == 12))
    {
        return 1;
    }
    return 0;
}

int sub_5998()
{
    int iVar2;

    iVar2 = NETWORK_GET_GAME_MODE();
    if (((iVar2 == 1) || (iVar2 == 3)) || (iVar2 == 4))
    {
        return 1;
    }
    return 0;
}

void sub_6095()
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

int sub_6575()
{
    switch (l_U1487._fU128[5])
    {
        case 0: return 0;
        case 1: return 300000;
        case 2: return 600000;
        case 3: return 900000;
        case 4: return 1200000;
        case 5: return 1800000;
        case 6: return 2700000;
        case 7: return 3600000;
    }
    return 3600000;
}

void sub_6772(unknown uParam0)
{
    switch (uParam0)
    {
        case -1:
        SET_TIME_OF_DAY( sub_6840( 0, 24 ), 0 );
        break;
        case 0:
        SET_TIME_OF_DAY( sub_6840( 0, 24 ), 0 );
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

void sub_6840(unknown uParam0, unknown Result)
{
    GENERATE_RANDOM_INT_IN_RANGE( uParam0, Result, ref Result );
    return Result;
}

void sub_6980(unknown uParam0)
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

void sub_7147()
{
    switch (l_U1487._fU128[3])
    {
        case 0:
        l_U1487._fU80 = sub_6840( 0, 8 );
        if (l_U1487._fU80 == 0)
        {
            l_U1487._fU88 = 0;
        }
        else if (l_U1487._fU80 < 3)
        {
            l_U1487._fU88 = 1;
        }
        else if (l_U1487._fU80 < 6)
        {
            l_U1487._fU88 = 2;
        }
        else
        {
            l_U1487._fU88 = 3;
        };;;
        break;
        case 1:
        l_U1487._fU80 = sub_6840( 6, 8 );
        l_U1487._fU88 = 3;
        break;
        case 2:
        l_U1487._fU80 = sub_6840( 3, 6 );
        l_U1487._fU88 = 2;
        break;
        case 3:
        l_U1487._fU80 = 0;
        l_U1487._fU88 = 0;
        break;
        case 4:
        l_U1487._fU80 = sub_6840( 1, 3 );
        l_U1487._fU88 = 1;
        break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        l_U1487._fU88 = l_U1487._fU128[3];
        break;
    }
    sub_7539();
    return;
}

void sub_7539()
{
    sub_7548();
    sub_7573( 0, 0 );
    switch (l_U1487._fU128[3])
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        sub_7573( 1, l_U1487._fU80 );
        break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        sub_8358( sub_7739() );
        break;
    }
    sub_8396( 1 );
    CLEAR_NETWORK_RESTART_NODE_GROUP_LIST();
    if (l_U1487._fU128[3] == 0)
    {
        ADD_GROUP_TO_NETWORK_RESTART_NODE_GROUP_LIST( 1 );
        ADD_GROUP_TO_NETWORK_RESTART_NODE_GROUP_LIST( 2 );
        ADD_GROUP_TO_NETWORK_RESTART_NODE_GROUP_LIST( 3 );
        ADD_GROUP_TO_NETWORK_RESTART_NODE_GROUP_LIST( 4 );
    }
    else
    {
        ADD_GROUP_TO_NETWORK_RESTART_NODE_GROUP_LIST( l_U1487._fU128[3] );
    }
    return;
}

void sub_7548()
{
    l_U1323 = 0;
    return;
}

void sub_7573(unknown uParam0, unknown uParam1)
{
    l_U1317 = uParam0;
    l_U1318 = uParam1;
    return;
}

vector sub_7739()
{
    switch (l_U1487._fU128[3])
    {
        case 1: return sub_7856( 7 );
        case 4: return sub_7856( 2 );
        case 2: return sub_7856( 4 );
        case 3: return sub_7856( 0 );
        case 5: return vector( 2.26612400, -404.56550000, -1818.12300000);
        case 6: return vector( 2.05782100, -382.54860000, -1148.45300000);
        case 7: return vector( 3.60405600, 436.00610000, -1093.52800000);
        case 8: return vector( 3.83770000, -857.82720000, -585.55850000);
        case 9: return vector( 9.97847300, 162.86130000, 470.71620000);
        case 10: return vector( 1.81432500, 911.43810000, 572.83610000);
        case 11: return vector( 5.81200000, 415.64580000, 2525.66100000);
    }
    return vector( 3.60405600, 436.00610000, -1093.52800000);
}

vector sub_7856(int iParam0)
{
    if (iParam0 == -1)
    {
        iParam0 = sub_6840( 0, 8 );
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

void sub_8358(unknown uParam0, unknown uParam1, unknown uParam2)
{
    l_U1324 = {uParam0};
    l_U1323 = 1;
    return;
}

void sub_8396(unknown uParam0)
{
    l_U1320 = uParam0;
    return;
}

void sub_8538()
{
    int I;
    unknown[16] uVar3;
    float fVar20;
    float fVar21;
    unknown[16] uVar22;

    array(ref uVar3, 16);
    array(ref uVar22, 16);
    uVar22[0] = nil;
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1544[I]._fU4;
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            uVar22[I] = sub_8614( sub_4471( I ) );
        }
    }
    if (l_U1487._fU128[3] > 4)
    {
        if (l_U1487._fU128[12] == 0)
        {
            fVar20 = 200.00000000;
            fVar21 = 60.00000000;
        }
        else if (l_U1487._fU128[12] == 1)
        {
            fVar20 = 350.00000000;
            fVar21 = 90.00000000;
        }
        else
        {
            fVar20 = 450.00000000;
            fVar21 = 120.00000000;
        }
    }
    else if (l_U1487._fU128[12] == 0)
    {
        fVar20 = 250.00000000;
        fVar21 = 70.00000000;
    }
    else if (l_U1487._fU128[12] == 1)
    {
        fVar20 = 400.00000000;
        fVar21 = 120.00000000;
    }
    else
    {
        fVar20 = 500.00000000;
        fVar21 = 150.00000000;
    };;;
    sub_8892( ref uVar3, ref l_U1487._fU12, fVar20, ref uVar22, fVar21 );
    return;
}

void sub_8614(unknown uParam0)
{
    unknown Result;

    GET_NETWORK_ID_FROM_PED( uParam0, ref Result );
    return Result;
}

void sub_8892(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
                    sub_9091( uParam1, sub_9008( sub_4471( I ) ), uParam2, uParam4, uParam3, I );
                }
                else if (l_U1323)
                {
                    sub_9091( uParam1, l_U1324, uParam2, uParam4, uParam3, I );
                }
                else if (l_U1322)
                {
                    sub_9091( uParam1, sub_10968( -1, 1 ), uParam2, uParam4, uParam3, I );
                }
                else
                {
                    sub_9091( uParam1, sub_10968( GET_PLAYER_TEAM( sub_4433( I ) ), 1 ), uParam2, uParam4, uParam3, I );
                };;;
            }
        }
    }
    return;
}

void sub_9008(unknown uParam0)
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

int sub_9091(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
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
            if (sub_9144( (uParam6^)[I] ))
            {
                ADD_SPAWN_BLOCKING_AREA( sub_9668( (uParam6^)[I] ), uParam5 );
            }
        }
        while (iVar12 < 127)
        {
            if (NOT l_U1319)
            {
                sub_9863( ref uParam1, uParam4 + l_U1328 );
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
                if (sub_10476())
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
            else if (sub_10476())
            {
                if (GET_SORTED_NETWORK_RESTART_NODE( uParam1, uParam4 + l_U1328, ref uVar14, ref uVar11, uParam7, 0, uParam5 ))
                {
                    bVar13 = true;
                }
            }
            else if (sub_5847() == 7)
            {
                if (GET_SORTED_NETWORK_RESTART_NODE( uParam1, uParam4 + l_U1328, ref uVar14, ref uVar11, uParam7, 9, uParam5 ))
                {
                    bVar13 = true;
                }
            }
            else if (sub_5847() == 16)
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

int sub_9144(unknown uParam0)
{
    int iVar3;

    if (DOES_PED_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        if (IS_CHAR_DEAD( sub_9169( uParam0 ) ))
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
        if (IS_VEH_DRIVEABLE( sub_9244( uParam0 ) ))
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
        if (IS_OBJECT_IN_WATER( sub_9319( uParam0 ) ))
        {
            return 0;
        }
        else
        {
            iVar3 = sub_9405( sub_9376( sub_9319( uParam0 ) ) );
            if (((iVar3 == 0) || (((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( sub_9319( uParam0 ), 1 )) < 0.30000000) AND (iVar3 < 500))) || (((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( sub_9319( uParam0 ), 0 )) < 0.30000000) AND (iVar3 < 500)))
            {
                return 0;
            }
            else if (IS_OBJECT_ATTACHED( sub_9319( uParam0 ) ))
            {
                if (DOES_VEHICLE_EXIST( GET_CAR_OBJECT_IS_ATTACHED_TO( sub_9319( uParam0 ) ) ))
                {
                    if (IS_VEH_DRIVEABLE( GET_CAR_OBJECT_IS_ATTACHED_TO( sub_9319( uParam0 ) ) ))
                    {
                        return 1;
                    }
                    else if (IS_CAR_IN_WATER( GET_CAR_OBJECT_IS_ATTACHED_TO( sub_9319( uParam0 ) ) ))
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

void sub_9169(unknown uParam0)
{
    unknown Result;

    GET_PED_FROM_NETWORK_ID( uParam0, ref Result );
    return Result;
}

void sub_9244(unknown uParam0)
{
    unknown Result;

    GET_VEHICLE_FROM_NETWORK_ID( uParam0, ref Result );
    return Result;
}

void sub_9319(unknown uParam0)
{
    unknown Result;

    GET_OBJECT_FROM_NETWORK_ID( uParam0, ref Result );
    return Result;
}

void sub_9376(unknown uParam0)
{
    unknown Result;

    GET_OBJECT_HEALTH( uParam0, ref Result );
    return Result;
}

void sub_9405(unknown uParam0)
{
    return FLOOR( uParam0 );
}

void sub_9668(unknown uParam0)
{
    unknown Result;
    unknown uVar4;
    unknown uVar5;

    if (DOES_PED_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        GET_CHAR_COORDINATES( sub_9169( uParam0 ), ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        GET_DEAD_CAR_COORDINATES( sub_9244( uParam0 ), ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else if (DOES_OBJECT_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        GET_OBJECT_COORDINATES( sub_9319( uParam0 ), ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    };;;
    return Result;
}

void sub_9863(int iParam0, float fParam1)
{
    if (fParam1 > 500.00000000)
    {
        (iParam0^) = {sub_9889( (iParam0^) )};
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

void sub_9889(vector vParam0)
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
        vVar12 = {sub_7856( I )};
        uVar9 = {vParam0 - vVar12};
        fVar8 = ((uVar9._fU0 * uVar9._fU0) + (uVar9._fU4 * uVar9._fU4)) + (uVar9._fU8 * uVar9._fU8);
        if (fVar7 > fVar8)
        {
            iVar6 = I;
            fVar7 = fVar8;
        }
    }
    return sub_7856( iVar6 );
}

int sub_10476()
{
    int iVar2;

    iVar2 = NETWORK_GET_GAME_MODE();
    if ((((iVar2 == 13) || (iVar2 == 14)) || (iVar2 == 15)) || (iVar2 == 16))
    {
        return 1;
    }
    return 0;
}

vector sub_10968(int iParam0, unknown uParam1)
{
    int I;
    int iVar5;
    int iVar6;
    vector vVar7;

    if ((l_U1317) AND (uParam1))
    {
        return sub_7856( l_U1318 );
    }
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (IS_PLAYER_CONTROL_ON( sub_4433( I ) ))
            {
                if (NOT (sub_11077( sub_4471( I ), -2000.00000000, -2000.00000000, 250.00000000, 50.00000000 )))
                {
                    iVar6++;
                    if (((GET_PLAYER_TEAM( sub_4433( I ) )) == iParam0) || (iParam0 == -1))
                    {
                        vVar7 = {vVar7 + (sub_9008( sub_4471( I ) ))};
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
            return sub_10968( -1, 0 );
        }
        else
        {
            return sub_7856( -1 );
        }
    }
    return vVar7 / (TO_FLOAT( iVar5 ));
}

int sub_11077(unknown uParam0, vector vParam1, float fParam4)
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

void sub_11459(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4)
{
    int iVar7;
    int I;
    int iVar9;
    boolean bVar10;

    for ( I = 7; I >= 0; I += -1 )
    {
        if ((uParam1^)[I] == -1)
        {
            if ((GET_NO_OF_PLAYERS_IN_TEAM( I )) > 0)
            {
                iVar9 = sub_6840( 0, sub_11517( uParam0 ) );
                iVar7 = iVar9;
                sub_11717( ref iVar7, sub_11517( uParam0 ) );
                while (iVar7 != iVar9)
                {
                    bVar10 = true;
                    if (sub_11792( uParam0, uParam1, iVar7, uParam2 - l_U1330 ))
                    {
                        sub_11717( ref iVar7, sub_11517( uParam0 ) );
                        bVar10 = false;
                    }
                    else if (bParam3)
                    {
                        if ((NOT (sub_11792( uParam0, uParam1, iVar7, uParam4 + l_U1331 ))) AND ((sub_23317( uParam1 )) > 0))
                        {
                            sub_11717( ref iVar7, sub_11517( uParam0 ) );
                            bVar10 = false;
                        }
                    }
                    if (bVar10)
                    {
                        l_U1330 = uParam2;
                        l_U1331 = 0.00000000;
                        (uParam1^)[I] = iVar7;
                        iVar7 = iVar9;
                    }
                }
                if (NOT bVar10)
                {
                    if (l_U1330 < (uParam2 - 10.00000000))
                    {
                        l_U1330 += 10.00000000;
                        l_U1331 += 10.00000000;
                    }
                }
            }
        }
    }
    return;
}

int sub_11517(unknown uParam0)
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

int sub_11717(unknown uParam0, int iParam1)
{
    (uParam0^)++;
    if ((uParam0^) >= iParam1)
    {
        (uParam0^) = 0;
        return 1;
    }
    return 0;
}

int sub_11792(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int I;

    for ( I = 0; I < 8; I++ )
    {
        if ((uParam1^)[I] > -1)
        {
            if ((GET_NO_OF_PLAYERS_IN_TEAM( I )) > 0)
            {
                if (sub_23149( sub_11847( uParam0, uParam2 ), sub_11847( uParam0, (uParam1^)[I] ), uParam3 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

vector sub_11847(unknown uParam0, int iParam1)
{
    switch (uParam0)
    {
        case 0:
        if (iParam1 == -1)
        {
            iParam1 = sub_6840( 0, 25 );
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
            iParam1 = sub_6840( 0, 93 );
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
            iParam1 = sub_6840( 0, 83 );
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
            iParam1 = sub_6840( 0, 117 );
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
            iParam1 = sub_6840( 0, 17 );
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
            iParam1 = sub_6840( 0, 8 );
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
            iParam1 = sub_6840( 0, 13 );
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
            iParam1 = sub_6840( 0, 11 );
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
            iParam1 = sub_6840( 0, 9 );
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
            iParam1 = sub_6840( 0, 13 );
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
            iParam1 = sub_6840( 0, 13 );
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

int sub_23149(vector vParam0, vector vParam3, float fParam6)
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

void sub_23317(unknown uParam0)
{
    int Result;
    int I;

    for ( I = 0; I < 8; I++ )
    {
        if ((uParam0^)[I] > -1)
        {
            if ((GET_NO_OF_PLAYERS_IN_TEAM( I )) > 0)
            {
                Result++;
            }
        }
    }
    return Result;
}

int sub_23655()
{
    if (l_U1487._fU128[5] == 0)
    {
        if (l_U1487._fU4 == 0)
        {
            if (l_U1487._fU216 != -1)
            {
                l_U1487._fU4 = l_U1641 + 10000;
                if (N_1242010017())
                {
                    NETWORK_ADVERTISE_SESSION( 0 );
                }
            }
        }
    }
    if (l_U1487._fU4 != 0)
    {
        if (l_U1487._fU4 < l_U1641)
        {
            return 1;
        }
    }
    return 0;
}

void sub_23832()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1544[I]._fU16;
    }
    sub_23894( ref l_U1487._fU216, ref uVar3 );
    return;
}

void sub_23894(unknown uParam0, unknown uParam1)
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
    if ((iVar5[iVar23] > (sub_5371() / 2)) AND (iVar5[iVar23] > 0))
    {
        (uParam0^) = iVar23;
    }
    else
    {
        (uParam0^) = -1;
    }
    return;
}

void sub_24463()
{
    PRINT_BIG( "STARTINGGAME", 50, 2 );
    if (IS_PAUSE_MENU_ACTIVE())
    {
        DEACTIVATE_FRONTEND();
    }
    l_U1188 = 1;
    return;
}

void sub_24531()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1544[I]._fU12;
    }
    sub_24619( 9, ref uVar3, ref l_U1487._fU128, ref l_U1487._fU216, ref l_U1487._fU224, l_U1487._fU220 );
    l_U1544[GET_PLAYER_ID()]._fU12 = uVar3[GET_PLAYER_ID()];
    return;
}

void sub_24619(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
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
        sub_24698();
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
                l_U988 = sub_24877( sub_5847() );
                (uParam1^)[GET_PLAYER_ID()] = -7;
                if (NOT sub_25090())
                {
                    if (sub_1728())
                    {
                        l_U1272 = 0;
                        if ((uParam3^) != -1)
                        {
                            if ((NOT (sub_25154( sub_24877( (uParam3^) ) ))) || (GET_NUMBER_OF_PLAYERS() <= 4))
                            {
                                l_U988 = sub_24877( (uParam3^) );
                                (uParam1^)[GET_PLAYER_ID()] = -8;
                                l_U1272 = 1;
                            }
                        }
                        sub_2276();
                    }
                }
            }
        }
    }
    if (sub_1728())
    {
        sub_25262( uParam1, uParam4 );
        sub_2276();
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
    sub_2301();
    DISABLE_PAUSE_MENU( 1 );
    HIDE_HUD_AND_RADAR_THIS_FRAME();
    if (l_U1188)
    {
        if (NOT IS_SCREEN_FADED_OUT())
        {
            sub_25518( 0 );
        }
        l_U1188 = 0;
        return;
    }
    else if (IS_SCREEN_FADED_OUT())
    {
        sub_25617( 0 );
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
            l_U989[sub_25772( 15 )]._fU20 = l_U1269._fU0;
        }
        else if ((l_U989[sub_25772( 15 )]._fU20) != 18)
        {
            l_U989[sub_25772( 15 )]._fU20 = 18;
        }
    }
    ENABLE_FRONTEND_RADIO();
    if (IS_GAME_IN_CONTROL_OF_MUSIC())
    {
        l_U989[sub_25772( 15 )]._fU24 = 19;
    }
    else
    {
        l_U989[sub_25772( 15 )]._fU24 = 0;
    }
    if (NOT l_U984)
    {
        sub_25956();
        l_U984 = 1;
    }
    if (iParam0 == 10)
    {
        if (NOT l_U985)
        {
            sub_26111();
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
                if (sub_5371() < 3)
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
            sub_26592( iParam5, 1 );
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
                if (sub_27596())
                {
                    USE_MASK( 0 );
                    l_U1191 = 0;
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    (uParam1^)[GET_PLAYER_ID()] = -3;
                }
                else if ((sub_27797()) AND (sub_27915()))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    ACTIVATE_NETWORK_SETTINGS_MENU();
                }
                else if (sub_28097())
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    DISPLAY_FRONTEND_MAP_BLIPS( 0 );
                    ACTIVATE_FRONTEND();
                }
                else if (sub_28253())
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
                else if ((sub_28697()) AND ((NOT NETWORK_IS_TVT()) || (sub_28835())))
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
                        l_U988 = sub_24877( sub_5847() );
                        (uParam1^)[GET_PLAYER_ID()] = -4;
                    }
                }
                else if ((sub_29011()) AND (((NETWORK_GET_NUM_PLAYERS_MET() > 0) AND (N_604003528())) || (((NOT NETWORK_IS_TVT()) AND (NETWORK_GET_FRIEND_COUNT() > 0)) AND (NOT N_604003528()))))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1201 = 1;
                }
                else if (sub_29237())
                {
                    if (sub_29352( ref l_U1177, J, 0 ))
                    {
                        if (NOT sub_10476())
                        {
                            if ((l_U1177 == 0) || ((sub_29920()) AND (l_U1177 < 4)))
                            {
                                l_U989[sub_25772( 16 )]._fU20 = 0;
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
                        if (sub_30134())
                        {
                            if (sub_30371())
                            {
                                if ((GET_PLAYER_TEAM( sub_30185() )) > -1)
                                {
                                    if (sub_5998())
                                    {
                                        uVar15 = GET_PLAYER_TEAM( sub_30185() );
                                        sub_30635( ref uVar15, 8 );
                                        SET_PLAYER_TEAM( sub_30185(), uVar15 );
                                    }
                                    else if ((GET_PLAYER_TEAM( sub_30185() )) == 0)
                                    {
                                        SET_PLAYER_TEAM( sub_30185(), 1 );
                                    }
                                    else if ((GET_PLAYER_TEAM( sub_30185() )) == 1)
                                    {
                                        SET_PLAYER_TEAM( sub_30185(), 0 );
                                    };;;
                                }
                            }
                            else if (sub_30777())
                            {
                                if (sub_5998())
                                {
                                    uVar15 = GET_PLAYER_TEAM( sub_30185() );
                                    sub_11717( ref uVar15, 8 );
                                    SET_PLAYER_TEAM( sub_30185(), uVar15 );
                                }
                                else if ((GET_PLAYER_TEAM( sub_30185() )) == 0)
                                {
                                    SET_PLAYER_TEAM( sub_30185(), 1 );
                                }
                                else if ((GET_PLAYER_TEAM( sub_30185() )) == 1)
                                {
                                    SET_PLAYER_TEAM( sub_30185(), 0 );
                                };;;
                            }
                        }
                    }
                    else if (l_U989[l_U1177]._fU16 == 17)
                    {
                        if (sub_5371() < 3)
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
                        if (sub_30371())
                        {
                            iVar16 = l_U989[l_U1177]._fU20;
                            sub_11717( ref iVar16, 16 );
                            while (NOT (IS_NETWORK_PLAYER_ACTIVE( iVar16 )))
                            {
                                sub_11717( ref iVar16, 16 );
                            }
                            l_U989[l_U1177]._fU20 = iVar16;
                            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
                        }
                        else if (sub_30777())
                        {
                            iVar16 = l_U989[l_U1177]._fU20;
                            sub_30635( ref iVar16, 16 );
                            while (NOT (IS_NETWORK_PLAYER_ACTIVE( iVar16 )))
                            {
                                sub_30635( ref iVar16, 16 );
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
                            if (NOT (sub_31669( l_U1177 )))
                            {
                                if (sub_31764( ref l_U989[l_U1177]._fU20, l_U989[l_U1177]._fU24 ))
                                {
                                    if (l_U989[l_U1177]._fU16 == 15)
                                    {
                                        sub_32142( l_U989[l_U1177]._fU20 );
                                    }
                                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
                                }
                            }
                        }
                    };;;
                }
                else if (J > 6)
                {
                    sub_29352( ref l_U1178, (J - 6) + 1, 0 );
                };;;;;;;;
                if ((uParam1^)[GET_PLAYER_ID()] != -4)
                {
                    sub_32395( 0 );
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
                    if (sub_27797())
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
                    if (sub_33674( l_U1177 ))
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
                sub_32395( 0 );
                INIT_FRONTEND_HELPER_TEXT();
                DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
                if (sub_27596())
                {
                    (uParam1^)[GET_PLAYER_ID()] = -3;
                }
            }
            else if ((uParam1^)[GET_PLAYER_ID()] == 2)
            {
                l_U989[sub_25772( 16 )]._fU20 = 1;
                sub_32395( 0 );
                if (NOT l_U1188)
                {
                    if (J > 6)
                    {
                        if (sub_29352( ref l_U1178, (J - 6) + 1, 0 ))
                        {
                            l_U1177 = l_U1178;
                        }
                    }
                    GET_NETWORK_TIMER( ref iVar26 );
                    if ((sub_27596()) AND (l_U1181 < (iVar26 + 500)))
                    {
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        l_U989[sub_25772( 16 )]._fU20 = 0;
                        l_U1193 = 1;
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                    else if (((sub_29011()) AND (NETWORK_GET_NUM_PLAYERS_MET() > 0)) AND (N_604003528()))
                    {
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        l_U1201 = 1;
                    }
                    else
                    {
                        sub_26628( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                        GET_FRONTEND_DESIGN_VALUE( 23, ref uVar34, ref fVar35 );
                        GET_FRONTEND_DESIGN_VALUE( 24, ref fVar36, ref fVar33 );
                        GET_HUD_COLOUR( 49, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                        if (NOT (sub_5791( ref bVar28 )))
                        {
                            if (bVar31)
                            {
                                if (NOT bVar32)
                                {
                                    if (bVar28)
                                    {
                                        sub_32837( "NEEDMORETEAMS", uVar34, fVar35, fVar36 + 0.04050000, fVar33, 255, 255, 255, 255, 2 );
                                    }
                                    else
                                    {
                                        sub_32837( "NEEDMOREPLAYERS", uVar34, fVar35, fVar36 + 0.04050000, fVar33, 255, 255, 255, 255, 2 );
                                    }
                                    bVar32 = true;
                                }
                            }
                            else if (bVar28)
                            {
                                sub_32837( "NEEDMORETEAMS", uVar34, fVar35, fVar36, fVar33, 255, 255, 255, 255, 2 );
                            }
                            else
                            {
                                sub_32837( "NEEDMOREPLAYERS", uVar34, fVar35, fVar36, fVar33, 255, 255, 255, 255, 2 );
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
                if (sub_27596())
                {
                    sub_32395( 1 );
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1193 = 1;
                    (uParam1^)[GET_PLAYER_ID()] = 0;
                }
                else if (sub_28253())
                {
                    sub_32406( 1 );
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1193 = 1;
                    (uParam1^)[GET_PLAYER_ID()] = -2;
                }
                else
                {
                    sub_29352( ref l_U988, 14, 0 );
                }
            }
            else if (((uParam1^)[GET_PLAYER_ID()] == -7) || ((uParam1^)[GET_PLAYER_ID()] == -8))
            {
                if (((l_U1271) AND (NOT NETWORK_IS_TVT())) AND (NOT sub_25090()))
                {
                    if (sub_5371() < 3)
                    {
                        l_U989[sub_25772( 17 )]._fU20 = GET_PLAYER_ID();
                        l_U1271 = 0;
                    }
                    else if ((l_U989[sub_25772( 17 )]._fU20) != -1)
                    {
                        if ((l_U989[sub_25772( 17 )]._fU20) != GET_PLAYER_ID())
                        {
                            if (NOT (IS_NETWORK_PLAYER_ACTIVE( l_U989[sub_25772( 17 )]._fU20 )))
                            {
                                l_U989[sub_25772( 17 )]._fU20 = GET_PLAYER_ID();
                            }
                        }
                    }
                    if (sub_27596())
                    {
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        l_U1271 = 0;
                    }
                    else if (sub_30371())
                    {
                        iVar16 = l_U989[sub_25772( 17 )]._fU20;
                        sub_11717( ref iVar16, 16 );
                        while (NOT (IS_NETWORK_PLAYER_ACTIVE( iVar16 )))
                        {
                            sub_11717( ref iVar16, 16 );
                        }
                        l_U989[sub_25772( 17 )]._fU20 = iVar16;
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
                    }
                    else if (sub_30777())
                    {
                        iVar16 = l_U989[sub_25772( 17 )]._fU20;
                        sub_30635( ref iVar16, 16 );
                        while (NOT (IS_NETWORK_PLAYER_ACTIVE( iVar16 )))
                        {
                            sub_30635( ref iVar16, 16 );
                        }
                        l_U989[sub_25772( 17 )]._fU20 = iVar16;
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
                    }
                    else if (sub_28253())
                    {
                        if ((l_U1158 != (l_U989[sub_25772( 17 )]._fU20)) AND ((l_U989[sub_25772( 17 )]._fU20) != GET_PLAYER_ID()))
                        {
                            l_U1158 = l_U989[sub_25772( 17 )]._fU20;
                            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        }
                    };;;;
                    if ((l_U989[sub_25772( 17 )]._fU20) == GET_PLAYER_ID())
                    {
                        l_U1158 = GET_PLAYER_ID();
                    }
                }
                else if (sub_27596())
                {
                    sub_32406( 1 );
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
                else if ((((sub_27915()) AND (sub_5371() > 2)) AND (NOT NETWORK_IS_TVT())) AND (NOT sub_25090()))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1271 = 1;
                }
                else if ((IS_THIS_MACHINE_THE_SERVER()) AND (NOT sub_25090()))
                {
                    if ((uParam1^)[GET_PLAYER_ID()] == -7)
                    {
                        if (sub_28253())
                        {
                            if (NOT l_U1272)
                            {
                                if ((NOT (sub_25154( l_U988 ))) || (GET_NUMBER_OF_PLAYERS() <= 4))
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
                        else if (sub_36167( ref l_U988, 14 ))
                        {
                            if (GET_NUMBER_OF_PLAYERS() > 4)
                            {
                                while (sub_25154( l_U988 ))
                                {
                                    l_U988--;
                                }
                            }
                        }
                        else if (sub_36510( ref l_U988, 14 ))
                        {
                            if (GET_NUMBER_OF_PLAYERS() > 4)
                            {
                                while (sub_25154( l_U988 ))
                                {
                                    l_U988++;
                                }
                            }
                        }
                        (uParam3^) = sub_36852( l_U988 );;;
                    }
                    else if ((uParam1^)[GET_PLAYER_ID()] == -8)
                    {
                        if ((sub_25154( l_U988 )) AND (GET_NUMBER_OF_PLAYERS() > 4))
                        {
                            (uParam1^)[GET_PLAYER_ID()] = -7;
                        }
                    }
                }
                else if (sub_25090())
                {
                    if (sub_28253())
                    {
                        if (NOT NETWORK_LEAVE_GAME_PENDING())
                        {
                            sub_37165( ref uVar38, sub_36852( l_U988 ), -1 );
                            if ((NETWORK_IS_GAME_RANKED()) AND ((sub_36852( l_U988 )) != 16))
                            {
                                uVar38._fU0[1] = 1;
                            }
                            N_1187265313( ref uVar38 );
                            sub_37503();
                        }
                    }
                    else
                    {
                        sub_29352( ref l_U988, 14, 0 );
                    }
                }
                else if ((uParam3^) == -1)
                {
                    l_U988 = sub_24877( sub_5847() );
                }
                else
                {
                    l_U988 = sub_24877( (uParam3^) );
                };;;;;;
                if (GET_HOST_ID() > -1)
                {
                    if ((uParam1^)[GET_HOST_ID()] > -5)
                    {
                        sub_32406( 1 );
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                }
            }
            else if (((((uParam1^)[GET_PLAYER_ID()] == -3) || ((uParam1^)[GET_PLAYER_ID()] == -6)) || ((uParam1^)[GET_PLAYER_ID()] == -2)) || ((uParam1^)[GET_PLAYER_ID()] == -1))
            {
                if (sub_27596())
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1193 = 1;
                    if ((uParam1^)[GET_PLAYER_ID()] == -6)
                    {
                        sub_32406( 1 );
                        (uParam1^)[GET_PLAYER_ID()] = -7;
                    }
                    else if ((uParam1^)[GET_PLAYER_ID()] == -2)
                    {
                        sub_32406( 1 );
                        (uParam1^)[GET_PLAYER_ID()] = -4;
                    }
                    else
                    {
                        sub_32395( 1 );
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                }
                else if (sub_28253())
                {
                    if (NOT NETWORK_LEAVE_GAME_PENDING())
                    {
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        UNPAUSE_GAME();
                        if (NOT IS_SCREEN_FADED_OUT())
                        {
                            sub_25518( 0 );
                        }
                        if ((uParam1^)[GET_PLAYER_ID()] == -1)
                        {
                            if (NETWORK_IS_RENDEZVOUS_HOST())
                            {
                                sub_38028();
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
                                sub_37165( ref uVar38, sub_36852( l_U988 ), -1 );
                                if ((NETWORK_IS_GAME_RANKED()) AND ((sub_36852( l_U988 )) != 16))
                                {
                                    uVar38._fU0[1] = 1;
                                }
                                N_1187265313( ref uVar38 );
                                sub_37503();
                            }
                        }
                        else
                        {
                            sub_38186();
                        }
                    }
                }
                if (((((uParam1^)[GET_PLAYER_ID()] == -3) || ((uParam1^)[GET_PLAYER_ID()] == -6)) || ((uParam1^)[GET_PLAYER_ID()] == -2)) || ((uParam1^)[GET_PLAYER_ID()] == -1))
                {
                    SET_WIDESCREEN_FORMAT( 0 );
                    DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                    SET_WIDESCREEN_FORMAT( 1 );
                    sub_26628( 0, sub_32777(), sub_38331(), 0, 0, 0, 0, 0, 255 );
                    GET_FRONTEND_DESIGN_VALUE( 106, ref uVar34, ref fVar35 );
                    GET_FRONTEND_DESIGN_VALUE( 107, ref fVar36, ref fVar33 );
                    GET_HUD_COLOUR( 49, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                    if ((uParam1^)[GET_PLAYER_ID()] == -1)
                    {
                        sub_32837( "RETURNTOPARTYM", uVar34, fVar35, fVar36, fVar33, iVar17, iVar18, iVar19, 255, 1 );
                    }
                    else if ((uParam1^)[GET_PLAYER_ID()] == -2)
                    {
                        sub_32837( "CHOOSENEWGAME", uVar34, fVar35, fVar36, fVar33, iVar17, iVar18, iVar19, 255, 1 );
                    }
                    else
                    {
                        sub_32837( "WANT_TO_LEAVE", uVar34, fVar35, fVar36, fVar33, iVar17, iVar18, iVar19, 255, 1 );
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
                            sub_38845( ref l_U1186 );
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
    if (sub_1728())
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
        sub_2276();
    }
    if (NOT NETWORK_IS_TVT())
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (sub_5998())
            {
                if ((GET_PLAYER_TEAM( sub_30185() )) == -1)
                {
                    SET_PLAYER_TEAM( sub_30185(), sub_39281() );
                    if ((uParam1^)[GET_PLAYER_ID()] == 2)
                    {
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                }
            }
            else if (sub_5953())
            {
                if ((GET_PLAYER_TEAM( sub_30185() )) == -1)
                {
                    SET_PLAYER_TEAM( sub_30185(), sub_39795( 2 ) );
                    if ((uParam1^)[GET_PLAYER_ID()] == 2)
                    {
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                }
                else if (sub_6095() < 2)
                {
                    if ((sub_30223( GET_PLAYER_TEAM( sub_30185() ) )) > 1)
                    {
                        if (sub_40209( GET_PLAYER_ID() ))
                        {
                            SET_PLAYER_TEAM( sub_30185(), sub_39795( 2 ) );
                            if ((uParam1^)[GET_PLAYER_ID()] == 2)
                            {
                                (uParam1^)[GET_PLAYER_ID()] = 0;
                            }
                        }
                    }
                }
            }
            else if (sub_10476())
            {
                if ((GET_PLAYER_TEAM( sub_30185() )) != 0)
                {
                    SET_PLAYER_TEAM( sub_30185(), 0 );
                }
            }
            else if ((GET_PLAYER_TEAM( sub_30185() )) != -1)
            {
                SET_PLAYER_TEAM( sub_30185(), -1 );
                if ((uParam1^)[GET_PLAYER_ID()] == 2)
                {
                    (uParam1^)[GET_PLAYER_ID()] = 0;
                }
            };;;;
        }
    }
    if (((((uParam1^)[GET_PLAYER_ID()] == -3) || ((uParam1^)[GET_PLAYER_ID()] == -6)) || ((uParam1^)[GET_PLAYER_ID()] == -2)) || ((uParam1^)[GET_PLAYER_ID()] == -1))
    {
        sub_40555();
        return;
    }
    else if (IS_PAUSE_MENU_ACTIVE())
    {
        sub_32395( 1 );
        sub_40555();
        return;
    }
    else if (l_U1201)
    {
        if (N_604003528())
        {
            if (sub_40874())
            {
                l_U1201 = 0;
            }
            sub_40555();
            return;
        }
        else if (sub_42139( bVar31, bVar32 ))
        {
            l_U1201 = 0;
        }
        sub_40555();
        return;;
    }
    else if (sub_27797())
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (GET_PLAYERSETTINGS_MODEL_CHOICE() != (sub_45053( sub_4360() )))
            {
                if (sub_45095( GET_PLAYERSETTINGS_MODEL_CHOICE() ))
                {
                    CHANGE_PLAYER_MODEL( sub_30185(), GET_PLAYERSETTINGS_MODEL_CHOICE() );
                    SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE( sub_30185() );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( GET_PLAYERSETTINGS_MODEL_CHOICE() );
                    sub_4422( GET_PLAYER_ID(), 0 );
                }
            }
            else if (HAS_GAMER_CHANGED_NETWORK_MODEL_SETTINGS())
            {
                SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE( sub_30185() );
            }
        }
    };;;;
    if ((sub_25090()) || (NOT N_604003528()))
    {
        if (NOT bVar31)
        {
            if (((uParam1^)[GET_PLAYER_ID()] == 0) || ((uParam1^)[GET_PLAYER_ID()] == 2))
            {
                iVar16 = GET_LOCAL_PLAYER_MP_CASH();
                if (iVar16 > 0)
                {
                    SET_WIDESCREEN_FORMAT( 2 );
                    sub_26628( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                    GET_FRONTEND_DESIGN_VALUE( 23, ref uVar34, ref fVar35 );
                    GET_FRONTEND_DESIGN_VALUE( 24, ref fVar36, ref fVar33 );
                    GET_HUD_COLOUR( 49, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                    sub_26925( "CASH", uVar34, fVar35, fVar36, fVar33, 255, 255, 255, 255, 2, iVar16 );
                    SET_WIDESCREEN_FORMAT( 3 );
                }
            }
        }
    }
    if ((uParam1^)[GET_PLAYER_ID()] == -4)
    {
        sub_32406( 1 );
        sub_26628( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
        sub_32837( "NEWGAME", sub_32777(), 0.08500000, sub_45525( 113 ), sub_45558( 113 ), 255, 255, 255, 255, 2 );
        INIT_FRONTEND_HELPER_TEXT();
        DRAW_FRONTEND_HELPER_TEXT( "CANCEL", "INPUT_F_CANCEL", 0 );
        DRAW_FRONTEND_HELPER_TEXT( "CONFIRM", "INPUT_F_ACCEPT", 0 );
        DRAW_FRONTEND_HELPER_TEXT( "MODE", "PAD_DPAD_UPDOWN", 0 );
        sub_45717( 0 );
        SET_WIDESCREEN_FORMAT( 2 );
        if (GET_IS_WIDESCREEN())
        {
            sub_26628( 0, sub_32777(), sub_38331() * 1.20000000, 0, 0, 0, 0, 0, 255 );
        }
        else
        {
            sub_26628( 0, sub_32777(), sub_38331(), 0, 0, 0, 0, 0, 255 );
        }
        GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
        if (GET_IS_WIDESCREEN())
        {
            sub_32837( "CHOOSENEWGAME", sub_32777() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
        }
        else
        {
            sub_32837( "CHOOSENEWGAME", sub_32777() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
        }
    }
    else if (((uParam1^)[GET_PLAYER_ID()] == -7) || ((uParam1^)[GET_PLAYER_ID()] == -8))
    {
        sub_32406( 1 );
        sub_26628( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
        if (sub_25090())
        {
            sub_32837( "NEXTGAME", sub_32777(), 0.11900000, sub_45525( 113 ), sub_45558( 113 ), 255, 255, 255, 255, 2 );
        }
        else
        {
            sub_32837( "NEXTGAME", sub_32777(), 0.08500000, sub_45525( 113 ), sub_45558( 113 ), 255, 255, 255, 255, 2 );
        }
        SET_WIDESCREEN_FORMAT( 3 );
        INIT_FRONTEND_HELPER_TEXT();
        if (((l_U1271) AND (NOT NETWORK_IS_TVT())) AND (NOT sub_25090()))
        {
            if ((l_U1158 != (l_U989[sub_25772( 17 )]._fU20)) AND ((l_U989[sub_25772( 17 )]._fU20) != GET_PLAYER_ID()))
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
            sub_32837( ref l_U989[sub_25772( 17 )]._fU0, fVar37 - fVar33, 0.76300000, 0.31500000, 0.43000000, 255, 255, 255, 255, 3 );
            sub_26628( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
            if ((((l_U989[sub_25772( 17 )]._fU20) > -1) AND ((l_U989[sub_25772( 17 )]._fU20) != GET_PLAYER_ID())) AND (IS_NETWORK_PLAYER_ACTIVE( l_U989[sub_25772( 17 )]._fU20 )))
            {
                sub_47263( sub_4433( l_U989[sub_25772( 17 )]._fU20 ), ref iVar21, ref iVar22, ref iVar23 );
                if (l_U4)
                {
                    if (N_604003528())
                    {
                        fVar36 = sub_41553( fVar37 + fVar33, 0.76300000, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, "WWWWWWWWWWWWWWW" );
                    }
                    else
                    {
                        fVar36 = sub_41553( fVar37 + fVar33, 0.76300000, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, "WWWWWWWWWWWWWWWW" );
                    }
                }
                else
                {
                    SET_TEXT_SCALE( 0.31500000, 0.43000000 );
                    SET_TEXT_USE_UNDERSCORE( 1 );
                    fVar49 = GET_STRING_WIDTH_WITH_STRING( "STRING", GET_PLAYER_NAME( sub_4433( l_U989[sub_25772( 17 )]._fU20 ) ) );
                    fVar50 = sub_38331() - (fVar37 + fVar33);
                    if (fVar49 <= fVar50)
                    {
                        fVar36 = sub_41553( fVar37 + fVar33, 0.76300000, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_4433( l_U989[sub_25772( 17 )]._fU20 ) ) );
                    }
                    else
                    {
                        fVar36 = sub_41553( fVar37 + fVar33, 0.76300000, (fVar50 * 0.31500000) / fVar49, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_4433( l_U989[sub_25772( 17 )]._fU20 ) ) );
                    }
                    SET_TEXT_USE_UNDERSCORE( 0 );
                }
            }
            else
            {
                fVar36 = sub_32837( "NONE", fVar37 + fVar33, 0.76300000, 0.31500000, 0.43000000, 255, 255, 255, 255, 2 );
            }
            DRAW_SPRITE( l_U501[0], ((fVar37 + fVar33) + 0.01300000) + fVar36, 0.76300000 + 0.01300000, 0.01400000, 0.02000000, 0.00000000, 255, 255, 255, 255 );
        }
        else if (sub_25090())
        {
            DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
            DRAW_FRONTEND_HELPER_TEXT( "CONFIRM", "INPUT_F_ACCEPT", 0 );
            sub_45717( 0 );
        }
        else if ((IS_THIS_MACHINE_THE_SERVER()) AND ((uParam1^)[GET_PLAYER_ID()] == -7))
        {
            DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
            DRAW_FRONTEND_HELPER_TEXT( "CONFIRM", "INPUT_F_ACCEPT", 0 );
            if ((sub_5371() > 2) AND (NOT NETWORK_IS_TVT()))
            {
                DRAW_FRONTEND_HELPER_TEXT( "KICK_PLAYERU", "INPUT_F_Y", 0 );
            }
            DRAW_FRONTEND_HELPER_TEXT( "MODE", "PAD_DPAD_UPDOWN", 0 );
        }
        else if ((IS_THIS_MACHINE_THE_SERVER()) AND (NOT l_U1272))
        {
            DRAW_FRONTEND_HELPER_TEXT( "CANCEL", "INPUT_F_CANCEL", 0 );
            if ((sub_5371() > 2) AND (NOT NETWORK_IS_TVT()))
            {
                DRAW_FRONTEND_HELPER_TEXT( "KICK_PLAYERU", "INPUT_F_Y", 0 );
            }
        }
        else
        {
            DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
            if ((sub_5371() > 2) AND (NOT NETWORK_IS_TVT()))
            {
                DRAW_FRONTEND_HELPER_TEXT( "KICK_PLAYERU", "INPUT_F_Y", 0 );
            }
        };;;;
        if (NOT sub_25090())
        {
            sub_45717( 1 );
        }
        SET_WIDESCREEN_FORMAT( 2 );
        if (NOT sub_25090())
        {
            if (GET_IS_WIDESCREEN())
            {
                sub_26628( 0, sub_32777(), sub_38331() * 1.20000000, 0, 0, 0, 0, 0, 255 );
                GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                sub_32837( "CHOOSNEXTGAME", sub_32777() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
            }
            else
            {
                sub_26628( 0, sub_32777(), sub_38331(), 0, 0, 0, 0, 0, 255 );
                GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                sub_32837( "CHOOSNEXTGAME", sub_32777() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
            }
        }
        if (NOT sub_25090())
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
                if (sub_25154( l_U988 ))
                {
                    if (GET_NUMBER_OF_PLAYERS() > 4)
                    {
                        (uParam1^)[GET_PLAYER_ID()] = -7;
                        bVar29 = false;
                    }
                }
                else if ((sub_36852( l_U988 )) == sub_5847())
                {
                    if ((sub_36852( l_U988 )) != 10)
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
                            sub_25518( 0 );
                        }
                        sub_49018( sub_36852( l_U988 ) );
                    }
                }
            }
        }
    }
    else
    {
        SET_WIDESCREEN_FORMAT( 2 );
        StrCopy( ref cVar8, "CP_DESCRP_", 16 );
        ConcatString(ref cVar8, sub_5847(), 16);
        if (GET_IS_WIDESCREEN())
        {
            sub_26628( 0, sub_32777(), sub_38331() * 1.20000000, 0, 0, 0, 0, 0, 255 );
            GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
            sub_32837( ref cVar8, sub_32777() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
        }
        else
        {
            sub_26628( 0, sub_32777(), sub_38331(), 0, 0, 0, 0, 0, 255 );
            GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
            sub_32837( ref cVar8, sub_32777() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
        }
        SET_WIDESCREEN_FORMAT( 3 );
        if (NOT l_U1191)
        {
            if ((l_U989[sub_25772( 16 )]._fU20) == 1)
            {
                sub_49338( 0 );
            }
            else if (sub_49677( ref I ))
            {
                if (sub_49773( ref l_U989[I]._fU0, l_U989[I]._fU24 ))
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
            DRAW_RECT( 0.50000000, sub_45525( 0 ), 1.00000000, 0.00200000, 180, 180, 180, 255 );
        }
        else
        {
            DRAW_RECT( 0.50000000, sub_45525( 0 ), 1.00000000, 0.00400000, 180, 180, 180, 255 );
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
                sub_26628( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                if (sub_29237())
                {
                    fVar33 = 0.01300000;
                    if ((uParam1^)[GET_PLAYER_ID()] == 0)
                    {
                        bVar27 = sub_33674( I );
                        if (NOT (sub_31669( I )))
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
                    sub_32837( ref l_U989[I]._fU0, fVar37 - fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 3 );
                }
                else
                {
                    fVar33 = 0.00800000;
                    sub_32837( ref l_U989[I]._fU0, fVar37 - fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 3 );
                }
                sub_26628( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                switch (l_U989[I]._fU16)
                {
                    case 1:
                    case 8:
                    if ((bVar27) || (l_U989[I]._fU24 > 0))
                    {
                        cVar8 = {l_U989[I]._fU0};
                        ConcatString(ref cVar8, l_U989[I]._fU20, 16);
                        fVar36 = sub_32837( ref cVar8, fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    else
                    {
                        fVar36 = sub_32837( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 2:
                    if (l_U989[I]._fU20 < 2147483647)
                    {
                        fVar36 = sub_51693( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, l_U989[I]._fU20, 1065353216 );
                    }
                    else
                    {
                        fVar36 = sub_41553( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, "-" );
                    }
                    break;
                    case 3:
                    fVar36 = sub_27250( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, l_U989[I]._fU20 );
                    break;
                    case 11:
                    if ((bVar27) || (l_U989[I]._fU24 > 0))
                    {
                        if (l_U989[I]._fU20 == 0)
                        {
                            fVar36 = sub_32837( "RANDOM", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                        else
                        {
                            fVar36 = sub_27250( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, l_U989[I]._fU20 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_32837( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 13:
                    if ((bVar27) || (l_U989[I]._fU24 > 0))
                    {
                        ;
                    }
                    else
                    {
                        fVar36 = sub_32837( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 4:
                    case 14:
                    if ((bVar27) || (l_U989[I]._fU24 > 0))
                    {
                        fVar36 = sub_53724( "NUM_OUTOF_NUM", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, l_U989[I]._fU20 + 1, l_U989[I]._fU24 );
                    }
                    else
                    {
                        fVar36 = sub_32837( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 15:
                    if (l_U989[I]._fU20 > -1)
                    {
                        cVar8 = {l_U989[I]._fU0};
                        ConcatString(ref cVar8, l_U989[I]._fU20, 16);
                        fVar36 = sub_32837( ref cVar8, fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    else
                    {
                        fVar36 = sub_32837( "OFF", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 5:
                    case 7:
                    if ((bVar27) || (l_U989[I]._fU24 > 0))
                    {
                        if (l_U989[I]._fU20 > 0)
                        {
                            fVar36 = sub_32837( "YES", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                        else
                        {
                            fVar36 = sub_32837( "NO", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_32837( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 6:
                    case 16:
                    if ((bVar27) || (l_U989[I]._fU24 > 0))
                    {
                        if (l_U989[I]._fU20 > 0)
                        {
                            fVar36 = sub_32837( "ON", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                        else
                        {
                            fVar36 = sub_32837( "OFF", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_32837( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 9:
                    case 10:
                    if (sub_54541())
                    {
                        if (l_U989[I]._fU20 > 0)
                        {
                            fVar36 = sub_32837( "ON", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                        else
                        {
                            fVar36 = sub_32837( "OFF", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_32837( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 12:
                    if ((bVar27) || (l_U989[I]._fU24 > 0))
                    {
                        fVar36 = sub_27250( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, sub_54872() );
                    }
                    else if ((GET_PLAYER_TEAM( sub_30185() )) == -1)
                    {
                        fVar36 = sub_32837( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    else
                    {
                        fVar36 = sub_27250( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, sub_54872() );
                    }
                    break;
                    case 17:
                    if ((bVar27) || (l_U989[I]._fU24 > 0))
                    {
                        if (((l_U989[I]._fU20 > -1) AND (l_U989[I]._fU20 != GET_PLAYER_ID())) AND (IS_NETWORK_PLAYER_ACTIVE( l_U989[I]._fU20 )))
                        {
                            if (l_U1177 == I)
                            {
                                sub_47263( sub_4433( l_U989[I]._fU20 ), ref iVar21, ref iVar22, ref iVar23 );
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
                                    fVar36 = sub_41553( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, "WWWWWWWWWWWWWWW" );
                                }
                                else
                                {
                                    fVar36 = sub_41553( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, "WWWWWWWWWWWWWWWW" );
                                }
                            }
                            else
                            {
                                SET_TEXT_SCALE( 0.31500000, 0.43000000 );
                                SET_TEXT_USE_UNDERSCORE( 1 );
                                fVar49 = GET_STRING_WIDTH_WITH_STRING( "STRING", GET_PLAYER_NAME( sub_4433( l_U989[I]._fU20 ) ) );
                                if (GET_IS_WIDESCREEN())
                                {
                                    if (fVar49 <= 0.20300000)
                                    {
                                        fVar36 = sub_41553( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_4433( l_U989[I]._fU20 ) ) );
                                    }
                                    else
                                    {
                                        fVar36 = sub_41553( fVar37 + fVar33, fVar35, 0.06394500 / fVar49, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_4433( l_U989[I]._fU20 ) ) );
                                    }
                                }
                                else if (fVar49 <= 0.18900000)
                                {
                                    fVar36 = sub_41553( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_4433( l_U989[I]._fU20 ) ) );
                                }
                                else
                                {
                                    fVar36 = sub_41553( fVar37 + fVar33, fVar35, 0.05953500 / fVar49, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_4433( l_U989[I]._fU20 ) ) );
                                }
                                SET_TEXT_USE_UNDERSCORE( 0 );
                            }
                        }
                        else
                        {
                            fVar36 = sub_32837( "NONE", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_32837( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                }
                if ((l_U1177 == I) AND ((uParam1^)[GET_PLAYER_ID()] == 0))
                {
                    if (bVar27)
                    {
                        if (NOT (sub_31669( l_U1177 )))
                        {
                            DRAW_SPRITE( l_U501[0], ((fVar37 + fVar33) + 0.01300000) + fVar36, fVar35 + 0.01300000, 0.01400000, 0.02000000, 0.00000000, 255, 255, 255, 255 );
                        }
                    }
                }
                fVar35 += 0.03200000;
            }
        }
    }
    sub_40555();
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
                    DRAW_RECT( ((0.20800000 + sub_32777()) + 0.00900000) + sub_56362(), 0.04900000 + fVar35, 0.42900000, 0.03800000, iVar17, iVar18, iVar19, 45 );
                }
                else
                {
                    DRAW_RECT( ((0.17900000 + sub_32777()) + 0.00900000) + sub_56362(), 0.04900000 + fVar35, 0.37200000, 0.03700000, iVar17, iVar18, iVar19, 45 );
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
            if ((sub_30223( J )) > 0)
            {
                iVar14++;
                sub_26628( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                GET_TEAM_RGB_COLOUR( J, ref iVar17, ref iVar18, ref iVar19 );
                if (GET_IS_WIDESCREEN())
                {
                    sub_27250( sub_32777() + 0.00900000, fVar35 + 0.03200000, 0.38000000, 0.55500000, iVar17, iVar18, iVar19, 255, 1, iVar14 );
                }
                else
                {
                    sub_27250( sub_32777() + 0.00900000, fVar35 + 0.03100000, 0.38000000, 0.55500000, iVar17, iVar18, iVar19, 255, 1, iVar14 );
                }
                for ( I = 0; I < 16; I++ )
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( l_U564[0]._fU24[I] ))
                    {
                        if ((GET_PLAYER_TEAM( sub_4433( l_U564[0]._fU24[I] ) )) == J)
                        {
                            if (GET_IS_WIDESCREEN())
                            {
                                sub_56934( l_U564[0]._fU24[I], ref iVar51, (sub_32777() + 0.00900000) + sub_56362(), ref fVar35, 0.35000000, 0.47750000, 0.03600000, iParam0, 0 );
                            }
                            else
                            {
                                sub_56934( l_U564[0]._fU24[I], ref iVar51, (sub_32777() + 0.00900000) + sub_56362(), ref fVar35, 0.32500000, 0.43500000, 0.03600000, iParam0, 0 );
                            }
                            sub_61325( l_U564[0]._fU24[I], (((uParam1^)[l_U564[0]._fU24[I]] == 2) || (((NOT sub_25090()) AND ((uParam1^)[l_U564[0]._fU24[I]] == -7)) AND (GET_HOST_ID() != l_U564[0]._fU24[I]))) || (((uParam1^)[l_U564[0]._fU24[I]] == -8) AND (GET_HOST_ID() == l_U564[0]._fU24[I])), ((sub_32777() + 0.00900000) + sub_56362()) + fVar36, fVar35 );
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
                    DRAW_RECT( ((0.20800000 + sub_32777()) + 0.00900000) + -0.00900000, 0.04900000 + fVar35, 0.42900000, 0.03800000, iVar17, iVar18, iVar19, 45 );
                }
                else
                {
                    DRAW_RECT( ((0.17900000 + sub_32777()) + 0.00900000) + -0.00900000, 0.04900000 + fVar35, 0.37200000, 0.03800000, iVar17, iVar18, iVar19, 45 );
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
                if (((GET_PLAYER_TEAM( sub_4433( l_U564[0]._fU24[I] ) )) == -1) || (sub_10476()))
                {
                    if (GET_IS_WIDESCREEN())
                    {
                        sub_56934( l_U564[0]._fU24[I], ref iVar51, (sub_32777() + 0.00900000) + -0.00900000, ref fVar35, 0.35000000, 0.47750000, 0.03600000, iParam0, ((uParam1^)[GET_PLAYER_ID()] == 0) || ((uParam1^)[GET_PLAYER_ID()] == 2) );
                    }
                    else
                    {
                        sub_56934( l_U564[0]._fU24[I], ref iVar51, (sub_32777() + 0.00900000) + -0.00900000, ref fVar35, 0.32500000, 0.43500000, 0.03600000, iParam0, ((uParam1^)[GET_PLAYER_ID()] == 0) || ((uParam1^)[GET_PLAYER_ID()] == 2) );
                    }
                    sub_61325( l_U564[0]._fU24[I], (((uParam1^)[l_U564[0]._fU24[I]] == 2) || (((NOT sub_25090()) AND ((uParam1^)[l_U564[0]._fU24[I]] == -7)) AND (GET_HOST_ID() != l_U564[0]._fU24[I]))) || (((uParam1^)[l_U564[0]._fU24[I]] == -8) AND (GET_HOST_ID() == l_U564[0]._fU24[I])), ((sub_32777() + 0.00900000) + -0.00900000) + fVar36, fVar35 );
                }
            }
        }
    }
    return;
}

void sub_24698()
{
    if (DOES_CAM_EXIST( l_U1244 ))
    {
        DESTROY_CAM( l_U1244 );
    }
    return;
}

int sub_24877(unknown uParam0)
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

void sub_25090()
{
    return NETWORK_IS_GAME_RANKED();
}

int sub_25154(int iParam0)
{
    if (((iParam0 == 10) || (iParam0 == 11)) || (iParam0 == 12))
    {
        return 1;
    }
    return 0;
}

void sub_25262(unknown uParam0, unknown uParam1)
{
    int I;
    int iVar5;
    int iVar6;

    if (sub_25090())
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

void sub_25518(unknown uParam0)
{
    SET_SCREEN_FADE( sub_25527(), 0, 0, 0, 0, 0, 0, 255, uParam0, 1.00000000, 1.00000000 );
    return;
}

void sub_25527()
{
    unknown Result;

    GET_SCREEN_VIEWPORT_ID( ref Result );
    return Result;
}

void sub_25617(unknown uParam0)
{
    SET_SCREEN_FADE( sub_25527(), 0, 0, 1, 0, 0, 0, 255, uParam0, 1.00000000, 1.00000000 );
    return;
}

int sub_25772(int iParam0)
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

void sub_25956()
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

void sub_26111()
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

void sub_26592(int iParam0, boolean bParam1)
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
    sub_26628( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    GET_FRONTEND_DESIGN_VALUE( 23, ref uVar9, ref uVar10 );
    GET_FRONTEND_DESIGN_VALUE( 24, ref uVar11, ref uVar12 );
    GET_HUD_COLOUR( 49, ref uVar5, ref uVar6, ref uVar7, ref uVar8 );
    GET_NETWORK_TIMER( ref iVar4 );
    if (((iParam0 + 10000) - iVar4) > 0)
    {
        if (bParam1)
        {
            sub_26925( "STARTING_IN", uVar9, uVar10, uVar11, uVar12, 255, 255, 255, 255, 2, (((iParam0 + 10000) - iVar4) / 1000) + 1 );
        }
        else
        {
            sub_27250( uVar9, uVar10, uVar11, uVar12, 255, 255, 255, 255, 2, (((iParam0 + 10000) - iVar4) / 1000) + 1 );
        }
        if ((((iParam0 + 10000) - iVar4) + 1000) <= l_U1183)
        {
            PLAY_AUDIO_EVENT( "FRONTEND_OTHER_COUNTDOWN" );
            l_U1183 -= 1000;
        }
    }
    else if (bParam1)
    {
        sub_26925( "STARTING_IN", uVar9, uVar10, uVar11, uVar12, 255, 255, 255, 255, 2, 1 );
    }
    else
    {
        sub_27250( uVar9, uVar10, uVar11, uVar12, 255, 255, 255, 255, 2, 1 );
    }
    SET_WIDESCREEN_FORMAT( 3 );
    return;
}

void sub_26628(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
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

void sub_26925(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_26965( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_NUMBER( uParam0, uParam10 );
    DISPLAY_TEXT_WITH_NUMBER( uParam1, uParam2, uParam0, uParam10 );
    return Result;
}

void sub_26965(unknown uParam0, unknown uParam1)
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

void sub_27250(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam4, uParam5, uParam6, uParam7 );
    SET_TEXT_SCALE( uParam2, uParam3 );
    sub_26965( uParam8, ref uParam0 );
    Result = GET_STRING_WIDTH_WITH_NUMBER( "NUMBER", uParam9 );
    DISPLAY_TEXT_WITH_NUMBER( uParam0, uParam1, "NUMBER", uParam9 );
    return Result;
}

int sub_27596()
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

int sub_27797()
{
    unknown uVar2;

    uVar2 = sub_5847();
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

int sub_27915()
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

int sub_28097()
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

int sub_28253()
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

int sub_28697()
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

int sub_28835()
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

int sub_29011()
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

int sub_29237()
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

int sub_29352(unknown uParam0, int iParam1, boolean bParam2)
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

int sub_29920()
{
    int iVar2;

    iVar2 = sub_5847();
    if ((iVar2 == 6) || (iVar2 == 7))
    {
        return 1;
    }
    return 0;
}

int sub_30134()
{
    if (NOT NETWORK_IS_TVT())
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (sub_5953())
            {
                if ((sub_30223( GET_PLAYER_TEAM( sub_30185() ) )) == 1)
                {
                    return 0;
                }
                return 1;
            }
            else if (sub_5998())
            {
                if (sub_5371() == 1)
                {
                    return 0;
                }
                return 1;
            }
        }
    }
    return 0;
}

void sub_30185()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_30223(int iParam0)
{
    int I;
    int Result;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if ((GET_PLAYER_TEAM( sub_4433( I ) )) == iParam0)
            {
                Result++;
            }
        }
    }
    return Result;
}

int sub_30371()
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

int sub_30635(unknown uParam0, int iParam1)
{
    (uParam0^)--;
    if ((uParam0^) < 0)
    {
        (uParam0^) = iParam1 - 1;
        return 1;
    }
    return 0;
}

int sub_30777()
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

int sub_31669(int iParam0)
{
    if ((((iParam0 == l_U1195) || (iParam0 == l_U1197)) || (iParam0 == l_U1194)) || (iParam0 == l_U1196))
    {
        return 1;
    }
    return 0;
}

int sub_31764(unknown uParam0, int iParam1)
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

void sub_32142(int iParam0)
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

void sub_32395(unknown uParam0)
{
    sub_32406( uParam0 );
    sub_32694( 0 );
    return;
}

void sub_32406(boolean bParam0)
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

void sub_32694(boolean bParam0)
{
    char[16] cVar3;
    unknown uVar7;
    unknown uVar8;

    StrCopy( ref cVar3, "NTGT_", 16 );
    ConcatString(ref cVar3, sub_5847(), 16);
    GET_FRONTEND_DESIGN_VALUE( 113, ref uVar7, ref uVar8 );
    sub_26628( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    if (bParam0)
    {
        if (sub_25090())
        {
            sub_32837( ref cVar3, sub_32777() + 0.03250000, 0.11900000, uVar7, uVar8, 255, 255, 255, 255, 2 );
            DRAW_SPRITE( l_U501[15], sub_32777() + 0.01100000, 0.11900000 + 0.02300000, 0.03100000, 0.04400000, 0.00000000, 255, 255, 255, 255 );
        }
        else
        {
            sub_32837( ref cVar3, sub_32777(), 0.11900000, uVar7, uVar8, 255, 255, 255, 255, 2 );
        }
    }
    else if (sub_25090())
    {
        sub_32837( ref cVar3, sub_32777() + 0.03250000, 0.08500000, uVar7, uVar8, 255, 255, 255, 255, 2 );
        DRAW_SPRITE( l_U501[15], sub_32777() + 0.01100000, 0.08500000 + 0.02300000, 0.03100000, 0.04400000, 0.00000000, 255, 255, 255, 255 );
    }
    else
    {
        sub_32837( ref cVar3, sub_32777(), 0.08500000, uVar7, uVar8, 255, 255, 255, 255, 2 );
    }
    return;
}

void sub_32777()
{
    unknown Result;
    unknown uVar3;

    GET_FRONTEND_DESIGN_VALUE( 112, ref Result, ref uVar3 );
    return Result;
}

void sub_32837(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_26965( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH( uParam0 );
    DISPLAY_TEXT( uParam1, uParam2, uParam0 );
    return Result;
}

int sub_33674(unknown uParam0)
{
    if (l_U989[uParam0]._fU16 != 0)
    {
        if ((l_U989[uParam0]._fU16 == 9) || (l_U989[uParam0]._fU16 == 10))
        {
            if (IS_THIS_MACHINE_THE_SERVER())
            {
                if (sub_5998())
                {
                    if (sub_5998())
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
        else if (sub_30134())
        {
            return 1;
        };;;;
    }
    return 0;
}

int sub_36167(unknown uParam0, unknown uParam1)
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

int sub_36510(unknown uParam0, int iParam1)
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

int sub_36852(unknown uParam0)
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

void sub_37165(int iParam0, int iParam1, int iParam2)
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
        iParam0->_fU0[2] = sub_37261( iParam1 );
        iParam0->_fU0[3] = 0;
        iParam0->_fU0[4] = iParam2;
        g_U14 = iParam2;
        iParam0->_fU0[5] = sub_37355( iParam1 );
    }
    return;
}

int sub_37261(unknown uParam0)
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

int sub_37355(unknown uParam0)
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

void sub_37503()
{
    g_U10 = 1;
    sub_37516();
    return;
}

void sub_37516()
{
    FORCE_LOADING_SCREEN( 1 );
    while (true)
    {
        WAIT( 0 );
    }
    return;
}

void sub_38028()
{
    g_U11 = 1;
    sub_37516();
    return;
}

void sub_38186()
{
    g_U12 = 1;
    sub_37516();
    return;
}

float sub_38331()
{
    unknown uVar2;
    unknown uVar3;

    GET_FRONTEND_DESIGN_VALUE( 112, ref uVar2, ref uVar3 );
    return 1.00000000 - uVar2;
}

void sub_38845(unknown uParam0)
{
    if ((uParam0^))
    {
        (uParam0^) = 0;
        return;
    }
    (uParam0^) = 1;
    return;
}

int sub_39281()
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
        return sub_6840( 0, 2 );
    }
    else if (iVar5 == 1)
    {
        if ((GET_NO_OF_PLAYERS_IN_TEAM( -1 )) > (GET_NO_OF_PLAYERS_IN_TEAM( iVar6 )))
        {
            return sub_6840( 0, 2 );
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
        return sub_6840( 0, 8 );
    }
    else
    {
        iVar4 = sub_6840( 0, iVar5 );
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

int sub_39795(int iParam0)
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
            return sub_6840( 0, iParam0 );
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
            return sub_6840( 0, iParam0 );
        }
        else
        {
            iVar6 = sub_6840( 0, iVar5 );
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

int sub_40209(int iParam0)
{
    int I;
    int iVar4;
    int iVar5;

    iVar5 = GET_PLAYER_TEAM( sub_4433( iParam0 ) );
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if ((GET_PLAYER_TEAM( sub_4433( I ) )) == iVar5)
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

void sub_40555()
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
            sub_26628( 0, 0.00000000, 1.50000000, 0, 0, 0, 0, 0, 255 );
            sub_32837( "INVITE_RECIEVED", sub_38331() + -0.05050000, 0.09800000, 0.35000000, 0.47800000, 255, 255, 255, 255, 3 );
            DRAW_SPRITE( l_U501[34], sub_38331() + -0.02050000, 0.10580000, 0.09570000, 0.06320000, 0.00000000, 255, 255, 255, 255 );
        }
    }
    return;
}

int sub_40874()
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
    sub_32406( 1 );
    GET_FRONTEND_DESIGN_VALUE( 113, ref uVar7, ref uVar8 );
    sub_26628( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    sub_32837( "RECENT_PLAYERS", sub_32777(), 0.08500000, uVar7, uVar8, 255, 255, 255, 255, 2 );
    sub_26628( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    GET_HUD_COLOUR( 56, ref uVar3, ref uVar4, ref uVar5, ref I );
    if (N_604003528())
    {
        sub_32837( "RECENTPLYRX360", sub_32777() + 0.00100000, fVar6, 0.31500000, 0.42950000, uVar3, uVar4, uVar5, 255, 2 );
    }
    else
    {
        sub_32837( "RECENTPLYRDESC", sub_32777() + 0.00100000, fVar6, 0.31500000, 0.42950000, uVar3, uVar4, uVar5, 255, 2 );
    }
    if (GET_IS_WIDESCREEN())
    {
        fVar6 = 0.21550000;
    }
    else
    {
        fVar6 = 0.21600000;
    }
    sub_29352( ref l_U1199, NETWORK_GET_NUM_PLAYERS_MET(), 0 );
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
            sub_26628( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
            if (l_U1199 == I)
            {
                sub_41553( sub_32777(), fVar6, 0.35000000, 0.47750000, 255, 255, 255, 255, 2, NETWORK_GET_MET_PLAYER_NAME( I ) );
            }
            else
            {
                sub_41553( sub_32777(), fVar6, 0.35000000, 0.47750000, uVar3, uVar4, uVar5, 255, 2, NETWORK_GET_MET_PLAYER_NAME( I ) );
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
    if (sub_29011())
    {
        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
        NETWORK_SHOW_MET_PLAYER_FEEDBACK_UI( l_U1199 );
    }
    else if (sub_28253())
    {
        NETWORK_SHOW_MET_PLAYER_PROFILE_UI( l_U1199 );
    }
    else if (sub_27596())
    {
        return 1;
    };;;
    return 0;
}

void sub_41553(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam4, uParam5, uParam6, uParam7 );
    SET_TEXT_SCALE( uParam2, uParam3 );
    sub_26965( uParam8, ref uParam0 );
    Result = GET_STRING_WIDTH_WITH_STRING( "STRING", uParam9 );
    DISPLAY_TEXT_WITH_LITERAL_STRING( uParam0, uParam1, "STRING", uParam9 );
    return Result;
}

int sub_42139(unknown uParam0, boolean bParam1)
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
    sub_32406( 1 );
    GET_FRONTEND_DESIGN_VALUE( 113, ref uVar13, ref uVar14 );
    sub_26628( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    sub_32837( "INVITE_TITLE", sub_32777(), 0.08500000, uVar13, uVar14, 255, 255, 255, 255, 2 );
    sub_26628( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    GET_HUD_COLOUR( 56, ref iVar5, ref iVar6, ref iVar7, ref uVar8 );
    sub_32837( "INVITES_DESC", sub_32777() + 0.00100000, fVar12, 0.31500000, 0.42950000, iVar5, iVar6, iVar7, 255, 2 );
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
                DRAW_RECT( 0.57000000 + sub_32777(), 0.01370000 + fVar12, 1.15500000, 0.03800000, iVar5, iVar6, iVar7, 45 );
            }
            else
            {
                DRAW_RECT( 0.40200000 + sub_32777(), 0.01370000 + fVar12, 0.82000000, 0.03800000, iVar5, iVar6, iVar7, 45 );
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
    sub_29352( ref l_U1202, NETWORK_GET_FRIEND_COUNT(), 0 );
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
            sub_26628( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
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
                    sub_41553( sub_32777(), fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2, "WWWWWWWWWWWWWWW" );
                }
                else
                {
                    sub_41553( sub_32777(), fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2, "WWWWWWWWWWWWWWWW" );
                }
            }
            else
            {
                SET_TEXT_USE_UNDERSCORE( 1 );
                sub_41553( sub_32777(), fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2, NETWORK_GET_FRIEND_NAME( I ) );
                SET_TEXT_USE_UNDERSCORE( 0 );
            }
            sub_26628( 0, 0.00000000, 1.50000000, 0, 0, 0, 0, 0, 255 );
            if (sub_43219( I ))
            {
                sub_32837( "INGAME", sub_32777() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
            }
            else if (sub_43374( I ))
            {
                sub_32837( "INVITING", sub_32777() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
                if (GET_CURRENT_EPISODE() == (NETWORK_GET_UNACCEPTED_INVITE_EPISODE( sub_43520( I ) )))
                {
                    StrCopy( ref cVar15, "NTGT_", 8 );
                    ConcatString(ref cVar15, NETWORK_GET_UNACCEPTED_INVITE_GAME_MODE( sub_43520( I ) ), 8);
                    sub_26628( 0, 0.00000000, 1.50000000, 0, 0, 0, 0, 0, 255 );
                    if (GET_IS_WIDESCREEN())
                    {
                        sub_32837( ref cVar15, sub_38331() + 0.32600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 3 );
                    }
                    else
                    {
                        sub_32837( ref cVar15, sub_38331() + -0.01100000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 3 );
                    }
                }
            }
            else if (NETWORK_DID_INVITE_FRIEND( NETWORK_GET_FRIEND_NAME( I ) ))
            {
                sub_32837( "INVITED", sub_32777() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
            }
            else if (NETWORK_IS_FRIEND_ONLINE( NETWORK_GET_FRIEND_NAME( I ) ))
            {
                sub_32837( "ONLINE", sub_32777() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
            }
            else
            {
                sub_32837( "OFFLINE", sub_32777() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
            };;;;
            if (NETWORK_IS_FRIEND_IN_SAME_TITLE( NETWORK_GET_FRIEND_NAME( I ) ))
            {
                DRAW_SPRITE( l_U501[33], sub_32777() + 0.33300000, fVar12 + 0.01520000, 0.03900000, 0.02600000, 0.00000000, iVar5, iVar6, iVar7, 255 );
            }
            fVar12 += 0.03600000;
        }
    }
    GET_NETWORK_TIMER( ref iVar9 );
    if (l_U1264 > (iVar9 - 5000))
    {
        SET_WIDESCREEN_FORMAT( 2 );
        sub_26628( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
        GET_FRONTEND_DESIGN_VALUE( 23, ref uVar11, ref fVar12 );
        GET_FRONTEND_DESIGN_VALUE( 24, ref uVar13, ref uVar14 );
        if (NOT bParam1)
        {
            SET_TEXT_USE_UNDERSCORE( 1 );
            sub_44232( "INVITED_PLAYER", uVar11, fVar12 + 0.04050000, uVar13, uVar14, 255, 255, 255, 255, 2, ref l_U1255 );
            SET_TEXT_USE_UNDERSCORE( 0 );
        }
    }
    INIT_FRONTEND_HELPER_TEXT();
    DRAW_FRONTEND_HELPER_TEXT( "BACK", "INPUT_F_CANCEL", 0 );
    if ((l_U1263 != l_U1202) || (l_U1264 < (iVar9 - 5000)))
    {
        l_U1263 = -1;
    }
    if (NOT (sub_43219( l_U1202 )))
    {
        if (sub_43374( l_U1202 ))
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
    if (sub_28253())
    {
        if (NETWORK_IS_FRIEND_ONLINE( NETWORK_GET_FRIEND_NAME( l_U1202 ) ))
        {
            if (NOT (sub_43219( l_U1202 )))
            {
                if (sub_43374( l_U1202 ))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    NETWORK_ACCEPT_INVITE( sub_43520( l_U1202 ) );
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
    else if (sub_27596())
    {
        return 1;
    }
    return 0;
}

int sub_43219(unknown uParam0)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (COMPARE_STRING( NETWORK_GET_FRIEND_NAME( uParam0 ), GET_PLAYER_NAME( sub_4433( I ) ) ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_43374(unknown uParam0)
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

int sub_43520(unknown uParam0)
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

void sub_44232(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_26965( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_STRING( uParam0, uParam10 );
    DISPLAY_TEXT_WITH_LITERAL_STRING( uParam1, uParam2, uParam0, uParam10 );
    return Result;
}

void sub_45053(unknown uParam0)
{
    unknown Result;

    GET_CHAR_MODEL( uParam0, ref Result );
    return Result;
}

int sub_45095(unknown uParam0)
{
    REQUEST_MODEL( uParam0 );
    if (HAS_MODEL_LOADED( uParam0 ))
    {
        return 1;
    }
    return 0;
}

void sub_45525(unknown uParam0)
{
    unknown Result;
    unknown uVar4;

    GET_FRONTEND_DESIGN_VALUE( uParam0, ref Result, ref uVar4 );
    return Result;
}

void sub_45558(unknown uParam0)
{
    unknown uVar3;
    unknown Result;

    GET_FRONTEND_DESIGN_VALUE( uParam0, ref uVar3, ref Result );
    return Result;
}

void sub_45717(boolean bParam0)
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
            if (sub_25154( I ))
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
        sub_26628( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
        sub_32837( sub_45950( I ), fVar9, fVar10, 0.35000000, 0.47750000, iVar4, iVar5, iVar6, 255, 1 );
        fVar10 += 0.03600000;
    }
    return;
}

string sub_45950(unknown uParam0)
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

void sub_47263(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (((GET_PLAYER_TEAM( uParam0 )) == -1) || (sub_5847() == 16))
    {
        GET_PLAYER_RGB_COLOUR( uParam0, uParam1, uParam2, uParam3 );
    }
    else
    {
        GET_TEAM_RGB_COLOUR( GET_PLAYER_TEAM( uParam0 ), uParam1, uParam2, uParam3 );
    }
    return;
}

void sub_49018(unknown uParam0)
{
    g_U13 = uParam0;
    if (NOT g_U26675)
    {
        sub_37516();
    }
    return;
}

void sub_49338(boolean bParam0)
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
        fVar7 = sub_32777();
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
    ConcatString(ref cVar9, sub_5847(), 16);
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
        sub_26628( 0, fVar7, sub_38331() * 1.20000000, 0, 0, 0, 0, 0, 255 );
    }
    else
    {
        sub_26628( 0, fVar7, sub_38331(), 0, 0, 0, 0, 0, 255 );
    }
    GET_HUD_COLOUR( 56, ref uVar3, ref uVar4, ref uVar5, ref uVar6 );
    sub_32837( ref cVar9, fVar7, fVar8, 0.31500000, 0.42950000, uVar3, uVar4, uVar5, 255, 2 );
    return;
}

int sub_49677(unknown uParam0)
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

int sub_49773(unknown uParam0, unknown uParam1)
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

float sub_51693(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8, int iParam9, unknown uParam10)
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
        sub_27250( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar20 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_27250( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar21 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_32837( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 += fVar25;
        fVar26 += fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_27250( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar18 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_27250( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar19 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_32837( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 += fVar25;
        fVar26 += fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_27250( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar16 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_27250( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar17 );
    }
    else if (iParam8 == 3)
    {
        fVar26 = uParam0 - (fVar22 / 2);
        sub_27250( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar17 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_27250( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar16 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_32837( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 -= fVar25;
        fVar26 -= fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_27250( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar19 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_27250( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar18 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_32837( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 -= fVar25;
        fVar26 -= fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_27250( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar21 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_27250( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar20 );
    }
    else
    {
        fVar26 = uParam0 + fVar24;
        sub_27250( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar19 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_32837( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_27250( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar16 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_27250( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar17 );
        fVar26 = uParam0 - fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_27250( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar18 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_32837( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_27250( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar21 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_27250( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar20 );
    }
    return (6 * fVar22) + (2 * fVar23);
}

void sub_53724(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    float Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_26965( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_NUMBER( uParam0, uParam10 );
    Result += GET_STRING_WIDTH_WITH_NUMBER( "NUMBER", uParam11 );
    Result -= GET_STRING_WIDTH_WITH_NUMBER( "NUMBER", 11 );
    DISPLAY_TEXT_WITH_2_NUMBERS( uParam1, uParam2, uParam0, uParam10, uParam11 );
    return Result;
}

int sub_54541()
{
    if (sub_5998())
    {
        if (sub_5998())
        {
            return 1;
        }
    }
    else if ((sub_5953()) || (sub_10476()))
    {
        return 1;
    }
    return 0;
}

int sub_54872()
{
    int I;
    int Result;

    for ( I = 0; I < 8; I++ )
    {
        if ((sub_30223( I )) > 0)
        {
            Result++;
            if (I == (GET_PLAYER_TEAM( sub_30185() )))
            {
                return Result;
            }
        }
    }
    return 0;
}

float sub_56362()
{
    if (GET_IS_WIDESCREEN())
    {
        return 0.02700000;
    }
    return 0.02100000;
}

void sub_56934(int iParam0, unknown uParam1, float fParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7, unknown uParam8)
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

    sub_56951( iParam0, ref iVar12, ref iVar13, ref iVar14 );
    if ((l_U1253) AND ((iParam7 == 2) || (iParam7 == 3)))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( iParam0 ))
        {
            if ((IS_CHAR_DEAD( sub_4471( iParam0 ) )) || (l_U967[iParam0]))
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
                sub_26628( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                if (l_U564[(uParam1^)[I]]._fU16 != 1)
                {
                    if (((iParam7 == 6) || (iParam7 == 7)) || (iParam7 == 8))
                    {
                        fParam2 += (sub_57326( l_U564[(uParam1^)[I]]._fU16 )) * 0.50000000;
                    }
                }
                switch (l_U564[(uParam1^)[I]]._fU16)
                {
                    case 1:
                    if (((iParam7 == 6) || (iParam7 == 7)) || (iParam7 == 8))
                    {
                        if (sub_57685( iParam0 ))
                        {
                            iVar12 = 60;
                            iVar13 = 60;
                            iVar14 = 60;
                        }
                        else
                        {
                            sub_56951( iParam0, ref iVar12, ref iVar13, ref iVar14 );
                        }
                        if (l_U4)
                        {
                            if (N_604003528())
                            {
                                sub_41553( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, 2, "WWWWWWWWWWWWWWW" );
                            }
                            else
                            {
                                sub_41553( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, 2, "WWWWWWWWWWWWWWWW" );
                            }
                        }
                        else
                        {
                            SET_TEXT_USE_UNDERSCORE( 1 );
                            sub_41553( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, 2, sub_57931( iParam0 ) );
                            SET_TEXT_USE_UNDERSCORE( 0 );
                        }
                        if ((sub_25090()) || (NOT N_604003528()))
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
                        fParam2 += (sub_57326( 1 )) - uVar19;
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
                                    uVar22 = sub_58921( 0.29700000, uParam4, sub_58719( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, "WWWWWWWWWWWWWWW" ) );
                                }
                                else
                                {
                                    uVar22 = sub_58921( 0.29700000, uParam4, sub_58719( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, "WWWWWWWWWWWWWWWW" ) );
                                }
                            }
                            else if (N_604003528())
                            {
                                uVar22 = sub_58921( 0.23900000, uParam4, sub_58719( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, "WWWWWWWWWWWWWWW" ) );
                            }
                            else
                            {
                                uVar22 = sub_58921( 0.23900000, uParam4, sub_58719( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, "WWWWWWWWWWWWWWWW" ) );
                            }
                            sub_26628( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                            SET_TEXT_USE_UNDERSCORE( 1 );
                        }
                        else
                        {
                            uVar22 = uParam4;
                        }
                        if (N_604003528())
                        {
                            sub_41553( fParam2, (uParam3^) + fVar20, uVar22, uParam5, iVar12, iVar13, iVar14, 255, 2, "WWWWWWWWWWWWWWW" );
                        }
                        else
                        {
                            sub_41553( fParam2, (uParam3^) + fVar20, uVar22, uParam5, iVar12, iVar13, iVar14, 255, 2, "WWWWWWWWWWWWWWWW" );
                        }
                    }
                    else if ((iParam7 == 9) || (iParam7 == 10))
                    {
                        if (GET_IS_WIDESCREEN())
                        {
                            uVar22 = sub_58921( 0.29700000, uParam4, sub_58719( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, sub_57931( iParam0 ) ) );
                        }
                        else
                        {
                            uVar22 = sub_58921( 0.23900000, uParam4, sub_58719( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, sub_57931( iParam0 ) ) );
                        }
                        sub_26628( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                        SET_TEXT_USE_UNDERSCORE( 1 );
                    }
                    else
                    {
                        uVar22 = uParam4;
                    }
                    SET_TEXT_USE_UNDERSCORE( 1 );
                    sub_41553( fParam2, (uParam3^) + fVar20, uVar22, uParam5, iVar12, iVar13, iVar14, 255, 2, sub_57931( iParam0 ) );
                    SET_TEXT_USE_UNDERSCORE( 0 );;;
                    break;
                    case 2:
                    case 7:
                    if (NOT (sub_57685( iParam0 )))
                    {
                        sub_27250( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, l_U564[(uParam1^)[I]]._fU24[iParam0] );
                    }
                    break;
                    case 3:
                    if (NOT (sub_57685( iParam0 )))
                    {
                        if (l_U564[(uParam1^)[I]]._fU24[iParam0] > 0)
                        {
                            sub_60213( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, sub_59688( iParam0 ) );
                        }
                    }
                    break;
                    case 4:
                    if (NOT (sub_57685( iParam0 )))
                    {
                        if ((l_U564[(uParam1^)[I]]._fU24[iParam0] < 2147483647) AND (l_U564[(uParam1^)[I]]._fU24[iParam0] > -2147483648))
                        {
                            sub_51693( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, l_U564[(uParam1^)[I]]._fU24[iParam0], 1.00000000 );
                        }
                    }
                    break;
                    case 5:
                    case 6:
                    if ((NOT l_U1254) || (iParam7 != 6))
                    {
                        if (NOT (sub_57685( iParam0 )))
                        {
                            if ((((sub_5953()) || (sub_5998())) AND ((sub_60581( iParam0 )) > -1)) AND (sub_5847() != 1))
                            {
                                sub_26925( "CASH", fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, (l_U941[sub_60581( iParam0 )]) / (sub_60704( sub_60581( iParam0 ) )) );
                            }
                            else
                            {
                                sub_26925( "CASH", fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, l_U564[(uParam1^)[I]]._fU24[iParam0] );
                            }
                        }
                    }
                    break;
                }
                if (l_U564[(uParam1^)[I]]._fU16 != 1)
                {
                    if (((iParam7 == 6) || (iParam7 == 7)) || (iParam7 == 8))
                    {
                        fParam2 += (sub_57326( l_U564[(uParam1^)[I]]._fU16 )) * 0.50000000;
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

void sub_56951(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (l_U862)
    {
        (uParam1^) = l_U733[uParam0]._fU20;
        (uParam2^) = l_U733[uParam0]._fU24;
        (uParam3^) = l_U733[uParam0]._fU28;
    }
    else
    {
        sub_47263( sub_4433( uParam0 ), uParam1, uParam2, uParam3 );
    }
    return;
}

float sub_57326(unknown uParam0)
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

void sub_57685(unknown uParam0)
{
    if (l_U862)
    {
        return l_U733[uParam0]._fU8;
    }
    return l_U950[uParam0];
}

void sub_57931(unknown uParam0)
{
    if (l_U862)
    {
        return l_U733[uParam0]._fU0;
    }
    return GET_PLAYER_NAME( sub_4433( uParam0 ) );
}

void sub_58719(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
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

void sub_58921(float fParam0, unknown Result, float fParam2)
{
    if (fParam2 > fParam0)
    {
        return (fParam0 * Result) / fParam2;
        break;
    }
    return Result;
}

void sub_59688(unknown uParam0)
{
    if (l_U862)
    {
        return l_U733[uParam0]._fU16;
    }
    return sub_59723( uParam0 );
}

int sub_59723(int iParam0)
{
    int I;
    int iVar4;
    int Result;

    if (sub_59734( iParam0 ))
    {
        for ( I = 0; I < 16; I++ )
        {
            iVar4 = l_U564[0]._fU24[I];
            if ((IS_NETWORK_PLAYER_ACTIVE( iVar4 )) AND (NOT l_U950[iVar4]))
            {
                Result++;
                if (l_U564[sub_59834()]._fU24[iVar4] == l_U564[sub_59834()]._fU24[iParam0])
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

int sub_59734(int iParam0)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (I != iParam0)
        {
            if ((sub_59767( I )) AND (NOT (sub_57685( I ))))
            {
                if (l_U564[sub_59834()]._fU24[I] == l_U564[sub_59834()]._fU24[iParam0])
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_59767(unknown uParam0)
{
    if (l_U862)
    {
        return l_U733[uParam0]._fU4;
    }
    return IS_NETWORK_PLAYER_ACTIVE( uParam0 );
}

int sub_59834()
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

void sub_60213(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, int iParam9)
{
    if (iParam9 == 1)
    {
        return sub_32837( "FIRST", uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8 );
    }
    if (iParam9 == 2)
    {
        return sub_32837( "SECOND", uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8 );
    }
    if (iParam9 == 3)
    {
        return sub_32837( "THIRD", uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8 );
    }
    return sub_26925( "NTH", uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, iParam9 );
}

void sub_60581(unknown uParam0)
{
    if (l_U862)
    {
        return l_U733[uParam0]._fU12;
    }
    return GET_PLAYER_TEAM( sub_4433( uParam0 ) );
}

void sub_60704(int iParam0)
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
            if ((GET_PLAYER_TEAM( sub_4433( I ) )) == iParam0)
            {
                Result++;
            }
        }
    }
    return Result;
}

void sub_61325(int iParam0, boolean bParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    iVar7 = 3;
    GET_HUD_COLOUR( 56, ref uVar8, ref uVar9, ref uVar10, ref iVar6 );
    GET_NETWORK_TIMER( ref iVar6 );
    if ((sub_61364( iParam0 )) > 0)
    {
        if ((sub_25090()) || (NOT N_604003528()))
        {
            iVar7 = 4;
        }
        if (l_U1270 > iVar6)
        {
            DRAW_SPRITE( l_U501[10], uParam2 + (-0.02400000 * iVar7), uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
        }
        else
        {
            sub_26628( 0, sub_32777(), sub_38331(), 0, 0, 0, 0, 0, 255 );
            sub_27250( (uParam2 + (-0.02400000 * iVar7)) + -0.00030000, (uParam3 + 0.01300000) + -0.01320000, 0.31500000, 0.42950000, 255, 255, 255, 255, 1, sub_61364( iParam0 ) );
            if (l_U1270 < (iVar6 - 1000))
            {
                l_U1270 = iVar6 + 1000;
            }
        }
    }
    if (((sub_25090()) || (NOT N_604003528())) AND ((GET_PLAYER_RANK_LEVEL_DURING_MP( iParam0 )) > -1))
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

void sub_61364(int iParam0)
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

void sub_63052(int iParam0, boolean bParam1, unknown uParam2)
{
    int iVar5;
    unknown uVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    uVar11 = sub_63061();
    if (IS_NETWORK_GAME_RUNNING())
    {
        GET_NETWORK_TIMER( ref iVar5 );
        if (NETWORK_IS_SESSION_STARTED())
        {
            if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
            {
                if (l_U1345)
                {
                    l_U1345 = 0;
                }
                switch (uVar11)
                {
                    case 1:
                    if (NOT sub_63291())
                    {
                        if (iParam0 != l_U1342)
                        {
                            sub_63360( iParam0 );
                            iParam0 = l_U1342;
                        }
                    }
                    else if (NOT l_U1344)
                    {
                        l_U1343 = iVar5 + 25000;
                        l_U1344 = 1;
                        sub_63360( iParam0 );
                    }
                    else if (l_U1343 < iVar5)
                    {
                        l_U1344 = 0;
                    };;;
                    break;
                    case 2:
                    if (NOT l_U1344)
                    {
                        l_U1343 = iVar5 + 45000;
                        l_U1344 = 1;
                        iVar7 = iParam0 - iVar5;
                        iVar7 = iVar7 / 60000;
                        if (NOT bParam1)
                        {
                            sub_63381();
                            SET_RICH_PRESENCE_TEMPLATEMP3( iVar7 + 1, sub_5847() );
                        }
                        else if (NOT sub_63645())
                        {
                            sub_63381();
                            SET_RICH_PRESENCE_TEMPLATEMP6( sub_63716(), iParam0, sub_5847() );
                        }
                        else
                        {
                            sub_63381();
                            SET_RICH_PRESENCE_TEMPLATEMP6( uParam2, iParam0, sub_5847() );
                        }
                    }
                    else if (l_U1343 < iVar5)
                    {
                        l_U1344 = 0;
                    }
                    break;
                    case 3:
                    if (l_U1342 != sub_5371())
                    {
                        sub_63381();
                        SET_RICH_PRESENCE_TEMPLATEMP5( 3, sub_5371(), sub_5847() );
                        l_U1342 = sub_5371();
                    }
                    break;
                    case 0:
                    if (NOT l_U1344)
                    {
                        l_U1343 = iVar5 + 45000;
                        l_U1344 = 1;
                        sub_63381();
                        SET_RICH_PRESENCE_TEMPLATEMP2( sub_5847() );
                    }
                    else if (l_U1343 < iVar5)
                    {
                        l_U1344 = 0;
                    }
                    break;
                }
            }
        }
        else if (NOT l_U1345)
        {
            if (NOT NETWORK_IS_SESSION_STARTED())
            {
                if (sub_5847() == 16)
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
                    {
                        GET_CHAR_COORDINATES( sub_4360(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                        if ((GET_MAP_AREA_FROM_COORDS( uVar8 )) != 5)
                        {
                            if (NOT l_U1344)
                            {
                                l_U1343 = iVar5 + 45000;
                                l_U1344 = 1;
                                sub_63381();
                                SET_RICH_PRESENCE_TEMPLATEMP2( sub_5847() );
                            }
                            else if (l_U1343 < iVar5)
                            {
                                l_U1344 = 0;
                            }
                        }
                    }
                }
                else if (sub_5847() == 8)
                {
                    SET_RICH_PRESENCE_TEMPLATEPARTY();
                    l_U1345 = 1;
                }
                else
                {
                    sub_63381();
                    SET_RICH_PRESENCE_TEMPLATELOBBY( sub_5847() );
                    l_U1344 = 0;
                    l_U1345 = 1;
                }
            }
        }
    }
    return;
}

int sub_63061()
{
    switch (sub_5847())
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

int sub_63291()
{
    int iVar2;

    iVar2 = sub_5847();
    if (((iVar2 == 7) || (iVar2 == 8)) || (iVar2 == 6))
    {
        return 1;
    }
    return 0;
}

void sub_63360(int iParam0)
{
    if (l_U1346 == 0)
    {
        sub_63381();
        SET_RICH_PRESENCE_TEMPLATEMP1( 1, sub_59688( GET_PLAYER_ID() ), sub_5371(), sub_5847() );
        l_U1346 = 1;
    }
    else if ((iParam0 > 0) AND (iParam0 < 60))
    {
        sub_63381();
        SET_RICH_PRESENCE_TEMPLATEMP4( iParam0, sub_5847() );
        l_U1346 = 0;
    }
    return;
}

void sub_63381()
{
    return;
}

int sub_63645()
{
    int iVar2;

    iVar2 = NETWORK_GET_GAME_MODE();
    if (((((iVar2 == 10) || (iVar2 == 12)) || (iVar2 == 1)) || (iVar2 == 3)) || (iVar2 == 4))
    {
        return 1;
    }
    return 0;
}

void sub_63716()
{
    unknown Result;

    if (IS_PLAYER_PLAYING( sub_30185() ))
    {
        STORE_SCORE( sub_30185(), ref Result );
    }
    return Result;
}

void sub_64209()
{
    GET_NETWORK_TIMER( ref l_U1423 );
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        sub_64248();
        l_U1420 = 1;
    }
    return;
}

void sub_64248()
{
    if (l_U1401[17])
    {
        if ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -1580.10000000, 1.25000000, 8.10000000, 4.50000000, -1413798865 )) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 63965, 27.00000000, 10.00000000, 4.50000000, -1413798865 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1413798865, -1580.10000000, 1.25000000, 8.10000000, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1413798865, 63965, 27.00000000, 10.00000000, 1, 0.00000000 );
            l_U1401[17] = 1;
        }
    }
    if (NOT l_U1401[0])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1353._fU0, l_U1353._fU4, l_U1353._fU8, 1.50000000, 807349477 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U1353, 1, 0.00000000 );
            l_U1401[0] = 1;
        }
    }
    if (NOT l_U1401[1])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1356._fU0, l_U1356._fU4, l_U1356._fU8, 1.50000000, 419786306 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 419786306, l_U1356, 1, 0.00000000 );
            l_U1401[1] = 1;
        }
    }
    if (l_U1401[2])
    {
        if ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1359._fU0, l_U1359._fU4, l_U1359._fU8, 1.50000000, -1452339441 )) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 850.80000000, -517.80000000, 16.50000000, 1.50000000, 257820338 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, l_U1359, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 257820338, 850.80000000, -517.80000000, 16.50000000, 1, 0.00000000 );
            l_U1401[2] = 1;
        }
    }
    if (NOT l_U1401[2])
    {
        if ((((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1362._fU0, l_U1362._fU4, l_U1362._fU8, 1.50000000, -431164822 )) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -28.00000000, -466.00000000, 16.00000000, 1.50000000, 866127123 ))) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -28.00000000, -467.00000000, 16.00000000, 1.50000000, -431164822 ))) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -28.00000000, -470.00000000, 16.00000000, 1.50000000, 866127123 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -431164822, l_U1362, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 866127123, -28.00000000, -466.00000000, 16.00000000, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -431164822, -28.00000000, -467.00000000, 16.00000000, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 866127123, -28.00000000, -470.00000000, 16.00000000, 1, 0.00000000 );
            l_U1401[2] = 1;
        }
    }
    if (NOT l_U1401[4])
    {
        if ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1365._fU0, l_U1365._fU4, l_U1365._fU8, 1.50000000, -1452339441 )) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -1246.00000000, 1560.00000000, 26.00000000, 1.50000000, -1452339441 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, l_U1365, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, -1246.00000000, 1560.00000000, 26.00000000, 1, 0.00000000 );
            l_U1401[4] = 1;
        }
    }
    if (NOT l_U1401[5])
    {
        if ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1368._fU0, l_U1368._fU4, l_U1368._fU8, 1.50000000, -223135715 )) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -160.00000000, 593.00000000, 119.00000000, 1.50000000, -223135715 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -223135715, l_U1368, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -223135715, -160.00000000, 593.00000000, 119.00000000, 1, 0.00000000 );
            l_U1401[5] = 1;
        }
    }
    if (NOT l_U1401[5])
    {
        if ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1371._fU0, l_U1371._fU4, l_U1371._fU8, 1.50000000, -134192122 )) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 76, 64857, 15, 1.50000000, -602166187 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -134192122, l_U1371, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -602166187, 76, 64857, 15, 1, 0.00000000 );
            l_U1401[5] = 1;
        }
    }
    if (NOT l_U1401[7])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1374._fU0, l_U1374._fU4, l_U1374._fU8, 1.50000000, 804737190 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 804737190, l_U1374, 1, 0.00000000 );
            l_U1401[7] = 1;
        }
    }
    if (NOT l_U1401[8])
    {
        if ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1377._fU0, l_U1377._fU4, l_U1377._fU8, 1.50000000, 387699963 )) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 928, 65047, 16, 1.50000000, 387699963 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 387699963, l_U1377, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 387699963, 928, 65047, 16, 1, 0.00000000 );
            l_U1401[8] = 1;
        }
    }
    if (NOT l_U1401[9])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1380._fU0, l_U1380._fU4, l_U1380._fU8, 1.50000000, 807349477 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U1380, 1, 0.00000000 );
            l_U1401[9] = 1;
        }
    }
    if (NOT l_U1401[10])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 65439, 878, 15, 1.50000000, 419786306 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 419786306, 65439, 878, 15, 1, 0.00000000 );
            l_U1401[10] = 1;
        }
    }
    if (NOT l_U1401[11])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 64574, 893, 14, 1.50000000, 419786306 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 419786306, 64574, 893, 14, 0, 0.00000000 );
            l_U1401[11] = 1;
        }
    }
    if (NOT l_U1401[12])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 597, 1400, 12, 1.50000000, 261592072 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 261592072, 597, 1400, 12, 1, 0.00000000 );
            l_U1401[12] = 1;
        }
    }
    if (NOT l_U1401[13])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1392._fU0, l_U1392._fU4, l_U1392._fU8, 1.50000000, 1033979537 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1033979537, l_U1392, 1, 0.00000000 );
            l_U1401[13] = 1;
        }
    }
    if (NOT l_U1401[14])
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_4360(), l_U1395._fU0, l_U1395._fU4, l_U1395._fU8, 30.00000000, 30.00000000, 12.50000000, 0 ))
        {
            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1395._fU0, l_U1395._fU4, l_U1395._fU8, 4.50000000, 1135556036 ))
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1135556036, l_U1395, 1, 0.00000000 );
                l_U1401[14] = 1;
            }
        }
    }
    if (NOT l_U1401[15])
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_4360(), 1286.00000000, 400.00000000, 23.00000000, 30.00000000, 30.00000000, 12.50000000, 0 ))
        {
            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 1286, 400, 23, 4.50000000, -842872319 ))
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -842872319, 1286, 400, 23, 1, 0.00000000 );
                l_U1401[15] = 1;
            }
        }
    }
    return;
}

void sub_66621(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16)
{
    int I;
    int iVar20;
    unknown[16] uVar21;
    unknown uVar38;

    iVar20 = GET_PLAYER_ID();
    array(ref uVar21, 16);
    sub_66688( ref uVar21, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam9, uParam10, uParam11, uParam12, uParam13, uParam14, uParam15, uParam16 );
    sub_66879( ref uVar21[iVar20], g_U18._fU636, g_U18._fU632 );
    if (NOT g_U18._fU1492)
    {
        switch (g_U18._fU632)
        {
            case 0:
            for ( I = 0; I <= (iParam0 - 1); I++ )
            {
                if ((I != iVar20) AND (IS_NETWORK_PLAYER_ACTIVE( I )))
                {
                    if (((sub_67078( ref uVar21[I] )) == iVar20) AND ((sub_67118( ref uVar21[I] )) == 3))
                    {
                        if ((NOT (NETWORK_IS_PLAYER_BLOCKED_BY_ME( I ))) AND (NOT (NETWORK_AM_I_BLOCKED_BY_PLAYER( I ))))
                        {
                            StrCopy( ref g_U18._fU584, GET_PLAYER_NAME( sub_4433( I ) ), 32 );
                            sub_67217( ref uVar21[iVar20], I, 1 );
                            break;
                        }
                    }
                }
            }
            break;
            case 1:
            if (g_U18._fU636 == 31)
            {
                sub_67217( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if (IS_NETWORK_PLAYER_ACTIVE( g_U18._fU636 ))
            {
                if (NOT (sub_67359( iVar20, g_U18._fU636, ref uVar38 )))
                {
                    sub_67217( ref uVar21[iVar20], 31, 4 );
                    break;
                }
                switch (sub_67118( ref uVar21[g_U18._fU636] ))
                {
                    case 3:
                    case 9: if ((sub_67078( ref uVar21[g_U18._fU636] )) == iVar20)
                    {
                        break;
                    }
                    default:
                    sub_67217( ref uVar21[iVar20], 31, 4 );
                    break;
                }
            }
            else
            {
                sub_67217( ref uVar21[iVar20], 31, 4 );
            }
            break;
            case 2:
            if (g_U18._fU636 == 31)
            {
                sub_67217( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if (IS_NETWORK_PLAYER_ACTIVE( g_U18._fU636 ))
            {
                if ((sub_67118( ref uVar21[g_U18._fU636] )) == 0)
                {
                    sub_67217( ref uVar21[iVar20], g_U18._fU636, 3 );
                    break;
                }
            }
            sub_67217( ref uVar21[iVar20], 31, 6 );
            break;
            case 3:
            if (g_U18._fU636 == 31)
            {
                sub_67217( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if (IS_NETWORK_PLAYER_ACTIVE( g_U18._fU636 ))
            {
                if (NOT (sub_67359( iVar20, g_U18._fU636, ref uVar38 )))
                {
                    sub_67217( ref uVar21[iVar20], 31, 4 );
                    break;
                }
                switch (sub_67118( ref uVar21[g_U18._fU636] ))
                {
                    case 0: break;
                    case 9:
                    case 1:
                    if ((sub_67078( ref uVar21[g_U18._fU636] )) == iVar20)
                    {
                        if ((sub_67118( ref uVar21[g_U18._fU636] )) == 9)
                        {
                            sub_67217( ref uVar21[iVar20], g_U18._fU636, 9 );
                        }
                        break;
                    }
                    sub_67217( ref uVar21[iVar20], 31, 6 );
                    break;
                    default:
                    sub_67217( ref uVar21[iVar20], 31, 4 );
                    break;
                }
            }
            else
            {
                sub_67217( ref uVar21[iVar20], 31, 6 );
            }
            break;
            case 9:
            if (g_U18._fU636 == 31)
            {
                sub_67217( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if (NOT (sub_67359( iVar20, g_U18._fU636, ref uVar38 )))
            {
                sub_67217( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if ((sub_67078( ref uVar21[g_U18._fU636] )) != iVar20)
            {
                sub_67217( ref uVar21[iVar20], 31, 4 );
            }
            break;
        }
    }
    sub_68174( iVar20, ref uVar21, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam9, uParam10, uParam11, uParam12, uParam13, uParam14, uParam15, uParam16 );
    return;
}

void sub_66688(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16)
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

void sub_66879(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_66892( uParam0, uParam1 );
    sub_66926( uParam0, uParam2 );
    return;
}

void sub_66892(unknown uParam0, unknown uParam1)
{
    SET_BITS_IN_RANGE( uParam0, 0, 15, uParam1 );
    return;
}

void sub_66926(unknown uParam0, unknown uParam1)
{
    SET_BITS_IN_RANGE( uParam0, 16, 31, uParam1 );
    return;
}

void sub_67078(unknown uParam0)
{
    return GET_BITS_IN_RANGE( (uParam0^), 0, 15 );
}

void sub_67118(unknown uParam0)
{
    return GET_BITS_IN_RANGE( (uParam0^), 16, 31 );
}

void sub_67217(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U18._fU636 = uParam1;
    g_U18._fU632 = uParam2;
    sub_66892( uParam0, uParam1 );
    sub_66926( uParam0, uParam2 );
    return;
}

int sub_67359(unknown uParam0, int iParam1, unknown uParam2)
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

void sub_68174(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17)
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

int sub_68647(unknown uParam0)
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

int sub_68829(unknown uParam0, unknown uParam1)
{
    if ((l_U1544[GET_PLAYER_ID()]._fU0 == 1) AND (l_U1641 < (l_U1487._fU8 + 30000)))
    {
        if ((GET_PLAYER_TEAM( sub_30185() )) > -1)
        {
            if (sub_68934( l_U1487._fU88, l_U1487._fU92[GET_PLAYER_TEAM( sub_30185() )], uParam0, uParam1 ))
            {
                return 1;
            }
        }
    }
    else if (sub_69346( ref l_U1544[GET_PLAYER_ID()]._fU4, l_U1487._fU12[GET_PLAYER_ID()], uParam0, uParam1 ))
    {
        return 1;
    }
    return 0;
}

int sub_68934(unknown uParam0, int iParam1, int iParam2, unknown uParam3)
{
    int I;
    int iVar7;
    unknown uVar8;
    unknown uVar9;

    if (iParam1 > -1)
    {
        for ( I = 0; I < 16; I++ )
        {
            if (I == GET_PLAYER_ID())
            {
                I = 16;
            }
            else if (IS_NETWORK_PLAYER_ACTIVE( I ))
            {
                if ((GET_PLAYER_TEAM( sub_30185() )) == (GET_PLAYER_TEAM( sub_4433( I ) )))
                {
                    iVar7++;
                }
            }
        }
        (uParam3^) = (360.00000000 / (TO_FLOAT( GET_NO_OF_PLAYERS_IN_TEAM( GET_PLAYER_TEAM( sub_30185() ) ) ))) * (TO_FLOAT( iVar7 ));
        uVar8 = SIN( (uParam3^) );
        uVar9 = COS( (uParam3^) );
        (iParam2^) = {sub_11847( uParam0, iParam1 )};
        iParam2->_fU0 += (uVar9 * 2.50000000) + (uVar8 * 2.50000000);
        iParam2->_fU4 += (uVar8 * 2.50000000) + ((uVar9 * -1) * 2.50000000);
        (uParam3^) = sub_69206( (uParam3^) + 45.00000000 );
        return 1;
    }
    return 0;
}

void sub_69206(float Result)
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

int sub_69346(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3)
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
                    GET_SPAWN_COORDINATES_FOR_CAR_NODE( iParam1, sub_10968( -1, 0 ), uParam2, uParam3 );
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

void sub_69513(unknown uParam0)
{
    unknown Result;

    GET_WEAPONTYPE_MODEL( uParam0, ref Result );
    return Result;
}

void sub_69562(unknown uParam0, unknown uParam1)
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
    (uParam1^) = sub_69774( Result );
    return Result;
}

int sub_69774(unknown uParam0)
{
    switch (uParam0)
    {
        case 7: return 30 * l_U1340;
        case 9: return 30 * l_U1340;
        case 10: return 16 * l_U1340;
        case 11: return 16 * l_U1340;
        case 12: return 60 * l_U1340;
        case 13: return 60 * l_U1340;
        case 14: return 80 * l_U1340;
        case 15: return 80 * l_U1340;
        case 16: return 12 * l_U1340;
        case 17: return 12 * l_U1340;
        case 5: return 3 * l_U1340;
        case 4: return 3 * l_U1340;
        case 18: return 2 * l_U1340;
    }
    return 0;
}

void sub_70070(unknown uParam0)
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

void sub_70353(unknown uParam0, unknown uParam1, unknown uParam2)
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
        GET_NETWORK_TIMER( ref l_U1641 );
        sub_4925();
    }
    return;
}

void sub_70472(unknown uParam0)
{
    int I;
    char[16] cVar4;

    sub_70483( uParam0 );
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
    l_U989[sub_25772( 16 )]._fU20 = 0;
    if (NOT NETWORK_IS_TVT())
    {
        l_U989[sub_25772( 17 )]._fU20 = GET_PLAYER_ID();
    }
    StrCopy( ref cVar4, "LONG_DESCRP_", 16 );
    ConcatString(ref cVar4, sub_5847(), 16);
    if (l_U1180 == 1)
    {
        ConcatString(ref cVar4, "A", 16);
    }
    else if (l_U1180 == 2)
    {
        ConcatString(ref cVar4, "B", 16);
    }
    PRINT_NOW( ref cVar4, 1, 1 );
    if ((sub_25090()) || (NOT N_604003528()))
    {
        l_U1159[GET_PLAYER_ID()] = GET_PLAYER_RANK_LEVEL_DURING_MP( GET_PLAYER_ID() );
    }
    UNPAUSE_GAME();
    return;
}

void sub_70483(unknown uParam0)
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
                sub_70656( ref l_U989[I]._fU0, ref cVar5, iVar4 );
                break;
                case 5:
                case 7:
                if ((uParam0^)[I] > 0)
                {
                    sub_70656( ref l_U989[I]._fU0, "YES", iVar4 );
                }
                else
                {
                    sub_70656( ref l_U989[I]._fU0, "NO", iVar4 );
                }
                break;
                case 6:
                case 9:
                case 10:
                if ((uParam0^)[I] > 0)
                {
                    sub_70656( ref l_U989[I]._fU0, "ON", iVar4 );
                }
                else
                {
                    sub_70656( ref l_U989[I]._fU0, "OFF", iVar4 );
                }
                break;
                case 11:
                StrCopy( ref cVar5, "CPGO_NUM_", 16 );
                ConcatString(ref cVar5, (uParam0^)[I], 16);
                sub_70656( ref l_U989[I]._fU0, ref cVar5, iVar4 );
                break;
            }
            iVar4++;
        }
    }
    return;
}

void sub_70656(unknown uParam0, unknown uParam1, unknown uParam2)
{
    StrCopy( ref g_U18._fU676[uParam2], uParam0, 16 );
    StrCopy( ref g_U18._fU1080[uParam2], uParam1, 16 );
    sub_70731( "\n ~~~~ NetCellphone Adding info, ", uParam0 );
    sub_70731( " and ", uParam1 );
    return;
}

void sub_70731(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_71559(unknown uParam0)
{
    int I;
    int[16] iVar4;

    array(ref iVar4, 16);
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            iVar4[I] = l_U1544[I]._fU20;
        }
        else
        {
            iVar4[I] = -1;
        }
    }
    sub_71656( ref iVar4, ref l_U1544[GET_PLAYER_ID()]._fU20, uParam0 );
    return;
}

void sub_71656(unknown uParam0, unknown uParam1, boolean bParam2)
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
        iVar6 = sub_71708();
    }
    if (NOT NETWORK_IS_TVT())
    {
        if (iVar6 == (uParam1^))
        {
            if (((uParam1^) > -1) AND ((uParam1^) != GET_PLAYER_ID()))
            {
                if (IS_NETWORK_PLAYER_ACTIVE( iVar6 ))
                {
                    if (NOT (COMPARE_STRING( GET_PLAYER_NAME( sub_4433( iVar6 ) ), ref l_U1309 )))
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
                                            sub_4775( 1 );
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
                StrCopy( ref l_U1309, GET_PLAYER_NAME( sub_4433( iVar6 ) ), 32 );
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
                                sub_72268( I, "WANTS_TO_KICK", (uParam0^)[I] );
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

void sub_71708()
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

void sub_72268(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    uVar5 = sub_72278( -2 );
    StrCopy( ref l_U6[uVar5]._fU76._fU0, GET_PLAYER_NAME( sub_4433( uParam0 ) ), 64 );
    StrCopy( ref l_U6[uVar5]._fU12, uParam1, 64 );
    sub_47263( sub_4433( uParam0 ), ref l_U6[uVar5]._fU76._fU68, ref l_U6[uVar5]._fU76._fU72, ref l_U6[uVar5]._fU76._fU76 );
    StrCopy( ref l_U6[uVar5]._fU156._fU0, GET_PLAYER_NAME( sub_4433( uParam2 ) ), 64 );
    sub_47263( sub_4433( uParam2 ), ref l_U6[uVar5]._fU156._fU68, ref l_U6[uVar5]._fU156._fU72, ref l_U6[uVar5]._fU156._fU76 );
    sub_72853( uVar5 );
    return;
}

void sub_72278(unknown uParam0)
{
    unknown Result;

    Result = l_U479;
    sub_72305( ref l_U6[l_U479] );
    l_U6[l_U479]._fU8 = uParam0;
    l_U6[l_U479]._fU0 = 1;
    l_U6[l_U479]._fU4 = sub_72505() + 6000;
    sub_11717( ref l_U479, 8 );
    sub_72305( ref l_U6[l_U479] );
    if (l_U479 == l_U480)
    {
        sub_11717( ref l_U480, 8 );
    }
    PLAY_AUDIO_EVENT( "FRONTEND_GAME_MP_TICKER_MESSAGE" );
    return Result;
}

void sub_72305(int iParam0)
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

void sub_72505()
{
    unknown Result;

    GET_GAME_TIMER( ref Result );
    return Result;
}

void sub_72853(unknown uParam0)
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

void sub_73748(unknown uParam0, int iParam1, boolean bParam2, int iParam3)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U481[I] == -1)
            {
                sub_73811( I, -1, "JOINED" );
                l_U481[I] = 1;
            }
            if (l_U481[I] == 0)
            {
                l_U481[I] = 1;
            }
            if (IS_CHAR_FATALLY_INJURED( sub_4471( I ) ))
            {
                sub_74088( ref (uParam0^)[I] );
                if (l_U481[I] == 2)
                {
                    if (I == (FIND_NETWORK_KILLER_OF_PLAYER( I )))
                    {
                        sub_73811( I, -1, "DIED" );
                    }
                    else if (IS_NETWORK_PLAYER_ACTIVE( FIND_NETWORK_KILLER_OF_PLAYER( I ) ))
                    {
                        sub_74231( FIND_NETWORK_KILLER_OF_PLAYER( I ), I );
                    }
                    l_U481[I] = 3;
                }
            }
            else if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
            {
                if (IS_PLAYER_SCRIPT_CONTROL_ON( sub_4433( I ) ))
                {
                    if (sub_74792( I ))
                    {
                        sub_74088( ref (uParam0^)[I] );
                    }
                    else if (((((iParam1 == 0) || ((iParam1 != 4) AND (((GET_PLAYER_TEAM( sub_30185() )) == (GET_PLAYER_TEAM( sub_4433( I ) ))) AND ((GET_PLAYER_TEAM( sub_30185() )) > -1)))) || (((sub_5847() == 10) AND ((GET_PLAYER_TEAM( sub_30185() )) == 0)) AND (NOT bParam2))) || ((((sub_5847() == 10) AND ((GET_PLAYER_TEAM( sub_30185() )) == 0)) AND (bParam2)) AND (I == iParam3))) || (((iParam1 == 6) AND (bParam2)) AND (iParam3 == GET_PLAYER_ID())))
                    {
                        if (NOT (DOES_BLIP_EXIST( (uParam0^)[I] )))
                        {
                            (uParam0^)[I] = sub_75157( I );
                        }
                    }
                    else if ((iParam1 == 1) || ((iParam1 == 7) AND (iParam3 == GET_PLAYER_ID())))
                    {
                        if (sub_75384( sub_4360(), sub_4471( I ), l_U1273 ))
                        {
                            if (NOT (DOES_BLIP_EXIST( (uParam0^)[I] )))
                            {
                                (uParam0^)[I] = sub_75157( I );
                                l_U1274[I] = 255;
                            }
                        }
                        else if (DOES_BLIP_EXIST( (uParam0^)[I] ))
                        {
                            if (l_U1274[I] == 0)
                            {
                                REMOVE_BLIP( (uParam0^)[I] );
                                (uParam0^)[I] = nil;
                            }
                            else
                            {
                                CHANGE_BLIP_ALPHA( (uParam0^)[I], l_U1274[I] );
                                l_U1274[I] -= 20;
                                sub_75678( ref l_U1274[I], 0, 255 );
                            }
                        }
                    }
                    else if (iParam1 == 2)
                    {
                        if (NOT (sub_75384( sub_4360(), sub_4471( I ), l_U1273 )))
                        {
                            if (NOT (DOES_BLIP_EXIST( (uParam0^)[I] )))
                            {
                                (uParam0^)[I] = sub_75157( I );
                                l_U1274[I] = 0;
                            }
                            if (DOES_BLIP_EXIST( (uParam0^)[I] ))
                            {
                                CHANGE_BLIP_ALPHA( (uParam0^)[I], l_U1274[I] );
                                l_U1274[I] += 25;
                                sub_75678( ref l_U1274[I], 0, 255 );
                            }
                        }
                        else if (DOES_BLIP_EXIST( (uParam0^)[I] ))
                        {
                            if (l_U1274[I] == 0)
                            {
                                REMOVE_BLIP( (uParam0^)[I] );
                                (uParam0^)[I] = nil;
                            }
                            else
                            {
                                CHANGE_BLIP_ALPHA( (uParam0^)[I], l_U1274[I] );
                                l_U1274[I] -= 20;
                                sub_75678( ref l_U1274[I], 0, 255 );
                            }
                        }
                    }
                    else if (iParam1 == 3)
                    {
                        if (sub_5847() == 16)
                        {
                            if (GET_HOST_ID() == I)
                            {
                                if (NOT (DOES_BLIP_EXIST( (uParam0^)[I] )))
                                {
                                    (uParam0^)[I] = sub_75157( I );
                                }
                            }
                            else
                            {
                                sub_74088( ref (uParam0^)[I] );
                            }
                        }
                        else if ((sub_76118( I )) == 1)
                        {
                            if (NOT (DOES_BLIP_EXIST( (uParam0^)[I] )))
                            {
                                (uParam0^)[I] = sub_75157( I );
                            }
                        }
                        else
                        {
                            sub_74088( ref (uParam0^)[I] );
                        }
                    }
                    else if (iParam1 == 4)
                    {
                        sub_74088( ref (uParam0^)[I] );
                    };;;;;;
                }
                else
                {
                    sub_74088( ref (uParam0^)[I] );
                }
            }
            if (l_U481[I] == 1)
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
            sub_74088( ref (uParam0^)[I] );
            sub_73811( I, -1, "LEFTGAME" );
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
                    sub_73811( l_U1291, -1, "IS_PARTY_LEADER" );
                }
            }
        }
    }
    return;
}

void sub_73811(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar6 = sub_72278( uParam1 );
    StrCopy( ref l_U6[uVar6]._fU76._fU0, GET_PLAYER_NAME( sub_4433( uParam0 ) ), 64 );
    sub_47263( sub_4433( uParam0 ), ref l_U6[uVar6]._fU76._fU68, ref l_U6[uVar6]._fU76._fU72, ref l_U6[uVar6]._fU76._fU76 );
    StrCopy( ref l_U6[uVar6]._fU156._fU0, uParam2, 64 );
    l_U6[uVar6]._fU156._fU64 = 1;
    GET_HUD_COLOUR( 1, ref l_U6[uVar6]._fU156._fU68, ref l_U6[uVar6]._fU156._fU72, ref l_U6[uVar6]._fU156._fU76, ref uVar5 );
    sub_72853( uVar6 );
    return;
}

void sub_74088(unknown uParam0)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        SET_ROUTE( (uParam0^), 0 );
        REMOVE_BLIP( (uParam0^) );
    }
    (uParam0^) = nil;
    return;
}

void sub_74231(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    char[16] cVar5;

    GET_DESTROYER_OF_NETWORK_ID( sub_8614( sub_4471( uParam1 ) ), ref uVar4 );
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
    ConcatString(ref cVar5, sub_6840( 0, 10 ), 16);
    REGISTER_KILL_IN_MULTIPLAYER_GAME( uParam0, uParam1, uVar4 );
    sub_72268( uParam0, ref cVar5, uParam1 );
    return;
}

int sub_74792(unknown uParam0)
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_4360() ))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_4471( uParam0 ) ))
            {
                if ((GET_PLAYER_TEAM( sub_4433( uParam0 ) )) == (GET_PLAYER_TEAM( sub_4433( GET_PLAYER_ID() ) )))
                {
                    if ((sub_74900( sub_4360() )) == (sub_74900( sub_4471( uParam0 ) )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_74900(unknown uParam0)
{
    unknown Result;

    if (IS_CHAR_IN_ANY_CAR( uParam0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref Result );
        return Result;
    }
    return nil;
}

void sub_75157(int iParam0)
{
    unknown Result;
    int iVar4;
    int iVar5;
    int iVar6;

    ADD_BLIP_FOR_CHAR( sub_4471( iParam0 ), ref Result );
    sub_47263( sub_4433( iParam0 ), ref iVar4, ref iVar5, ref iVar6 );
    CHANGE_BLIP_COLOUR( Result, (((iVar4 * 16777216) + (iVar5 * 65536)) + (iVar6 * 256)) + 255 );
    CHANGE_BLIP_PRIORITY( Result, 3 );
    CHANGE_BLIP_SCALE( Result, 0.90000000 );
    CHANGE_BLIP_NAME_FROM_ASCII( Result, GET_PLAYER_NAME( sub_4433( iParam0 ) ) );
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

int sub_75384(unknown uParam0, unknown uParam1, float fParam2)
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

void sub_75678(unknown uParam0, int iParam1, int iParam2)
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

void sub_76118(unknown uParam0)
{
    if (((sub_5998()) || (sub_5953())) AND ((GET_PLAYER_TEAM( sub_4433( uParam0 ) )) > -1))
    {
        return sub_76174( GET_PLAYER_TEAM( sub_4433( uParam0 ) ) );
    }
    return sub_59723( uParam0 );
}

int sub_76174(int iParam0)
{
    int I;
    int Result;

    if (sub_76185( iParam0 ))
    {
        for ( I = 0; I < 8; I++ )
        {
            if ((sub_30223( l_U932[I] )) > 0)
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
            if ((sub_30223( l_U932[I] )) > 0)
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

int sub_76185(int iParam0)
{
    int I;

    for ( I = 0; I < 8; I++ )
    {
        if (I != iParam0)
        {
            if ((sub_60704( I )) > 0)
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

void sub_76813()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1544[I]._fU16;
    }
    sub_76891( l_U1487._fU216, ref uVar3, ref l_U1544[GET_PLAYER_ID()]._fU16 );
    return;
}

void sub_76891(int iParam0, unknown uParam1, unknown uParam2)
{
    int I;
    char[64] cVar6;
    char[16] cVar22;

    (uParam2^) = sub_76900();
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
                    sub_77056( I, -1, ref cVar6 );
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
            sub_77341( "NEXT_GAME_MODE", -1, ref cVar22 );
            l_U886 = iParam0;
        }
    }
    return;
}

void sub_76900()
{
    return g_U18._fU660;
}

void sub_77056(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar6 = sub_72278( uParam1 );
    StrCopy( ref l_U6[uVar6]._fU76._fU0, GET_PLAYER_NAME( sub_4433( uParam0 ) ), 64 );
    sub_47263( sub_4433( uParam0 ), ref l_U6[uVar6]._fU76._fU68, ref l_U6[uVar6]._fU76._fU72, ref l_U6[uVar6]._fU76._fU76 );
    StrCopy( ref l_U6[uVar6]._fU156._fU0, uParam2, 64 );
    GET_HUD_COLOUR( 1, ref l_U6[uVar6]._fU156._fU68, ref l_U6[uVar6]._fU156._fU72, ref l_U6[uVar6]._fU156._fU76, ref uVar5 );
    sub_72853( uVar6 );
    return;
}

void sub_77341(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar6 = sub_72278( uParam1 );
    StrCopy( ref l_U6[uVar6]._fU76._fU0, uParam0, 64 );
    l_U6[uVar6]._fU76._fU64 = 1;
    GET_HUD_COLOUR( 1, ref l_U6[uVar6]._fU76._fU68, ref l_U6[uVar6]._fU76._fU72, ref l_U6[uVar6]._fU76._fU76, ref uVar5 );
    StrCopy( ref l_U6[uVar6]._fU156._fU0, uParam2, 64 );
    l_U6[uVar6]._fU156._fU64 = 1;
    GET_HUD_COLOUR( 1, ref l_U6[uVar6]._fU156._fU68, ref l_U6[uVar6]._fU156._fU72, ref l_U6[uVar6]._fU156._fU76, ref uVar5 );
    sub_72853( uVar6 );
    return;
}

void sub_77583()
{
    if (sub_77592())
    {
        if (sub_77753())
        {
            switch (sub_78184())
            {
                case 0:
                SAY_AMBIENT_SPEECH( sub_4360(), "GANG_CHASE", 1, 0, 0 );
                break;
                case 1:
                SAY_AMBIENT_SPEECH( sub_4360(), "GENERIC_FUCK_OFF", 1, 0, 0 );
                break;
                case 2:
                SAY_AMBIENT_SPEECH( sub_4360(), "GENERIC_HI", 1, 0, 0 );
                break;
                case 3:
                SAY_AMBIENT_SPEECH( sub_4360(), "GANG_WATCH_THIS_GUY_SOLO", 1, 0, 0 );
                break;
                case 4:
                SAY_AMBIENT_SPEECH( sub_4360(), "JEERING", 1, 0, 0 );
                break;
                case 5:
                SAY_AMBIENT_SPEECH( sub_4360(), "ABUSE_DRIVER", 1, 0, 0 );
                break;
                case 6:
                SAY_AMBIENT_SPEECH( sub_4360(), "TARGET_NOGENDER", 1, 0, 0 );
                break;
                case 7:
                SAY_AMBIENT_SPEECH( sub_4360(), "FIGHT", 1, 0, 0 );
                break;
                case 8:
                SAY_AMBIENT_SPEECH( sub_4360(), "GANG_FIGHT_CHEER", 1, 0, 0 );
                break;
            }
        }
    }
    return;
}

int sub_77592()
{
    int iVar2;
    unknown uVar3;
    int iVar4;

    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (IS_CHAR_IN_ANY_HELI( sub_4360() ))
        {
            return 0;
        }
        if (IS_CHAR_IN_ANY_CAR( sub_4360() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4360(), ref uVar3 );
            GET_DRIVER_OF_CAR( uVar3, ref iVar4 );
            if (iVar4 == sub_4360())
            {
                GET_CURRENT_CHAR_WEAPON( sub_4360(), ref iVar2 );
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

int sub_77753()
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (sub_77783( 1, 1 ))
        {
            if (NOT (IS_CHAR_IN_AIR( sub_4360() )))
            {
                if (NOT l_U1425)
                {
                    if (IS_CONTROL_JUST_PRESSED( 0, 23 ))
                    {
                        if (NOT (IS_AMBIENT_SPEECH_PLAYING( sub_4360() )))
                        {
                            l_U1425 = 1;
                            return 1;
                        }
                    }
                }
                else if (NOT (IS_CONTROL_JUST_PRESSED( 0, 23 )))
                {
                    l_U1425 = 0;
                }
            }
        }
    }
    return 0;
}

int sub_77783(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_4360() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4360(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_4360() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4360(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_4360()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_4360() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_4360() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_30185() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_30185() )))
    {
        return 0;
    }
    return 1;
}

int sub_78184()
{
    if (sub_78193())
    {
        return 6;
    }
    else if (sub_78335( 1 ))
    {
        return 7;
    }
    else if (sub_78335( 0 ))
    {
        return 8;
    }
    if (sub_79027())
    {
        return 1;
    }
    if ((sub_79348()) || ((sub_78370()) AND (sub_79455())))
    {
        if (sub_79636() != nil)
        {
            if (IS_CHAR_MALE( sub_79636() ))
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
    if (sub_79806())
    {
        return 5;
    }
    if (sub_80034( 10.00000000 ))
    {
        return 2;
    }
    return 2;
}

int sub_78193()
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (IS_CHAR_SHOOTING( sub_4360() ))
        {
            return 1;
        }
    }
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if ((IS_CHAR_ARMED( sub_4360(), 2 )) || (IS_CHAR_ARMED( sub_4360(), 4 )))
        {
            if (IS_BUTTON_PRESSED( 0, 7 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_78335(boolean bParam0)
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (bParam0)
        {
            if (sub_78370())
            {
                if (IS_NETWORK_PLAYER_ACTIVE( l_U1424 ))
                {
                    if (NOT (IS_CHAR_DEAD( sub_4471( l_U1424 ) )))
                    {
                        if (IS_CHAR_VISIBLE( sub_4471( l_U1424 ) ))
                        {
                            if (sub_75384( sub_4360(), sub_4471( l_U1424 ), 10.00000000 ))
                            {
                                if (IS_CHAR_IN_MELEE_COMBAT( sub_4360() ))
                                {
                                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( sub_4471( l_U1424 ), sub_4360(), 0 ))
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
        else if (IS_NETWORK_PLAYER_ACTIVE( l_U1424 ))
        {
            if (NOT (IS_CHAR_DEAD( sub_4471( l_U1424 ) )))
            {
                if (IS_CHAR_VISIBLE( sub_4471( l_U1424 ) ))
                {
                    if (sub_75384( sub_4360(), sub_4471( l_U1424 ), 10.00000000 ))
                    {
                        if (IS_CHAR_IN_MELEE_COMBAT( sub_4471( l_U1424 ) ))
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

int sub_78370()
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
                    if ((NOT (IS_CHAR_DEAD( sub_4360() ))) AND (NOT (IS_CHAR_DEAD( sub_4471( I ) ))))
                    {
                        if (IS_CHAR_VISIBLE( sub_4471( I ) ))
                        {
                            GET_CHAR_COORDINATES( sub_4471( GET_PLAYER_ID() ), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                            GET_CHAR_COORDINATES( sub_4471( I ), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                            if ((VDIST( uVar4, uVar7 )) < 10000.00000000)
                            {
                                fVar2 = VDIST( uVar4, uVar7 );
                                l_U1424 = I;
                            }
                        }
                    }
                }
            }
        }
    }
    if (IS_NETWORK_PLAYER_ACTIVE( l_U1424 ))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (((GET_PLAYER_TEAM( sub_4433( l_U1424 ) )) != (GET_PLAYER_TEAM( sub_30185() ))) || ((GET_PLAYER_TEAM( sub_4433( l_U1424 ) )) == -1))
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

int sub_79027()
{
    int I;
    unknown uVar3;

    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( sub_4360(), 57 ))
        {
            CLEAR_CHAR_LAST_WEAPON_DAMAGE( sub_4360() );
            CLEAR_CHAR_LAST_DAMAGE_ENTITY( sub_4360() );
            CLEAR_CHAR_LAST_DAMAGE_BONE( sub_4360() );
            return 1;
        }
        for ( I = 0; I < 16; I++ )
        {
            if (IS_NETWORK_PLAYER_ACTIVE( I ))
            {
                if (I != GET_PLAYER_ID())
                {
                    if (IS_CHAR_IN_ANY_CAR( sub_4471( I ) ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4471( I ), ref uVar3 );
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CAR( sub_4360(), uVar3 ))
                        {
                            CLEAR_CHAR_LAST_WEAPON_DAMAGE( sub_4360() );
                            CLEAR_CHAR_LAST_DAMAGE_ENTITY( sub_4360() );
                            CLEAR_CHAR_LAST_DAMAGE_BONE( sub_4360() );
                            return 1;
                        }
                    }
                    else if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( sub_4360(), sub_4471( I ), 0 ))
                    {
                        CLEAR_CHAR_LAST_WEAPON_DAMAGE( sub_4360() );
                        CLEAR_CHAR_LAST_DAMAGE_ENTITY( sub_4360() );
                        CLEAR_CHAR_LAST_DAMAGE_BONE( sub_4360() );
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_79348()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4360(), 0.00000000, 5.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        if (ARE_ENEMY_PEDS_IN_AREA( sub_4360(), uVar2, 10.00000000 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_79455()
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( l_U1424 ))
        {
            if (NOT (IS_CHAR_DEAD( sub_4471( l_U1424 ) )))
            {
                if (IS_CHAR_VISIBLE( sub_4471( l_U1424 ) ))
                {
                    if (sub_75384( sub_4360(), sub_4471( l_U1424 ), 10.00000000 ))
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( sub_4471( l_U1424 ) )))
                        {
                            if (NOT (IS_CHAR_IN_MELEE_COMBAT( sub_4360() )))
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

void sub_79636()
{
    if (IS_NETWORK_PLAYER_ACTIVE( l_U1424 ))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (((GET_PLAYER_TEAM( sub_4433( l_U1424 ) )) != (GET_PLAYER_TEAM( sub_30185() ))) || ((GET_PLAYER_TEAM( sub_4433( l_U1424 ) )) == -1))
            {
                return sub_4471( l_U1424 );
            }
        }
    }
    return nil;
}

int sub_79806()
{
    float fVar2;

    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (sub_78370())
        {
            if (sub_29920())
            {
                if (IS_NETWORK_PLAYER_ACTIVE( l_U1424 ))
                {
                    if (NOT (IS_CHAR_DEAD( sub_4471( l_U1424 ) )))
                    {
                        if (IS_CHAR_VISIBLE( sub_4471( l_U1424 ) ))
                        {
                            if (sub_75384( sub_4360(), sub_4471( l_U1424 ), 10.00000000 ))
                            {
                                if ((IS_CHAR_IN_ANY_CAR( sub_4360() )) AND (IS_CHAR_IN_ANY_CAR( sub_4471( l_U1424 ) )))
                                {
                                    GET_CHAR_SPEED( sub_4360(), ref fVar2 );
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

int sub_80034(unknown uParam0)
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
                    if (NOT (IS_CHAR_DEAD( sub_4471( I ) )))
                    {
                        if (IS_CHAR_VISIBLE( sub_4471( I ) ))
                        {
                            if (sub_75384( sub_4360(), sub_4471( I ), uParam0 ))
                            {
                                if (NOT (IS_CHAR_IN_ANY_CAR( sub_4471( I ) )))
                                {
                                    if ((NOT (IS_CHAR_IN_MELEE_COMBAT( sub_4360() ))) AND (NOT (IS_CHAR_IN_MELEE_COMBAT( sub_4471( I ) ))))
                                    {
                                        if (((GET_PLAYER_TEAM( sub_4433( I ) )) != (GET_PLAYER_TEAM( sub_30185() ))) || ((GET_PLAYER_TEAM( sub_4433( I ) )) == -1))
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

int sub_80720()
{
    int iVar2;

    GET_NETWORK_TIMER( ref iVar2 );
    if (NOT sub_80737())
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

int sub_80737()
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

void sub_80983(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
{
    if (NOT (IS_FONT_LOADED( 6 )))
    {
        LOAD_TEXT_FONT( 6 );
    }
    HIDE_HELP_TEXT_THIS_FRAME();
    if (((iParam2 == 1) || (iParam2 == 3)) || (iParam2 == 5))
    {
        sub_81042( uParam1 );
    }
    sub_81471( uParam0 );
    if ((sub_5371() + sub_6095()) > 22)
    {
        if (GET_IS_HIDEF())
        {
            sub_82052( iParam2, 0.07000000, 0.06400000, 0.31300000, 0.40600000, 0.02450000, 0.28000000, 0.39070000, 0.02300000, uParam3, uParam4 );
        }
        else
        {
            sub_82052( iParam2, 0.09000000, 0.08400000, 0.30000000, 0.44000000, 0.02450000, 0.30000000, 0.44000000, 0.02300000, uParam3, uParam4 );
        }
    }
    else if (GET_IS_HIDEF())
    {
        sub_82052( iParam2, 0.07000000, 0.06400000, 0.31300000, 0.46000000, 0.02700000, 0.28000000, 0.42000000, 0.02700000, uParam3, uParam4 );
    }
    else
    {
        sub_82052( iParam2, 0.09000000, 0.08400000, 0.30000000, 0.44000000, 0.02700000, 0.30000000, 0.44000000, 0.02700000, uParam3, uParam4 );
    }
    return;
}

void sub_81042(unknown uParam0)
{
    int I;

    if (NOT l_U985)
    {
        sub_26111();
        l_U985 = 1;
    }
    if ((uParam0^) <= 8)
    {
        for ( I = 0; I < (uParam0^); I++ )
        {
            if (l_U941[I] != (uParam0^)[I])
            {
                l_U941[I] = (uParam0^)[I];
                sub_81137( I );
            }
        }
    }
    return;
}

void sub_81137(unknown uParam0)
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
            sub_81137( uParam0 );
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
            sub_81137( uParam0 );
            return;
        }
    }
    return;
}

void sub_81471(unknown uParam0)
{
    int I;

    if (NOT l_U984)
    {
        sub_25956();
        l_U984 = 1;
    }
    for ( I = 0; I < 16; I++ )
    {
        if (l_U564[sub_59834()]._fU24[I] != (uParam0^)[I])
        {
            l_U564[sub_59834()]._fU24[I] = (uParam0^)[I];
            sub_81572( I );
        }
    }
    return sub_5371();
}

void sub_81572(unknown uParam0)
{
    unknown uVar3;

    if (l_U906[uParam0] > 0)
    {
        uVar3 = l_U564[0]._fU24[l_U906[uParam0] - 1];
        if (l_U564[sub_59834()]._fU24[uParam0] > l_U564[sub_59834()]._fU24[uVar3])
        {
            l_U564[0]._fU24[l_U906[uParam0] - 1] = uParam0;
            l_U564[0]._fU24[l_U906[uParam0]] = uVar3;
            l_U906[uVar3]++;
            l_U906[uParam0]--;
            sub_81572( uParam0 );
            return;
        }
    }
    if (l_U906[uParam0] < 15)
    {
        uVar3 = l_U564[0]._fU24[l_U906[uParam0] + 1];
        if (l_U564[sub_59834()]._fU24[uParam0] < l_U564[sub_59834()]._fU24[uVar3])
        {
            l_U564[0]._fU24[l_U906[uParam0] + 1] = uParam0;
            l_U564[0]._fU24[l_U906[uParam0]] = uVar3;
            l_U906[uVar3]--;
            l_U906[uParam0]++;
            sub_81572( uParam0 );
            return;
        }
    }
    return;
}

void sub_82052(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, int iParam9, boolean bParam10)
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
            fVar17 = sub_58719( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, GET_PLAYER_NAME( sub_4433( I ) ) );
            SET_TEXT_USE_UNDERSCORE( 0 );
            if (fVar17 > fVar18)
            {
                fVar18 = fVar17;
            }
            if ((iParam0 == 3) AND ((sub_60581( I )) > -1))
            {
                if ((l_U564[sub_59834()]._fU16 == 5) || (l_U564[sub_59834()]._fU16 == 6))
                {
                    if (sub_5847() == 1)
                    {
                        fVar17 = sub_82285( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, "CASH", l_U564[sub_59834()]._fU24[I] );
                    }
                    else
                    {
                        fVar17 = sub_82285( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, "CASH", (l_U941[sub_60581( I )]) / (sub_60704( sub_60581( I ) )) );
                    }
                }
                else
                {
                    fVar17 = sub_82601( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, (l_U941[sub_60581( I )]) / (sub_60704( sub_60581( I ) )) );
                }
                if (fVar17 > fVar19)
                {
                    fVar19 = fVar17;
                }
            }
            else if (iParam0 == 2)
            {
                if ((l_U564[sub_59834()]._fU16 == 5) || (l_U564[sub_59834()]._fU16 == 6))
                {
                    fVar17 = sub_82285( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, "CASH", l_U564[sub_59834()]._fU24[I] );
                }
                else
                {
                    fVar17 = sub_82601( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, l_U564[sub_59834()]._fU24[I] );
                }
                if (fVar17 > fVar19)
                {
                    fVar19 = fVar17;
                }
            }
            else if ((iParam0 == 4) || (iParam0 == 5))
            {
                fVar17 = sub_83038( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, sub_59723( I ) );
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
            if ((sub_30223( J )) > 0)
            {
                fVar17 = sub_84700( 6, 0.00000000, 1.00000000, 0, 0, uParam6, uParam7, sub_83424( J, 1 ) );
                if (fVar17 > fVar18)
                {
                    fVar18 = fVar17;
                }
                if (iParam0 == 3)
                {
                    if ((l_U564[sub_59834()]._fU16 == 5) || (l_U564[sub_59834()]._fU16 == 6))
                    {
                        fVar17 = sub_82285( 6, 0.00000000, 1.00000000, 0, 0, uParam6, uParam7, "CASH", l_U941[J] );
                    }
                    else
                    {
                        fVar17 = sub_82601( 6, 0.00000000, 1.00000000, 0, 0, uParam6, uParam7, l_U941[J] );
                    }
                    if (fVar17 > fVar19)
                    {
                        fVar19 = fVar17;
                    }
                }
                else if (iParam0 == 5)
                {
                    fVar17 = sub_83038( 6, 0.00000000, 1.00000000, 0, 0, uParam6, uParam7, sub_76174( J ) );
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
    ConcatString(ref cVar23, sub_5847(), 32);
    fVar17 = sub_84700( 6, 0.00000000, 1.00000000, 0, 0, 0.31000000, 0.45500000, ref cVar23 );
    if (fVar17 > fVar18)
    {
        fVar18 = fVar17;
    }
    if (iParam9 != 2147483647)
    {
        if (bParam10)
        {
            if (sub_10476())
            {
                fVar17 = sub_82285( 6, 0.00000000, 1.00000000, 0, 0, 0.31000000, 0.45500000, "LIVES_LEFT", iParam9 );
            }
            else
            {
                fVar17 = sub_82285( 6, 0.00000000, 1.00000000, 0, 0, 0.31000000, 0.45500000, "MAX_POINTS", iParam9 );
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
    ConcatString(ref cVar23, sub_5847(), 32);
    sub_26628( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    sub_32837( ref cVar23, uParam1 + 0.01000000, uParam2 + -0.00370000, 0.31000000, 0.45500000, 255, 255, 255, 255, 2 );
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
            sub_26628( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
            if (sub_10476())
            {
                sub_26925( "LIVES_LEFT", uParam1 + 0.01000000, (((((uParam2 + fVar22) + -0.00370000) + 0.03450000) + -0.01900000) + 0.03820000) + 0.00650000, 0.31000000, 0.45500000, 255, 255, 255, 255, 2, iParam9 );
            }
            else
            {
                sub_26925( "MAX_POINTS", uParam1 + 0.01000000, (((((uParam2 + fVar22) + -0.00370000) + 0.03450000) + -0.01900000) + 0.03820000) + 0.00650000, 0.31000000, 0.45500000, 255, 255, 255, 255, 2, iParam9 );
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
        iVar31[0] = sub_59834();
        iVar31[1] = 0;
    }
    if (((iParam0 == 1) || (iParam0 == 3)) || (iParam0 == 5))
    {
        sub_86455( ref iVar31, (uParam1 + 0.01000000) + fVar19, ((uParam2 + -0.00370000) + 0.03450000) + -0.01900000, uParam6, uParam7, uParam8, uParam3, uParam4, uParam5, iParam0, 24, 0, -1 );
    }
    else
    {
        sub_87904( ref iVar31, (uParam1 + 0.01000000) + fVar19, ((uParam2 + -0.00370000) + 0.03450000) + -0.01900000, uParam3, uParam4, uParam5, iParam0, 16, 0, -1 );
    }
    return;
}

void sub_82285(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
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

void sub_82601(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
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

void sub_83038(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7)
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

string sub_83424(int iParam0, boolean bParam1)
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
            if ((sub_60704( I )) > 0)
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
            if ((sub_60704( I )) > 0)
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

void sub_84700(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
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

void sub_86455(unknown uParam0, unknown uParam1, float fParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, int iParam9, int iParam10, int iParam11, unknown uParam12)
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
        if ((sub_60704( l_U932[iVar16] )) > 0)
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
                    if (((uParam0^)[I] == sub_59834()) || ((uParam0^)[I] == 0))
                    {
                        if (l_U564[(uParam0^)[I]]._fU16 > 0)
                        {
                            GET_TEAM_RGB_COLOUR( l_U932[iVar16], ref uVar18, ref uVar19, ref uVar20 );
                            if ((iParam9 == 6) || (iParam9 == 7))
                            {
                                sub_26628( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                                iVar22 = 1;
                            }
                            else
                            {
                                sub_26628( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                                iVar22 = 3;
                            }
                            if (l_U564[(uParam0^)[I]]._fU16 != 1)
                            {
                                if ((iParam9 == 6) || (iParam9 == 7))
                                {
                                    fVar23 += (sub_57326( l_U564[(uParam0^)[I]]._fU16 )) * 0.50000000;
                                }
                            }
                            switch (l_U564[(uParam0^)[I]]._fU16)
                            {
                                case 1:
                                if ((iParam9 == 6) || (iParam9 == 7))
                                {
                                    sub_26628( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                                    sub_32837( sub_83424( l_U932[iVar16], 1 ), fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, 2 );
                                    fVar23 += (sub_57326( l_U564[(uParam0^)[I]]._fU16 )) - uVar24;
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
                                sub_32837( sub_83424( l_U932[iVar16], 1 ), fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, 2 );;
                                iVar21++;
                                break;
                                case 2:
                                case 7:
                                sub_27250( fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, iVar22, l_U941[l_U932[iVar16]] );
                                iVar21++;
                                break;
                                case 3:
                                if (l_U941[l_U932[iVar16]] > 0)
                                {
                                    sub_60213( fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, iVar22, l_U923[l_U932[iVar16]] + 1 );
                                }
                                iVar21++;
                                break;
                                case 4:
                                if (l_U941[l_U932[iVar16]] < 5940000)
                                {
                                    sub_51693( fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, iVar22, l_U941[l_U932[iVar16]], 1.00000000 );
                                }
                                iVar21++;
                                break;
                                case 5:
                                case 6:
                                sub_26925( "CASH", fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, iVar22, l_U941[l_U932[iVar16]] );
                                iVar21++;
                                break;
                            }
                            if (l_U564[(uParam0^)[I]]._fU16 != 1)
                            {
                                if ((iParam9 == 6) || (iParam9 == 7))
                                {
                                    fVar23 += (sub_57326( l_U564[(uParam0^)[I]]._fU16 )) * 0.50000000;
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
                        fVar23 += sub_57326( 2 );
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
                            if ((sub_5371() + sub_6095()) > 22)
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
                if (sub_59767( l_U564[0]._fU24[J] ))
                {
                    if ((sub_60581( l_U564[0]._fU24[J] )) == l_U932[iVar16])
                    {
                        if ((iVar25 >= iParam11) AND (iVar25 < (iParam11 + iParam10)))
                        {
                            sub_56934( l_U564[0]._fU24[J], uParam0, uParam1, ref fParam2, uParam6, uParam7, uParam8, iParam9, 0 );
                        }
                        iVar25++;
                    }
                }
            }
        }
    }
    return;
}

void sub_87904(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7, int iParam8, unknown uParam9)
{
    int I;
    int iVar13;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_59767( l_U564[0]._fU24[I] ))
        {
            if ((iVar13 >= iParam8) AND (iVar13 < (iParam8 + iParam7)))
            {
                sub_56934( l_U564[0]._fU24[I], uParam0, uParam1, ref uParam2, uParam3, uParam4, uParam5, uParam6, 0 );
            }
            iVar13++;
        }
    }
    return;
}

void sub_88256(int iParam0, boolean bParam1)
{
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
    int iVar14;
    char[16] cVar15;

    GET_NETWORK_TIMER( ref iVar4 );
    iParam0 -= iVar4;
    if (l_U888 == 0)
    {
        l_U888++;
    }
    else if (l_U888 == 1)
    {
        if ((iParam0 <= 60000) AND (iParam0 > 15000))
        {
            if (PRELOAD_STREAM( "MP_COUNTDOWN" ))
            {
                l_U888++;
            }
        }
    }
    else if (l_U888 == 2)
    {
        if (iParam0 <= 28725)
        {
            PLAY_STREAM_FRONTEND();
            MUTE_POSITIONED_RADIO( 1 );
            DISABLE_FRONTEND_RADIO();
            l_U888++;
        }
    };;;
    if (iParam0 <= 10000)
    {
        iVar5 = iParam0 mod 1000;
        if (((iVar5 < 800) AND (iVar5 > 600)) || ((iVar5 < 300) AND (iVar5 > 100)))
        {
            SET_MULTIPLAYER_HUD_TIME( " " );
            return;
        }
    }
    if (iParam0 < 0)
    {
        StrCopy( ref cVar15, "00:00:00", 16 );
    }
    else
    {
        iVar6 = iParam0 / 10;
        iVar7 = iParam0 / 1000;
        iVar8 = iVar7 / 60;
        iVar6 -= iVar7 * 100;
        iVar7 -= iVar8 * 60;
        iVar9 = iVar6 / 10;
        iVar10 = iVar6 mod 10;
        iVar11 = iVar7 / 10;
        iVar12 = iVar7 mod 10;
        iVar13 = iVar8 / 10;
        iVar14 = iVar8 mod 10;
        string(ref cVar15, iVar13, 16);
        ConcatString(ref cVar15, iVar14, 16);
        ConcatString(ref cVar15, ":", 16);
        ConcatString(ref cVar15, iVar11, 16);
        ConcatString(ref cVar15, iVar12, 16);
        ConcatString(ref cVar15, ":", 16);
        ConcatString(ref cVar15, iVar9, 16);
        ConcatString(ref cVar15, iVar10, 16);
    }
    if (bParam1)
    {
        SET_WIDESCREEN_FORMAT( 2 );
        sub_26628( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
        sub_41553( sub_45525( 23 ), (sub_45558( 23 )) + 0.04050000, sub_45525( 24 ), sub_45558( 24 ), 255, 255, 255, 255, 2, ref cVar15 );
    }
    SET_MULTIPLAYER_HUD_TIME( ref cVar15 );
    return;
}

void sub_88791()
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

    if (sub_2301())
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
                iVar3 = sub_89117( (l_U6[iVar2]._fU4 - 512) - iVar5, 0, 255 );
                sub_26628( 0, -0.50000000, 1.50000000, 3, 1, 0, 0, 0, iVar3 );
                SET_TEXT_USE_UNDERSCORE( 1 );
                if (l_U6[iVar2]._fU76._fU64)
                {
                    uVar12 = sub_32837( ref l_U6[iVar2]._fU76._fU0, fVar13, fVar14, fVar15, fVar16, l_U6[iVar2]._fU76._fU68, l_U6[iVar2]._fU76._fU72, l_U6[iVar2]._fU76._fU76, iVar3, 2 );
                }
                else
                {
                    uVar12 = sub_41553( fVar13, fVar14, fVar15, fVar16, l_U6[iVar2]._fU76._fU68, l_U6[iVar2]._fU76._fU72, l_U6[iVar2]._fU76._fU76, iVar3, 2, ref l_U6[iVar2]._fU76._fU0 );
                }
                fVar13 += uVar12;
                if (l_U6[iVar2]._fU8 == -1)
                {
                    fVar13 += sub_58719( 0, -0.50000000, 1.50000000, 3, 1, fVar15, fVar16, " " );
                }
                if (l_U6[iVar2]._fU8 == -2)
                {
                    fVar13 += sub_58719( 0, -0.50000000, 1.50000000, 3, 1, fVar15, fVar16, " " );
                    sub_26628( 0, -0.50000000, 1.50000000, 3, 1, 0, 0, 0, iVar3 );
                    GET_HUD_COLOUR( 1, ref uVar6, ref uVar7, ref uVar8, ref uVar9 );
                    SET_TEXT_USE_UNDERSCORE( 1 );
                    fVar13 += sub_32837( ref l_U6[iVar2]._fU12, fVar13, fVar14, fVar15, fVar16, uVar6, uVar7, uVar8, iVar3, 2 );
                    SET_TEXT_USE_UNDERSCORE( 1 );
                    fVar13 += sub_58719( 0, -0.50000000, 1.50000000, 3, 1, fVar15, fVar16, " " );
                }
                else if ((l_U6[iVar2]._fU8 > -1) AND (l_U6[iVar2]._fU8 < 36))
                {
                    fVar13 += 0.03200000 / 2;
                    DRAW_SPRITE( l_U501[l_U6[iVar2]._fU8], fVar13, fVar14 + 0.00900000, 0.03200000, 0.03200000, 0.00000000, 255, 255, 255, iVar3 );
                    fVar13 += 0.03200000 / 2;
                }
                sub_26628( 0, -0.50000000, 1.50000000, 3, 1, 0, 0, 0, iVar3 );
                SET_TEXT_USE_UNDERSCORE( 1 );
                if (l_U6[iVar2]._fU156._fU64)
                {
                    sub_32837( ref l_U6[iVar2]._fU156._fU0, fVar13, fVar14, fVar15, fVar16, l_U6[iVar2]._fU156._fU68, l_U6[iVar2]._fU156._fU72, l_U6[iVar2]._fU156._fU76, iVar3, 2 );
                }
                else
                {
                    sub_41553( fVar13, fVar14, fVar15, fVar16, l_U6[iVar2]._fU156._fU68, l_U6[iVar2]._fU156._fU72, l_U6[iVar2]._fU156._fU76, iVar3, 2, ref l_U6[iVar2]._fU156._fU0 );
                }
                SET_TEXT_USE_UNDERSCORE( 0 );
                if (iVar3 < 255)
                {
                    iVar4++;
                }
                if (l_U6[iVar2]._fU4 <= iVar5)
                {
                    l_U563 -= -0.02600000;
                    sub_72305( ref l_U6[iVar2] );
                    sub_11717( ref l_U480, 8 );
                    iVar4--;
                }
                fVar14 -= -0.02600000;
                sub_11717( ref iVar2, 8 );
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

void sub_89117(int iParam0, int iParam1, int Result)
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

void sub_90351(unknown uParam0)
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
    GET_INTERIOR_FROM_CHAR( sub_4360(), ref iVar16 );
    if (iVar16 == nil)
    {
        if ((GET_CLOSEST_CAR_NODE_WITH_HEADING( Result._fU0, Result._fU4, Result._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8, ref fVar15 )) AND (sub_23149( Result, uVar8, 60.00000000 )))
        {
            Result = {uVar8};
            uVar11._fU8 = fVar15;
            Result._fU8 += 2.00000000;
            uVar11._fU0 = sub_90575( 0.00000000, 15.00000000 );
            uVar11._fU4 = 0.00000000;
            uVar11._fU8 += sub_90575( -20.00000000, 20.00000000 );
            fVar14 = 65.00000000;
        }
        else if ((GET_CLOSEST_NETWORK_RESTART_NODE( Result, ref uVar8, ref fVar15 )) AND (sub_23149( Result, uVar8, 60.00000000 )))
        {
            Result = {uVar8};
            uVar11._fU8 = fVar15;
            Result._fU8 += 2.00000000;
            uVar11._fU0 = sub_90575( 0.00000000, 15.00000000 );
            uVar11._fU4 = 0.00000000;
            uVar11._fU8 += sub_90575( -20.00000000, 20.00000000 );
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
        GET_KEY_FOR_CHAR_IN_ROOM( sub_4360(), ref iVar3 );
        if (iVar3 == 0)
        {
            CLEAR_ROOM_FOR_VIEWPORT( sub_90901() );
        }
        else
        {
            SET_ROOM_FOR_VIEWPORT_BY_KEY( sub_90901(), iVar3 );
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
    SET_CAM_ROT( (uParam0^), uVar11._fU0, uVar11._fU4, sub_69206( uVar11._fU8 ) );
    SET_CAM_FOV( (uParam0^), fVar14 );
    SET_CAM_FAR_CLIP( (uParam0^), 2000.00000000 );
    SET_CAM_ACTIVE( (uParam0^), 1 );
    SET_CAM_PROPAGATE( (uParam0^), 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    return Result;
}

void sub_90575(unknown uParam0, unknown Result)
{
    GENERATE_RANDOM_FLOAT_IN_RANGE( uParam0, Result, ref Result );
    return Result;
}

void sub_90901()
{
    unknown Result;

    GET_GAME_VIEWPORT_ID( ref Result );
    return Result;
}

void sub_91246()
{
    NETWORK_SET_TALKER_FOCUS( -1 );
    sub_91265( 31, 0 );
    return;
}

void sub_91265(unknown uParam0, unknown uParam1)
{
    g_U18._fU636 = uParam0;
    g_U18._fU632 = uParam1;
    return;
}

void sub_91352()
{
    ENABLE_FRONTEND_RADIO();
    MUTE_POSITIONED_RADIO( 0 );
    l_U888 = -1;
    return;
}

void sub_91589()
{
    int I;

    for ( I = 0; I < 8; I++ )
    {
        sub_72305( ref l_U6[I] );
    }
    for ( I = 0; I < 16; I++ )
    {
        l_U481[I] = 0;
    }
    l_U479 = 0;
    l_U480 = 0;
    return;
}

void sub_91688(unknown uParam0)
{
    int I;

    for ( I = 0; I < (uParam0^); I++ )
    {
        if (DOES_BLIP_EXIST( (uParam0^)[I] ))
        {
            SET_ROUTE( (uParam0^)[I], 0 );
            REMOVE_BLIP( (uParam0^)[I] );
        }
        (uParam0^)[I] = nil;
    }
    return;
}

void sub_92058(int iParam0, unknown uParam1)
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
    if (sub_29920())
    {
        SET_REDUCE_PED_MODEL_BUDGET( 1 );
    }
    return;
}

void sub_92327(int iParam0, unknown uParam1)
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

void sub_92602(unknown uParam0)
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

void sub_92821(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3)
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

    l_U1340 = uParam3;
    l_U1341 = iParam1;
    sub_92849( ref uVar6, iParam1, uParam0 );
    SET_RANDOM_SEED( uParam2 );
    if (iParam1 != 12)
    {
        sub_94667( ref uVar6, uParam0 );
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
    sub_125568( uParam0 );
    SET_HEALTH_PICKUP_NETWORK_REGEN_TIME( 60000 );
    sub_130935( uParam0 );
    SET_ARMOUR_PICKUP_NETWORK_REGEN_TIME( 60000 );
    SWITCH_ARROW_ABOVE_BLIPPED_PICKUPS( 1 );
    return;
}

void sub_92849(int iParam0, unknown uParam1, unknown uParam2)
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
    iParam0->_fU0 = sub_9405( (TO_FLOAT( iParam0->_fU0 )) * fVar5 );
    iParam0->_fU4 = sub_9405( (TO_FLOAT( iParam0->_fU4 )) * fVar5 );
    iParam0->_fU8 = sub_9405( (TO_FLOAT( iParam0->_fU8 )) * fVar5 );
    iParam0->_fU12 = sub_9405( (TO_FLOAT( iParam0->_fU12 )) * fVar5 );
    iParam0->_fU16 = sub_9405( (TO_FLOAT( iParam0->_fU16 )) * fVar5 );
    iParam0->_fU20 = sub_9405( (TO_FLOAT( iParam0->_fU20 )) * fVar5 );
    iParam0->_fU24 = sub_9405( (TO_FLOAT( iParam0->_fU24 )) * fVar5 );
    iParam0->_fU28 = sub_9405( (TO_FLOAT( iParam0->_fU28 )) * fVar5 );
    iParam0->_fU32 = sub_9405( (TO_FLOAT( iParam0->_fU32 )) * fVar5 );
    iParam0->_fU36 = sub_9405( (TO_FLOAT( iParam0->_fU36 )) * fVar5 );
    iParam0->_fU40 = sub_9405( (TO_FLOAT( iParam0->_fU40 )) * fVar5 );
    iParam0->_fU44 = sub_9405( (TO_FLOAT( iParam0->_fU44 )) * fVar5 );
    iParam0->_fU48 = sub_9405( (TO_FLOAT( iParam0->_fU48 )) * fVar5 );
    iParam0->_fU52 = sub_9405( (TO_FLOAT( iParam0->_fU52 )) * fVar5 );
    iParam0->_fU56 = sub_9405( (TO_FLOAT( iParam0->_fU56 )) * fVar5 );
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

void sub_94667(int iParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0:
        sub_94667( iParam0, 3 );
        sub_94667( iParam0, 4 );
        sub_94667( iParam0, 2 );
        sub_94667( iParam0, 1 );
        sub_94667( iParam0, 8 );
        sub_94667( iParam0, 10 );
        sub_94667( iParam0, 9 );
        break;
        case 1:
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1196.11900000, 1907.18900000, 10.44690000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1040.06700000, 1415.01300000, 23.32290000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1619.44400000, 92.38760000, 10.32920000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1232.75700000, -449.90700000, 1.87340000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1463.06000000, 1407.98500000, 11.62070000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -2030.33000000, 175.78440000, 11.02870000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -862.60280000, 1469.77900000, 22.04920000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1012.03300000, 679.06480000, 3.07830000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1378.38600000, 735.35190000, 18.61550000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1111.47100000, 401.67400000, 3.56430000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1460.41900000, -519.12240000, 1.99810000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1375.61200000, 1309.62500000, 20.86810000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1721.67500000, -77.34120000, 5.29220000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1575.52100000, 163.83770000, 11.92580000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -982.23430000, 1026.28400000, 19.61470000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -2192.17600000, 189.19060000, 12.06900000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1984.85600000, -459.41330000, 2.24220000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1772.48200000, -635.06910000, 1.97230000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -966.62740000, 297.31780000, 3.37240000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1017.69000000, 47.42280000, 4.28950000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1213.55300000, -202.04250000, 2.43360000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1965.89200000, -621.95820000, 1.88090000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1253.14600000, -570.99440000, 1.83970000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1966.21400000, -84.47350000, 5.72440000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1891.29100000, 107.74920000, 6.01130000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1422.37000000, 136.37280000, 49.97710000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1165.49600000, 177.58810000, 3.30230000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1376.45400000, 1787.28600000, 17.63460000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -930.20860000, 1670.47400000, 22.86110000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -938.56030000, 1503.63000000, 24.11030000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1379.00900000, 511.33410000, 11.47260000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1612.35500000, 763.47670000, 27.13650000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1538.08500000, 504.22530000, 21.36960000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1232.44900000, 1313.95100000, 20.68790000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1083.27200000, 1202.30800000, 22.30520000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1390.47800000, 545.41720000, 11.48410000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1980.96900000, -265.83590000, 6.61140000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1741.89800000, 246.20510000, 20.26680000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1337.26100000, 307.37040000, 12.30250000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -982.65230000, 1354.82200000, 24.04510000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -838.37830000, 986.44950000, 19.63220000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1221.05700000, 864.11850000, 18.56040000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1976.24800000, -332.03490000, 2.14560000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1640.01600000, -590.24800000, 2.00040000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1883.32000000, -538.75700000, 2.20930000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -2157.76000000, -84.50720000, 5.72410000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1991.85400000, 22.04110000, 6.46750000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1819.05000000, 185.24510000, 15.05980000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1709.88900000, 123.50230000, 11.22510000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1370.11700000, 380.61760000, 13.61520000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1166.98700000, 368.54050000, 3.49970000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -914.88050000, 1330.30900000, 23.33390000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1059.97900000, 1522.27400000, 23.51210000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1249.42300000, 1446.43000000, 18.82090000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1105.38700000, 865.35820000, 21.13230000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1515.14300000, 647.81850000, 22.99270000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1417.65900000, 926.23530000, 20.06220000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -997.40830000, 713.36130000, 2.96060000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1132.63100000, 970.64170000, 18.57450000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1393.73000000, 982.70170000, 22.22130000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1702.86000000, 521.84710000, 24.44440000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1266.23500000, 1707.77100000, 26.72450000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -982.13600000, 1688.95500000, 18.40310000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1561.12900000, 1103.43900000, 26.17870000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1668.21500000, 317.14960000, 23.49550000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1242.57300000, 1071.52300000, 18.78060000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1655.30500000, -313.57930000, 1.85990000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1794.53300000, -58.22980000, 6.42350000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1670.90400000, 726.06620000, 28.86760000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -993.10710000, -315.56630000, 1.91840000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1972.19100000, -504.52570000, 2.25320000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -2179.58200000, 152.62590000, 11.89890000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -2083.70000000, 212.58110000, 10.80830000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1911.00500000, 297.32220000, 21.96660000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1620.61600000, -81.67460000, 5.73790000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1248.59100000, -18.99340000, 5.22130000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1185.79300000, -0.55840000, 3.30650000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1215.95700000, 1192.77300000, 20.66770000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1344.54300000, 1207.66700000, 16.15250000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1427.29900000, 1258.30400000, 23.01160000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1397.96300000, 1462.23900000, 24.17600000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -786.24220000, 1183.35700000, 8.45640000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1190.51000000, 1730.82400000, 31.88890000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1121.53000000, 695.33390000, 8.15600000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1674.10300000, 607.97680000, 27.42240000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -956.39570000, 791.87260000, 3.27540000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -995.10810000, 1125.10800000, 13.71140000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1584.32100000, 868.65160000, 20.24020000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1068.28000000, -543.48600000, 1.88580000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1531.64000000, -575.34600000, 2.00010000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1406.33800000, -89.17190000, 5.34300000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1714.17200000, 436.72830000, 24.44410000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1469.36200000, 490.46240000, 18.56530000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1312.04000000, 1734.09000000, 26.92140000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1537.10700000, 372.12060000, 20.96680000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -983.78270000, 1639.57700000, 22.89940000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1363.57000000, 1453.65700000, 19.97900000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1394.97000000, 1148.11900000, 18.72010000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -800.73000000, 1075.30600000, 10.04690000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1168.58000000, -295.70200000, 2.04920000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1339.62000000, 605.72930000, 11.51410000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1659.45000000, 649.34030000, 28.84120000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1353.10000000, 802.45560000, 18.56090000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1359.23000000, 446.40120000, 13.61450000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1852.94400000, -374.40150000, 2.17360000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1506.31600000, -388.77980000, 1.90370000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1024.62000000, -270.61100000, 1.91890000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1727.51000000, -226.10200000, 3.43530000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1299.11000000, -210.19200000, 1.94540000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1391.73300000, 60.11550000, 6.01040000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1468.68200000, 281.84210000, 12.76670000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1296.31000000, 223.55720000, 8.94460000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1523.81500000, -53.62390000, 5.89850000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1093.15500000, 1339.00100000, 23.51430000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -904.98600000, 1563.98500000, 24.70830000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1111.72300000, 1124.87900000, 12.62320000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1240.37000000, 452.18370000, 3.53580000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1470.64000000, 742.57860000, 23.07310000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -922.43100000, 893.72840000, 12.67350000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1204.28000000, 948.63290000, 18.59460000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1184.83000000, 786.36840000, 18.56270000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -899.17700000, 1078.25100000, 19.62630000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1258.09900000, 821.32230000, 18.56610000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1428.70900000, 798.65070000, 18.56530000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1487.61000000, 562.89360000, 19.12460000 );
        break;
        case 2:
        sub_95895( sub_94853( iParam0, 2 ), 23, 200, -563.10640000, 293.52680000, 5.65930000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 200, 79.41570000, -839.53680000, 3.99560000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 200, -277.35550000, -533.76340000, 3.92420000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 200, -491.51540000, -173.97790000, 6.90340000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 200, -235.68930000, 739.30850000, 6.12510000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 200, -539.49120000, 1362.38800000, 16.47050000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 200, -180.02360000, -823.41240000, 4.11750000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 200, 173.60920000, 236.49170000, 13.76010000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 200, 89.24590000, 1152.34900000, 13.57080000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 200, 63.60470000, -439.60590000, 13.75830000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 200, -226.95040000, 1714.70300000, 14.75500000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 200, 130.44570000, 467.39240000, 13.91780000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 200, -529.52310000, -339.29980000, 5.04460000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 200, -477.98870000, 1707.35300000, 7.46380000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 200, -636.54130000, -45.71210000, 3.81230000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 200, 140.68720000, -857.79680000, 3.77320000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 200, -108.89000000, 64499, 4.11910000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 200, 348.54010000, -431.52940000, 3.54320000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 200, 166.63900000, 1080.60900000, 13.62470000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 200, -145.57280000, 1694.71300000, 15.72350000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 200, 64.54370000, 261.20720000, 14.53200000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 200, -507.19360000, 533.97330000, 5.67160000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 200, -410.23560000, -141.84080000, 11.61790000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 200, -248.26890000, -589.95000000, 3.78540000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 200, 115.38710000, 741.87240000, 13.56160000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 200, 49.21290000, 1350.85200000, 15.25260000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 200, 332.02520000, -158.35070000, 8.06910000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 200, -462.60650000, 775.56370000, 8.98430000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 200, -66.39730000, 1550.17700000, 17.64730000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 200, -47.94850000, 35.91300000, 13.84780000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 200, -210.80500000, 1410.40400000, 19.35510000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 200, 136.81580000, 387.45690000, 14.02680000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 200, -604.36200000, 339.06450000, 3.67190000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 200, -135.90700000, 819.94900000, 17.62560000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 200, -437.64390000, 430.90700000, 8.93740000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 200, -522.79810000, 1018.30500000, 8.79210000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 200, -593.54960000, 1165.60900000, 8.94090000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 200, 89.78390000, 1251.53900000, 14.86610000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 200, -108.15450000, 1271.20900000, 19.43000000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 200, -5.26000000, -447.87000000, 13.75820000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 200, 171.83730000, -807.45750000, 3.97040000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 200, 0.32430000, -761.24270000, 4.08570000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 200, -526.37620000, 593.51290000, 12.12300000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 200, -554.97370000, 806.93090000, 8.05520000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 200, 13.89740000, 1147.71300000, 13.24760000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 200, 179.53490000, 691.26530000, 7.18630000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 200, -463.63800000, 899.77910000, 8.96270000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 200, -467.32180000, 1556.19000000, 17.47570000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 200, -284.66330000, 1600.64600000, 19.41570000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 200, -311.56230000, 1733.49700000, 12.12580000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 200, -99.43640000, 1350.29900000, 19.41500000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 200, -534.05160000, 1610.99600000, 8.39809000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 200, 91.99830000, -318.91000000, 13.61250000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 200, -619.61000000, -115.38000000, 5.59590000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 200, 361.06920000, -477.77790000, 4.81800000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 200, -404.86420000, 1487.26800000, 17.86060000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 200, -572.86970000, 227.56950000, 3.66220000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 150.65500000, 913.75690000, 7.35240000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -151.58120000, 1004.30900000, 5.22660000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -126.16370000, 554.53360000, 13.76430000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -389.27630000, 1763.59200000, 8.23320000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -414.94510000, 376.06220000, 11.07520000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -348.11940000, 631.42010000, 13.58580000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -561.26700000, 1457.39500000, 16.53680000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -656.75510000, 1140.68700000, 8.81430000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 286.89990000, -392.37890000, 3.97690000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 267.28000000, -686.88580000, 3.87500000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 185.85650000, 801.42330000, 7.45320000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -33.85220000, 772.73390000, 13.64890000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -658.17000000, 809.31000000, 3.10420000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 65123, 1658.10000000, 20.08190000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 65307, 1445.20000000, 19.45000000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -579.01340000, 1414.69400000, 14.47110000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -570.93210000, 158.32300000, 3.66220000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -641.65510000, -195.11170000, 3.94450000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -373.43770000, 1563.55700000, 19.15690000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -242.26720000, -515.22510000, 3.93780000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 83.27290000, 128.63830000, 13.74580000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 100.85700000, -751.07600000, 3.95820000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 148.27850000, -520.31800000, 13.76100000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -145.85800000, -436.54300000, 13.71600000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 30.52840000, -319.98200000, 13.72060000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -121.35400000, -765.42500000, 4.20210000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -301.78400000, -408.61900000, 3.82400000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -221.12500000, -244.63100000, 13.55080000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 345.52040000, -409.60800000, 3.69260000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -187.78400000, -104.23300000, 13.59230000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 23.03970000, -41.08220000, 13.81190000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -105.90000000, 129.42250000, 13.72260000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -470.49600000, 190.20460000, 8.85820000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -108.92700000, 371.07960000, 13.80730000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -308.23960000, 455.43910000, 13.69960000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 113.34910000, 650.53870000, 13.71280000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -69.89160000, 1147.73100000, 13.76710000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 29.31370000, 761.22520000, 13.50620000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 52.12710000, 889.81030000, 13.65160000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -616.57000000, 1001.96400000, 8.91920000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -491.81600000, 949.22980000, 8.96670000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 5.79550000, 1028.96500000, 13.72000000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -542.94400000, 1303.59300000, 16.25890000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -273.10860000, 1211.38200000, 17.78520000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -292.14300000, 1331.30300000, 23.60140000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -364.25800000, 1371.32500000, 14.19140000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -34.57900000, 1410.33300000, 19.42230000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -161.42200000, 1555.53300000, 17.37360000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 210.82320000, -105.36900000, 13.76120000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -124.28630000, -530.18220000, 13.76020000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -220.20000000, -883.72000000, 3.67810000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -107.78000000, -821.86000000, 4.12670000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 78.03000000, -670.74000000, 13.76770000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 151.18900000, -613.04700000, 9.63030000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -27.54000000, -823.69000000, 4.45430000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 200.28920000, -698.77010000, 3.95350000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -195.15000000, -711.21000000, 3.96790000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 100.96000000, -512.62000000, 15.08830000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 306.47000000, -623.30000000, 4.19430000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -79.41310000, 614.20590000, 13.76610000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -385.48000000, 738.49000000, 13.76610000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -434.99950000, 1101.79400000, 9.24650000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -31.37680000, 959.19130000, 13.92130000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -268.25000000, 751.37000000, 10.86610000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -199.04800000, 880.55260000, 5.15900000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -330.31000000, 1134.31000000, 12.49350000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -174.81230000, 938.15850000, 10.64700000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -115.90590000, 1043.57100000, 5.15920000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -315.16000000, 867.71000000, 8.89900000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -564.60000000, 1183.60000000, 9.01900000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -498.02150000, 1183.31100000, 13.21080000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -414.29530000, 1365.34600000, 15.55880000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -468.98060000, 1468.96400000, 17.86100000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -112.28410000, 1672.74500000, 17.61140000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -219.91810000, 1277.23200000, 22.09290000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 2.40000000, 1197.70000000, 16.47760000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -25.70000000, 1250.90000000, 19.43250000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -65.74770000, 1498.05800000, 17.44880000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -383.30600000, 319.06300000, 13.75090000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 65250, 344.20000000, 13.66590000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -212.60000000, 346.70000000, 14.03540000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -66.26470000, 278.22370000, 13.76360000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -181.14000000, 491.28420000, 13.71490000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -24.70000000, 405.20000000, 14.76350000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 51.61110000, 464.46720000, 13.69600000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 27.60000000, 374.20000000, 13.70190000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -603.98900000, 612.11540000, 3.85550000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -337.70000000, 215.40000000, 13.74920000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -383.50000000, 556.30000000, 13.77870000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -442.96920000, 590.37180000, 10.25190000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 141.80000000, 211.20000000, 13.76310000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -192.30000000, 162.40000000, 13.98940000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -348.60300000, -188.71300000, 13.64900000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -273.48200000, -157.81400000, 13.88300000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -117.97000000, -335.54000000, 13.73490000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -12.45000000, -218.40000000, 13.63990000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 179.94720000, -254.52090000, 11.85560000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 264.98180000, -302.83180000, 5.59270000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 162.58500000, -158.31150000, 13.92630000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 113.02140000, -39.66420000, 13.76250000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -126.60700000, -117.37200000, 13.81500000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 207.01740000, 20.70740000, 13.71320000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -254.45000000, -43.88000000, 13.76330000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -347.84500000, 105.27390000, 13.81310000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -345.03400000, -100.46700000, 13.70210000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -445.05100000, 131.98950000, 8.83120000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -490.37520000, 25.33320000, 6.86600000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -572.51200000, 86.31020000, 3.81230000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 29.85000000, -601.28000000, 13.69580000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, -184.29000000, 102.09000000, 13.76770000 );
        break;
        case 3:
        sub_95895( sub_94853( iParam0, 2 ), 23, 10, 539.10960000, 1256.93500000, 5.73630000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 10, 882.31930000, 1930.23800000, 34.16670000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 10, 1475.73900000, 1564.51600000, 3.66870000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 10, 93.89270000, 1713.48100000, 28.73100000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 10, 328.96450000, 1716.17800000, 14.86010000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 10, 1119.38200000, 1525.37700000, 15.63970000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 10, 707.74950000, 1309.93500000, 13.26370000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 10, 930.30580000, 1631.76100000, 16.05420000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 10, 360.37280000, 1881.50600000, 18.44000000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 10, 644.43170000, 1981.75500000, 30.80980000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 10, 468.04420000, 1396.87200000, 10.67750000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 10, 845.72580000, 1854.56700000, 43.95300000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 10, 1069.71500000, 1958.88900000, 10.90870000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 10, 1205.48100000, 1720.37000000, 15.66210000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 10, 1365.76300000, 1906.24700000, 4.63100000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 10, 634.93950000, 1612.97000000, 25.21720000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 10, 1319.39400000, 1685.28700000, 15.79480000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 10, 1439.96700000, 1723.91200000, 15.68820000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 10, 379.41550000, 1531.95200000, 15.94950000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 10, 1248.69500000, 1474.25200000, 15.82900000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 10, 386.04720000, 1755.51900000, 20.70220000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 10, 460.35860000, 2026.23700000, 6.86000000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 10, 553.16000000, 1462.95000000, 9.46780000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 10, 751.69490000, 1600.36700000, 20.85910000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 10, 1073.43700000, 1823.56400000, 12.77140000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 10, 1257.53000000, 1514.06300000, 15.99010000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 689.15590000, 1457.28400000, 13.75660000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 936.22550000, 1530.67400000, 15.83790000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 771.99180000, 1966.79800000, 22.72810000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 1185.19300000, 1471.14700000, 15.68200000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 702.78440000, 1937.85000000, 26.15900000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 547.32150000, 1316.52000000, 9.93810000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 368.63770000, 1628.96100000, 15.21180000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 510.20640000, 1825.90800000, 29.83320000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 584.97880000, 1880.88200000, 26.36540000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 734.09080000, 1532.38800000, 17.66370000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 1332.83000000, 1420.26600000, 10.63750000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 1134.34400000, 1812.80000000, 9.31490000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 1228.91500000, 1939.79000000, 11.30560000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 666.57490000, 1435.97500000, 13.16830000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 1060.42200000, 1902.93300000, 13.20990000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 772.97860000, 1477.91500000, 13.24540000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 1028.85700000, 1662.25600000, 15.19240000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 877.66640000, 1594.83200000, 15.93270000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 1141.42700000, 1672.18500000, 16.12200000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 482.39520000, 1621.94800000, 19.15470000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 325.66010000, 1807.28400000, 16.58760000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 438.86760000, 1955.03500000, 23.10060000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 440.77880000, 1648.07300000, 14.95950000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 455.56370000, 1541.82700000, 14.05120000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 468.56070000, 1498.16300000, 12.62310000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 539.00440000, 1760.74400000, 31.55800000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 562.00150000, 1545.10000000, 16.04880000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 558.07730000, 1432.16400000, 10.11410000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 587.98410000, 1673.94000000, 30.77670000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 611.11330000, 1734.55100000, 30.86380000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 689.79570000, 1542.87100000, 17.26990000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 731.81860000, 1401.85100000, 13.21590000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 788.46140000, 1394.36900000, 13.23530000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 816.96370000, 1758.44200000, 16.18570000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 931.48030000, 1713.01100000, 15.68600000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 965.84810000, 1781.22200000, 19.21950000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 1074.58800000, 1754.85300000, 13.37660000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 1236.91200000, 1776.98000000, 9.31600000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 1256.70600000, 1841.52500000, 9.13970000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 1303.10100000, 1848.62300000, 9.11100000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 10, 1408.43200000, 1575.70900000, 2.65490000 );
        break;
        case 4:
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, 971.25700000, -241.15850000, 21.77490000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, 1991.54800000, 666.28930000, 17.05490000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, 978.78280000, 697.73490000, 25.01930000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, 1670.20700000, 1148.62700000, 2.37930000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, 2197.52100000, -4.28880000, 4.78710000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, 769.50460000, 354.70890000, 7.67740000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, 1044.38500000, 577.04820000, 24.68200000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, 796.74760000, -204.30470000, 4.99600000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, 1034.98200000, 993.40050000, 14.51280000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, 1488.01100000, -481.83600000, 30.15300000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, 725.29760000, 59.99800000, 4.95690000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, 1491.71400000, 357.32600000, 16.20000000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, 1177.05400000, -381.75500000, 20.50900000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, 1534.77600000, 39.55110000, 23.86690000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, 1382.43500000, -562.72270000, 13.62910000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, 1455.49000000, -332.38300000, 13.75420000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, 1206.40700000, 1054.12900000, 6.88890000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, 1386.27600000, 399.48250000, 21.94650000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, 1510.31200000, -418.72120000, 33.56950000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, 2237.96900000, 698.48690000, 4.80750000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, 2334.89200000, 169.20370000, 4.85780000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, 957.12920000, 187.32830000, 30.85680000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, 1742.97400000, 406.33870000, 24.02560000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, 1462.04300000, 27.35250000, 23.23340000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, 1355.33500000, 114.71390000, 30.29480000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, 1301.52300000, -393.57320000, 17.34230000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, 1047.89600000, 488.45810000, 18.52560000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, 711.86510000, 112.66810000, 5.00400000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, 1324.37400000, -709.35170000, 7.32980000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, 937.48060000, -706.47240000, 15.44030000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, 1145.83100000, -629.40700000, 12.77860000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, 1636.29900000, 161.49530000, 26.91540000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, 1352.16700000, -526.77150000, 13.61500000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, 1390.80000000, -259.77330000, 19.18340000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, 896.72970000, 432.34670000, 12.57160000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, 1238.30300000, 424.19980000, 21.60770000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, 1769.25800000, 1027.22600000, 14.55440000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, 893.41270000, 486.69640000, 12.48910000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, 2313.73100000, -5.84420000, 4.85890000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, 2238.16700000, 189.87030000, 4.90610000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, 2081.40600000, 309.53860000, 18.81760000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, 2115.34300000, 505.21730000, 8.60340000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, 2068.74900000, 609.38340000, 17.70370000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, 1909.62700000, 277.26980000, 4.23590000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, 2457.64300000, 394.31570000, 4.80800000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1787.68600000, 884.52730000, 16.06660000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 794.19010000, 75.48400000, 5.01250000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1874.83800000, 107.34850000, 17.14260000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 2189.09700000, 321.15950000, 5.20560000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 2616.15100000, 432.87480000, 4.85950000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1489.06000000, 563.60000000, 28.83170000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1023.06200000, 617.05350000, 37.28110000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1381.86900000, 334.10410000, 18.50400000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1488.55100000, 648.40590000, 27.34510000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1497.21300000, 912.85590000, 14.28900000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1102.66500000, -84.83450000, 35.29810000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1103.88000000, -217.78940000, 21.19290000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 902.45760000, -682.94340000, 15.33640000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1139.98000000, -283.95670000, 19.64120000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1114.17900000, 287.47740000, 30.20140000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1202.41300000, -679.65320000, 15.42330000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 804.32350000, -25.85970000, 5.15600000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 850.31520000, 681.09970000, 6.88570000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1595.65200000, 366.45610000, 24.23320000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 834.78190000, 842.82500000, 10.80350000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1175.59000000, 975.44030000, 14.40380000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1246.67300000, 892.18030000, 30.61760000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 2408.35400000, 27.70170000, 5.08350000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 2762.13500000, 422.38900000, 5.06270000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 2327.30600000, -108.32800000, 4.85780000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 2489.17700000, 755.87680000, 3.45390000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1951.25600000, 864.31450000, 9.95050000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1910.89400000, 468.99340000, 17.39970000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1894.39700000, 724.58680000, 23.24230000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 2671.00600000, 413.67400000, 4.80730000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 2357.89800000, 398.53440000, 5.08020000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1056.80600000, -561.22890000, 12.66850000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 926.81460000, -500.43770000, 14.14500000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 940.84120000, 327.51310000, 29.74390000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1385.23000000, 190.27770000, 25.93480000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 945.37550000, -643.48990000, 13.23200000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1043.36600000, 909.41000000, 30.60360000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1136.78700000, -698.29410000, 15.42140000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 938.77260000, 911.06760000, 21.62160000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1062.84000000, 700.77970000, 32.94400000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1050.94100000, 854.70670000, 30.68800000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1240.56500000, 751.17660000, 35.11810000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1393.91600000, 530.09220000, 27.96500000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1263.16100000, 337.69190000, 20.31880000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1153.28600000, 448.26910000, 28.82300000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 830.50780000, 356.23580000, 5.96940000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1552.73500000, 836.96840000, 16.02460000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1823.46600000, 550.70790000, 27.97250000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1819.67400000, 344.58930000, 21.63850000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1780.63100000, 176.98750000, 20.74130000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1526.18500000, 202.64920000, 22.12750000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1414.34000000, 15.21330000, 24.87060000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1226.28700000, 151.64710000, 31.45340000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 957.46700000, 70.46760000, 29.02720000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1200.92300000, -49.12340000, 29.61420000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1302.28900000, -106.41000000, 25.83070000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1311.66600000, 94.31480000, 33.43510000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1267.07500000, -262.42500000, 24.33860000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1072.13700000, -278.21340000, 20.05710000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 989.40310000, -324.93550000, 19.87850000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 809.38740000, -501.27790000, 13.00590000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 896.74400000, -581.16300000, 12.97120000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 721.35270000, -294.43500000, 4.82040000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 766.60350000, -558.81270000, 8.71300000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 872.93650000, -293.38860000, 16.30820000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1248.20200000, -434.06700000, 15.65760000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1042.48200000, -470.39700000, 13.56660000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1029.54100000, -700.80800000, 15.44000000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 837.87730000, 126.86570000, 4.93750000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1376.86500000, -66.94800000, 21.78340000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1227.66700000, 24.23500000, 34.69800000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 881.41480000, 191.42900000, 29.83690000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1241.61900000, -149.58210000, 26.67020000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 798.72020000, -369.13160000, 6.53280000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1025.91100000, -71.99620000, 27.75800000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 790.45740000, -291.48900000, 13.50790000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1190.75800000, 695.12240000, 36.33260000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1736.31100000, 673.13120000, 27.00880000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1635.02900000, 726.04530000, 27.21290000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1641.17200000, 508.39920000, 27.78160000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1725.32700000, 504.99910000, 27.94640000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1168.02600000, 550.06880000, 28.22670000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1343.09000000, 618.81650000, 35.90860000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1415.46000000, 784.76450000, 27.24360000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 986.42850000, 517.60480000, 20.83150000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 978.83850000, 796.69900000, 24.33790000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1371.68500000, 813.48190000, 24.64800000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1736.14500000, 310.83050000, 11.00410000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1562.77400000, 486.79020000, 28.07260000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1540.74600000, 992.09050000, 13.14870000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1120.33300000, 770.54590000, 33.62930000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1687.03400000, 913.52890000, 15.09290000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 2456.05300000, 193.38270000, 4.85780000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 2187.67200000, 454.12460000, 5.10300000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 2544.68500000, 452.00130000, 4.80790000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 2406.69600000, 552.79240000, 4.85780000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 2309.43700000, 556.20780000, 5.03860000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1965.17900000, 157.26200000, 14.65190000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 2194.80600000, 633.44290000, 4.92400000 );
        break;
        case 5:
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1988.59600000, -261.24350000, 13.21570000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1957.61700000, -380.15630000, 2.54140000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1750.17500000, -188.89970000, 9.31030000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1462.18300000, -555.94830000, 7.14380000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1896.97200000, -652.20210000, 8.51260000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -2127.38100000, -327.66700000, 1.84810000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1832.01600000, -591.09220000, 39.02480000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1557.64900000, -487.77500000, 49.97720000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1839.98600000, -648.80100000, 5.82910000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1849.57000000, -197.37200000, 1.62920000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1569.59200000, -288.30590000, -1.61900000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1593.68600000, -528.22850000, 5.58460000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1652.23700000, -344.31550000, 1.83710000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1883.32000000, -538.75650000, 2.20930000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1981.27900000, -639.00310000, 3.28400000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1481.57000000, -285.77700000, 1.83700000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1744.83100000, -312.47730000, 5.92080000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1624.97600000, -680.03380000, 6.17540000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -2062.50500000, -433.98490000, 3.37430000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1756.51600000, -264.89190000, 10.12920000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1451.59000000, -613.79830000, 2.00180000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1516.68000000, -466.84100000, 1.82770000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1723.96000000, -386.08700000, 1.92320000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1703.45000000, -569.29200000, 1.92350000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1971.57000000, -577.45600000, 1.83690000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1927.70000000, -488.93700000, 2.20850000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1678.75000000, -254.92500000, 1.74960000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 63658, -300.98300000, 4.43590000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1975.83000000, -210.92500000, 1.62840000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -2024.15000000, -426.54300000, 3.28110000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1968.68000000, -507.75940000, 2.20930000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1813.52600000, -506.78250000, 2.04570000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1829.59200000, -454.68280000, 2.20950000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1682.03400000, -427.12200000, 1.91060000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1531.64500000, -575.34610000, 2.00010000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1562.14300000, -436.53920000, 3.60510000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1756.10000000, -451.95550000, 2.04500000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1858.55400000, -375.19650000, 3.23150000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1554.54900000, -233.75650000, 4.38720000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1643.03100000, -611.03750000, 1.83760000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1727.51100000, -226.10180000, 3.43530000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1937.72600000, -238.36680000, 4.43800000 );
        break;
        case 6:
        switch (iParam0->_fU64)
        {
            case 1:
            sub_95895( sub_113188( iParam0, 12 ), 23, 0, -1179.37400000, -471.02340000, 12.30210000 );
            sub_95895( sub_113188( iParam0, 5 ), 23, 0, -974.23990000, -394.78180000, 12.49830000 );
            sub_95895( sub_113188( iParam0, 12 ), 23, 0, -1129.84400000, -374.91930000, 11.96490000 );
            sub_95895( sub_113188( iParam0, 5 ), 23, 0, -985.62780000, -456.36110000, 12.30230000 );
            sub_95895( sub_113188( iParam0, 7 ), 23, 0, -1180.50800000, -469.41180000, 7.28980000 );
            sub_95895( sub_113188( iParam0, 12 ), 23, 0, -1139.07900000, -324.89190000, 7.28950000 );
            sub_95895( sub_113188( iParam0, 7 ), 23, 0, -1075.19800000, -492.82770000, 12.30190000 );
            sub_95895( sub_113188( iParam0, 5 ), 23, 0, -900.00490000, -397.62310000, 12.30170000 );
            break;
            case 2:
            sub_95895( sub_113188( iParam0, 17 ), 23, 0, -1179.37400000, -471.02340000, 12.30210000 );
            sub_95895( sub_113188( iParam0, 4 ), 23, 0, -974.23990000, -394.78180000, 12.49830000 );
            sub_95895( sub_113188( iParam0, 14 ), 23, 0, -1129.84400000, -374.91930000, 11.96490000 );
            sub_95895( sub_113188( iParam0, 4 ), 23, 0, -985.62780000, -456.36110000, 12.30230000 );
            sub_95895( sub_113188( iParam0, 13 ), 23, 0, -1180.50800000, -469.41180000, 7.28980000 );
            sub_95895( sub_113188( iParam0, 14 ), 23, 0, -1139.07900000, -324.89190000, 7.28950000 );
            sub_95895( sub_113188( iParam0, 17 ), 23, 0, -1075.19800000, -492.82770000, 12.30190000 );
            sub_95895( sub_113188( iParam0, 4 ), 23, 0, -900.00490000, -397.62310000, 12.30170000 );
            break;
            case 3:
            sub_95895( sub_113188( iParam0, 16 ), 23, 0, -1179.37400000, -471.02340000, 12.30210000 );
            sub_95895( sub_113188( iParam0, 18 ), 23, 0, -974.23990000, -394.78180000, 12.49830000 );
            sub_95895( sub_113188( iParam0, 15 ), 23, 0, -1129.84400000, -374.91930000, 11.96490000 );
            sub_95895( sub_113188( iParam0, 5 ), 23, 0, -985.62780000, -456.36110000, 12.30230000 );
            sub_95895( sub_113188( iParam0, 13 ), 23, 0, -1180.50800000, -469.41180000, 7.28980000 );
            sub_95895( sub_113188( iParam0, 15 ), 23, 0, -1139.07900000, -324.89190000, 7.28950000 );
            sub_95895( sub_113188( iParam0, 16 ), 23, 0, -1075.19800000, -492.82770000, 12.30190000 );
            sub_95895( sub_113188( iParam0, 4 ), 23, 0, -900.00490000, -397.62310000, 12.30170000 );
            break;
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1179.37400000, -471.02340000, 12.30210000 );
            sub_95895( sub_94853( iParam0, 2 ), 23, 0, -1129.84400000, -374.91930000, 11.96490000 );
            sub_95895( sub_94853( iParam0, 2 ), 23, 0, -1180.50800000, -469.41180000, 7.28980000 );
            sub_95895( sub_94853( iParam0, 2 ), 23, 0, -1075.19800000, -492.82770000, 12.30190000 );
            sub_95895( sub_94853( iParam0, 0 ), 23, 0, -974.23990000, -394.78180000, 12.49830000 );
            sub_95895( sub_94853( iParam0, 0 ), 23, 0, -985.62780000, -456.36110000, 12.30230000 );
            sub_95895( sub_94853( iParam0, 0 ), 23, 0, -1139.07900000, -324.89190000, 7.28950000 );
            sub_95895( sub_94853( iParam0, 0 ), 23, 0, -900.00490000, -397.62310000, 12.30170000 );
            break;
            case 0:
            sub_95895( sub_113188( iParam0, 16 ), 23, 0, -1179.37400000, -471.02340000, 12.30210000 );
            sub_95895( sub_113188( iParam0, 18 ), 23, 0, -974.23990000, -394.78180000, 12.49830000 );
            sub_95895( sub_113188( iParam0, 15 ), 23, 0, -1129.84400000, -374.91930000, 11.96490000 );
            sub_95895( sub_113188( iParam0, 5 ), 23, 0, -985.62780000, -456.36110000, 12.30230000 );
            sub_95895( sub_113188( iParam0, 13 ), 23, 0, -1180.50800000, -469.41180000, 7.28980000 );
            sub_95895( sub_113188( iParam0, 15 ), 23, 0, -1139.07900000, -324.89190000, 7.28950000 );
            sub_95895( sub_113188( iParam0, 16 ), 23, 0, -1075.19800000, -492.82770000, 12.30190000 );
            sub_95895( sub_113188( iParam0, 4 ), 23, 0, -900.00490000, -397.62310000, 12.30170000 );
            break;
        }
        sub_95895( sub_94853( iParam0, 2 ), 23, 0, -943.87520000, -369.52990000, 9.96950000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 0, -974.14700000, -325.42500000, 12.30190000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 0, -905.80910000, -355.14430000, 2.17950000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 0, -1034.78100000, -487.44620000, 2.17920000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 0, -1134.33600000, -442.75500000, 2.17880000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 0, -938.73180000, -411.02590000, 11.94080000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 0, -1135.11500000, -358.36580000, 2.17910000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 0, -969.02450000, -431.48750000, 2.93540000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, -971.50310000, -365.51860000, 2.13990000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, -1131.40600000, -476.22250000, 1.25700000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, -1084.88200000, -413.49010000, 2.18670000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, -930.18570000, -416.89610000, 3.71260000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, -1082.97000000, -349.59460000, 2.17820000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, -946.29130000, -328.82420000, 2.17950000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, -1049.83100000, -380.59300000, 2.31070000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, -1027.14900000, -358.24460000, 2.16310000 );
        break;
        case 7:
        switch (iParam0->_fU64)
        {
            case 1:
            sub_95895( sub_113188( iParam0, 7 ), 23, 0, -1075.98500000, 148.86390000, 6.37530000 );
            sub_95895( sub_113188( iParam0, 12 ), 23, 0, -1283.58800000, 455.25190000, 49.97760000 );
            sub_95895( sub_113188( iParam0, 5 ), 23, 0, -1255.54000000, 116.30180000, 4.80030000 );
            sub_95895( sub_113188( iParam0, 12 ), 23, 0, -964.67740000, 151.32000000, 5.27030000 );
            sub_95895( sub_113188( iParam0, 5 ), 23, 0, -1057.64600000, 249.89120000, 7.75290000 );
            break;
            case 2:
            sub_95895( sub_113188( iParam0, 17 ), 23, 0, -1075.98500000, 148.86390000, 6.37530000 );
            sub_95895( sub_113188( iParam0, 17 ), 23, 0, -1214.61000000, 531.44000000, 13.04100000 );
            sub_95895( sub_113188( iParam0, 4 ), 23, 0, -1255.54000000, 116.30180000, 4.80030000 );
            sub_95895( sub_113188( iParam0, 14 ), 23, 0, -964.67740000, 151.32000000, 5.27030000 );
            sub_95895( sub_113188( iParam0, 10 ), 23, 0, -1057.64600000, 249.89120000, 7.75290000 );
            break;
            case 3:
            sub_95895( sub_113188( iParam0, 16 ), 23, 0, -1075.98500000, 148.86390000, 6.37530000 );
            sub_95895( sub_113188( iParam0, 18 ), 23, 0, -1214.61000000, 531.44000000, 13.04100000 );
            sub_95895( sub_113188( iParam0, 4 ), 23, 0, -1255.54000000, 116.30180000, 4.80030000 );
            sub_95895( sub_113188( iParam0, 15 ), 23, 0, -964.67740000, 151.32000000, 5.27030000 );
            sub_95895( sub_113188( iParam0, 11 ), 23, 0, -1057.64600000, 249.89120000, 7.75290000 );
            break;
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            sub_95895( sub_94853( iParam0, 2 ), 23, 24, -964.67740000, 151.32000000, 5.27030000 );
            sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1283.58800000, 455.25190000, 49.97760000 );
            sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1075.98500000, 148.86390000, 6.37530000 );
            sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1255.54000000, 116.30180000, 4.80030000 );
            sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1057.64600000, 249.89120000, 7.75290000 );
            break;
            case 0:
            sub_95895( sub_113188( iParam0, 16 ), 23, 0, -1075.98500000, 148.86390000, 6.37530000 );
            sub_95895( sub_113188( iParam0, 18 ), 23, 0, -1214.61000000, 531.44000000, 13.04100000 );
            sub_95895( sub_113188( iParam0, 4 ), 23, 0, -1255.54000000, 116.30180000, 4.80030000 );
            sub_95895( sub_113188( iParam0, 15 ), 23, 0, -964.67740000, 151.32000000, 5.27030000 );
            sub_95895( sub_113188( iParam0, 11 ), 23, 0, -1057.64600000, 249.89120000, 7.75290000 );
            break;
        }
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1274.41100000, 701.62580000, 14.39700000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1099.49500000, 393.20450000, 3.93250000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1017.69400000, 47.42280000, 4.28950000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -968.62940000, 337.82890000, 3.50260000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -986.80800000, 453.98970000, 3.37260000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1184.88300000, 16.94380000, 3.30650000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -1296.30900000, 223.55720000, 8.94460000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, -919.65090000, 646.94350000, 3.07890000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1038.82800000, 568.35760000, 3.07740000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, -1055.34500000, 448.75700000, 3.37260000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1004.58400000, 710.36520000, 2.96050000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -975.65720000, 262.81570000, 3.37280000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1276.45500000, 641.39540000, 7.36890000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -954.30020000, 627.81490000, 3.07890000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1231.63400000, 500.95030000, 3.37340000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1213.79000000, 664.11570000, 12.85330000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1133.36000000, 519.97690000, 3.89570000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1101.90900000, 317.84240000, 3.50320000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1121.53500000, 695.33390000, 8.15600000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1143.45200000, 21.28500000, 3.20850000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1151.13800000, 341.02540000, 3.09000000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1168.72000000, 148.28840000, 3.23240000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1214.21100000, 591.50100000, 3.37350000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1240.37300000, 452.18370000, 3.53580000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1260.71500000, 353.20720000, 6.37320000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1275.83900000, -6.00980000, 5.23960000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1220.80700000, 209.69680000, 3.43310000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1196.68000000, 337.08170000, 3.00040000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, -1095.52500000, 579.76070000, 3.52740000 );
        break;
        case 8:
        switch (iParam0->_fU64)
        {
            case 1:
            sub_95895( sub_113188( iParam0, 12 ), 23, 24, -608.34910000, -798.24460000, 12.06630000 );
            sub_95895( sub_113188( iParam0, 5 ), 23, 24, -608.20830000, -857.52000000, 12.19460000 );
            sub_95895( sub_113188( iParam0, 12 ), 23, 24, -804.94760000, -737.65580000, 3.83730000 );
            sub_95895( sub_113188( iParam0, 7 ), 23, 24, -608.10000000, -819.83000000, 3.83770000 );
            sub_95895( sub_113188( iParam0, 12 ), 23, 24, -714.94530000, -818.98440000, 3.83740000 );
            sub_95895( sub_113188( iParam0, 7 ), 23, 24, -489.24340000, -890.79850000, 3.83770000 );
            sub_95895( sub_113188( iParam0, 12 ), 23, 24, -517.41030000, -978.96110000, 4.53750000 );
            sub_95895( sub_113188( iParam0, 12 ), 23, 24, -563.81060000, -1047.09000000, 4.05940000 );
            sub_95895( sub_113188( iParam0, 7 ), 23, 24, -625.72610000, -1002.18000000, 4.39280000 );
            sub_95895( sub_113188( iParam0, 5 ), 23, 24, -529.89010000, -813.25090000, 4.53770000 );
            sub_95895( sub_113188( iParam0, 5 ), 23, 24, -569.10100000, -733.48970000, 3.89950000 );
            sub_95895( sub_113188( iParam0, 7 ), 23, 24, -628.38550000, -673.67490000, 4.90510000 );
            sub_95895( sub_113188( iParam0, 7 ), 23, 24, -608.37770000, -893.77860000, 3.83770000 );
            sub_95895( sub_113188( iParam0, 5 ), 23, 24, -612.43000000, -955.11000000, 3.83770000 );
            sub_95895( sub_113188( iParam0, 12 ), 23, 24, -490.30000000, -956.50000000, 3.83770000 );
            break;
            case 2:
            sub_95895( sub_113188( iParam0, 17 ), 23, 24, -608.34910000, -798.24460000, 12.06630000 );
            sub_95895( sub_113188( iParam0, 17 ), 23, 24, -608.20830000, -857.52000000, 12.19460000 );
            sub_95895( sub_113188( iParam0, 4 ), 23, 24, -804.94760000, -737.65580000, 3.83730000 );
            sub_95895( sub_113188( iParam0, 13 ), 23, 24, -608.10000000, -819.83000000, 3.83770000 );
            sub_95895( sub_113188( iParam0, 14 ), 23, 24, -714.94530000, -818.98440000, 3.83740000 );
            sub_95895( sub_113188( iParam0, 9 ), 23, 24, -489.24340000, -890.79850000, 3.83770000 );
            sub_95895( sub_113188( iParam0, 13 ), 23, 24, -517.41030000, -978.96110000, 4.53750000 );
            sub_95895( sub_113188( iParam0, 14 ), 23, 24, -563.81060000, -1047.09000000, 4.05940000 );
            sub_95895( sub_113188( iParam0, 14 ), 23, 24, -625.72610000, -1002.18000000, 4.39280000 );
            sub_95895( sub_113188( iParam0, 14 ), 23, 24, -529.89010000, -813.25090000, 4.53770000 );
            sub_95895( sub_113188( iParam0, 14 ), 23, 24, -569.10100000, -733.48970000, 3.89950000 );
            sub_95895( sub_113188( iParam0, 4 ), 23, 24, -628.38550000, -673.67490000, 4.90510000 );
            sub_95895( sub_113188( iParam0, 9 ), 23, 24, -608.37770000, -893.77860000, 3.83770000 );
            sub_95895( sub_113188( iParam0, 4 ), 23, 24, -612.43000000, -955.11000000, 3.83770000 );
            sub_95895( sub_113188( iParam0, 14 ), 23, 24, -490.30000000, -956.50000000, 3.83770000 );
            break;
            case 3:
            sub_95895( sub_113188( iParam0, 17 ), 23, 24, -608.34910000, -798.24460000, 12.06630000 );
            sub_95895( sub_113188( iParam0, 5 ), 23, 24, -608.20830000, -857.52000000, 12.19460000 );
            sub_95895( sub_113188( iParam0, 18 ), 23, 24, -804.94760000, -737.65580000, 3.83730000 );
            sub_95895( sub_113188( iParam0, 13 ), 23, 24, -608.10000000, -819.83000000, 3.83770000 );
            sub_95895( sub_113188( iParam0, 15 ), 23, 24, -714.94530000, -818.98440000, 3.83740000 );
            sub_95895( sub_113188( iParam0, 13 ), 23, 24, -489.24340000, -890.79850000, 3.83770000 );
            sub_95895( sub_113188( iParam0, 13 ), 23, 24, -517.41030000, -978.96110000, 4.53750000 );
            sub_95895( sub_113188( iParam0, 15 ), 23, 24, -563.81060000, -1047.09000000, 4.05940000 );
            sub_95895( sub_113188( iParam0, 11 ), 23, 24, -625.72610000, -1002.18000000, 4.39280000 );
            sub_95895( sub_113188( iParam0, 11 ), 23, 24, -529.89010000, -813.25090000, 4.53770000 );
            sub_95895( sub_113188( iParam0, 18 ), 23, 24, -569.10100000, -733.48970000, 3.89950000 );
            sub_95895( sub_113188( iParam0, 4 ), 23, 24, -628.38550000, -673.67490000, 4.90510000 );
            sub_95895( sub_113188( iParam0, 13 ), 23, 24, -608.37770000, -893.77860000, 3.83770000 );
            sub_95895( sub_113188( iParam0, 4 ), 23, 24, -612.43000000, -955.11000000, 3.83770000 );
            sub_95895( sub_113188( iParam0, 13 ), 23, 24, -490.30000000, -956.50000000, 3.83770000 );
            break;
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            sub_95895( sub_94853( iParam0, 2 ), 23, 24, -608.20830000, -857.52000000, 12.19460000 );
            sub_95895( sub_94853( iParam0, 2 ), 23, 24, -804.94760000, -737.65580000, 3.83730000 );
            sub_95895( sub_94853( iParam0, 2 ), 23, 24, -714.94530000, -818.98440000, 3.83740000 );
            sub_95895( sub_94853( iParam0, 2 ), 23, 24, -563.81060000, -1047.09000000, 4.05940000 );
            sub_95895( sub_94853( iParam0, 2 ), 23, 24, -569.10100000, -733.48970000, 3.89950000 );
            sub_95895( sub_94853( iParam0, 2 ), 23, 24, -628.38550000, -673.67490000, 4.90510000 );
            sub_95895( sub_94853( iParam0, 2 ), 23, 24, -612.43000000, -955.11000000, 3.83770000 );
            sub_95895( sub_94853( iParam0, 0 ), 23, 24, -608.34910000, -798.24460000, 12.06630000 );
            sub_95895( sub_94853( iParam0, 0 ), 23, 24, -608.10000000, -819.83000000, 3.83770000 );
            sub_95895( sub_94853( iParam0, 0 ), 23, 24, -489.24340000, -890.79850000, 3.83770000 );
            sub_95895( sub_94853( iParam0, 0 ), 23, 24, -517.41030000, -978.96110000, 4.53750000 );
            sub_95895( sub_94853( iParam0, 0 ), 23, 24, -625.72610000, -1002.18000000, 4.39280000 );
            sub_95895( sub_94853( iParam0, 0 ), 23, 24, -529.89010000, -813.25090000, 4.53770000 );
            sub_95895( sub_94853( iParam0, 0 ), 23, 24, -608.37770000, -893.77860000, 3.83770000 );
            sub_95895( sub_94853( iParam0, 0 ), 23, 24, -490.30000000, -956.50000000, 3.83770000 );
            break;
            case 0:
            sub_95895( sub_113188( iParam0, 17 ), 23, 24, -608.34910000, -798.24460000, 12.06630000 );
            sub_95895( sub_113188( iParam0, 5 ), 23, 24, -608.20830000, -857.52000000, 12.19460000 );
            sub_95895( sub_113188( iParam0, 18 ), 23, 24, -804.94760000, -737.65580000, 3.83730000 );
            sub_95895( sub_113188( iParam0, 12 ), 23, 24, -608.10000000, -819.83000000, 3.83770000 );
            sub_95895( sub_113188( iParam0, 14 ), 23, 24, -714.94530000, -818.98440000, 3.83740000 );
            sub_95895( sub_113188( iParam0, 9 ), 23, 24, -489.24340000, -890.79850000, 3.83770000 );
            sub_95895( sub_113188( iParam0, 12 ), 23, 24, -517.41030000, -978.96110000, 4.53750000 );
            sub_95895( sub_113188( iParam0, 14 ), 23, 24, -563.81060000, -1047.09000000, 4.05940000 );
            sub_95895( sub_113188( iParam0, 10 ), 23, 24, -625.72610000, -1002.18000000, 4.39280000 );
            sub_95895( sub_113188( iParam0, 11 ), 23, 24, -529.89010000, -813.25090000, 4.53770000 );
            sub_95895( sub_113188( iParam0, 18 ), 23, 24, -569.10100000, -733.48970000, 3.89950000 );
            sub_95895( sub_113188( iParam0, 4 ), 23, 24, -628.38550000, -673.67490000, 4.90510000 );
            sub_95895( sub_113188( iParam0, 9 ), 23, 24, -608.37770000, -893.77860000, 3.83770000 );
            sub_95895( sub_113188( iParam0, 4 ), 23, 24, -612.43000000, -955.11000000, 3.83770000 );
            sub_95895( sub_113188( iParam0, 13 ), 23, 24, -490.30000000, -956.50000000, 3.83770000 );
            break;
        }
        break;
        case 9:
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, 408.80360000, -65.24540000, 4.29340000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, 561.51890000, 188.31020000, 7.71200000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, 546.11480000, 224.00730000, 9.71000000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, 535.68580000, 120.49250000, 2.56830000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 24, 489.39300000, 221.40600000, 7.72690000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, 523.61310000, -76.84820000, 8.28780000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, 375.34610000, 109.64960000, 3.99930000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, 466.36250000, -64.42510000, 8.25140000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 24, 433.49540000, 32.68570000, 7.85790000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 468.10000000, 402.10000000, 7.27620000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 431.43030000, 226.85410000, 13.71420000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 530.50880000, 257.98000000, 7.89350000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 415.05510000, 346.20030000, 7.53930000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 452.16560000, 313.49470000, 7.57830000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 480.96360000, 105.28050000, 6.95840000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 518.70980000, 313.52720000, 7.57960000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 533.97420000, 373.89600000, 7.69930000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 526.41750000, -13.77130000, 7.98750000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 486.09720000, 40.29870000, 7.71270000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 376.78250000, 43.35770000, 4.11130000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 432.88990000, 148.55520000, 7.70640000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 376.07240000, 198.49140000, 7.86880000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 455.20870000, 221.32960000, 7.70100000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 445.80360000, 99.30360000, 7.72650000 );
        break;
        case 10:
        sub_95895( sub_94853( iParam0, 2 ), 23, 0, 568.79020000, 786.22060000, 2.00000000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 0, 504.12220000, 691.04800000, 1.84050000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 0, 535.28340000, 852.84720000, 20.78500000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 0, 657.89820000, 700.62180000, 14.08770000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 0, 607.02870000, 879.24570000, 14.08760000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 0, 658.13440000, 879.37540000, 14.08750000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 0, 655.82540000, 1099.45200000, 0.50160000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 0, 433.36610000, 1064.61300000, 0.66200000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 0, 550.55820000, 898.25230000, 19.91800000 );
        sub_95895( sub_94853( iParam0, 2 ), 23, 0, 549.75850000, 721.80110000, 19.91820000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 0, 592.57450000, 1102.85800000, 1.81450000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 0, 464.57800000, 832.63300000, 1.64100000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 0, 615.58470000, 701.10530000, 8.86380000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 0, 543.24050000, 991.34010000, 3.64490000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 658.35990000, 735.46000000, 14.08760000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 625.95030000, 777.01490000, 14.08760000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 437.16310000, 919.35180000, 0.17810000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 556.17970000, 654.81580000, 19.76400000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 641.82240000, 835.48650000, 1.73330000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 684.25400000, 769.81860000, 1.78490000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 641.03790000, 911.81850000, 1.73080000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 476.83070000, 1087.36900000, 1.71370000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 609.53870000, 653.59840000, 2.32140000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 677.09640000, 698.25200000, 1.95400000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 628.76010000, 1020.96600000, 1.82520000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 570.15930000, 1058.61700000, 1.86450000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 491.34680000, 1064.61100000, 2.06010000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 576.71840000, 925.46780000, 1.73610000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 549.55200000, 802.08620000, 1.77480000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 504.04680000, 796.21140000, 4.13550000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 559.04920000, 589.71170000, 2.51860000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 548.33440000, 617.91640000, 1.85560000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 570.01580000, 714.47930000, 1.79620000 );
        break;
        case 11:
        switch (iParam0->_fU64)
        {
            case 1:
            sub_95895( sub_113188( iParam0, 12 ), 23, 0, 2496.14100000, 262.97270000, 19.17490000 );
            sub_95895( sub_113188( iParam0, 5 ), 23, 0, 2495.05400000, 524.63290000, 19.17500000 );
            sub_95895( sub_113188( iParam0, 12 ), 23, 0, 2475.86200000, 301.28410000, 18.84560000 );
            sub_95895( sub_113188( iParam0, 5 ), 23, 0, 2400.56500000, 497.48360000, 11.76310000 );
            sub_95895( sub_113188( iParam0, 5 ), 23, 0, 2226.60800000, 670.32020000, 17.56400000 );
            sub_95895( sub_113188( iParam0, 12 ), 23, 0, 2271.92100000, 367.94520000, 11.30240000 );
            sub_95895( sub_113188( iParam0, 12 ), 23, 0, 2144.44900000, -24.75960000, 4.78480000 );
            sub_95895( sub_113188( iParam0, 7 ), 23, 0, 2081.51700000, 299.51680000, 18.72830000 );
            sub_95895( sub_113188( iParam0, 5 ), 23, 0, 2162.52500000, -144.77160000, 0.81190000 );
            sub_95895( sub_113188( iParam0, 12 ), 23, 0, 2300.15400000, 457.03760000, 20.82560000 );
            sub_95895( sub_113188( iParam0, 12 ), 23, 0, 2255.44700000, 641.09600000, 28.03690000 );
            sub_95895( sub_113188( iParam0, 12 ), 23, 0, 2221.10000000, 336.34000000, 16.20610000 );
            break;
            case 2:
            sub_95895( sub_113188( iParam0, 17 ), 23, 0, 2496.14100000, 262.97270000, 19.17490000 );
            sub_95895( sub_113188( iParam0, 4 ), 23, 0, 2495.05400000, 524.63290000, 19.17500000 );
            sub_95895( sub_113188( iParam0, 14 ), 23, 0, 2475.86200000, 301.28410000, 18.84560000 );
            sub_95895( sub_113188( iParam0, 14 ), 23, 0, 2400.56500000, 497.48360000, 11.76310000 );
            sub_95895( sub_113188( iParam0, 4 ), 23, 0, 2226.60800000, 670.32020000, 17.56400000 );
            sub_95895( sub_113188( iParam0, 17 ), 23, 0, 2271.92100000, 367.94520000, 11.30240000 );
            sub_95895( sub_113188( iParam0, 14 ), 23, 0, 2144.44900000, -24.75960000, 4.78480000 );
            sub_95895( sub_113188( iParam0, 14 ), 23, 0, 2081.51700000, 299.51680000, 18.72830000 );
            sub_95895( sub_113188( iParam0, 4 ), 23, 0, 2162.52500000, -144.77160000, 0.81190000 );
            sub_95895( sub_113188( iParam0, 14 ), 23, 0, 2300.15400000, 457.03760000, 20.82560000 );
            sub_95895( sub_113188( iParam0, 17 ), 23, 0, 2255.44700000, 641.09600000, 28.03690000 );
            sub_95895( sub_113188( iParam0, 13 ), 23, 0, 2221.10000000, 336.34000000, 16.20610000 );
            break;
            case 3:
            sub_95895( sub_113188( iParam0, 16 ), 23, 0, 2496.14100000, 262.97270000, 19.17490000 );
            sub_95895( sub_113188( iParam0, 18 ), 23, 0, 2495.05400000, 524.63290000, 19.17500000 );
            sub_95895( sub_113188( iParam0, 15 ), 23, 0, 2475.86200000, 301.28410000, 18.84560000 );
            sub_95895( sub_113188( iParam0, 18 ), 23, 0, 2400.56500000, 497.48360000, 11.76310000 );
            sub_95895( sub_113188( iParam0, 4 ), 23, 0, 2226.60800000, 670.32020000, 17.56400000 );
            sub_95895( sub_113188( iParam0, 17 ), 23, 0, 2271.92100000, 367.94520000, 11.30240000 );
            sub_95895( sub_113188( iParam0, 18 ), 23, 0, 2144.44900000, -24.75960000, 4.78480000 );
            sub_95895( sub_113188( iParam0, 14 ), 23, 0, 2081.51700000, 299.51680000, 18.72830000 );
            sub_95895( sub_113188( iParam0, 4 ), 23, 0, 2162.52500000, -144.77160000, 0.81190000 );
            sub_95895( sub_113188( iParam0, 18 ), 23, 0, 2300.15400000, 457.03760000, 20.82560000 );
            sub_95895( sub_113188( iParam0, 16 ), 23, 0, 2255.44700000, 641.09600000, 28.03690000 );
            sub_95895( sub_113188( iParam0, 13 ), 23, 0, 2221.10000000, 336.34000000, 16.20610000 );
            break;
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            sub_95895( sub_94853( iParam0, 2 ), 23, 0, 2496.14100000, 262.97270000, 19.17490000 );
            sub_95895( sub_94853( iParam0, 2 ), 23, 0, 2495.05400000, 524.63290000, 19.17500000 );
            sub_95895( sub_94853( iParam0, 2 ), 23, 0, 2475.86200000, 301.28410000, 18.84560000 );
            sub_95895( sub_94853( iParam0, 2 ), 23, 0, 2300.15400000, 457.03760000, 20.82560000 );
            sub_95895( sub_94853( iParam0, 2 ), 23, 0, 2255.44700000, 641.09600000, 28.03690000 );
            sub_95895( sub_94853( iParam0, 2 ), 23, 0, 2221.10000000, 336.34000000, 16.20610000 );
            sub_95895( sub_94853( iParam0, 2 ), 23, 0, 2144.44900000, -24.75960000, 4.78480000 );
            sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2400.56500000, 497.48360000, 11.76310000 );
            sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2226.60800000, 670.32020000, 17.56400000 );
            sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2271.92100000, 367.94520000, 11.30240000 );
            sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2081.51700000, 299.51680000, 18.72830000 );
            sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2162.52500000, -144.77160000, 0.81190000 );
            break;
            case 0:
            sub_95895( sub_113188( iParam0, 16 ), 23, 0, 2496.14100000, 262.97270000, 19.17490000 );
            sub_95895( sub_113188( iParam0, 18 ), 23, 0, 2495.05400000, 524.63290000, 19.17500000 );
            sub_95895( sub_113188( iParam0, 15 ), 23, 0, 2475.86200000, 301.28410000, 18.84560000 );
            sub_95895( sub_113188( iParam0, 14 ), 23, 0, 2400.56500000, 497.48360000, 11.76310000 );
            sub_95895( sub_113188( iParam0, 4 ), 23, 0, 2226.60800000, 670.32020000, 17.56400000 );
            sub_95895( sub_113188( iParam0, 17 ), 23, 0, 2271.92100000, 367.94520000, 11.30240000 );
            sub_95895( sub_113188( iParam0, 18 ), 23, 0, 2144.44900000, -24.75960000, 4.78480000 );
            sub_95895( sub_113188( iParam0, 14 ), 23, 0, 2081.51700000, 299.51680000, 18.72830000 );
            sub_95895( sub_113188( iParam0, 4 ), 23, 0, 2162.52500000, -144.77160000, 0.81190000 );
            sub_95895( sub_113188( iParam0, 18 ), 23, 0, 2300.15400000, 457.03760000, 20.82560000 );
            sub_95895( sub_113188( iParam0, 16 ), 23, 0, 2255.44700000, 641.09600000, 28.03690000 );
            sub_95895( sub_113188( iParam0, 13 ), 23, 0, 2221.10000000, 336.34000000, 16.20610000 );
            break;
        }
        sub_95895( sub_94853( iParam0, 2 ), 23, 0, 2317.90500000, 329.69690000, 5.06600000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 0, 2866.54300000, 508.55150000, 1.65040000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 0, 2072.46800000, 214.56050000, 4.13590000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 0, 2109.73600000, 489.69760000, 5.06970000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 0, 2306.59700000, -132.14930000, 4.64290000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 0, 2502.10200000, 773.94060000, 5.85290000 );
        sub_95895( sub_94853( iParam0, 1 ), 23, 0, 2224.67300000, 367.84590000, 6.48730000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2671.00600000, 413.67400000, 4.80730000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2461.13200000, 536.93120000, 4.80800000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2650.94000000, 418.67970000, 4.81010000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2686.67500000, 417.35640000, 4.81010000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2383.91500000, 818.95320000, 4.69180000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2105.38400000, 758.34510000, 5.18750000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2114.72600000, 621.97900000, 13.26840000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2129.51800000, 853.62900000, 4.79520000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2165.49500000, 108.62400000, 6.04650000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2528.82800000, -25.02580000, 1.29660000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2587.07200000, 633.25320000, 4.94170000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2198.40700000, 767.72470000, 4.80780000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2203.98000000, 641.39890000, 4.80770000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2353.54800000, 476.59460000, 5.07980000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2368.21600000, 388.24700000, 5.08010000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2319.91000000, 197.22250000, 4.80770000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2333.73500000, 148.69650000, 4.80790000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2557.88800000, 239.62330000, 4.80800000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2710.08600000, 314.00470000, 4.80770000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2228.30800000, 176.13570000, 5.19870000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2245.69600000, 500.61720000, 5.05280000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2259.13700000, 104.54260000, 4.80840000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2285.27800000, -55.55380000, 4.67750000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2305.14600000, 56.55230000, 4.97910000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2321.58600000, 557.50310000, 4.80860000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2334.85200000, 767.19410000, 5.24410000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2391.13000000, 10.69820000, 5.42070000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2433.09900000, 597.82450000, 4.80820000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2476.77500000, 131.73940000, 5.42150000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2544.68500000, 452.00130000, 4.80790000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2564.21000000, 341.32000000, 4.80810000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2666.22600000, 227.90200000, 4.43690000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2713.83100000, 548.19950000, 2.69650000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2787.18100000, 322.15160000, 1.65070000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 0, 2168.95200000, 448.73480000, 5.08070000 );
        break;
        case 12:
        sub_95895( sub_94853( iParam0, 0 ), 23, 4, 543.19990000, 1463.87700000, 9.40950000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 4, 451.35610000, 1568.25100000, 14.63540000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 482.39520000, 1621.94800000, 19.15470000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 18, 489.23400000, 1706.20300000, 31.47090000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 200, 382.52510000, 1763.86900000, 19.32180000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 90, 475.82240000, 1887.74300000, 23.83430000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 1, 710.07570000, 1920.23900000, 26.32070000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 60, 737.77040000, 1796.69200000, 38.42670000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 703.30250000, 1707.06200000, 35.42970000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 90, 877.66640000, 1594.83200000, 15.93270000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 18, 938.83550000, 1647.00600000, 36.20010000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 120, 1028.85700000, 1662.25600000, 15.19240000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 120, 1141.42700000, 1672.18500000, 16.12200000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 120, 1134.34400000, 1812.80000000, 9.31490000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 3, 1060.42200000, 1902.93300000, 13.20990000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 120, 1228.91500000, 1939.79000000, 11.30560000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 24, 1337.30400000, 1737.75800000, 14.25920000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 1, 1212.84100000, 1655.74700000, 15.66540000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 3, 1185.19300000, 1471.14700000, 15.68200000 );
        sub_95895( sub_94853( iParam0, 0 ), 23, 18, 1216.53900000, 1396.60700000, 33.50070000 );
        break;
    }
    return;
}

void sub_94853(int iParam0, int iParam1)
{
    int iVar4;

    if (iParam1 == 2)
    {
        iVar4 = sub_6840( iParam0->_fU60 / 2, iParam0->_fU60 );
    }
    else if (iParam1 == 1)
    {
        iVar4 = sub_6840( iParam0->_fU60 / 3, iParam0->_fU60 );
    }
    else
    {
        iVar4 = sub_6840( 0, iParam0->_fU60 );
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
    return sub_69562( l_U1341, ref iVar4 );
}

void sub_95895(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;

    uVar8 = sub_69774( uParam0 );
    CREATE_PICKUP_WITH_AMMO( sub_69513( uParam0 ), uParam1, uVar8, uParam3, uParam4, uParam5, ref uVar9 );
    return;
}

int sub_113188(int iParam0, unknown uParam1)
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

void sub_125568(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_125568( 3 );
        sub_125568( 4 );
        sub_125568( 2 );
        sub_125568( 1 );
        sub_125568( 8 );
        sub_125568( 10 );
        sub_125568( 9 );
        break;
        case 1:
        sub_125755( -1082.58000000, -589.92300000, 2.87730000, 0 );
        sub_125755( -1079.22000000, 691.90000000, 7.50090000, 0 );
        sub_125755( -920.39610000, 938.02750000, 12.76070000, 0 );
        sub_125755( -1567.27000000, 941.01030000, 25.68270000, 0 );
        sub_125755( 64043, 701.22000000, 22.42860000, 0 );
        sub_125755( -1323.60000000, 1278.36900000, 22.37020000, 0 );
        sub_125755( -1193.08000000, 13.87000000, 3.14000000, 0 );
        sub_125755( -1255.63600000, 55.82830000, 1.26420000, 0 );
        sub_125755( -2071.77000000, -80.08610000, 5.61450000, 0 );
        sub_125755( -1465.90000000, 110.18730000, 6.24540000, 0 );
        sub_125755( -1559.25800000, 127.01540000, 7.63100000, 0 );
        sub_125755( -951.51540000, 1405.20800000, 24.68460000, 0 );
        sub_125755( -1164.97000000, 1835.70900000, 3.04650000, 0 );
        sub_125755( -1196.93000000, 1672.78800000, 33.55620000, 0 );
        sub_125755( -970.63300000, 1524.85900000, 24.56880000, 0 );
        sub_125755( -724.28700000, 1471.32700000, 0.50690000, 0 );
        sub_125755( -1095.44000000, 1258.74800000, 23.82480000, 0 );
        sub_125755( -808.51310000, 1205.92700000, 17.23890000, 0 );
        sub_125755( -1016.98000000, 1024.75100000, 12.58410000, 0 );
        sub_125755( -1476.12000000, 1047.32500000, 22.03400000, 0 );
        sub_125755( -1349.40600000, 890.07560000, 18.68600000, 0 );
        sub_125755( -891.21000000, 834.67030000, 10.81970000, 0 );
        sub_125755( -1276.65000000, 742.18080000, 18.50840000, 0 );
        sub_125755( -1093.82300000, 636.50060000, 7.50040000, 0 );
        sub_125755( -952.21400000, 453.59930000, 3.37230000, 0 );
        sub_125755( -1614.88000000, 692.08700000, 25.37530000, 0 );
        sub_125755( -1364.45300000, 529.74320000, 11.47960000, 0 );
        sub_125755( -1831.84000000, 353.82380000, 24.44420000, 0 );
        sub_125755( -1555.78000000, 244.76660000, 11.68150000, 0 );
        sub_125755( -1481.94000000, -52.40670000, 6.57460000, 0 );
        sub_125755( -1642.17700000, 411.90560000, 24.44660000, 0 );
        sub_125755( -1753.70000000, 133.09870000, 10.18720000, 0 );
        sub_125755( -2083.07000000, 44.87500000, 6.09800000, 0 );
        sub_125755( -1914.51000000, -459.40200000, 2.20900000, 0 );
        sub_125755( -1302.27000000, -293.68600000, 2.86500000, 0 );
        sub_125755( -2125.72000000, -334.55900000, 1.89970000, 0 );
        sub_125755( -1772.58700000, -493.29320000, 2.04540000, 0 );
        sub_125755( -1339.11000000, -460.88800000, 1.89670000, 0 );
        sub_125755( -1353.65000000, -652.83300000, 2.00130000, 0 );
        sub_125755( -1054.87000000, -220.68300000, 1.91890000, 0 );
        sub_125755( -1893.78400000, -689.18750000, 1.83760000, 0 );
        sub_125755( -1688.54000000, -284.52100000, 1.75160000, 0 );
        sub_125755( -1899.95500000, 186.60480000, 11.17900000, 0 );
        sub_125755( -1402.59400000, 318.49800000, 12.44940000, 0 );
        sub_125755( -1649.63000000, -109.38000000, 4.97830000, 0 );
        sub_125755( 64271, -119.28200000, 3.21980000, 0 );
        sub_125755( -950.78700000, 189.35060000, 3.38630000, 0 );
        sub_125755( -1103.30000000, 364.79940000, 3.93280000, 0 );
        sub_125755( -1260.66000000, 1262.14700000, 20.78200000, 0 );
        sub_125755( -1299.73000000, 1563.46800000, 24.92780000, 0 );
        sub_125755( -992.55200000, 1736.74700000, 19.51390000, 0 );
        sub_125755( -843.71400000, 1378.74200000, 22.17000000, 0 );
        sub_125755( -1469.02000000, 1166.59000000, 22.01500000, 0 );
        sub_125755( -865.23000000, 1632.13000000, 21.35100000, 0 );
        sub_125755( -1326.88000000, 1436.46600000, 19.48630000, 0 );
        sub_125755( -1727.85200000, 601.47620000, 26.72240000, 0 );
        sub_125755( -1539.30300000, 581.51720000, 22.71660000, 0 );
        sub_125755( -993.90200000, 878.20890000, 21.98560000, 0 );
        sub_125755( -987.99100000, 608.15440000, 3.07890000, 0 );
        sub_125755( -836.38240000, 1071.52500000, 12.89240000, 0 );
        sub_125755( -1107.43200000, 1081.79400000, 12.65270000, 0 );
        sub_125755( -1422.44200000, 883.12570000, 18.63140000, 0 );
        sub_125755( -1174.19000000, 825.98350000, 18.55790000, 0 );
        sub_125755( -1370.73000000, 765.73500000, 18.54570000, 0 );
        break;
        case 2:
        sub_125755( -10.97350000, -377.20400000, 11.08810000, 0 );
        sub_125755( -9.61210000, 1308.05700000, 19.36520000, 0 );
        sub_125755( -115.34640000, 1328.85600000, 19.42410000, 0 );
        sub_125755( 368.47270000, -506.45180000, 4.81800000, 0 );
        sub_125755( 59.36250000, 193.13060000, 13.75680000, 0 );
        sub_125755( -425.69900000, 1301.45000000, 16.42360000, 0 );
        sub_125755( -332.18480000, 1643.76200000, 19.32420000, 0 );
        sub_125755( -116.04090000, 472.16360000, 8.55910000, 0 );
        sub_125755( -182.25800000, -602.07800000, 4.62510000, 0 );
        sub_125755( -422.21900000, 975.72740000, 8.96360000, 0 );
        sub_125755( -169.52000000, 1619.20900000, 19.31360000, 0 );
        sub_125755( -337.38000000, 1431.45300000, 11.33620000, 0 );
        sub_125755( 38.98980000, 1476.07500000, 2.24340000, 0 );
        sub_125755( -583.78600000, 1318.30600000, 4.94080000, 0 );
        sub_125755( -522.12800000, 968.89150000, 7.55940000, 0 );
        sub_125755( -176.50500000, 1077.67300000, 5.62530000, 0 );
        sub_125755( -237.93970000, 795.71930000, 5.16030000, 0 );
        sub_125755( -291.31900000, 578.53360000, 13.81190000, 0 );
        sub_125755( -533.30600000, 720.84310000, 8.96150000, 0 );
        sub_125755( -3.24710000, 501.39350000, 14.76200000, 0 );
        sub_125755( 212.50730000, 485.59830000, 14.18730000, 0 );
        sub_125755( -461.07800000, 497.06880000, 8.85170000, 0 );
        sub_125755( 280.63320000, -16.08720000, 8.91760000, 0 );
        sub_125755( -220.32500000, 61.39090000, 13.73580000, 0 );
        sub_125755( 210.88160000, -409.88850000, 4.08210000, 0 );
        sub_125755( 336.21990000, -711.23500000, 3.69170000, 0 );
        sub_125755( 1.10720000, -659.54400000, 13.75730000, 0 );
        sub_125755( 33.32420000, -937.15120000, 3.73070000, 0 );
        sub_125755( -788.95600000, 65.67300000, 3.81230000, 0 );
        sub_125755( -172.94300000, 276.67700000, 13.81300000, 0 );
        sub_125755( -414.08900000, -12.61080000, 8.89340000, 0 );
        sub_125755( -120.07200000, 11.81670000, 13.78350000, 0 );
        sub_125755( -224.77030000, -776.26140000, 5.19630000, 0 );
        sub_125755( -15.78000000, -529.51000000, 13.75940000, 0 );
        sub_125755( 234.57330000, -817.85860000, 3.71030000, 0 );
        sub_125755( -403.72000000, -447.38000000, 3.90720000, 0 );
        sub_125755( 191.30000000, 1140.61000000, 12.25340000, 0 );
        sub_125755( -205.12000000, 655.88000000, 11.40410000, 0 );
        sub_125755( -70.67000000, 946.33000000, 13.71270000, 0 );
        sub_125755( 26.61870000, 850.50510000, 13.37200000, 0 );
        sub_125755( -503.30000000, 1438.90000000, 16.15650000, 0 );
        sub_125755( -159.18130000, 1749.72900000, 7.44090000, 0 );
        sub_125755( -542.30000000, 1655.60000000, 7.67680000, 0 );
        sub_125755( -22.57230000, 1484.23300000, 17.42510000, 0 );
        sub_125755( 77.60000000, 321.40000000, 13.75380000, 0 );
        sub_125755( -445.40000000, 277.50000000, 8.95640000, 0 );
        sub_125755( -566.39040000, 390.84450000, 5.66890000, 0 );
        sub_125755( 107.58140000, 511.61350000, 12.30150000, 0 );
        sub_125755( -279.59900000, 445.29140000, 13.80670000, 0 );
        sub_125755( -417.04700000, -192.86500000, 9.53930000, 0 );
        sub_125755( -62.12140000, -289.14320000, 13.67290000, 0 );
        sub_125755( 169.77020000, -210.08000000, 13.82100000, 0 );
        sub_125755( -139.74400000, 81.76500000, 13.76910000, 0 );
        break;
        case 3:
        sub_125755( 985.20790000, 1827.30400000, 19.11830000, 0 );
        sub_125755( 1376.28500000, 1702.27400000, 15.88180000, 0 );
        sub_125755( 431.74100000, 1837.92700000, 21.20530000, 0 );
        sub_125755( 473.20250000, 1738.35900000, 14.80350000, 0 );
        sub_125755( 575.78850000, 1394.91800000, 9.96000000, 0 );
        sub_125755( 735.74320000, 1739.91900000, 35.60130000, 0 );
        sub_125755( 760.78820000, 1551.94800000, 20.35010000, 0 );
        sub_125755( 855.19800000, 1676.97900000, 16.05410000, 0 );
        sub_125755( 1098.36200000, 1596.66300000, 15.71600000, 0 );
        sub_125755( 1121.77600000, 1941.30500000, 12.71010000, 0 );
        sub_125755( 1290.00000000, 1435.00000000, 15.77600000, 0 );
        sub_125755( 426.39460000, 1590.38900000, 15.41430000, 0 );
        sub_125755( 557.55070000, 1635.64200000, 28.19540000, 0 );
        sub_125755( 597.58230000, 1958.46700000, 24.62740000, 0 );
        sub_125755( 626.76930000, 1828.41200000, 32.17850000, 0 );
        sub_125755( 1211.36500000, 1783.27100000, 9.09560000, 0 );
        break;
        case 4:
        sub_125755( 849.04920000, 392.57780000, 5.25980000, 0 );
        sub_125755( 897.30000000, -134.00100000, 4.91160000, 0 );
        sub_125755( 1843.24500000, 478.55510000, 27.09130000, 0 );
        sub_125755( 1427.79200000, 750.85690000, 27.62330000, 0 );
        sub_125755( 1845.72700000, 691.03880000, 25.76730000, 0 );
        sub_125755( 2320.44800000, 639.43910000, 4.80790000, 0 );
        sub_125755( 1124.33600000, 638.38240000, 37.85270000, 0 );
        sub_125755( 1647.82000000, 413.06230000, 30.21460000, 0 );
        sub_125755( 2273.61400000, 300.40370000, 5.06670000, 0 );
        sub_125755( 1431.79400000, 120.04750000, 24.88300000, 0 );
        sub_125755( 1314.51800000, 378.05340000, 21.45560000, 0 );
        sub_125755( 2285.27900000, 82.34910000, 4.80670000, 0 );
        sub_125755( 822.00570000, 199.24160000, 5.03550000, 0 );
        sub_125755( 1114.99400000, 44.93610000, 33.00890000, 0 );
        sub_125755( 1350.45800000, -255.86600000, 22.22680000, 0 );
        sub_125755( 753.85080000, -126.41500000, 4.81920000, 0 );
        sub_125755( 1284.27200000, -530.17200000, 13.39630000, 0 );
        sub_125755( 897.30980000, -509.68100000, 13.97050000, 0 );
        sub_125755( 2007.46300000, 620.96670000, 17.05250000, 0 );
        sub_125755( 2816.66200000, 425.61220000, 4.66280000, 0 );
        sub_125755( 2423.13700000, 454.06130000, 5.08040000, 0 );
        sub_125755( 2558.74900000, 81.81350000, 2.25080000, 0 );
        sub_125755( 1178.18000000, 194.08300000, 31.44340000, 0 );
        sub_125755( 2164.44400000, 368.42870000, 5.22480000, 0 );
        sub_125755( 962.23500000, 7.45580000, 23.57960000, 0 );
        sub_125755( 1359.50400000, -766.54400000, 7.45460000, 0 );
        sub_125755( 1167.83600000, -206.77400000, 22.60170000, 0 );
        sub_125755( 953.22130000, -320.52070000, 18.35930000, 0 );
        sub_125755( 1292.54900000, 144.22570000, 30.95520000, 0 );
        sub_125755( 955.96320000, -698.10500000, 14.21530000, 0 );
        sub_125755( 1858.97600000, 155.32600000, 12.27220000, 0 );
        sub_125755( 1111.20400000, -445.82780000, 12.45870000, 0 );
        sub_125755( 862.01680000, 940.66060000, 5.55700000, 0 );
        sub_125755( 1224.95300000, 1020.87200000, 12.63250000, 0 );
        sub_125755( 1577.94500000, 917.15250000, 15.06920000, 0 );
        sub_125755( 1670.41200000, 587.83220000, 29.23680000, 0 );
        sub_125755( 971.84260000, 624.12060000, 25.02010000, 0 );
        sub_125755( 1428.84200000, 563.46970000, 28.29920000, 0 );
        sub_125755( 1805.79700000, 813.58000000, 15.60590000, 0 );
        sub_125755( 1155.96400000, 306.88730000, 28.83000000, 0 );
        sub_125755( 1232.60800000, 524.12710000, 29.82790000, 0 );
        sub_125755( 2164.51500000, 583.68770000, 7.91790000, 0 );
        sub_125755( 1938.77700000, 1013.43000000, 4.99250000, 0 );
        sub_125755( 2650.71700000, 436.45850000, 4.80730000, 0 );
        break;
        case 5:
        sub_125755( -1914.50800000, -459.40190000, 2.20900000, 0 );
        sub_125755( -1548.81300000, -379.02390000, 1.88280000, 0 );
        sub_125755( -1688.54300000, -284.52080000, 1.75160000, 0 );
        sub_125755( -1777.87900000, -488.62450000, 2.04560000, 0 );
        sub_125755( -1982.68200000, -669.87910000, -1.86090000, 0 );
        sub_125755( -1798.12800000, -265.92090000, 1.71460000, 0 );
        sub_125755( -1700.79700000, -646.17020000, 3.01050000, 0 );
        sub_125755( -1968.54500000, -157.59920000, 1.92120000, 0 );
        sub_125755( -1528.95300000, -203.94390000, 6.73590000, 0 );
        sub_125755( -2066.17100000, -491.69040000, 6.17790000, 0 );
        break;
        case 6:
        sub_125755( -1049.63700000, -408.73490000, 2.30340000, 0 );
        sub_125755( -1110.67500000, -376.49920000, 2.17920000, 0 );
        sub_125755( -1124.23100000, -493.61110000, 2.17880000, 0 );
        sub_125755( -1026.58300000, -337.07500000, 2.22100000, 0 );
        sub_125755( -988.55210000, -435.07680000, 2.18010000, 0 );
        break;
        case 7:
        sub_125755( -1097.62500000, 693.99500000, 7.50040000, 0 );
        sub_125755( -1193.08000000, 13.87000000, 3.14000000, 0 );
        sub_125755( -1261.21700000, 56.19870000, 1.26420000, 0 );
        sub_125755( -1094.18600000, 636.52230000, 7.50040000, 0 );
        sub_125755( -952.21400000, 453.59930000, 3.37230000, 0 );
        sub_125755( -1103.29800000, 364.79940000, 3.93280000, 0 );
        sub_125755( -1047.40800000, 496.42660000, 3.52310000, 0 );
        sub_125755( -915.68000000, 281.99980000, 3.37280000, 0 );
        sub_125755( -1139.59400000, 144.54840000, 3.23240000, 0 );
        sub_125755( -1237.53500000, 709.79410000, 15.03190000, 0 );
        break;
        case 8:
        sub_125755( -607.98380000, -784.81920000, 3.83910000, "GtaMloRoomstat" );
        sub_125755( -667.97770000, -861.82260000, 4.53750000, 0 );
        sub_125755( -530.56270000, -1068.54000000, 3.83770000, 0 );
        sub_125755( -551.27530000, -999.64890000, 4.50760000, 0 );
        sub_125755( -650.00980000, -927.17210000, 4.53750000, 0 );
        sub_125755( -571.05880000, -875.00630000, 4.53750000, 0 );
        break;
        case 9:
        sub_125755( 455.10250000, 289.51030000, 7.54850000, 0 );
        sub_125755( 497.60490000, 175.63860000, 7.60760000, 0 );
        sub_125755( 391.26350000, 159.72480000, 8.22000000, 0 );
        sub_125755( 458.29470000, 74.45450000, 7.75970000, 0 );
        sub_125755( 504.16430000, -38.34650000, 8.24790000, 0 );
        break;
        case 10:
        sub_125755( 630.54060000, 789.35520000, 1.75120000, 0 );
        sub_125755( 657.73490000, 627.96940000, 1.80270000, 0 );
        sub_125755( 589.79970000, 859.90220000, 1.72980000, 0 );
        sub_125755( 489.47380000, 775.80120000, 1.73470000, 0 );
        sub_125755( 463.83520000, 1001.07300000, 1.71820000, 0 );
        break;
        case 11:
        sub_125755( 2320.44800000, 639.43910000, 4.80790000, 0 );
        sub_125755( 2273.61400000, 300.40370000, 5.06670000, 0 );
        sub_125755( 2285.27900000, 82.34910000, 4.80670000, 0 );
        sub_125755( 2164.51500000, 583.68770000, 7.91790000, 0 );
        sub_125755( 2423.13700000, 454.06130000, 5.08040000, 0 );
        sub_125755( 2521.31400000, 282.07120000, 4.80810000, 0 );
        sub_125755( 2816.66200000, 425.61220000, 4.66280000, 0 );
        sub_125755( 2758.89000000, 243.54010000, 4.09000000, 0 );
        sub_125755( 2422.53800000, -55.49270000, 1.28210000, 0 );
        sub_125755( 2248.59500000, 365.22820000, 6.60060000, 0 );
        sub_125755( 2297.76700000, 479.05770000, 5.09200000, 0 );
        sub_125755( 2069.47800000, 876.38090000, 5.00420000, 0 );
        break;
        case 12: break;
    }
    return;
}

void sub_125755(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_130935(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_130935( 3 );
        sub_130935( 4 );
        sub_130935( 2 );
        sub_130935( 1 );
        sub_130935( 8 );
        sub_130935( 10 );
        sub_130935( 9 );
        break;
        case 1:
        sub_131120( -1718.95400000, 272.59700000, 21.06310000 );
        sub_131120( -1558.40700000, -347.78600000, 1.83750000 );
        sub_131120( -2032.20700000, -338.29010000, 3.40370000 );
        sub_131120( -1497.11800000, -277.73100000, 1.83720000 );
        sub_131120( -1890.49700000, -155.03050000, 1.62940000 );
        sub_131120( -968.86000000, 1895.05400000, 21.34030000 );
        sub_131120( -1426.40600000, 625.19100000, 18.56760000 );
        sub_131120( -1778.49400000, 575.95780000, 25.11940000 );
        sub_131120( -841.69900000, 1274.37700000, 19.07420000 );
        sub_131120( -1361.73600000, 1692.55300000, 26.82030000 );
        sub_131120( -1299.50400000, 944.35900000, 18.56750000 );
        sub_131120( -2048.42700000, 172.86300000, 11.03890000 );
        sub_131120( -906.84050000, 652.42870000, 3.07870000 );
        sub_131120( -1216.80800000, 520.21910000, 3.37300000 );
        sub_131120( -1137.69600000, 955.04820000, 18.54370000 );
        sub_131120( -1877.95700000, 39.63470000, 5.85340000 );
        sub_131120( -965.57110000, 1211.19600000, 23.50070000 );
        sub_131120( -1564.22100000, -657.89900000, 2.00330000 );
        sub_131120( -1279.09900000, 1141.62300000, 18.57790000 );
        sub_131120( -1145.68300000, 1414.96900000, 23.49580000 );
        sub_131120( -1314.08900000, 169.73720000, 4.48440000 );
        sub_131120( -2216.31900000, 17.23170000, 8.29650000 );
        sub_131120( -1428.38700000, 1536.52500000, 15.61980000 );
        sub_131120( -1145.53100000, -382.07540000, 2.00250000 );
        break;
        case 2:
        sub_131120( -29.20910000, -887.00800000, -0.45090000 );
        sub_131120( 75.40810000, 597.05240000, 13.71130000 );
        sub_131120( -669.07150000, 471.10110000, 4.08930000 );
        sub_131120( -333.98000000, 1.00280000, 13.75990000 );
        sub_131120( -107.44990000, 766.80530000, 14.34170000 );
        sub_131120( -695.45310000, 1080.60800000, 3.10370000 );
        sub_131120( -571.39000000, 1531.44100000, 9.00370000 );
        sub_131120( -786.58210000, 141.96640000, 4.02810000 );
        sub_131120( -577.03340000, -328.15240000, 5.25250000 );
        sub_131120( 195.12650000, -527.20640000, 8.06920000 );
        sub_131120( -17.15680000, 1637.60200000, 2.83590000 );
        sub_131120( 103.37410000, 985.66010000, 13.69870000 );
        sub_131120( -319.37050000, 322.75250000, 13.70020000 );
        sub_131120( -179.20000000, 1451.10000000, 17.44250000 );
        sub_131120( -201.20000000, 1195.80000000, 13.62270000 );
        sub_131120( 107.70000000, 1221.10000000, 14.64690000 );
        sub_131120( -97.06850000, -609.38450000, 13.75040000 );
        sub_131120( 101.10990000, 409.17060000, 13.68690000 );
        sub_131120( -278.16310000, -369.19700000, 7.67500000 );
        sub_131120( -305.64000000, 1040.30000000, 8.96630000 );
        sub_131120( -111.42050000, -200.32650000, 11.99290000 );
        sub_131120( 497.07030000, -504.54370000, 1.60350000 );
        sub_131120( 102.67930000, -607.23380000, 13.76920000 );
        sub_131120( 315.67560000, -324.14100000, 3.95050000 );
        sub_131120( -389.39000000, 837.89000000, 13.71340000 );
        sub_131120( -106.39930000, 203.62740000, 13.60360000 );
        sub_131120( -568.80000000, 607.20000000, 5.64580000 );
        sub_131120( -417.40330000, 1739.69600000, 8.25570000 );
        break;
        case 3:
        sub_131120( 796.30620000, 1334.91000000, 9.86140000 );
        sub_131120( 370.65720000, 1887.00100000, 16.77270000 );
        sub_131120( 697.33800000, 1680.40500000, 32.93620000 );
        sub_131120( 243.60000000, 1772.58000000, 2.80140000 );
        sub_131120( 312.37770000, 1470.59700000, 15.72370000 );
        sub_131120( 397.94990000, 2074.39100000, 5.69970000 );
        sub_131120( 927.07400000, 1487.15300000, 15.86160000 );
        sub_131120( 889.48640000, 1783.75300000, 16.08660000 );
        sub_131120( 1346.63400000, 1960.05400000, 3.98950000 );
        sub_131120( 1204.99800000, 1648.65000000, 15.65110000 );
        sub_131120( 810.81520000, 1924.86500000, 37.93350000 );
        sub_131120( 617.25540000, 1496.23200000, 14.61220000 );
        break;
        case 4:
        sub_131120( 1096.54700000, 434.62660000, 28.76790000 );
        sub_131120( 1345.71000000, -874.09570000, 7.33140000 );
        sub_131120( 1446.49700000, -280.27500000, 14.19040000 );
        sub_131120( 2232.70500000, 891.79740000, 4.52110000 );
        sub_131120( 863.99160000, 740.41190000, 6.89360000 );
        sub_131120( 960.07070000, -431.33360000, 14.74810000 );
        sub_131120( 1237.56000000, 374.40010000, 20.97390000 );
        sub_131120( 2072.80800000, 102.75570000, 11.02200000 );
        sub_131120( 1361.68500000, 1047.57500000, 2.85150000 );
        sub_131120( 1586.65500000, 769.30970000, 28.21990000 );
        sub_131120( 1947.36900000, 393.30340000, 17.58600000 );
        sub_131120( 1252.28100000, -44.77040000, 27.34600000 );
        sub_131120( 939.28130000, -944.10300000, 14.23400000 );
        sub_131120( 1985.70900000, 826.63180000, 8.39960000 );
        sub_131120( 1307.98300000, 688.87480000, 35.73690000 );
        sub_131120( 2259.19400000, 423.94070000, 4.90050000 );
        sub_131120( 1131.33700000, -656.75790000, 13.13440000 );
        sub_131120( 1238.09500000, -353.24500000, 20.54410000 );
        sub_131120( 1657.90500000, 230.22240000, 23.95760000 );
        sub_131120( 740.74340000, -346.01260000, 4.83660000 );
        sub_131120( 733.56430000, 39.98200000, 4.95960000 );
        sub_131120( 932.15970000, 331.24980000, 30.16300000 );
        sub_131120( 1120.70800000, 891.31850000, 30.66750000 );
        sub_131120( 2521.81800000, 283.11260000, 4.80830000 );
        sub_131120( 2248.01400000, -142.04390000, 3.50840000 );
        sub_131120( 2637.66500000, 661.69060000, 2.68950000 );
        break;
        case 5:
        sub_131120( -1523.98700000, -287.50570000, 1.83720000 );
        sub_131120( -2032.20700000, -338.29010000, 3.40370000 );
        sub_131120( -1872.50800000, -163.83990000, 1.62960000 );
        sub_131120( -1896.91900000, -685.48900000, 1.83760000 );
        sub_131120( -1564.22100000, -657.89900000, 2.00330000 );
        sub_131120( -2112.71200000, -345.95280000, 0.69400000 );
        sub_131120( -1919.93500000, -298.88310000, 1.62860000 );
        break;
        case 6:
        sub_131120( -1035.30200000, -442.65560000, 2.05650000 );
        sub_131120( -907.82110000, -397.02890000, 2.38210000 );
        sub_131120( -998.51530000, -371.81950000, 2.16980000 );
        sub_131120( -1137.87200000, -374.96680000, 2.19720000 );
        break;
        case 7:
        sub_131120( -1217.48000000, 520.46980000, 3.37300000 );
        sub_131120( -907.75400000, 653.17680000, 3.07870000 );
        sub_131120( -1242.38800000, 91.51820000, 1.95310000 );
        sub_131120( -987.99080000, 608.15440000, 3.07890000 );
        sub_131120( -1183.54400000, 638.71690000, 6.90310000 );
        sub_131120( -950.78660000, 189.35060000, 3.38630000 );
        sub_131120( -1006.53800000, 332.57090000, 3.50290000 );
        sub_131120( -1065.29000000, 37.07740000, 3.21560000 );
        break;
        case 8:
        sub_131120( -607.92130000, -700.26330000, 12.06720000 );
        sub_131120( -528.80470000, -856.73380000, 4.53700000 );
        sub_131120( -645.03030000, -662.14430000, 3.83730000 );
        sub_131120( -412.70370000, -953.45100000, 2.61640000 );
        break;
        case 9:
        sub_131120( 484.24000000, -72.80000000, 8.25100000 );
        sub_131120( 412.61980000, 360.87370000, 7.61400000 );
        sub_131120( 373.74930000, 282.45030000, 4.82410000 );
        sub_131120( 407.44830000, -14.76920000, 7.84100000 );
        sub_131120( 560.50710000, 306.40010000, 7.93160000 );
        sub_131120( 487.24870000, 260.93470000, 7.69720000 );
        break;
        case 10:
        sub_131120( 490.00890000, 861.95290000, 0.19100000 );
        sub_131120( 500.19900000, 1045.00200000, 1.71450000 );
        sub_131120( 608.98120000, 725.17330000, 1.78680000 );
        sub_131120( 678.13100000, 872.69980000, 1.97390000 );
        sub_131120( 669.12870000, 983.03940000, 1.71650000 );
        sub_131120( 555.09680000, 646.18850000, 2.55930000 );
        sub_131120( 624.75300000, 1077.76800000, 1.79640000 );
        sub_131120( 397.25320000, 1082.47400000, 1.71530000 );
        break;
        case 11:
        sub_131120( 2072.80800000, 102.75570000, 11.02200000 );
        sub_131120( 2232.70500000, 891.79740000, 4.52110000 );
        sub_131120( 2247.87500000, -142.09800000, 3.50940000 );
        sub_131120( 2259.19400000, 423.94070000, 4.90050000 );
        sub_131120( 2142.46100000, 185.46280000, 4.81090000 );
        sub_131120( 2152.84400000, 341.89890000, 3.75030000 );
        sub_131120( 2558.74900000, 81.81350000, 2.25080000 );
        sub_131120( 2640.09500000, 663.64870000, 2.44290000 );
        sub_131120( 2619.64200000, 417.33540000, 4.93810000 );
        sub_131120( 2520.63000000, 612.33400000, 5.52400000 );
        sub_131120( 2422.20300000, 339.38180000, 5.08030000 );
        sub_131120( 2335.49600000, 499.03240000, 5.07800000 );
        break;
        case 12: break;
    }
    return;
}

void sub_131120(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    CREATE_PICKUP( -1758615024, 23, uParam0, uParam1, uParam2, ref uVar5, 0 );
    return;
}

void sub_134123()
{
    unknown uVar2;

    uVar2 = GET_FIRST_BLIP_INFO_ID( 75 );
    while (DOES_BLIP_EXIST( uVar2 ))
    {
        REMOVE_BLIP( uVar2 );
        uVar2 = GET_NEXT_BLIP_INFO_ID( 75 );
    }
    return;
}

void sub_134204(unknown uParam0)
{
    unknown uVar3;

    switch (uParam0)
    {
        case 0:
        sub_134204( 1 );
        sub_134204( 2 );
        sub_134204( 4 );
        break;
        case 1:
        ADD_BLIP_FOR_COORD( -1147.96900000, 1176.36600000, 15.83930000, ref uVar3 );
        SET_BLIP_AS_SHORT_RANGE( uVar3, 1 );
        CHANGE_BLIP_SPRITE( uVar3, 75 );
        CHANGE_BLIP_SCALE( uVar3, 0.75000000 );
        CHANGE_BLIP_PRIORITY( uVar3, 0 );
        uVar3 = nil;
        ADD_BLIP_FOR_COORD( -1300.05800000, 274.11460000, 9.79920000, ref uVar3 );
        SET_BLIP_AS_SHORT_RANGE( uVar3, 1 );
        CHANGE_BLIP_SPRITE( uVar3, 75 );
        CHANGE_BLIP_SCALE( uVar3, 0.75000000 );
        CHANGE_BLIP_PRIORITY( uVar3, 0 );
        return;
        case 2:
        ADD_BLIP_FOR_COORD( -307.26430000, 1549.11400000, 19.26490000, ref uVar3 );
        SET_BLIP_AS_SHORT_RANGE( uVar3, 1 );
        CHANGE_BLIP_SPRITE( uVar3, 75 );
        CHANGE_BLIP_SCALE( uVar3, 0.75000000 );
        CHANGE_BLIP_PRIORITY( uVar3, 0 );
        uVar3 = nil;
        ADD_BLIP_FOR_COORD( -507.40950000, 375.76670000, 5.66290000, ref uVar3 );
        SET_BLIP_AS_SHORT_RANGE( uVar3, 1 );
        CHANGE_BLIP_SPRITE( uVar3, 75 );
        CHANGE_BLIP_SCALE( uVar3, 0.75000000 );
        CHANGE_BLIP_PRIORITY( uVar3, 0 );
        return;
        case 4:
        ADD_BLIP_FOR_COORD( 1058.17900000, -287.15700000, 20.33040000, ref uVar3 );
        SET_BLIP_AS_SHORT_RANGE( uVar3, 1 );
        CHANGE_BLIP_SPRITE( uVar3, 75 );
        CHANGE_BLIP_SCALE( uVar3, 0.75000000 );
        CHANGE_BLIP_PRIORITY( uVar3, 0 );
        return;
    }
    return;
}

void sub_134739(unknown uParam0, unknown uParam1)
{
    SET_BIT( ref l_U1426[uParam1], 0 );
    SET_BITS_IN_RANGE( ref l_U1426[uParam1], 1, 31, uParam0 );
    return;
}

void sub_135027()
{
    CLEAR_SCRIPT_ARRAY_FROM_SCRATCHPAD( 2 );
    SAVE_SCRIPT_ARRAY_IN_SCRATCHPAD( ref l_U1426, 61, 2, 2 );
    return;
}

void sub_135123(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (IS_CHAR_IN_ANY_CAR( uParam0 ))
    {
        WARP_CHAR_FROM_CAR_TO_COORD( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8 );
    }
    SET_CHAR_COORDINATES( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8 );
    return;
}
