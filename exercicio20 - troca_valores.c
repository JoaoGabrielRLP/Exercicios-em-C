#include <stdio.h>

void main(){
    int a = 1, b = 3, c;

    c = a;
    a = b;
    b = c;

    printf("Resultados %d, %d", a, b);
    
}