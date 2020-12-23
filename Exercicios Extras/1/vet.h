#ifndef VET_H
#define VET_H

typedef struct vet Vetor;

Vetor* CriaVetor(int tamanho);
void PreenchendoVetor(Vetor *v);
void SomaDosVetores(Vetor* v1, Vetor* v2);
void ProdutoDosVetores(Vetor *v1, Vetor *v2);
void Libera(Vetor* v);

#endif