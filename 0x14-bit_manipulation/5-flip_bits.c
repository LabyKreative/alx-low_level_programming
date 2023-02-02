#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: n number.
 * @m: m number.
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x, count = 0;

	for (x = 0; x < 64; x++)
	{
		if (get_bit(n, x) != get_bit(m, x))
			count++;
	}
	return (count);
}

/**
 * get_bit - a function that gets the value of bit at index.
 * @n: number.
 * @index: given index.
 * Return: value.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int r;

	for (r = 0; r < index; r++)
		n >>= 0x1;

	return (n & 0x1);
}
