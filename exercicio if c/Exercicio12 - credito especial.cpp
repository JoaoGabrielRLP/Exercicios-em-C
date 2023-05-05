#include <stdio.h>

main()
{
	float saldoMedio, credito;
	
	printf("Digite o saldo medio: ");
	scanf("%f", &saldoMedio);	
	
	if(saldoMedio <= 2000)
	{
		credito = saldoMedio * 0.10;
	}
	else if(saldoMedio <= 3000)
	{
		credito = saldoMedio * 0.20;
	}
	else if(saldoMedio <= 4000)
	{
		credito = saldoMedio * 0.25;
	}
	else
	{
		credito = saldoMedio * 0.30;
	}
	
	printf("O seu saldo medio e de: %f e o seu credito e de: %f", saldoMedio, credito);
}
