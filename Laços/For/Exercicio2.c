/*Elabore um algoritmo que leia quatro números, e ao final, imprima a média desses números*/

#include <stdio.h>
#include <math.h>

int main(){
    int i;
    float media, num;

    for(i = 1; i <= 4; i++){
        printf("Digite um numero: ");
        scanf("%f", &num);

        media = media + num;
    }

    printf("A media dos numero e de: %f", media/4);
}