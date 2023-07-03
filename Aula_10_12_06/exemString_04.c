#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char str1[100], str2[100];
    int i, tam1, tam2;
    printf("Digite uma string: ");
    fgets(str1, 100, stdin);
    printf("Digite outra string: ");
    fgets(str2, 100, stdin);
    tam1 = strlen(str1);
    str1[tam1 - 1] = '\0';
    printf("String 1: %s\n", str1);
    tam2 = strlen(str2);
    str2[tam2 - 1] = '\0';
    /*
    printf("String 2: %s\n", str2);
    for(i = 0; i < tam2; i++)
        str1[tam1 + i] = str2[i];
    */
    strcat(str1, str2);
    printf("String Final: %s\n", str1);
    return 0;
}