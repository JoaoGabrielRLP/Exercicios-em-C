#include <stdio.h>
#include <math.h>

main(){
    float hora, conversao, minutos;

    printf("Digite a hora : ");
    scanf("%f",&hora);
    printf("Digite os minutos: ");
    scanf("%f",&minutos);

    conversao = hora * 60 + minutos;
    
    printf("A hora em minutos e de: %f", conversao);

}