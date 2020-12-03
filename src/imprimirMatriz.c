#include "operacoes_matrix.h"

void imprimirMatriz(int mat[DIM][DIM])
{
    for (int i = 0; i < DIM; i++)
    {
        for (int j = 0; j < DIM; j++)
        {
            printf("\t%d", mat[i][j]);
        }
        printf("\n");
    }
}
