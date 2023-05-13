cmake_minimum_required(VERSION 3.25)
project(codeforces)

set(CMAKE_CXX_STANDARD 20)

include_directories(solutions)

add_executable(codeforces solutions/ solutions/1367B_Even_Array.cpp)
