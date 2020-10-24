#include "holberton.h"

/**
 * get_print - selects the right printing function
 * @s: character that holds the specifier
 * Return: a pointer to the matching printing function
 */
int (*get_print(char s))(va_list)
{
	spec_type fcts[] = {
		{'c', printChar},
		{'s', printStr},
		{'%', printPct},
		{'d', printInt},
		{'i', printInt},
		{'\0', NULL}
	};

	int idx;

	for (idx = 0; fcts[idx].spec; idx++)
		if (fcts[idx].spec == s)
			return (fcts[idx].f);
	return (NULL);
}
