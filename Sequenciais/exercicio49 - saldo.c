#include <stdio.h>
#include <math.h>

main(){
    float salario, saldoAtual, cheque1, cheque2, cpmf = 0.38;

printf("Digite o valor a ser depositado: ");
scanf("%f", &salario);
printf("Digite o valor do primeiro cheque: ");
scanf("%f", &cheque1);
printf("Digite o valor do segundo cheque: ");
scanf("%f", &cheque2);

saldoAtual = salario - cheque1 - cheque1 * cpmf - cheque2 - cheque2 * cpmf;

printf("Seu saldo atual e de: %f", saldoAtual);

}