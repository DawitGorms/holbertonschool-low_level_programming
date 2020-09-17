#include <stdio.h>

/**
 * main - prints all single digit numbers from 0,
 * separated by a ',', followed by a new line.
 *
 * Return: always 0 (success)
 */


int main(void)
{
	int i;

	for (i = 48; i < 57; i++)
	{
		putchar(i);
		putchar(44);
		putchar(32);
	}
	putchar(i);
	return (0);
}
