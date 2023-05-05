#include <stdio.h>

main(){
	int n1, n2, n3, n4, media;
	
	printf("Digita a primeira nota: ");
	scanf("%d", &n1);
	printf("Digita a segunda nota: ");
	scanf("%d", &n2);
	printf("Digita a terceira nota: ");
	scanf("%d", &n3);
	printf("Digita a quarta nota: ");
	scanf("%d", &n4);
	
	media = (n1 + n2 + n3 + n4) / 4;
	
	if(media <= 6)
	{
		printf("Se fudeu fiote KKKKKKKKKKKKKKKKKKK");
	}
	else{
		printf("Parabens ae loko");
	}

}
