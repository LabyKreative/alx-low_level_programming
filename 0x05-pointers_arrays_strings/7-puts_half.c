#include "main.h"

/**
 * puts_half - a function that prints half of a string,
 * followed by a new line.
 * @str: pointer to char
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int x = 0;
	int y = 0;

	while (str[x] != '\0')
		x += 1;
	y = x / 2;
	if (x % 2 == 1)
		y += 1;
	while (str[y] != '\0')
	{
		_putchar(*(str + y));
		y++;
	}
	_putchar('\n');
}
