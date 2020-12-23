#ifndef FUN_H
#define FUN_H
#define MAX 50
typedef struct matriz Matriz;
Matriz* CriaMatriz(int m, int n);
void PreencheMatriz(Matriz* mat);
void Printa(Matriz* mat);
void Libera(Matriz* mat);
#endif