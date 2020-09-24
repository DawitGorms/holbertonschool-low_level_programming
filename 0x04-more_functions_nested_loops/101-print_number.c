#include "holberton.h"

/**
 * print_number - prints a number with only _putchar,
 * long not allowed.
 * @n: number to be printed.
 * Return: void.
 */
void print_number(int n)
{
	int m;

	m = (n < 0) ? -n : n;
	if (n < 0)
		_putchar('-');
	if (m / 10)
		print_number(m / 10);
	_putchar(m % 10 + 48);
}
