/*Elabore um algoritmo que imprima todos os números de 100 a 105, e ao final, a soma deles*/

#include <stdio.h>
#include <math.h>

int main(){
   int i, soma;

   for(i = 100; i <= 105; i++){
        printf("%d\n", i);

        soma = soma + i;
        
   }
   printf("A soma desses numeros e de: %d", soma);
}