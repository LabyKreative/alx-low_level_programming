#include "main.h"

/**
 * binary_to_uint - converts binary num to uint binary.
 * @b: binary number as string.
 * Return: converted number, or 0 if there is one or more
 * chars in the string b that is not 0 or 1. b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec, size, x, exp;

	if (!b)
		return (0);
	size = _strlen(b);
	x = 0;
	dec = 0;
	exp = size - 1;

	while (b[x])
	{
		if (b[x] == '1')
			dec += power(2, exp);
		else if (b[x] != '0')
			return (0);
		exp--;
		x++;
	}
	return (dec);
}

/**
 * _strlen - a function that len string.
 * @s: is a pointer to a char.
 * Return: len.
 */
unsigned int _strlen(const char *s)
{
	unsigned int x = 0;

	while (*(s + x) != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * power - a function that raises the power of base.
 * @base: base
 * @exp: exponent
 * Return: base raised to exp
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
