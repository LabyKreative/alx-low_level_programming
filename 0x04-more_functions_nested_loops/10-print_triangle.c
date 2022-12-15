#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
		for (i = size; i > 0; i--)
		{
			for (j = 1; j <= size; j++)
				if (j >= i)
					_putchar('#');
				else
					_putchar(' ');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
