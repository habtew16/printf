#include "main.h"
#include <unistd.h>
/**
 * _puts - function to print array of chars
 * @s: string or array of characyers
 * Return: count of string
 */

int _puts(char *s)
{
	long int len;

	while (*s)
	{
		write(1, s, 1);
		len++;
		s++;
	}
	return (len);
}
