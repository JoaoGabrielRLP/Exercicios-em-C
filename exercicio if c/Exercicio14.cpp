/*Faça um algoritmo que receba o salário atual de um funcionário e, usando a tabela a seguir, 
calcule e mostre o valor do aumento e o novo salário.*/

#include <stdio.h>

main()
{
    float salario, aumento, valoFinal;

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    if(salario < 3000){
        aumento = 0.15;
        valoFinal = salario + salario * aumento;
    }

    else if(salario >= 3000 && salario < 6000){
        aumento = 0.10;
        valoFinal = salario + salario * aumento;
    }

    else if(salario >= 6000 && salario <= 9000){
        aumento = 0.05;
        valoFinal = salario + salario * aumento;
    }

    else{
        aumento = 0;
        valoFinal = salario + salario * aumento;
    }

    printf("Seu salario de %f com aumento ficara %f", salario, valoFinal);
}