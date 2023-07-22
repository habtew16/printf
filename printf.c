#include <stdarg.h>
#include <string.h>
#include "main.h"

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

	while (*format) {
        if (*format == '%') {
            format++;
            switch (*format) {
                case 'c':
                    {
                        char c = (char)va_arg(args, int);
                        _putchar(c);
                        count++;
                        break;
                    }
                case 's':
                    {
                        const char *str = va_arg(args, const char *);
                        while (*str) {
                            _putchar(*str);
                            str++;
                            count++;
                        }
                        break;
                    }
                case '%':
                    _putchar('%');
                    count++;
                    break;
                default:
                    break;
            }
        } else {
            _putchar(*format);
            count++;
        }
        format++;
    }

    va_end(args);

    return (count);
}
