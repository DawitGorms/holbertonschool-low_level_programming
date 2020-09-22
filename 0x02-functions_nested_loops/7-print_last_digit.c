#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @n: integer to be tested
 * Return: the absolute value of an integer.
 */

int _abs(int n)
{
	int c = (n < 0) ? -n : n;

	return (c);
}

/**
 * print_last_digit - prints & returns the last digit of a number.
 * @n: interger to be tested.
 * Return: the last digit of a number
 */

int print_last_digit(int n)
{
	int ld;

	ld = _abs(n % 10);
	_putchar(ld + 48);
	return (ld);
}
