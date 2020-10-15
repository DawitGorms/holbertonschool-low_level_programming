#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_puts - prints a string, followed by a new line, to stdout.
 * @str: the input string
 * Return: nothing to return.
 */
	void _puts(char *str)
	{
		while (*str != 0)
		{
			_putchar(*str);
			str++;
		}
		_putchar('\n');
	}

/**
 * _memset - fills memory with a constant byte.
 * @s: the memory area to be filled
 * @b: the constant byte
 * @n: number of bytes to fill with char b
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	for (; n; n--)
		*p++ = b;

	return (s);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: of each element
 * Return: void *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, size * nmemb);

	return (ptr);
}

/**
 *_strlen - counts and reutns string length
 * @s: the input string
 * Return: the length
 */
int _strlen(char *s)
{
	int c = 0;

	for (c = 0; *s; c++)
		s++;

	return (c);
}

/**
 * strNumbers - determines if string has only numbers
 * @str: input string
 * Return: 0 if false, 1 if true
 */
int strNumbers(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * multiply - multiplies two numbers (in string), and prints the result.
 * @n1: first number
 * @n2: second number
 * Return: void
 */
/*
void multiply(char *n1, char n2)
{
        int idx, n1n, n2n, res;
        int n1l, n2l, total;

	n1l = _strlen(n1);
	n2l = _strlen(n2);
        total = n1l + n2l;
	ptr = _calloc(sizeof(int), (n1l + n2l));
        for (n1l--; nl1 >= 0; n1l--)
        {
                n1n = n1[n1l] - '0';
                res = 0;
                for (n2l--; n2l >= 0; n2l--)
                {
                        n2n = n2[n2l] - '0';
                        res += ptr[n1l + n2l + 1] + (n1n * n2n);
                        ptr[n1l + n2l + 1] = res % 10;
                        res /= 10;
                        printf("fd: %i, sd: %i, res: %i\n", n1n, n2n, res);
                }
                if (res)
                        ptr[n1l + n2l + 1] += res;
        }
        while (*ptr == 0)
        {
                ptr++;
                total--;
        }
        for (idx = 0; idx < total; idx++)
                _putchar(ptr[i] + '0');
        _putchar('\n');
}
*/
/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0
 */

int main(int argc, **argv)
{
        char *nb1 = argv + 1;
        char *nb2 = argv + 2;

        if (argc != 3 || !strNumbers(nb1) || !strNumbers(nb2))
        {
                _puts("Error");
                exit(98);
        }
        if (*nb1 == '0' || *nb2 == '0')
                _puts("0");
/*        else
                multiply(nb1, nb2);
*/
        return (0);
}
