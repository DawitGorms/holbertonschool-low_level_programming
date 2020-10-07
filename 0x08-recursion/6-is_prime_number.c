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

/**
 * isPrime - helper function
 * @n: number
 * @idx: iterator
 *
 * Return: 1 if yes, 0 if not.
 */

int isPrime(int n, int idx)
{
	if (n % idx == 0)
		return (0);
	if (idx > _sqrt_recursion(n))
		return (1);
	return (isPrime(n, idx + 1));
}

/**
 * is_prime_number - checks if the input integer is a prime number.
 * @n: the number
 *
 * Return: 1 if yes, 0 if not.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (isPrime(n, 2));
}
