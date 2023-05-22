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
    printf("Digite a temperatura média da segunda: ");
    scanf("%f", &tem);
    tMax = tMin = tMed = tem;
    diaMax = diaMin = 1;
    printf("Digite a temperatura média da terça: ");
    scanf("%f", &tem);
    if(tem > tMax)
    {
        tMax = tem;
        diaMax = 2;
    }else if(tem < tMin)
    {
        tMin = tem;
        diaMin = 2;
    }
    tMed += tem;

    printf("Digite a temperatura média da quarta: ");
    scanf("%f", &tem);
    if(tem > tMax)
    {
        tMax = tem;
        diaMax = 2;
    } else if(tem < tMin)
    {
        tMin = tem;
        diaMin = 2;
    }
    tMed += tem;

    printf("Digite a temperatura média da quinta: ");
    scanf("%f", &tem);
    if(tem > tMax)
    {
        tMax = tem;
        diaMax = 2;
    }
    if(tem < tMin)
    {
        tMin = tem;
        diaMin = 2;
    }
    tMed += tem;

    printf("Digite a temperatura média da sexta: ");
    scanf("%f", &tem);
    if(tem > tMax)
    {
        tMax = tem;
        diaMax = 2;
    }
    if(tem < tMin)
    {
        tMin = tem;
        diaMin = 2;
    }
    tMed += tem;

    printf("Digite a temperatura média da sábado: ");
    scanf("%f", &tem);
    if(tem > tMax)
    {
        tMax = tem;
        diaMax = 2;
    }
    if(tem < tMin)
    {
        tMin = tem;
        diaMin = 2;
    }
    tMed += tem;

    printf("Digite a temperatura média da domingo: ");
    scanf("%f", &tem);
    if(tem > tMax)
    {
        tMax = tem;
        diaMax = 2;
    }
    if(tem < tMin)
    {
        tMin = tem;
        diaMin = 2;
    }
    tMed += tem;

    tMed /= 7;

    printf("A menor temperatura média foi %.2f no dia %d.\n", tMin, diaMin);
    printf("A maior temperatura média foi %.2f no dia %d.\n", tMax, diaMax);
    printf("A temperatura média da semana foi %.2f.\n", tMed);

    return 0;
}