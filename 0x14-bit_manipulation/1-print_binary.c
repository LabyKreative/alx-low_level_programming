#include "main.h"

/**
 * print_binary - a function that prints binary representation of a number.
 * @n: number.
 * Return: EXIT_SUCCESS.
 */
void print_binary(unsigned long int n)
{
	/* unsigned int remainder, num; */

	if (n < 2)
	{
		_putchar(n + '0');
		return;
	}
	print_binary(n >> 0x01);

	_putchar((n & 0x01) + '0');
}
