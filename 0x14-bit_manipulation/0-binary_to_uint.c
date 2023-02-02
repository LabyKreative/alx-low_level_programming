#include "main.h"

/**
 * binary_to_uint - converts binary num to uint binary.
 * @b: binary number as string.
 * Return: converted number, or 0 if there is one or more
 * chars in the string b that is not 0 or 1. b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
	{
		return (0);
	}
	unsigned int result = 0;
	int power = 1;
	char current_char;

	for (int i = strlen(b) - 1; i >= 0; i--)
	{
		current_char = b[i];
	if (current_char != '0' && current_char != '1')
	{
		return (0);
	}
	result += (current_char - '0') * power;
	power *= 2;
	}
	return (result);
}
