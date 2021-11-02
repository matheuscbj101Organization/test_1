#include <stdio.h>
#include <stdlib.h>

void preenche_matrix (int **p, int row, int column) {
    for (int i = 0; i<row; i++) {
        for (int j = 0; j<column; j++) { 
            p[i][j] = rand () %10;
        }
    }
}
void menor_numero (int **p, int row, int column) {
    int i = 0;
    int j = 0;
    int linha = 0; 
    int coluna = 0;
    int menor = p[i][j];
    for (i = 0; i<row; i++) {
        for (j = 0; j<column; j++) {
           if (p[i][j] < menor) { 
                  menor = p[i][j];
                  linha = i;
                  coluna = j;
            }
        }
    }
    printf ("Menor valor = %d, prosicao [%d][%d]\n", menor, linha, coluna);
}
void maior_numero (int **p, int row, int column) {
    int i = 0;
    int j = 0;
    int linha = 0; 
    int coluna = 0;
    int maior = p[i][j];
    for (i = 0; i<row; i++) {
        for (j = 0; j<column; j++) {
            if (p[i][j] > maior) { 
                  maior = p[i][j];
                  linha = i;
                  coluna = j;
            }
        }
    }
    printf ("Maior valor = %d, posicao = [%d][%d]", maior, linha, coluna);
}

int main () {
    int **p;
    int row = 0;
    int column = 0;
    scanf ("%d""%d", &row, &column);
    //aloca matriz
    p = (int**) malloc (sizeof (int*) * row);
    for (int i = 0; i<row; i++) {
        p[i] = (int*) malloc (sizeof (int) * column);
    }
    preenche_matrix (p, row, column);
    menor_numero (p, row, column);
    maior_numero (p, row, column);
    //desaloca matriz 
    for (int i = 0; i<row; i++) {
        free (p[i]);
    }
    free (p);
    return 0;    
}