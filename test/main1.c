#include <limits.h>
#include "../main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    int len3;
    int len4;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    len3 = printf("%d", -712345);
    len4 = _printf("%d", -712345);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Negative:[%d]\n", -7623454);
    printf("Negative:[%d]\n", -7625454);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Len:[%d]\n", len3);
    printf("Len:[%d]\n", len4);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%%z]\n");
    _printf("%b\n", 98);
    return (0);
}
