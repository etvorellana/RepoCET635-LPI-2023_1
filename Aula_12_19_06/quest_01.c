#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Implementar uma aplicação em C que: 
- solicite ao usuário um valor de ponto flutuante;
- leia da entrada padrão uma string, utilizando a função fgets();
- extraia o valor de ponto flutuante da string utilizando a função 
atof();
- Caso o valor fornecido pelo usuário não seja um valor de ponto 
flutuante imprima uma mensagem de erro e repita tudo novamente.
Teste sua aplicação e verifique se está funcionando como esperado. 

*/

int main(void)
{
    char str[100];
    float num;

    printf("Entre com um valor de ponto flutuante diferente de zero: ");
    fgets(str, 100, stdin);
    num = atof(str);
    //while((str[0] != '0' && num == 0) || !(str[0] == '.' && str[1] == '0'))
    while((str[0] != '0' && num == 0))
    {
        printf("Entrada incorreta!!!!!\n");
        printf("Entre com um valor de ponto flutuante diferente de zero: ");
        fgets(str, 100, stdin);
        num = atof(str);
    }
    int n = strlen(str);
    str[n-1] = '\0';
    printf("Valor de ponto flutuante: %s - %f\n", str, num);
    return 0; 
}