#include <stdio.h>
#include <stdlib.h>
#define DIM 30

void lerMatriz(int mat[DIM][DIM])
{
    int i, j, p = 1;
    for (i = 0; i < DIM; i++)
    {
        for (j = p; j < DIM; j++)
        {
            scanf("%d", &mat[i][j]);
        }
        p++;
    }
}
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

void main(){


    return 0;
}

