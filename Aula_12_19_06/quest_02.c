#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Implementar uma aplicação em C que: 
- solicite ao usuário um valor de inteiro;
- leia da entrada padrão uma string, utilizando a função fgets();
- extraia o valor inteiro da string utilizando a função atoi();
- caso o valor fornecido pelo usuário não seja um inteiro imprima uma mensagem de erro e repita tudo novamente.
Teste sua aplicação e verifique se está funcionando como esperado. 
*/

int main(void)
{
    char str[100];
    int num;

    printf("Entre com um valor inteiro: ");
    fgets(str, 100, stdin);
    num = atoi(str);
    while((str[0] != '0' && num == 0))
    {
        printf("Entrada incorreta!!!!!\n");
        printf("Entre com um valor inteiro: ");
        fgets(str, 100, stdin);
        num = atoi(str);
    }
    int n = strlen(str);
    str[n-1] = '\0';
    printf("Valor de ponto flutuante: %s - %d\n", str, num);
    return 0; 
}