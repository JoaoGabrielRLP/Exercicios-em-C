#include <stdio.h>

void main(){
    float baseMaior, baseMenor, altura, calcArea;
    int divisor = 2;

    printf("Digite o valor da base maior: ");
    scanf("%f", &baseMaior);
    printf("Digite o valor da base menor: ");
    scanf("%f", &baseMenor);
    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    calcArea = ((baseMaior + baseMenor) * altura) / divisor;

    printf("A área do trapezio e de: %f", calcArea);


}