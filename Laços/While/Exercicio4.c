/*Elabore um algoritmo que leia vários números positivos e imprima, ao final, a média dos números 
digitados*/

#include <stdio.h>
#include <math.h>

int main(){
    int cont = 0;
    float media, num, mediaA;

    while(num > 0){
        printf("Digite um numero: ");
        scanf("%f", &num);   
        cont++;
        media = (media + num); 
        mediaA = media / cont;
    }
    printf("\nA media dos numeros digitados e de: %f", mediaA);
    
}