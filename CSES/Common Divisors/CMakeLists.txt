cmake_minimum_required(VERSION 3.24)
project(Common_Divisors_)

set(CMAKE_CXX_STANDARD 20)

add_executable(Common_Divisors_ main.cpp enumeration.cpp)

add_executable(enumeration enumeration.cpp)