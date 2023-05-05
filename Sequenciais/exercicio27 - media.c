#include <stdio.h>
#include <math.h>

void main(){
    float n1, n2, n3, media, qtdNotas = 3;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    media = n1 + n2 + n3 / qtdNotas;
    
    printf("O valor da media do aluno e: %f", media);
}