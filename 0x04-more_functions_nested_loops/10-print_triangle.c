#include "holberton.h"

/**
 * print_triangle - prints a triangle on the terminal
 * @size: the size of the triangle
 * Return: no return.
 */
void print_triangle(int size)
{
	int i, j, r;

	r = size - 1;
	if (size > 0)
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
				if (j > r)
					_putchar('#');
				else
					_putchar(' ');
			r--;
			_putchar('\n');
		}
	else
		_putchar('\n');
}
