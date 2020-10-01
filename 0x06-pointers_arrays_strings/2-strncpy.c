#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: the destination string
 * @src: the string that will be copied at the dest.
 * @n: the number of bytes to use.
 * Return: char, a pointer to the dest string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *tsrc = src, *tdst = dest;
	int i, j, k;

	for (i = 0; *tsrc; i++)
		tsrc++;

	for (j = 0; *tdst; j++)
		tdst++;

	tdst = dest;
	if (n > 0 && n <= i)
	{
		n = (n <= j) ? n : j;
		for (k = 0; n > 0 && *src; k++)
		{
			*tdst = *src;
			tdst++;
			src++;
			n--;
		}
		for (; k < n; k++)
			*tdst = '\0';
	}
	return (dest);
}
