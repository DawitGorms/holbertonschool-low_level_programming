#include <stdio.h>

/**
 * fibonacci - recursive function
 * @n: fibonacci n
 * Return: result
 */

long fibonacci(long n)
{
	if (n == 0 || n == 1)
		return (n);
	return (fibonacci(n - 1) + fibonacci(n - 2));
}

/**
 * main - prints the first 50 Fibonacci numbers
 * starting with 1 and 2, followed by a new line.
 *
 * Return: always 0 (success)
 */

int main(void)
{
	long ct;

	for (ct = 2; ct < 50; ct++)
		printf("%ld, ", fibonacci(ct));
	printf("%ld\n", fibonacci(ct));
	return (0);
}
