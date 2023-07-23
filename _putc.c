#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
* _putc - converts character and prints it to console
* @c: character
* Return: always 1
*/


int _putc(va_list c)
{
	unsigned char ch;

	ch = va_arg(c, int);
	_putchar(ch);
	return (1);
}


/**
* print_mod - to print modulus after first modulus
* Return: always returnn 1
*/
int print_mod(void)
{
	_putchar('%');
	return (1);
}

