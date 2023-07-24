#include <stdarg.h>
#include <stdlib.h>
#include "main.h"


/**
* get_binary_length - calculate the number of digits in binary
* @num: nunmber for which binary length is calculated
* Return: return the length og the binary
*/

unsigned int get_binary_length(unsigned int num)
{
	size_t digits;

	digits = 0;

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
	unsigned int n, num_digits, digit, j, pow_two;
	int count;

	n = va_arg(args, unsigned int);
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

