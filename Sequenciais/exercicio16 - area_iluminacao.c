#include <stdio.h>

void main(){
    int wattsMetroQuadrado = 18;
    float largura, cumprimento, calcWatts, calcArea;
    
    printf("Digite a largura em metros do local: ");
    scanf("%f", &largura);
    printf("Digite o cumprimento em metros do local: ");
    scanf("%f", &cumprimento);

    calcArea = largura * cumprimento;
    calcWatts = calcArea * wattsMetroQuadrado;

    printf("Para iluminar uma area de %f e preciso de %fW de potencia", calcArea, calcWatts);
    
}