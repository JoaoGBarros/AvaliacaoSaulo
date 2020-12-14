#include <stdio.h>
#include <stdlib.h>

int main (){

    #include "generic-complexo_double.h"
    #include "generic-complexo_long.h"
    complexo_t_D soma1, produto1, divisao1, subtracao1;
    complexo_t_D *q;
    complexo_t_D *p;
    complexo_t_Ld soma2, produto2, divisao2, subtracao2;
    complexo_t_Ld *s;
    complexo_t_Ld *r;
    CrieNumeroComplexo_D (&p);
    CrieNumeroComplexo_D (&q);
    PreencheComplexoDeReais_D (p, 1.0 , 2.0);
    PreencheComplexoDeReais_D (q, 3.0 , 4.0);
    soma1 = SomaComplexos_D (p, q);
    produto1 = ProdutoComplexos_D (p,q);
    subtracao1 = SubtracaoComplexos_D (p,q);
    divisao1 = DivisaoComplexos_D (p,q);
    Amostra_D(soma1);
    Amostra_D(produto1);
    Amostra_D(subtracao1);
    Amostra_D(divisao1);
    CrieNumeroComplexo_Ld (&s);
    CrieNumeroComplexo_Ld (&r);
    PreencheComplexoDeReais_Ld (s, 1.0 , 2.0);
    PreencheComplexoDeReais_Ld (r, 3.0 , 4.0);
    soma2 = SomaComplexos_Ld (s, r);
    produto2 = ProdutoComplexos_Ld (s,r);
    subtracao2 = SubtracaoComplexos_Ld (s,r);
    divisao2 = DivisaoComplexos_Ld (s,r);
    Amostra_Ld(soma2);
    Amostra_Ld(produto2);
    Amostra_Ld(subtracao2);
    Amostra_Ld(divisao2);
    Libera_D(p);
    Libera_D(q);
    Libera_Ld(r);
    Libera_Ld(s);
    return 0;
}