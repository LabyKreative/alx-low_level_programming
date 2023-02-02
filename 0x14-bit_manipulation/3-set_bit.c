#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @n: pointer to number.
 * @index: given index.
 * Return: 1 if it worked, or -1 if an error occured.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int repl;

	if (index > 64)
		return (-1);

	repl = *n;
	repl = get_bit(repl, index);

	if (repl == 0x1)
		return (1);
	*n = (*n) + power(2, index);
	return (1);
}
/**
 * power - power of base.
 * @base: base.
 * @exp: exponent.
 * Return: base raised.
 */
unsigned int power(unsigned int base, unsigned int exp)
{
	unsigned int x = 0;
	unsigned int raised = 1;


	if (exp == 0)
		return (1);

	for (x = 0; x < exp; x++)
		raised = raised * base;
	return (raised);
}
/**
 * get_bit - get value of bit at index.
 * Return: value
 * @n: number.
 * @index: index given.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int r;

	for (r = 0; r < index; r++)
		n >>= 0x1;

	return (n & 0x1);
}
