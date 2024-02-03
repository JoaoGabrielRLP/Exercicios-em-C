#include <stdio.h>
#include <math.h>
#include <locale.h>

void main(){
    float xnum1, xnum2, x;

    printf("Digite o primeiro numero: ");
    scanf("%f", &xnum1);
    printf("Digite o segundo numero: ");
    scanf("%f", &xnum2);

    x = xnum1 + xnum2 + 2 * (xnum1 - xnum2);

    printf("O valor de x e de: %f", x);
}