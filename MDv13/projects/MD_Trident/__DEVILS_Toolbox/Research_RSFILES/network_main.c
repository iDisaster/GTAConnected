void main()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    boolean bVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    int iVar15;
    int I;
    int iVar17;
    int iVar18;
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
    boolean bVar31;
    unknown uVar32;
    int iVar33;
    char[12] cVar34;
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
    boolean bVar55;

    l_U0 = -1;
    l_U7 = 0;
    l_U8 = 1;
    l_U9 = 3;
    l_U11 = 0;
    l_U28 = -1;
    l_U32 = 0;
    l_U33 = 1;
    l_U34 = 1;
    l_U42 = 150.00000000;
    l_U132 = 0;
    l_U133 = 150.00000000;
    l_U183 = 0;
    l_U493 = 0;
    l_U494 = 0;
    l_U495 = 0;
    l_U496 = 0;
    l_U497 = 1;
    l_U498 = 0;
    iVar15 = 0;
    g_U10 = 0;
    g_U11 = 0;
    g_U12 = 0;
    g_U13 = -1;
    THIS_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    SET_INT_STAT( 363, 3 );
    SET_NO_RESPRAYS( 0 );
    if (IS_PLAYER_PLAYING( sub_173() ))
    {
        SET_PLAYER_CONTROL( sub_173(), 0 );
    }
    array(ref uVar20._fU0, 10);
    ref uVar20;
    sub_242( ref uVar20, ref uVar19 );
    g_U14 = GET_CURRENT_EPISODE();
    bVar31 = true;
    sub_596();
    while (bVar31)
    {
        WAIT( 0 );
        switch (sub_646( ref uVar20, uVar19 ))
        {
            case 11:
            bVar31 = false;
            break;
            case 12:
            SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();
            TERMINATE_THIS_SCRIPT();
            break;
            default: break;
        }
    }
    uVar32 = nil;
    iVar33 = 0;
    array(ref cVar34, 2);
    if (IS_CHAR_DEAD( sub_2441() ))
    {
        RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), sub_2506( sub_2441() ), 0.00000000 );
        sub_1238( "\n #### network_main.sc - resurrecting player as they are dead. " );
    }
    if (GET_PLAYERSETTINGS_MODEL_CHOICE() != (sub_2676( sub_2441() )))
    {
        REQUEST_MODEL( GET_PLAYERSETTINGS_MODEL_CHOICE() );
    }
    sub_2735( NETWORK_GET_GAME_MODE(), ref uVar2, ref uVar7, ref bVar6 );
    REQUEST_SCRIPT( ref uVar2 );
    StrCopy( ref cVar34[0], "MPcellphone", 32 );
    StrCopy( ref cVar34[1], "speechControl_net", 32 );
    while (iVar33 < cVar34)
    {
        WAIT( 0 );
        iVar33 = 0;
        for ( I = 0; I <= (Length(cVar34) - 1); I++ )
        {
            REQUEST_SCRIPT( ref cVar34[I] );
            if (HAS_SCRIPT_LOADED( ref cVar34[I] ))
            {
                iVar33++;
            }
        }
    }
    for ( I = 0; I <= (Length(cVar34) - 1); I++ )
    {
        START_NEW_SCRIPT( ref cVar34[I], 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref cVar34[I] );
    }
    if (NOT (IS_CHAR_DEAD( sub_2441() )))
    {
        sub_3731( GET_PLAYER_ID(), 0 );
        REMOVE_ALL_CHAR_WEAPONS( sub_2441() );
        SET_CHAR_HEALTH( sub_2441(), 300 );
        CLEAR_WANTED_LEVEL( sub_173() );
    }
    SET_FREE_RESPRAYS( 1 );
    sub_4080();
    for ( I = 0; I < 11; I++ )
    {
        SWITCH_CAR_GENERATOR( g_U64964[I], 0 );
    }
    sub_1238( "\n #### network_main.sc - about to GET_PLAYERSETTINGS_MODEL_CHOICE. " );
    if (GET_PLAYERSETTINGS_MODEL_CHOICE() != (sub_2676( sub_2441() )))
    {
        REQUEST_MODEL( GET_PLAYERSETTINGS_MODEL_CHOICE() );
        LOAD_ALL_OBJECTS_NOW();
        while (NOT (sub_4856( GET_PLAYERSETTINGS_MODEL_CHOICE() )))
        {
            WAIT( 0 );
            sub_1238( "\n #### network_main.sc - loading player model. " );
        }
        CHANGE_PLAYER_MODEL( sub_173(), GET_PLAYERSETTINGS_MODEL_CHOICE() );
        MARK_MODEL_AS_NO_LONGER_NEEDED( GET_PLAYERSETTINGS_MODEL_CHOICE() );
    }
    SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE( sub_173() );
    sub_1238( "\n #### network_main.sc - finished SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE. " );
    while (IS_NETWORK_GAME_PENDING())
    {
        WAIT( 0 );
        sub_1238( "\n #### network_main.sc - IS_NETWORK_GAME_PENDING is returning TRUE. " );
    }
    sub_1238( "\n #### network_main.sc - IS_NETWORK_GAME_PENDING has returned FALSE. " );
    if (NOT IS_NETWORK_GAME_RUNNING())
    {
        sub_1238( "\n #### network_main.sc - IS_NETWORK_GAME_RUNNING has returned FALSE, terminating script " );
        TERMINATE_THIS_SCRIPT();
    }
    if (bVar6)
    {
        while (NOT (HAS_ADDITIONAL_TEXT_LOADED( 0 )))
        {
            WAIT( 0 );
            sub_5491( "\n #### network_main.sc - currently loading game mode text ", ref uVar2 );
        }
    }
    if (NOT (COMPARE_STRING( ref uVar7, "NO_TEXTURES" )))
    {
        while (NOT (HAS_STREAMED_TXD_LOADED( ref uVar7 )))
        {
            WAIT( 0 );
            sub_5491( "\n #### network_main.sc - currently loading game mode textures ", ref uVar7 );
        }
    }
    uVar32 = nil;
    while (NOT (sub_5647( ref uVar2 )))
    {
        WAIT( 0 );
        sub_5491( "\n #### network_main.sc - currently loading game script ", ref uVar2 );
    }
    FORCE_LOADING_SCREEN( 0 );
    uVar32 = START_NEW_SCRIPT( ref uVar2, 8192 );
    sub_5491( "\n #### network_main.sc - loaded game script ", ref uVar2 );
    bVar55 = false;
    l_U497 = 1;
    l_U498 = 0;
    while (true)
    {
        WAIT( 0 );
        if (NOT IS_NETWORK_GAME_RUNNING())
        {
            sub_1238( "\n #### network_main.sc - IS_NETWORK_GAME_RUNNING has returned FALSE, terminating script " );
            TERMINATE_THIS_SCRIPT();
        }
        if (NOT bVar55)
        {
            if (NOT NETWORK_IS_RENDEZVOUS())
            {
                if (NETWORK_IS_TVT())
                {
                    if (NETWORK_IS_RENDEZVOUS_HOST())
                    {
                        if (NETWORK_ALL_PARTY_MEMBERS_PRESENT())
                        {
                            if (NETWORK_GET_NUM_PARTY_MEMBERS() == 1)
                            {
                                sub_1238( "\n #### network_main.sc - NETWORK_GET_NUM_PARTY_MEMBERS() = 1 returning to rendezvous " );
                                g_U11 = 1;
                                bVar55 = true;
                            }
                        }
                    }
                }
            }
        }
        if (((TIMERB() >= 45000) AND (l_U498)) || ((DOES_GAME_CODE_WANT_TO_LEAVE_NETWORK_SESSION()) || (g_U12)))
        {
            sub_6213();
            if (NETWORK_IS_SESSION_STARTED())
            {
                sub_1238( "\n #### network_main.sch - NETWORK_IS_SESSION_STARTED is returning TRUE. " );
                if (NETWORK_END_SESSION())
                {
                    sub_1238( "\n #### network_main.sch - called NETWORK_END_SESSION. " );
                    while (NETWORK_END_SESSION_PENDING())
                    {
                        WAIT( 0 );
                        sub_1238( "\n #### network_main.sch - NETWORK_END_SESSION_PENDING is returning TRUE. " );
                    }
                }
            }
            sub_1238( "\n #### network_main.sch - NETWORK_LEAVE_GAME been called. " );
            NETWORK_LEAVE_GAME();
            while (NETWORK_LEAVE_GAME_PENDING())
            {
                WAIT( 0 );
                sub_1238( "\n #### network_main.sch - NETWORK_LEAVE_GAME_PENDING is returning TRUE. " );
            }
            SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();
        }
        else if (g_U11)
        {
            sub_6213();
            sub_1238( "\n #### network_main.sc - about to call NETWORK_IS_RENDEZVOUS_HOST. " );
            if (NETWORK_IS_RENDEZVOUS_HOST())
            {
                if (NETWORK_ALL_PARTY_MEMBERS_PRESENT())
                {
                    if (NOT sub_6858())
                    {
                        if (NETWORK_RETURN_TO_RENDEZVOUS())
                        {
                            while (NETWORK_RETURN_TO_RENDEZVOUS_PENDING())
                            {
                                WAIT( 0 );
                                sub_1238( "\n #### network_main.sc - NETWORK_RETURN_TO_RENDEZVOUS_PENDING returning TRUE. " );
                            }
                            if (NETWORK_RETURN_TO_RENDEZVOUS_SUCCEEDED())
                            {
                                sub_1238( "\n #### network_main.sc - NETWORK_RETURN_TO_RENDEZVOUS_SUCCEEDED returned TRUE. " );
                                g_U11 = 0;
                            }
                            else
                            {
                                sub_1238( "\n #### network_main.sc - NETWORK_RETURN_TO_RENDEZVOUS_SUCCEEDED() returned FALSE, returning to single player. " );
                                g_U12 = 1;
                                g_U11 = 0;
                            }
                        }
                        else
                        {
                            sub_1238( "\n #### network_main.sc - NETWORK_RETURN_TO_RENDEZVOUS() returned FALSE, returning to single player. " );
                            g_U12 = 1;
                            g_U11 = 0;
                        }
                    }
                }
            }
        }
        else if (g_U10)
        {
            sub_6213();
            while (NETWORK_IS_OPERATION_PENDING())
            {
                WAIT( 0 );
                sub_1238( "\n #### network_main.sc - waiting because NETWORK_IS_OPERATION_PENDING() is returning TRUE. " );
            }
            sub_1238( "\n #### network_main.sc - about to call closeAndStartNetworkGame. " );
            g_U18._fU656 = sub_7682();
            sub_7729();
            sub_1238( "\n #### network_main.sc - finished closeAndStartNetworkGame. " );
            sub_1238( "\n #### network_main.sc - about to call Start_A_Network_Game_From_A_Network_Game. " );
            sub_8850();
            TERMINATE_THIS_SCRIPT();
        }
        else if (g_U13 != -1)
        {
            if (NOT sub_6858())
            {
                sub_6213();
                while (NETWORK_IS_OPERATION_PENDING())
                {
                    WAIT( 0 );
                    sub_1238( "\n #### network_main.sc - waiting because NETWORK_IS_OPERATION_PENDING() is returning TRUE. " );
                }
                iVar17 = sub_9114( g_U13 );
                iVar18 = NETWORK_GET_MAX_PRIVATE_SLOTS();
                if (iVar18 > iVar17)
                {
                    iVar18 = iVar17;
                }
                if (NETWORK_CHANGE_GAME_MODE( g_U13, iVar17, iVar18, sub_2058( g_U13 ) ))
                {
                    sub_1283( "\n #### network_main.sc - NETWORK_CHANGE_GAME_MODE changing to ", g_U13 );
                    sub_1238( ". " );
                    g_U18._fU656 = sub_7682();
                    sub_8470();
                    while (NETWORK_CHANGE_GAME_MODE_PENDING())
                    {
                        WAIT( 0 );
                        sub_1238( "\n #### network_main.sc - NETWORK_CHANGE_GAME_MODE_PENDING returning TRUE" );
                    }
                    if (NETWORK_CHANGE_GAME_MODE_SUCCEEDED())
                    {
                        sub_1238( "\n #### network_main.sc - NETWORK_CHANGE_GAME_MODE_SUCCEEDED returned TRUE" );
                    }
                    else
                    {
                        sub_1238( "\n #### network_main.sc - NETWORK_CHANGE_GAME_MODE_SUCCEEDED() returned FALSE, returning to single player. " );
                        g_U12 = 1;
                        g_U13 = -1;
                    }
                }
                else
                {
                    sub_1238( "\n #### network_main.sc - NETWORK_CHANGE_GAME_MODE() returned FALSE, returning to single player. " );
                    g_U12 = 1;
                    g_U13 = -1;
                }
            }
        };;;;
        if (NOT (IS_THREAD_ACTIVE( uVar32 )))
        {
            sub_1238( "\n #### network_main.sc - game script nolonger running. " );
            if (TIMERA() >= 10000)
            {
                sub_1238( "\n #### network_main.sc - DOING TEMP SHUTDOWN. " );
                SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();
            }
        }
        else
        {
            SETTIMERA( 0 );
        }
    }
    return;
}

