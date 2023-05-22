#include <stdio.h>  // printf scanf
#include <stdlib.h> // rand

int main(void)
{
    //printf("O tamanho da RAND_MAX: %d\n", sizeof(RAND_MAX));
    //printf("O valor de RAND_MAX: %d\n", RAND_MAX);

    unsigned int seed;
    printf("Entre com uma semente para o rand: ");
    scanf("%u", &seed);
    srand(seed);
    for(int i = 1; i <= 20; i++)
    {
        printf("%8d", 1 + rand() % 6);
        if (i % 5 == 0)
            printf("\n");
    }
    return 0;
}