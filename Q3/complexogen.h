#ifndef COMPLEXO_GEN_H
#define COMPLEXO_GEN_H
#include "complexo.h"

typedef struct ComplexoG{
    ComplexoB super;
    void * info;
}ComplexoG;

bool Construtor_G(ComplexoG ** const me);
bool Destrutor_G (ComplexoG * const me);

ComplexoG *Copia_G(ComplexoG const *me);
ComplexoG * Converte_G(void * estrutura);
ComplexoG * SomaComplexosDoVetor_G(ComplexoG * const me, unsigned int tam);
ComplexoG ConstrutorVetor_G(ComplexoG ** const me, unsigned int tam);

#endif