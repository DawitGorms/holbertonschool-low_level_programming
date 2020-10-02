#include "holberton.h"

/**
 * leet - encodes a string into 1337.
 * @s: pointer of the input string
 *
 * Return: char
 */

char *leet(char *s)
{
	char *c = s;
	char *letters = "aAeEoOtTlL";
	char *encode = "4433007711";
	int i;

	while (*c)
	{
		for (i = 0; letters[i]; i++)
			if (*c == letters[i])
				*c = encode[i];
		c++;
	}
	return (s);
}
