Si usted está usando el IDE CLion en Linux, Windows o MacOS.

Haga lo siguiente si desea agregarle FLAGS al compilador g++, en el IDDE diríjase a:
File -> Settings -> Build, Execution... -> Toolchains -> CMake

Agregue y seleccione las siguientes opciones:

Name >>> Debug


Build type >>> Defauld


Toolchain >>> Defauld


Generator >>> Let CMake decide


CMake options >>> -G Ninja -DCMAKE_CXX_FLAGS="-std=c++17 -march=native -O3 -Wall -pedantic -Werror -Weffc++ -Wno-sign-conversion -Wvla -DDEBUG -DLOCAL"

Ese comando extenso establece banderas de compilacion al compilador CMake de C++ puede editarlo a su gusto.

Att.
josuerom
