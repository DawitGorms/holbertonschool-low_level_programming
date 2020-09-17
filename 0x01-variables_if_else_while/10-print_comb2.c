#include <stdio.h>

/**
 * main - prints all digit numbers from 00 to 99,
 * separated by a ',', followed by a new line.
 *
 * Return: always 0 (success)
 */


int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i < '9' || j < '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
