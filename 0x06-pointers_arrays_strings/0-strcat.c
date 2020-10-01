#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the string that will be concatenated at the end of dest.
 * Return: char, a pointer to the dest string.
 */

char *_strcat(char *dest, char *src)
{
	char *tdst = dest;

	while (*tdst)
		tdst++;

	while (*src)
	{
		*tdst = *src;
		src++;
		tdst++;
	}

	*tdst = '\0';

	return (dest);
}
