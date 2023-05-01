#include <stdio.h>
#include <math.h>

main(){
    int valorHora, salarioMinimo = 1320, qtdHorasTrabalhadas;
    float imposto, salarioReceber, horaTrabalhada, salarioBruto;
    
    printf("Digite o valor da hora de trabalho: ");
    scanf("%d",&valorHora);
    printf("Informe a quantidade de horas trabalhadas: ");
    scanf("%d",&qtdHorasTrabalhadas);

    horaTrabalhada = salarioMinimo * 0.125;
    salarioBruto = qtdHorasTrabalhadas * valorHora;
    imposto = salarioBruto * 0.03;
    salarioReceber = salarioBruto - imposto;

    printf("Valor da hora trabalhada: %f\nSalario bruto: %f\nImposto: %f\nSalario a receber: %f", horaTrabalhada, salarioBruto, imposto, salarioReceber);

}