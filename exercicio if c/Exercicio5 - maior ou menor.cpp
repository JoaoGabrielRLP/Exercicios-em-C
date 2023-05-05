#include <stdio.h>

main(){
	int n1, n2;
	
	printf("Digite o numero 1: ");
	scanf("%d", &n1);
	printf("Digite o numero 2: ");
	scanf("%d", &n2);
	
	if(n1 > n2)
	{
		printf("O maior é primeiro numero: %d", n1);
	}
	
	else
	{
		printf("O maior é o segundo numero: %d", n2);
	}
	
	
}
