#include <stdio.h>  // <- para usar printf

// Função principal ou ponto de entrada do programa
//int main(int argc, char const *argv[]) {
//int main(){
int main(void) // as chaves delimitam o bloco de código
{  
  int num1, num2, soma;
  printf("Exemplo de soma de dois números inteiros\n");
  printf("Digite o primeiro número: ");
  scanf("%d", &num1);
  printf("Digite o segundo número: ");
  scanf("%d", &num2);
  soma = num1 + num2;
  printf("A soma de %d e %d é %d\n", num1, num2, soma);
  return 0;
}
