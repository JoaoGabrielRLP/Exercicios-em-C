#include <stdio.h>
#include <math.h>

main(){
    float despesas, despesasFinal, gorjeta = 0.10;

    printf("Digite a despesa total do restaurante: ");
    scanf("%f", &despesas);

    despesasFinal = despesas + despesas * gorjeta;

    printf("O valor da despesa final com a gorjeta e de: %f", despesasFinal);

    system("pause");
    getch();
}