#include <stdio.h>

main(){
	float salario, aumentoPorcentagem, salarioFinal;
	int divisor = 100;
	
	printf("Digite o salario do malandro ai: ");
	scanf("%f", &salario);
	printf("Digite a porcentagem de aumento: ");
	scanf("%f", &aumentoPorcentagem);
	
	salarioFinal = salario + salario * aumentoPorcentagem / divisor;
	
	printf("Seu salario de %.2f com o aumento de %.2f fica %.2f", salario, aumentoPorcentagem, salarioFinal);
	
}
