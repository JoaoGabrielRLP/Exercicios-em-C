#include <stdio.h>

main(){
	float salario, salarioComAumento, aumento = 0.25;
	
	printf("Digite o salario do malandro ai: ");
	scanf("%f", &salario);
	
	salarioComAumento = salario + salario * aumento;
	
	printf("O seu salario de %.2f com aumento ficou de %.2f", salario, salarioComAumento);
	
}
