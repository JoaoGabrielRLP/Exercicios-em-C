/*Elabore um algoritmo que leia a idade e sexo (M– masculino, F – feminino) de várias pessoas. 
Calcule e imprima a idade média, total de pessoas do sexo feminino, e o total de pessoas do sexo 
masculino. O algoritmo termina quando se digita 0 para a idade.*/

#include <stdio.h>
#include <math.h>

int main(){
    int total, contIdade = 0, cont, qtdF = 0, qtdM = 0;
    float idade, media = 0,  mediaA = 0;
    char sexo;

    while (idade > 0)
    {
        
        printf("\nDigite seu sexo (M ou F): ");
        scanf("%c", &sexo);
        fflush(stdin);
        printf("\nDigite uma idade maior que 0 para continuar no Loop: ");
        scanf("%f",&idade);
        fflush(stdin);
        contIdade++;

        media = (media + idade);
        cont = contIdade - 1;
        mediaA = media / cont;

        if(sexo == 'M'){
            qtdM++;
        }
        if(sexo == 'F'){
            qtdF++;
        }
    }

    printf("\nA idade media e de: %f", mediaA);
    printf("\nPessoas masculinas: %d", qtdM);
    printf("\nPessoas femininas: %d", qtdF);
}