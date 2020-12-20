#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include "complexo.h"

void Construtor(ComplexoB ** const me){
    static struct VTable const vtbl = {
        &Atribui_,
        &MaiorComplexoDoVetor_,
        &Soma_,
        &Subtracao_,
        &ModuloComplexo_
    };

    *me = (ComplexoB *)malloc(sizeof(ComplexoB));
    (*me)->vptr = &vtbl;

}

void Destrutor(ComplexoB * const me){
    free(me);
}

static void Atribui_(ComplexoB * const me, char re, char im){
    assert(0);
}

static int MaiorComplexoDoVetor_(ComplexoB * const me, unsigned int tam){
    assert(0);
}

static void Soma_(ComplexoB const * me, ComplexoB const * outro, ComplexoB const * result){
    assert(0);
}

static long double ModuloComplexo_(ComplexoB const * me){
    assert(0);
}

static void Subtracao_(ComplexoB const * me, ComplexoB const * outro, ComplexoB const * result){
    assert(0);
}


