#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char valor[50];
    int i;
    printf("Digite um valor Inteiro: ");
    fgets(valor, 50, stdin);
    i = atoi(valor);
    printf("Valor Inteiro: %d\n", i);
    return 0;

}