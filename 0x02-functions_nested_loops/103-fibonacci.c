#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	long n, n0, n1;

	n = 0;
	n0 = 0;
	n1 = 1;

	while (n < 4000000)
	{
		n = n0 + n1;
		if (n % 2 == 0)
			printf("%ld, ", n);
		n0 = n1;
		n1 = n;
	}
	printf("\n");
	return (0);
}
