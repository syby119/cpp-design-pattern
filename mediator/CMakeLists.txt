cmake_minimum_required(VERSION 3.10)

project(mediator)

file(GLOB ORIGIN_SRC ./origin/*.h ./origin/*.cpp)
file(GLOB REFACTOR_SRC ./refactor/*.h ./refactor/*.cpp)

add_executable(mediator_origin ${ORIGIN_SRC})
add_executable(mediator_refactor ${REFACTOR_SRC})