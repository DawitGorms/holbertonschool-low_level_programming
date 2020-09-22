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
