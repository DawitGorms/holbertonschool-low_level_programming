#include "holberton.h"

/**
 * wildcmp - compares two strings.
 * @s1: the pointer to the string 1
 * @s2: can contain the special character *.
 * The special char * can replace any string (including an empty string).
 *
 * Return: 1 if the strings are identical, 0 if not.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		else
			return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		if (*s1 == '\0')
			return (wildcmp(s1, s2 + 1));
		else
			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	return (0);
}
