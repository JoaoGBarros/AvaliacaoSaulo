#include <stdio.h>
#include "vet.h"





void Inicializacao(){
    int tamanho, op;
    Vetor *v1, *v2;
    printf("Informe o tamanho dos vetores: ");
    scanf("%d", &tamanho);
    v1 = CriaVetor(tamanho);
    v2 = CriaVetor(tamanho);
    PreenchendoVetor(v1);
    PreenchendoVetor(v2);
    while(1){
        printf("O que deseja fazer?\n1-Soma dos vetores\n2-Produtos dos vetores\n3-Sair");
        scanf("%d", &op);
        if(op == 1){
            SomaDosVetores(v1, v2);
        }else if(op == 2){
            ProdutoDosVetores(v1, v2);
        }else if(op == 3){
            break;
        }
    }
    Libera(v1);
    Libera(v2);

}

int main(){
    Inicializacao();
    return 0;
}