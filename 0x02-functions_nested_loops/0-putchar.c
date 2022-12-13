#include "main.h"

/**
 * Description: main - A program that prints _putchar, followed by a new line.
 * The program should return zero.
 * Return: 0.
 */

int main(void)
{
	int p = 0;
	char str_ptc[8] = "_putchar";

	while (p < 8)
	{
		_putchar(str_ptc[n]);
		p += 1;
	}
	_putchar("\n");
	return (0);
}
