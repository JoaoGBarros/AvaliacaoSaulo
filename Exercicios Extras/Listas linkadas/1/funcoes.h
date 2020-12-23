#ifndef FUNCOES_H
#define FUNCOES_H

struct prim_noh{
    void* pt_valor;
    struct prim_noh *prox;
};

typedef struct prim_noh Prim_noh;

Prim_noh* IniciaPonteiro();
void ImprimeLista(Prim_noh* p);
void IniciaValor(Prim_noh *p, void *n);
void LiberaEspaco(Prim_noh *p);

#endif