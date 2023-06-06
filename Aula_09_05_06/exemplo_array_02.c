#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 64
int main(void)
{
    int array[TAM], val;

    srand(time(NULL));

    for(int i =0; i < TAM; i++)
    {
        array[i] = rand() % (TAM*4);
    }

    printf("Entre com um valor inteiro entre 0 e %d: ", TAM*4 - 1);
    scanf("%d", &val);

    for(int i =0; i < TAM; i++)
    {
        printf("%d ", array[i]);
        if((i+1) % 8 == 0)
            printf("\n");
    }

    for(int i =0; i < TAM; i++)
    {
        if(array[i] == val)
        {
            printf("Valor %d encontrado na posição %d\n", val, i);
            break;
        }
    }

    printf("\n---------------------\n");
    for(int i = 0; i < TAM / 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            printf("%d ", array[i*8 + j]);
        }
        printf("\n");
    }

    return 0;
}