#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}TData;

typedef struct{
    char nome[50];
    char email[50];
    char telefone[15];
    char eWhatsapp;
    TData aniver;
}TContato;

int main(void)
{
    TContato contato;
    printf("Entre com um novo contato:\n");
    printf("Nome: ");
    fgets(contato.nome, 50, stdin);
    printf("Email: ");
    fgets(contato.email, 50, stdin);
    printf("Telefone: ");
    fgets(contato.telefone, 15, stdin);
    do{
        printf("Whatsapp? (S/N): ");
        scanf(" %c", &contato.eWhatsapp);
        contato.eWhatsapp = toupper(contato.eWhatsapp);
    }while(contato.eWhatsapp != 'S' && contato.eWhatsapp != 'N');   
    printf("Data de aniversario (dd/mm/aaaa): \n");
    printf("Dia: ");
    scanf("%d", &contato.aniver.dia);
    printf("Mes: ");
    scanf("%d", &contato.aniver.mes);
    printf("Ano: ");
    scanf("%d", &contato.aniver.ano);   
    
    printf("\n\nDados do contato:\n");
    printf("Nome: %s", contato.nome);
    printf("Email: %s", contato.email);
    printf("Telefone: %s", contato.telefone);
    printf("Whatsapp: %c\n", contato.eWhatsapp);
    printf("Data de aniversario: %02d/%02d/%04d\n", contato.aniver.dia, contato.aniver.mes, contato.aniver.ano);
    return 0;
}
