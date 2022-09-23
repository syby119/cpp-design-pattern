cmake_minimum_required(VERSION 3.10)

project(visitor)

file(GLOB ORIGIN_SRC ./origin/*.h ./origin/*.cpp)
file(GLOB REFACTOR_SRC ./refactor/*.h ./refactor/*.cpp)

add_executable(visitor_origin ${ORIGIN_SRC})
add_executable(visitor_refactor ${REFACTOR_SRC})