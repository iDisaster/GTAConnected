void main()
{
    int iVar2;
    int I;
    int J;
    unknown uVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown[16] uVar14;

    l_U0 = -1;
    l_U3 = 225;
    l_U565 = 0.00000000;
    l_U889 = -1;
    l_U1160 = -1;
    l_U1184 = 16;
    l_U1185 = 10000;
    l_U1186 = 255;
    l_U1187 = 1;
    l_U1209 = 0;
    l_U1210 = 0;
    l_U1211 = 0;
    l_U1212 = 1;
    l_U1213 = 0;
    l_U1214 = 0;
    l_U1215 = 0;
    l_U1216 = 0;
    l_U1217 = 0;
    l_U1218 = 0;
    l_U1219 = 0;
    l_U1220 = 0;
    l_U1221 = 0;
    l_U1222 = -1;
    l_U1223 = -1;
    l_U1224 = 18;
    l_U1231 = 0.15800000;
    l_U1232 = -0.02400000;
    l_U1233 = 0.01000000;
    l_U1234 = 0.12600000;
    l_U1248 = -1;
    l_U1275 = 120.00000000;
    l_U1362 = 0;
    l_U1364 = 0;
    l_U1368 = -1;
    l_U1370 = 0;
    l_U1575 = 0;
    l_U1576 = 0;
    l_U1582 = {1313.00000000, 70.00000000, 42.00000000};
    l_U1585 = {882.00000000, -29.00000000, 29.00000000};
    l_U1588 = {865.70000000, -517.80000000, 16.50000000};
    l_U1591 = {-28.00000000, -463.00000000, 16.00000000};
    l_U1594 = {-1247.00000000, 1540.00000000, 26.00000000};
    l_U1597 = {-160.00000000, 591.00000000, 119.00000000};
    l_U1600 = {79, 64857, 15};
    l_U1603 = {561.97610000, 1391.62600000, 30.85500000};
    l_U1606 = {943.00000000, -493.00000000, 16.00000000};
    l_U1609 = {1367, 192, 28};
    l_U1612 = {-97.00000000, 878.00000000, 15.00000000};
    l_U1615 = {-962.00000000, 893.00000000, 14.00000000};
    l_U1618 = {597.00000000, 1400.00000000, 12.00000000};
    l_U1621 = {-126.00000000, 1500.00000000, 23.00000000};
    l_U1624 = {1283, 400, 23};
    l_U1627 = {-1141.60400000, -374.96160000, 4.08170000};
    l_U1659 = 0;
    l_U1660 = 999999.90000000;
    l_U1661 = 0.00000000;
    l_U1662 = 0.26000000;
    l_U1663 = 0.65000000;
    l_U1665 = 5000.00000000;
    l_U1666 = 5000.00000000;
    l_U1668 = 0.00000000;
    l_U1670 = 0;
    l_U1681 = "amb@smoking_spliff";
    l_U1682 = "create_spliff";
    l_U1683 = "partial_smoke";
    l_U1684 = "partial_smoke_car";
    l_U1685 = {0.13700000, 0.03100000, 0.03500000};
    l_U1688 = {2.21400000, -0.12100000, 0.00000000};
    l_U1691 = {0.00000000, 0.00000000, 0.13600000};
    l_U1694 = {0.00000000, 0.00000000, 0.00000000};
    l_U1697 = {-0.48300000, -0.28500000, 0.62000000};
    l_U1700 = {-0.48300000, -1.30000000, 0.62000000};
    l_U1703 = {0.00000000, 0.00000000, 90.00000000};
    l_U1706 = {0.00000000, -0.28500000, 0.50000000};
    l_U1709 = {0.00000000, 0.00000000, 0.00000000};
    l_U1715 = {0.00000000, 0.00000000, 0.00000000};
    l_U1833 = {1.00000000, 1.00000000, 1.00000000};
    l_U1836 = {0.00000000, 1.00000000, 0.00000000};
    l_U1839 = {0.00000000, -1.00000000, 0.00000000};
    l_U1852 = 0;
    l_U1853 = 0;
    l_U1864 = 100.00000000;
    l_U1865 = 10.50000000;
    l_U1866 = 0.50000000;
    l_U1867 = 2.85000000;
    l_U2329 = 1;
    l_U3613 = 0;
    l_U3621 = 0;
    SET_MISSION_FLAG( 1 );
    REGISTER_HOST_BROADCAST_VARIABLES( ref l_U1933, 218, -1 );
    REGISTER_CLIENT_BROADCAST_VARIABLES( ref l_U3400, 193, -1 );
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        while (true)
        {
            WAIT( 0 );
        }
    }
    SET_MAX_WANTED_LEVEL( 0 );
    SET_CREATE_RANDOM_COPS( 0 );
    ALLOW_EMERGENCY_SERVICES( 0 );
    l_U2284[0] = -2088164056;
    l_U2284[1] = 1543404628;
    l_U2284[2] = -2088164056;
    l_U2284[3] = 1543404628;
    l_U2289[0] = 869501081;
    l_U2289[1] = 869501081;
    l_U2289[2] = 869501081;
    l_U2289[3] = 869501081;
    sub_1333( "PLAYER", 1, 13, -1 );
    sub_1333( "KILLS", 2, 11, 3 );
    sub_1333( "DEATHS", 2, 6, 4 );
    sub_1333( "TEAM_KILLS", 2, 29, 6 );
    sub_1333( "BASES", 2, 30, 7 );
    sub_1333( "SCORE", 6, 16, 20 );
    sub_1550( 0, 1, "_AUTOAIM", 2, 0 );
    sub_1550( 1, 9, "FRIENDLY_FIRE", 2, 0 );
    sub_1550( 2, 8, "TB_LOCATION", 5, 0 );
    sub_1550( 3, 1, "TB_DURATION", 8, 0 );
    sub_1550( 4, 12, "TEAM", 2, 0 );
    sub_1550( 5, 1, "CS_WEAPONS", 12, 0 );
    sub_1550( 6, 1, "TRAFFIC", 4, 0 );
    sub_1550( 7, 1, "PEDESTRIANS", 4, 0 );
    sub_1550( 8, 1, "BLIPS_OPTION", 6, 0 );
    if (N_604003528())
    {
        sub_1550( 9, 6, "NAME_OPT", 2, 0 );
    }
    else
    {
        sub_1550( 9, 6, "NAME_OPT_PS3", 2, 0 );
    }
    sub_1550( 10, 6, "RETICULE_OPT", 2, 0 );
    sub_1550( 11, 1, "VOICE_OPT", 4, 0 );
    sub_1550( 12, 1, "SPAWN_TIME", 7, 0 );
    sub_1550( 13, 1, "TIME_OF_DAY", 5, 0 );
    sub_1550( 14, 1, "WEATHER", 6, 0 );
    sub_1550( 15, 16, "DESCRIPTION", 2, 0 );
    sub_1550( 16, 15, "RADIO_OPT", 19, 0 );
    if (NOT NETWORK_IS_TVT())
    {
        sub_1550( 17, 17, "KICK_PLAYER", 16, GET_PLAYER_ID() );
    }
    sub_2068( 1, -1, 0, -1 );
    l_U3400[GET_PLAYER_ID()]._fU4 = 1;
    sub_2137( 1 );
    l_U3400[GET_PLAYER_ID()]._fU16 = -1;
    l_U3400[GET_PLAYER_ID()]._fU8 = 0;
    sub_2205();
    if (sub_2238())
    {
        l_U1933._fU756[0] = sub_2295( 419, NETWORK_GET_GAME_MODE() );
        l_U1933._fU756[1] = sub_2295( 422, NETWORK_GET_GAME_MODE() );
        l_U1933._fU756[2] = sub_2436( 33, 0 );
        l_U1933._fU756[3] = sub_2436( 34, 0 );
        l_U1933._fU756[8] = sub_2436( 43, 0 );
        l_U1933._fU756[5] = sub_2436( 35, 0 );
        l_U1933._fU756[6] = sub_2436( 1, 1 );
        l_U1933._fU756[7] = sub_2436( 2, 1 );
        l_U1933._fU756[9] = sub_2436( 3, 1 );
        l_U1933._fU756[10] = sub_2436( 4, 1 );
        l_U1933._fU756[11] = sub_2436( 6, 3 );
        l_U1933._fU756[12] = sub_2436( 8, 1 );
        l_U1933._fU756[13] = sub_2436( 9, 0 );
        l_U1933._fU756[14] = sub_2436( 10, 0 );
        l_U1933._fU756[15] = sub_2436( 11, 0 );
        sub_2744();
    }
    sub_2769();
    REGISTER_SCRIPT_WITH_AUDIO( 1 );
    l_U3400[GET_PLAYER_ID()]._fU44 = -1;
    array(ref uVar14, 16);
    if (IS_KEYBOARD_KEY_PRESSED( 36 ))
    {
        l_U1933._fU668 = l_U2331 - 1;
    }
    sub_2866( -1 );
    LOAD_ALL_PATH_NODES( 1 );
    SET_GLOBAL_INSTANCE_PRIORITY( 1 );
    sub_3079();
    while (true)
    {
        WAIT( 0 );
        sub_3535( 1 );
        if (NOT IS_NETWORK_GAME_RUNNING())
        {
            if (NOT LOCAL_PLAYER_IS_READY_TO_START_PLAYING())
            {
                TERMINATE_THIS_SCRIPT();
            }
        }
        if (LOCAL_PLAYER_IS_READY_TO_START_PLAYING())
        {
            LAUNCH_LOCAL_PLAYER_IN_NETWORK_GAME();
        }
        if (IS_NETWORK_GAME_RUNNING())
        {
            GET_NETWORK_TIMER( ref l_U2331 );
        }
        if (N_604003528())
        {
            if (l_U1933._fU756[3] < 3)
            {
                sub_3682( l_U1933._fU668, 0, 0 );
            }
            else
            {
                sub_3682( sub_5563(), 1, l_U1933._fU384[GET_PLAYER_TEAM( sub_5012() )] );
            }
        }
        sub_5703();
        sub_7970();
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
        {
            l_U1933._fU0 = 4;
        }
        if (l_U3621)
        {
            if (IS_THIS_MACHINE_THE_SERVER())
            {
                if (NOT IS_OBJECT_REASSIGNMENT_IN_PROGRESS())
                {
                    if (NOT l_U3622)
                    {
                        if (NETWORK_IS_SESSION_STARTED())
                        {
                            NETWORK_END_SESSION();
                        }
                        l_U3622 = 1;
                    }
                    else if (NOT NETWORK_IS_OPERATION_PENDING())
                    {
                        UNPAUSE_GAME();
                        if (NOT IS_SCREEN_FADED_OUT())
                        {
                            sub_25496( 0 );
                        }
                        sub_25569( 12 );
                    }
                }
            }
        }
        if ((IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() )) || ((LOCAL_PLAYER_IS_READY_TO_START_PLAYING()) AND (NOT l_U3621)))
        {
            sub_25698( l_U1933._fU532[GET_PLAYER_ID()] );
            if ((GET_PLAYER_TEAM( sub_5012() )) > -1)
            {
                SET_MULTIPLAYER_HUD_CASH( l_U1933._fU384[GET_PLAYER_TEAM( sub_5012() )] );
            }
            else
            {
                SET_MULTIPLAYER_HUD_CASH( -1 );
            }
            for ( I = 0; I <= 15; I++ )
            {
                if (l_U3400[I]._fU28)
                {
                    sub_25866( I, 1 );
                }
                else
                {
                    sub_25866( I, 0 );
                }
            }
            switch (l_U3400[GET_PLAYER_ID()]._fU12)
            {
                case 0:
                sub_26005();
                sub_2137( 1 );
                l_U3400[GET_PLAYER_ID()]._fU16 = -1;
                l_U3400[GET_PLAYER_ID()]._fU12 = 1;
                l_U3400[GET_PLAYER_ID()]._fU28 = 0;
                sub_25866( GET_PLAYER_ID(), 0 );
                l_U3400[GET_PLAYER_ID()]._fU32 = 1;
                l_U3620 = 0;
                l_U3612 = 0;
                break;
                case 1:
                if (l_U1933._fU0 == 3)
                {
                    for ( I = 0; I <= 4; I++ )
                    {
                        l_U3595[I] = -1;
                    }
                    sub_65462();
                    sub_26005();
                    sub_65535();
                    l_U3400[GET_PLAYER_ID()]._fU12 = 2;
                    l_U3616 = 0;
                    REMOVE_ALL_PICKUPS_OF_TYPE( 23 );
                }
                else
                {
                    ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
                    l_U3400[GET_PLAYER_ID()]._fU20 = 0;
                    l_U3616 = 1;
                    if (IS_CHAR_DEAD( sub_5337() ))
                    {
                        REQUEST_COLLISION_AT_POSN( -393.19590000, 754.99050000, 56.55940000 );
                        RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), -393.19590000, 754.99050000, 56.55940000, 0.00000000 );
                    }
                    sub_99084( 1 );
                    sub_26005();
                    sub_101265( l_U1933._fU756[8], l_U1933._fU756[0] == 1, 0, 0 );
                    if (NOT l_U3623)
                    {
                        sub_101293();
                        l_U3623 = 1;
                    }
                }
                break;
                case 2:
                sub_65535();
                l_U3623 = 0;
                DISPLAY_HUD( 1 );
                DISPLAY_RADAR( 1 );
                sub_101676( ref l_U3400[GET_PLAYER_ID()]._fU0 );
                sub_47829( GET_PLAYER_ID(), 1 );
                if ((GET_PLAYER_TEAM( sub_5012() )) == 0)
                {
                    if (((sub_101844( ref l_U2289 )) AND (sub_47726( 467469635 ))) AND (sub_47726( -196312163 )))
                    {
                        DISPLAY_HUD( 1 );
                        DISPLAY_RADAR( 1 );
                        CHANGE_PLAYER_MODEL( sub_5012(), sub_102000() );
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 16, ref uVar5 );
                        REQUEST_COLLISION_AT_POSN( l_U2343[l_U1933._fU860]._fU0[uVar5]._fU0, l_U2343[l_U1933._fU860]._fU0[uVar5]._fU4, l_U2343[l_U1933._fU860]._fU0[uVar5]._fU8 );
                        RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), l_U2343[l_U1933._fU860]._fU0[uVar5]._fU0, l_U2343[l_U1933._fU860]._fU0[uVar5]._fU4, l_U2343[l_U1933._fU860]._fU0[uVar5]._fU8, 0.00000000 );
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( sub_5337() );
                        SET_VOICE_ID_FROM_HEAD_COMPONENT( sub_5337(), 0, 1 );
                        l_U3400[GET_PLAYER_ID()]._fU12 = 4;
                        l_U3400[GET_PLAYER_ID()]._fU20 = 1;
                        sub_102325( l_U2343[l_U1933._fU860]._fU0[uVar5], 0 );
                        SET_PLAYER_KEEPS_WEAPONS_WHEN_RESPAWNED( sub_5012() );
                        sub_47829( GET_PLAYER_ID(), 1 );
                        sub_102514( ref l_U2289 );
                        l_U3617 = 0;
                        SET_CHAR_RELATIONSHIP_GROUP( sub_5337(), 47 );
                        switch (l_U1933._fU756[2])
                        {
                            case 1:
                            sub_102673( 1, l_U1933._fU756[5], 150, 3 );
                            break;
                            case 2:
                            sub_102673( 2, l_U1933._fU756[5], 150, 3 );
                            break;
                            case 3:
                            sub_102673( 3, l_U1933._fU756[5], 150, 3 );
                            break;
                            case 4:
                            sub_102673( 4, l_U1933._fU756[5], 150, 3 );
                            break;
                        }
                    }
                }
                else if (((sub_101844( ref l_U2284 )) AND (sub_47726( 467469635 ))) AND (sub_47726( -196312163 )))
                {
                    SET_PLAYER_KEEPS_WEAPONS_WHEN_RESPAWNED( sub_5012() );
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 16, ref uVar5 );
                    REQUEST_COLLISION_AT_POSN( l_U2343[l_U1933._fU864]._fU0[uVar5]._fU0, l_U2343[l_U1933._fU864]._fU0[uVar5]._fU4, l_U2343[l_U1933._fU864]._fU0[uVar5]._fU8 );
                    RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), l_U2343[l_U1933._fU864]._fU0[uVar5]._fU0, l_U2343[l_U1933._fU864]._fU0[uVar5]._fU4, l_U2343[l_U1933._fU864]._fU0[uVar5]._fU8, 0.00000000 );
                    CHANGE_PLAYER_MODEL( sub_5012(), sub_144792() );
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( sub_5337() );
                    SET_VOICE_ID_FROM_HEAD_COMPONENT( sub_5337(), 0, 1 );
                    sub_47829( GET_PLAYER_ID(), 1 );
                    SET_CHAR_RELATIONSHIP_GROUP( sub_5337(), 48 );
                    sub_102325( l_U2343[l_U1933._fU864]._fU0[uVar5], 0 );
                    l_U3400[GET_PLAYER_ID()]._fU12 = 4;
                    l_U3400[GET_PLAYER_ID()]._fU20 = 1;
                    l_U3617 = 0;
                    switch (l_U1933._fU756[2])
                    {
                        case 1:
                        sub_102673( 1, l_U1933._fU756[5], 150, 3 );
                        break;
                        case 2:
                        sub_102673( 2, l_U1933._fU756[5], 150, 3 );
                        break;
                        case 3:
                        sub_102673( 3, l_U1933._fU756[5], 150, 3 );
                        break;
                        case 4:
                        sub_102673( 4, l_U1933._fU756[5], 150, 3 );
                        break;
                    }
                    sub_102514( ref l_U2284 );
                }
                SET_ANIM_GROUP_FOR_CHAR( sub_5337(), "move_player" );
                sub_65462();
                sub_26005();
                if (l_U1933._fU756[0] == 1)
                {
                    DISABLE_PLAYER_LOCKON( sub_5012(), 0 );
                }
                else
                {
                    DISABLE_PLAYER_LOCKON( sub_5012(), 1 );
                }
                sub_145226( ref l_U1933._fU756 );
                SET_MONEY_CARRIED_BY_ALL_NEW_PEDS( 0 );
                break;
                case 4:
                sub_65462();
                sub_26005();
                if (sub_146104())
                {
                    l_U3618 = 0;
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    sub_146220( l_U1933._fU756[7], 1065353216 );
                    sub_146489( l_U1933._fU756[6], 1065353216 );
                    sub_146743( l_U1933._fU756[11] );
                    NETWORK_SET_HEALTH_RETICULE_OPTION( l_U1933._fU756[10] == 1 );
                    if (l_U1933._fU756[1] == 0)
                    {
                        NETWORK_SET_FRIENDLY_FIRE_OPTION( 0 );
                    }
                    else if (l_U1933._fU756[1] == 1)
                    {
                        NETWORK_SET_FRIENDLY_FIRE_OPTION( 1 );
                    }
                    REMOVE_ALL_CHAR_WEAPONS( sub_5337() );
                    GIVE_DELAYED_WEAPON_TO_CHAR( sub_5337(), 3, 1, 0 );
                    GIVE_DELAYED_WEAPON_TO_CHAR( sub_5337(), sub_105710( l_U1933._fU756[5], ref uVar9 ), uVar9, 1 );
                    DISPLAY_PLAYER_NAMES( l_U1933._fU756[9] == 1 );
                    SET_PLAYERS_DROP_MONEY_IN_NETWORK_GAME( 1 );
                    if (IS_SCREEN_FADED_OUT())
                    {
                        DO_SCREEN_FADE_IN( 500 );
                    }
                    l_U3619 = 0;
                    SET_ALL_CAR_GENERATORS_BACK_TO_ACTIVE();
                    if (NOT (IS_PLAYER_CONTROL_ON( sub_5012() )))
                    {
                        SET_PLAYER_CONTROL_FOR_NETWORK( sub_5012(), 1, 1 );
                    }
                    sub_145226( ref l_U1933._fU756 );
                    l_U3400[GET_PLAYER_ID()]._fU36 = 0;
                    sub_2769();
                    l_U3400[GET_PLAYER_ID()]._fU44 = -1;
                    l_U3400[GET_PLAYER_ID()]._fU40 = 0;
                    l_U3400[GET_PLAYER_ID()]._fU12 = 5;
                    sub_147247( l_U1933._fU756[2], 33 );
                    sub_147247( l_U1933._fU756[3], 34 );
                    sub_147247( l_U1933._fU756[8], 43 );
                    sub_147247( l_U1933._fU756[5], 35 );
                    sub_147247( l_U1933._fU756[6], 1 );
                    sub_147247( l_U1933._fU756[7], 2 );
                    sub_147247( l_U1933._fU756[9], 3 );
                    sub_147247( l_U1933._fU756[10], 4 );
                    sub_147247( l_U1933._fU756[11], 6 );
                    sub_147247( l_U1933._fU756[12], 8 );
                    sub_147247( l_U1933._fU756[13], 9 );
                    sub_147247( l_U1933._fU756[14], 10 );
                    sub_147247( l_U1933._fU756[15], 11 );
                    sub_147521();
                }
                break;
                case 5:
                sub_99084( 0 );
                sub_147573();
                sub_149054();
                sub_149846( ref l_U2267, l_U1933._fU756[8], 0, -1 );
                sub_152935();
                if (IS_KEYBOARD_KEY_JUST_PRESSED( 37 ))
                {
                    TASK_DIE( sub_5337() );
                }
                if (IS_KEYBOARD_KEY_JUST_PRESSED( 17 ))
                {
                    REMOVE_ALL_CHAR_WEAPONS( sub_8050( GET_PLAYER_ID() ) );
                    SET_CHAR_HEALTH( sub_8050( GET_PLAYER_ID() ), 0 );
                }
                if (l_U1933._fU756[3] < 3)
                {
                    sub_156180( l_U1933._fU668, 0 );
                }
                sub_156860( 16, ref l_U3400[0]._fU0, ref l_U3400[1]._fU0, ref l_U3400[2]._fU0, ref l_U3400[3]._fU0, ref l_U3400[4]._fU0, ref l_U3400[5]._fU0, ref l_U3400[6]._fU0, ref l_U3400[7]._fU0, ref l_U3400[8]._fU0, ref l_U3400[9]._fU0, ref l_U3400[10]._fU0, ref l_U3400[11]._fU0, ref l_U3400[12]._fU0, ref l_U3400[13]._fU0, ref l_U3400[14]._fU0, ref l_U3400[15]._fU0 );
                sub_158711();
                sub_159161();
                for ( J = 0; J <= 6; J++ )
                {
                    if (NOT l_U1933._fU4[J]._fU28)
                    {
                        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_3D( sub_5337(), l_U1933._fU4[J]._fU0._fU0, l_U1933._fU4[J]._fU0._fU4, l_U1933._fU4[J]._fU0._fU8, 2.25000000, 2.25000000, 7.50000000, 0 ))
                            {
                                if (sub_22353( J, GET_PLAYER_ID() ))
                                {
                                    if (l_U1933._fU4[J]._fU12 != (GET_PLAYER_TEAM( sub_5012() )))
                                    {
                                        PRINT_NOW( "TMBASE_ENN", 7500, 1 );
                                    }
                                }
                            }
                        }
                    }
                }
                if (NOT sub_160137())
                {
                    if (l_U3617)
                    {
                        CLEAR_THIS_PRINT( "TMBASE_ENN" );
                        l_U3617 = 0;
                    }
                }
                sub_160321();
                if (sub_160457())
                {
                    if (sub_24530())
                    {
                        sub_160732( ref l_U1933._fU532, ref l_U1933._fU384, 3, l_U1933._fU668, 0 );
                    }
                    else
                    {
                        sub_160732( ref l_U1933._fU532, ref l_U1933._fU384, 3, sub_5563(), 1 );
                    }
                }
                else if (l_U1933._fU756[8] == 3)
                {
                    sub_160791( ref l_U1933._fU384 );
                }
                if ((sub_168072( GET_PLAYER_TEAM( sub_8097( GET_PLAYER_ID() ) ) )) >= l_U2329)
                {
                    l_U2329 = sub_168072( GET_PLAYER_TEAM( sub_8097( GET_PLAYER_ID() ) ) );
                    for ( I = 0; I <= 6; I++ )
                    {
                        if (l_U1933._fU4[I]._fU32 > -1)
                        {
                            if (l_U3595[I] != l_U1933._fU4[I]._fU32)
                            {
                                ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                                sub_149909( l_U1933._fU4[I]._fU32, -1, "GAIN_BASE" );
                                l_U3595[I] = l_U1933._fU4[I]._fU32;
                            }
                        }
                    }
                }
                else if ((sub_168072( GET_PLAYER_TEAM( sub_8097( GET_PLAYER_ID() ) ) )) < l_U2329)
                {
                    l_U2329 = sub_168072( GET_PLAYER_TEAM( sub_8097( GET_PLAYER_ID() ) ) );
                    sub_168415( GET_PLAYER_TEAM( sub_5012() ), -1, "LOSE_BASE" );
                }
                for ( I = 0; I <= 15; I++ )
                {
                    if (l_U2312[I] != l_U1933._fU316[I])
                    {
                        l_U2312[I] = l_U1933._fU316[I];
                        sub_149909( I, -1, "GAIN_BASE" );
                    }
                }
                for ( I = 0; I <= 1; I++ )
                {
                    if (l_U2295[I] != l_U1933._fU384[I])
                    {
                        if ((GET_PLAYER_TEAM( sub_5012() )) == I)
                        {
                            sub_168816( l_U1933._fU384[I] - l_U2295[I] );
                        }
                        l_U2295[I] = l_U1933._fU384[I];
                    }
                }
                for ( I = 0; I <= 6; I++ )
                {
                    for ( J = 0; J <= 15; J++ )
                    {
                        if (IS_NETWORK_PLAYER_ACTIVE( J ))
                        {
                            if (l_U1933._fU4[I]._fU12 != (GET_PLAYER_TEAM( sub_8097( J ) )))
                            {
                                if (LOCATE_CHAR_ON_FOOT_3D( sub_8050( J ), l_U1933._fU4[I]._fU0._fU0, l_U1933._fU4[I]._fU0._fU4, l_U1933._fU4[I]._fU0._fU8, 2.25000000, 2.25000000, 7.50000000, 0 ))
                                {
                                    if (l_U3603[I] != l_U1933._fU4[I]._fU36)
                                    {
                                        if (l_U1933._fU4[I]._fU16)
                                        {
                                            if (l_U1933._fU4[I]._fU36 != -1)
                                            {
                                                if (l_U1933._fU4[I]._fU36 == J)
                                                {
                                                    ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                                                    sub_149909( l_U1933._fU4[I]._fU36, -1, "TAKE_BASE" );
                                                    l_U3603[I] = l_U1933._fU4[I]._fU36;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((l_U3603[I] > -1) AND (NOT l_U1933._fU4[I]._fU16))
                        {
                            l_U3603[I] = -1;
                        }
                    }
                }
                for ( I = 0; I <= 6; I++ )
                {
                    if (l_U1933._fU4[I]._fU36 != -1)
                    {
                        sub_169689( I, l_U1933._fU4[I]._fU36 );
                    }
                    else
                    {
                        sub_170204( I );
                    }
                }
                for ( I = 0; I <= 6; I++ )
                {
                    if (l_U1933._fU4[I]._fU12 != (GET_PLAYER_TEAM( sub_5012() )))
                    {
                        if (NOT l_U1933._fU4[I]._fU28)
                        {
                            switch (l_U1933._fU4[I]._fU12)
                            {
                                case 0:
                                GET_TEAM_RGB_COLOUR( 0, ref iVar6, ref iVar7, ref iVar8 );
                                if (NOT l_U1933._fU4[I]._fU16)
                                {
                                    DRAW_CHECKPOINT( l_U1933._fU4[I]._fU0, 3.50000000, iVar6, iVar7, iVar8 );
                                }
                                else
                                {
                                    DRAW_CHECKPOINT_WITH_ALPHA( l_U1933._fU4[I]._fU0, 3.50000000, iVar6, iVar7, iVar8, 50 );
                                }
                                break;
                                case 1:
                                GET_TEAM_RGB_COLOUR( 1, ref iVar6, ref iVar7, ref iVar8 );
                                if (NOT l_U1933._fU4[I]._fU16)
                                {
                                    DRAW_CHECKPOINT( l_U1933._fU4[I]._fU0, 3.50000000, iVar6, iVar7, iVar8 );
                                }
                                else
                                {
                                    DRAW_CHECKPOINT_WITH_ALPHA( l_U1933._fU4[I]._fU0, 3.50000000, iVar6, iVar7, iVar8, 50 );
                                }
                                break;
                                case 2:
                                iVar6 = 254;
                                iVar7 = 242;
                                iVar8 = 0;
                                if (NOT l_U1933._fU4[I]._fU16)
                                {
                                    DRAW_CHECKPOINT( l_U1933._fU4[I]._fU0, 3.50000000, iVar6, iVar7, iVar8 );
                                }
                                else
                                {
                                    DRAW_CHECKPOINT_WITH_ALPHA( l_U1933._fU4[I]._fU0, 3.50000000, iVar6, iVar7, iVar8, 50 );
                                }
                                break;
                            }
                        }
                    }
                }
                if (((HOW_LONG_HAS_NETWORK_PLAYER_BEEN_DEAD_FOR( GET_PLAYER_ID() )) > 50) AND ((HOW_LONG_HAS_NETWORK_PLAYER_BEEN_DEAD_FOR( GET_PLAYER_ID() )) < 150))
                {
                    iVar2 = sub_170959( GET_PLAYER_ID() );
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 16, ref uVar5 );
                }
                else if ((HOW_LONG_HAS_NETWORK_PLAYER_BEEN_DEAD_FOR( GET_PLAYER_ID() )) > (sub_171250( l_U1933._fU756[12] )))
                {
                    l_U3400[GET_PLAYER_ID()]._fU12 = 6;
                    if (IS_SCREEN_FADED_IN())
                    {
                        DO_SCREEN_FADE_OUT( 100 );
                    }
                }
                if ((l_U1933._fU0 == 4) AND (l_U1933._fU672))
                {
                    sub_171446();
                }
                break;
                case 6:
                if ((l_U1933._fU0 == 4) AND (l_U1933._fU672))
                {
                    if (NOT (IS_CHAR_DEAD( sub_5337() )))
                    {
                        sub_171446();
                    }
                }
                if (IS_SCREEN_FADED_OUT())
                {
                    if (iVar2 == -1)
                    {
                        if (sub_173010( ref l_U3400[GET_PLAYER_ID()]._fU4, l_U1933._fU684[GET_PLAYER_ID()], ref uVar10, ref uVar13 ))
                        {
                            sub_47829( GET_PLAYER_ID(), 0 );
                            SET_CHAR_VISIBLE( sub_5337(), 0 );
                            REQUEST_COLLISION_AT_POSN( uVar10._fU0, uVar10._fU4, uVar10._fU8 );
                            RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), uVar10, 355.40340000 );
                            REMOVE_ALL_CHAR_WEAPONS( sub_5337() );
                            GIVE_DELAYED_WEAPON_TO_CHAR( sub_5337(), sub_105710( l_U1933._fU756[5], ref uVar9 ), uVar9, 1 );
                            GIVE_DELAYED_WEAPON_TO_CHAR( sub_5337(), 3, 1, 0 );
                            if (l_U1933._fU0 != 4)
                            {
                                sub_102325( uVar10, 1 );
                                SET_CHAR_VISIBLE( sub_5337(), 1 );
                                l_U3400[GET_PLAYER_ID()]._fU12 = 5;
                            }
                            sub_47829( GET_PLAYER_ID(), 1 );
                            DO_SCREEN_FADE_IN( 500 );
                        }
                    }
                    else
                    {
                        sub_47829( GET_PLAYER_ID(), 0 );
                        SET_CHAR_VISIBLE( sub_5337(), 0 );
                        REQUEST_COLLISION_AT_POSN( l_U2343[iVar2]._fU0[uVar5]._fU0, l_U2343[iVar2]._fU0[uVar5]._fU4, l_U2343[iVar2]._fU0[uVar5]._fU8 );
                        RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), l_U2343[iVar2]._fU0[uVar5], 355.40340000 );
                        REMOVE_ALL_CHAR_WEAPONS( sub_5337() );
                        GIVE_DELAYED_WEAPON_TO_CHAR( sub_5337(), sub_105710( l_U1933._fU756[5], ref uVar9 ), uVar9, 1 );
                        GIVE_DELAYED_WEAPON_TO_CHAR( sub_5337(), 3, 1, 0 );
                        if (l_U1933._fU0 != 4)
                        {
                            sub_102325( l_U2343[iVar2]._fU0[uVar5], 1 );
                            l_U3400[GET_PLAYER_ID()]._fU12 = 5;
                        }
                        sub_47829( GET_PLAYER_ID(), 1 );
                        SET_CHAR_VISIBLE( sub_5337(), 1 );
                        DO_SCREEN_FADE_IN( 500 );
                    }
                }
                break;
                case 7:
                SWITCH_OFF_WAYPOINT();
                CLEAR_BRIEF();
                SET_TEXT_DRAW_BEFORE_FADE( 0 );
                sub_173661();
                sub_173724( 0 );
                if (sub_187886( 2147483647, 1 ))
                {
                    l_U3400[GET_PLAYER_ID()]._fU40 = 1;
                }
                if (sub_190795())
                {
                    l_U3400[GET_PLAYER_ID()]._fU12 = 8;
                    DEACTIVATE_FRONTEND();
                }
                break;
                case 8:
                if (NOT l_U3619)
                {
                    if (((NETWORK_IS_TVT()) AND (sub_26564())) || (NETWORK_IS_RENDEZVOUS()))
                    {
                        sub_173724( 0 );
                        SET_WIDESCREEN_FORMAT( 2 );
                        sub_29606( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                        sub_35829( "RETURN_PARTY", sub_48401( 23 ), sub_48434( 23 ), sub_48401( 24 ), sub_48434( 24 ), 255, 255, 255, 255, 2 );
                        if (NETWORK_IS_RENDEZVOUS_HOST())
                        {
                            sub_191053();
                        }
                    }
                    else if (sub_173724( 1 ))
                    {
                        l_U3400[GET_PLAYER_ID()]._fU36 = 1;
                        sub_2137( 1 );
                        l_U3400[GET_PLAYER_ID()]._fU16 = -1;
                        for ( I = 0; I <= 15; I++ )
                        {
                            if (DOES_BLIP_EXIST( l_U2267[I] ))
                            {
                                REMOVE_BLIP( l_U2267[I] );
                            }
                        }
                        l_U3619 = 1;
                    }
                }
                else
                {
                    sub_26005();
                    BEGIN_CAM_COMMANDS( ref l_U2257 );
                    if (IS_CAM_ACTIVE( l_U2258 ))
                    {
                        SET_CAM_PROPAGATE( l_U2258, 0 );
                        SET_CAM_ACTIVE( l_U2258, 0 );
                        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                        DESTROY_ALL_CAMS();
                    }
                    END_CAM_COMMANDS( ref l_U2257 );
                    for ( I = 0; I <= 6; I++ )
                    {
                        CLEAR_AREA_OF_CARS( l_U1933._fU4[I]._fU0._fU0, l_U1933._fU4[I]._fU0._fU4, l_U1933._fU4[I]._fU0._fU8, 120.00000000 );
                    }
                    DISPLAY_HUD( 1 );
                    DISPLAY_RADAR( 1 );
                    SET_WIDESCREEN_BORDERS( 0 );
                    REMOVE_ALL_CHAR_WEAPONS( sub_5337() );
                    sub_191461();
                    l_U3400[GET_PLAYER_ID()]._fU12 = 0;
                }
                break;
            }
        }
    }
    return;
}

void sub_1333(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int I;

    for ( I = 0; I < 7; I++ )
    {
        if (l_U566[I]._fU16 == 0)
        {
            StrCopy( ref l_U566[I]._fU0, uParam0, 16 );
            l_U566[I]._fU16 = uParam1;
            l_U566[I]._fU20 = uParam2;
            l_U566[I]._fU92 = uParam3;
            return;
        }
    }
    return;
}

void sub_1550(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref l_U991[uParam0]._fU0, uParam2, 16 );
    l_U991[uParam0]._fU16 = uParam1;
    l_U991[uParam0]._fU24 = uParam3;
    l_U991[uParam0]._fU20 = uParam4;
    l_U991[uParam0]._fU28 = uParam4;
    return;
}

void sub_2068(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U1197 = uParam0;
    l_U1199 = uParam1;
    l_U1196 = uParam2;
    l_U1198 = uParam3;
    l_U1200 = 1;
    return;
}

void sub_2137(unknown uParam0)
{
    g_U18._fU668 = -1;
    g_U18._fU672 = uParam0;
    return;
}

void sub_2205()
{
    RESTORE_SCRIPT_ARRAY_FROM_SCRATCHPAD( ref l_U1872, 61, 2, 2 );
    return;
}

int sub_2238()
{
    if (IS_THIS_MACHINE_THE_SERVER())
    {
        SET_THIS_MACHINE_RUNNING_SERVER_SCRIPT( 1 );
        return 1;
    }
    return 0;
}

void sub_2295(unknown uParam0, unknown uParam1)
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

void sub_2436(unknown uParam0, unknown Result)
{
    if (IS_BIT_SET( l_U1872[uParam0], 0 ))
    {
        return GET_BITS_IN_RANGE( l_U1872[uParam0], 1, 31 );
    }
    return Result;
}

void sub_2744()
{
    SET_THIS_MACHINE_RUNNING_SERVER_SCRIPT( 0 );
    return;
}

void sub_2769()
{
    g_U18._fU660 = -1;
    g_U18._fU664 = 1;
    return;
}

void sub_2866(unknown uParam0)
{
    switch (uParam0)
    {
        case -1:
        SET_TIME_OF_DAY( sub_2934( 0, 24 ), 0 );
        break;
        case 0:
        SET_TIME_OF_DAY( sub_2934( 0, 24 ), 0 );
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

void sub_2934(unknown uParam0, unknown Result)
{
    GENERATE_RANDOM_INT_IN_RANGE( uParam0, Result, ref Result );
    return Result;
}

void sub_3079()
{
    CREATE_OBJECT_NO_OFFSET( 1845915705, -281.06440000, -283.70000000, 15.87640000, ref l_U1577, 0 );
    SET_OBJECT_HEADING( l_U1577, 90.00000000 );
    FREEZE_OBJECT_POSITION( l_U1577, 1 );
    CREATE_OBJECT_NO_OFFSET( -631715616, -281.06440000, -280.70640000, 15.87640000, ref l_U1578, 0 );
    SET_OBJECT_HEADING( l_U1578, 90.00000000 );
    FREEZE_OBJECT_POSITION( l_U1578, 1 );
    CREATE_OBJECT_NO_OFFSET( 639246688, 864.32000000, -121.64500000, 7.40000000, ref l_U1579, 0 );
    SET_OBJECT_HEADING( l_U1579, 90.00000000 );
    SET_OBJECT_DYNAMIC( l_U1579, 0 );
    FREEZE_OBJECT_POSITION( l_U1579, 1 );
    CREATE_OBJECT_NO_OFFSET( 1312423945, -123.72640000, 772.02260000, 35.05130000, ref l_U1580, 0 );
    SET_OBJECT_COORDINATES( l_U1580, -123.72640000, 772.02260000, 35.05130000 );
    SET_OBJECT_HEADING( l_U1580, 0.00000000 );
    SET_OBJECT_DYNAMIC( l_U1580, 0 );
    FREEZE_OBJECT_POSITION( l_U1580, 1 );
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "coop_swatasslt" )) == 0)
    {
        CREATE_OBJECT_NO_OFFSET( 223915744, 2394.49600000, 175.89900000, 5.85800000, ref l_U1581, 0 );
        SET_OBJECT_ROTATION( l_U1581, 0.00000000, 235.00000000, 240.37500000 );
        SET_OBJECT_DYNAMIC( l_U1581, 0 );
        FREEZE_OBJECT_POSITION( l_U1581, 1 );
    }
    return;
}

void sub_3535(unknown uParam0)
{
    l_U1207 = uParam0;
    l_U1206 = 1;
    return;
}

void sub_3682(int iParam0, boolean bParam1, unknown uParam2)
{
    int iVar5;
    unknown uVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    uVar11 = sub_3691();
    if (IS_NETWORK_GAME_RUNNING())
    {
        GET_NETWORK_TIMER( ref iVar5 );
        if (NETWORK_IS_SESSION_STARTED())
        {
            if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
            {
                if (l_U1371)
                {
                    l_U1371 = 0;
                }
                switch (uVar11)
                {
                    case 1:
                    if (NOT sub_3956())
                    {
                        if (iParam0 != l_U1368)
                        {
                            sub_4025( iParam0 );
                            iParam0 = l_U1368;
                        }
                    }
                    else if (NOT l_U1370)
                    {
                        l_U1369 = iVar5 + 25000;
                        l_U1370 = 1;
                        sub_4025( iParam0 );
                    }
                    else if (l_U1369 < iVar5)
                    {
                        l_U1370 = 0;
                    };;;
                    break;
                    case 2:
                    if (NOT l_U1370)
                    {
                        l_U1369 = iVar5 + 45000;
                        l_U1370 = 1;
                        iVar7 = iParam0 - iVar5;
                        iVar7 = iVar7 / 60000;
                        if (NOT bParam1)
                        {
                            sub_4046();
                            SET_RICH_PRESENCE_TEMPLATEMP3( iVar7 + 1, sub_3700() );
                        }
                        else if (NOT sub_4932())
                        {
                            sub_4046();
                            SET_RICH_PRESENCE_TEMPLATEMP6( sub_5003(), iParam0, sub_3700() );
                        }
                        else
                        {
                            sub_4046();
                            SET_RICH_PRESENCE_TEMPLATEMP6( uParam2, iParam0, sub_3700() );
                        }
                    }
                    else if (l_U1369 < iVar5)
                    {
                        l_U1370 = 0;
                    }
                    break;
                    case 3:
                    if (l_U1368 != sub_4641())
                    {
                        sub_4046();
                        SET_RICH_PRESENCE_TEMPLATEMP5( 3, sub_4641(), sub_3700() );
                        l_U1368 = sub_4641();
                    }
                    break;
                    case 0:
                    if (NOT l_U1370)
                    {
                        l_U1369 = iVar5 + 45000;
                        l_U1370 = 1;
                        sub_4046();
                        SET_RICH_PRESENCE_TEMPLATEMP2( sub_3700() );
                    }
                    else if (l_U1369 < iVar5)
                    {
                        l_U1370 = 0;
                    }
                    break;
                }
            }
        }
        else if (NOT l_U1371)
        {
            if (NOT NETWORK_IS_SESSION_STARTED())
            {
                if (sub_3700() == 16)
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
                    {
                        GET_CHAR_COORDINATES( sub_5337(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                        if ((GET_MAP_AREA_FROM_COORDS( uVar8 )) != 5)
                        {
                            if (NOT l_U1370)
                            {
                                l_U1369 = iVar5 + 45000;
                                l_U1370 = 1;
                                sub_4046();
                                SET_RICH_PRESENCE_TEMPLATEMP2( sub_3700() );
                            }
                            else if (l_U1369 < iVar5)
                            {
                                l_U1370 = 0;
                            }
                        }
                    }
                }
                else if (sub_3700() == 8)
                {
                    SET_RICH_PRESENCE_TEMPLATEPARTY();
                    l_U1371 = 1;
                }
                else
                {
                    sub_4046();
                    SET_RICH_PRESENCE_TEMPLATELOBBY( sub_3700() );
                    l_U1370 = 0;
                    l_U1371 = 1;
                }
            }
        }
    }
    return;
}

int sub_3691()
{
    switch (sub_3700())
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

void sub_3700()
{
    if (l_U0 == -1)
    {
        l_U0 = NETWORK_GET_GAME_MODE();
    }
    return l_U0;
}

int sub_3956()
{
    int iVar2;

    iVar2 = sub_3700();
    if (((iVar2 == 7) || (iVar2 == 8)) || (iVar2 == 6))
    {
        return 1;
    }
    return 0;
}

void sub_4025(int iParam0)
{
    if (l_U1372 == 0)
    {
        sub_4046();
        SET_RICH_PRESENCE_TEMPLATEMP1( 1, sub_4071( GET_PLAYER_ID() ), sub_4641(), sub_3700() );
        l_U1372 = 1;
    }
    else if ((iParam0 > 0) AND (iParam0 < 60))
    {
        sub_4046();
        SET_RICH_PRESENCE_TEMPLATEMP4( iParam0, sub_3700() );
        l_U1372 = 0;
    }
    return;
}

void sub_4046()
{
    return;
}

void sub_4071(unknown uParam0)
{
    if (l_U864)
    {
        return l_U735[uParam0]._fU16;
    }
    return sub_4106( uParam0 );
}

int sub_4106(int iParam0)
{
    int I;
    int iVar4;
    int Result;

    if (sub_4117( iParam0 ))
    {
        for ( I = 0; I < 16; I++ )
        {
            iVar4 = l_U566[0]._fU24[I];
            if ((IS_NETWORK_PLAYER_ACTIVE( iVar4 )) AND (NOT l_U952[iVar4]))
            {
                Result++;
                if (l_U566[sub_4262()]._fU24[iVar4] == l_U566[sub_4262()]._fU24[iParam0])
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
            iVar4 = l_U566[0]._fU24[I];
            if ((IS_NETWORK_PLAYER_ACTIVE( iVar4 )) AND (NOT l_U952[iVar4]))
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

int sub_4117(int iParam0)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (I != iParam0)
        {
            if ((sub_4150( I )) AND (NOT (sub_4202( I ))))
            {
                if (l_U566[sub_4262()]._fU24[I] == l_U566[sub_4262()]._fU24[iParam0])
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_4150(unknown uParam0)
{
    if (l_U864)
    {
        return l_U735[uParam0]._fU4;
    }
    return IS_NETWORK_PLAYER_ACTIVE( uParam0 );
}

void sub_4202(unknown uParam0)
{
    if (l_U864)
    {
        return l_U735[uParam0]._fU8;
    }
    return l_U952[uParam0];
}

int sub_4262()
{
    int Result;

    for ( Result = 0; Result < 7; Result++ )
    {
        if (((l_U566[Result]._fU16 == 7) || (l_U566[Result]._fU16 == 6)) || (l_U566[Result]._fU16 == 3))
        {
            return Result;
        }
    }
    return 1;
}

void sub_4641()
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

int sub_4932()
{
    int iVar2;

    iVar2 = NETWORK_GET_GAME_MODE();
    if (((((iVar2 == 10) || (iVar2 == 12)) || (iVar2 == 1)) || (iVar2 == 3)) || (iVar2 == 4))
    {
        return 1;
    }
    return 0;
}

void sub_5003()
{
    unknown Result;

    if (IS_PLAYER_PLAYING( sub_5012() ))
    {
        STORE_SCORE( sub_5012(), ref Result );
    }
    return Result;
}

void sub_5012()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_5337()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_5563()
{
    switch (l_U1933._fU756[3])
    {
        case 3: return 1000;
        case 4: return 2000;
        case 5: return 3000;
        case 6: return 4000;
        case 7: return 5000;
    }
    return 100000;
}

void sub_5703()
{
    GET_NETWORK_TIMER( ref l_U1652 );
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        sub_5742();
        l_U1649 = 1;
    }
    return;
}

void sub_5742()
{
    if (l_U1630[17])
    {
        if ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -1580.10000000, 1.25000000, 8.10000000, 4.50000000, -1413798865 )) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 63965, 27.00000000, 10.00000000, 4.50000000, -1413798865 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1413798865, -1580.10000000, 1.25000000, 8.10000000, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1413798865, 63965, 27.00000000, 10.00000000, 1, 0.00000000 );
            l_U1630[17] = 1;
        }
    }
    if (NOT l_U1630[0])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1582._fU0, l_U1582._fU4, l_U1582._fU8, 1.50000000, 807349477 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U1582, 1, 0.00000000 );
            l_U1630[0] = 1;
        }
    }
    if (NOT l_U1630[1])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1585._fU0, l_U1585._fU4, l_U1585._fU8, 1.50000000, 419786306 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 419786306, l_U1585, 1, 0.00000000 );
            l_U1630[1] = 1;
        }
    }
    if (l_U1630[2])
    {
        if ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1588._fU0, l_U1588._fU4, l_U1588._fU8, 1.50000000, -1452339441 )) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 850.80000000, -517.80000000, 16.50000000, 1.50000000, 257820338 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, l_U1588, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 257820338, 850.80000000, -517.80000000, 16.50000000, 1, 0.00000000 );
            l_U1630[2] = 1;
        }
    }
    if (NOT l_U1630[2])
    {
        if ((((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1591._fU0, l_U1591._fU4, l_U1591._fU8, 1.50000000, -431164822 )) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -28.00000000, -466.00000000, 16.00000000, 1.50000000, 866127123 ))) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -28.00000000, -467.00000000, 16.00000000, 1.50000000, -431164822 ))) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -28.00000000, -470.00000000, 16.00000000, 1.50000000, 866127123 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -431164822, l_U1591, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 866127123, -28.00000000, -466.00000000, 16.00000000, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -431164822, -28.00000000, -467.00000000, 16.00000000, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 866127123, -28.00000000, -470.00000000, 16.00000000, 1, 0.00000000 );
            l_U1630[2] = 1;
        }
    }
    if (NOT l_U1630[4])
    {
        if ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1594._fU0, l_U1594._fU4, l_U1594._fU8, 1.50000000, -1452339441 )) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -1246.00000000, 1560.00000000, 26.00000000, 1.50000000, -1452339441 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, l_U1594, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, -1246.00000000, 1560.00000000, 26.00000000, 1, 0.00000000 );
            l_U1630[4] = 1;
        }
    }
    if (NOT l_U1630[5])
    {
        if ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1597._fU0, l_U1597._fU4, l_U1597._fU8, 1.50000000, -223135715 )) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -160.00000000, 593.00000000, 119.00000000, 1.50000000, -223135715 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -223135715, l_U1597, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -223135715, -160.00000000, 593.00000000, 119.00000000, 1, 0.00000000 );
            l_U1630[5] = 1;
        }
    }
    if (NOT l_U1630[5])
    {
        if ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1600._fU0, l_U1600._fU4, l_U1600._fU8, 1.50000000, -134192122 )) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 76, 64857, 15, 1.50000000, -602166187 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -134192122, l_U1600, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -602166187, 76, 64857, 15, 1, 0.00000000 );
            l_U1630[5] = 1;
        }
    }
    if (NOT l_U1630[7])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1603._fU0, l_U1603._fU4, l_U1603._fU8, 1.50000000, 804737190 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 804737190, l_U1603, 1, 0.00000000 );
            l_U1630[7] = 1;
        }
    }
    if (NOT l_U1630[8])
    {
        if ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1606._fU0, l_U1606._fU4, l_U1606._fU8, 1.50000000, 387699963 )) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 928, 65047, 16, 1.50000000, 387699963 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 387699963, l_U1606, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 387699963, 928, 65047, 16, 1, 0.00000000 );
            l_U1630[8] = 1;
        }
    }
    if (NOT l_U1630[9])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1609._fU0, l_U1609._fU4, l_U1609._fU8, 1.50000000, 807349477 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U1609, 1, 0.00000000 );
            l_U1630[9] = 1;
        }
    }
    if (NOT l_U1630[10])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 65439, 878, 15, 1.50000000, 419786306 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 419786306, 65439, 878, 15, 1, 0.00000000 );
            l_U1630[10] = 1;
        }
    }
    if (NOT l_U1630[11])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 64574, 893, 14, 1.50000000, 419786306 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 419786306, 64574, 893, 14, 0, 0.00000000 );
            l_U1630[11] = 1;
        }
    }
    if (NOT l_U1630[12])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 597, 1400, 12, 1.50000000, 261592072 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 261592072, 597, 1400, 12, 1, 0.00000000 );
            l_U1630[12] = 1;
        }
    }
    if (NOT l_U1630[13])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1621._fU0, l_U1621._fU4, l_U1621._fU8, 1.50000000, 1033979537 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1033979537, l_U1621, 1, 0.00000000 );
            l_U1630[13] = 1;
        }
    }
    if (NOT l_U1630[14])
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_5337(), l_U1624._fU0, l_U1624._fU4, l_U1624._fU8, 30.00000000, 30.00000000, 12.50000000, 0 ))
        {
            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1624._fU0, l_U1624._fU4, l_U1624._fU8, 4.50000000, 1135556036 ))
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1135556036, l_U1624, 1, 0.00000000 );
                l_U1630[14] = 1;
            }
        }
    }
    if (NOT l_U1630[15])
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_5337(), 1286.00000000, 400.00000000, 23.00000000, 30.00000000, 30.00000000, 12.50000000, 0 ))
        {
            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 1286, 400, 23, 4.50000000, -842872319 ))
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -842872319, 1286, 400, 23, 1, 0.00000000 );
                l_U1630[15] = 1;
            }
        }
    }
    return;
}

void sub_7970()
{
    if (IS_THIS_MACHINE_THE_SERVER())
    {
        SET_THIS_MACHINE_RUNNING_SERVER_SCRIPT( 1 );
        sub_7999();
        sub_8972();
        sub_11882();
        SET_THIS_MACHINE_RUNNING_SERVER_SCRIPT( 0 );
    }
    return;
}

void sub_7999()
{
    int I;
    int iVar3;

    for ( I = 0; I <= 15; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1933._fU0 == 3)
            {
                iVar3 = GET_CHAR_MONEY( sub_8050( I ) );
                if ((GET_PLAYER_TEAM( sub_8097( I ) )) > -1)
                {
                    l_U1933._fU384[GET_PLAYER_TEAM( sub_8097( I ) )] += iVar3;
                }
                SET_CHAR_MONEY( sub_8050( I ), 0 );
            }
            else if (l_U1933._fU0 == 2)
            {
                SET_CHAR_MONEY( sub_8050( I ), 0 );
            }
            if (NETWORK_PLAYER_HAS_DIED_RECENTLY( I ))
            {
                l_U1933._fU396[I]++;
                if ((FIND_NETWORK_KILLER_OF_PLAYER( I )) != I)
                {
                    if ((GET_PLAYER_TEAM( sub_8097( I ) )) == (GET_PLAYER_TEAM( sub_8097( FIND_NETWORK_KILLER_OF_PLAYER( I ) ) )))
                    {
                        l_U1933._fU464[FIND_NETWORK_KILLER_OF_PLAYER( I )]++;
                    }
                    else
                    {
                        l_U1933._fU600[FIND_NETWORK_KILLER_OF_PLAYER( I )]++;
                    }
                }
                else if ((FIND_NETWORK_KILLER_OF_PLAYER( I )) == I)
                {
                    ;
                }
            }
        }
        else if (PLAYER_WANTS_TO_JOIN_NETWORK_GAME( I ))
        {
            PRINTSTRING( "Player:" );
            PRINTINT( I );
            PRINTSTRING( " is joining Turf Wars" );
            PRINTNL();
            iVar3 = sub_8534( 2 );
            l_U1933._fU464[I] = 0;
            l_U1933._fU396[I] = 0;
            l_U1933._fU532[I] = 0;
            l_U1933._fU316[I] = 0;
            if (iVar3 == 0)
            {
                TELL_NET_PLAYER_TO_START_PLAYING( I, 0 );
            }
            else
            {
                TELL_NET_PLAYER_TO_START_PLAYING( I, 1 );
            }
        }
    }
    return;
}

void sub_8050(unknown uParam0)
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( uParam0 ), ref Result );
    return Result;
}

void sub_8097(unknown uParam0)
{
    return CONVERT_INT_TO_PLAYERINDEX( uParam0 );
}

int sub_8534(int iParam0)
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
            return sub_2934( 0, iParam0 );
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
            return sub_2934( 0, iParam0 );
        }
        else
        {
            iVar6 = sub_2934( 0, iVar5 );
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

void sub_8972()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U3400[I]._fU4;
    }
    sub_9052( ref uVar3, ref l_U1933._fU684, 140.00000000, ref l_U1933._fU676, 1120403456 );
    return;
}

void sub_9052(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
                if (l_U1321)
                {
                    sub_9251( uParam1, sub_9168( sub_8050( I ) ), uParam2, uParam4, uParam3, I );
                }
                else if (l_U1325)
                {
                    sub_9251( uParam1, l_U1326, uParam2, uParam4, uParam3, I );
                }
                else if (l_U1324)
                {
                    sub_9251( uParam1, sub_11438( -1, 1 ), uParam2, uParam4, uParam3, I );
                }
                else
                {
                    sub_9251( uParam1, sub_11438( GET_PLAYER_TEAM( sub_8097( I ) ), 1 ), uParam2, uParam4, uParam3, I );
                };;;
            }
        }
    }
    return;
}

void sub_9168(unknown uParam0)
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

int sub_9251(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
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
            if (sub_9304( (uParam6^)[I] ))
            {
                ADD_SPAWN_BLOCKING_AREA( sub_9828( (uParam6^)[I] ), uParam5 );
            }
        }
        while (iVar12 < 127)
        {
            if (NOT l_U1321)
            {
                sub_10023( ref uParam1, uParam4 + l_U1330 );
            }
            bVar13 = false;
            if (l_U1323)
            {
                if (GET_RANDOM_CAR_NODE( uParam1, uParam4 + l_U1330, 2, 1, 1, ref uVar14, ref uVar11 ))
                {
                    bVar13 = true;
                }
            }
            else if (l_U1322)
            {
                if (sub_10946())
                {
                    if (GET_SORTED_NETWORK_RESTART_NODE_USING_GROUP_LIST( uParam1, uParam4 + l_U1330, ref uVar14, ref uVar11, uParam7, 2, uParam5 ))
                    {
                        bVar13 = true;
                    }
                }
                else if (GET_SORTED_NETWORK_RESTART_NODE_USING_GROUP_LIST( uParam1, uParam4 + l_U1330, ref uVar14, ref uVar11, uParam7, 7, uParam5 ))
                {
                    bVar13 = true;
                }
            }
            else if (sub_10946())
            {
                if (GET_SORTED_NETWORK_RESTART_NODE( uParam1, uParam4 + l_U1330, ref uVar14, ref uVar11, uParam7, 0, uParam5 ))
                {
                    bVar13 = true;
                }
            }
            else if (sub_3700() == 7)
            {
                if (GET_SORTED_NETWORK_RESTART_NODE( uParam1, uParam4 + l_U1330, ref uVar14, ref uVar11, uParam7, 9, uParam5 ))
                {
                    bVar13 = true;
                }
            }
            else if (sub_3700() == 16)
            {
                if (GET_SORTED_NETWORK_RESTART_NODE( uParam1, uParam4 + l_U1330, ref uVar14, ref uVar11, uParam7, 21, uParam5 ))
                {
                    bVar13 = true;
                }
            }
            else if (GET_SORTED_NETWORK_RESTART_NODE( uParam1, uParam4 + l_U1330, ref uVar14, ref uVar11, uParam7, 7, uParam5 ))
            {
                bVar13 = true;
            };;;;;;
            if (bVar13)
            {
                (uParam0^)[uParam7] = uVar11;
                l_U1330 = 0.00000000;
                REGISTER_PLAYER_RESPAWN_COORDS( uParam7, uVar14 );
                return 1;
            }
            else
            {
                l_U1330 += 30.00000000;
                return 0;
            }
        }
        l_U1330 += 10.00000000;
    }
    return 0;
}

int sub_9304(unknown uParam0)
{
    int iVar3;

    if (DOES_PED_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        if (IS_CHAR_DEAD( sub_9329( uParam0 ) ))
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
        if (IS_VEH_DRIVEABLE( sub_9404( uParam0 ) ))
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
        if (IS_OBJECT_IN_WATER( sub_9479( uParam0 ) ))
        {
            return 0;
        }
        else
        {
            iVar3 = sub_9565( sub_9536( sub_9479( uParam0 ) ) );
            if (((iVar3 == 0) || (((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( sub_9479( uParam0 ), 1 )) < 0.30000000) AND (iVar3 < 500))) || (((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( sub_9479( uParam0 ), 0 )) < 0.30000000) AND (iVar3 < 500)))
            {
                return 0;
            }
            else if (IS_OBJECT_ATTACHED( sub_9479( uParam0 ) ))
            {
                if (DOES_VEHICLE_EXIST( GET_CAR_OBJECT_IS_ATTACHED_TO( sub_9479( uParam0 ) ) ))
                {
                    if (IS_VEH_DRIVEABLE( GET_CAR_OBJECT_IS_ATTACHED_TO( sub_9479( uParam0 ) ) ))
                    {
                        return 1;
                    }
                    else if (IS_CAR_IN_WATER( GET_CAR_OBJECT_IS_ATTACHED_TO( sub_9479( uParam0 ) ) ))
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

void sub_9329(unknown uParam0)
{
    unknown Result;

    GET_PED_FROM_NETWORK_ID( uParam0, ref Result );
    return Result;
}

void sub_9404(unknown uParam0)
{
    unknown Result;

    GET_VEHICLE_FROM_NETWORK_ID( uParam0, ref Result );
    return Result;
}

void sub_9479(unknown uParam0)
{
    unknown Result;

    GET_OBJECT_FROM_NETWORK_ID( uParam0, ref Result );
    return Result;
}

void sub_9536(unknown uParam0)
{
    unknown Result;

    GET_OBJECT_HEALTH( uParam0, ref Result );
    return Result;
}

void sub_9565(unknown uParam0)
{
    return FLOOR( uParam0 );
}

void sub_9828(unknown uParam0)
{
    unknown Result;
    unknown uVar4;
    unknown uVar5;

    if (DOES_PED_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        GET_CHAR_COORDINATES( sub_9329( uParam0 ), ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        GET_DEAD_CAR_COORDINATES( sub_9404( uParam0 ), ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else if (DOES_OBJECT_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        GET_OBJECT_COORDINATES( sub_9479( uParam0 ), ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    };;;
    return Result;
}

void sub_10023(int iParam0, float fParam1)
{
    if (fParam1 > 500.00000000)
    {
        (iParam0^) = {sub_10049( (iParam0^) )};
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

void sub_10049(vector vParam0)
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
        vVar12 = {sub_10082( I )};
        uVar9 = {vParam0 - vVar12};
        fVar8 = ((uVar9._fU0 * uVar9._fU0) + (uVar9._fU4 * uVar9._fU4)) + (uVar9._fU8 * uVar9._fU8);
        if (fVar7 > fVar8)
        {
            iVar6 = I;
            fVar7 = fVar8;
        }
    }
    return sub_10082( iVar6 );
}

vector sub_10082(int iParam0)
{
    if (iParam0 == -1)
    {
        iParam0 = sub_2934( 0, 8 );
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

int sub_10946()
{
    int iVar2;

    iVar2 = NETWORK_GET_GAME_MODE();
    if ((((iVar2 == 13) || (iVar2 == 14)) || (iVar2 == 15)) || (iVar2 == 16))
    {
        return 1;
    }
    return 0;
}

vector sub_11438(int iParam0, unknown uParam1)
{
    int I;
    int iVar5;
    int iVar6;
    vector vVar7;

    if ((l_U1319) AND (uParam1))
    {
        return sub_10082( l_U1320 );
    }
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (IS_PLAYER_CONTROL_ON( sub_8097( I ) ))
            {
                if (NOT (sub_11547( sub_8050( I ), -2000.00000000, -2000.00000000, 250.00000000, 50.00000000 )))
                {
                    iVar6++;
                    if (((GET_PLAYER_TEAM( sub_8097( I ) )) == iParam0) || (iParam0 == -1))
                    {
                        vVar7 = {vVar7 + (sub_9168( sub_8050( I ) ))};
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
            return sub_11438( -1, 0 );
        }
        else
        {
            return sub_10082( -1 );
        }
    }
    return vVar7 / (TO_FLOAT( iVar5 ));
}

int sub_11547(unknown uParam0, vector vParam1, float fParam4)
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

void sub_11882()
{
    int I;

    sub_4641();
    switch (l_U1933._fU0)
    {
        case 0:
        if ((NOT N_1242010017()) AND (NOT g_U26675))
        {
            NETWORK_ADVERTISE_SESSION( 1 );
        }
        l_U1933._fU672 = 0;
        l_U1933._fU0 = 1;
        break;
        case 1:
        if (l_U3400[GET_PLAYER_ID()]._fU8 > -5)
        {
            if ((NOT N_1242010017()) AND (NOT g_U26675))
            {
                NETWORK_ADVERTISE_SESSION( 1 );
            }
        }
        l_U1933._fU0 = 2;
        break;
        case 2:
        if (NOT NETWORK_IS_OPERATION_PENDING())
        {
            sub_12081();
            if ((sub_12535()) || (l_U1933._fU844))
            {
                l_U1933._fU384[0] = 0;
                l_U1933._fU384[1] = 0;
                l_U1933._fU464[1] = 0;
                l_U1933._fU0 = 3;
                for ( I = 0; I < 16; I++ )
                {
                    l_U1933._fU396[I] = 0;
                    l_U1933._fU532[I] = 0;
                    l_U1933._fU600[I] = 0;
                    l_U1933._fU464[I] = 0;
                    l_U1933._fU316[I] = 0;
                }
                if (l_U1933._fU756[2] == 0)
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 1, 5, ref l_U1933._fU756[2] );
                }
                GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U1933._fU848 );
                if (NOT l_U2342)
                {
                    l_U1933._fU852 = sub_13522();
                }
                else
                {
                    l_U1933._fU852 = 16;
                }
                sub_13625();
                switch (l_U1933._fU756[3])
                {
                    case 0:
                    l_U1933._fU668 = l_U2331 + 600000;
                    break;
                    case 1:
                    l_U1933._fU668 = l_U2331 + 1200000;
                    break;
                    case 2:
                    l_U1933._fU668 = l_U2331 + 1800000;
                    break;
                }
                sub_2866( l_U1933._fU756[13] );
                sub_21345( l_U1933._fU756[14] );
                SET_SYNC_WEATHER_AND_GAME_TIME( 1 );
                NETWORK_START_SESSION();
                if (N_1242010017())
                {
                    NETWORK_ADVERTISE_SESSION( 0 );
                }
                l_U1933._fU844 = 0;
                l_U3594 = 0;
            }
            else
            {
                SET_SYNC_WEATHER_AND_GAME_TIME( 0 );
                if ((NOT N_1242010017()) AND (NOT g_U26675))
                {
                    if (l_U3400[GET_PLAYER_ID()]._fU8 > -5)
                    {
                        NETWORK_ADVERTISE_SESSION( 1 );
                    }
                }
            }
        }
        else if ((NOT N_1242010017()) AND (NOT g_U26675))
        {
            if (l_U3400[GET_PLAYER_ID()]._fU8 > -5)
            {
                NETWORK_ADVERTISE_SESSION( 1 );
            }
        }
        break;
        case 3:
        sub_21684();
        sub_12081();
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
        for ( I = 0; I <= 6; I++ )
        {
            sub_22010( I );
        }
        if (NOT l_U3594)
        {
            l_U2333 = l_U2331 + 30000;
            l_U3594 = 1;
        }
        else if (l_U2333 < l_U2331)
        {
            for ( I = 0; I <= 6; I++ )
            {
                if (l_U1933._fU4[I]._fU12 < 2)
                {
                    if ((NOT l_U1933._fU4[I]._fU16) AND (NOT l_U1933._fU4[I]._fU28))
                    {
                        l_U1933._fU384[l_U1933._fU4[I]._fU12] += 50;
                    }
                }
            }
            l_U3594 = 0;
        }
        if (sub_24521())
        {
            for ( I = 0; I <= 15; I++ )
            {
                if (IS_NETWORK_PLAYER_ACTIVE( I ))
                {
                    if ((GET_PLAYER_TEAM( sub_8097( I ) )) == 0)
                    {
                        l_U1933._fU532[I] = l_U1933._fU384[0] / (sub_24715( 0 ));
                    }
                    else
                    {
                        l_U1933._fU532[I] = l_U1933._fU384[1] / (sub_24715( 1 ));
                    }
                }
            }
            l_U1933._fU672 = 1;
            l_U1933._fU0 = 4;
        }
        if (((sub_24715( 0 )) == 0) || ((sub_24715( 1 )) == 0))
        {
            for ( I = 0; I <= 15; I++ )
            {
                if (IS_NETWORK_PLAYER_ACTIVE( I ))
                {
                    if ((GET_PLAYER_TEAM( sub_8097( I ) )) == 0)
                    {
                        l_U1933._fU532[I] = l_U1933._fU384[0] / (sub_24715( 0 ));
                    }
                    else
                    {
                        l_U1933._fU532[I] = l_U1933._fU384[1] / (sub_24715( 1 ));
                    }
                }
            }
            l_U1933._fU0 = 4;
            l_U1933._fU672 = 1;
        }
        if (sub_4641() == 1)
        {
            for ( I = 0; I <= 15; I++ )
            {
                if (IS_NETWORK_PLAYER_ACTIVE( I ))
                {
                    if ((GET_PLAYER_TEAM( sub_8097( I ) )) == 0)
                    {
                        l_U1933._fU532[I] = l_U1933._fU384[0] / (sub_24715( 0 ));
                    }
                    else
                    {
                        l_U1933._fU532[I] = l_U1933._fU384[1] / (sub_24715( 1 ));
                    }
                }
            }
            l_U1933._fU672 = 1;
            l_U1933._fU0 = 4;
        }
        break;
        case 4:
        if (sub_25225())
        {
            l_U1933._fU0 = 1;
        }
        break;
    }
    return;
}

void sub_12081()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U3400[I]._fU16;
    }
    sub_12135( ref uVar3 );
    return;
}

void sub_12135(unknown uParam0)
{
    int I;
    int[16] iVar4;
    int iVar21;

    array(ref iVar4, 16);
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if ((((uParam0^)[I] != -1) AND ((uParam0^)[I] != I)) AND (l_U1294[I] == 1))
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
    if ((sub_4641() > 2) AND (NOT NETWORK_IS_TVT()))
    {
        if (((sub_4641() > 3) AND (iVar4[iVar21] > (sub_4641() / 2))) || ((sub_4641() == 3) AND (iVar4[iVar21] == 2)))
        {
            PRINTSTRING( "SCRIPT: Kick Player " );
            PRINTINT( iVar21 );
            PRINTSTRING( " with votes " );
            PRINTINT( iVar4[iVar21] );
            PRINTSTRING( " needed " );
            PRINTINT( sub_4641() / 2 );
            PRINTNL();
            if (IS_NETWORK_PLAYER_ACTIVE( iVar21 ))
            {
                NETWORK_KICK_PLAYER( iVar21 );
            }
        }
    }
    return;
}

int sub_12535()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U3400[I]._fU8;
    }
    if (sub_12597( ref uVar3, ref l_U1933._fU752 ))
    {
        return 1;
    }
    return 0;
}

int sub_12597(unknown uParam0, unknown uParam1)
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
    if (NOT (sub_12675( ref uVar10 )))
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
        if (sub_3700() != 16)
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

int sub_12675(unknown uParam0)
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
    if (sub_3700() == 16)
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
    if ((sub_3700() == 5) || (sub_3700() == 4))
    {
        if (iVar4 < 4)
        {
            return 0;
        }
    }
    if ((sub_12802()) || (sub_12847()))
    {
        if (sub_12847())
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
        if (sub_12944() < 2)
        {
            (uParam0^) = 1;
            return 0;
        }
    }
    return 1;
}

int sub_12802()
{
    int iVar2;

    iVar2 = NETWORK_GET_GAME_MODE();
    if ((iVar2 == 10) || (iVar2 == 12))
    {
        return 1;
    }
    return 0;
}

int sub_12847()
{
    int iVar2;

    iVar2 = NETWORK_GET_GAME_MODE();
    if (((iVar2 == 1) || (iVar2 == 3)) || (iVar2 == 4))
    {
        return 1;
    }
    return 0;
}

void sub_12944()
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

void sub_13522()
{
    int I;
    int Result;

    for ( I = 0; I <= 15; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (NOT l_U3400[I]._fU28)
            {
                Result++;
            }
        }
    }
    return Result;
}

void sub_13625()
{
    if (l_U1933._fU756[2] == 2)
    {
        switch (l_U1933._fU848)
        {
            case 0:
            if (l_U1933._fU852 < 10)
            {
                sub_13736( ref l_U1933._fU4[0], -525.44040000, 1260.04600000, 16.42300000, 0, 0 );
                sub_13736( ref l_U1933._fU4[5], -303.13470000, 1379.69700000, 19.26800000, 2, 0 );
                sub_13736( ref l_U1933._fU4[1], -118.05400000, 1496.42300000, 17.41200000, 1, 0 );
                sub_13736( ref l_U1933._fU4[4], -145.73100000, 1646.96800000, 19.56520000, 2, 1 );
                sub_13736( ref l_U1933._fU4[2], -187.65030000, 1305.02800000, 20.10200000, 2, 1 );
                sub_13736( ref l_U1933._fU4[3], -496.16800000, 1522.00700000, 17.86190000, 2, 1 );
                sub_13736( ref l_U1933._fU4[6], 73.10660000, 1279.12100000, 19.28040000, 2, 1 );
                l_U1933._fU860 = 0;
                l_U1933._fU864 = 1;
            }
            if ((l_U1933._fU852 >= 10) AND (l_U1933._fU852 < 14))
            {
                sub_13736( ref l_U1933._fU4[0], -525.44040000, 1260.04600000, 16.42300000, 0, 0 );
                sub_13736( ref l_U1933._fU4[1], -118.05400000, 1496.42300000, 17.41200000, 1, 0 );
                sub_13736( ref l_U1933._fU4[2], -187.65030000, 1305.02800000, 20.10200000, 2, 0 );
                sub_13736( ref l_U1933._fU4[5], -303.13470000, 1379.69700000, 19.26800000, 2, 0 );
                sub_13736( ref l_U1933._fU4[4], -145.73100000, 1646.96800000, 19.56520000, 2, 1 );
                sub_13736( ref l_U1933._fU4[3], -496.16800000, 1522.00700000, 17.86190000, 2, 1 );
                sub_13736( ref l_U1933._fU4[6], 73.10660000, 1279.12100000, 19.28040000, 2, 1 );
                l_U1933._fU860 = 0;
                l_U1933._fU864 = 1;
            }
            if (l_U1933._fU852 >= 14)
            {
                sub_13736( ref l_U1933._fU4[0], -525.44040000, 1260.04600000, 16.42300000, 0, 0 );
                sub_13736( ref l_U1933._fU4[1], -118.05400000, 1496.42300000, 17.41200000, 2, 0 );
                sub_13736( ref l_U1933._fU4[4], -145.73100000, 1646.96800000, 19.56520000, 1, 0 );
                sub_13736( ref l_U1933._fU4[2], -187.65030000, 1305.02800000, 20.10200000, 2, 0 );
                sub_13736( ref l_U1933._fU4[3], -496.16800000, 1522.00700000, 17.86190000, 2, 0 );
                sub_13736( ref l_U1933._fU4[5], -303.13470000, 1379.69700000, 19.26800000, 2, 1 );
                sub_13736( ref l_U1933._fU4[6], 73.10660000, 1279.12100000, 19.28040000, 2, 1 );
                l_U1933._fU860 = 0;
                l_U1933._fU864 = 4;
            }
            break;
            case 1:
            case 2:
            if (l_U1933._fU852 < 10)
            {
                sub_13736( ref l_U1933._fU4[2], -489.38600000, 5.93250000, 6.84900000, 0, 0 );
                sub_13736( ref l_U1933._fU4[5], 2.63600000, 747.88290000, 13.56340000, 1, 0 );
                sub_13736( ref l_U1933._fU4[0], -403.27730000, 429.50860000, 13.74690000, 2, 0 );
                sub_13736( ref l_U1933._fU4[1], 19.32070000, -369.75760000, 13.75440000, 2, 1 );
                sub_13736( ref l_U1933._fU4[4], -92.35190000, -930.51590000, 4.12230000, 2, 1 );
                sub_13736( ref l_U1933._fU4[3], 442.37560000, 39.86540000, 7.78450000, 2, 1 );
                sub_13736( ref l_U1933._fU4[6], -403.62620000, -208.15800000, 10.37780000, 2, 1 );
                l_U1933._fU860 = 2;
                l_U1933._fU864 = 5;
            }
            if ((l_U1933._fU852 >= 10) AND (l_U1933._fU852 < 14))
            {
                sub_13736( ref l_U1933._fU4[5], 2.63600000, 747.88290000, 13.56340000, 0, 0 );
                sub_13736( ref l_U1933._fU4[1], 19.32070000, -369.75760000, 13.75440000, 1, 0 );
                sub_13736( ref l_U1933._fU4[3], 442.37560000, 39.86540000, 7.78450000, 2, 0 );
                sub_13736( ref l_U1933._fU4[6], -403.62620000, -208.15800000, 10.37780000, 2, 0 );
                sub_13736( ref l_U1933._fU4[0], -403.27730000, 429.50860000, 13.74690000, 2, 1 );
                sub_13736( ref l_U1933._fU4[4], -92.35190000, -930.51590000, 4.12230000, 2, 1 );
                sub_13736( ref l_U1933._fU4[2], -489.38600000, 5.93250000, 6.84900000, 2, 1 );
                l_U1933._fU860 = 5;
                l_U1933._fU864 = 1;
            }
            if (l_U1933._fU852 >= 14)
            {
                sub_13736( ref l_U1933._fU4[0], -403.27730000, 429.50860000, 13.74690000, 0, 0 );
                sub_13736( ref l_U1933._fU4[5], 2.63600000, 747.88290000, 13.56340000, 2, 0 );
                sub_13736( ref l_U1933._fU4[3], 442.37560000, 39.86540000, 7.78450000, 2, 0 );
                sub_13736( ref l_U1933._fU4[6], -403.62620000, -208.15800000, 10.37780000, 2, 0 );
                sub_13736( ref l_U1933._fU4[4], -92.35190000, -930.51590000, 4.12230000, 1, 0 );
                sub_13736( ref l_U1933._fU4[1], 19.32070000, -369.75760000, 13.75440000, 2, 1 );
                sub_13736( ref l_U1933._fU4[2], -489.38600000, 5.93250000, 6.84900000, 2, 1 );
                l_U1933._fU860 = 0;
                l_U1933._fU864 = 4;
            }
            break;
        }
    }
    else if (l_U1933._fU756[2] == 1)
    {
        switch (l_U1933._fU848)
        {
            case 0:
            if (l_U1933._fU852 < 10)
            {
                sub_13736( ref l_U1933._fU4[0], -2068.23800000, 165.42380000, 11.48700000, 0, 0 );
                sub_13736( ref l_U1933._fU4[4], -1369.80800000, -69.01800000, 5.29690000, 1, 0 );
                sub_13736( ref l_U1933._fU4[6], -1761.07700000, 21.28580000, 8.33020000, 2, 0 );
                l_U1933._fU860 = 0;
                l_U1933._fU864 = 4;
                sub_13736( ref l_U1933._fU4[1], -1542.39200000, 157.47600000, 9.48740000, 2, 1 );
                sub_13736( ref l_U1933._fU4[2], -1389.83900000, 339.76560000, 13.27000000, 2, 1 );
                sub_13736( ref l_U1933._fU4[3], -1730.62300000, 461.57810000, 24.82900000, 2, 1 );
                sub_13736( ref l_U1933._fU4[5], -1386.08500000, 571.11490000, 11.47750000, 2, 1 );
            }
            if ((l_U1933._fU852 >= 10) AND (l_U1933._fU852 < 14))
            {
                sub_13736( ref l_U1933._fU4[4], -1369.80800000, -69.01800000, 5.29690000, 0, 0 );
                sub_13736( ref l_U1933._fU4[3], -1730.62300000, 461.57810000, 24.82900000, 1, 0 );
                sub_13736( ref l_U1933._fU4[2], -1389.83900000, 339.76560000, 13.27000000, 2, 0 );
                sub_13736( ref l_U1933._fU4[1], -1542.39200000, 157.47600000, 9.48740000, 2, 0 );
                sub_13736( ref l_U1933._fU4[0], -2068.23800000, 165.42380000, 11.48700000, 2, 1 );
                sub_13736( ref l_U1933._fU4[5], -1386.08500000, 571.11490000, 11.47750000, 2, 1 );
                sub_13736( ref l_U1933._fU4[6], -1761.07700000, 21.28580000, 8.33020000, 2, 1 );
                l_U1933._fU860 = 4;
                l_U1933._fU864 = 3;
            }
            if (l_U1933._fU852 >= 14)
            {
                sub_13736( ref l_U1933._fU4[4], -1369.80800000, -69.01800000, 5.29690000, 0, 0 );
                sub_13736( ref l_U1933._fU4[3], -1730.62300000, 461.57810000, 24.82900000, 1, 0 );
                sub_13736( ref l_U1933._fU4[2], -1389.83900000, 339.76560000, 13.27000000, 2, 0 );
                sub_13736( ref l_U1933._fU4[1], -1542.39200000, 157.47600000, 9.48740000, 2, 0 );
                sub_13736( ref l_U1933._fU4[6], -1761.07700000, 21.28580000, 8.33020000, 2, 0 );
                sub_13736( ref l_U1933._fU4[0], -2068.23800000, 165.42380000, 11.48700000, 2, 1 );
                sub_13736( ref l_U1933._fU4[5], -1386.08500000, 571.11490000, 11.47750000, 2, 1 );
                l_U1933._fU860 = 4;
                l_U1933._fU864 = 3;
            }
            break;
            case 1:
            if (l_U1933._fU852 < 10)
            {
                sub_13736( ref l_U1933._fU4[6], -1649.25900000, -594.12690000, 1.83730000, 0, 0 );
                sub_13736( ref l_U1933._fU4[0], -1080.47600000, -596.73000000, 2.80840000, 1, 0 );
                sub_13736( ref l_U1933._fU4[5], -1272.78500000, -409.82680000, 5.23800000, 2, 0 );
                sub_13736( ref l_U1933._fU4[1], -1594.99200000, -302.63410000, -3.73500000, 2, 1 );
                sub_13736( ref l_U1933._fU4[4], -1904.99200000, -295.05390000, 4.43760000, 2, 1 );
                sub_13736( ref l_U1933._fU4[2], -1032.19400000, -284.77310000, 1.91860000, 2, 1 );
                sub_13736( ref l_U1933._fU4[3], -1960.50700000, -665.98320000, 2.01470000, 2, 1 );
                l_U1933._fU860 = 6;
                l_U1933._fU864 = 0;
            }
            if ((l_U1933._fU852 >= 10) AND (l_U1933._fU852 < 14))
            {
                sub_13736( ref l_U1933._fU4[5], -1272.78500000, -409.82680000, 5.23800000, 0, 0 );
                sub_13736( ref l_U1933._fU4[4], -1904.99200000, -295.05390000, 4.43760000, 1, 0 );
                sub_13736( ref l_U1933._fU4[6], -1649.25900000, -594.12690000, 1.83730000, 2, 0 );
                sub_13736( ref l_U1933._fU4[1], -1594.99200000, -302.63410000, -3.73500000, 2, 0 );
                sub_13736( ref l_U1933._fU4[0], -1080.47600000, -596.73000000, 2.80840000, 2, 1 );
                sub_13736( ref l_U1933._fU4[2], -1032.19400000, -284.77310000, 1.91860000, 2, 1 );
                sub_13736( ref l_U1933._fU4[3], -1960.50700000, -665.98320000, 2.01470000, 2, 1 );
                l_U1933._fU860 = 5;
                l_U1933._fU864 = 4;
            }
            if (l_U1933._fU852 >= 14)
            {
                sub_13736( ref l_U1933._fU4[6], -1649.25900000, -594.12690000, 1.83730000, 0, 0 );
                sub_13736( ref l_U1933._fU4[0], -1080.47600000, -596.73000000, 2.80840000, 1, 0 );
                sub_13736( ref l_U1933._fU4[5], -1272.78500000, -409.82680000, 5.23800000, 2, 0 );
                sub_13736( ref l_U1933._fU4[1], -1594.99200000, -302.63410000, -3.73500000, 2, 0 );
                sub_13736( ref l_U1933._fU4[2], -1032.19400000, -284.77310000, 1.91860000, 2, 0 );
                sub_13736( ref l_U1933._fU4[4], -1904.99200000, -295.05390000, 4.43760000, 2, 1 );
                sub_13736( ref l_U1933._fU4[3], -1960.50700000, -665.98320000, 2.01470000, 2, 1 );
                l_U1933._fU860 = 6;
                l_U1933._fU864 = 0;
            }
            break;
            case 2:
            if (l_U1933._fU852 < 10)
            {
                sub_13736( ref l_U1933._fU4[0], -1334.36900000, 1715.92100000, 26.77960000, 0, 0 );
                sub_13736( ref l_U1933._fU4[1], -998.88000000, 1516.00000000, 22.27400000, 2, 0 );
                sub_13736( ref l_U1933._fU4[4], -826.01930000, 1276.31200000, 16.31440000, 1, 0 );
                sub_13736( ref l_U1933._fU4[2], -1163.44700000, 1288.69100000, 23.55990000, 2, 1 );
                sub_13736( ref l_U1933._fU4[3], -1475.93600000, 1370.76500000, 12.05000000, 2, 1 );
                sub_13736( ref l_U1933._fU4[5], -1014.09300000, 1646.34400000, 23.01280000, 2, 1 );
                sub_13736( ref l_U1933._fU4[6], -1194.79200000, 1463.07600000, 19.89530000, 2, 1 );
                l_U1933._fU860 = 0;
                l_U1933._fU864 = 4;
            }
            if ((l_U1933._fU852 >= 10) AND (l_U1933._fU852 < 14))
            {
                sub_13736( ref l_U1933._fU4[1], -998.88000000, 1516.00000000, 22.27400000, 0, 0 );
                sub_13736( ref l_U1933._fU4[3], -1475.93600000, 1370.76500000, 12.05000000, 1, 0 );
                sub_13736( ref l_U1933._fU4[2], -1163.44700000, 1288.69100000, 23.55990000, 2, 0 );
                sub_13736( ref l_U1933._fU4[0], -1334.36900000, 1715.92100000, 26.77960000, 2, 0 );
                sub_13736( ref l_U1933._fU4[4], -826.01930000, 1276.31200000, 16.31440000, 2, 1 );
                sub_13736( ref l_U1933._fU4[5], -1014.09300000, 1646.34400000, 23.01280000, 2, 1 );
                sub_13736( ref l_U1933._fU4[6], -1194.79200000, 1463.07600000, 19.89530000, 2, 1 );
                l_U1933._fU860 = 1;
                l_U1933._fU864 = 3;
            }
            if (l_U1933._fU852 > 14)
            {
                sub_13736( ref l_U1933._fU4[1], -998.88000000, 1516.00000000, 22.27400000, 0, 0 );
                sub_13736( ref l_U1933._fU4[3], -1475.93600000, 1370.76500000, 12.05000000, 1, 0 );
                sub_13736( ref l_U1933._fU4[2], -1163.44700000, 1288.69100000, 23.55990000, 2, 0 );
                sub_13736( ref l_U1933._fU4[0], -1334.36900000, 1715.92100000, 26.77960000, 2, 0 );
                sub_13736( ref l_U1933._fU4[6], -1194.79200000, 1463.07600000, 19.89530000, 2, 0 );
                sub_13736( ref l_U1933._fU4[4], -826.01930000, 1276.31200000, 16.31440000, 2, 1 );
                sub_13736( ref l_U1933._fU4[5], -1014.09300000, 1646.34400000, 23.01280000, 2, 1 );
                l_U1933._fU860 = 1;
                l_U1933._fU864 = 3;
            }
            break;
        }
    }
    else if (l_U1933._fU756[2] == 3)
    {
        if (l_U1933._fU852 < 10)
        {
            sub_13736( ref l_U1933._fU4[3], 617.12970000, 1479.29800000, 11.29400000, 0, 0 );
            sub_13736( ref l_U1933._fU4[5], 815.15690000, 1575.02900000, 16.83150000, 2, 0 );
            sub_13736( ref l_U1933._fU4[1], 1180.94200000, 1795.87700000, 9.12220000, 1, 0 );
            sub_13736( ref l_U1933._fU4[0], 1292.00800000, 1512.78500000, 16.29680000, 2, 1 );
            sub_13736( ref l_U1933._fU4[4], 352.42000000, 1829.33500000, 17.83140000, 2, 1 );
            sub_13736( ref l_U1933._fU4[2], 791.90970000, 1310.02400000, 8.03390000, 2, 1 );
            sub_13736( ref l_U1933._fU4[6], 655.22930000, 1701.24500000, 30.77670000, 2, 1 );
            l_U1933._fU860 = 3;
            l_U1933._fU864 = 1;
        }
        if ((l_U1933._fU852 >= 10) AND (l_U1933._fU852 < 14))
        {
            sub_13736( ref l_U1933._fU4[3], 617.12970000, 1479.29800000, 11.29400000, 0, 0 );
            sub_13736( ref l_U1933._fU4[5], 815.15690000, 1575.02900000, 16.83150000, 2, 0 );
            sub_13736( ref l_U1933._fU4[2], 791.90970000, 1310.02400000, 8.03390000, 1, 0 );
            sub_13736( ref l_U1933._fU4[6], 655.22930000, 1701.24500000, 30.77670000, 2, 0 );
            sub_13736( ref l_U1933._fU4[0], 1292.00800000, 1512.78500000, 16.29680000, 2, 1 );
            sub_13736( ref l_U1933._fU4[1], 1180.94200000, 1795.87700000, 9.12220000, 2, 1 );
            sub_13736( ref l_U1933._fU4[4], 352.42000000, 1829.33500000, 17.83140000, 2, 1 );
            l_U1933._fU860 = 3;
            l_U1933._fU864 = 2;
        }
        if (l_U1933._fU852 >= 14)
        {
            sub_13736( ref l_U1933._fU4[3], 617.12970000, 1479.29800000, 11.29400000, 0, 0 );
            sub_13736( ref l_U1933._fU4[5], 815.15690000, 1575.02900000, 16.83150000, 2, 0 );
            sub_13736( ref l_U1933._fU4[2], 791.90970000, 1310.02400000, 8.03390000, 1, 0 );
            sub_13736( ref l_U1933._fU4[6], 655.22930000, 1701.24500000, 30.77670000, 2, 0 );
            sub_13736( ref l_U1933._fU4[0], 1292.00800000, 1512.78500000, 16.29680000, 2, 0 );
            sub_13736( ref l_U1933._fU4[1], 1180.94200000, 1795.87700000, 9.12220000, 2, 1 );
            sub_13736( ref l_U1933._fU4[4], 352.42000000, 1829.33500000, 17.83140000, 2, 1 );
            l_U1933._fU860 = 3;
            l_U1933._fU864 = 2;
        }
    }
    else if (l_U1933._fU756[2] == 4)
    {
        switch (l_U1933._fU848)
        {
            case 0:
            if (l_U1933._fU852 < 10)
            {
                sub_13736( ref l_U1933._fU4[0], 1239.76400000, -411.28750000, 15.69430000, 0, 0 );
                sub_13736( ref l_U1933._fU4[1], 1172.69400000, -103.04520000, 29.73300000, 2, 0 );
                sub_13736( ref l_U1933._fU4[4], 1549.13700000, 127.02520000, 22.12800000, 1, 0 );
                l_U1933._fU860 = 0;
                l_U1933._fU864 = 4;
                sub_13736( ref l_U1933._fU4[2], 939.76130000, 70.43400000, 30.20640000, 2, 1 );
                sub_13736( ref l_U1933._fU4[3], 853.97130000, -202.92630000, 4.96450000, 2, 1 );
                sub_13736( ref l_U1933._fU4[5], 1259.39300000, 353.84680000, 20.96700000, 2, 1 );
                sub_13736( ref l_U1933._fU4[6], 791.00830000, -520.21620000, 10.96600000, 2, 1 );
            }
            if ((l_U1933._fU852 >= 10) AND (l_U1933._fU852 < 14))
            {
                sub_13736( ref l_U1933._fU4[0], 1239.76400000, -411.28750000, 15.69430000, 0, 0 );
                sub_13736( ref l_U1933._fU4[1], 1172.69400000, -103.04520000, 29.73300000, 2, 0 );
                sub_13736( ref l_U1933._fU4[4], 1549.13700000, 127.02520000, 22.12800000, 1, 0 );
                l_U1933._fU860 = 0;
                l_U1933._fU864 = 4;
                sub_13736( ref l_U1933._fU4[2], 939.76130000, 70.98380000, 30.20640000, 2, 1 );
                sub_13736( ref l_U1933._fU4[3], 853.97130000, -202.92630000, 4.96450000, 2, 1 );
                sub_13736( ref l_U1933._fU4[5], 1259.39300000, 353.84680000, 20.96700000, 2, 1 );
                sub_13736( ref l_U1933._fU4[6], 791.00830000, -520.21620000, 10.96600000, 2, 1 );
            }
            if (l_U1933._fU852 >= 14)
            {
                sub_13736( ref l_U1933._fU4[0], 1239.76400000, -411.28750000, 15.69430000, 0, 0 );
                sub_13736( ref l_U1933._fU4[1], 1172.69400000, -103.04520000, 29.73300000, 2, 0 );
                sub_13736( ref l_U1933._fU4[4], 1549.13700000, 127.02520000, 22.12800000, 1, 0 );
                sub_13736( ref l_U1933._fU4[2], 939.76130000, 70.43400000, 30.20640000, 2, 0 );
                sub_13736( ref l_U1933._fU4[3], 853.97130000, -202.92630000, 4.96450000, 2, 0 );
                sub_13736( ref l_U1933._fU4[5], 1259.39300000, 353.84680000, 20.96700000, 2, 1 );
                sub_13736( ref l_U1933._fU4[6], 791.00830000, -520.21620000, 10.96600000, 2, 1 );
                l_U1933._fU860 = 0;
                l_U1933._fU864 = 4;
            }
            break;
            case 1:
            if (l_U1933._fU852 < 10)
            {
                sub_13736( ref l_U1933._fU4[5], 1082.10500000, 822.48220000, 31.62410000, 0, 0 );
                sub_13736( ref l_U1933._fU4[4], 1774.64500000, 659.07230000, 27.12290000, 1, 0 );
                sub_13736( ref l_U1933._fU4[3], 1187.37800000, 431.99770000, 22.99300000, 2, 0 );
                l_U1933._fU860 = 5;
                l_U1933._fU864 = 4;
                sub_13736( ref l_U1933._fU4[0], 917.12160000, 583.48350000, 21.27360000, 2, 1 );
                sub_13736( ref l_U1933._fU4[1], 1292.52100000, 688.66310000, 35.73650000, 2, 1 );
                sub_13736( ref l_U1933._fU4[2], 939.76130000, 70.43400000, 30.20640000, 2, 1 );
                sub_13736( ref l_U1933._fU4[6], 1457.47800000, 229.27200000, 25.07210000, 2, 1 );
            }
            if ((l_U1933._fU852 >= 10) AND (l_U1933._fU852 < 14))
            {
                sub_13736( ref l_U1933._fU4[0], 917.12160000, 583.48350000, 21.27360000, 0, 0 );
                sub_13736( ref l_U1933._fU4[1], 1292.52100000, 688.66310000, 35.73650000, 1, 0 );
                sub_13736( ref l_U1933._fU4[3], 1187.37800000, 431.99770000, 22.99300000, 2, 0 );
                sub_13736( ref l_U1933._fU4[5], 1082.10500000, 822.48220000, 31.62410000, 2, 0 );
                l_U1933._fU860 = 0;
                l_U1933._fU864 = 1;
                sub_13736( ref l_U1933._fU4[2], 939.76130000, 70.43400000, 30.20640000, 2, 1 );
                sub_13736( ref l_U1933._fU4[4], 1774.64500000, 659.07230000, 27.12290000, 2, 1 );
                sub_13736( ref l_U1933._fU4[6], 1457.47800000, 229.27200000, 25.07210000, 2, 1 );
            }
            if (l_U1933._fU852 >= 14)
            {
                sub_13736( ref l_U1933._fU4[0], 917.12160000, 583.48350000, 21.27360000, 0, 0 );
                sub_13736( ref l_U1933._fU4[6], 1457.47800000, 229.27200000, 25.07210000, 1, 0 );
                l_U1933._fU860 = 0;
                l_U1933._fU864 = 6;
                sub_13736( ref l_U1933._fU4[2], 939.76130000, 70.43400000, 30.20640000, 2, 0 );
                sub_13736( ref l_U1933._fU4[3], 1187.37800000, 431.99770000, 22.99300000, 2, 0 );
                sub_13736( ref l_U1933._fU4[1], 1292.52100000, 688.66310000, 35.73650000, 2, 0 );
                sub_13736( ref l_U1933._fU4[5], 1082.10500000, 822.48220000, 31.62410000, 2, 1 );
                sub_13736( ref l_U1933._fU4[4], 1774.64500000, 659.07230000, 27.12290000, 2, 1 );
            }
            break;
            case 2:
            if (l_U1933._fU852 < 10)
            {
                sub_13736( ref l_U1933._fU4[0], 2118.20100000, 119.63860000, 4.81010000, 0, 0 );
                sub_13736( ref l_U1933._fU4[1], 1975.31400000, 543.36250000, 17.04400000, 2, 0 );
                sub_13736( ref l_U1933._fU4[4], 1616.30100000, 712.45250000, 28.41060000, 1, 0 );
                sub_13736( ref l_U1933._fU4[2], 1774.05400000, 425.52880000, 26.97070000, 2, 1 );
                sub_13736( ref l_U1933._fU4[3], 1497.71100000, 612.79790000, 28.87220000, 2, 1 );
                sub_13736( ref l_U1933._fU4[5], 1218.72400000, 678.18710000, 36.98520000, 2, 1 );
                sub_13736( ref l_U1933._fU4[6], 1458.04800000, 228.99050000, 25.09300000, 2, 1 );
                l_U1933._fU860 = 0;
                l_U1933._fU864 = 4;
            }
            if ((l_U1933._fU852 >= 10) AND (l_U1933._fU852 < 14))
            {
                sub_13736( ref l_U1933._fU4[0], 2118.20100000, 119.63860000, 4.81010000, 0, 0 );
                sub_13736( ref l_U1933._fU4[1], 1975.31400000, 543.36250000, 17.04400000, 2, 0 );
                sub_13736( ref l_U1933._fU4[4], 1616.30100000, 712.45250000, 28.41060000, 1, 0 );
                sub_13736( ref l_U1933._fU4[2], 1774.05400000, 425.52880000, 26.97070000, 2, 0 );
                sub_13736( ref l_U1933._fU4[3], 1497.71100000, 612.79790000, 28.87220000, 2, 1 );
                sub_13736( ref l_U1933._fU4[5], 1218.72400000, 678.18710000, 36.98520000, 2, 1 );
                sub_13736( ref l_U1933._fU4[6], 1458.04800000, 228.99050000, 25.09300000, 2, 1 );
                l_U1933._fU860 = 0;
                l_U1933._fU864 = 4;
            }
            if (l_U1933._fU852 >= 14)
            {
                sub_13736( ref l_U1933._fU4[0], 2118.20100000, 119.63860000, 4.81010000, 0, 0 );
                sub_13736( ref l_U1933._fU4[1], 1975.31400000, 543.36250000, 17.04400000, 2, 0 );
                sub_13736( ref l_U1933._fU4[4], 1616.30100000, 712.45250000, 28.41060000, 1, 0 );
                sub_13736( ref l_U1933._fU4[2], 1774.05400000, 425.52880000, 26.97070000, 2, 0 );
                sub_13736( ref l_U1933._fU4[3], 1497.71100000, 612.79790000, 28.87220000, 2, 0 );
                sub_13736( ref l_U1933._fU4[5], 1218.72400000, 678.18710000, 36.98520000, 2, 1 );
                sub_13736( ref l_U1933._fU4[6], 1458.04800000, 228.99050000, 25.09300000, 2, 1 );
                l_U1933._fU860 = 0;
                l_U1933._fU864 = 4;
            }
            break;
        }
    };;;;
    return;
}

void sub_13736(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    sub_13810( "SET_UP_BASE_INFO(BASE_INFO,VECTOR,INT,STRING,MODEL_NAMES,BOOL)" );
    iParam0->_fU12 = uParam4;
    iParam0->_fU0 = {uParam1};
    iParam0->_fU32 = -1;
    iParam0->_fU36 = -1;
    iParam0->_fU28 = uParam5;
    iParam0->_fU40 = 0;
    return;
}

void sub_13810(unknown uParam0)
{
    int I;

    if (l_U1575 > 0)
    {
        for ( I = 0; I <= (l_U1575 - 1); I++ )
        {
            if (COMPARE_STRING( uParam0, l_U1474[I] ))
            {
                l_U1373[I]++;
            }
        }
    }
    return;
}

void sub_21345(unknown uParam0)
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

void sub_21684()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U3400[I]._fU44;
    }
    sub_21748( ref l_U1933._fU856, ref uVar3 );
    return;
}

void sub_21748(unknown uParam0, unknown uParam1)
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
    if ((iVar5[iVar23] > (sub_4641() / 2)) AND (iVar5[iVar23] > 0))
    {
        (uParam0^) = iVar23;
    }
    else
    {
        (uParam0^) = -1;
    }
    return;
}

void sub_22010(unknown uParam0)
{
    int J;
    int I;

    if (NOT l_U1933._fU4[uParam0]._fU28)
    {
        for ( J = 0; J <= 15; J++ )
        {
            if (IS_NETWORK_PLAYER_ACTIVE( J ))
            {
                if ((GET_PLAYER_TEAM( sub_8097( J ) )) != l_U1933._fU4[uParam0]._fU12)
                {
                    if (((sub_22099( uParam0 )) AND (NOT (sub_22353( uParam0, J )))) AND (NOT (IS_CHAR_DEAD( sub_8050( J ) ))))
                    {
                        if (LOCATE_CHAR_ON_FOOT_3D( sub_8050( J ), l_U1933._fU4[uParam0]._fU0._fU0, l_U1933._fU4[uParam0]._fU0._fU4, l_U1933._fU4[uParam0]._fU0._fU8, 2.25000000, 2.25000000, 7.50000000, 0 ))
                        {
                            if (NOT l_U1933._fU4[uParam0]._fU16)
                            {
                                l_U1933._fU4[uParam0]._fU36 = sub_22707( uParam0 );
                                l_U1933._fU4[uParam0]._fU24 = l_U1933._fU4[uParam0]._fU20 + 10000;
                                l_U1933._fU4[uParam0]._fU16 = 1;
                            }
                            else
                            {
                                l_U1933._fU4[uParam0]._fU36 = sub_22707( uParam0 );
                                if (l_U1933._fU4[uParam0]._fU40 >= 300)
                                {
                                    l_U1933._fU4[uParam0]._fU36 = -1;
                                    for ( I = 0; I <= 15; I++ )
                                    {
                                        if (IS_NETWORK_PLAYER_ACTIVE( I ))
                                        {
                                            if (LOCATE_CHAR_ON_FOOT_3D( sub_8050( I ), l_U1933._fU4[uParam0]._fU0._fU0, l_U1933._fU4[uParam0]._fU0._fU4, l_U1933._fU4[uParam0]._fU0._fU8, 2.25000000, 2.25000000, 7.50000000, 0 ))
                                            {
                                                l_U1933._fU316[I]++;
                                                l_U1933._fU532[I] += 100;
                                            }
                                        }
                                    }
                                    l_U1933._fU384[GET_PLAYER_TEAM( sub_8097( J ) )] += 100;
                                    l_U1933._fU4[uParam0]._fU40 = 0;
                                    l_U1933._fU4[uParam0]._fU12 = GET_PLAYER_TEAM( sub_8097( J ) );
                                    l_U1933._fU4[uParam0]._fU16 = 0;
                                }
                                else if (l_U1933._fU4[uParam0]._fU40 < 300)
                                {
                                    l_U1933._fU4[uParam0]._fU40 += sub_23424( uParam0 );
                                }
                            }
                        }
                        else if (sub_23732( uParam0, J ))
                        {
                            if (l_U1933._fU4[uParam0]._fU16)
                            {
                                l_U1933._fU4[uParam0]._fU36 = -1;
                                l_U1933._fU4[uParam0]._fU20 = 0;
                                l_U1933._fU4[uParam0]._fU40 = 0;
                                l_U1933._fU4[uParam0]._fU16 = 0;
                            }
                        }
                    }
                    else if (LOCATE_CHAR_ANY_MEANS_3D( sub_8050( J ), l_U1933._fU4[uParam0]._fU0._fU0, l_U1933._fU4[uParam0]._fU0._fU4, l_U1933._fU4[uParam0]._fU0._fU8, 2.25000000, 2.25000000, 7.50000000, 0 ))
                    {
                        if (sub_23732( uParam0, J ))
                        {
                            if (l_U1933._fU4[uParam0]._fU16)
                            {
                                l_U1933._fU4[uParam0]._fU32 = -1;
                                l_U1933._fU4[uParam0]._fU20 = 0;
                                l_U1933._fU4[uParam0]._fU16 = 0;
                                l_U1933._fU4[uParam0]._fU40 = 0;
                                l_U1933._fU4[uParam0]._fU36 = -1;
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_22099(unknown uParam0)
{
    int I;

    sub_13810( "NO_BASE_OWNERS_ARE_IN_ZONE(INT)" );
    if (NOT l_U1933._fU4[uParam0]._fU28)
    {
        for ( I = 0; I <= 15; I++ )
        {
            if (IS_NETWORK_PLAYER_ACTIVE( I ))
            {
                if (NOT (IS_CHAR_DEAD( sub_8050( I ) )))
                {
                    if ((GET_PLAYER_TEAM( sub_8097( I ) )) == l_U1933._fU4[uParam0]._fU12)
                    {
                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_8050( I ), l_U1933._fU4[uParam0]._fU0._fU0, l_U1933._fU4[uParam0]._fU0._fU4, l_U1933._fU4[uParam0]._fU0._fU8, 2.25000000, 2.25000000, 7.50000000, 0 ))
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

int sub_22353(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int I;

    if (NOT l_U1933._fU4[uParam0]._fU28)
    {
        if (IS_NETWORK_PLAYER_ACTIVE( uParam1 ))
        {
            iVar4 = GET_PLAYER_TEAM( sub_8097( uParam1 ) );
            for ( I = 0; I <= 15; I++ )
            {
                if (IS_NETWORK_PLAYER_ACTIVE( I ))
                {
                    if (NOT (IS_CHAR_DEAD( sub_8050( I ) )))
                    {
                        if ((GET_PLAYER_TEAM( sub_8097( I ) )) != iVar4)
                        {
                            if (LOCATE_CHAR_ANY_MEANS_3D( sub_8050( I ), l_U1933._fU4[uParam0]._fU0._fU0, l_U1933._fU4[uParam0]._fU0._fU4, l_U1933._fU4[uParam0]._fU0._fU8, 30.00000000, 30.00000000, 30.00000000, 0 ))
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

void sub_22707(unknown uParam0)
{
    float fVar3;
    int Result;
    int I;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    fVar3 = 100000.00000000;
    sub_13810( "GET_CLOSEST_PLAYER_TO_BASE(INT)" );
    if (NOT l_U1933._fU4[uParam0]._fU28)
    {
        for ( I = 0; I <= 15; I++ )
        {
            if (IS_NETWORK_PLAYER_ACTIVE( I ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_8050( I ) )))
                {
                    if (l_U1933._fU4[uParam0]._fU12 != (GET_PLAYER_TEAM( sub_8097( I ) )))
                    {
                        GET_CHAR_COORDINATES( sub_8050( I ), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                        if ((VDIST( uVar6, l_U1933._fU4[uParam0]._fU0 )) < fVar3)
                        {
                            Result = I;
                            fVar3 = VDIST( uVar6, l_U1933._fU4[uParam0]._fU0 );
                        }
                    }
                }
            }
        }
    }
    return Result;
}

int sub_23424(unknown uParam0)
{
    int I;
    int iVar4;

    for ( I = 0; I <= 15; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if ((GET_PLAYER_TEAM( sub_8097( l_U1933._fU4[uParam0]._fU36 ) )) == (GET_PLAYER_TEAM( sub_8097( I ) )))
            {
                if (NOT (IS_CHAR_DEAD( sub_8050( I ) )))
                {
                    if (LOCATE_CHAR_ON_FOOT_3D( sub_8050( I ), l_U1933._fU4[uParam0]._fU0._fU0, l_U1933._fU4[uParam0]._fU0._fU4, l_U1933._fU4[uParam0]._fU0._fU8, 2.25000000, 2.25000000, 7.50000000, 0 ))
                    {
                        iVar4++;
                    }
                }
            }
        }
    }
    if (iVar4 > 6)
    {
        return 8;
    }
    else if (iVar4 > 4)
    {
        return 4;
    }
    else if (iVar4 > 1)
    {
        PRINTSTRING( "2 PLAYERS" );
        PRINTNL();
        return 2;
    };;;
    return 1;
}

int sub_23732(unknown uParam0, int iParam1)
{
    int I;

    sub_13810( "ARE_NO_TEAMMATES_IN_ZONE(INT,INT)" );
    if (NOT l_U1933._fU4[uParam0]._fU28)
    {
        for ( I = 0; I <= 15; I++ )
        {
            if (IS_NETWORK_PLAYER_ACTIVE( I ))
            {
                if (I != iParam1)
                {
                    if (NOT (IS_CHAR_DEAD( sub_8050( I ) )))
                    {
                        if ((GET_PLAYER_TEAM( sub_8097( iParam1 ) )) == (GET_PLAYER_TEAM( sub_8097( I ) )))
                        {
                            if ((GET_PLAYER_TEAM( sub_8097( I ) )) != l_U1933._fU4[uParam0]._fU12)
                            {
                                if (LOCATE_CHAR_ON_FOOT_3D( sub_8050( I ), l_U1933._fU4[uParam0]._fU0._fU0, l_U1933._fU4[uParam0]._fU0._fU4, l_U1933._fU4[uParam0]._fU0._fU8, 2.25000000, 2.25000000, 7.50000000, 0 ))
                                {
                                    return 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 1;
}

int sub_24521()
{
    if (sub_24530())
    {
        if (l_U1933._fU668 < l_U2331)
        {
            return 1;
        }
    }
    else if ((l_U1933._fU384[0] >= sub_5563()) || (l_U1933._fU384[1] >= sub_5563()))
    {
        return 1;
    }
    return 0;
}

boolean sub_24530()
{
    return l_U1933._fU756[3] < 3;
}

void sub_24715(int iParam0)
{
    int I;
    int Result;

    for ( I = 0; I <= 15; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (NOT l_U3400[I]._fU28)
            {
                if ((GET_PLAYER_TEAM( sub_8097( I ) )) == iParam0)
                {
                    Result++;
                }
            }
        }
    }
    return Result;
}

int sub_25225()
{
    int I;

    for ( I = 0; I <= 15; I++ )
    {
        if (NOT l_U3400[I]._fU28)
        {
            if (IS_NETWORK_PLAYER_ACTIVE( I ))
            {
                if (NOT l_U3400[I]._fU36)
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}

void sub_25496(unknown uParam0)
{
    SET_SCREEN_FADE( sub_25505(), 0, 0, 0, 0, 0, 0, 255, uParam0, 1.00000000, 1.00000000 );
    return;
}

void sub_25505()
{
    unknown Result;

    GET_SCREEN_VIEWPORT_ID( ref Result );
    return Result;
}

void sub_25569(unknown uParam0)
{
    g_U13 = uParam0;
    if (NOT g_U26675)
    {
        sub_25594();
    }
    return;
}

void sub_25594()
{
    FORCE_LOADING_SCREEN( 1 );
    while (true)
    {
        WAIT( 0 );
    }
    return;
}

int sub_25698(int iParam0)
{
    int iVar3;

    DISPLAY_CASH( 1 );
    STORE_SCORE( sub_5012(), ref iVar3 );
    if (iVar3 != iParam0)
    {
        iParam0 -= iVar3;
        ADD_SCORE( sub_5012(), iParam0 );
        return 1;
    }
    return 0;
}

void sub_25866(unknown uParam0, unknown uParam1)
{
    l_U952[uParam0] = uParam1;
    return;
}

void sub_26005()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U3400[I]._fU8;
    }
    sub_26093( 10, ref uVar3, ref l_U1933._fU756, ref l_U1933._fU856, ref l_U1933._fU868, l_U1933._fU752 );
    l_U3400[GET_PLAYER_ID()]._fU8 = uVar3[GET_PLAYER_ID()];
    return;
}

void sub_26093(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
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
    if (l_U890 == -1)
    {
        STOP_STREAM();
        l_U890 = 0;
    }
    if (l_U1269)
    {
        SET_LOBBY_MUTE_OVERRIDE( 0 );
        l_U1269 = 0;
    }
    if (l_U864)
    {
        sub_26172();
        l_U1178++;
    }
    l_U867 = 0;
    l_U864 = 0;
    l_U1270 = 0;
    if (GET_HOST_ID() != -1)
    {
        if (((uParam1^)[GET_PLAYER_ID()] == -5) || (((GET_HOST_ID() != GET_PLAYER_ID()) AND ((uParam1^)[GET_HOST_ID()] < -4)) AND ((uParam1^)[GET_PLAYER_ID()] > -5)))
        {
            if ((uParam1^)[GET_PLAYER_ID()] != 3)
            {
                l_U990 = sub_26351( sub_3700() );
                (uParam1^)[GET_PLAYER_ID()] = -7;
                if (NOT sub_26564())
                {
                    if (sub_2238())
                    {
                        l_U1274 = 0;
                        if ((uParam3^) != -1)
                        {
                            if ((NOT (sub_26628( sub_26351( (uParam3^) ) ))) || (GET_NUMBER_OF_PLAYERS() <= 4))
                            {
                                l_U990 = sub_26351( (uParam3^) );
                                (uParam1^)[GET_PLAYER_ID()] = -8;
                                l_U1274 = 1;
                            }
                        }
                        sub_2744();
                    }
                }
            }
        }
    }
    if (sub_2238())
    {
        sub_26736( uParam1, uParam4 );
        sub_2744();
    }
    if (NOT (IS_FONT_LOADED( 6 )))
    {
        LOAD_TEXT_FONT( 6 );
    }
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    if (NOT l_U1194)
    {
        PAUSE_GAME();
        l_U1194 = 1;
    }
    sub_26947();
    DISABLE_PAUSE_MENU( 1 );
    HIDE_HUD_AND_RADAR_THIS_FRAME();
    if (l_U1190)
    {
        if (NOT IS_SCREEN_FADED_OUT())
        {
            sub_25496( 0 );
        }
        l_U1190 = 0;
        return;
    }
    else if (IS_SCREEN_FADED_OUT())
    {
        sub_28595( 0 );
    }
    if (NOT IS_MOBILE_PHONE_RADIO_ACTIVE())
    {
        l_U1271._fU0 = 18;
        RESTORE_SCRIPT_ARRAY_FROM_SCRATCHPAD( ref l_U1271, 1, 99, 1 );
        CLEAR_SCRIPT_ARRAY_FROM_SCRATCHPAD( 1 );
        SAVE_SCRIPT_ARRAY_IN_SCRATCHPAD( ref l_U1271, 1, 99, 1 );
        if (l_U1271._fU0 != 18)
        {
            SET_MOBILE_PHONE_RADIO_STATE( 1 );
            RETUNE_RADIO_TO_STATION_INDEX( l_U1271._fU0 );
            l_U991[sub_28750( 15 )]._fU20 = l_U1271._fU0;
        }
        else if ((l_U991[sub_28750( 15 )]._fU20) != 18)
        {
            l_U991[sub_28750( 15 )]._fU20 = 18;
        }
    }
    ENABLE_FRONTEND_RADIO();
    if (IS_GAME_IN_CONTROL_OF_MUSIC())
    {
        l_U991[sub_28750( 15 )]._fU24 = 19;
    }
    else
    {
        l_U991[sub_28750( 15 )]._fU24 = 0;
    }
    if (NOT l_U986)
    {
        sub_28934();
        l_U986 = 1;
    }
    if (iParam0 == 10)
    {
        if (NOT l_U987)
        {
            sub_29089();
            l_U987 = 1;
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
        if (l_U991[I]._fU16 == 0)
        {
            l_U991[I]._fU20 = 0;
        }
        else
        {
            J++;
            if (l_U991[I]._fU16 < 12)
            {
                l_U991[I]._fU20 = (uParam2^)[I];
            }
            else if (l_U991[I]._fU16 == 17)
            {
                if (sub_4641() < 3)
                {
                    l_U991[I]._fU24 = 0;
                    l_U991[I]._fU20 = GET_PLAYER_ID();
                }
                else if (l_U991[I]._fU24 == 0)
                {
                    l_U991[I]._fU24 = 16;
                    l_U991[I]._fU20 = GET_PLAYER_ID();
                }
            }
            if (l_U991[I]._fU20 >= l_U991[I]._fU24)
            {
                if (l_U991[I]._fU24 != 0)
                {
                    l_U991[I]._fU20 = l_U991[I]._fU28;
                }
            }
        }
    }
    if (NOT l_U1203)
    {
        if (l_U1193)
        {
            USE_MASK( 1 );
        }
    }
    if (NOT IS_PAUSE_MENU_ACTIVE())
    {
        if (iParam5 != 0)
        {
            sub_29570( iParam5, 1 );
            bVar31 = true;
        }
        else
        {
            l_U1185 = 10000;
        }
        if (NOT l_U1203)
        {
            if (((uParam1^)[GET_PLAYER_ID()] == 0) AND (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() )))
            {
                if (sub_30574())
                {
                    USE_MASK( 0 );
                    l_U1193 = 0;
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    (uParam1^)[GET_PLAYER_ID()] = -3;
                }
                else if ((sub_30775()) AND (sub_30893()))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    ACTIVATE_NETWORK_SETTINGS_MENU();
                }
                else if (sub_31075())
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    DISPLAY_FRONTEND_MAP_BLIPS( 0 );
                    ACTIVATE_FRONTEND();
                }
                else if (sub_31231())
                {
                    if (((l_U991[l_U1179]._fU16 == 17) AND (l_U1160 != l_U991[l_U1179]._fU20)) AND (l_U991[l_U1179]._fU20 != GET_PLAYER_ID()))
                    {
                        l_U1160 = l_U991[l_U1179]._fU20;
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    }
                    else
                    {
                        GET_NETWORK_TIMER( ref l_U1183 );
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
                                l_U501 = 1;
                                (uParam1^)[GET_PLAYER_ID()] = 2;
                            }
                            else
                            {
                                (uParam1^)[GET_PLAYER_ID()] = 2;
                            }
                        }
                    }
                }
                else if ((sub_31675()) AND ((NOT NETWORK_IS_TVT()) || (sub_31813())))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    if (NETWORK_IS_TVT())
                    {
                        (uParam1^)[GET_PLAYER_ID()] = -1;
                    }
                    else
                    {
                        USE_MASK( 0 );
                        l_U1193 = 0;
                        l_U990 = sub_26351( sub_3700() );
                        (uParam1^)[GET_PLAYER_ID()] = -4;
                    }
                }
                else if ((sub_31989()) AND (((NETWORK_GET_NUM_PLAYERS_MET() > 0) AND (N_604003528())) || (((NOT NETWORK_IS_TVT()) AND (NETWORK_GET_FRIEND_COUNT() > 0)) AND (NOT N_604003528()))))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1203 = 1;
                }
                else if (sub_32215())
                {
                    if (sub_32330( ref l_U1179, J, 0 ))
                    {
                        if (NOT sub_10946())
                        {
                            if ((l_U1179 == 0) || ((sub_32898()) AND (l_U1179 < 4)))
                            {
                                l_U991[sub_28750( 16 )]._fU20 = 0;
                            }
                        }
                        if (l_U1179 == (l_U1180 + 6))
                        {
                            l_U1180++;
                        }
                        else if (l_U1179 < l_U1180)
                        {
                            l_U1180 = l_U1179;
                        }
                        else if (l_U1179 > (l_U1180 + 6))
                        {
                            l_U1180 = l_U1179;
                            if (l_U1180 > (J - 6))
                            {
                                l_U1180 = J - 6;
                            }
                        };;;
                    }
                    if (l_U991[l_U1179]._fU16 == 12)
                    {
                        if (sub_33112())
                        {
                            if (sub_33323())
                            {
                                if ((GET_PLAYER_TEAM( sub_5012() )) > -1)
                                {
                                    if (sub_12847())
                                    {
                                        uVar15 = GET_PLAYER_TEAM( sub_5012() );
                                        sub_33587( ref uVar15, 8 );
                                        SET_PLAYER_TEAM( sub_5012(), uVar15 );
                                    }
                                    else if ((GET_PLAYER_TEAM( sub_5012() )) == 0)
                                    {
                                        SET_PLAYER_TEAM( sub_5012(), 1 );
                                    }
                                    else if ((GET_PLAYER_TEAM( sub_5012() )) == 1)
                                    {
                                        SET_PLAYER_TEAM( sub_5012(), 0 );
                                    };;;
                                }
                            }
                            else if (sub_33729())
                            {
                                if (sub_12847())
                                {
                                    uVar15 = GET_PLAYER_TEAM( sub_5012() );
                                    sub_33974( ref uVar15, 8 );
                                    SET_PLAYER_TEAM( sub_5012(), uVar15 );
                                }
                                else if ((GET_PLAYER_TEAM( sub_5012() )) == 0)
                                {
                                    SET_PLAYER_TEAM( sub_5012(), 1 );
                                }
                                else if ((GET_PLAYER_TEAM( sub_5012() )) == 1)
                                {
                                    SET_PLAYER_TEAM( sub_5012(), 0 );
                                };;;
                            }
                        }
                    }
                    else if (l_U991[l_U1179]._fU16 == 17)
                    {
                        if (sub_4641() < 3)
                        {
                            l_U991[l_U1179]._fU24 = 0;
                            l_U991[l_U1179]._fU20 = GET_PLAYER_ID();
                        }
                        else if (l_U991[l_U1179]._fU20 != -1)
                        {
                            if (l_U991[l_U1179]._fU20 != GET_PLAYER_ID())
                            {
                                if (NOT (IS_NETWORK_PLAYER_ACTIVE( l_U991[l_U1179]._fU20 )))
                                {
                                    l_U991[l_U1179]._fU20 = GET_PLAYER_ID();
                                }
                            }
                        }
                        if (sub_33323())
                        {
                            iVar16 = l_U991[l_U1179]._fU20;
                            sub_33974( ref iVar16, 16 );
                            while (NOT (IS_NETWORK_PLAYER_ACTIVE( iVar16 )))
                            {
                                sub_33974( ref iVar16, 16 );
                            }
                            l_U991[l_U1179]._fU20 = iVar16;
                            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
                        }
                        else if (sub_33729())
                        {
                            iVar16 = l_U991[l_U1179]._fU20;
                            sub_33587( ref iVar16, 16 );
                            while (NOT (IS_NETWORK_PLAYER_ACTIVE( iVar16 )))
                            {
                                sub_33587( ref iVar16, 16 );
                            }
                            l_U991[l_U1179]._fU20 = iVar16;
                            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
                        }
                        if (l_U991[l_U1179]._fU20 == GET_PLAYER_ID())
                        {
                            l_U1160 = GET_PLAYER_ID();
                        }
                    }
                    else if ((IS_THIS_MACHINE_THE_SERVER()) || (l_U991[l_U1179]._fU16 >= 12))
                    {
                        if (l_U991[l_U1179]._fU20 < l_U991[l_U1179]._fU24)
                        {
                            if (NOT (sub_34661( l_U1179 )))
                            {
                                if (sub_34756( ref l_U991[l_U1179]._fU20, l_U991[l_U1179]._fU24 ))
                                {
                                    if (l_U991[l_U1179]._fU16 == 15)
                                    {
                                        sub_35134( l_U991[l_U1179]._fU20 );
                                    }
                                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
                                }
                            }
                        }
                    };;;
                }
                else if (J > 6)
                {
                    sub_32330( ref l_U1180, (J - 6) + 1, 0 );
                };;;;;;;;
                if ((uParam1^)[GET_PLAYER_ID()] != -4)
                {
                    sub_35387( 0 );
                    INIT_FRONTEND_HELPER_TEXT();
                    DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
                    if (((l_U991[l_U1179]._fU16 == 17) AND (l_U1160 != l_U991[l_U1179]._fU20)) AND (l_U991[l_U1179]._fU20 != GET_PLAYER_ID()))
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
                    if (sub_30775())
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
                    if (sub_36666( l_U1179 ))
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
                sub_35387( 0 );
                INIT_FRONTEND_HELPER_TEXT();
                DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
                if (sub_30574())
                {
                    (uParam1^)[GET_PLAYER_ID()] = -3;
                }
            }
            else if ((uParam1^)[GET_PLAYER_ID()] == 2)
            {
                l_U991[sub_28750( 16 )]._fU20 = 1;
                sub_35387( 0 );
                if (NOT l_U1190)
                {
                    if (J > 6)
                    {
                        if (sub_32330( ref l_U1180, (J - 6) + 1, 0 ))
                        {
                            l_U1179 = l_U1180;
                        }
                    }
                    GET_NETWORK_TIMER( ref iVar26 );
                    if ((sub_30574()) AND (l_U1183 < (iVar26 + 500)))
                    {
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        l_U991[sub_28750( 16 )]._fU20 = 0;
                        l_U1195 = 1;
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                    else if (((sub_31989()) AND (NETWORK_GET_NUM_PLAYERS_MET() > 0)) AND (N_604003528()))
                    {
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        l_U1203 = 1;
                    }
                    else
                    {
                        sub_29606( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                        GET_FRONTEND_DESIGN_VALUE( 23, ref uVar34, ref fVar35 );
                        GET_FRONTEND_DESIGN_VALUE( 24, ref fVar36, ref fVar33 );
                        GET_HUD_COLOUR( 49, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                        if (NOT (sub_12675( ref bVar28 )))
                        {
                            if (bVar31)
                            {
                                if (NOT bVar32)
                                {
                                    if (bVar28)
                                    {
                                        sub_35829( "NEEDMORETEAMS", uVar34, fVar35, fVar36 + 0.04050000, fVar33, 255, 255, 255, 255, 2 );
                                    }
                                    else
                                    {
                                        sub_35829( "NEEDMOREPLAYERS", uVar34, fVar35, fVar36 + 0.04050000, fVar33, 255, 255, 255, 255, 2 );
                                    }
                                    bVar32 = true;
                                }
                            }
                            else if (bVar28)
                            {
                                sub_35829( "NEEDMORETEAMS", uVar34, fVar35, fVar36, fVar33, 255, 255, 255, 255, 2 );
                            }
                            else
                            {
                                sub_35829( "NEEDMOREPLAYERS", uVar34, fVar35, fVar36, fVar33, 255, 255, 255, 255, 2 );
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
                if (sub_30574())
                {
                    sub_35387( 1 );
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1195 = 1;
                    (uParam1^)[GET_PLAYER_ID()] = 0;
                }
                else if (sub_31231())
                {
                    sub_35398( 1 );
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1195 = 1;
                    (uParam1^)[GET_PLAYER_ID()] = -2;
                }
                else
                {
                    sub_32330( ref l_U990, 14, 0 );
                }
            }
            else if (((uParam1^)[GET_PLAYER_ID()] == -7) || ((uParam1^)[GET_PLAYER_ID()] == -8))
            {
                if (((l_U1273) AND (NOT NETWORK_IS_TVT())) AND (NOT sub_26564()))
                {
                    if (sub_4641() < 3)
                    {
                        l_U991[sub_28750( 17 )]._fU20 = GET_PLAYER_ID();
                        l_U1273 = 0;
                    }
                    else if ((l_U991[sub_28750( 17 )]._fU20) != -1)
                    {
                        if ((l_U991[sub_28750( 17 )]._fU20) != GET_PLAYER_ID())
                        {
                            if (NOT (IS_NETWORK_PLAYER_ACTIVE( l_U991[sub_28750( 17 )]._fU20 )))
                            {
                                l_U991[sub_28750( 17 )]._fU20 = GET_PLAYER_ID();
                            }
                        }
                    }
                    if (sub_30574())
                    {
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        l_U1273 = 0;
                    }
                    else if (sub_33323())
                    {
                        iVar16 = l_U991[sub_28750( 17 )]._fU20;
                        sub_33974( ref iVar16, 16 );
                        while (NOT (IS_NETWORK_PLAYER_ACTIVE( iVar16 )))
                        {
                            sub_33974( ref iVar16, 16 );
                        }
                        l_U991[sub_28750( 17 )]._fU20 = iVar16;
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
                    }
                    else if (sub_33729())
                    {
                        iVar16 = l_U991[sub_28750( 17 )]._fU20;
                        sub_33587( ref iVar16, 16 );
                        while (NOT (IS_NETWORK_PLAYER_ACTIVE( iVar16 )))
                        {
                            sub_33587( ref iVar16, 16 );
                        }
                        l_U991[sub_28750( 17 )]._fU20 = iVar16;
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
                    }
                    else if (sub_31231())
                    {
                        if ((l_U1160 != (l_U991[sub_28750( 17 )]._fU20)) AND ((l_U991[sub_28750( 17 )]._fU20) != GET_PLAYER_ID()))
                        {
                            l_U1160 = l_U991[sub_28750( 17 )]._fU20;
                            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        }
                    };;;;
                    if ((l_U991[sub_28750( 17 )]._fU20) == GET_PLAYER_ID())
                    {
                        l_U1160 = GET_PLAYER_ID();
                    }
                }
                else if (sub_30574())
                {
                    sub_35398( 1 );
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1195 = 1;
                    if (((IS_THIS_MACHINE_THE_SERVER()) AND ((uParam1^)[GET_PLAYER_ID()] == -8)) AND (NOT l_U1274))
                    {
                        (uParam1^)[GET_PLAYER_ID()] = -7;
                    }
                    else
                    {
                        (uParam1^)[GET_PLAYER_ID()] = -6;
                    }
                }
                else if ((((sub_30893()) AND (sub_4641() > 2)) AND (NOT NETWORK_IS_TVT())) AND (NOT sub_26564()))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1273 = 1;
                }
                else if ((IS_THIS_MACHINE_THE_SERVER()) AND (NOT sub_26564()))
                {
                    if ((uParam1^)[GET_PLAYER_ID()] == -7)
                    {
                        if (sub_31231())
                        {
                            if (NOT l_U1274)
                            {
                                if ((NOT (sub_26628( l_U990 ))) || (GET_NUMBER_OF_PLAYERS() <= 4))
                                {
                                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                                    (uParam1^)[GET_PLAYER_ID()] = -8;
                                }
                            }
                        }
                        else if (l_U1274)
                        {
                            (uParam1^)[GET_PLAYER_ID()] = -8;
                        }
                        else if (sub_39159( ref l_U990, 14 ))
                        {
                            if (GET_NUMBER_OF_PLAYERS() > 4)
                            {
                                while (sub_26628( l_U990 ))
                                {
                                    l_U990--;
                                }
                            }
                        }
                        else if (sub_39502( ref l_U990, 14 ))
                        {
                            if (GET_NUMBER_OF_PLAYERS() > 4)
                            {
                                while (sub_26628( l_U990 ))
                                {
                                    l_U990++;
                                }
                            }
                        }
                        (uParam3^) = sub_39844( l_U990 );;;
                    }
                    else if ((uParam1^)[GET_PLAYER_ID()] == -8)
                    {
                        if ((sub_26628( l_U990 )) AND (GET_NUMBER_OF_PLAYERS() > 4))
                        {
                            (uParam1^)[GET_PLAYER_ID()] = -7;
                        }
                    }
                }
                else if (sub_26564())
                {
                    if (sub_31231())
                    {
                        if (NOT NETWORK_LEAVE_GAME_PENDING())
                        {
                            sub_40157( ref uVar38, sub_39844( l_U990 ), -1 );
                            if ((NETWORK_IS_GAME_RANKED()) AND ((sub_39844( l_U990 )) != 16))
                            {
                                uVar38._fU0[1] = 1;
                            }
                            N_1187265313( ref uVar38 );
                            sub_40495();
                        }
                    }
                    else
                    {
                        sub_32330( ref l_U990, 14, 0 );
                    }
                }
                else if ((uParam3^) == -1)
                {
                    l_U990 = sub_26351( sub_3700() );
                }
                else
                {
                    l_U990 = sub_26351( (uParam3^) );
                };;;;;;
                if (GET_HOST_ID() > -1)
                {
                    if ((uParam1^)[GET_HOST_ID()] > -5)
                    {
                        sub_35398( 1 );
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                }
            }
            else if (((((uParam1^)[GET_PLAYER_ID()] == -3) || ((uParam1^)[GET_PLAYER_ID()] == -6)) || ((uParam1^)[GET_PLAYER_ID()] == -2)) || ((uParam1^)[GET_PLAYER_ID()] == -1))
            {
                if (sub_30574())
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1195 = 1;
                    if ((uParam1^)[GET_PLAYER_ID()] == -6)
                    {
                        sub_35398( 1 );
                        (uParam1^)[GET_PLAYER_ID()] = -7;
                    }
                    else if ((uParam1^)[GET_PLAYER_ID()] == -2)
                    {
                        sub_35398( 1 );
                        (uParam1^)[GET_PLAYER_ID()] = -4;
                    }
                    else
                    {
                        sub_35387( 1 );
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                }
                else if (sub_31231())
                {
                    if (NOT NETWORK_LEAVE_GAME_PENDING())
                    {
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        UNPAUSE_GAME();
                        if (NOT IS_SCREEN_FADED_OUT())
                        {
                            sub_25496( 0 );
                        }
                        if ((uParam1^)[GET_PLAYER_ID()] == -1)
                        {
                            if (NETWORK_IS_RENDEZVOUS_HOST())
                            {
                                sub_40981();
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
                                sub_40157( ref uVar38, sub_39844( l_U990 ), -1 );
                                if ((NETWORK_IS_GAME_RANKED()) AND ((sub_39844( l_U990 )) != 16))
                                {
                                    uVar38._fU0[1] = 1;
                                }
                                N_1187265313( ref uVar38 );
                                sub_40495();
                            }
                        }
                        else
                        {
                            sub_41139();
                        }
                    }
                }
                if (((((uParam1^)[GET_PLAYER_ID()] == -3) || ((uParam1^)[GET_PLAYER_ID()] == -6)) || ((uParam1^)[GET_PLAYER_ID()] == -2)) || ((uParam1^)[GET_PLAYER_ID()] == -1))
                {
                    SET_WIDESCREEN_FORMAT( 0 );
                    DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                    SET_WIDESCREEN_FORMAT( 1 );
                    sub_29606( 0, sub_35769(), sub_41284(), 0, 0, 0, 0, 0, 255 );
                    GET_FRONTEND_DESIGN_VALUE( 106, ref uVar34, ref fVar35 );
                    GET_FRONTEND_DESIGN_VALUE( 107, ref fVar36, ref fVar33 );
                    GET_HUD_COLOUR( 49, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                    if ((uParam1^)[GET_PLAYER_ID()] == -1)
                    {
                        sub_35829( "RETURNTOPARTYM", uVar34, fVar35, fVar36, fVar33, iVar17, iVar18, iVar19, 255, 1 );
                    }
                    else if ((uParam1^)[GET_PLAYER_ID()] == -2)
                    {
                        sub_35829( "CHOOSENEWGAME", uVar34, fVar35, fVar36, fVar33, iVar17, iVar18, iVar19, 255, 1 );
                    }
                    else
                    {
                        sub_35829( "WANT_TO_LEAVE", uVar34, fVar35, fVar36, fVar33, iVar17, iVar18, iVar19, 255, 1 );
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
                    if (((IS_THIS_MACHINE_THE_SERVER()) AND (l_U1180 == 0)) AND (l_U1187))
                    {
                        GET_NETWORK_TIMER( ref iVar26 );
                        if (l_U1186 < (iVar26 - 750))
                        {
                            GET_NETWORK_TIMER( ref l_U1186 );
                            sub_41798( ref l_U1188 );
                        }
                    }
                    else
                    {
                        l_U1186 = 0;
                        l_U1188 = 0;
                        l_U1187 = 0;
                    }
                    if (NOT l_U1188)
                    {
                        if (l_U1180 == 0)
                        {
                            DRAW_SPRITE( l_U503[1], fVar37, 0.79100000, 0.02100000, 0.02400000, 180.00000000, 255, 255, 255, 255 );
                        }
                        else if (l_U1180 == (J - 6))
                        {
                            DRAW_SPRITE( l_U503[1], fVar37, 0.79100000, 0.02100000, 0.02400000, 0.00000000, 255, 255, 255, 255 );
                        }
                        else
                        {
                            DRAW_SPRITE( l_U503[2], fVar37, 0.79100000, 0.02100000, 0.02400000, 0.00000000, 255, 255, 255, 255 );
                        }
                    }
                }
            }
        }
    }
    l_U1190 = 0;
    if (sub_2238())
    {
        for ( I = 0; I < 21; I++ )
        {
            if (l_U991[I]._fU16 != 0)
            {
                if (l_U991[I]._fU16 < 12)
                {
                    (uParam2^)[I] = l_U991[I]._fU20;
                }
            }
        }
        sub_2744();
    }
    if (NOT NETWORK_IS_TVT())
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (sub_12847())
            {
                if ((GET_PLAYER_TEAM( sub_5012() )) == -1)
                {
                    SET_PLAYER_TEAM( sub_5012(), sub_42234() );
                    if ((uParam1^)[GET_PLAYER_ID()] == 2)
                    {
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                }
            }
            else if (sub_12802())
            {
                if ((GET_PLAYER_TEAM( sub_5012() )) == -1)
                {
                    SET_PLAYER_TEAM( sub_5012(), sub_8534( 2 ) );
                    if ((uParam1^)[GET_PLAYER_ID()] == 2)
                    {
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                }
                else if (sub_12944() < 2)
                {
                    if ((sub_33175( GET_PLAYER_TEAM( sub_5012() ) )) > 1)
                    {
                        if (sub_42840( GET_PLAYER_ID() ))
                        {
                            SET_PLAYER_TEAM( sub_5012(), sub_8534( 2 ) );
                            if ((uParam1^)[GET_PLAYER_ID()] == 2)
                            {
                                (uParam1^)[GET_PLAYER_ID()] = 0;
                            }
                        }
                    }
                }
            }
            else if (sub_10946())
            {
                if ((GET_PLAYER_TEAM( sub_5012() )) != 0)
                {
                    SET_PLAYER_TEAM( sub_5012(), 0 );
                }
            }
            else if ((GET_PLAYER_TEAM( sub_5012() )) != -1)
            {
                SET_PLAYER_TEAM( sub_5012(), -1 );
                if ((uParam1^)[GET_PLAYER_ID()] == 2)
                {
                    (uParam1^)[GET_PLAYER_ID()] = 0;
                }
            };;;;
        }
    }
    if (((((uParam1^)[GET_PLAYER_ID()] == -3) || ((uParam1^)[GET_PLAYER_ID()] == -6)) || ((uParam1^)[GET_PLAYER_ID()] == -2)) || ((uParam1^)[GET_PLAYER_ID()] == -1))
    {
        sub_43186();
        return;
    }
    else if (IS_PAUSE_MENU_ACTIVE())
    {
        sub_35387( 1 );
        sub_43186();
        return;
    }
    else if (l_U1203)
    {
        if (N_604003528())
        {
            if (sub_43505())
            {
                l_U1203 = 0;
            }
            sub_43186();
            return;
        }
        else if (sub_44770( bVar31, bVar32 ))
        {
            l_U1203 = 0;
        }
        sub_43186();
        return;;
    }
    else if (sub_30775())
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (GET_PLAYERSETTINGS_MODEL_CHOICE() != (sub_47684( sub_5337() )))
            {
                if (sub_47726( GET_PLAYERSETTINGS_MODEL_CHOICE() ))
                {
                    CHANGE_PLAYER_MODEL( sub_5012(), GET_PLAYERSETTINGS_MODEL_CHOICE() );
                    SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE( sub_5012() );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( GET_PLAYERSETTINGS_MODEL_CHOICE() );
                    sub_47829( GET_PLAYER_ID(), 0 );
                }
            }
            else if (HAS_GAMER_CHANGED_NETWORK_MODEL_SETTINGS())
            {
                SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE( sub_5012() );
            }
        }
    };;;;
    if ((sub_26564()) || (NOT N_604003528()))
    {
        if (NOT bVar31)
        {
            if (((uParam1^)[GET_PLAYER_ID()] == 0) || ((uParam1^)[GET_PLAYER_ID()] == 2))
            {
                iVar16 = GET_LOCAL_PLAYER_MP_CASH();
                if (iVar16 > 0)
                {
                    SET_WIDESCREEN_FORMAT( 2 );
                    sub_29606( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                    GET_FRONTEND_DESIGN_VALUE( 23, ref uVar34, ref fVar35 );
                    GET_FRONTEND_DESIGN_VALUE( 24, ref fVar36, ref fVar33 );
                    GET_HUD_COLOUR( 49, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                    sub_29903( "CASH", uVar34, fVar35, fVar36, fVar33, 255, 255, 255, 255, 2, iVar16 );
                    SET_WIDESCREEN_FORMAT( 3 );
                }
            }
        }
    }
    if ((uParam1^)[GET_PLAYER_ID()] == -4)
    {
        sub_35398( 1 );
        sub_29606( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
        sub_35829( "NEWGAME", sub_35769(), 0.08500000, sub_48401( 113 ), sub_48434( 113 ), 255, 255, 255, 255, 2 );
        INIT_FRONTEND_HELPER_TEXT();
        DRAW_FRONTEND_HELPER_TEXT( "CANCEL", "INPUT_F_CANCEL", 0 );
        DRAW_FRONTEND_HELPER_TEXT( "CONFIRM", "INPUT_F_ACCEPT", 0 );
        DRAW_FRONTEND_HELPER_TEXT( "MODE", "PAD_DPAD_UPDOWN", 0 );
        sub_48593( 0 );
        SET_WIDESCREEN_FORMAT( 2 );
        if (GET_IS_WIDESCREEN())
        {
            sub_29606( 0, sub_35769(), sub_41284() * 1.20000000, 0, 0, 0, 0, 0, 255 );
        }
        else
        {
            sub_29606( 0, sub_35769(), sub_41284(), 0, 0, 0, 0, 0, 255 );
        }
        GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
        if (GET_IS_WIDESCREEN())
        {
            sub_35829( "CHOOSENEWGAME", sub_35769() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
        }
        else
        {
            sub_35829( "CHOOSENEWGAME", sub_35769() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
        }
    }
    else if (((uParam1^)[GET_PLAYER_ID()] == -7) || ((uParam1^)[GET_PLAYER_ID()] == -8))
    {
        sub_35398( 1 );
        sub_29606( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
        if (sub_26564())
        {
            sub_35829( "NEXTGAME", sub_35769(), 0.11900000, sub_48401( 113 ), sub_48434( 113 ), 255, 255, 255, 255, 2 );
        }
        else
        {
            sub_35829( "NEXTGAME", sub_35769(), 0.08500000, sub_48401( 113 ), sub_48434( 113 ), 255, 255, 255, 255, 2 );
        }
        SET_WIDESCREEN_FORMAT( 3 );
        INIT_FRONTEND_HELPER_TEXT();
        if (((l_U1273) AND (NOT NETWORK_IS_TVT())) AND (NOT sub_26564()))
        {
            if ((l_U1160 != (l_U991[sub_28750( 17 )]._fU20)) AND ((l_U991[sub_28750( 17 )]._fU20) != GET_PLAYER_ID()))
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
            DRAW_SPRITE( l_U503[0], (fVar37 + fVar33) - 0.01300000, 0.76300000 + 0.01300000, 0.01400000 * -1, 0.02000000, 0.00000000, 255, 255, 255, 255 );
            sub_35829( ref l_U991[sub_28750( 17 )]._fU0, fVar37 - fVar33, 0.76300000, 0.31500000, 0.43000000, 255, 255, 255, 255, 3 );
            sub_29606( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
            if ((((l_U991[sub_28750( 17 )]._fU20) > -1) AND ((l_U991[sub_28750( 17 )]._fU20) != GET_PLAYER_ID())) AND (IS_NETWORK_PLAYER_ACTIVE( l_U991[sub_28750( 17 )]._fU20 )))
            {
                sub_50139( sub_8097( l_U991[sub_28750( 17 )]._fU20 ), ref iVar21, ref iVar22, ref iVar23 );
                if (l_U6)
                {
                    if (N_604003528())
                    {
                        fVar36 = sub_44184( fVar37 + fVar33, 0.76300000, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, "WWWWWWWWWWWWWWW" );
                    }
                    else
                    {
                        fVar36 = sub_44184( fVar37 + fVar33, 0.76300000, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, "WWWWWWWWWWWWWWWW" );
                    }
                }
                else
                {
                    SET_TEXT_SCALE( 0.31500000, 0.43000000 );
                    SET_TEXT_USE_UNDERSCORE( 1 );
                    fVar49 = GET_STRING_WIDTH_WITH_STRING( "STRING", GET_PLAYER_NAME( sub_8097( l_U991[sub_28750( 17 )]._fU20 ) ) );
                    fVar50 = sub_41284() - (fVar37 + fVar33);
                    if (fVar49 <= fVar50)
                    {
                        fVar36 = sub_44184( fVar37 + fVar33, 0.76300000, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_8097( l_U991[sub_28750( 17 )]._fU20 ) ) );
                    }
                    else
                    {
                        fVar36 = sub_44184( fVar37 + fVar33, 0.76300000, (fVar50 * 0.31500000) / fVar49, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_8097( l_U991[sub_28750( 17 )]._fU20 ) ) );
                    }
                    SET_TEXT_USE_UNDERSCORE( 0 );
                }
            }
            else
            {
                fVar36 = sub_35829( "NONE", fVar37 + fVar33, 0.76300000, 0.31500000, 0.43000000, 255, 255, 255, 255, 2 );
            }
            DRAW_SPRITE( l_U503[0], ((fVar37 + fVar33) + 0.01300000) + fVar36, 0.76300000 + 0.01300000, 0.01400000, 0.02000000, 0.00000000, 255, 255, 255, 255 );
        }
        else if (sub_26564())
        {
            DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
            DRAW_FRONTEND_HELPER_TEXT( "CONFIRM", "INPUT_F_ACCEPT", 0 );
            sub_48593( 0 );
        }
        else if ((IS_THIS_MACHINE_THE_SERVER()) AND ((uParam1^)[GET_PLAYER_ID()] == -7))
        {
            DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
            DRAW_FRONTEND_HELPER_TEXT( "CONFIRM", "INPUT_F_ACCEPT", 0 );
            if ((sub_4641() > 2) AND (NOT NETWORK_IS_TVT()))
            {
                DRAW_FRONTEND_HELPER_TEXT( "KICK_PLAYERU", "INPUT_F_Y", 0 );
            }
            DRAW_FRONTEND_HELPER_TEXT( "MODE", "PAD_DPAD_UPDOWN", 0 );
        }
        else if ((IS_THIS_MACHINE_THE_SERVER()) AND (NOT l_U1274))
        {
            DRAW_FRONTEND_HELPER_TEXT( "CANCEL", "INPUT_F_CANCEL", 0 );
            if ((sub_4641() > 2) AND (NOT NETWORK_IS_TVT()))
            {
                DRAW_FRONTEND_HELPER_TEXT( "KICK_PLAYERU", "INPUT_F_Y", 0 );
            }
        }
        else
        {
            DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
            if ((sub_4641() > 2) AND (NOT NETWORK_IS_TVT()))
            {
                DRAW_FRONTEND_HELPER_TEXT( "KICK_PLAYERU", "INPUT_F_Y", 0 );
            }
        };;;;
        if (NOT sub_26564())
        {
            sub_48593( 1 );
        }
        SET_WIDESCREEN_FORMAT( 2 );
        if (NOT sub_26564())
        {
            if (GET_IS_WIDESCREEN())
            {
                sub_29606( 0, sub_35769(), sub_41284() * 1.20000000, 0, 0, 0, 0, 0, 255 );
                GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                sub_35829( "CHOOSNEXTGAME", sub_35769() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
            }
            else
            {
                sub_29606( 0, sub_35769(), sub_41284(), 0, 0, 0, 0, 0, 255 );
                GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                sub_35829( "CHOOSNEXTGAME", sub_35769() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
            }
        }
        if (NOT sub_26564())
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
                if (sub_26628( l_U990 ))
                {
                    if (GET_NUMBER_OF_PLAYERS() > 4)
                    {
                        (uParam1^)[GET_PLAYER_ID()] = -7;
                        bVar29 = false;
                    }
                }
                else if ((sub_39844( l_U990 )) == sub_3700())
                {
                    if ((sub_39844( l_U990 )) != 10)
                    {
                        if (l_U1178 < 10)
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
                            sub_25496( 0 );
                        }
                        sub_25569( sub_39844( l_U990 ) );
                    }
                }
            }
        }
    }
    else
    {
        SET_WIDESCREEN_FORMAT( 2 );
        StrCopy( ref cVar8, "CP_DESCRP_", 16 );
        ConcatString(ref cVar8, sub_3700(), 16);
        if (GET_IS_WIDESCREEN())
        {
            sub_29606( 0, sub_35769(), sub_41284() * 1.20000000, 0, 0, 0, 0, 0, 255 );
            GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
            sub_35829( ref cVar8, sub_35769() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
        }
        else
        {
            sub_29606( 0, sub_35769(), sub_41284(), 0, 0, 0, 0, 0, 255 );
            GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
            sub_35829( ref cVar8, sub_35769() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
        }
        SET_WIDESCREEN_FORMAT( 3 );
        if (NOT l_U1193)
        {
            if ((l_U991[sub_28750( 16 )]._fU20) == 1)
            {
                sub_52181( 0 );
            }
            else if (sub_52520( ref I ))
            {
                if (sub_52616( ref l_U991[I]._fU0, l_U991[I]._fU24 ))
                {
                    if (l_U1195)
                    {
                        l_U1195 = 0;
                    }
                    else if (GET_IS_WIDESCREEN())
                    {
                        DRAW_SPRITE( l_U543[l_U991[I]._fU20], 0.68500000, 0.38100000, 0.52800000, 0.37700000, 0.00000000, 255, 255, 255, 255 );
                    }
                    else
                    {
                        DRAW_SPRITE( l_U543[l_U991[I]._fU20], 0.70900000, 0.38100000, 0.52800000, 0.37700000, 0.00000000, 255, 255, 255, 255 );
                    }
                }
                else if (l_U1195)
                {
                    l_U1195 = 0;
                }
                else if (GET_IS_WIDESCREEN())
                {
                    DRAW_SPRITE( l_U503[35], 0.68500000, 0.38100000, 0.52800000, 0.37700000, 0.00000000, 255, 255, 255, 255 );
                }
                else
                {
                    DRAW_SPRITE( l_U503[35], 0.70900000, 0.38100000, 0.52800000, 0.37700000, 0.00000000, 255, 255, 255, 255 );
                };;;
            }
            else if (l_U1195)
            {
                l_U1195 = 0;
            }
            else if (GET_IS_WIDESCREEN())
            {
                DRAW_SPRITE( l_U503[35], 0.68500000, 0.38100000, 0.52800000, 0.37700000, 0.00000000, 255, 255, 255, 255 );
            }
            else
            {
                DRAW_SPRITE( l_U503[35], 0.70900000, 0.38100000, 0.52800000, 0.37700000, 0.00000000, 255, 255, 255, 255 );
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
            DRAW_RECT( 0.50000000, sub_48401( 0 ), 1.00000000, 0.00200000, 180, 180, 180, 255 );
        }
        else
        {
            DRAW_RECT( 0.50000000, sub_48401( 0 ), 1.00000000, 0.00400000, 180, 180, 180, 255 );
        }
        SET_WIDESCREEN_FORMAT( 3 );
        fVar35 = 0.57800000;
        iVar25 = l_U1180;
        iVar24 = 6;
        for ( I = iVar25; I <= ((iVar25 + iVar24) - 1); I++ )
        {
            if (l_U991[I]._fU16 != 0)
            {
                bVar27 = false;
                iVar17 = 255;
                iVar18 = 255;
                iVar19 = 255;
                sub_29606( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                if (sub_32215())
                {
                    fVar33 = 0.01300000;
                    if ((uParam1^)[GET_PLAYER_ID()] == 0)
                    {
                        bVar27 = sub_36666( I );
                        if (NOT (sub_34661( I )))
                        {
                            if (bVar27)
                            {
                                if (l_U1179 == I)
                                {
                                    DRAW_SPRITE( l_U503[0], (fVar37 + fVar33) - 0.01300000, fVar35 + 0.01300000, 0.01400000 * -1, 0.02000000, 0.00000000, 255, 255, 255, 255 );
                                }
                                else
                                {
                                    GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref J );
                                }
                            }
                            else if (l_U1179 != I)
                            {
                                iVar17 = 60;
                                iVar18 = 60;
                                iVar19 = 60;
                            }
                        }
                        else if (l_U1179 != I)
                        {
                            iVar17 = 60;
                            iVar18 = 60;
                            iVar19 = 60;
                        }
                    }
                    sub_35829( ref l_U991[I]._fU0, fVar37 - fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 3 );
                }
                else
                {
                    fVar33 = 0.00800000;
                    sub_35829( ref l_U991[I]._fU0, fVar37 - fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 3 );
                }
                sub_29606( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                switch (l_U991[I]._fU16)
                {
                    case 1:
                    case 8:
                    if ((bVar27) || (l_U991[I]._fU24 > 0))
                    {
                        cVar8 = {l_U991[I]._fU0};
                        ConcatString(ref cVar8, l_U991[I]._fU20, 16);
                        fVar36 = sub_35829( ref cVar8, fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    else
                    {
                        fVar36 = sub_35829( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 2:
                    if (l_U991[I]._fU20 < 2147483647)
                    {
                        fVar36 = sub_54536( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, l_U991[I]._fU20, 1065353216 );
                    }
                    else
                    {
                        fVar36 = sub_44184( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, "-" );
                    }
                    break;
                    case 3:
                    fVar36 = sub_30228( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, l_U991[I]._fU20 );
                    break;
                    case 11:
                    if ((bVar27) || (l_U991[I]._fU24 > 0))
                    {
                        if (l_U991[I]._fU20 == 0)
                        {
                            fVar36 = sub_35829( "RANDOM", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                        else
                        {
                            fVar36 = sub_30228( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, l_U991[I]._fU20 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_35829( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 13:
                    if ((bVar27) || (l_U991[I]._fU24 > 0))
                    {
                        ;
                    }
                    else
                    {
                        fVar36 = sub_35829( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 4:
                    case 14:
                    if ((bVar27) || (l_U991[I]._fU24 > 0))
                    {
                        fVar36 = sub_56567( "NUM_OUTOF_NUM", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, l_U991[I]._fU20 + 1, l_U991[I]._fU24 );
                    }
                    else
                    {
                        fVar36 = sub_35829( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 15:
                    if (l_U991[I]._fU20 > -1)
                    {
                        cVar8 = {l_U991[I]._fU0};
                        ConcatString(ref cVar8, l_U991[I]._fU20, 16);
                        fVar36 = sub_35829( ref cVar8, fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    else
                    {
                        fVar36 = sub_35829( "OFF", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 5:
                    case 7:
                    if ((bVar27) || (l_U991[I]._fU24 > 0))
                    {
                        if (l_U991[I]._fU20 > 0)
                        {
                            fVar36 = sub_35829( "YES", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                        else
                        {
                            fVar36 = sub_35829( "NO", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_35829( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 6:
                    case 16:
                    if ((bVar27) || (l_U991[I]._fU24 > 0))
                    {
                        if (l_U991[I]._fU20 > 0)
                        {
                            fVar36 = sub_35829( "ON", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                        else
                        {
                            fVar36 = sub_35829( "OFF", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_35829( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 9:
                    case 10:
                    if (sub_57384())
                    {
                        if (l_U991[I]._fU20 > 0)
                        {
                            fVar36 = sub_35829( "ON", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                        else
                        {
                            fVar36 = sub_35829( "OFF", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_35829( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 12:
                    if ((bVar27) || (l_U991[I]._fU24 > 0))
                    {
                        fVar36 = sub_30228( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, sub_57715() );
                    }
                    else if ((GET_PLAYER_TEAM( sub_5012() )) == -1)
                    {
                        fVar36 = sub_35829( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    else
                    {
                        fVar36 = sub_30228( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, sub_57715() );
                    }
                    break;
                    case 17:
                    if ((bVar27) || (l_U991[I]._fU24 > 0))
                    {
                        if (((l_U991[I]._fU20 > -1) AND (l_U991[I]._fU20 != GET_PLAYER_ID())) AND (IS_NETWORK_PLAYER_ACTIVE( l_U991[I]._fU20 )))
                        {
                            if (l_U1179 == I)
                            {
                                sub_50139( sub_8097( l_U991[I]._fU20 ), ref iVar21, ref iVar22, ref iVar23 );
                            }
                            else
                            {
                                iVar21 = iVar17;
                                iVar22 = iVar18;
                                iVar23 = iVar19;
                            }
                            if (l_U6)
                            {
                                if (N_604003528())
                                {
                                    fVar36 = sub_44184( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, "WWWWWWWWWWWWWWW" );
                                }
                                else
                                {
                                    fVar36 = sub_44184( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, "WWWWWWWWWWWWWWWW" );
                                }
                            }
                            else
                            {
                                SET_TEXT_SCALE( 0.31500000, 0.43000000 );
                                SET_TEXT_USE_UNDERSCORE( 1 );
                                fVar49 = GET_STRING_WIDTH_WITH_STRING( "STRING", GET_PLAYER_NAME( sub_8097( l_U991[I]._fU20 ) ) );
                                if (GET_IS_WIDESCREEN())
                                {
                                    if (fVar49 <= 0.20300000)
                                    {
                                        fVar36 = sub_44184( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_8097( l_U991[I]._fU20 ) ) );
                                    }
                                    else
                                    {
                                        fVar36 = sub_44184( fVar37 + fVar33, fVar35, 0.06394500 / fVar49, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_8097( l_U991[I]._fU20 ) ) );
                                    }
                                }
                                else if (fVar49 <= 0.18900000)
                                {
                                    fVar36 = sub_44184( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_8097( l_U991[I]._fU20 ) ) );
                                }
                                else
                                {
                                    fVar36 = sub_44184( fVar37 + fVar33, fVar35, 0.05953500 / fVar49, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_8097( l_U991[I]._fU20 ) ) );
                                }
                                SET_TEXT_USE_UNDERSCORE( 0 );
                            }
                        }
                        else
                        {
                            fVar36 = sub_35829( "NONE", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_35829( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                }
                if ((l_U1179 == I) AND ((uParam1^)[GET_PLAYER_ID()] == 0))
                {
                    if (bVar27)
                    {
                        if (NOT (sub_34661( l_U1179 )))
                        {
                            DRAW_SPRITE( l_U503[0], ((fVar37 + fVar33) + 0.01300000) + fVar36, fVar35 + 0.01300000, 0.01400000, 0.02000000, 0.00000000, 255, 255, 255, 255 );
                        }
                    }
                }
                fVar35 += 0.03200000;
            }
        }
    }
    sub_43186();
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
                    DRAW_RECT( ((0.20800000 + sub_35769()) + 0.00900000) + sub_59205(), 0.04900000 + fVar35, 0.42900000, 0.03800000, iVar17, iVar18, iVar19, 45 );
                }
                else
                {
                    DRAW_RECT( ((0.17900000 + sub_35769()) + 0.00900000) + sub_59205(), 0.04900000 + fVar35, 0.37200000, 0.03700000, iVar17, iVar18, iVar19, 45 );
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
            if ((sub_33175( J )) > 0)
            {
                iVar14++;
                sub_29606( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                GET_TEAM_RGB_COLOUR( J, ref iVar17, ref iVar18, ref iVar19 );
                if (GET_IS_WIDESCREEN())
                {
                    sub_30228( sub_35769() + 0.00900000, fVar35 + 0.03200000, 0.38000000, 0.55500000, iVar17, iVar18, iVar19, 255, 1, iVar14 );
                }
                else
                {
                    sub_30228( sub_35769() + 0.00900000, fVar35 + 0.03100000, 0.38000000, 0.55500000, iVar17, iVar18, iVar19, 255, 1, iVar14 );
                }
                for ( I = 0; I < 16; I++ )
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( l_U566[0]._fU24[I] ))
                    {
                        if ((GET_PLAYER_TEAM( sub_8097( l_U566[0]._fU24[I] ) )) == J)
                        {
                            if (GET_IS_WIDESCREEN())
                            {
                                sub_59777( l_U566[0]._fU24[I], ref iVar51, (sub_35769() + 0.00900000) + sub_59205(), ref fVar35, 0.35000000, 0.47750000, 0.03600000, iParam0, 0 );
                            }
                            else
                            {
                                sub_59777( l_U566[0]._fU24[I], ref iVar51, (sub_35769() + 0.00900000) + sub_59205(), ref fVar35, 0.32500000, 0.43500000, 0.03600000, iParam0, 0 );
                            }
                            sub_63603( l_U566[0]._fU24[I], (((uParam1^)[l_U566[0]._fU24[I]] == 2) || (((NOT sub_26564()) AND ((uParam1^)[l_U566[0]._fU24[I]] == -7)) AND (GET_HOST_ID() != l_U566[0]._fU24[I]))) || (((uParam1^)[l_U566[0]._fU24[I]] == -8) AND (GET_HOST_ID() == l_U566[0]._fU24[I])), ((sub_35769() + 0.00900000) + sub_59205()) + fVar36, fVar35 );
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
                    DRAW_RECT( ((0.20800000 + sub_35769()) + 0.00900000) + -0.00900000, 0.04900000 + fVar35, 0.42900000, 0.03800000, iVar17, iVar18, iVar19, 45 );
                }
                else
                {
                    DRAW_RECT( ((0.17900000 + sub_35769()) + 0.00900000) + -0.00900000, 0.04900000 + fVar35, 0.37200000, 0.03800000, iVar17, iVar18, iVar19, 45 );
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
            if (IS_NETWORK_PLAYER_ACTIVE( l_U566[0]._fU24[I] ))
            {
                if (((GET_PLAYER_TEAM( sub_8097( l_U566[0]._fU24[I] ) )) == -1) || (sub_10946()))
                {
                    if (GET_IS_WIDESCREEN())
                    {
                        sub_59777( l_U566[0]._fU24[I], ref iVar51, (sub_35769() + 0.00900000) + -0.00900000, ref fVar35, 0.35000000, 0.47750000, 0.03600000, iParam0, ((uParam1^)[GET_PLAYER_ID()] == 0) || ((uParam1^)[GET_PLAYER_ID()] == 2) );
                    }
                    else
                    {
                        sub_59777( l_U566[0]._fU24[I], ref iVar51, (sub_35769() + 0.00900000) + -0.00900000, ref fVar35, 0.32500000, 0.43500000, 0.03600000, iParam0, ((uParam1^)[GET_PLAYER_ID()] == 0) || ((uParam1^)[GET_PLAYER_ID()] == 2) );
                    }
                    sub_63603( l_U566[0]._fU24[I], (((uParam1^)[l_U566[0]._fU24[I]] == 2) || (((NOT sub_26564()) AND ((uParam1^)[l_U566[0]._fU24[I]] == -7)) AND (GET_HOST_ID() != l_U566[0]._fU24[I]))) || (((uParam1^)[l_U566[0]._fU24[I]] == -8) AND (GET_HOST_ID() == l_U566[0]._fU24[I])), ((sub_35769() + 0.00900000) + -0.00900000) + fVar36, fVar35 );
                }
            }
        }
    }
    return;
}

void sub_26172()
{
    if (DOES_CAM_EXIST( l_U1246 ))
    {
        DESTROY_CAM( l_U1246 );
    }
    return;
}

int sub_26351(unknown uParam0)
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

void sub_26564()
{
    return NETWORK_IS_GAME_RANKED();
}

int sub_26628(int iParam0)
{
    if (((iParam0 == 10) || (iParam0 == 11)) || (iParam0 == 12))
    {
        return 1;
    }
    return 0;
}

void sub_26736(unknown uParam0, unknown uParam1)
{
    int I;
    int iVar5;
    int iVar6;

    if (sub_26564())
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

int sub_26947()
{
    if (l_U500)
    {
        return 1;
    }
    l_U503[0] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_ARROW_RIGHT" );
    l_U503[1] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_ARROW_UP" );
    l_U503[2] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_ARROW_UPDOWN" );
    l_U503[3] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_BESTLAP" );
    l_U503[4] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_CAR_STOLEN" );
    l_U503[5] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_CRIMINAL" );
    l_U503[6] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_DEATHS" );
    l_U503[7] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_HEADSET_ON1" );
    l_U503[8] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_HEADSET_ON2" );
    l_U503[9] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_HOLDINGSTASH" );
    l_U503[10] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_KICK_PLAYER" );
    l_U503[11] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_KILLS" );
    l_U503[12] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_NOTCONNECTED" );
    l_U503[13] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_PLAYER" );
    l_U503[14] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_POSITIONS" );
    l_U503[15] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_RANKING" );
    l_U503[16] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_SCORE" );
    l_U503[17] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_0" );
    l_U503[18] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_1" );
    l_U503[19] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_2" );
    l_U503[20] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_3" );
    l_U503[21] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_4" );
    l_U503[22] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_5" );
    l_U503[23] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_6" );
    l_U503[24] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_7" );
    l_U503[25] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_8" );
    l_U503[26] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_9" );
    l_U503[27] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_10" );
    l_U503[28] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_TASKS_COMPLETED" );
    l_U503[29] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_TEAM_KILL" );
    l_U503[30] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_TERRITORY" );
    l_U503[31] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_TOTALTIME" );
    l_U503[32] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_VIP" );
    l_U503[33] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_GTA" );
    l_U503[34] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_INVITE" );
    l_U503[35] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "MAP_LOBBY" );
    l_U500 = 1;
    return 1;
}

void sub_28595(unknown uParam0)
{
    SET_SCREEN_FADE( sub_25505(), 0, 0, 1, 0, 0, 0, 255, uParam0, 1.00000000, 1.00000000 );
    return;
}

int sub_28750(int iParam0)
{
    int Result;

    for ( Result = 0; Result < 21; Result++ )
    {
        if (l_U991[Result]._fU16 == iParam0)
        {
            return Result;
        }
    }
    return 20;
}

void sub_28934()
{
    int I;
    int J;

    for ( J = 0; J < 7; J++ )
    {
        for ( I = 0; I < 16; I++ )
        {
            l_U566[J]._fU24[I] = 0;
        }
    }
    for ( I = 0; I < 16; I++ )
    {
        l_U908[I] = I;
        l_U566[0]._fU24[I] = I;
    }
    return;
}

void sub_29089()
{
    int I;

    for ( I = 0; I < 8; I++ )
    {
        l_U925[I] = I;
        l_U934[I] = I;
        l_U943[I] = 0;
    }
    return;
}

void sub_29570(int iParam0, boolean bParam1)
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
    sub_29606( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    GET_FRONTEND_DESIGN_VALUE( 23, ref uVar9, ref uVar10 );
    GET_FRONTEND_DESIGN_VALUE( 24, ref uVar11, ref uVar12 );
    GET_HUD_COLOUR( 49, ref uVar5, ref uVar6, ref uVar7, ref uVar8 );
    GET_NETWORK_TIMER( ref iVar4 );
    if (((iParam0 + 10000) - iVar4) > 0)
    {
        if (bParam1)
        {
            sub_29903( "STARTING_IN", uVar9, uVar10, uVar11, uVar12, 255, 255, 255, 255, 2, (((iParam0 + 10000) - iVar4) / 1000) + 1 );
        }
        else
        {
            sub_30228( uVar9, uVar10, uVar11, uVar12, 255, 255, 255, 255, 2, (((iParam0 + 10000) - iVar4) / 1000) + 1 );
        }
        if ((((iParam0 + 10000) - iVar4) + 1000) <= l_U1185)
        {
            PLAY_AUDIO_EVENT( "FRONTEND_OTHER_COUNTDOWN" );
            l_U1185 -= 1000;
        }
    }
    else if (bParam1)
    {
        sub_29903( "STARTING_IN", uVar9, uVar10, uVar11, uVar12, 255, 255, 255, 255, 2, 1 );
    }
    else
    {
        sub_30228( uVar9, uVar10, uVar11, uVar12, 255, 255, 255, 255, 2, 1 );
    }
    SET_WIDESCREEN_FORMAT( 3 );
    return;
}

void sub_29606(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
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

void sub_29903(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_29943( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_NUMBER( uParam0, uParam10 );
    DISPLAY_TEXT_WITH_NUMBER( uParam1, uParam2, uParam0, uParam10 );
    return Result;
}

void sub_29943(unknown uParam0, unknown uParam1)
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

void sub_30228(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam4, uParam5, uParam6, uParam7 );
    SET_TEXT_SCALE( uParam2, uParam3 );
    sub_29943( uParam8, ref uParam0 );
    Result = GET_STRING_WIDTH_WITH_NUMBER( "NUMBER", uParam9 );
    DISPLAY_TEXT_WITH_NUMBER( uParam0, uParam1, "NUMBER", uParam9 );
    return Result;
}

int sub_30574()
{
    if (IS_CONTROL_PRESSED( 2, 78 ))
    {
        if (l_U1191)
        {
            l_U1191 = 0;
            return 1;
        }
    }
    else if (((((NOT (IS_CONTROL_PRESSED( 2, 77 ))) AND (NOT (IS_CONTROL_PRESSED( 2, 79 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 80 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 12 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 13 ))))
    {
        l_U1191 = 1;
    }
    return 0;
}

int sub_30775()
{
    unknown uVar2;

    uVar2 = sub_3700();
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

int sub_30893()
{
    if (IS_CONTROL_PRESSED( 2, 80 ))
    {
        if (l_U1191)
        {
            l_U1191 = 0;
            return 1;
        }
    }
    else if (((((NOT (IS_CONTROL_PRESSED( 2, 77 ))) AND (NOT (IS_CONTROL_PRESSED( 2, 79 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 78 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 12 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 13 ))))
    {
        l_U1191 = 1;
    }
    return 0;
}

int sub_31075()
{
    if (IS_BUTTON_PRESSED( 0, 12 ))
    {
        l_U1192 = 1;
    }
    else if (l_U1192)
    {
        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
        l_U1192 = 0;
        return 1;
    }
    return 0;
}

int sub_31231()
{
    if (IS_CONTROL_PRESSED( 2, 77 ))
    {
        if (l_U1191)
        {
            l_U1191 = 0;
            return 1;
        }
    }
    else if (((((NOT (IS_CONTROL_PRESSED( 2, 79 ))) AND (NOT (IS_CONTROL_PRESSED( 2, 78 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 80 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 12 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 13 ))))
    {
        l_U1191 = 1;
    }
    return 0;
}

int sub_31675()
{
    if (IS_BUTTON_PRESSED( 0, 13 ))
    {
        if (l_U1191)
        {
            l_U1191 = 0;
            return 1;
        }
    }
    else if (((((NOT (IS_CONTROL_PRESSED( 2, 79 ))) AND (NOT (IS_CONTROL_PRESSED( 2, 78 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 80 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 77 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 12 ))))
    {
        l_U1191 = 1;
    }
    return 0;
}

int sub_31813()
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

int sub_31989()
{
    if (IS_CONTROL_PRESSED( 2, 79 ))
    {
        if (l_U1191)
        {
            l_U1191 = 0;
            return 1;
        }
    }
    else if (((((NOT (IS_CONTROL_PRESSED( 2, 77 ))) AND (NOT (IS_CONTROL_PRESSED( 2, 78 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 80 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 12 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 13 ))))
    {
        l_U1191 = 1;
    }
    return 0;
}

int sub_32215()
{
    int I;

    for ( I = 0; I < 21; I++ )
    {
        if (l_U991[I]._fU16 != 0)
        {
            if (l_U991[I]._fU16 < 12)
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

int sub_32330(unknown uParam0, int iParam1, boolean bParam2)
{
    int iVar5;
    int iVar6;
    int iVar7;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar6, ref iVar7, ref iVar5, ref iVar5 );
    GET_NETWORK_TIMER( ref iVar5 );
    if ((IS_BUTTON_PRESSED( 0, 8 )) || (iVar7 < 65436))
    {
        if ((l_U1189) || (iVar5 > (l_U1181 + 150)))
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
            l_U1181 = iVar5;
            l_U1189 = 0;
            return 1;
        }
    }
    if ((IS_BUTTON_PRESSED( 0, 9 )) || (iVar7 > 100))
    {
        if ((l_U1189) || (iVar5 > (l_U1181 + 150)))
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
            l_U1181 = iVar5;
            l_U1189 = 0;
            return 1;
        }
    }
    if (NOT l_U1189)
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
                                l_U1189 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_32898()
{
    int iVar2;

    iVar2 = sub_3700();
    if ((iVar2 == 6) || (iVar2 == 7))
    {
        return 1;
    }
    return 0;
}

int sub_33112()
{
    if (NOT NETWORK_IS_TVT())
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (sub_12802())
            {
                if ((sub_33175( GET_PLAYER_TEAM( sub_5012() ) )) == 1)
                {
                    return 0;
                }
                return 1;
            }
            else if (sub_12847())
            {
                if (sub_4641() == 1)
                {
                    return 0;
                }
                return 1;
            }
        }
    }
    return 0;
}

void sub_33175(int iParam0)
{
    int I;
    int Result;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if ((GET_PLAYER_TEAM( sub_8097( I ) )) == iParam0)
            {
                Result++;
            }
        }
    }
    return Result;
}

int sub_33323()
{
    int iVar2;
    int iVar3;
    int iVar4;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar3, ref iVar4, ref iVar2, ref iVar2 );
    GET_NETWORK_TIMER( ref iVar2 );
    if ((IS_BUTTON_PRESSED( 0, 10 )) || (iVar3 < 65436))
    {
        if ((l_U1189) || (iVar2 > (l_U1181 + 300)))
        {
            l_U1181 = iVar2;
            l_U1189 = 0;
            return 1;
        }
    }
    if (NOT l_U1189)
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
                                l_U1189 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_33587(unknown uParam0, int iParam1)
{
    (uParam0^)--;
    if ((uParam0^) < 0)
    {
        (uParam0^) = iParam1 - 1;
        return 1;
    }
    return 0;
}

int sub_33729()
{
    int iVar2;
    int iVar3;
    int iVar4;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar3, ref iVar4, ref iVar2, ref iVar2 );
    GET_NETWORK_TIMER( ref iVar2 );
    if ((IS_BUTTON_PRESSED( 0, 11 )) || (iVar3 > 100))
    {
        if ((l_U1189) || (iVar2 > (l_U1181 + 300)))
        {
            l_U1181 = iVar2;
            l_U1189 = 0;
            return 1;
        }
    }
    if (NOT l_U1189)
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
                                l_U1189 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_33974(unknown uParam0, int iParam1)
{
    (uParam0^)++;
    if ((uParam0^) >= iParam1)
    {
        (uParam0^) = 0;
        return 1;
    }
    return 0;
}

int sub_34661(int iParam0)
{
    if ((((iParam0 == l_U1197) || (iParam0 == l_U1199)) || (iParam0 == l_U1196)) || (iParam0 == l_U1198))
    {
        return 1;
    }
    return 0;
}

int sub_34756(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar5, ref iVar6, ref iVar4, ref iVar4 );
    GET_NETWORK_TIMER( ref iVar4 );
    if ((IS_BUTTON_PRESSED( 0, 10 )) || (iVar5 < 65436))
    {
        if ((l_U1189) || (iVar4 > (l_U1181 + 300)))
        {
            for ( (uParam0^)--; (uParam0^) < 0; (uParam0^) += iParam1 )
            {
                ;
            }
            l_U1181 = iVar4;
            l_U1189 = 0;
            return 1;
        }
    }
    if ((IS_BUTTON_PRESSED( 0, 11 )) || (iVar5 > 100))
    {
        if ((l_U1189) || (iVar4 > (l_U1181 + 300)))
        {
            for ( (uParam0^)++; (uParam0^) >= iParam1; (uParam0^) -= iParam1 )
            {
                ;
            }
            l_U1181 = iVar4;
            l_U1189 = 0;
            return 1;
        }
    }
    if (NOT l_U1189)
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
                                l_U1189 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void sub_35134(int iParam0)
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
    if (l_U1271._fU0 != iParam0)
    {
        l_U1271._fU0 = iParam0;
        CLEAR_SCRIPT_ARRAY_FROM_SCRATCHPAD( 1 );
        SAVE_SCRIPT_ARRAY_IN_SCRATCHPAD( ref l_U1271, 1, 99, 1 );
    }
    return;
}

void sub_35387(unknown uParam0)
{
    sub_35398( uParam0 );
    sub_35686( 0 );
    return;
}

void sub_35398(boolean bParam0)
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

void sub_35686(boolean bParam0)
{
    char[16] cVar3;
    unknown uVar7;
    unknown uVar8;

    StrCopy( ref cVar3, "NTGT_", 16 );
    ConcatString(ref cVar3, sub_3700(), 16);
    GET_FRONTEND_DESIGN_VALUE( 113, ref uVar7, ref uVar8 );
    sub_29606( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    if (bParam0)
    {
        if (sub_26564())
        {
            sub_35829( ref cVar3, sub_35769() + 0.03250000, 0.11900000, uVar7, uVar8, 255, 255, 255, 255, 2 );
            DRAW_SPRITE( l_U503[15], sub_35769() + 0.01100000, 0.11900000 + 0.02300000, 0.03100000, 0.04400000, 0.00000000, 255, 255, 255, 255 );
        }
        else
        {
            sub_35829( ref cVar3, sub_35769(), 0.11900000, uVar7, uVar8, 255, 255, 255, 255, 2 );
        }
    }
    else if (sub_26564())
    {
        sub_35829( ref cVar3, sub_35769() + 0.03250000, 0.08500000, uVar7, uVar8, 255, 255, 255, 255, 2 );
        DRAW_SPRITE( l_U503[15], sub_35769() + 0.01100000, 0.08500000 + 0.02300000, 0.03100000, 0.04400000, 0.00000000, 255, 255, 255, 255 );
    }
    else
    {
        sub_35829( ref cVar3, sub_35769(), 0.08500000, uVar7, uVar8, 255, 255, 255, 255, 2 );
    }
    return;
}

void sub_35769()
{
    unknown Result;
    unknown uVar3;

    GET_FRONTEND_DESIGN_VALUE( 112, ref Result, ref uVar3 );
    return Result;
}

void sub_35829(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_29943( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH( uParam0 );
    DISPLAY_TEXT( uParam1, uParam2, uParam0 );
    return Result;
}

int sub_36666(unknown uParam0)
{
    if (l_U991[uParam0]._fU16 != 0)
    {
        if ((l_U991[uParam0]._fU16 == 9) || (l_U991[uParam0]._fU16 == 10))
        {
            if (IS_THIS_MACHINE_THE_SERVER())
            {
                if (sub_12847())
                {
                    if (sub_12847())
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
        else if (l_U991[uParam0]._fU16 < 12)
        {
            if (IS_THIS_MACHINE_THE_SERVER())
            {
                if (l_U991[uParam0]._fU24 > 0)
                {
                    return 1;
                }
            }
        }
        else if (l_U991[uParam0]._fU16 > 12)
        {
            if (l_U991[uParam0]._fU24 > 0)
            {
                return 1;
            }
        }
        else if (sub_33112())
        {
            return 1;
        };;;;
    }
    return 0;
}

int sub_39159(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar5, ref iVar6, ref iVar4, ref iVar4 );
    GET_NETWORK_TIMER( ref iVar4 );
    if ((IS_BUTTON_PRESSED( 0, 8 )) || (iVar6 < 65436))
    {
        if ((l_U1189) || (iVar4 > (l_U1181 + 150)))
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
            l_U1181 = iVar4;
            l_U1189 = 0;
            return 1;
        }
    }
    if (NOT l_U1189)
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
                                l_U1189 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_39502(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar5, ref iVar6, ref iVar4, ref iVar4 );
    GET_NETWORK_TIMER( ref iVar4 );
    if ((IS_BUTTON_PRESSED( 0, 9 )) || (iVar6 > 100))
    {
        if ((l_U1189) || (iVar4 > (l_U1181 + 150)))
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
            l_U1181 = iVar4;
            l_U1189 = 0;
            return 1;
        }
    }
    if (NOT l_U1189)
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
                                l_U1189 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_39844(unknown uParam0)
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

void sub_40157(int iParam0, int iParam1, int iParam2)
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
        iParam0->_fU0[2] = sub_40253( iParam1 );
        iParam0->_fU0[3] = 0;
        iParam0->_fU0[4] = iParam2;
        g_U14 = iParam2;
        iParam0->_fU0[5] = sub_40347( iParam1 );
    }
    return;
}

int sub_40253(unknown uParam0)
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

int sub_40347(unknown uParam0)
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

void sub_40495()
{
    g_U10 = 1;
    sub_25594();
    return;
}

void sub_40981()
{
    g_U11 = 1;
    sub_25594();
    return;
}

void sub_41139()
{
    g_U12 = 1;
    sub_25594();
    return;
}

float sub_41284()
{
    unknown uVar2;
    unknown uVar3;

    GET_FRONTEND_DESIGN_VALUE( 112, ref uVar2, ref uVar3 );
    return 1.00000000 - uVar2;
}

void sub_41798(unknown uParam0)
{
    if ((uParam0^))
    {
        (uParam0^) = 0;
        return;
    }
    (uParam0^) = 1;
    return;
}

int sub_42234()
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
        return sub_2934( 0, 2 );
    }
    else if (iVar5 == 1)
    {
        if ((GET_NO_OF_PLAYERS_IN_TEAM( -1 )) > (GET_NO_OF_PLAYERS_IN_TEAM( iVar6 )))
        {
            return sub_2934( 0, 2 );
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
        return sub_2934( 0, 8 );
    }
    else
    {
        iVar4 = sub_2934( 0, iVar5 );
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

int sub_42840(int iParam0)
{
    int I;
    int iVar4;
    int iVar5;

    iVar5 = GET_PLAYER_TEAM( sub_8097( iParam0 ) );
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if ((GET_PLAYER_TEAM( sub_8097( I ) )) == iVar5)
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

void sub_43186()
{
    int iVar2;

    if (NOT N_604003528())
    {
        if (NETWORK_CHECK_INVITE_ARRIVAL())
        {
            GET_NETWORK_TIMER( ref l_U1267 );
            l_U1267 += 5000;
            NETWORK_CLEAR_INVITE_ARRIVAL();
        }
        GET_NETWORK_TIMER( ref iVar2 );
        if ((l_U1267 > iVar2) AND (l_U1267 != 0))
        {
            SET_WIDESCREEN_FORMAT( 3 );
            sub_29606( 0, 0.00000000, 1.50000000, 0, 0, 0, 0, 0, 255 );
            sub_35829( "INVITE_RECIEVED", sub_41284() + -0.05050000, 0.09800000, 0.35000000, 0.47800000, 255, 255, 255, 255, 3 );
            DRAW_SPRITE( l_U503[34], sub_41284() + -0.02050000, 0.10580000, 0.09570000, 0.06320000, 0.00000000, 255, 255, 255, 255 );
        }
    }
    return;
}

int sub_43505()
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
    sub_35398( 1 );
    GET_FRONTEND_DESIGN_VALUE( 113, ref uVar7, ref uVar8 );
    sub_29606( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    sub_35829( "RECENT_PLAYERS", sub_35769(), 0.08500000, uVar7, uVar8, 255, 255, 255, 255, 2 );
    sub_29606( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    GET_HUD_COLOUR( 56, ref uVar3, ref uVar4, ref uVar5, ref I );
    if (N_604003528())
    {
        sub_35829( "RECENTPLYRX360", sub_35769() + 0.00100000, fVar6, 0.31500000, 0.42950000, uVar3, uVar4, uVar5, 255, 2 );
    }
    else
    {
        sub_35829( "RECENTPLYRDESC", sub_35769() + 0.00100000, fVar6, 0.31500000, 0.42950000, uVar3, uVar4, uVar5, 255, 2 );
    }
    if (GET_IS_WIDESCREEN())
    {
        fVar6 = 0.21550000;
    }
    else
    {
        fVar6 = 0.21600000;
    }
    sub_32330( ref l_U1201, NETWORK_GET_NUM_PLAYERS_MET(), 0 );
    if (NETWORK_GET_NUM_PLAYERS_MET() > 16)
    {
        DRAW_FRONTEND_HELPER_TEXT( "UP_DOWN", "PAD_LT_RT", 0 );
        if (IS_BUTTON_JUST_PRESSED( 0, 7 ))
        {
            l_U1201 += 16;
            if (l_U1201 >= NETWORK_GET_NUM_PLAYERS_MET())
            {
                l_U1201 = NETWORK_GET_NUM_PLAYERS_MET() - 1;
            }
        }
        else if (IS_BUTTON_JUST_PRESSED( 0, 5 ))
        {
            l_U1201 -= 16;
            if (l_U1201 < 0)
            {
                l_U1201 = 0;
            }
        }
    }
    if (l_U1201 >= (l_U1202 + 16))
    {
        l_U1202 = (l_U1201 - 16) + 1;
    }
    else if (l_U1201 < l_U1202)
    {
        l_U1202 = l_U1201;
    }
    for ( I = l_U1202; I <= ((l_U1202 + 16) - 1); I++ )
    {
        if (I < NETWORK_GET_NUM_PLAYERS_MET())
        {
            sub_29606( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
            if (l_U1201 == I)
            {
                sub_44184( sub_35769(), fVar6, 0.35000000, 0.47750000, 255, 255, 255, 255, 2, NETWORK_GET_MET_PLAYER_NAME( I ) );
            }
            else
            {
                sub_44184( sub_35769(), fVar6, 0.35000000, 0.47750000, uVar3, uVar4, uVar5, 255, 2, NETWORK_GET_MET_PLAYER_NAME( I ) );
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
    if (sub_31989())
    {
        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
        NETWORK_SHOW_MET_PLAYER_FEEDBACK_UI( l_U1201 );
    }
    else if (sub_31231())
    {
        NETWORK_SHOW_MET_PLAYER_PROFILE_UI( l_U1201 );
    }
    else if (sub_30574())
    {
        return 1;
    };;;
    return 0;
}

void sub_44184(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam4, uParam5, uParam6, uParam7 );
    SET_TEXT_SCALE( uParam2, uParam3 );
    sub_29943( uParam8, ref uParam0 );
    Result = GET_STRING_WIDTH_WITH_STRING( "STRING", uParam9 );
    DISPLAY_TEXT_WITH_LITERAL_STRING( uParam0, uParam1, "STRING", uParam9 );
    return Result;
}

int sub_44770(unknown uParam0, boolean bParam1)
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
    sub_35398( 1 );
    GET_FRONTEND_DESIGN_VALUE( 113, ref uVar13, ref uVar14 );
    sub_29606( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    sub_35829( "INVITE_TITLE", sub_35769(), 0.08500000, uVar13, uVar14, 255, 255, 255, 255, 2 );
    sub_29606( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    GET_HUD_COLOUR( 56, ref iVar5, ref iVar6, ref iVar7, ref uVar8 );
    sub_35829( "INVITES_DESC", sub_35769() + 0.00100000, fVar12, 0.31500000, 0.42950000, iVar5, iVar6, iVar7, 255, 2 );
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
                DRAW_RECT( 0.57000000 + sub_35769(), 0.01370000 + fVar12, 1.15500000, 0.03800000, iVar5, iVar6, iVar7, 45 );
            }
            else
            {
                DRAW_RECT( 0.40200000 + sub_35769(), 0.01370000 + fVar12, 0.82000000, 0.03800000, iVar5, iVar6, iVar7, 45 );
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
    sub_32330( ref l_U1204, NETWORK_GET_FRIEND_COUNT(), 0 );
    if (NETWORK_GET_FRIEND_COUNT() > 16)
    {
        DRAW_FRONTEND_HELPER_TEXT( "UP_DOWN", "PAD_LT_RT", 0 );
        if (IS_BUTTON_JUST_PRESSED( 0, 7 ))
        {
            l_U1204 += 16;
            if (l_U1204 >= NETWORK_GET_FRIEND_COUNT())
            {
                l_U1204 = NETWORK_GET_FRIEND_COUNT() - 1;
            }
        }
        else if (IS_BUTTON_JUST_PRESSED( 0, 5 ))
        {
            l_U1204 -= 16;
            if (l_U1204 < 0)
            {
                l_U1204 = 0;
            }
        }
    }
    if (l_U1204 >= (l_U1205 + 16))
    {
        l_U1205 = (l_U1204 - 16) + 1;
    }
    else if (l_U1204 < l_U1205)
    {
        l_U1205 = l_U1204;
    }
    for ( I = l_U1205; I <= ((l_U1205 + 16) - 1); I++ )
    {
        if (I < NETWORK_GET_FRIEND_COUNT())
        {
            sub_29606( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
            if (l_U1204 == I)
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
            if (l_U6)
            {
                if (N_604003528())
                {
                    sub_44184( sub_35769(), fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2, "WWWWWWWWWWWWWWW" );
                }
                else
                {
                    sub_44184( sub_35769(), fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2, "WWWWWWWWWWWWWWWW" );
                }
            }
            else
            {
                SET_TEXT_USE_UNDERSCORE( 1 );
                sub_44184( sub_35769(), fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2, NETWORK_GET_FRIEND_NAME( I ) );
                SET_TEXT_USE_UNDERSCORE( 0 );
            }
            sub_29606( 0, 0.00000000, 1.50000000, 0, 0, 0, 0, 0, 255 );
            if (sub_45850( I ))
            {
                sub_35829( "INGAME", sub_35769() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
            }
            else if (sub_46005( I ))
            {
                sub_35829( "INVITING", sub_35769() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
                if (GET_CURRENT_EPISODE() == (NETWORK_GET_UNACCEPTED_INVITE_EPISODE( sub_46151( I ) )))
                {
                    StrCopy( ref cVar15, "NTGT_", 8 );
                    ConcatString(ref cVar15, NETWORK_GET_UNACCEPTED_INVITE_GAME_MODE( sub_46151( I ) ), 8);
                    sub_29606( 0, 0.00000000, 1.50000000, 0, 0, 0, 0, 0, 255 );
                    if (GET_IS_WIDESCREEN())
                    {
                        sub_35829( ref cVar15, sub_41284() + 0.32600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 3 );
                    }
                    else
                    {
                        sub_35829( ref cVar15, sub_41284() + -0.01100000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 3 );
                    }
                }
            }
            else if (NETWORK_DID_INVITE_FRIEND( NETWORK_GET_FRIEND_NAME( I ) ))
            {
                sub_35829( "INVITED", sub_35769() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
            }
            else if (NETWORK_IS_FRIEND_ONLINE( NETWORK_GET_FRIEND_NAME( I ) ))
            {
                sub_35829( "ONLINE", sub_35769() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
            }
            else
            {
                sub_35829( "OFFLINE", sub_35769() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
            };;;;
            if (NETWORK_IS_FRIEND_IN_SAME_TITLE( NETWORK_GET_FRIEND_NAME( I ) ))
            {
                DRAW_SPRITE( l_U503[33], sub_35769() + 0.33300000, fVar12 + 0.01520000, 0.03900000, 0.02600000, 0.00000000, iVar5, iVar6, iVar7, 255 );
            }
            fVar12 += 0.03600000;
        }
    }
    GET_NETWORK_TIMER( ref iVar9 );
    if (l_U1266 > (iVar9 - 5000))
    {
        SET_WIDESCREEN_FORMAT( 2 );
        sub_29606( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
        GET_FRONTEND_DESIGN_VALUE( 23, ref uVar11, ref fVar12 );
        GET_FRONTEND_DESIGN_VALUE( 24, ref uVar13, ref uVar14 );
        if (NOT bParam1)
        {
            SET_TEXT_USE_UNDERSCORE( 1 );
            sub_46863( "INVITED_PLAYER", uVar11, fVar12 + 0.04050000, uVar13, uVar14, 255, 255, 255, 255, 2, ref l_U1257 );
            SET_TEXT_USE_UNDERSCORE( 0 );
        }
    }
    INIT_FRONTEND_HELPER_TEXT();
    DRAW_FRONTEND_HELPER_TEXT( "BACK", "INPUT_F_CANCEL", 0 );
    if ((l_U1265 != l_U1204) || (l_U1266 < (iVar9 - 5000)))
    {
        l_U1265 = -1;
    }
    if (NOT (sub_45850( l_U1204 )))
    {
        if (sub_46005( l_U1204 ))
        {
            DRAW_FRONTEND_HELPER_TEXT( "ACCEPT_INVITE", "INPUT_F_ACCEPT", 0 );
        }
        else if (((NOT (NETWORK_DID_INVITE_FRIEND( NETWORK_GET_FRIEND_NAME( l_U1204 ) ))) || (l_U1265 == -1)) AND (NETWORK_IS_FRIEND_ONLINE( NETWORK_GET_FRIEND_NAME( l_U1204 ) )))
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
    if (sub_31231())
    {
        if (NETWORK_IS_FRIEND_ONLINE( NETWORK_GET_FRIEND_NAME( l_U1204 ) ))
        {
            if (NOT (sub_45850( l_U1204 )))
            {
                if (sub_46005( l_U1204 ))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    NETWORK_ACCEPT_INVITE( sub_46151( l_U1204 ) );
                }
                else if (((NOT (NETWORK_DID_INVITE_FRIEND( NETWORK_GET_FRIEND_NAME( l_U1204 ) ))) || (l_U1265 == -1)) AND (NETWORK_IS_FRIEND_ONLINE( NETWORK_GET_FRIEND_NAME( l_U1204 ) )))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    NETWORK_INVITE_FRIEND( NETWORK_GET_FRIEND_NAME( l_U1204 ), "" );
                    StrCopy( ref l_U1257, NETWORK_GET_FRIEND_NAME( l_U1204 ), 32 );
                    l_U1265 = l_U1204;
                    GET_NETWORK_TIMER( ref l_U1266 );
                    l_U1267 = 0;
                }
            }
        }
    }
    else if (sub_30574())
    {
        return 1;
    }
    return 0;
}

int sub_45850(unknown uParam0)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (COMPARE_STRING( NETWORK_GET_FRIEND_NAME( uParam0 ), GET_PLAYER_NAME( sub_8097( I ) ) ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_46005(unknown uParam0)
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

int sub_46151(unknown uParam0)
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

void sub_46863(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_29943( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_STRING( uParam0, uParam10 );
    DISPLAY_TEXT_WITH_LITERAL_STRING( uParam1, uParam2, uParam0, uParam10 );
    return Result;
}

void sub_47684(unknown uParam0)
{
    unknown Result;

    GET_CHAR_MODEL( uParam0, ref Result );
    return Result;
}

int sub_47726(unknown uParam0)
{
    REQUEST_MODEL( uParam0 );
    if (HAS_MODEL_LOADED( uParam0 ))
    {
        return 1;
    }
    return 0;
}

void sub_47829(unknown uParam0, boolean bParam1)
{
    SET_PLAYER_CONTROL_FOR_NETWORK( sub_8097( uParam0 ), bParam1, 0 );
    SET_CHAR_VISIBLE( sub_8050( uParam0 ), bParam1 );
    if (bParam1)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_8050( uParam0 ) )))
        {
            SET_CHAR_COLLISION( sub_8050( uParam0 ), 1 );
        }
        FREEZE_CHAR_POSITION( sub_8050( uParam0 ), 0 );
        SET_CHAR_NEVER_TARGETTED( sub_8050( uParam0 ), 0 );
        SET_PLAYER_INVINCIBLE( sub_8097( uParam0 ), 0 );
    }
    else
    {
        SET_CHAR_COLLISION( sub_8050( uParam0 ), 0 );
        FREEZE_CHAR_POSITION( sub_8050( uParam0 ), 1 );
        SET_CHAR_NEVER_TARGETTED( sub_8050( uParam0 ), 1 );
        SET_PLAYER_INVINCIBLE( sub_8097( uParam0 ), 1 );
        REMOVE_PTFX_FROM_PED( sub_8050( uParam0 ) );
        if (NOT (IS_CHAR_FATALLY_INJURED( sub_8050( uParam0 ) )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_8050( uParam0 ) );
        }
    }
    return;
}

void sub_48401(unknown uParam0)
{
    unknown Result;
    unknown uVar4;

    GET_FRONTEND_DESIGN_VALUE( uParam0, ref Result, ref uVar4 );
    return Result;
}

void sub_48434(unknown uParam0)
{
    unknown uVar3;
    unknown Result;

    GET_FRONTEND_DESIGN_VALUE( uParam0, ref uVar3, ref Result );
    return Result;
}

void sub_48593(boolean bParam0)
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
            if (sub_26628( I ))
            {
                if (GET_NUMBER_OF_PLAYERS() > 4)
                {
                    bVar8 = false;
                }
            }
        }
        if (bVar8)
        {
            if (l_U990 == I)
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
        else if (l_U990 != I)
        {
            iVar4 = 60;
            iVar5 = 60;
            iVar6 = 60;
        }
        sub_29606( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
        sub_35829( sub_48826( I ), fVar9, fVar10, 0.35000000, 0.47750000, iVar4, iVar5, iVar6, 255, 1 );
        fVar10 += 0.03600000;
    }
    return;
}

string sub_48826(unknown uParam0)
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

void sub_50139(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (((GET_PLAYER_TEAM( uParam0 )) == -1) || (sub_3700() == 16))
    {
        GET_PLAYER_RGB_COLOUR( uParam0, uParam1, uParam2, uParam3 );
    }
    else
    {
        GET_TEAM_RGB_COLOUR( GET_PLAYER_TEAM( uParam0 ), uParam1, uParam2, uParam3 );
    }
    return;
}

void sub_52181(boolean bParam0)
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
        fVar7 = sub_35769();
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
    ConcatString(ref cVar9, sub_3700(), 16);
    if (l_U1182 == 1)
    {
        ConcatString(ref cVar9, "A", 16);
    }
    else if (l_U1182 == 2)
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
        sub_29606( 0, fVar7, sub_41284() * 1.20000000, 0, 0, 0, 0, 0, 255 );
    }
    else
    {
        sub_29606( 0, fVar7, sub_41284(), 0, 0, 0, 0, 0, 255 );
    }
    GET_HUD_COLOUR( 56, ref uVar3, ref uVar4, ref uVar5, ref uVar6 );
    sub_35829( ref cVar9, fVar7, fVar8, 0.31500000, 0.42950000, uVar3, uVar4, uVar5, 255, 2 );
    return;
}

int sub_52520(unknown uParam0)
{
    int I;

    for ( I = 0; I < 21; I++ )
    {
        if (l_U991[I]._fU16 == 8)
        {
            (uParam0^) = I;
            return 1;
        }
    }
    return 0;
}

int sub_52616(unknown uParam0, unknown uParam1)
{
    int I;
    char[16] cVar5;

    if (l_U541)
    {
        return 1;
    }
    StrCopy( ref l_U1249, uParam0, 16 );
    l_U540 = uParam1;
    REQUEST_STREAMED_TXD( uParam0, 1 );
    if (HAS_STREAMED_TXD_LOADED( uParam0 ))
    {
        for ( I = 0; I < l_U540; I++ )
        {
            StrCopy( ref cVar5, uParam0, 16 );
            ConcatString(ref cVar5, I, 16);
            l_U543[I] = GET_TEXTURE_FROM_STREAMED_TXD( uParam0, ref cVar5 );
        }
        l_U541 = 1;
        return 1;
    }
    return 0;
}

float sub_54536(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8, int iParam9, unknown uParam10)
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
        sub_30228( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar20 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_30228( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar21 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_35829( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 += fVar25;
        fVar26 += fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_30228( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar18 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_30228( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar19 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_35829( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 += fVar25;
        fVar26 += fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_30228( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar16 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_30228( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar17 );
    }
    else if (iParam8 == 3)
    {
        fVar26 = uParam0 - (fVar22 / 2);
        sub_30228( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar17 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_30228( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar16 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_35829( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 -= fVar25;
        fVar26 -= fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_30228( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar19 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_30228( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar18 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_35829( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 -= fVar25;
        fVar26 -= fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_30228( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar21 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_30228( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar20 );
    }
    else
    {
        fVar26 = uParam0 + fVar24;
        sub_30228( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar19 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_35829( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_30228( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar16 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_30228( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar17 );
        fVar26 = uParam0 - fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_30228( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar18 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_35829( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_30228( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar21 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_30228( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar20 );
    }
    return (6 * fVar22) + (2 * fVar23);
}

void sub_56567(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    float Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_29943( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_NUMBER( uParam0, uParam10 );
    Result += GET_STRING_WIDTH_WITH_NUMBER( "NUMBER", uParam11 );
    Result -= GET_STRING_WIDTH_WITH_NUMBER( "NUMBER", 11 );
    DISPLAY_TEXT_WITH_2_NUMBERS( uParam1, uParam2, uParam0, uParam10, uParam11 );
    return Result;
}

int sub_57384()
{
    if (sub_12847())
    {
        if (sub_12847())
        {
            return 1;
        }
    }
    else if ((sub_12802()) || (sub_10946()))
    {
        return 1;
    }
    return 0;
}

int sub_57715()
{
    int I;
    int Result;

    for ( I = 0; I < 8; I++ )
    {
        if ((sub_33175( I )) > 0)
        {
            Result++;
            if (I == (GET_PLAYER_TEAM( sub_5012() )))
            {
                return Result;
            }
        }
    }
    return 0;
}

float sub_59205()
{
    if (GET_IS_WIDESCREEN())
    {
        return 0.02700000;
    }
    return 0.02100000;
}

void sub_59777(int iParam0, unknown uParam1, float fParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7, unknown uParam8)
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

    sub_59794( iParam0, ref iVar12, ref iVar13, ref iVar14 );
    if ((l_U1255) AND ((iParam7 == 2) || (iParam7 == 3)))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( iParam0 ))
        {
            if ((IS_CHAR_DEAD( sub_8050( iParam0 ) )) || (l_U969[iParam0]))
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
            if (l_U566[(uParam1^)[I]]._fU16 > 0)
            {
                iVar16 = 3;
                if (((iParam7 == 6) || (iParam7 == 7)) || (iParam7 == 8))
                {
                    iVar16 = 1;
                }
                sub_29606( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                if (l_U566[(uParam1^)[I]]._fU16 != 1)
                {
                    if (((iParam7 == 6) || (iParam7 == 7)) || (iParam7 == 8))
                    {
                        fParam2 += (sub_60169( l_U566[(uParam1^)[I]]._fU16 )) * 0.50000000;
                    }
                }
                switch (l_U566[(uParam1^)[I]]._fU16)
                {
                    case 1:
                    if (((iParam7 == 6) || (iParam7 == 7)) || (iParam7 == 8))
                    {
                        if (sub_4202( iParam0 ))
                        {
                            iVar12 = 60;
                            iVar13 = 60;
                            iVar14 = 60;
                        }
                        else
                        {
                            sub_59794( iParam0, ref iVar12, ref iVar13, ref iVar14 );
                        }
                        if (l_U6)
                        {
                            if (N_604003528())
                            {
                                sub_44184( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, 2, "WWWWWWWWWWWWWWW" );
                            }
                            else
                            {
                                sub_44184( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, 2, "WWWWWWWWWWWWWWWW" );
                            }
                        }
                        else
                        {
                            SET_TEXT_USE_UNDERSCORE( 1 );
                            sub_44184( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, 2, sub_60729( iParam0 ) );
                            SET_TEXT_USE_UNDERSCORE( 0 );
                        }
                        if ((sub_26564()) || (NOT N_604003528()))
                        {
                            if (IS_NETWORK_PLAYER_ACTIVE( iParam0 ))
                            {
                                if (iParam0 != GET_PLAYER_ID())
                                {
                                    l_U1161[iParam0] = GET_PLAYER_RANK_LEVEL_DURING_MP( iParam0 );
                                }
                                if ((GET_PLAYER_RANK_LEVEL_DURING_MP( iParam0 )) > -1)
                                {
                                    if (GET_IS_WIDESCREEN())
                                    {
                                        DRAW_SPRITE( l_U503[17 + (GET_PLAYER_RANK_LEVEL_DURING_MP( iParam0 ))], fParam2 + 0.33450000, (uParam3^) + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
                                    }
                                    else if (N_604003528())
                                    {
                                        DRAW_SPRITE( l_U503[17 + (GET_PLAYER_RANK_LEVEL_DURING_MP( iParam0 ))], fParam2 + 0.27500000, (uParam3^) + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
                                    }
                                    else
                                    {
                                        DRAW_SPRITE( l_U503[17 + (GET_PLAYER_RANK_LEVEL_DURING_MP( iParam0 ))], fParam2 + 0.29500000, (uParam3^) + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
                                    }
                                }
                            }
                            else if (l_U1161[iParam0] > -1)
                            {
                                if (GET_IS_WIDESCREEN())
                                {
                                    DRAW_SPRITE( l_U503[17 + l_U1161[iParam0]], fParam2 + 0.33450000, (uParam3^) + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
                                }
                                else
                                {
                                    DRAW_SPRITE( l_U503[17 + l_U1161[iParam0]], fParam2 + 0.27500000, (uParam3^) + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
                                }
                            }
                        }
                        fParam2 += (sub_60169( 1 )) - uVar19;
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
                            if (l_U952[iParam0])
                            {
                                iVar12 = 60;
                                iVar13 = 60;
                                iVar14 = 60;
                            }
                            fParam2 += 0.01700000;
                        }
                    }
                    if (l_U6)
                    {
                        if ((iParam7 == 9) || (iParam7 == 10))
                        {
                            if (GET_IS_WIDESCREEN())
                            {
                                if (N_604003528())
                                {
                                    uVar22 = sub_61719( 0.29700000, uParam4, sub_61517( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, "WWWWWWWWWWWWWWW" ) );
                                }
                                else
                                {
                                    uVar22 = sub_61719( 0.29700000, uParam4, sub_61517( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, "WWWWWWWWWWWWWWWW" ) );
                                }
                            }
                            else if (N_604003528())
                            {
                                uVar22 = sub_61719( 0.23900000, uParam4, sub_61517( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, "WWWWWWWWWWWWWWW" ) );
                            }
                            else
                            {
                                uVar22 = sub_61719( 0.23900000, uParam4, sub_61517( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, "WWWWWWWWWWWWWWWW" ) );
                            }
                            sub_29606( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                            SET_TEXT_USE_UNDERSCORE( 1 );
                        }
                        else
                        {
                            uVar22 = uParam4;
                        }
                        if (N_604003528())
                        {
                            sub_44184( fParam2, (uParam3^) + fVar20, uVar22, uParam5, iVar12, iVar13, iVar14, 255, 2, "WWWWWWWWWWWWWWW" );
                        }
                        else
                        {
                            sub_44184( fParam2, (uParam3^) + fVar20, uVar22, uParam5, iVar12, iVar13, iVar14, 255, 2, "WWWWWWWWWWWWWWWW" );
                        }
                    }
                    else if ((iParam7 == 9) || (iParam7 == 10))
                    {
                        if (GET_IS_WIDESCREEN())
                        {
                            uVar22 = sub_61719( 0.29700000, uParam4, sub_61517( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, sub_60729( iParam0 ) ) );
                        }
                        else
                        {
                            uVar22 = sub_61719( 0.23900000, uParam4, sub_61517( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, sub_60729( iParam0 ) ) );
                        }
                        sub_29606( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                        SET_TEXT_USE_UNDERSCORE( 1 );
                    }
                    else
                    {
                        uVar22 = uParam4;
                    }
                    SET_TEXT_USE_UNDERSCORE( 1 );
                    sub_44184( fParam2, (uParam3^) + fVar20, uVar22, uParam5, iVar12, iVar13, iVar14, 255, 2, sub_60729( iParam0 ) );
                    SET_TEXT_USE_UNDERSCORE( 0 );;;
                    break;
                    case 2:
                    case 7:
                    if (NOT (sub_4202( iParam0 )))
                    {
                        sub_30228( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, l_U566[(uParam1^)[I]]._fU24[iParam0] );
                    }
                    break;
                    case 3:
                    if (NOT (sub_4202( iParam0 )))
                    {
                        if (l_U566[(uParam1^)[I]]._fU24[iParam0] > 0)
                        {
                            sub_62491( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, sub_4071( iParam0 ) );
                        }
                    }
                    break;
                    case 4:
                    if (NOT (sub_4202( iParam0 )))
                    {
                        if ((l_U566[(uParam1^)[I]]._fU24[iParam0] < 2147483647) AND (l_U566[(uParam1^)[I]]._fU24[iParam0] > -2147483648))
                        {
                            sub_54536( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, l_U566[(uParam1^)[I]]._fU24[iParam0], 1.00000000 );
                        }
                    }
                    break;
                    case 5:
                    case 6:
                    if ((NOT l_U1256) || (iParam7 != 6))
                    {
                        if (NOT (sub_4202( iParam0 )))
                        {
                            if ((((sub_12802()) || (sub_12847())) AND ((sub_62859( iParam0 )) > -1)) AND (sub_3700() != 1))
                            {
                                sub_29903( "CASH", fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, (l_U943[sub_62859( iParam0 )]) / (sub_62982( sub_62859( iParam0 ) )) );
                            }
                            else
                            {
                                sub_29903( "CASH", fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, l_U566[(uParam1^)[I]]._fU24[iParam0] );
                            }
                        }
                    }
                    break;
                }
                if (l_U566[(uParam1^)[I]]._fU16 != 1)
                {
                    if (((iParam7 == 6) || (iParam7 == 7)) || (iParam7 == 8))
                    {
                        fParam2 += (sub_60169( l_U566[(uParam1^)[I]]._fU16 )) * 0.50000000;
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

void sub_59794(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (l_U864)
    {
        (uParam1^) = l_U735[uParam0]._fU20;
        (uParam2^) = l_U735[uParam0]._fU24;
        (uParam3^) = l_U735[uParam0]._fU28;
    }
    else
    {
        sub_50139( sub_8097( uParam0 ), uParam1, uParam2, uParam3 );
    }
    return;
}

float sub_60169(unknown uParam0)
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

void sub_60729(unknown uParam0)
{
    if (l_U864)
    {
        return l_U735[uParam0]._fU0;
    }
    return GET_PLAYER_NAME( sub_8097( uParam0 ) );
}

void sub_61517(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
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

void sub_61719(float fParam0, unknown Result, float fParam2)
{
    if (fParam2 > fParam0)
    {
        return (fParam0 * Result) / fParam2;
        break;
    }
    return Result;
}

void sub_62491(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, int iParam9)
{
    if (iParam9 == 1)
    {
        return sub_35829( "FIRST", uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8 );
    }
    if (iParam9 == 2)
    {
        return sub_35829( "SECOND", uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8 );
    }
    if (iParam9 == 3)
    {
        return sub_35829( "THIRD", uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8 );
    }
    return sub_29903( "NTH", uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, iParam9 );
}

void sub_62859(unknown uParam0)
{
    if (l_U864)
    {
        return l_U735[uParam0]._fU12;
    }
    return GET_PLAYER_TEAM( sub_8097( uParam0 ) );
}

void sub_62982(int iParam0)
{
    int I;
    int Result;

    if (l_U864)
    {
        for ( I = 0; I < 16; I++ )
        {
            if ((l_U735[I]._fU4) AND (NOT l_U735[I]._fU8))
            {
                if (l_U735[I]._fU12 == iParam0)
                {
                    Result++;
                }
            }
        }
        return Result;
    }
    for ( I = 0; I < 16; I++ )
    {
        if ((IS_NETWORK_PLAYER_ACTIVE( I )) AND (NOT l_U952[I]))
        {
            if ((GET_PLAYER_TEAM( sub_8097( I ) )) == iParam0)
            {
                Result++;
            }
        }
    }
    return Result;
}

void sub_63603(int iParam0, boolean bParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    iVar7 = 3;
    GET_HUD_COLOUR( 56, ref uVar8, ref uVar9, ref uVar10, ref iVar6 );
    GET_NETWORK_TIMER( ref iVar6 );
    if ((sub_63642( iParam0 )) > 0)
    {
        if ((sub_26564()) || (NOT N_604003528()))
        {
            iVar7 = 4;
        }
        if (l_U1272 > iVar6)
        {
            DRAW_SPRITE( l_U503[10], uParam2 + (-0.02400000 * iVar7), uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
        }
        else
        {
            sub_29606( 0, sub_35769(), sub_41284(), 0, 0, 0, 0, 0, 255 );
            sub_30228( (uParam2 + (-0.02400000 * iVar7)) + -0.00030000, (uParam3 + 0.01300000) + -0.01320000, 0.31500000, 0.42950000, 255, 255, 255, 255, 1, sub_63642( iParam0 ) );
            if (l_U1272 < (iVar6 - 1000))
            {
                l_U1272 = iVar6 + 1000;
            }
        }
    }
    if (((sub_26564()) || (NOT N_604003528())) AND ((GET_PLAYER_RANK_LEVEL_DURING_MP( iParam0 )) > -1))
    {
        DRAW_SPRITE( l_U503[17 + (GET_PLAYER_RANK_LEVEL_DURING_MP( iParam0 ))], uParam2 + (-0.02400000 * 3), uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
    }
    if (GET_HOST_ID() == iParam0)
    {
        DRAW_SPRITE( l_U503[32], uParam2 + (-0.02400000 * 2), uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
    }
    if (NETWORK_PLAYER_HAS_HEADSET( iParam0 ))
    {
        if (NETWORK_IS_PLAYER_MUTED_BY_ME( iParam0 ))
        {
            DRAW_SPRITE( l_U503[8], uParam2 + -0.02400000, uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, uVar8, uVar9, uVar10, 255 );
        }
        else if (NETWORK_IS_PLAYER_TALKING( iParam0 ))
        {
            DRAW_SPRITE( l_U503[7], uParam2 + -0.02400000, uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
        }
        else
        {
            DRAW_SPRITE( l_U503[7], uParam2 + -0.02400000, uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, uVar8, uVar9, uVar10, 255 );
        }
    }
    if (bParam1)
    {
        DRAW_SPRITE( l_U503[28], uParam2, uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
    }
    else
    {
        DRAW_SPRITE( l_U503[12], uParam2, uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, uVar8, uVar9, uVar10, 255 );
    }
    return;
}

void sub_63642(int iParam0)
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
                    if (l_U891[I] == iParam0)
                    {
                        Result++;
                    }
                }
            }
        }
    }
    return Result;
}

void sub_65462()
{
    PRINT_BIG( "STARTINGGAME", 50, 2 );
    if (IS_PAUSE_MENU_ACTIVE())
    {
        DEACTIVATE_FRONTEND();
    }
    l_U1190 = 1;
    return;
}

void sub_65535()
{
    int I;
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    for ( I = 0; I <= 6; I++ )
    {
        l_U3595[I] = -1;
        l_U3603[I] = -1;
    }
    sub_65588( 1 );
    CLEAR_NETWORK_RESTART_NODE_GROUP_LIST();
    ADD_GROUP_TO_NETWORK_RESTART_NODE_GROUP_LIST( l_U1933._fU756[2] );
    if (l_U1933._fU756[2] == 2)
    {
        switch (l_U1933._fU848)
        {
            case 0:
            l_U2343[0]._fU0[0] = {-523.38870000, 1266.60100000, 16.47400000};
            l_U2343[0]._fU196[0] = 263.05830000;
            l_U2343[0]._fU0[1] = {-491.42550000, 1276.24600000, 16.49860000};
            l_U2343[0]._fU196[1] = 263.05830000;
            l_U2343[0]._fU0[2] = {-491.28890000, 1266.03700000, 16.49690000};
            l_U2343[0]._fU196[2] = 263.05830000;
            l_U2343[0]._fU0[3] = {-491.44000000, 1258.56700000, 16.49840000};
            l_U2343[0]._fU196[3] = 263.05830000;
            l_U2343[0]._fU0[4] = {-491.37400000, 1255.48500000, 16.49920000};
            l_U2343[0]._fU196[4] = 263.05830000;
            l_U2343[0]._fU0[5] = {-508.65880000, 1268.47000000, 16.47290000};
            l_U2343[0]._fU196[5] = 263.05830000;
            l_U2343[0]._fU0[6] = {-499.60070000, 1268.57300000, 16.47160000};
            l_U2343[0]._fU196[6] = 263.05830000;
            l_U2343[0]._fU0[7] = {-499.21530000, 1255.30100000, 16.47160000};
            l_U2343[0]._fU196[7] = 263.05830000;
            l_U2343[0]._fU0[8] = {-505.20160000, 1251.93800000, 16.47160000};
            l_U2343[0]._fU196[8] = 263.05830000;
            l_U2343[0]._fU0[9] = {-510.05370000, 1258.10500000, 16.47160000};
            l_U2343[0]._fU196[9] = 263.05830000;
            l_U2343[0]._fU0[10] = {-515.72180000, 1285.39500000, 16.49170000};
            l_U2343[0]._fU196[10] = 263.05830000;
            l_U2343[0]._fU0[11] = {-516.86150000, 1275.50100000, 16.50150000};
            l_U2343[0]._fU196[11] = 263.05830000;
            l_U2343[0]._fU0[12] = {-518.40360000, 1269.46900000, 16.49420000};
            l_U2343[0]._fU196[12] = 263.05830000;
            l_U2343[0]._fU0[13] = {-519.94910000, 1255.30000000, 16.48790000};
            l_U2343[0]._fU196[13] = 263.05830000;
            l_U2343[0]._fU0[14] = {-522.83290000, 1247.29200000, 16.47290000};
            l_U2343[0]._fU196[14] = 263.05830000;
            l_U2343[0]._fU0[15] = {-525.44870000, 1258.38800000, 16.47130000};
            l_U2343[0]._fU196[15] = 263.05830000;
            l_U2343[1]._fU0[0] = {-173.94980000, 1495.59900000, 17.44550000};
            l_U2343[1]._fU196[0] = 90.33140000;
            l_U2343[1]._fU0[1] = {-164.31780000, 1489.17900000, 17.46310000};
            l_U2343[1]._fU196[1] = 90.33140000;
            l_U2343[1]._fU0[2] = {-151.39400000, 1509.50400000, 17.82820000};
            l_U2343[1]._fU196[2] = 90.33140000;
            l_U2343[1]._fU0[3] = {-157.54460000, 1495.43300000, 17.82820000};
            l_U2343[1]._fU196[3] = 90.33140000;
            l_U2343[1]._fU0[4] = {-146.23850000, 1505.27000000, 17.44320000};
            l_U2343[1]._fU196[4] = 90.33140000;
            l_U2343[1]._fU0[5] = {-141.21760000, 1503.06600000, 17.44470000};
            l_U2343[1]._fU196[5] = 90.33140000;
            l_U2343[1]._fU0[6] = {-133.00650000, 1471.27100000, 17.46230000};
            l_U2343[1]._fU196[6] = 90.33140000;
            l_U2343[1]._fU0[7] = {-137.12090000, 1468.92100000, 17.44040000};
            l_U2343[1]._fU196[7] = 90.33140000;
            l_U2343[1]._fU0[8] = {-142.09830000, 1474.51800000, 17.44380000};
            l_U2343[1]._fU196[8] = 90.33140000;
            l_U2343[1]._fU0[9] = {-140.64490000, 1480.15100000, 17.44960000};
            l_U2343[1]._fU196[9] = 90.33140000;
            l_U2343[1]._fU0[10] = {-152.77470000, 1479.47000000, 17.45000000};
            l_U2343[1]._fU196[10] = 90.33140000;
            l_U2343[1]._fU0[11] = {-163.18180000, 1475.78200000, 17.44350000};
            l_U2343[1]._fU196[11] = 90.33140000;
            l_U2343[1]._fU0[12] = {-168.49730000, 1477.25700000, 17.45040000};
            l_U2343[1]._fU196[12] = 90.33140000;
            l_U2343[1]._fU0[13] = {-152.77470000, 1479.47000000, 17.45000000};
            l_U2343[1]._fU196[13] = 90.33140000;
            l_U2343[1]._fU0[14] = {-163.18180000, 1475.78200000, 17.44350000};
            l_U2343[1]._fU196[14] = 90.33140000;
            l_U2343[1]._fU0[15] = {-168.49730000, 1477.25700000, 17.45040000};
            l_U2343[1]._fU196[15] = 90.33140000;
            l_U2343[2]._fU0[0] = {-219.83070000, 1290.01300000, 22.72580000};
            l_U2343[2]._fU196[0] = 90.33140000;
            l_U2343[2]._fU0[1] = {-219.01990000, 1299.91000000, 22.81200000};
            l_U2343[2]._fU0[2] = {-172.59570000, 1307.31300000, 19.41080000};
            l_U2343[2]._fU0[3] = {-181.84520000, 1307.75000000, 20.24510000};
            l_U2343[2]._fU0[4] = {-185.10500000, 1315.13300000, 19.41140000};
            l_U2343[2]._fU0[5] = {-185.10500000, 1315.13300000, 19.41140000};
            l_U2343[2]._fU0[6] = {-185.10500000, 1315.13300000, 19.41140000};
            l_U2343[2]._fU0[7] = {-184.41730000, 1320.03800000, 19.42560000};
            l_U2343[2]._fU0[8] = {-195.59620000, 1297.40900000, 20.29800000};
            l_U2343[2]._fU0[9] = {-185.97700000, 1296.41300000, 20.26290000};
            l_U2343[2]._fU0[10] = {-194.63960000, 1303.96400000, 21.23530000};
            l_U2343[2]._fU0[11] = {-197.72900000, 1301.13700000, 22.59330000};
            l_U2343[2]._fU0[12] = {-201.73560000, 1301.09900000, 22.60800000};
            l_U2343[2]._fU0[13] = {-201.95400000, 1306.35400000, 22.60860000};
            l_U2343[2]._fU0[14] = {-195.59620000, 1297.40900000, 20.29800000};
            l_U2343[2]._fU0[15] = {-185.97700000, 1296.41300000, 20.26290000};
            l_U2343[3]._fU0[0] = {-478.50210000, 1535.17800000, 17.71060000};
            l_U2343[3]._fU0[1] = {-473.93580000, 1532.33200000, 17.71060000};
            l_U2343[3]._fU0[2] = {-473.36840000, 1525.56900000, 17.71060000};
            l_U2343[3]._fU0[3] = {-474.89940000, 1518.93800000, 17.71060000};
            l_U2343[3]._fU0[4] = {-476.87260000, 1511.89100000, 17.73290000};
            l_U2343[3]._fU0[5] = {-485.31040000, 1508.55700000, 17.71060000};
            l_U2343[3]._fU0[6] = {-493.35670000, 1512.64000000, 17.71060000};
            l_U2343[3]._fU0[7] = {-499.80220000, 1514.07200000, 17.86150000};
            l_U2343[3]._fU0[8] = {-490.38720000, 1520.57300000, 17.71060000};
            l_U2343[3]._fU0[9] = {-482.01380000, 1539.47700000, 17.74010000};
            l_U2343[3]._fU0[10] = {-485.92680000, 1546.52400000, 17.86150000};
            l_U2343[3]._fU0[11] = {-492.60940000, 1538.80400000, 17.86150000};
            l_U2343[3]._fU0[12] = {-491.22750000, 1531.22900000, 17.86920000};
            l_U2343[3]._fU0[13] = {-495.58530000, 1524.65200000, 17.86150000};
            l_U2343[3]._fU0[14] = {-499.92590000, 1522.67400000, 17.86150000};
            l_U2343[3]._fU0[15] = {-493.35670000, 1512.64000000, 17.71060000};
            l_U2343[4]._fU0[0] = {-162.13040000, 1639.51900000, 19.41570000};
            l_U2343[4]._fU0[1] = {-107.63200000, 1635.87500000, 17.99480000};
            l_U2343[4]._fU0[2] = {-114.14730000, 1641.06500000, 17.94370000};
            l_U2343[4]._fU0[3] = {-120.69620000, 1630.45100000, 18.74270000};
            l_U2343[4]._fU0[4] = {-130.74620000, 1627.01000000, 19.35430000};
            l_U2343[4]._fU0[5] = {-141.54210000, 1630.11000000, 19.41570000};
            l_U2343[4]._fU0[6] = {-155.79520000, 1630.31200000, 19.41570000};
            l_U2343[4]._fU0[7] = {-168.92080000, 1629.87000000, 19.41570000};
            l_U2343[4]._fU0[8] = {-174.41430000, 1634.35200000, 19.41570000};
            l_U2343[4]._fU0[9] = {-165.09620000, 1644.42300000, 19.56490000};
            l_U2343[4]._fU0[10] = {-150.94790000, 1644.24000000, 19.56490000};
            l_U2343[4]._fU0[11] = {-140.60340000, 1639.88500000, 19.41570000};
            l_U2343[4]._fU0[12] = {-147.55550000, 1639.70900000, 19.41570000};
            l_U2343[4]._fU0[13] = {-154.65460000, 1640.13200000, 19.41570000};
            l_U2343[4]._fU0[14] = {-154.65460000, 1640.13200000, 19.41570000};
            l_U2343[4]._fU0[15] = {-160.68460000, 1480.05400000, 17.45570000};
            l_U2343[5]._fU0[0] = {-301.16790000, 1374.58400000, 19.27410000};
            l_U2343[5]._fU0[1] = {-297.45370000, 1375.82300000, 19.27410000};
            l_U2343[5]._fU0[2] = {-297.22910000, 1381.39700000, 19.23030000};
            l_U2343[5]._fU0[3] = {-297.30670000, 1384.85100000, 19.23400000};
            l_U2343[5]._fU0[4] = {-300.76740000, 1384.93800000, 19.26280000};
            l_U2343[5]._fU0[5] = {-303.74490000, 1382.73300000, 19.27410000};
            l_U2343[5]._fU0[6] = {-304.57800000, 1378.91700000, 19.27410000};
            l_U2343[5]._fU0[7] = {-306.54670000, 1376.93100000, 19.27410000};
            l_U2343[5]._fU0[8] = {-308.31290000, 1381.12200000, 19.27410000};
            l_U2343[5]._fU0[9] = {-310.11410000, 1383.70000000, 19.26710000};
            l_U2343[5]._fU0[10] = {-309.39420000, 1374.16700000, 19.27410000};
            l_U2343[5]._fU0[11] = {-313.21200000, 1375.74300000, 19.27110000};
            l_U2343[5]._fU0[12] = {-313.08570000, 1378.89300000, 18.58790000};
            l_U2343[5]._fU0[13] = {-318.01160000, 1375.78500000, 16.64970000};
            l_U2343[5]._fU0[14] = {-317.98150000, 1380.36800000, 16.64430000};
            l_U2343[5]._fU0[15] = {-316.98280000, 1383.96500000, 16.65530000};
            l_U2343[6]._fU0[0] = {74.79410000, 1290.77200000, 19.28020000};
            l_U2343[6]._fU0[1] = {73.65060000, 1270.03500000, 19.28080000};
            l_U2343[6]._fU0[2] = {70.47360000, 1269.35800000, 19.28090000};
            l_U2343[6]._fU0[3] = {64.92900000, 1269.20800000, 19.30420000};
            l_U2343[6]._fU0[4] = {61.83020000, 1269.49100000, 19.33660000};
            l_U2343[6]._fU0[5] = {54.66980000, 1269.25300000, 19.42930000};
            l_U2343[6]._fU0[6] = {73.75260000, 1276.80000000, 19.28050000};
            l_U2343[6]._fU0[7] = {72.65040000, 1282.84800000, 19.28050000};
            l_U2343[6]._fU0[8] = {73.66520000, 1288.32400000, 19.28040000};
            l_U2343[6]._fU0[9] = {73.19950000, 1292.66300000, 19.28020000};
            l_U2343[6]._fU0[10] = {73.43150000, 1296.61700000, 19.28000000};
            l_U2343[6]._fU0[11] = {71.71350000, 1303.82100000, 19.27990000};
            l_U2343[6]._fU0[12] = {67.63700000, 1304.96100000, 18.71840000};
            l_U2343[6]._fU0[13] = {63.40220000, 1305.10500000, 17.03060000};
            l_U2343[6]._fU0[14] = {64.05550000, 1307.29000000, 17.03060000};
            l_U2343[6]._fU0[15] = {57.29380000, 1305.07100000, 17.04160000};
            break;
            case 1:
            case 2:
            l_U2343[0]._fU0[0] = {-437.48650000, 431.74620000, 8.94110000};
            l_U2343[0]._fU0[1] = {-431.21930000, 430.35640000, 9.28720000};
            l_U2343[0]._fU0[2] = {-425.50320000, 431.56650000, 9.80340000};
            l_U2343[0]._fU0[3] = {-421.37720000, 429.12020000, 10.26000000};
            l_U2343[0]._fU0[4] = {-419.50810000, 406.23130000, 10.49510000};
            l_U2343[0]._fU0[5] = {-414.56680000, 413.40010000, 11.24200000};
            l_U2343[0]._fU0[6] = {-415.25490000, 423.50730000, 11.14360000};
            l_U2343[0]._fU0[7] = {-415.28270000, 427.17110000, 11.08270000};
            l_U2343[0]._fU0[8] = {-411.76390000, 430.68620000, 11.45440000};
            l_U2343[0]._fU0[9] = {-412.99190000, 446.33930000, 11.29760000};
            l_U2343[0]._fU0[10] = {-411.44490000, 455.92990000, 11.50820000};
            l_U2343[0]._fU0[11] = {-411.05700000, 440.20370000, 11.47630000};
            l_U2343[0]._fU0[12] = {-407.84870000, 434.74000000, 11.60340000};
            l_U2343[0]._fU0[13] = {-407.32140000, 428.48160000, 12.83080000};
            l_U2343[0]._fU0[14] = {-402.96470000, 425.85110000, 13.74690000};
            l_U2343[0]._fU0[15] = {-402.05830000, 432.08540000, 13.74690000};
            l_U2343[1]._fU0[0] = {16.75040000, -398.09330000, 13.76870000};
            l_U2343[1]._fU0[1] = {20.33040000, -397.93340000, 13.75220000};
            l_U2343[1]._fU0[2] = {19.57410000, -387.70370000, 13.75370000};
            l_U2343[1]._fU0[3] = {18.54560000, -380.96120000, 13.75880000};
            l_U2343[1]._fU0[4] = {11.51670000, -377.90900000, 13.76290000};
            l_U2343[1]._fU0[5] = {19.11120000, -375.84240000, 13.75520000};
            l_U2343[1]._fU0[6] = {17.52790000, -354.31820000, 13.76020000};
            l_U2343[1]._fU0[7] = {19.26860000, -353.68900000, 13.75980000};
            l_U2343[1]._fU0[8] = {19.70850000, -358.18260000, 13.75960000};
            l_U2343[1]._fU0[9] = {19.74070000, -364.12740000, 13.75030000};
            l_U2343[1]._fU0[10] = {41.75500000, -364.89940000, 13.74440000};
            l_U2343[1]._fU0[11] = {34.29370000, -365.20410000, 13.74460000};
            l_U2343[1]._fU0[12] = {29.11070000, -365.13340000, 13.73720000};
            l_U2343[1]._fU0[13] = {21.85770000, -365.85680000, 13.73080000};
            l_U2343[1]._fU0[14] = {21.87180000, -371.25280000, 13.74730000};
            l_U2343[1]._fU0[15] = {27.20260000, -370.81630000, 13.74550000};
            l_U2343[2]._fU0[0] = {-493.28090000, -27.93230000, 6.86060000};
            l_U2343[2]._fU0[1] = {-492.98150000, -20.87910000, 6.86060000};
            l_U2343[2]._fU0[2] = {-493.20840000, -13.91250000, 6.86060000};
            l_U2343[2]._fU0[3] = {-490.47750000, -17.20500000, 8.85850000};
            l_U2343[2]._fU0[4] = {-493.05260000, 26.88350000, 6.85200000};
            l_U2343[2]._fU0[5] = {-485.71920000, 29.14490000, 7.10610000};
            l_U2343[2]._fU0[6] = {-482.26550000, 26.12290000, 7.10610000};
            l_U2343[2]._fU0[7] = {-488.70930000, 20.53060000, 6.85040000};
            l_U2343[2]._fU0[8] = {-493.14490000, 20.78800000, 6.85040000};
            l_U2343[2]._fU0[9] = {-488.27590000, 15.16130000, 6.85040000};
            l_U2343[2]._fU0[10] = {-490.75950000, 10.19050000, 6.85040000};
            l_U2343[2]._fU0[11] = {-488.21840000, 7.60490000, 6.85040000};
            l_U2343[2]._fU0[12] = {-493.24940000, 3.50570000, 6.80450000};
            l_U2343[2]._fU0[13] = {-488.42100000, -0.06910000, 6.85040000};
            l_U2343[2]._fU0[14] = {-493.58220000, -6.66370000, 6.86040000};
            l_U2343[2]._fU0[15] = {-490.67410000, -10.01220000, 6.86040000};
            l_U2343[3]._fU0[0] = {435.22790000, 13.90880000, 7.68510000};
            l_U2343[3]._fU0[1] = {439.55020000, 16.51550000, 7.74360000};
            l_U2343[3]._fU0[2] = {439.95940000, 19.30830000, 7.75420000};
            l_U2343[3]._fU0[3] = {434.22640000, 19.72770000, 7.73080000};
            l_U2343[3]._fU0[4] = {431.83240000, 24.86540000, 7.85640000};
            l_U2343[3]._fU0[5] = {436.30940000, 27.56060000, 7.85700000};
            l_U2343[3]._fU0[6] = {430.62760000, 29.63000000, 7.85630000};
            l_U2343[3]._fU0[7] = {425.71670000, 27.14280000, 7.85580000};
            l_U2343[3]._fU0[8] = {427.33000000, 20.21910000, 7.81680000};
            l_U2343[3]._fU0[9] = {429.12630000, 13.22320000, 7.70420000};
            l_U2343[3]._fU0[10] = {430.88440000, 8.39750000, 7.67270000};
            l_U2343[3]._fU0[11] = {436.62230000, 10.11810000, 7.66230000};
            l_U2343[3]._fU0[12] = {442.91100000, 13.00400000, 7.77240000};
            l_U2343[3]._fU0[13] = {445.43410000, 19.11840000, 7.82140000};
            l_U2343[3]._fU0[14] = {443.81920000, 27.86470000, 7.85780000};
            l_U2343[3]._fU0[15] = {441.82360000, 33.53060000, 7.85750000};
            l_U2343[4]._fU0[0] = {-88.09050000, -935.00560000, 4.11730000};
            l_U2343[4]._fU0[1] = {-88.69630000, -929.59530000, 4.11730000};
            l_U2343[4]._fU0[2] = {-88.57370000, -922.96780000, 4.11730000};
            l_U2343[4]._fU0[3] = {-87.78130000, -917.07620000, 4.11730000};
            l_U2343[4]._fU0[4] = {-87.27190000, -910.77150000, 4.11730000};
            l_U2343[4]._fU0[5] = {-92.26220000, -910.52760000, 4.11730000};
            l_U2343[4]._fU0[6] = {-94.08820000, -905.09880000, 4.11730000};
            l_U2343[4]._fU0[7] = {-89.32580000, -902.59800000, 4.11730000};
            l_U2343[4]._fU0[8] = {-94.35840000, -946.42770000, 4.11810000};
            l_U2343[4]._fU0[9] = {-88.78440000, -950.46360000, 4.11810000};
            l_U2343[4]._fU0[10] = {-91.61820000, -957.06130000, 4.11800000};
            l_U2343[4]._fU0[11] = {-86.65870000, -959.24290000, 4.11820000};
            l_U2343[4]._fU0[12] = {-80.63820000, -959.83000000, 4.11740000};
            l_U2343[4]._fU0[13] = {-75.49750000, -952.17200000, 4.11750000};
            l_U2343[4]._fU0[14] = {-69.34150000, -956.70900000, 3.95660000};
            l_U2343[4]._fU0[15] = {-67.61510000, -947.31790000, 4.11750000};
            l_U2343[5]._fU0[0] = {8.31150000, 791.58630000, 13.56300000};
            l_U2343[5]._fU0[1] = {11.88140000, 782.84710000, 13.56300000};
            l_U2343[5]._fU0[2] = {6.17040000, 774.78820000, 13.56340000};
            l_U2343[5]._fU0[3] = {7.38150000, 768.18050000, 13.56340000};
            l_U2343[5]._fU0[4] = {2.64290000, 769.31210000, 13.56340000};
            l_U2343[5]._fU0[5] = {-2.60010000, 768.75220000, 13.56340000};
            l_U2343[5]._fU0[6] = {-2.99530000, 761.93240000, 13.56270000};
            l_U2343[5]._fU0[7] = {5.04420000, 760.57180000, 13.56340000};
            l_U2343[5]._fU0[8] = {4.12580000, 759.03030000, 13.56340000};
            l_U2343[5]._fU0[9] = {1.17160000, 754.40340000, 13.56340000};
            l_U2343[5]._fU0[10] = {1.25810000, 749.30880000, 13.56340000};
            l_U2343[5]._fU0[11] = {3.98040000, 747.18680000, 13.56340000};
            l_U2343[5]._fU0[12] = {1.75550000, 742.11130000, 13.56340000};
            l_U2343[5]._fU0[13] = {1.41520000, 737.29100000, 13.56340000};
            l_U2343[5]._fU0[14] = {-4.72080000, 739.48240000, 13.56270000};
            l_U2343[5]._fU0[15] = {-6.24270000, 734.89320000, 13.56270000};
            l_U2343[6]._fU0[0] = {-407.33190000, -194.38260000, 12.07630000};
            l_U2343[6]._fU0[1] = {-404.94580000, -189.69330000, 12.07630000};
            l_U2343[6]._fU0[2] = {-401.74490000, -190.35260000, 12.07630000};
            l_U2343[6]._fU0[3] = {-399.87400000, -193.16420000, 12.06250000};
            l_U2343[6]._fU0[4] = {-397.99160000, -195.45640000, 11.96150000};
            l_U2343[6]._fU0[5] = {-400.73710000, -198.56870000, 11.82450000};
            l_U2343[6]._fU0[6] = {-404.48860000, -205.47620000, 10.37780000};
            l_U2343[6]._fU0[7] = {-400.04840000, -209.46240000, 10.37780000};
            l_U2343[6]._fU0[8] = {-398.29840000, -204.51790000, 10.37780000};
            l_U2343[6]._fU0[9] = {-392.74030000, -224.02030000, 11.49280000};
            l_U2343[6]._fU0[10] = {-393.40910000, -217.86400000, 11.55940000};
            l_U2343[6]._fU0[11] = {-395.50560000, -212.85980000, 11.67780000};
            l_U2343[6]._fU0[12] = {-393.90890000, -208.27200000, 11.67780000};
            l_U2343[6]._fU0[13] = {63.40220000, 1305.10500000, 17.03060000};
            l_U2343[6]._fU0[14] = {-393.95430000, -205.07690000, 11.67780000};
            l_U2343[6]._fU0[15] = {-393.95430000, -205.07690000, 11.67780000};
            break;
        }
    }
    else if (l_U1933._fU756[2] == 1)
    {
        switch (l_U1933._fU848)
        {
            case 0:
            l_U2343[0]._fU0[0] = {-2052.39600000, 183.99800000, 11.07810000};
            l_U2343[0]._fU0[1] = {-2065.54800000, 186.32160000, 11.18960000};
            l_U2343[0]._fU0[2] = {-2075.81600000, 187.76540000, 11.27460000};
            l_U2343[0]._fU0[3] = {-2089.05600000, 188.57760000, 11.38690000};
            l_U2343[0]._fU0[4] = {-2095.90200000, 186.77210000, 11.44460000};
            l_U2343[0]._fU0[5] = {-2093.86100000, 180.42220000, 11.21250000};
            l_U2343[0]._fU0[6] = {-2089.28300000, 175.67900000, 11.05390000};
            l_U2343[0]._fU0[7] = {-2080.28500000, 181.22640000, 11.17820000};
            l_U2343[0]._fU0[8] = {-2071.50900000, 173.27680000, 11.04550000};
            l_U2343[0]._fU0[9] = {-2072.45300000, 178.69200000, 11.09500000};
            l_U2343[0]._fU0[10] = {-2072.86000000, 183.82830000, 11.20280000};
            l_U2343[0]._fU0[11] = {-2065.39600000, 182.71930000, 11.15540000};
            l_U2343[0]._fU0[12] = {-2060.15000000, 181.61440000, 11.11240000};
            l_U2343[0]._fU0[13] = {-2055.22300000, 180.17420000, 11.08010000};
            l_U2343[0]._fU0[14] = {-2055.72100000, 173.56610000, 11.04550000};
            l_U2343[0]._fU0[15] = {-2058.23200000, 168.16020000, 11.04550000};
            l_U2343[1]._fU0[0] = {-1559.49000000, 136.17340000, 9.87730000};
            l_U2343[1]._fU0[1] = {-1568.68500000, 136.97840000, 11.03590000};
            l_U2343[1]._fU0[2] = {-1567.80700000, 161.68670000, 10.58790000};
            l_U2343[1]._fU0[3] = {-1558.97900000, 169.85050000, 9.44660000};
            l_U2343[1]._fU0[4] = {-1547.20300000, 176.18880000, 9.27370000};
            l_U2343[1]._fU0[5] = {-1539.21600000, 176.74920000, 9.39310000};
            l_U2343[1]._fU0[6] = {-1530.19100000, 174.02800000, 9.48810000};
            l_U2343[1]._fU0[7] = {-1531.57100000, 165.50750000, 9.48810000};
            l_U2343[1]._fU0[8] = {-1537.66900000, 164.43520000, 9.41550000};
            l_U2343[1]._fU0[9] = {-1538.02900000, 157.91140000, 9.48760000};
            l_U2343[1]._fU0[10] = {-1542.93600000, 155.08470000, 9.58500000};
            l_U2343[1]._fU0[11] = {-1545.65400000, 163.67990000, 9.49530000};
            l_U2343[1]._fU0[12] = {-1547.26000000, 167.67500000, 9.48810000};
            l_U2343[1]._fU0[13] = {-1553.77600000, 163.14150000, 9.48810000};
            l_U2343[1]._fU0[14] = {-1556.28400000, 156.91100000, 9.48760000};
            l_U2343[1]._fU0[15] = {-1556.28400000, 156.91100000, 9.48760000};
            l_U2343[2]._fU0[0] = {-1370.01100000, 369.08160000, 13.62030000};
            l_U2343[2]._fU0[1] = {-1380.16200000, 368.38020000, 13.62030000};
            l_U2343[2]._fU0[2] = {-1386.81500000, 368.80300000, 13.62030000};
            l_U2343[2]._fU0[3] = {-1377.97700000, 364.98560000, 13.62030000};
            l_U2343[2]._fU0[4] = {-1370.02000000, 363.23610000, 13.62030000};
            l_U2343[2]._fU0[5] = {-1371.18400000, 358.49980000, 13.62030000};
            l_U2343[2]._fU0[6] = {-1381.66800000, 355.61830000, 13.62030000};
            l_U2343[2]._fU0[7] = {-1377.68400000, 347.69560000, 13.62030000};
            l_U2343[2]._fU0[8] = {-1370.15600000, 344.45430000, 13.62030000};
            l_U2343[2]._fU0[9] = {-1369.45900000, 337.68900000, 13.62030000};
            l_U2343[2]._fU0[10] = {-1376.11400000, 335.72680000, 13.62030000};
            l_U2343[2]._fU0[11] = {-1376.72600000, 328.98370000, 13.62030000};
            l_U2343[2]._fU0[12] = {-1382.29200000, 326.04930000, 13.62030000};
            l_U2343[2]._fU0[13] = {-1391.77600000, 328.02460000, 13.62030000};
            l_U2343[2]._fU0[14] = {-1391.69700000, 332.10710000, 13.62030000};
            l_U2343[2]._fU0[15] = {-1391.69700000, 332.10710000, 13.62030000};
            l_U2343[3]._fU0[0] = {-1746.64200000, 462.24400000, 25.69460000};
            l_U2343[3]._fU0[1] = {-1750.29300000, 465.16460000, 25.93110000};
            l_U2343[3]._fU0[2] = {-1746.86300000, 469.39710000, 26.02310000};
            l_U2343[3]._fU0[3] = {-1742.04800000, 469.14590000, 26.16620000};
            l_U2343[3]._fU0[4] = {-1739.93500000, 463.48460000, 25.40400000};
            l_U2343[3]._fU0[5] = {-1741.02600000, 459.69030000, 25.25930000};
            l_U2343[3]._fU0[6] = {-1735.39500000, 460.43820000, 25.08780000};
            l_U2343[3]._fU0[7] = {-1731.19800000, 464.34910000, 25.22580000};
            l_U2343[3]._fU0[8] = {-1728.23700000, 461.02710000, 24.53740000};
            l_U2343[3]._fU0[9] = {-1729.71200000, 456.05770000, 24.44430000};
            l_U2343[3]._fU0[10] = {-1731.38800000, 453.91330000, 24.44430000};
            l_U2343[3]._fU0[11] = {-1728.69700000, 452.01090000, 24.44430000};
            l_U2343[3]._fU0[12] = {-1723.58100000, 459.84960000, 24.44430000};
            l_U2343[3]._fU0[13] = {-1720.33300000, 465.46360000, 24.44430000};
            l_U2343[3]._fU0[14] = {-1716.79000000, 471.00510000, 24.44440000};
            l_U2343[3]._fU0[15] = {-1723.58100000, 459.84960000, 24.44430000};
            l_U2343[4]._fU0[0] = {-1393.19000000, -75.55330000, 5.33580000};
            l_U2343[4]._fU0[1] = {-1388.33600000, -83.69490000, 5.29740000};
            l_U2343[4]._fU0[2] = {-1382.01900000, -89.63620000, 5.48440000};
            l_U2343[4]._fU0[3] = {-1364.14100000, -89.93450000, 5.55910000};
            l_U2343[4]._fU0[4] = {-1348.16400000, -89.62490000, 5.62590000};
            l_U2343[4]._fU0[5] = {-1352.58400000, -87.29230000, 5.29830000};
            l_U2343[4]._fU0[6] = {-1364.46000000, -87.08850000, 5.29830000};
            l_U2343[4]._fU0[7] = {-1370.25600000, -84.90320000, 5.29740000};
            l_U2343[4]._fU0[8] = {-1365.00700000, -81.05330000, 5.29740000};
            l_U2343[4]._fU0[9] = {-1356.37400000, -58.66480000, 5.29870000};
            l_U2343[4]._fU0[10] = {-1359.91700000, -65.96940000, 5.29870000};
            l_U2343[4]._fU0[11] = {-1367.59100000, -66.90850000, 5.29870000};
            l_U2343[4]._fU0[12] = {-1369.28300000, -73.31490000, 5.29740000};
            l_U2343[4]._fU0[13] = {-1370.89300000, -76.73660000, 5.29740000};
            l_U2343[4]._fU0[14] = {-1373.21900000, -69.74040000, 5.91190000};
            l_U2343[4]._fU0[15] = {-1372.69300000, -66.09700000, 5.91220000};
            l_U2343[5]._fU0[0] = {-1387.12900000, 563.24600000, 11.47750000};
            l_U2343[5]._fU0[1] = {-1385.64300000, 570.07460000, 11.47750000};
            l_U2343[5]._fU0[2] = {-1383.17800000, 575.48390000, 11.47750000};
            l_U2343[5]._fU0[3] = {-1380.02600000, 579.88640000, 11.47740000};
            l_U2343[5]._fU0[4] = {-1378.10800000, 584.49600000, 11.47740000};
            l_U2343[5]._fU0[5] = {-1373.96700000, 582.75230000, 11.47740000};
            l_U2343[5]._fU0[6] = {-1373.62300000, 576.44460000, 11.47750000};
            l_U2343[5]._fU0[7] = {-1378.18700000, 574.93160000, 11.47750000};
            l_U2343[5]._fU0[8] = {-1375.86600000, 570.78070000, 11.47750000};
            l_U2343[5]._fU0[9] = {-1375.09700000, 567.63550000, 11.47750000};
            l_U2343[5]._fU0[10] = {-1379.50900000, 565.06710000, 11.47750000};
            l_U2343[5]._fU0[11] = {-1380.88100000, 560.37970000, 11.47750000};
            l_U2343[5]._fU0[12] = {-1375.34200000, 557.80240000, 11.47940000};
            l_U2343[5]._fU0[13] = {-1376.80000000, 554.51350000, 11.49000000};
            l_U2343[5]._fU0[14] = {-1381.62300000, 551.18040000, 11.49060000};
            l_U2343[5]._fU0[15] = {-1382.28400000, 555.75960000, 11.47750000};
            l_U2343[6]._fU0[0] = {-1766.50300000, 18.87050000, 8.70200000};
            l_U2343[6]._fU0[1] = {-1768.87100000, 22.74660000, 8.74670000};
            l_U2343[6]._fU0[2] = {-1771.30200000, 27.30190000, 8.79830000};
            l_U2343[6]._fU0[3] = {-1774.47900000, 32.51140000, 8.85000000};
            l_U2343[6]._fU0[4] = {-1762.48000000, 30.75420000, 8.33030000};
            l_U2343[6]._fU0[5] = {-1759.93400000, 28.61000000, 8.33030000};
            l_U2343[6]._fU0[6] = {-1761.55700000, 21.06410000, 8.33030000};
            l_U2343[6]._fU0[7] = {-1764.11200000, 22.90230000, 8.33030000};
            l_U2343[6]._fU0[8] = {-1757.04600000, 29.47150000, 8.33030000};
            l_U2343[6]._fU0[9] = {-1754.84600000, 31.31230000, 8.33030000};
            l_U2343[6]._fU0[10] = {-1751.39900000, 30.21940000, 8.33030000};
            l_U2343[6]._fU0[11] = {-1747.25900000, 32.57840000, 8.33030000};
            l_U2343[6]._fU0[12] = {-1745.63700000, 35.70230000, 8.33030000};
            l_U2343[6]._fU0[13] = {-1738.85800000, 38.58300000, 8.33030000};
            l_U2343[6]._fU0[14] = {-1741.63500000, 42.42540000, 8.33030000};
            l_U2343[6]._fU0[15] = {-1759.93400000, 28.61000000, 8.33030000};
            break;
            case 1:
            l_U2343[0]._fU0[0] = {-1081.07700000, -576.08640000, 1.84710000};
            l_U2343[0]._fU0[1] = {-1070.37400000, -576.77860000, 1.84710000};
            l_U2343[0]._fU0[2] = {-1069.76100000, -583.45560000, 1.84710000};
            l_U2343[0]._fU0[3] = {-1069.90800000, -589.31740000, 1.84710000};
            l_U2343[0]._fU0[4] = {-1076.80600000, -594.32940000, 2.01050000};
            l_U2343[0]._fU0[5] = {-1080.67400000, -594.50120000, 2.59390000};
            l_U2343[0]._fU0[6] = {-1080.58200000, -585.81290000, 1.84220000};
            l_U2343[0]._fU0[7] = {-1066.98500000, -594.73000000, 2.01050000};
            l_U2343[0]._fU0[8] = {-1061.96600000, -595.62260000, 2.01050000};
            l_U2343[0]._fU0[9] = {-1054.86300000, -596.09330000, 2.01050000};
            l_U2343[0]._fU0[10] = {-1053.84900000, -589.91330000, 1.84710000};
            l_U2343[0]._fU0[11] = {-1059.23700000, -587.57780000, 1.84710000};
            l_U2343[0]._fU0[12] = {-1061.49200000, -581.85700000, 1.84710000};
            l_U2343[0]._fU0[13] = {-1056.47200000, -575.59550000, 1.84710000};
            l_U2343[0]._fU0[14] = {-1062.28600000, -569.44410000, 1.84710000};
            l_U2343[0]._fU0[15] = {-1069.08700000, -567.76950000, 1.84710000};
            l_U2343[1]._fU0[0] = {-1586.02800000, -317.24440000, -3.94190000};
            l_U2343[1]._fU0[1] = {-1584.13300000, -309.87170000, -4.13670000};
            l_U2343[1]._fU0[2] = {-1578.81900000, -305.61170000, -3.32890000};
            l_U2343[1]._fU0[3] = {-1577.16100000, -297.38880000, -3.63380000};
            l_U2343[1]._fU0[4] = {-1580.01600000, -292.80190000, -3.20660000};
            l_U2343[1]._fU0[5] = {-1585.06200000, -297.31060000, -3.45480000};
            l_U2343[1]._fU0[6] = {-1589.30700000, -312.95680000, -4.02920000};
            l_U2343[1]._fU0[7] = {-1596.86900000, -316.82080000, -3.81120000};
            l_U2343[1]._fU0[8] = {-1609.28400000, -326.73790000, -2.22190000};
            l_U2343[1]._fU0[9] = {-1608.56100000, -320.72240000, -2.70800000};
            l_U2343[1]._fU0[10] = {-1603.15100000, -317.99880000, -3.79950000};
            l_U2343[1]._fU0[11] = {-1606.29300000, -313.89720000, -3.38650000};
            l_U2343[1]._fU0[12] = {-1602.43500000, -310.68130000, -4.02750000};
            l_U2343[1]._fU0[13] = {-1598.78700000, -305.60100000, -3.72640000};
            l_U2343[1]._fU0[14] = {-1591.68400000, -300.83940000, -3.68860000};
            l_U2343[1]._fU0[15] = {-1587.99900000, -297.34330000, -3.45960000};
            l_U2343[2]._fU0[0] = {-1053.09100000, -299.38550000, 1.91840000};
            l_U2343[2]._fU0[1] = {-1043.01200000, -307.05500000, 1.91840000};
            l_U2343[2]._fU0[2] = {-1039.86200000, -305.17000000, 1.91840000};
            l_U2343[2]._fU0[3] = {-1046.71800000, -298.44520000, 1.91840000};
            l_U2343[2]._fU0[4] = {-1017.37700000, -262.65350000, 1.95640000};
            l_U2343[2]._fU0[5] = {-1022.28300000, -266.76530000, 1.91860000};
            l_U2343[2]._fU0[6] = {-1025.83700000, -270.23460000, 1.91860000};
            l_U2343[2]._fU0[7] = {-1028.39900000, -273.47840000, 1.91860000};
            l_U2343[2]._fU0[8] = {-1047.56500000, -291.93550000, 2.04950000};
            l_U2343[2]._fU0[9] = {-1044.17200000, -288.65110000, 2.04950000};
            l_U2343[2]._fU0[10] = {-1042.04600000, -286.09340000, 2.04950000};
            l_U2343[2]._fU0[11] = {-1040.68300000, -284.24540000, 2.04950000};
            l_U2343[2]._fU0[12] = {-1033.64900000, -284.68770000, 1.91860000};
            l_U2343[2]._fU0[13] = {-1030.61000000, -281.54060000, 1.91860000};
            l_U2343[2]._fU0[14] = {-1028.83200000, -280.05900000, 1.91860000};
            l_U2343[2]._fU0[15] = {-1027.78900000, -278.61930000, 1.91860000};
            l_U2343[3]._fU0[0] = {-1961.81900000, -639.30740000, 2.01510000};
            l_U2343[3]._fU0[1] = {-1965.73700000, -640.79620000, 2.01510000};
            l_U2343[3]._fU0[2] = {-1968.17000000, -646.19700000, 1.83790000};
            l_U2343[3]._fU0[3] = {-1972.20600000, -650.41880000, 1.83790000};
            l_U2343[3]._fU0[4] = {-1972.02500000, -655.06410000, 1.83790000};
            l_U2343[3]._fU0[5] = {-1968.21200000, -660.76730000, 1.83800000};
            l_U2343[3]._fU0[6] = {-1993.54200000, -683.69230000, 1.83800000};
            l_U2343[3]._fU0[7] = {-1987.40600000, -679.80770000, 1.83800000};
            l_U2343[3]._fU0[8] = {-1981.04200000, -682.24160000, 1.83800000};
            l_U2343[3]._fU0[9] = {-1962.20800000, -681.60470000, 1.83800000};
            l_U2343[3]._fU0[10] = {-1974.29100000, -681.85120000, 1.83800000};
            l_U2343[3]._fU0[11] = {-1970.58800000, -678.68660000, 1.83800000};
            l_U2343[3]._fU0[12] = {-1967.95500000, -670.47230000, 1.83800000};
            l_U2343[3]._fU0[13] = {-1962.66100000, -669.89620000, 1.83800000};
            l_U2343[3]._fU0[14] = {-1965.05100000, -666.53280000, 2.01470000};
            l_U2343[3]._fU0[15] = {-1965.54000000, -659.18800000, 2.01510000};
            l_U2343[4]._fU0[0] = {-1906.23300000, -288.54870000, 4.43760000};
            l_U2343[4]._fU0[1] = {-1913.44500000, -290.52760000, 4.43760000};
            l_U2343[4]._fU0[2] = {-1927.33500000, -291.16800000, 4.43760000};
            l_U2343[4]._fU0[3] = {-1928.94000000, -282.08310000, 4.43760000};
            l_U2343[4]._fU0[4] = {-1912.96200000, -279.42010000, 4.43760000};
            l_U2343[4]._fU0[5] = {-1926.75500000, -297.91100000, 3.73710000};
            l_U2343[4]._fU0[6] = {-1932.01700000, -298.44540000, 3.56330000};
            l_U2343[4]._fU0[7] = {-1931.98500000, -306.88120000, 1.78250000};
            l_U2343[4]._fU0[8] = {-1926.64000000, -306.36250000, 1.74230000};
            l_U2343[4]._fU0[9] = {-1920.79100000, -302.57830000, 1.62940000};
            l_U2343[4]._fU0[10] = {-1918.95400000, -308.37280000, 1.83240000};
            l_U2343[4]._fU0[11] = {-1909.02200000, -313.68610000, 1.87280000};
            l_U2343[4]._fU0[12] = {-1905.21800000, -322.14720000, 1.95960000};
            l_U2343[4]._fU0[13] = {-1927.16700000, -314.13890000, 1.95960000};
            l_U2343[4]._fU0[14] = {-1905.67800000, -287.35710000, 4.43760000};
            l_U2343[4]._fU0[15] = {-1904.61500000, -279.71460000, 4.43760000};
            l_U2343[5]._fU0[0] = {-1256.19200000, -418.93840000, 5.23790000};
            l_U2343[5]._fU0[1] = {-1260.52500000, -418.77940000, 5.23790000};
            l_U2343[5]._fU0[2] = {-1264.38100000, -415.89580000, 5.23790000};
            l_U2343[5]._fU0[3] = {-1266.97600000, -413.04090000, 5.23790000};
            l_U2343[5]._fU0[4] = {-1272.10400000, -418.15250000, 5.23790000};
            l_U2343[5]._fU0[5] = {-1278.29500000, -419.57950000, 5.23790000};
            l_U2343[5]._fU0[6] = {-1283.16900000, -418.64460000, 5.23790000};
            l_U2343[5]._fU0[7] = {-1281.33000000, -416.12250000, 5.23790000};
            l_U2343[5]._fU0[8] = {-1277.80700000, -412.78750000, 5.23790000};
            l_U2343[5]._fU0[9] = {-1272.31200000, -412.47490000, 5.23790000};
            l_U2343[5]._fU0[10] = {-1270.09800000, -407.86300000, 5.23790000};
            l_U2343[5]._fU0[11] = {-1273.33600000, -405.43240000, 5.23790000};
            l_U2343[5]._fU0[12] = {-1270.81400000, -400.20850000, 5.23790000};
            l_U2343[5]._fU0[13] = {-1274.38400000, -395.88570000, 5.23790000};
            l_U2343[5]._fU0[14] = {-1269.02400000, -390.92780000, 5.23790000};
            l_U2343[5]._fU0[15] = {-1276.32700000, -387.54520000, 5.23790000};
            l_U2343[6]._fU0[0] = {-1645.32700000, -601.87350000, 1.83720000};
            l_U2343[6]._fU0[1] = {-1648.65500000, -604.91610000, 1.83720000};
            l_U2343[6]._fU0[2] = {-1646.38800000, -618.28620000, 1.83720000};
            l_U2343[6]._fU0[3] = {-1641.82600000, -617.68300000, 1.83720000};
            l_U2343[6]._fU0[4] = {-1640.42600000, -611.99630000, 1.83720000};
            l_U2343[6]._fU0[5] = {-1638.67200000, -607.36740000, 1.83720000};
            l_U2343[6]._fU0[6] = {-1641.24500000, -602.67660000, 1.83720000};
            l_U2343[6]._fU0[7] = {-1642.15700000, -597.87550000, 1.83720000};
            l_U2343[6]._fU0[8] = {-1636.07500000, -597.00720000, 1.83720000};
            l_U2343[6]._fU0[9] = {-1629.90100000, -596.96670000, 1.83720000};
            l_U2343[6]._fU0[10] = {-1622.00900000, -595.25750000, 1.83720000};
            l_U2343[6]._fU0[11] = {-1625.22800000, -592.38180000, 1.83720000};
            l_U2343[6]._fU0[12] = {-1633.81700000, -593.03520000, 1.83720000};
            l_U2343[6]._fU0[13] = {-1639.93200000, -593.00590000, 1.83720000};
            l_U2343[6]._fU0[14] = {-1649.16700000, -593.65110000, 1.83720000};
            l_U2343[6]._fU0[15] = {-1642.15700000, -597.87550000, 1.83720000};
            break;
            case 2:
            l_U2343[0]._fU0[0] = {-1361.72300000, 1695.21100000, 26.82030000};
            l_U2343[0]._fU0[1] = {-1365.46200000, 1706.47800000, 26.82030000};
            l_U2343[0]._fU0[2] = {-1359.48400000, 1709.11500000, 26.82030000};
            l_U2343[0]._fU0[3] = {-1356.93600000, 1713.13500000, 26.82030000};
            l_U2343[0]._fU0[4] = {-1360.92200000, 1719.95300000, 26.82030000};
            l_U2343[0]._fU0[5] = {-1348.65000000, 1725.86700000, 26.82180000};
            l_U2343[0]._fU0[6] = {-1353.70200000, 1723.29900000, 26.82030000};
            l_U2343[0]._fU0[7] = {-1357.58900000, 1721.95900000, 26.82030000};
            l_U2343[0]._fU0[8] = {-1354.23300000, 1718.52400000, 26.82030000};
            l_U2343[0]._fU0[9] = {-1350.32900000, 1720.60300000, 26.82030000};
            l_U2343[0]._fU0[10] = {-1345.01200000, 1717.95800000, 26.82030000};
            l_U2343[0]._fU0[11] = {-1339.11900000, 1715.46500000, 26.79210000};
            l_U2343[0]._fU0[12] = {-1334.53500000, 1713.70000000, 26.75540000};
            l_U2343[0]._fU0[13] = {-1333.84800000, 1717.08900000, 26.78710000};
            l_U2343[0]._fU0[14] = {-1338.92900000, 1725.02000000, 26.82030000};
            l_U2343[0]._fU0[15] = {-1342.03800000, 1727.83500000, 26.82030000};
            l_U2343[1]._fU0[0] = {-975.33120000, 1498.39900000, 22.23530000};
            l_U2343[1]._fU0[1] = {-975.20570000, 1507.74900000, 22.23450000};
            l_U2343[1]._fU0[2] = {-974.24940000, 1517.45900000, 22.23150000};
            l_U2343[1]._fU0[3] = {-978.75100000, 1521.06800000, 22.24730000};
            l_U2343[1]._fU0[4] = {-980.59710000, 1523.53600000, 22.45360000};
            l_U2343[1]._fU0[5] = {-986.09760000, 1521.16400000, 22.25350000};
            l_U2343[1]._fU0[6] = {-993.31760000, 1521.80100000, 22.25350000};
            l_U2343[1]._fU0[7] = {-1002.19500000, 1522.24400000, 22.25350000};
            l_U2343[1]._fU0[8] = {-1006.50500000, 1521.83000000, 22.25350000};
            l_U2343[1]._fU0[9] = {-989.37790000, 1514.78000000, 22.25350000};
            l_U2343[1]._fU0[10] = {-989.19270000, 1510.10800000, 22.25350000};
            l_U2343[1]._fU0[11] = {-995.53720000, 1510.98100000, 22.25350000};
            l_U2343[1]._fU0[12] = {-1000.45300000, 1510.60900000, 22.25350000};
            l_U2343[1]._fU0[13] = {-1006.91600000, 1514.63400000, 22.25330000};
            l_U2343[1]._fU0[14] = {-1007.40200000, 1511.07600000, 22.25280000};
            l_U2343[1]._fU0[15] = {-1007.40200000, 1511.07600000, 22.25280000};
            l_U2343[2]._fU0[0] = {-1185.09700000, 1293.22900000, 21.81880000};
            l_U2343[2]._fU0[1] = {-1181.49300000, 1296.65000000, 21.88830000};
            l_U2343[2]._fU0[2] = {-1180.28000000, 1291.46300000, 21.96420000};
            l_U2343[2]._fU0[3] = {-1178.25700000, 1292.99800000, 22.03180000};
            l_U2343[2]._fU0[4] = {-1177.39600000, 1296.38900000, 22.08020000};
            l_U2343[2]._fU0[5] = {-1175.90700000, 1298.39000000, 22.14560000};
            l_U2343[2]._fU0[6] = {-1172.95900000, 1296.69100000, 22.11390000};
            l_U2343[2]._fU0[7] = {-1171.43800000, 1293.52200000, 22.17990000};
            l_U2343[2]._fU0[8] = {-1163.13700000, 1284.49200000, 23.55990000};
            l_U2343[2]._fU0[9] = {-1166.57300000, 1285.41500000, 23.61700000};
            l_U2343[2]._fU0[10] = {-1168.37300000, 1286.42500000, 23.66520000};
            l_U2343[2]._fU0[11] = {-1167.91200000, 1289.92100000, 23.69050000};
            l_U2343[2]._fU0[12] = {-1165.45900000, 1292.22100000, 23.62200000};
            l_U2343[2]._fU0[13] = {-1162.86100000, 1293.30400000, 23.55990000};
            l_U2343[2]._fU0[14] = {-1165.77600000, 1297.11100000, 23.58270000};
            l_U2343[2]._fU0[15] = {-1162.61000000, 1296.98800000, 23.55990000};
            l_U2343[3]._fU0[0] = {-1471.72900000, 1406.61300000, 12.05020000};
            l_U2343[3]._fU0[1] = {-1465.39100000, 1406.37500000, 11.75110000};
            l_U2343[3]._fU0[2] = {-1465.30800000, 1400.53300000, 12.05020000};
            l_U2343[3]._fU0[3] = {-1471.13900000, 1400.01000000, 12.05020000};
            l_U2343[3]._fU0[4] = {-1474.81900000, 1396.93800000, 12.05020000};
            l_U2343[3]._fU0[5] = {-1470.58900000, 1393.07800000, 12.05020000};
            l_U2343[3]._fU0[6] = {-1484.49800000, 1371.11700000, 12.05020000};
            l_U2343[3]._fU0[7] = {-1477.76700000, 1364.50100000, 12.05020000};
            l_U2343[3]._fU0[8] = {-1476.64400000, 1369.70900000, 12.05020000};
            l_U2343[3]._fU0[9] = {-1470.91800000, 1367.08800000, 12.05020000};
            l_U2343[3]._fU0[10] = {-1466.82100000, 1369.16000000, 12.05020000};
            l_U2343[3]._fU0[11] = {-1470.87600000, 1373.37500000, 12.05020000};
            l_U2343[3]._fU0[12] = {-1475.41800000, 1376.37900000, 12.05020000};
            l_U2343[3]._fU0[13] = {-1473.45500000, 1382.07000000, 12.05020000};
            l_U2343[3]._fU0[14] = {-1467.59000000, 1383.20600000, 12.05020000};
            l_U2343[3]._fU0[15] = {-1465.68800000, 1388.67400000, 12.05020000};
            l_U2343[4]._fU0[0] = {-831.15780000, 1278.58200000, 16.31460000};
            l_U2343[4]._fU0[1] = {-829.86250000, 1273.82900000, 16.31460000};
            l_U2343[4]._fU0[2] = {-824.50290000, 1274.63600000, 16.31460000};
            l_U2343[4]._fU0[3] = {-819.88510000, 1278.05500000, 16.31460000};
            l_U2343[4]._fU0[4] = {-816.88710000, 1276.70200000, 16.31460000};
            l_U2343[4]._fU0[5] = {-814.70750000, 1272.72300000, 16.41450000};
            l_U2343[4]._fU0[6] = {-811.32600000, 1274.16500000, 16.31460000};
            l_U2343[4]._fU0[7] = {-808.50890000, 1278.03300000, 16.33790000};
            l_U2343[4]._fU0[8] = {-803.75360000, 1275.32300000, 16.32660000};
            l_U2343[4]._fU0[9] = {-837.04740000, 1274.73300000, 17.37550000};
            l_U2343[4]._fU0[10] = {-841.85310000, 1270.27500000, 19.07400000};
            l_U2343[4]._fU0[11] = {-840.84410000, 1276.08100000, 19.07430000};
            l_U2343[4]._fU0[12] = {-847.26280000, 1278.27800000, 19.08480000};
            l_U2343[4]._fU0[13] = {-853.74080000, 1275.48100000, 19.08480000};
            l_U2343[4]._fU0[14] = {-860.34560000, 1278.67200000, 19.08480000};
            l_U2343[4]._fU0[15] = {-867.11100000, 1275.90700000, 19.08430000};
            l_U2343[5]._fU0[0] = {-1000.19300000, 1642.55900000, 23.01280000};
            l_U2343[5]._fU0[1] = {-1005.75000000, 1644.19700000, 23.01280000};
            l_U2343[5]._fU0[2] = {-1013.48200000, 1645.10100000, 23.01280000};
            l_U2343[5]._fU0[3] = {-1017.66000000, 1650.96200000, 23.01280000};
            l_U2343[5]._fU0[4] = {-1012.29100000, 1649.95800000, 23.01280000};
            l_U2343[5]._fU0[5] = {-1004.29900000, 1649.61600000, 23.01280000};
            l_U2343[5]._fU0[6] = {-995.27290000, 1649.31900000, 23.01270000};
            l_U2343[5]._fU0[7] = {-996.23360000, 1656.82400000, 23.01240000};
            l_U2343[5]._fU0[8] = {-1003.67200000, 1659.40600000, 23.01110000};
            l_U2343[5]._fU0[9] = {-1012.31300000, 1659.75000000, 23.00800000};
            l_U2343[5]._fU0[10] = {-1011.43400000, 1665.37100000, 22.97320000};
            l_U2343[5]._fU0[11] = {-1006.14800000, 1666.13700000, 22.96930000};
            l_U2343[5]._fU0[12] = {-998.72390000, 1665.88500000, 22.96880000};
            l_U2343[5]._fU0[13] = {-993.90770000, 1637.42600000, 23.01270000};
            l_U2343[5]._fU0[14] = {-994.59640000, 1629.16900000, 23.01270000};
            l_U2343[5]._fU0[15] = {-994.69940000, 1617.95200000, 23.01270000};
            l_U2343[6]._fU0[0] = {-1180.37300000, 1453.16900000, 19.91120000};
            l_U2343[6]._fU0[1] = {-1180.26300000, 1456.71700000, 19.91130000};
            l_U2343[6]._fU0[2] = {-1179.92100000, 1462.84700000, 19.94730000};
            l_U2343[6]._fU0[3] = {-1186.42500000, 1461.61900000, 19.94810000};
            l_U2343[6]._fU0[4] = {-1190.43500000, 1463.67000000, 19.97620000};
            l_U2343[6]._fU0[5] = {-1196.72400000, 1461.41200000, 19.87520000};
            l_U2343[6]._fU0[6] = {-1197.28600000, 1465.60900000, 19.86380000};
            l_U2343[6]._fU0[7] = {-1202.33300000, 1465.58700000, 19.79430000};
            l_U2343[6]._fU0[8] = {-1205.55200000, 1465.62400000, 19.79430000};
            l_U2343[6]._fU0[9] = {-1629.90100000, -596.96670000, 1.83720000};
            l_U2343[6]._fU0[10] = {-1208.55600000, 1463.36000000, 19.79430000};
            l_U2343[6]._fU0[11] = {-1213.48000000, 1461.98400000, 20.05700000};
            l_U2343[6]._fU0[12] = {-1214.52400000, 1467.06200000, 20.35060000};
            l_U2343[6]._fU0[13] = {-1216.89300000, 1466.89500000, 20.77490000};
            l_U2343[6]._fU0[14] = {-1218.18100000, 1462.08200000, 20.59730000};
            l_U2343[6]._fU0[15] = {-1222.76600000, 1462.45800000, 20.93930000};
            break;
        }
    }
    else if (l_U1933._fU756[2] == 3)
    {
        l_U2343[0]._fU0[0] = {1281.27800000, 1498.33300000, 16.29730000};
        l_U2343[0]._fU0[1] = {1286.60700000, 1498.04500000, 16.29730000};
        l_U2343[0]._fU0[2] = {1292.05100000, 1501.46900000, 16.29730000};
        l_U2343[0]._fU0[3] = {1293.70900000, 1507.70000000, 16.29680000};
        l_U2343[0]._fU0[4] = {1290.70400000, 1511.19100000, 16.29680000};
        l_U2343[0]._fU0[5] = {1285.62100000, 1510.43700000, 16.29680000};
        l_U2343[0]._fU0[6] = {1278.96700000, 1510.14600000, 16.29730000};
        l_U2343[0]._fU0[7] = {1270.63600000, 1509.78100000, 16.29730000};
        l_U2343[0]._fU0[8] = {1268.72600000, 1511.74500000, 16.29730000};
        l_U2343[0]._fU0[9] = {1263.71400000, 1509.89200000, 16.29730000};
        l_U2343[0]._fU0[10] = {1259.23800000, 1504.17400000, 15.99060000};
        l_U2343[0]._fU0[11] = {1258.97600000, 1499.40000000, 15.99060000};
        l_U2343[0]._fU0[12] = {1260.87400000, 1492.73900000, 15.76780000};
        l_U2343[0]._fU0[13] = {1264.42100000, 1491.15800000, 15.76780000};
        l_U2343[0]._fU0[14] = {1270.07400000, 1491.54300000, 15.76780000};
        l_U2343[0]._fU0[15] = {1276.79300000, 1491.96900000, 15.76780000};
        l_U2343[1]._fU0[0] = {1184.07900000, 1781.76700000, 9.16900000};
        l_U2343[1]._fU0[1] = {1184.21100000, 1786.68500000, 9.09550000};
        l_U2343[1]._fU0[2] = {1182.40600000, 1799.17700000, 9.09460000};
        l_U2343[1]._fU0[3] = {1179.07600000, 1799.84400000, 9.12820000};
        l_U2343[1]._fU0[4] = {1173.10000000, 1800.96400000, 9.13640000};
        l_U2343[1]._fU0[5] = {1176.19300000, 1782.48100000, 9.10400000};
        l_U2343[1]._fU0[6] = {1170.90800000, 1782.70300000, 9.12940000};
        l_U2343[1]._fU0[7] = {1169.74500000, 1790.74600000, 9.13230000};
        l_U2343[1]._fU0[8] = {1184.07900000, 1781.76700000, 9.16900000};
        l_U2343[1]._fU0[9] = {1184.21100000, 1786.68500000, 9.09550000};
        l_U2343[1]._fU0[10] = {1182.40600000, 1799.17700000, 9.09460000};
        l_U2343[1]._fU0[11] = {1179.07600000, 1799.84400000, 9.12820000};
        l_U2343[1]._fU0[12] = {1173.10000000, 1800.96400000, 9.13640000};
        l_U2343[1]._fU0[13] = {1176.19300000, 1782.48100000, 9.10400000};
        l_U2343[1]._fU0[14] = {1170.90800000, 1782.70300000, 9.12940000};
        l_U2343[1]._fU0[15] = {1169.74500000, 1790.74600000, 9.13230000};
        l_U2343[3]._fU0[0] = {625.93790000, 1464.11800000, 10.68540000};
        l_U2343[3]._fU0[1] = {619.30190000, 1465.52300000, 10.72470000};
        l_U2343[3]._fU0[2] = {605.26090000, 1470.20500000, 11.07660000};
        l_U2343[3]._fU0[3] = {612.11190000, 1469.98600000, 11.12880000};
        l_U2343[3]._fU0[4] = {619.22360000, 1469.72100000, 10.99980000};
        l_U2343[3]._fU0[5] = {623.27210000, 1469.46400000, 10.92860000};
        l_U2343[3]._fU0[6] = {632.56710000, 1472.41300000, 11.01470000};
        l_U2343[3]._fU0[7] = {632.52480000, 1477.71200000, 11.25420000};
        l_U2343[3]._fU0[8] = {633.61230000, 1480.90700000, 11.36220000};
        l_U2343[3]._fU0[9] = {636.91200000, 1479.75500000, 11.53740000};
        l_U2343[3]._fU0[10] = {628.35990000, 1470.39200000, 11.00510000};
        l_U2343[3]._fU0[11] = {638.85240000, 1474.96600000, 11.18570000};
        l_U2343[3]._fU0[12] = {640.72280000, 1471.38400000, 11.01610000};
        l_U2343[3]._fU0[13] = {644.28020000, 1472.09700000, 11.10170000};
        l_U2343[3]._fU0[14] = {644.00370000, 1477.60500000, 11.39690000};
        l_U2343[3]._fU0[15] = {643.21890000, 1480.63600000, 11.76510000};
        l_U2343[2]._fU0[0] = {796.27200000, 1325.20700000, 8.29480000};
        l_U2343[2]._fU0[1] = {796.37890000, 1316.59900000, 8.24880000};
        l_U2343[2]._fU0[2] = {793.14760000, 1311.48400000, 8.30370000};
        l_U2343[2]._fU0[3] = {783.06500000, 1312.41500000, 8.95720000};
        l_U2343[2]._fU0[4] = {773.27130000, 1312.58500000, 8.57410000};
        l_U2343[2]._fU0[5] = {759.87380000, 1311.82000000, 8.21280000};
        l_U2343[2]._fU0[6] = {764.20660000, 1298.10000000, 7.88590000};
        l_U2343[2]._fU0[7] = {752.80870000, 1296.78300000, 7.21320000};
        l_U2343[2]._fU0[8] = {796.27200000, 1325.20700000, 8.29480000};
        l_U2343[2]._fU0[9] = {796.37890000, 1316.59900000, 8.24880000};
        l_U2343[2]._fU0[10] = {793.14760000, 1311.48400000, 8.30370000};
        l_U2343[2]._fU0[11] = {783.06500000, 1312.41500000, 8.95720000};
        l_U2343[2]._fU0[12] = {773.27130000, 1312.58500000, 8.57410000};
        l_U2343[2]._fU0[13] = {759.87380000, 1311.82000000, 8.21280000};
        l_U2343[2]._fU0[14] = {764.20660000, 1298.10000000, 7.88590000};
        l_U2343[2]._fU0[15] = {752.80870000, 1296.78300000, 7.21320000};
        l_U2343[4]._fU0[0] = {352.21340000, 1831.04900000, 17.83160000};
        l_U2343[4]._fU0[1] = {352.54660000, 1826.82100000, 17.83160000};
        l_U2343[4]._fU0[2] = {352.11070000, 1822.28900000, 16.77290000};
        l_U2343[4]._fU0[3] = {352.35060000, 1813.97400000, 16.77290000};
        l_U2343[4]._fU0[4] = {352.33220000, 1817.87700000, 16.77290000};
        l_U2343[4]._fU0[5] = {352.87860000, 1836.74600000, 16.77430000};
        l_U2343[4]._fU0[6] = {352.70080000, 1840.25600000, 16.77430000};
        l_U2343[4]._fU0[7] = {352.01090000, 1845.12300000, 16.77430000};
        l_U2343[4]._fU0[8] = {352.21340000, 1831.04900000, 17.83160000};
        l_U2343[4]._fU0[9] = {352.54660000, 1826.82100000, 17.83160000};
        l_U2343[4]._fU0[10] = {352.11070000, 1822.28900000, 16.77290000};
        l_U2343[4]._fU0[11] = {352.35060000, 1813.97400000, 16.77290000};
        l_U2343[4]._fU0[12] = {352.33220000, 1817.87700000, 16.77290000};
        l_U2343[4]._fU0[13] = {352.87860000, 1836.74600000, 16.77430000};
        l_U2343[4]._fU0[14] = {352.70080000, 1840.25600000, 16.77430000};
        l_U2343[4]._fU0[15] = {352.01090000, 1845.12300000, 16.77430000};
        l_U2343[5]._fU0[0] = {809.99390000, 1582.14400000, 17.10130000};
        l_U2343[5]._fU0[1] = {807.81900000, 1580.47300000, 17.10540000};
        l_U2343[5]._fU0[2] = {807.84280000, 1576.26200000, 17.14960000};
        l_U2343[5]._fU0[3] = {808.89220000, 1572.61900000, 17.00820000};
        l_U2343[5]._fU0[4] = {806.10610000, 1570.44000000, 17.11940000};
        l_U2343[5]._fU0[5] = {820.02310000, 1573.16700000, 16.45280000};
        l_U2343[5]._fU0[6] = {822.72540000, 1578.17900000, 16.37390000};
        l_U2343[5]._fU0[7] = {821.11810000, 1580.28400000, 16.43800000};
        l_U2343[5]._fU0[8] = {816.83030000, 1574.19100000, 16.75170000};
        l_U2343[5]._fU0[9] = {812.70640000, 1576.92100000, 16.89670000};
        l_U2343[5]._fU0[10] = {803.66280000, 1570.94000000, 17.26830000};
        l_U2343[5]._fU0[11] = {826.18440000, 1569.52300000, 16.20060000};
        l_U2343[5]._fU0[12] = {829.85340000, 1570.85800000, 16.08470000};
        l_U2343[5]._fU0[13] = {829.14060000, 1574.01900000, 16.12430000};
        l_U2343[5]._fU0[14] = {830.82010000, 1578.68800000, 16.15380000};
        l_U2343[5]._fU0[15] = {833.24900000, 1575.82900000, 15.94400000};
        l_U2343[6]._fU0[0] = {671.25710000, 1690.11500000, 30.77640000};
        l_U2343[6]._fU0[1] = {668.28090000, 1687.50800000, 30.77640000};
        l_U2343[6]._fU0[2] = {670.41790000, 1691.49400000, 30.77640000};
        l_U2343[6]._fU0[3] = {670.43460000, 1696.99800000, 30.77640000};
        l_U2343[6]._fU0[4] = {666.91470000, 1697.01300000, 30.77640000};
        l_U2343[6]._fU0[5] = {666.04130000, 1700.29400000, 30.77640000};
        l_U2343[6]._fU0[6] = {663.29710000, 1700.91700000, 30.77670000};
        l_U2343[6]._fU0[7] = {657.59890000, 1702.63600000, 30.77670000};
        l_U2343[6]._fU0[8] = {657.22390000, 1698.44200000, 30.77670000};
        l_U2343[6]._fU0[9] = {659.16360000, 1693.25900000, 30.77670000};
        l_U2343[6]._fU0[10] = {661.75850000, 1687.80900000, 30.77670000};
        l_U2343[6]._fU0[11] = {665.08360000, 1681.65100000, 30.77640000};
        l_U2343[6]._fU0[12] = {659.90060000, 1681.68200000, 30.77670000};
        l_U2343[6]._fU0[13] = {657.95060000, 1676.61100000, 30.77670000};
        l_U2343[6]._fU0[14] = {675.51790000, 1691.13700000, 31.02660000};
        l_U2343[6]._fU0[15] = {676.58270000, 1699.08900000, 33.30970000};
    }
    else if (l_U1933._fU756[2] == 4)
    {
        switch (l_U1933._fU848)
        {
            case 0:
            l_U2343[0]._fU0[0] = {1221.28900000, -395.89820000, 15.49080000};
            l_U2343[0]._fU0[1] = {1221.84700000, -387.92630000, 18.02470000};
            l_U2343[0]._fU0[2] = {1223.38900000, -386.45230000, 18.25360000};
            l_U2343[0]._fU0[3] = {1222.52300000, -383.54510000, 19.59110000};
            l_U2343[0]._fU0[4] = {1219.61700000, -385.39650000, 19.56670000};
            l_U2343[0]._fU0[5] = {1228.46900000, -394.86750000, 15.65570000};
            l_U2343[0]._fU0[6] = {1232.80900000, -401.16860000, 15.65790000};
            l_U2343[0]._fU0[7] = {1235.21200000, -404.84450000, 15.66370000};
            l_U2343[0]._fU0[8] = {1235.23200000, -396.84720000, 15.50050000};
            l_U2343[0]._fU0[9] = {1232.75600000, -394.39910000, 15.50070000};
            l_U2343[0]._fU0[10] = {1235.78300000, -388.84380000, 15.50180000};
            l_U2343[0]._fU0[11] = {1242.95700000, -389.71260000, 15.50160000};
            l_U2343[0]._fU0[12] = {1244.64600000, -394.34470000, 15.50070000};
            l_U2343[0]._fU0[13] = {1233.26400000, -409.98460000, 15.68660000};
            l_U2343[0]._fU0[14] = {1240.01500000, -405.97980000, 15.67360000};
            l_U2343[0]._fU0[15] = {1240.01500000, -405.97980000, 15.67360000};
            l_U2343[1]._fU0[0] = {1173.64300000, -120.73620000, 29.54050000};
            l_U2343[1]._fU0[1] = {1173.87400000, -117.61840000, 29.71840000};
            l_U2343[1]._fU0[2] = {1171.87900000, -113.84860000, 29.85020000};
            l_U2343[1]._fU0[3] = {1174.22200000, -111.16450000, 29.87620000};
            l_U2343[1]._fU0[4] = {1170.80600000, -105.66080000, 29.76760000};
            l_U2343[1]._fU0[5] = {1176.79800000, -102.49830000, 29.74670000};
            l_U2343[1]._fU0[6] = {1179.78000000, -99.47900000, 29.73400000};
            l_U2343[1]._fU0[7] = {1185.79600000, -98.06510000, 29.75650000};
            l_U2343[1]._fU0[8] = {1185.95700000, -102.22140000, 29.81800000};
            l_U2343[1]._fU0[9] = {1174.71300000, -94.64810000, 29.71850000};
            l_U2343[1]._fU0[10] = {1176.56800000, -92.21130000, 29.68070000};
            l_U2343[1]._fU0[11] = {1176.52900000, -85.33050000, 31.45190000};
            l_U2343[1]._fU0[12] = {1172.21800000, -81.77160000, 32.38380000};
            l_U2343[1]._fU0[13] = {1187.80300000, -99.46740000, 29.83400000};
            l_U2343[1]._fU0[14] = {1194.46900000, -102.61010000, 28.70320000};
            l_U2343[1]._fU0[15] = {1187.80300000, -99.46740000, 29.83400000};
            l_U2343[2]._fU0[0] = {953.92430000, 70.24480000, 30.20640000};
            l_U2343[2]._fU0[1] = {949.27420000, 69.03320000, 30.20640000};
            l_U2343[2]._fU0[2] = {945.03100000, 68.24130000, 30.20640000};
            l_U2343[2]._fU0[3] = {945.61190000, 71.40120000, 30.20640000};
            l_U2343[2]._fU0[4] = {940.68110000, 65.23590000, 30.20640000};
            l_U2343[2]._fU0[5] = {938.60860000, 68.11200000, 30.20640000};
            l_U2343[2]._fU0[6] = {939.45550000, 71.87520000, 30.20640000};
            l_U2343[2]._fU0[7] = {934.30570000, 59.52260000, 28.71250000};
            l_U2343[2]._fU0[8] = {934.42120000, 63.88860000, 29.33410000};
            l_U2343[2]._fU0[9] = {934.69920000, 69.01590000, 30.00910000};
            l_U2343[2]._fU0[10] = {935.08250000, 73.72640000, 30.69140000};
            l_U2343[2]._fU0[11] = {933.70970000, 76.39020000, 31.07070000};
            l_U2343[2]._fU0[12] = {934.82550000, 81.57570000, 31.76980000};
            l_U2343[2]._fU0[13] = {938.60860000, 68.11200000, 30.20640000};
            l_U2343[2]._fU0[14] = {945.61190000, 71.40120000, 30.20640000};
            l_U2343[2]._fU0[15] = {945.61190000, 71.40120000, 30.20640000};
            l_U2343[3]._fU0[0] = {849.00200000, -208.28750000, 4.99580000};
            l_U2343[3]._fU0[1] = {849.76600000, -200.62070000, 4.96790000};
            l_U2343[3]._fU0[2] = {852.06700000, -193.31140000, 4.92540000};
            l_U2343[3]._fU0[3] = {847.54990000, -193.50170000, 4.94300000};
            l_U2343[3]._fU0[4] = {845.41910000, -197.38160000, 4.95770000};
            l_U2343[3]._fU0[5] = {841.64940000, -203.82530000, 4.98440000};
            l_U2343[3]._fU0[6] = {833.67880000, -203.95220000, 4.99470000};
            l_U2343[3]._fU0[7] = {826.60830000, -201.09110000, 5.00150000};
            l_U2343[3]._fU0[8] = {856.66420000, -207.85010000, 4.98920000};
            l_U2343[3]._fU0[9] = {867.48210000, -207.80070000, 4.98640000};
            l_U2343[3]._fU0[10] = {854.45680000, -185.60390000, 4.87750000};
            l_U2343[3]._fU0[11] = {850.11760000, -185.47050000, 4.89570000};
            l_U2343[3]._fU0[12] = {849.72870000, -178.50250000, 4.86240000};
            l_U2343[3]._fU0[13] = {844.61280000, -178.85240000, 4.89010000};
            l_U2343[3]._fU0[14] = {842.26700000, -173.50380000, 4.87270000};
            l_U2343[3]._fU0[15] = {844.61280000, -178.85240000, 4.89010000};
            l_U2343[4]._fU0[0] = {1552.55000000, 113.32050000, 22.12800000};
            l_U2343[4]._fU0[1] = {1556.89600000, 112.56450000, 22.12800000};
            l_U2343[4]._fU0[2] = {1561.14100000, 118.41650000, 22.12800000};
            l_U2343[4]._fU0[3] = {1559.05000000, 122.96050000, 22.12800000};
            l_U2343[4]._fU0[4] = {1555.14300000, 119.55840000, 22.12800000};
            l_U2343[4]._fU0[5] = {1554.87100000, 124.79570000, 22.12800000};
            l_U2343[4]._fU0[6] = {1545.91900000, 125.17920000, 22.12800000};
            l_U2343[4]._fU0[7] = {1544.04000000, 127.64460000, 22.12800000};
            l_U2343[4]._fU0[8] = {1548.90400000, 132.07350000, 22.12800000};
            l_U2343[4]._fU0[9] = {1551.34000000, 136.48780000, 22.12800000};
            l_U2343[4]._fU0[10] = {1544.86900000, 145.24010000, 22.12800000};
            l_U2343[4]._fU0[11] = {1534.56000000, 144.12430000, 22.12800000};
            l_U2343[4]._fU0[12] = {1534.42800000, 138.05610000, 22.12800000};
            l_U2343[4]._fU0[13] = {1528.51200000, 137.05920000, 22.12800000};
            l_U2343[4]._fU0[14] = {1526.30400000, 151.53170000, 22.12800000};
            l_U2343[4]._fU0[15] = {1528.51200000, 137.05920000, 22.12800000};
            l_U2343[5]._fU0[0] = {1259.36800000, 346.65050000, 20.68690000};
            l_U2343[5]._fU0[1] = {1262.47700000, 346.37140000, 20.70400000};
            l_U2343[5]._fU0[2] = {1258.31800000, 356.96060000, 21.02110000};
            l_U2343[5]._fU0[3] = {1263.76000000, 358.35760000, 21.10440000};
            l_U2343[5]._fU0[4] = {1270.86400000, 358.00150000, 21.12280000};
            l_U2343[5]._fU0[5] = {1272.07000000, 354.43020000, 21.05970000};
            l_U2343[5]._fU0[6] = {1269.63200000, 354.35550000, 21.05840000};
            l_U2343[5]._fU0[7] = {1265.67600000, 351.75710000, 21.00890000};
            l_U2343[5]._fU0[8] = {1262.53600000, 354.23340000, 21.01800000};
            l_U2343[5]._fU0[9] = {1276.77400000, 356.27900000, 21.09220000};
            l_U2343[5]._fU0[10] = {1276.89500000, 348.94740000, 20.92250000};
            l_U2343[5]._fU0[11] = {1280.19900000, 345.38860000, 20.85320000};
            l_U2343[5]._fU0[12] = {1273.27600000, 344.34620000, 20.73250000};
            l_U2343[5]._fU0[13] = {1289.25900000, 348.76460000, 20.95890000};
            l_U2343[5]._fU0[14] = {1289.21500000, 353.42490000, 21.04160000};
            l_U2343[5]._fU0[15] = {1289.54400000, 359.91760000, 21.15670000};
            l_U2343[6]._fU0[0] = {795.20690000, -517.65050000, 11.01890000};
            l_U2343[6]._fU0[1] = {788.53560000, -516.41870000, 10.95480000};
            l_U2343[6]._fU0[2] = {791.08970000, -515.86990000, 10.98100000};
            l_U2343[6]._fU0[3] = {796.26630000, -513.13340000, 10.46720000};
            l_U2343[6]._fU0[4] = {790.20310000, -513.18130000, 7.98040000};
            l_U2343[6]._fU0[5] = {786.49430000, -511.58780000, 7.95000000};
            l_U2343[6]._fU0[6] = {792.42270000, -510.68390000, 8.00000000};
            l_U2343[6]._fU0[7] = {795.39000000, -509.09850000, 8.02220000};
            l_U2343[6]._fU0[8] = {789.90210000, -508.38670000, 7.97630000};
            l_U2343[6]._fU0[9] = {795.72180000, -506.31330000, 8.02120000};
            l_U2343[6]._fU0[10] = {795.35880000, -500.82520000, 8.01260000};
            l_U2343[6]._fU0[11] = {795.06200000, -492.74000000, 7.99980000};
            l_U2343[6]._fU0[12] = {790.45390000, -504.65680000, 5.79910000};
            l_U2343[6]._fU0[13] = {785.51530000, -504.98890000, 5.77170000};
            l_U2343[6]._fU0[14] = {784.36290000, -500.29930000, 5.77570000};
            l_U2343[6]._fU0[15] = {790.06430000, -496.47580000, 5.80310000};
            break;
            case 1:
            l_U2343[0]._fU0[0] = {902.55570000, 575.27260000, 21.26630000};
            l_U2343[0]._fU0[1] = {899.61490000, 575.84520000, 21.23290000};
            l_U2343[0]._fU0[2] = {904.15040000, 581.79970000, 21.27410000};
            l_U2343[0]._fU0[3] = {901.73750000, 590.06790000, 21.27110000};
            l_U2343[0]._fU0[4] = {904.38720000, 591.87070000, 21.27540000};
            l_U2343[0]._fU0[5] = {907.07210000, 585.55600000, 21.27410000};
            l_U2343[0]._fU0[6] = {913.30260000, 584.99660000, 21.27410000};
            l_U2343[0]._fU0[7] = {918.60570000, 586.84160000, 21.27560000};
            l_U2343[0]._fU0[8] = {925.91940000, 592.21720000, 21.30860000};
            l_U2343[0]._fU0[9] = {929.37440000, 587.09190000, 21.27710000};
            l_U2343[0]._fU0[10] = {935.65840000, 591.30710000, 21.30280000};
            l_U2343[0]._fU0[11] = {919.31710000, 595.55240000, 21.32420000};
            l_U2343[0]._fU0[12] = {911.83200000, 596.35050000, 21.32420000};
            l_U2343[0]._fU0[13] = {897.52800000, 606.42820000, 17.06240000};
            l_U2343[0]._fU0[14] = {899.28470000, 604.91710000, 17.06240000};
            l_U2343[0]._fU0[15] = {899.67710000, 607.80310000, 17.06240000};
            l_U2343[1]._fU0[0] = {1288.06000000, 696.10570000, 35.73650000};
            l_U2343[1]._fU0[1] = {1295.02300000, 697.09080000, 35.73650000};
            l_U2343[1]._fU0[2] = {1303.40900000, 696.66050000, 35.73650000};
            l_U2343[1]._fU0[3] = {1307.00400000, 694.23630000, 35.73650000};
            l_U2343[1]._fU0[4] = {1306.87800000, 684.78570000, 35.73650000};
            l_U2343[1]._fU0[5] = {1308.63600000, 681.53380000, 35.73650000};
            l_U2343[1]._fU0[6] = {1302.44300000, 681.57250000, 35.73650000};
            l_U2343[1]._fU0[7] = {1296.01600000, 681.22820000, 35.73650000};
            l_U2343[1]._fU0[8] = {1285.13500000, 684.30910000, 35.79260000};
            l_U2343[1]._fU0[9] = {1286.62700000, 678.98680000, 35.75570000};
            l_U2343[1]._fU0[10] = {1277.93600000, 682.66570000, 36.01780000};
            l_U2343[1]._fU0[11] = {1276.48500000, 673.16240000, 36.16310000};
            l_U2343[1]._fU0[12] = {1274.41100000, 675.01070000, 36.23190000};
            l_U2343[1]._fU0[13] = {1282.57000000, 687.26220000, 35.84220000};
            l_U2343[1]._fU0[14] = {1288.30600000, 687.79940000, 35.73650000};
            l_U2343[1]._fU0[15] = {1288.30600000, 687.79940000, 35.73650000};
            l_U2343[2]._fU0[0] = {950.25290000, 68.95030000, 30.20640000};
            l_U2343[2]._fU0[1] = {948.11240000, 67.29630000, 30.20640000};
            l_U2343[2]._fU0[2] = {945.03100000, 68.24130000, 30.20640000};
            l_U2343[2]._fU0[3] = {945.61190000, 71.40120000, 30.20640000};
            l_U2343[2]._fU0[4] = {940.68110000, 65.23590000, 30.20640000};
            l_U2343[2]._fU0[5] = {938.60860000, 68.11200000, 30.20640000};
            l_U2343[2]._fU0[6] = {939.45550000, 71.87520000, 30.20640000};
            l_U2343[2]._fU0[7] = {934.30570000, 59.52260000, 28.71250000};
            l_U2343[2]._fU0[8] = {934.42120000, 63.88860000, 29.33410000};
            l_U2343[2]._fU0[9] = {934.69920000, 69.01590000, 30.00910000};
            l_U2343[2]._fU0[10] = {935.08250000, 73.72640000, 30.69140000};
            l_U2343[2]._fU0[11] = {933.70970000, 76.39020000, 31.07070000};
            l_U2343[2]._fU0[12] = {934.82550000, 81.57570000, 31.76980000};
            l_U2343[2]._fU0[13] = {938.60860000, 68.11200000, 30.20640000};
            l_U2343[2]._fU0[14] = {945.61190000, 71.40120000, 30.20640000};
            l_U2343[2]._fU0[15] = {945.61190000, 71.40120000, 30.20640000};
            l_U2343[3]._fU0[0] = {1188.64400000, 438.08470000, 22.99300000};
            l_U2343[3]._fU0[1] = {1185.71200000, 435.09520000, 22.99300000};
            l_U2343[3]._fU0[2] = {1186.34500000, 432.26360000, 22.99300000};
            l_U2343[3]._fU0[3] = {1189.59100000, 426.38250000, 22.99300000};
            l_U2343[3]._fU0[4] = {1186.63400000, 423.16050000, 22.99300000};
            l_U2343[3]._fU0[5] = {1186.53800000, 417.63410000, 22.99300000};
            l_U2343[3]._fU0[6] = {1189.60300000, 419.11520000, 22.99300000};
            l_U2343[3]._fU0[7] = {1194.62900000, 417.69080000, 22.99270000};
            l_U2343[3]._fU0[8] = {1194.76900000, 423.97590000, 22.99270000};
            l_U2343[3]._fU0[9] = {1198.87000000, 423.89300000, 22.99250000};
            l_U2343[3]._fU0[10] = {1199.18800000, 419.49020000, 22.99250000};
            l_U2343[3]._fU0[11] = {1193.03500000, 432.61420000, 22.99290000};
            l_U2343[3]._fU0[12] = {1195.55600000, 438.14250000, 23.97440000};
            l_U2343[3]._fU0[13] = {1194.95800000, 442.03310000, 23.97440000};
            l_U2343[3]._fU0[14] = {1190.90000000, 447.55330000, 24.09450000};
            l_U2343[3]._fU0[15] = {1198.60700000, 447.58500000, 23.97440000};
            l_U2343[4]._fU0[0] = {1774.89300000, 660.97830000, 27.09010000};
            l_U2343[4]._fU0[1] = {1770.13600000, 657.77870000, 27.17310000};
            l_U2343[4]._fU0[2] = {1764.62600000, 655.85860000, 27.25710000};
            l_U2343[4]._fU0[3] = {1765.87300000, 661.86150000, 27.19780000};
            l_U2343[4]._fU0[4] = {1778.62600000, 666.57130000, 26.81780000};
            l_U2343[4]._fU0[5] = {1779.70000000, 671.08440000, 26.68270000};
            l_U2343[4]._fU0[6] = {1777.44800000, 679.29020000, 26.23590000};
            l_U2343[4]._fU0[7] = {1771.56100000, 679.89690000, 26.22880000};
            l_U2343[4]._fU0[8] = {1761.86500000, 679.27620000, 26.39440000};
            l_U2343[4]._fU0[9] = {1784.24500000, 675.17660000, 26.43540000};
            l_U2343[4]._fU0[10] = {1796.41500000, 674.48940000, 26.54760000};
            l_U2343[4]._fU0[11] = {1759.00500000, 672.74900000, 27.09990000};
            l_U2343[4]._fU0[12] = {1750.76500000, 673.11240000, 27.07950000};
            l_U2343[4]._fU0[13] = {1744.75200000, 677.35070000, 26.72180000};
            l_U2343[4]._fU0[14] = {1739.37400000, 671.81670000, 27.18980000};
            l_U2343[4]._fU0[15] = {1778.62600000, 666.57130000, 26.81780000};
            l_U2343[5]._fU0[0] = {1097.48800000, 820.84000000, 32.40030000};
            l_U2343[5]._fU0[1] = {1098.20700000, 824.35940000, 32.32350000};
            l_U2343[5]._fU0[2] = {1091.73700000, 821.12370000, 32.11950000};
            l_U2343[5]._fU0[3] = {1091.09300000, 824.01090000, 32.01250000};
            l_U2343[5]._fU0[4] = {1086.62500000, 823.74040000, 31.81460000};
            l_U2343[5]._fU0[5] = {1083.79100000, 821.05790000, 31.73710000};
            l_U2343[5]._fU0[6] = {1081.36800000, 824.16970000, 31.57270000};
            l_U2343[5]._fU0[7] = {1076.07600000, 824.28030000, 31.56830000};
            l_U2343[5]._fU0[8] = {1073.24800000, 821.32840000, 31.62080000};
            l_U2343[5]._fU0[9] = {1069.03300000, 822.41820000, 31.56370000};
            l_U2343[5]._fU0[10] = {1064.21000000, 824.54000000, 31.49650000};
            l_U2343[5]._fU0[11] = {1061.84900000, 821.63620000, 31.50020000};
            l_U2343[5]._fU0[12] = {1058.55800000, 820.97220000, 31.50170000};
            l_U2343[5]._fU0[13] = {1056.93400000, 823.64540000, 31.44570000};
            l_U2343[5]._fU0[14] = {1049.43700000, 822.51100000, 30.72190000};
            l_U2343[5]._fU0[15] = {1099.71400000, 825.58580000, 32.34010000};
            l_U2343[6]._fU0[0] = {1454.49600000, 230.71750000, 24.96510000};
            l_U2343[6]._fU0[1] = {1452.60300000, 227.61230000, 24.68440000};
            l_U2343[6]._fU0[2] = {1452.90200000, 244.02220000, 24.55240000};
            l_U2343[6]._fU0[3] = {1447.63100000, 246.70110000, 24.88740000};
            l_U2343[6]._fU0[4] = {1454.75000000, 249.07500000, 24.81900000};
            l_U2343[6]._fU0[5] = {1458.84100000, 248.26580000, 24.64960000};
            l_U2343[6]._fU0[6] = {1460.00500000, 251.91390000, 24.81570000};
            l_U2343[6]._fU0[7] = {1446.65500000, 223.22060000, 24.41720000};
            l_U2343[6]._fU0[8] = {1439.54600000, 224.18150000, 24.88130000};
            l_U2343[6]._fU0[9] = {1434.91300000, 220.43730000, 25.18180000};
            l_U2343[6]._fU0[10] = {1453.55600000, 223.55280000, 24.40620000};
            l_U2343[6]._fU0[11] = {1454.41800000, 219.77800000, 24.46760000};
            l_U2343[6]._fU0[12] = {1457.08500000, 218.87980000, 24.35720000};
            l_U2343[6]._fU0[13] = {1458.79600000, 208.65690000, 25.27290000};
            l_U2343[6]._fU0[14] = {1453.82600000, 203.17980000, 25.27920000};
            l_U2343[6]._fU0[15] = {1458.67400000, 197.37920000, 25.31400000};
            break;
            case 2:
            l_U2343[0]._fU0[0] = {2118.66100000, 145.74650000, 4.81030000};
            l_U2343[0]._fU0[1] = {2117.76400000, 139.45350000, 4.81020000};
            l_U2343[0]._fU0[2] = {2112.01500000, 138.70990000, 4.81020000};
            l_U2343[0]._fU0[3] = {2105.14900000, 142.73300000, 4.81020000};
            l_U2343[0]._fU0[4] = {2103.84300000, 138.33510000, 4.81020000};
            l_U2343[0]._fU0[5] = {2117.93900000, 120.34530000, 4.81010000};
            l_U2343[0]._fU0[6] = {2118.27700000, 117.71710000, 4.81010000};
            l_U2343[0]._fU0[7] = {2116.89900000, 112.02780000, 4.81010000};
            l_U2343[0]._fU0[8] = {2134.73000000, 111.32820000, 4.81010000};
            l_U2343[0]._fU0[9] = {2134.34300000, 117.89360000, 4.81010000};
            l_U2343[0]._fU0[10] = {2134.07700000, 126.67080000, 4.81010000};
            l_U2343[0]._fU0[11] = {2135.83400000, 132.19820000, 4.81010000};
            l_U2343[0]._fU0[12] = {2134.14100000, 141.51050000, 4.81020000};
            l_U2343[0]._fU0[13] = {2118.26000000, 146.33290000, 4.81030000};
            l_U2343[0]._fU0[14] = {2116.97300000, 141.21100000, 4.81020000};
            l_U2343[0]._fU0[15] = {2120.21800000, 152.26560000, 4.81030000};
            l_U2343[1]._fU0[0] = {1980.62300000, 554.28970000, 17.04430000};
            l_U2343[1]._fU0[1] = {1980.34600000, 548.21930000, 17.04140000};
            l_U2343[1]._fU0[2] = {1976.29400000, 547.62970000, 17.04180000};
            l_U2343[1]._fU0[3] = {1975.00000000, 542.76950000, 17.04410000};
            l_U2343[1]._fU0[4] = {1979.45200000, 539.05990000, 17.04230000};
            l_U2343[1]._fU0[5] = {1978.93100000, 532.90660000, 17.04290000};
            l_U2343[1]._fU0[6] = {1973.84800000, 532.11220000, 17.04510000};
            l_U2343[1]._fU0[7] = {1974.07000000, 525.72410000, 17.04370000};
            l_U2343[1]._fU0[8] = {1975.73800000, 518.42570000, 17.04790000};
            l_U2343[1]._fU0[9] = {1979.79200000, 520.60050000, 17.04250000};
            l_U2343[1]._fU0[10] = {1979.30100000, 527.93930000, 17.04290000};
            l_U2343[1]._fU0[11] = {1989.07300000, 522.53450000, 17.03760000};
            l_U2343[1]._fU0[12] = {1990.46000000, 528.30530000, 17.03590000};
            l_U2343[1]._fU0[13] = {1990.67300000, 535.76250000, 17.03260000};
            l_U2343[1]._fU0[14] = {1993.73300000, 545.30550000, 17.03470000};
            l_U2343[1]._fU0[15] = {1997.81700000, 553.19770000, 17.03950000};
            l_U2343[2]._fU0[0] = {1772.41400000, 424.86790000, 26.97070000};
            l_U2343[2]._fU0[1] = {1776.82200000, 423.32940000, 26.97070000};
            l_U2343[2]._fU0[2] = {1774.35800000, 421.46270000, 26.96740000};
            l_U2343[2]._fU0[3] = {1772.38900000, 418.56840000, 26.40400000};
            l_U2343[2]._fU0[4] = {1778.11500000, 416.27970000, 25.95080000};
            l_U2343[2]._fU0[5] = {1776.55000000, 412.27370000, 25.16700000};
            l_U2343[2]._fU0[6] = {1770.93900000, 408.22270000, 24.61710000};
            l_U2343[2]._fU0[7] = {1773.33400000, 403.35190000, 24.38700000};
            l_U2343[2]._fU0[8] = {1768.42400000, 403.02570000, 24.29410000};
            l_U2343[2]._fU0[9] = {1764.24700000, 406.67870000, 24.49130000};
            l_U2343[2]._fU0[10] = {1756.86000000, 398.44150000, 24.43960000};
            l_U2343[2]._fU0[11] = {1748.95400000, 398.31210000, 24.38170000};
            l_U2343[2]._fU0[12] = {1744.59400000, 406.83810000, 24.18300000};
            l_U2343[2]._fU0[13] = {1747.12900000, 407.30060000, 24.36260000};
            l_U2343[2]._fU0[14] = {1752.99100000, 407.59550000, 24.53970000};
            l_U2343[2]._fU0[15] = {1752.99100000, 407.59550000, 24.53970000};
            l_U2343[3]._fU0[0] = {1494.00000000, 602.30850000, 28.40460000};
            l_U2343[3]._fU0[1] = {1512.29900000, 595.87440000, 28.39620000};
            l_U2343[3]._fU0[2] = {1520.56700000, 598.59580000, 28.22250000};
            l_U2343[3]._fU0[3] = {1515.95400000, 603.28690000, 28.25620000};
            l_U2343[3]._fU0[4] = {1508.24900000, 619.46480000, 28.29940000};
            l_U2343[3]._fU0[5] = {1494.98300000, 622.21910000, 28.29940000};
            l_U2343[3]._fU0[6] = {1484.04900000, 622.91120000, 28.29920000};
            l_U2343[3]._fU0[7] = {1470.88700000, 619.38840000, 28.29940000};
            l_U2343[3]._fU0[8] = {1460.02200000, 616.17880000, 28.29940000};
            l_U2343[3]._fU0[9] = {1462.85200000, 611.48300000, 28.30540000};
            l_U2343[3]._fU0[10] = {1458.23400000, 605.36490000, 28.27250000};
            l_U2343[3]._fU0[11] = {1457.80100000, 595.53420000, 28.21450000};
            l_U2343[3]._fU0[12] = {1468.91300000, 596.55930000, 28.39980000};
            l_U2343[3]._fU0[13] = {1458.25500000, 585.47880000, 28.36820000};
            l_U2343[3]._fU0[14] = {1488.51200000, 597.74470000, 28.35520000};
            l_U2343[3]._fU0[15] = {1496.36100000, 603.95870000, 28.36060000};
            l_U2343[4]._fU0[0] = {1613.24700000, 710.30990000, 27.76250000};
            l_U2343[4]._fU0[1] = {1614.13000000, 718.74950000, 27.53590000};
            l_U2343[4]._fU0[2] = {1616.44900000, 703.72180000, 28.20190000};
            l_U2343[4]._fU0[3] = {1623.66100000, 702.97730000, 27.89180000};
            l_U2343[4]._fU0[4] = {1602.07300000, 694.28280000, 27.36960000};
            l_U2343[4]._fU0[5] = {1608.22900000, 693.91640000, 27.86620000};
            l_U2343[4]._fU0[6] = {1607.90800000, 700.66320000, 27.94500000};
            l_U2343[4]._fU0[7] = {1606.96300000, 711.37700000, 27.76460000};
            l_U2343[4]._fU0[8] = {1610.39100000, 729.45230000, 27.01430000};
            l_U2343[4]._fU0[9] = {1616.66600000, 732.05600000, 26.94510000};
            l_U2343[4]._fU0[10] = {1625.45100000, 726.85370000, 27.01910000};
            l_U2343[4]._fU0[11] = {1604.25100000, 733.07850000, 26.91260000};
            l_U2343[4]._fU0[12] = {1596.51500000, 733.56130000, 26.87000000};
            l_U2343[4]._fU0[13] = {1582.57000000, 733.42500000, 26.68340000};
            l_U2343[4]._fU0[14] = {1616.44900000, 703.72180000, 28.20190000};
            l_U2343[4]._fU0[15] = {1614.13000000, 718.74950000, 27.53590000};
            l_U2343[5]._fU0[0] = {1211.93500000, 671.25910000, 37.48230000};
            l_U2343[5]._fU0[1] = {1217.22900000, 674.47620000, 37.22690000};
            l_U2343[5]._fU0[2] = {1214.97900000, 678.05000000, 37.03650000};
            l_U2343[5]._fU0[3] = {1219.64600000, 681.56030000, 36.81030000};
            l_U2343[5]._fU0[4] = {1221.79000000, 685.50910000, 36.70830000};
            l_U2343[5]._fU0[5] = {1220.82700000, 692.23160000, 36.53280000};
            l_U2343[5]._fU0[6] = {1225.13100000, 692.14260000, 36.53690000};
            l_U2343[5]._fU0[7] = {1228.85900000, 697.82790000, 36.38730000};
            l_U2343[5]._fU0[8] = {1219.54300000, 700.95250000, 36.25680000};
            l_U2343[5]._fU0[9] = {1215.73800000, 706.99090000, 36.08200000};
            l_U2343[5]._fU0[10] = {1207.33600000, 700.00950000, 36.09850000};
            l_U2343[5]._fU0[11] = {1205.29200000, 706.17690000, 35.97660000};
            l_U2343[5]._fU0[12] = {1230.49500000, 704.41160000, 36.22260000};
            l_U2343[5]._fU0[13] = {1233.72500000, 699.59840000, 36.32130000};
            l_U2343[5]._fU0[14] = {1240.80300000, 705.38140000, 36.03570000};
            l_U2343[5]._fU0[15] = {1242.05200000, 696.65470000, 36.21310000};
            l_U2343[6]._fU0[0] = {1454.49600000, 230.71750000, 24.96510000};
            l_U2343[6]._fU0[1] = {1452.60300000, 227.61230000, 24.68440000};
            l_U2343[6]._fU0[2] = {1452.90200000, 244.02220000, 24.55240000};
            l_U2343[6]._fU0[3] = {1447.63100000, 246.70110000, 24.88740000};
            l_U2343[6]._fU0[4] = {1454.75000000, 249.07500000, 24.81900000};
            l_U2343[6]._fU0[5] = {1458.84100000, 248.26580000, 24.64960000};
            l_U2343[6]._fU0[6] = {1460.00500000, 251.91390000, 24.81570000};
            l_U2343[6]._fU0[7] = {1446.65500000, 223.22060000, 24.41720000};
            l_U2343[6]._fU0[8] = {1439.54600000, 224.18150000, 24.88130000};
            l_U2343[6]._fU0[9] = {1434.91300000, 220.43730000, 25.18180000};
            l_U2343[6]._fU0[10] = {1453.55600000, 223.55280000, 24.40620000};
            l_U2343[6]._fU0[11] = {1454.41800000, 219.77800000, 24.46760000};
            l_U2343[6]._fU0[12] = {1457.08500000, 218.87980000, 24.35720000};
            l_U2343[6]._fU0[13] = {1458.79600000, 208.65690000, 25.27290000};
            l_U2343[6]._fU0[14] = {1453.82600000, 203.17980000, 25.27920000};
            l_U2343[6]._fU0[15] = {1458.67400000, 197.37920000, 25.31400000};
            break;
        }
    };;;;
    for ( I = 0; I <= 6; I++ )
    {
        if (NOT l_U1933._fU4[I]._fU28)
        {
            iVar3++;
            uVar4 = {sub_98679( l_U1933._fU4[I]._fU0, uVar4 )};
        }
    }
    uVar4 = {sub_98757( uVar4, TO_FLOAT( iVar3 ) )};
    sub_98807( uVar4 );
    l_U2151[0] = 0;
    l_U2151[1] = 2;
    l_U2151[2] = 2;
    l_U2151[3] = 2;
    l_U2151[4] = 1;
    for ( I = 0; I <= 15; I++ )
    {
        l_U2295[I] = 0;
        l_U2312[I] = 0;
    }
    l_U2329 = 1;
    return;
}

void sub_65588(unknown uParam0)
{
    l_U1322 = uParam0;
    return;
}

void sub_98679(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    vector Result;

    Result = {uParam0._fU0 + uParam3._fU0, uParam0._fU4 + uParam3._fU4, uParam0._fU8 + uParam3._fU8};
    return Result;
}

void sub_98757(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    vector Result;

    Result = {uParam0._fU0 / uParam3, uParam0._fU4 / uParam3, uParam0._fU8 / uParam3};
    return Result;
}

void sub_98807(unknown uParam0, unknown uParam1, unknown uParam2)
{
    l_U1326 = {uParam0};
    l_U1325 = 1;
    return;
}

void sub_99084(unknown uParam0)
{
    int I;
    unknown[16] uVar4;

    array(ref uVar4, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar4[I] = l_U3400[I]._fU16;
    }
    sub_99155( ref uVar4, ref l_U3400[GET_PLAYER_ID()]._fU16, uParam0 );
    return;
}

void sub_99155(unknown uParam0, unknown uParam1, boolean bParam2)
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
        iVar6 = l_U1160;
    }
    else
    {
        iVar6 = sub_99207();
    }
    if (NOT NETWORK_IS_TVT())
    {
        if (iVar6 == (uParam1^))
        {
            if (((uParam1^) > -1) AND ((uParam1^) != GET_PLAYER_ID()))
            {
                if (IS_NETWORK_PLAYER_ACTIVE( iVar6 ))
                {
                    if (NOT (COMPARE_STRING( GET_PLAYER_NAME( sub_8097( iVar6 ) ), ref l_U1311 )))
                    {
                        if (NOT (COMPARE_STRING( ref l_U1311, "" )))
                        {
                            if (NOT (COMPARE_STRING( ref l_U1311, "NULL" )))
                            {
                                if (NOT (COMPARE_STRING( ref l_U1311, "\n" )))
                                {
                                    if (NOT (COMPARE_STRING( ref l_U1311, "null" )))
                                    {
                                        if (bParam2)
                                        {
                                            l_U1160 = GET_PLAYER_ID();
                                            (uParam1^) = GET_PLAYER_ID();
                                        }
                                        else
                                        {
                                            sub_2137( 1 );
                                            (uParam1^) = -1;
                                        }
                                        StrCopy( ref l_U1311, "", 32 );
                                        return;
                                    }
                                }
                            }
                        }
                    }
                }
                else
                {
                    StrCopy( ref l_U1311, "", 32 );
                }
            }
            else
            {
                StrCopy( ref l_U1311, "", 32 );
            }
        }
        else if ((iVar6 > -1) AND (iVar6 != GET_PLAYER_ID()))
        {
            if (IS_NETWORK_PLAYER_ACTIVE( iVar6 ))
            {
                StrCopy( ref l_U1311, GET_PLAYER_NAME( sub_8097( iVar6 ) ), 32 );
            }
            else
            {
                StrCopy( ref l_U1311, "", 32 );
            }
        }
        (uParam1^) = iVar6;
    }
    for ( I = 0; I < 16; I++ )
    {
        if ((IS_NETWORK_PLAYER_ACTIVE( I )) AND (NOT NETWORK_IS_TVT()))
        {
            if (l_U1294[I] == 1)
            {
                if (l_U891[I] != (uParam0^)[I])
                {
                    if (NOT bParam2)
                    {
                        if (((uParam0^)[I] > -1) AND ((uParam0^)[I] != I))
                        {
                            if (IS_NETWORK_PLAYER_ACTIVE( (uParam0^)[I] ))
                            {
                                sub_99767( I, "WANTS_TO_KICK", (uParam0^)[I] );
                            }
                        }
                    }
                    l_U891[I] = (uParam0^)[I];
                }
            }
            else if ((uParam0^)[I] != 0)
            {
                l_U1294[I] = 1;
            }
        }
        else
        {
            l_U891[I] = -1;
            l_U1294[I] = 0;
        }
    }
    return;
}

void sub_99207()
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

void sub_99767(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    uVar5 = sub_99777( -2 );
    StrCopy( ref l_U8[uVar5]._fU76._fU0, GET_PLAYER_NAME( sub_8097( uParam0 ) ), 64 );
    StrCopy( ref l_U8[uVar5]._fU12, uParam1, 64 );
    sub_50139( sub_8097( uParam0 ), ref l_U8[uVar5]._fU76._fU68, ref l_U8[uVar5]._fU76._fU72, ref l_U8[uVar5]._fU76._fU76 );
    StrCopy( ref l_U8[uVar5]._fU156._fU0, GET_PLAYER_NAME( sub_8097( uParam2 ) ), 64 );
    sub_50139( sub_8097( uParam2 ), ref l_U8[uVar5]._fU156._fU68, ref l_U8[uVar5]._fU156._fU72, ref l_U8[uVar5]._fU156._fU76 );
    sub_100352( uVar5 );
    return;
}

void sub_99777(unknown uParam0)
{
    unknown Result;

    Result = l_U481;
    sub_99804( ref l_U8[l_U481] );
    l_U8[l_U481]._fU8 = uParam0;
    l_U8[l_U481]._fU0 = 1;
    l_U8[l_U481]._fU4 = sub_100004() + 6000;
    sub_33974( ref l_U481, 8 );
    sub_99804( ref l_U8[l_U481] );
    if (l_U481 == l_U482)
    {
        sub_33974( ref l_U482, 8 );
    }
    PLAY_AUDIO_EVENT( "FRONTEND_GAME_MP_TICKER_MESSAGE" );
    return Result;
}

void sub_99804(int iParam0)
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

void sub_100004()
{
    unknown Result;

    GET_GAME_TIMER( ref Result );
    return Result;
}

void sub_100352(unknown uParam0)
{
    char[64] cVar3;

    StrCopy( ref cVar3, "", 64 );
    if (NOT (COMPARE_STRING( ref l_U8[uParam0]._fU76._fU0, "" )))
    {
        if (NOT (COMPARE_STRING( ref l_U8[uParam0]._fU76._fU0, "NULL" )))
        {
            if (NOT (COMPARE_STRING( ref l_U8[uParam0]._fU76._fU0, "\n" )))
            {
                if (NOT (COMPARE_STRING( ref l_U8[uParam0]._fU76._fU0, "null" )))
                {
                    if (l_U8[uParam0]._fU76._fU64)
                    {
                        if (NOT (COMPARE_STRING( GET_STRING_FROM_TEXT_FILE( ref l_U8[uParam0]._fU76._fU0 ), "NULL" )))
                        {
                            ConcatString(ref cVar3, GET_STRING_FROM_TEXT_FILE( ref l_U8[uParam0]._fU76._fU0 ), 64);
                            ConcatString(ref cVar3, " ", 64);
                        }
                    }
                    else
                    {
                        ConcatString(ref cVar3, ref l_U8[uParam0]._fU76._fU0, 64);
                        ConcatString(ref cVar3, " ", 64);
                    }
                }
            }
        }
    }
    if (NOT (COMPARE_STRING( ref l_U8[uParam0]._fU12, "" )))
    {
        if (NOT (COMPARE_STRING( ref l_U8[uParam0]._fU12, "NULL" )))
        {
            if (NOT (COMPARE_STRING( ref l_U8[uParam0]._fU12, "\n" )))
            {
                if (NOT (COMPARE_STRING( ref l_U8[uParam0]._fU12, "null" )))
                {
                    if (NOT (COMPARE_STRING( GET_STRING_FROM_TEXT_FILE( ref l_U8[uParam0]._fU12 ), "NULL" )))
                    {
                        ConcatString(ref cVar3, GET_STRING_FROM_TEXT_FILE( ref l_U8[uParam0]._fU12 ), 64);
                        ConcatString(ref cVar3, " ", 64);
                    }
                }
            }
        }
    }
    if (NOT (COMPARE_STRING( ref l_U8[uParam0]._fU156._fU0, "" )))
    {
        if (NOT (COMPARE_STRING( ref l_U8[uParam0]._fU156._fU0, "NULL" )))
        {
            if (NOT (COMPARE_STRING( ref l_U8[uParam0]._fU156._fU0, "\n" )))
            {
                if (NOT (COMPARE_STRING( ref l_U8[uParam0]._fU156._fU0, "null" )))
                {
                    if (l_U8[uParam0]._fU156._fU64)
                    {
                        if (NOT (COMPARE_STRING( GET_STRING_FROM_TEXT_FILE( ref l_U8[uParam0]._fU156._fU0 ), "NULL" )))
                        {
                            ConcatString(ref cVar3, GET_STRING_FROM_TEXT_FILE( ref l_U8[uParam0]._fU156._fU0 ), 64);
                        }
                    }
                    else
                    {
                        ConcatString(ref cVar3, ref l_U8[uParam0]._fU156._fU0, 64);
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

void sub_101265(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return;
}

void sub_101293()
{
    switch (l_U1933._fU756[2])
    {
        case 1:
        if (NOT (sub_11547( sub_5337(), -393.19590000, 754.99050000, 56.55940000, 500.00000000 )))
        {
            SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
            SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
        }
        break;
        case 2:
        if (NOT (sub_11547( sub_5337(), -1355.61200000, 932.52770000, 134.81510000, 500.00000000 )))
        {
            SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
            SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
        }
        break;
        case 3:
        if (NOT (sub_11547( sub_5337(), 1270.25500000, 1841.80500000, 33.57960000, 500.00000000 )))
        {
            SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
            SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
        }
        break;
        case 4:
        if (NOT (sub_11547( sub_5337(), 1146.16000000, 59.07990000, 60.61500000, 500.00000000 )))
        {
            SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
            SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
        }
        break;
    }
    return;
}

void sub_101676(unknown uParam0)
{
    NETWORK_SET_TALKER_FOCUS( -1 );
    sub_101697( uParam0, 31, 0 );
    return;
}

void sub_101697(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U18._fU636 = uParam1;
    g_U18._fU632 = uParam2;
    sub_101728( uParam0, uParam1 );
    sub_101762( uParam0, uParam2 );
    return;
}

void sub_101728(unknown uParam0, unknown uParam1)
{
    SET_BITS_IN_RANGE( uParam0, 0, 15, uParam1 );
    return;
}

void sub_101762(unknown uParam0, unknown uParam1)
{
    SET_BITS_IN_RANGE( uParam0, 16, 31, uParam1 );
    return;
}

int sub_101844(unknown uParam0)
{
    boolean bVar3;
    int I;

    bVar3 = true;
    for ( I = 0; I < (uParam0^); I++ )
    {
        if ((uParam0^)[I] != 0)
        {
            REQUEST_MODEL( (uParam0^)[I] );
            if (NOT (HAS_MODEL_LOADED( (uParam0^)[I] )))
            {
                bVar3 = false;
            }
        }
    }
    if (bVar3)
    {
        return 1;
    }
    return 0;
}

void sub_102000()
{
    unknown uVar2;
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref uVar2 );
    Result = l_U2289[uVar2];
    return Result;
}

void sub_102325(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    FORCE_LOADING_SCREEN( 1 );
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
        if (IS_NETWORK_GAME_RUNNING())
        {
            GET_NETWORK_TIMER( ref l_U2331 );
        }
        sub_7970();
    }
    if (bParam3)
    {
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 500 );
        }
    }
    FORCE_LOADING_SCREEN( 0 );
    return;
}

void sub_102514(unknown uParam0)
{
    int I;

    for ( I = 0; I < (uParam0^); I++ )
    {
        if ((uParam0^)[I] != 0)
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( (uParam0^)[I] );
        }
    }
    return;
}

void sub_102673(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3)
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

    l_U1 = uParam3;
    l_U2 = iParam1;
    sub_102697( ref uVar6, iParam1, uParam0 );
    SET_RANDOM_SEED( uParam2 );
    if (iParam1 != 12)
    {
        sub_104515( ref uVar6, uParam0 );
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
    sub_135901( uParam0 );
    SET_HEALTH_PICKUP_NETWORK_REGEN_TIME( 60000 );
    sub_141268( uParam0 );
    SET_ARMOUR_PICKUP_NETWORK_REGEN_TIME( 60000 );
    SWITCH_ARROW_ABOVE_BLIPPED_PICKUPS( 1 );
    return;
}

void sub_102697(int iParam0, unknown uParam1, unknown uParam2)
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
    iParam0->_fU0 = sub_9565( (TO_FLOAT( iParam0->_fU0 )) * fVar5 );
    iParam0->_fU4 = sub_9565( (TO_FLOAT( iParam0->_fU4 )) * fVar5 );
    iParam0->_fU8 = sub_9565( (TO_FLOAT( iParam0->_fU8 )) * fVar5 );
    iParam0->_fU12 = sub_9565( (TO_FLOAT( iParam0->_fU12 )) * fVar5 );
    iParam0->_fU16 = sub_9565( (TO_FLOAT( iParam0->_fU16 )) * fVar5 );
    iParam0->_fU20 = sub_9565( (TO_FLOAT( iParam0->_fU20 )) * fVar5 );
    iParam0->_fU24 = sub_9565( (TO_FLOAT( iParam0->_fU24 )) * fVar5 );
    iParam0->_fU28 = sub_9565( (TO_FLOAT( iParam0->_fU28 )) * fVar5 );
    iParam0->_fU32 = sub_9565( (TO_FLOAT( iParam0->_fU32 )) * fVar5 );
    iParam0->_fU36 = sub_9565( (TO_FLOAT( iParam0->_fU36 )) * fVar5 );
    iParam0->_fU40 = sub_9565( (TO_FLOAT( iParam0->_fU40 )) * fVar5 );
    iParam0->_fU44 = sub_9565( (TO_FLOAT( iParam0->_fU44 )) * fVar5 );
    iParam0->_fU48 = sub_9565( (TO_FLOAT( iParam0->_fU48 )) * fVar5 );
    iParam0->_fU52 = sub_9565( (TO_FLOAT( iParam0->_fU52 )) * fVar5 );
    iParam0->_fU56 = sub_9565( (TO_FLOAT( iParam0->_fU56 )) * fVar5 );
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

void sub_104515(int iParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0:
        sub_104515( iParam0, 3 );
        sub_104515( iParam0, 4 );
        sub_104515( iParam0, 2 );
        sub_104515( iParam0, 1 );
        sub_104515( iParam0, 8 );
        sub_104515( iParam0, 10 );
        sub_104515( iParam0, 9 );
        break;
        case 1:
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1196.11900000, 1907.18900000, 10.44690000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1040.06700000, 1415.01300000, 23.32290000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1619.44400000, 92.38760000, 10.32920000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1232.75700000, -449.90700000, 1.87340000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1463.06000000, 1407.98500000, 11.62070000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -2030.33000000, 175.78440000, 11.02870000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -862.60280000, 1469.77900000, 22.04920000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1012.03300000, 679.06480000, 3.07830000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1378.38600000, 735.35190000, 18.61550000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1111.47100000, 401.67400000, 3.56430000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1460.41900000, -519.12240000, 1.99810000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1375.61200000, 1309.62500000, 20.86810000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1721.67500000, -77.34120000, 5.29220000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1575.52100000, 163.83770000, 11.92580000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -982.23430000, 1026.28400000, 19.61470000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -2192.17600000, 189.19060000, 12.06900000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1984.85600000, -459.41330000, 2.24220000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1772.48200000, -635.06910000, 1.97230000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -966.62740000, 297.31780000, 3.37240000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1017.69000000, 47.42280000, 4.28950000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1213.55300000, -202.04250000, 2.43360000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1965.89200000, -621.95820000, 1.88090000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1253.14600000, -570.99440000, 1.83970000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1966.21400000, -84.47350000, 5.72440000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1891.29100000, 107.74920000, 6.01130000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1422.37000000, 136.37280000, 49.97710000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1165.49600000, 177.58810000, 3.30230000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1376.45400000, 1787.28600000, 17.63460000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -930.20860000, 1670.47400000, 22.86110000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -938.56030000, 1503.63000000, 24.11030000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1379.00900000, 511.33410000, 11.47260000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1612.35500000, 763.47670000, 27.13650000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1538.08500000, 504.22530000, 21.36960000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1232.44900000, 1313.95100000, 20.68790000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1083.27200000, 1202.30800000, 22.30520000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1390.47800000, 545.41720000, 11.48410000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1980.96900000, -265.83590000, 6.61140000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1741.89800000, 246.20510000, 20.26680000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1337.26100000, 307.37040000, 12.30250000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -982.65230000, 1354.82200000, 24.04510000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -838.37830000, 986.44950000, 19.63220000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1221.05700000, 864.11850000, 18.56040000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1976.24800000, -332.03490000, 2.14560000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1640.01600000, -590.24800000, 2.00040000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1883.32000000, -538.75700000, 2.20930000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -2157.76000000, -84.50720000, 5.72410000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1991.85400000, 22.04110000, 6.46750000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1819.05000000, 185.24510000, 15.05980000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1709.88900000, 123.50230000, 11.22510000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1370.11700000, 380.61760000, 13.61520000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1166.98700000, 368.54050000, 3.49970000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -914.88050000, 1330.30900000, 23.33390000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1059.97900000, 1522.27400000, 23.51210000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1249.42300000, 1446.43000000, 18.82090000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1105.38700000, 865.35820000, 21.13230000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1515.14300000, 647.81850000, 22.99270000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1417.65900000, 926.23530000, 20.06220000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -997.40830000, 713.36130000, 2.96060000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1132.63100000, 970.64170000, 18.57450000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1393.73000000, 982.70170000, 22.22130000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1702.86000000, 521.84710000, 24.44440000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1266.23500000, 1707.77100000, 26.72450000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -982.13600000, 1688.95500000, 18.40310000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1561.12900000, 1103.43900000, 26.17870000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1668.21500000, 317.14960000, 23.49550000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1242.57300000, 1071.52300000, 18.78060000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1655.30500000, -313.57930000, 1.85990000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1794.53300000, -58.22980000, 6.42350000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1670.90400000, 726.06620000, 28.86760000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -993.10710000, -315.56630000, 1.91840000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1972.19100000, -504.52570000, 2.25320000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -2179.58200000, 152.62590000, 11.89890000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -2083.70000000, 212.58110000, 10.80830000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1911.00500000, 297.32220000, 21.96660000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1620.61600000, -81.67460000, 5.73790000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1248.59100000, -18.99340000, 5.22130000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1185.79300000, -0.55840000, 3.30650000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1215.95700000, 1192.77300000, 20.66770000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1344.54300000, 1207.66700000, 16.15250000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1427.29900000, 1258.30400000, 23.01160000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1397.96300000, 1462.23900000, 24.17600000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -786.24220000, 1183.35700000, 8.45640000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1190.51000000, 1730.82400000, 31.88890000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1121.53000000, 695.33390000, 8.15600000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1674.10300000, 607.97680000, 27.42240000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -956.39570000, 791.87260000, 3.27540000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -995.10810000, 1125.10800000, 13.71140000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1584.32100000, 868.65160000, 20.24020000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1068.28000000, -543.48600000, 1.88580000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1531.64000000, -575.34600000, 2.00010000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1406.33800000, -89.17190000, 5.34300000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1714.17200000, 436.72830000, 24.44410000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1469.36200000, 490.46240000, 18.56530000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1312.04000000, 1734.09000000, 26.92140000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1537.10700000, 372.12060000, 20.96680000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -983.78270000, 1639.57700000, 22.89940000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1363.57000000, 1453.65700000, 19.97900000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1394.97000000, 1148.11900000, 18.72010000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -800.73000000, 1075.30600000, 10.04690000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1168.58000000, -295.70200000, 2.04920000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1339.62000000, 605.72930000, 11.51410000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1659.45000000, 649.34030000, 28.84120000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1353.10000000, 802.45560000, 18.56090000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1359.23000000, 446.40120000, 13.61450000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1852.94400000, -374.40150000, 2.17360000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1506.31600000, -388.77980000, 1.90370000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1024.62000000, -270.61100000, 1.91890000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1727.51000000, -226.10200000, 3.43530000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1299.11000000, -210.19200000, 1.94540000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1391.73300000, 60.11550000, 6.01040000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1468.68200000, 281.84210000, 12.76670000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1296.31000000, 223.55720000, 8.94460000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1523.81500000, -53.62390000, 5.89850000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1093.15500000, 1339.00100000, 23.51430000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -904.98600000, 1563.98500000, 24.70830000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1111.72300000, 1124.87900000, 12.62320000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1240.37000000, 452.18370000, 3.53580000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1470.64000000, 742.57860000, 23.07310000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -922.43100000, 893.72840000, 12.67350000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1204.28000000, 948.63290000, 18.59460000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1184.83000000, 786.36840000, 18.56270000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -899.17700000, 1078.25100000, 19.62630000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1258.09900000, 821.32230000, 18.56610000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1428.70900000, 798.65070000, 18.56530000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1487.61000000, 562.89360000, 19.12460000 );
        break;
        case 2:
        sub_106204( sub_104701( iParam0, 2 ), 23, 200, -563.10640000, 293.52680000, 5.65930000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 200, 79.41570000, -839.53680000, 3.99560000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 200, -277.35550000, -533.76340000, 3.92420000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 200, -491.51540000, -173.97790000, 6.90340000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 200, -235.68930000, 739.30850000, 6.12510000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 200, -539.49120000, 1362.38800000, 16.47050000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 200, -180.02360000, -823.41240000, 4.11750000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 200, 173.60920000, 236.49170000, 13.76010000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 200, 89.24590000, 1152.34900000, 13.57080000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 200, 63.60470000, -439.60590000, 13.75830000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 200, -226.95040000, 1714.70300000, 14.75500000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 200, 130.44570000, 467.39240000, 13.91780000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 200, -529.52310000, -339.29980000, 5.04460000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 200, -477.98870000, 1707.35300000, 7.46380000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 200, -636.54130000, -45.71210000, 3.81230000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 200, 140.68720000, -857.79680000, 3.77320000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 200, -108.89000000, 64499, 4.11910000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 200, 348.54010000, -431.52940000, 3.54320000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 200, 166.63900000, 1080.60900000, 13.62470000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 200, -145.57280000, 1694.71300000, 15.72350000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 200, 64.54370000, 261.20720000, 14.53200000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 200, -507.19360000, 533.97330000, 5.67160000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 200, -410.23560000, -141.84080000, 11.61790000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 200, -248.26890000, -589.95000000, 3.78540000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 200, 115.38710000, 741.87240000, 13.56160000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 200, 49.21290000, 1350.85200000, 15.25260000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 200, 332.02520000, -158.35070000, 8.06910000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 200, -462.60650000, 775.56370000, 8.98430000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 200, -66.39730000, 1550.17700000, 17.64730000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 200, -47.94850000, 35.91300000, 13.84780000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 200, -210.80500000, 1410.40400000, 19.35510000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 200, 136.81580000, 387.45690000, 14.02680000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 200, -604.36200000, 339.06450000, 3.67190000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 200, -135.90700000, 819.94900000, 17.62560000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 200, -437.64390000, 430.90700000, 8.93740000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 200, -522.79810000, 1018.30500000, 8.79210000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 200, -593.54960000, 1165.60900000, 8.94090000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 200, 89.78390000, 1251.53900000, 14.86610000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 200, -108.15450000, 1271.20900000, 19.43000000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 200, -5.26000000, -447.87000000, 13.75820000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 200, 171.83730000, -807.45750000, 3.97040000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 200, 0.32430000, -761.24270000, 4.08570000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 200, -526.37620000, 593.51290000, 12.12300000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 200, -554.97370000, 806.93090000, 8.05520000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 200, 13.89740000, 1147.71300000, 13.24760000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 200, 179.53490000, 691.26530000, 7.18630000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 200, -463.63800000, 899.77910000, 8.96270000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 200, -467.32180000, 1556.19000000, 17.47570000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 200, -284.66330000, 1600.64600000, 19.41570000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 200, -311.56230000, 1733.49700000, 12.12580000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 200, -99.43640000, 1350.29900000, 19.41500000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 200, -534.05160000, 1610.99600000, 8.39809000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 200, 91.99830000, -318.91000000, 13.61250000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 200, -619.61000000, -115.38000000, 5.59590000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 200, 361.06920000, -477.77790000, 4.81800000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 200, -404.86420000, 1487.26800000, 17.86060000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 200, -572.86970000, 227.56950000, 3.66220000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 150.65500000, 913.75690000, 7.35240000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -151.58120000, 1004.30900000, 5.22660000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -126.16370000, 554.53360000, 13.76430000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -389.27630000, 1763.59200000, 8.23320000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -414.94510000, 376.06220000, 11.07520000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -348.11940000, 631.42010000, 13.58580000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -561.26700000, 1457.39500000, 16.53680000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -656.75510000, 1140.68700000, 8.81430000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 286.89990000, -392.37890000, 3.97690000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 267.28000000, -686.88580000, 3.87500000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 185.85650000, 801.42330000, 7.45320000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -33.85220000, 772.73390000, 13.64890000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -658.17000000, 809.31000000, 3.10420000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 65123, 1658.10000000, 20.08190000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 65307, 1445.20000000, 19.45000000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -579.01340000, 1414.69400000, 14.47110000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -570.93210000, 158.32300000, 3.66220000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -641.65510000, -195.11170000, 3.94450000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -373.43770000, 1563.55700000, 19.15690000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -242.26720000, -515.22510000, 3.93780000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 83.27290000, 128.63830000, 13.74580000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 100.85700000, -751.07600000, 3.95820000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 148.27850000, -520.31800000, 13.76100000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -145.85800000, -436.54300000, 13.71600000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 30.52840000, -319.98200000, 13.72060000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -121.35400000, -765.42500000, 4.20210000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -301.78400000, -408.61900000, 3.82400000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -221.12500000, -244.63100000, 13.55080000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 345.52040000, -409.60800000, 3.69260000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -187.78400000, -104.23300000, 13.59230000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 23.03970000, -41.08220000, 13.81190000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -105.90000000, 129.42250000, 13.72260000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -470.49600000, 190.20460000, 8.85820000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -108.92700000, 371.07960000, 13.80730000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -308.23960000, 455.43910000, 13.69960000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 113.34910000, 650.53870000, 13.71280000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -69.89160000, 1147.73100000, 13.76710000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 29.31370000, 761.22520000, 13.50620000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 52.12710000, 889.81030000, 13.65160000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -616.57000000, 1001.96400000, 8.91920000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -491.81600000, 949.22980000, 8.96670000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 5.79550000, 1028.96500000, 13.72000000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -542.94400000, 1303.59300000, 16.25890000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -273.10860000, 1211.38200000, 17.78520000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -292.14300000, 1331.30300000, 23.60140000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -364.25800000, 1371.32500000, 14.19140000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -34.57900000, 1410.33300000, 19.42230000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -161.42200000, 1555.53300000, 17.37360000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 210.82320000, -105.36900000, 13.76120000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -124.28630000, -530.18220000, 13.76020000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -220.20000000, -883.72000000, 3.67810000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -107.78000000, -821.86000000, 4.12670000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 78.03000000, -670.74000000, 13.76770000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 151.18900000, -613.04700000, 9.63030000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -27.54000000, -823.69000000, 4.45430000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 200.28920000, -698.77010000, 3.95350000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -195.15000000, -711.21000000, 3.96790000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 100.96000000, -512.62000000, 15.08830000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 306.47000000, -623.30000000, 4.19430000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -79.41310000, 614.20590000, 13.76610000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -385.48000000, 738.49000000, 13.76610000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -434.99950000, 1101.79400000, 9.24650000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -31.37680000, 959.19130000, 13.92130000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -268.25000000, 751.37000000, 10.86610000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -199.04800000, 880.55260000, 5.15900000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -330.31000000, 1134.31000000, 12.49350000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -174.81230000, 938.15850000, 10.64700000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -115.90590000, 1043.57100000, 5.15920000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -315.16000000, 867.71000000, 8.89900000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -564.60000000, 1183.60000000, 9.01900000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -498.02150000, 1183.31100000, 13.21080000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -414.29530000, 1365.34600000, 15.55880000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -468.98060000, 1468.96400000, 17.86100000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -112.28410000, 1672.74500000, 17.61140000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -219.91810000, 1277.23200000, 22.09290000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 2.40000000, 1197.70000000, 16.47760000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -25.70000000, 1250.90000000, 19.43250000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -65.74770000, 1498.05800000, 17.44880000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -383.30600000, 319.06300000, 13.75090000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 65250, 344.20000000, 13.66590000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -212.60000000, 346.70000000, 14.03540000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -66.26470000, 278.22370000, 13.76360000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -181.14000000, 491.28420000, 13.71490000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -24.70000000, 405.20000000, 14.76350000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 51.61110000, 464.46720000, 13.69600000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 27.60000000, 374.20000000, 13.70190000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -603.98900000, 612.11540000, 3.85550000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -337.70000000, 215.40000000, 13.74920000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -383.50000000, 556.30000000, 13.77870000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -442.96920000, 590.37180000, 10.25190000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 141.80000000, 211.20000000, 13.76310000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -192.30000000, 162.40000000, 13.98940000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -348.60300000, -188.71300000, 13.64900000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -273.48200000, -157.81400000, 13.88300000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -117.97000000, -335.54000000, 13.73490000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -12.45000000, -218.40000000, 13.63990000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 179.94720000, -254.52090000, 11.85560000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 264.98180000, -302.83180000, 5.59270000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 162.58500000, -158.31150000, 13.92630000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 113.02140000, -39.66420000, 13.76250000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -126.60700000, -117.37200000, 13.81500000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 207.01740000, 20.70740000, 13.71320000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -254.45000000, -43.88000000, 13.76330000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -347.84500000, 105.27390000, 13.81310000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -345.03400000, -100.46700000, 13.70210000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -445.05100000, 131.98950000, 8.83120000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -490.37520000, 25.33320000, 6.86600000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -572.51200000, 86.31020000, 3.81230000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 29.85000000, -601.28000000, 13.69580000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, -184.29000000, 102.09000000, 13.76770000 );
        break;
        case 3:
        sub_106204( sub_104701( iParam0, 2 ), 23, 10, 539.10960000, 1256.93500000, 5.73630000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 10, 882.31930000, 1930.23800000, 34.16670000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 10, 1475.73900000, 1564.51600000, 3.66870000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 10, 93.89270000, 1713.48100000, 28.73100000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 10, 328.96450000, 1716.17800000, 14.86010000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 10, 1119.38200000, 1525.37700000, 15.63970000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 10, 707.74950000, 1309.93500000, 13.26370000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 10, 930.30580000, 1631.76100000, 16.05420000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 10, 360.37280000, 1881.50600000, 18.44000000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 10, 644.43170000, 1981.75500000, 30.80980000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 10, 468.04420000, 1396.87200000, 10.67750000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 10, 845.72580000, 1854.56700000, 43.95300000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 10, 1069.71500000, 1958.88900000, 10.90870000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 10, 1205.48100000, 1720.37000000, 15.66210000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 10, 1365.76300000, 1906.24700000, 4.63100000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 10, 634.93950000, 1612.97000000, 25.21720000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 10, 1319.39400000, 1685.28700000, 15.79480000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 10, 1439.96700000, 1723.91200000, 15.68820000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 10, 379.41550000, 1531.95200000, 15.94950000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 10, 1248.69500000, 1474.25200000, 15.82900000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 10, 386.04720000, 1755.51900000, 20.70220000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 10, 460.35860000, 2026.23700000, 6.86000000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 10, 553.16000000, 1462.95000000, 9.46780000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 10, 751.69490000, 1600.36700000, 20.85910000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 10, 1073.43700000, 1823.56400000, 12.77140000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 10, 1257.53000000, 1514.06300000, 15.99010000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 689.15590000, 1457.28400000, 13.75660000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 936.22550000, 1530.67400000, 15.83790000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 771.99180000, 1966.79800000, 22.72810000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 1185.19300000, 1471.14700000, 15.68200000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 702.78440000, 1937.85000000, 26.15900000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 547.32150000, 1316.52000000, 9.93810000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 368.63770000, 1628.96100000, 15.21180000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 510.20640000, 1825.90800000, 29.83320000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 584.97880000, 1880.88200000, 26.36540000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 734.09080000, 1532.38800000, 17.66370000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 1332.83000000, 1420.26600000, 10.63750000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 1134.34400000, 1812.80000000, 9.31490000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 1228.91500000, 1939.79000000, 11.30560000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 666.57490000, 1435.97500000, 13.16830000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 1060.42200000, 1902.93300000, 13.20990000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 772.97860000, 1477.91500000, 13.24540000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 1028.85700000, 1662.25600000, 15.19240000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 877.66640000, 1594.83200000, 15.93270000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 1141.42700000, 1672.18500000, 16.12200000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 482.39520000, 1621.94800000, 19.15470000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 325.66010000, 1807.28400000, 16.58760000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 438.86760000, 1955.03500000, 23.10060000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 440.77880000, 1648.07300000, 14.95950000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 455.56370000, 1541.82700000, 14.05120000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 468.56070000, 1498.16300000, 12.62310000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 539.00440000, 1760.74400000, 31.55800000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 562.00150000, 1545.10000000, 16.04880000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 558.07730000, 1432.16400000, 10.11410000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 587.98410000, 1673.94000000, 30.77670000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 611.11330000, 1734.55100000, 30.86380000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 689.79570000, 1542.87100000, 17.26990000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 731.81860000, 1401.85100000, 13.21590000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 788.46140000, 1394.36900000, 13.23530000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 816.96370000, 1758.44200000, 16.18570000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 931.48030000, 1713.01100000, 15.68600000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 965.84810000, 1781.22200000, 19.21950000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 1074.58800000, 1754.85300000, 13.37660000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 1236.91200000, 1776.98000000, 9.31600000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 1256.70600000, 1841.52500000, 9.13970000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 1303.10100000, 1848.62300000, 9.11100000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 10, 1408.43200000, 1575.70900000, 2.65490000 );
        break;
        case 4:
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, 971.25700000, -241.15850000, 21.77490000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, 1991.54800000, 666.28930000, 17.05490000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, 978.78280000, 697.73490000, 25.01930000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, 1670.20700000, 1148.62700000, 2.37930000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, 2197.52100000, -4.28880000, 4.78710000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, 769.50460000, 354.70890000, 7.67740000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, 1044.38500000, 577.04820000, 24.68200000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, 796.74760000, -204.30470000, 4.99600000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, 1034.98200000, 993.40050000, 14.51280000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, 1488.01100000, -481.83600000, 30.15300000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, 725.29760000, 59.99800000, 4.95690000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, 1491.71400000, 357.32600000, 16.20000000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, 1177.05400000, -381.75500000, 20.50900000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, 1534.77600000, 39.55110000, 23.86690000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, 1382.43500000, -562.72270000, 13.62910000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, 1455.49000000, -332.38300000, 13.75420000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, 1206.40700000, 1054.12900000, 6.88890000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, 1386.27600000, 399.48250000, 21.94650000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, 1510.31200000, -418.72120000, 33.56950000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, 2237.96900000, 698.48690000, 4.80750000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, 2334.89200000, 169.20370000, 4.85780000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, 957.12920000, 187.32830000, 30.85680000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, 1742.97400000, 406.33870000, 24.02560000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, 1462.04300000, 27.35250000, 23.23340000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, 1355.33500000, 114.71390000, 30.29480000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, 1301.52300000, -393.57320000, 17.34230000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, 1047.89600000, 488.45810000, 18.52560000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, 711.86510000, 112.66810000, 5.00400000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, 1324.37400000, -709.35170000, 7.32980000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, 937.48060000, -706.47240000, 15.44030000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, 1145.83100000, -629.40700000, 12.77860000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, 1636.29900000, 161.49530000, 26.91540000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, 1352.16700000, -526.77150000, 13.61500000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, 1390.80000000, -259.77330000, 19.18340000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, 896.72970000, 432.34670000, 12.57160000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, 1238.30300000, 424.19980000, 21.60770000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, 1769.25800000, 1027.22600000, 14.55440000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, 893.41270000, 486.69640000, 12.48910000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, 2313.73100000, -5.84420000, 4.85890000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, 2238.16700000, 189.87030000, 4.90610000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, 2081.40600000, 309.53860000, 18.81760000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, 2115.34300000, 505.21730000, 8.60340000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, 2068.74900000, 609.38340000, 17.70370000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, 1909.62700000, 277.26980000, 4.23590000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, 2457.64300000, 394.31570000, 4.80800000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1787.68600000, 884.52730000, 16.06660000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 794.19010000, 75.48400000, 5.01250000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1874.83800000, 107.34850000, 17.14260000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 2189.09700000, 321.15950000, 5.20560000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 2616.15100000, 432.87480000, 4.85950000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1489.06000000, 563.60000000, 28.83170000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1023.06200000, 617.05350000, 37.28110000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1381.86900000, 334.10410000, 18.50400000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1488.55100000, 648.40590000, 27.34510000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1497.21300000, 912.85590000, 14.28900000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1102.66500000, -84.83450000, 35.29810000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1103.88000000, -217.78940000, 21.19290000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 902.45760000, -682.94340000, 15.33640000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1139.98000000, -283.95670000, 19.64120000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1114.17900000, 287.47740000, 30.20140000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1202.41300000, -679.65320000, 15.42330000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 804.32350000, -25.85970000, 5.15600000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 850.31520000, 681.09970000, 6.88570000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1595.65200000, 366.45610000, 24.23320000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 834.78190000, 842.82500000, 10.80350000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1175.59000000, 975.44030000, 14.40380000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1246.67300000, 892.18030000, 30.61760000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 2408.35400000, 27.70170000, 5.08350000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 2762.13500000, 422.38900000, 5.06270000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 2327.30600000, -108.32800000, 4.85780000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 2489.17700000, 755.87680000, 3.45390000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1951.25600000, 864.31450000, 9.95050000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1910.89400000, 468.99340000, 17.39970000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1894.39700000, 724.58680000, 23.24230000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 2671.00600000, 413.67400000, 4.80730000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 2357.89800000, 398.53440000, 5.08020000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1056.80600000, -561.22890000, 12.66850000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 926.81460000, -500.43770000, 14.14500000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 940.84120000, 327.51310000, 29.74390000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1385.23000000, 190.27770000, 25.93480000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 945.37550000, -643.48990000, 13.23200000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1043.36600000, 909.41000000, 30.60360000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1136.78700000, -698.29410000, 15.42140000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 938.77260000, 911.06760000, 21.62160000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1062.84000000, 700.77970000, 32.94400000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1050.94100000, 854.70670000, 30.68800000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1240.56500000, 751.17660000, 35.11810000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1393.91600000, 530.09220000, 27.96500000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1263.16100000, 337.69190000, 20.31880000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1153.28600000, 448.26910000, 28.82300000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 830.50780000, 356.23580000, 5.96940000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1552.73500000, 836.96840000, 16.02460000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1823.46600000, 550.70790000, 27.97250000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1819.67400000, 344.58930000, 21.63850000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1780.63100000, 176.98750000, 20.74130000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1526.18500000, 202.64920000, 22.12750000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1414.34000000, 15.21330000, 24.87060000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1226.28700000, 151.64710000, 31.45340000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 957.46700000, 70.46760000, 29.02720000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1200.92300000, -49.12340000, 29.61420000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1302.28900000, -106.41000000, 25.83070000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1311.66600000, 94.31480000, 33.43510000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1267.07500000, -262.42500000, 24.33860000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1072.13700000, -278.21340000, 20.05710000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 989.40310000, -324.93550000, 19.87850000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 809.38740000, -501.27790000, 13.00590000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 896.74400000, -581.16300000, 12.97120000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 721.35270000, -294.43500000, 4.82040000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 766.60350000, -558.81270000, 8.71300000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 872.93650000, -293.38860000, 16.30820000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1248.20200000, -434.06700000, 15.65760000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1042.48200000, -470.39700000, 13.56660000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1029.54100000, -700.80800000, 15.44000000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 837.87730000, 126.86570000, 4.93750000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1376.86500000, -66.94800000, 21.78340000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1227.66700000, 24.23500000, 34.69800000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 881.41480000, 191.42900000, 29.83690000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1241.61900000, -149.58210000, 26.67020000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 798.72020000, -369.13160000, 6.53280000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1025.91100000, -71.99620000, 27.75800000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 790.45740000, -291.48900000, 13.50790000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1190.75800000, 695.12240000, 36.33260000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1736.31100000, 673.13120000, 27.00880000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1635.02900000, 726.04530000, 27.21290000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1641.17200000, 508.39920000, 27.78160000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1725.32700000, 504.99910000, 27.94640000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1168.02600000, 550.06880000, 28.22670000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1343.09000000, 618.81650000, 35.90860000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1415.46000000, 784.76450000, 27.24360000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 986.42850000, 517.60480000, 20.83150000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 978.83850000, 796.69900000, 24.33790000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1371.68500000, 813.48190000, 24.64800000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1736.14500000, 310.83050000, 11.00410000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1562.77400000, 486.79020000, 28.07260000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1540.74600000, 992.09050000, 13.14870000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1120.33300000, 770.54590000, 33.62930000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1687.03400000, 913.52890000, 15.09290000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 2456.05300000, 193.38270000, 4.85780000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 2187.67200000, 454.12460000, 5.10300000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 2544.68500000, 452.00130000, 4.80790000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 2406.69600000, 552.79240000, 4.85780000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 2309.43700000, 556.20780000, 5.03860000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1965.17900000, 157.26200000, 14.65190000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 2194.80600000, 633.44290000, 4.92400000 );
        break;
        case 5:
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1988.59600000, -261.24350000, 13.21570000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1957.61700000, -380.15630000, 2.54140000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1750.17500000, -188.89970000, 9.31030000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1462.18300000, -555.94830000, 7.14380000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1896.97200000, -652.20210000, 8.51260000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -2127.38100000, -327.66700000, 1.84810000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1832.01600000, -591.09220000, 39.02480000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1557.64900000, -487.77500000, 49.97720000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1839.98600000, -648.80100000, 5.82910000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1849.57000000, -197.37200000, 1.62920000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1569.59200000, -288.30590000, -1.61900000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1593.68600000, -528.22850000, 5.58460000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1652.23700000, -344.31550000, 1.83710000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1883.32000000, -538.75650000, 2.20930000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1981.27900000, -639.00310000, 3.28400000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1481.57000000, -285.77700000, 1.83700000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1744.83100000, -312.47730000, 5.92080000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1624.97600000, -680.03380000, 6.17540000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -2062.50500000, -433.98490000, 3.37430000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1756.51600000, -264.89190000, 10.12920000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1451.59000000, -613.79830000, 2.00180000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1516.68000000, -466.84100000, 1.82770000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1723.96000000, -386.08700000, 1.92320000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1703.45000000, -569.29200000, 1.92350000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1971.57000000, -577.45600000, 1.83690000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1927.70000000, -488.93700000, 2.20850000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1678.75000000, -254.92500000, 1.74960000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 63658, -300.98300000, 4.43590000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1975.83000000, -210.92500000, 1.62840000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -2024.15000000, -426.54300000, 3.28110000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1968.68000000, -507.75940000, 2.20930000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1813.52600000, -506.78250000, 2.04570000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1829.59200000, -454.68280000, 2.20950000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1682.03400000, -427.12200000, 1.91060000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1531.64500000, -575.34610000, 2.00010000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1562.14300000, -436.53920000, 3.60510000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1756.10000000, -451.95550000, 2.04500000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1858.55400000, -375.19650000, 3.23150000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1554.54900000, -233.75650000, 4.38720000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1643.03100000, -611.03750000, 1.83760000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1727.51100000, -226.10180000, 3.43530000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1937.72600000, -238.36680000, 4.43800000 );
        break;
        case 6:
        switch (iParam0->_fU64)
        {
            case 1:
            sub_106204( sub_123521( iParam0, 12 ), 23, 0, -1179.37400000, -471.02340000, 12.30210000 );
            sub_106204( sub_123521( iParam0, 5 ), 23, 0, -974.23990000, -394.78180000, 12.49830000 );
            sub_106204( sub_123521( iParam0, 12 ), 23, 0, -1129.84400000, -374.91930000, 11.96490000 );
            sub_106204( sub_123521( iParam0, 5 ), 23, 0, -985.62780000, -456.36110000, 12.30230000 );
            sub_106204( sub_123521( iParam0, 7 ), 23, 0, -1180.50800000, -469.41180000, 7.28980000 );
            sub_106204( sub_123521( iParam0, 12 ), 23, 0, -1139.07900000, -324.89190000, 7.28950000 );
            sub_106204( sub_123521( iParam0, 7 ), 23, 0, -1075.19800000, -492.82770000, 12.30190000 );
            sub_106204( sub_123521( iParam0, 5 ), 23, 0, -900.00490000, -397.62310000, 12.30170000 );
            break;
            case 2:
            sub_106204( sub_123521( iParam0, 17 ), 23, 0, -1179.37400000, -471.02340000, 12.30210000 );
            sub_106204( sub_123521( iParam0, 4 ), 23, 0, -974.23990000, -394.78180000, 12.49830000 );
            sub_106204( sub_123521( iParam0, 14 ), 23, 0, -1129.84400000, -374.91930000, 11.96490000 );
            sub_106204( sub_123521( iParam0, 4 ), 23, 0, -985.62780000, -456.36110000, 12.30230000 );
            sub_106204( sub_123521( iParam0, 13 ), 23, 0, -1180.50800000, -469.41180000, 7.28980000 );
            sub_106204( sub_123521( iParam0, 14 ), 23, 0, -1139.07900000, -324.89190000, 7.28950000 );
            sub_106204( sub_123521( iParam0, 17 ), 23, 0, -1075.19800000, -492.82770000, 12.30190000 );
            sub_106204( sub_123521( iParam0, 4 ), 23, 0, -900.00490000, -397.62310000, 12.30170000 );
            break;
            case 3:
            sub_106204( sub_123521( iParam0, 16 ), 23, 0, -1179.37400000, -471.02340000, 12.30210000 );
            sub_106204( sub_123521( iParam0, 18 ), 23, 0, -974.23990000, -394.78180000, 12.49830000 );
            sub_106204( sub_123521( iParam0, 15 ), 23, 0, -1129.84400000, -374.91930000, 11.96490000 );
            sub_106204( sub_123521( iParam0, 5 ), 23, 0, -985.62780000, -456.36110000, 12.30230000 );
            sub_106204( sub_123521( iParam0, 13 ), 23, 0, -1180.50800000, -469.41180000, 7.28980000 );
            sub_106204( sub_123521( iParam0, 15 ), 23, 0, -1139.07900000, -324.89190000, 7.28950000 );
            sub_106204( sub_123521( iParam0, 16 ), 23, 0, -1075.19800000, -492.82770000, 12.30190000 );
            sub_106204( sub_123521( iParam0, 4 ), 23, 0, -900.00490000, -397.62310000, 12.30170000 );
            break;
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1179.37400000, -471.02340000, 12.30210000 );
            sub_106204( sub_104701( iParam0, 2 ), 23, 0, -1129.84400000, -374.91930000, 11.96490000 );
            sub_106204( sub_104701( iParam0, 2 ), 23, 0, -1180.50800000, -469.41180000, 7.28980000 );
            sub_106204( sub_104701( iParam0, 2 ), 23, 0, -1075.19800000, -492.82770000, 12.30190000 );
            sub_106204( sub_104701( iParam0, 0 ), 23, 0, -974.23990000, -394.78180000, 12.49830000 );
            sub_106204( sub_104701( iParam0, 0 ), 23, 0, -985.62780000, -456.36110000, 12.30230000 );
            sub_106204( sub_104701( iParam0, 0 ), 23, 0, -1139.07900000, -324.89190000, 7.28950000 );
            sub_106204( sub_104701( iParam0, 0 ), 23, 0, -900.00490000, -397.62310000, 12.30170000 );
            break;
            case 0:
            sub_106204( sub_123521( iParam0, 16 ), 23, 0, -1179.37400000, -471.02340000, 12.30210000 );
            sub_106204( sub_123521( iParam0, 18 ), 23, 0, -974.23990000, -394.78180000, 12.49830000 );
            sub_106204( sub_123521( iParam0, 15 ), 23, 0, -1129.84400000, -374.91930000, 11.96490000 );
            sub_106204( sub_123521( iParam0, 5 ), 23, 0, -985.62780000, -456.36110000, 12.30230000 );
            sub_106204( sub_123521( iParam0, 13 ), 23, 0, -1180.50800000, -469.41180000, 7.28980000 );
            sub_106204( sub_123521( iParam0, 15 ), 23, 0, -1139.07900000, -324.89190000, 7.28950000 );
            sub_106204( sub_123521( iParam0, 16 ), 23, 0, -1075.19800000, -492.82770000, 12.30190000 );
            sub_106204( sub_123521( iParam0, 4 ), 23, 0, -900.00490000, -397.62310000, 12.30170000 );
            break;
        }
        sub_106204( sub_104701( iParam0, 2 ), 23, 0, -943.87520000, -369.52990000, 9.96950000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 0, -974.14700000, -325.42500000, 12.30190000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 0, -905.80910000, -355.14430000, 2.17950000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 0, -1034.78100000, -487.44620000, 2.17920000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 0, -1134.33600000, -442.75500000, 2.17880000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 0, -938.73180000, -411.02590000, 11.94080000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 0, -1135.11500000, -358.36580000, 2.17910000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 0, -969.02450000, -431.48750000, 2.93540000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, -971.50310000, -365.51860000, 2.13990000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, -1131.40600000, -476.22250000, 1.25700000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, -1084.88200000, -413.49010000, 2.18670000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, -930.18570000, -416.89610000, 3.71260000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, -1082.97000000, -349.59460000, 2.17820000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, -946.29130000, -328.82420000, 2.17950000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, -1049.83100000, -380.59300000, 2.31070000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, -1027.14900000, -358.24460000, 2.16310000 );
        break;
        case 7:
        switch (iParam0->_fU64)
        {
            case 1:
            sub_106204( sub_123521( iParam0, 7 ), 23, 0, -1075.98500000, 148.86390000, 6.37530000 );
            sub_106204( sub_123521( iParam0, 12 ), 23, 0, -1283.58800000, 455.25190000, 49.97760000 );
            sub_106204( sub_123521( iParam0, 5 ), 23, 0, -1255.54000000, 116.30180000, 4.80030000 );
            sub_106204( sub_123521( iParam0, 12 ), 23, 0, -964.67740000, 151.32000000, 5.27030000 );
            sub_106204( sub_123521( iParam0, 5 ), 23, 0, -1057.64600000, 249.89120000, 7.75290000 );
            break;
            case 2:
            sub_106204( sub_123521( iParam0, 17 ), 23, 0, -1075.98500000, 148.86390000, 6.37530000 );
            sub_106204( sub_123521( iParam0, 17 ), 23, 0, -1214.61000000, 531.44000000, 13.04100000 );
            sub_106204( sub_123521( iParam0, 4 ), 23, 0, -1255.54000000, 116.30180000, 4.80030000 );
            sub_106204( sub_123521( iParam0, 14 ), 23, 0, -964.67740000, 151.32000000, 5.27030000 );
            sub_106204( sub_123521( iParam0, 10 ), 23, 0, -1057.64600000, 249.89120000, 7.75290000 );
            break;
            case 3:
            sub_106204( sub_123521( iParam0, 16 ), 23, 0, -1075.98500000, 148.86390000, 6.37530000 );
            sub_106204( sub_123521( iParam0, 18 ), 23, 0, -1214.61000000, 531.44000000, 13.04100000 );
            sub_106204( sub_123521( iParam0, 4 ), 23, 0, -1255.54000000, 116.30180000, 4.80030000 );
            sub_106204( sub_123521( iParam0, 15 ), 23, 0, -964.67740000, 151.32000000, 5.27030000 );
            sub_106204( sub_123521( iParam0, 11 ), 23, 0, -1057.64600000, 249.89120000, 7.75290000 );
            break;
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            sub_106204( sub_104701( iParam0, 2 ), 23, 24, -964.67740000, 151.32000000, 5.27030000 );
            sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1283.58800000, 455.25190000, 49.97760000 );
            sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1075.98500000, 148.86390000, 6.37530000 );
            sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1255.54000000, 116.30180000, 4.80030000 );
            sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1057.64600000, 249.89120000, 7.75290000 );
            break;
            case 0:
            sub_106204( sub_123521( iParam0, 16 ), 23, 0, -1075.98500000, 148.86390000, 6.37530000 );
            sub_106204( sub_123521( iParam0, 18 ), 23, 0, -1214.61000000, 531.44000000, 13.04100000 );
            sub_106204( sub_123521( iParam0, 4 ), 23, 0, -1255.54000000, 116.30180000, 4.80030000 );
            sub_106204( sub_123521( iParam0, 15 ), 23, 0, -964.67740000, 151.32000000, 5.27030000 );
            sub_106204( sub_123521( iParam0, 11 ), 23, 0, -1057.64600000, 249.89120000, 7.75290000 );
            break;
        }
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1274.41100000, 701.62580000, 14.39700000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1099.49500000, 393.20450000, 3.93250000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1017.69400000, 47.42280000, 4.28950000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -968.62940000, 337.82890000, 3.50260000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -986.80800000, 453.98970000, 3.37260000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1184.88300000, 16.94380000, 3.30650000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -1296.30900000, 223.55720000, 8.94460000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, -919.65090000, 646.94350000, 3.07890000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1038.82800000, 568.35760000, 3.07740000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, -1055.34500000, 448.75700000, 3.37260000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1004.58400000, 710.36520000, 2.96050000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -975.65720000, 262.81570000, 3.37280000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1276.45500000, 641.39540000, 7.36890000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -954.30020000, 627.81490000, 3.07890000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1231.63400000, 500.95030000, 3.37340000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1213.79000000, 664.11570000, 12.85330000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1133.36000000, 519.97690000, 3.89570000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1101.90900000, 317.84240000, 3.50320000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1121.53500000, 695.33390000, 8.15600000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1143.45200000, 21.28500000, 3.20850000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1151.13800000, 341.02540000, 3.09000000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1168.72000000, 148.28840000, 3.23240000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1214.21100000, 591.50100000, 3.37350000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1240.37300000, 452.18370000, 3.53580000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1260.71500000, 353.20720000, 6.37320000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1275.83900000, -6.00980000, 5.23960000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1220.80700000, 209.69680000, 3.43310000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1196.68000000, 337.08170000, 3.00040000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, -1095.52500000, 579.76070000, 3.52740000 );
        break;
        case 8:
        switch (iParam0->_fU64)
        {
            case 1:
            sub_106204( sub_123521( iParam0, 12 ), 23, 24, -608.34910000, -798.24460000, 12.06630000 );
            sub_106204( sub_123521( iParam0, 5 ), 23, 24, -608.20830000, -857.52000000, 12.19460000 );
            sub_106204( sub_123521( iParam0, 12 ), 23, 24, -804.94760000, -737.65580000, 3.83730000 );
            sub_106204( sub_123521( iParam0, 7 ), 23, 24, -608.10000000, -819.83000000, 3.83770000 );
            sub_106204( sub_123521( iParam0, 12 ), 23, 24, -714.94530000, -818.98440000, 3.83740000 );
            sub_106204( sub_123521( iParam0, 7 ), 23, 24, -489.24340000, -890.79850000, 3.83770000 );
            sub_106204( sub_123521( iParam0, 12 ), 23, 24, -517.41030000, -978.96110000, 4.53750000 );
            sub_106204( sub_123521( iParam0, 12 ), 23, 24, -563.81060000, -1047.09000000, 4.05940000 );
            sub_106204( sub_123521( iParam0, 7 ), 23, 24, -625.72610000, -1002.18000000, 4.39280000 );
            sub_106204( sub_123521( iParam0, 5 ), 23, 24, -529.89010000, -813.25090000, 4.53770000 );
            sub_106204( sub_123521( iParam0, 5 ), 23, 24, -569.10100000, -733.48970000, 3.89950000 );
            sub_106204( sub_123521( iParam0, 7 ), 23, 24, -628.38550000, -673.67490000, 4.90510000 );
            sub_106204( sub_123521( iParam0, 7 ), 23, 24, -608.37770000, -893.77860000, 3.83770000 );
            sub_106204( sub_123521( iParam0, 5 ), 23, 24, -612.43000000, -955.11000000, 3.83770000 );
            sub_106204( sub_123521( iParam0, 12 ), 23, 24, -490.30000000, -956.50000000, 3.83770000 );
            break;
            case 2:
            sub_106204( sub_123521( iParam0, 17 ), 23, 24, -608.34910000, -798.24460000, 12.06630000 );
            sub_106204( sub_123521( iParam0, 17 ), 23, 24, -608.20830000, -857.52000000, 12.19460000 );
            sub_106204( sub_123521( iParam0, 4 ), 23, 24, -804.94760000, -737.65580000, 3.83730000 );
            sub_106204( sub_123521( iParam0, 13 ), 23, 24, -608.10000000, -819.83000000, 3.83770000 );
            sub_106204( sub_123521( iParam0, 14 ), 23, 24, -714.94530000, -818.98440000, 3.83740000 );
            sub_106204( sub_123521( iParam0, 9 ), 23, 24, -489.24340000, -890.79850000, 3.83770000 );
            sub_106204( sub_123521( iParam0, 13 ), 23, 24, -517.41030000, -978.96110000, 4.53750000 );
            sub_106204( sub_123521( iParam0, 14 ), 23, 24, -563.81060000, -1047.09000000, 4.05940000 );
            sub_106204( sub_123521( iParam0, 14 ), 23, 24, -625.72610000, -1002.18000000, 4.39280000 );
            sub_106204( sub_123521( iParam0, 14 ), 23, 24, -529.89010000, -813.25090000, 4.53770000 );
            sub_106204( sub_123521( iParam0, 14 ), 23, 24, -569.10100000, -733.48970000, 3.89950000 );
            sub_106204( sub_123521( iParam0, 4 ), 23, 24, -628.38550000, -673.67490000, 4.90510000 );
            sub_106204( sub_123521( iParam0, 9 ), 23, 24, -608.37770000, -893.77860000, 3.83770000 );
            sub_106204( sub_123521( iParam0, 4 ), 23, 24, -612.43000000, -955.11000000, 3.83770000 );
            sub_106204( sub_123521( iParam0, 14 ), 23, 24, -490.30000000, -956.50000000, 3.83770000 );
            break;
            case 3:
            sub_106204( sub_123521( iParam0, 17 ), 23, 24, -608.34910000, -798.24460000, 12.06630000 );
            sub_106204( sub_123521( iParam0, 5 ), 23, 24, -608.20830000, -857.52000000, 12.19460000 );
            sub_106204( sub_123521( iParam0, 18 ), 23, 24, -804.94760000, -737.65580000, 3.83730000 );
            sub_106204( sub_123521( iParam0, 13 ), 23, 24, -608.10000000, -819.83000000, 3.83770000 );
            sub_106204( sub_123521( iParam0, 15 ), 23, 24, -714.94530000, -818.98440000, 3.83740000 );
            sub_106204( sub_123521( iParam0, 13 ), 23, 24, -489.24340000, -890.79850000, 3.83770000 );
            sub_106204( sub_123521( iParam0, 13 ), 23, 24, -517.41030000, -978.96110000, 4.53750000 );
            sub_106204( sub_123521( iParam0, 15 ), 23, 24, -563.81060000, -1047.09000000, 4.05940000 );
            sub_106204( sub_123521( iParam0, 11 ), 23, 24, -625.72610000, -1002.18000000, 4.39280000 );
            sub_106204( sub_123521( iParam0, 11 ), 23, 24, -529.89010000, -813.25090000, 4.53770000 );
            sub_106204( sub_123521( iParam0, 18 ), 23, 24, -569.10100000, -733.48970000, 3.89950000 );
            sub_106204( sub_123521( iParam0, 4 ), 23, 24, -628.38550000, -673.67490000, 4.90510000 );
            sub_106204( sub_123521( iParam0, 13 ), 23, 24, -608.37770000, -893.77860000, 3.83770000 );
            sub_106204( sub_123521( iParam0, 4 ), 23, 24, -612.43000000, -955.11000000, 3.83770000 );
            sub_106204( sub_123521( iParam0, 13 ), 23, 24, -490.30000000, -956.50000000, 3.83770000 );
            break;
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            sub_106204( sub_104701( iParam0, 2 ), 23, 24, -608.20830000, -857.52000000, 12.19460000 );
            sub_106204( sub_104701( iParam0, 2 ), 23, 24, -804.94760000, -737.65580000, 3.83730000 );
            sub_106204( sub_104701( iParam0, 2 ), 23, 24, -714.94530000, -818.98440000, 3.83740000 );
            sub_106204( sub_104701( iParam0, 2 ), 23, 24, -563.81060000, -1047.09000000, 4.05940000 );
            sub_106204( sub_104701( iParam0, 2 ), 23, 24, -569.10100000, -733.48970000, 3.89950000 );
            sub_106204( sub_104701( iParam0, 2 ), 23, 24, -628.38550000, -673.67490000, 4.90510000 );
            sub_106204( sub_104701( iParam0, 2 ), 23, 24, -612.43000000, -955.11000000, 3.83770000 );
            sub_106204( sub_104701( iParam0, 0 ), 23, 24, -608.34910000, -798.24460000, 12.06630000 );
            sub_106204( sub_104701( iParam0, 0 ), 23, 24, -608.10000000, -819.83000000, 3.83770000 );
            sub_106204( sub_104701( iParam0, 0 ), 23, 24, -489.24340000, -890.79850000, 3.83770000 );
            sub_106204( sub_104701( iParam0, 0 ), 23, 24, -517.41030000, -978.96110000, 4.53750000 );
            sub_106204( sub_104701( iParam0, 0 ), 23, 24, -625.72610000, -1002.18000000, 4.39280000 );
            sub_106204( sub_104701( iParam0, 0 ), 23, 24, -529.89010000, -813.25090000, 4.53770000 );
            sub_106204( sub_104701( iParam0, 0 ), 23, 24, -608.37770000, -893.77860000, 3.83770000 );
            sub_106204( sub_104701( iParam0, 0 ), 23, 24, -490.30000000, -956.50000000, 3.83770000 );
            break;
            case 0:
            sub_106204( sub_123521( iParam0, 17 ), 23, 24, -608.34910000, -798.24460000, 12.06630000 );
            sub_106204( sub_123521( iParam0, 5 ), 23, 24, -608.20830000, -857.52000000, 12.19460000 );
            sub_106204( sub_123521( iParam0, 18 ), 23, 24, -804.94760000, -737.65580000, 3.83730000 );
            sub_106204( sub_123521( iParam0, 12 ), 23, 24, -608.10000000, -819.83000000, 3.83770000 );
            sub_106204( sub_123521( iParam0, 14 ), 23, 24, -714.94530000, -818.98440000, 3.83740000 );
            sub_106204( sub_123521( iParam0, 9 ), 23, 24, -489.24340000, -890.79850000, 3.83770000 );
            sub_106204( sub_123521( iParam0, 12 ), 23, 24, -517.41030000, -978.96110000, 4.53750000 );
            sub_106204( sub_123521( iParam0, 14 ), 23, 24, -563.81060000, -1047.09000000, 4.05940000 );
            sub_106204( sub_123521( iParam0, 10 ), 23, 24, -625.72610000, -1002.18000000, 4.39280000 );
            sub_106204( sub_123521( iParam0, 11 ), 23, 24, -529.89010000, -813.25090000, 4.53770000 );
            sub_106204( sub_123521( iParam0, 18 ), 23, 24, -569.10100000, -733.48970000, 3.89950000 );
            sub_106204( sub_123521( iParam0, 4 ), 23, 24, -628.38550000, -673.67490000, 4.90510000 );
            sub_106204( sub_123521( iParam0, 9 ), 23, 24, -608.37770000, -893.77860000, 3.83770000 );
            sub_106204( sub_123521( iParam0, 4 ), 23, 24, -612.43000000, -955.11000000, 3.83770000 );
            sub_106204( sub_123521( iParam0, 13 ), 23, 24, -490.30000000, -956.50000000, 3.83770000 );
            break;
        }
        break;
        case 9:
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, 408.80360000, -65.24540000, 4.29340000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, 561.51890000, 188.31020000, 7.71200000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, 546.11480000, 224.00730000, 9.71000000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, 535.68580000, 120.49250000, 2.56830000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 24, 489.39300000, 221.40600000, 7.72690000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, 523.61310000, -76.84820000, 8.28780000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, 375.34610000, 109.64960000, 3.99930000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, 466.36250000, -64.42510000, 8.25140000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 24, 433.49540000, 32.68570000, 7.85790000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 468.10000000, 402.10000000, 7.27620000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 431.43030000, 226.85410000, 13.71420000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 530.50880000, 257.98000000, 7.89350000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 415.05510000, 346.20030000, 7.53930000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 452.16560000, 313.49470000, 7.57830000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 480.96360000, 105.28050000, 6.95840000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 518.70980000, 313.52720000, 7.57960000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 533.97420000, 373.89600000, 7.69930000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 526.41750000, -13.77130000, 7.98750000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 486.09720000, 40.29870000, 7.71270000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 376.78250000, 43.35770000, 4.11130000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 432.88990000, 148.55520000, 7.70640000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 376.07240000, 198.49140000, 7.86880000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 455.20870000, 221.32960000, 7.70100000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 445.80360000, 99.30360000, 7.72650000 );
        break;
        case 10:
        sub_106204( sub_104701( iParam0, 2 ), 23, 0, 568.79020000, 786.22060000, 2.00000000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 0, 504.12220000, 691.04800000, 1.84050000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 0, 535.28340000, 852.84720000, 20.78500000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 0, 657.89820000, 700.62180000, 14.08770000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 0, 607.02870000, 879.24570000, 14.08760000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 0, 658.13440000, 879.37540000, 14.08750000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 0, 655.82540000, 1099.45200000, 0.50160000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 0, 433.36610000, 1064.61300000, 0.66200000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 0, 550.55820000, 898.25230000, 19.91800000 );
        sub_106204( sub_104701( iParam0, 2 ), 23, 0, 549.75850000, 721.80110000, 19.91820000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 0, 592.57450000, 1102.85800000, 1.81450000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 0, 464.57800000, 832.63300000, 1.64100000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 0, 615.58470000, 701.10530000, 8.86380000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 0, 543.24050000, 991.34010000, 3.64490000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 658.35990000, 735.46000000, 14.08760000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 625.95030000, 777.01490000, 14.08760000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 437.16310000, 919.35180000, 0.17810000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 556.17970000, 654.81580000, 19.76400000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 641.82240000, 835.48650000, 1.73330000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 684.25400000, 769.81860000, 1.78490000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 641.03790000, 911.81850000, 1.73080000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 476.83070000, 1087.36900000, 1.71370000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 609.53870000, 653.59840000, 2.32140000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 677.09640000, 698.25200000, 1.95400000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 628.76010000, 1020.96600000, 1.82520000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 570.15930000, 1058.61700000, 1.86450000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 491.34680000, 1064.61100000, 2.06010000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 576.71840000, 925.46780000, 1.73610000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 549.55200000, 802.08620000, 1.77480000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 504.04680000, 796.21140000, 4.13550000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 559.04920000, 589.71170000, 2.51860000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 548.33440000, 617.91640000, 1.85560000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 570.01580000, 714.47930000, 1.79620000 );
        break;
        case 11:
        switch (iParam0->_fU64)
        {
            case 1:
            sub_106204( sub_123521( iParam0, 12 ), 23, 0, 2496.14100000, 262.97270000, 19.17490000 );
            sub_106204( sub_123521( iParam0, 5 ), 23, 0, 2495.05400000, 524.63290000, 19.17500000 );
            sub_106204( sub_123521( iParam0, 12 ), 23, 0, 2475.86200000, 301.28410000, 18.84560000 );
            sub_106204( sub_123521( iParam0, 5 ), 23, 0, 2400.56500000, 497.48360000, 11.76310000 );
            sub_106204( sub_123521( iParam0, 5 ), 23, 0, 2226.60800000, 670.32020000, 17.56400000 );
            sub_106204( sub_123521( iParam0, 12 ), 23, 0, 2271.92100000, 367.94520000, 11.30240000 );
            sub_106204( sub_123521( iParam0, 12 ), 23, 0, 2144.44900000, -24.75960000, 4.78480000 );
            sub_106204( sub_123521( iParam0, 7 ), 23, 0, 2081.51700000, 299.51680000, 18.72830000 );
            sub_106204( sub_123521( iParam0, 5 ), 23, 0, 2162.52500000, -144.77160000, 0.81190000 );
            sub_106204( sub_123521( iParam0, 12 ), 23, 0, 2300.15400000, 457.03760000, 20.82560000 );
            sub_106204( sub_123521( iParam0, 12 ), 23, 0, 2255.44700000, 641.09600000, 28.03690000 );
            sub_106204( sub_123521( iParam0, 12 ), 23, 0, 2221.10000000, 336.34000000, 16.20610000 );
            break;
            case 2:
            sub_106204( sub_123521( iParam0, 17 ), 23, 0, 2496.14100000, 262.97270000, 19.17490000 );
            sub_106204( sub_123521( iParam0, 4 ), 23, 0, 2495.05400000, 524.63290000, 19.17500000 );
            sub_106204( sub_123521( iParam0, 14 ), 23, 0, 2475.86200000, 301.28410000, 18.84560000 );
            sub_106204( sub_123521( iParam0, 14 ), 23, 0, 2400.56500000, 497.48360000, 11.76310000 );
            sub_106204( sub_123521( iParam0, 4 ), 23, 0, 2226.60800000, 670.32020000, 17.56400000 );
            sub_106204( sub_123521( iParam0, 17 ), 23, 0, 2271.92100000, 367.94520000, 11.30240000 );
            sub_106204( sub_123521( iParam0, 14 ), 23, 0, 2144.44900000, -24.75960000, 4.78480000 );
            sub_106204( sub_123521( iParam0, 14 ), 23, 0, 2081.51700000, 299.51680000, 18.72830000 );
            sub_106204( sub_123521( iParam0, 4 ), 23, 0, 2162.52500000, -144.77160000, 0.81190000 );
            sub_106204( sub_123521( iParam0, 14 ), 23, 0, 2300.15400000, 457.03760000, 20.82560000 );
            sub_106204( sub_123521( iParam0, 17 ), 23, 0, 2255.44700000, 641.09600000, 28.03690000 );
            sub_106204( sub_123521( iParam0, 13 ), 23, 0, 2221.10000000, 336.34000000, 16.20610000 );
            break;
            case 3:
            sub_106204( sub_123521( iParam0, 16 ), 23, 0, 2496.14100000, 262.97270000, 19.17490000 );
            sub_106204( sub_123521( iParam0, 18 ), 23, 0, 2495.05400000, 524.63290000, 19.17500000 );
            sub_106204( sub_123521( iParam0, 15 ), 23, 0, 2475.86200000, 301.28410000, 18.84560000 );
            sub_106204( sub_123521( iParam0, 18 ), 23, 0, 2400.56500000, 497.48360000, 11.76310000 );
            sub_106204( sub_123521( iParam0, 4 ), 23, 0, 2226.60800000, 670.32020000, 17.56400000 );
            sub_106204( sub_123521( iParam0, 17 ), 23, 0, 2271.92100000, 367.94520000, 11.30240000 );
            sub_106204( sub_123521( iParam0, 18 ), 23, 0, 2144.44900000, -24.75960000, 4.78480000 );
            sub_106204( sub_123521( iParam0, 14 ), 23, 0, 2081.51700000, 299.51680000, 18.72830000 );
            sub_106204( sub_123521( iParam0, 4 ), 23, 0, 2162.52500000, -144.77160000, 0.81190000 );
            sub_106204( sub_123521( iParam0, 18 ), 23, 0, 2300.15400000, 457.03760000, 20.82560000 );
            sub_106204( sub_123521( iParam0, 16 ), 23, 0, 2255.44700000, 641.09600000, 28.03690000 );
            sub_106204( sub_123521( iParam0, 13 ), 23, 0, 2221.10000000, 336.34000000, 16.20610000 );
            break;
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            sub_106204( sub_104701( iParam0, 2 ), 23, 0, 2496.14100000, 262.97270000, 19.17490000 );
            sub_106204( sub_104701( iParam0, 2 ), 23, 0, 2495.05400000, 524.63290000, 19.17500000 );
            sub_106204( sub_104701( iParam0, 2 ), 23, 0, 2475.86200000, 301.28410000, 18.84560000 );
            sub_106204( sub_104701( iParam0, 2 ), 23, 0, 2300.15400000, 457.03760000, 20.82560000 );
            sub_106204( sub_104701( iParam0, 2 ), 23, 0, 2255.44700000, 641.09600000, 28.03690000 );
            sub_106204( sub_104701( iParam0, 2 ), 23, 0, 2221.10000000, 336.34000000, 16.20610000 );
            sub_106204( sub_104701( iParam0, 2 ), 23, 0, 2144.44900000, -24.75960000, 4.78480000 );
            sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2400.56500000, 497.48360000, 11.76310000 );
            sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2226.60800000, 670.32020000, 17.56400000 );
            sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2271.92100000, 367.94520000, 11.30240000 );
            sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2081.51700000, 299.51680000, 18.72830000 );
            sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2162.52500000, -144.77160000, 0.81190000 );
            break;
            case 0:
            sub_106204( sub_123521( iParam0, 16 ), 23, 0, 2496.14100000, 262.97270000, 19.17490000 );
            sub_106204( sub_123521( iParam0, 18 ), 23, 0, 2495.05400000, 524.63290000, 19.17500000 );
            sub_106204( sub_123521( iParam0, 15 ), 23, 0, 2475.86200000, 301.28410000, 18.84560000 );
            sub_106204( sub_123521( iParam0, 14 ), 23, 0, 2400.56500000, 497.48360000, 11.76310000 );
            sub_106204( sub_123521( iParam0, 4 ), 23, 0, 2226.60800000, 670.32020000, 17.56400000 );
            sub_106204( sub_123521( iParam0, 17 ), 23, 0, 2271.92100000, 367.94520000, 11.30240000 );
            sub_106204( sub_123521( iParam0, 18 ), 23, 0, 2144.44900000, -24.75960000, 4.78480000 );
            sub_106204( sub_123521( iParam0, 14 ), 23, 0, 2081.51700000, 299.51680000, 18.72830000 );
            sub_106204( sub_123521( iParam0, 4 ), 23, 0, 2162.52500000, -144.77160000, 0.81190000 );
            sub_106204( sub_123521( iParam0, 18 ), 23, 0, 2300.15400000, 457.03760000, 20.82560000 );
            sub_106204( sub_123521( iParam0, 16 ), 23, 0, 2255.44700000, 641.09600000, 28.03690000 );
            sub_106204( sub_123521( iParam0, 13 ), 23, 0, 2221.10000000, 336.34000000, 16.20610000 );
            break;
        }
        sub_106204( sub_104701( iParam0, 2 ), 23, 0, 2317.90500000, 329.69690000, 5.06600000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 0, 2866.54300000, 508.55150000, 1.65040000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 0, 2072.46800000, 214.56050000, 4.13590000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 0, 2109.73600000, 489.69760000, 5.06970000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 0, 2306.59700000, -132.14930000, 4.64290000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 0, 2502.10200000, 773.94060000, 5.85290000 );
        sub_106204( sub_104701( iParam0, 1 ), 23, 0, 2224.67300000, 367.84590000, 6.48730000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2671.00600000, 413.67400000, 4.80730000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2461.13200000, 536.93120000, 4.80800000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2650.94000000, 418.67970000, 4.81010000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2686.67500000, 417.35640000, 4.81010000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2383.91500000, 818.95320000, 4.69180000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2105.38400000, 758.34510000, 5.18750000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2114.72600000, 621.97900000, 13.26840000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2129.51800000, 853.62900000, 4.79520000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2165.49500000, 108.62400000, 6.04650000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2528.82800000, -25.02580000, 1.29660000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2587.07200000, 633.25320000, 4.94170000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2198.40700000, 767.72470000, 4.80780000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2203.98000000, 641.39890000, 4.80770000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2353.54800000, 476.59460000, 5.07980000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2368.21600000, 388.24700000, 5.08010000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2319.91000000, 197.22250000, 4.80770000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2333.73500000, 148.69650000, 4.80790000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2557.88800000, 239.62330000, 4.80800000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2710.08600000, 314.00470000, 4.80770000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2228.30800000, 176.13570000, 5.19870000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2245.69600000, 500.61720000, 5.05280000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2259.13700000, 104.54260000, 4.80840000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2285.27800000, -55.55380000, 4.67750000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2305.14600000, 56.55230000, 4.97910000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2321.58600000, 557.50310000, 4.80860000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2334.85200000, 767.19410000, 5.24410000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2391.13000000, 10.69820000, 5.42070000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2433.09900000, 597.82450000, 4.80820000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2476.77500000, 131.73940000, 5.42150000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2544.68500000, 452.00130000, 4.80790000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2564.21000000, 341.32000000, 4.80810000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2666.22600000, 227.90200000, 4.43690000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2713.83100000, 548.19950000, 2.69650000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2787.18100000, 322.15160000, 1.65070000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 0, 2168.95200000, 448.73480000, 5.08070000 );
        break;
        case 12:
        sub_106204( sub_104701( iParam0, 0 ), 23, 4, 543.19990000, 1463.87700000, 9.40950000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 4, 451.35610000, 1568.25100000, 14.63540000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 482.39520000, 1621.94800000, 19.15470000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 18, 489.23400000, 1706.20300000, 31.47090000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 200, 382.52510000, 1763.86900000, 19.32180000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 90, 475.82240000, 1887.74300000, 23.83430000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 1, 710.07570000, 1920.23900000, 26.32070000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 60, 737.77040000, 1796.69200000, 38.42670000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 703.30250000, 1707.06200000, 35.42970000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 90, 877.66640000, 1594.83200000, 15.93270000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 18, 938.83550000, 1647.00600000, 36.20010000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 120, 1028.85700000, 1662.25600000, 15.19240000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 120, 1141.42700000, 1672.18500000, 16.12200000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 120, 1134.34400000, 1812.80000000, 9.31490000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 3, 1060.42200000, 1902.93300000, 13.20990000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 120, 1228.91500000, 1939.79000000, 11.30560000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 24, 1337.30400000, 1737.75800000, 14.25920000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 1, 1212.84100000, 1655.74700000, 15.66540000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 3, 1185.19300000, 1471.14700000, 15.68200000 );
        sub_106204( sub_104701( iParam0, 0 ), 23, 18, 1216.53900000, 1396.60700000, 33.50070000 );
        break;
    }
    return;
}

void sub_104701(int iParam0, int iParam1)
{
    int iVar4;

    if (iParam1 == 2)
    {
        iVar4 = sub_2934( iParam0->_fU60 / 2, iParam0->_fU60 );
    }
    else if (iParam1 == 1)
    {
        iVar4 = sub_2934( iParam0->_fU60 / 3, iParam0->_fU60 );
    }
    else
    {
        iVar4 = sub_2934( 0, iParam0->_fU60 );
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
    return sub_105710( l_U2, ref iVar4 );
}

void sub_105710(unknown uParam0, unknown uParam1)
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
    (uParam1^) = sub_105922( Result );
    return Result;
}

int sub_105922(unknown uParam0)
{
    switch (uParam0)
    {
        case 7: return 30 * l_U1;
        case 9: return 30 * l_U1;
        case 10: return 16 * l_U1;
        case 11: return 16 * l_U1;
        case 12: return 60 * l_U1;
        case 13: return 60 * l_U1;
        case 14: return 80 * l_U1;
        case 15: return 80 * l_U1;
        case 16: return 12 * l_U1;
        case 17: return 12 * l_U1;
        case 5: return 3 * l_U1;
        case 4: return 3 * l_U1;
        case 18: return 2 * l_U1;
    }
    return 0;
}

void sub_106204(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;

    uVar8 = sub_105922( uParam0 );
    CREATE_PICKUP_WITH_AMMO( sub_106225( uParam0 ), uParam1, uVar8, uParam3, uParam4, uParam5, ref uVar9 );
    return;
}

void sub_106225(unknown uParam0)
{
    unknown Result;

    GET_WEAPONTYPE_MODEL( uParam0, ref Result );
    return Result;
}

int sub_123521(int iParam0, unknown uParam1)
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

void sub_135901(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_135901( 3 );
        sub_135901( 4 );
        sub_135901( 2 );
        sub_135901( 1 );
        sub_135901( 8 );
        sub_135901( 10 );
        sub_135901( 9 );
        break;
        case 1:
        sub_136088( -1082.58000000, -589.92300000, 2.87730000, 0 );
        sub_136088( -1079.22000000, 691.90000000, 7.50090000, 0 );
        sub_136088( -920.39610000, 938.02750000, 12.76070000, 0 );
        sub_136088( -1567.27000000, 941.01030000, 25.68270000, 0 );
        sub_136088( 64043, 701.22000000, 22.42860000, 0 );
        sub_136088( -1323.60000000, 1278.36900000, 22.37020000, 0 );
        sub_136088( -1193.08000000, 13.87000000, 3.14000000, 0 );
        sub_136088( -1255.63600000, 55.82830000, 1.26420000, 0 );
        sub_136088( -2071.77000000, -80.08610000, 5.61450000, 0 );
        sub_136088( -1465.90000000, 110.18730000, 6.24540000, 0 );
        sub_136088( -1559.25800000, 127.01540000, 7.63100000, 0 );
        sub_136088( -951.51540000, 1405.20800000, 24.68460000, 0 );
        sub_136088( -1164.97000000, 1835.70900000, 3.04650000, 0 );
        sub_136088( -1196.93000000, 1672.78800000, 33.55620000, 0 );
        sub_136088( -970.63300000, 1524.85900000, 24.56880000, 0 );
        sub_136088( -724.28700000, 1471.32700000, 0.50690000, 0 );
        sub_136088( -1095.44000000, 1258.74800000, 23.82480000, 0 );
        sub_136088( -808.51310000, 1205.92700000, 17.23890000, 0 );
        sub_136088( -1016.98000000, 1024.75100000, 12.58410000, 0 );
        sub_136088( -1476.12000000, 1047.32500000, 22.03400000, 0 );
        sub_136088( -1349.40600000, 890.07560000, 18.68600000, 0 );
        sub_136088( -891.21000000, 834.67030000, 10.81970000, 0 );
        sub_136088( -1276.65000000, 742.18080000, 18.50840000, 0 );
        sub_136088( -1093.82300000, 636.50060000, 7.50040000, 0 );
        sub_136088( -952.21400000, 453.59930000, 3.37230000, 0 );
        sub_136088( -1614.88000000, 692.08700000, 25.37530000, 0 );
        sub_136088( -1364.45300000, 529.74320000, 11.47960000, 0 );
        sub_136088( -1831.84000000, 353.82380000, 24.44420000, 0 );
        sub_136088( -1555.78000000, 244.76660000, 11.68150000, 0 );
        sub_136088( -1481.94000000, -52.40670000, 6.57460000, 0 );
        sub_136088( -1642.17700000, 411.90560000, 24.44660000, 0 );
        sub_136088( -1753.70000000, 133.09870000, 10.18720000, 0 );
        sub_136088( -2083.07000000, 44.87500000, 6.09800000, 0 );
        sub_136088( -1914.51000000, -459.40200000, 2.20900000, 0 );
        sub_136088( -1302.27000000, -293.68600000, 2.86500000, 0 );
        sub_136088( -2125.72000000, -334.55900000, 1.89970000, 0 );
        sub_136088( -1772.58700000, -493.29320000, 2.04540000, 0 );
        sub_136088( -1339.11000000, -460.88800000, 1.89670000, 0 );
        sub_136088( -1353.65000000, -652.83300000, 2.00130000, 0 );
        sub_136088( -1054.87000000, -220.68300000, 1.91890000, 0 );
        sub_136088( -1893.78400000, -689.18750000, 1.83760000, 0 );
        sub_136088( -1688.54000000, -284.52100000, 1.75160000, 0 );
        sub_136088( -1899.95500000, 186.60480000, 11.17900000, 0 );
        sub_136088( -1402.59400000, 318.49800000, 12.44940000, 0 );
        sub_136088( -1649.63000000, -109.38000000, 4.97830000, 0 );
        sub_136088( 64271, -119.28200000, 3.21980000, 0 );
        sub_136088( -950.78700000, 189.35060000, 3.38630000, 0 );
        sub_136088( -1103.30000000, 364.79940000, 3.93280000, 0 );
        sub_136088( -1260.66000000, 1262.14700000, 20.78200000, 0 );
        sub_136088( -1299.73000000, 1563.46800000, 24.92780000, 0 );
        sub_136088( -992.55200000, 1736.74700000, 19.51390000, 0 );
        sub_136088( -843.71400000, 1378.74200000, 22.17000000, 0 );
        sub_136088( -1469.02000000, 1166.59000000, 22.01500000, 0 );
        sub_136088( -865.23000000, 1632.13000000, 21.35100000, 0 );
        sub_136088( -1326.88000000, 1436.46600000, 19.48630000, 0 );
        sub_136088( -1727.85200000, 601.47620000, 26.72240000, 0 );
        sub_136088( -1539.30300000, 581.51720000, 22.71660000, 0 );
        sub_136088( -993.90200000, 878.20890000, 21.98560000, 0 );
        sub_136088( -987.99100000, 608.15440000, 3.07890000, 0 );
        sub_136088( -836.38240000, 1071.52500000, 12.89240000, 0 );
        sub_136088( -1107.43200000, 1081.79400000, 12.65270000, 0 );
        sub_136088( -1422.44200000, 883.12570000, 18.63140000, 0 );
        sub_136088( -1174.19000000, 825.98350000, 18.55790000, 0 );
        sub_136088( -1370.73000000, 765.73500000, 18.54570000, 0 );
        break;
        case 2:
        sub_136088( -10.97350000, -377.20400000, 11.08810000, 0 );
        sub_136088( -9.61210000, 1308.05700000, 19.36520000, 0 );
        sub_136088( -115.34640000, 1328.85600000, 19.42410000, 0 );
        sub_136088( 368.47270000, -506.45180000, 4.81800000, 0 );
        sub_136088( 59.36250000, 193.13060000, 13.75680000, 0 );
        sub_136088( -425.69900000, 1301.45000000, 16.42360000, 0 );
        sub_136088( -332.18480000, 1643.76200000, 19.32420000, 0 );
        sub_136088( -116.04090000, 472.16360000, 8.55910000, 0 );
        sub_136088( -182.25800000, -602.07800000, 4.62510000, 0 );
        sub_136088( -422.21900000, 975.72740000, 8.96360000, 0 );
        sub_136088( -169.52000000, 1619.20900000, 19.31360000, 0 );
        sub_136088( -337.38000000, 1431.45300000, 11.33620000, 0 );
        sub_136088( 38.98980000, 1476.07500000, 2.24340000, 0 );
        sub_136088( -583.78600000, 1318.30600000, 4.94080000, 0 );
        sub_136088( -522.12800000, 968.89150000, 7.55940000, 0 );
        sub_136088( -176.50500000, 1077.67300000, 5.62530000, 0 );
        sub_136088( -237.93970000, 795.71930000, 5.16030000, 0 );
        sub_136088( -291.31900000, 578.53360000, 13.81190000, 0 );
        sub_136088( -533.30600000, 720.84310000, 8.96150000, 0 );
        sub_136088( -3.24710000, 501.39350000, 14.76200000, 0 );
        sub_136088( 212.50730000, 485.59830000, 14.18730000, 0 );
        sub_136088( -461.07800000, 497.06880000, 8.85170000, 0 );
        sub_136088( 280.63320000, -16.08720000, 8.91760000, 0 );
        sub_136088( -220.32500000, 61.39090000, 13.73580000, 0 );
        sub_136088( 210.88160000, -409.88850000, 4.08210000, 0 );
        sub_136088( 336.21990000, -711.23500000, 3.69170000, 0 );
        sub_136088( 1.10720000, -659.54400000, 13.75730000, 0 );
        sub_136088( 33.32420000, -937.15120000, 3.73070000, 0 );
        sub_136088( -788.95600000, 65.67300000, 3.81230000, 0 );
        sub_136088( -172.94300000, 276.67700000, 13.81300000, 0 );
        sub_136088( -414.08900000, -12.61080000, 8.89340000, 0 );
        sub_136088( -120.07200000, 11.81670000, 13.78350000, 0 );
        sub_136088( -224.77030000, -776.26140000, 5.19630000, 0 );
        sub_136088( -15.78000000, -529.51000000, 13.75940000, 0 );
        sub_136088( 234.57330000, -817.85860000, 3.71030000, 0 );
        sub_136088( -403.72000000, -447.38000000, 3.90720000, 0 );
        sub_136088( 191.30000000, 1140.61000000, 12.25340000, 0 );
        sub_136088( -205.12000000, 655.88000000, 11.40410000, 0 );
        sub_136088( -70.67000000, 946.33000000, 13.71270000, 0 );
        sub_136088( 26.61870000, 850.50510000, 13.37200000, 0 );
        sub_136088( -503.30000000, 1438.90000000, 16.15650000, 0 );
        sub_136088( -159.18130000, 1749.72900000, 7.44090000, 0 );
        sub_136088( -542.30000000, 1655.60000000, 7.67680000, 0 );
        sub_136088( -22.57230000, 1484.23300000, 17.42510000, 0 );
        sub_136088( 77.60000000, 321.40000000, 13.75380000, 0 );
        sub_136088( -445.40000000, 277.50000000, 8.95640000, 0 );
        sub_136088( -566.39040000, 390.84450000, 5.66890000, 0 );
        sub_136088( 107.58140000, 511.61350000, 12.30150000, 0 );
        sub_136088( -279.59900000, 445.29140000, 13.80670000, 0 );
        sub_136088( -417.04700000, -192.86500000, 9.53930000, 0 );
        sub_136088( -62.12140000, -289.14320000, 13.67290000, 0 );
        sub_136088( 169.77020000, -210.08000000, 13.82100000, 0 );
        sub_136088( -139.74400000, 81.76500000, 13.76910000, 0 );
        break;
        case 3:
        sub_136088( 985.20790000, 1827.30400000, 19.11830000, 0 );
        sub_136088( 1376.28500000, 1702.27400000, 15.88180000, 0 );
        sub_136088( 431.74100000, 1837.92700000, 21.20530000, 0 );
        sub_136088( 473.20250000, 1738.35900000, 14.80350000, 0 );
        sub_136088( 575.78850000, 1394.91800000, 9.96000000, 0 );
        sub_136088( 735.74320000, 1739.91900000, 35.60130000, 0 );
        sub_136088( 760.78820000, 1551.94800000, 20.35010000, 0 );
        sub_136088( 855.19800000, 1676.97900000, 16.05410000, 0 );
        sub_136088( 1098.36200000, 1596.66300000, 15.71600000, 0 );
        sub_136088( 1121.77600000, 1941.30500000, 12.71010000, 0 );
        sub_136088( 1290.00000000, 1435.00000000, 15.77600000, 0 );
        sub_136088( 426.39460000, 1590.38900000, 15.41430000, 0 );
        sub_136088( 557.55070000, 1635.64200000, 28.19540000, 0 );
        sub_136088( 597.58230000, 1958.46700000, 24.62740000, 0 );
        sub_136088( 626.76930000, 1828.41200000, 32.17850000, 0 );
        sub_136088( 1211.36500000, 1783.27100000, 9.09560000, 0 );
        break;
        case 4:
        sub_136088( 849.04920000, 392.57780000, 5.25980000, 0 );
        sub_136088( 897.30000000, -134.00100000, 4.91160000, 0 );
        sub_136088( 1843.24500000, 478.55510000, 27.09130000, 0 );
        sub_136088( 1427.79200000, 750.85690000, 27.62330000, 0 );
        sub_136088( 1845.72700000, 691.03880000, 25.76730000, 0 );
        sub_136088( 2320.44800000, 639.43910000, 4.80790000, 0 );
        sub_136088( 1124.33600000, 638.38240000, 37.85270000, 0 );
        sub_136088( 1647.82000000, 413.06230000, 30.21460000, 0 );
        sub_136088( 2273.61400000, 300.40370000, 5.06670000, 0 );
        sub_136088( 1431.79400000, 120.04750000, 24.88300000, 0 );
        sub_136088( 1314.51800000, 378.05340000, 21.45560000, 0 );
        sub_136088( 2285.27900000, 82.34910000, 4.80670000, 0 );
        sub_136088( 822.00570000, 199.24160000, 5.03550000, 0 );
        sub_136088( 1114.99400000, 44.93610000, 33.00890000, 0 );
        sub_136088( 1350.45800000, -255.86600000, 22.22680000, 0 );
        sub_136088( 753.85080000, -126.41500000, 4.81920000, 0 );
        sub_136088( 1284.27200000, -530.17200000, 13.39630000, 0 );
        sub_136088( 897.30980000, -509.68100000, 13.97050000, 0 );
        sub_136088( 2007.46300000, 620.96670000, 17.05250000, 0 );
        sub_136088( 2816.66200000, 425.61220000, 4.66280000, 0 );
        sub_136088( 2423.13700000, 454.06130000, 5.08040000, 0 );
        sub_136088( 2558.74900000, 81.81350000, 2.25080000, 0 );
        sub_136088( 1178.18000000, 194.08300000, 31.44340000, 0 );
        sub_136088( 2164.44400000, 368.42870000, 5.22480000, 0 );
        sub_136088( 962.23500000, 7.45580000, 23.57960000, 0 );
        sub_136088( 1359.50400000, -766.54400000, 7.45460000, 0 );
        sub_136088( 1167.83600000, -206.77400000, 22.60170000, 0 );
        sub_136088( 953.22130000, -320.52070000, 18.35930000, 0 );
        sub_136088( 1292.54900000, 144.22570000, 30.95520000, 0 );
        sub_136088( 955.96320000, -698.10500000, 14.21530000, 0 );
        sub_136088( 1858.97600000, 155.32600000, 12.27220000, 0 );
        sub_136088( 1111.20400000, -445.82780000, 12.45870000, 0 );
        sub_136088( 862.01680000, 940.66060000, 5.55700000, 0 );
        sub_136088( 1224.95300000, 1020.87200000, 12.63250000, 0 );
        sub_136088( 1577.94500000, 917.15250000, 15.06920000, 0 );
        sub_136088( 1670.41200000, 587.83220000, 29.23680000, 0 );
        sub_136088( 971.84260000, 624.12060000, 25.02010000, 0 );
        sub_136088( 1428.84200000, 563.46970000, 28.29920000, 0 );
        sub_136088( 1805.79700000, 813.58000000, 15.60590000, 0 );
        sub_136088( 1155.96400000, 306.88730000, 28.83000000, 0 );
        sub_136088( 1232.60800000, 524.12710000, 29.82790000, 0 );
        sub_136088( 2164.51500000, 583.68770000, 7.91790000, 0 );
        sub_136088( 1938.77700000, 1013.43000000, 4.99250000, 0 );
        sub_136088( 2650.71700000, 436.45850000, 4.80730000, 0 );
        break;
        case 5:
        sub_136088( -1914.50800000, -459.40190000, 2.20900000, 0 );
        sub_136088( -1548.81300000, -379.02390000, 1.88280000, 0 );
        sub_136088( -1688.54300000, -284.52080000, 1.75160000, 0 );
        sub_136088( -1777.87900000, -488.62450000, 2.04560000, 0 );
        sub_136088( -1982.68200000, -669.87910000, -1.86090000, 0 );
        sub_136088( -1798.12800000, -265.92090000, 1.71460000, 0 );
        sub_136088( -1700.79700000, -646.17020000, 3.01050000, 0 );
        sub_136088( -1968.54500000, -157.59920000, 1.92120000, 0 );
        sub_136088( -1528.95300000, -203.94390000, 6.73590000, 0 );
        sub_136088( -2066.17100000, -491.69040000, 6.17790000, 0 );
        break;
        case 6:
        sub_136088( -1049.63700000, -408.73490000, 2.30340000, 0 );
        sub_136088( -1110.67500000, -376.49920000, 2.17920000, 0 );
        sub_136088( -1124.23100000, -493.61110000, 2.17880000, 0 );
        sub_136088( -1026.58300000, -337.07500000, 2.22100000, 0 );
        sub_136088( -988.55210000, -435.07680000, 2.18010000, 0 );
        break;
        case 7:
        sub_136088( -1097.62500000, 693.99500000, 7.50040000, 0 );
        sub_136088( -1193.08000000, 13.87000000, 3.14000000, 0 );
        sub_136088( -1261.21700000, 56.19870000, 1.26420000, 0 );
        sub_136088( -1094.18600000, 636.52230000, 7.50040000, 0 );
        sub_136088( -952.21400000, 453.59930000, 3.37230000, 0 );
        sub_136088( -1103.29800000, 364.79940000, 3.93280000, 0 );
        sub_136088( -1047.40800000, 496.42660000, 3.52310000, 0 );
        sub_136088( -915.68000000, 281.99980000, 3.37280000, 0 );
        sub_136088( -1139.59400000, 144.54840000, 3.23240000, 0 );
        sub_136088( -1237.53500000, 709.79410000, 15.03190000, 0 );
        break;
        case 8:
        sub_136088( -607.98380000, -784.81920000, 3.83910000, "GtaMloRoomstat" );
        sub_136088( -667.97770000, -861.82260000, 4.53750000, 0 );
        sub_136088( -530.56270000, -1068.54000000, 3.83770000, 0 );
        sub_136088( -551.27530000, -999.64890000, 4.50760000, 0 );
        sub_136088( -650.00980000, -927.17210000, 4.53750000, 0 );
        sub_136088( -571.05880000, -875.00630000, 4.53750000, 0 );
        break;
        case 9:
        sub_136088( 455.10250000, 289.51030000, 7.54850000, 0 );
        sub_136088( 497.60490000, 175.63860000, 7.60760000, 0 );
        sub_136088( 391.26350000, 159.72480000, 8.22000000, 0 );
        sub_136088( 458.29470000, 74.45450000, 7.75970000, 0 );
        sub_136088( 504.16430000, -38.34650000, 8.24790000, 0 );
        break;
        case 10:
        sub_136088( 630.54060000, 789.35520000, 1.75120000, 0 );
        sub_136088( 657.73490000, 627.96940000, 1.80270000, 0 );
        sub_136088( 589.79970000, 859.90220000, 1.72980000, 0 );
        sub_136088( 489.47380000, 775.80120000, 1.73470000, 0 );
        sub_136088( 463.83520000, 1001.07300000, 1.71820000, 0 );
        break;
        case 11:
        sub_136088( 2320.44800000, 639.43910000, 4.80790000, 0 );
        sub_136088( 2273.61400000, 300.40370000, 5.06670000, 0 );
        sub_136088( 2285.27900000, 82.34910000, 4.80670000, 0 );
        sub_136088( 2164.51500000, 583.68770000, 7.91790000, 0 );
        sub_136088( 2423.13700000, 454.06130000, 5.08040000, 0 );
        sub_136088( 2521.31400000, 282.07120000, 4.80810000, 0 );
        sub_136088( 2816.66200000, 425.61220000, 4.66280000, 0 );
        sub_136088( 2758.89000000, 243.54010000, 4.09000000, 0 );
        sub_136088( 2422.53800000, -55.49270000, 1.28210000, 0 );
        sub_136088( 2248.59500000, 365.22820000, 6.60060000, 0 );
        sub_136088( 2297.76700000, 479.05770000, 5.09200000, 0 );
        sub_136088( 2069.47800000, 876.38090000, 5.00420000, 0 );
        break;
        case 12: break;
    }
    return;
}

void sub_136088(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_141268(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_141268( 3 );
        sub_141268( 4 );
        sub_141268( 2 );
        sub_141268( 1 );
        sub_141268( 8 );
        sub_141268( 10 );
        sub_141268( 9 );
        break;
        case 1:
        sub_141453( -1718.95400000, 272.59700000, 21.06310000 );
        sub_141453( -1558.40700000, -347.78600000, 1.83750000 );
        sub_141453( -2032.20700000, -338.29010000, 3.40370000 );
        sub_141453( -1497.11800000, -277.73100000, 1.83720000 );
        sub_141453( -1890.49700000, -155.03050000, 1.62940000 );
        sub_141453( -968.86000000, 1895.05400000, 21.34030000 );
        sub_141453( -1426.40600000, 625.19100000, 18.56760000 );
        sub_141453( -1778.49400000, 575.95780000, 25.11940000 );
        sub_141453( -841.69900000, 1274.37700000, 19.07420000 );
        sub_141453( -1361.73600000, 1692.55300000, 26.82030000 );
        sub_141453( -1299.50400000, 944.35900000, 18.56750000 );
        sub_141453( -2048.42700000, 172.86300000, 11.03890000 );
        sub_141453( -906.84050000, 652.42870000, 3.07870000 );
        sub_141453( -1216.80800000, 520.21910000, 3.37300000 );
        sub_141453( -1137.69600000, 955.04820000, 18.54370000 );
        sub_141453( -1877.95700000, 39.63470000, 5.85340000 );
        sub_141453( -965.57110000, 1211.19600000, 23.50070000 );
        sub_141453( -1564.22100000, -657.89900000, 2.00330000 );
        sub_141453( -1279.09900000, 1141.62300000, 18.57790000 );
        sub_141453( -1145.68300000, 1414.96900000, 23.49580000 );
        sub_141453( -1314.08900000, 169.73720000, 4.48440000 );
        sub_141453( -2216.31900000, 17.23170000, 8.29650000 );
        sub_141453( -1428.38700000, 1536.52500000, 15.61980000 );
        sub_141453( -1145.53100000, -382.07540000, 2.00250000 );
        break;
        case 2:
        sub_141453( -29.20910000, -887.00800000, -0.45090000 );
        sub_141453( 75.40810000, 597.05240000, 13.71130000 );
        sub_141453( -669.07150000, 471.10110000, 4.08930000 );
        sub_141453( -333.98000000, 1.00280000, 13.75990000 );
        sub_141453( -107.44990000, 766.80530000, 14.34170000 );
        sub_141453( -695.45310000, 1080.60800000, 3.10370000 );
        sub_141453( -571.39000000, 1531.44100000, 9.00370000 );
        sub_141453( -786.58210000, 141.96640000, 4.02810000 );
        sub_141453( -577.03340000, -328.15240000, 5.25250000 );
        sub_141453( 195.12650000, -527.20640000, 8.06920000 );
        sub_141453( -17.15680000, 1637.60200000, 2.83590000 );
        sub_141453( 103.37410000, 985.66010000, 13.69870000 );
        sub_141453( -319.37050000, 322.75250000, 13.70020000 );
        sub_141453( -179.20000000, 1451.10000000, 17.44250000 );
        sub_141453( -201.20000000, 1195.80000000, 13.62270000 );
        sub_141453( 107.70000000, 1221.10000000, 14.64690000 );
        sub_141453( -97.06850000, -609.38450000, 13.75040000 );
        sub_141453( 101.10990000, 409.17060000, 13.68690000 );
        sub_141453( -278.16310000, -369.19700000, 7.67500000 );
        sub_141453( -305.64000000, 1040.30000000, 8.96630000 );
        sub_141453( -111.42050000, -200.32650000, 11.99290000 );
        sub_141453( 497.07030000, -504.54370000, 1.60350000 );
        sub_141453( 102.67930000, -607.23380000, 13.76920000 );
        sub_141453( 315.67560000, -324.14100000, 3.95050000 );
        sub_141453( -389.39000000, 837.89000000, 13.71340000 );
        sub_141453( -106.39930000, 203.62740000, 13.60360000 );
        sub_141453( -568.80000000, 607.20000000, 5.64580000 );
        sub_141453( -417.40330000, 1739.69600000, 8.25570000 );
        break;
        case 3:
        sub_141453( 796.30620000, 1334.91000000, 9.86140000 );
        sub_141453( 370.65720000, 1887.00100000, 16.77270000 );
        sub_141453( 697.33800000, 1680.40500000, 32.93620000 );
        sub_141453( 243.60000000, 1772.58000000, 2.80140000 );
        sub_141453( 312.37770000, 1470.59700000, 15.72370000 );
        sub_141453( 397.94990000, 2074.39100000, 5.69970000 );
        sub_141453( 927.07400000, 1487.15300000, 15.86160000 );
        sub_141453( 889.48640000, 1783.75300000, 16.08660000 );
        sub_141453( 1346.63400000, 1960.05400000, 3.98950000 );
        sub_141453( 1204.99800000, 1648.65000000, 15.65110000 );
        sub_141453( 810.81520000, 1924.86500000, 37.93350000 );
        sub_141453( 617.25540000, 1496.23200000, 14.61220000 );
        break;
        case 4:
        sub_141453( 1096.54700000, 434.62660000, 28.76790000 );
        sub_141453( 1345.71000000, -874.09570000, 7.33140000 );
        sub_141453( 1446.49700000, -280.27500000, 14.19040000 );
        sub_141453( 2232.70500000, 891.79740000, 4.52110000 );
        sub_141453( 863.99160000, 740.41190000, 6.89360000 );
        sub_141453( 960.07070000, -431.33360000, 14.74810000 );
        sub_141453( 1237.56000000, 374.40010000, 20.97390000 );
        sub_141453( 2072.80800000, 102.75570000, 11.02200000 );
        sub_141453( 1361.68500000, 1047.57500000, 2.85150000 );
        sub_141453( 1586.65500000, 769.30970000, 28.21990000 );
        sub_141453( 1947.36900000, 393.30340000, 17.58600000 );
        sub_141453( 1252.28100000, -44.77040000, 27.34600000 );
        sub_141453( 939.28130000, -944.10300000, 14.23400000 );
        sub_141453( 1985.70900000, 826.63180000, 8.39960000 );
        sub_141453( 1307.98300000, 688.87480000, 35.73690000 );
        sub_141453( 2259.19400000, 423.94070000, 4.90050000 );
        sub_141453( 1131.33700000, -656.75790000, 13.13440000 );
        sub_141453( 1238.09500000, -353.24500000, 20.54410000 );
        sub_141453( 1657.90500000, 230.22240000, 23.95760000 );
        sub_141453( 740.74340000, -346.01260000, 4.83660000 );
        sub_141453( 733.56430000, 39.98200000, 4.95960000 );
        sub_141453( 932.15970000, 331.24980000, 30.16300000 );
        sub_141453( 1120.70800000, 891.31850000, 30.66750000 );
        sub_141453( 2521.81800000, 283.11260000, 4.80830000 );
        sub_141453( 2248.01400000, -142.04390000, 3.50840000 );
        sub_141453( 2637.66500000, 661.69060000, 2.68950000 );
        break;
        case 5:
        sub_141453( -1523.98700000, -287.50570000, 1.83720000 );
        sub_141453( -2032.20700000, -338.29010000, 3.40370000 );
        sub_141453( -1872.50800000, -163.83990000, 1.62960000 );
        sub_141453( -1896.91900000, -685.48900000, 1.83760000 );
        sub_141453( -1564.22100000, -657.89900000, 2.00330000 );
        sub_141453( -2112.71200000, -345.95280000, 0.69400000 );
        sub_141453( -1919.93500000, -298.88310000, 1.62860000 );
        break;
        case 6:
        sub_141453( -1035.30200000, -442.65560000, 2.05650000 );
        sub_141453( -907.82110000, -397.02890000, 2.38210000 );
        sub_141453( -998.51530000, -371.81950000, 2.16980000 );
        sub_141453( -1137.87200000, -374.96680000, 2.19720000 );
        break;
        case 7:
        sub_141453( -1217.48000000, 520.46980000, 3.37300000 );
        sub_141453( -907.75400000, 653.17680000, 3.07870000 );
        sub_141453( -1242.38800000, 91.51820000, 1.95310000 );
        sub_141453( -987.99080000, 608.15440000, 3.07890000 );
        sub_141453( -1183.54400000, 638.71690000, 6.90310000 );
        sub_141453( -950.78660000, 189.35060000, 3.38630000 );
        sub_141453( -1006.53800000, 332.57090000, 3.50290000 );
        sub_141453( -1065.29000000, 37.07740000, 3.21560000 );
        break;
        case 8:
        sub_141453( -607.92130000, -700.26330000, 12.06720000 );
        sub_141453( -528.80470000, -856.73380000, 4.53700000 );
        sub_141453( -645.03030000, -662.14430000, 3.83730000 );
        sub_141453( -412.70370000, -953.45100000, 2.61640000 );
        break;
        case 9:
        sub_141453( 484.24000000, -72.80000000, 8.25100000 );
        sub_141453( 412.61980000, 360.87370000, 7.61400000 );
        sub_141453( 373.74930000, 282.45030000, 4.82410000 );
        sub_141453( 407.44830000, -14.76920000, 7.84100000 );
        sub_141453( 560.50710000, 306.40010000, 7.93160000 );
        sub_141453( 487.24870000, 260.93470000, 7.69720000 );
        break;
        case 10:
        sub_141453( 490.00890000, 861.95290000, 0.19100000 );
        sub_141453( 500.19900000, 1045.00200000, 1.71450000 );
        sub_141453( 608.98120000, 725.17330000, 1.78680000 );
        sub_141453( 678.13100000, 872.69980000, 1.97390000 );
        sub_141453( 669.12870000, 983.03940000, 1.71650000 );
        sub_141453( 555.09680000, 646.18850000, 2.55930000 );
        sub_141453( 624.75300000, 1077.76800000, 1.79640000 );
        sub_141453( 397.25320000, 1082.47400000, 1.71530000 );
        break;
        case 11:
        sub_141453( 2072.80800000, 102.75570000, 11.02200000 );
        sub_141453( 2232.70500000, 891.79740000, 4.52110000 );
        sub_141453( 2247.87500000, -142.09800000, 3.50940000 );
        sub_141453( 2259.19400000, 423.94070000, 4.90050000 );
        sub_141453( 2142.46100000, 185.46280000, 4.81090000 );
        sub_141453( 2152.84400000, 341.89890000, 3.75030000 );
        sub_141453( 2558.74900000, 81.81350000, 2.25080000 );
        sub_141453( 2640.09500000, 663.64870000, 2.44290000 );
        sub_141453( 2619.64200000, 417.33540000, 4.93810000 );
        sub_141453( 2520.63000000, 612.33400000, 5.52400000 );
        sub_141453( 2422.20300000, 339.38180000, 5.08030000 );
        sub_141453( 2335.49600000, 499.03240000, 5.07800000 );
        break;
        case 12: break;
    }
    return;
}

void sub_141453(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    CREATE_PICKUP( -1758615024, 23, uParam0, uParam1, uParam2, ref uVar5, 0 );
    return;
}

void sub_144792()
{
    unknown uVar2;
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref uVar2 );
    Result = l_U2284[uVar2];
    return Result;
}

void sub_145226(unknown uParam0)
{
    int I;
    char[16] cVar4;

    sub_145237( uParam0 );
    DEACTIVATE_NETWORK_SETTINGS_MENU();
    SWITCH_OFF_WAYPOINT();
    for ( I = 0; I < 16; I++ )
    {
        l_U483[I] = 0;
    }
    if (IS_MOBILE_PHONE_RADIO_ACTIVE())
    {
        SET_MOBILE_PHONE_RADIO_STATE( 0 );
    }
    TURN_OFF_RADIOHUD_IN_LOBBY();
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    DISPLAY_FRONTEND_MAP_BLIPS( 1 );
    l_U1191 = 0;
    l_U1185 = 10000;
    l_U1194 = 0;
    l_U1203 = 0;
    l_U1274 = 0;
    l_U1268 = 0;
    l_U1160 = GET_PLAYER_ID();
    l_U991[sub_28750( 16 )]._fU20 = 0;
    if (NOT NETWORK_IS_TVT())
    {
        l_U991[sub_28750( 17 )]._fU20 = GET_PLAYER_ID();
    }
    StrCopy( ref cVar4, "LONG_DESCRP_", 16 );
    ConcatString(ref cVar4, sub_3700(), 16);
    if (l_U1182 == 1)
    {
        ConcatString(ref cVar4, "A", 16);
    }
    else if (l_U1182 == 2)
    {
        ConcatString(ref cVar4, "B", 16);
    }
    PRINT_NOW( ref cVar4, 1, 1 );
    if ((sub_26564()) || (NOT N_604003528()))
    {
        l_U1161[GET_PLAYER_ID()] = GET_PLAYER_RANK_LEVEL_DURING_MP( GET_PLAYER_ID() );
    }
    UNPAUSE_GAME();
    return;
}

void sub_145237(unknown uParam0)
{
    int I;
    int iVar4;
    char[16] cVar5;

    for ( I = 0; I < 21; I++ )
    {
        if ((l_U991[I]._fU16 != 0) AND (l_U991[I]._fU16 < 12))
        {
            switch (l_U991[I]._fU16)
            {
                case 1:
                case 8:
                cVar5 = {l_U991[I]._fU0};
                ConcatString(ref cVar5, (uParam0^)[I], 16);
                sub_145410( ref l_U991[I]._fU0, ref cVar5, iVar4 );
                break;
                case 5:
                case 7:
                if ((uParam0^)[I] > 0)
                {
                    sub_145410( ref l_U991[I]._fU0, "YES", iVar4 );
                }
                else
                {
                    sub_145410( ref l_U991[I]._fU0, "NO", iVar4 );
                }
                break;
                case 6:
                case 9:
                case 10:
                if ((uParam0^)[I] > 0)
                {
                    sub_145410( ref l_U991[I]._fU0, "ON", iVar4 );
                }
                else
                {
                    sub_145410( ref l_U991[I]._fU0, "OFF", iVar4 );
                }
                break;
                case 11:
                StrCopy( ref cVar5, "CPGO_NUM_", 16 );
                ConcatString(ref cVar5, (uParam0^)[I], 16);
                sub_145410( ref l_U991[I]._fU0, ref cVar5, iVar4 );
                break;
            }
            iVar4++;
        }
    }
    return;
}

void sub_145410(unknown uParam0, unknown uParam1, unknown uParam2)
{
    StrCopy( ref g_U18._fU676[uParam2], uParam0, 16 );
    StrCopy( ref g_U18._fU1080[uParam2], uParam1, 16 );
    sub_145485( "\n ~~~~ NetCellphone Adding info, ", uParam0 );
    sub_145485( " and ", uParam1 );
    return;
}

void sub_145485(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_146104()
{
    int I;

    for ( I = 0; I <= 15; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (NOT l_U3400[I]._fU20)
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_146220(int iParam0, unknown uParam1)
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
    if (sub_32898())
    {
        SET_REDUCE_PED_MODEL_BUDGET( 1 );
    }
    return;
}

void sub_146489(int iParam0, unknown uParam1)
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

void sub_146743(unknown uParam0)
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

void sub_147247(unknown uParam0, unknown uParam1)
{
    SET_BIT( ref l_U1872[uParam1], 0 );
    SET_BITS_IN_RANGE( ref l_U1872[uParam1], 1, 31, uParam0 );
    return;
}

void sub_147521()
{
    CLEAR_SCRIPT_ARRAY_FROM_SCRATCHPAD( 2 );
    SAVE_SCRIPT_ARRAY_IN_SCRATCHPAD( ref l_U1872, 61, 2, 2 );
    return;
}

void sub_147573()
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

    if (sub_26947())
    {
        SET_WIDESCREEN_FORMAT( 2 );
        iVar2 = l_U482;
        if (IS_HELP_MESSAGE_BEING_DISPLAYED())
        {
            GET_HELP_MESSAGE_BOX_SIZE( ref fVar13, ref fVar14 );
            fVar14 += l_U565 + 0.03000000;
        }
        else if (IS_IN_SPECTATOR_MODE())
        {
            fVar14 = (0.21550000 + l_U565) + l_U988;
        }
        else if (GET_IS_HIDEF())
        {
            fVar14 = (0.06000000 + l_U565) + l_U988;
        }
        else
        {
            fVar14 = (0.08000000 + l_U565) + l_U988;
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
        while (iVar2 != l_U481)
        {
            if (l_U8[iVar2]._fU0 == 1)
            {
                if (GET_IS_HIDEF())
                {
                    fVar13 = 0.07700000;
                }
                else
                {
                    fVar13 = 0.09700000;
                }
                iVar3 = sub_147899( (l_U8[iVar2]._fU4 - 512) - iVar5, 0, 255 );
                sub_29606( 0, -0.50000000, 1.50000000, 3, 1, 0, 0, 0, iVar3 );
                SET_TEXT_USE_UNDERSCORE( 1 );
                if (l_U8[iVar2]._fU76._fU64)
                {
                    uVar12 = sub_35829( ref l_U8[iVar2]._fU76._fU0, fVar13, fVar14, fVar15, fVar16, l_U8[iVar2]._fU76._fU68, l_U8[iVar2]._fU76._fU72, l_U8[iVar2]._fU76._fU76, iVar3, 2 );
                }
                else
                {
                    uVar12 = sub_44184( fVar13, fVar14, fVar15, fVar16, l_U8[iVar2]._fU76._fU68, l_U8[iVar2]._fU76._fU72, l_U8[iVar2]._fU76._fU76, iVar3, 2, ref l_U8[iVar2]._fU76._fU0 );
                }
                fVar13 += uVar12;
                if (l_U8[iVar2]._fU8 == -1)
                {
                    fVar13 += sub_61517( 0, -0.50000000, 1.50000000, 3, 1, fVar15, fVar16, " " );
                }
                if (l_U8[iVar2]._fU8 == -2)
                {
                    fVar13 += sub_61517( 0, -0.50000000, 1.50000000, 3, 1, fVar15, fVar16, " " );
                    sub_29606( 0, -0.50000000, 1.50000000, 3, 1, 0, 0, 0, iVar3 );
                    GET_HUD_COLOUR( 1, ref uVar6, ref uVar7, ref uVar8, ref uVar9 );
                    SET_TEXT_USE_UNDERSCORE( 1 );
                    fVar13 += sub_35829( ref l_U8[iVar2]._fU12, fVar13, fVar14, fVar15, fVar16, uVar6, uVar7, uVar8, iVar3, 2 );
                    SET_TEXT_USE_UNDERSCORE( 1 );
                    fVar13 += sub_61517( 0, -0.50000000, 1.50000000, 3, 1, fVar15, fVar16, " " );
                }
                else if ((l_U8[iVar2]._fU8 > -1) AND (l_U8[iVar2]._fU8 < 36))
                {
                    fVar13 += 0.03200000 / 2;
                    DRAW_SPRITE( l_U503[l_U8[iVar2]._fU8], fVar13, fVar14 + 0.00900000, 0.03200000, 0.03200000, 0.00000000, 255, 255, 255, iVar3 );
                    fVar13 += 0.03200000 / 2;
                }
                sub_29606( 0, -0.50000000, 1.50000000, 3, 1, 0, 0, 0, iVar3 );
                SET_TEXT_USE_UNDERSCORE( 1 );
                if (l_U8[iVar2]._fU156._fU64)
                {
                    sub_35829( ref l_U8[iVar2]._fU156._fU0, fVar13, fVar14, fVar15, fVar16, l_U8[iVar2]._fU156._fU68, l_U8[iVar2]._fU156._fU72, l_U8[iVar2]._fU156._fU76, iVar3, 2 );
                }
                else
                {
                    sub_44184( fVar13, fVar14, fVar15, fVar16, l_U8[iVar2]._fU156._fU68, l_U8[iVar2]._fU156._fU72, l_U8[iVar2]._fU156._fU76, iVar3, 2, ref l_U8[iVar2]._fU156._fU0 );
                }
                SET_TEXT_USE_UNDERSCORE( 0 );
                if (iVar3 < 255)
                {
                    iVar4++;
                }
                if (l_U8[iVar2]._fU4 <= iVar5)
                {
                    l_U565 -= -0.02600000;
                    sub_99804( ref l_U8[iVar2] );
                    sub_33974( ref l_U482, 8 );
                    iVar4--;
                }
                fVar14 -= -0.02600000;
                sub_33974( ref iVar2, 8 );
            }
            if (l_U8[iVar2]._fU0 == 0)
            {
                if ((iVar2 == l_U482) AND (iVar4 == 0))
                {
                    l_U565 = 0.00000000;
                }
                iVar2 = l_U481;
            }
        }
        l_U565 -= uVar10 * 0.08000000;
        l_U988 = 0.00000000;
        fVar11 = -0.02600000 * (TO_FLOAT( iVar4 ));
        if (l_U565 <= fVar11)
        {
            l_U565 = fVar11;
        }
        SET_WIDESCREEN_FORMAT( 0 );
    }
    return;
}

void sub_147899(int iParam0, int iParam1, int Result)
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

void sub_149054()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U3400[I]._fU44;
    }
    sub_149136( l_U1933._fU856, ref uVar3, ref l_U3400[GET_PLAYER_ID()]._fU44 );
    return;
}

void sub_149136(int iParam0, unknown uParam1, unknown uParam2)
{
    int I;
    char[64] cVar6;
    char[16] cVar22;

    (uParam2^) = sub_149145();
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U871[I] != (uParam1^)[I])
            {
                if ((uParam1^)[I] != -1)
                {
                    StrCopy( ref cVar6, GET_STRING_FROM_TEXT_FILE( "SUGGESTS" ), 64 );
                    ConcatString(ref cVar6, " ", 64);
                    StrCopy( ref cVar22, "NTGT_", 16 );
                    ConcatString(ref cVar22, (uParam1^)[I], 16);
                    ConcatString(ref cVar6, GET_STRING_FROM_TEXT_FILE( ref cVar22 ), 64);
                    sub_149301( I, -1, ref cVar6 );
                }
                l_U871[I] = (uParam1^)[I];
            }
        }
    }
    if (iParam0 != -1)
    {
        if (iParam0 != l_U888)
        {
            StrCopy( ref cVar22, "NTGT_", 16 );
            ConcatString(ref cVar22, iParam0, 16);
            sub_149586( "NEXT_GAME_MODE", -1, ref cVar22 );
            l_U888 = iParam0;
        }
    }
    return;
}

void sub_149145()
{
    return g_U18._fU660;
}

void sub_149301(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar6 = sub_99777( uParam1 );
    StrCopy( ref l_U8[uVar6]._fU76._fU0, GET_PLAYER_NAME( sub_8097( uParam0 ) ), 64 );
    sub_50139( sub_8097( uParam0 ), ref l_U8[uVar6]._fU76._fU68, ref l_U8[uVar6]._fU76._fU72, ref l_U8[uVar6]._fU76._fU76 );
    StrCopy( ref l_U8[uVar6]._fU156._fU0, uParam2, 64 );
    GET_HUD_COLOUR( 1, ref l_U8[uVar6]._fU156._fU68, ref l_U8[uVar6]._fU156._fU72, ref l_U8[uVar6]._fU156._fU76, ref uVar5 );
    sub_100352( uVar6 );
    return;
}

void sub_149586(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar6 = sub_99777( uParam1 );
    StrCopy( ref l_U8[uVar6]._fU76._fU0, uParam0, 64 );
    l_U8[uVar6]._fU76._fU64 = 1;
    GET_HUD_COLOUR( 1, ref l_U8[uVar6]._fU76._fU68, ref l_U8[uVar6]._fU76._fU72, ref l_U8[uVar6]._fU76._fU76, ref uVar5 );
    StrCopy( ref l_U8[uVar6]._fU156._fU0, uParam2, 64 );
    l_U8[uVar6]._fU156._fU64 = 1;
    GET_HUD_COLOUR( 1, ref l_U8[uVar6]._fU156._fU68, ref l_U8[uVar6]._fU156._fU72, ref l_U8[uVar6]._fU156._fU76, ref uVar5 );
    sub_100352( uVar6 );
    return;
}

void sub_149846(unknown uParam0, int iParam1, boolean bParam2, int iParam3)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U483[I] == -1)
            {
                sub_149909( I, -1, "JOINED" );
                l_U483[I] = 1;
            }
            if (l_U483[I] == 0)
            {
                l_U483[I] = 1;
            }
            if (IS_CHAR_FATALLY_INJURED( sub_8050( I ) ))
            {
                sub_150186( ref (uParam0^)[I] );
                if (l_U483[I] == 2)
                {
                    if (I == (FIND_NETWORK_KILLER_OF_PLAYER( I )))
                    {
                        sub_149909( I, -1, "DIED" );
                    }
                    else if (IS_NETWORK_PLAYER_ACTIVE( FIND_NETWORK_KILLER_OF_PLAYER( I ) ))
                    {
                        sub_150329( FIND_NETWORK_KILLER_OF_PLAYER( I ), I );
                    }
                    l_U483[I] = 3;
                }
            }
            else if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
            {
                if (IS_PLAYER_SCRIPT_CONTROL_ON( sub_8097( I ) ))
                {
                    if (sub_150914( I ))
                    {
                        sub_150186( ref (uParam0^)[I] );
                    }
                    else if (((((iParam1 == 0) || ((iParam1 != 4) AND (((GET_PLAYER_TEAM( sub_5012() )) == (GET_PLAYER_TEAM( sub_8097( I ) ))) AND ((GET_PLAYER_TEAM( sub_5012() )) > -1)))) || (((sub_3700() == 10) AND ((GET_PLAYER_TEAM( sub_5012() )) == 0)) AND (NOT bParam2))) || ((((sub_3700() == 10) AND ((GET_PLAYER_TEAM( sub_5012() )) == 0)) AND (bParam2)) AND (I == iParam3))) || (((iParam1 == 6) AND (bParam2)) AND (iParam3 == GET_PLAYER_ID())))
                    {
                        if (NOT (DOES_BLIP_EXIST( (uParam0^)[I] )))
                        {
                            (uParam0^)[I] = sub_151279( I );
                        }
                    }
                    else if ((iParam1 == 1) || ((iParam1 == 7) AND (iParam3 == GET_PLAYER_ID())))
                    {
                        if (sub_151506( sub_5337(), sub_8050( I ), l_U1275 ))
                        {
                            if (NOT (DOES_BLIP_EXIST( (uParam0^)[I] )))
                            {
                                (uParam0^)[I] = sub_151279( I );
                                l_U1276[I] = 255;
                            }
                        }
                        else if (DOES_BLIP_EXIST( (uParam0^)[I] ))
                        {
                            if (l_U1276[I] == 0)
                            {
                                REMOVE_BLIP( (uParam0^)[I] );
                                (uParam0^)[I] = nil;
                            }
                            else
                            {
                                CHANGE_BLIP_ALPHA( (uParam0^)[I], l_U1276[I] );
                                l_U1276[I] -= 20;
                                sub_151800( ref l_U1276[I], 0, 255 );
                            }
                        }
                    }
                    else if (iParam1 == 2)
                    {
                        if (NOT (sub_151506( sub_5337(), sub_8050( I ), l_U1275 )))
                        {
                            if (NOT (DOES_BLIP_EXIST( (uParam0^)[I] )))
                            {
                                (uParam0^)[I] = sub_151279( I );
                                l_U1276[I] = 0;
                            }
                            if (DOES_BLIP_EXIST( (uParam0^)[I] ))
                            {
                                CHANGE_BLIP_ALPHA( (uParam0^)[I], l_U1276[I] );
                                l_U1276[I] += 25;
                                sub_151800( ref l_U1276[I], 0, 255 );
                            }
                        }
                        else if (DOES_BLIP_EXIST( (uParam0^)[I] ))
                        {
                            if (l_U1276[I] == 0)
                            {
                                REMOVE_BLIP( (uParam0^)[I] );
                                (uParam0^)[I] = nil;
                            }
                            else
                            {
                                CHANGE_BLIP_ALPHA( (uParam0^)[I], l_U1276[I] );
                                l_U1276[I] -= 20;
                                sub_151800( ref l_U1276[I], 0, 255 );
                            }
                        }
                    }
                    else if (iParam1 == 3)
                    {
                        if (sub_3700() == 16)
                        {
                            if (GET_HOST_ID() == I)
                            {
                                if (NOT (DOES_BLIP_EXIST( (uParam0^)[I] )))
                                {
                                    (uParam0^)[I] = sub_151279( I );
                                }
                            }
                            else
                            {
                                sub_150186( ref (uParam0^)[I] );
                            }
                        }
                        else if ((sub_152240( I )) == 1)
                        {
                            if (NOT (DOES_BLIP_EXIST( (uParam0^)[I] )))
                            {
                                (uParam0^)[I] = sub_151279( I );
                            }
                        }
                        else
                        {
                            sub_150186( ref (uParam0^)[I] );
                        }
                    }
                    else if (iParam1 == 4)
                    {
                        sub_150186( ref (uParam0^)[I] );
                    };;;;;;
                }
                else
                {
                    sub_150186( ref (uParam0^)[I] );
                }
            }
            if (l_U483[I] == 1)
            {
                l_U483[I] = 2;
            }
            if (l_U483[I] == 3)
            {
                l_U483[I] = 2;
            }
        }
        else if (l_U483[I] > 0)
        {
            sub_150186( ref (uParam0^)[I] );
            sub_149909( I, -1, "LEFTGAME" );
        }
        l_U483[I] = -1;;
    }
    if ((NETWORK_IS_RENDEZVOUS()) || (NETWORK_IS_TVT()))
    {
        if (l_U1293 != NETWORK_GET_RENDEZVOUS_HOST_PLAYER_ID())
        {
            l_U1293 = NETWORK_GET_RENDEZVOUS_HOST_PLAYER_ID();
            if (NETWORK_GET_RENDEZVOUS_HOST_PLAYER_ID() != -1)
            {
                if (IS_NETWORK_PLAYER_ACTIVE( l_U1293 ))
                {
                    sub_149909( l_U1293, -1, "IS_PARTY_LEADER" );
                }
            }
        }
    }
    return;
}

void sub_149909(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar6 = sub_99777( uParam1 );
    StrCopy( ref l_U8[uVar6]._fU76._fU0, GET_PLAYER_NAME( sub_8097( uParam0 ) ), 64 );
    sub_50139( sub_8097( uParam0 ), ref l_U8[uVar6]._fU76._fU68, ref l_U8[uVar6]._fU76._fU72, ref l_U8[uVar6]._fU76._fU76 );
    StrCopy( ref l_U8[uVar6]._fU156._fU0, uParam2, 64 );
    l_U8[uVar6]._fU156._fU64 = 1;
    GET_HUD_COLOUR( 1, ref l_U8[uVar6]._fU156._fU68, ref l_U8[uVar6]._fU156._fU72, ref l_U8[uVar6]._fU156._fU76, ref uVar5 );
    sub_100352( uVar6 );
    return;
}

void sub_150186(unknown uParam0)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        SET_ROUTE( (uParam0^), 0 );
        REMOVE_BLIP( (uParam0^) );
    }
    (uParam0^) = nil;
    return;
}

void sub_150329(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    char[16] cVar5;

    GET_DESTROYER_OF_NETWORK_ID( sub_150345( sub_8050( uParam1 ) ), ref uVar4 );
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
    ConcatString(ref cVar5, sub_2934( 0, 10 ), 16);
    REGISTER_KILL_IN_MULTIPLAYER_GAME( uParam0, uParam1, uVar4 );
    sub_99767( uParam0, ref cVar5, uParam1 );
    return;
}

void sub_150345(unknown uParam0)
{
    unknown Result;

    GET_NETWORK_ID_FROM_PED( uParam0, ref Result );
    return Result;
}

int sub_150914(unknown uParam0)
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_5337() ))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_8050( uParam0 ) ))
            {
                if ((GET_PLAYER_TEAM( sub_8097( uParam0 ) )) == (GET_PLAYER_TEAM( sub_8097( GET_PLAYER_ID() ) )))
                {
                    if ((sub_151022( sub_5337() )) == (sub_151022( sub_8050( uParam0 ) )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_151022(unknown uParam0)
{
    unknown Result;

    if (IS_CHAR_IN_ANY_CAR( uParam0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref Result );
        return Result;
    }
    return nil;
}

void sub_151279(int iParam0)
{
    unknown Result;
    int iVar4;
    int iVar5;
    int iVar6;

    ADD_BLIP_FOR_CHAR( sub_8050( iParam0 ), ref Result );
    sub_50139( sub_8097( iParam0 ), ref iVar4, ref iVar5, ref iVar6 );
    CHANGE_BLIP_COLOUR( Result, (((iVar4 * 16777216) + (iVar5 * 65536)) + (iVar6 * 256)) + 255 );
    CHANGE_BLIP_PRIORITY( Result, 3 );
    CHANGE_BLIP_SCALE( Result, 0.90000000 );
    CHANGE_BLIP_NAME_FROM_ASCII( Result, GET_PLAYER_NAME( sub_8097( iParam0 ) ) );
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

int sub_151506(unknown uParam0, unknown uParam1, float fParam2)
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

void sub_151800(unknown uParam0, int iParam1, int iParam2)
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

void sub_152240(unknown uParam0)
{
    if (((sub_12847()) || (sub_12802())) AND ((GET_PLAYER_TEAM( sub_8097( uParam0 ) )) > -1))
    {
        return sub_152296( GET_PLAYER_TEAM( sub_8097( uParam0 ) ) );
    }
    return sub_4106( uParam0 );
}

int sub_152296(int iParam0)
{
    int I;
    int Result;

    if (sub_152307( iParam0 ))
    {
        for ( I = 0; I < 8; I++ )
        {
            if ((sub_33175( l_U934[I] )) > 0)
            {
                Result++;
                if (l_U943[l_U934[I]] == l_U943[iParam0])
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
            if ((sub_33175( l_U934[I] )) > 0)
            {
                Result++;
                if (l_U934[I] == iParam0)
                {
                    return Result;
                }
            }
        }
    }
    return 1;
}

int sub_152307(int iParam0)
{
    int I;

    for ( I = 0; I < 8; I++ )
    {
        if (I != iParam0)
        {
            if ((sub_62982( I )) > 0)
            {
                if (l_U943[I] == l_U943[iParam0])
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_152935()
{
    if (sub_152944())
    {
        if (sub_153105())
        {
            switch (sub_153536())
            {
                case 0:
                SAY_AMBIENT_SPEECH( sub_5337(), "GANG_CHASE", 1, 0, 0 );
                break;
                case 1:
                SAY_AMBIENT_SPEECH( sub_5337(), "GENERIC_FUCK_OFF", 1, 0, 0 );
                break;
                case 2:
                SAY_AMBIENT_SPEECH( sub_5337(), "GENERIC_HI", 1, 0, 0 );
                break;
                case 3:
                SAY_AMBIENT_SPEECH( sub_5337(), "GANG_WATCH_THIS_GUY_SOLO", 1, 0, 0 );
                break;
                case 4:
                SAY_AMBIENT_SPEECH( sub_5337(), "JEERING", 1, 0, 0 );
                break;
                case 5:
                SAY_AMBIENT_SPEECH( sub_5337(), "ABUSE_DRIVER", 1, 0, 0 );
                break;
                case 6:
                SAY_AMBIENT_SPEECH( sub_5337(), "TARGET_NOGENDER", 1, 0, 0 );
                break;
                case 7:
                SAY_AMBIENT_SPEECH( sub_5337(), "FIGHT", 1, 0, 0 );
                break;
                case 8:
                SAY_AMBIENT_SPEECH( sub_5337(), "GANG_FIGHT_CHEER", 1, 0, 0 );
                break;
            }
        }
    }
    return;
}

int sub_152944()
{
    int iVar2;
    unknown uVar3;
    int iVar4;

    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (IS_CHAR_IN_ANY_HELI( sub_5337() ))
        {
            return 0;
        }
        if (IS_CHAR_IN_ANY_CAR( sub_5337() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5337(), ref uVar3 );
            GET_DRIVER_OF_CAR( uVar3, ref iVar4 );
            if (iVar4 == sub_5337())
            {
                GET_CURRENT_CHAR_WEAPON( sub_5337(), ref iVar2 );
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

int sub_153105()
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (sub_153135( 1, 1 ))
        {
            if (NOT (IS_CHAR_IN_AIR( sub_5337() )))
            {
                if (NOT l_U1714)
                {
                    if (IS_CONTROL_JUST_PRESSED( 0, 23 ))
                    {
                        if (NOT (IS_AMBIENT_SPEECH_PLAYING( sub_5337() )))
                        {
                            l_U1714 = 1;
                            return 1;
                        }
                    }
                }
                else if (NOT (IS_CONTROL_JUST_PRESSED( 0, 23 )))
                {
                    l_U1714 = 0;
                }
            }
        }
    }
    return 0;
}

int sub_153135(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_5337() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5337(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_5337() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5337(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_5337()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_5337() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_5337() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_5012() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_5012() )))
    {
        return 0;
    }
    return 1;
}

int sub_153536()
{
    if (sub_153545())
    {
        return 6;
    }
    else if (sub_153687( 1 ))
    {
        return 7;
    }
    else if (sub_153687( 0 ))
    {
        return 8;
    }
    if (sub_154379())
    {
        return 1;
    }
    if ((sub_154700()) || ((sub_153722()) AND (sub_154807())))
    {
        if (sub_154988() != nil)
        {
            if (IS_CHAR_MALE( sub_154988() ))
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
    if (sub_155158())
    {
        return 5;
    }
    if (sub_155386( 10.00000000 ))
    {
        return 2;
    }
    return 2;
}

int sub_153545()
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (IS_CHAR_SHOOTING( sub_5337() ))
        {
            return 1;
        }
    }
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if ((IS_CHAR_ARMED( sub_5337(), 2 )) || (IS_CHAR_ARMED( sub_5337(), 4 )))
        {
            if (IS_BUTTON_PRESSED( 0, 7 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_153687(boolean bParam0)
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (bParam0)
        {
            if (sub_153722())
            {
                if (IS_NETWORK_PLAYER_ACTIVE( l_U1713 ))
                {
                    if (NOT (IS_CHAR_DEAD( sub_8050( l_U1713 ) )))
                    {
                        if (IS_CHAR_VISIBLE( sub_8050( l_U1713 ) ))
                        {
                            if (sub_151506( sub_5337(), sub_8050( l_U1713 ), 10.00000000 ))
                            {
                                if (IS_CHAR_IN_MELEE_COMBAT( sub_5337() ))
                                {
                                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( sub_8050( l_U1713 ), sub_5337(), 0 ))
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
        else if (IS_NETWORK_PLAYER_ACTIVE( l_U1713 ))
        {
            if (NOT (IS_CHAR_DEAD( sub_8050( l_U1713 ) )))
            {
                if (IS_CHAR_VISIBLE( sub_8050( l_U1713 ) ))
                {
                    if (sub_151506( sub_5337(), sub_8050( l_U1713 ), 10.00000000 ))
                    {
                        if (IS_CHAR_IN_MELEE_COMBAT( sub_8050( l_U1713 ) ))
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

int sub_153722()
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
                    if ((NOT (IS_CHAR_DEAD( sub_5337() ))) AND (NOT (IS_CHAR_DEAD( sub_8050( I ) ))))
                    {
                        if (IS_CHAR_VISIBLE( sub_8050( I ) ))
                        {
                            GET_CHAR_COORDINATES( sub_8050( GET_PLAYER_ID() ), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                            GET_CHAR_COORDINATES( sub_8050( I ), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                            if ((VDIST( uVar4, uVar7 )) < 10000.00000000)
                            {
                                fVar2 = VDIST( uVar4, uVar7 );
                                l_U1713 = I;
                            }
                        }
                    }
                }
            }
        }
    }
    if (IS_NETWORK_PLAYER_ACTIVE( l_U1713 ))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (((GET_PLAYER_TEAM( sub_8097( l_U1713 ) )) != (GET_PLAYER_TEAM( sub_5012() ))) || ((GET_PLAYER_TEAM( sub_8097( l_U1713 ) )) == -1))
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

int sub_154379()
{
    int I;
    unknown uVar3;

    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( sub_5337(), 57 ))
        {
            CLEAR_CHAR_LAST_WEAPON_DAMAGE( sub_5337() );
            CLEAR_CHAR_LAST_DAMAGE_ENTITY( sub_5337() );
            CLEAR_CHAR_LAST_DAMAGE_BONE( sub_5337() );
            return 1;
        }
        for ( I = 0; I < 16; I++ )
        {
            if (IS_NETWORK_PLAYER_ACTIVE( I ))
            {
                if (I != GET_PLAYER_ID())
                {
                    if (IS_CHAR_IN_ANY_CAR( sub_8050( I ) ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_8050( I ), ref uVar3 );
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CAR( sub_5337(), uVar3 ))
                        {
                            CLEAR_CHAR_LAST_WEAPON_DAMAGE( sub_5337() );
                            CLEAR_CHAR_LAST_DAMAGE_ENTITY( sub_5337() );
                            CLEAR_CHAR_LAST_DAMAGE_BONE( sub_5337() );
                            return 1;
                        }
                    }
                    else if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( sub_5337(), sub_8050( I ), 0 ))
                    {
                        CLEAR_CHAR_LAST_WEAPON_DAMAGE( sub_5337() );
                        CLEAR_CHAR_LAST_DAMAGE_ENTITY( sub_5337() );
                        CLEAR_CHAR_LAST_DAMAGE_BONE( sub_5337() );
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_154700()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_5337(), 0.00000000, 5.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        if (ARE_ENEMY_PEDS_IN_AREA( sub_5337(), uVar2, 10.00000000 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_154807()
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( l_U1713 ))
        {
            if (NOT (IS_CHAR_DEAD( sub_8050( l_U1713 ) )))
            {
                if (IS_CHAR_VISIBLE( sub_8050( l_U1713 ) ))
                {
                    if (sub_151506( sub_5337(), sub_8050( l_U1713 ), 10.00000000 ))
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( sub_8050( l_U1713 ) )))
                        {
                            if (NOT (IS_CHAR_IN_MELEE_COMBAT( sub_5337() )))
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

void sub_154988()
{
    if (IS_NETWORK_PLAYER_ACTIVE( l_U1713 ))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (((GET_PLAYER_TEAM( sub_8097( l_U1713 ) )) != (GET_PLAYER_TEAM( sub_5012() ))) || ((GET_PLAYER_TEAM( sub_8097( l_U1713 ) )) == -1))
            {
                return sub_8050( l_U1713 );
            }
        }
    }
    return nil;
}

int sub_155158()
{
    float fVar2;

    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (sub_153722())
        {
            if (sub_32898())
            {
                if (IS_NETWORK_PLAYER_ACTIVE( l_U1713 ))
                {
                    if (NOT (IS_CHAR_DEAD( sub_8050( l_U1713 ) )))
                    {
                        if (IS_CHAR_VISIBLE( sub_8050( l_U1713 ) ))
                        {
                            if (sub_151506( sub_5337(), sub_8050( l_U1713 ), 10.00000000 ))
                            {
                                if ((IS_CHAR_IN_ANY_CAR( sub_5337() )) AND (IS_CHAR_IN_ANY_CAR( sub_8050( l_U1713 ) )))
                                {
                                    GET_CHAR_SPEED( sub_5337(), ref fVar2 );
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

int sub_155386(unknown uParam0)
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
                    if (NOT (IS_CHAR_DEAD( sub_8050( I ) )))
                    {
                        if (IS_CHAR_VISIBLE( sub_8050( I ) ))
                        {
                            if (sub_151506( sub_5337(), sub_8050( I ), uParam0 ))
                            {
                                if (NOT (IS_CHAR_IN_ANY_CAR( sub_8050( I ) )))
                                {
                                    if ((NOT (IS_CHAR_IN_MELEE_COMBAT( sub_5337() ))) AND (NOT (IS_CHAR_IN_MELEE_COMBAT( sub_8050( I ) ))))
                                    {
                                        if (((GET_PLAYER_TEAM( sub_8097( I ) )) != (GET_PLAYER_TEAM( sub_5012() ))) || ((GET_PLAYER_TEAM( sub_8097( I ) )) == -1))
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

void sub_156180(int iParam0, boolean bParam1)
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
    if (l_U890 == 0)
    {
        l_U890++;
    }
    else if (l_U890 == 1)
    {
        if ((iParam0 <= 60000) AND (iParam0 > 15000))
        {
            if (PRELOAD_STREAM( "MP_COUNTDOWN" ))
            {
                l_U890++;
            }
        }
    }
    else if (l_U890 == 2)
    {
        if (iParam0 <= 28725)
        {
            PLAY_STREAM_FRONTEND();
            MUTE_POSITIONED_RADIO( 1 );
            DISABLE_FRONTEND_RADIO();
            l_U890++;
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
        sub_29606( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
        sub_44184( sub_48401( 23 ), (sub_48434( 23 )) + 0.04050000, sub_48401( 24 ), sub_48434( 24 ), 255, 255, 255, 255, 2, ref cVar15 );
    }
    SET_MULTIPLAYER_HUD_TIME( ref cVar15 );
    return;
}

void sub_156860(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16)
{
    int I;
    int iVar20;
    unknown[16] uVar21;
    unknown uVar38;

    iVar20 = GET_PLAYER_ID();
    array(ref uVar21, 16);
    sub_156927( ref uVar21, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam9, uParam10, uParam11, uParam12, uParam13, uParam14, uParam15, uParam16 );
    sub_157118( ref uVar21[iVar20], g_U18._fU636, g_U18._fU632 );
    if (NOT g_U18._fU1492)
    {
        switch (g_U18._fU632)
        {
            case 0:
            for ( I = 0; I <= (iParam0 - 1); I++ )
            {
                if ((I != iVar20) AND (IS_NETWORK_PLAYER_ACTIVE( I )))
                {
                    if (((sub_157267( ref uVar21[I] )) == iVar20) AND ((sub_157307( ref uVar21[I] )) == 3))
                    {
                        if ((NOT (NETWORK_IS_PLAYER_BLOCKED_BY_ME( I ))) AND (NOT (NETWORK_AM_I_BLOCKED_BY_PLAYER( I ))))
                        {
                            StrCopy( ref g_U18._fU584, GET_PLAYER_NAME( sub_8097( I ) ), 32 );
                            sub_101697( ref uVar21[iVar20], I, 1 );
                            break;
                        }
                    }
                }
            }
            break;
            case 1:
            if (g_U18._fU636 == 31)
            {
                sub_101697( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if (IS_NETWORK_PLAYER_ACTIVE( g_U18._fU636 ))
            {
                if (NOT (sub_157500( iVar20, g_U18._fU636, ref uVar38 )))
                {
                    sub_101697( ref uVar21[iVar20], 31, 4 );
                    break;
                }
                switch (sub_157307( ref uVar21[g_U18._fU636] ))
                {
                    case 3:
                    case 9: if ((sub_157267( ref uVar21[g_U18._fU636] )) == iVar20)
                    {
                        break;
                    }
                    default:
                    sub_101697( ref uVar21[iVar20], 31, 4 );
                    break;
                }
            }
            else
            {
                sub_101697( ref uVar21[iVar20], 31, 4 );
            }
            break;
            case 2:
            if (g_U18._fU636 == 31)
            {
                sub_101697( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if (IS_NETWORK_PLAYER_ACTIVE( g_U18._fU636 ))
            {
                if ((sub_157307( ref uVar21[g_U18._fU636] )) == 0)
                {
                    sub_101697( ref uVar21[iVar20], g_U18._fU636, 3 );
                    break;
                }
            }
            sub_101697( ref uVar21[iVar20], 31, 6 );
            break;
            case 3:
            if (g_U18._fU636 == 31)
            {
                sub_101697( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if (IS_NETWORK_PLAYER_ACTIVE( g_U18._fU636 ))
            {
                if (NOT (sub_157500( iVar20, g_U18._fU636, ref uVar38 )))
                {
                    sub_101697( ref uVar21[iVar20], 31, 4 );
                    break;
                }
                switch (sub_157307( ref uVar21[g_U18._fU636] ))
                {
                    case 0: break;
                    case 9:
                    case 1:
                    if ((sub_157267( ref uVar21[g_U18._fU636] )) == iVar20)
                    {
                        if ((sub_157307( ref uVar21[g_U18._fU636] )) == 9)
                        {
                            sub_101697( ref uVar21[iVar20], g_U18._fU636, 9 );
                        }
                        break;
                    }
                    sub_101697( ref uVar21[iVar20], 31, 6 );
                    break;
                    default:
                    sub_101697( ref uVar21[iVar20], 31, 4 );
                    break;
                }
            }
            else
            {
                sub_101697( ref uVar21[iVar20], 31, 6 );
            }
            break;
            case 9:
            if (g_U18._fU636 == 31)
            {
                sub_101697( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if (NOT (sub_157500( iVar20, g_U18._fU636, ref uVar38 )))
            {
                sub_101697( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if ((sub_157267( ref uVar21[g_U18._fU636] )) != iVar20)
            {
                sub_101697( ref uVar21[iVar20], 31, 4 );
            }
            break;
        }
    }
    sub_158315( iVar20, ref uVar21, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam9, uParam10, uParam11, uParam12, uParam13, uParam14, uParam15, uParam16 );
    return;
}

void sub_156927(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16)
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

void sub_157118(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_101728( uParam0, uParam1 );
    sub_101762( uParam0, uParam2 );
    return;
}

void sub_157267(unknown uParam0)
{
    return GET_BITS_IN_RANGE( (uParam0^), 0, 15 );
}

void sub_157307(unknown uParam0)
{
    return GET_BITS_IN_RANGE( (uParam0^), 16, 31 );
}

int sub_157500(unknown uParam0, int iParam1, unknown uParam2)
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

void sub_158315(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17)
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

void sub_158711()
{
    int I;

    sub_13810( "DISPLAY_BASE_INFO(VOID)" );
    for ( I = 0; I <= 6; I++ )
    {
        if (LOCATE_CHAR_ON_FOOT_3D( sub_5337(), l_U1933._fU4[I]._fU0._fU0, l_U1933._fU4[I]._fU0._fU4, l_U1933._fU4[I]._fU0._fU8, 2.25000000, 2.25000000, 7.50000000, 0 ))
        {
            if (l_U1933._fU4[I]._fU16)
            {
                ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                PRINT_WITH_NUMBER_NOW( "TMBS_CD", l_U1933._fU4[I]._fU40 / 3, 10, 0 );
                ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
            }
            else if (IS_THIS_PRINT_BEING_DISPLAYED( "TMBS_CD", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
            {
                CLEAR_PRINTS();
            }
        }
    }
    if (NOT sub_158966())
    {
        if (IS_THIS_PRINT_BEING_DISPLAYED( "TMBS_CD", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
        {
            CLEAR_PRINTS();
        }
    }
    return;
}

int sub_158966()
{
    int I;

    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        for ( I = 0; I <= 6; I++ )
        {
            if (LOCATE_CHAR_ON_FOOT_3D( sub_5337(), l_U1933._fU4[I]._fU0._fU0, l_U1933._fU4[I]._fU0._fU4, l_U1933._fU4[I]._fU0._fU8, 2.25000000, 2.25000000, 7.50000000, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_159161()
{
    int I;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_13810( "BASE_BLIP_MGMT(Void)" );
    for ( I = 0; I <= 6; I++ )
    {
        if (NOT l_U1933._fU4[I]._fU28)
        {
            if (NOT (DOES_BLIP_EXIST( l_U2259[I] )))
            {
                ADD_BLIP_FOR_COORD( l_U1933._fU4[I]._fU0._fU0, l_U1933._fU4[I]._fU0._fU4, l_U1933._fU4[I]._fU0._fU8, ref l_U2259[I] );
                CHANGE_BLIP_SPRITE( l_U2259[I], 29 );
                CHANGE_BLIP_NAME_FROM_TEXT_FILE( l_U2259[I], "BLIP_94" );
                if (l_U1933._fU4[I]._fU12 == 0)
                {
                    GET_TEAM_RGB_COLOUR( 0, ref iVar3, ref iVar4, ref iVar5 );
                    iVar6 = (((iVar3 * 16777216) + (iVar4 * 65536)) + (iVar5 * 256)) + 255;
                    CHANGE_BLIP_COLOUR( l_U2259[I], iVar6 );
                    l_U2151[I] = 0;
                }
                else if (l_U1933._fU4[I]._fU12 == 1)
                {
                    GET_TEAM_RGB_COLOUR( 1, ref iVar3, ref iVar4, ref iVar5 );
                    iVar6 = (((iVar3 * 16777216) + (iVar4 * 65536)) + (iVar5 * 256)) + 255;
                    CHANGE_BLIP_COLOUR( l_U2259[I], iVar6 );
                    l_U2151[I] = 1;
                }
                else
                {
                    iVar3 = 254;
                    iVar4 = 242;
                    iVar5 = 0;
                    iVar6 = (((iVar3 * 16777216) + (iVar4 * 65536)) + (iVar5 * 256)) + 255;
                    CHANGE_BLIP_COLOUR( l_U2259[I], iVar6 );
                    l_U2151[I] = 2;
                }
            }
            else if (l_U2151[I] != l_U1933._fU4[I]._fU12)
            {
                if (l_U1933._fU4[I]._fU12 == 0)
                {
                    GET_TEAM_RGB_COLOUR( 0, ref iVar3, ref iVar4, ref iVar5 );
                    iVar6 = (((iVar3 * 16777216) + (iVar4 * 65536)) + (iVar5 * 256)) + 255;
                    CHANGE_BLIP_COLOUR( l_U2259[I], iVar6 );
                    l_U2151[I] = 0;
                }
                else if (l_U1933._fU4[I]._fU12 == 1)
                {
                    GET_TEAM_RGB_COLOUR( 1, ref iVar3, ref iVar4, ref iVar5 );
                    iVar6 = (((iVar3 * 16777216) + (iVar4 * 65536)) + (iVar5 * 256)) + 255;
                    CHANGE_BLIP_COLOUR( l_U2259[I], iVar6 );
                    l_U2151[I] = 1;
                }
                else
                {
                    iVar3 = 254;
                    iVar4 = 242;
                    iVar5 = 0;
                    iVar6 = (((iVar3 * 16777216) + (iVar4 * 65536)) + (iVar5 * 256)) + 255;
                    CHANGE_BLIP_COLOUR( l_U2259[I], iVar6 );
                    l_U2151[I] = 2;
                }
            }
        }
    }
    return;
}

int sub_160137()
{
    int I;

    for ( I = 0; I <= 6; I++ )
    {
        if (NOT l_U1933._fU4[I]._fU28)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_5337(), l_U1933._fU4[I]._fU0._fU0, l_U1933._fU4[I]._fU0._fU4, l_U1933._fU4[I]._fU0._fU8, 2.25000000, 2.25000000, 7.50000000, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_160321()
{
    sub_13810( "MISSION_TEXT_MGR(VOID)" );
    if (NOT l_U2294)
    {
        if ((GET_PLAYER_TEAM( sub_5012() )) == 0)
        {
            PRINT_NOW( "TM_BASE_I0", 10000, 1 );
        }
        else
        {
            PRINT_NOW( "TM_BASE_I1", 10000, 1 );
        }
        l_U2294 = 1;
    }
    return;
}

int sub_160457()
{
    int iVar2;

    GET_NETWORK_TIMER( ref iVar2 );
    if (NOT sub_160474())
    {
        if (IS_BUTTON_PRESSED( 0, 9 ))
        {
            if (NOT l_U1254)
            {
                if (l_U1253 > iVar2)
                {
                    l_U1253 = iVar2 - 5000;
                }
                else
                {
                    l_U1253 = iVar2 + 5000;
                }
                l_U1254 = 1;
            }
            else if (l_U1253 > iVar2)
            {
                l_U1253 = iVar2 + 5000;
            }
        }
        else
        {
            l_U1254 = 0;
        }
        if (l_U1253 > iVar2)
        {
            SET_RADAR_ZOOM( 980 );
            return 1;
        }
    }
    SET_RADAR_ZOOM( 0 );
    return 0;
}

int sub_160474()
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

void sub_160732(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
{
    if (NOT (IS_FONT_LOADED( 6 )))
    {
        LOAD_TEXT_FONT( 6 );
    }
    HIDE_HELP_TEXT_THIS_FRAME();
    if (((iParam2 == 1) || (iParam2 == 3)) || (iParam2 == 5))
    {
        sub_160791( uParam1 );
    }
    sub_161220( uParam0 );
    if ((sub_4641() + sub_12944()) > 22)
    {
        if (GET_IS_HIDEF())
        {
            sub_161801( iParam2, 0.07000000, 0.06400000, 0.31300000, 0.40600000, 0.02450000, 0.28000000, 0.39070000, 0.02300000, uParam3, uParam4 );
        }
        else
        {
            sub_161801( iParam2, 0.09000000, 0.08400000, 0.30000000, 0.44000000, 0.02450000, 0.30000000, 0.44000000, 0.02300000, uParam3, uParam4 );
        }
    }
    else if (GET_IS_HIDEF())
    {
        sub_161801( iParam2, 0.07000000, 0.06400000, 0.31300000, 0.46000000, 0.02700000, 0.28000000, 0.42000000, 0.02700000, uParam3, uParam4 );
    }
    else
    {
        sub_161801( iParam2, 0.09000000, 0.08400000, 0.30000000, 0.44000000, 0.02700000, 0.30000000, 0.44000000, 0.02700000, uParam3, uParam4 );
    }
    return;
}

void sub_160791(unknown uParam0)
{
    int I;

    if (NOT l_U987)
    {
        sub_29089();
        l_U987 = 1;
    }
    if ((uParam0^) <= 8)
    {
        for ( I = 0; I < (uParam0^); I++ )
        {
            if (l_U943[I] != (uParam0^)[I])
            {
                l_U943[I] = (uParam0^)[I];
                sub_160886( I );
            }
        }
    }
    return;
}

void sub_160886(unknown uParam0)
{
    unknown uVar3;

    if (l_U925[uParam0] > 0)
    {
        uVar3 = l_U934[l_U925[uParam0] - 1];
        if (l_U943[uParam0] > l_U943[uVar3])
        {
            l_U934[l_U925[uParam0] - 1] = uParam0;
            l_U934[l_U925[uParam0]] = uVar3;
            l_U925[uVar3]++;
            l_U925[uParam0]--;
            sub_160886( uParam0 );
            return;
        }
    }
    if (l_U925[uParam0] < 7)
    {
        uVar3 = l_U934[l_U925[uParam0] + 1];
        if (l_U943[uParam0] < l_U943[uVar3])
        {
            l_U934[l_U925[uParam0] + 1] = uParam0;
            l_U934[l_U925[uParam0]] = uVar3;
            l_U925[uVar3]--;
            l_U925[uParam0]++;
            sub_160886( uParam0 );
            return;
        }
    }
    return;
}

void sub_161220(unknown uParam0)
{
    int I;

    if (NOT l_U986)
    {
        sub_28934();
        l_U986 = 1;
    }
    for ( I = 0; I < 16; I++ )
    {
        if (l_U566[sub_4262()]._fU24[I] != (uParam0^)[I])
        {
            l_U566[sub_4262()]._fU24[I] = (uParam0^)[I];
            sub_161321( I );
        }
    }
    return sub_4641();
}

void sub_161321(unknown uParam0)
{
    unknown uVar3;

    if (l_U908[uParam0] > 0)
    {
        uVar3 = l_U566[0]._fU24[l_U908[uParam0] - 1];
        if (l_U566[sub_4262()]._fU24[uParam0] > l_U566[sub_4262()]._fU24[uVar3])
        {
            l_U566[0]._fU24[l_U908[uParam0] - 1] = uParam0;
            l_U566[0]._fU24[l_U908[uParam0]] = uVar3;
            l_U908[uVar3]++;
            l_U908[uParam0]--;
            sub_161321( uParam0 );
            return;
        }
    }
    if (l_U908[uParam0] < 15)
    {
        uVar3 = l_U566[0]._fU24[l_U908[uParam0] + 1];
        if (l_U566[sub_4262()]._fU24[uParam0] < l_U566[sub_4262()]._fU24[uVar3])
        {
            l_U566[0]._fU24[l_U908[uParam0] + 1] = uParam0;
            l_U566[0]._fU24[l_U908[uParam0]] = uVar3;
            l_U908[uVar3]--;
            l_U908[uParam0]++;
            sub_161321( uParam0 );
            return;
        }
    }
    return;
}

void sub_161801(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, int iParam9, boolean bParam10)
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
            fVar17 = sub_61517( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, GET_PLAYER_NAME( sub_8097( I ) ) );
            SET_TEXT_USE_UNDERSCORE( 0 );
            if (fVar17 > fVar18)
            {
                fVar18 = fVar17;
            }
            if ((iParam0 == 3) AND ((sub_62859( I )) > -1))
            {
                if ((l_U566[sub_4262()]._fU16 == 5) || (l_U566[sub_4262()]._fU16 == 6))
                {
                    if (sub_3700() == 1)
                    {
                        fVar17 = sub_162034( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, "CASH", l_U566[sub_4262()]._fU24[I] );
                    }
                    else
                    {
                        fVar17 = sub_162034( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, "CASH", (l_U943[sub_62859( I )]) / (sub_62982( sub_62859( I ) )) );
                    }
                }
                else
                {
                    fVar17 = sub_162350( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, (l_U943[sub_62859( I )]) / (sub_62982( sub_62859( I ) )) );
                }
                if (fVar17 > fVar19)
                {
                    fVar19 = fVar17;
                }
            }
            else if (iParam0 == 2)
            {
                if ((l_U566[sub_4262()]._fU16 == 5) || (l_U566[sub_4262()]._fU16 == 6))
                {
                    fVar17 = sub_162034( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, "CASH", l_U566[sub_4262()]._fU24[I] );
                }
                else
                {
                    fVar17 = sub_162350( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, l_U566[sub_4262()]._fU24[I] );
                }
                if (fVar17 > fVar19)
                {
                    fVar19 = fVar17;
                }
            }
            else if ((iParam0 == 4) || (iParam0 == 5))
            {
                fVar17 = sub_162787( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, sub_4106( I ) );
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
            if ((sub_33175( J )) > 0)
            {
                fVar17 = sub_164449( 6, 0.00000000, 1.00000000, 0, 0, uParam6, uParam7, sub_163173( J, 1 ) );
                if (fVar17 > fVar18)
                {
                    fVar18 = fVar17;
                }
                if (iParam0 == 3)
                {
                    if ((l_U566[sub_4262()]._fU16 == 5) || (l_U566[sub_4262()]._fU16 == 6))
                    {
                        fVar17 = sub_162034( 6, 0.00000000, 1.00000000, 0, 0, uParam6, uParam7, "CASH", l_U943[J] );
                    }
                    else
                    {
                        fVar17 = sub_162350( 6, 0.00000000, 1.00000000, 0, 0, uParam6, uParam7, l_U943[J] );
                    }
                    if (fVar17 > fVar19)
                    {
                        fVar19 = fVar17;
                    }
                }
                else if (iParam0 == 5)
                {
                    fVar17 = sub_162787( 6, 0.00000000, 1.00000000, 0, 0, uParam6, uParam7, sub_152296( J ) );
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
    ConcatString(ref cVar23, sub_3700(), 32);
    fVar17 = sub_164449( 6, 0.00000000, 1.00000000, 0, 0, 0.31000000, 0.45500000, ref cVar23 );
    if (fVar17 > fVar18)
    {
        fVar18 = fVar17;
    }
    if (iParam9 != 2147483647)
    {
        if (bParam10)
        {
            if (sub_10946())
            {
                fVar17 = sub_162034( 6, 0.00000000, 1.00000000, 0, 0, 0.31000000, 0.45500000, "LIVES_LEFT", iParam9 );
            }
            else
            {
                fVar17 = sub_162034( 6, 0.00000000, 1.00000000, 0, 0, 0.31000000, 0.45500000, "MAX_POINTS", iParam9 );
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
    l_U988 = fVar21 - -0.02600000;
    DRAW_CURVED_WINDOW( uParam1, uParam2 - 0.01200000, fVar20, fVar21, 245 );
    StrCopy( ref cVar23, "NTGT_", 32 );
    ConcatString(ref cVar23, sub_3700(), 32);
    sub_29606( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    sub_35829( ref cVar23, uParam1 + 0.01000000, uParam2 + -0.00370000, 0.31000000, 0.45500000, 255, 255, 255, 255, 2 );
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
            sub_29606( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
            if (sub_10946())
            {
                sub_29903( "LIVES_LEFT", uParam1 + 0.01000000, (((((uParam2 + fVar22) + -0.00370000) + 0.03450000) + -0.01900000) + 0.03820000) + 0.00650000, 0.31000000, 0.45500000, 255, 255, 255, 255, 2, iParam9 );
            }
            else
            {
                sub_29903( "MAX_POINTS", uParam1 + 0.01000000, (((((uParam2 + fVar22) + -0.00370000) + 0.03450000) + -0.01900000) + 0.03820000) + 0.00650000, 0.31000000, 0.45500000, 255, 255, 255, 255, 2, iParam9 );
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
        iVar31[0] = sub_4262();
        iVar31[1] = 0;
    }
    if (((iParam0 == 1) || (iParam0 == 3)) || (iParam0 == 5))
    {
        sub_166204( ref iVar31, (uParam1 + 0.01000000) + fVar19, ((uParam2 + -0.00370000) + 0.03450000) + -0.01900000, uParam6, uParam7, uParam8, uParam3, uParam4, uParam5, iParam0, 24, 0, -1 );
    }
    else
    {
        sub_167653( ref iVar31, (uParam1 + 0.01000000) + fVar19, ((uParam2 + -0.00370000) + 0.03450000) + -0.01900000, uParam3, uParam4, uParam5, iParam0, 16, 0, -1 );
    }
    return;
}

void sub_162034(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
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

void sub_162350(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
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

void sub_162787(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7)
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

string sub_163173(int iParam0, boolean bParam1)
{
    int I;
    int iVar5;

    if (l_U1206)
    {
        if (l_U1207 == 0)
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
        else if (l_U1207 == 1)
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
            if ((sub_62982( I )) > 0)
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
            if ((sub_62982( I )) > 0)
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

void sub_164449(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
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

void sub_166204(unknown uParam0, unknown uParam1, float fParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, int iParam9, int iParam10, int iParam11, unknown uParam12)
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
        if ((sub_62982( l_U934[iVar16] )) > 0)
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
                    if (((uParam0^)[I] == sub_4262()) || ((uParam0^)[I] == 0))
                    {
                        if (l_U566[(uParam0^)[I]]._fU16 > 0)
                        {
                            GET_TEAM_RGB_COLOUR( l_U934[iVar16], ref uVar18, ref uVar19, ref uVar20 );
                            if ((iParam9 == 6) || (iParam9 == 7))
                            {
                                sub_29606( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                                iVar22 = 1;
                            }
                            else
                            {
                                sub_29606( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                                iVar22 = 3;
                            }
                            if (l_U566[(uParam0^)[I]]._fU16 != 1)
                            {
                                if ((iParam9 == 6) || (iParam9 == 7))
                                {
                                    fVar23 += (sub_60169( l_U566[(uParam0^)[I]]._fU16 )) * 0.50000000;
                                }
                            }
                            switch (l_U566[(uParam0^)[I]]._fU16)
                            {
                                case 1:
                                if ((iParam9 == 6) || (iParam9 == 7))
                                {
                                    sub_29606( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                                    sub_35829( sub_163173( l_U934[iVar16], 1 ), fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, 2 );
                                    fVar23 += (sub_60169( l_U566[(uParam0^)[I]]._fU16 )) - uVar24;
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
                                sub_35829( sub_163173( l_U934[iVar16], 1 ), fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, 2 );;
                                iVar21++;
                                break;
                                case 2:
                                case 7:
                                sub_30228( fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, iVar22, l_U943[l_U934[iVar16]] );
                                iVar21++;
                                break;
                                case 3:
                                if (l_U943[l_U934[iVar16]] > 0)
                                {
                                    sub_62491( fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, iVar22, l_U925[l_U934[iVar16]] + 1 );
                                }
                                iVar21++;
                                break;
                                case 4:
                                if (l_U943[l_U934[iVar16]] < 5940000)
                                {
                                    sub_54536( fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, iVar22, l_U943[l_U934[iVar16]], 1.00000000 );
                                }
                                iVar21++;
                                break;
                                case 5:
                                case 6:
                                sub_29903( "CASH", fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, iVar22, l_U943[l_U934[iVar16]] );
                                iVar21++;
                                break;
                            }
                            if (l_U566[(uParam0^)[I]]._fU16 != 1)
                            {
                                if ((iParam9 == 6) || (iParam9 == 7))
                                {
                                    fVar23 += (sub_60169( l_U566[(uParam0^)[I]]._fU16 )) * 0.50000000;
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
                        fVar23 += sub_60169( 2 );
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
                            if ((sub_4641() + sub_12944()) > 22)
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
                if (sub_4150( l_U566[0]._fU24[J] ))
                {
                    if ((sub_62859( l_U566[0]._fU24[J] )) == l_U934[iVar16])
                    {
                        if ((iVar25 >= iParam11) AND (iVar25 < (iParam11 + iParam10)))
                        {
                            sub_59777( l_U566[0]._fU24[J], uParam0, uParam1, ref fParam2, uParam6, uParam7, uParam8, iParam9, 0 );
                        }
                        iVar25++;
                    }
                }
            }
        }
    }
    return;
}

void sub_167653(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7, int iParam8, unknown uParam9)
{
    int I;
    int iVar13;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_4150( l_U566[0]._fU24[I] ))
        {
            if ((iVar13 >= iParam8) AND (iVar13 < (iParam8 + iParam7)))
            {
                sub_59777( l_U566[0]._fU24[I], uParam0, uParam1, ref uParam2, uParam3, uParam4, uParam5, uParam6, 0 );
            }
            iVar13++;
        }
    }
    return;
}

void sub_168072(int iParam0)
{
    int I;
    int Result;

    for ( I = 0; I <= 6; I++ )
    {
        if (iParam0 == l_U1933._fU4[I]._fU12)
        {
            Result++;
        }
    }
    return Result;
}

void sub_168415(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar6 = sub_99777( uParam1 );
    StrCopy( ref l_U8[uVar6]._fU76._fU0, sub_163173( uParam0, 1 ), 64 );
    l_U8[uVar6]._fU76._fU64 = 1;
    GET_TEAM_RGB_COLOUR( uParam0, ref l_U8[uVar6]._fU76._fU68, ref l_U8[uVar6]._fU76._fU72, ref l_U8[uVar6]._fU76._fU76 );
    StrCopy( ref l_U8[uVar6]._fU156._fU0, uParam2, 64 );
    l_U8[uVar6]._fU156._fU64 = 1;
    GET_HUD_COLOUR( 1, ref l_U8[uVar6]._fU156._fU68, ref l_U8[uVar6]._fU156._fU72, ref l_U8[uVar6]._fU156._fU76, ref uVar5 );
    sub_100352( uVar6 );
    return;
}

void sub_168816(int iParam0)
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
        sub_168925( ref cVar7, uVar3, uVar4, uVar5, -1, " ", uVar3, uVar4, uVar5 );
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
        sub_168925( ref cVar7, uVar3, uVar4, uVar5, -1, " ", uVar3, uVar4, uVar5 );
    }
    return;
}

void sub_168925(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    unknown uVar11;

    uVar11 = sub_99777( uParam4 );
    StrCopy( ref l_U8[uVar11]._fU76._fU0, uParam0, 64 );
    l_U8[uVar11]._fU76._fU68 = uParam1;
    l_U8[uVar11]._fU76._fU72 = uParam2;
    l_U8[uVar11]._fU76._fU76 = uParam3;
    StrCopy( ref l_U8[uVar11]._fU156._fU0, uParam5, 64 );
    l_U8[uVar11]._fU156._fU68 = uParam6;
    l_U8[uVar11]._fU156._fU72 = uParam7;
    l_U8[uVar11]._fU156._fU76 = uParam8;
    return;
}

void sub_169689(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    if (NOT l_U3613)
    {
        l_U3614 = l_U2331 + 1000;
        if (l_U3615 == 1)
        {
            l_U3615 = 0;
        }
        else
        {
            l_U3615 = 1;
        }
        l_U3613 = 1;
    }
    else if (l_U3614 < l_U2331)
    {
        if (l_U3615 == 0)
        {
            if (IS_NETWORK_PLAYER_ACTIVE( uParam1 ))
            {
                if ((GET_PLAYER_TEAM( sub_8097( uParam1 ) )) == 0)
                {
                    GET_TEAM_RGB_COLOUR( 0, ref iVar5, ref iVar6, ref iVar7 );
                    iVar4 = (((iVar5 * 16777216) + (iVar6 * 65536)) + (iVar7 * 256)) + 255;
                    CHANGE_BLIP_COLOUR( l_U2259[uParam0], iVar4 );
                }
                else
                {
                    GET_TEAM_RGB_COLOUR( 1, ref iVar5, ref iVar6, ref iVar7 );
                    iVar4 = (((iVar5 * 16777216) + (iVar6 * 65536)) + (iVar7 * 256)) + 255;
                    CHANGE_BLIP_COLOUR( l_U2259[uParam0], iVar4 );
                }
            }
        }
        else if (l_U1933._fU4[uParam0]._fU12 == 0)
        {
            GET_TEAM_RGB_COLOUR( 0, ref iVar5, ref iVar6, ref iVar7 );
            iVar4 = (((iVar5 * 16777216) + (iVar6 * 65536)) + (iVar7 * 256)) + 255;
            CHANGE_BLIP_COLOUR( l_U2259[uParam0], iVar4 );
        }
        else if (l_U1933._fU4[uParam0]._fU12 == 1)
        {
            GET_TEAM_RGB_COLOUR( 1, ref iVar5, ref iVar6, ref iVar7 );
            iVar4 = (((iVar5 * 16777216) + (iVar6 * 65536)) + (iVar7 * 256)) + 255;
            CHANGE_BLIP_COLOUR( l_U2259[uParam0], iVar4 );
        }
        else
        {
            iVar5 = 254;
            iVar6 = 242;
            iVar7 = 0;
            iVar4 = (((iVar5 * 16777216) + (iVar6 * 65536)) + (iVar7 * 256)) + 255;
            CHANGE_BLIP_COLOUR( l_U2259[uParam0], iVar4 );
        };;;
        l_U3613 = 0;
    }
    return;
}

void sub_170204(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    if (l_U1933._fU4[uParam0]._fU12 == 0)
    {
        GET_TEAM_RGB_COLOUR( 0, ref iVar3, ref iVar4, ref iVar5 );
        iVar6 = (((iVar3 * 16777216) + (iVar4 * 65536)) + (iVar5 * 256)) + 255;
        CHANGE_BLIP_COLOUR( l_U2259[uParam0], iVar6 );
    }
    else if (l_U1933._fU4[uParam0]._fU12 == 1)
    {
        GET_TEAM_RGB_COLOUR( 1, ref iVar3, ref iVar4, ref iVar5 );
        iVar6 = (((iVar3 * 16777216) + (iVar4 * 65536)) + (iVar5 * 256)) + 255;
        CHANGE_BLIP_COLOUR( l_U2259[uParam0], iVar6 );
    }
    else
    {
        iVar3 = 254;
        iVar4 = 242;
        iVar5 = 0;
        iVar6 = (((iVar3 * 16777216) + (iVar4 * 65536)) + (iVar5 * 256)) + 255;
        CHANGE_BLIP_COLOUR( l_U2259[uParam0], iVar6 );
    }
    return;
}

void sub_170959(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    float fVar6;
    int Result;
    int I;

    fVar6 = 100000.00000000;
    Result = -1;
    for ( I = 0; I <= 6; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( uParam0 ))
        {
            if (NOT l_U1933._fU4[I]._fU28)
            {
                if (NOT (sub_22353( I, uParam0 )))
                {
                    if (NOT (IS_CHAR_DEAD( sub_8050( uParam0 ) )))
                    {
                        GET_CHAR_COORDINATES( sub_8050( uParam0 ), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                        if ((GET_PLAYER_TEAM( sub_8097( uParam0 ) )) == l_U1933._fU4[I]._fU12)
                        {
                            if ((VDIST( uVar3, l_U1933._fU4[I]._fU0 )) < fVar6)
                            {
                                fVar6 = VDIST( uVar3, l_U1933._fU4[I]._fU0 );
                                Result = I;
                            }
                        }
                    }
                }
            }
        }
    }
    return Result;
}

int sub_171250(unknown uParam0)
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

void sub_171446()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    sub_171455();
    switch (l_U3611)
    {
        case 0:
        l_U3400[GET_PLAYER_ID()]._fU8 = -5;
        l_U3611 = 1;
        CLEAR_PRINTS();
        break;
        case 1:
        SET_INSTANT_WIDESCREEN_BORDERS( 1 );
        sub_47829( GET_PLAYER_ID(), 0 );
        l_U3611 = 2;
        uVar2 = {sub_171800( ref l_U2258 )};
        if (l_U1933._fU756[3] < 3)
        {
            sub_172821();
        }
        break;
        case 2:
        l_U3400[GET_PLAYER_ID()]._fU12 = 7;
        l_U3611 = 0;
        break;
    }
    return;
}

void sub_171455()
{
    sub_171473( 20, ref l_U1933._fU532 );
    sub_171473( 3, ref l_U1933._fU600 );
    sub_171473( 6, ref l_U1933._fU464 );
    sub_171473( 4, ref l_U1933._fU396 );
    sub_171473( 7, ref l_U1933._fU316 );
    sub_160791( ref l_U1933._fU384 );
    return;
}

void sub_171473(int iParam0, unknown uParam1)
{
    int I;
    int J;

    if (((iParam0 == 20) AND (NOT sub_32898())) || (iParam0 == -3))
    {
        sub_161220( uParam1 );
        return;
    }
    else
    {
        for ( J = 0; J < 7; J++ )
        {
            if (l_U566[J]._fU92 == iParam0)
            {
                for ( I = 0; I < (uParam1^); I++ )
                {
                    l_U566[J]._fU24[I] = (uParam1^)[I];
                }
                return;
            }
        }
    }
    return;
}

void sub_171800(unknown uParam0)
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
    GET_INTERIOR_FROM_CHAR( sub_5337(), ref iVar16 );
    if (iVar16 == nil)
    {
        if ((GET_CLOSEST_CAR_NODE_WITH_HEADING( Result._fU0, Result._fU4, Result._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8, ref fVar15 )) AND (sub_171974( Result, uVar8, 60.00000000 )))
        {
            Result = {uVar8};
            uVar11._fU8 = fVar15;
            Result._fU8 += 2.00000000;
            uVar11._fU0 = sub_172101( 0.00000000, 15.00000000 );
            uVar11._fU4 = 0.00000000;
            uVar11._fU8 += sub_172101( -20.00000000, 20.00000000 );
            fVar14 = 65.00000000;
        }
        else if ((GET_CLOSEST_NETWORK_RESTART_NODE( Result, ref uVar8, ref fVar15 )) AND (sub_171974( Result, uVar8, 60.00000000 )))
        {
            Result = {uVar8};
            uVar11._fU8 = fVar15;
            Result._fU8 += 2.00000000;
            uVar11._fU0 = sub_172101( 0.00000000, 15.00000000 );
            uVar11._fU4 = 0.00000000;
            uVar11._fU8 += sub_172101( -20.00000000, 20.00000000 );
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
        GET_KEY_FOR_CHAR_IN_ROOM( sub_5337(), ref iVar3 );
        if (iVar3 == 0)
        {
            CLEAR_ROOM_FOR_VIEWPORT( sub_172427() );
        }
        else
        {
            SET_ROOM_FOR_VIEWPORT_BY_KEY( sub_172427(), iVar3 );
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
    SET_CAM_ROT( (uParam0^), uVar11._fU0, uVar11._fU4, sub_172647( uVar11._fU8 ) );
    SET_CAM_FOV( (uParam0^), fVar14 );
    SET_CAM_FAR_CLIP( (uParam0^), 2000.00000000 );
    SET_CAM_ACTIVE( (uParam0^), 1 );
    SET_CAM_PROPAGATE( (uParam0^), 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    return Result;
}

int sub_171974(vector vParam0, vector vParam3, float fParam6)
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

void sub_172101(unknown uParam0, unknown Result)
{
    GENERATE_RANDOM_FLOAT_IN_RANGE( uParam0, Result, ref Result );
    return Result;
}

void sub_172427()
{
    unknown Result;

    GET_GAME_VIEWPORT_ID( ref Result );
    return Result;
}

void sub_172647(float Result)
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

void sub_172821()
{
    ENABLE_FRONTEND_RADIO();
    MUTE_POSITIONED_RADIO( 0 );
    l_U890 = -1;
    return;
}

int sub_173010(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3)
{
    LOAD_ALL_PATH_NODES( 1 );
    if ((uParam0^) == 0)
    {
        if (iParam1 > 0)
        {
            if (LOAD_ALL_PATH_NODES( 1 ))
            {
                if (l_U1323)
                {
                    GET_SPAWN_COORDINATES_FOR_CAR_NODE( iParam1, sub_11438( -1, 0 ), uParam2, uParam3 );
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

void sub_173661()
{
    NETWORK_SET_TALKER_FOCUS( -1 );
    sub_173680( 31, 0 );
    return;
}

void sub_173680(unknown uParam0, unknown uParam1)
{
    g_U18._fU636 = uParam0;
    g_U18._fU632 = uParam1;
    return;
}

void sub_173724(unknown uParam0)
{
    int I;
    unknown[16] uVar4;

    array(ref uVar4, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar4[I] = l_U3400[I]._fU8;
    }
    return sub_173801( 7, ref uVar4, ref l_U1933._fU868, l_U1933._fU752, uParam0, 0, 0, 0 );
}

int sub_173801(int iParam0, unknown uParam1, unknown uParam2, int iParam3, boolean bParam4, int iParam5, boolean bParam6, unknown uParam7)
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
    sub_26947();
    if (IS_PAUSE_MENU_ACTIVE())
    {
        DEACTIVATE_FRONTEND();
    }
    DISABLE_PAUSE_MENU( 1 );
    HIDE_HUD_AND_RADAR_THIS_FRAME();
    CLEAR_PRINTS();
    if (l_U869)
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
            if (sub_12847())
            {
                if ((GET_PLAYER_TEAM( sub_5012() )) == -1)
                {
                    SET_PLAYER_TEAM( sub_5012(), sub_42234() );
                }
            }
            else if (sub_12802())
            {
                if ((GET_PLAYER_TEAM( sub_5012() )) == -1)
                {
                    SET_PLAYER_TEAM( sub_5012(), sub_8534( 2 ) );
                }
                else if (sub_12944() < 2)
                {
                    if ((sub_33175( GET_PLAYER_TEAM( sub_5012() ) )) > 1)
                    {
                        if (sub_42840( GET_PLAYER_ID() ))
                        {
                            SET_PLAYER_TEAM( sub_5012(), sub_8534( 2 ) );
                        }
                    }
                }
            }
            else if (sub_10946())
            {
                if ((GET_PLAYER_TEAM( sub_5012() )) != 0)
                {
                    SET_PLAYER_TEAM( sub_5012(), 0 );
                }
            }
            else if ((GET_PLAYER_TEAM( sub_5012() )) != -1)
            {
                SET_PLAYER_TEAM( sub_5012(), -1 );
            };;;;
        }
        if (sub_2238())
        {
            sub_26736( uParam1, uParam2 );
            sub_2744();
        }
    }
    bVar38 = false;
    if (iParam3 != 0)
    {
        sub_29570( iParam3, 1 );
        bVar38 = true;
    }
    else if ((uParam2^) != 0)
    {
        if (NOT l_U1270)
        {
            sub_29570( (uParam2^), 0 );
            GET_NETWORK_TIMER( ref iVar19 );
            bVar38 = true;
            if ((uParam2^) < (iVar19 - 10000))
            {
                l_U1270 = 1;
                return 1;
            }
        }
    }
    else
    {
        l_U1185 = 10000;
    }
    if (l_U1203)
    {
        if (l_U1269)
        {
            SET_LOBBY_MUTE_OVERRIDE( 0 );
            l_U1269 = 0;
        }
        if (sub_43505())
        {
            l_U1203 = 0;
        }
        sub_43186();
        return 0;
    }
    if (((sub_32898()) || (sub_10946())) || (sub_3700() == 10))
    {
        if ((bParam4) || (l_U870))
        {
            if (sub_174455())
            {
                sub_174482();
            }
            l_U869 = 0;
        }
        else if (sub_175052())
        {
            if (l_U869)
            {
                l_U1268 = -1;
            }
            else if (l_U1268 == 0)
            {
                GET_NETWORK_TIMER( ref l_U1268 );
            }
            else if (l_U1268 != -1)
            {
                GET_NETWORK_TIMER( ref iVar19 );
                if ((l_U1268 < (iVar19 - 6000)) AND (NOT IS_SCREEN_FADING()))
                {
                    l_U1268 = -1;
                    l_U869 = 1;
                }
            };;;
            if ((sub_3700() == 7) || (sub_3700() == 6))
            {
                sub_175917( 2, l_U869 );
            }
            else
            {
                sub_175917( 1, l_U869 );
            }
            if (l_U869)
            {
                sub_179415( 1 );
                INIT_FRONTEND_HELPER_TEXT();
                DRAW_FRONTEND_HELPER_TEXT( "BACK", "INPUT_F_CANCEL", 0 );
                if (sub_179786())
                {
                    DRAW_FRONTEND_HELPER_TEXT( "CAMERA", "PAD_BACK", 0 );
                    DRAW_FRONTEND_HELPER_TEXT( "SELECT_PLAYER", "PAD_LSTICK_LR", 1 );
                    if (l_U890 < 3)
                    {
                        DRAW_FRONTEND_HELPER_TEXT( "SPEC_RADIO", "PAD_DPAD_LR", 0 );
                        sub_179968();
                    }
                    sub_180283();
                }
                if (sub_30574())
                {
                    l_U869 = 0;
                }
                return 0;
            }
        }
        else
        {
            l_U869 = 0;
        }
    }
    if (IS_HELP_MESSAGE_BEING_DISPLAYED())
    {
        CLEAR_HELP();
    }
    if (l_U867)
    {
        if (l_U1269)
        {
            SET_LOBBY_MUTE_OVERRIDE( 0 );
            l_U1269 = 0;
        }
        if (sub_30574())
        {
            l_U867 = 0;
        }
        else if (sub_31231())
        {
            if (NOT NETWORK_IS_OPERATION_PENDING())
            {
                UNPAUSE_GAME();
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    sub_25496( 0 );
                }
                sub_41139();
            }
        }
        if (l_U867)
        {
            SET_WIDESCREEN_FORMAT( 0 );
            DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
            SET_WIDESCREEN_FORMAT( 1 );
            sub_29606( 0, sub_35769(), sub_41284(), 0, 0, 0, 0, 0, 255 );
            GET_HUD_COLOUR( 49, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
            if (bParam4)
            {
                sub_35829( "WANT_TO_LEAVE", sub_48401( 106 ), sub_48434( 106 ), sub_48401( 107 ), sub_48434( 107 ), uVar15, uVar16, uVar17, 255, 1 );
            }
            else if (((sub_26564()) AND (sub_32898())) || (NOT sub_32898()))
            {
                sub_35829( "WANTTOLEAVEIG", sub_48401( 106 ), sub_48434( 106 ), sub_48401( 107 ), sub_48434( 107 ), uVar15, uVar16, uVar17, 255, 1 );
            }
            else
            {
                sub_35829( "WANTTOLEAVERACE", sub_48401( 106 ), sub_48434( 106 ), sub_48401( 107 ), sub_48434( 107 ), uVar15, uVar16, uVar17, 255, 1 );
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
            sub_43186();
            return 0;
        }
    }
    if (NOT l_U1269)
    {
        SET_LOBBY_MUTE_OVERRIDE( 1 );
        l_U1269 = 1;
    }
    if (sub_26564())
    {
        if (((sub_181799() == 1) || ((sub_181947() == 1) AND ((iParam0 == 7) || (l_U865)))) || ((sub_4202( GET_PLAYER_ID() )) AND (sub_4641() == 1)))
        {
            sub_179415( 0 );
        }
        else
        {
            sub_179415( 1 );
        }
    }
    else
    {
        sub_179415( 1 );
    }
    sub_43186();
    SET_WIDESCREEN_FORMAT( 1 );
    if ((iParam0 == 7) || (l_U865))
    {
        if (sub_182312())
        {
            bVar20 = true;
        }
        else
        {
            bVar20 = false;
        }
    }
    else if (sub_182439())
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
        if ((sub_181799() == 1) || ((sub_4202( GET_PLAYER_ID() )) AND (sub_4641() == 1)))
        {
            sub_29606( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
            GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
            sub_35829( "LAST_PLAYER_IN", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
            if ((sub_26564()) AND (N_604003528()))
            {
                SET_WIDESCREEN_FORMAT( 2 );
                sub_29606( 0, 0.00000000, sub_41284(), 0, 0, 0, 0, 0, 255 );
                GET_HUD_COLOUR( 56, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                if (GET_IS_WIDESCREEN())
                {
                    sub_35829( "NOT_COUNT_RANK", sub_35769() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, uVar15, uVar16, uVar17, 255, 2 );
                }
                else
                {
                    sub_35829( "NOT_COUNT_RANK", sub_35769() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, uVar15, uVar16, uVar17, 255, 2 );
                }
                SET_WIDESCREEN_FORMAT( 1 );
            }
        }
        else if (NOT (sub_4202( GET_PLAYER_ID() )))
        {
            if (iParam0 == 8)
            {
                sub_29606( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                if (bParam6)
                {
                    GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                    sub_35829( "MISSION_PASSED", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                }
                else
                {
                    GET_HUD_COLOUR( 4, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                    sub_35829( "MISSION_FAILED", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                }
            }
            else
            {
                sub_29606( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                if (bVar20)
                {
                    if ((iParam0 == 7) || (l_U865))
                    {
                        if (sub_181947() == 1)
                        {
                            GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                            sub_35829( "LAST_TEAM_IN", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                            if ((sub_26564()) AND (N_604003528()))
                            {
                                SET_WIDESCREEN_FORMAT( 2 );
                                sub_29606( 0, 0.00000000, sub_41284(), 0, 0, 0, 0, 0, 255 );
                                GET_HUD_COLOUR( 56, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                                if (GET_IS_WIDESCREEN())
                                {
                                    sub_35829( "NOT_COUNT_RANK", sub_35769() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, uVar15, uVar16, uVar17, 255, 2 );
                                }
                                else
                                {
                                    sub_35829( "NOT_COUNT_RANK", sub_35769() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, uVar15, uVar16, uVar17, 255, 2 );
                                }
                            }
                            SET_WIDESCREEN_FORMAT( 1 );
                        }
                        else
                        {
                            GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                            sub_35829( "EQUAL", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                        }
                    }
                    else
                    {
                        GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                        sub_35829( "EQUAL", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                    }
                }
                else if ((iParam0 == 7) || (l_U865))
                {
                    if (NOT l_U868)
                    {
                        if (sub_152307( l_U934[0] ))
                        {
                            GET_TEAM_RGB_COLOUR( GET_PLAYER_TEAM( sub_5012() ), ref uVar15, ref uVar16, ref uVar17 );
                            if ((sub_183767( GET_PLAYER_TEAM( sub_5012() ) )) == 1)
                            {
                                StrCopy( ref cVar30, GET_STRING_FROM_TEXT_FILE( sub_163173( GET_PLAYER_TEAM( sub_5012() ), 1 ) ), 32 );
                                ConcatString(ref cVar30, " ", 32);
                                ConcatString(ref cVar30, GET_STRING_FROM_TEXT_FILE( "JOINTWINNER" ), 32);
                                sub_44184( 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, ref cVar30 );
                            }
                            else if (sub_152307( GET_PLAYER_TEAM( sub_5012() ) ))
                            {
                                StrCopy( ref cVar30, GET_STRING_FROM_TEXT_FILE( sub_163173( GET_PLAYER_TEAM( sub_5012() ), 1 ) ), 32 );
                                ConcatString(ref cVar30, " ", 32);
                                ConcatString(ref cVar30, GET_STRING_FROM_TEXT_FILE( "JOINT" ), 32);
                                ConcatString(ref cVar30, " ", 32);
                                ConcatString(ref cVar30, sub_183767( GET_PLAYER_TEAM( sub_5012() ) ), 32);
                                ConcatString(ref cVar30, sub_180609( sub_183767( GET_PLAYER_TEAM( sub_5012() ) ), 1 ), 32);
                                sub_44184( 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, ref cVar30 );
                            }
                            else
                            {
                                StrCopy( ref cVar30, GET_STRING_FROM_TEXT_FILE( sub_163173( GET_PLAYER_TEAM( sub_5012() ), 1 ) ), 32 );
                                ConcatString(ref cVar30, " ", 32);
                                ConcatString(ref cVar30, sub_183767( GET_PLAYER_TEAM( sub_5012() ) ), 32);
                                ConcatString(ref cVar30, sub_180609( sub_183767( GET_PLAYER_TEAM( sub_5012() ) ), 1 ), 32);
                                ConcatString(ref cVar30, " ", 32);
                                ConcatString(ref cVar30, GET_STRING_FROM_TEXT_FILE( "PLACE" ), 32);
                                sub_44184( 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, ref cVar30 );
                            }
                        }
                        else
                        {
                            GET_TEAM_RGB_COLOUR( l_U934[0], ref uVar15, ref uVar16, ref uVar17 );
                            sub_184473( "TEAMNAME_WINS", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, sub_163173( l_U934[0], 0 ) );
                        }
                    }
                }
                else if (sub_4117( GET_PLAYER_ID() ))
                {
                    if ((sub_4071( GET_PLAYER_ID() )) == 1)
                    {
                        GET_HUD_COLOUR( 16, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                        sub_35829( "JOINTWINNER", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                    }
                    else
                    {
                        GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                        StrCopy( ref cVar30, GET_STRING_FROM_TEXT_FILE( "JOINT" ), 32 );
                        ConcatString(ref cVar30, " ", 32);
                        ConcatString(ref cVar30, sub_4071( GET_PLAYER_ID() ), 32);
                        ConcatString(ref cVar30, sub_180609( sub_4071( GET_PLAYER_ID() ), 1 ), 32);
                        sub_44184( 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, ref cVar30 );
                    }
                }
                else if ((sub_4071( GET_PLAYER_ID() )) == 1)
                {
                    GET_HUD_COLOUR( 16, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                    sub_35829( "WINNERS", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                }
                else
                {
                    GET_HUD_COLOUR( 4, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                    string(ref cVar30, sub_4071( GET_PLAYER_ID() ), 32);
                    ConcatString(ref cVar30, sub_180609( sub_4071( GET_PLAYER_ID() ), 1 ), 32);
                    ConcatString(ref cVar30, " ", 32);
                    ConcatString(ref cVar30, GET_STRING_FROM_TEXT_FILE( "PLACE" ), 32);
                    sub_44184( 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, ref cVar30 );
                };;;;
            }
        }
    }
    else if (NOT sub_10946())
    {
        sub_29606( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
        GET_HUD_COLOUR( 4, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
        sub_29903( "ROUND_NUM", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, iParam5 );
    }
    for ( I = 0; I < 16; I++ )
    {
        if (sub_4150( l_U566[0]._fU24[I] ))
        {
            iVar13++;
        }
    }
    if ((iParam0 == 7) || (l_U865))
    {
        for ( J = 0; J < 8; J++ )
        {
            if ((sub_62982( l_U934[J] )) > 0)
            {
                iVar13++;
            }
        }
    }
    if (iVar13 > 10)
    {
        sub_32330( ref l_U989, (iVar13 - 10) + 1, 0 );
        bVar21 = true;
        iVar14 = iVar13;
        iVar13 = 10;
    }
    fVar28 = 0.00500000 * 2;
    for ( iVar11 = 0; iVar11 < 7; iVar11++ )
    {
        if (l_U566[iVar11]._fU16 != 0)
        {
            fVar28 += sub_60169( l_U566[iVar11]._fU16 );
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
        if (l_U566[iVar11]._fU16 != 0)
        {
            if (l_U566[iVar11]._fU16 == 1)
            {
                if (GET_IS_WIDESCREEN())
                {
                    fVar24 = 0.01050000;
                }
                else
                {
                    fVar24 = 0.01100000;
                }
                DRAW_SPRITE( l_U503[l_U566[iVar11]._fU20], fVar26 + fVar24, fVar27 + -0.02370000, (fVar22 / 4) * 3, fVar22, 0.00000000, 255, 255, 255, 255 );
                fVar26 += sub_60169( 1 );
            }
            else
            {
                fVar26 += (sub_60169( l_U566[iVar11]._fU16 )) * 0.50000000;
                DRAW_SPRITE( l_U503[l_U566[iVar11]._fU20], fVar26, fVar27 + -0.02370000, (fVar22 / 4) * 3, fVar22, 0.00000000, 255, 255, 255, 255 );
                fVar26 += (sub_60169( l_U566[iVar11]._fU16 )) * 0.50000000;
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
        if ((iParam0 == 7) || (l_U865))
        {
            sub_166204( ref iVar39, fVar26 + 0.00500000, fVar27 + 0.00400000, 0.36000000, 0.52500000, 0.04000000, 0.36000000, 0.52500000, 0.04000000, iParam0, 10, l_U989, -1 );
        }
        else
        {
            sub_167653( ref iVar39, fVar26 + 0.00500000, fVar27 + 0.00400000, 0.36000000, 0.52500000, 0.04000000, iParam0, 10, l_U989, -1 );
        }
    }
    else if ((iParam0 == 7) || (l_U865))
    {
        sub_166204( ref iVar39, fVar26 + 0.00500000, fVar27 + 0.00600000, 0.31300000, 0.47000000, 0.04000000, 0.31300000, 0.47000000, 0.04000000, iParam0, 10, l_U989, -1 );
    }
    else
    {
        sub_167653( ref iVar39, fVar26 + 0.00500000, fVar27 + 0.00600000, 0.31300000, 0.47000000, 0.04000000, iParam0, 10, l_U989, -1 );
    }
    if ((bParam4) AND (iParam5 == 0))
    {
        if ((sub_26564()) || (NOT N_604003528()))
        {
            if (NOT bVar38)
            {
                SET_WIDESCREEN_FORMAT( 2 );
                GET_FRONTEND_DESIGN_VALUE( 23, ref fVar24, ref fVar25 );
                GET_FRONTEND_DESIGN_VALUE( 24, ref fVar22, ref fVar23 );
                sub_29606( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                if ((l_U1161[GET_PLAYER_ID()] > -1) AND (l_U1161[GET_PLAYER_ID()] < (GET_PLAYER_RANK_LEVEL_DURING_MP( GET_PLAYER_ID() ))))
                {
                    sub_35829( "RANK_INCREASED", fVar24, fVar25, fVar22, fVar23, 255, 255, 255, 255, 2 );
                    sub_29606( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                    sub_35829( "NEWCLOTHESAVAIL", fVar24, fVar25 + 0.04050000, fVar22, fVar23, 255, 255, 255, 255, 2 );
                }
                else if ((GET_PLAYER_RANK_LEVEL_DURING_MP( GET_PLAYER_ID() )) < 10)
                {
                    sub_29903( "CASH_LEVELUP", fVar24, fVar25, fVar22, fVar23, 255, 255, 255, 255, 2, GET_LEFT_PLAYER_CASH_TO_REACH_LEVEL( (GET_PLAYER_RANK_LEVEL_DURING_MP( GET_PLAYER_ID() )) + 1 ) );
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
        if (l_U989 == 0)
        {
            DRAW_SPRITE( l_U503[1], fVar26 + fVar22, (fVar27 + ((TO_FLOAT( iVar13 )) * 0.04000000)) + 0.02300000, fVar24, fVar25, 180.00000000, 255, 255, 255, 255 );
        }
        else if (l_U989 == (iVar14 - 10))
        {
            DRAW_SPRITE( l_U503[1], fVar26 + fVar22, (fVar27 + ((TO_FLOAT( iVar13 )) * 0.04000000)) + 0.02300000, fVar24, fVar25, 0.00000000, 255, 255, 255, 255 );
        }
        else
        {
            DRAW_SPRITE( l_U503[2], fVar26 + fVar22, (fVar27 + ((TO_FLOAT( iVar13 )) * 0.04000000)) + 0.02300000, fVar24, fVar25, 0.00000000, 255, 255, 255, 255 );
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
        if (sub_31231())
        {
            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_READY" );
            l_U1203 = 0;
            l_U989 = 0;
            return 1;
        }
        else if (sub_30574())
        {
            l_U867 = 1;
        }
        else if (((sub_31989()) AND (NETWORK_GET_NUM_PLAYERS_MET() > 0)) AND (N_604003528()))
        {
            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
            l_U1203 = 1;
        };;;
    }
    else
    {
        INIT_FRONTEND_HELPER_TEXT();
        if (NOT l_U870)
        {
            DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
        }
        if (NOT IS_SCREEN_FADING())
        {
            if ((((((sub_32898()) || (sub_10946())) || (sub_3700() == 10)) AND (NOT l_U870)) AND (NOT IS_SCREEN_FADING())) AND (sub_175052()))
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
        if ((sub_30574()) AND (NOT l_U870))
        {
            l_U867 = 1;
        }
        else if (((((sub_31231()) AND (((sub_32898()) || (sub_10946())) || (sub_3700() == 10))) AND (NOT l_U870)) AND (NOT IS_SCREEN_FADING())) AND (sub_175052()))
        {
            l_U869 = 1;
        }
        else if ((((sub_31989()) AND (NETWORK_GET_NUM_PLAYERS_MET() > 0)) AND (N_604003528())) AND (NOT IS_SCREEN_FADING()))
        {
            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
            l_U1203 = 1;
        };;;
    }
    l_U870 = 0;
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

void sub_174455()
{
    return l_U1210;
}

void sub_174482()
{
    sub_174493( 0, 1 );
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    sub_174832();
    sub_174877();
    sub_174960();
    l_U1209 = 0;
    l_U1208 = 0;
    l_U1210 = 0;
    l_U1221 = 0;
    l_U1224 = 18;
    sub_28595( 0 );
    return;
}

void sub_174493(boolean bParam0, boolean bParam1)
{
    if (bParam1)
    {
        if (IS_IN_SPECTATOR_MODE())
        {
            SET_IN_SPECTATOR_MODE( 0 );
            if (NOT (DOES_CAM_EXIST( l_U1246 )))
            {
                CREATE_CAM( 6, ref l_U1246 );
            }
            if (DOES_CAM_EXIST( l_U1246 ))
            {
                GET_GAME_CAM( ref l_U1247 );
                GET_CAM_POS( l_U1247, ref l_U1235._fU0, ref l_U1235._fU4, ref l_U1235._fU8 );
                GET_CAM_ROT( l_U1247, ref l_U1238._fU0, ref l_U1238._fU4, ref l_U1238._fU8 );
                GET_CAM_FOV( l_U1247, ref l_U1241 );
                SET_CAM_POS( l_U1246, l_U1235._fU0, l_U1235._fU4, l_U1235._fU8 );
                SET_CAM_ROT( l_U1246, l_U1238._fU0, l_U1238._fU4, l_U1238._fU8 );
                SET_CAM_FOV( l_U1246, l_U1241 );
                SET_CAM_ACTIVE( l_U1246, 1 );
                SET_CAM_PROPAGATE( l_U1246, 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            }
        }
        l_U1209 = 0;
    }
    SET_CAMERA_CONTROLS_DISABLED_WITH_PLAYER_CONTROLS( 1 );
    ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
    if (bParam0)
    {
        sub_28595( 0 );
    }
    return;
}

void sub_174832()
{
    SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY( 0 );
    if (IS_MOBILE_PHONE_RADIO_ACTIVE())
    {
        SET_MOBILE_PHONE_RADIO_STATE( 0 );
    }
    return;
}

void sub_174877()
{
    l_U1211 = 0;
    l_U1212 = 1;
    l_U1213 = 0;
    l_U1215 = 0;
    l_U1216 = 0;
    l_U1217 = 0;
    l_U1218 = 0;
    l_U1219 = 0;
    l_U1220 = 0;
    l_U1222 = -1;
    l_U1223 = -1;
    return;
}

void sub_174960()
{
    l_U1214 = 0;
    SET_FOLLOW_VEHICLE_CAM_SUBMODE( -1 );
    l_U1248 = -1;
    return;
}

int sub_175052()
{
    if (NOT (l_U1209 == 4))
    {
        if (NOT sub_175074())
        {
            return 1;
        }
        else if (NOT (l_U1208 == 0))
        {
            sub_174493( 0, 1 );
            l_U1209 = 4;
        }
    }
    else if (l_U1216)
    {
        sub_175354();
    }
    else if (l_U1221)
    {
        if (NOT sub_175074())
        {
            l_U1208 = 0;
            l_U1221 = 0;
            sub_174877();
            if (IS_IN_SPECTATOR_MODE())
            {
                SET_IN_SPECTATOR_MODE( 0 );
            }
            l_U1209 = 0;
        }
    };;;
    return 0;
}

int sub_175074()
{
    int I;

    for ( I = 0; I <= 15; I++ )
    {
        if (sub_175097( I ))
        {
            return 0;
        }
    }
    return 1;
}

int sub_175097(int iParam0)
{
    if ((iParam0 >= 0) AND (iParam0 < 16))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( iParam0 ))
        {
            if (NOT (iParam0 == GET_PLAYER_ID()))
            {
                if ((NOT (IS_CHAR_INJURED( sub_8050( iParam0 ) ))) || ((iParam0 == l_U1222) AND (NOT l_U1220)))
                {
                    if ((NOT l_U952[iParam0]) AND (NOT l_U969[iParam0]))
                    {
                        if ((IS_PLAYER_SCRIPT_CONTROL_ON( CONVERT_INT_TO_PLAYERINDEX( iParam0 ) )) || ((IS_CHAR_IN_ANY_CAR( sub_8050( iParam0 ) )) AND (l_U1208 == 2)))
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

void sub_175354()
{
    if (NOT l_U1217)
    {
        if (NOT l_U1218)
        {
            if (DOES_CAM_EXIST( l_U1246 ))
            {
                if ((NOT IS_SCREEN_FADED_OUT()) AND (NOT IS_SCREEN_FADING()))
                {
                    sub_25496( 200 );
                }
                else if (NOT (IS_CHAR_DEAD( sub_5337() )))
                {
                    SET_CHAR_COORDINATES( sub_5337(), l_U1242._fU0, l_U1242._fU4, l_U1242._fU8 );
                    if (DOES_CAM_EXIST( l_U1246 ))
                    {
                        DESTROY_CAM( l_U1246 );
                    }
                    ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 0 );
                    if (IS_NETWORK_GAME_RUNNING())
                    {
                        GET_NETWORK_TIMER( ref l_U1229 );
                    }
                    l_U1228 = l_U1229 + 5000;
                    l_U1217 = 1;
                }
            }
            else
            {
                l_U1218 = 1;
            }
        }
    }
    else if (IS_NETWORK_GAME_RUNNING())
    {
        GET_NETWORK_TIMER( ref l_U1229 );
    }
    if (l_U1228 < l_U1229)
    {
        ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
        sub_28595( 200 );
        l_U1217 = 0;
        l_U1218 = 1;
    }
    if (l_U1218)
    {
        if ((NOT sub_175074()) AND (IS_SCREEN_FADED_IN()))
        {
            l_U1209 = 0;
            sub_174877();
        }
    }
    return;
}

void sub_175917(unknown uParam0, boolean bParam1)
{
    float fVar4;
    unknown uVar5;

    if (IS_NETWORK_GAME_RUNNING())
    {
        GET_NETWORK_TIMER( ref l_U1229 );
    }
    if (NOT l_U1210)
    {
        l_U1210 = 1;
    }
    if (l_U1208 == 0)
    {
        if (DOES_CAM_EXIST( l_U1246 ))
        {
            DESTROY_CAM( l_U1246 );
        }
        l_U1208 = uParam0;
    }
    if (NOT l_U1214)
    {
        GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref l_U1248 );
        if ((NOT (l_U1248 == -1)) AND (NOT (l_U1248 == 0)))
        {
            l_U1214 = 1;
            SET_FOLLOW_VEHICLE_CAM_SUBMODE( 5 );
        }
    }
    if (l_U1213)
    {
        sub_176082();
        if (NOT bParam1)
        {
            sub_174493( 1, 0 );
            l_U1213 = 0;
        }
    }
    else if (bParam1)
    {
        l_U1213 = 1;
        if (IS_IN_SPECTATOR_MODE())
        {
            l_U1209 = 2;
            sub_176403();
        }
        else if (l_U1212)
        {
            sub_176481();
            l_U1223 = -1;
            if (NOT (l_U1222 == -1))
            {
                fVar4 = sub_176535( sub_5337(), sub_8050( l_U1222 ) );
                if ((((fVar4 < 30) AND (NOT (fVar4 == -1))) AND (NOT IS_SCREEN_FADING())) AND (NOT (IS_CHAR_DEAD( sub_5337() ))))
                {
                    sub_176403();
                    if (NOT sub_176812())
                    {
                        ;
                    }
                    sub_176999();
                    l_U1209 = 2;
                    l_U1212 = 0;
                }
            }
            else
            {
                l_U1209 = 4;
            }
        }
    }
    switch (l_U1209)
    {
        case 0:
        if (l_U1213)
        {
            if ((IS_SCREEN_FADED_IN()) || (IS_SCREEN_FADED_OUT()))
            {
                if (IS_SCREEN_FADED_IN())
                {
                    sub_25496( 200 );
                }
                l_U1211 = 0;
                l_U1209 = 1;
            }
        }
        break;
        case 1:
        if (IS_SCREEN_FADED_OUT())
        {
            if (NOT l_U1211)
            {
                if (NOT l_U1212)
                {
                    if (NOT (l_U1223 == -1))
                    {
                        if (sub_175097( l_U1223 ))
                        {
                            l_U1222 = l_U1223;
                            l_U1223 = -1;
                        }
                        else
                        {
                            sub_176481();
                        }
                    }
                    else if (NOT (sub_175097( l_U1222 )))
                    {
                        sub_176481();
                    }
                }
                else if (NOT (sub_175097( l_U1223 )))
                {
                    sub_176481();
                }
                if (NOT sub_176812())
                {
                    ;
                }
                sub_176403();
                if (l_U1212)
                {
                    sub_176999();
                    l_U1212 = 0;
                }
                ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 0 );
                l_U1211 = 1;
                l_U1228 = l_U1229 + 5000;
            }
            else if (NOT sub_177470())
            {
                if (l_U1213)
                {
                    l_U1222 = sub_177523();
                    if (NOT sub_176812())
                    {
                        ;
                    }
                    l_U1228 = l_U1229 + 5000;
                }
                else
                {
                    sub_174493( 1, 1 );
                }
            }
            else
            {
                sub_178072();
                if (((GET_NUM_STREAMING_REQUESTS() < 5) AND (NOT IS_STREAMING_PRIORITY_REQUESTS())) || (l_U1228 < l_U1229))
                {
                    if (NOT sub_176812())
                    {
                        ;
                    }
                    ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
                    l_U1209 = 2;
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    sub_28595( 200 );
                }
                else if ((NOT IS_SCREEN_FADING()) AND (l_U1213))
                {
                    sub_178072();
                    sub_178383( 1 );
                }
            }
        }
        break;
        case 2:
        sub_176812();
        if (NOT sub_177470())
        {
            if (l_U1213)
            {
                l_U1223 = sub_177523();
                if (l_U1223 != -1)
                {
                    if ((sub_176535( sub_5337(), sub_8050( l_U1223 ) )) < 30)
                    {
                        l_U1222 = l_U1223;
                        if (NOT sub_176812())
                        {
                            ;
                        }
                        l_U1223 = -1;
                    }
                    else
                    {
                        sub_174493( 0, 1 );
                    }
                }
            }
            else
            {
                sub_174493( 1, 1 );
            }
        }
        else if (IS_NETWORK_PLAYER_ACTIVE( l_U1222 ))
        {
            if (IS_CHAR_INJURED( sub_8050( l_U1222 ) ))
            {
                if (NOT l_U1219)
                {
                    l_U1230 = l_U1229 + 6000;
                    l_U1219 = 1;
                }
                else if (l_U1230 < l_U1229)
                {
                    l_U1219 = 0;
                    l_U1220 = 1;
                }
            }
        }
        sub_178072();
        if (l_U1213)
        {
            if (NOT IS_SCREEN_FADING())
            {
                sub_178383( 0 );
            }
        }
        break;
    }
    return;
}

void sub_176082()
{
    boolean bVar2;

    bVar2 = false;
    if (IS_BUTTON_JUST_PRESSED( 0, 11 ))
    {
        l_U1224++;
        if (l_U1224 > 18)
        {
            l_U1224 = 0;
        }
        bVar2 = true;
    }
    if (IS_BUTTON_JUST_PRESSED( 0, 10 ))
    {
        l_U1224--;
        if (l_U1224 < 0)
        {
            l_U1224 = 18;
        }
        RETUNE_RADIO_TO_STATION_INDEX( l_U1224 );
        bVar2 = true;
    }
    if (l_U890 < 3)
    {
        if (bVar2)
        {
            if (l_U1224 != 18)
            {
                if (NOT IS_MOBILE_PHONE_RADIO_ACTIVE())
                {
                    SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY( 1 );
                    SET_MOBILE_PHONE_RADIO_STATE( 1 );
                }
                RETUNE_RADIO_TO_STATION_INDEX( l_U1224 );
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

void sub_176403()
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

int sub_176481()
{
    int I;
    int iVar3;
    float fVar4;
    float fVar5;

    iVar3 = -1;
    fVar4 = 10000;
    for ( I = 0; I <= 15; I++ )
    {
        if (sub_175097( I ))
        {
            fVar5 = sub_176535( sub_5337(), sub_8050( I ) );
            if ((fVar5 < fVar4) AND (NOT (fVar5 == -1)))
            {
                iVar3 = I;
                fVar4 = fVar5;
            }
        }
    }
    if (NOT (iVar3 == -1))
    {
        l_U1222 = iVar3;
        return 1;
    }
    return 0;
}

float sub_176535(unknown uParam0, unknown uParam1)
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

int sub_176812()
{
    if ((l_U1222 >= 0) AND (l_U1222 < 16))
    {
        if ((l_U1222 < 16) AND (l_U1222 != GET_PLAYER_ID()))
        {
            if (IS_NETWORK_PLAYER_ACTIVE( l_U1222 ))
            {
                if (DOES_CHAR_EXIST( sub_8050( l_U1222 ) ))
                {
                    if (NOT (IS_CHAR_INJURED( sub_8050( l_U1222 ) )))
                    {
                        l_U1219 = 0;
                        l_U1220 = 0;
                        l_U1248 = 1;
                        GET_GAME_CAM( ref l_U1245 );
                        SET_CAM_TARGET_PED( l_U1245, sub_8050( l_U1222 ) );
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_176999()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_CHAR_DEAD( sub_5337() ))
    {
        N_312012851( sub_5337(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        REQUEST_COLLISION_AT_POSN( uVar2._fU0, uVar2._fU4, uVar2._fU8 );
        RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), uVar2, 0 );
    }
    SET_CHAR_COLLISION( sub_5337(), 0 );
    SET_CHAR_VISIBLE( sub_5337(), 0 );
    FREEZE_CHAR_POSITION( sub_5337(), 1 );
    return;
}

int sub_177470()
{
    unknown uVar2;

    if (sub_175097( l_U1222 ))
    {
        return 1;
    }
    return 0;
}

int sub_177523()
{
    int Result;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    boolean bVar7;

    if (NOT (l_U1208 == 2))
    {
        for ( Result = l_U1222; Result <= 15; Result++ )
        {
            if (sub_177563( Result ))
            {
                return Result;
            }
        }
        for ( Result = 0; Result <= l_U1222; Result++ )
        {
            if (sub_177563( Result ))
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
            if (l_U566[0]._fU24[Result] == l_U1222)
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
                if (sub_177563( l_U566[0]._fU24[iVar6] ))
                {
                    return l_U566[0]._fU24[iVar6];
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

int sub_177563(int iParam0)
{
    if ((iParam0 >= 0) AND (iParam0 < 16))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( iParam0 ))
        {
            if (NOT (iParam0 == GET_PLAYER_ID()))
            {
                if ((NOT (IS_CHAR_INJURED( sub_8050( iParam0 ) ))) AND (NOT (iParam0 == l_U1222)))
                {
                    if ((NOT l_U952[iParam0]) AND (NOT l_U969[iParam0]))
                    {
                        if ((IS_PLAYER_SCRIPT_CONTROL_ON( CONVERT_INT_TO_PLAYERINDEX( iParam0 ) )) || ((IS_CHAR_IN_ANY_CAR( sub_8050( iParam0 ) )) AND (l_U1208 == 2)))
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

void sub_178072()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_NETWORK_PLAYER_ACTIVE( l_U1222 ))
    {
        if (NOT (IS_CHAR_INJURED( sub_8050( l_U1222 ) )))
        {
            GET_CHAR_COORDINATES( sub_8050( l_U1222 ), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            if (NOT (IS_CHAR_DEAD( sub_5337() )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_5337() )))
                {
                    SET_CHAR_COORDINATES( sub_5337(), uVar2._fU0, uVar2._fU4, uVar2._fU8 - 10 );
                }
                else
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_5337(), uVar2._fU0, uVar2._fU4, uVar2._fU8 - 10 );
                }
            }
            SET_CHAR_COLLISION( sub_5337(), 0 );
            SET_CHAR_VISIBLE( sub_5337(), 0 );
        }
    }
    return;
}

void sub_178383(boolean bParam0)
{
    float fVar3;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref l_U1225, ref l_U1227, ref l_U1226, ref l_U1227 );
    if (l_U1215)
    {
        if ((l_U1225 < 80) AND (l_U1225 > 65456))
        {
            l_U1215 = 0;
        }
    }
    else if (l_U1225 > 80)
    {
        l_U1223 = sub_177523();
        if (NOT (l_U1223 == -1))
        {
            fVar3 = sub_176535( sub_5337(), sub_8050( l_U1223 ) );
            if (((fVar3 < 30) AND (NOT (fVar3 == -1))) || (bParam0))
            {
                l_U1222 = l_U1223;
                if (NOT sub_176812())
                {
                    ;
                }
                l_U1223 = -1;
                if (bParam0)
                {
                    l_U1228 = l_U1229 + 5000;
                }
            }
            else
            {
                sub_174493( 0, 1 );
            }
            l_U1215 = 1;
        }
    }
    else if (l_U1225 < 65456)
    {
        l_U1223 = sub_178625();
        if (NOT (l_U1223 == -1))
        {
            fVar3 = sub_176535( sub_5337(), sub_8050( l_U1223 ) );
            if (((fVar3 < 30) AND (NOT (fVar3 == -1))) || (bParam0))
            {
                l_U1222 = l_U1223;
                if (NOT sub_176812())
                {
                    ;
                }
                l_U1223 = -1;
                if (bParam0)
                {
                    l_U1228 = l_U1229 + 5000;
                }
            }
            else
            {
                sub_174493( 0, 1 );
            }
            l_U1215 = 1;
        }
    };;;
    return;
}

int sub_178625()
{
    int Result;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    boolean bVar7;

    if (NOT (l_U1208 == 2))
    {
        for ( Result = l_U1222; Result >= 0; Result += -1 )
        {
            if (sub_177563( Result ))
            {
                return Result;
            }
        }
        for ( Result = 15; Result >= l_U1222; Result += -1 )
        {
            if (sub_177563( Result ))
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
            if (l_U566[0]._fU24[Result] == l_U1222)
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
                if (sub_177563( l_U566[0]._fU24[iVar6] ))
                {
                    return l_U566[0]._fU24[iVar6];
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

void sub_179415(unknown uParam0)
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
    sub_35686( uParam0 );
    return;
}

int sub_179786()
{
    if (((l_U1213) AND (IS_IN_SPECTATOR_MODE())) AND (l_U1222 > -1))
    {
        if (sub_177470())
        {
            return 1;
        }
        return 0;
    }
    return 0;
}

void sub_179968()
{
    char[16] cVar2;
    unknown uVar6;

    SET_WIDESCREEN_FORMAT( 3 );
    DRAW_SPRITE( l_U503[0], sub_41284() - (0.01400000 / 2), l_U1234 - (0.02000000 / 2), 0.01400000, 0.02000000, 0.00000000, 255, 255, 255, 255 );
    SET_TEXT_SCALE( 0.31500000, 0.43000000 );
    sub_29606( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    StrCopy( ref cVar2, "RADIO_OPT", 16 );
    ConcatString(ref cVar2, l_U1224, 16);
    uVar6 = GET_STRING_WIDTH( ref cVar2 );
    sub_35829( ref cVar2, (sub_41284() - 0.01400000) - l_U1233, l_U1234 + l_U1232, 0.31500000, 0.43000000, 255, 255, 255, 255, 3 );
    DRAW_SPRITE( l_U503[0], ((sub_41284() - (0.01400000 * 1.50000000)) - uVar6) - (l_U1233 * 2), l_U1234 - (0.02000000 / 2), 0.01400000 * -1, 0.02000000, 0.00000000, 255, 255, 255, 255 );
    return;
}

void sub_180283()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    char[32] cVar7;
    unknown uVar15;

    SET_WIDESCREEN_FORMAT( 3 );
    DRAW_SPRITE( l_U503[0], sub_41284() - (0.01400000 / 2), l_U1231 - (0.02000000 / 2), 0.01400000, 0.02000000, 0.00000000, 255, 255, 255, 255 );
    SET_TEXT_SCALE( 0.31500000, 0.43000000 );
    sub_29606( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    if (NOT (l_U1208 == 2))
    {
        StrCopy( ref cVar7, sub_180424(), 32 );
    }
    else
    {
        string(ref cVar7, sub_180492( l_U1222 ), 32);
        ConcatString(ref cVar7, sub_180609( sub_180492( l_U1222 ), 0 ), 32);
        ConcatString(ref cVar7, " : ", 32);
        ConcatString(ref cVar7, sub_180424(), 32);
    }
    SET_TEXT_USE_UNDERSCORE( 1 );
    uVar15 = GET_STRING_WIDTH_WITH_STRING( "STRING", ref cVar7 );
    sub_180859( ref uVar2, ref uVar3, ref uVar4 );
    SET_TEXT_COLOUR( uVar2, uVar3, uVar4, 255 );
    sub_44184( (sub_41284() - 0.01400000) - l_U1233, l_U1231 + l_U1232, 0.31500000, 0.43000000, uVar2, uVar3, uVar4, 255, 3, ref cVar7 );
    SET_TEXT_USE_UNDERSCORE( 0 );
    DRAW_SPRITE( l_U503[0], ((sub_41284() - (0.01400000 * 1.50000000)) - uVar15) - (l_U1233 * 2), l_U1231 - (0.02000000 / 2), 0.01400000 * -1, 0.02000000, 0.00000000, 255, 255, 255, 255 );
    return;
}

string sub_180424()
{
    if (sub_175097( l_U1222 ))
    {
        return GET_PLAYER_NAME( sub_8097( l_U1222 ) );
    }
    return "";
}

int sub_180492(int iParam0)
{
    int I;
    int iVar4;
    int Result;

    for ( I = 0; I < 16; I++ )
    {
        iVar4 = l_U566[0]._fU24[I];
        if ((IS_NETWORK_PLAYER_ACTIVE( iVar4 )) AND (NOT l_U952[iVar4]))
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

void sub_180609(int iParam0, boolean bParam1)
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

void sub_180859(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (sub_175097( l_U1222 ))
    {
        if (l_U1208 == 1)
        {
            GET_TEAM_RGB_COLOUR( GET_PLAYER_TEAM( sub_8097( l_U1222 ) ), uParam0, uParam1, uParam2 );
        }
        else
        {
            GET_PLAYER_RGB_COLOUR( sub_8097( l_U1222 ), uParam0, uParam1, uParam2 );
        }
    }
    return;
}

void sub_181799()
{
    int I;
    int Result;

    if (l_U864)
    {
        for ( I = 0; I < 16; I++ )
        {
            if ((l_U735[I]._fU4) AND (NOT l_U735[I]._fU8))
            {
                Result++;
            }
        }
        return Result;
    }
    for ( I = 0; I < 16; I++ )
    {
        if ((IS_NETWORK_PLAYER_ACTIVE( I )) AND (NOT l_U952[I]))
        {
            Result++;
        }
    }
    return Result;
}

void sub_181947()
{
    int I;
    int Result;
    int[8] iVar4;

    array(ref iVar4, 8);
    if (l_U864)
    {
        for ( I = 0; I < 16; I++ )
        {
            if ((l_U735[I]._fU4) AND (NOT l_U735[I]._fU8))
            {
                if (l_U735[I]._fU12 > -1)
                {
                    if (NOT iVar4[l_U735[I]._fU12])
                    {
                        Result++;
                        iVar4[l_U735[I]._fU12] = 1;
                    }
                }
            }
        }
        return Result;
    }
    for ( I = 0; I < 16; I++ )
    {
        if ((IS_NETWORK_PLAYER_ACTIVE( I )) AND (NOT l_U952[I]))
        {
            if ((GET_PLAYER_TEAM( sub_8097( I ) )) > -1)
            {
                if (NOT (iVar4[GET_PLAYER_TEAM( sub_8097( I ) )]))
                {
                    Result++;
                    iVar4[GET_PLAYER_TEAM( sub_8097( I ) )] = 1;
                }
            }
        }
    }
    return Result;
}

int sub_182312()
{
    int I;
    int iVar3;

    iVar3 = -1;
    for ( I = 0; I < 8; I++ )
    {
        if ((sub_62982( I )) > 0)
        {
            if (iVar3 == -1)
            {
                iVar3 = l_U943[I];
            }
            else if (iVar3 != l_U943[I])
            {
                return 0;
            }
        }
    }
    return 1;
}

int sub_182439()
{
    int I;
    int iVar3;

    iVar3 = -1;
    for ( I = 0; I < 16; I++ )
    {
        if (sub_4150( I ))
        {
            if (NOT (sub_4202( I )))
            {
                if (iVar3 == -1)
                {
                    iVar3 = l_U566[sub_4262()]._fU24[I];
                }
                else if (iVar3 != l_U566[sub_4262()]._fU24[I])
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}

int sub_183767(int iParam0)
{
    int I;
    int Result;

    if (sub_152307( iParam0 ))
    {
        for ( I = 0; I < 8; I++ )
        {
            if ((sub_62982( l_U934[I] )) > 0)
            {
                Result++;
                if (l_U943[l_U934[I]] == l_U943[iParam0])
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
            if ((sub_62982( l_U934[I] )) > 0)
            {
                Result++;
                if (l_U934[I] == iParam0)
                {
                    return Result;
                }
            }
        }
    }
    return 1;
}

void sub_184473(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_29943( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_STRING( uParam0, uParam10 );
    DISPLAY_TEXT_WITH_STRING( uParam1, uParam2, uParam0, uParam10 );
    return Result;
}

int sub_187886(int iParam0, boolean bParam1)
{
    int J;
    int iVar5;
    int I;
    int iVar7;
    int[16] iVar8;

    array(ref iVar8, 16);
    l_U870 = 1;
    if (l_U866)
    {
        if (NOT NETWORK_END_SESSION_PENDING())
        {
            l_U866 = 0;
            return 1;
        }
    }
    else if (NETWORK_START_SESSION_SUCCEEDED())
    {
        if (NOT l_U952[GET_PLAYER_ID()])
        {
            if (sub_181799() > 1)
            {
                if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
                {
                    if ((sub_12802()) || (sub_12847()))
                    {
                        if (NOT sub_182312())
                        {
                            if (((GET_PLAYER_TEAM( sub_5012() )) == l_U934[0]) || ((l_U943[GET_PLAYER_TEAM( sub_5012() )]) == l_U943[l_U934[0]]))
                            {
                                REGISTER_MULTIPLAYER_GAME_WIN( GET_PLAYER_ID(), 0 );
                            }
                        }
                    }
                    else if (sub_10946())
                    {
                        if (bParam1)
                        {
                            REGISTER_MULTIPLAYER_GAME_WIN( GET_PLAYER_ID(), iParam0 );
                        }
                    }
                    else if ((sub_4106( GET_PLAYER_ID() )) == 1)
                    {
                        if (NOT sub_182439())
                        {
                            REGISTER_MULTIPLAYER_GAME_WIN( GET_PLAYER_ID(), 0 );
                        }
                    };;;
                }
            }
            if (NOT sub_32898())
            {
                for ( J = 0; J < 16; J++ )
                {
                    iVar8[J] = 1;
                    if (IS_NETWORK_PLAYER_ACTIVE( J ))
                    {
                        if (NOT l_U952[J])
                        {
                            for ( I = 0; I < 7; I++ )
                            {
                                switch (l_U566[I]._fU92)
                                {
                                    case 20:
                                    if ((sub_12802()) || (sub_12847()))
                                    {
                                        if (sub_3700() != 1)
                                        {
                                            l_U566[I]._fU24[J] = (l_U943[sub_62859( J )]) / (sub_62982( sub_62859( J ) ));
                                        }
                                    }
                                    iVar8[J] += l_U566[I]._fU24[J] * 10000;
                                    break;
                                    case 3:
                                    case 5:
                                    case 7:
                                    case 8:
                                    iVar8[J] += l_U566[I]._fU24[J];
                                    break;
                                    case 4:
                                    iVar8[J] -= l_U566[I]._fU24[J];
                                    break;
                                    case 6:
                                    iVar8[J] -= l_U566[I]._fU24[J] * 2;
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
                        if (NOT l_U952[J])
                        {
                            REGISTER_NETWORK_BEST_GAME_SCORES( J, 24, iVar8[J] );
                            if (sub_10946())
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
                        if (NOT l_U952[J])
                        {
                            if (sub_10946())
                            {
                                UPDATE_NETWORK_STATISTICS( J, 24, iVar8[J], -1 );
                                UPDATE_NETWORK_STATISTICS( J, 25, iParam0 * -1, -1 );
                            }
                            else
                            {
                                UPDATE_NETWORK_STATISTICS( J, 24, iVar8[J], GET_PLAYER_TEAM( sub_8097( J ) ) );
                            }
                        }
                    }
                }
            }
            for ( J = 0; J < 16; J++ )
            {
                if (IS_NETWORK_PLAYER_ACTIVE( J ))
                {
                    if (NOT l_U952[J])
                    {
                        if ((sub_12802()) || (sub_12847()))
                        {
                            UPDATE_NETWORK_STATISTICS( J, 0, 1, GET_PLAYER_TEAM( sub_8097( J ) ) );
                            if (((sub_182312()) || (sub_181799() < 2)) || (sub_181947() < 2))
                            {
                                UPDATE_NETWORK_STATISTICS( J, 1, 0, GET_PLAYER_TEAM( sub_8097( J ) ) );
                            }
                            else if (((GET_PLAYER_TEAM( sub_8097( J ) )) == l_U934[0]) || ((l_U943[GET_PLAYER_TEAM( sub_8097( J ) )]) == l_U943[l_U934[0]]))
                            {
                                UPDATE_NETWORK_STATISTICS( J, 1, 1, GET_PLAYER_TEAM( sub_8097( J ) ) );
                            }
                            else
                            {
                                UPDATE_NETWORK_STATISTICS( J, 1, 0, GET_PLAYER_TEAM( sub_8097( J ) ) );
                            }
                        }
                        else
                        {
                            UPDATE_NETWORK_STATISTICS( J, 0, 1, -1 );
                            if (sub_10946())
                            {
                                if ((((sub_4106( J )) == 1) AND (sub_181799() > 1)) AND (NOT sub_182439()))
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
                            else if ((((sub_4106( J )) == 1) AND (sub_181799() > 1)) AND (NOT sub_182439()))
                            {
                                UPDATE_NETWORK_STATISTICS( J, 1, 1, GET_PLAYER_TEAM( sub_8097( J ) ) );
                            }
                            else
                            {
                                UPDATE_NETWORK_STATISTICS( J, 1, 0, GET_PLAYER_TEAM( sub_8097( J ) ) );
                            }
                        }
                    }
                }
            }
            if (sub_181799() > 1)
            {
                if ((sub_12802()) || (sub_12847()))
                {
                    if (sub_181947() > 1)
                    {
                        iVar7 = sub_181947() - 1;
                        I = iVar7;
                        for ( iVar5 = 0; iVar5 < 8; iVar5++ )
                        {
                            if ((sub_62982( l_U934[iVar5] )) > 0)
                            {
                                for ( J = 0; J < 16; J++ )
                                {
                                    if (IS_NETWORK_PLAYER_ACTIVE( J ))
                                    {
                                        if ((GET_PLAYER_TEAM( sub_8097( J ) )) == l_U934[iVar5])
                                        {
                                            if (NOT l_U952[J])
                                            {
                                                UPDATE_NETWORK_RELATIVE_SCORE( J, iVar7, GET_PLAYER_TEAM( sub_8097( J ) ) );
                                            }
                                        }
                                    }
                                }
                                I--;
                                if ((iVar5 + 1) < 8)
                                {
                                    if (l_U943[l_U934[iVar5]] != (l_U943[l_U934[iVar5 + 1]]))
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
                    iVar7 = sub_181799() - 1;
                    I = iVar7;
                    for ( J = 0; J < 16; J++ )
                    {
                        if (IS_NETWORK_PLAYER_ACTIVE( l_U566[0]._fU24[J] ))
                        {
                            if (NOT l_U952[l_U566[0]._fU24[J]])
                            {
                                UPDATE_NETWORK_RELATIVE_SCORE( l_U566[0]._fU24[J], iVar7, -1 );
                                I--;
                                if ((J + 1) < 16)
                                {
                                    if (l_U566[sub_4262()]._fU24[l_U566[0]._fU24[J]] != (l_U566[sub_4262()]._fU24[l_U566[0]._fU24[J + 1]]))
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
                if (((((l_U566[I]._fU16 != 0) AND (l_U566[I]._fU16 != 1)) AND (l_U566[I]._fU92 != -1)) AND (l_U566[I]._fU92 != -2)) AND (l_U566[I]._fU92 != -3))
                {
                    for ( J = 0; J < 16; J++ )
                    {
                        if (IS_NETWORK_PLAYER_ACTIVE( J ))
                        {
                            if (NOT l_U952[J])
                            {
                                if (sub_10946())
                                {
                                    UPDATE_NETWORK_STATISTICS( J, l_U566[I]._fU92, l_U566[I]._fU24[J], -1 );
                                }
                                else
                                {
                                    UPDATE_NETWORK_STATISTICS( J, l_U566[I]._fU92, l_U566[I]._fU24[J], GET_PLAYER_TEAM( sub_8097( J ) ) );
                                }
                            }
                        }
                    }
                }
            }
            if (sub_10946())
            {
                if ((iParam0 != 2147483647) AND (iParam0 != 0))
                {
                    for ( J = 0; J < 16; J++ )
                    {
                        if (IS_NETWORK_PLAYER_ACTIVE( J ))
                        {
                            if (NOT l_U952[J])
                            {
                                UPDATE_NETWORK_STATISTICS( J, 22, iParam0, -1 );
                            }
                        }
                    }
                }
            }
            if (sub_32898())
            {
                for ( I = 0; I < 7; I++ )
                {
                    if (l_U566[I]._fU92 == 23)
                    {
                        for ( J = 0; J < 16; J++ )
                        {
                            if (IS_NETWORK_PLAYER_ACTIVE( J ))
                            {
                                if (NOT l_U952[J])
                                {
                                    UPDATE_NETWORK_STATISTICS( J, 24, l_U566[I]._fU24[J] * -1, GET_PLAYER_TEAM( sub_8097( J ) ) );
                                }
                            }
                        }
                    }
                }
            }
            if ((sub_12802()) || (sub_12847()))
            {
                for ( J = 0; J < 16; J++ )
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( J ))
                    {
                        if ((GET_PLAYER_TEAM( sub_8097( J ) )) > -1)
                        {
                            if (NOT l_U952[J])
                            {
                                UPDATE_NETWORK_STATISTICS( J, 21, l_U943[GET_PLAYER_TEAM( sub_8097( J ) )], GET_PLAYER_TEAM( sub_8097( J ) ) );
                            }
                        }
                    }
                }
            }
        }
        if ((sub_12802()) || (sub_12847()))
        {
            l_U865 = 1;
        }
        else
        {
            l_U865 = 0;
        }
        for ( J = 0; J < 16; J++ )
        {
            if (IS_NETWORK_PLAYER_ACTIVE( J ))
            {
                l_U735[J]._fU4 = 1;
                l_U735[J]._fU0 = GET_PLAYER_NAME( sub_8097( J ) );
                l_U735[J]._fU12 = GET_PLAYER_TEAM( sub_8097( J ) );
                sub_50139( sub_8097( J ), ref l_U735[J]._fU20, ref l_U735[J]._fU24, ref l_U735[J]._fU28 );
                l_U735[J]._fU16 = sub_4106( J );
                l_U735[J]._fU8 = l_U952[J];
            }
            else
            {
                l_U735[J]._fU4 = 0;
                l_U735[J]._fU0 = "";
                l_U735[J]._fU12 = 0;
                l_U735[J]._fU16 = 0;
                l_U735[J]._fU20 = 0;
                l_U735[J]._fU24 = 0;
                l_U735[J]._fU28 = 0;
                l_U735[J]._fU8 = 0;
            }
        }
        l_U864 = 1;
        NETWORK_END_SESSION();
        l_U866 = 1;
    }
    return 0;
}

int sub_190795()
{
    int I;

    for ( I = 0; I <= 15; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (NOT l_U3400[I]._fU40)
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_191053()
{
    int iVar2;

    GET_NETWORK_TIMER( ref iVar2 );
    if (l_U7 == 0)
    {
        GET_NETWORK_TIMER( ref l_U7 );
    }
    else if (l_U7 < (iVar2 - 25000))
    {
        l_U7 = 0;
        g_U11 = 1;
        sub_25594();
    }
    return;
}

void sub_191461()
{
    int I;

    CLEAR_PRINTS();
    sub_26005();
    for ( I = 0; I <= 6; I++ )
    {
        l_U1933._fU4[I]._fU36 = -1;
        l_U1933._fU4[I]._fU16 = 0;
        REMOVE_BLIP( l_U2259[I] );
    }
    if (DOES_BLIP_EXIST( l_U2267[I] ))
    {
        REMOVE_BLIP( l_U2267[I] );
    }
    sub_26005();
    l_U2294 = 0;
    l_U2329 = 1;
    return;
}
