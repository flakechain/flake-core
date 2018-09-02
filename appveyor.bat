echo AppVeyor Build
PATH C:\msys64\%MSYSTEM%\bin;C:\msys64\usr\bin;%PATH%
bash -lc "pacman --noconfirm --sync --refresh --refresh pacman"
bash -lc "pacman --noconfirm --sync --refresh --refresh --sysupgrade --sysupgrade"
bash -lc "pacman --noconfirm -S --needed mingw-w64-x86_64-toolchain make mingw-w64-x86_64-cmake mingw-w64-x86_64-boost mingw-w64-x86_64-openssl mingw-w64-x86_64-zeromq mingw-w64-x86_64-libsodium"
cd %APPVEYOR_BUILD_FOLDER%
set CHERE_INVOKING=yes
bash -lc "set pwd"
bash -lc "env"
bash -lc "make release-static-win64"