#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: string
 * @b: set of bytes
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *b)
{
	unsigned int x;

	while (*s != 0)
	{
		for (x = 0; *(b + x) != 0; x++)
		{
			if (*s == *(b + x))
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
