#include <stdio.h>
#include <math.h>

main(){
    float metrosDegrau, metrosSubir, qtdDegrau;

    printf("Digite a altura de cada degrau: ");
    scanf("%f", &metrosDegrau);
    printf("Digite quantos metros quer subir: ");
    scanf("%f", &metrosSubir);

    qtdDegrau = metrosDegrau * metrosSubir;

    printf("Voce precisa subir: %f degraus", qtdDegrau);

}