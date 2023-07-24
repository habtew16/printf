#include <stdarg.h>
#include <stdlib.h>
#include "main"

/**
 * print_rev - function to reverse string and print
 * the reversed string
 * @str: string to be reveresed
 * Return: returns the number of succesfully printe characters
*/


int print_rev(va_list str)
{
	int i, count;
	char *s;

	s = va_arg(str, char *);
	count = 0;

	if (s == NULL)
		s = ")llun(";
	while (s[count])
		count++;
	for (i = count - 1; i >= 0; i--)
		_putchar(s[i]);

	return (count);
}
