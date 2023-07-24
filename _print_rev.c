#include <stdarg.h>
#include "main.h"

/**
 * print_rev - function to reverse and print
 * givenn string
 * @str: string to be pritned
 * Return: count of succesful characters printed
 */

int print_rev(va_list str)
{
	int i;
	char *s = va_arg(str, char *);
	int count = 0;

	if (s == NULL)
		s = "(null)";

	while (s[count])
	{
		if (s[count] == '\x01')
			s[count] = ' ';
		count++;
	}

	for (i = count - 1; i >= 0; i--)
		_putchar(s[i]);

	return (count);
}

