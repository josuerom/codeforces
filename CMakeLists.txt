cmake_minimum_required(VERSION 3.26)
project(CF)

set(CMAKE_CXX_STANDARD 17)

add_compile_options(
        -std=c++17                      # Estándar C++17 para compilación
        -march=native                   # Genera código específico para la arquitectura del la maquina
        -Wall                           # Todas las advertencias habilitadas
        -Wextra                         # Advertencias adicionales habilitadas
        -Wvla                           # Advertencias relacionadas con el uso del container vector
        -pedantic                       #  Habilita advertencias adicionales relacionadas con el cumplimiento estricto del estándar del lenguaje
        -Djosuerom                      # Define la macro "josuerom" en compilación
        -D_2BITS                        # Define la macro "_2BITS" en compilación
        -Wl,stack=268435456             # Establece el tamaño de la pila del programa en 256 MB
        -Wno-sign-conversion            # Desactiva advertencias específicas relacionadas con conversiones entre tipos con y sin signo
        -fsanitize=undefined,address    # Habilita la instrumentación para la detección de errores durante el tiempo de ejecución
        -D_GLIBCXX_DEBUG_PEDANTIC       # Macro para habilitar comprobaciones de contenedores más estrictas
)

add_executable(CF )
