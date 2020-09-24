#include "holberton.h"

/**
 * print_numbers - from 0 to 9, followed by a new line.
 *
 * Return: 1 if true, 0 if false
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + 48);
	_putchar('\n');
}
