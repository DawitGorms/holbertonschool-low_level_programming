#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: the number of arguments
 * @argv: the arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int coins = 0;
	int rem;

	if (argc == 2)
	{
		rem = atoi(*(argv + 1));
		while (rem > 0)
		{
			if (rem >= 25)
				rem -= 25;
			else if (rem >= 10)
				rem -= 10;
			else if (rem >= 5)
				rem -= 5;
			else if (rem >= 2)
				rem -= 2;
			else
				rem -= 1;
			coins++;
		}
		return (printf("%d\n", coins), 0);
	}
	else
		return (printf("Error\n"), 1);
}
