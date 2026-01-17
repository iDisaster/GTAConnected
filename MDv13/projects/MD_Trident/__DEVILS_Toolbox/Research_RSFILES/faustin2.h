void main()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    l_U4 = 0;
    l_U5 = 1;
    l_U6 = 3;
    l_U8 = 0;
    l_U25 = -1;
    l_U29 = 0;
    l_U30 = 1;
    l_U31 = 1;
    l_U39 = 150.00000000;
    l_U129 = 0;
    l_U130 = 150.00000000;
    l_U180 = 0;
    l_U481 = -1;
    l_U489 = {0.00000000, 0.00000000, 0.00000000};
    l_U492 = 2.50000000;
    l_U493 = 0;
    l_U494 = 0;
    l_U495 = 0;
    l_U496 = 0;
    l_U602 = 0;
    l_U607 = 0;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_167();
        sub_2269();
    }
    WAIT( 0 );
    sub_4762();
    while (true)
    {
        WAIT( 0 );
        if (l_U574)
        {
            l_U573 = 1;
        }
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 31 ))
        {
            sub_9038();
        }
        else if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
        {
            sub_20626();
        }
        if (l_U602 != 25)
        {
            sub_22422();
            sub_28114();
            if (DOES_CHAR_EXIST( l_U501 ))
            {
                if ((IS_CHAR_INJURED( l_U501 )) || (IS_CHAR_DEAD( l_U501 )))
                {
                    l_U604 = 1;
                    sub_22522();
                }
            }
            if (g_U9251)
            {
                l_U604 = 3;
                sub_22522();
            }
        }
        if (sub_20657( sub_4015(), l_U501 ))
        {
            if (NOT (DOES_VEHICLE_EXIST( l_U507 )))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4015(), ref l_U507 );
                SET_CAR_AS_MISSION_CAR( l_U507 );
            }
        }
        else if (NOT (IS_CHAR_IN_ANY_CAR( sub_4015() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( l_U501 )))
            {
                if (DOES_VEHICLE_EXIST( l_U507 ))
                {
                    ;
                }
            }
        }
        switch (l_U602)
        {
            case 0:
            if (NOT (IS_CHAR_DEAD( l_U501 )))
            {
                if (((IS_SCREEN_FADED_IN()) AND (NOT l_U575)) AND (sub_28928()))
                {
                    sub_29162( "F2_CAR1", 0, 1, ref l_U593, 6, 1 );
                    l_U575 = 1;
                }
                if (sub_29336( ref l_U498, ref l_U497, l_U501, 775.89700000, -548.45300000, 10.81600000, "GI_01", "DIMITRI_BUDDY", "GI_01" ))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_4015(), l_U586._fU0, l_U586._fU4, l_U586._fU8, 1.60000000, 1.60000000, 1.60000000, 0 ))
                    {
                        sub_29958();
                        sub_29997();
                        SET_EVERYONE_IGNORE_PLAYER( sub_4471(), 1 );
                        l_U602 = 2;
                    }
                    if (NOT l_U567)
                    {
                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_4015(), 775.89700000, -548.45300000, 10.81600000, 2.50000000, 2.50000000, 2.50000000, 1 ))
                        {
                            if (sub_24121( 1, 1 ))
                            {
                                sub_31724();
                                if (NOT (IS_CHAR_DEAD( l_U501 )))
                                {
                                    REMOVE_CHAR_FROM_GROUP( l_U501 );
                                    OPEN_SEQUENCE_TASK( ref l_U589 );
                                    TASK_LEAVE_ANY_CAR( 0 );
                                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 788.84750000, -535.65310000, 7.52740000, 2, 80000, 0.40000000 );
                                    CLOSE_SEQUENCE_TASK( l_U589 );
                                    TASK_PERFORM_SEQUENCE( l_U501, l_U589 );
                                    CLEAR_SEQUENCE_TASK( l_U589 );
                                }
                                if (DOES_BLIP_EXIST( l_U497 ))
                                {
                                    REMOVE_BLIP( l_U497 );
                                }
                                ADD_BLIP_FOR_COORD( 787.13480000, -536.92160000, 6.52270000, ref l_U497 );
                                SET_ROUTE( l_U497, 1 );
                                sub_29958();
                                PRINT_NOW( "GI_02", 7500, 0 );
                                l_U602 = 1;
                            }
                        }
                        else if (NOT l_U566)
                        {
                            if (sub_28928())
                            {
                                sub_32146( "GI_01", 7500 );
                                l_U566 = 1;
                            }
                        }
                        else
                        {
                            sub_32219( l_U501, "F2_CAR1", "F2_CAR2", 0 );
                        }
                    }
                }
            }
            break;
            case 1:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_4015(), 787.13000000, -537.02100000, 8.02800000, 1.30000000, 1.30000000, 1.30000000, 0 ))
            {
                sub_29997();
                SET_EVERYONE_IGNORE_PLAYER( sub_4471(), 1 );
                if (NOT (IS_CHAR_DEAD( l_U502 )))
                {
                    TASK_LOOK_AT_CHAR( l_U502, sub_4015(), -2, 0 );
                }
                if (NOT (IS_CHAR_DEAD( l_U503[0] )))
                {
                    TASK_LOOK_AT_CHAR( l_U503[0], sub_4015(), -2, 0 );
                }
                if (NOT (IS_CHAR_DEAD( l_U503[1] )))
                {
                    TASK_LOOK_AT_CHAR( l_U503[1], sub_4015(), -2, 0 );
                    if (NOT (IS_CHAR_DEAD( l_U501 )))
                    {
                        TASK_LOOK_AT_CHAR( l_U501, l_U503[1], -2, 0 );
                    }
                }
                SET_WANTED_MULTIPLIER( 0.00000000 );
                l_U602 = 2;
            }
            else
            {
                GET_CHAR_COORDINATES( l_U501, ref l_U576[0]._fU0, ref l_U576[0]._fU4, ref l_U576[0]._fU8 );
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_4015(), l_U576[0]._fU0, l_U576[0]._fU4, l_U576[0]._fU8, 20.00000000, 20.00000000, 20.00000000, 0 ))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_4015(), l_U576[0]._fU0, l_U576[0]._fU4, l_U576[0]._fU8, 10.00000000, 10.00000000, 10.00000000, 0 ))
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U497 )))
                        {
                            if (DOES_BLIP_EXIST( l_U498 ))
                            {
                                REMOVE_BLIP( l_U498 );
                            }
                            ADD_BLIP_FOR_COORD( 787.13480000, -536.92160000, 6.52270000, ref l_U497 );
                            SET_ROUTE( l_U497, 1 );
                            PRINT_NOW( "GI_02", 7500, 0 );
                        }
                    }
                }
                else if (NOT (DOES_BLIP_EXIST( l_U498 )))
                {
                    if (DOES_BLIP_EXIST( l_U497 ))
                    {
                        REMOVE_BLIP( l_U497 );
                    }
                    ADD_BLIP_FOR_CHAR( l_U501, ref l_U498 );
                    SET_BLIP_AS_FRIENDLY( l_U498, 1 );
                    sub_32146( "GI_39", 7500 );
                }
            }
            break;
            case 2:
            if (NOT (IS_CHAR_DEAD( l_U502 )))
            {
                if (((sub_28928()) AND (NOT l_U545)) AND (l_U605))
                {
                    PRINT_NOW( "GI_52", 7500, 1 );
                    l_U545 = 1;
                }
                if ((((TIMERA() > 2000) AND (NOT l_U556)) AND (l_U605)) AND (IS_AUTO_AIMING_ON()))
                {
                    PRINT_HELP_FOREVER( "GI_10" );
                    l_U556 = 1;
                }
                if ((((IS_AUTO_AIMING_ON()) AND (IS_PLAYER_TARGETTING_CHAR( sub_4471(), l_U502 ))) AND (IS_CHAR_ARMED( sub_4015(), 4 ))) || (((NOT IS_AUTO_AIMING_ON()) AND (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_4471(), l_U502 ))) AND (IS_CHAR_ARMED( sub_4015(), 4 ))))
                {
                    CLEAR_HELP();
                    REMOVE_BLIP( l_U498 );
                    sub_24693();
                    sub_29162( "F2_POINT1", 0, 1, ref l_U593, 6, 1 );
                    l_U602 = 3;
                }
                else
                {
                    sub_34228();
                    sub_35188( l_U502, l_U508, l_U521, sub_4015(), 0 );
                    sub_35188( l_U503[0], l_U511[0], l_U522[0], sub_4015(), 1 );
                    sub_35188( l_U503[1], l_U511[1], l_U522[1], sub_4015(), 2 );
                    sub_35188( l_U501, l_U518, l_U525, l_U503[1], 3 );
                }
            }
            break;
            case 3:
            if (sub_28928())
            {
                if (DOES_BLIP_EXIST( l_U498 ))
                {
                    REMOVE_BLIP( l_U498 );
                }
                if (NOT (IS_CHAR_DEAD( l_U503[1] )))
                {
                    ADD_BLIP_FOR_CHAR( l_U503[1], ref l_U498 );
                }
                if (NOT (IS_CHAR_DEAD( l_U501 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U589 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U503[1] );
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "point_fwd", "missfaustin2", 10.00000000, 0, 0, 0, 0, -1 );
                    CLOSE_SEQUENCE_TASK( l_U589 );
                    TASK_PERFORM_SEQUENCE( l_U501, l_U589 );
                    CLEAR_SEQUENCE_TASK( l_U589 );
                }
                sub_24693();
                sub_29162( "F2_POINT1", 2, 1, ref l_U593, 6, 1 );
                SETTIMERA( 0 );
                l_U602 = 4;
            }
            else
            {
                sub_34228();
                sub_35188( l_U502, l_U508, l_U521, sub_4015(), 0 );
                sub_35188( l_U503[0], l_U511[0], l_U522[0], sub_4015(), 1 );
                sub_35188( l_U503[1], l_U511[1], l_U522[1], sub_4015(), 2 );
                sub_35188( l_U501, l_U518, l_U525, l_U503[1], 3 );
            }
            break;
            case 4:
            if (((NOT (IS_CHAR_DEAD( l_U502 ))) AND (NOT (IS_CHAR_DEAD( l_U503[0] )))) AND (NOT (IS_CHAR_DEAD( l_U503[1] ))))
            {
                if ((((IS_AUTO_AIMING_ON()) AND (IS_PLAYER_TARGETTING_CHAR( sub_4471(), l_U503[1] ))) AND (IS_CHAR_ARMED( sub_4015(), 4 ))) || (((NOT IS_AUTO_AIMING_ON()) AND (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_4471(), l_U503[1] ))) AND (IS_CHAR_ARMED( sub_4015(), 4 ))))
                {
                    CLEAR_HELP();
                    if (NOT (IS_CHAR_DEAD( l_U503[1] )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U589 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_4015() );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "point_fwd", "missfaustin2", 10.00000000, 0, 0, 0, 0, -1 );
                        CLOSE_SEQUENCE_TASK( l_U589 );
                        TASK_PERFORM_SEQUENCE( l_U503[1], l_U589 );
                        CLEAR_SEQUENCE_TASK( l_U589 );
                    }
                    SET_CHAR_NEVER_TARGETTED( l_U503[0], 1 );
                    SET_CHAR_NEVER_TARGETTED( l_U503[1], 0 );
                    SET_CHAR_NEVER_TARGETTED( l_U502, 1 );
                    sub_24693();
                    sub_29162( "F2_POINT2", 0, 1, ref l_U593, 6, 1 );
                    REMOVE_BLIP( l_U498 );
                    l_U602 = 5;
                }
                else if ((IS_PLAYER_TARGETTING_CHAR( sub_4471(), l_U502 )) AND (IS_CHAR_ARMED( sub_4015(), 4 )))
                {
                    if (NOT l_U542)
                    {
                        SET_CHAR_NEVER_TARGETTED( l_U502, 1 );
                        SET_CHAR_NEVER_TARGETTED( l_U503[0], 1 );
                        SET_CHAR_NEVER_TARGETTED( l_U503[1], 0 );
                        l_U542 = 1;
                    }
                }
                else if (l_U542)
                {
                    SET_CHAR_NEVER_TARGETTED( l_U502, 0 );
                    SET_CHAR_NEVER_TARGETTED( l_U503[0], 1 );
                    SET_CHAR_NEVER_TARGETTED( l_U503[1], 1 );
                    l_U542 = 0;
                };;;
                if ((sub_28928()) AND (NOT l_U543))
                {
                    sub_32146( "GI_53", 7500 );
                    l_U543 = 1;
                }
                if ((((NOT l_U557) AND (TIMERA() > 2000)) AND (l_U605)) AND (IS_AUTO_AIMING_ON()))
                {
                    PRINT_HELP( "GI_13" );
                    l_U557 = 1;
                }
                sub_35188( l_U502, l_U508, l_U521, sub_4015(), 0 );
                sub_35188( l_U503[0], l_U511[0], l_U522[0], sub_4015(), 1 );
                sub_35188( l_U503[1], l_U511[1], l_U522[1], sub_4015(), 2 );
                sub_35188( l_U501, l_U518, l_U525, l_U503[1], 3 );
                sub_34228();
            }
            break;
            case 5:
            if (sub_28928())
            {
                if ((NOT (IS_CHAR_DEAD( l_U501 ))) AND (NOT (IS_CHAR_DEAD( l_U503[1] ))))
                {
                    OPEN_SEQUENCE_TASK( ref l_U589 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U503[1] );
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "point_fwd", "missfaustin2", 10.00000000, 0, 0, 0, 0, -1 );
                    CLOSE_SEQUENCE_TASK( l_U589 );
                    TASK_PERFORM_SEQUENCE( l_U501, l_U589 );
                    CLEAR_SEQUENCE_TASK( l_U589 );
                }
                sub_29162( "F2_POINT2", 1, 1, ref l_U593, 6, 1 );
                if (NOT (IS_CHAR_DEAD( l_U503[1] )))
                {
                    if (DOES_BLIP_EXIST( l_U498 ))
                    {
                        REMOVE_BLIP( l_U498 );
                    }
                    ADD_BLIP_FOR_CHAR( l_U503[1], ref l_U498 );
                }
                l_U602 = 6;
                SETTIMERA( 0 );
            }
            else
            {
                sub_34228();
                sub_35188( l_U502, l_U508, l_U521, sub_4015(), 0 );
                sub_35188( l_U503[0], l_U511[0], l_U522[0], sub_4015(), 1 );
                sub_35188( l_U503[1], l_U511[1], l_U522[1], sub_4015(), 2 );
                sub_35188( l_U501, l_U518, l_U525, l_U503[1], 3 );
                if (NOT (IS_CHAR_DEAD( l_U503[1] )))
                {
                    if (IS_PED_RAGDOLL( l_U503[1] ))
                    {
                        sub_24693();
                        l_U602 = 6;
                    }
                }
            }
            break;
            case 6:
            if ((NOT (IS_CHAR_DEAD( l_U503[0] ))) AND (NOT (IS_CHAR_DEAD( l_U502 ))))
            {
                if (NOT l_U564)
                {
                    if (NOT (IS_CHAR_DEAD( l_U503[1] )))
                    {
                        if (IS_PED_RAGDOLL( l_U503[1] ))
                        {
                            if (NOT (IS_CHAR_DEAD( l_U503[0] )))
                            {
                                SAY_AMBIENT_SPEECH_WITH_VOICE( l_U503[0], "PANIC", "PAIN_VOICE", 1, 0, 0 );
                                TASK_LOOK_AT_CHAR( l_U503[0], l_U503[1], 2000, 0 );
                            }
                            SET_CHAR_HEALTH( l_U503[1], 60 );
                            SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U503[1], 0 );
                            TASK_CLEAR_LOOK_AT( l_U503[1] );
                            TASK_CLEAR_LOOK_AT( l_U502 );
                            REMOVE_BLIP( l_U498 );
                            CLEAR_HELP();
                            if ((NOT l_U555) AND (IS_AUTO_AIMING_ON()))
                            {
                                if (USING_STANDARD_CONTROLS())
                                {
                                    PRINTNL();
                                    PRINTSTRING( "FREEAIM2" );
                                    PRINTNL();
                                }
                            }
                            GET_CHAR_LAST_DAMAGE_BONE( l_U503[1], ref l_U601 );
                            if (((((((((((l_U601 == 418) || (l_U601 == 423)) || (l_U601 == 419)) || (l_U601 == 424)) || (l_U601 == 420)) || (l_U601 == 425)) || (l_U601 == 421)) || (l_U601 == 1200)) || (l_U601 == 14512)) || (l_U601 == 14768)) || (l_U601 == 417))
                            {
                                OPEN_SEQUENCE_TASK( ref l_U589 );
                                TASK_PLAY_ANIM( 0, "shock_to_plead", "missfaustin2", 4.00000000, 0, 0, 0, 0, -1 );
                                if (NOT (IS_CHAR_DEAD( l_U501 )))
                                {
                                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U501 );
                                }
                                CLOSE_SEQUENCE_TASK( l_U589 );
                                TASK_PERFORM_SEQUENCE( l_U502, l_U589 );
                                CLEAR_SEQUENCE_TASK( l_U589 );
                                sub_29162( "F2_PAY", 0, 1, ref l_U593, 6, 1 );
                                if (NOT (IS_CHAR_DEAD( l_U501 )))
                                {
                                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U501, l_U502 );
                                }
                            }
                            else
                            {
                                l_U592 = 1;
                                l_U604 = 2;
                                sub_22522();
                            }
                            l_U564 = 1;
                        }
                        if (NOT l_U552)
                        {
                            if ((((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_4471(), l_U503[1] )) || ((IS_PLAYER_TARGETTING_CHAR( sub_4471(), l_U503[1] )) AND (IS_CHAR_ARMED( sub_4015(), 4 )))) AND (sub_28928())) AND (NOT l_U592))
                            {
                                sub_4603( ref l_U593, 0 );
                                sub_29162( "F2_GUY1", 0, 1, ref l_U593, 6, 1 );
                                TASK_PLAY_ANIM( l_U503[1], "reaction_shock", "missfaustin2", 4.00000000, 0, 0, 0, 0, -1 );
                                l_U552 = 1;
                            }
                        }
                        else if (((sub_28928()) AND (l_U552)) AND (NOT l_U553))
                        {
                            sub_26174( "F2_SHOOT", ref l_U593, 6, 1 );
                            TASK_PLAY_ANIM( l_U503[1], "reaction_shock", "missfaustin2", 4.00000000, 0, 0, 0, 0, -1 );
                            if (NOT (IS_CHAR_DEAD( l_U501 )))
                            {
                                OPEN_SEQUENCE_TASK( ref l_U589 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U503[1] );
                                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "point_fwd", "missfaustin2", 10.00000000, 0, 0, 0, 0, -1 );
                                CLOSE_SEQUENCE_TASK( l_U589 );
                                TASK_PERFORM_SEQUENCE( l_U501, l_U589 );
                                CLEAR_SEQUENCE_TASK( l_U589 );
                            }
                            l_U553 = 1;
                        }
                    }
                    else
                    {
                        l_U604 = 2;
                        sub_22522();
                    }
                    if (((((l_U554) AND (NOT l_U555)) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())) AND (l_U605)) AND (IS_AUTO_AIMING_ON()))
                    {
                        if (USING_STANDARD_CONTROLS())
                        {
                            PRINT_HELP( "FREEAIM2" );
                        }
                        else
                        {
                            PRINT_HELP( "FREEAIM3" );
                        }
                        l_U555 = 1;
                    }
                    if ((((TIMERA() > 2000) AND (NOT l_U554)) AND (l_U605)) AND (IS_AUTO_AIMING_ON()))
                    {
                        if (NOT IS_LOOK_INVERTED())
                        {
                            PRINT_HELP( "FREEAIM1b" );
                        }
                        else
                        {
                            PRINT_HELP( "FREEAIM1" );
                        }
                        l_U554 = 1;
                    }
                    if ((((sub_28928()) AND (NOT l_U544)) AND (l_U605)) AND (NOT l_U592))
                    {
                        sub_32146( "GI_54", 7500 );
                        l_U544 = 1;
                    }
                    if (NOT l_U592)
                    {
                        sub_35188( l_U502, l_U508, l_U521, sub_4015(), 0 );
                    }
                }
                else if (NOT (sub_28943( l_U593 )))
                {
                    if (NOT l_U565)
                    {
                        if (l_U605)
                        {
                            sub_29162( "F2_PAY", 1, 1, ref l_U593, 6, 1 );
                            l_U565 = 1;
                        }
                        else
                        {
                            sub_29162( "F2_PAY", 1, 1, ref l_U593, 4, 1 );
                            l_U565 = 1;
                        }
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U502 )))
                    {
                        SET_CHAR_NEVER_TARGETTED( l_U502, 0 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U503[0] )))
                    {
                        SET_CHAR_NEVER_TARGETTED( l_U503[0], 0 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U503[1] )))
                    {
                        SET_CHAR_NEVER_TARGETTED( l_U503[1], 0 );
                    }
                    l_U602 = 7;;
                }
                sub_34228();
                sub_35188( l_U503[1], l_U511[1], l_U522[1], sub_4015(), 2 );
                sub_35188( l_U501, l_U518, l_U525, l_U502, 3 );
            }
            break;
            case 7:
            if ((NOT (IS_CHAR_DEAD( l_U501 ))) AND (NOT (sub_28943( l_U593 ))))
            {
                if (NOT (sub_35188( l_U501, l_U518, l_U525, l_U503[1], 3 )))
                {
                    FREEZE_CHAR_POSITION( l_U501, 1 );
                    if ((NOT (IS_CHAR_DEAD( l_U501 ))) AND (NOT (IS_CHAR_DEAD( l_U502 ))))
                    {
                        TASK_LOOK_AT_CHAR( l_U502, l_U501, -2, 0 );
                        TASK_LOOK_AT_CHAR( l_U501, l_U502, -2, 0 );
                        OPEN_SEQUENCE_TASK( ref l_U589 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U502 );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "point_fwd", "missfaustin2", 10.00000000, 0, 0, 0, 0, -1 );
                        CLOSE_SEQUENCE_TASK( l_U589 );
                        TASK_PERFORM_SEQUENCE( l_U501, l_U589 );
                        CLEAR_SEQUENCE_TASK( l_U589 );
                    }
                    if (l_U605)
                    {
                        sub_29162( "F2_PAY", 2, 1, ref l_U593, 6, 1 );
                    }
                    else
                    {
                        sub_29162( "F2_PAY", 2, 1, ref l_U593, 4, 1 );
                    }
                    l_U602 = 8;
                }
                else
                {
                    sub_34228();
                }
            }
            else
            {
                sub_34228();
                sub_35188( l_U502, l_U508, l_U521, sub_4015(), 0 );
                sub_35188( l_U503[0], l_U511[0], l_U522[0], sub_4015(), 1 );
                sub_35188( l_U501, l_U518, l_U525, l_U502, 3 );
            }
            break;
            case 8:
            if (((NOT (IS_CHAR_DEAD( l_U502 ))) AND (NOT (IS_CHAR_DEAD( l_U501 )))) AND (NOT (sub_28943( l_U593 ))))
            {
                GET_CHAR_COORDINATES( l_U501, ref l_U576[0]._fU0, ref l_U576[0]._fU4, ref l_U576[0]._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U501, 0.00000000, 0.85000000, 0.00000000, ref l_U576[0]._fU0, ref l_U576[0]._fU4, ref l_U576[0]._fU8 );
                GET_CHAR_HEADING( l_U501, ref l_U591 );
                TASK_CHAR_SLIDE_TO_COORD( l_U502, l_U576[0]._fU0, l_U576[0]._fU4, l_U576[0]._fU8, 120.00000000, 0.80000000 );
                SETTIMERA( 0 );
                if (l_U605)
                {
                    sub_29162( "F2_PAY", 3, 1, ref l_U593, 6, 1 );
                }
                else
                {
                    sub_29162( "F2_PAY", 3, 1, ref l_U593, 4, 1 );
                }
                l_U602 = 9;
            }
            else
            {
                sub_34228();
                sub_35188( l_U503[0], l_U511[0], l_U522[0], sub_4015(), 1 );
            }
            break;
            case 9:
            if ((NOT (IS_CHAR_DEAD( l_U502 ))) AND (NOT (IS_CHAR_DEAD( l_U501 ))))
            {
                GET_SCRIPT_TASK_STATUS( l_U502, 68, ref l_U531 );
                if (l_U531 == 7)
                {
                    FREEZE_CHAR_POSITION( l_U502, 1 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U502, l_U501 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U501, l_U502 );
                    l_U602 = 10;
                }
                else
                {
                    sub_34228();
                }
            }
            break;
            case 10:
            if ((NOT (IS_CHAR_DEAD( l_U502 ))) AND (NOT (IS_CHAR_DEAD( l_U501 ))))
            {
                GET_SCRIPT_TASK_STATUS( l_U501, 34, ref l_U531 );
                if (l_U531 == 7)
                {
                    GET_SCRIPT_TASK_STATUS( l_U502, 34, ref l_U531 );
                    if (l_U531 == 7)
                    {
                        TASK_CLEAR_LOOK_AT( l_U502 );
                        TASK_CLEAR_LOOK_AT( l_U501 );
                        if ((NOT (IS_CHAR_DEAD( l_U502 ))) AND (NOT (IS_CHAR_DEAD( l_U501 ))))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U501, "take_n_pistolwhip", "missfaustin2", 10.00000000, 0, 1, 1, 0, -1 );
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U502, "give_n_pistolwhip", "missfaustin2", 10.00000000, 0, 0, 0, 0, -1 );
                        }
                        SETTIMERA( 0 );
                        l_U602 = 11;
                    }
                    else
                    {
                        sub_34228();
                    }
                }
                else
                {
                    sub_34228();
                }
            }
            break;
            case 11:
            if ((NOT (IS_CHAR_DEAD( l_U501 ))) AND (NOT (IS_CHAR_DEAD( l_U502 ))))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U501, "missfaustin2", "take_n_pistolwhip" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U501, "missfaustin2", "take_n_pistolwhip", ref l_U591 );
                    if (l_U591 > 0.40000000)
                    {
                        GIVE_WEAPON_TO_CHAR( l_U501, 7, 30000, 0 );
                        SET_CURRENT_CHAR_WEAPON( l_U501, 7, 1 );
                        SETTIMERA( 0 );
                        l_U602 = 12;
                    }
                    else
                    {
                        sub_34228();
                    }
                }
                else
                {
                    sub_34228();
                }
            }
            else
            {
                sub_35188( l_U503[0], l_U511[0], l_U522[0], sub_4015(), 1 );
            }
            break;
            case 12:
            if ((NOT (IS_CHAR_DEAD( l_U501 ))) AND (NOT (IS_CHAR_DEAD( l_U502 ))))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U501, "missfaustin2", "take_n_pistolwhip" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U501, "missfaustin2", "take_n_pistolwhip", ref l_U591 );
                    if (l_U591 > 0.58000000)
                    {
                        FREEZE_CHAR_POSITION( l_U501, 0 );
                        FREEZE_CHAR_POSITION( l_U502, 0 );
                        SET_DONT_ACTIVATE_RAGDOLL_FROM_PLAYER_IMPACT( l_U501, 1 );
                        UNLOCK_RAGDOLL( l_U501, 0 );
                        SWITCH_PED_TO_RAGDOLL( l_U502, 0, 60000, 1, 1, 1, 0 );
                        CREATE_NM_MESSAGE( 1, 79 );
                        SEND_NM_MESSAGE( l_U502 );
                        PLAY_AUDIO_EVENT_FROM_PED( "ANIM_F2_PISTOL_WHIP", l_U502 );
                        APPLY_FORCE_TO_PED( l_U502, 1, 0.00000000, -1.70000000, -0.20000000, 0.00000000, 0.00000000, 0.00000000, 12, 1, 1, 1 );
                        SET_CHAR_HEALTH( l_U502, 60 );
                        SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U502, 0 );
                        TASK_CLEAR_LOOK_AT( l_U502 );
                        if (l_U605)
                        {
                            sub_26174( "F2_PISTOL", ref l_U593, 6, 1 );
                        }
                        else
                        {
                            sub_26174( "F2_PISTOL", ref l_U593, 4, 1 );
                        }
                        if (NOT (IS_CHAR_DEAD( l_U503[0] )))
                        {
                            TASK_CLEAR_LOOK_AT( l_U503[0] );
                            SET_CHAR_NEVER_TARGETTED( l_U503[0], 0 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U503[0], 1 );
                            SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U503[0], 0 );
                            OPEN_SEQUENCE_TASK( ref l_U589 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U501 );
                            TASK_PLAY_ANIM( 0, "drop_knees", "missfaustin2", 4.00000000, 0, 0, 0, 0, -1 );
                            TASK_PLAY_ANIM( 0, "plead_idle", "missfaustin2", 4.00000000, 1, 0, 0, 0, -1 );
                            CLOSE_SEQUENCE_TASK( l_U589 );
                            TASK_PERFORM_SEQUENCE( l_U503[0], l_U589 );
                            CLEAR_SEQUENCE_TASK( l_U589 );
                        }
                        SETTIMERA( 0 );
                        l_U602 = 13;
                    }
                    else
                    {
                        sub_34228();
                    }
                }
                else
                {
                    SWITCH_PED_TO_RAGDOLL( l_U502, 0, 60000, 1, 1, 1, 0 );
                    CREATE_NM_MESSAGE( 1, 79 );
                    SEND_NM_MESSAGE( l_U502 );
                    APPLY_FORCE_TO_PED( l_U502, 1, 0.00000000, -2.20000000, -0.20000000, 0.00000000, 0.00000000, 0.00000000, 12, 1, 1, 1 );
                    SET_CHAR_HEALTH( l_U502, 60 );
                    SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U502, 0 );
                    TASK_CLEAR_LOOK_AT( l_U502 );
                    if (NOT (IS_CHAR_DEAD( l_U503[0] )))
                    {
                        TASK_CLEAR_LOOK_AT( l_U503[0] );
                        SET_CHAR_NEVER_TARGETTED( l_U503[0], 0 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U503[0], 1 );
                        SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U503[0], 0 );
                        OPEN_SEQUENCE_TASK( ref l_U589 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_4015() );
                        TASK_PLAY_ANIM( 0, "drop_knees", "missfaustin2", 4.00000000, 0, 0, 0, 0, -1 );
                        TASK_PLAY_ANIM( 0, "plead_idle", "missfaustin2", 4.00000000, 1, 0, 0, 0, -1 );
                        CLOSE_SEQUENCE_TASK( l_U589 );
                        TASK_PERFORM_SEQUENCE( l_U503[0], l_U589 );
                        CLEAR_SEQUENCE_TASK( l_U589 );
                    }
                    SETTIMERA( 0 );
                    l_U602 = 13;
                }
            }
            break;
            case 13:
            if (NOT (sub_28943( l_U593 )))
            {
                if (NOT (IS_CHAR_DEAD( l_U503[0] )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U503[1] )))
                    {
                        SET_CHAR_NEVER_TARGETTED( l_U503[1], 1 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U502 )))
                    {
                        SET_CHAR_NEVER_TARGETTED( l_U502, 1 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U501 )))
                    {
                        TASK_TURN_CHAR_TO_FACE_CHAR( l_U501, l_U503[0] );
                    }
                    sub_26174( "F2_PORNA", ref l_U593, 6, 1 );
                    l_U602 = 14;
                }
            }
            else
            {
                sub_34228();
            }
            break;
            case 14:
            sub_41913();
            if (NOT (sub_28943( l_U593 )))
            {
                if (NOT (IS_CHAR_DEAD( l_U501 )))
                {
                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U501, 779.79870000, -543.82730000, 8.49470000, 2, -1, 0.50000000 );
                    if (DOES_BLIP_EXIST( l_U498 ))
                    {
                        REMOVE_BLIP( l_U498 );
                    }
                    ADD_BLIP_FOR_CHAR( l_U501, ref l_U498 );
                    SET_BLIP_AS_FRIENDLY( l_U498, 1 );
                }
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U501, 1 );
                UNLOCK_RAGDOLL( l_U501, 1 );
                sub_24693();
                if (((((((((((l_U601 == 418) || (l_U601 == 423)) || (l_U601 == 419)) || (l_U601 == 424)) || (l_U601 == 420)) || (l_U601 == 425)) || (l_U601 == 421)) || (l_U601 == 1200)) || (l_U601 == 14512)) || (l_U601 == 14768)) || (l_U601 == 417))
                {
                    sub_26174( "F2_DEAD", ref l_U593, 6, 1 );
                }
                else
                {
                    sub_26174( "F2_NOTLEG", ref l_U593, 6, 1 );
                }
                TASK_LOOK_AT_CHAR( l_U501, sub_4015(), 2500, 0 );
                SET_WANTED_MULTIPLIER( 0.40000000 );
                SETTIMERA( 0 );
                l_U602 = 15;
            }
            else
            {
                sub_34228();
            }
            break;
            case 15:
            if (NOT (IS_CHAR_DEAD( l_U501 )))
            {
                sub_41913();
                if ((sub_28928()) AND (NOT l_U563))
                {
                    PRINT_NOW( "GI_88", 7500, 0 );
                    l_U563 = 1;
                }
                GET_INTERIOR_FROM_CHAR( sub_4015(), ref iVar2 );
                if (iVar2 == nil)
                {
                    if (HAS_CHAR_SPOTTED_CHAR( l_U501, sub_4015() ))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U501 )))
                        {
                            GET_PLAYER_GROUP( sub_4471(), ref l_U532 );
                            SET_GROUP_MEMBER( sub_8583(), l_U501 );
                            SET_CHAR_RELATIONSHIP( l_U501, 1, 0 );
                        }
                        MARK_MODEL_AS_NO_LONGER_NEEDED( 568525885 );
                        sub_24693();
                        sub_26174( "F2_GO2", ref l_U593, 6, 1 );
                        SET_BLIP_AS_FRIENDLY( l_U498, 0 );
                        REMOVE_BLIP( l_U498 );
                        REMOVE_BLIP( l_U497 );
                        ADD_BLIP_FOR_COORD( 1055.55600000, 86.85400000, 33.98700000, ref l_U497 );
                        CHANGE_BLIP_COLOUR( l_U497, 5 );
                        SET_ROUTE( l_U497, 1 );
                        SETTIMERA( 0 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( 568525885 );
                        l_U602 = 17;
                    }
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( l_U501, 27, ref l_U531 );
                    if (l_U531 == 7)
                    {
                        if (NOT l_U558)
                        {
                            TASK_TURN_CHAR_TO_FACE_CHAR( l_U501, sub_4015() );
                            l_U558 = 1;
                        }
                    }
                }
            }
            break;
            case 17:
            sub_41913();
            if (sub_28928())
            {
                SET_DONT_ACTIVATE_RAGDOLL_FROM_PLAYER_IMPACT( l_U501, 0 );
                PRINT( "GI_28", 7500, 0 );
                l_U602 = 18;
            }
            break;
            case 18:
            if (NOT (IS_CHAR_DEAD( l_U501 )))
            {
                sub_41913();
                if (IS_WANTED_LEVEL_GREATER( sub_4471(), 0 ))
                {
                    if (DOES_BLIP_EXIST( l_U497 ))
                    {
                        REMOVE_BLIP( l_U497 );
                        PRINT_NOW( "GNSHP_WNTD", 7500, 0 );
                    }
                }
                else if ((IS_CHAR_IN_AREA_3D( sub_4015(), 1049.00000000, 48, 28, 1057.00000000, 105, 42, 0 )) AND (IS_CHAR_IN_AREA_3D( l_U501, 1049.00000000, 48, 28, 1057.00000000, 105, 42, 0 )))
                {
                    if ((sub_20657( sub_4015(), l_U501 )) AND (sub_43160( l_U501 )))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U501 );
                    }
                    if (DOES_BLIP_EXIST( l_U498 ))
                    {
                        REMOVE_BLIP( l_U498 );
                    }
                    if (NOT (DOES_BLIP_EXIST( l_U497 )))
                    {
                        PRINT_NOW( "GI_28", 7500, 0 );
                        ADD_BLIP_FOR_COORD( 1055.55600000, 86.85400000, 33.98700000, ref l_U497 );
                    }
                    if (LOCATE_CHAR_ON_FOOT_3D( sub_4015(), 1055.55600000, 86.85400000, 33.98700000, 1.60000000, 1.60000000, 1.60000000, 1 ))
                    {
                        if (DOES_CHAR_EXIST( l_U503[0] ))
                        {
                            DELETE_CHAR( ref l_U503[0] );
                        }
                        if (DOES_CHAR_EXIST( l_U503[1] ))
                        {
                            DELETE_CHAR( ref l_U503[1] );
                        }
                        if (DOES_CHAR_EXIST( l_U502 ))
                        {
                            DELETE_CHAR( ref l_U502 );
                        }
                        SET_EVERYONE_IGNORE_PLAYER( sub_4471(), 0 );
                        sub_29958();
                        REMOVE_BLIP( l_U497 );
                        if (NOT (IS_CHAR_IN_ANY_CAR( l_U501 )))
                        {
                            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U501, 1054.94600000, 89.40510000, 32.42070000, 2, 40000, 1.00000000 );
                        }
                        REMOVE_CHAR_FROM_GROUP( l_U501 );
                        sub_32146( "GI_44", 7500 );
                        REMOVE_BLIP( l_U497 );
                        ADD_BLIP_FOR_COORD( 1062.30000000, 88.63230000, 33.24610000 + 1.60000000, ref l_U497 );
                        CHANGE_BLIP_COLOUR( l_U497, 5 );
                        PRINTNL();
                        PRINTSTRING( "SETTING GUNSHOP TO UNLOCKED" );
                        PRINTNL();
                        g_U64582 = 1;
                        g_U64584 = 1;
                        l_U602 = 20;
                    }
                    else if (NOT l_U570)
                    {
                        sub_26174( "F2_SHOP", ref l_U593, 6, 1 );
                        l_U570 = 1;
                    }
                }
                else if (NOT (sub_43160( l_U501 )))
                {
                    sub_43794( l_U501 );
                }
                if (sub_29336( ref l_U498, ref l_U497, l_U501, 1055.55600000, 86.85400000, 33.98700000, "GI_28", "DIMITRI_BUDDY", "GI_28" ))
                {
                    if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "GI_28", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
                    {
                        if ((g_U64569[1] == 0) || (l_U608))
                        {
                            sub_43993( l_U501 );
                            l_U608 = 1;
                        }
                        else
                        {
                            sub_32219( l_U501, "F2_CAR4", "F2_CAR4", 1 );
                        }
                    }
                    if (LOCATE_CHAR_ON_FOOT_3D( sub_4015(), 1055.55600000, 86.85400000, 33.98700000, 1.60000000, 1.60000000, 1.60000000, 1 ))
                    {
                        ;
                    }
                };;;
            }
            break;
            case 20:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_4015(), 1062.30000000, 88.63230000, 33.24610000 + 1.60000000, 1.60000000, 1.60000000, 1.60000000, 0 ))
            {
                if (DOES_BLIP_EXIST( l_U497 ))
                {
                    REMOVE_BLIP( l_U497 );
                }
                l_U602 = 21;
            }
            else if (DOES_BLIP_EXIST( l_U497 ))
            {
                if ((LOCATE_CHAR_ANY_MEANS_3D( sub_4015(), 1058.23800000, 86.84730000, 34.25310000 + (1.60000000 / 2), 1.60000000, 1.60000000, 1.60000000, 0 )) AND (sub_45039()))
                {
                    REMOVE_BLIP( l_U497 );
                }
            }
            sub_45149();
            sub_45265();;
            break;
            case 21:
            if (g_U15575[60])
            {
                if (DOES_BLIP_EXIST( l_U497 ))
                {
                    REMOVE_BLIP( l_U497 );
                }
                if (DOES_BLIP_EXIST( l_U500 ))
                {
                    REMOVE_BLIP( l_U500 );
                }
                if (DOES_BLIP_EXIST( l_U498 ))
                {
                    REMOVE_BLIP( l_U498 );
                }
                if (NOT (IS_CHAR_DEAD( l_U501 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U501, ref l_U498 );
                    CHANGE_BLIP_COLOUR( l_U498, 3 );
                    CHANGE_BLIP_PRIORITY( l_U498, 2 );
                }
                SETTIMERA( 0 );
                l_U602 = 22;
            }
            else if ((NOT l_U568) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_4015(), 1062.30000000, 88.63230000, 33.24610000 + 1.60000000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
            {
                l_U568 = 1;
            }
            sub_45265();
            sub_45149();;
            break;
            case 22:
            if (IS_CHAR_IN_AREA_3D( sub_4015(), 1057.80000000, 86.00000000, 25.00000000, 1060.70000000, 95.00000000, 50.00000000, 1 ))
            {
                sub_46034( 19 );
                sub_2448( 19, 1 );
                SWITCH_ROADS_OFF( 1352.89000000, -818.88000000, 0.00000000, 1335.31000000, -872.96000000, 100.00000000 );
                PRINT_HELP( "GI_29" );
                l_U602 = 23;
            }
            else if ((sub_28928()) AND (NOT l_U569))
            {
                sub_32146( "GI_39", 7500 );
                l_U569 = 1;
            }
            else
            {
                sub_45149();
            }
            break;
            case 23:
            if (NOT (IS_CHAR_DEAD( l_U501 )))
            {
                if (IS_CHAR_IN_ANY_CAR( l_U501 ))
                {
                    if (sub_20657( sub_4015(), l_U501 ))
                    {
                        GET_PLAYER_GROUP( sub_4471(), ref l_U532 );
                        SET_GROUP_MEMBER( sub_8583(), l_U501 );
                        SET_CHAR_RELATIONSHIP( l_U501, 1, 0 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U501, 1 );
                        REMOVE_BLIP( l_U498 );
                        l_U602 = 24;
                    }
                    else if ((sub_28928()) AND (NOT l_U569))
                    {
                        sub_32146( "GI_39", 7500 );
                        l_U569 = 1;
                    }
                    else
                    {
                        sub_45149();
                    }
                }
                else
                {
                    GET_CHAR_COORDINATES( l_U501, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                    if ((LOCATE_CHAR_ANY_MEANS_3D( sub_4015(), uVar3._fU0, uVar3._fU4, uVar3._fU8, 20.00000000, 20.00000000, 20.00000000, 0 )) AND (HAS_CHAR_SPOTTED_CHAR( sub_4015(), l_U501 )))
                    {
                        GET_PLAYER_GROUP( sub_4471(), ref l_U532 );
                        SET_GROUP_MEMBER( sub_8583(), l_U501 );
                        SET_CHAR_RELATIONSHIP( l_U501, 1, 0 );
                        REMOVE_BLIP( l_U498 );
                        l_U602 = 24;
                    }
                    else if ((sub_28928()) AND (NOT l_U569))
                    {
                        sub_32146( "GI_39", 7500 );
                        l_U569 = 1;
                    }
                    else
                    {
                        sub_45149();
                    }
                }
            }
            break;
            case 24:
            if (NOT (IS_CHAR_DEAD( l_U501 )))
            {
                if (sub_28928())
                {
                    if (NOT l_U561)
                    {
                        if (l_U562)
                        {
                            SWITCH_PED_PATHS_OFF( 1339.70000000, -836.72000000, 0.00000000, 1320.89000000, -854.42000000, 100.00000000 );
                            ADD_SCENARIO_BLOCKING_AREA( 1339.70000000, -836.72000000, 0.00000000, 1320.89000000, -854.42000000, 100.00000000 );
                            SWITCH_ROADS_OFF( 1352.89000000, -818.88000000, 0.00000000, 1335.31000000, -872.96000000, 100.00000000 );
                            SET_CREATE_RANDOM_COPS( 1 );
                            PRINT_NOW( "GI_34", 7500, 0 );
                            l_U561 = 1;
                        }
                    }
                }
                if (NOT l_U562)
                {
                    sub_26174( "F2_CAR5", ref l_U593, 6, 1 );
                    if (DOES_BLIP_EXIST( l_U497 ))
                    {
                        REMOVE_BLIP( l_U497 );
                    }
                    ADD_BLIP_FOR_COORD( 1340.83600000, -846.45690000, 9.23770000, ref l_U497 );
                    CHANGE_BLIP_COLOUR( l_U497, 5 );
                    SET_ROUTE( l_U497, 1 );
                    l_U562 = 1;
                }
                if (l_U562)
                {
                    if (sub_29336( ref l_U498, ref l_U497, l_U501, 1340.83600000, -846.45690000, 9.23770000, "GI_34", "DIMITRI_BUDDY", "GI_34" ))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_4015(), 1340.83600000, -846.45690000, 9.23770000, 2.50000000, 2.50000000, 2.50000000, 1 ))
                        {
                            if (sub_24121( 1, 1 ))
                            {
                                sub_29958();
                                REMOVE_BLIP( l_U497 );
                                l_U559 = 1;
                                if (IS_CHAR_IN_ANY_CAR( sub_4015() ))
                                {
                                    sub_24432( "F2_END" );
                                }
                                else
                                {
                                    sub_47124( "F2_END" );
                                }
                                sub_9038();
                            }
                        }
                        else if (((l_U561) AND (NOT IS_MESSAGE_BEING_DISPLAYED())) AND (l_U572))
                        {
                            if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "GI_34", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
                            {
                                sub_32219( l_U501, "F2_CAR6", "F2_CAR8", 2 );
                            }
                        }
                    }
                }
                if (IS_THIS_PRINT_BEING_DISPLAYED( "GI_34", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                {
                    l_U572 = 1;
                }
            }
            break;
            case 25:
            sub_22522();
            break;
        }
    }
    sub_2269();
    return;
}

