cmake_minimum_required(VERSION 3.13)

set(PROJECT_NAME math_lib)
project(${PROJECT_NAME} VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)

add_library(${PROJECT_NAME} 
    src/addition.cc
    src/subtraction.cc
)

target_include_directories(${PROJECT_NAME} PUBLIC
    include   
)