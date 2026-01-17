@echo off
cd %~dp0
:start
echo SC-CL MD_Verification.c
echo Press ENTER to launch
pause > nul
cls
"../../bin/SC-CL.exe" -platform=X360 -target=GTAIV -O3 -out-dir="../../SCO_OUT/" MD_Verification.c -- -I "inc/"
goto start
