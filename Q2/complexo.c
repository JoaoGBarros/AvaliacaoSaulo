#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#ifdef TYPE
#ifdef TYPED

void TYPED(CrieNumeroComplexo)(TYPED(complexo_t) * *pointer)
{
    *pointer = malloc(sizeof(TYPED(complexo_t)));
}

void TYPED(PreencheComplexoDeReais)(TYPED(complexo_t) * pointer, TYPE a, TYPE b)
{
    pointer->a = a;
    pointer->b = b;
}

TYPED(complexo_t)
TYPED(SomaComplexos)(TYPED(complexo_t) * p, TYPED(complexo_t) * q)
{
    TYPED(complexo_t)
    soma;
    soma.a = p->a + q->a;
    soma.b = p->b + q->b;

    return soma;
}

TYPED(complexo_t)
TYPED(ProdutoComplexos)(TYPED(complexo_t) * p, TYPED(complexo_t) * q)
{
    TYPED(complexo_t)
    resultado;
    double a, b, c, d;

    a = p->a * q->a;
    b = p->a * q->b; //e.g 2i
    c = p->b * q->a; //eg 2i
    d = p->b * q->b; //eg 2 * i**2   i**2 = -1
    d = d * (-1);
    resultado.a = a + d;
    resultado.b = b + c;

    return resultado;
}

TYPED(complexo_t)
TYPED(SubtracaoComplexos)(TYPED(complexo_t) * p, TYPED(complexo_t) * q)
{
    TYPED(complexo_t)
    resultado;

    resultado.a = p->a - q->b;
    resultado.b = p->b - q->b;

    return resultado;
}

TYPED(complexo_t)
TYPED(DivisaoComplexos)(TYPED(complexo_t) * p, TYPED(complexo_t) * q)
{
    TYPED(complexo_t)
    resultado;
    resultado.a = (((p->a * q->a) + (p->b * q->b)) / (q->a * q->a + q->b * q->b));
    resultado.b = ((-(p->a * q->b) + (p->b * q->a)) / (q->a * q->a + q->b * q->b));

    return resultado;
}

void TYPED(Amostra)(TYPED(complexo_t) operacao){
    char comando[20];
	strcpy(comando,"");
	strcat(comando, " %");
	strcat(comando, TIPO);
	if (operacao.b >= 0){	
        strcat(comando, " + ");
    }
	strcat(comando,"%");
	strcat(comando, TIPO);
	strcat(comando, "i");
	/*" %f - %fi" */

    printf (comando, operacao.a, operacao.b);
    printf("\n");
}

void TYPED(Libera)(TYPED(complexo_t) * pointer){
    free(pointer);
}

#endif
#endif
