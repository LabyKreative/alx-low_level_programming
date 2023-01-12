#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: string one.
 * @s2: string two.
 * @n: s2 to concatenate to s1.
 * Return: EXIT_SUCCESS.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nstr, *vact;
	unsigned int x, ln, y;
	unsigned int size;

	ln = 0;
	vact = "";
	if (s1 == NULL)
		s1 = vact;
	if (s2 == NULL)
		s2 = vact;
	while (s1[ln] != '\0')
		ln++;
	size = (ln + n) * sizeof(*nstr);
	nstr = malloc(size + 1);
	if (nstr == NULL)
		return (NULL);
	x = 0;
	while (x < size && s1[x] != '\0')
	{
		nstr[x] = s1[x];
		x++;
	}
	y = 0;
	while (x < size && s2[y] != '\0')
	{
		nstr[x] = s2[y];
		x++;
		y++;
	}
	nstr[x] = '\0';
	return (nstr);
}