void sub_173()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_242(unknown uParam0, unknown uParam1)
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

    NETWORK_RESTORE_GAME_CONFIG( uParam0 );
    array(ref uVar4._fU0, 10);
    ref uVar4;
    if (RESTORE_SCRIPT_VALUES_FOR_NETWORK_GAME( ref uVar4 ))
    {
        g_U18._fU40 = uVar4._fU0[0];
        g_U18._fU108 = uVar4._fU0[1];
        g_U18._fU112 = uVar4._fU0[2];
        SET_MOBILE_RING_TYPE( g_U18._fU112 );
        g_U18._fU396 = uVar4._fU0[3];
        if (uVar4._fU0[4] == 1)
        {
            g_U18._fU500 = 1;
        }
        else
        {
            g_U18._fU500 = 0;
        }
        if (uVar4._fU0[5] == 1)
        {
            g_U18._fU524 = 1;
        }
        else
        {
            g_U18._fU524 = 0;
        }
        (uParam1^) = uVar4._fU0[5];
        g_U18._fU656 = uVar4._fU0[6];
        if (uVar4._fU0[7] == 0)
        {
            g_U18._fU1488 = 0;
        }
        else
        {
            g_U18._fU1488 = 1;
        }
    }
    else
    {
        g_U18._fU40 = 2;
        g_U18._fU108 = 0;
        g_U18._fU112 = 0;
        g_U18._fU396 = 0;
        g_U18._fU524 = 1;
        g_U18._fU500 = GET_IS_HIDEF();
        g_U18._fU656 = -1;
        g_U18._fU1488 = 0;
        (uParam1^) = 0;
    }
    SET_MOBILE_RING_TYPE( g_U18._fU112 );
    return;
}

