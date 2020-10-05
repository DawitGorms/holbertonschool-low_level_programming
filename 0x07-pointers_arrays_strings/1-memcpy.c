#include "holberton.h"
/**
 * _memcpy - copies memory area.
 * @dest: the memory area to be filled
 * @src: the origin memery area
 * @n: number of bytes to copy
 * Return: a pointer to the memory area dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	for (; n; n--)
		*p++ = *src++;

	return (dest);
}
