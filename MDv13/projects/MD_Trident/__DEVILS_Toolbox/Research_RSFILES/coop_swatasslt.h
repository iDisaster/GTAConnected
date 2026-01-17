void main()
{
    int I;
    unknown uVar3;

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
    l_U2635 = 10.00000000;
    l_U2694 = 1;
    l_U2735 = 1;
    l_U2740 = 0;
    l_U2765 = 0;
    l_U2774 = 0;
    l_U2777 = 0;
    l_U2779 = 0;
    l_U2781 = 0;
    l_U2795 = 0;
    l_U2850 = 0;
    l_U2855 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        while (true)
        {
            WAIT( 0 );
            PRINTSTRING( "Bomb the Base is waiting for Simon’s script to shutdown the session\n" );
        }
    }
    sub_425();
    sub_3183();
    sub_4770( "MPKP2AU" );
    sub_4881( 0, 0, "", 0 );
    sub_4881( 1, 0, "PETROVIC", 0 );
    sub_4881( 2, 0, "NOOSE_1", 0 );
    sub_5064( 1 );
    if (NOT (IS_CHAR_DEAD( sub_869() )))
    {
        SET_CHAR_VISIBLE( sub_869(), 0 );
    }
    CLEAR_BRIEF();
    CLEAR_PRINTS();
    SET_PLAYERS_DROP_MONEY_IN_NETWORK_GAME( 0 );
    sub_5142( 1 );
    l_U1817[GET_PLAYER_ID()]._fU20 = -1;
    sub_5210( 0, 1, "_AUTOAIM", 2, 0 );
    sub_5210( 1, 6, "FRIENDLY_FIRE", 2, 0 );
    sub_5210( 2, 1, "DIFFICULTY", 3, 0 );
    sub_5210( 3, 1, "TRAFFIC", 4, 0 );
    sub_5210( 4, 1, "PEDESTRIANS", 4, 0 );
    if (N_604003528())
    {
        sub_5210( 5, 6, "NAME_OPT", 2, 0 );
    }
    else
    {
        sub_5210( 5, 6, "NAME_OPT_PS3", 2, 0 );
    }
    sub_5210( 6, 6, "RETICULE_OPT", 2, 0 );
    sub_5210( 7, 1, "VOICE_OPT", 2, 0 );
    sub_5210( 8, 1, "TIME_OF_DAY", 5, 0 );
    sub_5210( 9, 1, "WEATHER", 6, 0 );
    sub_5210( 10, 16, "DESCRIPTION", 2, 0 );
    sub_5210( 11, 15, "RADIO_OPT", 19, 0 );
    if (NOT NETWORK_IS_TVT())
    {
        sub_5210( 12, 17, "KICK_PLAYER", 16, GET_PLAYER_ID() );
    }
    sub_5620( 1, -1, 0, -1 );
    sub_5671();
    while (NOT (sub_5709( 1543404628 )))
    {
        WAIT( 0 );
    }
    if (sub_5773())
    {
        l_U1496._fU436[0] = sub_5830( 419, NETWORK_GET_GAME_MODE() );
        l_U1496._fU436[1] = sub_5830( 422, NETWORK_GET_GAME_MODE() );
        l_U1496._fU436[2] = sub_5969( 24, 0 );
        l_U1496._fU436[3] = sub_5969( 1, 2 );
        l_U1496._fU436[4] = sub_5969( 2, 1 );
        l_U1496._fU436[5] = sub_5969( 3, 1 );
        l_U1496._fU436[6] = sub_5969( 4, 0 );
        l_U1496._fU436[7] = sub_5969( 5, 0 );
        l_U1496._fU436[8] = sub_5969( 9, 0 );
        l_U1496._fU436[9] = sub_5969( 10, 0 );
        l_U1496._fU436[10] = sub_5969( 11, 1 );
        sub_6195();
    }
    CHANGE_PLAYER_MODEL( sub_6220(), 1543404628 );
    uVar3 = sub_869();
    sub_6289( ref uVar3, l_U1496._fU88[GET_PLAYER_ID()] );
    SET_ANIM_GROUP_FOR_CHAR( sub_869(), "Move_player" );
    SET_VOICE_ID_FROM_HEAD_COMPONENT( sub_869(), 0, 1 );
    sub_3032( ref l_U1817[GET_PLAYER_ID()]._fU12 );
    l_U1817[GET_PLAYER_ID()]._fU0 = 1;
    sub_6528();
    l_U1817[GET_PLAYER_ID()]._fU40 = -1;
    SET_TIME_OF_DAY( 12, 0 );
    sub_6592( 1 );
    for ( I = 0; I < 11; I++ )
    {
        SWITCH_CAR_GENERATOR( g_U64964[I], 101 );
    }
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
        GET_NETWORK_TIMER( ref l_U2640 );
        sub_6721( 0, 0, 0 );
        if (l_U1496._fU68 >= 2)
        {
            if (NOT l_U2676)
            {
                CLEAR_AREA( l_U2481[GET_PLAYER_ID()]._fU0, l_U2481[GET_PLAYER_ID()]._fU4, l_U2481[GET_PLAYER_ID()]._fU8, 500.00000000, 1 );
                sub_8629();
                l_U2676 = 1;
            }
        }
        RESERVE_NETWORK_MISSION_PEDS_FOR_HOST( 30 );
        RESERVE_NETWORK_MISSION_VEHICLES_FOR_HOST( 15 );
        RESERVE_NETWORK_MISSION_OBJECTS_FOR_HOST( 5 );
        if (sub_5773())
        {
            sub_8767();
            sub_6195();
        }
        if (LOCAL_PLAYER_IS_READY_TO_START_PLAYING())
        {
            LAUNCH_LOCAL_PLAYER_IN_NETWORK_GAME();
        }
        if ((l_U1496._fU528 == 0) AND (l_U2639 > 4))
        {
            sub_36429( l_U1496._fU524 );
        }
        if ((l_U2639 > 4) AND (l_U2639 < 11))
        {
            sub_36680();
            sub_39970();
            if (sub_8910( l_U1496._fU688 ))
            {
                sub_40094();
            }
            if (NOT l_U2697)
            {
                if ((sub_24197() < 2) || (l_U1817[GET_PLAYER_ID()]._fU44 == 2))
                {
                    if ((NOT l_U1817[GET_PLAYER_ID()]._fU88) || (l_U1817[GET_PLAYER_ID()]._fU44 == 2))
                    {
                        sub_41483();
                    }
                }
            }
        }
        if ((l_U2639 > 4) AND (l_U2639 < 12))
        {
            sub_75085();
        }
        if (l_U2639 < 12)
        {
            sub_76983();
        }
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            sub_77284( 16, ref l_U1817[0]._fU12, ref l_U1817[1]._fU12, ref l_U1817[2]._fU12, ref l_U1817[3]._fU12, ref l_U1817[4]._fU12, ref l_U1817[5]._fU12, ref l_U1817[6]._fU12, ref l_U1817[7]._fU12, ref l_U1817[8]._fU12, ref l_U1817[9]._fU12, ref l_U1817[10]._fU12, ref l_U1817[11]._fU12, ref l_U1817[12]._fU12, ref l_U1817[13]._fU12, ref l_U1817[14]._fU12, ref l_U1817[15]._fU12 );
            switch (l_U2639)
            {
                case 0:
                if ((sub_16951()) AND (sub_3183()))
                {
                    RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), l_U2481[GET_PLAYER_ID()], l_U2604[GET_PLAYER_ID()] );
                    SET_CHAR_VISIBLE( sub_869(), 0 );
                    FORCE_LOADING_SCREEN( 1 );
                    sub_79387( l_U2481[GET_PLAYER_ID()]._fU0, l_U2481[GET_PLAYER_ID()]._fU4, l_U2481[GET_PLAYER_ID()]._fU8 );
                    FORCE_LOADING_SCREEN( 0 );
                    l_U2639 = 1;
                }
                break;
                case 1:
                if (sub_16951())
                {
                    if (NOT l_U2676)
                    {
                        sub_8629();
                        l_U2676 = 1;
                    }
                    if (l_U2480 == nil)
                    {
                        CREATE_OBJECT_NO_OFFSET( 223915744, l_U2631, l_U2632, l_U2633, ref l_U2480, 0 );
                        SET_OBJECT_ROTATION( l_U2480, l_U2628, l_U2629, l_U2630 );
                    }
                    if (LOCAL_PLAYER_IS_READY_TO_START_PLAYING())
                    {
                        LAUNCH_LOCAL_PLAYER_IN_NETWORK_GAME();
                    }
                    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
                    {
                        if ((((sub_79666()) || (l_U2726)) || (l_U1496._fU68 > 1)) || (g_U26675))
                        {
                            if (IS_SCREEN_FADED_OUT())
                            {
                                l_U2639 = 2;
                            }
                            else if (NOT IS_SCREEN_FADING_OUT())
                            {
                                sub_44214( 500 );
                                l_U2726 = 1;
                            }
                        }
                        else if (DOES_OBJECT_EXIST( l_U2480 ))
                        {
                            sub_79822();
                        }
                    }
                }
                break;
                case 2:
                sub_86841();
                break;
                case 3:
                sub_87796( 1 );
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_869(), 2000.00000000, 2000.00000000, 200.00000000, 10.00000000, 10.00000000, 10.00000000, 0 )))
                {
                    SET_CHAR_COORDINATES( sub_869(), 2000.00000000, 2000.00000000, 200.00000000 );
                    FREEZE_CHAR_POSITION( sub_869(), 1 );
                }
                sub_88913();
                if (l_U1817[GET_PLAYER_ID()]._fU68 == 1)
                {
                    sub_89545();
                    sub_45989( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                    sub_47460( "WAITING_END", sub_57361( 23 ), sub_57394( 23 ), sub_57361( 24 ), sub_57394( 24 ), 255, 255, 255, 255, 2 );
                }
                if (NOT NETWORK_IS_SESSION_STARTED())
                {
                    l_U2727 = 0;
                }
                else if (sub_24197() > 0)
                {
                    if (NOT l_U2727)
                    {
                        if (LOCAL_PLAYER_IS_READY_TO_START_PLAYING())
                        {
                            LAUNCH_LOCAL_PLAYER_IN_NETWORK_GAME();
                        }
                        l_U2727 = 1;
                    }
                    if ((sub_116790()) || (sub_116867()))
                    {
                        sub_116950();
                    }
                }
                if (NOT l_U1817[GET_PLAYER_ID()]._fU68)
                {
                    l_U1817[GET_PLAYER_ID()]._fU68 = 1;
                    SET_CHAR_VISIBLE( sub_869(), 0 );
                    SET_CHAR_COLLISION( sub_869(), 0 );
                }
                break;
                case 4:
                if (l_U1496._fU68 <= 1)
                {
                    sub_89545();
                    sub_117521( 0, l_U1496._fU436[0] == 1, 0, 0 );
                    sub_87796( 1 );
                }
                else if (l_U1496._fU536 > l_U2640)
                {
                    sub_4881( 1, 0, "PETROVIC", 0 );
                    REMOVE_ANIMS( "MISSSWAT_ASSAULT" );
                    sub_117614();
                    sub_89545();
                    DISABLE_PAUSE_MENU( 0 );
                    GIVE_WEAPON_TO_CHAR( sub_869(), 3, 0, 0 );
                    GIVE_WEAPON_TO_CHAR( sub_869(), 4, 5, 0 );
                    GIVE_WEAPON_TO_CHAR( sub_869(), 12, 2000, 0 );
                    GIVE_WEAPON_TO_CHAR( sub_869(), 14, 1500, 1 );
                    sub_567( GET_PLAYER_ID(), 1 );
                    SET_WANTED_MULTIPLIER( 0.00000000 );
                    SET_MAX_WANTED_LEVEL( 0 );
                    sub_50254( 500 );
                    SET_SCENARIO_PED_DENSITY_MULTIPLIER( 0.00000000, 0.00000000 );
                    if (sub_8910( l_U1496._fU688 ))
                    {
                        SET_CHAR_NEVER_TARGETTED( sub_8935( l_U1496._fU688 ), 1 );
                    }
                    sub_117858();
                    SET_FAKE_WANTED_LEVEL( l_U2670 );
                    sub_119184( ref l_U1496._fU436 );
                    l_U2639 = 5;
                }
                else
                {
                    sub_89545();
                    sub_77041( GET_PLAYER_ID(), 1 );
                    l_U1817[GET_PLAYER_ID()]._fU68 = 1;
                    sub_41839();
                    RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), 994.28930000, -793.26730000, 182.55050000, 0.00000000 );
                    sub_41830();
                    l_U1817[GET_PLAYER_ID()]._fU4 = -5;
                    l_U1817[GET_PLAYER_ID()]._fU0 = 1;
                    sub_119184( ref l_U1496._fU436 );
                    l_U2674 = l_U2640 + 3500;
                    l_U2737 = 1;
                    if (IS_SCREEN_FADED_OUT())
                    {
                        if (NOT IS_SCREEN_FADING_IN())
                        {
                            sub_50254( 500 );
                        }
                    }
                    l_U2639 = 10;
                }
                break;
                case 5:
                if (l_U2650 == 0)
                {
                    CLEAR_PRINTS();
                    PRINT_NOW( "COOP_SASLT_GT_1", 5000, 1 );
                    PRINT( "COOP_SASLT_GT_3", 5000, 1 );
                    l_U2650 = l_U2640 + 3000;
                }
                else if (l_U2640 > l_U2650)
                {
                    sub_120349();
                }
                if (sub_8910( l_U1496._fU688 ))
                {
                    if (NOT (DOES_BLIP_EXIST( l_U2436 )))
                    {
                        ADD_BLIP_FOR_CHAR( sub_8935( l_U1496._fU688 ), ref l_U2436 );
                        CHANGE_BLIP_SPRITE( l_U2436, 4 );
                        CHANGE_BLIP_SCALE( l_U2436, 0.78000000 );
                        CHANGE_BLIP_PRIORITY( l_U2436, 1 );
                        CHANGE_BLIP_COLOUR( l_U2436, 3 );
                    }
                    if (l_U1496._fU72 >= 15)
                    {
                        if (sub_83417( l_U2330 ))
                        {
                            sub_87184( ref l_U2330, 0 );
                        }
                        CLEAR_PRINTS();
                        PRINT_NOW( "COOP_SASLT_GT_4", 5000, 1 );
                        l_U2639 = 6;
                    }
                    else
                    {
                        sub_127151();
                    }
                }
                break;
                case 6:
                if (NOT l_U1817[GET_PLAYER_ID()]._fU80)
                {
                    sub_127348();
                }
                if (l_U1496._fU660)
                {
                    if (sub_127529())
                    {
                        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
                        {
                            if (IS_CHAR_IN_ANY_CAR( sub_869() ))
                            {
                                if (IS_CHAR_IN_AREA_3D( sub_869(), 2457.04900000, 434.08240000, 2.46750000, 2418.78300000, 445.90130000, 18.02330000, 0 ))
                                {
                                    l_U1817[GET_PLAYER_ID()]._fU52 = 1;
                                }
                            }
                        }
                    }
                    sub_125748();
                }
                sub_120349();
                sub_127741();
                break;
                case 7:
                sub_132344();
                sub_133637();
                sub_120349();
                if ((l_U1496._fU68 == 6) || (l_U1496._fU68 == 7))
                {
                    l_U2639 = 8;
                }
                break;
                case 8:
                sub_132344();
                sub_133637();
                sub_120349();
                sub_133939();
                if (l_U1496._fU652)
                {
                    CLEAR_PRINTS();
                    l_U2639 = 9;
                }
                else if (l_U2739)
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_869(), 606.09540000, 1059.58500000, 2.87360000, 8.00000000, 8.00000000, 8.00000000, 0 )))
                    {
                        if (sub_8910( l_U1496._fU688 ))
                        {
                            if (sub_134184( sub_8935( l_U1496._fU688 ) ))
                            {
                                CLEAR_PRINTS();
                                PRINT_NOW( "COOP_SASLT_SZ_7", 5000, 1 );
                                l_U2739 = 0;
                            }
                            else
                            {
                                CLEAR_PRINTS();
                                PRINT_NOW( "COOP_SASLT_SZ_1", 5000, 1 );
                                l_U2739 = 0;
                            }
                        }
                    }
                }
                else if (LOCATE_CHAR_ANY_MEANS_3D( sub_869(), 606.09540000, 1059.58500000, 2.87360000, 8.00000000, 8.00000000, 8.00000000, 0 ))
                {
                    CLEAR_PRINTS();
                    PRINT_NOW( "COOP_SASLT_SZ_5", 5000, 1 );
                    l_U2739 = 1;
                };;;
                break;
                case 9:
                l_U1817[GET_PLAYER_ID()]._fU72 = 1;
                sub_41638();
                if (l_U1496._fU528 > 0)
                {
                    sub_134507();
                }
                if ((l_U1817[GET_PLAYER_ID()]._fU48) AND (IS_SCREEN_FADED_OUT()))
                {
                    if (l_U1817[GET_PLAYER_ID()]._fU44 == 0)
                    {
                        l_U1817[GET_PLAYER_ID()]._fU44 = 4;
                    }
                    sub_41830();
                    sub_50254( 500 );
                    l_U1817[GET_PLAYER_ID()]._fU4 = -5;
                    l_U1817[GET_PLAYER_ID()]._fU0 = 1;
                    sub_43138();
                    sub_50254( 500 );
                    l_U2639 = 10;
                }
                break;
                case 10:
                if (sub_136299())
                {
                    sub_41483();
                }
                if (l_U2738)
                {
                    sub_136400();
                }
                else if (sub_137215())
                {
                    l_U2738 = 1;
                }
                else
                {
                    sub_137422();
                }
                sub_43138();
                if (IS_SCREEN_FADED_OUT())
                {
                    sub_118747( 1 );
                }
                else
                {
                    sub_118747( 0 );
                }
                if (sub_137777())
                {
                    sub_137968( 0 );
                }
                else
                {
                    sub_44292( 0 );
                }
                break;
                case 11:
                if (l_U1817[GET_PLAYER_ID()]._fU104)
                {
                    l_U1817[GET_PLAYER_ID()]._fU104 = 0;
                }
                if (NOT l_U1817[GET_PLAYER_ID()]._fU84)
                {
                    l_U1817[GET_PLAYER_ID()]._fU84 = 1;
                }
                if (sub_137968( 1 ))
                {
                    sub_44214( 0 );
                    l_U1817[GET_PLAYER_ID()]._fU92 = 1;
                    l_U2639 = 12;
                }
                break;
                case 12:
                if (l_U1817[GET_PLAYER_ID()]._fU68)
                {
                    l_U1817[GET_PLAYER_ID()]._fU68 = 0;
                }
                if (l_U1817[GET_PLAYER_ID()]._fU104)
                {
                    l_U1817[GET_PLAYER_ID()]._fU104 = 0;
                }
                if (((NETWORK_IS_TVT()) AND (sub_45776())) || (NETWORK_IS_RENDEZVOUS()))
                {
                    sub_137968( 0 );
                    SET_WIDESCREEN_FORMAT( 2 );
                    sub_45989( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                    sub_47460( "RETURN_PARTY", sub_57361( 23 ), sub_57394( 23 ), sub_57361( 24 ), sub_57394( 24 ), 255, 255, 255, 255, 2 );
                    if (NETWORK_IS_RENDEZVOUS_HOST())
                    {
                        sub_138455();
                    }
                }
                else if (DOES_CAM_EXIST( l_U2415 ))
                {
                    SET_CAM_ACTIVE( l_U2415, 0 );
                    SET_CAM_PROPAGATE( l_U2415, 0 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    DESTROY_CAM( l_U2415 );
                }
                sub_89545();
                sub_87796( 1 );;
                break;
                case 13:
                if (l_U1817[GET_PLAYER_ID()]._fU104)
                {
                    l_U1817[GET_PLAYER_ID()]._fU104 = 0;
                }
                if (IS_SCREEN_FADED_OUT())
                {
                    if (NOT IS_SCREEN_FADING_IN())
                    {
                        sub_50254( 500 );
                    }
                }
                if (sub_44292( 1 ))
                {
                    if (IS_SCREEN_FADED_IN())
                    {
                        l_U2639 = 12;
                    }
                }
                break;
            }
        }
        if (sub_22368( l_U1496._fU692 ))
        {
            if (sub_8910( l_U1496._fU688 ))
            {
                if (IS_CHAR_IN_CAR( sub_8935( l_U1496._fU688 ), sub_14784( l_U1496._fU692, "Bc.net_Chopper", -1 ) ))
                {
                    l_U2723 = 1;
                }
                else
                {
                    l_U2723 = 0;
                }
            }
        }
        if (NOT l_U1817[GET_PLAYER_ID()]._fU92)
        {
            if (l_U1496._fU600)
            {
                if ((l_U1496._fU68 == 8) || (l_U1496._fU532 > 0))
                {
                    if (sub_480( GET_PLAYER_ID() ))
                    {
                        sub_136400();
                    }
                }
            }
        }
        if (l_U2639 > 4)
        {
            if (l_U2639 < 10)
            {
                sub_87796( 0 );
                sub_138971();
                if (NOT l_U1817[GET_PLAYER_ID()]._fU96)
                {
                    sub_148261();
                }
                else
                {
                    sub_41638();
                }
            }
        }
    }
    return;
}

void sub_425()
{
    int I;

    SET_MISSION_FLAG( 1 );
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    SET_GLOBAL_INSTANCE_PRIORITY( 1 );
    DISABLE_PAUSE_MENU( 1 );
    UNPAUSE_GAME();
    if (sub_480( GET_PLAYER_ID() ))
    {
        sub_567( GET_PLAYER_ID(), 0 );
        SET_CHAR_VISIBLE( sub_869(), 0 );
        SET_CHAR_MONEY( sub_869(), 0 );
    }
    GET_MAX_WANTED_LEVEL( ref l_U2643 );
    SET_WANTED_MULTIPLIER( 0.00000000 );
    REGISTER_HOST_BROADCAST_VARIABLES( ref l_U1496, 321, -1 );
    REGISTER_CLIENT_BROADCAST_VARIABLES( ref l_U1817, 513, -1 );
    ALLOW_EMERGENCY_SERVICES( 0 );
    COPY_COMBAT_DECISION_MAKER( 65546, ref l_U2459 );
    N_521945732( 1, ref l_U2457 );
    N_521945732( 0, ref l_U2458 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U2460 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U2461 );
    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U2459, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2459, 5 );
    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U2461, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2461, 5 );
    SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U2461, 2 );
    SET_RELATIONSHIP( 5, 25, 47 );
    SET_RELATIONSHIP( 1, 24, 47 );
    SET_RELATIONSHIP( 5, 25, 24 );
    SET_RELATIONSHIP( 1, 3, 25 );
    SET_RELATIONSHIP( 1, 25, 3 );
    SET_RELATIONSHIP( 5, 3, 47 );
    SET_RELATIONSHIP( 5, 3, 24 );
    CLEAR_AREA( 2407.55100000, 188.35860000, 4.80750000, 500.00000000, 1 );
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( 2354.93700000, -60.74787000, 123.95220000, 2907.04900000, 535.26590000, -18.14380000, 0 );
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( 2190.93400000, 685.81210000, 5.92400000, 2318.71500000, 789.66030000, 29.76550000, 1 );
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( 462.25090000, -803.98230000, 14.19142000, 292.39970000, -635.76430000, -9.07024600, 1 );
    SWITCH_ROADS_OFF( 2351.24100000, 72.54793000, 2.29722600, 2227.93300000, 57.00667000, 17.17584000 );
    SWITCH_ROADS_OFF( 2227.93300000, 57.00667000, 17.17584000, 2116.49400000, 94.63986000, 3.83257800 );
    SWITCH_ROADS_OFF( 2116.49400000, 94.63986000, 3.83257800, 2134.08900000, 147.54960000, 13.00724000 );
    SWITCH_ROADS_OFF( 2351.24100000, 72.54793000, 2.29722600, 2367.59900000, 146.75340000, 13.58018000 );
    SWITCH_ROADS_OFF( 2398.44000000, 263.93030000, 3.03577000, 2425.46400000, 229.44690000, 14.43351000 );
    SWITCH_ROADS_OFF( 2463.91400000, 166.82880000, -6.62922700, 2385.22100000, 263.26900000, 22.66073000 );
    BEGIN_CAM_COMMANDS( ref l_U2638 );
    l_U2481[0] = {2403.00900000, 183.85660000, 4.49450000};
    l_U2481[1] = {2405.94300000, 182.23020000, 4.51280000};
    l_U2481[2] = {2412.12200000, 178.34120000, 4.51280000};
    l_U2481[3] = {2419.20600000, 177.82970000, 4.51280000};
    l_U2481[4] = {2401.96600000, 183.00040000, 4.51280000};
    l_U2481[5] = {2404.93600000, 181.72540000, 4.51280000};
    l_U2481[6] = {2411.03100000, 178.74290000, 4.51280000};
    l_U2481[7] = {2419.75200000, 177.25210000, 4.51280000};
    l_U2481[8] = {2402.93200000, 182.20000000, 4.51280000};
    l_U2481[9] = {2406.02100000, 181.04370000, 4.51280000};
    l_U2481[10] = {2410.93000000, 180.03030000, 4.51280000};
    l_U2481[11] = {2418.92500000, 176.82940000, 4.51280000};
    l_U2481[12] = {2401.88200000, 181.74510000, 4.51280000};
    l_U2481[13] = {2404.91000000, 180.56350000, 4.51280000};
    l_U2481[14] = {2410.94000000, 177.56350000, 4.51280000};
    l_U2481[15] = {2419.69900000, 176.38240000, 4.51280000};
    l_U2604[0] = 328.11190000;
    l_U2604[1] = 323.12390000;
    l_U2604[2] = 318.12070000;
    l_U2604[3] = 8.17860000;
    l_U2604[4] = 313.10800000;
    l_U2604[5] = 318.12440000;
    l_U2604[6] = 303.10610000;
    l_U2604[7] = 23.18540000;
    l_U2604[8] = 323.13850000;
    l_U2604[9] = 338.13930000;
    l_U2604[10] = 303.10610000;
    l_U2604[11] = 343.13930000;
    l_U2604[12] = 313.11600000;
    l_U2604[13] = 303.10610000;
    l_U2604[14] = 303.10610000;
    l_U2604[15] = 18.20160000;
    l_U2336[0]._fU4 = {-1407.60800000, 1467.16300000, 31.40137000};
    l_U2336[0]._fU16 = {-12.58159000, -0.00000000, 129.16280000};
    l_U2336[1]._fU4 = {-1408.29300000, 1468.11600000, 31.33345000};
    l_U2336[1]._fU16 = {-8.04786400, -0.00000000, 152.09150000};
    l_U2336[2]._fU4 = {-1409.49100000, 1469.41100000, 31.58604000};
    l_U2336[2]._fU16 = {-14.06098000, -0.00000000, -178.19450000};
    l_U2530[0] = {2391.97000000, 247.37170000, 4.80730000};
    l_U2530[1] = {2379.86100000, 258.40930000, 4.80730000};
    l_U2530[2] = {2358.91600000, 259.27920000, 4.80750000};
    l_U2530[3] = {2346.83900000, 255.30520000, 4.80750000};
    l_U2530[4] = {2498.30700000, 248.08760000, 4.80790000};
    l_U2530[5] = {2467.30000000, 291.63530000, 4.80790000};
    l_U2530[6] = {2338.23900000, 163.06860000, 4.80780000};
    l_U2596[0] = 268.56250000;
    l_U2596[1] = 266.70210000;
    l_U2596[2] = 269.28550000;
    l_U2596[3] = 315.10430000;
    l_U2596[4] = 133.40560000;
    l_U2596[5] = 181.84800000;
    l_U2596[6] = 285.89560000;
    l_U2552[0] = {2405.67500000, 227.82080000, 4.80730000};
    l_U2552[1] = {2400.84900000, 230.38990000, 4.80730000};
    l_U2552[2] = {2398.09900000, 217.54750000, 4.80730000};
    l_U2552[3] = {2422.54700000, 214.64040000, 4.80750000};
    l_U2552[4] = {2430.91300000, 208.84810000, 4.80750000};
    l_U2552[5] = {2435.76800000, 205.07980000, 4.80750000};
    l_U2631 = 2394.49600000;
    l_U2632 = 175.89900000;
    l_U2633 = 5.85800000;
    l_U2628 = 0.00000000;
    l_U2629 = 235.00000000;
    l_U2630 = 240.37500000;
    sub_2811( "PLAYER", 1, 13, -1 );
    sub_2811( "KILLS", 2, 11, 3 );
    sub_2811( "DEATHS", 2, 6, 4 );
    sub_2811( "TMKILLS", 2, 29, 6 );
    sub_2811( "CASH", 6, 16, 20 );
    sub_2811( "TIME", 4, 31, 22 );
    for ( I = 0; I <= 15; I++ )
    {
        sub_3032( ref l_U1817[I]._fU12 );
    }
    return;
}

int sub_480(unknown uParam0)
{
    unknown uVar3;

    if (IS_NETWORK_PLAYER_ACTIVE( uParam0 ))
    {
        if ((NOT l_U1817[uParam0]._fU68) AND (NOT l_U1817[uParam0]._fU104))
        {
            return 1;
        }
    }
    return 0;
}

void sub_567(unknown uParam0, boolean bParam1)
{
    SET_PLAYER_CONTROL_FOR_NETWORK( sub_578( uParam0 ), bParam1, 0 );
    SET_CHAR_VISIBLE( sub_616( uParam0 ), bParam1 );
    if (bParam1)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_616( uParam0 ) )))
        {
            SET_CHAR_COLLISION( sub_616( uParam0 ), 1 );
        }
        FREEZE_CHAR_POSITION( sub_616( uParam0 ), 0 );
        SET_CHAR_NEVER_TARGETTED( sub_616( uParam0 ), 0 );
        SET_PLAYER_INVINCIBLE( sub_578( uParam0 ), 0 );
    }
    else
    {
        SET_CHAR_COLLISION( sub_616( uParam0 ), 0 );
        FREEZE_CHAR_POSITION( sub_616( uParam0 ), 1 );
        SET_CHAR_NEVER_TARGETTED( sub_616( uParam0 ), 1 );
        SET_PLAYER_INVINCIBLE( sub_578( uParam0 ), 1 );
        REMOVE_PTFX_FROM_PED( sub_616( uParam0 ) );
        if (NOT (IS_CHAR_FATALLY_INJURED( sub_616( uParam0 ) )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_616( uParam0 ) );
        }
    }
    return;
}

void sub_578(unknown uParam0)
{
    return CONVERT_INT_TO_PLAYERINDEX( uParam0 );
}

void sub_616(unknown uParam0)
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( uParam0 ), ref Result );
    return Result;
}

void sub_869()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2811(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_3032(unknown uParam0)
{
    NETWORK_SET_TALKER_FOCUS( -1 );
    sub_3053( uParam0, 31, 0 );
    return;
}

void sub_3053(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U18._fU636 = uParam1;
    g_U18._fU632 = uParam2;
    sub_3084( uParam0, uParam1 );
    sub_3118( uParam0, uParam2 );
    return;
}

void sub_3084(unknown uParam0, unknown uParam1)
{
    SET_BITS_IN_RANGE( uParam0, 0, 15, uParam1 );
    return;
}

void sub_3118(unknown uParam0, unknown uParam1)
{
    SET_BITS_IN_RANGE( uParam0, 16, 31, uParam1 );
    return;
}

int sub_3183()
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

void sub_4770(unknown uParam0)
{
    StrCopy( ref l_U0._fU0, uParam0, 16 );
    sub_4787();
    return;
}

void sub_4787()
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

void sub_4881(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U0._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U0._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4961( "\n PED NUMBER ", uParam0 );
    sub_5001( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4961(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5001(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5064(unknown uParam0)
{
    l_U1417 = uParam0;
    return;
}

void sub_5142(unknown uParam0)
{
    g_U18._fU668 = -1;
    g_U18._fU672 = uParam0;
    return;
}

void sub_5210(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref l_U1087[uParam0]._fU0, uParam2, 16 );
    l_U1087[uParam0]._fU16 = uParam1;
    l_U1087[uParam0]._fU24 = uParam3;
    l_U1087[uParam0]._fU20 = uParam4;
    l_U1087[uParam0]._fU28 = uParam4;
    return;
}

void sub_5620(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U1293 = uParam0;
    l_U1295 = uParam1;
    l_U1292 = uParam2;
    l_U1294 = uParam3;
    l_U1296 = 1;
    return;
}

void sub_5671()
{
    RESTORE_SCRIPT_ARRAY_FROM_SCRATCHPAD( ref l_U1435, 61, 2, 2 );
    return;
}

int sub_5709(unknown uParam0)
{
    REQUEST_MODEL( uParam0 );
    if (HAS_MODEL_LOADED( uParam0 ))
    {
        return 1;
    }
    return 0;
}

int sub_5773()
{
    if (IS_THIS_MACHINE_THE_SERVER())
    {
        SET_THIS_MACHINE_RUNNING_SERVER_SCRIPT( 1 );
        return 1;
    }
    return 0;
}

void sub_5830(unknown uParam0, unknown uParam1)
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

void sub_5969(unknown uParam0, unknown Result)
{
    if (IS_BIT_SET( l_U1435[uParam0], 0 ))
    {
        return GET_BITS_IN_RANGE( l_U1435[uParam0], 1, 31 );
    }
    return Result;
}

void sub_6195()
{
    SET_THIS_MACHINE_RUNNING_SERVER_SCRIPT( 0 );
    return;
}

void sub_6220()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_6289(unknown uParam0, unknown uParam1)
{
    int I;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    sub_6310( "\n Set Ped" );
    for ( I = 0; I <= 9; I++ )
    {
        uVar5 = GET_BITS_IN_RANGE( uParam1, I * 3, (I * 3) + 2 );
        uVar6 = GET_NUMBER_OF_CHAR_TEXTURE_VARIATIONS( (uParam0^), I, uVar5 );
        GENERATE_RANDOM_INT_IN_RANGE( 0, uVar6, ref uVar7 );
        sub_4961( " # ", uVar5 );
        sub_4961( ", ", uVar7 );
        SET_CHAR_COMPONENT_VARIATION( (uParam0^), I, uVar5, uVar7 );
    }
    return;
}

void sub_6310(unknown uParam0)
{
    return;
}

void sub_6528()
{
    g_U18._fU660 = -1;
    g_U18._fU664 = 1;
    return;
}

void sub_6592(unknown uParam0)
{
    l_U1351 = uParam0;
    return;
}

void sub_6721(int iParam0, boolean bParam1, unknown uParam2)
{
    int iVar5;
    unknown uVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    uVar11 = sub_6730();
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
                    if (NOT sub_7001())
                    {
                        if (iParam0 != l_U1428)
                        {
                            sub_7070( iParam0 );
                            iParam0 = l_U1428;
                        }
                    }
                    else if (NOT l_U1430)
                    {
                        l_U1429 = iVar5 + 25000;
                        l_U1430 = 1;
                        sub_7070( iParam0 );
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
                            sub_7091();
                            SET_RICH_PRESENCE_TEMPLATEMP3( iVar7 + 1, sub_6739() );
                        }
                        else if (NOT sub_7977())
                        {
                            sub_7091();
                            SET_RICH_PRESENCE_TEMPLATEMP6( sub_8048(), iParam0, sub_6739() );
                        }
                        else
                        {
                            sub_7091();
                            SET_RICH_PRESENCE_TEMPLATEMP6( uParam2, iParam0, sub_6739() );
                        }
                    }
                    else if (l_U1429 < iVar5)
                    {
                        l_U1430 = 0;
                    }
                    break;
                    case 3:
                    if (l_U1428 != sub_7686())
                    {
                        sub_7091();
                        SET_RICH_PRESENCE_TEMPLATEMP5( 3, sub_7686(), sub_6739() );
                        l_U1428 = sub_7686();
                    }
                    break;
                    case 0:
                    if (NOT l_U1430)
                    {
                        l_U1429 = iVar5 + 45000;
                        l_U1430 = 1;
                        sub_7091();
                        SET_RICH_PRESENCE_TEMPLATEMP2( sub_6739() );
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
                if (sub_6739() == 16)
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
                    {
                        GET_CHAR_COORDINATES( sub_869(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                        if ((GET_MAP_AREA_FROM_COORDS( uVar8 )) != 5)
                        {
                            if (NOT l_U1430)
                            {
                                l_U1429 = iVar5 + 45000;
                                l_U1430 = 1;
                                sub_7091();
                                SET_RICH_PRESENCE_TEMPLATEMP2( sub_6739() );
                            }
                            else if (l_U1429 < iVar5)
                            {
                                l_U1430 = 0;
                            }
                        }
                    }
                }
                else if (sub_6739() == 8)
                {
                    SET_RICH_PRESENCE_TEMPLATEPARTY();
                    l_U1431 = 1;
                }
                else
                {
                    sub_7091();
                    SET_RICH_PRESENCE_TEMPLATELOBBY( sub_6739() );
                    l_U1430 = 0;
                    l_U1431 = 1;
                }
            }
        }
    }
    return;
}

int sub_6730()
{
    switch (sub_6739())
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

void sub_6739()
{
    if (l_U98 == -1)
    {
        l_U98 = NETWORK_GET_GAME_MODE();
    }
    return l_U98;
}

int sub_7001()
{
    int iVar2;

    iVar2 = sub_6739();
    if (((iVar2 == 7) || (iVar2 == 8)) || (iVar2 == 6))
    {
        return 1;
    }
    return 0;
}

void sub_7070(int iParam0)
{
    if (l_U1432 == 0)
    {
        sub_7091();
        SET_RICH_PRESENCE_TEMPLATEMP1( 1, sub_7116( GET_PLAYER_ID() ), sub_7686(), sub_6739() );
        l_U1432 = 1;
    }
    else if ((iParam0 > 0) AND (iParam0 < 60))
    {
        sub_7091();
        SET_RICH_PRESENCE_TEMPLATEMP4( iParam0, sub_6739() );
        l_U1432 = 0;
    }
    return;
}

void sub_7091()
{
    return;
}

void sub_7116(unknown uParam0)
{
    if (l_U960)
    {
        return l_U831[uParam0]._fU16;
    }
    return sub_7151( uParam0 );
}

int sub_7151(int iParam0)
{
    int I;
    int iVar4;
    int Result;

    if (sub_7162( iParam0 ))
    {
        for ( I = 0; I < 16; I++ )
        {
            iVar4 = l_U662[0]._fU24[I];
            if ((IS_NETWORK_PLAYER_ACTIVE( iVar4 )) AND (NOT l_U1048[iVar4]))
            {
                Result++;
                if (l_U662[sub_7307()]._fU24[iVar4] == l_U662[sub_7307()]._fU24[iParam0])
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

int sub_7162(int iParam0)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (I != iParam0)
        {
            if ((sub_7195( I )) AND (NOT (sub_7247( I ))))
            {
                if (l_U662[sub_7307()]._fU24[I] == l_U662[sub_7307()]._fU24[iParam0])
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_7195(unknown uParam0)
{
    if (l_U960)
    {
        return l_U831[uParam0]._fU4;
    }
    return IS_NETWORK_PLAYER_ACTIVE( uParam0 );
}

void sub_7247(unknown uParam0)
{
    if (l_U960)
    {
        return l_U831[uParam0]._fU8;
    }
    return l_U1048[uParam0];
}

int sub_7307()
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

void sub_7686()
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

int sub_7977()
{
    int iVar2;

    iVar2 = NETWORK_GET_GAME_MODE();
    if (((((iVar2 == 10) || (iVar2 == 12)) || (iVar2 == 1)) || (iVar2 == 3)) || (iVar2 == 4))
    {
        return 1;
    }
    return 0;
}

void sub_8048()
{
    unknown Result;

    if (IS_PLAYER_PLAYING( sub_6220() ))
    {
        STORE_SCORE( sub_6220(), ref Result );
    }
    return Result;
}

void sub_8629()
{
    OPEN_SEQUENCE_TASK( ref l_U2402 );
    TASK_LEAVE_ANY_CAR( 0 );
    CLOSE_SEQUENCE_TASK( l_U2402 );
    OPEN_SEQUENCE_TASK( ref l_U2403 );
    TASK_GO_STRAIGHT_TO_COORD( 0, 2392.99800000, 173.39800000, 4.80770000, 2, 30000 );
    CLOSE_SEQUENCE_TASK( l_U2403 );
    return;
}

void sub_8767()
{
    int I;

    if ((l_U1496._fU68 > 1) AND (l_U1496._fU68 < 8))
    {
        sub_8804();
        sub_12126();
    }
    if (l_U1496._fU68 >= 1)
    {
        sub_12467();
    }
    if ((l_U1496._fU68 > 1) AND (l_U1496._fU68 < 8))
    {
        sub_12951();
        sub_13213();
    }
    if ((l_U1496._fU68 > 1) AND (l_U1496._fU68 < 10))
    {
        l_U1496._fU680 = sub_13623();
    }
    sub_13708();
    sub_13982();
    switch (l_U1496._fU68)
    {
        case 0:
        if (sub_16951())
        {
            l_U1496._fU68 = 1;
        }
        break;
        case 1:
        if (NOT NETWORK_IS_OPERATION_PENDING())
        {
            if ((sub_17163()) || (l_U2697))
            {
                sub_17953( l_U1496._fU436[9] );
                sub_18124( l_U1496._fU436[8] );
                SET_SYNC_WEATHER_AND_GAME_TIME( 1 );
                if (NOT sub_18302())
                {
                    if (NOT NETWORK_IS_SESSION_STARTED())
                    {
                        if (NOT NETWORK_IS_OPERATION_PENDING())
                        {
                            NETWORK_START_SESSION();
                        }
                    }
                }
                if (N_1242010017())
                {
                    NETWORK_ADVERTISE_SESSION( 0 );
                }
                l_U1496._fU536 = l_U2640 + 30000;
                sub_18462();
                switch (l_U1496._fU436[2])
                {
                    case 0:
                    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U2459, 1 );
                    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2459, 5 );
                    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U2461, 1 );
                    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2461, 5 );
                    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U2460, 1 );
                    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2460, 50 );
                    break;
                    case 1:
                    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U2459, 1 );
                    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2459, 25 );
                    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U2461, 1 );
                    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2461, 25 );
                    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U2460, 1 );
                    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2460, 70 );
                    break;
                    case 2:
                    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U2459, 1 );
                    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2459, 50 );
                    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U2461, 1 );
                    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2461, 50 );
                    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U2460, 1 );
                    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2460, 90 );
                    break;
                }
                sub_21822();
                l_U1496._fU524 = l_U2640;
                l_U1496._fU68 = 2;
            }
        }
        break;
        case 2:
        if (NOT sub_18302())
        {
            if (NOT NETWORK_IS_SESSION_STARTED())
            {
                if (NOT NETWORK_IS_OPERATION_PENDING())
                {
                    NETWORK_START_SESSION();
                }
            }
        }
        if (sub_18462())
        {
            l_U1496._fU68 = 3;
        }
        break;
        case 3:
        if (NOT sub_18302())
        {
            if (NOT NETWORK_IS_SESSION_STARTED())
            {
                if (NOT NETWORK_IS_OPERATION_PENDING())
                {
                    NETWORK_START_SESSION();
                }
            }
        }
        sub_22326();
        if (l_U1496._fU72 >= 0)
        {
            if (sub_23219())
            {
                l_U1496._fU68 = 4;
            }
        }
        break;
        case 4:
        sub_22326();
        if (NOT sub_18302())
        {
            if (NOT NETWORK_IS_SESSION_STARTED())
            {
                if (NOT NETWORK_IS_OPERATION_PENDING())
                {
                    NETWORK_START_SESSION();
                }
            }
        }
        if (l_U1496._fU72 >= 3)
        {
            sub_24759();
        }
        if (NOT l_U1496._fU660)
        {
            if (sub_25998())
            {
                l_U1496._fU660 = 1;
            }
        }
        if (NOT l_U1496._fU656)
        {
            if (l_U1496._fU72 >= 10)
            {
                if (sub_27686())
                {
                    l_U1496._fU656 = 1;
                }
            }
        }
        if (sub_28876())
        {
            sub_28960();
            l_U1496._fU68 = 5;
        }
        break;
        case 5:
        sub_28960();
        sub_22326();
        if (NOT sub_18302())
        {
            if (NOT NETWORK_IS_SESSION_STARTED())
            {
                if (NOT NETWORK_IS_OPERATION_PENDING())
                {
                    NETWORK_START_SESSION();
                }
            }
        }
        l_U1496._fU68 = 6;
        break;
        case 6:
        sub_28960();
        sub_29729();
        if (NOT sub_18302())
        {
            if (NOT NETWORK_IS_SESSION_STARTED())
            {
                if (NOT NETWORK_IS_OPERATION_PENDING())
                {
                    NETWORK_START_SESSION();
                }
            }
        }
        for ( I = 0; I < 2; I++ )
        {
            if (sub_8910( l_U1496._fU700[I] ))
            {
                if (NOT l_U2782[I])
                {
                    SET_CHAR_DECISION_MAKER( sub_8935( l_U1496._fU700[I] ), l_U2457 );
                    SET_COMBAT_DECISION_MAKER( sub_8935( l_U1496._fU700[I] ), l_U2461 );
                    l_U2782[I] = 1;
                }
            }
        }
        if (NOT l_U1496._fU660)
        {
            if (sub_25998())
            {
                l_U1496._fU660 = 1;
            }
        }
        if (sub_31604())
        {
            l_U1496._fU68 = 7;
        }
        break;
        case 7:
        sub_28960();
        sub_29729();
        if (NOT sub_18302())
        {
            if (NOT NETWORK_IS_SESSION_STARTED())
            {
                if (NOT NETWORK_IS_OPERATION_PENDING())
                {
                    NETWORK_START_SESSION();
                }
            }
        }
        if (l_U1817[GET_PLAYER_ID()]._fU104)
        {
            if (NOT l_U1817[GET_PLAYER_ID()]._fU120)
            {
                if (sub_31841())
                {
                    if (sub_31960())
                    {
                        l_U1817[GET_PLAYER_ID()]._fU120 = 1;
                    }
                }
            }
        }
        if (l_U1496._fU528 == 0)
        {
            if ((sub_33433()) || (l_U1496._fU652))
            {
                l_U1496._fU652 = 1;
                if (sub_8910( l_U1496._fU688 ))
                {
                    SET_CHAR_INVINCIBLE( sub_8935( l_U1496._fU688 ), 1 );
                }
                for ( I = 0; I < 16; I++ )
                {
                    if (sub_480( I ))
                    {
                        if (NOT l_U2677[I])
                        {
                            if (l_U2658 > 0)
                            {
                                if (l_U2658 > 1500)
                                {
                                    switch (l_U1496._fU436[2])
                                    {
                                        case 0:
                                        l_U1496._fU0[I] += 2500;
                                        l_U2677[I] = 1;
                                        break;
                                        case 1:
                                        l_U1496._fU0[I] += 3500;
                                        l_U2677[I] = 1;
                                        break;
                                        case 2:
                                        l_U1496._fU0[I] += 4500;
                                        l_U2677[I] = 1;
                                        break;
                                    }
                                }
                                else if ((l_U2658 > 1000) AND (l_U2658 < 1500))
                                {
                                    switch (l_U1496._fU436[2])
                                    {
                                        case 0:
                                        l_U1496._fU0[I] += 1875;
                                        l_U2677[I] = 1;
                                        break;
                                        case 1:
                                        l_U1496._fU0[I] += 2875;
                                        l_U2677[I] = 1;
                                        break;
                                        case 2:
                                        l_U1496._fU0[I] += 3875;
                                        l_U2677[I] = 1;
                                        break;
                                    }
                                }
                                else if (l_U2658 < 1000)
                                {
                                    switch (l_U1496._fU436[2])
                                    {
                                        case 0:
                                        l_U1496._fU0[I] += 1250;
                                        l_U2677[I] = 1;
                                        break;
                                        case 1:
                                        l_U1496._fU0[I] += 2250;
                                        l_U2677[I] = 1;
                                        break;
                                        case 2:
                                        l_U1496._fU0[I] += 3250;
                                        l_U2677[I] = 1;
                                        break;
                                    }
                                };;;
                            }
                            else if (sub_8910( l_U1496._fU688 ))
                            {
                                GET_CHAR_HEALTH( sub_8935( l_U1496._fU688 ), ref l_U2658 );
                            }
                        }
                    }
                }
                if (sub_34302())
                {
                    l_U1496._fU528 = l_U2640 - l_U1496._fU524;
                    l_U1496._fU68 = 10;
                }
            }
        }
        break;
        case 10:
        if (l_U1817[GET_PLAYER_ID()]._fU104)
        {
            if (NOT l_U1817[GET_PLAYER_ID()]._fU120)
            {
                if (sub_31841())
                {
                    if (sub_31960())
                    {
                        l_U1817[GET_PLAYER_ID()]._fU120 = 1;
                    }
                }
            }
        }
        if (sub_34510())
        {
            sub_34593();
        }
        break;
        case 8:
        if (l_U1496._fU532 == 0)
        {
            l_U1496._fU532 = l_U2640 - l_U1496._fU524;
        }
        sub_34593();
        break;
    }
    return;
}

void sub_8804()
{
    int I;
    unknown[16] uVar3;
    unknown[2] uVar20;

    array(ref uVar3, 16);
    array(ref uVar20, 2);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1817[I]._fU0;
    }
    if (sub_8881( ref l_U1496._fU940, l_U1496._fU940 ))
    {
        sub_9071( ref uVar3, ref l_U1496._fU368, 50.00000000, ref l_U1496._fU940, 1120403456 );
    }
    else if (sub_8881( ref l_U1496._fU888, l_U1496._fU888 ))
    {
        sub_9071( ref uVar3, ref l_U1496._fU368, 50.00000000, ref l_U1496._fU888, 1120403456 );
    }
    else if (sub_8881( ref l_U1496._fU1016, l_U1496._fU1016 ))
    {
        sub_9071( ref uVar3, ref l_U1496._fU368, 50.00000000, ref l_U1496._fU1016, 1120403456 );
    }
    else if (sub_8881( ref l_U1496._fU1100, l_U1496._fU1100 ))
    {
        sub_9071( ref uVar3, ref l_U1496._fU368, 50.00000000, ref l_U1496._fU1100, 1120403456 );
    }
    else
    {
        sub_9071( ref uVar3, ref l_U1496._fU368, 50.00000000, ref uVar20, 1120403456 );
    };;;;
    return;
}

int sub_8881(unknown uParam0, int iParam1)
{
    int I;

    for ( I = 0; I < iParam1; I++ )
    {
        if (sub_8910( (uParam0^)[I] ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_8910(unknown uParam0)
{
    if (DOES_PED_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        if (NOT (IS_CHAR_DEAD( sub_8935( uParam0 ) )))
        {
            if (NOT (IS_CHAR_INJURED( sub_8935( uParam0 ) )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_8935(unknown uParam0)
{
    unknown Result;

    GET_PED_FROM_NETWORK_ID( uParam0, ref Result );
    return Result;
}

void sub_9071(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
                    sub_9270( uParam1, sub_9187( sub_616( I ) ), uParam2, uParam4, uParam3, I );
                }
                else if (l_U1421)
                {
                    sub_9270( uParam1, l_U1422, uParam2, uParam4, uParam3, I );
                }
                else if (l_U1420)
                {
                    sub_9270( uParam1, sub_11459( -1, 1 ), uParam2, uParam4, uParam3, I );
                }
                else
                {
                    sub_9270( uParam1, sub_11459( GET_PLAYER_TEAM( sub_578( I ) ), 1 ), uParam2, uParam4, uParam3, I );
                };;;
            }
        }
    }
    return;
}

void sub_9187(unknown uParam0)
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

int sub_9270(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
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
            if (sub_9323( (uParam6^)[I] ))
            {
                ADD_SPAWN_BLOCKING_AREA( sub_9823( (uParam6^)[I] ), uParam5 );
            }
        }
        while (iVar12 < 127)
        {
            if (NOT l_U1417)
            {
                sub_10018( ref uParam1, uParam4 + l_U1426 );
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
                if (sub_10967())
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
            else if (sub_10967())
            {
                if (GET_SORTED_NETWORK_RESTART_NODE( uParam1, uParam4 + l_U1426, ref uVar14, ref uVar11, uParam7, 0, uParam5 ))
                {
                    bVar13 = true;
                }
            }
            else if (sub_6739() == 7)
            {
                if (GET_SORTED_NETWORK_RESTART_NODE( uParam1, uParam4 + l_U1426, ref uVar14, ref uVar11, uParam7, 9, uParam5 ))
                {
                    bVar13 = true;
                }
            }
            else if (sub_6739() == 16)
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

int sub_9323(unknown uParam0)
{
    int iVar3;

    if (DOES_PED_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        if (IS_CHAR_DEAD( sub_8935( uParam0 ) ))
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
        if (IS_VEH_DRIVEABLE( sub_9399( uParam0 ) ))
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
        if (IS_OBJECT_IN_WATER( sub_9474( uParam0 ) ))
        {
            return 0;
        }
        else
        {
            iVar3 = sub_9560( sub_9531( sub_9474( uParam0 ) ) );
            if (((iVar3 == 0) || (((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( sub_9474( uParam0 ), 1 )) < 0.30000000) AND (iVar3 < 500))) || (((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( sub_9474( uParam0 ), 0 )) < 0.30000000) AND (iVar3 < 500)))
            {
                return 0;
            }
            else if (IS_OBJECT_ATTACHED( sub_9474( uParam0 ) ))
            {
                if (DOES_VEHICLE_EXIST( GET_CAR_OBJECT_IS_ATTACHED_TO( sub_9474( uParam0 ) ) ))
                {
                    if (IS_VEH_DRIVEABLE( GET_CAR_OBJECT_IS_ATTACHED_TO( sub_9474( uParam0 ) ) ))
                    {
                        return 1;
                    }
                    else if (IS_CAR_IN_WATER( GET_CAR_OBJECT_IS_ATTACHED_TO( sub_9474( uParam0 ) ) ))
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

void sub_9399(unknown uParam0)
{
    unknown Result;

    GET_VEHICLE_FROM_NETWORK_ID( uParam0, ref Result );
    return Result;
}

void sub_9474(unknown uParam0)
{
    unknown Result;

    GET_OBJECT_FROM_NETWORK_ID( uParam0, ref Result );
    return Result;
}

void sub_9531(unknown uParam0)
{
    unknown Result;

    GET_OBJECT_HEALTH( uParam0, ref Result );
    return Result;
}

void sub_9560(unknown uParam0)
{
    return FLOOR( uParam0 );
}

void sub_9823(unknown uParam0)
{
    unknown Result;
    unknown uVar4;
    unknown uVar5;

    if (DOES_PED_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        GET_CHAR_COORDINATES( sub_8935( uParam0 ), ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        GET_DEAD_CAR_COORDINATES( sub_9399( uParam0 ), ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else if (DOES_OBJECT_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        GET_OBJECT_COORDINATES( sub_9474( uParam0 ), ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    };;;
    return Result;
}

void sub_10018(int iParam0, float fParam1)
{
    if (fParam1 > 500.00000000)
    {
        (iParam0^) = {sub_10044( (iParam0^) )};
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

void sub_10044(vector vParam0)
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
        vVar12 = {sub_10077( I )};
        uVar9 = {vParam0 - vVar12};
        fVar8 = ((uVar9._fU0 * uVar9._fU0) + (uVar9._fU4 * uVar9._fU4)) + (uVar9._fU8 * uVar9._fU8);
        if (fVar7 > fVar8)
        {
            iVar6 = I;
            fVar7 = fVar8;
        }
    }
    return sub_10077( iVar6 );
}

vector sub_10077(int iParam0)
{
    if (iParam0 == -1)
    {
        iParam0 = sub_10097( 0, 8 );
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

void sub_10097(unknown uParam0, unknown Result)
{
    GENERATE_RANDOM_INT_IN_RANGE( uParam0, Result, ref Result );
    return Result;
}

int sub_10967()
{
    int iVar2;

    iVar2 = NETWORK_GET_GAME_MODE();
    if ((((iVar2 == 13) || (iVar2 == 14)) || (iVar2 == 15)) || (iVar2 == 16))
    {
        return 1;
    }
    return 0;
}

vector sub_11459(int iParam0, unknown uParam1)
{
    int I;
    int iVar5;
    int iVar6;
    vector vVar7;

    if ((l_U1415) AND (uParam1))
    {
        return sub_10077( l_U1416 );
    }
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (IS_PLAYER_CONTROL_ON( sub_578( I ) ))
            {
                if (NOT (sub_11568( sub_616( I ), -2000.00000000, -2000.00000000, 250.00000000, 50.00000000 )))
                {
                    iVar6++;
                    if (((GET_PLAYER_TEAM( sub_578( I ) )) == iParam0) || (iParam0 == -1))
                    {
                        vVar7 = {vVar7 + (sub_9187( sub_616( I ) ))};
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
            return sub_11459( -1, 0 );
        }
        else
        {
            return sub_10077( -1 );
        }
    }
    return vVar7 / (TO_FLOAT( iVar5 ));
}

int sub_11568(unknown uParam0, vector vParam1, float fParam4)
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

void sub_12126()
{
    if (l_U1496._fU68 < 8)
    {
        if (l_U1496._fU600)
        {
            if (l_U1496._fU68 > 1)
            {
                if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1496._fU688 ))
                {
                    if (IS_CHAR_INJURED( sub_8935( l_U1496._fU688 ) ))
                    {
                        sub_12229( 0 );
                        if (DOES_BLIP_EXIST( l_U2436 ))
                        {
                            REMOVE_BLIP( l_U2436 );
                        }
                        l_U1496._fU68 = 8;
                        l_U1496._fU604 = 1;
                    }
                }
                else
                {
                    l_U1496._fU68 = 8;
                    l_U1496._fU604 = 1;
                }
            }
        }
    }
    return;
}

void sub_12229(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8318 >= 4) AND (g_U8318 <= 8))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_12467()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1817[I]._fU20;
    }
    sub_12523( ref uVar3 );
    return;
}

void sub_12523(unknown uParam0)
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
    if ((sub_7686() > 2) AND (NOT NETWORK_IS_TVT()))
    {
        if (((sub_7686() > 3) AND (iVar4[iVar21] > (sub_7686() / 2))) || ((sub_7686() == 3) AND (iVar4[iVar21] == 2)))
        {
            PRINTSTRING( "SCRIPT: Kick Player " );
            PRINTINT( iVar21 );
            PRINTSTRING( " with votes " );
            PRINTINT( iVar4[iVar21] );
            PRINTSTRING( " needed " );
            PRINTINT( sub_7686() / 2 );
            PRINTNL();
            if (IS_NETWORK_PLAYER_ACTIVE( iVar21 ))
            {
                NETWORK_KICK_PLAYER( iVar21 );
            }
        }
    }
    return;
}

void sub_12951()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1817[I]._fU40;
    }
    sub_13017( ref l_U1496._fU548, ref uVar3 );
    return;
}

void sub_13017(unknown uParam0, unknown uParam1)
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
    if ((iVar5[iVar23] > (sub_7686() / 2)) AND (iVar5[iVar23] > 0))
    {
        (uParam0^) = iVar23;
    }
    else
    {
        (uParam0^) = -1;
    }
    return;
}

void sub_13213()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (NOT sub_13222())
    {
        if (sub_8910( l_U1496._fU688 ))
        {
            if (NOT (sub_13343( sub_8935( l_U1496._fU688 ), 150.00000000 )))
            {
                uVar2 = {sub_9187( sub_8935( l_U1496._fU688 ) )};
                GET_GAME_VIEWPORT_ID( ref uVar5 );
                if (NOT (CAM_IS_SPHERE_VISIBLE( uVar5, uVar2._fU0, uVar2._fU4, uVar2._fU8, 2.00000000 )))
                {
                    if (NOT (IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE( uVar2, 2.00000000 )))
                    {
                        sub_13562( sub_8935( l_U1496._fU688 ) );
                    }
                }
            }
        }
    }
    return;
}

int sub_13222()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (l_U1817[I]._fU100)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_13343(unknown uParam0, unknown uParam1)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if ((NOT (IS_CHAR_DEAD( uParam0 ))) AND (NOT (IS_CHAR_FATALLY_INJURED( sub_616( I ) ))))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_616( I ), uParam0, uParam1, uParam1, uParam1, 0 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_13562(unknown uParam0)
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

int sub_13623()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (IS_CHAR_DEAD( sub_616( I ) ))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_13708()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (NETWORK_PLAYER_HAS_DIED_RECENTLY( I ))
            {
                if (I != (FIND_NETWORK_KILLER_OF_PLAYER( I )))
                {
                    l_U1496._fU0[FIND_NETWORK_KILLER_OF_PLAYER( I )] -= 100;
                    l_U1496._fU160[FIND_NETWORK_KILLER_OF_PLAYER( I )]++;
                }
                l_U1496._fU228[I]++;
            }
            l_U1496._fU0[I] += GET_CHAR_MONEY( sub_616( I ) );
            SET_CHAR_MONEY( sub_616( I ), 0 );
        }
        else if (PLAYER_WANTS_TO_JOIN_NETWORK_GAME( I ))
        {
            TELL_NET_PLAYER_TO_START_PLAYING( I, 0 );
        }
    }
    return;
}

void sub_13982()
{
    int I;
    unknown uVar3;

    for ( I = 0; I < l_U1496._fU940; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1496._fU940[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( sub_8935( l_U1496._fU940[I] ) ))
            {
                if ((GET_DESTROYER_OF_NETWORK_ID( l_U1496._fU940[I], ref uVar3 )) != -1)
                {
                    l_U1496._fU296[GET_DESTROYER_OF_NETWORK_ID( l_U1496._fU940[I], ref uVar3 )]++;
                }
                sub_13562( sub_8935( l_U1496._fU940[I] ) );
                l_U1496._fU940[I] = nil;
                l_U1496._fU72++;
            }
        }
    }
    for ( I = 0; I < l_U1496._fU888; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1496._fU888[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( sub_8935( l_U1496._fU888[I] ) ))
            {
                if ((GET_DESTROYER_OF_NETWORK_ID( l_U1496._fU888[I], ref uVar3 )) != -1)
                {
                    l_U1496._fU296[GET_DESTROYER_OF_NETWORK_ID( l_U1496._fU888[I], ref uVar3 )]++;
                }
                sub_13562( sub_8935( l_U1496._fU888[I] ) );
                l_U1496._fU888[I] = nil;
                l_U1496._fU72++;
            }
        }
    }
    for ( I = 0; I < l_U1496._fU700; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1496._fU700[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( sub_8935( l_U1496._fU700[I] ) ))
            {
                if ((GET_DESTROYER_OF_NETWORK_ID( l_U1496._fU700[I], ref uVar3 )) != -1)
                {
                    l_U1496._fU296[GET_DESTROYER_OF_NETWORK_ID( l_U1496._fU700[I], ref uVar3 )]++;
                }
                sub_13562( sub_8935( l_U1496._fU700[I] ) );
                l_U1496._fU700[I] = nil;
                l_U1496._fU72++;
            }
        }
    }
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1496._fU988[I] ))
        {
            if (NOT (IS_VEH_DRIVEABLE( sub_14784( l_U1496._fU988[I], "Bc.net_SwatVanSecondWave", I ) )))
            {
                sub_15044( sub_14784( l_U1496._fU988[I], "Bc.net_SwatVanSecondWave", I ) );
                l_U1496._fU988[I] = nil;
            }
        }
    }
    for ( I = 0; I < l_U1496._fU736; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1496._fU736[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( sub_8935( l_U1496._fU736[I] ) ))
            {
                if ((GET_DESTROYER_OF_NETWORK_ID( l_U1496._fU736[I], ref uVar3 )) != -1)
                {
                    l_U1496._fU296[GET_DESTROYER_OF_NETWORK_ID( l_U1496._fU736[I], ref uVar3 )]++;
                }
                sub_13562( sub_8935( l_U1496._fU736[I] ) );
                l_U1496._fU736[I] = nil;
                l_U1496._fU72++;
            }
        }
    }
    for ( I = 0; I < l_U1496._fU1100; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1496._fU1100[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( sub_8935( l_U1496._fU1100[I] ) ))
            {
                if ((GET_DESTROYER_OF_NETWORK_ID( l_U1496._fU1100[I], ref uVar3 )) != -1)
                {
                    l_U1496._fU296[GET_DESTROYER_OF_NETWORK_ID( l_U1496._fU1100[I], ref uVar3 )]++;
                }
                sub_13562( sub_8935( l_U1496._fU1100[I] ) );
                l_U1496._fU1100[I] = nil;
                l_U1496._fU72++;
            }
        }
    }
    for ( I = 0; I < 6; I++ )
    {
        if (I < 2)
        {
            if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1496._fU976[I] ))
            {
                if (NOT (IS_VEH_DRIVEABLE( sub_14784( l_U1496._fU976[I], "Bc.net_SwatVan", I ) )))
                {
                    sub_15044( sub_14784( l_U1496._fU976[I], "Bc.net_SwatVan", I ) );
                    l_U1496._fU976[I] = nil;
                }
            }
            if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1496._fU1136[I] ))
            {
                if (NOT (IS_VEH_DRIVEABLE( sub_14784( l_U1496._fU1136[I], "Bc.net_SwatVanFourthWave", I ) )))
                {
                    sub_15044( sub_14784( l_U1496._fU1136[I], "Bc.net_SwatVanFourthWave", I ) );
                    l_U1496._fU1136[I] = nil;
                }
            }
        }
    }
    for ( I = 0; I < l_U1496._fU1016; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1496._fU1016[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( sub_8935( l_U1496._fU1016[I] ) ))
            {
                if ((GET_DESTROYER_OF_NETWORK_ID( l_U1496._fU1016[I], ref uVar3 )) != -1)
                {
                    l_U1496._fU296[GET_DESTROYER_OF_NETWORK_ID( l_U1496._fU1016[I], ref uVar3 )]++;
                }
                sub_13562( sub_8935( l_U1496._fU1016[I] ) );
                l_U1496._fU1016[I] = nil;
                l_U1496._fU72++;
            }
        }
    }
    for ( I = 0; I < l_U1496._fU1152; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1496._fU1152[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( sub_8935( l_U1496._fU1152[I] ) ))
            {
                if ((GET_DESTROYER_OF_NETWORK_ID( l_U1496._fU1152[I], ref uVar3 )) != -1)
                {
                    l_U1496._fU296[GET_DESTROYER_OF_NETWORK_ID( l_U1496._fU1152[I], ref uVar3 )]++;
                }
                sub_13562( sub_8935( l_U1496._fU1152[I] ) );
                l_U1496._fU1152[I] = nil;
                l_U1496._fU72++;
            }
        }
    }
    if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1496._fU688 ))
    {
        if (IS_CHAR_FATALLY_INJURED( sub_8935( l_U1496._fU688 ) ))
        {
            if ((GET_DESTROYER_OF_NETWORK_ID( l_U1496._fU688, ref uVar3 )) != -1)
            {
                l_U1496._fU0[GET_DESTROYER_OF_NETWORK_ID( l_U1496._fU688, ref uVar3 )] -= 1000;
            }
            sub_13562( sub_8935( l_U1496._fU688 ) );
            l_U1496._fU688 = nil;
        }
    }
    if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1496._fU1148 ))
    {
        if (NOT (IS_VEH_DRIVEABLE( sub_14784( l_U1496._fU1148, "Bc.net_SwatVanForChopper", -1 ) )))
        {
            sub_15044( sub_14784( l_U1496._fU1148, "Bc.net_SwatVanForChopper", -1 ) );
            l_U1496._fU1148 = nil;
        }
    }
    if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1496._fU696 ))
    {
        if (NOT (IS_VEH_DRIVEABLE( sub_14784( l_U1496._fU696, "Bc.net_SwatVanHelipad", -1 ) )))
        {
            sub_15044( sub_14784( l_U1496._fU696, "Bc.net_SwatVanHelipad", -1 ) );
            l_U1496._fU696 = nil;
        }
    }
    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (l_U1496._fU0[I] < 0)
            {
                l_U1496._fU0[I] = 0;
            }
        }
    }
    return;
}

void sub_14784(int iParam0, unknown uParam1, int iParam2)
{
    int Result;

    if (NOT (iParam0 == nil))
    {
        GET_VEHICLE_FROM_NETWORK_ID( iParam0, ref Result );
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

void sub_15044(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

int sub_16951()
{
    if (((((((((sub_5709( 837858166 )) AND (sub_5709( -1947682830 ))) AND (sub_5709( -1004762946 ))) AND (sub_5709( 1911513875 ))) AND (sub_5709( 1560980623 ))) AND (sub_5709( 1203311498 ))) AND (sub_5709( -583281407 ))) AND (sub_5709( 1543404628 ))) AND (sub_17066( "MISSSWAT_ASSAULT" )))
    {
        return 1;
    }
    return 0;
}

int sub_17066(unknown uParam0)
{
    REQUEST_ANIMS( uParam0 );
    if (HAVE_ANIMS_LOADED( uParam0 ))
    {
        return 1;
    }
    return 0;
}

int sub_17163()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1817[I]._fU4;
    }
    if (sub_17227( ref uVar3, ref l_U1496._fU552 ))
    {
        return 1;
    }
    return 0;
}

int sub_17227(unknown uParam0, unknown uParam1)
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
    if (NOT (sub_17305( ref uVar10 )))
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
        if (sub_6739() != 16)
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

int sub_17305(unknown uParam0)
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
    if (sub_6739() == 16)
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
    if ((sub_6739() == 5) || (sub_6739() == 4))
    {
        if (iVar4 < 4)
        {
            return 0;
        }
    }
    if ((sub_17432()) || (sub_17477()))
    {
        if (sub_17477())
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
        if (sub_17574() < 2)
        {
            (uParam0^) = 1;
            return 0;
        }
    }
    return 1;
}

int sub_17432()
{
    int iVar2;

    iVar2 = NETWORK_GET_GAME_MODE();
    if ((iVar2 == 10) || (iVar2 == 12))
    {
        return 1;
    }
    return 0;
}

int sub_17477()
{
    int iVar2;

    iVar2 = NETWORK_GET_GAME_MODE();
    if (((iVar2 == 1) || (iVar2 == 3)) || (iVar2 == 4))
    {
        return 1;
    }
    return 0;
}

void sub_17574()
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

void sub_17953(unknown uParam0)
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

void sub_18124(unknown uParam0)
{
    switch (uParam0)
    {
        case -1:
        SET_TIME_OF_DAY( sub_10097( 0, 24 ), 0 );
        break;
        case 0:
        SET_TIME_OF_DAY( sub_10097( 0, 24 ), 0 );
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

int sub_18302()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1817[I]._fU44 > 0)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_18462()
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
    RESERVE_NETWORK_MISSION_PEDS_FOR_HOST( 30 );
    RESERVE_NETWORK_MISSION_VEHICLES_FOR_HOST( 15 );
    RESERVE_NETWORK_MISSION_OBJECTS_FOR_HOST( 5 );
    if ((l_U1496._fU688 == nil) AND (CAN_REGISTER_MISSION_PED()))
    {
        l_U2637 = 0;
        l_U1496._fU688 = sub_18555( 2394.67200000, 176.41460000, 5.86740000, 155.43710000 );
        SET_CHAR_MAX_TIME_IN_WATER( sub_8935( l_U1496._fU688 ), 10.00000000 );
        SET_CHAR_MAX_TIME_UNDERWATER( sub_8935( l_U1496._fU688 ), 3.00000000 );
        SET_CHAR_DROWNS_IN_WATER( sub_8935( l_U1496._fU688 ), 1 );
        SET_CHAR_HEALTH( sub_8935( l_U1496._fU688 ), 2000 );
        SET_CHAR_SUFFERS_CRITICAL_HITS( sub_8935( l_U1496._fU688 ), 0 );
        SET_CHAR_CANT_BE_DRAGGED_OUT( sub_8935( l_U1496._fU688 ), 1 );
        SET_CHAR_COMPONENT_VARIATION( sub_8935( l_U1496._fU688 ), 1, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( sub_8935( l_U1496._fU688 ), 2, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( sub_8935( l_U1496._fU688 ), 0, 0, 0 );
        REMOVE_ALL_CHAR_WEAPONS( sub_8935( l_U1496._fU688 ) );
        l_U1496._fU600 = 1;
        l_U2790++;
    }
    vVar4[0] = {2418.86800000, 217.78420000, 4.51290000};
    vVar4[1] = {2423.51000000, 214.11820000, 4.51290000};
    vVar4[2] = {2430.76700000, 209.18940000, 4.51290000};
    vVar4[3] = {2439.31600000, 201.89750000, 4.51270000};
    vVar4[4] = {2435.03900000, 205.97920000, 4.51290000};
    vVar4[5] = {2448.32000000, 195.18760000, 4.51270000};
    vVar4[6] = {2450.24900000, 207.50530000, 4.51270000};
    vVar4[7] = {2436.55200000, 222.09970000, 4.51270000};
    fVar29[0] = 162.18530000;
    fVar29[1] = 171.32700000;
    fVar29[2] = 151.79730000;
    fVar29[3] = 161.80390000;
    fVar29[4] = 131.77530000;
    fVar29[5] = 124.89660000;
    fVar29[6] = 123.20350000;
    fVar29[7] = 146.36790000;
    for ( I = 0; I < 8; I++ )
    {
        if ((l_U1496._fU940[I] == nil) AND (CAN_REGISTER_MISSION_PED()))
        {
            l_U1496._fU940[I] = sub_19501( vVar4[I], fVar29[I] );
            SET_PED_DIES_WHEN_INJURED( sub_8935( l_U1496._fU940[I] ), 1 );
            SET_CHAR_DECISION_MAKER( sub_8935( l_U1496._fU940[I] ), l_U2458 );
            SET_LOAD_COLLISION_FOR_CHAR_FLAG( sub_8935( l_U1496._fU940[I] ), 1 );
            SET_CHAR_MONEY( sub_8935( l_U1496._fU940[I] ), sub_10097( 50, 101 ) );
            l_U2790++;
        }
    }
    if ((l_U1496._fU976[0] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
    {
        l_U1496._fU976[0] = sub_19912( sub_19838( 1911513875, 2409.98000000, 217.74070000, 5.43390000, 194.58370000 ) );
        l_U2790++;
    }
    if ((l_U1496._fU976[1] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
    {
        l_U1496._fU976[1] = sub_19912( sub_19838( 1911513875, 2404.31100000, 222.48010000, 5.43370000, 173.96350000 ) );
        l_U2790++;
    }
    if ((l_U1496._fU784 == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
    {
        l_U1496._fU784 = sub_19912( sub_19838( 1560980623, 2435.60500000, 172.10800000, 5.24560000, 263.42470000 ) );
        l_U2790++;
    }
    if ((l_U1496._fU988[0] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
    {
        l_U1496._fU988[0] = sub_19912( sub_19838( 1911513875, 2264.76300000, 193.45190000, 5.73960000, 276.98980000 ) );
        SET_NETWORK_ID_CAN_MIGRATE( l_U1496._fU988[0], 1 );
        l_U2790++;
    }
    if ((l_U1496._fU988[1] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
    {
        l_U1496._fU988[1] = sub_19912( sub_19838( 1911513875, 2550.72800000, 510.77210000, 5.47940000, 226.31130000 ) );
        SET_NETWORK_ID_CAN_MIGRATE( l_U1496._fU988[1], 1 );
        l_U2790++;
    }
    if (NOT l_U2792)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref iVar3 );
        l_U2791 = iVar3;
        l_U2792 = 1;
    }
    else if (iVar3 < 2)
    {
        if ((l_U1496._fU692 == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
        {
            l_U1496._fU692 = sub_19912( sub_19838( 837858166, 2231.35800000, 737.03190000, 5.57210000, 227.61840000 ) );
            SET_NETWORK_ID_CAN_MIGRATE( l_U1496._fU692, 1 );
            SET_CAR_HEALTH( sub_14784( l_U1496._fU692, "Bc.net_Chopper", -1 ), 4000 );
            SET_CAR_ENGINE_ON( sub_14784( l_U1496._fU692, "Bc.net_Chopper", -1 ), 1, 1 );
            SET_HELI_BLADES_FULL_SPEED( sub_14784( l_U1496._fU692, "Bc.net_Chopper", -1 ) );
            LOCK_CAR_DOORS( sub_14784( l_U1496._fU692, "Bc.net_Chopper", -1 ), 2 );
            LOCK_CAR_DOORS( sub_14784( l_U1496._fU692, "Bc.net_Chopper", -1 ), 1 );
            l_U2790++;
        }
        if ((l_U1496._fU696 == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
        {
            l_U1496._fU696 = sub_19912( sub_19838( 1911513875, 2220.86900000, 729.73460000, 5.39060000, 47.78920000 ) );
            l_U2790++;
        }
        l_U2574[0] = {2227.56800000, 734.09360000, 4.53520000};
        l_U2574[1] = {2224.88800000, 733.37470000, 4.51310000};
        l_U2623[0] = 138.32000000;
        l_U2623[1] = 281.23550000;
        for ( I = 0; I < 2; I++ )
        {
            if ((l_U1496._fU700[I] == nil) AND (CAN_REGISTER_MISSION_PED()))
            {
                l_U1496._fU700[I] = sub_19501( l_U2574[I], l_U2623[I] );
                SET_PED_DIES_WHEN_INJURED( sub_8935( l_U1496._fU700[I] ), 1 );
                TASK_TOGGLE_DUCK( sub_8935( l_U1496._fU700[I] ), 0 );
                SET_CHAR_DECISION_MAKER( sub_8935( l_U1496._fU700[I] ), l_U2457 );
                SET_LOAD_COLLISION_FOR_CHAR_FLAG( sub_8935( l_U1496._fU700[I] ), 1 );
                l_U2790++;
            }
        }
    }
    if (iVar3 != 1)
    {
        if ((l_U1496._fU712[0] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
        {
            l_U1496._fU712[0] = sub_19912( sub_19838( 1203311498, 2312.09300000, 76.40230000, 5.33040000, 93.77950000 ) );
            l_U2790++;
        }
        if ((l_U1496._fU712[1] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
        {
            l_U1496._fU712[1] = sub_19912( sub_19838( 1203311498, 2612.55800000, 387.26160000, 5.33010000, 146.84600000 ) );
            l_U2790++;
        }
    }
    if (iVar3 > 0)
    {
        if ((l_U1496._fU724[0] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
        {
            l_U1496._fU724[0] = sub_19912( sub_19838( -583281407, 2312.59500000, 90.01740000, 5.47450000, 273.00020000 ) );
            l_U2790++;
        }
        if ((l_U1496._fU724[1] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
        {
            l_U1496._fU724[1] = sub_19912( sub_19838( -583281407, 2619.78100000, 386.98830000, 5.47410000, 180.00000000 ) );
            l_U2790++;
        }
    }
    if (iVar3 == 0)
    {
        if (l_U2790 == 20)
        {
            return 1;
        }
    }
    else if (iVar3 == 1)
    {
        if (l_U2790 >= 18)
        {
            return 1;
        }
    }
    else if (iVar3 == 2)
    {
        if (l_U2790 >= 18)
        {
            return 1;
        }
    };;;
    return 0;
}

void sub_18555(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    int iVar7;

    if (l_U2637 == 0)
    {
        uVar6 = sub_18586( -1947682830, uParam0, uParam3 );
        SET_CHAR_DECISION_MAKER( uVar6, l_U2458 );
        SET_CHAR_HEALTH( uVar6, 2000 );
        SET_CHAR_RELATIONSHIP_GROUP( uVar6, 24 );
        GIVE_DELAYED_WEAPON_TO_CHAR( uVar6, 14, 9999, 1 );
    }
    else if (l_U2637 == 1)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar7 );
        if (iVar7 == 0)
        {
            CREATE_CHAR( 26, -1004762946, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref uVar6, 1 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar6 );
            GIVE_DELAYED_WEAPON_TO_CHAR( uVar6, 15, 10000, 1 );
        }
        if (iVar7 == 1)
        {
            CREATE_CHAR( 26, -1004762946, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref uVar6, 1 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar6 );
            GIVE_DELAYED_WEAPON_TO_CHAR( uVar6, 10, 1500, 1 );
        }
        SET_CHAR_HEADING( uVar6, 0.00000000 );
        SET_CHAR_RELATIONSHIP_GROUP( uVar6, 25 );
        SET_CHAR_DECISION_MAKER( uVar6, l_U2458 );
        SET_CHAR_IS_TARGET_PRIORITY( uVar6, 1 );
    }
    return sub_18887( uVar6 );
}

void sub_18586(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown Result;

    CREATE_CHAR( 26, uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, ref Result, 1 );
    SET_CHAR_HEADING( Result, uParam4 );
    return Result;
}

void sub_18887(unknown uParam0)
{
    unknown Result;

    GET_NETWORK_ID_FROM_PED( uParam0, ref Result );
    return Result;
}

void sub_19501(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    CREATE_CHAR( 26, -1004762946, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref uVar6, 1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar6 );
    SET_CHAR_HEADING( uVar6, uParam3 );
    GIVE_DELAYED_WEAPON_TO_CHAR( uVar6, 15, 10000, 1 );
    SET_CHAR_RELATIONSHIP_GROUP( uVar6, 25 );
    SET_CHAR_DECISION_MAKER( uVar6, l_U2457 );
    SET_CHAR_IS_TARGET_PRIORITY( uVar6, 1 );
    SET_CHAR_PROP_INDEX( uVar6, 0, 0 );
    return sub_18887( uVar6 );
}

void sub_19838(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown Result;

    CREATE_CAR( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, ref Result, 1 );
    SET_CAR_HEADING( Result, uParam4 );
    SET_CAR_COORDINATES( Result, uParam1._fU0, uParam1._fU4, uParam1._fU8 );
    return Result;
}

void sub_19912(unknown uParam0)
{
    unknown Result;

    GET_NETWORK_ID_FROM_VEHICLE( uParam0, ref Result );
    return Result;
}

void sub_21822()
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
    vVar2[0] = {2355.70300000, 170.24580000, 4.80800000};
    vVar2[1] = {2346.37200000, 137.49060000, 5.93290000};
    vVar2[2] = {2384.16300000, 198.36790000, 4.80770000};
    vVar2[3] = {2448.50200000, 194.19800000, 4.80770000};
    vVar2[4] = {2450.80300000, 234.52920000, 4.80820000};
    vVar2[5] = {2370.74500000, 105.81600000, 4.80770000};
    vVar2[6] = {2345.36300000, 119.25640000, 4.80800000};
    vVar2[7] = {2400.20100000, 176.25100000, 6.07380000};
    vVar2[8] = {2371.38900000, 141.02440000, 4.80770000};
    vVar2[9] = {2431.51300000, 208.29460000, 4.80770000};
    for ( I = 0; I < 10; I++ )
    {
        if ((l_U1496._fU1240[I] == nil) AND (CAN_REGISTER_MISSION_OBJECT()))
        {
            CREATE_PICKUP( 1069950328, 22, vVar2[I]._fU0, vVar2[I]._fU4, vVar2[I]._fU8, ref l_U1496._fU1240[I], 0 );
        }
    }
    return;
}

void sub_22326()
{
    int I;

    if ((NOT l_U2782[0]) || (NOT l_U2782[1]))
    {
        if (((sub_22368( l_U1496._fU696 )) AND (sub_8910( l_U1496._fU700[0] ))) AND (sub_8910( l_U1496._fU700[1] )))
        {
            if ((((sub_22567( 2220.86900000, 729.73460000, 5.39060000, 150.00000000 )) || (sub_22673( sub_8935( l_U1496._fU700[0] ) ))) || (sub_22673( sub_8935( l_U1496._fU700[1] ) ))) || (sub_22830( sub_14784( l_U1496._fU696, "Bc.net_SwatVanHelipad", -1 ) )))
            {
                for ( I = 0; I < 2; I++ )
                {
                    if (sub_8910( l_U1496._fU700[I] ))
                    {
                        if (NOT l_U2782[I])
                        {
                            SET_CHAR_DECISION_MAKER( sub_8935( l_U1496._fU700[I] ), l_U2457 );
                            SET_COMBAT_DECISION_MAKER( sub_8935( l_U1496._fU700[I] ), l_U2461 );
                            l_U2782[I] = 1;
                        }
                    }
                }
            }
        }
        else
        {
            for ( I = 0; I < 2; I++ )
            {
                if (sub_8910( l_U1496._fU700[I] ))
                {
                    if (NOT l_U2782[I])
                    {
                        SET_CHAR_DECISION_MAKER( sub_8935( l_U1496._fU700[I] ), l_U2457 );
                        SET_COMBAT_DECISION_MAKER( sub_8935( l_U1496._fU700[I] ), l_U2461 );
                        l_U2782[I] = 1;
                    }
                }
            }
        }
    }
    return;
}

int sub_22368(unknown uParam0)
{
    float fVar3;
    int iVar4;

    if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        if (IS_VEH_DRIVEABLE( sub_9399( uParam0 ) ))
        {
            GET_CAR_MODEL( sub_9399( uParam0 ), ref iVar4 );
            if (((iVar4 == -1660661558) || (iVar4 == 353883353)) || (iVar4 == 837858166))
            {
                return 1;
            }
            else
            {
                GET_CAR_UPRIGHT_VALUE( sub_9399( uParam0 ), ref fVar3 );
                if (fVar3 > 0.00000000)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_22567(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_616( I ), uParam0, uParam1, uParam2, uParam3, uParam3, uParam3, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_22673(unknown uParam0)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (NOT (IS_CHAR_DEAD( uParam0 )))
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( uParam0, sub_616( I ), 0 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_22830(unknown uParam0)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (IS_VEH_DRIVEABLE( uParam0 ))
            {
                if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( uParam0, sub_616( I ) ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_23219()
{
    int I;
    unknown uVar3;

    for ( I = 0; I < 8; I++ )
    {
        if ((l_U1496._fU888[I] == nil) AND (CAN_REGISTER_MISSION_PED()))
        {
            if (I < 4)
            {
                if (sub_22368( l_U1496._fU988[0] ))
                {
                    if (sub_23300() < 30)
                    {
                        l_U1496._fU888[I] = sub_18887( sub_23777( -1004762946, sub_14784( l_U1496._fU988[0], "Bc.net_SwatVanSecondWave", 0 ), I ) );
                        l_U2758++;
                    }
                }
            }
            else if (sub_22368( l_U1496._fU988[1] ))
            {
                if (sub_23300() < 30)
                {
                    l_U1496._fU888[I] = sub_18887( sub_23777( -1004762946, sub_14784( l_U1496._fU988[1], "Bc.net_SwatVanSecondWave", 1 ), I - 4 ) );
                    l_U2758++;
                }
            }
            SET_CHAR_DECISION_MAKER( sub_8935( l_U1496._fU888[I] ), l_U2457 );
            SET_LOAD_COLLISION_FOR_CHAR_FLAG( sub_8935( l_U1496._fU888[I] ), 1 );
            SET_CHAR_WILL_USE_CARS_IN_COMBAT( sub_8935( l_U1496._fU888[I] ), 0 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( sub_8935( l_U1496._fU888[I] ) );
            SET_CHAR_RELATIONSHIP_GROUP( sub_8935( l_U1496._fU888[I] ), 25 );
            GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref uVar3 );
            REMOVE_ALL_CHAR_WEAPONS( sub_8935( l_U1496._fU888[I] ) );
            sub_24188( sub_8935( l_U1496._fU888[I] ) );
            SET_CHAR_MONEY( sub_8935( l_U1496._fU888[I] ), sub_10097( 50, 101 ) );
            SET_CHAR_PROP_INDEX( sub_8935( l_U1496._fU888[I] ), 0, 0 );
            SET_PED_DIES_WHEN_INJURED( sub_8935( l_U1496._fU888[I] ), 1 );
            if (I == 0)
            {
                SET_COMBAT_DECISION_MAKER( sub_8935( l_U1496._fU888[I] ), l_U2459 );
            }
            else
            {
                SET_COMBAT_DECISION_MAKER( sub_8935( l_U1496._fU888[I] ), l_U2459 );
            }
        }
    }
    if (l_U2758 == 8)
    {
        l_U1496._fU616 = 1;
        return 1;
    }
    return 0;
}

void sub_23300()
{
    int I;
    int Result;

    for ( I = 0; I < l_U1496._fU940; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1496._fU940[I] ))
        {
            Result++;
        }
    }
    for ( I = 0; I < l_U1496._fU888; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1496._fU888[I] ))
        {
            Result++;
        }
    }
    for ( I = 0; I < l_U1496._fU1016; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1496._fU1016[I] ))
        {
            Result++;
        }
    }
    for ( I = 0; I < l_U1496._fU1100; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1496._fU1100[I] ))
        {
            Result++;
        }
    }
    for ( I = 0; I < l_U1496._fU700; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1496._fU700[I] ))
        {
            Result++;
        }
    }
    for ( I = 0; I < l_U1496._fU1152; I++ )
    {
        if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1496._fU1152[I] ))
        {
            Result++;
        }
    }
    if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1496._fU688 ))
    {
        Result++;
    }
    return Result;
}

void sub_23777(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_24188(unknown uParam0)
{
    int iVar3;

    if (sub_24197() < 3)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref iVar3 );
        if (iVar3 < 2)
        {
            GIVE_WEAPON_TO_CHAR( uParam0, 10, 10000, 1 );
        }
        else
        {
            GIVE_WEAPON_TO_CHAR( uParam0, 13, 10000, 1 );
        }
    }
    else if (sub_24197() == 3)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref iVar3 );
        if (iVar3 < 2)
        {
            GIVE_WEAPON_TO_CHAR( uParam0, 13, 10000, 1 );
        }
        else
        {
            GIVE_WEAPON_TO_CHAR( uParam0, 15, 10000, 1 );
        }
    }
    else if (sub_24197() == 4)
    {
        GIVE_WEAPON_TO_CHAR( uParam0, 15, 10000, 1 );
    };;;
    return;
}

void sub_24197()
{
    int I;
    int Result;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if ((NOT l_U1817[I]._fU68) AND (NOT l_U1817[I]._fU104))
            {
                Result++;
            }
        }
    }
    return Result;
}

void sub_24759()
{
    unknown[20] uVar2;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;

    array(ref uVar2, 20);
    if (sub_24773( 25 ))
    {
        l_U2759 = 10;
    }
    else
    {
        l_U2759 = 20;
    }
    if (l_U2654 == (l_U2759 - 1))
    {
        l_U2654 = 0;
    }
    if (NOT l_U2712)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref l_U2653 );
        l_U2712 = 1;
    }
    else
    {
        GENERATE_RANDOM_INT_IN_RANGE( 4, 7, ref l_U2653 );
        l_U2712 = 0;
    }
    if (l_U2640 > l_U2651)
    {
        if (sub_23300() < 30)
        {
            if (NOT (sub_25193( l_U2530[l_U2653] )))
            {
                if ((l_U1496._fU1016[l_U2654] == nil) AND (CAN_REGISTER_MISSION_PED()))
                {
                    if (NOT l_U1496._fU620)
                    {
                        l_U1496._fU620 = 1;
                    }
                    l_U1496._fU1016[l_U2654] = sub_19501( l_U2530[l_U2653], l_U2596[l_U2653] );
                    SET_PED_DIES_WHEN_INJURED( sub_8935( l_U1496._fU1016[l_U2654] ), 1 );
                    SET_COMBAT_DECISION_MAKER( sub_8935( l_U1496._fU1016[l_U2654] ), l_U2461 );
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( sub_8935( l_U1496._fU1016[l_U2654] ), 1 );
                    if (l_U1496._fU72 < 40)
                    {
                        SET_CHAR_MONEY( sub_8935( l_U1496._fU1016[l_U2654] ), sub_10097( 35, 71 ) );
                    }
                    REMOVE_ALL_CHAR_WEAPONS( sub_8935( l_U1496._fU1016[l_U2654] ) );
                    sub_24188( sub_8935( l_U1496._fU1016[l_U2654] ) );
                    l_U2712 = 0;
                    l_U2647++;
                    if (l_U2759 == 10)
                    {
                        sub_25714( 0 );
                    }
                    else
                    {
                        sub_25714( 1 );
                    }
                    if (l_U2654 < l_U2759)
                    {
                        l_U2654++;
                    }
                }
                else
                {
                    l_U2654++;
                }
            }
        }
    }
    return;
}

int sub_24773(int iParam0)
{
    int I;
    int iVar4;
    int iVar5;
    unknown uVar6;
    unknown uVar7;

    for ( I = 0; I < l_U1496._fU940; I++ )
    {
        if (sub_8910( l_U1496._fU940[I] ))
        {
            iVar4++;
        }
    }
    for ( I = 0; I < l_U1496._fU888; I++ )
    {
        if (sub_8910( l_U1496._fU888[I] ))
        {
            iVar4++;
        }
    }
    for ( I = 0; I < l_U1496._fU1100; I++ )
    {
        if (sub_8910( l_U1496._fU1100[I] ))
        {
            iVar4++;
        }
    }
    iVar5 = (l_U1496._fU940 + l_U1496._fU888) + l_U1496._fU1100;
    uVar6 = TO_FLOAT( iParam0 / 100 );
    uVar7 = TO_FLOAT( iVar5 );
    if ((TO_FLOAT( iVar4 )) > (uVar7 * uVar6))
    {
        return 1;
    }
    return 0;
}

int sub_25193(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    GET_GAME_VIEWPORT_ID( ref uVar5 );
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_869(), uParam0._fU0, uParam0._fU4, uParam0._fU8, 15.00000000, 15.00000000, 15.00000000, 0 ))
    {
        return 1;
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_869(), uParam0._fU0, uParam0._fU4, uParam0._fU8, 120.00000000, 120.00000000, 120.00000000, 0 ))
    {
        if (CAM_IS_SPHERE_VISIBLE( uVar5, uParam0._fU0, uParam0._fU4, uParam0._fU8, 2.00000000 ))
        {
            return 1;
        }
    }
    if (IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE( uParam0, 2.00000000 ))
    {
        return 1;
    }
    return 0;
}

void sub_25714(boolean bParam0)
{
    if (bParam0)
    {
        if (sub_24197() < 3)
        {
            l_U2651 = l_U2640 + 3000;
        }
        else if (sub_24197() == 4)
        {
            l_U2651 = l_U2640 + 2000;
        }
        else if (sub_24197() == 4)
        {
            l_U2651 = l_U2640 + 1000;
        };;;
    }
    else if (sub_24197() < 3)
    {
        l_U2651 = l_U2640 + 5000;
    }
    else if (sub_24197() == 4)
    {
        l_U2651 = l_U2640 + 3750;
    }
    else if (sub_24197() == 4)
    {
        l_U2651 = l_U2640 + 2500;
    };;;;
    return;
}

int sub_25998()
{
    int J;
    int I;

    for ( J = 0; J < 16; J++ )
    {
        if (sub_480( J ))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_616( J ) ))
            {
                if ((IS_CHAR_IN_AREA_3D( sub_616( J ), 2397.29100000, 315.98070000, 4.58540000, 2443.07100000, 300.68200000, 10.46040000, 0 )) || (l_U2763))
                {
                    if (NOT l_U2763)
                    {
                        l_U2763 = 1;
                    }
                    if ((l_U1496._fU1148 == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
                    {
                        l_U1496._fU1148 = sub_19912( sub_19838( 1911513875, 2371.60900000, 509.15630000, 5.78190000, 270.00000000 ) );
                        SET_CAR_ENGINE_ON( sub_14784( l_U1496._fU1148, "Bc.net_SwatVanForChopper", -1 ), 1, 1 );
                    }
                    else if (sub_26257( l_U1496._fU1148 ))
                    {
                        if (NOT (l_U1496._fU1148 == nil))
                        {
                            l_U1496._fU1148 = nil;
                        }
                    }
                    if (sub_22368( l_U1496._fU1148 ))
                    {
                        for ( I = 0; I < 4; I++ )
                        {
                            if (sub_23300() < 30)
                            {
                                if ((l_U1496._fU1152[I] == nil) AND (CAN_REGISTER_MISSION_PED()))
                                {
                                    l_U1496._fU1152[I] = sub_18887( sub_23777( -1004762946, sub_14784( l_U1496._fU1148, "Bc.net_SwatVanForChopper", -1 ), I ) );
                                    SET_CHAR_MONEY( sub_8935( l_U1496._fU1152[I] ), sub_10097( 50, 101 ) );
                                    SET_PED_DIES_WHEN_INJURED( sub_8935( l_U1496._fU1152[I] ), 1 );
                                    SET_CHAR_RANDOM_COMPONENT_VARIATION( sub_8935( l_U1496._fU1152[I] ) );
                                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( sub_8935( l_U1496._fU1152[I] ), 1 );
                                    SET_CHAR_RELATIONSHIP_GROUP( sub_8935( l_U1496._fU1152[I] ), 25 );
                                    if (I == 0)
                                    {
                                        SET_CHAR_DECISION_MAKER( sub_8935( l_U1496._fU1152[I] ), l_U2458 );
                                    }
                                    else
                                    {
                                        SET_CHAR_DECISION_MAKER( sub_8935( l_U1496._fU1152[I] ), l_U2457 );
                                        SET_COMBAT_DECISION_MAKER( sub_8935( l_U1496._fU1152[I] ), l_U2459 );
                                    }
                                    SET_CHAR_WILL_USE_CARS_IN_COMBAT( sub_8935( l_U1496._fU1152[I] ), 1 );
                                    GIVE_DELAYED_WEAPON_TO_CHAR( sub_8935( l_U1496._fU1152[I] ), 12, 2000, 1 );
                                    SET_CHAR_WILL_DO_DRIVEBYS( sub_8935( l_U1496._fU1152[I] ), 1 );
                                    SET_CHAR_PROP_INDEX( sub_8935( l_U1496._fU1152[I] ), 0, 0 );
                                    l_U2762++;
                                }
                            }
                        }
                    }
                }
                if ((IS_CHAR_IN_AREA_3D( sub_616( J ), 2459.07500000, 329.87080000, 4.31260000, 2614.41900000, 199.52390000, 10.18760000, 0 )) || (l_U2763))
                {
                    if (NOT l_U2763)
                    {
                        l_U2763 = 1;
                    }
                    if ((l_U1496._fU1148 == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
                    {
                        l_U1496._fU1148 = sub_19912( sub_19838( 1911513875, 2629.52500000, 445.68450000, 5.53610000, 90.00000000 ) );
                        SET_CAR_ENGINE_ON( sub_14784( l_U1496._fU1148, "Bc.net_SwatVanForChopper", -1 ), 1, 1 );
                    }
                    else if (sub_26257( l_U1496._fU1148 ))
                    {
                        if (NOT (l_U1496._fU1148 == nil))
                        {
                            l_U1496._fU1148 = nil;
                        }
                    }
                    if (sub_22368( l_U1496._fU1148 ))
                    {
                        for ( I = 0; I < 4; I++ )
                        {
                            if (sub_23300() < 30)
                            {
                                if ((l_U1496._fU1152[I] == nil) AND (CAN_REGISTER_MISSION_PED()))
                                {
                                    l_U1496._fU1152[I] = sub_18887( sub_23777( -1004762946, sub_14784( l_U1496._fU1148, "Bc.net_SwatVanForChopper", -1 ), I ) );
                                    SET_CHAR_MONEY( sub_8935( l_U1496._fU1152[I] ), sub_10097( 50, 101 ) );
                                    SET_PED_DIES_WHEN_INJURED( sub_8935( l_U1496._fU1152[I] ), 1 );
                                    SET_CHAR_RANDOM_COMPONENT_VARIATION( sub_8935( l_U1496._fU1152[I] ) );
                                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( sub_8935( l_U1496._fU1152[I] ), 1 );
                                    SET_CHAR_RELATIONSHIP_GROUP( sub_8935( l_U1496._fU1152[I] ), 25 );
                                    if (I == 0)
                                    {
                                        SET_CHAR_DECISION_MAKER( sub_8935( l_U1496._fU1152[I] ), l_U2458 );
                                    }
                                    else
                                    {
                                        SET_CHAR_DECISION_MAKER( sub_8935( l_U1496._fU1152[I] ), l_U2457 );
                                        SET_COMBAT_DECISION_MAKER( sub_8935( l_U1496._fU1152[I] ), l_U2459 );
                                    }
                                    SET_CHAR_WILL_USE_CARS_IN_COMBAT( sub_8935( l_U1496._fU1152[I] ), 1 );
                                    GIVE_DELAYED_WEAPON_TO_CHAR( sub_8935( l_U1496._fU1152[I] ), 12, 2000, 1 );
                                    SET_CHAR_PROP_INDEX( sub_8935( l_U1496._fU1152[I] ), 0, 0 );
                                    l_U2762++;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (l_U2762 == 4)
    {
        return 1;
    }
    return 0;
}

int sub_26257(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        if (IS_VEH_DRIVEABLE( sub_9399( uParam0 ) ))
        {
            return 0;
        }
    }
    return 1;
}

int sub_27686()
{
    int I;

    if (NOT (sub_25193( 2612.90800000, 452.17830000, 5.39080000 )))
    {
        for ( I = 0; I < 4; I++ )
        {
            if (sub_23300() < 30)
            {
                if (I == 0)
                {
                    if ((l_U1496._fU1136[0] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
                    {
                        l_U1496._fU1136[0] = sub_19912( sub_19838( 1911513875, 2612.90800000, 452.17830000, 5.39080000, 180.00000000 ) );
                        l_U2761++;
                    }
                }
                if ((l_U1496._fU1100[I] == nil) AND (CAN_REGISTER_MISSION_PED()))
                {
                    if (sub_22368( l_U1496._fU1136[0] ))
                    {
                        l_U1496._fU1100[I] = sub_18887( sub_23777( -1004762946, sub_14784( l_U1496._fU1136[0], "Bc.net_SwatVanFourthWave", 0 ), I ) );
                        SET_PED_DIES_WHEN_INJURED( sub_8935( l_U1496._fU1100[I] ), 1 );
                        SET_CHAR_MONEY( sub_8935( l_U1496._fU1100[I] ), sub_10097( 50, 101 ) );
                        SET_LOAD_COLLISION_FOR_CHAR_FLAG( sub_8935( l_U1496._fU1100[I] ), 1 );
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( sub_8935( l_U1496._fU1100[I] ) );
                        SET_CHAR_RELATIONSHIP_GROUP( sub_8935( l_U1496._fU1100[I] ), 25 );
                        sub_24188( sub_8935( l_U1496._fU1100[I] ) );
                        SET_CHAR_DECISION_MAKER( sub_8935( l_U1496._fU1100[I] ), l_U2457 );
                        SET_COMBAT_DECISION_MAKER( sub_8935( l_U1496._fU1100[I] ), l_U2459 );
                        SET_CHAR_WILL_USE_CARS_IN_COMBAT( sub_8935( l_U1496._fU1100[I] ), 0 );
                        SET_CHAR_PROP_INDEX( sub_8935( l_U1496._fU1100[I] ), 0, 0 );
                        l_U2760++;
                    }
                }
            }
        }
    }
    if (NOT (sub_25193( 2619.33800000, 451.73610000, 5.39080000 )))
    {
        if ((l_U1496._fU1136[1] == nil) AND (CAN_REGISTER_MISSION_VEHICLE()))
        {
            l_U1496._fU1136[1] = sub_19912( sub_19838( 1911513875, 2619.33800000, 451.73610000, 5.39080000, 180.00000000 ) );
            l_U2761++;
        }
        for ( I = 4; I <= 7; I++ )
        {
            if (sub_23300() < 30)
            {
                if ((l_U1496._fU1100[I] == nil) AND (CAN_REGISTER_MISSION_PED()))
                {
                    if (sub_22368( l_U1496._fU1136[1] ))
                    {
                        l_U1496._fU1100[I] = sub_18887( sub_23777( -1004762946, sub_14784( l_U1496._fU1136[1], "Bc.net_SwatVanFourthWave", 1 ), I - 4 ) );
                        SET_PED_DIES_WHEN_INJURED( sub_8935( l_U1496._fU1100[I] ), 1 );
                        SET_CHAR_MONEY( sub_8935( l_U1496._fU1100[I] ), sub_10097( 50, 101 ) );
                        SET_LOAD_COLLISION_FOR_CHAR_FLAG( sub_8935( l_U1496._fU1100[I] ), 1 );
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( sub_8935( l_U1496._fU1100[I] ) );
                        SET_CHAR_RELATIONSHIP_GROUP( sub_8935( l_U1496._fU1100[I] ), 25 );
                        sub_24188( sub_8935( l_U1496._fU1100[I] ) );
                        SET_CHAR_DECISION_MAKER( sub_8935( l_U1496._fU1100[I] ), l_U2457 );
                        SET_COMBAT_DECISION_MAKER( sub_8935( l_U1496._fU1100[I] ), l_U2459 );
                        SET_CHAR_WILL_USE_CARS_IN_COMBAT( sub_8935( l_U1496._fU1100[I] ), 0 );
                        SET_CHAR_PROP_INDEX( sub_8935( l_U1496._fU1100[I] ), 0, 0 );
                        l_U2760++;
                    }
                }
            }
        }
    }
    if ((l_U2761 == 2) AND (l_U2760 == 8))
    {
        return 1;
    }
    return 0;
}

int sub_28876()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1817[I]._fU116)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_28960()
{
    if (l_U1496._fU664)
    {
        if (sub_28983())
        {
            l_U1496._fU668 = 1;
            l_U1496._fU664 = 0;
        }
        if (NOT sub_29325())
        {
            l_U1496._fU668 = 1;
            l_U1496._fU664 = 0;
        }
    }
    else if (sub_29325())
    {
        l_U1496._fU664 = 1;
    }
    if (l_U1496._fU668)
    {
        if (NOT sub_29325())
        {
            l_U1496._fU672 = 1;
            l_U1496._fU668 = 0;
        }
    }
    if (l_U1496._fU672)
    {
        if (sub_8910( l_U1496._fU688 ))
        {
            if (sub_13343( sub_8935( l_U1496._fU688 ), 8.00000000 ))
            {
                l_U1496._fU664 = 1;
                l_U1496._fU672 = 0;
            }
        }
    }
    return;
}

int sub_28983()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (sub_8910( l_U1496._fU688 ))
            {
                if (DOES_GROUP_EXIST( sub_29037( I ) ))
                {
                    if (IS_GROUP_MEMBER( sub_8935( l_U1496._fU688 ), sub_29037( I ) ))
                    {
                        if (IS_CHAR_IN_ANY_HELI( sub_616( I ) ))
                        {
                            if ((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_8935( l_U1496._fU688 ), sub_616( I ), 40.00000000, 40.00000000, 40.00000000, 0 ))) || (IS_CHAR_DEAD( sub_616( I ) )))
                            {
                                return 1;
                            }
                        }
                        else if ((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_8935( l_U1496._fU688 ), sub_616( I ), 40.00000000, 40.00000000, 40.00000000, 0 ))) || (IS_CHAR_DEAD( sub_616( I ) )))
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

void sub_29037(unknown uParam0)
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( uParam0 ), ref Result );
    return Result;
}

int sub_29325()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (sub_8910( l_U1496._fU688 ))
            {
                if (DOES_GROUP_EXIST( sub_29037( I ) ))
                {
                    if (IS_GROUP_MEMBER( sub_8935( l_U1496._fU688 ), sub_29037( I ) ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_29729()
{
    int I;

    for ( I = 0; I < l_U1496._fU940; I++ )
    {
        if (sub_8910( l_U1496._fU940[I] ))
        {
            if (NOT (sub_13343( sub_8935( l_U1496._fU940[I] ), 200.00000000 )))
            {
                sub_13562( sub_8935( l_U1496._fU940[I] ) );
                l_U1496._fU940[I] = nil;
            }
        }
    }
    for ( I = 0; I < l_U1496._fU888; I++ )
    {
        if (sub_8910( l_U1496._fU888[I] ))
        {
            if (NOT (sub_13343( sub_8935( l_U1496._fU888[I] ), 200.00000000 )))
            {
                sub_13562( sub_8935( l_U1496._fU888[I] ) );
                l_U1496._fU888[I] = nil;
            }
        }
    }
    for ( I = 0; I < l_U1496._fU1016; I++ )
    {
        if (sub_8910( l_U1496._fU1016[I] ))
        {
            if (NOT (sub_13343( sub_8935( l_U1496._fU1016[I] ), 200.00000000 )))
            {
                sub_13562( sub_8935( l_U1496._fU1016[I] ) );
                l_U1496._fU1016[I] = nil;
            }
        }
    }
    for ( I = 0; I < l_U1496._fU1100; I++ )
    {
        if (sub_8910( l_U1496._fU1100[I] ))
        {
            if (NOT (sub_13343( sub_8935( l_U1496._fU1100[I] ), 200.00000000 )))
            {
                sub_13562( sub_8935( l_U1496._fU1100[I] ) );
                l_U1496._fU1100[I] = nil;
            }
        }
    }
    for ( I = 0; I < l_U1496._fU700; I++ )
    {
        if (sub_8910( l_U1496._fU700[I] ))
        {
            if (NOT (sub_13343( sub_8935( l_U1496._fU700[I] ), 200.00000000 )))
            {
                sub_13562( sub_8935( l_U1496._fU700[I] ) );
                l_U1496._fU700[I] = nil;
            }
        }
    }
    for ( I = 0; I < l_U1496._fU1152; I++ )
    {
        if (sub_8910( l_U1496._fU1152[I] ))
        {
            if (NOT (sub_13343( sub_8935( l_U1496._fU1152[I] ), 200.00000000 )))
            {
                sub_13562( sub_8935( l_U1496._fU1152[I] ) );
                l_U1496._fU1152[I] = nil;
            }
        }
    }
    for ( I = 0; I < l_U1496._fU976; I++ )
    {
        if (sub_22368( l_U1496._fU976[I] ))
        {
            if (NOT (sub_30579( sub_14784( l_U1496._fU976[I], "Bc.net_SwatVan", I ), 200.00000000 )))
            {
                sub_15044( sub_14784( l_U1496._fU976[I], "Bc.net_SwatVan", I ) );
                l_U1496._fU976[I] = nil;
            }
        }
    }
    for ( I = 0; I < l_U1496._fU988; I++ )
    {
        if (sub_22368( l_U1496._fU988[I] ))
        {
            if (NOT (sub_30579( sub_14784( l_U1496._fU988[I], "Bc.net_SwatVanSecondWave", I ), 200.00000000 )))
            {
                sub_15044( sub_14784( l_U1496._fU988[I], "Bc.net_SwatVanSecondWave", I ) );
                l_U1496._fU988[I] = nil;
            }
        }
    }
    for ( I = 0; I < l_U1496._fU1136; I++ )
    {
        if (sub_22368( l_U1496._fU1136[I] ))
        {
            if (NOT (sub_30579( sub_14784( l_U1496._fU1136[I], "Bc.net_SwatVanFourthWave", I ), 200.00000000 )))
            {
                sub_15044( sub_14784( l_U1496._fU1136[I], "Bc.net_SwatVanFourthWave", I ) );
                l_U1496._fU1136[I] = nil;
            }
        }
    }
    if (sub_22368( l_U1496._fU1148 ))
    {
        if (NOT (sub_30579( sub_14784( l_U1496._fU1148, "Bc.net_SwatVanForChopper", -1 ), 200.00000000 )))
        {
            sub_15044( sub_14784( l_U1496._fU1148, "Bc.net_SwatVanForChopper", -1 ) );
            l_U1496._fU1148 = nil;
        }
    }
    if (sub_22368( l_U1496._fU696 ))
    {
        if (NOT (sub_30579( sub_14784( l_U1496._fU696, "Bc.net_SwatVanHelipad", -1 ), 200.00000000 )))
        {
            sub_15044( sub_14784( l_U1496._fU696, "Bc.net_SwatVanHelipad", -1 ) );
            l_U1496._fU696 = nil;
        }
    }
    return;
}

int sub_30579(unknown uParam0, unknown uParam1)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (NOT (IS_CAR_DEAD( uParam0 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_616( I ), uParam0, uParam1, uParam1, uParam1, 0 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_31604()
{
    unknown uVar2;

    if (sub_8910( l_U1496._fU688 ))
    {
        if (((IS_CHAR_IN_ANY_HELI( sub_8935( l_U1496._fU688 ) )) || (IS_CHAR_IN_ANY_CAR( sub_8935( l_U1496._fU688 ) ))) || (IS_CHAR_ON_ANY_BIKE( sub_8935( l_U1496._fU688 ) )))
        {
            return 1;
        }
    }
    return 0;
}

int sub_31841()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (NOT l_U1817[I]._fU104)
        {
            if (sub_480( I ))
            {
                if (I != GET_PLAYER_ID())
                {
                    if (NOT l_U1817[I]._fU120)
                    {
                        return 0;
                    }
                }
            }
        }
    }
    return 1;
}

int sub_31960()
{
    int I;
    unknown uVar3;
    unknown uVar4;

    if (sub_8910( l_U1496._fU688 ))
    {
        if (HAS_CONTROL_OF_NETWORK_ID( l_U1496._fU688 ))
        {
            SET_CHAR_VISIBLE( sub_8935( l_U1496._fU688 ), 0 );
            FREEZE_CHAR_POSITION( sub_8935( l_U1496._fU688 ), 1 );
            SET_CHAR_COLLISION( sub_8935( l_U1496._fU688 ), 0 );
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_869() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_869(), ref uVar3 );
        uVar4 = sub_19912( uVar3 );
        if (HAS_CONTROL_OF_NETWORK_ID( uVar4 ))
        {
            DELETE_CAR( ref uVar3 );
        }
    }
    if (sub_5773())
    {
        if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1496._fU692 ))
        {
            if (REQUEST_CONTROL_OF_NETWORK_ID( l_U1496._fU692 ))
            {
                sub_32202( sub_9399( l_U1496._fU692 ) );
                l_U2776++;
            }
        }
        if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1496._fU696 ))
        {
            if (REQUEST_CONTROL_OF_NETWORK_ID( l_U1496._fU696 ))
            {
                sub_32202( sub_9399( l_U1496._fU696 ) );
                l_U2776++;
            }
        }
        if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1496._fU1148 ))
        {
            if (REQUEST_CONTROL_OF_NETWORK_ID( l_U1496._fU1148 ))
            {
                sub_32202( sub_9399( l_U1496._fU1148 ) );
                l_U2776++;
            }
        }
        if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1496._fU784 ))
        {
            if (REQUEST_CONTROL_OF_NETWORK_ID( l_U1496._fU784 ))
            {
                sub_32202( sub_9399( l_U1496._fU784 ) );
                l_U2776++;
            }
        }
        for ( I = 0; I < 2; I++ )
        {
            if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1496._fU712[I] ))
            {
                if (REQUEST_CONTROL_OF_NETWORK_ID( l_U1496._fU712[I] ))
                {
                    sub_32202( sub_9399( l_U1496._fU712[I] ) );
                    l_U2776++;
                }
            }
            if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1496._fU724[I] ))
            {
                if (REQUEST_CONTROL_OF_NETWORK_ID( l_U1496._fU724[I] ))
                {
                    sub_32202( sub_9399( l_U1496._fU724[I] ) );
                    l_U2776++;
                }
            }
            if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1496._fU976[I] ))
            {
                if (REQUEST_CONTROL_OF_NETWORK_ID( l_U1496._fU976[I] ))
                {
                    sub_32202( sub_9399( l_U1496._fU976[I] ) );
                    l_U2776++;
                }
            }
            if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1496._fU988[I] ))
            {
                if (REQUEST_CONTROL_OF_NETWORK_ID( l_U1496._fU988[I] ))
                {
                    sub_32202( sub_9399( l_U1496._fU988[I] ) );
                    l_U2776++;
                }
            }
            if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1496._fU1136[I] ))
            {
                if (REQUEST_CONTROL_OF_NETWORK_ID( l_U1496._fU1136[I] ))
                {
                    sub_32202( sub_9399( l_U1496._fU1136[I] ) );
                    l_U2776++;
                }
            }
        }
        sub_6195();
    }
    CLEAR_AREA( 607.18190000, 1053.55400000, 1.53700000, 200.00000000, 1 );
    if (sub_32939())
    {
        return 1;
    }
    return 0;
}

void sub_32202(unknown uParam0)
{
    DELETE_CAR( ref uParam0 );
    return;
}

int sub_32939()
{
    int I;
    unknown uVar3;

    for ( I = 0; I <= 13; I++ )
    {
        switch (I)
        {
            case 0:
            uVar3 = l_U1496._fU692;
            break;
            case 1:
            uVar3 = l_U1496._fU696;
            break;
            case 2:
            uVar3 = l_U1496._fU1148;
            break;
            case 3:
            uVar3 = l_U1496._fU784;
            break;
            case 4:
            uVar3 = l_U1496._fU712[0];
            break;
            case 5:
            uVar3 = l_U1496._fU712[1];
            break;
            case 6:
            uVar3 = l_U1496._fU724[0];
            break;
            case 7:
            uVar3 = l_U1496._fU724[1];
            break;
            case 8:
            uVar3 = l_U1496._fU976[0];
            break;
            case 9:
            uVar3 = l_U1496._fU976[1];
            break;
            case 10:
            uVar3 = l_U1496._fU988[0];
            break;
            case 11:
            uVar3 = l_U1496._fU988[1];
            break;
            case 12:
            uVar3 = l_U1496._fU1136[0];
            break;
            case 13:
            uVar3 = l_U1496._fU1136[1];
            break;
        }
        if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( uVar3 ))
        {
            return 0;
        }
    }
    return 1;
}

int sub_33433()
{
    int I;
    int iVar3;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_616( I ), 606.09540000, 1059.58500000, 2.87360000, 8.00000000, 8.00000000, 8.00000000, 0 )))
            {
                return 0;
            }
            else
            {
                iVar3++;
            }
        }
    }
    if (iVar3 > 1)
    {
        return 1;
    }
    return 0;
}

int sub_34302()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (NOT l_U2677[I])
            {
                return 0;
            }
        }
    }
    return 1;
}

int sub_34510()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (NOT l_U1817[I]._fU92)
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_34593()
{
    int I;

    if (sub_22368( l_U1496._fU692 ))
    {
        sub_15044( sub_14784( l_U1496._fU692, "Bc.net_Chopper", -1 ) );
        l_U1496._fU692 = nil;
    }
    if (sub_8910( l_U1496._fU688 ))
    {
        sub_13562( sub_8935( l_U1496._fU688 ) );
        l_U1496._fU688 = nil;
    }
    for ( I = 0; I < l_U1496._fU712; I++ )
    {
        if (sub_22368( l_U1496._fU712[I] ))
        {
            sub_15044( sub_14784( l_U1496._fU712[I], "Bc.net_EscapeBike", I ) );
            l_U1496._fU712[I] = nil;
        }
    }
    for ( I = 0; I < l_U1496._fU724; I++ )
    {
        if (sub_22368( l_U1496._fU724[I] ))
        {
            sub_15044( sub_14784( l_U1496._fU724[I], "Bc.net_EscapeCar", I ) );
            l_U1496._fU724[I] = nil;
        }
    }
    for ( I = 0; I < l_U1496._fU940; I++ )
    {
        if (sub_8910( l_U1496._fU940[I] ))
        {
            sub_13562( sub_8935( l_U1496._fU940[I] ) );
            l_U1496._fU940[I] = nil;
        }
    }
    for ( I = 0; I < l_U1496._fU888; I++ )
    {
        if (sub_8910( l_U1496._fU888[I] ))
        {
            sub_13562( sub_8935( l_U1496._fU888[I] ) );
            l_U1496._fU888[I] = nil;
        }
    }
    for ( I = 0; I < l_U1496._fU700; I++ )
    {
        if (sub_8910( l_U1496._fU700[I] ))
        {
            sub_13562( sub_8935( l_U1496._fU700[I] ) );
            l_U1496._fU700[I] = nil;
        }
    }
    for ( I = 0; I < l_U1496._fU988; I++ )
    {
        if (sub_22368( l_U1496._fU988[I] ))
        {
            sub_15044( sub_14784( l_U1496._fU988[I], "Bc.net_SwatVanSecondWave", I ) );
            l_U1496._fU988[I] = nil;
        }
    }
    for ( I = 0; I < l_U1496._fU736; I++ )
    {
        if (sub_8910( l_U1496._fU736[I] ))
        {
            sub_13562( sub_8935( l_U1496._fU736[I] ) );
            l_U1496._fU736[I] = nil;
        }
    }
    for ( I = 0; I < l_U1496._fU1100; I++ )
    {
        if (sub_8910( l_U1496._fU1100[I] ))
        {
            sub_13562( sub_8935( l_U1496._fU1100[I] ) );
            l_U1496._fU1100[I] = nil;
        }
    }
    for ( I = 0; I < l_U1496._fU976; I++ )
    {
        if (sub_22368( l_U1496._fU976[I] ))
        {
            sub_15044( sub_14784( l_U1496._fU976[I], "Bc.net_SwatVan", I ) );
            l_U1496._fU976[I] = nil;
        }
    }
    for ( I = 0; I < l_U1496._fU1136; I++ )
    {
        if (sub_22368( l_U1496._fU1136[I] ))
        {
            sub_15044( sub_14784( l_U1496._fU1136[I], "Bc.net_SwatVanFourthWave", I ) );
            l_U1496._fU1136[I] = nil;
        }
    }
    for ( I = 0; I < l_U1496._fU1016; I++ )
    {
        if (sub_8910( l_U1496._fU1016[I] ))
        {
            sub_13562( sub_8935( l_U1496._fU1016[I] ) );
            l_U1496._fU1016[I] = nil;
        }
    }
    for ( I = 0; I < l_U1496._fU1152; I++ )
    {
        if (sub_8910( l_U1496._fU1152[I] ))
        {
            sub_13562( sub_8935( l_U1496._fU1152[I] ) );
            l_U1496._fU1152[I] = nil;
        }
    }
    if (sub_22368( l_U1496._fU1148 ))
    {
        sub_15044( sub_14784( l_U1496._fU1148, "Bc.net_SwatVanForChopper", -1 ) );
        l_U1496._fU1148 = nil;
    }
    if (sub_22368( l_U1496._fU696 ))
    {
        sub_15044( sub_14784( l_U1496._fU696, "Bc.net_SwatVanHelipad", -1 ) );
        l_U1496._fU696 = nil;
    }
    for ( I = 0; I < l_U1496._fU1240; I++ )
    {
        if (DOES_PICKUP_EXIST( l_U1496._fU1240[I] ))
        {
            REMOVE_PICKUP( l_U1496._fU1240[I] );
        }
    }
    REMOVE_ANIMS( "MISSSWAT_ASSAULT" );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1004762946 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 837858166 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1203311498 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -583281407 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1560980623 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1947682830 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1911513875 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1543404628 );
    l_U1496._fU68 = 9;
    return;
}

void sub_36429(int iParam0)
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
    if (NOT NETWORK_END_SESSION_PENDING())
    {
        if (IS_SCREEN_FADED_IN())
        {
            SET_MULTIPLAYER_HUD_TIME( ref cVar14 );
        }
    }
    return;
}

void sub_36680()
{
    if (sub_36689())
    {
        if (sub_36850())
        {
            switch (sub_37281())
            {
                case 0:
                SAY_AMBIENT_SPEECH( sub_869(), "GANG_CHASE", 1, 0, 0 );
                break;
                case 1:
                SAY_AMBIENT_SPEECH( sub_869(), "GENERIC_FUCK_OFF", 1, 0, 0 );
                break;
                case 2:
                SAY_AMBIENT_SPEECH( sub_869(), "GENERIC_HI", 1, 0, 0 );
                break;
                case 3:
                SAY_AMBIENT_SPEECH( sub_869(), "GANG_WATCH_THIS_GUY_SOLO", 1, 0, 0 );
                break;
                case 4:
                SAY_AMBIENT_SPEECH( sub_869(), "JEERING", 1, 0, 0 );
                break;
                case 5:
                SAY_AMBIENT_SPEECH( sub_869(), "ABUSE_DRIVER", 1, 0, 0 );
                break;
                case 6:
                SAY_AMBIENT_SPEECH( sub_869(), "TARGET_NOGENDER", 1, 0, 0 );
                break;
                case 7:
                SAY_AMBIENT_SPEECH( sub_869(), "FIGHT", 1, 0, 0 );
                break;
                case 8:
                SAY_AMBIENT_SPEECH( sub_869(), "GANG_FIGHT_CHEER", 1, 0, 0 );
                break;
            }
        }
    }
    return;
}

int sub_36689()
{
    int iVar2;
    unknown uVar3;
    int iVar4;

    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (IS_CHAR_IN_ANY_HELI( sub_869() ))
        {
            return 0;
        }
        if (IS_CHAR_IN_ANY_CAR( sub_869() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_869(), ref uVar3 );
            GET_DRIVER_OF_CAR( uVar3, ref iVar4 );
            if (iVar4 == sub_869())
            {
                GET_CURRENT_CHAR_WEAPON( sub_869(), ref iVar2 );
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

int sub_36850()
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (sub_36880( 1, 1 ))
        {
            if (NOT (IS_CHAR_IN_AIR( sub_869() )))
            {
                if (NOT l_U1434)
                {
                    if (IS_CONTROL_JUST_PRESSED( 0, 23 ))
                    {
                        if (NOT (IS_AMBIENT_SPEECH_PLAYING( sub_869() )))
                        {
                            l_U1434 = 1;
                            return 1;
                        }
                    }
                }
                else if (NOT (IS_CONTROL_JUST_PRESSED( 0, 23 )))
                {
                    l_U1434 = 0;
                }
            }
        }
    }
    return 0;
}

int sub_36880(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_869() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_869(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_869() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_869(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_869()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_869() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_869() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_6220() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_6220() )))
    {
        return 0;
    }
    return 1;
}

int sub_37281()
{
    if (sub_37290())
    {
        return 6;
    }
    else if (sub_37432( 1 ))
    {
        return 7;
    }
    else if (sub_37432( 0 ))
    {
        return 8;
    }
    if (sub_38239())
    {
        return 1;
    }
    if ((sub_38560()) || ((sub_37467()) AND (sub_38667())))
    {
        if (sub_38848() != nil)
        {
            if (IS_CHAR_MALE( sub_38848() ))
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
    if (sub_39018())
    {
        return 5;
    }
    if (sub_39284( 10.00000000 ))
    {
        return 2;
    }
    return 2;
}

int sub_37290()
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (IS_CHAR_SHOOTING( sub_869() ))
        {
            return 1;
        }
    }
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if ((IS_CHAR_ARMED( sub_869(), 2 )) || (IS_CHAR_ARMED( sub_869(), 4 )))
        {
            if (IS_BUTTON_PRESSED( 0, 7 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_37432(boolean bParam0)
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (bParam0)
        {
            if (sub_37467())
            {
                if (IS_NETWORK_PLAYER_ACTIVE( l_U1433 ))
                {
                    if (NOT (IS_CHAR_DEAD( sub_616( l_U1433 ) )))
                    {
                        if (IS_CHAR_VISIBLE( sub_616( l_U1433 ) ))
                        {
                            if (sub_37904( sub_869(), sub_616( l_U1433 ), 10.00000000 ))
                            {
                                if (IS_CHAR_IN_MELEE_COMBAT( sub_869() ))
                                {
                                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( sub_616( l_U1433 ), sub_869(), 0 ))
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
        else if (IS_NETWORK_PLAYER_ACTIVE( l_U1433 ))
        {
            if (NOT (IS_CHAR_DEAD( sub_616( l_U1433 ) )))
            {
                if (IS_CHAR_VISIBLE( sub_616( l_U1433 ) ))
                {
                    if (sub_37904( sub_869(), sub_616( l_U1433 ), 10.00000000 ))
                    {
                        if (IS_CHAR_IN_MELEE_COMBAT( sub_616( l_U1433 ) ))
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

int sub_37467()
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
                    if ((NOT (IS_CHAR_DEAD( sub_869() ))) AND (NOT (IS_CHAR_DEAD( sub_616( I ) ))))
                    {
                        if (IS_CHAR_VISIBLE( sub_616( I ) ))
                        {
                            GET_CHAR_COORDINATES( sub_616( GET_PLAYER_ID() ), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                            GET_CHAR_COORDINATES( sub_616( I ), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                            if ((VDIST( uVar4, uVar7 )) < 10000.00000000)
                            {
                                fVar2 = VDIST( uVar4, uVar7 );
                                l_U1433 = I;
                            }
                        }
                    }
                }
            }
        }
    }
    if (IS_NETWORK_PLAYER_ACTIVE( l_U1433 ))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (((GET_PLAYER_TEAM( sub_578( l_U1433 ) )) != (GET_PLAYER_TEAM( sub_6220() ))) || ((GET_PLAYER_TEAM( sub_578( l_U1433 ) )) == -1))
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

int sub_37904(unknown uParam0, unknown uParam1, float fParam2)
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

int sub_38239()
{
    int I;
    unknown uVar3;

    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( sub_869(), 57 ))
        {
            CLEAR_CHAR_LAST_WEAPON_DAMAGE( sub_869() );
            CLEAR_CHAR_LAST_DAMAGE_ENTITY( sub_869() );
            CLEAR_CHAR_LAST_DAMAGE_BONE( sub_869() );
            return 1;
        }
        for ( I = 0; I < 16; I++ )
        {
            if (IS_NETWORK_PLAYER_ACTIVE( I ))
            {
                if (I != GET_PLAYER_ID())
                {
                    if (IS_CHAR_IN_ANY_CAR( sub_616( I ) ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_616( I ), ref uVar3 );
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CAR( sub_869(), uVar3 ))
                        {
                            CLEAR_CHAR_LAST_WEAPON_DAMAGE( sub_869() );
                            CLEAR_CHAR_LAST_DAMAGE_ENTITY( sub_869() );
                            CLEAR_CHAR_LAST_DAMAGE_BONE( sub_869() );
                            return 1;
                        }
                    }
                    else if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( sub_869(), sub_616( I ), 0 ))
                    {
                        CLEAR_CHAR_LAST_WEAPON_DAMAGE( sub_869() );
                        CLEAR_CHAR_LAST_DAMAGE_ENTITY( sub_869() );
                        CLEAR_CHAR_LAST_DAMAGE_BONE( sub_869() );
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_38560()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_869(), 0.00000000, 5.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        if (ARE_ENEMY_PEDS_IN_AREA( sub_869(), uVar2, 10.00000000 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_38667()
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( l_U1433 ))
        {
            if (NOT (IS_CHAR_DEAD( sub_616( l_U1433 ) )))
            {
                if (IS_CHAR_VISIBLE( sub_616( l_U1433 ) ))
                {
                    if (sub_37904( sub_869(), sub_616( l_U1433 ), 10.00000000 ))
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( sub_616( l_U1433 ) )))
                        {
                            if (NOT (IS_CHAR_IN_MELEE_COMBAT( sub_869() )))
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

void sub_38848()
{
    if (IS_NETWORK_PLAYER_ACTIVE( l_U1433 ))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (((GET_PLAYER_TEAM( sub_578( l_U1433 ) )) != (GET_PLAYER_TEAM( sub_6220() ))) || ((GET_PLAYER_TEAM( sub_578( l_U1433 ) )) == -1))
            {
                return sub_616( l_U1433 );
            }
        }
    }
    return nil;
}

int sub_39018()
{
    float fVar2;

    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (sub_37467())
        {
            if (sub_39056())
            {
                if (IS_NETWORK_PLAYER_ACTIVE( l_U1433 ))
                {
                    if (NOT (IS_CHAR_DEAD( sub_616( l_U1433 ) )))
                    {
                        if (IS_CHAR_VISIBLE( sub_616( l_U1433 ) ))
                        {
                            if (sub_37904( sub_869(), sub_616( l_U1433 ), 10.00000000 ))
                            {
                                if ((IS_CHAR_IN_ANY_CAR( sub_869() )) AND (IS_CHAR_IN_ANY_CAR( sub_616( l_U1433 ) )))
                                {
                                    GET_CHAR_SPEED( sub_869(), ref fVar2 );
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

int sub_39056()
{
    int iVar2;

    iVar2 = sub_6739();
    if ((iVar2 == 6) || (iVar2 == 7))
    {
        return 1;
    }
    return 0;
}

int sub_39284(unknown uParam0)
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
                    if (NOT (IS_CHAR_DEAD( sub_616( I ) )))
                    {
                        if (IS_CHAR_VISIBLE( sub_616( I ) ))
                        {
                            if (sub_37904( sub_869(), sub_616( I ), uParam0 ))
                            {
                                if (NOT (IS_CHAR_IN_ANY_CAR( sub_616( I ) )))
                                {
                                    if ((NOT (IS_CHAR_IN_MELEE_COMBAT( sub_869() ))) AND (NOT (IS_CHAR_IN_MELEE_COMBAT( sub_616( I ) ))))
                                    {
                                        if (((GET_PLAYER_TEAM( sub_578( I ) )) != (GET_PLAYER_TEAM( sub_6220() ))) || ((GET_PLAYER_TEAM( sub_578( I ) )) == -1))
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

void sub_39970()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1817[I]._fU104)
            {
                sub_40028( I, 1 );
            }
        }
    }
    return;
}

void sub_40028(unknown uParam0, unknown uParam1)
{
    l_U1065[uParam0] = uParam1;
    return;
}

void sub_40094()
{
    int iVar2;

    if (sub_8910( l_U1496._fU688 ))
    {
        if (HAS_CONTROL_OF_NETWORK_ID( l_U1496._fU688 ))
        {
            l_U1817[GET_PLAYER_ID()]._fU76 = 1;
            if (IS_CHAR_IN_WATER( sub_8935( l_U1496._fU688 ) ))
            {
                if (l_U1817[GET_PLAYER_ID()]._fU24 == 0)
                {
                    GET_CHAR_HEALTH( sub_8935( l_U1496._fU688 ), ref l_U1817[GET_PLAYER_ID()]._fU24 );
                    l_U1817[GET_PLAYER_ID()]._fU28 = l_U1817[GET_PLAYER_ID()]._fU24 / 10;
                }
                else if (l_U1817[GET_PLAYER_ID()]._fU32 < l_U2640)
                {
                    GET_CHAR_HEALTH( sub_8935( l_U1496._fU688 ), ref l_U2787 );
                    if ((l_U2787 > 0) AND ((l_U2787 - l_U1817[GET_PLAYER_ID()]._fU28) > 0))
                    {
                        SET_CHAR_HEALTH( sub_8935( l_U1496._fU688 ), l_U2787 - l_U1817[GET_PLAYER_ID()]._fU28 );
                        l_U1817[GET_PLAYER_ID()]._fU36++;
                        l_U1817[GET_PLAYER_ID()]._fU32 = l_U2640 + 999;
                    }
                }
            }
            else if (l_U1817[GET_PLAYER_ID()]._fU24 > 0)
            {
                GET_CHAR_HEALTH( sub_8935( l_U1496._fU688 ), ref iVar2 );
                if (iVar2 > 0)
                {
                    SET_CHAR_HEALTH( sub_8935( l_U1496._fU688 ), l_U1817[GET_PLAYER_ID()]._fU24 );
                    l_U1817[GET_PLAYER_ID()]._fU24 = 0;
                }
            }
        }
        else
        {
            l_U1817[GET_PLAYER_ID()]._fU76 = 0;
        }
    }
    l_U2789 = l_U1817[GET_PLAYER_ID()]._fU28 * l_U1817[GET_PLAYER_ID()]._fU36;
    sub_40696();
    return;
}

void sub_40696()
{
    int I;
    unknown uVar3;
    unknown uVar4;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (l_U1817[I]._fU24 > 0)
            {
                uVar3 = l_U1817[I]._fU24;
                I = 16;
            }
        }
    }
    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (l_U1817[I]._fU24 == 0)
            {
                l_U1817[I]._fU24 = uVar3;
            }
        }
    }
    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (l_U1817[I]._fU28 > 0)
            {
                uVar4 = l_U1817[I]._fU28;
                I = 16;
            }
        }
    }
    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (l_U1817[I]._fU28 == 0)
            {
                l_U1817[I]._fU28 = uVar4;
            }
        }
    }
    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (l_U2786 == 0)
            {
                if (l_U1817[I]._fU32 > 0)
                {
                    l_U2786 = l_U1817[I]._fU32;
                    I = 16;
                }
            }
            else if (l_U1817[I]._fU32 > l_U2785)
            {
                l_U2786 = l_U1817[I]._fU32;
                I = 16;
            }
        }
    }
    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (l_U2786 > l_U1817[I]._fU32)
            {
                l_U1817[I]._fU32 = l_U2786;
            }
        }
    }
    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (l_U1817[I]._fU76)
            {
                l_U2786 = l_U1817[I]._fU32;
                I = 16;
            }
        }
    }
    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (NOT l_U1817[I]._fU76)
            {
                l_U1817[I]._fU32 = l_U2786;
            }
        }
    }
    return;
}

void sub_41483()
{
    if (l_U1817[GET_PLAYER_ID()]._fU44 == 0)
    {
        l_U1817[GET_PLAYER_ID()]._fU44 = 2;
    }
    if ((l_U1817[GET_PLAYER_ID()]._fU44 == 0) || (l_U1817[GET_PLAYER_ID()]._fU44 == 2))
    {
        switch (l_U2855)
        {
            case 0:
            if (IS_SCREEN_FADED_OUT())
            {
                sub_41638();
                l_U1817[GET_PLAYER_ID()]._fU100 = 1;
                CLEAR_PRINTS();
                sub_41830();
                sub_43138();
                l_U2674 = l_U2640 + 4000;
                l_U1817[GET_PLAYER_ID()]._fU4 = -5;
                if (NETWORK_IS_SESSION_STARTED())
                {
                    l_U1817[GET_PLAYER_ID()]._fU0 = 1;
                    l_U2855 = 1;
                }
                else
                {
                    l_U1817[GET_PLAYER_ID()]._fU0 = 1;
                    l_U2855 = 2;
                }
            }
            else if (NOT IS_SCREEN_FADING_OUT())
            {
                sub_44214( 500 );
            }
            break;
            case 1:
            sub_44292( 0 );
            if (l_U2640 > l_U2674)
            {
                if (IS_SCREEN_FADED_IN())
                {
                    if (sub_71965( 2147483647, 0 ))
                    {
                        l_U1817[GET_PLAYER_ID()]._fU108 = 1;
                        l_U2639 = 13;
                        l_U2855 = 4;
                    }
                }
                else if (NOT IS_SCREEN_FADING_IN())
                {
                    sub_50254( 500 );
                }
            }
            break;
            case 2:
            sub_44292( 0 );
            if (l_U2640 > l_U2674)
            {
                if (IS_SCREEN_FADED_IN())
                {
                    if (NOT l_U1817[GET_PLAYER_ID()]._fU112)
                    {
                        l_U1817[GET_PLAYER_ID()]._fU112 = 1;
                        sub_567( GET_PLAYER_ID(), 0 );
                        l_U2639 = 11;
                        l_U2855 = 4;
                    }
                }
                else if (NOT IS_SCREEN_FADING_IN())
                {
                    sub_50254( 500 );
                }
            }
            break;
        }
    }
    return;
}

void sub_41638()
{
    if (IS_CHAR_DEAD( sub_869() ))
    {
        N_312012851( sub_869(), ref l_U2590._fU0, ref l_U2590._fU4, ref l_U2590._fU8 );
        GET_CLOSEST_CAR_NODE( l_U2590._fU0, l_U2590._fU4, l_U2590._fU8, ref l_U2593._fU0, ref l_U2593._fU4, ref l_U2593._fU8 );
        REQUEST_COLLISION_AT_POSN( l_U2593._fU0, l_U2593._fU4, l_U2593._fU8 );
        RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), l_U2593, 0.00000000 );
    }
    return;
}

void sub_41830()
{
    sub_41839();
    sub_567( GET_PLAYER_ID(), 0 );
    DISPLAY_HUD( 0 );
    sub_42128( ref l_U2415 );
    return;
}

void sub_41839()
{
    int I;

    for ( I = 0; I < 8; I++ )
    {
        sub_41870( ref l_U104[I] );
    }
    for ( I = 0; I < 16; I++ )
    {
        l_U579[I] = 0;
    }
    l_U577 = 0;
    l_U578 = 0;
    return;
}

void sub_41870(int iParam0)
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

void sub_42128(unknown uParam0)
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
    GET_INTERIOR_FROM_CHAR( sub_869(), ref iVar16 );
    if (iVar16 == nil)
    {
        if ((GET_CLOSEST_CAR_NODE_WITH_HEADING( Result._fU0, Result._fU4, Result._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8, ref fVar15 )) AND (sub_42302( Result, uVar8, 60.00000000 )))
        {
            Result = {uVar8};
            uVar11._fU8 = fVar15;
            Result._fU8 += 2.00000000;
            uVar11._fU0 = sub_42429( 0.00000000, 15.00000000 );
            uVar11._fU4 = 0.00000000;
            uVar11._fU8 += sub_42429( -20.00000000, 20.00000000 );
            fVar14 = 65.00000000;
        }
        else if ((GET_CLOSEST_NETWORK_RESTART_NODE( Result, ref uVar8, ref fVar15 )) AND (sub_42302( Result, uVar8, 60.00000000 )))
        {
            Result = {uVar8};
            uVar11._fU8 = fVar15;
            Result._fU8 += 2.00000000;
            uVar11._fU0 = sub_42429( 0.00000000, 15.00000000 );
            uVar11._fU4 = 0.00000000;
            uVar11._fU8 += sub_42429( -20.00000000, 20.00000000 );
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
        GET_KEY_FOR_CHAR_IN_ROOM( sub_869(), ref iVar3 );
        if (iVar3 == 0)
        {
            CLEAR_ROOM_FOR_VIEWPORT( sub_42755() );
        }
        else
        {
            SET_ROOM_FOR_VIEWPORT_BY_KEY( sub_42755(), iVar3 );
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
    SET_CAM_ROT( (uParam0^), uVar11._fU0, uVar11._fU4, sub_42975( uVar11._fU8 ) );
    SET_CAM_FOV( (uParam0^), fVar14 );
    SET_CAM_FAR_CLIP( (uParam0^), 2000.00000000 );
    SET_CAM_ACTIVE( (uParam0^), 1 );
    SET_CAM_PROPAGATE( (uParam0^), 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    return Result;
}

int sub_42302(vector vParam0, vector vParam3, float fParam6)
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

void sub_42429(unknown uParam0, unknown Result)
{
    GENERATE_RANDOM_FLOAT_IN_RANGE( uParam0, Result, ref Result );
    return Result;
}

void sub_42755()
{
    unknown Result;

    GET_GAME_VIEWPORT_ID( ref Result );
    return Result;
}

void sub_42975(float Result)
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

void sub_43138()
{
    int I;

    if ((((l_U1496._fU528 > 0) || (l_U1496._fU604)) || (l_U2737)) || (l_U1817[GET_PLAYER_ID()]._fU44 == 2))
    {
        for ( I = 0; I < 16; I++ )
        {
            if (sub_480( I ))
            {
                l_U2741[I] = l_U1496._fU528;
            }
        }
        sub_43264( 3, ref l_U1496._fU296 );
        sub_43264( 4, ref l_U1496._fU228 );
        sub_43264( 6, ref l_U1496._fU160 );
        sub_43264( 20, ref l_U1496._fU0 );
        sub_43264( 22, ref l_U2741 );
    }
    return;
}

void sub_43264(int iParam0, unknown uParam1)
{
    int I;
    int J;

    if (((iParam0 == 20) AND (NOT sub_39056())) || (iParam0 == -3))
    {
        sub_43296( uParam1 );
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

void sub_43296(unknown uParam0)
{
    int I;

    if (NOT l_U1082)
    {
        sub_43316();
        l_U1082 = 1;
    }
    for ( I = 0; I < 16; I++ )
    {
        if (l_U662[sub_7307()]._fU24[I] != (uParam0^)[I])
        {
            l_U662[sub_7307()]._fU24[I] = (uParam0^)[I];
            sub_43521( I );
        }
    }
    return sub_7686();
}

void sub_43316()
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

void sub_43521(unknown uParam0)
{
    unknown uVar3;

    if (l_U1004[uParam0] > 0)
    {
        uVar3 = l_U662[0]._fU24[l_U1004[uParam0] - 1];
        if (l_U662[sub_7307()]._fU24[uParam0] > l_U662[sub_7307()]._fU24[uVar3])
        {
            l_U662[0]._fU24[l_U1004[uParam0] - 1] = uParam0;
            l_U662[0]._fU24[l_U1004[uParam0]] = uVar3;
            l_U1004[uVar3]++;
            l_U1004[uParam0]--;
            sub_43521( uParam0 );
            return;
        }
    }
    if (l_U1004[uParam0] < 15)
    {
        uVar3 = l_U662[0]._fU24[l_U1004[uParam0] + 1];
        if (l_U662[sub_7307()]._fU24[uParam0] < l_U662[sub_7307()]._fU24[uVar3])
        {
            l_U662[0]._fU24[l_U1004[uParam0] + 1] = uParam0;
            l_U662[0]._fU24[l_U1004[uParam0]] = uVar3;
            l_U1004[uVar3]--;
            l_U1004[uParam0]++;
            sub_43521( uParam0 );
            return;
        }
    }
    return;
}

void sub_44214(unknown uParam0)
{
    SET_SCREEN_FADE( sub_44223(), 0, 0, 0, 0, 0, 0, 255, uParam0, 1.00000000, 1.00000000 );
    return;
}

void sub_44223()
{
    unknown Result;

    GET_SCREEN_VIEWPORT_ID( ref Result );
    return Result;
}

void sub_44292(unknown uParam0)
{
    int I;
    unknown[16] uVar4;

    array(ref uVar4, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar4[I] = l_U1817[I]._fU4;
    }
    if (l_U1817[GET_PLAYER_ID()]._fU104)
    {
        return sub_44400( 8, ref uVar4, ref l_U1496._fU556, l_U1496._fU552, uParam0, 1, 0, 2147483647 );
        break;
    }
    return sub_44400( 8, ref uVar4, ref l_U1496._fU556, l_U1496._fU552, uParam0, 0, 0, 2147483647 );
}

int sub_44400(int iParam0, unknown uParam1, unknown uParam2, int iParam3, boolean bParam4, int iParam5, boolean bParam6, unknown uParam7)
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
    sub_3183();
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
            if (sub_17477())
            {
                if ((GET_PLAYER_TEAM( sub_6220() )) == -1)
                {
                    SET_PLAYER_TEAM( sub_6220(), sub_44592() );
                }
            }
            else if (sub_17432())
            {
                if ((GET_PLAYER_TEAM( sub_6220() )) == -1)
                {
                    SET_PLAYER_TEAM( sub_6220(), sub_45074( 2 ) );
                }
                else if (sub_17574() < 2)
                {
                    if ((sub_45437( GET_PLAYER_TEAM( sub_6220() ) )) > 1)
                    {
                        if (sub_45535( GET_PLAYER_ID() ))
                        {
                            SET_PLAYER_TEAM( sub_6220(), sub_45074( 2 ) );
                        }
                    }
                }
            }
            else if (sub_10967())
            {
                if ((GET_PLAYER_TEAM( sub_6220() )) != 0)
                {
                    SET_PLAYER_TEAM( sub_6220(), 0 );
                }
            }
            else if ((GET_PLAYER_TEAM( sub_6220() )) != -1)
            {
                SET_PLAYER_TEAM( sub_6220(), -1 );
            };;;;
        }
        if (sub_5773())
        {
            sub_45767( uParam1, uParam2 );
            sub_6195();
        }
    }
    bVar38 = false;
    if (iParam3 != 0)
    {
        sub_45953( iParam3, 1 );
        bVar38 = true;
    }
    else if ((uParam2^) != 0)
    {
        if (NOT l_U1366)
        {
            sub_45953( (uParam2^), 0 );
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
        if (sub_47024())
        {
            l_U1299 = 0;
        }
        sub_49567();
        return 0;
    }
    if (((sub_39056()) || (sub_10967())) || (sub_6739() == 10))
    {
        if ((bParam4) || (l_U966))
        {
            if (sub_49898())
            {
                sub_49925();
            }
            l_U965 = 0;
        }
        else if (sub_50540())
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
            if ((sub_6739() == 7) || (sub_6739() == 6))
            {
                sub_51405( 2, l_U965 );
            }
            else
            {
                sub_51405( 1, l_U965 );
            }
            if (l_U965)
            {
                sub_54903( 1 );
                INIT_FRONTEND_HELPER_TEXT();
                DRAW_FRONTEND_HELPER_TEXT( "BACK", "INPUT_F_CANCEL", 0 );
                if (sub_55664())
                {
                    DRAW_FRONTEND_HELPER_TEXT( "CAMERA", "PAD_BACK", 0 );
                    DRAW_FRONTEND_HELPER_TEXT( "SELECT_PLAYER", "PAD_LSTICK_LR", 1 );
                    if (l_U986 < 3)
                    {
                        DRAW_FRONTEND_HELPER_TEXT( "SPEC_RADIO", "PAD_DPAD_LR", 0 );
                        sub_55846();
                    }
                    sub_56161();
                }
                if (sub_49408())
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
        if (sub_49408())
        {
            l_U963 = 0;
        }
        else if (sub_49256())
        {
            if (NOT NETWORK_IS_OPERATION_PENDING())
            {
                UNPAUSE_GAME();
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    sub_44214( 0 );
                }
                sub_57169();
            }
        }
        if (l_U963)
        {
            SET_WIDESCREEN_FORMAT( 0 );
            DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
            SET_WIDESCREEN_FORMAT( 1 );
            sub_45989( 0, sub_47406(), sub_49712(), 0, 0, 0, 0, 0, 255 );
            GET_HUD_COLOUR( 49, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
            if (bParam4)
            {
                sub_47460( "WANT_TO_LEAVE", sub_57361( 106 ), sub_57394( 106 ), sub_57361( 107 ), sub_57394( 107 ), uVar15, uVar16, uVar17, 255, 1 );
            }
            else if (((sub_45776()) AND (sub_39056())) || (NOT sub_39056()))
            {
                sub_47460( "WANTTOLEAVEIG", sub_57361( 106 ), sub_57394( 106 ), sub_57361( 107 ), sub_57394( 107 ), uVar15, uVar16, uVar17, 255, 1 );
            }
            else
            {
                sub_47460( "WANTTOLEAVERACE", sub_57361( 106 ), sub_57394( 106 ), sub_57361( 107 ), sub_57394( 107 ), uVar15, uVar16, uVar17, 255, 1 );
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
            sub_49567();
            return 0;
        }
    }
    if (NOT l_U1365)
    {
        SET_LOBBY_MUTE_OVERRIDE( 1 );
        l_U1365 = 1;
    }
    if (sub_45776())
    {
        if (((sub_57787() == 1) || ((sub_57935() == 1) AND ((iParam0 == 7) || (l_U961)))) || ((sub_7247( GET_PLAYER_ID() )) AND (sub_7686() == 1)))
        {
            sub_54903( 0 );
        }
        else
        {
            sub_54903( 1 );
        }
    }
    else
    {
        sub_54903( 1 );
    }
    sub_49567();
    SET_WIDESCREEN_FORMAT( 1 );
    if ((iParam0 == 7) || (l_U961))
    {
        if (sub_58300())
        {
            bVar20 = true;
        }
        else
        {
            bVar20 = false;
        }
    }
    else if (sub_58609())
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
        if ((sub_57787() == 1) || ((sub_7247( GET_PLAYER_ID() )) AND (sub_7686() == 1)))
        {
            sub_45989( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
            GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
            sub_47460( "LAST_PLAYER_IN", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
            if ((sub_45776()) AND (N_604003528()))
            {
                SET_WIDESCREEN_FORMAT( 2 );
                sub_45989( 0, 0.00000000, sub_49712(), 0, 0, 0, 0, 0, 255 );
                GET_HUD_COLOUR( 56, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                if (GET_IS_WIDESCREEN())
                {
                    sub_47460( "NOT_COUNT_RANK", sub_47406() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, uVar15, uVar16, uVar17, 255, 2 );
                }
                else
                {
                    sub_47460( "NOT_COUNT_RANK", sub_47406() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, uVar15, uVar16, uVar17, 255, 2 );
                }
                SET_WIDESCREEN_FORMAT( 1 );
            }
        }
        else if (NOT (sub_7247( GET_PLAYER_ID() )))
        {
            if (iParam0 == 8)
            {
                sub_45989( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                if (bParam6)
                {
                    GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                    sub_47460( "MISSION_PASSED", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                }
                else
                {
                    GET_HUD_COLOUR( 4, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                    sub_47460( "MISSION_FAILED", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                }
            }
            else
            {
                sub_45989( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                if (bVar20)
                {
                    if ((iParam0 == 7) || (l_U961))
                    {
                        if (sub_57935() == 1)
                        {
                            GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                            sub_47460( "LAST_TEAM_IN", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                            if ((sub_45776()) AND (N_604003528()))
                            {
                                SET_WIDESCREEN_FORMAT( 2 );
                                sub_45989( 0, 0.00000000, sub_49712(), 0, 0, 0, 0, 0, 255 );
                                GET_HUD_COLOUR( 56, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                                if (GET_IS_WIDESCREEN())
                                {
                                    sub_47460( "NOT_COUNT_RANK", sub_47406() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, uVar15, uVar16, uVar17, 255, 2 );
                                }
                                else
                                {
                                    sub_47460( "NOT_COUNT_RANK", sub_47406() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, uVar15, uVar16, uVar17, 255, 2 );
                                }
                            }
                            SET_WIDESCREEN_FORMAT( 1 );
                        }
                        else
                        {
                            GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                            sub_47460( "EQUAL", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                        }
                    }
                    else
                    {
                        GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                        sub_47460( "EQUAL", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                    }
                }
                else if ((iParam0 == 7) || (l_U961))
                {
                    if (NOT l_U964)
                    {
                        if (sub_59890( l_U1030[0] ))
                        {
                            GET_TEAM_RGB_COLOUR( GET_PLAYER_TEAM( sub_6220() ), ref uVar15, ref uVar16, ref uVar17 );
                            if ((sub_60025( GET_PLAYER_TEAM( sub_6220() ) )) == 1)
                            {
                                StrCopy( ref cVar30, GET_STRING_FROM_TEXT_FILE( sub_60238( GET_PLAYER_TEAM( sub_6220() ), 1 ) ), 32 );
                                ConcatString(ref cVar30, " ", 32);
                                ConcatString(ref cVar30, GET_STRING_FROM_TEXT_FILE( "JOINTWINNER" ), 32);
                                sub_48627( 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, ref cVar30 );
                            }
                            else if (sub_59890( GET_PLAYER_TEAM( sub_6220() ) ))
                            {
                                StrCopy( ref cVar30, GET_STRING_FROM_TEXT_FILE( sub_60238( GET_PLAYER_TEAM( sub_6220() ), 1 ) ), 32 );
                                ConcatString(ref cVar30, " ", 32);
                                ConcatString(ref cVar30, GET_STRING_FROM_TEXT_FILE( "JOINT" ), 32);
                                ConcatString(ref cVar30, " ", 32);
                                ConcatString(ref cVar30, sub_60025( GET_PLAYER_TEAM( sub_6220() ) ), 32);
                                ConcatString(ref cVar30, sub_56487( sub_60025( GET_PLAYER_TEAM( sub_6220() ) ), 1 ), 32);
                                sub_48627( 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, ref cVar30 );
                            }
                            else
                            {
                                StrCopy( ref cVar30, GET_STRING_FROM_TEXT_FILE( sub_60238( GET_PLAYER_TEAM( sub_6220() ), 1 ) ), 32 );
                                ConcatString(ref cVar30, " ", 32);
                                ConcatString(ref cVar30, sub_60025( GET_PLAYER_TEAM( sub_6220() ) ), 32);
                                ConcatString(ref cVar30, sub_56487( sub_60025( GET_PLAYER_TEAM( sub_6220() ) ), 1 ), 32);
                                ConcatString(ref cVar30, " ", 32);
                                ConcatString(ref cVar30, GET_STRING_FROM_TEXT_FILE( "PLACE" ), 32);
                                sub_48627( 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, ref cVar30 );
                            }
                        }
                        else
                        {
                            GET_TEAM_RGB_COLOUR( l_U1030[0], ref uVar15, ref uVar16, ref uVar17 );
                            sub_62002( "TEAMNAME_WINS", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, sub_60238( l_U1030[0], 0 ) );
                        }
                    }
                }
                else if (sub_7162( GET_PLAYER_ID() ))
                {
                    if ((sub_7116( GET_PLAYER_ID() )) == 1)
                    {
                        GET_HUD_COLOUR( 16, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                        sub_47460( "JOINTWINNER", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                    }
                    else
                    {
                        GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                        StrCopy( ref cVar30, GET_STRING_FROM_TEXT_FILE( "JOINT" ), 32 );
                        ConcatString(ref cVar30, " ", 32);
                        ConcatString(ref cVar30, sub_7116( GET_PLAYER_ID() ), 32);
                        ConcatString(ref cVar30, sub_56487( sub_7116( GET_PLAYER_ID() ), 1 ), 32);
                        sub_48627( 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, ref cVar30 );
                    }
                }
                else if ((sub_7116( GET_PLAYER_ID() )) == 1)
                {
                    GET_HUD_COLOUR( 16, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                    sub_47460( "WINNERS", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                }
                else
                {
                    GET_HUD_COLOUR( 4, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                    string(ref cVar30, sub_7116( GET_PLAYER_ID() ), 32);
                    ConcatString(ref cVar30, sub_56487( sub_7116( GET_PLAYER_ID() ), 1 ), 32);
                    ConcatString(ref cVar30, " ", 32);
                    ConcatString(ref cVar30, GET_STRING_FROM_TEXT_FILE( "PLACE" ), 32);
                    sub_48627( 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, ref cVar30 );
                };;;;
            }
        }
    }
    else if (NOT sub_10967())
    {
        sub_45989( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
        GET_HUD_COLOUR( 4, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
        sub_46286( "ROUND_NUM", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, iParam5 );
    }
    for ( I = 0; I < 16; I++ )
    {
        if (sub_7195( l_U662[0]._fU24[I] ))
        {
            iVar13++;
        }
    }
    if ((iParam0 == 7) || (l_U961))
    {
        for ( J = 0; J < 8; J++ )
        {
            if ((sub_58326( l_U1030[J] )) > 0)
            {
                iVar13++;
            }
        }
    }
    if (iVar13 > 10)
    {
        sub_47752( ref l_U1085, (iVar13 - 10) + 1, 0 );
        bVar21 = true;
        iVar14 = iVar13;
        iVar13 = 10;
    }
    fVar28 = 0.00500000 * 2;
    for ( iVar11 = 0; iVar11 < 7; iVar11++ )
    {
        if (l_U662[iVar11]._fU16 != 0)
        {
            fVar28 += sub_62855( l_U662[iVar11]._fU16 );
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
                fVar26 += sub_62855( 1 );
            }
            else
            {
                fVar26 += (sub_62855( l_U662[iVar11]._fU16 )) * 0.50000000;
                DRAW_SPRITE( l_U599[l_U662[iVar11]._fU20], fVar26, fVar27 + -0.02370000, (fVar22 / 4) * 3, fVar22, 0.00000000, 255, 255, 255, 255 );
                fVar26 += (sub_62855( l_U662[iVar11]._fU16 )) * 0.50000000;
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
            sub_63753( ref iVar39, fVar26 + 0.00500000, fVar27 + 0.00400000, 0.36000000, 0.52500000, 0.04000000, 0.36000000, 0.52500000, 0.04000000, iParam0, 10, l_U1085, -1 );
        }
        else
        {
            sub_69917( ref iVar39, fVar26 + 0.00500000, fVar27 + 0.00400000, 0.36000000, 0.52500000, 0.04000000, iParam0, 10, l_U1085, -1 );
        }
    }
    else if ((iParam0 == 7) || (l_U961))
    {
        sub_63753( ref iVar39, fVar26 + 0.00500000, fVar27 + 0.00600000, 0.31300000, 0.47000000, 0.04000000, 0.31300000, 0.47000000, 0.04000000, iParam0, 10, l_U1085, -1 );
    }
    else
    {
        sub_69917( ref iVar39, fVar26 + 0.00500000, fVar27 + 0.00600000, 0.31300000, 0.47000000, 0.04000000, iParam0, 10, l_U1085, -1 );
    }
    if ((bParam4) AND (iParam5 == 0))
    {
        if ((sub_45776()) || (NOT N_604003528()))
        {
            if (NOT bVar38)
            {
                SET_WIDESCREEN_FORMAT( 2 );
                GET_FRONTEND_DESIGN_VALUE( 23, ref fVar24, ref fVar25 );
                GET_FRONTEND_DESIGN_VALUE( 24, ref fVar22, ref fVar23 );
                sub_45989( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                if ((l_U1257[GET_PLAYER_ID()] > -1) AND (l_U1257[GET_PLAYER_ID()] < (GET_PLAYER_RANK_LEVEL_DURING_MP( GET_PLAYER_ID() ))))
                {
                    sub_47460( "RANK_INCREASED", fVar24, fVar25, fVar22, fVar23, 255, 255, 255, 255, 2 );
                    sub_45989( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                    sub_47460( "NEWCLOTHESAVAIL", fVar24, fVar25 + 0.04050000, fVar22, fVar23, 255, 255, 255, 255, 2 );
                }
                else if ((GET_PLAYER_RANK_LEVEL_DURING_MP( GET_PLAYER_ID() )) < 10)
                {
                    sub_46286( "CASH_LEVELUP", fVar24, fVar25, fVar22, fVar23, 255, 255, 255, 255, 2, GET_LEFT_PLAYER_CASH_TO_REACH_LEVEL( (GET_PLAYER_RANK_LEVEL_DURING_MP( GET_PLAYER_ID() )) + 1 ) );
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
        if (sub_49256())
        {
            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_READY" );
            l_U1299 = 0;
            l_U1085 = 0;
            return 1;
        }
        else if (sub_49408())
        {
            l_U963 = 1;
        }
        else if (((sub_49070()) AND (NETWORK_GET_NUM_PLAYERS_MET() > 0)) AND (N_604003528()))
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
            if ((((((sub_39056()) || (sub_10967())) || (sub_6739() == 10)) AND (NOT l_U966)) AND (NOT IS_SCREEN_FADING())) AND (sub_50540()))
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
        if ((sub_49408()) AND (NOT l_U966))
        {
            l_U963 = 1;
        }
        else if (((((sub_49256()) AND (((sub_39056()) || (sub_10967())) || (sub_6739() == 10))) AND (NOT l_U966)) AND (NOT IS_SCREEN_FADING())) AND (sub_50540()))
        {
            l_U965 = 1;
        }
        else if ((((sub_49070()) AND (NETWORK_GET_NUM_PLAYERS_MET() > 0)) AND (N_604003528())) AND (NOT IS_SCREEN_FADING()))
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

int sub_44592()
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
        return sub_10097( 0, 2 );
    }
    else if (iVar5 == 1)
    {
        if ((GET_NO_OF_PLAYERS_IN_TEAM( -1 )) > (GET_NO_OF_PLAYERS_IN_TEAM( iVar6 )))
        {
            return sub_10097( 0, 2 );
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
        return sub_10097( 0, 8 );
    }
    else
    {
        iVar4 = sub_10097( 0, iVar5 );
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

int sub_45074(int iParam0)
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
            return sub_10097( 0, iParam0 );
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
            return sub_10097( 0, iParam0 );
        }
        else
        {
            iVar6 = sub_10097( 0, iVar5 );
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

void sub_45437(int iParam0)
{
    int I;
    int Result;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if ((GET_PLAYER_TEAM( sub_578( I ) )) == iParam0)
            {
                Result++;
            }
        }
    }
    return Result;
}

int sub_45535(int iParam0)
{
    int I;
    int iVar4;
    int iVar5;

    iVar5 = GET_PLAYER_TEAM( sub_578( iParam0 ) );
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if ((GET_PLAYER_TEAM( sub_578( I ) )) == iVar5)
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

void sub_45767(unknown uParam0, unknown uParam1)
{
    int I;
    int iVar5;
    int iVar6;

    if (sub_45776())
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

void sub_45776()
{
    return NETWORK_IS_GAME_RANKED();
}

void sub_45953(int iParam0, boolean bParam1)
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
    sub_45989( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    GET_FRONTEND_DESIGN_VALUE( 23, ref uVar9, ref uVar10 );
    GET_FRONTEND_DESIGN_VALUE( 24, ref uVar11, ref uVar12 );
    GET_HUD_COLOUR( 49, ref uVar5, ref uVar6, ref uVar7, ref uVar8 );
    GET_NETWORK_TIMER( ref iVar4 );
    if (((iParam0 + 10000) - iVar4) > 0)
    {
        if (bParam1)
        {
            sub_46286( "STARTING_IN", uVar9, uVar10, uVar11, uVar12, 255, 255, 255, 255, 2, (((iParam0 + 10000) - iVar4) / 1000) + 1 );
        }
        else
        {
            sub_46611( uVar9, uVar10, uVar11, uVar12, 255, 255, 255, 255, 2, (((iParam0 + 10000) - iVar4) / 1000) + 1 );
        }
        if ((((iParam0 + 10000) - iVar4) + 1000) <= l_U1281)
        {
            PLAY_AUDIO_EVENT( "FRONTEND_OTHER_COUNTDOWN" );
            l_U1281 -= 1000;
        }
    }
    else if (bParam1)
    {
        sub_46286( "STARTING_IN", uVar9, uVar10, uVar11, uVar12, 255, 255, 255, 255, 2, 1 );
    }
    else
    {
        sub_46611( uVar9, uVar10, uVar11, uVar12, 255, 255, 255, 255, 2, 1 );
    }
    SET_WIDESCREEN_FORMAT( 3 );
    return;
}

void sub_45989(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
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

void sub_46286(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_46326( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_NUMBER( uParam0, uParam10 );
    DISPLAY_TEXT_WITH_NUMBER( uParam1, uParam2, uParam0, uParam10 );
    return Result;
}

void sub_46326(unknown uParam0, unknown uParam1)
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

void sub_46611(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam4, uParam5, uParam6, uParam7 );
    SET_TEXT_SCALE( uParam2, uParam3 );
    sub_46326( uParam8, ref uParam0 );
    Result = GET_STRING_WIDTH_WITH_NUMBER( "NUMBER", uParam9 );
    DISPLAY_TEXT_WITH_NUMBER( uParam0, uParam1, "NUMBER", uParam9 );
    return Result;
}

int sub_47024()
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
    sub_47065( 1 );
    GET_FRONTEND_DESIGN_VALUE( 113, ref uVar7, ref uVar8 );
    sub_45989( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    sub_47460( "RECENT_PLAYERS", sub_47406(), 0.08500000, uVar7, uVar8, 255, 255, 255, 255, 2 );
    sub_45989( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    GET_HUD_COLOUR( 56, ref uVar3, ref uVar4, ref uVar5, ref I );
    if (N_604003528())
    {
        sub_47460( "RECENTPLYRX360", sub_47406() + 0.00100000, fVar6, 0.31500000, 0.42950000, uVar3, uVar4, uVar5, 255, 2 );
    }
    else
    {
        sub_47460( "RECENTPLYRDESC", sub_47406() + 0.00100000, fVar6, 0.31500000, 0.42950000, uVar3, uVar4, uVar5, 255, 2 );
    }
    if (GET_IS_WIDESCREEN())
    {
        fVar6 = 0.21550000;
    }
    else
    {
        fVar6 = 0.21600000;
    }
    sub_47752( ref l_U1297, NETWORK_GET_NUM_PLAYERS_MET(), 0 );
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
            sub_45989( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
            if (l_U1297 == I)
            {
                sub_48627( sub_47406(), fVar6, 0.35000000, 0.47750000, 255, 255, 255, 255, 2, NETWORK_GET_MET_PLAYER_NAME( I ) );
            }
            else
            {
                sub_48627( sub_47406(), fVar6, 0.35000000, 0.47750000, uVar3, uVar4, uVar5, 255, 2, NETWORK_GET_MET_PLAYER_NAME( I ) );
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
    if (sub_49070())
    {
        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
        NETWORK_SHOW_MET_PLAYER_FEEDBACK_UI( l_U1297 );
    }
    else if (sub_49256())
    {
        NETWORK_SHOW_MET_PLAYER_PROFILE_UI( l_U1297 );
    }
    else if (sub_49408())
    {
        return 1;
    };;;
    return 0;
}

void sub_47065(boolean bParam0)
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

void sub_47406()
{
    unknown Result;
    unknown uVar3;

    GET_FRONTEND_DESIGN_VALUE( 112, ref Result, ref uVar3 );
    return Result;
}

void sub_47460(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_46326( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH( uParam0 );
    DISPLAY_TEXT( uParam1, uParam2, uParam0 );
    return Result;
}

int sub_47752(unknown uParam0, int iParam1, boolean bParam2)
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

void sub_48627(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam4, uParam5, uParam6, uParam7 );
    SET_TEXT_SCALE( uParam2, uParam3 );
    sub_46326( uParam8, ref uParam0 );
    Result = GET_STRING_WIDTH_WITH_STRING( "STRING", uParam9 );
    DISPLAY_TEXT_WITH_LITERAL_STRING( uParam0, uParam1, "STRING", uParam9 );
    return Result;
}

int sub_49070()
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

int sub_49256()
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

int sub_49408()
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

void sub_49567()
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
            sub_45989( 0, 0.00000000, 1.50000000, 0, 0, 0, 0, 0, 255 );
            sub_47460( "INVITE_RECIEVED", sub_49712() + -0.05050000, 0.09800000, 0.35000000, 0.47800000, 255, 255, 255, 255, 3 );
            DRAW_SPRITE( l_U599[34], sub_49712() + -0.02050000, 0.10580000, 0.09570000, 0.06320000, 0.00000000, 255, 255, 255, 255 );
        }
    }
    return;
}

float sub_49712()
{
    unknown uVar2;
    unknown uVar3;

    GET_FRONTEND_DESIGN_VALUE( 112, ref uVar2, ref uVar3 );
    return 1.00000000 - uVar2;
}

void sub_49898()
{
    return l_U1306;
}

void sub_49925()
{
    sub_49936( 0, 1 );
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    sub_50320();
    sub_50365();
    sub_50448();
    l_U1305 = 0;
    l_U1304 = 0;
    l_U1306 = 0;
    l_U1317 = 0;
    l_U1320 = 18;
    sub_50254( 0 );
    return;
}

void sub_49936(boolean bParam0, boolean bParam1)
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
        sub_50254( 0 );
    }
    return;
}

void sub_50254(unknown uParam0)
{
    SET_SCREEN_FADE( sub_44223(), 0, 0, 1, 0, 0, 0, 255, uParam0, 1.00000000, 1.00000000 );
    return;
}

void sub_50320()
{
    SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY( 0 );
    if (IS_MOBILE_PHONE_RADIO_ACTIVE())
    {
        SET_MOBILE_PHONE_RADIO_STATE( 0 );
    }
    return;
}

void sub_50365()
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

void sub_50448()
{
    l_U1310 = 0;
    SET_FOLLOW_VEHICLE_CAM_SUBMODE( -1 );
    l_U1344 = -1;
    return;
}

int sub_50540()
{
    if (NOT (l_U1305 == 4))
    {
        if (NOT sub_50562())
        {
            return 1;
        }
        else if (NOT (l_U1304 == 0))
        {
            sub_49936( 0, 1 );
            l_U1305 = 4;
        }
    }
    else if (l_U1312)
    {
        sub_50842();
    }
    else if (l_U1317)
    {
        if (NOT sub_50562())
        {
            l_U1304 = 0;
            l_U1317 = 0;
            sub_50365();
            if (IS_IN_SPECTATOR_MODE())
            {
                SET_IN_SPECTATOR_MODE( 0 );
            }
            l_U1305 = 0;
        }
    };;;
    return 0;
}

int sub_50562()
{
    int I;

    for ( I = 0; I <= 15; I++ )
    {
        if (sub_50585( I ))
        {
            return 0;
        }
    }
    return 1;
}

int sub_50585(int iParam0)
{
    if ((iParam0 >= 0) AND (iParam0 < 16))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( iParam0 ))
        {
            if (NOT (iParam0 == GET_PLAYER_ID()))
            {
                if ((NOT (IS_CHAR_INJURED( sub_616( iParam0 ) ))) || ((iParam0 == l_U1318) AND (NOT l_U1316)))
                {
                    if ((NOT l_U1048[iParam0]) AND (NOT l_U1065[iParam0]))
                    {
                        if ((IS_PLAYER_SCRIPT_CONTROL_ON( CONVERT_INT_TO_PLAYERINDEX( iParam0 ) )) || ((IS_CHAR_IN_ANY_CAR( sub_616( iParam0 ) )) AND (l_U1304 == 2)))
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

void sub_50842()
{
    if (NOT l_U1313)
    {
        if (NOT l_U1314)
        {
            if (DOES_CAM_EXIST( l_U1342 ))
            {
                if ((NOT IS_SCREEN_FADED_OUT()) AND (NOT IS_SCREEN_FADING()))
                {
                    sub_44214( 200 );
                }
                else if (NOT (IS_CHAR_DEAD( sub_869() )))
                {
                    SET_CHAR_COORDINATES( sub_869(), l_U1338._fU0, l_U1338._fU4, l_U1338._fU8 );
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
        sub_50254( 200 );
        l_U1313 = 0;
        l_U1314 = 1;
    }
    if (l_U1314)
    {
        if ((NOT sub_50562()) AND (IS_SCREEN_FADED_IN()))
        {
            l_U1305 = 0;
            sub_50365();
        }
    }
    return;
}

void sub_51405(unknown uParam0, boolean bParam1)
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
        sub_51570();
        if (NOT bParam1)
        {
            sub_49936( 1, 0 );
            l_U1309 = 0;
        }
    }
    else if (bParam1)
    {
        l_U1309 = 1;
        if (IS_IN_SPECTATOR_MODE())
        {
            l_U1305 = 2;
            sub_51891();
        }
        else if (l_U1308)
        {
            sub_51969();
            l_U1319 = -1;
            if (NOT (l_U1318 == -1))
            {
                fVar4 = sub_52023( sub_869(), sub_616( l_U1318 ) );
                if ((((fVar4 < 30) AND (NOT (fVar4 == -1))) AND (NOT IS_SCREEN_FADING())) AND (NOT (IS_CHAR_DEAD( sub_869() ))))
                {
                    sub_51891();
                    if (NOT sub_52300())
                    {
                        ;
                    }
                    sub_52487();
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
                    sub_44214( 200 );
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
                        if (sub_50585( l_U1319 ))
                        {
                            l_U1318 = l_U1319;
                            l_U1319 = -1;
                        }
                        else
                        {
                            sub_51969();
                        }
                    }
                    else if (NOT (sub_50585( l_U1318 )))
                    {
                        sub_51969();
                    }
                }
                else if (NOT (sub_50585( l_U1319 )))
                {
                    sub_51969();
                }
                if (NOT sub_52300())
                {
                    ;
                }
                sub_51891();
                if (l_U1308)
                {
                    sub_52487();
                    l_U1308 = 0;
                }
                ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 0 );
                l_U1307 = 1;
                l_U1324 = l_U1325 + 5000;
            }
            else if (NOT sub_52958())
            {
                if (l_U1309)
                {
                    l_U1318 = sub_53011();
                    if (NOT sub_52300())
                    {
                        ;
                    }
                    l_U1324 = l_U1325 + 5000;
                }
                else
                {
                    sub_49936( 1, 1 );
                }
            }
            else
            {
                sub_53560();
                if (((GET_NUM_STREAMING_REQUESTS() < 5) AND (NOT IS_STREAMING_PRIORITY_REQUESTS())) || (l_U1324 < l_U1325))
                {
                    if (NOT sub_52300())
                    {
                        ;
                    }
                    ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
                    l_U1305 = 2;
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    sub_50254( 200 );
                }
                else if ((NOT IS_SCREEN_FADING()) AND (l_U1309))
                {
                    sub_53560();
                    sub_53871( 1 );
                }
            }
        }
        break;
        case 2:
        sub_52300();
        if (NOT sub_52958())
        {
            if (l_U1309)
            {
                l_U1319 = sub_53011();
                if (l_U1319 != -1)
                {
                    if ((sub_52023( sub_869(), sub_616( l_U1319 ) )) < 30)
                    {
                        l_U1318 = l_U1319;
                        if (NOT sub_52300())
                        {
                            ;
                        }
                        l_U1319 = -1;
                    }
                    else
                    {
                        sub_49936( 0, 1 );
                    }
                }
            }
            else
            {
                sub_49936( 1, 1 );
            }
        }
        else if (IS_NETWORK_PLAYER_ACTIVE( l_U1318 ))
        {
            if (IS_CHAR_INJURED( sub_616( l_U1318 ) ))
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
        sub_53560();
        if (l_U1309)
        {
            if (NOT IS_SCREEN_FADING())
            {
                sub_53871( 0 );
            }
        }
        break;
    }
    return;
}

void sub_51570()
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

void sub_51891()
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

int sub_51969()
{
    int I;
    int iVar3;
    float fVar4;
    float fVar5;

    iVar3 = -1;
    fVar4 = 10000;
    for ( I = 0; I <= 15; I++ )
    {
        if (sub_50585( I ))
        {
            fVar5 = sub_52023( sub_869(), sub_616( I ) );
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

float sub_52023(unknown uParam0, unknown uParam1)
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

int sub_52300()
{
    if ((l_U1318 >= 0) AND (l_U1318 < 16))
    {
        if ((l_U1318 < 16) AND (l_U1318 != GET_PLAYER_ID()))
        {
            if (IS_NETWORK_PLAYER_ACTIVE( l_U1318 ))
            {
                if (DOES_CHAR_EXIST( sub_616( l_U1318 ) ))
                {
                    if (NOT (IS_CHAR_INJURED( sub_616( l_U1318 ) )))
                    {
                        l_U1315 = 0;
                        l_U1316 = 0;
                        l_U1344 = 1;
                        GET_GAME_CAM( ref l_U1341 );
                        SET_CAM_TARGET_PED( l_U1341, sub_616( l_U1318 ) );
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_52487()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_CHAR_DEAD( sub_869() ))
    {
        N_312012851( sub_869(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        REQUEST_COLLISION_AT_POSN( uVar2._fU0, uVar2._fU4, uVar2._fU8 );
        RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), uVar2, 0 );
    }
    SET_CHAR_COLLISION( sub_869(), 0 );
    SET_CHAR_VISIBLE( sub_869(), 0 );
    FREEZE_CHAR_POSITION( sub_869(), 1 );
    return;
}

int sub_52958()
{
    unknown uVar2;

    if (sub_50585( l_U1318 ))
    {
        return 1;
    }
    return 0;
}

int sub_53011()
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
            if (sub_53051( Result ))
            {
                return Result;
            }
        }
        for ( Result = 0; Result <= l_U1318; Result++ )
        {
            if (sub_53051( Result ))
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
                if (sub_53051( l_U662[0]._fU24[iVar6] ))
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

int sub_53051(int iParam0)
{
    if ((iParam0 >= 0) AND (iParam0 < 16))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( iParam0 ))
        {
            if (NOT (iParam0 == GET_PLAYER_ID()))
            {
                if ((NOT (IS_CHAR_INJURED( sub_616( iParam0 ) ))) AND (NOT (iParam0 == l_U1318)))
                {
                    if ((NOT l_U1048[iParam0]) AND (NOT l_U1065[iParam0]))
                    {
                        if ((IS_PLAYER_SCRIPT_CONTROL_ON( CONVERT_INT_TO_PLAYERINDEX( iParam0 ) )) || ((IS_CHAR_IN_ANY_CAR( sub_616( iParam0 ) )) AND (l_U1304 == 2)))
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

void sub_53560()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_NETWORK_PLAYER_ACTIVE( l_U1318 ))
    {
        if (NOT (IS_CHAR_INJURED( sub_616( l_U1318 ) )))
        {
            GET_CHAR_COORDINATES( sub_616( l_U1318 ), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            if (NOT (IS_CHAR_DEAD( sub_869() )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_869() )))
                {
                    SET_CHAR_COORDINATES( sub_869(), uVar2._fU0, uVar2._fU4, uVar2._fU8 - 10 );
                }
                else
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_869(), uVar2._fU0, uVar2._fU4, uVar2._fU8 - 10 );
                }
            }
            SET_CHAR_COLLISION( sub_869(), 0 );
            SET_CHAR_VISIBLE( sub_869(), 0 );
        }
    }
    return;
}

void sub_53871(boolean bParam0)
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
        l_U1319 = sub_53011();
        if (NOT (l_U1319 == -1))
        {
            fVar3 = sub_52023( sub_869(), sub_616( l_U1319 ) );
            if (((fVar3 < 30) AND (NOT (fVar3 == -1))) || (bParam0))
            {
                l_U1318 = l_U1319;
                if (NOT sub_52300())
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
                sub_49936( 0, 1 );
            }
            l_U1311 = 1;
        }
    }
    else if (l_U1321 < 65456)
    {
        l_U1319 = sub_54113();
        if (NOT (l_U1319 == -1))
        {
            fVar3 = sub_52023( sub_869(), sub_616( l_U1319 ) );
            if (((fVar3 < 30) AND (NOT (fVar3 == -1))) || (bParam0))
            {
                l_U1318 = l_U1319;
                if (NOT sub_52300())
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
                sub_49936( 0, 1 );
            }
            l_U1311 = 1;
        }
    };;;
    return;
}

int sub_54113()
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
            if (sub_53051( Result ))
            {
                return Result;
            }
        }
        for ( Result = 15; Result >= l_U1318; Result += -1 )
        {
            if (sub_53051( Result ))
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
                if (sub_53051( l_U662[0]._fU24[iVar6] ))
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

void sub_54903(unknown uParam0)
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
    sub_55222( uParam0 );
    return;
}

void sub_55222(boolean bParam0)
{
    char[16] cVar3;
    unknown uVar7;
    unknown uVar8;

    StrCopy( ref cVar3, "NTGT_", 16 );
    ConcatString(ref cVar3, sub_6739(), 16);
    GET_FRONTEND_DESIGN_VALUE( 113, ref uVar7, ref uVar8 );
    sub_45989( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    if (bParam0)
    {
        if (sub_45776())
        {
            sub_47460( ref cVar3, sub_47406() + 0.03250000, 0.11900000, uVar7, uVar8, 255, 255, 255, 255, 2 );
            DRAW_SPRITE( l_U599[15], sub_47406() + 0.01100000, 0.11900000 + 0.02300000, 0.03100000, 0.04400000, 0.00000000, 255, 255, 255, 255 );
        }
        else
        {
            sub_47460( ref cVar3, sub_47406(), 0.11900000, uVar7, uVar8, 255, 255, 255, 255, 2 );
        }
    }
    else if (sub_45776())
    {
        sub_47460( ref cVar3, sub_47406() + 0.03250000, 0.08500000, uVar7, uVar8, 255, 255, 255, 255, 2 );
        DRAW_SPRITE( l_U599[15], sub_47406() + 0.01100000, 0.08500000 + 0.02300000, 0.03100000, 0.04400000, 0.00000000, 255, 255, 255, 255 );
    }
    else
    {
        sub_47460( ref cVar3, sub_47406(), 0.08500000, uVar7, uVar8, 255, 255, 255, 255, 2 );
    }
    return;
}

int sub_55664()
{
    if (((l_U1309) AND (IS_IN_SPECTATOR_MODE())) AND (l_U1318 > -1))
    {
        if (sub_52958())
        {
            return 1;
        }
        return 0;
    }
    return 0;
}

void sub_55846()
{
    char[16] cVar2;
    unknown uVar6;

    SET_WIDESCREEN_FORMAT( 3 );
    DRAW_SPRITE( l_U599[0], sub_49712() - (0.01400000 / 2), l_U1330 - (0.02000000 / 2), 0.01400000, 0.02000000, 0.00000000, 255, 255, 255, 255 );
    SET_TEXT_SCALE( 0.31500000, 0.43000000 );
    sub_45989( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    StrCopy( ref cVar2, "RADIO_OPT", 16 );
    ConcatString(ref cVar2, l_U1320, 16);
    uVar6 = GET_STRING_WIDTH( ref cVar2 );
    sub_47460( ref cVar2, (sub_49712() - 0.01400000) - l_U1329, l_U1330 + l_U1328, 0.31500000, 0.43000000, 255, 255, 255, 255, 3 );
    DRAW_SPRITE( l_U599[0], ((sub_49712() - (0.01400000 * 1.50000000)) - uVar6) - (l_U1329 * 2), l_U1330 - (0.02000000 / 2), 0.01400000 * -1, 0.02000000, 0.00000000, 255, 255, 255, 255 );
    return;
}

void sub_56161()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    char[32] cVar7;
    unknown uVar15;

    SET_WIDESCREEN_FORMAT( 3 );
    DRAW_SPRITE( l_U599[0], sub_49712() - (0.01400000 / 2), l_U1327 - (0.02000000 / 2), 0.01400000, 0.02000000, 0.00000000, 255, 255, 255, 255 );
    SET_TEXT_SCALE( 0.31500000, 0.43000000 );
    sub_45989( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    if (NOT (l_U1304 == 2))
    {
        StrCopy( ref cVar7, sub_56302(), 32 );
    }
    else
    {
        string(ref cVar7, sub_56370( l_U1318 ), 32);
        ConcatString(ref cVar7, sub_56487( sub_56370( l_U1318 ), 0 ), 32);
        ConcatString(ref cVar7, " : ", 32);
        ConcatString(ref cVar7, sub_56302(), 32);
    }
    SET_TEXT_USE_UNDERSCORE( 1 );
    uVar15 = GET_STRING_WIDTH_WITH_STRING( "STRING", ref cVar7 );
    sub_56737( ref uVar2, ref uVar3, ref uVar4 );
    SET_TEXT_COLOUR( uVar2, uVar3, uVar4, 255 );
    sub_48627( (sub_49712() - 0.01400000) - l_U1329, l_U1327 + l_U1328, 0.31500000, 0.43000000, uVar2, uVar3, uVar4, 255, 3, ref cVar7 );
    SET_TEXT_USE_UNDERSCORE( 0 );
    DRAW_SPRITE( l_U599[0], ((sub_49712() - (0.01400000 * 1.50000000)) - uVar15) - (l_U1329 * 2), l_U1327 - (0.02000000 / 2), 0.01400000 * -1, 0.02000000, 0.00000000, 255, 255, 255, 255 );
    return;
}

string sub_56302()
{
    if (sub_50585( l_U1318 ))
    {
        return GET_PLAYER_NAME( sub_578( l_U1318 ) );
    }
    return "";
}

int sub_56370(int iParam0)
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

void sub_56487(int iParam0, boolean bParam1)
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

void sub_56737(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (sub_50585( l_U1318 ))
    {
        if (l_U1304 == 1)
        {
            GET_TEAM_RGB_COLOUR( GET_PLAYER_TEAM( sub_578( l_U1318 ) ), uParam0, uParam1, uParam2 );
        }
        else
        {
            GET_PLAYER_RGB_COLOUR( sub_578( l_U1318 ), uParam0, uParam1, uParam2 );
        }
    }
    return;
}

void sub_57169()
{
    g_U12 = 1;
    sub_57182();
    return;
}

void sub_57182()
{
    FORCE_LOADING_SCREEN( 1 );
    while (true)
    {
        WAIT( 0 );
    }
    return;
}

void sub_57361(unknown uParam0)
{
    unknown Result;
    unknown uVar4;

    GET_FRONTEND_DESIGN_VALUE( uParam0, ref Result, ref uVar4 );
    return Result;
}

void sub_57394(unknown uParam0)
{
    unknown uVar3;
    unknown Result;

    GET_FRONTEND_DESIGN_VALUE( uParam0, ref uVar3, ref Result );
    return Result;
}

void sub_57787()
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

void sub_57935()
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
            if ((GET_PLAYER_TEAM( sub_578( I ) )) > -1)
            {
                if (NOT (iVar4[GET_PLAYER_TEAM( sub_578( I ) )]))
                {
                    Result++;
                    iVar4[GET_PLAYER_TEAM( sub_578( I ) )] = 1;
                }
            }
        }
    }
    return Result;
}

int sub_58300()
{
    int I;
    int iVar3;

    iVar3 = -1;
    for ( I = 0; I < 8; I++ )
    {
        if ((sub_58326( I )) > 0)
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

void sub_58326(int iParam0)
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
            if ((GET_PLAYER_TEAM( sub_578( I ) )) == iParam0)
            {
                Result++;
            }
        }
    }
    return Result;
}

int sub_58609()
{
    int I;
    int iVar3;

    iVar3 = -1;
    for ( I = 0; I < 16; I++ )
    {
        if (sub_7195( I ))
        {
            if (NOT (sub_7247( I )))
            {
                if (iVar3 == -1)
                {
                    iVar3 = l_U662[sub_7307()]._fU24[I];
                }
                else if (iVar3 != l_U662[sub_7307()]._fU24[I])
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}

int sub_59890(int iParam0)
{
    int I;

    for ( I = 0; I < 8; I++ )
    {
        if (I != iParam0)
        {
            if ((sub_58326( I )) > 0)
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

int sub_60025(int iParam0)
{
    int I;
    int Result;

    if (sub_59890( iParam0 ))
    {
        for ( I = 0; I < 8; I++ )
        {
            if ((sub_58326( l_U1030[I] )) > 0)
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
            if ((sub_58326( l_U1030[I] )) > 0)
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

string sub_60238(int iParam0, boolean bParam1)
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
            if ((sub_58326( I )) > 0)
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
            if ((sub_58326( I )) > 0)
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

void sub_62002(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_46326( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_STRING( uParam0, uParam10 );
    DISPLAY_TEXT_WITH_STRING( uParam1, uParam2, uParam0, uParam10 );
    return Result;
}

float sub_62855(unknown uParam0)
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

void sub_63753(unknown uParam0, unknown uParam1, float fParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, int iParam9, int iParam10, int iParam11, unknown uParam12)
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
        if ((sub_58326( l_U1030[iVar16] )) > 0)
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
                    if (((uParam0^)[I] == sub_7307()) || ((uParam0^)[I] == 0))
                    {
                        if (l_U662[(uParam0^)[I]]._fU16 > 0)
                        {
                            GET_TEAM_RGB_COLOUR( l_U1030[iVar16], ref uVar18, ref uVar19, ref uVar20 );
                            if ((iParam9 == 6) || (iParam9 == 7))
                            {
                                sub_45989( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                                iVar22 = 1;
                            }
                            else
                            {
                                sub_45989( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                                iVar22 = 3;
                            }
                            if (l_U662[(uParam0^)[I]]._fU16 != 1)
                            {
                                if ((iParam9 == 6) || (iParam9 == 7))
                                {
                                    fVar23 += (sub_62855( l_U662[(uParam0^)[I]]._fU16 )) * 0.50000000;
                                }
                            }
                            switch (l_U662[(uParam0^)[I]]._fU16)
                            {
                                case 1:
                                if ((iParam9 == 6) || (iParam9 == 7))
                                {
                                    sub_45989( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                                    sub_47460( sub_60238( l_U1030[iVar16], 1 ), fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, 2 );
                                    fVar23 += (sub_62855( l_U662[(uParam0^)[I]]._fU16 )) - uVar24;
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
                                sub_47460( sub_60238( l_U1030[iVar16], 1 ), fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, 2 );;
                                iVar21++;
                                break;
                                case 2:
                                case 7:
                                sub_46611( fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, iVar22, l_U1039[l_U1030[iVar16]] );
                                iVar21++;
                                break;
                                case 3:
                                if (l_U1039[l_U1030[iVar16]] > 0)
                                {
                                    sub_64539( fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, iVar22, l_U1021[l_U1030[iVar16]] + 1 );
                                }
                                iVar21++;
                                break;
                                case 4:
                                if (l_U1039[l_U1030[iVar16]] < 5940000)
                                {
                                    sub_64813( fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, iVar22, l_U1039[l_U1030[iVar16]], 1.00000000 );
                                }
                                iVar21++;
                                break;
                                case 5:
                                case 6:
                                sub_46286( "CASH", fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, iVar22, l_U1039[l_U1030[iVar16]] );
                                iVar21++;
                                break;
                            }
                            if (l_U662[(uParam0^)[I]]._fU16 != 1)
                            {
                                if ((iParam9 == 6) || (iParam9 == 7))
                                {
                                    fVar23 += (sub_62855( l_U662[(uParam0^)[I]]._fU16 )) * 0.50000000;
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
                        fVar23 += sub_62855( 2 );
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
                            if ((sub_7686() + sub_17574()) > 22)
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
                if (sub_7195( l_U662[0]._fU24[J] ))
                {
                    if ((sub_66681( l_U662[0]._fU24[J] )) == l_U1030[iVar16])
                    {
                        if ((iVar25 >= iParam11) AND (iVar25 < (iParam11 + iParam10)))
                        {
                            sub_66807( l_U662[0]._fU24[J], uParam0, uParam1, ref fParam2, uParam6, uParam7, uParam8, iParam9, 0 );
                        }
                        iVar25++;
                    }
                }
            }
        }
    }
    return;
}

void sub_64539(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, int iParam9)
{
    if (iParam9 == 1)
    {
        return sub_47460( "FIRST", uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8 );
    }
    if (iParam9 == 2)
    {
        return sub_47460( "SECOND", uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8 );
    }
    if (iParam9 == 3)
    {
        return sub_47460( "THIRD", uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8 );
    }
    return sub_46286( "NTH", uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, iParam9 );
}

float sub_64813(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8, int iParam9, unknown uParam10)
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
        sub_46611( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar20 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_46611( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar21 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_47460( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 += fVar25;
        fVar26 += fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_46611( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar18 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_46611( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar19 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_47460( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 += fVar25;
        fVar26 += fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_46611( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar16 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_46611( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar17 );
    }
    else if (iParam8 == 3)
    {
        fVar26 = uParam0 - (fVar22 / 2);
        sub_46611( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar17 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_46611( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar16 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_47460( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 -= fVar25;
        fVar26 -= fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_46611( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar19 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_46611( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar18 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_47460( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 -= fVar25;
        fVar26 -= fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_46611( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar21 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_46611( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar20 );
    }
    else
    {
        fVar26 = uParam0 + fVar24;
        sub_46611( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar19 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_47460( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_46611( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar16 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_46611( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar17 );
        fVar26 = uParam0 - fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_46611( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar18 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_47460( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_46611( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar21 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_46611( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar20 );
    }
    return (6 * fVar22) + (2 * fVar23);
}

void sub_66681(unknown uParam0)
{
    if (l_U960)
    {
        return l_U831[uParam0]._fU12;
    }
    return GET_PLAYER_TEAM( sub_578( uParam0 ) );
}

void sub_66807(int iParam0, unknown uParam1, float fParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7, unknown uParam8)
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

    sub_66824( iParam0, ref iVar12, ref iVar13, ref iVar14 );
    if ((l_U1351) AND ((iParam7 == 2) || (iParam7 == 3)))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( iParam0 ))
        {
            if ((IS_CHAR_DEAD( sub_616( iParam0 ) )) || (l_U1065[iParam0]))
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
                sub_45989( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                if (l_U662[(uParam1^)[I]]._fU16 != 1)
                {
                    if (((iParam7 == 6) || (iParam7 == 7)) || (iParam7 == 8))
                    {
                        fParam2 += (sub_62855( l_U662[(uParam1^)[I]]._fU16 )) * 0.50000000;
                    }
                }
                switch (l_U662[(uParam1^)[I]]._fU16)
                {
                    case 1:
                    if (((iParam7 == 6) || (iParam7 == 7)) || (iParam7 == 8))
                    {
                        if (sub_7247( iParam0 ))
                        {
                            iVar12 = 60;
                            iVar13 = 60;
                            iVar14 = 60;
                        }
                        else
                        {
                            sub_66824( iParam0, ref iVar12, ref iVar13, ref iVar14 );
                        }
                        if (l_U102)
                        {
                            if (N_604003528())
                            {
                                sub_48627( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, 2, "WWWWWWWWWWWWWWW" );
                            }
                            else
                            {
                                sub_48627( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, 2, "WWWWWWWWWWWWWWWW" );
                            }
                        }
                        else
                        {
                            SET_TEXT_USE_UNDERSCORE( 1 );
                            sub_48627( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, 2, sub_67595( iParam0 ) );
                            SET_TEXT_USE_UNDERSCORE( 0 );
                        }
                        if ((sub_45776()) || (NOT N_604003528()))
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
                        fParam2 += (sub_62855( 1 )) - uVar19;
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
                                    uVar22 = sub_68587( 0.29700000, uParam4, sub_68385( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, "WWWWWWWWWWWWWWW" ) );
                                }
                                else
                                {
                                    uVar22 = sub_68587( 0.29700000, uParam4, sub_68385( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, "WWWWWWWWWWWWWWWW" ) );
                                }
                            }
                            else if (N_604003528())
                            {
                                uVar22 = sub_68587( 0.23900000, uParam4, sub_68385( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, "WWWWWWWWWWWWWWW" ) );
                            }
                            else
                            {
                                uVar22 = sub_68587( 0.23900000, uParam4, sub_68385( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, "WWWWWWWWWWWWWWWW" ) );
                            }
                            sub_45989( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                            SET_TEXT_USE_UNDERSCORE( 1 );
                        }
                        else
                        {
                            uVar22 = uParam4;
                        }
                        if (N_604003528())
                        {
                            sub_48627( fParam2, (uParam3^) + fVar20, uVar22, uParam5, iVar12, iVar13, iVar14, 255, 2, "WWWWWWWWWWWWWWW" );
                        }
                        else
                        {
                            sub_48627( fParam2, (uParam3^) + fVar20, uVar22, uParam5, iVar12, iVar13, iVar14, 255, 2, "WWWWWWWWWWWWWWWW" );
                        }
                    }
                    else if ((iParam7 == 9) || (iParam7 == 10))
                    {
                        if (GET_IS_WIDESCREEN())
                        {
                            uVar22 = sub_68587( 0.29700000, uParam4, sub_68385( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, sub_67595( iParam0 ) ) );
                        }
                        else
                        {
                            uVar22 = sub_68587( 0.23900000, uParam4, sub_68385( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, sub_67595( iParam0 ) ) );
                        }
                        sub_45989( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                        SET_TEXT_USE_UNDERSCORE( 1 );
                    }
                    else
                    {
                        uVar22 = uParam4;
                    }
                    SET_TEXT_USE_UNDERSCORE( 1 );
                    sub_48627( fParam2, (uParam3^) + fVar20, uVar22, uParam5, iVar12, iVar13, iVar14, 255, 2, sub_67595( iParam0 ) );
                    SET_TEXT_USE_UNDERSCORE( 0 );;;
                    break;
                    case 2:
                    case 7:
                    if (NOT (sub_7247( iParam0 )))
                    {
                        sub_46611( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, l_U662[(uParam1^)[I]]._fU24[iParam0] );
                    }
                    break;
                    case 3:
                    if (NOT (sub_7247( iParam0 )))
                    {
                        if (l_U662[(uParam1^)[I]]._fU24[iParam0] > 0)
                        {
                            sub_64539( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, sub_7116( iParam0 ) );
                        }
                    }
                    break;
                    case 4:
                    if (NOT (sub_7247( iParam0 )))
                    {
                        if ((l_U662[(uParam1^)[I]]._fU24[iParam0] < 2147483647) AND (l_U662[(uParam1^)[I]]._fU24[iParam0] > -2147483648))
                        {
                            sub_64813( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, l_U662[(uParam1^)[I]]._fU24[iParam0], 1.00000000 );
                        }
                    }
                    break;
                    case 5:
                    case 6:
                    if ((NOT l_U1352) || (iParam7 != 6))
                    {
                        if (NOT (sub_7247( iParam0 )))
                        {
                            if ((((sub_17432()) || (sub_17477())) AND ((sub_66681( iParam0 )) > -1)) AND (sub_6739() != 1))
                            {
                                sub_46286( "CASH", fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, (l_U1039[sub_66681( iParam0 )]) / (sub_58326( sub_66681( iParam0 ) )) );
                            }
                            else
                            {
                                sub_46286( "CASH", fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, l_U662[(uParam1^)[I]]._fU24[iParam0] );
                            }
                        }
                    }
                    break;
                }
                if (l_U662[(uParam1^)[I]]._fU16 != 1)
                {
                    if (((iParam7 == 6) || (iParam7 == 7)) || (iParam7 == 8))
                    {
                        fParam2 += (sub_62855( l_U662[(uParam1^)[I]]._fU16 )) * 0.50000000;
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

void sub_66824(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (l_U960)
    {
        (uParam1^) = l_U831[uParam0]._fU20;
        (uParam2^) = l_U831[uParam0]._fU24;
        (uParam3^) = l_U831[uParam0]._fU28;
    }
    else
    {
        sub_66903( sub_578( uParam0 ), uParam1, uParam2, uParam3 );
    }
    return;
}

void sub_66903(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (((GET_PLAYER_TEAM( uParam0 )) == -1) || (sub_6739() == 16))
    {
        GET_PLAYER_RGB_COLOUR( uParam0, uParam1, uParam2, uParam3 );
    }
    else
    {
        GET_TEAM_RGB_COLOUR( GET_PLAYER_TEAM( uParam0 ), uParam1, uParam2, uParam3 );
    }
    return;
}

void sub_67595(unknown uParam0)
{
    if (l_U960)
    {
        return l_U831[uParam0]._fU0;
    }
    return GET_PLAYER_NAME( sub_578( uParam0 ) );
}

void sub_68385(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
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

void sub_68587(float fParam0, unknown Result, float fParam2)
{
    if (fParam2 > fParam0)
    {
        return (fParam0 * Result) / fParam2;
        break;
    }
    return Result;
}

void sub_69917(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7, int iParam8, unknown uParam9)
{
    int I;
    int iVar13;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_7195( l_U662[0]._fU24[I] ))
        {
            if ((iVar13 >= iParam8) AND (iVar13 < (iParam8 + iParam7)))
            {
                sub_66807( l_U662[0]._fU24[I], uParam0, uParam1, ref uParam2, uParam3, uParam4, uParam5, uParam6, 0 );
            }
            iVar13++;
        }
    }
    return;
}

int sub_71965(int iParam0, boolean bParam1)
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
            if (sub_57787() > 1)
            {
                if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
                {
                    if ((sub_17432()) || (sub_17477()))
                    {
                        if (NOT sub_58300())
                        {
                            if (((GET_PLAYER_TEAM( sub_6220() )) == l_U1030[0]) || ((l_U1039[GET_PLAYER_TEAM( sub_6220() )]) == l_U1039[l_U1030[0]]))
                            {
                                REGISTER_MULTIPLAYER_GAME_WIN( GET_PLAYER_ID(), 0 );
                            }
                        }
                    }
                    else if (sub_10967())
                    {
                        if (bParam1)
                        {
                            REGISTER_MULTIPLAYER_GAME_WIN( GET_PLAYER_ID(), iParam0 );
                        }
                    }
                    else if ((sub_7151( GET_PLAYER_ID() )) == 1)
                    {
                        if (NOT sub_58609())
                        {
                            REGISTER_MULTIPLAYER_GAME_WIN( GET_PLAYER_ID(), 0 );
                        }
                    };;;
                }
            }
            if (NOT sub_39056())
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
                                    if ((sub_17432()) || (sub_17477()))
                                    {
                                        if (sub_6739() != 1)
                                        {
                                            l_U662[I]._fU24[J] = (l_U1039[sub_66681( J )]) / (sub_58326( sub_66681( J ) ));
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
                            if (sub_10967())
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
                            if (sub_10967())
                            {
                                UPDATE_NETWORK_STATISTICS( J, 24, iVar8[J], -1 );
                                UPDATE_NETWORK_STATISTICS( J, 25, iParam0 * -1, -1 );
                            }
                            else
                            {
                                UPDATE_NETWORK_STATISTICS( J, 24, iVar8[J], GET_PLAYER_TEAM( sub_578( J ) ) );
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
                        if ((sub_17432()) || (sub_17477()))
                        {
                            UPDATE_NETWORK_STATISTICS( J, 0, 1, GET_PLAYER_TEAM( sub_578( J ) ) );
                            if (((sub_58300()) || (sub_57787() < 2)) || (sub_57935() < 2))
                            {
                                UPDATE_NETWORK_STATISTICS( J, 1, 0, GET_PLAYER_TEAM( sub_578( J ) ) );
                            }
                            else if (((GET_PLAYER_TEAM( sub_578( J ) )) == l_U1030[0]) || ((l_U1039[GET_PLAYER_TEAM( sub_578( J ) )]) == l_U1039[l_U1030[0]]))
                            {
                                UPDATE_NETWORK_STATISTICS( J, 1, 1, GET_PLAYER_TEAM( sub_578( J ) ) );
                            }
                            else
                            {
                                UPDATE_NETWORK_STATISTICS( J, 1, 0, GET_PLAYER_TEAM( sub_578( J ) ) );
                            }
                        }
                        else
                        {
                            UPDATE_NETWORK_STATISTICS( J, 0, 1, -1 );
                            if (sub_10967())
                            {
                                if ((((sub_7151( J )) == 1) AND (sub_57787() > 1)) AND (NOT sub_58609()))
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
                            else if ((((sub_7151( J )) == 1) AND (sub_57787() > 1)) AND (NOT sub_58609()))
                            {
                                UPDATE_NETWORK_STATISTICS( J, 1, 1, GET_PLAYER_TEAM( sub_578( J ) ) );
                            }
                            else
                            {
                                UPDATE_NETWORK_STATISTICS( J, 1, 0, GET_PLAYER_TEAM( sub_578( J ) ) );
                            }
                        }
                    }
                }
            }
            if (sub_57787() > 1)
            {
                if ((sub_17432()) || (sub_17477()))
                {
                    if (sub_57935() > 1)
                    {
                        iVar7 = sub_57935() - 1;
                        I = iVar7;
                        for ( iVar5 = 0; iVar5 < 8; iVar5++ )
                        {
                            if ((sub_58326( l_U1030[iVar5] )) > 0)
                            {
                                for ( J = 0; J < 16; J++ )
                                {
                                    if (IS_NETWORK_PLAYER_ACTIVE( J ))
                                    {
                                        if ((GET_PLAYER_TEAM( sub_578( J ) )) == l_U1030[iVar5])
                                        {
                                            if (NOT l_U1048[J])
                                            {
                                                UPDATE_NETWORK_RELATIVE_SCORE( J, iVar7, GET_PLAYER_TEAM( sub_578( J ) ) );
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
                    iVar7 = sub_57787() - 1;
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
                                    if (l_U662[sub_7307()]._fU24[l_U662[0]._fU24[J]] != (l_U662[sub_7307()]._fU24[l_U662[0]._fU24[J + 1]]))
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
                                if (sub_10967())
                                {
                                    UPDATE_NETWORK_STATISTICS( J, l_U662[I]._fU92, l_U662[I]._fU24[J], -1 );
                                }
                                else
                                {
                                    UPDATE_NETWORK_STATISTICS( J, l_U662[I]._fU92, l_U662[I]._fU24[J], GET_PLAYER_TEAM( sub_578( J ) ) );
                                }
                            }
                        }
                    }
                }
            }
            if (sub_10967())
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
            if (sub_39056())
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
                                    UPDATE_NETWORK_STATISTICS( J, 24, l_U662[I]._fU24[J] * -1, GET_PLAYER_TEAM( sub_578( J ) ) );
                                }
                            }
                        }
                    }
                }
            }
            if ((sub_17432()) || (sub_17477()))
            {
                for ( J = 0; J < 16; J++ )
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( J ))
                    {
                        if ((GET_PLAYER_TEAM( sub_578( J ) )) > -1)
                        {
                            if (NOT l_U1048[J])
                            {
                                UPDATE_NETWORK_STATISTICS( J, 21, l_U1039[GET_PLAYER_TEAM( sub_578( J ) )], GET_PLAYER_TEAM( sub_578( J ) ) );
                            }
                        }
                    }
                }
            }
        }
        if ((sub_17432()) || (sub_17477()))
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
                l_U831[J]._fU0 = GET_PLAYER_NAME( sub_578( J ) );
                l_U831[J]._fU12 = GET_PLAYER_TEAM( sub_578( J ) );
                sub_66903( sub_578( J ), ref l_U831[J]._fU20, ref l_U831[J]._fU24, ref l_U831[J]._fU28 );
                l_U831[J]._fU16 = sub_7151( J );
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

void sub_75085()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1817[I]._fU40;
    }
    sub_75171( l_U1496._fU548, ref uVar3, ref l_U1817[GET_PLAYER_ID()]._fU40 );
    return;
}

void sub_75171(int iParam0, unknown uParam1, unknown uParam2)
{
    int I;
    char[64] cVar6;
    char[16] cVar22;

    (uParam2^) = sub_75180();
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
                    sub_75336( I, -1, ref cVar6 );
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
            sub_76709( "NEXT_GAME_MODE", -1, ref cVar22 );
            l_U984 = iParam0;
        }
    }
    return;
}

void sub_75180()
{
    return g_U18._fU660;
}

void sub_75336(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar6 = sub_75347( uParam1 );
    StrCopy( ref l_U104[uVar6]._fU76._fU0, GET_PLAYER_NAME( sub_578( uParam0 ) ), 64 );
    sub_66903( sub_578( uParam0 ), ref l_U104[uVar6]._fU76._fU68, ref l_U104[uVar6]._fU76._fU72, ref l_U104[uVar6]._fU76._fU76 );
    StrCopy( ref l_U104[uVar6]._fU156._fU0, uParam2, 64 );
    GET_HUD_COLOUR( 1, ref l_U104[uVar6]._fU156._fU68, ref l_U104[uVar6]._fU156._fU72, ref l_U104[uVar6]._fU156._fU76, ref uVar5 );
    sub_75795( uVar6 );
    return;
}

void sub_75347(unknown uParam0)
{
    unknown Result;

    Result = l_U577;
    sub_41870( ref l_U104[l_U577] );
    l_U104[l_U577]._fU8 = uParam0;
    l_U104[l_U577]._fU0 = 1;
    l_U104[l_U577]._fU4 = sub_75416() + 6000;
    sub_75468( ref l_U577, 8 );
    sub_41870( ref l_U104[l_U577] );
    if (l_U577 == l_U578)
    {
        sub_75468( ref l_U578, 8 );
    }
    PLAY_AUDIO_EVENT( "FRONTEND_GAME_MP_TICKER_MESSAGE" );
    return Result;
}

void sub_75416()
{
    unknown Result;

    GET_GAME_TIMER( ref Result );
    return Result;
}

int sub_75468(unknown uParam0, int iParam1)
{
    (uParam0^)++;
    if ((uParam0^) >= iParam1)
    {
        (uParam0^) = 0;
        return 1;
    }
    return 0;
}

void sub_75795(unknown uParam0)
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

void sub_76709(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar6 = sub_75347( uParam1 );
    StrCopy( ref l_U104[uVar6]._fU76._fU0, uParam0, 64 );
    l_U104[uVar6]._fU76._fU64 = 1;
    GET_HUD_COLOUR( 1, ref l_U104[uVar6]._fU76._fU68, ref l_U104[uVar6]._fU76._fU72, ref l_U104[uVar6]._fU76._fU76, ref uVar5 );
    StrCopy( ref l_U104[uVar6]._fU156._fU0, uParam2, 64 );
    l_U104[uVar6]._fU156._fU64 = 1;
    GET_HUD_COLOUR( 1, ref l_U104[uVar6]._fU156._fU68, ref l_U104[uVar6]._fU156._fU72, ref l_U104[uVar6]._fU156._fU76, ref uVar5 );
    sub_75795( uVar6 );
    return;
}

void sub_76983()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1817[I]._fU68)
            {
                sub_77041( I, 1 );
            }
        }
    }
    return;
}

void sub_77041(unknown uParam0, unknown uParam1)
{
    l_U1048[uParam0] = uParam1;
    return;
}

void sub_77284(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16)
{
    int I;
    int iVar20;
    unknown[16] uVar21;
    unknown uVar38;

    iVar20 = GET_PLAYER_ID();
    array(ref uVar21, 16);
    sub_77351( ref uVar21, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam9, uParam10, uParam11, uParam12, uParam13, uParam14, uParam15, uParam16 );
    sub_77542( ref uVar21[iVar20], g_U18._fU636, g_U18._fU632 );
    if (NOT g_U18._fU1492)
    {
        switch (g_U18._fU632)
        {
            case 0:
            for ( I = 0; I <= (iParam0 - 1); I++ )
            {
                if ((I != iVar20) AND (IS_NETWORK_PLAYER_ACTIVE( I )))
                {
                    if (((sub_77691( ref uVar21[I] )) == iVar20) AND ((sub_77731( ref uVar21[I] )) == 3))
                    {
                        if ((NOT (NETWORK_IS_PLAYER_BLOCKED_BY_ME( I ))) AND (NOT (NETWORK_AM_I_BLOCKED_BY_PLAYER( I ))))
                        {
                            StrCopy( ref g_U18._fU584, GET_PLAYER_NAME( sub_578( I ) ), 32 );
                            sub_3053( ref uVar21[iVar20], I, 1 );
                            break;
                        }
                    }
                }
            }
            break;
            case 1:
            if (g_U18._fU636 == 31)
            {
                sub_3053( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if (IS_NETWORK_PLAYER_ACTIVE( g_U18._fU636 ))
            {
                if (NOT (sub_77924( iVar20, g_U18._fU636, ref uVar38 )))
                {
                    sub_3053( ref uVar21[iVar20], 31, 4 );
                    break;
                }
                switch (sub_77731( ref uVar21[g_U18._fU636] ))
                {
                    case 3:
                    case 9: if ((sub_77691( ref uVar21[g_U18._fU636] )) == iVar20)
                    {
                        break;
                    }
                    default:
                    sub_3053( ref uVar21[iVar20], 31, 4 );
                    break;
                }
            }
            else
            {
                sub_3053( ref uVar21[iVar20], 31, 4 );
            }
            break;
            case 2:
            if (g_U18._fU636 == 31)
            {
                sub_3053( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if (IS_NETWORK_PLAYER_ACTIVE( g_U18._fU636 ))
            {
                if ((sub_77731( ref uVar21[g_U18._fU636] )) == 0)
                {
                    sub_3053( ref uVar21[iVar20], g_U18._fU636, 3 );
                    break;
                }
            }
            sub_3053( ref uVar21[iVar20], 31, 6 );
            break;
            case 3:
            if (g_U18._fU636 == 31)
            {
                sub_3053( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if (IS_NETWORK_PLAYER_ACTIVE( g_U18._fU636 ))
            {
                if (NOT (sub_77924( iVar20, g_U18._fU636, ref uVar38 )))
                {
                    sub_3053( ref uVar21[iVar20], 31, 4 );
                    break;
                }
                switch (sub_77731( ref uVar21[g_U18._fU636] ))
                {
                    case 0: break;
                    case 9:
                    case 1:
                    if ((sub_77691( ref uVar21[g_U18._fU636] )) == iVar20)
                    {
                        if ((sub_77731( ref uVar21[g_U18._fU636] )) == 9)
                        {
                            sub_3053( ref uVar21[iVar20], g_U18._fU636, 9 );
                        }
                        break;
                    }
                    sub_3053( ref uVar21[iVar20], 31, 6 );
                    break;
                    default:
                    sub_3053( ref uVar21[iVar20], 31, 4 );
                    break;
                }
            }
            else
            {
                sub_3053( ref uVar21[iVar20], 31, 6 );
            }
            break;
            case 9:
            if (g_U18._fU636 == 31)
            {
                sub_3053( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if (NOT (sub_77924( iVar20, g_U18._fU636, ref uVar38 )))
            {
                sub_3053( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if ((sub_77691( ref uVar21[g_U18._fU636] )) != iVar20)
            {
                sub_3053( ref uVar21[iVar20], 31, 4 );
            }
            break;
        }
    }
    sub_78739( iVar20, ref uVar21, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam9, uParam10, uParam11, uParam12, uParam13, uParam14, uParam15, uParam16 );
    return;
}

void sub_77351(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16)
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

void sub_77542(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_3084( uParam0, uParam1 );
    sub_3118( uParam0, uParam2 );
    return;
}

void sub_77691(unknown uParam0)
{
    return GET_BITS_IN_RANGE( (uParam0^), 0, 15 );
}

void sub_77731(unknown uParam0)
{
    return GET_BITS_IN_RANGE( (uParam0^), 16, 31 );
}

int sub_77924(unknown uParam0, int iParam1, unknown uParam2)
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

void sub_78739(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17)
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

void sub_79387(unknown uParam0, unknown uParam1, unknown uParam2)
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
        GET_NETWORK_TIMER( ref l_U2640 );
        if (sub_5773())
        {
            sub_8767();
            sub_6195();
        }
    }
    return;
}

int sub_79666()
{
    if ((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_79822()
{
    int I;
    int iVar3;
    unknown[3] uVar4;
    int iVar8;
    unknown uVar9;
    vector[3] vVar10;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    float[3] fVar20;
    vector[3] vVar24;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    float[3] fVar34;
    vector[12] vVar38;
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
    float[12] fVar75;

    array(ref uVar4, 3);
    array(ref vVar10, 3);
    array(ref fVar20, 3);
    array(ref vVar24, 3);
    array(ref fVar34, 3);
    array(ref vVar38, 12);
    array(ref fVar75, 12);
    vVar10[0] = {2431.31300000, 210.11920000, 4.51280000};
    vVar10[1] = {2429.76100000, 211.44280000, 4.51280000};
    vVar10[2] = {2428.18500000, 212.69800000, 4.51280000};
    fVar20[0] = 225.19720000;
    fVar20[1] = 215.53000000;
    fVar20[2] = 240.19720000;
    vVar24[0] = {2438.35300000, 202.25000000, 4.51280000};
    vVar24[1] = {2436.83400000, 203.80310000, 4.51280000};
    vVar24[2] = {2435.24000000, 205.32810000, 4.51280000};
    fVar34[0] = 215.18720000;
    fVar34[1] = 215.53000000;
    fVar34[2] = 240.19450000;
    vVar38[0] = {2438.51500000, 201.84400000, -100.00000000};
    vVar38[1] = {2436.83700000, 203.72160000, -100.00000000};
    vVar38[2] = {2435.24000000, 205.32810000, -100.00000000};
    vVar38[3] = {2423.00300000, 213.76700000, -100.00000000};
    vVar38[4] = {2420.05400000, 216.61520000, -100.00000000};
    vVar38[5] = {2436.46200000, 221.28700000, -100.00000000};
    vVar38[6] = {2452.85400000, 203.73460000, -100.00000000};
    vVar38[7] = {2449.73300000, 207.19740000, -100.00000000};
    vVar38[8] = {2447.67900000, 194.13620000, -100.00000000};
    vVar38[9] = {2444.34300000, 215.37910000, -100.00000000};
    vVar38[10] = {2452.25800000, 214.55790000, -100.00000000};
    vVar38[11] = {2412.89900000, 216.31210000, -100.00000000};
    fVar75[0] = 195.16800000;
    fVar75[1] = 135.45190000;
    fVar75[2] = 105.13650000;
    fVar75[3] = 180.13470000;
    fVar75[4] = 95.52650000;
    fVar75[5] = 125.48950000;
    fVar75[6] = 124.70830000;
    fVar75[7] = 130.43920000;
    fVar75[8] = 115.33480000;
    fVar75[9] = 120.45290000;
    fVar75[10] = 125.41840000;
    fVar75[11] = 160.11650000;
    DISABLE_PAUSE_MENU( 1 );
    DEACTIVATE_FRONTEND();
    if (IS_PAUSE_MENU_ACTIVE())
    {
        UNPAUSE_GAME();
    }
    if (NOT (IS_CHAR_INJURED( l_U2379 )))
    {
        SET_PED_ENABLE_LEG_IK( l_U2379, 1 );
    }
    switch (l_U2850)
    {
        case 0:
        BEGIN_CAM_COMMANDS( ref l_U2638 );
        UNPAUSE_GAME();
        DISABLE_PAUSE_MENU( 1 );
        DISPLAY_HUD( 0 );
        DISPLAY_RADAR( 0 );
        SET_PLAYER_CONTROL_FOR_NETWORK( sub_6220(), 0, 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_869(), 1 );
        l_U2850 = 1;
        break;
        case 1:
        if (l_U2638 > 0)
        {
            if (l_U2379 == nil)
            {
                FREEZE_CHAR_POSITION( sub_869(), 1 );
                SET_CHAR_COLLISION( sub_869(), 0 );
                sub_567( GET_PLAYER_ID(), 0 );
                SET_CHAR_VISIBLE( sub_869(), 0 );
                CREATE_CHAR( 26, -1947682830, 2393.35900000, 174.06930000, 4.80770000, ref l_U2379, 0 );
                SET_CHAR_HEADING( l_U2379, 151.19320000 );
                sub_4881( 1, l_U2379, "PETROVIC", 0 );
                CREATE_CHAR( 26, 1543404628, 2392.64900000, 173.09800000, 4.80780000, ref l_U2378, 0 );
                SET_CHAR_HEADING( l_U2378, 326.74930000 );
                sub_6289( ref l_U2378, l_U1496._fU88[GET_PLAYER_ID()] );
                SET_ANIM_GROUP_FOR_CHAR( l_U2378, "Move_player" );
                l_U2850 = 3;
            }
        }
        break;
        case 2:
        if (l_U2640 > l_U2674)
        {
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            CREATE_CAM( 14, ref l_U2835 );
            SET_CAM_POS( l_U2835, 2392.93600000, 175.32330000, 5.86994600 );
            SET_CAM_ROT( l_U2835, 12.95285000, 0.00000000, -177.22380000 );
            SET_CAM_FOV( l_U2835, 45.00000000 );
            SET_CAM_ACTIVE( l_U2835, 1 );
            SET_CAM_PROPAGATE( l_U2835, 1 );
            CLEAR_PRINTS();
            SET_LOBBY_MUTE_OVERRIDE( 1 );
            sub_50254( 500 );
            l_U2850 = 3;
        }
        break;
        case 3:
        if (NOT l_U2769)
        {
            sub_81252();
            if (l_U2832[0] == nil)
            {
                CREATE_CAR( 1911513875, 2357.42900000, 271.18610000, 5.70310000, ref l_U2832[0], 0 );
                SET_CAR_HEADING( l_U2832[0], 266.01900000 );
                SET_CAR_ENGINE_ON( l_U2832[0], 1, 1 );
                SWITCH_CAR_SIREN( l_U2832[0], 1 );
            }
            if (l_U2832[1] == nil)
            {
                CREATE_CAR( 1911513875, 2345.39000000, 271.58360000, 5.66310000, ref l_U2832[1], 0 );
                SET_CAR_HEADING( l_U2832[1], 282.01900000 );
                SET_CAR_ENGINE_ON( l_U2832[1], 1, 1 );
                SWITCH_CAR_SIREN( l_U2832[1], 1 );
            }
            if (DOES_VEHICLE_EXIST( l_U2832[0] ))
            {
                for ( I = 0; I <= 3; I++ )
                {
                    if (l_U2796[I] == nil)
                    {
                        CREATE_CHAR( 26, -1004762946, 0.00000000, 0.00000000, 500.00000000, ref l_U2796[I], 0 );
                        SET_CHAR_HEADING( l_U2796[I], 155.43710000 );
                        SET_CHAR_DECISION_MAKER( l_U2796[I], l_U2458 );
                        SET_CHAR_PROP_INDEX( l_U2796[I], 0, 0 );
                        if (NOT (IS_CAR_DEAD( l_U2832[0] )))
                        {
                            if (I == 0)
                            {
                                WARP_CHAR_INTO_CAR( l_U2796[I], l_U2832[0] );
                            }
                            else
                            {
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U2796[I], l_U2832[0], I - 1 );
                            }
                        }
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar3 );
                        if (iVar3 == 0)
                        {
                            GIVE_WEAPON_TO_CHAR( l_U2796[I], 13, 30000, 1 );
                        }
                        else
                        {
                            GIVE_WEAPON_TO_CHAR( l_U2796[I], 10, 30000, 1 );
                        }
                    }
                }
            }
            if (DOES_VEHICLE_EXIST( l_U2832[1] ))
            {
                for ( I = 4; I <= 7; I++ )
                {
                    if (l_U2796[I] == nil)
                    {
                        CREATE_CHAR( 26, -1004762946, 0.00000000, 0.00000000, 500.00000000, ref l_U2796[I], 0 );
                        SET_CHAR_HEADING( l_U2796[I], 155.43710000 );
                        SET_CHAR_DECISION_MAKER( l_U2796[I], l_U2458 );
                        SET_CHAR_PROP_INDEX( l_U2796[I], 0, 0 );
                        if (NOT (IS_CAR_DEAD( l_U2832[1] )))
                        {
                            if (I == 4)
                            {
                                WARP_CHAR_INTO_CAR( l_U2796[I], l_U2832[1] );
                            }
                            else
                            {
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U2796[I], l_U2832[1], I - 5 );
                            }
                        }
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar3 );
                        if (iVar3 == 0)
                        {
                            GIVE_WEAPON_TO_CHAR( l_U2796[I], 13, 30000, 1 );
                        }
                        else
                        {
                            GIVE_WEAPON_TO_CHAR( l_U2796[I], 10, 30000, 1 );
                        }
                    }
                }
            }
        }
        else
        {
            l_U2850 = 4;
        }
        break;
        case 4:
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        CREATE_CAM( 14, ref l_U2837 );
        SET_CAM_POS( l_U2837, 2392.93600000, 175.32330000, 5.86994600 );
        SET_CAM_ROT( l_U2837, 12.95285000, 0.00000000, -177.22380000 );
        SET_CAM_FOV( l_U2837, 45.00000000 );
        SET_CAM_ACTIVE( l_U2837, 1 );
        SET_CAM_PROPAGATE( l_U2837, 1 );
        CLEAR_PRINTS();
        SET_LOBBY_MUTE_OVERRIDE( 1 );
        sub_50254( 500 );
        sub_82391( "MPKP2_ASST", ref l_U2330, 6, 1 );
        l_U2850 = 5;
        break;
        case 5:
        if ((sub_83352( 352 )) AND (sub_83352( 353 )))
        {
            if (NOT (sub_83417( l_U2330 )))
            {
                CREATE_CAM( 14, ref l_U2838 );
                SET_CAM_POS( l_U2838, 2389.51900000, 278.18250000, 5.53063700 );
                SET_CAM_ROT( l_U2838, 11.72652000, -0.00000000, -135.70290000 );
                SET_CAM_FOV( l_U2838, 45.00000000 );
                SET_CAM_ACTIVE( l_U2838, 1 );
                SET_CAM_PROPAGATE( l_U2838, 1 );
                if ((NOT (IS_CAR_DEAD( l_U2832[0] ))) AND (NOT (IS_CAR_DEAD( l_U2832[1] ))))
                {
                    if ((NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2832[0] ))) AND (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2832[1] ))))
                    {
                        START_PLAYBACK_RECORDED_CAR( l_U2832[0], 352 );
                        START_PLAYBACK_RECORDED_CAR( l_U2832[1], 353 );
                        SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U2832[0], 4257.00000000 );
                        SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U2832[1], 4257.00000000 );
                    }
                }
                if (DOES_CAM_EXIST( l_U2837 ))
                {
                    SET_CAM_ACTIVE( l_U2837, 0 );
                    SET_CAM_PROPAGATE( l_U2837, 0 );
                }
                l_U2850 = 6;
            }
        }
        break;
        case 6:
        if ((NOT (IS_CAR_DEAD( l_U2832[0] ))) AND (NOT (IS_CAR_DEAD( l_U2832[1] ))))
        {
            if ((IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2832[0] )) AND (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2832[1] )))
            {
                l_U2830 = FIND_TIME_POSITION_IN_RECORDING( l_U2832[0] );
                l_U2831 = FIND_TIME_POSITION_IN_RECORDING( l_U2832[1] );
                if ((l_U2830 >= 9407.00000000) AND (l_U2831 >= 9407.00000000))
                {
                    CREATE_CAM( 14, ref l_U2839 );
                    SET_CAM_POS( l_U2839, 2410.64000000, 209.51080000, 5.19610200 );
                    SET_CAM_ROT( l_U2839, 7.36594500, -0.00000000, 14.33072000 );
                    SET_CAM_FOV( l_U2839, 45.00000000 );
                    SET_CAM_ACTIVE( l_U2839, 1 );
                    SET_CAM_PROPAGATE( l_U2839, 1 );
                    if (DOES_CAM_EXIST( l_U2838 ))
                    {
                        SET_CAM_ACTIVE( l_U2838, 0 );
                        SET_CAM_PROPAGATE( l_U2838, 0 );
                    }
                    l_U2850 = 7;
                }
            }
        }
        break;
        case 7:
        if ((NOT (IS_CAR_DEAD( l_U2832[0] ))) AND (NOT (IS_CAR_DEAD( l_U2832[1] ))))
        {
            if ((NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2832[0] ))) AND (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2832[1] ))))
            {
                FREEZE_CAR_POSITION( l_U2832[0], 1 );
                FREEZE_CAR_POSITION( l_U2832[1], 1 );
                SET_CAR_COLLISION( l_U2832[0], 0 );
                SET_CAR_COLLISION( l_U2832[1], 0 );
                SWITCH_CAR_SIREN( l_U2832[0], 0 );
                SWITCH_CAR_SIREN( l_U2832[1], 0 );
                if (l_U2659[7] == 0)
                {
                    for ( I = 0; I < 8; I++ )
                    {
                        l_U2659[I] = l_U2640 + (sub_10097( 0, 1001 ));
                    }
                }
                else
                {
                    for ( I = 0; I < 8; I++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U2796[I] )))
                        {
                            if (IS_CHAR_IN_ANY_CAR( l_U2796[I] ))
                            {
                                if (l_U2640 > l_U2659[I])
                                {
                                    GET_SCRIPT_TASK_STATUS( l_U2796[I], 29, ref iVar8 );
                                    if (iVar8 == 7)
                                    {
                                        OPEN_SEQUENCE_TASK( ref l_U2845 );
                                        TASK_LEAVE_ANY_CAR( 0 );
                                        TASK_FOLLOW_NAV_MESH_AND_SLIDE_TO_COORD( 0, vVar38[I]._fU0, vVar38[I]._fU4, vVar38[I]._fU8, 3, 30000, 0.00000000, fVar75[I] );
                                        TASK_ACHIEVE_HEADING( 0, fVar75[I] );
                                        CLOSE_SEQUENCE_TASK( l_U2845 );
                                        TASK_PERFORM_SEQUENCE( l_U2796[I], l_U2845 );
                                        CLEAR_SEQUENCE_TASK( l_U2845 );
                                        l_U2851++;
                                    }
                                }
                            }
                        }
                    }
                }
                if (l_U2851 >= 6)
                {
                    l_U2851 = 0;
                    sub_44214( 500 );
                    l_U2850 = 11;
                }
            }
        }
        break;
        case 8:
        l_U2846 = 0;
        for ( I = 0; I < l_U2796; I++ )
        {
            if (NOT (IS_CHAR_DEAD( l_U2796[I] )))
            {
                if (NOT (sub_84804( l_U2796[I] )))
                {
                    l_U2846++;
                }
            }
        }
        if (l_U2846 >= 2)
        {
            sub_44214( 500 );
            l_U2850 = 11;
        }
        break;
        case 9:
        if (IS_SCREEN_FADED_OUT())
        {
            for ( I = 0; I < 3; I++ )
            {
                if (DOES_CHAR_EXIST( l_U2796[I] ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U2796[I] )))
                    {
                        CLEAR_CHAR_TASKS( l_U2796[I] );
                        if (I < 3)
                        {
                            SET_CHAR_COORDINATES( l_U2796[I], vVar10[I]._fU0, vVar10[I]._fU4, vVar10[I]._fU8 );
                            SET_CHAR_HEADING( l_U2796[I], fVar20[I] );
                        }
                    }
                }
            }
            l_U2850 = 10;
        }
        break;
        case 10:
        for ( I = 0; I < 3; I++ )
        {
            if (NOT (IS_CHAR_DEAD( l_U2796[I] )))
            {
                if (I == 0)
                {
                    OPEN_SEQUENCE_TASK( ref uVar4[I] );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, vVar24[I]._fU0, vVar24[I]._fU4, vVar24[I]._fU8, 3, 20000, 0 );
                    TASK_ACHIEVE_HEADING( 0, fVar34[I] );
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "CrchSignal_Attention", "MISSSWAT_ASSAULT", 8.00000000, 0, 0, 0, 0, -1 );
                    CLOSE_SEQUENCE_TASK( uVar4[I] );
                    TASK_PERFORM_SEQUENCE( l_U2796[I], uVar4[I] );
                    CLEAR_SEQUENCE_TASK( uVar4[I] );
                }
                else
                {
                    OPEN_SEQUENCE_TASK( ref uVar4[I] );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, vVar24[I]._fU0, vVar24[I]._fU4, vVar24[I]._fU8, 3, 20000, 0 );
                    TASK_ACHIEVE_HEADING( 0, fVar34[I] );
                    CLOSE_SEQUENCE_TASK( uVar4[I] );
                    TASK_PERFORM_SEQUENCE( l_U2796[I], uVar4[I] );
                    CLEAR_SEQUENCE_TASK( uVar4[I] );
                }
            }
        }
        CREATE_CAM( 14, ref l_U2840 );
        SET_CAM_POS( l_U2840, 2448.37500000, 203.80200000, 5.28651700 );
        SET_CAM_ROT( l_U2840, 11.32390000, -0.00000000, 119.36040000 );
        SET_CAM_FOV( l_U2840, 43.50000000 );
        SET_CAM_ACTIVE( l_U2840, 1 );
        SET_CAM_PROPAGATE( l_U2840, 1 );
        if (DOES_CAM_EXIST( l_U2839 ))
        {
            SET_CAM_ACTIVE( l_U2839, 0 );
            SET_CAM_PROPAGATE( l_U2839, 0 );
        }
        sub_50254( 500 );
        l_U2850 = 11;
        break;
        case 11:
        l_U2847 = 3;
        if (l_U2847 == 3)
        {
            if (IS_SCREEN_FADED_OUT())
            {
                for ( I = 0; I < l_U2796; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U2796[I] ))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U2796[I] )))
                        {
                            CLEAR_CHAR_TASKS( l_U2796[I] );
                            if (IS_CHAR_IN_ANY_CAR( l_U2796[I] ))
                            {
                                WARP_CHAR_FROM_CAR_TO_COORD( l_U2796[I], vVar38[I]._fU0, vVar38[I]._fU4, vVar38[I]._fU8 );
                            }
                            else
                            {
                                SET_CHAR_COORDINATES( l_U2796[I], vVar38[I]._fU0, vVar38[I]._fU4, vVar38[I]._fU8 );
                            }
                            SET_CHAR_HEADING( l_U2796[I], fVar75[I] );
                        }
                    }
                    else if (l_U2796[I] == nil)
                    {
                        CREATE_CHAR( 26, -1004762946, vVar38[I]._fU0, vVar38[I]._fU4, vVar38[I]._fU8, ref l_U2796[I], 0 );
                        SET_CHAR_HEADING( l_U2796[I], fVar75[I] );
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar3 );
                        if (iVar3 == 0)
                        {
                            GIVE_WEAPON_TO_CHAR( l_U2796[I], 13, 30000, 1 );
                        }
                        else
                        {
                            GIVE_WEAPON_TO_CHAR( l_U2796[I], 10, 30000, 1 );
                        }
                    }
                }
                CREATE_CAM( 14, ref l_U2841 );
                SET_CAM_POS( l_U2841, 2459.82000000, 221.47920000, 8.06002200 );
                SET_CAM_ROT( l_U2841, -6.02901500, 0.00000000, 105.43550000 );
                SET_CAM_FOV( l_U2841, 28.80004000 );
                CREATE_CAM( 14, ref l_U2842 );
                SET_CAM_POS( l_U2842, 2464.01500000, 205.78400000, 8.06002200 );
                SET_CAM_ROT( l_U2842, -6.02901500, -0.00000000, 110.65450000 );
                SET_CAM_FOV( l_U2842, 28.80004000 );
                CREATE_CAM( 3, ref l_U2836 );
                SET_CAM_INTERP_STYLE_CORE( l_U2836, l_U2841, l_U2842, 7500, 0 );
                SET_CAM_ACTIVE( l_U2836, 1 );
                SET_CAM_PROPAGATE( l_U2836, 1 );
                if (DOES_CAM_EXIST( l_U2840 ))
                {
                    SET_CAM_ACTIVE( l_U2840, 0 );
                    SET_CAM_PROPAGATE( l_U2840, 0 );
                }
                sub_50254( 500 );
                sub_82391( "MPKP2_ASST2", ref l_U2330, 6, 1 );
                l_U2849 = l_U2640 + 7000;
                l_U2850 = 12;
            }
            else if (NOT IS_SCREEN_FADING_OUT())
            {
                sub_44214( 1000 );
            }
        }
        break;
        case 12:
        if (l_U2640 > l_U2849)
        {
            if (NOT (sub_83417( l_U2330 )))
            {
                if (IS_SCREEN_FADED_OUT())
                {
                    CREATE_CAM( 14, ref l_U2843 );
                    SET_CAM_POS( l_U2843, 2391.60100000, 173.01050000, 6.25436400 );
                    SET_CAM_ROT( l_U2843, -0.10841800, -0.00000000, -69.60321000 );
                    SET_CAM_FOV( l_U2843, 45.00000000 );
                    SET_CAM_ACTIVE( l_U2843, 1 );
                    SET_CAM_PROPAGATE( l_U2843, 1 );
                    if (DOES_CAM_EXIST( l_U2836 ))
                    {
                        SET_CAM_ACTIVE( l_U2836, 0 );
                        SET_CAM_PROPAGATE( l_U2836, 0 );
                    }
                    sub_50254( 500 );
                    sub_82391( "MPKP2_ASST3", ref l_U2330, 6, 1 );
                    l_U2850 = 13;
                }
                else if (NOT IS_SCREEN_FADING_OUT())
                {
                    sub_44214( 1000 );
                }
            }
        }
        break;
        case 13:
        if (NOT (sub_83417( l_U2330 )))
        {
            l_U2850 = 14;
        }
        break;
        case 14:
        if (IS_SCREEN_FADED_OUT())
        {
            l_U2639 = 2;
            l_U2850 = 15;
        }
        else if (NOT IS_SCREEN_FADING_OUT())
        {
            sub_44214( 500 );
        }
        break;
    }
    return;
}

void sub_81252()
{
    if (l_U2629 < 360.00000000)
    {
        l_U2629 += l_U2635;
        GET_OBJECT_HEADING( l_U2480, ref l_U2630 );
        SET_OBJECT_ROTATION( l_U2480, l_U2628, l_U2629, l_U2630 );
    }
    else if (l_U2629 > 360.00000000)
    {
        l_U2629 = 360.00000000;
    }
    else
    {
        l_U2769 = 1;
    }
    return;
}

void sub_82391(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_82412( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

void sub_82412(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_82466( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_82466(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_82488( iParam1 )))
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
    sub_83162( ref g_U8321, ref l_U0 );
    StrCopy( ref g_U8321._fU0, uParam7, 16 );
    g_U8321._fU388 = uParam8;
    g_U8320 = 1;
    return 1;
}

int sub_82488(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_6310( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_6310( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_6310( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_83162(int iParam0, int iParam1)
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

int sub_83352(unknown uParam0)
{
    REQUEST_CAR_RECORDING( uParam0 );
    if (HAS_CAR_RECORDING_BEEN_LOADED( uParam0 ))
    {
        return 1;
    }
    return 0;
}

int sub_83417(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8320 == 1)) || (g_U8320 == 2))
    {
        if (uParam0._fU4 == g_U8319)
        {
            return 1;
        }
        else
        {
            sub_6310( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_6310( "\n speech is not playing" );
    }
    return 0;
}

int sub_84804(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (((((IS_CHAR_IN_ANY_BOAT( uParam0 )) || (IS_CHAR_IN_ANY_CAR( uParam0 ))) || (IS_CHAR_IN_ANY_HELI( uParam0 ))) || (IS_CHAR_IN_ANY_PLANE( uParam0 ))) || (IS_CHAR_IN_ANY_TRAIN( uParam0 )))
        {
            return 1;
        }
        if (IS_CHAR_GETTING_IN_TO_A_CAR( uParam0 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_86841()
{
    int I;

    CLEAR_PRINTS();
    if (DOES_CAM_EXIST( l_U2843 ))
    {
        SET_CAM_ACTIVE( l_U2843, 0 );
        SET_CAM_PROPAGATE( l_U2843, 0 );
    }
    for ( I = 0; I < l_U2832; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U2832[I] ))
        {
            DELETE_CAR( ref l_U2832[I] );
            l_U2832[I] = nil;
        }
    }
    for ( I = 0; I < l_U2796; I++ )
    {
        if (DOES_CHAR_EXIST( l_U2796[I] ))
        {
            DELETE_CHAR( ref l_U2796[I] );
            l_U2796[I] = nil;
        }
    }
    if (DOES_CHAR_EXIST( l_U2379 ))
    {
        DELETE_CHAR( ref l_U2379 );
        l_U2379 = nil;
    }
    if (DOES_CHAR_EXIST( l_U2378 ))
    {
        DELETE_CHAR( ref l_U2378 );
    }
    if (DOES_OBJECT_EXIST( l_U2480 ))
    {
        SET_OBJECT_ROTATION( l_U2480, 0.00000000, 235.00000000, 240.37500000 );
    }
    DISABLE_PAUSE_MENU( 0 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    sub_87184( ref l_U2330, 0 );
    SET_PLAYER_CONTROL_FOR_NETWORK( sub_6220(), 1, 1 );
    SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 0 );
    SET_CAM_BEHIND_PED( sub_869() );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_869(), 0 );
    l_U2769 = 0;
    l_U2629 = 235.00000000;
    if (DOES_CAM_EXIST( l_U2835 ))
    {
        DESTROY_CAM( l_U2835 );
        l_U2835 = nil;
    }
    if (DOES_CAM_EXIST( l_U2836 ))
    {
        DESTROY_CAM( l_U2836 );
        l_U2836 = nil;
    }
    if (DOES_CAM_EXIST( l_U2837 ))
    {
        DESTROY_CAM( l_U2837 );
        l_U2837 = nil;
    }
    if (DOES_CAM_EXIST( l_U2838 ))
    {
        DESTROY_CAM( l_U2838 );
        l_U2838 = nil;
    }
    if (DOES_CAM_EXIST( l_U2839 ))
    {
        DESTROY_CAM( l_U2839 );
        l_U2839 = nil;
    }
    if (DOES_CAM_EXIST( l_U2840 ))
    {
        DESTROY_CAM( l_U2840 );
        l_U2840 = nil;
    }
    if (DOES_CAM_EXIST( l_U2841 ))
    {
        DESTROY_CAM( l_U2841 );
        l_U2841 = nil;
    }
    if (DOES_CAM_EXIST( l_U2842 ))
    {
        DESTROY_CAM( l_U2842 );
        l_U2842 = nil;
    }
    if (DOES_CAM_EXIST( l_U2843 ))
    {
        DESTROY_CAM( l_U2843 );
        l_U2843 = nil;
    }
    END_CAM_COMMANDS( ref l_U2638 );
    FREEZE_CHAR_POSITION( sub_869(), 1 );
    SET_CHAR_COLLISION( sub_869(), 0 );
    sub_567( GET_PLAYER_ID(), 0 );
    SET_CHAR_VISIBLE( sub_869(), 0 );
    SET_LOBBY_MUTE_OVERRIDE( 0 );
    l_U2639 = 4;
    return;
}

void sub_87184(int iParam0, unknown uParam1)
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

void sub_87796(unknown uParam0)
{
    int I;
    unknown[16] uVar4;

    array(ref uVar4, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar4[I] = l_U1817[I]._fU20;
    }
    sub_87871( ref uVar4, ref l_U1817[GET_PLAYER_ID()]._fU20, uParam0 );
    return;
}

void sub_87871(unknown uParam0, unknown uParam1, boolean bParam2)
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
        iVar6 = sub_87923();
    }
    if (NOT NETWORK_IS_TVT())
    {
        if (iVar6 == (uParam1^))
        {
            if (((uParam1^) > -1) AND ((uParam1^) != GET_PLAYER_ID()))
            {
                if (IS_NETWORK_PLAYER_ACTIVE( iVar6 ))
                {
                    if (NOT (COMPARE_STRING( GET_PLAYER_NAME( sub_578( iVar6 ) ), ref l_U1407 )))
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
                                            sub_5142( 1 );
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
                StrCopy( ref l_U1407, GET_PLAYER_NAME( sub_578( iVar6 ) ), 32 );
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
                                sub_88483( I, "WANTS_TO_KICK", (uParam0^)[I] );
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

void sub_87923()
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

void sub_88483(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    uVar5 = sub_75347( -2 );
    StrCopy( ref l_U104[uVar5]._fU76._fU0, GET_PLAYER_NAME( sub_578( uParam0 ) ), 64 );
    StrCopy( ref l_U104[uVar5]._fU12, uParam1, 64 );
    sub_66903( sub_578( uParam0 ), ref l_U104[uVar5]._fU76._fU68, ref l_U104[uVar5]._fU76._fU72, ref l_U104[uVar5]._fU76._fU76 );
    StrCopy( ref l_U104[uVar5]._fU156._fU0, GET_PLAYER_NAME( sub_578( uParam2 ) ), 64 );
    sub_66903( sub_578( uParam2 ), ref l_U104[uVar5]._fU156._fU68, ref l_U104[uVar5]._fU156._fU72, ref l_U104[uVar5]._fU156._fU76 );
    sub_75795( uVar5 );
    return;
}

void sub_88913()
{
    if (sub_24197() == 0)
    {
        if (NOT IS_SCREEN_FADED_OUT())
        {
            if (NOT IS_SCREEN_FADING_OUT())
            {
                sub_44214( 0 );
            }
        }
        if (IS_THIS_MACHINE_THE_SERVER())
        {
            if (NOT IS_OBJECT_REASSIGNMENT_IN_PROGRESS())
            {
                if (NETWORK_IS_SESSION_STARTED())
                {
                    if (sub_71965( 2147483647, 0 ))
                    {
                        l_U1817[GET_PLAYER_ID()]._fU108 = 1;
                    }
                    if (sub_89040())
                    {
                        UNPAUSE_GAME();
                        if (NOT IS_SCREEN_FADED_OUT())
                        {
                            sub_44214( 0 );
                        }
                        sub_89188( 14 );
                    }
                }
                else if (NOT l_U1817[GET_PLAYER_ID()]._fU112)
                {
                    l_U1817[GET_PLAYER_ID()]._fU112 = 1;
                }
                if (sub_89040())
                {
                    UNPAUSE_GAME();
                    if (NOT IS_SCREEN_FADED_OUT())
                    {
                        sub_44214( 0 );
                    }
                    sub_89188( 14 );
                }
            }
        }
        else if (NETWORK_IS_SESSION_STARTED())
        {
            if (sub_71965( 2147483647, 0 ))
            {
                l_U1817[GET_PLAYER_ID()]._fU108 = 1;
            }
            if (sub_89040())
            {
                UNPAUSE_GAME();
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    sub_44214( 0 );
                }
                sub_89188( 14 );
            }
        }
        else if (NOT l_U1817[GET_PLAYER_ID()]._fU112)
        {
            l_U1817[GET_PLAYER_ID()]._fU112 = 1;
        }
        if (sub_89040())
        {
            UNPAUSE_GAME();
            if (NOT IS_SCREEN_FADED_OUT())
            {
                sub_44214( 0 );
            }
            sub_89188( 14 );
        };;;
    }
    return;
}

int sub_89040()
{
    int I;
    int iVar3;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if ((l_U1817[I]._fU108) || (l_U1817[I]._fU112))
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

void sub_89188(unknown uParam0)
{
    g_U13 = uParam0;
    if (NOT g_U26675)
    {
        sub_57182();
    }
    return;
}

void sub_89545()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1817[I]._fU4;
    }
    sub_89635( 9, ref uVar3, ref l_U1496._fU436, ref l_U1496._fU548, ref l_U1496._fU556, l_U1496._fU552 );
    l_U1817[GET_PLAYER_ID()]._fU4 = uVar3[GET_PLAYER_ID()];
    return;
}

void sub_89635(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
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
        sub_89714();
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
                l_U1086 = sub_89893( sub_6739() );
                (uParam1^)[GET_PLAYER_ID()] = -7;
                if (NOT sub_45776())
                {
                    if (sub_5773())
                    {
                        l_U1370 = 0;
                        if ((uParam3^) != -1)
                        {
                            if ((NOT (sub_90151( sub_89893( (uParam3^) ) ))) || (GET_NUMBER_OF_PLAYERS() <= 4))
                            {
                                l_U1086 = sub_89893( (uParam3^) );
                                (uParam1^)[GET_PLAYER_ID()] = -8;
                                l_U1370 = 1;
                            }
                        }
                        sub_6195();
                    }
                }
            }
        }
    }
    if (sub_5773())
    {
        sub_45767( uParam1, uParam4 );
        sub_6195();
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
    sub_3183();
    DISABLE_PAUSE_MENU( 1 );
    HIDE_HUD_AND_RADAR_THIS_FRAME();
    if (l_U1286)
    {
        if (NOT IS_SCREEN_FADED_OUT())
        {
            sub_44214( 0 );
        }
        l_U1286 = 0;
        return;
    }
    else if (IS_SCREEN_FADED_OUT())
    {
        sub_50254( 0 );
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
            l_U1087[sub_90518( 15 )]._fU20 = l_U1367._fU0;
        }
        else if ((l_U1087[sub_90518( 15 )]._fU20) != 18)
        {
            l_U1087[sub_90518( 15 )]._fU20 = 18;
        }
    }
    ENABLE_FRONTEND_RADIO();
    if (IS_GAME_IN_CONTROL_OF_MUSIC())
    {
        l_U1087[sub_90518( 15 )]._fU24 = 19;
    }
    else
    {
        l_U1087[sub_90518( 15 )]._fU24 = 0;
    }
    if (NOT l_U1082)
    {
        sub_43316();
        l_U1082 = 1;
    }
    if (iParam0 == 10)
    {
        if (NOT l_U1083)
        {
            sub_90733();
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
                if (sub_7686() < 3)
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
            sub_45953( iParam5, 1 );
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
                if (sub_49408())
                {
                    USE_MASK( 0 );
                    l_U1289 = 0;
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    (uParam1^)[GET_PLAYER_ID()] = -3;
                }
                else if ((sub_91357()) AND (sub_91475()))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    ACTIVATE_NETWORK_SETTINGS_MENU();
                }
                else if (sub_91657())
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    DISPLAY_FRONTEND_MAP_BLIPS( 0 );
                    ACTIVATE_FRONTEND();
                }
                else if (sub_49256())
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
                else if ((sub_92132()) AND ((NOT NETWORK_IS_TVT()) || (sub_92270())))
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
                        l_U1086 = sub_89893( sub_6739() );
                        (uParam1^)[GET_PLAYER_ID()] = -4;
                    }
                }
                else if ((sub_49070()) AND (((NETWORK_GET_NUM_PLAYERS_MET() > 0) AND (N_604003528())) || (((NOT NETWORK_IS_TVT()) AND (NETWORK_GET_FRIEND_COUNT() > 0)) AND (NOT N_604003528()))))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1299 = 1;
                }
                else if (sub_92547())
                {
                    if (sub_47752( ref l_U1275, J, 0 ))
                    {
                        if (NOT sub_10967())
                        {
                            if ((l_U1275 == 0) || ((sub_39056()) AND (l_U1275 < 4)))
                            {
                                l_U1087[sub_90518( 16 )]._fU20 = 0;
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
                        if (sub_92866())
                        {
                            if (sub_92998())
                            {
                                if ((GET_PLAYER_TEAM( sub_6220() )) > -1)
                                {
                                    if (sub_17477())
                                    {
                                        uVar15 = GET_PLAYER_TEAM( sub_6220() );
                                        sub_93262( ref uVar15, 8 );
                                        SET_PLAYER_TEAM( sub_6220(), uVar15 );
                                    }
                                    else if ((GET_PLAYER_TEAM( sub_6220() )) == 0)
                                    {
                                        SET_PLAYER_TEAM( sub_6220(), 1 );
                                    }
                                    else if ((GET_PLAYER_TEAM( sub_6220() )) == 1)
                                    {
                                        SET_PLAYER_TEAM( sub_6220(), 0 );
                                    };;;
                                }
                            }
                            else if (sub_93404())
                            {
                                if (sub_17477())
                                {
                                    uVar15 = GET_PLAYER_TEAM( sub_6220() );
                                    sub_75468( ref uVar15, 8 );
                                    SET_PLAYER_TEAM( sub_6220(), uVar15 );
                                }
                                else if ((GET_PLAYER_TEAM( sub_6220() )) == 0)
                                {
                                    SET_PLAYER_TEAM( sub_6220(), 1 );
                                }
                                else if ((GET_PLAYER_TEAM( sub_6220() )) == 1)
                                {
                                    SET_PLAYER_TEAM( sub_6220(), 0 );
                                };;;
                            }
                        }
                    }
                    else if (l_U1087[l_U1275]._fU16 == 17)
                    {
                        if (sub_7686() < 3)
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
                        if (sub_92998())
                        {
                            iVar16 = l_U1087[l_U1275]._fU20;
                            sub_75468( ref iVar16, 16 );
                            while (NOT (IS_NETWORK_PLAYER_ACTIVE( iVar16 )))
                            {
                                sub_75468( ref iVar16, 16 );
                            }
                            l_U1087[l_U1275]._fU20 = iVar16;
                            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
                        }
                        else if (sub_93404())
                        {
                            iVar16 = l_U1087[l_U1275]._fU20;
                            sub_93262( ref iVar16, 16 );
                            while (NOT (IS_NETWORK_PLAYER_ACTIVE( iVar16 )))
                            {
                                sub_93262( ref iVar16, 16 );
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
                            if (NOT (sub_94296( l_U1275 )))
                            {
                                if (sub_94391( ref l_U1087[l_U1275]._fU20, l_U1087[l_U1275]._fU24 ))
                                {
                                    if (l_U1087[l_U1275]._fU16 == 15)
                                    {
                                        sub_94769( l_U1087[l_U1275]._fU20 );
                                    }
                                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
                                }
                            }
                        }
                    };;;
                }
                else if (J > 6)
                {
                    sub_47752( ref l_U1276, (J - 6) + 1, 0 );
                };;;;;;;;
                if ((uParam1^)[GET_PLAYER_ID()] != -4)
                {
                    sub_95022( 0 );
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
                    if (sub_91357())
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
                    if (sub_95527( l_U1275 ))
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
                sub_95022( 0 );
                INIT_FRONTEND_HELPER_TEXT();
                DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
                if (sub_49408())
                {
                    (uParam1^)[GET_PLAYER_ID()] = -3;
                }
            }
            else if ((uParam1^)[GET_PLAYER_ID()] == 2)
            {
                l_U1087[sub_90518( 16 )]._fU20 = 1;
                sub_95022( 0 );
                if (NOT l_U1286)
                {
                    if (J > 6)
                    {
                        if (sub_47752( ref l_U1276, (J - 6) + 1, 0 ))
                        {
                            l_U1275 = l_U1276;
                        }
                    }
                    GET_NETWORK_TIMER( ref iVar26 );
                    if ((sub_49408()) AND (l_U1279 < (iVar26 + 500)))
                    {
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        l_U1087[sub_90518( 16 )]._fU20 = 0;
                        l_U1291 = 1;
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                    else if (((sub_49070()) AND (NETWORK_GET_NUM_PLAYERS_MET() > 0)) AND (N_604003528()))
                    {
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        l_U1299 = 1;
                    }
                    else
                    {
                        sub_45989( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                        GET_FRONTEND_DESIGN_VALUE( 23, ref uVar34, ref fVar35 );
                        GET_FRONTEND_DESIGN_VALUE( 24, ref fVar36, ref fVar33 );
                        GET_HUD_COLOUR( 49, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                        if (NOT (sub_17305( ref bVar28 )))
                        {
                            if (bVar31)
                            {
                                if (NOT bVar32)
                                {
                                    if (bVar28)
                                    {
                                        sub_47460( "NEEDMORETEAMS", uVar34, fVar35, fVar36 + 0.04050000, fVar33, 255, 255, 255, 255, 2 );
                                    }
                                    else
                                    {
                                        sub_47460( "NEEDMOREPLAYERS", uVar34, fVar35, fVar36 + 0.04050000, fVar33, 255, 255, 255, 255, 2 );
                                    }
                                    bVar32 = true;
                                }
                            }
                            else if (bVar28)
                            {
                                sub_47460( "NEEDMORETEAMS", uVar34, fVar35, fVar36, fVar33, 255, 255, 255, 255, 2 );
                            }
                            else
                            {
                                sub_47460( "NEEDMOREPLAYERS", uVar34, fVar35, fVar36, fVar33, 255, 255, 255, 255, 2 );
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
                if (sub_49408())
                {
                    sub_95022( 1 );
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1291 = 1;
                    (uParam1^)[GET_PLAYER_ID()] = 0;
                }
                else if (sub_49256())
                {
                    sub_47065( 1 );
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1291 = 1;
                    (uParam1^)[GET_PLAYER_ID()] = -2;
                }
                else
                {
                    sub_47752( ref l_U1086, 14, 0 );
                }
            }
            else if (((uParam1^)[GET_PLAYER_ID()] == -7) || ((uParam1^)[GET_PLAYER_ID()] == -8))
            {
                if (((l_U1369) AND (NOT NETWORK_IS_TVT())) AND (NOT sub_45776()))
                {
                    if (sub_7686() < 3)
                    {
                        l_U1087[sub_90518( 17 )]._fU20 = GET_PLAYER_ID();
                        l_U1369 = 0;
                    }
                    else if ((l_U1087[sub_90518( 17 )]._fU20) != -1)
                    {
                        if ((l_U1087[sub_90518( 17 )]._fU20) != GET_PLAYER_ID())
                        {
                            if (NOT (IS_NETWORK_PLAYER_ACTIVE( l_U1087[sub_90518( 17 )]._fU20 )))
                            {
                                l_U1087[sub_90518( 17 )]._fU20 = GET_PLAYER_ID();
                            }
                        }
                    }
                    if (sub_49408())
                    {
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        l_U1369 = 0;
                    }
                    else if (sub_92998())
                    {
                        iVar16 = l_U1087[sub_90518( 17 )]._fU20;
                        sub_75468( ref iVar16, 16 );
                        while (NOT (IS_NETWORK_PLAYER_ACTIVE( iVar16 )))
                        {
                            sub_75468( ref iVar16, 16 );
                        }
                        l_U1087[sub_90518( 17 )]._fU20 = iVar16;
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
                    }
                    else if (sub_93404())
                    {
                        iVar16 = l_U1087[sub_90518( 17 )]._fU20;
                        sub_93262( ref iVar16, 16 );
                        while (NOT (IS_NETWORK_PLAYER_ACTIVE( iVar16 )))
                        {
                            sub_93262( ref iVar16, 16 );
                        }
                        l_U1087[sub_90518( 17 )]._fU20 = iVar16;
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
                    }
                    else if (sub_49256())
                    {
                        if ((l_U1256 != (l_U1087[sub_90518( 17 )]._fU20)) AND ((l_U1087[sub_90518( 17 )]._fU20) != GET_PLAYER_ID()))
                        {
                            l_U1256 = l_U1087[sub_90518( 17 )]._fU20;
                            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        }
                    };;;;
                    if ((l_U1087[sub_90518( 17 )]._fU20) == GET_PLAYER_ID())
                    {
                        l_U1256 = GET_PLAYER_ID();
                    }
                }
                else if (sub_49408())
                {
                    sub_47065( 1 );
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
                else if ((((sub_91475()) AND (sub_7686() > 2)) AND (NOT NETWORK_IS_TVT())) AND (NOT sub_45776()))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1369 = 1;
                }
                else if ((IS_THIS_MACHINE_THE_SERVER()) AND (NOT sub_45776()))
                {
                    if ((uParam1^)[GET_PLAYER_ID()] == -7)
                    {
                        if (sub_49256())
                        {
                            if (NOT l_U1370)
                            {
                                if ((NOT (sub_90151( l_U1086 ))) || (GET_NUMBER_OF_PLAYERS() <= 4))
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
                        else if (sub_98020( ref l_U1086, 14 ))
                        {
                            if (GET_NUMBER_OF_PLAYERS() > 4)
                            {
                                while (sub_90151( l_U1086 ))
                                {
                                    l_U1086--;
                                }
                            }
                        }
                        else if (sub_98363( ref l_U1086, 14 ))
                        {
                            if (GET_NUMBER_OF_PLAYERS() > 4)
                            {
                                while (sub_90151( l_U1086 ))
                                {
                                    l_U1086++;
                                }
                            }
                        }
                        (uParam3^) = sub_98705( l_U1086 );;;
                    }
                    else if ((uParam1^)[GET_PLAYER_ID()] == -8)
                    {
                        if ((sub_90151( l_U1086 )) AND (GET_NUMBER_OF_PLAYERS() > 4))
                        {
                            (uParam1^)[GET_PLAYER_ID()] = -7;
                        }
                    }
                }
                else if (sub_45776())
                {
                    if (sub_49256())
                    {
                        if (NOT NETWORK_LEAVE_GAME_PENDING())
                        {
                            sub_99018( ref uVar38, sub_98705( l_U1086 ), -1 );
                            if ((NETWORK_IS_GAME_RANKED()) AND ((sub_98705( l_U1086 )) != 16))
                            {
                                uVar38._fU0[1] = 1;
                            }
                            N_1187265313( ref uVar38 );
                            sub_99356();
                        }
                    }
                    else
                    {
                        sub_47752( ref l_U1086, 14, 0 );
                    }
                }
                else if ((uParam3^) == -1)
                {
                    l_U1086 = sub_89893( sub_6739() );
                }
                else
                {
                    l_U1086 = sub_89893( (uParam3^) );
                };;;;;;
                if (GET_HOST_ID() > -1)
                {
                    if ((uParam1^)[GET_HOST_ID()] > -5)
                    {
                        sub_47065( 1 );
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                }
            }
            else if (((((uParam1^)[GET_PLAYER_ID()] == -3) || ((uParam1^)[GET_PLAYER_ID()] == -6)) || ((uParam1^)[GET_PLAYER_ID()] == -2)) || ((uParam1^)[GET_PLAYER_ID()] == -1))
            {
                if (sub_49408())
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1291 = 1;
                    if ((uParam1^)[GET_PLAYER_ID()] == -6)
                    {
                        sub_47065( 1 );
                        (uParam1^)[GET_PLAYER_ID()] = -7;
                    }
                    else if ((uParam1^)[GET_PLAYER_ID()] == -2)
                    {
                        sub_47065( 1 );
                        (uParam1^)[GET_PLAYER_ID()] = -4;
                    }
                    else
                    {
                        sub_95022( 1 );
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                }
                else if (sub_49256())
                {
                    if (NOT NETWORK_LEAVE_GAME_PENDING())
                    {
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        UNPAUSE_GAME();
                        if (NOT IS_SCREEN_FADED_OUT())
                        {
                            sub_44214( 0 );
                        }
                        if ((uParam1^)[GET_PLAYER_ID()] == -1)
                        {
                            if (NETWORK_IS_RENDEZVOUS_HOST())
                            {
                                sub_99842();
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
                                sub_99018( ref uVar38, sub_98705( l_U1086 ), -1 );
                                if ((NETWORK_IS_GAME_RANKED()) AND ((sub_98705( l_U1086 )) != 16))
                                {
                                    uVar38._fU0[1] = 1;
                                }
                                N_1187265313( ref uVar38 );
                                sub_99356();
                            }
                        }
                        else
                        {
                            sub_57169();
                        }
                    }
                }
                if (((((uParam1^)[GET_PLAYER_ID()] == -3) || ((uParam1^)[GET_PLAYER_ID()] == -6)) || ((uParam1^)[GET_PLAYER_ID()] == -2)) || ((uParam1^)[GET_PLAYER_ID()] == -1))
                {
                    SET_WIDESCREEN_FORMAT( 0 );
                    DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                    SET_WIDESCREEN_FORMAT( 1 );
                    sub_45989( 0, sub_47406(), sub_49712(), 0, 0, 0, 0, 0, 255 );
                    GET_FRONTEND_DESIGN_VALUE( 106, ref uVar34, ref fVar35 );
                    GET_FRONTEND_DESIGN_VALUE( 107, ref fVar36, ref fVar33 );
                    GET_HUD_COLOUR( 49, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                    if ((uParam1^)[GET_PLAYER_ID()] == -1)
                    {
                        sub_47460( "RETURNTOPARTYM", uVar34, fVar35, fVar36, fVar33, iVar17, iVar18, iVar19, 255, 1 );
                    }
                    else if ((uParam1^)[GET_PLAYER_ID()] == -2)
                    {
                        sub_47460( "CHOOSENEWGAME", uVar34, fVar35, fVar36, fVar33, iVar17, iVar18, iVar19, 255, 1 );
                    }
                    else
                    {
                        sub_47460( "WANT_TO_LEAVE", uVar34, fVar35, fVar36, fVar33, iVar17, iVar18, iVar19, 255, 1 );
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
                            sub_100606( ref l_U1284 );
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
    if (sub_5773())
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
        sub_6195();
    }
    if (NOT NETWORK_IS_TVT())
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (sub_17477())
            {
                if ((GET_PLAYER_TEAM( sub_6220() )) == -1)
                {
                    SET_PLAYER_TEAM( sub_6220(), sub_44592() );
                    if ((uParam1^)[GET_PLAYER_ID()] == 2)
                    {
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                }
            }
            else if (sub_17432())
            {
                if ((GET_PLAYER_TEAM( sub_6220() )) == -1)
                {
                    SET_PLAYER_TEAM( sub_6220(), sub_45074( 2 ) );
                    if ((uParam1^)[GET_PLAYER_ID()] == 2)
                    {
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                }
                else if (sub_17574() < 2)
                {
                    if ((sub_45437( GET_PLAYER_TEAM( sub_6220() ) )) > 1)
                    {
                        if (sub_45535( GET_PLAYER_ID() ))
                        {
                            SET_PLAYER_TEAM( sub_6220(), sub_45074( 2 ) );
                            if ((uParam1^)[GET_PLAYER_ID()] == 2)
                            {
                                (uParam1^)[GET_PLAYER_ID()] = 0;
                            }
                        }
                    }
                }
            }
            else if (sub_10967())
            {
                if ((GET_PLAYER_TEAM( sub_6220() )) != 0)
                {
                    SET_PLAYER_TEAM( sub_6220(), 0 );
                }
            }
            else if ((GET_PLAYER_TEAM( sub_6220() )) != -1)
            {
                SET_PLAYER_TEAM( sub_6220(), -1 );
                if ((uParam1^)[GET_PLAYER_ID()] == 2)
                {
                    (uParam1^)[GET_PLAYER_ID()] = 0;
                }
            };;;;
        }
    }
    if (((((uParam1^)[GET_PLAYER_ID()] == -3) || ((uParam1^)[GET_PLAYER_ID()] == -6)) || ((uParam1^)[GET_PLAYER_ID()] == -2)) || ((uParam1^)[GET_PLAYER_ID()] == -1))
    {
        sub_49567();
        return;
    }
    else if (IS_PAUSE_MENU_ACTIVE())
    {
        sub_95022( 1 );
        sub_49567();
        return;
    }
    else if (l_U1299)
    {
        if (N_604003528())
        {
            if (sub_47024())
            {
                l_U1299 = 0;
            }
            sub_49567();
            return;
        }
        else if (sub_101561( bVar31, bVar32 ))
        {
            l_U1299 = 0;
        }
        sub_49567();
        return;;
    }
    else if (sub_91357())
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (GET_PLAYERSETTINGS_MODEL_CHOICE() != (sub_104477( sub_869() )))
            {
                if (sub_5709( GET_PLAYERSETTINGS_MODEL_CHOICE() ))
                {
                    CHANGE_PLAYER_MODEL( sub_6220(), GET_PLAYERSETTINGS_MODEL_CHOICE() );
                    SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE( sub_6220() );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( GET_PLAYERSETTINGS_MODEL_CHOICE() );
                    sub_567( GET_PLAYER_ID(), 0 );
                }
            }
            else if (HAS_GAMER_CHANGED_NETWORK_MODEL_SETTINGS())
            {
                SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE( sub_6220() );
            }
        }
    };;;;
    if ((sub_45776()) || (NOT N_604003528()))
    {
        if (NOT bVar31)
        {
            if (((uParam1^)[GET_PLAYER_ID()] == 0) || ((uParam1^)[GET_PLAYER_ID()] == 2))
            {
                iVar16 = GET_LOCAL_PLAYER_MP_CASH();
                if (iVar16 > 0)
                {
                    SET_WIDESCREEN_FORMAT( 2 );
                    sub_45989( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                    GET_FRONTEND_DESIGN_VALUE( 23, ref uVar34, ref fVar35 );
                    GET_FRONTEND_DESIGN_VALUE( 24, ref fVar36, ref fVar33 );
                    GET_HUD_COLOUR( 49, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                    sub_46286( "CASH", uVar34, fVar35, fVar36, fVar33, 255, 255, 255, 255, 2, iVar16 );
                    SET_WIDESCREEN_FORMAT( 3 );
                }
            }
        }
    }
    if ((uParam1^)[GET_PLAYER_ID()] == -4)
    {
        sub_47065( 1 );
        sub_45989( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
        sub_47460( "NEWGAME", sub_47406(), 0.08500000, sub_57361( 113 ), sub_57394( 113 ), 255, 255, 255, 255, 2 );
        INIT_FRONTEND_HELPER_TEXT();
        DRAW_FRONTEND_HELPER_TEXT( "CANCEL", "INPUT_F_CANCEL", 0 );
        DRAW_FRONTEND_HELPER_TEXT( "CONFIRM", "INPUT_F_ACCEPT", 0 );
        DRAW_FRONTEND_HELPER_TEXT( "MODE", "PAD_DPAD_UPDOWN", 0 );
        sub_105051( 0 );
        SET_WIDESCREEN_FORMAT( 2 );
        if (GET_IS_WIDESCREEN())
        {
            sub_45989( 0, sub_47406(), sub_49712() * 1.20000000, 0, 0, 0, 0, 0, 255 );
        }
        else
        {
            sub_45989( 0, sub_47406(), sub_49712(), 0, 0, 0, 0, 0, 255 );
        }
        GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
        if (GET_IS_WIDESCREEN())
        {
            sub_47460( "CHOOSENEWGAME", sub_47406() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
        }
        else
        {
            sub_47460( "CHOOSENEWGAME", sub_47406() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
        }
    }
    else if (((uParam1^)[GET_PLAYER_ID()] == -7) || ((uParam1^)[GET_PLAYER_ID()] == -8))
    {
        sub_47065( 1 );
        sub_45989( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
        if (sub_45776())
        {
            sub_47460( "NEXTGAME", sub_47406(), 0.11900000, sub_57361( 113 ), sub_57394( 113 ), 255, 255, 255, 255, 2 );
        }
        else
        {
            sub_47460( "NEXTGAME", sub_47406(), 0.08500000, sub_57361( 113 ), sub_57394( 113 ), 255, 255, 255, 255, 2 );
        }
        SET_WIDESCREEN_FORMAT( 3 );
        INIT_FRONTEND_HELPER_TEXT();
        if (((l_U1369) AND (NOT NETWORK_IS_TVT())) AND (NOT sub_45776()))
        {
            if ((l_U1256 != (l_U1087[sub_90518( 17 )]._fU20)) AND ((l_U1087[sub_90518( 17 )]._fU20) != GET_PLAYER_ID()))
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
            sub_47460( ref l_U1087[sub_90518( 17 )]._fU0, fVar37 - fVar33, 0.76300000, 0.31500000, 0.43000000, 255, 255, 255, 255, 3 );
            sub_45989( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
            if ((((l_U1087[sub_90518( 17 )]._fU20) > -1) AND ((l_U1087[sub_90518( 17 )]._fU20) != GET_PLAYER_ID())) AND (IS_NETWORK_PLAYER_ACTIVE( l_U1087[sub_90518( 17 )]._fU20 )))
            {
                sub_66903( sub_578( l_U1087[sub_90518( 17 )]._fU20 ), ref iVar21, ref iVar22, ref iVar23 );
                if (l_U102)
                {
                    if (N_604003528())
                    {
                        fVar36 = sub_48627( fVar37 + fVar33, 0.76300000, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, "WWWWWWWWWWWWWWW" );
                    }
                    else
                    {
                        fVar36 = sub_48627( fVar37 + fVar33, 0.76300000, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, "WWWWWWWWWWWWWWWW" );
                    }
                }
                else
                {
                    SET_TEXT_SCALE( 0.31500000, 0.43000000 );
                    SET_TEXT_USE_UNDERSCORE( 1 );
                    fVar49 = GET_STRING_WIDTH_WITH_STRING( "STRING", GET_PLAYER_NAME( sub_578( l_U1087[sub_90518( 17 )]._fU20 ) ) );
                    fVar50 = sub_49712() - (fVar37 + fVar33);
                    if (fVar49 <= fVar50)
                    {
                        fVar36 = sub_48627( fVar37 + fVar33, 0.76300000, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_578( l_U1087[sub_90518( 17 )]._fU20 ) ) );
                    }
                    else
                    {
                        fVar36 = sub_48627( fVar37 + fVar33, 0.76300000, (fVar50 * 0.31500000) / fVar49, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_578( l_U1087[sub_90518( 17 )]._fU20 ) ) );
                    }
                    SET_TEXT_USE_UNDERSCORE( 0 );
                }
            }
            else
            {
                fVar36 = sub_47460( "NONE", fVar37 + fVar33, 0.76300000, 0.31500000, 0.43000000, 255, 255, 255, 255, 2 );
            }
            DRAW_SPRITE( l_U599[0], ((fVar37 + fVar33) + 0.01300000) + fVar36, 0.76300000 + 0.01300000, 0.01400000, 0.02000000, 0.00000000, 255, 255, 255, 255 );
        }
        else if (sub_45776())
        {
            DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
            DRAW_FRONTEND_HELPER_TEXT( "CONFIRM", "INPUT_F_ACCEPT", 0 );
            sub_105051( 0 );
        }
        else if ((IS_THIS_MACHINE_THE_SERVER()) AND ((uParam1^)[GET_PLAYER_ID()] == -7))
        {
            DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
            DRAW_FRONTEND_HELPER_TEXT( "CONFIRM", "INPUT_F_ACCEPT", 0 );
            if ((sub_7686() > 2) AND (NOT NETWORK_IS_TVT()))
            {
                DRAW_FRONTEND_HELPER_TEXT( "KICK_PLAYERU", "INPUT_F_Y", 0 );
            }
            DRAW_FRONTEND_HELPER_TEXT( "MODE", "PAD_DPAD_UPDOWN", 0 );
        }
        else if ((IS_THIS_MACHINE_THE_SERVER()) AND (NOT l_U1370))
        {
            DRAW_FRONTEND_HELPER_TEXT( "CANCEL", "INPUT_F_CANCEL", 0 );
            if ((sub_7686() > 2) AND (NOT NETWORK_IS_TVT()))
            {
                DRAW_FRONTEND_HELPER_TEXT( "KICK_PLAYERU", "INPUT_F_Y", 0 );
            }
        }
        else
        {
            DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
            if ((sub_7686() > 2) AND (NOT NETWORK_IS_TVT()))
            {
                DRAW_FRONTEND_HELPER_TEXT( "KICK_PLAYERU", "INPUT_F_Y", 0 );
            }
        };;;;
        if (NOT sub_45776())
        {
            sub_105051( 1 );
        }
        SET_WIDESCREEN_FORMAT( 2 );
        if (NOT sub_45776())
        {
            if (GET_IS_WIDESCREEN())
            {
                sub_45989( 0, sub_47406(), sub_49712() * 1.20000000, 0, 0, 0, 0, 0, 255 );
                GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                sub_47460( "CHOOSNEXTGAME", sub_47406() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
            }
            else
            {
                sub_45989( 0, sub_47406(), sub_49712(), 0, 0, 0, 0, 0, 255 );
                GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                sub_47460( "CHOOSNEXTGAME", sub_47406() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
            }
        }
        if (NOT sub_45776())
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
                if (sub_90151( l_U1086 ))
                {
                    if (GET_NUMBER_OF_PLAYERS() > 4)
                    {
                        (uParam1^)[GET_PLAYER_ID()] = -7;
                        bVar29 = false;
                    }
                }
                else if ((sub_98705( l_U1086 )) == sub_6739())
                {
                    if ((sub_98705( l_U1086 )) != 10)
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
                            sub_44214( 0 );
                        }
                        sub_89188( sub_98705( l_U1086 ) );
                    }
                }
            }
        }
    }
    else
    {
        SET_WIDESCREEN_FORMAT( 2 );
        StrCopy( ref cVar8, "CP_DESCRP_", 16 );
        ConcatString(ref cVar8, sub_6739(), 16);
        if (GET_IS_WIDESCREEN())
        {
            sub_45989( 0, sub_47406(), sub_49712() * 1.20000000, 0, 0, 0, 0, 0, 255 );
            GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
            sub_47460( ref cVar8, sub_47406() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
        }
        else
        {
            sub_45989( 0, sub_47406(), sub_49712(), 0, 0, 0, 0, 0, 255 );
            GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
            sub_47460( ref cVar8, sub_47406() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
        }
        SET_WIDESCREEN_FORMAT( 3 );
        if (NOT l_U1289)
        {
            if ((l_U1087[sub_90518( 16 )]._fU20) == 1)
            {
                sub_108563( 0 );
            }
            else if (sub_108902( ref I ))
            {
                if (sub_108998( ref l_U1087[I]._fU0, l_U1087[I]._fU24 ))
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
            DRAW_RECT( 0.50000000, sub_57361( 0 ), 1.00000000, 0.00200000, 180, 180, 180, 255 );
        }
        else
        {
            DRAW_RECT( 0.50000000, sub_57361( 0 ), 1.00000000, 0.00400000, 180, 180, 180, 255 );
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
                sub_45989( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                if (sub_92547())
                {
                    fVar33 = 0.01300000;
                    if ((uParam1^)[GET_PLAYER_ID()] == 0)
                    {
                        bVar27 = sub_95527( I );
                        if (NOT (sub_94296( I )))
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
                    sub_47460( ref l_U1087[I]._fU0, fVar37 - fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 3 );
                }
                else
                {
                    fVar33 = 0.00800000;
                    sub_47460( ref l_U1087[I]._fU0, fVar37 - fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 3 );
                }
                sub_45989( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                switch (l_U1087[I]._fU16)
                {
                    case 1:
                    case 8:
                    if ((bVar27) || (l_U1087[I]._fU24 > 0))
                    {
                        cVar8 = {l_U1087[I]._fU0};
                        ConcatString(ref cVar8, l_U1087[I]._fU20, 16);
                        fVar36 = sub_47460( ref cVar8, fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    else
                    {
                        fVar36 = sub_47460( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 2:
                    if (l_U1087[I]._fU20 < 2147483647)
                    {
                        fVar36 = sub_64813( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, l_U1087[I]._fU20, 1065353216 );
                    }
                    else
                    {
                        fVar36 = sub_48627( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, "-" );
                    }
                    break;
                    case 3:
                    fVar36 = sub_46611( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, l_U1087[I]._fU20 );
                    break;
                    case 11:
                    if ((bVar27) || (l_U1087[I]._fU24 > 0))
                    {
                        if (l_U1087[I]._fU20 == 0)
                        {
                            fVar36 = sub_47460( "RANDOM", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                        else
                        {
                            fVar36 = sub_46611( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, l_U1087[I]._fU20 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_47460( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 13:
                    if ((bVar27) || (l_U1087[I]._fU24 > 0))
                    {
                        ;
                    }
                    else
                    {
                        fVar36 = sub_47460( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 4:
                    case 14:
                    if ((bVar27) || (l_U1087[I]._fU24 > 0))
                    {
                        fVar36 = sub_111478( "NUM_OUTOF_NUM", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, l_U1087[I]._fU20 + 1, l_U1087[I]._fU24 );
                    }
                    else
                    {
                        fVar36 = sub_47460( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 15:
                    if (l_U1087[I]._fU20 > -1)
                    {
                        cVar8 = {l_U1087[I]._fU0};
                        ConcatString(ref cVar8, l_U1087[I]._fU20, 16);
                        fVar36 = sub_47460( ref cVar8, fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    else
                    {
                        fVar36 = sub_47460( "OFF", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 5:
                    case 7:
                    if ((bVar27) || (l_U1087[I]._fU24 > 0))
                    {
                        if (l_U1087[I]._fU20 > 0)
                        {
                            fVar36 = sub_47460( "YES", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                        else
                        {
                            fVar36 = sub_47460( "NO", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_47460( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 6:
                    case 16:
                    if ((bVar27) || (l_U1087[I]._fU24 > 0))
                    {
                        if (l_U1087[I]._fU20 > 0)
                        {
                            fVar36 = sub_47460( "ON", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                        else
                        {
                            fVar36 = sub_47460( "OFF", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_47460( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 9:
                    case 10:
                    if (sub_112295())
                    {
                        if (l_U1087[I]._fU20 > 0)
                        {
                            fVar36 = sub_47460( "ON", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                        else
                        {
                            fVar36 = sub_47460( "OFF", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_47460( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 12:
                    if ((bVar27) || (l_U1087[I]._fU24 > 0))
                    {
                        fVar36 = sub_46611( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, sub_112626() );
                    }
                    else if ((GET_PLAYER_TEAM( sub_6220() )) == -1)
                    {
                        fVar36 = sub_47460( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    else
                    {
                        fVar36 = sub_46611( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, sub_112626() );
                    }
                    break;
                    case 17:
                    if ((bVar27) || (l_U1087[I]._fU24 > 0))
                    {
                        if (((l_U1087[I]._fU20 > -1) AND (l_U1087[I]._fU20 != GET_PLAYER_ID())) AND (IS_NETWORK_PLAYER_ACTIVE( l_U1087[I]._fU20 )))
                        {
                            if (l_U1275 == I)
                            {
                                sub_66903( sub_578( l_U1087[I]._fU20 ), ref iVar21, ref iVar22, ref iVar23 );
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
                                    fVar36 = sub_48627( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, "WWWWWWWWWWWWWWW" );
                                }
                                else
                                {
                                    fVar36 = sub_48627( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, "WWWWWWWWWWWWWWWW" );
                                }
                            }
                            else
                            {
                                SET_TEXT_SCALE( 0.31500000, 0.43000000 );
                                SET_TEXT_USE_UNDERSCORE( 1 );
                                fVar49 = GET_STRING_WIDTH_WITH_STRING( "STRING", GET_PLAYER_NAME( sub_578( l_U1087[I]._fU20 ) ) );
                                if (GET_IS_WIDESCREEN())
                                {
                                    if (fVar49 <= 0.20300000)
                                    {
                                        fVar36 = sub_48627( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_578( l_U1087[I]._fU20 ) ) );
                                    }
                                    else
                                    {
                                        fVar36 = sub_48627( fVar37 + fVar33, fVar35, 0.06394500 / fVar49, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_578( l_U1087[I]._fU20 ) ) );
                                    }
                                }
                                else if (fVar49 <= 0.18900000)
                                {
                                    fVar36 = sub_48627( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_578( l_U1087[I]._fU20 ) ) );
                                }
                                else
                                {
                                    fVar36 = sub_48627( fVar37 + fVar33, fVar35, 0.05953500 / fVar49, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_578( l_U1087[I]._fU20 ) ) );
                                }
                                SET_TEXT_USE_UNDERSCORE( 0 );
                            }
                        }
                        else
                        {
                            fVar36 = sub_47460( "NONE", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_47460( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                }
                if ((l_U1275 == I) AND ((uParam1^)[GET_PLAYER_ID()] == 0))
                {
                    if (bVar27)
                    {
                        if (NOT (sub_94296( l_U1275 )))
                        {
                            DRAW_SPRITE( l_U599[0], ((fVar37 + fVar33) + 0.01300000) + fVar36, fVar35 + 0.01300000, 0.01400000, 0.02000000, 0.00000000, 255, 255, 255, 255 );
                        }
                    }
                }
                fVar35 += 0.03200000;
            }
        }
    }
    sub_49567();
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
                    DRAW_RECT( ((0.20800000 + sub_47406()) + 0.00900000) + sub_114118(), 0.04900000 + fVar35, 0.42900000, 0.03800000, iVar17, iVar18, iVar19, 45 );
                }
                else
                {
                    DRAW_RECT( ((0.17900000 + sub_47406()) + 0.00900000) + sub_114118(), 0.04900000 + fVar35, 0.37200000, 0.03700000, iVar17, iVar18, iVar19, 45 );
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
            if ((sub_45437( J )) > 0)
            {
                iVar14++;
                sub_45989( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                GET_TEAM_RGB_COLOUR( J, ref iVar17, ref iVar18, ref iVar19 );
                if (GET_IS_WIDESCREEN())
                {
                    sub_46611( sub_47406() + 0.00900000, fVar35 + 0.03200000, 0.38000000, 0.55500000, iVar17, iVar18, iVar19, 255, 1, iVar14 );
                }
                else
                {
                    sub_46611( sub_47406() + 0.00900000, fVar35 + 0.03100000, 0.38000000, 0.55500000, iVar17, iVar18, iVar19, 255, 1, iVar14 );
                }
                for ( I = 0; I < 16; I++ )
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( l_U662[0]._fU24[I] ))
                    {
                        if ((GET_PLAYER_TEAM( sub_578( l_U662[0]._fU24[I] ) )) == J)
                        {
                            if (GET_IS_WIDESCREEN())
                            {
                                sub_66807( l_U662[0]._fU24[I], ref iVar51, (sub_47406() + 0.00900000) + sub_114118(), ref fVar35, 0.35000000, 0.47750000, 0.03600000, iParam0, 0 );
                            }
                            else
                            {
                                sub_66807( l_U662[0]._fU24[I], ref iVar51, (sub_47406() + 0.00900000) + sub_114118(), ref fVar35, 0.32500000, 0.43500000, 0.03600000, iParam0, 0 );
                            }
                            sub_114929( l_U662[0]._fU24[I], (((uParam1^)[l_U662[0]._fU24[I]] == 2) || (((NOT sub_45776()) AND ((uParam1^)[l_U662[0]._fU24[I]] == -7)) AND (GET_HOST_ID() != l_U662[0]._fU24[I]))) || (((uParam1^)[l_U662[0]._fU24[I]] == -8) AND (GET_HOST_ID() == l_U662[0]._fU24[I])), ((sub_47406() + 0.00900000) + sub_114118()) + fVar36, fVar35 );
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
                    DRAW_RECT( ((0.20800000 + sub_47406()) + 0.00900000) + -0.00900000, 0.04900000 + fVar35, 0.42900000, 0.03800000, iVar17, iVar18, iVar19, 45 );
                }
                else
                {
                    DRAW_RECT( ((0.17900000 + sub_47406()) + 0.00900000) + -0.00900000, 0.04900000 + fVar35, 0.37200000, 0.03800000, iVar17, iVar18, iVar19, 45 );
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
                if (((GET_PLAYER_TEAM( sub_578( l_U662[0]._fU24[I] ) )) == -1) || (sub_10967()))
                {
                    if (GET_IS_WIDESCREEN())
                    {
                        sub_66807( l_U662[0]._fU24[I], ref iVar51, (sub_47406() + 0.00900000) + -0.00900000, ref fVar35, 0.35000000, 0.47750000, 0.03600000, iParam0, ((uParam1^)[GET_PLAYER_ID()] == 0) || ((uParam1^)[GET_PLAYER_ID()] == 2) );
                    }
                    else
                    {
                        sub_66807( l_U662[0]._fU24[I], ref iVar51, (sub_47406() + 0.00900000) + -0.00900000, ref fVar35, 0.32500000, 0.43500000, 0.03600000, iParam0, ((uParam1^)[GET_PLAYER_ID()] == 0) || ((uParam1^)[GET_PLAYER_ID()] == 2) );
                    }
                    sub_114929( l_U662[0]._fU24[I], (((uParam1^)[l_U662[0]._fU24[I]] == 2) || (((NOT sub_45776()) AND ((uParam1^)[l_U662[0]._fU24[I]] == -7)) AND (GET_HOST_ID() != l_U662[0]._fU24[I]))) || (((uParam1^)[l_U662[0]._fU24[I]] == -8) AND (GET_HOST_ID() == l_U662[0]._fU24[I])), ((sub_47406() + 0.00900000) + -0.00900000) + fVar36, fVar35 );
                }
            }
        }
    }
    return;
}

void sub_89714()
{
    if (DOES_CAM_EXIST( l_U1342 ))
    {
        DESTROY_CAM( l_U1342 );
    }
    return;
}

int sub_89893(unknown uParam0)
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

int sub_90151(int iParam0)
{
    if (((iParam0 == 10) || (iParam0 == 11)) || (iParam0 == 12))
    {
        return 1;
    }
    return 0;
}

int sub_90518(int iParam0)
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

void sub_90733()
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

int sub_91357()
{
    unknown uVar2;

    uVar2 = sub_6739();
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

int sub_91475()
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

int sub_91657()
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

int sub_92132()
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

int sub_92270()
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

int sub_92547()
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

int sub_92866()
{
    if (NOT NETWORK_IS_TVT())
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (sub_17432())
            {
                if ((sub_45437( GET_PLAYER_TEAM( sub_6220() ) )) == 1)
                {
                    return 0;
                }
                return 1;
            }
            else if (sub_17477())
            {
                if (sub_7686() == 1)
                {
                    return 0;
                }
                return 1;
            }
        }
    }
    return 0;
}

int sub_92998()
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

int sub_93262(unknown uParam0, int iParam1)
{
    (uParam0^)--;
    if ((uParam0^) < 0)
    {
        (uParam0^) = iParam1 - 1;
        return 1;
    }
    return 0;
}

int sub_93404()
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

int sub_94296(int iParam0)
{
    if ((((iParam0 == l_U1293) || (iParam0 == l_U1295)) || (iParam0 == l_U1292)) || (iParam0 == l_U1294))
    {
        return 1;
    }
    return 0;
}

int sub_94391(unknown uParam0, int iParam1)
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

void sub_94769(int iParam0)
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

void sub_95022(unknown uParam0)
{
    sub_47065( uParam0 );
    sub_55222( 0 );
    return;
}

int sub_95527(unknown uParam0)
{
    if (l_U1087[uParam0]._fU16 != 0)
    {
        if ((l_U1087[uParam0]._fU16 == 9) || (l_U1087[uParam0]._fU16 == 10))
        {
            if (IS_THIS_MACHINE_THE_SERVER())
            {
                if (sub_17477())
                {
                    if (sub_17477())
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
        else if (sub_92866())
        {
            return 1;
        };;;;
    }
    return 0;
}

int sub_98020(unknown uParam0, unknown uParam1)
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

int sub_98363(unknown uParam0, int iParam1)
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

int sub_98705(unknown uParam0)
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

void sub_99018(int iParam0, int iParam1, int iParam2)
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
        iParam0->_fU0[2] = sub_99114( iParam1 );
        iParam0->_fU0[3] = 0;
        iParam0->_fU0[4] = iParam2;
        g_U14 = iParam2;
        iParam0->_fU0[5] = sub_99208( iParam1 );
    }
    return;
}

int sub_99114(unknown uParam0)
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

int sub_99208(unknown uParam0)
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

void sub_99356()
{
    g_U10 = 1;
    sub_57182();
    return;
}

void sub_99842()
{
    g_U11 = 1;
    sub_57182();
    return;
}

void sub_100606(unknown uParam0)
{
    if ((uParam0^))
    {
        (uParam0^) = 0;
        return;
    }
    (uParam0^) = 1;
    return;
}

int sub_101561(unknown uParam0, boolean bParam1)
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
    sub_47065( 1 );
    GET_FRONTEND_DESIGN_VALUE( 113, ref uVar13, ref uVar14 );
    sub_45989( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    sub_47460( "INVITE_TITLE", sub_47406(), 0.08500000, uVar13, uVar14, 255, 255, 255, 255, 2 );
    sub_45989( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    GET_HUD_COLOUR( 56, ref iVar5, ref iVar6, ref iVar7, ref uVar8 );
    sub_47460( "INVITES_DESC", sub_47406() + 0.00100000, fVar12, 0.31500000, 0.42950000, iVar5, iVar6, iVar7, 255, 2 );
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
                DRAW_RECT( 0.57000000 + sub_47406(), 0.01370000 + fVar12, 1.15500000, 0.03800000, iVar5, iVar6, iVar7, 45 );
            }
            else
            {
                DRAW_RECT( 0.40200000 + sub_47406(), 0.01370000 + fVar12, 0.82000000, 0.03800000, iVar5, iVar6, iVar7, 45 );
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
    sub_47752( ref l_U1300, NETWORK_GET_FRIEND_COUNT(), 0 );
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
            sub_45989( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
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
                    sub_48627( sub_47406(), fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2, "WWWWWWWWWWWWWWW" );
                }
                else
                {
                    sub_48627( sub_47406(), fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2, "WWWWWWWWWWWWWWWW" );
                }
            }
            else
            {
                SET_TEXT_USE_UNDERSCORE( 1 );
                sub_48627( sub_47406(), fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2, NETWORK_GET_FRIEND_NAME( I ) );
                SET_TEXT_USE_UNDERSCORE( 0 );
            }
            sub_45989( 0, 0.00000000, 1.50000000, 0, 0, 0, 0, 0, 255 );
            if (sub_102643( I ))
            {
                sub_47460( "INGAME", sub_47406() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
            }
            else if (sub_102798( I ))
            {
                sub_47460( "INVITING", sub_47406() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
                if (GET_CURRENT_EPISODE() == (NETWORK_GET_UNACCEPTED_INVITE_EPISODE( sub_102944( I ) )))
                {
                    StrCopy( ref cVar15, "NTGT_", 8 );
                    ConcatString(ref cVar15, NETWORK_GET_UNACCEPTED_INVITE_GAME_MODE( sub_102944( I ) ), 8);
                    sub_45989( 0, 0.00000000, 1.50000000, 0, 0, 0, 0, 0, 255 );
                    if (GET_IS_WIDESCREEN())
                    {
                        sub_47460( ref cVar15, sub_49712() + 0.32600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 3 );
                    }
                    else
                    {
                        sub_47460( ref cVar15, sub_49712() + -0.01100000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 3 );
                    }
                }
            }
            else if (NETWORK_DID_INVITE_FRIEND( NETWORK_GET_FRIEND_NAME( I ) ))
            {
                sub_47460( "INVITED", sub_47406() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
            }
            else if (NETWORK_IS_FRIEND_ONLINE( NETWORK_GET_FRIEND_NAME( I ) ))
            {
                sub_47460( "ONLINE", sub_47406() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
            }
            else
            {
                sub_47460( "OFFLINE", sub_47406() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
            };;;;
            if (NETWORK_IS_FRIEND_IN_SAME_TITLE( NETWORK_GET_FRIEND_NAME( I ) ))
            {
                DRAW_SPRITE( l_U599[33], sub_47406() + 0.33300000, fVar12 + 0.01520000, 0.03900000, 0.02600000, 0.00000000, iVar5, iVar6, iVar7, 255 );
            }
            fVar12 += 0.03600000;
        }
    }
    GET_NETWORK_TIMER( ref iVar9 );
    if (l_U1362 > (iVar9 - 5000))
    {
        SET_WIDESCREEN_FORMAT( 2 );
        sub_45989( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
        GET_FRONTEND_DESIGN_VALUE( 23, ref uVar11, ref fVar12 );
        GET_FRONTEND_DESIGN_VALUE( 24, ref uVar13, ref uVar14 );
        if (NOT bParam1)
        {
            SET_TEXT_USE_UNDERSCORE( 1 );
            sub_103656( "INVITED_PLAYER", uVar11, fVar12 + 0.04050000, uVar13, uVar14, 255, 255, 255, 255, 2, ref l_U1353 );
            SET_TEXT_USE_UNDERSCORE( 0 );
        }
    }
    INIT_FRONTEND_HELPER_TEXT();
    DRAW_FRONTEND_HELPER_TEXT( "BACK", "INPUT_F_CANCEL", 0 );
    if ((l_U1361 != l_U1300) || (l_U1362 < (iVar9 - 5000)))
    {
        l_U1361 = -1;
    }
    if (NOT (sub_102643( l_U1300 )))
    {
        if (sub_102798( l_U1300 ))
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
    if (sub_49256())
    {
        if (NETWORK_IS_FRIEND_ONLINE( NETWORK_GET_FRIEND_NAME( l_U1300 ) ))
        {
            if (NOT (sub_102643( l_U1300 )))
            {
                if (sub_102798( l_U1300 ))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    NETWORK_ACCEPT_INVITE( sub_102944( l_U1300 ) );
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
    else if (sub_49408())
    {
        return 1;
    }
    return 0;
}

int sub_102643(unknown uParam0)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (COMPARE_STRING( NETWORK_GET_FRIEND_NAME( uParam0 ), GET_PLAYER_NAME( sub_578( I ) ) ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_102798(unknown uParam0)
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

int sub_102944(unknown uParam0)
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

void sub_103656(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_46326( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_STRING( uParam0, uParam10 );
    DISPLAY_TEXT_WITH_LITERAL_STRING( uParam1, uParam2, uParam0, uParam10 );
    return Result;
}

void sub_104477(unknown uParam0)
{
    unknown Result;

    GET_CHAR_MODEL( uParam0, ref Result );
    return Result;
}

void sub_105051(boolean bParam0)
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
            if (sub_90151( I ))
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
        sub_45989( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
        sub_47460( sub_105284( I ), fVar9, fVar10, 0.35000000, 0.47750000, iVar4, iVar5, iVar6, 255, 1 );
        fVar10 += 0.03600000;
    }
    return;
}

string sub_105284(unknown uParam0)
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

void sub_108563(boolean bParam0)
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
        fVar7 = sub_47406();
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
    ConcatString(ref cVar9, sub_6739(), 16);
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
        sub_45989( 0, fVar7, sub_49712() * 1.20000000, 0, 0, 0, 0, 0, 255 );
    }
    else
    {
        sub_45989( 0, fVar7, sub_49712(), 0, 0, 0, 0, 0, 255 );
    }
    GET_HUD_COLOUR( 56, ref uVar3, ref uVar4, ref uVar5, ref uVar6 );
    sub_47460( ref cVar9, fVar7, fVar8, 0.31500000, 0.42950000, uVar3, uVar4, uVar5, 255, 2 );
    return;
}

int sub_108902(unknown uParam0)
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

int sub_108998(unknown uParam0, unknown uParam1)
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

void sub_111478(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    float Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_46326( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_NUMBER( uParam0, uParam10 );
    Result += GET_STRING_WIDTH_WITH_NUMBER( "NUMBER", uParam11 );
    Result -= GET_STRING_WIDTH_WITH_NUMBER( "NUMBER", 11 );
    DISPLAY_TEXT_WITH_2_NUMBERS( uParam1, uParam2, uParam0, uParam10, uParam11 );
    return Result;
}

int sub_112295()
{
    if (sub_17477())
    {
        if (sub_17477())
        {
            return 1;
        }
    }
    else if ((sub_17432()) || (sub_10967()))
    {
        return 1;
    }
    return 0;
}

int sub_112626()
{
    int I;
    int Result;

    for ( I = 0; I < 8; I++ )
    {
        if ((sub_45437( I )) > 0)
        {
            Result++;
            if (I == (GET_PLAYER_TEAM( sub_6220() )))
            {
                return Result;
            }
        }
    }
    return 0;
}

float sub_114118()
{
    if (GET_IS_WIDESCREEN())
    {
        return 0.02700000;
    }
    return 0.02100000;
}

void sub_114929(int iParam0, boolean bParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    iVar7 = 3;
    GET_HUD_COLOUR( 56, ref uVar8, ref uVar9, ref uVar10, ref iVar6 );
    GET_NETWORK_TIMER( ref iVar6 );
    if ((sub_114968( iParam0 )) > 0)
    {
        if ((sub_45776()) || (NOT N_604003528()))
        {
            iVar7 = 4;
        }
        if (l_U1368 > iVar6)
        {
            DRAW_SPRITE( l_U599[10], uParam2 + (-0.02400000 * iVar7), uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
        }
        else
        {
            sub_45989( 0, sub_47406(), sub_49712(), 0, 0, 0, 0, 0, 255 );
            sub_46611( (uParam2 + (-0.02400000 * iVar7)) + -0.00030000, (uParam3 + 0.01300000) + -0.01320000, 0.31500000, 0.42950000, 255, 255, 255, 255, 1, sub_114968( iParam0 ) );
            if (l_U1368 < (iVar6 - 1000))
            {
                l_U1368 = iVar6 + 1000;
            }
        }
    }
    if (((sub_45776()) || (NOT N_604003528())) AND ((GET_PLAYER_RANK_LEVEL_DURING_MP( iParam0 )) > -1))
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

void sub_114968(int iParam0)
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

int sub_116790()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (l_U1817[I]._fU84)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_116867()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (l_U1817[I]._fU88)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_116950()
{
    if (l_U1817[GET_PLAYER_ID()]._fU44 == 0)
    {
        l_U1817[GET_PLAYER_ID()]._fU44 = 1;
    }
    if ((l_U1817[GET_PLAYER_ID()]._fU44 == 0) || (l_U1817[GET_PLAYER_ID()]._fU44 == 1))
    {
        switch (l_U2673)
        {
            case 0:
            if (NOT IS_SCREEN_FADED_IN())
            {
                sub_50254( 0 );
            }
            l_U1817[GET_PLAYER_ID()]._fU4 = -5;
            DISPLAY_HUD( 0 );
            if (NETWORK_IS_SESSION_STARTED())
            {
                l_U2673 = 1;
            }
            else
            {
                l_U2673 = 2;
            }
            break;
            case 1:
            l_U1817[GET_PLAYER_ID()]._fU0 = 1;
            sub_44292( 0 );
            if (sub_71965( 2147483647, 0 ))
            {
                l_U1817[GET_PLAYER_ID()]._fU108 = 1;
            }
            if (sub_89040())
            {
                l_U2639 = 12;
                l_U2673++;
            }
            break;
            case 2:
            sub_44292( 0 );
            if (l_U2640 > l_U2674)
            {
                if (IS_SCREEN_FADED_IN())
                {
                    l_U1817[GET_PLAYER_ID()]._fU112 = 1;
                    sub_567( GET_PLAYER_ID(), 0 );
                }
                if (sub_89040())
                {
                    l_U2639 = 12;
                    l_U2780++;
                }
                else if (NOT IS_SCREEN_FADING_IN())
                {
                    sub_50254( 500 );
                }
            }
            break;
        }
    }
    return;
}

void sub_117521(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return;
}

void sub_117614()
{
    PRINT_BIG( "STARTINGGAME", 50, 2 );
    if (IS_PAUSE_MENU_ACTIVE())
    {
        DEACTIVATE_FRONTEND();
    }
    l_U1286 = 1;
    return;
}

void sub_117858()
{
    unknown uVar2;

    switch (l_U1496._fU436[2])
    {
        case 0:
        l_U2670 = 4;
        l_U2675 = 5;
        break;
        case 1:
        l_U2670 = 5;
        l_U2675 = 4;
        break;
        case 2:
        l_U2670 = 6;
        l_U2675 = 3;
        break;
    }
    if (l_U1496._fU436[1] == 0)
    {
        NETWORK_SET_FRIENDLY_FIRE_OPTION( 0 );
    }
    else if (l_U1496._fU436[1] == 1)
    {
        NETWORK_SET_FRIENDLY_FIRE_OPTION( 1 );
    }
    if (l_U1496._fU436[0] == 0)
    {
        DISABLE_PLAYER_LOCKON( sub_6220(), 1 );
    }
    else if (l_U1496._fU436[0] == 1)
    {
        DISABLE_PLAYER_LOCKON( sub_6220(), 0 );
    }
    sub_118106( l_U1496._fU436[3], 1065353216 );
    sub_118365( l_U1496._fU436[4], 1065353216 );
    if (l_U1496._fU436[5] == 0)
    {
        DISPLAY_PLAYER_NAMES( 0 );
    }
    else if (l_U1496._fU436[5] == 1)
    {
        DISPLAY_PLAYER_NAMES( 1 );
    }
    if (l_U1496._fU436[6] == 0)
    {
        NETWORK_SET_HEALTH_RETICULE_OPTION( 0 );
    }
    else if (l_U1496._fU436[6] == 1)
    {
        NETWORK_SET_HEALTH_RETICULE_OPTION( 1 );
    }
    sub_118747( l_U1496._fU436[7] );
    sub_118919( l_U1496._fU436[2], 24 );
    sub_118919( l_U1496._fU436[3], 1 );
    sub_118919( l_U1496._fU436[4], 2 );
    sub_118919( l_U1496._fU436[5], 3 );
    sub_118919( l_U1496._fU436[6], 4 );
    sub_118919( l_U1496._fU436[7], 5 );
    sub_118919( l_U1496._fU436[8], 9 );
    sub_118919( l_U1496._fU436[9], 10 );
    sub_118919( l_U1496._fU436[10], 11 );
    sub_119115();
    return;
}

void sub_118106(int iParam0, unknown uParam1)
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

void sub_118365(int iParam0, unknown uParam1)
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
    if (sub_39056())
    {
        SET_REDUCE_PED_MODEL_BUDGET( 1 );
    }
    return;
}

void sub_118747(unknown uParam0)
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

void sub_118919(unknown uParam0, unknown uParam1)
{
    SET_BIT( ref l_U1435[uParam1], 0 );
    SET_BITS_IN_RANGE( ref l_U1435[uParam1], 1, 31, uParam0 );
    return;
}

void sub_119115()
{
    CLEAR_SCRIPT_ARRAY_FROM_SCRATCHPAD( 2 );
    SAVE_SCRIPT_ARRAY_IN_SCRATCHPAD( ref l_U1435, 61, 2, 2 );
    return;
}

void sub_119184(unknown uParam0)
{
    int I;
    char[16] cVar4;

    sub_119195( uParam0 );
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
    l_U1087[sub_90518( 16 )]._fU20 = 0;
    if (NOT NETWORK_IS_TVT())
    {
        l_U1087[sub_90518( 17 )]._fU20 = GET_PLAYER_ID();
    }
    StrCopy( ref cVar4, "LONG_DESCRP_", 16 );
    ConcatString(ref cVar4, sub_6739(), 16);
    if (l_U1278 == 1)
    {
        ConcatString(ref cVar4, "A", 16);
    }
    else if (l_U1278 == 2)
    {
        ConcatString(ref cVar4, "B", 16);
    }
    PRINT_NOW( ref cVar4, 1, 1 );
    if ((sub_45776()) || (NOT N_604003528()))
    {
        l_U1257[GET_PLAYER_ID()] = GET_PLAYER_RANK_LEVEL_DURING_MP( GET_PLAYER_ID() );
    }
    UNPAUSE_GAME();
    return;
}

void sub_119195(unknown uParam0)
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
                sub_119368( ref l_U1087[I]._fU0, ref cVar5, iVar4 );
                break;
                case 5:
                case 7:
                if ((uParam0^)[I] > 0)
                {
                    sub_119368( ref l_U1087[I]._fU0, "YES", iVar4 );
                }
                else
                {
                    sub_119368( ref l_U1087[I]._fU0, "NO", iVar4 );
                }
                break;
                case 6:
                case 9:
                case 10:
                if ((uParam0^)[I] > 0)
                {
                    sub_119368( ref l_U1087[I]._fU0, "ON", iVar4 );
                }
                else
                {
                    sub_119368( ref l_U1087[I]._fU0, "OFF", iVar4 );
                }
                break;
                case 11:
                StrCopy( ref cVar5, "CPGO_NUM_", 16 );
                ConcatString(ref cVar5, (uParam0^)[I], 16);
                sub_119368( ref l_U1087[I]._fU0, ref cVar5, iVar4 );
                break;
            }
            iVar4++;
        }
    }
    return;
}

void sub_119368(unknown uParam0, unknown uParam1, unknown uParam2)
{
    StrCopy( ref g_U18._fU676[uParam2], uParam0, 16 );
    StrCopy( ref g_U18._fU1080[uParam2], uParam1, 16 );
    sub_5001( "\n ~~~~ NetCellphone Adding info, ", uParam0 );
    sub_5001( " and ", uParam1 );
    return;
}

void sub_120349()
{
    int I;
    unknown[8] uVar3;

    array(ref uVar3, 8);
    switch (l_U2765)
    {
        case 0:
        for ( I = 0; I < 8; I++ )
        {
            if (sub_8910( l_U1496._fU940[I] ))
            {
                if (HAS_CONTROL_OF_NETWORK_ID( l_U1496._fU940[I] ))
                {
                    GET_SCRIPT_TASK_STATUS( sub_8935( l_U1496._fU940[I] ), 91, ref uVar3[I] );
                    if (uVar3[I] == 7)
                    {
                        SET_CHAR_DECISION_MAKER( sub_8935( l_U1496._fU940[I] ), l_U2457 );
                        if ((((I == 1) || (I == 3)) || (I == 5)) || (I == 7))
                        {
                            SET_COMBAT_DECISION_MAKER( sub_8935( l_U1496._fU940[I] ), l_U2459 );
                        }
                        else
                        {
                            SET_COMBAT_DECISION_MAKER( sub_8935( l_U1496._fU940[I] ), l_U2461 );
                        }
                        TASK_COMBAT( sub_8935( l_U1496._fU940[I] ), sub_120659( sub_8935( l_U1496._fU940[I] ) ) );
                    }
                }
            }
        }
        l_U2765 = 1;
        break;
        case 1:
        for ( I = 0; I < 8; I++ )
        {
            if (sub_8910( l_U1496._fU940[I] ))
            {
                if (HAS_CONTROL_OF_NETWORK_ID( l_U1496._fU940[I] ))
                {
                    GET_SCRIPT_TASK_STATUS( sub_8935( l_U1496._fU940[I] ), 91, ref uVar3[I] );
                    if (uVar3[I] == 7)
                    {
                        SET_CHAR_DECISION_MAKER( sub_8935( l_U1496._fU940[I] ), l_U2457 );
                        if ((((I == 1) || (I == 3)) || (I == 5)) || (I == 7))
                        {
                            SET_COMBAT_DECISION_MAKER( sub_8935( l_U1496._fU940[I] ), l_U2459 );
                        }
                        else
                        {
                            SET_COMBAT_DECISION_MAKER( sub_8935( l_U1496._fU940[I] ), l_U2461 );
                        }
                        TASK_COMBAT( sub_8935( l_U1496._fU940[I] ), sub_120659( sub_8935( l_U1496._fU940[I] ) ) );
                    }
                }
            }
        }
        if (l_U1496._fU616)
        {
            if (sub_8910( l_U1496._fU888[0] ))
            {
                if (sub_22368( l_U1496._fU988[0] ))
                {
                    if (HAS_CONTROL_OF_NETWORK_ID( l_U1496._fU888[0] ))
                    {
                        if (NOT (LOCATE_CAR_3D( sub_14784( l_U1496._fU988[0], "Bc.net_SwatVanSecondWave", 0 ), 2386.19600000, 215.94720000, 5.37160000, 10.00000000, 10.00000000, 10.00000000, 0 )))
                        {
                            if (IS_CHAR_IN_CAR( sub_8935( l_U1496._fU888[0] ), sub_14784( l_U1496._fU988[0], "Bc.net_SwatVanSecondWave", 0 ) ))
                            {
                                GET_SCRIPT_TASK_STATUS( sub_8935( l_U1496._fU888[0] ), 15, ref uVar3[0] );
                                if (uVar3[0] == 7)
                                {
                                    TASK_CAR_DRIVE_TO_COORD( sub_8935( l_U1496._fU888[0] ), sub_14784( l_U1496._fU988[0], "Bc.net_SwatVanSecondWave", 0 ), 2386.19600000, 215.94720000, 5.37160000, 30.00000000, 0, 0, 3, 10.00000000, 0 );
                                }
                            }
                        }
                        else if (NOT l_U2703)
                        {
                            l_U2703 = 1;
                        }
                    }
                }
            }
            if (sub_8910( l_U1496._fU888[4] ))
            {
                if (sub_22368( l_U1496._fU988[1] ))
                {
                    if (HAS_CONTROL_OF_NETWORK_ID( l_U1496._fU888[4] ))
                    {
                        if (NOT l_U2766)
                        {
                            if (NOT (LOCATE_CAR_3D( sub_14784( l_U1496._fU988[1], "Bc.net_SwatVanSecondWave", 1 ), 2593.15900000, 470.98690000, 5.38050000, 10.00000000, 10.00000000, 10.00000000, 0 )))
                            {
                                if (IS_CHAR_IN_CAR( sub_8935( l_U1496._fU888[4] ), sub_14784( l_U1496._fU988[1], "Bc.net_SwatVanSecondWave", 1 ) ))
                                {
                                    GET_SCRIPT_TASK_STATUS( sub_8935( l_U1496._fU888[4] ), 29, ref uVar3[4] );
                                    if (uVar3[4] == 7)
                                    {
                                        TASK_CAR_DRIVE_TO_COORD( sub_8935( l_U1496._fU888[4] ), sub_14784( l_U1496._fU988[1], "Bc.net_SwatVanSecondWave", 1 ), 2593.15900000, 470.98690000, 5.38050000, 30.00000000, 0, 0, 3, 10.00000000, 10 );
                                        l_U2766 = 1;
                                    }
                                }
                            }
                            else
                            {
                                l_U2766 = 1;
                            }
                        }
                        if ((l_U2766) AND (NOT l_U2767))
                        {
                            if (NOT (LOCATE_CAR_3D( sub_14784( l_U1496._fU988[1], "Bc.net_SwatVanSecondWave", 1 ), 2564.29200000, 315.09410000, 5.37490000, 10.00000000, 10.00000000, 10.00000000, 0 )))
                            {
                                if (IS_CHAR_IN_CAR( sub_8935( l_U1496._fU888[4] ), sub_14784( l_U1496._fU988[1], "Bc.net_SwatVanSecondWave", 1 ) ))
                                {
                                    GET_SCRIPT_TASK_STATUS( sub_8935( l_U1496._fU888[4] ), 29, ref uVar3[4] );
                                    if (uVar3[4] == 7)
                                    {
                                        TASK_CAR_DRIVE_TO_COORD( sub_8935( l_U1496._fU888[4] ), sub_14784( l_U1496._fU988[1], "Bc.net_SwatVanSecondWave", 1 ), 2564.29200000, 315.09410000, 5.37490000, 30.00000000, 0, 0, 3, 10.00000000, 10 );
                                    }
                                }
                            }
                            else
                            {
                                l_U2767 = 1;
                            }
                        }
                        else if ((l_U2766) AND (l_U2767))
                        {
                            if (NOT (LOCATE_CAR_3D( sub_14784( l_U1496._fU988[1], "Bc.net_SwatVanSecondWave", 1 ), 2457.18000000, 190.22420000, 4.80770000, 10.00000000, 10.00000000, 10.00000000, 0 )))
                            {
                                if (IS_CHAR_IN_CAR( sub_8935( l_U1496._fU888[4] ), sub_14784( l_U1496._fU988[1], "Bc.net_SwatVanSecondWave", 1 ) ))
                                {
                                    GET_SCRIPT_TASK_STATUS( sub_8935( l_U1496._fU888[4] ), 29, ref uVar3[4] );
                                    if (uVar3[4] == 7)
                                    {
                                        TASK_CAR_DRIVE_TO_COORD( sub_8935( l_U1496._fU888[4] ), sub_14784( l_U1496._fU988[1], "Bc.net_SwatVanSecondWave", 1 ), 2457.18000000, 190.22420000, 4.80770000, 30.00000000, 0, 0, 3, 10.00000000, 10 );
                                    }
                                }
                            }
                            else if (NOT l_U2704)
                            {
                                l_U2704 = 1;
                            }
                        }
                    }
                }
            }
        }
        if ((l_U2703) AND (l_U2704))
        {
            l_U2765 = 2;
        }
        else if (l_U2703)
        {
            for ( I = 0; I < 4; I++ )
            {
                if (sub_8910( l_U1496._fU888[I] ))
                {
                    if (HAS_CONTROL_OF_NETWORK_ID( l_U1496._fU888[I] ))
                    {
                        GET_SCRIPT_TASK_STATUS( sub_8935( l_U1496._fU888[I] ), 91, ref uVar3[I] );
                        if (uVar3[I] == 7)
                        {
                            CLEAR_CHAR_TASKS( sub_8935( l_U1496._fU888[I] ) );
                            SET_COMBAT_DECISION_MAKER( sub_8935( l_U1496._fU888[I] ), l_U2459 );
                            TASK_COMBAT( sub_8935( l_U1496._fU888[I] ), sub_120659( sub_8935( l_U1496._fU888[I] ) ) );
                        }
                    }
                }
            }
        }
        if (l_U2704)
        {
            for ( I = 4; I <= 7; I++ )
            {
                if (sub_8910( l_U1496._fU888[I] ))
                {
                    if (HAS_CONTROL_OF_NETWORK_ID( l_U1496._fU888[I] ))
                    {
                        GET_SCRIPT_TASK_STATUS( sub_8935( l_U1496._fU888[I] ), 91, ref uVar3[I] );
                        if (uVar3[I] == 7)
                        {
                            CLEAR_CHAR_TASKS( sub_8935( l_U1496._fU888[I] ) );
                            SET_COMBAT_DECISION_MAKER( sub_8935( l_U1496._fU888[I] ), l_U2459 );
                            TASK_COMBAT( sub_8935( l_U1496._fU888[I] ), sub_120659( sub_8935( l_U1496._fU888[I] ) ) );
                        }
                    }
                }
            }
        }
        break;
        case 2:
        for ( I = 0; I < 8; I++ )
        {
            if (sub_8910( l_U1496._fU940[I] ))
            {
                if (HAS_CONTROL_OF_NETWORK_ID( l_U1496._fU940[I] ))
                {
                    GET_SCRIPT_TASK_STATUS( sub_8935( l_U1496._fU940[I] ), 91, ref uVar3[I] );
                    if (uVar3[I] == 7)
                    {
                        if (I < 4)
                        {
                            SET_COMBAT_DECISION_MAKER( sub_8935( l_U1496._fU940[I] ), l_U2459 );
                        }
                        else
                        {
                            SET_COMBAT_DECISION_MAKER( sub_8935( l_U1496._fU940[I] ), l_U2459 );
                        }
                        TASK_COMBAT( sub_8935( l_U1496._fU940[I] ), sub_120659( sub_8935( l_U1496._fU940[I] ) ) );
                    }
                }
            }
        }
        for ( I = 0; I < 8; I++ )
        {
            if (sub_8910( l_U1496._fU888[I] ))
            {
                if (HAS_CONTROL_OF_NETWORK_ID( l_U1496._fU888[I] ))
                {
                    GET_SCRIPT_TASK_STATUS( sub_8935( l_U1496._fU888[I] ), 91, ref uVar3[I] );
                    if (uVar3[I] == 7)
                    {
                        SET_COMBAT_DECISION_MAKER( sub_8935( l_U1496._fU888[I] ), l_U2459 );
                        TASK_COMBAT( sub_8935( l_U1496._fU888[I] ), sub_120659( sub_8935( l_U1496._fU888[I] ) ) );
                    }
                }
            }
        }
        l_U2765 = 3;
        break;
    }
    if (l_U1496._fU620)
    {
        sub_123627();
    }
    if (l_U1496._fU656)
    {
        sub_123927();
    }
    if (l_U1496._fU660)
    {
        sub_125748();
    }
    return;
}

void sub_120659(unknown uParam0)
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
            if (sub_480( I ))
            {
                GET_CHAR_COORDINATES( sub_616( I ), ref uVar8[I]._fU0, ref uVar8[I]._fU4, ref uVar8[I]._fU8 );
                GET_DISTANCE_BETWEEN_COORDS_3D( uVar5._fU0, uVar5._fU4, uVar5._fU8, uVar8[I]._fU0, uVar8[I]._fU4, uVar8[I]._fU8, ref fVar57 );
                if (fVar57 < fVar58)
                {
                    fVar58 = fVar57;
                    Result = sub_616( I );
                }
            }
        }
    }
    return Result;
}

void sub_123627()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    int iVar6;

    for ( I = 0; I < l_U1496._fU1016; I++ )
    {
        if (sub_8910( l_U1496._fU1016[I] ))
        {
            GET_SCRIPT_TASK_STATUS( sub_8935( l_U1496._fU1016[I] ), 106, ref iVar6 );
            if (iVar6 == 7)
            {
                if (NOT (IS_CHAR_INJURED( sub_8935( l_U1496._fU1016[I] ) )))
                {
                    if (HAS_CONTROL_OF_NETWORK_ID( l_U1496._fU1016[I] ))
                    {
                        uVar3._fU0 = sub_42429( 2436.81600000, 2399.22100000 );
                        uVar3._fU4 = sub_42429( 219.52260000, 175.14610000 );
                        uVar3._fU8 = 4.80900000;
                        TASK_GUARD_ANGLED_DEFENSIVE_AREA( sub_8935( l_U1496._fU1016[I] ), uVar3, 135.00000000, 20.00000000, 0, 2436.81600000, 219.52260000, 7.81290000, 2399.22100000, 175.14610000, 3.81290000, 59.00000000 );
                    }
                }
            }
        }
    }
    return;
}

void sub_123927()
{
    unknown[8] uVar2;
    int I;

    array(ref uVar2, 8);
    if (l_U1496._fU656)
    {
        if (NOT l_U2701)
        {
            if (sub_22368( l_U1496._fU1136[0] ))
            {
                if (sub_124032( sub_14784( l_U1496._fU1136[0], "Bc.net_SwatVanFourthWave", 0 ) ))
                {
                    l_U2701 = 1;
                }
                for ( I = 0; I < 4; I++ )
                {
                    if (sub_8910( l_U1496._fU1100[I] ))
                    {
                        if (sub_22368( l_U1496._fU1100[I] ))
                        {
                            if (sub_124216( sub_8935( l_U1496._fU1100[I] ) ))
                            {
                                l_U2701 = 1;
                            }
                        }
                    }
                }
            }
            if (sub_8910( l_U1496._fU1100[0] ))
            {
                if (sub_22368( l_U1496._fU1136[0] ))
                {
                    if (HAS_CONTROL_OF_NETWORK_ID( l_U1496._fU1100[0] ))
                    {
                        if (NOT (LOCATE_CAR_3D( sub_14784( l_U1496._fU1136[0], "Bc.net_SwatVanFourthWave", 0 ), 2457.97200000, 208.63870000, 5.37910000, 10.00000000, 10.00000000, 10.00000000, 0 )))
                        {
                            if (IS_CHAR_IN_CAR( sub_8935( l_U1496._fU1100[0] ), sub_14784( l_U1496._fU1136[0], "Bc.net_SwatVanFourthWave", 0 ) ))
                            {
                                GET_SCRIPT_TASK_STATUS( sub_8935( l_U1496._fU1100[0] ), 15, ref uVar2[0] );
                                if (uVar2[0] == 7)
                                {
                                    TASK_CAR_DRIVE_TO_COORD( sub_8935( l_U1496._fU1100[0] ), sub_14784( l_U1496._fU1136[0], "Bc.net_SwatVanFourthWave", 0 ), 2457.97200000, 208.63870000, 5.37910000, 30.00000000, 0, 0, 3, 10.00000000, 0 );
                                }
                            }
                        }
                        else
                        {
                            l_U2701 = 1;
                        }
                    }
                }
            }
        }
        else
        {
            for ( I = 0; I < 4; I++ )
            {
                if (sub_8910( l_U1496._fU1100[I] ))
                {
                    if (HAS_CONTROL_OF_NETWORK_ID( l_U1496._fU1100[I] ))
                    {
                        GET_SCRIPT_TASK_STATUS( sub_8935( l_U1496._fU1100[I] ), 91, ref uVar2[I] );
                        if (uVar2[I] == 7)
                        {
                            SET_COMBAT_DECISION_MAKER( sub_8935( l_U1496._fU1100[I] ), l_U2459 );
                            CLEAR_CHAR_TASKS( sub_8935( l_U1496._fU1100[I] ) );
                            TASK_COMBAT( sub_8935( l_U1496._fU1100[I] ), sub_120659( sub_8935( l_U1496._fU1100[I] ) ) );
                        }
                    }
                }
            }
        }
        if (NOT l_U2702)
        {
            if (sub_22368( l_U1496._fU1136[1] ))
            {
                if (sub_124032( sub_14784( l_U1496._fU1136[1], "Bc.net_SwatVanFourthWave", 1 ) ))
                {
                    l_U2701 = 1;
                }
            }
            for ( I = 4; I <= 7; I++ )
            {
                if (sub_8910( l_U1496._fU1100[I] ))
                {
                    if (sub_124216( sub_8935( l_U1496._fU1100[I] ) ))
                    {
                        l_U2701 = 1;
                    }
                }
            }
            if (sub_8910( l_U1496._fU1100[4] ))
            {
                if (sub_22368( l_U1496._fU1136[1] ))
                {
                    if (HAS_CONTROL_OF_NETWORK_ID( l_U1496._fU1100[4] ))
                    {
                        if (NOT (LOCATE_CAR_3D( sub_14784( l_U1496._fU1136[1], "Bc.net_SwatVanFourthWave", 1 ), 2466.56300000, 219.83460000, 5.38060000, 10.00000000, 10.00000000, 10.00000000, 0 )))
                        {
                            if (IS_CHAR_IN_CAR( sub_8935( l_U1496._fU1100[4] ), sub_14784( l_U1496._fU1136[1], "Bc.net_SwatVanFourthWave", 1 ) ))
                            {
                                GET_SCRIPT_TASK_STATUS( sub_8935( l_U1496._fU1100[4] ), 29, ref uVar2[4] );
                                if (uVar2[4] == 7)
                                {
                                    TASK_CAR_DRIVE_TO_COORD( sub_8935( l_U1496._fU1100[4] ), sub_14784( l_U1496._fU1136[1], "Bc.net_SwatVanFourthWave", 1 ), 2466.56300000, 219.83460000, 5.38060000, 30.00000000, 0, 0, 3, 10.00000000, 10 );
                                }
                            }
                        }
                        else
                        {
                            l_U2702 = 1;
                        }
                    }
                }
            }
        }
        else
        {
            for ( I = 4; I <= 7; I++ )
            {
                if (sub_8910( l_U1496._fU1100[I] ))
                {
                    if (HAS_CONTROL_OF_NETWORK_ID( l_U1496._fU1100[I] ))
                    {
                        GET_SCRIPT_TASK_STATUS( sub_8935( l_U1496._fU1100[I] ), 91, ref uVar2[I] );
                        if (uVar2[I] == 7)
                        {
                            SET_COMBAT_DECISION_MAKER( sub_8935( l_U1496._fU1100[I] ), l_U2459 );
                            TASK_COMBAT( sub_8935( l_U1496._fU1100[I] ), sub_120659( sub_8935( l_U1496._fU1100[I] ) ) );
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_124032(unknown uParam0)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (IS_VEH_DRIVEABLE( uParam0 ))
            {
                if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( uParam0, sub_616( I ) ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_124216(unknown uParam0)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (NOT (IS_CHAR_DEAD( uParam0 )))
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( uParam0, sub_616( I ), 0 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_125748()
{
    unknown uVar2;
    unknown[4] uVar3;
    int I;

    array(ref uVar3, 4);
    if (sub_8910( l_U1496._fU1152[0] ))
    {
        if (sub_22368( l_U1496._fU1148 ))
        {
            if (HAS_CONTROL_OF_NETWORK_ID( l_U1496._fU1152[0] ))
            {
                if (IS_CHAR_IN_CAR( sub_8935( l_U1496._fU1152[0] ), sub_14784( l_U1496._fU1148, "Bc.net_SwatVanForChopper", -1 ) ))
                {
                    if (LOCATE_CHAR_IN_CAR_CAR_3D( sub_869(), sub_14784( l_U1496._fU1148, "Bc.net_SwatVanForChopper", -1 ), 100.00000000, 100.00000000, 100.00000000, 0 ))
                    {
                        GET_SCRIPT_TASK_STATUS( sub_8935( l_U1496._fU1152[0] ), 49, ref uVar3[0] );
                        if (uVar3[0] == 7)
                        {
                            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_869(), ref l_U2764 );
                            TASK_CAR_MISSION( sub_8935( l_U1496._fU1152[0] ), sub_14784( l_U1496._fU1148, "Bc.net_SwatVanForChopper", -1 ), uVar2, 7, 18.00000000, 3, 1, 10 );
                        }
                        else if ((NOT (IS_CAR_DEAD( l_U2764 ))) AND (IS_VEH_DRIVEABLE( l_U2764 )))
                        {
                            if (NOT (IS_CHAR_IN_CAR( sub_869(), l_U2764 )))
                            {
                                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_869(), ref l_U2764 );
                                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_8935( l_U1496._fU1152[0] ) );
                            }
                        }
                        else
                        {
                            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_869(), ref l_U2764 );
                            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_8935( l_U1496._fU1152[0] ) );
                        }
                    }
                }
                else
                {
                    SET_CHAR_DECISION_MAKER( sub_8935( l_U1496._fU1152[0] ), l_U2457 );
                    SET_COMBAT_DECISION_MAKER( sub_8935( l_U1496._fU1152[0] ), l_U2459 );
                    TASK_COMBAT( sub_8935( l_U1496._fU1152[0] ), sub_120659( sub_8935( l_U1496._fU1152[0] ) ) );
                }
            }
        }
    }
    for ( I = 1; I <= 3; I++ )
    {
        if (sub_8910( l_U1496._fU1152[I] ))
        {
            if (sub_22368( l_U1496._fU1148 ))
            {
                if (HAS_CONTROL_OF_NETWORK_ID( l_U1496._fU1152[I] ))
                {
                    GET_SCRIPT_TASK_STATUS( sub_8935( l_U1496._fU1152[I] ), 91, ref uVar3[I] );
                    if (uVar3[I] == 7)
                    {
                        TASK_COMBAT( sub_8935( l_U1496._fU1152[I] ), sub_126554( sub_14784( l_U1496._fU1148, "Bc.net_SwatVanForChopper", -1 ) ) );
                    }
                }
            }
            else if (HAS_CONTROL_OF_NETWORK_ID( l_U1496._fU1152[I] ))
            {
                GET_SCRIPT_TASK_STATUS( sub_8935( l_U1496._fU1152[I] ), 91, ref uVar3[I] );
                if (uVar3[I] == 7)
                {
                    TASK_COMBAT( sub_8935( l_U1496._fU1152[I] ), sub_120659( sub_8935( l_U1496._fU1152[I] ) ) );
                }
            }
        }
    }
    return;
}

void sub_126554(unknown uParam0)
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
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_COORDINATES( uParam0, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        for ( I = 0; I < 16; I++ )
        {
            if (sub_480( I ))
            {
                GET_CHAR_COORDINATES( sub_616( I ), ref uVar8[I]._fU0, ref uVar8[I]._fU4, ref uVar8[I]._fU8 );
                GET_DISTANCE_BETWEEN_COORDS_3D( uVar5._fU0, uVar5._fU4, uVar5._fU8, uVar8[I]._fU0, uVar8[I]._fU4, uVar8[I]._fU8, ref fVar57 );
                if (fVar57 < fVar58)
                {
                    fVar58 = fVar57;
                    Result = sub_616( I );
                }
            }
        }
    }
    return Result;
}

void sub_127151()
{
    if (sub_8910( l_U1496._fU688 ))
    {
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            if (l_U2852 == 0)
            {
                l_U2852 = l_U2640 + 2000;
            }
            else if (l_U2640 > l_U2852)
            {
                sub_4881( 1, sub_8935( l_U1496._fU688 ), "PETROVIC", 0 );
                sub_82391( "MPKP2_ENC", ref l_U2330, 6, 1 );
                l_U2852 = l_U2640 + 30000;
            }
        }
    }
    return;
}

void sub_127348()
{
    if (sub_8910( l_U1496._fU688 ))
    {
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            if (l_U2853 == 0)
            {
                l_U2853 = l_U2640 + 2000;
            }
            else if (l_U2640 > l_U2853)
            {
                sub_4881( 1, sub_8935( l_U1496._fU688 ), "PETROVIC", 0 );
                sub_82391( "MPKP2_TRAN", ref l_U2330, 6, 1 );
                l_U2853 = l_U2640 + 30000;
            }
        }
    }
    return;
}

int sub_127529()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (I != GET_PLAYER_ID())
            {
                if (l_U1817[I]._fU52)
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}

void sub_127741()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (sub_480( GET_PLAYER_ID() ))
    {
        switch (l_U2774)
        {
            case 0:
            if (l_U2641 == 0)
            {
                l_U2641 = 1;
            }
            l_U2774 = 1;
            break;
            case 1:
            if (((IS_CHAR_IN_ANY_HELI( sub_869() )) || (IS_CHAR_IN_ANY_CAR( sub_869() ))) || (IS_CHAR_ON_ANY_BIKE( sub_869() )))
            {
                if (DOES_BLIP_EXIST( l_U2436 ))
                {
                    REMOVE_BLIP( l_U2436 );
                }
                CLEAR_PRINTS();
                PRINT_NOW( "COOP_SASLT_GC_3", 5000, 1 );
                if (NOT (DOES_BLIP_EXIST( l_U2438 )))
                {
                    if (IS_CHAR_IN_ANY_HELI( sub_869() ))
                    {
                        ADD_BLIP_FOR_COORD( 2413.36500000, 149.83420000, 5.56170000, ref l_U2438 );
                        CHANGE_BLIP_SPRITE( l_U2438, 4 );
                        CHANGE_BLIP_SCALE( l_U2438, 0.78000000 );
                        CHANGE_BLIP_PRIORITY( l_U2438, 1 );
                        CHANGE_BLIP_COLOUR( l_U2438, 5 );
                    }
                    else if (IS_CHAR_IN_ANY_CAR( sub_869() ))
                    {
                        ADD_BLIP_FOR_COORD( 2389.21100000, 166.22540000, 5.44070000, ref l_U2438 );
                        CHANGE_BLIP_SPRITE( l_U2438, 4 );
                        CHANGE_BLIP_SCALE( l_U2438, 0.78000000 );
                        CHANGE_BLIP_PRIORITY( l_U2438, 1 );
                        CHANGE_BLIP_COLOUR( l_U2438, 5 );
                    }
                }
                l_U1817[GET_PLAYER_ID()]._fU16 = 1;
                l_U2774 = 2;
            }
            else if (sub_128199())
            {
                CLEAR_PRINTS();
                PRINT_NOW( "COOP_SASLT_GC_5", 5000, 1 );
                l_U1817[GET_PLAYER_ID()]._fU16 = 2;
                l_U2774 = 2;
            }
            break;
            case 2:
            if (sub_8910( l_U1496._fU688 ))
            {
                if (sub_84804( sub_8935( l_U1496._fU688 ) ))
                {
                    CLEAR_PRINTS();
                    l_U1817[GET_PLAYER_ID()]._fU60 = 1;
                    l_U1817[GET_PLAYER_ID()]._fU64 = 0;
                    l_U2774 = 3;
                }
                else
                {
                    sub_128479();
                    sub_130630();
                }
            }
            sub_130970();
            sub_131664();
            break;
            case 3:
            if (sub_8910( l_U1496._fU688 ))
            {
                if (sub_84804( sub_8935( l_U1496._fU688 ) ))
                {
                    if (DOES_BLIP_EXIST( l_U2436 ))
                    {
                        REMOVE_BLIP( l_U2436 );
                        if (HAS_CONTROL_OF_NETWORK_ID( l_U1496._fU688 ))
                        {
                            SET_NETWORK_ID_CAN_MIGRATE( l_U1496._fU688, 1 );
                        }
                    }
                    CLEAR_PRINTS();
                    PRINT_NOW( "COOP_SASLT_GC_7", 5000, 1 );
                    if (NOT (DOES_BLIP_EXIST( l_U2455 )))
                    {
                        ADD_BLIP_FOR_COORD( 606.09540000, 1059.58500000, 2.87360000, ref l_U2455 );
                        CHANGE_BLIP_SPRITE( l_U2455, 4 );
                        CHANGE_BLIP_SCALE( l_U2455, 0.78000000 );
                        CHANGE_BLIP_PRIORITY( l_U2455, 1 );
                        CHANGE_BLIP_COLOUR( l_U2455, 5 );
                        SET_ROUTE( l_U2455, 1 );
                    }
                    if (NOT (IS_CHAR_IN_ANY_HELI( sub_869() )))
                    {
                        SET_FAKE_WANTED_LEVEL( 0 );
                        SET_WANTED_MULTIPLIER( 1.50000000 );
                        SET_MAX_WANTED_LEVEL( l_U2670 );
                        ALTER_WANTED_LEVEL( sub_6220(), l_U2670 );
                        APPLY_WANTED_LEVEL_CHANGE_NOW( sub_6220() );
                    }
                    l_U1817[GET_PLAYER_ID()]._fU116 = 1;
                    l_U2639 = 7;
                    l_U2774 = 4;
                }
            }
            break;
        }
    }
    return;
}

int sub_128199()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (((IS_CHAR_IN_ANY_HELI( sub_616( I ) )) || (IS_CHAR_IN_ANY_CAR( sub_616( I ) ))) || (IS_CHAR_ON_ANY_BIKE( sub_616( I ) )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_128479()
{
    if (sub_128488())
    {
        if (sub_128989( sub_869() ))
        {
            if (NOT l_U2769)
            {
                if (l_U2635 != 2.00000000)
                {
                    l_U2635 = 2.00000000;
                }
                else
                {
                    sub_81252();
                    l_U1817[GET_PLAYER_ID()]._fU80 = 1;
                }
            }
            else if (sub_129202())
            {
                sub_129429();
                if (LOCATE_CHAR_ON_FOOT_3D( sub_8935( l_U1496._fU688 ), 2394.67200000, 176.41460000, 5.86740000, 1.60000000, 1.60000000, 1.60000000, 0 ))
                {
                    TASK_PERFORM_SEQUENCE( sub_8935( l_U1496._fU688 ), l_U2403 );
                }
                l_U1817[GET_PLAYER_ID()]._fU60 = 1;
                l_U1817[GET_PLAYER_ID()]._fU64 = 0;
            }
            if (IS_MESSAGE_BEING_DISPLAYED())
            {
                CLEAR_PRINTS();
            }
        }
        else if (l_U2772 < l_U2640)
        {
            CLEAR_PRINTS();
            PRINT_NOW( "COOP_SASLT_CF_1", 15000, 1 );
            l_U2772 = l_U2640 + 30000;
        }
    }
    else if (l_U1817[GET_PLAYER_ID()]._fU60)
    {
        if (sub_8910( l_U1496._fU688 ))
        {
            if (DOES_GROUP_EXIST( sub_129521() ))
            {
                if (IS_GROUP_MEMBER( sub_8935( l_U1496._fU688 ), sub_129521() ))
                {
                    REMOVE_CHAR_FROM_GROUP( sub_8935( l_U1496._fU688 ) );
                }
            }
        }
        l_U1817[GET_PLAYER_ID()]._fU60 = 0;
        l_U1817[GET_PLAYER_ID()]._fU64 = 1;
        CLEAR_PRINTS();
        PRINT_NOW( "COOP_SASLT_GC_9", 15000, 1 );
    }
    if (sub_130058())
    {
        if (NOT l_U2769)
        {
            if (l_U2635 != 2.00000000)
            {
                l_U2635 = 2.00000000;
            }
            else
            {
                sub_81252();
                l_U1817[GET_PLAYER_ID()]._fU80 = 1;
            }
        }
    }
    if (l_U1817[GET_PLAYER_ID()]._fU60)
    {
        if (sub_8910( l_U1496._fU688 ))
        {
            if (NOT sub_130484())
            {
                l_U1817[GET_PLAYER_ID()]._fU60 = 0;
            }
        }
    }
    return;
}

int sub_128488()
{
    if (sub_480( GET_PLAYER_ID() ))
    {
        if (IS_CHAR_IN_ANY_HELI( sub_869() ))
        {
            if (LOCATE_CHAR_IN_CAR_3D( sub_869(), 2413.36500000, 149.83420000, 5.56170000, 10.00000000, 10.00000000, 10.00000000, 0 ))
            {
                if (sub_128584( sub_869() ))
                {
                    return 1;
                }
            }
        }
        else if (IS_CHAR_IN_ANY_CAR( sub_869() ))
        {
            if (LOCATE_CHAR_IN_CAR_3D( sub_869(), 2389.21100000, 166.22540000, 5.44070000, 4.00000000, 4.00000000, 2.50000000, 0 ))
            {
                if (sub_128584( sub_869() ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_128584(int iParam0)
{
    int I;
    unknown[16] uVar4;
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
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    float fVar56;
    float fVar57;
    int iVar58;

    array(ref uVar4, 16);
    fVar57 = 2.147484E8;
    if (sub_8910( l_U1496._fU688 ))
    {
        GET_CHAR_COORDINATES( sub_8935( l_U1496._fU688 ), ref uVar53._fU0, ref uVar53._fU4, ref uVar53._fU8 );
        for ( I = 0; I < 16; I++ )
        {
            if (sub_480( I ))
            {
                if (sub_84804( sub_616( I ) ))
                {
                    GET_CHAR_COORDINATES( sub_616( I ), ref uVar4[I]._fU0, ref uVar4[I]._fU4, ref uVar4[I]._fU8 );
                    GET_DISTANCE_BETWEEN_COORDS_3D( uVar53._fU0, uVar53._fU4, uVar53._fU8, uVar4[I]._fU0, uVar4[I]._fU4, uVar4[I]._fU8, ref fVar56 );
                    if (fVar56 < fVar57)
                    {
                        fVar57 = fVar56;
                        iVar58 = sub_616( I );
                    }
                }
            }
        }
        if (iVar58 == iParam0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_128989(unknown uParam0)
{
    unknown uVar3;
    int iVar4;
    unknown uVar5;

    if (IS_CHAR_IN_ANY_CAR( uParam0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar5 );
        GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar5, ref iVar4 );
        if (iVar4 == 1)
        {
            if (IS_CAR_PASSENGER_SEAT_FREE( uVar5, 0 ))
            {
                return 1;
            }
        }
        else if (iVar4 == 3)
        {
            if (((IS_CAR_PASSENGER_SEAT_FREE( uVar5, 0 )) || (IS_CAR_PASSENGER_SEAT_FREE( uVar5, 1 ))) || (IS_CAR_PASSENGER_SEAT_FREE( uVar5, 2 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_129202()
{
    if (NOT sub_129211())
    {
        if (NOT l_U1817[GET_PLAYER_ID()]._fU60)
        {
            if (sub_8910( l_U1496._fU688 ))
            {
                if (REQUEST_CONTROL_OF_NETWORK_ID( l_U1496._fU688 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_129211()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (sub_8910( l_U1496._fU688 ))
            {
                if (DOES_GROUP_EXIST( sub_29037( I ) ))
                {
                    if (IS_GROUP_MEMBER( sub_8935( l_U1496._fU688 ), sub_29037( I ) ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_129429()
{
    if (l_U2462 == nil)
    {
        COPY_GROUP_CHAR_DECISION_MAKER( 65537, ref l_U2462 );
    }
    if (NOT (HAS_CHAR_GOT_WEAPON( sub_8935( l_U1496._fU688 ), 7 )))
    {
        GIVE_WEAPON_TO_CHAR( sub_8935( l_U1496._fU688 ), 7, 30000, 1 );
    }
    SET_GROUP_SEPARATION_RANGE( sub_129521(), 50.00000000 );
    SET_GROUP_MEMBER( sub_129521(), sub_8935( l_U1496._fU688 ) );
    SET_GROUP_CHAR_DECISION_MAKER( sub_8935( l_U1496._fU688 ), l_U2462 );
    SET_PLAYER_GROUP_TO_FOLLOW_ALWAYS( sub_6220(), 1 );
    return;
}

void sub_129521()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_130058()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (I != GET_PLAYER_ID())
            {
                if (IS_CHAR_IN_ANY_HELI( sub_616( I ) ))
                {
                    if (LOCATE_CHAR_IN_CAR_3D( sub_616( I ), 2413.36500000, 149.83420000, 5.56170000, 10.00000000, 10.00000000, 10.00000000, 0 ))
                    {
                        if (sub_128584( sub_616( I ) ))
                        {
                            if (sub_128989( sub_616( I ) ))
                            {
                                return 1;
                            }
                        }
                    }
                }
                else if (IS_CHAR_IN_ANY_CAR( sub_616( I ) ))
                {
                    if (LOCATE_CHAR_IN_CAR_3D( sub_616( I ), 2389.21100000, 166.22540000, 5.44070000, 4.00000000, 4.00000000, 2.50000000, 0 ))
                    {
                        if (sub_128584( sub_869() ))
                        {
                            if (sub_128989( sub_616( I ) ))
                            {
                                return 1;
                            }
                        }
                    }
                }
                if (l_U1817[I]._fU80)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_130484()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (sub_8910( l_U1496._fU688 ))
            {
                if (IS_GROUP_MEMBER( sub_8935( l_U1496._fU688 ), sub_29037( I ) ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_130630()
{
    if (sub_130639())
    {
        if (NOT l_U1817[GET_PLAYER_ID()]._fU64)
        {
            l_U1817[GET_PLAYER_ID()]._fU64 = 1;
        }
        if (sub_84804( sub_869() ))
        {
            if (l_U2640 > l_U2770)
            {
                CLEAR_PRINTS();
                PRINT_NOW( "COOP_SASLT_GC_9", 15000, 1 );
                l_U1817[GET_PLAYER_ID()]._fU64 = 1;
                l_U2770 = l_U2640 + 30000;
            }
        }
        else if (l_U2640 > l_U2770)
        {
            CLEAR_PRINTS();
            PRINT_NOW( "COOP_SASLT_GC10", 15000, 1 );
            l_U1817[GET_PLAYER_ID()]._fU64 = 1;
            l_U2770 = l_U2640 + 30000;
        }
    }
    return;
}

int sub_130639()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (l_U1817[I]._fU64)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_130970()
{
    if (NOT sub_130979())
    {
        if (sub_84804( sub_869() ))
        {
            if (DOES_BLIP_EXIST( l_U2436 ))
            {
                REMOVE_BLIP( l_U2436 );
            }
            if (NOT (DOES_BLIP_EXIST( l_U2438 )))
            {
                if (IS_CHAR_IN_ANY_HELI( sub_869() ))
                {
                    ADD_BLIP_FOR_COORD( 2413.36500000, 149.83420000, 5.56170000, ref l_U2438 );
                    CHANGE_BLIP_SPRITE( l_U2438, 4 );
                    CHANGE_BLIP_SCALE( l_U2438, 0.78000000 );
                    CHANGE_BLIP_PRIORITY( l_U2438, 1 );
                    CHANGE_BLIP_COLOUR( l_U2438, 5 );
                }
                else if (IS_CHAR_IN_ANY_CAR( sub_869() ))
                {
                    ADD_BLIP_FOR_COORD( 2389.21100000, 166.22540000, 5.44070000, ref l_U2438 );
                    CHANGE_BLIP_SPRITE( l_U2438, 4 );
                    CHANGE_BLIP_SCALE( l_U2438, 0.78000000 );
                    CHANGE_BLIP_PRIORITY( l_U2438, 1 );
                    CHANGE_BLIP_COLOUR( l_U2438, 5 );
                }
            }
        }
        else if (DOES_BLIP_EXIST( l_U2438 ))
        {
            REMOVE_BLIP( l_U2438 );
        }
        if (NOT (DOES_BLIP_EXIST( l_U2436 )))
        {
            if (sub_8910( l_U1496._fU688 ))
            {
                ADD_BLIP_FOR_CHAR( sub_8935( l_U1496._fU688 ), ref l_U2436 );
                CHANGE_BLIP_SPRITE( l_U2436, 4 );
                CHANGE_BLIP_SCALE( l_U2436, 0.78000000 );
                CHANGE_BLIP_PRIORITY( l_U2436, 1 );
                CHANGE_BLIP_COLOUR( l_U2436, 3 );
            }
        }
    }
    else if (DOES_BLIP_EXIST( l_U2438 ))
    {
        REMOVE_BLIP( l_U2438 );
    }
    if (sub_8910( l_U1496._fU688 ))
    {
        if (NOT (sub_84804( sub_8935( l_U1496._fU688 ) )))
        {
            if (NOT (DOES_BLIP_EXIST( l_U2436 )))
            {
                ADD_BLIP_FOR_CHAR( sub_8935( l_U1496._fU688 ), ref l_U2436 );
                CHANGE_BLIP_SPRITE( l_U2436, 4 );
                CHANGE_BLIP_SCALE( l_U2436, 0.78000000 );
                CHANGE_BLIP_PRIORITY( l_U2436, 1 );
                CHANGE_BLIP_COLOUR( l_U2436, 3 );
            }
        }
    }
    return;
}

int sub_130979()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (l_U1817[I]._fU60)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_131664()
{
    if (sub_8910( l_U1496._fU688 ))
    {
        if (NOT (sub_84804( sub_8935( l_U1496._fU688 ) )))
        {
            if (IS_CHAR_IN_ANY_HELI( sub_869() ))
            {
                if (NOT (LOCATE_CHAR_IN_CAR_3D( sub_869(), 2413.36500000, 149.83420000, 5.56170000, 10.00000000, 10.00000000, 10.00000000, 0 )))
                {
                    LOCATE_CHAR_IN_CAR_3D( sub_869(), 2413.36500000, 149.83420000, 17.00000000, 10.00000000, 10.00000000, 10.00000000, 1 );
                }
            }
            else if (IS_CHAR_IN_ANY_CAR( sub_869() ))
            {
                if (NOT (LOCATE_CHAR_IN_CAR_3D( sub_869(), 2389.21100000, 166.22540000, 5.44070000, 4.00000000, 4.00000000, 2.50000000, 0 )))
                {
                    LOCATE_CHAR_IN_CAR_3D( sub_869(), 2389.21100000, 166.22540000, 9.00000000, 4.00000000, 4.00000000, 2.50000000, 1 );
                }
            }
        }
    }
    return;
}

void sub_132344()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (l_U2775 == 1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_869() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_869(), ref uVar2 );
            if (sub_8910( l_U1496._fU688 ))
            {
                if (IS_CHAR_IN_CAR( sub_8935( l_U1496._fU688 ), uVar2 ))
                {
                    PRINT_NOW( "COOP_SASLT_GC_7", 5000, 1 );
                    l_U2775 = 0;
                }
            }
        }
        else
        {
            PRINT_NOW( "COOP_SASLT_GC_7", 5000, 1 );
            l_U2775 = 0;
        }
    }
    if (sub_8910( l_U1496._fU688 ))
    {
        if (l_U1496._fU664)
        {
            if (NOT sub_29325())
            {
                if ((NOT (IS_CHAR_DEAD( sub_869() ))) AND (sub_8910( l_U1496._fU688 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_869(), sub_8935( l_U1496._fU688 ), 8.00000000, 8.00000000, 8.00000000, 0 ))
                    {
                        if (sub_869() == (sub_120659( sub_8935( l_U1496._fU688 ) )))
                        {
                            if (DOES_GROUP_EXIST( sub_129521() ))
                            {
                                if (REQUEST_CONTROL_OF_NETWORK_ID( l_U1496._fU688 ))
                                {
                                    if (l_U2462 == nil)
                                    {
                                        COPY_GROUP_CHAR_DECISION_MAKER( 65537, ref l_U2462 );
                                    }
                                    SET_GROUP_MEMBER( sub_129521(), sub_8935( l_U1496._fU688 ) );
                                    SET_GROUP_CHAR_DECISION_MAKER( sub_8935( l_U1496._fU688 ), l_U2462 );
                                    SET_PLAYER_GROUP_TO_FOLLOW_ALWAYS( sub_6220(), 1 );
                                    l_U2775 = 1;
                                }
                            }
                        }
                    }
                }
                if (NOT (DOES_BLIP_EXIST( l_U2455 )))
                {
                    ADD_BLIP_FOR_COORD( 606.09540000, 1059.58500000, 2.87360000, ref l_U2455 );
                    CHANGE_BLIP_SPRITE( l_U2455, 4 );
                    CHANGE_BLIP_SCALE( l_U2455, 0.78000000 );
                    CHANGE_BLIP_PRIORITY( l_U2455, 1 );
                    CHANGE_BLIP_COLOUR( l_U2455, 5 );
                    SET_ROUTE( l_U2455, 1 );
                }
                if (DOES_BLIP_EXIST( l_U2436 ))
                {
                    REMOVE_BLIP( l_U2436 );
                }
            }
            else if (NOT sub_132956())
            {
                if (l_U2640 > l_U2668)
                {
                    CLEAR_PRINTS();
                    PRINT_NOW( "COOP_SASLT_SZ_1", 5000, 1 );
                    l_U2668 = l_U2640 + 60000;
                    l_U2669 = l_U2640;
                }
                if (DOES_BLIP_EXIST( l_U2436 ))
                {
                    REMOVE_BLIP( l_U2436 );
                }
                if (NOT (DOES_BLIP_EXIST( l_U2455 )))
                {
                    ADD_BLIP_FOR_COORD( 606.09540000, 1059.58500000, 2.87360000, ref l_U2455 );
                    CHANGE_BLIP_SPRITE( l_U2455, 4 );
                    CHANGE_BLIP_SCALE( l_U2455, 0.78000000 );
                    CHANGE_BLIP_PRIORITY( l_U2455, 1 );
                    CHANGE_BLIP_COLOUR( l_U2455, 5 );
                    SET_ROUTE( l_U2455, 1 );
                }
            }
        }
        if (l_U1496._fU668)
        {
            if (DOES_GROUP_EXIST( sub_129521() ))
            {
                if (sub_8910( l_U1496._fU688 ))
                {
                    if (IS_GROUP_MEMBER( sub_8935( l_U1496._fU688 ), sub_129521() ))
                    {
                        REMOVE_CHAR_FROM_GROUP( sub_8935( l_U1496._fU688 ) );
                    }
                }
            }
        }
        if (l_U1496._fU672)
        {
            if (NOT (DOES_BLIP_EXIST( l_U2436 )))
            {
                if (sub_8910( l_U1496._fU688 ))
                {
                    ADD_BLIP_FOR_CHAR( sub_8935( l_U1496._fU688 ), ref l_U2436 );
                    CHANGE_BLIP_SPRITE( l_U2436, 4 );
                    CHANGE_BLIP_SCALE( l_U2436, 0.78000000 );
                    CHANGE_BLIP_PRIORITY( l_U2436, 1 );
                    CHANGE_BLIP_COLOUR( l_U2436, 3 );
                }
            }
            if (DOES_BLIP_EXIST( l_U2455 ))
            {
                REMOVE_BLIP( l_U2455 );
            }
            if (l_U2640 > l_U2669)
            {
                CLEAR_PRINTS();
                PRINT_NOW( "COOP_SASLT_SZ_4", 5000, 1 );
                l_U2669 = l_U2640 + 45000;
                l_U2668 = l_U2640;
            }
        }
    }
    return;
}

int sub_132956()
{
    if (sub_480( GET_PLAYER_ID() ))
    {
        if (sub_8910( l_U1496._fU688 ))
        {
            if (DOES_GROUP_EXIST( sub_129521() ))
            {
                if (IS_GROUP_MEMBER( sub_8935( l_U1496._fU688 ), sub_129521() ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_133637()
{
    int iVar2;

    if (sub_480( GET_PLAYER_ID() ))
    {
        if (NOT (IS_CHAR_DEAD( sub_869() )))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_869(), 606.09540000, 1059.58500000, 2.87360000, 100.00000000, 100.00000000, 100.00000000, 0 ))
            {
                STORE_WANTED_LEVEL( sub_6220(), ref iVar2 );
                if (NOT l_U2724)
                {
                    CLEAR_WANTED_LEVEL( sub_6220() );
                    SET_WANTED_MULTIPLIER( 2.00000000 );
                    l_U2724 = 1;
                }
            }
            else if (NOT l_U2724)
            {
                STORE_WANTED_LEVEL( sub_6220(), ref iVar2 );
                if (iVar2 < l_U2670)
                {
                    if (NOT (IS_CHAR_IN_ANY_HELI( sub_869() )))
                    {
                        ALTER_WANTED_LEVEL( sub_6220(), l_U2670 );
                        APPLY_WANTED_LEVEL_CHANGE_NOW( sub_6220() );
                    }
                }
            }
        }
    }
    return;
}

void sub_133939()
{
    if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_869(), 606.09540000, 1059.58500000, 2.87360000, 8.00000000, 8.00000000, 8.00000000, 0 ))) AND (NOT l_U1496._fU652))
    {
        LOCATE_CHAR_ANY_MEANS_3D( sub_869(), 606.09540000, 1059.58500000, 9.57360000, 8.00000000, 8.00000000, 8.00000000, 1 );
    }
    return;
}

int sub_134184(unknown uParam0)
{
    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            if (DOES_GROUP_EXIST( sub_129521() ))
            {
                if (IS_GROUP_MEMBER( uParam0, sub_129521() ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_134507()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    switch (l_U2779)
    {
        case 0:
        if (IS_SCREEN_FADED_OUT())
        {
            if (sub_5773())
            {
                if (sub_8910( l_U1496._fU688 ))
                {
                    if (REQUEST_CONTROL_OF_NETWORK_ID( l_U1496._fU688 ))
                    {
                        SET_CHAR_VISIBLE( sub_8935( l_U1496._fU688 ), 0 );
                        SET_CHAR_INVINCIBLE( sub_8935( l_U1496._fU688 ), 1 );
                    }
                }
                sub_6195();
            }
            sub_567( GET_PLAYER_ID(), 0 );
            l_U1817[GET_PLAYER_ID()]._fU124 = 1;
            l_U2779 = 1;
        }
        else if (NOT IS_SCREEN_FADING_OUT())
        {
            sub_44214( 500 );
        }
        break;
        case 1:
        if (sub_134726())
        {
            if (l_U2736)
            {
                if (IS_SCREEN_FADED_OUT())
                {
                    sub_134852();
                    l_U2696 = 1;
                    if (NOT l_U1817[GET_PLAYER_ID()]._fU48)
                    {
                        l_U1817[GET_PLAYER_ID()]._fU48 = 1;
                    }
                    l_U2779 = 2;
                }
            }
            else if ((sub_24197() > 1) || (l_U2697))
            {
                sub_135045();
            }
        }
        break;
    }
    return;
}

int sub_134726()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (NOT l_U1817[I]._fU104)
            {
                if (NOT l_U1817[I]._fU124)
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}

void sub_134852()
{
    if (DOES_CAM_EXIST( l_U2778 ))
    {
        DESTROY_CAM( l_U2778 );
    }
    if (DOES_CHAR_EXIST( l_U2379 ))
    {
        DELETE_CHAR( ref l_U2379 );
    }
    if (DOES_CHAR_EXIST( l_U2378 ))
    {
        DELETE_CHAR( ref l_U2378 );
    }
    SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 0 );
    return;
}

void sub_135045()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    int iVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    DISABLE_PAUSE_MENU( 1 );
    if (IS_PAUSE_MENU_ACTIVE())
    {
        DEACTIVATE_FRONTEND();
        UNPAUSE_GAME();
    }
    switch (l_U2777)
    {
        case 0:
        BEGIN_CAM_COMMANDS( ref l_U2638 );
        UNPAUSE_GAME();
        DISABLE_PAUSE_MENU( 1 );
        DISPLAY_HUD( 0 );
        DISPLAY_RADAR( 0 );
        if (IS_CHAR_IN_ANY_CAR( sub_869() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_869(), ref uVar7 );
            GET_CAR_COORDINATES( uVar7, ref uVar8, ref uVar9, ref uVar10 );
            WARP_CHAR_FROM_CAR_TO_COORD( sub_869(), uVar8, uVar9, uVar10 + 10.00000000 );
            FREEZE_CHAR_POSITION( sub_869(), 1 );
            sub_567( GET_PLAYER_ID(), 0 );
        }
        l_U2777 = 1;
        break;
        case 1:
        l_U1817[GET_PLAYER_ID()]._fU120 = 1;
        if (sub_31841())
        {
            if (l_U2638 > 0)
            {
                if (sub_31960())
                {
                    sub_135352();
                    l_U2777 = 2;
                }
            }
        }
        break;
        case 2:
        if (l_U2778 == nil)
        {
            if (NOT (IS_CHAR_DEAD( l_U2379 )))
            {
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                CREATE_CAM( 14, ref l_U2778 );
                ATTACH_CAM_TO_PED( l_U2778, l_U2379 );
                SET_CAM_FOV( l_U2778, 30.00000000 );
                SET_CAM_ATTACH_OFFSET( l_U2778, 2.00000000, 4.50000000, 1.00000000 );
                SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U2778, 1 );
                POINT_CAM_AT_PED( l_U2778, l_U2379 );
                SET_CAM_ACTIVE( l_U2778, 1 );
                SET_CAM_PROPAGATE( l_U2778, 1 );
                l_U2777 = 3;
            }
        }
        break;
        case 3:
        if ((NOT (IS_CHAR_INJURED( l_U2379 ))) AND (NOT (IS_CHAR_INJURED( l_U2378 ))))
        {
            GET_SCRIPT_TASK_STATUS( l_U2379, 27, ref iVar5 );
            GET_SCRIPT_TASK_STATUS( l_U2378, 27, ref iVar6 );
            if ((iVar5 == 7) AND (iVar6 == 7))
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U2379, 627.28320000, 1022.69300000, 1.56930000, 2, 20000, 0 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U2378, 628.07310000, 1023.35700000, 1.85350000, 2, 20000, 0 );
                l_U2777 = 4;
            }
        }
        break;
        case 4:
        if (IS_SCREEN_FADED_IN())
        {
            if ((NOT (IS_CHAR_INJURED( l_U2379 ))) AND (NOT (IS_CHAR_INJURED( l_U2378 ))))
            {
                sub_4881( 1, l_U2379, "PETROVIC", 0 );
                sub_82391( "MPKP2_DEST", ref l_U2330, 6, 1 );
                l_U2777 = 5;
            }
        }
        else if (NOT IS_SCREEN_FADING_IN())
        {
            sub_50254( 500 );
        }
        break;
        case 5:
        if (NOT (sub_83417( l_U2330 )))
        {
            if (IS_SCREEN_FADED_IN())
            {
                if (NOT IS_SCREEN_FADING_OUT())
                {
                    sub_44214( 500 );
                }
            }
            l_U2736 = 1;
            l_U2777 = 6;
        }
        break;
    }
    return;
}

void sub_135352()
{
    if (l_U2379 == nil)
    {
        FREEZE_CHAR_POSITION( sub_869(), 1 );
        SET_CHAR_COLLISION( sub_869(), 0 );
        sub_567( GET_PLAYER_ID(), 0 );
        SET_CHAR_VISIBLE( sub_869(), 0 );
        CREATE_CHAR( 26, -1947682830, 607.18190000, 1053.55400000, 1.53700000, ref l_U2379, 0 );
        SET_CHAR_HEADING( l_U2379, 211.97030000 );
        sub_4881( 1, l_U2379, "PETROVIC", 0 );
        CREATE_CHAR( 26, 1543404628, 607.95840000, 1054.26400000, 1.80460000, ref l_U2378, 0 );
        SET_CHAR_HEADING( l_U2378, 211.97030000 );
        sub_6289( ref l_U2378, l_U1496._fU88[GET_PLAYER_ID()] );
    }
    return;
}

int sub_136299()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1817[I]._fU44 == 2)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_136400()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    DISABLE_PAUSE_MENU( 1 );
    if (IS_PAUSE_MENU_ACTIVE())
    {
        UNPAUSE_GAME();
        DEACTIVATE_FRONTEND();
    }
    if (NOT l_U1817[GET_PLAYER_ID()]._fU88)
    {
        l_U1817[GET_PLAYER_ID()]._fU88 = 1;
    }
    if ((l_U1817[GET_PLAYER_ID()]._fU44 == 0) || (l_U1817[GET_PLAYER_ID()]._fU44 == 5))
    {
        l_U1817[GET_PLAYER_ID()]._fU44 = 3;
    }
    if ((l_U1817[GET_PLAYER_ID()]._fU44 == 0) || (l_U1817[GET_PLAYER_ID()]._fU44 == 3))
    {
        switch (l_U2780)
        {
            case 0:
            l_U1817[GET_PLAYER_ID()]._fU96 = 1;
            SET_CHAR_INVINCIBLE( sub_869(), 1 );
            PRINT_NOW( "COOP_SASLT_MF", 5000, 1 );
            l_U2780 = 1;
            break;
            case 1:
            if (IS_SCREEN_FADED_OUT())
            {
                sub_41638();
                sub_41830();
                sub_43138();
                sub_50254( 500 );
                l_U1817[GET_PLAYER_ID()]._fU4 = -5;
                l_U2854 = l_U2640 + 4000;
                if (NOT sub_45776())
                {
                    l_U1817[GET_PLAYER_ID()]._fU4 = -5;
                }
                if (NETWORK_IS_SESSION_STARTED())
                {
                    l_U1817[GET_PLAYER_ID()]._fU0 = 1;
                    l_U2780 = 2;
                }
                else
                {
                    l_U1817[GET_PLAYER_ID()]._fU0 = 1;
                    l_U2780 = 3;
                }
            }
            else if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                if (NOT IS_SCREEN_FADING_OUT())
                {
                    sub_44214( 500 );
                }
            }
            break;
            case 2:
            sub_44292( 0 );
            if (l_U2640 > l_U2674)
            {
                if (IS_SCREEN_FADED_IN())
                {
                    if (sub_71965( 2147483647, 0 ))
                    {
                        l_U1817[GET_PLAYER_ID()]._fU108 = 1;
                    }
                    if (sub_89040())
                    {
                        sub_567( GET_PLAYER_ID(), 0 );
                        l_U2639 = 13;
                        l_U2780 = 4;
                    }
                }
                else if (NOT IS_SCREEN_FADING_IN())
                {
                    sub_50254( 500 );
                }
            }
            break;
            case 3:
            if (l_U2640 > l_U2674)
            {
                if (IS_SCREEN_FADED_IN())
                {
                    l_U1817[GET_PLAYER_ID()]._fU112 = 1;
                    sub_44292( 0 );
                    sub_567( GET_PLAYER_ID(), 0 );
                }
                if (sub_89040())
                {
                    l_U2639 = 13;
                    l_U2780++;
                }
                else if (NOT IS_SCREEN_FADING_IN())
                {
                    sub_50254( 500 );
                }
            }
            break;
        }
    }
    return;
}

int sub_137215()
{
    if (((sub_137224()) || (sub_137302())) || (sub_136299()))
    {
        return 1;
    }
    return 0;
}

int sub_137224()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (NOT l_U1817[I]._fU104)
            {
                return 0;
            }
        }
    }
    return 1;
}

int sub_137302()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (l_U1817[I]._fU44 == 3)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_137422()
{
    if (sub_137431())
    {
        if (NETWORK_IS_SESSION_STARTED())
        {
            if (sub_71965( l_U1496._fU528, 1 ))
            {
                l_U1817[GET_PLAYER_ID()]._fU108 = 1;
            }
            if (sub_137570())
            {
                l_U2639 = 11;
            }
        }
        else if (NOT l_U1817[GET_PLAYER_ID()]._fU112)
        {
            l_U1817[GET_PLAYER_ID()]._fU112 = 1;
            sub_567( GET_PLAYER_ID(), 0 );
        }
        else if (sub_89040())
        {
            l_U2639 = 11;
        };;;
    }
    else if (l_U1817[GET_PLAYER_ID()]._fU68)
    {
        if ((sub_137777()) || (sub_136299()))
        {
            if (l_U1817[GET_PLAYER_ID()]._fU44 == 0)
            {
                l_U1817[GET_PLAYER_ID()]._fU44 = 4;
            }
        }
    }
    return;
}

int sub_137431()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U1817[I]._fU44 == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int sub_137570()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (NOT l_U1817[I]._fU108)
            {
                return 0;
            }
        }
    }
    return 1;
}

int sub_137777()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_480( I ))
        {
            if (l_U1817[I]._fU44 == 4)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_137968(unknown uParam0)
{
    int I;
    unknown[16] uVar4;

    array(ref uVar4, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar4[I] = l_U1817[I]._fU4;
    }
    return sub_44400( 8, ref uVar4, ref l_U1496._fU556, l_U1496._fU552, uParam0, 0, 1, l_U1496._fU528 );
}

void sub_138455()
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
        sub_57182();
    }
    return;
}

void sub_138971()
{
    if (l_U2639 < 10)
    {
        if (l_U2636 != l_U1496._fU0[GET_PLAYER_ID()])
        {
            sub_139041( l_U1496._fU0[GET_PLAYER_ID()] - l_U2636 );
            l_U2636 = l_U1496._fU0[GET_PLAYER_ID()];
        }
        sub_139502( ref l_U2419, 0, 0, -1 );
        sub_142382();
        sub_143937( l_U1496._fU0[GET_PLAYER_ID()] );
        if (sub_144012())
        {
            sub_144269( ref l_U1496._fU0, ref l_U1496._fU0, 2, l_U2675, 1 );
        }
    }
    return;
}

void sub_139041(int iParam0)
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
        sub_139150( ref cVar7, uVar3, uVar4, uVar5, -1, " ", uVar3, uVar4, uVar5 );
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
        sub_139150( ref cVar7, uVar3, uVar4, uVar5, -1, " ", uVar3, uVar4, uVar5 );
    }
    return;
}

void sub_139150(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    unknown uVar11;

    uVar11 = sub_75347( uParam4 );
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

void sub_139502(unknown uParam0, int iParam1, boolean bParam2, int iParam3)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U579[I] == -1)
            {
                sub_139565( I, -1, "JOINED" );
                l_U579[I] = 1;
            }
            if (l_U579[I] == 0)
            {
                l_U579[I] = 1;
            }
            if (IS_CHAR_FATALLY_INJURED( sub_616( I ) ))
            {
                sub_139860( ref (uParam0^)[I] );
                if (l_U579[I] == 2)
                {
                    if (I == (FIND_NETWORK_KILLER_OF_PLAYER( I )))
                    {
                        sub_139565( I, -1, "DIED" );
                    }
                    else if (IS_NETWORK_PLAYER_ACTIVE( FIND_NETWORK_KILLER_OF_PLAYER( I ) ))
                    {
                        sub_140003( FIND_NETWORK_KILLER_OF_PLAYER( I ), I );
                    }
                    l_U579[I] = 3;
                }
            }
            else if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
            {
                if (IS_PLAYER_SCRIPT_CONTROL_ON( sub_578( I ) ))
                {
                    if (sub_140564( I ))
                    {
                        sub_139860( ref (uParam0^)[I] );
                    }
                    else if (((((iParam1 == 0) || ((iParam1 != 4) AND (((GET_PLAYER_TEAM( sub_6220() )) == (GET_PLAYER_TEAM( sub_578( I ) ))) AND ((GET_PLAYER_TEAM( sub_6220() )) > -1)))) || (((sub_6739() == 10) AND ((GET_PLAYER_TEAM( sub_6220() )) == 0)) AND (NOT bParam2))) || ((((sub_6739() == 10) AND ((GET_PLAYER_TEAM( sub_6220() )) == 0)) AND (bParam2)) AND (I == iParam3))) || (((iParam1 == 6) AND (bParam2)) AND (iParam3 == GET_PLAYER_ID())))
                    {
                        if (NOT (DOES_BLIP_EXIST( (uParam0^)[I] )))
                        {
                            (uParam0^)[I] = sub_140929( I );
                        }
                    }
                    else if ((iParam1 == 1) || ((iParam1 == 7) AND (iParam3 == GET_PLAYER_ID())))
                    {
                        if (sub_37904( sub_869(), sub_616( I ), l_U1371 ))
                        {
                            if (NOT (DOES_BLIP_EXIST( (uParam0^)[I] )))
                            {
                                (uParam0^)[I] = sub_140929( I );
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
                                sub_141335( ref l_U1372[I], 0, 255 );
                            }
                        }
                    }
                    else if (iParam1 == 2)
                    {
                        if (NOT (sub_37904( sub_869(), sub_616( I ), l_U1371 )))
                        {
                            if (NOT (DOES_BLIP_EXIST( (uParam0^)[I] )))
                            {
                                (uParam0^)[I] = sub_140929( I );
                                l_U1372[I] = 0;
                            }
                            if (DOES_BLIP_EXIST( (uParam0^)[I] ))
                            {
                                CHANGE_BLIP_ALPHA( (uParam0^)[I], l_U1372[I] );
                                l_U1372[I] += 25;
                                sub_141335( ref l_U1372[I], 0, 255 );
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
                                sub_141335( ref l_U1372[I], 0, 255 );
                            }
                        }
                    }
                    else if (iParam1 == 3)
                    {
                        if (sub_6739() == 16)
                        {
                            if (GET_HOST_ID() == I)
                            {
                                if (NOT (DOES_BLIP_EXIST( (uParam0^)[I] )))
                                {
                                    (uParam0^)[I] = sub_140929( I );
                                }
                            }
                            else
                            {
                                sub_139860( ref (uParam0^)[I] );
                            }
                        }
                        else if ((sub_141775( I )) == 1)
                        {
                            if (NOT (DOES_BLIP_EXIST( (uParam0^)[I] )))
                            {
                                (uParam0^)[I] = sub_140929( I );
                            }
                        }
                        else
                        {
                            sub_139860( ref (uParam0^)[I] );
                        }
                    }
                    else if (iParam1 == 4)
                    {
                        sub_139860( ref (uParam0^)[I] );
                    };;;;;;
                }
                else
                {
                    sub_139860( ref (uParam0^)[I] );
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
            sub_139860( ref (uParam0^)[I] );
            sub_139565( I, -1, "LEFTGAME" );
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
                    sub_139565( l_U1389, -1, "IS_PARTY_LEADER" );
                }
            }
        }
    }
    return;
}

void sub_139565(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar6 = sub_75347( uParam1 );
    StrCopy( ref l_U104[uVar6]._fU76._fU0, GET_PLAYER_NAME( sub_578( uParam0 ) ), 64 );
    sub_66903( sub_578( uParam0 ), ref l_U104[uVar6]._fU76._fU68, ref l_U104[uVar6]._fU76._fU72, ref l_U104[uVar6]._fU76._fU76 );
    StrCopy( ref l_U104[uVar6]._fU156._fU0, uParam2, 64 );
    l_U104[uVar6]._fU156._fU64 = 1;
    GET_HUD_COLOUR( 1, ref l_U104[uVar6]._fU156._fU68, ref l_U104[uVar6]._fU156._fU72, ref l_U104[uVar6]._fU156._fU76, ref uVar5 );
    sub_75795( uVar6 );
    return;
}

void sub_139860(unknown uParam0)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        SET_ROUTE( (uParam0^), 0 );
        REMOVE_BLIP( (uParam0^) );
    }
    (uParam0^) = nil;
    return;
}

void sub_140003(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    char[16] cVar5;

    GET_DESTROYER_OF_NETWORK_ID( sub_18887( sub_616( uParam1 ) ), ref uVar4 );
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
    ConcatString(ref cVar5, sub_10097( 0, 10 ), 16);
    REGISTER_KILL_IN_MULTIPLAYER_GAME( uParam0, uParam1, uVar4 );
    sub_88483( uParam0, ref cVar5, uParam1 );
    return;
}

int sub_140564(unknown uParam0)
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_869() ))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_616( uParam0 ) ))
            {
                if ((GET_PLAYER_TEAM( sub_578( uParam0 ) )) == (GET_PLAYER_TEAM( sub_578( GET_PLAYER_ID() ) )))
                {
                    if ((sub_140672( sub_869() )) == (sub_140672( sub_616( uParam0 ) )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_140672(unknown uParam0)
{
    unknown Result;

    if (IS_CHAR_IN_ANY_CAR( uParam0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref Result );
        return Result;
    }
    return nil;
}

void sub_140929(int iParam0)
{
    unknown Result;
    int iVar4;
    int iVar5;
    int iVar6;

    ADD_BLIP_FOR_CHAR( sub_616( iParam0 ), ref Result );
    sub_66903( sub_578( iParam0 ), ref iVar4, ref iVar5, ref iVar6 );
    CHANGE_BLIP_COLOUR( Result, (((iVar4 * 16777216) + (iVar5 * 65536)) + (iVar6 * 256)) + 255 );
    CHANGE_BLIP_PRIORITY( Result, 3 );
    CHANGE_BLIP_SCALE( Result, 0.90000000 );
    CHANGE_BLIP_NAME_FROM_ASCII( Result, GET_PLAYER_NAME( sub_578( iParam0 ) ) );
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

void sub_141335(unknown uParam0, int iParam1, int iParam2)
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

void sub_141775(unknown uParam0)
{
    if (((sub_17477()) || (sub_17432())) AND ((GET_PLAYER_TEAM( sub_578( uParam0 ) )) > -1))
    {
        return sub_141831( GET_PLAYER_TEAM( sub_578( uParam0 ) ) );
    }
    return sub_7151( uParam0 );
}

int sub_141831(int iParam0)
{
    int I;
    int Result;

    if (sub_59890( iParam0 ))
    {
        for ( I = 0; I < 8; I++ )
        {
            if ((sub_45437( l_U1030[I] )) > 0)
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
            if ((sub_45437( l_U1030[I] )) > 0)
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

void sub_142382()
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

    if (sub_3183())
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
                iVar3 = sub_142712( (l_U104[iVar2]._fU4 - 512) - iVar5, 0, 255 );
                sub_45989( 0, -0.50000000, 1.50000000, 3, 1, 0, 0, 0, iVar3 );
                SET_TEXT_USE_UNDERSCORE( 1 );
                if (l_U104[iVar2]._fU76._fU64)
                {
                    uVar12 = sub_47460( ref l_U104[iVar2]._fU76._fU0, fVar13, fVar14, fVar15, fVar16, l_U104[iVar2]._fU76._fU68, l_U104[iVar2]._fU76._fU72, l_U104[iVar2]._fU76._fU76, iVar3, 2 );
                }
                else
                {
                    uVar12 = sub_48627( fVar13, fVar14, fVar15, fVar16, l_U104[iVar2]._fU76._fU68, l_U104[iVar2]._fU76._fU72, l_U104[iVar2]._fU76._fU76, iVar3, 2, ref l_U104[iVar2]._fU76._fU0 );
                }
                fVar13 += uVar12;
                if (l_U104[iVar2]._fU8 == -1)
                {
                    fVar13 += sub_68385( 0, -0.50000000, 1.50000000, 3, 1, fVar15, fVar16, " " );
                }
                if (l_U104[iVar2]._fU8 == -2)
                {
                    fVar13 += sub_68385( 0, -0.50000000, 1.50000000, 3, 1, fVar15, fVar16, " " );
                    sub_45989( 0, -0.50000000, 1.50000000, 3, 1, 0, 0, 0, iVar3 );
                    GET_HUD_COLOUR( 1, ref uVar6, ref uVar7, ref uVar8, ref uVar9 );
                    SET_TEXT_USE_UNDERSCORE( 1 );
                    fVar13 += sub_47460( ref l_U104[iVar2]._fU12, fVar13, fVar14, fVar15, fVar16, uVar6, uVar7, uVar8, iVar3, 2 );
                    SET_TEXT_USE_UNDERSCORE( 1 );
                    fVar13 += sub_68385( 0, -0.50000000, 1.50000000, 3, 1, fVar15, fVar16, " " );
                }
                else if ((l_U104[iVar2]._fU8 > -1) AND (l_U104[iVar2]._fU8 < 36))
                {
                    fVar13 += 0.03200000 / 2;
                    DRAW_SPRITE( l_U599[l_U104[iVar2]._fU8], fVar13, fVar14 + 0.00900000, 0.03200000, 0.03200000, 0.00000000, 255, 255, 255, iVar3 );
                    fVar13 += 0.03200000 / 2;
                }
                sub_45989( 0, -0.50000000, 1.50000000, 3, 1, 0, 0, 0, iVar3 );
                SET_TEXT_USE_UNDERSCORE( 1 );
                if (l_U104[iVar2]._fU156._fU64)
                {
                    sub_47460( ref l_U104[iVar2]._fU156._fU0, fVar13, fVar14, fVar15, fVar16, l_U104[iVar2]._fU156._fU68, l_U104[iVar2]._fU156._fU72, l_U104[iVar2]._fU156._fU76, iVar3, 2 );
                }
                else
                {
                    sub_48627( fVar13, fVar14, fVar15, fVar16, l_U104[iVar2]._fU156._fU68, l_U104[iVar2]._fU156._fU72, l_U104[iVar2]._fU156._fU76, iVar3, 2, ref l_U104[iVar2]._fU156._fU0 );
                }
                SET_TEXT_USE_UNDERSCORE( 0 );
                if (iVar3 < 255)
                {
                    iVar4++;
                }
                if (l_U104[iVar2]._fU4 <= iVar5)
                {
                    l_U661 -= -0.02600000;
                    sub_41870( ref l_U104[iVar2] );
                    sub_75468( ref l_U578, 8 );
                    iVar4--;
                }
                fVar14 -= -0.02600000;
                sub_75468( ref iVar2, 8 );
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

void sub_142712(int iParam0, int iParam1, int Result)
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

int sub_143937(int iParam0)
{
    int iVar3;

    DISPLAY_CASH( 1 );
    STORE_SCORE( sub_6220(), ref iVar3 );
    if (iVar3 != iParam0)
    {
        iParam0 -= iVar3;
        ADD_SCORE( sub_6220(), iParam0 );
        return 1;
    }
    return 0;
}

int sub_144012()
{
    int iVar2;

    GET_NETWORK_TIMER( ref iVar2 );
    if (NOT sub_144029())
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

int sub_144029()
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

void sub_144269(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
{
    if (NOT (IS_FONT_LOADED( 6 )))
    {
        LOAD_TEXT_FONT( 6 );
    }
    HIDE_HELP_TEXT_THIS_FRAME();
    if (((iParam2 == 1) || (iParam2 == 3)) || (iParam2 == 5))
    {
        sub_144328( uParam1 );
    }
    sub_43296( uParam0 );
    if ((sub_7686() + sub_17574()) > 22)
    {
        if (GET_IS_HIDEF())
        {
            sub_144839( iParam2, 0.07000000, 0.06400000, 0.31300000, 0.40600000, 0.02450000, 0.28000000, 0.39070000, 0.02300000, uParam3, uParam4 );
        }
        else
        {
            sub_144839( iParam2, 0.09000000, 0.08400000, 0.30000000, 0.44000000, 0.02450000, 0.30000000, 0.44000000, 0.02300000, uParam3, uParam4 );
        }
    }
    else if (GET_IS_HIDEF())
    {
        sub_144839( iParam2, 0.07000000, 0.06400000, 0.31300000, 0.46000000, 0.02700000, 0.28000000, 0.42000000, 0.02700000, uParam3, uParam4 );
    }
    else
    {
        sub_144839( iParam2, 0.09000000, 0.08400000, 0.30000000, 0.44000000, 0.02700000, 0.30000000, 0.44000000, 0.02700000, uParam3, uParam4 );
    }
    return;
}

void sub_144328(unknown uParam0)
{
    int I;

    if (NOT l_U1083)
    {
        sub_90733();
        l_U1083 = 1;
    }
    if ((uParam0^) <= 8)
    {
        for ( I = 0; I < (uParam0^); I++ )
        {
            if (l_U1039[I] != (uParam0^)[I])
            {
                l_U1039[I] = (uParam0^)[I];
                sub_144423( I );
            }
        }
    }
    return;
}

void sub_144423(unknown uParam0)
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
            sub_144423( uParam0 );
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
            sub_144423( uParam0 );
            return;
        }
    }
    return;
}

void sub_144839(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, int iParam9, boolean bParam10)
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
            fVar17 = sub_68385( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, GET_PLAYER_NAME( sub_578( I ) ) );
            SET_TEXT_USE_UNDERSCORE( 0 );
            if (fVar17 > fVar18)
            {
                fVar18 = fVar17;
            }
            if ((iParam0 == 3) AND ((sub_66681( I )) > -1))
            {
                if ((l_U662[sub_7307()]._fU16 == 5) || (l_U662[sub_7307()]._fU16 == 6))
                {
                    if (sub_6739() == 1)
                    {
                        fVar17 = sub_145072( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, "CASH", l_U662[sub_7307()]._fU24[I] );
                    }
                    else
                    {
                        fVar17 = sub_145072( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, "CASH", (l_U1039[sub_66681( I )]) / (sub_58326( sub_66681( I ) )) );
                    }
                }
                else
                {
                    fVar17 = sub_145388( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, (l_U1039[sub_66681( I )]) / (sub_58326( sub_66681( I ) )) );
                }
                if (fVar17 > fVar19)
                {
                    fVar19 = fVar17;
                }
            }
            else if (iParam0 == 2)
            {
                if ((l_U662[sub_7307()]._fU16 == 5) || (l_U662[sub_7307()]._fU16 == 6))
                {
                    fVar17 = sub_145072( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, "CASH", l_U662[sub_7307()]._fU24[I] );
                }
                else
                {
                    fVar17 = sub_145388( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, l_U662[sub_7307()]._fU24[I] );
                }
                if (fVar17 > fVar19)
                {
                    fVar19 = fVar17;
                }
            }
            else if ((iParam0 == 4) || (iParam0 == 5))
            {
                fVar17 = sub_145825( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, sub_7151( I ) );
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
            if ((sub_45437( J )) > 0)
            {
                fVar17 = sub_146216( 6, 0.00000000, 1.00000000, 0, 0, uParam6, uParam7, sub_60238( J, 1 ) );
                if (fVar17 > fVar18)
                {
                    fVar18 = fVar17;
                }
                if (iParam0 == 3)
                {
                    if ((l_U662[sub_7307()]._fU16 == 5) || (l_U662[sub_7307()]._fU16 == 6))
                    {
                        fVar17 = sub_145072( 6, 0.00000000, 1.00000000, 0, 0, uParam6, uParam7, "CASH", l_U1039[J] );
                    }
                    else
                    {
                        fVar17 = sub_145388( 6, 0.00000000, 1.00000000, 0, 0, uParam6, uParam7, l_U1039[J] );
                    }
                    if (fVar17 > fVar19)
                    {
                        fVar19 = fVar17;
                    }
                }
                else if (iParam0 == 5)
                {
                    fVar17 = sub_145825( 6, 0.00000000, 1.00000000, 0, 0, uParam6, uParam7, sub_141831( J ) );
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
    ConcatString(ref cVar23, sub_6739(), 32);
    fVar17 = sub_146216( 6, 0.00000000, 1.00000000, 0, 0, 0.31000000, 0.45500000, ref cVar23 );
    if (fVar17 > fVar18)
    {
        fVar18 = fVar17;
    }
    if (iParam9 != 2147483647)
    {
        if (bParam10)
        {
            if (sub_10967())
            {
                fVar17 = sub_145072( 6, 0.00000000, 1.00000000, 0, 0, 0.31000000, 0.45500000, "LIVES_LEFT", iParam9 );
            }
            else
            {
                fVar17 = sub_145072( 6, 0.00000000, 1.00000000, 0, 0, 0.31000000, 0.45500000, "MAX_POINTS", iParam9 );
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
    ConcatString(ref cVar23, sub_6739(), 32);
    sub_45989( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    sub_47460( ref cVar23, uParam1 + 0.01000000, uParam2 + -0.00370000, 0.31000000, 0.45500000, 255, 255, 255, 255, 2 );
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
            sub_45989( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
            if (sub_10967())
            {
                sub_46286( "LIVES_LEFT", uParam1 + 0.01000000, (((((uParam2 + fVar22) + -0.00370000) + 0.03450000) + -0.01900000) + 0.03820000) + 0.00650000, 0.31000000, 0.45500000, 255, 255, 255, 255, 2, iParam9 );
            }
            else
            {
                sub_46286( "MAX_POINTS", uParam1 + 0.01000000, (((((uParam2 + fVar22) + -0.00370000) + 0.03450000) + -0.01900000) + 0.03820000) + 0.00650000, 0.31000000, 0.45500000, 255, 255, 255, 255, 2, iParam9 );
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
        iVar31[0] = sub_7307();
        iVar31[1] = 0;
    }
    if (((iParam0 == 1) || (iParam0 == 3)) || (iParam0 == 5))
    {
        sub_63753( ref iVar31, (uParam1 + 0.01000000) + fVar19, ((uParam2 + -0.00370000) + 0.03450000) + -0.01900000, uParam6, uParam7, uParam8, uParam3, uParam4, uParam5, iParam0, 24, 0, -1 );
    }
    else
    {
        sub_69917( ref iVar31, (uParam1 + 0.01000000) + fVar19, ((uParam2 + -0.00370000) + 0.03450000) + -0.01900000, uParam3, uParam4, uParam5, iParam0, 16, 0, -1 );
    }
    return;
}

void sub_145072(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
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

void sub_145388(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
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

void sub_145825(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7)
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

void sub_146216(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
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

void sub_148261()
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
                if (IS_CHAR_DEAD( sub_869() ))
                {
                    if ((sub_148335()) || (NOT l_U2735))
                    {
                        if (sub_148494( ref l_U1817[GET_PLAYER_ID()]._fU0, l_U1496._fU368[GET_PLAYER_ID()], ref uVar2, ref uVar5 ))
                        {
                            sub_567( GET_PLAYER_ID(), 0 );
                            REQUEST_COLLISION_AT_POSN( uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                            RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), uVar2, uVar5 );
                            l_U2735 = 1;
                            FORCE_LOADING_SCREEN( 1 );
                            sub_79387( uVar2 );
                            FORCE_LOADING_SCREEN( 0 );
                            sub_567( GET_PLAYER_ID(), 1 );
                            if (NOT (HAS_CHAR_GOT_WEAPON( sub_869(), 3 )))
                            {
                                GIVE_WEAPON_TO_CHAR( sub_869(), 3, 0, 0 );
                            }
                            if (NOT (HAS_CHAR_GOT_WEAPON( sub_869(), 4 )))
                            {
                                GIVE_WEAPON_TO_CHAR( sub_869(), 4, 1, 0 );
                            }
                            if (NOT (HAS_CHAR_GOT_WEAPON( sub_869(), 12 )))
                            {
                                GIVE_WEAPON_TO_CHAR( sub_869(), 12, 1500, 0 );
                            }
                            if (NOT (HAS_CHAR_GOT_WEAPON( sub_869(), 14 )))
                            {
                                GIVE_WEAPON_TO_CHAR( sub_869(), 14, 1000, 1 );
                            }
                            SET_CURRENT_CHAR_WEAPON( sub_869(), 14, 1 );
                            if (IS_SCREEN_FADED_OUT())
                            {
                                sub_50254( 500 );
                            }
                            if (NOT (IS_PLAYER_CONTROL_ON( sub_6220() )))
                            {
                                sub_567( GET_PLAYER_ID(), 1 );
                            }
                            sub_148922();
                            SET_GAME_CAM_HEADING( 0.00000000 );
                        }
                    }
                    else
                    {
                        sub_149151();
                    }
                }
            }
            else if (IS_SCREEN_FADED_IN())
            {
                sub_44214( 500 );
            }
        }
    }
    return;
}

int sub_148335()
{
    switch (l_U1496._fU436[1])
    {
        case 0:
        case 1:
        case 2:
        if (l_U2735)
        {
            if (l_U2675 > 1)
            {
                l_U2675--;
                l_U2735 = 0;
                return 1;
            }
        }
        break;
    }
    return 0;
}

int sub_148494(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3)
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
                    GET_SPAWN_COORDINATES_FOR_CAR_NODE( iParam1, sub_11459( -1, 0 ), uParam2, uParam3 );
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

void sub_148922()
{
    if (l_U2675 == 4)
    {
        CLEAR_PRINTS();
        PRINT_NOW( "COOP_LIVES_4", 5000, 1 );
    }
    else if (l_U2675 == 3)
    {
        CLEAR_PRINTS();
        PRINT_NOW( "COOP_LIVES_3", 5000, 1 );
    }
    else if (l_U2675 == 2)
    {
        CLEAR_PRINTS();
        PRINT_NOW( "COOP_LIVES_2", 5000, 1 );
    }
    else if (l_U2675 == 1)
    {
        CLEAR_PRINTS();
        PRINT_NOW( "COOP_LIVES_1", 5000, 1 );
    };;;;
    return;
}

void sub_149151()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    sub_41638();
    sub_41830();
    l_U1817[GET_PLAYER_ID()]._fU4 = -5;
    l_U1817[GET_PLAYER_ID()]._fU0 = 1;
    l_U1817[GET_PLAYER_ID()]._fU44 = 5;
    l_U1817[GET_PLAYER_ID()]._fU104 = 1;
    l_U2674 = l_U2640 + 3500;
    l_U2737 = 1;
    if (IS_SCREEN_FADED_OUT())
    {
        if (NOT IS_SCREEN_FADING_IN())
        {
            sub_50254( 500 );
        }
    }
    l_U2639 = 10;
    return;
}
