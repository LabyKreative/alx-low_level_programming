#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @s: Pointer to Char
 * Return: Always 0.
 */

char *leet(char *s)
{
	int x = 0;
	int y = 0;
	char *l = "aAeEoOlLtT";
	char *n = "4433001177";

	while (*(s + x) != '\0')
	{
		while (*(l + y) != '\0')
		{
			if (*(s + x) == *(l + y))
				*(s + x)  = *(n + y);
			y++;
		}
		y = 0;
		x++;
	}
	return (s);
}
