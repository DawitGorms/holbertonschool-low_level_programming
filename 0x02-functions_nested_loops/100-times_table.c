#include "holberton.h"

/**
 * print_times_table - prints the n times table, starting with 0,
 * @n: the number of times table
 * Return: nothing to return.
 */

void print_times_table(int n)
{
	int i, j, r;

	if (n > 0 && n < 15)
	{

	for (i = 0; i <= n; i++)
		for (j = 0; j <= n; j++)
		{
			r = i * j;
			if (j != 0)
				_putchar(' ');
			if (r < 100)
			{
				if (j != 0)
					_putchar(' ');
				if (r > 9)
					_putchar('0' + r / 10);
				else if (j != 0)
					_putchar(' ');
				_putchar('0' + r % 10);
			}
			else
			{
				_putchar('0' + r / 100);
				_putchar('0' + (r % 100) / 10);
				_putchar('0' + r % 10);

			}
			if (j != n)
				_putchar(',');
			else
				_putchar('\n');
		}
	}
}
