#include "holberton.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: the pointer of the copied string
 * @src: the pointer of the source string
 *
 * Return: the pointer of the copied string
 */

char *_strcpy(char *dest, char *src)
{
	char *d = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (d);
}
