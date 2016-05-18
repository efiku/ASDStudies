cmake_minimum_required(VERSION 2.7)
project(asd)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main/main.cpp src/algorytmy.h src/algorytmy.cpp src/algorytmy.cpp src/algorytmy.h)
add_executable(asd ${SOURCE_FILES})