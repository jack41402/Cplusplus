cmake_minimum_required(VERSION 3.24)
project(B)

set(CMAKE_CXX_STANDARD 20)

add_executable(B main.cpp version2.cpp)

add_executable(version2 version2.cpp)