#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: insert no. of times '\' should be drawn
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int dr, ln;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (dr = 1; dr <= n; dr++)
		{
			for (ln = 1; ln < dr; ln++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
