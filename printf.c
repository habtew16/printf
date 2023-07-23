#include <stdarg.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>

/**
 * find_format_function - finds corresponding forat from format
 * specifier and calls function related to
 * that format
 * @format: The format specifier.
 * Return:the address of the function related to format
 */


int (*find_format_function(const char *format))(va_list)
{
	char c = *format;

	switch (c)
	{
	case 'c':
		return (_putc);
	case 's':
		return (_puts);
	case 'd':
		return (print_int);
	case 'i':
		return (print_int);
	default:
		return (NULL);
	}
}


/**
 * _printf - custom function to print string with format
 * @format: strinng which contains format
 * Return: count of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int (*find_format)(va_list);
	unsigned int i;
	int count;

	i = 0;
	count = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			count++;
			i++;
		}
		if (format[i] == '\0')
			return (count);
		find_format = find_format_function(&format[i + 1]);
		if (find_format != NULL)
		{
			count += find_format(args);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(args);
	return (count);
}

