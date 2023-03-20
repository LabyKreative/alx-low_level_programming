#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @s1: search area
 * @s2: string to be searcht
 * Return: Always 0.
 */
char *_strstr(char *s1, char *s2)
{
	unsigned int x, size = 0;

	while (*(s2 + size) != 0)
	{
		size++;
	}

	while (*s1 != 0)
	{
		unsigned int y = 0;

		for (x = 0; x < size; x++)
		{
			if (*(s1 + x) == *(s2 + x))
				y++;
		}
		if (y == size)
		{
			return (s1);
		}
		s1++;
	}

	return (0);
}
