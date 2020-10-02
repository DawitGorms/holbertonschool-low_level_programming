#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer of the array
 * @n: the number of elements of the array.
 *
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int *z = a;
	int i, tmp;

	for (i = 0; i < (n - 1); i++)
		z++;

	for (i = 0; i <= n; i++)
		while (a < z)
		{
			tmp = *a;
			*a = *z;
			*z = tmp;
			a++;
			z--;
		}
}
