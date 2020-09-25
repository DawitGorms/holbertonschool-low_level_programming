#include "holberton.h"

/**
 * len_number - gets the power of the parameter
 * @n: entry parameter
 * Return: 10 times the number
 */

int len_number(int n)
{
	int i = n;
	int power = 1;

	while (i)
	{
		power *= 10;
		i /= 10;
	}
	return (power / 10);
}

/**
 * print_number - prints a number with only _putchar,
 * long not allowed.
 * @n: number to be printed.
 * Return: void.
 */

void print_number(int n)
{
	int p, r;
	unsigned int nb;

	if (n == 0)
		_putchar(48);
	else
	{
		if (n < 0)
		{
			_putchar('-');
			nb = -n;
		}
		else
			nb = n;

		p = len_number(nb);

		while (nb)
		{
			r = nb / p;
			_putchar(r + 48);
			nb -= r * p;
			p /= 10;
		}
	}
}
