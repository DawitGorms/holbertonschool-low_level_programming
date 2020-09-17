#include <stdio.h>

/**
 * main - prints all possible different combinations of two two-digits,
 * separated by a ',', followed by a new line.
 *
 * Return: always 0 (success)
 */


int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar(48 + (i / 10));
				putchar(48 + (i % 10));
				putchar(' ');
				putchar(48 + (j / 10));
				putchar(48 + (j % 10));
				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
