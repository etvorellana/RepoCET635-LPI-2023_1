#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int sorteios[10][6];
    for(int k = 0; k < 10; k++)
        for (int i = 0; i < 6; i++)
        {
            sorteios[k][i] = rand() % 60 + 1;
            for(int j = 0; j < i; j++)
            {
                if(sorteios[k][i] == sorteios[k][j])
                {
                    i--;
                    break;
                }else{
                    if(sorteios[k][i] < sorteios[k][j]){
                        int aux = sorteios[k][i];
                        sorteios[k][i] = sorteios[k][j];
                        sorteios[k][j] = aux;
                    }
                }
            }
        }
    
    printf("Os números sorteados foram: \n");
    for(int k = 0; k < 10; k++)
    {
        for (int i = 0; i < 6; i++)
        {
            printf("%d ", sorteios[k][i]);
        }
        printf("\n");
    }
    return 0;
}