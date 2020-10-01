#include "holberton.h"

/**
 * rot13: encodes a string with rot13.
 * @s: pointer of the input string
 *
 * Return: char
  */

char *rot13(char *s)
{
	char *c = s;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *encode = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	while (*c)
	{
		for (i = 0; alpha[i]; i++)
			if (*c == alpha[i])
				*c = encode[i];
		c++;
	}
	return (s);
}
