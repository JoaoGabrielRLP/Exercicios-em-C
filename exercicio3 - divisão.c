#include <stdio.h>

void main(){
    float n1, n2, div;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    div = n1 / n2;

    printf("O resultado de %f dividido por %f e: %f:", n1, n2, div);
    
}