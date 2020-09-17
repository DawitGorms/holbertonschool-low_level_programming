#include <stdio.h>

/**
 * main - prints all single digit numbers from 0,
 * followed by a new line.
 *
 * Return: always 0 (success)
 */


int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%i", i);
	printf("\n");
	return (0);
}
