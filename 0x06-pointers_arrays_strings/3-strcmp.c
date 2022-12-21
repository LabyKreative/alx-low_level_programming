#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: pointer to char source 1
 * @s2: pointer to char source 2
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0;
	int ltr;

	while (*(s1 + x) != '\0')
	{
		if (*(s1 + x) > *(s2 + x))
		{
			ltr = *(s1 + x) - *(s2 + x);
			return (ltr);
		}
		else if (*(s1 + x) < *(s2 + x))
		{
			ltr = *(s1 + x) - *(s2 + x);
			return (ltr);
		}
		x += 1;
	}
	return (0);
}
