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
    TContato contato[10];
    for(int i = 0; i < 3; i++)
    {
        TContato aux;
        printf("Entre com um novo contato:\n");
        printf("Nome: ");
        fgets(aux.nome, 50, stdin);
        printf("Email: ");
        fgets(aux.email, 50, stdin);
        printf("Telefone: ");
        fgets(aux.telefone, 15, stdin);
        do{
            printf("Whatsapp? (S/N): ");
            scanf(" %c", &aux.eWhatsapp);
            aux.eWhatsapp = toupper(aux.eWhatsapp);
        }while(aux.eWhatsapp != 'S' && aux.eWhatsapp != 'N');   
        printf("Data de aniversario (dd/mm/aaaa): \n");
        printf("Dia: ");
        scanf(" %d", &aux.aniver.dia);
        printf("Mes: ");
        scanf(" %d", &aux.aniver.mes);
        printf("Ano: ");
        scanf(" %d", &aux.aniver.ano);
        fflush(stdin); 
        
        contato[i] = aux;
    }

    for(int i = 0; i < 3; i++)
    {
        printf("\n\nDados do contato:\n");
        printf("Nome: %s", contato[i].nome);
        printf("Email: %s", contato[i].email);
        printf("Telefone: %s", contato[i].telefone);
        printf("Whatsapp: %c\n", contato[i].eWhatsapp);
        printf("Data de aniversario: %02d/%02d/%04d\n", contato[i].aniver.dia, contato[i].aniver.mes, contato[i].aniver.ano);
    }
    return 0;
}
