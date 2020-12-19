#include <stdio.h>
#include <complex.h>
#include <stdlib.h>
#include "Kramer.h"



complex polinomio (complex Coef[], complex x, int grau){
    complex resultado = Coef[grau];
    int i;
    int j = grau - 1;

    for(i = (2*grau); j >= 0; i--){
        if(grau % 2 != 0){
            if(i % 2 != 0){
                resultado = resultado + Coef[j];
                j--;
            }else{
                resultado = resultado * x;
            }
        }else{
            if(i % 2 == 0){
                resultado = resultado * x;
            }else{
                resultado = resultado + Coef[j];
                j--;
            }  
        }
        
    }



    return resultado;
 
}



complex Denominador(complex raizes[], int grau, int i){
    complex resultado[grau], result = 1;

    int k = 0;
    

    for(int j = 0; j < grau; j++){
        if(i != j){
            resultado[k] = (raizes[i] - raizes[j]);
            k++;
        }
    }

    //(raiz[i] - raiz[i+1]) *(raiz[i] - raiz[i+2]) * .... (raiz[i] - raiz[grau])
    for(int j = 0; j < k ; j++){
        result = result * resultado[j];
    }

    return result;
}





void Kremer(complex Coef[], int grau){
    complex raizes[grau], resultado[grau];
    int i = 0;
    
    for(i = 0; i < grau; i++){

        raizes[i] = cpow(0.4 + 0.9 * I, i);
    }
    
    
    for (int j = 0; j < 10; j++){
       for(i = 0; i < grau; i++){
           resultado[i] = raizes[i] - ((polinomio(Coef, raizes[i], grau)))/(Denominador(raizes, grau, i));
           raizes[i] = resultado[i];
       }

    }

    for(i = 0; i < grau; i++){
        printf("%.3f%+.3fi\n", creal(resultado[i]), cimag(resultado[i]));
    }
 
 
}
