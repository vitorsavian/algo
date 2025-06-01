cmake_minimum_required(VERSION 3.10)
project(tests)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# # Inclui as libs (garanta que os caminhos estejam corretos)
add_subdirectory(${CMAKE_SOURCE_DIR}/../lib/datastructure ${CMAKE_BINARY_DIR}/datastructure)
add_subdirectory(${CMAKE_SOURCE_DIR}/../lib/search ${CMAKE_BINARY_DIR}/search)
add_subdirectory(${CMAKE_SOURCE_DIR}/../lib/sort ${CMAKE_BINARY_DIR}/sort)

# Cria o executável dos testes a partir do main.cpp dos testes
add_executable(tests_main main.cpp)

# Linka com as bibliotecas
target_link_libraries(tests_main PRIVATE datastructure search sort)

# Adiciona os diretórios de include das libs, se necessário
target_include_directories(tests_main PRIVATE
    ${CMAKE_SOURCE_DIR}/../lib/datastructure
    ${CMAKE_SOURCE_DIR}/../lib/search
    ${CMAKE_SOURCE_DIR}/../lib/sort
)