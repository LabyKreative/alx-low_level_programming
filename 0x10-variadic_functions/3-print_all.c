#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a function that prints anything.
 * @format: list of types of args passed to the func
 * Return: EXIT_SUCCESS.
 */

void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int x = 0, y = 0;
	char *s;

	va_start(list, format);
	while (format && format[x])
	{
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				s = va_arg(list, char *);
				if (s)
				{
					printf("%s", s);
					break;
				}
				printf("(nil)");
				break;
		} y = x + 1;
		while (format[y] && (format[x] == 'c' ||
			 format[x] == 'i' || format[x] == 'f' || format[x] == 's'))
		{
			if (format[y] == 'c' || format[y] == 'i' ||
			 format[y] == 's' || format[y] == 'f')
			{
				printf(", ");
				break;
			} y++;
		}
		x++;
	} printf("\n");
}
