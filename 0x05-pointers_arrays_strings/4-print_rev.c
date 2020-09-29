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

	for (c = 0; *s != 0; c++)
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
	int l;

	for (l = _strlen(s); l != 0; l--)
		_putchar(*(s + l));

	_putchar(*s);
	_putchar('\n');
}
