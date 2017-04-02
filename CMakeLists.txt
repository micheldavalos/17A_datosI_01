cmake_minimum_required(VERSION 3.7)
project(actividad01)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Fecha.h Usuario.h Menu.cpp Menu.h arreglo.h)
add_executable(actividad01 ${SOURCE_FILES})