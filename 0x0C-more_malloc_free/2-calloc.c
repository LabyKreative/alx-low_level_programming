#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: elements.
 * @size: bytes size of elements.
 * Return: EXIT_SUCCESS.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem_ar;
	unsigned int mem_ar_size, x;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	mem_ar_size = nmemb * size;
	mem_ar = malloc(mem_ar_size);
	if (mem_ar == NULL)
	{
		return (NULL);
	}
	while (x < mem_ar_size)
	{
		mem_ar[x] = 0;
		x++;
	}
	return (mem_ar);
}
