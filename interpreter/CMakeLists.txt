cmake_minimum_required(VERSION 3.10)

project(interpreter)

file(GLOB SRC *.h *.cpp)

add_executable(interpreter ${SRC})