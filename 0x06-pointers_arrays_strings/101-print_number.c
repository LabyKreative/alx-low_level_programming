#include "main.h"

/**
 * print_number - a function that prints and integer.
 * Return: Always 0.
 * @n: number
 */
void print_number(int n)
{
	unsigned int size = n;

	int num = 0;

	int x;

	if (n < 0)
		size = -n;
	if (n == 0)
		num = 1;

	while (size >= 1)
	{
		size = size / 10;
		num++;
	}

	for (x = 0; x < num; x++)
	{

		int pow = 1;

		int y;

		int d;

		for (y = 0; y < num - x - 1; y++)
		{
			pow = pow * 10;
		}

		d = ((n / pow) % 10);
		if (n < 0)
		{
			d = -d;
			if (x == 0)
				_putchar(45);
		}
		_putchar(48 + d);
	}
}
