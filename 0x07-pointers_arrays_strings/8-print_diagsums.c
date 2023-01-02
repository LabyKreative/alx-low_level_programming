#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints sum of the two diagonals
 * of a square matrix of integers.
 * @a: array
 * @size: size of array
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	unsigned int s1 = 0, s2 = 0;

	int x;

	for (x = 0; x < size; x++)
	{
		int x1 = x + size * x;
		int x2 = size * (x + 1) - (x + 1);

		s1 += a[x1];
		s2 += a[x2];
	}

	printf("%d, %d\n", s1, s2);
}
