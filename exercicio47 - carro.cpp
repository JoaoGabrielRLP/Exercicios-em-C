#include <stdio.h>

main(){
	float carroNovo, precoFabrica, taxaLucro, taxaImposto, impostos, lucro;
	
	printf("Informe o preco de fabrica: ");
	scanf("%f", &precoFabrica);
	printf("Informe a taxa de lucro: ");
	scanf("%f", &taxaLucro);
	printf("Informe a taxa de impostos: ");
	scanf("%f", &taxaImposto);
	
	lucro = precoFabrica*taxaLucro / 100;
	impostos = precoFabrica * taxaImposto / 100;
	carroNovo = precoFabrica + impostos + lucro;
	
	printf("O valor do lucro: %f\n", lucro);
	printf("O valor do imposto: %f\n", impostos);
	printf("O valor do carro: %f", carroNovo);
	
}
