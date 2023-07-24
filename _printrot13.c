#include "main.h"

/**
 * rot13 - function to encode
 * @str: string to be encoded
 * Return: str is returned after rot13
*/

int rot13(va_list s)
{
	char *str;
	char part1[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char part2[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int i;
	int j;
	int count;


	count = 0;
	str = va_arg(s, char *);
	for (i = 0; str[i] != '\0'; i++)
	{

		for (j = 0; part1[j] != '\0'; j++)
		{
			if (str[i] == part1[j])
			{
				count++;
				str[i] = part2[j];
				break;
			}
		}
	}
	return (count);
}
