#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: pointer to a string
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x += 1;
	}
	return (x);
}
