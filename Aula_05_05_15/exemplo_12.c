#include <stdio.h>

/*
    Fazer a variável de controle assumir os valores da 
    seguinte seqüência: 20, 17, 14, 11, 8, 5, 2.
*/

int main(void)
{
    int i = 0;
    printf("%d\n", i);
    for(i = 20; i > 0; i -= 3)
    //for(int i = 1; i <= 100; i++)
    {
        printf("%d\n", i);
    }
    printf("%d\n", i);

    printf("Repetição com um while\n");

    i = 20; // ini
    while(i >= 2) // con de Parada
    {
        printf("%d\n", i);
        i-= 3; // incremento 
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