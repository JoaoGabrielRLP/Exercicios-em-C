#include <stdio.h>
#include <math.h>

main(){
    int areaTrapezio, baseMaior, baseMenor, altura, divisor = 2;

    printf("Digite a primeira base do trapezio: ");
    scanf("%d", &baseMaior);
    printf("Digite a segunda base do trapezio: ");
    scanf("%d", &baseMenor);
    printf("Digite a altura do trapezio: ");
    scanf("%d", &altura);

    areaTrapezio =((baseMaior + baseMenor) * altura) / 2;

    printf("A area do trapezio e de: %d", areaTrapezio);
    
}