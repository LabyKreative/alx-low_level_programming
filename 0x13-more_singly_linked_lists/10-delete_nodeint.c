#include "lists.h"

/**
 * delete_nodeint_at_index -  a function that deletes the node at
 * index index of a listint_t linked list.
 * @head: node head.
 * @index: node index.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *node;

	if (!*head)
		return (-1);

	prev = get_nodeint_at_index(*head, index - 1);
	node = get_nodeint_at_index(*head, index);
	if (!node)
		return (-1);
	if (index != 0)
	{
		prev->next = node->next;
		node->next = 0;
	}
	else
	{
		*head = node->next;
	}
	free(node);
	return (1);
}

/**
 * get_nodeint_at_index - a function that gets node at index.
 * @head: node head.
 * @index: node node.
 * Return: node index address.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (!head)
		return (0);

	while (head)
	{
		if (index == x)
			return (head);
		x++;
		head = head->next;
	}
	return (0);
}
