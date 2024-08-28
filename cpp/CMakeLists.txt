cmake_minimum_required(VERSION 3.10)
project(algoCpp)

# set(CMAKE_CXX_STANDARD 18)
# set(CMAKE_CXX_STANDARD_REQUIRED true)

file(GLOB_RECURSE SOURCES "src/**/*.cpp")
file(GLOB_RECURSE HEADERS "src/**/*.h")

add_executable(algoCpp main.cpp)

include_directories(${CMAKE_SOURCE_DIR}/src)

add_library(binarysearch STATIC src/binarysearch/binarysearch.cpp
        src/binarysearch/binarysearch.h)

add_library(linked_list STATIC src/linked_list/linked_list.cpp
        src/linked_list/linked_list_test.cpp)

target_include_directories(binarysearch PUBLIC ${CMAKE_SOURCE_DIR}/src/binarysearch)
target_include_directories(linked_list PUBLIC ${CMAKE_SOURCE_DIR}/src/linked_list)

target_link_libraries(algoCpp PRIVATE linked_list binarysearch)