void sub_596()
{
    l_U1 = 0;
    SETTIMERA( 0 );
    return;
}

void sub_646(int iParam0, unknown uParam1)
{
    if (l_U1 == 12)
    {
        return 12;
    }
    if (NETWORK_HAVE_ACCEPTED_INVITE())
    {
        if (NOT NETWORK_IS_INVITEE_ONLINE())
        {
            sub_694();
            return 12;
        }
    }
    else if (NOT IS_PLAYER_ONLINE())
    {
        sub_694();
        return 12;
    }
    if (TIMERA() >= 60000)
    {
        sub_694();
    }
    else
    {
        switch (l_U1)
        {
            case 0:
            sub_1238( "\n ##### NETWORK GAME STRUCT ##########################################" );
            sub_1283( "\n ## Gamemode  : ", iParam0->_fU0[0] );
            sub_1283( "\n ## Ranked    : ", iParam0->_fU0[1] );
            sub_1283( "\n ## Slots     : ", iParam0->_fU0[2] );
            sub_1283( "\n ## Private   : ", iParam0->_fU0[3] );
            sub_1283( "\n ## Episode   : ", iParam0->_fU0[4] );
            sub_1283( "\n ## Max Teams : ", iParam0->_fU0[5] );
            sub_1238( "\n" );
            if (NETWORK_HAVE_SUMMONS())
            {
                l_U1 = 3;
                break;
            }
            else if (iParam0->_fU0[0] == 8)
            {
                l_U1 = 8;
                break;
            }
            l_U1 = 1;
            case 1:
            if ((iParam0->_fU0[3] > 0) AND (iParam0->_fU0[1] == 0))
            {
                l_U1 = 7;
                break;
            }
            NETWORK_FIND_GAME( iParam0->_fU0[0], iParam0->_fU0[1] != 0, iParam0->_fU0[4], iParam0->_fU0[5] );
            sub_1283( "\n #### NETWORK_FIND_GAME(", iParam0->_fU0[0] );
            sub_1283( ", ", iParam0->_fU0[1] );
            sub_1283( ", ", iParam0->_fU0[4] );
            sub_1283( ", ", iParam0->_fU0[5] );
            sub_1238( ") \n" );
            l_U1 = 2;
            case 2:
            if (NETWORK_FIND_GAME_PENDING())
            {
                break;
            }
            if (NETWORK_GET_NUMBER_OF_GAMES() == 0)
            {
                l_U1 = 7;
                break;
            }
            l_U2 = 0;
            SETTIMERA( 0 );
            case 5:
            if (l_U1 == 5)
            {
                if (l_U2 < (NETWORK_GET_NUMBER_OF_GAMES() - 1))
                {
                    l_U2++;
                }
                else
                {
                    l_U1 = 7;
                    break;
                }
            }
            else
            {
                l_U1 = 5;
            }
            if (TIMERA() < 20000)
            {
                if (NOT (NETWORK_JOIN_GAME( l_U2 )))
                {
                    break;
                }
            }
            else
            {
                l_U1 = 7;
                break;
            }
            l_U1 = 6;
            break;
            case 4:
            case 6:
            if (NETWORK_JOIN_GAME_PENDING())
            {
                break;
            }
            if (NETWORK_JOIN_GAME_SUCCEEDED())
            {
                if (l_U1 == 4)
                {
                    NETWORK_CLEAR_SUMMONS();
                }
                l_U1 = 11;
            }
            else
            {
                switch (l_U1)
                {
                    case 4:
                    sub_694();
                    break;
                    default:
                    l_U1 = 5;
                    break;
                }
            }
            break;
            case 3:
            if (NOT NETWORK_JOIN_SUMMONS())
            {
                NETWORK_CLEAR_SUMMONS();
                sub_694();
                break;
            }
            l_U1 = 4;
            break;
            case 7:
            if (NETWORK_IS_RENDEZVOUS_HOST())
            {
                if (iParam0->_fU0[1] == 1)
                {
                    if ((sub_2058( iParam0->_fU0[0] )) == 2)
                    {
                        iParam0->_fU0[2] = NETWORK_GET_NUM_PARTY_MEMBERS() * 2;
                    }
                }
            }
            if (NOT (N_2040918212( iParam0->_fU0[0], iParam0->_fU0[1] != 0, iParam0->_fU0[2], iParam0->_fU0[3], iParam0->_fU0[4], iParam0->_fU0[5] )))
            {
                sub_694();
                break;
            }
            l_U1 = 9;
            case 9:
            if (NETWORK_HOST_GAME_PENDING())
            {
                break;
            }
            if (NOT NETWORK_HOST_GAME_SUCCEEDED())
            {
                sub_694();
                break;
            }
            l_U1 = 11;
            break;
            case 8:
            if (NOT (N_1881294935( iParam0->_fU0[0], iParam0->_fU0[2], iParam0->_fU0[4] )))
            {
                sub_694();
                break;
            }
            l_U1 = 9;
            break;
        }
    }
    return l_U1;
}

