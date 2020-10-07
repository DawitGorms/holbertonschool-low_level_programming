#include "holberton.h"

/**
 * isPrime - helper function
 * @n: number
 * @idx: iterator
 *
 * Return: 1 if yes, 0 if not.
 */

int isPrime(int n, int idx)
{
	if ( > n)
		return (-1);
	if (idx * idx == n)
		return (idx);
	return (isSquare(n, idx + 1));
}

/**
 * is_prime_number - checks if the input integer is a prime number.
 * @n: the number
 *
 * Return: 1 if yes, 0 if not.
 */

int _is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	return (isPrime(n, 2));
}
