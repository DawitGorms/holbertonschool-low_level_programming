#include "variadic_functions.h"

/**
 * printChar - prints character
 * @ap: the argument
 * Return: void.
 */
void printChar(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * printInt - prints integer
 * @ap: the argument
 * Return: void.
 */
void printInt(va_list ap)
{
	printf("%i", va_arg(ap, int));
}

/**
 * printFloat - prints float
 * @ap: the argument
 * Return: void.
 */
void printFloat(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * printStr - prints string
 * @ap: the argument
 * Return: void.
 */
void printStr(va_list ap)
{
	char *str = va_arg(ap, char *);

	if (str)
		printf("%s", str);
	else
		printf("(nil)");
}

/**
 * print_all - prints anything.
 * @format: the format.
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	int fdx = 0;
	int ddx;
	va_list ap;

	pType fDict[] = {
		{"c", printChar},
		{"i", printInt},
		{"f", printFloat},
		{"s", printStr},
		{'\0', NULL}
	};

	va_start(ap, format);

	while (format && format[fdx])
	{
		ddx = 0;
		while (fDict[ddx].at)
		{
			if (fDict[ddx].at[0] == format[fdx])
			{
				fDict[ddx].f(ap);
				if (format[fdx + 1])
					printf(", ");
			}
			ddx++;
		}
		fdx++;
	}
	printf("\n");
	va_end(ap);
}
