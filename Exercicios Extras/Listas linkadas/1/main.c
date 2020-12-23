#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"


void Inicializacao(){
    Prim_noh *elemento_1;
    Prim_noh *elemento_2;
    Prim_noh *elemento_3;
    int *n1, *n2, *n3;

    n1 = malloc(sizeof(int));
    n2 = malloc(sizeof(int));
    n3 = malloc(sizeof(int));
    
    *n1 = 1;
    *n2 = 2;
    *n3 = 3;

    elemento_1 = IniciaPonteiro();
    elemento_2 = IniciaPonteiro();
    elemento_3 = IniciaPonteiro();

    IniciaValor(elemento_1, n1);
    IniciaValor(elemento_2, n2);
    IniciaValor(elemento_3, n3);

    elemento_1->prox = elemento_2;
    elemento_2->prox = elemento_3;
    elemento_3->prox = NULL;

    ImprimeLista(elemento_1);
    LiberaEspaco(elemento_1);
    LiberaEspaco(elemento_2);
    LiberaEspaco(elemento_3);
}


int main() {
    Inicializacao();
    return 0;
}
