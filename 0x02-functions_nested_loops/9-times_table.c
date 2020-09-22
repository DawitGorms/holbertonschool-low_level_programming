#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0,
 *
 * Return: nothing to return.
 */
void times_table(void)
{
	int i, j, r;

	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
		{
			r = i * j;
			if (j != 0)
				_putchar(' ');
			if (r >= 10)
				_putchar(48 + (r / 10));
			else
				_putchar(' ');
			_putchar(48 + (r % 10));
			if (j != 9)
				_putchar(',');
			else
				_putchar('\n');
		}
}
