echo MSYS64 Files
cd C:\msys64\
dir
echo Patching
curl "https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win64/Personal%20Builds/mingw-builds/7.3.0/threads-posix/seh/x86_64-7.3.0-release-posix-seh-rt_v5-rev0.7z/download"
echo Extracting
7z e x86_64-7.3.0-release-posix-seh-rt_v5-rev0.7z
echo Patched files
dir