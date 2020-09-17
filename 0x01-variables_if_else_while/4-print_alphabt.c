#include <stdio.h>

/**
 * main - displays the alphabet in lower case with putchar()
 * except the character 'e' & 'q'
 *
 * Return: always 0 (success)
 */


int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		if (c != 'e' && c != 'q')
			putchar(c);
	putchar('\n');
	return (0);
}
