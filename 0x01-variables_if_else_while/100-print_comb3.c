#include <stdio.h>

/**
 * main - prints all possible different combinations of two digit,
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
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (i < '8')
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
