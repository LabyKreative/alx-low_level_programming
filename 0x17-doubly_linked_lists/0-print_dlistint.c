#include "lists.h"

/**
 * print_dlistint - a function that prints all elements of a dlistsint_t list.
 * @h: list
 * Return: count
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
