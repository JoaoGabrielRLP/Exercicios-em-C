#include <stdio.h>
#include <math.h>
main()
{
	float salario, aumento = 0.30, valorReajustado;
	
	printf("Informe o salario do cria: ");
	scanf("%f", &salario);
	
	if(salario < 1500)
	{
		valorReajustado = salario + salario * aumento;
		printf("O seu salario com o aumento e de: %f", valorReajustado);		
	}
	else
	{
		printf("Voce nao tem direito ao aumento");	
	}
}
