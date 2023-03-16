#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes the node
 * at index index of a dlistint_t linked list.
 * @head: head node
 * @index: nth node
 * Return: Returns: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;

	if (!*head)
		return (-1);

	current = get_dnodeint_at_index(*head, index);
	if (!current)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		if (current->next)
			current->next->prev = 0;
		free(current);
		return (1);
	}
	current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;
	free(current);
	return (1);
}

/**
 * get_dnodeint_at_index - a function that gets a new node at the end
 * of a dlistint_t list.
 * @head: head node
 * @index: nth node
 * Return: EXIT_SUCCESS.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *current = head;

	while (current)
	{
		if (counter == index)
			return (current);
		counter++;
		current = current->next;
	}
	return (0);
}
