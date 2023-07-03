#include <stdio.h>

int main(void)
{
    char txt[100] = "Exemplo de String";
    printf("A string: %s \n", txt);
    printf("O primeiro caractere da String: %c \n", txt[0]);
    for(int i = 0; txt[i] != '\0'; i++)
    {
        printf("%c", txt[i]);
    }
    printf("\n");
    printf("Entre com uma String: ");
    //scanf("%s", txt);  // Não funciona direito
    /* Isto funciona mas da trabalho
    for(int i = 0;  ;i++)
    {
        scanf("%c", &txt[i]);
        if(txt[i] == '\n')
        {
            txt[i] = '\0';
            break;
        }
    }
    */
    //gets(txt); // Funciona mas não é recomendado
    fgets(txt, 100, stdin); // Funciona e é recomendado
    //printf("A string: %s \n", txt);
    puts(txt); // Imprime a string com o \n

    return 0;
}