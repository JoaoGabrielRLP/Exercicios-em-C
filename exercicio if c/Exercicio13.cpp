/*O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem 
do distribuidor e dos impostos, ambos aplicados ao custo de fábrica. As porcentagens 
encontram-se na tabela a seguir. Faça um algoritmo que receba o custo de fábrica de um 
carro e mostre o preço ao consumidor.*/

#include <stdio.h>

main()
{
    float valorFabrica, dist, imposto;
    printf("Digite o valor de fabrica: ");
    scanf("%f", &valorFabrica);

    if (valorFabrica <= 15000)
    {
        dist = 0.05;
        valorFabrica = valorFabrica + valorFabrica * dist;
    }
    else if (valorFabrica > 15000 && valorFabrica <= 25000)
    {
        dist = 0.10;
        imposto = 0.15;
        valorFabrica = valorFabrica + valorFabrica * dist + valorFabrica * imposto;
    }

    else{
        dist = 0.15;
        imposto = 0.20;
        valorFabrica = valorFabrica + valorFabrica * dist + valorFabrica * imposto;
    }

    printf("O valor final e de: %f", valorFabrica);
}