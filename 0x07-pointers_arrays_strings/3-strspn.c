#include "holberton.h"
#include <stdio.h>

/**
 * _isalpha - returns 1 if c is letter, 0 otherwise
 * @c: integer to be tested
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}


/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string to be scanned
 * @accept: the string containing the list of characters to match in s.
 * Return: the number of bytes in the initial segment of s,
 * which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int cnt, idx, match;

	for (cnt = 0; _isalpha(*(s + cnt)); cnt++)
	{
		match = 0;
		for (idx = 0; _isalpha(*(accept + idx)); idx++)
		{
			if (*(s + cnt) == *(accept + idx))
			{
				match = 1;
				break;
			}
		}
		if (!match)
			break;
	}
	if (!match)
		return (0);
	else
		return (cnt);
}
