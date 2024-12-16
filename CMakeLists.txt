cmake_minimum_required(VERSION 3.22)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)

project(HyperStoneChallenge)
add_subdirectory(src/01)
add_subdirectory(src/02)
add_subdirectory(src/03)