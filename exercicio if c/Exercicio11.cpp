#include <stdio.h>
#include <math.h>
main()
{
	float salario, aumento, valorReajustado;
	
	printf("Informe o salario do cria: ");
	scanf("%f", &salario);
	
	if(salario <= 1500)
	{
		aumento = 0.35;
		valorReajustado = salario + salario * aumento;
		printf("O seu salario com o aumento e de: %f", valorReajustado);		
	}
	else
	{
		aumento = 0.15;
		valorReajustado = salario + salario * aumento;
		printf("O seu salario com o aumento e de: %f", valorReajustado);	
	}
}
