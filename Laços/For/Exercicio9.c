/*Elabore um algoritmo que leia o nome, nota da avaliação 1, e nota da avaliação 2 de 15 alunos. Após cada leitura, imprimir o nome, nota da avaliação 1, nota da avaliação 2 e média aritmética de cada aluno*/

#include <stdio.h>
#include <math.h>

int main(){
    char nome[25];
    int i;
    float n1, n2, media;

    for (i = 1; i <= 3; i++)
    {
        printf("Informe seu nome: ");
        gets(nome);
        fflush(stdin);
        printf("Informe a nota 1: ");
        scanf("%f", &n1);
        fflush(stdin);
        printf("Informe a nota 2: ");
        scanf("%f", &n2);
        fflush(stdin);
        media = (n1 + n2) / 2;

        printf("A nota desse aluno e de: %f\n", media);
    }
    
}