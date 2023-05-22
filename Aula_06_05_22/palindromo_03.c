#include <stdio.h>

int main(void)
{
    int num, mun, aux;
    printf("Entre com um valor inteiro: ");
    scanf("%d", &num);
    
    aux = num;          // aux = abcde
    mun = 0;
    //for(aux = num; aux != 0; aux = aux / 10)
    while(aux != 0)
    {
        mun = mun * 10 + aux % 10;
        aux = aux / 10;   // apenas para o while
    }

    if (num == mun)
        printf("O número %d é palíndromo\n", num);
    else
        printf("O número %d não é palíndromo\n", num);
    return 0;
}