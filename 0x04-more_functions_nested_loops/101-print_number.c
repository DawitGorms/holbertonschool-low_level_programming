#include "holberton.h"

/**
 * print_number - prints a number with only _putchar,
 * long not allowed.
 * @n: number to be printed.
 * Return: void.
 */
void print_number(int n)
{
	int index, remain;
	char num[5];

	if (n == 0)
		_putchar('0');
	else
	{
		remain = (n < 0) ? -n : n;
		for (index = 0; remain > 0; index++)
		{
			num[index] = (remain % 10) + 48;
			remain /= 10;
		}
		num[index] = 0;

		if (n < 0)
			_putchar('-');
		for (; index >= 0; index--)
			_putchar(num[index]);
	}
}
