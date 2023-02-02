#include "main.h"

/**
 * clear_bit -  a function that sets the value of a bit to 0 at a given index.
 * @n: pointer to number.
 * @index: index.
 * Return: 1 if worked, -1 if failed.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int repl;

	if (index > 64)
		return (-1);

	repl = *n;
	repl = get_bit(repl, index);

	if (repl == 0x0)
		return (1);
	*n = (*n) - power(2, index);
	return (1);
}
/**
 * power - function that sets the power of base.
 * @base: base.
 * @exp: exponent.
 * Return: base raised to exponent.
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
 * get_bit - a function that gets the value of bit at index.
 * @n: number.
 * @index: index.
 * Return: value.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int r;

	for (r = 0; r < index; r++)
		n >>= 0x1;

	return (n & 0x1);
}
