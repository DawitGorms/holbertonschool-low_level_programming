#include "holberton.h"

/**
 * _strpbrk - finds the first character in the string s
 * that matches any character specified in accept.
 * @s: the string to be scanned
 * @accept: the string containing the list of characters to match in s.
 * Return: a pointer to the character in str1 that matches
 * one of the characters in str2, or NULL if no such character is found,
 */

char *_strpbrk(char *s, char *accept)
{
	int idx;

	for (; *s; s++)
		for (idx = 0; *(accept + idx); idx++)
			if (*s == *(accept + idx))
				return (s);

	return (0);
}
