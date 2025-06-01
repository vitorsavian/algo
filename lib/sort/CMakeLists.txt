cmake_minimum_required(VERSION 3.10)
project(sort)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(sort STATIC
    quicksort.cpp
    quicksort.hpp
)

target_include_directories(sort PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})