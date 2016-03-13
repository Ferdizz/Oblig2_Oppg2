cmake_minimum_required(VERSION 3.3)
project(Oblig2_Oppg2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp PriorityQueue.cpp PriorityQueue.h)
add_executable(Oblig2_Oppg2 ${SOURCE_FILES})