void sub_694()
{
    if (NETWORK_HAVE_ACCEPTED_INVITE())
    {
        if (NOT NETWORK_IS_INVITEE_ONLINE())
        {
            if (NOT N_604003528())
            {
                sub_756( "WARNING_1PS3" );
            }
            else
            {
                sub_756( "CP_ERROR_1" );
            }
        }
    }
    else if (NOT IS_PLAYER_ONLINE())
    {
        if (NOT N_604003528())
        {
            sub_756( "WARNING_1PS3" );
        }
        else
        {
            sub_756( "CP_ERROR_1" );
        }
    }
    else
    {
        switch (l_U1)
        {
            case 3:
            case 4:
            sub_756( "INVITE_FAILED" );
            break;
            default:
            if (N_604003528())
            {
                sub_756( "CP_ERROR_0" );
            }
            else
            {
                sub_756( "WARNING_1PS3" );
            }
            break;
        }
    }
    return;
}

void sub_756(unknown uParam0)
{
    FORCE_LOADING_SCREEN( 0 );
    SET_MSG_FOR_LOADING_SCREEN( uParam0 );
    l_U1 = 12;
    return;
}

void sub_1238(unknown uParam0)
{
    return;
}

void sub_1283(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_2058(unknown uParam0)
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

void sub_2441()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2506(unknown uParam0)
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

void sub_2676(unknown uParam0)
{
    unknown Result;

    GET_CHAR_MODEL( uParam0, ref Result );
    return Result;
}

void sub_2735(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    (uParam3^) = 0;
    StrCopy( (uParam2^), "network", 32 );
    REQUEST_STREAMED_TXD( uParam2, 1 );
    switch (uParam0)
    {
        case 0:
        case 1:
        StrCopy( (uParam1^), "deathmatch_cr", 16 );
        break;
        case 2:
        case 3:
        StrCopy( (uParam1^), "roving_cr", 16 );
        REQUEST_ADDITIONAL_TEXT( "MAFYA", 0 );
        (uParam3^) = 1;
        break;
        case 5:
        case 4:
        StrCopy( (uParam1^), "carsteal", 16 );
        REQUEST_ADDITIONAL_TEXT( "CSTEAL", 0 );
        (uParam3^) = 1;
        break;
        case 6:
        case 7:
        StrCopy( (uParam1^), "races_cr", 16 );
        REQUEST_ADDITIONAL_TEXT( "RACES", 0 );
        (uParam3^) = 1;
        break;
        case 10:
        StrCopy( (uParam1^), "tm_vip", 16 );
        REQUEST_ADDITIONAL_TEXT( "ESCAPE", 0 );
        (uParam3^) = 1;
        break;
        case 12:
        StrCopy( (uParam1^), "tm_base", 16 );
        REQUEST_ADDITIONAL_TEXT( "BASES", 0 );
        (uParam3^) = 1;
        break;
        case 13:
        StrCopy( (uParam1^), "coop_drugfac", 16 );
        REQUEST_ADDITIONAL_TEXT( "DRUGF", 0 );
        (uParam3^) = 1;
        break;
        case 14:
        StrCopy( (uParam1^), "coop_swatasslt", 16 );
        REQUEST_ADDITIONAL_TEXT( "NOOSE", 0 );
        (uParam3^) = 1;
        break;
        case 15:
        StrCopy( (uParam1^), "coop_bombdbase", 16 );
        REQUEST_ADDITIONAL_TEXT( "BOMBDB", 0 );
        (uParam3^) = 1;
        break;
        case 16:
        StrCopy( (uParam1^), "freemode_cr", 16 );
        break;
        case 8:
        StrCopy( (uParam1^), "party_mode", 16 );
        break;
        default:
        sub_1283( "\n #### network_main.sc - Can't find script for this gameMode ", uParam0 );
        sub_1238( "\n" );
        SCRIPT_ASSERT( "network_main.sc - Can't find script for gameMode" );
        break;
    }
    return;
}

void sub_3731(unknown uParam0, boolean bParam1)
{
    SET_PLAYER_CONTROL_FOR_NETWORK( sub_3742( uParam0 ), bParam1, 0 );
    SET_CHAR_VISIBLE( sub_3780( uParam0 ), bParam1 );
    if (bParam1)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3780( uParam0 ) )))
        {
            SET_CHAR_COLLISION( sub_3780( uParam0 ), 1 );
        }
        FREEZE_CHAR_POSITION( sub_3780( uParam0 ), 0 );
        SET_CHAR_NEVER_TARGETTED( sub_3780( uParam0 ), 0 );
        SET_PLAYER_INVINCIBLE( sub_3742( uParam0 ), 0 );
    }
    else
    {
        SET_CHAR_COLLISION( sub_3780( uParam0 ), 0 );
        FREEZE_CHAR_POSITION( sub_3780( uParam0 ), 1 );
        SET_CHAR_NEVER_TARGETTED( sub_3780( uParam0 ), 1 );
        SET_PLAYER_INVINCIBLE( sub_3742( uParam0 ), 1 );
        REMOVE_PTFX_FROM_PED( sub_3780( uParam0 ) );
        if (NOT (IS_CHAR_FATALLY_INJURED( sub_3780( uParam0 ) )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3780( uParam0 ) );
        }
    }
    return;
}

