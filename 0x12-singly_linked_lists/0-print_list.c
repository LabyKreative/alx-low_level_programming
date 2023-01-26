#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: list.
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	unsigned int nodes = 0;
	const list_t *next_l;

	next_l = h;

	while (next_l)
	{
		if (!next_l->str)
			printf("[0] (nil)");
		else
			printf("[%u] %s", next_l->len, next_l->str);

		nodes++;
		next_l = next_l->next;
		printf("\n");
	}
	return (nodes);
}
