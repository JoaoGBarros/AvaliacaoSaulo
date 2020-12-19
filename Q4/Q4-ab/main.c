#include <complex.h>
#include <stdio.h>
#include "Kramer.h"

int main(){
    int grau;
    complex Coef[grau+1];

    printf("Informe o grau do polinomio:\n");
    scanf("%d", &grau);

    for(int i = 0; i < grau+1; i++){
        printf("Informe os coeficientes:\n");
        scanf("%lf %lf", &Coef[i]);
    }

    Kremer(Coef, grau);
    return 0;
}
