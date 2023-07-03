#include <stdio.h>

int main(void)
{
    char str[10] = "Hello";
    printf("%d\n", sizeof(str[0]));
    printf("%d\n", sizeof(str));
    printf("%d\n", sizeof(&str[0]));


    char matrix[10][10] = {"Hello", "World"};
    printf("%d\n", sizeof(matrix[0][0]));
    printf("%d\n", sizeof(matrix));
    printf("%d\n", sizeof(&matrix[0][0])); 
    printf("%d\n", sizeof(&matrix[0]));    
    printf("%p - %p\n", &matrix[0][0], &matrix[0]);
    printf("%c - %c\n", matrix[0][0], matrix[0]);
    return 0;
}