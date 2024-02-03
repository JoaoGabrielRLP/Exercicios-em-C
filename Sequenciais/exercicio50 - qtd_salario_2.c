#include <stdio.h>
#include <math.h>

main(){
    float salarioMinimo = 1320, salarioAtual, res;

    printf("Digite o valor do salario atual: ");
    scanf("%f", &salarioAtual);

    res = salarioAtual / salarioMinimo;

    printf("Voce ganha aproximadamente: %f salario(s) minimo(s)", res);
}