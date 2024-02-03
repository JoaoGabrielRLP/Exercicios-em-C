#include <stdio.h>

main(){
	float n1, metade;
	
	printf("Digita um numero ae meu parceiro: ");
	scanf("%f", &n1);
	
	if(n1 > 20)
	{
		metade = n1 / 2;
		printf("A metade de %f e de %f", n1, metade);
	}
	else
	{
		printf("O numero nao e maior que 20, logo não sera impresso a metade dele");
	}
	
	

}
