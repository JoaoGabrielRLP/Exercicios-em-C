#include <stdio.h>
#include <math.h>

main(){
    float grausCelsius, conversao, mult = 1.8;
    int soma = 32;

    printf("Digite os graus Celsius: ");
    scanf("%f", &grausCelsius);

    conversao = grausCelsius * mult + soma;

    printf("%2.f Graus Celsius em Fahrenheit e de: %f", grausCelsius, conversao);
    
    
    
}