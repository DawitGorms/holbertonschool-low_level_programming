#include "holberton.h"

/**
 *_strlen - counts and reutns string length
 * @s: the input string
 *
 * Return: the length
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; *s; c++)
		s++;

	return (c);
}

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: the address of the input string
 *
 * Return: nothing to return
 */
void print_rev(char *s)
{
	char *z;
	int i, sl;

	z = s;
	sl = _strlen(s) - 1;

	for (i = 0; i < sl; i++)
		z++;

	for (; i; i--)
	{
		_putchar(*z);
		z--;
	}
	if (sl > 0)
		_putchar(*z);
	_putchar('\n');
}
