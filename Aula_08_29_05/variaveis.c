#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    unsigned long long int fat = 1, cont;
    for(cont = 1; cont < 1000; cont++)
    {
        if (fat > (UINT_LEAST64_MAX / cont))
            break;
        
        fat *= cont;
        printf("%llu - %llu\n", cont, fat);
         
        /*
        if (fat%cont != 0){
            printf("Erro!\n");
            break;
        }
        */
    }

}