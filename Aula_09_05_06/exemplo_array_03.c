#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10000

int main(void)
{
    int array[TAM], val;

    srand(time(NULL));

    for(int i =0; i < TAM; i++)
    {
        array[i] = rand() % 256;
    }

    for(int i =0; i < TAM; i++)
    {
        printf("%d ", array[i]);
        if((i+1) % 8 == 0)
            printf("\n");
    }

    printf("\n---------------------\n");

    for(int i = 0;i < TAM/2; i++)
    {
        int aux = array[i];
        array[i] = array[TAM - 1 - i];
        array[TAM - 1 - i] = aux;

    }

    for(int i =0; i < TAM; i++)
    {
        printf("%d ", array[i]);
        if((i+1) % 8 == 0)
            printf("\n");
    }

    int histo[256] = {0};
    for(int i = 0; i < TAM; i++)
    {
        ++histo[array[i]];
    }    

    for(int i = 0; i < 256; i++)
    {
        printf("%d - %d \n", i, histo[i]);
    }


    return 0;
}