
#include <stdio.h>  // <- para usar printf

// Função principal ou ponto de entrada do programa
int main(void) // as chaves delimitam o bloco de código
{  
  printf("Olá, seja bem-vindo à programação em C!!!!!\n");

  char ch;
  int dig;
  printf("Digite um caractere: ");
  scanf("%c", &ch);
  (ch >=  '0'  && ch <=  '9' ) ? 
    printf("O caractere %c é um dígito\n", ch) : 
    (ch >= 'A'  && ch <=  'Z' ) ? 
      printf("O caractere %c é uma letra maiúscula\n", ch) : 
      (ch >=  'a'  && ch <=  'z' ) ? 
        printf("O caractere %c é uma letra minúscula\n", ch) : 
        printf("O caractere %c é um caractere especial\n", ch);

  dig = (ch >=  '0'  && ch <=  '9' ) ? ch - '0' : -1;
  printf("dig = %d\n", dig);
  return 0;
}

