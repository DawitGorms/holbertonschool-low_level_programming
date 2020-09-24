#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the charater '\' should be printed
 * Return: no return.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	_putchar('\n');
}
