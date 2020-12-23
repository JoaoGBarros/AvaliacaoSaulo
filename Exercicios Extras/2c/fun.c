#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fun.h"



struct matriz{
    int linhas;
    int colunas;
    char ***v;
};


Matriz* CriaMatriz(int m, int n){
    Matriz* cria;
    cria = (Matriz*)malloc(sizeof(Matriz));
    cria->linhas = m;
    cria->colunas = n;
    cria->v = (char***)malloc(m * sizeof(char**));
    for(int i = 0; i < m; i++){
        cria->v[i] = (char**)malloc(n * sizeof(char*));
    }

    return cria;
}


void PreencheMatriz(Matriz* mat){
    int tam;
    char a[MAX];
    for(int i = 0; i < mat->linhas; i++){
        for(int j = 0; j < mat->colunas; j++) {
            scanf("%s", a);
            tam = strlen(a);
            mat->v[i][j] = (char*)malloc(sizeof(char) * tam);
            strcpy(mat->v[i][j], a);
        }
    }
}

void Printa(Matriz* mat){
    for(int i = 0; i < mat->linhas; i++){
        for(int j = 0; j < mat->colunas; j++){
            printf("%s ", mat->v[i][j]);
        }
        printf("\n");
    }
}

void Libera(Matriz* mat){
    for(int i = 0; i < mat->linhas; i++){
        free(mat->v[i]);
    }
    free(mat->v);
    free(mat);
}