#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: string one.
 * @s2: string two.
 * Return: EXIT_SUCCESS.
 */

char *str_concat(char *s1, char *s2)
{
	char *s3, *ntdf;
	int x, ln1, ln2, y;

	ntdf = "";
	if (s1 == NULL)
		s1 = ntdf;
	if (s2 == NULL)
		s2 = ntdf;
	x = ln1 = ln2 = 0;
	while (s1[ln1] != '\0')
	{
		ln1++;
	}
	while (s2[ln2] != '\0')
	{
		ln2++;
	}
	ln2++;
	s3 = malloc((ln1 + ln2) * sizeof(*s1));
	if (s3 == NULL)
		return (NULL);
	x = 0;
	while (x < ln1)
	{
		s3[x] = s1[x];
		x++;
	}
	y = 0;
	while (y <= ln2)
	{
		s3[x] = s2[y];
		x++;
		y++;
	}
	return (s3);
}
