#ifndef COMPLEXO_H
#define COMPLEXO_H

struct VTable;

typedef struct Complexo{
    struct VTable const * vptr;
}ComplexoB;

struct VTable{
    
    void (* Atribui_) (ComplexoB * const me, char re, char im);
    int  (* MaiorComplexoDoVetor_)(ComplexoB * const me, unsigned int tam);
    void (*Soma_)(ComplexoB const * me, ComplexoB const * outro, ComplexoB const * result);
    void (*Subtracao_)(ComplexoB const * me, ComplexoB const * outro, ComplexoB const * result);
    long double (*ModuloComplexo_)(ComplexoB const * me);

};

void Construtor(ComplexoB ** const me);
void Destrutor(ComplexoB * const me);

static inline void Atribui(ComplexoB * const me, char re, char im){
    (*me->vptr->Atribui_)(me, re, im);
}

static inline int MaiorComplexoDoVetor(ComplexoB * const me, unsigned int tam){
    return(*me->vptr->MaiorComplexoDoVetor_)(me, tam);
}

static inline void Soma(ComplexoB const * me, ComplexoB const * outro, ComplexoB const * result){
    (*me->vptr->Soma_)(me, outro, result);
}

static inline void Subtracao_(ComplexoB const * me, ComplexoB const * outro, ComplexoB const * result){
    (*me->vptr->Subtracao_)(me, outro, result);
}

static inline long double ModuloComplexo(ComplexoB const * me){
    return(*me->vptr->ModuloComplexo_)(me);
}

#endif