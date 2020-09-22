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
	long f, f0, f1;

	fn2 = 0;
	fn1 = 1;
	printf("%lu, ", fn2);
	printf("%lu, ", fn1);

	for (i = 2; i <= 50; i++)
	{
		f = fn2 + fn1;
		printf("%lu, ", f);
		fn2 = fn1;
		fn1 = fn;
	}
	printf("\n");
	return (0);
}
