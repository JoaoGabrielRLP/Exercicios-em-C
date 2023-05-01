#include <stdio.h>

void main(){
    float n1, n2, soma, sub, mult;
    printf("Digite o primeiro numero: "); 
    scanf("%f", &n1);
    printf("Digite o segundo numero: "); 
    scanf("%f", &n2);

    if(n1 == 0 || n2 == 0){
        printf("Digite um numero maior que 0");
        return;
    }    

    soma = n1 + n2;
    sub = n1 - n2; 
    mult = n1 * n2;

    printf("Dados: \n Primeiro numero: %f\n Segundo numero: %f\n Soma: %f\n Subtracao: %f\n Multiplicacao: %f", n1, n2, soma, sub, mult);
    
}