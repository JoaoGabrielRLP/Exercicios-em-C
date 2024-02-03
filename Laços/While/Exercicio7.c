/*Elabore um algoritmo que leia a idade e o estado civil (C – casado, S – solteiro, V – viúvo, e D –
desquitado ou separado) de várias pessoas. Considere que o algoritmo termina quando se digita um 
número menor do que 0 para a idade. Ao final, calcule e imprima: 
a. A quantidade de pessoas casadas; 
b. A quantidade de pessoas solteiras; 
c. A média das idades das pessoas viúvas; 
d. A porcentagem de pessoas desquitadas ou separadas, dentre todas as pessoas analisadas.*/

#include <stdio.h>
#include <math.h>

int main(){
    char estado;
    int idade, contCasada, contSolteira, contViuvas, contDequi, recebeIdadeViuva;
    float mediaViuvas, dequisitadas;

    while(idade >= 0){
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        printf("Digite seu estado civil: ");
        scanf("%c", &estado);

        switch(estado){
            case 'C':
                contCasada++;
                break;
            case 'S': 
                contSolteira++;  
                break;
            case 'V':   
                recebeIdadeViuva = idade;
                contViuvas++;
                mediaViuvas = mediaViuvas + recebeIdadeViuva / contViuvas;
                break;
            case 'D':
                
        }       
        
    }
}