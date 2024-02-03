#include <stdio.h>
#include <math.h>

void main(){
	int numero, numeroQuadrado, numeroCubo;
	float numeroRaizQuadrada, numeroRaizCubica;
	
	printf("Digite um numero ai meu querido: ");
	scanf("%d", &numero);
	
	numeroQuadrado = pow(numero, 2);
	numeroCubo = pow(numero, 3);
	numeroRaizQuadrada = sqrt(numero);
	numeroRaizCubica = cbrt(numero);
	
	printf("O numero %d ao quadrado e de %d ao cubo e %d a raiz quadrada e de %f e a raiz cubica e de %f", numero, numeroQuadrado, numeroCubo, numeroRaizQuadrada, numeroRaizCubica);
}
