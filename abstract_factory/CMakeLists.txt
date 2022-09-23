cmake_minimum_required(VERSION 3.10)

project(abstract_factory)

file(GLOB ORIGIN_SRC ./origin/*.h ./origin/*.cpp)
file(GLOB REFACTOR_SRC ./refactor/*.h ./refactor/*.cpp)

add_executable(abstract_factory_origin ${ORIGIN_SRC})
add_executable(abstract_factory_refactor ${REFACTOR_SRC})