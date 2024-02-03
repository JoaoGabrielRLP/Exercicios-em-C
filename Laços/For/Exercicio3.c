/*Elabore um algoritmo que leia um número de entrada n que indicará a quantidade de números a serem lidos.
Em seguida, leia n números (conforme o valor informado anteriormente) e imprima o triplo de cada um.*/

#include <stdio.h>
#include <math.h>

int main(){
    int qtd, i;
    float num, triplo;

    printf("Informe quantos numeros serao lidos: ");
    scanf("%d",&qtd);

    for(i = 1; i <= qtd; i++){
        printf("Digite um numero: ");
        scanf("%f",&num);

        triplo = num * 3;

        printf("O triplo do numero %f e de %f\n", num, triplo);
    }   
}