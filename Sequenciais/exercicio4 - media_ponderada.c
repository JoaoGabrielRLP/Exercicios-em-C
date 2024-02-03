#include <stdio.h>

void main(){
    float n1, n2, media;
    int peso1 = 2, peso2 = 3;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    media = (n1 * peso1 + n2 * peso2) / (peso1 + peso2);

    printf("O resultado da media ponderada e: %f", media);
    getch();
}