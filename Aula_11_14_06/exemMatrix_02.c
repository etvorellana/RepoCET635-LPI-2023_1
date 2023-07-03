#include <stdio.h>

int main(void)
{
    float notas[19][5];
    printf("Entre com as notas dos alunos:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("Notas na avaliação %d:\n", i + 1);
        for(int j = 0; j < 19; j++)
        {
            printf("Aluno %d: ", j + 1);
            scanf("%f", &notas[j][i]);
        }

    }

    for(int i = 0; i < 19; i++)
    {
        printf("Notas do Aluno %d:\n", i + 1);
        for(int j = 0; j < 5; j++)
        {
            printf("Aavliação %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }

    }

    return 0;
}