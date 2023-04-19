#include <stdio.h>
/*
  Isto é um comentario
  de multiplas linhas
    que pode ser utilizado
    para explicar
      meu codigo
      fonte
*/

int main(void) {
  char ch1, ch2;
  short int deltaMm = 'a' - 'A';
  int varInt;
  short int varShort;
  unsigned short int varUShort;
  unsigned int varUInt;
  long int varLong;
  unsigned long int varULong;

  float x = 3.141516;
  double y = 3.141516;
  long double z = 3.141516;


  ch1 = 'F';
  ch2 = 72;

  printf("Olá, seja bem-vindo à programação em C!!!!!\n");
  printf("Valor de tipo char - %c, %d\n", ch1, ch1);
  ch2 = ch1 + deltaMm;
  printf("Valor de tipo char - %c, %d\n", ch2, ch2);

  printf("Valor inteiro %d, %o octal, %x hexa, %c char\n", 65, 65, 65, 65);
  printf("Valor inteiro %d, %o octal, %x hexa, %c char\n", 0101, 0101, 0101, 0101);
  printf("Valor inteiro %d, %o octal, %x hexa, %c char\n", 0x41, 0X41, 0x41, 0x41);

  varInt = varShort = varUShort = varUInt = varLong = varULong = 12345678;
  varInt = varUInt = varLong = varULong = 12345678;
  varShort = varUShort = 23456;

  printf("Variável int: %d \n", varInt);
  printf("Variável short int: %d \n", varShort);
  printf("Variável unsigned short int: %d \n", varUShort);
  printf("Variável unsigned int: %d \n", varUInt);
  printf("Variável long int: %d \n", varLong);
  printf("Variável unsigned long int: %d \n", varULong);

  printf("Inteiro %d\n", sizeof(-123456));
  printf("Inteiro sem sinal %d\n", sizeof(-123456u));
  printf("Inteiro longo %d\n", sizeof(-123456l));
  printf("Inteiro longo sem sinal %d\n", sizeof(-123456ul));

  printf("float: %.16f\n", x);
  printf("double: %.16f\n", y);
  printf("long double: %.16Lf\n", z);

  printf("Valor de ponto flutuante: %f\n", 3.141516);
  printf("Valor de ponto flutuante: %.2f\n", 3.141516);
  printf("Valor de ponto flutuante: %.4f\n", 3.141516);
  printf("Valor de ponto flutuante: %.16f\n", 3.141516);
  //printf("Valor de ponto flutuante: %L\n", 3.141516L);
  
  return 0;
  
}