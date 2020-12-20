#ifndef COMPLEXO_LD_H
#define COMPLEXO_LD_H
#include <complexo.h>

typedef struct complexold{
    ComplexoB super;
    long double *info;

}ComplexoLD;

bool Construtor_LD (ComplexoLD ** const me);
bool Destrutor_LD (ComplexoLD * const me);

ComplexoLD *Copia_LD(ComplexoLD const *me);
ComplexoLD * Converte_LD(void * estrutura);
ComplexoLD * SomaComplexosDoVetor_LD(ComplexoLD * const me, unsigned int tam);
ComplexoLD ConstrutorVetor_LD(ComplexoLD ** const me, unsigned int tam);

#endif