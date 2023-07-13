#include "search_algos.h"

/**
 * advanced_binary - a function that searches
 * for a value in a sorted array of integers.
 *
 * @array: input array
 * @size: of the array
 * @value: to search
 * Return: index of the value
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = rec_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}

/**
 * rec_search - a functiont that searches for a value in
 * an array of integers using the Binary search algorithm
 *
 * @array: input array
 * @size: of the array
 * @value: to search in
 * Return: index of the value
 */
int rec_search(int *array, size_t size, int value)
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
	{
		if (bisect > 0)
			return (rec_search(array, bisect + 1, value));
		return ((int)bisect);
	}

	if (value < array[bisect])
		return (rec_search(array, bisect + 1, value));

	bisect++;
	return (rec_search(array + bisect, size - bisect, value) +bisect);
}
