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
        basics/Structures.h
        basics/Pointers.h
        basics/Functions.h
        oop/UserClass.h
        oop/AccessModifiers.h
        oop/encapsulation/Encapsulation.h
        oop/inheritance/Vehicle.h
        oop/inheritance/Car.h
        oop/inheritance/Audi.h
        oop/inheritance/Tesla.h
        oop/polymorphism/Animal.h
        oop/polymorphism/Cat.h
        oop/polymorphism/Dog.h
        oop/abstraction/Shape.h
        oop/abstraction/Rectangle.h
        oop/abstraction/Triangle.h
        files/FileManagement.h
)
