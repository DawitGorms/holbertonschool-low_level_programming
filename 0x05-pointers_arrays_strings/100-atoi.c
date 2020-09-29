#include "holberton.h"

/**
 * _atoi - convert a string to an integer
 *
 * @s: the pointer to the input string
 * Return: the integer
 */

int _atoi(char *s)
{
	int i, r;
	int sign = 1;

	for (i = 0; ((s[i] < '0' || s[i] > '9') && s[i] != '\0'); i++)
		if (s[i] == '-')
			sign *= -1;

	for (r = 0; (s[i] >= '0' && s[i] <= '9'); i++)
		r = r * 10 + sign * (s[i] - '0');

	return (r);
}
