#include <stdio.h>


int main(void)
{
    int num;
    /*
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);
    while(num <= 0)
    {
        printf("Número inválido!\n");
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &num);
    }
    */
    do{
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &num);
        if (num <= 0)
            printf("Número inválido!\n");
        
    }while(num <= 0);
    
    if(num == 1)
        printf("O número %d não é primo!\n", num);
    else if(num == 2)
        printf("O número %d é primo!\n", num);
    else if(!num %2)  ///?????????
        printf("O número %d não é primo!\n", num);
    else
    {
        int i; 
        //int ePrimo = 1;
        for(i = 3; i < num/2; i += 2)
        {
            if(num % i == 0)
            {
                printf("O número %d não é primo!\n", num);
                //ePrimo = 0;
                break;
            }
        }
        //if (ePrimo) printf("O número %d é primo!\n", num);
        //if ( !num % i) printf("O número %d é primo!\n", num);
        if ( i == num/2) printf("O número %d é primo!\n", num);
    }

    return 0;
}