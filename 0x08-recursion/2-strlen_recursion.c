#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: string to return.
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	else
	{
		return (1 + _strlen_recursion(s));
	}
}
