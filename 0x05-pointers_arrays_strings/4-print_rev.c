#include "main.h"

/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line.
 * @s: String to print
 * Return: Alays 0.
 */

void print_rev(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
		x += 1;
	x -= 1;
	while (x >= 0)
	{
		_putchar(*(s + x));
		x--;
	}
	_putchar('\n');
}
