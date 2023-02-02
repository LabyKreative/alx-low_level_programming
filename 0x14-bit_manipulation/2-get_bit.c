#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: number.
 * @index: given index.
 * Return: value.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	if (index > 64)
		return (-1);

	for (x = 0; x < index; x++)
		n >>= 0x1;

	return (n & 0x1);
}
