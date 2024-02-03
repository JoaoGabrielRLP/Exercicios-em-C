#include <stdio.h>

main(){
	int n1, n2;
	
	printf("Digite o numero 1: ");
	scanf("%d", &n1);
	printf("Digite o numero 2: ");
	scanf("%d", &n2);
	
	if(n1 > n2)
	{
		printf("O n1: %d e maior que n2: %d", n1, n2);
	}
	
	else
	{
		printf("O n2: %d e maior que n1: %d", n2, n2);
	}
	
	
}
