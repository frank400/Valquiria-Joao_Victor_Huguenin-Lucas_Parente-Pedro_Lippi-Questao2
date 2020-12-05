cmake_minimum_required(VERSION 3.0)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99")

project(caixeiro_viajante)

add_executable(
        Valquiria_Joao_Victor_Huguenin_Lucas_Parente_Pedro_Lippi_Questao2
        src/main.c
        src/imprimirMatriz.c
        src/ler_matrix.c
        src/espelhamentoMatriz.c
)