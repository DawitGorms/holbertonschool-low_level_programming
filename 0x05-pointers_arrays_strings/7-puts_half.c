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
 * puts_half - prints the second half of the string
 * @str: the input string
 *
 * Return: nothing to return
 */

void puts_half(char *str)
{
	char *c;
	int i, n, sl;

	c = str;
	sl = _strlen(str);
	n = (sl - 1) / 2;

	for (i = 0; i < n; i++)
		c++;

	for (; i < sl; i++)
		_putchar(str[i]);

	_putchar('\n');

}
