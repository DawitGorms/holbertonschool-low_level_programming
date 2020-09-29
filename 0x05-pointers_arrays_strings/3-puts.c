#include "holberton.h"
/**
 *_puts - prints a string, followed by a new line, to stdout.
 * @str: the input string
 *
 * Return: nothing to return.
 */
void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
