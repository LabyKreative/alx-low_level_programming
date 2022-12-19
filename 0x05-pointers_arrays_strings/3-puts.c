#include "main.h"

/**
 * _puts - a function that prints a string,
 * followed by a new line, to stdout.
 *
 * @str: pointer to char
 * Return: Always 0.
 */

void _puts(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x += 1;
	}
	_putchar('\n');
}
