#include <stdio.h>

void main(){
    float salarioFixo, vendas, comissao = 0.04, calcComissao,   calcSalario;

    printf("Digite o salario do querido: ");
    scanf("%f", &salarioFixo);
    printf("Digite quanto ele vendeu: ");
    scanf("%f", &vendas);
    
    calcComissao = vendas * comissao;
    calcSalario = salarioFixo + calcComissao;

    printf("A comissao do vendedor e de %f e o salario somado com a comissao e de: %f", calcComissao, calcSalario);
}