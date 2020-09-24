#include "holberton.h"

/**
 * print_number - prints a number with only _putchar,
 * long not allowed.
 * @n: number to be printed.
 * Return: void.
 */
void print_number(int n)
{
	int index, remain, u;
	char num[20];

	if (n == 0)
		_putchar('0');
	else
	{
		remain = (n < 0) ? -n : n;
		for (index = 0; remain > 0; index++)
		{
			u = remain % 10;
			num[index] = u + 48;
			remain = remain / 10;
		}
		num[index] = 0;

		if (n < 0)
			_putchar('-');
		while (index >= 0)
		{
			_putchar(num[index]);
			index--;
		}
	}
}
