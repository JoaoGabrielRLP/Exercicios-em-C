#include <stdio.h>
#include <math.h>

main(){
    float raio, comprimentoEsfera, areaEsfera, volumeEsfera, pi = 3.1415;
    int mult = 2;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    comprimentoEsfera = mult * pi * raio;
    areaEsfera = pi * pow(raio, 2);
    volumeEsfera = 4 / 3 * pi * pow(raio, 3);

    printf("Comprimento da esfera: %f \nArea da esfera: %f \nVolume da esfera: %f", comprimentoEsfera, areaEsfera, volumeEsfera);
    
    
}