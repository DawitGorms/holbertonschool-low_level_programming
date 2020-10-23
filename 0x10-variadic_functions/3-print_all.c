#include "variadic_functions.h"

/**
 * printChar - prints character
 * @separator: the separator
 * @ap: the argument
 */
void printChar(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * printInt - prints integer
 * @separator: the separator
 * @ap: the argument
 */
void printInt(char *separator, va_list ap)
{
	printf("%s%i", separator, va_arg(ap, int));
}

/**
 * printFloat - prints float
 * @separator: the separator
 * @ap: the argument
 */
void printFloat(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 * printStr - prints string
 * @separator: the separator
 * @ap: the argument
 */
void printStr(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);

	printf("%s%s", separator, str);
}

/**
 * print_all - prints anything.
 * @format: the format.
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	int fdx = 0;
	int tdx;
	char *separator = "";
	va_list ap;

	pType tFct[] = {
		{"c", printChar},
		{"i", printInt},
		{"f", printFloat},
		{"s", printStr},
		{NULL, NULL}
	};

	va_start(ap, format);

	while (format && format[fdx])
	{
		tdx = 0;
		while (tFct[tdx].at)
		{
			if (format[fdx] == tFct[tdx].at[0])
			{
				tFct[tdx].f(separator, ap);
				separator = ", ";
			}
			tdx++;
		}
		fdx++;
	}
	printf("\n");
	va_end(ap);
}
