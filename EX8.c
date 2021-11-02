#include <stdio.h>
#include <stdlib.h>

void preenche_vetor (int *p, int n) {
    for (int i = 0; i<n; i++) {
        p[i] = rand () %10;
    }
}
void soma_vetor (int *p, int n) {
    int sum = 0;
    for (int i = 0; i<n; i++) {
        sum = sum + p[i];
    }
    printf ("soma  = %d ", sum );
}

int main () {
    int *p1;
    int n = 0; 
    scanf ("%d", &n);
    p1 = (int *) malloc (sizeof(int) * n);
    preenche_vetor (p1, n);
    soma_vetor (p1, n);
    free (p1);
    return 0;
}
