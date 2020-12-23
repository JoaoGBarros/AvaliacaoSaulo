#ifndef FUN_H
#define FUN_H

typedef struct matriz Matriz;

Matriz* CriaVetor(int m, int n);
void Preencher(Matriz* vet);
void Printa(Matriz* vet);
void Libera(Matriz* vet);


#endif