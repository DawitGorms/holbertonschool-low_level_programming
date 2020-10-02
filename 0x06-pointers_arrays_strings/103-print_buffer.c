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

	int c, idx, start;

	if (size > 0)
		for (start = 0; start < size; start += 10)
		{
			printf("%08x: ", start);
			for (idx = 0; idx < 10; idx++)
			{
				printf("%02x", *(b + start + idx));
				if (idx % 2 == 0)
					printf(" ");
			}
			for (idx = 0; idx < 10; idx++)
			{
				c = *(b + start + idx);
				if (c < 32 || c == 126)
					c = 46;
				printf("%c", c);
			}
			printf("\n");
		}
	else
		printf("\n");


}
