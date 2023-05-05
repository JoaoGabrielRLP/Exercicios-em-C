#include <stdio.h>

void main(){
    int numero, i, calc;
    
    printf("Digite um numero de 1 a 10: ");
    scanf("%d", &numero);   

    for (i = 0; i <= 10; i++)
    {
        calc = numero * i;
        printf("%d\n", calc);
    }
    
    
    
}