#include <stdio.h>

void main(){
    float lado, calcArea;

    printf("Digite o valor do lado: ");
    scanf("%f", &lado);

    calcArea = lado * lado;

    printf("A area do quadrado e de: %f", calcArea);
}