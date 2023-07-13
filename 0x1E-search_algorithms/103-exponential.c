#include "search_algos.h"

/**
  * exponential_search - a function that searches for a value in a
  * sorted array of integers using the Exponential search algorithm
  * @array: pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: the first index where value is located assumming that
  * array will be sorted in ascending order.
  * If value is not present in array or if array is NULL, return -1
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t x = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (x = 1; x < size && array[x] <= value; x = x * 2)
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	}

	right = x < size ? x : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", x / 2, right);
	return (_binary_search(array, x / 2, right, value));
}

/**
  * _binary_search -  a function that searches for a value in a
  * sorted array of integers using binary search.
  *
  * @array: pointer to the first element.
  * @left: starting index of sub-array.
  * @right: ending index of the sub-array.
  * @value: value to search.
  *
  * Return: If the value is not present or the array is NULL, -1.
  * Otherwise, the index where the value is located.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (x = left; x < right; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[x]);

		x = left + (right - left) / 2;
		if (array[x] == value)
			return (x);
		if (array[x] > value)
			right = x - 1;
		else
			left = x + 1;
	}

	return (-1);
}
