#include "holberton.h"

/**
 * isSquare - helper function
 * @n: number loooking for its sqaure
 * @idx: iterator
 *
 * Return: the root of the number
 */

int isSquare(int n, int idx)
{
	if (idx * idx > n)
		return (-1);
	if (idx * idx == n)
		return (idx);
	return (isSquare(n, idx + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number
 *
 * Return: the root of the number, -1 if there is none.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (isSquare(n, 1));
}
