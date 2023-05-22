#include <stdio.h>

int main(void)
{
    int num, mun, aux;
    printf("Entre com um valor inteiro de 3 dígitos: ");
    scanf("%d", &num);
    aux = num;          // aux = abc
    mun = aux % 10;     //mun = c
    aux = aux / 10;     //aux = ab
    mun = mun * 10 + aux % 10; //mun = cb
    aux = aux / 10;     //aux = a
    mun = mun * 10 + aux; //mun = cba   
    if (num == mun)
        printf("O número %d é palíndromo\n", num);
    else
        printf("O número %d não é palíndromo\n", num);
    return 0;
}