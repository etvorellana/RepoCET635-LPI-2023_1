/*
	Um identificador válido e uma série de caracteres que 
	consistentes em letras, dígitos e sublinhados:
	- não pode começar com dígito, 
	- não pode ser uma palavra reservada da linguagem,
	- apenas letras do alfabeto inglês podem ser utilizadas.
	- um identificador pode ter qualquer cumprimento, apenas 
	os 31 primeiros caracteres são reconhecidos,
	- a linguagem C, é case sensitive, os caracteres minúsculos 
	e maiúsculos são diferentes.
*/

#include <stdio.h>  // <- printf
#include <limits.h>  // <- INT_MIN, INT_MAX, LONG_MIN, LONG_MAX, SHRT_MIN, SHRT_MAX, UINT_MAX, ULONG_MAX

int main(void)
{ // Ponto de entrada do Programa

	printf("Declaração de Variáveis\n");
	int a; // declarando uma variável de tipo inteiro
	a = 1; // inicializando a variável
    int a_1 = 1; // declarando e inicializando a variável
    int a_2, a_3, a_4; // declarando múltiplas variáveis
    int a_5 = 1, a_6 = 2, a_7 = 3; // declarando e inicializando múltiplas variáveis

	// Modificadores
	printf("Moificadores: \n");
	printf("int: %d\n", sizeof(int));
	printf("INT_MIN= %d, INT_MAX= %d\n", INT_MIN, INT_MAX);

	printf("long int: %d\n", sizeof(long int));
	printf("LONG_MIN= %ld, LONG_MAX= %ld\n", LONG_MIN, LONG_MAX);
	long int b = LONG_MAX - 12345; // declarando e inicializando
    printf("b= %ld\n", b);

	printf("unsigned int: %d\n", sizeof(unsigned int));
	printf("UINT_MAX= %u\n", UINT_MAX);
	unsigned int c, d; // declarando múltiplas variáveis
    c = UINT_MAX - 12345; // inicializando
    d = c / 2; // inicializando    
    printf("c= %u, d= %u\n", c, d);

	printf("short int: %d\n", sizeof(short int));
	printf("SHRT_MIN= %d, SHRT_MAX= %d\n", SHRT_MIN, SHRT_MAX);
	short int e = SHRT_MAX - 12345; // declarando e inicializando
    printf("e= %d\n", e);

	printf("unsigned long int: %d\n", sizeof(unsigned long int));
	printf("ULONG_MAX= %lu\n", ULONG_MAX);
	unsigned long int f = INT_MAX + 1; // declarando e inicializando ???
    printf("f= %lu\n", f);

	// Lembrando da necessidade de inicializar as variáveis
	printf("Declaração e Inicialização de Variáveis\n");
	printf("Variáveis int: %d, %ld, %u, %u, %d, %lu \n", a, b, c, d, e, f);
	printf("________________________________________\n");

	//Operadores com int
	printf("Operadores con int\n");
	printf("________________________________________\n");
	printf("Operador de atribuição\n");
	//atribuições múltiplas em um único comando
	a_1 = a_2 = a_3 = a_4 = a_5 = a_6 = a_7 = a;
	printf("a = %d, a_1 = %d, a_2 = %d\n", a, a_1, a_2);
	printf("a_3 = %d, a_4 = %d, a_5 = %d\n", a_3, a_4, a_5);
    printf("a_6 = %d, a_7 = %d\n", a_6, a_7);
	printf("________________________________________\n");

	//Operadores Aritméticos
	printf("Operadores binários\n");
	// Operadores binários
	a = a_1 + a_2; //adição
	printf("%d + %d = %d\n", a_1, a_2, a);
	a_3 = a_2 - a_4; //substração
	printf("%d - %d = %d\n", a_2, a_4, a_3);
	a_4 = -a_5; // utilizado como operador unario
	printf("-%d = %d\n", a_5, a_4);
	a_2 = a_1 * a_3; //multiplicação
	printf("%d * %d = %d\n", a_1, a_3, a_2);
	a = 4 / 2; //Divisão inteira
	printf("4 / 2 = %d\n", a);
	a = 5 / 2; //Divisão inteira (truncada)
	printf("5 / 2 = %d\n", a);
	a = 5 % 2; //Resto da divisão
	printf("5 \%% 2 = %d\n", a); // \%
	printf("________________________________________\n");
    
	// Operadores de incremento e decremento
	printf("Operadores de Incremento e decremento\n");
	printf("a = %d\n", a);
	//++a; // a = a + 1
	printf("++a = %d\n", ++a);
	printf("a++ = %d\n", a++);
	printf("a = %d\n", a);
	//--a;
	printf("--a = %d\n", --a);
	printf("a-- = %d\n", a--);
	printf("a = %d\n", a);
	printf("________________________________________\n");
    
	//Operadores compostos
	printf("Operadores de Compostos\n");
	printf("a = %d\n", a);
	a += 5; //a = a + 5
	printf("a += 5 -> a = %d\n", a);
	a -= 3; //a = a - 3
	printf("a -= 3 -> a = %d\n", a);
	a *= 4; //a = a*4
	printf("a *= 4 -> a = %d\n", a);
	a /= 2; //a = a/2
	printf("a /= 2 -> a = %d\n", a);
	a %= 3; //a = a%3
	printf("a %%= 3 -> a = %d\n", a);
	printf("________________________________________\n");
    
	//Operadores Relacionais
	printf("Operadores de Relacionais\n");
	printf("%d > %d = %d\n", a_1, a_2, a_1 > a_2);
	printf("%d >= %d = %d\n", a_2, a_3, a_2 >= a_3);
	printf("%d < %d = %d\n", a_3, a_4, a_3 < a_4);
	printf("%d <= %d = %d\n", a_4, a_5, a_4 <= a_5);
	printf("%d == %d = %d\n", a_5, a_1, a_5 == a_1);
	printf("%d != %d = %d\n", a_5, a_1, a_5 != a_1);
    // !=   é diferente de =!
    printf("a_1 =! %d = %d\n", 0, a_1 =! 5);
	printf("________________________________________\n");
    
	printf("Operadores de Lógicos\n");
	int v_ = 1, f_ = 0;
	printf("Tabela da Verdade\n");
	printf("a \t b \t a&&b \t\t a||b \t\t !a\n");
	printf("%d \t %d \t %d \t\t %d \t\t %d\n", f_, f_, f_ && f_, f_ || f_, !f_);
	printf("%d \t %d \t %d \t\t %d \t\t %d\n", f_, v_, f_ && v_, f_ || v_, !f_);
	printf("%d \t %d \t %d \t\t %d \t\t %d\n", v_, v_, v_ && v_, v_ || v_, !v_);
	printf("%d \t %d \t %d \t\t %d \t\t %d\n", v_, f_, v_ && f_, v_ || f_, !v_);
	printf("________________________________________\n");
    
	return 0;
}