#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strlen - counts and reutns string length
 * @s: the input string
 *
 * Return: the length
 */
int _strlen(char *s)
{
	int c = 0;

	for (c = 0; *s; c++)
		s++;

	return (c);
}

/**
 * argstostr - concatenates all the arguments
 * @ac: # of arguments
 * @av: arguments
 *
 * Return: concatenated string.
 */
char *argstostr(int ac, char **av)
{
	char *nstr;
	int icc, idx, jdx, len;

	if (!ac || !av)
	{
		return (NULL);
	}

	for (idx = 0, len = 0; idx < ac; idx++)
		len += _strlen(av[idx]) + 1;

	nstr = malloc((len + 1) * sizeof(char));
	if (nstr == NULL)
		return (NULL);

	for (icc = 0, idx = 0; idx < ac; idx++)
	{
		for (jdx = 0; av[idx][jdx]; jdx++, icc++)
			nstr[icc] = av[idx][jdx];
		nstr[icc++] = '\n';
	}
	nstr[icc] = '\0';
	return (nstr);
}
