#!/bin/sh
brew cask install dotnet-sdk
git clone https://github.com/shimat/opencvsharp.git
cd opencvsharp
git fetch --all --tags --prune && git checkout  4.1.0.20190417
mkdir build
cd build
cmake -DCMAKE_INSTALL_PREFIX=../../../c++/build/opencv -DOpenCV_DIR=../../../c++/build/opencv/lib/cmake/opencv4 ../src
