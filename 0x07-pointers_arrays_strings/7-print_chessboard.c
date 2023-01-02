#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - a function that prints chessboard.
 * @a: array
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int x = 0;
	int y;

	while (x < 8)
	{
		y = 0;
		while (y < 8)
		{
			_putchar(a[x][y]);
			if (y == 7)
				_putchar('\n');
			y++;
		}
		x++;
	}
}
