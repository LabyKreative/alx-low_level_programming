#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: Pointer to the start of the list.
 * Return: EXIT_SUCCESS.
 */
void free_list(list_t *head)
{
	list_t *node = head;

	/* free strings */

	while (node)
	{
		free(node->str);
		node = node->next;
	}

	/* free nodes */

	while (head)
	{
		list_t *temp = head;

		head = head->next;
		free(temp);
	}
}

/**
 * get_last_node - a function that gets the last node of lists.
 * @head: node head.
 * Return: address of last element.
 */
list_t *get_last_node(list_t *head)
{
	list_t *last = head;

	if (!last)
	{
		return (0);
	}

	while (last->next)
	{
		last = last->next;
	}
	return (last);
}
