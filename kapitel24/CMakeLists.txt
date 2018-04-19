cmake_minimum_required(VERSION 3.8)
project(kapitel24)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Stack.cpp Stack.h)
add_executable(kapitel24 ${SOURCE_FILES})