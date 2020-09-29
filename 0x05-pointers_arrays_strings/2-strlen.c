#include "holberton.h"
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
