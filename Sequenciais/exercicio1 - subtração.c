#include <stdio.h>

void main()
{
    float n1, n2, sub;
    printf("Digite o numero um: ");
    scanf("%f", &n1);
    printf("Digite o numero dois: ");
    scanf("%f", &n2);

    sub = n1 - n2;
    printf("O resultado da subtracao e de: %f", sub);
    getch();
    
}