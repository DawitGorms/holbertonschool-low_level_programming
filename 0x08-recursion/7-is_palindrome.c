#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string.
 *
 * Return: the length.
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * isPal - helper function
 * @str: the input string
 * @a: starting
 * @z: ending
 *
 * Return: 1 if yes, 0 if not.
 */

int isPal(char *str, int a, int z)
{
	if (a >= z)
		return (1);

	if (*(str + a) != (*(str + z)))
		return (0);

	return (isPal(str, a + 1, z - 1));
}

/**
 * is_palindrome - checks if the input string is a palindrome.
 * @s: the pointer to the string
 *
 * Return: 1 if yes, 0 if not.
 */

int is_palindrome(char *s)
{
	int sl = _strlen_recursion(s) - 1;

	return (isPal(s, 0, sl));
}
