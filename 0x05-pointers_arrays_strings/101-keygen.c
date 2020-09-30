#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point to keygen
 *
 * Return: 0
 */

int main(void)
{
	char set[63] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char gen_key[100];
	int chksum = 2772; i = 0, key  = 0, sum = 0;

	srand(time(NULL));

	for (; sum < (chksum - 'z'); i++)
	{
		key = rand() % 62;
		gen_key[i] = set[key];
		sum += gen_key[i];
	}
	gen_key[i] = chksum - sum;
	gen_key[i + 1] = '\0';

	printf("%s", gen_key);
	return (0);
}
