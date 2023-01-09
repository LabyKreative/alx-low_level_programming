#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: array size.
 * @c: char to initialize.
 * Return: EXIT_SUCCESS.
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int x;

	x = 0;
	if (size != 0)
		ar = malloc(size * sizeof(c));
	else
		return (NULL);
	if (ar == NULL)
		return (NULL);
	while (x < size)
	{
		ar[x] = c;
		x++;
	}
	return (ar);
}
