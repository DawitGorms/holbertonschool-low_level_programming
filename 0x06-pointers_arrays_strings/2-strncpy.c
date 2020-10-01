#include "holberton.h"
#include <stdio.h>

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
 * _strncpy - copies a string
 * @dest: the destination string
 * @src: the string that will be copied at the dest.
 * @n: the number of bytes to use.
 * Return: char, a pointer to the dest string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, sl;

	sl = _strlen(src);
	if (n > 0)
	{
		for (i = 0; i < n && i <= sl; i++)
			dest[i] = src[i];

		for (; i < n; i++)
			dest[i] = '\0';
	}
	return (dest);
}
