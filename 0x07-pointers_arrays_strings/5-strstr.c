#include "holberton.h"
#include <stddef.h>

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
	int idx =0, first, match;

	for (; *haystack; haystack++)
	{
		match = 1;
		if ((*haystack != *(needle + idx)) && (!(*(needle + idx))))
		{
			match = 0;
			first = 0;
			idx = 0;
			continue;
		}
		else
		{
			if (first == 0)
			{
				first = 1;
				start = haystack;
			}
			if (*(needle + idx) == '\0')
				break;
			idx++;
		}

	}
	if (match == 1)
		return (start);
	else
		return (NULL);
}
