#include "main.h"

/**
 * count_digits - function that counts the number of digits in an integer.
 * @n: The integer for which we need to count the digits.
 * Return: The number of digits in the integer.
 */


int count_digits(int n)
{
	int count;

	count = 0;

	if (n == 0)
		return (1);

	while (n != 0)
	{
		n /= 10;
		count++;
	}

	return (count);
}

/**
 * print_int - to convert and print given numer in decimal and int
 * @number: number to print
 * Return: number or correctly prinnnted nnnumbers
 */

int print_int(va_list number)
{
	int len;
	int powten;
	int j;
	int digit;
	int n;
	int count;

	count = 0;
	n = va_arg(number, int);
	len = count_digits(n);

	if (n != 0)
	{
		if (n < 0)
		{
			n *= -1;
			_putchar('-');
			count++;
		}

		powten = 1;

		for (j = 1; j <= len - 1; j++)
			powten *= 10;
		for (j = 1; j <= len; j++)
		{
			digit = n / powten;
			_putchar(digit + '0');
			count++;
			n -= digit * powten;
			powten /= 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);

}

