#include <stdio.h>

void main(){
    int grauCelsius, somaTrintaEDois = 32;
    float multiplicador = 1.8, conversaoFahrenheit;

    printf("Digite quantos graus faz hoje: ");
    scanf("%d", &grauCelsius);

    conversaoFahrenheit = grauCelsius * multiplicador + somaTrintaEDois;

    printf("A temperatura de %d graus celsius em Fahrenheit e de %f", grauCelsius, conversaoFahrenheit);
    
    
}