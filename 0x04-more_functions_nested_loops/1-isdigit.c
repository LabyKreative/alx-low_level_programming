#include "main.h"

/**
 * _isdigit - Entry point.
 *
 * @c: input character.
 *
 * Description: checks for a digit.
 *
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
	if (c >= "0" && c <= "9")
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
