cmake_minimum_required(VERSION 4.2)

project(cpp_practice)

add_executable(${PROJECT_NAME} src/main.cpp src/Math.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE include)



