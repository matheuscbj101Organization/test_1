#include <stdio.h>
#include <stdlib.h>

void aloca_pointer (int *p, int valor, int op) {
    p = (int*) malloc (sizeof (int) * 4);
    p[op-1] = valor;
    printf ("Valor alocado no ponteiro p[%d]: %d\n", op-1, p[op-1]);
}

int main () {
    int n1, n2;
    int *p1;
    int val = 0; 
    int op1 = 1;
    int cond = 1;
    printf ("Digite os valores que deseja operar: \n");
    scanf ("%d""%d", &n1, &n2);
    printf ("Calculadora\n");
    printf ("Digite 1 para somar\n");
    printf ("Digite 2 para subtrair\n");
    printf ("Digite 3 para multiplicar\n");
    printf ("Digite 4 para dividir\n");
    printf ("Digite 5 para trocar os valores\n");
    printf  ("Digite 0 para sair\n");
    while (op1 != 0) {
     scanf ("%d", &op1);
     switch (op1)
      {
       case 1:
           val = n1 + n2;
           aloca_pointer (p1, val, op1);
           break;
       case 2:
           val = n1 - n2;
           aloca_pointer (p1, val, op1);
           break;
       case 3:
           val = n1 * n2;
           aloca_pointer (p1, val, op1);
           break;
       case 4:
           val = n1 / n2;
           aloca_pointer (p1, val, op1);
           break;
        case 5:
            scanf ("%d""%d", &n1, &n2);
        }
    }
   return 0;
   system ("pause");
}