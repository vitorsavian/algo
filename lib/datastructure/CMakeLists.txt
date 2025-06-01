cmake_minimum_required(VERSION 3.10)
project(datastructure)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(datastructure STATIC
    list.cpp
    list.hpp
    node.cpp
    node.hpp
    queue.cpp
    queue.hpp
    stack.cpp
    stack.hpp
)

target_include_directories(datastructure PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})