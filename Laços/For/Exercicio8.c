/*Elabore um algoritmo que leia o nome, idade e sexo de 20 pessoas. A cada leitura, imprima o nome, se a 
pessoa for do sexo masculino, e tiver mais de 21 anos.*/

#include <stdio.h>
#include <math.h>

int main(){
    char nome[20], sexo;
    int idade, i;

    for(i = 1; i <= 20; i++){
        printf("Digite seu nome ai: ");
        gets(nome);
        fflush(stdin);
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        fflush(stdin);
        printf("Digite seu sexo (M ou F): ");
        scanf("%c", &sexo);
        fflush(stdin);

        if(sexo == 'M' && idade > 21){
            printf("Seu nome e %s, seu sexo e %c e sua idade e %d\n", nome, sexo, idade);

        }
    }
}