#include "main.h"

/**
 * _atoi - a function that convert a string to an integer
 * @s: string to convert
 * Return: Always 0.
 */


int _atoi(char *s)
{
	int x = 0;
	int y = 0;
	int ltn = 1;

	while ((s[x] < '0' || s[x] > '9') && s[x] != 0)
	{
		if (s[x] == '-')
			ltn *= -1;
		x++;
	}
	while ((s[x] >= '0' && s[x] <= '9') && s[x] != 0)
	{
		if (y >= 0)
		{
			y = y * 10 - (s[x] - '0');
			x++;
		}
		else
		{
			y = y * 10 - (s[x] - '0');
			x++;
		}
	}
	ltn *= -1;
	return (y * ltn);
}
