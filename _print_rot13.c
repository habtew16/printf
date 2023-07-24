#include <stdlib.h>
#include "main.h"

/**
 * print_rot13 - rotates character to 13 steps and prints
 * the result
 * @R: string to be rotated
 * Return: returns the count of succesfully printed
*/

int print_rot13(va_list R)
{
	int i, count;
	char *r, base;

	count = 0;

	r = va_arg(R, char *);
	if (r == NULL)
		r = "(null)";

	for (i = 0; r[i] != '\0'; i++)
	{
		if ((r[i] >= 'A' && r[i] <= 'Z') || (r[i] >= 'a' && r[i] <= 'z'))
		{
			base = (r[i] >= 'a' && r[i] <= 'z') ? 'a' : 'A';
			_putchar(((r[i] - base + 13) % 26) + base);
			count++;
		}
		else
		{
			_putchar(r[i]);
			count++;
		}
	}
	return (count);
}

