cmake_minimum_required(VERSION 3.10)

project(chain_of_responsibility)

file(GLOB ORIGIN_SRC ./origin/*.h ./origin/*.cpp)
file(GLOB REFACTOR_SRC ./refactor/*.h ./refactor/*.cpp)

add_executable(chain_of_responsibility_origin ${ORIGIN_SRC})
add_executable(chain_of_responsibility_refactor ${REFACTOR_SRC})