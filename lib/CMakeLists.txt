cmake_minimum_required(VERSION 3.10)
project(datastructure)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(datastructure)
add_subdirectory(sort)
add_subdirectory(search)

target_include_directories(datastructure PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})