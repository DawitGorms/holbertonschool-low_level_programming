#include "holberton.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98,
 * @n: the starting number
 * Return: nothing to return.
 */
void print_to_98(int n)
{
	int i, t, r;

	if (n > 98)
		for (i = n; i < 98; i--)
		{
			t = i / 10;
			r = i % 10;
			if (i > 99)
				_putchar(48 + (i / 100));
			_putchar(48 + t);
			_putchar(48 + r);
		}
	else
		for (i = n; i < 99; i++)
		{
			
}
