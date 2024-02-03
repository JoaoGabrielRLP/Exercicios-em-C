/*Elabore um algoritmo que leia quatro números, e imprima a raiz quadrada de cada um.*/
#include <stdio.h>
#include <math.h>

int main(){
    int i, num, raiz;

    for(i = 1; i <= 4; i++){
        printf("Digite um numero: ");
        scanf("%d",&num);

        raiz = sqrt(num);
        printf("A raiz quadradrada e de: %d\n", raiz);
    }

    
}