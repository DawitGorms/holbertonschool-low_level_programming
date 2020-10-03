#include "holberton.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: pointer to a buffer
 * @size: size of bytes to print
 *
 * Return: nothing to return.
 */

void print_buffer(char *b, int size)
{

	int c, idx, start, end;

	if (size > 0)
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);

			for (idx = 0; idx < 10; idx++)
			{
				if (idx < end)
					printf("%02x", *(b + start + idx));
				else
					printf("  ");
				if (idx % 2)
					printf(" ");
			}

			for (idx = 0; idx < end; idx++)
			{
				c = *(b + start + idx);
				if (c < 32 || c > 126)
					c = 46;
				printf("%c", c);
			}

			printf("\n");
		}
	else
		printf("\n");
}
