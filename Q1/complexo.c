#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "complexo.h"




void CrieNumeroComplexo(complexo_t **pointer){
    *pointer = malloc(sizeof(complexo_t));
}

void CrieVetorComplexo(complexo_t **vetor, unsigned int tamanho){
    *vetor = (complexo_t *)malloc(tamanho * sizeof(complexo_t));
}

void PreencheComplexoDeReais(complexo_t *pointer, double a, double b){
    pointer->a = a;
    pointer->b = b;
}

complexo_t SomaComplexos(complexo_t *p, complexo_t *q){
    complexo_t soma;
    soma.a = p->a + q->a;
    soma.b = p->b + q->b;

    return soma;

}

complexo_t ProdutoComplexos(complexo_t *p, complexo_t *q){
    complexo_t resultado;
    double a,b,c,d;

    a = p->a * q->a;
    b = p->a * q->b; //e.g 2i
    c = p->b * q->a; //eg 2i
    d = p->b * q->b; //eg 2 * i**2   i**2 = -1
    d = d * (-1);
    resultado.a = a+d;
    resultado.b = b+c;

    return resultado;
}

complexo_t SubtracaoComplexos(complexo_t *p, complexo_t *q){
    complexo_t resultado;

    resultado.a = p->a - q->b;
    resultado.b = p->b - q->b;


    return resultado;
}

complexo_t DivisaoComplexos(complexo_t *p, complexo_t *q){
    complexo_t resultado;
    resultado.a = (((p->a*q->a) + (p->b*q->b))/(q->a*q->a + q->b*q->b));
    resultado.b = ((-(p->a*q->b) + (p->b*q->a))/(q->a*q->a + q->b*q->b));

    return resultado;
}

long double ModuloComplexo(complexo_t *p){
    long double resultado = 0;
    long double j = 0, k = 0;
    j = powl(p->a, 2);
    k = powl(p->b, 2);
    resultado = sqrtl(j+k);

    return resultado;
}

void ApresentaComplexo(complexo_t op, char *string){
    printf("%s %lf + %lf * i\n", string, op.a, op.b);
}

complexo_t ProdutoInternoVetComplexo(complexo_t *v1, complexo_t *v2, unsigned int tam){
    complexo_t vetor_resultado[tam];
    complexo_t resultado;
    resultado.a = 0;
    resultado.b = 0;
    double a,b,c,d;

    for (int i = 0; i < tam; i++){
        a = v1[i].a * v2[i].a;
        b = v1[i].a * v2[i].b; //e.g 2i
        c = v1[i].b * v2[i].a; //eg 2i
        d = v1[i].b * v2[i].b; //eg 2 * i**2   i**2 = -1
        d = d * (-1);
        vetor_resultado[i].a = a+d;
        vetor_resultado[i].b = b+c;
    }

    for(int i = 0; i < tam; i++){
        resultado.a = resultado.a + vetor_resultado[i].a;
        resultado.b = resultado.b + vetor_resultado[i].b;
    }

    return resultado;
}

complexo_t SomaElementosVetComplexo (complexo_t *vet1, unsigned int tam){
    complexo_t resultado;
    resultado.a = 0;
    resultado.b = 0;
    for(int i = 0; i < tam; i++){
       resultado.a = resultado.a + vet1[i].a;
       resultado.b = resultado.b + vet1[i].b;
    }

    return resultado;
}

void Libera(complexo_t *pointer){
    free(pointer);
}



