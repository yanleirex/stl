cmake_minimum_required(VERSION 3.0)
project(stl)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

add_subdirectory(algo)
add_subdirectory(io)
add_subdirectory(cont)

