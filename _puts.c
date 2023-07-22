#include "main.h"

/**
 * _puts - function to print array of chars
 * @s: string or array of characyers
 * no return
*/

void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
}

