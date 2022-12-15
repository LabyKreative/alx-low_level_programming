#include "main.h"

/**
 * _isupper - A function that checks for uppercase character
 * Returns 1 if c is uppercase
 * Returns 0 otherwise
 * @c: input chracter
 */

int _isupper(int c)
{
	if ((c >= "A") && (c <= "Z"))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
