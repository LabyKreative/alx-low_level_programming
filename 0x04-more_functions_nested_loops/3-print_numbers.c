#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Description: prints the numbers, from 0 to 9, followed by a new line
 *
 * You can only use _putchar twice
 *
 * Return: Always 0 (Success)
 */

void print_number(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + "0");
	_putchar("\n");
}
