#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[100];
    char cpf[15];
    char email[100];
    int numMat;
} Aluno;


int main(void)
{
    Aluno alunos[19], aluno;

    strcpy(alunos[0].nome, "João Oliveira");
    strcpy(alunos[0].cpf, "123.456.789-00");
    strcpy(alunos[0].email, "aluno01.cic@uesc.br");
    alunos[0].numMat = 202101234;

    printf("Nome: %s\n", alunos[0].nome);
    printf("CPF: %s\n", alunos[0].cpf);
    printf("Email: %s\n", alunos[0].email);
    printf("Número de Matrícula: %d\n", alunos[0].numMat);

    for(int i = 1; i < 2; i++)
    {
        printf("Entre com o nome do aluno %d: ", i + 1);
        gets(alunos[i].nome);
        printf("Entre com o CPF do aluno %d: ", i + 1);
        scanf("%s", alunos[i].cpf);
        printf("Entre com o email do aluno %d: ", i + 1);
        scanf("%s", alunos[i].email);
        printf("Entre com o número de matrícula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].numMat);
    }

    printf("Nome: %s\n", alunos[1].nome);
    printf("CPF: %s\n", alunos[1].cpf);
    printf("Email: %s\n", alunos[1].email);
    printf("Número de Matrícula: %d\n", alunos[1].numMat);

    return 0;
}