@ECHO OFF
CLS

set hdir=C:\fivetech\Hb1110
set bcdir=C:\bcc582\bin
set fwhdir=C:\fivetech\FWH1109

SET CFLAGS=-5 -6 -OS -a8 -DHB_FM_STATISTICS_OFF

%hdir%\bin\harbour TFILEXLS.PRG /n /i%fwhdir%\include;%hdir%\include /o..\OBJ\TFILEXLS.C
%hdir%\bin\harbour XLSERROR.PRG /n /i%fwhdir%\include;%hdir%\include /o..\OBJ\XLSERROR.C
%hdir%\bin\harbour XLSFUNC.PRG /n /i%fwhdir%\include;%hdir%\include  /o..\OBJ\XLSFUNC.C

rem INICIO Modulos C Generados por xHarbour !!!

%bcdir%\bcc32 -M -c -D__HARBOUR__ -I%hdir%\include  -o..\OBJ\TFILEXLS.OBJ  ..\OBJ\TFILEXLS.C
@del ..\OBJ\TFILEXLS.c
%bcdir%\bcc32 -M -c -D__HARBOUR__ -I%hdir%\include  -o..\OBJ\XLSERROR.OBJ  ..\OBJ\XLSERROR.C
@del ..\OBJ\XLSERROR.c
%bcdir%\bcc32 -M -c -D__HARBOUR__ -I%hdir%\include  -o..\OBJ\XLSFUNC.OBJ   ..\OBJ\XLSFUNC.C
@del ..\OBJ\XLSFUNC.c


@del .\FILEXLS.LIB

%bcdir%\tlib .\FILEXLS.LIB + ..\OBJ\TFILEXLS.OBJ
%bcdir%\tlib .\FILEXLS.LIB + ..\OBJ\XLSERROR.OBJ
%bcdir%\tlib .\FILEXLS.LIB + ..\OBJ\XLSFUNC.OBJ

@del .\FILEXLS.BAK