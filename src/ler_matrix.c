#include "operacoes_matrix.h"

void lerMatriz(int mat[DIM][DIM]) {
    int i, j, p = 1;
    for (i = 0; i < DIM; i++) {
        for (j = p; j < DIM; j++) {
            scanf("%d", &mat[i][j]);
        }
        p++;
    }
}