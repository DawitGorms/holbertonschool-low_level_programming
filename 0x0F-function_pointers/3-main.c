#include "3-calc.h"

/**
 * main - entry point
 * @argc: number of args
 * @argv: argument vector
 * Return: 0 if no errors
 */
int main(int argc, char **argv)
{
	int (*fptr)(int, int), a, b;

	if (argc != 4)
		printf("Error\n"), exit(98);

	fptr = get_op_func(argv[2]);
	if (!fptr)
		printf("Error\n"), exit(99);

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);

	printf("%i\n", fptr(a, b));
	return (0);
}
