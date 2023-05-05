#include <stdio.h>
#include <math.h>

main(){
    int anoNascimento, anoAtual, conversaoIdade, conversao;

    printf("Digite seu ano de nascimento em aaaa: ");
    scanf("%d",&anoNascimento);
    printf("Digite o ano atual em aaaa: ");
    scanf("%d",&anoAtual);

    if(anoNascimento > anoAtual){
        printf("O ano de nascimento não pode ser maior que o ano atual");
        return;
    }
        
    conversaoIdade = anoAtual - anoNascimento;
    conversao = 2010 - anoNascimento;

    printf("Sua idade atual e de: %d e em 2010 voce tinha: %d anos", conversaoIdade, conversao);

    
    
}