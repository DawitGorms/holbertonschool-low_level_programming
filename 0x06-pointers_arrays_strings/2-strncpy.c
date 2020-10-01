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
	char *tdst = dest;
	int i;

	for (i = 0; i < n && *src; i++)
		tdst[i] = src[i];

	for (; i < n; i++)
		tdst[i] = '\0';

	return (dest);
}
