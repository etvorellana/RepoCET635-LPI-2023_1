/*
  Programa exemplo_01.c
  Autor: Prof. Dr. Esbel T. Valero Orellana
  EMail: evalero@uesc.br
  Data: 04/12/2019
  Descrição: Programa que imprime uma mensagem na tela.
*/

/*
  Crregando o cabeçalho padrão de entrada e saída
*/

#include <stdio.h>  // <- para usar printf

// Função principal ou ponto de entrada do programa
//int main(int argc, char const *argv[]) {
//int main(){
int main(void) // as chaves delimitam o bloco de código
{  
  printf("Color %s,\nNumber %d,\nFloat %4.3f\n", "Red", 10, 3.1416 );
  return 0;
}

