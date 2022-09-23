cmake_minimum_required(VERSION 3.10)

project(composite)

file(GLOB ORIGIN_SRC ./origin/*.h ./origin/*.cpp)
file(GLOB REFACTOR_SRC ./refactor/*.h ./refactor/*.cpp)

add_executable(composite_origin ${ORIGIN_SRC})
add_executable(composite_refactor ${REFACTOR_SRC})