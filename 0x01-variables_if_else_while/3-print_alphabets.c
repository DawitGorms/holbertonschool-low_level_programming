#include <stdio.h>

/**
 * main - displays the alphabet in lower case,
 * then in uppercase, with putchar()
 *
 * Return: always 0 (success)
 */


int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
