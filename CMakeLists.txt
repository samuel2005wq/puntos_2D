cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto
project(Puntos_2D)

# Habilita todas las advertencias del compilador
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Archivos fuente
add_executable(programa main.cpp point2d.cpp)