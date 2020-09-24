#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100,
 * if multiple of 3 print Fizz,
 * if multiple of 5 print Buzz,
 * if multiple of both print FizzBuzz.
 *
 * Return: return 0.
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");
	return (0);
}
