#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives.
 * @argc: the number of arguments
 * @argv: the arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	for (; *argv; argv++)
		printf("%s\n", *argv);
	return (0);
}
