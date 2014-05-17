comment * ---------------------------------------------
    if exist "Console.obj" del "Console.obj"
    if exist "Console.exe" del "Console.exe"

    \masm32\bin\ml /c /coff "Win32.asm"

    \masm32\bin\PoLink /SUBSYSTEM:CONSOLE "Win32.obj"
----------------------------------------------------- *

    .486
    .model flat, stdcall
    option casemap :none   ; case sensitive

; head files

    include \masm32\include\windows.inc
    include \masm32\include\masm32.inc
    include \masm32\include\kernel32.inc
    include \masm32\macros\macros.asm

    includelib \masm32\lib\masm32.lib
    includelib \masm32\lib\kernel32.lib

    .code

start:

; entrance

    print "Hello world"

    exit

; return

end start
