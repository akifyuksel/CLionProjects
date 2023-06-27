cmake_minimum_required(VERSION 3.25)
project(playground)

set(CMAKE_CXX_STANDARD 20)

add_executable(playground main.cpp cmake-build-debug/AString.cpp cmake-build-debug/AString.h)
