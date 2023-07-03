#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int sorteios[10][6];
    int jogo[6];
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

    printf("Entre com seu jogo: \n");
    for(int i = 0; i < 6; i++)
    {
        printf("Número %d: ", i+1);
        scanf("%d", &jogo[i]);
        for(int j = 0; j < i; j++)
        {
            if(jogo[i] == jogo[j])
            {
                i--;
                printf("Número repetido! Digite outro número!\n");
                break;
            }else{
                if(jogo[i] < jogo[j]){
                    int aux = jogo[i];
                    jogo[i] = jogo[j];
                    jogo[j] = aux;
                }
            }
        }
    }
    printf("Seu jogo foi: \n");
    for(int i = 0; i < 6; i++)
    {
        printf("%d ", jogo[i]);
    }
    printf("\n");
    
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