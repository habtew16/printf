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
	int i, j, count;
	char  *r;
	char part1[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char part2[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	count = 0;

	r = va_arg(R, char *);

	if (r == NULL)
		r = "(null)";

	for (i = 0; r[i] != '\0'; i++)
	{
		for (j = 0; part1[j] != '\0'; j++)
		{
			if (r[i] == part1[j])
			{
				_putchar(part2[i]);
				count++;
				break;
			}
		}
	}
	return (count);
}

