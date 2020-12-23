#include <stdio.h>
#include "fun.h"


int main(){
    int m, n;
    Matriz* vet;

    printf("Informe o numero de linhas da matriz: ");
    scanf("%d", &m);
    printf("Informe o numero de colunas da matriz: ");
    scanf("%d", &n);
    vet = CriaVetor(m, n);
    Preencher(vet);
    Printa(vet);
    Libera(vet);

    return 0;
}