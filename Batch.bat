@echo off

:: 启动命令处理器扩展名 启动延缓环境变量扩展名
setlocal ENABLEEXTENSIONS ENABLEDELAYEDEXPANSION

:: 双脱字符的功用
echo Hi there^^!

:: 如果是从图形界面（相对于命令行）启动的，则暂停
echo %cmdcmdline% | find "%~0" > nul
if %errorlevel% EQU 0 pause

::
echo %cmdcmdline% | findstr /c:"%~n0" > nul
if %errorlevel% EQU 0 pause
