/*Faça um algoritmo que receba o preço de um produto, calcule e mostre, de acordo com as 
tabelas a seguir, o novo preço e a classificação.*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    float preco, aumento, valoFinal;
    char classificacao[50];

    printf("Digite seu preco: ");
    scanf("%f", &preco);

    if(preco < 50){
        aumento = 0.05;
        valoFinal = preco + preco * aumento;
    }
    else if(preco >= 50 && preco <= 100){
        aumento = 0.10;
        valoFinal = preco + preco * aumento;
    }
    else{
        aumento = 0.15;
        valoFinal = preco + preco * aumento;
    }

    if(preco < 80){
        strcpy(classificacao, "Barato");
    }
    else if(preco >= 80 && preco <= 120){
        strcpy(classificacao, "Normal");
    }
    else if(preco > 120 && preco <= 200){
        strcpy(classificacao, "Caro");
    }
    else{
        strcpy(classificacao, "Muito caro");
    }

    printf("Seu preco de %f com aumento ficara %f e sua classificacao e de: %s", preco, valoFinal, classificacao);

    return 0;
}
