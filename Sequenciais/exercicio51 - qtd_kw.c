#include <stdio.h>
#include <math.h>

main(){
    int salarioMinimo = 1320, qtdKw, valorReaisKw, valorPagar, valorDesconto;

    printf("Informe a quantidade de Quilowatts consumida: ");
    scanf("%d", &qtdKw);

    valorReaisKw = salarioMinimo / 5;
    valorPagar = valorReaisKw * qtdKw;
    valorDesconto = valorPagar - valorPagar * 0.15;

    printf("Valor em reais de por KW: %d\nValor a pagar: %d\nValor a pagar com desconto: %d", valorReaisKw, valorPagar, valorDesconto);

}
