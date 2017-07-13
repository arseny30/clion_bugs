cmake_minimum_required(VERSION 3.0.2)

project(clion_bugs)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

add_executable(clion_bugs clion_bugs.cpp clion_bugs.h)
