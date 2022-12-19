#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: pointer to an int
 * @b: pointer to 2nd int
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
