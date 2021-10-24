cmake_minimum_required(VERSION 3.16)

project(matrixLib)

set(CMAKE_CXX_STANDARD 17)

include_directories(include_matrix)

add_library(matrixLib STATIC src_matrix/matrixLib.cpp)