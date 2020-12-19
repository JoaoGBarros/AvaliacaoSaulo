#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Kramer.h"



Complexo_t polinomio (Complexo_t Coef[], Complexo_t x, int grau){
    Complexo_t resultado = Coef[grau];
    int i;
    int j = grau - 1;

    for(i = (2*grau); j >= 0; i--){
        if(grau % 2 != 0){
            if(i % 2 != 0){
                resultado.re = resultado.re + Coef[j].re;
                resultado.im = resultado.im + Coef[j].im;
                j--;
            }else{
                resultado = ProdutoComplexos(resultado, x);
            }
        }else{
            if(i % 2 == 0){
                resultado = ProdutoComplexos(resultado, x);
            }else{
                resultado.re = resultado.re + Coef[j].re;
                resultado.im = resultado.im + Coef[j].im;
                j--;
            }  
        }
        
    }



    return resultado;


}


Complexo_t ProdutoComplexos(Complexo_t p, Complexo_t q){
    Complexo_t resultado;
    double a,b,c,d;

    a = p.re * q.re;
    b = p.re * q.im; //e.g 2i
    c = p.im * q.re; //eg 2i
    d = p.im * q.im; //eg 2 * i**2   i**2 = -1
    d = d * (-1);
    resultado.re = a+d;
    resultado.im = b+c;

    return resultado;
}



Complexo_t SubtracaoComplexos(Complexo_t p, Complexo_t q){
    Complexo_t resultado;

    resultado.re = p.re - q.re;
    resultado.im = p.im - q.im;


    return resultado;
}


Complexo_t DivisaoComplexos(Complexo_t p, Complexo_t q){
    Complexo_t resultado;
    resultado.re = (((p.re*q.re) + (p.im*q.im))/(q.re*q.re + q.im*q.im));
    resultado.im = ((-(p.im*q.im) + (p.im*q.re))/(q.re*q.re + q.im*q.im));

    return resultado;
}

Complexo_t SomaComplexos(Complexo_t p, Complexo_t q){
    Complexo_t soma;
    soma.re = p.re + q.re;
    soma.im = p.im + q.im;

    return soma;

}



Complexo_t Power(int i){
    Complexo_t a;
    int resto;

    a.re = 0.4;
    a.im = 0.9;

    a.re = pow(a.re, i);
    a.im = pow(a.im, i);

    resto = i % 4;


    if(resto == 2){
        a.im = a.im * (-1);
    }else if(resto == 3){
        a.im = a.im * (-1);
    }

    return a;
}



Complexo_t Denominador(Complexo_t raizes[], int grau, int i){
    Complexo_t resultado[grau];
    Complexo_t result;

    result.re = 1;
    result.im = 0;

    int k = 0;
    

    for(int j = 0; j < grau; j++){
        if(i != j){
            resultado[k] = SubtracaoComplexos(raizes[i], raizes[j]);
            k++;
        }
    }

    //(raiz[i] - raiz[i+1]) *(raiz[i] - raiz[i+2]) * .... (raiz[i] - raiz[grau])
    for(int j = 0; j < k ; j++){
        result = ProdutoComplexos(result, resultado[j]);
    }

    return result;
}





void Kremer(Complexo_t Coef[], int grau){
    Complexo_t raizes[grau], resultado[grau], den, num, fator;
    int i = 0;
    
    for(i = 0; i < grau; i++){
        raizes[i] = Power(i);
    }
    
    
    for (int j = 0; j < 10; j++){
       for(i = 0; i < grau; i++){
           num = polinomio(Coef, raizes[i], grau);
           den = Denominador(raizes, grau, i);
           fator = DivisaoComplexos(num, den);
           resultado[i] = SubtracaoComplexos(raizes[i], fator);
           raizes[i] = resultado[i];
       }

    }

    for(i = 0; i < grau; i++){
        if(resultado[i].im > 0){
            printf("%.3lf + %.3fi\n", resultado[i].re, resultado[i].im);
        }else{
            printf("%.3lf %.3fi\n", resultado[i].re, resultado[i].im);
        };
    }
 
 
}
