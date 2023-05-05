#include <stdio.h>

void main(){
    int numero, antecessor, sucessor;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    antecessor = numero - 1;
    sucessor = numero + 1;

    printf("O numero e: %d seu antecessor e: %d e seu sucessor e: %d", numero, antecessor, sucessor);
    
    
}