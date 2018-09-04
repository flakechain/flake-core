echo AppVeyor Build
PATH C:\msys64\%MSYSTEM%\bin;C:\msys64\usr\bin;%PATH%
bash -lc "pacman --noconfirm --sync --refresh --refresh pacman"
bash -lc "pacman --noconfirm --sync --refresh --refresh --sysupgrade --sysupgrade"
bash -lc "pacman --noconfirm -S --needed mingw-w64-x86_64-toolchain make mingw-w64-x86_64-cmake mingw-w64-x86_64-boost mingw-w64-x86_64-openssl mingw-w64-x86_64-zeromq mingw-w64-x86_64-libsodium"
echo MSYS64 Files
cd C:\msys64\
dir
echo Patching
curl https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win64/Personal%20Builds/mingw-builds/7.3.0/threads-posix/seh/x86_64-7.3.0-release-posix-seh-rt_v5-rev0.7z --output x86_64-7.3.0-release-posix-seh-rt_v5-rev0.7z
echo Extracting
7z e x86_64-7.3.0-release-posix-seh-rt_v5-rev0.7z
echo Patched files
dir
cd %APPVEYOR_BUILD_FOLDER%
set CHERE_INVOKING=yes
bash -lc "set pwd"
bash -lc "env"
bash -lc "make release-static-win64"
cd build\release\bin
mkdir flakechain-windows-%APPVEYOR_BUILD_NUMBER%
copy *.exe flakechain-windows-%APPVEYOR_BUILD_NUMBER%
7z a flakechain-windows-%APPVEYOR_BUILD_NUMBER%.zip flakechain-windows-%APPVEYOR_BUILD_NUMBER%