#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <assert.h>
#include "complexogen.h"


static void Atribui_G(ComplexoG * const me, long double re, long double im);
static int MaiorComplexoDoVetor_G(ComplexoG * const me, unsigned int tam);
static void Soma_G(ComplexoG const * me, ComplexoG const * outro, ComplexoG const * result);
static void Subtracao_G(ComplexoG const * me, ComplexoG const * outro, ComplexoG const * result);
static long double ModuloComplexo_G(ComplexoG const * me);




bool Construtor_G(ComplexoG ** const me){
    Construtor((ComplexoB**) &((*me)->super));

    (*me)->info = malloc(4 * sizeof(void));

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

bool Destrutor_G(ComplexoG* const me){
    Destrutor((ComplexoB*)&me->super);
    free(me);
    if(!me){
        return true;
    }
    else{
        return false;
    }


}


ComplexoG ConstrutorVetor_G(ComplexoG ** const me, unsigned int tam){
    Construtor((ComplexoB**) ((&(*me)->super)));

    *me = malloc(tam * sizeof(ComplexoG));
    

    for(int i = 0; i < tam; i++){
        (*me)[i].info = malloc(4 * sizeof(void));
        for(int j = 0; j < 4; j++){
            (*me)[i].info[j] = 0;
        }
    }

    
}






static void Atribui_G(ComplexoG * const me, void*  re, void * im){
    me->info[0] = im;
    me->info[1] = re;
}

ComplexoG *Copia_G(ComplexoG const *me){
    ComplexoG *a;

    Construtor_G(&a);
    a->super.vptr->Atribui_(a, me->info[0], me->info[1]);

    return a;

}

static void Soma_G(ComplexoG const *me, ComplexoG const *outro, ComplexoG const *result ){
    long double x,y,z,w;

    x = me->info[0];
    y = me->info[1];
    z = outro->info[0];
    w = outro->info[1];

    Atribui_(result, x+z, y+w);
}

static void Subtracao_G(ComplexoG const *me, ComplexoG const *outro, ComplexoG const *result){
    long double x,y,z,w;

    x = me->info[0];
    x = me->info[1];
    z = outro->info[0];
    w = outro->info[1];

    Atribui_(result, x-z, y-w);
}

static long double ModuloComplexo_G(ComplexoG const * me){
    long double Modulo;
    double x, y;

    x = pow(me->info[0], 2);
    y = pow(me->info[1], 2);

    Modulo = sqrt(x+y);

    return Modulo;
}

ComplexoG * Converte(void * estrutura){
    double x, y;
    ComplexoG *a;

    x =(long double)(*estrutura).info[0];
    y =(long double)(*estrutura).info[1];

    Construtor_G(&a);

    Atribui_(a,x,y);

    return a;
}

static int MaiorComplexoDoVetor_G(ComplexoG * const me, unsigned int tam){
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


ComplexoG * SomaComplexosDoVetor_G(ComplexoG * const me, unsigned int tam){
    ComplexoG * result;
    Construtor_G(&result);

    for(int i = 0; i < tam; i+=2){
        for(int j = 0; j < 2; j++){
            result[i].info[j] = me[i].info[j] + me[i+1].info[j];
        }
    }

    return result;
}