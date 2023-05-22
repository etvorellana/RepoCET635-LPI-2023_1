#include <stdio.h>

int main(void)
{
    int tam;
    printf("Entre com o tamanho do lado do quadrado (0 <= a <= 20): ");
    scanf("%d", &tam);
    while(tam < 0 || tam > 20)
    {
        printf("Tamanho inválido. Entre com o tamanho do lado do quadrado (0 <= a <= 20): ");
        scanf("%d", &tam);
    }
    for(int i = 0; i < tam; i++)
    {
        for(int j = 0; j < tam; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}