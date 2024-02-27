cmake_minimum_required(VERSION 3.27)
project(ObjectShowcase)

set(CMAKE_CXX_STANDARD 20)

add_executable(ObjectShowcase src/main.cpp
        src/FunctionProgram.h
        src/FunctionProgram.cpp
        src/ClassBasedProgram/ClassProgram.h
        src/ClassBasedProgram/ClassProgram.cpp
        src/ClassBasedProgram/Objects.h
        src/ClassBasedProgram/Objects.cpp)
