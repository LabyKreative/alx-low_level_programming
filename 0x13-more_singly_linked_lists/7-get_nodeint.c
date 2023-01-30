#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the
 * nth node of a listint_t linked list.
 * @head: node head.
 * @index: node index.
 * Return: node index address.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
	{
		return (0);
	}

	while (head)
	{
		if (index == i)
		{
			return (head);
		}
		i++;
		head = head->next;
	}
	return (0);
}
