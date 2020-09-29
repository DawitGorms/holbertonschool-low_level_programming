#include "holberton.h"

/**
 *_strlen - counts and reutns string length
 * @s: the input string
 *
 * Return: the length
 */

int _strlen(char *s)
{
	int c = 0;

	for (c = 0; *s; c++)
		s++;

	return (c);
}

/**
 * puts2 - prints every other character of a string
 * @str: the input string
 *
 * Return: nothing to return
 */

void puts2(char *str)
{
	int i, sl;

	sl = _strlen(str);

	for (i = 0; i < sl; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
