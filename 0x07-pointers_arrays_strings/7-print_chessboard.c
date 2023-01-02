#include "main.h"

/**
 * print_chessboard - a function that prints chessboard.
 * @a: array
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int x = 0, y = 0;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
