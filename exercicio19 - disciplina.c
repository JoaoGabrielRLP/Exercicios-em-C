#include <stdio.h>

void main(){
    char nomeDisciplina[20], descricaoDisciplina[35];
    int frequencia, mediaAprovacao;

    printf("Digite o nome da disciplina: ");
    gets(nomeDisciplina);
    printf("Descreva a disciplina: ");
    gets(descricaoDisciplina);
    printf("Informe a frequência do aluno: ");
    scanf("%d", &frequencia);
    printf("Informe a media para aprovacao: ");
    scanf("%d", &mediaAprovacao);

    printf("A disciplina de %s e descrita como: %s, sua frequencia e de %d e a media minima e %d", nomeDisciplina, descricaoDisciplina, frequencia, mediaAprovacao);
    
}