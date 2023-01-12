#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - a function that creates array of integers.
 * @min: minimum range.
 * @max: maximum range.
 * Return: EXIT_SUCCESS.
 */

int *array_range(int min, int max)
{
	int *ptr;

	int x;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (x = 0; x <= (max - min); x++)
		ptr[x] = min + x;
	return (ptr);
}
