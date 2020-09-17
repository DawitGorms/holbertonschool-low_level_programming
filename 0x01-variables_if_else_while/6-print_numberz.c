#include <stdio.h>

/**
 * main - displays all single digit numbers starting from 0,
 * with putchar()
 *
 * Return: always 0 (success)
 */


int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
