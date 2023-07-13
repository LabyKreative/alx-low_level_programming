#include "search_algos.h"

/**
 * jump_search - a function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 *
 * @array: input array
 * @size: of the array
 * @value: to search in
 * Return: index of the value
 */
int jump_search(int *array, size_t size, int value)
{
	int index, x, y, prev;

	if (array == NULL || size == 0)
		return (-1);

	x = (int)sqrt((double)size);
	y = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		y++;
		prev = index;
		index = y * x;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
