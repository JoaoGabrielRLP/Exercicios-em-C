#include <stdio.h>
#include <math.h>

void main(){
     float n1, n2, n3, media;
     int peso1 = 2, peso2 = 3, peso3 = 5;

     printf("Digite a primeira nota: ");
     scanf("%f", &n1);
     printf("Digite a segunda nota: ");
     scanf("%f", &n2);
     printf("Digite a terceira nota: ");
     scanf("%f", &n3);

     media = n1 * peso1 + n2 * peso2 + n3 * peso3 / (peso1 + peso2 + peso3);

     printf("A media final do aluno e de: %f", media);
}