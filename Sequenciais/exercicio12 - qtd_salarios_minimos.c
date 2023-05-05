#include <stdio.h>

void main(){
    float salarioFuncionario, calcSalarioMinimo;
    int salarioMinimo = 1302;

    printf("Digite seu salario: ");
    scanf("%f", &salarioFuncionario);

    calcSalarioMinimo = salarioFuncionario / salarioMinimo;

    printf("Voce ganha %f salarios minimos", calcSalarioMinimo);
}