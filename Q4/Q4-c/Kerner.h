#ifndef KRAMER_H_
#define KRAMER_H_

struct Complexo{
    double re;
    double im;
};
typedef struct Complexo Complexo_t;

void Kremer(Complexo_t Coef[], int grau);
Complexo_t ProdutoComplexos(Complexo_t p, Complexo_t q);
Complexo_t Denominador(Complexo_t raizes[], int grau, int i);
Complexo_t Power(int i);
Complexo_t SomaComplexos(Complexo_t p, Complexo_t q);
Complexo_t DivisaoComplexos(Complexo_t p, Complexo_t q);
Complexo_t SubtracaoComplexos(Complexo_t p, Complexo_t q);
Complexo_t polinomio (Complexo_t Coef[], Complexo_t x, int grau);
#endif