#include <stdio.h>
#include <math.h>

main(){
    float deposito, rendimento, taxa, totalRendimento;

    printf("Digite o deposito: ");
    scanf("%f", &deposito);
    printf("Digite a taxa de juros: ");
    scanf("%f", &taxa);

    totalRendimento = deposito * (taxa/100);
    rendimento = deposito + deposito * (taxa/100);

    printf("O valor do rendimento e de %f e o total do rendimento e de %f", totalRendimento, rendimento);
}