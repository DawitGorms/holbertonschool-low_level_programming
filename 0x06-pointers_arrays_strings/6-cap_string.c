#include "holberton.h"

/**
 * cap_string:  capitalizes all words of a string.
 * @s: pointer of the input string
 *
 * Return: char
  */

char *cap_string(char *s)
{
	char *c = s;
	char *separators = " \t\n;,.!?\"(){}\0";
	int first = 1;
	int i;

	while (*c)
	{
		if (first)
		{
			if (*c >= 'a' && *c <= 'z')
				*c = *c - 32;
			first = 0;
		}
		for (i = 0; separators[i]; i++)
			if (*c == separators[i])
				first = 1;
		c++;
	}
	return (s);
}
