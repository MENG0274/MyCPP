cmake_minimum_required(VERSION 3.28)
project(CPP)

set(CMAKE_CXX_STANDARD 17)

add_executable(CPP main.cpp
        absmath.cpp
        absmath.h
        Person.cpp
        Person.h)
