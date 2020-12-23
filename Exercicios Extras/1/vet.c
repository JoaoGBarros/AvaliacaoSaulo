#include <stdio.h>
#include <stdlib.h>
#include "vet.h"

struct vet{
    int tam;
    int *v;
};

Vetor* CriaVetor(int tamanho){
    Vetor *vz;

    vz = (Vetor*)malloc(sizeof(Vetor));
    vz->tam = tamanho;
    vz->v = (int*)malloc(tamanho*sizeof(int));

    return vz;
}


void PreenchendoVetor(Vetor *v){
    int a;
    for(int i = 0; i < v->tam; i++){
        scanf("%d", &a);
        v->v[i] = a;
    }
}

void SomaDosVetores(Vetor* v1, Vetor* v2){

    for(int i = 0; i < v1->tam; i++){
        printf("%d\n", v1->v[i] + v2->v[i]);
    }
}

void ProdutoDosVetores(Vetor *v1, Vetor *v2){
    for(int i = 0; i < v1->tam; i++){
        printf("%d\n", v1->v[i] * v2->v[i]);
    }
}

void Libera(Vetor* v){
    free(v->v);
    free(v);
}