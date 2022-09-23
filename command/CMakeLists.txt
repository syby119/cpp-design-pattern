cmake_minimum_required(VERSION 3.10)

project(command)

file(GLOB ORIGIN_SRC ./origin/*.h ./origin/*.cpp)
file(GLOB REFACTOR_SRC ./refactor/*.h ./refactor/*.cpp)

add_executable(command_origin ${ORIGIN_SRC})
add_executable(command_refactor ${REFACTOR_SRC})