#include <stdio.h>

main(){
	int op;
	float n1, n2, res;
	
	printf("Digite o numero 1: ");
	scanf("%f", &n1);
	printf("Digite o numero 2: ");
	scanf("%f", &n2);
	
	printf("1 - media\n2 - Diferença\n3 - Produto\n4 - Divisao\n");
	scanf("%d", &op);
	
	if(op == 1)
	{	
		res = (n1 + n2) / 2;
	}
	else if(op == 2)
	{
		if(n1 > n2)
		{
			res=n1-n2;	
		}
		else
		{
			res=n2-n1;
		}
	}
	else if(op == 3)
	{
		res = n1 * n2;
	}
	
	else if(op == 4)
	{
		res = n1 / n2;
	}
	
	else 
	{
		printf("Ta chapano caraio? KKKKKKKKKKKKKKKK");
		return 0;
		
	}
	
	printf("O resultado da sua escolha e de: %f", res);	
	
}
