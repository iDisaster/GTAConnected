void main()
{
    l_U0 = 0;
    l_U1 = 1;
    l_U2 = 3;
    l_U4 = {633.79600000, 766.81700000, 4.16700000};
    l_U7 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    while (true)
    {
        WAIT( 0 );
        if (ALLOW_ONE_TIME_ONLY_COMMANDS_TO_RUN())
        {
            ;
        }
        if ((NOT g_U9149) AND (g_U751))
        {
            if ((NOT g_U9814._fU12) AND (NOT g_U10899))
            {
                if (NOT l_U7)
                {
                    if (NOT (IS_CHAR_DEAD( sub_123() )))
                    {
                        if ((NOT g_U9814._fU12) AND ((NOT g_U10899) AND (sub_177())))
                        {
                            sub_469();
                            g_U10899 = 1;
                            l_U7 = 1;
                            sub_595();
                            sub_646();
                            sub_1398();
                            REQUEST_SCRIPT( "MultiTutorial" );
                            SET_PLAYER_CONTROL( sub_210(), 0 );
                            DO_SCREEN_FADE_OUT( 500 );
                            while (NOT IS_SCREEN_FADED_OUT())
                            {
                                WAIT( 0 );
                                sub_1398();
                            }
                            while (NOT (HAS_SCRIPT_LOADED( "MultiTutorial" )))
                            {
                                sub_1398();
                                WAIT( 0 );
                                REQUEST_SCRIPT( "MultiTutorial" );
                            }
                            sub_1398();
                            START_NEW_SCRIPT( "MultiTutorial", 8192 );
                        }
                        else
                        {
                            g_U751 = 0;
                            g_U740 = 0;
                        }
                    }
                }
                else if (((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MultiTutorial" )) == 0) AND (NOT g_U10899))
                {
                    l_U7 = 0;
                    g_U751 = 0;
                    g_U740 = 0;
                }
            }
        }
        if (g_U9149)
        {
            TERMINATE_THIS_SCRIPT();
        }
    }
    return;
}

void sub_123()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_177()
{
    if ((IS_SCREEN_FADED_OUT()) || (IS_SCREEN_FADING()))
    {
        return 0;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_210() )))
    {
        return 0;
    }
    if (g_U10899)
    {
        return 0;
    }
    if (g_U10901)
    {
        return 0;
    }
    if (NOT g_U26676)
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_210() )))
    {
        return 0;
    }
    if (NOT sub_323())
    {
        return 0;
    }
    if ((g_U9835._fU0) || (IS_AUTO_SAVE_IN_PROGRESS()))
    {
        return 0;
    }
    GET_GAME_TIMER( ref l_U8 );
    if (g_U26678 > l_U8)
    {
        return 0;
    }
    if (IS_WANTED_LEVEL_GREATER( sub_210(), 0 ))
    {
        PRINT_HELP( "MTUT_WANTED" );
        sub_469();
        return 0;
    }
    return 1;
}

void sub_210()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_323()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U26678)
    {
        return 0;
    }
    return 1;
}

void sub_469()
{
    return sub_480( 0, 1 );
}

int sub_480(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U18._fU104 = 1;
    }
    if ((g_U482 != 9) AND (uParam1))
    {
        g_U18._fU100 = 1;
    }
    return 1;
}

void sub_595()
{
    g_U737 = 0;
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    return;
}

void sub_646()
{
    sub_655();
    sub_758( ref g_U9814._fU68 );
    sub_807();
    return;
}

void sub_655()
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

void sub_758(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_807()
{
    int I;

    for ( I = 0; I <= (g_U495 - 1); I++ )
    {
        if ((sub_845( 1, g_U495[I] )) == 0)
        {
            sub_1096( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_1274())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U18._fU404 = 1000;
    }
    g_U18._fU404 = 1000;
    return;
}

int sub_845(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1096(int iParam0)
{
    int I;

    if (iParam0 < (g_U495 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U495 - 1); I++ )
        {
            g_U495[I - 1] = {g_U495[I]};
        }
    }
    sub_1181( g_U495 - 1 );
    return;
}

void sub_1181(unknown uParam0)
{
    g_U495[uParam0]._fU0[0] = -1;
    g_U495[uParam0]._fU0[1] = -1;
    g_U495[uParam0]._fU0[2] = -1;
    return;
}

int sub_1274()
{
    int I;

    for ( I = 0; I <= (g_U495 - 1); I++ )
    {
        if ((sub_845( 4, g_U495[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_1398()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    g_U26678 = iVar2 + 2000;
    return;
}

