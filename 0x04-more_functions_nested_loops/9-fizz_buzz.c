#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100,
 * if multiple of 3 print Fizz,
 * if multiple of 5 print Buzz,
 * if multiple of both pri,t FizzBuzz.
 *
 * Return: return 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	putchar('\n');
	return (0);
}
