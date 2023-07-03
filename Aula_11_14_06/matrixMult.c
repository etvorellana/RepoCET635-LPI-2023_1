#include <stdio.h>
#include <stdlib.h>
#define N 3

int main(void)
{
    double A[N][N], B[N][N], C[N][N];
    printf("Exemplo de multiplicação de Matrizes\n");
    printf("Preenchendo as matrizes A e B\n");
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            A[i][j] = (float)rand() / RAND_MAX;
            B[i][j] = 1.0;
            printf("A[%d][%d] = %lf", i, j, A[i][j]);    
        }
        printf("\n");
    }

    printf("Calculando a matriz C = A * B\n");
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++) 
        {
            C[i][j] = 0.0;
            for(int k = 0; k < N; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
            printf("C[%d][%d] = %lf", i, j, C[i][j]);
        }
        printf("\n");
    }

    return 0;
}