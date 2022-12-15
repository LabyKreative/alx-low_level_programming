#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line
 * @size: size in width and length
 * Return: square made of '#'
 */
void print_square(int size)
{
	int wd, ln;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (wd = 1; wd <= size; wd++)
		{
			_putchar('#');
			for (ln = 2; ln <= size; ln++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
