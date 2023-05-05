#include <stdio.h>
#include <math.h>

void main(){
  float seno, cosseno, tangente, cossecante, secante, cotangente, numero;
  
  printf("Digite um numero: ");
  scanf("%f", &numero);
  
  seno = sin(numero);
  printf("Valor de seno de %f = %f \n",numero,seno);
  
  cosseno = cos(numero);
  printf("Valor de cosseno de %f = %f \n",numero,cosseno);
  
  tangente = tan(numero);
  printf("Valor de tangente de %f = %f \n",numero,tangente);

  cossecante = 1/sin(numero);
  printf("Valor de tangente de %f = %f \n",numero,cossecante);

  secante = 1/cos(numero);
  printf("Valor de tangente de %f = %f \n",numero,secante);

  cotangente = 1/tan(numero);
  printf("Valor de tangente de %f = %f \n",numero,cotangente);
  
}