
#include <stdio.h>  // <- para usar printf

// Função principal ou ponto de entrada do programa
int main(void) // as chaves delimitam o bloco de código
{  
  char ch1, ch2;
  int a, b;
  short int c;
  long int d;
  float x, y;
  double z;

  ch1 = '4';
  printf("ch1 = %c, %d\n", ch1, ch1);
  a = 553;
  ch2 = a;
  printf("ch2 = %c, %d\n", ch2, ch2);

  x = 23.51234f;
  b = x;
  printf("x = %f\n", x);
  printf("b = %d\n", b);
  y = ch1 + ch2 + a + b + x;
  b = ch1 + ch2 + a + b + x;
  c = (a > 60) ? printf("Ok") : printf("Not Ok");    
  printf("c = %d\n", c);
  printf("y = %f\n", y);
  printf("b = %d\n", b);

  return 0;
}

