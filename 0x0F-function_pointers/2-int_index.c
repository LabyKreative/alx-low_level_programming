#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - a function that searches for an integer.
 * @array: pointer array.
 * @size: array size.
 * @cmp: search a number func.
 * Return: EXIT_SUCCESS.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0 || !cmp || !array)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
			return (x);
	}
	return (-1);
}
