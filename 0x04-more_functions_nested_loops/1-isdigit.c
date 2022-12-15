#include "main.h"

/**
 * _isdigit - Entry point.
 *
 * @c: input character.
 *
 * Description: checks for a digit.
 *
 * Return: 1 if c is a digit, 0 otherwise.
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
