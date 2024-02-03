#include <stdio.h>
#include <math.h>

main(){
    int anoNascimento, anoAtual, conversaoAnos, conversaoMes, conversaoSemanas, conversaoDias;

    printf("Digite seu ano de nascimento em aaaa: ");
    scanf("%d",&anoNascimento);
    printf("Digite o ano atual em aaaa: ");
    scanf("%d",&anoAtual);

    if(anoNascimento > anoAtual){
        printf("O ano de nascimento não pode ser maior que o ano atual");
        return;
    }
        
    conversaoAnos = anoAtual - anoNascimento;
    conversaoMes = conversaoAnos * 12;
    conversaoSemanas = conversaoAnos * 52;
    conversaoDias = conversaoAnos * 365;

    printf("Sua idade em:\nAnos: %d\nMeses: %d\nSemanas: %d\nDias: %d", conversaoAnos, conversaoMes, conversaoSemanas, conversaoDias);
    
}