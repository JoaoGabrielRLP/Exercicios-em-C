#include <stdio.h>

void main(){
   float kilos, conversao, gramas = 1000;

   printf("Digite seu peso em Kilogramas: "); 
   scanf("%f", &kilos);

   conversao =  kilos * gramas;

   printf("Seu peso de %f convertido em gramas e de: %f", kilos, conversao);
}