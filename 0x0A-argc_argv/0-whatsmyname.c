B#include "holberton.h"

/**
 * main - prints its name, followed by a new line.
 * @argc: the number of arguments
 * @argv: the arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}
