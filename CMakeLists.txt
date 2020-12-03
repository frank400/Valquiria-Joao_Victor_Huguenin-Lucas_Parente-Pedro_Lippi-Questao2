cmake_minimum_required(VERSION 3.0)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99")

project(jogo_da_vida)

add_executable(
        caixeiro_viajante
        src/main.c
        src/imprimirMatriz.c
        src/ler_matrix.c
        src/espelhamentoMatriz.c
)