#include <stdio.h>  // <- para usar printf
#include <math.h>   // <- para usar sqrt

// Função principal ou ponto de entrada do programa
int main(void) // as chaves delimitam o bloco de código
{  
  printf("Olá, seja bem-vindo à programação em C!!!!!\n");
  
  int a, b, c;

  printf("Digite o valor de a: ");
  scanf("%d", &a);
  printf("Digite o valor de b: ");
  scanf("%d", &b);
  c = (a < b) ? b : a;
  a = (a > b) ? b : a;
  b = c;
  printf("Dupla ordenada: %d, %d\n", a, b);
  return 0;
}

