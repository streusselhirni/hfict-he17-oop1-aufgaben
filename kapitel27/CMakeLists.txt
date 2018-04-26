cmake_minimum_required(VERSION 3.8)
project(kapitel27)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp MyStatic.cpp MyStatic.h)
add_executable(kapitel27 ${SOURCE_FILES})