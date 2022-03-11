#include <stdio.h>

/*Escreva uma funcão que dado um número real passado como parâmetro, retorne a parte inteira e a parte fracionaria 
deste número. Escreva um programa que chama esta função. Prototipo:
void frac(float num, int *inteiro, float *frac);*/

int main(void){
    void frac(float num, int *inteiro, float *frac);
    int numeroInteiro = 0;
    float numeroDecimal = 0.0;
    float numero = 25.7;

    printf("%d, %f\n", numeroInteiro, numeroDecimal);

    frac(numero, &numeroInteiro, &numeroDecimal);

    printf("\n%d, %f\n", numeroInteiro, numeroDecimal);

    return 0;
}

void frac(float num, int *inteiro, float *frac){
    *inteiro = (int)num;
    *frac = num - *inteiro;
}