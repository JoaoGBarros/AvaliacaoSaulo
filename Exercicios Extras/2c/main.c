#include <stdio.h>
#include "fun.h"



int main(){
    int m, n;
    Matriz* mat;

    printf("Informe a quantidade linhas: ");
    scanf("%d", &m);
    printf("Informe a quantidade de colunas: ");
    scanf("%d", &n);
    mat = CriaMatriz(m, n);
    PreencheMatriz(mat);
    Printa(mat);
    Libera(mat);
}