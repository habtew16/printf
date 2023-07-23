#include <stdarg.h>
#include <stdlib.h>
#include "main.h"


/**
* get_binary_length - calculate the number of digits in binary
* @num: nunmber for which binary length is calculated
* Return: return the length og the binary
*/

size_t get_binary_length(size_t num)
{
	size_t digits;

	digits = 0;

	if (num == 0)
		return (1);
	while (num != 0)
	{
		num /= 2;
		digits++;
	}
	return (digits);
}

/**
* _printb - to prinnt binary after cnverting number to binary
* @args: it is argument containing information about macros
* Return: total number of binary digits printed
*/

int _printb(va_list args)
{
	size_t n, num_digits, digit, j, pow_two;
	int count;

	n = va_arg(args, size_t);
	num_digits = get_binary_length(n);
	pow_two = 1;
	count = 0;

	if (n != 0)
	{
		for (j = 1; j < num_digits; j++)
			pow_two *= 2;

		while (num_digits > 0)
		{
			digit = n / pow_two;
			_putchar(digit + '0');
			count++;
			n -= digit * pow_two;
			pow_two /= 2;
			num_digits--;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}

	return (count);
}

