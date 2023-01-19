#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings,
 * followed by a new line.
 * @separator: string separator.
 * @n: number of arguments.
 * Return: EXIT_SUCCESS.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;

	unsigned int x;

	va_start(list, n);

	for (x = 0; x < n; x++)
	{
		char *s = va_arg(list, char *);

		if (s)
		{
			printf("%s", s);
		}
		else
		{
			printf("(nil)");
		}

		if (x == n - 1)
		{
			break;
		}

		if (separator)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
}
