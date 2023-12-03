cmake_minimum_required(VERSION 3.13)

set(PROJECT_NAME test_project)
project(${PROJECT_NAME} VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(math)

add_executable(${PROJECT_NAME} 
    main.cc
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    pthread
    math_lib    
)