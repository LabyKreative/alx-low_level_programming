#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers,
 * followed by a new line.
 * @n: arguments number.
 * @separator: string to be orinted between numbers.
 * Return: EXIT_SUCCESS.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;

	unsigned int x;

	va_start(list, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(list, int));
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
