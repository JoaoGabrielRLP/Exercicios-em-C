#include <stdio.h>

void main(){
    char nome[50], endereco[45], cidade[20], UF[2], cep[10], grauEscolaridade[25], curso[20];
    int telefone, cpf, rg, nascimento;

    printf("Digite seu nome: ");
    gets(nome);
    printf("Digite seu endereço: ");
    gets(endereco);
    printf("Digite sua cidade: ");
    gets(cidade);
    printf("Digite sua UF: ");
    gets(UF);
    printf("Digite seu cep: ");
    gets(cep);
    printf("Digite seu grau de escolaridade: ");
    gets(grauEscolaridade);
    printf("Digite o curso que ira lecionar: ");
    gets(curso);
    printf("Digite seu telefone: ");
    scanf("%d", &telefone);
    printf("Digite seu cpf: ");
    scanf("%d", &cpf);
    printf("Digite seu rg: ");
    scanf("%d", &rg);
    printf("Digite sua data de nascimento: ");
    scanf("%d", &nascimento);

    printf("Dados do professor: \nNome:%s\nEndereco:%s\nCidade:%s\nUF:%s\nCep:%s\nGrau de escolaridade:%s\ncurso:%s\ntelefone:%d\ncpf:%d\nrg:%d\nnascimento:%d\n", nome, endereco, cidade, UF, cep, grauEscolaridade, curso, telefone, cpf, rg, nascimento);
    
}