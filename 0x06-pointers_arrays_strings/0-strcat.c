#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the string that will be concatenated at the end of dest.
 * Return: char, a pointer to the dest string.
 */

char *_strcat(char *dest, char *src)
{
	while (*dest)
		dest++;

	for (; *src; src++)
	{
		*dest = *src;
		dest++;
	}

	*dest = '\0';

	return (dest);
}
