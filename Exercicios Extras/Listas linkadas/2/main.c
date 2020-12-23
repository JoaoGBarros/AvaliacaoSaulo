#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"


void Inicializacao(){
    Lista *el1, *el2, *el3;

    el1 = Inicia();
    el2 = Inicia();
    el3 = Inicia();


    PreenchePosicao(el1);
    PreenchePosicao(el2);
    PreenchePosicao(el3);

    el1->prox = el2;
    el2->prox = el3;
    el3->prox = NULL;


    ImprimeMatriz(el1);
    Libera(el1);
    Libera(el2);
    Libera(el3);
}

int main(){
    Inicializacao();
    return 0;
}