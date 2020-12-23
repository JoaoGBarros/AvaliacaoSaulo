#ifndef FUNCOES_H
#define FUNCOES_H

typedef struct posicao Posicao;

struct lista{
    Posicao *pt_valor;
    struct lista *prox;
};

typedef struct lista Lista;

Lista* Inicia();
void PreenchePosicao(Lista *l);
void ImprimeMatriz(Lista* el);
void Libera(Lista* el);


#endif