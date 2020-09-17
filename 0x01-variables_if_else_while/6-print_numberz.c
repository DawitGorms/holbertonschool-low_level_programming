#include <stdio.h>

/**
 * main - displays all single digit numbers starting fromm 0,
 * with putchar()
 *
 * Return: always 0 (success)
 */


int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
