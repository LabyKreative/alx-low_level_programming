#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers
 * @a: pointer to first int
 * @n: pointer to second int
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int x = 0;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x < n - 1)
			printf(", ");
	}
	printf("\n");
}
