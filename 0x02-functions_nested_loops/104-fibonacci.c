#include <stdio.h>
#define N 1000000000

/**
 * main - finds and prints the first 98 Fibonacci numbers
 * Return: always 0 (success)
 */
int main(void)
{
	unsigned long fn, fn2, fn1, fbl, fbr, f1l, f1r, f2l, f2r;
	int seq;

	fn2 = 1;
	fn1 = 2;
	fn = fn2 + fn1;
	seq = 0;

	printf("%lu, %lu, ", fn2, fn1);

	for (seq = 4; seq < 47; seq++)
	{
		printf("%lu, ", fn);
		fn2 = fn1;
		fn1 = fn;
		fn = fn2 + fn1;
	}

	f1l = fn1 / N;
	f1r = fn1 % N;
	fbl = fn / N;
	fbr = fn % N;

	for (seq = 47; seq < 90; seq++)
	{
		printf("%lu%09lu, ", fbl, fbr);
		f2l = f1l;
		f2r = f1r;
		f1l = fbl;
		f1r = fbr;

		fbl = (f2l + f1l) + ((f2r + f1r) / N);
		fbr = (f2r + f1r) % N;
	}
	printf("%lu%09lu\n", fbl, fbr);

	return (0);
}
