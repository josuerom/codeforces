Si usted está usando el IDE CLion en Linux, Windows o MacOS.

Haga lo siguiente si desea agregarle FLAGS al compilador g++, en el IDDE diríjase a:
File -> Settings -> Build, Execution... -> Toolchains -> CMake

Agregue y seleccione las siguientes opciones:

Name >>> Debug


Build type >>> Defauld


Toolchain >>> Defauld


Generator >>> Let CMake decide


CMake options >>> -DCMAKE_CXX_COMPILER=/usr/bin/g++ -DCMAKE_BUILD_TYPE=Debug -DCMAKE_CXX_FLAGS="-std=c++17 -march=native -Djosuerom -D_2BITS -Wall -Wextra -pedantic -Werror -Weffc++ -Wl,stack=268435456 -Wno-sign-conversion -Wvla -D_GLIBCXX_DEBUG_PEDANTIC"

Ese comando extenso establece banderas de compilacion al compilador CMake de C++ puede editarlo a su gusto.

Att.
josuerom
