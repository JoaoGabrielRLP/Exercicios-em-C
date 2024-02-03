#include <stdio.h>
#include <math.h>

main(){
    float hora, minutos, conversao, conversaoTotal, seg;

    printf("Digite a hora : ");
    scanf("%f",&hora);
    printf("Digite os minutos: ");
    scanf("%f",&minutos);

    conversao = hora * 60;
    conversaoTotal = hora * 60 + minutos;
    seg = conversaoTotal * 60;
    printf("A hora em minutos e de: %f\nO horario total em minutos e de: %f\nO total em segundos e de: %f", conversao, conversaoTotal, seg);

}