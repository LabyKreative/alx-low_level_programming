#include "main.h"

/**
 * print_alphabet - A function that prints the alpha bet in lowercase.
 */

void print_alphabet(void)
{
	char lw;

	for (lw = "a"; lw <= "z"; lw++)
		_putchar(lw);

	_putchar("\n");
}
