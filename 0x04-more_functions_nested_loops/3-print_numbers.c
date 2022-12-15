#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: 0-9 followed by newline
 */
void print_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		_putchar(num + '0');
		num += 1;
	}
	_putchar('\n');
}
