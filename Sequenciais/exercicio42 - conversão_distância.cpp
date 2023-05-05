#include <stdio.h>

main(){
	float pes, conversaoPolegadas, conversaoJardas, conversaoMilhas;
	
	printf("Defina a distancia em pes: ");
	scanf("%f", &pes);
	
	conversaoPolegadas = pes * 12;
	conversaoJardas = pes / 3;
	conversaoMilhas = pes / 5280;
	
	printf("Conversao do valor de %.1f pe(s) em:\nPolegadas: %f\nJardas: %f\nMilhas: %f", pes, conversaoPolegadas, conversaoJardas, conversaoMilhas);
	
	
}
