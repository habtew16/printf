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

	if (n < 0)
	{
		n = -n;
	}

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
	int n;
	int count;
	int num;
	int powten;
	int i;

	n = va_arg(number, int);
	count = count_digits(n);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	powten = 1;
	for (i = 1; i < count; i++)
		powten *= 10;


	while (count > 0)
	{
		num = n / powten;
		_putchar(num + '0');
		n -= num * powten;
		powten /= 10;
		count--;
	}

	return (count);
}

