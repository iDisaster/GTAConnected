void main()
{
    int I;
    int iVar3;
    int iVar4;
    int iVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    int iVar12;
    int iVar13;
    int[12] iVar14;
    int[12] iVar27;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown[16] uVar43;
    unknown[12] uVar60;
    int iVar73;
    int iVar74;
    boolean bVar75;
    unknown uVar76;
    unknown uVar77;
    unknown uVar78;

    l_U0 = -1;
    l_U16 = 225;
    l_U576 = 0.00000000;
    l_U900 = -1;
    l_U1171 = -1;
    l_U1195 = 16;
    l_U1196 = 10000;
    l_U1197 = 255;
    l_U1198 = 1;
    l_U1215 = 0;
    l_U1216 = 0;
    l_U1217 = 0;
    l_U1218 = 1;
    l_U1219 = 0;
    l_U1220 = 0;
    l_U1221 = 0;
    l_U1222 = 0;
    l_U1223 = 0;
    l_U1224 = 0;
    l_U1225 = 0;
    l_U1226 = 0;
    l_U1227 = -1;
    l_U1228 = -1;
    l_U1229 = 18;
    l_U1236 = 0.15800000;
    l_U1237 = -0.02400000;
    l_U1238 = 0.01000000;
    l_U1239 = 0.12600000;
    l_U1253 = -1;
    l_U1280 = 120.00000000;
    l_U1334 = -1;
    l_U1336 = 0;
    l_U1339 = 0;
    l_U1345 = {1313.00000000, 70.00000000, 42.00000000};
    l_U1348 = {882.00000000, -29.00000000, 29.00000000};
    l_U1351 = {865.70000000, -517.80000000, 16.50000000};
    l_U1354 = {-28.00000000, -463.00000000, 16.00000000};
    l_U1357 = {-1247.00000000, 1540.00000000, 26.00000000};
    l_U1360 = {-160.00000000, 591.00000000, 119.00000000};
    l_U1363 = {79, 64857, 15};
    l_U1366 = {561.97610000, 1391.62600000, 30.85500000};
    l_U1369 = {943.00000000, -493.00000000, 16.00000000};
    l_U1372 = {1367, 192, 28};
    l_U1375 = {-97.00000000, 878.00000000, 15.00000000};
    l_U1378 = {-962.00000000, 893.00000000, 14.00000000};
    l_U1381 = {597.00000000, 1400.00000000, 12.00000000};
    l_U1384 = {-126.00000000, 1500.00000000, 23.00000000};
    l_U1387 = {1283, 400, 23};
    l_U1390 = {-1141.60400000, -374.96160000, 4.08170000};
    SET_MISSION_FLAG( 1 );
    REGISTER_HOST_BROADCAST_VARIABLES( ref l_U1516, 401, -1 );
    REGISTER_CLIENT_BROADCAST_VARIABLES( ref l_U1917, 97, -1 );
    RESERVE_NETWORK_MISSION_OBJECTS_FOR_HOST( 12 );
    RESERVE_NETWORK_MISSION_PEDS_FOR_HOST( 12 );
    RESERVE_NETWORK_MISSION_VEHICLES_FOR_HOST( 6 );
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    SET_GLOBAL_INSTANCE_PRIORITY( 1 );
    REGISTER_SCRIPT_WITH_AUDIO( 1 );
    sub_663( "MPKP2AU" );
    sub_782( 0, 0, "", 0 );
    sub_782( 1, 0, "PETROVIC", 0 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        while (true)
        {
            PRINTSTRING( "roving_cr.sc is waiting for Simon's network_main script to terminate it\n" );
            WAIT( 0 );
        }
    }
    array(ref iVar14, 12);
    array(ref iVar27, 12);
    array(ref uVar43, 16);
    array(ref uVar60, 12);
    sub_1099( "PLAYER", 1, 13, -1 );
    sub_1099( "KILLS", 2, 11, 3 );
    sub_1099( "DEATHS", 2, 6, 4 );
    if (sub_1248() == 3)
    {
        sub_1099( "TMKILLS", 2, 29, 6 );
    }
    sub_1099( "TASKS", 2, 9, 5 );
    sub_1099( "SCORE", 6, 16, 19 );
    sub_1363( 0, 8, "DM_LOCATION", 5, 0 );
    if (sub_1248() == 3)
    {
        sub_1363( 1, 1, "MA_DURATION", 13, 0 );
        sub_1363( 2, 12, "TEAM", 2, 0 );
        sub_1363( 3, 9, "FRIENDLY_FIRE", 2, 0 );
    }
    else
    {
        sub_1363( 1, 1, "MA_DURATION", 11, 0 );
    }
    sub_1363( sub_1551( 4 ), 1, "_AUTOAIM", 2, 0 );
    sub_1363( sub_1551( 5 ), 1, "CS_WEAPONS", 4, 0 );
    sub_1363( sub_1551( 6 ), 6, "POLICE_ON_OFF", 2, 0 );
    sub_1363( sub_1551( 7 ), 1, "TRAFFIC", 4, 0 );
    sub_1363( sub_1551( 8 ), 1, "PEDESTRIANS", 4, 0 );
    if (sub_1248() == 3)
    {
        sub_1363( sub_1551( 9 ), 1, "BLIPS_OPTION", 6, 0 );
    }
    else
    {
        sub_1363( sub_1551( 9 ), 1, "BLIPS_OPTION", 5, 0 );
    }
    if (N_604003528())
    {
        sub_1363( sub_1551( 10 ), 6, "NAME_OPT", 2, 0 );
    }
    else
    {
        sub_1363( sub_1551( 10 ), 6, "NAME_OPT_PS3", 2, 0 );
    }
    sub_1363( sub_1551( 11 ), 6, "RETICULE_OPT", 2, 0 );
    if (sub_1248() == 3)
    {
        sub_1363( sub_1551( 12 ), 1, "VOICE_OPT", 4, 0 );
    }
    else
    {
        sub_1363( sub_1551( 12 ), 1, "VOICE_OPT", 3, 0 );
    }
    sub_1363( sub_1551( 13 ), 1, "SPAWN_TIME", 7, 0 );
    sub_1363( sub_1551( 14 ), 1, "TIME_OF_DAY", 5, 0 );
    sub_1363( sub_1551( 15 ), 1, "WEATHER", 6, 0 );
    sub_1363( sub_1551( 16 ), 16, "DESCRIPTION", 2, 0 );
    sub_1363( sub_1551( 17 ), 15, "RADIO_OPT", 19, 0 );
    if (NOT NETWORK_IS_TVT())
    {
        sub_1363( sub_1551( 18 ), 17, "KICK_PLAYER", 16, GET_PLAYER_ID() );
    }
    if (sub_2145())
    {
        l_U1516._fU620[sub_1551( 4 )] = 1;
        l_U1516._fU620[sub_1551( 10 )] = 1;
        l_U1516._fU620[sub_1551( 11 )] = 1;
        l_U1516._fU620[sub_1551( 13 )] = 1;
        l_U1516._fU620[sub_1551( 7 )] = 2;
        l_U1516._fU620[sub_1551( 8 )] = 1;
        if (sub_1248() == 3)
        {
            l_U1516._fU620[sub_1551( 12 )] = 3;
        }
        sub_2330();
    }
    OPEN_SEQUENCE_TASK( ref l_U2016 );
    TASK_CAR_DRIVE_WANDER( 0, 0, 18.00000000, 0 );
    CLOSE_SEQUENCE_TASK( l_U2016 );
    OPEN_SEQUENCE_TASK( ref l_U2017 );
    TASK_CAR_DRIVE_WANDER( 0, 0, 18.00000000, 2 );
    CLOSE_SEQUENCE_TASK( l_U2017 );
    OPEN_SEQUENCE_TASK( ref l_U2018 );
    TASK_WANDER_STANDARD( 0 );
    CLOSE_SEQUENCE_TASK( l_U2018 );
    OPEN_SEQUENCE_TASK( ref l_U2020 );
    TASK_GUARD_CURRENT_POSITION( 0, 8.00000000, 30.00000000, 1 );
    CLOSE_SEQUENCE_TASK( l_U2020 );
    OPEN_SEQUENCE_TASK( ref l_U2019 );
    TASK_GUARD_CURRENT_POSITION( 0, 8.00000000, 30.00000000, 0 );
    CLOSE_SEQUENCE_TASK( l_U2019 );
    OPEN_SEQUENCE_TASK( ref l_U2021[0] );
    TASK_START_SCENARIO_IN_PLACE( 0, "HangOut_Street", -1082130432 );
    CLOSE_SEQUENCE_TASK( l_U2021[0] );
    OPEN_SEQUENCE_TASK( ref l_U2021[1] );
    TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_Standing", -1082130432 );
    CLOSE_SEQUENCE_TASK( l_U2021[1] );
    OPEN_SEQUENCE_TASK( ref l_U2021[2] );
    TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_SmokingOutsideOffice", -1082130432 );
    CLOSE_SEQUENCE_TASK( l_U2021[2] );
    OPEN_SEQUENCE_TASK( ref l_U2025 );
    TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_Leaning", -1082130432 );
    CLOSE_SEQUENCE_TASK( l_U2025 );
    OPEN_SEQUENCE_TASK( ref l_U2026 );
    TASK_CAR_MISSION( 0, 0, 0, 0, 0.00000000, 2, 6, 30 );
    CLOSE_SEQUENCE_TASK( l_U2026 );
    COPY_CHAR_DECISION_MAKER( 65555, ref l_U2031 );
    ADD_CHAR_DECISION_MAKER_EVENT_RESPONSE( l_U2031, 9, 1900, 0.00000000, 100.00000000, 100.00000000, 0.00000000, 1, 1 );
    ADD_CHAR_DECISION_MAKER_EVENT_RESPONSE( l_U2031, 9, 200, 100.00000000, 0.00000000, 0.00000000, 100.00000000, 1, 1 );
    ADD_CHAR_DECISION_MAKER_EVENT_RESPONSE( l_U2031, 15, 1900, 0.00000000, 0.00000000, 100.00000000, 0.00000000, 1, 1 );
    ADD_CHAR_DECISION_MAKER_EVENT_RESPONSE( l_U2031, 15, 200, 100.00000000, 100.00000000, 0.00000000, 100.00000000, 1, 1 );
    ADD_CHAR_DECISION_MAKER_EVENT_RESPONSE( l_U2031, 17, 1900, 0.00000000, 0.00000000, 100.00000000, 0.00000000, 1, 1 );
    ADD_CHAR_DECISION_MAKER_EVENT_RESPONSE( l_U2031, 17, 200, 100.00000000, 100.00000000, 0.00000000, 100.00000000, 1, 1 );
    ADD_CHAR_DECISION_MAKER_EVENT_RESPONSE( l_U2031, 41, 1900, 0.00000000, 100.00000000, 100.00000000, 0.00000000, 1, 1 );
    ADD_CHAR_DECISION_MAKER_EVENT_RESPONSE( l_U2031, 41, 200, 100.00000000, 0.00000000, 0.00000000, 100.00000000, 1, 1 );
    ADD_CHAR_DECISION_MAKER_EVENT_RESPONSE( l_U2031, 73, 1900, 0.00000000, 0.00000000, 100.00000000, 0.00000000, 1, 1 );
    ADD_CHAR_DECISION_MAKER_EVENT_RESPONSE( l_U2031, 73, 200, 100.00000000, 100.00000000, 0.00000000, 100.00000000, 1, 1 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U2027 );
    LOAD_COMBAT_DECISION_MAKER( 1, ref l_U2028 );
    SET_DECISION_MAKER_ATTRIBUTE_RETREATING_BEHAVIOUR( l_U2028, 2 );
    LOAD_COMBAT_DECISION_MAKER( 9, ref l_U2029 );
    LOAD_COMBAT_DECISION_MAKER( 10, ref l_U2030 );
    SET_RELATIONSHIP( 1, 27, 31 );
    SET_RELATIONSHIP( 1, 27, 32 );
    SET_RELATIONSHIP( 1, 27, 33 );
    SET_RELATIONSHIP( 1, 27, 34 );
    SET_RELATIONSHIP( 1, 27, 35 );
    SET_RELATIONSHIP( 1, 27, 36 );
    SET_RELATIONSHIP( 1, 27, 37 );
    SET_RELATIONSHIP( 1, 27, 38 );
    SET_RELATIONSHIP( 1, 27, 39 );
    SET_RELATIONSHIP( 1, 27, 40 );
    SET_RELATIONSHIP( 1, 27, 41 );
    SET_RELATIONSHIP( 1, 27, 42 );
    SET_RELATIONSHIP( 1, 27, 43 );
    SET_RELATIONSHIP( 1, 27, 44 );
    SET_RELATIONSHIP( 1, 27, 45 );
    SET_RELATIONSHIP( 1, 27, 46 );
    SET_RELATIONSHIP( 1, 27, 47 );
    SET_RELATIONSHIP( 1, 27, 48 );
    SET_RELATIONSHIP( 1, 27, 49 );
    SET_RELATIONSHIP( 1, 27, 50 );
    SET_RELATIONSHIP( 1, 27, 51 );
    SET_RELATIONSHIP( 1, 27, 52 );
    SET_RELATIONSHIP( 1, 27, 53 );
    SET_RELATIONSHIP( 1, 27, 54 );
    SET_RELATIONSHIP( 1, 27, 1 );
    SET_RELATIONSHIP( 1, 27, 2 );
    SET_RELATIONSHIP( 1, 27, 3 );
    SET_RELATIONSHIP( 1, 27, 4 );
    SET_RELATIONSHIP( 1, 27, 5 );
    SET_RELATIONSHIP( 1, 27, 6 );
    SET_RELATIONSHIP( 1, 27, 7 );
    SET_RELATIONSHIP( 1, 27, 8 );
    SET_RELATIONSHIP( 1, 27, 9 );
    SET_RELATIONSHIP( 1, 27, 10 );
    SET_RELATIONSHIP( 1, 27, 11 );
    SET_RELATIONSHIP( 1, 27, 12 );
    SET_RELATIONSHIP( 1, 27, 13 );
    SET_RELATIONSHIP( 1, 27, 14 );
    SET_RELATIONSHIP( 1, 27, 15 );
    SET_RELATIONSHIP( 1, 27, 16 );
    SET_RELATIONSHIP( 1, 27, 17 );
    SET_RELATIONSHIP( 1, 27, 18 );
    SET_RELATIONSHIP( 1, 27, 19 );
    SET_RELATIONSHIP( 1, 27, 20 );
    SET_RELATIONSHIP( 1, 27, 21 );
    SET_RELATIONSHIP( 1, 27, 28 );
    SET_RELATIONSHIP( 1, 31, 27 );
    SET_RELATIONSHIP( 1, 32, 27 );
    SET_RELATIONSHIP( 1, 33, 27 );
    SET_RELATIONSHIP( 1, 34, 27 );
    SET_RELATIONSHIP( 1, 35, 27 );
    SET_RELATIONSHIP( 1, 36, 27 );
    SET_RELATIONSHIP( 1, 37, 27 );
    SET_RELATIONSHIP( 1, 38, 27 );
    SET_RELATIONSHIP( 1, 39, 27 );
    SET_RELATIONSHIP( 1, 40, 27 );
    SET_RELATIONSHIP( 1, 41, 27 );
    SET_RELATIONSHIP( 1, 42, 27 );
    SET_RELATIONSHIP( 1, 43, 27 );
    SET_RELATIONSHIP( 1, 44, 27 );
    SET_RELATIONSHIP( 1, 45, 27 );
    SET_RELATIONSHIP( 1, 46, 27 );
    SET_RELATIONSHIP( 1, 47, 27 );
    SET_RELATIONSHIP( 1, 48, 27 );
    SET_RELATIONSHIP( 1, 49, 27 );
    SET_RELATIONSHIP( 1, 50, 27 );
    SET_RELATIONSHIP( 1, 51, 27 );
    SET_RELATIONSHIP( 1, 52, 27 );
    SET_RELATIONSHIP( 1, 53, 27 );
    SET_RELATIONSHIP( 1, 54, 27 );
    SET_RELATIONSHIP( 1, 1, 27 );
    SET_RELATIONSHIP( 1, 2, 27 );
    SET_RELATIONSHIP( 1, 3, 27 );
    SET_RELATIONSHIP( 1, 4, 27 );
    SET_RELATIONSHIP( 1, 5, 27 );
    SET_RELATIONSHIP( 1, 6, 27 );
    SET_RELATIONSHIP( 1, 7, 27 );
    SET_RELATIONSHIP( 1, 8, 27 );
    SET_RELATIONSHIP( 1, 9, 27 );
    SET_RELATIONSHIP( 1, 10, 27 );
    SET_RELATIONSHIP( 1, 11, 27 );
    SET_RELATIONSHIP( 1, 12, 27 );
    SET_RELATIONSHIP( 1, 13, 27 );
    SET_RELATIONSHIP( 1, 14, 27 );
    SET_RELATIONSHIP( 1, 15, 27 );
    SET_RELATIONSHIP( 1, 16, 27 );
    SET_RELATIONSHIP( 1, 17, 27 );
    SET_RELATIONSHIP( 1, 18, 27 );
    SET_RELATIONSHIP( 1, 19, 27 );
    SET_RELATIONSHIP( 1, 20, 27 );
    SET_RELATIONSHIP( 1, 21, 27 );
    SET_RELATIONSHIP( 1, 28, 27 );
    SET_RELATIONSHIP( 1, 30, 31 );
    SET_RELATIONSHIP( 1, 30, 32 );
    SET_RELATIONSHIP( 1, 30, 33 );
    SET_RELATIONSHIP( 1, 30, 34 );
    SET_RELATIONSHIP( 1, 30, 35 );
    SET_RELATIONSHIP( 1, 30, 36 );
    SET_RELATIONSHIP( 1, 30, 37 );
    SET_RELATIONSHIP( 1, 30, 38 );
    SET_RELATIONSHIP( 1, 30, 39 );
    SET_RELATIONSHIP( 1, 30, 40 );
    SET_RELATIONSHIP( 1, 30, 41 );
    SET_RELATIONSHIP( 1, 30, 42 );
    SET_RELATIONSHIP( 1, 30, 43 );
    SET_RELATIONSHIP( 1, 30, 44 );
    SET_RELATIONSHIP( 1, 30, 45 );
    SET_RELATIONSHIP( 1, 30, 46 );
    SET_RELATIONSHIP( 1, 30, 47 );
    SET_RELATIONSHIP( 1, 30, 48 );
    SET_RELATIONSHIP( 1, 30, 49 );
    SET_RELATIONSHIP( 1, 30, 50 );
    SET_RELATIONSHIP( 1, 30, 51 );
    SET_RELATIONSHIP( 1, 30, 52 );
    SET_RELATIONSHIP( 1, 30, 53 );
    SET_RELATIONSHIP( 1, 30, 54 );
    SET_RELATIONSHIP( 5, 30, 1 );
    SET_RELATIONSHIP( 5, 30, 2 );
    SET_RELATIONSHIP( 5, 30, 3 );
    SET_RELATIONSHIP( 5, 30, 4 );
    SET_RELATIONSHIP( 5, 30, 5 );
    SET_RELATIONSHIP( 5, 30, 6 );
    SET_RELATIONSHIP( 5, 30, 7 );
    SET_RELATIONSHIP( 5, 30, 8 );
    SET_RELATIONSHIP( 5, 30, 9 );
    SET_RELATIONSHIP( 5, 30, 10 );
    SET_RELATIONSHIP( 5, 30, 11 );
    SET_RELATIONSHIP( 5, 30, 12 );
    SET_RELATIONSHIP( 5, 30, 13 );
    SET_RELATIONSHIP( 5, 30, 14 );
    SET_RELATIONSHIP( 5, 30, 15 );
    SET_RELATIONSHIP( 5, 30, 16 );
    SET_RELATIONSHIP( 5, 30, 17 );
    SET_RELATIONSHIP( 5, 30, 18 );
    SET_RELATIONSHIP( 5, 30, 19 );
    SET_RELATIONSHIP( 5, 30, 20 );
    SET_RELATIONSHIP( 5, 30, 21 );
    SET_RELATIONSHIP( 5, 30, 28 );
    SET_RELATIONSHIP( 1, 31, 30 );
    SET_RELATIONSHIP( 1, 32, 30 );
    SET_RELATIONSHIP( 1, 33, 30 );
    SET_RELATIONSHIP( 1, 34, 30 );
    SET_RELATIONSHIP( 1, 35, 30 );
    SET_RELATIONSHIP( 1, 36, 30 );
    SET_RELATIONSHIP( 1, 37, 30 );
    SET_RELATIONSHIP( 1, 38, 30 );
    SET_RELATIONSHIP( 1, 39, 30 );
    SET_RELATIONSHIP( 1, 40, 30 );
    SET_RELATIONSHIP( 1, 41, 30 );
    SET_RELATIONSHIP( 1, 42, 30 );
    SET_RELATIONSHIP( 1, 43, 30 );
    SET_RELATIONSHIP( 1, 44, 30 );
    SET_RELATIONSHIP( 1, 45, 30 );
    SET_RELATIONSHIP( 1, 46, 30 );
    SET_RELATIONSHIP( 1, 47, 30 );
    SET_RELATIONSHIP( 1, 48, 30 );
    SET_RELATIONSHIP( 1, 49, 30 );
    SET_RELATIONSHIP( 1, 50, 30 );
    SET_RELATIONSHIP( 1, 51, 30 );
    SET_RELATIONSHIP( 1, 52, 30 );
    SET_RELATIONSHIP( 1, 53, 30 );
    SET_RELATIONSHIP( 1, 54, 30 );
    SET_RELATIONSHIP( 1, 28, 31 );
    SET_RELATIONSHIP( 1, 28, 32 );
    SET_RELATIONSHIP( 1, 28, 33 );
    SET_RELATIONSHIP( 1, 28, 34 );
    SET_RELATIONSHIP( 1, 28, 35 );
    SET_RELATIONSHIP( 1, 28, 36 );
    SET_RELATIONSHIP( 1, 28, 37 );
    SET_RELATIONSHIP( 1, 28, 38 );
    SET_RELATIONSHIP( 1, 28, 39 );
    SET_RELATIONSHIP( 1, 28, 40 );
    SET_RELATIONSHIP( 1, 28, 41 );
    SET_RELATIONSHIP( 1, 28, 42 );
    SET_RELATIONSHIP( 1, 28, 43 );
    SET_RELATIONSHIP( 1, 28, 44 );
    SET_RELATIONSHIP( 1, 28, 45 );
    SET_RELATIONSHIP( 1, 28, 46 );
    SET_RELATIONSHIP( 1, 28, 47 );
    SET_RELATIONSHIP( 1, 28, 48 );
    SET_RELATIONSHIP( 1, 28, 49 );
    SET_RELATIONSHIP( 1, 28, 50 );
    SET_RELATIONSHIP( 1, 28, 51 );
    SET_RELATIONSHIP( 1, 28, 52 );
    SET_RELATIONSHIP( 1, 28, 53 );
    SET_RELATIONSHIP( 1, 28, 54 );
    SET_RELATIONSHIP( 1, 31, 28 );
    SET_RELATIONSHIP( 1, 32, 28 );
    SET_RELATIONSHIP( 1, 33, 28 );
    SET_RELATIONSHIP( 1, 34, 28 );
    SET_RELATIONSHIP( 1, 35, 28 );
    SET_RELATIONSHIP( 1, 36, 28 );
    SET_RELATIONSHIP( 1, 37, 28 );
    SET_RELATIONSHIP( 1, 38, 28 );
    SET_RELATIONSHIP( 1, 39, 28 );
    SET_RELATIONSHIP( 1, 40, 28 );
    SET_RELATIONSHIP( 1, 41, 28 );
    SET_RELATIONSHIP( 1, 42, 28 );
    SET_RELATIONSHIP( 1, 43, 28 );
    SET_RELATIONSHIP( 1, 44, 28 );
    SET_RELATIONSHIP( 1, 45, 28 );
    SET_RELATIONSHIP( 1, 46, 28 );
    SET_RELATIONSHIP( 1, 47, 28 );
    SET_RELATIONSHIP( 1, 48, 28 );
    SET_RELATIONSHIP( 1, 49, 28 );
    SET_RELATIONSHIP( 1, 50, 28 );
    SET_RELATIONSHIP( 1, 51, 28 );
    SET_RELATIONSHIP( 1, 52, 28 );
    SET_RELATIONSHIP( 1, 53, 28 );
    SET_RELATIONSHIP( 1, 54, 28 );
    SET_RELATIONSHIP( 5, 29, 31 );
    SET_RELATIONSHIP( 5, 29, 32 );
    SET_RELATIONSHIP( 5, 29, 33 );
    SET_RELATIONSHIP( 5, 29, 34 );
    SET_RELATIONSHIP( 5, 29, 35 );
    SET_RELATIONSHIP( 5, 29, 36 );
    SET_RELATIONSHIP( 5, 29, 37 );
    SET_RELATIONSHIP( 5, 29, 38 );
    SET_RELATIONSHIP( 5, 29, 39 );
    SET_RELATIONSHIP( 5, 29, 40 );
    SET_RELATIONSHIP( 5, 29, 41 );
    SET_RELATIONSHIP( 5, 29, 42 );
    SET_RELATIONSHIP( 5, 29, 43 );
    SET_RELATIONSHIP( 5, 29, 44 );
    SET_RELATIONSHIP( 5, 29, 45 );
    SET_RELATIONSHIP( 5, 29, 46 );
    SET_RELATIONSHIP( 5, 29, 47 );
    SET_RELATIONSHIP( 5, 29, 48 );
    SET_RELATIONSHIP( 5, 29, 49 );
    SET_RELATIONSHIP( 5, 29, 50 );
    SET_RELATIONSHIP( 5, 29, 51 );
    SET_RELATIONSHIP( 5, 29, 52 );
    SET_RELATIONSHIP( 5, 29, 53 );
    SET_RELATIONSHIP( 5, 29, 54 );
    SET_RELATIONSHIP( 5, 31, 29 );
    SET_RELATIONSHIP( 5, 32, 29 );
    SET_RELATIONSHIP( 5, 33, 29 );
    SET_RELATIONSHIP( 5, 34, 29 );
    SET_RELATIONSHIP( 5, 35, 29 );
    SET_RELATIONSHIP( 5, 36, 29 );
    SET_RELATIONSHIP( 5, 37, 29 );
    SET_RELATIONSHIP( 5, 38, 29 );
    SET_RELATIONSHIP( 5, 39, 29 );
    SET_RELATIONSHIP( 5, 40, 29 );
    SET_RELATIONSHIP( 5, 41, 29 );
    SET_RELATIONSHIP( 5, 42, 29 );
    SET_RELATIONSHIP( 5, 43, 29 );
    SET_RELATIONSHIP( 5, 44, 29 );
    SET_RELATIONSHIP( 5, 45, 29 );
    SET_RELATIONSHIP( 5, 46, 29 );
    SET_RELATIONSHIP( 5, 47, 29 );
    SET_RELATIONSHIP( 5, 48, 29 );
    SET_RELATIONSHIP( 5, 49, 29 );
    SET_RELATIONSHIP( 5, 50, 29 );
    SET_RELATIONSHIP( 5, 51, 29 );
    SET_RELATIONSHIP( 5, 52, 29 );
    SET_RELATIONSHIP( 5, 53, 29 );
    SET_RELATIONSHIP( 5, 54, 29 );
    SET_RELATIONSHIP( 1, 26, 29 );
    SET_RELATIONSHIP( 1, 29, 26 );
    SET_RELATIONSHIP( 5, 31, 26 );
    SET_RELATIONSHIP( 5, 32, 26 );
    SET_RELATIONSHIP( 5, 33, 26 );
    SET_RELATIONSHIP( 5, 34, 26 );
    SET_RELATIONSHIP( 5, 35, 26 );
    SET_RELATIONSHIP( 5, 36, 26 );
    SET_RELATIONSHIP( 5, 37, 26 );
    SET_RELATIONSHIP( 5, 38, 26 );
    SET_RELATIONSHIP( 5, 39, 26 );
    SET_RELATIONSHIP( 5, 40, 26 );
    SET_RELATIONSHIP( 5, 41, 26 );
    SET_RELATIONSHIP( 5, 42, 26 );
    SET_RELATIONSHIP( 5, 43, 26 );
    SET_RELATIONSHIP( 5, 44, 26 );
    SET_RELATIONSHIP( 5, 45, 26 );
    SET_RELATIONSHIP( 5, 46, 26 );
    SET_RELATIONSHIP( 5, 47, 26 );
    SET_RELATIONSHIP( 5, 48, 26 );
    SET_RELATIONSHIP( 5, 49, 26 );
    SET_RELATIONSHIP( 5, 50, 26 );
    SET_RELATIONSHIP( 5, 51, 26 );
    SET_RELATIONSHIP( 5, 52, 26 );
    SET_RELATIONSHIP( 5, 53, 26 );
    SET_RELATIONSHIP( 5, 54, 26 );
    SET_RELATIONSHIP( 1, 24, 3 );
    SET_RELATIONSHIP( 1, 24, 23 );
    SET_RELATIONSHIP( 1, 24, 25 );
    SET_RELATIONSHIP( 1, 3, 24 );
    SET_RELATIONSHIP( 1, 23, 24 );
    SET_RELATIONSHIP( 1, 25, 24 );
    SET_RELATIONSHIP( 1, 23, 3 );
    SET_RELATIONSHIP( 1, 23, 24 );
    SET_RELATIONSHIP( 1, 23, 25 );
    SET_RELATIONSHIP( 1, 3, 23 );
    SET_RELATIONSHIP( 1, 24, 23 );
    SET_RELATIONSHIP( 1, 25, 23 );
    SET_RELATIONSHIP( 5, 23, 31 );
    SET_RELATIONSHIP( 5, 23, 32 );
    SET_RELATIONSHIP( 5, 23, 33 );
    SET_RELATIONSHIP( 5, 23, 34 );
    SET_RELATIONSHIP( 5, 23, 35 );
    SET_RELATIONSHIP( 5, 23, 36 );
    SET_RELATIONSHIP( 5, 23, 37 );
    SET_RELATIONSHIP( 5, 23, 38 );
    SET_RELATIONSHIP( 5, 23, 39 );
    SET_RELATIONSHIP( 5, 23, 40 );
    SET_RELATIONSHIP( 5, 23, 41 );
    SET_RELATIONSHIP( 5, 23, 42 );
    SET_RELATIONSHIP( 5, 23, 43 );
    SET_RELATIONSHIP( 5, 23, 44 );
    SET_RELATIONSHIP( 5, 23, 45 );
    SET_RELATIONSHIP( 5, 23, 46 );
    SET_RELATIONSHIP( 5, 23, 47 );
    SET_RELATIONSHIP( 5, 23, 48 );
    SET_RELATIONSHIP( 5, 23, 49 );
    SET_RELATIONSHIP( 5, 23, 50 );
    SET_RELATIONSHIP( 5, 23, 51 );
    SET_RELATIONSHIP( 5, 23, 52 );
    SET_RELATIONSHIP( 5, 23, 53 );
    SET_RELATIONSHIP( 5, 23, 54 );
    SET_RELATIONSHIP( 5, 31, 23 );
    SET_RELATIONSHIP( 5, 32, 23 );
    SET_RELATIONSHIP( 5, 33, 23 );
    SET_RELATIONSHIP( 5, 34, 23 );
    SET_RELATIONSHIP( 5, 35, 23 );
    SET_RELATIONSHIP( 5, 36, 23 );
    SET_RELATIONSHIP( 5, 37, 23 );
    SET_RELATIONSHIP( 5, 38, 23 );
    SET_RELATIONSHIP( 5, 39, 23 );
    SET_RELATIONSHIP( 5, 40, 23 );
    SET_RELATIONSHIP( 5, 41, 23 );
    SET_RELATIONSHIP( 5, 42, 23 );
    SET_RELATIONSHIP( 5, 43, 23 );
    SET_RELATIONSHIP( 5, 44, 23 );
    SET_RELATIONSHIP( 5, 45, 23 );
    SET_RELATIONSHIP( 5, 46, 23 );
    SET_RELATIONSHIP( 5, 47, 23 );
    SET_RELATIONSHIP( 5, 48, 23 );
    SET_RELATIONSHIP( 5, 49, 23 );
    SET_RELATIONSHIP( 5, 50, 23 );
    SET_RELATIONSHIP( 5, 51, 23 );
    SET_RELATIONSHIP( 5, 52, 23 );
    SET_RELATIONSHIP( 5, 53, 23 );
    SET_RELATIONSHIP( 5, 54, 23 );
    sub_7249();
    LOAD_ALL_PATH_NODES( 1 );
    SET_MONEY_CARRIED_BY_ALL_NEW_PEDS( 0 );
    SET_PLAYERS_DROP_MONEY_IN_NETWORK_GAME( 1 );
    sub_8851();
    sub_9307( ref l_U1917[GET_PLAYER_ID()]._fU8 );
    sub_9439();
    l_U1917[GET_PLAYER_ID()]._fU20 = -1;
    sub_9490( 1 );
    l_U1917[GET_PLAYER_ID()]._fU16 = -1;
    if (sub_1248() == 3)
    {
        l_U1917[GET_PLAYER_ID()]._fU4 = 1;
    }
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
        l_U2074 = 0;
        iVar74 = 0;
        if (NOT (IS_CONTROL_PRESSED( 0, 23 )))
        {
            if (NOT sub_9668())
            {
                bVar75 = false;
            }
        }
        GET_GAME_TIMER( ref iVar5 );
        GET_NETWORK_TIMER( ref l_U2014 );
        sub_10099();
        if (LOCAL_PLAYER_IS_READY_TO_START_PLAYING())
        {
            LAUNCH_LOCAL_PLAYER_IN_NETWORK_GAME();
        }
        if ((l_U1917[GET_PLAYER_ID()]._fU0 == 1) || (l_U1917[GET_PLAYER_ID()]._fU0 == 0))
        {
            if (l_U1516._fU0 == 2)
            {
                sub_84417();
            }
            sub_84485();
        }
        if (N_604003528())
        {
            if ((NOT sub_82404()) AND (l_U1516._fU0 == 2))
            {
                sub_122476( l_U1516._fU4, 0, 0 );
            }
            else if ((sub_1248() == 3) AND ((GET_PLAYER_TEAM( sub_90115() )) > -1))
            {
                sub_122476( sub_82580(), 1, l_U1516._fU1048[GET_PLAYER_TEAM( sub_90115() )] );
            }
            else
            {
                sub_122476( sub_82580(), 1, 0 );
            }
        }
        sub_123716();
        sub_126128( 16, ref l_U1917[0]._fU8, ref l_U1917[1]._fU8, ref l_U1917[2]._fU8, ref l_U1917[3]._fU8, ref l_U1917[4]._fU8, ref l_U1917[5]._fU8, ref l_U1917[6]._fU8, ref l_U1917[7]._fU8, ref l_U1917[8]._fU8, ref l_U1917[9]._fU8, ref l_U1917[10]._fU8, ref l_U1917[11]._fU8, ref l_U1917[12]._fU8, ref l_U1917[13]._fU8, ref l_U1917[14]._fU8, ref l_U1917[15]._fU8 );
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (l_U1516._fU0 == 2)
            {
                if ((GET_PLAYER_TEAM( sub_90115() )) > -1)
                {
                    SET_MULTIPLAYER_HUD_CASH( l_U1516._fU1048[GET_PLAYER_TEAM( sub_90115() )] );
                    DISPLAY_CASH( 0 );
                }
                else
                {
                    sub_128092( l_U1516._fU708[GET_PLAYER_ID()] );
                    SET_MULTIPLAYER_HUD_CASH( -1 );
                }
                if ((NOT IS_PAUSE_MENU_ACTIVE()) AND (((HOW_LONG_HAS_NETWORK_PLAYER_BEEN_DEAD_FOR( GET_PLAYER_ID() )) > (sub_128224( l_U1516._fU620[sub_1551( 13 )] ))) || (l_U1917[GET_PLAYER_ID()]._fU0 == 1)))
                {
                    if ((l_U1917[GET_PLAYER_ID()]._fU0 == 1) || (IS_SCREEN_FADED_OUT()))
                    {
                        if (sub_128400( ref uVar7, ref uVar6 ))
                        {
                            if ((l_U1516._fU620[sub_1551( 5 )]) != 12)
                            {
                                if ((l_U1516._fU620[sub_1551( 5 )]) != 3)
                                {
                                    REQUEST_MODEL( sub_51915( 12 ) );
                                }
                                REQUEST_MODEL( sub_51915( sub_129089( l_U1516._fU620[sub_1551( 5 )], ref iVar4 ) ) );
                            }
                            sub_129597( ref uVar10 );
                            sub_104389( GET_PLAYER_ID(), 0 );
                            REQUEST_COLLISION_AT_POSN( uVar7._fU0, uVar7._fU4, uVar7._fU8 );
                            RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), uVar7, uVar6 );
                            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_9794() );
                            SET_CHAR_HEALTH( sub_9794(), 300 );
                            REMOVE_ALL_CHAR_WEAPONS( sub_9794() );
                            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_9794(), 0 );
                            SET_GAME_CAM_HEADING( 0.00000000 );
                            if (l_U1917[GET_PLAYER_ID()]._fU0 == 1)
                            {
                                CLEAR_AREA( uVar7._fU0, uVar7._fU4, uVar7._fU8, 200.00000000, 0 );
                            }
                            FORCE_LOADING_SCREEN( 1 );
                            sub_129841( uVar7 );
                            FORCE_LOADING_SCREEN( 0 );
                            if ((l_U1516._fU620[sub_1551( 5 )]) != 12)
                            {
                                if (((l_U1516._fU620[sub_1551( 5 )]) == 8) || ((l_U1516._fU620[sub_1551( 5 )]) == 3))
                                {
                                    GIVE_WEAPON_TO_CHAR( sub_9794(), sub_129089( l_U1516._fU620[sub_1551( 5 )], ref iVar4 ), iVar4 * 2, 0 );
                                }
                                else
                                {
                                    GIVE_WEAPON_TO_CHAR( sub_9794(), sub_129089( l_U1516._fU620[sub_1551( 5 )], ref iVar4 ), iVar4, 0 );
                                    GIVE_WEAPON_TO_CHAR( sub_9794(), 12, 360, 0 );
                                    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_51915( 12 ) );
                                }
                                MARK_MODEL_AS_NO_LONGER_NEEDED( sub_51915( sub_129089( l_U1516._fU620[sub_1551( 5 )], ref iVar4 ) ) );
                            }
                            sub_130176( ref l_U1516._fU620 );
                            for ( I = 0; I < 12; I++ )
                            {
                                iVar27[I] = 0;
                            }
                            CLEAR_THIS_PRINT( "LEFT_PED_BEHIND" );
                            CLEAR_THIS_PRINT( "LEFT_PEDFBEHIND" );
                            if (IS_SCREEN_FADED_OUT())
                            {
                                sub_85583( 500 );
                            }
                            sub_104389( GET_PLAYER_ID(), 1 );
                            if (l_U1917[GET_PLAYER_ID()]._fU0 == 1)
                            {
                                l_U1917[GET_PLAYER_ID()]._fU0 = 2;
                            }
                        }
                    }
                    else if (IS_SCREEN_FADED_IN())
                    {
                        sub_85484( 500 );
                    }
                }
                sub_131198();
                sub_142081();
                sub_142436();
                if (NOT (sub_31163( uVar76, l_U1516._fU492, 3.00000000 )))
                {
                    SET_ALL_CAR_GENERATORS_BACK_TO_ACTIVE();
                    uVar76 = {l_U1516._fU492};
                    if (NOT (sub_31163( uVar76, 0.00000000, 0.00000000, 0.00000000, 3.00000000 )))
                    {
                        SET_CAR_GENERATORS_ACTIVE_IN_AREA( uVar76._fU0 - 6.00000000, uVar76._fU4 - 6.00000000, uVar76._fU8 - 3.00000000, uVar76._fU0 + 6.00000000, uVar76._fU4 + 6.00000000, uVar76._fU8 + 3.00000000, 0 );
                    }
                }
                sub_142780();
                if (l_U1917[GET_PLAYER_ID()]._fU0 == 2)
                {
                    sub_142991( 0 );
                    sub_145188( ref uVar43, l_U1516._fU620[sub_1551( 9 )], 0, -1 );
                    sub_148210();
                    if (l_U1516._fU8 == 0)
                    {
                        for ( I = 0; I < 12; I++ )
                        {
                            iVar14[I] = -1;
                        }
                        sub_145528( ref iVar73 );
                    }
                    for ( I = 0; I < 12; I++ )
                    {
                        if (l_U1516._fU48[I]._fU0 == 3)
                        {
                            if ((l_U1516._fU48[I]._fU4 == 3) || (l_U1516._fU48[I]._fU4 == 2))
                            {
                                if (sub_149123( l_U1516._fU8, ref uVar40, ref uVar41 ))
                                {
                                    sub_151244( l_U1516._fU8, ref uVar42 );
                                    if (NOT (sub_33344( l_U1516._fU388[I] )))
                                    {
                                        if (NOT (DOES_BLIP_EXIST( uVar60[I] )))
                                        {
                                            uVar60[I] = sub_151517( l_U1516._fU388[I] );
                                            CHANGE_BLIP_SPRITE( uVar60[I], 4 );
                                            CHANGE_BLIP_SCALE( uVar60[I], 0.78000000 );
                                            CHANGE_BLIP_COLOUR( uVar60[I], 1 );
                                            CHANGE_BLIP_PRIORITY( uVar60[I], 1 );
                                            CHANGE_BLIP_DISPLAY( uVar60[I], 4 );
                                            if (l_U1516._fU48[I]._fU8 == 4)
                                            {
                                                CHANGE_BLIP_DISPLAY( uVar60[I], 0 );
                                            }
                                        }
                                    }
                                }
                            }
                            else if (l_U1516._fU48[I]._fU4 == 1)
                            {
                                if (NOT (sub_33344( l_U1516._fU388[I] )))
                                {
                                    if (IS_THIS_MODEL_A_VEHICLE( l_U1516._fU48[I]._fU24 ))
                                    {
                                        if (l_U1516._fU48[I]._fU8 == 1)
                                        {
                                            if (HAS_CONTROL_OF_NETWORK_ID( l_U1516._fU388[I] ))
                                            {
                                                if (LOCATE_CAR_3D( sub_11665( l_U1516._fU388[I] ), l_U1516._fU492._fU0, l_U1516._fU492._fU4, l_U1516._fU492._fU8, 7.00000000, 7.00000000, 3.00000000, 0 ))
                                                {
                                                    if (NOT (sub_152008( sub_11665( l_U1516._fU388[I] ), 3 )))
                                                    {
                                                        LOCK_CAR_DOORS( sub_11665( l_U1516._fU388[I] ), 3 );
                                                    }
                                                }
                                                else if (NOT (sub_152008( sub_11665( l_U1516._fU388[I] ), 1 )))
                                                {
                                                    LOCK_CAR_DOORS( sub_11665( l_U1516._fU388[I] ), 1 );
                                                }
                                            }
                                        }
                                        if (IS_CHAR_IN_CAR( sub_9794(), sub_11665( l_U1516._fU388[I] ) ))
                                        {
                                            if (DOES_BLIP_EXIST( uVar60[I] ))
                                            {
                                                REMOVE_BLIP( uVar60[I] );
                                            }
                                            if (NOT (DOES_BLIP_EXIST( iVar73 )))
                                            {
                                                if (l_U1516._fU48[I]._fU8 == 1)
                                                {
                                                    if (iVar73 == nil)
                                                    {
                                                        PRINT_STRING_IN_STRING_NOW( "DROP_CAR_OFF_IN", GET_NAME_OF_ZONE( l_U1516._fU492._fU0, l_U1516._fU492._fU4, l_U1516._fU492._fU8 ), 5000, 1 );
                                                        sub_152358( "DROP_CAR_OFF_IN", 5000 );
                                                        sub_152442( GET_NAME_OF_ZONE( l_U1516._fU492._fU0, l_U1516._fU492._fU4, l_U1516._fU492._fU8 ) );
                                                    }
                                                    iVar73 = sub_152483( l_U1516._fU492 );
                                                    CHANGE_BLIP_SPRITE( iVar73, 4 );
                                                    CHANGE_BLIP_SCALE( iVar73, 0.78000000 );
                                                    CHANGE_BLIP_COLOUR( iVar73, 5 );
                                                    CHANGE_BLIP_PRIORITY( iVar73, 1 );
                                                }
                                                else if (l_U1516._fU48[I]._fU8 == 2)
                                                {
                                                    if (iVar73 == nil)
                                                    {
                                                        PRINT_NOW( "DELIVER_CAR_WAT", 5000, 1 );
                                                        sub_152358( "DELIVER_CAR_WAT", 5000 );
                                                    }
                                                    ADD_BLIP_FOR_CHAR( sub_9794(), ref iVar73 );
                                                    CHANGE_BLIP_DISPLAY( iVar73, 0 );
                                                }
                                                else if (l_U1516._fU48[I]._fU8 == 3)
                                                {
                                                    sub_152738( ref uVar60 );
                                                    if (iVar73 == nil)
                                                    {
                                                        PRINT_NOW( "DELIVER_CAR_PED", 5000, 1 );
                                                        sub_152358( "DELIVER_CAR_PED", 5000 );
                                                    }
                                                    ADD_BLIP_FOR_CHAR( sub_9794(), ref iVar73 );
                                                    CHANGE_BLIP_DISPLAY( iVar73, 0 );
                                                };;;
                                            }
                                            if (l_U1516._fU48[I]._fU8 == 1)
                                            {
                                                if (LOCATE_CAR_3D( sub_11665( l_U1516._fU388[I] ), l_U1516._fU492._fU0, l_U1516._fU492._fU4, l_U1516._fU492._fU8, 7.00000000, 7.00000000, 3.00000000, 0 ))
                                                {
                                                    DISPLAY_HELP_TEXT_THIS_FRAME( "LEAVE_CAR_HERE", 0 );
                                                }
                                                else
                                                {
                                                    LOCATE_CAR_3D( sub_11665( l_U1516._fU388[I] ), l_U1516._fU492._fU0, l_U1516._fU492._fU4, l_U1516._fU492._fU8 + 1.50000000, 4.00000000, 4.00000000, 1.50000000, 1 );
                                                }
                                            }
                                            else if (l_U1516._fU48[I]._fU8 == 3)
                                            {
                                                uVar11 = sub_133370( l_U1516._fU388[I] );
                                                if (DOES_PED_EXIST_WITH_NETWORK_ID( uVar11 ))
                                                {
                                                    if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_11590( uVar11 ), sub_11665( l_U1516._fU388[I] ), 7.00000000, 7.00000000, 3.00000000, 0 ))
                                                    {
                                                        DISPLAY_HELP_TEXT_THIS_FRAME( "LEAVE_CAR_HERE", 0 );
                                                    }
                                                }
                                            }
                                        }
                                        else if (DOES_BLIP_EXIST( iVar73 ))
                                        {
                                            if (NOT sub_153487())
                                            {
                                                if (NOT sub_153674())
                                                {
                                                    if (NOT sub_9668())
                                                    {
                                                        if (l_U1516._fU48[I]._fU8 == 3)
                                                        {
                                                            sub_153900( ref uVar60 );
                                                        }
                                                        REMOVE_BLIP( iVar73 );
                                                    }
                                                }
                                            }
                                        }
                                        if (sub_149123( l_U1516._fU8, ref uVar40, ref uVar41 ))
                                        {
                                            sub_151244( l_U1516._fU8, ref uVar42 );
                                            if (NOT (DOES_BLIP_EXIST( uVar60[I] )))
                                            {
                                                ADD_BLIP_FOR_CAR( sub_11665( l_U1516._fU388[I] ), ref uVar60[I] );
                                                CHANGE_BLIP_SPRITE( uVar60[I], 4 );
                                                CHANGE_BLIP_SCALE( uVar60[I], 0.78000000 );
                                                SET_BLIP_AS_FRIENDLY( uVar60[I], 1 );
                                                CHANGE_BLIP_PRIORITY( uVar60[I], 1 );
                                                CHANGE_BLIP_DISPLAY( uVar60[I], 4 );
                                            }
                                        }
                                        if (l_U1516._fU48[I]._fU8 != 0)
                                        {
                                            if (sub_78320( l_U1516._fU388[I], ref iVar3 ))
                                            {
                                                if (iVar14[I] != iVar3)
                                                {
                                                    sub_145251( iVar3, -1, "GOT_VEHICLE" );
                                                    iVar14[I] = iVar3;
                                                }
                                            }
                                        }
                                    }
                                    else if (IS_THIS_MODEL_A_PED( l_U1516._fU48[I]._fU24 ))
                                    {
                                        if ((sub_154388( sub_11590( l_U1516._fU388[I] ) )) || (IS_GROUP_MEMBER( sub_11590( l_U1516._fU388[I] ), sub_135089() )))
                                        {
                                            if (sub_79161( sub_11590( l_U1516._fU388[I] ), sub_9794() ))
                                            {
                                                if (DOES_BLIP_EXIST( uVar60[I] ))
                                                {
                                                    REMOVE_BLIP( uVar60[I] );
                                                }
                                                if (DOES_BLIP_EXIST( iVar73 ))
                                                {
                                                    if (l_U1516._fU48[I]._fU8 == 1)
                                                    {
                                                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_11590( l_U1516._fU388[I] ), l_U1516._fU492._fU0, l_U1516._fU492._fU4, l_U1516._fU492._fU8, 7.00000000, 7.00000000, 3.00000000, 0 ))
                                                        {
                                                            if (IS_CHAR_IN_ANY_CAR( sub_11590( l_U1516._fU388[I] ) ))
                                                            {
                                                                if (sub_154806())
                                                                {
                                                                    DISPLAY_HELP_TEXT_THIS_FRAME( "DROP_PEDG_HERE", 0 );
                                                                }
                                                                else if (IS_CHAR_MALE( sub_11590( l_U1516._fU388[I] ) ))
                                                                {
                                                                    DISPLAY_HELP_TEXT_THIS_FRAME( "DROP_PED_HERE", 0 );
                                                                }
                                                                else
                                                                {
                                                                    DISPLAY_HELP_TEXT_THIS_FRAME( "DROP_PEDF_HERE", 0 );
                                                                }
                                                            }
                                                        }
                                                        else
                                                        {
                                                            LOCATE_CHAR_ANY_MEANS_3D( sub_11590( l_U1516._fU388[I] ), l_U1516._fU492._fU0, l_U1516._fU492._fU4, l_U1516._fU492._fU8 + 1.50000000, 4.00000000, 4.00000000, 1.50000000, 1 );
                                                        }
                                                    }
                                                    else if (l_U1516._fU48[I]._fU8 == 3)
                                                    {
                                                        uVar11 = sub_133370( l_U1516._fU388[I] );
                                                        if (DOES_PED_EXIST_WITH_NETWORK_ID( uVar11 ))
                                                        {
                                                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_11590( l_U1516._fU388[I] ), sub_11590( uVar11 ), 7.00000000, 7.00000000, 3.00000000, 0 ))
                                                            {
                                                                if (iVar3 == GET_PLAYER_ID())
                                                                {
                                                                    if (IS_CHAR_IN_ANY_CAR( sub_11590( l_U1516._fU388[I] ) ))
                                                                    {
                                                                        if (sub_154806())
                                                                        {
                                                                            DISPLAY_HELP_TEXT_THIS_FRAME( "DROP_PEDG_HERE", 0 );
                                                                        }
                                                                        else if (IS_CHAR_MALE( sub_11590( l_U1516._fU388[I] ) ))
                                                                        {
                                                                            DISPLAY_HELP_TEXT_THIS_FRAME( "DROP_PED_HERE", 0 );
                                                                        }
                                                                        else
                                                                        {
                                                                            DISPLAY_HELP_TEXT_THIS_FRAME( "DROP_PEDF_HERE", 0 );
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                else if (iVar73 == nil)
                                                {
                                                    iVar13 = iVar5 + 5500;
                                                }
                                                if (l_U1516._fU48[I]._fU8 == 1)
                                                {
                                                    iVar73 = sub_152483( l_U1516._fU492 );
                                                    CHANGE_BLIP_SPRITE( iVar73, 4 );
                                                    CHANGE_BLIP_SCALE( iVar73, 0.78000000 );
                                                    CHANGE_BLIP_COLOUR( iVar73, 5 );
                                                    CHANGE_BLIP_PRIORITY( iVar73, 1 );
                                                }
                                                else if (l_U1516._fU48[I]._fU8 == 3)
                                                {
                                                    sub_152738( ref uVar60 );
                                                }
                                                ADD_BLIP_FOR_CHAR( sub_9794(), ref iVar73 );
                                                CHANGE_BLIP_DISPLAY( iVar73, 0 );;;
                                                if (iVar13 > iVar5)
                                                {
                                                    if (NOT sub_155732())
                                                    {
                                                        if (l_U1516._fU48[I]._fU8 == 1)
                                                        {
                                                            if (sub_154806())
                                                            {
                                                                PRINT_STRING_IN_STRING_NOW( "DROP_OFF_PED_G", GET_NAME_OF_ZONE( l_U1516._fU492._fU0, l_U1516._fU492._fU4, l_U1516._fU492._fU8 ), 500, 1 );
                                                                sub_152358( "DROP_OFF_PED_G", 500 );
                                                                sub_152442( GET_NAME_OF_ZONE( l_U1516._fU492._fU0, l_U1516._fU492._fU4, l_U1516._fU492._fU8 ) );
                                                            }
                                                            else if (IS_CHAR_MALE( sub_11590( l_U1516._fU388[I] ) ))
                                                            {
                                                                PRINT_STRING_IN_STRING_NOW( "DROP_OFF_PED", GET_NAME_OF_ZONE( l_U1516._fU492._fU0, l_U1516._fU492._fU4, l_U1516._fU492._fU8 ), 500, 1 );
                                                                sub_152358( "DROP_OFF_PED", 500 );
                                                                sub_152442( GET_NAME_OF_ZONE( l_U1516._fU492._fU0, l_U1516._fU492._fU4, l_U1516._fU492._fU8 ) );
                                                            }
                                                            else
                                                            {
                                                                PRINT_STRING_IN_STRING_NOW( "DROP_OFF_PED_F", GET_NAME_OF_ZONE( l_U1516._fU492._fU0, l_U1516._fU492._fU4, l_U1516._fU492._fU8 ), 500, 1 );
                                                                sub_152358( "DROP_OFF_PED_F", 500 );
                                                                sub_152442( GET_NAME_OF_ZONE( l_U1516._fU492._fU0, l_U1516._fU492._fU4, l_U1516._fU492._fU8 ) );
                                                            }
                                                        }
                                                        else if (l_U1516._fU48[I]._fU8 == 2)
                                                        {
                                                            if (sub_154806())
                                                            {
                                                                PRINT_NOW( "ESCORT_PEDGWAT", 500, 1 );
                                                                sub_152358( "ESCORT_PEDGWAT", 500 );
                                                            }
                                                            else if (IS_CHAR_MALE( sub_11590( l_U1516._fU388[I] ) ))
                                                            {
                                                                PRINT_NOW( "ESCORT_PED_WAT", 500, 1 );
                                                                sub_152358( "ESCORT_PED_WAT", 500 );
                                                            }
                                                            else
                                                            {
                                                                PRINT_NOW( "ESCORT_PEDFWAT", 500, 1 );
                                                                sub_152358( "ESCORT_PEDFWAT", 500 );
                                                            }
                                                        }
                                                        else if (l_U1516._fU48[I]._fU8 == 3)
                                                        {
                                                            if (sub_154806())
                                                            {
                                                                PRINT_NOW( "ESCORT_PEDGPED", 500, 1 );
                                                                sub_152358( "ESCORT_PEDGPED", 500 );
                                                            }
                                                            else if (IS_CHAR_MALE( sub_11590( l_U1516._fU388[I] ) ))
                                                            {
                                                                PRINT_NOW( "ESCORT_PED_PED", 500, 1 );
                                                                sub_152358( "ESCORT_PED_PED", 500 );
                                                            }
                                                            else
                                                            {
                                                                PRINT_NOW( "ESCORT_PEDFPED", 500, 1 );
                                                                sub_152358( "ESCORT_PEDFPED", 500 );
                                                            }
                                                        };;;
                                                    }
                                                }
                                            }
                                            if (IS_GROUP_MEMBER( sub_11590( l_U1516._fU388[I] ), sub_135089() ))
                                            {
                                                iVar27[I] = iVar5;
                                            }
                                            else
                                            {
                                                iVar27[I] = 0;
                                            }
                                        }
                                        else if (DOES_BLIP_EXIST( iVar73 ))
                                        {
                                            if (NOT sub_153487())
                                            {
                                                if (NOT sub_153674())
                                                {
                                                    if (NOT sub_9668())
                                                    {
                                                        if (l_U1516._fU48[I]._fU8 == 3)
                                                        {
                                                            sub_153900( ref uVar60 );
                                                        }
                                                        REMOVE_BLIP( iVar73 );
                                                    }
                                                }
                                            }
                                        }
                                        if (sub_149123( l_U1516._fU8, ref uVar40, ref uVar41 ))
                                        {
                                            sub_151244( l_U1516._fU8, ref uVar42 );
                                            if (NOT (DOES_BLIP_EXIST( uVar60[I] )))
                                            {
                                                ADD_BLIP_FOR_CHAR( sub_11590( l_U1516._fU388[I] ), ref uVar60[I] );
                                                CHANGE_BLIP_SPRITE( uVar60[I], 4 );
                                                CHANGE_BLIP_SCALE( uVar60[I], 0.78000000 );
                                                SET_BLIP_AS_FRIENDLY( uVar60[I], 1 );
                                                CHANGE_BLIP_PRIORITY( uVar60[I], 1 );
                                                CHANGE_BLIP_DISPLAY( uVar60[I], 4 );
                                            }
                                        }
                                        if ((iVar27[I] != 0) AND ((iVar27[I] > (iVar5 - 5000)) AND (iVar27[I] < (iVar5 - 1000))))
                                        {
                                            if (NOT (IS_CHAR_DEAD( sub_9794() )))
                                            {
                                                if (IS_CHAR_MALE( sub_11590( l_U1516._fU388[I] ) ))
                                                {
                                                    if (IS_THIS_PRINT_BEING_DISPLAYED( "LEFT_PED_BEHIND", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                                                    {
                                                        PRINT_NOW( "LEFT_PEDGBEHIND", 5000, 1 );
                                                        sub_157430( 5000 );
                                                    }
                                                    else
                                                    {
                                                        PRINT_NOW( "LEFT_PED_BEHIND", 5000, 1 );
                                                        sub_157430( 5000 );
                                                    }
                                                }
                                                else if (IS_THIS_PRINT_BEING_DISPLAYED( "LEFT_PEDFBEHIND", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                                                {
                                                    PRINT_NOW( "LEFT_PEDGBEHIND", 5000, 1 );
                                                    sub_157430( 5000 );
                                                }
                                                else
                                                {
                                                    PRINT_NOW( "LEFT_PEDFBEHIND", 5000, 1 );
                                                    sub_157430( 5000 );
                                                }
                                            }
                                            iVar27[I] = 0;
                                        }
                                        if (l_U1516._fU48[I]._fU8 != 0)
                                        {
                                            if (sub_78824( sub_11590( l_U1516._fU388[I] ), ref iVar3 ))
                                            {
                                                if (iVar14[I] != iVar3)
                                                {
                                                    if (sub_79161( sub_11590( l_U1516._fU388[I] ), sub_16771( iVar3 ) ))
                                                    {
                                                        sub_145251( iVar3, -1, "ESCORTING_PED" );
                                                        iVar14[I] = iVar3;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    else if ((sub_157819( sub_9848( l_U1516._fU388[I] ) )) || (sub_9877( sub_9794(), sub_9848( l_U1516._fU388[I] ) )))
                                    {
                                        if (DOES_BLIP_EXIST( uVar60[I] ))
                                        {
                                            REMOVE_BLIP( uVar60[I] );
                                        }
                                        if (NOT (DOES_BLIP_EXIST( iVar73 )))
                                        {
                                            if (l_U1516._fU48[I]._fU8 == 1)
                                            {
                                                if (iVar73 == nil)
                                                {
                                                    sub_158088();
                                                }
                                                iVar73 = sub_152483( l_U1516._fU492 );
                                                CHANGE_BLIP_SPRITE( iVar73, 4 );
                                                CHANGE_BLIP_SCALE( iVar73, 0.78000000 );
                                                CHANGE_BLIP_PRIORITY( iVar73, 1 );
                                                CHANGE_BLIP_COLOUR( iVar73, 5 );
                                            }
                                            else if (l_U1516._fU48[I]._fU8 == 2)
                                            {
                                                if (iVar73 == nil)
                                                {
                                                    sub_158088();
                                                }
                                                ADD_BLIP_FOR_CHAR( sub_9794(), ref iVar73 );
                                                CHANGE_BLIP_DISPLAY( iVar73, 0 );
                                            }
                                            else if (l_U1516._fU48[I]._fU8 == 3)
                                            {
                                                sub_152738( ref uVar60 );
                                                if (iVar73 == nil)
                                                {
                                                    sub_158088();
                                                }
                                                ADD_BLIP_FOR_CHAR( sub_9794(), ref iVar73 );
                                                CHANGE_BLIP_DISPLAY( iVar73, 0 );
                                            };;;
                                        }
                                        if (l_U1516._fU48[I]._fU8 == 1)
                                        {
                                            if (LOCATE_OBJECT_3D( sub_9848( l_U1516._fU388[I] ), l_U1516._fU492._fU0, l_U1516._fU492._fU4, l_U1516._fU492._fU8, 7.00000000, 7.00000000, 3.00000000, 0 ))
                                            {
                                                sub_158488();
                                            }
                                            else
                                            {
                                                LOCATE_OBJECT_3D( sub_9848( l_U1516._fU388[I] ), l_U1516._fU492._fU0, l_U1516._fU492._fU4, l_U1516._fU492._fU8 + 1.50000000, 4.00000000, 4.00000000, 1.50000000, 1 );
                                            }
                                        }
                                        if (l_U1516._fU48[I]._fU8 == 3)
                                        {
                                            uVar11 = sub_133370( l_U1516._fU388[I] );
                                            if (DOES_PED_EXIST_WITH_NETWORK_ID( uVar11 ))
                                            {
                                                if (LOCATE_CHAR_ANY_MEANS_OBJECT_3D( sub_11590( uVar11 ), sub_9848( l_U1516._fU388[I] ), 5.00000000, 5.00000000, 3.00000000, 0 ))
                                                {
                                                    sub_158488();
                                                }
                                            }
                                        }
                                    }
                                    else if ((WHAT_WILL_PLAYER_PICKUP( sub_90115() )) == (sub_9848( l_U1516._fU388[I] )))
                                    {
                                        DISPLAY_HELP_TEXT_THIS_FRAME( "PICKUP_OBJ_HELP", 0 );
                                        bVar75 = true;
                                    }
                                    if (DOES_BLIP_EXIST( iVar73 ))
                                    {
                                        if (NOT sub_153487())
                                        {
                                            if (NOT sub_153674())
                                            {
                                                if (NOT sub_9668())
                                                {
                                                    if (l_U1516._fU48[I]._fU8 == 3)
                                                    {
                                                        sub_153900( ref uVar60 );
                                                    }
                                                    REMOVE_BLIP( iVar73 );
                                                }
                                            }
                                        }
                                    }
                                    if (sub_149123( l_U1516._fU8, ref uVar40, ref uVar41 ))
                                    {
                                        sub_151244( l_U1516._fU8, ref uVar42 );
                                        if (NOT (DOES_BLIP_EXIST( uVar60[I] )))
                                        {
                                            ADD_BLIP_FOR_OBJECT( sub_9848( l_U1516._fU388[I] ), ref uVar60[I] );
                                            CHANGE_BLIP_SPRITE( uVar60[I], 4 );
                                            CHANGE_BLIP_SCALE( uVar60[I], 0.78000000 );
                                            SET_BLIP_AS_FRIENDLY( uVar60[I], 1 );
                                            CHANGE_BLIP_PRIORITY( uVar60[I], 1 );
                                            CHANGE_BLIP_DISPLAY( uVar60[I], 4 );
                                        }
                                    }
                                    if (sub_139408( l_U1516._fU388[I], ref iVar3 ))
                                    {
                                        if (iVar14[I] != iVar3)
                                        {
                                            sub_145251( iVar3, -1, "TRANSPORTING_IT" );
                                            iVar14[I] = iVar3;
                                        }
                                    };;;
                                }
                                else if (sub_51864( l_U1516._fU48[I]._fU24 ))
                                {
                                    if (HAS_PICKUP_BEEN_COLLECTED( l_U1516._fU440[I] ))
                                    {
                                        if (DOES_BLIP_EXIST( uVar60[I] ))
                                        {
                                            REMOVE_BLIP( uVar60[I] );
                                        }
                                        iVar3 = sub_159264( I );
                                        if (l_U1516._fU48[I]._fU8 != 0)
                                        {
                                            if (iVar14[I] != iVar3)
                                            {
                                                sub_145251( iVar3, -1, "GOT_PICKUP" );
                                                iVar14[I] = iVar3;
                                            }
                                        }
                                    }
                                    else if (DOES_PICKUP_EXIST( l_U1516._fU440[I] ))
                                    {
                                        if (sub_149123( l_U1516._fU8, ref uVar40, ref uVar41 ))
                                        {
                                            sub_151244( l_U1516._fU8, ref uVar42 );
                                            if (NOT (DOES_BLIP_EXIST( uVar60[I] )))
                                            {
                                                ADD_BLIP_FOR_PICKUP( l_U1516._fU440[I], ref uVar60[I] );
                                                CHANGE_BLIP_SPRITE( uVar60[I], 4 );
                                                SET_BLIP_AS_FRIENDLY( uVar60[I], 1 );
                                                CHANGE_BLIP_SCALE( uVar60[I], 0.78000000 );
                                                CHANGE_BLIP_PRIORITY( uVar60[I], 1 );
                                                CHANGE_BLIP_DISPLAY( uVar60[I], 4 );
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else if (l_U1516._fU48[I]._fU4 == 1)
                        {
                            if ((l_U1516._fU48[I]._fU0 == 6) || (l_U1516._fU48[I]._fU0 == 4))
                            {
                                if (DOES_BLIP_EXIST( iVar73 ))
                                {
                                    if (NOT sub_159714())
                                    {
                                        REMOVE_BLIP( iVar73 );
                                    }
                                }
                            }
                            if ((l_U1516._fU48[I]._fU0 == 5) || (l_U1516._fU48[I]._fU0 == 6))
                            {
                                if (DOES_OBJECT_EXIST_WITH_NETWORK_ID( l_U1516._fU388[I] ))
                                {
                                    if (HAS_CONTROL_OF_NETWORK_ID( l_U1516._fU388[I] ))
                                    {
                                        SET_OBJECT_AS_STEALABLE( sub_9848( l_U1516._fU388[I] ), 0 );
                                    }
                                }
                            }
                        }
                        if (DOES_BLIP_EXIST( uVar60[I] ))
                        {
                            REMOVE_BLIP( uVar60[I] );
                        }
                        if (uVar60[I] != nil)
                        {
                            if ((l_U1516._fU48[I]._fU0 == 6) || (l_U1516._fU48[I]._fU0 == 4))
                            {
                                if (l_U1516._fU48[I]._fU4 > 0)
                                {
                                    if (l_U1516._fU48[I]._fU12 > -1)
                                    {
                                        sub_145251( l_U1516._fU48[I]._fU12, -1, "COMPLETED_TASK" );
                                    }
                                }
                            }
                            uVar60[I] = nil;
                        }
                        if (l_U1516._fU48[I]._fU0 == 5)
                        {
                            if (iVar14[I] != 99)
                            {
                                if (l_U1516._fU48[I]._fU12 > -1)
                                {
                                    if (NOT ((iVar74) AND (l_U1516._fU16 == 0)))
                                    {
                                        if (NOT (sub_80615( I )))
                                        {
                                            sub_145251( l_U1516._fU48[I]._fU12, -1, "FAILED_TASK" );
                                            iVar74 = 1;
                                        }
                                    }
                                }
                                iVar14[I] = 99;
                            }
                        }
                    }
                    if (((GET_PLAYER_TEAM( sub_90115() )) > -1) AND (sub_1248() == 3))
                    {
                        if (iVar12 != (l_U1516._fU1048[GET_PLAYER_TEAM( sub_90115() )]))
                        {
                            sub_160614( (l_U1516._fU1048[GET_PLAYER_TEAM( sub_90115() )]) - iVar12 );
                            iVar12 = l_U1516._fU1048[GET_PLAYER_TEAM( sub_90115() )];
                        }
                    }
                    else if (iVar12 != l_U1516._fU708[GET_PLAYER_ID()])
                    {
                        sub_160614( l_U1516._fU708[GET_PLAYER_ID()] - iVar12 );
                        iVar12 = l_U1516._fU708[GET_PLAYER_ID()];
                    }
                    if (sub_155732())
                    {
                        if (sub_82404())
                        {
                            if (sub_1248() == 3)
                            {
                                sub_161192( ref l_U1516._fU708, ref l_U1516._fU1048, 3, sub_82580(), 1 );
                            }
                            else
                            {
                                sub_161192( ref l_U1516._fU708, ref l_U1516._fU708, 2, sub_82580(), 1 );
                            }
                        }
                        else if (sub_1248() == 3)
                        {
                            sub_161192( ref l_U1516._fU708, ref l_U1516._fU1048, 3, 2147483647, 0 );
                        }
                        else
                        {
                            sub_161192( ref l_U1516._fU708, ref l_U1516._fU708, 2, 2147483647, 0 );
                        }
                        sub_168554();
                    }
                    else if ((l_U1516._fU620[sub_1551( 9 )]) == 3)
                    {
                        sub_161680( ref l_U1516._fU708 );
                        if (sub_1248() == 3)
                        {
                            sub_161251( ref l_U1516._fU1048 );
                        }
                    }
                    if (NOT sub_82404())
                    {
                        sub_168996( l_U1516._fU4, 0 );
                    }
                    sub_169531();
                    if (NOT bVar75)
                    {
                        if (NOT sub_9668())
                        {
                            sub_171034();
                        }
                    }
                }
            }
            else if ((l_U1917[GET_PLAYER_ID()]._fU0 < 3) AND (l_U1917[GET_PLAYER_ID()]._fU0 > 0))
            {
                if (IS_PLAYER_SCRIPT_CONTROL_ON( sub_90115() ))
                {
                    sub_104389( GET_PLAYER_ID(), 0 );
                }
                if (NOT IS_SCREEN_FADED_IN())
                {
                    sub_85583( 0 );
                }
                sub_174267();
                CLEAR_PRINTS();
                CLEAR_HELP();
                sub_174536();
                SWITCH_OFF_WAYPOINT();
                sub_174607( ref uVar10 );
                for ( I = 0; I < 3; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U2069[I] ))
                    {
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U2069[I] );
                    }
                }
                l_U1917[GET_PLAYER_ID()]._fU12 = -5;
                sub_175512();
                l_U1917[GET_PLAYER_ID()]._fU0 = 3;
            }
            if (l_U1917[GET_PLAYER_ID()]._fU0 == 3)
            {
                sub_175591( 0 );
                if (sub_189727( 2147483647, 1 ))
                {
                    l_U1917[GET_PLAYER_ID()]._fU0 = 4;
                }
            }
            if (l_U1917[GET_PLAYER_ID()]._fU0 == 4)
            {
                if ((NETWORK_IS_RENDEZVOUS()) || ((sub_85056()) AND (NETWORK_IS_TVT())))
                {
                    sub_175591( 0 );
                    SET_WIDESCREEN_FORMAT( 2 );
                    sub_86594( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                    sub_92615( "RETURN_PARTY", sub_104961( 23 ), sub_104994( 23 ), sub_104961( 24 ), sub_104994( 24 ), 255, 255, 255, 255, 2 );
                    if (NETWORK_IS_RENDEZVOUS_HOST())
                    {
                        if (sub_83344())
                        {
                            sub_192802();
                        }
                    }
                }
                else if ((l_U1516._fU0 == 2) || (sub_83344()))
                {
                    if ((l_U1516._fU0 == 2) || (sub_175591( 1 )))
                    {
                        if (IS_SCREEN_FADED_IN())
                        {
                            if (l_U1516._fU0 == 2)
                            {
                                sub_85484( 0 );
                            }
                            else
                            {
                                sub_85484( 500 );
                            }
                        }
                        l_U1917[GET_PLAYER_ID()]._fU0 = 5;
                    }
                }
                else
                {
                    sub_175591( 0 );
                }
            }
            if (l_U1917[GET_PLAYER_ID()]._fU0 == 5)
            {
                sub_175591( 0 );
                if (IS_SCREEN_FADED_OUT())
                {
                    l_U1917[GET_PLAYER_ID()]._fU0 = 0;
                }
            }
            if (l_U1917[GET_PLAYER_ID()]._fU0 == 0)
            {
                if (l_U1516._fU0 == 2)
                {
                    ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
                    iVar12 = 0;
                    sub_193107();
                    sub_9439();
                    l_U1917[GET_PLAYER_ID()]._fU20 = -1;
                    sub_9490( 1 );
                    l_U1917[GET_PLAYER_ID()]._fU16 = -1;
                    for ( I = 0; I < 12; I++ )
                    {
                        iVar14[I] = -1;
                        iVar27[I] = 0;
                    }
                    sub_145528( ref iVar73 );
                    sub_193302( ref uVar60 );
                    sub_193302( ref uVar43 );
                    FLUSH_ALL_OUT_OF_DATE_RADAR_BLIPS_FROM_MISSION_CLEANUP_LIST();
                    CLEAR_PRINTS();
                    CLEAR_BRIEF();
                    sub_193431();
                    if ((l_U1516._fU620[sub_1551( 6 )]) == 0)
                    {
                        SET_MAX_WANTED_LEVEL( 0 );
                        SET_WANTED_MULTIPLIER( 0.00000000 );
                        SET_CREATE_RANDOM_COPS( 0 );
                        SET_DITCH_POLICE_MODELS( 1 );
                    }
                    else
                    {
                        SET_MAX_WANTED_LEVEL( 6 );
                        SET_WANTED_MULTIPLIER( 0.80000000 );
                        SET_CREATE_RANDOM_COPS( 1 );
                        SET_DITCH_POLICE_MODELS( 0 );
                    }
                    DISABLE_PLAYER_LOCKON( sub_90115(), (l_U1516._fU620[sub_1551( 4 )]) == 0 );
                    if (sub_1248() == 3)
                    {
                        NETWORK_SET_FRIENDLY_FIRE_OPTION( l_U1516._fU620[3] == 1 );
                    }
                    DISPLAY_PLAYER_NAMES( (l_U1516._fU620[sub_1551( 10 )]) == 1 );
                    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
                    sub_193684( l_U1516._fU620[sub_1551( 8 )], 1065353216 );
                    sub_193958( l_U1516._fU620[sub_1551( 7 )], 1065353216 );
                    NETWORK_SET_HEALTH_RETICULE_OPTION( (l_U1516._fU620[sub_1551( 11 )]) == 1 );
                    sub_194243( l_U1516._fU620[sub_1551( 12 )] );
                    REMOVE_ALL_PICKUPS_OF_TYPE( 23 );
                    sub_194449( l_U1516._fU620[0], l_U1516._fU620[sub_1551( 5 )], l_U1516._fU504, 4 );
                    SWITCH_ARROW_ABOVE_BLIPPED_PICKUPS( 1 );
                    if (NOT IS_THIS_MACHINE_THE_SERVER())
                    {
                        sub_12961();
                    }
                    sub_235777();
                    sub_235858( l_U1516._fU620[0] );
                    if (IS_CHAR_MALE( sub_9794() ))
                    {
                        SET_VOICE_ID_FROM_HEAD_COMPONENT( sub_9794(), 0, 1 );
                    }
                    else
                    {
                        SET_VOICE_ID_FROM_HEAD_COMPONENT( sub_9794(), 0, 0 );
                    }
                    sub_84417();
                    l_U1917[GET_PLAYER_ID()]._fU0 = 1;
                }
                else
                {
                    sub_142991( 1 );
                    if (NOT (sub_19093( sub_9794(), sub_236394(), 5.00000000 )))
                    {
                        ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 0 );
                        sub_236547( sub_9794(), sub_236394() );
                    }
                }
            }
        }
    }
    return;
}

void sub_663(unknown uParam0)
{
    StrCopy( ref l_U1416._fU0, uParam0, 16 );
    sub_682();
    return;
}

void sub_682()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U1416._fU16[I]._fU0 = nil;
        StrCopy( ref l_U1416._fU16[I]._fU4, "", 32 );
        l_U1416._fU344[I] = 0;
    }
    return;
}

void sub_782(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U1416._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U1416._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_866( "\n PED NUMBER ", uParam0 );
    sub_906( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_866(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_906(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_1099(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int I;

    for ( I = 0; I < 7; I++ )
    {
        if (l_U577[I]._fU16 == 0)
        {
            StrCopy( ref l_U577[I]._fU0, uParam0, 16 );
            l_U577[I]._fU16 = uParam1;
            l_U577[I]._fU20 = uParam2;
            l_U577[I]._fU92 = uParam3;
            return;
        }
    }
    return;
}

void sub_1248()
{
    if (l_U0 == -1)
    {
        l_U0 = NETWORK_GET_GAME_MODE();
    }
    return l_U0;
}

void sub_1363(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref l_U1002[uParam0]._fU0, uParam2, 16 );
    l_U1002[uParam0]._fU16 = uParam1;
    l_U1002[uParam0]._fU24 = uParam3;
    l_U1002[uParam0]._fU20 = uParam4;
    l_U1002[uParam0]._fU28 = uParam4;
    return;
}

void sub_1551(int Result)
{
    if ((Result > 1) AND (sub_1248() != 3))
    {
        Result -= 2;
    }
    return Result;
}

int sub_2145()
{
    if (IS_THIS_MACHINE_THE_SERVER())
    {
        SET_THIS_MACHINE_RUNNING_SERVER_SCRIPT( 1 );
        return 1;
    }
    return 0;
}

void sub_2330()
{
    SET_THIS_MACHINE_RUNNING_SERVER_SCRIPT( 0 );
    return;
}

int sub_7249()
{
    if (l_U513)
    {
        return 1;
    }
    l_U514[0] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_ARROW_RIGHT" );
    l_U514[1] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_ARROW_UP" );
    l_U514[2] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_ARROW_UPDOWN" );
    l_U514[3] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_BESTLAP" );
    l_U514[4] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_CAR_STOLEN" );
    l_U514[5] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_CRIMINAL" );
    l_U514[6] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_DEATHS" );
    l_U514[7] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_HEADSET_ON1" );
    l_U514[8] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_HEADSET_ON2" );
    l_U514[9] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_HOLDINGSTASH" );
    l_U514[10] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_KICK_PLAYER" );
    l_U514[11] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_KILLS" );
    l_U514[12] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_NOTCONNECTED" );
    l_U514[13] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_PLAYER" );
    l_U514[14] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_POSITIONS" );
    l_U514[15] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_RANKING" );
    l_U514[16] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_SCORE" );
    l_U514[17] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_0" );
    l_U514[18] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_1" );
    l_U514[19] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_2" );
    l_U514[20] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_3" );
    l_U514[21] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_4" );
    l_U514[22] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_5" );
    l_U514[23] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_6" );
    l_U514[24] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_7" );
    l_U514[25] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_8" );
    l_U514[26] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_9" );
    l_U514[27] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "STAR_RATING_10" );
    l_U514[28] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_TASKS_COMPLETED" );
    l_U514[29] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_TEAM_KILL" );
    l_U514[30] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_TERRITORY" );
    l_U514[31] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_TOTALTIME" );
    l_U514[32] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_W_VIP" );
    l_U514[33] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_GTA" );
    l_U514[34] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "ICON_INVITE" );
    l_U514[35] = GET_TEXTURE_FROM_STREAMED_TXD( "network", "MAP_LOBBY" );
    l_U513 = 1;
    return 1;
}

void sub_8851()
{
    CREATE_OBJECT_NO_OFFSET( 1845915705, -281.06440000, -283.70000000, 15.87640000, ref l_U1340, 0 );
    SET_OBJECT_HEADING( l_U1340, 90.00000000 );
    FREEZE_OBJECT_POSITION( l_U1340, 1 );
    CREATE_OBJECT_NO_OFFSET( -631715616, -281.06440000, -280.70640000, 15.87640000, ref l_U1341, 0 );
    SET_OBJECT_HEADING( l_U1341, 90.00000000 );
    FREEZE_OBJECT_POSITION( l_U1341, 1 );
    CREATE_OBJECT_NO_OFFSET( 639246688, 864.32000000, -121.64500000, 7.40000000, ref l_U1342, 0 );
    SET_OBJECT_HEADING( l_U1342, 90.00000000 );
    SET_OBJECT_DYNAMIC( l_U1342, 0 );
    FREEZE_OBJECT_POSITION( l_U1342, 1 );
    CREATE_OBJECT_NO_OFFSET( 1312423945, -123.72640000, 772.02260000, 35.05130000, ref l_U1343, 0 );
    SET_OBJECT_COORDINATES( l_U1343, -123.72640000, 772.02260000, 35.05130000 );
    SET_OBJECT_HEADING( l_U1343, 0.00000000 );
    SET_OBJECT_DYNAMIC( l_U1343, 0 );
    FREEZE_OBJECT_POSITION( l_U1343, 1 );
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "coop_swatasslt" )) == 0)
    {
        CREATE_OBJECT_NO_OFFSET( 223915744, 2394.49600000, 175.89900000, 5.85800000, ref l_U1344, 0 );
        SET_OBJECT_ROTATION( l_U1344, 0.00000000, 235.00000000, 240.37500000 );
        SET_OBJECT_DYNAMIC( l_U1344, 0 );
        FREEZE_OBJECT_POSITION( l_U1344, 1 );
    }
    return;
}

void sub_9307(unknown uParam0)
{
    NETWORK_SET_TALKER_FOCUS( -1 );
    sub_9328( uParam0, 31, 0 );
    return;
}

void sub_9328(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U18._fU636 = uParam1;
    g_U18._fU632 = uParam2;
    sub_9359( uParam0, uParam1 );
    sub_9393( uParam0, uParam2 );
    return;
}

void sub_9359(unknown uParam0, unknown uParam1)
{
    SET_BITS_IN_RANGE( uParam0, 0, 15, uParam1 );
    return;
}

void sub_9393(unknown uParam0, unknown uParam1)
{
    SET_BITS_IN_RANGE( uParam0, 16, 31, uParam1 );
    return;
}

void sub_9439()
{
    g_U18._fU660 = -1;
    g_U18._fU664 = 1;
    return;
}

void sub_9490(unknown uParam0)
{
    g_U18._fU668 = -1;
    g_U18._fU672 = uParam0;
    return;
}

int sub_9668()
{
    int I;

    for ( I = 0; I < 12; I++ )
    {
        if (DOES_OBJECT_EXIST_WITH_NETWORK_ID( l_U1516._fU388[I] ))
        {
            if (l_U1516._fU48[I]._fU4 == 1)
            {
                if ((l_U1516._fU48[I]._fU8 == 2) || ((l_U1516._fU48[I]._fU8 == 3) || (l_U1516._fU48[I]._fU8 == 1)))
                {
                    if (sub_9877( sub_9794(), sub_9848( l_U1516._fU388[I] ) ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_9794()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_9848(unknown uParam0)
{
    unknown Result;

    GET_OBJECT_FROM_NETWORK_ID( uParam0, ref Result );
    return Result;
}

int sub_9877(int iParam0, unknown uParam1)
{
    int iVar4;

    if (IS_OBJECT_ATTACHED( uParam1 ))
    {
        if (iParam0 == (GET_PED_OBJECT_IS_ATTACHED_TO( uParam1 )))
        {
            return 1;
        }
        else if (sub_9928( iParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0, ref iVar4 );
            if (iVar4 == (GET_CAR_OBJECT_IS_ATTACHED_TO( uParam1 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_9928(int iParam0)
{
    unknown uVar3;
    int iVar4;

    if (IS_CHAR_IN_ANY_CAR( iParam0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0, ref uVar3 );
        GET_DRIVER_OF_CAR( uVar3, ref iVar4 );
        if (iParam0 == iVar4)
        {
            return 1;
        }
    }
    return 0;
}

void sub_10099()
{
    if (sub_2145())
    {
        sub_10118();
        sub_83492();
        sub_2330();
    }
    return;
}

void sub_10118()
{
    int I;

    switch (l_U1516._fU0)
    {
        case 0:
        l_U1516._fU0 = 1;
        break;
        case 1:
        if (LOAD_ALL_PATH_NODES( 1 ))
        {
            if (NOT NETWORK_IS_OPERATION_PENDING())
            {
                if (N_1242010017())
                {
                    sub_10224();
                    if (sub_10761())
                    {
                        sub_11531();
                        l_U1516._fU20 = l_U2014 + 10000;
                        for ( I = 0; I < 16; I++ )
                        {
                            l_U1516._fU708[I] = 0;
                            l_U1516._fU776[I] = 0;
                            l_U1516._fU844[I] = 0;
                            l_U1516._fU912[I] = 0;
                            l_U1516._fU980[I] = 0;
                            l_U1516._fU516[I] = 0;
                        }
                        for ( I = 0; I < 8; I++ )
                        {
                            l_U1516._fU1048[I] = 0;
                        }
                        switch (l_U1516._fU620[0])
                        {
                            case 0:
                            l_U1516._fU512 = sub_12313( 0, 8 );
                            break;
                            case 1:
                            l_U1516._fU512 = sub_12313( 6, 8 );
                            break;
                            case 2:
                            l_U1516._fU512 = sub_12313( 3, 6 );
                            break;
                            case 3:
                            l_U1516._fU512 = 0;
                            break;
                            case 4:
                            l_U1516._fU512 = sub_12313( 1, 3 );
                            break;
                        }
                        l_U1516._fU4 = l_U2014 + sub_12441();
                        sub_12587( l_U1516._fU620[sub_1551( 14 )] );
                        sub_12774( l_U1516._fU620[sub_1551( 15 )] );
                        SET_SYNC_WEATHER_AND_GAME_TIME( 1 );
                        l_U1516._fU504 = sub_12313( 0, 2147483647 );
                        sub_12961();
                        sub_16415( 1, l_U1516._fU512 );
                        if (l_U1516._fU512 == 0)
                        {
                            l_U1516._fU508 = 0;
                        }
                        else if (l_U1516._fU512 < 3)
                        {
                            l_U1516._fU508 = 1;
                        }
                        else if (l_U1516._fU512 < 6)
                        {
                            l_U1516._fU508 = 2;
                        }
                        else
                        {
                            l_U1516._fU508 = 3;
                        };;;
                        for ( I = 0; I < 8; I++ )
                        {
                            l_U1516._fU584[I] = -1;
                        }
                        sub_16582();
                        if (l_U1516._fU620[0] == 3)
                        {
                            sub_19475( l_U1516._fU508, ref l_U1516._fU584, 150.00000000, 0, 1140457472 );
                        }
                        else
                        {
                            sub_19475( l_U1516._fU508, ref l_U1516._fU584, 250.00000000, 0, 1140457472 );
                        }
                        NETWORK_ADVERTISE_SESSION( 0 );
                        NETWORK_START_SESSION();
                        l_U1516._fU0 = 2;
                    }
                }
                else
                {
                    NETWORK_ADVERTISE_SESSION( 1 );
                }
            }
        }
        break;
        case 2:
        if (N_1242010017())
        {
            NETWORK_ADVERTISE_SESSION( 0 );
        }
        if (NOT NETWORK_IS_OPERATION_PENDING())
        {
            if (NOT NETWORK_IS_SESSION_STARTED())
            {
                NETWORK_START_SESSION();
            }
        }
        sub_31682();
        sub_10224();
        if ((NETWORK_IS_SESSION_STARTED()) AND (sub_82379()))
        {
            l_U1516._fU0 = 3;
        }
        else if (l_U2014 > ((l_U1516._fU4 - sub_12441()) + 30000))
        {
            sub_16415( 0, 0 );
        }
        else if (sub_1248() == 3)
        {
            if (l_U1516._fU620[0] == 3)
            {
                sub_19475( l_U1516._fU508, ref l_U1516._fU584, 150.00000000, 0, 1140457472 );
            }
            else
            {
                sub_19475( l_U1516._fU508, ref l_U1516._fU584, 250.00000000, 0, 1140457472 );
            }
        }
        sub_16415( 1, l_U1516._fU512 );;
        sub_16582();
        sub_83076();;
        break;
        case 3:
        sub_10224();
        if (sub_83344())
        {
            if (l_U1917[GET_PLAYER_ID()]._fU12 > -5)
            {
                SET_SYNC_WEATHER_AND_GAME_TIME( 0 );
                l_U1516._fU0 = 1;
            }
        }
        break;
    }
    return;
}

void sub_10224()
{
    int I;
    int[16] iVar3;

    array(ref iVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            iVar3[I] = l_U1917[I]._fU16;
        }
        else
        {
            iVar3[I] = -1;
        }
    }
    sub_10304( ref iVar3 );
    return;
}

void sub_10304(unknown uParam0)
{
    int I;
    int[16] iVar4;
    int iVar21;

    array(ref iVar4, 16);
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if ((l_U1299[I] == 1) AND (((uParam0^)[I] != I) AND ((uParam0^)[I] != -1)))
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
    if ((NOT NETWORK_IS_TVT()) AND (sub_10481() > 2))
    {
        if (((iVar4[iVar21] == 2) AND (sub_10481() == 3)) || ((iVar4[iVar21] > (sub_10481() / 2)) AND (sub_10481() > 3)))
        {
            PRINTSTRING( "SCRIPT: Kick Player " );
            PRINTINT( iVar21 );
            PRINTSTRING( " with votes " );
            PRINTINT( iVar4[iVar21] );
            PRINTSTRING( " needed " );
            PRINTINT( sub_10481() / 2 );
            PRINTNL();
            if (IS_NETWORK_PLAYER_ACTIVE( iVar21 ))
            {
                NETWORK_KICK_PLAYER( iVar21 );
            }
        }
    }
    return;
}

void sub_10481()
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

int sub_10761()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1917[I]._fU12;
    }
    if (sub_10823( ref uVar3, ref l_U1516._fU1596 ))
    {
        return 1;
    }
    return 0;
}

int sub_10823(unknown uParam0, unknown uParam1)
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
            if ((uParam0^)[I] == 1)
            {
                iVar6++;
            }
        }
    }
    if (NOT (sub_10901( ref uVar10 )))
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
        if (sub_1248() != 16)
        {
            bVar9 = false;
        }
    }
    if ((uParam0^)[GET_PLAYER_ID()] != 1)
    {
        bVar9 = false;
    }
    if (bVar9)
    {
        GET_NETWORK_TIMER( ref iVar8 );
        if (iVar5 == iVar6)
        {
            (uParam1^) = 0;
            if (iVar5 == GET_NUMBER_OF_PLAYERS())
            {
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
                (uParam1^) = 0;
                if (iVar5 == GET_NUMBER_OF_PLAYERS())
                {
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

int sub_10901(unknown uParam0)
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
    if (sub_1248() == 16)
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
    if ((sub_1248() == 4) || (sub_1248() == 5))
    {
        if (iVar4 < 4)
        {
            return 0;
        }
    }
    if ((sub_11073()) || (sub_11028()))
    {
        if (sub_11073())
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
        if (sub_11170() < 2)
        {
            (uParam0^) = 1;
            return 0;
        }
    }
    return 1;
}

int sub_11028()
{
    int iVar2;

    iVar2 = NETWORK_GET_GAME_MODE();
    if ((iVar2 == 12) || (iVar2 == 10))
    {
        return 1;
    }
    return 0;
}

int sub_11073()
{
    int iVar2;

    iVar2 = NETWORK_GET_GAME_MODE();
    if ((iVar2 == 4) || ((iVar2 == 3) || (iVar2 == 1)))
    {
        return 1;
    }
    return 0;
}

void sub_11170()
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

void sub_11531()
{
    int I;

    for ( I = 0; I < 12; I++ )
    {
        sub_11565( l_U1516._fU388[I] );
        l_U1516._fU388[I] = nil;
        if (DOES_PICKUP_EXIST( l_U1516._fU440[I] ))
        {
            REMOVE_PICKUP( l_U1516._fU440[I] );
        }
        l_U1516._fU440[I] = nil;
        l_U1516._fU48[I]._fU0 = 0;
        l_U1516._fU48[I]._fU4 = 0;
        l_U1516._fU48[I]._fU8 = 0;
        l_U1516._fU48[I]._fU12 = -1;
        l_U1516._fU48[I]._fU16 = 0;
    }
    for ( I = 0; I < 4; I++ )
    {
        if (l_U1516._fU28[I] != 0)
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1516._fU28[I] );
            l_U1516._fU28[I] = 0;
        }
    }
    l_U1516._fU8 = 0;
    l_U1516._fU12 = 0;
    l_U1516._fU16 = 0;
    l_U1516._fU20 = l_U2014;
    l_U1516._fU24 = 1;
    l_U1516._fU492 = {0.00000000, 0.00000000, 0.00000000};
    return;
}

void sub_11565(unknown uParam0)
{
    if (DOES_PED_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        sub_11619( sub_11590( uParam0 ) );
    }
    else if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        sub_11694( sub_11665( uParam0 ) );
    }
    else if (DOES_OBJECT_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        sub_11745( sub_9848( uParam0 ) );
    };;;
    return;
}

void sub_11590(unknown uParam0)
{
    unknown Result;

    GET_PED_FROM_NETWORK_ID( uParam0, ref Result );
    return Result;
}

void sub_11619(unknown uParam0)
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_11665(unknown uParam0)
{
    unknown Result;

    GET_VEHICLE_FROM_NETWORK_ID( uParam0, ref Result );
    return Result;
}

void sub_11694(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_11745(unknown uParam0)
{
    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_12313(unknown uParam0, unknown Result)
{
    GENERATE_RANDOM_INT_IN_RANGE( uParam0, Result, ref Result );
    return Result;
}

int sub_12441()
{
    switch (l_U1516._fU620[1])
    {
        case 0: return 600000;
        case 1: return 1200000;
        case 2: return 1800000;
        case 3: return 2700000;
        case 4: return 3600000;
    }
    return 3600000;
}

void sub_12587(unknown uParam0)
{
    switch (uParam0)
    {
        case -1:
        SET_TIME_OF_DAY( sub_12313( 0, 24 ), 0 );
        break;
        case 0:
        SET_TIME_OF_DAY( sub_12313( 0, 24 ), 0 );
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

void sub_12774(unknown uParam0)
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

void sub_12961()
{
    sub_12971( 1 );
    CLEAR_NETWORK_RESTART_NODE_GROUP_LIST();
    sub_13012( l_U1516._fU620[0] );
    if (l_U1516._fU620[0] == 0)
    {
        ADD_GROUP_TO_NETWORK_RESTART_NODE_GROUP_LIST( 1 );
        ADD_GROUP_TO_NETWORK_RESTART_NODE_GROUP_LIST( 2 );
        ADD_GROUP_TO_NETWORK_RESTART_NODE_GROUP_LIST( 3 );
        ADD_GROUP_TO_NETWORK_RESTART_NODE_GROUP_LIST( 4 );
        sub_13086( 1 );
        return;
    }
    ADD_GROUP_TO_NETWORK_RESTART_NODE_GROUP_LIST( l_U1516._fU620[0] );
    sub_13086( 0 );
    return;
}

void sub_12971(unknown uParam0)
{
    l_U4 = uParam0;
    return;
}

void sub_13012(unknown uParam0)
{
    l_U11 = uParam0;
    return;
}

void sub_13086(boolean bParam0)
{
    if (bParam0)
    {
        SWITCH_ROADS_BACK_TO_ORIGINAL( 324.39880000, 1772.79600000, 15.90710000, 326.39880000, 1774.79600000, 17.90710000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 324.72270000, 1790.90300000, 15.89930000, 326.72270000, 1792.90300000, 17.89930000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -250.76720000, 1574.41900000, 18.46400000, -248.76720000, 1576.41900000, 20.46400000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -250.60630000, 1586.18200000, 18.47000000, -248.60630000, 1588.18200000, 20.47000000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 406.47790000, 1019.08100000, 24.99640000, 408.47790000, 1021.08100000, 26.99640000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 405.89090000, 1002.07600000, 24.99710000, 407.89090000, 1004.07600000, 26.99710000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 343.93100000, 1001.88300000, 24.99330000, 345.93100000, 1003.88300000, 26.99330000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 343.67410000, 1018.34300000, 24.99580000, 345.67410000, 1020.34300000, 26.99580000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 186.73660000, 1004.18200000, 12.76060000, 188.73660000, 1006.18200000, 14.76060000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 186.28080000, 1016.20300000, 12.76320000, 188.28080000, 1018.20300000, 14.76320000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 57.14420000, 1022.74300000, 12.75190000, 59.14420000, 1024.74300000, 14.75190000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 62.03510000, 998.48990000, 12.66320000, 64.03510000, 1000.49000000, 14.66320000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 534.53210000, 926.03400000, 18.82550000, 536.53210000, 928.03400000, 20.82550000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 566.84700000, 1052.62400000, 19.21830000, 568.84700000, 1054.62400000, 21.21830000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 563.93890000, 863.30440000, 18.94320000, 565.93890000, 865.30440000, 20.94320000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 536.49740000, 1063.32600000, 18.97530000, 538.49740000, 1065.32600000, 20.97530000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 922.86870000, 258.44850000, 41.74100000, 924.86870000, 260.44850000, 43.74100000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 933.13320000, 270.85210000, 42.65100000, 935.13320000, 272.85210000, 44.65100000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 58.32130000, 266.27880000, 13.16560000, 60.32130000, 268.27880000, 15.16560000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 58.14260000, 254.36340000, 13.15000000, 60.14260000, 256.36340000, 15.15000000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 918.49530000, 257.87200000, 41.46560000, 920.49530000, 259.87200000, 43.46560000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1079.19200000, 295.22450000, 29.02650000, 1081.19200000, 297.22450000, 31.02650000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1040.89700000, 211.86710000, 29.44070000, 1042.89700000, 213.86710000, 31.44070000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1255.38000000, 276.22140000, 29.03830000, 1257.38000000, 278.22140000, 31.03830000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1032.00000000, 256.56930000, 45.93090000, 1034.00000000, 258.56930000, 47.93090000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 939.21610000, 271.22920000, 43.16500000, 941.21610000, 273.22920000, 45.16500000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 893.42520000, -416.43870000, 35.29700000, 895.42520000, -414.43870000, 37.29700000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 904.72490000, -401.80910000, 35.51120000, 906.72490000, -399.80910000, 37.51120000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 151.26190000, -415.10430000, 12.79700000, 153.26190000, -413.10430000, 14.79700000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 151.23080000, -403.27040000, 12.80040000, 153.23080000, -401.27040000, 14.80040000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 893.43230000, -401.51340000, 35.29680000, 895.43230000, -399.51340000, 37.29680000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 893.53330000, -416.27660000, 35.29410000, 895.53330000, -414.27660000, 37.29410000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 169.19120000, -417.11330000, 12.80190000, 171.19120000, -415.11330000, 14.80190000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 163.61860000, -401.33510000, 12.78670000, 165.61860000, -399.33510000, 14.78670000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -890.12730000, 1156.24800000, 16.00280000, -888.12730000, 1158.24800000, 18.00280000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -889.60250000, 1167.95800000, 16.00680000, -887.60250000, 1169.95800000, 18.00680000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -665.27510000, 1171.31700000, 17.47660000, -663.27510000, 1173.31700000, 19.47660000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -664.71560000, 1159.96800000, 17.57480000, -662.71560000, 1161.96800000, 19.57480000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -394.85170000, 331.01640000, 12.07200000, -392.85170000, 333.01640000, 14.07200000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -957.74520000, 778.29000000, 2.33160000, -955.74520000, 780.29000000, 4.33160000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -945.69610000, 774.68300000, 1.55730000, -943.69610000, 776.68300000, 3.55730000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -946.17150000, 780.39040000, 1.60940000, -944.17150000, 782.39040000, 3.60940000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 473.35780000, 585.03500000, 13.81600000, 613.50500000, 1294.33100000, 47.85440000 );
    }
    else
    {
        SWITCH_ROADS_OFF( 324.39880000, 1772.79600000, 15.90710000, 326.39880000, 1774.79600000, 17.90710000 );
        SWITCH_ROADS_OFF( 324.72270000, 1790.90300000, 15.89930000, 326.72270000, 1792.90300000, 17.89930000 );
        SWITCH_ROADS_OFF( -250.76720000, 1574.41900000, 18.46400000, -248.76720000, 1576.41900000, 20.46400000 );
        SWITCH_ROADS_OFF( -250.60630000, 1586.18200000, 18.47000000, -248.60630000, 1588.18200000, 20.47000000 );
        SWITCH_ROADS_OFF( 406.47790000, 1019.08100000, 24.99640000, 408.47790000, 1021.08100000, 26.99640000 );
        SWITCH_ROADS_OFF( 405.89090000, 1002.07600000, 24.99710000, 407.89090000, 1004.07600000, 26.99710000 );
        SWITCH_ROADS_OFF( 343.93100000, 1001.88300000, 24.99330000, 345.93100000, 1003.88300000, 26.99330000 );
        SWITCH_ROADS_OFF( 343.67410000, 1018.34300000, 24.99580000, 345.67410000, 1020.34300000, 26.99580000 );
        SWITCH_ROADS_OFF( 186.73660000, 1004.18200000, 12.76060000, 188.73660000, 1006.18200000, 14.76060000 );
        SWITCH_ROADS_OFF( 186.28080000, 1016.20300000, 12.76320000, 188.28080000, 1018.20300000, 14.76320000 );
        SWITCH_ROADS_OFF( 57.14420000, 1022.74300000, 12.75190000, 59.14420000, 1024.74300000, 14.75190000 );
        SWITCH_ROADS_OFF( 62.03510000, 998.48990000, 12.66320000, 64.03510000, 1000.49000000, 14.66320000 );
        SWITCH_ROADS_OFF( 534.53210000, 926.03400000, 18.82550000, 536.53210000, 928.03400000, 20.82550000 );
        SWITCH_ROADS_OFF( 566.84700000, 1052.62400000, 19.21830000, 568.84700000, 1054.62400000, 21.21830000 );
        SWITCH_ROADS_OFF( 563.93890000, 863.30440000, 18.94320000, 565.93890000, 865.30440000, 20.94320000 );
        SWITCH_ROADS_OFF( 536.49740000, 1063.32600000, 18.97530000, 538.49740000, 1065.32600000, 20.97530000 );
        SWITCH_ROADS_OFF( 922.86870000, 258.44850000, 41.74100000, 924.86870000, 260.44850000, 43.74100000 );
        SWITCH_ROADS_OFF( 933.13320000, 270.85210000, 42.65100000, 935.13320000, 272.85210000, 44.65100000 );
        SWITCH_ROADS_OFF( 58.32130000, 266.27880000, 13.16560000, 60.32130000, 268.27880000, 15.16560000 );
        SWITCH_ROADS_OFF( 58.14260000, 254.36340000, 13.15000000, 60.14260000, 256.36340000, 15.15000000 );
        SWITCH_ROADS_OFF( 918.49530000, 257.87200000, 41.46560000, 920.49530000, 259.87200000, 43.46560000 );
        SWITCH_ROADS_OFF( 1079.19200000, 295.22450000, 29.02650000, 1081.19200000, 297.22450000, 31.02650000 );
        SWITCH_ROADS_OFF( 1040.89700000, 211.86710000, 29.44070000, 1042.89700000, 213.86710000, 31.44070000 );
        SWITCH_ROADS_OFF( 1255.38000000, 276.22140000, 29.03830000, 1257.38000000, 278.22140000, 31.03830000 );
        SWITCH_ROADS_OFF( 1032.00000000, 256.56930000, 45.93090000, 1034.00000000, 258.56930000, 47.93090000 );
        SWITCH_ROADS_OFF( 939.21610000, 271.22920000, 43.16500000, 941.21610000, 273.22920000, 45.16500000 );
        SWITCH_ROADS_OFF( 893.42520000, -416.43870000, 35.29700000, 895.42520000, -414.43870000, 37.29700000 );
        SWITCH_ROADS_OFF( 904.72490000, -401.80910000, 35.51120000, 906.72490000, -399.80910000, 37.51120000 );
        SWITCH_ROADS_OFF( 151.26190000, -415.10430000, 12.79700000, 153.26190000, -413.10430000, 14.79700000 );
        SWITCH_ROADS_OFF( 151.23080000, -403.27040000, 12.80040000, 153.23080000, -401.27040000, 14.80040000 );
        SWITCH_ROADS_OFF( 893.43230000, -401.51340000, 35.29680000, 895.43230000, -399.51340000, 37.29680000 );
        SWITCH_ROADS_OFF( 893.53330000, -416.27660000, 35.29410000, 895.53330000, -414.27660000, 37.29410000 );
        SWITCH_ROADS_OFF( 169.19120000, -417.11330000, 12.80190000, 171.19120000, -415.11330000, 14.80190000 );
        SWITCH_ROADS_OFF( 163.61860000, -401.33510000, 12.78670000, 165.61860000, -399.33510000, 14.78670000 );
        SWITCH_ROADS_OFF( -890.12730000, 1156.24800000, 16.00280000, -888.12730000, 1158.24800000, 18.00280000 );
        SWITCH_ROADS_OFF( -889.60250000, 1167.95800000, 16.00680000, -887.60250000, 1169.95800000, 18.00680000 );
        SWITCH_ROADS_OFF( -665.27510000, 1171.31700000, 17.47660000, -663.27510000, 1173.31700000, 19.47660000 );
        SWITCH_ROADS_OFF( -664.71560000, 1159.96800000, 17.57480000, -662.71560000, 1161.96800000, 19.57480000 );
        SWITCH_ROADS_OFF( -394.85170000, 331.01640000, 12.07200000, -392.85170000, 333.01640000, 14.07200000 );
        SWITCH_ROADS_OFF( -957.74520000, 778.29000000, 2.33160000, -955.74520000, 780.29000000, 4.33160000 );
        SWITCH_ROADS_OFF( -945.69610000, 774.68300000, 1.55730000, -943.69610000, 776.68300000, 3.55730000 );
        SWITCH_ROADS_OFF( -946.17150000, 780.39040000, 1.60940000, -944.17150000, 782.39040000, 3.60940000 );
        SWITCH_ROADS_OFF( 473.35780000, 585.03500000, 13.81600000, 613.50500000, 1294.33100000, 47.85440000 );
    }
    return;
}

void sub_16415(unknown uParam0, unknown uParam1)
{
    l_U1 = uParam0;
    l_U2 = uParam1;
    return;
}

void sub_16582()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1917[I]._fU4;
    }
    sub_16662( ref uVar3, ref l_U1516._fU516, 400.00000000, ref l_U1516._fU388, 1120403456 );
    return;
}

void sub_16662(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    int I;

    for ( I = 15; I >= 0; I += -1 )
    {
        if ((NOT (IS_NETWORK_PLAYER_ACTIVE( I ))) || ((uParam0^)[I] == 1))
        {
            (uParam1^)[I] = 0;
        }
        else if ((IS_NETWORK_PLAYER_ACTIVE( I )) AND ((uParam0^)[I] == 0))
        {
            if ((uParam1^)[I] == 0)
            {
                if (l_U3)
                {
                    sub_16890( uParam1, sub_16807( sub_16771( I ) ), uParam2, uParam4, uParam3, I );
                }
                else if (l_U7)
                {
                    sub_16890( uParam1, l_U8, uParam2, uParam4, uParam3, I );
                }
                else if (l_U6)
                {
                    sub_16890( uParam1, sub_18967( -1, 1 ), uParam2, uParam4, uParam3, I );
                }
                else
                {
                    sub_16890( uParam1, sub_18967( GET_PLAYER_TEAM( sub_19026( I ) ), 1 ), uParam2, uParam4, uParam3, I );
                };;;
            }
        }
    }
    return;
}

void sub_16771(unknown uParam0)
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( uParam0 ), ref Result );
    return Result;
}

void sub_16807(unknown uParam0)
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

int sub_16890(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
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
            if (sub_16943( (uParam6^)[I] ))
            {
                ADD_SPAWN_BLOCKING_AREA( sub_17395( (uParam6^)[I] ), uParam5 );
            }
        }
        while (iVar12 < 127)
        {
            if (NOT l_U3)
            {
                sub_17586( ref uParam1, uParam4 + l_U12 );
            }
            bVar13 = false;
            if (l_U5)
            {
                if (GET_RANDOM_CAR_NODE( uParam1, uParam4 + l_U12, 2, 1, 1, ref uVar14, ref uVar11 ))
                {
                    bVar13 = true;
                }
            }
            else if (l_U4)
            {
                if (sub_18503())
                {
                    if (GET_SORTED_NETWORK_RESTART_NODE_USING_GROUP_LIST( uParam1, uParam4 + l_U12, ref uVar14, ref uVar11, uParam7, 2, uParam5 ))
                    {
                        bVar13 = true;
                    }
                }
                else if (GET_SORTED_NETWORK_RESTART_NODE_USING_GROUP_LIST( uParam1, uParam4 + l_U12, ref uVar14, ref uVar11, uParam7, 7, uParam5 ))
                {
                    bVar13 = true;
                }
            }
            else if (sub_18503())
            {
                if (GET_SORTED_NETWORK_RESTART_NODE( uParam1, uParam4 + l_U12, ref uVar14, ref uVar11, uParam7, 0, uParam5 ))
                {
                    bVar13 = true;
                }
            }
            else if (sub_1248() == 7)
            {
                if (GET_SORTED_NETWORK_RESTART_NODE( uParam1, uParam4 + l_U12, ref uVar14, ref uVar11, uParam7, 9, uParam5 ))
                {
                    bVar13 = true;
                }
            }
            else if (sub_1248() == 16)
            {
                if (GET_SORTED_NETWORK_RESTART_NODE( uParam1, uParam4 + l_U12, ref uVar14, ref uVar11, uParam7, 21, uParam5 ))
                {
                    bVar13 = true;
                }
            }
            else if (GET_SORTED_NETWORK_RESTART_NODE( uParam1, uParam4 + l_U12, ref uVar14, ref uVar11, uParam7, 7, uParam5 ))
            {
                bVar13 = true;
            };;;;;;
            if (bVar13)
            {
                (uParam0^)[uParam7] = uVar11;
                l_U12 = 0.00000000;
                REGISTER_PLAYER_RESPAWN_COORDS( uParam7, uVar14 );
                return 1;
            }
            else
            {
                l_U12 += 30.00000000;
                return 0;
            }
        }
        l_U12 += 10.00000000;
    }
    return 0;
}

int sub_16943(unknown uParam0)
{
    int iVar3;

    if (DOES_PED_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        if (IS_CHAR_DEAD( sub_11590( uParam0 ) ))
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
        if (IS_VEH_DRIVEABLE( sub_11665( uParam0 ) ))
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
        if (IS_OBJECT_IN_WATER( sub_9848( uParam0 ) ))
        {
            return 0;
        }
        else
        {
            iVar3 = sub_17132( sub_17103( sub_9848( uParam0 ) ) );
            if (((iVar3 < 500) AND ((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( sub_9848( uParam0 ), 0 )) < 0.30000000)) || (((iVar3 < 500) AND ((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( sub_9848( uParam0 ), 1 )) < 0.30000000)) || (iVar3 == 0)))
            {
                return 0;
            }
            else if (IS_OBJECT_ATTACHED( sub_9848( uParam0 ) ))
            {
                if (DOES_VEHICLE_EXIST( GET_CAR_OBJECT_IS_ATTACHED_TO( sub_9848( uParam0 ) ) ))
                {
                    if (IS_VEH_DRIVEABLE( GET_CAR_OBJECT_IS_ATTACHED_TO( sub_9848( uParam0 ) ) ))
                    {
                        return 1;
                    }
                    else if (IS_CAR_IN_WATER( GET_CAR_OBJECT_IS_ATTACHED_TO( sub_9848( uParam0 ) ) ))
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

void sub_17103(unknown uParam0)
{
    unknown Result;

    GET_OBJECT_HEALTH( uParam0, ref Result );
    return Result;
}

void sub_17132(unknown uParam0)
{
    return FLOOR( uParam0 );
}

void sub_17395(unknown uParam0)
{
    unknown Result;
    unknown uVar4;
    unknown uVar5;

    if (DOES_PED_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        GET_CHAR_COORDINATES( sub_11590( uParam0 ), ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        GET_DEAD_CAR_COORDINATES( sub_11665( uParam0 ), ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else if (DOES_OBJECT_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        GET_OBJECT_COORDINATES( sub_9848( uParam0 ), ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    };;;
    return Result;
}

void sub_17586(int iParam0, float fParam1)
{
    if (fParam1 > 500.00000000)
    {
        (iParam0^) = {sub_17612( (iParam0^) )};
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

void sub_17612(vector vParam0)
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
        vVar12 = {sub_17645( I )};
        uVar9 = {vParam0 - vVar12};
        fVar8 = ((uVar9._fU0 * uVar9._fU0) + (uVar9._fU4 * uVar9._fU4)) + (uVar9._fU8 * uVar9._fU8);
        if (fVar7 > fVar8)
        {
            iVar6 = I;
            fVar7 = fVar8;
        }
    }
    return sub_17645( iVar6 );
}

vector sub_17645(int iParam0)
{
    if (iParam0 == -1)
    {
        iParam0 = sub_12313( 0, 8 );
    }
    switch (iParam0)
    {
        case 0:
        return vector( 905.27170000, 1695.95200000, 15.99670000);
        break;
        case 1:
        return vector( 1308.08100000, 403.18210000, 21.42760000);
        break;
        case 2:
        return vector( 1132.11700000, -345.36140000, 17.62610000);
        break;
        case 3:
        return vector( -37.85620000, -288.08140000, 13.72400000);
        break;
        case 4:
        return vector( -220.00020000, 397.71090000, 13.81190000);
        break;
        case 5:
        return vector( -271.03720000, 1187.77700000, 13.80190000);
        break;
        case 6:
        return vector( -1181.39700000, 1277.81500000, 22.81060000);
        break;
        case 7:
        return vector( -1581.99200000, 237.23200000, 11.96080000);
        break;
    }
    return vector( 1132.11700000, -345.36140000, 17.62610000);
}

int sub_18503()
{
    int iVar2;

    iVar2 = NETWORK_GET_GAME_MODE();
    if ((iVar2 == 16) || ((iVar2 == 15) || ((iVar2 == 14) || (iVar2 == 13))))
    {
        return 1;
    }
    return 0;
}

vector sub_18967(int iParam0, unknown uParam1)
{
    int I;
    int iVar5;
    int iVar6;
    vector vVar7;

    if ((uParam1) AND (l_U1))
    {
        return sub_17645( l_U2 );
    }
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (IS_PLAYER_CONTROL_ON( sub_19026( I ) ))
            {
                if (NOT (sub_19093( sub_16771( I ), -2000.00000000, -2000.00000000, 250.00000000, 50.00000000 )))
                {
                    iVar6++;
                    if ((iParam0 == -1) || ((GET_PLAYER_TEAM( sub_19026( I ) )) == iParam0))
                    {
                        vVar7 = {vVar7 + (sub_16807( sub_16771( I ) ))};
                        iVar5++;
                    }
                }
            }
        }
    }
    if (iVar5 == 0)
    {
        if ((iParam0 != -1) AND (iVar6 > 0))
        {
            return sub_18967( -1, 0 );
        }
        else
        {
            return sub_17645( -1 );
        }
    }
    return vVar7 / (TO_FLOAT( iVar5 ));
}

void sub_19026(unknown uParam0)
{
    return CONVERT_INT_TO_PLAYERINDEX( uParam0 );
}

int sub_19093(unknown uParam0, vector vParam1, float fParam4)
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

void sub_19475(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4)
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
                iVar9 = sub_12313( 0, sub_19533( uParam0 ) );
                iVar7 = iVar9;
                sub_19733( ref iVar7, sub_19533( uParam0 ) );
                while (iVar7 != iVar9)
                {
                    bVar10 = true;
                    if (sub_19806( uParam0, uParam1, iVar7, uParam2 - l_U14 ))
                    {
                        sub_19733( ref iVar7, sub_19533( uParam0 ) );
                        bVar10 = false;
                    }
                    else if (bParam3)
                    {
                        if (((sub_31329( uParam1 )) > 0) AND (NOT (sub_19806( uParam0, uParam1, iVar7, uParam4 + l_U15 ))))
                        {
                            sub_19733( ref iVar7, sub_19533( uParam0 ) );
                            bVar10 = false;
                        }
                    }
                    if (bVar10)
                    {
                        l_U14 = uParam2;
                        l_U15 = 0.00000000;
                        (uParam1^)[I] = iVar7;
                        iVar7 = iVar9;
                    }
                }
                if (NOT bVar10)
                {
                    if (l_U14 < (uParam2 - 10.00000000))
                    {
                        l_U14 += 10.00000000;
                        l_U15 += 10.00000000;
                    }
                }
            }
        }
    }
    return;
}

int sub_19533(unknown uParam0)
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

int sub_19733(unknown uParam0, int iParam1)
{
    (uParam0^)++;
    if ((uParam0^) >= iParam1)
    {
        (uParam0^) = 0;
        return 1;
    }
    return 0;
}

int sub_19806(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int I;

    for ( I = 0; I < 8; I++ )
    {
        if ((uParam1^)[I] > -1)
        {
            if ((GET_NO_OF_PLAYERS_IN_TEAM( I )) > 0)
            {
                if (sub_31163( sub_19861( uParam0, uParam2 ), sub_19861( uParam0, (uParam1^)[I] ), uParam3 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

vector sub_19861(unknown uParam0, int iParam1)
{
    switch (uParam0)
    {
        case 0:
        if (iParam1 == -1)
        {
            iParam1 = sub_12313( 0, 25 );
        }
        switch (iParam1)
        {
            case 0: return vector( 618.07590000, 1480.08300000, 11.86000000);
            case 1: return vector( 721.83950000, 1292.62800000, 6.34140000);
            case 2: return vector( 740.12030000, 1306.20900000, 6.32320000);
            case 3: return vector( 808.74600000, 1291.65200000, 3.38850000);
            case 4: return vector( 820.73540000, 1321.93200000, 8.16740000);
            case 5: return vector( 813.32400000, 1578.86800000, 16.88700000);
            case 6: return vector( 915.65440000, 1508.26500000, 15.85250000);
            case 7: return vector( 980.96690000, 1604.64800000, 15.85070000);
            case 8: return vector( 869.49900000, 1660.69100000, 16.05390000);
            case 9: return vector( 900.95810000, 1692.10900000, 16.05420000);
            case 10: return vector( 1097.83000000, 1714.01000000, 9.71990000);
            case 11: return vector( 1139.51400000, 1691.20600000, 9.36050000);
            case 12: return vector( 1246.73800000, 1715.95500000, 15.58780000);
            case 13: return vector( 1179.20100000, 1525.12100000, 15.23600000);
            case 14: return vector( 1265.91200000, 1487.04400000, 15.76780000);
            case 15: return vector( 1146.18200000, 1593.58700000, 15.50320000);
            case 16: return vector( 1432.23600000, 1746.87800000, 15.96060000);
            case 17: return vector( 1373.06000000, 1725.88000000, 15.67790000);
            case 18: return vector( 1063.96600000, 1827.38900000, 11.79200000);
            case 19: return vector( 707.08260000, 1772.69000000, 38.24020000);
            case 20: return vector( 698.03100000, 1573.09000000, 20.35470000);
            case 21: return vector( 406.78100000, 1587.90900000, 15.18290000);
            case 22: return vector( 305.05610000, 1825.02500000, 16.82120000);
            case 23: return vector( 467.88380000, 1738.28100000, 14.80370000);
            case 24: return vector( 480.31010000, 1294.53800000, 1.60910000);
        }
        break;
        case 1:
        if (iParam1 == -1)
        {
            iParam1 = sub_12313( 0, 93 );
        }
        switch (iParam1)
        {
            case 0: return vector( 1291.24800000, 1006.94000000, 12.52300000);
            case 1: return vector( 1346.19600000, 907.64040000, 12.79380000);
            case 2: return vector( 1002.88500000, 659.24100000, 25.01640000);
            case 3: return vector( 916.80250000, 605.72570000, 21.32420000);
            case 4: return vector( 1043.39400000, 498.71730000, 18.30560000);
            case 5: return vector( 1095.18700000, 426.74130000, 28.76460000);
            case 6: return vector( 881.85890000, 242.28050000, 25.41670000);
            case 7: return vector( 1047.41000000, 313.75290000, 30.45650000);
            case 8: return vector( 1134.69000000, 310.85200000, 28.70260000);
            case 9: return vector( 1191.46500000, 291.87750000, 29.53900000);
            case 10: return vector( 1264.38500000, 352.37520000, 21.00620000);
            case 11: return vector( 1262.70600000, 426.21810000, 22.59860000);
            case 12: return vector( 1083.20500000, 469.67310000, 28.74730000);
            case 13: return vector( 1158.69700000, 564.19990000, 31.45210000);
            case 14: return vector( 1063.19600000, 656.19350000, 36.26680000);
            case 15: return vector( 1335.86200000, 488.94650000, 27.11680000);
            case 16: return vector( 1141.59000000, 724.54380000, 34.39900000);
            case 17: return vector( 1222.24300000, 702.21250000, 36.26330000);
            case 18: return vector( 1193.97500000, 810.85610000, 34.96920000);
            case 19: return vector( 1172.43100000, 863.45180000, 34.96930000);
            case 20: return vector( 1785.85000000, 855.80790000, 15.43210000);
            case 21: return vector( 1635.15100000, 772.28630000, 28.44570000);
            case 22: return vector( 1790.44800000, 744.52480000, 24.73550000);
            case 23: return vector( 1868.79000000, 666.68710000, 26.72610000);
            case 24: return vector( 1860.49700000, 533.81120000, 27.77150000);
            case 25: return vector( 1853.87800000, 469.02990000, 26.95710000);
            case 26: return vector( 1837.98200000, 349.11430000, 21.55200000);
            case 27: return vector( 1753.87500000, 402.59170000, 24.43960000);
            case 28: return vector( 1688.54100000, 637.26570000, 27.91430000);
            case 29: return vector( 1599.83200000, 580.95640000, 29.57190000);
            case 30: return vector( 1763.95000000, 499.54890000, 28.02540000);
            case 31: return vector( 1538.88700000, 693.01830000, 28.23280000);
            case 32: return vector( 1381.75000000, 670.63650000, 33.88940000);
            case 33: return vector( 1253.32200000, 244.41300000, 32.86710000);
            case 34: return vector( 1569.60900000, 879.88560000, 15.04050000);
            case 35: return vector( 1518.70300000, 111.15850000, 22.54630000);
            case 36: return vector( 1555.34600000, 118.83260000, 22.12720000);
            case 37: return vector( 1619.01300000, 223.18330000, 21.48510000);
            case 38: return vector( 1732.89300000, 225.84630000, 24.82060000);
            case 39: return vector( 1784.20200000, 185.10600000, 19.87820000);
            case 40: return vector( 1933.95900000, 364.56730000, 17.08640000);
            case 41: return vector( 1999.82100000, 406.42020000, 17.17800000);
            case 42: return vector( 1951.42900000, 419.52450000, 17.24190000);
            case 43: return vector( 1993.26600000, 669.65300000, 17.05740000);
            case 44: return vector( 1980.73400000, 557.22600000, 17.04420000);
            case 45: return vector( 1469.39800000, 132.15810000, 20.91650000);
            case 46: return vector( 1519.91700000, 104.96900000, 22.64680000);
            case 47: return vector( 1342.11400000, 156.16530000, 26.24870000);
            case 48: return vector( 1386.88000000, 70.04300000, 24.90580000);
            case 49: return vector( 1421.19000000, 5.34360000, 23.92750000);
            case 50: return vector( 1319.46100000, -17.59060000, 27.26200000);
            case 51: return vector( 1226.81100000, 47.04350000, 34.60980000);
            case 52: return vector( 1170.72900000, -10.05610000, 33.99480000);
            case 53: return vector( 1226.17100000, 131.12990000, 33.41750000);
            case 54: return vector( 1140.14900000, 138.28250000, 31.92510000);
            case 55: return vector( 966.40140000, 287.34790000, 26.12030000);
            case 56: return vector( 1454.69400000, 193.27410000, 25.18380000);
            case 57: return vector( 858.20650000, 500.87670000, 12.55740000);
            case 58: return vector( 791.45670000, 409.42270000, 10.54850000);
            case 59: return vector( 768.43630000, 433.43030000, 10.55300000);
            case 60: return vector( 940.76750000, 451.47590000, 14.01580000);
            case 61: return vector( 791.31590000, 297.97180000, 4.99450000);
            case 62: return vector( 770.29210000, 204.50710000, 5.01300000);
            case 63: return vector( 843.86490000, 112.42490000, 5.02430000);
            case 64: return vector( 753.13460000, 62.32970000, 4.93550000);
            case 65: return vector( 729.97670000, 2.64490000, 4.98820000);
            case 66: return vector( 829.83280000, 57.76990000, 5.00980000);
            case 67: return vector( 738.20060000, -84.20820000, 4.81910000);
            case 68: return vector( 733.29750000, -143.50070000, 4.81870000);
            case 69: return vector( 809.64500000, -159.40830000, 5.11550000);
            case 70: return vector( 874.37390000, -81.24490000, 5.00070000);
            case 71: return vector( 1168.90200000, -175.93270000, 27.42940000);
            case 72: return vector( 1207.72600000, -100.45600000, 27.29410000);
            case 73: return vector( 1282.88200000, -103.50780000, 26.20640000);
            case 74: return vector( 1347.49200000, -91.55660000, 22.07750000);
            case 75: return vector( 1326.10800000, -178.87410000, 23.39490000);
            case 76: return vector( 1349.93500000, -357.37140000, 18.01780000);
            case 77: return vector( 1278.38100000, -341.18150000, 17.83520000);
            case 78: return vector( 1402.19300000, -788.06610000, 7.16070000);
            case 79: return vector( 1324.22800000, -616.90780000, 11.56210000);
            case 80: return vector( 1198.87500000, -643.04960000, 12.89480000);
            case 81: return vector( 947.48580000, -505.07560000, 14.17170000);
            case 82: return vector( 870.75320000, -530.82930000, 13.33010000);
            case 83: return vector( 807.97960000, -496.68140000, 12.99880000);
            case 84: return vector( 851.69560000, -433.68640000, 12.85080000);
            case 85: return vector( 708.92820000, -351.46860000, 4.88490000);
            case 86: return vector( 748.00870000, -276.23270000, 4.81770000);
            case 87: return vector( 870.03630000, -315.32570000, 15.51040000);
            case 88: return vector( 962.37390000, -332.05010000, 18.23500000);
            case 89: return vector( 1046.69000000, -326.58890000, 18.43680000);
            case 90: return vector( 1044.99800000, 44.39360000, 32.64030000);
            case 91: return vector( 1122.56600000, -398.05980000, 17.60450000);
            case 92: return vector( 1048.34600000, -522.33370000, 13.47790000);
        }
        break;
        case 2:
        if (iParam1 == -1)
        {
            iParam1 = sub_12313( 0, 83 );
        }
        switch (iParam1)
        {
            case 0: return vector( -373.69610000, 1775.43500000, 7.65860000);
            case 1: return vector( -162.95820000, 1762.13100000, 6.48470000);
            case 2: return vector( -513.99490000, 1725.48800000, 7.60000000);
            case 3: return vector( -318.10030000, 1604.77200000, 19.27450000);
            case 4: return vector( -290.06480000, 1554.74800000, 19.41470000);
            case 5: return vector( -100.49750000, 1559.22900000, 17.28570000);
            case 6: return vector( -497.82940000, 606.92570000, 4.31860000);
            case 7: return vector( 13.09700000, 867.12990000, 12.10430000);
            case 8: return vector( 97.45180000, 1133.61600000, 13.55350000);
            case 9: return vector( -15.85410000, 1222.01000000, 19.42860000);
            case 10: return vector( -414.01630000, 1217.74500000, 21.90780000);
            case 11: return vector( -197.87700000, 1379.56300000, 19.31950000);
            case 12: return vector( -214.88240000, 1652.73700000, 17.70170000);
            case 13: return vector( -576.55050000, 1461.02500000, 8.93800000);
            case 14: return vector( -606.20950000, 1336.09700000, 4.90860000);
            case 15: return vector( -432.50310000, 1310.50700000, 16.41390000);
            case 16: return vector( -625.64850000, 1261.50200000, 4.90860000);
            case 17: return vector( -528.70660000, 1486.60400000, 17.71070000);
            case 18: return vector( -149.38350000, 1487.40600000, 17.46170000);
            case 19: return vector( -77.77500000, 846.67050000, 13.68340000);
            case 20: return vector( -433.38850000, 1140.57900000, 11.76830000);
            case 21: return vector( -525.79130000, 1139.36800000, 9.00300000);
            case 22: return vector( -616.32780000, 1119.42900000, 8.91500000);
            case 23: return vector( -485.99190000, 896.66940000, 8.80830000);
            case 24: return vector( -494.43800000, 803.22740000, 8.85530000);
            case 25: return vector( -425.29350000, 754.43880000, 8.66600000);
            case 26: return vector( -602.57340000, 524.20510000, 3.67030000);
            case 27: return vector( -663.64500000, 458.39770000, 20.48290000);
            case 28: return vector( -600.84910000, 366.05770000, 3.66170000);
            case 29: return vector( -617.49520000, 160.72360000, 3.69720000);
            case 30: return vector( -582.55000000, -101.88460000, 5.43270000);
            case 31: return vector( -369.34600000, -373.53180000, 3.91520000);
            case 32: return vector( -539.73880000, -273.28450000, 5.77790000);
            case 33: return vector( -634.22630000, -235.54600000, 5.92800000);
            case 34: return vector( -481.98250000, -404.35960000, 4.04000000);
            case 35: return vector( -364.81440000, -632.38750000, 3.78390000);
            case 36: return vector( -267.57860000, -197.95480000, 13.56400000);
            case 37: return vector( -91.70530000, 71.20590000, 13.73000000);
            case 38: return vector( -67.27070000, -21.98630000, 13.49080000);
            case 39: return vector( 59.28160000, -129.38480000, 13.64690000);
            case 40: return vector( 87.32090000, 93.49940000, 13.75770000);
            case 41: return vector( 165.11630000, 221.98050000, 13.76110000);
            case 42: return vector( 190.11750000, 167.23750000, 13.76260000);
            case 43: return vector( -96.91870000, 314.02540000, 13.80690000);
            case 44: return vector( -266.22990000, 232.32910000, 13.08150000);
            case 45: return vector( 79.58770000, 859.96810000, 14.65220000);
            case 46: return vector( -474.95030000, 188.36530000, 8.85820000);
            case 47: return vector( -340.93910000, 213.55740000, 13.75390000);
            case 48: return vector( -605.32670000, 228.65460000, 3.66220000);
            case 49: return vector( -488.78510000, 366.20490000, 5.98330000);
            case 50: return vector( -495.90230000, 454.81760000, 6.14690000);
            case 51: return vector( -252.59790000, 582.41290000, 13.77160000);
            case 52: return vector( -166.93490000, 580.24180000, 13.96520000);
            case 53: return vector( -306.30130000, 455.46490000, 13.76610000);
            case 54: return vector( 82.41400000, 459.05030000, 13.71500000);
            case 55: return vector( 194.42730000, 459.82810000, 14.15830000);
            case 56: return vector( 138.49810000, 580.18090000, 13.56230000);
            case 57: return vector( 1.83150000, 766.74960000, 13.56260000);
            case 58: return vector( 88.31150000, 745.64110000, 13.66690000);
            case 59: return vector( 103.05320000, 679.92140000, 13.52310000);
            case 60: return vector( -316.95710000, -10.80560000, 13.65080000);
            case 61: return vector( -2.01730000, -184.40780000, 13.48590000);
            case 62: return vector( 110.75850000, -201.20920000, 13.78530000);
            case 63: return vector( 232.39320000, -63.69430000, 13.76190000);
            case 64: return vector( 336.15850000, -277.88480000, 3.44660000);
            case 65: return vector( 258.82590000, -273.26340000, 3.94770000);
            case 66: return vector( 182.95850000, -263.37340000, 11.82780000);
            case 67: return vector( 110.16780000, -276.70750000, 13.71130000);
            case 68: return vector( -407.16640000, -266.66240000, 11.69840000);
            case 69: return vector( 105.98290000, -371.22950000, 13.76140000);
            case 70: return vector( 207.18310000, -366.13100000, 4.16690000);
            case 71: return vector( 359.86470000, -384.14740000, 3.66950000);
            case 72: return vector( 375.16980000, -437.83360000, 3.69350000);
            case 73: return vector( 210.23330000, -534.43320000, 8.03340000);
            case 74: return vector( -178.72500000, -582.54750000, 3.80830000);
            case 75: return vector( -162.34110000, -698.08430000, 3.95860000);
            case 76: return vector( 9.52350000, -695.34640000, 8.39950000);
            case 77: return vector( 227.46980000, -804.47690000, 3.80280000);
            case 78: return vector( 103.17110000, -875.59250000, 3.78760000);
            case 79: return vector( -40.14370000, -921.88750000, 3.99710000);
            case 80: return vector( -109.43440000, -396.12340000, 13.76290000);
            case 81: return vector( -153.22630000, -860.21850000, 4.12170000);
            case 82: return vector( -92.02700000, -333.58940000, 13.68540000);
        }
        break;
        case 3:
        case 4:
        if (iParam1 == -1)
        {
            iParam1 = sub_12313( 0, 117 );
        }
        switch (iParam1)
        {
            case 0: return vector( -968.09440000, 1877.23800000, 21.32530000);
            case 1: return vector( -1235.05200000, 1842.18800000, 5.47780000);
            case 2: return vector( -1329.81100000, 1732.77300000, 26.81980000);
            case 3: return vector( -1211.59800000, 1759.46000000, 31.64290000);
            case 4: return vector( -1118.98400000, 1739.46300000, 34.80070000);
            case 5: return vector( -1010.12600000, 1653.47700000, 23.01290000);
            case 6: return vector( -1049.26600000, 1636.22800000, 34.45380000);
            case 7: return vector( -1242.47500000, 1684.11500000, 33.43340000);
            case 8: return vector( -1168.62200000, 1644.10800000, 34.50010000);
            case 9: return vector( -1185.65300000, 1546.94900000, 28.73960000);
            case 10: return vector( -989.71940000, 1516.01000000, 22.25330000);
            case 11: return vector( -877.73230000, 1319.44300000, 20.97180000);
            case 12: return vector( -800.82430000, 1289.22800000, 17.19490000);
            case 13: return vector( -989.66580000, 1422.54200000, 38.62990000);
            case 14: return vector( -1099.96400000, 1463.14700000, 23.56280000);
            case 15: return vector( -1153.24100000, 1431.02000000, 23.34630000);
            case 16: return vector( -1252.94600000, 1487.02700000, 24.09170000);
            case 17: return vector( -1403.51300000, 1456.12100000, 24.26020000);
            case 18: return vector( -1485.47800000, 1360.80200000, 12.05020000);
            case 19: return vector( -1359.87800000, 1362.04500000, 19.44380000);
            case 20: return vector( -1357.79800000, 1217.67800000, 21.37860000);
            case 21: return vector( -1243.70600000, 1287.73600000, 19.68790000);
            case 22: return vector( -1101.07300000, 1288.93100000, 23.59540000);
            case 23: return vector( -1015.20500000, 1318.10300000, 24.68090000);
            case 24: return vector( -849.25040000, 1206.43500000, 19.74750000);
            case 25: return vector( -818.93300000, 911.59900000, 3.22060000);
            case 26: return vector( -950.46380000, 972.07610000, 21.44750000);
            case 27: return vector( -958.20120000, 1131.76900000, 16.64870000);
            case 28: return vector( -954.24290000, 1198.53900000, 22.83790000);
            case 29: return vector( -1115.23600000, 1188.00300000, 16.25710000);
            case 30: return vector( -1201.85500000, 1189.78200000, 20.83210000);
            case 31: return vector( -1273.01700000, 1190.29100000, 20.84050000);
            case 32: return vector( -1293.52100000, 1104.27400000, 18.58820000);
            case 33: return vector( -1304.55400000, 1075.70700000, 18.49510000);
            case 34: return vector( -1292.89300000, 1006.13800000, 18.45740000);
            case 35: return vector( -1100.91000000, 1050.53100000, 12.65120000);
            case 36: return vector( -1159.36200000, 986.02390000, 12.49460000);
            case 37: return vector( -1119.19300000, 954.27920000, 18.57290000);
            case 38: return vector( -1079.99500000, 929.75630000, 12.55470000);
            case 39: return vector( -1051.79900000, 907.42770000, 21.99580000);
            case 40: return vector( -1023.94200000, 844.19840000, 22.01130000);
            case 41: return vector( -961.24010000, 867.51560000, 12.72340000);
            case 42: return vector( -802.27420000, 862.18760000, 12.52170000);
            case 43: return vector( -957.28580000, 723.44110000, 2.81050000);
            case 44: return vector( -1063.71900000, 724.21390000, 2.81050000);
            case 45: return vector( -1105.33500000, 631.68560000, 7.69330000);
            case 46: return vector( -1062.67800000, 582.38400000, 3.37270000);
            case 47: return vector( -1078.28700000, 461.64690000, 3.37290000);
            case 48: return vector( -961.56350000, 448.55950000, 3.37280000);
            case 49: return vector( -1139.43900000, 534.35520000, 3.37280000);
            case 50: return vector( -1213.33900000, 586.91720000, 3.37280000);
            case 51: return vector( -1326.58500000, 621.91630000, 14.39730000);
            case 52: return vector( -1289.67800000, 697.74240000, 14.41320000);
            case 53: return vector( -1473.64100000, 699.62350000, 18.58520000);
            case 54: return vector( -1442.52000000, 800.27630000, 18.56470000);
            case 55: return vector( -1485.18600000, 868.28020000, 18.53680000);
            case 56: return vector( -1410.87500000, 1128.87800000, 19.35650000);
            case 57: return vector( -1530.98800000, 1101.12300000, 25.68970000);
            case 58: return vector( -1482.66000000, 1096.15700000, 22.06770000);
            case 59: return vector( -1324.23300000, 952.04250000, 18.56670000);
            case 60: return vector( -1116.48000000, 812.95060000, 18.62050000);
            case 61: return vector( -1539.90800000, 790.52140000, 22.28230000);
            case 62: return vector( -1536.89400000, 549.57100000, 22.41000000);
            case 63: return vector( -1437.82600000, 564.57150000, 18.29070000);
            case 64: return vector( -1371.03800000, 513.36310000, 11.47960000);
            case 65: return vector( -1316.28300000, 481.46410000, 11.50240000);
            case 66: return vector( -1355.12500000, 406.00100000, 13.62130000);
            case 67: return vector( -1389.73000000, 329.50480000, 13.61990000);
            case 68: return vector( -1419.33100000, 273.62780000, 10.94580000);
            case 69: return vector( -1557.78100000, 373.78560000, 22.35660000);
            case 70: return vector( -1692.34400000, 382.59050000, 23.15560000);
            case 71: return vector( -1742.06800000, 465.39960000, 25.76310000);
            case 72: return vector( -1642.03900000, 527.81240000, 24.52370000);
            case 73: return vector( -1697.34400000, 593.61800000, 26.72250000);
            case 74: return vector( -1715.70700000, 666.59830000, 30.16810000);
            case 75: return vector( -1626.71100000, 819.00730000, 28.73200000);
            case 76: return vector( -1617.95100000, 722.91480000, 26.65330000);
            case 77: return vector( -1858.60400000, 278.70010000, 21.95440000);
            case 78: return vector( -1629.69900000, 174.99400000, 11.40920000);
            case 79: return vector( -1722.45800000, 49.06910000, 8.33030000);
            case 80: return vector( -1733.34200000, 137.05040000, 10.18690000);
            case 81: return vector( -1838.51900000, 98.23710000, 8.86220000);
            case 82: return vector( -1923.29500000, 30.42410000, 6.46700000);
            case 83: return vector( -2004.63800000, 47.74070000, 6.56920000);
            case 84: return vector( -2111.06000000, 85.64860000, 6.44380000);
            case 85: return vector( -2117.73500000, 162.83980000, 11.04470000);
            case 86: return vector( -2162.07600000, 22.96640000, 6.46760000);
            case 87: return vector( -2096.04500000, -20.20610000, 6.41700000);
            case 88: return vector( -2052.07600000, -58.98760000, 5.36250000);
            case 89: return vector( -1988.34200000, -63.90730000, 5.36200000);
            case 90: return vector( -1803.32000000, 65.12480000, 8.30550000);
            case 91: return vector( -1661.46800000, -26.54290000, 7.98240000);
            case 92: return vector( -1605.84700000, 7.02510000, 9.04390000);
            case 93: return vector( -1647.83200000, 94.73040000, 8.33010000);
            case 94: return vector( -1582.47600000, -83.44280000, 5.62780000);
            case 95: return vector( -1325.71700000, 203.07340000, 7.57060000);
            case 96: return vector( -1311.18900000, 305.19860000, 12.37480000);
            case 97: return vector( -1136.75900000, 409.32710000, 3.50000000);
            case 98: return vector( -1221.75400000, 302.66380000, 3.38140000);
            case 99: return vector( -1211.77500000, 220.56600000, 3.43250000);
            case 100: return vector( -1103.03600000, 156.45230000, 3.23210000);
            case 101: return vector( -1173.89300000, 14.68160000, 3.20690000);
            case 102: return vector( -1373.79900000, 35.36320000, 6.09490000);
            case 103: return vector( -1388.33400000, -23.42280000, 5.29650000);
            case 104: return vector( -1497.59500000, -81.36370000, 5.29510000);
            case 105: return vector( -1698.75400000, -276.05370000, 1.74990000);
            case 106: return vector( -1763.43500000, -498.97090000, 2.04540000);
            case 107: return vector( -2058.28100000, -388.59680000, 3.36560000);
            case 108: return vector( -1821.11700000, -652.61490000, 1.83670000);
            case 109: return vector( -1473.77800000, -571.96330000, 1.83680000);
            case 110: return vector( -1460.09800000, -273.85070000, 1.83700000);
            case 111: return vector( -1590.66400000, -309.17450000, -4.10300000);
            case 112: return vector( -1349.04400000, -495.69040000, 1.92350000);
            case 113: return vector( -1198.31300000, -585.87230000, 1.83730000);
            case 114: return vector( -1048.56100000, -307.02280000, 1.91810000);
            case 115: return vector( -1225.26600000, -189.61200000, 2.92350000);
            case 116: return vector( -1101.24700000, -120.01700000, 3.24710000);
        }
        break;
        case 5:
        if (iParam1 == -1)
        {
            iParam1 = sub_12313( 0, 17 );
        }
        switch (iParam1)
        {
            case 0: return vector( -2045.04200000, -405.85830000, 3.34110000);
            case 1: return vector( -1547.04500000, -428.17680000, 3.60510000);
            case 2: return vector( -1795.02900000, -637.65390000, 1.83700000);
            case 3: return vector( -1795.40600000, -247.12960000, 1.74950000);
            case 4: return vector( -1785.83200000, -463.58520000, 2.04560000);
            case 5: return vector( -1549.03400000, -587.66360000, 1.83860000);
            case 6: return vector( -1540.37100000, -272.56520000, 1.79720000);
            case 7: return vector( -1702.85200000, -397.69540000, 1.93740000);
            case 8: return vector( -1905.31100000, -487.50770000, 2.04570000);
            case 9: return vector( -1946.72100000, -238.27010000, 6.61150000);
            case 10: return vector( -1820.22000000, -395.38440000, 2.04560000);
            case 11: return vector( -1934.11800000, -361.97140000, 2.20890000);
            case 12: return vector( -1891.93000000, -654.23890000, 1.83830000);
            case 13: return vector( -1946.33200000, -566.00420000, 2.15020000);
            case 14: return vector( -1686.18500000, -575.05820000, 1.92410000);
            case 15: return vector( -1675.69000000, -512.00100000, 1.92450000);
            case 16: return vector( -1698.45700000, -273.01930000, 1.75040000);
        }
        break;
        case 6:
        if (iParam1 == -1)
        {
            iParam1 = sub_12313( 0, 8 );
        }
        switch (iParam1)
        {
            case 0: return vector( -1116.10600000, -348.87500000, 2.19400000);
            case 1: return vector( -940.68080000, -429.06620000, 2.91770000);
            case 2: return vector( -986.03560000, -340.27360000, 2.43110000);
            case 3: return vector( -1121.07900000, -457.83440000, 1.20020000);
            case 4: return vector( -1044.28900000, -403.28160000, 2.25220000);
            case 5: return vector( -976.45000000, -431.28990000, 2.18010000);
            case 6: return vector( -1086.08800000, -344.18240000, 2.19350000);
            case 7: return vector( -1033.14200000, -439.94420000, 2.12800000);
        }
        break;
        case 7:
        if (iParam1 == -1)
        {
            iParam1 = sub_12313( 0, 13 );
        }
        switch (iParam1)
        {
            case 0: return vector( -1206.65900000, 584.01250000, 3.37300000);
            case 1: return vector( -1059.49400000, 563.02200000, 3.37410000);
            case 2: return vector( -1024.97900000, 446.30590000, 3.37310000);
            case 3: return vector( -1131.37000000, 408.12270000, 3.44830000);
            case 4: return vector( -1212.68900000, 515.66940000, 3.37300000);
            case 5: return vector( -1258.87200000, 357.56740000, 6.22280000);
            case 6: return vector( -1058.82900000, 320.74460000, 3.50290000);
            case 7: return vector( -1259.38600000, -22.90110000, 5.24340000);
            case 8: return vector( -1119.07800000, 31.39740000, 3.21300000);
            case 9: return vector( -1031.13300000, 182.47170000, 3.26060000);
            case 10: return vector( -1214.23100000, 218.98540000, 3.43290000);
            case 11: return vector( -1163.08600000, 132.70520000, 3.23290000);
            case 12: return vector( -1288.22500000, 69.00570000, 3.28990000);
        }
        break;
        case 8:
        if (iParam1 == -1)
        {
            iParam1 = sub_12313( 0, 11 );
        }
        switch (iParam1)
        {
            case 0: return vector( -527.53870000, -1025.65300000, 3.95890000);
            case 1: return vector( -625.33890000, -980.64140000, 3.83770000);
            case 2: return vector( -557.97600000, -899.27890000, 3.83770000);
            case 3: return vector( -491.18220000, -956.35500000, 3.83770000);
            case 4: return vector( -620.40250000, -848.72050000, 3.83770000);
            case 5: return vector( -610.40250000, -719.66980000, 12.06720000);
            case 6: return vector( -579.95470000, -786.44850000, 12.06630000);
            case 7: return vector( -657.18670000, -783.92350000, 4.43890000);
            case 8: return vector( -679.55770000, -852.37730000, 4.53750000);
            case 9: return vector( -523.48290000, -818.11370000, 4.53770000);
            case 10: return vector( -589.67140000, -1035.31200000, 4.04630000);
        }
        break;
        case 9:
        if (iParam1 == -1)
        {
            iParam1 = sub_12313( 0, 9 );
        }
        switch (iParam1)
        {
            case 0: return vector( 513.75260000, -62.69920000, 8.25160000);
            case 1: return vector( 438.30620000, 20.42110000, 7.73390000);
            case 2: return vector( 475.32740000, 104.81900000, 7.01870000);
            case 3: return vector( 554.05080000, 188.55850000, 7.71170000);
            case 4: return vector( 551.92350000, 298.63960000, 7.86380000);
            case 5: return vector( 467.79140000, 378.30950000, 7.70000000);
            case 6: return vector( 402.92760000, 279.19560000, 7.69450000);
            case 7: return vector( 469.10680000, 200.00230000, 7.75130000);
            case 8: return vector( 390.26780000, 143.16430000, 7.64390000);
        }
        break;
        case 10:
        if (iParam1 == -1)
        {
            iParam1 = sub_12313( 0, 13 );
        }
        switch (iParam1)
        {
            case 0: return vector( 629.72290000, 611.17860000, 1.80740000);
            case 1: return vector( 678.35020000, 760.26010000, 1.78520000);
            case 2: return vector( 605.03600000, 908.50520000, 1.73140000);
            case 3: return vector( 587.71640000, 755.22210000, 1.79620000);
            case 4: return vector( 478.63080000, 825.87650000, 1.73500000);
            case 5: return vector( 479.15260000, 1085.91700000, 1.71450000);
            case 6: return vector( 605.38620000, 1059.57500000, 1.86610000);
            case 7: return vector( 652.16320000, 996.68460000, 1.92710000);
            case 8: return vector( 667.88930000, 883.31270000, 1.74890000);
            case 9: return vector( 641.09500000, 675.89100000, 2.00830000);
            case 10: return vector( 555.20860000, 840.26280000, 1.73950000);
            case 11: return vector( 533.64810000, 977.89650000, 1.71740000);
            case 12: return vector( 466.51330000, 1010.97200000, 1.71730000);
        }
        break;
        case 11:
        if (iParam1 == -1)
        {
            iParam1 = sub_12313( 0, 13 );
        }
        switch (iParam1)
        {
            case 0: return vector( 2390.17300000, 550.49180000, 4.80800000);
            case 1: return vector( 2467.25700000, 459.13780000, 4.80800000);
            case 2: return vector( 2344.48900000, 158.52140000, 4.80800000);
            case 3: return vector( 2300.17400000, 81.51120000, 4.80800000);
            case 4: return vector( 2473.11900000, 272.02870000, 4.80790000);
            case 5: return vector( 2643.09500000, 391.23960000, 4.80940000);
            case 6: return vector( 2559.27100000, 585.34740000, 4.85380000);
            case 7: return vector( 2249.42400000, 681.00580000, 4.80790000);
            case 8: return vector( 2474.69900000, 536.96060000, 4.80800000);
            case 9: return vector( 2631.09700000, 446.89450000, 4.80800000);
            case 10: return vector( 2524.32500000, 371.22510000, 4.80890000);
            case 11: return vector( 2549.25300000, 274.37840000, 4.80790000);
            case 12: return vector( 2431.22900000, 179.16780000, 4.80770000);
        }
        break;
    }
    return vector( 0.00000000, 0.00000000, 0.00000000);
}

int sub_31163(vector vParam0, vector vParam3, float fParam6)
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

void sub_31329(unknown uParam0)
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

void sub_31682()
{
    int I;
    int iVar3;
    int J;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int[16] iVar11;
    int iVar28;
    float fVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;

    array(ref iVar11, 16);
    switch (l_U1516._fU8)
    {
        case 1:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -1283406538;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_32771( l_U1516._fU28[0] ))
            {
                uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                for ( I = 0; I < 4; I++ )
                {
                    sub_34180( I, l_U1516._fU28[0], 0, 0, sub_12313( 3, 6 ), 8, uVar30, sub_34144( 0.00000000, 360.00000000 ), 2, 0, 250 );
                }
                l_U1516._fU16 = 1;
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 2:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -341892653;
            l_U1516._fU28[1] = 207714363;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                if (sub_35754( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                {
                    sub_36293( 0, l_U1516._fU28[0], 1, uVar30, fVar29, 0, 0, 500 );
                    TURN_OFF_VEHICLE_EXTRA( sub_11665( l_U1516._fU388[0] ), 5, 0 );
                    TURN_OFF_VEHICLE_EXTRA( sub_11665( l_U1516._fU388[0] ), 6, 0 );
                    TURN_OFF_VEHICLE_EXTRA( sub_11665( l_U1516._fU388[0] ), 7, 0 );
                    sub_36833( 1, l_U1516._fU28[1], 0, 0, 4, 2, uVar30, fVar29, l_U1516._fU388[0], 0, 3, 0, 500 );
                    sub_36833( 2, l_U1516._fU28[1], 0, 0, 3, 5, uVar30, fVar29, l_U1516._fU388[0], 1, 0, 0, 500 );
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 3:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 2046537925;
            l_U1516._fU28[1] = -370395528;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                if (sub_35754( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                {
                    sub_36293( 0, l_U1516._fU28[0], 1, uVar30, fVar29, 0, 0, 500 );
                    sub_36833( 1, l_U1516._fU28[1], 5, 0, 5, 2, uVar30, fVar29, l_U1516._fU388[0], 0, 3, 0, 500 );
                    sub_36833( 2, l_U1516._fU28[1], 5, 0, 3, 5, uVar30, fVar29, l_U1516._fU388[0], 1, 3, 0, 500 );
                    l_U1516._fU16 = 1;
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 4:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU24 = sub_38063( sub_10481() + (sub_12313( -3, 4 )), 3, 12 );
            l_U1516._fU28[0] = 1316404726;
            l_U1516._fU28[1] = 1616769823;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    if (sub_38226( l_U1516._fU388[I] ))
                    {
                        iVar5++;
                    }
                    else if (sub_38366( ref l_U1516._fU516, sub_18967( -1, 0 ), 500.00000000, 100.00000000, 20.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                    {
                        sub_34180( I, l_U1516._fU28[sub_12313( 0, 2 )], 1, -1, 1, 8, uVar30, fVar29, 3, 0, 250 );
                        iVar5++;
                    }
                }
                if (iVar5 == l_U1516._fU24)
                {
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 5:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 1203311498;
            l_U1516._fU28[1] = -1420592428;
            l_U1516._fU28[2] = 1670568326;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                if (sub_35754( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                {
                    sub_36293( 0, l_U1516._fU28[0], 1, uVar30, fVar29, 0, 0, 500 );
                    sub_36833( 1, l_U1516._fU28[1], 0, 0, 5, 2, uVar30, fVar29, l_U1516._fU388[0], 0, 3, 0, 500 );
                    sub_36833( 2, l_U1516._fU28[2], 0, 0, 3, 5, uVar30, fVar29, l_U1516._fU388[0], 1, 0, 0, 500 );
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 6:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU24 = sub_38063( sub_10481() + (sub_12313( -3, 4 )), 4, 12 );
            l_U1516._fU28[0] = 1448755353;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_32771( l_U1516._fU28[0] ))
            {
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    if (sub_38226( l_U1516._fU388[I] ))
                    {
                        iVar5++;
                    }
                    else if (sub_38366( ref l_U1516._fU516, sub_18967( -1, 0 ), 500.00000000, 100.00000000, 20.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                    {
                        sub_34180( I, l_U1516._fU28[0], sub_12313( 0, 2 ), -1, sub_12313( 3, 6 ), 8, uVar30, fVar29, 3, 0, 250 );
                        iVar5++;
                    }
                }
                if (iVar5 == l_U1516._fU24)
                {
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 7:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 2046537925;
            l_U1516._fU28[1] = 1348744438;
            l_U1516._fU28[2] = -1821258883;
            l_U1516._fU28[3] = -999506922;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                sub_34180( 2, l_U1516._fU28[3], 5, -1, sub_12313( 2, 6 ), sub_12313( 0, 3 ), sub_39635( uVar30, 1.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 0, 100 );
                sub_34180( 3, l_U1516._fU28[3], 5, -1, sub_12313( 2, 6 ), sub_12313( 0, 3 ), sub_39635( uVar30, 1.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 0, 100 );
                sub_34180( 4, l_U1516._fU28[2], 5, -1, 3, 4, sub_39635( uVar30, 1.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 0, 250 );
                sub_34180( 5, l_U1516._fU28[3], 5, -1, sub_12313( 2, 6 ), sub_12313( 0, 3 ), sub_39635( uVar30, 1.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 0, 100 );
                sub_34180( 6, l_U1516._fU28[3], 5, -1, sub_12313( 2, 6 ), sub_12313( 0, 3 ), sub_39635( uVar30, 1.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 0, 100 );
                sub_34180( 7, l_U1516._fU28[3], 5, -1, sub_12313( 2, 6 ), sub_12313( 0, 3 ), sub_39635( uVar30, 1.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 0, 100 );
                uVar30._fU0 += 3.00000000;
                uVar30._fU4 += 2.00000000;
                sub_36293( 0, l_U1516._fU28[0], 1, uVar30, sub_34144( 0.00000000, 360.00000000 ), 0, 0, 500 );
                uVar30._fU0 -= 6.00000000;
                uVar30._fU4 -= 4.00000000;
                sub_36293( 1, l_U1516._fU28[1], 1, uVar30, sub_34144( 0.00000000, 360.00000000 ), 0, 0, 500 );
                l_U1516._fU16 = 1;
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 8: if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 2046537925;
            l_U1516._fU28[1] = -999506922;
            l_U1516._fU28[2] = -183203150;
            l_U1516._fU24 = sub_38063( (sub_10481() / 2) + (sub_12313( -3, 1 )), 1, 3 );
            l_U1516._fU12 = 1;
        }
        case 9:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 2046537925;
            l_U1516._fU28[1] = -370395528;
            l_U1516._fU28[2] = -183203150;
            l_U1516._fU24 = sub_38063( (sub_10481() / 2) + (sub_12313( -3, 1 )), 2, 3 );
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                    J = I * 4;
                    uVar30._fU0 -= 1.00000000;
                    sub_36293( J, l_U1516._fU28[0], 1, uVar30, sub_34144( 0.00000000, 360.00000000 ), 0, 0, 500 );
                    uVar30._fU0 += 4.00000000;
                    sub_34180( 1 + J, l_U1516._fU28[1], 6, -1, sub_12313( 2, 6 ), 0, sub_39635( uVar30, 2.00000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 0, 500 );
                    if (sub_40615())
                    {
                        sub_34180( 2 + J, l_U1516._fU28[2], 6, -1, sub_12313( 2, 6 ), sub_12313( 0, 3 ), sub_39635( uVar30, 2.00000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 0, 250 );
                    }
                    if (((3 + J) < 12) AND (sub_40615()))
                    {
                        uVar30._fU0 -= 6.00000000;
                        sub_34180( 3 + J, l_U1516._fU28[2], 5, -1, sub_12313( 2, 6 ), sub_12313( 0, 3 ), sub_39635( uVar30, 2.00000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 0, 250 );
                    }
                }
                l_U1516._fU16 = 1;
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 10: if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -1926041127;
            l_U1516._fU28[1] = -1746774780;
            l_U1516._fU12 = 1;
        }
        case 11:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -1953289472;
            l_U1516._fU28[1] = -1677255197;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                sub_34180( 0, l_U1516._fU28[0], 0, -1, sub_12313( 2, 6 ), sub_41075( 2, sub_12313( 0, 4 ), sub_12313( 7, 10 ), 0, 0, 0, 0, 0, 0 ), sub_39635( uVar30, 4.00000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 0, 250 );
                sub_34180( 1, l_U1516._fU28[1], 0, -1, sub_12313( 2, 6 ), sub_41075( 2, sub_12313( 0, 4 ), sub_12313( 7, 10 ), 0, 0, 0, 0, 0, 0 ), sub_39635( uVar30, 4.00000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 0, 250 );
                sub_34180( 2, l_U1516._fU28[1], 0, -1, sub_12313( 2, 6 ), sub_41075( 2, sub_12313( 0, 4 ), sub_12313( 7, 10 ), 0, 0, 0, 0, 0, 0 ), sub_39635( uVar30, 4.00000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 0, 250 );
                sub_34180( 3, l_U1516._fU28[1], 0, -1, sub_12313( 2, 6 ), sub_41075( 2, sub_12313( 0, 4 ), sub_12313( 7, 10 ), 0, 0, 0, 0, 0, 0 ), sub_39635( uVar30, 4.00000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 0, 250 );
                sub_34180( 4, l_U1516._fU28[0], 0, -1, sub_12313( 2, 6 ), sub_41075( 2, sub_12313( 0, 4 ), sub_12313( 7, 10 ), 0, 0, 0, 0, 0, 0 ), sub_39635( uVar30, 4.00000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 0, 250 );
                sub_34180( 5, l_U1516._fU28[0], 0, -1, sub_12313( 2, 6 ), sub_41075( 2, sub_12313( 0, 4 ), sub_12313( 7, 10 ), 0, 0, 0, 0, 0, 0 ), sub_39635( uVar30, 4.00000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 0, 250 );
                l_U1516._fU16 = 1;
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 51:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -1900572838;
            l_U1516._fU28[1] = -1676937780;
            l_U1516._fU28[2] = -183203150;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                if (sub_35754( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                {
                    sub_36293( 0, l_U1516._fU28[0], 1, uVar30, fVar29, 0, 0, 500 );
                    sub_36833( 1, l_U1516._fU28[2], 6, 0, 5, 2, uVar30, fVar29, l_U1516._fU388[0], 0, 0, 0, 500 );
                    sub_36833( 2, l_U1516._fU28[2], 6, 0, 3, 6, uVar30, fVar29, l_U1516._fU388[0], 1, 0, 0, 500 );
                    sub_36833( 3, l_U1516._fU28[1], 6, 0, 0, 4, uVar30, fVar29, l_U1516._fU388[0], 2, 3, 0, 500 );
                    sub_36833( 4, l_U1516._fU28[2], 6, 0, 3, 6, uVar30, fVar29, l_U1516._fU388[0], 3, 0, 0, 500 );
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 52: if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 525509695;
            l_U1516._fU28[1] = 1878085135;
            l_U1516._fU12 = 1;
        }
        case 53:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 1923400478;
            l_U1516._fU28[1] = -1149743642;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                if (sub_35754( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                {
                    sub_36293( 0, l_U1516._fU28[0], 1, uVar30, fVar29, 0, 0, 500 );
                    sub_36833( 1, l_U1516._fU28[1], 1, 0, sub_12313( 1, 5 ), 2, uVar30, fVar29, l_U1516._fU388[0], 0, 3, 0, 500 );
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 36: if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -1134712978;
            l_U1516._fU12 = 1;
        }
        case 54: if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 1207402441;
            l_U1516._fU12 = 1;
        }
        case 55: if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 807236245;
            l_U1516._fU12 = 1;
        }
        case 56: if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -1852976689;
            l_U1516._fU12 = 1;
        }
        case 57:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -714220780;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_32771( l_U1516._fU28[0] ))
            {
                if (sub_38366( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, 20.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                {
                    sub_34180( I, l_U1516._fU28[0], sub_12313( 0, 2 ), -1, sub_12313( 1, 4 ), sub_12313( 7, 9 ), uVar30, fVar29, 3, 0, 500 );
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 58:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 584879743;
            l_U1516._fU28[1] = -570033273;
            l_U1516._fU28[2] = 1574850459;
            l_U1516._fU28[3] = -1953289472;
            l_U1516._fU24 = sub_38063( sub_10481() + (sub_12313( -12, 0 )), 2, 6 );
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                iVar5 = 0;
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    if (sub_38226( l_U1516._fU388[I] ))
                    {
                        iVar5++;
                    }
                    else if (sub_35754( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                    {
                        sub_36293( I, l_U1516._fU28[sub_12313( 0, 2 )], 1, uVar30, fVar29, 0, 0, 500 );
                        sub_36833( I + l_U1516._fU24, l_U1516._fU28[sub_12313( 2, 4 )], sub_12313( 0, 2 ), 0, sub_12313( 2, 6 ), sub_41075( 3, 1, 7, 9, 0, 0, 0, 0, 0 ), uVar30, fVar29, l_U1516._fU388[I], 0, 3, 0, 500 );
                        iVar5++;
                    }
                }
                if (iVar5 == l_U1516._fU24)
                {
                    l_U1516._fU492 = {sub_32831( 100.00000000, 200.00000000 )};
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 108: if (l_U1516._fU12 == 0)
        {
            l_U1516._fU24 = sub_38063( sub_10481() + (sub_12313( 0, 2 )), 2, 12 );
            l_U1516._fU28[0] = -1084007777;
            l_U1516._fU28[1] = 871281791;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        case 59:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU24 = sub_38063( sub_10481() + (sub_12313( 0, 2 )), 2, 12 );
            l_U1516._fU28[0] = -432593815;
            l_U1516._fU28[1] = -432593815;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    if (sub_38226( l_U1516._fU388[I] ))
                    {
                        iVar5++;
                    }
                    else if (sub_38366( ref l_U1516._fU516, sub_18967( -1, 0 ), 500.00000000, 100.00000000, 20.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                    {
                        sub_34180( I, l_U1516._fU28[sub_12313( 0, 2 )], 0, -1, sub_12313( 2, 6 ), sub_12313( 7, 10 ), uVar30, fVar29, 3, 0, 250 );
                        iVar5++;
                    }
                }
                if (iVar5 == l_U1516._fU24)
                {
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 60:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU24 = sub_38063( sub_10481() + (sub_12313( -5, 4 )), 3, 12 );
            l_U1516._fU28[0] = -722019798;
            l_U1516._fU28[1] = -1015957728;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    if (sub_38226( l_U1516._fU388[I] ))
                    {
                        iVar5++;
                    }
                    else if (sub_38366( ref l_U1516._fU516, sub_18967( -1, 0 ), 500.00000000, 100.00000000, 20.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                    {
                        sub_34180( I, l_U1516._fU28[sub_12313( 0, 2 )], 1, -1, sub_12313( 0, 6 ), sub_12313( 7, 10 ), uVar30, fVar29, 3, 0, 250 );
                        iVar5++;
                    }
                }
                if (iVar5 == l_U1516._fU24)
                {
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 61: if (l_U1516._fU12 == 0)
        {
            l_U1516._fU24 = sub_38063( sub_10481() + (sub_12313( -5, 4 )), 3, 12 );
            l_U1516._fU28[0] = -503930010;
            l_U1516._fU28[1] = -235584669;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        case 62:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU24 = sub_38063( sub_10481() + (sub_12313( -5, 4 )), 3, 12 );
            l_U1516._fU28[0] = 280474699;
            l_U1516._fU28[1] = 1844702918;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    if (sub_38226( l_U1516._fU388[I] ))
                    {
                        iVar5++;
                    }
                    else if (sub_38366( ref l_U1516._fU516, sub_18967( -1, 0 ), 500.00000000, 100.00000000, 20.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                    {
                        sub_34180( I, l_U1516._fU28[sub_12313( 0, 2 )], sub_12313( 0, 2 ), -1, sub_12313( 1, 6 ), sub_12313( 7, 10 ), uVar30, fVar29, 3, 0, 250 );
                        iVar5++;
                    }
                }
                if (iVar5 == l_U1516._fU24)
                {
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 63: if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -164935626;
            l_U1516._fU28[1] = 683712035;
            l_U1516._fU24 = sub_38063( sub_10481() + (sub_12313( -5, 5 )), 3, 12 );
            l_U1516._fU12 = 1;
        }
        case 64: if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 807236245;
            l_U1516._fU28[1] = 1374242512;
            l_U1516._fU24 = sub_38063( sub_10481() + (sub_12313( -12, -3 )), 3, 12 );
            l_U1516._fU12 = 1;
        }
        case 65:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -1143910864;
            l_U1516._fU28[1] = 632613980;
            l_U1516._fU24 = sub_38063( sub_10481() + (sub_12313( -6, 6 )), 3, 12 );
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    sub_34180( I, l_U1516._fU28[sub_12313( 0, 2 )], 0, -1, sub_12313( 2, 6 ), sub_41075( 2, sub_12313( 0, 4 ), sub_12313( 7, 10 ), 0, 0, 0, 0, 0, 0 ), sub_39635( uVar30, 4.00000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 0, 250 );
                }
                l_U1516._fU16 = 1;
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 66:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -810318068;
            l_U1516._fU28[1] = -1402442039;
            l_U1516._fU28[2] = -1252681043;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                if (sub_35754( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                {
                    sub_36293( 0, l_U1516._fU28[0], 1, uVar30, fVar29, 0, 0, 500 );
                    sub_36833( 1, l_U1516._fU28[1], 1, 0, 5, 1, uVar30, fVar29, l_U1516._fU388[0], 0, 3, 0, 250 );
                    sub_36833( 2, l_U1516._fU28[2], 1, 0, 3, sub_41075( 2, 5, 6, 0, 0, 0, 0, 0, 0 ), uVar30, fVar29, l_U1516._fU388[0], 1, 3, 0, 250 );
                    sub_36833( 3, l_U1516._fU28[2], 1, 0, 3, sub_41075( 2, 5, 6, 0, 0, 0, 0, 0, 0 ), uVar30, fVar29, l_U1516._fU388[0], 2, 3, 0, 250 );
                    sub_36833( 4, l_U1516._fU28[1], 1, 0, 3, sub_41075( 2, 5, 6, 0, 0, 0, 0, 0, 0 ), uVar30, fVar29, l_U1516._fU388[0], 3, 3, 0, 250 );
                    l_U1516._fU16 = 1;
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 67:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 1830407356;
            l_U1516._fU28[1] = 1609755055;
            l_U1516._fU28[2] = 552542187;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                if (sub_35754( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                {
                    sub_36293( 0, l_U1516._fU28[0], 1, uVar30, fVar29, 0, 0, 500 );
                    sub_36833( 1, l_U1516._fU28[1], 1, 0, 5, 1, uVar30, fVar29, l_U1516._fU388[0], 0, 0, 0, 500 );
                    sub_36833( 2, l_U1516._fU28[2], 1, 0, 3, 6, uVar30, fVar29, l_U1516._fU388[0], 1, 3, 0, 500 );
                    l_U1516._fU16 = 1;
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 68: if (l_U1516._fU12 == 0)
        {
            l_U1516._fU24 = sub_38063( sub_10481() + (sub_12313( -6, 4 )), 3, 12 );
            l_U1516._fU28[0] = 1316404726;
            l_U1516._fU28[1] = 1616769823;
            l_U1516._fU28[2] = 697247370;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        case 69:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU24 = sub_38063( sub_10481() + (sub_12313( -6, 2 )), 3, 12 );
            l_U1516._fU28[0] = -1754526315;
            l_U1516._fU28[1] = 1530937394;
            l_U1516._fU28[2] = 690281432;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    if (sub_38226( l_U1516._fU388[I] ))
                    {
                        iVar5++;
                    }
                    else if (sub_38366( ref l_U1516._fU516, sub_18967( -1, 0 ), 500.00000000, 100.00000000, 20.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                    {
                        sub_34180( I, l_U1516._fU28[sub_12313( 0, 3 )], 1, -1, 1, 8, uVar30, fVar29, 3, 0, 250 );
                        iVar5++;
                    }
                }
                if (iVar5 == l_U1516._fU24)
                {
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 12:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU24 = sub_38063( (sub_10481() / 2) + (sub_12313( -6, 1 )), 2, 4 );
            l_U1516._fU28[0] = 1976502708;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_32771( l_U1516._fU28[0] ))
            {
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    if (sub_38226( l_U1516._fU388[I] ))
                    {
                        iVar5++;
                    }
                    else if (sub_38366( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, 20.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                    {
                        sub_34180( I, l_U1516._fU28[0], 4, -1, 3, 9, uVar30, fVar29, 1, 0, 500 );
                        iVar5++;
                    }
                }
                if (iVar5 == l_U1516._fU24)
                {
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 13: if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 824245375;
            l_U1516._fU12 = 1;
        }
        case 70: if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -1055386282;
            l_U1516._fU12 = 1;
        }
        case 71:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 286007875;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_32771( l_U1516._fU28[0] ))
            {
                if (sub_38366( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, 20.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                {
                    sub_34180( 0, l_U1516._fU28[0], 4, -1, 3, 6, uVar30, fVar29, 1, 0, 500 );
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 72:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 1168388225;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_32771( l_U1516._fU28[0] ))
            {
                uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                sub_34180( 0, l_U1516._fU28[0], 4, -1, 3, 6, uVar30, sub_34144( 0.00000000, 360.00000000 ), 1, 0, 500 );
                sub_34180( 1, l_U1516._fU28[0], 4, -1, 3, 6, uVar30, sub_34144( 0.00000000, 360.00000000 ), 1, 0, 500 );
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 73: if (l_U1516._fU12 == 0)
        {
            l_U1516._fU24 = sub_38063( sub_12313( 2, 5 ), 2, 4 );
            l_U1516._fU28[0] = -1775659292;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        case 74:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU24 = sub_38063( sub_12313( 2, 5 ), 2, 4 );
            l_U1516._fU28[0] = -1500397869;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_32771( l_U1516._fU28[0] ))
            {
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    if (sub_38226( l_U1516._fU388[I] ))
                    {
                        iVar5++;
                    }
                    else if (sub_38366( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, 20.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                    {
                        sub_34180( I, l_U1516._fU28[0], 4, -1, 3, 9, uVar30, fVar29, 1, 0, 500 );
                        iVar5++;
                    }
                }
                if (iVar5 == l_U1516._fU24)
                {
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 14:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -999506922;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_32771( l_U1516._fU28[0] ))
            {
                if (sub_38366( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, 20.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                {
                    sub_34180( I, l_U1516._fU28[0], 4, -1, sub_12313( 3, 6 ), 9, uVar30, fVar29, 1, 1, 500 );
                    l_U1516._fU492 = {sub_32831( 100.00000000, 200.00000000 )};
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 15:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU24 = sub_38063( (sub_10481() / 2) + (sub_12313( -4, 1 )), 2, 6 );
            l_U1516._fU28[0] = -2088164056;
            l_U1516._fU28[1] = 431692232;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    if (sub_38226( l_U1516._fU388[I] ))
                    {
                        iVar5++;
                    }
                    else if (sub_38366( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 150.00000000, 20.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                    {
                        sub_34180( I, l_U1516._fU28[sub_12313( 0, 2 )], 2, -1, 1, 9, uVar30, fVar29, 1, 1, 500 );
                        iVar5++;
                    }
                }
                if (iVar5 == l_U1516._fU24)
                {
                    l_U1516._fU492 = {sub_32831( 100.00000000, 200.00000000 )};
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 16:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU24 = sub_38063( (sub_10481() / 2) + (sub_12313( -4, 1 )), 3, 6 );
            l_U1516._fU28[0] = 761763258;
            l_U1516._fU28[1] = -1788328884;
            l_U1516._fU28[2] = 1473654742;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    sub_34180( I, l_U1516._fU28[sub_12313( 0, 3 )], 4, -1, 0, 6, sub_39635( uVar30, 2.00000000 ), sub_34144( 0.00000000, 360.00000000 ), 1, 1, 250 );
                }
                l_U1516._fU492 = {sub_32831( 100.00000000, 200.00000000 )};
                l_U1516._fU16 = 1;
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 17:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU24 = sub_38063( (sub_10481() / 2) + (sub_12313( -4, 1 )), 2, 6 );
            l_U1516._fU28[0] = 996267216;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_32771( l_U1516._fU28[0] ))
            {
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    if (sub_38226( l_U1516._fU388[I] ))
                    {
                        iVar5++;
                    }
                    else if (sub_38366( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 150.00000000, 20.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                    {
                        sub_34180( I, l_U1516._fU28[0], 4, -1, 1, 9, uVar30, fVar29, 1, 1, 500 );
                        iVar5++;
                    }
                }
                if (iVar5 == l_U1516._fU24)
                {
                    l_U1516._fU492 = {sub_32831( 100.00000000, 200.00000000 )};
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 18:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU24 = sub_38063( (sub_10481() / 2) + (sub_12313( -4, 1 )), 2, 6 );
            l_U1516._fU28[0] = -1516474414;
            l_U1516._fU28[1] = -1821258883;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    sub_34180( I, l_U1516._fU28[sub_33860( I, 1, 2 )], 2, 0, sub_12313( 2, 6 ), 9, sub_39635( uVar30, 3.00000000 ), sub_34144( 0.00000000, 360.00000000 ), 1, 1, 250 );
                }
                l_U1516._fU492 = {sub_32831( 100.00000000, 200.00000000 )};
                l_U1516._fU16 = 1;
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 19:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 1952671026;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_32771( l_U1516._fU28[0] ))
            {
                uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                sub_34180( 0, l_U1516._fU28[0], 2, -1, 0, 6, uVar30, sub_34144( 0.00000000, 360.00000000 ), 1, 2, 500 );
                SET_CHAR_DROWNS_IN_WATER( sub_11590( l_U1516._fU388[0] ), 1 );
                SET_CHAR_DIES_INSTANTLY_IN_WATER( sub_11590( l_U1516._fU388[0] ), 1 );
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 75: if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 1487004273;
            l_U1516._fU28[1] = 2104499156;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        case 76:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 2129490787;
            l_U1516._fU28[1] = 1354281938;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                if (sub_38366( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, 20.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                {
                    sub_34180( 0, l_U1516._fU28[1], 4, -1, sub_12313( 3, 6 ), 6, sub_32831( 100.00000000, 200.00000000 ), sub_34144( 0.00000000, 360.00000000 ), 0, 3, 500 );
                    sub_34180( 1, l_U1516._fU28[0], 4, -1, sub_12313( 3, 6 ), 9, uVar30, fVar29, 1, 3, 500 );
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 77:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 1969438324;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_32771( l_U1516._fU28[0] ))
            {
                if (sub_38366( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, 20.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                {
                    sub_34180( 0, l_U1516._fU28[0], 4, -1, 0, 9, uVar30, fVar29, 1, 1, 500 );
                    l_U1516._fU492 = {sub_32831( 100.00000000, 200.00000000 )};
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 78: if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -952185135;
            l_U1516._fU12 = 1;
        }
        case 79: if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -1780385799;
            l_U1516._fU12 = 1;
        }
        case 80:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -1761003415;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_32771( l_U1516._fU28[0] ))
            {
                if (sub_38366( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, 20.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                {
                    sub_34180( 0, l_U1516._fU28[0], 4, -1, 1, 9, uVar30, fVar29, 1, 1, 500 );
                    l_U1516._fU492 = {sub_32831( 100.00000000, 200.00000000 )};
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 81:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU24 = sub_38063( (sub_10481() / 2) + (sub_12313( -4, 1 )), 2, 6 );
            l_U1516._fU28[0] = 1543404628;
            l_U1516._fU28[1] = -1180674815;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    if (sub_38226( l_U1516._fU388[I] ))
                    {
                        iVar5++;
                    }
                    else if (sub_38366( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 150.00000000, 20.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                    {
                        sub_34180( I, l_U1516._fU28[sub_12313( 0, 2 )], 2, -1, 1, 9, uVar30, fVar29, 1, 1, 500 );
                        iVar5++;
                    }
                }
                if (iVar5 == l_U1516._fU24)
                {
                    l_U1516._fU492 = {sub_32831( 100.00000000, 200.00000000 )};
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 82:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 1113677074;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_32771( l_U1516._fU28[0] ))
            {
                uVar30 = {sub_32831( 100.00000000, 200.00000000 )};
                sub_34180( 0, l_U1516._fU28[0], 4, -1, 0, 6, uVar30, sub_34144( 0.00000000, 360.00000000 ), 1, 1, 500 );
                l_U1516._fU492 = {sub_32831( 100.00000000, 200.00000000 )};
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 83:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -114937692;
            l_U1516._fU28[1] = -203833294;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                uVar30 = {sub_32831( 100.00000000, 200.00000000 )};
                sub_34180( 0, l_U1516._fU28[0], 4, -1, 0, 6, sub_39635( uVar30, 2.00000000 ), sub_34144( 0.00000000, 360.00000000 ), 1, 1, 250 );
                sub_34180( 1, l_U1516._fU28[1], 4, -1, 0, 6, sub_39635( uVar30, 2.00000000 ), sub_34144( 0.00000000, 360.00000000 ), 1, 1, 250 );
                l_U1516._fU492 = {sub_32831( 100.00000000, 200.00000000 )};
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 84:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -1186940778;
            l_U1516._fU28[1] = 1755322862;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                if (sub_38366( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, 20.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                {
                    sub_34180( 0, l_U1516._fU28[0], 4, -1, sub_12313( 3, 6 ), 9, uVar30, fVar29, 1, 3, 500 );
                    uVar30 = {sub_32831( 100.00000000, 200.00000000 )};
                    l_U1516._fU492 = {uVar30};
                    uVar30._fU0 += 3.50000000;
                    sub_34180( 1, l_U1516._fU28[1], 4, -1, sub_12313( 3, 6 ), 6, uVar30, sub_34144( 0.00000000, 360.00000000 ), 0, 3, 500 );
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 85:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 1500619449;
            l_U1516._fU28[1] = -1984134881;
            l_U1516._fU28[2] = 386690478;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                uVar30 = {sub_32831( 100.00000000, 200.00000000 )};
                sub_34180( 0, l_U1516._fU28[2], 4, -1, 0, 6, sub_39635( uVar30, 2.00000000 ), sub_34144( 0.00000000, 360.00000000 ), 1, 1, 250 );
                sub_34180( 1, l_U1516._fU28[1], 4, -1, 1, 6, sub_39635( uVar30, 2.00000000 ), sub_34144( 0.00000000, 360.00000000 ), 1, 1, 250 );
                uVar30 = {sub_32831( 100.00000000, 200.00000000 )};
                l_U1516._fU492 = {uVar30};
                uVar30._fU0 += 3.50000000;
                sub_34180( 2, l_U1516._fU28[0], 4, -1, 0, 6, uVar30, sub_34144( 0.00000000, 360.00000000 ), 0, 0, 500 );
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 86:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 62496225;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_32771( l_U1516._fU28[0] ))
            {
                if (sub_38366( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, 20.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                {
                    l_U1516._fU492 = {sub_50769( uVar30 )};
                    sub_51246( 1, -1048392407, 0, l_U1516._fU492, 0.00000000, 0, 0, 500 );
                    SET_OBJECT_VISIBLE( sub_9848( l_U1516._fU388[1] ), 0 );
                    SET_OBJECT_COLLISION( sub_9848( l_U1516._fU388[1] ), 0 );
                    sub_34180( 0, l_U1516._fU28[0], 4, -1, sub_12313( 3, 6 ), 9, uVar30, fVar29, 1, 1, 500 );
                    l_U1516._fU492 = {sub_50769( uVar30 )};
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 20:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 904750859;
            l_U1516._fU24 = sub_38063( (sub_10481() / 2) + (sub_12313( -5, 1 )), 2, 6 );
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        sub_51788( ref l_U1516._fU28, 0, l_U1516._fU24, 3, 0 );
        break;
        case 21:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -1961627517;
            l_U1516._fU12 = 1;
        }
        sub_51788( ref l_U1516._fU28, 0, 1, 3, 0 );
        break;
        case 22:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -685276541;
            l_U1516._fU28[1] = -341892653;
            l_U1516._fU24 = sub_38063( (sub_10481() / 2) + (sub_12313( -5, 2 )), 2, 5 );
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                    sub_36293( I, l_U1516._fU28[sub_33860( I, 1, 2 )], 1, uVar30, sub_34144( 0.00000000, 360.00000000 ), 1, 2, 500 );
                    STOP_CAR_BREAKING( sub_11665( l_U1516._fU388[I] ), 1 );
                }
                l_U1516._fU16 = 1;
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 23:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 1264341792;
            l_U1516._fU28[1] = -370395528;
            l_U1516._fU28[2] = -183203150;
            l_U1516._fU24 = sub_38063( sub_12313( 2, 5 ), 2, 4 );
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                    J = I * 3;
                    uVar30._fU4 -= 1.00000000;
                    sub_36293( J, l_U1516._fU28[0], 1, uVar30, sub_34144( 0.00000000, 360.00000000 ), 3, 0, 500 );
                    uVar30._fU4 += 4.00000000;
                    sub_34180( 1 + J, l_U1516._fU28[1], 6, -1, sub_12313( 2, 6 ), sub_12313( 0, 3 ), sub_39635( uVar30, 2.00000000 ), sub_34144( 0.00000000, 360.00000000 ), 0, 0, 500 );
                    if (sub_40615())
                    {
                        sub_34180( 2 + J, l_U1516._fU28[2], 6, -1, sub_12313( 2, 6 ), sub_12313( 0, 3 ), sub_39635( uVar30, 2.00000000 ), sub_34144( 0.00000000, 360.00000000 ), 0, 0, 500 );
                    }
                }
                l_U1516._fU16 = 1;
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 87:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -295689028;
            l_U1516._fU24 = sub_38063( (sub_10481() / 3) + (sub_12313( -3, 0 )), 2, 6 );
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        sub_51788( ref l_U1516._fU28, 0, l_U1516._fU24, 3, 0 );
        break;
        case 88:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 2006667053;
            l_U1516._fU24 = sub_38063( (sub_10481() / 3) + (sub_12313( -4, 0 )), 2, 5 );
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        sub_51788( ref l_U1516._fU28, 0, l_U1516._fU24, 3, 0 );
        break;
        case 89:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 1917016601;
            l_U1516._fU24 = sub_38063( (sub_10481() / 4) + (sub_12313( -4, 0 )), 2, 4 );
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        sub_51788( ref l_U1516._fU28, 0, l_U1516._fU24, 3, 0 );
        break;
        case 90:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 1171614426;
            l_U1516._fU28[1] = -1175077216;
            l_U1516._fU28[2] = -1874580889;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                if (sub_35754( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                {
                    sub_36293( 0, l_U1516._fU28[0], 1, uVar30, fVar29, 3, 0, 250 );
                    sub_36833( 1, l_U1516._fU28[1], 1, 0, 5, 2, uVar30, fVar29, l_U1516._fU388[0], 0, 3, 0, 250 );
                    sub_36833( 2, l_U1516._fU28[1], 1, 0, 3, 5, uVar30, fVar29, l_U1516._fU388[0], 1, 3, 0, 250 );
                    sub_36833( 3, l_U1516._fU28[1], 1, 0, 3, 6, uVar30, fVar29, l_U1516._fU388[0], 2, 3, 0, 250 );
                    sub_36833( 4, l_U1516._fU28[2], 1, 0, 5, 6, uVar30, fVar29, l_U1516._fU388[0], 3, 3, 0, 250 );
                    l_U1516._fU16 = 1;
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 91:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -1830458836;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                sub_36293( 0, l_U1516._fU28[0], 1, uVar30, sub_34144( 0.00000000, 360.00000000 ), 3, 0, 500 );
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 92:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 788045382;
            l_U1516._fU12 = 1;
        }
        sub_51788( ref l_U1516._fU28, 0, 1, 3, 0 );
        break;
        case 24: if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -1041692462;
            l_U1516._fU28[1] = -1896659641;
            l_U1516._fU24 = sub_38063( (sub_10481() / 2) + (sub_12313( -5, 2 )), 2, 5 );
            l_U1516._fU12 = 1;
        }
        case 25:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -808457413;
            l_U1516._fU28[1] = 1376298265;
            l_U1516._fU24 = sub_38063( (sub_10481() / 2) + (sub_12313( -5, 2 )), 2, 5 );
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                    sub_36293( I, l_U1516._fU28[sub_33860( I, 1, 2 )], 1, uVar30, sub_34144( 0.00000000, 360.00000000 ), 1, 0, 500 );
                }
                l_U1516._fU16 = 1;
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 93: if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -295689028;
            l_U1516._fU12 = 1;
        }
        case 94: if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 1063483177;
            l_U1516._fU12 = 1;
        }
        case 95:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 1203311498;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_32771( l_U1516._fU28[0] ))
            {
                uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                sub_36293( 0, l_U1516._fU28[0], 1, uVar30, sub_34144( 0.00000000, 360.00000000 ), 1, 0, 500 );
                l_U1516._fU16 = 1;
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 96:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 418536135;
            l_U1516._fU12 = 1;
        }
        sub_51788( ref l_U1516._fU28, 0, 1, 1, 0 );
        break;
        case 97:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -570033273;
            l_U1516._fU28[1] = 168065679;
            l_U1516._fU28[2] = 1542927558;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                if (sub_35754( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                {
                    sub_36293( 0, l_U1516._fU28[0], 1, uVar30, fVar29, 1, 0, 500 );
                    sub_36833( 1, l_U1516._fU28[1], 1, 0, 5, 1, uVar30, fVar29, l_U1516._fU388[0], 0, 0, 0, 500 );
                    sub_36833( 2, l_U1516._fU28[2], 1, 0, 3, 5, uVar30, fVar29, l_U1516._fU388[0], 1, 0, 0, 500 );
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 26:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -1041692462;
            l_U1516._fU24 = sub_38063( sub_10481() / 2, 2, 4 );
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        sub_51788( ref l_U1516._fU28, 0, l_U1516._fU24, 1, 1 );
        break;
        case 27:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -1346687836;
            l_U1516._fU24 = 2;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_32771( l_U1516._fU28[0] ))
            {
                iVar5 = 0;
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    if (sub_38226( l_U1516._fU388[I] ))
                    {
                        iVar5++;
                    }
                    else if (I == 0)
                    {
                        uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                        sub_36293( 0, l_U1516._fU28[0], 1, uVar30, sub_34144( 0.00000000, 360.00000000 ), 1, 1, 500 );
                        iVar5++;
                    }
                    else if (sub_35754( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                    {
                        sub_36293( I, l_U1516._fU28[0], 0, uVar30, fVar29, 1, 1, 500 );
                        iVar5++;
                    };;;
                }
                if (iVar5 == l_U1516._fU24)
                {
                    l_U1516._fU492 = {sub_32831( 100.00000000, 200.00000000 )};
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 28:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 884422927;
            l_U1516._fU28[1] = 1534326199;
            l_U1516._fU28[2] = -183203150;
            l_U1516._fU24 = sub_38063( sub_10481() / 3, 2, 3 );
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    uVar30 = {sub_32831( 100.00000000, 200.00000000 )};
                    J = I * 4;
                    uVar30._fU0 -= 1.00000000;
                    uVar30._fU4 -= 1.00000000;
                    sub_36293( J, l_U1516._fU28[sub_33860( I, 1, 2 )], 1, uVar30, sub_34144( 0.00000000, 360.00000000 ), 1, 1, 500 );
                    uVar30._fU0 += 4.00000000;
                    uVar30._fU4 += 4.00000000;
                    sub_34180( 1 + J, l_U1516._fU28[2], 5, -1, sub_12313( 2, 6 ), 0, sub_39635( uVar30, 2.00000000 ), sub_34144( 0.00000000, 360.00000000 ), 0, 5, 500 );
                    if (sub_40615())
                    {
                        sub_34180( 2 + J, l_U1516._fU28[2], 6, -1, sub_12313( 2, 6 ), sub_12313( 0, 3 ), sub_39635( uVar30, 2.00000000 ), sub_34144( 0.00000000, 360.00000000 ), 0, 5, 500 );
                    }
                    if (sub_40615())
                    {
                        uVar30._fU0 -= 6.00000000;
                        sub_34180( 3 + J, l_U1516._fU28[2], 6, -1, sub_12313( 2, 6 ), sub_12313( 0, 3 ), sub_39635( uVar30, 2.00000000 ), sub_34144( 0.00000000, 360.00000000 ), 0, 5, 500 );
                    }
                }
                l_U1516._fU492 = {sub_32831( 100.00000000, 200.00000000 )};
                l_U1516._fU16 = 1;
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 29:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 904750859;
            l_U1516._fU28[1] = -1870989171;
            l_U1516._fU24 = 2;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                iVar5 = 0;
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    if (sub_38226( l_U1516._fU388[I] ))
                    {
                        iVar5++;
                    }
                    else if (sub_35754( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                    {
                        sub_36293( I, l_U1516._fU28[0], 1, uVar30, fVar29, 1, 1, 500 );
                        sub_36833( I + l_U1516._fU24, l_U1516._fU28[1], 6, 0, 3, 2, uVar30, fVar29, l_U1516._fU388[I], 0, 0, 0, 500 );
                        sub_36833( (I + l_U1516._fU24) + l_U1516._fU24, l_U1516._fU28[1], 6, 0, 3, 6, uVar30, fVar29, l_U1516._fU388[I], 1, 0, 0, 500 );
                        iVar5++;
                    }
                }
                if (iVar5 == l_U1516._fU24)
                {
                    l_U1516._fU492 = {sub_32831( 100.00000000, 200.00000000 )};
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 30:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 1747439474;
            l_U1516._fU28[1] = 1075583233;
            l_U1516._fU24 = 2;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                iVar5 = 0;
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    if (sub_38226( l_U1516._fU388[I] ))
                    {
                        iVar5++;
                    }
                    else if (sub_35754( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                    {
                        sub_36293( I, l_U1516._fU28[0], 1, uVar30, fVar29, 1, 1, 500 );
                        sub_36833( I + l_U1516._fU24, l_U1516._fU28[1], 6, 0, 3, 2, uVar30, fVar29, l_U1516._fU388[I], 0, 0, 0, 500 );
                        sub_36833( (I + l_U1516._fU24) + l_U1516._fU24, l_U1516._fU28[1], 6, 0, 3, 6, uVar30, fVar29, l_U1516._fU388[I], 1, 0, 0, 500 );
                        sub_36833( ((I + l_U1516._fU24) + l_U1516._fU24) + l_U1516._fU24, l_U1516._fU28[1], 6, 0, 3, 6, uVar30, fVar29, l_U1516._fU388[I], 2, 0, 0, 500 );
                        sub_36833( (((I + l_U1516._fU24) + l_U1516._fU24) + l_U1516._fU24) + l_U1516._fU24, l_U1516._fU28[1], 6, 0, 3, 6, uVar30, fVar29, l_U1516._fU388[I], 3, 0, 0, 500 );
                        iVar5++;
                    }
                }
                if (iVar5 == l_U1516._fU24)
                {
                    l_U1516._fU492 = {sub_32831( 100.00000000, 200.00000000 )};
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 31:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 1677715180;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_32771( l_U1516._fU28[0] ))
            {
                uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                sub_36293( 0, l_U1516._fU28[0], 1, uVar30, sub_34144( 0.00000000, 360.00000000 ), 1, 1, 500 );
                l_U1516._fU492 = {sub_32831( 100.00000000, 200.00000000 )};
                l_U1516._fU16 = 1;
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 32:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 1821991593;
            l_U1516._fU28[1] = -1947682830;
            l_U1516._fU24 = sub_38063( (sub_10481() / 2) + (sub_12313( -2, 2 )), 2, 5 );
            l_U1516._fU16 = 0;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                if (NOT (sub_38226( l_U1516._fU388[6] )))
                {
                    uVar30 = {sub_32831( 100.00000000, 200.00000000 )};
                    uVar30._fU0 += 3.50000000;
                    sub_34180( 6, l_U1516._fU28[1], 4, -1, 0, 6, uVar30, sub_34144( 0.00000000, 360.00000000 ), 0, 3, 500 );
                }
                iVar5 = 0;
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    if (sub_38226( l_U1516._fU388[I] ))
                    {
                        iVar5++;
                    }
                    else if (sub_35754( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                    {
                        sub_36293( I, l_U1516._fU28[0], 0, uVar30, fVar29, 1, 3, 500 );
                        iVar5++;
                    }
                }
                if (iVar5 == l_U1516._fU24)
                {
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 98: if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -276900515;
            l_U1516._fU28[1] = -1827421800;
            l_U1516._fU12 = 1;
        }
        case 99:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -1842748181;
            l_U1516._fU28[1] = 54114008;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                if (sub_35754( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                {
                    sub_36293( 0, l_U1516._fU28[0], 1, uVar30, fVar29, 1, 1, 500 );
                    sub_36833( 1, l_U1516._fU28[1], 0, 0, sub_12313( 1, 5 ), sub_41075( 2, 2, 9, 0, 0, 0, 0, 0, 0 ), uVar30, fVar29, l_U1516._fU388[0], 0, 0, 0, 500 );
                    sub_36833( 1, l_U1516._fU28[1], 0, 0, sub_12313( 1, 5 ), sub_41075( 2, 5, 6, 0, 0, 0, 0, 0, 0 ), uVar30, fVar29, l_U1516._fU388[0], 1, 0, 0, 500 );
                    l_U1516._fU492 = {sub_32831( 100.00000000, 200.00000000 )};
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 100:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 162883121;
            l_U1516._fU28[1] = -999506922;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                if (sub_35754( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                {
                    sub_36293( 0, l_U1516._fU28[0], 1, uVar30, fVar29, 1, 1, 500 );
                    sub_36833( 1, l_U1516._fU28[1], 6, 0, sub_12313( 1, 5 ), sub_41075( 2, 2, 9, 0, 0, 0, 0, 0, 0 ), uVar30, fVar29, l_U1516._fU388[0], 0, 0, 0, 500 );
                    l_U1516._fU492 = {sub_32831( 100.00000000, 200.00000000 )};
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 101:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -2030171296;
            l_U1516._fU28[1] = -1326394505;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                if (sub_35754( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                {
                    sub_36293( 0, l_U1516._fU28[0], 1, uVar30, fVar29, 1, 1, 500 );
                    sub_36833( 1, l_U1516._fU28[1], 0, 0, 5, 2, uVar30, fVar29, l_U1516._fU388[0], 0, 0, 0, 500 );
                    sub_36833( 2, l_U1516._fU28[1], 0, 0, 3, 5, uVar30, fVar29, l_U1516._fU388[0], 1, 0, 0, 500 );
                    l_U1516._fU492 = {sub_32831( 100.00000000, 200.00000000 )};
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 102:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 2046537925;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_32771( l_U1516._fU28[0] ))
            {
                uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                sub_36293( 0, l_U1516._fU28[0], 1, uVar30, sub_34144( 0.00000000, 360.00000000 ), 1, 1, 500 );
                l_U1516._fU492 = {sub_32831( 100.00000000, 200.00000000 )};
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 103:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 675415136;
            l_U1516._fU28[1] = -1729980128;
            l_U1516._fU24 = sub_38063( sub_12313( 1, 8 ), 1, 5 );
            l_U1516._fU16 = 0;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                if (NOT (sub_38226( l_U1516._fU388[5] )))
                {
                    uVar30 = {sub_32831( 100.00000000, 200.00000000 )};
                    uVar30._fU0 += 3.50000000;
                    sub_34180( 0, l_U1516._fU28[1], 4, -1, 0, 6, uVar30, sub_34144( 0.00000000, 360.00000000 ), 0, 3, 500 );
                }
                iVar5 = 0;
                for ( I = 1; I <= l_U1516._fU24; I++ )
                {
                    if (sub_38226( l_U1516._fU388[I] ))
                    {
                        iVar5++;
                    }
                    else if (sub_35754( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                    {
                        sub_36293( I, l_U1516._fU28[0], 0, uVar30, fVar29, 1, 3, 500 );
                        iVar5++;
                    }
                }
                if (iVar5 == l_U1516._fU24)
                {
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 104:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -1097828879;
            l_U1516._fU28[1] = -900623157;
            l_U1516._fU24 = sub_38063( sub_12313( 1, 5 ), 2, 5 );
            l_U1516._fU16 = 0;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                iVar5 = 0;
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    if (sub_38226( l_U1516._fU388[I] ))
                    {
                        iVar5++;
                    }
                    else if (I == 0)
                    {
                        uVar30 = {sub_32831( 100.00000000, 200.00000000 )};
                        uVar30._fU0 += 3.50000000;
                        sub_34180( I, l_U1516._fU28[1], 4, -1, 0, 6, uVar30, sub_34144( 0.00000000, 360.00000000 ), 0, 3, 500 );
                    }
                    else if (sub_35754( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                    {
                        sub_36293( I, l_U1516._fU28[0], 0, uVar30, fVar29, 1, 3, 500 );
                        CHANGE_CAR_COLOUR( sub_11665( l_U1516._fU388[I] ), sub_41075( 2, 44, 101, 0, 0, 0, 0, 0, 0 ), 0 );
                        iVar5++;
                    };;;
                }
                if (iVar5 == l_U1516._fU24)
                {
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 33:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 381327348;
            l_U1516._fU28[1] = -186113957;
            l_U1516._fU24 = sub_38063( (sub_10481() / 2) + (sub_12313( -3, 3 )), 3, 6 );
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                iVar5 = 0;
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    if (sub_38226( l_U1516._fU388[I] ))
                    {
                        iVar5++;
                    }
                    else if (sub_38366( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, 20.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                    {
                        sub_51246( I, l_U1516._fU28[0], 0, uVar30, fVar29, 2, 0, 500 );
                        sub_34180( I + 6, l_U1516._fU28[1], 1, -1, sub_41075( 3, 5, 2, 1, 0, 0, 0, 0, 0 ), 6, sub_60346( sub_9848( l_U1516._fU388[I] ), 0.20000000, -0.90000000, -0.20000000 ), fVar29, 0, 5, 500 );
                        iVar5++;
                    }
                }
                if (iVar5 == l_U1516._fU24)
                {
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 34:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -1773149804;
            l_U1516._fU28[1] = -379234846;
            l_U1516._fU24 = sub_38063( (sub_10481() / 2) + (sub_12313( -3, 3 )), 3, 8 );
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                iVar5 = 0;
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    if (sub_38226( l_U1516._fU388[I] ))
                    {
                        iVar5++;
                    }
                    else if (sub_38366( ref l_U1516._fU516, sub_18967( -1, 0 ), 300.00000000, 80.00000000, 20.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                    {
                        sub_51246( I, l_U1516._fU28[0], 0, uVar30, fVar29, 2, 0, 500 );
                        iVar5++;
                    }
                }
                if (iVar5 == l_U1516._fU24)
                {
                    if (sub_38366( ref l_U1516._fU516, sub_18967( -1, 0 ), 300.00000000, 60.00000000, 20.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                    {
                        sub_34180( 11, l_U1516._fU28[1], 1, 0, sub_12313( 0, 6 ), 8, uVar30, fVar29, 3, 0, 500 );
                        l_U1516._fU12 = 2;
                    }
                }
            }
        }
        break;
        case 35:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -1381735848;
            l_U1516._fU28[1] = -183203150;
            l_U1516._fU24 = sub_38063( (sub_10481() / 4) + (sub_12313( -3, 3 )), 1, 3 );
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                    uVar30._fU8 += 0.50000000;
                    uVar30._fU0 -= 3.00000000;
                    J = I * 4;
                    sub_51246( J, l_U1516._fU28[0], 1, uVar30, sub_34144( 0.00000000, 360.00000000 ), 2, 0, 500 );
                    uVar30._fU0 += 6.00000000;
                    sub_51246( 1 + J, l_U1516._fU28[0], 1, uVar30, sub_34144( 0.00000000, 360.00000000 ), 2, 0, 500 );
                    uVar30._fU0 -= 3.00000000;
                    uVar30._fU4 += 3.00000000;
                    uVar30._fU8 -= 0.50000000;
                    sub_34180( 2 + J, l_U1516._fU28[1], 6, -1, sub_12313( 2, 6 ), 0, sub_39635( uVar30, 2.00000000 ), sub_34144( 0.00000000, 360.00000000 ), 0, 5, 500 );
                    if (sub_40615())
                    {
                        sub_34180( 3 + J, l_U1516._fU28[1], 6, -1, sub_12313( 2, 6 ), 2, sub_39635( uVar30, 2.00000000 ), sub_34144( 0.00000000, 360.00000000 ), 0, 5, 500 );
                    }
                }
                l_U1516._fU16 = 1;
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 105:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 1917016601;
            l_U1516._fU28[1] = 1136499716;
            l_U1516._fU24 = sub_38063( (sub_10481() / 3) + (sub_12313( -3, 2 )), 1, 4 );
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                iVar5 = 0;
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    J = I * 3;
                    if (sub_38226( l_U1516._fU388[J] ))
                    {
                        iVar5++;
                    }
                    else if ((sub_40615()) AND (sub_40615()))
                    {
                        uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                        fVar29 = sub_34144( 0.00000000, 360.00000000 );
                        sub_36293( J, l_U1516._fU28[0], 1, uVar30, fVar29, 0, 0, 500 );
                        uVar30._fU0 -= 3.00000000;
                        sub_34180( 1 + J, l_U1516._fU28[1], 0, 0, sub_12313( 0, 6 ), 1, uVar30, fVar29, 3, 5, 500 );
                        uVar30._fU0 += 6.00000000;
                        sub_34180( 2 + J, l_U1516._fU28[1], 0, 0, sub_12313( 0, 6 ), 2, uVar30, fVar29, 3, 5, 500 );
                        iVar5++;
                    }
                    else if (sub_35754( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                    {
                        sub_36293( J, l_U1516._fU28[0], 1, uVar30, fVar29, 0, 0, 500 );
                        sub_36833( 1 + J, l_U1516._fU28[1], 0, 0, 5, 2, uVar30, fVar29, l_U1516._fU388[J], 0, 3, 0, 500 );
                        sub_36833( 2 + J, l_U1516._fU28[1], 0, 0, 3, 5, uVar30, fVar29, l_U1516._fU388[J], 1, 3, 0, 500 );
                        iVar5++;
                    };;;
                }
                if (iVar5 == l_U1516._fU24)
                {
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 106:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -1134434891;
            l_U1516._fU24 = sub_38063( (sub_10481() / 2) + (sub_12313( -4, 4 )), 3, 8 );
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_32771( l_U1516._fU28[0] ))
            {
                iVar5 = 0;
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    if (sub_38226( l_U1516._fU388[I] ))
                    {
                        iVar5++;
                    }
                    else if (sub_38366( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, 20.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                    {
                        sub_51246( I, l_U1516._fU28[0], 0, uVar30, fVar29, 2, 0, 500 );
                        iVar5++;
                    }
                }
                if (iVar5 == l_U1516._fU24)
                {
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 107: if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -536636655;
            l_U1516._fU28[1] = -536636655;
            l_U1516._fU28[2] = -1993909080;
            l_U1516._fU24 = 1;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        case 110:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 571353015;
            l_U1516._fU28[1] = 571353015;
            l_U1516._fU28[2] = -1993909080;
            l_U1516._fU24 = 1;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                    uVar30._fU8 += 0.50000000;
                    uVar30._fU0 -= 1.50000000;
                    J = I * 4;
                    sub_51246( J, l_U1516._fU28[0], 1, uVar30, sub_34144( 0.00000000, 360.00000000 ), 2, 0, 500 );
                    uVar30._fU0 -= 2.50000000;
                    sub_51246( 1 + J, l_U1516._fU28[1], 1, uVar30, sub_34144( 0.00000000, 360.00000000 ), 2, 0, 500 );
                    uVar30._fU0 += 3.00000000;
                    uVar30._fU8 -= 0.50000000;
                    sub_34180( 2 + J, l_U1516._fU28[2], 1, -1, sub_12313( 0, 6 ), 2, sub_39635( uVar30, 1.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 0, 5, 500 );
                    if (sub_40615())
                    {
                        sub_34180( 3 + J, l_U1516._fU28[2], 1, -1, sub_12313( 0, 6 ), 2, sub_39635( uVar30, 1.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 0, 5, 500 );
                    }
                }
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 109:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 2011114212;
            l_U1516._fU28[1] = 2011114212;
            l_U1516._fU28[2] = -302362397;
            l_U1516._fU24 = 1;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                uVar30._fU8 += 0.50000000;
                uVar30._fU0 -= 1.50000000;
                J = I * 4;
                sub_51246( 0, l_U1516._fU28[0], 1, uVar30, sub_34144( 0.00000000, 360.00000000 ), 2, 0, 500 );
                uVar30._fU0 -= 2.50000000;
                sub_51246( 1, l_U1516._fU28[1], 1, uVar30, sub_34144( 0.00000000, 360.00000000 ), 2, 0, 500 );
                uVar30._fU0 += 3.00000000;
                uVar30._fU8 -= 0.50000000;
                sub_34180( 2, l_U1516._fU28[2], 0, -1, sub_12313( 2, 6 ), 2, sub_39635( uVar30, 1.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 0, 5, 500 );
                sub_34180( 3, l_U1516._fU28[2], 0, -1, sub_12313( 2, 6 ), 2, sub_39635( uVar30, 1.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 0, 5, 500 );
                uVar30._fU0 -= 6.00000000;
                sub_34180( 4, l_U1516._fU28[2], 0, -1, sub_12313( 2, 6 ), 2, sub_39635( uVar30, 1.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 0, 5, 500 );
                if (sub_40615())
                {
                    sub_34180( 5, l_U1516._fU28[2], 0, -1, sub_12313( 2, 6 ), 2, sub_39635( uVar30, 1.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 0, 5, 500 );
                }
                if (sub_40615())
                {
                    sub_34180( 6, l_U1516._fU28[2], 0, -1, sub_12313( 2, 6 ), 2, sub_39635( uVar30, 1.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 0, 5, 500 );
                }
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 37: if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = sub_51915( 9 );
            l_U1516._fU28[1] = sub_51915( 10 );
            l_U1516._fU28[2] = sub_51915( 15 );
            l_U1516._fU24 = sub_38063( (sub_10481() / 4) + (sub_12313( -2, 1 )), 1, 3 );
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        case 38:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = sub_51915( 13 );
            l_U1516._fU28[1] = sub_51915( 11 );
            l_U1516._fU28[2] = sub_51915( 14 );
            l_U1516._fU24 = 1;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            for ( I = 0; I < l_U1516._fU24; I++ )
            {
                uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                uVar30._fU0 += 1.00000000;
                uVar30._fU4 += 1.00000000;
                sub_52704( I, l_U1516._fU28[0], 36, uVar30, 1, 0, 250 );
                uVar30._fU0 -= 2.00000000;
                sub_52704( I + l_U1516._fU24, l_U1516._fU28[1], 24, uVar30, 1, 0, 250 );
                uVar30._fU4 -= 2.00000000;
                sub_52704( (I + l_U1516._fU24) + l_U1516._fU24, l_U1516._fU28[2], 60, uVar30, 1, 0, 250 );
            }
            l_U1516._fU12 = 2;
        }
        break;
        case 111:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = sub_51915( 18 );
            l_U1516._fU24 = sub_38063( (sub_10481() / 2) + (sub_12313( -4, sub_10481() / 4 )), 2, 8 );
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            for ( I = 0; I < l_U1516._fU24; I++ )
            {
                uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                sub_52704( I, l_U1516._fU28[0], 3, uVar30, 1, 0, 500 );
            }
            l_U1516._fU12 = 2;
        }
        break;
        case 112:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = sub_51915( 16 );
            l_U1516._fU28[1] = sub_51915( 17 );
            l_U1516._fU24 = sub_38063( (sub_10481() / 2) + (sub_12313( -4, sub_10481() / 4 )), 2, 8 );
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            for ( I = 0; I < l_U1516._fU24; I++ )
            {
                uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                sub_52704( I, l_U1516._fU28[sub_12313( 0, 2 )], 18, uVar30, 1, 0, 500 );
            }
            l_U1516._fU12 = 2;
        }
        break;
        case 113:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = sub_51915( 4 );
            l_U1516._fU24 = sub_38063( (sub_10481() / 2) + (sub_12313( -4, sub_10481() / 4 )), 2, 8 );
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            for ( I = 0; I < l_U1516._fU24; I++ )
            {
                uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                sub_52704( I, l_U1516._fU28[0], 5, uVar30, 1, 0, 500 );
            }
            l_U1516._fU12 = 2;
        }
        break;
        case 39:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -1192302505;
            l_U1516._fU28[1] = -316400372;
            l_U1516._fU24 = sub_38063( sub_10481() - (sub_10481() / 3), 2, 8 );
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                    uVar30._fU0 -= 2.50000000;
                    uVar30._fU4 -= 2.50000000;
                    sub_51246( I, l_U1516._fU28[sub_33860( I, 1, 2 )], 0, uVar30, sub_34144( 0.00000000, 360.00000000 ), 1, 2, 500 );
                }
                l_U1516._fU16 = 1;
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 40:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -1048392407;
            l_U1516._fU28[1] = -1283406538;
            l_U1516._fU24 = sub_38063( sub_10481() - ((sub_10481() / 2) + 1), 2, 5 );
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                iVar5 = 0;
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    if (sub_38226( l_U1516._fU388[I] ))
                    {
                        iVar5++;
                    }
                    else if (sub_38366( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, 20.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                    {
                        sub_34180( I, l_U1516._fU28[1], 4, -1, sub_12313( 1, 4 ), 9, uVar30, fVar29, 0, 3, 500 );
                        iVar5++;
                    }
                }
                if (iVar5 == l_U1516._fU24)
                {
                    uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                    sub_65070( I, l_U1516._fU24, l_U1516._fU28[0], 0, uVar30, 1, 3, 500 );
                    l_U1516._fU16 = 1;
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 41:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -901602018;
            l_U1516._fU28[1] = 64730935;
            l_U1516._fU28[2] = 1349725314;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                sub_51246( 2, l_U1516._fU28[0], 0, uVar30, sub_34144( 0.00000000, 360.00000000 ), 1, 3, 500 );
                uVar30 = {sub_32831( 100.00000000, 200.00000000 )};
                sub_36293( 1, l_U1516._fU28[2], 1, uVar30._fU0 - 3.00000000, uVar30._fU4 - 3.00000000, uVar30._fU8, 45.00000000, 0, 0, 500 );
                TURN_OFF_VEHICLE_EXTRA( sub_11665( l_U1516._fU388[1] ), 5, 0 );
                TURN_OFF_VEHICLE_EXTRA( sub_11665( l_U1516._fU388[1] ), 6, 0 );
                TURN_OFF_VEHICLE_EXTRA( sub_11665( l_U1516._fU388[1] ), 7, 0 );
                sub_34180( 0, l_U1516._fU28[1], 4, -1, sub_12313( 1, 4 ), 10, sub_65964( sub_11665( l_U1516._fU388[1] ), 0.00000000, 0.00000000, 0.00000000 ), sub_66176( (sub_66141( sub_11665( l_U1516._fU388[1] ) )) - 90.00000000 ), 0, 3, 500 );
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 42:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -97187682;
            l_U1516._fU28[1] = -1298691925;
            l_U1516._fU24 = sub_38063( sub_10481() - 2, 1, 6 );
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                    sub_51246( I, l_U1516._fU28[0], 0, uVar30, sub_34144( 0.00000000, 360.00000000 ), 1, 1, 500 );
                    uVar30._fU4 -= 2.00000000;
                    sub_34180( I + l_U1516._fU24, l_U1516._fU28[1], 4, -1, 0, 4, uVar30, 0.00000000, 0, 0, 500 );
                }
                l_U1516._fU492 = {sub_32831( 100.00000000, 200.00000000 )};
                l_U1516._fU16 = 1;
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 43:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 2006667053;
            l_U1516._fU28[1] = -1500397869;
            l_U1516._fU28[2] = 1168388225;
            l_U1516._fU28[3] = 1881273462;
            if (sub_35604( ref l_U1516._fU28 ))
            {
                uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                sub_34180( 0, l_U1516._fU28[1], 1, -1, sub_12313( 2, 6 ), sub_12313( 0, 7 ), sub_39635( uVar30, 2.00000000 ), sub_34144( 0.00000000, 360.00000000 ), 0, 5, 500 );
                sub_34180( 1, l_U1516._fU28[1], 0, -1, sub_12313( 2, 6 ), sub_12313( 0, 7 ), sub_39635( uVar30, 2.00000000 ), sub_34144( 0.00000000, 360.00000000 ), 0, 5, 500 );
                sub_34180( 2, l_U1516._fU28[1], 0, -1, sub_12313( 2, 6 ), sub_12313( 0, 7 ), sub_39635( uVar30, 2.00000000 ), sub_34144( 0.00000000, 360.00000000 ), 0, 5, 500 );
                sub_34180( 3, l_U1516._fU28[2], 1, -1, sub_12313( 2, 6 ), sub_12313( 0, 7 ), sub_39635( uVar30, 2.00000000 ), sub_34144( 0.00000000, 360.00000000 ), 0, 5, 500 );
                sub_34180( 4, l_U1516._fU28[2], 0, -1, sub_12313( 2, 6 ), sub_12313( 0, 7 ), sub_39635( uVar30, 2.00000000 ), sub_34144( 0.00000000, 360.00000000 ), 0, 5, 500 );
                sub_34180( 5, l_U1516._fU28[2], 0, -1, sub_12313( 2, 6 ), sub_12313( 0, 7 ), sub_39635( uVar30, 2.00000000 ), sub_34144( 0.00000000, 360.00000000 ), 0, 5, 500 );
                sub_51246( 6, l_U1516._fU28[3], 0, uVar30, sub_34144( 0.00000000, 360.00000000 ), 1, 1, 500 );
                sub_51246( 7, l_U1516._fU28[3], 0, uVar30, sub_34144( 0.00000000, 360.00000000 ), 1, 1, 500 );
                uVar30._fU0 += 3.00000000;
                sub_36293( 8, l_U1516._fU28[0], 1, uVar30, sub_34144( 0.00000000, 360.00000000 ), 0, 0, 500 );
                TURN_OFF_VEHICLE_EXTRA( sub_11665( l_U1516._fU388[8] ), 5, 0 );
                TURN_OFF_VEHICLE_EXTRA( sub_11665( l_U1516._fU388[8] ), 6, 0 );
                uVar30._fU0 -= 6.00000000;
                sub_36293( 9, l_U1516._fU28[0], 1, uVar30, sub_34144( 0.00000000, 360.00000000 ), 0, 0, 500 );
                TURN_OFF_VEHICLE_EXTRA( sub_11665( l_U1516._fU388[9] ), 5, 0 );
                TURN_OFF_VEHICLE_EXTRA( sub_11665( l_U1516._fU388[9] ), 6, 0 );
                l_U1516._fU492 = {sub_32831( 100.00000000, 200.00000000 )};
                l_U1516._fU16 = 1;
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 44:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -999506922;
            l_U1516._fU28[1] = -525076767;
            l_U1516._fU24 = sub_38063( sub_10481() / 3, 1, 6 );
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_32771( l_U1516._fU28[0] ))
            {
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                    sub_34180( I, l_U1516._fU28[0], 4, -1, sub_12313( 0, 4 ), 9, uVar30, sub_34144( 0.00000000, 360.00000000 ), 0, 3, 500 );
                }
                uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                sub_65070( I, l_U1516._fU24, l_U1516._fU28[1], 0, uVar30, 1, 3, 500 );
                l_U1516._fU492 = {sub_32831( 100.00000000, 200.00000000 )};
                l_U1516._fU16 = 1;
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 45:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 2006667053;
            l_U1516._fU28[1] = -1283406538;
            l_U1516._fU28[2] = -1048392407;
            l_U1516._fU24 = sub_38063( sub_10481() / 4, 2, 4 );
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    J = I * 3;
                    uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                    sub_36293( J, l_U1516._fU28[0], 1, uVar30, sub_34144( 0.00000000, 360.00000000 ), 0, 0, 500 );
                    sub_36833( J + 1, l_U1516._fU28[1], 4, -1, sub_12313( 0, 6 ), 6, uVar30, fVar29, l_U1516._fU388[J], 0, 0, 3, 500 );
                    uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                    sub_51246( J + 2, l_U1516._fU28[2], 0, uVar30, sub_34144( 0.00000000, 360.00000000 ), 1, 3, 500 );
                }
                l_U1516._fU16 = 1;
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 46:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -1830458836;
            l_U1516._fU28[1] = 1574850459;
            l_U1516._fU28[2] = -1048392407;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                sub_36293( 0, l_U1516._fU28[0], 1, uVar30, sub_34144( 0.00000000, 360.00000000 ), 0, 0, 500 );
                sub_36833( 1, l_U1516._fU28[1], 4, -1, sub_12313( 0, 6 ), 6, uVar30, fVar29, l_U1516._fU388[0], 0, 0, 3, 500 );
                uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                sub_51246( 2, l_U1516._fU28[2], 0, uVar30, sub_34144( 0.00000000, 360.00000000 ), 1, 3, 500 );
                l_U1516._fU16 = 1;
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 114:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -1702036227;
            l_U1516._fU28[1] = -1048392407;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                uVar30 = {sub_32831( 100.00000000, 200.00000000 )};
                sub_34180( 0, l_U1516._fU28[0], 4, -1, sub_12313( 0, 6 ), 6, uVar30, sub_34144( 0.00000000, 360.00000000 ), 0, 3, 500 );
                uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                sub_51246( 1, l_U1516._fU28[1], 0, uVar30, sub_34144( 0.00000000, 360.00000000 ), 1, 3, 500 );
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 115:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 1979561477;
            l_U1516._fU28[1] = 1668231616;
            l_U1516._fU28[2] = -1947682830;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                sub_34180( 0, l_U1516._fU28[2], 4, -1, sub_12313( 0, 6 ), 6, uVar30, sub_34144( 0.00000000, 360.00000000 ), 0, 3, 500 );
                uVar30 = {sub_32831( 100.00000000, 200.00000000 )};
                sub_34180( 1, l_U1516._fU28[0], 0, -1, sub_12313( 0, 6 ), 9, uVar30, sub_34144( 0.00000000, 360.00000000 ), 3, 0, 500 );
                sub_51246( 2, l_U1516._fU28[1], 0, uVar30, sub_34144( 0.00000000, 360.00000000 ), 1, 3, 500 );
                GIVE_PED_PICKUP_OBJECT( sub_11590( l_U1516._fU388[1] ), sub_9848( l_U1516._fU388[2] ), 0 );
                l_U1516._fU16 = 1;
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 116:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 379171768;
            l_U1516._fU28[1] = 1668231616;
            l_U1516._fU28[2] = -1947682830;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                sub_34180( 0, l_U1516._fU28[2], 4, -1, sub_12313( 0, 6 ), 6, uVar30, sub_34144( 0.00000000, 360.00000000 ), 0, 3, 500 );
                uVar30 = {sub_32831( 100.00000000, 200.00000000 )};
                sub_34180( 1, l_U1516._fU28[0], 1, -1, sub_12313( 0, 6 ), 7, uVar30, sub_34144( 0.00000000, 360.00000000 ), 0, 0, 500 );
                sub_51246( 2, l_U1516._fU28[1], 0, uVar30, sub_34144( 0.00000000, 360.00000000 ), 1, 3, 500 );
                GIVE_PED_PICKUP_OBJECT( sub_11590( l_U1516._fU388[1] ), sub_9848( l_U1516._fU388[2] ), 0 );
                l_U1516._fU16 = 1;
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 117:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -1947682830;
            l_U1516._fU28[1] = 1668231616;
            l_U1516._fU28[2] = 764249904;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                sub_34180( 0, l_U1516._fU28[2], 4, -1, sub_12313( 0, 6 ), 6, uVar30, sub_34144( 0.00000000, 360.00000000 ), 0, 3, 500 );
                uVar30 = {sub_32831( 100.00000000, 200.00000000 )};
                sub_34180( 1, l_U1516._fU28[0], 4, -1, sub_12313( 0, 6 ), 4, uVar30, sub_34144( 0.00000000, 360.00000000 ), 0, 0, 500 );
                uVar30._fU4 += 2.00000000;
                sub_51246( 2, l_U1516._fU28[1], 0, uVar30, sub_34144( 0.00000000, 360.00000000 ), 1, 3, 500 );
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 47:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -1685021548;
            l_U1516._fU28[1] = 1448755353;
            l_U1516._fU24 = sub_38063( sub_10481() / 4, 2, 4 );
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    J = I * 3;
                    uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                    sub_36293( J, l_U1516._fU28[0], 1, uVar30, sub_34144( 0.00000000, 360.00000000 ), 1, 1, 500 );
                    sub_36833( J + 1, l_U1516._fU28[1], 0, I, sub_12313( 2, 6 ), 6, uVar30, fVar29, l_U1516._fU388[J], 0, 3, 0, 500 );
                    sub_36833( J + 2, l_U1516._fU28[1], 0, I, sub_12313( 2, 6 ), 6, uVar30, fVar29, l_U1516._fU388[J], 1, 3, 0, 500 );
                }
                l_U1516._fU492 = {sub_32831( 100.00000000, 200.00000000 )};
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 48:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -1685021548;
            l_U1516._fU28[1] = 1448755353;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                if (sub_35754( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                {
                    sub_36293( 0, l_U1516._fU28[0], 1, uVar30, fVar29, 1, 1, 500 );
                    sub_36833( 1, l_U1516._fU28[1], 0, 0, sub_12313( 2, 6 ), 1, uVar30, fVar29, l_U1516._fU388[0], 0, 3, 0, 500 );
                    sub_36833( 2, l_U1516._fU28[1], 0, 0, sub_12313( 2, 6 ), 5, uVar30, fVar29, l_U1516._fU388[0], 1, 3, 0, 500 );
                    l_U1516._fU492 = {sub_32831( 100.00000000, 200.00000000 )};
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 49:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 418536135;
            l_U1516._fU24 = sub_38063( sub_10481() / 2, 2, 6 );
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_32771( l_U1516._fU28[0] ))
            {
                iVar5 = 0;
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    J = I * 2;
                    if (sub_38226( l_U1516._fU388[J] ))
                    {
                        iVar5++;
                    }
                    else if (sub_35754( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                    {
                        sub_36293( J, l_U1516._fU28[0], 0, uVar30, fVar29, 1, 1, 500 );
                        l_U1516._fU388[J + 1] = l_U1516._fU388[J];
                        l_U1516._fU48[J + 1]._fU0 = l_U1516._fU48[J]._fU0;
                        l_U1516._fU48[J + 1]._fU24 = l_U1516._fU48[J]._fU24;
                        l_U1516._fU48[J + 1]._fU4 = 3;
                        l_U1516._fU48[J + 1]._fU8 = 4;
                        l_U1516._fU48[J + 1]._fU20 = 250;
                        iVar5++;
                        iVar5++;
                    }
                }
                if (iVar5 == l_U1516._fU24)
                {
                    l_U1516._fU492 = {sub_32831( 100.00000000, 200.00000000 )};
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 50:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 1677715180;
            l_U1516._fU28[1] = 800131009;
            l_U1516._fU24 = sub_38063( sub_12313( 1, 3 ), 1, 2 );
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    J = I * 6;
                    uVar30 = {sub_32831( 100.00000000, 20.00000000 )};
                    sub_34180( J, l_U1516._fU28[1], 1, -1, sub_12313( 0, 3 ), 5, sub_39635( uVar30, 1.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 5, 250 );
                    sub_34180( J + 1, l_U1516._fU28[1], 1, -1, sub_12313( 0, 3 ), 4, sub_39635( uVar30, 1.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 5, 250 );
                    sub_34180( J + 2, l_U1516._fU28[1], 1, -1, sub_12313( 0, 3 ), 0, sub_39635( uVar30, 1.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 5, 250 );
                    sub_34180( J + 3, l_U1516._fU28[1], 1, -1, sub_12313( 0, 3 ), 3, sub_39635( uVar30, 1.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 5, 250 );
                    uVar30._fU0 += 3.00000000;
                    sub_36293( J + 4, l_U1516._fU28[0], 1, uVar30, 0.00000000, 3, 0, 250 );
                    uVar30._fU0 -= 6.00000000;
                    sub_36293( J + 5, l_U1516._fU28[0], 1, uVar30, 0.00000000, 3, 0, 250 );
                }
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 118:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 1540383669;
            l_U1516._fU28[1] = -316400372;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                uVar30 = {sub_32831( 100.00000000, 20.00000000 )};
                sub_34180( 0, l_U1516._fU28[0], 0, -1, sub_12313( 2, 6 ), sub_12313( 0, 7 ), sub_39635( uVar30, 3.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 5, 250 );
                sub_34180( 1, l_U1516._fU28[0], 0, -1, sub_12313( 2, 6 ), sub_12313( 0, 7 ), sub_39635( uVar30, 3.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 5, 250 );
                sub_34180( 2, l_U1516._fU28[0], 0, -1, sub_12313( 2, 6 ), sub_12313( 0, 7 ), sub_39635( uVar30, 3.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 5, 250 );
                sub_34180( 3, l_U1516._fU28[0], 0, -1, sub_12313( 2, 6 ), sub_12313( 0, 7 ), sub_39635( uVar30, 3.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 5, 250 );
                sub_34180( 4, l_U1516._fU28[0], 0, -1, sub_12313( 2, 6 ), sub_12313( 0, 7 ), sub_39635( uVar30, 3.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 5, 250 );
                sub_34180( 5, l_U1516._fU28[0], 0, -1, sub_12313( 2, 6 ), sub_12313( 0, 7 ), sub_39635( uVar30, 3.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 5, 250 );
                sub_51246( 6, l_U1516._fU28[1], 0, uVar30, sub_34144( 0.00000000, 360.00000000 ), 1, 2, 500 );
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 119:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -183203150;
            l_U1516._fU28[1] = 2046537925;
            l_U1516._fU28[2] = 1724587620;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                uVar30 = {sub_32831( 100.00000000, 20.00000000 )};
                sub_34180( 0, l_U1516._fU28[0], 6, -1, sub_12313( 1, 5 ), sub_12313( 0, 7 ), sub_39635( uVar30, 2.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 5, 100 );
                sub_34180( 1, l_U1516._fU28[0], 6, -1, sub_12313( 1, 5 ), sub_12313( 0, 7 ), sub_39635( uVar30, 2.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 5, 100 );
                sub_34180( 2, l_U1516._fU28[0], 6, -1, sub_12313( 1, 5 ), sub_12313( 0, 7 ), sub_39635( uVar30, 2.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 5, 100 );
                sub_34180( 3, l_U1516._fU28[0], 6, -1, sub_12313( 1, 5 ), sub_12313( 0, 7 ), sub_39635( uVar30, 2.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 5, 100 );
                if (sub_40615())
                {
                    sub_34180( 4, l_U1516._fU28[0], 6, -1, sub_12313( 1, 5 ), sub_12313( 0, 7 ), sub_39635( uVar30, 2.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 5, 100 );
                }
                if (sub_40615())
                {
                    sub_34180( 5, l_U1516._fU28[0], 6, -1, sub_12313( 1, 5 ), sub_12313( 0, 7 ), sub_39635( uVar30, 2.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 5, 100 );
                }
                if (sub_40615())
                {
                    sub_34180( 6, l_U1516._fU28[0], 6, -1, sub_12313( 1, 5 ), sub_12313( 0, 7 ), sub_39635( uVar30, 2.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 5, 100 );
                }
                uVar30._fU0 += 3.00000000;
                sub_36293( 7, l_U1516._fU28[1], 1, uVar30, 0.00000000, 1, 1, 250 );
                sub_36833( 8, l_U1516._fU28[2], 4, 0, 0, 6, uVar30, fVar29, l_U1516._fU388[7], 3, 1, 1, 500 );
                l_U1516._fU492 = {sub_32831( 100.00000000, 200.00000000 )};
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 120:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -1947682830;
            l_U1516._fU28[1] = 441464;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                uVar30 = {sub_32831( 100.00000000, 200.00000000 )};
                sub_34180( 0, l_U1516._fU28[0], 4, -1, 1, 9, uVar30, sub_34144( 0.00000000, 360.00000000 ), 1, 1, 500 );
                uVar30 = {sub_32831( 100.00000000, 200.00000000 )};
                l_U1516._fU492 = {uVar30};
                uVar30._fU0 += 3.50000000;
                fVar29 = sub_34144( 0.00000000, 360.00000000 );
                sub_34180( 1, l_U1516._fU28[1], 4, -1, 1, 6, sub_39635( uVar30, 1.50000000 ), fVar29, 0, 0, 500 );
                sub_34180( 2, l_U1516._fU28[1], 4, -1, 1, 6, sub_39635( uVar30, 1.50000000 ), fVar29, 0, 0, 500 );
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 121:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = 584879743;
            l_U1516._fU28[1] = -570033273;
            l_U1516._fU28[2] = 1346668127;
            l_U1516._fU28[3] = -1461281345;
            l_U1516._fU24 = sub_38063( (sub_10481() / 3) + (sub_12313( 0, 3 )), 3, 6 );
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                iVar5 = 0;
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    if (sub_38226( l_U1516._fU388[I] ))
                    {
                        iVar5++;
                    }
                    else if (sub_35754( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, ref l_U1516._fU388, ref uVar30, ref fVar29 ))
                    {
                        if (I == 0)
                        {
                            sub_36293( I, l_U1516._fU28[0], 1, uVar30, fVar29, 1, 1, 500 );
                            sub_36833( I + l_U1516._fU24, l_U1516._fU28[2], 0, 0, sub_12313( 2, 6 ), 9, uVar30, fVar29, l_U1516._fU388[I], 0, 3, 0, 500 );
                        }
                        else
                        {
                            sub_36293( I, l_U1516._fU28[1], 1, uVar30, fVar29, 0, 0, 500 );
                            sub_36833( I + l_U1516._fU24, l_U1516._fU28[3], sub_12313( 0, 2 ), 0, sub_12313( 2, 6 ), 2, uVar30, fVar29, l_U1516._fU388[I], 0, 3, 0, 500 );
                        }
                        iVar5++;
                    }
                }
                if (iVar5 == l_U1516._fU24)
                {
                    l_U1516._fU492 = {sub_32831( 100.00000000, 100.00000000 )};
                    l_U1516._fU12 = 2;
                }
            }
        }
        break;
        case 122:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -1080673049;
            l_U1516._fU28[1] = 1353709999;
            l_U1516._fU16 = 1;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                uVar30 = {sub_32831( 100.00000000, 20.00000000 )};
                sub_34180( 0, l_U1516._fU28[0], 0, -1, sub_12313( 2, 6 ), sub_12313( 0, 7 ), sub_39635( uVar30, 2.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 0, 250 );
                sub_34180( 1, l_U1516._fU28[0], 0, -1, sub_12313( 2, 6 ), sub_12313( 0, 7 ), sub_39635( uVar30, 2.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 0, 250 );
                sub_34180( 2, l_U1516._fU28[0], 0, -1, sub_12313( 2, 6 ), sub_12313( 0, 7 ), sub_39635( uVar30, 2.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 0, 250 );
                sub_34180( 3, l_U1516._fU28[0], 0, -1, sub_12313( 2, 6 ), sub_12313( 0, 7 ), sub_39635( uVar30, 2.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 0, 250 );
                uVar30._fU0 += 3.00000000;
                sub_34180( 4, l_U1516._fU28[1], 2, -1, 0, 4, sub_39635( uVar30, 2.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 1, 1, 250 );
                uVar30._fU0 -= 6.00000000;
                sub_34180( 5, l_U1516._fU28[1], 2, -1, 0, 4, sub_39635( uVar30, 2.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 1, 1, 250 );
                l_U1516._fU492 = {sub_32831( 100.00000000, 100.00000000 )};
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 123:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -285199156;
            l_U1516._fU28[1] = -1481923910;
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                uVar30 = {sub_32831( 100.00000000, 100.00000000 )};
                uVar30._fU0 -= 1.50000000;
                sub_51246( 0, l_U1516._fU28[0], 1, uVar30, sub_34144( 0.00000000, 360.00000000 ), 2, 0, 500 );
                uVar30._fU0 -= 2.50000000;
                sub_51246( 1, l_U1516._fU28[0], 1, uVar30, sub_34144( 0.00000000, 360.00000000 ), 2, 0, 500 );
                uVar30._fU0 += 3.00000000;
                sub_34180( 2, l_U1516._fU28[1], 1, -1, sub_12313( 2, 6 ), 0, sub_39635( uVar30, 1.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 5, 250 );
                sub_34180( 3, l_U1516._fU28[1], 1, -1, sub_12313( 2, 6 ), 0, sub_39635( uVar30, 1.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 5, 250 );
                sub_34180( 4, l_U1516._fU28[1], 1, -1, sub_12313( 2, 6 ), 0, sub_39635( uVar30, 1.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 5, 250 );
                if (sub_40615())
                {
                    sub_34180( 5, l_U1516._fU28[1], 1, -1, sub_12313( 2, 6 ), 2, sub_39635( uVar30, 2.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 5, 250 );
                }
                if (sub_40615())
                {
                    sub_34180( 6, l_U1516._fU28[1], 1, -1, sub_12313( 2, 6 ), 2, sub_39635( uVar30, 2.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 5, 250 );
                }
                if (sub_40615())
                {
                    sub_34180( 7, l_U1516._fU28[1], 0, -1, sub_12313( 2, 6 ), 2, sub_39635( uVar30, 2.50000000 ), sub_34144( 0.00000000, 360.00000000 ), 3, 5, 250 );
                }
                l_U1516._fU16 = 1;
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 124:
        if (l_U1516._fU12 == 0)
        {
            l_U1516._fU28[0] = -949987237;
            l_U1516._fU28[1] = 677687516;
            l_U1516._fU16 = 1;
            l_U1516._fU24 = sub_38063( sub_10481() + (sub_12313( 0, 3 )), 3, 12 );
            l_U1516._fU12 = 1;
        }
        if (l_U1516._fU12 == 1)
        {
            if (sub_35604( ref l_U1516._fU28 ))
            {
                uVar30 = {sub_32831( 100.00000000, 20.00000000 )};
                for ( I = 0; I < l_U1516._fU24; I++ )
                {
                    sub_34180( I, l_U1516._fU28[sub_12313( 0, 2 )], 4, -1, 0, 4, sub_39635( uVar30, 4.00000000 ), sub_34144( 0.00000000, 360.00000000 ), 1, 1, 250 );
                }
                l_U1516._fU492 = {sub_32831( 100.00000000, 200.00000000 )};
                l_U1516._fU12 = 2;
            }
        }
        break;
        case 0:
        if ((l_U2014 - l_U1516._fU20) > 10000)
        {
            l_U1516._fU8 = sub_74862();
        }
        else if (((l_U1516._fU20 - l_U2014) > 30000) AND (l_U2014 < l_U1516._fU20))
        {
            l_U1516._fU20 = l_U2014;
        }
        break;
    }
    if (l_U1516._fU12 == 2)
    {
        for ( I = 0; I < 12; I++ )
        {
            if ((l_U1516._fU48[I]._fU4 != 0) AND (l_U1516._fU48[I]._fU0 == 3))
            {
                iVar6++;
            }
            if (l_U1516._fU48[I]._fU0 == 4)
            {
                if (l_U1516._fU48[I]._fU4 > 0)
                {
                    if (l_U1516._fU48[I]._fU4 == 3)
                    {
                        if (sub_38226( l_U1516._fU388[I] ))
                        {
                            iVar9 = 0;
                            iVar10 = 0;
                            for ( J = 0; J < 16; J++ )
                            {
                                if (IS_NETWORK_PLAYER_ACTIVE( J ))
                                {
                                    iVar11[J] = STORE_DAMAGE_TRACKER_FOR_NETWORK_PLAYER( J, 57, l_U1516._fU388[I] );
                                    iVar10 += iVar11[J];
                                }
                            }
                            if (IS_THIS_MODEL_A_VEHICLE( l_U1516._fU48[I]._fU24 ))
                            {
                                if (IS_CAR_IN_WATER( sub_11665( l_U1516._fU388[I] ) ))
                                {
                                    GET_DRIVER_OF_CAR( sub_11665( l_U1516._fU388[I] ), ref iVar28 );
                                    if (iVar28 == nil)
                                    {
                                        if (sub_75548( l_U1516._fU388[I], ref J ))
                                        {
                                            l_U1516._fU48[I]._fU12 = J;
                                            iVar11[J] = 500;
                                            iVar10 += iVar11[J];
                                        }
                                        else
                                        {
                                            J = sub_75818( sub_75780( sub_11665( l_U1516._fU388[I] ) ) );
                                            if (sub_19093( sub_16771( J ), sub_75780( sub_11665( l_U1516._fU388[I] ) ), 8.00000000 ))
                                            {
                                                l_U1516._fU48[I]._fU12 = J;
                                                iVar11[J] = 250;
                                                iVar10 += iVar11[J];
                                            }
                                        }
                                    }
                                    else
                                    {
                                        for ( J = 0; J < 16; J++ )
                                        {
                                            if (IS_NETWORK_PLAYER_ACTIVE( J ))
                                            {
                                                if ((sub_16771( J )) == iVar28)
                                                {
                                                    l_U1516._fU48[I]._fU12 = J;
                                                    iVar11[J] = 500;
                                                    iVar10 += iVar11[J];
                                                    J = 16;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            fVar29 = (TO_FLOAT( iVar10 )) / (TO_FLOAT( l_U1516._fU48[I]._fU20 ));
                            for ( J = 0; J < 16; J++ )
                            {
                                if (IS_NETWORK_PLAYER_ACTIVE( J ))
                                {
                                    iVar3 = ROUND( (TO_FLOAT( iVar11[J] )) / fVar29 );
                                    sub_76245( J, iVar3 );
                                    iVar9 += iVar3;
                                }
                            }
                            if (l_U1516._fU48[I]._fU12 > -1)
                            {
                                if (iVar9 < l_U1516._fU48[I]._fU20)
                                {
                                    sub_76245( l_U1516._fU48[I]._fU12, l_U1516._fU48[I]._fU20 - iVar9 );
                                }
                                l_U1516._fU776[l_U1516._fU48[I]._fU12]++;
                            }
                        }
                        else if (l_U1516._fU48[I]._fU12 > -1)
                        {
                            sub_76245( l_U1516._fU48[I]._fU12, l_U1516._fU48[I]._fU20 );
                            l_U1516._fU776[l_U1516._fU48[I]._fU12]++;
                        }
                    }
                    else if (l_U1516._fU48[I]._fU12 > -1)
                    {
                        sub_76245( l_U1516._fU48[I]._fU12, l_U1516._fU48[I]._fU20 );
                        l_U1516._fU776[l_U1516._fU48[I]._fU12]++;
                    }
                }
                l_U1516._fU48[I]._fU0 = 6;
                if ((l_U1516._fU48[I]._fU4 > 0) AND (l_U1516._fU16 == 0))
                {
                    l_U1516._fU12 = 4;
                    return;
                }
            }
            if (l_U1516._fU48[I]._fU0 == 5)
            {
                iVar7++;
            }
            if (l_U1516._fU16 != 0)
            {
                if ((l_U1516._fU48[I]._fU8 == 4) || ((l_U1516._fU48[I]._fU4 == 0) || ((l_U1516._fU48[I]._fU0 == 0) || (l_U1516._fU48[I]._fU0 == 6))))
                {
                    iVar8++;
                }
            }
        }
        if (l_U1516._fU16 != 0)
        {
            if (iVar8 == 12)
            {
                l_U1516._fU12 = 4;
            }
        }
        if ((iVar7 > 0) AND (iVar6 == 0))
        {
            l_U1516._fU12 = 5;
        }
    }
    if ((l_U1516._fU12 == 5) || (l_U1516._fU12 == 4))
    {
        l_U1516._fU20 = l_U2014;
        l_U1516._fU12 = 6;
    }
    if (l_U1516._fU12 == 6)
    {
        if (l_U1516._fU20 < (l_U2014 - 5000))
        {
            sub_11531();
        }
    }
    sub_77191();
    return;
}

int sub_32771(unknown uParam0)
{
    REQUEST_MODEL( uParam0 );
    if (HAS_MODEL_LOADED( uParam0 ))
    {
        return 1;
    }
    return 0;
}

void sub_32831(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    boolean bVar6;
    unknown Result;
    unknown uVar8;
    unknown uVar9;

    Result = {sub_18967( -1, 0 )};
    if (l_U1516._fU620[0] == 0)
    {
        iVar4 = sub_32872( Result );
    }
    else if (l_U1516._fU620[0] == 1)
    {
        iVar4 = 3;
    }
    else if (l_U1516._fU620[0] == 2)
    {
        iVar4 = 2;
    }
    else if (l_U1516._fU620[0] == 3)
    {
        iVar4 = 0;
    }
    else if (l_U1516._fU620[0] == 4)
    {
        iVar4 = 1;
    };;;;;
    while (NOT bVar6)
    {
        Result = {sub_19861( iVar4, -1 )};
        if (sub_33107( Result, uParam0 ))
        {
            iVar5++;
        }
        else if (sub_33307( ref l_U1516._fU388, Result, uParam1 ))
        {
            iVar5++;
        }
        else if (sub_33505( ref l_U1516._fU516, Result, uParam0 ))
        {
            iVar5++;
        }
        else
        {
            bVar6 = true;
        };;;
        if (iVar5 > 50)
        {
            if (l_U1516._fU620[0] == 0)
            {
                PRINTSTRING( "ERROR!!! - Script Error GET_RANDOM_PLACE_COORD over 50 repititions, returning another islands coord...\n" );
                Result = {sub_19861( sub_33860( iVar4, sub_12313( 1, 4 ), 4 ), -1 )};
            }
            else
            {
                PRINTSTRING( "ERROR!!! - Script Error GET_RANDOM_PLACE_COORD over 50 repititions, just grabbing any coord...\n" );
                Result = {sub_19861( iVar4, -1 )};
            }
            bVar6 = true;
        }
    }
    Result._fU8 += 0.00010000;
    return Result;
}

int sub_32872(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (uParam0._fU0 > 311.18070000)
    {
        if (uParam0._fU4 > 1267.14300000)
        {
            return 0;
        }
        else if (uParam0._fU0 > 529.00000000)
        {
            return 1;
        }
    }
    else if (uParam0._fU0 < -745.48310000)
    {
        return 3;
    }
    return 2;
}

int sub_33107(vector vParam0, float fParam3)
{
    int I;
    float fVar7;
    vector vVar8;

    fParam3 *= fParam3;
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (NOT (IS_CHAR_DEAD( sub_16771( I ) )))
            {
                GET_CHAR_COORDINATES( sub_16771( I ), ref vVar8.x, ref vVar8.y, ref vVar8.z );
                vVar8 = {vVar8 - vParam0};
                fVar7 = ((vVar8.x * vVar8.x) + (vVar8.y * vVar8.y)) + (vVar8.z * vVar8.z);
                if (fVar7 < fParam3)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_33307(unknown uParam0, vector vParam1, float fParam4)
{
    int I;
    float fVar8;
    vector vVar9;

    fParam4 *= fParam4;
    for ( I = 0; I < (uParam0^); I++ )
    {
        if (NOT (sub_33344( (uParam0^)[I] )))
        {
            vVar9 = {sub_17395( (uParam0^)[I] )};
            vVar9 = {vVar9 - vParam1};
            fVar8 = ((vVar9.x * vVar9.x) + (vVar9.y * vVar9.y)) + (vVar9.z * vVar9.z);
            if (fVar8 < fParam4)
            {
                return 1;
            }
        }
    }
    return 0;
}

boolean sub_33344(unknown uParam0)
{
    return NOT (sub_16943( uParam0 ));
}

int sub_33505(unknown uParam0, vector vParam1, float fParam4)
{
    int I;
    unknown uVar8;
    float fVar9;
    vector vVar10;

    fParam4 *= fParam4;
    for ( I = 0; I < 16; I++ )
    {
        if ((uParam0^)[I] > 0)
        {
            if (l_U5)
            {
                GET_SPAWN_COORDINATES_FOR_CAR_NODE( (uParam0^)[I], sub_18967( -1, 0 ), ref vVar10, ref uVar8 );
            }
            else
            {
                GET_COORDINATES_FOR_NETWORK_RESTART_NODE( (uParam0^)[I], ref vVar10, ref uVar8 );
            }
            vVar10 = {vVar10 - vParam1};
            fVar9 = ((vVar10.x * vVar10.x) + (vVar10.y * vVar10.y)) + (vVar10.z * vVar10.z);
            if (fVar9 < fParam4)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_33860(int I, int iParam1, int iParam2)
{
    for ( I += iParam1; I >= iParam2; I -= iParam2 )
    {
        ;
    }
    while (I < 0)
    {
        I += iParam2;
    }
    return I;
}

void sub_34144(unknown uParam0, unknown Result)
{
    GENERATE_RANDOM_FLOAT_IN_RANGE( uParam0, Result, ref Result );
    return Result;
}

void sub_34180(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3, int iParam4, int iParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, int iParam10, unknown uParam11, unknown uParam12)
{
    unknown uVar15;

    uVar15 = sub_34197( iParam1, uParam6, uParam9 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar15 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( iParam1 );
    if ((iParam5 == 3) || ((iParam5 == 7) || (iParam5 == 4)))
    {
        SET_COMBAT_DECISION_MAKER( uVar15, l_U2028 );
    }
    if ((iParam5 == 1) || ((iParam5 == 8) || (iParam5 == 5)))
    {
        SET_COMBAT_DECISION_MAKER( uVar15, l_U2029 );
    }
    if ((iParam5 == 10) || ((iParam5 == 2) || ((iParam5 == 9) || (iParam5 == 6))))
    {
        SET_COMBAT_DECISION_MAKER( uVar15, l_U2030 );
    }
    if (iParam5 == 0)
    {
        SET_COMBAT_DECISION_MAKER( uVar15, l_U2027 );
    }
    sub_34409( uVar15, uParam2 );
    if ((iParam10 == 2) || (iParam10 == 3))
    {
        SET_CHAR_IS_TARGET_PRIORITY( uVar15, 1 );
    }
    if (iParam10 == 1)
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( uVar15, 0 );
    }
    if (iParam4 == 1)
    {
        if ((sub_12313( 0, 3 )) == 0)
        {
            GIVE_DELAYED_WEAPON_TO_CHAR( uVar15, 7, 25000, 1 );
        }
    }
    else if (iParam4 == 2)
    {
        GIVE_DELAYED_WEAPON_TO_CHAR( uVar15, 7, 25000, 1 );
    }
    else if (iParam4 == 3)
    {
        GIVE_DELAYED_WEAPON_TO_CHAR( uVar15, 13, 25000, 1 );
    }
    else if (iParam4 == 4)
    {
        GIVE_DELAYED_WEAPON_TO_CHAR( uVar15, 14, 25000, 1 );
    }
    else if (iParam4 == 5)
    {
        GIVE_DELAYED_WEAPON_TO_CHAR( uVar15, 11, 25000, 1 );
    };;;;;
    sub_34819( uVar15, iParam5 );
    SET_CHAR_SUFFERS_CRITICAL_HITS( uVar15, 0 );
    if (iParam1 == -1947682830)
    {
        if (l_U1516._fU8 == 120)
        {
            SET_CHAR_HEALTH( uVar15, 1000 );
        }
        else
        {
            SET_CHAR_INVINCIBLE( uVar15, 1 );
        }
        l_U1516._fU1592 = sub_35275( uVar15 );
    }
    else
    {
        SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP( uVar15, 1, 0 );
    }
    SET_PED_DIES_WHEN_INJURED( uVar15, 1 );
    SET_CHAR_WILL_DO_DRIVEBYS( uVar15, 1 );
    SET_CHAR_KEEP_TASK( uVar15, 1 );
    l_U1516._fU388[uParam0] = sub_35275( uVar15 );
    SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES( l_U1516._fU388[uParam0], 1 );
    l_U1516._fU48[uParam0]._fU24 = iParam1;
    l_U1516._fU48[uParam0]._fU4 = iParam10;
    l_U1516._fU48[uParam0]._fU8 = uParam11;
    l_U1516._fU48[uParam0]._fU20 = uParam12;
    l_U1516._fU48[uParam0]._fU0 = 2;
    return;
}

void sub_34197(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown Result;

    CREATE_CHAR( 26, uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, ref Result, 1 );
    SET_CHAR_HEADING( Result, uParam4 );
    return Result;
}

void sub_34409(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0:
        SET_CHAR_RELATIONSHIP_GROUP( uParam0, 29 );
        SET_CHAR_IS_TARGET_PRIORITY( uParam0, 1 );
        return;
        case 1:
        SET_CHAR_RELATIONSHIP_GROUP( uParam0, 26 );
        return;
        case 2:
        SET_CHAR_RELATIONSHIP_GROUP( uParam0, 28 );
        return;
        case 3:
        SET_CHAR_RELATIONSHIP_GROUP( uParam0, 30 );
        return;
        case 4:
        SET_CHAR_RELATIONSHIP_GROUP( uParam0, 27 );
        return;
        case 5:
        SET_CHAR_RELATIONSHIP_GROUP( uParam0, 23 );
        SET_CHAR_IS_TARGET_PRIORITY( uParam0, 1 );
        return;
        case 6:
        SET_CHAR_RELATIONSHIP_GROUP( uParam0, 24 );
        return;
    }
    SET_CHAR_RELATIONSHIP_GROUP( uParam0, 26 );
    return;
}

void sub_34819(unknown uParam0, int iParam1)
{
    if (sub_9928( uParam0 ))
    {
        if ((iParam1 == 6) || ((iParam1 == 5) || (iParam1 == 4)))
        {
            TASK_PERFORM_SEQUENCE( uParam0, l_U2026 );
            return;
        }
        if ((iParam1 == 9) || ((iParam1 == 8) || (iParam1 == 7)))
        {
            TASK_PERFORM_SEQUENCE( uParam0, l_U2016 );
            return;
        }
        if ((iParam1 == 2) || ((iParam1 == 1) || ((iParam1 == 3) || (iParam1 == 0))))
        {
            TASK_PERFORM_SEQUENCE( uParam0, l_U2017 );
        }
    }
    else if (NOT (sub_34957( uParam0 )))
    {
        if (iParam1 == 10)
        {
            TASK_PERFORM_SEQUENCE( uParam0, l_U2025 );
            return;
        }
        if ((iParam1 == 6) || ((iParam1 == 5) || (iParam1 == 4)))
        {
            TASK_PERFORM_SEQUENCE( uParam0, l_U2021[sub_12313( 0, 3 )] );
            return;
        }
        if ((iParam1 == 9) || ((iParam1 == 8) || (iParam1 == 7)))
        {
            TASK_PERFORM_SEQUENCE( uParam0, l_U2018 );
            return;
        }
        if (iParam1 == 0)
        {
            TASK_PERFORM_SEQUENCE( uParam0, l_U2020 );
            return;
        }
        if ((iParam1 == 2) || ((iParam1 == 1) || (iParam1 == 3)))
        {
            TASK_PERFORM_SEQUENCE( uParam0, l_U2019 );
        }
    }
    return;
}

int sub_34957(int iParam0)
{
    unknown uVar3;
    int iVar4;

    if (IS_CHAR_IN_ANY_CAR( iParam0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0, ref uVar3 );
        GET_DRIVER_OF_CAR( uVar3, ref iVar4 );
        if (iParam0 != iVar4)
        {
            return 1;
        }
    }
    return 0;
}

void sub_35275(unknown uParam0)
{
    unknown Result;

    GET_NETWORK_ID_FROM_PED( uParam0, ref Result );
    return Result;
}

int sub_35604(unknown uParam0)
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

int sub_35754(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int iVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    if (LOAD_ALL_PATH_NODES( 1 ))
    {
        sub_17586( ref uParam1, uParam4 + l_U12 );
        if ((uParam5 + l_U13) < 28.00000000)
        {
            l_U13 = 0.00000000;
        }
        while (iVar11 < 127)
        {
            if (GET_RANDOM_CAR_NODE( uParam1, uParam4 + l_U12, 2, 1, 1, ref uVar13, ref uVar12 ))
            {
                if (sub_33107( uVar13, uParam5 + l_U13 ))
                {
                    iVar11++;
                }
                else if (sub_33307( uParam6, uVar13, uParam5 + l_U13 ))
                {
                    iVar11++;
                }
                else if (sub_33505( uParam0, uVar13, uParam5 + l_U13 ))
                {
                    iVar11++;
                }
                else if ((NOT (sub_35966( ref uVar13, l_U11 ))) AND (l_U11 > 0))
                {
                    iVar11++;
                }
                else
                {
                    GET_SPAWN_COORDINATES_FOR_CAR_NODE( uVar12, sub_18967( -1, 0 ), uParam7, uParam8 );
                    l_U13 = 0.00000000;
                    l_U12 = 0.00000000;
                    return 1;
                };;;;
                l_U13 -= 0.20000000;
            }
            else
            {
                l_U12 += 25.00000000;
                return 0;
            }
        }
        l_U12 += 10.00000000;
    }
    return 0;
}

int sub_35966(int iParam0, int iParam1)
{
    if (iParam0->_fU0 > 311.18070000)
    {
        if (iParam0->_fU4 > 1267.14300000)
        {
            if (iParam1 == 3)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else if (iParam0->_fU0 > 529.00000000)
        {
            if (iParam1 > 3)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
    else if (iParam0->_fU0 < -745.48310000)
    {
        if (iParam1 == 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if (iParam1 == 2)
    {
        return 1;
        break;
    }
    return 0;
}

void sub_36293(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7, unknown uParam8, unknown uParam9)
{
    unknown uVar12;
    unknown uVar13;

    uVar12 = sub_36309( uParam1, uParam3, uParam6 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( uParam1 );
    if (iParam2 == 0)
    {
        if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
        {
            CREATE_RANDOM_CHAR_AS_DRIVER( uVar12, ref uVar13 );
            SET_CHAR_RELATIONSHIP_GROUP( uVar13, 26 );
            SET_COMBAT_DECISION_MAKER( uVar13, l_U2029 );
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( uVar13, 0 );
            TASK_PERFORM_SEQUENCE( uVar13, l_U2016 );
            SET_CHAR_KEEP_TASK( uVar13, 1 );
            sub_11619( uVar13 );
        }
    }
    l_U1516._fU388[uParam0] = sub_36504( uVar12 );
    SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES( l_U1516._fU388[uParam0], 1 );
    SET_CAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP( uVar12, 1, 0 );
    SET_VEH_HAS_STRONG_AXLES( uVar12, 1 );
    LOCK_CAR_DOORS( uVar12, 1 );
    if (iParam7 == 1)
    {
        SET_CAN_BURST_CAR_TYRES( uVar12, 0 );
    }
    l_U1516._fU48[uParam0]._fU24 = uParam1;
    l_U1516._fU48[uParam0]._fU4 = iParam7;
    l_U1516._fU48[uParam0]._fU8 = uParam8;
    l_U1516._fU48[uParam0]._fU20 = uParam9;
    l_U1516._fU48[uParam0]._fU0 = 2;
    return;
}

void sub_36309(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown Result;

    CREATE_CAR( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, ref Result, 1 );
    SET_CAR_HEADING( Result, uParam4 );
    SET_CAR_COORDINATES( Result, uParam1._fU0, uParam1._fU4, uParam1._fU8 );
    return Result;
}

void sub_36504(unknown uParam0)
{
    unknown Result;

    GET_NETWORK_ID_FROM_VEHICLE( uParam0, ref Result );
    return Result;
}

void sub_36833(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, int iParam4, int iParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, int iParam11, int iParam12, unknown uParam13, unknown uParam14)
{
    unknown uVar17;
    unknown uVar18;
    int iVar19;

    if (sub_36845( uParam10 ))
    {
        GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref iVar19, ref uParam0 );
        if (iVar19 == 0)
        {
            GET_RANDOM_CAR_MODEL_IN_MEMORY( 0, ref iVar19, ref uParam0 );
        }
        if (iVar19 == 0)
        {
            uVar18 = sub_34197( uParam1, uParam6, uParam9 );
        }
        else
        {
            uVar17 = sub_36309( iVar19, uParam6, uParam9 );
            uVar18 = sub_36993( uParam1, uVar17, iParam11 );
            sub_11694( uVar17 );
        }
    }
    else
    {
        uVar18 = sub_36993( uParam1, sub_11665( uParam10 ), iParam11 );
    }
    SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar18 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( uParam1 );
    if (iParam11 > 0)
    {
        if ((iParam2 != 4) AND ((iParam2 != 3) AND (iParam2 != 2)))
        {
            SET_CHAR_DECISION_MAKER( uVar18, l_U2031 );
        }
    }
    if ((iParam5 == 3) || ((iParam5 == 7) || (iParam5 == 4)))
    {
        SET_COMBAT_DECISION_MAKER( uVar18, l_U2028 );
    }
    if ((iParam5 == 1) || ((iParam5 == 8) || (iParam5 == 5)))
    {
        SET_COMBAT_DECISION_MAKER( uVar18, l_U2029 );
    }
    if ((iParam5 == 0) || ((iParam5 == 2) || ((iParam5 == 9) || (iParam5 == 6))))
    {
        SET_COMBAT_DECISION_MAKER( uVar18, l_U2030 );
    }
    if ((iParam5 == 3) || ((iParam5 == 1) || ((iParam5 == 0) || (iParam5 == 2))))
    {
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( uVar18, 0 );
        FORCE_PED_TO_FLEE_WHILST_DRIVING_VEHICLE( uVar18, 1 );
    }
    sub_34409( uVar18, iParam2 );
    if ((iParam12 == 2) || (iParam12 == 3))
    {
        SET_CHAR_IS_TARGET_PRIORITY( uVar18, 1 );
    }
    if (iParam4 == 1)
    {
        if ((sub_12313( 0, 3 )) == 0)
        {
            GIVE_DELAYED_WEAPON_TO_CHAR( uVar18, 7, 25000, 1 );
        }
    }
    else if (iParam4 == 2)
    {
        GIVE_DELAYED_WEAPON_TO_CHAR( uVar18, 7, 25000, 1 );
    }
    else if (iParam4 == 3)
    {
        GIVE_DELAYED_WEAPON_TO_CHAR( uVar18, 13, 25000, 1 );
    }
    else if (iParam4 == 4)
    {
        GIVE_DELAYED_WEAPON_TO_CHAR( uVar18, 14, 25000, 1 );
    }
    else if (iParam4 == 5)
    {
        GIVE_DELAYED_WEAPON_TO_CHAR( uVar18, 11, 25000, 1 );
    };;;;;
    sub_34819( uVar18, iParam5 );
    SET_CHAR_SUFFERS_CRITICAL_HITS( uVar18, 0 );
    SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP( uVar18, 1, 0 );
    SET_PED_DIES_WHEN_INJURED( uVar18, 1 );
    SET_CHAR_WILL_DO_DRIVEBYS( uVar18, 1 );
    SET_CHAR_KEEP_TASK( uVar18, 1 );
    l_U1516._fU388[uParam0] = sub_35275( uVar18 );
    SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES( l_U1516._fU388[uParam0], 1 );
    l_U1516._fU48[uParam0]._fU24 = uParam1;
    l_U1516._fU48[uParam0]._fU4 = iParam12;
    l_U1516._fU48[uParam0]._fU8 = uParam13;
    l_U1516._fU48[uParam0]._fU20 = uParam14;
    l_U1516._fU48[uParam0]._fU0 = 2;
    return;
}

int sub_36845(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        if (IS_VEH_DRIVEABLE( sub_11665( uParam0 ) ))
        {
            return 0;
        }
    }
    return 1;
}

void sub_36993(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_38063(int iParam0, int iParam1, int Result)
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

int sub_38226(unknown uParam0)
{
    if (DOES_PED_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        return 1;
    }
    else if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        return 1;
    }
    else if (DOES_OBJECT_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        return 1;
    };;;
    return 0;
}

int sub_38366(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int iVar12;
    unknown uVar13;
    boolean bVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;

    if (LOAD_ALL_PATH_NODES( 1 ))
    {
        sub_17586( ref uParam1, uParam4 + l_U12 );
        if ((uParam5 + l_U13) < 28.00000000)
        {
            l_U13 = 0.00000000;
        }
        while (iVar12 < 127)
        {
            if (l_U4)
            {
                if (GET_RANDOM_NETWORK_RESTART_NODE_USING_GROUP_LIST( uParam1, uParam4 + l_U12, ref uVar15, ref uVar13 ))
                {
                    bVar14 = true;
                }
            }
            else if (GET_RANDOM_NETWORK_RESTART_NODE( uParam1, uParam4 + l_U12, ref uVar15, ref uVar13 ))
            {
                bVar14 = true;
            }
            if (bVar14)
            {
                if (sub_33107( uVar15, uParam5 + l_U13 ))
                {
                    iVar12++;
                }
                else if (sub_33307( uParam7, uVar15, uParam5 + l_U13 ))
                {
                    iVar12++;
                }
                else if (sub_33505( uParam0, uVar15, uParam5 + l_U13 ))
                {
                    iVar12++;
                }
                else if (GET_CLOSEST_CAR_NODE( uVar15._fU0, uVar15._fU4, uVar15._fU8, ref uVar18._fU0, ref uVar18._fU4, ref uVar18._fU8 ))
                {
                    if (sub_31163( uVar15, uVar18, uParam6 ))
                    {
                        GET_COORDINATES_FOR_NETWORK_RESTART_NODE( uVar13, uParam8, uParam9 );
                        l_U13 = 0.00000000;
                        l_U12 = 0.00000000;
                        return 1;
                    }
                    else
                    {
                        iVar12++;
                    }
                }
                else
                {
                    return 0;
                };;;;
                l_U13 -= 0.20000000;
            }
            else
            {
                l_U12 += 25.00000000;
                return 0;
            }
        }
        l_U12 += 10.00000000;
    }
    return 0;
}

void sub_39635(unknown Result, unknown uParam1, unknown uParam2, unknown uParam3)
{
    GENERATE_RANDOM_FLOAT_IN_RANGE( Result._fU0 - uParam3, Result._fU0 + uParam3, ref Result._fU0 );
    GENERATE_RANDOM_FLOAT_IN_RANGE( Result._fU4 - uParam3, Result._fU4 + uParam3, ref Result._fU4 );
    return Result;
}

void sub_40615()
{
    return sub_40624();
}

int sub_40624()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar2 );
    if (iVar2 == 0)
    {
        return 1;
    }
    return 0;
}

void sub_41075(unknown uParam0, unknown Result, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    switch (sub_12313( 0, uParam0 ))
    {
        case 0: return Result;
        case 1: return uParam2;
        case 2: return uParam3;
        case 3: return uParam4;
        case 4: return uParam5;
        case 5: return uParam6;
        case 6: return uParam7;
        case 7: return uParam8;
    }
    return Result;
}

void sub_50769(vector vParam0)
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
    if (l_U1516._fU620[0] == 0)
    {
        for ( I = 0; I < 5; I++ )
        {
            vVar12 = {sub_50821( I )};
            uVar9 = {vParam0 - vVar12};
            fVar8 = ((uVar9._fU0 * uVar9._fU0) + (uVar9._fU4 * uVar9._fU4)) + (uVar9._fU8 * uVar9._fU8);
            if (fVar7 > fVar8)
            {
                iVar6 = I;
                fVar7 = fVar8;
            }
        }
    }
    else if (l_U1516._fU620[0] == 1)
    {
        iVar6 = 4;
    }
    else if (l_U1516._fU620[0] == 2)
    {
        iVar6 = sub_12313( 2, 4 );
    }
    else if (l_U1516._fU620[0] == 3)
    {
        iVar6 = 1;
    }
    else if (l_U1516._fU620[0] == 4)
    {
        iVar6 = 0;
    };;;;;
    return sub_50821( iVar6 );
}

vector sub_50821(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return vector( 1193.00900000, 196.70740000, 31.56950000);
        case 1: return vector( 973.82840000, 1822.17800000, 19.11340000);
        case 2: return vector( -391.25310000, 1279.20900000, 22.01990000);
        case 3: return vector( 93.55640000, 146.39100000, 13.73210000);
        case 4: return vector( -1305.52200000, 1287.34900000, 20.71900000);
    }
    return vector( -391.25310000, 1279.20900000, 22.01990000);
}

void sub_51246(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7, unknown uParam8, unknown uParam9)
{
    unknown uVar12;

    uVar12 = sub_51263( uParam1, uParam3, uParam6, 1 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( uParam1 );
    l_U1516._fU388[uParam0] = sub_51335( uVar12 );
    SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES( l_U1516._fU388[uParam0], 1 );
    if ((iParam7 == 2) || (iParam7 == 3))
    {
        SET_OBJECT_ONLY_DAMAGED_BY_PLAYER( uVar12, 1 );
        SET_OBJECT_HEALTH( uVar12, 500 );
    }
    else if (iParam7 == 1)
    {
        SET_OBJECT_INVINCIBLE( uVar12, 1 );
        SET_OBJECT_AS_STEALABLE( uVar12, 1 );
    }
    SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN( uVar12, 1 );
    l_U1516._fU48[uParam0]._fU24 = uParam1;
    l_U1516._fU48[uParam0]._fU4 = iParam7;
    l_U1516._fU48[uParam0]._fU8 = uParam8;
    l_U1516._fU48[uParam0]._fU20 = uParam9;
    l_U1516._fU48[uParam0]._fU0 = 2;
    return;
}

void sub_51263(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown Result;

    CREATE_OBJECT( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, ref Result, uParam5 );
    SET_OBJECT_HEADING( Result, uParam4 );
    return Result;
}

void sub_51335(unknown uParam0)
{
    unknown Result;

    GET_NETWORK_ID_FROM_OBJECT( uParam0, ref Result );
    return Result;
}

int sub_51788(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, int iParam4)
{
    int I;
    int iVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    if (l_U1516._fU12 == 2)
    {
        return 1;
    }
    if (l_U1516._fU12 == 0)
    {
        l_U1516._fU12 = 1;
    }
    if (l_U1516._fU12 == 1)
    {
        if ((sub_51864( (uParam0^)[0] )) || (sub_35604( uParam0 )))
        {
            for ( I = 0; I < iParam2; I++ )
            {
                if ((DOES_PICKUP_EXIST( l_U1516._fU440[I] )) || (sub_38226( l_U1516._fU388[I] )))
                {
                    iVar8++;
                }
                else if (sub_35754( ref l_U1516._fU516, sub_18967( -1, 0 ), 400.00000000, 100.00000000, ref l_U1516._fU388, ref uVar11, ref uVar10 ))
                {
                    uVar9 = sub_52357( uParam0 );
                    sub_52526( I, uVar9, uParam1, uVar11, uVar10, uParam3, iParam4 );
                    iVar8++;
                }
            }
            if (iVar8 == iParam2)
            {
                if ((l_U1516._fU492._fU0 == 0.00000000) AND (iParam4 == 1))
                {
                    l_U1516._fU492 = {sub_32831( 100.00000000, 200.00000000 )};
                }
                l_U1516._fU12 = 2;
                return 1;
            }
        }
    }
    return 0;
}

int sub_51864(int iParam0)
{
    if (iParam0 != 0)
    {
        if (NOT (IS_THIS_MODEL_A_VEHICLE( iParam0 )))
        {
            if (NOT (IS_THIS_MODEL_A_PED( iParam0 )))
            {
                if (iParam0 == (sub_51915( 1 )))
                {
                    return 1;
                }
                if (iParam0 == (sub_51915( 3 )))
                {
                    return 1;
                }
                if (iParam0 == (sub_51915( 4 )))
                {
                    return 1;
                }
                if (iParam0 == (sub_51915( 5 )))
                {
                    return 1;
                }
                if (iParam0 == (sub_51915( 7 )))
                {
                    return 1;
                }
                if (iParam0 == (sub_51915( 9 )))
                {
                    return 1;
                }
                if (iParam0 == (sub_51915( 10 )))
                {
                    return 1;
                }
                if (iParam0 == (sub_51915( 11 )))
                {
                    return 1;
                }
                if (iParam0 == (sub_51915( 12 )))
                {
                    return 1;
                }
                if (iParam0 == (sub_51915( 13 )))
                {
                    return 1;
                }
                if (iParam0 == (sub_51915( 14 )))
                {
                    return 1;
                }
                if (iParam0 == (sub_51915( 15 )))
                {
                    return 1;
                }
                if (iParam0 == (sub_51915( 16 )))
                {
                    return 1;
                }
                if (iParam0 == (sub_51915( 17 )))
                {
                    return 1;
                }
                if (iParam0 == (sub_51915( 18 )))
                {
                    return 1;
                }
                if (iParam0 == 1480127034)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_51915(unknown uParam0)
{
    unknown Result;

    GET_WEAPONTYPE_MODEL( uParam0, ref Result );
    return Result;
}

void sub_52357(unknown uParam0)
{
    int I;
    int iVar4;
    int iVar5;

    for ( I = 0; I < (uParam0^); I++ )
    {
        if ((uParam0^)[I] != 0)
        {
            iVar4++;
        }
    }
    iVar5 = sub_12313( 0, iVar4 + 1 );
    iVar4 = 0;
    for ( I = 0; I < (uParam0^); I++ )
    {
        if ((uParam0^)[I] != 0)
        {
            if (iVar4 == iVar5)
            {
                return (uParam0^)[I];
            }
            iVar4++;
        }
    }
    return (uParam0^)[0];
}

void sub_52526(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7, unknown uParam8)
{
    if (IS_THIS_MODEL_A_VEHICLE( uParam1 ))
    {
        sub_36293( uParam0, uParam1, uParam2, uParam3, uParam6, iParam7, uParam8, 500 );
    }
    else if (IS_THIS_MODEL_A_PED( uParam1 ))
    {
        if (iParam7 == 1)
        {
            sub_34180( uParam0, uParam1, 1, -1, sub_12313( 3, 6 ), 9, uParam3, uParam6, iParam7, uParam8, 500 );
        }
        else
        {
            sub_34180( uParam0, uParam1, 0, -1, sub_12313( 3, 6 ), 8, uParam3, uParam6, iParam7, uParam8, 500 );
        }
    }
    else if (sub_51864( uParam1 ))
    {
        sub_52704( uParam0, uParam1, uParam2, uParam3, iParam7, uParam8, 500 );
    }
    else
    {
        sub_51246( uParam0, uParam1, uParam2, uParam3, uParam6, iParam7, uParam8, 500 );
    };;;
    return;
}

void sub_52704(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    CLEAR_AREA( uParam3._fU0, uParam3._fU4, uParam3._fU8, 0.50000000, 0 );
    CREATE_PICKUP_WITH_AMMO( uParam1, 22, uParam2, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref l_U1516._fU440[uParam0] );
    SET_DO_NOT_SPAWN_PARKED_CARS_ON_TOP( l_U1516._fU440[uParam0], 1 );
    l_U1516._fU48[uParam0]._fU24 = uParam1;
    l_U1516._fU48[uParam0]._fU4 = uParam6;
    l_U1516._fU48[uParam0]._fU8 = uParam7;
    l_U1516._fU48[uParam0]._fU20 = uParam8;
    l_U1516._fU48[uParam0]._fU0 = 2;
    return;
}

void sub_60346(unknown uParam0, unknown Result, unknown uParam2, unknown uParam3)
{
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, Result._fU0, Result._fU4, Result._fU8, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    return Result;
}

void sub_65070(int iParam0, int iParam1, unknown uParam2, unknown uParam3, vector vParam4, unknown uParam7, unknown uParam8, unknown uParam9)
{
    vector vVar12;
    vector vVar15;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    int iVar21;
    int iVar22;
    int I;
    int J;
    int iVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;

    vVar12 = {sub_65081( uParam2 )};
    sub_65122( ref vVar12 );
    vVar15.x = vVar12.x * 0.10000000;
    vVar15.y = vVar12.y * 0.10000000;
    vVar15.z = 0.00000000;
    vVar15 = {vVar15 + vVar12};
    uVar18 = {vParam4 - vVar15};
    uVar18._fU8 = vParam4.z;
    iVar21 = 1;
    if (iParam1 > 4)
    {
        iVar21++;
    }
    if (iParam1 > 8)
    {
        iVar21++;
    }
    uVar26 = {uVar18};
    for ( iVar25 = 0; iVar25 < iVar21; iVar25++ )
    {
        for ( J = 0; J < 2; J++ )
        {
            for ( I = 0; I < 2; I++ )
            {
                sub_51246( iParam0 + iVar22, uParam2, uParam3, uVar26, 0.00000000, uParam7, uParam8, uParam9 );
                uVar26._fU0 += vVar15.x;
                iVar22++;
                if (iVar22 >= iParam1)
                {
                    return;
                }
            }
            uVar26._fU0 = uVar18._fU0;
            uVar26._fU4 += vVar15.y;
        }
        uVar26._fU0 = uVar18._fU0;
        uVar26._fU4 = uVar18._fU4;
        uVar26._fU8 += vVar15.z;
    }
    return;
    return;
}

vector sub_65081(unknown uParam0)
{
    vector vVar3;
    vector vVar6;

    GET_MODEL_DIMENSIONS( uParam0, ref vVar3, ref vVar6 );
    return vVar6 - vVar3;
}

void sub_65122(int iParam0)
{
    if (iParam0->_fU0 < 0.00000000)
    {
        iParam0->_fU0 *= -1;
    }
    if (iParam0->_fU4 < 0.00000000)
    {
        iParam0->_fU4 *= -1;
    }
    if (iParam0->_fU8 < 0.00000000)
    {
        iParam0->_fU8 *= -1;
    }
    return;
}

void sub_65964(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    GET_MODEL_DIMENSIONS( sub_65975( uParam0 ), ref uVar6, ref uVar9 );
    if (uParam1._fU0 < 0.00000000)
    {
        uParam1._fU0 += uVar6._fU0;
    }
    else
    {
        uParam1._fU0 += uVar9._fU0;
    }
    return sub_66066( uParam0, uParam1 );
}

void sub_65975(unknown uParam0)
{
    unknown Result;

    GET_CAR_MODEL( uParam0, ref Result );
    return Result;
}

void sub_66066(unknown uParam0, unknown Result, unknown uParam2, unknown uParam3)
{
    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, Result._fU0, Result._fU4, Result._fU8, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    return Result;
}

void sub_66141(unknown uParam0)
{
    unknown Result;

    GET_CAR_HEADING( uParam0, ref Result );
    return Result;
}

void sub_66176(float Result)
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

void sub_74862()
{
    int I;
    int iVar3;
    int Result;
    int iVar5;

    for ( I = 0; I < 125; I++ )
    {
        if (l_U1516._fU1084[I] < l_U1516._fU1084[0])
        {
            iVar5++;
        }
    }
    if (iVar5 == 0)
    {
        l_U1516._fU1084[0]++;
        l_U1516._fU1084[19] = l_U1516._fU1084[0];
        iVar5 = 123;
    }
    Result = sub_12313( 1, iVar5 );
    for ( I = 0; I < 125; I++ )
    {
        if (l_U1516._fU1084[I] < l_U1516._fU1084[0])
        {
            iVar3++;
            if (iVar3 == Result)
            {
                l_U1516._fU1084[I]++;
                return I;
            }
        }
    }
    return Result;
}

int sub_75548(int iParam0, unknown uParam1)
{
    int I;

    if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( iParam0 ))
    {
        for ( I = 0; I < 16; I++ )
        {
            if (sub_75585( I ))
            {
                if (l_U2038[I] == iParam0)
                {
                    (uParam1^) = I;
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_75585(unknown uParam0)
{
    if (IS_NETWORK_PLAYER_ACTIVE( uParam0 ))
    {
        if (NOT (IS_CHAR_FATALLY_INJURED( sub_16771( uParam0 ) )))
        {
            if (IS_PLAYER_SCRIPT_CONTROL_ON( sub_19026( uParam0 ) ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_75780(unknown uParam0)
{
    unknown Result;
    unknown uVar4;
    unknown uVar5;

    GET_DEAD_CAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    return Result;
}

void sub_75818(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;
    int Result;
    float fVar7;
    float fVar8;

    fVar8 = 999999.00000000;
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            fVar7 = sub_75871( sub_16771( I ), uParam0 );
            if (fVar8 > fVar7)
            {
                fVar8 = fVar7;
                Result = I;
            }
        }
    }
    return Result;
}

void sub_75871(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    return VDIST( uParam1, uVar6 );
}

void sub_76245(unknown uParam0, int iParam1)
{
    l_U1516._fU708[uParam0] += iParam1;
    if (((GET_PLAYER_TEAM( sub_19026( uParam0 ) )) > -1) AND (sub_1248() == 3))
    {
        l_U1516._fU1048[GET_PLAYER_TEAM( sub_19026( uParam0 ) )] += iParam1;
        if ((l_U1516._fU1048[GET_PLAYER_TEAM( sub_19026( uParam0 ) )]) < 0)
        {
            l_U1516._fU1048[GET_PLAYER_TEAM( sub_19026( uParam0 ) )] = 0;
        }
    }
    if (l_U1516._fU708[uParam0] < 0)
    {
        l_U1516._fU708[uParam0] = 0;
    }
    return;
}

void sub_77191()
{
    int I;
    int iVar3;
    unknown uVar4;

    for ( I = 0; I < 12; I++ )
    {
        if (l_U1516._fU48[I]._fU0 > 1)
        {
            if (l_U1516._fU48[I]._fU0 < 4)
            {
                iVar3 = sub_77258( I );
                if (iVar3 == -1)
                {
                    if ((l_U1516._fU48[I]._fU8 == 3) AND (l_U1516._fU48[I]._fU4 == 1))
                    {
                        if (sub_80065())
                        {
                            l_U1516._fU48[I]._fU0 = 3;
                        }
                        else
                        {
                            l_U1516._fU48[I]._fU0 = 5;
                            l_U1516._fU48[I]._fU12 = -1;
                        }
                    }
                    else if (l_U1516._fU48[I]._fU8 == 4)
                    {
                        if (sub_80405( I ))
                        {
                            l_U1516._fU48[I]._fU0 = 6;
                        }
                        else
                        {
                            l_U1516._fU48[I]._fU0 = 3;
                        }
                    }
                    else
                    {
                        l_U1516._fU48[I]._fU0 = 3;
                    }
                }
                else if (iVar3 == -2)
                {
                    if (l_U1516._fU48[I]._fU0 != 5)
                    {
                        if (NOT (sub_80615( I )))
                        {
                            if (l_U1516._fU48[I]._fU12 > -1)
                            {
                                sub_76245( l_U1516._fU48[I]._fU12, l_U1516._fU48[I]._fU20 * -1 );
                            }
                        }
                        l_U1516._fU48[I]._fU0 = 5;
                    }
                }
                else if (l_U1516._fU48[I]._fU8 == 1)
                {
                    if (sub_80897( l_U1516._fU388[I], l_U1516._fU492, 8.00000000, 8.00000000, 3.00000000, 0 ))
                    {
                        if (sub_81160( I ))
                        {
                            l_U1516._fU48[I]._fU12 = iVar3;
                            l_U1516._fU48[I]._fU0 = 4;
                        }
                    }
                }
                else if ((l_U1516._fU48[I]._fU4 == 1) AND (l_U1516._fU48[I]._fU8 == 3))
                {
                    if (sub_80065())
                    {
                        if (sub_81562( l_U1516._fU388[I], ref uVar4 ))
                        {
                            l_U1516._fU48[I]._fU12 = iVar3;
                            l_U1516._fU48[I]._fU0 = 4;
                            if (l_U1516._fU16 != 2)
                            {
                                l_U1516._fU48[uVar4]._fU0 = 4;
                            }
                        }
                    }
                    else
                    {
                        l_U1516._fU48[I]._fU0 = 5;
                    }
                }
                else
                {
                    l_U1516._fU48[I]._fU12 = iVar3;
                    l_U1516._fU48[I]._fU0 = 4;
                };;;;
            }
        }
    }
    return;
}

int sub_77258(unknown uParam0)
{
    switch (l_U1516._fU48[uParam0]._fU4)
    {
        case 0:
        if (sub_33344( l_U1516._fU388[uParam0] ))
        {
            if (sub_38226( l_U1516._fU388[uParam0] ))
            {
                if (l_U1516._fU48[uParam0]._fU8 == 3)
                {
                    l_U1516._fU48[uParam0]._fU12 = sub_77402( l_U1516._fU388[uParam0] );
                }
            }
            return -2;
        }
        return -1;
        break;
        case 2:
        return sub_77459( uParam0 );
        break;
        case 1:
        if (sub_51864( l_U1516._fU48[uParam0]._fU24 ))
        {
            return sub_77622( uParam0 );
        }
        else
        {
            return sub_77748( uParam0 );
        }
        break;
        case 3:
        return sub_79822( uParam0 );
        break;
    }
    return -2;
}

void sub_77402(unknown uParam0)
{
    unknown uVar3;

    return GET_DESTROYER_OF_NETWORK_ID( uParam0, ref uVar3 );
}

int sub_77459(unknown uParam0)
{
    if (sub_33344( l_U1516._fU388[uParam0] ))
    {
        if (sub_38226( l_U1516._fU388[uParam0] ))
        {
            if ((sub_77402( l_U1516._fU388[uParam0] )) == -1)
            {
                return -2;
            }
            else
            {
                return sub_77402( l_U1516._fU388[uParam0] );
            }
        }
        else
        {
            return -2;
        }
    }
    return -1;
}

int sub_77622(unknown uParam0)
{
    int Result;

    for ( Result = 0; Result < 16; Result++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( Result ))
        {
            if (HAS_PLAYER_COLLECTED_PICKUP( Result, l_U1516._fU440[uParam0] ))
            {
                return Result;
            }
        }
    }
    if (DOES_PICKUP_EXIST( l_U1516._fU440[uParam0] ))
    {
        return -1;
    }
    return -2;
}

int sub_77748(unknown uParam0)
{
    int Result;

    if (sub_33344( l_U1516._fU388[uParam0] ))
    {
        if (sub_38226( l_U1516._fU388[uParam0] ))
        {
            if (sub_77816( l_U1516._fU388[uParam0] ))
            {
                if (l_U1516._fU48[uParam0]._fU8 == 2)
                {
                    if (l_U1516._fU48[uParam0]._fU12 > -1)
                    {
                        return l_U1516._fU48[uParam0]._fU12;
                    }
                }
            }
            else if ((sub_77402( l_U1516._fU388[uParam0] )) != -1)
            {
                l_U1516._fU48[uParam0]._fU12 = sub_77402( l_U1516._fU388[uParam0] );
            }
        }
        return -2;
    }
    else if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1516._fU388[uParam0] ))
    {
        if ((CHECK_STUCK_TIMER( sub_11665( l_U1516._fU388[uParam0] ), 0, 10000 )) || ((CHECK_STUCK_TIMER( sub_11665( l_U1516._fU388[uParam0] ), 1, 20000 )) || ((CHECK_STUCK_TIMER( sub_11665( l_U1516._fU388[uParam0] ), 2, 30000 )) || (CHECK_STUCK_TIMER( sub_11665( l_U1516._fU388[uParam0] ), 3, 40000 )))))
        {
            return -2;
        }
        if (sub_78320( l_U1516._fU388[uParam0], ref Result ))
        {
            if ((l_U1516._fU48[uParam0]._fU8 == 2) || (l_U1516._fU48[uParam0]._fU8 == 1))
            {
                l_U1516._fU48[uParam0]._fU12 = Result;
                l_U1516._fU48[uParam0]._fU16 = l_U2014;
                return -1;
            }
            else if (l_U1516._fU48[uParam0]._fU8 == 3)
            {
                l_U1516._fU48[uParam0]._fU12 = Result;
            }
            l_U1516._fU48[uParam0]._fU16 = l_U2014;
            return Result;;
        }
        else if (l_U1516._fU48[uParam0]._fU8 != 0)
        {
            if (l_U1516._fU48[uParam0]._fU16 > 0)
            {
                if (l_U1516._fU48[uParam0]._fU16 < (l_U2014 - 90000))
                {
                    l_U1516._fU48[uParam0]._fU12 = -1;
                    return -2;
                }
            }
        }
        if ((l_U1516._fU48[uParam0]._fU8 == 3) || (l_U1516._fU48[uParam0]._fU8 == 1))
        {
            return l_U1516._fU48[uParam0]._fU12;
        }
    }
    else if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1516._fU388[uParam0] ))
    {
        if (sub_78824( sub_11590( l_U1516._fU388[uParam0] ), ref Result ))
        {
            if (l_U1516._fU48[uParam0]._fU8 == 1)
            {
                l_U1516._fU48[uParam0]._fU12 = Result;
                l_U1516._fU48[uParam0]._fU16 = l_U2014;
            }
            else if ((l_U1516._fU48[uParam0]._fU8 == 3) || (l_U1516._fU48[uParam0]._fU8 == 2))
            {
                l_U1516._fU48[uParam0]._fU12 = Result;
                l_U1516._fU48[uParam0]._fU16 = l_U2014;
                return -1;
            }
            else if (l_U1516._fU48[uParam0]._fU8 == 0)
            {
                if (sub_79161( sub_11590( l_U1516._fU388[uParam0] ), sub_16771( Result ) ))
                {
                    return Result;
                }
            };;;
        }
        else if (l_U1516._fU48[uParam0]._fU8 != 0)
        {
            if (l_U1516._fU48[uParam0]._fU16 > 0)
            {
                if (l_U1516._fU48[uParam0]._fU16 < (l_U2014 - 90000))
                {
                    l_U1516._fU48[uParam0]._fU12 = -1;
                    return -2;
                }
            }
        }
        if ((l_U1516._fU48[uParam0]._fU8 == 3) || (l_U1516._fU48[uParam0]._fU8 == 1))
        {
            return l_U1516._fU48[uParam0]._fU12;
        }
    }
    else if (DOES_OBJECT_EXIST_WITH_NETWORK_ID( l_U1516._fU388[uParam0] ))
    {
        for ( Result = 0; Result < 16; Result++ )
        {
            if (IS_NETWORK_PLAYER_ACTIVE( Result ))
            {
                if (NOT (IS_CHAR_DEAD( sub_16771( Result ) )))
                {
                    if (sub_9877( sub_16771( Result ), sub_9848( l_U1516._fU388[uParam0] ) ))
                    {
                        l_U1516._fU48[uParam0]._fU16 = l_U2014;
                        if ((l_U1516._fU48[uParam0]._fU8 == 2) || ((l_U1516._fU48[uParam0]._fU8 == 3) || (l_U1516._fU48[uParam0]._fU8 == 1)))
                        {
                            l_U1516._fU48[uParam0]._fU12 = Result;
                            return -1;
                        }
                        else
                        {
                            return Result;
                        }
                    }
                }
            }
        }
        if (l_U1516._fU48[uParam0]._fU16 > 0)
        {
            if (l_U1516._fU48[uParam0]._fU16 < (l_U2014 - 90000))
            {
                l_U1516._fU48[uParam0]._fU12 = -1;
                return -2;
            }
        }
        if ((l_U1516._fU48[uParam0]._fU8 == 3) || (l_U1516._fU48[uParam0]._fU8 == 1))
        {
            return l_U1516._fU48[uParam0]._fU12;
        }
    }
    else
    {
        l_U1516._fU48[uParam0]._fU12 = -1;
        return -2;
    };;;;
    return -1;
}

int sub_77816(unknown uParam0)
{
    if (DOES_PED_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        if (IS_CHAR_IN_WATER( sub_11590( uParam0 ) ))
        {
            return 1;
        }
    }
    else if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        if (IS_CAR_IN_WATER( sub_11665( uParam0 ) ))
        {
            return 1;
        }
    }
    else if (DOES_OBJECT_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        if (IS_OBJECT_IN_WATER( sub_9848( uParam0 ) ))
        {
            return 1;
        }
        else if ((GET_CAR_OBJECT_IS_ATTACHED_TO( sub_9848( uParam0 ) )) != nil)
        {
            if (IS_CAR_IN_WATER( GET_CAR_OBJECT_IS_ATTACHED_TO( sub_9848( uParam0 ) ) ))
            {
                return 1;
            }
        }
    };;;
    return 0;
}

int sub_78320(unknown uParam0, unknown uParam1)
{
    int I;

    if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        for ( I = 0; I < 16; I++ )
        {
            if (IS_NETWORK_PLAYER_ACTIVE( I ))
            {
                if (NOT (IS_CHAR_DEAD( sub_16771( I ) )))
                {
                    if (IS_CHAR_IN_CAR( sub_16771( I ), sub_11665( uParam0 ) ))
                    {
                        if (sub_9928( sub_16771( I ) ))
                        {
                            (uParam1^) = I;
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_78824(unknown uParam0, unknown uParam1)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (DOES_GROUP_EXIST( sub_78861( I ) ))
            {
                if (IS_GROUP_MEMBER( uParam0, sub_78861( I ) ))
                {
                    (uParam1^) = I;
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_78861(unknown uParam0)
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( uParam0 ), ref Result );
    return Result;
}

int sub_79161(unknown uParam0, unknown uParam1)
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

int sub_79822(unknown uParam0)
{
    if (sub_38226( l_U1516._fU388[uParam0] ))
    {
        if (NOT (IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID( l_U1516._fU388[uParam0] )))
        {
            ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID( l_U1516._fU388[uParam0], 1 );
        }
        if (sub_33344( l_U1516._fU388[uParam0] ))
        {
            if ((sub_77402( l_U1516._fU388[uParam0] )) == -1)
            {
                return -2;
            }
            else
            {
                return sub_77402( l_U1516._fU388[uParam0] );
            }
        }
    }
    else
    {
        return -2;
    }
    return -1;
}

int sub_80065()
{
    int I;

    for ( I = 0; I < 12; I++ )
    {
        if (sub_80099( l_U1516._fU388[I] ))
        {
            if ((l_U1516._fU48[I]._fU8 == 3) AND (l_U1516._fU48[I]._fU4 == 0))
            {
                if ((l_U1516._fU48[I]._fU0 == 2) || (l_U1516._fU48[I]._fU0 == 3))
                {
                    return 1;
                }
                if (((l_U1516._fU48[I]._fU0 == 6) || (l_U1516._fU48[I]._fU0 == 4)) AND (l_U1516._fU16 == 0))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_80099(unknown uParam0)
{
    if (DOES_PED_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        if (NOT (IS_CHAR_DEAD( sub_11590( uParam0 ) )))
        {
            return 1;
        }
    }
    return 0;
}

int sub_80405(int iParam0)
{
    int I;

    for ( I = 0; I < 12; I++ )
    {
        if (I != iParam0)
        {
            if (l_U1516._fU388[I] == l_U1516._fU388[iParam0])
            {
                if (l_U1516._fU48[I]._fU0 == 6)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_80615(int iParam0)
{
    int I;

    if (l_U1516._fU48[iParam0]._fU8 == 4)
    {
        return 1;
    }
    for ( I = 0; I < 12; I++ )
    {
        if (I != iParam0)
        {
            if (l_U1516._fU388[I] == l_U1516._fU388[iParam0])
            {
                if (l_U1516._fU48[I]._fU8 == 4)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_80897(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    if (NOT (sub_36845( uParam0 )))
    {
        if (LOCATE_CAR_3D( sub_11665( uParam0 ), uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam4._fU0, uParam4._fU4, uParam4._fU8, uParam7 ))
        {
            return 1;
        }
    }
    if (NOT (sub_80970( uParam0 )))
    {
        if (LOCATE_CHAR_ON_FOOT_3D( sub_11590( uParam0 ), uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam4._fU0, uParam4._fU4, uParam4._fU8, uParam7 ))
        {
            return 1;
        }
    }
    if (DOES_OBJECT_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        if (LOCATE_OBJECT_3D( sub_9848( uParam0 ), uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam4._fU0, uParam4._fU4, uParam4._fU8, uParam7 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_80970(unknown uParam0)
{
    if (DOES_PED_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        if (NOT (IS_CHAR_DEAD( sub_11590( uParam0 ) )))
        {
            return 0;
        }
    }
    return 1;
}

int sub_81160(unknown uParam0)
{
    unknown uVar3;

    if (DOES_OBJECT_EXIST_WITH_NETWORK_ID( l_U1516._fU388[uParam0] ))
    {
        if (NOT (IS_OBJECT_ATTACHED( sub_9848( l_U1516._fU388[uParam0] ) )))
        {
            return 1;
        }
    }
    if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1516._fU388[uParam0] ))
    {
        if (NOT (sub_81268( l_U1516._fU388[uParam0], ref uVar3 )))
        {
            return 1;
        }
    }
    if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1516._fU388[uParam0] ))
    {
        if (IS_CHAR_ON_FOOT( sub_11590( l_U1516._fU388[uParam0] ) ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_81268(unknown uParam0, unknown uParam1)
{
    int I;
    unknown uVar5;

    if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        GET_VEHICLE_FROM_NETWORK_ID( uParam0, ref uVar5 );
        for ( I = 0; I < 16; I++ )
        {
            if (IS_NETWORK_PLAYER_ACTIVE( I ))
            {
                if (IS_CHAR_IN_CAR( sub_16771( I ), uVar5 ))
                {
                    (uParam1^) = I;
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_81562(unknown uParam0, unknown uParam1)
{
    int I;

    if (DOES_OBJECT_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        if (IS_OBJECT_ATTACHED( sub_9848( uParam0 ) ))
        {
            for ( I = 0; I < 12; I++ )
            {
                if (sub_80099( l_U1516._fU388[I] ))
                {
                    if ((l_U1516._fU48[I]._fU0 == 3) AND ((l_U1516._fU48[I]._fU8 == 3) AND (l_U1516._fU48[I]._fU4 == 0)))
                    {
                        if (sub_9877( sub_11590( l_U1516._fU388[I] ), sub_9848( uParam0 ) ))
                        {
                            (uParam1^) = I;
                            return 1;
                        }
                    }
                }
            }
        }
    }
    else if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        for ( I = 0; I < 12; I++ )
        {
            if (sub_80099( l_U1516._fU388[I] ))
            {
                if ((l_U1516._fU48[I]._fU0 == 3) AND ((l_U1516._fU48[I]._fU8 == 3) AND (l_U1516._fU48[I]._fU4 == 0)))
                {
                    if (sub_9928( sub_11590( l_U1516._fU388[I] ) ))
                    {
                        if ((sub_81910( sub_11590( l_U1516._fU388[I] ) )) == (sub_11665( uParam0 )))
                        {
                            (uParam1^) = I;
                            return 1;
                        }
                    }
                }
            }
        }
    }
    else if (DOES_PED_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        for ( I = 0; I < 12; I++ )
        {
            if (sub_80099( l_U1516._fU388[I] ))
            {
                if ((l_U1516._fU48[I]._fU0 == 3) AND ((l_U1516._fU48[I]._fU8 == 3) AND (l_U1516._fU48[I]._fU4 == 0)))
                {
                    if (sub_79161( sub_11590( l_U1516._fU388[I] ), sub_11590( uParam0 ) ))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_11590( l_U1516._fU388[I] ), sub_11590( uParam0 ), 8.00000000, 8.00000000, 2.00000000, 0 ))
                        {
                            (uParam1^) = I;
                            return 1;
                        }
                    }
                }
            }
        }
    };;;
    return 0;
}

void sub_81910(unknown uParam0)
{
    unknown Result;

    if (IS_CHAR_IN_ANY_CAR( uParam0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref Result );
        return Result;
    }
    return nil;
}

int sub_82379()
{
    int I;

    if (sub_10481() < 2)
    {
        return 1;
    }
    if (sub_82404())
    {
        if (sub_1248() == 3)
        {
            for ( I = 0; I < 8; I++ )
            {
                if ((sub_82476( I )) > 0)
                {
                    if (l_U1516._fU1048[I] >= sub_82580())
                    {
                        return 1;
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
                    if (l_U1516._fU708[I] >= sub_82580())
                    {
                        return 1;
                    }
                }
            }
        }
    }
    else if (l_U1516._fU4 < l_U2014)
    {
        return 1;
    }
    if (sub_1248() == 3)
    {
        if (sub_11170() < 2)
        {
            return 1;
        }
    }
    return 0;
}

int sub_82404()
{
    if (l_U1516._fU620[1] > 4)
    {
        return 1;
    }
    return 0;
}

void sub_82476(int iParam0)
{
    int I;
    int Result;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if ((GET_PLAYER_TEAM( sub_19026( I ) )) == iParam0)
            {
                Result++;
            }
        }
    }
    return Result;
}

int sub_82580()
{
    switch (l_U1516._fU620[1])
    {
        case 5: return 2500;
        case 6: return 5000;
        case 7: return 7500;
        case 8: return 10000;
        case 9: return 15000;
        case 10: return 20000;
        case 11: return 25000;
        case 12: return 50000;
    }
    return 5000;
}

void sub_83076()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1917[I]._fU20;
    }
    sub_83138( ref l_U1516._fU1588, ref uVar3 );
    return;
}

void sub_83138(unknown uParam0, unknown uParam1)
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
    if ((iVar5[iVar23] > 0) AND (iVar5[iVar23] > (sub_10481() / 2)))
    {
        (uParam0^) = iVar23;
    }
    else
    {
        (uParam0^) = -1;
    }
    return;
}

int sub_83344()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if ((l_U1917[I]._fU0 == 3) || (l_U1917[I]._fU0 == 2))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_83492()
{
    int I;
    int iVar3;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            sub_76245( I, GET_CHAR_MONEY( sub_16771( I ) ) );
            SET_CHAR_MONEY( sub_16771( I ), 0 );
            if (NETWORK_PLAYER_HAS_DIED_RECENTLY( I ))
            {
                l_U1516._fU980[I]++;
                if (I == (FIND_NETWORK_KILLER_OF_PLAYER( I )))
                {
                    sub_76245( I, 65436 );
                }
                else if (((GET_PLAYER_TEAM( sub_19026( I ) )) == (GET_PLAYER_TEAM( sub_19026( FIND_NETWORK_KILLER_OF_PLAYER( I ) ) ))) AND (sub_1248() == 3))
                {
                    sub_76245( FIND_NETWORK_KILLER_OF_PLAYER( I ), 65436 );
                    l_U1516._fU912[FIND_NETWORK_KILLER_OF_PLAYER( I )]++;
                }
                else
                {
                    sub_76245( FIND_NETWORK_KILLER_OF_PLAYER( I ), 100 );
                    l_U1516._fU844[FIND_NETWORK_KILLER_OF_PLAYER( I )]++;
                }
            }
        }
        else if (PLAYER_WANTS_TO_JOIN_NETWORK_GAME( I ))
        {
            if (sub_1248() == 3)
            {
                iVar3 = sub_83840();
            }
            else
            {
                iVar3 = -1;
            }
            l_U1516._fU708[I] = 0;
            TELL_NET_PLAYER_TO_START_PLAYING( I, iVar3 );
        }
    }
    return;
}

int sub_83840()
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
        return sub_12313( 0, 2 );
    }
    else if (iVar5 == 1)
    {
        if ((GET_NO_OF_PLAYERS_IN_TEAM( -1 )) > (GET_NO_OF_PLAYERS_IN_TEAM( iVar6 )))
        {
            return sub_12313( 0, 2 );
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
            if ((I == 0) || ((GET_NO_OF_PLAYERS_IN_TEAM( Result )) > (GET_NO_OF_PLAYERS_IN_TEAM( I ))))
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
        return sub_12313( 0, 8 );
    }
    else
    {
        iVar4 = sub_12313( 0, iVar5 );
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

void sub_84417()
{
    PRINT_BIG( "STARTINGGAME", 50, 2 );
    if (IS_PAUSE_MENU_ACTIVE())
    {
        DEACTIVATE_FRONTEND();
    }
    l_U1201 = 1;
    return;
}

void sub_84485()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1917[I]._fU12;
    }
    if (sub_1248() == 3)
    {
        sub_84585( 10, ref uVar3, ref l_U1516._fU620, ref l_U1516._fU1588, ref l_U1516._fU1600, l_U1516._fU1596 );
    }
    else
    {
        sub_84585( 9, ref uVar3, ref l_U1516._fU620, ref l_U1516._fU1588, ref l_U1516._fU1600, l_U1516._fU1596 );
    }
    l_U1917[GET_PLAYER_ID()]._fU12 = uVar3[GET_PLAYER_ID()];
    return;
}

void sub_84585(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
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
    if (l_U901 == -1)
    {
        STOP_STREAM();
        l_U901 = 0;
    }
    if (l_U1274)
    {
        SET_LOBBY_MUTE_OVERRIDE( 0 );
        l_U1274 = 0;
    }
    if (l_U875)
    {
        sub_84664();
        l_U1189++;
    }
    l_U878 = 0;
    l_U875 = 0;
    l_U1275 = 0;
    if (GET_HOST_ID() != -1)
    {
        if ((((uParam1^)[GET_PLAYER_ID()] > -5) AND (((uParam1^)[GET_HOST_ID()] < -4) AND (GET_HOST_ID() != GET_PLAYER_ID()))) || ((uParam1^)[GET_PLAYER_ID()] == -5))
        {
            if ((uParam1^)[GET_PLAYER_ID()] != 2)
            {
                l_U1001 = sub_84843( sub_1248() );
                (uParam1^)[GET_PLAYER_ID()] = -7;
                if (NOT sub_85056())
                {
                    if (sub_2145())
                    {
                        l_U1279 = 0;
                        if ((uParam3^) != -1)
                        {
                            if ((GET_NUMBER_OF_PLAYERS() <= 4) || (NOT (sub_85120( sub_84843( (uParam3^) ) ))))
                            {
                                l_U1001 = sub_84843( (uParam3^) );
                                (uParam1^)[GET_PLAYER_ID()] = -8;
                                l_U1279 = 1;
                            }
                        }
                        sub_2330();
                    }
                }
            }
        }
    }
    if (sub_2145())
    {
        sub_85228( uParam1, uParam4 );
        sub_2330();
    }
    if (NOT (IS_FONT_LOADED( 6 )))
    {
        LOAD_TEXT_FONT( 6 );
    }
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    if (NOT l_U1205)
    {
        PAUSE_GAME();
        l_U1205 = 1;
    }
    sub_7249();
    DISABLE_PAUSE_MENU( 1 );
    HIDE_HUD_AND_RADAR_THIS_FRAME();
    if (l_U1201)
    {
        if (NOT IS_SCREEN_FADED_OUT())
        {
            sub_85484( 0 );
        }
        l_U1201 = 0;
        return;
    }
    else if (IS_SCREEN_FADED_OUT())
    {
        sub_85583( 0 );
    }
    if (NOT IS_MOBILE_PHONE_RADIO_ACTIVE())
    {
        l_U1276._fU0 = 18;
        RESTORE_SCRIPT_ARRAY_FROM_SCRATCHPAD( ref l_U1276, 1, 99, 1 );
        CLEAR_SCRIPT_ARRAY_FROM_SCRATCHPAD( 1 );
        SAVE_SCRIPT_ARRAY_IN_SCRATCHPAD( ref l_U1276, 1, 99, 1 );
        if (l_U1276._fU0 != 18)
        {
            SET_MOBILE_PHONE_RADIO_STATE( 1 );
            RETUNE_RADIO_TO_STATION_INDEX( l_U1276._fU0 );
            l_U1002[sub_85738( 15 )]._fU20 = l_U1276._fU0;
        }
        else if ((l_U1002[sub_85738( 15 )]._fU20) != 18)
        {
            l_U1002[sub_85738( 15 )]._fU20 = 18;
        }
    }
    ENABLE_FRONTEND_RADIO();
    if (IS_GAME_IN_CONTROL_OF_MUSIC())
    {
        l_U1002[sub_85738( 15 )]._fU24 = 19;
    }
    else
    {
        l_U1002[sub_85738( 15 )]._fU24 = 0;
    }
    if (NOT l_U997)
    {
        sub_85922();
        l_U997 = 1;
    }
    if (iParam0 == 10)
    {
        if (NOT l_U998)
        {
            sub_86077();
            l_U998 = 1;
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
        if (l_U1002[I]._fU16 == 0)
        {
            l_U1002[I]._fU20 = 0;
        }
        else
        {
            J++;
            if (l_U1002[I]._fU16 < 12)
            {
                l_U1002[I]._fU20 = (uParam2^)[I];
            }
            else if (l_U1002[I]._fU16 == 17)
            {
                if (sub_10481() < 3)
                {
                    l_U1002[I]._fU24 = 0;
                    l_U1002[I]._fU20 = GET_PLAYER_ID();
                }
                else if (l_U1002[I]._fU24 == 0)
                {
                    l_U1002[I]._fU24 = 16;
                    l_U1002[I]._fU20 = GET_PLAYER_ID();
                }
            }
            if (l_U1002[I]._fU20 >= l_U1002[I]._fU24)
            {
                if (l_U1002[I]._fU24 != 0)
                {
                    l_U1002[I]._fU20 = l_U1002[I]._fU28;
                }
            }
        }
    }
    if (NOT l_U1209)
    {
        if (l_U1204)
        {
            USE_MASK( 1 );
        }
    }
    if (NOT IS_PAUSE_MENU_ACTIVE())
    {
        if (iParam5 != 0)
        {
            sub_86558( iParam5, 1 );
            bVar31 = true;
        }
        else
        {
            l_U1196 = 10000;
        }
        if (NOT l_U1209)
        {
            if ((IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() )) AND ((uParam1^)[GET_PLAYER_ID()] == 0))
            {
                if (sub_87562())
                {
                    USE_MASK( 0 );
                    l_U1204 = 0;
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    (uParam1^)[GET_PLAYER_ID()] = -3;
                }
                else if ((sub_87881()) AND (sub_87763()))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    ACTIVATE_NETWORK_SETTINGS_MENU();
                }
                else if (sub_88063())
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    DISPLAY_FRONTEND_MAP_BLIPS( 0 );
                    ACTIVATE_FRONTEND();
                }
                else if (sub_88219())
                {
                    if ((l_U1002[l_U1190]._fU20 != GET_PLAYER_ID()) AND ((l_U1171 != l_U1002[l_U1190]._fU20) AND (l_U1002[l_U1190]._fU16 == 17)))
                    {
                        l_U1171 = l_U1002[l_U1190]._fU20;
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    }
                    else
                    {
                        GET_NETWORK_TIMER( ref l_U1194 );
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
                            (uParam1^)[GET_PLAYER_ID()] = 1;
                        }
                    }
                }
                else if (((sub_88765()) || (NOT NETWORK_IS_TVT())) AND (sub_88627()))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    if (NETWORK_IS_TVT())
                    {
                        (uParam1^)[GET_PLAYER_ID()] = -1;
                    }
                    else
                    {
                        USE_MASK( 0 );
                        l_U1204 = 0;
                        l_U1001 = sub_84843( sub_1248() );
                        (uParam1^)[GET_PLAYER_ID()] = -4;
                    }
                }
                else if ((((NOT N_604003528()) AND ((NETWORK_GET_FRIEND_COUNT() > 0) AND (NOT NETWORK_IS_TVT()))) || ((N_604003528()) AND (NETWORK_GET_NUM_PLAYERS_MET() > 0))) AND (sub_88941()))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1209 = 1;
                }
                else if (sub_89167())
                {
                    if (sub_89282( ref l_U1190, J, 0 ))
                    {
                        if (NOT sub_18503())
                        {
                            if (((l_U1190 < 4) AND (sub_89850())) || (l_U1190 == 0))
                            {
                                l_U1002[sub_85738( 16 )]._fU20 = 0;
                            }
                        }
                        if (l_U1190 == (l_U1191 + 6))
                        {
                            l_U1191++;
                        }
                        else if (l_U1190 < l_U1191)
                        {
                            l_U1191 = l_U1190;
                        }
                        else if (l_U1190 > (l_U1191 + 6))
                        {
                            l_U1191 = l_U1190;
                            if (l_U1191 > (J - 6))
                            {
                                l_U1191 = J - 6;
                            }
                        };;;
                    }
                    if (l_U1002[l_U1190]._fU16 == 12)
                    {
                        if (sub_90064())
                        {
                            if (sub_90222())
                            {
                                if ((GET_PLAYER_TEAM( sub_90115() )) > -1)
                                {
                                    if (sub_11073())
                                    {
                                        uVar15 = GET_PLAYER_TEAM( sub_90115() );
                                        sub_90486( ref uVar15, 8 );
                                        SET_PLAYER_TEAM( sub_90115(), uVar15 );
                                    }
                                    else if ((GET_PLAYER_TEAM( sub_90115() )) == 0)
                                    {
                                        SET_PLAYER_TEAM( sub_90115(), 1 );
                                    }
                                    else if ((GET_PLAYER_TEAM( sub_90115() )) == 1)
                                    {
                                        SET_PLAYER_TEAM( sub_90115(), 0 );
                                    };;;
                                }
                            }
                            else if (sub_90628())
                            {
                                if (sub_11073())
                                {
                                    uVar15 = GET_PLAYER_TEAM( sub_90115() );
                                    sub_19733( ref uVar15, 8 );
                                    SET_PLAYER_TEAM( sub_90115(), uVar15 );
                                }
                                else if ((GET_PLAYER_TEAM( sub_90115() )) == 0)
                                {
                                    SET_PLAYER_TEAM( sub_90115(), 1 );
                                }
                                else if ((GET_PLAYER_TEAM( sub_90115() )) == 1)
                                {
                                    SET_PLAYER_TEAM( sub_90115(), 0 );
                                };;;
                            }
                        }
                    }
                    else if (l_U1002[l_U1190]._fU16 == 17)
                    {
                        if (sub_10481() < 3)
                        {
                            l_U1002[l_U1190]._fU24 = 0;
                            l_U1002[l_U1190]._fU20 = GET_PLAYER_ID();
                        }
                        else if (l_U1002[l_U1190]._fU20 != -1)
                        {
                            if (l_U1002[l_U1190]._fU20 != GET_PLAYER_ID())
                            {
                                if (NOT (IS_NETWORK_PLAYER_ACTIVE( l_U1002[l_U1190]._fU20 )))
                                {
                                    l_U1002[l_U1190]._fU20 = GET_PLAYER_ID();
                                }
                            }
                        }
                        if (sub_90222())
                        {
                            iVar16 = l_U1002[l_U1190]._fU20;
                            sub_19733( ref iVar16, 16 );
                            while (NOT (IS_NETWORK_PLAYER_ACTIVE( iVar16 )))
                            {
                                sub_19733( ref iVar16, 16 );
                            }
                            l_U1002[l_U1190]._fU20 = iVar16;
                            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
                        }
                        else if (sub_90628())
                        {
                            iVar16 = l_U1002[l_U1190]._fU20;
                            sub_90486( ref iVar16, 16 );
                            while (NOT (IS_NETWORK_PLAYER_ACTIVE( iVar16 )))
                            {
                                sub_90486( ref iVar16, 16 );
                            }
                            l_U1002[l_U1190]._fU20 = iVar16;
                            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
                        }
                        if (l_U1002[l_U1190]._fU20 == GET_PLAYER_ID())
                        {
                            l_U1171 = GET_PLAYER_ID();
                        }
                    }
                    else if ((l_U1002[l_U1190]._fU16 >= 12) || (IS_THIS_MACHINE_THE_SERVER()))
                    {
                        if (l_U1002[l_U1190]._fU20 < l_U1002[l_U1190]._fU24)
                        {
                            if (sub_91542( ref l_U1002[l_U1190]._fU20, l_U1002[l_U1190]._fU24 ))
                            {
                                if (l_U1002[l_U1190]._fU16 == 15)
                                {
                                    sub_91920( l_U1002[l_U1190]._fU20 );
                                }
                                PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
                            }
                        }
                    };;;
                }
                else if (J > 6)
                {
                    sub_89282( ref l_U1191, (J - 6) + 1, 0 );
                };;;;;;;;
                if ((uParam1^)[GET_PLAYER_ID()] != -4)
                {
                    sub_92173( 0 );
                    INIT_FRONTEND_HELPER_TEXT();
                    DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
                    if ((l_U1002[l_U1190]._fU20 != GET_PLAYER_ID()) AND ((l_U1171 != l_U1002[l_U1190]._fU20) AND (l_U1002[l_U1190]._fU16 == 17)))
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
                    if (sub_87763())
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
                    if (sub_93452( l_U1190 ))
                    {
                        DRAW_FRONTEND_HELPER_TEXT( "SETTINGS", "PAD_DPAD_ALL", 0 );
                    }
                    else
                    {
                        DRAW_FRONTEND_HELPER_TEXT( "SETTINGS", "PAD_DPAD_UPDOWN", 0 );
                    }
                }
            }
            else if ((((uParam1^)[GET_PLAYER_ID()] != -3) AND (NOT (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() )))) || ((uParam1^)[GET_PLAYER_ID()] == 2))
            {
                sub_92173( 0 );
                INIT_FRONTEND_HELPER_TEXT();
                DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
                if (sub_87562())
                {
                    (uParam1^)[GET_PLAYER_ID()] = -3;
                }
            }
            else if ((uParam1^)[GET_PLAYER_ID()] == 1)
            {
                l_U1002[sub_85738( 16 )]._fU20 = 1;
                sub_92173( 0 );
                if (NOT l_U1201)
                {
                    if (J > 6)
                    {
                        if (sub_89282( ref l_U1191, (J - 6) + 1, 0 ))
                        {
                            l_U1190 = l_U1191;
                        }
                    }
                    GET_NETWORK_TIMER( ref iVar26 );
                    if ((l_U1194 < (iVar26 + 500)) AND (sub_87562()))
                    {
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        l_U1002[sub_85738( 16 )]._fU20 = 0;
                        l_U1206 = 1;
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                    else if ((N_604003528()) AND ((NETWORK_GET_NUM_PLAYERS_MET() > 0) AND (sub_88941())))
                    {
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        l_U1209 = 1;
                    }
                    else
                    {
                        sub_86594( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                        GET_FRONTEND_DESIGN_VALUE( 23, ref uVar34, ref fVar35 );
                        GET_FRONTEND_DESIGN_VALUE( 24, ref fVar36, ref fVar33 );
                        GET_HUD_COLOUR( 49, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                        if (NOT (sub_10901( ref bVar28 )))
                        {
                            if (bVar31)
                            {
                                if (NOT bVar32)
                                {
                                    if (bVar28)
                                    {
                                        sub_92615( "NEEDMORETEAMS", uVar34, fVar35, fVar36 + 0.04050000, fVar33, 255, 255, 255, 255, 2 );
                                    }
                                    else
                                    {
                                        sub_92615( "NEEDMOREPLAYERS", uVar34, fVar35, fVar36 + 0.04050000, fVar33, 255, 255, 255, 255, 2 );
                                    }
                                    bVar32 = true;
                                }
                            }
                            else if (bVar28)
                            {
                                sub_92615( "NEEDMORETEAMS", uVar34, fVar35, fVar36, fVar33, 255, 255, 255, 255, 2 );
                            }
                            else
                            {
                                sub_92615( "NEEDMOREPLAYERS", uVar34, fVar35, fVar36, fVar33, 255, 255, 255, 255, 2 );
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
                if (sub_87562())
                {
                    sub_92173( 1 );
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1206 = 1;
                    (uParam1^)[GET_PLAYER_ID()] = 0;
                }
                else if (sub_88219())
                {
                    sub_92184( 1 );
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1206 = 1;
                    (uParam1^)[GET_PLAYER_ID()] = -2;
                }
                else
                {
                    sub_89282( ref l_U1001, 14, 0 );
                }
            }
            else if (((uParam1^)[GET_PLAYER_ID()] == -8) || ((uParam1^)[GET_PLAYER_ID()] == -7))
            {
                if ((NOT sub_85056()) AND ((NOT NETWORK_IS_TVT()) AND (l_U1278)))
                {
                    if (sub_10481() < 3)
                    {
                        l_U1002[sub_85738( 17 )]._fU20 = GET_PLAYER_ID();
                        l_U1278 = 0;
                    }
                    else if ((l_U1002[sub_85738( 17 )]._fU20) != -1)
                    {
                        if ((l_U1002[sub_85738( 17 )]._fU20) != GET_PLAYER_ID())
                        {
                            if (NOT (IS_NETWORK_PLAYER_ACTIVE( l_U1002[sub_85738( 17 )]._fU20 )))
                            {
                                l_U1002[sub_85738( 17 )]._fU20 = GET_PLAYER_ID();
                            }
                        }
                    }
                    if (sub_87562())
                    {
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        l_U1278 = 0;
                    }
                    else if (sub_90222())
                    {
                        iVar16 = l_U1002[sub_85738( 17 )]._fU20;
                        sub_19733( ref iVar16, 16 );
                        while (NOT (IS_NETWORK_PLAYER_ACTIVE( iVar16 )))
                        {
                            sub_19733( ref iVar16, 16 );
                        }
                        l_U1002[sub_85738( 17 )]._fU20 = iVar16;
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
                    }
                    else if (sub_90628())
                    {
                        iVar16 = l_U1002[sub_85738( 17 )]._fU20;
                        sub_90486( ref iVar16, 16 );
                        while (NOT (IS_NETWORK_PLAYER_ACTIVE( iVar16 )))
                        {
                            sub_90486( ref iVar16, 16 );
                        }
                        l_U1002[sub_85738( 17 )]._fU20 = iVar16;
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_SERVER_OPTION_CHANGE" );
                    }
                    else if (sub_88219())
                    {
                        if (((l_U1002[sub_85738( 17 )]._fU20) != GET_PLAYER_ID()) AND (l_U1171 != (l_U1002[sub_85738( 17 )]._fU20)))
                        {
                            l_U1171 = l_U1002[sub_85738( 17 )]._fU20;
                            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        }
                    };;;;
                    if ((l_U1002[sub_85738( 17 )]._fU20) == GET_PLAYER_ID())
                    {
                        l_U1171 = GET_PLAYER_ID();
                    }
                }
                else if (sub_87562())
                {
                    sub_92184( 1 );
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1206 = 1;
                    if ((NOT l_U1279) AND (((uParam1^)[GET_PLAYER_ID()] == -8) AND (IS_THIS_MACHINE_THE_SERVER())))
                    {
                        (uParam1^)[GET_PLAYER_ID()] = -7;
                    }
                    else
                    {
                        (uParam1^)[GET_PLAYER_ID()] = -6;
                    }
                }
                else if ((NOT sub_85056()) AND ((NOT NETWORK_IS_TVT()) AND ((sub_10481() > 2) AND (sub_87881()))))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1278 = 1;
                }
                else if ((NOT sub_85056()) AND (IS_THIS_MACHINE_THE_SERVER()))
                {
                    if ((uParam1^)[GET_PLAYER_ID()] == -7)
                    {
                        if (sub_88219())
                        {
                            if (NOT l_U1279)
                            {
                                if ((GET_NUMBER_OF_PLAYERS() <= 4) || (NOT (sub_85120( l_U1001 ))))
                                {
                                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                                    (uParam1^)[GET_PLAYER_ID()] = -8;
                                }
                            }
                        }
                        else if (l_U1279)
                        {
                            (uParam1^)[GET_PLAYER_ID()] = -8;
                        }
                        else if (sub_95945( ref l_U1001, 14 ))
                        {
                            if (GET_NUMBER_OF_PLAYERS() > 4)
                            {
                                while (sub_85120( l_U1001 ))
                                {
                                    l_U1001--;
                                }
                            }
                        }
                        else if (sub_96288( ref l_U1001, 14 ))
                        {
                            if (GET_NUMBER_OF_PLAYERS() > 4)
                            {
                                while (sub_85120( l_U1001 ))
                                {
                                    l_U1001++;
                                }
                            }
                        }
                        (uParam3^) = sub_96630( l_U1001 );;;
                    }
                    else if ((uParam1^)[GET_PLAYER_ID()] == -8)
                    {
                        if ((GET_NUMBER_OF_PLAYERS() > 4) AND (sub_85120( l_U1001 )))
                        {
                            (uParam1^)[GET_PLAYER_ID()] = -7;
                        }
                    }
                }
                else if (sub_85056())
                {
                    if (sub_88219())
                    {
                        if (NOT NETWORK_LEAVE_GAME_PENDING())
                        {
                            uVar38._fU0[0] = sub_96630( l_U1001 );
                            if (((sub_96630( l_U1001 )) != 16) AND (sub_85056()))
                            {
                                uVar38._fU0[1] = 1;
                            }
                            if (sub_85120( l_U1001 ))
                            {
                                uVar38._fU0[2] = 4;
                            }
                            else
                            {
                                uVar38._fU0[2] = 16;
                            }
                            switch (uVar38._fU0[0])
                            {
                                case 10:
                                case 12:
                                uVar38._fU0[5] = 2;
                                break;
                                case 1:
                                case 3:
                                case 4:
                                uVar38._fU0[5] = 8;
                                break;
                            }
                            NETWORK_STORE_GAME_CONFIG( ref uVar38 );
                            sub_97124();
                        }
                    }
                    else
                    {
                        sub_89282( ref l_U1001, 14, 0 );
                    }
                }
                else if ((uParam3^) == -1)
                {
                    l_U1001 = sub_84843( sub_1248() );
                }
                else
                {
                    l_U1001 = sub_84843( (uParam3^) );
                };;;;;;
                if (GET_HOST_ID() > -1)
                {
                    if ((uParam1^)[GET_HOST_ID()] > -5)
                    {
                        sub_92184( 1 );
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                }
            }
            else if (((uParam1^)[GET_PLAYER_ID()] == -1) || (((uParam1^)[GET_PLAYER_ID()] == -2) || (((uParam1^)[GET_PLAYER_ID()] == -6) || ((uParam1^)[GET_PLAYER_ID()] == -3))))
            {
                if (sub_87562())
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    l_U1206 = 1;
                    if ((uParam1^)[GET_PLAYER_ID()] == -6)
                    {
                        sub_92184( 1 );
                        (uParam1^)[GET_PLAYER_ID()] = -7;
                    }
                    else if ((uParam1^)[GET_PLAYER_ID()] == -2)
                    {
                        sub_92184( 1 );
                        (uParam1^)[GET_PLAYER_ID()] = -4;
                    }
                    else
                    {
                        sub_92173( 1 );
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                }
                else if (sub_88219())
                {
                    if (NOT NETWORK_LEAVE_GAME_PENDING())
                    {
                        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                        UNPAUSE_GAME();
                        if (NOT IS_SCREEN_FADED_OUT())
                        {
                            sub_85484( 0 );
                        }
                        if ((uParam1^)[GET_PLAYER_ID()] == -1)
                        {
                            if (NETWORK_IS_RENDEZVOUS_HOST())
                            {
                                sub_97649();
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
                                uVar38._fU0[0] = sub_96630( l_U1001 );
                                if (((sub_96630( l_U1001 )) != 16) AND (sub_85056()))
                                {
                                    uVar38._fU0[1] = 1;
                                }
                                if (sub_85120( l_U1001 ))
                                {
                                    uVar38._fU0[2] = 4;
                                }
                                else
                                {
                                    uVar38._fU0[2] = 16;
                                }
                                NETWORK_STORE_GAME_CONFIG( ref uVar38 );
                                sub_97124();
                            }
                        }
                        else
                        {
                            sub_97847();
                        }
                    }
                }
                if (((uParam1^)[GET_PLAYER_ID()] == -1) || (((uParam1^)[GET_PLAYER_ID()] == -2) || (((uParam1^)[GET_PLAYER_ID()] == -6) || ((uParam1^)[GET_PLAYER_ID()] == -3))))
                {
                    SET_WIDESCREEN_FORMAT( 0 );
                    DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                    SET_WIDESCREEN_FORMAT( 1 );
                    sub_86594( 0, sub_92555(), sub_97992(), 0, 0, 0, 0, 0, 255 );
                    GET_FRONTEND_DESIGN_VALUE( 106, ref uVar34, ref fVar35 );
                    GET_FRONTEND_DESIGN_VALUE( 107, ref fVar36, ref fVar33 );
                    GET_HUD_COLOUR( 49, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                    if ((uParam1^)[GET_PLAYER_ID()] == -1)
                    {
                        sub_92615( "RETURNTOPARTYM", uVar34, fVar35, fVar36, fVar33, iVar17, iVar18, iVar19, 255, 1 );
                    }
                    else if ((uParam1^)[GET_PLAYER_ID()] == -2)
                    {
                        sub_92615( "CHOOSENEWGAME", uVar34, fVar35, fVar36, fVar33, iVar17, iVar18, iVar19, 255, 1 );
                    }
                    else
                    {
                        sub_92615( "WANT_TO_LEAVE", uVar34, fVar35, fVar36, fVar33, iVar17, iVar18, iVar19, 255, 1 );
                    }
                    INIT_FRONTEND_HELPER_TEXT();
                    DRAW_FRONTEND_HELPER_TEXT( "CANCEL", "INPUT_F_CANCEL", 0 );
                    DRAW_FRONTEND_HELPER_TEXT( "CONFIRM", "INPUT_F_ACCEPT", 0 );
                }
            };;;;;;
            SET_WIDESCREEN_FORMAT( 3 );
            if (((uParam1^)[GET_PLAYER_ID()] == 1) || ((uParam1^)[GET_PLAYER_ID()] == 0))
            {
                if (J > 6)
                {
                    if ((l_U1198) AND ((l_U1191 == 0) AND (IS_THIS_MACHINE_THE_SERVER())))
                    {
                        GET_NETWORK_TIMER( ref iVar26 );
                        if (l_U1197 < (iVar26 - 750))
                        {
                            GET_NETWORK_TIMER( ref l_U1197 );
                            sub_98506( ref l_U1199 );
                        }
                    }
                    else
                    {
                        l_U1197 = 0;
                        l_U1199 = 0;
                        l_U1198 = 0;
                    }
                    if (NOT l_U1199)
                    {
                        if (l_U1191 == 0)
                        {
                            DRAW_SPRITE( l_U514[1], fVar37, 0.79100000, 0.02100000, 0.02400000, 180.00000000, 255, 255, 255, 255 );
                        }
                        else if (l_U1191 == (J - 6))
                        {
                            DRAW_SPRITE( l_U514[1], fVar37, 0.79100000, 0.02100000, 0.02400000, 0.00000000, 255, 255, 255, 255 );
                        }
                        else
                        {
                            DRAW_SPRITE( l_U514[2], fVar37, 0.79100000, 0.02100000, 0.02400000, 0.00000000, 255, 255, 255, 255 );
                        }
                    }
                }
            }
        }
    }
    l_U1201 = 0;
    if (sub_2145())
    {
        for ( I = 0; I < 21; I++ )
        {
            if (l_U1002[I]._fU16 != 0)
            {
                if (l_U1002[I]._fU16 < 12)
                {
                    (uParam2^)[I] = l_U1002[I]._fU20;
                }
            }
        }
        sub_2330();
    }
    if (NOT NETWORK_IS_TVT())
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (sub_11073())
            {
                if ((GET_PLAYER_TEAM( sub_90115() )) == -1)
                {
                    SET_PLAYER_TEAM( sub_90115(), sub_83840() );
                    if ((uParam1^)[GET_PLAYER_ID()] == 1)
                    {
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                }
            }
            else if (sub_11028())
            {
                if ((GET_PLAYER_TEAM( sub_90115() )) == -1)
                {
                    SET_PLAYER_TEAM( sub_90115(), sub_99026( 2 ) );
                    if ((uParam1^)[GET_PLAYER_ID()] == 1)
                    {
                        (uParam1^)[GET_PLAYER_ID()] = 0;
                    }
                }
                else if (sub_11170() < 2)
                {
                    if ((sub_82476( GET_PLAYER_TEAM( sub_90115() ) )) > 1)
                    {
                        if (sub_99440( GET_PLAYER_ID() ))
                        {
                            SET_PLAYER_TEAM( sub_90115(), sub_99026( 2 ) );
                            if ((uParam1^)[GET_PLAYER_ID()] == 1)
                            {
                                (uParam1^)[GET_PLAYER_ID()] = 0;
                            }
                        }
                    }
                }
            }
            else if (sub_18503())
            {
                if ((GET_PLAYER_TEAM( sub_90115() )) != 0)
                {
                    SET_PLAYER_TEAM( sub_90115(), 0 );
                }
            }
            else if ((GET_PLAYER_TEAM( sub_90115() )) != -1)
            {
                SET_PLAYER_TEAM( sub_90115(), -1 );
                if ((uParam1^)[GET_PLAYER_ID()] == 1)
                {
                    (uParam1^)[GET_PLAYER_ID()] = 0;
                }
            };;;;
        }
    }
    if (((uParam1^)[GET_PLAYER_ID()] == -1) || (((uParam1^)[GET_PLAYER_ID()] == -2) || (((uParam1^)[GET_PLAYER_ID()] == -6) || ((uParam1^)[GET_PLAYER_ID()] == -3))))
    {
        sub_99786();
        return;
    }
    else if (IS_PAUSE_MENU_ACTIVE())
    {
        sub_92173( 1 );
        sub_99786();
        return;
    }
    else if (l_U1209)
    {
        if (N_604003528())
        {
            if (sub_100105())
            {
                l_U1209 = 0;
            }
            sub_99786();
            return;
        }
        else if (sub_101370( bVar31, bVar32 ))
        {
            l_U1209 = 0;
        }
        sub_99786();
        return;;
    }
    else if (sub_87763())
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (GET_PLAYERSETTINGS_MODEL_CHOICE() != (sub_104284( sub_9794() )))
            {
                if (sub_32771( GET_PLAYERSETTINGS_MODEL_CHOICE() ))
                {
                    CHANGE_PLAYER_MODEL( sub_90115(), GET_PLAYERSETTINGS_MODEL_CHOICE() );
                    SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE( sub_90115() );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( GET_PLAYERSETTINGS_MODEL_CHOICE() );
                    sub_104389( GET_PLAYER_ID(), 0 );
                }
            }
            else if (HAS_GAMER_CHANGED_NETWORK_MODEL_SETTINGS())
            {
                SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE( sub_90115() );
            }
        }
    };;;;
    if ((NOT N_604003528()) || (sub_85056()))
    {
        if (NOT bVar31)
        {
            if (((uParam1^)[GET_PLAYER_ID()] == 1) || ((uParam1^)[GET_PLAYER_ID()] == 0))
            {
                iVar16 = GET_LOCAL_PLAYER_MP_CASH();
                if (iVar16 > 0)
                {
                    SET_WIDESCREEN_FORMAT( 2 );
                    sub_86594( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                    GET_FRONTEND_DESIGN_VALUE( 23, ref uVar34, ref fVar35 );
                    GET_FRONTEND_DESIGN_VALUE( 24, ref fVar36, ref fVar33 );
                    GET_HUD_COLOUR( 49, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                    sub_86891( "CASH", uVar34, fVar35, fVar36, fVar33, 255, 255, 255, 255, 2, iVar16 );
                    SET_WIDESCREEN_FORMAT( 3 );
                }
            }
        }
    }
    if ((uParam1^)[GET_PLAYER_ID()] == -4)
    {
        sub_92184( 1 );
        sub_86594( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
        sub_92615( "NEWGAME", sub_92555(), 0.08500000, sub_104961( 113 ), sub_104994( 113 ), 255, 255, 255, 255, 2 );
        INIT_FRONTEND_HELPER_TEXT();
        DRAW_FRONTEND_HELPER_TEXT( "CANCEL", "INPUT_F_CANCEL", 0 );
        DRAW_FRONTEND_HELPER_TEXT( "CONFIRM", "INPUT_F_ACCEPT", 0 );
        DRAW_FRONTEND_HELPER_TEXT( "MODE", "PAD_DPAD_UPDOWN", 0 );
        sub_105153( 0 );
        SET_WIDESCREEN_FORMAT( 2 );
        if (GET_IS_WIDESCREEN())
        {
            sub_86594( 0, sub_92555(), sub_97992() * 1.20000000, 0, 0, 0, 0, 0, 255 );
        }
        else
        {
            sub_86594( 0, sub_92555(), sub_97992(), 0, 0, 0, 0, 0, 255 );
        }
        GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
        if (GET_IS_WIDESCREEN())
        {
            sub_92615( "CHOOSENEWGAME", sub_92555() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
        }
        else
        {
            sub_92615( "CHOOSENEWGAME", sub_92555() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
        }
    }
    else if (((uParam1^)[GET_PLAYER_ID()] == -8) || ((uParam1^)[GET_PLAYER_ID()] == -7))
    {
        sub_92184( 1 );
        sub_86594( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
        if (sub_85056())
        {
            sub_92615( "NEXTGAME", sub_92555(), 0.11900000, sub_104961( 113 ), sub_104994( 113 ), 255, 255, 255, 255, 2 );
        }
        else
        {
            sub_92615( "NEXTGAME", sub_92555(), 0.08500000, sub_104961( 113 ), sub_104994( 113 ), 255, 255, 255, 255, 2 );
        }
        SET_WIDESCREEN_FORMAT( 3 );
        INIT_FRONTEND_HELPER_TEXT();
        if ((NOT sub_85056()) AND ((NOT NETWORK_IS_TVT()) AND (l_U1278)))
        {
            if (((l_U1002[sub_85738( 17 )]._fU20) != GET_PLAYER_ID()) AND (l_U1171 != (l_U1002[sub_85738( 17 )]._fU20)))
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
            DRAW_SPRITE( l_U514[0], (fVar37 + fVar33) - 0.01300000, 0.76300000 + 0.01300000, 0.01400000 * -1, 0.02000000, 0.00000000, 255, 255, 255, 255 );
            sub_92615( ref l_U1002[sub_85738( 17 )]._fU0, fVar37 - fVar33, 0.76300000, 0.31500000, 0.43000000, 255, 255, 255, 255, 3 );
            sub_86594( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
            if ((IS_NETWORK_PLAYER_ACTIVE( l_U1002[sub_85738( 17 )]._fU20 )) AND (((l_U1002[sub_85738( 17 )]._fU20) != GET_PLAYER_ID()) AND ((l_U1002[sub_85738( 17 )]._fU20) > -1)))
            {
                sub_106699( sub_19026( l_U1002[sub_85738( 17 )]._fU20 ), ref iVar21, ref iVar22, ref iVar23 );
                if (l_U19)
                {
                    if (N_604003528())
                    {
                        fVar36 = sub_100784( fVar37 + fVar33, 0.76300000, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, "WWWWWWWWWWWWWWW" );
                    }
                    else
                    {
                        fVar36 = sub_100784( fVar37 + fVar33, 0.76300000, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, "WWWWWWWWWWWWWWWW" );
                    }
                }
                else
                {
                    SET_TEXT_SCALE( 0.31500000, 0.43000000 );
                    SET_TEXT_USE_UNDERSCORE( 1 );
                    fVar49 = GET_STRING_WIDTH_WITH_STRING( "STRING", GET_PLAYER_NAME( sub_19026( l_U1002[sub_85738( 17 )]._fU20 ) ) );
                    fVar50 = sub_97992() - (fVar37 + fVar33);
                    if (fVar49 <= fVar50)
                    {
                        fVar36 = sub_100784( fVar37 + fVar33, 0.76300000, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_19026( l_U1002[sub_85738( 17 )]._fU20 ) ) );
                    }
                    else
                    {
                        fVar36 = sub_100784( fVar37 + fVar33, 0.76300000, (fVar50 * 0.31500000) / fVar49, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_19026( l_U1002[sub_85738( 17 )]._fU20 ) ) );
                    }
                    SET_TEXT_USE_UNDERSCORE( 0 );
                }
            }
            else
            {
                fVar36 = sub_92615( "NONE", fVar37 + fVar33, 0.76300000, 0.31500000, 0.43000000, 255, 255, 255, 255, 2 );
            }
            DRAW_SPRITE( l_U514[0], ((fVar37 + fVar33) + 0.01300000) + fVar36, 0.76300000 + 0.01300000, 0.01400000, 0.02000000, 0.00000000, 255, 255, 255, 255 );
        }
        else if (sub_85056())
        {
            DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
            DRAW_FRONTEND_HELPER_TEXT( "CONFIRM", "INPUT_F_ACCEPT", 0 );
            sub_105153( 0 );
        }
        else if (((uParam1^)[GET_PLAYER_ID()] == -7) AND (IS_THIS_MACHINE_THE_SERVER()))
        {
            DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
            DRAW_FRONTEND_HELPER_TEXT( "CONFIRM", "INPUT_F_ACCEPT", 0 );
            if ((NOT NETWORK_IS_TVT()) AND (sub_10481() > 2))
            {
                DRAW_FRONTEND_HELPER_TEXT( "KICK_PLAYERU", "INPUT_F_Y", 0 );
            }
            DRAW_FRONTEND_HELPER_TEXT( "MODE", "PAD_DPAD_UPDOWN", 0 );
        }
        else if ((NOT l_U1279) AND (IS_THIS_MACHINE_THE_SERVER()))
        {
            DRAW_FRONTEND_HELPER_TEXT( "CANCEL", "INPUT_F_CANCEL", 0 );
            if ((NOT NETWORK_IS_TVT()) AND (sub_10481() > 2))
            {
                DRAW_FRONTEND_HELPER_TEXT( "KICK_PLAYERU", "INPUT_F_Y", 0 );
            }
        }
        else
        {
            DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
            if ((NOT NETWORK_IS_TVT()) AND (sub_10481() > 2))
            {
                DRAW_FRONTEND_HELPER_TEXT( "KICK_PLAYERU", "INPUT_F_Y", 0 );
            }
        };;;;
        if (NOT sub_85056())
        {
            sub_105153( 1 );
        }
        SET_WIDESCREEN_FORMAT( 2 );
        if (NOT sub_85056())
        {
            if (GET_IS_WIDESCREEN())
            {
                sub_86594( 0, sub_92555(), sub_97992() * 1.20000000, 0, 0, 0, 0, 0, 255 );
                GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                sub_92615( "CHOOSNEXTGAME", sub_92555() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
            }
            else
            {
                sub_86594( 0, sub_92555(), sub_97992(), 0, 0, 0, 0, 0, 255 );
                GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
                sub_92615( "CHOOSNEXTGAME", sub_92555() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
            }
        }
        if (NOT sub_85056())
        {
            if ((IS_THIS_MACHINE_THE_SERVER()) AND ((uParam1^)[GET_PLAYER_ID()] == -8))
            {
                bVar29 = true;
                for ( I = 0; I < 16; I++ )
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( I ))
                    {
                        if (((uParam1^)[I] != -8) AND ((uParam1^)[I] != -7))
                        {
                            bVar29 = false;
                        }
                    }
                }
                if (sub_85120( l_U1001 ))
                {
                    if (GET_NUMBER_OF_PLAYERS() > 4)
                    {
                        (uParam1^)[GET_PLAYER_ID()] = -7;
                        bVar29 = false;
                    }
                }
                else if ((sub_96630( l_U1001 )) == sub_1248())
                {
                    if ((sub_96630( l_U1001 )) != 10)
                    {
                        if (l_U1189 < 10)
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
                            sub_85484( 0 );
                        }
                        sub_108454( sub_96630( l_U1001 ) );
                    }
                }
            }
        }
    }
    else
    {
        SET_WIDESCREEN_FORMAT( 2 );
        StrCopy( ref cVar8, "CP_DESCRP_", 16 );
        ConcatString(ref cVar8, sub_1248(), 16);
        if (GET_IS_WIDESCREEN())
        {
            sub_86594( 0, sub_92555(), sub_97992() * 1.20000000, 0, 0, 0, 0, 0, 255 );
            GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
            sub_92615( ref cVar8, sub_92555() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
        }
        else
        {
            sub_86594( 0, sub_92555(), sub_97992(), 0, 0, 0, 0, 0, 255 );
            GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref uVar20 );
            sub_92615( ref cVar8, sub_92555() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, iVar17, iVar18, iVar19, 255, 2 );
        }
        SET_WIDESCREEN_FORMAT( 3 );
        if (NOT l_U1204)
        {
            if ((l_U1002[sub_85738( 16 )]._fU20) == 1)
            {
                sub_108763( 0 );
            }
            else if (sub_109102( ref I ))
            {
                if (sub_109198( ref l_U1002[I]._fU0, l_U1002[I]._fU24 ))
                {
                    if (l_U1206)
                    {
                        l_U1206 = 0;
                    }
                    else if (GET_IS_WIDESCREEN())
                    {
                        DRAW_SPRITE( l_U554[l_U1002[I]._fU20], 0.68500000, 0.38100000, 0.52800000, 0.37700000, 0.00000000, 255, 255, 255, 255 );
                    }
                    else
                    {
                        DRAW_SPRITE( l_U554[l_U1002[I]._fU20], 0.70900000, 0.38100000, 0.52800000, 0.37700000, 0.00000000, 255, 255, 255, 255 );
                    }
                }
                else if (l_U1206)
                {
                    l_U1206 = 0;
                }
                else if (GET_IS_WIDESCREEN())
                {
                    DRAW_SPRITE( l_U514[35], 0.68500000, 0.38100000, 0.52800000, 0.37700000, 0.00000000, 255, 255, 255, 255 );
                }
                else
                {
                    DRAW_SPRITE( l_U514[35], 0.70900000, 0.38100000, 0.52800000, 0.37700000, 0.00000000, 255, 255, 255, 255 );
                };;;
            }
            else if (l_U1206)
            {
                l_U1206 = 0;
            }
            else if (GET_IS_WIDESCREEN())
            {
                DRAW_SPRITE( l_U514[35], 0.68500000, 0.38100000, 0.52800000, 0.37700000, 0.00000000, 255, 255, 255, 255 );
            }
            else
            {
                DRAW_SPRITE( l_U514[35], 0.70900000, 0.38100000, 0.52800000, 0.37700000, 0.00000000, 255, 255, 255, 255 );
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
        if ((N_604003528()) || (GET_IS_WIDESCREEN()))
        {
            DRAW_RECT( 0.50000000, sub_104961( 0 ), 1.00000000, 0.00200000, 180, 180, 180, 255 );
        }
        else
        {
            DRAW_RECT( 0.50000000, sub_104961( 0 ), 1.00000000, 0.00400000, 180, 180, 180, 255 );
        }
        SET_WIDESCREEN_FORMAT( 3 );
        fVar35 = 0.57800000;
        iVar25 = l_U1191;
        iVar24 = 6;
        for ( I = iVar25; I <= ((iVar25 + iVar24) - 1); I++ )
        {
            if (l_U1002[I]._fU16 != 0)
            {
                bVar27 = false;
                iVar17 = 255;
                iVar18 = 255;
                iVar19 = 255;
                sub_86594( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                if (sub_89167())
                {
                    fVar33 = 0.01300000;
                    if ((uParam1^)[GET_PLAYER_ID()] == 0)
                    {
                        bVar27 = sub_93452( I );
                        if (bVar27)
                        {
                            if (l_U1190 == I)
                            {
                                DRAW_SPRITE( l_U514[0], (fVar37 + fVar33) - 0.01300000, fVar35 + 0.01300000, 0.01400000 * -1, 0.02000000, 0.00000000, 255, 255, 255, 255 );
                            }
                            else
                            {
                                GET_HUD_COLOUR( 56, ref iVar17, ref iVar18, ref iVar19, ref J );
                            }
                        }
                        else if (l_U1190 != I)
                        {
                            iVar17 = 60;
                            iVar18 = 60;
                            iVar19 = 60;
                        }
                    }
                    sub_92615( ref l_U1002[I]._fU0, fVar37 - fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 3 );
                }
                else
                {
                    fVar33 = 0.00800000;
                    sub_92615( ref l_U1002[I]._fU0, fVar37 - fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 3 );
                }
                sub_86594( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                switch (l_U1002[I]._fU16)
                {
                    case 1:
                    case 8:
                    if ((l_U1002[I]._fU24 > 0) || (bVar27))
                    {
                        cVar8 = {l_U1002[I]._fU0};
                        ConcatString(ref cVar8, l_U1002[I]._fU20, 16);
                        fVar36 = sub_92615( ref cVar8, fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    else
                    {
                        fVar36 = sub_92615( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 2:
                    if (l_U1002[I]._fU20 < 2147483647)
                    {
                        fVar36 = sub_111067( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, l_U1002[I]._fU20, 1065353216 );
                    }
                    else
                    {
                        fVar36 = sub_100784( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, "-" );
                    }
                    break;
                    case 3:
                    fVar36 = sub_87216( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, l_U1002[I]._fU20 );
                    break;
                    case 11:
                    if ((l_U1002[I]._fU24 > 0) || (bVar27))
                    {
                        if (l_U1002[I]._fU20 == 0)
                        {
                            fVar36 = sub_92615( "RANDOM", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                        else
                        {
                            fVar36 = sub_87216( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, l_U1002[I]._fU20 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_92615( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 13:
                    if ((l_U1002[I]._fU24 > 0) || (bVar27))
                    {
                        ;
                    }
                    else
                    {
                        fVar36 = sub_92615( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 4:
                    case 14:
                    if ((l_U1002[I]._fU24 > 0) || (bVar27))
                    {
                        fVar36 = sub_113098( "NUM_OUTOF_NUM", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, l_U1002[I]._fU20 + 1, l_U1002[I]._fU24 );
                    }
                    else
                    {
                        fVar36 = sub_92615( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 15:
                    if (l_U1002[I]._fU20 > -1)
                    {
                        cVar8 = {l_U1002[I]._fU0};
                        ConcatString(ref cVar8, l_U1002[I]._fU20, 16);
                        fVar36 = sub_92615( ref cVar8, fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    else
                    {
                        fVar36 = sub_92615( "OFF", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 5:
                    case 7:
                    if ((l_U1002[I]._fU24 > 0) || (bVar27))
                    {
                        if (l_U1002[I]._fU20 > 0)
                        {
                            fVar36 = sub_92615( "YES", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                        else
                        {
                            fVar36 = sub_92615( "NO", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_92615( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 6:
                    case 16:
                    if ((l_U1002[I]._fU24 > 0) || (bVar27))
                    {
                        if (l_U1002[I]._fU20 > 0)
                        {
                            fVar36 = sub_92615( "ON", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                        else
                        {
                            fVar36 = sub_92615( "OFF", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_92615( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 9:
                    case 10:
                    if (sub_113915())
                    {
                        if (l_U1002[I]._fU20 > 0)
                        {
                            fVar36 = sub_92615( "ON", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                        else
                        {
                            fVar36 = sub_92615( "OFF", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_92615( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                    case 12:
                    if ((l_U1002[I]._fU24 > 0) || (bVar27))
                    {
                        fVar36 = sub_87216( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, sub_114246() );
                    }
                    else if ((GET_PLAYER_TEAM( sub_90115() )) == -1)
                    {
                        fVar36 = sub_92615( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    else
                    {
                        fVar36 = sub_87216( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2, sub_114246() );
                    }
                    break;
                    case 17:
                    if ((l_U1002[I]._fU24 > 0) || (bVar27))
                    {
                        if ((IS_NETWORK_PLAYER_ACTIVE( l_U1002[I]._fU20 )) AND ((l_U1002[I]._fU20 != GET_PLAYER_ID()) AND (l_U1002[I]._fU20 > -1)))
                        {
                            if (l_U1190 == I)
                            {
                                sub_106699( sub_19026( l_U1002[I]._fU20 ), ref iVar21, ref iVar22, ref iVar23 );
                            }
                            else
                            {
                                iVar21 = iVar17;
                                iVar22 = iVar18;
                                iVar23 = iVar19;
                            }
                            if (l_U19)
                            {
                                if (N_604003528())
                                {
                                    fVar36 = sub_100784( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, "WWWWWWWWWWWWWWW" );
                                }
                                else
                                {
                                    fVar36 = sub_100784( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, "WWWWWWWWWWWWWWWW" );
                                }
                            }
                            else
                            {
                                SET_TEXT_SCALE( 0.31500000, 0.43000000 );
                                SET_TEXT_USE_UNDERSCORE( 1 );
                                fVar49 = GET_STRING_WIDTH_WITH_STRING( "STRING", GET_PLAYER_NAME( sub_19026( l_U1002[I]._fU20 ) ) );
                                if (GET_IS_WIDESCREEN())
                                {
                                    if (fVar49 <= 0.20300000)
                                    {
                                        fVar36 = sub_100784( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_19026( l_U1002[I]._fU20 ) ) );
                                    }
                                    else
                                    {
                                        fVar36 = sub_100784( fVar37 + fVar33, fVar35, 0.06394500 / fVar49, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_19026( l_U1002[I]._fU20 ) ) );
                                    }
                                }
                                else if (fVar49 <= 0.18900000)
                                {
                                    fVar36 = sub_100784( fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_19026( l_U1002[I]._fU20 ) ) );
                                }
                                else
                                {
                                    fVar36 = sub_100784( fVar37 + fVar33, fVar35, 0.05953500 / fVar49, 0.43000000, iVar21, iVar22, iVar23, 255, 2, GET_PLAYER_NAME( sub_19026( l_U1002[I]._fU20 ) ) );
                                }
                                SET_TEXT_USE_UNDERSCORE( 0 );
                            }
                        }
                        else
                        {
                            fVar36 = sub_92615( "NONE", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                        }
                    }
                    else
                    {
                        fVar36 = sub_92615( "NA", fVar37 + fVar33, fVar35, 0.31500000, 0.43000000, iVar17, iVar18, iVar19, 255, 2 );
                    }
                    break;
                }
                if (((uParam1^)[GET_PLAYER_ID()] == 0) AND (l_U1190 == I))
                {
                    if (bVar27)
                    {
                        DRAW_SPRITE( l_U514[0], ((fVar37 + fVar33) + 0.01300000) + fVar36, fVar35 + 0.01300000, 0.01400000, 0.02000000, 0.00000000, 255, 255, 255, 255 );
                    }
                }
                fVar35 += 0.03200000;
            }
        }
    }
    sub_99786();
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
                    DRAW_RECT( ((0.20800000 + sub_92555()) + 0.00900000) + sub_115720(), 0.04900000 + fVar35, 0.42900000, 0.03800000, iVar17, iVar18, iVar19, 45 );
                }
                else
                {
                    DRAW_RECT( ((0.17900000 + sub_92555()) + 0.00900000) + sub_115720(), 0.04900000 + fVar35, 0.37200000, 0.03700000, iVar17, iVar18, iVar19, 45 );
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
            if ((sub_82476( J )) > 0)
            {
                iVar14++;
                sub_86594( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                GET_TEAM_RGB_COLOUR( J, ref iVar17, ref iVar18, ref iVar19 );
                if (GET_IS_WIDESCREEN())
                {
                    sub_87216( sub_92555() + 0.00900000, fVar35 + 0.03200000, 0.38000000, 0.55500000, iVar17, iVar18, iVar19, 255, 1, iVar14 );
                }
                else
                {
                    sub_87216( sub_92555() + 0.00900000, fVar35 + 0.03100000, 0.38000000, 0.55500000, iVar17, iVar18, iVar19, 255, 1, iVar14 );
                }
                for ( I = 0; I < 16; I++ )
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( l_U577[0]._fU24[I] ))
                    {
                        if ((GET_PLAYER_TEAM( sub_19026( l_U577[0]._fU24[I] ) )) == J)
                        {
                            if (GET_IS_WIDESCREEN())
                            {
                                sub_116292( l_U577[0]._fU24[I], ref iVar51, (sub_92555() + 0.00900000) + sub_115720(), ref fVar35, 0.35000000, 0.47750000, 0.03600000, iParam0, 0 );
                            }
                            else
                            {
                                sub_116292( l_U577[0]._fU24[I], ref iVar51, (sub_92555() + 0.00900000) + sub_115720(), ref fVar35, 0.32500000, 0.43500000, 0.03600000, iParam0, 0 );
                            }
                            sub_120683( l_U577[0]._fU24[I], ((GET_HOST_ID() == l_U577[0]._fU24[I]) AND ((uParam1^)[l_U577[0]._fU24[I]] == -8)) || (((GET_HOST_ID() != l_U577[0]._fU24[I]) AND (((uParam1^)[l_U577[0]._fU24[I]] == -7) AND (NOT sub_85056()))) || ((uParam1^)[l_U577[0]._fU24[I]] == 1)), ((sub_92555() + 0.00900000) + sub_115720()) + fVar36, fVar35 );
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
                    DRAW_RECT( ((0.20800000 + sub_92555()) + 0.00900000) + -0.00900000, 0.04900000 + fVar35, 0.42900000, 0.03800000, iVar17, iVar18, iVar19, 45 );
                }
                else
                {
                    DRAW_RECT( ((0.17900000 + sub_92555()) + 0.00900000) + -0.00900000, 0.04900000 + fVar35, 0.37200000, 0.03800000, iVar17, iVar18, iVar19, 45 );
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
            if (IS_NETWORK_PLAYER_ACTIVE( l_U577[0]._fU24[I] ))
            {
                if ((sub_18503()) || ((GET_PLAYER_TEAM( sub_19026( l_U577[0]._fU24[I] ) )) == -1))
                {
                    if (GET_IS_WIDESCREEN())
                    {
                        sub_116292( l_U577[0]._fU24[I], ref iVar51, (sub_92555() + 0.00900000) + -0.00900000, ref fVar35, 0.35000000, 0.47750000, 0.03600000, iParam0, ((uParam1^)[GET_PLAYER_ID()] == 1) || ((uParam1^)[GET_PLAYER_ID()] == 0) );
                    }
                    else
                    {
                        sub_116292( l_U577[0]._fU24[I], ref iVar51, (sub_92555() + 0.00900000) + -0.00900000, ref fVar35, 0.32500000, 0.43500000, 0.03600000, iParam0, ((uParam1^)[GET_PLAYER_ID()] == 1) || ((uParam1^)[GET_PLAYER_ID()] == 0) );
                    }
                    sub_120683( l_U577[0]._fU24[I], ((GET_HOST_ID() == l_U577[0]._fU24[I]) AND ((uParam1^)[l_U577[0]._fU24[I]] == -8)) || (((GET_HOST_ID() != l_U577[0]._fU24[I]) AND (((uParam1^)[l_U577[0]._fU24[I]] == -7) AND (NOT sub_85056()))) || ((uParam1^)[l_U577[0]._fU24[I]] == 1)), ((sub_92555() + 0.00900000) + -0.00900000) + fVar36, fVar35 );
                }
            }
        }
    }
    return;
}

void sub_84664()
{
    if (DOES_CAM_EXIST( l_U1251 ))
    {
        DESTROY_CAM( l_U1251 );
    }
    return;
}

int sub_84843(unknown uParam0)
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

void sub_85056()
{
    return NETWORK_IS_GAME_RANKED();
}

int sub_85120(int iParam0)
{
    if ((iParam0 == 12) || ((iParam0 == 11) || (iParam0 == 10)))
    {
        return 1;
    }
    return 0;
}

void sub_85228(unknown uParam0, unknown uParam1)
{
    int I;
    int iVar5;
    int iVar6;

    if (sub_85056())
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
        if ((iVar6 <= (iVar5 / 2)) AND (iVar6 > 0))
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

void sub_85484(unknown uParam0)
{
    SET_SCREEN_FADE( sub_85493(), 0, 0, 0, 0, 0, 0, 255, uParam0, 1.00000000, 1.00000000 );
    return;
}

void sub_85493()
{
    unknown Result;

    GET_SCREEN_VIEWPORT_ID( ref Result );
    return Result;
}

void sub_85583(unknown uParam0)
{
    SET_SCREEN_FADE( sub_85493(), 0, 0, 1, 0, 0, 0, 255, uParam0, 1.00000000, 1.00000000 );
    return;
}

int sub_85738(int iParam0)
{
    int Result;

    for ( Result = 0; Result < 21; Result++ )
    {
        if (l_U1002[Result]._fU16 == iParam0)
        {
            return Result;
        }
    }
    return 20;
}

void sub_85922()
{
    int I;
    int J;

    for ( J = 0; J < 7; J++ )
    {
        for ( I = 0; I < 16; I++ )
        {
            l_U577[J]._fU24[I] = 0;
        }
    }
    for ( I = 0; I < 16; I++ )
    {
        l_U919[I] = I;
        l_U577[0]._fU24[I] = I;
    }
    return;
}

void sub_86077()
{
    int I;

    for ( I = 0; I < 8; I++ )
    {
        l_U936[I] = I;
        l_U945[I] = I;
        l_U954[I] = 0;
    }
    return;
}

void sub_86558(int iParam0, boolean bParam1)
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
    sub_86594( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    GET_FRONTEND_DESIGN_VALUE( 23, ref uVar9, ref uVar10 );
    GET_FRONTEND_DESIGN_VALUE( 24, ref uVar11, ref uVar12 );
    GET_HUD_COLOUR( 49, ref uVar5, ref uVar6, ref uVar7, ref uVar8 );
    GET_NETWORK_TIMER( ref iVar4 );
    if (((iParam0 + 10000) - iVar4) > 0)
    {
        if (bParam1)
        {
            sub_86891( "STARTING_IN", uVar9, uVar10, uVar11, uVar12, 255, 255, 255, 255, 2, (((iParam0 + 10000) - iVar4) / 1000) + 1 );
        }
        else
        {
            sub_87216( uVar9, uVar10, uVar11, uVar12, 255, 255, 255, 255, 2, (((iParam0 + 10000) - iVar4) / 1000) + 1 );
        }
        if ((((iParam0 + 10000) - iVar4) + 1000) <= l_U1196)
        {
            PLAY_AUDIO_EVENT( "FRONTEND_OTHER_COUNTDOWN" );
            l_U1196 -= 1000;
        }
    }
    else if (bParam1)
    {
        sub_86891( "STARTING_IN", uVar9, uVar10, uVar11, uVar12, 255, 255, 255, 255, 2, 1 );
    }
    else
    {
        sub_87216( uVar9, uVar10, uVar11, uVar12, 255, 255, 255, 255, 2, 1 );
    }
    SET_WIDESCREEN_FORMAT( 3 );
    return;
}

void sub_86594(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
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

void sub_86891(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_86931( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_NUMBER( uParam0, uParam10 );
    DISPLAY_TEXT_WITH_NUMBER( uParam1, uParam2, uParam0, uParam10 );
    return Result;
}

void sub_86931(unknown uParam0, unknown uParam1)
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

void sub_87216(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam4, uParam5, uParam6, uParam7 );
    SET_TEXT_SCALE( uParam2, uParam3 );
    sub_86931( uParam8, ref uParam0 );
    Result = GET_STRING_WIDTH_WITH_NUMBER( "NUMBER", uParam9 );
    DISPLAY_TEXT_WITH_NUMBER( uParam0, uParam1, "NUMBER", uParam9 );
    return Result;
}

int sub_87562()
{
    if (IS_CONTROL_PRESSED( 2, 78 ))
    {
        if (l_U1202)
        {
            l_U1202 = 0;
            return 1;
        }
    }
    else if ((NOT (IS_BUTTON_PRESSED( 0, 13 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 12 ))) AND ((NOT (IS_CONTROL_PRESSED( 2, 80 ))) AND ((NOT (IS_CONTROL_PRESSED( 2, 79 ))) AND (NOT (IS_CONTROL_PRESSED( 2, 77 )))))))
    {
        l_U1202 = 1;
    }
    return 0;
}

int sub_87763()
{
    unknown uVar2;

    uVar2 = sub_1248();
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

int sub_87881()
{
    if (IS_CONTROL_PRESSED( 2, 80 ))
    {
        if (l_U1202)
        {
            l_U1202 = 0;
            return 1;
        }
    }
    else if ((NOT (IS_BUTTON_PRESSED( 0, 13 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 12 ))) AND ((NOT (IS_CONTROL_PRESSED( 2, 78 ))) AND ((NOT (IS_CONTROL_PRESSED( 2, 79 ))) AND (NOT (IS_CONTROL_PRESSED( 2, 77 )))))))
    {
        l_U1202 = 1;
    }
    return 0;
}

int sub_88063()
{
    if (IS_BUTTON_PRESSED( 0, 12 ))
    {
        l_U1203 = 1;
    }
    else if (l_U1203)
    {
        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
        l_U1203 = 0;
        return 1;
    }
    return 0;
}

int sub_88219()
{
    if (IS_CONTROL_PRESSED( 2, 77 ))
    {
        if (l_U1202)
        {
            l_U1202 = 0;
            return 1;
        }
    }
    else if ((NOT (IS_BUTTON_PRESSED( 0, 13 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 12 ))) AND ((NOT (IS_CONTROL_PRESSED( 2, 80 ))) AND ((NOT (IS_CONTROL_PRESSED( 2, 78 ))) AND (NOT (IS_CONTROL_PRESSED( 2, 79 )))))))
    {
        l_U1202 = 1;
    }
    return 0;
}

int sub_88627()
{
    if (IS_BUTTON_PRESSED( 0, 13 ))
    {
        if (l_U1202)
        {
            l_U1202 = 0;
            return 1;
        }
    }
    else if ((NOT (IS_BUTTON_PRESSED( 0, 12 ))) AND ((NOT (IS_CONTROL_PRESSED( 2, 77 ))) AND ((NOT (IS_CONTROL_PRESSED( 2, 80 ))) AND ((NOT (IS_CONTROL_PRESSED( 2, 78 ))) AND (NOT (IS_CONTROL_PRESSED( 2, 79 )))))))
    {
        l_U1202 = 1;
    }
    return 0;
}

int sub_88765()
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

int sub_88941()
{
    if (IS_CONTROL_PRESSED( 2, 79 ))
    {
        if (l_U1202)
        {
            l_U1202 = 0;
            return 1;
        }
    }
    else if ((NOT (IS_BUTTON_PRESSED( 0, 13 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 12 ))) AND ((NOT (IS_CONTROL_PRESSED( 2, 80 ))) AND ((NOT (IS_CONTROL_PRESSED( 2, 78 ))) AND (NOT (IS_CONTROL_PRESSED( 2, 77 )))))))
    {
        l_U1202 = 1;
    }
    return 0;
}

int sub_89167()
{
    int I;

    for ( I = 0; I < 21; I++ )
    {
        if (l_U1002[I]._fU16 != 0)
        {
            if (l_U1002[I]._fU16 < 12)
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

int sub_89282(unknown uParam0, int iParam1, boolean bParam2)
{
    int iVar5;
    int iVar6;
    int iVar7;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar6, ref iVar7, ref iVar5, ref iVar5 );
    GET_NETWORK_TIMER( ref iVar5 );
    if ((iVar7 < 65436) || (IS_BUTTON_PRESSED( 0, 8 )))
    {
        if ((iVar5 > (l_U1192 + 150)) || (l_U1200))
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
            l_U1192 = iVar5;
            l_U1200 = 0;
            return 1;
        }
    }
    if ((iVar7 > 100) || (IS_BUTTON_PRESSED( 0, 9 )))
    {
        if ((iVar5 > (l_U1192 + 150)) || (l_U1200))
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
            l_U1192 = iVar5;
            l_U1200 = 0;
            return 1;
        }
    }
    if (NOT l_U1200)
    {
        if (NOT (IS_BUTTON_PRESSED( 0, 10 )))
        {
            if (NOT (IS_BUTTON_PRESSED( 0, 11 )))
            {
                if (NOT (IS_BUTTON_PRESSED( 0, 8 )))
                {
                    if (NOT (IS_BUTTON_PRESSED( 0, 9 )))
                    {
                        if ((iVar6 > 65436) AND (iVar6 < 100))
                        {
                            if ((iVar7 > 65436) AND (iVar7 < 100))
                            {
                                l_U1200 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_89850()
{
    int iVar2;

    iVar2 = sub_1248();
    if ((iVar2 == 7) || (iVar2 == 6))
    {
        return 1;
    }
    return 0;
}

int sub_90064()
{
    if (NOT NETWORK_IS_TVT())
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (sub_11028())
            {
                if ((sub_82476( GET_PLAYER_TEAM( sub_90115() ) )) == 1)
                {
                    return 0;
                }
                return 1;
            }
            else if (sub_11073())
            {
                if (sub_10481() == 1)
                {
                    return 0;
                }
                return 1;
            }
        }
    }
    return 0;
}

void sub_90115()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_90222()
{
    int iVar2;
    int iVar3;
    int iVar4;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar3, ref iVar4, ref iVar2, ref iVar2 );
    GET_NETWORK_TIMER( ref iVar2 );
    if ((iVar3 < 65436) || (IS_BUTTON_PRESSED( 0, 10 )))
    {
        if ((iVar2 > (l_U1192 + 300)) || (l_U1200))
        {
            l_U1192 = iVar2;
            l_U1200 = 0;
            return 1;
        }
    }
    if (NOT l_U1200)
    {
        if (NOT (IS_BUTTON_PRESSED( 0, 10 )))
        {
            if (NOT (IS_BUTTON_PRESSED( 0, 11 )))
            {
                if (NOT (IS_BUTTON_PRESSED( 0, 8 )))
                {
                    if (NOT (IS_BUTTON_PRESSED( 0, 9 )))
                    {
                        if ((iVar3 > 65436) AND (iVar3 < 100))
                        {
                            if ((iVar4 > 65436) AND (iVar4 < 100))
                            {
                                l_U1200 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_90486(unknown uParam0, int iParam1)
{
    (uParam0^)--;
    if ((uParam0^) < 0)
    {
        (uParam0^) = iParam1 - 1;
        return 1;
    }
    return 0;
}

int sub_90628()
{
    int iVar2;
    int iVar3;
    int iVar4;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar3, ref iVar4, ref iVar2, ref iVar2 );
    GET_NETWORK_TIMER( ref iVar2 );
    if ((iVar3 > 100) || (IS_BUTTON_PRESSED( 0, 11 )))
    {
        if ((iVar2 > (l_U1192 + 300)) || (l_U1200))
        {
            l_U1192 = iVar2;
            l_U1200 = 0;
            return 1;
        }
    }
    if (NOT l_U1200)
    {
        if (NOT (IS_BUTTON_PRESSED( 0, 10 )))
        {
            if (NOT (IS_BUTTON_PRESSED( 0, 11 )))
            {
                if (NOT (IS_BUTTON_PRESSED( 0, 8 )))
                {
                    if (NOT (IS_BUTTON_PRESSED( 0, 9 )))
                    {
                        if ((iVar3 > 65436) AND (iVar3 < 100))
                        {
                            if ((iVar4 > 65436) AND (iVar4 < 100))
                            {
                                l_U1200 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_91542(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar5, ref iVar6, ref iVar4, ref iVar4 );
    GET_NETWORK_TIMER( ref iVar4 );
    if ((iVar5 < 65436) || (IS_BUTTON_PRESSED( 0, 10 )))
    {
        if ((iVar4 > (l_U1192 + 300)) || (l_U1200))
        {
            for ( (uParam0^)--; (uParam0^) < 0; (uParam0^) += iParam1 )
            {
                ;
            }
            l_U1192 = iVar4;
            l_U1200 = 0;
            return 1;
        }
    }
    if ((iVar5 > 100) || (IS_BUTTON_PRESSED( 0, 11 )))
    {
        if ((iVar4 > (l_U1192 + 300)) || (l_U1200))
        {
            for ( (uParam0^)++; (uParam0^) >= iParam1; (uParam0^) -= iParam1 )
            {
                ;
            }
            l_U1192 = iVar4;
            l_U1200 = 0;
            return 1;
        }
    }
    if (NOT l_U1200)
    {
        if (NOT (IS_BUTTON_PRESSED( 0, 10 )))
        {
            if (NOT (IS_BUTTON_PRESSED( 0, 11 )))
            {
                if (NOT (IS_BUTTON_PRESSED( 0, 8 )))
                {
                    if (NOT (IS_BUTTON_PRESSED( 0, 9 )))
                    {
                        if ((iVar5 > 65436) AND (iVar5 < 100))
                        {
                            if ((iVar6 > 65436) AND (iVar6 < 100))
                            {
                                l_U1200 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void sub_91920(int iParam0)
{
    if (iParam0 == 18)
    {
        if (IS_MOBILE_PHONE_RADIO_ACTIVE())
        {
            SET_MOBILE_PHONE_RADIO_STATE( 0 );
        }
    }
    else if ((NOT IS_MOBILE_PHONE_RADIO_ACTIVE()) || (GET_PLAYER_RADIO_STATION_INDEX() != iParam0))
    {
        if (NOT IS_MOBILE_PHONE_RADIO_ACTIVE())
        {
            SET_MOBILE_PHONE_RADIO_STATE( 1 );
        }
        RETUNE_RADIO_TO_STATION_INDEX( iParam0 );
    }
    if (l_U1276._fU0 != iParam0)
    {
        l_U1276._fU0 = iParam0;
        CLEAR_SCRIPT_ARRAY_FROM_SCRATCHPAD( 1 );
        SAVE_SCRIPT_ARRAY_IN_SCRATCHPAD( ref l_U1276, 1, 99, 1 );
    }
    return;
}

void sub_92173(unknown uParam0)
{
    sub_92184( uParam0 );
    sub_92472( 0 );
    return;
}

void sub_92184(boolean bParam0)
{
    unknown uVar3;
    unknown uVar4;

    SET_WIDESCREEN_FORMAT( 0 );
    DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
    if (bParam0)
    {
        GET_FRONTEND_DESIGN_VALUE( 0, ref uVar3, ref uVar4 );
        if ((GET_IS_WIDESCREEN()) || (N_604003528()))
        {
            DRAW_RECT( 0.50000000, uVar3, 1.00000000, 0.00200000, 180, 180, 180, 255 );
        }
        else
        {
            DRAW_RECT( 0.50000000, uVar3, 1.00000000, 0.00400000, 180, 180, 180, 255 );
        }
    }
    GET_FRONTEND_DESIGN_VALUE( 22, ref uVar3, ref uVar4 );
    if ((GET_IS_WIDESCREEN()) || (N_604003528()))
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

void sub_92472(boolean bParam0)
{
    char[16] cVar3;
    unknown uVar7;
    unknown uVar8;

    StrCopy( ref cVar3, "NTGT_", 16 );
    ConcatString(ref cVar3, sub_1248(), 16);
    GET_FRONTEND_DESIGN_VALUE( 113, ref uVar7, ref uVar8 );
    sub_86594( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    if (bParam0)
    {
        if (sub_85056())
        {
            sub_92615( ref cVar3, sub_92555() + 0.03250000, 0.11900000, uVar7, uVar8, 255, 255, 255, 255, 2 );
            DRAW_SPRITE( l_U514[15], sub_92555() + 0.01100000, 0.11900000 + 0.02300000, 0.03100000, 0.04400000, 0.00000000, 255, 255, 255, 255 );
        }
        else
        {
            sub_92615( ref cVar3, sub_92555(), 0.11900000, uVar7, uVar8, 255, 255, 255, 255, 2 );
        }
    }
    else if (sub_85056())
    {
        sub_92615( ref cVar3, sub_92555() + 0.03250000, 0.08500000, uVar7, uVar8, 255, 255, 255, 255, 2 );
        DRAW_SPRITE( l_U514[15], sub_92555() + 0.01100000, 0.08500000 + 0.02300000, 0.03100000, 0.04400000, 0.00000000, 255, 255, 255, 255 );
    }
    else
    {
        sub_92615( ref cVar3, sub_92555(), 0.08500000, uVar7, uVar8, 255, 255, 255, 255, 2 );
    }
    return;
}

void sub_92555()
{
    unknown Result;
    unknown uVar3;

    GET_FRONTEND_DESIGN_VALUE( 112, ref Result, ref uVar3 );
    return Result;
}

void sub_92615(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_86931( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH( uParam0 );
    DISPLAY_TEXT( uParam1, uParam2, uParam0 );
    return Result;
}

int sub_93452(unknown uParam0)
{
    if (l_U1002[uParam0]._fU16 != 0)
    {
        if ((l_U1002[uParam0]._fU16 == 10) || (l_U1002[uParam0]._fU16 == 9))
        {
            if (IS_THIS_MACHINE_THE_SERVER())
            {
                if (sub_11073())
                {
                    if (sub_11073())
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
        else if (l_U1002[uParam0]._fU16 < 12)
        {
            if (IS_THIS_MACHINE_THE_SERVER())
            {
                if (l_U1002[uParam0]._fU24 > 0)
                {
                    return 1;
                }
            }
        }
        else if (l_U1002[uParam0]._fU16 > 12)
        {
            if (l_U1002[uParam0]._fU24 > 0)
            {
                return 1;
            }
        }
        else if (sub_90064())
        {
            return 1;
        };;;;
    }
    return 0;
}

int sub_95945(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar5, ref iVar6, ref iVar4, ref iVar4 );
    GET_NETWORK_TIMER( ref iVar4 );
    if ((iVar6 < 65436) || (IS_BUTTON_PRESSED( 0, 8 )))
    {
        if ((iVar4 > (l_U1192 + 150)) || (l_U1200))
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
            l_U1192 = iVar4;
            l_U1200 = 0;
            return 1;
        }
    }
    if (NOT l_U1200)
    {
        if (NOT (IS_BUTTON_PRESSED( 0, 10 )))
        {
            if (NOT (IS_BUTTON_PRESSED( 0, 11 )))
            {
                if (NOT (IS_BUTTON_PRESSED( 0, 8 )))
                {
                    if (NOT (IS_BUTTON_PRESSED( 0, 9 )))
                    {
                        if ((iVar5 > 65436) AND (iVar5 < 100))
                        {
                            if ((iVar6 > 65436) AND (iVar6 < 100))
                            {
                                l_U1200 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_96288(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar5, ref iVar6, ref iVar4, ref iVar4 );
    GET_NETWORK_TIMER( ref iVar4 );
    if ((iVar6 > 100) || (IS_BUTTON_PRESSED( 0, 9 )))
    {
        if ((iVar4 > (l_U1192 + 150)) || (l_U1200))
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
            l_U1192 = iVar4;
            l_U1200 = 0;
            return 1;
        }
    }
    if (NOT l_U1200)
    {
        if (NOT (IS_BUTTON_PRESSED( 0, 10 )))
        {
            if (NOT (IS_BUTTON_PRESSED( 0, 11 )))
            {
                if (NOT (IS_BUTTON_PRESSED( 0, 8 )))
                {
                    if (NOT (IS_BUTTON_PRESSED( 0, 9 )))
                    {
                        if ((iVar5 > 65436) AND (iVar5 < 100))
                        {
                            if ((iVar6 > 65436) AND (iVar6 < 100))
                            {
                                l_U1200 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_96630(unknown uParam0)
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

void sub_97124()
{
    g_U10 = 1;
    sub_97137();
    return;
}

void sub_97137()
{
    FORCE_LOADING_SCREEN( 1 );
    while (true)
    {
        WAIT( 0 );
    }
    return;
}

void sub_97649()
{
    g_U11 = 1;
    sub_97137();
    return;
}

void sub_97847()
{
    g_U12 = 1;
    sub_97137();
    return;
}

float sub_97992()
{
    unknown uVar2;
    unknown uVar3;

    GET_FRONTEND_DESIGN_VALUE( 112, ref uVar2, ref uVar3 );
    return 1.00000000 - uVar2;
}

void sub_98506(unknown uParam0)
{
    if ((uParam0^))
    {
        (uParam0^) = 0;
        return;
    }
    (uParam0^) = 1;
    return;
}

int sub_99026(int iParam0)
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
            return sub_12313( 0, iParam0 );
        }
    }
    else
    {
        for ( I = 0; I < iParam0; I++ )
        {
            if ((I == 0) || ((GET_NO_OF_PLAYERS_IN_TEAM( Result )) > (GET_NO_OF_PLAYERS_IN_TEAM( I ))))
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
            return sub_12313( 0, iParam0 );
        }
        else
        {
            iVar6 = sub_12313( 0, iVar5 );
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

int sub_99440(int iParam0)
{
    int I;
    int iVar4;
    int iVar5;

    iVar5 = GET_PLAYER_TEAM( sub_19026( iParam0 ) );
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if ((GET_PLAYER_TEAM( sub_19026( I ) )) == iVar5)
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

void sub_99786()
{
    int iVar2;

    if (NOT N_604003528())
    {
        if (NETWORK_CHECK_INVITE_ARRIVAL())
        {
            GET_NETWORK_TIMER( ref l_U1272 );
            l_U1272 += 5000;
            NETWORK_CLEAR_INVITE_ARRIVAL();
        }
        GET_NETWORK_TIMER( ref iVar2 );
        if ((l_U1272 != 0) AND (l_U1272 > iVar2))
        {
            SET_WIDESCREEN_FORMAT( 3 );
            sub_86594( 0, 0.00000000, 1.50000000, 0, 0, 0, 0, 0, 255 );
            sub_92615( "INVITE_RECIEVED", sub_97992() + -0.05050000, 0.09800000, 0.35000000, 0.47800000, 255, 255, 255, 255, 3 );
            DRAW_SPRITE( l_U514[34], sub_97992() + -0.02050000, 0.10580000, 0.09570000, 0.06320000, 0.00000000, 255, 255, 255, 255 );
        }
    }
    return;
}

int sub_100105()
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
    sub_92184( 1 );
    GET_FRONTEND_DESIGN_VALUE( 113, ref uVar7, ref uVar8 );
    sub_86594( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    sub_92615( "RECENT_PLAYERS", sub_92555(), 0.08500000, uVar7, uVar8, 255, 255, 255, 255, 2 );
    sub_86594( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    GET_HUD_COLOUR( 56, ref uVar3, ref uVar4, ref uVar5, ref I );
    if (N_604003528())
    {
        sub_92615( "RECENTPLYRX360", sub_92555() + 0.00100000, fVar6, 0.31500000, 0.42950000, uVar3, uVar4, uVar5, 255, 2 );
    }
    else
    {
        sub_92615( "RECENTPLYRDESC", sub_92555() + 0.00100000, fVar6, 0.31500000, 0.42950000, uVar3, uVar4, uVar5, 255, 2 );
    }
    if (GET_IS_WIDESCREEN())
    {
        fVar6 = 0.21550000;
    }
    else
    {
        fVar6 = 0.21600000;
    }
    sub_89282( ref l_U1207, NETWORK_GET_NUM_PLAYERS_MET(), 0 );
    if (NETWORK_GET_NUM_PLAYERS_MET() > 16)
    {
        DRAW_FRONTEND_HELPER_TEXT( "UP_DOWN", "PAD_LT_RT", 0 );
        if (IS_BUTTON_JUST_PRESSED( 0, 7 ))
        {
            l_U1207 += 16;
            if (l_U1207 >= NETWORK_GET_NUM_PLAYERS_MET())
            {
                l_U1207 = NETWORK_GET_NUM_PLAYERS_MET() - 1;
            }
        }
        else if (IS_BUTTON_JUST_PRESSED( 0, 5 ))
        {
            l_U1207 -= 16;
            if (l_U1207 < 0)
            {
                l_U1207 = 0;
            }
        }
    }
    if (l_U1207 >= (l_U1208 + 16))
    {
        l_U1208 = (l_U1207 - 16) + 1;
    }
    else if (l_U1207 < l_U1208)
    {
        l_U1208 = l_U1207;
    }
    for ( I = l_U1208; I <= ((l_U1208 + 16) - 1); I++ )
    {
        if (I < NETWORK_GET_NUM_PLAYERS_MET())
        {
            sub_86594( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
            if (l_U1207 == I)
            {
                sub_100784( sub_92555(), fVar6, 0.35000000, 0.47750000, 255, 255, 255, 255, 2, NETWORK_GET_MET_PLAYER_NAME( I ) );
            }
            else
            {
                sub_100784( sub_92555(), fVar6, 0.35000000, 0.47750000, uVar3, uVar4, uVar5, 255, 2, NETWORK_GET_MET_PLAYER_NAME( I ) );
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
    if (sub_88941())
    {
        PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
        NETWORK_SHOW_MET_PLAYER_FEEDBACK_UI( l_U1207 );
    }
    else if (sub_88219())
    {
        NETWORK_SHOW_MET_PLAYER_PROFILE_UI( l_U1207 );
    }
    else if (sub_87562())
    {
        return 1;
    };;;
    return 0;
}

void sub_100784(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam4, uParam5, uParam6, uParam7 );
    SET_TEXT_SCALE( uParam2, uParam3 );
    sub_86931( uParam8, ref uParam0 );
    Result = GET_STRING_WIDTH_WITH_STRING( "STRING", uParam9 );
    DISPLAY_TEXT_WITH_LITERAL_STRING( uParam0, uParam1, "STRING", uParam9 );
    return Result;
}

int sub_101370(unknown uParam0, boolean bParam1)
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
    sub_92184( 1 );
    GET_FRONTEND_DESIGN_VALUE( 113, ref uVar13, ref uVar14 );
    sub_86594( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    sub_92615( "INVITE_TITLE", sub_92555(), 0.08500000, uVar13, uVar14, 255, 255, 255, 255, 2 );
    sub_86594( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    GET_HUD_COLOUR( 56, ref iVar5, ref iVar6, ref iVar7, ref uVar8 );
    sub_92615( "INVITES_DESC", sub_92555() + 0.00100000, fVar12, 0.31500000, 0.42950000, iVar5, iVar6, iVar7, 255, 2 );
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
                DRAW_RECT( 0.57000000 + sub_92555(), 0.01370000 + fVar12, 1.15500000, 0.03800000, iVar5, iVar6, iVar7, 45 );
            }
            else
            {
                DRAW_RECT( 0.40200000 + sub_92555(), 0.01370000 + fVar12, 0.82000000, 0.03800000, iVar5, iVar6, iVar7, 45 );
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
    sub_89282( ref l_U1210, NETWORK_GET_FRIEND_COUNT(), 0 );
    if (NETWORK_GET_FRIEND_COUNT() > 16)
    {
        DRAW_FRONTEND_HELPER_TEXT( "UP_DOWN", "PAD_LT_RT", 0 );
        if (IS_BUTTON_JUST_PRESSED( 0, 7 ))
        {
            l_U1210 += 16;
            if (l_U1210 >= NETWORK_GET_FRIEND_COUNT())
            {
                l_U1210 = NETWORK_GET_FRIEND_COUNT() - 1;
            }
        }
        else if (IS_BUTTON_JUST_PRESSED( 0, 5 ))
        {
            l_U1210 -= 16;
            if (l_U1210 < 0)
            {
                l_U1210 = 0;
            }
        }
    }
    if (l_U1210 >= (l_U1211 + 16))
    {
        l_U1211 = (l_U1210 - 16) + 1;
    }
    else if (l_U1210 < l_U1211)
    {
        l_U1211 = l_U1210;
    }
    for ( I = l_U1211; I <= ((l_U1211 + 16) - 1); I++ )
    {
        if (I < NETWORK_GET_FRIEND_COUNT())
        {
            sub_86594( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
            if (l_U1210 == I)
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
            if (l_U19)
            {
                if (N_604003528())
                {
                    sub_100784( sub_92555(), fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2, "WWWWWWWWWWWWWWW" );
                }
                else
                {
                    sub_100784( sub_92555(), fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2, "WWWWWWWWWWWWWWWW" );
                }
            }
            else
            {
                SET_TEXT_USE_UNDERSCORE( 1 );
                sub_100784( sub_92555(), fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2, NETWORK_GET_FRIEND_NAME( I ) );
                SET_TEXT_USE_UNDERSCORE( 0 );
            }
            sub_86594( 0, 0.00000000, 1.50000000, 0, 0, 0, 0, 0, 255 );
            if (sub_102450( I ))
            {
                sub_92615( "INGAME", sub_92555() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
            }
            else if (sub_102605( I ))
            {
                sub_92615( "INVITING", sub_92555() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
                if (GET_CURRENT_EPISODE() == (NETWORK_GET_UNACCEPTED_INVITE_EPISODE( sub_102751( I ) )))
                {
                    StrCopy( ref cVar15, "NTGT_", 8 );
                    ConcatString(ref cVar15, NETWORK_GET_UNACCEPTED_INVITE_GAME_MODE( sub_102751( I ) ), 8);
                    sub_86594( 0, 0.00000000, 1.50000000, 0, 0, 0, 0, 0, 255 );
                    if (GET_IS_WIDESCREEN())
                    {
                        sub_92615( ref cVar15, sub_97992() + 0.32600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 3 );
                    }
                    else
                    {
                        sub_92615( ref cVar15, sub_97992() + -0.01100000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 3 );
                    }
                }
            }
            else if (NETWORK_DID_INVITE_FRIEND( NETWORK_GET_FRIEND_NAME( I ) ))
            {
                sub_92615( "INVITED", sub_92555() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
            }
            else if (NETWORK_IS_FRIEND_ONLINE( NETWORK_GET_FRIEND_NAME( I ) ))
            {
                sub_92615( "ONLINE", sub_92555() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
            }
            else
            {
                sub_92615( "OFFLINE", sub_92555() + 0.35600000, fVar12, 0.35000000, 0.47750000, iVar5, iVar6, iVar7, 255, 2 );
            };;;;
            if (NETWORK_IS_FRIEND_IN_SAME_TITLE( NETWORK_GET_FRIEND_NAME( I ) ))
            {
                DRAW_SPRITE( l_U514[33], sub_92555() + 0.33300000, fVar12 + 0.01520000, 0.03900000, 0.02600000, 0.00000000, iVar5, iVar6, iVar7, 255 );
            }
            fVar12 += 0.03600000;
        }
    }
    GET_NETWORK_TIMER( ref iVar9 );
    if (l_U1271 > (iVar9 - 5000))
    {
        SET_WIDESCREEN_FORMAT( 2 );
        sub_86594( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
        GET_FRONTEND_DESIGN_VALUE( 23, ref uVar11, ref fVar12 );
        GET_FRONTEND_DESIGN_VALUE( 24, ref uVar13, ref uVar14 );
        if (NOT bParam1)
        {
            SET_TEXT_USE_UNDERSCORE( 1 );
            sub_103463( "INVITED_PLAYER", uVar11, fVar12 + 0.04050000, uVar13, uVar14, 255, 255, 255, 255, 2, ref l_U1262 );
            SET_TEXT_USE_UNDERSCORE( 0 );
        }
    }
    INIT_FRONTEND_HELPER_TEXT();
    DRAW_FRONTEND_HELPER_TEXT( "BACK", "INPUT_F_CANCEL", 0 );
    if ((l_U1271 < (iVar9 - 5000)) || (l_U1270 != l_U1210))
    {
        l_U1270 = -1;
    }
    if (NOT (sub_102450( l_U1210 )))
    {
        if (sub_102605( l_U1210 ))
        {
            DRAW_FRONTEND_HELPER_TEXT( "ACCEPT_INVITE", "INPUT_F_ACCEPT", 0 );
        }
        else if ((NETWORK_IS_FRIEND_ONLINE( NETWORK_GET_FRIEND_NAME( l_U1210 ) )) AND ((l_U1270 == -1) || (NOT (NETWORK_DID_INVITE_FRIEND( NETWORK_GET_FRIEND_NAME( l_U1210 ) )))))
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
    if (sub_88219())
    {
        if (NETWORK_IS_FRIEND_ONLINE( NETWORK_GET_FRIEND_NAME( l_U1210 ) ))
        {
            if (NOT (sub_102450( l_U1210 )))
            {
                if (sub_102605( l_U1210 ))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    NETWORK_ACCEPT_INVITE( sub_102751( l_U1210 ) );
                }
                else if ((NETWORK_IS_FRIEND_ONLINE( NETWORK_GET_FRIEND_NAME( l_U1210 ) )) AND ((l_U1270 == -1) || (NOT (NETWORK_DID_INVITE_FRIEND( NETWORK_GET_FRIEND_NAME( l_U1210 ) )))))
                {
                    PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
                    NETWORK_INVITE_FRIEND( NETWORK_GET_FRIEND_NAME( l_U1210 ), "" );
                    StrCopy( ref l_U1262, NETWORK_GET_FRIEND_NAME( l_U1210 ), 32 );
                    l_U1270 = l_U1210;
                    GET_NETWORK_TIMER( ref l_U1271 );
                    l_U1272 = 0;
                }
            }
        }
    }
    else if (sub_87562())
    {
        return 1;
    }
    return 0;
}

int sub_102450(unknown uParam0)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (COMPARE_STRING( NETWORK_GET_FRIEND_NAME( uParam0 ), GET_PLAYER_NAME( sub_19026( I ) ) ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_102605(unknown uParam0)
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

int sub_102751(unknown uParam0)
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

void sub_103463(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_86931( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_STRING( uParam0, uParam10 );
    DISPLAY_TEXT_WITH_LITERAL_STRING( uParam1, uParam2, uParam0, uParam10 );
    return Result;
}

void sub_104284(unknown uParam0)
{
    unknown Result;

    GET_CHAR_MODEL( uParam0, ref Result );
    return Result;
}

void sub_104389(unknown uParam0, boolean bParam1)
{
    SET_PLAYER_CONTROL_FOR_NETWORK( sub_19026( uParam0 ), bParam1, 0 );
    SET_CHAR_VISIBLE( sub_16771( uParam0 ), bParam1 );
    if (bParam1)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_16771( uParam0 ) )))
        {
            SET_CHAR_COLLISION( sub_16771( uParam0 ), 1 );
        }
        FREEZE_CHAR_POSITION( sub_16771( uParam0 ), 0 );
        SET_CHAR_NEVER_TARGETTED( sub_16771( uParam0 ), 0 );
        SET_PLAYER_INVINCIBLE( sub_19026( uParam0 ), 0 );
    }
    else
    {
        SET_CHAR_COLLISION( sub_16771( uParam0 ), 0 );
        FREEZE_CHAR_POSITION( sub_16771( uParam0 ), 1 );
        SET_CHAR_NEVER_TARGETTED( sub_16771( uParam0 ), 1 );
        SET_PLAYER_INVINCIBLE( sub_19026( uParam0 ), 1 );
        REMOVE_PTFX_FROM_PED( sub_16771( uParam0 ) );
        if (NOT (IS_CHAR_FATALLY_INJURED( sub_16771( uParam0 ) )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_16771( uParam0 ) );
        }
    }
    return;
}

void sub_104961(unknown uParam0)
{
    unknown Result;
    unknown uVar4;

    GET_FRONTEND_DESIGN_VALUE( uParam0, ref Result, ref uVar4 );
    return Result;
}

void sub_104994(unknown uParam0)
{
    unknown uVar3;
    unknown Result;

    GET_FRONTEND_DESIGN_VALUE( uParam0, ref uVar3, ref Result );
    return Result;
}

void sub_105153(boolean bParam0)
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
            if (sub_85120( I ))
            {
                if (GET_NUMBER_OF_PLAYERS() > 4)
                {
                    bVar8 = false;
                }
            }
        }
        if (bVar8)
        {
            if (l_U1001 == I)
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
        else if (l_U1001 != I)
        {
            iVar4 = 60;
            iVar5 = 60;
            iVar6 = 60;
        }
        sub_86594( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
        sub_92615( sub_105386( I ), fVar9, fVar10, 0.35000000, 0.47750000, iVar4, iVar5, iVar6, 255, 1 );
        fVar10 += 0.03600000;
    }
    return;
}

string sub_105386(unknown uParam0)
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

void sub_106699(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if ((sub_1248() == 16) || ((GET_PLAYER_TEAM( uParam0 )) == -1))
    {
        GET_PLAYER_RGB_COLOUR( uParam0, uParam1, uParam2, uParam3 );
    }
    else
    {
        GET_TEAM_RGB_COLOUR( GET_PLAYER_TEAM( uParam0 ), uParam1, uParam2, uParam3 );
    }
    return;
}

void sub_108454(unknown uParam0)
{
    g_U13 = uParam0;
    sub_97137();
    return;
}

void sub_108763(boolean bParam0)
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
        fVar7 = sub_92555();
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
    ConcatString(ref cVar9, sub_1248(), 16);
    if (l_U1193 == 1)
    {
        ConcatString(ref cVar9, "A", 16);
    }
    else if (l_U1193 == 2)
    {
        ConcatString(ref cVar9, "B", 16);
    }
    if (NOT bParam0)
    {
        SET_WIDESCREEN_FORMAT( 3 );
    }
    SET_TEXT_LINE_HEIGHT_MULT( 1.25000000 );
    if ((bParam0) AND (GET_IS_WIDESCREEN()))
    {
        sub_86594( 0, fVar7, sub_97992() * 1.20000000, 0, 0, 0, 0, 0, 255 );
    }
    else
    {
        sub_86594( 0, fVar7, sub_97992(), 0, 0, 0, 0, 0, 255 );
    }
    GET_HUD_COLOUR( 56, ref uVar3, ref uVar4, ref uVar5, ref uVar6 );
    sub_92615( ref cVar9, fVar7, fVar8, 0.31500000, 0.42950000, uVar3, uVar4, uVar5, 255, 2 );
    return;
}

int sub_109102(unknown uParam0)
{
    int I;

    for ( I = 0; I < 21; I++ )
    {
        if (l_U1002[I]._fU16 == 8)
        {
            (uParam0^) = I;
            return 1;
        }
    }
    return 0;
}

int sub_109198(unknown uParam0, unknown uParam1)
{
    int I;
    char[16] cVar5;

    if (l_U552)
    {
        return 1;
    }
    StrCopy( ref l_U1254, uParam0, 16 );
    l_U551 = uParam1;
    REQUEST_STREAMED_TXD( uParam0, 1 );
    if (HAS_STREAMED_TXD_LOADED( uParam0 ))
    {
        for ( I = 0; I < l_U551; I++ )
        {
            StrCopy( ref cVar5, uParam0, 16 );
            ConcatString(ref cVar5, I, 16);
            l_U554[I] = GET_TEXTURE_FROM_STREAMED_TXD( uParam0, ref cVar5 );
        }
        l_U552 = 1;
        return 1;
    }
    return 0;
}

float sub_111067(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8, int iParam9, unknown uParam10)
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
        sub_87216( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar20 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_87216( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar21 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_92615( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 += fVar25;
        fVar26 += fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_87216( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar18 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_87216( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar19 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_92615( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 += fVar25;
        fVar26 += fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_87216( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar16 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_87216( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar17 );
    }
    else if (iParam8 == 3)
    {
        fVar26 = uParam0 - (fVar22 / 2);
        sub_87216( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar17 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_87216( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar16 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_92615( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 -= fVar25;
        fVar26 -= fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_87216( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar19 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_87216( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar18 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_92615( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 -= fVar25;
        fVar26 -= fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_87216( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar21 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_87216( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar20 );
    }
    else
    {
        fVar26 = uParam0 + fVar24;
        sub_87216( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar19 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_92615( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_87216( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar16 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_87216( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar17 );
        fVar26 = uParam0 - fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_87216( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar18 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_92615( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_87216( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar21 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_87216( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar20 );
    }
    return (6 * fVar22) + (2 * fVar23);
}

void sub_113098(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    float Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_86931( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_NUMBER( uParam0, uParam10 );
    Result += GET_STRING_WIDTH_WITH_NUMBER( "NUMBER", uParam11 );
    Result -= GET_STRING_WIDTH_WITH_NUMBER( "NUMBER", 11 );
    DISPLAY_TEXT_WITH_2_NUMBERS( uParam1, uParam2, uParam0, uParam10, uParam11 );
    return Result;
}

int sub_113915()
{
    if (sub_11073())
    {
        if (sub_11073())
        {
            return 1;
        }
    }
    else if ((sub_18503()) || (sub_11028()))
    {
        return 1;
    }
    return 0;
}

int sub_114246()
{
    int I;
    int Result;

    for ( I = 0; I < 8; I++ )
    {
        if ((sub_82476( I )) > 0)
        {
            Result++;
            if (I == (GET_PLAYER_TEAM( sub_90115() )))
            {
                return Result;
            }
        }
    }
    return 0;
}

float sub_115720()
{
    if (GET_IS_WIDESCREEN())
    {
        return 0.02700000;
    }
    return 0.02100000;
}

void sub_116292(int iParam0, unknown uParam1, float fParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7, unknown uParam8)
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

    sub_116309( iParam0, ref iVar12, ref iVar13, ref iVar14 );
    if (((iParam7 == 3) || (iParam7 == 2)) AND (l_U1260))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( iParam0 ))
        {
            if ((l_U980[iParam0]) || (IS_CHAR_DEAD( sub_16771( iParam0 ) )))
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
            if (l_U577[(uParam1^)[I]]._fU16 > 0)
            {
                iVar16 = 3;
                if ((iParam7 == 8) || ((iParam7 == 7) || (iParam7 == 6)))
                {
                    iVar16 = 1;
                }
                sub_86594( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                if (l_U577[(uParam1^)[I]]._fU16 != 1)
                {
                    if ((iParam7 == 8) || ((iParam7 == 7) || (iParam7 == 6)))
                    {
                        fParam2 += (sub_116684( l_U577[(uParam1^)[I]]._fU16 )) * 0.50000000;
                    }
                }
                switch (l_U577[(uParam1^)[I]]._fU16)
                {
                    case 1:
                    if ((iParam7 == 8) || ((iParam7 == 7) || (iParam7 == 6)))
                    {
                        if (sub_117043( iParam0 ))
                        {
                            iVar12 = 60;
                            iVar13 = 60;
                            iVar14 = 60;
                        }
                        else
                        {
                            sub_116309( iParam0, ref iVar12, ref iVar13, ref iVar14 );
                        }
                        if (l_U19)
                        {
                            if (N_604003528())
                            {
                                sub_100784( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, 2, "WWWWWWWWWWWWWWW" );
                            }
                            else
                            {
                                sub_100784( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, 2, "WWWWWWWWWWWWWWWW" );
                            }
                        }
                        else
                        {
                            SET_TEXT_USE_UNDERSCORE( 1 );
                            sub_100784( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, 2, sub_117289( iParam0 ) );
                            SET_TEXT_USE_UNDERSCORE( 0 );
                        }
                        if ((NOT N_604003528()) || (sub_85056()))
                        {
                            if (IS_NETWORK_PLAYER_ACTIVE( iParam0 ))
                            {
                                if (iParam0 != GET_PLAYER_ID())
                                {
                                    l_U1172[iParam0] = GET_PLAYER_RANK_LEVEL_DURING_MP( iParam0 );
                                }
                                if ((GET_PLAYER_RANK_LEVEL_DURING_MP( iParam0 )) > -1)
                                {
                                    if (GET_IS_WIDESCREEN())
                                    {
                                        DRAW_SPRITE( l_U514[17 + (GET_PLAYER_RANK_LEVEL_DURING_MP( iParam0 ))], fParam2 + 0.33450000, (uParam3^) + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
                                    }
                                    else if (N_604003528())
                                    {
                                        DRAW_SPRITE( l_U514[17 + (GET_PLAYER_RANK_LEVEL_DURING_MP( iParam0 ))], fParam2 + 0.27500000, (uParam3^) + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
                                    }
                                    else
                                    {
                                        DRAW_SPRITE( l_U514[17 + (GET_PLAYER_RANK_LEVEL_DURING_MP( iParam0 ))], fParam2 + 0.29500000, (uParam3^) + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
                                    }
                                }
                            }
                            else if (l_U1172[iParam0] > -1)
                            {
                                if (GET_IS_WIDESCREEN())
                                {
                                    DRAW_SPRITE( l_U514[17 + l_U1172[iParam0]], fParam2 + 0.33450000, (uParam3^) + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
                                }
                                else
                                {
                                    DRAW_SPRITE( l_U514[17 + l_U1172[iParam0]], fParam2 + 0.27500000, (uParam3^) + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
                                }
                            }
                        }
                        fParam2 += (sub_116684( 1 )) - uVar19;
                    }
                    else if ((iParam7 == 10) || (iParam7 == 9))
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
                            if (l_U963[iParam0])
                            {
                                iVar12 = 60;
                                iVar13 = 60;
                                iVar14 = 60;
                            }
                            fParam2 += 0.01700000;
                        }
                    }
                    if (l_U19)
                    {
                        if ((iParam7 == 10) || (iParam7 == 9))
                        {
                            if (GET_IS_WIDESCREEN())
                            {
                                if (N_604003528())
                                {
                                    uVar22 = sub_118279( 0.29700000, uParam4, sub_118077( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, "WWWWWWWWWWWWWWW" ) );
                                }
                                else
                                {
                                    uVar22 = sub_118279( 0.29700000, uParam4, sub_118077( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, "WWWWWWWWWWWWWWWW" ) );
                                }
                            }
                            else if (N_604003528())
                            {
                                uVar22 = sub_118279( 0.23900000, uParam4, sub_118077( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, "WWWWWWWWWWWWWWW" ) );
                            }
                            else
                            {
                                uVar22 = sub_118279( 0.23900000, uParam4, sub_118077( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, "WWWWWWWWWWWWWWWW" ) );
                            }
                            sub_86594( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                            SET_TEXT_USE_UNDERSCORE( 1 );
                        }
                        else
                        {
                            uVar22 = uParam4;
                        }
                        if (N_604003528())
                        {
                            sub_100784( fParam2, (uParam3^) + fVar20, uVar22, uParam5, iVar12, iVar13, iVar14, 255, 2, "WWWWWWWWWWWWWWW" );
                        }
                        else
                        {
                            sub_100784( fParam2, (uParam3^) + fVar20, uVar22, uParam5, iVar12, iVar13, iVar14, 255, 2, "WWWWWWWWWWWWWWWW" );
                        }
                    }
                    else if ((iParam7 == 10) || (iParam7 == 9))
                    {
                        if (GET_IS_WIDESCREEN())
                        {
                            uVar22 = sub_118279( 0.29700000, uParam4, sub_118077( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, sub_117289( iParam0 ) ) );
                        }
                        else
                        {
                            uVar22 = sub_118279( 0.23900000, uParam4, sub_118077( 0, 0.00000000, 1.00000000, 0, 0, uParam4, uParam5, sub_117289( iParam0 ) ) );
                        }
                        sub_86594( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                        SET_TEXT_USE_UNDERSCORE( 1 );
                    }
                    else
                    {
                        uVar22 = uParam4;
                    }
                    SET_TEXT_USE_UNDERSCORE( 1 );
                    sub_100784( fParam2, (uParam3^) + fVar20, uVar22, uParam5, iVar12, iVar13, iVar14, 255, 2, sub_117289( iParam0 ) );
                    SET_TEXT_USE_UNDERSCORE( 0 );;;
                    break;
                    case 2:
                    case 7:
                    if (NOT (sub_117043( iParam0 )))
                    {
                        sub_87216( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, l_U577[(uParam1^)[I]]._fU24[iParam0] );
                    }
                    break;
                    case 3:
                    if (NOT (sub_117043( iParam0 )))
                    {
                        if (l_U577[(uParam1^)[I]]._fU24[iParam0] > 0)
                        {
                            sub_119571( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, sub_119046( iParam0 ) );
                        }
                    }
                    break;
                    case 4:
                    if (NOT (sub_117043( iParam0 )))
                    {
                        if ((l_U577[(uParam1^)[I]]._fU24[iParam0] > -2147483648) AND (l_U577[(uParam1^)[I]]._fU24[iParam0] < 2147483647))
                        {
                            sub_111067( fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, l_U577[(uParam1^)[I]]._fU24[iParam0], 1.00000000 );
                        }
                    }
                    break;
                    case 5:
                    case 6:
                    if ((iParam7 != 6) || (NOT l_U1261))
                    {
                        if (NOT (sub_117043( iParam0 )))
                        {
                            if ((sub_1248() != 1) AND (((sub_119939( iParam0 )) > -1) AND ((sub_11073()) || (sub_11028()))))
                            {
                                sub_86891( "CASH", fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, (l_U954[sub_119939( iParam0 )]) / (sub_120062( sub_119939( iParam0 ) )) );
                            }
                            else
                            {
                                sub_86891( "CASH", fParam2, (uParam3^), uParam4, uParam5, iVar12, iVar13, iVar14, 255, iVar16, l_U577[(uParam1^)[I]]._fU24[iParam0] );
                            }
                        }
                    }
                    break;
                }
                if (l_U577[(uParam1^)[I]]._fU16 != 1)
                {
                    if ((iParam7 == 8) || ((iParam7 == 7) || (iParam7 == 6)))
                    {
                        fParam2 += (sub_116684( l_U577[(uParam1^)[I]]._fU16 )) * 0.50000000;
                    }
                }
            }
        }
    }
    if ((iParam7 == 8) || ((iParam7 == 7) || (iParam7 == 6)))
    {
        (uParam3^) += uParam6;
    }
    return;
}

void sub_116309(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (l_U875)
    {
        (uParam1^) = l_U746[uParam0]._fU20;
        (uParam2^) = l_U746[uParam0]._fU24;
        (uParam3^) = l_U746[uParam0]._fU28;
    }
    else
    {
        sub_106699( sub_19026( uParam0 ), uParam1, uParam2, uParam3 );
    }
    return;
}

float sub_116684(unknown uParam0)
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

void sub_117043(unknown uParam0)
{
    if (l_U875)
    {
        return l_U746[uParam0]._fU8;
    }
    return l_U963[uParam0];
}

void sub_117289(unknown uParam0)
{
    if (l_U875)
    {
        return l_U746[uParam0]._fU0;
    }
    return GET_PLAYER_NAME( sub_19026( uParam0 ) );
}

void sub_118077(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
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

void sub_118279(float fParam0, unknown Result, float fParam2)
{
    if (fParam2 > fParam0)
    {
        return (fParam0 * Result) / fParam2;
        break;
    }
    return Result;
}

void sub_119046(unknown uParam0)
{
    if (l_U875)
    {
        return l_U746[uParam0]._fU16;
    }
    return sub_119081( uParam0 );
}

int sub_119081(int iParam0)
{
    int I;
    int iVar4;
    int Result;

    if (sub_119092( iParam0 ))
    {
        for ( I = 0; I < 16; I++ )
        {
            iVar4 = l_U577[0]._fU24[I];
            if ((NOT l_U963[iVar4]) AND (IS_NETWORK_PLAYER_ACTIVE( iVar4 )))
            {
                Result++;
                if (l_U577[sub_119192()]._fU24[iVar4] == l_U577[sub_119192()]._fU24[iParam0])
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
            iVar4 = l_U577[0]._fU24[I];
            if ((NOT l_U963[iVar4]) AND (IS_NETWORK_PLAYER_ACTIVE( iVar4 )))
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

int sub_119092(int iParam0)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (I != iParam0)
        {
            if ((NOT (sub_117043( I ))) AND (sub_119125( I )))
            {
                if (l_U577[sub_119192()]._fU24[I] == l_U577[sub_119192()]._fU24[iParam0])
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_119125(unknown uParam0)
{
    if (l_U875)
    {
        return l_U746[uParam0]._fU4;
    }
    return IS_NETWORK_PLAYER_ACTIVE( uParam0 );
}

int sub_119192()
{
    int Result;

    for ( Result = 0; Result < 7; Result++ )
    {
        if ((l_U577[Result]._fU16 == 3) || ((l_U577[Result]._fU16 == 6) || (l_U577[Result]._fU16 == 7)))
        {
            return Result;
        }
    }
    return 1;
}

void sub_119571(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, int iParam9)
{
    if (iParam9 == 1)
    {
        return sub_92615( "FIRST", uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8 );
    }
    if (iParam9 == 2)
    {
        return sub_92615( "SECOND", uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8 );
    }
    if (iParam9 == 3)
    {
        return sub_92615( "THIRD", uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8 );
    }
    return sub_86891( "NTH", uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, iParam9 );
}

void sub_119939(unknown uParam0)
{
    if (l_U875)
    {
        return l_U746[uParam0]._fU12;
    }
    return GET_PLAYER_TEAM( sub_19026( uParam0 ) );
}

void sub_120062(int iParam0)
{
    int I;
    int Result;

    if (l_U875)
    {
        for ( I = 0; I < 16; I++ )
        {
            if ((NOT l_U746[I]._fU8) AND (l_U746[I]._fU4))
            {
                if (l_U746[I]._fU12 == iParam0)
                {
                    Result++;
                }
            }
        }
        return Result;
    }
    for ( I = 0; I < 16; I++ )
    {
        if ((NOT l_U963[I]) AND (IS_NETWORK_PLAYER_ACTIVE( I )))
        {
            if ((GET_PLAYER_TEAM( sub_19026( I ) )) == iParam0)
            {
                Result++;
            }
        }
    }
    return Result;
}

void sub_120683(int iParam0, boolean bParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    iVar7 = 3;
    GET_HUD_COLOUR( 56, ref uVar8, ref uVar9, ref uVar10, ref iVar6 );
    GET_NETWORK_TIMER( ref iVar6 );
    if ((sub_120722( iParam0 )) > 0)
    {
        if ((NOT N_604003528()) || (sub_85056()))
        {
            iVar7 = 4;
        }
        if (l_U1277 > iVar6)
        {
            DRAW_SPRITE( l_U514[10], uParam2 + (-0.02400000 * iVar7), uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
        }
        else
        {
            sub_86594( 0, sub_92555(), sub_97992(), 0, 0, 0, 0, 0, 255 );
            sub_87216( (uParam2 + (-0.02400000 * iVar7)) + -0.00030000, (uParam3 + 0.01300000) + -0.01320000, 0.31500000, 0.42950000, 255, 255, 255, 255, 1, sub_120722( iParam0 ) );
            if (l_U1277 < (iVar6 - 1000))
            {
                l_U1277 = iVar6 + 1000;
            }
        }
    }
    if (((GET_PLAYER_RANK_LEVEL_DURING_MP( iParam0 )) > -1) AND ((NOT N_604003528()) || (sub_85056())))
    {
        DRAW_SPRITE( l_U514[17 + (GET_PLAYER_RANK_LEVEL_DURING_MP( iParam0 ))], uParam2 + (-0.02400000 * 3), uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
    }
    if (GET_HOST_ID() == iParam0)
    {
        DRAW_SPRITE( l_U514[32], uParam2 + (-0.02400000 * 2), uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
    }
    if (NETWORK_PLAYER_HAS_HEADSET( iParam0 ))
    {
        if (NETWORK_IS_PLAYER_MUTED_BY_ME( iParam0 ))
        {
            DRAW_SPRITE( l_U514[8], uParam2 + -0.02400000, uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, uVar8, uVar9, uVar10, 255 );
        }
        else if (NETWORK_IS_PLAYER_TALKING( iParam0 ))
        {
            DRAW_SPRITE( l_U514[7], uParam2 + -0.02400000, uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
        }
        else
        {
            DRAW_SPRITE( l_U514[7], uParam2 + -0.02400000, uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, uVar8, uVar9, uVar10, 255 );
        }
    }
    if (bParam1)
    {
        DRAW_SPRITE( l_U514[28], uParam2, uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, 255, 255, 255, 255 );
    }
    else
    {
        DRAW_SPRITE( l_U514[12], uParam2, uParam3 + 0.01300000, 0.02400000, 0.03400000, 0.00000000, uVar8, uVar9, uVar10, 255 );
    }
    return;
}

void sub_120722(int iParam0)
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
                    if (l_U902[I] == iParam0)
                    {
                        Result++;
                    }
                }
            }
        }
    }
    return Result;
}

void sub_122476(int iParam0, boolean bParam1, unknown uParam2)
{
    int iVar5;
    unknown uVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    uVar11 = sub_122485();
    if (IS_NETWORK_GAME_RUNNING())
    {
        GET_NETWORK_TIMER( ref iVar5 );
        if (NETWORK_IS_SESSION_STARTED())
        {
            if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
            {
                if (l_U1337)
                {
                    l_U1337 = 0;
                }
                switch (uVar11)
                {
                    case 1:
                    if (NOT sub_122715())
                    {
                        if (iParam0 != l_U1334)
                        {
                            sub_122784( iParam0 );
                            iParam0 = l_U1334;
                        }
                    }
                    else if (NOT l_U1336)
                    {
                        l_U1335 = iVar5 + 25000;
                        l_U1336 = 1;
                        sub_122784( iParam0 );
                    }
                    else if (l_U1335 < iVar5)
                    {
                        l_U1336 = 0;
                    };;;
                    break;
                    case 2:
                    if (NOT l_U1336)
                    {
                        l_U1335 = iVar5 + 45000;
                        l_U1336 = 1;
                        iVar7 = iParam0 - iVar5;
                        iVar7 = iVar7 / 60000;
                        if (NOT bParam1)
                        {
                            sub_122805();
                            SET_RICH_PRESENCE_TEMPLATEMP3( iVar7 + 1, sub_1248() );
                        }
                        else if (NOT sub_123069())
                        {
                            sub_122805();
                            SET_RICH_PRESENCE_TEMPLATEMP6( sub_123140(), iParam0, sub_1248() );
                        }
                        else
                        {
                            sub_122805();
                            SET_RICH_PRESENCE_TEMPLATEMP6( uParam2, iParam0, sub_1248() );
                        }
                    }
                    else if (l_U1335 < iVar5)
                    {
                        l_U1336 = 0;
                    }
                    break;
                    case 3:
                    if (l_U1334 != sub_10481())
                    {
                        sub_122805();
                        SET_RICH_PRESENCE_TEMPLATEMP5( 3, sub_10481(), sub_1248() );
                        l_U1334 = sub_10481();
                    }
                    break;
                    case 0:
                    if (NOT l_U1336)
                    {
                        l_U1335 = iVar5 + 45000;
                        l_U1336 = 1;
                        sub_122805();
                        SET_RICH_PRESENCE_TEMPLATEMP2( sub_1248() );
                    }
                    else if (l_U1335 < iVar5)
                    {
                        l_U1336 = 0;
                    }
                    break;
                }
            }
        }
        else if (NOT l_U1337)
        {
            if (NOT NETWORK_IS_SESSION_STARTED())
            {
                if (sub_1248() == 16)
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
                    {
                        GET_CHAR_COORDINATES( sub_9794(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                        if ((GET_MAP_AREA_FROM_COORDS( uVar8 )) != 5)
                        {
                            if (NOT l_U1336)
                            {
                                l_U1335 = iVar5 + 45000;
                                l_U1336 = 1;
                                sub_122805();
                                SET_RICH_PRESENCE_TEMPLATEMP2( sub_1248() );
                            }
                            else if (l_U1335 < iVar5)
                            {
                                l_U1336 = 0;
                            }
                        }
                    }
                }
                else if (sub_1248() == 8)
                {
                    SET_RICH_PRESENCE_TEMPLATEPARTY();
                    l_U1337 = 1;
                }
                else
                {
                    sub_122805();
                    SET_RICH_PRESENCE_TEMPLATELOBBY( sub_1248() );
                    l_U1336 = 0;
                    l_U1337 = 1;
                }
            }
        }
    }
    return;
}

int sub_122485()
{
    switch (sub_1248())
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

int sub_122715()
{
    int iVar2;

    iVar2 = sub_1248();
    if ((iVar2 == 6) || ((iVar2 == 8) || (iVar2 == 7)))
    {
        return 1;
    }
    return 0;
}

void sub_122784(int iParam0)
{
    if (l_U1338 == 0)
    {
        sub_122805();
        SET_RICH_PRESENCE_TEMPLATEMP1( 1, sub_119046( GET_PLAYER_ID() ), sub_10481(), sub_1248() );
        l_U1338 = 1;
    }
    else if ((iParam0 < 60) AND (iParam0 > 0))
    {
        sub_122805();
        SET_RICH_PRESENCE_TEMPLATEMP4( iParam0, sub_1248() );
        l_U1338 = 0;
    }
    return;
}

void sub_122805()
{
    return;
}

int sub_123069()
{
    int iVar2;

    iVar2 = NETWORK_GET_GAME_MODE();
    if ((iVar2 == 4) || ((iVar2 == 3) || ((iVar2 == 1) || ((iVar2 == 12) || (iVar2 == 10)))))
    {
        return 1;
    }
    return 0;
}

void sub_123140()
{
    unknown Result;

    if (IS_PLAYER_PLAYING( sub_90115() ))
    {
        STORE_SCORE( sub_90115(), ref Result );
    }
    return Result;
}

void sub_123716()
{
    GET_NETWORK_TIMER( ref l_U1415 );
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        sub_123755();
        l_U1412 = 1;
    }
    return;
}

void sub_123755()
{
    if (l_U1393[17])
    {
        if ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 63965, 27.00000000, 10.00000000, 4.50000000, -1413798865 )) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -1580.10000000, 1.25000000, 8.10000000, 4.50000000, -1413798865 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1413798865, -1580.10000000, 1.25000000, 8.10000000, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1413798865, 63965, 27.00000000, 10.00000000, 1, 0.00000000 );
            l_U1393[17] = 1;
        }
    }
    if (NOT l_U1393[0])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1345._fU0, l_U1345._fU4, l_U1345._fU8, 1.50000000, 807349477 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U1345, 1, 0.00000000 );
            l_U1393[0] = 1;
        }
    }
    if (NOT l_U1393[1])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1348._fU0, l_U1348._fU4, l_U1348._fU8, 1.50000000, 419786306 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 419786306, l_U1348, 1, 0.00000000 );
            l_U1393[1] = 1;
        }
    }
    if (l_U1393[2])
    {
        if ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 850.80000000, -517.80000000, 16.50000000, 1.50000000, 257820338 )) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1351._fU0, l_U1351._fU4, l_U1351._fU8, 1.50000000, -1452339441 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, l_U1351, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 257820338, 850.80000000, -517.80000000, 16.50000000, 1, 0.00000000 );
            l_U1393[2] = 1;
        }
    }
    if (NOT l_U1393[2])
    {
        if ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -28.00000000, -470.00000000, 16.00000000, 1.50000000, 866127123 )) AND ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -28.00000000, -467.00000000, 16.00000000, 1.50000000, -431164822 )) AND ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -28.00000000, -466.00000000, 16.00000000, 1.50000000, 866127123 )) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1354._fU0, l_U1354._fU4, l_U1354._fU8, 1.50000000, -431164822 )))))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -431164822, l_U1354, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 866127123, -28.00000000, -466.00000000, 16.00000000, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -431164822, -28.00000000, -467.00000000, 16.00000000, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 866127123, -28.00000000, -470.00000000, 16.00000000, 1, 0.00000000 );
            l_U1393[2] = 1;
        }
    }
    if (NOT l_U1393[4])
    {
        if ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -1246.00000000, 1560.00000000, 26.00000000, 1.50000000, -1452339441 )) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1357._fU0, l_U1357._fU4, l_U1357._fU8, 1.50000000, -1452339441 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, l_U1357, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, -1246.00000000, 1560.00000000, 26.00000000, 1, 0.00000000 );
            l_U1393[4] = 1;
        }
    }
    if (NOT l_U1393[5])
    {
        if ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -160.00000000, 593.00000000, 119.00000000, 1.50000000, -223135715 )) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1360._fU0, l_U1360._fU4, l_U1360._fU8, 1.50000000, -223135715 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -223135715, l_U1360, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -223135715, -160.00000000, 593.00000000, 119.00000000, 1, 0.00000000 );
            l_U1393[5] = 1;
        }
    }
    if (NOT l_U1393[5])
    {
        if ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 76, 64857, 15, 1.50000000, -602166187 )) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1363._fU0, l_U1363._fU4, l_U1363._fU8, 1.50000000, -134192122 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -134192122, l_U1363, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -602166187, 76, 64857, 15, 1, 0.00000000 );
            l_U1393[5] = 1;
        }
    }
    if (NOT l_U1393[7])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1366._fU0, l_U1366._fU4, l_U1366._fU8, 1.50000000, 804737190 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 804737190, l_U1366, 1, 0.00000000 );
            l_U1393[7] = 1;
        }
    }
    if (NOT l_U1393[8])
    {
        if ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 928, 65047, 16, 1.50000000, 387699963 )) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1369._fU0, l_U1369._fU4, l_U1369._fU8, 1.50000000, 387699963 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 387699963, l_U1369, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 387699963, 928, 65047, 16, 1, 0.00000000 );
            l_U1393[8] = 1;
        }
    }
    if (NOT l_U1393[9])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1372._fU0, l_U1372._fU4, l_U1372._fU8, 1.50000000, 807349477 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U1372, 1, 0.00000000 );
            l_U1393[9] = 1;
        }
    }
    if (NOT l_U1393[10])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 65439, 878, 15, 1.50000000, 419786306 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 419786306, 65439, 878, 15, 1, 0.00000000 );
            l_U1393[10] = 1;
        }
    }
    if (NOT l_U1393[11])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 64574, 893, 14, 1.50000000, 419786306 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 419786306, 64574, 893, 14, 0, 0.00000000 );
            l_U1393[11] = 1;
        }
    }
    if (NOT l_U1393[12])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 597, 1400, 12, 1.50000000, 261592072 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 261592072, 597, 1400, 12, 1, 0.00000000 );
            l_U1393[12] = 1;
        }
    }
    if (NOT l_U1393[13])
    {
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1384._fU0, l_U1384._fU4, l_U1384._fU8, 1.50000000, 1033979537 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1033979537, l_U1384, 1, 0.00000000 );
            l_U1393[13] = 1;
        }
    }
    if (NOT l_U1393[14])
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_9794(), l_U1387._fU0, l_U1387._fU4, l_U1387._fU8, 30.00000000, 30.00000000, 12.50000000, 0 ))
        {
            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U1387._fU0, l_U1387._fU4, l_U1387._fU8, 4.50000000, 1135556036 ))
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1135556036, l_U1387, 1, 0.00000000 );
                l_U1393[14] = 1;
            }
        }
    }
    if (NOT l_U1393[15])
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_9794(), 1286.00000000, 400.00000000, 23.00000000, 30.00000000, 30.00000000, 12.50000000, 0 ))
        {
            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 1286, 400, 23, 4.50000000, -842872319 ))
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -842872319, 1286, 400, 23, 1, 0.00000000 );
                l_U1393[15] = 1;
            }
        }
    }
    return;
}

void sub_126128(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16)
{
    int I;
    int iVar20;
    unknown[16] uVar21;
    unknown uVar38;

    iVar20 = GET_PLAYER_ID();
    array(ref uVar21, 16);
    sub_126195( ref uVar21, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam9, uParam10, uParam11, uParam12, uParam13, uParam14, uParam15, uParam16 );
    sub_126386( ref uVar21[iVar20], g_U18._fU636, g_U18._fU632 );
    if (NOT g_U18._fU1492)
    {
        switch (g_U18._fU632)
        {
            case 0:
            for ( I = 0; I <= (iParam0 - 1); I++ )
            {
                if ((IS_NETWORK_PLAYER_ACTIVE( I )) AND (I != iVar20))
                {
                    if (((sub_126575( ref uVar21[I] )) == 3) AND ((sub_126535( ref uVar21[I] )) == iVar20))
                    {
                        if ((NOT (NETWORK_AM_I_BLOCKED_BY_PLAYER( I ))) AND (NOT (NETWORK_IS_PLAYER_BLOCKED_BY_ME( I ))))
                        {
                            StrCopy( ref g_U18._fU584, GET_PLAYER_NAME( sub_19026( I ) ), 32 );
                            sub_9328( ref uVar21[iVar20], I, 1 );
                            break;
                        }
                    }
                }
            }
            break;
            case 1:
            if (g_U18._fU636 == 31)
            {
                sub_9328( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if (IS_NETWORK_PLAYER_ACTIVE( g_U18._fU636 ))
            {
                if (NOT (sub_126768( iVar20, g_U18._fU636, ref uVar38 )))
                {
                    sub_9328( ref uVar21[iVar20], 31, 4 );
                    break;
                }
                switch (sub_126575( ref uVar21[g_U18._fU636] ))
                {
                    case 3:
                    case 9: if ((sub_126535( ref uVar21[g_U18._fU636] )) == iVar20)
                    {
                        break;
                    }
                    default:
                    sub_9328( ref uVar21[iVar20], 31, 4 );
                    break;
                }
            }
            else
            {
                sub_9328( ref uVar21[iVar20], 31, 4 );
            }
            break;
            case 2:
            if (g_U18._fU636 == 31)
            {
                sub_9328( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if (IS_NETWORK_PLAYER_ACTIVE( g_U18._fU636 ))
            {
                if ((sub_126575( ref uVar21[g_U18._fU636] )) == 0)
                {
                    sub_9328( ref uVar21[iVar20], g_U18._fU636, 3 );
                    break;
                }
            }
            sub_9328( ref uVar21[iVar20], 31, 6 );
            break;
            case 3:
            if (g_U18._fU636 == 31)
            {
                sub_9328( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if (IS_NETWORK_PLAYER_ACTIVE( g_U18._fU636 ))
            {
                if (NOT (sub_126768( iVar20, g_U18._fU636, ref uVar38 )))
                {
                    sub_9328( ref uVar21[iVar20], 31, 4 );
                    break;
                }
                switch (sub_126575( ref uVar21[g_U18._fU636] ))
                {
                    case 0: break;
                    case 9:
                    case 1:
                    if ((sub_126535( ref uVar21[g_U18._fU636] )) == iVar20)
                    {
                        if ((sub_126575( ref uVar21[g_U18._fU636] )) == 9)
                        {
                            sub_9328( ref uVar21[iVar20], g_U18._fU636, 9 );
                        }
                        break;
                    }
                    sub_9328( ref uVar21[iVar20], 31, 6 );
                    break;
                    default:
                    sub_9328( ref uVar21[iVar20], 31, 4 );
                    break;
                }
            }
            else
            {
                sub_9328( ref uVar21[iVar20], 31, 6 );
            }
            break;
            case 9:
            if (g_U18._fU636 == 31)
            {
                sub_9328( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if (NOT (sub_126768( iVar20, g_U18._fU636, ref uVar38 )))
            {
                sub_9328( ref uVar21[iVar20], 31, 4 );
                break;
            }
            if ((sub_126535( ref uVar21[g_U18._fU636] )) != iVar20)
            {
                sub_9328( ref uVar21[iVar20], 31, 4 );
            }
            break;
        }
    }
    sub_127583( iVar20, ref uVar21, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam9, uParam10, uParam11, uParam12, uParam13, uParam14, uParam15, uParam16 );
    return;
}

void sub_126195(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16)
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

void sub_126386(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_9359( uParam0, uParam1 );
    sub_9393( uParam0, uParam2 );
    return;
}

void sub_126535(unknown uParam0)
{
    return GET_BITS_IN_RANGE( (uParam0^), 0, 15 );
}

void sub_126575(unknown uParam0)
{
    return GET_BITS_IN_RANGE( (uParam0^), 16, 31 );
}

int sub_126768(unknown uParam0, int iParam1, unknown uParam2)
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

void sub_127583(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17)
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

int sub_128092(int iParam0)
{
    int iVar3;

    DISPLAY_CASH( 1 );
    STORE_SCORE( sub_90115(), ref iVar3 );
    if (iVar3 != iParam0)
    {
        iParam0 -= iVar3;
        ADD_SCORE( sub_90115(), iParam0 );
        return 1;
    }
    return 0;
}

int sub_128224(unknown uParam0)
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

int sub_128400(unknown uParam0, unknown uParam1)
{
    if ((l_U2014 < ((l_U1516._fU4 - sub_12441()) + 60000)) AND ((l_U1917[GET_PLAYER_ID()]._fU0 == 1) AND (sub_1248() == 3)))
    {
        if ((GET_PLAYER_TEAM( sub_90115() )) > -1)
        {
            if (sub_128521( l_U1516._fU508, l_U1516._fU584[GET_PLAYER_TEAM( sub_90115() )], uParam0, uParam1 ))
            {
                return 1;
            }
        }
    }
    else if (sub_128865( ref l_U1917[GET_PLAYER_ID()]._fU4, l_U1516._fU516[GET_PLAYER_ID()], uParam0, uParam1 ))
    {
        return 1;
    }
    return 0;
}

int sub_128521(unknown uParam0, int iParam1, int iParam2, unknown uParam3)
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
                if ((GET_PLAYER_TEAM( sub_90115() )) == (GET_PLAYER_TEAM( sub_19026( I ) )))
                {
                    iVar7++;
                }
            }
        }
        (uParam3^) = (360.00000000 / (TO_FLOAT( GET_NO_OF_PLAYERS_IN_TEAM( GET_PLAYER_TEAM( sub_90115() ) ) ))) * (TO_FLOAT( iVar7 ));
        uVar8 = SIN( (uParam3^) );
        uVar9 = COS( (uParam3^) );
        (iParam2^) = {sub_19861( uParam0, iParam1 )};
        iParam2->_fU0 += (uVar9 * 2.50000000) + (uVar8 * 2.50000000);
        iParam2->_fU4 += (uVar8 * 2.50000000) + ((uVar9 * -1) * 2.50000000);
        (uParam3^) = sub_66176( (uParam3^) + 45.00000000 );
        return 1;
    }
    return 0;
}

int sub_128865(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3)
{
    LOAD_ALL_PATH_NODES( 1 );
    if ((uParam0^) == 0)
    {
        if (iParam1 > 0)
        {
            if (LOAD_ALL_PATH_NODES( 1 ))
            {
                if (l_U5)
                {
                    GET_SPAWN_COORDINATES_FOR_CAR_NODE( iParam1, sub_18967( -1, 0 ), uParam2, uParam3 );
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

void sub_129089(unknown uParam0, unknown uParam1)
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
    (uParam1^) = sub_129301( Result );
    return Result;
}

int sub_129301(unknown uParam0)
{
    switch (uParam0)
    {
        case 7: return 30 * l_U1332;
        case 9: return 30 * l_U1332;
        case 10: return 16 * l_U1332;
        case 11: return 16 * l_U1332;
        case 12: return 60 * l_U1332;
        case 13: return 60 * l_U1332;
        case 14: return 80 * l_U1332;
        case 15: return 80 * l_U1332;
        case 16: return 12 * l_U1332;
        case 17: return 12 * l_U1332;
        case 5: return 3 * l_U1332;
        case 4: return 3 * l_U1332;
        case 18: return 2 * l_U1332;
    }
    return 0;
}

void sub_129597(unknown uParam0)
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

void sub_129841(unknown uParam0, unknown uParam1, unknown uParam2)
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
        GET_NETWORK_TIMER( ref l_U2014 );
        sub_10099();
    }
    return;
}

void sub_130176(unknown uParam0)
{
    int I;
    char[16] cVar4;

    sub_130187( uParam0 );
    DEACTIVATE_NETWORK_SETTINGS_MENU();
    SWITCH_OFF_WAYPOINT();
    for ( I = 0; I < 16; I++ )
    {
        l_U496[I] = 0;
    }
    if (IS_MOBILE_PHONE_RADIO_ACTIVE())
    {
        SET_MOBILE_PHONE_RADIO_STATE( 0 );
    }
    TURN_OFF_RADIOHUD_IN_LOBBY();
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    DISPLAY_FRONTEND_MAP_BLIPS( 1 );
    l_U1202 = 0;
    l_U1196 = 10000;
    l_U1205 = 0;
    l_U1209 = 0;
    l_U1279 = 0;
    l_U1273 = 0;
    l_U1171 = GET_PLAYER_ID();
    l_U1002[sub_85738( 16 )]._fU20 = 0;
    if (NOT NETWORK_IS_TVT())
    {
        l_U1002[sub_85738( 17 )]._fU20 = GET_PLAYER_ID();
    }
    StrCopy( ref cVar4, "LONG_DESCRP_", 16 );
    ConcatString(ref cVar4, sub_1248(), 16);
    if (l_U1193 == 1)
    {
        ConcatString(ref cVar4, "A", 16);
    }
    else if (l_U1193 == 2)
    {
        ConcatString(ref cVar4, "B", 16);
    }
    PRINT_NOW( ref cVar4, 1, 1 );
    if ((NOT N_604003528()) || (sub_85056()))
    {
        l_U1172[GET_PLAYER_ID()] = GET_PLAYER_RANK_LEVEL_DURING_MP( GET_PLAYER_ID() );
    }
    UNPAUSE_GAME();
    return;
}

void sub_130187(unknown uParam0)
{
    int I;
    int iVar4;
    char[16] cVar5;

    for ( I = 0; I < 21; I++ )
    {
        if ((l_U1002[I]._fU16 < 12) AND (l_U1002[I]._fU16 != 0))
        {
            switch (l_U1002[I]._fU16)
            {
                case 1:
                case 8:
                cVar5 = {l_U1002[I]._fU0};
                ConcatString(ref cVar5, (uParam0^)[I], 16);
                sub_130360( ref l_U1002[I]._fU0, ref cVar5, iVar4 );
                break;
                case 5:
                case 7:
                if ((uParam0^)[I] > 0)
                {
                    sub_130360( ref l_U1002[I]._fU0, "YES", iVar4 );
                }
                else
                {
                    sub_130360( ref l_U1002[I]._fU0, "NO", iVar4 );
                }
                break;
                case 6:
                case 9:
                case 10:
                if ((uParam0^)[I] > 0)
                {
                    sub_130360( ref l_U1002[I]._fU0, "ON", iVar4 );
                }
                else
                {
                    sub_130360( ref l_U1002[I]._fU0, "OFF", iVar4 );
                }
                break;
                case 11:
                StrCopy( ref cVar5, "CPGO_NUM_", 16 );
                ConcatString(ref cVar5, (uParam0^)[I], 16);
                sub_130360( ref l_U1002[I]._fU0, ref cVar5, iVar4 );
                break;
            }
            iVar4++;
        }
    }
    return;
}

void sub_130360(unknown uParam0, unknown uParam1, unknown uParam2)
{
    StrCopy( ref g_U18._fU676[uParam2], uParam0, 16 );
    StrCopy( ref g_U18._fU1080[uParam2], uParam1, 16 );
    sub_906( "\n ~~~~ NetCellphone Adding info, ", uParam0 );
    sub_906( " and ", uParam1 );
    return;
}

void sub_131198()
{
    int J;
    int I;
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    for ( J = 0; J < 12; J++ )
    {
        if (sub_80099( l_U1516._fU388[J] ))
        {
            if (NOT (IS_CHAR_INJURED( sub_11590( l_U1516._fU388[J] ) )))
            {
                if (HAS_CONTROL_OF_NETWORK_ID( l_U1516._fU388[J] ))
                {
                    SET_NETWORK_ID_CAN_MIGRATE( l_U1516._fU388[J], 1 );
                }
                if (l_U1516._fU48[J]._fU4 == 1)
                {
                    if (sub_78824( sub_11590( l_U1516._fU388[J] ), ref I ))
                    {
                        if (l_U1516._fU48[J]._fU8 == 1)
                        {
                            if (I == GET_PLAYER_ID())
                            {
                                if (l_U1516._fU48[J]._fU0 == 3)
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_11590( l_U1516._fU388[J] ), l_U1516._fU492._fU0, l_U1516._fU492._fU4, l_U1516._fU492._fU8, 7.00000000, 7.00000000, 3.00000000, 0 ))
                                    {
                                        if (REQUEST_CONTROL_OF_NETWORK_ID( l_U1516._fU388[J] ))
                                        {
                                            if ((sub_131551( sub_11590( l_U1516._fU388[J] ) )) < 3.00000000)
                                            {
                                                if (sub_131612( sub_11590( l_U1516._fU388[J] ), 120 ))
                                                {
                                                    if (l_U1516._fU48[J]._fU24 == -1947682830)
                                                    {
                                                        if (NOT (sub_131692( l_U2032 )))
                                                        {
                                                            sub_782( 1, sub_11590( l_U1516._fU388[J] ), "PETROVIC", 0 );
                                                            sub_131927( "MPKP2_LIFT", ref l_U2032, 6, 1 );
                                                            PRINTSTRING( "PLAY_SINGLE_SPEECH(MPKP2_LIFT, myScriptedSpeech, SPEECH_PRIORITY_MEDIUM, TRUE)\n" );
                                                        }
                                                    }
                                                    CLEAR_SEQUENCE_TASK( l_U2073 );
                                                    OPEN_SEQUENCE_TASK( ref l_U2073 );
                                                    if (NOT (IS_CHAR_ON_FOOT( sub_11590( l_U1516._fU388[J] ) )))
                                                    {
                                                        TASK_LEAVE_ANY_CAR( 0 );
                                                    }
                                                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U1516._fU492._fU0, l_U1516._fU492._fU4, l_U1516._fU492._fU8, 3, -2, 4.00000000 );
                                                    if (sub_40624())
                                                    {
                                                        TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_Standing", 3000 );
                                                    }
                                                    else
                                                    {
                                                        TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_SmokingOutsideOffice", 3000 );
                                                    }
                                                    CLOSE_SEQUENCE_TASK( l_U2073 );
                                                    TASK_PERFORM_SEQUENCE_LOCALLY( sub_11590( l_U1516._fU388[J] ), l_U2073 );
                                                }
                                            }
                                        }
                                    }
                                }
                                else if (REQUEST_CONTROL_OF_NETWORK_ID( l_U1516._fU388[J] ))
                                {
                                    if (IS_CHAR_ON_FOOT( sub_11590( l_U1516._fU388[J] ) ))
                                    {
                                        REMOVE_CHAR_FROM_GROUP( sub_11590( l_U1516._fU388[J] ) );
                                        PRINTSTRING( "REMOVE_CHAR_FROM_GROUP\n" );
                                    }
                                }
                            }
                        }
                        else if (l_U1516._fU48[J]._fU8 == 3)
                        {
                            uVar6 = sub_133370( l_U1516._fU388[J] );
                            if (DOES_PED_EXIST_WITH_NETWORK_ID( uVar6 ))
                            {
                                if (l_U1516._fU48[J]._fU0 == 3)
                                {
                                    if (I == GET_PLAYER_ID())
                                    {
                                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_11590( l_U1516._fU388[J] ), sub_11590( uVar6 ), 7.00000000, 7.00000000, 3.00000000, 0 ))
                                        {
                                            if (REQUEST_CONTROL_OF_NETWORK_ID( l_U1516._fU388[J] ))
                                            {
                                                if (IS_CHAR_ON_FOOT( sub_11590( l_U1516._fU388[J] ) ))
                                                {
                                                    REMOVE_CHAR_FROM_GROUP( sub_11590( l_U1516._fU388[J] ) );
                                                }
                                                if ((sub_131551( sub_11590( l_U1516._fU388[J] ) )) < 3.00000000)
                                                {
                                                    if (sub_131612( sub_11590( l_U1516._fU388[J] ), 120 ))
                                                    {
                                                        CLEAR_SEQUENCE_TASK( l_U2073 );
                                                        OPEN_SEQUENCE_TASK( ref l_U2073 );
                                                        if (NOT (IS_CHAR_ON_FOOT( sub_11590( l_U1516._fU388[J] ) )))
                                                        {
                                                            TASK_LEAVE_ANY_CAR( 0 );
                                                        }
                                                        TASK_GOTO_CHAR_OFFSET( 0, sub_11590( uVar6 ), 15000, 2.00000000, 0.00000000 );
                                                        if (sub_40624())
                                                        {
                                                            TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_Standing", 3000 );
                                                        }
                                                        else
                                                        {
                                                            TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_SmokingOutsideOffice", 3000 );
                                                        }
                                                        CLOSE_SEQUENCE_TASK( l_U2073 );
                                                        TASK_PERFORM_SEQUENCE_LOCALLY( sub_11590( l_U1516._fU388[J] ), l_U2073 );
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                else if (HAS_CONTROL_OF_NETWORK_ID( l_U1516._fU388[J] ))
                                {
                                    if (sub_9928( sub_11590( uVar6 ) ))
                                    {
                                        if (sub_131612( sub_11590( l_U1516._fU388[J] ), 11 ))
                                        {
                                            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_11590( l_U1516._fU388[J] ), sub_11590( uVar6 ), 4.00000000, 4.00000000, 3.00000000, 0 )))
                                            {
                                                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_11590( uVar6 ), ref uVar5 );
                                                TASK_ENTER_CAR_AS_PASSENGER( sub_11590( l_U1516._fU388[J] ), uVar5, -2, -1 );
                                            }
                                        }
                                    }
                                    else if (sub_131612( sub_11590( l_U1516._fU388[J] ), 27 ))
                                    {
                                        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_11590( l_U1516._fU388[J] ), sub_11590( uVar6 ), 4.00000000, 4.00000000, 3.00000000, 0 )))
                                        {
                                            uVar8 = {sub_16807( sub_11590( uVar6 ) )};
                                            TASK_FOLLOW_NAV_MESH_TO_COORD( sub_11590( l_U1516._fU388[J] ), uVar8._fU0, uVar8._fU4, uVar8._fU8, 2, -2, 2.00000000 );
                                        }
                                    }
                                }
                            }
                        }
                    }
                    else if (l_U1516._fU48[J]._fU0 > 3)
                    {
                        if (HAS_CONTROL_OF_NETWORK_ID( l_U1516._fU388[J] ))
                        {
                            if (sub_131612( sub_11590( l_U1516._fU388[J] ), 26 ))
                            {
                                TASK_WANDER_STANDARD( sub_11590( l_U1516._fU388[J] ) );
                            }
                        }
                    }
                    if (NOT (IS_CHAR_DEAD( sub_9794() )))
                    {
                        if ((l_U1516._fU48[J]._fU0 == 3) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_9794(), sub_11590( l_U1516._fU388[J] ), 10.00000000, 10.00000000, 3.00000000, 0 )))
                        {
                            if ((IS_CHAR_ON_FOOT( sub_9794() )) || ((sub_79161( sub_11590( l_U1516._fU388[J] ), sub_9794() )) || ((sub_9928( sub_9794() )) AND (sub_134624( sub_9794() )))))
                            {
                                if (NOT ((LOCATE_CHAR_ON_FOOT_3D( sub_11590( l_U1516._fU388[J] ), l_U1516._fU492._fU0, l_U1516._fU492._fU4, l_U1516._fU492._fU8, 8.00000000, 8.00000000, 3.00000000, 0 )) AND (l_U1516._fU48[J]._fU8 == 1)))
                                {
                                    if (sub_135068())
                                    {
                                        if (REQUEST_CONTROL_OF_NETWORK_ID( l_U1516._fU388[J] ))
                                        {
                                            SET_NETWORK_ID_CAN_MIGRATE( l_U1516._fU388[J], 0 );
                                            if (sub_135560( sub_11590( l_U1516._fU388[J] ), sub_9794() ))
                                            {
                                                CLEAR_CHAR_TASKS( sub_11590( l_U1516._fU388[J] ) );
                                                if (l_U1516._fU48[J]._fU8 == 0)
                                                {
                                                    SET_CHAR_RELATIONSHIP_GROUP( sub_11590( l_U1516._fU388[J] ), sub_135818( GET_PLAYER_ID() ) );
                                                }
                                                SET_GROUP_MEMBER( sub_135089(), sub_11590( l_U1516._fU388[J] ) );
                                                PRINTSTRING( "SET_GROUP_MEMBER\n" );
                                            }
                                        }
                                    }
                                }
                            }
                            else if (sub_9928( sub_9794() ))
                            {
                                if (NOT (sub_136325( sub_11590( l_U1516._fU388[J] ), sub_81910( sub_9794() ) )))
                                {
                                    sub_136442( sub_81910( sub_9794() ) );
                                }
                            }
                        }
                        else if (HAS_CONTROL_OF_NETWORK_ID( l_U1516._fU388[J] ))
                        {
                            if (NOT (sub_131612( sub_11590( l_U1516._fU388[J] ), 11 )))
                            {
                                CLEAR_CHAR_TASKS( sub_11590( l_U1516._fU388[J] ) );
                            }
                        }
                    }
                }
                else if ((l_U1516._fU48[J]._fU8 == 3) AND (l_U1516._fU48[J]._fU4 == 0))
                {
                    if (l_U1516._fU48[J]._fU0 == 3)
                    {
                        if (HAS_CONTROL_OF_NETWORK_ID( l_U1516._fU388[J] ))
                        {
                            iVar4 = sub_137258( l_U1516._fU388[J] );
                            if (iVar4 != -1)
                            {
                                if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U1516._fU388[iVar4] ))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_11590( l_U1516._fU388[J] ), sub_11665( l_U1516._fU388[iVar4] ), 8.00000000, 8.00000000, 3.00000000, 0 ))
                                    {
                                        GET_DRIVER_OF_CAR( sub_11665( l_U1516._fU388[iVar4] ), ref iVar7 );
                                        if ((iVar7 == nil) AND (IS_CAR_PASSENGER_SEAT_FREE( sub_11665( l_U1516._fU388[iVar4] ), 0 )))
                                        {
                                            if (NOT (IS_CHAR_SITTING_IN_CAR( sub_11590( l_U1516._fU388[J] ), sub_11665( l_U1516._fU388[iVar4] ) )))
                                            {
                                                if (IS_CHAR_SITTING_IN_ANY_CAR( sub_11590( l_U1516._fU388[J] ) ))
                                                {
                                                    if (sub_131612( sub_11590( l_U1516._fU388[J] ), 31 ))
                                                    {
                                                        TASK_LEAVE_ANY_CAR( sub_11590( l_U1516._fU388[J] ) );
                                                    }
                                                }
                                                else if (sub_131612( sub_11590( l_U1516._fU388[J] ), 12 ))
                                                {
                                                    if ((sub_104284( sub_11590( l_U1516._fU388[J] ) )) == -1947682830)
                                                    {
                                                        if (NOT (sub_131692( l_U2032 )))
                                                        {
                                                            sub_782( 1, sub_11590( l_U1516._fU388[J] ), "PETROVIC", 0 );
                                                            sub_131927( "MPKP2_DROP", ref l_U2032, 6, 1 );
                                                            PRINTSTRING( "PLAY_SINGLE_SPEECH(MPKP2_DROP, myScriptedSpeech, SPEECH_PRIORITY_MEDIUM, TRUE)\n" );
                                                        }
                                                    }
                                                    TASK_ENTER_CAR_AS_DRIVER( sub_11590( l_U1516._fU388[J] ), sub_11665( l_U1516._fU388[iVar4] ), -2 );
                                                }
                                            }
                                        }
                                    }
                                }
                                else if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1516._fU388[iVar4] ))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_11590( l_U1516._fU388[J] ), sub_11590( l_U1516._fU388[iVar4] ), 8.00000000, 8.00000000, 3.00000000, 0 ))
                                    {
                                        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_11590( l_U1516._fU388[J] ) ))
                                        {
                                            if (sub_131612( sub_11590( l_U1516._fU388[J] ), 31 ))
                                            {
                                                TASK_LEAVE_ANY_CAR( sub_11590( l_U1516._fU388[J] ) );
                                            }
                                        }
                                        else if (IS_CHAR_ON_FOOT( sub_11590( l_U1516._fU388[iVar4] ) ))
                                        {
                                            if (sub_131612( sub_11590( l_U1516._fU388[J] ), 120 ))
                                            {
                                                CLEAR_SEQUENCE_TASK( l_U2073 );
                                                OPEN_SEQUENCE_TASK( ref l_U2073 );
                                                uVar8 = {sub_16807( sub_11590( l_U1516._fU388[iVar4] ) )};
                                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar8._fU0, uVar8._fU4, uVar8._fU8, 3, -2, 3.00000000 );
                                                if (sub_138403( sub_11590( l_U1516._fU388[J] ), ref uVar5 ))
                                                {
                                                    TASK_ENTER_CAR_AS_DRIVER( 0, uVar5, -2 );
                                                }
                                                else
                                                {
                                                    TASK_WANDER_STANDARD( 0 );
                                                }
                                                CLOSE_SEQUENCE_TASK( l_U2073 );
                                                TASK_PERFORM_SEQUENCE_LOCALLY( sub_11590( l_U1516._fU388[J] ), l_U2073 );
                                            }
                                        }
                                    }
                                }
                                else if (DOES_OBJECT_EXIST_WITH_NETWORK_ID( l_U1516._fU388[iVar4] ))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_OBJECT_3D( sub_11590( l_U1516._fU388[J] ), sub_9848( l_U1516._fU388[iVar4] ), 8.00000000, 8.00000000, 3.00000000, 0 ))
                                    {
                                        if (IS_CHAR_IN_ANY_CAR( sub_11590( l_U1516._fU388[J] ) ))
                                        {
                                            if (sub_131612( sub_11590( l_U1516._fU388[J] ), 31 ))
                                            {
                                                TASK_LEAVE_ANY_CAR( sub_11590( l_U1516._fU388[J] ) );
                                            }
                                        }
                                    }
                                };;;
                            }
                        }
                    }
                    else if (HAS_CONTROL_OF_NETWORK_ID( l_U1516._fU388[J] ))
                    {
                        if (IS_CHAR_IN_ANY_CAR( sub_11590( l_U1516._fU388[J] ) ))
                        {
                            if (sub_131612( sub_11590( l_U1516._fU388[J] ), 26 ))
                            {
                                TASK_CAR_DRIVE_WANDER( sub_11590( l_U1516._fU388[J] ), 0, 10.00000000, 2 );
                            }
                        }
                        else if (sub_131612( sub_11590( l_U1516._fU388[J] ), 26 ))
                        {
                            if (sub_131612( sub_11590( l_U1516._fU388[J] ), 120 ))
                            {
                                TASK_WANDER_STANDARD( sub_11590( l_U1516._fU388[J] ) );
                            }
                        }
                    }
                }
                else if (l_U1516._fU48[J]._fU8 == 5)
                {
                    if (HAS_CONTROL_OF_NETWORK_ID( l_U1516._fU388[J] ))
                    {
                        if (NOT (IS_PED_IN_COMBAT( sub_11590( l_U1516._fU388[J] ) )))
                        {
                            if (sub_131612( sub_11590( l_U1516._fU388[J] ), 91 ))
                            {
                                for ( I = 0; I < 12; I++ )
                                {
                                    if (DOES_OBJECT_EXIST_WITH_NETWORK_ID( l_U1516._fU388[I] ))
                                    {
                                        if ((sub_75871( sub_11590( l_U1516._fU388[J] ), sub_139340( sub_9848( l_U1516._fU388[I] ) ) )) < 5.00000000)
                                        {
                                            if (sub_139408( l_U1516._fU388[I], ref iVar4 ))
                                            {
                                                TASK_COMBAT( sub_11590( l_U1516._fU388[J] ), sub_16771( iVar4 ) );
                                            }
                                            else if (sub_139571( l_U1516._fU388[I], ref iVar4 ))
                                            {
                                                TASK_COMBAT( sub_11590( l_U1516._fU388[J] ), sub_16771( iVar4 ) );
                                            }
                                        }
                                    }
                                    else if (sub_138437( l_U1516._fU388[I] ))
                                    {
                                        if ((sub_75871( sub_11590( l_U1516._fU388[J] ), sub_75780( sub_11665( l_U1516._fU388[I] ) ) )) < 5.00000000)
                                        {
                                            if (sub_81268( l_U1516._fU388[I], ref iVar4 ))
                                            {
                                                TASK_COMBAT( sub_11590( l_U1516._fU388[J] ), sub_16771( iVar4 ) );
                                            }
                                            else if (sub_139571( l_U1516._fU388[I], ref iVar4 ))
                                            {
                                                TASK_COMBAT( sub_11590( l_U1516._fU388[J] ), sub_16771( iVar4 ) );
                                            }
                                        }
                                    }
                                    else if (sub_80099( l_U1516._fU388[I] ))
                                    {
                                        if ((sub_75871( sub_11590( l_U1516._fU388[J] ), sub_16807( sub_11590( l_U1516._fU388[I] ) ) )) < 5.00000000)
                                        {
                                            if (sub_78824( sub_11590( l_U1516._fU388[I] ), ref iVar4 ))
                                            {
                                                TASK_COMBAT( sub_11590( l_U1516._fU388[J] ), sub_16771( iVar4 ) );
                                            }
                                            else if (sub_139571( l_U1516._fU388[I], ref iVar4 ))
                                            {
                                                TASK_COMBAT( sub_11590( l_U1516._fU388[J] ), sub_16771( iVar4 ) );
                                            }
                                        }
                                    };;;
                                }
                            }
                        }
                    }
                };;;
            }
        }
        else if (DOES_OBJECT_EXIST_WITH_NETWORK_ID( l_U1516._fU388[J] ))
        {
            if ((l_U1516._fU48[J]._fU0 == 3) AND ((l_U1516._fU48[J]._fU8 == 3) AND (l_U1516._fU48[J]._fU4 == 1)))
            {
                uVar6 = sub_133370( l_U1516._fU388[J] );
                if (sub_80099( uVar6 ))
                {
                    if (NOT (IS_CHAR_INJURED( sub_11590( uVar6 ) )))
                    {
                        if (((l_U1516._fU48[J]._fU12 == GET_PLAYER_ID()) AND ((GET_PED_OBJECT_IS_ATTACHED_TO( sub_9848( l_U1516._fU388[J] ) )) == nil)) || ((GET_PED_OBJECT_IS_ATTACHED_TO( sub_9848( l_U1516._fU388[J] ) )) == sub_9794()))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_OBJECT_3D( sub_11590( uVar6 ), sub_9848( l_U1516._fU388[J] ), 8.00000000, 8.00000000, 3.00000000, 0 ))
                            {
                                if (((GET_PED_OBJECT_IS_ATTACHED_TO( sub_9848( l_U1516._fU388[J] ) )) == nil) || (IS_CHAR_ON_FOOT( sub_9794() )))
                                {
                                    if (REQUEST_CONTROL_OF_NETWORK_ID( l_U1516._fU388[J] ))
                                    {
                                        if (NOT (IS_CHAR_IN_ANY_CAR( sub_11590( uVar6 ) )))
                                        {
                                            if (REQUEST_CONTROL_OF_NETWORK_ID( uVar6 ))
                                            {
                                                if (sub_131612( sub_11590( uVar6 ), 120 ))
                                                {
                                                    CLEAR_SEQUENCE_TASK( l_U2073 );
                                                    OPEN_SEQUENCE_TASK( ref l_U2073 );
                                                    if ((sub_104284( sub_11590( uVar6 ) )) == -1947682830)
                                                    {
                                                        if (NOT (sub_131692( l_U2032 )))
                                                        {
                                                            sub_782( 1, sub_11590( uVar6 ), "PETROVIC", 0 );
                                                            if (IS_OBJECT_ATTACHED( sub_9848( l_U1516._fU388[J] ) ))
                                                            {
                                                                sub_131927( "MPKP2_GIV", ref l_U2032, 6, 1 );
                                                                PRINTSTRING( "PLAY_SINGLE_SPEECH(MPKP2_GIV, myScriptedSpeech, SPEECH_PRIORITY_MEDIUM, TRUE)\n" );
                                                            }
                                                            else
                                                            {
                                                                sub_131927( "MPKP2_DROP", ref l_U2032, 6, 1 );
                                                                PRINTSTRING( "PLAY_SINGLE_SPEECH(MPKP2_DROP, myScriptedSpeech, SPEECH_PRIORITY_MEDIUM, TRUE)\n" );
                                                            }
                                                        }
                                                    }
                                                    TASK_PICKUP_AND_CARRY_OBJECT( 0, sub_9848( l_U1516._fU388[J] ), sub_16807( sub_11590( uVar6 ) ), 0 );
                                                    if (sub_138403( sub_11590( uVar6 ), ref uVar5 ))
                                                    {
                                                        TASK_ENTER_CAR_AS_DRIVER( 0, uVar5, -2 );
                                                    }
                                                    CLOSE_SEQUENCE_TASK( l_U2073 );
                                                    TASK_PERFORM_SEQUENCE_LOCALLY( sub_11590( uVar6 ), l_U2073 );
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
        }
        else if (sub_138437( l_U1516._fU388[J] ))
        {
            if (HAS_CONTROL_OF_NETWORK_ID( l_U1516._fU388[J] ))
            {
                if ((l_U1516._fU48[J]._fU8 != 0) AND (l_U1516._fU48[J]._fU4 == 1))
                {
                    if (sub_141341( sub_11665( l_U1516._fU388[J] ) ))
                    {
                        if (l_U1516._fU8 == 30)
                        {
                            GET_CAR_HEALTH( sub_11665( l_U1516._fU388[J] ), ref iVar4 );
                            if ((iVar4 < 50) || (((GET_PETROL_TANK_HEALTH( sub_11665( l_U1516._fU388[J] ) )) < 650) || ((GET_ENGINE_HEALTH( sub_11665( l_U1516._fU388[J] ) )) < 650)))
                            {
                                sub_141728( sub_11665( l_U1516._fU388[J] ) );
                            }
                        }
                        else if (((GET_PETROL_TANK_HEALTH( sub_11665( l_U1516._fU388[J] ) )) < (100 - (l_U1516._fU8 / 2))) || ((GET_ENGINE_HEALTH( sub_11665( l_U1516._fU388[J] ) )) < (100 - (l_U1516._fU8 / 2))))
                        {
                            sub_141728( sub_11665( l_U1516._fU388[J] ) );
                        }
                    }
                }
                if (l_U1516._fU8 == 31)
                {
                    GET_CAR_HEALTH( sub_11665( l_U1516._fU388[J] ), ref iVar4 );
                    if ((iVar4 < 50) || (((GET_PETROL_TANK_HEALTH( sub_11665( l_U1516._fU388[J] ) )) < 100) || ((GET_ENGINE_HEALTH( sub_11665( l_U1516._fU388[J] ) )) < 100)))
                    {
                        EXPLODE_CAR( sub_11665( l_U1516._fU388[J] ), 1, 1 );
                    }
                }
            }
        };;;
    }
    return;
}

void sub_131551(unknown uParam0)
{
    unknown Result;

    GET_CHAR_SPEED( uParam0, ref Result );
    return Result;
}

int sub_131612(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    if (iVar4 == 7)
    {
        return 1;
    }
    return 0;
}

int sub_131692(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8320 == 2) || ((g_U8320 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8319)
        {
            return 1;
        }
        else
        {
            sub_131804( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_131804( "\n speech is not playing" );
    }
    return 0;
}

void sub_131804(unknown uParam0)
{
    return;
}

void sub_131927(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_131950( uParam0, ref l_U1416._fU0, uParam1, uParam2, uParam3 );
}

void sub_131950(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_132004( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_132004(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_132026( iParam1 )))
    {
        return 0;
    }
    l_U1416._fU384 = 0;
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
    sub_132704( ref g_U8321, ref l_U1416 );
    StrCopy( ref g_U8321._fU0, uParam7, 16 );
    g_U8321._fU388 = uParam8;
    g_U8320 = 1;
    return 1;
}

int sub_132026(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_131804( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_131804( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_131804( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_132704(int iParam0, int iParam1)
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

void sub_133370(unknown uParam0)
{
    int I;
    int iVar4;
    float fVar5;
    float fVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    vector vVar10;
    vector vVar13;

    iVar4 = -1;
    fVar5 = 2.5E7;
    vVar10 = {sub_17395( uParam0 )};
    for ( I = 0; I < 12; I++ )
    {
        if (sub_80099( l_U1516._fU388[I] ))
        {
            if ((l_U1516._fU48[I]._fU0 == 3) AND ((l_U1516._fU48[I]._fU8 == 3) AND (l_U1516._fU48[I]._fU4 == 0)))
            {
                vVar13 = {sub_16807( sub_11590( l_U1516._fU388[I] ) )};
                uVar7 = {vVar10 - vVar13};
                fVar6 = ((uVar7._fU0 * uVar7._fU0) + (uVar7._fU4 * uVar7._fU4)) + (uVar7._fU8 * uVar7._fU8);
                if (fVar5 > fVar6)
                {
                    iVar4 = I;
                    fVar5 = fVar6;
                }
            }
        }
    }
    if (iVar4 == -1)
    {
        return nil;
    }
    return l_U1516._fU388[iVar4];
}

int sub_134624(unknown uParam0)
{
    int iVar3;
    int iVar4;
    unknown uVar5;

    if (IS_CHAR_IN_ANY_CAR( uParam0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar5 );
        GET_NUMBER_OF_PASSENGERS( uVar5, ref iVar4 );
        GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar5, ref iVar3 );
        if ((iVar4 + (sub_134681( uVar5 ))) >= iVar3)
        {
            return 0;
        }
    }
    return 1;
}

void sub_134681(int iParam0)
{
    int I;
    int Result;
    int iVar5;

    for ( I = 0; I < 12; I++ )
    {
        if (sub_80099( l_U1516._fU388[I] ))
        {
            if ((l_U1516._fU48[I]._fU4 == 1) AND (l_U1516._fU48[I]._fU0 == 3))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_11590( l_U1516._fU388[I] ) )))
                {
                    if (NOT (IS_CHAR_ON_FOOT( sub_11590( l_U1516._fU388[I] ) )))
                    {
                        GET_CAR_CHAR_IS_USING( sub_11590( l_U1516._fU388[I] ), ref iVar5 );
                        if (iParam0 == iVar5)
                        {
                            Result++;
                        }
                    }
                }
            }
        }
    }
    return Result;
}

int sub_135068()
{
    int I;
    int iVar3;
    int iVar4;
    int iVar5;

    for ( I = 0; I < 3; I++ )
    {
        GET_GROUP_MEMBER( sub_135089(), I, ref iVar5 );
        if (iVar5 != nil)
        {
            if (DOES_CHAR_EXIST( iVar5 ))
            {
                iVar3++;
                if (sub_135172( iVar5 ))
                {
                    iVar4++;
                }
            }
        }
    }
    if (iVar3 < 3)
    {
        return 1;
    }
    if (iVar4 < 3)
    {
        for ( I = 0; I < 3; I++ )
        {
            if (DOES_CHAR_EXIST( l_U2069[I] ))
            {
                if (NOT (IS_CHAR_DEAD( l_U2069[I] )))
                {
                    if (REQUEST_CONTROL_OF_NETWORK_ID( sub_35275( l_U2069[I] ) ))
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( l_U2069[I] )))
                        {
                            REMOVE_CHAR_FROM_GROUP( l_U2069[I] );
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void sub_135089()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_135172(int iParam0)
{
    int I;

    if (iParam0 != nil)
    {
        for ( I = 0; I < 12; I++ )
        {
            if (l_U1516._fU388[I] != nil)
            {
                if (DOES_PED_EXIST_WITH_NETWORK_ID( l_U1516._fU388[I] ))
                {
                    if (iParam0 == (sub_11590( l_U1516._fU388[I] )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_135560(unknown uParam0, unknown uParam1)
{
    int I;
    int iVar5;
    unknown uVar6;

    if (sub_79161( uParam0, uParam1 ))
    {
        return 1;
    }
    if (IS_CHAR_SITTING_IN_ANY_CAR( uParam1 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam1, ref uVar6 );
        GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar6, ref iVar5 );
        for ( I = 0; I < iVar5; I++ )
        {
            if (IS_CAR_PASSENGER_SEAT_FREE( uVar6, I ))
            {
                if (sub_131612( uParam0, 11 ))
                {
                    TASK_ENTER_CAR_AS_PASSENGER( uParam0, uVar6, -2, -1 );
                }
                return 0;
            }
        }
    }
    else if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
    {
        if (sub_131612( uParam0, 31 ))
        {
            TASK_LEAVE_ANY_CAR( uParam0 );
        }
    }
    return 0;
}

int sub_135818(unknown uParam0)
{
    switch (GET_PLAYER_TEAM( sub_19026( uParam0 ) ))
    {
        case -1:
        switch (uParam0)
        {
            case 0: return 31;
            case 1: return 32;
            case 2: return 33;
            case 3: return 34;
            case 4: return 35;
            case 5: return 36;
            case 6: return 37;
            case 7: return 38;
            case 8: return 39;
            case 9: return 40;
            case 10: return 41;
            case 11: return 42;
            case 12: return 43;
            case 13: return 44;
            case 14: return 45;
            case 15: return 46;
        }
        break;
        case 0: return 47;
        case 1: return 48;
        case 2: return 49;
        case 3: return 50;
        case 4: return 51;
        case 5: return 52;
        case 6: return 53;
        case 7: return 54;
    }
    return 0;
}

int sub_136325(unknown uParam0, int iParam1)
{
    int iVar4;

    if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
    {
        if (NOT (IS_CHAR_ON_FOOT( uParam0 )))
        {
            GET_CAR_CHAR_IS_USING( uParam0, ref iVar4 );
            if (DOES_VEHICLE_EXIST( iVar4 ))
            {
                if (NOT (IS_CAR_DEAD( iVar4 )))
                {
                    if (iVar4 == iParam1)
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_136442(unknown uParam0)
{
    int I;
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    l_U2074++;
    if (IS_CHAR_IN_ANY_CAR( sub_9794() ))
    {
        iVar4 = sub_136482( uParam0 );
        if ((iVar4 <= (sub_134681( uParam0 ))) || (iVar4 < l_U2074))
        {
            for ( I = 0; I < 3; I++ )
            {
                if (DOES_CHAR_EXIST( l_U2069[I] ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U2069[I] )))
                    {
                        if (REQUEST_CONTROL_OF_NETWORK_ID( sub_35275( l_U2069[I] ) ))
                        {
                            if (IS_CHAR_SITTING_IN_CAR( l_U2069[I], uParam0 ))
                            {
                                if (sub_131612( l_U2069[I], 120 ))
                                {
                                    CLEAR_SEQUENCE_TASK( l_U2073 );
                                    OPEN_SEQUENCE_TASK( ref l_U2073 );
                                    TASK_LEAVE_CAR_DONT_CLOSE_DOOR( 0, uParam0 );
                                    uVar5 = {sub_66066( uParam0, 0.00000000, -4.00000000, 0.00000000 )};
                                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar5._fU0, uVar5._fU4, uVar5._fU8, 2, -2, 1.60000000 );
                                    if (sub_40624())
                                    {
                                        TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_Standing", 3000 );
                                    }
                                    else
                                    {
                                        TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_SmokingOutsideOffice", 3000 );
                                    }
                                    CLOSE_SEQUENCE_TASK( l_U2073 );
                                    TASK_PERFORM_SEQUENCE_LOCALLY( l_U2069[I], l_U2073 );
                                }
                                return;
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_136482(unknown uParam0)
{
    int I;
    int iVar4;
    int Result;
    int iVar6;

    GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar4 );
    for ( I = 0; I < iVar4; I++ )
    {
        if (IS_CAR_PASSENGER_SEAT_FREE( uParam0, I ))
        {
            Result++;
        }
        else
        {
            GET_CHAR_IN_CAR_PASSENGER_SEAT( uParam0, I, ref iVar6 );
            if (iVar6 == nil)
            {
                Result++;
            }
            else if (DOES_CHAR_EXIST( iVar6 ))
            {
                if (IS_CHAR_DEAD( iVar6 ))
                {
                    Result++;
                }
                else if (NOT (IS_CHAR_SITTING_IN_CAR( iVar6, uParam0 )))
                {
                    if (IS_CHAR_IN_CAR( iVar6, uParam0 ))
                    {
                        Result++;
                    }
                }
            }
            else
            {
                Result++;
            }
        }
    }
    return Result;
}

void sub_137258(unknown uParam0)
{
    int I;
    int Result;
    float fVar5;
    float fVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    vector vVar10;
    vector vVar13;

    Result = -1;
    fVar5 = 1000.00000000;
    vVar10 = {sub_17395( uParam0 )};
    for ( I = 0; I < 12; I++ )
    {
        if (sub_16943( l_U1516._fU388[I] ))
        {
            if ((l_U1516._fU48[I]._fU0 == 3) AND ((l_U1516._fU48[I]._fU8 == 3) AND (l_U1516._fU48[I]._fU4 == 1)))
            {
                vVar13 = {sub_17395( l_U1516._fU388[I] )};
                uVar7 = {vVar10 - vVar13};
                fVar6 = ((uVar7._fU0 * uVar7._fU0) + (uVar7._fU4 * uVar7._fU4)) + (uVar7._fU8 * uVar7._fU8);
                if (fVar5 > fVar6)
                {
                    Result = I;
                    fVar5 = fVar6;
                }
            }
        }
    }
    return Result;
}

int sub_138403(unknown uParam0, unknown uParam1)
{
    int I;
    int iVar5;

    for ( I = 0; I < 12; I++ )
    {
        if (sub_138437( l_U1516._fU388[I] ))
        {
            if ((l_U1516._fU48[I]._fU8 == 0) AND (l_U1516._fU48[I]._fU4 == 0))
            {
                GET_DRIVER_OF_CAR( sub_11665( l_U1516._fU388[I] ), ref iVar5 );
                if ((iVar5 == nil) AND (IS_CAR_PASSENGER_SEAT_FREE( sub_11665( l_U1516._fU388[I] ), 0 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CAR_3D( uParam0, sub_11665( l_U1516._fU388[I] ), 5.00000000, 5.00000000, 2.00000000, 0 ))
                    {
                        (uParam1^) = sub_11665( l_U1516._fU388[I] );
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_138437(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        if (IS_VEH_DRIVEABLE( sub_11665( uParam0 ) ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_139340(unknown uParam0)
{
    unknown Result;
    unknown uVar4;
    unknown uVar5;

    GET_OBJECT_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    return Result;
}

int sub_139408(unknown uParam0, unknown uParam1)
{
    int I;
    unknown uVar5;

    if (DOES_OBJECT_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        GET_OBJECT_FROM_NETWORK_ID( uParam0, ref uVar5 );
        for ( I = 0; I < 16; I++ )
        {
            if (IS_NETWORK_PLAYER_ACTIVE( I ))
            {
                if (sub_9877( sub_16771( I ), uVar5 ))
                {
                    (uParam1^) = I;
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_139571(unknown uParam0, unknown uParam1)
{
    int I;

    if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        for ( I = 0; I < 16; I++ )
        {
            if (IS_NETWORK_PLAYER_ACTIVE( I ))
            {
                if (NOT (IS_CHAR_DEAD( sub_16771( I ) )))
                {
                    if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( sub_11665( uParam0 ), sub_16771( I ) ))
                    {
                        (uParam1^) = I;
                        return 1;
                    }
                }
            }
        }
    }
    else if (DOES_PED_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        for ( I = 0; I < 16; I++ )
        {
            if (IS_NETWORK_PLAYER_ACTIVE( I ))
            {
                if (NOT (IS_CHAR_DEAD( sub_16771( I ) )))
                {
                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( sub_11590( uParam0 ), sub_16771( I ), 0 ))
                    {
                        (uParam1^) = I;
                        return 1;
                    }
                }
            }
        }
    }
    else if (DOES_OBJECT_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        for ( I = 0; I < 16; I++ )
        {
            if (IS_NETWORK_PLAYER_ACTIVE( I ))
            {
                if (NOT (IS_CHAR_DEAD( sub_16771( I ) )))
                {
                    if (HAS_OBJECT_BEEN_DAMAGED_BY_CHAR( sub_9848( uParam0 ), sub_16771( I ) ))
                    {
                        (uParam1^) = I;
                        return 1;
                    }
                }
            }
        }
    };;;
    return 0;
}

int sub_141341(unknown uParam0)
{
    int I;
    int iVar4;

    GET_DRIVER_OF_CAR( uParam0, ref iVar4 );
    if (iVar4 == nil)
    {
        return 0;
    }
    if (NOT (DOES_CHAR_EXIST( iVar4 )))
    {
        return 0;
    }
    if (IS_CHAR_DEAD( iVar4 ))
    {
        return 0;
    }
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if ((sub_16771( I )) == iVar4)
            {
                return 0;
            }
        }
    }
    for ( I = 0; I < 12; I++ )
    {
        if (sub_80099( l_U1516._fU388[I] ))
        {
            if ((sub_11590( l_U1516._fU388[I] )) == iVar4)
            {
                if ((l_U1516._fU48[I]._fU4 == 3) || (l_U1516._fU48[I]._fU4 == 2))
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}

void sub_141728(unknown uParam0)
{
    unknown uVar3;

    GET_DRIVER_OF_CAR( uParam0, ref uVar3 );
    if (DOES_CHAR_EXIST( uVar3 ))
    {
        if (NOT (IS_CHAR_DEAD( uVar3 )))
        {
            if (sub_131612( uVar3, 30 ))
            {
                TASK_LEAVE_CAR_IMMEDIATELY( uVar3, uParam0 );
            }
        }
    }
    return;
}

void sub_142081()
{
    int I;
    unknown uVar3;

    for ( I = 0; I < 3; I++ )
    {
        if (DOES_CHAR_EXIST( l_U2069[I] ))
        {
            if (IS_CHAR_DEAD( l_U2069[I] ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U2069[I] );
            }
            else if (NOT (sub_142178( l_U2069[I], sub_9794() )))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U2069[I] );
            }
        }
        else
        {
            GET_GROUP_MEMBER( sub_135089(), I, ref uVar3 );
            if (DOES_CHAR_EXIST( uVar3 ))
            {
                if (NOT (IS_CHAR_DEAD( uVar3 )))
                {
                    if (NOT (sub_135172( uVar3 )))
                    {
                        if (NOT (IS_PED_A_MISSION_PED( uVar3 )))
                        {
                            if (REQUEST_CONTROL_OF_NETWORK_ID( sub_35275( uVar3 ) ))
                            {
                                SET_CHAR_AS_MISSION_CHAR( uVar3 );
                                GIVE_DELAYED_WEAPON_TO_CHAR( uVar3, 13, 25000, 1 );
                                l_U2069[I] = uVar3;
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_142178(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (IS_PED_IN_GROUP( uParam0 ))
    {
        if (IS_PED_IN_GROUP( uParam1 ))
        {
            GET_PED_GROUP_INDEX( uParam0, ref uVar4 );
            if ((IS_GROUP_MEMBER( uParam1, uVar4 )) || (IS_GROUP_LEADER( uParam1, uVar4 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_142436()
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_75585( I ))
        {
            if (sub_9928( sub_16771( I ) ))
            {
                l_U2038[I] = sub_36504( sub_81910( sub_16771( I ) ) );
            }
            else if (l_U2038[I] != nil)
            {
                if (NOT (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( l_U2038[I] )))
                {
                    l_U2038[I] = nil;
                }
            }
        }
        else
        {
            l_U2038[I] = nil;
        }
    }
    return;
}

void sub_142780()
{
    int I;
    boolean bVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (sub_75585( GET_PLAYER_ID() ))
    {
        for ( I = 0; I < 12; I++ )
        {
            if (l_U1516._fU48[I]._fU0 == 3)
            {
                if (DOES_PICKUP_EXIST( l_U1516._fU440[I] ))
                {
                    GET_PICKUP_COORDINATES( l_U1516._fU440[I], ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                    if (sub_19093( sub_9794(), uVar4, 2.00000000 ))
                    {
                        bVar3 = true;
                    }
                }
            }
        }
    }
    if (bVar3)
    {
        SET_ALWAYS_DISPLAY_WEAPON_PICKUP_MESSAGE( 1 );
    }
    else
    {
        SET_ALWAYS_DISPLAY_WEAPON_PICKUP_MESSAGE( 0 );
    }
    return;
}

void sub_142991(unknown uParam0)
{
    int I;
    int[16] iVar4;

    array(ref iVar4, 16);
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            iVar4[I] = l_U1917[I]._fU16;
        }
        else
        {
            iVar4[I] = -1;
        }
    }
    sub_143088( ref iVar4, ref l_U1917[GET_PLAYER_ID()]._fU16, uParam0 );
    return;
}

void sub_143088(unknown uParam0, unknown uParam1, boolean bParam2)
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
        iVar6 = l_U1171;
    }
    else
    {
        iVar6 = sub_143140();
    }
    if (NOT NETWORK_IS_TVT())
    {
        if (iVar6 == (uParam1^))
        {
            if (((uParam1^) != GET_PLAYER_ID()) AND ((uParam1^) > -1))
            {
                if (IS_NETWORK_PLAYER_ACTIVE( iVar6 ))
                {
                    if (NOT (COMPARE_STRING( GET_PLAYER_NAME( sub_19026( iVar6 ) ), ref l_U1316 )))
                    {
                        if (NOT (COMPARE_STRING( ref l_U1316, "" )))
                        {
                            if (NOT (COMPARE_STRING( ref l_U1316, "NULL" )))
                            {
                                if (NOT (COMPARE_STRING( ref l_U1316, "\n" )))
                                {
                                    if (NOT (COMPARE_STRING( ref l_U1316, "null" )))
                                    {
                                        if (bParam2)
                                        {
                                            l_U1171 = GET_PLAYER_ID();
                                            (uParam1^) = GET_PLAYER_ID();
                                        }
                                        else
                                        {
                                            sub_9490( 1 );
                                            (uParam1^) = -1;
                                        }
                                        StrCopy( ref l_U1316, "", 32 );
                                        return;
                                    }
                                }
                            }
                        }
                    }
                }
                else
                {
                    StrCopy( ref l_U1316, "", 32 );
                }
            }
            else
            {
                StrCopy( ref l_U1316, "", 32 );
            }
        }
        else if ((iVar6 != GET_PLAYER_ID()) AND (iVar6 > -1))
        {
            if (IS_NETWORK_PLAYER_ACTIVE( iVar6 ))
            {
                StrCopy( ref l_U1316, GET_PLAYER_NAME( sub_19026( iVar6 ) ), 32 );
            }
            else
            {
                StrCopy( ref l_U1316, "", 32 );
            }
        }
        (uParam1^) = iVar6;
    }
    for ( I = 0; I < 16; I++ )
    {
        if ((NOT NETWORK_IS_TVT()) AND (IS_NETWORK_PLAYER_ACTIVE( I )))
        {
            if (l_U1299[I] == 1)
            {
                if (l_U902[I] != (uParam0^)[I])
                {
                    if (NOT bParam2)
                    {
                        if (((uParam0^)[I] != I) AND ((uParam0^)[I] > -1))
                        {
                            if (IS_NETWORK_PLAYER_ACTIVE( (uParam0^)[I] ))
                            {
                                sub_143700( I, "WANTS_TO_KICK", (uParam0^)[I] );
                            }
                        }
                    }
                    l_U902[I] = (uParam0^)[I];
                }
            }
            else if ((uParam0^)[I] != 0)
            {
                l_U1299[I] = 1;
            }
        }
        else
        {
            l_U902[I] = -1;
            l_U1299[I] = 0;
        }
    }
    return;
}

void sub_143140()
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

void sub_143700(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    uVar5 = sub_143710( -2 );
    StrCopy( ref l_U21[uVar5]._fU76._fU0, GET_PLAYER_NAME( sub_19026( uParam0 ) ), 64 );
    StrCopy( ref l_U21[uVar5]._fU12, uParam1, 64 );
    sub_106699( sub_19026( uParam0 ), ref l_U21[uVar5]._fU76._fU68, ref l_U21[uVar5]._fU76._fU72, ref l_U21[uVar5]._fU76._fU76 );
    StrCopy( ref l_U21[uVar5]._fU156._fU0, GET_PLAYER_NAME( sub_19026( uParam2 ) ), 64 );
    sub_106699( sub_19026( uParam2 ), ref l_U21[uVar5]._fU156._fU68, ref l_U21[uVar5]._fU156._fU72, ref l_U21[uVar5]._fU156._fU76 );
    sub_144285( uVar5 );
    return;
}

void sub_143710(unknown uParam0)
{
    unknown Result;

    Result = l_U494;
    sub_143737( ref l_U21[l_U494] );
    l_U21[l_U494]._fU8 = uParam0;
    l_U21[l_U494]._fU0 = 1;
    l_U21[l_U494]._fU4 = sub_143937() + 6000;
    sub_19733( ref l_U494, 8 );
    sub_143737( ref l_U21[l_U494] );
    if (l_U494 == l_U495)
    {
        sub_19733( ref l_U495, 8 );
    }
    PLAY_AUDIO_EVENT( "FRONTEND_GAME_MP_TICKER_MESSAGE" );
    return Result;
}

void sub_143737(int iParam0)
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

void sub_143937()
{
    unknown Result;

    GET_GAME_TIMER( ref Result );
    return Result;
}

void sub_144285(unknown uParam0)
{
    char[64] cVar3;

    StrCopy( ref cVar3, "", 64 );
    if (NOT (COMPARE_STRING( ref l_U21[uParam0]._fU76._fU0, "" )))
    {
        if (NOT (COMPARE_STRING( ref l_U21[uParam0]._fU76._fU0, "NULL" )))
        {
            if (NOT (COMPARE_STRING( ref l_U21[uParam0]._fU76._fU0, "\n" )))
            {
                if (NOT (COMPARE_STRING( ref l_U21[uParam0]._fU76._fU0, "null" )))
                {
                    if (l_U21[uParam0]._fU76._fU64)
                    {
                        if (NOT (COMPARE_STRING( GET_STRING_FROM_TEXT_FILE( ref l_U21[uParam0]._fU76._fU0 ), "NULL" )))
                        {
                            ConcatString(ref cVar3, GET_STRING_FROM_TEXT_FILE( ref l_U21[uParam0]._fU76._fU0 ), 64);
                            ConcatString(ref cVar3, " ", 64);
                        }
                    }
                    else
                    {
                        ConcatString(ref cVar3, ref l_U21[uParam0]._fU76._fU0, 64);
                        ConcatString(ref cVar3, " ", 64);
                    }
                }
            }
        }
    }
    if (NOT (COMPARE_STRING( ref l_U21[uParam0]._fU12, "" )))
    {
        if (NOT (COMPARE_STRING( ref l_U21[uParam0]._fU12, "NULL" )))
        {
            if (NOT (COMPARE_STRING( ref l_U21[uParam0]._fU12, "\n" )))
            {
                if (NOT (COMPARE_STRING( ref l_U21[uParam0]._fU12, "null" )))
                {
                    if (NOT (COMPARE_STRING( GET_STRING_FROM_TEXT_FILE( ref l_U21[uParam0]._fU12 ), "NULL" )))
                    {
                        ConcatString(ref cVar3, GET_STRING_FROM_TEXT_FILE( ref l_U21[uParam0]._fU12 ), 64);
                        ConcatString(ref cVar3, " ", 64);
                    }
                }
            }
        }
    }
    if (NOT (COMPARE_STRING( ref l_U21[uParam0]._fU156._fU0, "" )))
    {
        if (NOT (COMPARE_STRING( ref l_U21[uParam0]._fU156._fU0, "NULL" )))
        {
            if (NOT (COMPARE_STRING( ref l_U21[uParam0]._fU156._fU0, "\n" )))
            {
                if (NOT (COMPARE_STRING( ref l_U21[uParam0]._fU156._fU0, "null" )))
                {
                    if (l_U21[uParam0]._fU156._fU64)
                    {
                        if (NOT (COMPARE_STRING( GET_STRING_FROM_TEXT_FILE( ref l_U21[uParam0]._fU156._fU0 ), "NULL" )))
                        {
                            ConcatString(ref cVar3, GET_STRING_FROM_TEXT_FILE( ref l_U21[uParam0]._fU156._fU0 ), 64);
                        }
                    }
                    else
                    {
                        ConcatString(ref cVar3, ref l_U21[uParam0]._fU156._fU0, 64);
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

void sub_145188(unknown uParam0, int iParam1, boolean bParam2, int iParam3)
{
    int I;

    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U496[I] == -1)
            {
                sub_145251( I, -1, "JOINED" );
                l_U496[I] = 1;
            }
            if (l_U496[I] == 0)
            {
                l_U496[I] = 1;
            }
            if (IS_CHAR_FATALLY_INJURED( sub_16771( I ) ))
            {
                sub_145528( ref (uParam0^)[I] );
                if (l_U496[I] == 2)
                {
                    if (I == (FIND_NETWORK_KILLER_OF_PLAYER( I )))
                    {
                        sub_145251( I, -1, "DIED" );
                    }
                    else if (IS_NETWORK_PLAYER_ACTIVE( FIND_NETWORK_KILLER_OF_PLAYER( I ) ))
                    {
                        sub_145671( FIND_NETWORK_KILLER_OF_PLAYER( I ), I );
                    }
                    l_U496[I] = 3;
                }
            }
            else if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
            {
                if (IS_PLAYER_SCRIPT_CONTROL_ON( sub_19026( I ) ))
                {
                    if (sub_146232( I ))
                    {
                        sub_145528( ref (uParam0^)[I] );
                    }
                    else if (((iParam3 == GET_PLAYER_ID()) AND ((bParam2) AND (iParam1 == 6))) || (((I == iParam3) AND ((bParam2) AND (((GET_PLAYER_TEAM( sub_90115() )) == 0) AND (sub_1248() == 10)))) || (((NOT bParam2) AND (((GET_PLAYER_TEAM( sub_90115() )) == 0) AND (sub_1248() == 10))) || (((((GET_PLAYER_TEAM( sub_90115() )) > -1) AND ((GET_PLAYER_TEAM( sub_90115() )) == (GET_PLAYER_TEAM( sub_19026( I ) )))) AND (iParam1 != 4)) || (iParam1 == 0)))))
                    {
                        if (NOT (DOES_BLIP_EXIST( (uParam0^)[I] )))
                        {
                            (uParam0^)[I] = sub_146554( I );
                        }
                    }
                    else if (((iParam3 == GET_PLAYER_ID()) AND (iParam1 == 7)) || (iParam1 == 1))
                    {
                        if (sub_146781( sub_9794(), sub_16771( I ), l_U1280 ))
                        {
                            if (NOT (DOES_BLIP_EXIST( (uParam0^)[I] )))
                            {
                                (uParam0^)[I] = sub_146554( I );
                                l_U1281[I] = 255;
                            }
                        }
                        else if (DOES_BLIP_EXIST( (uParam0^)[I] ))
                        {
                            if (l_U1281[I] == 0)
                            {
                                REMOVE_BLIP( (uParam0^)[I] );
                                (uParam0^)[I] = nil;
                            }
                            else
                            {
                                CHANGE_BLIP_ALPHA( (uParam0^)[I], l_U1281[I] );
                                l_U1281[I] -= 20;
                                sub_147075( ref l_U1281[I], 0, 255 );
                            }
                        }
                    }
                    else if (iParam1 == 2)
                    {
                        if (NOT (sub_146781( sub_9794(), sub_16771( I ), l_U1280 )))
                        {
                            if (NOT (DOES_BLIP_EXIST( (uParam0^)[I] )))
                            {
                                (uParam0^)[I] = sub_146554( I );
                                l_U1281[I] = 0;
                            }
                            if (DOES_BLIP_EXIST( (uParam0^)[I] ))
                            {
                                CHANGE_BLIP_ALPHA( (uParam0^)[I], l_U1281[I] );
                                l_U1281[I] += 25;
                                sub_147075( ref l_U1281[I], 0, 255 );
                            }
                        }
                        else if (DOES_BLIP_EXIST( (uParam0^)[I] ))
                        {
                            if (l_U1281[I] == 0)
                            {
                                REMOVE_BLIP( (uParam0^)[I] );
                                (uParam0^)[I] = nil;
                            }
                            else
                            {
                                CHANGE_BLIP_ALPHA( (uParam0^)[I], l_U1281[I] );
                                l_U1281[I] -= 20;
                                sub_147075( ref l_U1281[I], 0, 255 );
                            }
                        }
                    }
                    else if (iParam1 == 3)
                    {
                        if (sub_1248() == 16)
                        {
                            if (GET_HOST_ID() == I)
                            {
                                if (NOT (DOES_BLIP_EXIST( (uParam0^)[I] )))
                                {
                                    (uParam0^)[I] = sub_146554( I );
                                }
                            }
                            else
                            {
                                sub_145528( ref (uParam0^)[I] );
                            }
                        }
                        else if ((sub_147515( I )) == 1)
                        {
                            if (NOT (DOES_BLIP_EXIST( (uParam0^)[I] )))
                            {
                                (uParam0^)[I] = sub_146554( I );
                            }
                        }
                        else
                        {
                            sub_145528( ref (uParam0^)[I] );
                        }
                    }
                    else if (iParam1 == 4)
                    {
                        sub_145528( ref (uParam0^)[I] );
                    };;;;;;
                }
                else
                {
                    sub_145528( ref (uParam0^)[I] );
                }
            }
            if (l_U496[I] == 1)
            {
                l_U496[I] = 2;
            }
            if (l_U496[I] == 3)
            {
                l_U496[I] = 2;
            }
        }
        else if (l_U496[I] > 0)
        {
            sub_145528( ref (uParam0^)[I] );
            sub_145251( I, -1, "LEFTGAME" );
        }
        l_U496[I] = -1;;
    }
    if ((NETWORK_IS_TVT()) || (NETWORK_IS_RENDEZVOUS()))
    {
        if (l_U1298 != NETWORK_GET_RENDEZVOUS_HOST_PLAYER_ID())
        {
            l_U1298 = NETWORK_GET_RENDEZVOUS_HOST_PLAYER_ID();
            if (NETWORK_GET_RENDEZVOUS_HOST_PLAYER_ID() != -1)
            {
                if (IS_NETWORK_PLAYER_ACTIVE( l_U1298 ))
                {
                    sub_145251( l_U1298, -1, "IS_PARTY_LEADER" );
                }
            }
        }
    }
    return;
}

void sub_145251(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar6 = sub_143710( uParam1 );
    StrCopy( ref l_U21[uVar6]._fU76._fU0, GET_PLAYER_NAME( sub_19026( uParam0 ) ), 64 );
    sub_106699( sub_19026( uParam0 ), ref l_U21[uVar6]._fU76._fU68, ref l_U21[uVar6]._fU76._fU72, ref l_U21[uVar6]._fU76._fU76 );
    StrCopy( ref l_U21[uVar6]._fU156._fU0, uParam2, 64 );
    l_U21[uVar6]._fU156._fU64 = 1;
    GET_HUD_COLOUR( 1, ref l_U21[uVar6]._fU156._fU68, ref l_U21[uVar6]._fU156._fU72, ref l_U21[uVar6]._fU156._fU76, ref uVar5 );
    sub_144285( uVar6 );
    return;
}

void sub_145528(unknown uParam0)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        SET_ROUTE( (uParam0^), 0 );
        REMOVE_BLIP( (uParam0^) );
    }
    (uParam0^) = nil;
    return;
}

void sub_145671(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    char[16] cVar5;

    GET_DESTROYER_OF_NETWORK_ID( sub_35275( sub_16771( uParam1 ) ), ref uVar4 );
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
    ConcatString(ref cVar5, sub_12313( 0, 10 ), 16);
    REGISTER_KILL_IN_MULTIPLAYER_GAME( uParam0, uParam1, uVar4 );
    sub_143700( uParam0, ref cVar5, uParam1 );
    return;
}

int sub_146232(unknown uParam0)
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_9794() ))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_16771( uParam0 ) ))
            {
                if ((GET_PLAYER_TEAM( sub_19026( uParam0 ) )) == (GET_PLAYER_TEAM( sub_19026( GET_PLAYER_ID() ) )))
                {
                    if ((sub_81910( sub_9794() )) == (sub_81910( sub_16771( uParam0 ) )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_146554(int iParam0)
{
    unknown Result;
    int iVar4;
    int iVar5;
    int iVar6;

    ADD_BLIP_FOR_CHAR( sub_16771( iParam0 ), ref Result );
    sub_106699( sub_19026( iParam0 ), ref iVar4, ref iVar5, ref iVar6 );
    CHANGE_BLIP_COLOUR( Result, (((iVar4 * 16777216) + (iVar5 * 65536)) + (iVar6 * 256)) + 255 );
    CHANGE_BLIP_PRIORITY( Result, 3 );
    CHANGE_BLIP_SCALE( Result, 0.90000000 );
    CHANGE_BLIP_NAME_FROM_ASCII( Result, GET_PLAYER_NAME( sub_19026( iParam0 ) ) );
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

int sub_146781(unknown uParam0, unknown uParam1, float fParam2)
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

void sub_147075(unknown uParam0, int iParam1, int iParam2)
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

void sub_147515(unknown uParam0)
{
    if (((GET_PLAYER_TEAM( sub_19026( uParam0 ) )) > -1) AND ((sub_11028()) || (sub_11073())))
    {
        return sub_147571( GET_PLAYER_TEAM( sub_19026( uParam0 ) ) );
    }
    return sub_119081( uParam0 );
}

int sub_147571(int iParam0)
{
    int I;
    int Result;

    if (sub_147582( iParam0 ))
    {
        for ( I = 0; I < 8; I++ )
        {
            if ((sub_82476( l_U945[I] )) > 0)
            {
                Result++;
                if (l_U954[l_U945[I]] == l_U954[iParam0])
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
            if ((sub_82476( l_U945[I] )) > 0)
            {
                Result++;
                if (l_U945[I] == iParam0)
                {
                    return Result;
                }
            }
        }
    }
    return 1;
}

int sub_147582(int iParam0)
{
    int I;

    for ( I = 0; I < 8; I++ )
    {
        if (I != iParam0)
        {
            if ((sub_120062( I )) > 0)
            {
                if (l_U954[I] == l_U954[iParam0])
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_148210()
{
    int I;
    unknown[16] uVar3;

    array(ref uVar3, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar3[I] = l_U1917[I]._fU20;
    }
    sub_148288( l_U1516._fU1588, ref uVar3, ref l_U1917[GET_PLAYER_ID()]._fU20 );
    return;
}

void sub_148288(int iParam0, unknown uParam1, unknown uParam2)
{
    int I;
    char[64] cVar6;
    char[16] cVar22;

    (uParam2^) = sub_148297();
    for ( I = 0; I < 16; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (l_U882[I] != (uParam1^)[I])
            {
                if ((uParam1^)[I] != -1)
                {
                    StrCopy( ref cVar6, GET_STRING_FROM_TEXT_FILE( "SUGGESTS" ), 64 );
                    ConcatString(ref cVar6, " ", 64);
                    StrCopy( ref cVar22, "NTGT_", 16 );
                    ConcatString(ref cVar22, (uParam1^)[I], 16);
                    ConcatString(ref cVar6, GET_STRING_FROM_TEXT_FILE( ref cVar22 ), 64);
                    sub_148453( I, -1, ref cVar6 );
                }
                l_U882[I] = (uParam1^)[I];
            }
        }
    }
    if (iParam0 != -1)
    {
        if (iParam0 != l_U899)
        {
            StrCopy( ref cVar22, "NTGT_", 16 );
            ConcatString(ref cVar22, iParam0, 16);
            sub_148738( "NEXT_GAME_MODE", -1, ref cVar22 );
            l_U899 = iParam0;
        }
    }
    return;
}

void sub_148297()
{
    return g_U18._fU660;
}

void sub_148453(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar6 = sub_143710( uParam1 );
    StrCopy( ref l_U21[uVar6]._fU76._fU0, GET_PLAYER_NAME( sub_19026( uParam0 ) ), 64 );
    sub_106699( sub_19026( uParam0 ), ref l_U21[uVar6]._fU76._fU68, ref l_U21[uVar6]._fU76._fU72, ref l_U21[uVar6]._fU76._fU76 );
    StrCopy( ref l_U21[uVar6]._fU156._fU0, uParam2, 64 );
    GET_HUD_COLOUR( 1, ref l_U21[uVar6]._fU156._fU68, ref l_U21[uVar6]._fU156._fU72, ref l_U21[uVar6]._fU156._fU76, ref uVar5 );
    sub_144285( uVar6 );
    return;
}

void sub_148738(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar6 = sub_143710( uParam1 );
    StrCopy( ref l_U21[uVar6]._fU76._fU0, uParam0, 64 );
    l_U21[uVar6]._fU76._fU64 = 1;
    GET_HUD_COLOUR( 1, ref l_U21[uVar6]._fU76._fU68, ref l_U21[uVar6]._fU76._fU72, ref l_U21[uVar6]._fU76._fU76, ref uVar5 );
    StrCopy( ref l_U21[uVar6]._fU156._fU0, uParam2, 64 );
    l_U21[uVar6]._fU156._fU64 = 1;
    GET_HUD_COLOUR( 1, ref l_U21[uVar6]._fU156._fU68, ref l_U21[uVar6]._fU156._fU72, ref l_U21[uVar6]._fU156._fU76, ref uVar5 );
    sub_144285( uVar6 );
    return;
}

int sub_149123(int iParam0, unknown uParam1, unknown uParam2)
{
    char[16] cVar5;

    if (iParam0 == 0)
    {
        (uParam1^) = iParam0;
        return 0;
    }
    if ((uParam1^) == iParam0)
    {
        return 1;
    }
    switch (sub_149165())
    {
        case 0:
        (uParam2^) = l_U2014;
        break;
        case 3:
        case 4:
        case 5:
        (uParam1^) = iParam0;
        return 1;
        break;
        default:
        if ((uParam2^) < (l_U2014 - 20000))
        {
            if (sub_80099( l_U1516._fU1592 ))
            {
                if (HAS_CONTROL_OF_NETWORK_ID( l_U1516._fU1592 ))
                {
                    if (NOT (sub_131612( sub_11590( l_U1516._fU1592 ), 53 )))
                    {
                        TASK_USE_MOBILE_PHONE( sub_11590( l_U1516._fU1592 ), 1 );
                    }
                }
            }
            switch (iParam0)
            {
                case 105:
                sub_149520( 0, "MPKP_105v2", "MPKPbAU", 1900 );
                break;
                case 108:
                sub_149520( 0, "MPKP2_127", "MPKP2AU", 1900 );
                break;
                case 36:
                sub_149520( 0, "MPKP2_126", "MPKP2AU", 1900 );
                break;
                case 40:
                case 45:
                case 73:
                case 91:
                case 97:
                case 117:
                case 125:
                case 126:
                StrCopy( ref cVar5, "MPKP2_", 16 );
                ConcatString(ref cVar5, iParam0, 16);
                sub_149520( 0, ref cVar5, "MPKP2AU", 1900 );
                break;
                default:
                StrCopy( ref cVar5, "MPKP_", 16 );
                ConcatString(ref cVar5, iParam0, 16);
                if (iParam0 < 62)
                {
                    sub_149520( 0, ref cVar5, "MPKPAUD", 1900 );
                }
                else
                {
                    sub_149520( 0, ref cVar5, "MPKPbAU", 1900 );
                }
                break;
            }
            (uParam2^) = l_U2014;
        }
        break;
    }
    return 0;
}

int sub_149165()
{
    if (g_U18._fU60 != -1)
    {
        return g_U15867[g_U18._fU60]._fU132._fU24;
    }
    return 6;
}

void sub_149520(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    return sub_149575( uParam0, ref cVar6, uParam2, 0, "", "", "", uParam3, 1, 0, 1, 0, 0 );
}

int sub_149575(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12)
{
    int I;

    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8318 >= 6)
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_90115() )))
    {
        sub_131804( "\n player is not playing" );
        return 0;
    }
    switch (g_U8320)
    {
        case 4:
        case 1:
        case 2:
        sub_131804( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_149862()))
        {
            return 0;
        }
        g_U18._fU48 = 1;
        break;
        case 2:
        if ((NOT bParam11) AND (NOT sub_149862()))
        {
            return 0;
        }
        g_U18._fU52 = 1;
        g_U18._fU372 = 1;
        g_U18._fU368 = 1;
        break;
    }
    g_U18._fU60 = 55;
    g_U15867[g_U18._fU60]._fU132._fU24 = 0;
    sub_150578( uParam0, ref g_U18._fU176, ref g_U18._fU616 );
    StrCopy( ref g_U18._fU160, "NIKO", 16 );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U18._fU380 = uParam10;
    g_U18._fU376 = bParam11;
    g_U18._fU420 = uParam12;
    g_U18._fU424 = -1;
    g_U18._fU364 = uParam3;
    StrCopy( ref g_U18._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U8425 - 1); I++ )
    {
        StrCopy( ref g_U8425[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U8425[I] = {(uParam1^)[I]};
    }
    StrCopy( ref g_U18._fU260[0], uParam4, 16 );
    StrCopy( ref g_U18._fU260[1], "", 16 );
    StrCopy( ref g_U18._fU260[2], "", 16 );
    StrCopy( ref g_U18._fU312[0], uParam5, 16 );
    StrCopy( ref g_U18._fU312[1], "", 16 );
    StrCopy( ref g_U18._fU312[2], "", 16 );
    StrCopy( ref g_U18._fU208, uParam6, 16 );
    g_U18._fU80 = uParam7;
    g_U18._fU384 = 0;
    g_U8320 = 4;
    return 1;
}

int sub_149862()
{
    if ((g_U18._fU52) || (g_U18._fU48))
    {
        return 0;
    }
    if (NOT sub_149895())
    {
        return 0;
    }
    if (g_U482 == 5)
    {
        return 0;
    }
    return 1;
}

int sub_149895()
{
    if (NOT (IS_PLAYER_PLAYING( sub_90115() )))
    {
        sub_131804( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_131804( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U18._fU376)
    {
        sub_131804( "\n PHONE CHECK - .overrideCellphoneChecks is returning TRUE." );
        return 1;
    }
    if ((g_U18._fU104) || (g_U18._fU100))
    {
        sub_131804( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_CONTROL_ON( sub_90115() )))
    {
        sub_131804( "\n PHONE CHECK - IS_PLAYER_CONTROL_ON is returning FALSE" );
        return 0;
    }
    if (IS_IN_SPECTATOR_MODE())
    {
        sub_131804( "\n PHONE CHECK - player IS_IN_SPECTATOR_MODE" );
        return 0;
    }
    return 1;
}

void sub_150578(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        StrCopy( (uParam1^), "PETROVIC", 32 );
        StrCopy( (uParam2^), "CP_NET_CONT_0", 16 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        StrCopy( (uParam2^), "CONT_UN", 16 );
        break;
    }
    return;
}

void sub_151244(unknown uParam0, unknown uParam1)
{
    char[16] cVar4;

    if (l_U2015 != l_U1516._fU8)
    {
        if ((sub_149165() != 0) AND ((sub_149165() != 5) AND ((sub_149165() != 4) AND (sub_149165() != 3))))
        {
            if ((uParam1^) < (l_U2014 - 1250))
            {
                StrCopy( ref cVar4, "MAFIYA_", 16 );
                ConcatString(ref cVar4, uParam0, 16);
                PRINT_NOW( ref cVar4, 15000, 1 );
                sub_151356( ref cVar4 );
                sub_151387( ref cVar4, 15000 );
                l_U2015 = l_U1516._fU8;
            }
        }
        else
        {
            (uParam1^) = l_U2014;
        }
    }
    return;
}

void sub_151356(unknown uParam0)
{
    StrCopy( ref g_U18._fU640, uParam0, 16 );
    return;
}

void sub_151387(unknown uParam0, int iParam1)
{
    StrCopy( ref l_U2055, uParam0, 16 );
    l_U2067 = l_U2014 + iParam1;
    return;
}

void sub_151517(unknown uParam0)
{
    unknown Result;

    if (DOES_PED_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        ADD_BLIP_FOR_CHAR( sub_11590( uParam0 ), ref Result );
        return Result;
    }
    else if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        ADD_BLIP_FOR_CAR( sub_11665( uParam0 ), ref Result );
        return Result;
    }
    else if (DOES_OBJECT_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        ADD_BLIP_FOR_OBJECT( sub_9848( uParam0 ), ref Result );
        return Result;
    };;;
    return nil;
}

int sub_152008(unknown uParam0, int iParam1)
{
    int iVar4;

    GET_CAR_DOOR_LOCK_STATUS( uParam0, ref iVar4 );
    if (iVar4 == iParam1)
    {
        return 1;
    }
    return 0;
}

void sub_152358(unknown uParam0, int iParam1)
{
    StrCopy( ref l_U2059, uParam0, 16 );
    l_U2068 = 0;
    l_U2067 = l_U2014 + iParam1;
    return;
}

void sub_152442(unknown uParam0)
{
    StrCopy( ref l_U2063, uParam0, 16 );
    l_U2068 = 1;
    return;
}

void sub_152483(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown Result;

    ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref Result );
    return Result;
}

void sub_152738(unknown uParam0)
{
    int I;
    int Result;

    for ( I = 0; I < 12; I++ )
    {
        if (sub_80099( l_U1516._fU388[I] ))
        {
            if ((l_U1516._fU48[I]._fU8 == 3) AND (l_U1516._fU48[I]._fU4 == 0))
            {
                if (l_U1516._fU48[I]._fU0 == 3)
                {
                    if (NOT (DOES_BLIP_EXIST( (uParam0^)[I] )))
                    {
                        ADD_BLIP_FOR_CHAR( sub_11590( l_U1516._fU388[I] ), ref (uParam0^)[I] );
                        CHANGE_BLIP_SPRITE( (uParam0^)[I], 4 );
                        CHANGE_BLIP_SCALE( (uParam0^)[I], 0.78000000 );
                        CHANGE_BLIP_PRIORITY( (uParam0^)[I], 1 );
                        SET_BLIP_AS_FRIENDLY( (uParam0^)[I], 1 );
                        CHANGE_BLIP_COLOUR( (uParam0^)[I], 5 );
                        CHANGE_BLIP_DISPLAY( (uParam0^)[I], 4 );
                        Result = 1;
                    }
                }
            }
        }
    }
    return Result;
}

int sub_153487()
{
    int I;

    for ( I = 0; I < 12; I++ )
    {
        if (sub_80099( l_U1516._fU388[I] ))
        {
            if (l_U1516._fU48[I]._fU4 == 1)
            {
                if ((l_U1516._fU48[I]._fU8 == 2) || ((l_U1516._fU48[I]._fU8 == 3) || (l_U1516._fU48[I]._fU8 == 1)))
                {
                    if (sub_142178( sub_11590( l_U1516._fU388[I] ), sub_9794() ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_153674()
{
    int I;

    for ( I = 0; I < 12; I++ )
    {
        if (sub_138437( l_U1516._fU388[I] ))
        {
            if (l_U1516._fU48[I]._fU4 == 1)
            {
                if ((l_U1516._fU48[I]._fU8 == 2) || ((l_U1516._fU48[I]._fU8 == 3) || (l_U1516._fU48[I]._fU8 == 1)))
                {
                    if (IS_CHAR_IN_CAR( sub_9794(), sub_11665( l_U1516._fU388[I] ) ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_153900(unknown uParam0)
{
    int I;
    int Result;

    for ( I = 0; I < 12; I++ )
    {
        if ((l_U1516._fU48[I]._fU8 == 3) AND (l_U1516._fU48[I]._fU4 == 0))
        {
            if (DOES_BLIP_EXIST( (uParam0^)[I] ))
            {
                REMOVE_BLIP( (uParam0^)[I] );
                Result = 1;
            }
        }
    }
    return Result;
}

int sub_154388(unknown uParam0)
{
    int I;

    if ((GET_PLAYER_TEAM( sub_90115() )) > -1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_9794() ))
        {
            for ( I = 0; I < 16; I++ )
            {
                if (sub_75585( I ))
                {
                    if (DOES_GROUP_EXIST( sub_78861( I ) ))
                    {
                        if ((GET_PLAYER_TEAM( sub_19026( I ) )) == (GET_PLAYER_TEAM( sub_90115() )))
                        {
                            if (IS_CHAR_IN_CAR( sub_16771( I ), sub_81910( sub_9794() ) ))
                            {
                                if (IS_GROUP_MEMBER( uParam0, sub_78861( I ) ))
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
    return 0;
}

int sub_154806()
{
    int I;
    int iVar3;

    GET_GROUP_SIZE( sub_135089(), ref iVar3, ref I );
    if (iVar3 > 0)
    {
        if (I > 1)
        {
            iVar3 = 0;
            for ( I = 0; I < 12; I++ )
            {
                if (l_U1516._fU48[I]._fU4 == 1)
                {
                    if ((l_U1516._fU48[I]._fU8 == 2) || ((l_U1516._fU48[I]._fU8 == 3) || (l_U1516._fU48[I]._fU8 == 1)))
                    {
                        if (sub_80099( l_U1516._fU388[I] ))
                        {
                            if (IS_GROUP_MEMBER( sub_11590( l_U1516._fU388[I] ), sub_135089() ))
                            {
                                iVar3++;
                            }
                        }
                    }
                }
            }
            if (iVar3 > 1)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_155732()
{
    int iVar2;

    GET_NETWORK_TIMER( ref iVar2 );
    if (NOT sub_155749())
    {
        if (IS_BUTTON_PRESSED( 0, 9 ))
        {
            if (NOT l_U1259)
            {
                if (l_U1258 > iVar2)
                {
                    l_U1258 = iVar2 - 5000;
                }
                else
                {
                    l_U1258 = iVar2 + 5000;
                }
                l_U1259 = 1;
            }
            else if (l_U1258 > iVar2)
            {
                l_U1258 = iVar2 + 5000;
            }
        }
        else
        {
            l_U1259 = 0;
        }
        if (l_U1258 > iVar2)
        {
            SET_RADAR_ZOOM( 980 );
            return 1;
        }
    }
    SET_RADAR_ZOOM( 0 );
    return 0;
}

int sub_155749()
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

void sub_157430(int iParam0)
{
    l_U2067 = l_U2014 + iParam0;
    return;
}

int sub_157819(unknown uParam0)
{
    int I;

    if ((GET_PLAYER_TEAM( sub_90115() )) > -1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_9794() ))
        {
            for ( I = 0; I < 16; I++ )
            {
                if (sub_75585( I ))
                {
                    if ((GET_PLAYER_TEAM( sub_19026( I ) )) == (GET_PLAYER_TEAM( sub_90115() )))
                    {
                        if (IS_CHAR_IN_CAR( sub_16771( I ), sub_81910( sub_9794() ) ))
                        {
                            if (sub_9877( sub_16771( I ), uParam0 ))
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

void sub_158088()
{
    char[16] cVar2;

    StrCopy( ref cVar2, "MAFYA_ITEM_", 16 );
    ConcatString(ref cVar2, l_U1516._fU8, 16);
    PRINT_NOW( ref cVar2, 5000, 1 );
    sub_152358( ref cVar2, 5000 );
    return;
}

void sub_158488()
{
    char[16] cVar2;

    StrCopy( ref cVar2, "MAFYA_HELP_", 16 );
    ConcatString(ref cVar2, l_U1516._fU8, 16);
    DISPLAY_HELP_TEXT_THIS_FRAME( ref cVar2, 0 );
    return;
}

int sub_159264(unknown uParam0)
{
    int Result;

    for ( Result = 0; Result < 16; Result++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( Result ))
        {
            if (HAS_PLAYER_COLLECTED_PICKUP( Result, l_U1516._fU440[uParam0] ))
            {
                return Result;
            }
        }
    }
    return -1;
}

int sub_159714()
{
    int I;

    for ( I = 0; I < 12; I++ )
    {
        if (l_U1516._fU48[I]._fU4 == 1)
        {
            if ((l_U1516._fU48[I]._fU8 == 2) || ((l_U1516._fU48[I]._fU8 == 3) || (l_U1516._fU48[I]._fU8 == 1)))
            {
                if (l_U1516._fU48[I]._fU0 == 3)
                {
                    if (sub_80099( l_U1516._fU388[I] ))
                    {
                        if (sub_142178( sub_11590( l_U1516._fU388[I] ), sub_9794() ))
                        {
                            return 1;
                        }
                    }
                    else if (sub_138437( l_U1516._fU388[I] ))
                    {
                        if (IS_CHAR_IN_CAR( sub_9794(), sub_11665( l_U1516._fU388[I] ) ))
                        {
                            return 1;
                        }
                    }
                    else if (DOES_OBJECT_EXIST_WITH_NETWORK_ID( l_U1516._fU388[I] ))
                    {
                        if (sub_9877( sub_9794(), sub_9848( l_U1516._fU388[I] ) ))
                        {
                            return 1;
                        }
                    };;;
                }
            }
        }
    }
    return 0;
}

void sub_160614(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    char[16] cVar7;

    if (iParam0 > 0)
    {
        StrCopy( ref cVar7, "+ ", 16 );
        if ((GET_CURRENT_LANGUAGE() == 1) || (GET_CURRENT_LANGUAGE() == 4))
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
        sub_160723( ref cVar7, uVar3, uVar4, uVar5, -1, " ", uVar3, uVar4, uVar5 );
    }
    else if (iParam0 < 0)
    {
        StrCopy( ref cVar7, "- ", 16 );
        if ((GET_CURRENT_LANGUAGE() == 1) || (GET_CURRENT_LANGUAGE() == 4))
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
        sub_160723( ref cVar7, uVar3, uVar4, uVar5, -1, " ", uVar3, uVar4, uVar5 );
    }
    return;
}

void sub_160723(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    unknown uVar11;

    uVar11 = sub_143710( uParam4 );
    StrCopy( ref l_U21[uVar11]._fU76._fU0, uParam0, 64 );
    l_U21[uVar11]._fU76._fU68 = uParam1;
    l_U21[uVar11]._fU76._fU72 = uParam2;
    l_U21[uVar11]._fU76._fU76 = uParam3;
    StrCopy( ref l_U21[uVar11]._fU156._fU0, uParam5, 64 );
    l_U21[uVar11]._fU156._fU68 = uParam6;
    l_U21[uVar11]._fU156._fU72 = uParam7;
    l_U21[uVar11]._fU156._fU76 = uParam8;
    return;
}

void sub_161192(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
{
    if (NOT (IS_FONT_LOADED( 6 )))
    {
        LOAD_TEXT_FONT( 6 );
    }
    HIDE_HELP_TEXT_THIS_FRAME();
    if ((iParam2 == 5) || ((iParam2 == 3) || (iParam2 == 1)))
    {
        sub_161251( uParam1 );
    }
    sub_161680( uParam0 );
    if ((sub_10481() + sub_11170()) > 22)
    {
        if (GET_IS_HIDEF())
        {
            sub_162261( iParam2, 0.07000000, 0.06400000, 0.31300000, 0.40600000, 0.02450000, 0.28000000, 0.39070000, 0.02300000, uParam3, uParam4 );
        }
        else
        {
            sub_162261( iParam2, 0.09000000, 0.08400000, 0.30000000, 0.44000000, 0.02450000, 0.30000000, 0.44000000, 0.02300000, uParam3, uParam4 );
        }
    }
    else if (GET_IS_HIDEF())
    {
        sub_162261( iParam2, 0.07000000, 0.06400000, 0.31300000, 0.46000000, 0.02700000, 0.28000000, 0.42000000, 0.02700000, uParam3, uParam4 );
    }
    else
    {
        sub_162261( iParam2, 0.09000000, 0.08400000, 0.30000000, 0.44000000, 0.02700000, 0.30000000, 0.44000000, 0.02700000, uParam3, uParam4 );
    }
    return;
}

void sub_161251(unknown uParam0)
{
    int I;

    if (NOT l_U998)
    {
        sub_86077();
        l_U998 = 1;
    }
    if ((uParam0^) <= 8)
    {
        for ( I = 0; I < (uParam0^); I++ )
        {
            if (l_U954[I] != (uParam0^)[I])
            {
                l_U954[I] = (uParam0^)[I];
                sub_161346( I );
            }
        }
    }
    return;
}

void sub_161346(unknown uParam0)
{
    unknown uVar3;

    if (l_U936[uParam0] > 0)
    {
        uVar3 = l_U945[l_U936[uParam0] - 1];
        if (l_U954[uParam0] > l_U954[uVar3])
        {
            l_U945[l_U936[uParam0] - 1] = uParam0;
            l_U945[l_U936[uParam0]] = uVar3;
            l_U936[uVar3]++;
            l_U936[uParam0]--;
            sub_161346( uParam0 );
            return;
        }
    }
    if (l_U936[uParam0] < 7)
    {
        uVar3 = l_U945[l_U936[uParam0] + 1];
        if (l_U954[uParam0] < l_U954[uVar3])
        {
            l_U945[l_U936[uParam0] + 1] = uParam0;
            l_U945[l_U936[uParam0]] = uVar3;
            l_U936[uVar3]--;
            l_U936[uParam0]++;
            sub_161346( uParam0 );
            return;
        }
    }
    return;
}

void sub_161680(unknown uParam0)
{
    int I;

    if (NOT l_U997)
    {
        sub_85922();
        l_U997 = 1;
    }
    for ( I = 0; I < 16; I++ )
    {
        if (l_U577[sub_119192()]._fU24[I] != (uParam0^)[I])
        {
            l_U577[sub_119192()]._fU24[I] = (uParam0^)[I];
            sub_161781( I );
        }
    }
    return sub_10481();
}

void sub_161781(unknown uParam0)
{
    unknown uVar3;

    if (l_U919[uParam0] > 0)
    {
        uVar3 = l_U577[0]._fU24[l_U919[uParam0] - 1];
        if (l_U577[sub_119192()]._fU24[uParam0] > l_U577[sub_119192()]._fU24[uVar3])
        {
            l_U577[0]._fU24[l_U919[uParam0] - 1] = uParam0;
            l_U577[0]._fU24[l_U919[uParam0]] = uVar3;
            l_U919[uVar3]++;
            l_U919[uParam0]--;
            sub_161781( uParam0 );
            return;
        }
    }
    if (l_U919[uParam0] < 15)
    {
        uVar3 = l_U577[0]._fU24[l_U919[uParam0] + 1];
        if (l_U577[sub_119192()]._fU24[uParam0] < l_U577[sub_119192()]._fU24[uVar3])
        {
            l_U577[0]._fU24[l_U919[uParam0] + 1] = uParam0;
            l_U577[0]._fU24[l_U919[uParam0]] = uVar3;
            l_U919[uVar3]--;
            l_U919[uParam0]++;
            sub_161781( uParam0 );
            return;
        }
    }
    return;
}

void sub_162261(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, int iParam9, boolean bParam10)
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
            fVar17 = sub_118077( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, GET_PLAYER_NAME( sub_19026( I ) ) );
            SET_TEXT_USE_UNDERSCORE( 0 );
            if (fVar17 > fVar18)
            {
                fVar18 = fVar17;
            }
            if (((sub_119939( I )) > -1) AND (iParam0 == 3))
            {
                if ((l_U577[sub_119192()]._fU16 == 6) || (l_U577[sub_119192()]._fU16 == 5))
                {
                    if (sub_1248() == 1)
                    {
                        fVar17 = sub_162494( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, "CASH", l_U577[sub_119192()]._fU24[I] );
                    }
                    else
                    {
                        fVar17 = sub_162494( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, "CASH", (l_U954[sub_119939( I )]) / (sub_120062( sub_119939( I ) )) );
                    }
                }
                else
                {
                    fVar17 = sub_162810( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, (l_U954[sub_119939( I )]) / (sub_120062( sub_119939( I ) )) );
                }
                if (fVar17 > fVar19)
                {
                    fVar19 = fVar17;
                }
            }
            else if (iParam0 == 2)
            {
                if ((l_U577[sub_119192()]._fU16 == 6) || (l_U577[sub_119192()]._fU16 == 5))
                {
                    fVar17 = sub_162494( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, "CASH", l_U577[sub_119192()]._fU24[I] );
                }
                else
                {
                    fVar17 = sub_162810( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, l_U577[sub_119192()]._fU24[I] );
                }
                if (fVar17 > fVar19)
                {
                    fVar19 = fVar17;
                }
            }
            else if ((iParam0 == 5) || (iParam0 == 4))
            {
                fVar17 = sub_163247( 0, 0.00000000, 1.00000000, 0, 0, uParam3, uParam4, sub_119081( I ) );
                if (fVar17 > fVar19)
                {
                    fVar19 = fVar17;
                }
            };;;
            iVar15++;
        }
    }
    if ((iParam0 == 5) || ((iParam0 == 3) || (iParam0 == 1)))
    {
        for ( J = 0; J < 8; J++ )
        {
            if ((sub_82476( J )) > 0)
            {
                fVar17 = sub_164909( 6, 0.00000000, 1.00000000, 0, 0, uParam6, uParam7, sub_163633( J, 1 ) );
                if (fVar17 > fVar18)
                {
                    fVar18 = fVar17;
                }
                if (iParam0 == 3)
                {
                    if ((l_U577[sub_119192()]._fU16 == 6) || (l_U577[sub_119192()]._fU16 == 5))
                    {
                        fVar17 = sub_162494( 6, 0.00000000, 1.00000000, 0, 0, uParam6, uParam7, "CASH", l_U954[J] );
                    }
                    else
                    {
                        fVar17 = sub_162810( 6, 0.00000000, 1.00000000, 0, 0, uParam6, uParam7, l_U954[J] );
                    }
                    if (fVar17 > fVar19)
                    {
                        fVar19 = fVar17;
                    }
                }
                else if (iParam0 == 5)
                {
                    fVar17 = sub_163247( 6, 0.00000000, 1.00000000, 0, 0, uParam6, uParam7, sub_147571( J ) );
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
    ConcatString(ref cVar23, sub_1248(), 32);
    fVar17 = sub_164909( 6, 0.00000000, 1.00000000, 0, 0, 0.31000000, 0.45500000, ref cVar23 );
    if (fVar17 > fVar18)
    {
        fVar18 = fVar17;
    }
    if (iParam9 != 2147483647)
    {
        if (bParam10)
        {
            if (sub_18503())
            {
                fVar17 = sub_162494( 6, 0.00000000, 1.00000000, 0, 0, 0.31000000, 0.45500000, "LIVES_LEFT", iParam9 );
            }
            else
            {
                fVar17 = sub_162494( 6, 0.00000000, 1.00000000, 0, 0, 0.31000000, 0.45500000, "MAX_POINTS", iParam9 );
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
    if ((bParam10) AND (iParam9 != 2147483647))
    {
        fVar21 = (fVar22 + 0.08200000) + (0.01200000 * 2.00000000);
    }
    else
    {
        fVar21 = (fVar22 + 0.03800000) + (0.01200000 * 2.00000000);
    }
    l_U999 = fVar21 - -0.02600000;
    DRAW_CURVED_WINDOW( uParam1, uParam2 - 0.01200000, fVar20, fVar21, 245 );
    StrCopy( ref cVar23, "NTGT_", 32 );
    ConcatString(ref cVar23, sub_1248(), 32);
    sub_86594( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    sub_92615( ref cVar23, uParam1 + 0.01000000, uParam2 + -0.00370000, 0.31000000, 0.45500000, 255, 255, 255, 255, 2 );
    if ((GET_IS_WIDESCREEN()) || (N_604003528()))
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
            if ((GET_IS_WIDESCREEN()) || (N_604003528()))
            {
                DRAW_RECT( uParam1 + (fVar20 * 0.50000000), ((((uParam2 + fVar22) + -0.00370000) + 0.03450000) + -0.01900000) + 0.03820000, (fVar20 - 0.01000000) - 0.01000000, 0.00200000, 255, 255, 255, 255 );
            }
            else
            {
                DRAW_RECT( uParam1 + (fVar20 * 0.50000000), ((((uParam2 + fVar22) + -0.00370000) + 0.03450000) + -0.01900000) + 0.03820000, (fVar20 - 0.01000000) - 0.01000000, 0.00400000, 255, 255, 255, 255 );
            }
            sub_86594( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
            if (sub_18503())
            {
                sub_86891( "LIVES_LEFT", uParam1 + 0.01000000, (((((uParam2 + fVar22) + -0.00370000) + 0.03450000) + -0.01900000) + 0.03820000) + 0.00650000, 0.31000000, 0.45500000, 255, 255, 255, 255, 2, iParam9 );
            }
            else
            {
                sub_86891( "MAX_POINTS", uParam1 + 0.01000000, (((((uParam2 + fVar22) + -0.00370000) + 0.03450000) + -0.01900000) + 0.03820000) + 0.00650000, 0.31000000, 0.45500000, 255, 255, 255, 255, 2, iParam9 );
            }
        }
    }
    array(ref iVar31, 7);
    for ( I = 0; I < 7; I++ )
    {
        iVar31[I] = -1;
    }
    if ((iParam0 == 1) || (iParam0 == 0))
    {
        iVar31[0] = 0;
    }
    else
    {
        iVar31[0] = sub_119192();
        iVar31[1] = 0;
    }
    if ((iParam0 == 5) || ((iParam0 == 3) || (iParam0 == 1)))
    {
        sub_166664( ref iVar31, (uParam1 + 0.01000000) + fVar19, ((uParam2 + -0.00370000) + 0.03450000) + -0.01900000, uParam6, uParam7, uParam8, uParam3, uParam4, uParam5, iParam0, 24, 0, -1 );
    }
    else
    {
        sub_168113( ref iVar31, (uParam1 + 0.01000000) + fVar19, ((uParam2 + -0.00370000) + 0.03450000) + -0.01900000, uParam3, uParam4, uParam5, iParam0, 16, 0, -1 );
    }
    return;
}

void sub_162494(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
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

void sub_162810(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
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

void sub_163247(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7)
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

string sub_163633(int iParam0, boolean bParam1)
{
    int I;
    int iVar5;

    if (l_U1212)
    {
        if (l_U1213 == 0)
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
        else if (l_U1213 == 1)
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
            if ((sub_120062( I )) > 0)
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
            if ((sub_120062( I )) > 0)
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

void sub_164909(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
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

void sub_166664(unknown uParam0, unknown uParam1, float fParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, int iParam9, int iParam10, int iParam11, unknown uParam12)
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
        if ((sub_120062( l_U945[iVar16] )) > 0)
        {
            if ((iVar25 < (iParam11 + iParam10)) AND (iVar25 >= iParam11))
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
                    if (((uParam0^)[I] == 0) || ((uParam0^)[I] == sub_119192()))
                    {
                        if (l_U577[(uParam0^)[I]]._fU16 > 0)
                        {
                            GET_TEAM_RGB_COLOUR( l_U945[iVar16], ref uVar18, ref uVar19, ref uVar20 );
                            if ((iParam9 == 7) || (iParam9 == 6))
                            {
                                sub_86594( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                                iVar22 = 1;
                            }
                            else
                            {
                                sub_86594( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                                iVar22 = 3;
                            }
                            if (l_U577[(uParam0^)[I]]._fU16 != 1)
                            {
                                if ((iParam9 == 7) || (iParam9 == 6))
                                {
                                    fVar23 += (sub_116684( l_U577[(uParam0^)[I]]._fU16 )) * 0.50000000;
                                }
                            }
                            switch (l_U577[(uParam0^)[I]]._fU16)
                            {
                                case 1:
                                if ((iParam9 == 7) || (iParam9 == 6))
                                {
                                    sub_86594( 6, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                                    sub_92615( sub_163633( l_U945[iVar16], 1 ), fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, 2 );
                                    fVar23 += (sub_116684( l_U577[(uParam0^)[I]]._fU16 )) - uVar24;
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
                                sub_92615( sub_163633( l_U945[iVar16], 1 ), fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, 2 );;
                                iVar21++;
                                break;
                                case 2:
                                case 7:
                                sub_87216( fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, iVar22, l_U954[l_U945[iVar16]] );
                                iVar21++;
                                break;
                                case 3:
                                if (l_U954[l_U945[iVar16]] > 0)
                                {
                                    sub_119571( fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, iVar22, l_U936[l_U945[iVar16]] + 1 );
                                }
                                iVar21++;
                                break;
                                case 4:
                                if (l_U954[l_U945[iVar16]] < 5940000)
                                {
                                    sub_111067( fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, iVar22, l_U954[l_U945[iVar16]], 1.00000000 );
                                }
                                iVar21++;
                                break;
                                case 5:
                                case 6:
                                sub_86891( "CASH", fVar23, fParam2, uParam3, uParam4, uVar18, uVar19, uVar20, 255, iVar22, l_U954[l_U945[iVar16]] );
                                iVar21++;
                                break;
                            }
                            if (l_U577[(uParam0^)[I]]._fU16 != 1)
                            {
                                if ((iParam9 == 7) || (iParam9 == 6))
                                {
                                    fVar23 += (sub_116684( l_U577[(uParam0^)[I]]._fU16 )) * 0.50000000;
                                }
                            }
                            if (iVar21 == 2)
                            {
                                I = 7;
                            }
                        }
                    }
                    else if ((iParam9 == 7) || (iParam9 == 6))
                    {
                        fVar23 += sub_116684( 2 );
                    }
                }
                if ((iParam9 == 7) || (iParam9 == 6))
                {
                    fParam2 += uParam5;
                }
                if (iParam9 != 6)
                {
                    if (iParam9 != 7)
                    {
                        if (GET_IS_WIDESCREEN())
                        {
                            if ((sub_10481() + sub_11170()) > 22)
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
                if (sub_119125( l_U577[0]._fU24[J] ))
                {
                    if ((sub_119939( l_U577[0]._fU24[J] )) == l_U945[iVar16])
                    {
                        if ((iVar25 < (iParam11 + iParam10)) AND (iVar25 >= iParam11))
                        {
                            sub_116292( l_U577[0]._fU24[J], uParam0, uParam1, ref fParam2, uParam6, uParam7, uParam8, iParam9, 0 );
                        }
                        iVar25++;
                    }
                }
            }
        }
    }
    return;
}

void sub_168113(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7, int iParam8, unknown uParam9)
{
    int I;
    int iVar13;

    for ( I = 0; I < 16; I++ )
    {
        if (sub_119125( l_U577[0]._fU24[I] ))
        {
            if ((iVar13 < (iParam8 + iParam7)) AND (iVar13 >= iParam8))
            {
                sub_116292( l_U577[0]._fU24[I], uParam0, uParam1, ref uParam2, uParam3, uParam4, uParam5, uParam6, 0 );
            }
            iVar13++;
        }
    }
    return;
}

void sub_168554()
{
    if (l_U2015 == l_U1516._fU8)
    {
        if (l_U2067 < l_U2014)
        {
            if (sub_168597())
            {
                ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                if (sub_159714())
                {
                    if (l_U2068)
                    {
                        PRINT_STRING_IN_STRING_NOW( ref l_U2059, ref l_U2063, 50, 1 );
                    }
                    else
                    {
                        PRINT_NOW( ref l_U2059, 50, 1 );
                    }
                }
                else
                {
                    PRINT_NOW( ref l_U2055, 50, 1 );
                }
            }
        }
    }
    return;
}

int sub_168597()
{
    int I;

    for ( I = 0; I < 12; I++ )
    {
        if (l_U1516._fU48[I]._fU4 > 0)
        {
            if (l_U1516._fU48[I]._fU0 == 3)
            {
                if (sub_80099( l_U1516._fU388[I] ))
                {
                    return 1;
                }
                else if (sub_138437( l_U1516._fU388[I] ))
                {
                    return 1;
                }
                else if (DOES_OBJECT_EXIST_WITH_NETWORK_ID( l_U1516._fU388[I] ))
                {
                    return 1;
                }
                else if (DOES_PICKUP_EXIST( l_U1516._fU440[I] ))
                {
                    return 1;
                };;;;
            }
        }
    }
    return 0;
}

void sub_168996(int iParam0, boolean bParam1)
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
    if (l_U901 == 0)
    {
        l_U901++;
    }
    else if (l_U901 == 1)
    {
        if ((iParam0 > 15000) AND (iParam0 <= 60000))
        {
            if (PRELOAD_STREAM( "MP_COUNTDOWN" ))
            {
                l_U901++;
            }
        }
    }
    else if (l_U901 == 2)
    {
        if (iParam0 <= 28725)
        {
            PLAY_STREAM_FRONTEND();
            MUTE_POSITIONED_RADIO( 1 );
            DISABLE_FRONTEND_RADIO();
            l_U901++;
        }
    };;;
    if (iParam0 <= 10000)
    {
        iVar5 = iParam0 mod 1000;
        if (((iVar5 > 100) AND (iVar5 < 300)) || ((iVar5 > 600) AND (iVar5 < 800)))
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
        sub_86594( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
        sub_100784( sub_104961( 23 ), (sub_104994( 23 )) + 0.04050000, sub_104961( 24 ), sub_104994( 24 ), 255, 255, 255, 255, 2, ref cVar15 );
    }
    SET_MULTIPLAYER_HUD_TIME( ref cVar15 );
    return;
}

void sub_169531()
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

    if (sub_7249())
    {
        SET_WIDESCREEN_FORMAT( 2 );
        iVar2 = l_U495;
        if (IS_HELP_MESSAGE_BEING_DISPLAYED())
        {
            GET_HELP_MESSAGE_BOX_SIZE( ref fVar13, ref fVar14 );
            fVar14 += l_U576 + 0.03000000;
        }
        else if (IS_IN_SPECTATOR_MODE())
        {
            fVar14 = (0.21550000 + l_U576) + l_U999;
        }
        else if (GET_IS_HIDEF())
        {
            fVar14 = (0.06000000 + l_U576) + l_U999;
        }
        else
        {
            fVar14 = (0.08000000 + l_U576) + l_U999;
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
        while (iVar2 != l_U494)
        {
            if (l_U21[iVar2]._fU0 == 1)
            {
                if (GET_IS_HIDEF())
                {
                    fVar13 = 0.07700000;
                }
                else
                {
                    fVar13 = 0.09700000;
                }
                iVar3 = sub_169857( (l_U21[iVar2]._fU4 - 512) - iVar5, 0, 255 );
                sub_86594( 0, -0.50000000, 1.50000000, 3, 1, 0, 0, 0, iVar3 );
                SET_TEXT_USE_UNDERSCORE( 1 );
                if (l_U21[iVar2]._fU76._fU64)
                {
                    uVar12 = sub_92615( ref l_U21[iVar2]._fU76._fU0, fVar13, fVar14, fVar15, fVar16, l_U21[iVar2]._fU76._fU68, l_U21[iVar2]._fU76._fU72, l_U21[iVar2]._fU76._fU76, iVar3, 2 );
                }
                else
                {
                    uVar12 = sub_100784( fVar13, fVar14, fVar15, fVar16, l_U21[iVar2]._fU76._fU68, l_U21[iVar2]._fU76._fU72, l_U21[iVar2]._fU76._fU76, iVar3, 2, ref l_U21[iVar2]._fU76._fU0 );
                }
                fVar13 += uVar12;
                if (l_U21[iVar2]._fU8 == -1)
                {
                    fVar13 += sub_118077( 0, -0.50000000, 1.50000000, 3, 1, fVar15, fVar16, " " );
                }
                if (l_U21[iVar2]._fU8 == -2)
                {
                    fVar13 += sub_118077( 0, -0.50000000, 1.50000000, 3, 1, fVar15, fVar16, " " );
                    sub_86594( 0, -0.50000000, 1.50000000, 3, 1, 0, 0, 0, iVar3 );
                    GET_HUD_COLOUR( 1, ref uVar6, ref uVar7, ref uVar8, ref uVar9 );
                    SET_TEXT_USE_UNDERSCORE( 1 );
                    fVar13 += sub_92615( ref l_U21[iVar2]._fU12, fVar13, fVar14, fVar15, fVar16, uVar6, uVar7, uVar8, iVar3, 2 );
                    SET_TEXT_USE_UNDERSCORE( 1 );
                    fVar13 += sub_118077( 0, -0.50000000, 1.50000000, 3, 1, fVar15, fVar16, " " );
                }
                else if ((l_U21[iVar2]._fU8 < 36) AND (l_U21[iVar2]._fU8 > -1))
                {
                    fVar13 += 0.03200000 / 2;
                    DRAW_SPRITE( l_U514[l_U21[iVar2]._fU8], fVar13, fVar14 + 0.00900000, 0.03200000, 0.03200000, 0.00000000, 255, 255, 255, iVar3 );
                    fVar13 += 0.03200000 / 2;
                }
                sub_86594( 0, -0.50000000, 1.50000000, 3, 1, 0, 0, 0, iVar3 );
                SET_TEXT_USE_UNDERSCORE( 1 );
                if (l_U21[iVar2]._fU156._fU64)
                {
                    sub_92615( ref l_U21[iVar2]._fU156._fU0, fVar13, fVar14, fVar15, fVar16, l_U21[iVar2]._fU156._fU68, l_U21[iVar2]._fU156._fU72, l_U21[iVar2]._fU156._fU76, iVar3, 2 );
                }
                else
                {
                    sub_100784( fVar13, fVar14, fVar15, fVar16, l_U21[iVar2]._fU156._fU68, l_U21[iVar2]._fU156._fU72, l_U21[iVar2]._fU156._fU76, iVar3, 2, ref l_U21[iVar2]._fU156._fU0 );
                }
                SET_TEXT_USE_UNDERSCORE( 0 );
                if (iVar3 < 255)
                {
                    iVar4++;
                }
                if (l_U21[iVar2]._fU4 <= iVar5)
                {
                    l_U576 -= -0.02600000;
                    sub_143737( ref l_U21[iVar2] );
                    sub_19733( ref l_U495, 8 );
                    iVar4--;
                }
                fVar14 -= -0.02600000;
                sub_19733( ref iVar2, 8 );
            }
            if (l_U21[iVar2]._fU0 == 0)
            {
                if ((iVar4 == 0) AND (iVar2 == l_U495))
                {
                    l_U576 = 0.00000000;
                }
                iVar2 = l_U494;
            }
        }
        l_U576 -= uVar10 * 0.08000000;
        l_U999 = 0.00000000;
        fVar11 = -0.02600000 * (TO_FLOAT( iVar4 ));
        if (l_U576 <= fVar11)
        {
            l_U576 = fVar11;
        }
        SET_WIDESCREEN_FORMAT( 0 );
    }
    return;
}

void sub_169857(int iParam0, int iParam1, int Result)
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

void sub_171034()
{
    if (sub_171043())
    {
        if (sub_171204())
        {
            switch (sub_171635())
            {
                case 0:
                SAY_AMBIENT_SPEECH( sub_9794(), "GANG_CHASE", 1, 0, 0 );
                break;
                case 1:
                SAY_AMBIENT_SPEECH( sub_9794(), "GENERIC_FUCK_OFF", 1, 0, 0 );
                break;
                case 2:
                SAY_AMBIENT_SPEECH( sub_9794(), "GENERIC_HI", 1, 0, 0 );
                break;
                case 3:
                SAY_AMBIENT_SPEECH( sub_9794(), "GANG_WATCH_THIS_GUY_SOLO", 1, 0, 0 );
                break;
                case 4:
                SAY_AMBIENT_SPEECH( sub_9794(), "JEERING", 1, 0, 0 );
                break;
                case 5:
                SAY_AMBIENT_SPEECH( sub_9794(), "ABUSE_DRIVER", 1, 0, 0 );
                break;
                case 6:
                SAY_AMBIENT_SPEECH( sub_9794(), "TARGET_NOGENDER", 1, 0, 0 );
                break;
                case 7:
                SAY_AMBIENT_SPEECH( sub_9794(), "FIGHT", 1, 0, 0 );
                break;
                case 8:
                SAY_AMBIENT_SPEECH( sub_9794(), "GANG_FIGHT_CHEER", 1, 0, 0 );
                break;
            }
        }
    }
    return;
}

int sub_171043()
{
    int iVar2;
    unknown uVar3;
    int iVar4;

    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (IS_CHAR_IN_ANY_HELI( sub_9794() ))
        {
            return 0;
        }
        if (IS_CHAR_IN_ANY_CAR( sub_9794() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_9794(), ref uVar3 );
            GET_DRIVER_OF_CAR( uVar3, ref iVar4 );
            if (iVar4 == sub_9794())
            {
                GET_CURRENT_CHAR_WEAPON( sub_9794(), ref iVar2 );
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

int sub_171204()
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (sub_171234( 1, 1 ))
        {
            if (NOT (IS_CHAR_IN_AIR( sub_9794() )))
            {
                if (NOT l_U1515)
                {
                    if (IS_CONTROL_JUST_PRESSED( 0, 23 ))
                    {
                        if (NOT (IS_AMBIENT_SPEECH_PLAYING( sub_9794() )))
                        {
                            l_U1515 = 1;
                            return 1;
                        }
                    }
                }
                else if (NOT (IS_CONTROL_JUST_PRESSED( 0, 23 )))
                {
                    l_U1515 = 0;
                }
            }
        }
    }
    return 0;
}

int sub_171234(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_9794() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_9794(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_CAR_UPRIGHT_VALUE( uVar4, ref fVar6 );
                if ((fVar6 > 1.01100000) || (fVar6 < 0.95000000))
                {
                    return 0;
                }
            }
        }
    }
    if (bParam0)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_9794() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_9794(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_9794()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_9794() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_9794() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_90115() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_90115() )))
    {
        return 0;
    }
    return 1;
}

int sub_171635()
{
    if (sub_171644())
    {
        return 6;
    }
    else if (sub_171786( 1 ))
    {
        return 7;
    }
    else if (sub_171786( 0 ))
    {
        return 8;
    }
    if (sub_172478())
    {
        return 1;
    }
    if (((sub_172906()) AND (sub_171821())) || (sub_172799()))
    {
        if (sub_173087() != nil)
        {
            if (IS_CHAR_MALE( sub_173087() ))
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
    if (sub_173257())
    {
        return 5;
    }
    if (sub_173485( 10.00000000 ))
    {
        return 2;
    }
    return 2;
}

int sub_171644()
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (IS_CHAR_SHOOTING( sub_9794() ))
        {
            return 1;
        }
    }
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if ((IS_CHAR_ARMED( sub_9794(), 4 )) || (IS_CHAR_ARMED( sub_9794(), 2 )))
        {
            if (IS_BUTTON_PRESSED( 0, 7 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_171786(boolean bParam0)
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (bParam0)
        {
            if (sub_171821())
            {
                if (IS_NETWORK_PLAYER_ACTIVE( l_U1514 ))
                {
                    if (NOT (IS_CHAR_DEAD( sub_16771( l_U1514 ) )))
                    {
                        if (IS_CHAR_VISIBLE( sub_16771( l_U1514 ) ))
                        {
                            if (sub_146781( sub_9794(), sub_16771( l_U1514 ), 10.00000000 ))
                            {
                                if (IS_CHAR_IN_MELEE_COMBAT( sub_9794() ))
                                {
                                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( sub_16771( l_U1514 ), sub_9794(), 0 ))
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
        else if (IS_NETWORK_PLAYER_ACTIVE( l_U1514 ))
        {
            if (NOT (IS_CHAR_DEAD( sub_16771( l_U1514 ) )))
            {
                if (IS_CHAR_VISIBLE( sub_16771( l_U1514 ) ))
                {
                    if (sub_146781( sub_9794(), sub_16771( l_U1514 ), 10.00000000 ))
                    {
                        if (IS_CHAR_IN_MELEE_COMBAT( sub_16771( l_U1514 ) ))
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

int sub_171821()
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
                    if ((NOT (IS_CHAR_DEAD( sub_16771( I ) ))) AND (NOT (IS_CHAR_DEAD( sub_9794() ))))
                    {
                        if (IS_CHAR_VISIBLE( sub_16771( I ) ))
                        {
                            GET_CHAR_COORDINATES( sub_16771( GET_PLAYER_ID() ), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                            GET_CHAR_COORDINATES( sub_16771( I ), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                            if ((VDIST( uVar4, uVar7 )) < 10000.00000000)
                            {
                                fVar2 = VDIST( uVar4, uVar7 );
                                l_U1514 = I;
                            }
                        }
                    }
                }
            }
        }
    }
    if (IS_NETWORK_PLAYER_ACTIVE( l_U1514 ))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (((GET_PLAYER_TEAM( sub_19026( l_U1514 ) )) == -1) || ((GET_PLAYER_TEAM( sub_19026( l_U1514 ) )) != (GET_PLAYER_TEAM( sub_90115() ))))
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

int sub_172478()
{
    int I;
    unknown uVar3;

    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( sub_9794(), 57 ))
        {
            CLEAR_CHAR_LAST_WEAPON_DAMAGE( sub_9794() );
            CLEAR_CHAR_LAST_DAMAGE_ENTITY( sub_9794() );
            CLEAR_CHAR_LAST_DAMAGE_BONE( sub_9794() );
            return 1;
        }
        for ( I = 0; I < 16; I++ )
        {
            if (IS_NETWORK_PLAYER_ACTIVE( I ))
            {
                if (I != GET_PLAYER_ID())
                {
                    if (IS_CHAR_IN_ANY_CAR( sub_16771( I ) ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_16771( I ), ref uVar3 );
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CAR( sub_9794(), uVar3 ))
                        {
                            CLEAR_CHAR_LAST_WEAPON_DAMAGE( sub_9794() );
                            CLEAR_CHAR_LAST_DAMAGE_ENTITY( sub_9794() );
                            CLEAR_CHAR_LAST_DAMAGE_BONE( sub_9794() );
                            return 1;
                        }
                    }
                    else if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( sub_9794(), sub_16771( I ), 0 ))
                    {
                        CLEAR_CHAR_LAST_WEAPON_DAMAGE( sub_9794() );
                        CLEAR_CHAR_LAST_DAMAGE_ENTITY( sub_9794() );
                        CLEAR_CHAR_LAST_DAMAGE_BONE( sub_9794() );
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_172799()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_9794(), 0.00000000, 5.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        if (ARE_ENEMY_PEDS_IN_AREA( sub_9794(), uVar2, 10.00000000 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_172906()
{
    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( l_U1514 ))
        {
            if (NOT (IS_CHAR_DEAD( sub_16771( l_U1514 ) )))
            {
                if (IS_CHAR_VISIBLE( sub_16771( l_U1514 ) ))
                {
                    if (sub_146781( sub_9794(), sub_16771( l_U1514 ), 10.00000000 ))
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( sub_16771( l_U1514 ) )))
                        {
                            if (NOT (IS_CHAR_IN_MELEE_COMBAT( sub_9794() )))
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

void sub_173087()
{
    if (IS_NETWORK_PLAYER_ACTIVE( l_U1514 ))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
        {
            if (((GET_PLAYER_TEAM( sub_19026( l_U1514 ) )) == -1) || ((GET_PLAYER_TEAM( sub_19026( l_U1514 ) )) != (GET_PLAYER_TEAM( sub_90115() ))))
            {
                return sub_16771( l_U1514 );
            }
        }
    }
    return nil;
}

int sub_173257()
{
    float fVar2;

    if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
    {
        if (sub_171821())
        {
            if (sub_89850())
            {
                if (IS_NETWORK_PLAYER_ACTIVE( l_U1514 ))
                {
                    if (NOT (IS_CHAR_DEAD( sub_16771( l_U1514 ) )))
                    {
                        if (IS_CHAR_VISIBLE( sub_16771( l_U1514 ) ))
                        {
                            if (sub_146781( sub_9794(), sub_16771( l_U1514 ), 10.00000000 ))
                            {
                                if ((IS_CHAR_IN_ANY_CAR( sub_16771( l_U1514 ) )) AND (IS_CHAR_IN_ANY_CAR( sub_9794() )))
                                {
                                    GET_CHAR_SPEED( sub_9794(), ref fVar2 );
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

int sub_173485(unknown uParam0)
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
                    if (NOT (IS_CHAR_DEAD( sub_16771( I ) )))
                    {
                        if (IS_CHAR_VISIBLE( sub_16771( I ) ))
                        {
                            if (sub_146781( sub_9794(), sub_16771( I ), uParam0 ))
                            {
                                if (NOT (IS_CHAR_IN_ANY_CAR( sub_16771( I ) )))
                                {
                                    if ((NOT (IS_CHAR_IN_MELEE_COMBAT( sub_16771( I ) ))) AND (NOT (IS_CHAR_IN_MELEE_COMBAT( sub_9794() ))))
                                    {
                                        if (((GET_PLAYER_TEAM( sub_19026( I ) )) == -1) || ((GET_PLAYER_TEAM( sub_19026( I ) )) != (GET_PLAYER_TEAM( sub_90115() ))))
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

void sub_174267()
{
    sub_174285( 19, ref l_U1516._fU708 );
    sub_174285( 5, ref l_U1516._fU776 );
    sub_174285( 3, ref l_U1516._fU844 );
    sub_174285( 4, ref l_U1516._fU980 );
    if (sub_1248() == 3)
    {
        sub_174285( 6, ref l_U1516._fU912 );
        sub_161251( ref l_U1516._fU1048 );
    }
    return;
}

void sub_174285(int iParam0, unknown uParam1)
{
    int I;
    int J;

    if ((iParam0 == -3) || ((NOT sub_89850()) AND (iParam0 == 19)))
    {
        sub_161680( uParam1 );
        return;
    }
    else
    {
        for ( J = 0; J < 7; J++ )
        {
            if (l_U577[J]._fU92 == iParam0)
            {
                for ( I = 0; I < (uParam1^); I++ )
                {
                    l_U577[J]._fU24[I] = (uParam1^)[I];
                }
                return;
            }
        }
    }
    return;
}

void sub_174536()
{
    NETWORK_SET_TALKER_FOCUS( -1 );
    sub_174555( 31, 0 );
    return;
}

void sub_174555(unknown uParam0, unknown uParam1)
{
    g_U18._fU636 = uParam0;
    g_U18._fU632 = uParam1;
    return;
}

void sub_174607(unknown uParam0)
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
    GET_INTERIOR_FROM_CHAR( sub_9794(), ref iVar16 );
    if (iVar16 == nil)
    {
        if ((sub_31163( Result, uVar8, 60.00000000 )) AND (GET_CLOSEST_CAR_NODE_WITH_HEADING( Result._fU0, Result._fU4, Result._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8, ref fVar15 )))
        {
            Result = {uVar8};
            uVar11._fU8 = fVar15;
            Result._fU8 += 2.00000000;
            uVar11._fU0 = sub_34144( 0.00000000, 15.00000000 );
            uVar11._fU4 = 0.00000000;
            uVar11._fU8 += sub_34144( -20.00000000, 20.00000000 );
            fVar14 = 65.00000000;
        }
        else if ((sub_31163( Result, uVar8, 60.00000000 )) AND (GET_CLOSEST_NETWORK_RESTART_NODE( Result, ref uVar8, ref fVar15 )))
        {
            Result = {uVar8};
            uVar11._fU8 = fVar15;
            Result._fU8 += 2.00000000;
            uVar11._fU0 = sub_34144( 0.00000000, 15.00000000 );
            uVar11._fU4 = 0.00000000;
            uVar11._fU8 += sub_34144( -20.00000000, 20.00000000 );
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
        GET_KEY_FOR_CHAR_IN_ROOM( sub_9794(), ref iVar3 );
        if (iVar3 == 0)
        {
            CLEAR_ROOM_FOR_VIEWPORT( sub_175131() );
        }
        else
        {
            SET_ROOM_FOR_VIEWPORT_BY_KEY( sub_175131(), iVar3 );
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
    SET_CAM_ROT( (uParam0^), uVar11._fU0, uVar11._fU4, sub_66176( uVar11._fU8 ) );
    SET_CAM_FOV( (uParam0^), fVar14 );
    SET_CAM_FAR_CLIP( (uParam0^), 2000.00000000 );
    SET_CAM_ACTIVE( (uParam0^), 1 );
    SET_CAM_PROPAGATE( (uParam0^), 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    return Result;
}

void sub_175131()
{
    unknown Result;

    GET_GAME_VIEWPORT_ID( ref Result );
    return Result;
}

void sub_175512()
{
    ENABLE_FRONTEND_RADIO();
    MUTE_POSITIONED_RADIO( 0 );
    l_U901 = -1;
    return;
}

void sub_175591(unknown uParam0)
{
    int I;
    unknown[16] uVar4;

    array(ref uVar4, 16);
    for ( I = 0; I < 16; I++ )
    {
        uVar4[I] = l_U1917[I]._fU12;
    }
    if (sub_1248() == 3)
    {
        return sub_175680( 7, ref uVar4, ref l_U1516._fU1600, l_U1516._fU1596, uParam0, 0, 0, 0 );
        break;
    }
    return sub_175680( 6, ref uVar4, ref l_U1516._fU1600, l_U1516._fU1596, uParam0, 0, 0, 0 );
}

int sub_175680(int iParam0, unknown uParam1, unknown uParam2, int iParam3, boolean bParam4, int iParam5, boolean bParam6, unknown uParam7)
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
    sub_7249();
    if (IS_PAUSE_MENU_ACTIVE())
    {
        DEACTIVATE_FRONTEND();
    }
    DISABLE_PAUSE_MENU( 1 );
    HIDE_HUD_AND_RADAR_THIS_FRAME();
    CLEAR_PRINTS();
    if (l_U880)
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
            if (sub_11073())
            {
                if ((GET_PLAYER_TEAM( sub_90115() )) == -1)
                {
                    SET_PLAYER_TEAM( sub_90115(), sub_83840() );
                }
            }
            else if (sub_11028())
            {
                if ((GET_PLAYER_TEAM( sub_90115() )) == -1)
                {
                    SET_PLAYER_TEAM( sub_90115(), sub_99026( 2 ) );
                }
                else if (sub_11170() < 2)
                {
                    if ((sub_82476( GET_PLAYER_TEAM( sub_90115() ) )) > 1)
                    {
                        if (sub_99440( GET_PLAYER_ID() ))
                        {
                            SET_PLAYER_TEAM( sub_90115(), sub_99026( 2 ) );
                        }
                    }
                }
            }
            else if (sub_18503())
            {
                if ((GET_PLAYER_TEAM( sub_90115() )) != 0)
                {
                    SET_PLAYER_TEAM( sub_90115(), 0 );
                }
            }
            else if ((GET_PLAYER_TEAM( sub_90115() )) != -1)
            {
                SET_PLAYER_TEAM( sub_90115(), -1 );
            };;;;
        }
        if (sub_2145())
        {
            sub_85228( uParam1, uParam2 );
            sub_2330();
        }
    }
    bVar38 = false;
    if (iParam3 != 0)
    {
        sub_86558( iParam3, 1 );
        bVar38 = true;
    }
    else if ((uParam2^) != 0)
    {
        if (NOT l_U1275)
        {
            sub_86558( (uParam2^), 0 );
            GET_NETWORK_TIMER( ref iVar19 );
            bVar38 = true;
            if ((uParam2^) < (iVar19 - 10000))
            {
                l_U1275 = 1;
                return 1;
            }
        }
    }
    else
    {
        l_U1196 = 10000;
    }
    if (l_U1209)
    {
        if (l_U1274)
        {
            SET_LOBBY_MUTE_OVERRIDE( 0 );
            l_U1274 = 0;
        }
        if (sub_100105())
        {
            l_U1209 = 0;
        }
        sub_99786();
        return 0;
    }
    if ((sub_1248() == 10) || ((sub_18503()) || (sub_89850())))
    {
        if ((l_U881) || (bParam4))
        {
            if (sub_176334())
            {
                sub_176361();
            }
            l_U880 = 0;
        }
        else if (sub_176925())
        {
            if (l_U880)
            {
                l_U1273 = -1;
            }
            else if (l_U1273 == 0)
            {
                GET_NETWORK_TIMER( ref l_U1273 );
            }
            else if (l_U1273 != -1)
            {
                GET_NETWORK_TIMER( ref iVar19 );
                if ((NOT IS_SCREEN_FADING()) AND (l_U1273 < (iVar19 - 6000)))
                {
                    l_U1273 = -1;
                    l_U880 = 1;
                }
            };;;
            if ((sub_1248() == 6) || (sub_1248() == 7))
            {
                sub_177721( 2, l_U880 );
            }
            else
            {
                sub_177721( 1, l_U880 );
            }
            if (l_U880)
            {
                sub_181219( 1 );
                INIT_FRONTEND_HELPER_TEXT();
                DRAW_FRONTEND_HELPER_TEXT( "BACK", "INPUT_F_CANCEL", 0 );
                if (sub_181590())
                {
                    DRAW_FRONTEND_HELPER_TEXT( "CAMERA", "PAD_BACK", 0 );
                    DRAW_FRONTEND_HELPER_TEXT( "SELECT_PLAYER", "PAD_LSTICK_LR", 1 );
                    if (l_U901 < 3)
                    {
                        DRAW_FRONTEND_HELPER_TEXT( "SPEC_RADIO", "PAD_DPAD_LR", 0 );
                        sub_181772();
                    }
                    sub_182087();
                }
                if (sub_87562())
                {
                    l_U880 = 0;
                }
                return 0;
            }
        }
        else
        {
            l_U880 = 0;
        }
    }
    if (IS_HELP_MESSAGE_BEING_DISPLAYED())
    {
        CLEAR_HELP();
    }
    if (l_U878)
    {
        if (l_U1274)
        {
            SET_LOBBY_MUTE_OVERRIDE( 0 );
            l_U1274 = 0;
        }
        if (sub_87562())
        {
            l_U878 = 0;
        }
        else if (sub_88219())
        {
            if (NOT NETWORK_IS_OPERATION_PENDING())
            {
                UNPAUSE_GAME();
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    sub_85484( 0 );
                }
                sub_97847();
            }
        }
        if (l_U878)
        {
            SET_WIDESCREEN_FORMAT( 0 );
            DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
            SET_WIDESCREEN_FORMAT( 1 );
            sub_86594( 0, sub_92555(), sub_97992(), 0, 0, 0, 0, 0, 255 );
            GET_HUD_COLOUR( 49, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
            if (bParam4)
            {
                sub_92615( "WANT_TO_LEAVE", sub_104961( 106 ), sub_104994( 106 ), sub_104961( 107 ), sub_104994( 107 ), uVar15, uVar16, uVar17, 255, 1 );
            }
            else if ((NOT sub_89850()) || ((sub_89850()) AND (sub_85056())))
            {
                sub_92615( "WANTTOLEAVEIG", sub_104961( 106 ), sub_104994( 106 ), sub_104961( 107 ), sub_104994( 107 ), uVar15, uVar16, uVar17, 255, 1 );
            }
            else
            {
                sub_92615( "WANTTOLEAVERACE", sub_104961( 106 ), sub_104994( 106 ), sub_104961( 107 ), sub_104994( 107 ), uVar15, uVar16, uVar17, 255, 1 );
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
            sub_99786();
            return 0;
        }
    }
    if (NOT l_U1274)
    {
        SET_LOBBY_MUTE_OVERRIDE( 1 );
        l_U1274 = 1;
    }
    if (sub_85056())
    {
        if (((sub_10481() == 1) AND (sub_117043( GET_PLAYER_ID() ))) || ((((l_U876) || (iParam0 == 7)) AND (sub_183751() == 1)) || (sub_183603() == 1)))
        {
            sub_181219( 0 );
        }
        else
        {
            sub_181219( 1 );
        }
    }
    else
    {
        sub_181219( 1 );
    }
    sub_99786();
    SET_WIDESCREEN_FORMAT( 1 );
    if ((l_U876) || (iParam0 == 7))
    {
        if (sub_184116())
        {
            bVar20 = true;
        }
        else
        {
            bVar20 = false;
        }
    }
    else if (sub_184243())
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
        if (((sub_10481() == 1) AND (sub_117043( GET_PLAYER_ID() ))) || (sub_183603() == 1))
        {
            sub_86594( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
            GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
            sub_92615( "LAST_PLAYER_IN", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
            if ((N_604003528()) AND (sub_85056()))
            {
                SET_WIDESCREEN_FORMAT( 2 );
                sub_86594( 0, 0.00000000, sub_97992(), 0, 0, 0, 0, 0, 255 );
                GET_HUD_COLOUR( 56, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                if (GET_IS_WIDESCREEN())
                {
                    sub_92615( "NOT_COUNT_RANK", sub_92555() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, uVar15, uVar16, uVar17, 255, 2 );
                }
                else
                {
                    sub_92615( "NOT_COUNT_RANK", sub_92555() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, uVar15, uVar16, uVar17, 255, 2 );
                }
                SET_WIDESCREEN_FORMAT( 1 );
            }
        }
        else if (NOT (sub_117043( GET_PLAYER_ID() )))
        {
            if (iParam0 == 8)
            {
                sub_86594( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                if (bParam6)
                {
                    GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                    sub_92615( "MISSION_PASSED", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                }
                else
                {
                    GET_HUD_COLOUR( 4, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                    sub_92615( "MISSION_FAILED", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                }
            }
            else
            {
                sub_86594( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                if (bVar20)
                {
                    if ((l_U876) || (iParam0 == 7))
                    {
                        if (sub_183751() == 1)
                        {
                            GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                            sub_92615( "LAST_TEAM_IN", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                            if ((N_604003528()) AND (sub_85056()))
                            {
                                SET_WIDESCREEN_FORMAT( 2 );
                                sub_86594( 0, 0.00000000, sub_97992(), 0, 0, 0, 0, 0, 255 );
                                GET_HUD_COLOUR( 56, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                                if (GET_IS_WIDESCREEN())
                                {
                                    sub_92615( "NOT_COUNT_RANK", sub_92555() + 0.00100000, 0.13500000, 0.31500000, 0.42950000, uVar15, uVar16, uVar17, 255, 2 );
                                }
                                else
                                {
                                    sub_92615( "NOT_COUNT_RANK", sub_92555() + 0.00100000, 0.13900000, 0.31500000, 0.42950000, uVar15, uVar16, uVar17, 255, 2 );
                                }
                            }
                            SET_WIDESCREEN_FORMAT( 1 );
                        }
                        else
                        {
                            GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                            sub_92615( "EQUAL", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                        }
                    }
                    else
                    {
                        GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                        sub_92615( "EQUAL", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                    }
                }
                else if ((l_U876) || (iParam0 == 7))
                {
                    if (NOT l_U879)
                    {
                        if (sub_147582( l_U945[0] ))
                        {
                            GET_TEAM_RGB_COLOUR( GET_PLAYER_TEAM( sub_90115() ), ref uVar15, ref uVar16, ref uVar17 );
                            if ((sub_185571( GET_PLAYER_TEAM( sub_90115() ) )) == 1)
                            {
                                StrCopy( ref cVar30, GET_STRING_FROM_TEXT_FILE( sub_163633( GET_PLAYER_TEAM( sub_90115() ), 1 ) ), 32 );
                                ConcatString(ref cVar30, " ", 32);
                                ConcatString(ref cVar30, GET_STRING_FROM_TEXT_FILE( "JOINTWINNER" ), 32);
                                sub_100784( 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, ref cVar30 );
                            }
                            else if (sub_147582( GET_PLAYER_TEAM( sub_90115() ) ))
                            {
                                StrCopy( ref cVar30, GET_STRING_FROM_TEXT_FILE( sub_163633( GET_PLAYER_TEAM( sub_90115() ), 1 ) ), 32 );
                                ConcatString(ref cVar30, " ", 32);
                                ConcatString(ref cVar30, GET_STRING_FROM_TEXT_FILE( "JOINT" ), 32);
                                ConcatString(ref cVar30, " ", 32);
                                ConcatString(ref cVar30, sub_185571( GET_PLAYER_TEAM( sub_90115() ) ), 32);
                                ConcatString(ref cVar30, sub_182413( sub_185571( GET_PLAYER_TEAM( sub_90115() ) ), 1 ), 32);
                                sub_100784( 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, ref cVar30 );
                            }
                            else
                            {
                                StrCopy( ref cVar30, GET_STRING_FROM_TEXT_FILE( sub_163633( GET_PLAYER_TEAM( sub_90115() ), 1 ) ), 32 );
                                ConcatString(ref cVar30, " ", 32);
                                ConcatString(ref cVar30, sub_185571( GET_PLAYER_TEAM( sub_90115() ) ), 32);
                                ConcatString(ref cVar30, sub_182413( sub_185571( GET_PLAYER_TEAM( sub_90115() ) ), 1 ), 32);
                                ConcatString(ref cVar30, " ", 32);
                                ConcatString(ref cVar30, GET_STRING_FROM_TEXT_FILE( "PLACE" ), 32);
                                sub_100784( 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, ref cVar30 );
                            }
                        }
                        else
                        {
                            GET_TEAM_RGB_COLOUR( l_U945[0], ref uVar15, ref uVar16, ref uVar17 );
                            sub_186277( "TEAMNAME_WINS", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, sub_163633( l_U945[0], 0 ) );
                        }
                    }
                }
                else if (sub_119092( GET_PLAYER_ID() ))
                {
                    if ((sub_119046( GET_PLAYER_ID() )) == 1)
                    {
                        GET_HUD_COLOUR( 16, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                        sub_92615( "JOINTWINNER", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                    }
                    else
                    {
                        GET_HUD_COLOUR( 11, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                        StrCopy( ref cVar30, GET_STRING_FROM_TEXT_FILE( "JOINT" ), 32 );
                        ConcatString(ref cVar30, " ", 32);
                        ConcatString(ref cVar30, sub_119046( GET_PLAYER_ID() ), 32);
                        ConcatString(ref cVar30, sub_182413( sub_119046( GET_PLAYER_ID() ), 1 ), 32);
                        sub_100784( 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, ref cVar30 );
                    }
                }
                else if ((sub_119046( GET_PLAYER_ID() )) == 1)
                {
                    GET_HUD_COLOUR( 16, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                    sub_92615( "WINNERS", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1 );
                }
                else
                {
                    GET_HUD_COLOUR( 4, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
                    string(ref cVar30, sub_119046( GET_PLAYER_ID() ), 32);
                    ConcatString(ref cVar30, sub_182413( sub_119046( GET_PLAYER_ID() ), 1 ), 32);
                    ConcatString(ref cVar30, " ", 32);
                    ConcatString(ref cVar30, GET_STRING_FROM_TEXT_FILE( "PLACE" ), 32);
                    sub_100784( 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, ref cVar30 );
                };;;;
            }
        }
    }
    else if (NOT sub_18503())
    {
        sub_86594( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
        GET_HUD_COLOUR( 4, ref uVar15, ref uVar16, ref uVar17, ref uVar18 );
        sub_86891( "ROUND_NUM", 0.50000000, fVar23, fVar24, fVar25, uVar15, uVar16, uVar17, 255, 1, iParam5 );
    }
    for ( I = 0; I < 16; I++ )
    {
        if (sub_119125( l_U577[0]._fU24[I] ))
        {
            iVar13++;
        }
    }
    if ((l_U876) || (iParam0 == 7))
    {
        for ( J = 0; J < 8; J++ )
        {
            if ((sub_120062( l_U945[J] )) > 0)
            {
                iVar13++;
            }
        }
    }
    if (iVar13 > 10)
    {
        sub_89282( ref l_U1000, (iVar13 - 10) + 1, 0 );
        bVar21 = true;
        iVar14 = iVar13;
        iVar13 = 10;
    }
    fVar28 = 0.00500000 * 2;
    for ( iVar11 = 0; iVar11 < 7; iVar11++ )
    {
        if (l_U577[iVar11]._fU16 != 0)
        {
            fVar28 += sub_116684( l_U577[iVar11]._fU16 );
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
        if (l_U577[iVar11]._fU16 != 0)
        {
            if (l_U577[iVar11]._fU16 == 1)
            {
                if (GET_IS_WIDESCREEN())
                {
                    fVar24 = 0.01050000;
                }
                else
                {
                    fVar24 = 0.01100000;
                }
                DRAW_SPRITE( l_U514[l_U577[iVar11]._fU20], fVar26 + fVar24, fVar27 + -0.02370000, (fVar22 / 4) * 3, fVar22, 0.00000000, 255, 255, 255, 255 );
                fVar26 += sub_116684( 1 );
            }
            else
            {
                fVar26 += (sub_116684( l_U577[iVar11]._fU16 )) * 0.50000000;
                DRAW_SPRITE( l_U514[l_U577[iVar11]._fU20], fVar26, fVar27 + -0.02370000, (fVar22 / 4) * 3, fVar22, 0.00000000, 255, 255, 255, 255 );
                fVar26 += (sub_116684( l_U577[iVar11]._fU16 )) * 0.50000000;
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
        if ((l_U876) || (iParam0 == 7))
        {
            sub_166664( ref iVar39, fVar26 + 0.00500000, fVar27 + 0.00400000, 0.36000000, 0.52500000, 0.04000000, 0.36000000, 0.52500000, 0.04000000, iParam0, 10, l_U1000, -1 );
        }
        else
        {
            sub_168113( ref iVar39, fVar26 + 0.00500000, fVar27 + 0.00400000, 0.36000000, 0.52500000, 0.04000000, iParam0, 10, l_U1000, -1 );
        }
    }
    else if ((l_U876) || (iParam0 == 7))
    {
        sub_166664( ref iVar39, fVar26 + 0.00500000, fVar27 + 0.00600000, 0.31300000, 0.47000000, 0.04000000, 0.31300000, 0.47000000, 0.04000000, iParam0, 10, l_U1000, -1 );
    }
    else
    {
        sub_168113( ref iVar39, fVar26 + 0.00500000, fVar27 + 0.00600000, 0.31300000, 0.47000000, 0.04000000, iParam0, 10, l_U1000, -1 );
    }
    if ((iParam5 == 0) AND (bParam4))
    {
        if ((NOT N_604003528()) || (sub_85056()))
        {
            if (NOT bVar38)
            {
                SET_WIDESCREEN_FORMAT( 2 );
                GET_FRONTEND_DESIGN_VALUE( 23, ref fVar24, ref fVar25 );
                GET_FRONTEND_DESIGN_VALUE( 24, ref fVar22, ref fVar23 );
                sub_86594( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                if ((l_U1172[GET_PLAYER_ID()] < (GET_PLAYER_RANK_LEVEL_DURING_MP( GET_PLAYER_ID() ))) AND (l_U1172[GET_PLAYER_ID()] > -1))
                {
                    sub_92615( "RANK_INCREASED", fVar24, fVar25, fVar22, fVar23, 255, 255, 255, 255, 2 );
                    sub_86594( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
                    sub_92615( "NEWCLOTHESAVAIL", fVar24, fVar25 + 0.04050000, fVar22, fVar23, 255, 255, 255, 255, 2 );
                }
                else if ((GET_PLAYER_RANK_LEVEL_DURING_MP( GET_PLAYER_ID() )) < 10)
                {
                    sub_86891( "CASH_LEVELUP", fVar24, fVar25, fVar22, fVar23, 255, 255, 255, 255, 2, GET_LEFT_PLAYER_CASH_TO_REACH_LEVEL( (GET_PLAYER_RANK_LEVEL_DURING_MP( GET_PLAYER_ID() )) + 1 ) );
                }
                SET_WIDESCREEN_FORMAT( 1 );
            }
        }
    }
    fVar26 = 0.50000000;
    if ((GET_IS_WIDESCREEN()) || (N_604003528()))
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
        if (l_U1000 == 0)
        {
            DRAW_SPRITE( l_U514[1], fVar26 + fVar22, (fVar27 + ((TO_FLOAT( iVar13 )) * 0.04000000)) + 0.02300000, fVar24, fVar25, 180.00000000, 255, 255, 255, 255 );
        }
        else if (l_U1000 == (iVar14 - 10))
        {
            DRAW_SPRITE( l_U514[1], fVar26 + fVar22, (fVar27 + ((TO_FLOAT( iVar13 )) * 0.04000000)) + 0.02300000, fVar24, fVar25, 0.00000000, 255, 255, 255, 255 );
        }
        else
        {
            DRAW_SPRITE( l_U514[2], fVar26 + fVar22, (fVar27 + ((TO_FLOAT( iVar13 )) * 0.04000000)) + 0.02300000, fVar24, fVar25, 0.00000000, 255, 255, 255, 255 );
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
            DRAW_FRONTEND_HELPER_TEXT( "SCROLL", "PAD_DPAD_UPDOWN", (NOT GET_IS_WIDESCREEN()) AND (N_604003528()) );
        }
        if (sub_88219())
        {
            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_READY" );
            l_U1209 = 0;
            l_U1000 = 0;
            return 1;
        }
        else if (sub_87562())
        {
            l_U878 = 1;
        }
        else if ((N_604003528()) AND ((NETWORK_GET_NUM_PLAYERS_MET() > 0) AND (sub_88941())))
        {
            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
            l_U1209 = 1;
        };;;
    }
    else
    {
        INIT_FRONTEND_HELPER_TEXT();
        if (NOT l_U881)
        {
            DRAW_FRONTEND_HELPER_TEXT( "LEAVE", "INPUT_F_CANCEL", 0 );
        }
        if (NOT IS_SCREEN_FADING())
        {
            if ((sub_176925()) AND ((NOT IS_SCREEN_FADING()) AND ((NOT l_U881) AND ((sub_1248() == 10) || ((sub_18503()) || (sub_89850()))))))
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
        if ((NOT l_U881) AND (sub_87562()))
        {
            l_U878 = 1;
        }
        else if ((sub_176925()) AND ((NOT IS_SCREEN_FADING()) AND ((NOT l_U881) AND (((sub_1248() == 10) || ((sub_18503()) || (sub_89850()))) AND (sub_88219())))))
        {
            l_U880 = 1;
        }
        else if ((NOT IS_SCREEN_FADING()) AND ((N_604003528()) AND ((NETWORK_GET_NUM_PLAYERS_MET() > 0) AND (sub_88941()))))
        {
            PLAY_AUDIO_EVENT( "FRONTEND_MENU_MP_UNREADY" );
            l_U1209 = 1;
        };;;
    }
    l_U881 = 0;
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

void sub_176334()
{
    return l_U1216;
}

void sub_176361()
{
    sub_176372( 0, 1 );
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    sub_176711();
    sub_176756();
    sub_176839();
    l_U1215 = 0;
    l_U1214 = 0;
    l_U1216 = 0;
    l_U1229 = 18;
    sub_85583( 0 );
    return;
}

void sub_176372(boolean bParam0, boolean bParam1)
{
    if (bParam1)
    {
        if (IS_IN_SPECTATOR_MODE())
        {
            SET_IN_SPECTATOR_MODE( 0 );
            if (NOT (DOES_CAM_EXIST( l_U1251 )))
            {
                CREATE_CAM( 6, ref l_U1251 );
            }
            if (DOES_CAM_EXIST( l_U1251 ))
            {
                GET_GAME_CAM( ref l_U1252 );
                GET_CAM_POS( l_U1252, ref l_U1240._fU0, ref l_U1240._fU4, ref l_U1240._fU8 );
                GET_CAM_ROT( l_U1252, ref l_U1243._fU0, ref l_U1243._fU4, ref l_U1243._fU8 );
                GET_CAM_FOV( l_U1252, ref l_U1246 );
                SET_CAM_POS( l_U1251, l_U1240._fU0, l_U1240._fU4, l_U1240._fU8 );
                SET_CAM_ROT( l_U1251, l_U1243._fU0, l_U1243._fU4, l_U1243._fU8 );
                SET_CAM_FOV( l_U1251, l_U1246 );
                SET_CAM_ACTIVE( l_U1251, 1 );
                SET_CAM_PROPAGATE( l_U1251, 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            }
        }
        l_U1215 = 0;
    }
    SET_CAMERA_CONTROLS_DISABLED_WITH_PLAYER_CONTROLS( 1 );
    ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
    if (bParam0)
    {
        sub_85583( 0 );
    }
    return;
}

void sub_176711()
{
    SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY( 0 );
    if (IS_MOBILE_PHONE_RADIO_ACTIVE())
    {
        SET_MOBILE_PHONE_RADIO_STATE( 0 );
    }
    return;
}

void sub_176756()
{
    l_U1217 = 0;
    l_U1218 = 1;
    l_U1219 = 0;
    l_U1221 = 0;
    l_U1222 = 0;
    l_U1223 = 0;
    l_U1224 = 0;
    l_U1225 = 0;
    l_U1226 = 0;
    l_U1227 = -1;
    l_U1228 = -1;
    return;
}

void sub_176839()
{
    l_U1220 = 0;
    SET_FOLLOW_VEHICLE_CAM_SUBMODE( -1 );
    l_U1253 = -1;
    return;
}

int sub_176925()
{
    if (NOT (l_U1215 == 4))
    {
        if (NOT sub_176947())
        {
            return 1;
        }
        else if (NOT (l_U1214 == 0))
        {
            sub_176372( 0, 1 );
            l_U1215 = 4;
        }
    }
    else if (l_U1222)
    {
        sub_177227();
    }
    return 0;
}

int sub_176947()
{
    int I;

    for ( I = 0; I <= 15; I++ )
    {
        if (sub_176970( I ))
        {
            return 0;
        }
    }
    return 1;
}

int sub_176970(int iParam0)
{
    if ((iParam0 < 16) AND (iParam0 >= 0))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( iParam0 ))
        {
            if (NOT (iParam0 == GET_PLAYER_ID()))
            {
                if (((NOT l_U1226) AND (iParam0 == l_U1227)) || (NOT (IS_CHAR_INJURED( sub_16771( iParam0 ) ))))
                {
                    if ((NOT l_U980[iParam0]) AND (NOT l_U963[iParam0]))
                    {
                        if (((l_U1214 == 2) AND (IS_CHAR_IN_ANY_CAR( sub_16771( iParam0 ) ))) || (IS_PLAYER_SCRIPT_CONTROL_ON( CONVERT_INT_TO_PLAYERINDEX( iParam0 ) )))
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

void sub_177227()
{
    if (NOT l_U1223)
    {
        if (NOT l_U1224)
        {
            if (DOES_CAM_EXIST( l_U1251 ))
            {
                if ((NOT IS_SCREEN_FADING()) AND (NOT IS_SCREEN_FADED_OUT()))
                {
                    sub_85484( 200 );
                }
                else if (NOT (IS_CHAR_DEAD( sub_9794() )))
                {
                    SET_CHAR_COORDINATES( sub_9794(), l_U1247._fU0, l_U1247._fU4, l_U1247._fU8 );
                    if (DOES_CAM_EXIST( l_U1251 ))
                    {
                        DESTROY_CAM( l_U1251 );
                    }
                    ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 0 );
                    if (IS_NETWORK_GAME_RUNNING())
                    {
                        GET_NETWORK_TIMER( ref l_U1234 );
                    }
                    l_U1233 = l_U1234 + 5000;
                    l_U1223 = 1;
                }
            }
            else
            {
                l_U1224 = 1;
            }
        }
    }
    else if (IS_NETWORK_GAME_RUNNING())
    {
        GET_NETWORK_TIMER( ref l_U1234 );
    }
    if (l_U1233 < l_U1234)
    {
        ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
        sub_85583( 200 );
        l_U1223 = 0;
        l_U1224 = 1;
    }
    if (l_U1224)
    {
        if ((IS_SCREEN_FADED_IN()) AND (NOT sub_176947()))
        {
            l_U1215 = 0;
            sub_176756();
        }
    }
    return;
}

void sub_177721(unknown uParam0, boolean bParam1)
{
    float fVar4;
    unknown uVar5;

    if (IS_NETWORK_GAME_RUNNING())
    {
        GET_NETWORK_TIMER( ref l_U1234 );
    }
    if (NOT l_U1216)
    {
        l_U1216 = 1;
    }
    if (l_U1214 == 0)
    {
        if (DOES_CAM_EXIST( l_U1251 ))
        {
            DESTROY_CAM( l_U1251 );
        }
        l_U1214 = uParam0;
    }
    if (NOT l_U1220)
    {
        GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref l_U1253 );
        if ((NOT (l_U1253 == 0)) AND (NOT (l_U1253 == -1)))
        {
            l_U1220 = 1;
            SET_FOLLOW_VEHICLE_CAM_SUBMODE( 5 );
        }
    }
    if (l_U1219)
    {
        sub_177886();
        if (NOT bParam1)
        {
            sub_176372( 1, 0 );
            l_U1219 = 0;
        }
    }
    else if (bParam1)
    {
        l_U1219 = 1;
        if (IS_IN_SPECTATOR_MODE())
        {
            l_U1215 = 2;
            sub_178207();
        }
        else if (l_U1218)
        {
            sub_178285();
            l_U1228 = -1;
            if (NOT (l_U1227 == -1))
            {
                fVar4 = sub_178339( sub_9794(), sub_16771( l_U1227 ) );
                if ((NOT (IS_CHAR_DEAD( sub_9794() ))) AND ((NOT IS_SCREEN_FADING()) AND ((NOT (fVar4 == -1)) AND (fVar4 < 30))))
                {
                    sub_178207();
                    if (NOT sub_178616())
                    {
                        ;
                    }
                    sub_178803();
                    l_U1215 = 2;
                    l_U1218 = 0;
                }
            }
            else
            {
                l_U1215 = 4;
            }
        }
    }
    switch (l_U1215)
    {
        case 0:
        if (l_U1219)
        {
            if ((IS_SCREEN_FADED_OUT()) || (IS_SCREEN_FADED_IN()))
            {
                if (IS_SCREEN_FADED_IN())
                {
                    sub_85484( 200 );
                }
                l_U1217 = 0;
                l_U1215 = 1;
            }
        }
        break;
        case 1:
        if (IS_SCREEN_FADED_OUT())
        {
            if (NOT l_U1217)
            {
                if (NOT l_U1218)
                {
                    if (NOT (l_U1228 == -1))
                    {
                        if (sub_176970( l_U1228 ))
                        {
                            l_U1227 = l_U1228;
                            l_U1228 = -1;
                        }
                        else
                        {
                            sub_178285();
                        }
                    }
                    else if (NOT (sub_176970( l_U1227 )))
                    {
                        sub_178285();
                    }
                }
                else if (NOT (sub_176970( l_U1228 )))
                {
                    sub_178285();
                }
                if (NOT sub_178616())
                {
                    ;
                }
                sub_178207();
                if (l_U1218)
                {
                    sub_178803();
                    l_U1218 = 0;
                }
                ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 0 );
                l_U1217 = 1;
                l_U1233 = l_U1234 + 5000;
            }
            else if (NOT sub_179274())
            {
                if (l_U1219)
                {
                    l_U1227 = sub_179327();
                    if (NOT sub_178616())
                    {
                        ;
                    }
                    l_U1233 = l_U1234 + 5000;
                }
                else
                {
                    sub_176372( 1, 1 );
                }
            }
            else
            {
                sub_179876();
                if ((l_U1233 < l_U1234) || ((NOT IS_STREAMING_PRIORITY_REQUESTS()) AND (GET_NUM_STREAMING_REQUESTS() < 5)))
                {
                    if (NOT sub_178616())
                    {
                        ;
                    }
                    ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
                    l_U1215 = 2;
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    sub_85583( 200 );
                }
                else if ((l_U1219) AND (NOT IS_SCREEN_FADING()))
                {
                    sub_179876();
                    sub_180187( 1 );
                }
            }
        }
        break;
        case 2:
        sub_178616();
        if (NOT sub_179274())
        {
            if (l_U1219)
            {
                l_U1228 = sub_179327();
                if (l_U1228 != -1)
                {
                    if ((sub_178339( sub_9794(), sub_16771( l_U1228 ) )) < 30)
                    {
                        l_U1227 = l_U1228;
                        if (NOT sub_178616())
                        {
                            ;
                        }
                        l_U1228 = -1;
                    }
                    else
                    {
                        sub_176372( 0, 1 );
                    }
                }
            }
            else
            {
                sub_176372( 1, 1 );
            }
        }
        else if (IS_NETWORK_PLAYER_ACTIVE( l_U1227 ))
        {
            if (IS_CHAR_INJURED( sub_16771( l_U1227 ) ))
            {
                if (NOT l_U1225)
                {
                    l_U1235 = l_U1234 + 6000;
                    l_U1225 = 1;
                }
                else if (l_U1235 < l_U1234)
                {
                    l_U1225 = 0;
                    l_U1226 = 1;
                }
            }
        }
        sub_179876();
        if (l_U1219)
        {
            if (NOT IS_SCREEN_FADING())
            {
                sub_180187( 0 );
            }
        }
        break;
    }
    return;
}

void sub_177886()
{
    boolean bVar2;

    bVar2 = false;
    if (IS_BUTTON_JUST_PRESSED( 0, 11 ))
    {
        l_U1229++;
        if (l_U1229 > 18)
        {
            l_U1229 = 0;
        }
        bVar2 = true;
    }
    if (IS_BUTTON_JUST_PRESSED( 0, 10 ))
    {
        l_U1229--;
        if (l_U1229 < 0)
        {
            l_U1229 = 18;
        }
        RETUNE_RADIO_TO_STATION_INDEX( l_U1229 );
        bVar2 = true;
    }
    if (l_U901 < 3)
    {
        if (bVar2)
        {
            if (l_U1229 != 18)
            {
                if (NOT IS_MOBILE_PHONE_RADIO_ACTIVE())
                {
                    SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY( 1 );
                    SET_MOBILE_PHONE_RADIO_STATE( 1 );
                }
                RETUNE_RADIO_TO_STATION_INDEX( l_U1229 );
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

void sub_178207()
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

int sub_178285()
{
    int I;
    int iVar3;
    float fVar4;
    float fVar5;

    iVar3 = -1;
    fVar4 = 10000;
    for ( I = 0; I <= 15; I++ )
    {
        if (sub_176970( I ))
        {
            fVar5 = sub_178339( sub_9794(), sub_16771( I ) );
            if ((NOT (fVar5 == -1)) AND (fVar5 < fVar4))
            {
                iVar3 = I;
                fVar4 = fVar5;
            }
        }
    }
    if (NOT (iVar3 == -1))
    {
        l_U1227 = iVar3;
        return 1;
    }
    return 0;
}

float sub_178339(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown Result;

    if ((DOES_CHAR_EXIST( uParam1 )) AND (DOES_CHAR_EXIST( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
        GET_CHAR_COORDINATES( uParam1, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( uVar7._fU0, uVar7._fU4, uVar7._fU8, uVar4._fU0, uVar4._fU4, uVar4._fU8, ref Result );
        return Result;
    }
    return -1.00000000;
}

int sub_178616()
{
    if ((l_U1227 < 16) AND (l_U1227 >= 0))
    {
        if ((l_U1227 != GET_PLAYER_ID()) AND (l_U1227 < 16))
        {
            if (IS_NETWORK_PLAYER_ACTIVE( l_U1227 ))
            {
                if (DOES_CHAR_EXIST( sub_16771( l_U1227 ) ))
                {
                    if (NOT (IS_CHAR_INJURED( sub_16771( l_U1227 ) )))
                    {
                        l_U1225 = 0;
                        l_U1226 = 0;
                        l_U1253 = 1;
                        GET_GAME_CAM( ref l_U1250 );
                        SET_CAM_TARGET_PED( l_U1250, sub_16771( l_U1227 ) );
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_178803()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_CHAR_DEAD( sub_9794() ))
    {
        N_312012851( sub_9794(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        REQUEST_COLLISION_AT_POSN( uVar2._fU0, uVar2._fU4, uVar2._fU8 );
        RESURRECT_NETWORK_PLAYER( GET_PLAYER_ID(), uVar2, 0 );
    }
    SET_CHAR_COLLISION( sub_9794(), 0 );
    SET_CHAR_VISIBLE( sub_9794(), 0 );
    FREEZE_CHAR_POSITION( sub_9794(), 1 );
    return;
}

int sub_179274()
{
    unknown uVar2;

    if (sub_176970( l_U1227 ))
    {
        return 1;
    }
    return 0;
}

int sub_179327()
{
    int Result;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    boolean bVar7;

    if (NOT (l_U1214 == 2))
    {
        for ( Result = l_U1227; Result <= 15; Result++ )
        {
            if (sub_179367( Result ))
            {
                return Result;
            }
        }
        for ( Result = 0; Result <= l_U1227; Result++ )
        {
            if (sub_179367( Result ))
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
            if (l_U577[0]._fU24[Result] == l_U1227)
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
            if ((iVar6 < 16) AND (iVar6 >= 0))
            {
                if (sub_179367( l_U577[0]._fU24[iVar6] ))
                {
                    return l_U577[0]._fU24[iVar6];
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

int sub_179367(int iParam0)
{
    if ((iParam0 < 16) AND (iParam0 >= 0))
    {
        if (IS_NETWORK_PLAYER_ACTIVE( iParam0 ))
        {
            if (NOT (iParam0 == GET_PLAYER_ID()))
            {
                if ((NOT (iParam0 == l_U1227)) AND (NOT (IS_CHAR_INJURED( sub_16771( iParam0 ) ))))
                {
                    if ((NOT l_U980[iParam0]) AND (NOT l_U963[iParam0]))
                    {
                        if (((l_U1214 == 2) AND (IS_CHAR_IN_ANY_CAR( sub_16771( iParam0 ) ))) || (IS_PLAYER_SCRIPT_CONTROL_ON( CONVERT_INT_TO_PLAYERINDEX( iParam0 ) )))
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

void sub_179876()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_NETWORK_PLAYER_ACTIVE( l_U1227 ))
    {
        if (NOT (IS_CHAR_INJURED( sub_16771( l_U1227 ) )))
        {
            GET_CHAR_COORDINATES( sub_16771( l_U1227 ), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            if (NOT (IS_CHAR_DEAD( sub_9794() )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_9794() )))
                {
                    SET_CHAR_COORDINATES( sub_9794(), uVar2._fU0, uVar2._fU4, uVar2._fU8 - 10 );
                }
                else
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_9794(), uVar2._fU0, uVar2._fU4, uVar2._fU8 - 10 );
                }
            }
            SET_CHAR_COLLISION( sub_9794(), 0 );
            SET_CHAR_VISIBLE( sub_9794(), 0 );
        }
    }
    return;
}

void sub_180187(boolean bParam0)
{
    float fVar3;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref l_U1230, ref l_U1232, ref l_U1231, ref l_U1232 );
    if (l_U1221)
    {
        if ((l_U1230 > 65456) AND (l_U1230 < 80))
        {
            l_U1221 = 0;
        }
    }
    else if (l_U1230 > 80)
    {
        l_U1228 = sub_179327();
        if (NOT (l_U1228 == -1))
        {
            fVar3 = sub_178339( sub_9794(), sub_16771( l_U1228 ) );
            if ((bParam0) || ((NOT (fVar3 == -1)) AND (fVar3 < 30)))
            {
                l_U1227 = l_U1228;
                if (NOT sub_178616())
                {
                    ;
                }
                l_U1228 = -1;
                if (bParam0)
                {
                    l_U1233 = l_U1234 + 5000;
                }
            }
            else
            {
                sub_176372( 0, 1 );
            }
            l_U1221 = 1;
        }
    }
    else if (l_U1230 < 65456)
    {
        l_U1228 = sub_180429();
        if (NOT (l_U1228 == -1))
        {
            fVar3 = sub_178339( sub_9794(), sub_16771( l_U1228 ) );
            if ((bParam0) || ((NOT (fVar3 == -1)) AND (fVar3 < 30)))
            {
                l_U1227 = l_U1228;
                if (NOT sub_178616())
                {
                    ;
                }
                l_U1228 = -1;
                if (bParam0)
                {
                    l_U1233 = l_U1234 + 5000;
                }
            }
            else
            {
                sub_176372( 0, 1 );
            }
            l_U1221 = 1;
        }
    };;;
    return;
}

int sub_180429()
{
    int Result;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    boolean bVar7;

    if (NOT (l_U1214 == 2))
    {
        for ( Result = l_U1227; Result >= 0; Result += -1 )
        {
            if (sub_179367( Result ))
            {
                return Result;
            }
        }
        for ( Result = 15; Result >= l_U1227; Result += -1 )
        {
            if (sub_179367( Result ))
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
            if (l_U577[0]._fU24[Result] == l_U1227)
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
            if ((iVar6 < 16) AND (iVar6 >= 0))
            {
                if (sub_179367( l_U577[0]._fU24[iVar6] ))
                {
                    return l_U577[0]._fU24[iVar6];
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

void sub_181219(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    SET_WIDESCREEN_FORMAT( 0 );
    GET_FRONTEND_DESIGN_VALUE( 0, ref uVar3, ref uVar4 );
    DRAW_RECT( 0.50000000, 0.00000000, 1.00000000, uVar3 * 2.00000000, 0, 0, 0, 255 );
    if ((GET_IS_WIDESCREEN()) || (N_604003528()))
    {
        DRAW_RECT( 0.50000000, uVar3, 1.00000000, 0.00200000, 180, 180, 180, 255 );
    }
    else
    {
        DRAW_RECT( 0.50000000, uVar3, 1.00000000, 0.00400000, 180, 180, 180, 255 );
    }
    GET_FRONTEND_DESIGN_VALUE( 22, ref uVar3, ref uVar4 );
    DRAW_RECT( 0.50000000, 1.00000000, 1.00000000, (1.00000000 - uVar3) * 2.00000000, 0, 0, 0, 255 );
    if ((GET_IS_WIDESCREEN()) || (N_604003528()))
    {
        DRAW_RECT( 0.50000000, uVar3, 1.00000000, 0.00200000, 180, 180, 180, 255 );
    }
    else
    {
        DRAW_RECT( 0.50000000, uVar3, 1.00000000, 0.00400000, 180, 180, 180, 255 );
    }
    SET_WIDESCREEN_FORMAT( 2 );
    sub_92472( uParam0 );
    return;
}

int sub_181590()
{
    if ((l_U1227 > -1) AND ((IS_IN_SPECTATOR_MODE()) AND (l_U1219)))
    {
        if (sub_179274())
        {
            return 1;
        }
        return 0;
    }
    return 0;
}

void sub_181772()
{
    char[16] cVar2;
    unknown uVar6;

    SET_WIDESCREEN_FORMAT( 3 );
    DRAW_SPRITE( l_U514[0], sub_97992() - (0.01400000 / 2), l_U1239 - (0.02000000 / 2), 0.01400000, 0.02000000, 0.00000000, 255, 255, 255, 255 );
    SET_TEXT_SCALE( 0.31500000, 0.43000000 );
    sub_86594( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    StrCopy( ref cVar2, "RADIO_OPT", 16 );
    ConcatString(ref cVar2, l_U1229, 16);
    uVar6 = GET_STRING_WIDTH( ref cVar2 );
    sub_92615( ref cVar2, (sub_97992() - 0.01400000) - l_U1238, l_U1239 + l_U1237, 0.31500000, 0.43000000, 255, 255, 255, 255, 3 );
    DRAW_SPRITE( l_U514[0], ((sub_97992() - (0.01400000 * 1.50000000)) - uVar6) - (l_U1238 * 2), l_U1239 - (0.02000000 / 2), 0.01400000 * -1, 0.02000000, 0.00000000, 255, 255, 255, 255 );
    return;
}

void sub_182087()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    char[32] cVar7;
    unknown uVar15;

    SET_WIDESCREEN_FORMAT( 3 );
    DRAW_SPRITE( l_U514[0], sub_97992() - (0.01400000 / 2), l_U1236 - (0.02000000 / 2), 0.01400000, 0.02000000, 0.00000000, 255, 255, 255, 255 );
    SET_TEXT_SCALE( 0.31500000, 0.43000000 );
    sub_86594( 0, 0.00000000, 1.00000000, 0, 0, 0, 0, 0, 255 );
    if (NOT (l_U1214 == 2))
    {
        StrCopy( ref cVar7, sub_182228(), 32 );
    }
    else
    {
        string(ref cVar7, sub_182296( l_U1227 ), 32);
        ConcatString(ref cVar7, sub_182413( sub_182296( l_U1227 ), 0 ), 32);
        ConcatString(ref cVar7, " : ", 32);
        ConcatString(ref cVar7, sub_182228(), 32);
    }
    SET_TEXT_USE_UNDERSCORE( 1 );
    uVar15 = GET_STRING_WIDTH_WITH_STRING( "STRING", ref cVar7 );
    sub_182663( ref uVar2, ref uVar3, ref uVar4 );
    SET_TEXT_COLOUR( uVar2, uVar3, uVar4, 255 );
    sub_100784( (sub_97992() - 0.01400000) - l_U1238, l_U1236 + l_U1237, 0.31500000, 0.43000000, uVar2, uVar3, uVar4, 255, 3, ref cVar7 );
    SET_TEXT_USE_UNDERSCORE( 0 );
    DRAW_SPRITE( l_U514[0], ((sub_97992() - (0.01400000 * 1.50000000)) - uVar15) - (l_U1238 * 2), l_U1236 - (0.02000000 / 2), 0.01400000 * -1, 0.02000000, 0.00000000, 255, 255, 255, 255 );
    return;
}

string sub_182228()
{
    if (sub_176970( l_U1227 ))
    {
        return GET_PLAYER_NAME( sub_19026( l_U1227 ) );
    }
    return "";
}

int sub_182296(int iParam0)
{
    int I;
    int iVar4;
    int Result;

    for ( I = 0; I < 16; I++ )
    {
        iVar4 = l_U577[0]._fU24[I];
        if ((NOT l_U963[iVar4]) AND (IS_NETWORK_PLAYER_ACTIVE( iVar4 )))
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

void sub_182413(int iParam0, boolean bParam1)
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

void sub_182663(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (sub_176970( l_U1227 ))
    {
        if (l_U1214 == 1)
        {
            GET_TEAM_RGB_COLOUR( GET_PLAYER_TEAM( sub_19026( l_U1227 ) ), uParam0, uParam1, uParam2 );
        }
        else
        {
            GET_PLAYER_RGB_COLOUR( sub_19026( l_U1227 ), uParam0, uParam1, uParam2 );
        }
    }
    return;
}

void sub_183603()
{
    int I;
    int Result;

    if (l_U875)
    {
        for ( I = 0; I < 16; I++ )
        {
            if ((NOT l_U746[I]._fU8) AND (l_U746[I]._fU4))
            {
                Result++;
            }
        }
        return Result;
    }
    for ( I = 0; I < 16; I++ )
    {
        if ((NOT l_U963[I]) AND (IS_NETWORK_PLAYER_ACTIVE( I )))
        {
            Result++;
        }
    }
    return Result;
}

void sub_183751()
{
    int I;
    int Result;
    int[8] iVar4;

    array(ref iVar4, 8);
    if (l_U875)
    {
        for ( I = 0; I < 16; I++ )
        {
            if ((NOT l_U746[I]._fU8) AND (l_U746[I]._fU4))
            {
                if (l_U746[I]._fU12 > -1)
                {
                    if (NOT iVar4[l_U746[I]._fU12])
                    {
                        Result++;
                        iVar4[l_U746[I]._fU12] = 1;
                    }
                }
            }
        }
        return Result;
    }
    for ( I = 0; I < 16; I++ )
    {
        if ((NOT l_U963[I]) AND (IS_NETWORK_PLAYER_ACTIVE( I )))
        {
            if ((GET_PLAYER_TEAM( sub_19026( I ) )) > -1)
            {
                if (NOT (iVar4[GET_PLAYER_TEAM( sub_19026( I ) )]))
                {
                    Result++;
                    iVar4[GET_PLAYER_TEAM( sub_19026( I ) )] = 1;
                }
            }
        }
    }
    return Result;
}

int sub_184116()
{
    int I;
    int iVar3;

    iVar3 = -1;
    for ( I = 0; I < 8; I++ )
    {
        if ((sub_120062( I )) > 0)
        {
            if (iVar3 == -1)
            {
                iVar3 = l_U954[I];
            }
            else if (iVar3 != l_U954[I])
            {
                return 0;
            }
        }
    }
    return 1;
}

int sub_184243()
{
    int I;
    int iVar3;

    iVar3 = -1;
    for ( I = 0; I < 16; I++ )
    {
        if (sub_119125( I ))
        {
            if (NOT (sub_117043( I )))
            {
                if (iVar3 == -1)
                {
                    iVar3 = l_U577[sub_119192()]._fU24[I];
                }
                else if (iVar3 != l_U577[sub_119192()]._fU24[I])
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}

int sub_185571(int iParam0)
{
    int I;
    int Result;

    if (sub_147582( iParam0 ))
    {
        for ( I = 0; I < 8; I++ )
        {
            if ((sub_120062( l_U945[I] )) > 0)
            {
                Result++;
                if (l_U954[l_U945[I]] == l_U954[iParam0])
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
            if ((sub_120062( l_U945[I] )) > 0)
            {
                Result++;
                if (l_U945[I] == iParam0)
                {
                    return Result;
                }
            }
        }
    }
    return 1;
}

void sub_186277(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_86931( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_STRING( uParam0, uParam10 );
    DISPLAY_TEXT_WITH_STRING( uParam1, uParam2, uParam0, uParam10 );
    return Result;
}

int sub_189727(int iParam0, boolean bParam1)
{
    int J;
    int iVar5;
    int I;
    int iVar7;
    int[16] iVar8;

    array(ref iVar8, 16);
    l_U881 = 1;
    if (l_U877)
    {
        if (NOT NETWORK_END_SESSION_PENDING())
        {
            l_U877 = 0;
            return 1;
        }
    }
    else if (NETWORK_START_SESSION_SUCCEEDED())
    {
        if (NOT l_U963[GET_PLAYER_ID()])
        {
            if (sub_183603() > 1)
            {
                if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
                {
                    if ((sub_11073()) || (sub_11028()))
                    {
                        if (NOT sub_184116())
                        {
                            if (((l_U954[GET_PLAYER_TEAM( sub_90115() )]) == l_U954[l_U945[0]]) || ((GET_PLAYER_TEAM( sub_90115() )) == l_U945[0]))
                            {
                                REGISTER_MULTIPLAYER_GAME_WIN( GET_PLAYER_ID(), 0 );
                            }
                        }
                    }
                    else if (sub_18503())
                    {
                        if (bParam1)
                        {
                            REGISTER_MULTIPLAYER_GAME_WIN( GET_PLAYER_ID(), iParam0 );
                        }
                    }
                    else if ((sub_119081( GET_PLAYER_ID() )) == 1)
                    {
                        if (NOT sub_184243())
                        {
                            REGISTER_MULTIPLAYER_GAME_WIN( GET_PLAYER_ID(), 0 );
                        }
                    };;;
                }
            }
            if (NOT sub_89850())
            {
                for ( J = 0; J < 16; J++ )
                {
                    iVar8[J] = 1;
                    if (IS_NETWORK_PLAYER_ACTIVE( J ))
                    {
                        if (NOT l_U963[J])
                        {
                            for ( I = 0; I < 7; I++ )
                            {
                                switch (l_U577[I]._fU92)
                                {
                                    case 19:
                                    if ((sub_11073()) || (sub_11028()))
                                    {
                                        if (sub_1248() != 1)
                                        {
                                            l_U577[I]._fU24[J] = (l_U954[sub_119939( J )]) / (sub_120062( sub_119939( J ) ));
                                        }
                                    }
                                    iVar8[J] += l_U577[I]._fU24[J] * 10000;
                                    break;
                                    case 3:
                                    case 5:
                                    case 7:
                                    case 8:
                                    iVar8[J] += l_U577[I]._fU24[J];
                                    break;
                                    case 4:
                                    iVar8[J] -= l_U577[I]._fU24[J];
                                    break;
                                    case 6:
                                    iVar8[J] -= l_U577[I]._fU24[J] * 2;
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
                        if (NOT l_U963[J])
                        {
                            REGISTER_NETWORK_BEST_GAME_SCORES( J, 23, iVar8[J] );
                            if (sub_18503())
                            {
                                REGISTER_NETWORK_BEST_GAME_SCORES( J, 24, iParam0 * -1 );
                            }
                        }
                    }
                }
                for ( J = 0; J < 16; J++ )
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( J ))
                    {
                        if (NOT l_U963[J])
                        {
                            if (sub_18503())
                            {
                                UPDATE_NETWORK_STATISTICS( J, 23, iVar8[J], -1 );
                                UPDATE_NETWORK_STATISTICS( J, 24, iParam0 * -1, -1 );
                            }
                            else
                            {
                                UPDATE_NETWORK_STATISTICS( J, 23, iVar8[J], GET_PLAYER_TEAM( sub_19026( J ) ) );
                            }
                        }
                    }
                }
            }
            for ( J = 0; J < 16; J++ )
            {
                if (IS_NETWORK_PLAYER_ACTIVE( J ))
                {
                    if (NOT l_U963[J])
                    {
                        if ((sub_11073()) || (sub_11028()))
                        {
                            UPDATE_NETWORK_STATISTICS( J, 0, 1, GET_PLAYER_TEAM( sub_19026( J ) ) );
                            if ((sub_183751() < 2) || ((sub_183603() < 2) || (sub_184116())))
                            {
                                UPDATE_NETWORK_STATISTICS( J, 1, 0, GET_PLAYER_TEAM( sub_19026( J ) ) );
                            }
                            else if (((l_U954[GET_PLAYER_TEAM( sub_19026( J ) )]) == l_U954[l_U945[0]]) || ((GET_PLAYER_TEAM( sub_19026( J ) )) == l_U945[0]))
                            {
                                UPDATE_NETWORK_STATISTICS( J, 1, 1, GET_PLAYER_TEAM( sub_19026( J ) ) );
                            }
                            else
                            {
                                UPDATE_NETWORK_STATISTICS( J, 1, 0, GET_PLAYER_TEAM( sub_19026( J ) ) );
                            }
                        }
                        else
                        {
                            UPDATE_NETWORK_STATISTICS( J, 0, 1, -1 );
                            if (sub_18503())
                            {
                                if ((NOT sub_184243()) AND ((sub_183603() > 1) AND ((sub_119081( J )) == 1)))
                                {
                                    UPDATE_NETWORK_STATISTICS( J, 1, 1, -1 );
                                }
                                else
                                {
                                    UPDATE_NETWORK_STATISTICS( J, 1, 0, -1 );
                                }
                                UPDATE_NETWORK_STATISTICS( J, 21, iParam0, -1 );
                                if (bParam1)
                                {
                                    UPDATE_NETWORK_STATISTICS( J, 2, 1, -1 );
                                }
                                else
                                {
                                    UPDATE_NETWORK_STATISTICS( J, 2, 0, -1 );
                                }
                            }
                            else if ((NOT sub_184243()) AND ((sub_183603() > 1) AND ((sub_119081( J )) == 1)))
                            {
                                UPDATE_NETWORK_STATISTICS( J, 1, 1, GET_PLAYER_TEAM( sub_19026( J ) ) );
                            }
                            else
                            {
                                UPDATE_NETWORK_STATISTICS( J, 1, 0, GET_PLAYER_TEAM( sub_19026( J ) ) );
                            }
                        }
                    }
                }
            }
            if (sub_183603() > 1)
            {
                if ((sub_11073()) || (sub_11028()))
                {
                    if (sub_183751() > 1)
                    {
                        iVar7 = sub_183751() - 1;
                        I = iVar7;
                        for ( iVar5 = 0; iVar5 < 8; iVar5++ )
                        {
                            if ((sub_120062( l_U945[iVar5] )) > 0)
                            {
                                for ( J = 0; J < 16; J++ )
                                {
                                    if (IS_NETWORK_PLAYER_ACTIVE( J ))
                                    {
                                        if ((GET_PLAYER_TEAM( sub_19026( J ) )) == l_U945[iVar5])
                                        {
                                            if (NOT l_U963[J])
                                            {
                                                UPDATE_NETWORK_RELATIVE_SCORE( J, iVar7, GET_PLAYER_TEAM( sub_19026( J ) ) );
                                            }
                                        }
                                    }
                                }
                                I--;
                                if ((iVar5 + 1) < 8)
                                {
                                    if (l_U954[l_U945[iVar5]] != (l_U954[l_U945[iVar5 + 1]]))
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
                    iVar7 = sub_183603() - 1;
                    I = iVar7;
                    for ( J = 0; J < 16; J++ )
                    {
                        if (IS_NETWORK_PLAYER_ACTIVE( l_U577[0]._fU24[J] ))
                        {
                            if (NOT l_U963[l_U577[0]._fU24[J]])
                            {
                                UPDATE_NETWORK_RELATIVE_SCORE( l_U577[0]._fU24[J], iVar7, -1 );
                                I--;
                                if ((J + 1) < 16)
                                {
                                    if (l_U577[sub_119192()]._fU24[l_U577[0]._fU24[J]] != (l_U577[sub_119192()]._fU24[l_U577[0]._fU24[J + 1]]))
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
                if ((l_U577[I]._fU92 != -3) AND ((l_U577[I]._fU92 != -2) AND ((l_U577[I]._fU92 != -1) AND ((l_U577[I]._fU16 != 1) AND (l_U577[I]._fU16 != 0)))))
                {
                    for ( J = 0; J < 16; J++ )
                    {
                        if (IS_NETWORK_PLAYER_ACTIVE( J ))
                        {
                            if (NOT l_U963[J])
                            {
                                if (sub_18503())
                                {
                                    UPDATE_NETWORK_STATISTICS( J, l_U577[I]._fU92, l_U577[I]._fU24[J], -1 );
                                }
                                else
                                {
                                    UPDATE_NETWORK_STATISTICS( J, l_U577[I]._fU92, l_U577[I]._fU24[J], GET_PLAYER_TEAM( sub_19026( J ) ) );
                                }
                            }
                        }
                    }
                }
            }
            if (sub_18503())
            {
                if ((iParam0 != 0) AND (iParam0 != 2147483647))
                {
                    for ( J = 0; J < 16; J++ )
                    {
                        if (IS_NETWORK_PLAYER_ACTIVE( J ))
                        {
                            if (NOT l_U963[J])
                            {
                                UPDATE_NETWORK_STATISTICS( J, 21, iParam0, -1 );
                            }
                        }
                    }
                }
            }
            if (sub_89850())
            {
                for ( I = 0; I < 7; I++ )
                {
                    if (l_U577[I]._fU92 == 22)
                    {
                        for ( J = 0; J < 16; J++ )
                        {
                            if (IS_NETWORK_PLAYER_ACTIVE( J ))
                            {
                                if (NOT l_U963[J])
                                {
                                    UPDATE_NETWORK_STATISTICS( J, 23, l_U577[I]._fU24[J] * -1, GET_PLAYER_TEAM( sub_19026( J ) ) );
                                }
                            }
                        }
                    }
                }
            }
            if ((sub_11073()) || (sub_11028()))
            {
                for ( J = 0; J < 16; J++ )
                {
                    if (IS_NETWORK_PLAYER_ACTIVE( J ))
                    {
                        if ((GET_PLAYER_TEAM( sub_19026( J ) )) > -1)
                        {
                            if (NOT l_U963[J])
                            {
                                UPDATE_NETWORK_STATISTICS( J, 20, l_U954[GET_PLAYER_TEAM( sub_19026( J ) )], GET_PLAYER_TEAM( sub_19026( J ) ) );
                            }
                        }
                    }
                }
            }
        }
        if ((sub_11073()) || (sub_11028()))
        {
            l_U876 = 1;
        }
        else
        {
            l_U876 = 0;
        }
        for ( J = 0; J < 16; J++ )
        {
            if (IS_NETWORK_PLAYER_ACTIVE( J ))
            {
                l_U746[J]._fU4 = 1;
                l_U746[J]._fU0 = GET_PLAYER_NAME( sub_19026( J ) );
                l_U746[J]._fU12 = GET_PLAYER_TEAM( sub_19026( J ) );
                sub_106699( sub_19026( J ), ref l_U746[J]._fU20, ref l_U746[J]._fU24, ref l_U746[J]._fU28 );
                l_U746[J]._fU16 = sub_119081( J );
                l_U746[J]._fU8 = l_U963[J];
            }
            else
            {
                l_U746[J]._fU4 = 0;
                l_U746[J]._fU0 = "";
                l_U746[J]._fU12 = 0;
                l_U746[J]._fU16 = 0;
                l_U746[J]._fU20 = 0;
                l_U746[J]._fU24 = 0;
                l_U746[J]._fU28 = 0;
                l_U746[J]._fU8 = 0;
            }
        }
        l_U875 = 1;
        NETWORK_END_SESSION();
        l_U877 = 1;
    }
    return 0;
}

void sub_192802()
{
    int iVar2;

    GET_NETWORK_TIMER( ref iVar2 );
    if (l_U20 == 0)
    {
        GET_NETWORK_TIMER( ref l_U20 );
    }
    else if (l_U20 < (iVar2 - 25000))
    {
        l_U20 = 0;
        g_U11 = 1;
        sub_97137();
    }
    return;
}

void sub_193107()
{
    int I;

    for ( I = 0; I < 8; I++ )
    {
        sub_143737( ref l_U21[I] );
    }
    for ( I = 0; I < 16; I++ )
    {
        l_U496[I] = 0;
    }
    l_U494 = 0;
    l_U495 = 0;
    return;
}

void sub_193302(unknown uParam0)
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

void sub_193431()
{
    StrCopy( ref g_U18._fU640, "", 16 );
    return;
}

void sub_193684(int iParam0, unknown uParam1)
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
    if (sub_89850())
    {
        SET_REDUCE_PED_MODEL_BUDGET( 1 );
    }
    return;
}

void sub_193958(int iParam0, unknown uParam1)
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

void sub_194243(unknown uParam0)
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

void sub_194449(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3)
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

    l_U1332 = uParam3;
    l_U1333 = iParam1;
    sub_194477( ref uVar6, iParam1, uParam0 );
    SET_RANDOM_SEED( uParam2 );
    if (iParam1 != 12)
    {
        sub_196295( ref uVar6, uParam0 );
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
    sub_227196( uParam0 );
    SET_HEALTH_PICKUP_NETWORK_REGEN_TIME( 60000 );
    sub_232563( uParam0 );
    SET_ARMOUR_PICKUP_NETWORK_REGEN_TIME( 60000 );
    SWITCH_ARROW_ABOVE_BLIPPED_PICKUPS( 1 );
    return;
}

void sub_194477(int iParam0, unknown uParam1, unknown uParam2)
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
    iParam0->_fU0 = sub_17132( (TO_FLOAT( iParam0->_fU0 )) * fVar5 );
    iParam0->_fU4 = sub_17132( (TO_FLOAT( iParam0->_fU4 )) * fVar5 );
    iParam0->_fU8 = sub_17132( (TO_FLOAT( iParam0->_fU8 )) * fVar5 );
    iParam0->_fU12 = sub_17132( (TO_FLOAT( iParam0->_fU12 )) * fVar5 );
    iParam0->_fU16 = sub_17132( (TO_FLOAT( iParam0->_fU16 )) * fVar5 );
    iParam0->_fU20 = sub_17132( (TO_FLOAT( iParam0->_fU20 )) * fVar5 );
    iParam0->_fU24 = sub_17132( (TO_FLOAT( iParam0->_fU24 )) * fVar5 );
    iParam0->_fU28 = sub_17132( (TO_FLOAT( iParam0->_fU28 )) * fVar5 );
    iParam0->_fU32 = sub_17132( (TO_FLOAT( iParam0->_fU32 )) * fVar5 );
    iParam0->_fU36 = sub_17132( (TO_FLOAT( iParam0->_fU36 )) * fVar5 );
    iParam0->_fU40 = sub_17132( (TO_FLOAT( iParam0->_fU40 )) * fVar5 );
    iParam0->_fU44 = sub_17132( (TO_FLOAT( iParam0->_fU44 )) * fVar5 );
    iParam0->_fU48 = sub_17132( (TO_FLOAT( iParam0->_fU48 )) * fVar5 );
    iParam0->_fU52 = sub_17132( (TO_FLOAT( iParam0->_fU52 )) * fVar5 );
    iParam0->_fU56 = sub_17132( (TO_FLOAT( iParam0->_fU56 )) * fVar5 );
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

void sub_196295(int iParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0:
        sub_196295( iParam0, 3 );
        sub_196295( iParam0, 4 );
        sub_196295( iParam0, 2 );
        sub_196295( iParam0, 1 );
        sub_196295( iParam0, 8 );
        sub_196295( iParam0, 10 );
        sub_196295( iParam0, 9 );
        break;
        case 1:
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1196.11900000, 1907.18900000, 10.44690000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1040.06700000, 1415.01300000, 23.32290000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1619.44400000, 92.38760000, 10.32920000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1232.75700000, -449.90700000, 1.87340000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1463.06000000, 1407.98500000, 11.62070000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -2030.33000000, 175.78440000, 11.02870000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -862.60280000, 1469.77900000, 22.04920000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1012.03300000, 679.06480000, 3.07830000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1378.38600000, 735.35190000, 18.61550000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1111.47100000, 401.67400000, 3.56430000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1460.41900000, -519.12240000, 1.99810000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1375.61200000, 1309.62500000, 20.86810000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1721.67500000, -77.34120000, 5.29220000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1575.52100000, 163.83770000, 11.92580000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -982.23430000, 1026.28400000, 19.61470000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -2192.17600000, 189.19060000, 12.06900000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1984.85600000, -459.41330000, 2.24220000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1772.48200000, -635.06910000, 1.97230000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -966.62740000, 297.31780000, 3.37240000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1017.69000000, 47.42280000, 4.28950000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1213.55300000, -202.04250000, 2.43360000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1965.89200000, -621.95820000, 1.88090000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1253.14600000, -570.99440000, 1.83970000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1966.21400000, -84.47350000, 5.72440000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1891.29100000, 107.74920000, 6.01130000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1422.37000000, 136.37280000, 49.97710000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1165.49600000, 177.58810000, 3.30230000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1376.45400000, 1787.28600000, 17.63460000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -930.20860000, 1670.47400000, 22.86110000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -938.56030000, 1503.63000000, 24.11030000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1379.00900000, 511.33410000, 11.47260000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1612.35500000, 763.47670000, 27.13650000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1538.08500000, 504.22530000, 21.36960000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1232.44900000, 1313.95100000, 20.68790000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1083.27200000, 1202.30800000, 22.30520000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1390.47800000, 545.41720000, 11.48410000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1980.96900000, -265.83590000, 6.61140000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1741.89800000, 246.20510000, 20.26680000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1337.26100000, 307.37040000, 12.30250000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -982.65230000, 1354.82200000, 24.04510000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -838.37830000, 986.44950000, 19.63220000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1221.05700000, 864.11850000, 18.56040000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1976.24800000, -332.03490000, 2.14560000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1640.01600000, -590.24800000, 2.00040000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1883.32000000, -538.75700000, 2.20930000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -2157.76000000, -84.50720000, 5.72410000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1991.85400000, 22.04110000, 6.46750000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1819.05000000, 185.24510000, 15.05980000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1709.88900000, 123.50230000, 11.22510000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1370.11700000, 380.61760000, 13.61520000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1166.98700000, 368.54050000, 3.49970000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -914.88050000, 1330.30900000, 23.33390000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1059.97900000, 1522.27400000, 23.51210000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1249.42300000, 1446.43000000, 18.82090000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1105.38700000, 865.35820000, 21.13230000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1515.14300000, 647.81850000, 22.99270000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1417.65900000, 926.23530000, 20.06220000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -997.40830000, 713.36130000, 2.96060000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1132.63100000, 970.64170000, 18.57450000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1393.73000000, 982.70170000, 22.22130000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1702.86000000, 521.84710000, 24.44440000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1266.23500000, 1707.77100000, 26.72450000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -982.13600000, 1688.95500000, 18.40310000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1561.12900000, 1103.43900000, 26.17870000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1668.21500000, 317.14960000, 23.49550000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1242.57300000, 1071.52300000, 18.78060000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1655.30500000, -313.57930000, 1.85990000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1794.53300000, -58.22980000, 6.42350000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1670.90400000, 726.06620000, 28.86760000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -993.10710000, -315.56630000, 1.91840000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1972.19100000, -504.52570000, 2.25320000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -2179.58200000, 152.62590000, 11.89890000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -2083.70000000, 212.58110000, 10.80830000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1911.00500000, 297.32220000, 21.96660000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1620.61600000, -81.67460000, 5.73790000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1248.59100000, -18.99340000, 5.22130000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1185.79300000, -0.55840000, 3.30650000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1215.95700000, 1192.77300000, 20.66770000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1344.54300000, 1207.66700000, 16.15250000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1427.29900000, 1258.30400000, 23.01160000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1397.96300000, 1462.23900000, 24.17600000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -786.24220000, 1183.35700000, 8.45640000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1190.51000000, 1730.82400000, 31.88890000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1121.53000000, 695.33390000, 8.15600000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1674.10300000, 607.97680000, 27.42240000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -956.39570000, 791.87260000, 3.27540000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -995.10810000, 1125.10800000, 13.71140000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1584.32100000, 868.65160000, 20.24020000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1068.28000000, -543.48600000, 1.88580000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1531.64000000, -575.34600000, 2.00010000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1406.33800000, -89.17190000, 5.34300000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1714.17200000, 436.72830000, 24.44410000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1469.36200000, 490.46240000, 18.56530000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1312.04000000, 1734.09000000, 26.92140000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1537.10700000, 372.12060000, 20.96680000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -983.78270000, 1639.57700000, 22.89940000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1363.57000000, 1453.65700000, 19.97900000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1394.97000000, 1148.11900000, 18.72010000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -800.73000000, 1075.30600000, 10.04690000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1168.58000000, -295.70200000, 2.04920000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1339.62000000, 605.72930000, 11.51410000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1659.45000000, 649.34030000, 28.84120000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1353.10000000, 802.45560000, 18.56090000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1359.23000000, 446.40120000, 13.61450000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1852.94400000, -374.40150000, 2.17360000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1506.31600000, -388.77980000, 1.90370000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1024.62000000, -270.61100000, 1.91890000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1727.51000000, -226.10200000, 3.43530000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1299.11000000, -210.19200000, 1.94540000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1391.73300000, 60.11550000, 6.01040000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1468.68200000, 281.84210000, 12.76670000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1296.31000000, 223.55720000, 8.94460000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1523.81500000, -53.62390000, 5.89850000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1093.15500000, 1339.00100000, 23.51430000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -904.98600000, 1563.98500000, 24.70830000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1111.72300000, 1124.87900000, 12.62320000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1240.37000000, 452.18370000, 3.53580000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1470.64000000, 742.57860000, 23.07310000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -922.43100000, 893.72840000, 12.67350000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1204.28000000, 948.63290000, 18.59460000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1184.83000000, 786.36840000, 18.56270000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -899.17700000, 1078.25100000, 19.62630000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1258.09900000, 821.32230000, 18.56610000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1428.70900000, 798.65070000, 18.56530000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1487.61000000, 562.89360000, 19.12460000 );
        break;
        case 2:
        sub_197523( sub_196481( iParam0, 2 ), 23, 200, -563.10640000, 293.52680000, 5.65930000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 200, 79.41570000, -839.53680000, 3.99560000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 200, -277.35550000, -533.76340000, 3.92420000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 200, -491.51540000, -173.97790000, 6.90340000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 200, -235.68930000, 739.30850000, 6.12510000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 200, -539.49120000, 1362.38800000, 16.47050000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 200, -180.02360000, -823.41240000, 4.11750000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 200, 173.60920000, 236.49170000, 13.76010000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 200, 89.24590000, 1152.34900000, 13.57080000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 200, 63.60470000, -439.60590000, 13.75830000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 200, -226.95040000, 1714.70300000, 14.75500000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 200, 130.44570000, 467.39240000, 13.91780000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 200, -529.52310000, -339.29980000, 5.04460000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 200, -477.98870000, 1707.35300000, 7.46380000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 200, -636.54130000, -45.71210000, 3.81230000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 200, 140.68720000, -857.79680000, 3.77320000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 200, -108.89000000, 64499, 4.11910000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 200, 348.54010000, -431.52940000, 3.54320000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 200, 166.63900000, 1080.60900000, 13.62470000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 200, -145.57280000, 1694.71300000, 15.72350000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 200, 64.54370000, 261.20720000, 14.53200000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 200, -507.19360000, 533.97330000, 5.67160000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 200, -410.23560000, -141.84080000, 11.61790000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 200, -248.26890000, -589.95000000, 3.78540000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 200, 115.38710000, 741.87240000, 13.56160000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 200, 49.21290000, 1350.85200000, 15.25260000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 200, 332.02520000, -158.35070000, 8.06910000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 200, -462.60650000, 775.56370000, 8.98430000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 200, -66.39730000, 1550.17700000, 17.64730000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 200, -47.94850000, 35.91300000, 13.84780000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 200, -210.80500000, 1410.40400000, 19.35510000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 200, 136.81580000, 387.45690000, 14.02680000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 200, -604.36200000, 339.06450000, 3.67190000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 200, -135.90700000, 819.94900000, 17.62560000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 200, -437.64390000, 430.90700000, 8.93740000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 200, -522.79810000, 1018.30500000, 8.79210000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 200, -593.54960000, 1165.60900000, 8.94090000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 200, 89.78390000, 1251.53900000, 14.86610000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 200, -108.15450000, 1271.20900000, 19.43000000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 200, -5.26000000, -447.87000000, 13.75820000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 200, 171.83730000, -807.45750000, 3.97040000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 200, 0.32430000, -761.24270000, 4.08570000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 200, -526.37620000, 593.51290000, 12.12300000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 200, -554.97370000, 806.93090000, 8.05520000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 200, 13.89740000, 1147.71300000, 13.24760000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 200, 179.53490000, 691.26530000, 7.18630000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 200, -463.63800000, 899.77910000, 8.96270000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 200, -467.32180000, 1556.19000000, 17.47570000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 200, -284.66330000, 1600.64600000, 19.41570000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 200, -311.56230000, 1733.49700000, 12.12580000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 200, -99.43640000, 1350.29900000, 19.41500000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 200, -534.05160000, 1610.99600000, 8.39809000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 200, 91.99830000, -318.91000000, 13.61250000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 200, -619.61000000, -115.38000000, 5.59590000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 200, 361.06920000, -477.77790000, 4.81800000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 200, -404.86420000, 1487.26800000, 17.86060000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 200, -572.86970000, 227.56950000, 3.66220000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 150.65500000, 913.75690000, 7.35240000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -151.58120000, 1004.30900000, 5.22660000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -126.16370000, 554.53360000, 13.76430000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -389.27630000, 1763.59200000, 8.23320000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -414.94510000, 376.06220000, 11.07520000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -348.11940000, 631.42010000, 13.58580000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -561.26700000, 1457.39500000, 16.53680000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -656.75510000, 1140.68700000, 8.81430000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 286.89990000, -392.37890000, 3.97690000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 267.28000000, -686.88580000, 3.87500000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 185.85650000, 801.42330000, 7.45320000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -33.85220000, 772.73390000, 13.64890000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -658.17000000, 809.31000000, 3.10420000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 65123, 1658.10000000, 20.08190000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 65307, 1445.20000000, 19.45000000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -579.01340000, 1414.69400000, 14.47110000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -570.93210000, 158.32300000, 3.66220000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -641.65510000, -195.11170000, 3.94450000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -373.43770000, 1563.55700000, 19.15690000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -242.26720000, -515.22510000, 3.93780000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 83.27290000, 128.63830000, 13.74580000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 100.85700000, -751.07600000, 3.95820000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 148.27850000, -520.31800000, 13.76100000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -145.85800000, -436.54300000, 13.71600000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 30.52840000, -319.98200000, 13.72060000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -121.35400000, -765.42500000, 4.20210000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -301.78400000, -408.61900000, 3.82400000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -221.12500000, -244.63100000, 13.55080000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 345.52040000, -409.60800000, 3.69260000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -187.78400000, -104.23300000, 13.59230000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 23.03970000, -41.08220000, 13.81190000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -105.90000000, 129.42250000, 13.72260000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -470.49600000, 190.20460000, 8.85820000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -108.92700000, 371.07960000, 13.80730000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -308.23960000, 455.43910000, 13.69960000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 113.34910000, 650.53870000, 13.71280000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -69.89160000, 1147.73100000, 13.76710000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 29.31370000, 761.22520000, 13.50620000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 52.12710000, 889.81030000, 13.65160000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -616.57000000, 1001.96400000, 8.91920000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -491.81600000, 949.22980000, 8.96670000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 5.79550000, 1028.96500000, 13.72000000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -542.94400000, 1303.59300000, 16.25890000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -273.10860000, 1211.38200000, 17.78520000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -292.14300000, 1331.30300000, 23.60140000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -364.25800000, 1371.32500000, 14.19140000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -34.57900000, 1410.33300000, 19.42230000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -161.42200000, 1555.53300000, 17.37360000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 210.82320000, -105.36900000, 13.76120000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -124.28630000, -530.18220000, 13.76020000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -220.20000000, -883.72000000, 3.67810000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -107.78000000, -821.86000000, 4.12670000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 78.03000000, -670.74000000, 13.76770000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 151.18900000, -613.04700000, 9.63030000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -27.54000000, -823.69000000, 4.45430000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 200.28920000, -698.77010000, 3.95350000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -195.15000000, -711.21000000, 3.96790000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 100.96000000, -512.62000000, 15.08830000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 306.47000000, -623.30000000, 4.19430000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -79.41310000, 614.20590000, 13.76610000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -385.48000000, 738.49000000, 13.76610000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -434.99950000, 1101.79400000, 9.24650000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -31.37680000, 959.19130000, 13.92130000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -268.25000000, 751.37000000, 10.86610000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -199.04800000, 880.55260000, 5.15900000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -330.31000000, 1134.31000000, 12.49350000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -174.81230000, 938.15850000, 10.64700000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -115.90590000, 1043.57100000, 5.15920000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -315.16000000, 867.71000000, 8.89900000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -564.60000000, 1183.60000000, 9.01900000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -498.02150000, 1183.31100000, 13.21080000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -414.29530000, 1365.34600000, 15.55880000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -468.98060000, 1468.96400000, 17.86100000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -112.28410000, 1672.74500000, 17.61140000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -219.91810000, 1277.23200000, 22.09290000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 2.40000000, 1197.70000000, 16.47760000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -25.70000000, 1250.90000000, 19.43250000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -65.74770000, 1498.05800000, 17.44880000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -383.30600000, 319.06300000, 13.75090000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 65250, 344.20000000, 13.66590000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -212.60000000, 346.70000000, 14.03540000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -66.26470000, 278.22370000, 13.76360000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -181.14000000, 491.28420000, 13.71490000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -24.70000000, 405.20000000, 14.76350000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 51.61110000, 464.46720000, 13.69600000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 27.60000000, 374.20000000, 13.70190000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -603.98900000, 612.11540000, 3.85550000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -337.70000000, 215.40000000, 13.74920000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -383.50000000, 556.30000000, 13.77870000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -442.96920000, 590.37180000, 10.25190000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 141.80000000, 211.20000000, 13.76310000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -192.30000000, 162.40000000, 13.98940000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -348.60300000, -188.71300000, 13.64900000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -273.48200000, -157.81400000, 13.88300000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -117.97000000, -335.54000000, 13.73490000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -12.45000000, -218.40000000, 13.63990000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 179.94720000, -254.52090000, 11.85560000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 264.98180000, -302.83180000, 5.59270000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 162.58500000, -158.31150000, 13.92630000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 113.02140000, -39.66420000, 13.76250000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -126.60700000, -117.37200000, 13.81500000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 207.01740000, 20.70740000, 13.71320000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -254.45000000, -43.88000000, 13.76330000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -347.84500000, 105.27390000, 13.81310000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -345.03400000, -100.46700000, 13.70210000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -445.05100000, 131.98950000, 8.83120000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -490.37520000, 25.33320000, 6.86600000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -572.51200000, 86.31020000, 3.81230000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 29.85000000, -601.28000000, 13.69580000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, -184.29000000, 102.09000000, 13.76770000 );
        break;
        case 3:
        sub_197523( sub_196481( iParam0, 2 ), 23, 10, 539.10960000, 1256.93500000, 5.73630000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 10, 882.31930000, 1930.23800000, 34.16670000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 10, 1475.73900000, 1564.51600000, 3.66870000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 10, 93.89270000, 1713.48100000, 28.73100000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 10, 328.96450000, 1716.17800000, 14.86010000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 10, 1119.38200000, 1525.37700000, 15.63970000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 10, 707.74950000, 1309.93500000, 13.26370000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 10, 930.30580000, 1631.76100000, 16.05420000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 10, 360.37280000, 1881.50600000, 18.44000000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 10, 644.43170000, 1981.75500000, 30.80980000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 10, 468.04420000, 1396.87200000, 10.67750000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 10, 845.72580000, 1854.56700000, 43.95300000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 10, 1069.71500000, 1958.88900000, 10.90870000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 10, 1205.48100000, 1720.37000000, 15.66210000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 10, 1365.76300000, 1906.24700000, 4.63100000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 10, 634.93950000, 1612.97000000, 25.21720000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 10, 1319.39400000, 1685.28700000, 15.79480000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 10, 1439.96700000, 1723.91200000, 15.68820000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 10, 379.41550000, 1531.95200000, 15.94950000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 10, 1248.69500000, 1474.25200000, 15.82900000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 10, 386.04720000, 1755.51900000, 20.70220000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 10, 460.35860000, 2026.23700000, 6.86000000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 10, 553.16000000, 1462.95000000, 9.46780000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 10, 751.69490000, 1600.36700000, 20.85910000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 10, 1073.43700000, 1823.56400000, 12.77140000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 10, 1257.53000000, 1514.06300000, 15.99010000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 689.15590000, 1457.28400000, 13.75660000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 936.22550000, 1530.67400000, 15.83790000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 771.99180000, 1966.79800000, 22.72810000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 1185.19300000, 1471.14700000, 15.68200000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 702.78440000, 1937.85000000, 26.15900000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 547.32150000, 1316.52000000, 9.93810000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 368.63770000, 1628.96100000, 15.21180000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 510.20640000, 1825.90800000, 29.83320000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 584.97880000, 1880.88200000, 26.36540000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 734.09080000, 1532.38800000, 17.66370000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 1332.83000000, 1420.26600000, 10.63750000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 1134.34400000, 1812.80000000, 9.31490000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 1228.91500000, 1939.79000000, 11.30560000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 666.57490000, 1435.97500000, 13.16830000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 1060.42200000, 1902.93300000, 13.20990000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 772.97860000, 1477.91500000, 13.24540000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 1028.85700000, 1662.25600000, 15.19240000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 877.66640000, 1594.83200000, 15.93270000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 1141.42700000, 1672.18500000, 16.12200000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 482.39520000, 1621.94800000, 19.15470000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 325.66010000, 1807.28400000, 16.58760000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 438.86760000, 1955.03500000, 23.10060000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 440.77880000, 1648.07300000, 14.95950000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 455.56370000, 1541.82700000, 14.05120000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 468.56070000, 1498.16300000, 12.62310000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 539.00440000, 1760.74400000, 31.55800000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 562.00150000, 1545.10000000, 16.04880000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 558.07730000, 1432.16400000, 10.11410000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 587.98410000, 1673.94000000, 30.77670000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 611.11330000, 1734.55100000, 30.86380000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 689.79570000, 1542.87100000, 17.26990000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 731.81860000, 1401.85100000, 13.21590000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 788.46140000, 1394.36900000, 13.23530000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 816.96370000, 1758.44200000, 16.18570000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 931.48030000, 1713.01100000, 15.68600000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 965.84810000, 1781.22200000, 19.21950000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 1074.58800000, 1754.85300000, 13.37660000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 1236.91200000, 1776.98000000, 9.31600000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 1256.70600000, 1841.52500000, 9.13970000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 1303.10100000, 1848.62300000, 9.11100000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 10, 1408.43200000, 1575.70900000, 2.65490000 );
        break;
        case 4:
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, 971.25700000, -241.15850000, 21.77490000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, 1991.54800000, 666.28930000, 17.05490000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, 978.78280000, 697.73490000, 25.01930000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, 1670.20700000, 1148.62700000, 2.37930000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, 2197.52100000, -4.28880000, 4.78710000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, 769.50460000, 354.70890000, 7.67740000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, 1044.38500000, 577.04820000, 24.68200000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, 796.74760000, -204.30470000, 4.99600000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, 1034.98200000, 993.40050000, 14.51280000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, 1488.01100000, -481.83600000, 30.15300000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, 725.29760000, 59.99800000, 4.95690000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, 1491.71400000, 357.32600000, 16.20000000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, 1177.05400000, -381.75500000, 20.50900000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, 1534.77600000, 39.55110000, 23.86690000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, 1382.43500000, -562.72270000, 13.62910000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, 1455.49000000, -332.38300000, 13.75420000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, 1206.40700000, 1054.12900000, 6.88890000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, 1386.27600000, 399.48250000, 21.94650000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, 1510.31200000, -418.72120000, 33.56950000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, 2237.96900000, 698.48690000, 4.80750000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, 2334.89200000, 169.20370000, 4.85780000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, 957.12920000, 187.32830000, 30.85680000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, 1742.97400000, 406.33870000, 24.02560000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, 1462.04300000, 27.35250000, 23.23340000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, 1355.33500000, 114.71390000, 30.29480000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, 1301.52300000, -393.57320000, 17.34230000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, 1047.89600000, 488.45810000, 18.52560000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, 711.86510000, 112.66810000, 5.00400000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, 1324.37400000, -709.35170000, 7.32980000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, 937.48060000, -706.47240000, 15.44030000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, 1145.83100000, -629.40700000, 12.77860000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, 1636.29900000, 161.49530000, 26.91540000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, 1352.16700000, -526.77150000, 13.61500000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, 1390.80000000, -259.77330000, 19.18340000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, 896.72970000, 432.34670000, 12.57160000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, 1238.30300000, 424.19980000, 21.60770000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, 1769.25800000, 1027.22600000, 14.55440000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, 893.41270000, 486.69640000, 12.48910000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, 2313.73100000, -5.84420000, 4.85890000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, 2238.16700000, 189.87030000, 4.90610000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, 2081.40600000, 309.53860000, 18.81760000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, 2115.34300000, 505.21730000, 8.60340000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, 2068.74900000, 609.38340000, 17.70370000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, 1909.62700000, 277.26980000, 4.23590000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, 2457.64300000, 394.31570000, 4.80800000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1787.68600000, 884.52730000, 16.06660000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 794.19010000, 75.48400000, 5.01250000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1874.83800000, 107.34850000, 17.14260000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 2189.09700000, 321.15950000, 5.20560000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 2616.15100000, 432.87480000, 4.85950000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1489.06000000, 563.60000000, 28.83170000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1023.06200000, 617.05350000, 37.28110000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1381.86900000, 334.10410000, 18.50400000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1488.55100000, 648.40590000, 27.34510000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1497.21300000, 912.85590000, 14.28900000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1102.66500000, -84.83450000, 35.29810000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1103.88000000, -217.78940000, 21.19290000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 902.45760000, -682.94340000, 15.33640000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1139.98000000, -283.95670000, 19.64120000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1114.17900000, 287.47740000, 30.20140000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1202.41300000, -679.65320000, 15.42330000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 804.32350000, -25.85970000, 5.15600000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 850.31520000, 681.09970000, 6.88570000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1595.65200000, 366.45610000, 24.23320000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 834.78190000, 842.82500000, 10.80350000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1175.59000000, 975.44030000, 14.40380000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1246.67300000, 892.18030000, 30.61760000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 2408.35400000, 27.70170000, 5.08350000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 2762.13500000, 422.38900000, 5.06270000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 2327.30600000, -108.32800000, 4.85780000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 2489.17700000, 755.87680000, 3.45390000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1951.25600000, 864.31450000, 9.95050000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1910.89400000, 468.99340000, 17.39970000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1894.39700000, 724.58680000, 23.24230000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 2671.00600000, 413.67400000, 4.80730000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 2357.89800000, 398.53440000, 5.08020000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1056.80600000, -561.22890000, 12.66850000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 926.81460000, -500.43770000, 14.14500000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 940.84120000, 327.51310000, 29.74390000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1385.23000000, 190.27770000, 25.93480000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 945.37550000, -643.48990000, 13.23200000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1043.36600000, 909.41000000, 30.60360000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1136.78700000, -698.29410000, 15.42140000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 938.77260000, 911.06760000, 21.62160000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1062.84000000, 700.77970000, 32.94400000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1050.94100000, 854.70670000, 30.68800000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1240.56500000, 751.17660000, 35.11810000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1393.91600000, 530.09220000, 27.96500000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1263.16100000, 337.69190000, 20.31880000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1153.28600000, 448.26910000, 28.82300000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 830.50780000, 356.23580000, 5.96940000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1552.73500000, 836.96840000, 16.02460000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1823.46600000, 550.70790000, 27.97250000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1819.67400000, 344.58930000, 21.63850000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1780.63100000, 176.98750000, 20.74130000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1526.18500000, 202.64920000, 22.12750000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1414.34000000, 15.21330000, 24.87060000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1226.28700000, 151.64710000, 31.45340000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 957.46700000, 70.46760000, 29.02720000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1200.92300000, -49.12340000, 29.61420000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1302.28900000, -106.41000000, 25.83070000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1311.66600000, 94.31480000, 33.43510000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1267.07500000, -262.42500000, 24.33860000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1072.13700000, -278.21340000, 20.05710000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 989.40310000, -324.93550000, 19.87850000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 809.38740000, -501.27790000, 13.00590000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 896.74400000, -581.16300000, 12.97120000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 721.35270000, -294.43500000, 4.82040000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 766.60350000, -558.81270000, 8.71300000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 872.93650000, -293.38860000, 16.30820000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1248.20200000, -434.06700000, 15.65760000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1042.48200000, -470.39700000, 13.56660000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1029.54100000, -700.80800000, 15.44000000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 837.87730000, 126.86570000, 4.93750000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1376.86500000, -66.94800000, 21.78340000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1227.66700000, 24.23500000, 34.69800000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 881.41480000, 191.42900000, 29.83690000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1241.61900000, -149.58210000, 26.67020000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 798.72020000, -369.13160000, 6.53280000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1025.91100000, -71.99620000, 27.75800000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 790.45740000, -291.48900000, 13.50790000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1190.75800000, 695.12240000, 36.33260000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1736.31100000, 673.13120000, 27.00880000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1635.02900000, 726.04530000, 27.21290000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1641.17200000, 508.39920000, 27.78160000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1725.32700000, 504.99910000, 27.94640000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1168.02600000, 550.06880000, 28.22670000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1343.09000000, 618.81650000, 35.90860000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1415.46000000, 784.76450000, 27.24360000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 986.42850000, 517.60480000, 20.83150000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 978.83850000, 796.69900000, 24.33790000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1371.68500000, 813.48190000, 24.64800000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1736.14500000, 310.83050000, 11.00410000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1562.77400000, 486.79020000, 28.07260000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1540.74600000, 992.09050000, 13.14870000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1120.33300000, 770.54590000, 33.62930000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1687.03400000, 913.52890000, 15.09290000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 2456.05300000, 193.38270000, 4.85780000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 2187.67200000, 454.12460000, 5.10300000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 2544.68500000, 452.00130000, 4.80790000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 2406.69600000, 552.79240000, 4.85780000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 2309.43700000, 556.20780000, 5.03860000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1965.17900000, 157.26200000, 14.65190000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 2194.80600000, 633.44290000, 4.92400000 );
        break;
        case 5:
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1988.59600000, -261.24350000, 13.21570000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1957.61700000, -380.15630000, 2.54140000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1750.17500000, -188.89970000, 9.31030000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1462.18300000, -555.94830000, 7.14380000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1896.97200000, -652.20210000, 8.51260000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -2127.38100000, -327.66700000, 1.84810000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1832.01600000, -591.09220000, 39.02480000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1557.64900000, -487.77500000, 49.97720000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1839.98600000, -648.80100000, 5.82910000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1849.57000000, -197.37200000, 1.62920000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1569.59200000, -288.30590000, -1.61900000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1593.68600000, -528.22850000, 5.58460000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1652.23700000, -344.31550000, 1.83710000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1883.32000000, -538.75650000, 2.20930000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1981.27900000, -639.00310000, 3.28400000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1481.57000000, -285.77700000, 1.83700000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1744.83100000, -312.47730000, 5.92080000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1624.97600000, -680.03380000, 6.17540000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -2062.50500000, -433.98490000, 3.37430000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1756.51600000, -264.89190000, 10.12920000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1451.59000000, -613.79830000, 2.00180000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1516.68000000, -466.84100000, 1.82770000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1723.96000000, -386.08700000, 1.92320000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1703.45000000, -569.29200000, 1.92350000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1971.57000000, -577.45600000, 1.83690000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1927.70000000, -488.93700000, 2.20850000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1678.75000000, -254.92500000, 1.74960000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 63658, -300.98300000, 4.43590000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1975.83000000, -210.92500000, 1.62840000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -2024.15000000, -426.54300000, 3.28110000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1968.68000000, -507.75940000, 2.20930000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1813.52600000, -506.78250000, 2.04570000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1829.59200000, -454.68280000, 2.20950000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1682.03400000, -427.12200000, 1.91060000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1531.64500000, -575.34610000, 2.00010000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1562.14300000, -436.53920000, 3.60510000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1756.10000000, -451.95550000, 2.04500000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1858.55400000, -375.19650000, 3.23150000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1554.54900000, -233.75650000, 4.38720000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1643.03100000, -611.03750000, 1.83760000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1727.51100000, -226.10180000, 3.43530000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1937.72600000, -238.36680000, 4.43800000 );
        break;
        case 6:
        switch (iParam0->_fU64)
        {
            case 1:
            sub_197523( sub_214816( iParam0, 12 ), 23, 0, -1179.37400000, -471.02340000, 12.30210000 );
            sub_197523( sub_214816( iParam0, 5 ), 23, 0, -974.23990000, -394.78180000, 12.49830000 );
            sub_197523( sub_214816( iParam0, 12 ), 23, 0, -1129.84400000, -374.91930000, 11.96490000 );
            sub_197523( sub_214816( iParam0, 5 ), 23, 0, -985.62780000, -456.36110000, 12.30230000 );
            sub_197523( sub_214816( iParam0, 7 ), 23, 0, -1180.50800000, -469.41180000, 7.28980000 );
            sub_197523( sub_214816( iParam0, 12 ), 23, 0, -1139.07900000, -324.89190000, 7.28950000 );
            sub_197523( sub_214816( iParam0, 7 ), 23, 0, -1075.19800000, -492.82770000, 12.30190000 );
            sub_197523( sub_214816( iParam0, 5 ), 23, 0, -900.00490000, -397.62310000, 12.30170000 );
            break;
            case 2:
            sub_197523( sub_214816( iParam0, 17 ), 23, 0, -1179.37400000, -471.02340000, 12.30210000 );
            sub_197523( sub_214816( iParam0, 4 ), 23, 0, -974.23990000, -394.78180000, 12.49830000 );
            sub_197523( sub_214816( iParam0, 14 ), 23, 0, -1129.84400000, -374.91930000, 11.96490000 );
            sub_197523( sub_214816( iParam0, 4 ), 23, 0, -985.62780000, -456.36110000, 12.30230000 );
            sub_197523( sub_214816( iParam0, 13 ), 23, 0, -1180.50800000, -469.41180000, 7.28980000 );
            sub_197523( sub_214816( iParam0, 14 ), 23, 0, -1139.07900000, -324.89190000, 7.28950000 );
            sub_197523( sub_214816( iParam0, 17 ), 23, 0, -1075.19800000, -492.82770000, 12.30190000 );
            sub_197523( sub_214816( iParam0, 4 ), 23, 0, -900.00490000, -397.62310000, 12.30170000 );
            break;
            case 3:
            sub_197523( sub_214816( iParam0, 16 ), 23, 0, -1179.37400000, -471.02340000, 12.30210000 );
            sub_197523( sub_214816( iParam0, 18 ), 23, 0, -974.23990000, -394.78180000, 12.49830000 );
            sub_197523( sub_214816( iParam0, 15 ), 23, 0, -1129.84400000, -374.91930000, 11.96490000 );
            sub_197523( sub_214816( iParam0, 5 ), 23, 0, -985.62780000, -456.36110000, 12.30230000 );
            sub_197523( sub_214816( iParam0, 13 ), 23, 0, -1180.50800000, -469.41180000, 7.28980000 );
            sub_197523( sub_214816( iParam0, 15 ), 23, 0, -1139.07900000, -324.89190000, 7.28950000 );
            sub_197523( sub_214816( iParam0, 16 ), 23, 0, -1075.19800000, -492.82770000, 12.30190000 );
            sub_197523( sub_214816( iParam0, 4 ), 23, 0, -900.00490000, -397.62310000, 12.30170000 );
            break;
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1179.37400000, -471.02340000, 12.30210000 );
            sub_197523( sub_196481( iParam0, 2 ), 23, 0, -1129.84400000, -374.91930000, 11.96490000 );
            sub_197523( sub_196481( iParam0, 2 ), 23, 0, -1180.50800000, -469.41180000, 7.28980000 );
            sub_197523( sub_196481( iParam0, 2 ), 23, 0, -1075.19800000, -492.82770000, 12.30190000 );
            sub_197523( sub_196481( iParam0, 0 ), 23, 0, -974.23990000, -394.78180000, 12.49830000 );
            sub_197523( sub_196481( iParam0, 0 ), 23, 0, -985.62780000, -456.36110000, 12.30230000 );
            sub_197523( sub_196481( iParam0, 0 ), 23, 0, -1139.07900000, -324.89190000, 7.28950000 );
            sub_197523( sub_196481( iParam0, 0 ), 23, 0, -900.00490000, -397.62310000, 12.30170000 );
            break;
            case 0:
            sub_197523( sub_214816( iParam0, 16 ), 23, 0, -1179.37400000, -471.02340000, 12.30210000 );
            sub_197523( sub_214816( iParam0, 18 ), 23, 0, -974.23990000, -394.78180000, 12.49830000 );
            sub_197523( sub_214816( iParam0, 15 ), 23, 0, -1129.84400000, -374.91930000, 11.96490000 );
            sub_197523( sub_214816( iParam0, 5 ), 23, 0, -985.62780000, -456.36110000, 12.30230000 );
            sub_197523( sub_214816( iParam0, 13 ), 23, 0, -1180.50800000, -469.41180000, 7.28980000 );
            sub_197523( sub_214816( iParam0, 15 ), 23, 0, -1139.07900000, -324.89190000, 7.28950000 );
            sub_197523( sub_214816( iParam0, 16 ), 23, 0, -1075.19800000, -492.82770000, 12.30190000 );
            sub_197523( sub_214816( iParam0, 4 ), 23, 0, -900.00490000, -397.62310000, 12.30170000 );
            break;
        }
        sub_197523( sub_196481( iParam0, 2 ), 23, 0, -943.87520000, -369.52990000, 9.96950000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 0, -974.14700000, -325.42500000, 12.30190000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 0, -905.80910000, -355.14430000, 2.17950000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 0, -1034.78100000, -487.44620000, 2.17920000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 0, -1134.33600000, -442.75500000, 2.17880000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 0, -938.73180000, -411.02590000, 11.94080000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 0, -1135.11500000, -358.36580000, 2.17910000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 0, -969.02450000, -431.48750000, 2.93540000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, -971.50310000, -365.51860000, 2.13990000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, -1131.40600000, -476.22250000, 1.25700000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, -1084.88200000, -413.49010000, 2.18670000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, -930.18570000, -416.89610000, 3.71260000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, -1082.97000000, -349.59460000, 2.17820000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, -946.29130000, -328.82420000, 2.17950000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, -1049.83100000, -380.59300000, 2.31070000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, -1027.14900000, -358.24460000, 2.16310000 );
        break;
        case 7:
        switch (iParam0->_fU64)
        {
            case 1:
            sub_197523( sub_214816( iParam0, 7 ), 23, 0, -1075.98500000, 148.86390000, 6.37530000 );
            sub_197523( sub_214816( iParam0, 12 ), 23, 0, -1283.58800000, 455.25190000, 49.97760000 );
            sub_197523( sub_214816( iParam0, 5 ), 23, 0, -1255.54000000, 116.30180000, 4.80030000 );
            sub_197523( sub_214816( iParam0, 12 ), 23, 0, -964.67740000, 151.32000000, 5.27030000 );
            sub_197523( sub_214816( iParam0, 5 ), 23, 0, -1057.64600000, 249.89120000, 7.75290000 );
            break;
            case 2:
            sub_197523( sub_214816( iParam0, 17 ), 23, 0, -1075.98500000, 148.86390000, 6.37530000 );
            sub_197523( sub_214816( iParam0, 17 ), 23, 0, -1214.61000000, 531.44000000, 13.04100000 );
            sub_197523( sub_214816( iParam0, 4 ), 23, 0, -1255.54000000, 116.30180000, 4.80030000 );
            sub_197523( sub_214816( iParam0, 14 ), 23, 0, -964.67740000, 151.32000000, 5.27030000 );
            sub_197523( sub_214816( iParam0, 10 ), 23, 0, -1057.64600000, 249.89120000, 7.75290000 );
            break;
            case 3:
            sub_197523( sub_214816( iParam0, 16 ), 23, 0, -1075.98500000, 148.86390000, 6.37530000 );
            sub_197523( sub_214816( iParam0, 18 ), 23, 0, -1214.61000000, 531.44000000, 13.04100000 );
            sub_197523( sub_214816( iParam0, 4 ), 23, 0, -1255.54000000, 116.30180000, 4.80030000 );
            sub_197523( sub_214816( iParam0, 15 ), 23, 0, -964.67740000, 151.32000000, 5.27030000 );
            sub_197523( sub_214816( iParam0, 11 ), 23, 0, -1057.64600000, 249.89120000, 7.75290000 );
            break;
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            sub_197523( sub_196481( iParam0, 2 ), 23, 24, -964.67740000, 151.32000000, 5.27030000 );
            sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1283.58800000, 455.25190000, 49.97760000 );
            sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1075.98500000, 148.86390000, 6.37530000 );
            sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1255.54000000, 116.30180000, 4.80030000 );
            sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1057.64600000, 249.89120000, 7.75290000 );
            break;
            case 0:
            sub_197523( sub_214816( iParam0, 16 ), 23, 0, -1075.98500000, 148.86390000, 6.37530000 );
            sub_197523( sub_214816( iParam0, 18 ), 23, 0, -1214.61000000, 531.44000000, 13.04100000 );
            sub_197523( sub_214816( iParam0, 4 ), 23, 0, -1255.54000000, 116.30180000, 4.80030000 );
            sub_197523( sub_214816( iParam0, 15 ), 23, 0, -964.67740000, 151.32000000, 5.27030000 );
            sub_197523( sub_214816( iParam0, 11 ), 23, 0, -1057.64600000, 249.89120000, 7.75290000 );
            break;
        }
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1274.41100000, 701.62580000, 14.39700000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1099.49500000, 393.20450000, 3.93250000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1017.69400000, 47.42280000, 4.28950000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -968.62940000, 337.82890000, 3.50260000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -986.80800000, 453.98970000, 3.37260000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1184.88300000, 16.94380000, 3.30650000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -1296.30900000, 223.55720000, 8.94460000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, -919.65090000, 646.94350000, 3.07890000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1038.82800000, 568.35760000, 3.07740000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, -1055.34500000, 448.75700000, 3.37260000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1004.58400000, 710.36520000, 2.96050000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -975.65720000, 262.81570000, 3.37280000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1276.45500000, 641.39540000, 7.36890000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -954.30020000, 627.81490000, 3.07890000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1231.63400000, 500.95030000, 3.37340000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1213.79000000, 664.11570000, 12.85330000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1133.36000000, 519.97690000, 3.89570000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1101.90900000, 317.84240000, 3.50320000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1121.53500000, 695.33390000, 8.15600000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1143.45200000, 21.28500000, 3.20850000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1151.13800000, 341.02540000, 3.09000000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1168.72000000, 148.28840000, 3.23240000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1214.21100000, 591.50100000, 3.37350000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1240.37300000, 452.18370000, 3.53580000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1260.71500000, 353.20720000, 6.37320000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1275.83900000, -6.00980000, 5.23960000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1220.80700000, 209.69680000, 3.43310000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1196.68000000, 337.08170000, 3.00040000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, -1095.52500000, 579.76070000, 3.52740000 );
        break;
        case 8:
        switch (iParam0->_fU64)
        {
            case 1:
            sub_197523( sub_214816( iParam0, 12 ), 23, 24, -608.34910000, -798.24460000, 12.06630000 );
            sub_197523( sub_214816( iParam0, 5 ), 23, 24, -608.20830000, -857.52000000, 12.19460000 );
            sub_197523( sub_214816( iParam0, 12 ), 23, 24, -804.94760000, -737.65580000, 3.83730000 );
            sub_197523( sub_214816( iParam0, 7 ), 23, 24, -608.10000000, -819.83000000, 3.83770000 );
            sub_197523( sub_214816( iParam0, 12 ), 23, 24, -714.94530000, -818.98440000, 3.83740000 );
            sub_197523( sub_214816( iParam0, 7 ), 23, 24, -489.24340000, -890.79850000, 3.83770000 );
            sub_197523( sub_214816( iParam0, 12 ), 23, 24, -517.41030000, -978.96110000, 4.53750000 );
            sub_197523( sub_214816( iParam0, 12 ), 23, 24, -563.81060000, -1047.09000000, 4.05940000 );
            sub_197523( sub_214816( iParam0, 7 ), 23, 24, -625.72610000, -1002.18000000, 4.39280000 );
            sub_197523( sub_214816( iParam0, 5 ), 23, 24, -529.89010000, -813.25090000, 4.53770000 );
            sub_197523( sub_214816( iParam0, 5 ), 23, 24, -569.10100000, -733.48970000, 3.89950000 );
            sub_197523( sub_214816( iParam0, 7 ), 23, 24, -628.38550000, -673.67490000, 4.90510000 );
            sub_197523( sub_214816( iParam0, 7 ), 23, 24, -608.37770000, -893.77860000, 3.83770000 );
            sub_197523( sub_214816( iParam0, 5 ), 23, 24, -612.43000000, -955.11000000, 3.83770000 );
            sub_197523( sub_214816( iParam0, 12 ), 23, 24, -490.30000000, -956.50000000, 3.83770000 );
            break;
            case 2:
            sub_197523( sub_214816( iParam0, 17 ), 23, 24, -608.34910000, -798.24460000, 12.06630000 );
            sub_197523( sub_214816( iParam0, 17 ), 23, 24, -608.20830000, -857.52000000, 12.19460000 );
            sub_197523( sub_214816( iParam0, 4 ), 23, 24, -804.94760000, -737.65580000, 3.83730000 );
            sub_197523( sub_214816( iParam0, 13 ), 23, 24, -608.10000000, -819.83000000, 3.83770000 );
            sub_197523( sub_214816( iParam0, 14 ), 23, 24, -714.94530000, -818.98440000, 3.83740000 );
            sub_197523( sub_214816( iParam0, 9 ), 23, 24, -489.24340000, -890.79850000, 3.83770000 );
            sub_197523( sub_214816( iParam0, 13 ), 23, 24, -517.41030000, -978.96110000, 4.53750000 );
            sub_197523( sub_214816( iParam0, 14 ), 23, 24, -563.81060000, -1047.09000000, 4.05940000 );
            sub_197523( sub_214816( iParam0, 14 ), 23, 24, -625.72610000, -1002.18000000, 4.39280000 );
            sub_197523( sub_214816( iParam0, 14 ), 23, 24, -529.89010000, -813.25090000, 4.53770000 );
            sub_197523( sub_214816( iParam0, 14 ), 23, 24, -569.10100000, -733.48970000, 3.89950000 );
            sub_197523( sub_214816( iParam0, 4 ), 23, 24, -628.38550000, -673.67490000, 4.90510000 );
            sub_197523( sub_214816( iParam0, 9 ), 23, 24, -608.37770000, -893.77860000, 3.83770000 );
            sub_197523( sub_214816( iParam0, 4 ), 23, 24, -612.43000000, -955.11000000, 3.83770000 );
            sub_197523( sub_214816( iParam0, 14 ), 23, 24, -490.30000000, -956.50000000, 3.83770000 );
            break;
            case 3:
            sub_197523( sub_214816( iParam0, 17 ), 23, 24, -608.34910000, -798.24460000, 12.06630000 );
            sub_197523( sub_214816( iParam0, 5 ), 23, 24, -608.20830000, -857.52000000, 12.19460000 );
            sub_197523( sub_214816( iParam0, 18 ), 23, 24, -804.94760000, -737.65580000, 3.83730000 );
            sub_197523( sub_214816( iParam0, 13 ), 23, 24, -608.10000000, -819.83000000, 3.83770000 );
            sub_197523( sub_214816( iParam0, 15 ), 23, 24, -714.94530000, -818.98440000, 3.83740000 );
            sub_197523( sub_214816( iParam0, 13 ), 23, 24, -489.24340000, -890.79850000, 3.83770000 );
            sub_197523( sub_214816( iParam0, 13 ), 23, 24, -517.41030000, -978.96110000, 4.53750000 );
            sub_197523( sub_214816( iParam0, 15 ), 23, 24, -563.81060000, -1047.09000000, 4.05940000 );
            sub_197523( sub_214816( iParam0, 11 ), 23, 24, -625.72610000, -1002.18000000, 4.39280000 );
            sub_197523( sub_214816( iParam0, 11 ), 23, 24, -529.89010000, -813.25090000, 4.53770000 );
            sub_197523( sub_214816( iParam0, 18 ), 23, 24, -569.10100000, -733.48970000, 3.89950000 );
            sub_197523( sub_214816( iParam0, 4 ), 23, 24, -628.38550000, -673.67490000, 4.90510000 );
            sub_197523( sub_214816( iParam0, 13 ), 23, 24, -608.37770000, -893.77860000, 3.83770000 );
            sub_197523( sub_214816( iParam0, 4 ), 23, 24, -612.43000000, -955.11000000, 3.83770000 );
            sub_197523( sub_214816( iParam0, 13 ), 23, 24, -490.30000000, -956.50000000, 3.83770000 );
            break;
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            sub_197523( sub_196481( iParam0, 2 ), 23, 24, -608.20830000, -857.52000000, 12.19460000 );
            sub_197523( sub_196481( iParam0, 2 ), 23, 24, -804.94760000, -737.65580000, 3.83730000 );
            sub_197523( sub_196481( iParam0, 2 ), 23, 24, -714.94530000, -818.98440000, 3.83740000 );
            sub_197523( sub_196481( iParam0, 2 ), 23, 24, -563.81060000, -1047.09000000, 4.05940000 );
            sub_197523( sub_196481( iParam0, 2 ), 23, 24, -569.10100000, -733.48970000, 3.89950000 );
            sub_197523( sub_196481( iParam0, 2 ), 23, 24, -628.38550000, -673.67490000, 4.90510000 );
            sub_197523( sub_196481( iParam0, 2 ), 23, 24, -612.43000000, -955.11000000, 3.83770000 );
            sub_197523( sub_196481( iParam0, 0 ), 23, 24, -608.34910000, -798.24460000, 12.06630000 );
            sub_197523( sub_196481( iParam0, 0 ), 23, 24, -608.10000000, -819.83000000, 3.83770000 );
            sub_197523( sub_196481( iParam0, 0 ), 23, 24, -489.24340000, -890.79850000, 3.83770000 );
            sub_197523( sub_196481( iParam0, 0 ), 23, 24, -517.41030000, -978.96110000, 4.53750000 );
            sub_197523( sub_196481( iParam0, 0 ), 23, 24, -625.72610000, -1002.18000000, 4.39280000 );
            sub_197523( sub_196481( iParam0, 0 ), 23, 24, -529.89010000, -813.25090000, 4.53770000 );
            sub_197523( sub_196481( iParam0, 0 ), 23, 24, -608.37770000, -893.77860000, 3.83770000 );
            sub_197523( sub_196481( iParam0, 0 ), 23, 24, -490.30000000, -956.50000000, 3.83770000 );
            break;
            case 0:
            sub_197523( sub_214816( iParam0, 17 ), 23, 24, -608.34910000, -798.24460000, 12.06630000 );
            sub_197523( sub_214816( iParam0, 5 ), 23, 24, -608.20830000, -857.52000000, 12.19460000 );
            sub_197523( sub_214816( iParam0, 18 ), 23, 24, -804.94760000, -737.65580000, 3.83730000 );
            sub_197523( sub_214816( iParam0, 12 ), 23, 24, -608.10000000, -819.83000000, 3.83770000 );
            sub_197523( sub_214816( iParam0, 14 ), 23, 24, -714.94530000, -818.98440000, 3.83740000 );
            sub_197523( sub_214816( iParam0, 9 ), 23, 24, -489.24340000, -890.79850000, 3.83770000 );
            sub_197523( sub_214816( iParam0, 12 ), 23, 24, -517.41030000, -978.96110000, 4.53750000 );
            sub_197523( sub_214816( iParam0, 14 ), 23, 24, -563.81060000, -1047.09000000, 4.05940000 );
            sub_197523( sub_214816( iParam0, 10 ), 23, 24, -625.72610000, -1002.18000000, 4.39280000 );
            sub_197523( sub_214816( iParam0, 11 ), 23, 24, -529.89010000, -813.25090000, 4.53770000 );
            sub_197523( sub_214816( iParam0, 18 ), 23, 24, -569.10100000, -733.48970000, 3.89950000 );
            sub_197523( sub_214816( iParam0, 4 ), 23, 24, -628.38550000, -673.67490000, 4.90510000 );
            sub_197523( sub_214816( iParam0, 9 ), 23, 24, -608.37770000, -893.77860000, 3.83770000 );
            sub_197523( sub_214816( iParam0, 4 ), 23, 24, -612.43000000, -955.11000000, 3.83770000 );
            sub_197523( sub_214816( iParam0, 13 ), 23, 24, -490.30000000, -956.50000000, 3.83770000 );
            break;
        }
        break;
        case 9:
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, 408.80360000, -65.24540000, 4.29340000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, 561.51890000, 188.31020000, 7.71200000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, 546.11480000, 224.00730000, 9.71000000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, 535.68580000, 120.49250000, 2.56830000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 24, 489.39300000, 221.40600000, 7.72690000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, 523.61310000, -76.84820000, 8.28780000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, 375.34610000, 109.64960000, 3.99930000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, 466.36250000, -64.42510000, 8.25140000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 24, 433.49540000, 32.68570000, 7.85790000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 468.10000000, 402.10000000, 7.27620000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 431.43030000, 226.85410000, 13.71420000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 530.50880000, 257.98000000, 7.89350000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 415.05510000, 346.20030000, 7.53930000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 452.16560000, 313.49470000, 7.57830000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 480.96360000, 105.28050000, 6.95840000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 518.70980000, 313.52720000, 7.57960000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 533.97420000, 373.89600000, 7.69930000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 526.41750000, -13.77130000, 7.98750000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 486.09720000, 40.29870000, 7.71270000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 376.78250000, 43.35770000, 4.11130000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 432.88990000, 148.55520000, 7.70640000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 376.07240000, 198.49140000, 7.86880000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 455.20870000, 221.32960000, 7.70100000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 445.80360000, 99.30360000, 7.72650000 );
        break;
        case 10:
        sub_197523( sub_196481( iParam0, 2 ), 23, 0, 568.79020000, 786.22060000, 2.00000000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 0, 504.12220000, 691.04800000, 1.84050000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 0, 535.28340000, 852.84720000, 20.78500000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 0, 657.89820000, 700.62180000, 14.08770000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 0, 607.02870000, 879.24570000, 14.08760000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 0, 658.13440000, 879.37540000, 14.08750000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 0, 655.82540000, 1099.45200000, 0.50160000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 0, 433.36610000, 1064.61300000, 0.66200000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 0, 550.55820000, 898.25230000, 19.91800000 );
        sub_197523( sub_196481( iParam0, 2 ), 23, 0, 549.75850000, 721.80110000, 19.91820000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 0, 592.57450000, 1102.85800000, 1.81450000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 0, 464.57800000, 832.63300000, 1.64100000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 0, 615.58470000, 701.10530000, 8.86380000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 0, 543.24050000, 991.34010000, 3.64490000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 658.35990000, 735.46000000, 14.08760000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 625.95030000, 777.01490000, 14.08760000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 437.16310000, 919.35180000, 0.17810000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 556.17970000, 654.81580000, 19.76400000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 641.82240000, 835.48650000, 1.73330000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 684.25400000, 769.81860000, 1.78490000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 641.03790000, 911.81850000, 1.73080000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 476.83070000, 1087.36900000, 1.71370000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 609.53870000, 653.59840000, 2.32140000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 677.09640000, 698.25200000, 1.95400000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 628.76010000, 1020.96600000, 1.82520000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 570.15930000, 1058.61700000, 1.86450000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 491.34680000, 1064.61100000, 2.06010000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 576.71840000, 925.46780000, 1.73610000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 549.55200000, 802.08620000, 1.77480000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 504.04680000, 796.21140000, 4.13550000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 559.04920000, 589.71170000, 2.51860000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 548.33440000, 617.91640000, 1.85560000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 570.01580000, 714.47930000, 1.79620000 );
        break;
        case 11:
        switch (iParam0->_fU64)
        {
            case 1:
            sub_197523( sub_214816( iParam0, 12 ), 23, 0, 2496.14100000, 262.97270000, 19.17490000 );
            sub_197523( sub_214816( iParam0, 5 ), 23, 0, 2495.05400000, 524.63290000, 19.17500000 );
            sub_197523( sub_214816( iParam0, 12 ), 23, 0, 2475.86200000, 301.28410000, 18.84560000 );
            sub_197523( sub_214816( iParam0, 5 ), 23, 0, 2400.56500000, 497.48360000, 11.76310000 );
            sub_197523( sub_214816( iParam0, 5 ), 23, 0, 2226.60800000, 670.32020000, 17.56400000 );
            sub_197523( sub_214816( iParam0, 12 ), 23, 0, 2271.92100000, 367.94520000, 11.30240000 );
            sub_197523( sub_214816( iParam0, 12 ), 23, 0, 2144.44900000, -24.75960000, 4.78480000 );
            sub_197523( sub_214816( iParam0, 7 ), 23, 0, 2081.51700000, 299.51680000, 18.72830000 );
            sub_197523( sub_214816( iParam0, 5 ), 23, 0, 2162.52500000, -144.77160000, 0.81190000 );
            sub_197523( sub_214816( iParam0, 12 ), 23, 0, 2300.15400000, 457.03760000, 20.82560000 );
            sub_197523( sub_214816( iParam0, 12 ), 23, 0, 2255.44700000, 641.09600000, 28.03690000 );
            sub_197523( sub_214816( iParam0, 12 ), 23, 0, 2221.10000000, 336.34000000, 16.20610000 );
            break;
            case 2:
            sub_197523( sub_214816( iParam0, 17 ), 23, 0, 2496.14100000, 262.97270000, 19.17490000 );
            sub_197523( sub_214816( iParam0, 4 ), 23, 0, 2495.05400000, 524.63290000, 19.17500000 );
            sub_197523( sub_214816( iParam0, 14 ), 23, 0, 2475.86200000, 301.28410000, 18.84560000 );
            sub_197523( sub_214816( iParam0, 14 ), 23, 0, 2400.56500000, 497.48360000, 11.76310000 );
            sub_197523( sub_214816( iParam0, 4 ), 23, 0, 2226.60800000, 670.32020000, 17.56400000 );
            sub_197523( sub_214816( iParam0, 17 ), 23, 0, 2271.92100000, 367.94520000, 11.30240000 );
            sub_197523( sub_214816( iParam0, 14 ), 23, 0, 2144.44900000, -24.75960000, 4.78480000 );
            sub_197523( sub_214816( iParam0, 14 ), 23, 0, 2081.51700000, 299.51680000, 18.72830000 );
            sub_197523( sub_214816( iParam0, 4 ), 23, 0, 2162.52500000, -144.77160000, 0.81190000 );
            sub_197523( sub_214816( iParam0, 14 ), 23, 0, 2300.15400000, 457.03760000, 20.82560000 );
            sub_197523( sub_214816( iParam0, 17 ), 23, 0, 2255.44700000, 641.09600000, 28.03690000 );
            sub_197523( sub_214816( iParam0, 13 ), 23, 0, 2221.10000000, 336.34000000, 16.20610000 );
            break;
            case 3:
            sub_197523( sub_214816( iParam0, 16 ), 23, 0, 2496.14100000, 262.97270000, 19.17490000 );
            sub_197523( sub_214816( iParam0, 18 ), 23, 0, 2495.05400000, 524.63290000, 19.17500000 );
            sub_197523( sub_214816( iParam0, 15 ), 23, 0, 2475.86200000, 301.28410000, 18.84560000 );
            sub_197523( sub_214816( iParam0, 18 ), 23, 0, 2400.56500000, 497.48360000, 11.76310000 );
            sub_197523( sub_214816( iParam0, 4 ), 23, 0, 2226.60800000, 670.32020000, 17.56400000 );
            sub_197523( sub_214816( iParam0, 17 ), 23, 0, 2271.92100000, 367.94520000, 11.30240000 );
            sub_197523( sub_214816( iParam0, 18 ), 23, 0, 2144.44900000, -24.75960000, 4.78480000 );
            sub_197523( sub_214816( iParam0, 14 ), 23, 0, 2081.51700000, 299.51680000, 18.72830000 );
            sub_197523( sub_214816( iParam0, 4 ), 23, 0, 2162.52500000, -144.77160000, 0.81190000 );
            sub_197523( sub_214816( iParam0, 18 ), 23, 0, 2300.15400000, 457.03760000, 20.82560000 );
            sub_197523( sub_214816( iParam0, 16 ), 23, 0, 2255.44700000, 641.09600000, 28.03690000 );
            sub_197523( sub_214816( iParam0, 13 ), 23, 0, 2221.10000000, 336.34000000, 16.20610000 );
            break;
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            sub_197523( sub_196481( iParam0, 2 ), 23, 0, 2496.14100000, 262.97270000, 19.17490000 );
            sub_197523( sub_196481( iParam0, 2 ), 23, 0, 2495.05400000, 524.63290000, 19.17500000 );
            sub_197523( sub_196481( iParam0, 2 ), 23, 0, 2475.86200000, 301.28410000, 18.84560000 );
            sub_197523( sub_196481( iParam0, 2 ), 23, 0, 2300.15400000, 457.03760000, 20.82560000 );
            sub_197523( sub_196481( iParam0, 2 ), 23, 0, 2255.44700000, 641.09600000, 28.03690000 );
            sub_197523( sub_196481( iParam0, 2 ), 23, 0, 2221.10000000, 336.34000000, 16.20610000 );
            sub_197523( sub_196481( iParam0, 2 ), 23, 0, 2144.44900000, -24.75960000, 4.78480000 );
            sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2400.56500000, 497.48360000, 11.76310000 );
            sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2226.60800000, 670.32020000, 17.56400000 );
            sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2271.92100000, 367.94520000, 11.30240000 );
            sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2081.51700000, 299.51680000, 18.72830000 );
            sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2162.52500000, -144.77160000, 0.81190000 );
            break;
            case 0:
            sub_197523( sub_214816( iParam0, 16 ), 23, 0, 2496.14100000, 262.97270000, 19.17490000 );
            sub_197523( sub_214816( iParam0, 18 ), 23, 0, 2495.05400000, 524.63290000, 19.17500000 );
            sub_197523( sub_214816( iParam0, 15 ), 23, 0, 2475.86200000, 301.28410000, 18.84560000 );
            sub_197523( sub_214816( iParam0, 14 ), 23, 0, 2400.56500000, 497.48360000, 11.76310000 );
            sub_197523( sub_214816( iParam0, 4 ), 23, 0, 2226.60800000, 670.32020000, 17.56400000 );
            sub_197523( sub_214816( iParam0, 17 ), 23, 0, 2271.92100000, 367.94520000, 11.30240000 );
            sub_197523( sub_214816( iParam0, 18 ), 23, 0, 2144.44900000, -24.75960000, 4.78480000 );
            sub_197523( sub_214816( iParam0, 14 ), 23, 0, 2081.51700000, 299.51680000, 18.72830000 );
            sub_197523( sub_214816( iParam0, 4 ), 23, 0, 2162.52500000, -144.77160000, 0.81190000 );
            sub_197523( sub_214816( iParam0, 18 ), 23, 0, 2300.15400000, 457.03760000, 20.82560000 );
            sub_197523( sub_214816( iParam0, 16 ), 23, 0, 2255.44700000, 641.09600000, 28.03690000 );
            sub_197523( sub_214816( iParam0, 13 ), 23, 0, 2221.10000000, 336.34000000, 16.20610000 );
            break;
        }
        sub_197523( sub_196481( iParam0, 2 ), 23, 0, 2317.90500000, 329.69690000, 5.06600000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 0, 2866.54300000, 508.55150000, 1.65040000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 0, 2072.46800000, 214.56050000, 4.13590000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 0, 2109.73600000, 489.69760000, 5.06970000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 0, 2306.59700000, -132.14930000, 4.64290000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 0, 2502.10200000, 773.94060000, 5.85290000 );
        sub_197523( sub_196481( iParam0, 1 ), 23, 0, 2224.67300000, 367.84590000, 6.48730000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2671.00600000, 413.67400000, 4.80730000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2461.13200000, 536.93120000, 4.80800000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2650.94000000, 418.67970000, 4.81010000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2686.67500000, 417.35640000, 4.81010000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2383.91500000, 818.95320000, 4.69180000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2105.38400000, 758.34510000, 5.18750000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2114.72600000, 621.97900000, 13.26840000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2129.51800000, 853.62900000, 4.79520000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2165.49500000, 108.62400000, 6.04650000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2528.82800000, -25.02580000, 1.29660000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2587.07200000, 633.25320000, 4.94170000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2198.40700000, 767.72470000, 4.80780000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2203.98000000, 641.39890000, 4.80770000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2353.54800000, 476.59460000, 5.07980000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2368.21600000, 388.24700000, 5.08010000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2319.91000000, 197.22250000, 4.80770000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2333.73500000, 148.69650000, 4.80790000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2557.88800000, 239.62330000, 4.80800000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2710.08600000, 314.00470000, 4.80770000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2228.30800000, 176.13570000, 5.19870000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2245.69600000, 500.61720000, 5.05280000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2259.13700000, 104.54260000, 4.80840000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2285.27800000, -55.55380000, 4.67750000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2305.14600000, 56.55230000, 4.97910000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2321.58600000, 557.50310000, 4.80860000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2334.85200000, 767.19410000, 5.24410000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2391.13000000, 10.69820000, 5.42070000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2433.09900000, 597.82450000, 4.80820000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2476.77500000, 131.73940000, 5.42150000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2544.68500000, 452.00130000, 4.80790000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2564.21000000, 341.32000000, 4.80810000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2666.22600000, 227.90200000, 4.43690000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2713.83100000, 548.19950000, 2.69650000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2787.18100000, 322.15160000, 1.65070000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 0, 2168.95200000, 448.73480000, 5.08070000 );
        break;
        case 12:
        sub_197523( sub_196481( iParam0, 0 ), 23, 4, 543.19990000, 1463.87700000, 9.40950000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 4, 451.35610000, 1568.25100000, 14.63540000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 482.39520000, 1621.94800000, 19.15470000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 18, 489.23400000, 1706.20300000, 31.47090000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 200, 382.52510000, 1763.86900000, 19.32180000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 90, 475.82240000, 1887.74300000, 23.83430000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 1, 710.07570000, 1920.23900000, 26.32070000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 60, 737.77040000, 1796.69200000, 38.42670000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 703.30250000, 1707.06200000, 35.42970000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 90, 877.66640000, 1594.83200000, 15.93270000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 18, 938.83550000, 1647.00600000, 36.20010000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 120, 1028.85700000, 1662.25600000, 15.19240000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 120, 1141.42700000, 1672.18500000, 16.12200000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 120, 1134.34400000, 1812.80000000, 9.31490000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 3, 1060.42200000, 1902.93300000, 13.20990000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 120, 1228.91500000, 1939.79000000, 11.30560000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 24, 1337.30400000, 1737.75800000, 14.25920000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 1, 1212.84100000, 1655.74700000, 15.66540000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 3, 1185.19300000, 1471.14700000, 15.68200000 );
        sub_197523( sub_196481( iParam0, 0 ), 23, 18, 1216.53900000, 1396.60700000, 33.50070000 );
        break;
    }
    return;
}

void sub_196481(int iParam0, int iParam1)
{
    int iVar4;

    if (iParam1 == 2)
    {
        iVar4 = sub_12313( iParam0->_fU60 / 2, iParam0->_fU60 );
    }
    else if (iParam1 == 1)
    {
        iVar4 = sub_12313( iParam0->_fU60 / 3, iParam0->_fU60 );
    }
    else
    {
        iVar4 = sub_12313( 0, iParam0->_fU60 );
    }
    iParam0->_fU60--;
    if ((iParam0->_fU0 > 0) AND (iVar4 < iParam0->_fU0))
    {
        iParam0->_fU0--;
        return 3;
    }
    else
    {
        iVar4 -= iParam0->_fU0;
    }
    if ((iParam0->_fU4 > 0) AND (iVar4 < iParam0->_fU4))
    {
        iParam0->_fU4--;
        return 1;
    }
    else
    {
        iVar4 -= iParam0->_fU4;
    }
    if ((iParam0->_fU8 > 0) AND (iVar4 < iParam0->_fU8))
    {
        iParam0->_fU8--;
        return 7;
    }
    else
    {
        iVar4 -= iParam0->_fU8;
    }
    if ((iParam0->_fU12 > 0) AND (iVar4 < iParam0->_fU12))
    {
        iParam0->_fU12--;
        return 9;
    }
    else
    {
        iVar4 -= iParam0->_fU12;
    }
    if ((iParam0->_fU16 > 0) AND (iVar4 < iParam0->_fU16))
    {
        iParam0->_fU16--;
        return 10;
    }
    else
    {
        iVar4 -= iParam0->_fU16;
    }
    if ((iParam0->_fU20 > 0) AND (iVar4 < iParam0->_fU20))
    {
        iParam0->_fU20--;
        return 11;
    }
    else
    {
        iVar4 -= iParam0->_fU20;
    }
    if ((iParam0->_fU24 > 0) AND (iVar4 < iParam0->_fU24))
    {
        iParam0->_fU24--;
        return 12;
    }
    else
    {
        iVar4 -= iParam0->_fU24;
    }
    if ((iParam0->_fU28 > 0) AND (iVar4 < iParam0->_fU28))
    {
        iParam0->_fU28--;
        return 13;
    }
    else
    {
        iVar4 -= iParam0->_fU28;
    }
    if ((iParam0->_fU32 > 0) AND (iVar4 < iParam0->_fU32))
    {
        iParam0->_fU32--;
        return 14;
    }
    else
    {
        iVar4 -= iParam0->_fU32;
    }
    if ((iParam0->_fU36 > 0) AND (iVar4 < iParam0->_fU36))
    {
        iParam0->_fU36--;
        return 15;
    }
    else
    {
        iVar4 -= iParam0->_fU36;
    }
    if ((iParam0->_fU40 > 0) AND (iVar4 < iParam0->_fU40))
    {
        iParam0->_fU40--;
        return 16;
    }
    else
    {
        iVar4 -= iParam0->_fU40;
    }
    if ((iParam0->_fU44 > 0) AND (iVar4 < iParam0->_fU44))
    {
        iParam0->_fU44--;
        return 17;
    }
    else
    {
        iVar4 -= iParam0->_fU44;
    }
    if ((iParam0->_fU48 > 0) AND (iVar4 < iParam0->_fU48))
    {
        iParam0->_fU48--;
        return 5;
    }
    else
    {
        iVar4 -= iParam0->_fU48;
    }
    if ((iParam0->_fU52 > 0) AND (iVar4 < iParam0->_fU52))
    {
        iParam0->_fU52--;
        return 4;
    }
    else
    {
        iVar4 -= iParam0->_fU52;
    }
    if ((iParam0->_fU56 > 0) AND (iVar4 < iParam0->_fU56))
    {
        iParam0->_fU56--;
        return 18;
    }
    else
    {
        iVar4 -= iParam0->_fU56;
    }
    PRINTSTRING( "SCRIPT creating default pickup\n" );
    return sub_129089( l_U1333, ref iVar4 );
}

void sub_197523(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;

    uVar8 = sub_129301( uParam0 );
    CREATE_PICKUP_WITH_AMMO( sub_51915( uParam0 ), uParam1, uVar8, uParam3, uParam4, uParam5, ref uVar9 );
    return;
}

int sub_214816(int iParam0, unknown uParam1)
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

void sub_227196(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_227196( 3 );
        sub_227196( 4 );
        sub_227196( 2 );
        sub_227196( 1 );
        sub_227196( 8 );
        sub_227196( 10 );
        sub_227196( 9 );
        break;
        case 1:
        sub_227383( -1082.58000000, -589.92300000, 2.87730000, 0 );
        sub_227383( -1079.22000000, 691.90000000, 7.50090000, 0 );
        sub_227383( -920.39610000, 938.02750000, 12.76070000, 0 );
        sub_227383( -1567.27000000, 941.01030000, 25.68270000, 0 );
        sub_227383( 64043, 701.22000000, 22.42860000, 0 );
        sub_227383( -1323.60000000, 1278.36900000, 22.37020000, 0 );
        sub_227383( -1193.08000000, 13.87000000, 3.14000000, 0 );
        sub_227383( -1255.63600000, 55.82830000, 1.26420000, 0 );
        sub_227383( -2071.77000000, -80.08610000, 5.61450000, 0 );
        sub_227383( -1465.90000000, 110.18730000, 6.24540000, 0 );
        sub_227383( -1559.25800000, 127.01540000, 7.63100000, 0 );
        sub_227383( -951.51540000, 1405.20800000, 24.68460000, 0 );
        sub_227383( -1164.97000000, 1835.70900000, 3.04650000, 0 );
        sub_227383( -1196.93000000, 1672.78800000, 33.55620000, 0 );
        sub_227383( -970.63300000, 1524.85900000, 24.56880000, 0 );
        sub_227383( -724.28700000, 1471.32700000, 0.50690000, 0 );
        sub_227383( -1095.44000000, 1258.74800000, 23.82480000, 0 );
        sub_227383( -808.51310000, 1205.92700000, 17.23890000, 0 );
        sub_227383( -1016.98000000, 1024.75100000, 12.58410000, 0 );
        sub_227383( -1476.12000000, 1047.32500000, 22.03400000, 0 );
        sub_227383( -1349.40600000, 890.07560000, 18.68600000, 0 );
        sub_227383( -891.21000000, 834.67030000, 10.81970000, 0 );
        sub_227383( -1276.65000000, 742.18080000, 18.50840000, 0 );
        sub_227383( -1093.82300000, 636.50060000, 7.50040000, 0 );
        sub_227383( -952.21400000, 453.59930000, 3.37230000, 0 );
        sub_227383( -1614.88000000, 692.08700000, 25.37530000, 0 );
        sub_227383( -1364.45300000, 529.74320000, 11.47960000, 0 );
        sub_227383( -1831.84000000, 353.82380000, 24.44420000, 0 );
        sub_227383( -1555.78000000, 244.76660000, 11.68150000, 0 );
        sub_227383( -1481.94000000, -52.40670000, 6.57460000, 0 );
        sub_227383( -1642.17700000, 411.90560000, 24.44660000, 0 );
        sub_227383( -1753.70000000, 133.09870000, 10.18720000, 0 );
        sub_227383( -2083.07000000, 44.87500000, 6.09800000, 0 );
        sub_227383( -1914.51000000, -459.40200000, 2.20900000, 0 );
        sub_227383( -1302.27000000, -293.68600000, 2.86500000, 0 );
        sub_227383( -2125.72000000, -334.55900000, 1.89970000, 0 );
        sub_227383( -1772.58700000, -493.29320000, 2.04540000, 0 );
        sub_227383( -1339.11000000, -460.88800000, 1.89670000, 0 );
        sub_227383( -1353.65000000, -652.83300000, 2.00130000, 0 );
        sub_227383( -1054.87000000, -220.68300000, 1.91890000, 0 );
        sub_227383( -1893.78400000, -689.18750000, 1.83760000, 0 );
        sub_227383( -1688.54000000, -284.52100000, 1.75160000, 0 );
        sub_227383( -1899.95500000, 186.60480000, 11.17900000, 0 );
        sub_227383( -1402.59400000, 318.49800000, 12.44940000, 0 );
        sub_227383( -1649.63000000, -109.38000000, 4.97830000, 0 );
        sub_227383( 64271, -119.28200000, 3.21980000, 0 );
        sub_227383( -950.78700000, 189.35060000, 3.38630000, 0 );
        sub_227383( -1103.30000000, 364.79940000, 3.93280000, 0 );
        sub_227383( -1260.66000000, 1262.14700000, 20.78200000, 0 );
        sub_227383( -1299.73000000, 1563.46800000, 24.92780000, 0 );
        sub_227383( -992.55200000, 1736.74700000, 19.51390000, 0 );
        sub_227383( -843.71400000, 1378.74200000, 22.17000000, 0 );
        sub_227383( -1469.02000000, 1166.59000000, 22.01500000, 0 );
        sub_227383( -865.23000000, 1632.13000000, 21.35100000, 0 );
        sub_227383( -1326.88000000, 1436.46600000, 19.48630000, 0 );
        sub_227383( -1727.85200000, 601.47620000, 26.72240000, 0 );
        sub_227383( -1539.30300000, 581.51720000, 22.71660000, 0 );
        sub_227383( -993.90200000, 878.20890000, 21.98560000, 0 );
        sub_227383( -987.99100000, 608.15440000, 3.07890000, 0 );
        sub_227383( -836.38240000, 1071.52500000, 12.89240000, 0 );
        sub_227383( -1107.43200000, 1081.79400000, 12.65270000, 0 );
        sub_227383( -1422.44200000, 883.12570000, 18.63140000, 0 );
        sub_227383( -1174.19000000, 825.98350000, 18.55790000, 0 );
        sub_227383( -1370.73000000, 765.73500000, 18.54570000, 0 );
        break;
        case 2:
        sub_227383( -10.97350000, -377.20400000, 11.08810000, 0 );
        sub_227383( -9.61210000, 1308.05700000, 19.36520000, 0 );
        sub_227383( -115.34640000, 1328.85600000, 19.42410000, 0 );
        sub_227383( 368.47270000, -506.45180000, 4.81800000, 0 );
        sub_227383( 59.36250000, 193.13060000, 13.75680000, 0 );
        sub_227383( -425.69900000, 1301.45000000, 16.42360000, 0 );
        sub_227383( -332.18480000, 1643.76200000, 19.32420000, 0 );
        sub_227383( -116.04090000, 472.16360000, 8.55910000, 0 );
        sub_227383( -182.25800000, -602.07800000, 4.62510000, 0 );
        sub_227383( -422.21900000, 975.72740000, 8.96360000, 0 );
        sub_227383( -169.52000000, 1619.20900000, 19.31360000, 0 );
        sub_227383( -337.38000000, 1431.45300000, 11.33620000, 0 );
        sub_227383( 38.98980000, 1476.07500000, 2.24340000, 0 );
        sub_227383( -583.78600000, 1318.30600000, 4.94080000, 0 );
        sub_227383( -522.12800000, 968.89150000, 7.55940000, 0 );
        sub_227383( -176.50500000, 1077.67300000, 5.62530000, 0 );
        sub_227383( -237.93970000, 795.71930000, 5.16030000, 0 );
        sub_227383( -291.31900000, 578.53360000, 13.81190000, 0 );
        sub_227383( -533.30600000, 720.84310000, 8.96150000, 0 );
        sub_227383( -3.24710000, 501.39350000, 14.76200000, 0 );
        sub_227383( 212.50730000, 485.59830000, 14.18730000, 0 );
        sub_227383( -461.07800000, 497.06880000, 8.85170000, 0 );
        sub_227383( 280.63320000, -16.08720000, 8.91760000, 0 );
        sub_227383( -220.32500000, 61.39090000, 13.73580000, 0 );
        sub_227383( 210.88160000, -409.88850000, 4.08210000, 0 );
        sub_227383( 336.21990000, -711.23500000, 3.69170000, 0 );
        sub_227383( 1.10720000, -659.54400000, 13.75730000, 0 );
        sub_227383( 33.32420000, -937.15120000, 3.73070000, 0 );
        sub_227383( -788.95600000, 65.67300000, 3.81230000, 0 );
        sub_227383( -172.94300000, 276.67700000, 13.81300000, 0 );
        sub_227383( -414.08900000, -12.61080000, 8.89340000, 0 );
        sub_227383( -120.07200000, 11.81670000, 13.78350000, 0 );
        sub_227383( -224.77030000, -776.26140000, 5.19630000, 0 );
        sub_227383( -15.78000000, -529.51000000, 13.75940000, 0 );
        sub_227383( 234.57330000, -817.85860000, 3.71030000, 0 );
        sub_227383( -403.72000000, -447.38000000, 3.90720000, 0 );
        sub_227383( 191.30000000, 1140.61000000, 12.25340000, 0 );
        sub_227383( -205.12000000, 655.88000000, 11.40410000, 0 );
        sub_227383( -70.67000000, 946.33000000, 13.71270000, 0 );
        sub_227383( 26.61870000, 850.50510000, 13.37200000, 0 );
        sub_227383( -503.30000000, 1438.90000000, 16.15650000, 0 );
        sub_227383( -159.18130000, 1749.72900000, 7.44090000, 0 );
        sub_227383( -542.30000000, 1655.60000000, 7.67680000, 0 );
        sub_227383( -22.57230000, 1484.23300000, 17.42510000, 0 );
        sub_227383( 77.60000000, 321.40000000, 13.75380000, 0 );
        sub_227383( -445.40000000, 277.50000000, 8.95640000, 0 );
        sub_227383( -566.39040000, 390.84450000, 5.66890000, 0 );
        sub_227383( 107.58140000, 511.61350000, 12.30150000, 0 );
        sub_227383( -279.59900000, 445.29140000, 13.80670000, 0 );
        sub_227383( -417.04700000, -192.86500000, 9.53930000, 0 );
        sub_227383( -62.12140000, -289.14320000, 13.67290000, 0 );
        sub_227383( 169.77020000, -210.08000000, 13.82100000, 0 );
        sub_227383( -139.74400000, 81.76500000, 13.76910000, 0 );
        break;
        case 3:
        sub_227383( 985.20790000, 1827.30400000, 19.11830000, 0 );
        sub_227383( 1376.28500000, 1702.27400000, 15.88180000, 0 );
        sub_227383( 431.74100000, 1837.92700000, 21.20530000, 0 );
        sub_227383( 473.20250000, 1738.35900000, 14.80350000, 0 );
        sub_227383( 575.78850000, 1394.91800000, 9.96000000, 0 );
        sub_227383( 735.74320000, 1739.91900000, 35.60130000, 0 );
        sub_227383( 760.78820000, 1551.94800000, 20.35010000, 0 );
        sub_227383( 855.19800000, 1676.97900000, 16.05410000, 0 );
        sub_227383( 1098.36200000, 1596.66300000, 15.71600000, 0 );
        sub_227383( 1121.77600000, 1941.30500000, 12.71010000, 0 );
        sub_227383( 1290.00000000, 1435.00000000, 15.77600000, 0 );
        sub_227383( 426.39460000, 1590.38900000, 15.41430000, 0 );
        sub_227383( 557.55070000, 1635.64200000, 28.19540000, 0 );
        sub_227383( 597.58230000, 1958.46700000, 24.62740000, 0 );
        sub_227383( 626.76930000, 1828.41200000, 32.17850000, 0 );
        sub_227383( 1211.36500000, 1783.27100000, 9.09560000, 0 );
        break;
        case 4:
        sub_227383( 849.04920000, 392.57780000, 5.25980000, 0 );
        sub_227383( 897.30000000, -134.00100000, 4.91160000, 0 );
        sub_227383( 1843.24500000, 478.55510000, 27.09130000, 0 );
        sub_227383( 1427.79200000, 750.85690000, 27.62330000, 0 );
        sub_227383( 1845.72700000, 691.03880000, 25.76730000, 0 );
        sub_227383( 2320.44800000, 639.43910000, 4.80790000, 0 );
        sub_227383( 1124.33600000, 638.38240000, 37.85270000, 0 );
        sub_227383( 1647.82000000, 413.06230000, 30.21460000, 0 );
        sub_227383( 2273.61400000, 300.40370000, 5.06670000, 0 );
        sub_227383( 1431.79400000, 120.04750000, 24.88300000, 0 );
        sub_227383( 1314.51800000, 378.05340000, 21.45560000, 0 );
        sub_227383( 2285.27900000, 82.34910000, 4.80670000, 0 );
        sub_227383( 822.00570000, 199.24160000, 5.03550000, 0 );
        sub_227383( 1114.99400000, 44.93610000, 33.00890000, 0 );
        sub_227383( 1350.45800000, -255.86600000, 22.22680000, 0 );
        sub_227383( 753.85080000, -126.41500000, 4.81920000, 0 );
        sub_227383( 1284.27200000, -530.17200000, 13.39630000, 0 );
        sub_227383( 897.30980000, -509.68100000, 13.97050000, 0 );
        sub_227383( 2007.46300000, 620.96670000, 17.05250000, 0 );
        sub_227383( 2816.66200000, 425.61220000, 4.66280000, 0 );
        sub_227383( 2423.13700000, 454.06130000, 5.08040000, 0 );
        sub_227383( 2558.74900000, 81.81350000, 2.25080000, 0 );
        sub_227383( 1178.18000000, 194.08300000, 31.44340000, 0 );
        sub_227383( 2164.44400000, 368.42870000, 5.22480000, 0 );
        sub_227383( 962.23500000, 7.45580000, 23.57960000, 0 );
        sub_227383( 1359.50400000, -766.54400000, 7.45460000, 0 );
        sub_227383( 1167.83600000, -206.77400000, 22.60170000, 0 );
        sub_227383( 953.22130000, -320.52070000, 18.35930000, 0 );
        sub_227383( 1292.54900000, 144.22570000, 30.95520000, 0 );
        sub_227383( 955.96320000, -698.10500000, 14.21530000, 0 );
        sub_227383( 1858.97600000, 155.32600000, 12.27220000, 0 );
        sub_227383( 1111.20400000, -445.82780000, 12.45870000, 0 );
        sub_227383( 862.01680000, 940.66060000, 5.55700000, 0 );
        sub_227383( 1224.95300000, 1020.87200000, 12.63250000, 0 );
        sub_227383( 1577.94500000, 917.15250000, 15.06920000, 0 );
        sub_227383( 1670.41200000, 587.83220000, 29.23680000, 0 );
        sub_227383( 971.84260000, 624.12060000, 25.02010000, 0 );
        sub_227383( 1428.84200000, 563.46970000, 28.29920000, 0 );
        sub_227383( 1805.79700000, 813.58000000, 15.60590000, 0 );
        sub_227383( 1155.96400000, 306.88730000, 28.83000000, 0 );
        sub_227383( 1232.60800000, 524.12710000, 29.82790000, 0 );
        sub_227383( 2164.51500000, 583.68770000, 7.91790000, 0 );
        sub_227383( 1938.77700000, 1013.43000000, 4.99250000, 0 );
        sub_227383( 2650.71700000, 436.45850000, 4.80730000, 0 );
        break;
        case 5:
        sub_227383( -1914.50800000, -459.40190000, 2.20900000, 0 );
        sub_227383( -1548.81300000, -379.02390000, 1.88280000, 0 );
        sub_227383( -1688.54300000, -284.52080000, 1.75160000, 0 );
        sub_227383( -1777.87900000, -488.62450000, 2.04560000, 0 );
        sub_227383( -1982.68200000, -669.87910000, -1.86090000, 0 );
        sub_227383( -1798.12800000, -265.92090000, 1.71460000, 0 );
        sub_227383( -1700.79700000, -646.17020000, 3.01050000, 0 );
        sub_227383( -1968.54500000, -157.59920000, 1.92120000, 0 );
        sub_227383( -1528.95300000, -203.94390000, 6.73590000, 0 );
        sub_227383( -2066.17100000, -491.69040000, 6.17790000, 0 );
        break;
        case 6:
        sub_227383( -1049.63700000, -408.73490000, 2.30340000, 0 );
        sub_227383( -1110.67500000, -376.49920000, 2.17920000, 0 );
        sub_227383( -1124.23100000, -493.61110000, 2.17880000, 0 );
        sub_227383( -1026.58300000, -337.07500000, 2.22100000, 0 );
        sub_227383( -988.55210000, -435.07680000, 2.18010000, 0 );
        break;
        case 7:
        sub_227383( -1097.62500000, 693.99500000, 7.50040000, 0 );
        sub_227383( -1193.08000000, 13.87000000, 3.14000000, 0 );
        sub_227383( -1261.21700000, 56.19870000, 1.26420000, 0 );
        sub_227383( -1094.18600000, 636.52230000, 7.50040000, 0 );
        sub_227383( -952.21400000, 453.59930000, 3.37230000, 0 );
        sub_227383( -1103.29800000, 364.79940000, 3.93280000, 0 );
        sub_227383( -1047.40800000, 496.42660000, 3.52310000, 0 );
        sub_227383( -915.68000000, 281.99980000, 3.37280000, 0 );
        sub_227383( -1139.59400000, 144.54840000, 3.23240000, 0 );
        sub_227383( -1237.53500000, 709.79410000, 15.03190000, 0 );
        break;
        case 8:
        sub_227383( -607.98380000, -784.81920000, 3.83910000, "GtaMloRoomstat" );
        sub_227383( -667.97770000, -861.82260000, 4.53750000, 0 );
        sub_227383( -530.56270000, -1068.54000000, 3.83770000, 0 );
        sub_227383( -551.27530000, -999.64890000, 4.50760000, 0 );
        sub_227383( -650.00980000, -927.17210000, 4.53750000, 0 );
        sub_227383( -571.05880000, -875.00630000, 4.53750000, 0 );
        break;
        case 9:
        sub_227383( 455.10250000, 289.51030000, 7.54850000, 0 );
        sub_227383( 497.60490000, 175.63860000, 7.60760000, 0 );
        sub_227383( 391.26350000, 159.72480000, 8.22000000, 0 );
        sub_227383( 458.29470000, 74.45450000, 7.75970000, 0 );
        sub_227383( 504.16430000, -38.34650000, 8.24790000, 0 );
        break;
        case 10:
        sub_227383( 630.54060000, 789.35520000, 1.75120000, 0 );
        sub_227383( 657.73490000, 627.96940000, 1.80270000, 0 );
        sub_227383( 589.79970000, 859.90220000, 1.72980000, 0 );
        sub_227383( 489.47380000, 775.80120000, 1.73470000, 0 );
        sub_227383( 463.83520000, 1001.07300000, 1.71820000, 0 );
        break;
        case 11:
        sub_227383( 2320.44800000, 639.43910000, 4.80790000, 0 );
        sub_227383( 2273.61400000, 300.40370000, 5.06670000, 0 );
        sub_227383( 2285.27900000, 82.34910000, 4.80670000, 0 );
        sub_227383( 2164.51500000, 583.68770000, 7.91790000, 0 );
        sub_227383( 2423.13700000, 454.06130000, 5.08040000, 0 );
        sub_227383( 2521.31400000, 282.07120000, 4.80810000, 0 );
        sub_227383( 2816.66200000, 425.61220000, 4.66280000, 0 );
        sub_227383( 2758.89000000, 243.54010000, 4.09000000, 0 );
        sub_227383( 2422.53800000, -55.49270000, 1.28210000, 0 );
        sub_227383( 2248.59500000, 365.22820000, 6.60060000, 0 );
        sub_227383( 2297.76700000, 479.05770000, 5.09200000, 0 );
        sub_227383( 2069.47800000, 876.38090000, 5.00420000, 0 );
        break;
        case 12: break;
    }
    return;
}

void sub_227383(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_232563(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_232563( 3 );
        sub_232563( 4 );
        sub_232563( 2 );
        sub_232563( 1 );
        sub_232563( 8 );
        sub_232563( 10 );
        sub_232563( 9 );
        break;
        case 1:
        sub_232748( -1718.95400000, 272.59700000, 21.06310000 );
        sub_232748( -1558.40700000, -347.78600000, 1.83750000 );
        sub_232748( -2032.20700000, -338.29010000, 3.40370000 );
        sub_232748( -1497.11800000, -277.73100000, 1.83720000 );
        sub_232748( -1890.49700000, -155.03050000, 1.62940000 );
        sub_232748( -968.86000000, 1895.05400000, 21.34030000 );
        sub_232748( -1426.40600000, 625.19100000, 18.56760000 );
        sub_232748( -1778.49400000, 575.95780000, 25.11940000 );
        sub_232748( -841.69900000, 1274.37700000, 19.07420000 );
        sub_232748( -1361.73600000, 1692.55300000, 26.82030000 );
        sub_232748( -1299.50400000, 944.35900000, 18.56750000 );
        sub_232748( -2048.42700000, 172.86300000, 11.03890000 );
        sub_232748( -906.84050000, 652.42870000, 3.07870000 );
        sub_232748( -1216.80800000, 520.21910000, 3.37300000 );
        sub_232748( -1137.69600000, 955.04820000, 18.54370000 );
        sub_232748( -1877.95700000, 39.63470000, 5.85340000 );
        sub_232748( -965.57110000, 1211.19600000, 23.50070000 );
        sub_232748( -1564.22100000, -657.89900000, 2.00330000 );
        sub_232748( -1279.09900000, 1141.62300000, 18.57790000 );
        sub_232748( -1145.68300000, 1414.96900000, 23.49580000 );
        sub_232748( -1314.08900000, 169.73720000, 4.48440000 );
        sub_232748( -2216.31900000, 17.23170000, 8.29650000 );
        sub_232748( -1428.38700000, 1536.52500000, 15.61980000 );
        sub_232748( -1145.53100000, -382.07540000, 2.00250000 );
        break;
        case 2:
        sub_232748( -29.20910000, -887.00800000, -0.45090000 );
        sub_232748( 75.40810000, 597.05240000, 13.71130000 );
        sub_232748( -669.07150000, 471.10110000, 4.08930000 );
        sub_232748( -333.98000000, 1.00280000, 13.75990000 );
        sub_232748( -107.44990000, 766.80530000, 14.34170000 );
        sub_232748( -695.45310000, 1080.60800000, 3.10370000 );
        sub_232748( -571.39000000, 1531.44100000, 9.00370000 );
        sub_232748( -786.58210000, 141.96640000, 4.02810000 );
        sub_232748( -577.03340000, -328.15240000, 5.25250000 );
        sub_232748( 195.12650000, -527.20640000, 8.06920000 );
        sub_232748( -17.15680000, 1637.60200000, 2.83590000 );
        sub_232748( 103.37410000, 985.66010000, 13.69870000 );
        sub_232748( -319.37050000, 322.75250000, 13.70020000 );
        sub_232748( -179.20000000, 1451.10000000, 17.44250000 );
        sub_232748( -201.20000000, 1195.80000000, 13.62270000 );
        sub_232748( 107.70000000, 1221.10000000, 14.64690000 );
        sub_232748( -97.06850000, -609.38450000, 13.75040000 );
        sub_232748( 101.10990000, 409.17060000, 13.68690000 );
        sub_232748( -278.16310000, -369.19700000, 7.67500000 );
        sub_232748( -305.64000000, 1040.30000000, 8.96630000 );
        sub_232748( -111.42050000, -200.32650000, 11.99290000 );
        sub_232748( 497.07030000, -504.54370000, 1.60350000 );
        sub_232748( 102.67930000, -607.23380000, 13.76920000 );
        sub_232748( 315.67560000, -324.14100000, 3.95050000 );
        sub_232748( -389.39000000, 837.89000000, 13.71340000 );
        sub_232748( -106.39930000, 203.62740000, 13.60360000 );
        sub_232748( -568.80000000, 607.20000000, 5.64580000 );
        sub_232748( -417.40330000, 1739.69600000, 8.25570000 );
        break;
        case 3:
        sub_232748( 796.30620000, 1334.91000000, 9.86140000 );
        sub_232748( 370.65720000, 1887.00100000, 16.77270000 );
        sub_232748( 697.33800000, 1680.40500000, 32.93620000 );
        sub_232748( 243.60000000, 1772.58000000, 2.80140000 );
        sub_232748( 312.37770000, 1470.59700000, 15.72370000 );
        sub_232748( 397.94990000, 2074.39100000, 5.69970000 );
        sub_232748( 927.07400000, 1487.15300000, 15.86160000 );
        sub_232748( 889.48640000, 1783.75300000, 16.08660000 );
        sub_232748( 1346.63400000, 1960.05400000, 3.98950000 );
        sub_232748( 1204.99800000, 1648.65000000, 15.65110000 );
        sub_232748( 810.81520000, 1924.86500000, 37.93350000 );
        sub_232748( 617.25540000, 1496.23200000, 14.61220000 );
        break;
        case 4:
        sub_232748( 1096.54700000, 434.62660000, 28.76790000 );
        sub_232748( 1345.71000000, -874.09570000, 7.33140000 );
        sub_232748( 1446.49700000, -280.27500000, 14.19040000 );
        sub_232748( 2232.70500000, 891.79740000, 4.52110000 );
        sub_232748( 863.99160000, 740.41190000, 6.89360000 );
        sub_232748( 960.07070000, -431.33360000, 14.74810000 );
        sub_232748( 1237.56000000, 374.40010000, 20.97390000 );
        sub_232748( 2072.80800000, 102.75570000, 11.02200000 );
        sub_232748( 1361.68500000, 1047.57500000, 2.85150000 );
        sub_232748( 1586.65500000, 769.30970000, 28.21990000 );
        sub_232748( 1947.36900000, 393.30340000, 17.58600000 );
        sub_232748( 1252.28100000, -44.77040000, 27.34600000 );
        sub_232748( 939.28130000, -944.10300000, 14.23400000 );
        sub_232748( 1985.70900000, 826.63180000, 8.39960000 );
        sub_232748( 1307.98300000, 688.87480000, 35.73690000 );
        sub_232748( 2259.19400000, 423.94070000, 4.90050000 );
        sub_232748( 1131.33700000, -656.75790000, 13.13440000 );
        sub_232748( 1238.09500000, -353.24500000, 20.54410000 );
        sub_232748( 1657.90500000, 230.22240000, 23.95760000 );
        sub_232748( 740.74340000, -346.01260000, 4.83660000 );
        sub_232748( 733.56430000, 39.98200000, 4.95960000 );
        sub_232748( 932.15970000, 331.24980000, 30.16300000 );
        sub_232748( 1120.70800000, 891.31850000, 30.66750000 );
        sub_232748( 2521.81800000, 283.11260000, 4.80830000 );
        sub_232748( 2248.01400000, -142.04390000, 3.50840000 );
        sub_232748( 2637.66500000, 661.69060000, 2.68950000 );
        break;
        case 5:
        sub_232748( -1523.98700000, -287.50570000, 1.83720000 );
        sub_232748( -2032.20700000, -338.29010000, 3.40370000 );
        sub_232748( -1872.50800000, -163.83990000, 1.62960000 );
        sub_232748( -1896.91900000, -685.48900000, 1.83760000 );
        sub_232748( -1564.22100000, -657.89900000, 2.00330000 );
        sub_232748( -2112.71200000, -345.95280000, 0.69400000 );
        sub_232748( -1919.93500000, -298.88310000, 1.62860000 );
        break;
        case 6:
        sub_232748( -1035.30200000, -442.65560000, 2.05650000 );
        sub_232748( -907.82110000, -397.02890000, 2.38210000 );
        sub_232748( -998.51530000, -371.81950000, 2.16980000 );
        sub_232748( -1137.87200000, -374.96680000, 2.19720000 );
        break;
        case 7:
        sub_232748( -1217.48000000, 520.46980000, 3.37300000 );
        sub_232748( -907.75400000, 653.17680000, 3.07870000 );
        sub_232748( -1242.38800000, 91.51820000, 1.95310000 );
        sub_232748( -987.99080000, 608.15440000, 3.07890000 );
        sub_232748( -1183.54400000, 638.71690000, 6.90310000 );
        sub_232748( -950.78660000, 189.35060000, 3.38630000 );
        sub_232748( -1006.53800000, 332.57090000, 3.50290000 );
        sub_232748( -1065.29000000, 37.07740000, 3.21560000 );
        break;
        case 8:
        sub_232748( -607.92130000, -700.26330000, 12.06720000 );
        sub_232748( -528.80470000, -856.73380000, 4.53700000 );
        sub_232748( -645.03030000, -662.14430000, 3.83730000 );
        sub_232748( -412.70370000, -953.45100000, 2.61640000 );
        break;
        case 9:
        sub_232748( 484.24000000, -72.80000000, 8.25100000 );
        sub_232748( 412.61980000, 360.87370000, 7.61400000 );
        sub_232748( 373.74930000, 282.45030000, 4.82410000 );
        sub_232748( 407.44830000, -14.76920000, 7.84100000 );
        sub_232748( 560.50710000, 306.40010000, 7.93160000 );
        sub_232748( 487.24870000, 260.93470000, 7.69720000 );
        break;
        case 10:
        sub_232748( 490.00890000, 861.95290000, 0.19100000 );
        sub_232748( 500.19900000, 1045.00200000, 1.71450000 );
        sub_232748( 608.98120000, 725.17330000, 1.78680000 );
        sub_232748( 678.13100000, 872.69980000, 1.97390000 );
        sub_232748( 669.12870000, 983.03940000, 1.71650000 );
        sub_232748( 555.09680000, 646.18850000, 2.55930000 );
        sub_232748( 624.75300000, 1077.76800000, 1.79640000 );
        sub_232748( 397.25320000, 1082.47400000, 1.71530000 );
        break;
        case 11:
        sub_232748( 2072.80800000, 102.75570000, 11.02200000 );
        sub_232748( 2232.70500000, 891.79740000, 4.52110000 );
        sub_232748( 2247.87500000, -142.09800000, 3.50940000 );
        sub_232748( 2259.19400000, 423.94070000, 4.90050000 );
        sub_232748( 2142.46100000, 185.46280000, 4.81090000 );
        sub_232748( 2152.84400000, 341.89890000, 3.75030000 );
        sub_232748( 2558.74900000, 81.81350000, 2.25080000 );
        sub_232748( 2640.09500000, 663.64870000, 2.44290000 );
        sub_232748( 2619.64200000, 417.33540000, 4.93810000 );
        sub_232748( 2520.63000000, 612.33400000, 5.52400000 );
        sub_232748( 2422.20300000, 339.38180000, 5.08030000 );
        sub_232748( 2335.49600000, 499.03240000, 5.07800000 );
        break;
        case 12: break;
    }
    return;
}

void sub_232748(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    CREATE_PICKUP( -1758615024, 23, uParam0, uParam1, uParam2, ref uVar5, 0 );
    return;
}

void sub_235777()
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

void sub_235858(unknown uParam0)
{
    unknown uVar3;

    switch (uParam0)
    {
        case 0:
        sub_235858( 1 );
        sub_235858( 2 );
        sub_235858( 4 );
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

vector sub_236394()
{
    switch (l_U1516._fU620[0])
    {
        case 1: return sub_17645( 7 );
        case 4: return sub_17645( 2 );
        case 2: return sub_17645( 4 );
        case 3: return sub_17645( 0 );
    }
    return vector( 0.00000000, 0.00000000, 0.00000000);
}

void sub_236547(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (IS_CHAR_IN_ANY_CAR( uParam0 ))
    {
        WARP_CHAR_FROM_CAR_TO_COORD( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8 );
    }
    SET_CHAR_COORDINATES( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8 );
    return;
}

