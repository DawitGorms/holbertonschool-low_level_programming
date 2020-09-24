#include "holberton.h"

/**
 * print_most_numbers - from 0 to 9, but 2 and 4,
 * followed by a new line.
 *
 * Return: 1 if true, 0 if false
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		if (i != 2 && i != 4)
			_putchar(i + 48);
	_putchar('\n');
}
