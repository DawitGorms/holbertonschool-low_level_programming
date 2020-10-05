#include "holberton.h"

/**
 * _strchr - locates a character in a string.
 * @s: the string
 * @c: the character
 * Return: a pointer to the first occurence or NULL if not found.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