void sub_167()
{
    sub_176();
    return;
}

void sub_176()
{
    int iVar2;

    iVar2 = 4;
    sub_190( iVar2 );
    sub_1366( iVar2 );
    return;
}

void sub_190(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13312[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U739)
    {
        sub_234();
        sub_395();
    }
    else if (NOT g_U10902[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_503();
            sub_542();
        }
    }
    sub_618();
    sub_719();
    uVar5 = sub_832( uParam0 );
    sub_1273( uVar5, 0 );
    return;
}

void sub_234()
{
    sub_248( g_U9852 );
    if (NOT g_U9814._fU24)
    {
        sub_348();
    }
    return;
}

void sub_248(int iParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    iVar3 = g_U26679[iParam0]._fU100;
    iVar3--;
    g_U26679[iParam0]._fU100 = iVar3;
    DECREMENT_INT_STAT( 255, 1 );
    return;
}

void sub_348()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_395()
{
    sub_404();
    return;
}

void sub_404()
{
    if (COMPARE_STRING( ref g_U9847, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9847 );
    StrCopy( ref g_U9847, "", 16 );
    return;
}

void sub_503()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_542()
{
    sub_551();
    return;
}

void sub_551()
{
    if (COMPARE_STRING( ref g_U9847, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9847 );
    StrCopy( ref g_U9847, "", 16 );
    return;
}

void sub_618()
{
    int I;

    I = 0;
    for ( I = 0; I < 28; I++ )
    {
        if (g_U10902[I]._fU144._fU36)
        {
            g_U10902[I]._fU28 = 1;
        }
        g_U10902[I]._fU144._fU36 = 0;
    }
    return;
}

void sub_719()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_741();
    if (iVar3 > g_U63909._fU4)
    {
        g_U63909._fU4 = iVar3;
        g_U63909._fU8 = iVar2;
    }
    return;
}

int sub_741()
{
    if (g_U15575[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_832(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 1: return 1;
        case 2: return 2;
        case 3: return 3;
        case 4: return 4;
        case 5: return 5;
        case 6: return 6;
        case 7: return 7;
        case 8: return 8;
        case 9: return 9;
        case 10: return 10;
        case 11: return 11;
        case 12: return 12;
        case 13: return 13;
        case 14: return 14;
        case 15: return 15;
        case 16: return 16;
        case 17: return 17;
        case 18: return 18;
        case 19: return 19;
        case 20: return 22;
        case 21: return 20;
        case 22: return 21;
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_1231( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1231(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1273(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 57))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U26592[iParam0] = iVar4;
    if (bParam1)
    {
        g_U26592[iParam0] += 30000;
    }
    return;
}

void sub_1366(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1375();
    if (g_U0)
    {
        return;
    }
    if (g_U18._fU40 == 0)
    {
        return;
    }
    if (NOT g_U10899)
    {
        return;
    }
    iVar3 = g_U13312[iParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (bVar4)
    {
        return;
    }
    if (g_U10902[iParam0]._fU12)
    {
        return;
    }
    if (g_U9814._fU40 == -1)
    {
        return;
    }
    if (NOT (g_U9814._fU40 == iParam0))
    {
        return;
    }
    if (NOT g_U739)
    {
        sub_2142();
        g_U9814._fU4 = 1;
    }
    return;
}

void sub_1375()
{
    int I;

    for ( I = 0; I <= (g_U495 - 1); I++ )
    {
        if (((sub_1413( 5, g_U495[I] )) == 1) AND (g_U495[I]._fU20))
        {
            if ((sub_1413( 1, g_U495[I] )) != 0)
            {
                sub_1699( I );
            }
        }
    }
    if (NOT sub_1865())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U18._fU404 = 1000;
    }
    if (g_U18._fU0 == 1014)
    {
        g_U18._fU92 = 1;
    }
    return;
}

int sub_1413(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    switch (uParam0)
    {
        case 0:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 14, 23 );
        break;
        case 1:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 0, 13 );
        break;
        case 2:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 14, 27 );
        break;
        case 3:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 0, 13 );
        break;
        case 4:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 27 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return uParam1._fU0[2];
        break;
    }
    return -1;
}

void sub_1699(int iParam0)
{
    int I;

    if (iParam0 < (g_U495 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U495 - 1); I++ )
        {
            g_U495[I - 1] = {g_U495[I]};
        }
    }
    sub_1784( g_U495 - 1 );
    return;
}

