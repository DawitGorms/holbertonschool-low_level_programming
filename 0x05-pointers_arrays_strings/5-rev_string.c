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
 * rev_string - reverses a string
 * @s: the address of the input string
 *
 * Return: nothing to return
 */

void rev_string(char *s)
{
	int i, sl;
	char *a, *z, tp;

	sl = _strlen(s);
	a = s;
	z = s;

	for (i = 0; i < sl - 1; i++)
		z++;

	for (i = 0; i < (sl / 2); i++)
	{
		tp = *z;
		*z = *a;
		*a = tp;
		a++;
		z--;

	}
}
