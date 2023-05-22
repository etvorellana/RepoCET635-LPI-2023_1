#include <stdio.h>

/*
    Fazer a variável de controle assumir valores de 1 a 100, 
    incluídos 1 e 100, em incrementos de 1.
*/

int main(void)
{
    int i = 0;
    printf("%d\n", i);
    for(i = 1; i <= 100; i++)
    //for(int i = 1; i <= 100; i++)
    {
        printf("%d\n", i);
    }
    printf("%d\n", i);

    printf("Repetição com um while\n");

    i = 1; // ini
    while(i <= 100) // con de Parada
    {
        printf("%d\n", i);
        i++; // incremento 
    }   

    printf("Repetição com um do-while\n");

    i = 1; // ini
    do
    {
        printf("%d\n", i);
        i++; // incremento
    } while(i <= 100); // con de Parada

    return 0;
}