#include <stdio.h>

/*Faça um programa que permita ao usuario entrar com uma matriz de 3 x 3 números
inteiros. Em seguida, gere um array unidimensional, onde cada posição deste array será
formada pela soma dos números de cada respectiva coluna da matriz. Mostrar na tela esse
array.*/

int main(void){
	int matriz[3][3] = {0};
	int arraySoma[3] = {0};

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){  
            printf("matriz[%d][%d] = ", i, j);          
            scanf("%d", &matriz[i][j]);
            arraySoma[j] += matriz[i][j];
        }                
    }

    printf("\nMatriz:\n");
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){  
            printf("%d ", matriz[i][j]);
        }
        printf("\n");                
    }

    printf("\n");

    for (int i = 0; i < 3; i++){
        printf("ArraySoma[%d] = %d\n", i, arraySoma[i]);
    }
    
	
	return 0;
}