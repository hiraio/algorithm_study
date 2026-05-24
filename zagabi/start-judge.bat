@echo off
cd /d "%~dp0"
set HOST=127.0.0.1
set PORT=12014
echo.
echo === zagabi judge server ===
echo http://%HOST%:%PORT%
echo (Ctrl+C to stop)
echo.
npm start
pause
