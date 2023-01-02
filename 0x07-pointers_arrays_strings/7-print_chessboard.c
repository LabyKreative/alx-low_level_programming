#include "main.h"

/**
 * print_chessboard - a function that prints chessboard.
 * @a: array
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int x, y;

	x = 0;
	while (x < 8)
	{
		y = 0;
		while (y < 8)
		{
			_putchar(a[x][y]);
			y++;
		}
		_putchar('\n');
		x++;
	}
}
