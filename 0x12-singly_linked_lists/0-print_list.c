#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: list.
 * Return: EXIT_SUCCESS.
 */

size_t print_list(const list_t *h)
{
	size_t nodes;

	if (h == NULL)
		return (0);
	nodes = 1;
	printf("[%d] %s\n", h->len, h->str);
	if (h->next != NULL)
		nodes += print_list(h->next);
	return (nodes);
}
