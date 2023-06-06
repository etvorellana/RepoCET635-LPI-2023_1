#include <stdio.h>

int main(void)
{
    int qtd_creditos;
    float media = 0;
    //float notas[10];
    printf("Digite o número de creditos: ");
    scanf("%d", &qtd_creditos);
    float notas[qtd_creditos];

    printf("Endereço do array: %p\n", notas);
    printf("Endereço do array: %p\n", &notas[0]);
    printf("Endereço do array: %p\n", &notas[1]);
    printf("Tamanho do array: %ld\n", sizeof(notas));
    printf("Tamanho de um elemento do array: %ld\n", sizeof(notas[0]));
    printf("Tamanho de um elemento do array: %ld\n", sizeof(notas[3]));
    printf("notas[1] = %f\n", notas[1]);
    printf("notas[1] = %f\n", notas[4]);


    for (int i = 0; i < qtd_creditos; i++)
    {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        media += notas[i];
    }

    media /= qtd_creditos;
    for (int i = 0; i < qtd_creditos; i++)
    {
        printf("Nota %d: %.2f\t", i + 1, notas[i]);
    }
    printf("Media: %.2f\n", media);

    return 0;
}