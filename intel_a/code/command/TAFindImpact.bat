@echo off

setlocal

rem -------------------------------------------------------------------------------------
rem   SHELL DE LANCEMENT DE LA COMMANDE UTILISATEUR  -->   " TAFindImpactM "
rem -------------------------------------------------------------------------------------

set CMD_NAME=FindImpactM

set Path=%Path%;%MkmkSHLIB_PATH%


if DEFINED _DEBUG_ (call devenv) ELSE call %CMD_NAME% %*
