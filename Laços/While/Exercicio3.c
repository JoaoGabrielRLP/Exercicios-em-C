/*Elabore um algoritmo que leia vários números enquanto forem positivos e imprima, ao final, quantos 
números foram digitados.*/

#include <stdio.h>
#include <math.h>

int main(){
    int num = 0, cont = 0;

    while(num >= 0){
        printf("Digite apenas numeros positivos para continuar no loop: ");
        scanf("%d",&num);
        cont++;
    }
    printf("A quantidade de numeros digitados foi de: %d", cont);
}