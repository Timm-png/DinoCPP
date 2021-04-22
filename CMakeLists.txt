cmake_minimum_required(VERSION 3.17)
project(DinoCPP)

add_executable(DinoCPP main.cpp)

target_link_libraries(DinoCPP sfml-graphics sfml-window sfml-system)

set(EXECUTABLE_OUTPUT_PATH "..")