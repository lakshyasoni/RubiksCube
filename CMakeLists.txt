cmake_minimum_required(VERSION 3.23)
project(RubiksCube)

set(CMAKE_CXX_STANDARD 14)

add_executable(RubiksCube main.cpp GenericRubiksCube.cpp GenericRubiksCube.h)
