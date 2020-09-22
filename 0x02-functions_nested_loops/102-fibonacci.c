#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * starting with 1 and 2, followed by a new line.
 *
 * Return: always 0 (success)
 */

int main(void)
{
	unsigned long ct, f2, f1;
	int i = 0;

	f2 = 1;
	f1 = 2;
	ct = f2 + f1;
	printf("%lu, %lu, ", f2, f1);
	for (i = 4; i < 51; i++)
	{
		printf("%lu, ", ct);
		f2 = f1;
		f1 = ct;
		ct = f2 + f1;
	}
	printf("%lu\n", ct);
	return (0);
}