void sub_3742(unknown uParam0)
{
    return CONVERT_INT_TO_PLAYERINDEX( uParam0 );
}

void sub_3780(unknown uParam0)
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( uParam0 ), ref Result );
    return Result;
}

void sub_4080()
{
    CREATE_CAR_GENERATOR( 2247.48900000, 756.15060000, 4.83090000, 0.00000000, 2.00000000, 3.00000000, 837858166, -1, -1, -1, -1, 1, 0, 0, ref g_U64964[0] );
    CREATE_CAR_GENERATOR( 2230.76200000, 737.58500000, 4.83090000, 0.00000000, 2.00000000, 3.00000000, 837858166, -1, -1, -1, -1, 1, 0, 0, ref g_U64964[1] );
    CREATE_CAR_GENERATOR( 2213.96600000, 719.40220000, 4.83090000, 0.00000000, 2.00000000, 3.00000000, 837858166, -1, -1, -1, -1, 1, 0, 0, ref g_U64964[2] );
    CREATE_CAR_GENERATOR( 2133.43000000, 441.15310000, 22.71320000, 0.00000000, 2.00000000, 3.00000000, 837858166, -1, -1, -1, -1, 1, 0, 0, ref g_U64964[3] );
    CREATE_CAR_GENERATOR( 346.07890000, -716.95970000, 3.69180000, 0.00000000, 2.00000000, 3.00000000, 837858166, -1, -1, -1, -1, 1, 0, 0, ref g_U64964[4] );
    CREATE_CAR_GENERATOR( 390.21430000, -743.72410000, 3.69180000, 0.00000000, 2.00000000, 3.00000000, 837858166, -1, -1, -1, -1, 1, 0, 0, ref g_U64964[5] );
    CREATE_CAR_GENERATOR( 387.26900000, -701.77660000, 3.69190000, 0.00000000, 2.00000000, 3.00000000, 837858166, -1, -1, -1, -1, 1, 0, 0, ref g_U64964[6] );
    CREATE_CAR_GENERATOR( 414.48290000, -657.29790000, 3.69190000, 0.00000000, 2.00000000, 3.00000000, 837858166, -1, -1, -1, -1, 1, 0, 0, ref g_U64964[7] );
    CREATE_CAR_GENERATOR( -708.67830000, 357.50220000, 3.07230000, 0.00000000, 2.00000000, 3.00000000, 837858166, -1, -1, -1, -1, 1, 0, 0, ref g_U64964[8] );
    CREATE_CAR_GENERATOR( -2125.71500000, 145.09910000, 17.71310000, 0.00000000, 2.00000000, 3.00000000, 837858166, -1, -1, -1, -1, 1, 0, 0, ref g_U64964[9] );
    return;
}

