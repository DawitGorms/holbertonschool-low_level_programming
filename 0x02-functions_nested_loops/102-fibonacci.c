#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * starting with 1 and 2, followed by a new line.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	long n, n0, n1;

	n0 = 0;
	n1 = 1;
	printf("%ld, ", n0);
	printf("%ld, ", n1);

	for (i = 2; i <= 50; i++)
	{
		n = n0 + n1;
		printf("%ld, ", n);
		n0 = n1;
		n1 = n;
	}
	printf("\n");
	return (0);
}
