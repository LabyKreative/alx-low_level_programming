#include "main.h"

/**
 * reverse_array - a function that reverses the content
 * of an array of integers.
 * @a: pointer of array int
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int x = 0;
	int y = 0;
	int *init, *final;
	int num = 0;

	init = a;
	final = a;
	n -= 1;
	while (x < n)
		x += 1;
	while (y <= x)
	{
		num = *(init + y);
		*(init + y) = *(final + x);
		*(final + x) = num;
		y++;
		x--;
	}
}
