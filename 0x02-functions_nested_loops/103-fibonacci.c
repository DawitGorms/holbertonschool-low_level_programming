#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	long fn, fn2, fn1, sum;

	fn = 0;
	fn2 = 0;
	fn1 = 1;
	sum = 0;

	while (fn < 4000000)
	{
		fn = fn2 + fn1;
		if (fn % 2 == 0)
			sum += fn;
		fn2 = fn1;
		fn1 = fn;
	}
	printf("%lu\n", sum);
	return (0);
}
