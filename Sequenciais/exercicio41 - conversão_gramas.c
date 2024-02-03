#include <stdio.h>
#include <math.h>

main(){
    float pesoKilos, conversaoGramas;

    printf("Digite o seu peso em Kg: ");
    scanf("%f", &pesoKilos);

    conversaoGramas = pesoKilos * 1000;

    printf("O seu peso de %2.f Kg em gramas e de: %f ", pesoKilos, conversaoGramas);

    
    
    
}