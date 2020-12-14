#ifndef COMPLEXO_H
#define COMPLEXO_H

struct generic{
    double a;
    double b;
};

typedef struct generic complexo_t;
void CrieNumeroComplexo(complexo_t **pointer);
void CrieVetorComplexo(complexo_t **vetor, unsigned int tamanho);
void PreencheComplexoDeReais(complexo_t *pointer, double a, double b);
complexo_t SomaComplexos(complexo_t *p, complexo_t *q);
complexo_t ProdutoComplexos(complexo_t *p, complexo_t *q);
complexo_t SubtracaoComplexos(complexo_t *p, complexo_t *q);
complexo_t DivisaoComplexos(complexo_t *p, complexo_t *q);
long double ModuloComplexo(complexo_t *p);
void ApresentaComplexo(complexo_t op, char *string);
complexo_t ProdutoInternoVetComplexo(complexo_t *v1, complexo_t *v2, unsigned int tam);
complexo_t SomaElementosVetComplexo (complexo_t *vet1, unsigned int tam);
void Libera(complexo_t *pointer);

#endif


/*void CrieVetorComplexo(complexo_t *vetor, unsigned int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("Informa o valor real:\n");
        scanf("%lf", &vetor[i].a);
        printf("Informe o valor imaginario:\n");
        scanf("%lf", &vetor[i].b);
    }
}

complexo_t SomaComplexos(complexo_t *p, complexo_t *q){
    complexo_t soma;
    soma.a = *p->a + *q->a;
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

    resultado.a = p->a - q->a;
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
    long double resultado;
    long double j, k;

    j = powl(p->a, 2);
    k = powl(p->b, 2);
    resultado = sqrtl(j+k);

    return resultado;
}

void ApresentaComplexo(complexo_t op, char *string){
    printf("%s %Lf + %Lf * i\n", string, op.a, op.b);
}


void Libera(complexo_t *pointer){
    free(pointer);
}

complexo_t ProdutoInternoVetComplexo(complexo_t v1[], complexo_t *v2, unsigned int tam){
    complexo_t vetor_resultado[tam];

    for (int i = 0; i < tam; i++){
        vetor_resultado[i] = ProdutoComplexos(&v1[i], &v2[i]);
    }

    return vetor_resultado[tam];
}

*/