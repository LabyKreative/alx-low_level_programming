#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: String to reverse
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int x = 0;
	int str = 0;
	char alp;

	while (*(s + x) != '\0')
		x += 1;
	x -= 1;

	while (str < x)
	{
		alp = s[x];
		s[x] = s[str];
		s[str] = alp;
		str++;
		x--;
	}
}
