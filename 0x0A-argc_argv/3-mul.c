#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: the number of arguments
 * @argv: the arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc == 3)
		return (printf("%d\n", atoi(*(argv + 1)) * atoi(*(argv + 2))), 0);
	else
		return (printf("Error\n"), 1);
}
