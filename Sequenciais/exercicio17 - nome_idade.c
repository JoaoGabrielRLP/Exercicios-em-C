#include <stdio.h>

void main(){
    char nome[50];
    int idade;

    printf("Digite seu nome: ");
    gets(nome);
    printf("Digite sua idade: ");
    scanf("%d",&idade);

    printf("Seu nome e %s e sua idade e %d", nome, idade);
    
}