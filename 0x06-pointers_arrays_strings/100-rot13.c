#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 * Return: Always 0.
 * @s: string
 */
char *rot13(char *s)
{
	char half1[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";

	char half2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int x = 0, y;

	while (s[x] != 0)
	{
		char z = s[x];

		for (y = 0; y < 52; y++)
		{
			if (z == half1[y])
			{
				s[x] = half2[y];
			}
		}
		x++;
	}
	return (s);
}
