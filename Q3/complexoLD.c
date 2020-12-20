#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <assert.h>
#include "complexoLD.h"


static void Atribui_LD(ComplexoLD * const me, long double re, long double im);
static int MaiorComplexoDoVetor_LD(ComplexoLD * const me, unsigned int tam);
static void Soma_LD(ComplexoLD const * me, ComplexoLD const * outro, ComplexoLD const * result);
static void Subtracao_LD(ComplexoLD const * me, ComplexoLD const * outro, ComplexoLD const * result);
static long double ModuloComplexo_LD(ComplexoLD const * me);




bool Construtor_LD(ComplexoLD ** const me){
    Construtor((ComplexoB**) &((*me)->super));

    (*me)->info = malloc(4 * sizeof(double));

    (*me)->info[0] = 0;
    (*me)->info[1] = 0;
    (*me)->info[2] = 0;
    (*me)->info[3] = 0;

    if(!me){
        return false;
    }else{
        return true;
    }

}

bool Destrutor_LD(ComplexoLD* const me){
    Destrutor((ComplexoB*)&me->super);
    free(me);
    if(!me){
        return true;
    }
    else{
        return false;
    }


}


ComplexoLD ConstrutorVetor_LD(ComplexoLD ** const me, unsigned int tam){
    Construtor((ComplexoB**) ((&(*me)->super)));

    *me = malloc(tam * sizeof(ComplexoLD));
    

    for(int i = 0; i < tam; i++){
        (*me)[i].info = malloc(4 * sizeof(double));
        for(int j = 0; j < 4; j++){
            (*me)[i].info[j] = 0;
        }
    }

    
}






static void Atribui_LD(ComplexoLD * const me,long double re,long double im){
    me->info[0] = im;
    me->info[1] = re;
}

ComplexoLD *Copia_LD(ComplexoLD const *me){
    ComplexoLD *a;

    Construtor_LD(&a);
    a->super.vptr->Atribui_(a, me->info[0], me->info[1]);

    return a;

}

static void Soma_LD(ComplexoLD const *me, ComplexoLD const *outro, ComplexoLD const *result ){
    long double x,y,z,w;

    x = me->info[0];
    y = me->info[1];
    z = outro->info[0];
    w = outro->info[1];

    Atribui_(result, x+z, y+w);
}

static void Subtracao_LD(ComplexoLD const *me, ComplexoLD const *outro, ComplexoLD const *result){
    long double x,y,z,w;

    x = me->info[0];
    x = me->info[1];
    z = outro->info[0];
    w = outro->info[1];

    Atribui_(result, x-z, y-w);
}

static long double ModuloComplexo_LD(ComplexoLD const * me){
    long double Modulo;
    double x, y;

    x = pow(me->info[0], 2);
    y = pow(me->info[1], 2);

    Modulo = sqrt(x+y);

    return Modulo;
}

ComplexoLD * Converte(void * estrutura){
    double x, y;
    ComplexoLD *a;

    x =(long double)(*estrutura).info[0];
    y =(long double)(*estrutura).info[1];

    Construtor_LD(&a);

    Atribui_(a,x,y);

    return a;
}

static int MaiorComplexoDoVetor_LD(ComplexoLD * const me, unsigned int tam){
    int posicao;
    double mr = 0, mi = 0;

    for(int i = 0; i < tam; i++){
        if(me[i].info[0] >= mr && me[i].info[1] >= mi){
            posicao = i;
            mr = me[i].info[0];
            mi = me[i].info[1];
        }
    }
    return posicao;
}


ComplexoLD * SomaComplexosDoVetor_LD(ComplexoLD * const me, unsigned int tam){
    ComplexoLD * result;
    Construtor_LD(&result);

    for(int i = 0; i < tam; i+=2){
        for(int j = 0; j < 2; j++){
            result[i].info[j] = me[i].info[j] + me[i+1].info[j];
        }
    }

    return result;
}