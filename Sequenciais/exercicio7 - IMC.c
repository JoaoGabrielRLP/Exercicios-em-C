#include <stdio.h>

void main(){
    float peso, engordar = 0.15, emagrecer = 0.20, calcGordo, calcMagro;

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    calcGordo = peso + ( peso* engordar);
    calcMagro = peso - (peso * emagrecer);

    printf("Seu peso atual e de %f, se você engordar 15 por cento, fica com: %f e se emagrecer 20 por cento fica com %f", peso, calcGordo, calcMagro);
}