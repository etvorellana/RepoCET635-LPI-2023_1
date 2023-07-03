#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char str1[100], str2[100];
    int i;
    printf("Digite uma string: ");
    fgets(str1, 100, stdin);
    //str2 = str1;  // Isto não funciona
    /*
    for(i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }
    str1[i-1] = '\0';
    str2[i-1] = '\0';
    */
    char* str3 = strcpy(str2, str1); 
    int tam = strlen(str1);
    str1[tam - 1] = '\0';
    str2[tam - 1] = '\0';
    
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str3);
    return 0;
}