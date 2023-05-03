#include <stdio.h>

int main(){
    int numDec;
    printf("Entre com um número positivo entre 0 e 255: ");
    scanf("%d",&numDec);
    numDec = (numDec < -255) ?  255 : numDec; //Para evitar erros
    numDec = (numDec > 255) ?  255 : numDec;
    char dig0, dig1, dig2, dig3, dig4, dig5, dig6, dig7, sinal; //Precisamos de, 8 caracteres
    int aux = numDec < 0 ? -numDec : numDec;
    dig0 = (aux%2 == 1) ? '1' : '0';
    aux = aux / 2; // ou aux /= 2;
    dig1 = (aux%2) ? '1' : '0';
    aux /= 2;
    dig2 = (aux%2 == 0) ? '0' : '1';
    aux /= 2;
    dig3 = (!(aux%2)) ? '0' : '1';
    aux /= 2;
    dig4 = (aux%2 == 1) ? '1' : '0';
    aux /= 2;
    dig5 = (aux%2 == 1) ? '1' : '0';
    aux /= 2;
    dig6 = (aux%2 == 1) ? '1' : '0';
    aux /= 2;
    dig7 = (aux%2 == 1) ? '1' : '0';
    sinal = numDec < 0 ? '1' : '0';

    printf("O número %d em binário é %c%c%c%c%c%c%c%c%c \n", 
        numDec, sinal, dig7, dig6, dig5, dig4, dig3, dig2, dig1, dig0);
    return 0;
}