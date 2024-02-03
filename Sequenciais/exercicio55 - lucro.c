#include <stdio.h>
#include <math.h>

main(){
    float custo, valorIngresso, lucro;

    printf("Digite o custo do  show: ");
    scanf("%f", &custo);
    printf("Digite o valor do ingresso do show: ");
    scanf("%f", &valorIngresso);

    lucro = custo / valorIngresso;

    printf("Para atingir o valor do show e preciso vender %f ingressos: ", lucro);
}
