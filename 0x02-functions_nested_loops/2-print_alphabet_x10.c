#include "main.h"

/**
 * print_alphabet_x10 - A function that prints 10 times the alphabet,
 * in lowercase
 * Return: null.
 */

void print_alphabet_x10(void)
{
	int t;
	char lw;

	for (t = 0; t <= 9; t++)
	{
		for (lw = "a"; lw <= "z"; lw++)
			_putchar(lw);
		_putchar("\n");
	}
}
