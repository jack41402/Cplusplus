cmake_minimum_required(VERSION 3.23)
project(74)

set(CMAKE_CXX_STANDARD 14)

add_executable(74 main.cpp optimize.cpp)

add_executable(optimize optimize.cpp)