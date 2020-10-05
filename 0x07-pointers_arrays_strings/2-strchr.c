#include "holberton.h"

/**
 * _strchr - locates a character in a string.
 * @s: the string
 * @c: the character
 * Return: a pointer to the first occurence or NULL if not found.
 */

char *_strchr(char *s, char c)
{
	if (s == 0)
		return (0);

	while (*s != c)
		s++;

	if (*s == c)
		return (s);
	else
		return (0);
}
