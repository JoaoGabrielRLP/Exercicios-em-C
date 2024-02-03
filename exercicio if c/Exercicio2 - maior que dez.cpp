#include <stdio.h>

main(){
	int n1, n2, soma;
	
	printf("Digita um numero ae meu parceiro: ");
	scanf("%d", &n1);
	printf("Digita outro numero ae meu parceiro: ");
	scanf("%d", &n2);
	
	soma = n1 + n2;
	
	if(soma > 10)
	{
		printf("O resultado da soma e de: %d", soma);
	}
	else
	{
		printf("A soma dos numeros e menor ou igual a 10, logo nao sera impresso o resultado");
	}
	
	

}
