
RMDIR ..\build /Q /S
MKDIR ..\build
CD ..\build

CMAKE -DCMAKE_INSTALL_PREFIX=%CD%\..\src -G"NMake Makefiles" ..\src
NMAKE
NMAKE INSTALL

CD ..\src
