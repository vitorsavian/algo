if(CMAKE_SOURCE_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR)
    cmake_minimum_required(VERSION 3.10)
    project(src_project)
    set(CMAKE_CXX_STANDARD 17)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)

    # Inclui o diretório lib mesmo quando executado dentro de src
    add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../lib ${CMAKE_BINARY_DIR}/lib)
endif()

# Cria o executável dos testes a partir do main.cpp dos testes
add_executable(
    algo_main 
    main.cpp
    sum.cpp
)

# Linka com as bibliotecas
target_link_libraries(algo_main PRIVATE datastructure search sort)

# Adiciona os diretórios de include das libs, se necessário
# target_include_directories(tests_main PRIVATE
#     ${CMAKE_SOURCE_DIR}/../lib/datastructure
#     ${CMAKE_SOURCE_DIR}/../lib/search
#     ${CMAKE_SOURCE_DIR}/../lib/sort
# )