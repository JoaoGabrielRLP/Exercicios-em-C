#include <stdio.h>
#include <math.h>

main(){
    float valorHoraAula, salarioLiquido, aulasMes, descontoInss, salarioTotal;
    int horasTrabalhadasDia;

    printf("Digite o valor da aula por hora: ");
    scanf("%f", &valorHoraAula);
    printf("Digite a quantidade horas trabalhadas no por dia: ");
    scanf("%d", &horasTrabalhadasDia);
    printf("Digite a quantidade de aulas por mes: ");
    scanf("%f", &aulasMes);
    

    salarioTotal = valorHoraAula * horasTrabalhadasDia * aulasMes;

    if(salarioTotal <= 1302.00)
        descontoInss = 0.075;
    else if(salarioTotal >= 1302.01 && salarioTotal <= 2571.29)
        descontoInss = 0.09;
    else if(salarioTotal >= 2571.30 && salarioTotal <= 3856.94)
        descontoInss = 0.12;
    else if(salarioTotal >= 3856.95 && salarioTotal <= 7507.49)
        descontoInss = 0.14;

    salarioLiquido = salarioTotal - salarioTotal * descontoInss;

    printf("Seu salario total e de %f e seu salario liquido e de: %f", salarioTotal, salarioLiquido);    
    
}