#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 * in a linked list_t list.
 * @h: num of elements in the list.
 * Return: EXIT_SUCCESS.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *node = h;

	while (node)
	{
		node = node->next;
		count++;
	}
	return (count);
}
