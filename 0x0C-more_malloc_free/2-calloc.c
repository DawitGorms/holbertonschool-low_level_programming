#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: how many
 * @size: in bytes
 * Return: void *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int idx;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (idx = 0; idx < size; idx++)
		ptr[idx] = '0';

	return (ptr);
}
