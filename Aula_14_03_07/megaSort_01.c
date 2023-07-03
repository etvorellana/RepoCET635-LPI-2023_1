#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int sorteio[6];
    for (int i = 0; i < 6; i++)
    {
        sorteio[i] = rand() % 60 + 1;
        for(int j = 0; j < i; j++)
        {
            if(sorteio[i] == sorteio[j])
            {
                i--;
                break;
            }
        }
    }

    printf("Os números sorteados foram: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", sorteio[i]);
    }
    printf("\n");
    return 0;
}