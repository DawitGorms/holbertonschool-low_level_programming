#include <stdio.h>

/**
 * main - displays the alphabet in lower case with putchar()
 *
 * Return: always 0 (success)
 */


int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != ('q' || 'e'))
		    putchar(c);
	}
	putchar('\n');
	return (0);
}