void sub_1784(unknown uParam0)
{
    g_U495[uParam0]._fU0[0] = -1;
    g_U495[uParam0]._fU0[1] = -1;
    g_U495[uParam0]._fU0[2] = -1;
    return;
}

int sub_1865()
{
    int I;

    for ( I = 0; I <= (g_U495 - 1); I++ )
    {
        if ((sub_1413( 4, g_U495[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2142()
{
    g_U9814._fU4 = 0;
    g_U9814._fU8 = 0;
    g_U9814._fU12 = 0;
    g_U9814._fU16 = 0;
    g_U9814._fU20 = 0;
    g_U9814._fU28 = 0;
    g_U9814._fU32 = 0;
    g_U9814._fU36 = 0;
    g_U9814._fU48 = 0;
    return;
}

void sub_2269()
{
    g_U9132 = 0;
    SET_CREATE_RANDOM_COPS( 1 );
    if (NOT (IS_CHAR_DEAD( l_U501 )))
    {
        TASK_CLEAR_LOOK_AT( l_U501 );
    }
    if (NOT (IS_CHAR_DEAD( l_U502 )))
    {
        TASK_CLEAR_LOOK_AT( l_U502 );
    }
    if (NOT (IS_CHAR_DEAD( l_U503[0] )))
    {
        TASK_CLEAR_LOOK_AT( l_U503[0] );
    }
    if (NOT (IS_CHAR_DEAD( l_U503[1] )))
    {
        TASK_CLEAR_LOOK_AT( l_U503[1] );
    }
    REMOVE_ANIMS( "missfaustin2" );
    sub_2448( 19, 0 );
    sub_4326();
    SET_MAX_WANTED_LEVEL( 6 );
    CLEAR_HELP();
    SWITCH_PED_ROADS_BACK_TO_ORIGINAL( 778.00000000, -544.88000000, -100.00000000, 804.36000000, -527.68000000, 100.00000000 );
    SWITCH_PED_ROADS_BACK_TO_ORIGINAL( 1048.65600000, 83.25700000, 0.00000000, 1057.37500000, 83.25700000, 100.00000000 );
    FLUSH_SCENARIO_BLOCKING_AREAS();
    if (IS_PLAYER_PLAYING( sub_4471() ))
    {
        SET_EVERYONE_IGNORE_PLAYER( sub_4471(), 0 );
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_4015(), 1 );
    }
    g_U9251 = 0;
    g_U15575[60] = 0;
    g_U64582 = 0;
    sub_4565();
    sub_4603( ref l_U593, 0 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2448(unknown uParam0, unknown uParam1)
{
    g_U10054._fU84[uParam0] = uParam1;
    sub_2472();
    return;
}

void sub_2472()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    for ( I = 0; I < 15; I++ )
    {
        iVar3 = sub_2500( 13 );
        if ((sub_2545( 13, iVar3 )) AND (g_U9853[g_U9920[I]._fU0]._fU0))
        {
            sub_2646( ref g_U9920[I]._fU20, g_U9920[I]._fU4, 4, 60 );
        }
        else
        {
            sub_2830( ref g_U9920[I]._fU20 );
        }
    }
    for ( I = 0; I < 7; I++ )
    {
        iVar3 = sub_2500( 11 );
        if ((sub_2545( 11, iVar3 )) AND (g_U9853[g_U10011[I]._fU0]._fU0))
        {
            sub_2646( ref g_U10011[I]._fU20, g_U10011[I]._fU4, 4, 62 );
        }
        else
        {
            sub_2830( ref g_U10011[I]._fU20 );
        }
    }
    for ( I = 0; I < 59; I++ )
    {
        iVar3 = sub_3024( I );
        if ((sub_2545( g_U10245[I]._fU12, iVar3 )) AND (g_U9853[g_U10245[I]._fU28]._fU0))
        {
            sub_2646( ref g_U10245[I]._fU32, g_U10245[I]._fU0, g_U10245[I]._fU24, g_U10245[I]._fU20 );
            sub_3332( I );
        }
        else
        {
            sub_2830( ref g_U10245[I]._fU32 );
            g_U10054._fU520[I] = 0;
        }
    }
    sub_3561();
    return;
}

int sub_2500(unknown uParam0)
{
    if (g_U10054._fU84[uParam0])
    {
        return 1;
    }
    return 0;
}

int sub_2545(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        return 1;
    }
    if (g_U10054._fU0[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_2646(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4, unknown uParam5)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        if ((((iParam4 == 2) || (iParam4 == 3)) || (iParam4 == 4)) || (iParam4 == 1))
        {
            ADD_BLIP_FOR_COORD( uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0 );
        }
        else
        {
            ADD_BLIP_FOR_CONTACT( uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0 );
        }
        CHANGE_BLIP_SPRITE( (uParam0^), uParam5 );
        CHANGE_BLIP_PRIORITY( (uParam0^), l_U4 );
        if (iParam4 == 3)
        {
            CHANGE_BLIP_DISPLAY( (uParam0^), 3 );
        }
        if (iParam4 == 4)
        {
            CHANGE_BLIP_DISPLAY( (uParam0^), 5 );
        }
    }
    return;
}

void sub_2830(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP( (uParam0^) );
    (uParam0^) = nil;
    return;
}

int sub_3024(unknown uParam0)
{
    unknown uVar3;

    if (g_U10054._fU280[uParam0])
    {
        return 1;
    }
    if (sub_3066( g_U10245[uParam0]._fU16 ))
    {
        return 1;
    }
    if (sub_2500( g_U10245[uParam0]._fU12 ))
    {
        return 1;
    }
    if (NOT g_U10899)
    {
        uVar3 = g_U10245[uParam0]._fU12;
        if (g_U10054._fU0[uVar3])
        {
            if (g_U10245[uParam0]._fU24 == 1)
            {
                if (g_U9858 == g_U10245[uParam0]._fU28)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_3066(unknown uParam0)
{
    if (g_U10054._fU168[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_3332(unknown uParam0)
{
    if (DOES_BLIP_EXIST( g_U10245[uParam0]._fU32 ))
    {
        switch (uParam0)
        {
            case 6:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10245[uParam0]._fU32, "BINCO" );
            break;
            case 37:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10245[uParam0]._fU32, "ZIP" );
            break;
            case 36:
            case 35:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10245[uParam0]._fU32, "PERSEUS" );
            break;
        }
    }
    return;
}

void sub_3561()
{
    int I;
    boolean bVar3;
    int iVar4;
    boolean bVar5;
    boolean bVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    float fVar10;
    float fVar11;
    int iVar12;

    I = 0;
    bVar3 = sub_2500( 13 );
    for ( I = 0; I < 15; I++ )
    {
        sub_3606( g_U9920[I]._fU20, bVar3 );
    }
    bVar3 = sub_2500( 11 );
    for ( I = 0; I < 7; I++ )
    {
        sub_3606( g_U10011[I]._fU20, bVar3 );
    }
    iVar4 = 0;
    for ( I = 0; I < 59; I++ )
    {
        if ((sub_3024( I )) AND (g_U9853[g_U10245[I]._fU28]._fU0))
        {
            iVar4++;
        }
    }
    bVar5 = false;
    if (iVar4 <= 3)
    {
        bVar5 = true;
    }
    for ( I = 0; I < 59; I++ )
    {
        bVar3 = sub_3024( I );
        if (bVar3)
        {
            if (NOT bVar5)
            {
                if (NOT (g_U9858 == g_U10245[I]._fU28))
                {
                    bVar3 = false;
                }
            }
        }
        sub_3606( g_U10245[I]._fU32, bVar3 );
    }
    bVar6 = false;
    for ( I = 0; I < 5; I++ )
    {
        bVar3 = false;
        if (g_U9864[I]._fU0)
        {
            if (g_U9858 == g_U9864[I]._fU40)
            {
                bVar3 = true;
                bVar6 = true;
            }
        }
        sub_3606( g_U9864[I]._fU32, bVar3 );
    }
    fVar10 = 99999.90000000;
    fVar11 = 0.00000000;
    iVar12 = -1;
    if (NOT bVar6)
    {
        if (NOT (IS_CHAR_DEAD( sub_4015() )))
        {
            GET_CHAR_COORDINATES( sub_4015(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
            for ( I = 0; I < 5; I++ )
            {
                if (g_U9864[I]._fU0)
                {
                    fVar11 = sub_4133( uVar7, g_U9864[I]._fU8 );
                    if (fVar11 < fVar10)
                    {
                        fVar10 = fVar11;
                        iVar12 = I;
                    }
                }
            }
        }
        if (NOT (iVar12 == -1))
        {
            for ( I = 0; I < 5; I++ )
            {
                bVar3 = false;
                if (iVar12 == I)
                {
                    bVar3 = true;
                }
                sub_3606( g_U9864[I]._fU32, bVar3 );
            }
        }
    }
    return;
}

void sub_3606(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        SET_BLIP_AS_SHORT_RANGE( uParam0, 0 );
    }
    else
    {
        SET_BLIP_AS_SHORT_RANGE( uParam0, 1 );
    }
    return;
}

void sub_4015()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4133(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

void sub_4326()
{
    if (IS_THREAD_ACTIVE( g_U9161 ))
    {
        DESTROY_THREAD( g_U9161 );
    }
    return;
}

void sub_4471()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_4565()
{
    g_U18._fU100 = 0;
    g_U18._fU104 = 0;
    return;
}

void sub_4603(int iParam0, unknown uParam1)
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

void sub_4762()
{
    LOAD_ADDITIONAL_TEXT( "GUNINTR", 0 );
    LOAD_ADDITIONAL_TEXT( "F2AUD", 6 );
    sub_4813( "F2AUD" );
    sub_4940( 0, sub_4015(), "NIKO", 0 );
    sub_5129( 1341.04500000, -846.67000000, 7.24720000, 0, 1316.30000000, -845.90000000, 9.14000000, 100, -1, 0 );
    if (g_U9814._fU24)
    {
        START_CUTSCENE_NOW( "Fau2_a" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "Fau2_a" );
    }
    g_U9132 = 1;
    g_U9251 = 0;
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U535 );
    N_521945732( 0, ref l_U534 );
    N_521945732( 0, ref l_U533 );
    N_319291829( l_U533, 13 );
    SET_RELATIONSHIP( 5, 24, 0 );
    sub_5600( 25 );
    REQUEST_MODEL( 162883121 );
    REQUEST_ANIMS( "missfaustin2" );
    LOAD_ALL_OBJECTS_NOW();
    while (((NOT (sub_6345( 25 ))) || (NOT (HAS_MODEL_LOADED( 162883121 )))) || (NOT (HAVE_ANIMS_LOADED( "missfaustin2" ))))
    {
        WAIT( 0 );
    }
    CREATE_CAR( 162883121, 1328.32900000, -819.01180000, 7.24070000, ref l_U506, 1 );
    SET_CAR_HEADING( l_U506, 270 );
    CHANGE_CAR_COLOUR( l_U506, 12, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U506, 1, 1 );
    TURN_OFF_VEHICLE_EXTRA( l_U506, 2, 1 );
    SET_CAR_ON_GROUND_PROPERLY( l_U506 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 162883121 );
    SUPPRESS_CAR_MODEL( 162883121 );
    SET_WANTED_MULTIPLIER( 0.20000000 );
    l_U508 = {798.27720000, -539.64300000, 6.52160000};
    l_U511[0] = {797.88070000, -537.02460000, 6.52160000};
    l_U511[1] = {798.66830000, -537.77640000, 6.52160000};
    l_U518 = {795.92000000, -540.64000000, 6.52160000};
    l_U521 = 95.00000000;
    l_U522[0] = 145.00000000;
    l_U522[1] = 120.00000000;
    l_U525 = 326.65910000;
    l_U586 = {787.03500000, -537.12200000, 7.92300000};
    LOAD_SCENE( 1329.14300000, -846.51870000, 7.11060000 );
    SET_CHAR_COORDINATES( sub_4015(), 1329.14300000, -846.51870000, 7.11060000 );
    SET_CHAR_HEADING( sub_4015(), 270.00000000 );
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_4015(), 0 );
    sub_6842( 25, ref l_U501, 1330.51800000, -848.06660000, 7.13190000, 32.00000000 );
    SET_CHAR_NEVER_TARGETTED( l_U501, 1 );
    sub_4940( 1, l_U501, "DIMITRI", 0 );
    SET_PED_DIES_WHEN_INJURED( l_U501, 1 );
    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U501, 1 );
    SET_CHAR_PROP_INDEX( l_U501, 1, 0 );
    GET_PLAYER_GROUP( sub_4471(), ref l_U532 );
    SET_GROUP_MEMBER( sub_8583(), l_U501 );
    SET_CHAR_RELATIONSHIP( l_U501, 1, 0 );
    ADD_BLIP_FOR_COORD( 775.89700000, -548.45300000, 10.81600000, ref l_U497 );
    CHANGE_BLIP_COLOUR( l_U497, 5 );
    SET_ROUTE( l_U497, 1 );
    SET_PLAYER_CONTROL( sub_4471(), 1 );
    SET_CAM_BEHIND_PED( sub_4015() );
    sub_4565();
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    DO_SCREEN_FADE_IN( 500 );
    SWITCH_PED_PATHS_OFF( 778.00000000, -544.88000000, -100.00000000, 804.36000000, -527.68000000, 100.00000000 );
    ADD_SCENARIO_BLOCKING_AREA( 778.00000000, -544.88000000, -100.00000000, 804.36000000, -527.68000000, 100.00000000 );
    SWITCH_PED_PATHS_OFF( 1048.65600000, 83.25700000, 0.00000000, 1057.37500000, 101.25700000, 100.00000000 );
    ADD_SCENARIO_BLOCKING_AREA( 1048.65600000, 83.25700000, 0.00000000, 1057.37500000, 101.25700000, 100.00000000 );
    SET_CREATE_RANDOM_COPS( 0 );
    CLEAR_AREA_OF_COPS( 790, 65001, 30, 50.00000000 );
    CLEAR_AREA_OF_COPS( 1048, 90, 30, 50.00000000 );
    l_U605 = 1;
    l_U602 = 0;
    return;
}

void sub_4813(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_4832();
    return;
}

void sub_4832()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U181._fU16[I]._fU0 = nil;
        StrCopy( ref l_U181._fU16[I]._fU4, "", 32 );
        l_U181._fU344[I] = 0;
    }
    return;
}

void sub_4940(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_5024( "\n PED NUMBER ", uParam0 );
    sub_5064( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_5024(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5064(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5129(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8, boolean bParam9)
{
    unknown uVar12;
    boolean bVar13;
    unknown uVar14;

    uVar14 = TO_FLOAT( iParam8 );
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar12 );
    if (IS_VEH_DRIVEABLE( uVar12 ))
    {
        if (iParam8 > 0)
        {
            if (LOCATE_CAR_3D( uVar12, uParam4._fU0, uParam4._fU4, uParam4._fU8, uVar14, uVar14, uVar14, 0 ))
            {
                SET_CAR_COORDINATES( uVar12, -10, -10, -10 );
                bVar13 = true;
            }
        }
        else if (LOCATE_CAR_3D( uVar12, uParam4._fU0, uParam4._fU4, uParam4._fU8, uParam7, uParam7, uParam7, 0 ))
        {
            SET_CAR_COORDINATES( uVar12, -10, -10, -10 );
            bVar13 = true;
        }
    }
    if (bParam9)
    {
        CLEAR_AREA_OF_CARS( uParam4._fU0, uParam4._fU4, uParam4._fU8, uParam7 );
    }
    else
    {
        CLEAR_AREA( uParam4._fU0, uParam4._fU4, uParam4._fU8, uParam7, 0 );
    }
    if (bVar13)
    {
        CLEAR_AREA( uParam0._fU0, uParam0._fU4, uParam0._fU8, 3.00000000, 0 );
        SET_CAR_HEADING( uVar12, uParam3 );
        SET_CAR_COORDINATES( uVar12, uParam0._fU0, uParam0._fU4, uParam0._fU8 );
    }
    return;
}

void sub_5600(unknown uParam0)
{
    REQUEST_MODEL( sub_5611( uParam0 ) );
    return;
}

int sub_5611(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        if (g_U64385[uParam0] == 2)
        {
            return 558221221;
        }
        return -1992728631;
        case 1: return 896408642;
        case 3:
        if (g_U64385[uParam0] == 1)
        {
            return -1275031987;
        }
        return 1487004273;
        case 4: return 57218969;
        case 5: return 1445589009;
        case 6: return 155063868;
        case 7: return -617264103;
        case 8: return -1729980128;
        case 9: return 1794146792;
        case 11: return 1710545037;
        case 12: return -1775659292;
        case 13: return 1690783035;
        case 14: return 954215094;
        case 15: return 809067472;
        case 16: return 1169442297;
        case 17: return 1872110126;
        case 18: return 1500493064;
        case 19: return -1826458934;
        case 22: return -366421228;
        case 20: return -379234846;
        case 24: return 237511807;
        case 25: return 237497537;
        case 26: return -1040287406;
        case 27: return -357652594;
        case 52: return 2129490787;
        case 53: return 386513184;
        case 2: return -1080659212;
        case 10: return -773750838;
        case 28: return -1788328884;
        case 29: return 1056837725;
        case 30: return -292713088;
        case 31:
        case 32: return -292713088;
    }
    sub_1231( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_6345(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_5611( uParam0 ) );
}

void sub_6842(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_5611( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_6892( uParam0, (uParam1^) );
    return;
}

void sub_6892(unknown uParam0, unknown uParam1)
{
    sub_6904( ref uParam1, uParam0 );
    g_U26361[uParam0]._fU0 = 1;
    g_U26361[uParam0]._fU4 = uParam1;
    return;
}

void sub_6904(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_6998( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_7542( (uParam0^), iParam1, g_U64385[iParam1] );
    }
    return;
}

void sub_6998(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == iParam1)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == iParam2)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == iParam2)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, iParam2, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 2 )) == iParam3)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 2 )) == iParam3)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 2, iParam3, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 5 )) == iParam4)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 5 )) == iParam4)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 5, iParam4, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 4 )) == iParam5)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 4 )) == iParam5)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 4, iParam5, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 3 )) == iParam6)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 3 )) == iParam6)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 3, iParam6, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 7 )) == iParam7)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 7 )) == iParam7)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 7, iParam7, 0 );
        }
        iVar12 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar12 );
        if (NOT (iVar12 == iParam8))
        {
            if (iParam8 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 0 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 0, iParam8 );
            }
        }
        iVar13 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar13 );
        if (NOT (iVar13 == iParam9))
        {
            if (iParam9 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 1 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 1, iParam9 );
            }
        }
    }
    return;
}

