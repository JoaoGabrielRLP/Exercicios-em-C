#include <stdio.h>
#include <math.h>

main(){
    float salarioBase, imposto = 0.10, total;
    int gratificacao = 50;

    printf("Digite o salario base: ");
    scanf("%f", &salarioBase);

    total = salarioBase - salarioBase * imposto + gratificacao;

    printf("O seu salario a receber e de: %f", total);
}