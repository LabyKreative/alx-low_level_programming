#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: insert num
 * Return: 0
 */

void print_number(int n)
{
	unsigned int n1, n2;
	int i;
	int aux = 1;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	n1 = n;
	n2 = n1;
	if (n1 > 9)
	{
		while (n1 >= 10)
		{
			aux = aux * 10;
			n1 = n1 / 10;
		}
		_putchar((n2 / aux) + '0');
		aux = aux / 10;

		for (i = aux; i >= 1; i = i / 10)
			_putchar((n2 / i) % 10 + '0');
	}
	else
		_putchar(n1 + '0');
}
