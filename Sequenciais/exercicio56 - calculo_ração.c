#include <stdio.h>
#include <math.h>

main(){
    float pesoKg, racaoGramas1, racaoGramas2, conversaoKgParaGramas, calculo;
    int dias = 5, vezesDias;

    printf("Digite o peso em kg do saco de racao: ");
    scanf("%f", &pesoKg);
    printf("Digite o peso em gramas da racao do primeiro gato: ");
    scanf("%f", &racaoGramas1);
    printf("Digite o peso em gramas da racao do segundo gato: ");
    scanf("%f", &racaoGramas2);
    printf("Digite quantas vezes os gatos comem por dia: ");
    scanf("%f", &vezesDias);



    conversaoKgParaGramas = pesoKg * 1000;
    calculo = conversaoKgParaGramas - racaoGramas1 * dias * vezesDias - racaoGramas2 * dias * vezesDias;

    printf("Em 5 dias sobrara %f gramas de racao", calculo);   

}