#include <stdio.h>
#include <stdlib.h>

#define DIM 30

void lerMatriz(int mat[DIM][DIM]) {
    int i, j, p = 1;
    for (i = 0; i < DIM; i++) {
        for (j = p; j < DIM; j++) {
            scanf("%d", &mat[i][j]);
        }
        p++;
    }
}

void espelhamentoMatriz(int mat[DIM][DIM]) {
    for (int j = DIM - 1; j >= 0; j--) {
        for (int i = DIM - 1; i >= 0; i--) {
            mat[j][i] = mat[i][j];
        }
    }
}

void imprimirMatriz(int mat[DIM][DIM]) {
    for (int i = 0; i < DIM; i++) {
        for (int j = 0; j < DIM; j++) {
            printf("\t%d", mat[i][j]);
        }
        printf("\n");
    }
}

void percorrendoCidades(int mat[DIM][DIM], int x, int vet[DIM], int soma) {

    int IndexMenorValor, k = 0, check, primeiro, soma_mil = 0;
    vet[0] = x;
    primeiro = x;
    printf("\nPartindo da cidade %d:\n\n", primeiro);
    while (k < DIM) {
        IndexMenorValor = x;

        for (int i = 0; i < DIM; i++) {

            check = 0;
            for (int y = 0; y < DIM; y++) {

                if (i == vet[y]) {
                    check = 1;
                }
            }
            if ((mat[x][i] < mat[x][IndexMenorValor] && check == 0) || (mat[x][IndexMenorValor] == 0 && check == 0)) {

                IndexMenorValor = i;
            }
        }
        soma = soma + mat[x][IndexMenorValor];
        soma_mil = soma_mil + mat[x][IndexMenorValor];

        for (int i = 1; i < DIM; i++) {
            if (vet[i] == -1) {
                vet[i] = IndexMenorValor;
                break;
            }
        }
        if (soma_mil > 1000) {
            printf("Pare na cidade %d, para nao chegar a %d quilometros em um dia\n\n", x, soma_mil);
            soma_mil = mat[x][IndexMenorValor];
        }
        x = IndexMenorValor;

        k++;
    }


    soma_mil = soma_mil + mat[x][primeiro];
    if (soma_mil > 1000) {
        printf("Pare na cidade %d, para nao chegar a %d quilometros em um dia\n\n", x, soma_mil);
        soma_mil = mat[x][IndexMenorValor];
    }

    for (int i = 0; i < DIM; i++) {
        printf("%d->", vet[i]);
    }
    printf("%d\n", vet[0]);
    soma = soma + mat[x][primeiro];
    printf("\n\n");
    printf("Custo: %d\n", soma);
}

void main() {

    int x, soma = 0;
    int vet[30];
    int mat[DIM][DIM];

    for (int i = 0; i < DIM; i++) {
        vet[i] = -1;
    }
    for (int i = 0; i < DIM; i++) {
        for (int j = 0; j < DIM; j++) {
            mat[i][j] = 0;
        }
    }
    lerMatriz(mat);
    espelhamentoMatriz(mat);
    imprimirMatriz(mat);
    printf("digite a cidade que voce esta:\n");
    scanf("%d", &x);
    percorrendoCidades(mat, x, vet, soma);
    system("PAUSE");
    return 0;

    return 0;
}

