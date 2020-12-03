#include "operacoes_matrix.h"

void espelhamentoMatriz(int mat[DIM][DIM])
{
    for (int j = DIM - 1; j >= 0; j--)
    {
        for (int i = DIM - 1; i >= 0; i--)
        {
            mat[j][i] = mat[i][j];
        }
    }
}