#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: the destination string
 * @src: the string that will be concatenated at the end of dest.
 * @n: the number of bytes to use.
 * Return: char, a pointer to the dest string.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *tsrc = src, *tdst = dest;
	int i;

	tsrc = src;
	tdst = dest;

	for (i = 0; *tsrc; i++)
		tsrc++;

	while (*tdst)
		tdst++;

	if (n > 0)
	{
		n = (i > n) ? n : i;
		while (n > 0)
		{
			*tdst = *src;
			tdst++;
			src++;
			n--;
		}
	}
	*tdst = '\0';
	return (dest);
}
