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
    // primeira linha
    for(int j = 0; j < tam; j++)
        printf("*");
    printf("\n");
    // meio
    for(int i = 0; i < tam - 2; i++)
    {   
        printf("*"); // primeira coluna
        for(int j = 0; j < tam - 2; j++)
            printf(" "); // meio
        printf("*\n"); // ultima coluna
    }
    // ultima linha
    if (tam > 1)
    {
        for(int j = 0; j < tam; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}