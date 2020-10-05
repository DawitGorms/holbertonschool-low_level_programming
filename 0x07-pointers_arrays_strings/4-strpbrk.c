#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string to be scanned
 * @accept: the string containing the list of characters to match in s.
 * Return: a pointer to the character in str1 that matches
 * one of the characters in str2, or NULL if no such character is found,
 */

char *_strpbrk(char *s, char *accept)
{
	int idx, match;

	for (; *s; s++)
	{
		match = 0;
		for (idx = 0; *(accept + idx); idx++)
		{
			if (*s == *(accept + idx))
			{
				match = 1;
				break;
			}
		}
		if (match)
			break;
	}
	if (match)
		return (s);
	else
		return (0);
}
