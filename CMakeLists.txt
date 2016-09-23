cmake_minimum_required(VERSION 2.8)
project(CMakeCI-example)

# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

enable_testing()

add_subdirectory(src)
add_subdirectory(test)
