#include <stdio.h>
#include <math.h>

main(){
    float numeroReal, parteInteira, parteFracionaria, parteArredondada;

    printf("Digite um numero real: ");
    scanf("%f",&numeroReal);

    printf("Parte inteira: %d\nParte fracionaria: %f\nArredondado: %d", (int)numeroReal, numeroReal - (int)numeroReal, (int)round(numeroReal));

}