#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct product {
    int codigo;



    char descricao [50];
    float valor;
} produto;


void cadastro (produto *estoque, int n) {
    int i = 0;
    int j = 0;
    bool cond = false;
    bool cond2 = true;
    while (i<n && cond == false) {
        if (estoque[i].codigo == 0) {
            printf ("Insira o codigo do produto: ");
            scanf ("%d", &estoque[i].codigo); //cadastro do codigo do produto
            cond = true;
        }
    i++;
   }
    if (cond) {
     while (j<n && cond2) { //testar se código é valido
         if ((estoque[i].codigo == estoque[j].codigo) && (i != j)) {
             estoque[i].codigo = 0;
             printf ("Valor de codigo invalido, produto nao cadastrado\n");
             cond2 = false; //para o laço e invalida o código
         }
         j++;
     }
     if (cond2) { //cadastro dos dados do produto
         printf ("Insira a descricao do produto: \n");
         fgets (estoque[i].descricao, 50, stdin);
         printf ("Insira o valor do produto: \n");
         scanf ("%f", &estoque[i].valor);     
       }
    }
}   

int main () {
    int n;
    printf ("Informe a quantidade de produtos");
    scanf ("%d", &n);
    produto *estoque;
    //alocar vetor de strcut
    estoque = (produto*) malloc (sizeof(produto) * n);
    for (int i = 0; i<n; i++) {
        estoque[i].codigo = 0;
    }
    cadastro (estoque, n);
    free (estoque);
    return 0;
}
