#include <stdio.h>

/**
 * main - displays the alphabet in lower case in reverse
 * with putchar()
 *
 * Return: always 0 (success)
 */


int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
