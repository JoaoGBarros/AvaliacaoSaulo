#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"



void ImprimeLista(Prim_noh *p){
    if(p){
        while(p){
            printf("%d\n", (*(int*)p->pt_valor));
            p=p->prox;
        }
    }else{
        printf("Lista vazia");
    }
}

Prim_noh* IniciaPonteiro(){
    Prim_noh *at;
    at = (Prim_noh*)malloc(sizeof(Prim_noh));

    return at;
}

void IniciaValor(Prim_noh *p, void *n){
    p->pt_valor = n;
}

void LiberaEspaco(Prim_noh *p){
    free(p->pt_valor);
    free(p);
}

