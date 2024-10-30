cmake_minimum_required(VERSION 3.29)
project(plaginProject)

set(CMAKE_CXX_STANDARD 20)

add_executable(plaginProject src/main.cpp
        src/CppTemplateGenerator.cpp
        src/CppTemplateGenerator.h
)
