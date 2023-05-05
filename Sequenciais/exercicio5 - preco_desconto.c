#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main(){
    float preco, desconto = 0.1, calc;

    printf("Digite o preco: ");
    scanf("%f", &preco);

    calc = preco - (preco * desconto);

    printf("O valor de %f com desconto de 10 por cento e de: %f", preco, calc);

    getch();
}