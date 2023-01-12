#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block
 * using malloc and free.
 * @ptr: previous malloc pointer.
 * @old_size: previous size.
 * @new_size: new size.
 * Return: EXIT_SUCCESS.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int min_size = old_size > new_size ? new_size : old_size;

	unsigned int max_size = old_size == min_size ? new_size : old_size;

	void *pt;

	unsigned int x;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		pt = malloc(new_size);

		if (pt == NULL)
			return (NULL);
		return (pt);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size < old_size)
	{
		char *ppt;

		ppt = ((char *)ptr);
		free(ppt + new_size);
	}
	pt = malloc(max_size);
	if (pt == NULL)
		return (NULL);
	for (x = 0; x < min_size; x++)
		((char *)pt)[x] = ((char *)ptr)[x];
	free(ptr);
	return (pt);
}
