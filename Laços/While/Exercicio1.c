/*Elabore um algoritmo que leia várias letras enquanto forem diferentes de F, imprimindo cada letra
logo após a leitura.*/

#include <stdio.h>
#include <math.h>

int main(){
    char letra;   

    while (letra != 'F')
    {
        printf("\nDigite uma letra: ");
        scanf("%c", &letra);
        fflush(stdin);
        printf("%c", letra);
    }
    
}