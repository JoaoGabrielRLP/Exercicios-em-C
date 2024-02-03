#include <stdio.h>

void main()
{
    float n1, n2, n3, prod;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%f", &n3);

    prod = n1 * n2 * n3;

    printf("O resultado de %f * %f * %f e de: %f", n1, n2, n3, prod);
    getch();
}