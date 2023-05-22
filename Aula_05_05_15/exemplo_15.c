#include <stdio.h>

/*
    Faça um programa que leia as temperaturas medias para cada um dos 
    dias da semana e retorne 
    - qual dia teve a menor temperatura media.
    - qual dia teve a maior temperatura media.
    - qual a media das temperaturas medias.
*/

int main(void)
{   
    float tem, tMax, tMin, tMed;
    int i, diaMax, diaMin;
    printf("Entre as temperaturas medias para cada um dos dias da semana:\n");
    printf("1- segunda\n2- terça\n3- quarta\n4- quinta\n5- sexta\n6- sábado\n7- domingo\n");
    printf("Digite a temperatura média do dia 1: ");
    scanf("%f", &tem);
    tMax = tMin = tMed = tem;
    diaMax = diaMin = 1;
    for(i = 2; i <= 7; i++)
    {
        printf("Digite a temperatura média do dia %d: ", i);
        scanf("%f", &tem);
        tMed += tem;
        if(tem > tMax)
        {
            tMax = tem;
            diaMax = i;
        }else if(tem < tMin)
        {
            tMin = tem;
            diaMin = i;
        }
    }

    tMed /= 7;
    //printf("A menor temperatura média foi %.2f no dia %d.\n", tMin, diaMin);
    //printf("A maior temperatura média foi %.2f no dia %d.\n", tMax, diaMax);
    printf("A temperatura média da semana foi %.2f.\n", tMed);

    for (int i = 0; i < 2; i++)
    {
        float temp;
        int dia;
        if (i == 0)
        {
            temp = tMin;
            dia = diaMin;
            printf("A menor temperatura media foi ");
        }
        else
        {
            temp = tMax;
            dia = diaMax;
            printf("A maior temperatura media foi ");
        }
        switch (dia)
        {
            case 1:
                printf("%.2f na segunda.\n", temp);
                break;
            case 2:
                printf("%.2f na terça.\n", temp);
                break;
            case 3:
                printf("%.2f na quarta.\n", temp);
                break;
            case 4:
                printf("%.2f na quinta.\n", temp);
                break;
            case 5:
                printf("%.2f na sexta.\n", temp);
                break;
            case 6:
                printf("%.2f no sábado.\n", temp);
                break;
            default:
                printf("%.2f no domingo.\n", temp);
                break;
        }
            
    }

    return 0;
}