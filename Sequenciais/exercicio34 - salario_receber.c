#include <stdio.h>
#include <math.h>

main(){
    float salarioBase, salarioReceber, gratificacao = 0.20, imposto = 0.15;

    printf("Digite o salario base: ");
    scanf("%f", &salarioBase);

    salarioReceber = salarioBase - salarioBase * imposto + salarioBase * gratificacao;

    printf("Seu salario final e de: %f", salarioReceber);
}