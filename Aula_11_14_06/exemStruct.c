#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void)
{
    struct{
        char nome[100];
        char cpf[15];
        char email[100];
        int numMat;
    } alunos[19];

    strcpy(alunos[0].nome, "João Oliveira");
    strcpy(alunos[0].cpf, "123.456.789-00");
    strcpy(alunos[0].email, "aluno01.cic@uesc.br");
    alunos[0].numMat = 202101234;

    printf("Nome: %s\n", alunos[0].nome);
    printf("CPF: %s\n", alunos[0].cpf);
    printf("Email: %s\n", alunos[0].email);
    printf("Número de Matrícula: %d\n", alunos[0].numMat);

    char nome[19][100] = {"João Oliveira", "Julia Silva"};
    char cpf[19][15] = {"123.456.789-00", "987.654.321-00"};
    char email[19][100] = {"aluno01_cic@uesc.br", "aluno02_cic@uesc.br"}; 
    int numMat[19] = {202101234, 202211235};

    return 0;
}