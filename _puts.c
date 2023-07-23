#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
* _puts - converts format to string and prints it to
* standard output console
* @s: array of characters to bbe printed
* Return: count of  characters succesfully  printed.
*/

int _puts(va_list s)
{
	char *str;
	int count;

	str = va_arg(s, char *);
	count = 0;

	if (str == NULL)
		str = "(null)";

	while (str[count])
	{
		_putchar(str[count]);
		count++;
	}

	return (count);
}

