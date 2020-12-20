#ifndef COMPLEXO_D_H
#define COMPLEXO_D_H
#include "complexo.h"

typedef struct Complexod{
    ComplexoB super;
    double *info;
}ComplexoD;

bool Construtor_D(ComplexoD ** const me);
bool Destrutor_D(ComplexoD * const me);
ComplexoD *Copia_D(ComplexoD const * me);
ComplexoD * Converte_D(void * estrutura);
ComplexoD * SomaComplexosDoVetor(ComplexoD * const me, unsigned int tam);
ComplexoD ConstrutorVetor_D(ComplexoD ** const me, unsigned int tam);
#endif