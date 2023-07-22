#include <stdarg.h>
#include <string.h>
#include "main.h"


/**
 * handle_conversion - function to check characters
 * after % and convert accordingly
 * @format: string to be checked
 * @args: list of arguments
 * Return: returns count of successful prints
*/

int handle_conversion(char **format, va_list args)
{
	int count;

	count = 0;
	switch (*(*format)++)
	{
		case 'c':
			_putchar(va_arg(args, int));
			count++;
			break;
		case 's':
			{
			char *str = va_arg(args, char *);

			_puts(str);
			count += strlen(str);
			break;
			}
		case 'd':
		case 'i':
			_print_number(va_arg(args, int));
			count++;
			break;
		case '%':
			_putchar('%');
			count++;
			break;
		default:
			_putchar('%');
			_putchar(*(*format - 1));
			count += 2;
			break;
	}
	return (count);
}

/**
 * _printf - to print argumennts passed
 * @format: string that defines format
 * Return: returns count of success prints
*/


int _printf(char *format, ...)
{
	va_list args;
	int count;

	count = 0;
	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			count += handle_conversion(&format, args);
		}
		else
		{
			_putchar(*format);
			count++;
			format++;
		}
	}
	va_end(args);
	return (count);
}
