#include <stdio.h>

void main(){
    float salario, multa = 0.02, conta1, conta2, calculoRestante;

    printf("Digite o seu salario: ");
    scanf("%f", &salario);
    printf("Digite o valor da primeira conta: ");
    scanf("%f", &conta1);
    printf("Digite o valor da segunda conta: ");
    scanf("%f", &conta2);

    calculoRestante = salario - (conta1 + conta1 * multa + conta2 + conta2 * multa);

    printf("O restante do seu salario e de: %f", calculoRestante);
    
    
}