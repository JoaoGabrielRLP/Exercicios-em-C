#include <stdio.h>
#include <math.h>

int main(){
    float num, triplo;

    while(num != -999){
        printf("\nDigite um numero diferente de -999: ");
        scanf("%f",&num);
        triplo = num * 3;
        printf("\nO triplo de %f e de: %f", num, triplo);
        
    }
}