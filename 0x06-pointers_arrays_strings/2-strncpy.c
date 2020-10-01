#include "holberton.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: the destination string
 * @src: the string that will be copied at the dest.
 * @n: the number of bytes to use.
 * Return: char, a pointer to the dest string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n && *src; i++)
			dest[i] = src[i];

		for (; i < n; i++)
			dest[i] = '\0';
	}
	return (dest);
}
