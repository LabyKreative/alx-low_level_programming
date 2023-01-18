#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - a function given as a parameter on
 * each element of an array.
 * @array: pointer to array.
 * @size: array size.
 * @action: func pointer.
 * Return: EXIT_SUCCESS.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (!action || !array || size < 1)
	{
		return;
	}

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
