#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: the number of arguments
 * @argv: the arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int idx, nxt, sum = 0;

	if (argc > 1)
		for (idx = 1; idx < argc; idx++)
		{
			for (nxt = 0; argv[idx][nxt]; nxt++)
				if (argv[idx][nxt] < '0' || argv[idx][nxt] > '9')
					return (printf("Error\n"), 1);
			sum += atoi(argv[idx]);
		}
	printf("%i\n", sum);
	return (0);
}
