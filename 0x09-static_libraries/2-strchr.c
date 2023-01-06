#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: string
 * @b: character to locate
 * Return: Always 0.
 */
char *_strchr(char *s, char b)
{
	while (*s != 0)
	{
		if (*s == b)
			return (s);
		s++;
	}

	if (*s == b)
		return (s);

	return ('\0');
}
