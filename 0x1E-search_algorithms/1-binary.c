#include "search_algos.h"

/**
 * binary_search - a function that searches for a value in a
 * sorted aarray of integers using the Binary search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}

/**
 * recursive_search - a function that searches for a value
 * in an array of integers using the Binary search algorithm
 *
 * @array: input array
 * @size: of the array
 * @value: to search
 * Return: index of the value
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t bisect = size / 2;
	size_t x;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (x = 0; x < size; x++)
		printf("%s %d", (x == 0) ? ":" : ",", array[x]);

	printf("\n");

	if (bisect && size % 2 == 0)
		bisect--;

	if (value == array[bisect])
		return ((int)bisect);

	if (value < array[bisect])
		return (recursive_search(array, bisect, value));

	bisect++;

	return (recursive_search(array + bisect, size - bisect, value) + bisect);
}
