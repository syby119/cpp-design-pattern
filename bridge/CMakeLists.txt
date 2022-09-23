cmake_minimum_required(VERSION 3.10)

project(bridge)

file(GLOB ORIGIN_SRC ./origin/*.h ./origin/*.cpp)
file(GLOB REFACTOR_SRC ./refactor/*.h ./refactor/*.cpp)

add_executable(bridge_origin ${ORIGIN_SRC})
add_executable(bridge_refactor ${REFACTOR_SRC})