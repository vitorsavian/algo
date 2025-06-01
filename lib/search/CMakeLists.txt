cmake_minimum_required(VERSION 3.10)
project(search)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(search STATIC
    binary_search.cpp
    binary_search.hpp
)

target_include_directories(search PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})