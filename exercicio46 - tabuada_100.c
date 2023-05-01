#include <stdio.h>
#include <math.h>

main(){
    int numero, tabuada, i;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(i = 0; i <= 100; i++){
        tabuada = numero * i;
        printf("%d x %d = %d\n", numero, i, tabuada);
    }

}