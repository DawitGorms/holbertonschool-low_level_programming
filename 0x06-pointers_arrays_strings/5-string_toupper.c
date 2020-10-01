#include "holberton.h"

/**
 * string_toupper: changes all lowercase letters of a string to uppercase.
 * @s: pointer of the input string
 *
 * Return: char
  */

char *string_toupper(char *s)
{
	char *c = s;

	for (; *c; c++)
		if (*c >= 'a' && *c <= 'z')
			*c = *c - 32;
	return (s);
}
