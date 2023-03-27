cmake_minimum_required(VERSION 3.24)
project(D)

set(CMAKE_CXX_STANDARD 20)

add_executable(D main.cpp dp.cpp dp2.cpp)

add_executable(dp dp.cpp)
add_executable(dp2 dp2.cpp)
add_executable(main main.cpp)