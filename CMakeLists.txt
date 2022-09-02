cmake_minimum_required(VERSION 3.23)
project(RubiksCube)

set(CMAKE_CXX_STANDARD 14)

add_executable(RubiksCube main.cpp RubiksCube.cpp RubiksCube.h RubiksCube3dArray.cpp RubiksCube1dArray.cpp RubiksCubeBitboard.cpp DFSSolver.h BFSSolver.h IDDFSSolver.h)
