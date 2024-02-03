/*Elabore um algoritmo que leia vários números, e imprima o maior, menor e a média aritmética dos 
números. Considere que o número zero (0) finaliza a entrada de dados e não faz parte da 
seqüência.*/


#include <stdio.h>
#include <math.h>

int main(){
    int maior = 0, menor = 0;
    float media,  mediaA, cont, num;

    while(num != 0){
        printf("Digite um numero diferente de zero para continuar no loop: ");
        scanf("%f", &num);
        cont++;
        
        if(num > maior){
            maior = num;
        }

        if(num < maior && num != 0){
            menor = num;
        }

        media = (media + num);
        mediaA = media / (cont -1);
        
    }

    printf("O maior numero e: %d", maior);
    printf("\nO menor numero e: %d", menor);
    printf("\nA media dos numeros digitados e: %f", mediaA);
    
}