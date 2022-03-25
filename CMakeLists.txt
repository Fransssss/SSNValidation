cmake_minimum_required(VERSION 3.21)
project(CheckSSN)

set(CMAKE_CXX_STANDARD 14)

add_executable(CheckSSN main.cpp ValidSSN.cpp ValidSSN.h)
