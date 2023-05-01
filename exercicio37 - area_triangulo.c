#include <stdio.h>
#include <math.h>

main(){
    int base, altura, divisor = 2, areaTriangulo;

    printf("Digite o valor da base do triangulo: ");
    scanf("%d", &base);
    printf("Digite o valor da altura do triangulo: ");
    scanf("%d", &altura);

    areaTriangulo = base * altura / divisor;

    printf("A area do triangulo e de: %d", areaTriangulo);
}