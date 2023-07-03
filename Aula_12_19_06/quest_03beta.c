#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Implemente uma aplicação em C que leia do teclado uma string 
    no formato dd/mm/aaaa, ao alguma variação desse formato 
    (Ex. 5/12/2022, 05/02/23, 07/5/2024), e imprima na tela 
    por separado dia, mês e ano.
*/

int main(void)
{
    char str[100];
    int dia, mes, ano;
    printf("Entre com uma data no formato dd/mm/aaaa: ");
    fgets(str, 100, stdin);
    char aux[10];


    char *aux2;
    aux2 = strchr(str, '/');
    printf("aux2: %s\n", aux2);
    dia = atoi(str);
    mes = atoi(aux2+1);
    aux2 = strchr(aux2+1, '/');
    ano = atoi(aux2+1);
    
    if (ano < 24)
    {
        ano += 2000;
    }
    else if (ano < 100)
    {
        ano += 1900;
    }

    printf("Dia: %d\n", dia);
    printf("Mes: %d\n", mes);
    printf("Ano: %d\n", ano);
    return 0;
}