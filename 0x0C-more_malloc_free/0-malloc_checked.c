#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: memory size.
 * Return: EXIT_SUCCESS.
 */

void *malloc_checked(unsigned int b)
{
	void *mem_add;

	mem_add = malloc(b);
	if (mem_add == NULL)
	{
		exit(98);
	}
	return (mem_add);
}
