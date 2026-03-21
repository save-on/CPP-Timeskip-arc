cmake_minimum_required(VERSION 4.2)

project(cpp_practice)

add_executable(
    ${PROJECT_NAME} 
    src/material/references_to_const.cpp 
    src/material/pointers_and_const.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE include)



