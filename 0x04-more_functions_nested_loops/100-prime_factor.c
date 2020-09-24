#include "holberton.h"
#include <stdio.h>

/**
 * main - prints the largest prime factor
 * of the number 612852475143
 * Return: 0
 */
int main(void)
{
	int i;
	long n;

	n = 612852475143;
	i = 2;

	while (i < n)
	{
		while (n % i == 0 && i != n)
			n /= i;
		i++;
	}
	printf("%lu\n", n);
	return (0);
}
