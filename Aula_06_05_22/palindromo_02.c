#include <stdio.h>

int main(void)
{
    int num, mun, aux;
    printf("Entre com um valor inteiro de 5 dígitos: ");
    scanf("%d", &num);
    while(num < 10000 || num > 99999)
    {
        printf("Valor inválido. Entre com um valor inteiro de 5 dígitos: ");
        scanf("%d", &num);
    }
    aux = num;          // aux = abcde
    mun = 0;
    for(int i = 0; i < 5; i++)
    {
        mun = mun * 10 + aux % 10;
        aux = aux / 10;
    }

    /*
    mun = 0;
    mun = mun * 10 + aux % 10;     //mun = e
    aux = aux / 10;     //aux = abcd
    mun = mun * 10 + aux % 10; //mun = de
    aux = aux / 10;     //aux = abc
    mun = mun * 10 + aux % 10; //mun = cde
    aux = aux / 10;     //aux = ab
    mun = mun * 10 + aux % 10; //mun = bcde
    aux = aux / 10;     //aux = a
    mun = mun * 10 + aux; //mun = abcde
    */

    if (num == mun)
        printf("O número %d é palíndromo\n", num);
    else
        printf("O número %d não é palíndromo\n", num);
    return 0;
}