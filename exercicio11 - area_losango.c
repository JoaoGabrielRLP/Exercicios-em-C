#include <stdio.h>

void main(){
    float diagonalMaior, diagonalMenor, calcArea;
    int divisor = 2;

    printf("Digite a diagonal maior: ");
    scanf("%f", &diagonalMaior);
    printf("Digite a diagonal menor: ");
    scanf("%f", &diagonalMenor);

    calcArea = (diagonalMaior * diagonalMenor) / divisor;

    printf("Area do losango e de: %f", calcArea);
}