int sub_4856(unknown uParam0)
{
    REQUEST_MODEL( uParam0 );
    if (HAS_MODEL_LOADED( uParam0 ))
    {
        return 1;
    }
    return 0;
}

void sub_5491(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_5647(unknown uParam0)
{
    REQUEST_SCRIPT( uParam0 );
    if (HAS_SCRIPT_LOADED( uParam0 ))
    {
        return 1;
    }
    return 0;
}

void sub_6213()
{
    if (l_U497)
    {
        FORCE_LOADING_SCREEN( 1 );
        FAKE_DEATHARREST();
        WAIT( 0 );
        l_U497 = 0;
        SETTIMERB( 0 );
        l_U498 = 1;
    }
    return;
}

int sub_6858()
{
    if (IS_THIS_MACHINE_THE_SERVER())
    {
        if (NETWORK_GET_NUM_UNFILLED_RESERVATIONS() != 0)
        {
            sub_1238( "\n #### network_main.sc - NETWORK_GET_NUM_UNFILLED_RESERVATIONS() <> 0" );
            return 1;
        }
    }
    return 0;
}

void sub_7682()
{
    if (l_U0 == -1)
    {
        l_U0 = NETWORK_GET_GAME_MODE();
    }
    return l_U0;
}

void sub_7729()
{
    sub_7738();
    sub_8470();
    g_U10 = 1;
    return;
}

void sub_7738()
{
    if (IS_NETWORK_GAME_RUNNING())
    {
        g_U64963 = 1;
        FAKE_DEATHARREST();
        if (NETWORK_IS_SESSION_STARTED())
        {
            sub_1238( "\n #### networkSetup.sch - NETWORK_IS_SESSION_STARTED is returning TRUE. " );
            if (NETWORK_END_SESSION())
            {
                sub_1238( "\n #### networkSetup.sch - called NETWORK_END_SESSION. " );
                while (NETWORK_END_SESSION_PENDING())
                {
                    WAIT( 0 );
                    sub_1238( "\n #### networkSetup.sch - NETWORK_END_SESSION_PENDING is returning TRUE. " );
                    g_U64963 = 1;
                }
            }
        }
        if ((NETWORK_HAVE_ACCEPTED_INVITE()) || (NOT NETWORK_IS_RENDEZVOUS()))
        {
            NETWORK_LEAVE_GAME();
            sub_1238( "\n #### networkSetup.sch - called NETWORK_LEAVE_GAME(). " );
            while (NETWORK_LEAVE_GAME_PENDING())
            {
                WAIT( 0 );
                sub_1238( "\n #### networkSetup.sch - NETWORK_LEAVE_GAME_PENDING is returning TRUE. " );
                g_U64963 = 1;
            }
        }
        else
        {
            sub_1238( "\n #### networkSetup.sch - not leaving game as NETWORK_IS_RENDEZVOUS is returning TRUE. " );
        }
    }
    else
    {
        sub_1238( "\n #### networkSetup.sch - IS_NETWORK_GAME_RUNNING is returning FALSE no need to clean up. " );
    }
    return;
}

void sub_8470()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    array(ref uVar2._fU0, 10);
    ref uVar2;
    uVar2._fU0[0] = g_U18._fU40;
    uVar2._fU0[1] = g_U18._fU108;
    uVar2._fU0[2] = g_U18._fU112;
    uVar2._fU0[3] = g_U18._fU396;
    if (g_U18._fU500)
    {
        uVar2._fU0[4] = 1;
    }
    else
    {
        uVar2._fU0[4] = 0;
    }
    if (g_U18._fU524)
    {
        uVar2._fU0[5] = 1;
    }
    else
    {
        uVar2._fU0[5] = 0;
    }
    uVar2._fU0[6] = g_U18._fU656;
    if (g_U15867[21]._fU132._fU0)
    {
        uVar2._fU0[7] = 1;
    }
    else
    {
        uVar2._fU0[7] = 0;
    }
    STORE_SCRIPT_VALUES_FOR_NETWORK_GAME( ref uVar2 );
    return;
}

void sub_8850()
{
    PRINTSTRING( "Just entered Start_A_Network_Game_From_A_Network_Game\n" );
    SHUTDOWN_AND_LAUNCH_NETWORK_GAME( g_U14 );
    WAIT( 0 );
    return;
}

int sub_9114(unknown uParam0)
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

