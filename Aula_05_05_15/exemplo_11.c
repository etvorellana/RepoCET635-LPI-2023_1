#include <stdio.h>

/*
    Fazer a variável de controle assumir valores múltiplos 
    de 7, desde 7 até 70.
*/

int main(void)
{
    int i = 0;
    printf("%d\n", i);
    for(i = 7; i <= 70; i+=7)
    //for(int i = 1; i <= 100; i++)
    {
        printf("%d\n", i);
    }
    printf("%d\n", i);

    printf("Repetição com um while\n");

    i = 7; // ini
    while(i <= 70) // con de Parada
    {
        printf("%d\n", i);
        i+= 7; // incremento 
    }   

    printf("Repetição com um do-while\n");

    i = 7; // ini
    do
    {
        printf("%d\n", i);
        i+= 7; // incremento
    } while(i <= 70); // con de Parada

    return 0;
}