@echo off
cd %~dp0
:start
echo SC-CL modscript.c
echo Press ENTER to launch
pause > nul
cls
"../../bin/SC-CL.exe" -platform=X360 -target=GTAIV -O3 -out-dir="../../SCO_OUT/" modscript.c -- -I "inc/"
goto start
