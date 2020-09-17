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

	for (i = '0'; i < '9'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar(i);
	return (0);
}
