#include "holberton.h"

/**
 * print_number - prints a number with only _putchar,
 * long not allowed.
 * @n: number to be printed.
 * Return: void.
 */
void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else
		m = n;

	if (m / 10)
		print_number(m / 10);

	_putchar(m % 10 + '0');
}
