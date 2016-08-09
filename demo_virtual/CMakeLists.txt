cmake_minimum_required(VERSION 3.5)
project(my_virtual)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Coordinate.cpp Coordinate.h Shape.cpp Shape.h Circle.cpp Circle.h Rect.cpp Rect.h)
add_executable(my_virtual ${SOURCE_FILES})