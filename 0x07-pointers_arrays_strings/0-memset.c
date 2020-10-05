#include "holberton.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: the memory area to be filled
 * @b: the constant byte
 * @n: number of bytes to fill with char b
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	for (; n; n--)
		*p++ = b;

	return (s);
}
