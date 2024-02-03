#include <stdio.h>

main(){
	int n1, n2, media;
	
	printf("Digita a primeira nota: ");
	scanf("%d", &n1);
	printf("Digita a segunda nota: ");
	scanf("%d", &n2);
	
	media = (n1 + n2) / 2;
	
	if(media < 3)
	{
		printf("Reprovado");
	}
	else if(media >= 3 || media < 7)
	{
		printf("Exame");
	}
	
	else{
		printf("Aprovado");
	}

}
