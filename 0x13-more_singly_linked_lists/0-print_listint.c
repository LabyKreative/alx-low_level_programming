#include "lists.h"

/**
 * print_listint -  a function that prints all the elements of a listint_t list.
 * @h: list.
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d", h->n);
		h = h->next;
		printf("\n");
	}
	return (nodes);
}
