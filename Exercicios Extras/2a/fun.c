#include <stdio.h>
#include <stdlib.h>
#include "fun.h"
struct matriz{
    int linha;
    int coluna;
    int **v;
};


Matriz* CriaVetor(int m, int n){
    Matriz* cria;
    cria = (Matriz*)malloc(sizeof(Matriz));
    cria->linha = m;
    cria->coluna = n;
    cria->v = (int**)malloc(m * sizeof(int*));

    for(int i = 0; i < cria->linha; i++){
        cria->v[i] = (int*)malloc(n*sizeof(int));
    }

    return cria;
}

void Preencher(Matriz* vet){
    int a;
    for(int i = 0; i < vet->linha; i++) {
        for (int j = 0; j < vet->coluna; j++) {
            scanf("%d", &a);
            vet->v[i][j] = a;
        }
    }
}

void Printa(Matriz* vet){
    for(int i = 0; i < vet->linha; i++) {
        for (int j = 0; j < vet->coluna; j++) {
            printf("%d ", vet->v[i][j]);
        }
        printf("\n");
    }
}

void Libera(Matriz* vet){
    for(int i = 0; i < vet->linha; i++){
        free(vet->v[i]);
    }
    free(vet->v);
    free(vet);
}