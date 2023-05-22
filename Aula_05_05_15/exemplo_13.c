#include <stdio.h>

/*
    Fazer a variável de controle assumir os valores da seguinte 
    sequência: 2, 4, 8, 16, 32, 64, 128, 256, 512, …, 2048.
*/

int main(void)
{
    int i = 0;
    printf("%d\n", i);
    for(i = 2; i <= 2048; i *= 2)
    //for(int i = 1; i <= 100; i++)
    {
        if (i == 8) continue;
        printf("%d\n", i);
    }
    printf("%d\n", i);

    printf("Repetição com um while\n");

    i = 2; // ini
    while(i <= 2048) // con de Parada
    {
        if (i == 8) i *= 2;
        printf("%d\n", i);
        i*= 2; // incremento 
    }   

    printf("Repetição com um do-while\n");

    i = 20; // ini
    do
    {
        printf("%d\n", i);
        i-= 3; // incremento
    } while(i >= 2); // con de Parada

    return 0;
}