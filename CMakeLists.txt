cmake_minimum_required(VERSION 3.19)
project(GraphProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(GraphProject main.cpp GraphUtils.h GraphUtils.cpp TransformFormat.h TransformFormat.cpp)