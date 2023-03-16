#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node
 * at a given position.
 * @h: list
 * @idx: index node
 * @n: data
 * Return: EXIT_SUCCESS.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *current = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (i < idx - 1)
	{
		current =  current->next;
		if (!current)
			return (0);
		i++;
	}
	if (!current->next)
		return (add_dnodeint_end(h, n));


	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0);
	new->n = n;
	new->prev = current;
	new->next = current->next;
	current->next->prev = new;
	current->next = new;
	return (new);
}
