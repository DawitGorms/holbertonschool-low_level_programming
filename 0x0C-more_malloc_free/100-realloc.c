#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memcpy - copies memory area.
 * @dest: the memory area to be filled
 * @src: the origin memery area
 * @n: number of bytes to copy
 * Return: a pointer to the memory area dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	for (; n; n--)
		*p++ = *src++;

	return (dest);
}

/**
 * _realloc - reallocates a memory block.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: old size of pointer
 * @new_size: new size of pointer
 *
 * Return: void *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	int idx;

	if (new_size == old_size)
		return (ptr);

	if ((new_size == 0) && ptr != NULL)
	{
                free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
	{
		nptr = malloc(new_size * sizeof(char));
                if (*nptr == NULL)
                        return (NULL);

		for (idx = 0; idx <= old_size; idx++)
			nptr[idx] = ptr[idx];
		free(ptr);
	}
	return (nptr);
}