void sub_7542(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_6998( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_6998( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_6998( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_6998( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_6998( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_6998( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_6998( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_6998( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_6998( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_6998( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_6998( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_6998( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_6998( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_8583()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_9038()
{
    sub_9047();
    CLEAR_WANTED_LEVEL( sub_4471() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 52 );
    g_U64584 = 1;
    sub_2269();
    return;
}

void sub_9047()
{
    sub_9056();
    return;
}

void sub_9056()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_9074();
    sub_9133( iVar2, iVar3, iVar4 );
    return;
}

void sub_9074()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_9133(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 4;
    sub_9165( iVar5, uParam0, uParam1, uParam2, "Contact_5" );
    return;
}

void sub_9165(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    char[64] cVar9;
    int iVar25;
    int iVar26;
    boolean bVar27;
    unknown uVar28;
    unknown uVar29;
    int iVar30;
    boolean bVar31;

    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U13312[iParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_9261( ref cVar9 );
            return;
        }
        if (g_U13312[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_9261( ref cVar9 );
            return;
        }
        iVar7 = g_U13312[iParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U13312[iParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_9261( ref cVar9 );
            return;
        }
        if (g_U13312[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_9261( ref cVar9 );
            return;
        }
        iVar7 = g_U13312[iParam0]._fU160._fU76;
    }
    else if (g_U13312[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_9261( ref cVar9 );
        return;
    }
    if (g_U13312[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_9261( ref cVar9 );
        return;
    }
    iVar7 = g_U13312[iParam0]._fU0._fU4;
    iVar8 = sub_9838( iParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U10902[iParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U13312[iParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        g_U10902[iParam0]._fU144._fU8++;
        if ((NOT g_U10902[iParam0]._fU144._fU12) AND (g_U10902[iParam0]._fU144._fU8 >= g_U10902[iParam0]._fU144._fU4))
        {
            iVar26 = 0;
            GET_GAME_TIMER( ref iVar26 );
            g_U10902[iParam0]._fU144._fU16 = iVar26 + 60000;
        }
        if (g_U10902[iParam0]._fU144._fU8 == 1)
        {
            if (iParam0 == 3)
            {
                sub_10235( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_10235( 0, 4 );
            }
        }
    }
    if (NOT (sub_10324( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13312[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_4471(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_4471() );
    }
    sub_1375();
    bVar27 = true;
    uVar28 = sub_9838( iParam0, iVar7 );
    uVar29 = sub_832( iParam0 );
    if (bParam1)
    {
        iVar30 = g_U13312[iParam0]._fU0._fU56;
        if ((iVar30 == 5) || (iVar30 == 6))
        {
            bVar27 = false;
        }
        if (NOT g_U0)
        {
            bVar31 = true;
            if (IS_BIT_SET( g_U26679[uVar28]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U9842 );
                sub_19628( 9, ref g_U13312[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10899))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_20058();
                    g_U9835._fU8 = 1;
                    g_U9835._fU20 = sub_20143( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_20200( iParam0 );
                sub_20239( 0 );
                sub_1273( uVar29, 0 );
            }
            g_U10902[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_20347();
        }
    }
    if (bParam2)
    {
        sub_20058();
        sub_20435();
        sub_20239( 0 );
    }
    if (bParam3)
    {
        sub_20058();
        sub_20475();
        sub_20239( 0 );
        sub_1273( uVar29, 0 );
    }
    sub_719();
    return;
}

void sub_9261(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_9838(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_1231( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U32561[iParam0]._fU0;
    iVar5 = g_U32561[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U26679[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

void sub_10235(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15795[uParam0]._fU0 = uParam1;
    g_U15795[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_10324(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_10532( uParam1 );
        break;
        case 1:
        bVar8 = sub_12538( uParam1 );
        break;
        case 2:
        bVar8 = sub_12764( uParam1 );
        break;
        case 3:
        bVar8 = sub_12914( uParam1 );
        break;
        case 4:
        bVar8 = sub_13192( uParam1 );
        break;
        case 5:
        bVar8 = sub_13495( uParam1 );
        break;
        case 6:
        bVar8 = sub_13694( uParam1 );
        break;
        case 7:
        bVar8 = sub_13920( uParam1 );
        break;
        case 8:
        bVar8 = sub_14155( uParam1 );
        break;
        case 9:
        bVar8 = sub_14530( uParam1 );
        break;
        case 10:
        bVar8 = sub_14777( uParam1 );
        break;
        case 11:
        bVar8 = sub_14916( uParam1 );
        break;
        case 12:
        bVar8 = sub_15215( uParam1 );
        break;
        case 13:
        bVar8 = sub_15443( uParam1 );
        break;
        case 14:
        bVar8 = sub_15730( uParam1 );
        break;
        case 15:
        bVar8 = sub_16012( uParam1 );
        break;
        case 16:
        bVar8 = sub_16294( uParam1 );
        break;
        case 17:
        bVar8 = sub_16495( uParam1 );
        break;
        case 18:
        bVar8 = sub_16568( uParam1 );
        break;
        case 19:
        bVar8 = sub_16782( uParam1 );
        break;
        case 20:
        bVar8 = sub_17035( uParam1 );
        break;
        case 21:
        bVar8 = sub_17282( uParam1 );
        break;
        case 22:
        bVar8 = sub_17483( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_12143( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_9838( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13312[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_17806( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_10532(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10811( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_10811( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_10811( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_10811( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_10811( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_10811( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_10811( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_10811( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_10811( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_10811( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_10811( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_10811( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_10811( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_10811( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15575[12])
        {
            sub_10811( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_10811( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_10811( iVar3, 0, 3, 1, 0, 0 );
        break;
        case 3:
        case 30:
        case 14:
        case 37:
        case 18:
        case 19:
        case 17:
        case 21: break;
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        sub_10811( iVar3, 0, sub_12021(), sub_12287(), 0, 0 );
        break;
        default:
        sub_12446( "Friend 1", 1 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12446( "Friend 1", 0 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_10811(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_10822( uParam1 );
    sub_10996( uParam0, 0, uParam2 );
    sub_10996( uParam0, 1, uParam3 );
    sub_10996( uParam0, 2, uParam4 );
    g_U26668[4] += iParam5;
    sub_9074();
    return;
}

void sub_10822(unknown uParam0)
{
    ADD_SCORE( sub_4471(), uParam0 );
    sub_10847( uParam0 );
    return;
}

void sub_10847(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1231( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_10996(unknown uParam0, int iParam1, int iParam2)
{
    g_U10902[uParam0]._fU40[iParam1] += iParam2;
    if (g_U10902[uParam0]._fU40[iParam1] < 0)
    {
        g_U10902[uParam0]._fU40[iParam1] = 0;
    }
    if (g_U10902[uParam0]._fU40[iParam1] > 100)
    {
        g_U10902[uParam0]._fU40[iParam1] = 100;
    }
    if (iParam1 == 1)
    {
        sub_11153( uParam0 );
    }
    return;
}

void sub_11153(unknown uParam0)
{
    if (g_U0)
    {
        return;
    }
    if (IS_BIT_SET( g_U64712, 11 ))
    {
        return;
    }
    if (g_U10902[uParam0]._fU40[1] < 90)
    {
        return;
    }
    switch (uParam0)
    {
        case 0:
        SET_BIT( ref g_U64712, 6 );
        break;
        case 3:
        SET_BIT( ref g_U64712, 7 );
        break;
        case 7:
        SET_BIT( ref g_U64712, 8 );
        break;
        case 8:
        SET_BIT( ref g_U64712, 9 );
        break;
        case 13:
        SET_BIT( ref g_U64712, 10 );
        break;
    }
    if (((((NOT (IS_BIT_SET( g_U64712, 1 ))) || (NOT (IS_BIT_SET( g_U64712, 2 )))) || (NOT (IS_BIT_SET( g_U64712, 3 )))) || (NOT (IS_BIT_SET( g_U64712, 4 )))) || (NOT (IS_BIT_SET( g_U64712, 5 ))))
    {
        return;
    }
    if (NOT (IS_BIT_SET( g_U64712, 7 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( g_U64712, 9 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( g_U64712, 10 )))
    {
        return;
    }
    if (g_U10902[0]._fU8)
    {
        if (NOT (IS_BIT_SET( g_U64712, 6 )))
        {
            return;
        }
    }
    if (g_U10902[7]._fU8)
    {
        if (NOT (IS_BIT_SET( g_U64712, 8 )))
        {
            return;
        }
    }
    SET_BIT( ref g_U64712, 11 );
    AWARD_ACHIEVEMENT( 35 );
    return;
}

int sub_12021()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_12143( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_12143(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_12287()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_12143( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_12446(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_12538(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10811( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10811( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10811( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_10811( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_12446( "Contact 2", 1 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12446( "Contact 2", 0 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12764(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_10811( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_12446( "Girl 3", 1 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12446( "Girl 3", 0 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12914(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10811( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_10811( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_10811( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_10811( iVar3, 0, sub_12021(), sub_12287(), 0, 0 );
        break;
        default:
        sub_12446( "Friend 4", 1 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12446( "Friend 4", 0 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13192(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10811( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10811( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10811( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_10811( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_10811( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_10811( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_10811( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_12446( "Contact 5", 1 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12446( "Contact 5", 0 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13495(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10811( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10811( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10811( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_12446( "Contact 7", 1 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12446( "Contact 7", 0 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13694(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10811( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10811( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10811( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_10811( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_12446( "Contact 7b", 1 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12446( "Contact 7b", 0 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13920(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10811( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_10811( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_10811( iVar3, 0, sub_12021(), sub_12287(), 0, 0 );
        break;
        default:
        sub_12446( "Friend 8", 1 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12446( "Friend 8", 0 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14155(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;

    iVar3 = 8;
    bVar4 = false;
    iVar5 = 500;
    switch (uParam0)
    {
        case 0:
        sub_10811( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_10811( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_10811( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_10811( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_10811( iVar3, iVar5, 3, 1, 0, 0 );
        INCREMENT_INT_STAT_NO_MESSAGE( 109, iVar5 );
        break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        sub_10811( iVar3, 0, sub_12021(), sub_12287(), 0, 0 );
        break;
        default:
        sub_12446( "Friend 9", 1 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12446( "Friend 9", 0 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14530(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 9;
    iVar4 = 7;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_10811( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10811( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15575[39])
        {
            sub_10811( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_10811( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_12446( "Contact 10", 1 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_12446( "Contact 10", 0 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14777(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10811( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_12446( "Girl 11", 1 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12446( "Girl 11", 0 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14916(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10811( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_10811( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_10811( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_10811( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_10811( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_10811( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_12446( "Contact 12", 1 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12446( "Contact 12", 0 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15215(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10811( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10811( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10811( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_10811( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_12446( "Contact 13", 1 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12446( "Contact 13", 0 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15443(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10811( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_10811( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_10811( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_10811( iVar3, 0, sub_12021(), sub_12287(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_12446( "Friend 15", 1 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12446( "Friend 15", 0 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15730(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10811( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10811( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10811( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_10811( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_10811( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_10811( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_12446( "Contact 16", 1 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12446( "Contact 16", 0 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16012(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10811( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10811( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_10811( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_10811( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_10811( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_12446( "Contact 18", 1 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12446( "Contact 18", 0 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16294(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10811( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10811( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10811( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_12446( "Contact 19", 1 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12446( "Contact 19", 0 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16495(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_12446( "Girl 20", 0 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16568(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10811( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10811( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10811( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_12446( "Contact 21", 1 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12446( "Contact 21", 0 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16782(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10811( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10811( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_10811( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_10811( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10811( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_12446( "Contact 22", 1 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12446( "Contact 22", 0 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17035(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_10811( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10811( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_10811( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_10811( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_12446( "Contact 24", 1 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12446( "Contact 24", 0 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17282(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10811( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10811( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10811( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_12446( "Contact 25", 1 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12446( "Contact 25", 0 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17483(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 22;
    iVar4 = 8;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_10811( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_12446( "Girl 26", 1 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_12446( "Girl 26", 0 );
        sub_10811( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_17806(int iParam0, int iParam1)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (iParam1 == -1)
    {
        return;
    }
    if (sub_17854( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_18585( iParam1 );
    }
    return;
}

int sub_17854(int iParam0, int iParam1)
{
    int iVar4;
    boolean bVar5;
    int iVar6;

    if (g_U0)
    {
        return 0;
    }
    if (iParam0 == -1)
    {
        return 0;
    }
    if (iParam1 == -1)
    {
        return 0;
    }
    iVar4 = g_U13312[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U26679[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U26679[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_17994( 0, iVar6 );
            g_U13255[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26679[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_17994(unknown uParam0, int iParam1)
{
    g_U32792[uParam0]._fU4 += iParam1;
    if (g_U32792[uParam0]._fU4 > g_U32792[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32792[uParam0]._fU4 = g_U32792[uParam0]._fU0;
    }
    sub_18176( 0 );
    return;
}

void sub_18176(boolean bParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    boolean bVar7;
    int I;

    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    fVar6 = 0.00000000;
    bVar7 = true;
    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        if (g_U32792[I]._fU4 == g_U32792[I]._fU0)
        {
            fVar4 = g_U32792[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U32792[I]._fU0 );
            fVar6 = TO_FLOAT( g_U32792[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U32792[I]._fU8;
        }
        fVar3 += fVar4;
    }
    if (fVar3 > 100.00000000)
    {
        fVar3 = 99.99000000;
    }
    if (bVar7)
    {
        fVar3 = 100.00000000;
    }
    SET_FLOAT_STAT( 0, fVar3 );
    if (bVar7)
    {
        sub_18431();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT N_604003528()))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_18431()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_18585(int iParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (g_U13255[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U13255[iParam0]._fU4 == g_U13255[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U13255[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U13255[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_18918( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_18918( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_18918( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_18918( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_18918( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_18918( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_18918( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_18918( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_18918( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_18918( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_18918( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_18918( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_18918( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_18918( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_18918( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_18918( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_18918( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_18918( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_18918( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_18918(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_19628(unknown uParam0, unknown uParam1)
{
    sub_19647( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_19647(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

    switch (uParam0)
    {
        case 0:
        PLAYSTATS_INT( "SPRUNK_BOUGHT", uParam1 );
        break;
        case 1:
        PLAYSTATS_INT( "HOTDOG_BOUGHT", uParam1 );
        break;
        case 2:
        PLAYSTATS_INT( "NUTS_BOUGHT", uParam1 );
        break;
        case 3:
        PLAYSTATS_INT( "BURGERS_BOUGHT", uParam1 );
        break;
        case 7:
        PLAYSTATS_INT( "DONATE_BEGGAR", uParam1 );
        break;
        case 8:
        PLAYSTATS_INT( "DONATE_BUSKER", uParam1 );
        break;
        case 4:
        PLAYSTATS_INT( "BSHOT_BOUGHT", uParam1 );
        break;
        case 5:
        PLAYSTATS_INT( "CBELL_BOUGHT", uParam1 );
        break;
        case 6:
        PLAYSTATS_INT( "CAFE_BOUGHT", uParam1 );
        break;
        case 9: break;
    }
    return;
}

void sub_20058()
{
    g_U9835._fU0 = 1;
    g_U9835._fU4 = 0;
    g_U9835._fU8 = 0;
    g_U9835._fU12 = 0;
    g_U9835._fU16 = 0;
    g_U9835._fU20 = 0;
    g_U9835._fU24 = 7;
    return;
}

int sub_20143(int iParam0, int iParam1)
{
    if (iParam0 == 0)
    {
        if (iParam1 == 20)
        {
            return 1;
        }
    }
    return 0;
}

void sub_20200(unknown uParam0)
{
    sub_618();
    g_U10902[uParam0]._fU116 = 0;
    return;
}

void sub_20239(unknown uParam0)
{
    if (g_U9306)
    {
        g_U9306 = 0;
        return;
    }
    g_U9301._fU0 = 1;
    g_U9301._fU4 = uParam0;
    g_U9301._fU8 = 0;
    g_U9301._fU12 = 0;
    g_U9301._fU16 = 0;
    return;
}

void sub_20347()
{
    sub_20356();
    return;
}

void sub_20356()
{
    if (COMPARE_STRING( ref g_U9847, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9847 );
    StrCopy( ref g_U9847, "", 16 );
    return;
}

void sub_20435()
{
    sub_20356();
    return;
}

void sub_20475()
{
    sub_20356();
    StrCopy( ref g_U9847, "FPASS", 16 );
    return;
}

void sub_20626()
{
    if (l_U602 == 0)
    {
        if (sub_20657( sub_4015(), l_U501 ))
        {
            SET_CHAR_COORDINATES( sub_4015(), 782.50510000, -555.73330000, 10.12960000 );
            if (NOT (IS_CAR_DEAD( l_U507 )))
            {
                SET_CAR_HEADING( l_U507, 55.00000000 );
            }
        }
        else
        {
            GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref l_U599, ref l_U590 );
            if (l_U590 == -1)
            {
                REQUEST_MODEL( 2016857647 );
                while (NOT (HAS_MODEL_LOADED( 2016857647 )))
                {
                    WAIT( 0 );
                }
                l_U599 = 2016857647;
            }
            CREATE_CAR( l_U599, 782.50510000, -555.73330000, 10.12960000, ref l_U600, 1 );
            SET_CAR_HEADING( l_U600, 55.00000000 );
            SET_CAR_COORDINATES( l_U600, 782.50510000, -555.73330000, 10.12960000 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U599 );
            WARP_CHAR_INTO_CAR( sub_4015(), l_U600 );
            if (NOT (IS_CHAR_DEAD( l_U501 )))
            {
                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U501, l_U600, 0 );
            }
        }
        SET_CAM_BEHIND_PED( sub_4015() );
    }
    else if ((l_U602 == 18) || (l_U602 == 15))
    {
        if (sub_20657( sub_4015(), l_U501 ))
        {
            SET_CHAR_COORDINATES( sub_4015(), 1066.93000000, 103.55680000, 32.74950000 );
            if (NOT (IS_CAR_DEAD( l_U507 )))
            {
                SET_CAR_HEADING( l_U507, 55.00000000 );
            }
        }
        else
        {
            GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref l_U599, ref l_U590 );
            if (l_U590 == -1)
            {
                REQUEST_MODEL( 2016857647 );
                while (NOT (HAS_MODEL_LOADED( 2016857647 )))
                {
                    WAIT( 0 );
                }
                l_U599 = 2016857647;
            }
            CREATE_CAR( l_U599, 1066.93000000, 103.55680000, 32.74950000, ref l_U600, 1 );
            SET_CAR_HEADING( l_U600, 90.00000000 );
            SET_CAR_COORDINATES( l_U600, 1066.93000000, 103.55680000, 32.74950000 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U599 );
            WARP_CHAR_INTO_CAR( sub_4015(), l_U600 );
            if (NOT (IS_CHAR_DEAD( l_U501 )))
            {
                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U501, l_U600, 0 );
            }
        }
        SET_CAM_BEHIND_PED( sub_4015() );
    }
    else if (l_U602 == 24)
    {
        if (sub_20657( sub_4015(), l_U501 ))
        {
            SET_CHAR_COORDINATES( sub_4015(), 1342.91400000, -828.29490000, 7.33240000 );
            if (NOT (IS_CAR_DEAD( l_U507 )))
            {
                SET_CAR_HEADING( l_U507, 176.00000000 );
            }
        }
        else
        {
            GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref l_U599, ref l_U590 );
            if (l_U590 == -1)
            {
                REQUEST_MODEL( 2016857647 );
                while (NOT (HAS_MODEL_LOADED( 2016857647 )))
                {
                    WAIT( 0 );
                }
                l_U599 = 2016857647;
            }
            CREATE_CAR( l_U599, 1342.91400000, -828.29490000, 7.33240000, ref l_U600, 1 );
            SET_CAR_HEADING( l_U600, 176.00000000 );
            SET_CAR_COORDINATES( l_U600, 1342.91400000, -828.29490000, 7.33240000 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U599 );
            WARP_CHAR_INTO_CAR( sub_4015(), l_U600 );
            if (NOT (IS_CHAR_DEAD( l_U501 )))
            {
                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U501, l_U600, 0 );
            }
        }
        SET_CAM_BEHIND_PED( sub_4015() );
    }
    else if ((((((((((l_U602 == 2) || (l_U602 == 3)) || (l_U602 == 4)) || (l_U602 == 5)) || (l_U602 == 6)) || (l_U602 == 7)) || (l_U602 == 8)) || (l_U602 == 11)) || (l_U602 == 12)) || (l_U602 == 13))
    {
        if (DOES_BLIP_EXIST( l_U497 ))
        {
            REMOVE_BLIP( l_U497 );
        }
        if (DOES_BLIP_EXIST( l_U498 ))
        {
            REMOVE_BLIP( l_U498 );
        }
        if (DOES_BLIP_EXIST( l_U499 ))
        {
            REMOVE_BLIP( l_U499 );
        }
        ADD_BLIP_FOR_COORD( 1052.19100000, 91.74400000, 33.43440000, ref l_U497 );
        CHANGE_BLIP_COLOUR( l_U497, 5 );
        SET_ROUTE( l_U497, 1 );
        if (NOT (IS_CHAR_DEAD( l_U501 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U501 );
            GET_PLAYER_GROUP( sub_4471(), ref l_U532 );
            SET_GROUP_MEMBER( sub_8583(), l_U501 );
            SET_CHAR_RELATIONSHIP( l_U501, 1, 0 );
        }
        l_U602 = 18;
        if (sub_20657( sub_4015(), l_U501 ))
        {
            SET_CHAR_COORDINATES( sub_4015(), 1066.93000000, 103.55680000, 32.74950000 );
            if (NOT (IS_CAR_DEAD( l_U507 )))
            {
                SET_CAR_HEADING( l_U507, 55.00000000 );
            }
        }
        else
        {
            GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref l_U599, ref l_U590 );
            if (l_U590 == -1)
            {
                REQUEST_MODEL( 2016857647 );
                while (NOT (HAS_MODEL_LOADED( 2016857647 )))
                {
                    WAIT( 0 );
                }
                l_U599 = 2016857647;
            }
            CREATE_CAR( l_U599, 1066.93000000, 103.55680000, 32.74950000, ref l_U600, 1 );
            SET_CAR_HEADING( l_U600, 90.00000000 );
            SET_CAR_COORDINATES( l_U600, 1066.93000000, 103.55680000, 32.74950000 );
            WARP_CHAR_INTO_CAR( sub_4015(), l_U600 );
            if (NOT (IS_CHAR_DEAD( l_U501 )))
            {
                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U501, l_U600, 0 );
            }
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U600 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U599 );
        }
        SET_CAM_BEHIND_PED( sub_4015() );
    };;;;
    return;
}

int sub_20657(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar4 );
            if (IS_VEH_DRIVEABLE( uVar4 ))
            {
                if (NOT (IS_CHAR_INJURED( uParam1 )))
                {
                    if (IS_CHAR_IN_CAR( uParam1, uVar4 ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_22422()
{
    if ((((l_U602 == 2) || (l_U602 == 3)) || (l_U602 == 4)) || (l_U602 == 5))
    {
        if (((IS_CHAR_INJURED( l_U502 )) || (IS_CHAR_INJURED( l_U503[0] ))) || (IS_CHAR_INJURED( l_U503[1] )))
        {
            l_U604 = 2;
            sub_22522();
        }
    }
    else if (((((((l_U602 == 6) || (l_U602 == 7)) || (l_U602 == 8)) || (l_U602 == 9)) || (l_U602 == 10)) || (l_U602 == 11)) || (l_U602 == 12))
    {
        if ((IS_CHAR_INJURED( l_U502 )) || (IS_CHAR_INJURED( l_U503[0] )))
        {
            l_U604 = 2;
            sub_22522();
        }
    }
    else if (l_U602 == 13)
    {
        if ((IS_CHAR_DEAD( l_U502 )) || (IS_CHAR_INJURED( l_U503[0] )))
        {
            l_U604 = 2;
            sub_22522();
        }
    };;;
    return;
}

void sub_22522()
{
    l_U574 = 1;
    l_U602 = 25;
    CLEAR_HELP();
    switch (l_U604)
    {
        case 0:
        if (NOT (IS_CHAR_DEAD( l_U501 )))
        {
            DELETE_CHAR( ref l_U501 );
        }
        PRINT_NOW( "GI_FAIL_1", 7000, 1 );
        sub_22675( 4, "F2_FAIL1", "F2AUD", 0 );
        sub_23261();
        sub_23571();
        break;
        case 1:
        sub_23799( 25, l_U501, 4 );
        PRINT_NOW( "GI_FAIL_2", 7000, 1 );
        sub_22675( 4, "F2_CDDEAD", "F2AUD", 0 );
        sub_23261();
        sub_23571();
        break;
        case 2:
        if (NOT l_U603)
        {
            CLEAR_PRINTS();
            if (l_U592)
            {
                PRINT_NOW( "GI_FAIL_6", 7000, 1 );
            }
            else
            {
                PRINT_NOW( "GI_FAIL_3", 7000, 1 );
            }
            if (NOT (IS_CHAR_DEAD( l_U501 )))
            {
                SET_CHAR_PROOFS( l_U501, 1, 1, 1, 1, 1 );
            }
            sub_23261();
            l_U603 = 1;
        }
        else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "GI_FAIL_6", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
        {
            if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "GI_FAIL_3", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
            {
                if (((l_U573) AND (sub_24121( 1, 1 ))) AND (NOT IS_SCREEN_FADING()))
                {
                    sub_24432( "F2_FSHOP" );
                    sub_22675( 4, "F2_FAIL3", "F2AUD", 0 );
                    sub_23571();
                }
            }
        }
        break;
        case 3:
        if (NOT l_U603)
        {
            CLEAR_PRINTS();
            PRINT_NOW( "GI_FAIL_4", 7000, 1 );
            if (NOT (IS_CHAR_DEAD( l_U501 )))
            {
                SET_CHAR_PROOFS( l_U501, 1, 1, 1, 1, 1 );
            }
            l_U603 = 1;
        }
        else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "GI_FAIL_4", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
        {
            if (((l_U573) AND (sub_24121( 1, 1 ))) AND (NOT IS_SCREEN_FADING()))
            {
                sub_24432( "F2_FSHOP" );
                sub_22675( 4, "F2_HURT", "F2AUD", 0 );
                sub_23571();
            }
        }
        break;
        case 4:
        if (NOT l_U603)
        {
            CLEAR_PRINTS();
            PRINT_NOW( "GI_FAIL_5", 7000, 1 );
            if (NOT (IS_CHAR_DEAD( l_U501 )))
            {
                SET_CHAR_PROOFS( l_U501, 1, 1, 1, 1, 1 );
            }
            sub_23261();
            l_U603 = 1;
        }
        else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "GI_FAIL_5", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
        {
            if (((l_U573) AND (sub_24121( 1, 1 ))) AND (NOT IS_SCREEN_FADING()))
            {
                sub_24432( "F2_FSHOP" );
                sub_22675( 4, "F2_FAIL4", "F2AUD", 0 );
                sub_23571();
            }
        }
        break;
    }
    return;
}

void sub_22675(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[12] cVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref cVar6, 2);
    StrCopy( ref cVar6[0], uParam1, 16 );
    StrCopy( ref cVar6[1], "END", 16 );
    sub_22719( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_22719(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
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
    int I;
    int iVar38;

    array(ref uVar8._fU32, 5);
    ref uVar8;
    iVar38 = uVar8._fU32;
    if (NOT (IS_THREAD_ACTIVE( g_U738 )))
    {
        uVar8._fU12 = uParam0;
        if ((uParam1^) > iVar38)
        {
            SCRIPT_ASSERT( "TELL SIMON END CALL ARRAY SIZE NEEDS INCREASING" );
            return;
        }
        for ( I = 0; I <= ((uParam1^) - 1); I++ )
        {
            uVar8._fU32[I] = {(uParam1^)[I]};
        }
        if ((uParam1^) < iVar38)
        {
            StrCopy( ref uVar8._fU32[(uParam1^)], "END", 16 );
        }
        StrCopy( ref uVar8._fU16, uParam2, 16 );
        uVar8._fU0 = uParam3;
        uVar8._fU4 = uParam4;
        uVar8._fU8 = uParam5;
        REQUEST_SCRIPT( "SPcellphoneEndCall" );
        while (NOT (HAS_SCRIPT_LOADED( "SPcellphoneEndCall" )))
        {
            REQUEST_SCRIPT( "SPcellphoneEndCall" );
            WAIT( 0 );
        }
        g_U737 = 1;
        g_U738 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

void sub_23261()
{
    if (DOES_BLIP_EXIST( l_U497 ))
    {
        REMOVE_BLIP( l_U497 );
    }
    if (DOES_BLIP_EXIST( l_U498 ))
    {
        REMOVE_BLIP( l_U498 );
    }
    if (DOES_BLIP_EXIST( l_U499 ))
    {
        REMOVE_BLIP( l_U499 );
    }
    if (DOES_BLIP_EXIST( l_U500 ))
    {
        REMOVE_BLIP( l_U500 );
    }
    if (NOT (IS_CHAR_INJURED( l_U502 )))
    {
        TASK_SMART_FLEE_CHAR( l_U502, sub_4015(), 2000, -2 );
        SET_CHAR_KEEP_TASK( l_U502, 1 );
    }
    if (NOT (IS_CHAR_INJURED( l_U503[1] )))
    {
        TASK_SMART_FLEE_CHAR( l_U503[1], sub_4015(), 2000, -2 );
        SET_CHAR_KEEP_TASK( l_U503[1], 1 );
    }
    if (NOT (IS_CHAR_INJURED( l_U503[0] )))
    {
        TASK_SMART_FLEE_CHAR( l_U503[0], sub_4015(), 2000, -2 );
        SET_CHAR_KEEP_TASK( l_U503[0], 1 );
    }
    return;
}

void sub_23571()
{
    g_U64584 = 0;
    g_U15575[60] = 0;
    if (g_U9851 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_4471(), 150 );
        SAY_AMBIENT_SPEECH( sub_4015(), "MISSION_FAIL_RAGE", 1, 1, 0 );
    }
    sub_23661();
    sub_2269();
    return;
}

void sub_23661()
{
    sub_23670();
    return;
}

void sub_23670()
{
    int iVar2;

    iVar2 = 4;
    sub_23684( iVar2 );
    sub_1366( iVar2 );
    return;
}

void sub_23684(unknown uParam0)
{
    if (g_U10902[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_4471(), 150 );
    CLEAR_HELP();
    sub_190( uParam0 );
    return;
}

void sub_23799(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U64463._fU0 = uParam0;
    g_U64463._fU4 = uParam1;
    g_U64463._fU8 = uParam2;
    return;
}

int sub_24121(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_4015() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4015(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_4015() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4015(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_4015()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_4015() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_4015() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_4471() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_4471() )))
    {
        return 0;
    }
    return 1;
}

void sub_24432(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    unknown uVar5;
    int iVar6;
    unknown uVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;

    while ((NOT bVar3) AND (NOT bVar4))
    {
        WAIT( 0 );
        GET_GAME_TIMER( ref iVar9 );
        if (iVar6 != 0)
        {
            iVar10 = iVar9 - iVar8;
        }
        if (((iVar10 >= 1000) AND (sub_24496())) AND (IS_SCREEN_FADED_IN()))
        {
            if (NOT IS_SCREEN_FADED_OUT())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            if (DOES_CHAR_EXIST( l_U501 ))
            {
                DELETE_CHAR( ref l_U501 );
            }
            DO_SCREEN_FADE_IN( 500 );
            bVar4 = true;
        }
        else
        {
            switch (iVar6)
            {
                case 0:
                sub_24693();
                SET_PLAYER_CONTROL( sub_4471(), 0 );
                if (NOT l_U559)
                {
                    if (NOT IS_SCREEN_FADED_OUT())
                    {
                        DO_SCREEN_FADE_OUT( 500 );
                        while (NOT IS_SCREEN_FADED_OUT())
                        {
                            WAIT( 0 );
                        }
                    }
                }
                while (NOT sub_24807())
                {
                    WAIT( 0 );
                }
                CLEAR_SMALL_PRINTS();
                SET_WIDESCREEN_BORDERS( 1 );
                DISPLAY_HUD( 0 );
                SWITCH_PED_PATHS_OFF( 1339.70000000, -836.72000000, 0.00000000, 1320.89000000, -854.42000000, 100.00000000 );
                ADD_SCENARIO_BLOCKING_AREA( 1339.70000000, -836.72000000, 0.00000000, 1320.89000000, -854.42000000, 100.00000000 );
                SWITCH_ROADS_OFF( 1352.89000000, -818.88000000, 0.00000000, 1335.31000000, -872.96000000, 100.00000000 );
                if (NOT l_U559)
                {
                    if (IS_CHAR_IN_ANY_CAR( sub_4015() ))
                    {
                        GET_CAR_CHAR_IS_USING( sub_4015(), ref uVar7 );
                        if (NOT (IS_CHAR_DEAD( l_U501 )))
                        {
                            if (NOT (IS_CHAR_IN_CAR( l_U501, uVar7 )))
                            {
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U501, uVar7, 0 );
                            }
                        }
                    }
                    else if (IS_VEH_DRIVEABLE( l_U507 ))
                    {
                        GET_NUMBER_OF_PASSENGERS( l_U507, ref iVar11 );
                        GET_DRIVER_OF_CAR( l_U507, ref iVar12 );
                    }
                    if (((IS_VEH_DRIVEABLE( l_U507 )) AND (iVar12 == nil)) AND (iVar11 < 1))
                    {
                        uVar7 = l_U507;
                        if (NOT (IS_CHAR_DEAD( l_U501 )))
                        {
                            if (NOT (IS_CHAR_IN_CAR( l_U501, uVar7 )))
                            {
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U501, uVar7, 0 );
                            }
                        }
                        WARP_CHAR_INTO_CAR( sub_4015(), uVar7 );
                    }
                    else
                    {
                        REQUEST_MODEL( 2016857647 );
                        while (NOT (HAS_MODEL_LOADED( 2016857647 )))
                        {
                            WAIT( 0 );
                        }
                        CREATE_CAR( 2016857647, 1341.09200000, -846.97060000, 7.24930000, ref uVar7, 1 );
                        WARP_CHAR_INTO_CAR( sub_4015(), uVar7 );
                        if (NOT (IS_CHAR_DEAD( l_U501 )))
                        {
                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U501, uVar7, 0 );
                        }
                    }
                    SET_CAR_HEADING( uVar7, 180.50000000 );
                    SET_CAR_COORDINATES( uVar7, 1341.09200000, -846.97060000, 7.24930000 );
                    SET_CAR_ON_GROUND_PROPERLY( uVar7 );
                }
                if (NOT l_U559)
                {
                    CLEAR_AREA( 1340.83600000, -846.45690000, 9.23770000, 40, 1 );
                    LOAD_SCENE( 1340.83600000, -846.45690000, 9.23770000 );
                }
                BEGIN_CAM_COMMANDS( ref l_U541 );
                CREATE_CAM( 14, ref l_U537[0] );
                SET_CAM_POS( l_U537[0], 1349.61000000, -861.14040000, 8.52514500 );
                SET_CAM_ROT( l_U537[0], 2.62061200, -0.00000000, 46.25328000 );
                SET_CAM_FOV( l_U537[0], 46 );
                CREATE_CAM( 14, ref l_U537[1] );
                SET_CAM_POS( l_U537[1], 1349.61000000, -861.14040000, 8.52514500 );
                SET_CAM_ROT( l_U537[1], 2.62061200, -0.00000000, 46.25328000 );
                SET_CAM_FOV( l_U537[1], 42 );
                CREATE_CAM( 3, ref l_U536 );
                SET_CAM_ACTIVE( l_U537[0], 1 );
                SET_CAM_PROPAGATE( l_U537[0], 1 );
                SET_CAM_ACTIVE( l_U537[1], 1 );
                SET_CAM_PROPAGATE( l_U537[1], 1 );
                SET_CAM_ACTIVE( l_U536, 1 );
                SET_CAM_PROPAGATE( l_U536, 1 );
                SET_CAM_INTERP_STYLE_CORE( l_U536, l_U537[0], l_U537[1], 9000, 0 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                if (NOT (IS_CHAR_DEAD( l_U501 )))
                {
                    FREEZE_CHAR_POSITION( l_U501, 0 );
                    GET_PED_BONE_POSITION( sub_4015(), 0, 0.00000000, 0.00000000, 0.00000000, ref l_U576[0] );
                    OPEN_SEQUENCE_TASK( ref l_U589 );
                    TASK_PAUSE( 0, 2000 );
                    TASK_LEAVE_ANY_CAR( 0 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1325.59000000, -846.73000000, 7.97000000, 2, 20000, 0.50000000 );
                    CLOSE_SEQUENCE_TASK( l_U589 );
                    TASK_PERFORM_SEQUENCE( l_U501, l_U589 );
                    CLEAR_SEQUENCE_TASK( l_U589 );
                    TASK_LOOK_AT_CHAR( sub_4015(), l_U501, 14000, 0 );
                }
                if (NOT l_U559)
                {
                    APPLY_FORCE_TO_CAR( uVar7, 1, 0, 0, 0.10000000, 0, 0, 0, 0, 0, 0, 0 );
                    WAIT( 1000 );
                    DO_SCREEN_FADE_IN( 500 );
                }
                GET_GAME_TIMER( ref iVar8 );
                SETTIMERA( 0 );
                iVar6++;
                break;
                case 1:
                if (TIMERA() > 500)
                {
                    sub_26174( uParam0, ref l_U593, 6, 1 );
                    iVar6++;
                }
                break;
                case 2:
                if (NOT (IS_CHAR_DEAD( l_U501 )))
                {
                    if ((LOCATE_CHAR_ANY_MEANS_3D( l_U501, 1325.59000000, -846.73000000, 7.97000000, 8, 8, 8, 0 )) || (TIMERA() > 14000))
                    {
                        DELETE_CHAR( ref l_U501 );
                        bVar3 = true;
                    }
                }
                break;
            }
        }
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    SET_CAM_ACTIVE( l_U537[0], 0 );
    SET_CAM_PROPAGATE( l_U537[0], 0 );
    SET_CAM_ACTIVE( l_U537[1], 0 );
    SET_CAM_PROPAGATE( l_U537[1], 0 );
    SET_CAM_ACTIVE( l_U536, 0 );
    SET_CAM_PROPAGATE( l_U536, 0 );
    DESTROY_CAM( l_U536 );
    DESTROY_CAM( l_U537[0] );
    DESTROY_CAM( l_U537[1] );
    SET_WIDESCREEN_BORDERS( 0 );
    END_CAM_COMMANDS( ref l_U541 );
    sub_24693();
    TASK_CLEAR_LOOK_AT( sub_4015() );
    SET_WIDESCREEN_BORDERS( 0 );
    DISPLAY_HUD( 1 );
    SET_PLAYER_CONTROL( sub_4471(), 1 );
    sub_4565();
    SET_CAM_BEHIND_PED( sub_4015() );
    return;
}

int sub_24496()
{
    if ((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_24693()
{
    sub_4603( ref l_U593, 0 );
    CLEAR_SMALL_PRINTS();
    CLEAR_HELP();
    return;
}

void sub_24807()
{
    return sub_24818( 1, 1 );
}

int sub_24818(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U18._fU104 = 1;
    }
    if ((uParam1) AND (g_U482 != 9))
    {
        g_U18._fU100 = 1;
    }
    return 1;
}

void sub_26174(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_26197( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_26197(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_26251( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_26251(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_26273( iParam1 )))
    {
        return 0;
    }
    l_U181._fU384 = 0;
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
    sub_26963( ref g_U8321, ref l_U181 );
    StrCopy( ref g_U8321._fU0, uParam7, 16 );
    g_U8321._fU388 = uParam8;
    g_U8320 = 1;
    return 1;
}

int sub_26273(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_26350( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_26350( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_26350( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_26350(unknown uParam0)
{
    return;
}

void sub_26963(int iParam0, int iParam1)
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

void sub_28114()
{
    boolean bVar2;

    if (((((l_U602 == 2) || (l_U602 == 3)) || (l_U602 == 4)) || (l_U602 == 5)) || (l_U602 == 6))
    {
        bVar2 = false;
        GET_AMMO_IN_CHAR_WEAPON( sub_4015(), 7, ref l_U590 );
        if (l_U590 == 0)
        {
            GET_AMMO_IN_CHAR_WEAPON( sub_4015(), 9, ref l_U590 );
            if (l_U590 == 0)
            {
                GET_AMMO_IN_CHAR_WEAPON( sub_4015(), 10, ref l_U590 );
                if (l_U590 == 0)
                {
                    GET_AMMO_IN_CHAR_WEAPON( sub_4015(), 11, ref l_U590 );
                    if (l_U590 == 0)
                    {
                        GET_AMMO_IN_CHAR_WEAPON( sub_4015(), 12, ref l_U590 );
                        if (l_U590 == 0)
                        {
                            GET_AMMO_IN_CHAR_WEAPON( sub_4015(), 13, ref l_U590 );
                            if (l_U590 == 0)
                            {
                                GET_AMMO_IN_CHAR_WEAPON( sub_4015(), 14, ref l_U590 );
                                if (l_U590 == 0)
                                {
                                    GET_AMMO_IN_CHAR_WEAPON( sub_4015(), 15, ref l_U590 );
                                    if (l_U590 == 0)
                                    {
                                        GET_AMMO_IN_CHAR_WEAPON( sub_4015(), 16, ref l_U590 );
                                        if (l_U590 == 0)
                                        {
                                            GET_AMMO_IN_CHAR_WEAPON( sub_4015(), 17, ref l_U590 );
                                            if (l_U590 == 0)
                                            {
                                                bVar2 = true;
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
        if (bVar2)
        {
            l_U604 = 4;
            sub_22522();
        }
    }
    return;
}

int sub_28928()
{
    if ((NOT (sub_28943( l_U593 ))) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_28943(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8320 == 1)) || (g_U8320 == 2))
    {
        if (uParam0._fU4 == g_U8319)
        {
            return 1;
        }
        else
        {
            sub_26350( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_26350( "\n speech is not playing" );
    }
    return 0;
}

void sub_29162(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_29189( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_29189(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    char[16] cVar9;
    char[12] cVar13;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    StrCopy( ref cVar9, uParam1, 16 );
    array(ref cVar13, 2);
    StrCopy( ref cVar13[0], uParam0, 16 );
    StrCopy( ref cVar13[1], "END", 16 );
    return sub_26251( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

int sub_29336(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    if (IS_GROUP_MEMBER( uParam2, sub_8583() ))
    {
        if (sub_29371( uParam2, sub_4015() ))
        {
            if (NOT (DOES_BLIP_EXIST( (uParam1^) )))
            {
                if (DOES_BLIP_EXIST( (uParam0^) ))
                {
                    REMOVE_BLIP( (uParam0^) );
                }
                if ((uParam1^) == nil)
                {
                    PRINT_NOW( uParam6, 7500, 1 );
                    PRINTSTRING( "Go to your vDestination. (DO_BLIPS_PED)\n" );
                }
                else
                {
                    PRINT_NOW( uParam8, 7500, 1 );
                    PRINTSTRING( "Keep going to your vDestination. (DO_BLIPS_PED)\n" );
                }
                (uParam1^) = sub_29656( uParam3 );
            }
            return 1;
        }
        return 1;
    }
    else if (DOES_BLIP_EXIST( (uParam1^) ))
    {
        REMOVE_BLIP( (uParam1^) );
    }
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        ADD_BLIP_FOR_CHAR( uParam2, uParam0 );
        SET_BLIP_AS_FRIENDLY( (uParam0^), 1 );
        PRINT_NOW( uParam7, 7500, 1 );
        PRINTSTRING( "Left your buddy behind. (DO_BLIPS_PED)\n" );
    }
    if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_4015(), uParam2, 20.00000000, 20.00000000, 0 ))
    {
        SET_GROUP_MEMBER( sub_8583(), uParam2 );
    }
    return 0;
}

int sub_29371(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (IS_CHAR_SITTING_IN_ANY_CAR( uParam1 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam1, ref uVar4 );
        if (IS_CHAR_SITTING_IN_CAR( uParam0, uVar4 ))
        {
            return 1;
        }
        return 0;
    }
    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
    {
        return 1;
    }
    return 0;
}

void sub_29656(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown Result;

    ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref Result );
    SET_ROUTE( Result, 1 );
    return Result;
}

void sub_29958()
{
    sub_4603( ref l_U593, 0 );
    l_U546 = 0;
    l_U547 = 0;
    return;
}

void sub_29997()
{
    unknown uVar2;

    CLEAR_PRINTS();
    SET_PLAYER_CONTROL( sub_4471(), 0 );
    CLEAR_CHAR_TASKS( sub_4015() );
    while (NOT sub_24807())
    {
        WAIT( 0 );
    }
    DO_SCREEN_FADE_OUT( 500 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    ALTER_WANTED_LEVEL( sub_4471(), 0 );
    APPLY_WANTED_LEVEL_CHANGE_NOW( sub_4471() );
    if (NOT (IS_CHAR_DEAD( l_U501 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U501 );
    }
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4015() );
    sub_5129( 771.70670000, -543.04450000, 7.74360000, 41.50000000, 794.80000000, -536.50000000, 7.60000000, 10.00000000, -1, 0 );
    LOAD_ADDITIONAL_TEXT( "F2AUD", 6 );
    START_CUTSCENE_NOW( "imfau2" );
    while (NOT HAS_CUTSCENE_LOADED())
    {
        WAIT( 0 );
    }
    while (NOT HAS_CUTSCENE_FINISHED())
    {
        WAIT( 0 );
    }
    CLEAR_NAMED_CUTSCENE( "imfau2" );
    REQUEST_MODEL( 1352017873 );
    REQUEST_MODEL( 223726252 );
    REQUEST_MODEL( -1516474414 );
    while (((NOT (HAS_MODEL_LOADED( 1352017873 ))) || (NOT (HAS_MODEL_LOADED( 223726252 )))) || (NOT (HAS_MODEL_LOADED( -1516474414 ))))
    {
        WAIT( 0 );
    }
    LOAD_SCENE( 798.17960000, -537.19060000, 6.53220000 );
    GET_INTERIOR_AT_COORDS( 798.17960000, -537.19060000, 6.53220000, ref uVar2 );
    LOAD_SCENE_FOR_ROOM_BY_KEY( uVar2, GET_HASH_KEY( "sshop_MloRoom01" ) );
    if (NOT (IS_CHAR_DEAD( l_U501 )))
    {
        REMOVE_CHAR_FROM_GROUP( l_U501 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U501 );
        SET_CHAR_COORDINATES( l_U501, 795.92000000, -540.64000000, 6.52150000 );
        SET_CHAR_HEADING( l_U501, 326.65910000 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U501, "sshop_MloRoom01" );
    }
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4015() );
    SET_CHAR_HEADING( sub_4015(), 296.00000000 );
    SET_CHAR_COORDINATES( sub_4015(), 794.70000000, -539.33000000, 6.52160000 );
    SET_ROOM_FOR_CHAR_BY_NAME( sub_4015(), "sshop_MloRoom01" );
    REMOVE_PLAYER_HELMET( sub_4471(), 1 );
    CREATE_CHAR( 26, 1352017873, l_U508._fU0, l_U508._fU4, l_U508._fU8, ref l_U502, 1 );
    SET_CHAR_HEADING( l_U502, 95.00000000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U502, "sshop_MloRoom01" );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U502, 1 );
    sub_4940( 3, l_U502, "JOSEPH", 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U502, 0, 0, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U502, 1, 1, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U502, 2, 0, 2 );
    CREATE_CHAR( 26, 223726252, l_U511[0]._fU0, l_U511[0]._fU4, l_U511[0]._fU8, ref l_U503[0], 1 );
    SET_CHAR_HEADING( l_U503[0], 145.00000000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U503[0], "sshop_MloRoom01" );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U503[0], 1 );
    sub_4940( 7, l_U503[0], "PORN_ACTOR", 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U503[0], 0, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U503[0], 1, 0, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U503[0], 2, 0, 2 );
    CREATE_CHAR( 26, -1516474414, l_U511[1]._fU0, l_U511[1]._fU4, l_U511[1]._fU8, ref l_U503[1], 1 );
    SET_CHAR_HEADING( l_U503[1], 120.00000000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U503[1], "sshop_MloRoom01" );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U503[1], 1 );
    sub_4940( 4, l_U503[1], "GUY_1_F2", 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U503[1], 0, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U503[1], 1, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U503[1], 2, 0, 0 );
    SUPPRESS_PED_MODEL( -1516474414 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1516474414 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 223726252 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1352017873 );
    GIVE_WEAPON_TO_CHAR( sub_4015(), 7, 40, 0 );
    SET_CURRENT_CHAR_WEAPON( sub_4015(), 7, 1 );
    REMOVE_BLIP( l_U497 );
    REMOVE_BLIP( l_U498 );
    ADD_BLIP_FOR_CHAR( l_U502, ref l_U498 );
    CHANGE_BLIP_COLOUR( l_U498, 1 );
    if ((NOT (IS_CHAR_DEAD( l_U503[0] ))) AND (NOT (IS_CHAR_DEAD( l_U503[1] ))))
    {
        SET_CHAR_NEVER_TARGETTED( l_U503[0], 1 );
        SET_CHAR_NEVER_TARGETTED( l_U503[1], 1 );
    }
    if ((NOT (IS_CAR_DEAD( l_U507 ))) AND (l_U551))
    {
        SET_CAR_HEADING( l_U507, 44.00000000 );
        SET_CAR_COORDINATES( l_U507, 776.24400000, -546.97140000, 8.57840000 );
    }
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    DO_SCREEN_FADE_IN_UNHACKED( 100 );
    l_U602 = 2;
    SETTIMERA( 0 );
    SET_PLAYER_CONTROL( sub_4471(), 1 );
    sub_4565();
    SET_CAM_BEHIND_PED( sub_4015() );
    return;
}

void sub_31724()
{
    float fVar2;
    unknown uVar3;

    if ((IS_CHAR_IN_ANY_CAR( sub_4015() )) || (IS_CHAR_ON_ANY_BIKE( sub_4015() )))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4015(), ref uVar3 );
        if (IS_VEH_DRIVEABLE( uVar3 ))
        {
            SET_PLAYER_CONTROL( sub_4471(), 0 );
            GET_CAR_SPEED( uVar3, ref fVar2 );
            while (fVar2 > 0.20000000)
            {
                WAIT( 0 );
                if (NOT (IS_CAR_DEAD( uVar3 )))
                {
                    GET_CAR_SPEED( uVar3, ref fVar2 );
                }
            }
            SET_PLAYER_CONTROL( sub_4471(), 1 );
        }
    }
    return;
}

void sub_32146(unknown uParam0, unknown uParam1)
{
    CLEAR_SMALL_PRINTS();
    PRINT( uParam0, uParam1, 1 );
    return;
}

void sub_32219(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (sub_20657( sub_4015(), l_U501 ))
    {
        if (NOT l_U546)
        {
            if (NOT l_U548)
            {
                GET_GAME_TIMER( ref l_U550 );
                l_U548 = 1;
            }
            else
            {
                GET_GAME_TIMER( ref l_U590 );
                l_U590 -= l_U550;
                if (l_U590 > 2000)
                {
                    if (g_U64569[uParam3] == 0)
                    {
                        l_U549 = uParam1;
                        g_U64569[uParam3]++;
                    }
                    else if (g_U64569[uParam3] == 1)
                    {
                        l_U549 = uParam2;
                        g_U64569[uParam3]++;
                    }
                    else if (g_U64569[uParam3] > 1)
                    {
                        SAY_AMBIENT_SPEECH( uParam0, "LISTEN_TO_RADIO", 0, 0, 0 );
                        g_U64569[uParam3] = 3;
                        l_U546 = 1;
                    };;;
                    if (g_U64569[uParam3] < 3)
                    {
                        if (COMPARE_STRING( l_U549, "F2_CAR1" ))
                        {
                            if (sub_29162( l_U549, 1, 0, ref l_U593, 6, 1 ))
                            {
                                l_U546 = 1;
                            }
                        }
                        else if (sub_26174( l_U549, ref l_U593, 6, 1 ))
                        {
                            l_U546 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U547)
        {
            if (NOT l_U548)
            {
                GET_GAME_TIMER( ref l_U550 );
                l_U548 = 1;
            }
            else
            {
                GET_GAME_TIMER( ref l_U590 );
                l_U590 -= l_U550;
                if (l_U590 > 2000)
                {
                    sub_32713( l_U549, ref l_U593, 6, 1 );
                    l_U547 = 0;
                    l_U548 = 0;
                }
            }
        }
    }
    else if ((sub_28943( l_U593 )) AND (g_U64569[uParam3] != 3))
    {
        sub_32877( ref l_U593 );
        l_U547 = 1;
        l_U548 = 0;
    }
    return;
}

void sub_32713(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_32736( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

int sub_32736(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
    if (iParam2->_fU12)
    {
        StrCopy( ref cVar11[0], uParam0, 16 );
        StrCopy( ref cVar11[1], "END", 16 );
        return sub_26251( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_32877(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_26350( "\n already paused" );
    }
    else if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8320 == 1)) || (g_U8320 == 2))
    {
        if (iParam0->_fU4 == g_U8319)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_26350( "\n CONVERSATION PAUSED AT LINE " );
            sub_33033( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_26350( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_26350( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_26350( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_33033(unknown uParam0)
{
    return;
}

void sub_34228()
{
    int iVar2;

    if (l_U605)
    {
        if (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_4015(), 795.71810000, -544.14810000, 6.40000000, 802.75520000, -538.29240000, 9.30000000, 8.00000000, 0 )))
        {
            if (DOES_BLIP_EXIST( l_U498 ))
            {
                REMOVE_BLIP( l_U498 );
            }
            if (DOES_BLIP_EXIST( l_U497 ))
            {
                REMOVE_BLIP( l_U497 );
            }
            if (DOES_BLIP_EXIST( l_U499 ))
            {
                REMOVE_BLIP( l_U499 );
            }
            sub_24693();
            if (NOT (IS_CHAR_DEAD( l_U501 )))
            {
                ADD_BLIP_FOR_CHAR( l_U501, ref l_U498 );
                SET_BLIP_AS_FRIENDLY( l_U498, 1 );
            }
            PRINT_NOW( "GI_DONT_LEAVE", 7500, 0 );
            l_U605 = 0;
        }
    }
    else
    {
        GET_INTERIOR_FROM_CHAR( sub_4015(), ref iVar2 );
        if (iVar2 == nil)
        {
            l_U604 = 0;
            sub_22522();
        }
        else if (IS_CHAR_IN_ANGLED_AREA_3D( sub_4015(), 795.71810000, -544.14810000, 6.74261700, 802.75520000, -538.29240000, 9.32059200, 7.00000000, 0 ))
        {
            REMOVE_BLIP( l_U498 );
            CLEAR_SMALL_PRINTS();
            sub_34593();
            l_U605 = 1;
        }
    }
    return;
}

void sub_34593()
{
    switch (l_U602)
    {
        case 2:
        PRINTNL();
        PRINTSTRING( "RESETTING TARGET_BOSS" );
        l_U545 = 0;
        l_U556 = 0;
        if (NOT (IS_CHAR_DEAD( l_U502 )))
        {
            if (DOES_BLIP_EXIST( l_U498 ))
            {
                REMOVE_BLIP( l_U498 );
            }
            ADD_BLIP_FOR_CHAR( l_U502, ref l_U498 );
        }
        break;
        case 3:
        case 4:
        PRINTNL();
        PRINTSTRING( "RESETTING TARGET_ASSOCIATE or TARGETTED_ASSOCIATE" );
        l_U602 = 4;
        if (NOT (IS_CHAR_DEAD( l_U503[1] )))
        {
            if (DOES_BLIP_EXIST( l_U498 ))
            {
                REMOVE_BLIP( l_U498 );
            }
            ADD_BLIP_FOR_CHAR( l_U503[1], ref l_U498 );
        }
        l_U543 = 0;
        l_U557 = 0;
        break;
        case 5:
        case 6:
        if (l_U564)
        {
            l_U602 = 7;
        }
        else
        {
            PRINTNL();
            PRINTSTRING( "RESETTING SHOOT_GUY_IN_LEG or SHOT_GUY_IN_LEG" );
            l_U602 = 6;
            if (NOT (IS_CHAR_DEAD( l_U503[1] )))
            {
                if (DOES_BLIP_EXIST( l_U498 ))
                {
                    REMOVE_BLIP( l_U498 );
                }
                ADD_BLIP_FOR_CHAR( l_U503[1], ref l_U498 );
            }
            l_U555 = 0;
            l_U544 = 0;
        }
        break;
        default:
        PRINTNL();
        PRINTSTRING( "RESETTING DEFAULT" );
        break;
    }
    return;
}

int sub_35188(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5, unknown uParam6)
{
    uParam1._fU8 += 0.20000000;
    if (NOT (IS_CHAR_DEAD( iParam0 )))
    {
        if (NOT (IS_CHAR_INJURED( iParam0 )))
        {
            if (l_U526[uParam6])
            {
                GET_SCRIPT_TASK_STATUS( iParam0, 29, ref l_U531 );
                if (l_U531 == 7)
                {
                    if (NOT (IS_CHAR_DEAD( iParam5 )))
                    {
                        if (iParam0 == l_U501)
                        {
                            if (iParam5 == l_U502)
                            {
                                TASK_LOOK_AT_CHAR( iParam0, iParam5, -2, 8 );
                            }
                            else
                            {
                                TASK_LOOK_AT_CHAR( iParam0, iParam5, -2, 0 );
                            }
                        }
                        else
                        {
                            TASK_LOOK_AT_CHAR( iParam0, iParam5, -2, 0 );
                        }
                        l_U526[uParam6] = 0;
                    }
                }
                else
                {
                    return 1;
                }
            }
            else
            {
                GET_CHAR_HEADING( iParam0, ref l_U591 );
                if (NOT (LOCATE_CHAR_ON_FOOT_3D( iParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, 0.70000000, 0.70000000, 1.00000000, 0 )))
                {
                    TASK_CLEAR_LOOK_AT( iParam0 );
                    OPEN_SEQUENCE_TASK( ref l_U589 );
                    TASK_CHAR_SLIDE_TO_COORD( 0, uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam4, 10000 );
                    CLOSE_SEQUENCE_TASK( l_U589 );
                    TASK_PERFORM_SEQUENCE( iParam0, l_U589 );
                    CLEAR_SEQUENCE_TASK( l_U589 );
                    l_U526[uParam6] = 1;
                    return 1;
                }
                else if ((l_U591 < (uParam4 - 3.00000000)) || (l_U591 > (uParam4 + 3.00000000)))
                {
                    TASK_CLEAR_LOOK_AT( iParam0 );
                    OPEN_SEQUENCE_TASK( ref l_U589 );
                    TASK_ACHIEVE_HEADING( 0, uParam4 );
                    CLOSE_SEQUENCE_TASK( l_U589 );
                    TASK_PERFORM_SEQUENCE( iParam0, l_U589 );
                    CLEAR_SEQUENCE_TASK( l_U589 );
                    l_U526[uParam6] = 1;
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_41913()
{
    if ((DOES_CHAR_EXIST( l_U503[0] )) AND (NOT l_U571))
    {
        if (NOT (IS_CHAR_INJURED( l_U503[0] )))
        {
            if (NOT (IS_CHAR_PLAYING_ANIM( l_U503[0], "missfaustin2", "drop_knees" )))
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( l_U503[0], "missfaustin2", "plead_idle" )))
                {
                    SET_CHAR_HEALTH( l_U503[0], 60 );
                    SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U503[0], 0 );
                    l_U571 = 1;
                }
            }
        }
    }
    return;
}

int sub_43160(unknown uParam0)
{
    unknown uVar3;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_PLAYER_GROUP( sub_4471(), ref uVar3 );
        if (IS_GROUP_MEMBER( uParam0, uVar3 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_43794(unknown uParam0)
{
    unknown uVar3;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_PLAYER_GROUP( sub_4471(), ref uVar3 );
        SET_GROUP_MEMBER( sub_8583(), uParam0 );
        SET_CHAR_RELATIONSHIP( uParam0, 1, 0 );
    }
    return;
}

void sub_43993(unknown uParam0)
{
    if (sub_20657( sub_4015(), l_U501 ))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( l_U501, 1 );
        if (NOT l_U546)
        {
            if (NOT l_U548)
            {
                GET_GAME_TIMER( ref l_U550 );
                l_U548 = 1;
            }
            else
            {
                GET_GAME_TIMER( ref l_U590 );
                l_U590 -= l_U550;
                if (l_U590 > 2000)
                {
                    if (l_U607 == 0)
                    {
                        if (sub_26174( "F2_CAR3", ref l_U593, 6, 1 ))
                        {
                            g_U64569[1] = 1;
                            l_U546 = 1;
                        }
                    }
                    else if (l_U607 == 1)
                    {
                        if (sub_44208( l_U501, "F2_RINGS" ))
                        {
                            l_U546 = 1;
                        }
                    }
                    else if (l_U607 == 2)
                    {
                        if (sub_26174( "F2_HANGUP", ref l_U593, 6, 1 ))
                        {
                            l_U546 = 1;
                        }
                    };;;
                }
            }
        }
        else if (l_U547)
        {
            if (NOT l_U548)
            {
                GET_GAME_TIMER( ref l_U550 );
                l_U548 = 1;
            }
            else
            {
                GET_GAME_TIMER( ref l_U590 );
                l_U590 -= l_U550;
                if (l_U590 > 2000)
                {
                    if (l_U607 == 0)
                    {
                        sub_32713( "F2_CAR3", ref l_U593, 6, 1 );
                    }
                    else if (l_U607 == 2)
                    {
                        sub_32713( "F2_HANGUP", ref l_U593, 6, 1 );
                    }
                    l_U547 = 0;
                    l_U548 = 0;
                }
            }
        }
        else if (l_U546)
        {
            if (NOT (sub_28943( l_U593 )))
            {
                if (l_U607 == 1)
                {
                    TASK_USE_MOBILE_PHONE( l_U501, 0 );
                }
                l_U548 = 1;
                l_U607++;
                l_U546 = 0;
            }
        };;;
    }
    else if (sub_28943( l_U593 ))
    {
        if (l_U607 == 1)
        {
            TASK_USE_MOBILE_PHONE( l_U501, 0 );
            sub_4603( ref l_U593, 0 );
            sub_26174( "F2_HANGUP", ref l_U593, 6, 1 );
            l_U546 = 0;
            l_U547 = 1;
            l_U607 = 8;
        }
        else if (l_U607 != 8)
        {
            sub_32877( ref l_U593 );
            l_U547 = 1;
        }
        l_U548 = 0;
    }
    return;
}

int sub_44208(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_MOBILE_PHONE_TASK_SUB_TASK( uParam0, ref iVar4 );
    if (iVar4 != 1)
    {
        GET_SCRIPT_TASK_STATUS( uParam0, 53, ref l_U531 );
        if (l_U531 == 7)
        {
            TASK_USE_MOBILE_PHONE( uParam0, 1 );
        }
    }
    else if (sub_26174( uParam1, ref l_U593, 6, 1 ))
    {
        l_U546 = 1;
        return 1;
    }
    return 0;
}

int sub_45039()
{
    int iVar2;

    if (NOT (IS_CHAR_INJURED( sub_4015() )))
    {
        GET_KEY_FOR_CHAR_IN_ROOM( sub_4015(), ref iVar2 );
        if (iVar2 == (GET_HASH_KEY( "GtaMloRoom01" )))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}

void sub_45149()
{
    if (NOT (IS_CHAR_DEAD( l_U501 )))
    {
        if (NOT (IS_CHAR_INJURED( l_U501 )))
        {
            if (IS_CHAR_IN_ANY_CAR( l_U501 ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U501, ref l_U507 );
                if (NOT (IS_VEH_DRIVEABLE( l_U507 )))
                {
                    TASK_LEAVE_ANY_CAR( l_U501 );
                }
            }
        }
    }
    return;
}

void sub_45265()
{
    int iVar2;

    if (l_U606)
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_4015(), l_U501, 20.00000000, 20.00000000, 0 ))
        {
            if (DOES_BLIP_EXIST( l_U498 ))
            {
                REMOVE_BLIP( l_U498 );
            }
            if (l_U602 == 20)
            {
                ADD_BLIP_FOR_COORD( 1061.50000000, 88.83230000, 34.24610000, ref l_U497 );
                SET_ROUTE( l_U497, 1 );
                sub_32146( "GI_44", 7500 );
            }
            else if (l_U602 == 21)
            {
                ADD_BLIP_FOR_COORD( 1066.37000000, 86.24000000, 34.00000000, ref l_U500 );
                CHANGE_BLIP_COLOUR( l_U500, 2 );
                sub_32146( "GI_45", 7500 );
            }
            l_U606 = 0;
        }
        else
        {
            PRINT_NOW( "DIMITRI_BUDDY", 100, 0 );
        }
    }
    else
    {
        GET_INTERIOR_FROM_CHAR( sub_4015(), ref iVar2 );
        if ((iVar2 == nil) AND (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4015(), l_U501, 80.00000000, 80.00000000, 80.00000000, 0 ))))
        {
            if (DOES_BLIP_EXIST( l_U497 ))
            {
                REMOVE_BLIP( l_U497 );
            }
            if (DOES_BLIP_EXIST( l_U500 ))
            {
                REMOVE_BLIP( l_U500 );
            }
            if (DOES_BLIP_EXIST( l_U498 ))
            {
                REMOVE_BLIP( l_U498 );
            }
            ADD_BLIP_FOR_CHAR( l_U501, ref l_U498 );
            SET_BLIP_AS_FRIENDLY( l_U498, 1 );
            l_U606 = 1;
        }
    }
    return;
}

void sub_46034(unknown uParam0)
{
    g_U10054._fU0[uParam0] = 1;
    sub_2472();
    return;
}

void sub_47124(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    unknown uVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;

    while ((NOT bVar3) AND (NOT bVar4))
    {
        WAIT( 0 );
        GET_GAME_TIMER( ref iVar8 );
        iVar9 = iVar8 - iVar7;
        if (((iVar9 >= 1000) AND (sub_24496())) AND (IS_SCREEN_FADED_IN()))
        {
            if (NOT IS_SCREEN_FADED_OUT())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            if (DOES_CHAR_EXIST( l_U501 ))
            {
                DELETE_CHAR( ref l_U501 );
            }
            DO_SCREEN_FADE_IN( 500 );
            bVar4 = true;
        }
        else
        {
            switch (iVar6)
            {
                case 0:
                SET_PLAYER_CONTROL( sub_4471(), 0 );
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    DO_SCREEN_FADE_OUT( 500 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                }
                while (NOT sub_24807())
                {
                    WAIT( 0 );
                }
                CLEAR_SMALL_PRINTS();
                SET_WIDESCREEN_BORDERS( 1 );
                DISPLAY_HUD( 0 );
                SWITCH_PED_PATHS_OFF( 1339.70000000, -836.72000000, 0.00000000, 1320.89000000, -854.42000000, 100.00000000 );
                ADD_SCENARIO_BLOCKING_AREA( 1339.70000000, -836.72000000, 0.00000000, 1320.89000000, -854.42000000, 100.00000000 );
                SWITCH_ROADS_OFF( 1352.89000000, -818.88000000, 0.00000000, 1335.31000000, -872.96000000, 100.00000000 );
                sub_5129( 1341.02000000, -834.53000000, 7.25000000, 0, 1341.00000000, -846.50000000, 9.20000000, 20, -1, 0 );
                BEGIN_CAM_COMMANDS( ref l_U541 );
                CREATE_CAM( 14, ref uVar5 );
                SET_CAM_POS( uVar5, 1337.60900000, -848.14670000, 8.67591400 );
                SET_CAM_ROT( uVar5, 5.32976200, -0.00000000, 31.93069000 );
                SET_CAM_FOV( uVar5, 37 );
                SET_CAM_ACTIVE( uVar5, 1 );
                SET_CAM_PROPAGATE( uVar5, 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                if (NOT (IS_CHAR_DEAD( l_U501 )))
                {
                    REMOVE_ALL_CHAR_WEAPONS( l_U501 );
                    REMOVE_CHAR_FROM_GROUP( l_U501 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4015() );
                    SET_CHAR_COORDINATES( sub_4015(), 1336.37800000, -846.91590000, 7.33810000 );
                    SET_CHAR_HEADING( sub_4015(), 1 );
                    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_4015(), 1 );
                    TASK_LOOK_AT_CHAR( sub_4015(), l_U501, -2, 0 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U501 );
                    SET_CHAR_COORDINATES( l_U501, 1336.84400000, -845.90420000, 7.33810000 );
                    SET_CHAR_HEADING( l_U501, 142 );
                    CLEAR_ROOM_FOR_CHAR( l_U501 );
                    TASK_LOOK_AT_CHAR( l_U501, sub_4015(), -2, 0 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U501, sub_4015() );
                    TASK_TURN_CHAR_TO_FACE_CHAR( sub_4015(), l_U501 );
                }
                WAIT( 500 );
                DO_SCREEN_FADE_IN( 500 );
                GET_GAME_TIMER( ref iVar7 );
                SETTIMERA( 0 );
                iVar6++;
                break;
                case 1:
                if (TIMERA() > 500)
                {
                    sub_26174( uParam0, ref l_U593, 6, 1 );
                    SETTIMERA( 0 );
                    iVar6++;
                }
                break;
                case 2:
                if (TIMERA() > 5000)
                {
                    if (NOT (IS_CHAR_DEAD( l_U501 )))
                    {
                        TASK_CLEAR_LOOK_AT( l_U501 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U501, 1325.59000000, -846.73000000, 7.97000000, 2, 20000, 0.50000000 );
                    }
                    SETTIMERA( 0 );
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    iVar6++;
                }
                break;
                case 3:
                if (NOT (IS_CHAR_DEAD( l_U501 )))
                {
                    if ((LOCATE_CHAR_ANY_MEANS_3D( l_U501, 1325.59000000, -846.73000000, 7.97000000, 7, 7, 7, 0 )) || (TIMERA() > 14000))
                    {
                        if (DOES_CHAR_EXIST( l_U501 ))
                        {
                            DELETE_CHAR( ref l_U501 );
                        }
                        bVar3 = true;
                    }
                }
                break;
            }
        }
    }
    SET_CAM_ACTIVE( uVar5, 0 );
    SET_CAM_PROPAGATE( uVar5, 0 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    END_CAM_COMMANDS( ref l_U541 );
    sub_4603( ref l_U593, 0 );
    SET_WIDESCREEN_BORDERS( 0 );
    DISPLAY_HUD( 1 );
    SET_PLAYER_CONTROL( sub_4471(), 1 );
    sub_4565();
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_4015(), 0 );
    SET_CURRENT_CHAR_WEAPON( sub_4015(), 0, 0 );
    SET_CAM_BEHIND_PED( sub_4015() );
    return;
}
