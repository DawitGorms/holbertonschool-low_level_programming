#include "holberton.h"

/**
 * _strstr - locates a substring.
 * @haystack: the string to be scanned
 * @needle: the string to be searched within haystack string.
 * Return: a pointer to the first occurrence in haystack of any of the
 * entire sequence of characters specified in needle, or a null pointer
 * if the sequence is not present in haystack.
 */

char *_strstr(char *haystack, char *needle)
{
	char *start;
	int idh, idn;

	for (idh = 0; *(haystack + idh); idh++)
	{
		start = (haystack + idh);
		idn = 0;
		while (*(needle + idn) == *(haystack + idh) && *(needle + idn))
		{
			idh++;
			idn++;
		}
		if (*(needle + idn) == '\0')
			return (start);
	}
	return (0);
}
