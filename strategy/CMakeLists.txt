cmake_minimum_required(VERSION 3.10)

project(strategy)

file(GLOB ORIGIN_SRC ./origin/*.h ./origin/*.cpp)
file(GLOB REFACTOR_SRC ./refactor/*.h ./refactor/*.cpp)

add_executable(strategy_origin ${ORIGIN_SRC})
add_executable(strategy_refactor ${REFACTOR_SRC})