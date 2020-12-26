#include <stdio.h>
#include "Kerner.h"

int main(){
    int grau = 3;
    Complexo_t Coef[grau+1];
    
    /* x3 − 3x2 + 3x − 5 =  0 */
    Coef[3].re = 1.0; //a3
    Coef[3].im = 0;
    Coef[2].re = -3.0; //a2
    Coef[2].im = 0;
    Coef[1].re = 3.0; //a1
    Coef[1].im = 0;
    Coef[0].re = -5.0; //a0
    Coef[0].im = 0;


    //
    Kerner(Coef, grau);
    return 0;
}
