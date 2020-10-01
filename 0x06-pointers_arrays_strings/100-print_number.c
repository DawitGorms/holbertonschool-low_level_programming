#include "holberton.h"

/**
 * print_number - prints a number with only _putchar,
 * long not allowed.
 *
 * The variable p will be used as a pointer
 * to get the first number on the right
 * to be printed.
 *
 * At each iteration p will divided by 10
 * to get the next number to be printed
 * until there is none.
 *
 * If the number is negative, the commands
 * will be only be run on the first iteration.
 * Since 'n' is turn to a positive number there.
 * The reason why this sign changing is not done
 * outside of the while loop is because one cannot
 * change sign to INT_MIN, which is in its absolute
 * value is higher than INT_MAX.
 * @n: number to be printed.
 * Return: void.
 */

void print_number(int n)
{
	int p, nb;

	p = 1;
	while (n / p >= 10 || n / p <= -10)
		p *= 10;

	while (p)
	{
		nb = n / p;
		if (nb < 0)
		{
			_putchar('-');
			_putchar('0' - nb);
			n = -(n - nb * p);
		}
		else
		{
			_putchar('0' + nb);
			n = n - nb * p;
		}
		p /= 10;
	}
}
