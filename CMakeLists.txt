cmake_minimum_required(VERSION 3.26)
project(cpplearning)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpplearning main.cpp
        basics/Variables.h
        basics/Operators.h
        basics/StringFunctions.h
        basics/Mathematics.h
        basics/Conditions.h
        basics/Loops.h
        basics/Arrays.h
)
