#include <stdio.h>
#include <math.h>

main(){
    float areaCirculo, pi = 3.1415, raio;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    areaCirculo = pi * pow(raio, 2);

    printf("A area do circulo e de: %f", areaCirculo);    
    
}